# -*- coding: utf-8 -*-
"""
Created on Sat Mar 20 11:54:56 2021

@author: dof
"""

import math

import colorspacious
import matplotlib.pyplot as plt
import numpy as np

from matplotlib.colors import ListedColormap
from scipy.ndimage import filters
from scipy.signal import savgol_filter


'''
J = lightness
C = chroma
h = hue
'''

# Resolution of colorspace
J_RES = 512
C_RES = 512

# NAME = 'So normal'
# ANGLE = np.pi * 2 * 0.7
# OFFSET = np.pi * 2 * 0.64
# CCW = False
# SMOOTH = 1/3

# NAME = 'Wow unique'
# ANGLE = np.pi * 2 * 1.0
# OFFSET = np.pi * 2 * 0.275
# CCW = True
# SMOOTH = 1/2

# NAME = 'Viridis-like (red bg)'
# ANGLE = np.pi * 2 * 1.0
# OFFSET = np.pi * 2 * 0.1
# CCW = True
# SMOOTH = 1/4

# NAME = 'Viridis-like (purple bg)'
# ANGLE = np.pi * 2 * 0.9
# OFFSET = np.pi * 2 * 0.1
# CCW = True
# SMOOTH = 1/5

NAME = 'Audacity proposal'
ANGLE = np.pi * 2 * 0.875
OFFSET = np.pi * 2 * 0.5
CCW = False
SMOOTH = 1/3


j_space = np.linspace(0.1, 100, J_RES)
c_space = np.linspace(0, 50, C_RES)

if CCW:
    h_ = np.linspace(ANGLE+OFFSET, OFFSET, J_RES)
else:
    h_ = np.linspace(OFFSET, ANGLE+OFFSET, J_RES)

# Generate Jpapbp colorspace
jpapbp = np.zeros([C_RES, J_RES, 3])
for jdx, jp in enumerate(j_space):
    for cdx, chroma in enumerate(c_space):
        ap = np.cos(h_[jdx]) * chroma
        bp = np.sin(h_[jdx]) * chroma
        jpapbp[cdx, jdx] = (jp, ap, bp)

# Convert to sRGB
rgb = colorspacious.cspace_convert(jpapbp, "CAM02-UCS", "sRGB1")

# Get chroma limit of sRGB
c_limit = np.zeros_like(j_space)
for jdx in range(J_RES):
    max_cdx = 0
    for cdx in range(1, C_RES):
        if np.any(rgb[cdx, jdx] <= 0) or np.any(1 < rgb[cdx, jdx]):
            max_cdx = cdx - 1
            break
        
    c_limit[jdx] = max_cdx


# Generate contour
# b = C_RES * 3 / 4 * 0.9
# d = np.linspace(0, 100, J_RES)
# c_smoothed = -b/(50**2) * (d-50)**2 + b


# Smooth contour
c_smoothed = np.concatenate([-c_limit[::-1][:-1], c_limit, -c_limit[::-1][1:]])

# c_smoothed = filters.uniform_filter1d(c_smoothed, int(J_RES*SMOOTH))

c_smoothed = savgol_filter(c_smoothed, math.ceil(J_RES*SMOOTH*1.5/2)*2 - 1, 3)
c_smoothed = filters.uniform_filter1d(c_smoothed, int(J_RES*SMOOTH*1.5/2)) * 0.95

c_smoothed = c_smoothed[J_RES:2*J_RES]

c_selected = c_smoothed.clip(min=0).astype(int)

# Generate gaumt image
gamut_image = np.copy(rgb)
gamut_image[gamut_image<=0] = 1
gamut_image[1<gamut_image] = 0

# Select color, and mark on image
cm_data = []
for jdx, max_c in enumerate(c_selected):
    if 0 == jdx % 2:
        gamut_image[max_c, jdx] = 1
    else:
        gamut_image[max_c, jdx] = 0


c_real = c_smoothed * 50 / C_RES

cm_data = []
for jdx, chroma in enumerate(c_real):
    jp = j_space[jdx]
    ap = np.cos(h_[jdx]) * chroma
    bp = np.sin(h_[jdx]) * chroma

    cm_data.append([jp, ap, bp])

cm_data = colorspacious.cspace_convert(cm_data, "CAM02-UCS", "sRGB1")
cm_data = np.clip(cm_data, 0, 1)

plt.figure(figsize=[10, 10])
plt.imshow(gamut_image)


test_cm = ListedColormap(cm_data, name=NAME)

try:
    from viscm import viscm
    viscm(test_cm)
except ImportError:
    print("viscm not found, falling back on simple display")
    plt.imshow(np.linspace(0, 100, 256)[None, :], aspect='auto', cmap=test_cm)

cm255 = np.asarray(cm_data) * 255
seg_simple = 8

fix, ax = plt.subplots()
plt.plot(cm255[:,0], 'r')
plt.plot(cm255[:,1], 'g')
plt.plot(cm255[:,2], 'b')
plt.plot(np.mean(cm255, axis=1))
# plt.plot(np.arange(0, 257, 256/seg_simple), np.asarray(cm_simplified)*256)
# plt.plot(np.arange(0, 257, 256/seg_simple), np.mean(np.asarray(cm_simplified)*256, axis=1))
ax.set_xticks(np.linspace(0, J_RES, seg_simple, endpoint=False))
ax.set_yticks(np.arange(0, 257, 16))

ax.grid(which='both')
plt.show()

cm_data_u8 = (cm_data*255 + 0.5).astype('uint8')
with open('AColorResources.h', 'wt') as output_file:
    print('const unsigned char spectroGradient[512][3] = {', file=output_file)
    for r, g, b in cm_data_u8:
        print('   {%3d, %3d, %3d},' % (r, g, b), file=output_file)
    print('};', file=output_file)

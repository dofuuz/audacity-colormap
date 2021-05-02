const unsigned char spectroGradient[256][3] = {
   {  0,   0,   0},
   {  0,   0,   0},
   {  0,   0,   0},
   {  0,   1,   1},
   {  0,   1,   1},
   {  1,   1,   1},
   {  1,   2,   2},
   {  1,   3,   2},
   {  1,   3,   3},
   {  1,   4,   4},
   {  1,   5,   5},
   {  1,   6,   6},
   {  2,   7,   7},
   {  2,   8,   8},
   {  2,   9,   9},
   {  2,  11,  11},
   {  2,  12,  12},
   {  2,  13,  14},
   {  2,  14,  15},
   {  1,  16,  17},
   {  1,  17,  18},
   {  1,  18,  20},
   {  1,  19,  21},
   {  0,  20,  23},
   {  0,  22,  25},
   {  0,  23,  27},
   {  0,  24,  28},
   {  0,  25,  30},
   {  0,  26,  32},
   {  0,  27,  34},
   {  0,  28,  36},
   {  0,  30,  38},
   {  0,  31,  40},
   {  0,  32,  42},
   {  0,  33,  44},
   {  0,  34,  46},
   {  0,  35,  48},
   {  0,  36,  50},
   {  0,  37,  52},
   {  0,  38,  55},
   {  0,  39,  57},
   {  0,  40,  59},
   {  0,  41,  62},
   {  0,  42,  64},
   {  0,  42,  67},
   {  0,  43,  69},
   {  0,  44,  72},
   {  0,  45,  75},
   {  0,  46,  77},
   {  0,  46,  80},
   {  0,  47,  83},
   {  0,  48,  86},
   {  0,  48,  88},
   {  0,  49,  91},
   {  0,  49,  94},
   {  0,  50,  97},
   {  0,  50, 100},
   {  0,  51, 103},
   {  3,  51, 106},
   {  6,  51, 109},
   { 10,  52, 112},
   { 14,  52, 115},
   { 18,  52, 118},
   { 21,  52, 121},
   { 24,  52, 124},
   { 28,  52, 126},
   { 31,  52, 129},
   { 34,  52, 132},
   { 37,  52, 135},
   { 40,  52, 138},
   { 43,  52, 141},
   { 46,  51, 144},
   { 49,  51, 146},
   { 52,  51, 149},
   { 55,  50, 152},
   { 58,  50, 154},
   { 61,  49, 157},
   { 64,  48, 159},
   { 67,  48, 162},
   { 70,  47, 164},
   { 73,  46, 166},
   { 75,  46, 169},
   { 78,  45, 171},
   { 81,  44, 173},
   { 84,  43, 175},
   { 87,  42, 176},
   { 90,  41, 178},
   { 93,  40, 180},
   { 95,  39, 181},
   { 98,  38, 183},
   {101,  37, 184},
   {104,  36, 185},
   {106,  35, 186},
   {109,  33, 187},
   {112,  32, 188},
   {114,  31, 189},
   {117,  30, 190},
   {120,  29, 190},
   {122,  28, 191},
   {125,  27, 191},
   {127,  25, 191},
   {130,  24, 192},
   {132,  23, 192},
   {135,  22, 192},
   {137,  21, 192},
   {140,  20, 191},
   {142,  19, 191},
   {145,  18, 191},
   {147,  18, 190},
   {149,  17, 190},
   {152,  16, 189},
   {154,  16, 188},
   {156,  16, 187},
   {159,  16, 187},
   {161,  16, 186},
   {163,  16, 184},
   {165,  16, 183},
   {167,  16, 182},
   {170,  17, 181},
   {172,  18, 179},
   {174,  18, 178},
   {176,  19, 177},
   {178,  20, 175},
   {180,  21, 173},
   {182,  22, 172},
   {184,  23, 170},
   {186,  25, 168},
   {188,  26, 166},
   {190,  27, 165},
   {192,  28, 163},
   {194,  30, 161},
   {196,  31, 159},
   {198,  32, 157},
   {199,  34, 155},
   {201,  35, 153},
   {203,  37, 151},
   {205,  38, 149},
   {207,  40, 147},
   {208,  41, 144},
   {210,  43, 142},
   {212,  44, 140},
   {213,  46, 138},
   {215,  48, 136},
   {216,  49, 134},
   {218,  51, 132},
   {219,  52, 129},
   {221,  54, 127},
   {222,  56, 125},
   {224,  57, 123},
   {225,  59, 121},
   {227,  61, 119},
   {228,  62, 116},
   {229,  64, 114},
   {231,  65, 112},
   {232,  67, 110},
   {233,  69, 108},
   {235,  70, 106},
   {236,  72, 103},
   {237,  74, 101},
   {238,  75,  99},
   {240,  77,  97},
   {241,  79,  95},
   {242,  80,  93},
   {243,  82,  91},
   {244,  84,  89},
   {245,  86,  86},
   {246,  87,  84},
   {247,  89,  82},
   {248,  91,  80},
   {249,  93,  78},
   {250,  95,  76},
   {251,  96,  74},
   {252,  98,  72},
   {253, 100,  69},
   {254, 102,  67},
   {254, 104,  65},
   {255, 106,  63},
   {255, 108,  61},
   {255, 110,  59},
   {255, 112,  57},
   {255, 114,  55},
   {255, 116,  52},
   {255, 118,  50},
   {255, 120,  48},
   {255, 122,  46},
   {255, 124,  44},
   {255, 127,  42},
   {255, 129,  40},
   {255, 131,  38},
   {255, 133,  36},
   {255, 136,  34},
   {255, 138,  32},
   {255, 140,  31},
   {255, 142,  29},
   {255, 145,  28},
   {255, 147,  27},
   {255, 150,  26},
   {255, 152,  26},
   {255, 154,  26},
   {255, 157,  26},
   {255, 159,  27},
   {255, 162,  28},
   {255, 164,  29},
   {255, 167,  31},
   {255, 169,  33},
   {255, 172,  35},
   {254, 174,  37},
   {253, 176,  40},
   {252, 179,  43},
   {251, 181,  46},
   {250, 184,  50},
   {249, 186,  53},
   {248, 189,  57},
   {247, 191,  61},
   {246, 193,  65},
   {244, 196,  69},
   {243, 198,  73},
   {242, 200,  78},
   {241, 203,  82},
   {239, 205,  87},
   {238, 207,  91},
   {237, 209,  96},
   {236, 212, 101},
   {235, 214, 106},
   {234, 216, 111},
   {233, 218, 116},
   {232, 220, 121},
   {231, 221, 126},
   {230, 223, 131},
   {229, 225, 137},
   {229, 227, 142},
   {228, 228, 147},
   {228, 230, 153},
   {228, 232, 158},
   {228, 233, 163},
   {228, 234, 168},
   {228, 236, 174},
   {229, 237, 179},
   {229, 238, 184},
   {230, 239, 189},
   {231, 241, 194},
   {232, 242, 199},
   {233, 243, 204},
   {235, 244, 209},
   {236, 245, 213},
   {238, 245, 218},
   {240, 246, 222},
   {241, 247, 226},
   {243, 248, 230},
   {245, 249, 234},
   {248, 250, 238},
   {250, 250, 241},
   {252, 251, 245},
   {254, 252, 248},
   {255, 253, 251},
   {255, 254, 253},
};
const unsigned char selectedColormap[256][3] = {
   { 77,  77,  77},
   { 77,  77,  77},
   { 77,  77,  77},
   { 77,  77,  77},
   { 77,  77,  77},
   { 77,  78,  77},
   { 77,  78,  78},
   { 77,  79,  78},
   { 77,  79,  79},
   { 77,  80,  79},
   { 78,  80,  80},
   { 78,  81,  81},
   { 78,  82,  82},
   { 78,  83,  83},
   { 78,  84,  84},
   { 78,  85,  85},
   { 78,  86,  86},
   { 78,  87,  87},
   { 78,  88,  89},
   { 78,  89,  90},
   { 77,  90,  91},
   { 77,  91,  92},
   { 77,  92,  94},
   { 77,  93,  95},
   { 77,  94,  96},
   { 76,  95,  98},
   { 76,  96,  99},
   { 76,  97, 101},
   { 75,  97, 102},
   { 75,  98, 103},
   { 74,  99, 105},
   { 74, 100, 107},
   { 73, 101, 108},
   { 73, 102, 110},
   { 72, 103, 111},
   { 72, 104, 113},
   { 71, 104, 115},
   { 70, 105, 117},
   { 70, 106, 118},
   { 69, 107, 120},
   { 69, 108, 122},
   { 68, 108, 124},
   { 68, 109, 126},
   { 67, 110, 128},
   { 67, 110, 130},
   { 67, 111, 132},
   { 67, 112, 134},
   { 66, 112, 136},
   { 67, 113, 138},
   { 67, 113, 140},
   { 67, 114, 143},
   { 68, 115, 145},
   { 69, 115, 147},
   { 70, 115, 149},
   { 71, 116, 152},
   { 72, 116, 154},
   { 74, 117, 156},
   { 76, 117, 159},
   { 79, 117, 161},
   { 81, 118, 163},
   { 85, 118, 166},
   { 88, 118, 168},
   { 91, 118, 171},
   { 93, 118, 173},
   { 96, 118, 175},
   { 99, 118, 178},
   {101, 118, 180},
   {104, 118, 182},
   {106, 118, 185},
   {109, 118, 187},
   {111, 118, 189},
   {113, 118, 191},
   {116, 117, 194},
   {118, 117, 196},
   {120, 117, 198},
   {123, 116, 200},
   {125, 116, 202},
   {128, 115, 204},
   {130, 115, 206},
   {132, 114, 208},
   {135, 114, 210},
   {137, 113, 211},
   {139, 112, 213},
   {141, 112, 215},
   {144, 111, 216},
   {146, 110, 218},
   {148, 109, 219},
   {151, 109, 220},
   {153, 108, 221},
   {155, 107, 223},
   {157, 106, 224},
   {159, 105, 225},
   {162, 104, 226},
   {164, 103, 226},
   {166, 102, 227},
   {168, 101, 228},
   {170, 101, 228},
   {172, 100, 229},
   {174,  99, 229},
   {176,  98, 229},
   {178,  97, 230},
   {180,  96, 230},
   {182,  95, 230},
   {184,  94, 230},
   {186,  93, 230},
   {188,  93, 230},
   {190,  92, 229},
   {192,  91, 229},
   {194,  91, 229},
   {196,  90, 228},
   {198,  90, 228},
   {200,  89, 227},
   {202,  89, 226},
   {203,  89, 226},
   {205,  89, 225},
   {207,  89, 224},
   {209,  89, 223},
   {210,  90, 222},
   {212,  90, 221},
   {214,  91, 220},
   {216,  91, 219},
   {217,  92, 218},
   {219,  93, 216},
   {221,  93, 215},
   {222,  94, 214},
   {224,  95, 212},
   {225,  96, 211},
   {227,  97, 210},
   {229,  98, 208},
   {230,  99, 207},
   {232, 100, 205},
   {233, 101, 204},
   {235, 102, 202},
   {236, 104, 200},
   {238, 105, 199},
   {239, 106, 197},
   {240, 107, 195},
   {242, 108, 194},
   {243, 110, 192},
   {244, 111, 190},
   {246, 112, 189},
   {247, 113, 187},
   {248, 115, 185},
   {250, 116, 183},
   {251, 117, 182},
   {252, 118, 180},
   {253, 120, 178},
   {254, 121, 177},
   {255, 122, 175},
   {255, 124, 173},
   {255, 125, 171},
   {255, 126, 170},
   {255, 128, 168},
   {255, 129, 166},
   {255, 130, 164},
   {255, 131, 163},
   {255, 133, 161},
   {255, 134, 159},
   {255, 135, 158},
   {255, 137, 156},
   {255, 138, 154},
   {255, 139, 152},
   {255, 141, 151},
   {255, 142, 149},
   {255, 144, 147},
   {255, 145, 146},
   {255, 146, 144},
   {255, 148, 142},
   {255, 149, 141},
   {255, 151, 139},
   {255, 152, 137},
   {255, 154, 135},
   {255, 155, 134},
   {255, 157, 132},
   {255, 158, 130},
   {255, 160, 129},
   {255, 161, 127},
   {255, 163, 125},
   {255, 164, 124},
   {255, 166, 122},
   {255, 168, 120},
   {255, 169, 118},
   {255, 171, 117},
   {255, 173, 115},
   {255, 174, 113},
   {255, 176, 112},
   {255, 178, 110},
   {255, 180, 108},
   {255, 181, 107},
   {255, 183, 105},
   {255, 185, 104},
   {255, 187, 102},
   {255, 189, 101},
   {255, 190, 100},
   {255, 192,  99},
   {255, 194,  98},
   {255, 196,  98},
   {255, 198,  97},
   {255, 200,  97},
   {255, 202,  97},
   {255, 204,  98},
   {255, 206,  99},
   {255, 208, 100},
   {255, 210, 101},
   {255, 212, 103},
   {255, 214, 104},
   {255, 216, 106},
   {255, 218, 109},
   {255, 220, 111},
   {255, 222, 114},
   {255, 224, 116},
   {255, 226, 119},
   {255, 227, 122},
   {255, 229, 125},
   {255, 231, 128},
   {255, 233, 132},
   {255, 235, 135},
   {255, 237, 139},
   {255, 239, 142},
   {255, 241, 146},
   {255, 242, 149},
   {255, 244, 153},
   {255, 246, 157},
   {255, 247, 161},
   {255, 249, 165},
   {255, 251, 169},
   {255, 252, 173},
   {255, 254, 177},
   {255, 255, 182},
   {255, 255, 186},
   {255, 255, 190},
   {255, 255, 194},
   {255, 255, 199},
   {255, 255, 203},
   {255, 255, 207},
   {255, 255, 211},
   {255, 255, 215},
   {255, 255, 220},
   {255, 255, 224},
   {255, 255, 228},
   {255, 255, 232},
   {255, 255, 236},
   {255, 255, 240},
   {255, 255, 243},
   {255, 255, 247},
   {255, 255, 251},
   {255, 255, 254},
   {255, 255, 255},
   {255, 255, 255},
   {255, 255, 255},
   {255, 255, 255},
   {255, 255, 255},
   {255, 255, 255},
   {255, 255, 255},
   {255, 255, 255},
   {255, 255, 255},
};

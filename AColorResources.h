const unsigned char spectroGradient[512][3] = {
   {  0,   0,   0},
   {  0,   0,   0},
   {  0,   0,   0},
   {  0,   0,   0},
   {  0,   0,   0},
   {  1,   1,   1},
   {  1,   1,   1},
   {  1,   1,   1},
   {  1,   1,   1},
   {  2,   1,   1},
   {  2,   2,   2},
   {  2,   2,   2},
   {  2,   2,   2},
   {  3,   3,   3},
   {  3,   3,   3},
   {  3,   3,   3},
   {  3,   4,   4},
   {  3,   4,   4},
   {  4,   5,   5},
   {  4,   5,   5},
   {  4,   6,   5},
   {  4,   6,   6},
   {  4,   7,   6},
   {  5,   7,   7},
   {  5,   8,   8},
   {  5,   8,   8},
   {  5,   9,   9},
   {  5,  10,   9},
   {  5,  10,  10},
   {  6,  11,  11},
   {  6,  12,  12},
   {  6,  12,  12},
   {  6,  13,  13},
   {  6,  13,  14},
   {  6,  14,  14},
   {  6,  15,  15},
   {  6,  15,  16},
   {  6,  16,  17},
   {  6,  17,  17},
   {  6,  17,  18},
   {  6,  18,  19},
   {  6,  19,  20},
   {  6,  19,  20},
   {  5,  20,  21},
   {  5,  20,  22},
   {  5,  21,  23},
   {  5,  22,  24},
   {  5,  22,  25},
   {  4,  23,  25},
   {  4,  23,  26},
   {  4,  24,  27},
   {  3,  25,  28},
   {  3,  25,  29},
   {  3,  26,  30},
   {  2,  27,  31},
   {  2,  27,  32},
   {  1,  28,  33},
   {  0,  28,  34},
   {  0,  29,  35},
   {  0,  30,  36},
   {  0,  30,  37},
   {  0,  31,  38},
   {  0,  31,  40},
   {  0,  32,  41},
   {  0,  33,  42},
   {  0,  33,  43},
   {  0,  34,  44},
   {  0,  34,  45},
   {  0,  35,  47},
   {  0,  35,  48},
   {  0,  36,  49},
   {  0,  36,  50},
   {  0,  37,  51},
   {  0,  38,  53},
   {  0,  38,  54},
   {  0,  39,  55},
   {  0,  39,  56},
   {  0,  40,  58},
   {  0,  40,  59},
   {  0,  41,  60},
   {  0,  41,  61},
   {  0,  41,  63},
   {  0,  42,  64},
   {  0,  42,  65},
   {  0,  43,  67},
   {  0,  43,  68},
   {  0,  44,  69},
   {  0,  44,  71},
   {  0,  45,  72},
   {  0,  45,  74},
   {  0,  45,  75},
   {  0,  46,  76},
   {  0,  46,  78},
   {  0,  47,  79},
   {  0,  47,  81},
   {  0,  47,  82},
   {  0,  48,  84},
   {  0,  48,  85},
   {  0,  48,  87},
   {  0,  49,  88},
   {  0,  49,  90},
   {  0,  49,  91},
   {  0,  49,  93},
   {  0,  50,  94},
   {  0,  50,  96},
   {  0,  50,  97},
   {  0,  50,  99},
   {  0,  51, 101},
   {  0,  51, 102},
   {  0,  51, 104},
   {  0,  51, 105},
   {  0,  51, 107},
   {  0,  52, 109},
   {  0,  52, 110},
   {  0,  52, 112},
   {  0,  52, 114},
   {  0,  52, 115},
   {  0,  52, 117},
   {  0,  52, 118},
   {  0,  52, 120},
   {  1,  52, 122},
   {  3,  52, 123},
   {  6,  53, 125},
   {  8,  53, 127},
   { 11,  52, 128},
   { 14,  52, 130},
   { 16,  52, 132},
   { 18,  52, 134},
   { 20,  52, 135},
   { 22,  52, 137},
   { 25,  52, 139},
   { 26,  52, 140},
   { 28,  52, 142},
   { 30,  52, 144},
   { 32,  51, 145},
   { 34,  51, 147},
   { 36,  51, 149},
   { 38,  51, 150},
   { 39,  50, 152},
   { 41,  50, 154},
   { 43,  50, 155},
   { 45,  49, 157},
   { 46,  49, 159},
   { 48,  49, 160},
   { 50,  48, 162},
   { 52,  48, 163},
   { 53,  47, 165},
   { 55,  47, 167},
   { 57,  46, 168},
   { 58,  46, 170},
   { 60,  45, 171},
   { 62,  45, 173},
   { 63,  44, 174},
   { 65,  43, 176},
   { 67,  43, 177},
   { 68,  42, 179},
   { 70,  41, 180},
   { 72,  40, 182},
   { 73,  40, 183},
   { 75,  39, 184},
   { 77,  38, 186},
   { 78,  37, 187},
   { 80,  36, 188},
   { 81,  35, 190},
   { 83,  34, 191},
   { 85,  33, 192},
   { 86,  32, 193},
   { 88,  30, 195},
   { 89,  29, 196},
   { 91,  28, 197},
   { 93,  27, 198},
   { 94,  25, 199},
   { 96,  24, 200},
   { 97,  22, 201},
   { 99,  20, 202},
   {100,  19, 203},
   {102,  17, 204},
   {104,  15, 205},
   {105,  12, 206},
   {107,  10, 206},
   {108,   7, 207},
   {110,   4, 208},
   {111,   2, 208},
   {112,   0, 209},
   {114,   0, 209},
   {115,   0, 210},
   {117,   0, 210},
   {118,   0, 211},
   {120,   0, 211},
   {121,   0, 211},
   {122,   0, 211},
   {124,   0, 212},
   {125,   0, 212},
   {126,   0, 211},
   {127,   0, 211},
   {128,   0, 211},
   {130,   0, 210},
   {131,   0, 210},
   {132,   0, 210},
   {133,   0, 209},
   {134,   0, 209},
   {136,   0, 208},
   {137,   0, 208},
   {138,   0, 208},
   {139,   0, 207},
   {140,   0, 207},
   {141,   0, 206},
   {142,   0, 206},
   {144,   0, 206},
   {145,   0, 205},
   {146,   0, 205},
   {147,   0, 204},
   {148,   0, 204},
   {149,   0, 203},
   {151,   0, 203},
   {152,   0, 202},
   {153,   0, 202},
   {154,   0, 201},
   {155,   0, 201},
   {156,   0, 200},
   {157,   0, 200},
   {159,   0, 199},
   {160,   0, 199},
   {161,   0, 198},
   {162,   0, 198},
   {163,   0, 197},
   {164,   0, 196},
   {166,   0, 196},
   {167,   0, 195},
   {168,   0, 195},
   {169,   0, 194},
   {170,   0, 193},
   {171,   0, 193},
   {172,   0, 192},
   {173,   0, 191},
   {175,   0, 191},
   {176,   0, 190},
   {177,   0, 189},
   {178,   0, 188},
   {179,   0, 188},
   {180,   0, 187},
   {181,   0, 186},
   {183,   0, 185},
   {184,   0, 185},
   {185,   0, 184},
   {186,   0, 183},
   {187,   0, 182},
   {188,   0, 181},
   {189,   0, 180},
   {191,   0, 180},
   {192,   0, 179},
   {193,   0, 178},
   {194,   0, 177},
   {195,   0, 176},
   {196,   0, 175},
   {197,   0, 174},
   {198,   0, 173},
   {199,   0, 172},
   {200,   0, 171},
   {201,   0, 170},
   {202,   0, 168},
   {203,   0, 167},
   {204,   0, 166},
   {205,   0, 165},
   {206,   0, 164},
   {207,   0, 163},
   {208,   0, 162},
   {209,   0, 161},
   {210,   2, 159},
   {211,   4, 158},
   {212,   6, 157},
   {213,   8, 156},
   {214,   9, 155},
   {215,  11, 153},
   {215,  13, 152},
   {216,  15, 151},
   {217,  17, 150},
   {218,  18, 148},
   {219,  20, 147},
   {220,  21, 146},
   {221,  23, 145},
   {221,  24, 143},
   {222,  25, 142},
   {223,  27, 141},
   {224,  28, 140},
   {225,  29, 138},
   {226,  31, 137},
   {226,  32, 136},
   {227,  33, 135},
   {228,  34, 133},
   {229,  36, 132},
   {229,  37, 131},
   {230,  38, 129},
   {231,  39, 128},
   {232,  40, 127},
   {232,  42, 126},
   {233,  43, 124},
   {234,  44, 123},
   {234,  45, 122},
   {235,  46, 121},
   {236,  48, 120},
   {236,  49, 118},
   {237,  50, 117},
   {238,  51, 116},
   {238,  52, 115},
   {239,  53, 113},
   {240,  54, 112},
   {240,  56, 111},
   {241,  57, 110},
   {241,  58, 109},
   {242,  59, 107},
   {242,  60, 106},
   {243,  61, 105},
   {244,  62, 104},
   {244,  64, 103},
   {245,  65, 102},
   {245,  66, 100},
   {246,  67,  99},
   {246,  68,  98},
   {247,  69,  97},
   {247,  70,  96},
   {248,  71,  95},
   {248,  73,  94},
   {249,  74,  93},
   {249,  75,  92},
   {249,  76,  91},
   {250,  77,  89},
   {250,  78,  88},
   {251,  79,  87},
   {251,  81,  86},
   {252,  82,  85},
   {252,  83,  84},
   {252,  84,  83},
   {253,  85,  82},
   {253,  86,  81},
   {253,  87,  80},
   {254,  89,  79},
   {254,  90,  78},
   {254,  91,  77},
   {255,  92,  76},
   {255,  93,  75},
   {255,  94,  74},
   {255,  95,  74},
   {255,  97,  73},
   {255,  98,  72},
   {255,  99,  71},
   {255, 100,  70},
   {255, 101,  69},
   {255, 102,  68},
   {255, 103,  67},
   {255, 105,  67},
   {255, 106,  66},
   {255, 107,  65},
   {255, 108,  64},
   {255, 109,  63},
   {255, 110,  62},
   {255, 112,  62},
   {255, 113,  61},
   {255, 114,  60},
   {255, 115,  59},
   {255, 116,  59},
   {255, 117,  58},
   {255, 118,  57},
   {255, 120,  56},
   {255, 121,  56},
   {255, 122,  55},
   {255, 123,  54},
   {255, 124,  54},
   {255, 125,  53},
   {255, 126,  52},
   {255, 128,  52},
   {255, 129,  51},
   {255, 130,  50},
   {255, 131,  50},
   {255, 132,  49},
   {255, 133,  49},
   {255, 134,  48},
   {255, 136,  47},
   {255, 137,  47},
   {255, 138,  46},
   {255, 139,  46},
   {255, 140,  45},
   {255, 141,  44},
   {255, 142,  44},
   {255, 143,  43},
   {255, 145,  43},
   {255, 146,  42},
   {255, 147,  41},
   {255, 148,  41},
   {255, 149,  40},
   {255, 150,  40},
   {255, 151,  39},
   {255, 152,  38},
   {255, 153,  38},
   {255, 154,  37},
   {255, 156,  36},
   {255, 157,  36},
   {255, 158,  35},
   {255, 159,  34},
   {255, 160,  34},
   {255, 161,  33},
   {255, 162,  32},
   {255, 163,  32},
   {255, 164,  31},
   {255, 165,  30},
   {255, 166,  30},
   {255, 168,  29},
   {255, 169,  28},
   {255, 170,  27},
   {255, 171,  26},
   {255, 172,  25},
   {255, 173,  25},
   {255, 174,  24},
   {255, 175,  23},
   {255, 176,  22},
   {255, 177,  21},
   {255, 178,  20},
   {255, 180,  20},
   {255, 181,  20},
   {255, 182,  20},
   {255, 183,  21},
   {255, 184,  22},
   {255, 186,  23},
   {255, 187,  24},
   {255, 188,  26},
   {255, 189,  28},
   {255, 190,  30},
   {255, 192,  32},
   {254, 193,  34},
   {254, 194,  36},
   {253, 195,  38},
   {252, 197,  41},
   {252, 198,  43},
   {251, 199,  46},
   {250, 200,  48},
   {250, 202,  50},
   {249, 203,  53},
   {248, 204,  56},
   {248, 205,  59},
   {247, 206,  62},
   {246, 208,  65},
   {245, 209,  68},
   {245, 210,  70},
   {244, 211,  73},
   {243, 212,  76},
   {242, 214,  79},
   {242, 215,  81},
   {241, 216,  84},
   {240, 217,  87},
   {240, 218,  90},
   {239, 219,  93},
   {238, 220,  97},
   {237, 221, 100},
   {237, 222, 103},
   {236, 223, 106},
   {235, 224, 109},
   {235, 225, 112},
   {234, 226, 115},
   {234, 227, 118},
   {233, 228, 121},
   {233, 229, 124},
   {232, 230, 127},
   {232, 231, 130},
   {232, 232, 133},
   {231, 233, 136},
   {231, 234, 139},
   {231, 235, 141},
   {230, 235, 144},
   {230, 236, 147},
   {230, 237, 150},
   {230, 238, 152},
   {230, 239, 155},
   {230, 239, 158},
   {230, 240, 160},
   {230, 241, 163},
   {230, 242, 166},
   {230, 242, 168},
   {230, 243, 171},
   {230, 244, 173},
   {230, 244, 176},
   {231, 245, 178},
   {231, 246, 181},
   {231, 246, 183},
   {231, 247, 186},
   {232, 248, 188},
   {232, 248, 190},
   {233, 249, 193},
   {233, 249, 195},
   {234, 250, 197},
   {234, 251, 200},
   {235, 251, 202},
   {235, 252, 204},
   {236, 252, 206},
   {237, 253, 209},
   {237, 253, 211},
   {238, 254, 213},
   {239, 254, 215},
   {240, 255, 217},
   {241, 255, 219},
   {241, 255, 221},
   {242, 255, 223},
   {243, 255, 225},
   {244, 255, 227},
   {245, 255, 229},
   {246, 255, 231},
   {247, 255, 233},
   {248, 255, 235},
   {249, 255, 237},
   {250, 255, 239},
   {251, 255, 240},
   {252, 255, 242},
   {253, 255, 244},
};

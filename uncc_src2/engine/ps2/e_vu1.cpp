// STATUS: NOT STARTED

#include "e_vu1.h"

struct EMicrocodeOverlay {
	u32 *pStart;
	int id;
	char *szName;
	int nBytes;
};

EMicrocodeOverlay _overlayTable[3] = {
	/* [0] = */ {
		/* .pStart = */ NULL,
		/* .id = */ 0,
		/* .szName = */ NULL,
		/* .nBytes = */ 0
	},
	/* [1] = */ {
		/* .pStart = */ NULL,
		/* .id = */ 0,
		/* .szName = */ NULL,
		/* .nBytes = */ 0
	},
	/* [2] = */ {
		/* .pStart = */ NULL,
		/* .id = */ 0,
		/* .szName = */ NULL,
		/* .nBytes = */ 0
	}
};

int _mpgPrims[13] = {
	/* [0] = */ -1,
	/* [1] = */ 1,
	/* [2] = */ -1,
	/* [3] = */ -1,
	/* [4] = */ -1,
	/* [5] = */ 2,
	/* [6] = */ -1,
	/* [7] = */ 2,
	/* [8] = */ -1,
	/* [9] = */ -1,
	/* [10] = */ 2,
	/* [11] = */ 2,
	/* [12] = */ 2
};

EVU1 _vu1 = {
	/* .m_dmaCmdBuf = */ {
		/* [0] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [1] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [2] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [3] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [4] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [5] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [6] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [7] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [8] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [9] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [10] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [11] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [12] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [13] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [14] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [15] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [16] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [17] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [18] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [19] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [20] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [21] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [22] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [23] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [24] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [25] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [26] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [27] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [28] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [29] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [30] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [31] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [32] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [33] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [34] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [35] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [36] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [37] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [38] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [39] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [40] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [41] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [42] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [43] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [44] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [45] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [46] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [47] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [48] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [49] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [50] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [51] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [52] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [53] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [54] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [55] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [56] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [57] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [58] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [59] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [60] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [61] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [62] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [63] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [64] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [65] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [66] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [67] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [68] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [69] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [70] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [71] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [72] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [73] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [74] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [75] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [76] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [77] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [78] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [79] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [80] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [81] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [82] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [83] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [84] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [85] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [86] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [87] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [88] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [89] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [90] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [91] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [92] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [93] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [94] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [95] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [96] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [97] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [98] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [99] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [100] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [101] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [102] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [103] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [104] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [105] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [106] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [107] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [108] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [109] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [110] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [111] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [112] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [113] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [114] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [115] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [116] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [117] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [118] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [119] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [120] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [121] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [122] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [123] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [124] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [125] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [126] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [127] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [128] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [129] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [130] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [131] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [132] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [133] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [134] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [135] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [136] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [137] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [138] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [139] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [140] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [141] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [142] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [143] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [144] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [145] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [146] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [147] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [148] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [149] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [150] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [151] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [152] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [153] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [154] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [155] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [156] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [157] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [158] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [159] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [160] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [161] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [162] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [163] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [164] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [165] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [166] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [167] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [168] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [169] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [170] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [171] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [172] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [173] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [174] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [175] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [176] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [177] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [178] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [179] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [180] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [181] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [182] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [183] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [184] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [185] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [186] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [187] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [188] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [189] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [190] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [191] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [192] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [193] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [194] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [195] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [196] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [197] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [198] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [199] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [200] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [201] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [202] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [203] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [204] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [205] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [206] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [207] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [208] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [209] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [210] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [211] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [212] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [213] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [214] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [215] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [216] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [217] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [218] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [219] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [220] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [221] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [222] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [223] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [224] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [225] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [226] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [227] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [228] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [229] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [230] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [231] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [232] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [233] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [234] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [235] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [236] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [237] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [238] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [239] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [240] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [241] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [242] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [243] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [244] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [245] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [246] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [247] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [248] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [249] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [250] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [251] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [252] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [253] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [254] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
		/* [255] = */ VECTOR(0.f, 0.f, 0.f, 0.f)
	},
	/* .m_init = */ false
};

static float cPi = 3.14159274f;
static double cdPi = 3.1415927410125732;
static float cGravity = 32.2f;
static u32 cScratchPadBase = 0;
static u32 cScratchPadSize = 16384;
static EPs2GeometryEngineData *_pGE = 0x1100c000;

EVU1* EVU1::EVU1() {
  *(undefined4 *)&this->m_init = 0;
  return this;
}

void EVU1::~EVU1(int __in_chrg) {
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}

u32 EVU1::GetMPGStart(int mpg) {
  return (uint)_overlayTable[mpg].pStart;
}

char* EVU1::GetMPGName(int mpg) {
  return _overlayTable[mpg].szName;
}

int EVU1::GetNeededMPG(int primtype) {
  return _mpgPrims[primtype];
}

void EVU1::InitOverlayTable() {
	int nOverlays;
	int i;
	EMicrocodeOverlay *po;
	u32 nqw;
	u32 *pEnd;
	
  uint uVar1;
  uint *puVar2;
  int nOverlays;
  int i;
  EMicrocodeOverlay *po;
  uint nqw;
  uint *pEnd;
  
  for (i = 0; i < 3; i = i + 1) {
    uVar1 = *_overlayTable[i].pStart & 0x7fff;
    puVar2 = _overlayTable[i].pStart + (uVar1 + 1) * 4;
    *puVar2 = *puVar2 & 0xfffffff | 0x60000000;
    _overlayTable[i].nBytes = uVar1 << 4;
  }
  FlushCache(0);
  return;
}

void EVU1::LoadMPG(int mpg) {
	EVif vif;
	
  EVif vif;
  
  __4EVif(&vif);
  Begin__4EVifPvi(&vif,this,0x1000);
  LoadMPG__4EVU1P4EVifi(this,&vif,mpg);
  AddDmaTag__4EVifUiPvi(&vif,1,(void *)0x0,0);
  AddVifTag__4EVifUi(&vif,0x13000000);
  AddVifTag__4EVifUi(&vif,pvu1SendInterrupt >> 3 | 0x15000000);
  AddDmaTag__4EVifUiPvi(&vif,6,(void *)0x0,0);
  End__4EVif(&vif);
  FlushCache__4EVif(&vif);
  Send__4EVif(&vif);
  DAT_1100cdc0 = mpg;
  ___4EVif(&vif,2);
  return;
}

void EVU1::LoadMPG(EVif *pVif, int mpg) {
	EMicrocodeOverlay *po;
	
  EMicrocodeOverlay *po;
  
  AddDmaTag__4EVifUiPvi(pVif,5,_overlayTable[mpg].pStart,0);
  AddVifTag__4EVifUi(pVif,0);
  AddVifTag__4EVifUi(pVif,0);
  return;
}

void EVU1::LoadMPGRef(EVif *pVif, int mpg) {
	EMicrocodeOverlay *po;
	
  EMicrocodeOverlay *po;
  
  AddDmaTag__4EVifUiPvi(pVif,3,_overlayTable[mpg].pStart + 4,_overlayTable[mpg].nBytes >> 4);
  AddVifTag__4EVifUi(pVif,0);
  AddVifTag__4EVifUi(pVif,0);
  return;
}

int EVU1::GetMPGLoadSize(int mpg) {
  return _overlayTable[mpg].nBytes;
}

void EVU1::Init() {
	EVif vif;
	
  EVif vif;
  
  _ctc2(0xc0c);
  InitOverlayTable__4EVU1(this);
  LoadMPG__4EVU1i(this,0);
  LoadMPG__4EVU1i(this,1);
  __4EVif(&vif);
  Begin__4EVifPvi(&vif,this,0x1000);
  ResetInputBuffer__4EVU1P4EVif(this,&vif);
  AddDmaTag__4EVifUiPvi(&vif,1,(void *)0x0,0);
  AddVifTag__4EVifUi(&vif,0);
  AddVifTag__4EVifUi(&vif,pvu1SendInterrupt >> 3 | 0x15000000);
  AddDmaTag__4EVifUiPvi(&vif,6,(void *)0x0,0);
  End__4EVif(&vif);
  FlushCache__4EVif(&vif);
  Send__4EVif(&vif);
  GetCurInputBuffer__4EVU1(this);
  *(undefined4 *)&this->m_init = 1;
  ___4EVif(&vif,2);
  return;
}

void EVU1::ResetInputBuffer(EVif *pVif) {
	u32 base;
	u32 offs;
	
  uint base;
  uint offs;
  
  AddDmaTag__4EVifUiPvi(pVif,1,(void *)0x0,0);
  AddVifTag__4EVifUi(pVif,0x30000e6);
  AddVifTag__4EVifUi(pVif,0x20000d8);
  return;
}

void EVU1::UploadMemMap(void *pDst, void *pSrc, int nBytes) {
	u32 memBase;
	
  uint memBase;
  
  memcpy((void *)((int)pDst + 0x1100c000),pSrc,nBytes);
  return;
}

void EVU1::UploadData(void *pDst, void *pSrc, int nBytes) {
  void *local_40;
  void *local_3c;
  
  local_40 = pDst;
  if ((undefined8 *)((uint)pDst & 0x1100c000) == &DAT_1100c000) {
    local_40 = (void *)((int)pDst + -0x1100c000);
  }
  local_3c = pSrc;
  if (((uint)pSrc & 0xf0000000) == 0x80000000) {
    local_3c = (void *)((uint)pSrc & 0xfffffff | 0x70000000);
  }
  UploadMemMap__4EVU1PvT1i(this,local_40,local_3c,nBytes);
  return;
}

void EVU1::GetCurInputBuffer() {
	u32 top;
	u32 addr;
	
  int iVar1;
  uint top;
  uint addr;
  
  iVar1 = REG_VIF1_TOP;
  DAT_1100c680 = &DAT_1100c000 + iVar1 * 2;
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  uint local_60;
  undefined4 local_5c;
  char *local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___4EVU1(&_vu1,2);
    }
    else {
      memset(&local_60,0,0x10);
      local_60 = pvu1MPGCommonDMA;
      local_5c = 1;
      local_58 = "E_MPG_COM";
      _overlayTable[0]._0_8_ = CONCAT44(1,pvu1MPGCommonDMA);
      _overlayTable[0]._8_8_ = CONCAT44(uStack_54,0x3c7ce0);
      memset(&local_60,0,0x10);
      local_60 = pvu1MPGTriStripDMA;
      local_5c = 1;
      local_58 = "E_MPG_TRISTRIP";
      _overlayTable[1]._0_8_ = CONCAT44(1,pvu1MPGTriStripDMA);
      _overlayTable[1]._8_8_ = CONCAT44(uStack_54,0x3c7cf0);
      memset(&local_60,0,0x10);
      local_60 = pvu1MPGRectDMA;
      local_5c = 2;
      local_58 = "E_MPG_RECT";
      _overlayTable[2]._0_8_ = CONCAT44(2,pvu1MPGRectDMA);
      _overlayTable[2]._8_8_ = CONCAT44(uStack_54,0x3c7d00);
      __4EVU1(&_vu1);
    }
  }
  return;
}

void __builtin_delete(void *pAddress) {
  _memmanFree__FPv(pAddress);
  return;
}

void global constructors keyed to _overlayTable() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _overlayTable() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

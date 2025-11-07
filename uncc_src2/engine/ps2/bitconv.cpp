// STATUS: NOT STARTED

#include "bitconv.h"

static float cPi = 3.14159274f;
static double cdPi = 3.1415927410125732;
static float cGravity = 32.2f;
static u32 cScratchPadBase = 0;
static u32 cScratchPadSize = 16384;

int BlockConv4to32(unsigned char *p_input, unsigned char *p_output) {
	static int lut[256] = {
		/* [0] = */ 0,
		/* [1] = */ 68,
		/* [2] = */ 8,
		/* [3] = */ 76,
		/* [4] = */ 16,
		/* [5] = */ 84,
		/* [6] = */ 24,
		/* [7] = */ 92,
		/* [8] = */ 1,
		/* [9] = */ 69,
		/* [10] = */ 9,
		/* [11] = */ 77,
		/* [12] = */ 17,
		/* [13] = */ 85,
		/* [14] = */ 25,
		/* [15] = */ 93,
		/* [16] = */ 2,
		/* [17] = */ 70,
		/* [18] = */ 10,
		/* [19] = */ 78,
		/* [20] = */ 18,
		/* [21] = */ 86,
		/* [22] = */ 26,
		/* [23] = */ 94,
		/* [24] = */ 3,
		/* [25] = */ 71,
		/* [26] = */ 11,
		/* [27] = */ 79,
		/* [28] = */ 19,
		/* [29] = */ 87,
		/* [30] = */ 27,
		/* [31] = */ 95,
		/* [32] = */ 4,
		/* [33] = */ 64,
		/* [34] = */ 12,
		/* [35] = */ 72,
		/* [36] = */ 20,
		/* [37] = */ 80,
		/* [38] = */ 28,
		/* [39] = */ 88,
		/* [40] = */ 5,
		/* [41] = */ 65,
		/* [42] = */ 13,
		/* [43] = */ 73,
		/* [44] = */ 21,
		/* [45] = */ 81,
		/* [46] = */ 29,
		/* [47] = */ 89,
		/* [48] = */ 6,
		/* [49] = */ 66,
		/* [50] = */ 14,
		/* [51] = */ 74,
		/* [52] = */ 22,
		/* [53] = */ 82,
		/* [54] = */ 30,
		/* [55] = */ 90,
		/* [56] = */ 7,
		/* [57] = */ 67,
		/* [58] = */ 15,
		/* [59] = */ 75,
		/* [60] = */ 23,
		/* [61] = */ 83,
		/* [62] = */ 31,
		/* [63] = */ 91,
		/* [64] = */ 32,
		/* [65] = */ 100,
		/* [66] = */ 40,
		/* [67] = */ 108,
		/* [68] = */ 48,
		/* [69] = */ 116,
		/* [70] = */ 56,
		/* [71] = */ 124,
		/* [72] = */ 33,
		/* [73] = */ 101,
		/* [74] = */ 41,
		/* [75] = */ 109,
		/* [76] = */ 49,
		/* [77] = */ 117,
		/* [78] = */ 57,
		/* [79] = */ 125,
		/* [80] = */ 34,
		/* [81] = */ 102,
		/* [82] = */ 42,
		/* [83] = */ 110,
		/* [84] = */ 50,
		/* [85] = */ 118,
		/* [86] = */ 58,
		/* [87] = */ 126,
		/* [88] = */ 35,
		/* [89] = */ 103,
		/* [90] = */ 43,
		/* [91] = */ 111,
		/* [92] = */ 51,
		/* [93] = */ 119,
		/* [94] = */ 59,
		/* [95] = */ 127,
		/* [96] = */ 36,
		/* [97] = */ 96,
		/* [98] = */ 44,
		/* [99] = */ 104,
		/* [100] = */ 52,
		/* [101] = */ 112,
		/* [102] = */ 60,
		/* [103] = */ 120,
		/* [104] = */ 37,
		/* [105] = */ 97,
		/* [106] = */ 45,
		/* [107] = */ 105,
		/* [108] = */ 53,
		/* [109] = */ 113,
		/* [110] = */ 61,
		/* [111] = */ 121,
		/* [112] = */ 38,
		/* [113] = */ 98,
		/* [114] = */ 46,
		/* [115] = */ 106,
		/* [116] = */ 54,
		/* [117] = */ 114,
		/* [118] = */ 62,
		/* [119] = */ 122,
		/* [120] = */ 39,
		/* [121] = */ 99,
		/* [122] = */ 47,
		/* [123] = */ 107,
		/* [124] = */ 55,
		/* [125] = */ 115,
		/* [126] = */ 63,
		/* [127] = */ 123,
		/* [128] = */ 4,
		/* [129] = */ 64,
		/* [130] = */ 12,
		/* [131] = */ 72,
		/* [132] = */ 20,
		/* [133] = */ 80,
		/* [134] = */ 28,
		/* [135] = */ 88,
		/* [136] = */ 5,
		/* [137] = */ 65,
		/* [138] = */ 13,
		/* [139] = */ 73,
		/* [140] = */ 21,
		/* [141] = */ 81,
		/* [142] = */ 29,
		/* [143] = */ 89,
		/* [144] = */ 6,
		/* [145] = */ 66,
		/* [146] = */ 14,
		/* [147] = */ 74,
		/* [148] = */ 22,
		/* [149] = */ 82,
		/* [150] = */ 30,
		/* [151] = */ 90,
		/* [152] = */ 7,
		/* [153] = */ 67,
		/* [154] = */ 15,
		/* [155] = */ 75,
		/* [156] = */ 23,
		/* [157] = */ 83,
		/* [158] = */ 31,
		/* [159] = */ 91,
		/* [160] = */ 0,
		/* [161] = */ 68,
		/* [162] = */ 8,
		/* [163] = */ 76,
		/* [164] = */ 16,
		/* [165] = */ 84,
		/* [166] = */ 24,
		/* [167] = */ 92,
		/* [168] = */ 1,
		/* [169] = */ 69,
		/* [170] = */ 9,
		/* [171] = */ 77,
		/* [172] = */ 17,
		/* [173] = */ 85,
		/* [174] = */ 25,
		/* [175] = */ 93,
		/* [176] = */ 2,
		/* [177] = */ 70,
		/* [178] = */ 10,
		/* [179] = */ 78,
		/* [180] = */ 18,
		/* [181] = */ 86,
		/* [182] = */ 26,
		/* [183] = */ 94,
		/* [184] = */ 3,
		/* [185] = */ 71,
		/* [186] = */ 11,
		/* [187] = */ 79,
		/* [188] = */ 19,
		/* [189] = */ 87,
		/* [190] = */ 27,
		/* [191] = */ 95,
		/* [192] = */ 36,
		/* [193] = */ 96,
		/* [194] = */ 44,
		/* [195] = */ 104,
		/* [196] = */ 52,
		/* [197] = */ 112,
		/* [198] = */ 60,
		/* [199] = */ 120,
		/* [200] = */ 37,
		/* [201] = */ 97,
		/* [202] = */ 45,
		/* [203] = */ 105,
		/* [204] = */ 53,
		/* [205] = */ 113,
		/* [206] = */ 61,
		/* [207] = */ 121,
		/* [208] = */ 38,
		/* [209] = */ 98,
		/* [210] = */ 46,
		/* [211] = */ 106,
		/* [212] = */ 54,
		/* [213] = */ 114,
		/* [214] = */ 62,
		/* [215] = */ 122,
		/* [216] = */ 39,
		/* [217] = */ 99,
		/* [218] = */ 47,
		/* [219] = */ 107,
		/* [220] = */ 55,
		/* [221] = */ 115,
		/* [222] = */ 63,
		/* [223] = */ 123,
		/* [224] = */ 32,
		/* [225] = */ 100,
		/* [226] = */ 40,
		/* [227] = */ 108,
		/* [228] = */ 48,
		/* [229] = */ 116,
		/* [230] = */ 56,
		/* [231] = */ 124,
		/* [232] = */ 33,
		/* [233] = */ 101,
		/* [234] = */ 41,
		/* [235] = */ 109,
		/* [236] = */ 49,
		/* [237] = */ 117,
		/* [238] = */ 57,
		/* [239] = */ 125,
		/* [240] = */ 34,
		/* [241] = */ 102,
		/* [242] = */ 42,
		/* [243] = */ 110,
		/* [244] = */ 50,
		/* [245] = */ 118,
		/* [246] = */ 58,
		/* [247] = */ 126,
		/* [248] = */ 35,
		/* [249] = */ 103,
		/* [250] = */ 43,
		/* [251] = */ 111,
		/* [252] = */ 51,
		/* [253] = */ 119,
		/* [254] = */ 59,
		/* [255] = */ 127
	};
	unsigned int i;
	unsigned int j;
	unsigned int k;
	unsigned int i0;
	unsigned int i1;
	unsigned int i2;
	unsigned int index0;
	unsigned int index1;
	unsigned char c_in;
	unsigned char c_out;
	unsigned char *pIn;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint i;
  uint j;
  uint k;
  uint i0;
  uint i1;
  uint i2;
  uint index0;
  uint index1;
  uchar c_in;
  uchar c_out;
  uchar *pIn;
  
  index1 = 0;
  pIn = p_input;
  for (k = 0; k < 4; k = k + 1) {
    index0 = (k & 1) << 7;
    for (i = 0; i < 0x10; i = i + 1) {
      for (j = 0; j < 4; j = j + 1) {
        iVar4 = index0 * 4;
        iVar3 = index0 + 1;
        iVar1 = (*(uint *)(lut_45 + iVar4) & 1) << 2;
        index0 = index0 + 2;
        iVar2 = (*(uint *)(lut_45 + iVar3 * 4) & 1) << 2;
        p_output[index1] =
             (byte)((int)((uint)pIn[*(uint *)(lut_45 + iVar4) >> 1] & 0xf << iVar1) >> iVar1) |
             (char)((int)((uint)pIn[*(uint *)(lut_45 + iVar3 * 4) >> 1] & 0xf << iVar2) >> iVar2) <<
             4;
        index1 = index1 + 1;
      }
    }
    pIn = pIn + 0x40;
  }
  return 0;
}

int BlockConv8to32(unsigned char *p_input, unsigned char *p_output) {
	static int lut[128] = {
		/* [0] = */ 0,
		/* [1] = */ 36,
		/* [2] = */ 8,
		/* [3] = */ 44,
		/* [4] = */ 1,
		/* [5] = */ 37,
		/* [6] = */ 9,
		/* [7] = */ 45,
		/* [8] = */ 2,
		/* [9] = */ 38,
		/* [10] = */ 10,
		/* [11] = */ 46,
		/* [12] = */ 3,
		/* [13] = */ 39,
		/* [14] = */ 11,
		/* [15] = */ 47,
		/* [16] = */ 4,
		/* [17] = */ 32,
		/* [18] = */ 12,
		/* [19] = */ 40,
		/* [20] = */ 5,
		/* [21] = */ 33,
		/* [22] = */ 13,
		/* [23] = */ 41,
		/* [24] = */ 6,
		/* [25] = */ 34,
		/* [26] = */ 14,
		/* [27] = */ 42,
		/* [28] = */ 7,
		/* [29] = */ 35,
		/* [30] = */ 15,
		/* [31] = */ 43,
		/* [32] = */ 16,
		/* [33] = */ 52,
		/* [34] = */ 24,
		/* [35] = */ 60,
		/* [36] = */ 17,
		/* [37] = */ 53,
		/* [38] = */ 25,
		/* [39] = */ 61,
		/* [40] = */ 18,
		/* [41] = */ 54,
		/* [42] = */ 26,
		/* [43] = */ 62,
		/* [44] = */ 19,
		/* [45] = */ 55,
		/* [46] = */ 27,
		/* [47] = */ 63,
		/* [48] = */ 20,
		/* [49] = */ 48,
		/* [50] = */ 28,
		/* [51] = */ 56,
		/* [52] = */ 21,
		/* [53] = */ 49,
		/* [54] = */ 29,
		/* [55] = */ 57,
		/* [56] = */ 22,
		/* [57] = */ 50,
		/* [58] = */ 30,
		/* [59] = */ 58,
		/* [60] = */ 23,
		/* [61] = */ 51,
		/* [62] = */ 31,
		/* [63] = */ 59,
		/* [64] = */ 4,
		/* [65] = */ 32,
		/* [66] = */ 12,
		/* [67] = */ 40,
		/* [68] = */ 5,
		/* [69] = */ 33,
		/* [70] = */ 13,
		/* [71] = */ 41,
		/* [72] = */ 6,
		/* [73] = */ 34,
		/* [74] = */ 14,
		/* [75] = */ 42,
		/* [76] = */ 7,
		/* [77] = */ 35,
		/* [78] = */ 15,
		/* [79] = */ 43,
		/* [80] = */ 0,
		/* [81] = */ 36,
		/* [82] = */ 8,
		/* [83] = */ 44,
		/* [84] = */ 1,
		/* [85] = */ 37,
		/* [86] = */ 9,
		/* [87] = */ 45,
		/* [88] = */ 2,
		/* [89] = */ 38,
		/* [90] = */ 10,
		/* [91] = */ 46,
		/* [92] = */ 3,
		/* [93] = */ 39,
		/* [94] = */ 11,
		/* [95] = */ 47,
		/* [96] = */ 20,
		/* [97] = */ 48,
		/* [98] = */ 28,
		/* [99] = */ 56,
		/* [100] = */ 21,
		/* [101] = */ 49,
		/* [102] = */ 29,
		/* [103] = */ 57,
		/* [104] = */ 22,
		/* [105] = */ 50,
		/* [106] = */ 30,
		/* [107] = */ 58,
		/* [108] = */ 23,
		/* [109] = */ 51,
		/* [110] = */ 31,
		/* [111] = */ 59,
		/* [112] = */ 16,
		/* [113] = */ 52,
		/* [114] = */ 24,
		/* [115] = */ 60,
		/* [116] = */ 17,
		/* [117] = */ 53,
		/* [118] = */ 25,
		/* [119] = */ 61,
		/* [120] = */ 18,
		/* [121] = */ 54,
		/* [122] = */ 26,
		/* [123] = */ 62,
		/* [124] = */ 19,
		/* [125] = */ 55,
		/* [126] = */ 27,
		/* [127] = */ 63
	};
	unsigned int i;
	unsigned int j;
	unsigned int k;
	unsigned int i0;
	unsigned int index0;
	unsigned int index1;
	unsigned char *pIn;
	
  int iVar1;
  uint i;
  uint j;
  uint k;
  uint i0;
  uint index0;
  uint index1;
  uchar *pIn;
  
  index1 = 0;
  pIn = p_input;
  for (k = 0; k < 4; k = k + 1) {
    index0 = (k & 1) << 6;
    for (i = 0; i < 0x10; i = i + 1) {
      for (j = 0; j < 4; j = j + 1) {
        iVar1 = index0 * 4;
        index0 = index0 + 1;
        p_output[index1] = pIn[*(int *)(lut_49 + iVar1)];
        index1 = index1 + 1;
      }
    }
    pIn = pIn + 0x40;
  }
  return 0;
}

int PageConv4to32(int width, int height, unsigned char *p_input, unsigned char *p_output) {
	static unsigned int block_table4[32] = {
		/* [0] = */ 0,
		/* [1] = */ 2,
		/* [2] = */ 8,
		/* [3] = */ 10,
		/* [4] = */ 1,
		/* [5] = */ 3,
		/* [6] = */ 9,
		/* [7] = */ 11,
		/* [8] = */ 4,
		/* [9] = */ 6,
		/* [10] = */ 12,
		/* [11] = */ 14,
		/* [12] = */ 5,
		/* [13] = */ 7,
		/* [14] = */ 13,
		/* [15] = */ 15,
		/* [16] = */ 16,
		/* [17] = */ 18,
		/* [18] = */ 24,
		/* [19] = */ 26,
		/* [20] = */ 17,
		/* [21] = */ 19,
		/* [22] = */ 25,
		/* [23] = */ 27,
		/* [24] = */ 20,
		/* [25] = */ 22,
		/* [26] = */ 28,
		/* [27] = */ 30,
		/* [28] = */ 21,
		/* [29] = */ 23,
		/* [30] = */ 29,
		/* [31] = */ 31
	};
	static unsigned int block_table32[32] = {
		/* [0] = */ 0,
		/* [1] = */ 1,
		/* [2] = */ 4,
		/* [3] = */ 5,
		/* [4] = */ 16,
		/* [5] = */ 17,
		/* [6] = */ 20,
		/* [7] = */ 21,
		/* [8] = */ 2,
		/* [9] = */ 3,
		/* [10] = */ 6,
		/* [11] = */ 7,
		/* [12] = */ 18,
		/* [13] = */ 19,
		/* [14] = */ 22,
		/* [15] = */ 23,
		/* [16] = */ 8,
		/* [17] = */ 9,
		/* [18] = */ 12,
		/* [19] = */ 13,
		/* [20] = */ 24,
		/* [21] = */ 25,
		/* [22] = */ 28,
		/* [23] = */ 29,
		/* [24] = */ 10,
		/* [25] = */ 11,
		/* [26] = */ 14,
		/* [27] = */ 15,
		/* [28] = */ 26,
		/* [29] = */ 27,
		/* [30] = */ 30,
		/* [31] = */ 31
	};
	unsigned int *index32_h;
	unsigned int *index32_v;
	unsigned int in_block_nb;
	unsigned char input_block[256];
	unsigned char output_block[256];
	unsigned char *pi0;
	unsigned char *pi1;
	unsigned char *po0;
	unsigned char *po1;
	int index0;
	int index1;
	int i;
	int j;
	int k;
	int n_width;
	int n_height;
	int input_page_line_size;
	int output_page_line_size;
	
  int iVar1;
  void *pAddress;
  void *pAddress_00;
  uint *index32_h;
  uint *index32_v;
  uint in_block_nb;
  uchar input_block [256];
  uchar output_block [256];
  uchar *pi0;
  uchar *pi1;
  uchar *po0;
  uchar *po1;
  int index0;
  int index1;
  int i;
  int j;
  int k;
  int n_width;
  int n_height;
  int input_page_line_size;
  int output_page_line_size;
  
  pAddress = _memmanAlloc__FUiUi(0x80,4);
  pAddress_00 = _memmanAlloc__FUiUi(0x80,4);
  index0 = 0;
  for (i = 0; i < 4; i = i + 1) {
    for (j = 0; j < 8; j = j + 1) {
      iVar1 = *(int *)(block_table32_54 + index0 * 4);
      *(int *)(iVar1 * 4 + (int)pAddress) = j;
      *(int *)(iVar1 * 4 + (int)pAddress_00) = i;
      index0 = index0 + 1;
    }
  }
  if (width < 0) {
    width = width + 0x1f;
  }
  if (height < 0) {
    height = height + 0xf;
  }
  memset(input_block,0,0x100);
  memset(output_block,0,0x100);
  for (i = 0; i < height >> 4; i = i + 1) {
    for (j = 0; j < width >> 5; j = j + 1) {
      pi0 = input_block;
      pi1 = p_input + j * 0x10 + i * 0x400;
      iVar1 = *(int *)(block_table4_53 + (i * (width >> 5) + j) * 4);
      for (k = 0; k < 0x10; k = k + 1) {
        memcpy(pi0,pi1,0x10);
        pi0 = pi0 + 0x10;
        pi1 = pi1 + 0x40;
      }
      BlockConv4to32__FPUcT0(input_block,output_block);
      po0 = output_block;
      po1 = p_output +
            *(int *)(iVar1 * 4 + (int)pAddress) * 0x20 +
            *(int *)(iVar1 * 4 + (int)pAddress_00) * 0x800;
      for (k = 0; k < 8; k = k + 1) {
        memcpy(po1,po0,0x20);
        po0 = po0 + 0x20;
        po1 = po1 + 0x100;
      }
    }
  }
  _memmanFree__FPv(pAddress);
  _memmanFree__FPv(pAddress_00);
  return 0;
}

int PageConv8to32(int width, int height, unsigned char *p_input, unsigned char *p_output) {
	static unsigned int block_table8[32] = {
		/* [0] = */ 0,
		/* [1] = */ 1,
		/* [2] = */ 4,
		/* [3] = */ 5,
		/* [4] = */ 16,
		/* [5] = */ 17,
		/* [6] = */ 20,
		/* [7] = */ 21,
		/* [8] = */ 2,
		/* [9] = */ 3,
		/* [10] = */ 6,
		/* [11] = */ 7,
		/* [12] = */ 18,
		/* [13] = */ 19,
		/* [14] = */ 22,
		/* [15] = */ 23,
		/* [16] = */ 8,
		/* [17] = */ 9,
		/* [18] = */ 12,
		/* [19] = */ 13,
		/* [20] = */ 24,
		/* [21] = */ 25,
		/* [22] = */ 28,
		/* [23] = */ 29,
		/* [24] = */ 10,
		/* [25] = */ 11,
		/* [26] = */ 14,
		/* [27] = */ 15,
		/* [28] = */ 26,
		/* [29] = */ 27,
		/* [30] = */ 30,
		/* [31] = */ 31
	};
	static unsigned int block_table32[32] = {
		/* [0] = */ 0,
		/* [1] = */ 1,
		/* [2] = */ 4,
		/* [3] = */ 5,
		/* [4] = */ 16,
		/* [5] = */ 17,
		/* [6] = */ 20,
		/* [7] = */ 21,
		/* [8] = */ 2,
		/* [9] = */ 3,
		/* [10] = */ 6,
		/* [11] = */ 7,
		/* [12] = */ 18,
		/* [13] = */ 19,
		/* [14] = */ 22,
		/* [15] = */ 23,
		/* [16] = */ 8,
		/* [17] = */ 9,
		/* [18] = */ 12,
		/* [19] = */ 13,
		/* [20] = */ 24,
		/* [21] = */ 25,
		/* [22] = */ 28,
		/* [23] = */ 29,
		/* [24] = */ 10,
		/* [25] = */ 11,
		/* [26] = */ 14,
		/* [27] = */ 15,
		/* [28] = */ 26,
		/* [29] = */ 27,
		/* [30] = */ 30,
		/* [31] = */ 31
	};
	unsigned int *index32_h;
	unsigned int *index32_v;
	unsigned int in_block_nb;
	unsigned char input_block[256];
	unsigned char output_block[256];
	unsigned char *pi0;
	unsigned char *pi1;
	unsigned char *po0;
	unsigned char *po1;
	int index0;
	int index1;
	int i;
	int j;
	int k;
	int n_width;
	int n_height;
	int input_page_line_size;
	int output_page_line_size;
	
  int iVar1;
  void *pAddress;
  void *pAddress_00;
  uint *index32_h;
  uint *index32_v;
  uint in_block_nb;
  uchar input_block [256];
  uchar output_block [256];
  uchar *pi0;
  uchar *pi1;
  uchar *po0;
  uchar *po1;
  int index0;
  int index1;
  int i;
  int j;
  int k;
  int n_width;
  int n_height;
  int input_page_line_size;
  int output_page_line_size;
  
  pAddress = _memmanAlloc__FUiUi(0x80,4);
  pAddress_00 = _memmanAlloc__FUiUi(0x80,4);
  index0 = 0;
  for (i = 0; i < 4; i = i + 1) {
    for (j = 0; j < 8; j = j + 1) {
      iVar1 = *(int *)(block_table32_59 + index0 * 4);
      *(int *)(iVar1 * 4 + (int)pAddress) = j;
      *(int *)(iVar1 * 4 + (int)pAddress_00) = i;
      index0 = index0 + 1;
    }
  }
  if (width < 0) {
    width = width + 0xf;
  }
  if (height < 0) {
    height = height + 0xf;
  }
  memset(input_block,0,0x100);
  memset(output_block,0,0x100);
  for (i = 0; i < height >> 4; i = i + 1) {
    for (j = 0; j < width >> 4; j = j + 1) {
      pi0 = input_block;
      pi1 = p_input + j * 0x10 + i * 0x800;
      iVar1 = *(int *)(block_table8_58 + (i * (width >> 4) + j) * 4);
      for (k = 0; k < 0x10; k = k + 1) {
        memcpy(pi0,pi1,0x10);
        pi0 = pi0 + 0x10;
        pi1 = pi1 + 0x80;
      }
      BlockConv8to32__FPUcT0(input_block,output_block);
      po0 = output_block;
      po1 = p_output +
            *(int *)(iVar1 * 4 + (int)pAddress) * 0x20 +
            *(int *)(iVar1 * 4 + (int)pAddress_00) * 0x800;
      for (k = 0; k < 8; k = k + 1) {
        memcpy(po1,po0,0x20);
        po0 = po0 + 0x20;
        po1 = po1 + 0x100;
      }
    }
  }
  _memmanFree__FPv(pAddress);
  _memmanFree__FPv(pAddress_00);
  return 0;
}

int Conv4to32(int width, int height, unsigned char *p_input, unsigned char *p_output) {
	int i;
	int j;
	int k;
	int n_page_h;
	int n_page_w;
	int n_page4_width_byte;
	int n_page32_width_byte;
	unsigned char *pi0;
	unsigned char *pi1;
	unsigned char *po0;
	unsigned char *po1;
	int n_input_width_byte;
	int n_output_width_byte;
	int n_input_height;
	int n_output_height;
	unsigned char *input_page;
	unsigned char *output_page;
	
  uchar *p_input_00;
  uchar *p_output_00;
  int iVar1;
  int iVar2;
  int i;
  int j;
  int k;
  int n_page_h;
  int n_page_w;
  int n_page4_width_byte;
  int n_page32_width_byte;
  uchar *pi0;
  uchar *pi1;
  uchar *po0;
  uchar *po1;
  int n_input_width_byte;
  int n_output_width_byte;
  int n_input_height;
  int n_output_height;
  uchar *input_page;
  uchar *output_page;
  
  for (i = 0; (i < 0xb && (width != 0x400 >> (i & 0x1fU))); i = i + 1) {
  }
  if (i == 0xb) {
    iVar1 = -1;
  }
  else {
    for (i = 0; (i < 0xb && (height != 0x400 >> (i & 0x1fU))); i = i + 1) {
    }
    if (i == 0xb) {
      iVar1 = -1;
    }
    else {
      p_input_00 = (uchar *)_memmanAlloc__FUiUi(0x2000,4);
      p_output_00 = (uchar *)_memmanAlloc__FUiUi(0x2000,4);
      memset(p_input_00,0,0x2000);
      memset(p_output_00,0,0x2000);
      iVar1 = width + -1;
      if (iVar1 < 0) {
        iVar1 = width + 0x7e;
      }
      iVar2 = (iVar1 >> 7) + 1;
      iVar1 = height + -1;
      if (iVar1 < 0) {
        iVar1 = height + 0x7e;
      }
      iVar1 = (iVar1 >> 7) + 1;
      if (iVar2 == 1) {
        n_input_width_byte = width / 2;
        if (width < 0) {
          width = width + 3;
        }
        n_output_height = width >> 2;
      }
      else {
        n_input_width_byte = 0x40;
        n_output_height = 0x20;
      }
      if (iVar1 == 1) {
        n_output_width_byte = height << 1;
        n_input_height = height;
      }
      else {
        n_input_height = 0x80;
        n_output_width_byte = 0x100;
      }
      for (i = 0; i < iVar1; i = i + 1) {
        for (j = 0; j < iVar2; j = j + 1) {
          pi0 = p_input + n_input_width_byte * j + iVar2 * 0x80 * n_input_width_byte * i;
          pi1 = p_input_00;
          for (k = 0; k < n_input_height; k = k + 1) {
            memcpy(pi1,pi0,n_input_width_byte);
            pi0 = pi0 + n_input_width_byte * iVar2;
            pi1 = pi1 + 0x40;
          }
          PageConv4to32__FiiPUcT2(0x80,0x80,p_input_00,p_output_00);
          po0 = p_output + n_output_width_byte * j + iVar2 * 0x20 * n_output_width_byte * i;
          po1 = p_output_00;
          for (k = 0; k < n_output_height; k = k + 1) {
            memcpy(po0,po1,n_output_width_byte);
            po0 = po0 + n_output_width_byte * iVar2;
            po1 = po1 + 0x100;
          }
        }
      }
      _memmanFree__FPv(p_input_00);
      _memmanFree__FPv(p_output_00);
      iVar1 = 0;
    }
  }
  return iVar1;
}

int Conv8to32(int width, int height, unsigned char *p_input, unsigned char *p_output) {
	int i;
	int j;
	int k;
	int n_page_h;
	int n_page_w;
	int n_page8_width_byte;
	int n_page32_width_byte;
	int n_input_width_byte;
	int n_output_width_byte;
	int n_input_height;
	int n_output_height;
	unsigned char *pi0;
	unsigned char *pi1;
	unsigned char *po0;
	unsigned char *po1;
	unsigned char *input_page;
	unsigned char *output_page;
	
  uchar *p_input_00;
  uchar *p_output_00;
  int iVar1;
  int iVar2;
  int i;
  int j;
  int k;
  int n_page_h;
  int n_page_w;
  int n_page8_width_byte;
  int n_page32_width_byte;
  int n_input_width_byte;
  int n_output_width_byte;
  int n_input_height;
  int n_output_height;
  uchar *pi0;
  uchar *pi1;
  uchar *po0;
  uchar *po1;
  uchar *input_page;
  uchar *output_page;
  
  for (i = 0; (i < 0xb && (width != 0x400 >> (i & 0x1fU))); i = i + 1) {
  }
  if (i == 0xb) {
    iVar1 = -1;
  }
  else {
    for (i = 0; (i < 0xb && (height != 0x400 >> (i & 0x1fU))); i = i + 1) {
    }
    if (i == 0xb) {
      iVar1 = -1;
    }
    else {
      p_input_00 = (uchar *)_memmanAlloc__FUiUi(0x2000,4);
      p_output_00 = (uchar *)_memmanAlloc__FUiUi(0x2000,4);
      memset(p_input_00,0,0x2000);
      memset(p_output_00,0,0x2000);
      iVar1 = width + -1;
      if (iVar1 < 0) {
        iVar1 = width + 0x7e;
      }
      iVar2 = (iVar1 >> 7) + 1;
      iVar1 = height + -1;
      if (iVar1 < 0) {
        iVar1 = height + 0x3e;
      }
      iVar1 = (iVar1 >> 6) + 1;
      if (iVar2 == 1) {
        n_output_width_byte = width << 1;
        n_input_width_byte = width;
      }
      else {
        n_input_width_byte = 0x80;
        n_output_width_byte = 0x100;
      }
      if (iVar1 == 1) {
        n_output_height = height / 2;
        n_input_height = height;
      }
      else {
        n_input_height = 0x40;
        n_output_height = 0x20;
      }
      for (i = 0; i < iVar1; i = i + 1) {
        for (j = 0; j < iVar2; j = j + 1) {
          pi0 = p_input + n_input_width_byte * j + iVar2 * 0x40 * n_input_width_byte * i;
          pi1 = p_input_00;
          for (k = 0; k < n_input_height; k = k + 1) {
            memcpy(pi1,pi0,n_input_width_byte);
            pi0 = pi0 + n_input_width_byte * iVar2;
            pi1 = pi1 + 0x80;
          }
          PageConv8to32__FiiPUcT2(0x80,0x40,p_input_00,p_output_00);
          po0 = p_output +
                n_output_width_byte * j + n_output_width_byte * n_output_height * iVar2 * i;
          po1 = p_output_00;
          for (k = 0; k < n_output_height; k = k + 1) {
            memcpy(po0,po1,n_output_width_byte);
            po0 = po0 + n_output_width_byte * iVar2;
            po1 = po1 + 0x100;
          }
        }
      }
      _memmanFree__FPv(p_input_00);
      _memmanFree__FPv(p_output_00);
      iVar1 = 0;
    }
  }
  return iVar1;
}

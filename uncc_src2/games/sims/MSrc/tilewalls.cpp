// STATUS: NOT STARTED

#include "tilewalls.h"

unsigned char TileWalls::mVertexConfigToShapeLookup[256] = {
	/* [0] = */ 0,
	/* [1] = */ 1,
	/* [2] = */ 2,
	/* [3] = */ 3,
	/* [4] = */ 4,
	/* [5] = */ 5,
	/* [6] = */ 6,
	/* [7] = */ 7,
	/* [8] = */ 8,
	/* [9] = */ 9,
	/* [10] = */ 10,
	/* [11] = */ 11,
	/* [12] = */ 12,
	/* [13] = */ 13,
	/* [14] = */ 14,
	/* [15] = */ 15,
	/* [16] = */ 16,
	/* [17] = */ 255,
	/* [18] = */ 255,
	/* [19] = */ 255,
	/* [20] = */ 17,
	/* [21] = */ 255,
	/* [22] = */ 255,
	/* [23] = */ 255,
	/* [24] = */ 18,
	/* [25] = */ 255,
	/* [26] = */ 255,
	/* [27] = */ 255,
	/* [28] = */ 19,
	/* [29] = */ 255,
	/* [30] = */ 255,
	/* [31] = */ 255,
	/* [32] = */ 20,
	/* [33] = */ 21,
	/* [34] = */ 255,
	/* [35] = */ 255,
	/* [36] = */ 255,
	/* [37] = */ 255,
	/* [38] = */ 255,
	/* [39] = */ 255,
	/* [40] = */ 22,
	/* [41] = */ 23,
	/* [42] = */ 255,
	/* [43] = */ 255,
	/* [44] = */ 255,
	/* [45] = */ 255,
	/* [46] = */ 255,
	/* [47] = */ 255,
	/* [48] = */ 24,
	/* [49] = */ 255,
	/* [50] = */ 255,
	/* [51] = */ 255,
	/* [52] = */ 255,
	/* [53] = */ 255,
	/* [54] = */ 255,
	/* [55] = */ 255,
	/* [56] = */ 25,
	/* [57] = */ 255,
	/* [58] = */ 255,
	/* [59] = */ 255,
	/* [60] = */ 255,
	/* [61] = */ 255,
	/* [62] = */ 255,
	/* [63] = */ 255,
	/* [64] = */ 26,
	/* [65] = */ 27,
	/* [66] = */ 28,
	/* [67] = */ 29,
	/* [68] = */ 255,
	/* [69] = */ 255,
	/* [70] = */ 255,
	/* [71] = */ 255,
	/* [72] = */ 255,
	/* [73] = */ 255,
	/* [74] = */ 255,
	/* [75] = */ 255,
	/* [76] = */ 255,
	/* [77] = */ 255,
	/* [78] = */ 255,
	/* [79] = */ 255,
	/* [80] = */ 30,
	/* [81] = */ 255,
	/* [82] = */ 255,
	/* [83] = */ 255,
	/* [84] = */ 255,
	/* [85] = */ 255,
	/* [86] = */ 255,
	/* [87] = */ 255,
	/* [88] = */ 255,
	/* [89] = */ 255,
	/* [90] = */ 255,
	/* [91] = */ 255,
	/* [92] = */ 255,
	/* [93] = */ 255,
	/* [94] = */ 255,
	/* [95] = */ 255,
	/* [96] = */ 31,
	/* [97] = */ 32,
	/* [98] = */ 255,
	/* [99] = */ 255,
	/* [100] = */ 255,
	/* [101] = */ 255,
	/* [102] = */ 255,
	/* [103] = */ 255,
	/* [104] = */ 255,
	/* [105] = */ 255,
	/* [106] = */ 255,
	/* [107] = */ 255,
	/* [108] = */ 255,
	/* [109] = */ 255,
	/* [110] = */ 255,
	/* [111] = */ 255,
	/* [112] = */ 33,
	/* [113] = */ 255,
	/* [114] = */ 255,
	/* [115] = */ 255,
	/* [116] = */ 255,
	/* [117] = */ 255,
	/* [118] = */ 255,
	/* [119] = */ 255,
	/* [120] = */ 255,
	/* [121] = */ 255,
	/* [122] = */ 255,
	/* [123] = */ 255,
	/* [124] = */ 255,
	/* [125] = */ 255,
	/* [126] = */ 255,
	/* [127] = */ 255,
	/* [128] = */ 34,
	/* [129] = */ 255,
	/* [130] = */ 35,
	/* [131] = */ 255,
	/* [132] = */ 36,
	/* [133] = */ 255,
	/* [134] = */ 37,
	/* [135] = */ 255,
	/* [136] = */ 255,
	/* [137] = */ 255,
	/* [138] = */ 255,
	/* [139] = */ 255,
	/* [140] = */ 255,
	/* [141] = */ 255,
	/* [142] = */ 255,
	/* [143] = */ 255,
	/* [144] = */ 38,
	/* [145] = */ 255,
	/* [146] = */ 255,
	/* [147] = */ 255,
	/* [148] = */ 39,
	/* [149] = */ 255,
	/* [150] = */ 255,
	/* [151] = */ 255,
	/* [152] = */ 255,
	/* [153] = */ 255,
	/* [154] = */ 255,
	/* [155] = */ 255,
	/* [156] = */ 255,
	/* [157] = */ 255,
	/* [158] = */ 255,
	/* [159] = */ 255,
	/* [160] = */ 40,
	/* [161] = */ 255,
	/* [162] = */ 255,
	/* [163] = */ 255,
	/* [164] = */ 255,
	/* [165] = */ 255,
	/* [166] = */ 255,
	/* [167] = */ 255,
	/* [168] = */ 255,
	/* [169] = */ 255,
	/* [170] = */ 255,
	/* [171] = */ 255,
	/* [172] = */ 255,
	/* [173] = */ 255,
	/* [174] = */ 255,
	/* [175] = */ 255,
	/* [176] = */ 41,
	/* [177] = */ 255,
	/* [178] = */ 255,
	/* [179] = */ 255,
	/* [180] = */ 255,
	/* [181] = */ 255,
	/* [182] = */ 255,
	/* [183] = */ 255,
	/* [184] = */ 255,
	/* [185] = */ 255,
	/* [186] = */ 255,
	/* [187] = */ 255,
	/* [188] = */ 255,
	/* [189] = */ 255,
	/* [190] = */ 255,
	/* [191] = */ 255,
	/* [192] = */ 42,
	/* [193] = */ 255,
	/* [194] = */ 43,
	/* [195] = */ 255,
	/* [196] = */ 255,
	/* [197] = */ 255,
	/* [198] = */ 255,
	/* [199] = */ 255,
	/* [200] = */ 255,
	/* [201] = */ 255,
	/* [202] = */ 255,
	/* [203] = */ 255,
	/* [204] = */ 255,
	/* [205] = */ 255,
	/* [206] = */ 255,
	/* [207] = */ 255,
	/* [208] = */ 44,
	/* [209] = */ 255,
	/* [210] = */ 255,
	/* [211] = */ 255,
	/* [212] = */ 255,
	/* [213] = */ 255,
	/* [214] = */ 255,
	/* [215] = */ 255,
	/* [216] = */ 255,
	/* [217] = */ 255,
	/* [218] = */ 255,
	/* [219] = */ 255,
	/* [220] = */ 255,
	/* [221] = */ 255,
	/* [222] = */ 255,
	/* [223] = */ 255,
	/* [224] = */ 45,
	/* [225] = */ 255,
	/* [226] = */ 255,
	/* [227] = */ 255,
	/* [228] = */ 255,
	/* [229] = */ 255,
	/* [230] = */ 255,
	/* [231] = */ 255,
	/* [232] = */ 255,
	/* [233] = */ 255,
	/* [234] = */ 255,
	/* [235] = */ 255,
	/* [236] = */ 255,
	/* [237] = */ 255,
	/* [238] = */ 255,
	/* [239] = */ 255,
	/* [240] = */ 46,
	/* [241] = */ 255,
	/* [242] = */ 255,
	/* [243] = */ 255,
	/* [244] = */ 255,
	/* [245] = */ 255,
	/* [246] = */ 255,
	/* [247] = */ 255,
	/* [248] = */ 255,
	/* [249] = */ 255,
	/* [250] = */ 255,
	/* [251] = */ 255,
	/* [252] = */ 255,
	/* [253] = */ 255,
	/* [254] = */ 255,
	/* [255] = */ 255
};

TileWallsSegment TileWalls::sRotateSegmentLookup[4][64];
DiagonalSideSelector TileWalls::sRotateDiagonalLookup[4][5];

TileWalls* TileWalls::TileWalls(TileWallStorage &in) {
  byte bVar1;
  
  this->mSegments = (uint)in->mSegments;
  this->mPlacement = (uint)in->mPlacement;
  this->mStyles[0] = (ushort)in->mTopLeftStyle;
  this->mStyles[1] = (ushort)(in->field3_0x3).mTopRightStyle;
  this->mStyles[4] = (ushort)(in->field3_0x3).mTopRightStyle;
  this->mStyles[5] = (ushort)(in->field3_0x3).mTopRightStyle;
  this->mPatterns[0] = (ushort)in->mTopLeftPattern;
  this->mPatterns[1] = (ushort)in->mTopRightPattern;
  this->mPatterns[2] = (ushort)(in->field7_0x7).mBottomRightPattern;
  this->mPatterns[3] = (ushort)(in->field6_0x6).mBottomLeftPattern;
  this->mPatterns[4] = (ushort)(in->field6_0x6).mBottomLeftPattern;
  this->mPatterns[5] = (ushort)(in->field7_0x7).mBottomRightPattern;
  this->mPatterns[6] = (ushort)(in->field6_0x6).mBottomLeftPattern;
  bVar1 = (in->field7_0x7).mBottomRightPattern;
  this->mRotation = 0;
  this->mPatterns[7] = (ushort)bVar1;
  *(undefined4 *)&this->mBelowLeftHasDiagonal = 0;
  *(undefined4 *)&this->mBelowRightHasDiagonal = 0;
  *(undefined4 *)&this->mAboveLeftHasDiagonal = 0;
  *(undefined4 *)&this->mAboveRightHasDiagonal = 0;
  return this;
}

TileWalls* TileWalls::TileWalls(TileWallStorage &in, bool inAboveLeftHasDiag, bool inAboveRightHasDiag, bool inBelowLeftHasDiag, bool inBelowRightHasDiag) {
  byte bVar1;
  
  bVar1 = in->mSegments;
  this->mSegments = (uint)bVar1;
  this->mPlacement = (uint)in->mPlacement;
  this->mStyles[0] = (ushort)in->mTopLeftStyle;
  this->mStyles[1] = (ushort)(in->field3_0x3).mTopRightStyle;
  this->mStyles[4] = (ushort)(in->field3_0x3).mTopRightStyle;
  this->mStyles[5] = (ushort)(in->field3_0x3).mTopRightStyle;
  this->mPatterns[0] = (ushort)in->mTopLeftPattern;
  this->mPatterns[1] = (ushort)in->mTopRightPattern;
  this->mPatterns[2] = (ushort)(in->field7_0x7).mBottomRightPattern;
  this->mPatterns[3] = (ushort)(in->field6_0x6).mBottomLeftPattern;
  if ((bVar1 & 0x10) == 0) {
    this->mPatterns[5] = 0;
    this->mPatterns[4] = 0;
  }
  else {
    this->mPatterns[4] = (ushort)(in->field6_0x6).mBottomLeftPattern;
    this->mPatterns[5] = (ushort)(in->field7_0x7).mBottomRightPattern;
  }
  if ((this->mSegments & 0x20) == 0) {
    this->mPatterns[7] = 0;
    this->mPatterns[6] = 0;
  }
  else {
    this->mPatterns[6] = (ushort)(in->field6_0x6).mBottomLeftPattern;
    this->mPatterns[7] = (ushort)(in->field7_0x7).mBottomRightPattern;
  }
  *(int *)&this->mAboveLeftHasDiagonal = (int)inAboveLeftHasDiag;
  *(int *)&this->mAboveRightHasDiagonal = (int)inAboveRightHasDiag;
  *(int *)&this->mBelowLeftHasDiagonal = (int)inBelowLeftHasDiag;
  *(int *)&this->mBelowRightHasDiagonal = (int)inBelowRightHasDiag;
  this->mRotation = 0;
  return this;
}

void TileWalls::GenerateRotationLookups() {
	int rot;
	int s;
	TileWallsSegment seg;
	int iseg;
	unsigned int temp;
	int i;
	int temp;
	
  DiagonalSideSelector DVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  DiagonalSideSelector *__s;
  uint uVar11;
  uint uVar12;
  
  iVar10 = 0;
  uVar11 = 0;
  do {
    memset((void *)((int)_9TileWalls_sRotateSegmentLookup + iVar10),0,0x100);
    uVar12 = uVar11 + 1;
    puVar9 = (undefined4 *)((int)_9TileWalls_sRotateSegmentLookup + iVar10 + 0x80);
    puVar8 = (undefined4 *)((int)_9TileWalls_sRotateSegmentLookup + iVar10 + 0x40);
    uVar2 = 0;
    uVar3 = 1;
    do {
      if (uVar3 == 0x20) {
        if ((uVar11 & 1) == 0) {
          *puVar9 = 0x20;
        }
        else {
          *puVar9 = 0x10;
        }
      }
      else if (uVar3 == 0x10) {
        if ((uVar11 & 1) == 0) {
          *puVar8 = 0x10;
        }
        else {
          *puVar8 = 0x20;
        }
      }
      else {
        iVar4 = uVar3 * 4;
        uVar5 = uVar11;
        if (0 < (int)uVar11) {
          do {
            uVar3 = uVar3 << 1;
            uVar5 = uVar5 - 1;
            if (8 < uVar3) {
              uVar3 = 1;
            }
          } while (uVar5 != 0);
        }
        *(uint *)((int)_9TileWalls_sRotateSegmentLookup + iVar4 + iVar10) = uVar3;
      }
      uVar2 = uVar2 + 1;
      uVar3 = 1 << (uVar2 & 0x1f);
    } while ((int)uVar2 < 6);
    iVar4 = 4;
    uVar2 = 1;
    do {
      uVar3 = uVar2 + 1;
      if (*(int *)((int)_9TileWalls_sRotateSegmentLookup + iVar4 + iVar10) == 0) {
        uVar6 = 0;
        puVar7 = (uint *)((int)_9TileWalls_sRotateSegmentLookup + iVar4 + iVar10);
        uVar5 = 1;
        do {
          if ((uVar2 & uVar5) != 0) {
            *puVar7 = *puVar7 | *(uint *)((int)_9TileWalls_sRotateSegmentLookup + uVar5 * 4 + iVar10
                                         );
          }
          uVar6 = uVar6 + 1;
          uVar5 = 1 << (uVar6 & 0x1f);
        } while ((int)uVar6 < 6);
      }
      iVar4 = uVar3 * 4;
      uVar2 = uVar3;
    } while ((int)uVar3 < 0x40);
    __s = (DiagonalSideSelector *)_9TileWalls_sRotateDiagonalLookup[uVar11];
    memset(__s,0,0x14);
    iVar10 = 1;
    do {
      __s = __s + 1;
      DVar1 = iVar10 + uVar11;
      if (4 < (int)DVar1) {
        DVar1 = DVar1 + ~kRight;
      }
      iVar10 = iVar10 + 1;
      *__s = DVar1;
    } while (iVar10 < 5);
    iVar10 = uVar12 * 0x100;
    uVar11 = uVar12;
  } while ((int)uVar12 < 4);
  return;
}

SheerPlacement TileWalls::GetPlacement(TileWallsSegment inSeg) {
	int index;
	
  int iVar1;
  SheerPlacement SVar2;
  
  iVar1 = SegmentToIndex__9TileWalls16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                    (inSeg,kNotSpecified);
  if (iVar1 < 4) {
    SVar2 = (this->mPlacement & 3 << (iVar1 << 1 & 0x1fU)) >> (iVar1 << 1 & 0x1fU);
  }
  else {
    SVar2 = kBoth;
  }
  return SVar2;
}

TileWallsSegment TileWalls::SetPlacement(SheerPlacement inPlc, TileWallsSegment inSeg) {
	int index;
	
  int iVar1;
  
  iVar1 = SegmentToIndex__9TileWalls16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                    (inSeg,kNotSpecified);
  if (iVar1 < 4) {
    this->mPlacement =
         this->mPlacement & ~(3 << (iVar1 << 1 & 0x1fU)) | inPlc << (iVar1 << 1 & 0x1fU);
  }
  return inSeg;
}

void TileWalls::ConvertToViewCoords(int inRotation) {
	int netRotation;
	
  int inRot;
  
  inRot = inRotation - this->mRotation;
  if (inRot < 0) {
    inRot = inRot + 4;
  }
  if (inRot != 0) {
    Rotate__9TileWallsi(this,inRot);
  }
  return;
}

void TileWalls::Rotate(int inRot) {
	TileWalls viewRep;
	TileWallsSegment ourSegs;
	TileWallsSegment viewSegs;
	
  TileWallsSegment inSegment;
  TileWallsSegment inSeg;
  WallStyle inStyle;
  WallPattern WVar1;
  DiagonalSideSelector DVar2;
  FloorPattern FVar3;
  SheerPlacement inPlc;
  TileWalls viewRep;
  
  __9TileWallsRC9TileWalls(&viewRep,this);
  viewRep.mRotation = viewRep.mRotation + inRot & 3;
  RemoveAllWalls__9TileWalls(&viewRep);
  inSegment = First__C9TileWalls(this);
  do {
    if (inSegment == kNoWalls) {
      __as__9TileWallsRC9TileWalls(this,&viewRep);
      ___9TileWalls(&viewRep,2);
      return;
    }
    inSeg = RotateSegment__9TileWalls16TileWallsSegmenti(inSegment,inRot);
    AddWall__9TileWalls16TileWallsSegment(&viewRep,inSeg);
    inStyle = GetStyle__C9TileWalls16TileWallsSegment(this,inSegment);
    SetStyle__9TileWalls9WallStyle16TileWallsSegment(&viewRep,inStyle,inSeg);
    if (inSegment == kVertDiag) {
      WVar1 = GetPattern__C9TileWalls16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                        (this,kVertDiag,kLeft);
      DVar2 = RotateDiagonal__9TileWallsQ29TileWalls20DiagonalSideSelectori(kLeft,inRot);
      SetPattern__9TileWalls11WallPattern16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                (&viewRep,WVar1,inSeg,DVar2);
      WVar1 = GetPattern__C9TileWalls16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                        (this,kVertDiag,kRight);
      DVar2 = RotateDiagonal__9TileWallsQ29TileWalls20DiagonalSideSelectori(kRight,inRot);
      SetPattern__9TileWalls11WallPattern16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                (&viewRep,WVar1,inSeg,DVar2);
      FVar3 = GetFloorValue__C9TileWallsQ29TileWalls20DiagonalSideSelector(this,kRight);
      DVar2 = RotateDiagonal__9TileWallsQ29TileWalls20DiagonalSideSelectori(kRight,inRot);
      SetFloorValue__9TileWalls12FloorPatternQ29TileWalls20DiagonalSideSelector
                (&viewRep,FVar3,DVar2);
      FVar3 = GetFloorValue__C9TileWallsQ29TileWalls20DiagonalSideSelector(this,kLeft);
      DVar2 = kLeft;
LAB_002063e0:
      DVar2 = RotateDiagonal__9TileWallsQ29TileWalls20DiagonalSideSelectori(DVar2,inRot);
      SetFloorValue__9TileWalls12FloorPatternQ29TileWalls20DiagonalSideSelector
                (&viewRep,FVar3,DVar2);
    }
    else {
      if (inSegment == kHorizDiag) {
        WVar1 = GetPattern__C9TileWalls16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                          (this,kHorizDiag,kTop);
        DVar2 = RotateDiagonal__9TileWallsQ29TileWalls20DiagonalSideSelectori(kTop,inRot);
        SetPattern__9TileWalls11WallPattern16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                  (&viewRep,WVar1,inSeg,DVar2);
        WVar1 = GetPattern__C9TileWalls16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                          (this,kHorizDiag,kBottom);
        DVar2 = RotateDiagonal__9TileWallsQ29TileWalls20DiagonalSideSelectori(kBottom,inRot);
        SetPattern__9TileWalls11WallPattern16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                  (&viewRep,WVar1,inSeg,DVar2);
        FVar3 = GetFloorValue__C9TileWallsQ29TileWalls20DiagonalSideSelector(this,kTop);
        DVar2 = RotateDiagonal__9TileWallsQ29TileWalls20DiagonalSideSelectori(kTop,inRot);
        SetFloorValue__9TileWalls12FloorPatternQ29TileWalls20DiagonalSideSelector
                  (&viewRep,FVar3,DVar2);
        FVar3 = GetFloorValue__C9TileWallsQ29TileWalls20DiagonalSideSelector(this,kBottom);
        DVar2 = kBottom;
        goto LAB_002063e0;
      }
      WVar1 = GetPattern__C9TileWalls16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                        (this,inSegment,kNotSpecified);
      SetPattern__9TileWalls11WallPattern16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                (&viewRep,WVar1,inSeg,kNotSpecified);
    }
    inPlc = GetPlacement__C9TileWalls16TileWallsSegment(this,inSegment);
    SetPlacement__9TileWallsQ29TileWalls14SheerPlacement16TileWallsSegment(&viewRep,inPlc,inSeg);
    inSegment = Next__C9TileWalls16TileWallsSegment(this,inSegment);
  } while( true );
}

bool TileWalls::CanAdd(TileWallsSegment inSeg) {
	TileWallsSegment total;
	int effective_rotation;
	TileWallsSegment rotSeg;
	
  byte bVar1;
  int iVar2;
  int inRotation;
  uint uVar3;
  
  uVar3 = inSeg | this->mSegments;
  if ((((uVar3 & 0x10) == 0) || (bVar1 = 0, uVar3 == 0x10)) &&
     (((uVar3 & 0x20) == 0 || (bVar1 = 0, uVar3 == 0x20)))) {
    if (*(int *)&this->mBelowLeftHasDiagonal == 0) {
      if (*(int *)&this->mBelowRightHasDiagonal == 0) {
        if (*(int *)&this->mAboveLeftHasDiagonal == 0) {
          if (*(int *)&this->mAboveRightHasDiagonal == 0) {
            return true;
          }
          iVar2 = this->mRotation;
        }
        else {
          iVar2 = this->mRotation;
        }
      }
      else {
        iVar2 = this->mRotation;
      }
    }
    else {
      iVar2 = this->mRotation;
    }
    inRotation = 0;
    if (iVar2 != 0) {
      inRotation = 4 - iVar2;
    }
    if (inRotation != 0) {
      inSeg = RotateSegment__9TileWalls16TileWallsSegmenti(inSeg,inRotation);
    }
    if (inSeg == kTopRight) {
      bVar1 = (byte)*(undefined4 *)&this->mAboveRightHasDiagonal ^ 1;
    }
    else {
      bVar1 = 1;
      if ((int)inSeg < 3) {
        if (inSeg == kTopLeft) {
          bVar1 = (byte)*(undefined4 *)&this->mAboveLeftHasDiagonal ^ 1;
        }
      }
      else if (inSeg == kBottomRight) {
        bVar1 = (byte)*(undefined4 *)&this->mBelowRightHasDiagonal ^ 1;
      }
      else if (inSeg == kBottomLeft) {
        bVar1 = (byte)*(undefined4 *)&this->mBelowLeftHasDiagonal ^ 1;
      }
      else {
        bVar1 = 1;
      }
    }
  }
  return (bool)bVar1;
}

void TileWalls::GetAdjacentTile(TileWallsSegment inSeg, CTilePt *inOutTile) {
  TilePtDir inDir;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  CTilePt aCStack_30 [5];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  switch(inSeg) {
  case kTopLeft:
    inDir = kNW;
    break;
  case kTopRight:
    inDir = kNE;
    break;
  default:
    goto LAB_0020664c;
  case kBottomRight:
    inDir = kSE;
    break;
  case kBottomLeft:
    __7CTilePt9TilePtDiri(aCStack_30,kSW,0);
    __apl__7CTilePtRC7CTilePt(inOutTile,aCStack_30);
    ___7CTilePt(aCStack_30,2);
    goto LAB_0020664c;
  }
  __7CTilePt9TilePtDiri(aCStack_30,inDir,0);
  __apl__7CTilePtRC7CTilePt(inOutTile,aCStack_30);
  ___7CTilePt(aCStack_30,2);
LAB_0020664c:
  return;
}

TileWallsSegment TileWalls::GetOppositeSegment(TileWallsSegment inSeg) {
  switch(inSeg) {
  case kTopLeft:
    return kBottomRight;
  case kTopRight:
    return kBottomLeft;
  default:
    return kNoWalls;
  case kBottomRight:
    return kTopLeft;
  case kBottomLeft:
    return kTopRight;
  case kHorizDiag:
  case kVertDiag:
    return inSeg;
  }
}

TileWallsSegment TileWalls::DirToWallSeg(TilePtDir inDir) {
  switch(inDir) {
  case kNE:
  case kSW:
    return kTopLeft;
  case kNW:
  case kSE:
    return kTopRight;
  case kN:
  case kS:
    return kVertDiag;
  case kE:
  case kW:
    return kHorizDiag;
  default:
    return kTopLeft;
  }
}

TileWallsSegment TileWalls::GetWallBetween(TilePtDir inDir) {
  switch(inDir) {
  case kNE:
    return kTopRight;
  case kSW:
    return kBottomLeft;
  case kNW:
    return kTopLeft;
  case kSE:
    return kBottomRight;
  case kN:
    return kVertDiag;
  default:
    return kNoWalls;
  case kE:
  case kW:
    return kHorizDiag;
  }
}

int TileWalls::SegmentToIndex(TileWallsSegment inSeg, DiagonalSideSelector inSel) {
	int index;
	int seg;
	
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = inSeg ^ 1;
  while ((uVar1 & 1) != 0) {
    inSeg = (int)inSeg >> 1;
    iVar2 = iVar2 + 1;
    uVar1 = inSeg ^ 1;
  }
  if (kBottom < inSel) {
    return iVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x002067b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (*(code *)(&PTR_LAB_003b7fb0)[inSel])();
  return iVar2;
}

TileWallsSegment TileWalls::IndexToSegment(int inIndex, DiagonalSideSelector *outSel) {
	int segs;
	
  DiagonalSideSelector DVar1;
  TileWallsSegment TVar2;
  
  TVar2 = 1 << (inIndex & 0x1fU);
  if ((outSel == (DiagonalSideSelector *)0x0) || (*outSel = kNotSpecified, (int)TVar2 < 0x10)) {
    return TVar2;
  }
  if (TVar2 == kHorizDiag) {
    DVar1 = kTop;
  }
  else if (TVar2 == kVertDiag) {
    DVar1 = kBottom;
    TVar2 = kHorizDiag;
  }
  else {
    if (TVar2 == 0x40) {
      *outSel = kLeft;
      return kVertDiag;
    }
    DVar1 = kRight;
    if (TVar2 != 0x80) {
      return TVar2;
    }
    TVar2 = kVertDiag;
  }
  *outSel = DVar1;
  return TVar2;
}

bool TileWalls::IsSingleWall(TileWallsSegment inSegs) {
	unsigned int segs;
	int bitCount;
	
  TileWallsSegment TVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  TVar1 = inSegs;
  if (inSegs != kNoWalls) {
    do {
      TVar1 = TVar1 & TVar1 + ~kNoWalls;
      iVar3 = iVar3 + 1;
    } while (TVar1 != kNoWalls);
  }
  iVar2 = 0;
  if ((iVar3 == 1) && (iVar2 = iVar3, 0x20 < (int)inSegs)) {
    iVar2 = 0;
  }
  return SUB41(iVar2,0);
}

TileWalls* TileWalls::TileWalls() {
  memset(this,0,0x38);
  return this;
}

TileWalls* TileWalls::TileWalls(TileWalls &in) {
  memcpy(this,in,0x38);
  return this;
}

void TileWalls::~TileWalls(int __in_chrg) {
	void *pAddress;
	
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

TileWalls& TileWalls::operator=(TileWalls &in) {
  memcpy(this,in,0x38);
  return this;
}

bool TileWalls::HasWall(TileWallsSegment inSeg) {
  return (~this->mSegments & inSeg) == 0;
}

bool TileWalls::HasWall() {
  return this->mSegments != kNoWalls;
}

bool TileWalls::HasWallNotFence(TileWallsSegment inSeg) {
  byte bVar1;
  bool bVar2;
  WallStyle WVar3;
  
  if (((inSeg + ~kNoWalls < 2) || (inSeg == kBottomRight)) || (inSeg == kBottomLeft)) {
    bVar2 = false;
    if ((this->mSegments & inSeg) == inSeg) {
      WVar3 = GetStyle__C9TileWalls16TileWallsSegment(this,inSeg);
                    /* inlined from c:/eor/src2/games/sims/MSrc/WallStyles.h */
      bVar1 = 1;
      if (((WVar3 != kFenceStyle1) && (bVar1 = 1, WVar3 != kFenceStyle2)) &&
         (bVar1 = 1, WVar3 != kFenceStyle3)) {
        if (WVar3 == kFenceStyle4) {
          bVar1 = 1;
        }
        else {
          bVar1 = 0;
        }
      }
                    /* end of inlined section */
      bVar2 = (bool)(bVar1 ^ 1);
    }
  }
  else {
    bVar2 = HasDiagonalNotFence__C9TileWalls(this);
  }
  return bVar2;
}

bool TileWalls::HasDiagonal() {
  return (this->mSegments & 0x30) != 0;
}

bool TileWalls::HasDiagonalNotFence() {
  bool bVar1;
  bool bVar2;
  TileWallsSegment TVar3;
  WallStyle WVar4;
  
  if ((this->mSegments & 0x10) == 0) {
    TVar3 = this->mSegments;
  }
  else {
    WVar4 = GetStyle__C9TileWalls16TileWallsSegment(this,kHorizDiag);
                    /* inlined from c:/eor/src2/games/sims/MSrc/WallStyles.h */
    if ((((WVar4 == kFenceStyle1) || (WVar4 == kFenceStyle2)) || (WVar4 == kFenceStyle3)) ||
       (bVar2 = false, WVar4 == kFenceStyle4)) {
      bVar2 = true;
    }
                    /* end of inlined section */
    if (!bVar2) {
      return true;
    }
    TVar3 = this->mSegments;
  }
  if ((TVar3 & 0x20) == 0) {
    bVar2 = false;
  }
  else {
    WVar4 = GetStyle__C9TileWalls16TileWallsSegment(this,kVertDiag);
                    /* inlined from c:/eor/src2/games/sims/MSrc/WallStyles.h */
    if (((WVar4 == kFenceStyle1) || (WVar4 == kFenceStyle2)) ||
       ((WVar4 == kFenceStyle3 || (bVar1 = false, WVar4 == kFenceStyle4)))) {
      bVar1 = true;
    }
    bVar2 = false;
                    /* end of inlined section */
    if (!bVar1) {
      bVar2 = true;
    }
  }
  return bVar2;
}

WallPattern TileWalls::GetPattern(TileWallsSegment inSeg, DiagonalSideSelector inSel) {
  int iVar1;
  
  if ((inSeg == kHorizDiag) && (inSel == kNotSpecified)) {
    inSel = kBottom;
  }
  else if ((inSeg == kVertDiag) && (inSel == kNotSpecified)) {
    inSel = kLeft;
  }
  iVar1 = SegmentToIndex__9TileWalls16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                    (inSeg,inSel);
  return (WallPattern)(ushort)this->mPatterns[iVar1];
}

TileWallsSegment TileWalls::SetPattern(WallPattern inPattern, TileWallsSegment inSeg, DiagonalSideSelector inSel) {
	u32 i;
	DiagonalSideSelector outSel;
	
  TileWallsSegment TVar1;
  uint inIndex;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  short *psVar2;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  DiagonalSideSelector outSel;
  undefined4 local_60;
  undefined4 uStack_5c;
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
  
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if ((inSeg == kHorizDiag) && (inSel == kNotSpecified)) {
    inSel = kBottom;
  }
  else if ((inSeg == kVertDiag) && (inSel == kNotSpecified)) {
    inSel = kLeft;
  }
  psVar2 = this->mPatterns;
  inIndex = 0;
  do {
    TVar1 = IndexToSegment__9TileWallsiPQ29TileWalls20DiagonalSideSelector(inIndex,&outSel);
    if (((TVar1 & inSeg) != 0) && (outSel == inSel)) {
      *psVar2 = (short)inPattern;
    }
    inIndex = inIndex + 1;
    psVar2 = psVar2 + 1;
  } while (inIndex < 8);
  return inSeg;
}

WallStyle TileWalls::GetStyle(TileWallsSegment inSeg) {
  int iVar1;
  
  iVar1 = SegmentToIndex__9TileWalls16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                    (inSeg,kNotSpecified);
  return (WallStyle)(ushort)this->mStyles[iVar1];
}

TileWallsSegment TileWalls::SetStyle(WallStyle inStyle, TileWallsSegment inSeg) {
	u32 i;
	
  TileWallsSegment TVar1;
  uint inIndex;
  short *psVar2;
  
  psVar2 = this->mStyles;
  inIndex = 0;
  do {
    TVar1 = IndexToSegment__9TileWallsiPQ29TileWalls20DiagonalSideSelector
                      (inIndex,(DiagonalSideSelector *)0x0);
    if ((TVar1 & inSeg) != 0) {
      *psVar2 = (short)inStyle;
    }
    inIndex = inIndex + 1;
    psVar2 = psVar2 + 1;
  } while (inIndex < 6);
  return inSeg;
}

TileWallsSegment TileWalls::AddWall(TileWallsSegment inSeg) {
  this->mSegments = this->mSegments | inSeg;
  if ((inSeg == kHorizDiag) || (inSeg == kVertDiag)) {
    this->mPatterns[0] = 0;
    this->mStyles[0] = 0;
  }
  return inSeg;
}

void TileWalls::RemoveWall(TileWallsSegment inSeg) {
  this->mSegments = this->mSegments & ~inSeg;
  return;
}

void TileWalls::RemoveAllWalls() {
  this->mSegments = kNoWalls;
  return;
}

TileWallsSegment TileWalls::First() {
	unsigned int out;
	
  bool bVar1;
  TileWallsSegment inSeg;
  
  inSeg = kTopLeft;
  if (this->mSegments == kNoWalls) {
    inSeg = kNoWalls;
  }
  else {
    while (bVar1 = HasWall__C9TileWalls16TileWallsSegment(this,inSeg), !bVar1) {
      inSeg = inSeg << 1;
    }
  }
  return inSeg;
}

TileWallsSegment TileWalls::Next(TileWallsSegment inPrevious) {
	int out;
	
  bool bVar1;
  TileWallsSegment TVar2;
  TileWallsSegment inSeg;
  
  inSeg = inPrevious << 1;
  while( true ) {
    bVar1 = HasWall__C9TileWalls16TileWallsSegment(this,inSeg);
    if ((bVar1) || (0x1f < (int)inSeg)) break;
    inSeg = inSeg << 1;
  }
  TVar2 = kNoWalls;
  if ((int)inSeg < 0x20) {
    TVar2 = inSeg;
  }
  return TVar2;
}

FloorPattern TileWalls::GetFloorValue(DiagonalSideSelector inSelector) {
  if (1 < inSelector + ~kNotSpecified) {
    return (FloorPattern)(ushort)this->mPatterns[0];
  }
  return (FloorPattern)(ushort)this->mStyles[0];
}

void TileWalls::SetFloorValue(FloorPattern inFloor, DiagonalSideSelector inSelector) {
  if (inSelector + ~kNotSpecified < 2) {
    this->mStyles[0] = (short)inFloor;
    return;
  }
  this->mPatterns[0] = (short)inFloor;
  return;
}

int TileWalls::GetGlobalWallPatternSpriteList(int pattern, int zoom) {
  return (zoom + -1) * 0x100 + pattern + 0x600;
}

int TileWalls::GetGlobalWallStyleSpriteList(int style, int zoom, int cutaway) {
  return (zoom + -1) * 0x200 + style * 2 | (uint)(cutaway != 0);
}

int TileWalls::GetCustomWallStyleSpriteList(int styleBaseID, int zoom, int cutaway) {
  return styleBaseID + cutaway * 3 + zoom + -1;
}

int TileWalls::GetThickWallSpriteList(int zoom) {
  return zoom + 0xfff;
}

int TileWalls::GetThickCutawayWallPixelSpriteList(int zoom) {
  return zoom + 0x13ff;
}

int TileWalls::GetThickCutawayWallZSpriteList(int zoom) {
  return zoom + 0x17ff;
}

void TileWalls::ConvertToWorldCoords() {
  if (this->mRotation != 0) {
    Rotate__9TileWallsi(this,4 - this->mRotation);
  }
  return;
}

int TileWalls::VertexConfigToSpriteIndex(UInt8 inCfg) {
  return (int)_9TileWalls_mVertexConfigToShapeLookup[(int)(char)inCfg & 0xff];
}

TileWallsSegment TileWalls::RotateSegment(TileWallsSegment inSegment, int inRotation) {
  return _9TileWalls_sRotateSegmentLookup[inRotation][inSegment];
}

DiagonalSideSelector TileWalls::RotateDiagonal(DiagonalSideSelector inSelector, int inRotation) {
  return _9TileWalls_sRotateDiagonalLookup[inRotation][inSelector];
}

// STATUS: NOT STARTED

#include "walls.h"

Boolean CanWalkThrough(UInt8 style) {
  return (short)(style == '\x03');
}

Boolean CanWalkThrough(WallStyle inStyle) {
	WallStyle in;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/WallStyles.h */
  if ((((inStyle != kDoorStyle) && (inStyle != kDoorLeftStyle)) && (inStyle != kDoorRightStyle)) &&
     ((inStyle != kFrenchDoorStyle && (inStyle != kCustomDoorStyle)))) {
                    /* end of inlined section */
    return 0;
  }
  return 1;
}

Boolean TestDoorCondition(TileWalls &inFailedWalls, TileWallsSegment inAllowedWallMask) {
	TileWallsSegment curSeg;
	
  short sVar1;
  TileWallsSegment inSeg;
  WallStyle inStyle;
  
  inSeg = First__C9TileWalls(inFailedWalls);
  do {
    if (inSeg == kNoWalls) {
      return 0;
    }
    if ((inSeg & inAllowedWallMask) == 0) {
      inStyle = GetStyle__C9TileWalls16TileWallsSegment(inFailedWalls,inSeg);
      sVar1 = CanWalkThrough__F9WallStyle(inStyle);
      if (sVar1 == 0) {
        return 0;
      }
    }
    inSeg = Next__C9TileWalls16TileWallsSegment(inFailedWalls,inSeg);
  } while( true );
}

Boolean SectWall(FTileRect *testRect, Int inLevel) {
	int left;
	int right;
	int bottom;
	int y;
	int x;
	CTilePt cur;
	TileWalls tw;
	TileWallsSegment seg;
	Int wallPos;
	Int side1;
	Int side2;
	
  int iVar1;
  bool bVar2;
  TileWallsSegment inSeg;
  WallStyle WVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int x;
  int y;
  int iVar8;
  CTilePt cur;
  TileWalls tw;
  int left;
  
  iVar1 = (testRect->bottom).whole;
  y = (testRect->top).whole >> 4;
  iVar7 = (testRect->left).whole >> 4;
  iVar8 = (testRect->right).whole + -1 >> 4;
  do {
    if (iVar1 + -1 >> 4 < y) {
      return 0;
    }
    if (iVar7 <= iVar8) {
      x = iVar7;
      do {
        __7CTilePtiii(&cur,x,y,inLevel);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
        (*(code *)_5Globs_pFixedWorld->__vtable->ComputeArchValue)
                  (&tw,(int)&_5Globs_pFixedWorld->__vtable +
                       (int)*(short *)&_5Globs_pFixedWorld->__vtable->ComputeRooms,&cur);
        for (inSeg = First__C9TileWalls(&tw); inSeg != kNoWalls;
            inSeg = Next__C9TileWalls16TileWallsSegment(&tw,inSeg)) {
          WVar3 = GetStyle__C9TileWalls16TileWallsSegment(&tw,inSeg);
                    /* inlined from c:/eor/src2/games/sims/MSrc/WallStyles.h */
          if ((((WVar3 == kDoorStyle) || (WVar3 == kDoorLeftStyle)) || (WVar3 == kDoorRightStyle))
             || ((WVar3 == kFrenchDoorStyle || (bVar2 = false, WVar3 == kCustomDoorStyle)))) {
            bVar2 = true;
          }
                    /* end of inlined section */
          if (!bVar2) {
            if (inSeg == kTopRight) {
              iVar4 = GetY__C7CTilePt(&cur);
              iVar4 = iVar4 << 4;
              iVar5 = (testRect->top).whole;
              iVar6 = (testRect->bottom).whole;
            }
            else if ((int)inSeg < 3) {
              if (inSeg != kTopLeft) goto LAB_00289a54;
              iVar4 = GetX__C7CTilePt(&cur);
              iVar4 = iVar4 << 4;
              iVar5 = (testRect->left).whole;
              iVar6 = (testRect->right).whole;
            }
            else if (inSeg == kHorizDiag) {
              iVar5 = GetY__C7CTilePt(&cur);
              iVar6 = GetX__C7CTilePt(&cur);
              iVar4 = (iVar5 + iVar6 + 1) * 0x10;
              iVar5 = (testRect->bottom).whole + (testRect->right).whole;
              iVar6 = (testRect->top).whole + (testRect->left).whole;
            }
            else {
              if (inSeg != kVertDiag) goto LAB_00289a54;
              iVar5 = GetY__C7CTilePt(&cur);
              iVar6 = GetX__C7CTilePt(&cur);
              iVar4 = (iVar5 - iVar6) * 0x10;
              iVar5 = (testRect->top).whole - (testRect->right).whole;
              iVar6 = (testRect->bottom).whole - (testRect->left).whole;
            }
            if (((iVar5 < iVar4) && (iVar4 < iVar6)) || ((iVar4 < iVar5 && (iVar6 < iVar4)))) {
              ___9TileWalls(&tw,2);
              ___7CTilePt(&cur,2);
              return 1;
            }
          }
LAB_00289a54:
        }
        ___9TileWalls(&tw,2);
        x = x + 1;
        ___7CTilePt(&cur,2);
      } while (x <= iVar8);
    }
    y = y + 1;
  } while( true );
}

Boolean ValidDoorLocation(Int level, Int x1, Int y1, Int x2, Int y2) {
	Int xdir;
	Int ydir;
	CTilePt t1;
	CTilePt t2;
	TileWallsSegment seg;
	
  bool bVar1;
  long lVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  TileWallsSegment inSeg;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  CTilePt t1;
  CTilePt t2;
  CTilePt aCStack_110 [5];
  CTilePt aCStack_100 [5];
  CTilePt aCStack_f0 [5];
  CTilePt aCStack_e0 [5];
  CTilePt aCStack_d0 [5];
  CTilePt aCStack_c0 [5];
  CTilePt aCStack_b0 [5];
  CTilePt aCStack_a0 [5];
  TileWalls TStack_90;
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
  
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  if ((x2 - x1) + 1U < 3) {
    if (y2 - y1 < -1) {
      return 0;
    }
    if (1 < y2 - y1) {
      return 0;
    }
    if (x2 - x1 == 0) {
      if (y2 == y1) {
        return 0;
      }
    }
    else if (y2 != y1) {
      return 0;
    }
    __7CTilePtiii(&t1,x1,y1,level);
    __7CTilePtiii(&t2,x2,y2,level);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    lVar2 = (*(code *)_5Globs_pFixedWorld->__vtable->SetWall)
                      ((int)&_5Globs_pFixedWorld->__vtable +
                       (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetWall,&t1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    if ((lVar2 == 0) &&
       (lVar2 = (*(code *)_5Globs_pFixedWorld->__vtable->SetWall)
                          ((int)&_5Globs_pFixedWorld->__vtable +
                           (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetWall,&t2), lVar2 == 0))
    {
      __7CTilePt9TilePtDiri(aCStack_100,kNE,0);
      __pl__C7CTilePtRC7CTilePt(aCStack_110,&t1);
      bVar1 = __eq__C7CTilePtRC7CTilePt(aCStack_110,&t2);
      ___7CTilePt(aCStack_110,2);
      ___7CTilePt(aCStack_100,2);
      inSeg = kTopRight;
      if (!bVar1) {
        __7CTilePt9TilePtDiri(aCStack_e0,kSW,0);
        __pl__C7CTilePtRC7CTilePt(aCStack_f0,&t1);
        bVar1 = __eq__C7CTilePtRC7CTilePt(aCStack_f0,&t2);
        ___7CTilePt(aCStack_f0,2);
        ___7CTilePt(aCStack_e0,2);
        inSeg = kBottomLeft;
        if (!bVar1) {
          __7CTilePt9TilePtDiri(aCStack_c0,kNW,0);
          __pl__C7CTilePtRC7CTilePt(aCStack_d0,&t1);
          bVar1 = __eq__C7CTilePtRC7CTilePt(aCStack_d0,&t2);
          ___7CTilePt(aCStack_d0,2);
          ___7CTilePt(aCStack_c0,2);
          if (bVar1) {
            inSeg = kTopLeft;
          }
          else {
            inSeg = kBottomRight;
            __7CTilePt9TilePtDiri(aCStack_a0,kSE,0);
            __pl__C7CTilePtRC7CTilePt(aCStack_b0,&t1);
            bVar1 = __eq__C7CTilePtRC7CTilePt(aCStack_b0,&t2);
            if (!bVar1) {
              inSeg = kNoWalls;
            }
            ___7CTilePt(aCStack_b0,2);
            ___7CTilePt(aCStack_a0,2);
          }
        }
      }
      if (inSeg != kNoWalls) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
        (*(code *)_5Globs_pFixedWorld->__vtable->ComputeArchValue)
                  (&TStack_90,
                   (int)&_5Globs_pFixedWorld->__vtable +
                   (int)*(short *)&_5Globs_pFixedWorld->__vtable->ComputeRooms,&t1);
        bVar1 = HasWall__C9TileWalls16TileWallsSegment(&TStack_90,inSeg);
        ___9TileWalls(&TStack_90,2);
        ___7CTilePt(&t2,2);
        ___7CTilePt(&t1,2);
        return (short)bVar1;
      }
    }
    ___7CTilePt(&t2,2);
    ___7CTilePt(&t1,2);
  }
  return 0;
}

UInt8 RotateWallBits(UInt8 wallBits, Int notches) {
	Int tem;
	
  return (uchar)((int)((int)(char)wallBits & 0xffU | ((int)(char)wallBits & 0xffU) << 4) >>
                (8 - notches >> 1 & 0x1fU));
}

Boolean CheckWallFlags(FTilePt location, Int level, Int objDir, Int wflags) {
	CTilePt pt;
	TileWalls walls;
	bool wallIsDiag;
	Int invRotation;
	bool corner;
	TileWallsSegment segs[4];
	bool requires[4];
	bool prohibits[4];
	bool normal[4];
	bool walled[4];
	int i;
	FInt *this;
	WallStyle style;
	WallStyle in;
	WallStyle in;
	
  uint uVar1;
  ulong *puVar2;
  bool bVar3;
  bool bVar4;
  WallStyle WVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  TileWallsSegment *pTVar10;
  undefined8 unaff_s0;
  int *piVar11;
  undefined8 unaff_s1;
  int *piVar12;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  CTilePt pt;
  TileWalls walls;
  TileWallsSegment segs [4];
  bool requires [4];
  bool prohibits [4];
  bool normal [4];
  bool walled [4];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
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
  
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
  __7CTilePtiii(&pt,(location->x).whole >> 4,(location->y).whole >> 4,level);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pFixedWorld->__vtable->ComputeArchValue)
            (&walls,(int)&_5Globs_pFixedWorld->__vtable +
                    (int)*(short *)&_5Globs_pFixedWorld->__vtable->ComputeRooms);
  bVar3 = HasDiagonal__C9TileWalls(&walls);
  if (((wflags & 0x40U) == 0) || (bVar3)) {
    if (((wflags & 0x80U) == 0) && (bVar3)) {
      gPlacementError = 7;
    }
    else {
      if (wflags == 0) {
LAB_0028a19c:
        ___9TileWalls(&walls,2);
        ___7CTilePt(&pt,2);
        return 1;
      }
      iVar7 = (int)(-objDir & 7U) >> 1;
      if (iVar7 != 0) {
        Rotate__9TileWallsi(&walls,iVar7);
      }
      bVar3 = false;
      bVar4 = HasWall__C9TileWalls16TileWallsSegment(&walls,kTopLeft);
      if ((bVar4) && (bVar4 = HasWall__C9TileWalls16TileWallsSegment(&walls,kTopRight), bVar4)) {
        bVar3 = true;
      }
      else {
        bVar4 = HasWall__C9TileWalls16TileWallsSegment(&walls,kTopLeft);
        if ((bVar4) && (bVar4 = HasWall__C9TileWalls16TileWallsSegment(&walls,kBottomLeft), bVar4))
        {
          bVar3 = true;
        }
        else {
          bVar4 = HasWall__C9TileWalls16TileWallsSegment(&walls,kTopRight);
          if ((bVar4) &&
             (bVar4 = HasWall__C9TileWalls16TileWallsSegment(&walls,kBottomRight), bVar4)) {
            bVar3 = true;
          }
          else {
            bVar4 = HasWall__C9TileWalls16TileWallsSegment(&walls,kBottomLeft);
            if ((bVar4) &&
               (bVar4 = HasWall__C9TileWalls16TileWallsSegment(&walls,kBottomRight), bVar4)) {
              bVar3 = true;
            }
          }
        }
      }
      if (((wflags & 0x20U) == 0) || (bVar3)) {
        if (((wflags & 0x10U) == 0) || (!bVar3)) {
          uVar1 = (int)segs + 7U & 7;
          puVar2 = (ulong *)(((int)segs + 7U) - uVar1);
          *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003c0ce0 >> (7 - uVar1) * 8;
          segs._0_8_ = DAT_003c0ce0;
          uVar1 = (int)segs + 0xfU & 7;
          puVar2 = (ulong *)(((int)segs + 0xfU) - uVar1);
          *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003c0ce8 >> (7 - uVar1) * 8;
          segs._8_8_ = DAT_003c0ce8;
          requires = (bool  [4])(wflags & 1);
          piVar6 = (int *)walled;
          piVar9 = (int *)normal;
          piVar8 = (int *)prohibits;
          prohibits = (bool  [4])(wflags >> 8 & 1);
          pTVar10 = segs;
          iVar7 = 3;
          piVar11 = piVar6;
          piVar12 = piVar9;
          do {
            bVar3 = HasWall__C9TileWalls16TileWallsSegment(&walls,*pTVar10);
            *piVar11 = (int)bVar3;
            *piVar12 = 0;
            if (*piVar11 != 0) {
              WVar5 = GetStyle__C9TileWalls16TileWallsSegment(&walls,*pTVar10);
                    /* inlined from c:/eor/src2/games/sims/MSrc/WallStyles.h */
              if ((((WVar5 == kNormalStyle) || (WVar5 == kCutawayTransitionLeft)) ||
                  (WVar5 == kCutawayTransitionRight)) ||
                 (bVar3 = false, WVar5 == kCutawayTransitionThickLeft)) {
                bVar3 = true;
              }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/WallStyles.h */
              if ((bVar3) || (WVar5 == kCustomWindowStyle)) {
                *piVar12 = 1;
              }
              else {
                    /* end of inlined section */
                *piVar12 = 0;
              }
            }
            piVar12 = piVar12 + 1;
            piVar11 = piVar11 + 1;
            iVar7 = iVar7 + -1;
            pTVar10 = pTVar10 + 1;
          } while (-1 < iVar7);
          piVar11 = (int *)requires;
          do {
            if (*piVar8 == 0) {
              iVar7 = *piVar11;
            }
            else {
              if (*piVar6 != 0) {
                gPlacementError = 7;
                goto LAB_0028a16c;
              }
              iVar7 = *piVar11;
            }
            if ((iVar7 != 0) && (*piVar9 == 0)) {
              if (*piVar6 == 0) {
                gPlacementError = 6;
              }
              else {
                gPlacementError = 0x16;
              }
              goto LAB_0028a16c;
            }
            piVar6 = piVar6 + 1;
            piVar9 = piVar9 + 1;
            piVar11 = piVar11 + 1;
            piVar8 = piVar8 + 1;
          } while ((int)piVar6 < (int)&local_a0);
          goto LAB_0028a19c;
        }
        gPlacementError = 5;
      }
      else {
        gPlacementError = 4;
      }
    }
  }
  else {
    gPlacementError = 0x17;
  }
LAB_0028a16c:
  ___9TileWalls(&walls,2);
  ___7CTilePt(&pt,2);
  return 0;
}

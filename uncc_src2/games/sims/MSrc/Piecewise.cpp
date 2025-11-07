// STATUS: NOT STARTED

#include "Piecewise.h"

PiecewiseFn* PiecewiseFn::PiecewiseFn() {
  this->fNumPoints = 0;
  this->fMaxPoints = 0;
  this->fPoints = (PiecewisePt *)0x0;
  this->fReciprocals = (float *)0x0;
  return this;
}

void PiecewiseFn::~PiecewiseFn(int __in_chrg) {
	void *pAddress;
	
  SetMaxPoints__11PiecewiseFni(this,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void PiecewiseFn::Reset() {
  this->fNumPoints = 0;
  return;
}

void PiecewiseFn::SetMaxPoints(int maxPoints) {
  PiecewisePt *pPVar1;
  float *pfVar2;
  
  if (this->fPoints != (PiecewisePt *)0x0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this->fPoints);
  }
                    /* end of inlined section */
  this->fPoints = (PiecewisePt *)0x0;
  if (this->fReciprocals != (float *)0x0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this->fReciprocals);
  }
                    /* end of inlined section */
  this->fReciprocals = (float *)0x0;
  this->fNumPoints = 0;
  this->fMaxPoints = maxPoints;
  if (maxPoints < 1) {
    this->fMaxPoints = 0;
  }
  else {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    pPVar1 = (PiecewisePt *)_memmanAlloc__FUiUi(maxPoints << 3,4);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/e_standard_heap.h */
                    /* end of inlined section */
    this->fPoints = pPVar1;
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    pfVar2 = (float *)_memmanAlloc__FUiUi((this->fMaxPoints + -1) * 4,4);
                    /* end of inlined section */
    this->fReciprocals = pfVar2;
  }
  return;
}

void PiecewiseFn::AddPoint(PiecewisePt &inPt) {
	int newIndex;
	int i;
	int j;
	PiecewiseFn *this;
	int i;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  int iVar6;
  PiecewisePt *pPVar7;
  PiecewisePt *pPVar8;
  int iVar9;
  float fVar10;
  
  iVar9 = this->fNumPoints;
  if (iVar9 == this->fMaxPoints) {
    return;
  }
  iVar6 = 0;
  if (0 < iVar9) {
    pPVar8 = this->fPoints;
    fVar10 = inPt->fX;
    if (pPVar8->fX == fVar10) {
      return;
    }
    if (fVar10 < pPVar8->fX) {
      iVar9 = this->fNumPoints;
      goto LAB_00293950;
    }
    for (iVar6 = 1; pPVar8 = pPVar8 + 1, iVar6 < iVar9; iVar6 = iVar6 + 1) {
      if (pPVar8->fX == fVar10) {
        return;
      }
      if (fVar10 < pPVar8->fX) break;
    }
  }
  iVar9 = this->fNumPoints;
LAB_00293950:
  uVar5 = (ulong)(iVar9 + 1);
  this->fNumPoints = iVar9 + 1;
  if (iVar6 + 1 <= iVar9) {
    pPVar8 = this->fPoints;
    while( true ) {
      pPVar7 = pPVar8 + iVar9;
      puVar1 = (undefined *)((int)&pPVar7[-1].fY + 3);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)(pPVar7 + -1) & 7;
      uVar5 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              (long)(int)pPVar8 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)(pPVar7 + -1) - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&pPVar7->fY + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar5 >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar7 & 7;
      *(ulong *)((int)pPVar7 - uVar2) =
           uVar5 << uVar2 * 8 |
           *(ulong *)((int)pPVar7 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      if (iVar9 + -1 < iVar6 + 1) break;
      pPVar8 = this->fPoints;
      iVar9 = iVar9 + -1;
    }
  }
                    /* end of inlined section */
  pPVar8 = this->fPoints + iVar6;
  puVar1 = (undefined *)((int)&inPt->fY + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)inPt & 7;
  uVar5 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar5 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)inPt - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&pPVar8->fY + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar5 >> (7 - uVar2) * 8;
  uVar2 = (uint)pPVar8 & 7;
  *(ulong *)((int)pPVar8 - uVar2) =
       uVar5 << uVar2 * 8 | *(ulong *)((int)pPVar8 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8
  ;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Piecewise.h */
  if (0 < this->fNumPoints + -1) {
    pPVar8 = this->fPoints;
    iVar9 = 0;
    while( true ) {
      this->fReciprocals[iVar9] = 1.0 / ((pPVar8 + iVar9)[1].fX - pPVar8[iVar9].fX);
      if (this->fNumPoints + -1 <= iVar9 + 1) break;
      pPVar8 = this->fPoints;
      iVar9 = iVar9 + 1;
    }
  }
                    /* end of inlined section */
  return;
}

void PiecewiseFn::AddPointsFromText(char *pointList) {
	char *scan;
	int len;
	char point[256];
	int x;
	int y;
	int cnt;
	PiecewisePt newPoint;
	
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char point [256];
  PiecewisePt newPoint;
  int x;
  int y;
  
  do {
    cVar2 = *pointList;
    if (cVar2 != '\0') {
      do {
        if (cVar2 == '(') {
          cVar2 = *pointList;
          goto LAB_00293a70;
        }
        pointList = pointList + 1;
        cVar2 = *pointList;
      } while (cVar2 != '\0');
      cVar2 = *pointList;
    }
LAB_00293a70:
    iVar5 = 0;
    if ((cVar2 != '\0') && (cVar2 != ')')) {
      for (iVar5 = 1; (pointList[iVar5] != '\0' && (pointList[iVar5] != ')')); iVar5 = iVar5 + 1) {
      }
    }
    if ((iVar5 == 0) || (iVar6 = iVar5 + 1, pointList[iVar5] == '\0')) {
      return;
    }
    iVar4 = 0;
    if (0 < iVar6) {
      do {
        pcVar1 = pointList + iVar4;
        pcVar3 = point + iVar4;
        iVar4 = iVar4 + 1;
        *pcVar3 = *pcVar1;
      } while (iVar4 < iVar6);
    }
    point[iVar5 + 1] = '\0';
    iVar5 = sscanf(point,"(%d;%d)");
    if (iVar5 == 2) {
      newPoint.fX = (float)x;
      newPoint.fY = (float)y;
      AddPoint__11PiecewiseFnRC11PiecewisePt(this,&newPoint);
      pointList = pointList + iVar6;
    }
    else {
      pointList = pointList + iVar6;
    }
  } while( true );
}

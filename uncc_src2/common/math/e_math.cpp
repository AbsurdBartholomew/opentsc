// STATUS: NOT STARTED

#include "e_math.h"

u32 _urandseed = 1;

bool MatrixInvert(float **mMat, int size) {
	int indxc[256];
	int indxr[256];
	int ipiv[256];
	int irow;
	int icol;
	int c;
	int i;
	float big;
	float pivinv;
	int j;
	int k;
	int l1;
	int l2;
	int ll;
	float dum;
	int l3;
	int l4;
	int k;
	
  int iVar1;
  float *pfVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  float **ppfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  int indxc [256];
  int indxr [256];
  int ipiv [256];
  
  if (0 < size) {
    piVar3 = ipiv;
    iVar1 = size;
    do {
      *piVar3 = -1;
      iVar1 = iVar1 + -1;
      piVar3 = piVar3 + 1;
    } while (iVar1 != 0);
  }
  iVar1 = 0;
  iVar11 = 0;
  iVar9 = 0;
  if (0 < size) {
    do {
      fVar12 = 0.0;
      iVar4 = 0;
      ppfVar6 = mMat;
      piVar3 = ipiv;
      if (0 < size) {
        do {
          if ((*piVar3 != 0) && (iVar8 = 0, iVar7 = iVar1, iVar10 = iVar11, piVar5 = ipiv, 0 < size)
             ) {
            do {
              if (*piVar5 == -1) {
                fVar13 = ABS((*ppfVar6)[iVar8]);
                iVar1 = iVar4;
                iVar11 = iVar8;
                if (fVar13 < fVar12) {
                  fVar13 = fVar12;
                  iVar1 = iVar7;
                  iVar11 = iVar10;
                }
              }
              else {
                fVar13 = fVar12;
                iVar1 = iVar7;
                iVar11 = iVar10;
                if (0 < *piVar5) {
                  return false;
                }
              }
              iVar8 = iVar8 + 1;
              fVar12 = fVar13;
              iVar7 = iVar1;
              iVar10 = iVar11;
              piVar5 = piVar5 + 1;
            } while (iVar8 < size);
          }
          iVar4 = iVar4 + 1;
          ppfVar6 = ppfVar6 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar4 < size);
      }
      piVar3 = ipiv + iVar11;
      *piVar3 = *piVar3 + 1;
      if ((iVar1 != iVar11) && (0 < size)) {
        iVar4 = 0;
        do {
          iVar7 = iVar4 + 1;
          fVar12 = mMat[iVar1][iVar4];
          mMat[iVar1][iVar4] = mMat[iVar11][iVar4];
          mMat[iVar11][iVar4] = fVar12;
          iVar4 = iVar7;
        } while (iVar7 < size);
      }
      indxr[iVar9] = iVar1;
      indxc[iVar9] = iVar11;
      pfVar2 = mMat[iVar11] + iVar11;
      fVar12 = *pfVar2;
      if (fVar12 == 0.0) {
        return false;
      }
      *pfVar2 = 1.0;
      iVar9 = iVar9 + 1;
      iVar4 = 0;
      if (0 < size) {
        do {
          iVar7 = iVar4 + 1;
          pfVar2 = mMat[iVar11] + iVar4;
          *pfVar2 = *pfVar2 * (1.0 / fVar12);
          iVar4 = iVar7;
        } while (iVar7 < size);
      }
      iVar4 = 0;
      if (0 < size) {
        do {
          iVar7 = iVar4 + 1;
          if (iVar4 != iVar11) {
            pfVar2 = mMat[iVar4] + iVar11;
            fVar12 = *pfVar2;
            *pfVar2 = 0.0;
            if (0 < size) {
              iVar10 = 0;
              do {
                iVar8 = iVar10 + 1;
                pfVar2 = mMat[iVar4] + iVar10;
                *pfVar2 = *pfVar2 - mMat[iVar11][iVar10] * fVar12;
                iVar10 = iVar8;
              } while (iVar8 < size);
            }
          }
          iVar4 = iVar7;
        } while (iVar7 < size);
      }
    } while (iVar9 < size);
  }
  iVar1 = size + -1;
  while (iVar11 = iVar1, -1 < iVar11) {
    iVar1 = iVar11 + -1;
    piVar3 = indxc + iVar11;
    if ((indxr[iVar11] != *piVar3) && (0 < size)) {
      ppfVar6 = mMat;
      iVar9 = size;
      do {
        iVar9 = iVar9 + -1;
        pfVar2 = *ppfVar6 + indxr[iVar11];
        fVar12 = *pfVar2;
        *pfVar2 = (*ppfVar6)[*piVar3];
        pfVar2 = *ppfVar6;
        ppfVar6 = ppfVar6 + 1;
        pfVar2[*piVar3] = fVar12;
      } while (iVar9 != 0);
    }
  }
  return true;
}

float Rndf() {
	u32 i;
	
  _urandseed = _urandseed * 0x41c64e6f + 0x303b;
  return (float)(_urandseed >> 0x10 & 0x7fff) * 3.051758e-05;
}

float SignedRndf() {
  float fVar1;
  
  fVar1 = Rndf__Fv();
  return (fVar1 + fVar1) - 1.0;
}

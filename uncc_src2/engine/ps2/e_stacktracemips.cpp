// STATUS: NOT STARTED

#include "e_stacktracemips.h"

struct _returnCache {
	unsigned int *returnAddress;
	int raOffset;
	int spAdjust;
};

typedef _returnCache ReturnCacheRec;
typedef _returnCache *ReturnCachePtr;
typedef int Bool;

void StackTraceMips(unsigned int *results, int max, void *pReturnAddress, void *pStack) {
	static _returnCache returnCache[256];
	unsigned int *ra;
	unsigned int *ra_limit;
	unsigned int *sp;
	unsigned int inst;
	unsigned int mainCall;
	short unsigned int const_upper;
	short unsigned int const_lower;
	int ra_offset;
	int sp_adjust;
	Bool found_ra_offset;
	Bool found_sp_adjust;
	Bool found_const_upper;
	Bool found_const_lower;
	ReturnCachePtr rc;
	unsigned int i;
	
  uint uVar1;
  long lVar2;
  uint **ppuVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  ulong in_hi;
  uint mainCall;
  
  uVar9 = 0;
  do {
    puVar8 = &returnCache_45 + uVar9;
    uVar9 = uVar9 + 1;
    *puVar8 = 0;
  } while (uVar9 < 0xc00);
  if ((pReturnAddress != (void *)0x0) && (max != 0)) {
    while( true ) {
      lVar2 = (in_hi | 0x3d2d00) + (long)(int)(((int)pReturnAddress >> 2 & 0xffU) * 0xc);
      ppuVar3 = (uint **)lVar2;
      in_hi = (ulong)(int)((ulong)lVar2 >> 0x20);
      if (*ppuVar3 != (uint *)pReturnAddress) {
        bVar4 = false;
        bVar5 = false;
        bVar6 = false;
        bVar7 = false;
        uVar9 = 0;
        uVar14 = 0;
        *ppuVar3 = (uint *)pReturnAddress;
        puVar13 = (uint *)0x10000000;
        puVar12 = (uint *)0x0;
        puVar11 = (uint *)&_heap_size;
                    /* WARNING: Load size is inaccurate */
        for (; ((!bVar4 || (!bVar5)) && (pReturnAddress < puVar13));
            pReturnAddress = (void *)((int)pReturnAddress + 4)) {
          uVar1 = *pReturnAddress;
          uVar10 = uVar1 & 0xffff0000;
          if (((uVar10 == 0x8fbf0000) || (uVar10 == 0xdfbf0000)) || (uVar10 == 0x7bbf0000)) {
            puVar12 = (uint *)(uVar1 & 0xffff);
            bVar4 = true;
          }
          else if (uVar10 == 0x27bd0000) {
            bVar5 = true;
            puVar11 = (uint *)(int)(short)uVar1;
          }
          else if (uVar1 == 0x3a1e821) {
            puVar11 = (uint *)0x0;
            bVar5 = true;
          }
          else if (uVar10 == 0x3c010000) {
            uVar9 = uVar1 & 0xffff;
            uVar14 = 0;
            bVar6 = true;
          }
          else if (uVar10 == 0x34210000) {
            uVar14 = uVar1 & 0xffff;
            bVar7 = true;
          }
          else if (uVar10 == 0x34010000) {
            uVar14 = uVar1 & 0xffff;
            uVar9 = 0;
            bVar7 = true;
          }
          else if (uVar1 == 0x3e00008) {
            puVar13 = (uint *)((int)pReturnAddress + 8);
          }
        }
        if (puVar11 == (uint *)0x0) {
          if ((bVar6) || (bVar7)) {
            puVar11 = (uint *)(uVar9 << 0x10 | uVar14);
            ppuVar3[1] = puVar12;
          }
          else {
            ppuVar3[1] = puVar12;
          }
        }
        else {
          ppuVar3[1] = puVar12;
        }
        ppuVar3[2] = puVar11;
      }
      if ((int)ppuVar3[2] < 1) break;
      pReturnAddress = *(uint **)(((int)ppuVar3[1] >> 2) * 4 + (int)pStack);
      pStack = (void *)((int)pStack + ((int)ppuVar3[2] >> 2) * 4);
      *results = (uint)((int)pReturnAddress + -8);
      if (*(uint *)((int)pReturnAddress + -8) == 0xc0b268e) {
        ((uint **)results)[1] = (uint *)0x0;
        return;
      }
      max = max + -1;
      if ((uint *)pReturnAddress == (uint *)0x0) {
        return;
      }
      results = (uint *)((uint **)results + 1);
      if (max == 0) {
        return;
      }
    }
    *results = 0;
  }
  return;
}

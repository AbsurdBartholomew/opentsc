// STATUS: NOT STARTED

#include "srand.h"

static union {
	unsigned int next;
	struct {
		unsigned int : 1;
		unsigned int n : 15;
	} bits;
} rrandSeed = {
	/* .next = */ 1,
	/* .bits = */ {
		/* . = */ BITFIELD,
		/* .n = */ BITFIELD
	}
};

static unsigned int srandSeed;

void SetRRandSeed(unsigned int n) {
  rrandSeed.next = n;
  return;
}

unsigned int GetSRandSeed() {
  return srandSeed;
}

void SetSRandSeed(unsigned int theSeed) {
  srandSeed = theSeed;
  return;
}

short unsigned int RRand(short unsigned int lim) {
	unsigned int myRandom0;
	
  rrandSeed.next = (rrandSeed.next & 0xffff) * 0x4e6d + 0x3039;
  if (((int)lim & 0xffffU) == 0) {
    trap(7);
  }
  return (short)((rrandSeed.next >> 0x10 & 0x7fff) % ((int)lim & 0xffffU));
}

int GetNextRandomNumber() {
	unsigned int lo;
	unsigned int hi;
	unsigned int ll;
	unsigned int lh;
	unsigned int hh;
	unsigned int hl;
	
  uint uVar1;
  uint uVar2;
  
  uVar1 = srandSeed & 0xffff;
  uVar2 = srandSeed >> 0x10;
  srandSeed = srandSeed * 0x41c64e6d + 0x3039;
  return (uVar1 * 0x4e6d + 0x3039 >> 0x10) + uVar1 * 0x41c6 + uVar2 * 0x41c64e6d;
}

int SGIRand(unsigned int limit) {
	unsigned int lim;
	unsigned int lim;
	
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/SRand.h */
  iVar1 = GetNextRandomNumber__Fv();
  if (limit == 0) {
    trap(7);
  }
  iVar2 = GetNextRandomNumber__Fv();
  if (limit == 0) {
    trap(7);
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/SRand.h */
                    /* end of inlined section */
  iVar3 = iVar2 % (int)limit;
  if (iVar2 % (int)limit < iVar1 % (int)limit) {
    iVar3 = iVar1 % (int)limit;
  }
  return iVar3;
}

int SGRand(unsigned int limit) {
	unsigned int lim;
	unsigned int lim;
	
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/SRand.h */
  iVar1 = GetNextRandomNumber__Fv();
  if (limit == 0) {
    trap(7);
  }
  iVar2 = GetNextRandomNumber__Fv();
  if (limit == 0) {
    trap(7);
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/SRand.h */
                    /* end of inlined section */
  iVar3 = iVar2 % (int)limit;
  if (iVar1 % (int)limit < iVar2 % (int)limit) {
    iVar3 = iVar1 % (int)limit;
  }
  return iVar3;
}

int SGSRand(unsigned int limit) {
	int x;
	unsigned int lim;
	unsigned int lim;
	
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/SRand.h */
  iVar1 = GetNextRandomNumber__Fv();
  if (limit == 0) {
    trap(7);
  }
  iVar2 = GetNextRandomNumber__Fv();
  if (limit == 0) {
    trap(7);
  }
                    /* end of inlined section */
  iVar4 = iVar2 % (int)limit;
                    /* inlined from c:/eor/src2/games/sims/MSrc/SRand.h */
  if (iVar1 % (int)limit < iVar2 % (int)limit) {
    iVar4 = iVar1 % (int)limit;
  }
  uVar3 = GetNextRandomNumber__Fv();
                    /* end of inlined section */
  iVar1 = -iVar4;
  if ((uVar3 & 1) == 0) {
    iVar1 = iVar4;
  }
  return iVar1;
}

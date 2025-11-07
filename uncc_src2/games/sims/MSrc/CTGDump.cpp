// STATUS: NOT STARTED

#include "CTGDump.h"

CTGDump ctgDump = {
};

static void localConvertToASCII(char *out, c16 *in) {
  char cVar1;
  short sVar2;
  
  sVar2 = *in;
  while (sVar2 != 0) {
    cVar1 = *(char *)in;
    in = in + 1;
    *out = cVar1;
    out = out + 1;
    sVar2 = *in;
  }
  *out = '\0';
  return;
}

CTGDump* CTGDump::CTGDump() {
  return this;
}

void CTGDump::~CTGDump(int __in_chrg) {
	void *pAddress;
	
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

CTGDump& CTGDump::operator<<(char *inString) {
  return this;
}

CTGDump& CTGDump::operator<<(c16 *str) {
  uint uVar1;
  char *out;
  
  uVar1 = wcslen__FPCUs(str);
                    /* inlined from /eor/src2/common/e_standard_heap.h */
  out = (char *)_memmanAlloc__FUiUi(uVar1 + 1,4);
                    /* end of inlined section */
  localConvertToASCII__FPcPCUs(out,str);
  if (out != (char *)0x0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(out);
                    /* end of inlined section */
  }
  return this;
}

CTGDump& CTGDump::operator<<(double &inDouble) {
	char buffer[64];
	
  char buffer [64];
  
  sprintf(buffer,"%f");
  return this;
}

CTGDump& CTGDump::operator<<(int inInt) {
	char buffer[64];
	
  char buffer [64];
  
  sprintf(buffer,"%d");
  return this;
}

CTGDump& CTGDump::operator<<(unsigned int inInt) {
	char buffer[64];
	
  char buffer [64];
  
  sprintf(buffer,"%u");
  return this;
}

CTGDump& CTGDump::operator<<(char inChar) {
	char buffer[64];
	
  char buffer [64];
  
  sprintf(buffer,"%d");
  return this;
}

CTGDump& CTGDump::operator<<(long unsigned int inLong) {
	char buffer[64];
	
  char buffer [64];
  
  sprintf(buffer,"%ld");
  return this;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___7CTGDump(&ctgDump,2);
    }
    else {
      __7CTGDump(&ctgDump);
    }
  }
  return;
}

void global constructors keyed to ctgDump() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to ctgDump() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

// STATUS: NOT STARTED

#include "ObjectTypeAttributes.h"

ObjectTypeAttrBlock* ObjectTypeAttrBlock::ObjectTypeAttrBlock(SInt32 guid, Int numAttr) {
  ushort *puVar1;
  
  this->fGUID = guid;
  this->fNumAttr = numAttr;
  if ((uint)numAttr < 32000) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    puVar1 = (ushort *)_memmanAlloc__FUiUi(numAttr << 1,4);
                    /* end of inlined section */
    this->fAttr = puVar1;
  }
  else {
    this->fNumAttr = 0;
    this->fAttr = (ushort *)0x0;
  }
  Clear__19ObjectTypeAttrBlock(this);
  return this;
}

void ObjectTypeAttrBlock::~ObjectTypeAttrBlock(int __in_chrg) {
	void *pAddress;
	
  if (this->fAttr != (ushort *)0x0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this->fAttr);
  }
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void ObjectTypeAttrBlock::Clear() {
	int i;
	
  ushort *puVar1;
  int iVar2;
  
  if (0 < this->fNumAttr) {
    puVar1 = this->fAttr;
    iVar2 = 0;
    while( true ) {
      puVar1[iVar2] = 0;
      if (this->fNumAttr <= iVar2 + 1) break;
      puVar1 = this->fAttr;
      iVar2 = iVar2 + 1;
    }
  }
  return;
}

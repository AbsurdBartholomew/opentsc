// STATUS: NOT STARTED

#include "swizzle.h"

void Swizzle8(void *val) {
	SInt32 loWord;
	SInt32 hiWord;
	
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  int loWord;
  int hiWord;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* WARNING: Load size is inaccurate */
  loWord = *val;
  hiWord = *(int *)((int)val + 4);
  Swizzle4__FPv(&loWord);
  Swizzle4__FPv((void *)((uint)&loWord | 4));
  *(int *)val = hiWord;
  *(int *)((int)val + 4) = loWord;
  return;
}

void Swizzle4(void *val) {
	SInt16 loWord;
	SInt16 hiWord;
	
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  ushort loWord;
  ushort hiWord;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* WARNING: Load size is inaccurate */
  loWord = *val;
  hiWord = *(ushort *)((int)val + 2);
  Swizzle2__FPv(&loWord);
  Swizzle2__FPv((void *)((uint)&loWord | 2));
  *(ushort *)val = hiWord;
  *(ushort *)((int)val + 2) = loWord;
  return;
}

void Swizzle2(void *val) {
  undefined uVar1;
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *(undefined *)((int)val + 1);
  *(undefined *)((int)val + 1) = *val;
  *(undefined *)val = uVar1;
  return;
}

void SwizzleRect(Rect *rect) {
	SInt16 *pShort;
	
  Swizzle2__FPv(rect);
  Swizzle2__FPv(&rect->left);
  Swizzle2__FPv(&rect->bottom);
  Swizzle2__FPv(&rect->right);
  return;
}

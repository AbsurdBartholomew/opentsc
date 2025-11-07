// STATUS: NOT STARTED

#include "StubObject.h"

u32 StubObject::MakeNewGUID() {
	Sint64 li;
	u32 result;
	
  uint uVar1;
  int iVar2;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  long li;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  QueryPerformanceCounter__FPl(&li);
  uVar1 = GetTimeDate__Fv();
  iVar2 = rand();
  return uVar1 ^ (uint)((int)li * iVar2) >> 0x10;
}

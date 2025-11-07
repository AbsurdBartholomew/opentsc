// STATUS: NOT STARTED

#include "esimscratchpadman.h"

EHeap *ESimScratchPadMan::m_pHeap = NULL;
void *ESimScratchPadMan::m_pHead = NULL;
CWallArray *ESimScratchPadMan::mWallLayer = NULL;
CFloorArray *ESimScratchPadMan::mFloorLayer = NULL;

void* _Default2dArrayAlloc(u32 size) {
  void *pvVar1;
  
  pvVar1 = _memmanAlloc__FUiUi(size,4);
  return pvVar1;
}

void _Default2dArrayFree(void *p) {
  _memmanFree__FPv(p);
  return;
}

void* _WallFloorUndoableAlloc(u32 size) {
  void *pvVar1;
  
  pvVar1 = Alloc__17ESimScratchPadManUi(size);
  return pvVar1;
}

void _WallFloorUndoableFree(void *p) {
  Free__17ESimScratchPadManPv(p);
  return;
}

void ESimScratchPadMan::InitHeap() {
  EHeap *this;
  _c2DArray *p_Var1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  BString aBStack_40 [4];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  _17ESimScratchPadMan_m_pHead =
       AllocateScratchMemory__5GlobsPCvPCci
                 (&_17ESimScratchPadMan_m_pHead,"c:/eor/src2/games/sims/ESRC/esimscratchpadman.cpp",
                  0x4d);
  this = (EHeap *)__builtin_new(0x18);
                    /* inlined from /eor/src2/common/datastruc/e_heap.h */
  Init__5EHeapPvUi(this,_17ESimScratchPadMan_m_pHead,0xf7c00);
  _9_c2DArray_m_pfnFree = _WallFloorUndoableFree__FPv;
                    /* end of inlined section */
                    /* inlined from ../MSrc/newarray2d.h */
  _9_c2DArray_m_pfnAlloc = _WallFloorUndoableAlloc__FUi;
  _17ESimScratchPadMan_m_pHeap = this;
                    /* end of inlined section */
  p_Var1 = (_c2DArray *)__builtin_new(0x18);
                    /* inlined from ../MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/newarray2d.h */
  __7BStringPCc(aBStack_40,"");
  __9_c2DArrayiiiRC7BString(p_Var1,8,0x40,0x40,aBStack_40);
  ___7BString(aBStack_40,2);
  _17ESimScratchPadMan_mWallLayer = (CWallArray *)p_Var1;
                    /* end of inlined section */
  p_Var1 = (_c2DArray *)__builtin_new(0x18);
                    /* inlined from ../MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/newarray2d.h */
  __7BStringPCc(aBStack_40,"");
  __9_c2DArrayiiiRC7BString(p_Var1,1,0x40,0x40,aBStack_40);
  ___7BString(aBStack_40,2);
                    /* end of inlined section */
  _17ESimScratchPadMan_mFloorLayer = (CFloorArray *)p_Var1;
                    /* inlined from ../MSrc/newarray2d.h */
  _9_c2DArray_m_pfnAlloc = _Default2dArrayAlloc__FUi;
  _9_c2DArray_m_pfnFree = _Default2dArrayFree__FPv;
  return;
}

void* ESimScratchPadMan::GetUpper32k() {
                    /* end of inlined section */
  if (_17ESimScratchPadMan_m_pHeap != (EHeap *)0x0) {
    return (void *)((int)_17ESimScratchPadMan_m_pHead + 0xf7c00);
  }
  return (void *)0x0;
}

void* ESimScratchPadMan::Alloc(u32 size) {
  void *pvVar1;
  
  if (_17ESimScratchPadMan_m_pHeap == (EHeap *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = Alloc__5EHeapUiUi(_17ESimScratchPadMan_m_pHeap,size,4);
  }
  return pvVar1;
}

void* ESimScratchPadMan::AllocAlign(u32 size, u32 alignment) {
  void *pvVar1;
  
  if (_17ESimScratchPadMan_m_pHeap == (EHeap *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = Alloc__5EHeapUiUi(_17ESimScratchPadMan_m_pHeap,size,alignment);
  }
  return pvVar1;
}

void ESimScratchPadMan::Free(void *p) {
  if (_17ESimScratchPadMan_m_pHeap != (EHeap *)0x0) {
    Free__5EHeapPv(_17ESimScratchPadMan_m_pHeap,p);
  }
  return;
}

void ESimScratchPadMan::EmptyHeap() {
  EGlobalManagerClient__vtable *pEVar1;
  
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar1[3].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
                    /* end of inlined section */
  if ((_globals._pCurHouse != (EHouse__26_3190 *)0x0) && (_globals._curGameState.m_id == 1)) {
    DestroyWalls__6EHouse((EHouse__2_990 *)_globals._pCurHouse);
    DestroyFloor__6EHouse((EHouse__2_990 *)_globals._pCurHouse);
  }
                    /* end of inlined section */
                    /* inlined from ../MSrc/newarray2d.h */
  _9_c2DArray_m_pfnAlloc = _WallFloorUndoableAlloc__FUi;
  _9_c2DArray_m_pfnFree = _WallFloorUndoableFree__FPv;
                    /* end of inlined section */
  if (_17ESimScratchPadMan_mWallLayer != (CWallArray *)0x0) {
                    /* inlined from ../MSrc/WorldImpl.h */
    ___9_c2DArray((_c2DArray *)_17ESimScratchPadMan_mWallLayer,3);
  }
                    /* end of inlined section */
  _17ESimScratchPadMan_mWallLayer = (CWallArray *)0x0;
  if (_17ESimScratchPadMan_mFloorLayer != (CFloorArray *)0x0) {
                    /* inlined from ../MSrc/WorldImpl.h */
    ___9_c2DArray((_c2DArray *)_17ESimScratchPadMan_mFloorLayer,3);
                    /* inlined from ../MSrc/newarray2d.h */
  }
  _9_c2DArray_m_pfnAlloc = _Default2dArrayAlloc__FUi;
  _9_c2DArray_m_pfnFree = _Default2dArrayFree__FPv;
                    /* end of inlined section */
  _17ESimScratchPadMan_mFloorLayer = (CFloorArray *)0x0;
                    /* inlined from /eor/src2/common/e_standard_heap.h */
  _memmanFree__FPv(_17ESimScratchPadMan_m_pHeap);
                    /* end of inlined section */
  _17ESimScratchPadMan_m_pHeap = (EHeap *)0x0;
  if (_17ESimScratchPadMan_m_pHead != (void *)0x0) {
    FreeScratchMemory__5GlobsPCv(&_17ESimScratchPadMan_m_pHead);
  }
  _17ESimScratchPadMan_m_pHead = (void *)0x0;
  return;
}

void ESimScratchPadMan::SaveWallLayer(CWallArray &in) {
                    /* inlined from ../MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/newarray2d.h */
  _9_c2DArray_m_pfnAlloc = _WallFloorUndoableAlloc__FUi;
  _9_c2DArray_m_pfnFree = _WallFloorUndoableFree__FPv;
                    /* end of inlined section */
  CopyFrom__9_c2DArrayP9_c2DArray((_c2DArray *)_17ESimScratchPadMan_mWallLayer,(_c2DArray *)in);
                    /* inlined from ../MSrc/newarray2d.h */
  _9_c2DArray_m_pfnAlloc = _Default2dArrayAlloc__FUi;
  _9_c2DArray_m_pfnFree = _Default2dArrayFree__FPv;
  return;
}

void ESimScratchPadMan::RestoreWallLayer(CWallArray &out) {
                    /* inlined from ../MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/newarray2d.h */
  _9_c2DArray_m_pfnAlloc = _Default2dArrayAlloc__FUi;
  _9_c2DArray_m_pfnFree = _Default2dArrayFree__FPv;
                    /* end of inlined section */
  CopyFrom__9_c2DArrayP9_c2DArray((_c2DArray *)out,(_c2DArray *)_17ESimScratchPadMan_mWallLayer);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pFixedWorld->__vtable[1].SetVertexConfig)
            ((int)&_5Globs_pFixedWorld->__vtable +
             (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].GetVertexConfig,0);
  return;
}

void ESimScratchPadMan::SaveFloorLayer(CFloorArray &in) {
                    /* inlined from ../MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/newarray2d.h */
  _9_c2DArray_m_pfnAlloc = _WallFloorUndoableAlloc__FUi;
  _9_c2DArray_m_pfnFree = _WallFloorUndoableFree__FPv;
                    /* end of inlined section */
  CopyFrom__9_c2DArrayP9_c2DArray((_c2DArray *)_17ESimScratchPadMan_mFloorLayer,(_c2DArray *)in);
                    /* inlined from ../MSrc/newarray2d.h */
  _9_c2DArray_m_pfnAlloc = _Default2dArrayAlloc__FUi;
  _9_c2DArray_m_pfnFree = _Default2dArrayFree__FPv;
  return;
}

void ESimScratchPadMan::RestoreFloorLayer(CFloorArray &out) {
                    /* inlined from ../MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/newarray2d.h */
  _9_c2DArray_m_pfnAlloc = _Default2dArrayAlloc__FUi;
  _9_c2DArray_m_pfnFree = _Default2dArrayFree__FPv;
                    /* end of inlined section */
  CopyFrom__9_c2DArrayP9_c2DArray((_c2DArray *)out,(_c2DArray *)_17ESimScratchPadMan_mFloorLayer);
  return;
}

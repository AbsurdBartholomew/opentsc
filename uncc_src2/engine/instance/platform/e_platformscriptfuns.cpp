// STATUS: NOT STARTED

#include "e_platformscriptfuns.h"

bool IsPlatform(EInstance *pInstance) {
  bool bVar1;
  
  bVar1 = IsDerivedFrom__9EStorableP9ETypeInfo(&pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
  return bVar1;
}

void sfnMoveTo(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  EStorable *pEVar1;
  EVec3 *pEVar2;
  float *pfVar3;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  pEVar2 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pfVar3 = GetParam__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  (**(code **)(pEVar1->__vtable + 7))
            (*pfVar3,(int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[6].Write,pEVar2,
             pEVar1);
  return;
}

void sfnMoveToRelative(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  EStorable *pEVar1;
  EVec3 *pEVar2;
  float *pfVar3;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  pEVar2 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pfVar3 = GetParam__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  (*(code *)pEVar1->__vtable[7].GetTypeInfo)
            (*pfVar3,(int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[7].SafeDelete,pEVar2,
             pEVar1);
  return;
}

void sfnRotateTo(EScriptContext *pContext) {
	EVec3 vRad;
	EScriptContext *this;
	EScriptContext *this;
	float deg;
	float deg;
	float deg;
	
  EStorable *pEVar1;
  EVec3 *pEVar2;
  float *pfVar3;
  EVec3 vRad;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  pEVar2 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pfVar3 = GetParam__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/e_standard_macros.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/e_standard_macros.h */
  vRad.field0_0x0.d[2] = (pEVar2->field0_0x0).d[2] * 0.01745329;
  vRad.field0_0x0.d[0] = (pEVar2->field0_0x0).d[0] * 0.01745329;
  vRad.field0_0x0.d[1] = (pEVar2->field0_0x0).d[1] * 0.01745329;
                    /* end of inlined section */
  (*(code *)pEVar1->__vtable[7].GetTypeKey)
            (*pfVar3,(int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[7].GetTypeName,&vRad,
             pEVar1);
  return;
}

void sfnRotateToRelative(EScriptContext *pContext) {
	EVec3 vRad;
	EScriptContext *this;
	EScriptContext *this;
	float deg;
	float deg;
	float deg;
	
  EStorable *pEVar1;
  EVec3 *pEVar2;
  float *pfVar3;
  EVec3 vRad;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  pEVar2 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pfVar3 = GetParam__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/e_standard_macros.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/e_standard_macros.h */
  vRad.field0_0x0.d[2] = (pEVar2->field0_0x0).d[2] * 0.01745329;
  vRad.field0_0x0.d[0] = (pEVar2->field0_0x0).d[0] * 0.01745329;
  vRad.field0_0x0.d[1] = (pEVar2->field0_0x0).d[1] * 0.01745329;
                    /* end of inlined section */
  (*(code *)pEVar1->__vtable[7].EStorable)
            (*pfVar3,(int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[7].GetTypeVersion,
             &vRad,pEVar1);
  return;
}

void sfnScaleTo(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	float v;
	
  EStorable *pEVar1;
  EVec3 *pEVar2;
  float *pfVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  pEVar2 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pfVar3 = GetParam__8ESDFloatP14EScriptContext(pContext);
  local_50 = *pfVar3;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  local_4c = local_50;
  local_48 = local_50;
  (*(code *)pEVar1->__vtable[8].SafeDelete)
            ((int)&pEVar1->__vtable + (int)*(short *)(pEVar1->__vtable + 8),pEVar2,&local_50,pEVar1)
  ;
  return;
}

void sfnScaleToRelative(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	float v;
	
  EStorable *pEVar1;
  EVec3 *pEVar2;
  float *pfVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  pEVar2 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pfVar3 = GetParam__8ESDFloatP14EScriptContext(pContext);
  local_50 = *pfVar3;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  local_4c = local_50;
  local_48 = local_50;
  (*(code *)pEVar1->__vtable[8].GetTypeName)
            ((int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[8].GetTypeInfo,pEVar2,
             &local_50,pEVar1);
  return;
}

void sfnStartAnimation(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  EStorable *pEVar1;
  uint *puVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  puVar2 = GetParam__11ESDResourceP14EScriptContext(pContext);
  pfVar3 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar4 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar5 = GetParam__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  (*(code *)pEVar1->__vtable[9].GetTypeInfo)
            (*pfVar3,*pfVar4,*pfVar5,
             (int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[9].SafeDelete,*puVar2,pEVar1)
  ;
  return;
}

void sfnStopAnimation(EScriptContext *pContext) {
	EScriptContext *this;
	
  EStorable *pEVar1;
  uint *puVar2;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  puVar2 = GetParam__11ESDResourceP14EScriptContext(pContext);
                    /* end of inlined section */
  (*(code *)pEVar1->__vtable[9].GetTypeKey)
            ((int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[9].GetTypeName,*puVar2,pEVar1
            );
  return;
}

void sfnChangeAnimationSpeed(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  EStorable *pEVar1;
  uint *puVar2;
  float *pfVar3;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  puVar2 = GetParam__11ESDResourceP14EScriptContext(pContext);
  pfVar3 = GetParam__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  (*(code *)pEVar1->__vtable[9].EStorable)
            (*pfVar3,(int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[9].GetTypeVersion,
             *puVar2,pEVar1);
  return;
}

void sfnChangeAnimationIntensity(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  EStorable *pEVar1;
  uint *puVar2;
  float *pfVar3;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  puVar2 = GetParam__11ESDResourceP14EScriptContext(pContext);
  pfVar3 = GetParam__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  (*(code *)pEVar1->__vtable[9].Write)
            (*pfVar3,(int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[9].Read,*puVar2,
             pEVar1);
  return;
}

void sfnRunScript(EScriptContext *pContext) {
	EScriptContext *this;
	
  EStorable *pEVar1;
  uint *puVar2;
  EResource *this;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  puVar2 = GetParam__11ESDResourceP14EScriptContext(pContext);
  this = AddRef__16EResourceManagerUiP5EFilei(&_scriptman.field0_0x0,*puVar2,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/script/e_scriptman.h */
                    /* end of inlined section */
  (*(code *)pEVar1->__vtable[10].GetTypeVersion)
            ((int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[10].GetTypeKey,this,pEVar1);
  DelRef__9EResource(this);
  return;
}

void sfnDestroy(EScriptContext *pContext) {
  EStorable *pEVar1;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
  (*(code *)pEVar1->__vtable[10].Read)
            ((int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[10].EStorable,pEVar1);
  return;
}

void sfnSuspend(EScriptContext *pContext) {
  EStorable *pEVar1;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
  (**(code **)(pEVar1->__vtable + 0xb))
            ((int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[10].Write,0,pEVar1);
  return;
}

void sfnUnsuspend(EScriptContext *pContext) {
  EStorable *pEVar1;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
  (**(code **)(pEVar1->__vtable + 0xb))
            ((int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[10].Write,1,pEVar1);
  return;
}

void sfnVisibility(EScriptContext *pContext) {
	EScriptContext *this;
	
  EStorable *pEVar1;
  int *piVar2;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  (*(code *)pEVar1->__vtable[0xb].GetTypeInfo)
            ((int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[0xb].SafeDelete,*piVar2 != 0,
             pEVar1);
  return;
}

void sfnCollision(EScriptContext *pContext) {
	EScriptContext *this;
	
  EStorable *pEVar1;
  int *piVar2;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  (*(code *)pEVar1->__vtable[0xb].GetTypeKey)
            ((int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[0xb].GetTypeName,*piVar2 != 0
             ,pEVar1);
  return;
}

void sfnChangeModel(EScriptContext *pContext) {
	EScriptContext *this;
	
  EStorable *pEVar1;
  uint *puVar2;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  puVar2 = GetParam__11ESDResourceP14EScriptContext(pContext);
                    /* end of inlined section */
  (*(code *)pEVar1->__vtable[0xb].EStorable)
            ((int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[0xb].GetTypeVersion,*puVar2,
             pEVar1);
  return;
}

void sfnCheckId(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  EStorable *pEVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  puVar2 = GetParam__11ESDResourceP14EScriptContext(pContext);
  piVar3 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
                    /* end of inlined section */
  iVar4 = (*(code *)pEVar1->__vtable[0xb].Write)
                    ((int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[0xb].Read,*puVar2);
  *piVar3 = iVar4;
  return;
}

void sfnAddInstance(EScriptContext *pContext) {
	EScriptContext *this;
	
  EStorable *pEVar1;
  EInstance **ppEVar2;
  EStorable *pEVar3;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  ppEVar2 = GetParam__10ESDPointerP14EScriptContext(pContext);
                    /* end of inlined section */
  pEVar3 = DynamicCast__9EStorableP9ETypeInfo(&(*ppEVar2)->field0_0x0,&_14EIGameInstance_m_typeInfo)
  ;
  (*(code *)pEVar1->__vtable[0xc].SafeDelete)
            ((int)&pEVar1->__vtable + (int)*(short *)(pEVar1->__vtable + 0xc),pEVar3);
  return;
}

void sfnGetPlatformPos(EScriptContext *pContext) {
	EScriptContext *this;
	
  EStorable *pEVar1;
  EVec3 *pEVar2;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  pEVar2 = GetReturn__9ESDVectorP14EScriptContext(pContext);
                    /* end of inlined section */
  (*(code *)pEVar1->__vtable[5].Write)
            ((int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[5].Read,pEVar2);
  return;
}

void sfnGetPlatformRot(EScriptContext *pContext) {
	EScriptContext *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  EStorable *pEVar4;
  EVec3 *pEVar5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  ulong uStack_40;
  float local_38;
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
  pEVar4 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  pEVar5 = GetReturn__9ESDVectorP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
                    /* end of inlined section */
  (*(code *)pEVar4->__vtable[0xc].GetTypeName)
            (&uStack_40,(int)&pEVar4->__vtable + (int)*(short *)&pEVar4->__vtable[0xc].GetTypeInfo);
  puVar1 = (undefined *)((int)&pEVar5->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uStack_40 >> (7 - uVar2) * 8;
  uVar2 = (uint)pEVar5 & 7;
  *(ulong *)((int)pEVar5 - uVar2) =
       uStack_40 << uVar2 * 8 |
       *(ulong *)((int)pEVar5 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (pEVar5->field0_0x0).d[2] = local_38;
  return;
}

void sfnGetPlatformScale(EScriptContext *pContext) {
	EScriptContext *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  EStorable *pEVar4;
  EVec3 *pEVar5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  ulong uStack_40;
  float local_38;
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
  pEVar4 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  pEVar5 = GetReturn__9ESDVectorP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
                    /* end of inlined section */
  (*(code *)pEVar4->__vtable[0xc].GetTypeVersion)
            (&uStack_40,(int)&pEVar4->__vtable + (int)*(short *)&pEVar4->__vtable[0xc].GetTypeKey);
  puVar1 = (undefined *)((int)&pEVar5->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uStack_40 >> (7 - uVar2) * 8;
  uVar2 = (uint)pEVar5 & 7;
  *(ulong *)((int)pEVar5 - uVar2) =
       uStack_40 << uVar2 * 8 |
       *(ulong *)((int)pEVar5 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (pEVar5->field0_0x0).d[2] = local_38;
  return;
}

void sfnIsPlatformSuspended(EScriptContext *pContext) {
	EScriptContext *this;
	
  EStorable *pEVar1;
  uint *puVar2;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  puVar2 = (uint *)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/instance/platform/e_iplatform.h */
                    /* end of inlined section */
  *puVar2 = (uint)pEVar1[0x21].__vtable ^ 1;
  return;
}

void sfnIsPlatformVisible(EScriptContext *pContext) {
	EScriptContext *this;
	
  EStorable *pEVar1;
  EStorable__vtable **ppEVar2;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  ppEVar2 = (EStorable__vtable **)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *ppEVar2 = pEVar1[0x23].__vtable;
  return;
}

void sfnIsPlatformCollidable(EScriptContext *pContext) {
	EScriptContext *this;
	
  EStorable *pEVar1;
  EStorable__vtable **ppEVar2;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  ppEVar2 = (EStorable__vtable **)GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *ppEVar2 = pEVar1[0x22].__vtable;
  return;
}

void sfnIsPlatformMoving(EScriptContext *pContext) {
	EScriptContext *this;
	
  EStorable *pEVar1;
  int *piVar2;
  int iVar3;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  piVar2 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
                    /* end of inlined section */
  iVar3 = (*(code *)pEVar1->__vtable[0xc].Read)
                    ((int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[0xc].EStorable);
  *piVar2 = iVar3;
  return;
}

void sfnIsPlatformRotating(EScriptContext *pContext) {
	EScriptContext *this;
	
  EStorable *pEVar1;
  int *piVar2;
  int iVar3;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  piVar2 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
                    /* end of inlined section */
  iVar3 = (**(code **)(pEVar1->__vtable + 0xd))
                    ((int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[0xc].Write);
  *piVar2 = iVar3;
  return;
}

void sfnIsPlatformScaling(EScriptContext *pContext) {
	EScriptContext *this;
	
  EStorable *pEVar1;
  int *piVar2;
  int iVar3;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  piVar2 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
                    /* end of inlined section */
  iVar3 = (*(code *)pEVar1->__vtable[0xd].GetTypeInfo)
                    ((int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[0xd].SafeDelete);
  *piVar2 = iVar3;
  return;
}

void sfnIsPlatformAnimPlaying(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  EStorable *pEVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  puVar2 = GetParam__11ESDResourceP14EScriptContext(pContext);
  piVar3 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
                    /* end of inlined section */
  iVar4 = (*(code *)pEVar1->__vtable[10].SafeDelete)
                    ((int)&pEVar1->__vtable + (int)*(short *)(pEVar1->__vtable + 10),*puVar2,0);
  *piVar3 = iVar4;
  return;
}

void sfnGetLastAnim(EScriptContext *pContext) {
	EScriptContext *this;
	
  EStorable *pEVar1;
  uint *puVar2;
  uint uVar3;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  puVar2 = GetReturn__11ESDResourceP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
                    /* end of inlined section */
  uVar3 = (*(code *)pEVar1->__vtable[10].GetTypeName)
                    ((int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[10].GetTypeInfo,0);
  *puVar2 = uVar3;
  return;
}

void sfnResetPlatform(EScriptContext *pContext) {
  EStorable *pEVar1;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
  (*(code *)pEVar1->__vtable[6].Read)
            ((int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[6].EStorable);
  return;
}

void sfnSetPlatformTime(EScriptContext *pContext) {
	EScriptContext *this;
	
  float *pfVar1;
  EStorable *pEVar2;
  
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
                    /* end of inlined section */
  pEVar2 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
  (*(code *)pEVar2->__vtable[8].Read)
            (*pfVar1,(int)&pEVar2->__vtable + (int)*(short *)&pEVar2->__vtable[8].EStorable,0);
  return;
}

void sfnGetPlatformTime(EScriptContext *pContext) {
	EScriptContext *this;
	
  float *pfVar1;
  EStorable *pEVar2;
  float fVar3;
  
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetReturn__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
                    /* end of inlined section */
  pEVar2 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
  fVar3 = (float)(**(code **)(pEVar2->__vtable + 9))
                           ((int)&pEVar2->__vtable + (int)*(short *)&pEVar2->__vtable[8].Write,0);
  *pfVar1 = fVar3;
  return;
}

void sfnSetSplineParams(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	
  short sVar1;
  EStorable__vtable *pEVar2;
  EIPlatform *this;
  EInstance **ppEVar3;
  float *pfVar4;
  float *pfVar5;
  int *piVar6;
  EStorable *pEVar7;
  float fVar8;
  
  this = (EIPlatform *)
         DynamicCast__9EStorableP9ETypeInfo
                   (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  ppEVar3 = GetParam__10ESDPointerP14EScriptContext(pContext);
  pfVar4 = GetParam__8ESDFloatP14EScriptContext(pContext);
  pfVar5 = GetParam__8ESDFloatP14EScriptContext(pContext);
  piVar6 = GetParam__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
                    /* end of inlined section */
  pEVar7 = DynamicCast__9EStorableP9ETypeInfo(&(*ppEVar3)->field0_0x0,&_14EIBezierSpline_m_typeInfo)
  ;
  pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar2[0xd].GetTypeKey)
            (*pfVar4,(int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
                     (int)*(short *)&pEVar2[0xd].GetTypeName,pEVar7,2,0 < *piVar6);
  pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  sVar1 = *(short *)&pEVar2[0xe].GetTypeKey;
  fVar8 = GetMaxSplineBlend__10EIPlatform(this);
  (*(code *)pEVar2[0xe].GetTypeVersion)
            (*pfVar5 * fVar8,(int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) + (int)sVar1);
  return;
}

void sfnSetSpline(EScriptContext *pContext) {
	EScriptContext *this;
	
  EStorable *pEVar1;
  EInstance **ppEVar2;
  EStorable *pEVar3;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  ppEVar2 = GetParam__10ESDPointerP14EScriptContext(pContext);
                    /* end of inlined section */
  pEVar3 = DynamicCast__9EStorableP9ETypeInfo(&(*ppEVar2)->field0_0x0,&_14EIBezierSpline_m_typeInfo)
  ;
  (*(code *)pEVar1->__vtable[0xd].EStorable)
            ((int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[0xd].GetTypeVersion,pEVar3);
  return;
}

void sfnSetSplineSpeed(EScriptContext *pContext) {
	EScriptContext *this;
	
  EStorable *pEVar1;
  float *pfVar2;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  pfVar2 = GetParam__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  (*(code *)pEVar1->__vtable[0xe].SafeDelete)
            (*pfVar2,(int)&pEVar1->__vtable + (int)*(short *)(pEVar1->__vtable + 0xe));
  return;
}

void sfnSetSplineBlend(EScriptContext *pContext) {
	EIPlatform *pPlatform;
	float new_blend;
	EScriptContext *this;
	
  short sVar1;
  EStorable__vtable *pEVar2;
  EIPlatform *this;
  float *pfVar3;
  float fVar4;
  float fVar5;
  
  this = (EIPlatform *)
         DynamicCast__9EStorableP9ETypeInfo
                   (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  pfVar3 = GetParam__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  fVar4 = *pfVar3;
  fVar5 = 0.0;
  if (0.0 <= fVar4) {
    fVar5 = (float)((int)fVar4 * (uint)(fVar4 < 1.0) | (uint)(fVar4 >= 1.0) * 0x3f800000);
  }
  pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  sVar1 = *(short *)&pEVar2[0xe].GetTypeKey;
  fVar4 = GetMaxSplineBlend__10EIPlatform(this);
  (*(code *)pEVar2[0xe].GetTypeVersion)
            (fVar5 * fVar4,(int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) + (int)sVar1);
  return;
}

void sfnSetSplineDirection(EScriptContext *pContext) {
	EScriptContext *this;
	
  EStorable *pEVar1;
  int *piVar2;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  piVar2 = GetParam__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  (*(code *)pEVar1->__vtable[0xe].GetTypeName)
            ((int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[0xe].GetTypeInfo,0 < *piVar2)
  ;
  return;
}

void sfnSetSplineLoop(EScriptContext *pContext) {
  EStorable *pEVar1;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
  (*(code *)pEVar1->__vtable[0xd].Write)
            ((int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[0xd].Read,2);
  return;
}

void sfnSetSplineNormal(EScriptContext *pContext) {
  EStorable *pEVar1;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
  (*(code *)pEVar1->__vtable[0xd].Write)
            ((int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[0xd].Read,1);
  return;
}

void sfnSetSplineTeleport(EScriptContext *pContext) {
  EStorable *pEVar1;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
  (*(code *)pEVar1->__vtable[0xd].Write)
            ((int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[0xd].Read,3);
  return;
}

void sfnPlatGetSpline(EScriptContext *pContext) {
	EScriptContext *this;
	
  EStorable *pEVar1;
  EInstance **ppEVar2;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  ppEVar2 = GetReturn__10ESDPointerP14EScriptContext(pContext);
                    /* end of inlined section */
  *ppEVar2 = (EInstance *)pEVar1[0x41].__vtable;
  return;
}

void sfnGetSplineDirection(EScriptContext *pContext) {
	EScriptContext *this;
	
  EStorable *pEVar1;
  int *piVar2;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  piVar2 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  if (pEVar1[0x4f].__vtable == (EStorable__vtable *)0x0) {
    *piVar2 = 0;
  }
  else {
    *piVar2 = 1;
  }
  return;
}

void sfnGetSplineSpeed(EScriptContext *pContext) {
	EScriptContext *this;
	
  EStorable *pEVar1;
  EStorable__vtable **ppEVar2;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  ppEVar2 = (EStorable__vtable **)GetReturn__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  *ppEVar2 = pEVar1[0x4e].__vtable;
  return;
}

void sfnGetSplineBlend(EScriptContext *pContext) {
	EScriptContext *this;
	
  EIPlatform *this;
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  this = (EIPlatform *)
         DynamicCast__9EStorableP9ETypeInfo
                   (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  pfVar1 = GetReturn__8ESDFloatP14EScriptContext(pContext);
  fVar3 = this->m_splineBlend;
                    /* end of inlined section */
  fVar2 = GetMaxSplineBlend__10EIPlatform(this);
  fVar3 = fVar3 / fVar2;
  if (0.0 <= fVar3) {
    *pfVar1 = (float)((int)fVar3 * (uint)(fVar3 < 1.0) | (uint)(fVar3 >= 1.0) * 0x3f800000);
  }
  else {
    *pfVar1 = 0.0;
  }
  return;
}

void sfnGetSplineTime(EScriptContext *pContext) {
	EScriptContext *this;
	
  EStorable *pEVar1;
  EStorable__vtable **ppEVar2;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  ppEVar2 = (EStorable__vtable **)GetReturn__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  *ppEVar2 = pEVar1[0x50].__vtable;
  return;
}

void sfnIsSplineEnd(EScriptContext *pContext) {
	EScriptContext *this;
	
  EStorable *pEVar1;
  int *piVar2;
  long lVar3;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  piVar2 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *piVar2 = 0;
  lVar3 = (*(code *)pEVar1->__vtable[0xe].Read)
                    ((int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[0xe].EStorable);
  if (lVar3 != 0) {
    *piVar2 = 1;
  }
  return;
}

void sfnIsSplineEndTravel(EScriptContext *pContext) {
	EScriptContext *this;
	
  EStorable *pEVar1;
  int *piVar2;
  long lVar3;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_10EIPlatform_m_typeInfo);
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  piVar2 = GetReturn__6ESDIntP14EScriptContext(pContext);
                    /* end of inlined section */
  *piVar2 = 0;
  lVar3 = (**(code **)(pEVar1->__vtable + 0xf))
                    ((int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[0xe].Write);
  if (lVar3 != 0) {
    *piVar2 = 1;
  }
  return;
}

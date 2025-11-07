// STATUS: NOT STARTED

#include "e_particlefuns.h"

void sfnSpawnParticle(EScriptContext *pContext) {
	EScriptContext *this;
	EScriptContext *this;
	
  uint *puVar1;
  EStorable *pEVar2;
  
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  puVar1 = GetParam__11ESDResourceP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
                    /* end of inlined section */
  pEVar2 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_9EParticle_m_typeInfo);
  Emit__12EParticleManiRC5EVec3T2P7ERLevel
            (&_pclman,*puVar1,(EVec3 *)(pEVar2 + 0x23),(EVec3 *)(pEVar2 + 0x26),(ERLevel *)0x0);
  return;
}

void sfnKillParticle(EScriptContext *pContext) {
  EStorable *pEVar1;
  
  pEVar1 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_9EParticle_m_typeInfo);
  (*(code *)pEVar1->__vtable[5].GetTypeKey)
            ((int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[5].GetTypeName);
  return;
}

void sfnSpawnEmitter(EScriptContext *pContext) {
	EVec3 vVel;
	EVec3 vPos;
	EIParticleEmit *pEmitter;
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	EIParticleEmit *this;
	EIParticleEmit *this;
	EIParticleEmit *this;
	float lifeTime;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  uint *puVar5;
  float *pfVar6;
  EStorable *pEVar7;
  EIParticleEmit *pEVar8;
  ulong in_v1;
  EVec3 vVel;
  EVec3 vPos;
  
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  puVar5 = GetParam__11ESDResourceP14EScriptContext(pContext);
  pfVar6 = GetParam__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
                    /* end of inlined section */
  pEVar7 = DynamicCast__9EStorableP9ETypeInfo
                     (&pContext->m_pInstance->field0_0x0,&_9EParticle_m_typeInfo);
  if (pEVar7 == (EStorable *)0x0) {
                    /* end of inlined section */
    pEVar7 = DynamicCast__9EStorableP9ETypeInfo
                       (&pContext->m_pInstance->field0_0x0,&_14EIParticleEmit_m_typeInfo);
    puVar1 = (undefined *)((int)&pEVar7[0x31].__vtable + 3);
                    /* inlined from c:/eor/src2/engine/particle/e_particleemit.h */
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)(pEVar7 + 0x30) & 7;
    vVel.field0_0x0._0_8_ =
         (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
         in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
         *(ulong *)((int)(pEVar7 + 0x30) - uVar3) >> uVar3 * 8;
    vVel.field0_0x0.d[2] = (float)pEVar7[0x32].__vtable;
    puVar1 = (undefined *)((int)&vVel.field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar2);
    *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | (ulong)vVel.field0_0x0._0_8_ >> (7 - uVar2) * 8;
    puVar1 = (undefined *)((int)&pEVar7[0x2b].__vtable + 3);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)(pEVar7 + 0x2a) & 7;
    vPos.field0_0x0._0_8_ =
         (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
         vVel.field0_0x0._0_8_ & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
         *(ulong *)((int)(pEVar7 + 0x2a) - uVar3) >> uVar3 * 8;
    vPos.field0_0x0.d[2] = (float)pEVar7[0x2c].__vtable;
    puVar1 = (undefined *)((int)&vPos.field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar2);
    *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | (ulong)vPos.field0_0x0._0_8_ >> (7 - uVar2) * 8;
                    /* inlined from c:/eor/src2/engine/particle/e_particleemit.h */
  }
  else {
    puVar1 = (undefined *)((int)&pEVar7[0x27].__vtable + 3);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)(pEVar7 + 0x26) & 7;
    vVel.field0_0x0._0_8_ =
         (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
         in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
         *(ulong *)((int)(pEVar7 + 0x26) - uVar3) >> uVar3 * 8;
    vVel.field0_0x0.d[2] = (float)pEVar7[0x28].__vtable;
    puVar1 = (undefined *)((int)&vVel.field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar2);
    *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | (ulong)vVel.field0_0x0._0_8_ >> (7 - uVar2) * 8;
    puVar1 = (undefined *)((int)&pEVar7[0x24].__vtable + 3);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)(pEVar7 + 0x23) & 7;
    vPos.field0_0x0._0_8_ =
         (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
         vVel.field0_0x0._0_8_ & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
         *(ulong *)((int)(pEVar7 + 0x23) - uVar3) >> uVar3 * 8;
    vPos.field0_0x0.d[2] = (float)pEVar7[0x25].__vtable;
    puVar1 = (undefined *)((int)&vPos.field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar2);
    *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | (ulong)vPos.field0_0x0._0_8_ >> (7 - uVar2) * 8;
  }
  pEVar8 = (EIParticleEmit *)_allocBucketAlloc__FUiUi(0x124,0x1b);
                    /* end of inlined section */
  pEVar8 = __14EIParticleEmit(pEVar8);
  puVar1 = (undefined *)((int)&(pEVar8->m_vPos).field0_0x0 + 7);
                    /* inlined from c:/eor/src2/engine/particle/e_particleemit.h */
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | (ulong)vPos.field0_0x0._0_8_ >> (7 - uVar2) * 8;
  uVar2 = (uint)&pEVar8->m_vPos & 7;
  puVar4 = (ulong *)((int)&pEVar8->m_vPos - uVar2);
  *puVar4 = vPos.field0_0x0._0_8_ << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (pEVar8->m_vPos).field0_0x0.d[2] = vPos.field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(pEVar8->m_vVel).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | (ulong)vVel.field0_0x0._0_8_ >> (7 - uVar2) * 8;
  uVar2 = (uint)&pEVar8->m_vVel & 7;
  puVar4 = (ulong *)((int)&pEVar8->m_vVel - uVar2);
  *puVar4 = vVel.field0_0x0._0_8_ << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (pEVar8->m_vVel).field0_0x0.d[2] = vVel.field0_0x0.d[2];
                    /* end of inlined section */
  Type__14EIParticleEmiti(pEVar8,*puVar5);
                    /* inlined from c:/eor/src2/engine/particle/e_particleemit.h */
  pEVar8->m_lifeTime = *pfVar6;
  return;
}

void sfnSpawnEmitterPos(EScriptContext *pContext) {
	EIParticleEmit *pEmitter;
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	EIParticleEmit *this;
	EIParticleEmit *this;
	EIParticleEmit *this;
	float lifeTime;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  EStorable__vtable *pEVar5;
  ulong *puVar6;
  uint *puVar7;
  EVec3 *pEVar8;
  float *pfVar9;
  EStorable *pEVar10;
  EIParticleEmit *pEVar11;
  ulong uVar12;
  ulong in_a2;
  
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  puVar7 = GetParam__11ESDResourceP14EScriptContext(pContext);
  pEVar8 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pfVar9 = GetParam__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
                    /* end of inlined section */
  pEVar10 = DynamicCast__9EStorableP9ETypeInfo
                      (&pContext->m_pInstance->field0_0x0,&_9EParticle_m_typeInfo);
                    /* inlined from c:/eor/src2/engine/particle/e_particleemit.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/particle/e_particleemit.h */
  pEVar11 = (EIParticleEmit *)_allocBucketAlloc__FUiUi(0x124,0x1b);
                    /* end of inlined section */
  pEVar11 = __14EIParticleEmit(pEVar11);
  puVar1 = (undefined *)((int)&pEVar8->field0_0x0 + 7);
                    /* inlined from c:/eor/src2/engine/particle/e_particleemit.h */
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)pEVar8 & 7;
  uVar12 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
           (long)(int)pEVar11 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)pEVar8 - uVar3) >> uVar3 * 8;
  fVar4 = (pEVar8->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(pEVar11->m_vPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar2);
  *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | uVar12 >> (7 - uVar2) * 8;
  uVar2 = (uint)&pEVar11->m_vPos & 7;
  puVar6 = (ulong *)((int)&pEVar11->m_vPos - uVar2);
  *puVar6 = uVar12 << uVar2 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (pEVar11->m_vPos).field0_0x0.d[2] = fVar4;
  puVar1 = (undefined *)((int)&pEVar10[0x27].__vtable + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)(pEVar10 + 0x26) & 7;
  uVar12 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
           in_a2 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)(pEVar10 + 0x26) - uVar3) >> uVar3 * 8;
  pEVar5 = pEVar10[0x28].__vtable;
  puVar1 = (undefined *)((int)&(pEVar11->m_vVel).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar2);
  *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | uVar12 >> (7 - uVar2) * 8;
  uVar2 = (uint)&pEVar11->m_vVel & 7;
  puVar6 = (ulong *)((int)&pEVar11->m_vVel - uVar2);
  *puVar6 = uVar12 << uVar2 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (pEVar11->m_vVel).field0_0x0.d[2] = (float)pEVar5;
                    /* end of inlined section */
  Type__14EIParticleEmiti(pEVar11,*puVar7);
                    /* inlined from c:/eor/src2/engine/particle/e_particleemit.h */
  pEVar11->m_lifeTime = *pfVar9;
  return;
}

void sfnSpawnEmitterComplete(EScriptContext *pContext) {
	float time;
	EIParticleEmit *pEmitter;
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	EScriptContext *this;
	EIParticleEmit *this;
	EIParticleEmit *this;
	EIParticleEmit *this;
	float lifeTime;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  uint *puVar6;
  EVec3 *pEVar7;
  EVec3 *pEVar8;
  float *pfVar9;
  EIParticleEmit *pEVar10;
  ulong uVar11;
  float fVar12;
  
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  puVar6 = GetParam__11ESDResourceP14EScriptContext(pContext);
  pEVar7 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pEVar8 = GetParam__9ESDVectorP14EScriptContext(pContext);
  pfVar9 = GetParam__8ESDFloatP14EScriptContext(pContext);
                    /* end of inlined section */
  fVar12 = *pfVar9;
                    /* inlined from c:/eor/src2/engine/particle/e_particleemit.h */
  pEVar10 = (EIParticleEmit *)_allocBucketAlloc__FUiUi(0x124,0x1b);
                    /* end of inlined section */
  pEVar10 = __14EIParticleEmit(pEVar10);
  uVar11 = (ulong)(int)pEVar10;
  Type__14EIParticleEmiti(pEVar10,*puVar6);
  puVar1 = (undefined *)((int)&pEVar7->field0_0x0 + 7);
                    /* inlined from c:/eor/src2/engine/particle/e_particleemit.h */
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)pEVar7 & 7;
  uVar11 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
           uVar11 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)pEVar7 - uVar3) >> uVar3 * 8;
  fVar4 = (pEVar7->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(pEVar10->m_vPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar11 >> (7 - uVar2) * 8;
  uVar2 = (uint)&pEVar10->m_vPos & 7;
  puVar5 = (ulong *)((int)&pEVar10->m_vPos - uVar2);
  *puVar5 = uVar11 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (pEVar10->m_vPos).field0_0x0.d[2] = fVar4;
  puVar1 = (undefined *)((int)&pEVar8->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)pEVar8 & 7;
  uVar11 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
           uVar11 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)pEVar8 - uVar3) >> uVar3 * 8;
  fVar4 = (pEVar8->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(pEVar10->m_vVel).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar11 >> (7 - uVar2) * 8;
  uVar2 = (uint)&pEVar10->m_vVel & 7;
  puVar5 = (ulong *)((int)&pEVar10->m_vVel - uVar2);
  *puVar5 = uVar11 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (pEVar10->m_vVel).field0_0x0.d[2] = fVar4;
  pEVar10->m_lifeTime = fVar12;
  return;
}

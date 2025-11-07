// STATUS: NOT STARTED

#include "e_scriptcontext.h"

void (*EScriptContext::m_commandTable[13])(/* parameters unknown */) = {
	/* [0] = */ &EScriptContext::Exit,
	/* [1] = */ &EScriptContext::PushRef,
	/* [2] = */ &EScriptContext::PushAlloc,
	/* [3] = */ &EScriptContext::PushRefGlobal1,
	/* [4] = */ &EScriptContext::PushRefGlobal2,
	/* [5] = */ &EScriptContext::Pop,
	/* [6] = */ &EScriptContext::Test,
	/* [7] = */ &EScriptContext::Goto,
	/* [8] = */ &EScriptContext::Function,
	/* [9] = */ &EScriptContext::Debug,
	/* [10] = */ &EScriptContext::DebugVars1,
	/* [11] = */ &EScriptContext::DebugVars2,
	/* [12] = */ &EScriptContext::BreakInstruction
};

ETypeInfo *gpTypeInfo_EScriptContext = NULL;

__vtbl_ptr_type EScriptContext virtual table[10] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EScriptContext::SafeDelete,
		/* .__delta2 = */ 11792
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EScriptContext::GetTypeInfo,
		/* .__delta2 = */ 11848
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EScriptContext::GetTypeName,
		/* .__delta2 = */ 11864
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EScriptContext::GetTypeKey,
		/* .__delta2 = */ 11880
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EScriptContext::GetTypeVersion,
		/* .__delta2 = */ 11896
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EScriptContext::~EScriptContext,
		/* .__delta2 = */ 9272
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EScriptContext::Read,
		/* .__delta2 = */ 9752
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EScriptContext::Write,
		/* .__delta2 = */ 9368
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EStorable virtual table[10] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::SafeDelete,
		/* .__delta2 = */ 10264
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::GetTypeInfo,
		/* .__delta2 = */ 10320
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::GetTypeName,
		/* .__delta2 = */ 10336
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::GetTypeKey,
		/* .__delta2 = */ 10352
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::GetTypeVersion,
		/* .__delta2 = */ 10368
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::~EStorable,
		/* .__delta2 = */ 10384
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::Read,
		/* .__delta2 = */ 10432
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::Write,
		/* .__delta2 = */ 10440
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo EScriptContext::m_typeInfo;

EStream& operator<<(EStream &s, EScriptContext *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,&pD->field0_0x0);
  return pEVar1;
}

EStream& operator>>(EStream &s, EScriptContext *&pD) {
	EStorable *pStorable;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EStorable *pStorable;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  __rs__FR7EStreamRP9EStorable(s,&pStorable);
  *pD = (EScriptContext *)pStorable;
  return s;
}

EScriptContext* EScriptContext::EScriptContext() {
	EStorable *this;
	
  undefined *puVar1;
  EVec3 *pEVar2;
  uint uVar3;
  ulong *puVar4;
  
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/script/e_scriptparams.h */
  (this->m_scriptParams).pCauseInst = (EInstance *)0x0;
  (this->m_scriptParams).pReceiverList = (TNodeList_EInstance___ *)0x0;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EStorable__vtable *)_vt_14EScriptContext;
  puVar1 = (undefined *)((int)&(this->m_scriptParams).vPos.field0_0x0 + 7);
                    /* inlined from c:/eor/src2/engine/script/e_scriptparams.h */
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0UL >> (7 - uVar3) * 8;
  pEVar2 = &(this->m_scriptParams).vPos;
  uVar3 = (uint)pEVar2 & 7;
  puVar4 = (ulong *)((int)pEVar2 - uVar3);
  *puVar4 = 0L << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  (this->m_scriptParams).vPos.field0_0x0.d[2] = 0.0;
  puVar1 = (undefined *)((int)&(this->m_scriptParams).vNormal.field0_0x0 + 7);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0UL >> (7 - uVar3) * 8;
  pEVar2 = &(this->m_scriptParams).vNormal;
  uVar3 = (uint)pEVar2 & 7;
  puVar4 = (ulong *)((int)pEVar2 - uVar3);
  *puVar4 = 0L << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  (this->m_scriptParams).vNormal.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
  this->m_szDebugString = "";
  this->m_stackPos = 0;
  this->m_commandPos = 0;
  *(undefined4 *)&this->m_suspended = 0;
  *(undefined4 *)&this->m_startSuspend = 0;
  *(undefined4 *)&this->m_testResult = 0;
  *(undefined4 *)&this->m_scriptParamsSet = 0;
  return this;
}

void EScriptContext::~EScriptContext(int __in_chrg) {
	EStorable *this;
	void *pAddress;
	void *p;
	
  (this->field0_0x0).__vtable = (EStorable__vtable *)_vt_14EScriptContext;
  DeallocateStackData__14EScriptContext(this);
                    /* inlined from /eor/src2/common/storage/e_storable.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/storage/e_storable.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EStorable__vtable *)_vt_9EStorable;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
    _allocBucketFree__FPvUiUi(this,0x454,0x30);
  }
                    /* end of inlined section */
  return;
}

void EScriptContext::Write(EStream &s) {
	EStorable *this;
	EStream &s;
	u8 v;
	int d;
	int d;
	u8 v;
	unsigned int d;
	unsigned int d;
	int i;
	
  EStream *pEVar1;
  EScriptData *pD;
  EScriptData **ppEVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  int iVar3;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  uchar v;
  int local_70;
  int local_6c;
  uint local_68;
  uint d;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  iVar3 = 0;
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
  pEVar1 = __ls__FR7EStreamP9EInstance(s,this->m_pInstance);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  v = *(int *)&this->m_suspended != 0;
  (*(code *)pEVar1->__vtable[1].Write)
            (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].Read,&v,1);
                    /* end of inlined section */
  pEVar1 = __ls__FR7EStreamP8ERScript(pEVar1,this->m_pScript);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  local_70 = this->m_commandPos;
  (*(code *)pEVar1->__vtable[1].Write)
            (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].Read,&local_70,4);
  local_6c = this->m_stackPos;
  (*(code *)pEVar1->__vtable[1].Write)
            (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].Read,&local_6c,4);
  v = *(int *)&this->m_testResult != 0;
  (*(code *)pEVar1->__vtable[1].Write)
            (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].Read,&v,1);
  local_68 = this->m_suspendParam1;
  (*(code *)pEVar1->__vtable[1].Write)
            (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].Read,&local_68,4);
  d = this->m_suspendParam2;
  (*(code *)pEVar1->__vtable[1].Write)
            (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].Read,&d,4);
                    /* end of inlined section */
  ppEVar2 = this->m_pStackData;
  if (0 < this->m_stackPos) {
    pD = *ppEVar2;
    while( true ) {
      iVar3 = iVar3 + 1;
      ppEVar2 = ppEVar2 + 1;
      __ls__FR7EStreamP11EScriptData(s,pD);
      if (this->m_stackPos <= iVar3) break;
      pD = *ppEVar2;
    }
  }
  return;
}

void EScriptContext::Read(EStream &s) {
	EStorable *this;
	EStream &s;
	u8 v;
	u8 v;
	int i;
	
  EStream *pEVar1;
  EScriptData **pD;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  int iVar2;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  uchar v;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* end of inlined section */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (_14EScriptContext_m_typeInfo.m_readVersion == 0) {
    pEVar1 = __rs__FR7EStreamRP9EInstance(s,&this->m_pInstance);
    iVar2 = 0;
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    (*(code *)pEVar1->__vtable[1].GetPos)
              (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].EStream,&v,1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
    *(uint *)&this->m_suspended = (uint)(v != '\0');
    pEVar1 = __rs__FR7EStreamRP8ERScript(pEVar1,&this->m_pScript);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    (*(code *)pEVar1->__vtable[1].GetPos)
              (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].EStream,
               &this->m_commandPos,4);
    (*(code *)pEVar1->__vtable[1].GetPos)
              (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].EStream,
               &this->m_stackPos,4);
    (*(code *)pEVar1->__vtable[1].GetPos)
              (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].EStream,&v,1);
    *(uint *)&this->m_testResult = (uint)(v != '\0');
    (*(code *)pEVar1->__vtable[1].GetPos)
              (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].EStream,
               &this->m_suspendParam1,4);
    (*(code *)pEVar1->__vtable[1].GetPos)
              (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].EStream,
               &this->m_suspendParam2,4);
                    /* end of inlined section */
    pD = this->m_pStackData;
    if (0 < this->m_stackPos) {
      do {
        __rs__FR7EStreamRP11EScriptData(s,pD);
        iVar2 = iVar2 + 1;
        pD = pD + 1;
      } while (iVar2 < this->m_stackPos);
    }
  }
  return;
}

void EScriptContext::Push(EScriptData *pData) {
	EScriptData *this;
	
                    /* inlined from /eor/src2/engine/script/data/e_scriptdata.h */
  pData->m_nRefs = pData->m_nRefs + 1;
                    /* end of inlined section */
  this->m_pStackData[this->m_stackPos] = pData;
  this->m_stackPos = this->m_stackPos + 1;
  return;
}

EScriptData* EScriptContext::Pop() {
	EScriptData *pData;
	EScriptData *this;
	
  EScriptData *this_00;
  int iVar1;
  EScriptData *pEVar2;
  
  this_00 = this->m_pStackData[this->m_stackPos + -1];
                    /* inlined from /eor/src2/engine/script/data/e_scriptdata.h */
  iVar1 = this_00->m_nRefs;
                    /* end of inlined section */
  DelRef__11EScriptData(this_00);
  pEVar2 = (EScriptData *)0x0;
  if (iVar1 != 1) {
    pEVar2 = this_00;
  }
  this->m_stackPos = this->m_stackPos + -1;
  return pEVar2;
}

EScriptData* EScriptContext::GetReturn() {
  return this->m_pStackData[this->m_stackPos + -1];
}

void EScriptContext::DeallocateStackData() {
  int iVar1;
  
  iVar1 = this->m_stackPos;
  while (iVar1 != 0) {
    Pop__14EScriptContext(this);
    iVar1 = this->m_stackPos;
  }
  return;
}

bool EScriptContext::Init(ERScript *pScript, EInstance *pInstance, EScriptParams *pParams) {
	NLIterator si;
	NLIterator i;
	NLIterator i;
	
  undefined *puVar1;
  undefined *puVar2;
  EVec3 *pEVar3;
  uint uVar4;
  uint uVar5;
  ulong *puVar6;
  ulong in_v1;
  ulong uVar7;
  ulong uVar8;
  EScriptData *pData;
  ulong uVar9;
  ulong in_t0;
  ulong uVar10;
  ENodeListNode *pEVar11;
  
  this->m_pInstance = pInstance;
  this->m_pScript = pScript;
  if (pParams != (EScriptParams *)0x0) {
    puVar1 = (undefined *)((int)&pParams->pReceiverList + 3);
    uVar4 = (uint)puVar1 & 7;
    uVar5 = (uint)pParams & 7;
    uVar7 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
            in_v1 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
            *(ulong *)((int)pParams - uVar5) >> uVar5 * 8;
    puVar1 = (undefined *)((int)&(pParams->vPos).field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    uVar5 = (uint)&pParams->vPos & 7;
    uVar8 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
            (long)(int)this & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
            *(ulong *)((int)&pParams->vPos - uVar5) >> uVar5 * 8;
    puVar1 = (undefined *)((int)&(pParams->vNormal).field0_0x0 + 3);
    uVar4 = (uint)puVar1 & 7;
    puVar2 = (undefined *)((int)&(pParams->vPos).field0_0x0 + 8);
    uVar5 = (uint)puVar2 & 7;
    uVar9 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
            (long)(int)pInstance & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8
            | *(ulong *)(puVar2 + -uVar5) >> uVar5 * 8;
    puVar1 = (undefined *)((int)&(pParams->vNormal).field0_0x0 + 0xb);
    uVar4 = (uint)puVar1 & 7;
    puVar2 = (undefined *)((int)&(pParams->vNormal).field0_0x0 + 4);
    uVar5 = (uint)puVar2 & 7;
    uVar10 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
             in_t0 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
             *(ulong *)(puVar2 + -uVar5) >> uVar5 * 8;
    puVar1 = (undefined *)((int)&(this->m_scriptParams).pReceiverList + 3);
    uVar4 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar4);
    *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar7 >> (7 - uVar4) * 8;
    uVar4 = (uint)&this->m_scriptParams & 7;
    puVar6 = (ulong *)((int)&this->m_scriptParams - uVar4);
    *puVar6 = uVar7 << uVar4 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    puVar1 = (undefined *)((int)&(this->m_scriptParams).vPos.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar4);
    *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar8 >> (7 - uVar4) * 8;
    pEVar3 = &(this->m_scriptParams).vPos;
    uVar4 = (uint)pEVar3 & 7;
    puVar6 = (ulong *)((int)pEVar3 - uVar4);
    *puVar6 = uVar8 << uVar4 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    puVar1 = (undefined *)((int)&(this->m_scriptParams).vNormal.field0_0x0 + 3);
    uVar4 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar4);
    *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar9 >> (7 - uVar4) * 8;
    puVar1 = (undefined *)((int)&(this->m_scriptParams).vPos.field0_0x0 + 8);
    uVar4 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar4);
    *puVar6 = uVar9 << uVar4 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    puVar1 = (undefined *)((int)&(this->m_scriptParams).vNormal.field0_0x0 + 0xb);
    uVar4 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar4);
    *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar10 >> (7 - uVar4) * 8;
    puVar1 = (undefined *)((int)&(this->m_scriptParams).vNormal.field0_0x0 + 4);
    uVar4 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar4);
    *puVar6 = uVar10 << uVar4 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    *(undefined4 *)&this->m_scriptParamsSet = 1;
  }
  this->m_commandPos = 0;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar11 = (pScript->m_staticDataList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar11 != (ENodeListNode *)0x0) {
                    /* end of inlined section */
    pData = (EScriptData *)pEVar11->data;
    while( true ) {
      Push__14EScriptContextP11EScriptData(this,pData);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar11 = pEVar11->pNext;
                    /* end of inlined section */
      if (pEVar11 == (ENodeListNode *)0x0) break;
      pData = (EScriptData *)pEVar11->data;
    }
  }
  return true;
}

void EScriptContext::Reinit(RBIterator suspendPos) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  Remove__13ERedBlackTreeP17RBIteratorPtrType
            (&(this->m_pScript->m_suspendedContexts).field0_0x0,suspendPos);
  return;
}

void EScriptContext::Suspend(u32 suspendParam1, u32 suspendParam2) {
                    /* end of inlined section */
  this->m_suspendParam2 = suspendParam2;
  *(undefined4 *)&this->m_startSuspend = 1;
  this->m_suspendParam1 = suspendParam1;
  return;
}

bool EScriptContext::Execute() {
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  
  iVar1 = this->m_commandPos;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  iVar2 = (this->m_pScript->m_commands).field0_0x0.m_size;
                    /* end of inlined section */
  do {
    if (iVar2 <= iVar1) {
LAB_002f2a18:
      return SUB41(*(undefined4 *)&this->m_suspended,0);
    }
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
    pvVar3 = (this->m_pScript->m_commands).field0_0x0.m_p;
                    /* end of inlined section */
    this->m_commandPos = iVar1 + 1;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
    uVar4 = *(uint *)((int)pvVar3 + iVar1 * 4) & 0xf;
    if (uVar4 == 0) goto LAB_002f2a18;
    (*(code *)_14EScriptContext_m_commandTable[uVar4])(this);
    if (*(int *)&this->m_startSuspend != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      Insert__13ERedBlackTreeUiUib
                (&(this->m_pScript->m_suspendedContexts).field0_0x0,(uint)this->m_pInstance,
                 (uint)this,false);
                    /* end of inlined section */
      *(undefined4 *)&this->m_suspended = 1;
      this->m_commandPos = iVar1;
      *(undefined4 *)&this->m_startSuspend = 0;
      goto LAB_002f2a18;
    }
    iVar1 = this->m_commandPos;
    *(undefined4 *)&this->m_suspended = 0;
  } while( true );
}

void EScriptContext::Exit(EScriptContext *pThis, EScriptCommand *pCmd) {
  return;
}

void EScriptContext::PushRef(EScriptContext *pThis, EScriptCommand *pCmd) {
	u32 offset;
	u32 dataPos;
	
  Push__14EScriptContextP11EScriptData
            (pThis,*(EScriptData **)
                    ((int)pThis + (pThis->m_stackPos - (pCmd->data >> 4)) * 4 + 0x30));
  return;
}

void EScriptContext::PushAlloc(EScriptContext *pThis, EScriptCommand *pCmd) {
  EScriptData *pData;
  
  pData = AllocateData__13EScriptEnginec(&_scriptEngine,(char)((pCmd->data << 0x14) >> 0x18));
  Push__14EScriptContextP11EScriptData(pThis,pData);
  return;
}

void EScriptContext::PushRefGlobal1(EScriptContext *pThis, EScriptCommand *pCmd) {
	u32 id;
	int index;
	
  int iVar1;
  EScriptData *pData;
  
  iVar1 = pThis->m_commandPos;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  pThis->m_commandPos = iVar1 + 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
  pData = GetGlobal__13EScriptEnginecUi
                    (&_scriptEngine,(char)((pCmd->data << 4) >> 0x18),
                     pCmd->data >> 4 & 0xffff |
                     (*(uint *)((int)(pThis->m_pScript->m_commands).field0_0x0.m_p + iVar1 * 4) >> 4
                     ) << 0x10);
  Push__14EScriptContextP11EScriptData(pThis,pData);
  return;
}

void EScriptContext::PushRefGlobal2(EScriptContext *pThis, EScriptCommand *pCmd) {
  return;
}

void EScriptContext::Pop(EScriptContext *pThis, EScriptCommand *pCmd) {
	u32 num_elements;
	u32 i;
	
  uint uVar1;
  uint uVar2;
  
  uVar2 = pCmd->data >> 4;
  uVar1 = 0;
  if (uVar2 != 0) {
    do {
      uVar1 = uVar1 + 1;
      Pop__14EScriptContext(pThis);
    } while (uVar1 < uVar2);
  }
  return;
}

void EScriptContext::Test(EScriptContext *pThis, EScriptCommand *pCmd) {
	u32 offset;
	u32 dataPos;
	EScriptData *pData;
	
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)((int)pThis + (pThis->m_stackPos - (pCmd->data >> 4)) * 4 + 0x30);
  iVar2 = *piVar1;
  uVar3 = (**(code **)(iVar2 + 100))((int)piVar1 + (int)*(short *)(iVar2 + 0x60));
  *(undefined4 *)&pThis->m_testResult = uVar3;
  return;
}

void EScriptContext::Goto(EScriptContext *pThis, EScriptCommand *pCmd) {
	u32 condition;
	u32 position;
	
  char cVar1;
  uint uVar2;
  
  cVar1 = *(char *)((int)&pCmd->data + 3);
  if (cVar1 == '\x01') {
    if (*(int *)&pThis->m_testResult == 0) {
      return;
    }
    uVar2 = pCmd->data;
  }
  else if (cVar1 == '\0') {
    if (*(int *)&pThis->m_testResult != 0) {
      return;
    }
    uVar2 = pCmd->data;
  }
  else {
    uVar2 = pCmd->data;
  }
  pThis->m_commandPos = uVar2 >> 4 & 0xfffff;
  return;
}

void EScriptContext::Function(EScriptContext *pThis, EScriptCommand *pCmd) {
	EScriptFunDef *pFunction;
	
  EScriptFunDef *pEVar1;
  
  pEVar1 = GetFunction__13EScriptEngineUi(&_scriptEngine,pCmd->data >> 4);
  if (pEVar1 == (EScriptFunDef *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
    pThis->m_commandPos = (pThis->m_pScript->m_commands).field0_0x0.m_size;
  }
  else {
    (*(code *)pEVar1->pFunction)(pThis);
  }
  return;
}

void EScriptContext::Debug(EScriptContext *pThis, EScriptCommand *pCmd) {
  return;
}

void EScriptContext::DebugVars1(EScriptContext *pThis, EScriptCommand *pCmd) {
  return;
}

void EScriptContext::DebugVars2(EScriptContext *pThis, EScriptCommand *pCmd) {
  return;
}

void EScriptContext::BreakInstruction(EScriptContext *pThis, EScriptCommand *pCmd) {
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/script/e_scriptcontext.h */
    gpTypeInfo_EScriptContext =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_14EScriptContext_m_typeInfo,New__14EScriptContext,0,"EScriptContext",
                    &_9EStorable_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

void EStorable::SafeDelete() {
  if (this != (EStorable *)0x0) {
    (*(code *)this->__vtable[1].GetTypeKey)
              ((int)&this->__vtable + (int)*(short *)&this->__vtable[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* EStorable::GetTypeInfo() {
  return &_9EStorable_m_typeInfo;
}

char* EStorable::GetTypeName() {
  return _9EStorable_m_typeInfo.m_name;
}

u32 EStorable::GetTypeKey() {
  return _9EStorable_m_typeInfo.m_key;
}

u16 EStorable::GetTypeVersion() {
  return _9EStorable_m_typeInfo.m_version;
}

void EStorable::~EStorable(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (EStorable__vtable *)_vt_9EStorable;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void EStorable::Read(EStream &s) {
  return;
}

void EStorable::Write(EStream &s) {
  return;
}

EScriptContext* EScriptContext::New() {
  EScriptContext *pEVar1;
  
  pEVar1 = (EScriptContext *)__nw__14EScriptContextUi(0x454);
  pEVar1 = __14EScriptContext(pEVar1);
  return pEVar1;
}

void EScriptContext::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EScriptContext *)0x0) {
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)this->m_pStackData + *(short *)&pEVar1[1].GetTypeName + -0x30,3);
  }
  return;
}

ETypeInfo* EScriptContext::GetTypeInfo() {
  return &_14EScriptContext_m_typeInfo;
}

char* EScriptContext::GetTypeName() {
  return _14EScriptContext_m_typeInfo.m_name;
}

u32 EScriptContext::GetTypeKey() {
  return _14EScriptContext_m_typeInfo.m_key;
}

u16 EScriptContext::GetTypeVersion() {
  return _14EScriptContext_m_typeInfo.m_version;
}

u16 EScriptContext::GetReadVersion() {
  return _14EScriptContext_m_typeInfo.m_readVersion;
}

ETypeInfo* EScriptContext::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_14EScriptContext_m_typeInfo,New__14EScriptContext,version,"EScriptContext",
                      &_9EStorable_m_typeInfo);
  return pEVar1;
}

EScriptContext* EScriptContext::CreateCopy() {
  EScriptContext *pEVar1;
  
  pEVar1 = (EScriptContext *)CreateCopy__9EStorable(&this->field0_0x0);
  return pEVar1;
}

void* EScriptContext::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _allocBucketAlloc__FUiUi(0x454,0x30);
  return pvVar1;
}

void* EScriptContext::operator new(void *p) {
  void *in_a1_lo;
  
  return in_a1_lo;
}

void EScriptContext::operator delete(void *p) {
  _allocBucketFree__FPvUiUi(p,0x454,0x30);
  return;
}

float& EScriptContext::GetFloatParam() {
  float *pfVar1;
  
  pfVar1 = GetParam__8ESDFloatP14EScriptContext(this);
  return pfVar1;
}

int& EScriptContext::GetIntParam() {
  int *piVar1;
  
  piVar1 = GetParam__6ESDIntP14EScriptContext(this);
  return piVar1;
}

u32& EScriptContext::GetResourceParam() {
  uint *puVar1;
  
  puVar1 = GetParam__11ESDResourceP14EScriptContext(this);
  return puVar1;
}

EMat4& EScriptContext::GetMatrixParam() {
  EMat4 *pEVar1;
  
  pEVar1 = GetParam__9ESDMatrixP14EScriptContext(this);
  return pEVar1;
}

EInstance*& EScriptContext::GetPointerParam() {
  EInstance **ppEVar1;
  
  ppEVar1 = GetParam__10ESDPointerP14EScriptContext(this);
  return ppEVar1;
}

EString& EScriptContext::GetStringParam() {
  EString *pEVar1;
  
  pEVar1 = GetParam__9ESDStringP14EScriptContext(this);
  return pEVar1;
}

EVec3& EScriptContext::GetVectorParam() {
  EVec3 *pEVar1;
  
  pEVar1 = GetParam__9ESDVectorP14EScriptContext(this);
  return pEVar1;
}

float& EScriptContext::GetFloatReturn() {
  float *pfVar1;
  
  pfVar1 = GetReturn__8ESDFloatP14EScriptContext(this);
  return pfVar1;
}

int& EScriptContext::GetIntReturn() {
  int *piVar1;
  
  piVar1 = GetReturn__6ESDIntP14EScriptContext(this);
  return piVar1;
}

u32& EScriptContext::GetResourceReturn() {
  uint *puVar1;
  
  puVar1 = GetReturn__11ESDResourceP14EScriptContext(this);
  return puVar1;
}

EMat4& EScriptContext::GetMatrixReturn() {
  EMat4 *pEVar1;
  
  pEVar1 = GetReturn__9ESDMatrixP14EScriptContext(this);
  return pEVar1;
}

EInstance*& EScriptContext::GetPointerReturn() {
  EInstance **ppEVar1;
  
  ppEVar1 = GetReturn__10ESDPointerP14EScriptContext(this);
  return ppEVar1;
}

EString& EScriptContext::GetStringReturn() {
  EString *pEVar1;
  
  pEVar1 = GetReturn__9ESDStringP14EScriptContext(this);
  return pEVar1;
}

EVec3& EScriptContext::GetVectorReturn() {
  EVec3 *pEVar1;
  
  pEVar1 = GetReturn__9ESDVectorP14EScriptContext(this);
  return pEVar1;
}

EScriptParams* EScriptContext::GetScriptParams() {
  return &this->m_scriptParams;
}

bool EScriptContext::WereScriptParamsSet() {
  return SUB41(*(undefined4 *)&this->m_scriptParamsSet,0);
}

EInstance* EScriptContext::GetInstance() {
  return this->m_pInstance;
}

EScriptData* EScriptContext::PopParam() {
  EScriptData *pEVar1;
  
  pEVar1 = Pop__14EScriptContext(this);
  return pEVar1;
}

u32 EScriptContext::GetSuspendParam1() {
  return this->m_suspendParam1;
}

u32 EScriptContext::GetSuspendParam2() {
  return this->m_suspendParam2;
}

bool EScriptContext::IsSuspended() {
  return SUB41(*(undefined4 *)&this->m_suspended,0);
}

void global constructors keyed to EScriptContext::m_commandTable() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

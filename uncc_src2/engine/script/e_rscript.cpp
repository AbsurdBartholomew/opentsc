// STATUS: NOT STARTED

#include "e_rscript.h"

ETypeInfo *gpTypeInfo_ERScript = NULL;

__vtbl_ptr_type ERScript virtual table[13] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERScript::SafeDelete,
		/* .__delta2 = */ 28176
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERScript::GetTypeInfo,
		/* .__delta2 = */ 28232
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERScript::GetTypeName,
		/* .__delta2 = */ 28248
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERScript::GetTypeKey,
		/* .__delta2 = */ 28264
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERScript::GetTypeVersion,
		/* .__delta2 = */ 28280
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERScript::~ERScript,
		/* .__delta2 = */ 25656
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERScript::Read,
		/* .__delta2 = */ 26344
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERScript::Write,
		/* .__delta2 = */ 26024
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Init,
		/* .__delta2 = */ 10728
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERScript::Reload,
		/* .__delta2 = */ 27232
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Reload,
		/* .__delta2 = */ 10048
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo ERScript::m_typeInfo;

EStream& operator<<(EStream &s, ERScript *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, ERScript *&pD) {
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
  *pD = (ERScript *)pStorable;
  return s;
}

ERScript* ERScript::ERScript() {
	TArray<EScriptCommand> *this;
	EArray *this;
	TArray<EString> *this;
	EArray *this;
	
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
  __9EResource(&this->field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_8ERScript;
  __13ERedBlackTree(&(this->m_suspendedContexts).field0_0x0);
  (this->m_staticDataList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_staticDataList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  __6EArray(&(this->m_commands).field0_0x0);
  (this->m_commands).field0_0x0.m_elementSize = 4;
  __6EArray(&(this->m_debugStrings).field0_0x0);
  (this->m_debugStrings).field0_0x0.m_elementSize = 4;
                    /* end of inlined section */
  this->m_nRunning = 0;
  return this;
}

void ERScript::~ERScript(int __in_chrg) {
	TRedBlackTree<EInstance *,EScriptContext *> *this;
	RBIterator i;
	ERedBlackTree *this;
	TLinkedList<ERedBlackTreeNode,12,16> *this;
	RBIterator i;
	RBIterator i;
	void *pNode;
	RBIterator i;
	RBIterator i;
	TArray<EString> *this;
	int i;
	TArray<EString> *this;
	EArray *this;
	int index;
	TArray<EString> *this;
	EArray *this;
	void *pAddress;
	int i;
	int index;
	void *p;
	
  int *piVar1;
  int iVar2;
  void *pvVar3;
  EString *this_00;
  ERedBlackTreeNode *pEVar4;
  int iVar5;
  TArray_EString_ *this_01;
  
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_8ERScript;
  ScriptDestructing__13EScriptEngineP8ERScript(&_scriptEngine,this);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar4 = (this->m_suspendedContexts).field0_0x0.m_list.m_pHead;
  if (pEVar4 != (ERedBlackTreeNode *)0x0) {
    piVar1 = (int *)pEVar4->value;
    while( true ) {
      pEVar4 = pEVar4->pNext;
      (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8));
      if (pEVar4 == (ERedBlackTreeNode *)0x0) break;
      piVar1 = (int *)pEVar4->value;
    }
  }
  RemoveAll__13ERedBlackTree(&(this->m_suspendedContexts).field0_0x0);
  this_01 = &this->m_debugStrings;
  iVar5 = 0;
                    /* end of inlined section */
  DeallocateStaticData__8ERScript(this);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  if (0 < (this->m_debugStrings).field0_0x0.m_size) {
    pvVar3 = (this_01->field0_0x0).m_p;
    while( true ) {
      iVar2 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      this_00 = (EString *)((int)pvVar3 + iVar2);
      Deallocate__7EStringPc(this_00,this_00->m_p);
      if ((this->m_debugStrings).field0_0x0.m_size <= iVar5) break;
      pvVar3 = (this_01->field0_0x0).m_p;
    }
  }
  Deallocate__6EArray(&this_01->field0_0x0);
  iVar5 = (this->m_commands).field0_0x0.m_size;
  if (0 < iVar5) {
    do {
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  Deallocate__6EArray(&(this->m_commands).field0_0x0);
  RemoveAll__9ENodeList(&(this->m_staticDataList).field0_0x0);
  RemoveAll__13ERedBlackTree(&(this->m_suspendedContexts).field0_0x0);
                    /* end of inlined section */
  ___9EResource(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/engine/script/e_rscript.h */
    _allocBucketFree__FPvUiUi(this,0x54,0x1f);
  }
                    /* end of inlined section */
  return;
}

void ERScript::Write(EStream &s) {
	EStorable *this;
	EStream &s;
	EStream &s;
	TArray<EScriptCommand> &d;
	TArray<EScriptCommand> *this;
	EArray *this;
	unsigned int d;
	EStream &s;
	int i;
	int index;
	TArray<EScriptCommand> *this;
	EStream &s;
	EStream &s;
	unsigned int d;
	EStream &s;
	TArray<EString> &d;
	TArray<EString> *this;
	EArray *this;
	unsigned int d;
	EStream &s;
	int i;
	int index;
	TArray<EString> *this;
	
  uint uVar1;
  void *pvVar2;
  EStream *s_00;
  int iVar3;
  int iVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  int local_80;
  undefined4 local_7c;
  uint d;
  undefined4 local_70;
  undefined4 uStack_6c;
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
  
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  iVar3 = 0;
                    /* end of inlined section */
  __ls__FR7EStreamRC7EString(s,&(this->field0_0x0).m_name);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  iVar4 = (this->m_commands).field0_0x0.m_size;
  local_80 = iVar4;
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&local_80,4);
  if (0 < iVar4) {
    pvVar2 = (this->m_commands).field0_0x0.m_p;
    while( true ) {
      local_7c = *(undefined4 *)((int)pvVar2 + iVar3 * 4);
      iVar3 = iVar3 + 1;
      (*(code *)s->__vtable[1].Write)
                (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&local_7c,4);
      if (iVar4 <= iVar3) break;
      pvVar2 = (this->m_commands).field0_0x0.m_p;
    }
  }
                    /* end of inlined section */
  s_00 = __ls__H1ZP11EScriptData_R7EStreamRCt9TNodeList1ZX01_R7EStream(s,&this->m_staticDataList);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  uVar1 = (this->m_debugStrings).field0_0x0.m_size;
  iVar4 = 0;
  d = uVar1;
  (*(code *)s_00->__vtable[1].Write)
            (&s_00->m_streamingStructure + *(short *)&s_00->__vtable[1].Read,&d,4);
  if (0 < (int)uVar1) {
    pvVar2 = (this->m_debugStrings).field0_0x0.m_p;
    while( true ) {
      iVar3 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      __ls__FR7EStreamRC7EString(s_00,(EString *)((int)pvVar2 + iVar3));
      if ((int)uVar1 <= iVar4) break;
      pvVar2 = (this->m_debugStrings).field0_0x0.m_p;
    }
  }
  return;
}

void ERScript::Read(EStream &s) {
	EStorable *this;
	EStream &s;
	EStream &s;
	TArray<EScriptCommand> &d;
	u32 size;
	EStream &s;
	int size;
	TArray<EScriptCommand> *this;
	TArray<EScriptCommand> *this;
	EArray *this;
	int i;
	TArray<EScriptCommand> *this;
	int index;
	int i;
	TArray<EScriptCommand> *this;
	int index;
	int i;
	int index;
	TArray<EScriptCommand> *this;
	EStream &s;
	EStream &s;
	EStream &s;
	u32 size;
	EStream &s;
	int size;
	int i;
	int index;
	int i;
	int index;
	int i;
	int index;
	int i;
	int index;
	int i;
	int index;
	
  uint size_00;
  int iVar1;
  EStream *s_00;
  EStream__vtable *pEVar2;
  void *pvVar3;
  EString *pEVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  TArray_EString_ *pTVar8;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  int local_a0;
  uint size;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
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
  
                    /* inlined from c:/eor/src2/engine/script/e_rscript.h */
  local_30 = (undefined4)unaff_s6;
  uStack_2c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
                    /* end of inlined section */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s7;
  uStack_1c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s5;
  uStack_3c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (_8ERScript_m_typeInfo.m_readVersion != 0) {
    if (_8ERScript_m_typeInfo.m_readVersion != 1) goto LAB_002f6904;
    __rs__FR7EStreamR7EString(s,&(this->field0_0x0).m_name);
  }
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  pTVar8 = &this->m_debugStrings;
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&local_a0,4);
  iVar5 = local_a0;
  iVar6 = (this->m_commands).field0_0x0.m_size;
  if (local_a0 < iVar6) {
    iVar1 = iVar6 - local_a0;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  SetSize__6EArrayii(&(this->m_commands).field0_0x0,local_a0,0);
  iVar1 = iVar5 - iVar6;
  if (iVar6 < iVar5) {
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar6 = 0;
  if (0 < local_a0) {
    pEVar2 = s->__vtable;
    while( true ) {
      iVar5 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      (*(code *)pEVar2[1].GetPos)
                (&s->m_streamingStructure + *(short *)&pEVar2[1].EStream,
                 (void *)((int)(this->m_commands).field0_0x0.m_p + iVar5),4);
      if (local_a0 <= iVar6) break;
      pEVar2 = s->__vtable;
    }
  }
                    /* end of inlined section */
  s_00 = __rs__H1ZP11EScriptData_R7EStreamRt9TNodeList1ZX01_R7EStream(s,&this->m_staticDataList);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)s_00->__vtable[1].GetPos)
            (&s_00->m_streamingStructure + *(short *)&s_00->__vtable[1].EStream,&size,4);
  size_00 = size;
  iVar6 = (this->m_debugStrings).field0_0x0.m_size;
  if ((int)size < iVar6) {
    pvVar3 = (pTVar8->field0_0x0).m_p;
    uVar7 = size;
    while( true ) {
      iVar5 = uVar7 * 4;
      uVar7 = uVar7 + 1;
      pEVar4 = (EString *)((int)pvVar3 + iVar5);
      Deallocate__7EStringPc(pEVar4,pEVar4->m_p);
      if (iVar6 <= (int)uVar7) break;
      pvVar3 = (pTVar8->field0_0x0).m_p;
    }
  }
  SetSize__6EArrayii(&pTVar8->field0_0x0,size_00,0);
  if (iVar6 < (int)size_00) {
    pvVar3 = (pTVar8->field0_0x0).m_p;
    while( true ) {
      iVar5 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      SetToNull__7EString((EString *)((int)pvVar3 + iVar5));
      if ((int)size_00 <= iVar6) break;
      pvVar3 = (pTVar8->field0_0x0).m_p;
    }
  }
  iVar6 = 0;
  if (0 < (int)size) {
    pvVar3 = (pTVar8->field0_0x0).m_p;
    while( true ) {
      iVar5 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      __rs__FR7EStreamR7EString(s_00,(EString *)((int)pvVar3 + iVar5));
      if ((int)size <= iVar6) break;
      pvVar3 = (pTVar8->field0_0x0).m_p;
    }
  }
LAB_002f6904:
  pTVar8 = &this->m_debugStrings;
                    /* end of inlined section */
  InitStaticData__8ERScript(this);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  iVar6 = (this->m_debugStrings).field0_0x0.m_size;
  iVar5 = 0;
  if (0 < iVar6) {
    pvVar3 = (pTVar8->field0_0x0).m_p;
    while( true ) {
      iVar1 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      pEVar4 = (EString *)((int)pvVar3 + iVar1);
      Deallocate__7EStringPc(pEVar4,pEVar4->m_p);
      if (iVar6 <= iVar5) break;
      pvVar3 = (pTVar8->field0_0x0).m_p;
    }
  }
  SetSize__6EArrayii(&pTVar8->field0_0x0,0,0);
  if (iVar6 < 0) {
    pvVar3 = (pTVar8->field0_0x0).m_p;
    while( true ) {
      iVar5 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      SetToNull__7EString((EString *)((int)pvVar3 + iVar5));
      if (-1 < iVar6) break;
      pvVar3 = (pTVar8->field0_0x0).m_p;
    }
  }
  return;
}

void ERScript::InitStaticData() {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  uint uVar1;
  ENodeListNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_staticDataList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar2 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    uVar1 = pEVar2->data;
    while( true ) {
      *(int *)(uVar1 + 4) = *(int *)(uVar1 + 4) + 1;
      pEVar2 = pEVar2->pNext;
                    /* end of inlined section */
      if (pEVar2 == (ENodeListNode *)0x0) break;
      uVar1 = pEVar2->data;
    }
  }
  return;
}

void ERScript::DeallocateStaticData() {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  EScriptData *this_00;
  EStorable__vtable *pEVar1;
  ENodeListNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_staticDataList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar2 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    this_00 = (EScriptData *)pEVar2->data;
    while( true ) {
                    /* end of inlined section */
      if (this_00->m_nRefs == 0) {
        pEVar1 = (this_00->field0_0x0).__vtable;
        (*(code *)pEVar1->GetTypeName)
                  ((int)&(this_00->field0_0x0).__vtable + (int)*(short *)&pEVar1->GetTypeInfo);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar2 = pEVar2->pNext;
      }
      else {
        DelRef__11EScriptData(this_00);
        pEVar2 = pEVar2->pNext;
      }
                    /* end of inlined section */
      if (pEVar2 == (ENodeListNode *)0x0) break;
      this_00 = (EScriptData *)pEVar2->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_staticDataList).field0_0x0);
  return;
}

void ERScript::Reload(EStream &s) {
	ERScript *pTemp;
	TNodeList<EScriptData *> *this;
	TNodeList<EScriptData *> &src;
	TNodeList<EScriptData *> &list;
	TNodeList<EScriptData *> *this;
	TArray<EScriptCommand> *this;
	TArray<EScriptCommand> &src;
	TArray<EScriptCommand> *this;
	EArray *this;
	TArray<EScriptCommand> *this;
	TArray<EScriptCommand> *this;
	EArray *this;
	int i;
	TArray<EScriptCommand> *this;
	int index;
	int i;
	TArray<EScriptCommand> *this;
	int index;
	int i;
	int index;
	TArray<EScriptCommand> *this;
	int index;
	TArray<EScriptCommand> *this;
	TArray<EString> &src;
	TArray<EString> *this;
	EArray *this;
	int i;
	int index;
	int i;
	int index;
	int i;
	int index;
	int index;
	TArray<EString> *this;
	
  int iVar1;
  EStorable__vtable *pEVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  EString *this_00;
  int iVar6;
  TNodeList_EScriptData___ *list;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  TArray_EScriptCommand_ *pTVar7;
  undefined8 unaff_s2;
  TArray_EString_ *this_01;
  undefined8 unaff_s3;
  TArray_EString_ *pTVar8;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  ERScript *pTemp;
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
  
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  if (this->m_nRunning == 0) {
    __rs__FR7EStreamRP8ERScript(s,&pTemp);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
    this_01 = &this->m_debugStrings;
                    /* end of inlined section */
    DeallocateStaticData__8ERScript(this);
    list = &pTemp->m_staticDataList;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    RemoveAll__9ENodeList(&(this->m_staticDataList).field0_0x0);
    AddTail__9ENodeListRC9ENodeList(&(this->m_staticDataList).field0_0x0,&list->field0_0x0);
                    /* end of inlined section */
    RemoveAll__9ENodeList(&(pTemp->m_staticDataList).field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
    iVar6 = (this->m_commands).field0_0x0.m_size;
    pTVar7 = &pTemp->m_commands;
    iVar1 = (pTemp->m_commands).field0_0x0.m_size;
    iVar3 = iVar6 - iVar1;
    if (iVar1 < iVar6) {
      do {
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    SetSize__6EArrayii(&(this->m_commands).field0_0x0,iVar1,0);
    iVar3 = iVar1 - iVar6;
    if (iVar6 < iVar1) {
      do {
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar6 = 0;
    if (0 < iVar1) {
      do {
        iVar3 = iVar6 * 4;
        iVar6 = iVar6 + 1;
        *(undefined4 *)((int)(this->m_commands).field0_0x0.m_p + iVar3) =
             *(undefined4 *)((int)(pTVar7->field0_0x0).m_p + iVar3);
      } while (iVar6 < iVar1);
    }
    iVar6 = (this->m_debugStrings).field0_0x0.m_size;
    pTVar8 = &pTemp->m_debugStrings;
    iVar1 = (pTemp->m_debugStrings).field0_0x0.m_size;
    if (iVar1 < iVar6) {
      pvVar5 = (this_01->field0_0x0).m_p;
      iVar3 = iVar1;
      while( true ) {
        iVar4 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        this_00 = (EString *)((int)pvVar5 + iVar4);
        Deallocate__7EStringPc(this_00,this_00->m_p);
        if (iVar6 <= iVar3) break;
        pvVar5 = (this_01->field0_0x0).m_p;
      }
    }
    SetSize__6EArrayii(&this_01->field0_0x0,iVar1,0);
    if (iVar6 < iVar1) {
      pvVar5 = (this_01->field0_0x0).m_p;
      while( true ) {
        iVar3 = iVar6 * 4;
        iVar6 = iVar6 + 1;
        SetToNull__7EString((EString *)((int)pvVar5 + iVar3));
        if (iVar1 <= iVar6) break;
        pvVar5 = (this_01->field0_0x0).m_p;
      }
    }
    iVar6 = 0;
    if (0 < iVar1) {
      pvVar5 = (pTVar8->field0_0x0).m_p;
      while( true ) {
        iVar3 = iVar6 * 4;
        iVar6 = iVar6 + 1;
        __as__7EStringPCc((EString *)((int)(this_01->field0_0x0).m_p + iVar3),
                          *(char **)((int)pvVar5 + iVar3));
        if (iVar1 <= iVar6) break;
        pvVar5 = (pTVar8->field0_0x0).m_p;
      }
    }
                    /* end of inlined section */
    pEVar2 = (pTemp->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar2->GetTypeName)
              ((int)&(pTemp->field0_0x0).field0_0x0.__vtable + (int)*(short *)&pEVar2->GetTypeInfo);
  }
  return;
}

EStream& EStream & operator<<<EScriptData *>(EStream &s, TNodeList<EScriptData *> &d) {
	NLIterator i;
	EStream &s;
	int d;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  EScriptData *pD;
  ENodeListNode *pEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  int local_40 [4];
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
  local_40[0] = GetSize__C9ENodeList(&d->field0_0x0);
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,local_40,4);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (d->field0_0x0).m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar1 != (ENodeListNode *)0x0) {
                    /* end of inlined section */
    pD = (EScriptData *)pEVar1->data;
    while( true ) {
      __ls__FR7EStreamP11EScriptData(s,pD);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar1 = pEVar1->pNext;
                    /* end of inlined section */
      if (pEVar1 == (ENodeListNode *)0x0) break;
      pD = (EScriptData *)pEVar1->data;
    }
  }
  return s;
}

EStream& EStream & operator>><EScriptData *>(EStream &s, TNodeList<EScriptData *> &d) {
	s32 count;
	EStream &s;
	EScriptData *p;
	TNodeList<EScriptData *> *this;
	EScriptData *data;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  int count;
  EScriptData *p;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  RemoveAll__9ENodeList(&d->field0_0x0);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&count,4);
  while (count = count + -1, count != -1) {
    __rs__FR7EStreamRP11EScriptData(s,&p);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    AddTail__9ENodeListUi(&d->field0_0x0,(uint)p);
                    /* end of inlined section */
  }
  return s;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/script/e_rscript.h */
    gpTypeInfo_ERScript =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_8ERScript_m_typeInfo,New__8ERScript,1,"ERScript",&_9EResource_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

ERScript* ERScript::New() {
  ERScript *pEVar1;
  
  pEVar1 = (ERScript *)__nw__8ERScriptUi(0x54);
  pEVar1 = __8ERScript(pEVar1);
  return pEVar1;
}

void ERScript::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (ERScript *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)&(this->field0_0x0).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].GetTypeName,
               3);
  }
  return;
}

ETypeInfo* ERScript::GetTypeInfo() {
  return &_8ERScript_m_typeInfo;
}

char* ERScript::GetTypeName() {
  return _8ERScript_m_typeInfo.m_name;
}

u32 ERScript::GetTypeKey() {
  return _8ERScript_m_typeInfo.m_key;
}

u16 ERScript::GetTypeVersion() {
  return _8ERScript_m_typeInfo.m_version;
}

u16 ERScript::GetReadVersion() {
  return _8ERScript_m_typeInfo.m_readVersion;
}

ETypeInfo* ERScript::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_8ERScript_m_typeInfo,New__8ERScript,version,"ERScript",
                      &_9EResource_m_typeInfo);
  return pEVar1;
}

ERScript* ERScript::CreateCopy() {
  ERScript *pEVar1;
  
  pEVar1 = (ERScript *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void* ERScript::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _allocBucketAlloc__FUiUi(0x54,0x1f);
  return pvVar1;
}

void* ERScript::operator new(void *p) {
  void *in_a1_lo;
  
  return in_a1_lo;
}

void ERScript::operator delete(void *p) {
  _allocBucketFree__FPvUiUi(p,0x54,0x1f);
  return;
}

void global constructors keyed to gpTypeInfo_ERScript() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

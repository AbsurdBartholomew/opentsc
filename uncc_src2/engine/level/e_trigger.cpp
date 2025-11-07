// STATUS: NOT STARTED

#include "e_trigger.h"

ETypeInfo *gpTypeInfo_ETrigger = NULL;

__vtbl_ptr_type ETrigger virtual table[10] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ETrigger::SafeDelete,
		/* .__delta2 = */ 2760
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ETrigger::GetTypeInfo,
		/* .__delta2 = */ 2816
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ETrigger::GetTypeName,
		/* .__delta2 = */ 2832
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ETrigger::GetTypeKey,
		/* .__delta2 = */ 2848
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ETrigger::GetTypeVersion,
		/* .__delta2 = */ 2864
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ETrigger::~ETrigger,
		/* .__delta2 = */ 1944
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ETrigger::Read,
		/* .__delta2 = */ 2128
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ETrigger::Write,
		/* .__delta2 = */ 2120
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

ETypeInfo ETrigger::m_typeInfo;

EStream& operator<<(EStream &s, ETrigger *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,&pD->field0_0x0);
  return pEVar1;
}

EStream& operator>>(EStream &s, ETrigger *&pD) {
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
  *pD = (ETrigger *)pStorable;
  return s;
}

ETrigger* ETrigger::ETrigger() {
	EStorable *this;
	
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
  (this->field0_0x0).__vtable = (EStorable__vtable *)_vt_8ETrigger;
  SetToNull__7EString(&this->m_name);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_receiverList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_receiverList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
  this->m_pScript = (ERScript *)0x0;
  this->m_typeFlags = 0;
  return this;
}

void ETrigger::~ETrigger(int __in_chrg) {
	EStorable *this;
	int __in_chrg;
	void *pAddress;
	
  (this->field0_0x0).__vtable = (EStorable__vtable *)_vt_8ETrigger;
  Deallocate__8ETrigger(this);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  RemoveAll__9ENodeList(&(this->m_receiverList).field0_0x0);
  Deallocate__7EStringPc(&this->m_name,(this->m_name).m_p);
  (this->field0_0x0).__vtable = (EStorable__vtable *)_vt_9EStorable;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

void ETrigger::Deallocate() {
  if (this->m_pScript != (ERScript *)0x0) {
    DelRef__9EResource(&this->m_pScript->field0_0x0);
    this->m_pScript = (ERScript *)0x0;
  }
  RemoveAll__9ENodeList(&(this->m_receiverList).field0_0x0);
  return;
}

void ETrigger::Write(EStream &s) {
  return;
}

void ETrigger::Read(EStream &s) {
	u32 scriptId;
	EStorable *this;
	EStream &s;
	EStream &s;
	
  EStream *pEVar1;
  ERScript *pEVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  uint scriptId;
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
  Deallocate__8ETrigger(this);
                    /* inlined from c:/eor/src2/engine/level/e_trigger.h */
                    /* end of inlined section */
  scriptId = 0;
  if (_8ETrigger_m_typeInfo.m_readVersion == 0) {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&scriptId,4);
                    /* end of inlined section */
    pEVar1 = __rs__H1ZP9EInstance_R7EStreamRt9TNodeList1ZX01_R7EStream(s,&this->m_receiverList);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    (*(code *)pEVar1->__vtable[1].GetPos)
              (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].EStream,
               &this->m_typeFlags,4);
                    /* end of inlined section */
  }
  if (scriptId != 0) {
                    /* inlined from /eor/src2/engine/script/e_scriptman.h */
    pEVar2 = (ERScript *)
             AddRef__16EResourceManagerUiP5EFilei(&_scriptman.field0_0x0,scriptId,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pScript = pEVar2;
  }
  return;
}

EStream& EStream & operator>><EInstance *>(EStream &s, TNodeList<EInstance *> &d) {
	s32 count;
	EStream &s;
	EInstance *p;
	TNodeList<EInstance *> *this;
	EInstance *data;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  int count;
  EInstance *p;
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
    __rs__FR7EStreamRP9EInstance(s,&p);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    AddTail__9ENodeListUi(&d->field0_0x0,(uint)p);
                    /* end of inlined section */
  }
  return s;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/level/e_trigger.h */
    gpTypeInfo_ETrigger =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_8ETrigger_m_typeInfo,New__8ETrigger,0,"ETrigger",&_9EStorable_m_typeInfo);
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

ETrigger* ETrigger::New() {
  ETrigger *pEVar1;
  
  pEVar1 = (ETrigger *)__builtin_new(0x18);
  pEVar1 = __8ETrigger(pEVar1);
  return pEVar1;
}

void ETrigger::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (ETrigger *)0x0) {
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* ETrigger::GetTypeInfo() {
  return &_8ETrigger_m_typeInfo;
}

char* ETrigger::GetTypeName() {
  return _8ETrigger_m_typeInfo.m_name;
}

u32 ETrigger::GetTypeKey() {
  return _8ETrigger_m_typeInfo.m_key;
}

u16 ETrigger::GetTypeVersion() {
  return _8ETrigger_m_typeInfo.m_version;
}

u16 ETrigger::GetReadVersion() {
  return _8ETrigger_m_typeInfo.m_readVersion;
}

ETypeInfo* ETrigger::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_8ETrigger_m_typeInfo,New__8ETrigger,version,"ETrigger",
                      &_9EStorable_m_typeInfo);
  return pEVar1;
}

ETrigger* ETrigger::CreateCopy() {
  ETrigger *pEVar1;
  
  pEVar1 = (ETrigger *)CreateCopy__9EStorable(&this->field0_0x0);
  return pEVar1;
}

void global constructors keyed to gpTypeInfo_ETrigger() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

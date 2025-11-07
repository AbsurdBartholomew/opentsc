// STATUS: NOT STARTED

#include "e_rigroup.h"

ETypeInfo *gpTypeInfo_ERIGroup = NULL;

__vtbl_ptr_type ERIGroup virtual table[13] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERIGroup::SafeDelete,
		/* .__delta2 = */ 4040
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERIGroup::GetTypeInfo,
		/* .__delta2 = */ 4096
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERIGroup::GetTypeName,
		/* .__delta2 = */ 4112
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERIGroup::GetTypeKey,
		/* .__delta2 = */ 4128
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERIGroup::GetTypeVersion,
		/* .__delta2 = */ 4144
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERIGroup::~ERIGroup,
		/* .__delta2 = */ 2744
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Read,
		/* .__delta2 = */ 9848
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Write,
		/* .__delta2 = */ 9808
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
		/* .__pfn = */ &ERIGroup::Reload,
		/* .__delta2 = */ 2976
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

ETypeInfo ERIGroup::m_typeInfo;

EStream& operator<<(EStream &s, ERIGroup *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, ERIGroup *&pD) {
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
  *pD = (ERIGroup *)pStorable;
  return s;
}

ERIGroup* ERIGroup::ERIGroup() {
  __9EResource(&this->field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_instances).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_8ERIGroup;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_instances).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
  this->m_pLevel = (ERLevel *)0x0;
  return this;
}

void ERIGroup::~ERIGroup(int __in_chrg) {
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_8ERIGroup;
  Deallocate__8ERIGroup(this);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  RemoveAll__9ENodeList(&(this->m_instances).field0_0x0);
                    /* end of inlined section */
  ___9EResource(&this->field0_0x0,__in_chrg);
  return;
}

void ERIGroup::Deallocate() {
	TNodeList<EInstance *> *this;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	
  int *piVar1;
  ENodeListNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  pEVar2 = (this->m_instances).field0_0x0.m_l.m_pHead;
  if (pEVar2 != (ENodeListNode *)0x0) {
    piVar1 = (int *)pEVar2->data;
    while( true ) {
      pEVar2 = pEVar2->pNext;
      (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8));
      if (pEVar2 == (ENodeListNode *)0x0) break;
      piVar1 = (int *)pEVar2->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_instances).field0_0x0);
  return;
}

void ERIGroup::RemoveInstance(EInstance *pInstance) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  Remove__9ENodeListP17NLIteratorPtrType(&(this->m_instances).field0_0x0,pInstance->m_iIGroup);
                    /* end of inlined section */
  pInstance->m_pIGroup = (ERIGroup *)0x0;
  pInstance->m_iIGroup = (undefined1 *)0x0;
  return;
}

void ERIGroup::Reload(EStream &s) {
  Load__8ERIGroupR7EStream(this,s);
  if (this->m_pLevel != (ERLevel *)0x0) {
    AddToLevel__8ERIGroupP7ERLevel(this,this->m_pLevel);
  }
  return;
}

void ERIGroup::Load(EStream &s) {
	u32 nInstancesRemain;
	EStream &s;
	EString classname;
	u16 dataVersion;
	u32 thisClassCount;
	u32 typeLength;
	ETypeInfo *pTypeInfo;
	u32 goodBeef;
	EStream &s;
	EStream &s;
	EStream &s;
	ETypeInfo *this;
	ETypeInfo *this;
	u32 i;
	ETypeInfo *this;
	EStream &s;
	EStream &s;
	
  uint uVar1;
  ETypeInfo *pEVar2;
  code *pcVar3;
  undefined1 *puVar4;
  EStream__vtable *pEVar6;
  EString *d;
  int *data;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  EString classname;
  short dataVersion;
  uint nInstancesRemain;
  uint thisClassCount;
  uint typeLength;
  uint goodBeef;
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
  long lVar5;
  
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  d = &(this->field0_0x0).m_name;
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  Deallocate__8ERIGroup(this);
  __rs__FR7EStreamR7EString(s,d);
  Empty__7EString(d);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&nInstancesRemain,4);
                    /* end of inlined section */
  do {
    if (nInstancesRemain == 0) {
      return;
    }
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
    SetToNull__7EString(&classname);
                    /* end of inlined section */
    __rs__FR7EStreamR7EString(s,&classname);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&dataVersion,2);
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&thisClassCount,4);
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&typeLength,4);
    uVar1 = CalcKey__9ETypeInfoPCc(classname.m_p);
    pEVar2 = Find__9ETypeInfoUi(uVar1);
                    /* end of inlined section */
    if (pEVar2 == (ETypeInfo *)0x0) {
      (*(code *)s->__vtable[1].GetPos)
                (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,0,typeLength);
LAB_002b0dac:
                    /* inlined from /eor/src2/common/storage/e_storage.h */
      pEVar6 = s->__vtable;
    }
    else {
                    /* end of inlined section */
      if (dataVersion == pEVar2->m_version) {
                    /* inlined from /eor/src2/common/storage/e_typeinfo.h */
        pEVar2->m_readVersion = dataVersion;
                    /* end of inlined section */
        uVar1 = 0;
        if (thisClassCount == 0) goto LAB_002b0dac;
                    /* inlined from /eor/src2/common/storage/e_typeinfo.h */
        pcVar3 = (code *)pEVar2->m_pfnNew;
        while( true ) {
          lVar5 = (*pcVar3)();
                    /* end of inlined section */
          if (lVar5 == 0) {
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
            Deallocate__7EStringPc(&classname,classname.m_p);
            return;
                    /* end of inlined section */
          }
                    /* inlined from /eor/src2/common/storage/e_storage.h */
          data = (int *)lVar5;
                    /* end of inlined section */
          uVar1 = uVar1 + 1;
                    /* inlined from /eor/src2/common/storage/e_storage.h */
          (*(code *)s->__vtable[1].GetPos)
                    (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,data + 4,4);
                    /* end of inlined section */
          (**(code **)(*data + 0xb4))((int)data + (int)*(short *)(*data + 0xb0),s);
          data[2] = (int)this;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
          puVar4 = AddTail__9ENodeListUi(&(this->m_instances).field0_0x0,(uint)data);
                    /* end of inlined section */
          data[3] = (int)puVar4;
          if (thisClassCount <= uVar1) break;
          pcVar3 = (code *)pEVar2->m_pfnNew;
        }
        pEVar6 = s->__vtable;
      }
      else {
        (*(code *)s->__vtable[1].GetPos)
                  (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,0,typeLength);
        pEVar6 = s->__vtable;
      }
    }
    (*(code *)pEVar6[1].GetPos)(&s->m_streamingStructure + *(short *)&pEVar6[1].EStream,&goodBeef,4)
    ;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
                    /* end of inlined section */
    nInstancesRemain = nInstancesRemain - thisClassCount;
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
    Deallocate__7EStringPc(&classname,classname.m_p);
                    /* end of inlined section */
  } while( true );
}

void ERIGroup::InitializeInstances() {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  int *piVar1;
  ENodeListNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_instances).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar2 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    piVar1 = (int *)pEVar2->data;
    while( true ) {
      (**(code **)(*piVar1 + 0x4c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x48));
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar2 = pEVar2->pNext;
                    /* end of inlined section */
      if (pEVar2 == (ENodeListNode *)0x0) break;
      piVar1 = (int *)pEVar2->data;
    }
  }
  return;
}

void ERIGroup::AddToLevel(ERLevel *pLevel) {
	EInstance *pLast;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  ENodeListNode *pEVar1;
  EInstance *pInstance;
  EInstance *pRefInstance;
  
  pRefInstance = (EInstance *)0x0;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  for (pEVar1 = (this->m_instances).field0_0x0.m_l.m_pHead; pEVar1 != (ENodeListNode *)0x0;
      pEVar1 = pEVar1->pNext) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pInstance = (EInstance *)pEVar1->data;
                    /* end of inlined section */
    InsertInstance__7ERLevelP9EInstanceT1(pLevel,pInstance,pRefInstance);
                    /* end of inlined section */
    pRefInstance = pInstance;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  }
  this->m_pLevel = pLevel;
  return;
}

void ERIGroup::RemoveFromLevel(ERLevel *pLevel) {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  EInstance *pInstance;
  ENodeListNode *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_instances).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar1 != (ENodeListNode *)0x0) {
                    /* end of inlined section */
    pInstance = (EInstance *)pEVar1->data;
    while( true ) {
      RemoveInstance__7ERLevelP9EInstance(pLevel,pInstance);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar1 = pEVar1->pNext;
                    /* end of inlined section */
      if (pEVar1 == (ENodeListNode *)0x0) break;
      pInstance = (EInstance *)pEVar1->data;
    }
  }
  this->m_pLevel = (ERLevel *)0x0;
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/igroup/e_rigroup.h */
    gpTypeInfo_ERIGroup =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_8ERIGroup_m_typeInfo,New__8ERIGroup,0,"ERIGroup",&_9EResource_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

u32 ETypeInfo::CalcKey(char *string) {
  uint uVar1;
  
  uVar1 = Compute__9EChecksumPCc(string);
  return uVar1;
}

ERIGroup* ERIGroup::New() {
  ERIGroup *pEVar1;
  
  pEVar1 = (ERIGroup *)__builtin_new(0x20);
  pEVar1 = __8ERIGroup(pEVar1);
  return pEVar1;
}

void ERIGroup::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (ERIGroup *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)&(this->field0_0x0).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].GetTypeName,
               3);
  }
  return;
}

ETypeInfo* ERIGroup::GetTypeInfo() {
  return &_8ERIGroup_m_typeInfo;
}

char* ERIGroup::GetTypeName() {
  return _8ERIGroup_m_typeInfo.m_name;
}

u32 ERIGroup::GetTypeKey() {
  return _8ERIGroup_m_typeInfo.m_key;
}

u16 ERIGroup::GetTypeVersion() {
  return _8ERIGroup_m_typeInfo.m_version;
}

u16 ERIGroup::GetReadVersion() {
  return _8ERIGroup_m_typeInfo.m_readVersion;
}

ETypeInfo* ERIGroup::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_8ERIGroup_m_typeInfo,New__8ERIGroup,version,"ERIGroup",
                      &_9EResource_m_typeInfo);
  return pEVar1;
}

ERIGroup* ERIGroup::CreateCopy() {
  ERIGroup *pEVar1;
  
  pEVar1 = (ERIGroup *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void global constructors keyed to gpTypeInfo_ERIGroup() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

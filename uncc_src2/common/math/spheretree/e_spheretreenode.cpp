// STATUS: NOT STARTED

#include "e_spheretreenode.h"

ETypeInfo *gpTypeInfo_ESphereTreeNode = NULL;

__vtbl_ptr_type ESphereTreeNode virtual table[10] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESphereTreeNode::SafeDelete,
		/* .__delta2 = */ -10344
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESphereTreeNode::GetTypeInfo,
		/* .__delta2 = */ -10288
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESphereTreeNode::GetTypeName,
		/* .__delta2 = */ -10272
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESphereTreeNode::GetTypeKey,
		/* .__delta2 = */ -10256
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESphereTreeNode::GetTypeVersion,
		/* .__delta2 = */ -10240
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESphereTreeNode::~ESphereTreeNode,
		/* .__delta2 = */ -10432
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESphereTreeNode::Read,
		/* .__delta2 = */ -10768
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESphereTreeNode::Write,
		/* .__delta2 = */ -10848
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo ESphereTreeNode::m_typeInfo;

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

EStream& operator<<(EStream &s, ESphereTreeNode *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,&pD->field0_0x0);
  return pEVar1;
}

EStream& operator>>(EStream &s, ESphereTreeNode *&pD) {
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
  *pD = (ESphereTreeNode *)pStorable;
  return s;
}

ESphereTreeNode* ESphereTreeNode::ESphereTreeNode() {
	EStorable *this;
	
  this->m_pParent = (ESphereTreeNode *)0x0;
  (this->field0_0x0).__vtable = (EStorable__vtable *)_vt_15ESphereTreeNode;
  this->m_pChildren[1] = (EStorable *)0x0;
  this->m_pChildren[0] = (EStorable *)0x0;
  return this;
}

void ESphereTreeNode::Write(EStream &s) {
	EStorable *this;
	
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamRC12EBoundSphere(s,&this->m_boundSphere);
  pEVar1 = __ls__FR7EStreamP15ESphereTreeNode(pEVar1,this->m_pParent);
  pEVar1 = __ls__FR7EStreamP9EStorable(pEVar1,this->m_pChildren[0]);
  __ls__FR7EStreamP9EStorable(pEVar1,this->m_pChildren[1]);
  return;
}

void ESphereTreeNode::Read(EStream &s) {
	EStorable *this;
	EStream &s;
	
  EStream *pEVar1;
  
                    /* inlined from c:/eor/src2/common/math/spheretree/e_spheretreenode.h */
                    /* end of inlined section */
  if (_15ESphereTreeNode_m_typeInfo.m_readVersion == 0) {
    pEVar1 = __rs__FR7EStreamR12EBoundSphere(s,&this->m_boundSphere);
    pEVar1 = __rs__FR7EStreamRP15ESphereTreeNode(pEVar1,&this->m_pParent);
    pEVar1 = __rs__FR7EStreamRP9EStorable(pEVar1,this->m_pChildren);
    __rs__FR7EStreamRP9EStorable(pEVar1,this->m_pChildren + 1);
  }
  return;
}

void ESphereTreeNode::Deallocate() {
	int i;
	
  EStorable__vtable *pEVar1;
  bool bVar2;
  EStorable **ppEVar3;
  int iVar4;
  
  iVar4 = 1;
  ppEVar3 = this->m_pChildren;
  do {
                    /* inlined from c:/eor/src2/common/math/spheretree/e_spheretreenode.h */
    bVar2 = IsExactType__9EStorableP9ETypeInfo((EStorable *)*ppEVar3,&_15ESphereTreeNode_m_typeInfo)
    ;
                    /* end of inlined section */
    if (bVar2) {
      Deallocate__15ESphereTreeNode((ESphereTreeNode *)*ppEVar3);
      *ppEVar3 = (EStorable *)0x0;
    }
    else {
      pEVar1 = (((ESphereTreeNode *)*ppEVar3)->field0_0x0).__vtable;
      (*(code *)pEVar1->GetTypeName)
                ((int)((ESphereTreeNode *)*ppEVar3)->m_pChildren +
                 *(short *)&pEVar1->GetTypeInfo + -0x18);
      *ppEVar3 = (EStorable *)0x0;
    }
    iVar4 = iVar4 + -1;
    ppEVar3 = ppEVar3 + 1;
  } while (-1 < iVar4);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1->GetTypeName)((int)this->m_pChildren + *(short *)&pEVar1->GetTypeInfo + -0x18);
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/common/math/spheretree/e_spheretreenode.h */
    gpTypeInfo_ESphereTreeNode =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_15ESphereTreeNode_m_typeInfo,New__15ESphereTreeNode,0,"ESphereTreeNode",
                    &_9EStorable_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

void ESphereTreeNode::~ESphereTreeNode(int __in_chrg) {
	EStorable *this;
	void *pAddress;
	
                    /* inlined from /eor/src2/common/storage/e_storable.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EStorable__vtable *)_vt_9EStorable;
  if ((__in_chrg & 1U) != 0) {
    __dl__15ESphereTreeNodePv(this);
  }
  return;
}

ESphereTreeNode* ESphereTreeNode::New() {
  ESphereTreeNode *pEVar1;
  
  pEVar1 = (ESphereTreeNode *)__nw__15ESphereTreeNodeUi(0x20);
  pEVar1 = __15ESphereTreeNode(pEVar1);
  return pEVar1;
}

void ESphereTreeNode::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (ESphereTreeNode *)0x0) {
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)this->m_pChildren + *(short *)&pEVar1[1].GetTypeName + -0x18,3);
  }
  return;
}

ETypeInfo* ESphereTreeNode::GetTypeInfo() {
  return &_15ESphereTreeNode_m_typeInfo;
}

char* ESphereTreeNode::GetTypeName() {
  return _15ESphereTreeNode_m_typeInfo.m_name;
}

u32 ESphereTreeNode::GetTypeKey() {
  return _15ESphereTreeNode_m_typeInfo.m_key;
}

u16 ESphereTreeNode::GetTypeVersion() {
  return _15ESphereTreeNode_m_typeInfo.m_version;
}

u16 ESphereTreeNode::GetReadVersion() {
  return _15ESphereTreeNode_m_typeInfo.m_readVersion;
}

ETypeInfo* ESphereTreeNode::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_15ESphereTreeNode_m_typeInfo,New__15ESphereTreeNode,version,
                      "ESphereTreeNode",&_9EStorable_m_typeInfo);
  return pEVar1;
}

ESphereTreeNode* ESphereTreeNode::CreateCopy() {
  ESphereTreeNode *pEVar1;
  
  pEVar1 = (ESphereTreeNode *)CreateCopy__9EStorable(&this->field0_0x0);
  return pEVar1;
}

void* ESphereTreeNode::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _allocBucketAlloc__FUiUi(0x20,0x20);
  return pvVar1;
}

void* ESphereTreeNode::operator new(void *p) {
  void *in_a1_lo;
  
  return in_a1_lo;
}

void ESphereTreeNode::operator delete(void *p) {
  _allocBucketFree__FPvUiUi(p,0x20,0x20);
  return;
}

bool ESphereTreeNode::IsSphereTreeNode(EStorable *pStorable) {
  bool bVar1;
  
  bVar1 = IsExactType__9EStorableP9ETypeInfo(pStorable,&_15ESphereTreeNode_m_typeInfo);
  return bVar1;
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
                    /* inlined from e_standard_heap.h */
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

void global constructors keyed to gpTypeInfo_ESphereTreeNode() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

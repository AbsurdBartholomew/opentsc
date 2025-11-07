// STATUS: NOT STARTED

#include "e_rcharacter.h"

ETypeInfo *gpTypeInfo_ERCharacter = NULL;

__vtbl_ptr_type ERCharacter virtual table[13] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERCharacter::SafeDelete,
		/* .__delta2 = */ -29040
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERCharacter::GetTypeInfo,
		/* .__delta2 = */ -28984
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERCharacter::GetTypeName,
		/* .__delta2 = */ -28968
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERCharacter::GetTypeKey,
		/* .__delta2 = */ -28952
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERCharacter::GetTypeVersion,
		/* .__delta2 = */ -28936
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERCharacter::~ERCharacter,
		/* .__delta2 = */ -30000
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
		/* .__pfn = */ &EResource::Reload,
		/* .__delta2 = */ 10736
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

ETypeInfo ERCharacter::m_typeInfo;

EStream& operator<<(EStream &s, ERCharacter *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, ERCharacter *&pD) {
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
  *pD = (ERCharacter *)pStorable;
  return s;
}

ERCharacter* ERCharacter::ERCharacter() {
	TArray<ECharacterNode> *this;
	EArray *this;
	
  __9EResource(&this->field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_11ERCharacter;
  __6EArray(&(this->m_nodes).field0_0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  (this->m_nodes).field0_0x0.m_elementSize = 0xb0;
  return this;
}

void ERCharacter::~ERCharacter(int __in_chrg) {
	TArray<ECharacterNode> *this;
	int i;
	TArray<ECharacterNode> *this;
	EArray *this;
	int index;
	TArray<ECharacterNode> *this;
	EArray *this;
	void *pAddress;
	
  void *pvVar1;
  int iVar2;
  TArray_ECharacterNode_ *this_00;
  int iVar3;
  
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  this_00 = &this->m_nodes;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_11ERCharacter;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  iVar2 = 0;
  if (0 < (this->m_nodes).field0_0x0.m_size) {
    pvVar1 = (this_00->field0_0x0).m_p;
    iVar3 = 0;
    while( true ) {
      iVar2 = iVar2 + 1;
      Deallocate__7EStringPc
                ((EString *)((int)pvVar1 + iVar3 + 0xa4),*(char **)((int)pvVar1 + iVar3 + 0xa4));
      if ((this->m_nodes).field0_0x0.m_size <= iVar2) break;
      pvVar1 = (this_00->field0_0x0).m_p;
      iVar3 = iVar3 + 0xb0;
    }
  }
  Deallocate__6EArray(&this_00->field0_0x0);
                    /* end of inlined section */
  ___9EResource(&this->field0_0x0,__in_chrg);
  return;
}

void ERCharacter::Load(EStream &s) {
	EStream &s;
	TArray<ECharacterNode> &d;
	u32 size;
	EStream &s;
	int size;
	TArray<ECharacterNode> *this;
	TArray<ECharacterNode> *this;
	EArray *this;
	int i;
	TArray<ECharacterNode> *this;
	int index;
	int i;
	TArray<ECharacterNode> *this;
	int index;
	int i;
	int index;
	TArray<ECharacterNode> *this;
	EStream &s;
	EStream &s;
	u8 v;
	
  uint size_00;
  EStream *pEVar1;
  EStream__vtable *pEVar2;
  void *pvVar3;
  int iVar4;
  undefined8 unaff_s0;
  int iVar5;
  int iVar6;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  TArray_ECharacterNode_ *this_00;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  uchar v;
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
  
  local_30 = (undefined4)unaff_s6;
  uStack_2c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s5;
  uStack_3c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  this_00 = &this->m_nodes;
  local_20 = (undefined4)unaff_s7;
  uStack_1c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
  __rs__FR7EStreamR7EString(s,&(this->field0_0x0).m_name);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&size,4);
  size_00 = size;
  iVar4 = (this->m_nodes).field0_0x0.m_size;
  if ((int)size < iVar4) {
    iVar5 = iVar4 - size;
    pvVar3 = (this_00->field0_0x0).m_p;
    iVar6 = size * 0xb0;
    while( true ) {
      iVar5 = iVar5 + -1;
      Deallocate__7EStringPc
                ((EString *)((int)pvVar3 + iVar6 + 0xa4),*(char **)((int)pvVar3 + iVar6 + 0xa4));
      if (iVar5 == 0) break;
      pvVar3 = (this_00->field0_0x0).m_p;
      iVar6 = iVar6 + 0xb0;
    }
  }
  SetSize__6EArrayii(&this_00->field0_0x0,size_00,0);
  if (iVar4 < (int)size_00) {
    iVar6 = iVar4 * 0xb0;
    iVar4 = size_00 - iVar4;
    pvVar3 = (this_00->field0_0x0).m_p;
    while( true ) {
      iVar4 = iVar4 + -1;
      iVar5 = iVar6 + 0xa4;
      iVar6 = iVar6 + 0xb0;
      SetToNull__7EString((EString *)((int)pvVar3 + iVar5));
      if (iVar4 == 0) break;
      pvVar3 = (this_00->field0_0x0).m_p;
    }
  }
  iVar4 = 0;
  if (0 < (int)size) {
    iVar6 = 0;
    pEVar2 = s->__vtable;
    while( true ) {
      iVar4 = iVar4 + 1;
      iVar5 = (int)(this_00->field0_0x0).m_p + iVar6;
      (*(code *)pEVar2[1].GetPos)(&s->m_streamingStructure + *(short *)&pEVar2[1].EStream,iVar5,4);
      iVar6 = iVar6 + 0xb0;
      pEVar1 = __rs__FR7EStreamR5EVec3(s,(EVec3 *)(iVar5 + 4));
      pEVar1 = __rs__FR7EStreamR5EQuat(pEVar1,(EQuat *)(iVar5 + 0x10));
      (*(code *)pEVar1->__vtable[1].GetPos)
                (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].EStream,&v,1);
      *(uint *)(iVar5 + 0xa0) = (uint)(v != '\0');
      pEVar1 = __rs__FR7EStreamR5EMat4(pEVar1,(EMat4 *)(iVar5 + 0x20));
      pEVar1 = __rs__FR7EStreamR5EMat4(pEVar1,(EMat4 *)(iVar5 + 0x60));
      __rs__FR7EStreamR7EString(pEVar1,(EString *)(iVar5 + 0xa4));
      if ((int)size <= iVar4) break;
      pEVar2 = s->__vtable;
    }
  }
                    /* end of inlined section */
  pEVar1 = __rs__FR7EStreamR12EBoundSphere(s,&this->m_boundSphere);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)pEVar1->__vtable[1].GetPos)
            (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].EStream,&this->m_radius,
             4);
  return;
}

int ERCharacter::FindNode(char *szName) {
	int i;
	TArray<ECharacterNode> *this;
	int index;
	
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
  iVar2 = 0;
  if (0 < (this->m_nodes).field0_0x0.m_size) {
    iVar3 = 0;
    do {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
      iVar1 = CompareNoCase__C7EStringPCc
                        ((EString *)((int)(this->m_nodes).field0_0x0.m_p + iVar3 + 0xa4),szName);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xb0;
    } while (iVar2 < (this->m_nodes).field0_0x0.m_size);
  }
  return -1;
}

void ERCharacter::PrintNodes() {
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/animation/e_rcharacter.h */
    gpTypeInfo_ERCharacter =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_11ERCharacter_m_typeInfo,New__11ERCharacter,0,"ERCharacter",
                    &_9EResource_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

ERCharacter* ERCharacter::New() {
  ERCharacter *pEVar1;
  
  pEVar1 = (ERCharacter *)__builtin_new(0x3c);
  pEVar1 = __11ERCharacter(pEVar1);
  return pEVar1;
}

void ERCharacter::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (ERCharacter *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)&(this->field0_0x0).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].GetTypeName,
               3);
  }
  return;
}

ETypeInfo* ERCharacter::GetTypeInfo() {
  return &_11ERCharacter_m_typeInfo;
}

char* ERCharacter::GetTypeName() {
  return _11ERCharacter_m_typeInfo.m_name;
}

u32 ERCharacter::GetTypeKey() {
  return _11ERCharacter_m_typeInfo.m_key;
}

u16 ERCharacter::GetTypeVersion() {
  return _11ERCharacter_m_typeInfo.m_version;
}

u16 ERCharacter::GetReadVersion() {
  return _11ERCharacter_m_typeInfo.m_readVersion;
}

ETypeInfo* ERCharacter::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_11ERCharacter_m_typeInfo,New__11ERCharacter,version,"ERCharacter",
                      &_9EResource_m_typeInfo);
  return pEVar1;
}

ERCharacter* ERCharacter::CreateCopy() {
  ERCharacter *pEVar1;
  
  pEVar1 = (ERCharacter *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void global constructors keyed to gpTypeInfo_ERCharacter() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

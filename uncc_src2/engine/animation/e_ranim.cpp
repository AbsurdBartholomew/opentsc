// STATUS: NOT STARTED

#include "e_ranim.h"

ETypeInfo *gpTypeInfo_ERAnim = NULL;

__vtbl_ptr_type ERAnim virtual table[13] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERAnim::SafeDelete,
		/* .__delta2 = */ -14072
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERAnim::GetTypeInfo,
		/* .__delta2 = */ -14016
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERAnim::GetTypeName,
		/* .__delta2 = */ -14000
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERAnim::GetTypeKey,
		/* .__delta2 = */ -13984
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERAnim::GetTypeVersion,
		/* .__delta2 = */ -13968
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERAnim::~ERAnim,
		/* .__delta2 = */ -15488
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
		/* .__pfn = */ &ERAnim::Reload,
		/* .__delta2 = */ -15296
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

ETypeInfo ERAnim::m_typeInfo;

EStream& operator<<(EStream &s, ERAnim *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, ERAnim *&pD) {
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
  *pD = (ERAnim *)pStorable;
  return s;
}

ERAnim* ERAnim::ERAnim() {
	TArray<EAnimNodeDataPos> *this;
	EArray *this;
	TArray<float> *this;
	EArray *this;
	EAnimDef *this;
	
  undefined *puVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  
  __9EResource(&this->field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_6ERAnim;
  __6EArray(&(this->m_nodes).field0_0x0);
  (this->m_nodes).field0_0x0.m_elementSize = 0xc;
  __6EArray(&(this->m_constantData).field0_0x0);
                    /* end of inlined section */
  (this->m_constantData).field0_0x0.m_elementSize = 4;
  __9EBitArray(&this->m_streamData);
                    /* inlined from c:/eor/src2/engine/animation/e_animdef.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/animation/e_animdef.h */
  (this->m_def).fps = 60.0;
  (this->m_def).blendDuration = 0.5;
  (this->m_def).flags = 0xfb;
  (this->m_def).rotAccum = '\x03';
  (this->m_def).blendType = '\x01';
  (this->m_def).blendSpeed = 0.08;
  (this->m_def).blendThreshold = 0.01;
  (this->m_def).intensity = 1.0;
  (this->m_def).endAction = '\0';
  (this->m_def).blendM1 = 0.0;
  (this->m_def).blendM2 = 0.0;
                    /* end of inlined section */
  this->m_nFrames = 0;
  puVar1 = (undefined *)((int)&(this->m_vRotAccum).field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | 0x3f8000003f800000U >> (7 - uVar4) * 8;
  uVar4 = (uint)&this->m_vRotAccum & 7;
  puVar5 = (ulong *)((int)&this->m_vRotAccum - uVar4);
  *puVar5 = 0x3f8000003f800000 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  (this->m_vRotAccum).field0_0x0.d[2] = 1.0;
  puVar1 = (undefined *)((int)&(this->m_vRotAccum).field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  uVar2 = (uint)&this->m_vRotAccum & 7;
  uVar6 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
          0xffffffffffffffffU >> (uVar4 + 1) * 8 & 0x3f8000003f800000) & -1L << (8 - uVar2) * 8 |
          *(ulong *)((int)&this->m_vRotAccum - uVar2) >> uVar2 * 8;
  fVar3 = (this->m_vRotAccum).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vTransAccum).field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar6 >> (7 - uVar4) * 8;
  uVar4 = (uint)&this->m_vTransAccum & 7;
  puVar5 = (ulong *)((int)&this->m_vTransAccum - uVar4);
  *puVar5 = uVar6 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  (this->m_vTransAccum).field0_0x0.d[2] = fVar3;
  return this;
}

void ERAnim::~ERAnim(int __in_chrg) {
	TArray<float> *this;
	int i;
	TArray<float> *this;
	EArray *this;
	int index;
	TArray<float> *this;
	EArray *this;
	void *pAddress;
	TArray<EAnimNodeDataPos> *this;
	int i;
	TArray<EAnimNodeDataPos> *this;
	EArray *this;
	int index;
	TArray<EAnimNodeDataPos> *this;
	EArray *this;
	void *pAddress;
	
  int iVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_bitarray.h */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_6ERAnim;
                    /* inlined from /eor/src2/common/datastruc/e_bitarray.h */
  Deallocate__9EBitArray(&this->m_streamData);
  iVar1 = (this->m_constantData).field0_0x0.m_size;
  if (0 < iVar1) {
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  Deallocate__6EArray(&(this->m_constantData).field0_0x0);
  iVar1 = (this->m_nodes).field0_0x0.m_size;
  if (0 < iVar1) {
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  Deallocate__6EArray(&(this->m_nodes).field0_0x0);
                    /* end of inlined section */
  ___9EResource(&this->field0_0x0,__in_chrg);
  return;
}

void ERAnim::Reload(EStream &s) {
  return;
}

void ERAnim::Load(EStream &s) {
	EStream &s;
	EStream &s;
	TArray<EAnimNodeDataPos> &d;
	u32 size;
	EStream &s;
	int size;
	TArray<EAnimNodeDataPos> *this;
	TArray<EAnimNodeDataPos> *this;
	EArray *this;
	int i;
	TArray<EAnimNodeDataPos> *this;
	int index;
	int i;
	TArray<EAnimNodeDataPos> *this;
	int index;
	int i;
	int index;
	TArray<EAnimNodeDataPos> *this;
	EStream &s;
	EStream &s;
	u32 size;
	int size;
	int i;
	int index;
	int i;
	int index;
	int i;
	int index;
	
  uint uVar1;
  EStream *pEVar2;
  int iVar3;
  int iVar4;
  EStream__vtable *pEVar5;
  EString *d;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  int iVar6;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  int local_d0;
  uint size;
  EAnimDef *local_c8;
  float *local_c4;
  uint *local_c0;
  uchar *local_bc;
  uchar *local_b8;
  uchar *local_b4;
  float *local_b0;
  float *local_ac;
  float *local_a8;
  float *local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
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
  
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  d = &(this->field0_0x0).m_name;
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
                    /* end of inlined section */
  __rs__FR7EStreamR7EString(s,d);
  Empty__7EString(d);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&this->m_nFrames,4);
                    /* end of inlined section */
  pEVar2 = __rs__FR7EStreamR5EVec3(s,&this->m_vTransAccum);
  pEVar2 = __rs__FR7EStreamR5EVec3(pEVar2,&this->m_vRotAccum);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)pEVar2->__vtable[1].GetPos)
            (&pEVar2->m_streamingStructure + *(short *)&pEVar2->__vtable[1].EStream,&local_d0,4);
  iVar4 = local_d0;
  iVar6 = (this->m_nodes).field0_0x0.m_size;
  if (local_d0 < iVar6) {
    iVar3 = iVar6 - local_d0;
    do {
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_b8 = &(this->m_def).endAction;
  SetSize__6EArrayii(&(this->m_nodes).field0_0x0,local_d0,0);
  local_c8 = &this->m_def;
  local_c4 = &(this->m_def).intensity;
  local_c0 = &(this->m_def).flags;
  local_b4 = &(this->m_def).blendType;
  local_b0 = &(this->m_def).blendM1;
  local_ac = &(this->m_def).blendM2;
  local_a8 = &(this->m_def).blendDuration;
  local_a4 = &(this->m_def).blendSpeed;
  local_bc = &(this->m_def).rotAccum;
  if (iVar6 < iVar4) {
    iVar4 = iVar4 - iVar6;
    do {
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar6 = 0;
  if (0 < local_d0) {
    iVar4 = 0;
    pEVar5 = pEVar2->__vtable;
    while( true ) {
      iVar6 = iVar6 + 1;
      iVar3 = (int)(this->m_nodes).field0_0x0.m_p + iVar4;
      (*(code *)pEVar5[1].GetPos)
                (&pEVar2->m_streamingStructure + *(short *)&pEVar5[1].EStream,iVar3,4);
      iVar4 = iVar4 + 0xc;
      (*(code *)pEVar2->__vtable[1].GetPos)
                (&pEVar2->m_streamingStructure + *(short *)&pEVar2->__vtable[1].EStream,iVar3 + 4,4)
      ;
      (*(code *)pEVar2->__vtable[1].GetPos)
                (&pEVar2->m_streamingStructure + *(short *)&pEVar2->__vtable[1].EStream,iVar3 + 8,4)
      ;
      if (local_d0 <= iVar6) break;
      pEVar5 = pEVar2->__vtable;
    }
  }
  (*(code *)pEVar2->__vtable[1].GetPos)
            (&pEVar2->m_streamingStructure + *(short *)&pEVar2->__vtable[1].EStream,&this->m_radius,
             4);
  (*(code *)pEVar2->__vtable[1].GetPos)
            (&pEVar2->m_streamingStructure + *(short *)&pEVar2->__vtable[1].EStream,&size,4);
  uVar1 = size;
  iVar6 = (this->m_constantData).field0_0x0.m_size;
  iVar4 = iVar6 - size;
  if ((int)size < iVar6) {
    do {
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  SetSize__6EArrayii(&(this->m_constantData).field0_0x0,size,0);
  iVar4 = uVar1 - iVar6;
  if (iVar6 < (int)uVar1) {
    do {
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar6 = 0;
  if (0 < (int)size) {
    pEVar5 = pEVar2->__vtable;
    while( true ) {
      iVar4 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      (*(code *)pEVar5[1].GetPos)
                (&pEVar2->m_streamingStructure + *(short *)&pEVar5[1].EStream,
                 (void *)((int)(this->m_constantData).field0_0x0.m_p + iVar4),4);
      if ((int)size <= iVar6) break;
      pEVar5 = pEVar2->__vtable;
    }
  }
                    /* end of inlined section */
  pEVar2 = __rs__FR7EStreamR9EBitArray(pEVar2,&this->m_streamData);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)pEVar2->__vtable[1].GetPos)
            (&pEVar2->m_streamingStructure + *(short *)&pEVar2->__vtable[1].EStream,local_c8,4);
  (*(code *)pEVar2->__vtable[1].GetPos)
            (&pEVar2->m_streamingStructure + *(short *)&pEVar2->__vtable[1].EStream,local_c4,4);
  (*(code *)pEVar2->__vtable[1].GetPos)
            (&pEVar2->m_streamingStructure + *(short *)&pEVar2->__vtable[1].EStream,local_c0,4);
  (*(code *)pEVar2->__vtable[1].GetPos)
            (&pEVar2->m_streamingStructure + *(short *)&pEVar2->__vtable[1].EStream,local_b4,1);
  (*(code *)pEVar2->__vtable[1].GetPos)
            (&pEVar2->m_streamingStructure + *(short *)&pEVar2->__vtable[1].EStream,local_b0,4);
  (*(code *)pEVar2->__vtable[1].GetPos)
            (&pEVar2->m_streamingStructure + *(short *)&pEVar2->__vtable[1].EStream,local_ac,4);
  (*(code *)pEVar2->__vtable[1].GetPos)
            (&pEVar2->m_streamingStructure + *(short *)&pEVar2->__vtable[1].EStream,local_a8,4);
  (*(code *)pEVar2->__vtable[1].GetPos)
            (&pEVar2->m_streamingStructure + *(short *)&pEVar2->__vtable[1].EStream,local_a4,4);
  (*(code *)pEVar2->__vtable[1].GetPos)
            (&pEVar2->m_streamingStructure + *(short *)&pEVar2->__vtable[1].EStream,local_bc,1);
  (*(code *)pEVar2->__vtable[1].GetPos)
            (&pEVar2->m_streamingStructure + *(short *)&pEVar2->__vtable[1].EStream,local_b8,1);
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/animation/e_ranim.h */
    gpTypeInfo_ERAnim =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_6ERAnim_m_typeInfo,New__6ERAnim,0,"ERAnim",&_9EResource_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

ERAnim* ERAnim::New() {
  ERAnim *pEVar1;
  
  pEVar1 = (ERAnim *)__builtin_new(0x90);
  pEVar1 = __6ERAnim(pEVar1);
  return pEVar1;
}

void ERAnim::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (ERAnim *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)&(this->field0_0x0).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].GetTypeName,
               3);
  }
  return;
}

ETypeInfo* ERAnim::GetTypeInfo() {
  return &_6ERAnim_m_typeInfo;
}

char* ERAnim::GetTypeName() {
  return _6ERAnim_m_typeInfo.m_name;
}

u32 ERAnim::GetTypeKey() {
  return _6ERAnim_m_typeInfo.m_key;
}

u16 ERAnim::GetTypeVersion() {
  return _6ERAnim_m_typeInfo.m_version;
}

u16 ERAnim::GetReadVersion() {
  return _6ERAnim_m_typeInfo.m_readVersion;
}

ETypeInfo* ERAnim::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_6ERAnim_m_typeInfo,New__6ERAnim,version,"ERAnim",&_9EResource_m_typeInfo);
  return pEVar1;
}

ERAnim* ERAnim::CreateCopy() {
  ERAnim *pEVar1;
  
  pEVar1 = (ERAnim *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void global constructors keyed to gpTypeInfo_ERAnim() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

// STATUS: NOT STARTED

#include "e_ibezierspline.h"

ETypeInfo *gpTypeInfo_EIBezierSpline = NULL;

__vtbl_ptr_type EIBezierSpline virtual table[31] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIBezierSpline::SafeDelete,
		/* .__delta2 = */ 13400
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIBezierSpline::GetTypeInfo,
		/* .__delta2 = */ 13456
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIBezierSpline::GetTypeName,
		/* .__delta2 = */ 13472
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIBezierSpline::GetTypeKey,
		/* .__delta2 = */ 13488
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIBezierSpline::GetTypeVersion,
		/* .__delta2 = */ 13504
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIBezierSpline::~EIBezierSpline,
		/* .__delta2 = */ 10984
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIBezierSpline::Read,
		/* .__delta2 = */ 11120
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIBezierSpline::Write,
		/* .__delta2 = */ 11464
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::Init,
		/* .__delta2 = */ -5208
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::Update,
		/* .__delta2 = */ -5200
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIBezierSpline::VisibilityTest,
		/* .__delta2 = */ 13272
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIBezierSpline::Draw,
		/* .__delta2 = */ 13064
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::DrawWireFrame,
		/* .__delta2 = */ -5176
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::SetOrient,
		/* .__delta2 = */ -5168
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetUpdatePriority,
		/* .__delta2 = */ -5160
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CollidePointWithInstance,
		/* .__delta2 = */ -5152
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CollideSphereWithInstance,
		/* .__delta2 = */ -5144
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CollideTest,
		/* .__delta2 = */ -5136
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CalcLights3,
		/* .__delta2 = */ -7600
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetBoundSphere,
		/* .__delta2 = */ -8224
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetTriggerList,
		/* .__delta2 = */ -5104
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::ReadInstanceData,
		/* .__delta2 = */ -5096
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::SetLevel,
		/* .__delta2 = */ -5088
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIGameInstance::Damage,
		/* .__delta2 = */ 9184
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIGameInstance::PlatformOrient,
		/* .__delta2 = */ 9192
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIGameInstance::GetAbsolutePosition,
		/* .__delta2 = */ 9200
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIGameInstance::UserFunc,
		/* .__delta2 = */ 8776
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIGameInstance::ExecScript,
		/* .__delta2 = */ 8784
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIBezierSpline::BuildVertList,
		/* .__delta2 = */ 12816
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo EIBezierSpline::m_typeInfo;

EStream& operator<<(EStream &s, EIBezierSpline *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, EIBezierSpline *&pD) {
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
  *pD = (EIBezierSpline *)pStorable;
  return s;
}

EIBezierSpline* EIBezierSpline::EIBezierSpline() {
	TArray<EBSControlPoint> *this;
	EArray *this;
	
  __14EIGameInstance(&this->field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable = (EStorable__vtable *)_vt_14EIBezierSpline;
  __6EArray(&(this->m_ControlPoints).field0_0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  (this->m_ControlPoints).field0_0x0.m_elementSize = 0xc;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.m_instanceFlags = 0x10;
  this->m_NumControlPoints = 0;
  this->m_NumSplines = 0;
  this->m_pGeneratedPoints = (EGEVert *)0x0;
  return this;
}

void EIBezierSpline::~EIBezierSpline(int __in_chrg) {
	TArray<EBSControlPoint> *this;
	int i;
	TArray<EBSControlPoint> *this;
	EArray *this;
	int index;
	TArray<EBSControlPoint> *this;
	EArray *this;
	void *pAddress;
	
  int iVar1;
  
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable = (EStorable__vtable *)_vt_14EIBezierSpline;
  _memmanFree__FPv(this->m_pGeneratedPoints);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  iVar1 = (this->m_ControlPoints).field0_0x0.m_size;
  if (0 < iVar1) {
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  Deallocate__6EArray(&(this->m_ControlPoints).field0_0x0);
                    /* end of inlined section */
  ___14EIGameInstance(&this->field0_0x0,__in_chrg);
  return;
}

void EIBezierSpline::Read(EStream &s) {
	EStream &s;
	TArray<EBSControlPoint> &d;
	u32 size;
	int size;
	TArray<EBSControlPoint> *this;
	TArray<EBSControlPoint> *this;
	EArray *this;
	int i;
	TArray<EBSControlPoint> *this;
	int index;
	int i;
	TArray<EBSControlPoint> *this;
	int index;
	int i;
	int index;
	TArray<EBSControlPoint> *this;
	
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  uint size;
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
  
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  Read__9EInstanceR7EStream((EInstance *)this,s);
                    /* inlined from c:/eor/src2/engine/instance/spline/e_ibezierspline.h */
                    /* end of inlined section */
  if (_14EIBezierSpline_m_typeInfo.m_readVersion == 0) {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&this->m_NumSplines,4);
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,
               &this->m_NumControlPoints,4);
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&size,4);
    uVar1 = size;
    iVar3 = (this->m_ControlPoints).field0_0x0.m_size;
    iVar2 = iVar3 - size;
    if ((int)size < iVar3) {
      do {
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    SetSize__6EArrayii(&(this->m_ControlPoints).field0_0x0,size,0);
    iVar2 = uVar1 - iVar3;
    if (iVar3 < (int)uVar1) {
      do {
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar3 = 0;
    if (0 < (int)size) {
      iVar2 = 0;
      do {
        iVar3 = iVar3 + 1;
        __rs__FR7EStreamR5EVec3(s,(EVec3 *)((int)(this->m_ControlPoints).field0_0x0.m_p + iVar2));
        iVar2 = iVar2 + 0xc;
      } while (iVar3 < (int)size);
    }
  }
  return;
}

void EIBezierSpline::Write(EStream &s) {
	EStream &s;
	unsigned int d;
	unsigned int d;
	TArray<EBSControlPoint> &d;
	TArray<EBSControlPoint> *this;
	EArray *this;
	unsigned int d;
	int i;
	int index;
	TArray<EBSControlPoint> *this;
	
  uint uVar1;
  undefined8 unaff_s0;
  int iVar2;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  uint local_60;
  uint local_5c;
  uint d;
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
  
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  Write__9EInstanceR7EStream((EInstance *)this,s);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  local_60 = this->m_NumSplines;
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&local_60,4);
  local_5c = this->m_NumControlPoints;
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,(uint)&local_60 | 4,4);
  uVar1 = (this->m_ControlPoints).field0_0x0.m_size;
  d = uVar1;
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,(uint)&local_60 | 8,4);
  iVar2 = 0;
  if (0 < (int)uVar1) {
    do {
      uVar1 = uVar1 - 1;
      __ls__FR7EStreamRC5EVec3(s,(EVec3 *)((int)(this->m_ControlPoints).field0_0x0.m_p + iVar2));
      iVar2 = iVar2 + 0xc;
    } while (uVar1 != 0);
  }
                    /* end of inlined section */
  return;
}

EVec3 EIBezierSpline::ComputeSplinePoint(f32 Interpolant) {
	s32 splineNumber;
	f32 u;
	f32 mu;
	float b[4];
	EVec3 vResult;
	u32 indexMod;
	unsigned int index;
	unsigned int index;
	EVec3 *this;
	
  void *pvVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float b [4];
  EVec3 vResult;
  
  iVar10 = (int)Interpolant;
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  else {
    iVar2 = this->m_NumSplines - 1;
    if (iVar2 < iVar10) {
      iVar10 = iVar2;
    }
  }
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
  fVar11 = Interpolant - (float)iVar10;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
  fVar7 = 1.0 - fVar11;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  pvVar1 = (this->m_ControlPoints).field0_0x0.m_p;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  pfVar4 = (float *)((int)pvVar1 + iVar10 * 0x24);
                    /* end of inlined section */
  fVar17 = fVar11 * fVar11 * 3.0 * fVar7;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  pfVar5 = (float *)((int)pvVar1 + iVar10 * 0x24 + 0xc);
                    /* end of inlined section */
  fVar19 = fVar11 * fVar11 * fVar11;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
  fVar15 = fVar7 * fVar7 * fVar7;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
  fVar7 = fVar11 * fVar7 * 3.0 * fVar7;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  pfVar6 = (float *)((iVar10 * 3 + 2) * 0xc + (int)pvVar1);
  fVar16 = *pfVar4;
  fVar12 = pfVar4[1];
  pfVar3 = (float *)((iVar10 * 3 + 3) * 0xc + (int)pvVar1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar11 = *pfVar5;
  fVar18 = pfVar5[1];
  fVar13 = *pfVar6;
  fVar8 = pfVar6[1];
  fVar9 = *pfVar3;
  fVar14 = pfVar3[1];
  (__return_storage_ptr__->field0_0x0).d[2] =
       fVar15 * pfVar4[2] + fVar7 * pfVar5[2] + fVar17 * pfVar6[2] + fVar19 * pfVar3[2];
  (__return_storage_ptr__->field0_0x0).d[0] =
       fVar15 * fVar16 + fVar7 * fVar11 + fVar17 * fVar13 + fVar19 * fVar9;
  (__return_storage_ptr__->field0_0x0).d[1] =
       fVar15 * fVar12 + fVar7 * fVar18 + fVar17 * fVar8 + fVar19 * fVar14;
  return __return_storage_ptr__;
}

u32 EIBezierSpline::AddPoint(EVec3 Point) {
	EBSControlPoint np;
	EBound3 b;
	TArray<EBSControlPoint> *this;
	TArray<EBSControlPoint> *this;
	EArray *this;
	TArray<EBSControlPoint> *this;
	TArray<EBSControlPoint> *this;
	EInstance *this;
	EOTData *this;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int pos;
  uint uVar5;
  uint uVar6;
  ulong *puVar7;
  void *pvVar8;
  ulong in_v0;
  ulong uVar9;
  ulong uVar10;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  float fVar11;
  float fVar12;
  float fVar13;
  EBSControlPoint np;
  EBound3 b;
  undefined auStack_90 [8];
  float local_88;
  undefined auStack_84 [8];
  float local_7c;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
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
  
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  local_20 = (int)unaff_s3;
  uStack_1c = (int)((ulong)unaff_s3 >> 0x20);
  local_30 = (int)unaff_s2;
  uStack_2c = (int)((ulong)unaff_s2 >> 0x20);
                    /* end of inlined section */
  local_40 = (int)unaff_s1;
  uStack_3c = (int)((ulong)unaff_s1 >> 0x20);
  local_10 = (int)unaff_retaddr;
  uStack_c = (int)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  local_50 = (int)unaff_s0;
  uStack_4c = (int)((ulong)unaff_s0 >> 0x20);
  puVar1 = (undefined *)((int)&Point->field0_0x0 + 7);
                    /* end of inlined section */
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)Point & 7;
  np.vPoint.field0_0x0._0_8_ =
       (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
       in_v0 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
       *(ulong *)((int)Point - uVar4) >> uVar4 * 8;
  np.vPoint.field0_0x0.d[2] = (Point->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&np.vPoint.field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar3);
  *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | (ulong)np.vPoint.field0_0x0._0_8_ >> (7 - uVar3) * 8;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  pos = (this->m_ControlPoints).field0_0x0.m_size;
  Insert__6EArrayii(&(this->m_ControlPoints).field0_0x0,pos,1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  pvVar8 = (void *)((int)(this->m_ControlPoints).field0_0x0.m_p + pos * 0xc);
  uVar3 = (int)pvVar8 + 7U & 7;
  puVar7 = (ulong *)(((int)pvVar8 + 7U) - uVar3);
  *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | (ulong)np.vPoint.field0_0x0._0_8_ >> (7 - uVar3) * 8;
  uVar3 = (uint)pvVar8 & 7;
  *(ulong *)((int)pvVar8 - uVar3) =
       np.vPoint.field0_0x0._0_8_ << uVar3 * 8 |
       *(ulong *)((int)pvVar8 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  *(float *)((int)pvVar8 + 8) = np.vPoint.field0_0x0.d[2];
  uVar5 = (this->m_ControlPoints).field0_0x0.m_size;
                    /* end of inlined section */
  this->m_NumControlPoints = uVar5;
  puVar1 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  uVar3 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar3);
  *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | 0UL >> (7 - uVar3) * 8;
  uVar3 = (uint)&b.vMax & 7;
  puVar7 = (ulong *)((int)&b.vMax - uVar3);
  *puVar7 = 0L << uVar3 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  b.vMax.field0_0x0.d[2] = 0.0;
  puVar1 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)&b.vMax & 7;
  puVar2 = (undefined *)((int)&b.vMin.field0_0x0 + 7);
  uVar6 = (uint)puVar2 & 7;
  puVar7 = (ulong *)(puVar2 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 |
            (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 & -1L << (8 - uVar4) * 8 |
            *(ulong *)((int)&b.vMax - uVar4) >> uVar4 * 8) >> (7 - uVar6) * 8;
  b.vMin.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
  this->m_NumSplines = (int)(uVar5 - 1) / 3;
  if (uVar5 == 1) {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
    pvVar8 = (this->m_ControlPoints).field0_0x0.m_p;
    uVar3 = (int)pvVar8 + 7U & 7;
    uVar4 = (uint)pvVar8 & 7;
    uVar10 = (*(long *)(((int)pvVar8 + 7U) - uVar3) << (7 - uVar3) * 8 |
             0xffffffffffffffffU >> (uVar3 + 1) * 8 & 1) & -1L << (8 - uVar4) * 8 |
             *(ulong *)((int)pvVar8 - uVar4) >> uVar4 * 8;
    b.vMin.field0_0x0.d[2] = *(float *)((int)pvVar8 + 8);
    puVar1 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar7 = (ulong *)(puVar1 + -uVar3);
    *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
    uVar3 = (uint)&b.vMax & 7;
    puVar7 = (ulong *)((int)&b.vMax - uVar3);
    *puVar7 = uVar10 << uVar3 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    b.vMax.field0_0x0.d[2] = b.vMin.field0_0x0.d[2];
    puVar1 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)&b.vMax & 7;
    b.vMin.field0_0x0._0_8_ =
         (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
         (long)(int)np.vPoint.field0_0x0.d[2] & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
         -1L << (8 - uVar4) * 8 | *(ulong *)((int)&b.vMax - uVar4) >> uVar4 * 8;
    puVar1 = (undefined *)((int)&b.vMin.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar7 = (ulong *)(puVar1 + -uVar3);
    *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | (ulong)b.vMin.field0_0x0._0_8_ >> (7 - uVar3) * 8;
                    /* end of inlined section */
  }
  else {
                    /* inlined from /eor/src2/engine/instance/e_instance.h */
    fVar12 = (Point->field0_0x0).d[0];
    local_70 = (this->field0_0x0).field0_0x0.m_otd.m_bPos.vMin.field0_0x0.d[0];
    if (fVar12 <= local_70) {
      local_70 = fVar12;
    }
    fVar13 = (Point->field0_0x0).d[1];
    local_6c = (this->field0_0x0).field0_0x0.m_otd.m_bPos.vMin.field0_0x0.d[1];
    if (fVar13 <= local_6c) {
      local_6c = fVar13;
    }
    fVar11 = (Point->field0_0x0).d[2];
    b.vMin.field0_0x0.d[2] = (this->field0_0x0).field0_0x0.m_otd.m_bPos.vMin.field0_0x0.d[2];
    if (fVar11 <= b.vMin.field0_0x0.d[2]) {
      b.vMin.field0_0x0.d[2] = fVar11;
    }
    local_68 = b.vMin.field0_0x0.d[2];
    local_60 = (this->field0_0x0).field0_0x0.m_otd.m_bPos.vMax.field0_0x0.d[0];
    if (local_60 <= fVar12) {
      local_60 = fVar12;
    }
    local_5c = (this->field0_0x0).field0_0x0.m_otd.m_bPos.vMax.field0_0x0.d[1];
    if (local_5c <= fVar13) {
      local_5c = fVar13;
    }
    local_58 = (this->field0_0x0).field0_0x0.m_otd.m_bPos.vMax.field0_0x0.d[2];
    if (local_58 <= fVar11) {
      local_58 = fVar11;
    }
    b.vMin.field0_0x0._0_8_ = CONCAT44(local_6c,local_70);
    puVar1 = auStack_90 + 7;
    uVar3 = (uint)puVar1 & 7;
    *(ulong *)(puVar1 + -uVar3) =
         *(ulong *)(puVar1 + -uVar3) & -1L << (uVar3 + 1) * 8 |
         (ulong)b.vMin.field0_0x0._0_8_ >> (7 - uVar3) * 8;
    local_7c = local_58;
    auStack_90 = (undefined  [8])b.vMin.field0_0x0._0_8_;
    local_88 = b.vMin.field0_0x0.d[2];
    uVar10 = CONCAT44(local_5c,local_60);
    uVar9 = (ulong)(int)local_58;
    puVar1 = auStack_84 + 7;
    uVar3 = (uint)puVar1 & 7;
    *(ulong *)(puVar1 + -uVar3) =
         *(ulong *)(puVar1 + -uVar3) & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
    uVar3 = (uint)auStack_84 & 7;
    puVar7 = (ulong *)(auStack_84 + -uVar3);
    *puVar7 = uVar10 << uVar3 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    puVar1 = (undefined *)((int)&b.vMin.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar7 = (ulong *)(puVar1 + -uVar3);
    *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | (ulong)b.vMin.field0_0x0._0_8_ >> (7 - uVar3) * 8;
    b.vMax.field0_0x0.d[2] = local_7c;
    uVar3 = (uint)(auStack_84 + 7) & 7;
    uVar4 = (uint)auStack_84 & 7;
    uVar10 = (*(long *)(auStack_84 + 7 + -uVar3) << (7 - uVar3) * 8 |
             uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
             *(ulong *)(auStack_84 + -uVar4) >> uVar4 * 8;
    puVar1 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar7 = (ulong *)(puVar1 + -uVar3);
    *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
    uVar3 = (uint)&b.vMax & 7;
    puVar7 = (ulong *)((int)&b.vMax - uVar3);
    *puVar7 = uVar10 << uVar3 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    /* end of inlined section */
  }
  SetBounds__9EInstanceRC7EBound3((EInstance *)this,&b);
  return this->m_NumControlPoints;
}

EVec3 EIBezierSpline::GetControlPoint(u32 PointIndex) {
	u32 adjustedIndex;
	unsigned int index;
	EVec3 *this;
	
  float *pfVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  pfVar1 = (float *)((int)(this->m_ControlPoints).field0_0x0.m_p + (PointIndex - 1) * 0xc);
  (__return_storage_ptr__->field0_0x0).d[0] = *pfVar1;
  (__return_storage_ptr__->field0_0x0).d[1] = pfVar1[1];
  (__return_storage_ptr__->field0_0x0).d[2] = pfVar1[2];
  return __return_storage_ptr__;
}

void EIBezierSpline::BuildVertList() {
	u32 nVerts;
	EGEVert *pV;
	f32 mu;
	u32 v;
	
  EGEVert *pEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  uint uVar2;
  undefined8 unaff_s2;
  uint uVar3;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  float fVar4;
  float Interpolant;
  float fVar5;
  float local_90;
  float local_8c;
  float local_88;
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
  
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  uVar2 = 0;
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  uVar3 = this->m_NumSplines * 0x10;
  pEVar1 = (EGEVert *)_memmanAlloc__FUiUi(this->m_NumSplines * 0x500,0x10);
  this->m_pGeneratedPoints = pEVar1;
  if (uVar3 != 0) {
    fVar4 = 0.0625;
    Interpolant = 0.0;
    do {
      pEVar1->color[3] = 0xff;
      pEVar1->color[2] = 0xff;
      pEVar1->color[1] = 0xff;
      pEVar1->color[0] = 0xff;
      uVar2 = uVar2 + 1;
      fVar5 = Interpolant + fVar4;
      ComputeSplinePoint__14EIBezierSplinef((EVec3 *)&local_90,this,Interpolant);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      (pEVar1->vModel).field0_0x0.d[0] = local_90;
      (pEVar1->vModel).field0_0x0.d[1] = local_8c;
      (pEVar1->vModel).field0_0x0.d[2] = local_88;
      (pEVar1->vModel).field0_0x0.d[3] = 1.0;
      pEVar1 = pEVar1 + 1;
      Interpolant = fVar5;
    } while (uVar2 < uVar3);
  }
  return;
}

void EIBezierSpline::Draw(ERC *prc, u32 renderFlags) {
  ERC__vtable *pEVar1;
  
  if (this->m_pGeneratedPoints != (EGEVert *)0x0) {
    (*(code *)prc->__vtable->Init)((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->LoadMPG,0,0);
    if ((renderFlags & 1) == 0) {
      (*(code *)prc->__vtable->EndCommand)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->BeginCommand,1);
      pEVar1 = prc->__vtable;
    }
    else {
      (*(code *)prc->__vtable->NewEntry)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->Terminate);
      pEVar1 = prc->__vtable;
    }
    (*(code *)pEVar1->ZTest)((int)&prc->m_pdl + (int)*(short *)&pEVar1->RecalcMatrices);
    (*(code *)prc->__vtable->Scissor)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->ClipRect,this->m_pGeneratedPoints,
               this->m_NumSplines << 4);
  }
  return;
}

u32 EIBezierSpline::VisibilityTest(EPortalWindow &win, u32 parentVis) {
  return 0;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/instance/spline/e_ibezierspline.h */
    gpTypeInfo_EIBezierSpline =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_14EIBezierSpline_m_typeInfo,New__14EIBezierSpline,0,"EIBezierSpline",
                    &_14EIGameInstance_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

EIBezierSpline* EIBezierSpline::New() {
  EIBezierSpline *pEVar1;
  
  pEVar1 = (EIBezierSpline *)__builtin_new(0xa4);
  pEVar1 = __14EIBezierSpline(pEVar1);
  return pEVar1;
}

void EIBezierSpline::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EIBezierSpline *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* EIBezierSpline::GetTypeInfo() {
  return &_14EIBezierSpline_m_typeInfo;
}

char* EIBezierSpline::GetTypeName() {
  return _14EIBezierSpline_m_typeInfo.m_name;
}

u32 EIBezierSpline::GetTypeKey() {
  return _14EIBezierSpline_m_typeInfo.m_key;
}

u16 EIBezierSpline::GetTypeVersion() {
  return _14EIBezierSpline_m_typeInfo.m_version;
}

u16 EIBezierSpline::GetReadVersion() {
  return _14EIBezierSpline_m_typeInfo.m_readVersion;
}

ETypeInfo* EIBezierSpline::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_14EIBezierSpline_m_typeInfo,New__14EIBezierSpline,version,"EIBezierSpline",
                      &_14EIGameInstance_m_typeInfo);
  return pEVar1;
}

EIBezierSpline* EIBezierSpline::CreateCopy() {
  EIBezierSpline *pEVar1;
  
  pEVar1 = (EIBezierSpline *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

u32 EIBezierSpline::GetNumControlPoints() {
  return this->m_NumControlPoints;
}

u32 EIBezierSpline::GetNumSplines() {
  return this->m_NumSplines;
}

EVec3 EIBezierSpline::GetStartPoint() {
	EVec3 *this;
	
  float *pfVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  pfVar1 = (float *)(this->m_ControlPoints).field0_0x0.m_p;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (__return_storage_ptr__->field0_0x0).d[0] = *pfVar1;
  (__return_storage_ptr__->field0_0x0).d[1] = pfVar1[1];
  (__return_storage_ptr__->field0_0x0).d[2] = pfVar1[2];
  return __return_storage_ptr__;
}

EVec3 EIBezierSpline::GetEndPoint() {
	unsigned int index;
	EVec3 *this;
	
  float *pfVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  pfVar1 = (float *)((int)(this->m_ControlPoints).field0_0x0.m_p +
                    (this->m_NumControlPoints - 1) * 0xc);
  (__return_storage_ptr__->field0_0x0).d[0] = *pfVar1;
  (__return_storage_ptr__->field0_0x0).d[1] = pfVar1[1];
  (__return_storage_ptr__->field0_0x0).d[2] = pfVar1[2];
  return __return_storage_ptr__;
}

void global constructors keyed to gpTypeInfo_EIBezierSpline() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

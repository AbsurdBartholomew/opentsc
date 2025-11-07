// STATUS: NOT STARTED

#include "iswimpool.h"

struct ERQTable<EISwimPoolWaveType> {
	char *pName;
	EISwimPoolWaveType *pData;
	char **ppRowNames;
	u32 uNumRows;
	u32 uRowSize;
};

float EISwimPool::_m_peakdist = 2.3f;
float EISwimPool::_m_frequency = 2.f;
float EISwimPool::_m_ripplespeed = 2.5f;
float EISwimPool::_m_radius = 5.f;
float EISwimPool::_m_txtreps = 1.f;
float EISwimPool::_m_resolution = 20.f;
float EISwimPool::_m_magnitude = 1.f;
float EISwimPool::_m_duration = 3.f;
float EISwimPool::_m_current = 0.f;
bool EISwimPool::_m_texturing = true;
ETypeInfo *gpTypeInfo_EISwimPool = NULL;

__vtbl_ptr_type EISwimPool::IBaseSimInstance virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &EISwimPool::~EISwimPool,
		/* .__delta2 = */ 21048
	},
	/* [2] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &EISwimPool::SetObjOrient,
		/* .__delta2 = */ 21512
	},
	/* [3] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::SetCursFlags,
		/* .__delta2 = */ 20656
	},
	/* [4] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::GetCursFlags,
		/* .__delta2 = */ 20664
	},
	/* [5] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::GetSimInstance,
		/* .__delta2 = */ 20672
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EISwimPool virtual table[41] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EISwimPool::SafeDelete,
		/* .__delta2 = */ 21968
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EISwimPool::GetTypeInfo,
		/* .__delta2 = */ 22024
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EISwimPool::GetTypeName,
		/* .__delta2 = */ 22040
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EISwimPool::GetTypeKey,
		/* .__delta2 = */ 22056
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EISwimPool::GetTypeVersion,
		/* .__delta2 = */ 22072
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EISwimPool::~EISwimPool,
		/* .__delta2 = */ 21048
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::Read,
		/* .__delta2 = */ -25112
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::Write,
		/* .__delta2 = */ -25208
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
		/* .__pfn = */ &ISimsObjectModel::Update,
		/* .__delta2 = */ -15696
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::VisibilityTest,
		/* .__delta2 = */ -23936
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::Draw,
		/* .__delta2 = */ -5544
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
		/* .__pfn = */ &EIStaticModel::SetOrient,
		/* .__delta2 = */ -24728
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
		/* .__pfn = */ &EIStaticModel::CollidePointWithInstance,
		/* .__delta2 = */ -23320
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::CollideSphereWithInstance,
		/* .__delta2 = */ -22192
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
		/* .__pfn = */ &ISimsObjectModel::CalcLights3,
		/* .__delta2 = */ -8232
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::GetBoundSphere,
		/* .__delta2 = */ -25000
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
		/* .__pfn = */ &ISimsObjectModel::GetDrawMatrix,
		/* .__delta2 = */ -5776
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EISwimPool::Create,
		/* .__delta2 = */ 21416
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::OrentSubObject,
		/* .__delta2 = */ 17496
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::SetCarryOrient,
		/* .__delta2 = */ 17552
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::CreateShadow,
		/* .__delta2 = */ -8400
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::InsertSubModelsInHouse,
		/* .__delta2 = */ -15880
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::RemoveSubModelsFromHouse,
		/* .__delta2 = */ -9360
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::PropigateFlagsToSubModels,
		/* .__delta2 = */ -15800
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::GetShadow,
		/* .__delta2 = */ 10808
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::SetOutOfWorld,
		/* .__delta2 = */ -8248
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::StartBurp,
		/* .__delta2 = */ -5792
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::TestForCursorOverlap,
		/* .__delta2 = */ 18928
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::GetObCenter,
		/* .__delta2 = */ 20040
	},
	/* [37] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::SetPlacementError,
		/* .__delta2 = */ 17456
	},
	/* [38] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::IsMultiTilePart,
		/* .__delta2 = */ 6952
	},
	/* [39] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::OrentSubObject,
		/* .__delta2 = */ -1672
	},
	/* [40] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo EISwimPool::m_typeInfo;

EISwimPoolWaveType* GetWaveData(ESimBoneIdx bone) {
	ERQTable<EISwimPoolWaveType> *pTab;
	int nrows;
	EISwimPoolWaveType *pData;
	ERQTable<EISwimPoolWaveType> *pTable;
	int i;
	
  void *pvVar1;
  EISwimPoolWaveType *pEVar2;
  EISwimPoolWaveType *pEVar3;
  int iVar4;
  int iVar5;
  
  if (_globals.m_waveDataTable != (ERQuickdata *)0x0) {
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
    pvVar1 = getTable__11ERQuickdataPCc(_globals.m_waveDataTable,"EISwimPoolWaveType");
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
                    /* end of inlined section */
      iVar5 = _o_cd;
    }
    else {
      iVar5 = *(int *)((int)pvVar1 + 0xc);
    }
    iVar4 = 0;
    pEVar3 = *(EISwimPoolWaveType **)((int)pvVar1 + 4);
    pEVar2 = pEVar3;
    if (0 < iVar5) {
      do {
        iVar4 = iVar4 + 1;
        if (pEVar2->m_id == bone) {
          return pEVar3;
        }
        pEVar3 = pEVar3 + 1;
        pEVar2 = pEVar2 + 1;
      } while (iVar4 < iVar5);
    }
  }
  return (EISwimPoolWaveType *)0x0;
}

EStream& operator<<(EStream &s, EISwimPool *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, EISwimPool *&pD) {
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
  *pD = (EISwimPool *)pStorable;
  return s;
}

EISwimPool* EISwimPool::EISwimPool() {
  __25ISimsMultiTileObjectModel(&this->field0_0x0);
  *(__vtbl_ptr_type **)&(this->field0_0x0).field0_0x0.field0_0x0.field_0x130 =
       _vt_10EISwimPool_16IBaseSimInstance;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EStorable__vtable *)_vt_10EISwimPool;
  __12EIWaterPatch(&this->m_waterPatch);
  return this;
}

void EISwimPool::~EISwimPool(int __in_chrg) {
	void *p;
	
  *(__vtbl_ptr_type **)&(this->field0_0x0).field0_0x0.field0_0x0.field_0x130 =
       _vt_10EISwimPool_16IBaseSimInstance;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EStorable__vtable *)_vt_10EISwimPool;
  ___12EIWaterPatch(&this->m_waterPatch,2);
  ___25ISimsMultiTileObjectModel(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/isiminstance.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void StartWaveInPool(ISimInstance *pPool, ESimBoneIdx waveType, EVec3 &vPoint) {
  EISwimPool *this;
  
  if ((pPool != (ISimInstance *)0x0) &&
     (this = (EISwimPool *)
             DynamicCast__9EStorableP9ETypeInfo((EStorable *)pPool,&_10EISwimPool_m_typeInfo),
     this != (EISwimPool *)0x0)) {
    StartWaveInPool__10EISwimPoolRC5EVec311ESimBoneIdx(this,vPoint,waveType);
  }
  return;
}

void EISwimPool::StartWaveInPool(EVec3 &vPoint, ESimBoneIdx waveType) {
	EISwimPoolWaveType *pData;
	EVec2 vPos;
	EVec3 *this;
	EVec3 *this;
	
  EISwimPoolWaveType *pEVar1;
  EIWaterPatch *this_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  EVec2 vPos;
  float local_50;
  float local_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  pEVar1 = GetWaveData__F11ESimBoneIdx(waveType);
  this_00 = &this->m_waterPatch;
  if (pEVar1 != (EISwimPoolWaveType *)0x0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_4c = (vPoint->field0_0x0).d[1];
    local_50 = (vPoint->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    SetRadius__12EIWaterPatchf(this_00,pEVar1->m_radius);
    SetFrequency__12EIWaterPatchf(this_00,pEVar1->m_frequency);
    SetPeakDistance__12EIWaterPatchf(this_00,pEVar1->m_peakdist);
    SetRippleSpeed__12EIWaterPatchf(this_00,pEVar1->m_ripplespeed);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    StartWave__12EIWaterPatchG5EVec2ff
              (this_00,(EVec2 *)&local_50,pEVar1->m_magnitude,pEVar1->m_duration);
  }
  return;
}

void EISwimPool::Create(cXObject *pXOb, EHouse *pEHouse) {
	EHouse *this;
	
  Create__25ISimsMultiTileObjectModelP8cXObjectP6EHouse
            (&this->field0_0x0,(cXObject__53_2557 *)pXOb,pEHouse);
  InsertInstance__7ERLevelP9EInstanceT1
            (pEHouse->m_pLevel,&(this->m_waterPatch).field0_0x0,(EInstance *)0x0);
  SetShaders__12EIWaterPatchUiUi(&this->m_waterPatch,0x3b45b5e5,0x27286b20);
  return;
}

void EISwimPool::SetObjOrient() {
  SetObjOrient__25ISimsMultiTileObjectModel(&this->field0_0x0);
  SetupWater__10EISwimPool(this);
  return;
}

void EISwimPool::SetupWater() {
	EVec3 vCenter;
	EInstance *this;
	EOTData *this;
	EVec3 &v;
	
  EIWaterPatch *this_00;
  float fVar1;
  float fVar2;
  EVec3 vCenter;
  
  this_00 = &this->m_waterPatch;
  SetRadius__12EIWaterPatchf(this_00,_10EISwimPool__m_radius);
  SetFrequency__12EIWaterPatchf(this_00,_10EISwimPool__m_frequency);
  SetPeakDistance__12EIWaterPatchf(this_00,_10EISwimPool__m_peakdist);
  SetRippleSpeed__12EIWaterPatchf(this_00,_10EISwimPool__m_ripplespeed);
  SetTxtReps__12EIWaterPatchf(this_00,_10EISwimPool__m_txtreps);
  SetResolution__12EIWaterPatchf(this_00,_10EISwimPool__m_resolution);
  SetCurrentSpeed__12EIWaterPatchff(this_00,_10EISwimPool__m_current,0.0);
                    /* inlined from /eor/src2/engine/collision/e_overlaptrackertypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_otd.m_bPos.vMin.
          field0_0x0.d[0];
  fVar2 = (((EVec3 *)
           ((int)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_otd.m_bPos + 0xc)
           )->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vCenter.field0_0x0.d[1] =
       (*(float *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_otd.m_bPos
                  + 4) +
       *(float *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_otd.m_bPos
                 + 0x10)) * 0.5;
  vCenter.field0_0x0.d[0] = (fVar1 + fVar2) * 0.5;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  vCenter.field0_0x0.d[2] = -0.42;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  SetPos__12EIWaterPatchRC5EVec3ff
            (this_00,&vCenter,fVar2 - fVar1,
             *(float *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_otd.
                              m_bPos + 0x10) -
             *(float *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_otd.
                              m_bPos + 4));
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/iswimpool.h */
    gpTypeInfo_EISwimPool =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_10EISwimPool_m_typeInfo,New__10EISwimPool,0,"EISwimPool",
                    &_25ISimsMultiTileObjectModel_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

EISwimPool* EISwimPool::New() {
	void *result;
	
  EISwimPool *pEVar1;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/isiminstance.h */
  pEVar1 = (EISwimPool *)_memmanAlloc__FUiUi(0x470,0x10);
  memset(pEVar1,0,0x470);
                    /* end of inlined section */
  pEVar1 = __10EISwimPool(pEVar1);
  return pEVar1;
}

void EISwimPool::SafeDelete() {
  EStorable EVar1;
  
  if (this != (EISwimPool *)0x0) {
    EVar1.__vtable =
         (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
    (**(code **)((int)(EVar1.__vtable + 1) + 0x10))
              ((int)(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_otd.m_minPos +
               (int)*(short *)((int)(EVar1.__vtable + 1) + 0xc) + 0xffffffacU,3);
  }
  return;
}

ETypeInfo* EISwimPool::GetTypeInfo() {
  return &_10EISwimPool_m_typeInfo;
}

char* EISwimPool::GetTypeName() {
  return _10EISwimPool_m_typeInfo.m_name;
}

u32 EISwimPool::GetTypeKey() {
  return _10EISwimPool_m_typeInfo.m_key;
}

u16 EISwimPool::GetTypeVersion() {
  return _10EISwimPool_m_typeInfo.m_version;
}

u16 EISwimPool::GetReadVersion() {
  return _10EISwimPool_m_typeInfo.m_readVersion;
}

ETypeInfo* EISwimPool::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_10EISwimPool_m_typeInfo,New__10EISwimPool,version,"EISwimPool",
                      &_25ISimsMultiTileObjectModel_m_typeInfo);
  return pEVar1;
}

EISwimPool* EISwimPool::CreateCopy() {
  EISwimPool *pEVar1;
  
  pEVar1 = (EISwimPool *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void EISwimPool::InitResForSwimPool() {
  return;
}

void EISwimPool::CleanupResForSwimPool() {
  return;
}

void global constructors keyed to EISwimPool::_m_peakdist() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

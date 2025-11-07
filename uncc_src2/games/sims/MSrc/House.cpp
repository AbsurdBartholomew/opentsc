// STATUS: NOT STARTED

#include "House.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb2099;
	__vtbl_ptr_type *$vf888;
	
	cXObject& operator=();
	cXObject();
protected:
	cXObject();
	/* vtable[1] */ virtual cXObject(cXObject*, int, void);
	void setObjectImpl();
	void setPersonImpl();
	void setMTObjectImpl();
	void setCursorObjectImpl();
	void setPortalImpl();
public:
	/* vtable[1] */ virtual void Kill();
	/* vtable[2] */ virtual Int GetNumAttr();
	/* vtable[3] */ virtual float CalcDistance();
	/* vtable[4] */ virtual float CalcShortDistance();
	/* vtable[5] */ virtual float CalcShortDistance();
	/* vtable[6] */ virtual SpriteSlot& GetSpriteSlot();
	/* vtable[7] */ virtual void SetHilite(cXObject*, int, void);
	/* vtable[8] */ virtual Int GetHilite();
	/* vtable[9] */ virtual void SetMiscFlag();
	/* vtable[10] */ virtual bool GetMiscFlag();
	/* vtable[11] */ virtual void UpdateSimFlags();
	/* vtable[12] */ virtual void Dirty();
	/* vtable[13] */ virtual void SetRenderLayer();
	/* vtable[14] */ virtual int GetDynamicToStaticLatency();
	/* vtable[15] */ virtual RenderLayer GetRenderLayer();
	/* vtable[16] */ virtual bool IsRenderingRoot();
	/* vtable[17] */ virtual RECT& GetLastDamage();
	/* vtable[18] */ virtual void SetLastDamage();
	/* vtable[19] */ virtual void ResetDamage();
	/* vtable[20] */ virtual bool IsEmissive();
	/* vtable[21] */ virtual bool IsBeingDraggedAround();
	/* vtable[22] */ virtual void CenterHouseViewOnMe();
	/* vtable[23] */ virtual void SetDrawLabel();
	/* vtable[24] */ virtual bool IsSpriteVisible();
	/* vtable[25] */ virtual bool RunTree();
	/* vtable[26] */ virtual bool RunTree();
	/* vtable[27] */ virtual bool RunTree();
	/* vtable[28] */ virtual void ParseUIString();
	static bool GetFreeWill(/* parameters unknown */);
	static void SetFreeWill(/* parameters unknown */);
	static bool GetAutoCenter(/* parameters unknown */);
	static void SetAutoCenter(/* parameters unknown */);
	static bool GetAutoReset(/* parameters unknown */);
	static void SetAutoReset(/* parameters unknown */);
	/* vtable[29] */ virtual void Error();
	/* vtable[30] */ virtual void HandleError();
	/* vtable[31] */ virtual void Turn();
	/* vtable[32] */ virtual void Pickup();
	/* vtable[33] */ virtual bool CanPlace();
	/* vtable[34] */ virtual void Place();
	/* vtable[35] */ virtual bool IsPartOfMe();
	/* vtable[36] */ virtual bool UserCanPlace();
	/* vtable[37] */ virtual void UserPlace();
	/* vtable[38] */ virtual bool UserCanPickup();
	/* vtable[39] */ virtual void UserPickup();
	/* vtable[40] */ virtual bool UserCanDelete();
	/* vtable[41] */ virtual bool FindGoodLocation();
	/* vtable[42] */ virtual void GetPlacementInfo();
	/* vtable[43] */ virtual bool IsInWorld();
	/* vtable[44] */ virtual bool TestIntersection();
	/* vtable[45] */ virtual void ForceLocation();
	/* vtable[46] */ virtual ObjFnTable* GetFnTable();
	/* vtable[47] */ virtual SInt16 GetTreeID();
	/* vtable[48] */ virtual void SetLevel(cXObject*, int, void);
	/* vtable[49] */ virtual bool IsOccupied();
	/* vtable[50] */ virtual void SetData();
	/* vtable[51] */ virtual void SetTemp();
	/* vtable[52] */ virtual void SetAttr();
	/* vtable[53] */ virtual ObjectProbe* GetObjectProbe();
	/* vtable[54] */ virtual void SetObjectProbe();
	/* vtable[55] */ virtual cXObject* GetInteractionLeader();
	/* vtable[56] */ virtual Int GetFrontFaceDirection();
	/* vtable[57] */ virtual ObjectFolder* GetFolder();
	/* vtable[58] */ virtual bool SimIndependent();
	/* vtable[59] */ virtual bool SimEnabled();
	/* vtable[60] */ virtual void EnableSim();
	/* vtable[61] */ virtual int GetIdleStatus();
	/* vtable[62] */ virtual void SetIdleStatus(cXObject*, int, void);
	/* vtable[63] */ virtual void ClearIdleStatus();
	/* vtable[64] */ virtual FTileRect& GetRect();
	/* vtable[65] */ virtual SInt16 GetData();
	/* vtable[66] */ virtual SInt16 GetTemp();
	/* vtable[67] */ virtual SInt16 GetAttr();
	/* vtable[68] */ virtual ObjectModule* GetModule();
	/* vtable[69] */ virtual AnimTable* GetAdultAnimTable();
	/* vtable[70] */ virtual AnimTable* GetChildAnimTable();
	/* vtable[71] */ virtual bool HideForCutaway();
	/* vtable[72] */ virtual TileWallsSegment GetRequiredSegment();
	/* vtable[73] */ virtual Int CountObjectSlots();
	/* vtable[74] */ virtual ObjectSlot* GetObjectSlot();
	/* vtable[75] */ virtual cXObject* GetContainedObject();
	/* vtable[76] */ virtual float GetSlotHeight();
	/* vtable[77] */ virtual cXObject* GetContainer();
	/* vtable[78] */ virtual bool IsContained();
	/* vtable[79] */ virtual SInt16 GetContainerID();
	/* vtable[80] */ virtual SInt16 GetContainedSlotNum();
	/* vtable[81] */ virtual cXObject* GetNextObjectSibling();
	/* vtable[82] */ virtual cXObject* GetPrevObjectSibling();
	/* vtable[83] */ virtual short unsigned int GetRoom();
	/* vtable[84] */ virtual ObjDefinition* GetDef();
	/* vtable[85] */ virtual SInt16 GetType();
	/* vtable[86] */ virtual void GetTypeName();
	/* vtable[87] */ virtual SInt16 GetID();
	/* vtable[88] */ virtual void GetLocation();
	/* vtable[89] */ virtual FTilePt& GetLocation();
	/* vtable[90] */ virtual int GetLevel();
	/* vtable[91] */ virtual CTilePt GetCTilePt();
	/* vtable[92] */ virtual TreeTable* GetTreeTab();
	/* vtable[93] */ virtual ObjSelector* GetSelector();
	/* vtable[94] */ virtual Behavior* GetBehavior();
	/* vtable[95] */ virtual iResFile* GetSelFile();
	static Int GetPersonWidth(/* parameters unknown */);
	/* vtable[96] */ virtual Int GetTileWidth();
	/* vtable[97] */ virtual bool IsMultiTile();
	/* vtable[98] */ virtual StdPrm GetFlags();
	/* vtable[99] */ virtual SInt16 GetWallPlacementFlags();
	/* vtable[100] */ virtual RelMatrix& GetRelMatrix();
	/* vtable[101] */ virtual cXObject* GetObstacleAtLocation();
	/* vtable[102] */ virtual int GetNumRoutingSlots();
	/* vtable[103] */ virtual RoutingSlot& GetRoutingSlot();
	/* vtable[104] */ virtual SInt16 GetCurrentValue();
	/* vtable[105] */ virtual SInt16 GetSize();
	/* vtable[106] */ virtual cSimulator* GetSim();
	/* vtable[107] */ virtual void GetErrorString();
	/* vtable[108] */ virtual Int GetAgeInMinutes();
	/* vtable[109] */ virtual bool CanChooseAutonomously();
	/* vtable[110] */ virtual int GetBuildModeType();
	/* vtable[111] */ virtual bool IsSupport();
	/* vtable[112] */ virtual bool ShouldAutoRotate();
	/* vtable[113] */ virtual bool CanContributeLight();
	/* vtable[114] */ virtual Int GetLightingContribution();
	/* vtable[115] */ virtual ObjectLightSource GetObjectLightSource();
	/* vtable[116] */ virtual bool IsDeletedByEvict();
	/* vtable[117] */ virtual bool IsFromCatalog();
	/* vtable[118] */ virtual bool IsBroken();
	/* vtable[119] */ virtual bool IsDirty();
	/* vtable[120] */ virtual bool IsBurning();
	/* vtable[121] */ virtual bool CanBurn();
	/* vtable[122] */ virtual bool IsFireproof();
	/* vtable[123] */ virtual bool HasZeroExtent();
	/* vtable[124] */ virtual bool CanIntersectPeople();
	/* vtable[125] */ virtual bool IsChair();
	/* vtable[126] */ virtual cXObject* GetObjectFromID();
	/* vtable[127] */ virtual cXObject* GetNext();
	/* vtable[128] */ virtual cXObject* GetFirst();
	/* vtable[129] */ virtual Int GetWallBlockFlags();
	static Int GetWallBlockFlagsAtTile(/* parameters unknown */);
	/* vtable[130] */ virtual void ReconStream();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[132] */ virtual void ReconSlots();
	/* vtable[133] */ virtual void ReconHeader();
	/* vtable[134] */ virtual void Backtrace();
	/* vtable[135] */ virtual char* GetName();
	/* vtable[136] */ virtual int GetDebugName();
	/* vtable[137] */ virtual void AdvanceGraphic();
	/* vtable[138] */ virtual cXObjectImpl* GetObjectImplementation();
	cXObjectImpl* CAST_IMPL();
};

struct SimpleReconObject<HouseImpl> : ReconObject {
private:
	HouseImpl *fObj;
	SInt32 fType;
	
public:
	SimpleReconObject<HouseImpl>& operator=();
	SimpleReconObject();
	/* vtable[1] */ virtual SimpleReconObject(SimpleReconObject<HouseImpl>*, int, void);
	SimpleReconObject();
	/* vtable[2] */ virtual void DoStream(ReconBuffer *r, SInt32 version);
	/* vtable[3] */ virtual SInt32 GetType();
};

SInt16 kSimulatorResourceID = 1;
SInt16 kHouseResourceID = 1;
SInt32 kSimulatorResType = 1397312841;
SInt32 kHouseResType = 1213158739;

__vtbl_ptr_type SimpleReconObject<HouseImpl> virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<HouseImpl>::~SimpleReconObject,
		/* .__delta2 = */ 2104
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<HouseImpl>::DoStream,
		/* .__delta2 = */ 2136
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<HouseImpl>::GetType,
		/* .__delta2 = */ 2184
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type SimpleReconObject<cSimulator> virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<cSimulator>::~SimpleReconObject,
		/* .__delta2 = */ -31568
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<cSimulator>::DoStream,
		/* .__delta2 = */ -31536
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<cSimulator>::GetType,
		/* .__delta2 = */ -31488
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type HouseImpl::Commander virtual table[4] = {
	/* [0] = */ {
		/* .__delta = */ -4,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -4,
		/* .__index = */ 0,
		/* .__pfn = */ &HouseImpl::~HouseImpl,
		/* .__delta2 = */ -4272
	},
	/* [2] = */ {
		/* .__delta = */ -4,
		/* .__index = */ 0,
		/* .__pfn = */ &HouseImpl::DoCommand,
		/* .__delta2 = */ -2040
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type HouseImpl virtual table[19] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &HouseImpl::~HouseImpl,
		/* .__delta2 = */ -4272
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &HouseImpl::Initialize,
		/* .__delta2 = */ -4144
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &HouseImpl::Destroy,
		/* .__delta2 = */ -3688
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &HouseImpl::SetLotSize,
		/* .__delta2 = */ -3496
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &HouseImpl::GetFirstObject,
		/* .__delta2 = */ -2088
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &HouseImpl::GetFamily,
		/* .__delta2 = */ 2000
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &HouseImpl::GetDescription,
		/* .__delta2 = */ 2008
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &HouseImpl::SetDescription,
		/* .__delta2 = */ 2016
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &HouseImpl::GetHouseStats,
		/* .__delta2 = */ -640
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &HouseImpl::AddLayoutTick,
		/* .__delta2 = */ -736
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &HouseImpl::DoCommand,
		/* .__delta2 = */ -2040
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &HouseImpl::DoStream,
		/* .__delta2 = */ -984
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &HouseImpl::EnterLiveMode,
		/* .__delta2 = */ -1192
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &HouseImpl::PrepareForBudgetWindow,
		/* .__delta2 = */ -1064
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &HouseImpl::GetSizeScoreCurve,
		/* .__delta2 = */ 2048
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &HouseImpl::GetFurnishingsScoreCurve,
		/* .__delta2 = */ 2056
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &HouseImpl::SetFamilyToNull,
		/* .__delta2 = */ 2064
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type House virtual table[19] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &House::~House,
		/* .__delta2 = */ 1952
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

House* House::CreateInstance() {
  HouseImpl *pHVar1;
  
  pHVar1 = (HouseImpl *)__builtin_new(0x54);
  pHVar1 = __9HouseImpl(pHVar1);
  return &pHVar1->field0_0x0;
}

void House::DestroyInstance(House *pInstance) {
  if (pInstance != (House *)0x0) {
    (*(code *)pInstance->__vtable->Destroy)
              ((int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Initialize,3);
  }
  return;
}

HouseImpl* HouseImpl::HouseImpl() {
	House *this;
	
  undefined4 *puVar1;
  int iVar2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/House.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (House__vtable *)_vt_5House;
  __9Commander((Commander *)&this->field_0x4);
  *(__vtbl_ptr_type **)&this->field_0x10 = _vt_9HouseImpl_9Commander;
  (this->field0_0x0).__vtable = (House__vtable *)_vt_9HouseImpl;
  __7BString(&this->fHouseDesc);
  puVar1 = (undefined4 *)&this->field_0x1c;
  iVar2 = 4;
  do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/HouseImpl.h */
    *puVar1 = 0;
                    /* end of inlined section */
    iVar2 = iVar2 + -1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/HouseImpl.h */
    puVar1[1] = 0;
                    /* end of inlined section */
    puVar1 = puVar1 + 2;
  } while (iVar2 != -1);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/HouseImpl.h */
  (this->fDayRoute).fTotalTime = 0;
  (this->fDayRoute).fRouteTime = 0;
                    /* end of inlined section */
  this->fFamily = (Family *)0x0;
  this->fSizeScoreCurve = (PiecewiseFn *)0x0;
  this->fFurnishingsScoreCurve = (PiecewiseFn *)0x0;
  return this;
}

void HouseImpl::~HouseImpl(int __in_chrg) {
	House *this;
	int __in_chrg;
	void *pAddress;
	
  *(__vtbl_ptr_type **)&this->field_0x10 = _vt_9HouseImpl_9Commander;
  (this->field0_0x0).__vtable = (House__vtable *)_vt_9HouseImpl;
  Destroy__9HouseImpl(this);
  ___7BString(&this->fHouseDesc,2);
  ___9Commander((Commander *)&this->field_0x4,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/House.h */
  (this->field0_0x0).__vtable = (House__vtable *)_vt_5House;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

void HouseImpl::Initialize() {
	AUTOPTR<StringSet> houseScoreStrings;
	
  short sVar1;
  StringSet__vtable *pSVar2;
  Family *pFVar3;
  PiecewiseFn *pPVar4;
  StringSet *pInstance;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  AUTOPTR_StringSet_ houseScoreStrings;
  
  CreateTheWorld__Fv();
  _5Globs_pSimulator = CreateInstance__10cSimulator();
  _5Globs_pObjectModule = CreateInstance__12ObjectModule();
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pSimulator->__vtable->SetGlobal)
            ((int)&_5Globs_pSimulator->__vtable +
             (int)*(short *)&_5Globs_pSimulator->__vtable->GetGlobal);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pObjectModule->__vtable->Load)
            ((int)&_5Globs_pObjectModule->__vtable +
             (int)*(short *)&_5Globs_pObjectModule->__vtable->Save);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  pFVar3 = (Family *)
           (*(code *)_5Globs_pNeighborhood->__vtable[1].GetHouseNumberForLevel)
                     ((int)&_5Globs_pNeighborhood->__vtable +
                      (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].Save,0);
  this->fFamily = pFVar3;
  _5Globs_pRoomManager = CreateInstance__11RoomManager();
  pPVar4 = (PiecewiseFn *)__builtin_new(0x10);
  pPVar4 = __11PiecewiseFn(pPVar4);
  this->fSizeScoreCurve = pPVar4;
  SetMaxPoints__11PiecewiseFni(pPVar4,8);
  pPVar4 = (PiecewiseFn *)__builtin_new(0x10);
  pPVar4 = __11PiecewiseFn(pPVar4);
  this->fFurnishingsScoreCurve = pPVar4;
  SetMaxPoints__11PiecewiseFni(pPVar4,8);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  DestroyInstance__9StringSetP9StringSet((StringSet *)0x0);
  pInstance = CreateInstance__9StringSet();
                    /* end of inlined section */
  pSVar2 = pInstance->__vtable;
  sVar1 = *(short *)&pSVar2[1].SetString;
  uVar6 = (*(code *)_5Globs_pObjectFolder->__vtable->GetNextSelector)
                    ((int)&_5Globs_pObjectFolder->__vtable +
                     (int)*(short *)&_5Globs_pObjectFolder->__vtable->CountSelectors);
  lVar7 = (*(code *)pSVar2[1].InsertString)((int)&pInstance->__vtable + (int)sVar1,uVar6,0x1f9,0);
  if (lVar7 == 0) {
                    /* end of inlined section */
    pcVar5 = (char *)(*(code *)pInstance->__vtable->RemoveString)
                               ((int)&pInstance->__vtable +
                                (int)*(short *)&pInstance->__vtable->InsertString,1,
                                0xffffffffffffffff);
    AddPointsFromText__11PiecewiseFnPCc(this->fSizeScoreCurve,pcVar5);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
    pcVar5 = (char *)(*(code *)pInstance->__vtable->RemoveString)
                               ((int)&pInstance->__vtable +
                                (int)*(short *)&pInstance->__vtable->InsertString,2,
                                0xffffffffffffffff);
    AddPointsFromText__11PiecewiseFnPCc(this->fFurnishingsScoreCurve,pcVar5);
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  DestroyInstance__9StringSetP9StringSet(pInstance);
  return;
}

void HouseImpl::Destroy() {
  PiecewiseFn *this_00;
  
  if (this->fFurnishingsScoreCurve == (PiecewiseFn *)0x0) {
    this_00 = this->fSizeScoreCurve;
  }
  else {
    ___11PiecewiseFn(this->fFurnishingsScoreCurve,3);
    this_00 = this->fSizeScoreCurve;
  }
  this->fFurnishingsScoreCurve = (PiecewiseFn *)0x0;
  if (this_00 != (PiecewiseFn *)0x0) {
    ___11PiecewiseFn(this_00,3);
  }
  this->fSizeScoreCurve = (PiecewiseFn *)0x0;
  DestroyInstance__11RoomManagerP11RoomManager(_5Globs_pRoomManager);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  _5Globs_pRoomManager = (RoomManager *)0x0;
  if (_5Globs_pObjectModule != (ObjectModule *)0x0) {
                    /* end of inlined section */
    (*(code *)_5Globs_pObjectModule->__vtable->GetFolder)
              ((int)&_5Globs_pObjectModule->__vtable +
               (int)*(short *)&_5Globs_pObjectModule->__vtable->PostLoad);
    DestroyInstance__12ObjectModuleP12ObjectModule(_5Globs_pObjectModule);
    _5Globs_pObjectModule = (ObjectModule *)0x0;
  }
                    /* end of inlined section */
  DestroyInstance__10cSimulatorP10cSimulator(_5Globs_pSimulator);
  _5Globs_pSimulator = (cSimulator *)0x0;
  this->fFamily = (Family *)0x0;
  DestroyTheWorld__Fv();
  return;
}

void HouseImpl::SetLotSize(Int size) {
  int iVar1;
  RoomManager *pRVar2;
  
  if (3 < size) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    iVar1 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                      ((int)&_5Globs_pFixedWorld->__vtable +
                       (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
    if (size != iVar1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pFixedWorld->__vtable->OutOfGrid)
                ((int)&_5Globs_pFixedWorld->__vtable +
                 (int)*(short *)&_5Globs_pFixedWorld->__vtable->OutOfBounds,size,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pObjectModule->__vtable->GetPersonByGUID)
                ((int)&_5Globs_pObjectModule->__vtable +
                 (int)*(short *)&_5Globs_pObjectModule->__vtable->GetObjectByGUID);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pFixedWorld->__vtable[1].SetVertexConfig)
                ((int)&_5Globs_pFixedWorld->__vtable +
                 (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].GetVertexConfig,0);
      pRVar2 = GetRoomManager__11RoomManager();
      (*(code *)pRVar2->__vtable[1].GetHouse)
                ((int)&pRVar2->__vtable + (int)*(short *)&pRVar2->__vtable[1].RoomCount);
      GlobalDispatch__Fsi(0x104,size);
    }
  }
  return;
}

ErrType HouseImpl::LoadFile(iResFile *file, SInt32 *pVersion) {
	SInt32 version;
	Sint16 gameEdition;
	SInt32 houseVersion;
	
  House__vtable *pHVar1;
  int iVar2;
  Family *pFVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  int version;
  int houseVersion;
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
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* end of inlined section */
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  uVar4 = (*(code *)_5Globs_pSimulator->__vtable->Resume)
                    ((int)&_5Globs_pSimulator->__vtable +
                     (int)*(short *)&_5Globs_pSimulator->__vtable->Pause,0x14);
  iVar2 = ReconLoadObject__H1Z10cSimulator_PX01P8iResFileisPi_i
                    (_5Globs_pSimulator,(iResFile__0_3211 *)file,kSimulatorResType,
                     kSimulatorResourceID,&version);
  if (iVar2 != 0) {
                    /* end of inlined section */
    ReconLoadObject__H1Z10cSimulator_PX01P8iResFileisPi_i
              (_5Globs_pSimulator,(iResFile__0_3211 *)file,kSimulatorResType,0,(int *)0x0);
    version = 0;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pSimulator->__vtable->IsStopped)
            ((int)&_5Globs_pSimulator->__vtable +
             (int)*(short *)&_5Globs_pSimulator->__vtable->IsPaused,0x14,uVar4);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  lVar5 = (*(code *)_5Globs_pSimulator->__vtable->Resume)
                    ((int)&_5Globs_pSimulator->__vtable +
                     (int)*(short *)&_5Globs_pSimulator->__vtable->Pause,0x17);
  pHVar1 = (this->field0_0x0).__vtable;
  lVar6 = 0x40;
  if (lVar5 != 0) {
    lVar6 = lVar5;
  }
  (*(code *)pHVar1->GetHouseStats)
            ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pHVar1->SetDescription,lVar6);
  __as__7BStringPCc(&this->fHouseDesc,"");
  ReconLoadObject__H1Z9HouseImpl_PX01P8iResFileisPi_i
            (this,file,kHouseResType,kHouseResourceID,(int *)((uint)&version | 4));
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pSimulator->__vtable->IsStopped)
            ((int)&_5Globs_pSimulator->__vtable +
             (int)*(short *)&_5Globs_pSimulator->__vtable->IsPaused,9,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  pFVar3 = (Family *)
           (*(code *)_5Globs_pNeighborhood->__vtable[1].GetHouseNumberForLevel)
                     ((int)&_5Globs_pNeighborhood->__vtable +
                      (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].Save,0);
  this->fFamily = pFVar3;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pObjectModule->__vtable->GetSim)
            ((int)&_5Globs_pObjectModule->__vtable +
             (int)*(short *)&_5Globs_pObjectModule->__vtable->PreviewAnimation);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pFixedWorld->__vtable->GetMaxSize)
            ((int)&_5Globs_pFixedWorld->__vtable +
             (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetSize,file,version);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pObjectModule->__vtable->AddToKillQueue)
            ((int)&_5Globs_pObjectModule->__vtable +
             (int)*(short *)&_5Globs_pObjectModule->__vtable->KillObject,file);
  GlobalDispatch__Fsi(0x92,(int)file);
  GlobalDispatch__Fsi(0x83,0);
  GlobalDispatch__Fsi(0x90,0);
  GlobalDispatch__Fsi(0xe7,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  iVar2 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                    ((int)&_5Globs_pSimulator->__vtable +
                     (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue);
  GlobalDispatch__Fsi(0xd9,iVar2);
  GlobalDispatch__Fsi(0xdc,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pRoomManager->__vtable[1].GetHouse)
            ((int)&_5Globs_pRoomManager->__vtable +
             (int)*(short *)&_5Globs_pRoomManager->__vtable[1].RoomCount);
  if (pVersion != (int *)0x0) {
    *pVersion = version;
  }
  return 0;
}

void HouseImpl::ComputeAndStoreLotData() {
	bool hasPhone;
	bool hasBaby;
	bool hasHouse;
	bool hasUserPlacedObjects;
	SInt32 familyObjectsValue;
	SInt32 lotObjectsValue;
	SInt32 archValue;
	
  short sVar1;
  Family__vtable *pFVar2;
  cSimulator__vtable *pcVar3;
  cSimulator__vtable **ppcVar4;
  undefined2 uVar5;
  int iVar6;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  int familyObjectsValue;
  int lotObjectsValue;
  bool hasPhone;
  bool hasBaby;
  bool hasUserPlacedObjects;
  bool hasHouse;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* end of inlined section */
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  (*(code *)_5Globs_pObjectModule->__vtable[1].MotiveAccessed)
            ((int)&_5Globs_pObjectModule->__vtable +
             (int)*(short *)&_5Globs_pObjectModule->__vtable[1].SkillAccessed,&familyObjectsValue,
             (uint)&familyObjectsValue | 4,(uint)&familyObjectsValue | 8,
             (uint)&familyObjectsValue | 0xc,&hasUserPlacedObjects);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  iVar6 = (*(code *)_5Globs_pFixedWorld->__vtable[1].GetLightEntry)
                    ((int)&_5Globs_pFixedWorld->__vtable +
                     (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].AnalyzeWallVertex,&hasHouse);
  _hasHouse = 1;
  pFVar2 = this->fFamily->__vtable;
  (*(code *)pFVar2[1].GetCreationOrder)
            ((int)&this->fFamily->__vtable + (int)*(short *)&pFVar2[1].SetHouseNumber,_hasPhone);
  pFVar2 = this->fFamily->__vtable;
  (*(code *)pFVar2[1].GetHouseValue)
            ((int)&this->fFamily->__vtable + (int)*(short *)&pFVar2[1].SetFunds,_hasBaby);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pSimulator->__vtable[1].GetArchValue)
            ((int)&_5Globs_pSimulator->__vtable +
             (int)*(short *)&_5Globs_pSimulator->__vtable[1].SetLotValue,familyObjectsValue);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pSimulator->__vtable[1].SetTimeOfDay)
            ((int)&_5Globs_pSimulator->__vtable +
             (int)*(short *)&_5Globs_pSimulator->__vtable[1].GetTimeOfDay,iVar6 + lotObjectsValue);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  pcVar3 = _5Globs_pSimulator->__vtable;
  sVar1 = *(short *)&pcVar3->IsPaused;
  ppcVar4 = &_5Globs_pSimulator->__vtable;
  uVar5 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                    ((int)&_5Globs_pFixedWorld->__vtable +
                     (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
  (*(code *)pcVar3->IsStopped)((int)ppcVar4 + (int)sVar1,0x17,uVar5);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pSimulator->__vtable->IsStopped)
            ((int)&_5Globs_pSimulator->__vtable +
             (int)*(short *)&_5Globs_pSimulator->__vtable->IsPaused,0x16,_hasHouse);
  return;
}

ErrType HouseImpl::SaveFile(iResFile *pFile) {
  int version;
  
  version = _5Globs_iSaveFileVersion;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  ComputeAndStoreLotData__9HouseImpl(this);
  ReconSaveObject__H1Z10cSimulator_PX01P8iResFileisi_i
            (_5Globs_pSimulator,(iResFile__0_3211 *)pFile,kSimulatorResType,kSimulatorResourceID,
             version);
  ReconSaveObject__H1Z9HouseImpl_PX01P8iResFileisi_i
            (this,pFile,kHouseResType,kHouseResourceID,version);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pFixedWorld->__vtable->SetSize)
            ((int)&_5Globs_pFixedWorld->__vtable +
             (int)*(short *)&_5Globs_pFixedWorld->__vtable->DoCommand,pFile,version);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pObjectModule->__vtable->MakeNewOutOfWorldObject)
            ((int)&_5Globs_pObjectModule->__vtable +
             (int)*(short *)&_5Globs_pObjectModule->__vtable->AddObject,pFile);
  GlobalDispatch__Fsi(0x91,(int)pFile);
  return 0;
}

cXObject* HouseImpl::GetFirstObject() {
  cXObject__145_888 *pcVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  pcVar1 = (cXObject__145_888 *)
           (*(code *)_5Globs_pObjectModule->__vtable->LevelInfoRequested)
                     ((int)&_5Globs_pObjectModule->__vtable +
                      (int)*(short *)&_5Globs_pObjectModule->__vtable->CleanupPeople);
  return pcVar1;
}

Boolean HouseImpl::DoCommand(SInt16 command, SInt32 info) {
	int i;
	CTilePt offset;
	cXObject *obj;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  uint uVar5;
  Family *pFVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  code *pcVar10;
  ulong uVar11;
  Neighborhood *pNVar12;
  CTilePt offset;
  short local_40;
  short sStack_3e;
  
  uVar11 = (ulong)(int)this;
  pFVar6 = this->fFamily;
  if (pFVar6 != (Family *)0x0) {
    uVar11 = (ulong)((int)&pFVar6->__vtable + (int)*(short *)&pFVar6->__vtable->GetIndexedMember);
    (*(code *)pFVar6->__vtable->GetMemberByGUID)(uVar11,command);
  }
  if (command == 0xef) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pObjectModule->__vtable->GetPeople)
              ((int)&_5Globs_pObjectModule->__vtable +
               (int)*(short *)&_5Globs_pObjectModule->__vtable->ForceAllLocations,info);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    iVar9 = (int)*(short *)&_5Globs_pRoomManager->__vtable->RoomLightingChanged;
    pcVar10 = (code *)_5Globs_pRoomManager->__vtable->RoomScoreChanged;
  }
  else {
    pNVar12 = (Neighborhood *)_5Globs_pRoomManager;
    if ((short)command < 0xf0) {
      if (command == 0xdb) {
        uVar7 = (ulong)(int)&(this->field23_0x20).fWhat;
        iVar9 = 3;
        do {
          uVar5 = (uint)uVar7;
          uVar2 = uVar5 - 1 & 7;
          uVar3 = uVar5 - 8 & 7;
          uVar11 = (*(long *)((uVar5 - 1) - uVar2) << (7 - uVar2) * 8 |
                   uVar11 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                   *(ulong *)((uVar5 - 8) - uVar3) >> uVar3 * 8;
          uVar2 = uVar5 + 7 & 7;
          puVar4 = (ulong *)((uVar5 + 7) - uVar2);
          *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar11 >> (7 - uVar2) * 8;
          uVar2 = uVar5 & 7;
          *(ulong *)(uVar5 - uVar2) =
               uVar11 << uVar2 * 8 |
               *(ulong *)(uVar5 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
          iVar9 = iVar9 + -1;
          uVar7 = (ulong)(int)(uVar5 + 8);
        } while (-1 < iVar9);
        puVar1 = (undefined *)((int)&(this->fDayRoute).fRouteTime + 3);
        uVar2 = (uint)puVar1 & 7;
        uVar3 = (uint)&this->fDayRoute & 7;
        uVar11 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                 uVar7 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                 *(ulong *)((int)&this->fDayRoute - uVar3) >> uVar3 * 8;
        puVar1 = (undefined *)((int)&(this->field23_0x20).fNext + 3);
        uVar2 = (uint)puVar1 & 7;
        puVar4 = (ulong *)(puVar1 + -uVar2);
        *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar11 >> (7 - uVar2) * 8;
        uVar2 = (uint)&this->field_0x1c & 7;
        puVar4 = (ulong *)(&this->field_0x1c + -uVar2);
        *puVar4 = uVar11 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/HouseImpl.h */
        (this->fDayRoute).fTotalTime = 0;
                    /* end of inlined section */
                    /* end of inlined section */
        (this->fDayRoute).fRouteTime = 0;
        ComputeAndStoreLotData__9HouseImpl(this);
        return 1;
      }
      if (0xdb < (short)command) {
        if (command == 0xdc) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
          iVar9 = (int)*(short *)&_5Globs_pRoomManager->__vtable->ProcessDegenerateTile;
          pcVar10 = (code *)_5Globs_pRoomManager->__vtable->ResetDiagonals;
        }
        else {
          if (command != 0xe1) {
            return 0;
          }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
          lVar8 = (*(code *)_5Globs_pObjectModule->__vtable->AdvanceSelectedPerson)
                            ((int)&_5Globs_pObjectModule->__vtable +
                             (int)*(short *)&_5Globs_pObjectModule->__vtable->SetSelectedPerson,info
                            );
          if (lVar8 == 0) {
            return 1;
          }
          iVar9 = *(int *)((int)lVar8 + 4);
          lVar8 = (**(code **)(iVar9 + 0x2ac))((int)lVar8 + (int)*(short *)(iVar9 + 0x2a8));
          if (lVar8 != 2) {
            return 1;
          }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
          iVar9 = (int)*(short *)&_5Globs_pNeighborhood->__vtable->DeleteCharacter;
          pcVar10 = (code *)_5Globs_pNeighborhood->__vtable->CountHouses;
          pNVar12 = _5Globs_pNeighborhood;
        }
LAB_0025fb2c:
        (*pcVar10)((int)&pNVar12->__vtable + iVar9);
        return 1;
      }
      if (command != 0x85) {
        return 0;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      info = 0;
      iVar9 = (int)*(short *)&_5Globs_pRoomManager->__vtable->AllRoomsLightingChanged;
      pcVar10 = (code *)_5Globs_pRoomManager->__vtable->AllRoomsScoreChanged;
    }
    else {
      if (command == 0x102) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
        iVar9 = (*(code *)_5Globs_pSimulator->__vtable->Resume)
                          ((int)&_5Globs_pSimulator->__vtable +
                           (int)*(short *)&_5Globs_pSimulator->__vtable->Pause,9);
        if (info != iVar9) {
          return 1;
        }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
        (*(code *)_5Globs_pSimulator->__vtable->IsStopped)
                  ((int)&_5Globs_pSimulator->__vtable +
                   (int)*(short *)&_5Globs_pSimulator->__vtable->IsPaused,9,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
        pFVar6 = (Family *)
                 (*(code *)_5Globs_pNeighborhood->__vtable[1].GetHouseNumberForLevel)
                           ((int)&_5Globs_pNeighborhood->__vtable +
                            (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].Save,0);
        this->fFamily = pFVar6;
        return 1;
      }
      if (0x102 < (short)command) {
        if (command == 0x105) {
          local_40 = (short)info;
          sStack_3e = (short)((uint)info >> 0x10);
          __7CTilePtiii(&offset,(int)local_40,(int)sStack_3e,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
          (*(code *)_5Globs_pRoomManager->__vtable[1].UpdateRooms)
                    ((int)&_5Globs_pRoomManager->__vtable +
                     (int)*(short *)&_5Globs_pRoomManager->__vtable[1].ClearRoomPartitions,&offset);
          ___7CTilePt(&offset,2);
          return 1;
        }
        if (command != 0x3f4) {
          return 0;
        }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
        iVar9 = (int)*(short *)&_5Globs_pRoomManager->__vtable->GetOutsideObjectScore;
        pcVar10 = (code *)_5Globs_pRoomManager->__vtable->RoomCount;
        goto LAB_0025fb2c;
      }
      if (command == 0xf0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
        iVar9 = (int)*(short *)&_5Globs_pRoomManager->__vtable->GetNewRoom;
        pcVar10 = (code *)_5Globs_pRoomManager->__vtable->GetRoomEnvironmentScore;
      }
      else {
        if (command != 0xf2) {
          return 0;
        }
        if (info == 0xfffb) {
          return 1;
        }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
        iVar9 = (int)*(short *)&_5Globs_pRoomManager->__vtable->ResolveDiagonal;
        pcVar10 = (code *)_5Globs_pRoomManager->__vtable->ResolveDiagonal;
      }
    }
  }
  (*pcVar10)((int)&_5Globs_pRoomManager->__vtable + iVar9,info);
  return 1;
}

void HouseImpl::EnterLiveMode() {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pRoomManager->__vtable[1].GetOutsideObjectScore)
            ((int)&_5Globs_pRoomManager->__vtable +
             (int)*(short *)&_5Globs_pRoomManager->__vtable[1].GetOutsideAmbientLevel);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pRoomManager->__vtable->GetOutsideAmbientLevel)
            ((int)&_5Globs_pRoomManager->__vtable +
             (int)*(short *)&_5Globs_pRoomManager->__vtable->ResetRooms);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pObjectModule->__vtable[1].IsFamilyMemberAwakeAndVisible)
            ((int)&_5Globs_pObjectModule->__vtable +
             (int)*(short *)&_5Globs_pObjectModule->__vtable[1].CheckIntegrity);
  ComputeAndStoreLotData__9HouseImpl(this);
  return;
}

void HouseImpl::PrepareForBudgetWindow() {
  long lVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  lVar1 = (*(code *)_5Globs_pSimulator->__vtable->GetTicks)
                    ((int)&_5Globs_pSimulator->__vtable +
                     (int)*(short *)&_5Globs_pSimulator->__vtable->SetCurrentHour);
  if (lVar1 != 0) {
    ComputeAndStoreLotData__9HouseImpl(this);
  }
  return;
}

void HouseImpl::DoStream(ReconBuffer *r, SInt32 version) {
	int i;
	ReconBuffer *this;
	
  Commander *value;
  int *value_00;
  int iVar1;
  
  if (0x12 < version) {
    ReconString__11ReconBufferR7BString(r,&this->fHouseDesc);
  }
  if (version < 0x26) {
                    /* end of inlined section */
    if (r->fMode == kReading) {
      ClearRouteHistory__9HouseImpl(this);
    }
  }
  else {
    iVar1 = 4;
    value_00 = (int *)&this->field_0x1c;
    value = &this->field23_0x20;
    do {
      Recon32__11ReconBufferPii(r,(int *)value,1);
      iVar1 = iVar1 + -1;
      Recon32__11ReconBufferPii(r,value_00,1);
      value_00 = value_00 + 2;
      value = (Commander *)&value->fId;
    } while (-1 < iVar1);
    Recon32__11ReconBufferPii(r,&(this->fDayRoute).fRouteTime,1);
    Recon32__11ReconBufferPii(r,&(this->fDayRoute).fTotalTime,1);
  }
  return;
}

void HouseImpl::AddLayoutTick(bool routing) {
  int iVar1;
  
  if (routing) {
    (this->fDayRoute).fRouteTime = (this->fDayRoute).fRouteTime + 1;
    iVar1 = (this->fDayRoute).fTotalTime;
  }
  else {
    iVar1 = (this->fDayRoute).fTotalTime;
  }
  (this->fDayRoute).fTotalTime = iVar1 + 1;
  return;
}

void HouseImpl::ClearRouteHistory() {
	int i;
	
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = gLayoutFillValue;
  piVar2 = (int *)&this->field_0x1c;
  iVar3 = 4;
  do {
                    /* end of inlined section */
    piVar2[1] = iVar1;
    iVar3 = iVar3 + -1;
    *piVar2 = iVar1;
    piVar2 = piVar2 + 2;
  } while (-1 < iVar3);
                    /* inlined from c:/eor/src2/games/sims/MSrc/HouseImpl.h */
  (this->fDayRoute).fRouteTime = 0;
  (this->fDayRoute).fTotalTime = 0;
  return;
}

void HouseImpl::GetHouseStats(HouseStats &hs) {
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > rmi;
	Int tileSize;
	Int totalTime;
	Int routeTime;
	float score;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	Room *rm;
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > *this;
	__rb_tree_base_iterator *this;
	__rb_tree_node_base *y;
	int i;
	
  cFixedWorld__vtable *pcVar1;
  Family__vtable *pFVar2;
  int iVar3;
  Commander **ppCVar4;
  cFixedWorld *pcVar5;
  RoomManager *pRVar6;
  int iVar7;
  __rb_tree_base_iterator _Var8;
  long lVar9;
  __rb_tree_base_iterator _Var10;
  int *piVar11;
  Commander *pCVar12;
  int iVar13;
  int iVar14;
  __rb_tree_node_base *p_Var15;
  RoomManager *pRVar16;
  float fVar17;
  __rb_tree_const_iterator_pair_const_short_unsigned_int_RoomImpl_____ rmi;
  
                    /* end of inlined section */
  pRVar6 = _5Globs_pRoomManager;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/RoomsImpl.h */
                    /* end of inlined section */
  hs->fSquareFeet = 0;
  hs->fPersonCount = 0;
  hs->fBedrooms = 0;
  hs->fBathrooms = 0;
  hs->fLotSize = 0;
  hs->fLayoutScore = 0;
  hs->fIndoorObjValue = 0;
  hs->fOutdoorObjValue = 0;
  hs->fObjectStateScore = 0;
  hs->fObjectCount = 0;
                    /* inlined from Tree.h */
  rmi.field0_0x0.node = (__rb_tree_base_iterator)(pRVar6[1].__vtable)->GetRoomManagerImpl;
                    /* end of inlined section */
  pRVar16 = pRVar6 + 1;
  if (rmi.field0_0x0.node != (__rb_tree_base_iterator)pRVar6[1].__vtable) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
    p_Var15 = ((__rb_tree_node_base *)((int)rmi.field0_0x0.node + 0x10))->parent;
    while( true ) {
                    /* end of inlined section */
      if (((p_Var15 != (__rb_tree_node_base *)0x0) &&
          (lVar9 = (**(code **)(*(int *)p_Var15 + 0x4c))
                             (&p_Var15->color + *(short *)(*(int *)p_Var15 + 0x48)), lVar9 != 0)) &&
         (lVar9 = (**(code **)(*(int *)p_Var15 + 100))
                            (&p_Var15->color + *(short *)(*(int *)p_Var15 + 0x60)), lVar9 == 0)) {
        iVar7 = (**(code **)(*(int *)p_Var15 + 0x94))
                          (&p_Var15->color + *(short *)(*(int *)p_Var15 + 0x90));
        hs->fSquareFeet = hs->fSquareFeet + iVar7 * 9;
        lVar9 = (**(code **)(*(int *)p_Var15 + 0x7c))
                          (&p_Var15->color + *(short *)(*(int *)p_Var15 + 0x78));
        if (lVar9 == 0) {
          iVar7 = *(int *)p_Var15;
        }
        else {
          hs->fBathrooms = hs->fBathrooms + 1;
          iVar7 = *(int *)p_Var15;
        }
        lVar9 = (**(code **)(iVar7 + 0x74))(&p_Var15->color + *(short *)(iVar7 + 0x70));
        if (lVar9 != 0) {
          hs->fBedrooms = hs->fBedrooms + 1;
                    /* inlined from Tree.h */
        }
      }
      _Var8.node = *(__rb_tree_node_base **)((int)rmi.field0_0x0.node + 0xc);
      if (_Var8.node == (__rb_tree_node_base *)0x0) {
        _Var8.node = *(__rb_tree_node_base **)((int)rmi.field0_0x0.node + 4);
        if (rmi.field0_0x0.node == (__rb_tree_base_iterator)(_Var8.node)->right) {
          do {
            rmi.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var8.node;
            _Var8.node = *(__rb_tree_node_base **)((int)rmi.field0_0x0.node + 4);
          } while (rmi.field0_0x0.node == (__rb_tree_base_iterator)(_Var8.node)->right);
        }
        if (*(__rb_tree_node_base **)((int)rmi.field0_0x0.node + 0xc) != _Var8.node) {
          rmi.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var8.node;
        }
                    /* end of inlined section */
        _Var10.node = (__rb_tree_node_base *)pRVar16->__vtable;
      }
      else if ((_Var8.node)->left == (__rb_tree_node_base *)0x0) {
        _Var10.node = (__rb_tree_node_base *)pRVar16->__vtable;
        rmi.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var8.node;
      }
      else {
        do {
          _Var8.node = (_Var8.node)->left;
        } while ((_Var8.node)->left != (__rb_tree_node_base *)0x0);
        _Var10.node = (__rb_tree_node_base *)pRVar16->__vtable;
        rmi.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var8.node;
      }
                    /* inlined from Tree.h */
                    /* end of inlined section */
      if (rmi.field0_0x0.node == (__rb_tree_base_iterator)_Var10.node) break;
      p_Var15 = *(__rb_tree_node_base **)((int)rmi.field0_0x0.node + 0x14);
    }
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
  pcVar5 = _5Globs_pFixedWorld;
                    /* end of inlined section */
  hs->fLevels = 1;
  pcVar1 = pcVar5->__vtable;
  lVar9 = (*(code *)pcVar1->GetFloor)
                    ((int)&pcVar5->__vtable + (int)*(short *)&pcVar1->GetFloorLayer);
  if (lVar9 < 0x28) {
    hs->fLotSize = 0;
  }
  else if (lVar9 < 0x32) {
    hs->fLotSize = 1;
  }
  else {
    hs->fLotSize = 2;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pObjectModule->__vtable[1].RelationshipAccessed)
            ((int)&_5Globs_pObjectModule->__vtable +
             (int)*(short *)&_5Globs_pObjectModule->__vtable[1].PersonalityAccessed,
             _5Globs_pRoomManager,hs);
  pFVar2 = this->fFamily->__vtable;
  iVar7 = (*(code *)pFVar2->TestMember)
                    ((int)&this->fFamily->__vtable + (int)*(short *)&pFVar2->TestMember);
  hs->fPersonCount = iVar7;
  iVar13 = 0;
  iVar14 = 0;
  pCVar12 = &this->field23_0x20;
  piVar11 = (int *)&this->field_0x1c;
  iVar7 = 4;
  do {
    iVar3 = *piVar11;
    iVar7 = iVar7 + -1;
    ppCVar4 = &pCVar12->fNext;
    piVar11 = piVar11 + 2;
    iVar13 = iVar13 + iVar3;
    pCVar12 = (Commander *)&pCVar12->fId;
    iVar14 = (int)&(*ppCVar4)->fNext + iVar14;
  } while (-1 < iVar7);
  iVar13 = iVar13 + (this->fDayRoute).fTotalTime;
  if (iVar13 < 1) {
    iVar13 = 1;
  }
  fVar17 = ((float)iVar13 - (float)((iVar14 + (this->fDayRoute).fRouteTime) * 2)) / (float)iVar13;
  if (fVar17 < 0.0) {
    fVar17 = 0.0;
  }
  if (1.0 < fVar17) {
    fVar17 = 1.0;
  }
  hs->fLayoutScore = (int)(fVar17 * 100.0);
  return;
}

HouseStats* HouseStats::HouseStats() {
  this->fSquareFeet = 0;
  this->fPersonCount = 0;
  this->fBedrooms = 0;
  this->fBathrooms = 0;
  this->fLevels = 0;
  this->fLotSize = 0;
  this->fLayoutScore = 0;
  this->fIndoorObjValue = 0;
  this->fOutdoorObjValue = 0;
  this->fObjectStateScore = 0;
  this->fObjectCount = 0;
  return this;
}

Int HouseStats::GetSquareFeet() {
  return this->fSquareFeet;
}

Int HouseStats::GetSizeScore() {
	float squareFtPerPerson;
	PiecewiseFn *fn;
	PiecewiseFn *this;
	float x;
	float diff;
	int i;
	
  int iVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  iVar7 = this->fPersonCount;
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    iVar6 = this->fSquareFeet;
    piVar2 = (int *)(*(code *)_5Globs_pHouse->__vtable[1].EnterLiveMode)
                              ((int)&_5Globs_pHouse->__vtable +
                               (int)*(short *)&_5Globs_pHouse->__vtable[1].DoStream);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Piecewise.h */
    iVar1 = piVar2[2];
    if (iVar1 == 0) {
      fVar8 = 0.0;
    }
    else {
      fVar9 = 0.0;
      iVar5 = iVar1 + -1;
      iVar4 = *piVar2;
      if (-1 < iVar5) {
        pfVar3 = (float *)(iVar5 * 8 + iVar4);
        do {
          fVar9 = (float)iVar6 / (float)iVar7 - *pfVar3;
          if (0.0 < fVar9) break;
          iVar5 = iVar5 + -1;
          pfVar3 = pfVar3 + -2;
        } while (-1 < iVar5);
      }
      if (iVar5 == iVar1 + -1) {
        fVar8 = *(float *)(iVar5 * 8 + iVar4 + 4);
      }
      else if (iVar5 == -1) {
        fVar8 = *(float *)(iVar4 + 4);
      }
      else {
        iVar4 = iVar5 * 8 + iVar4;
        fVar8 = *(float *)(iVar4 + 4);
        fVar8 = fVar9 * *(float *)(iVar5 * 4 + piVar2[1]) * (*(float *)(iVar4 + 0xc) - fVar8) +
                fVar8;
      }
    }
                    /* end of inlined section */
    iVar7 = (int)fVar8;
  }
  return iVar7;
}

Int HouseStats::GetFurnishingsScore() {
	float archValue;
	float objectsValue;
	float ratio;
	PiecewiseFn *fn;
	PiecewiseFn *this;
	float x;
	float diff;
	int i;
	
  int iVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  fVar7 = 0.0;
  fVar8 = 100.0;
  iVar1 = (*(code *)_5Globs_pSimulator->__vtable[1].GetTicks)
                    ((int)&_5Globs_pSimulator->__vtable +
                     (int)*(short *)&_5Globs_pSimulator->__vtable[1].SetCurrentHour);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  iVar2 = (*(code *)_5Globs_pSimulator->__vtable[1].GetLotValue)
                    ((int)&_5Globs_pSimulator->__vtable +
                     (int)*(short *)&_5Globs_pSimulator->__vtable[1].GetTutorialOn);
  if ((float)iVar2 != fVar7) {
    fVar8 = (float)iVar1 / (float)iVar2;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  piVar3 = (int *)(*(code *)_5Globs_pHouse->__vtable[1].GetSizeScoreCurve)
                            ((int)&_5Globs_pHouse->__vtable +
                             (int)*(short *)&_5Globs_pHouse->__vtable[1].PrepareForBudgetWindow);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Piecewise.h */
  iVar1 = piVar3[2];
  if (iVar1 != 0) {
    iVar5 = iVar1 + -1;
    iVar2 = *piVar3;
    fVar6 = fVar7;
    if (-1 < iVar5) {
      pfVar4 = (float *)(iVar5 * 8 + iVar2);
      fVar6 = fVar8 - *pfVar4;
      if (fVar6 <= fVar7) {
        iVar5 = iVar1 + -2;
        while ((pfVar4 = pfVar4 + -2, -1 < iVar5 && (fVar6 = fVar8 - *pfVar4, fVar6 <= fVar7))) {
          iVar5 = iVar5 + -1;
        }
      }
    }
    if (iVar5 == iVar1 + -1) {
      fVar7 = *(float *)(iVar5 * 8 + iVar2 + 4);
    }
    else if (iVar5 == -1) {
      fVar7 = *(float *)(iVar2 + 4);
    }
    else {
      iVar2 = iVar5 * 8 + iVar2;
      fVar7 = *(float *)(iVar2 + 4);
      fVar7 = fVar6 * *(float *)(iVar5 * 4 + piVar3[1]) * (*(float *)(iVar2 + 0xc) - fVar7) + fVar7;
    }
  }
                    /* end of inlined section */
  return (int)fVar7;
}

Int HouseStats::GetYardScore() {
	float normScore;
	
  float fVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  fVar1 = (float)(*(code *)_5Globs_pRoomManager->__vtable[1].ResolveDiagonal)
                           ((int)&_5Globs_pRoomManager->__vtable +
                            (int)*(short *)&_5Globs_pRoomManager->__vtable[1].
                                            GetRoomEnvironmentScore);
  fVar1 = fVar1 * gYardScoreMultiplier;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  if (100.0 < fVar1) {
    fVar1 = 100.0;
  }
  return (int)fVar1;
}

Int HouseStats::GetUpkeepScore() {
	float score;
	
  int iVar1;
  float fVar2;
  
  iVar1 = this->fObjectCount;
  if (iVar1 != 0) {
    fVar2 = (float)(iVar1 - this->fObjectStateScore) / (float)iVar1;
    if (fVar2 < 0.0) {
      fVar2 = 0.0;
    }
    if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
    return (int)(fVar2 * 100.0);
  }
  return 0;
}

Int HouseStats::GetOverallScore() {
	float sum;
	float weightSum;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = GetSizeScore__10HouseStats(this);
  iVar2 = GetFurnishingsScore__10HouseStats(this);
  iVar3 = GetYardScore__10HouseStats(this);
  iVar4 = GetUpkeepScore__10HouseStats(this);
  iVar5 = GetLayoutScore__10HouseStats(this);
  return (int)((gHouseSizeWeight * (float)iVar1 + (float)iVar2 + (float)iVar3 + (float)iVar4 +
               (float)iVar5) / (gHouseSizeWeight + 4.0));
}

Int HouseStats::GetLayoutScore() {
  return this->fLayoutScore;
}

Int HouseStats::GetNumBedrooms() {
  return this->fBedrooms;
}

Int HouseStats::GetNumBathrooms() {
  return this->fBathrooms;
}

Int HouseStats::GetNumLevels() {
  return this->fLevels;
}

LotSize HouseStats::GetLotSize() {
  return this->fLotSize;
}

Int HouseStats::GetObjectCount() {
  return this->fObjectCount;
}

bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2) {
  char cVar1;
  char cVar2;
  
  do {
    if ((first1 == last1) || (first2 == last2)) {
      return first1 == last1 && first2 != last2;
    }
    cVar1 = *first1;
    cVar2 = *first2;
    if (cVar1 < cVar2) {
      return true;
    }
    first1 = first1 + 1;
    first2 = first2 + 1;
  } while (cVar1 <= cVar2);
  return false;
}

ErrType int ReconLoadObject<cSimulator>(cSimulator *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 *version) {
	SimpleReconObject<cSimulator> recon;
	ReconBuilder rb;
	cSimulator *obj;
	SInt32 type;
	
  int iVar1;
  SimpleReconObject_cSimulator_ recon;
  ReconBuilder__6_5003 rb;
  
  recon.field0_0x0.__vtable = (ReconObject__vtable *)_vt_t17SimpleReconObject1Z10cSimulator;
  recon.fObj = obj;
  recon.fType = type;
  iVar1 = Reconstitute__12ReconBuilderP11ReconObjectP8iResFilesPi
                    (&rb,&recon.field0_0x0,file,id,version);
  ___11ReconObject(&recon.field0_0x0,2);
  return iVar1;
}

ErrType int ReconLoadObject<HouseImpl>(HouseImpl *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 *version) {
	SimpleReconObject<HouseImpl> recon;
	ReconBuilder rb;
	HouseImpl *obj;
	SInt32 type;
	
  int iVar1;
  SimpleReconObject_HouseImpl_ recon;
  ReconBuilder__6_5003 rb;
  
  recon.field0_0x0.__vtable = (ReconObject__vtable *)_vt_t17SimpleReconObject1Z9HouseImpl;
  recon.fObj = obj;
  recon.fType = type;
  iVar1 = Reconstitute__12ReconBuilderP11ReconObjectP8iResFilesPi
                    (&rb,&recon.field0_0x0,file,id,version);
  ___11ReconObject(&recon.field0_0x0,2);
  return iVar1;
}

ErrType int ReconSaveObject<cSimulator>(cSimulator *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 version) {
	SimpleReconObject<cSimulator> recon;
	ReconBuilder rb;
	cSimulator *obj;
	SInt32 type;
	
  int iVar1;
  SimpleReconObject_cSimulator_ recon;
  ReconBuilder__6_5003 rb;
  
  recon.field0_0x0.__vtable = (ReconObject__vtable *)_vt_t17SimpleReconObject1Z10cSimulator;
  recon.fObj = obj;
  recon.fType = type;
  iVar1 = Compact__12ReconBuilderP11ReconObjectiP8iResFiles(&rb,&recon.field0_0x0,version,file,id);
  ___11ReconObject(&recon.field0_0x0,2);
  return iVar1;
}

ErrType int ReconSaveObject<HouseImpl>(HouseImpl *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 version) {
	SimpleReconObject<HouseImpl> recon;
	ReconBuilder rb;
	HouseImpl *obj;
	SInt32 type;
	
  int iVar1;
  SimpleReconObject_HouseImpl_ recon;
  ReconBuilder__6_5003 rb;
  
  recon.field0_0x0.__vtable = (ReconObject__vtable *)_vt_t17SimpleReconObject1Z9HouseImpl;
  recon.fObj = obj;
  recon.fType = type;
  iVar1 = Compact__12ReconBuilderP11ReconObjectiP8iResFiles(&rb,&recon.field0_0x0,version,file,id);
  ___11ReconObject(&recon.field0_0x0,2);
  return iVar1;
}

void House::~House(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (House__vtable *)_vt_5House;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

Family* HouseImpl::GetFamily() {
  return this->fFamily;
}

BString& HouseImpl::GetDescription() {
  return &this->fHouseDesc;
}

void HouseImpl::SetDescription(BString &name) {
  __as__7BStringRC7BString(&this->fHouseDesc,name);
  return;
}

PiecewiseFn* HouseImpl::GetSizeScoreCurve() {
  return this->fSizeScoreCurve;
}

PiecewiseFn* HouseImpl::GetFurnishingsScoreCurve() {
  return this->fFurnishingsScoreCurve;
}

void HouseImpl::SetFamilyToNull() {
  this->fFamily = (Family *)0x0;
  return;
}

void SimpleReconObject<cSimulator>::~SimpleReconObject(int __in_chrg) {
  ___11ReconObject(&this->field0_0x0,__in_chrg);
  return;
}

void SimpleReconObject<HouseImpl>::~SimpleReconObject(int __in_chrg) {
  ___11ReconObject(&this->field0_0x0,__in_chrg);
  return;
}

void SimpleReconObject<HouseImpl>::DoStream(ReconBuffer *r, SInt32 version) {
  House__vtable *pHVar1;
  
  pHVar1 = (this->fObj->field0_0x0).__vtable;
  (*(code *)pHVar1[1].GetDescription)
            ((int)&(this->fObj->field0_0x0).__vtable + (int)*(short *)&pHVar1[1].GetFamily,r,version
            );
  return;
}

SInt32 SimpleReconObject<HouseImpl>::GetType() {
  return this->fType;
}

void SimpleReconObject<cSimulator>::DoStream(ReconBuffer *r, SInt32 version) {
  cSimulator__vtable *pcVar1;
  
  pcVar1 = this->fObj->__vtable;
  (*(code *)pcVar1->GetArchValue)
            ((int)&this->fObj->__vtable + (int)*(short *)&pcVar1->SetLotValue,r,version);
  return;
}

SInt32 SimpleReconObject<cSimulator>::GetType() {
  return this->fType;
}

// STATUS: NOT STARTED

#include "Simulator.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb1050;
	__vtbl_ptr_type *$vf1116;
	
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
	/* vtable[83] */ virtual RoomID GetRoom();
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

__vtbl_ptr_type cSimulatorImpl::Commander virtual table[4] = {
	/* [0] = */ {
		/* .__delta = */ -4,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -4,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::~cSimulatorImpl,
		/* .__delta2 = */ -19672
	},
	/* [2] = */ {
		/* .__delta = */ -4,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::DoCommand,
		/* .__delta2 = */ -18824
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type cSimulatorImpl virtual table[39] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::~cSimulatorImpl,
		/* .__delta2 = */ -19672
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::Init,
		/* .__delta2 = */ -19872
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::Simulate,
		/* .__delta2 = */ -16304
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::GetGlobal,
		/* .__delta2 = */ -15272
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::SetGlobal,
		/* .__delta2 = */ -16360
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::SetSpeed,
		/* .__delta2 = */ -16992
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::GetSpeed,
		/* .__delta2 = */ -16944
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::Pause,
		/* .__delta2 = */ -16936
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::Resume,
		/* .__delta2 = */ -16856
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::IsPaused,
		/* .__delta2 = */ -16776
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::IsStopped,
		/* .__delta2 = */ -15248
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::GetMode,
		/* .__delta2 = */ -15232
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::SetMode,
		/* .__delta2 = */ -15224
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::DoCommand,
		/* .__delta2 = */ -18824
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::DoStream,
		/* .__delta2 = */ -19408
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::GetFunds,
		/* .__delta2 = */ -16648
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::Spend,
		/* .__delta2 = */ -16576
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::GetTodaysExpenses,
		/* .__delta2 = */ -15728
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::GetPreviousExpenses,
		/* .__delta2 = */ -15656
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::GetExpensesHistory,
		/* .__delta2 = */ -15576
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::GetDaysRunning,
		/* .__delta2 = */ -16368
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::SetFunds,
		/* .__delta2 = */ -16632
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::ClearHistory,
		/* .__delta2 = */ -16488
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::SetCurrentHour,
		/* .__delta2 = */ -16760
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::GetTicks,
		/* .__delta2 = */ -15216
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::GetTimeOfDay,
		/* .__delta2 = */ -15208
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::SetTimeOfDay,
		/* .__delta2 = */ -15160
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::GetTutorialOn,
		/* .__delta2 = */ -15152
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::GetLotValue,
		/* .__delta2 = */ -15104
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::SetLotValue,
		/* .__delta2 = */ -15096
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::GetArchValue,
		/* .__delta2 = */ -15088
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::SetArchValue,
		/* .__delta2 = */ -15080
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::GetObjectsValue,
		/* .__delta2 = */ -15032
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::SetObjectsValue,
		/* .__delta2 = */ -15024
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::GetProbe,
		/* .__delta2 = */ -14984
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::SetProbe,
		/* .__delta2 = */ -14976
	},
	/* [37] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulatorImpl::RestoreTrueDt,
		/* .__delta2 = */ -16336
	},
	/* [38] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type cSimulator virtual table[39] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSimulator::~cSimulator,
		/* .__delta2 = */ -15320
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
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [37] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [38] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

cSimulator* cSimulator::CreateInstance() {
  cSimulatorImpl *pcVar1;
  
  pcVar1 = (cSimulatorImpl *)__builtin_new(0x160);
  pcVar1 = __14cSimulatorImpl(pcVar1);
  return &pcVar1->field0_0x0;
}

void cSimulator::DestroyInstance(cSimulator *pInstance) {
  if (pInstance != (cSimulator *)0x0) {
    (*(code *)pInstance->__vtable->Simulate)
              ((int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Init,3);
  }
  return;
}

cSimulatorImpl* cSimulatorImpl::cSimulatorImpl() {
	cSimulator *this;
	
  ExpenseReport *this_00;
  int iVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Simulator.h */
                    /* end of inlined section */
  iVar1 = 4;
  this_00 = this->fExpHistory;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Simulator.h */
  (this->field0_0x0).__vtable = (cSimulator__vtable *)_vt_10cSimulator;
                    /* end of inlined section */
  __9Commander((Commander *)&this->field_0x4);
  *(__vtbl_ptr_type **)&this->field_0x10 = _vt_14cSimulatorImpl_9Commander;
  (this->field0_0x0).__vtable = (cSimulator__vtable *)_vt_14cSimulatorImpl;
  do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Expenses.h */
    iVar1 = iVar1 + -1;
    reset__13ExpenseReport(this_00);
                    /* end of inlined section */
    this_00 = this_00 + 1;
  } while (iVar1 != -1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Expenses.h */
  reset__13ExpenseReport(&this->fExpenses);
                    /* end of inlined section */
  this->fElapsed = 0.0;
  this->fOrigDt = -1.0;
  this->fLotValue = 0;
  this->fArchValue = 0;
  this->fObjectsValue = 0;
  this->fProbe = (SimLoopProbe *)0x0;
  *(undefined4 *)&this->fInsideSimulate = 0;
  this->m_fSecondsSinceStopWatchStart = 0.0;
  this->m_fTotalStopWatchTime = 0.0;
  return this;
}

void cSimulatorImpl::Init() {
	SInt16 cnt;
	
  cSimulator__vtable *pcVar1;
  undefined2 *puVar2;
  TimeOfDay TVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0x29;
  puVar2 = (undefined2 *)&this->field_0x66;
  do {
    *puVar2 = 0;
    iVar5 = iVar5 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar5);
  *(undefined2 *)&this->field_0x34 = 2;
  this->fCurObjectID = 0;
  this->fTicks = 0;
  this->fPendingFunds = 0;
  *(undefined2 *)&this->field_0x1e = 0;
  this->fFunds = 2000;
  *(undefined2 *)&this->field_0x16 = 0xf;
  *(undefined2 *)&this->field_0x14 = 1;
  *(undefined2 *)&(this->field29_0x20).fWhat = 0x7cd;
  *(undefined2 *)((int)&(this->field29_0x20).fNext + 2) = 6;
  TVar3 = ComputeTimeOfDay__14cSimulatorImpl(this);
  *(undefined2 *)&this->field_0x38 = 0xffff;
  *(undefined2 *)&this->field_0x32 = 1;
  *(short *)&this->field_0x1c = (short)TVar3;
  uVar4 = GetSRandSeed__Fv();
  this->fRandSeed = uVar4;
  pcVar1 = (this->field0_0x0).__vtable;
  (*(code *)pcVar1->SetMode)((int)&(this->field0_0x0).__vtable + (int)*(short *)&pcVar1->GetMode,0);
  *(undefined2 *)&this->field_0x3c = 3;
  return;
}

void cSimulatorImpl::~cSimulatorImpl(int __in_chrg) {
	cSimulator *this;
	int __in_chrg;
	void *pAddress;
	
  *(__vtbl_ptr_type **)&this->field_0x10 = _vt_14cSimulatorImpl_9Commander;
  (this->field0_0x0).__vtable = (cSimulator__vtable *)_vt_14cSimulatorImpl;
  ___9Commander((Commander *)&this->field_0x4,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Simulator.h */
  (this->field0_0x0).__vtable = (cSimulator__vtable *)_vt_10cSimulator;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

static void ReconExpReport(ExpenseReport *er, ReconBuffer *r) {
	SInt32 version;
	int cnt;
	int i;
	Int sp;
	ExpenseReport *this;
	ExpenseType et;
	ExpenseReport *this;
	ExpenseType et;
	Int amount;
	
  undefined8 unaff_s0;
  int iVar1;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  int version;
  int sp;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  version = 1;
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  Recon32__11ReconBufferPii(r,&version,1);
  iVar1 = 8;
  if (version == 0) {
    iVar1 = 7;
  }
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Expenses.h */
    sp = er->fSpent[0];
                    /* end of inlined section */
    ReconInt__11ReconBufferPii(r,&sp,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Expenses.h */
    er->fSpent[0] = sp;
                    /* end of inlined section */
    er = (ExpenseReport *)((int)er + 4);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Expenses.h */
                    /* end of inlined section */
  }
  return;
}

void cSimulatorImpl::DoStream(ReconBuffer *r, SInt32 version) {
	SInt16 objID;
	StdPrm flags;
	UInt32 randSeed;
	int i;
	ReconBuffer *this;
	
  undefined2 uVar1;
  bool bVar2;
  cSimulator__vtable *pcVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  ExpenseReport *er;
  undefined8 unaff_s2;
  int iVar4;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  ushort objID;
  uint randSeed;
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
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  uVar1 = *(undefined2 *)&this->field_0x46;
  if (version < 0x40) {
    Recon16__11ReconBufferPsi(r,(ushort *)&this->field_0x14,0x20);
    *(undefined2 *)&this->field_0x54 = 0;
    *(undefined2 *)&this->field_0x62 = 0xffff;
    *(undefined2 *)&this->field_0x56 = 0;
    *(undefined2 *)&this->field_0x58 = 0;
    *(undefined2 *)&this->field_0x5a = 0;
    *(undefined2 *)&this->field_0x5c = 0;
    *(undefined2 *)&this->field_0x5e = 0xffff;
    *(undefined2 *)&this->field_0x60 = 0xffff;
    *(undefined2 *)&this->field_0x64 = 0;
    *(undefined2 *)&this->field_0x66 = 0;
  }
  else {
    Recon16__11ReconBufferPsi(r,(ushort *)&this->field_0x14,0x2a);
  }
  *(undefined2 *)&this->field_0x46 = uVar1;
  *(undefined2 *)&this->field_0x32 = 1;
  Recon32__11ReconBufferPii(r,&this->fTicks,1);
  er = this->fExpHistory;
  objID = *(ushort *)&this->fCurObjectID;
  iVar4 = 4;
  Recon16__11ReconBufferPsi(r,&objID,1);
  this->fCurObjectID = (int)(short)objID;
  Recon32__11ReconBufferPii(r,&this->fFunds,1);
  Recon32__11ReconBufferPii(r,(int *)&this->fRandSeed,1);
  randSeed = GetSRandSeed__Fv();
  Recon32__11ReconBufferPii(r,(int *)((uint)&objID | 4),1);
  SetSRandSeed__FUi(randSeed);
  Recon32__11ReconBufferPii(r,&this->fPendingFunds,1);
  ReconInt__11ReconBufferPii(r,&this->fLotValue,1);
  ReconInt__11ReconBufferPii(r,&this->fObjectsValue,1);
  ReconInt__11ReconBufferPii(r,&this->fArchValue,1);
  *(short *)&this->field_0x5a = (short)(this->fArchValue % 10000);
  *(short *)&this->field_0x5c = (short)(this->fArchValue / 10000);
  *(short *)&this->field_0x56 = (short)(this->fObjectsValue % 10000);
  *(short *)&this->field_0x58 = (short)(this->fObjectsValue / 10000);
  ReconExpReport__FP13ExpenseReportP11ReconBuffer(&this->fExpenses,r);
  do {
    ReconExpReport__FP13ExpenseReportP11ReconBuffer(er,r);
    iVar4 = iVar4 + -1;
    er = er + 1;
  } while (-1 < iVar4);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
                    /* end of inlined section */
  if (r->fMode != kReading) {
    this->m_fTotalStopWatchTime = 0.0;
    goto LAB_0028b654;
  }
  if (version < 0x40) {
    *(undefined2 *)&this->field_0x38 = 0;
LAB_0028b61c:
    *(undefined2 *)&this->field_0x34 = 0;
    pcVar3 = (this->field0_0x0).__vtable;
  }
  else {
    if (3 < (int)*(short *)&this->field_0x38 + 3U) {
      *(undefined2 *)&this->field_0x38 = 0;
      goto LAB_0028b61c;
    }
    pcVar3 = (this->field0_0x0).__vtable;
  }
  (*(code *)pcVar3->SetMode)
            ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pcVar3->GetMode,
             *(undefined2 *)&this->field_0x38);
  iVar4 = CountDaysInMonth__8GameTimeii
                    ((int)*(short *)&(this->field29_0x20).fWhat,
                     (int)*(short *)((int)&(this->field29_0x20).fNext + 2));
  *(short *)&this->field_0x4e = (short)iVar4;
  bVar2 = GetFreeWill__8cXObject();
  *(short *)&this->field_0x50 = (short)bVar2;
  this->m_fTotalStopWatchTime = 0.0;
LAB_0028b654:
  this->m_fSecondsSinceStopWatchStart = 0.0;
  return;
}

Boolean cSimulatorImpl::DoCommand(SInt16 com, SInt32 info) {
  short sVar1;
  cSimulator__vtable *pcVar2;
  int iVar3;
  undefined2 uVar4;
  
  if (com == 0xdd) {
    pcVar2 = (this->field0_0x0).__vtable;
    sVar1 = *(short *)&pcVar2[1].SetSpeed;
    iVar3 = (*(code *)pcVar2->GetObjectsValue)
                      ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pcVar2->SetArchValue);
    (*(code *)pcVar2[1].GetSpeed)((int)&(this->field0_0x0).__vtable + (int)sVar1,iVar3 + info);
  }
  else if ((short)com < 0xde) {
    if (com == 0x86) {
      if (this->fCurObjectID == info) {
        this->fCurObjectID = info + 1;
      }
    }
    else {
      if (com != 0xd0) {
        return 0;
      }
      pcVar2 = (this->field0_0x0).__vtable;
      (*(code *)pcVar2->SetGlobal)
                ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pcVar2->GetGlobal);
    }
  }
  else {
    uVar4 = (undefined2)info;
    if (com == 0xf8) {
      *(undefined2 *)&this->field_0x18 = uVar4;
    }
    else if ((short)com < 0xf9) {
      if (com != 0xe3) {
        return 0;
      }
      *(undefined2 *)&this->field_0x1a = uVar4;
    }
    else {
      if (com != 0x10c) {
        return 0;
      }
      *(undefined2 *)&this->field_0x54 = uVar4;
    }
  }
  return 1;
}

bool cSimulatorImpl::SimulateOneTick() {
	UInt32 stashSeed;
	bool incTicks;
	SInt16 command;
	bool hourChanged;
	int i;
	TimeOfDay lastTimeOfDay;
	TimeOfDay newTimeOfDay;
	
  undefined *puVar1;
  int *piVar2;
  cSimulator__vtable *pcVar3;
  ulong *puVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  TimeOfDay TVar11;
  TimeOfDay TVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  short sVar16;
  ulong uVar17;
  short sVar18;
  ulong uVar19;
  ulong in_a2;
  ulong in_a3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  ushort command;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  ExpenseReport EStack_80;
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
  
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  iVar10 = this->fPendingFunds;
  if (iVar10 != 0) {
    this->fPendingFunds = 0;
    this->fFunds = this->fFunds + iVar10;
  }
  command = 0;
  uVar7 = GetSRandSeed__Fv();
  bVar5 = false;
  SetSRandSeed__FUi(this->fRandSeed);
  bVar6 = TickAllObjects__14cSimulatorImpl(this);
  uVar8 = GetSRandSeed__Fv();
  this->fRandSeed = uVar8;
  SetSRandSeed__FUi(uVar7);
  if (bVar6) {
    sVar18 = *(short *)&(this->field29_0x20).fNext;
    sVar16 = sVar18 + 2;
    this->fTicks = this->fTicks + 1;
    *(short *)&(this->field29_0x20).fNext = sVar16;
    if (0x3b < sVar16) {
      sVar16 = *(short *)&this->field_0x1e;
      *(short *)&(this->field29_0x20).fNext = sVar18 + -0x3a;
      command = 0xda;
      sVar18 = sVar16 + 1;
      *(short *)&this->field_0x1e = sVar18;
      if (0x3b < sVar18) {
        sVar18 = *(short *)&this->field_0x14;
        *(short *)&this->field_0x1e = sVar16 + -0x3b;
        bVar5 = true;
        sVar16 = sVar18 + 1;
        *(short *)&this->field_0x14 = sVar16;
        if (0x17 < sVar16) {
          command = 0xdb;
          *(short *)&this->field_0x14 = sVar18 + -0x17;
          *(short *)&this->field_0x4c = *(short *)&this->field_0x4c + 1;
          *(short *)&this->field_0x16 = *(short *)&this->field_0x16 + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
          (*(code *)_5Globs_pObjectModule->__vtable->GetSelectedPerson)
                    ((int)&_5Globs_pObjectModule->__vtable +
                     (int)*(short *)&_5Globs_pObjectModule->__vtable->GetNumPortals);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
          uVar19 = (ulong)(int)_5Globs_pNeighborhood;
                    /* end of inlined section */
          uVar17 = (ulong)((int)&_5Globs_pNeighborhood->__vtable +
                          (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].GetShowTutorialArrow);
          (*(code *)_5Globs_pNeighborhood->__vtable[1].SetShowTutorialArrow)();
          uVar13 = (ulong)(int)(this->fExpHistory + 1);
          uVar15 = 3;
          do {
            uVar9 = (uint)uVar13;
            uVar7 = uVar9 - 0x19 & 7;
            uVar8 = uVar9 - 0x20 & 7;
            uVar17 = (*(long *)((uVar9 - 0x19) - uVar7) << (7 - uVar7) * 8 |
                     uVar17 & 0xffffffffffffffffU >> (uVar7 + 1) * 8) & -1L << (8 - uVar8) * 8 |
                     *(ulong *)((uVar9 - 0x20) - uVar8) >> uVar8 * 8;
            uVar7 = uVar9 - 0x11 & 7;
            uVar8 = uVar9 - 0x18 & 7;
            uVar19 = (*(long *)((uVar9 - 0x11) - uVar7) << (7 - uVar7) * 8 |
                     uVar19 & 0xffffffffffffffffU >> (uVar7 + 1) * 8) & -1L << (8 - uVar8) * 8 |
                     *(ulong *)((uVar9 - 0x18) - uVar8) >> uVar8 * 8;
            uVar7 = uVar9 - 9 & 7;
            uVar8 = uVar9 - 0x10 & 7;
            in_a2 = (*(long *)((uVar9 - 9) - uVar7) << (7 - uVar7) * 8 |
                    in_a2 & 0xffffffffffffffffU >> (uVar7 + 1) * 8) & -1L << (8 - uVar8) * 8 |
                    *(ulong *)((uVar9 - 0x10) - uVar8) >> uVar8 * 8;
            uVar7 = uVar9 - 1 & 7;
            uVar8 = uVar9 - 8 & 7;
            in_a3 = (*(long *)((uVar9 - 1) - uVar7) << (7 - uVar7) * 8 |
                    in_a3 & 0xffffffffffffffffU >> (uVar7 + 1) * 8) & -1L << (8 - uVar8) * 8 |
                    *(ulong *)((uVar9 - 8) - uVar8) >> uVar8 * 8;
            uVar7 = uVar9 + 7 & 7;
            puVar4 = (ulong *)((uVar9 + 7) - uVar7);
            *puVar4 = *puVar4 & -1L << (uVar7 + 1) * 8 | uVar17 >> (7 - uVar7) * 8;
            uVar7 = uVar9 & 7;
            *(ulong *)(uVar9 - uVar7) =
                 uVar17 << uVar7 * 8 |
                 *(ulong *)(uVar9 - uVar7) & 0xffffffffffffffffU >> (8 - uVar7) * 8;
            uVar7 = uVar9 + 0xf & 7;
            puVar4 = (ulong *)((uVar9 + 0xf) - uVar7);
            *puVar4 = *puVar4 & -1L << (uVar7 + 1) * 8 | uVar19 >> (7 - uVar7) * 8;
            uVar7 = uVar9 + 8 & 7;
            puVar4 = (ulong *)((uVar9 + 8) - uVar7);
            *puVar4 = uVar19 << uVar7 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
            uVar7 = uVar9 + 0x17 & 7;
            puVar4 = (ulong *)((uVar9 + 0x17) - uVar7);
            *puVar4 = *puVar4 & -1L << (uVar7 + 1) * 8 | in_a2 >> (7 - uVar7) * 8;
            uVar7 = uVar9 + 0x10 & 7;
            puVar4 = (ulong *)((uVar9 + 0x10) - uVar7);
            *puVar4 = in_a2 << uVar7 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
            uVar7 = uVar9 + 0x1f & 7;
            puVar4 = (ulong *)((uVar9 + 0x1f) - uVar7);
            *puVar4 = *puVar4 & -1L << (uVar7 + 1) * 8 | in_a3 >> (7 - uVar7) * 8;
            uVar7 = uVar9 + 0x18 & 7;
            puVar4 = (ulong *)((uVar9 + 0x18) - uVar7);
            *puVar4 = in_a3 << uVar7 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
            uVar15 = (ulong)((int)uVar15 + -1);
            uVar13 = (ulong)(int)(uVar9 + 0x20);
          } while (-1 < (long)uVar15);
          puVar1 = (undefined *)((int)(this->fExpenses).fSpent + 7);
          uVar7 = (uint)puVar1 & 7;
          uVar8 = (uint)&this->fExpenses & 7;
          uVar13 = (*(long *)(puVar1 + -uVar7) << (7 - uVar7) * 8 |
                   uVar13 & 0xffffffffffffffffU >> (uVar7 + 1) * 8) & -1L << (8 - uVar8) * 8 |
                   *(ulong *)((int)&this->fExpenses - uVar8) >> uVar8 * 8;
          puVar1 = (undefined *)((int)(this->fExpenses).fSpent + 0xf);
          uVar7 = (uint)puVar1 & 7;
          piVar2 = (this->fExpenses).fSpent + 2;
          uVar8 = (uint)piVar2 & 7;
          uVar15 = (*(long *)(puVar1 + -uVar7) << (7 - uVar7) * 8 |
                   uVar15 & 0xffffffffffffffffU >> (uVar7 + 1) * 8) & -1L << (8 - uVar8) * 8 |
                   *(ulong *)((int)piVar2 - uVar8) >> uVar8 * 8;
          puVar1 = (undefined *)((int)(this->fExpenses).fSpent + 0x17);
          uVar7 = (uint)puVar1 & 7;
          piVar2 = (this->fExpenses).fSpent + 4;
          uVar8 = (uint)piVar2 & 7;
          uVar17 = (*(long *)(puVar1 + -uVar7) << (7 - uVar7) * 8 |
                   uVar17 & 0xffffffffffffffffU >> (uVar7 + 1) * 8) & -1L << (8 - uVar8) * 8 |
                   *(ulong *)((int)piVar2 - uVar8) >> uVar8 * 8;
          puVar1 = (undefined *)((int)(this->fExpenses).fSpent + 0x1f);
          uVar7 = (uint)puVar1 & 7;
          piVar2 = (this->fExpenses).fSpent + 6;
          uVar8 = (uint)piVar2 & 7;
          uVar19 = (*(long *)(puVar1 + -uVar7) << (7 - uVar7) * 8 |
                   uVar19 & 0xffffffffffffffffU >> (uVar7 + 1) * 8) & -1L << (8 - uVar8) * 8 |
                   *(ulong *)((int)piVar2 - uVar8) >> uVar8 * 8;
          puVar1 = (undefined *)((int)this->fExpHistory[0].fSpent + 7);
          uVar7 = (uint)puVar1 & 7;
          puVar4 = (ulong *)(puVar1 + -uVar7);
          *puVar4 = *puVar4 & -1L << (uVar7 + 1) * 8 | uVar13 >> (7 - uVar7) * 8;
          uVar7 = (uint)this->fExpHistory & 7;
          puVar4 = (ulong *)((int)this->fExpHistory - uVar7);
          *puVar4 = uVar13 << uVar7 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
          puVar1 = (undefined *)((int)this->fExpHistory[0].fSpent + 0xf);
          uVar7 = (uint)puVar1 & 7;
          puVar4 = (ulong *)(puVar1 + -uVar7);
          *puVar4 = *puVar4 & -1L << (uVar7 + 1) * 8 | uVar15 >> (7 - uVar7) * 8;
          piVar2 = this->fExpHistory[0].fSpent + 2;
          uVar7 = (uint)piVar2 & 7;
          puVar4 = (ulong *)((int)piVar2 - uVar7);
          *puVar4 = uVar15 << uVar7 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
          puVar1 = (undefined *)((int)this->fExpHistory[0].fSpent + 0x17);
          uVar7 = (uint)puVar1 & 7;
          puVar4 = (ulong *)(puVar1 + -uVar7);
          *puVar4 = *puVar4 & -1L << (uVar7 + 1) * 8 | uVar17 >> (7 - uVar7) * 8;
          piVar2 = this->fExpHistory[0].fSpent + 4;
          uVar7 = (uint)piVar2 & 7;
          puVar4 = (ulong *)((int)piVar2 - uVar7);
          *puVar4 = uVar17 << uVar7 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
          puVar1 = (undefined *)((int)this->fExpHistory[0].fSpent + 0x1f);
          uVar7 = (uint)puVar1 & 7;
          puVar4 = (ulong *)(puVar1 + -uVar7);
          *puVar4 = *puVar4 & -1L << (uVar7 + 1) * 8 | uVar19 >> (7 - uVar7) * 8;
          piVar2 = this->fExpHistory[0].fSpent + 6;
          uVar7 = (uint)piVar2 & 7;
          puVar4 = (ulong *)((int)piVar2 - uVar7);
          *puVar4 = uVar19 << uVar7 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Expenses.h */
          reset__13ExpenseReport(&EStack_80);
          puVar1 = (undefined *)((int)(this->fExpenses).fSpent + 7);
                    /* end of inlined section */
          uVar7 = (uint)puVar1 & 7;
          puVar4 = (ulong *)(puVar1 + -uVar7);
          *puVar4 = *puVar4 & -1L << (uVar7 + 1) * 8 | EStack_80.fSpent._0_8_ >> (7 - uVar7) * 8;
          uVar7 = (uint)&this->fExpenses & 7;
          puVar4 = (ulong *)((int)&this->fExpenses - uVar7);
          *puVar4 = EStack_80.fSpent._0_8_ << uVar7 * 8 |
                    *puVar4 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
          puVar1 = (undefined *)((int)(this->fExpenses).fSpent + 0xf);
          uVar7 = (uint)puVar1 & 7;
          puVar4 = (ulong *)(puVar1 + -uVar7);
          *puVar4 = *puVar4 & -1L << (uVar7 + 1) * 8 | EStack_80.fSpent._8_8_ >> (7 - uVar7) * 8;
          piVar2 = (this->fExpenses).fSpent + 2;
          uVar7 = (uint)piVar2 & 7;
          puVar4 = (ulong *)((int)piVar2 - uVar7);
          *puVar4 = EStack_80.fSpent._8_8_ << uVar7 * 8 |
                    *puVar4 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
          puVar1 = (undefined *)((int)(this->fExpenses).fSpent + 0x17);
          uVar7 = (uint)puVar1 & 7;
          puVar4 = (ulong *)(puVar1 + -uVar7);
          *puVar4 = *puVar4 & -1L << (uVar7 + 1) * 8 | EStack_80.fSpent._16_8_ >> (7 - uVar7) * 8;
          piVar2 = (this->fExpenses).fSpent + 4;
          uVar7 = (uint)piVar2 & 7;
          puVar4 = (ulong *)((int)piVar2 - uVar7);
          *puVar4 = EStack_80.fSpent._16_8_ << uVar7 * 8 |
                    *puVar4 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
          puVar1 = (undefined *)((int)(this->fExpenses).fSpent + 0x1f);
          uVar7 = (uint)puVar1 & 7;
          puVar4 = (ulong *)(puVar1 + -uVar7);
          *puVar4 = *puVar4 & -1L << (uVar7 + 1) * 8 | EStack_80.fSpent._24_8_ >> (7 - uVar7) * 8;
          piVar2 = (this->fExpenses).fSpent + 6;
          uVar7 = (uint)piVar2 & 7;
          puVar4 = (ulong *)((int)piVar2 - uVar7);
          *puVar4 = EStack_80.fSpent._24_8_ << uVar7 * 8 |
                    *puVar4 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
          sVar18 = *(short *)&this->field_0x16;
          iVar10 = CountDaysInMonth__8GameTimeii
                             ((int)*(short *)&(this->field29_0x20).fWhat,
                              (int)*(short *)((int)&(this->field29_0x20).fNext + 2));
          if ((long)iVar10 < (long)sVar18) {
            sVar18 = *(short *)((int)&(this->field29_0x20).fNext + 2);
            *(undefined2 *)&this->field_0x16 = 1;
            sVar18 = sVar18 + 1;
            *(short *)((int)&(this->field29_0x20).fNext + 2) = sVar18;
            if (0xc < sVar18) {
              sVar18 = *(short *)&(this->field29_0x20).fWhat;
              *(undefined2 *)((int)&(this->field29_0x20).fNext + 2) = 1;
              *(short *)&(this->field29_0x20).fWhat = sVar18 + 1;
            }
            iVar10 = CountDaysInMonth__8GameTimeii
                               ((int)*(short *)&(this->field29_0x20).fWhat,
                                (int)*(short *)((int)&(this->field29_0x20).fNext + 2));
            *(short *)&this->field_0x4e = (short)iVar10;
          }
        }
      }
    }
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  lVar14 = (*(code *)_5Globs_pObjectModule->__vtable->GetPortal)
                     ((int)&_5Globs_pObjectModule->__vtable +
                      (int)*(short *)&_5Globs_pObjectModule->__vtable->GetNumPeople,!bVar6);
  if (lVar14 != 0) {
    this->fElapsed = 0.0;
  }
  if (command != 0) {
    GlobalDispatch__Fsi(command,0);
  }
  if (bVar5) {
    pcVar3 = (this->field0_0x0).__vtable;
    TVar11 = (*(code *)pcVar3[1].DoStream)
                       ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pcVar3[1].DoCommand);
    TVar12 = ComputeTimeOfDay__14cSimulatorImpl(this);
    if (TVar12 != TVar11) {
      *(short *)&this->field_0x1c = (short)TVar12;
      GlobalDispatch__Fsi(0xdc,0);
    }
  }
  return bVar6;
}

TimeOfDay cSimulatorImpl::ComputeTimeOfDay() {
	TimeOfDay newTimeOfDay;
	
  short sVar1;
  TimeOfDay TVar2;
  
  sVar1 = *(short *)&this->field_0x14;
  TVar2 = kTimeOfDay_Night;
  if ((((5 < sVar1) && (TVar2 = kTimeOfDay_Dawn, 6 < sVar1)) &&
      (TVar2 = kTimeOfDay_Day, 0x11 < sVar1)) && (TVar2 = kTimeOfDay_Night, sVar1 < 0x13)) {
    TVar2 = kTimeOfDay_Dusk;
  }
  return TVar2;
}

bool cSimulatorImpl::TickAllObjects() {
	bool paused;
	int maxID;
	cXObject *obj;
	int idleStatus;
	
  cSimulator__vtable *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  
  bVar2 = false;
  pcVar1 = (this->field0_0x0).__vtable;
  lVar5 = (*(code *)pcVar1->GetDaysRunning)
                    ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pcVar1->GetExpensesHistory)
  ;
  if (lVar5 == 0) {
    pcVar1 = (this->field0_0x0).__vtable;
    lVar5 = (*(code *)pcVar1->GetTicks)
                      ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pcVar1->SetCurrentHour);
    if ((lVar5 != 0) && (*(short *)&(this->field29_0x20).fId != 0)) {
      bVar2 = true;
    }
  }
  else {
    bVar2 = true;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  iVar3 = (*(code *)_5Globs_pObjectModule->__vtable->GetGlobalRoutingSlot)
                    ((int)&_5Globs_pObjectModule->__vtable +
                     (int)*(short *)&_5Globs_pObjectModule->__vtable->EnqueueObjectDialog);
  if (this->fCurObjectID == 0) {
    this->fCurObjectID = 1;
    iVar4 = this->fCurObjectID;
  }
  else {
    iVar4 = this->fCurObjectID;
  }
  if (iVar3 < iVar4) {
    this->fCurObjectID = 0;
  }
  else {
    do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      lVar5 = (*(code *)_5Globs_pObjectModule->__vtable->AdvanceSelectedPerson)
                        ((int)&_5Globs_pObjectModule->__vtable +
                         (int)*(short *)&_5Globs_pObjectModule->__vtable->SetSelectedPerson);
      if (lVar5 == 0) {
        iVar4 = this->fCurObjectID;
      }
      else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
        lVar6 = (*(code *)_5Globs_pObjectModule->__vtable[1].GetIdleStatus)
                          ((int)&_5Globs_pObjectModule->__vtable +
                           (int)*(short *)&_5Globs_pObjectModule->__vtable[1].ClearIdleStatus,
                           this->fCurObjectID,4);
        piVar7 = (int *)lVar5;
        if (lVar6 != 0) {
          iVar4 = *(int *)(*piVar7 + 0x1c);
          lVar5 = (**(code **)(iVar4 + 0x2c))(*piVar7 + (int)*(short *)(iVar4 + 0x28));
          if (lVar5 != 0) {
            iVar3 = piVar7[1];
            goto LAB_0028bd48;
          }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
          (*(code *)_5Globs_pObjectModule->__vtable[1].SetIdleStatus)
                    ((int)&_5Globs_pObjectModule->__vtable +
                     (int)*(short *)&_5Globs_pObjectModule->__vtable[1].IsBuyAndBuildDisabled,
                     this->fCurObjectID,4,0);
        }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
        lVar5 = (*(code *)_5Globs_pObjectModule->__vtable[1].GetIdleStatus)
                          ((int)&_5Globs_pObjectModule->__vtable +
                           (int)*(short *)&_5Globs_pObjectModule->__vtable[1].ClearIdleStatus,
                           this->fCurObjectID,1);
        if (lVar5 == 0) {
          iVar4 = this->fCurObjectID;
        }
        else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
          if ((bVar2) &&
             (lVar5 = (*(code *)_5Globs_pObjectModule->__vtable[1].GetIdleStatus)
                                ((int)&_5Globs_pObjectModule->__vtable +
                                 (int)*(short *)&_5Globs_pObjectModule->__vtable[1].ClearIdleStatus,
                                 this->fCurObjectID,2), lVar5 == 0)) {
            iVar4 = this->fCurObjectID;
          }
          else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
            lVar5 = (*(code *)_5Globs_pObjectModule->__vtable[1].EnableBuyAndBuild)
                              ((int)&_5Globs_pObjectModule->__vtable +
                               (int)*(short *)&_5Globs_pObjectModule->__vtable[1].DisableBuyAndBuild
                               ,this->fCurObjectID);
            if (lVar5 < 1) {
              iVar4 = *(int *)(*piVar7 + 0x1c);
              lVar5 = (**(code **)(iVar4 + 0x1c))
                                (*piVar7 + (int)*(short *)(iVar4 + 0x18),this->fTicks);
              if (lVar5 == 0) {
                return false;
              }
              iVar4 = *(int *)(*piVar7 + 0x1c);
              lVar5 = (**(code **)(iVar4 + 0x2c))(*piVar7 + (int)*(short *)(iVar4 + 0x28));
              if (lVar5 != 0) {
                iVar3 = piVar7[1];
LAB_0028bd48:
                (**(code **)(iVar3 + 0xf4))((int)piVar7 + (int)*(short *)(iVar3 + 0xf0));
                return false;
              }
              iVar4 = this->fCurObjectID;
            }
            else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
              (*(code *)_5Globs_pObjectModule->__vtable[1].ShowTutorialInfo)
                        ((int)&_5Globs_pObjectModule->__vtable +
                         (int)*(short *)&_5Globs_pObjectModule->__vtable[1].SetTutorialObject,
                         this->fCurObjectID,(int)lVar5 + -1);
              iVar4 = this->fCurObjectID;
            }
          }
        }
      }
      this->fCurObjectID = iVar4 + 1;
    } while (iVar4 + 1 <= iVar3);
    this->fCurObjectID = 0;
  }
  return (bool)(bVar2 ^ 1);
}

void cSimulatorImpl::SetSpeed(SimSpeed speed) {
  *(short *)&this->field_0x34 = (short)speed;
  this->fElapsed = 0.0;
  GlobalDispatch__Fsi(0xc1,0);
  return;
}

SimSpeed cSimulatorImpl::GetSpeed() {
  return (SimSpeed)*(short *)&this->field_0x34;
}

void cSimulatorImpl::Pause() {
  cSimulator__vtable *pcVar1;
  long lVar2;
  
  pcVar1 = (this->field0_0x0).__vtable;
  lVar2 = (*(code *)pcVar1->GetDaysRunning)
                    ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pcVar1->GetExpensesHistory)
  ;
  if (lVar2 == 0) {
    *(undefined2 *)&this->field_0x36 = 1;
    GlobalDispatch__Fsi(0xc1,0);
  }
  return;
}

void cSimulatorImpl::Resume() {
  cSimulator__vtable *pcVar1;
  long lVar2;
  
  pcVar1 = (this->field0_0x0).__vtable;
  lVar2 = (*(code *)pcVar1->GetDaysRunning)
                    ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pcVar1->GetExpensesHistory)
  ;
  if (lVar2 != 0) {
    *(undefined2 *)&this->field_0x36 = 0;
    GlobalDispatch__Fsi(0xc1,0);
    this->fElapsed = 0.0;
  }
  return;
}

bool cSimulatorImpl::IsPaused() {
  return *(short *)&this->field_0x36 != 0;
}

void cSimulatorImpl::SetCurrentHour(Int newHour) {
	TimeOfDay lastTimeOfDay;
	TimeOfDay newTimeOfDay;
	
  cSimulator__vtable *pcVar1;
  TimeOfDay TVar2;
  TimeOfDay TVar3;
  
  *(short *)&this->field_0x14 = (short)newHour;
  *(undefined2 *)&this->field_0x1e = 0;
  GlobalDispatch__Fsi(0xda,0);
  pcVar1 = (this->field0_0x0).__vtable;
  TVar2 = (*(code *)pcVar1[1].DoStream)
                    ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pcVar1[1].DoCommand);
  TVar3 = ComputeTimeOfDay__14cSimulatorImpl(this);
  if (TVar3 != TVar2) {
    *(short *)&this->field_0x1c = (short)TVar3;
    GlobalDispatch__Fsi(0xdc,0);
  }
  return;
}

SInt32 cSimulatorImpl::GetFunds() {
  return this->fFunds + this->fPendingFunds;
}

void cSimulatorImpl::SetFunds(SInt32 newFunds) {
  this->fPendingFunds = newFunds - this->fFunds;
  *(short *)&this->field_0x30 = (short)(newFunds / 10000);
  *(short *)((int)&(this->field29_0x20).__vtable + 2) = (short)(newFunds % 10000);
  return;
}

void cSimulatorImpl::Spend(ExpenseType expType, SInt32 amount) {
	SInt32 newFunds;
	ExpenseReport *this;
	Int amount;
	
  int iVar1;
  int *piVar2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Expenses.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Expenses.h */
  piVar2 = (this->fExpenses).fSpent + expType;
                    /* end of inlined section */
  iVar1 = (this->fFunds + this->fPendingFunds) - amount;
  this->fPendingFunds = iVar1 - this->fFunds;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Expenses.h */
  *piVar2 = *piVar2 + amount;
                    /* end of inlined section */
  *(short *)&this->field_0x30 = (short)(iVar1 / 10000);
  *(short *)((int)&(this->field29_0x20).__vtable + 2) = (short)(iVar1 % 10000);
  return;
}

void cSimulatorImpl::ClearHistory() {
	int i;
	int i;
	ExpenseReport *this;
	int i;
	
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Expenses.h */
  iVar3 = 7;
  piVar1 = (this->fExpenses).fSpent + 7;
  do {
    *piVar1 = 0;
    iVar3 = iVar3 + -1;
    piVar1 = piVar1 + -1;
  } while (-1 < iVar3);
                    /* end of inlined section */
  iVar5 = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Expenses.h */
  iVar3 = 0;
  do {
    iVar5 = iVar5 + 1;
    iVar4 = 7;
    puVar2 = (undefined4 *)((int)this->fExpHistory[0].fSpent + iVar3 + 0x1c);
    do {
      *puVar2 = 0;
      iVar4 = iVar4 + -1;
      puVar2 = puVar2 + -1;
    } while (-1 < iVar4);
                    /* end of inlined section */
    iVar3 = iVar5 * 0x20;
  } while (iVar5 < 5);
  *(undefined2 *)&this->field_0x4c = 0;
  return;
}

int cSimulatorImpl::GetDaysRunning() {
  return (int)*(short *)&this->field_0x4c;
}

void cSimulatorImpl::SetGlobal(SInt16 index, SInt16 newValue) {
  *(ushort *)(&this->field_0x14 + (((int)(short)index << 0x10) >> 0xf)) = newValue;
  return;
}

void cSimulatorImpl::RestoreTrueDt() {
  _dt = this->fOrigDt;
  this->fOrigDt = -1.0;
  return;
}

void cSimulatorImpl::Simulate() {
	float dt;
	float overtime;
	SimSpeed speed;
	SInt16 clockTime;
	
  cSimulator__vtable *pcVar1;
  short sVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = _dt;
  *(undefined4 *)&this->fInsideSimulate = 1;
  pcVar1 = (this->field0_0x0).__vtable;
  fVar7 = fVar7 * 1000.0;
  fVar7 = (float)((int)fVar7 * (uint)(fVar7 < 66.67) | (uint)(fVar7 >= 66.67) * 0x4285570a);
  lVar3 = (*(code *)pcVar1->GetDaysRunning)
                    ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pcVar1->GetExpensesHistory)
  ;
  if (lVar3 != 0) goto LAB_0028c17c;
  pcVar1 = (this->field0_0x0).__vtable;
  lVar3 = (*(code *)pcVar1->DoStream)
                    ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pcVar1->DoCommand);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Simulator.h */
  if (lVar3 == -2) {
    fVar6 = 4.0;
    fVar4 = fVar7 * 4.0;
  }
  else if (lVar3 < -1) {
    if (lVar3 == -3) {
      fVar6 = 10.0;
      fVar4 = fVar7 * 10.0;
    }
    else {
LAB_0028c13c:
      fVar6 = 0.0;
                    /* end of inlined section */
      fVar4 = fVar7 * 0.0;
    }
  }
  else if (lVar3 == -1) {
    fVar6 = 0.5;
    fVar4 = fVar7 * 0.5;
  }
  else {
    if (lVar3 != 0) goto LAB_0028c13c;
    fVar6 = 1.0;
    fVar4 = fVar7 * 1.0;
  }
  fVar4 = this->fElapsed + fVar4;
  fVar5 = fVar4 - 840.0;
  this->fElapsed = fVar4;
  if (0.0 < fVar5) {
    this->fElapsed = 840.0;
    fVar7 = fVar7 - fVar5 / fVar6;
  }
LAB_0028c17c:
  this->fOrigDt = _dt;
  pcVar1 = (this->field0_0x0).__vtable;
  _dt = fVar7 * 0.001;
  lVar3 = (*(code *)pcVar1->GetDaysRunning)
                    ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pcVar1->GetExpensesHistory)
  ;
  if (lVar3 == 0) {
    if (*(short *)&this->field_0x5e < 1) {
      this->m_fSecondsSinceStopWatchStart = 0.0;
      this->m_fTotalStopWatchTime = 0.0;
    }
    else {
      if (this->m_fSecondsSinceStopWatchStart == 0.0) {
        this->m_fTotalStopWatchTime = (float)(int)*(short *)&this->field_0x5e;
      }
      fVar7 = this->m_fSecondsSinceStopWatchStart + _dt;
      this->m_fSecondsSinceStopWatchStart = fVar7;
      sVar2 = (short)(int)(this->m_fTotalStopWatchTime - fVar7);
      if (sVar2 < 0) {
        sVar2 = 0;
      }
      *(short *)&this->field_0x5e = sVar2;
    }
    fVar7 = this->fElapsed;
    while (42.0 <= fVar7) {
      this->fElapsed = fVar7 - 42.0;
      SimulateOneTick__14cSimulatorImpl(this);
      if (*(short *)((int)&(this->field29_0x20).fId + 2) != 0) {
        *(undefined2 *)((int)&(this->field29_0x20).fId + 2) = 0;
        break;
      }
      fVar7 = this->fElapsed;
    }
    *(undefined4 *)&this->fInsideSimulate = 0;
  }
  else {
    *(undefined4 *)&this->fInsideSimulate = 0;
  }
  return;
}

void cSimulatorImpl::GetTodaysExpenses(ExpenseReport *outReport) {
  int *piVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong in_v0;
  ulong uVar6;
  ulong in_v1;
  ulong uVar7;
  ulong in_a2;
  ulong uVar8;
  ulong in_a3;
  ulong uVar9;
  
  puVar2 = (undefined *)((int)(this->fExpenses).fSpent + 7);
  uVar3 = (uint)puVar2 & 7;
  uVar4 = (uint)&this->fExpenses & 7;
  uVar6 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)&this->fExpenses - uVar4) >> uVar4 * 8;
  puVar2 = (undefined *)((int)(this->fExpenses).fSpent + 0xf);
  uVar3 = (uint)puVar2 & 7;
  piVar1 = (this->fExpenses).fSpent + 2;
  uVar4 = (uint)piVar1 & 7;
  uVar7 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
          in_v1 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)piVar1 - uVar4) >> uVar4 * 8;
  puVar2 = (undefined *)((int)(this->fExpenses).fSpent + 0x17);
  uVar3 = (uint)puVar2 & 7;
  piVar1 = (this->fExpenses).fSpent + 4;
  uVar4 = (uint)piVar1 & 7;
  uVar8 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
          in_a2 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)piVar1 - uVar4) >> uVar4 * 8;
  puVar2 = (undefined *)((int)(this->fExpenses).fSpent + 0x1f);
  uVar3 = (uint)puVar2 & 7;
  piVar1 = (this->fExpenses).fSpent + 6;
  uVar4 = (uint)piVar1 & 7;
  uVar9 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
          in_a3 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)piVar1 - uVar4) >> uVar4 * 8;
  puVar2 = (undefined *)((int)outReport->fSpent + 7);
  uVar3 = (uint)puVar2 & 7;
  puVar5 = (ulong *)(puVar2 + -uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar6 >> (7 - uVar3) * 8;
  uVar3 = (uint)outReport & 7;
  *(ulong *)((int)outReport - uVar3) =
       uVar6 << uVar3 * 8 |
       *(ulong *)((int)outReport - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar2 = (undefined *)((int)outReport->fSpent + 0xf);
  uVar3 = (uint)puVar2 & 7;
  puVar5 = (ulong *)(puVar2 + -uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar7 >> (7 - uVar3) * 8;
  uVar3 = (uint)(outReport->fSpent + 2) & 7;
  puVar5 = (ulong *)((int)(outReport->fSpent + 2) - uVar3);
  *puVar5 = uVar7 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar2 = (undefined *)((int)outReport->fSpent + 0x17);
  uVar3 = (uint)puVar2 & 7;
  puVar5 = (ulong *)(puVar2 + -uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
  uVar3 = (uint)(outReport->fSpent + 4) & 7;
  puVar5 = (ulong *)((int)(outReport->fSpent + 4) - uVar3);
  *puVar5 = uVar8 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar2 = (undefined *)((int)outReport->fSpent + 0x1f);
  uVar3 = (uint)puVar2 & 7;
  puVar5 = (ulong *)(puVar2 + -uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar9 >> (7 - uVar3) * 8;
  uVar3 = (uint)(outReport->fSpent + 6) & 7;
  puVar5 = (ulong *)((int)(outReport->fSpent + 6) - uVar3);
  *puVar5 = uVar9 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  return;
}

void cSimulatorImpl::GetPreviousExpenses(int days_back, ExpenseReport *outReport) {
  int *piVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong in_v0;
  ulong uVar6;
  ulong in_v1;
  ulong uVar7;
  ulong uVar8;
  ulong in_a3;
  ulong uVar9;
  
  puVar2 = (undefined *)((int)this->fExpHistory[days_back].fSpent + 7);
  uVar3 = (uint)puVar2 & 7;
  uVar4 = (uint)(this->fExpHistory + days_back) & 7;
  uVar6 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)(this->fExpHistory + days_back) - uVar4) >> uVar4 * 8;
  puVar2 = (undefined *)((int)this->fExpHistory[days_back].fSpent + 0xf);
  uVar3 = (uint)puVar2 & 7;
  piVar1 = this->fExpHistory[days_back].fSpent + 2;
  uVar4 = (uint)piVar1 & 7;
  uVar7 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
          in_v1 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)piVar1 - uVar4) >> uVar4 * 8;
  puVar2 = (undefined *)((int)this->fExpHistory[days_back].fSpent + 0x17);
  uVar3 = (uint)puVar2 & 7;
  piVar1 = this->fExpHistory[days_back].fSpent + 4;
  uVar4 = (uint)piVar1 & 7;
  uVar8 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
          (long)(int)this & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)piVar1 - uVar4) >> uVar4 * 8;
  puVar2 = (undefined *)((int)this->fExpHistory[days_back].fSpent + 0x1f);
  uVar3 = (uint)puVar2 & 7;
  piVar1 = this->fExpHistory[days_back].fSpent + 6;
  uVar4 = (uint)piVar1 & 7;
  uVar9 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
          in_a3 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)piVar1 - uVar4) >> uVar4 * 8;
  puVar2 = (undefined *)((int)outReport->fSpent + 7);
  uVar3 = (uint)puVar2 & 7;
  puVar5 = (ulong *)(puVar2 + -uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar6 >> (7 - uVar3) * 8;
  uVar3 = (uint)outReport & 7;
  *(ulong *)((int)outReport - uVar3) =
       uVar6 << uVar3 * 8 |
       *(ulong *)((int)outReport - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar2 = (undefined *)((int)outReport->fSpent + 0xf);
  uVar3 = (uint)puVar2 & 7;
  puVar5 = (ulong *)(puVar2 + -uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar7 >> (7 - uVar3) * 8;
  uVar3 = (uint)(outReport->fSpent + 2) & 7;
  puVar5 = (ulong *)((int)(outReport->fSpent + 2) - uVar3);
  *puVar5 = uVar7 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar2 = (undefined *)((int)outReport->fSpent + 0x17);
  uVar3 = (uint)puVar2 & 7;
  puVar5 = (ulong *)(puVar2 + -uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
  uVar3 = (uint)(outReport->fSpent + 4) & 7;
  puVar5 = (ulong *)((int)(outReport->fSpent + 4) - uVar3);
  *puVar5 = uVar8 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar2 = (undefined *)((int)outReport->fSpent + 0x1f);
  uVar3 = (uint)puVar2 & 7;
  puVar5 = (ulong *)(puVar2 + -uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar9 >> (7 - uVar3) * 8;
  uVar3 = (uint)(outReport->fSpent + 6) & 7;
  puVar5 = (ulong *)((int)(outReport->fSpent + 6) - uVar3);
  *puVar5 = uVar9 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  return;
}

void cSimulatorImpl::GetExpensesHistory(ExpenseReport *outReport) {
	ExpenseReport *contributors[3];
	ExpenseType et;
	Int total;
	int i;
	ExpenseReport *this;
	ExpenseType et;
	ExpenseReport *this;
	ExpenseType et;
	Int amount;
	
  int iVar1;
  int iVar2;
  ExpenseReport **ppEVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ExpenseReport *contributors [3];
  
  contributors[1] = this->fExpHistory + 1;
  contributors[0] = this->fExpHistory;
  contributors[2] = &this->fExpenses;
  iVar2 = 0;
  do {
    iVar6 = iVar2 + 1;
    iVar5 = 0;
    iVar4 = 2;
    ppEVar3 = contributors;
    do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Expenses.h */
      iVar1 = (int)*ppEVar3;
                    /* end of inlined section */
      iVar4 = iVar4 + -1;
      ppEVar3 = (ExpenseReport **)((int *)ppEVar3 + 1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Expenses.h */
                    /* end of inlined section */
      iVar5 = iVar5 + *(int *)(iVar1 + iVar2 * 4);
    } while (-1 < iVar4);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Expenses.h */
                    /* end of inlined section */
                    /* end of inlined section */
    outReport->fSpent[iVar2] = iVar5;
    iVar2 = iVar6;
  } while (iVar6 < 8);
  return;
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

void ExpenseReport::reset() {
	int i;
	
  int iVar1;
  int *piVar2;
  
  piVar2 = this->fSpent + 7;
  iVar1 = 7;
  do {
    *piVar2 = 0;
    iVar1 = iVar1 + -1;
    piVar2 = piVar2 + -1;
  } while (-1 < iVar1);
  return;
}

void cSimulator::~cSimulator(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (cSimulator__vtable *)_vt_10cSimulator;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

SInt16 cSimulatorImpl::GetGlobal(SInt16 index) {
  return *(ushort *)(&this->field_0x14 + (((int)(short)index << 0x10) >> 0xf));
}

bool cSimulatorImpl::IsStopped() {
  return this->fCurObjectID != 0;
}

Mode cSimulatorImpl::GetMode() {
  return (Mode__0_1044)*(short *)&this->field_0x3a;
}

void cSimulatorImpl::SetMode(Mode mode) {
  *(short *)&this->field_0x3a = (short)mode;
  return;
}

SInt32 cSimulatorImpl::GetTicks() {
  return this->fTicks;
}

TimeOfDay cSimulatorImpl::GetTimeOfDay() {
  cSimulator__vtable *pcVar1;
  TimeOfDay TVar2;
  
  pcVar1 = (this->field0_0x0).__vtable;
  TVar2 = (*(code *)pcVar1->Resume)
                    ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pcVar1->Pause,4);
  return TVar2;
}

void cSimulatorImpl::SetTimeOfDay(TimeOfDay inTime) {
  *(short *)&this->field_0x1c = (short)inTime;
  return;
}

bool cSimulatorImpl::GetTutorialOn() {
  cSimulator__vtable *pcVar1;
  long lVar2;
  
  pcVar1 = (this->field0_0x0).__vtable;
  lVar2 = (*(code *)pcVar1->Resume)
                    ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pcVar1->Pause,0x1a);
  return lVar2 != 0;
}

Int cSimulatorImpl::GetLotValue() {
  return this->fLotValue;
}

void cSimulatorImpl::SetLotValue(Int lotValue) {
  this->fLotValue = lotValue;
  return;
}

Int cSimulatorImpl::GetArchValue() {
  return this->fArchValue;
}

void cSimulatorImpl::SetArchValue(Int archValue) {
  this->fArchValue = archValue;
  *(short *)&this->field_0x5a = (short)(archValue % 10000);
  *(short *)&this->field_0x5c = (short)(archValue / 10000);
  return;
}

Int cSimulatorImpl::GetObjectsValue() {
  return this->fObjectsValue;
}

void cSimulatorImpl::SetObjectsValue(Int objectsValue) {
  *(short *)&this->field_0x56 = (short)(objectsValue % 10000);
  this->fObjectsValue = objectsValue;
  *(short *)&this->field_0x58 = (short)(objectsValue / 10000);
  return;
}

SimLoopProbe* cSimulatorImpl::GetProbe() {
  return this->fProbe;
}

void cSimulatorImpl::SetProbe(SimLoopProbe *probe) {
  this->fProbe = probe;
  return;
}

// STATUS: NOT STARTED

#include "object.h"

// warning: multiple differing types with the same name (name not equal)
struct cXMTObjectImpl : virtual cXMTObject, virtual cXObjectImpl {
	cXObjectImpl *$vb901;
	cXMTObject *$vb1938;
	cXMTObjectImpl *fMultiNext;
	cXMTObjectImpl *fLeadObject;
	Int fNormXOff;
	Int fNormYOff;
	Int fNormLevelOff;
	Int fXOff;
	Int fYOff;
	Int fLevelOff;
	
	cXMTObjectImpl& operator=();
	cXMTObjectImpl();
	void SetLeader();
	void RemoveFromChain();
	void UpdateDynAdjacency();
	void UpdateAllAdjacecy();
	void MergeDynamic();
	cXMTObjectImpl();
	/* vtable[1] */ virtual cXMTObjectImpl(cXMTObjectImpl*, int, void);
	/* vtable[1] */ virtual void Initialize();
	/* vtable[2] */ virtual cXMTObject* GetFirstMultiTileObject();
	/* vtable[3] */ virtual cXMTObject* GetNextMultiTileObject();
	/* vtable[31] */ virtual void Turn();
	/* vtable[32] */ virtual void Pickup();
	/* vtable[33] */ virtual bool CanPlace();
	/* vtable[34] */ virtual void Place();
	/* vtable[4] */ virtual void Reset();
	/* vtable[35] */ virtual bool IsPartOfMe();
	/* vtable[36] */ virtual bool UserCanPlace();
	/* vtable[37] */ virtual void UserPlace();
	/* vtable[38] */ virtual bool UserCanPickup();
	/* vtable[39] */ virtual void UserPickup();
	/* vtable[40] */ virtual bool UserCanDelete();
	/* vtable[5] */ virtual void AssignOffsets();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[130] */ virtual void ReconStream();
	/* vtable[6] */ virtual void PostLoad(cXMTObjectImpl*, int, void);
	/* vtable[7] */ virtual void SetMultiObjectData();
	/* vtable[8] */ virtual void DirtyAll();
	/* vtable[9] */ virtual bool IsDynamic();
	/* vtable[10] */ virtual void MergeInPlace();
	/* vtable[11] */ virtual void RemoveFromDynamic();
	/* vtable[12] */ virtual cXMTObjectImpl* GetMTObjectImplementation();
	/* vtable[16] */ virtual ISimInstance* GetISimInstance();
	ISimInstance* GetISimInstanceBaseVer();
	cXMTObjectImpl* CAST_IMPL();
};

// warning: multiple differing types with the same name (name not equal)
struct cXPortal : virtual cXMTObject {
	cXMTObject *$vb1938;
	__vtbl_ptr_type *$vf1310;
	
	cXPortal& operator=();
	cXPortal();
protected:
	cXPortal();
	/* vtable[1] */ virtual cXPortal(cXPortal*, int, void);
	void setPortalImpl();
public:
	static bool InitPortalRoute(/* parameters unknown */);
	static cXPortal* FindBestPortal(/* parameters unknown */);
	static float EstimateDistance(/* parameters unknown */);
	static void BeginningPortalTree(/* parameters unknown */);
	static void FailedPortalTree(/* parameters unknown */);
	static void DirtyAllRoutes(/* parameters unknown */);
	static void DumpRouteScores(/* parameters unknown */);
	/* vtable[34] */ virtual void Place();
	/* vtable[33] */ virtual bool CanPlace();
	/* vtable[32] */ virtual void Pickup();
	/* vtable[1] */ virtual void Initialize();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[130] */ virtual void ReconStream();
	/* vtable[6] */ virtual void PostLoad(cXPortal*, int, void);
	/* vtable[1] */ virtual cXPortal* GetOtherSide();
	/* vtable[14] */ virtual int GetDynamicToStaticLatency();
	/* vtable[2] */ virtual WallStyle GetWallStyle();
	/* vtable[3] */ virtual int GetCustomWallStyleID();
	/* vtable[4] */ virtual cXPortalImpl* GetPortalImplementation();
	cXPortalImpl* CAST_IMPL();
};

int cXObjectImpl::sXDirTable[9] = {
	/* [0] = */ 0,
	/* [1] = */ 1,
	/* [2] = */ 1,
	/* [3] = */ 1,
	/* [4] = */ 0,
	/* [5] = */ -1,
	/* [6] = */ -1,
	/* [7] = */ -1,
	/* [8] = */ 0
};

int cXObjectImpl::sYDirTable[9] = {
	/* [0] = */ -1,
	/* [1] = */ -1,
	/* [2] = */ 0,
	/* [3] = */ 1,
	/* [4] = */ 1,
	/* [5] = */ 1,
	/* [6] = */ 0,
	/* [7] = */ -1,
	/* [8] = */ 0
};

Int cXObjectImpl::gPersonWidth = 6;
bool cXObjectImpl::sFreeWill = true;
bool cXObjectImpl::sAutoCenter = true;
bool cXObjectImpl::sAutoReset = true;

BString2 cXObjectImpl::sLastUserTypedName = {
	/* .reference = */ NULL
};

Int gPlacementError = 0;
cXObject *gPlacementConflict = NULL;

__vtbl_ptr_type cXObjectImpl virtual table[8] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GosubObjectTree,
		/* .__delta2 = */ 6504
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::Cleanup,
		/* .__delta2 = */ 8424
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::Initialize,
		/* .__delta2 = */ 6280
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::Reset,
		/* .__delta2 = */ 6872
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::PostLoad,
		/* .__delta2 = */ 7760
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::PreSave,
		/* .__delta2 = */ 8416
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type cXObjectImpl::TreeSimImpl virtual table[6] = {
	/* [0] = */ {
		/* .__delta = */ -348,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -348,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::TryElement,
		/* .__delta2 = */ 4936
	},
	/* [2] = */ {
		/* .__delta = */ -348,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::Error,
		/* .__delta2 = */ 1848
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::StackJustPopped,
		/* .__delta2 = */ 21144
	},
	/* [4] = */ {
		/* .__delta = */ -348,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::HandleBreakpoint,
		/* .__delta2 = */ -31040
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type cXObjectImpl::cXObject virtual table[140] = {
	/* [0] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::Kill,
		/* .__delta2 = */ -29360
	},
	/* [2] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetNumAttr,
		/* .__delta2 = */ -29264
	},
	/* [3] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::CalcDistance,
		/* .__delta2 = */ 24888
	},
	/* [4] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::CalcShortDistance,
		/* .__delta2 = */ 24568
	},
	/* [5] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::CalcShortDistance,
		/* .__delta2 = */ 24800
	},
	/* [6] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetSpriteSlot,
		/* .__delta2 = */ 19792
	},
	/* [7] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetHilite,
		/* .__delta2 = */ 8984
	},
	/* [8] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetHilite,
		/* .__delta2 = */ 8968
	},
	/* [9] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetMiscFlag,
		/* .__delta2 = */ -29256
	},
	/* [10] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetMiscFlag,
		/* .__delta2 = */ -29216
	},
	/* [11] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::UpdateSimFlags,
		/* .__delta2 = */ -32136
	},
	/* [12] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::Dirty,
		/* .__delta2 = */ 24256
	},
	/* [13] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetRenderLayer,
		/* .__delta2 = */ 27008
	},
	/* [14] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetDynamicToStaticLatency,
		/* .__delta2 = */ 26704
	},
	/* [15] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetRenderLayer,
		/* .__delta2 = */ -29200
	},
	/* [16] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsRenderingRoot,
		/* .__delta2 = */ -29192
	},
	/* [17] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetLastDamage,
		/* .__delta2 = */ -29144
	},
	/* [18] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetLastDamage,
		/* .__delta2 = */ 26992
	},
	/* [19] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::ResetDamage,
		/* .__delta2 = */ 27000
	},
	/* [20] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsEmissive,
		/* .__delta2 = */ -29136
	},
	/* [21] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsBeingDraggedAround,
		/* .__delta2 = */ 29352
	},
	/* [22] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::CenterHouseViewOnMe,
		/* .__delta2 = */ 28704
	},
	/* [23] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetDrawLabel,
		/* .__delta2 = */ -31096
	},
	/* [24] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsSpriteVisible,
		/* .__delta2 = */ -31376
	},
	/* [25] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::RunTree,
		/* .__delta2 = */ 6712
	},
	/* [26] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::RunTree,
		/* .__delta2 = */ -29024
	},
	/* [27] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::RunTree,
		/* .__delta2 = */ -31288
	},
	/* [28] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::ParseUIString,
		/* .__delta2 = */ -24464
	},
	/* [29] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::Error,
		/* .__delta2 = */ 1848
	},
	/* [30] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::HandleError,
		/* .__delta2 = */ 1992
	},
	/* [31] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::Turn,
		/* .__delta2 = */ 23752
	},
	/* [32] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::Pickup,
		/* .__delta2 = */ 17952
	},
	/* [33] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::CanPlace,
		/* .__delta2 = */ 18752
	},
	/* [34] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::Place,
		/* .__delta2 = */ 18896
	},
	/* [35] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsPartOfMe,
		/* .__delta2 = */ 22024
	},
	/* [36] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::UserCanPlace,
		/* .__delta2 = */ 30872
	},
	/* [37] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::UserPlace,
		/* .__delta2 = */ 31360
	},
	/* [38] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::UserCanPickup,
		/* .__delta2 = */ 30128
	},
	/* [39] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::UserPickup,
		/* .__delta2 = */ 31648
	},
	/* [40] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::UserCanDelete,
		/* .__delta2 = */ 30576
	},
	/* [41] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::FindGoodLocation,
		/* .__delta2 = */ 27240
	},
	/* [42] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetPlacementInfo,
		/* .__delta2 = */ 13680
	},
	/* [43] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsInWorld,
		/* .__delta2 = */ 13832
	},
	/* [44] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::TestIntersection,
		/* .__delta2 = */ 20600
	},
	/* [45] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::ForceLocation,
		/* .__delta2 = */ 22040
	},
	/* [46] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetFnTable,
		/* .__delta2 = */ -28728
	},
	/* [47] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetTreeID,
		/* .__delta2 = */ -28696
	},
	/* [48] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetLevel,
		/* .__delta2 = */ -31448
	},
	/* [49] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsOccupied,
		/* .__delta2 = */ -28616
	},
	/* [50] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetData,
		/* .__delta2 = */ -28600
	},
	/* [51] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetTemp,
		/* .__delta2 = */ -28584
	},
	/* [52] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetAttr,
		/* .__delta2 = */ -28568
	},
	/* [53] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetObjectProbe,
		/* .__delta2 = */ -28544
	},
	/* [54] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetObjectProbe,
		/* .__delta2 = */ -28536
	},
	/* [55] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetInteractionLeader,
		/* .__delta2 = */ 29856
	},
	/* [56] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetFrontFaceDirection,
		/* .__delta2 = */ 28712
	},
	/* [57] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetFolder,
		/* .__delta2 = */ -28528
	},
	/* [58] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SimIndependent,
		/* .__delta2 = */ -28512
	},
	/* [59] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SimEnabled,
		/* .__delta2 = */ -28496
	},
	/* [60] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::EnableSim,
		/* .__delta2 = */ -28392
	},
	/* [61] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetIdleStatus,
		/* .__delta2 = */ -28272
	},
	/* [62] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetIdleStatus,
		/* .__delta2 = */ -28176
	},
	/* [63] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::ClearIdleStatus,
		/* .__delta2 = */ -28064
	},
	/* [64] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetRect,
		/* .__delta2 = */ -27968
	},
	/* [65] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetData,
		/* .__delta2 = */ -27960
	},
	/* [66] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetTemp,
		/* .__delta2 = */ -27944
	},
	/* [67] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetAttr,
		/* .__delta2 = */ -27928
	},
	/* [68] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetModule,
		/* .__delta2 = */ -27904
	},
	/* [69] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetAdultAnimTable,
		/* .__delta2 = */ -27896
	},
	/* [70] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetChildAnimTable,
		/* .__delta2 = */ -27864
	},
	/* [71] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::HideForCutaway,
		/* .__delta2 = */ -27832
	},
	/* [72] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetRequiredSegment,
		/* .__delta2 = */ -32568
	},
	/* [73] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::CountObjectSlots,
		/* .__delta2 = */ -27728
	},
	/* [74] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetObjectSlot,
		/* .__delta2 = */ 15904
	},
	/* [75] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetContainedObject,
		/* .__delta2 = */ -27688
	},
	/* [76] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetSlotHeight,
		/* .__delta2 = */ 24040
	},
	/* [77] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetContainer,
		/* .__delta2 = */ 15856
	},
	/* [78] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsContained,
		/* .__delta2 = */ 15696
	},
	/* [79] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetContainerID,
		/* .__delta2 = */ 15736
	},
	/* [80] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetContainedSlotNum,
		/* .__delta2 = */ 15816
	},
	/* [81] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetNextObjectSibling,
		/* .__delta2 = */ 14216
	},
	/* [82] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetPrevObjectSibling,
		/* .__delta2 = */ 14248
	},
	/* [83] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetRoom,
		/* .__delta2 = */ -27592
	},
	/* [84] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetDef,
		/* .__delta2 = */ -27584
	},
	/* [85] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetType,
		/* .__delta2 = */ -27576
	},
	/* [86] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetTypeName,
		/* .__delta2 = */ 24376
	},
	/* [87] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetID,
		/* .__delta2 = */ -27560
	},
	/* [88] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetLocation,
		/* .__delta2 = */ -27552
	},
	/* [89] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetLocation,
		/* .__delta2 = */ -27528
	},
	/* [90] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetLevel,
		/* .__delta2 = */ -31456
	},
	/* [91] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetCTilePt,
		/* .__delta2 = */ -31440
	},
	/* [92] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetTreeTab,
		/* .__delta2 = */ -27520
	},
	/* [93] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetSelector,
		/* .__delta2 = */ -27488
	},
	/* [94] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetBehavior,
		/* .__delta2 = */ -27480
	},
	/* [95] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetSelFile,
		/* .__delta2 = */ -27464
	},
	/* [96] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetTileWidth,
		/* .__delta2 = */ 29360
	},
	/* [97] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsMultiTile,
		/* .__delta2 = */ -27416
	},
	/* [98] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetFlags,
		/* .__delta2 = */ -27400
	},
	/* [99] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetWallPlacementFlags,
		/* .__delta2 = */ -27392
	},
	/* [100] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetRelMatrix,
		/* .__delta2 = */ -27384
	},
	/* [101] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetObstacleAtLocation,
		/* .__delta2 = */ 13424
	},
	/* [102] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetNumRoutingSlots,
		/* .__delta2 = */ -27376
	},
	/* [103] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetRoutingSlot,
		/* .__delta2 = */ -27352
	},
	/* [104] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetCurrentValue,
		/* .__delta2 = */ 9456
	},
	/* [105] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetSize,
		/* .__delta2 = */ -27336
	},
	/* [106] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetSim,
		/* .__delta2 = */ -27328
	},
	/* [107] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetErrorString,
		/* .__delta2 = */ 2680
	},
	/* [108] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetAgeInMinutes,
		/* .__delta2 = */ 29528
	},
	/* [109] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::CanChooseAutonomously,
		/* .__delta2 = */ -32400
	},
	/* [110] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetBuildModeType,
		/* .__delta2 = */ -27280
	},
	/* [111] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsSupport,
		/* .__delta2 = */ -27240
	},
	/* [112] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::ShouldAutoRotate,
		/* .__delta2 = */ 32016
	},
	/* [113] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::CanContributeLight,
		/* .__delta2 = */ -27184
	},
	/* [114] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetLightingContribution,
		/* .__delta2 = */ -27168
	},
	/* [115] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetObjectLightSource,
		/* .__delta2 = */ -27160
	},
	/* [116] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsDeletedByEvict,
		/* .__delta2 = */ 30752
	},
	/* [117] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsFromCatalog,
		/* .__delta2 = */ 31936
	},
	/* [118] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsBroken,
		/* .__delta2 = */ -27152
	},
	/* [119] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsDirty,
		/* .__delta2 = */ -27136
	},
	/* [120] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsBurning,
		/* .__delta2 = */ -27120
	},
	/* [121] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::CanBurn,
		/* .__delta2 = */ -27104
	},
	/* [122] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsFireproof,
		/* .__delta2 = */ -27088
	},
	/* [123] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::HasZeroExtent,
		/* .__delta2 = */ -27072
	},
	/* [124] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::CanIntersectPeople,
		/* .__delta2 = */ -27016
	},
	/* [125] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsChair,
		/* .__delta2 = */ -26888
	},
	/* [126] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetObjectFromID,
		/* .__delta2 = */ -26816
	},
	/* [127] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetNext,
		/* .__delta2 = */ -26760
	},
	/* [128] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetFirst,
		/* .__delta2 = */ -26736
	},
	/* [129] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetWallBlockFlags,
		/* .__delta2 = */ -31888
	},
	/* [130] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::ReconStream,
		/* .__delta2 = */ 25288
	},
	/* [131] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::ReconType,
		/* .__delta2 = */ 26688
	},
	/* [132] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::ReconSlots,
		/* .__delta2 = */ 26176
	},
	/* [133] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::ReconHeader,
		/* .__delta2 = */ 25032
	},
	/* [134] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::Backtrace,
		/* .__delta2 = */ 15360
	},
	/* [135] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetName,
		/* .__delta2 = */ -26616
	},
	/* [136] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetDebugName,
		/* .__delta2 = */ 1472
	},
	/* [137] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::AdvanceGraphic,
		/* .__delta2 = */ 32504
	},
	/* [138] = */ {
		/* .__delta = */ -340,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetObjectImplementation,
		/* .__delta2 = */ -26600
	},
	/* [139] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type cXObjectImpl::TreeSim virtual table[18] = {
	/* [0] = */ {
		/* .__delta = */ -308,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -308,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::~cXObjectImpl,
		/* .__delta2 = */ 10544
	},
	/* [2] = */ {
		/* .__delta = */ 40,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::Initialize,
		/* .__delta2 = */ 18040
	},
	/* [3] = */ {
		/* .__delta = */ -308,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::Simulate,
		/* .__delta2 = */ 4760
	},
	/* [4] = */ {
		/* .__delta = */ 40,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::SetError,
		/* .__delta2 = */ 16560
	},
	/* [5] = */ {
		/* .__delta = */ 40,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetError,
		/* .__delta2 = */ 16568
	},
	/* [6] = */ {
		/* .__delta = */ 40,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::ClearError,
		/* .__delta2 = */ 16576
	},
	/* [7] = */ {
		/* .__delta = */ 40,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetHighLevelAction,
		/* .__delta2 = */ 20552
	},
	/* [8] = */ {
		/* .__delta = */ 40,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetCurElem,
		/* .__delta2 = */ 20816
	},
	/* [9] = */ {
		/* .__delta = */ 40,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetMainSimElem,
		/* .__delta2 = */ 20872
	},
	/* [10] = */ {
		/* .__delta = */ 40,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetNthElem,
		/* .__delta2 = */ 21064
	},
	/* [11] = */ {
		/* .__delta = */ 40,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetStackSize,
		/* .__delta2 = */ 21104
	},
	/* [12] = */ {
		/* .__delta = */ 40,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetCurrentPrimitive,
		/* .__delta2 = */ 18200
	},
	/* [13] = */ {
		/* .__delta = */ 40,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetIterations,
		/* .__delta2 = */ 23888
	},
	/* [14] = */ {
		/* .__delta = */ 40,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetLastTransition,
		/* .__delta2 = */ 20384
	},
	/* [15] = */ {
		/* .__delta = */ 40,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetLastResult,
		/* .__delta2 = */ 23896
	},
	/* [16] = */ {
		/* .__delta = */ 40,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetISimInstance,
		/* .__delta2 = */ 17528
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ObjectSlot virtual table[3] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectSlot::~ObjectSlot,
		/* .__delta2 = */ -24448
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type Slot virtual table[3] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &Slot::~Slot,
		/* .__delta2 = */ -24496
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type cXObject virtual table[140] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
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
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [39] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [40] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [41] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [42] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [43] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [44] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [45] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [46] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [47] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [48] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [49] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [50] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [51] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [52] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [53] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [54] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [55] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [56] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [57] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [58] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [59] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [60] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [61] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [62] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [63] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [64] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [65] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [66] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [67] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [68] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [69] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [70] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [71] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [72] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [73] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [74] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [75] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [76] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [77] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [78] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [79] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [80] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [81] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [82] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [83] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [84] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [85] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [86] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [87] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [88] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [89] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [90] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [91] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [92] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [93] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [94] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [95] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [96] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [97] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [98] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [99] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [100] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [101] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [102] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [103] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [104] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [105] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [106] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [107] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [108] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [109] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [110] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [111] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [112] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [113] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [114] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [115] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [116] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [117] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [118] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [119] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [120] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [121] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [122] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [123] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [124] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [125] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [126] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [127] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [128] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [129] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [130] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [131] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [132] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [133] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [134] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [135] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [136] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [137] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [138] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [139] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type cXObject::TreeSim virtual table[18] = {
	/* [0] = */ {
		/* .__delta = */ -8,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -8,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObject::~cXObject,
		/* .__delta2 = */ 2808
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

void cXObject::~cXObject(int __in_chrg) {
	void *pAddress;
	
  TreeSim *pTVar1;
  __vtbl_ptr_type *p_Var2;
  __vtbl_ptr_type *p_Var3;
  __vtbl_ptr_type *p_Var4;
  __vtbl_ptr_type *p_Var5;
  __vtbl_ptr_type _Var6;
  __vtbl_ptr_type _Var7;
  __vtbl_ptr_type _Var8;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  undefined local_c0 [8];
  __vtbl_ptr_type local_b8 [17];
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
  this->__vtable = (cXObject__21_1030__vtable *)_vt_8cXObject;
  this->_vb899->__vtable = (TreeSim__vtable *)_vt_8cXObject_7TreeSim;
  p_Var2 = (__vtbl_ptr_type *)local_c0;
  p_Var3 = _vt_8cXObject_7TreeSim;
  if (__in_chrg == 0) {
    do {
      p_Var4 = p_Var3;
      p_Var5 = p_Var2;
      _Var6 = p_Var4[1];
      _Var7 = p_Var4[2];
      _Var8 = p_Var4[3];
      *p_Var5 = *p_Var4;
      p_Var5[1] = _Var6;
      p_Var5[2] = _Var7;
      p_Var5[3] = _Var8;
      p_Var2 = p_Var5 + 4;
      p_Var3 = p_Var4 + 4;
    } while (p_Var4 + 4 != _vt_8cXObject_7TreeSim + 0x10);
    pTVar1 = this->_vb899;
    _Var6 = p_Var4[5];
    p_Var5[4] = _vt_8cXObject_7TreeSim[16];
    p_Var5[5] = _Var6;
    pTVar1->__vtable = (TreeSim__vtable *)local_c0;
    local_b8[0].__delta =
         _vt_8cXObject_7TreeSim[1].__delta + ((short)this - ((short)this->_vb899 + -8));
  }
  if (this->_vb899->m_pEoRInstance != (IBaseSimInstance *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pEORGlobals->__vtable->ConvertSpriteIdToResId)
              ((int)_5Globs_pEORGlobals->_pSelectedSims +
               *(short *)&_5Globs_pEORGlobals->__vtable->UpdateSpriteRenderer + -0x24,
               &this->_vb899->m_pEoRInstance);
  }
  this->_vb899->m_pEoRInstance = (IBaseSimInstance *)0x0;
  this->_vb899->m_pEoRPerson = (ESim *)0x0;
  if ((__in_chrg & 2U) != 0) {
    ___7TreeSim(this->_vb899,0);
  }
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

Int cXObject::GetPersonWidth() {
  return _12cXObjectImpl_gPersonWidth;
}

bool cXObject::GetFreeWill() {
  return SUB41(__12cXObjectImpl_sFreeWill,0);
}

bool cXObject::GetAutoCenter() {
  return SUB41(__12cXObjectImpl_sAutoCenter,0);
}

void cXObject::SetAutoCenter(bool autoCenter) {
  __12cXObjectImpl_sAutoCenter = (int)autoCenter;
  return;
}

bool cXObject::GetAutoReset() {
  return SUB41(__12cXObjectImpl_sAutoReset,0);
}

void cXObject::SetAutoReset(bool autoReset) {
  __12cXObjectImpl_sAutoReset = (int)autoReset;
  return;
}

cXObjectImpl* cXObjectImpl::cXObjectImpl(int __in_chrg, ObjSelector *selector, ObjectModule *module) {
	cXObject *this;
	int cnt;
	cXObject *this;
	cXObjectImpl *obj;
	cXObjectImpl *obj;
	TreeSim *this;
	ObjSelector *this;
	cXObjectImpl *this;
	cXObjectImpl *this;
	
  ushort uVar1;
  cXObject__21_1030 *pcVar2;
  ObjectFolder__vtable *pOVar3;
  short sVar4;
  short sVar5;
  undefined6 uVar6;
  undefined6 uVar7;
  undefined6 uVar8;
  ushort uVar9;
  ObjectFolder *pOVar10;
  TreeSim__vtable *pTVar11;
  undefined *this_00;
  TreeSim__vtable *pTVar12;
  RelMatrix *pRVar13;
  ushort *puVar14;
  __vtbl_ptr_type *p_Var15;
  __vtbl_ptr_type *p_Var16;
  int iVar17;
  __vtbl_ptr_type *p_Var18;
  __vtbl_ptr_type _Var19;
  __vtbl_ptr_type _Var20;
  __vtbl_ptr_type _Var21;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  cXObject__21_1030__vtable *pcVar22;
  undefined8 unaff_s2;
  __vtbl_ptr_type *p_Var23;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  undefined local_670 [8];
  __vtbl_ptr_type local_668 [17];
  undefined local_5e0 [8];
  undefined8 local_5d8;
  short local_5d0;
  short local_5c8;
  short local_5c0;
  short local_5b8;
  short local_5b0;
  short local_5a8;
  short local_5a0;
  short local_598;
  short local_590;
  short local_588;
  short local_580;
  short local_578;
  short local_570;
  short local_568;
  short local_560;
  undefined local_550 [8];
  undefined8 local_548;
  short local_540;
  short local_538;
  short local_530;
  short local_528;
  short local_520;
  short local_518;
  short local_510;
  short local_508;
  short local_500;
  short local_4f8;
  short local_4f0;
  short local_4e8;
  short local_4e0;
  short local_4d8;
  short local_4d0;
  short local_4c8;
  short local_4c0;
  short local_4b8;
  short local_4b0;
  short local_4a8;
  short local_4a0;
  short local_498;
  short local_490;
  short local_488;
  short local_480;
  short local_478;
  short local_470;
  short local_468;
  short local_460;
  short local_458;
  short local_450;
  short local_448;
  short local_440;
  short local_438;
  short local_430;
  short local_428;
  short local_420;
  short local_418;
  short local_410;
  short local_408;
  short local_400;
  short local_3f8;
  short local_3f0;
  short local_3e8;
  short local_3e0;
  short local_3d8;
  short local_3d0;
  short local_3c8;
  short local_3c0;
  short local_3b8;
  short local_3b0;
  short local_3a8;
  short local_3a0;
  short local_398;
  short local_390;
  short local_388;
  short local_380;
  short local_378;
  short local_370;
  short local_368;
  short local_360;
  short local_358;
  short local_350;
  short local_348;
  short local_340;
  short local_338;
  short local_330;
  short local_328;
  short local_320;
  short local_318;
  short local_310;
  short local_308;
  short local_300;
  short local_2f8;
  short local_2f0;
  short local_2e8;
  short local_2e0;
  short local_2d8;
  short local_2d0;
  short local_2c8;
  short local_2c0;
  short local_2b8;
  short local_2b0;
  short local_2a8;
  short local_2a0;
  short local_298;
  short local_290;
  short local_288;
  short local_280;
  short local_278;
  short local_270;
  short local_268;
  short local_260;
  short local_258;
  short local_250;
  short local_248;
  short local_240;
  short local_238;
  short local_230;
  short local_228;
  short local_220;
  short local_218;
  short local_210;
  short local_208;
  short local_200;
  short local_1f8;
  short local_1f0;
  short local_1e8;
  short local_1e0;
  short local_1d8;
  short local_1d0;
  short local_1c8;
  short local_1c0;
  short local_1b8;
  short local_1b0;
  short local_1a8;
  short local_1a0;
  short local_198;
  short local_190;
  short local_188;
  short local_180;
  short local_178;
  short local_170;
  short local_168;
  short local_160;
  short local_158;
  short local_150;
  short local_148;
  short local_140;
  short local_138;
  short local_130;
  short local_128;
  short local_120;
  short local_118;
  short local_110;
  short local_108;
  short local_100;
  __vtbl_ptr_type local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  __vtbl_ptr_type local_d8;
  undefined8 local_d0;
  __vtbl_ptr_type local_c8;
  ObjSelector *local_c0;
  ObjectModule *local_bc;
  tagRECT *local_b8;
  ushort *local_b4;
  ushort *local_b0;
  FTilePt *local_ac;
  TreeSimImpl__21_3338__vtable *local_a8;
  vector_SpriteSlot___malloc_alloc_template_0___ *local_a4;
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
  
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_c0 = selector;
  local_bc = module;
  if (__in_chrg != 0) {
    this_00 = &this->field_0x134;
    this->_vb1168 = (TreeSimImpl__21_3338 *)&this->field_0x15c;
    this->_vb966 = (cXObject__21_1030 *)&this->field_0x154;
    *(undefined **)&this->field_0x15c = this_00;
    *(undefined **)&this->field_0x154 = this_00;
    __7TreeSim((TreeSim *)this_00);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    pcVar2 = this->_vb966;
    pcVar2->_vb899->__vtable = (TreeSim__vtable *)_vt_8cXObject_7TreeSim;
    p_Var23 = (__vtbl_ptr_type *)local_670;
    p_Var16 = _vt_8cXObject_7TreeSim;
    do {
      p_Var15 = p_Var16;
      p_Var18 = p_Var23;
      _Var19 = p_Var15[1];
      _Var20 = p_Var15[2];
      _Var21 = p_Var15[3];
      *p_Var18 = *p_Var15;
      p_Var18[1] = _Var19;
      p_Var18[2] = _Var20;
      p_Var18[3] = _Var21;
      p_Var23 = p_Var18 + 4;
      p_Var16 = p_Var15 + 4;
    } while (p_Var15 + 4 != _vt_8cXObject_7TreeSim + 0x10);
    _Var19 = p_Var15[5];
    p_Var18[4] = _vt_8cXObject_7TreeSim[16];
    p_Var18[5] = _Var19;
    pcVar2->_vb899->__vtable = (TreeSim__vtable *)local_670;
    local_668[0].__delta =
         _vt_8cXObject_7TreeSim[1].__delta + ((short)pcVar2 - ((short)pcVar2->_vb899 + -8));
                    /* end of inlined section */
    pcVar2->__vtable = (cXObject__21_1030__vtable *)_vt_8cXObject;
    if (__in_chrg != 0) {
      __11TreeSimImpli(this->_vb1168,0);
    }
  }
  local_b0 = this->fData;
  local_b4 = this->fTemp;
  local_b8 = &this->mLastDamage;
  local_ac = &this->fLocation;
  this->_vb966->_vb899->__vtable = (TreeSim__vtable *)_vt_12cXObjectImpl_7TreeSim;
  local_a4 = &this->fSpriteSlots;
  this->_vb966->__vtable = (cXObject__21_1030__vtable *)_vt_12cXObjectImpl_8cXObject;
  this->_vb1168->__vtable = (TreeSimImpl__21_3338__vtable *)_vt_12cXObjectImpl_11TreeSimImpl;
  uVar1 = _vt_12cXObjectImpl_7TreeSim[2].__delta;
  if (__in_chrg == 0) {
    local_a8 = (TreeSimImpl__21_3338__vtable *)&local_f0;
    p_Var23 = _vt_12cXObjectImpl_7TreeSim;
    pTVar11 = (TreeSim__vtable *)local_5e0;
    do {
      pTVar12 = pTVar11;
      p_Var16 = p_Var23;
      _Var19 = p_Var16[1];
      _Var20 = p_Var16[2];
      _Var21 = p_Var16[3];
      *(__vtbl_ptr_type *)pTVar12 = *p_Var16;
      *(__vtbl_ptr_type *)&pTVar12->Initialize = _Var19;
      *(__vtbl_ptr_type *)&pTVar12->SetError = _Var20;
      *(__vtbl_ptr_type *)&pTVar12->ClearError = _Var21;
      p_Var23 = p_Var16 + 4;
      pTVar11 = (TreeSim__vtable *)&pTVar12->GetCurElem;
    } while (p_Var16 + 4 != _vt_12cXObjectImpl_7TreeSim + 0x10);
    pcVar2 = this->_vb966;
    _Var19 = p_Var16[5];
    *(ulong *)&pTVar12->GetCurElem =
         CONCAT62(_vt_12cXObjectImpl_7TreeSim[16]._2_6_,_vt_12cXObjectImpl_7TreeSim[16].__delta);
    p_Var23 = _vt_12cXObjectImpl_8cXObject;
    *(__vtbl_ptr_type *)&pTVar12->GetNthElem = _Var19;
    pcVar2->_vb899->__vtable = (TreeSim__vtable *)local_5e0;
    uVar9 = _vt_12cXObjectImpl_8cXObject[1].__delta;
    sVar4 = (short)this;
    sVar5 = sVar4 - ((short)this->_vb966->_vb899 + -0x134);
    local_568 = sVar4 - ((short)this->_vb1168 + -0x15c);
    local_5d8._0_2_ = _vt_12cXObjectImpl_7TreeSim[1].__delta + sVar5;
    local_5c8 = _vt_12cXObjectImpl_7TreeSim[3].__delta + sVar5;
    local_5d0 = (uVar1 + sVar5) - local_568;
    local_5c0 = (_vt_12cXObjectImpl_7TreeSim[4].__delta + sVar5) - local_568;
    local_5b8 = (_vt_12cXObjectImpl_7TreeSim[5].__delta + sVar5) - local_568;
    local_5b0 = (_vt_12cXObjectImpl_7TreeSim[6].__delta + sVar5) - local_568;
    local_5a8 = (_vt_12cXObjectImpl_7TreeSim[7].__delta + sVar5) - local_568;
    local_5a0 = (_vt_12cXObjectImpl_7TreeSim[8].__delta + sVar5) - local_568;
    local_598 = (_vt_12cXObjectImpl_7TreeSim[9].__delta + sVar5) - local_568;
    local_590 = (_vt_12cXObjectImpl_7TreeSim[10].__delta + sVar5) - local_568;
    local_588 = (_vt_12cXObjectImpl_7TreeSim[11].__delta + sVar5) - local_568;
    local_580 = (_vt_12cXObjectImpl_7TreeSim[12].__delta + sVar5) - local_568;
    local_578 = (_vt_12cXObjectImpl_7TreeSim[13].__delta + sVar5) - local_568;
    local_560 = (_vt_12cXObjectImpl_7TreeSim[16].__delta + sVar5) - local_568;
    local_570 = (_vt_12cXObjectImpl_7TreeSim[14].__delta + sVar5) - local_568;
    local_568 = (_vt_12cXObjectImpl_7TreeSim[15].__delta + sVar5) - local_568;
    pcVar22 = (cXObject__21_1030__vtable *)local_550;
    do {
      _Var19 = p_Var23[1];
      _Var20 = p_Var23[2];
      _Var21 = p_Var23[3];
      *(__vtbl_ptr_type *)pcVar22 = *p_Var23;
      *(__vtbl_ptr_type *)&pcVar22->GetNumAttr = _Var19;
      *(__vtbl_ptr_type *)&pcVar22->CalcShortDistance = _Var20;
      *(__vtbl_ptr_type *)&pcVar22->GetSpriteSlot = _Var21;
      p_Var23 = p_Var23 + 4;
      pcVar22 = (cXObject__21_1030__vtable *)&pcVar22->GetHilite;
    } while (p_Var23 != _vt_12cXObjectImpl_7TreeSim);
    this->_vb966->__vtable = (cXObject__21_1030__vtable *)local_550;
    uVar8 = _vt_12cXObjectImpl_11TreeSimImpl[4]._2_6_;
    uVar7 = _vt_12cXObjectImpl_11TreeSimImpl[2]._2_6_;
    uVar6 = _vt_12cXObjectImpl_11TreeSimImpl[1]._2_6_;
    local_108 = sVar4 - ((short)this->_vb966 + -0x154);
    local_548._0_2_ = uVar9 + local_108;
    local_540 = _vt_12cXObjectImpl_8cXObject[2].__delta + local_108;
    local_538 = _vt_12cXObjectImpl_8cXObject[3].__delta + local_108;
    local_530 = _vt_12cXObjectImpl_8cXObject[4].__delta + local_108;
    local_528 = _vt_12cXObjectImpl_8cXObject[5].__delta + local_108;
    local_520 = _vt_12cXObjectImpl_8cXObject[6].__delta + local_108;
    local_518 = _vt_12cXObjectImpl_8cXObject[7].__delta + local_108;
    local_510 = _vt_12cXObjectImpl_8cXObject[8].__delta + local_108;
    local_508 = _vt_12cXObjectImpl_8cXObject[9].__delta + local_108;
    local_500 = _vt_12cXObjectImpl_8cXObject[10].__delta + local_108;
    local_4f8 = _vt_12cXObjectImpl_8cXObject[11].__delta + local_108;
    local_4f0 = _vt_12cXObjectImpl_8cXObject[12].__delta + local_108;
    local_4e8 = _vt_12cXObjectImpl_8cXObject[13].__delta + local_108;
    local_4e0 = _vt_12cXObjectImpl_8cXObject[14].__delta + local_108;
    local_4d8 = _vt_12cXObjectImpl_8cXObject[15].__delta + local_108;
    local_4d0 = _vt_12cXObjectImpl_8cXObject[16].__delta + local_108;
    local_4c8 = _vt_12cXObjectImpl_8cXObject[17].__delta + local_108;
    local_4c0 = _vt_12cXObjectImpl_8cXObject[18].__delta + local_108;
    local_4b8 = _vt_12cXObjectImpl_8cXObject[19].__delta + local_108;
    local_4b0 = _vt_12cXObjectImpl_8cXObject[20].__delta + local_108;
    local_4a8 = _vt_12cXObjectImpl_8cXObject[21].__delta + local_108;
    local_4a0 = _vt_12cXObjectImpl_8cXObject[22].__delta + local_108;
    local_498 = _vt_12cXObjectImpl_8cXObject[23].__delta + local_108;
    local_490 = _vt_12cXObjectImpl_8cXObject[24].__delta + local_108;
    local_488 = _vt_12cXObjectImpl_8cXObject[25].__delta + local_108;
    local_480 = _vt_12cXObjectImpl_8cXObject[26].__delta + local_108;
    local_478 = _vt_12cXObjectImpl_8cXObject[27].__delta + local_108;
    local_470 = _vt_12cXObjectImpl_8cXObject[28].__delta + local_108;
    local_468 = _vt_12cXObjectImpl_8cXObject[29].__delta + local_108;
    local_460 = _vt_12cXObjectImpl_8cXObject[30].__delta + local_108;
    local_458 = _vt_12cXObjectImpl_8cXObject[31].__delta + local_108;
    local_450 = _vt_12cXObjectImpl_8cXObject[32].__delta + local_108;
    local_448 = _vt_12cXObjectImpl_8cXObject[33].__delta + local_108;
    local_440 = _vt_12cXObjectImpl_8cXObject[34].__delta + local_108;
    local_438 = _vt_12cXObjectImpl_8cXObject[35].__delta + local_108;
    local_430 = _vt_12cXObjectImpl_8cXObject[36].__delta + local_108;
    local_428 = _vt_12cXObjectImpl_8cXObject[37].__delta + local_108;
    local_420 = _vt_12cXObjectImpl_8cXObject[38].__delta + local_108;
    local_418 = _vt_12cXObjectImpl_8cXObject[39].__delta + local_108;
    local_410 = _vt_12cXObjectImpl_8cXObject[40].__delta + local_108;
    local_408 = _vt_12cXObjectImpl_8cXObject[41].__delta + local_108;
    local_400 = _vt_12cXObjectImpl_8cXObject[42].__delta + local_108;
    local_3f8 = _vt_12cXObjectImpl_8cXObject[43].__delta + local_108;
    local_3f0 = _vt_12cXObjectImpl_8cXObject[44].__delta + local_108;
    local_3e8 = _vt_12cXObjectImpl_8cXObject[45].__delta + local_108;
    local_3e0 = _vt_12cXObjectImpl_8cXObject[46].__delta + local_108;
    local_3d8 = _vt_12cXObjectImpl_8cXObject[47].__delta + local_108;
    local_3d0 = _vt_12cXObjectImpl_8cXObject[48].__delta + local_108;
    local_3c8 = _vt_12cXObjectImpl_8cXObject[49].__delta + local_108;
    local_3c0 = _vt_12cXObjectImpl_8cXObject[50].__delta + local_108;
    local_3b8 = _vt_12cXObjectImpl_8cXObject[51].__delta + local_108;
    local_3b0 = _vt_12cXObjectImpl_8cXObject[52].__delta + local_108;
    local_3a8 = _vt_12cXObjectImpl_8cXObject[53].__delta + local_108;
    local_3a0 = _vt_12cXObjectImpl_8cXObject[54].__delta + local_108;
    local_398 = _vt_12cXObjectImpl_8cXObject[55].__delta + local_108;
    local_390 = _vt_12cXObjectImpl_8cXObject[56].__delta + local_108;
    local_388 = _vt_12cXObjectImpl_8cXObject[57].__delta + local_108;
    local_380 = _vt_12cXObjectImpl_8cXObject[58].__delta + local_108;
    local_378 = _vt_12cXObjectImpl_8cXObject[59].__delta + local_108;
    local_370 = _vt_12cXObjectImpl_8cXObject[60].__delta + local_108;
    local_368 = _vt_12cXObjectImpl_8cXObject[61].__delta + local_108;
    local_360 = _vt_12cXObjectImpl_8cXObject[62].__delta + local_108;
    local_358 = _vt_12cXObjectImpl_8cXObject[63].__delta + local_108;
    local_350 = _vt_12cXObjectImpl_8cXObject[64].__delta + local_108;
    local_348 = _vt_12cXObjectImpl_8cXObject[65].__delta + local_108;
    local_340 = _vt_12cXObjectImpl_8cXObject[66].__delta + local_108;
    local_338 = _vt_12cXObjectImpl_8cXObject[67].__delta + local_108;
    local_330 = _vt_12cXObjectImpl_8cXObject[68].__delta + local_108;
    local_328 = _vt_12cXObjectImpl_8cXObject[69].__delta + local_108;
    local_320 = _vt_12cXObjectImpl_8cXObject[70].__delta + local_108;
    local_318 = _vt_12cXObjectImpl_8cXObject[71].__delta + local_108;
    local_310 = _vt_12cXObjectImpl_8cXObject[72].__delta + local_108;
    local_308 = _vt_12cXObjectImpl_8cXObject[73].__delta + local_108;
    local_300 = _vt_12cXObjectImpl_8cXObject[74].__delta + local_108;
    local_2f8 = _vt_12cXObjectImpl_8cXObject[75].__delta + local_108;
    local_2f0 = _vt_12cXObjectImpl_8cXObject[76].__delta + local_108;
    local_2e8 = _vt_12cXObjectImpl_8cXObject[77].__delta + local_108;
    local_2e0 = _vt_12cXObjectImpl_8cXObject[78].__delta + local_108;
    local_2d8 = _vt_12cXObjectImpl_8cXObject[79].__delta + local_108;
    local_2d0 = _vt_12cXObjectImpl_8cXObject[80].__delta + local_108;
    local_2c8 = _vt_12cXObjectImpl_8cXObject[81].__delta + local_108;
    local_2c0 = _vt_12cXObjectImpl_8cXObject[82].__delta + local_108;
    local_2b8 = _vt_12cXObjectImpl_8cXObject[83].__delta + local_108;
    local_2b0 = _vt_12cXObjectImpl_8cXObject[84].__delta + local_108;
    local_2a8 = _vt_12cXObjectImpl_8cXObject[85].__delta + local_108;
    local_2a0 = _vt_12cXObjectImpl_8cXObject[86].__delta + local_108;
    local_298 = _vt_12cXObjectImpl_8cXObject[87].__delta + local_108;
    local_290 = _vt_12cXObjectImpl_8cXObject[88].__delta + local_108;
    local_288 = _vt_12cXObjectImpl_8cXObject[89].__delta + local_108;
    local_280 = _vt_12cXObjectImpl_8cXObject[90].__delta + local_108;
    local_278 = _vt_12cXObjectImpl_8cXObject[91].__delta + local_108;
    local_270 = _vt_12cXObjectImpl_8cXObject[92].__delta + local_108;
    local_268 = _vt_12cXObjectImpl_8cXObject[93].__delta + local_108;
    local_260 = _vt_12cXObjectImpl_8cXObject[94].__delta + local_108;
    local_258 = _vt_12cXObjectImpl_8cXObject[95].__delta + local_108;
    local_250 = _vt_12cXObjectImpl_8cXObject[96].__delta + local_108;
    local_248 = _vt_12cXObjectImpl_8cXObject[97].__delta + local_108;
    local_240 = _vt_12cXObjectImpl_8cXObject[98].__delta + local_108;
    local_238 = _vt_12cXObjectImpl_8cXObject[99].__delta + local_108;
    local_230 = _vt_12cXObjectImpl_8cXObject[100].__delta + local_108;
    local_228 = _vt_12cXObjectImpl_8cXObject[101].__delta + local_108;
    local_220 = _vt_12cXObjectImpl_8cXObject[102].__delta + local_108;
    local_218 = _vt_12cXObjectImpl_8cXObject[103].__delta + local_108;
    local_210 = _vt_12cXObjectImpl_8cXObject[104].__delta + local_108;
    local_208 = _vt_12cXObjectImpl_8cXObject[105].__delta + local_108;
    local_200 = _vt_12cXObjectImpl_8cXObject[106].__delta + local_108;
    local_1f8 = _vt_12cXObjectImpl_8cXObject[107].__delta + local_108;
    local_1f0 = _vt_12cXObjectImpl_8cXObject[108].__delta + local_108;
    local_1e8 = _vt_12cXObjectImpl_8cXObject[109].__delta + local_108;
    local_1e0 = _vt_12cXObjectImpl_8cXObject[110].__delta + local_108;
    local_1d8 = _vt_12cXObjectImpl_8cXObject[111].__delta + local_108;
    local_1d0 = _vt_12cXObjectImpl_8cXObject[112].__delta + local_108;
    local_1c8 = _vt_12cXObjectImpl_8cXObject[113].__delta + local_108;
    local_1c0 = _vt_12cXObjectImpl_8cXObject[114].__delta + local_108;
    local_1b8 = _vt_12cXObjectImpl_8cXObject[115].__delta + local_108;
    local_1b0 = _vt_12cXObjectImpl_8cXObject[116].__delta + local_108;
    local_1a8 = _vt_12cXObjectImpl_8cXObject[117].__delta + local_108;
    local_1a0 = _vt_12cXObjectImpl_8cXObject[118].__delta + local_108;
    local_198 = _vt_12cXObjectImpl_8cXObject[119].__delta + local_108;
    local_190 = _vt_12cXObjectImpl_8cXObject[120].__delta + local_108;
    local_188 = _vt_12cXObjectImpl_8cXObject[121].__delta + local_108;
    local_180 = _vt_12cXObjectImpl_8cXObject[122].__delta + local_108;
    local_178 = _vt_12cXObjectImpl_8cXObject[123].__delta + local_108;
    local_170 = _vt_12cXObjectImpl_8cXObject[124].__delta + local_108;
    local_168 = _vt_12cXObjectImpl_8cXObject[125].__delta + local_108;
    local_160 = _vt_12cXObjectImpl_8cXObject[126].__delta + local_108;
    local_158 = _vt_12cXObjectImpl_8cXObject[127].__delta + local_108;
    local_150 = _vt_12cXObjectImpl_8cXObject[128].__delta + local_108;
    local_148 = _vt_12cXObjectImpl_8cXObject[129].__delta + local_108;
    local_140 = _vt_12cXObjectImpl_8cXObject[130].__delta + local_108;
    local_138 = _vt_12cXObjectImpl_8cXObject[131].__delta + local_108;
    local_130 = _vt_12cXObjectImpl_8cXObject[132].__delta + local_108;
    local_128 = _vt_12cXObjectImpl_8cXObject[133].__delta + local_108;
    local_120 = _vt_12cXObjectImpl_8cXObject[134].__delta + local_108;
    local_118 = _vt_12cXObjectImpl_8cXObject[135].__delta + local_108;
    local_100 = _vt_12cXObjectImpl_8cXObject[138].__delta + local_108;
    local_110 = _vt_12cXObjectImpl_8cXObject[136].__delta + local_108;
    local_108 = _vt_12cXObjectImpl_8cXObject[137].__delta + local_108;
    local_c8 = _vt_12cXObjectImpl_11TreeSimImpl[5];
    local_f0 = _vt_12cXObjectImpl_11TreeSimImpl[0];
    local_d8 = _vt_12cXObjectImpl_11TreeSimImpl[3];
    this->_vb1168->__vtable = local_a8;
    sVar4 = sVar4 - ((short)this->_vb1168 + -0x15c);
    local_e8 = CONCAT62(uVar6,_vt_12cXObjectImpl_11TreeSimImpl[1].__delta + sVar4);
    local_e0 = CONCAT62(uVar7,_vt_12cXObjectImpl_11TreeSimImpl[2].__delta + sVar4);
    local_d0 = CONCAT62(uVar8,_vt_12cXObjectImpl_11TreeSimImpl[4].__delta + sVar4);
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  (this->fHierSlots).start = (ObjectSlot *)0x0;
  pOVar10 = _5Globs_pObjectFolder;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  this->__vtable = (cXObjectImpl__127_901__vtable *)_vt_12cXObjectImpl;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  (this->fHierSlots).end_of_storage = (ObjectSlot *)0x0;
  (this->fHierSlots).finish = (ObjectSlot *)0x0;
  (this->fRoutingSlots).start = (RoutingSlot *)0x0;
  (this->fRoutingSlots).end_of_storage = (RoutingSlot *)0x0;
  (this->fRoutingSlots).finish = (RoutingSlot *)0x0;
  (this->fSpriteSlots).start = (SpriteSlot *)0x0;
  local_a4->end_of_storage = (SpriteSlot *)0x0;
  local_a4->finish = (SpriteSlot *)0x0;
  this->_vb966->_vb899->m_pObject = (cXObjectImpl__184_901 *)this;
                    /* end of inlined section */
  this->fModule = local_bc;
  this->fObjSel = local_c0;
  pOVar3 = pOVar10->__vtable;
  (*(code *)pOVar3[1].Destroy)((int)&pOVar10->__vtable + (int)*(short *)&pOVar3[1].Init,local_c0);
  pRVar13 = CreateInstance__9RelMatrix();
  this->fInstMatrix = pRVar13;
  this->fMiscFlags = 0;
  this->fID = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
  this->fDef = this->fObjSel->fHeader;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
  (local_ac->x).whole = 0;
  (this->fLocation).y.whole = 0;
                    /* end of inlined section */
  this->fLevel = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
  (this->fRect).right.whole = 0;
  (this->fRect).left.whole = 0;
  (this->fRect).top.whole = 0;
  (this->fRect).bottom.whole = 0;
                    /* end of inlined section */
  this->fNext = (cXObjectImpl__127_901 *)0x0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectImpl.h */
  this->fMiscFlags = this->fMiscFlags | 0x200;
                    /* end of inlined section */
  uVar1 = this->fDef->numAttributes;
  this->fNumAttr = (int)(short)uVar1;
  if ((short)uVar1 < 8) {
    this->fNumAttr = 8;
  }
                    /* inlined from /eor/src2/common/e_standard_heap.h */
  puVar14 = (ushort *)_memmanAlloc__FUiUi(this->fNumAttr << 1,4);
                    /* end of inlined section */
  this->fAttrs = puVar14;
  iVar17 = 0x47;
  puVar14 = local_b0 + 0x47;
  do {
    *puVar14 = 0;
    iVar17 = iVar17 + -1;
    puVar14 = puVar14 + -1;
  } while (-1 < iVar17);
  if (0 < this->fNumAttr) {
    puVar14 = this->fAttrs;
    iVar17 = 0;
    while( true ) {
      puVar14[iVar17] = 0;
      if (this->fNumAttr <= iVar17 + 1) break;
      puVar14 = this->fAttrs;
      iVar17 = iVar17 + 1;
    }
  }
  iVar17 = 7;
  puVar14 = local_b4 + 7;
  do {
    *puVar14 = 0;
    iVar17 = iVar17 + -1;
    puVar14 = puVar14 + -1;
  } while (-1 < iVar17);
  *(undefined4 *)&this->field_0x114 = 1;
  SetRect__FP7tagRECTiiii(local_b8,0x7fffffff,0x7fffffff,-0x80000000,-0x80000000);
  this->mHas3D = 0;
  *(undefined4 *)&this->mDrawLabel = 0;
  this->fDynSpriteFlags = (ushort *)0x0;
  this->fNumDynSprites = 0;
  return this;
}

void cXObjectImpl::Initialize() {
	ObjectSlot sibSlot;
	FTilePt loc;
	ObjSelector *this;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	SlotLoader sl;
	int i;
	
  ushort uVar1;
  ObjectSlot *pOVar2;
  cXObject__21_1030__vtable *pcVar3;
  int iVar4;
  iResFile__0_3211 *file;
  ushort *puVar5;
  long lVar6;
  ObjectSlot sibSlot;
  SlotLoader sl;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
  Initialize__11TreeSimImpliPs
            (this->_vb1168,(int)(short)this->fObjSel->fHeader->initialStackSize,this->fTemp);
  __10ObjectSlot(&sibSlot);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pOVar2 = (this->fHierSlots).finish;
  if (pOVar2 == (this->fHierSlots).end_of_storage) {
    insert_aux__t6vector2Z10ObjectSlotZt23__malloc_alloc_template1i0P10ObjectSlotRC10ObjectSlot
              (&this->fHierSlots,pOVar2,&sibSlot);
  }
  else {
    (pOVar2->field0_0x0).__vtable = (Slot__vtable *)_vt_4Slot;
    (pOVar2->field0_0x0).xoffset = sibSlot.field0_0x0.xoffset;
    (pOVar2->field0_0x0).yoffset = sibSlot.field0_0x0.yoffset;
    (pOVar2->field0_0x0).altOffset = sibSlot.field0_0x0.altOffset;
    (pOVar2->field0_0x0).__vtable = (Slot__vtable *)_vt_10ObjectSlot;
    (pOVar2->field0_0x0).nameIndex = sibSlot.field0_0x0.nameIndex;
    pOVar2->objectID = sibSlot.objectID;
    pOVar2->height = sibSlot.height;
    pOVar2->maximumSize = sibSlot.maximumSize;
    pOVar2->flags = sibSlot.flags;
    (this->fHierSlots).finish = (this->fHierSlots).finish + 1;
  }
                    /* end of inlined section */
  pcVar3 = this->_vb966->__vtable;
  iVar4 = (*(code *)pcVar3[1].HandleError)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3[1].Error);
  if (*(short *)(iVar4 + 0x28) != 0) {
    pcVar3 = this->_vb966->__vtable;
    file = (iResFile__0_3211 *)
           (*(code *)pcVar3[1].SetAttr)
                     ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3[1].SetTemp);
    __10SlotLoaderP8iResFiles(&sl,file,0);
    pcVar3 = this->_vb966->__vtable;
    iVar4 = (*(code *)pcVar3[1].HandleError)
                      ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3[1].Error);
    Load__10SlotLoadersPt6vector2Z10ObjectSlotZt23__malloc_alloc_template1i0Pt6vector2Z11RoutingSlotZt23__malloc_alloc_template1i0
              (&sl,*(ushort *)(iVar4 + 0x28),&this->fHierSlots,&this->fRoutingSlots);
    ___10SlotLoader(&sl,2);
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pOVar2 = (this->fHierSlots).start;
                    /* end of inlined section */
  this->fData[3] = 0xffff;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  this->fData[0xe] = 0xffff;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  this->fData[0x43] = (short)(((int)(this->fHierSlots).finish - (int)pOVar2) * 0x38e38e39 >> 2) - 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
  sl.fSlotNames = (StringSet *)0xfffffff0;
                    /* end of inlined section */
  sl.fFile = (iResFile__6_5027 *)0xfffffff0;
  SetLocation__12cXObjectImplRC7FTilePtiQ28cXObject14RecursionParam(this,(FTilePt *)&sl,1,0);
  uVar1 = this->fDef->numDynSprites;
  this->fNumDynSprites = uVar1;
  if ((short)uVar1 == 0) {
    this->fDynSpriteFlags = (ushort *)0x0;
  }
  else {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    puVar5 = (ushort *)_memmanAlloc__FUiUi((int)(short)uVar1 << 1,4);
                    /* end of inlined section */
    this->fDynSpriteFlags = puVar5;
  }
  lVar6 = 0;
  if (0 < (short)this->fNumDynSprites) {
    puVar5 = this->fDynSpriteFlags;
    while( true ) {
      iVar4 = (int)lVar6;
      lVar6 = (long)(iVar4 + 1);
      puVar5[iVar4] = 0;
      if ((short)this->fNumDynSprites <= lVar6) break;
      puVar5 = this->fDynSpriteFlags;
    }
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pEORGlobals->__vtable->CreateAnimator)
            ((int)_5Globs_pEORGlobals->_pSelectedSims +
             *(short *)&_5Globs_pEORGlobals->__vtable->GetCounterModelTable + -0x24,this->_vb966);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
  return;
}

void cXObjectImpl::Reset(Boolean simonce) {
	int cnt;
	HierarchySite hs;
	short int saveData[72];
	PlacementSpec ps;
	
  cXObject__21_1030__vtable *pcVar1;
  TreeSim *pTVar2;
  TreeSim__vtable *pTVar3;
  ushort uVar4;
  int iVar5;
  Behavior *startBehavior;
  long lVar6;
  ushort *puVar7;
  int iVar8;
  ushort *puVar9;
  HierarchySite hs;
  ushort saveData [72];
  PlacementSpec ps;
  
  __13HierarchySiteP12cXObjectImpl(&hs,this);
  HierSever__12cXObjectImpl(this);
  puVar7 = this->fData;
  puVar9 = saveData;
  iVar8 = 0x47;
  do {
    uVar4 = *puVar7;
    iVar8 = iVar8 + -1;
    puVar7 = puVar7 + 1;
    *puVar9 = uVar4;
    puVar9 = puVar9 + 1;
  } while (-1 < iVar8);
  puVar7 = this->fData + 0x47;
  iVar8 = 0x47;
  do {
    *puVar7 = 0;
    iVar8 = iVar8 + -1;
    puVar7 = puVar7 + -1;
  } while (-1 < iVar8);
  uVar4 = this->fID;
  this->fData[0x2d] = saveData[45];
  this->fData[0x1d] = saveData[29];
  this->fData[1] = saveData[1];
  this->fData[0x29] = saveData[41];
  this->fData[0x2e] = saveData[46];
  this->fData[0x2f] = saveData[47];
  this->fData[0x18] = saveData[24];
  this->fData[0x15] = saveData[21];
  this->fData[0x43] = saveData[67];
  this->fData[0xb] = uVar4;
  pcVar1 = this->_vb966->__vtable;
  iVar5 = (*(code *)pcVar1[1].HandleError)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].Error);
  iVar8 = this->fNumAttr;
  this->fData[0x3a] = *(ushort *)(iVar5 + 0x62);
  if (0 < iVar8) {
    puVar7 = this->fAttrs;
    iVar8 = 0;
    while( true ) {
      puVar7[iVar8] = 0;
      if (this->fNumAttr <= iVar8 + 1) break;
      puVar7 = this->fAttrs;
      iVar8 = iVar8 + 1;
    }
  }
  puVar7 = this->fTemp + 7;
  iVar8 = 7;
  do {
    *puVar7 = 0;
    iVar8 = iVar8 + -1;
    puVar7 = puVar7 + -1;
  } while (-1 < iVar8);
  pcVar1 = this->_vb966->__vtable;
  startBehavior =
       (Behavior *)
       (*(code *)pcVar1[1].SetData)
                 ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].IsOccupied);
  pcVar1 = this->_vb966->__vtable;
  uVar4 = (*(code *)pcVar1->GetSelFile)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1->GetBehavior,1);
  Reset__11TreeSimImplP8Behaviors(this->_vb1168,startBehavior,uVar4);
  HierSetSite__12cXObjectImplPC13HierarchySite(this,&hs);
  __13PlacementSpecP12cXObjectImpl(&ps,this);
  if (ps.container == (cXObjectImpl__123_901 *)0x0) {
    uVar4 = 0;
  }
  else {
    pcVar1 = (ps.container)->_vb966->__vtable;
    uVar4 = (*(code *)pcVar1[1].UserCanPlace)
                      ((int)&(ps.container)->_vb966->_vb899 + (int)*(short *)&pcVar1[1].IsPartOfMe);
  }
  this->fData[2] = uVar4;
  this->fData[3] = (ushort)ps.slotNum;
  UpdateAge__12cXObjectImpl(this);
  pcVar1 = this->_vb966->__vtable;
  (*(code *)pcVar1->IsChair)
            ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1->CanIntersectPeople,
             0xffffffffffffffff);
  pcVar1 = this->_vb966->__vtable;
  lVar6 = (*(code *)pcVar1[1].GetFrontFaceDirection)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].GetInteractionLeader);
  if (lVar6 == 0) {
    pcVar1 = this->_vb966->__vtable;
    (*(code *)pcVar1->GetInteractionLeader)
              ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1->SetObjectProbe,0,0,0);
    if (simonce != 0) {
      pTVar2 = this->_vb966->_vb899;
      pTVar3 = pTVar2->__vtable;
      (*(code *)pTVar3->GetHighLevelAction)
                ((int)&pTVar2->m_pObject + (int)*(short *)&pTVar3->ClearError,0);
    }
    pcVar1 = this->_vb966->__vtable;
    (*(code *)pcVar1->SetDrawLabel)
              ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1->CenterHouseViewOnMe);
  }
  return;
}

void cXObjectImpl::JustBorn() {
	cSimulator *s;
	
  cXObject__21_1030__vtable *pcVar1;
  ushort uVar2;
  int *piVar3;
  
  pcVar1 = this->_vb966->__vtable;
  piVar3 = (int *)(*(code *)pcVar1[1].GetObjectSlot)
                            ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].CountObjectSlots
                            );
  uVar2 = (**(code **)(*piVar3 + 0x24))((int)piVar3 + (int)*(short *)(*piVar3 + 0x20),8);
  this->fData[0x2d] = uVar2;
  uVar2 = (**(code **)(*piVar3 + 0x24))((int)piVar3 + (int)*(short *)(*piVar3 + 0x20),7);
  this->fData[0x2e] = uVar2;
  uVar2 = (**(code **)(*piVar3 + 0x24))((int)piVar3 + (int)*(short *)(*piVar3 + 0x20),1);
  this->fData[0x2f] = uVar2;
  uVar2 = (**(code **)(*piVar3 + 0x24))((int)piVar3 + (int)*(short *)(*piVar3 + 0x20),0);
  this->fData[0x18] = uVar2;
  uVar2 = (**(code **)(*piVar3 + 0x24))((int)piVar3 + (int)*(short *)(*piVar3 + 0x20),5);
  this->fData[0x15] = uVar2;
  return;
}

void cXObjectImpl::PostLoad(SInt32 version) {
	bool needsReset;
	bool updateVal;
	cXMTObject *mt;
	cXObjectImpl *ptr;
	ObjSelector *this;
	
  bool bVar1;
  ushort uVar2;
  cXObject__21_1030__vtable *pcVar3;
  ObjectModule__vtable *pOVar4;
  bool bVar5;
  ushort uVar6;
  void *pvVar7;
  cXObject__21_1030 *pcVar8;
  ObjSelector *pOVar9;
  long lVar10;
  
  if (this->fLevel == 0) {
    pcVar3 = this->_vb966->__vtable;
    (*(code *)pcVar3->IsMultiTile)
              ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3->GetTileWidth,1);
  }
  SetLocation__12cXObjectImplRC7FTilePtiQ28cXObject14RecursionParam
            (this,&this->fLocation,this->fLevel,1);
  if (version < 0x20) {
    uVar2 = this->fData[0x2a];
    uVar6 = uVar2 & 0xfffd;
    if (((uVar2 & 1) == 0) && (uVar6 = uVar2 & 0xfffe, (uVar2 & 2) == 0)) {
      uVar6 = uVar2 | 3;
    }
    this->fData[0x2a] = uVar6;
    if ((this->fData[0x2a] & 0x80) != 0) {
      this->fData[0x2a] = this->fData[0x2a] & 0xff7e;
    }
    this->fData[0x2b] = this->fData[0x2b] | 10;
  }
  bVar1 = true;
  if (version < 0x21) {
    pcVar3 = this->_vb966->__vtable;
    lVar10 = (*(code *)pcVar3[1].GetFrontFaceDirection)
                       ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3[1].GetInteractionLeader)
    ;
    if (lVar10 != 0) {
                    /* inlined from SCID.h */
      if (this == (cXObjectImpl__127_901 *)0x0) {
        pvVar7 = (void *)0x0;
      }
      else {
        pvVar7 = _dyncastimpl__7TreeSim4SCID(this->_vb966->_vb899,cXMTObjectID);
      }
                    /* end of inlined section */
      lVar10 = (**(code **)(*(int *)((int)pvVar7 + 4) + 0x14))
                         ((int)pvVar7 + (int)*(short *)(*(int *)((int)pvVar7 + 4) + 0x10));
                    /* inlined from SCID.h */
      if (lVar10 == 0) {
        pcVar8 = (cXObject__21_1030 *)0x0;
      }
      else {
        pcVar8 = (cXObject__21_1030 *)
                 _dyncastimpl__7TreeSim4SCID(*(TreeSim **)*(undefined4 *)lVar10,cXObjectID);
      }
                    /* end of inlined section */
      if (pcVar8 != this->_vb966) {
        bVar1 = false;
      }
    }
    if (bVar1) {
      pcVar3 = this->_vb966->__vtable;
      pOVar9 = (ObjSelector *)
               (*(code *)pcVar3[1].SetLevel)
                         ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3[1].GetTreeID);
      pOVar9 = GetMasterSelector__11ObjSelector(pOVar9);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
      if ((short)this->fData[0x29] < (short)pOVar9->fHeader->depreciationLimit) {
        this->fData[0x29] = pOVar9->fHeader->price;
      }
    }
  }
  if (version < 0x23) {
                    /* end of inlined section */
    this->fData[4] = 1;
  }
  pcVar3 = this->_vb966->__vtable;
  (*(code *)pcVar3->GetInteractionLeader)
            ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3->SetObjectProbe,2,0,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
  bVar1 = (this->fObjSel->fFlags >> 1 & 1U) != 0;
  bVar5 = __12cXObjectImpl_sAutoReset != 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  pOVar9 = (ObjSelector *)
           (*(code *)_5Globs_pObjectFolder->__vtable[1].SetSemiGlobalFile)
                     ((int)&_5Globs_pObjectFolder->__vtable +
                      (int)*(short *)&_5Globs_pObjectFolder->__vtable[1].GetTypeAttrBlock);
  if ((bVar1 && bVar5) || (this->fObjSel == pOVar9)) {
    pOVar4 = this->fModule->__vtable;
    (*(code *)pOVar4[1].Init)
              ((int)&this->fModule->__vtable + (int)*(short *)&pOVar4[1].ObjectModule,this->_vb966);
    (*(code *)this->__vtable->PostLoad)
              ((int)this->fTemp + *(short *)&this->__vtable->Reset + -0x16,0);
    if (bVar1 && bVar5) {
      pcVar3 = this->_vb966->__vtable;
      (*(code *)pcVar3->GetInteractionLeader)
                ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3->SetObjectProbe,0,0,0);
    }
    pcVar8 = this->_vb966;
  }
  else {
    pcVar8 = this->_vb966;
  }
  (*(code *)pcVar8->__vtable->SetDrawLabel)
            ((int)&pcVar8->_vb899 + (int)*(short *)&pcVar8->__vtable->CenterHouseViewOnMe);
  return;
}

void cXObjectImpl::PreSave() {
  return;
}

void cXObjectImpl::Cleanup(cXObject *obj) {
	FTilePt loc;
	int level;
	cXObject *container;
	SInt16 slotNum;
	bool inWorld;
	
  short sVar1;
  cXObject__21_1030__vtable *pcVar2;
  ObjectModule *pOVar3;
  ObjectModule__vtable *pOVar4;
  ushort startTreeID;
  Behavior *startBehavior;
  cXObject__21_1030 *pcVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  FTilePt loc;
  ushort slotNum;
  int level;
  cXObject__21_1030 *container;
  bool inWorld;
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
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (obj == (cXObject__21_1030 *)0x0) {
    pcVar2 = this->_vb966->__vtable;
    lVar6 = (*(code *)pcVar2->GetSelFile)
                      ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->GetBehavior,3);
    if (lVar6 == 0) {
                    /* end of inlined section */
      pcVar2 = this->_vb966->__vtable;
      (*(code *)pcVar2->GetType)
                ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->GetDef,&loc,&level,&container,
                 &slotNum,&inWorld);
      pcVar2 = this->_vb966->__vtable;
      (*(code *)pcVar2->GetData)((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->GetRect);
      pcVar2 = this->_vb966->__vtable;
      lVar6 = (*(code *)pcVar2->IsBeingDraggedAround)
                        ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->IsEmissive,0x40);
      if (lVar6 == 0) {
        (*(code *)this->__vtable->SetMiscFlag)
                  ((int)this->fTemp + *(short *)&this->__vtable->GetHilite + -0x16,1);
        if (_inWorld != 0) {
          pcVar2 = this->_vb966->__vtable;
          (*(code *)pcVar2->GetAdultAnimTable)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->GetModule,&loc,level,
                     container,slotNum);
        }
        pcVar5 = this->_vb966;
      }
      else {
        pcVar5 = this->_vb966;
      }
    }
    else {
      pcVar2 = this->_vb966->__vtable;
      (*(code *)pcVar2->GetInteractionLeader)
                ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->SetObjectProbe,3,0,0);
      this->fData[0x3e] = 0;
      pcVar5 = this->_vb966;
      this->fData[8] = this->fData[8] & 0xffdf;
      pcVar2 = pcVar5->__vtable;
      startBehavior =
           (Behavior *)
           (*(code *)pcVar2[1].SetData)((int)&pcVar5->_vb899 + (int)*(short *)&pcVar2[1].IsOccupied)
      ;
      pcVar2 = this->_vb966->__vtable;
      startTreeID = (*(code *)pcVar2->GetSelFile)
                              ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->GetBehavior,1);
      Reset__11TreeSimImplP8Behaviors(this->_vb1168,startBehavior,startTreeID);
      pcVar5 = this->_vb966;
    }
    pOVar3 = this->fModule;
    pOVar4 = pOVar3->__vtable;
    sVar1 = *(short *)&pOVar4[1].SetTutorialObject;
    uVar7 = (*(code *)pcVar5->__vtable[1].UserCanPlace)
                      ((int)&pcVar5->_vb899 + (int)*(short *)&pcVar5->__vtable[1].IsPartOfMe);
    (*(code *)pOVar4[1].ShowTutorialInfo)
              ((int)&pOVar3->__vtable + (int)sVar1,uVar7,0xffffffffffffffff);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    if (_5Globs_pSound == (cSoundPlayer *)0x0) {
      pOVar3 = this->fModule;
    }
    else {
      QuietBySourceID__12cSoundPlayeri(_5Globs_pSound,(int)(short)this->fID);
      pOVar3 = this->fModule;
    }
    pcVar5 = (cXObject__21_1030 *)
             (*(code *)pOVar3->__vtable[1].GetNumGlobalRoutineSlots)
                       ((int)&pOVar3->__vtable +
                        (int)*(short *)&pOVar3->__vtable[1].GetGlobalRoutingSlot);
    if (pcVar5 == this->_vb966) {
      pOVar4 = this->fModule->__vtable;
      (*(code *)pOVar4[1].BroadcastMessage)
                ((int)&this->fModule->__vtable + (int)*(short *)&pOVar4[1].SendMessage,0);
    }
  }
  return;
}

Int cXObjectImpl::GetHilite() {
  return this->fMiscFlags & 0x1f;
}

void cXObjectImpl::SetHilite(Int newHilite) {
	cXMTObject *me;
	cXObjectImpl *ptr;
	cXMTObjectImpl *srch;
	
  cXObject__21_1030__vtable *pcVar1;
  void *pvVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  uint uVar7;
  
  uVar7 = newHilite & 0x1f;
  pcVar1 = this->_vb966->__vtable;
  lVar3 = (*(code *)pcVar1[1].GetFrontFaceDirection)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].GetInteractionLeader);
  if (lVar3 == 0) {
    if ((this->fMiscFlags & 0x1fU) != uVar7) {
      this->fMiscFlags = this->fMiscFlags & 0xffffffe0U | uVar7;
      pcVar1 = this->_vb966->__vtable;
      (*(code *)pcVar1->RunTree)
                ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1->IsSpriteVisible,0);
    }
  }
  else {
                    /* inlined from SCID.h */
    if (this == (cXObjectImpl__127_901 *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = _dyncastimpl__7TreeSim4SCID(this->_vb966->_vb899,cXMTObjectID);
    }
                    /* end of inlined section */
    lVar3 = (**(code **)(*(int *)((int)pvVar2 + 4) + 0x4c))
                      ((int)pvVar2 + (int)*(short *)(*(int *)((int)pvVar2 + 4) + 0x48));
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*(int *)((int)pvVar2 + 4) + 0x14))
                        ((int)pvVar2 + (int)*(short *)(*(int *)((int)pvVar2 + 4) + 0x10));
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
      lVar6 = 0;
      if (lVar3 != 0) {
        iVar4 = *(int *)((int)lVar3 + 4);
        lVar6 = (**(code **)(iVar4 + 100))((int)lVar3 + (int)*(short *)(iVar4 + 0x60));
      }
                    /* end of inlined section */
      if (lVar6 != 0) {
        iVar4 = *(int *)lVar6;
        while( true ) {
          piVar5 = (int *)lVar6;
          if ((*(uint *)(iVar4 + 0xe4) & 0x1f) != uVar7) {
            *(uint *)(iVar4 + 0xe4) = *(uint *)(iVar4 + 0xe4) & 0xffffffe0;
            *(uint *)(*piVar5 + 0xe4) = *(uint *)(*piVar5 + 0xe4) | uVar7;
            iVar4 = *(int *)(*(int *)(*piVar5 + 4) + 4);
            (**(code **)(iVar4 + 100))(*(int *)(*piVar5 + 4) + (int)*(short *)(iVar4 + 0x60),0);
          }
          iVar4 = *(int *)(piVar5[1] + 4);
          lVar3 = (**(code **)(iVar4 + 0x1c))(piVar5[1] + (int)*(short *)(iVar4 + 0x18));
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
          lVar6 = 0;
          if (lVar3 != 0) {
            iVar4 = *(int *)((int)lVar3 + 4);
            lVar6 = (**(code **)(iVar4 + 100))((int)lVar3 + (int)*(short *)(iVar4 + 0x60));
          }
                    /* end of inlined section */
          if (lVar6 == 0) break;
          iVar4 = *(int *)lVar6;
        }
      }
    }
    else if ((this->fMiscFlags & 0x1fU) != uVar7) {
      this->fMiscFlags = this->fMiscFlags & 0xffffffe0U | uVar7;
      pcVar1 = this->_vb966->__vtable;
      (*(code *)pcVar1->RunTree)
                ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1->IsSpriteVisible,0);
    }
  }
  return;
}

SInt16 cXObjectImpl::GetCurrentValue() {
	SInt16 value;
	bool broken;
	cXMTObject *mtobj;
	cXMTObjectImpl *srch;
	cXObjectImpl *ptr;
	
  cXObject__21_1030__vtable *pcVar1;
  bool bVar2;
  void *pvVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  ushort uVar7;
  long lVar8;
  
  bVar2 = false;
  pcVar1 = this->_vb966->__vtable;
  lVar5 = (*(code *)pcVar1[1].GetFrontFaceDirection)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].GetInteractionLeader);
  if (lVar5 == 0) {
    uVar7 = this->fData[0x29];
    bVar2 = this->fData[0xf] != 0;
  }
  else {
                    /* inlined from SCID.h */
    if (this == (cXObjectImpl__127_901 *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = _dyncastimpl__7TreeSim4SCID(this->_vb966->_vb899,cXMTObjectID);
    }
                    /* end of inlined section */
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
    lVar5 = (**(code **)(*(int *)((int)pvVar3 + 4) + 0x14))
                      ((int)pvVar3 + (int)*(short *)(*(int *)((int)pvVar3 + 4) + 0x10));
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
    lVar8 = 0;
    if (lVar5 != 0) {
      iVar6 = *(int *)((int)lVar5 + 4);
      lVar8 = (**(code **)(iVar6 + 100))((int)lVar5 + (int)*(short *)(iVar6 + 0x60));
    }
                    /* end of inlined section */
    if (lVar8 == 0) {
      iVar6 = *(int *)((int)pvVar3 + 4);
    }
    else {
      do {
        piVar4 = (int *)lVar8;
        if ((bVar2) ||
           (iVar6 = *(int *)(*(int *)(*piVar4 + 4) + 4),
           lVar5 = (**(code **)(iVar6 + 0x20c))
                             (*(int *)(*piVar4 + 4) + (int)*(short *)(iVar6 + 0x208),0xf),
           lVar5 != 0)) {
          bVar2 = true;
          iVar6 = piVar4[1];
        }
        else {
          iVar6 = piVar4[1];
          bVar2 = false;
        }
        lVar5 = (**(code **)(*(int *)(iVar6 + 4) + 0x1c))
                          (iVar6 + *(short *)(*(int *)(iVar6 + 4) + 0x18));
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
        lVar8 = 0;
        if (lVar5 != 0) {
          iVar6 = *(int *)((int)lVar5 + 4);
          lVar8 = (**(code **)(iVar6 + 100))((int)lVar5 + (int)*(short *)(iVar6 + 0x60));
        }
                    /* end of inlined section */
      } while (lVar8 != 0);
      iVar6 = *(int *)((int)pvVar3 + 4);
    }
    lVar5 = (**(code **)(iVar6 + 0x14))((int)pvVar3 + (int)*(short *)(iVar6 + 0x10));
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
    iVar6 = _pGifTag0;
    if (lVar5 != 0) {
      iVar6 = *(int *)((int)lVar5 + 4);
      piVar4 = (int *)(**(code **)(iVar6 + 100))((int)lVar5 + (int)*(short *)(iVar6 + 0x60));
      iVar6 = *piVar4;
    }
    uVar7 = *(ushort *)(iVar6 + 0x78);
  }
  if (bVar2) {
    uVar7 = (short)uVar7 / 2;
  }
  return uVar7;
}

void cXObject::SetFreeWill(bool freeWill) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  __12cXObjectImpl_sFreeWill = (int)freeWill;
  if (_5Globs_pSimulator != (cSimulator *)0x0) {
                    /* end of inlined section */
    (*(code *)_5Globs_pSimulator->__vtable->IsStopped)
              ((int)&_5Globs_pSimulator->__vtable +
               (int)*(short *)&_5Globs_pSimulator->__vtable->IsPaused,0x1e,freeWill);
  }
  return;
}

void cXObjectImpl::DayPassed() {
	ObjDefinition *def;
	cXMTObject *mtobj;
	ObjSelector *master;
	cXObjectImpl *ptr;
	ObjSelector *this;
	SInt16 value;
	
  ushort uVar1;
  cXObject__21_1030__vtable *pcVar2;
  void *pvVar3;
  void *pvVar4;
  int *piVar5;
  long lVar6;
  ObjDefinition *pOVar7;
  
  UpdateAge__12cXObjectImpl(this);
  pcVar2 = this->_vb966->__vtable;
  lVar6 = (*(code *)pcVar2[1].GetFrontFaceDirection)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2[1].GetInteractionLeader);
  if (lVar6 == 0) {
    pOVar7 = this->fDef;
  }
  else {
                    /* inlined from SCID.h */
    if (this == (cXObjectImpl__127_901 *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = _dyncastimpl__7TreeSim4SCID(this->_vb966->_vb899,cXMTObjectID);
    }
                    /* end of inlined section */
    if (pvVar3 == (void *)0x0) {
      return;
    }
    pvVar4 = (void *)(**(code **)(*(int *)((int)pvVar3 + 4) + 0x14))
                               ((int)pvVar3 + (int)*(short *)(*(int *)((int)pvVar3 + 4) + 0x10));
    if (pvVar4 != pvVar3) {
      return;
    }
    pcVar2 = this->_vb966->__vtable;
    piVar5 = (int *)(*(code *)pcVar2->GetObjectLightSource)
                              ((int)&this->_vb966->_vb899 +
                               (int)*(short *)&pcVar2->GetLightingContribution);
    lVar6 = (**(code **)(*piVar5 + 0x94))
                      ((int)piVar5 + (int)*(short *)(*piVar5 + 0x90),this->fObjSel);
    if (lVar6 == 0) {
      return;
    }
                    /* end of inlined section */
    pOVar7 = *(ObjDefinition **)((int)lVar6 + 0x18);
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  if ((pOVar7->selfDepreciating == 0) &&
     (lVar6 = (*(code *)_5Globs_pSimulator->__vtable->Resume)
                        ((int)&_5Globs_pSimulator->__vtable +
                         (int)*(short *)&_5Globs_pSimulator->__vtable->Pause,0x29), lVar6 == 0)) {
    if (this->fData[0x29] == pOVar7->price) {
      uVar1 = pOVar7->initialDepreciation;
      if (pOVar7->initialDepreciation == 0) {
        uVar1 = pOVar7->dailyDepreciation;
      }
    }
    else {
      uVar1 = pOVar7->dailyDepreciation;
    }
    lVar6 = (long)(int)(short)(this->fData[0x29] - uVar1);
    if (lVar6 < (short)pOVar7->depreciationLimit) {
      lVar6 = (long)(short)pOVar7->depreciationLimit;
    }
    this->fData[0x29] = (ushort)lVar6;
  }
  return;
}

void cXObjectImpl::UpdateAge() {
	cSimulator *sim;
	SInt16 age;
	SInt16 monthAge;
	
  cXObject__21_1030__vtable *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  
  pcVar1 = this->_vb966->__vtable;
  piVar2 = (int *)(*(code *)pcVar1[1].GetObjectSlot)
                            ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].CountObjectSlots
                            );
  iVar3 = (**(code **)(*piVar2 + 0x24))((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),8);
  iVar3 = (iVar3 - (uint)this->fData[0x2d]) * 0x10000;
  uVar6 = (ushort)((uint)iVar3 >> 0x10);
  iVar4 = (**(code **)(*piVar2 + 0x24))((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),7);
  iVar5 = (int)((iVar4 - (uint)this->fData[0x2e]) * 0x10000) >> 0x10;
  iVar4 = (**(code **)(*piVar2 + 0x24))((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),1);
  if ((int)((iVar4 - (uint)this->fData[0x2f]) * 0x10000) < 0) {
    iVar5 = (iVar5 + -1) * 0x10000 >> 0x10;
  }
  if (iVar5 < 0) {
    iVar5 = (iVar5 + 0xc) * 0x10000 >> 0x10;
    uVar6 = (ushort)((uint)(((iVar3 >> 0x10) + -1) * 0x10000) >> 0x10);
  }
  this->fData[0x12] = uVar6;
  this->fData[0x30] = uVar6 * 0xc + (short)iVar5;
  return;
}

void cXObjectImpl::~cXObjectImpl(int __in_chrg) {
	vector<SpriteSlot,__malloc_alloc_template<0> > *this;
	SpriteSlot *last;
	SpriteSlot *first;
	SpriteSlot *pointer;
	vector<SpriteSlot,__malloc_alloc_template<0> > *this;
	void *pAddress;
	RoutingSlot *last;
	RoutingSlot *first;
	RoutingSlot *pointer;
	ObjectSlot *last;
	ObjectSlot *first;
	ObjectSlot *pointer;
	void *pAddress;
	
  cXObject__21_1030 *pcVar1;
  SpriteSlot *pSVar2;
  RoutingSlot *pRVar3;
  ObjectSlot *pOVar4;
  short sVar5;
  short sVar6;
  undefined6 uVar7;
  undefined6 uVar8;
  undefined6 uVar9;
  ushort uVar10;
  ushort uVar11;
  __vtbl_ptr_type *p_Var12;
  __vtbl_ptr_type *p_Var13;
  Slot__vtable *pSVar14;
  __vtbl_ptr_type *p_Var15;
  ushort *pAddress;
  RelMatrix *pInstance;
  __vtbl_ptr_type _Var16;
  __vtbl_ptr_type _Var17;
  __vtbl_ptr_type _Var18;
  SpriteSlot *pSVar19;
  RoutingSlot *pRVar20;
  ObjectSlot *pOVar21;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  cXObject__21_1030__vtable *pcVar22;
  undefined8 unaff_s2;
  __vtbl_ptr_type *p_Var23;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  undefined local_5c0 [8];
  __vtbl_ptr_type local_5b8;
  __vtbl_ptr_type local_5b0;
  __vtbl_ptr_type local_5a8;
  __vtbl_ptr_type local_5a0;
  __vtbl_ptr_type local_598;
  short local_590;
  short local_588;
  short local_580;
  short local_578;
  short local_570;
  short local_568;
  short local_560;
  short local_558;
  short local_550;
  short local_548;
  short local_540;
  undefined local_530 [8];
  undefined8 local_528;
  short local_520;
  short local_518;
  short local_510;
  short local_508;
  short local_500;
  short local_4f8;
  short local_4f0;
  short local_4e8;
  short local_4e0;
  short local_4d8;
  short local_4d0;
  short local_4c8;
  short local_4c0;
  short local_4b8;
  short local_4b0;
  short local_4a8;
  short local_4a0;
  short local_498;
  short local_490;
  short local_488;
  short local_480;
  short local_478;
  short local_470;
  short local_468;
  short local_460;
  short local_458;
  short local_450;
  short local_448;
  short local_440;
  short local_438;
  short local_430;
  short local_428;
  short local_420;
  short local_418;
  short local_410;
  short local_408;
  short local_400;
  short local_3f8;
  short local_3f0;
  short local_3e8;
  short local_3e0;
  short local_3d8;
  short local_3d0;
  short local_3c8;
  short local_3c0;
  short local_3b8;
  short local_3b0;
  short local_3a8;
  short local_3a0;
  short local_398;
  short local_390;
  short local_388;
  short local_380;
  short local_378;
  short local_370;
  short local_368;
  short local_360;
  short local_358;
  short local_350;
  short local_348;
  short local_340;
  short local_338;
  short local_330;
  short local_328;
  short local_320;
  short local_318;
  short local_310;
  short local_308;
  short local_300;
  short local_2f8;
  short local_2f0;
  short local_2e8;
  short local_2e0;
  short local_2d8;
  short local_2d0;
  short local_2c8;
  short local_2c0;
  short local_2b8;
  short local_2b0;
  short local_2a8;
  short local_2a0;
  short local_298;
  short local_290;
  short local_288;
  short local_280;
  short local_278;
  short local_270;
  short local_268;
  short local_260;
  short local_258;
  short local_250;
  short local_248;
  short local_240;
  short local_238;
  short local_230;
  short local_228;
  short local_220;
  short local_218;
  short local_210;
  short local_208;
  short local_200;
  short local_1f8;
  short local_1f0;
  short local_1e8;
  short local_1e0;
  short local_1d8;
  short local_1d0;
  short local_1c8;
  short local_1c0;
  short local_1b8;
  short local_1b0;
  short local_1a8;
  short local_1a0;
  short local_198;
  short local_190;
  short local_188;
  short local_180;
  short local_178;
  short local_170;
  short local_168;
  short local_160;
  short local_158;
  short local_150;
  short local_148;
  short local_140;
  short local_138;
  short local_130;
  short local_128;
  short local_120;
  short local_118;
  short local_110;
  short local_108;
  short local_100;
  short local_f8;
  short local_f0;
  short local_e8;
  short local_e0;
  __vtbl_ptr_type local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  __vtbl_ptr_type local_b8;
  undefined8 local_b0;
  __vtbl_ptr_type local_a8;
  undefined *local_a0;
  undefined *puStack_9c;
  undefined *local_90;
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
  
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined *)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined *)unaff_s0;
  puStack_9c = (undefined *)((ulong)unaff_s0 >> 0x20);
  this->__vtable = (cXObjectImpl__127_901__vtable *)_vt_12cXObjectImpl;
  this->_vb966->_vb899->__vtable = (TreeSim__vtable *)_vt_12cXObjectImpl_7TreeSim;
  this->_vb966->__vtable = (cXObject__21_1030__vtable *)_vt_12cXObjectImpl_8cXObject;
  this->_vb1168->__vtable = (TreeSimImpl__21_3338__vtable *)_vt_12cXObjectImpl_11TreeSimImpl;
  uVar11 = _vt_12cXObjectImpl_7TreeSim[2].__delta;
  if (__in_chrg == 0) {
    p_Var23 = (__vtbl_ptr_type *)local_5c0;
    p_Var12 = _vt_12cXObjectImpl_7TreeSim;
    do {
      p_Var15 = p_Var12;
      p_Var13 = p_Var23;
      _Var16 = p_Var15[1];
      _Var17 = p_Var15[2];
      _Var18 = p_Var15[3];
      *p_Var13 = *p_Var15;
      p_Var13[1] = _Var16;
      p_Var13[2] = _Var17;
      p_Var13[3] = _Var18;
      p_Var23 = p_Var13 + 4;
      p_Var12 = p_Var15 + 4;
    } while (p_Var15 + 4 != _vt_12cXObjectImpl_7TreeSim + 0x10);
    pcVar1 = this->_vb966;
    _Var16 = p_Var15[5];
    p_Var13[4] = (__vtbl_ptr_type)
                 CONCAT62(_vt_12cXObjectImpl_7TreeSim[16]._2_6_,
                          _vt_12cXObjectImpl_7TreeSim[16].__delta);
    p_Var23 = _vt_12cXObjectImpl_8cXObject;
    p_Var13[5] = _Var16;
    pcVar1->_vb899->__vtable = (TreeSim__vtable *)local_5c0;
    uVar10 = _vt_12cXObjectImpl_8cXObject[1].__delta;
    sVar5 = (short)this;
    sVar6 = sVar5 - ((short)this->_vb966->_vb899 + -0x134);
    local_548 = sVar5 - ((short)this->_vb1168 + -0x15c);
    local_5b8.__delta = _vt_12cXObjectImpl_7TreeSim[1].__delta + sVar6;
    local_5a8.__delta = _vt_12cXObjectImpl_7TreeSim[3].__delta + sVar6;
    local_5b0.__delta = (uVar11 + sVar6) - local_548;
    local_5a0.__delta = (_vt_12cXObjectImpl_7TreeSim[4].__delta + sVar6) - local_548;
    local_598.__delta = (_vt_12cXObjectImpl_7TreeSim[5].__delta + sVar6) - local_548;
    local_590 = (_vt_12cXObjectImpl_7TreeSim[6].__delta + sVar6) - local_548;
    local_588 = (_vt_12cXObjectImpl_7TreeSim[7].__delta + sVar6) - local_548;
    local_580 = (_vt_12cXObjectImpl_7TreeSim[8].__delta + sVar6) - local_548;
    local_578 = (_vt_12cXObjectImpl_7TreeSim[9].__delta + sVar6) - local_548;
    local_570 = (_vt_12cXObjectImpl_7TreeSim[10].__delta + sVar6) - local_548;
    local_568 = (_vt_12cXObjectImpl_7TreeSim[11].__delta + sVar6) - local_548;
    local_560 = (_vt_12cXObjectImpl_7TreeSim[12].__delta + sVar6) - local_548;
    local_558 = (_vt_12cXObjectImpl_7TreeSim[13].__delta + sVar6) - local_548;
    local_540 = (_vt_12cXObjectImpl_7TreeSim[16].__delta + sVar6) - local_548;
    local_550 = (_vt_12cXObjectImpl_7TreeSim[14].__delta + sVar6) - local_548;
    local_548 = (_vt_12cXObjectImpl_7TreeSim[15].__delta + sVar6) - local_548;
    pcVar22 = (cXObject__21_1030__vtable *)local_530;
    do {
      _Var16 = p_Var23[1];
      _Var17 = p_Var23[2];
      _Var18 = p_Var23[3];
      *(__vtbl_ptr_type *)pcVar22 = *p_Var23;
      *(__vtbl_ptr_type *)&pcVar22->GetNumAttr = _Var16;
      *(__vtbl_ptr_type *)&pcVar22->CalcShortDistance = _Var17;
      *(__vtbl_ptr_type *)&pcVar22->GetSpriteSlot = _Var18;
      p_Var23 = p_Var23 + 4;
      pcVar22 = (cXObject__21_1030__vtable *)&pcVar22->GetHilite;
    } while (p_Var23 != _vt_12cXObjectImpl_7TreeSim);
    this->_vb966->__vtable = (cXObject__21_1030__vtable *)local_530;
    uVar9 = _vt_12cXObjectImpl_11TreeSimImpl[4]._2_6_;
    uVar8 = _vt_12cXObjectImpl_11TreeSimImpl[2]._2_6_;
    uVar7 = _vt_12cXObjectImpl_11TreeSimImpl[1]._2_6_;
    local_e8 = sVar5 - ((short)this->_vb966 + -0x154);
    local_528._0_2_ = uVar10 + local_e8;
    local_520 = _vt_12cXObjectImpl_8cXObject[2].__delta + local_e8;
    local_518 = _vt_12cXObjectImpl_8cXObject[3].__delta + local_e8;
    local_510 = _vt_12cXObjectImpl_8cXObject[4].__delta + local_e8;
    local_508 = _vt_12cXObjectImpl_8cXObject[5].__delta + local_e8;
    local_500 = _vt_12cXObjectImpl_8cXObject[6].__delta + local_e8;
    local_4f8 = _vt_12cXObjectImpl_8cXObject[7].__delta + local_e8;
    local_4f0 = _vt_12cXObjectImpl_8cXObject[8].__delta + local_e8;
    local_4e8 = _vt_12cXObjectImpl_8cXObject[9].__delta + local_e8;
    local_4e0 = _vt_12cXObjectImpl_8cXObject[10].__delta + local_e8;
    local_4d8 = _vt_12cXObjectImpl_8cXObject[11].__delta + local_e8;
    local_4d0 = _vt_12cXObjectImpl_8cXObject[12].__delta + local_e8;
    local_4c8 = _vt_12cXObjectImpl_8cXObject[13].__delta + local_e8;
    local_4c0 = _vt_12cXObjectImpl_8cXObject[14].__delta + local_e8;
    local_4b8 = _vt_12cXObjectImpl_8cXObject[15].__delta + local_e8;
    local_4b0 = _vt_12cXObjectImpl_8cXObject[16].__delta + local_e8;
    local_4a8 = _vt_12cXObjectImpl_8cXObject[17].__delta + local_e8;
    local_4a0 = _vt_12cXObjectImpl_8cXObject[18].__delta + local_e8;
    local_498 = _vt_12cXObjectImpl_8cXObject[19].__delta + local_e8;
    local_490 = _vt_12cXObjectImpl_8cXObject[20].__delta + local_e8;
    local_488 = _vt_12cXObjectImpl_8cXObject[21].__delta + local_e8;
    local_480 = _vt_12cXObjectImpl_8cXObject[22].__delta + local_e8;
    local_478 = _vt_12cXObjectImpl_8cXObject[23].__delta + local_e8;
    local_470 = _vt_12cXObjectImpl_8cXObject[24].__delta + local_e8;
    local_468 = _vt_12cXObjectImpl_8cXObject[25].__delta + local_e8;
    local_460 = _vt_12cXObjectImpl_8cXObject[26].__delta + local_e8;
    local_458 = _vt_12cXObjectImpl_8cXObject[27].__delta + local_e8;
    local_450 = _vt_12cXObjectImpl_8cXObject[28].__delta + local_e8;
    local_448 = _vt_12cXObjectImpl_8cXObject[29].__delta + local_e8;
    local_440 = _vt_12cXObjectImpl_8cXObject[30].__delta + local_e8;
    local_438 = _vt_12cXObjectImpl_8cXObject[31].__delta + local_e8;
    local_430 = _vt_12cXObjectImpl_8cXObject[32].__delta + local_e8;
    local_428 = _vt_12cXObjectImpl_8cXObject[33].__delta + local_e8;
    local_420 = _vt_12cXObjectImpl_8cXObject[34].__delta + local_e8;
    local_418 = _vt_12cXObjectImpl_8cXObject[35].__delta + local_e8;
    local_410 = _vt_12cXObjectImpl_8cXObject[36].__delta + local_e8;
    local_408 = _vt_12cXObjectImpl_8cXObject[37].__delta + local_e8;
    local_400 = _vt_12cXObjectImpl_8cXObject[38].__delta + local_e8;
    local_3f8 = _vt_12cXObjectImpl_8cXObject[39].__delta + local_e8;
    local_3f0 = _vt_12cXObjectImpl_8cXObject[40].__delta + local_e8;
    local_3e8 = _vt_12cXObjectImpl_8cXObject[41].__delta + local_e8;
    local_3e0 = _vt_12cXObjectImpl_8cXObject[42].__delta + local_e8;
    local_3d8 = _vt_12cXObjectImpl_8cXObject[43].__delta + local_e8;
    local_3d0 = _vt_12cXObjectImpl_8cXObject[44].__delta + local_e8;
    local_3c8 = _vt_12cXObjectImpl_8cXObject[45].__delta + local_e8;
    local_3c0 = _vt_12cXObjectImpl_8cXObject[46].__delta + local_e8;
    local_3b8 = _vt_12cXObjectImpl_8cXObject[47].__delta + local_e8;
    local_3b0 = _vt_12cXObjectImpl_8cXObject[48].__delta + local_e8;
    local_3a8 = _vt_12cXObjectImpl_8cXObject[49].__delta + local_e8;
    local_3a0 = _vt_12cXObjectImpl_8cXObject[50].__delta + local_e8;
    local_398 = _vt_12cXObjectImpl_8cXObject[51].__delta + local_e8;
    local_390 = _vt_12cXObjectImpl_8cXObject[52].__delta + local_e8;
    local_388 = _vt_12cXObjectImpl_8cXObject[53].__delta + local_e8;
    local_380 = _vt_12cXObjectImpl_8cXObject[54].__delta + local_e8;
    local_378 = _vt_12cXObjectImpl_8cXObject[55].__delta + local_e8;
    local_370 = _vt_12cXObjectImpl_8cXObject[56].__delta + local_e8;
    local_368 = _vt_12cXObjectImpl_8cXObject[57].__delta + local_e8;
    local_360 = _vt_12cXObjectImpl_8cXObject[58].__delta + local_e8;
    local_358 = _vt_12cXObjectImpl_8cXObject[59].__delta + local_e8;
    local_350 = _vt_12cXObjectImpl_8cXObject[60].__delta + local_e8;
    local_348 = _vt_12cXObjectImpl_8cXObject[61].__delta + local_e8;
    local_340 = _vt_12cXObjectImpl_8cXObject[62].__delta + local_e8;
    local_338 = _vt_12cXObjectImpl_8cXObject[63].__delta + local_e8;
    local_330 = _vt_12cXObjectImpl_8cXObject[64].__delta + local_e8;
    local_328 = _vt_12cXObjectImpl_8cXObject[65].__delta + local_e8;
    local_320 = _vt_12cXObjectImpl_8cXObject[66].__delta + local_e8;
    local_318 = _vt_12cXObjectImpl_8cXObject[67].__delta + local_e8;
    local_310 = _vt_12cXObjectImpl_8cXObject[68].__delta + local_e8;
    local_308 = _vt_12cXObjectImpl_8cXObject[69].__delta + local_e8;
    local_300 = _vt_12cXObjectImpl_8cXObject[70].__delta + local_e8;
    local_2f8 = _vt_12cXObjectImpl_8cXObject[71].__delta + local_e8;
    local_2f0 = _vt_12cXObjectImpl_8cXObject[72].__delta + local_e8;
    local_2e8 = _vt_12cXObjectImpl_8cXObject[73].__delta + local_e8;
    local_2e0 = _vt_12cXObjectImpl_8cXObject[74].__delta + local_e8;
    local_2d8 = _vt_12cXObjectImpl_8cXObject[75].__delta + local_e8;
    local_2d0 = _vt_12cXObjectImpl_8cXObject[76].__delta + local_e8;
    local_2c8 = _vt_12cXObjectImpl_8cXObject[77].__delta + local_e8;
    local_2c0 = _vt_12cXObjectImpl_8cXObject[78].__delta + local_e8;
    local_2b8 = _vt_12cXObjectImpl_8cXObject[79].__delta + local_e8;
    local_2b0 = _vt_12cXObjectImpl_8cXObject[80].__delta + local_e8;
    local_2a8 = _vt_12cXObjectImpl_8cXObject[81].__delta + local_e8;
    local_2a0 = _vt_12cXObjectImpl_8cXObject[82].__delta + local_e8;
    local_298 = _vt_12cXObjectImpl_8cXObject[83].__delta + local_e8;
    local_290 = _vt_12cXObjectImpl_8cXObject[84].__delta + local_e8;
    local_288 = _vt_12cXObjectImpl_8cXObject[85].__delta + local_e8;
    local_280 = _vt_12cXObjectImpl_8cXObject[86].__delta + local_e8;
    local_278 = _vt_12cXObjectImpl_8cXObject[87].__delta + local_e8;
    local_270 = _vt_12cXObjectImpl_8cXObject[88].__delta + local_e8;
    local_268 = _vt_12cXObjectImpl_8cXObject[89].__delta + local_e8;
    local_260 = _vt_12cXObjectImpl_8cXObject[90].__delta + local_e8;
    local_258 = _vt_12cXObjectImpl_8cXObject[91].__delta + local_e8;
    local_250 = _vt_12cXObjectImpl_8cXObject[92].__delta + local_e8;
    local_248 = _vt_12cXObjectImpl_8cXObject[93].__delta + local_e8;
    local_240 = _vt_12cXObjectImpl_8cXObject[94].__delta + local_e8;
    local_238 = _vt_12cXObjectImpl_8cXObject[95].__delta + local_e8;
    local_230 = _vt_12cXObjectImpl_8cXObject[96].__delta + local_e8;
    local_228 = _vt_12cXObjectImpl_8cXObject[97].__delta + local_e8;
    local_220 = _vt_12cXObjectImpl_8cXObject[98].__delta + local_e8;
    local_218 = _vt_12cXObjectImpl_8cXObject[99].__delta + local_e8;
    local_210 = _vt_12cXObjectImpl_8cXObject[100].__delta + local_e8;
    local_208 = _vt_12cXObjectImpl_8cXObject[101].__delta + local_e8;
    local_200 = _vt_12cXObjectImpl_8cXObject[102].__delta + local_e8;
    local_1f8 = _vt_12cXObjectImpl_8cXObject[103].__delta + local_e8;
    local_1f0 = _vt_12cXObjectImpl_8cXObject[104].__delta + local_e8;
    local_1e8 = _vt_12cXObjectImpl_8cXObject[105].__delta + local_e8;
    local_1e0 = _vt_12cXObjectImpl_8cXObject[106].__delta + local_e8;
    local_1d8 = _vt_12cXObjectImpl_8cXObject[107].__delta + local_e8;
    local_1d0 = _vt_12cXObjectImpl_8cXObject[108].__delta + local_e8;
    local_1c8 = _vt_12cXObjectImpl_8cXObject[109].__delta + local_e8;
    local_1c0 = _vt_12cXObjectImpl_8cXObject[110].__delta + local_e8;
    local_1b8 = _vt_12cXObjectImpl_8cXObject[111].__delta + local_e8;
    local_1b0 = _vt_12cXObjectImpl_8cXObject[112].__delta + local_e8;
    local_1a8 = _vt_12cXObjectImpl_8cXObject[113].__delta + local_e8;
    local_1a0 = _vt_12cXObjectImpl_8cXObject[114].__delta + local_e8;
    local_198 = _vt_12cXObjectImpl_8cXObject[115].__delta + local_e8;
    local_190 = _vt_12cXObjectImpl_8cXObject[116].__delta + local_e8;
    local_188 = _vt_12cXObjectImpl_8cXObject[117].__delta + local_e8;
    local_180 = _vt_12cXObjectImpl_8cXObject[118].__delta + local_e8;
    local_178 = _vt_12cXObjectImpl_8cXObject[119].__delta + local_e8;
    local_170 = _vt_12cXObjectImpl_8cXObject[120].__delta + local_e8;
    local_168 = _vt_12cXObjectImpl_8cXObject[121].__delta + local_e8;
    local_160 = _vt_12cXObjectImpl_8cXObject[122].__delta + local_e8;
    local_158 = _vt_12cXObjectImpl_8cXObject[123].__delta + local_e8;
    local_150 = _vt_12cXObjectImpl_8cXObject[124].__delta + local_e8;
    local_148 = _vt_12cXObjectImpl_8cXObject[125].__delta + local_e8;
    local_140 = _vt_12cXObjectImpl_8cXObject[126].__delta + local_e8;
    local_138 = _vt_12cXObjectImpl_8cXObject[127].__delta + local_e8;
    local_130 = _vt_12cXObjectImpl_8cXObject[128].__delta + local_e8;
    local_128 = _vt_12cXObjectImpl_8cXObject[129].__delta + local_e8;
    local_120 = _vt_12cXObjectImpl_8cXObject[130].__delta + local_e8;
    local_118 = _vt_12cXObjectImpl_8cXObject[131].__delta + local_e8;
    local_110 = _vt_12cXObjectImpl_8cXObject[132].__delta + local_e8;
    local_108 = _vt_12cXObjectImpl_8cXObject[133].__delta + local_e8;
    local_100 = _vt_12cXObjectImpl_8cXObject[134].__delta + local_e8;
    local_f8 = _vt_12cXObjectImpl_8cXObject[135].__delta + local_e8;
    local_e0 = _vt_12cXObjectImpl_8cXObject[138].__delta + local_e8;
    local_f0 = _vt_12cXObjectImpl_8cXObject[136].__delta + local_e8;
    local_e8 = _vt_12cXObjectImpl_8cXObject[137].__delta + local_e8;
    local_d0 = _vt_12cXObjectImpl_11TreeSimImpl[0];
    local_b8 = _vt_12cXObjectImpl_11TreeSimImpl[3];
    local_a8 = _vt_12cXObjectImpl_11TreeSimImpl[5];
    this->_vb1168->__vtable = (TreeSimImpl__21_3338__vtable *)&local_d0;
    sVar5 = sVar5 - ((short)this->_vb1168 + -0x15c);
    local_c8 = CONCAT62(uVar7,_vt_12cXObjectImpl_11TreeSimImpl[1].__delta + sVar5);
    local_c0 = CONCAT62(uVar8,_vt_12cXObjectImpl_11TreeSimImpl[2].__delta + sVar5);
    local_b0 = CONCAT62(uVar9,_vt_12cXObjectImpl_11TreeSimImpl[4].__delta + sVar5);
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pObjectFolder->__vtable[1].GetPath)
            ((int)&_5Globs_pObjectFolder->__vtable +
             (int)*(short *)&_5Globs_pObjectFolder->__vtable[1].DoCommand,this->fObjSel);
  if (this->fAttrs == (ushort *)0x0) {
    pAddress = this->fDynSpriteFlags;
  }
  else {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this->fAttrs);
                    /* end of inlined section */
    pAddress = this->fDynSpriteFlags;
  }
  if (pAddress != (ushort *)0x0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(pAddress);
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  if (_5Globs_pSound == (cSoundPlayer *)0x0) {
    pInstance = this->fInstMatrix;
  }
  else {
                    /* end of inlined section */
    QuietBySourceID__12cSoundPlayeri(_5Globs_pSound,(int)(short)this->fID);
    pInstance = this->fInstMatrix;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  DestroyInstance__9RelMatrixP9RelMatrix(pInstance);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
  pSVar2 = (this->fSpriteSlots).finish;
  pSVar19 = (this->fSpriteSlots).start;
  if (pSVar19 != pSVar2) {
    pSVar14 = (pSVar19->field0_0x0).__vtable;
    while( true ) {
      (*(code *)pSVar14[1].Slot)
                ((int)&(pSVar19->field0_0x0).xoffset + (int)*(short *)(pSVar14 + 1),2);
      if (pSVar19 + 1 == pSVar2) break;
      pSVar14 = pSVar19[1].field0_0x0.__vtable;
      pSVar19 = pSVar19 + 1;
    }
  }
  pSVar2 = (this->fSpriteSlots).start;
  if (pSVar2 != (SpriteSlot *)0x0) {
    if (((int)(this->fSpriteSlots).end_of_storage - (int)pSVar2) * 0x38e38e39 >> 3 == 0) {
      pRVar20 = (this->fRoutingSlots).start;
      goto LAB_0024333c;
    }
    free(pSVar2);
  }
  pRVar20 = (this->fRoutingSlots).start;
LAB_0024333c:
  pRVar3 = (this->fRoutingSlots).finish;
  if (pRVar20 == pRVar3) {
    pRVar20 = (this->fRoutingSlots).start;
  }
  else {
    pSVar14 = (pRVar20->field0_0x0).__vtable;
    while( true ) {
      (*(code *)pSVar14[1].Slot)((int)pRVar20->multipliers + *(short *)(pSVar14 + 1) + -0x14,2);
      if (pRVar20 + 1 == pRVar3) break;
      pSVar14 = pRVar20[1].field0_0x0.__vtable;
      pRVar20 = pRVar20 + 1;
    }
    pRVar20 = (this->fRoutingSlots).start;
  }
  if (pRVar20 == (RoutingSlot *)0x0) {
    pOVar21 = (this->fHierSlots).start;
  }
  else if ((int)(this->fRoutingSlots).end_of_storage - (int)pRVar20 >> 6 == 0) {
    pOVar21 = (this->fHierSlots).start;
  }
  else {
    free(pRVar20);
    pOVar21 = (this->fHierSlots).start;
  }
  pOVar4 = (this->fHierSlots).finish;
  if (pOVar21 == pOVar4) {
    pOVar21 = (this->fHierSlots).start;
  }
  else {
    pSVar14 = (pOVar21->field0_0x0).__vtable;
    while( true ) {
      (*(code *)pSVar14[1].Slot)
                ((int)&(pOVar21->field0_0x0).xoffset + (int)*(short *)(pSVar14 + 1),2);
      if (pOVar21 + 1 == pOVar4) break;
      pSVar14 = pOVar21[1].field0_0x0.__vtable;
      pOVar21 = pOVar21 + 1;
    }
    pOVar21 = (this->fHierSlots).start;
  }
  if ((pOVar21 != (ObjectSlot *)0x0) &&
     (((int)(this->fHierSlots).end_of_storage - (int)pOVar21) * 0x38e38e39 >> 2 != 0)) {
    free(pOVar21);
  }
                    /* end of inlined section */
  if ((__in_chrg & 2U) != 0) {
    ___11TreeSimImpl(this->_vb1168,0);
    ___8cXObject(this->_vb966,0);
    ___7TreeSim(this->_vb966->_vb899,0);
  }
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

cXObject* cXObjectImpl::GetObstacleAtLocation(FTilePt &loc, Int level) {
	cXObject *obj;
	
  cXObject__21_1030 *pcVar1;
  long lVar2;
  
  pcVar1 = GetRootObject__12cXObjectImplR7FTilePti(this,loc,level);
  while ((pcVar1 != (cXObject__21_1030 *)0x0 &&
         (lVar2 = (*(code *)pcVar1->__vtable[1].GetBuildModeType)
                            ((int)&pcVar1->_vb899 +
                             (int)*(short *)&pcVar1->__vtable[1].CanChooseAutonomously), lVar2 != 0)
         )) {
    pcVar1 = (cXObject__21_1030 *)
             (*(code *)pcVar1->__vtable[1].IsSpriteVisible)
                       ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar1->__vtable[1].SetDrawLabel);
  }
  return pcVar1;
}

cXObject* cXObjectImpl::GetRootObject(FTilePt &loc, Int level) {
	CTilePt pt;
	
  cXObject__21_1030__vtable *pcVar1;
  cXObject__21_1030 *pcVar2;
  long lVar3;
  CTilePt pt;
  
  __7CTilePtRC7FTilePti(&pt,loc,level);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  lVar3 = (*(code *)_5Globs_pObjectModule->__vtable[1].GetSimFlag)
                    ((int)&_5Globs_pObjectModule->__vtable +
                     (int)*(short *)&_5Globs_pObjectModule->__vtable[1].SetSimFlag,&pt);
  if (lVar3 == 0) {
    ___7CTilePt(&pt,2);
    pcVar2 = (cXObject__21_1030 *)0x0;
  }
  else {
    pcVar1 = this->_vb966->__vtable;
    pcVar2 = (cXObject__21_1030 *)
             (*(code *)pcVar1[1].GetLightingContribution)
                       ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].CanContributeLight,
                        lVar3);
    ___7CTilePt(&pt,2);
  }
  return pcVar2;
}

void cXObjectImpl::GetPlacementInfo(FTilePt *loc, Int *level, cXObject **container, SInt16 *slotNum, bool *inWorld) {
	PlacementSpec ps;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  cXObject__21_1030 *pcVar5;
  ulong uVar6;
  PlacementSpec ps;
  
  uVar6 = (ulong)(int)level;
  __13PlacementSpecP12cXObjectImpl(&ps,this);
  pcVar5 = (cXObject__21_1030 *)0x0;
  puVar1 = (undefined *)((int)&ps.location.x.whole + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&ps.location & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar6 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&ps.location - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&(loc->x).whole + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)loc & 7;
  *(ulong *)((int)loc - uVar2) =
       uVar6 << uVar2 * 8 | *(ulong *)((int)loc - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  *level = ps.level;
  *slotNum = (ushort)ps.slotNum;
  if (ps.container != (cXObjectImpl__123_901 *)0x0) {
    pcVar5 = (ps.container)->_vb966;
  }
  *container = pcVar5;
  *(undefined4 *)inWorld = ps._0_4_;
  return;
}

bool cXObjectImpl::IsInWorld() {
	PlacementSpec ps;
	
  PlacementSpec ps;
  
  __13PlacementSpecP12cXObjectImpl(&ps,this);
  return ps._0_4_ != 0;
}

void cXObjectImpl::GetPlacementSpec(PlacementSpec *ps) {
	cXObjectImpl *sibRoot;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  cXObject__21_1030__vtable *pcVar5;
  ulong *puVar6;
  cXObjectImpl__127_901 *pcVar7;
  cXObjectImpl__123_901 *pcVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  lVar10 = (*(code *)_5Globs_pFixedWorld->__vtable->SetWallStorage)
                     ((int)&_5Globs_pFixedWorld->__vtable +
                      (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetWallStorage,&this->fLocation
                     );
  if (lVar10 == 0) {
    *(undefined4 *)ps = 1;
    puVar1 = (undefined *)((int)&(this->fLocation).x.whole + 3);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)&this->fLocation & 7;
    uVar11 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
             0xffffffffffffffffU >> (uVar2 + 1) * 8 & 1) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)&this->fLocation - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&(ps->location).x.whole + 3);
    uVar2 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar2);
    *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | uVar11 >> (7 - uVar2) * 8;
    uVar2 = (uint)&ps->location & 7;
    puVar6 = (ulong *)((int)&ps->location - uVar2);
    *puVar6 = uVar11 << uVar2 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
    *(undefined4 *)ps = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    (ps->location).y.whole = -0x10;
                    /* end of inlined section */
    (ps->location).x.whole = -0x10;
  }
  ps->level = this->fLevel;
  pcVar7 = this;
  while( true ) {
                    /* end of inlined section */
    pcVar5 = pcVar7->_vb966->__vtable;
    lVar10 = (*(code *)pcVar5[1].RunTree)
                       ((int)&pcVar7->_vb966->_vb899 + (int)*(short *)&pcVar5[1].RunTree);
    if (lVar10 == 0) break;
    pcVar5 = pcVar7->_vb966->__vtable;
    lVar10 = (*(code *)pcVar5[1].RunTree)
                       ((int)&pcVar7->_vb966->_vb899 + (int)*(short *)&pcVar5[1].RunTree);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    pcVar7 = (cXObjectImpl__127_901 *)0x0;
    if (lVar10 != 0) {
      iVar9 = *(int *)((int)lVar10 + 4);
      pcVar7 = (cXObjectImpl__127_901 *)
               (**(code **)(iVar9 + 0x454))((int)lVar10 + (int)*(short *)(iVar9 + 0x450));
    }
  }
  pcVar5 = this->_vb966->__vtable;
  lVar10 = (*(code *)pcVar5[1].GetLightingContribution)
                     ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar5[1].CanContributeLight,
                      pcVar7->fData[0x1a]);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
  if (lVar10 == 0) {
                    /* end of inlined section */
    ps->container = (cXObjectImpl__123_901 *)0x0;
  }
  else {
    iVar9 = *(int *)((int)lVar10 + 4);
    pcVar8 = (cXObjectImpl__123_901 *)
             (**(code **)(iVar9 + 0x454))((int)lVar10 + (int)*(short *)(iVar9 + 0x450));
    ps->container = pcVar8;
  }
  uVar4 = pcVar7->fData[0xe];
  ps->slotNum = (int)(short)uVar4;
  if (uVar4 != 0xffff) {
    iVar9 = (short)uVar4 + -1;
    ps->slotNum = iVar9;
    if (iVar9 == -1) {
      pcVar7->fData[0xe] = 0xffff;
    }
  }
  return;
}

cXObject* cXObjectImpl::GetNextObjectSibling() {
  cXObject__21_1030 *pcVar1;
  
  pcVar1 = HierGetChild__12cXObjectImpli(this,0);
  return pcVar1;
}

cXObject* cXObjectImpl::GetPrevObjectSibling() {
  cXObject__21_1030 *pcVar1;
  
  pcVar1 = (cXObject__21_1030 *)0x0;
  if (this->fData[0xe] == 0) {
    pcVar1 = HierGetParent__12cXObjectImpl(this);
  }
  return pcVar1;
}

PlacementSpec* PlacementSpec::PlacementSpec(cXObjectImpl *obj) {
  GetPlacementSpec__12cXObjectImplP13PlacementSpec(obj,this);
  return this;
}

PlacementSpec* PlacementSpec::PlacementSpec(bool outOfWorld) {
  *(undefined4 *)this = 0;
  return this;
}

PlacementSpec* PlacementSpec::PlacementSpec(FTilePt &loc, int inLevel, cXObjectImpl *inContainer, Int inSlotNum) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  FTilePt *pFVar5;
  int iVar6;
  ulong uVar7;
  
  *(undefined4 *)this = 1;
  pFVar5 = &inContainer->fLocation;
  if (inContainer == (cXObjectImpl__127_901 *)0x0) {
    pFVar5 = loc;
  }
  puVar1 = (undefined *)((int)&(pFVar5->x).whole + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)pFVar5 & 7;
  uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          (long)(int)loc & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)pFVar5 - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&(this->location).x.whole + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->location & 7;
  puVar4 = (ulong *)((int)&this->location - uVar2);
  *puVar4 = uVar7 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  iVar6 = -1;
  if (inContainer != (cXObjectImpl__127_901 *)0x0) {
    iVar6 = inSlotNum;
  }
  this->level = inLevel;
  this->slotNum = iVar6;
  this->container = (cXObjectImpl__123_901 *)inContainer;
  return this;
}

HierarchySite* HierarchySite::HierarchySite(PlacementSpec *ps) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  
  *(undefined4 *)this = *(undefined4 *)ps;
  iVar4 = ps->slotNum;
  uVar6 = (ulong)iVar4;
  this->slotNum = iVar4;
  if (uVar6 != 0xffffffffffffffff) {
    uVar6 = (ulong)(iVar4 + 1);
    this->slotNum = iVar4 + 1;
  }
  puVar1 = (undefined *)((int)&(ps->location).x.whole + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&ps->location & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar6 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&ps->location - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&(this->location).x.whole + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->location & 7;
  puVar5 = (ulong *)((int)&this->location - uVar2);
  *puVar5 = uVar6 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  this->level = ps->level;
  this->container = ps->container;
  return this;
}

HierarchySite* HierarchySite::HierarchySite(cXObjectImpl *obj) {
  HierGetSite__12cXObjectImplP13HierarchySite(obj,this);
  return this;
}

HierarchySite* HierarchySite::HierarchySite(cXObjectImpl *inContainer, FTilePt &loc, int inSlotNum) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong *puVar5;
  ulong in_v1;
  ulong uVar6;
  
  this->container = (cXObjectImpl__123_901 *)inContainer;
  this->slotNum = inSlotNum;
  puVar1 = (undefined *)((int)&(loc->x).whole + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)loc & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)loc - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&(this->location).x.whole + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->location & 7;
  puVar5 = (ulong *)((int)&this->location - uVar2);
  *puVar5 = uVar6 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  iVar4 = this->container->fLevel;
  *(undefined4 *)this = 1;
  this->level = iVar4;
  return this;
}

HierarchySite* HierarchySite::HierarchySite(FTilePt &loc, int inLevel) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong in_a3;
  ulong uVar5;
  
  puVar1 = (undefined *)((int)&(loc->x).whole + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)loc & 7;
  uVar5 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_a3 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)loc - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&(this->location).x.whole + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar5 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->location & 7;
  puVar4 = (ulong *)((int)&this->location - uVar2);
  *puVar4 = uVar5 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  this->slotNum = -1;
  this->level = inLevel;
  *(undefined4 *)this = 1;
  this->container = (cXObjectImpl__123_901 *)0x0;
  return this;
}

cXObject* cXObjectImpl::HierGetParent() {
  cXObject__21_1030__vtable *pcVar1;
  cXObject__21_1030 *pcVar2;
  
  pcVar1 = this->_vb966->__vtable;
  pcVar2 = (cXObject__21_1030 *)
           (*(code *)pcVar1[1].GetLightingContribution)
                     ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].CanContributeLight,
                      this->fData[0x1a]);
  return pcVar2;
}

ObjectSlot* cXObjectImpl::HierGetSlot(Int slotNum) {
	unsigned int n;
	
  ObjectSlot *pOVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  if ((-1 < slotNum) &&
     (pOVar1 = (this->fHierSlots).start,
     (uint)slotNum < (uint)(((int)(this->fHierSlots).finish - (int)pOVar1) * 0x38e38e39 >> 2))) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    return pOVar1 + slotNum;
  }
  return (ObjectSlot *)0x0;
}

void cXObjectImpl::HierSetSite(HierarchySite *newsite) {
	CTilePt pt;
	int slotNum;
	unsigned int n;
	
  int iVar1;
  cXObject__21_1030 *pcVar2;
  cXObject__21_1030__vtable *pcVar3;
  CTilePt pt;
  
  if (*(int *)newsite == 0) {
    HierSever__12cXObjectImpl(this);
  }
  __7CTilePtRC7FTilePti(&pt,&newsite->location,newsite->level);
  if (newsite->container == (cXObjectImpl__123_901 *)0x0) {
    if (*(int *)newsite != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pObjectModule->__vtable[1].SetTileObjectID)
                ((int)&_5Globs_pObjectModule->__vtable +
                 (int)*(short *)&_5Globs_pObjectModule->__vtable[1].GetTileObjectID,&pt,this->fID);
      this->fData[0x1a] = 0;
      this->fData[0xe] = 0xffff;
      pcVar3 = this->_vb966->__vtable;
      (*(code *)pcVar3->IsMultiTile)
                ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3->GetTileWidth,newsite->level);
    }
  }
  else {
    iVar1 = newsite->slotNum;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    (newsite->container->fHierSlots).start[iVar1].objectID = this->fID;
    this->fData[0xe] = (ushort)iVar1;
    pcVar2 = this->_vb966;
    this->fData[0x1a] = newsite->container->fID;
    pcVar3 = pcVar2->__vtable;
    (*(code *)pcVar3->IsMultiTile)
              ((int)&pcVar2->_vb899 + (int)*(short *)&pcVar3->GetTileWidth,newsite->level);
  }
  ___7CTilePt(&pt,2);
  return;
}

cXObject* cXObjectImpl::HierGetChild(Int number) {
  cXObject__21_1030__vtable *pcVar1;
  cXObject__21_1030 *pcVar2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  pcVar1 = this->_vb966->__vtable;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  pcVar2 = (cXObject__21_1030 *)
           (*(code *)pcVar1[1].GetLightingContribution)
                     ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].CanContributeLight,
                      (this->fHierSlots).start[number].objectID);
  return pcVar2;
}

void cXObjectImpl::HierGetSite(HierarchySite *site) {
	CTilePt pt;
	
  undefined *puVar1;
  uint uVar2;
  ushort uVar3;
  cXObject__21_1030__vtable *pcVar4;
  int iVar5;
  ulong *puVar6;
  cXObjectImpl__123_901 *pcVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  CTilePt pt;
  
  pcVar4 = this->_vb966->__vtable;
  lVar9 = (*(code *)pcVar4[1].GetLightingContribution)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar4[1].CanContributeLight,
                     this->fData[0x1a]);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
  if (lVar9 == 0) {
                    /* end of inlined section */
    site->container = (cXObjectImpl__123_901 *)0x0;
  }
  else {
    iVar5 = *(int *)((int)lVar9 + 4);
    pcVar7 = (cXObjectImpl__123_901 *)
             (**(code **)(iVar5 + 0x454))((int)lVar9 + (int)*(short *)(iVar5 + 0x450));
    site->container = pcVar7;
  }
  pcVar4 = this->_vb966->__vtable;
  (*(code *)pcVar4[1].TestIntersection)
            (&pt,(int)&this->_vb966->_vb899 + (int)*(short *)&pcVar4[1].IsInWorld);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  uVar8 = (*(code *)_5Globs_pFixedWorld->__vtable->SetWall)
                    ((int)&_5Globs_pFixedWorld->__vtable +
                     (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetWall,&pt);
  *(uint *)site = uVar8 ^ 1;
  uVar3 = this->fData[0xe];
  site->slotNum = (int)(short)uVar3;
  puVar1 = (undefined *)((int)&(this->fLocation).x.whole + 3);
  uVar8 = (uint)puVar1 & 7;
  uVar2 = (uint)&this->fLocation & 7;
  uVar10 = (*(long *)(puVar1 + -uVar8) << (7 - uVar8) * 8 |
           (long)(short)uVar3 & 0xffffffffffffffffU >> (uVar8 + 1) * 8) & -1L << (8 - uVar2) * 8 |
           *(ulong *)((int)&this->fLocation - uVar2) >> uVar2 * 8;
  puVar1 = (undefined *)((int)&(site->location).x.whole + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar8);
  *puVar6 = *puVar6 & -1L << (uVar8 + 1) * 8 | uVar10 >> (7 - uVar8) * 8;
  uVar8 = (uint)&site->location & 7;
  puVar6 = (ulong *)((int)&site->location - uVar8);
  *puVar6 = uVar10 << uVar8 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  site->level = this->fLevel;
  ___7CTilePt(&pt,2);
  return;
}

void cXObjectImpl::HierSever() {
	HierarchySite hs;
	unsigned int n;
	CTilePt pt;
	
  HierarchySite hs;
  CTilePt pt;
  
  __13HierarchySiteP12cXObjectImpl(&hs,this);
  if (hs.container == (cXObjectImpl__123_901 *)0x0) {
    if (hs._0_4_ != 0) {
      __7CTilePtRC7FTilePti(&pt,(FTilePt *)((uint)&hs | 4),hs.level);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pObjectModule->__vtable[1].SetTileObjectID)
                ((int)&_5Globs_pObjectModule->__vtable +
                 (int)*(short *)&_5Globs_pObjectModule->__vtable[1].GetTileObjectID,&pt,0);
      ___7CTilePt(&pt,2);
    }
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    ((hs.container)->fHierSlots).start[hs.slotNum].objectID = 0;
  }
  this->fData[0x1a] = 0;
  this->fData[0xe] = 0xffff;
  return;
}

cXObject* cXObjectImpl::HierGetObject(HierarchySite *site) {
	CTilePt pt;
	
  short sVar1;
  cXObject__21_1030__vtable *pcVar2;
  cXObject__21_1030 *pcVar3;
  undefined8 uVar4;
  CTilePt pt;
  
  if (*(int *)site != 0) {
    if ((cXObjectImpl__127_901 *)site->container != (cXObjectImpl__127_901 *)0x0) {
      pcVar3 = HierGetChild__12cXObjectImpli((cXObjectImpl__127_901 *)site->container,site->slotNum)
      ;
      return pcVar3;
    }
    if (site->level - 1U < 3) {
      __7CTilePtRC7FTilePti(&pt,&site->location,site->level);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      pcVar3 = this->_vb966;
      pcVar2 = pcVar3->__vtable;
      sVar1 = *(short *)&pcVar2[1].CanContributeLight;
      uVar4 = (*(code *)_5Globs_pObjectModule->__vtable[1].GetSimFlag)
                        ((int)&_5Globs_pObjectModule->__vtable +
                         (int)*(short *)&_5Globs_pObjectModule->__vtable[1].SetSimFlag,&pt);
      pcVar3 = (cXObject__21_1030 *)
               (*(code *)pcVar2[1].GetLightingContribution)((int)&pcVar3->_vb899 + (int)sVar1,uVar4)
      ;
      ___7CTilePt(&pt,2);
      return pcVar3;
    }
  }
  return (cXObject__21_1030 *)0x0;
}

bool cXObjectImpl::IsContained() {
	PlacementSpec ps;
	
  PlacementSpec ps;
  
  __13PlacementSpecP12cXObjectImpl(&ps,this);
  return ps.container != (cXObjectImpl__123_901 *)0x0;
}

SInt16 cXObjectImpl::GetContainerID() {
	PlacementSpec ps;
	
  cXObject__21_1030__vtable *pcVar1;
  ushort uVar2;
  PlacementSpec ps;
  
  __13PlacementSpecP12cXObjectImpl(&ps,this);
  if (ps.container == (cXObjectImpl__123_901 *)0x0) {
    uVar2 = 0;
  }
  else {
    pcVar1 = (ps.container)->_vb966->__vtable;
    uVar2 = (*(code *)pcVar1[1].UserCanPlace)
                      ((int)&(ps.container)->_vb966->_vb899 + (int)*(short *)&pcVar1[1].IsPartOfMe);
  }
  return uVar2;
}

SInt16 cXObjectImpl::GetContainedSlotNum() {
	PlacementSpec ps;
	
  PlacementSpec ps;
  
  __13PlacementSpecP12cXObjectImpl(&ps,this);
  return (ushort)ps.slotNum;
}

cXObject* cXObjectImpl::GetContainer() {
	PlacementSpec ps;
	
  cXObject__21_1030 *pcVar1;
  PlacementSpec ps;
  
  __13PlacementSpecP12cXObjectImpl(&ps,this);
  pcVar1 = (cXObject__21_1030 *)0x0;
  if (ps.container != (cXObjectImpl__123_901 *)0x0) {
    pcVar1 = (ps.container)->_vb966;
  }
  return pcVar1;
}

ObjectSlot* cXObjectImpl::GetObjectSlot(Int index) {
	unsigned int n;
	
  cXObject__21_1030__vtable *pcVar1;
  int iVar2;
  
  if (-1 < index) {
    pcVar1 = this->_vb966->__vtable;
    iVar2 = (*(code *)pcVar1[1].GetHilite)
                      ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].SetHilite);
    if (index < iVar2) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      return (this->fHierSlots).start + index + 1;
    }
  }
  return (ObjectSlot *)0x0;
}

bool cXObjectImpl::TestAndPlace(PlacementSpec *ps, bool placing) {
	cFixedWorld *world;
	bool isPerson;
	HierarchySite hs;
	cXObjectImpl *prior;
	HierarchySite hs;
	cXObjectImpl *sib;
	CTilePt pt;
	SInt16 pflags;
	SInt16 rmplValue;
	StdPrm allowedHeightFlags;
	StdHeight height;
	ObjectIterator objitr;
	CTilePt pt;
	int isOutside;
	ObjectSlot *theSlot;
	int slotCount;
	cXObject *selfCheck;
	ObjectSlot *this;
	ObjectSlot *otherSlot;
	ObjectSlot *this;
	StdHeight height;
	HierarchySite onTopOfMe;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  cXObject__21_1030__vtable *pcVar5;
  cXObject__21_1030 *pcVar6;
  cFixedWorld *pcVar7;
  bool bVar8;
  short sVar9;
  cXObject__21_1030 *pcVar10;
  ObjSelector *this_00;
  int iVar11;
  cXObjectImpl__123_901 *pcVar12;
  float *pfVar13;
  cXObjectImpl__127_901 *this_01;
  long lVar14;
  long lVar15;
  ulong uVar16;
  FTilePt *in;
  HierarchySite *this_02;
  ulong uVar17;
  ushort uVar18;
  float *pfVar19;
  float fVar20;
  float fVar21;
  HierarchySite hs;
  CTilePt pt;
  undefined local_cc [12];
  HierarchySite onTopOfMe;
  
  pcVar7 = _5Globs_pFixedWorld;
  this_02 = &hs;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  pcVar5 = this->_vb966->__vtable;
  lVar14 = (*(code *)pcVar5[1].Pickup)((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar5[1].Turn);
  if (*(int *)ps == 0) {
    if (!placing) {
      return true;
    }
    __13HierarchySiteP12cXObjectImpl(&hs,this);
    HierSever__12cXObjectImpl(this);
    pcVar10 = HierGetChild__12cXObjectImpli(this,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    lVar14 = 0;
    if (pcVar10 != (cXObject__21_1030 *)0x0) {
      lVar14 = (*(code *)pcVar10->__vtable[1].GetObjectImplementation)
                         ((int)&pcVar10->_vb899 +
                          (int)*(short *)&pcVar10->__vtable[1].AdvanceGraphic);
    }
                    /* end of inlined section */
    if (lVar14 == 0) {
      return true;
    }
    this_01 = (cXObjectImpl__127_901 *)lVar14;
    HierSever__12cXObjectImpl(this_01);
    goto LAB_0024452c;
  }
  if (!placing) {
    in = &ps->location;
    lVar15 = (*(code *)pcVar7->__vtable->SetWallStorage)
                       ((int)&pcVar7->__vtable + (int)*(short *)&pcVar7->__vtable->GetWallStorage);
    if (lVar15 != 0) {
      gPlacementError = 1;
      return false;
    }
    if (2 < ps->level - 1U) {
      gPlacementError = 2;
      return false;
    }
    __7CTilePtRC7FTilePti((CTilePt *)&hs,in,ps->level);
    pcVar5 = this->_vb966->__vtable;
    this_00 = (ObjSelector *)
              (*(code *)pcVar5[1].SetLevel)
                        ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar5[1].GetTreeID);
    bVar8 = GetIsPerson__11ObjSelector(this_00);
    if (bVar8) {
      pcVar10 = this->_vb966;
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      lVar15 = (*(code *)_5Globs_pEORGlobals->__vtable[1].DoModelessMessage)
                         ((int)_5Globs_pEORGlobals->_pSelectedSims +
                          *(short *)&_5Globs_pEORGlobals->__vtable[1].CreateNameEntry + -0x24,&hs);
      iVar11 = 0xb;
      if (lVar15 != 0) goto LAB_002444cc;
      pcVar10 = this->_vb966;
    }
    iVar11 = (*(code *)pcVar10->__vtable[1].HandleError)
                       ((int)&pcVar10->_vb899 + (int)*(short *)&pcVar10->__vtable[1].Error);
    if ((*(ushort *)(iVar11 + 0xb6) & 4) != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
      init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType
                ((ObjectIterator *)&pt,(CTilePt *)&hs,kAll);
                    /* end of inlined section */
      iVar11 = 0xb;
      if ((cXObject__15_2008 *)local_cc._0_4_ != (cXObject__15_2008 *)0x0) goto LAB_002444cc;
    }
    uVar17 = (ulong)(short)this->fData[0x2a];
    iVar11 = GetLevel__C7CTilePt((CTilePt *)&hs);
    uVar16 = uVar17 & 0x1000;
    if (1 < iVar11) {
      bVar8 = uVar16 != 0;
      uVar16 = 0x1f;
      iVar11 = 0x1f;
      if (bVar8) goto LAB_002444cc;
    }
    uVar18 = this->fData[0xd];
    if (lVar14 != 2) {
      iVar11 = ps->level;
      uVar4 = this->fData[1];
      puVar1 = (undefined *)((int)&(ps->location).x.whole + 3);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)&ps->location & 7;
      _pt = (FTilePt)((*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                      uVar16 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                     *(ulong *)((int)&ps->location - uVar3) >> uVar3 * 8);
      puVar1 = local_cc + 3;
      uVar2 = (uint)puVar1 & 7;
      *(ulong *)(puVar1 + -uVar2) =
           *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | (ulong)_pt >> (7 - uVar2) * 8;
      sVar9 = CheckWallFlags__FG7FTilePtiii
                        ((FTilePt *)&pt,iVar11,(int)(short)uVar4,(int)(short)uVar18);
      iVar11 = gPlacementError;
      if (sVar9 == 0) goto LAB_002444cc;
    }
    if ((((uVar17 & 0x200) == 0) && (1 < ps->level)) &&
       (lVar14 = (*(code *)pcVar7->__vtable->GetVertexConfig)
                           ((int)&pcVar7->__vtable + (int)*(short *)&pcVar7->__vtable->IsOutside,&hs
                           ), lVar14 == 0)) {
      if (ps->level == 1) {
        iVar11 = 0x12;
      }
      else {
        iVar11 = 0x29;
      }
      goto LAB_002444cc;
    }
    if (((~uVar17 & 1) != 0) &&
       (lVar14 = (*(code *)pcVar7->__vtable->GetVertexConfig)
                           ((int)&pcVar7->__vtable + (int)*(short *)&pcVar7->__vtable->IsOutside,&hs
                           ), lVar14 != 0)) {
      if (ps->level == 1) {
        iVar11 = 0x13;
      }
      else {
        iVar11 = 0x2a;
      }
      goto LAB_002444cc;
    }
    if ((uVar17 & 2) == 0) {
      if (ps->level == 1) {
        lVar14 = (*(code *)pcVar7->__vtable->GetVertexConfig)
                           ((int)&pcVar7->__vtable + (int)*(short *)&pcVar7->__vtable->IsOutside,&hs
                           );
        if (lVar14 == 0) {
          iVar11 = 0x14;
          goto LAB_002444cc;
        }
        uVar18 = this->fData[0x1e];
      }
      else {
        uVar18 = this->fData[0x1e];
      }
    }
    else {
      uVar18 = this->fData[0x1e];
    }
    if (uVar18 != 0) {
      __7CTilePtRC7FTilePti(&pt,in,ps->level);
      lVar14 = (*(code *)pcVar7->__vtable[1].GetWall)
                         ((int)&pcVar7->__vtable + (int)*(short *)&pcVar7->__vtable[1].GetWalls,&pt)
      ;
      if ((uVar18 == 1) && (lVar14 == 0)) {
        gPlacementError = 9;
        ___7CTilePt(&pt,2);
        iVar11 = gPlacementError;
        goto LAB_002444cc;
      }
      if ((uVar18 == 2) && (lVar14 != 0)) {
        gPlacementError = 10;
        ___7CTilePt(&pt,2);
        iVar11 = gPlacementError;
        goto LAB_002444cc;
      }
      ___7CTilePt(&pt,2);
    }
    uVar18 = this->fData[4];
    if (ps->container != (cXObjectImpl__123_901 *)0x0) {
      pcVar5 = this->_vb966->__vtable;
      lVar14 = (*(code *)pcVar5[1].GetAgeInMinutes)
                         ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar5[1].GetErrorString);
      iVar11 = 0xc;
      if (lVar14 != 0) goto LAB_002444cc;
      pcVar10 = ps->container->_vb966;
      pcVar5 = pcVar10->__vtable;
      lVar14 = (*(code *)pcVar5[1].GetAgeInMinutes)
                         ((int)&pcVar10->_vb899 + (int)*(short *)&pcVar5[1].GetErrorString);
      if (lVar14 != 0) {
        iVar11 = 0xc;
        goto LAB_002444cc;
      }
      pcVar10 = ps->container->_vb966;
      pcVar5 = pcVar10->__vtable;
      lVar14 = (*(code *)pcVar5[1].GetMiscFlag)
                         ((int)&pcVar10->_vb899 + (int)*(short *)&pcVar5[1].SetMiscFlag,ps->slotNum)
      ;
      iVar11 = 0xd;
      if (lVar14 == 0) goto LAB_002444cc;
      pfVar19 = (float *)lVar14;
      if (*(short *)(pfVar19 + 5) == 0) {
        pcVar12 = ps->container;
      }
      else {
        pcVar5 = this->_vb966->__vtable;
        sVar9 = (*(code *)pcVar5[1].UserCanPlace)
                          ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar5[1].IsPartOfMe);
        iVar11 = 0xb;
        if (*(short *)(pfVar19 + 5) != sVar9) goto LAB_002444cc;
                    /* end of inlined section */
        pcVar12 = ps->container;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
      fVar20 = pfVar19[6];
                    /* end of inlined section */
      pcVar5 = pcVar12->_vb966->__vtable;
      iVar11 = (*(code *)pcVar5[1].GetHilite)
                         ((int)&pcVar12->_vb966->_vb899 + (int)*(short *)&pcVar5[1].SetHilite);
      iVar11 = iVar11 + -1;
      if (-1 < iVar11) {
        pcVar12 = ps->container;
        do {
          pcVar5 = pcVar12->_vb966->__vtable;
          pfVar13 = (float *)(*(code *)pcVar5[1].GetMiscFlag)
                                       ((int)&pcVar12->_vb966->_vb899 +
                                        (int)*(short *)&pcVar5[1].SetMiscFlag,iVar11);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
          if (((pfVar13[6] == fVar20) && (*(short *)(pfVar13 + 5) != 0)) &&
             (pcVar5 = this->_vb966->__vtable,
             sVar9 = (*(code *)pcVar5[1].UserCanPlace)
                               ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar5[1].IsPartOfMe),
             *(short *)(pfVar13 + 5) != sVar9)) {
            if (*pfVar13 == 0.0) {
              if (pfVar13[1] != 0.0) {
                fVar21 = *pfVar19;
                goto LAB_002443b8;
              }
            }
            else {
              fVar21 = *pfVar19;
LAB_002443b8:
              if ((fVar21 != 0.0) || (pfVar19[1] != 0.0)) goto LAB_002443e8;
            }
            gPlacementError = 0xb;
            iVar11 = gPlacementError;
            goto LAB_002444cc;
          }
LAB_002443e8:
          iVar11 = iVar11 + -1;
          if (iVar11 < 0) goto code_r0x002443f0;
          pcVar12 = ps->container;
        } while( true );
      }
      pcVar12 = ps->container;
      goto LAB_002443f4;
    }
    pcVar5 = this->_vb966->__vtable;
    lVar14 = (*(code *)pcVar5->GetLocation)
                       ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar5->GetLocation,in,
                        ps->level);
    fVar20 = 1.401298e-45;
    iVar11 = gPlacementError;
    if (lVar14 == 0) goto LAB_002444cc;
    goto LAB_00244448;
  }
  goto LAB_00244488;
code_r0x002443f0:
  pcVar12 = ps->container;
LAB_002443f4:
  iVar11 = 0xe;
  if ((short)pcVar12->fData[0x1c] < (short)this->fData[0x1b]) goto LAB_002444cc;
  pcVar10 = (cXObject__21_1030 *)0x0;
  if (pcVar12 != (cXObjectImpl__123_901 *)0x0) {
    pcVar10 = pcVar12->_vb966;
  }
  if (pcVar10 != (cXObject__21_1030 *)0x0) {
    pcVar6 = this->_vb966;
    while (iVar11 = 0xb, pcVar10 != pcVar6) {
      pcVar10 = (cXObject__21_1030 *)
                (*(code *)pcVar10->__vtable[1].IsRenderingRoot)
                          ((int)&pcVar10->_vb899 +
                           (int)*(short *)&pcVar10->__vtable[1].GetRenderLayer);
      if (pcVar10 == (cXObject__21_1030 *)0x0) goto LAB_00244448;
      pcVar6 = this->_vb966;
    }
    goto LAB_002444cc;
  }
LAB_00244448:
  iVar11 = 0x18;
  if ((fVar20 == 0.0) || ((long)(short)uVar18 == 0)) {
LAB_002444cc:
    gPlacementError = iVar11;
    ___7CTilePt((CTilePt *)&hs,2);
    return false;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
  if (((long)(short)uVar18 & (long)(1 << ((int)fVar20 - 1U & 0x1f))) == 0) {
    iVar11 = 0x18;
    goto LAB_002444cc;
  }
  ___7CTilePt((CTilePt *)&hs,2);
LAB_00244488:
  __13HierarchySitePC13PlacementSpec(&hs,ps);
  pcVar10 = HierGetObject__12cXObjectImplPC13HierarchySite(this,&hs);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
  this_01 = (cXObjectImpl__127_901 *)0x0;
  if (pcVar10 != (cXObject__21_1030 *)0x0) {
    this_01 = (cXObjectImpl__127_901 *)
              (*(code *)pcVar10->__vtable[1].GetObjectImplementation)
                        ((int)&pcVar10->_vb899 + (int)*(short *)&pcVar10->__vtable[1].AdvanceGraphic
                        );
  }
  if (!placing) {
    return true;
  }
  if (this_01 == this) {
    return true;
  }
  if (this_01 != (cXObjectImpl__127_901 *)0x0) {
    HierSever__12cXObjectImpl(this_01);
  }
  HierSetSite__12cXObjectImplPC13HierarchySite(this,&hs);
  this_02 = &onTopOfMe;
  if (this_01 == (cXObjectImpl__127_901 *)0x0) {
    return true;
  }
  __13HierarchySiteP12cXObjectImplRC7FTilePti(this_02,this,(FTilePt *)((uint)&hs | 4),0);
LAB_0024452c:
  HierSetSite__12cXObjectImplPC13HierarchySite(this_01,this_02);
  return true;
}

static void SetSupportFlag(int x, int y, int level, bool flag) {
	CTilePt pt;
	UInt8 flags;
	
  long lVar1;
  ulong uVar2;
  CTilePt pt;
  
  __7CTilePtiii(&pt,x,y,level);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  lVar1 = (*(code *)_5Globs_pFixedWorld->__vtable->SetWall)
                    ((int)&_5Globs_pFixedWorld->__vtable +
                     (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetWall,&pt);
  if (lVar1 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    uVar2 = (*(code *)_5Globs_pFixedWorld->__vtable[1].GetFloorLayer)
                      ((int)&_5Globs_pFixedWorld->__vtable +
                       (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].OutOfGrid,&pt);
    uVar2 = uVar2 & 0xf7;
    if (flag) {
      uVar2 = uVar2 | 8;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pFixedWorld->__vtable[1].SetFloor)
              ((int)&_5Globs_pFixedWorld->__vtable +
               (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].GetFloor,&pt,uVar2);
  }
  ___7CTilePt(&pt,2);
  return;
}

void cXObjectImpl::Pickup() {
	Int x;
	Int y;
	Int dir;
	PlacementSpec newPs;
	cXObject *container;
	FTilePt outOfBounds;
	FTilePt aPt;
	int level;
	
  ushort uVar1;
  short sVar2;
  cXObject__21_1030__vtable *pcVar3;
  int iVar4;
  cXObject__21_1030 *pcVar5;
  IBaseSimInstance *pIVar6;
  EGlobal__vtable *pEVar7;
  cXPerson__150_1300 **ppcVar8;
  int inLevel;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  int x;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  PlacementSpec newPs;
  FTilePt outOfBounds;
  CTilePt aCStack_b0 [5];
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
  
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  pcVar3 = this->_vb966->__vtable;
  lVar10 = (*(code *)pcVar3[1].GetFrontFaceDirection)
                     ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3[1].GetInteractionLeader);
  if (lVar10 == 0) {
    pcVar3 = this->_vb966->__vtable;
    (*(code *)pcVar3->GetInteractionLeader)
              ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3->SetObjectProbe,10,0,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    iVar13 = (this->fLocation).y.whole;
  }
  else {
    iVar13 = (this->fLocation).y.whole;
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
  uVar1 = this->fData[1];
                    /* end of inlined section */
  x = (this->fLocation).x.whole >> 4;
  __13PlacementSpecb(&newPs,true);
  pcVar3 = this->_vb966->__vtable;
  (*(code *)pcVar3->RunTree)((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3->IsSpriteVisible,0)
  ;
  pcVar3 = this->_vb966->__vtable;
  lVar10 = (*(code *)pcVar3[1].GetTreeTab)
                     ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3[1].GetCTilePt);
  if (lVar10 == 1) {
                    /* end of inlined section */
    pcVar3 = this->_vb966->__vtable;
    (*(code *)pcVar3[1].UserCanPickup)
              ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3[1].UserPlace,&outOfBounds);
    pcVar3 = this->_vb966->__vtable;
    inLevel = (*(code *)pcVar3[1].GetPlacementInfo)
                        ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3[1].FindGoodLocation);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    piVar9 = (int *)(*(code *)_5Globs_pFixedWorld->__vtable[1].GetWallManager)
                              ((int)&_5Globs_pFixedWorld->__vtable +
                               (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].ComputeArchValue,
                               inLevel + -1);
    iVar4 = *piVar9;
    sVar2 = *(short *)(iVar4 + 0x40);
    __7CTilePtRC7FTilePti(aCStack_b0,&outOfBounds,inLevel);
    pcVar3 = this->_vb966->__vtable;
    uVar11 = (*(code *)pcVar3[1].GetTreeTab)
                       ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3[1].GetCTilePt);
    (**(code **)(iVar4 + 0x44))((int)piVar9 + (int)sVar2,aCStack_b0,uVar11);
    ___7CTilePt(aCStack_b0,2);
  }
  pcVar3 = this->_vb966->__vtable;
  lVar10 = (*(code *)pcVar3[1].IsRenderingRoot)
                     ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3[1].GetRenderLayer);
  TestAndPlace__12cXObjectImplP13PlacementSpecb(this,&newPs,true);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
  this->fData[3] = 0xffff;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
  this->fData[2] = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
  outOfBounds.x.whole = -0x10;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
  outOfBounds.y.whole = -0x10;
                    /* end of inlined section */
  SetLocation__12cXObjectImplRC7FTilePtiQ28cXObject14RecursionParam(this,&outOfBounds,1,0);
  pcVar5 = this->_vb966;
  this->fData[8] = this->fData[8] & 0xfeff;
  pcVar3 = pcVar5->__vtable;
  lVar12 = (*(code *)pcVar3[1].ShouldAutoRotate)
                     ((int)&pcVar5->_vb899 + (int)*(short *)&pcVar3[1].IsSupport);
  if (lVar12 != 0) {
    UpdateChairFacing__12cXObjectImplP12ObjectModuleiii
              (this->fModule,x + _12cXObjectImpl_sXDirTable[(short)uVar1],
               (iVar13 >> 4) + _12cXObjectImpl_sYDirTable[(short)uVar1],this->fLevel);
  }
  if (lVar10 != 0) {
    iVar4 = *(int *)((int)lVar10 + 4);
    (**(code **)(iVar4 + 0xdc))((int)lVar10 + (int)*(short *)(iVar4 + 0xd8),9,0,0);
  }
  pcVar3 = this->_vb966->__vtable;
  lVar10 = (*(code *)pcVar3[1].GetDef)
                     ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3[1].GetRoom);
  if (lVar10 != 0) {
    SetSupportFlag__Fiiib(x,iVar13 >> 4,this->fLevel,false);
  }
  pIVar6 = this->_vb966->_vb899->m_pEoRInstance;
  if (pIVar6 != (IBaseSimInstance *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    pEVar7 = _5Globs_pEORGlobals->__vtable;
    sVar2 = *(short *)&pEVar7->AllocInstance;
    ppcVar8 = _5Globs_pEORGlobals->_pSelectedSims;
    uVar11 = (*(code *)pIVar6->__vtable[1].GetSimInstance)
                       ((int)&pIVar6->__vtable + (int)*(short *)&pIVar6->__vtable[1].GetCursFlags);
    (*(code *)pEVar7->AllocPersonInstance)((int)ppcVar8 + sVar2 + -0x24,uVar11,0x21);
  }
  return;
}

bool cXObjectImpl::CanPlace(FTilePt &loc, Int inLevel, cXObject *container, Int slotNum) {
	PlacementSpec newPs;
	cXObject *this;
	
  bool bVar1;
  cXObjectImpl__127_901 *inContainer;
  PlacementSpec newPs;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
  if (container == (cXObject__21_1030 *)0x0) {
    inContainer = (cXObjectImpl__127_901 *)0x0;
                    /* end of inlined section */
  }
  else {
    inContainer = (cXObjectImpl__127_901 *)
                  (*(code *)container->__vtable[1].GetObjectImplementation)
                            ((int)&container->_vb899 +
                             (int)*(short *)&container->__vtable[1].AdvanceGraphic);
  }
  __13PlacementSpecRC7FTilePtiP12cXObjectImpli(&newPs,loc,inLevel,inContainer,slotNum);
  bVar1 = TestAndPlace__12cXObjectImplP13PlacementSpecb(this,&newPs,false);
  return bVar1;
}

void cXObjectImpl::Place(FTilePt &loc, Int inLevel, cXObject *container, Int slotNum) {
	int newLevel;
	Int x;
	Int y;
	Int dir;
	PlacementSpec ps;
	bool support;
	PlacementSpec newPs;
	cXObject *this;
	
  short sVar1;
  cXObject__21_1030__vtable *pcVar2;
  TreeSim *pTVar3;
  EGlobal__vtable *pEVar4;
  TreeSim__vtable *pTVar5;
  cXPerson__150_1300 **ppcVar6;
  ushort uVar7;
  cXObjectImpl__127_901 *inContainer;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  PlacementSpec ps;
  PlacementSpec newPs;
  
  pcVar2 = this->_vb966->__vtable;
  (*(code *)pcVar2->RunTree)((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->IsSpriteVisible,0)
  ;
  if (container != (cXObject__21_1030 *)0x0) {
    (*(code *)container->__vtable->RunTree)
              ((int)&container->_vb899 + (int)*(short *)&container->__vtable->IsSpriteVisible,0);
    inLevel = (*(code *)container->__vtable[1].GetPlacementInfo)
                        ((int)&container->_vb899 +
                         (int)*(short *)&container->__vtable[1].FindGoodLocation);
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
  iVar11 = (this->fLocation).y.whole >> 4;
                    /* end of inlined section */
  uVar7 = this->fData[1];
                    /* end of inlined section */
  iVar12 = (this->fLocation).x.whole >> 4;
  __13PlacementSpecb(&ps,true);
  TestAndPlace__12cXObjectImplP13PlacementSpecb(this,&ps,true);
  pcVar2 = this->_vb966->__vtable;
  lVar8 = (*(code *)pcVar2[1].ShouldAutoRotate)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2[1].IsSupport);
  if (lVar8 != 0) {
    UpdateChairFacing__12cXObjectImplP12ObjectModuleiii
              (this->fModule,iVar12 + _12cXObjectImpl_sXDirTable[(short)uVar7],
               iVar11 + _12cXObjectImpl_sYDirTable[(short)uVar7],this->fLevel);
  }
  pcVar2 = this->_vb966->__vtable;
  lVar8 = (*(code *)pcVar2[1].GetDef)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2[1].GetRoom);
  if (lVar8 != 0) {
    SetSupportFlag__Fiiib(iVar12,iVar11,this->fLevel,false);
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
  if (container == (cXObject__21_1030 *)0x0) {
    inContainer = (cXObjectImpl__127_901 *)0x0;
                    /* end of inlined section */
  }
  else {
    inContainer = (cXObjectImpl__127_901 *)
                  (*(code *)container->__vtable[1].GetObjectImplementation)
                            ((int)&container->_vb899 +
                             (int)*(short *)&container->__vtable[1].AdvanceGraphic);
  }
  __13PlacementSpecRC7FTilePtiP12cXObjectImpli(&newPs,loc,inLevel,inContainer,slotNum);
  TestAndPlace__12cXObjectImplP13PlacementSpecb(this,&newPs,true);
  if (newPs.container == (cXObjectImpl__123_901 *)0x0) {
    uVar7 = 0;
  }
  else {
    pcVar2 = (newPs.container)->_vb966->__vtable;
    uVar7 = (*(code *)pcVar2[1].UserCanPlace)
                      ((int)&(newPs.container)->_vb966->_vb899 +
                       (int)*(short *)&pcVar2[1].IsPartOfMe);
  }
  this->fData[2] = uVar7;
  this->fData[3] = (ushort)newPs.slotNum;
  if (newPs.container == (cXObjectImpl__123_901 *)0x0) {
    SetLocation__12cXObjectImplRC7FTilePtiQ28cXObject14RecursionParam
              (this,&newPs.location,newPs.level,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    iVar11 = (this->fLocation).x.whole;
  }
  else {
    SetLocation__12cXObjectImplRC7FTilePtiQ28cXObject14RecursionParam
              (this,&(newPs.container)->fLocation,newPs.level,0);
    iVar11 = (this->fLocation).x.whole;
  }
  iVar11 = iVar11 >> 4;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
  iVar12 = (this->fLocation).y.whole >> 4;
                    /* end of inlined section */
  UpdateChairFacing__12cXObjectImplP12ObjectModuleiii(this->fModule,iVar11,iVar12,this->fLevel);
  pcVar2 = this->_vb966->__vtable;
  lVar9 = (*(code *)pcVar2[1].ShouldAutoRotate)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2[1].IsSupport);
  if (lVar9 != 0) {
    UpdateChairFacing__12cXObjectImplP12ObjectModuleiii
              (this->fModule,iVar11 + _12cXObjectImpl_sXDirTable[(short)this->fData[1]],
               iVar12 + _12cXObjectImpl_sYDirTable[(short)this->fData[1]],this->fLevel);
  }
  UpdateWallAdjacency__12cXObjectImpl(this);
  pcVar2 = this->_vb966->__vtable;
  lVar9 = (*(code *)pcVar2[1].GetFrontFaceDirection)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2[1].GetInteractionLeader);
  if (lVar9 == 0) {
    pcVar2 = this->_vb966->__vtable;
    (*(code *)pcVar2->GetInteractionLeader)
              ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->SetObjectProbe,9,0,0);
  }
  if (container != (cXObject__21_1030 *)0x0) {
    (*(code *)container->__vtable->GetInteractionLeader)
              ((int)&container->_vb899 + (int)*(short *)&container->__vtable->SetObjectProbe,9,0,0);
  }
  if (lVar8 != 0) {
    SetSupportFlag__Fiiib(iVar11,iVar12,this->fLevel,true);
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  pTVar3 = this->_vb1168->_vb899;
  pEVar4 = _5Globs_pEORGlobals->__vtable;
  pTVar5 = pTVar3->__vtable;
  sVar1 = *(short *)&pEVar4->AllocInstance;
  ppcVar6 = _5Globs_pEORGlobals->_pSelectedSims;
  uVar10 = (*(code *)pTVar5[1].GetISimInstance)
                     ((int)&pTVar3->m_pObject + (int)*(short *)&pTVar5[1].GetLastResult);
  (*(code *)pEVar4->AllocPersonInstance)((int)ppcVar6 + sVar1 + -0x24,uVar10,0x20);
  return;
}

SpriteSlot& cXObjectImpl::GetSpriteSlot() {
  return (this->fSpriteSlots).start;
}

void cXObjectImpl::UpdateChairFacing(ObjectModule *module, Int x, Int y, Int level) {
	Int dirCnt;
	Int checkY;
	cXObjectImpl *obj;
	cXObject *baseObject;
	cFixedWorld *world;
	Boolean facingChairFound;
	CTilePt pt;
	ObjectIterator i;
	Int opposingDir;
	cXObjectImpl *aboveObj;
	bool wasBitSet;
	
  short sVar1;
  ushort uVar2;
  ObjectModule__vtable *pOVar3;
  bool bVar4;
  cFixedWorld *pcVar5;
  ushort uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  CTilePt pt;
  ObjectIterator i;
  cXObject__21_1030 *baseObject;
  
  pcVar5 = _5Globs_pFixedWorld;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  bVar4 = false;
  __7CTilePtiii(&pt,x,y,level);
  lVar8 = (*(code *)pcVar5->__vtable->SetWall)
                    ((int)&pcVar5->__vtable + (int)*(short *)&pcVar5->__vtable->GetWall,&pt);
  if (lVar8 == 0) {
    pOVar3 = module->__vtable;
    sVar1 = *(short *)&pOVar3->SetSelectedPerson;
    uVar9 = (*(code *)pOVar3[1].GetSimFlag)
                      ((int)&module->__vtable + (int)*(short *)&pOVar3[1].SetSimFlag,&pt);
    lVar8 = (*(code *)pOVar3->AdvanceSelectedPerson)((int)&module->__vtable + (int)sVar1,uVar9);
    if (lVar8 != 0) {
      iVar7 = 0;
      piVar14 = _12cXObjectImpl_sXDirTable;
      do {
        iVar12 = _12cXObjectImpl_sYDirTable[iVar7];
        SetX__7CTilePti(&pt,x + *piVar14);
        SetY__7CTilePti(&pt,y + iVar12);
        lVar10 = (*(code *)pcVar5->__vtable->SetWall)
                           ((int)&pcVar5->__vtable + (int)*(short *)&pcVar5->__vtable->GetWall,&pt);
        if (lVar10 == 0) {
          pOVar3 = module->__vtable;
          sVar1 = *(short *)&pOVar3->SetSelectedPerson;
          uVar9 = (*(code *)pOVar3[1].GetSimFlag)
                            ((int)&module->__vtable + (int)*(short *)&pOVar3[1].SetSimFlag,&pt);
          lVar10 = (*(code *)pOVar3->AdvanceSelectedPerson)
                             ((int)&module->__vtable + (int)sVar1,uVar9);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
          if (lVar10 == 0) {
                    /* end of inlined section */
            lVar11 = 0;
            goto LAB_00244f00;
          }
          iVar12 = *(int *)((int)lVar10 + 4);
          do {
            lVar11 = (**(code **)(iVar12 + 0x454))((int)lVar10 + (int)*(short *)(iVar12 + 0x450));
LAB_00244f00:
            do {
                    /* end of inlined section */
              if (lVar11 == 0) goto LAB_00244f5c;
              iVar13 = (int)lVar11;
              iVar12 = *(int *)(*(int *)(iVar13 + 4) + 4);
              lVar10 = (**(code **)(iVar12 + 0x3dc))
                                 (*(int *)(iVar13 + 4) + (int)*(short *)(iVar12 + 0x3d8));
              if (lVar10 == 0) {
                iVar12 = *(int *)(*(int *)(iVar13 + 4) + 4);
                lVar10 = (**(code **)(iVar12 + 0x3ec))
                                   (*(int *)(iVar13 + 4) + (int)*(short *)(iVar12 + 1000));
                if ((lVar10 == 0) || ((long)*(short *)(iVar13 + 0x28) != ((long)(iVar7 + 4) & 7U)))
                goto LAB_00244f5c;
                bVar4 = true;
                goto LAB_00244f68;
              }
              iVar12 = *(int *)(*(int *)(iVar13 + 4) + 4);
              lVar10 = (**(code **)(iVar12 + 0x28c))
                                 (*(int *)(iVar13 + 4) + (int)*(short *)(iVar12 + 0x288));
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
              lVar11 = 0;
            } while (lVar10 == 0);
            iVar12 = *(int *)((int)lVar10 + 4);
          } while( true );
        }
LAB_00244f5c:
        iVar7 = iVar7 + 2;
        piVar14 = piVar14 + 2;
      } while (iVar7 < 8);
LAB_00244f68:
      __14ObjectIteratorP8cXObjectQ214ObjectIterator11IterateType
                (&i,(cXObject__129_882 *)lVar8,kAll);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
      do {
                    /* end of inlined section */
        if (i.fCurrent == (cXObject__15_2008 *)0x0) {
          ___7CTilePt(&pt,2);
          return;
        }
        iVar7 = 0;
        if (i.fCurrent != (cXObject__15_2008 *)0x0) {
          iVar7 = (*(code *)(i.fCurrent)->__vtable[1].GetObjectImplementation)
                            ((int)&(i.fCurrent)->_vb3534 +
                             (int)*(short *)&(i.fCurrent)->__vtable[1].AdvanceGraphic);
        }
                    /* end of inlined section */
        uVar2 = *(ushort *)(iVar7 + 0x36);
        if (bVar4) {
          uVar6 = uVar2 | 0x100;
        }
        else {
          uVar6 = uVar2 & 0xfeff;
        }
        *(ushort *)(iVar7 + 0x36) = uVar6;
        if ((uVar2 >> 8 & 1) == 0) {
          if (bVar4) {
            iVar12 = *(int *)(iVar7 + 4);
            goto LAB_00244fe8;
          }
        }
        else if (!bVar4) {
          iVar12 = *(int *)(iVar7 + 4);
LAB_00244fe8:
          lVar8 = (**(code **)(*(int *)(iVar12 + 4) + 0x17c))
                            (iVar12 + *(short *)(*(int *)(iVar12 + 4) + 0x178),0x19);
          if (lVar8 != 0) {
            iVar12 = *(int *)(*(int *)(iVar7 + 4) + 4);
            (**(code **)(iVar12 + 0xdc))(*(int *)(iVar7 + 4) + (int)*(short *)(iVar12 + 0xd8),9,0,0)
            ;
          }
        }
        __pp__14ObjectIterator(&i);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
                    /* end of inlined section */
      } while( true );
    }
  }
  ___7CTilePt(&pt,2);
  return;
}

bool cXObjectImpl::TestIntersection(FTilePt &loc, Int inLevel) {
	Int dirCnt;
	Int x;
	Int y;
	cXObjectImpl *obj;
	FTileRect newRect;
	Int iHaveZeroExtent;
	Int myExclusivePlacementFlags;
	cXObjectImpl *ptr;
	FInt *this;
	CTilePt pt;
	cXObjectImpl *ptr;
	Int itHasZeroExtent;
	Int flagsInCommon;
	TileWallsSegment seg1;
	FTileRect *this;
	
  int iVar1;
  int iVar2;
  cFixedWorld__vtable *pcVar3;
  ObjectModule__vtable *pOVar4;
  int iVar5;
  int iVar6;
  cFixedWorld *pcVar7;
  ObjectModule *pOVar8;
  bool bVar9;
  short sVar10;
  uint uVar11;
  cXObject__21_1030 *pcVar12;
  void *pvVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  cXObject__21_1030__vtable *pcVar19;
  undefined4 uVar20;
  int iVar21;
  long lVar22;
  int iVar23;
  FTileRect newRect;
  CTilePt pt;
  int x;
  int y;
  int myExclusivePlacementFlags;
  
  pcVar19 = this->_vb966->__vtable;
  lVar15 = (*(code *)pcVar19[1].Pickup)
                     ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar19[1].Turn);
  if (lVar15 == 2) {
                    /* inlined from SCID.h */
    if (this == (cXObjectImpl__127_901 *)0x0) {
      pvVar13 = (void *)0x0;
    }
    else {
      pvVar13 = _dyncastimpl__7TreeSim4SCID(this->_vb966->_vb899,cXPersonID);
    }
                    /* end of inlined section */
    lVar15 = (**(code **)(*(int *)((int)pvVar13 + 4) + 0x18c))
                       ((int)pvVar13 + (int)*(short *)(*(int *)((int)pvVar13 + 4) + 0x188));
    if (lVar15 != 0) {
      return true;
    }
                    /* end of inlined section */
    pcVar12 = this->_vb966;
  }
  else {
    pcVar12 = this->_vb966;
  }
  pOVar8 = _5Globs_pObjectModule;
  pcVar7 = _5Globs_pFixedWorld;
  iVar23 = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
  iVar1 = (loc->x).whole;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
  iVar2 = (loc->y).whole;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
  lVar15 = (*(code *)pcVar12->__vtable[1].GetAgeInMinutes)
                     ((int)&pcVar12->_vb899 + (int)*(short *)&pcVar12->__vtable[1].GetErrorString);
  pcVar19 = this->_vb966->__vtable;
  uVar11 = (*(code *)pcVar19->ReconType)
                     ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar19->ReconStream,0x3f);
  ComputeRect__12cXObjectImplRC7FTilePtP9FTileRect(this,loc,&newRect);
  do {
    __7CTilePtiii(&pt,(iVar1 >> 4) + _12cXObjectImpl_sXDirTable[iVar23],
                  (iVar2 >> 4) + _12cXObjectImpl_sYDirTable[iVar23],inLevel);
    pcVar3 = pcVar7->__vtable;
    lVar16 = (*(code *)pcVar3->SetWall)
                       ((int)&pcVar7->__vtable + (int)*(short *)&pcVar3->GetWall,&pt);
    if (lVar16 == 0) {
      pcVar12 = this->_vb966;
      pOVar4 = pOVar8->__vtable;
      pcVar19 = pcVar12->__vtable;
      sVar10 = *(short *)&pcVar19[1].CanContributeLight;
      uVar17 = (*(code *)pOVar4[1].GetSimFlag)
                         ((int)&pOVar8->__vtable + (int)*(short *)&pOVar4[1].SetSimFlag,&pt);
      lVar16 = (*(code *)pcVar19[1].GetLightingContribution)
                         ((int)&pcVar12->_vb899 + (int)sVar10,uVar17);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
      lVar22 = 0;
      if (lVar16 != 0) {
        iVar21 = *(int *)((int)lVar16 + 4);
        lVar22 = (**(code **)(iVar21 + 0x454))((int)lVar16 + (int)*(short *)(iVar21 + 0x450));
      }
                    /* end of inlined section */
      if (lVar22 != 0) {
        pcVar12 = this->_vb966;
        do {
          uVar20 = 0;
          iVar21 = (int)lVar22;
          if (lVar22 != 0) {
            uVar20 = *(undefined4 *)(iVar21 + 4);
          }
          lVar16 = (*(code *)pcVar12->__vtable->HideForCutaway)
                             ((int)&pcVar12->_vb899 +
                              (int)*(short *)&pcVar12->__vtable->GetChildAnimTable,uVar20);
          if (lVar16 == 0) {
            pcVar19 = this->_vb966->__vtable;
            lVar16 = (*(code *)pcVar19[1].Pickup)
                               ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar19[1].Turn);
            pcVar12 = *(cXObject__21_1030 **)(iVar21 + 4);
            if (lVar16 == 2) {
              pcVar19 = pcVar12->__vtable;
LAB_00245324:
              lVar16 = (*(code *)pcVar19[1].GetBuildModeType)
                                 ((int)&pcVar12->_vb899 +
                                  (int)*(short *)&pcVar19[1].CanChooseAutonomously);
              if (lVar16 == 0) {
                iVar5 = *(int *)(iVar21 + 4);
LAB_00245410:
                pcVar12 = this->_vb966;
                pcVar19 = pcVar12->__vtable;
                sVar10 = *(short *)&pcVar19->SetObjectProbe;
                uVar17 = (**(code **)(*(int *)(iVar5 + 4) + 700))
                                   (iVar5 + *(short *)(*(int *)(iVar5 + 4) + 0x2b8));
                lVar16 = (*(code *)pcVar19->GetInteractionLeader)
                                   ((int)&pcVar12->_vb899 + (int)sVar10,5,uVar17,0);
                if (lVar16 == 0) {
                  iVar5 = *(int *)(iVar21 + 4);
                  pcVar19 = this->_vb966->__vtable;
                  iVar6 = *(int *)(iVar5 + 4);
                  sVar10 = *(short *)(iVar6 + 0xd8);
                  uVar17 = (*(code *)pcVar19[1].UserCanPlace)
                                     ((int)&this->_vb966->_vb899 +
                                      (int)*(short *)&pcVar19[1].IsPartOfMe);
                  lVar16 = (**(code **)(iVar6 + 0xdc))(iVar5 + sVar10,5,uVar17,0);
                  if (lVar16 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    if (((*(int *)(iVar21 + 0xd8) < newRect.bottom.whole) &&
                        (newRect.top.whole < *(int *)(iVar21 + 0xd0))) &&
                       (*(int *)(iVar21 + 0xdc) < newRect.right.whole)) {
                      bVar9 = newRect.left.whole < *(int *)(iVar21 + 0xd4);
                    }
                    else {
                      bVar9 = false;
                    }
                    /* end of inlined section */
                    if (bVar9) {
                      gPlacementError = 0xb;
                      gPlacementConflict = (cXObject__21_1030 *)0x0;
                      iVar5 = gPlacementError;
                      if (lVar22 != 0) {
                        gPlacementConflict = *(cXObject__21_1030 **)(iVar21 + 4);
                      }
LAB_002455c4:
                      gPlacementError = iVar5;
                      ___7CTilePt(&pt,2);
                      return false;
                    }
                    goto LAB_00245514;
                  }
                  iVar21 = *(int *)(iVar21 + 4);
                }
                else {
                  iVar21 = *(int *)(iVar21 + 4);
                }
              }
              else {
                iVar21 = *(int *)(iVar21 + 4);
              }
            }
            else {
              lVar16 = (*(code *)pcVar12->__vtable[1].Pickup)
                                 ((int)&pcVar12->_vb899 + (int)*(short *)&pcVar12->__vtable[1].Turn)
              ;
              if (lVar16 == 2) {
                    /* inlined from SCID.h */
                if (lVar22 == 0) {
                  pvVar13 = (void *)0x0;
                }
                else {
                  pvVar13 = _dyncastimpl__7TreeSim4SCID(**(TreeSim ***)(iVar21 + 4),cXPersonID);
                }
                    /* end of inlined section */
                lVar16 = (**(code **)(*(int *)((int)pvVar13 + 4) + 0x18c))
                                   ((int)pvVar13 +
                                    (int)*(short *)(*(int *)((int)pvVar13 + 4) + 0x188));
                if (lVar16 != 0) {
                  iVar21 = *(int *)(iVar21 + 4);
                  goto LAB_00245518;
                }
                pcVar12 = this->_vb966;
                pcVar19 = pcVar12->__vtable;
                goto LAB_00245324;
              }
              iVar5 = *(int *)(*(int *)(iVar21 + 4) + 4);
              lVar16 = (**(code **)(iVar5 + 0x3dc))
                                 (*(int *)(iVar21 + 4) + (int)*(short *)(iVar5 + 0x3d8));
              if ((lVar15 == 0) && (lVar16 == 0)) {
                iVar5 = *(int *)(iVar21 + 4);
                goto LAB_00245410;
              }
              if (iVar23 != 8) {
                iVar21 = *(int *)(iVar21 + 4);
                goto LAB_00245518;
              }
              iVar5 = *(int *)(*(int *)(iVar21 + 4) + 4);
              uVar14 = (**(code **)(iVar5 + 0x20c))
                                 (*(int *)(iVar21 + 4) + (int)*(short *)(iVar5 + 0x208),0x3f);
              if ((uVar14 & uVar11 & 1) != 0) {
                iVar5 = 0xb;
                goto LAB_002455c4;
              }
              if ((lVar15 == 0) || (lVar16 == 0)) {
                iVar5 = 0xb;
                if ((uVar14 & uVar11 & 2) != 0) goto LAB_002455c4;
              }
              else {
                pcVar19 = this->_vb966->__vtable;
                lVar16 = (*(code *)pcVar19[1].GetSpriteSlot)
                                   ((int)&this->_vb966->_vb899 +
                                    (int)*(short *)&pcVar19[1].CalcShortDistance);
                iVar5 = *(int *)(*(int *)(iVar21 + 4) + 4);
                lVar22 = (**(code **)(iVar5 + 0x244))
                                   (*(int *)(iVar21 + 4) + (int)*(short *)(iVar5 + 0x240));
                if (lVar16 != lVar22) {
                  iVar21 = *(int *)(iVar21 + 4);
                  goto LAB_00245518;
                }
                iVar5 = 0x16;
                if (lVar16 != 0) goto LAB_002455c4;
              }
LAB_00245514:
              iVar21 = *(int *)(iVar21 + 4);
            }
          }
          else {
            iVar21 = *(int *)(iVar21 + 4);
          }
LAB_00245518:
          lVar16 = (**(code **)(*(int *)(iVar21 + 4) + 0x28c))
                             (iVar21 + *(short *)(*(int *)(iVar21 + 4) + 0x288));
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
          lVar22 = 0;
          if (lVar16 != 0) {
            iVar21 = *(int *)((int)lVar16 + 4);
            lVar22 = (**(code **)(iVar21 + 0x454))((int)lVar16 + (int)*(short *)(iVar21 + 0x450));
          }
                    /* end of inlined section */
          if (lVar22 == 0) break;
          pcVar12 = this->_vb966;
        } while( true );
      }
      ___7CTilePt(&pt,2);
    }
    else {
      ___7CTilePt(&pt,2);
    }
    iVar23 = iVar23 + 1;
    if (8 < iVar23) {
      pcVar19 = this->_vb966->__vtable;
      uVar18 = (*(code *)pcVar19->ReconType)
                         ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar19->ReconStream,0x2a);
      bVar9 = true;
      if ((uVar18 & 0x400) == 0) {
        sVar10 = SectWall__FP9FTileRecti(&newRect,inLevel);
        if (sVar10 == 0) {
          bVar9 = true;
        }
        else {
          gPlacementError = 7;
          bVar9 = false;
        }
      }
      return bVar9;
    }
  } while( true );
}

bool cXObjectImpl::IsPartOfMe(cXObject *other) {
  return other == this->_vb966;
}

void cXObjectImpl::ForceLocation() {
  return;
}

short unsigned int ResolveRoomID(FTilePt &inPt, int inLevel) {
	cFixedWorld *world;
	CTilePt cpt;
	short unsigned int roomID;
	TileWalls tw;
	CTilePt adj1;
	CTilePt adj2;
	FInt *this;
	FInt *this;
	
  cFixedWorld *pcVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  cFixedWorld__vtable *pcVar6;
  CTilePt cpt;
  TileWalls tw;
  CTilePt adj1;
  CTilePt adj2;
  
  pcVar1 = _5Globs_pFixedWorld;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  __7CTilePtRC7FTilePti(&cpt,inPt,inLevel);
  lVar4 = (*(code *)pcVar1->__vtable->SetWall)
                    ((int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->GetWall,&cpt);
  if (lVar4 != 0) {
    ___7CTilePt(&cpt,2);
    return -5;
  }
  lVar4 = (*(code *)pcVar1->__vtable[1].OutOfBounds)
                    ((int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable[1].GetMaxSize,&cpt);
  if (lVar4 != 0xfffb) goto LAB_00245898;
  (*(code *)pcVar1->__vtable->ComputeArchValue)
            (&tw,(int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,&cpt);
  __7CTilePtRC7CTilePt(&adj1,&cpt);
  __7CTilePtRC7CTilePt(&adj2,&cpt);
  bVar2 = HasWall__C9TileWalls16TileWallsSegment(&tw,kHorizDiag);
  if (bVar2) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
    if ((int)((inPt->x).whole & 0xfU) < (int)(0x10 - ((inPt->y).whole & 0xfU))) {
      iVar3 = GetX__C7CTilePt(&adj1);
      SetX__7CTilePti(&adj1,iVar3 + -1);
      iVar3 = GetY__C7CTilePt(&adj2);
      iVar3 = iVar3 + -1;
    }
    else {
      iVar3 = GetX__C7CTilePt(&adj1);
      iVar3 = iVar3 + 1;
LAB_002457a0:
      SetX__7CTilePti(&adj1,iVar3);
      iVar3 = GetY__C7CTilePt(&adj2);
      iVar3 = iVar3 + 1;
    }
    SetY__7CTilePti(&adj2,iVar3);
    pcVar6 = pcVar1->__vtable;
  }
  else {
    bVar2 = HasWall__C9TileWalls16TileWallsSegment(&tw,kVertDiag);
    if (bVar2) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
      if (((inPt->x).whole & 0xfU) < ((inPt->y).whole & 0xfU)) {
        iVar3 = GetX__C7CTilePt(&adj1);
        iVar3 = iVar3 + -1;
        goto LAB_002457a0;
      }
      iVar3 = GetX__C7CTilePt(&adj1);
      SetX__7CTilePti(&adj1,iVar3 + 1);
      iVar3 = GetY__C7CTilePt(&adj2);
      SetY__7CTilePti(&adj2,iVar3 + -1);
      pcVar6 = pcVar1->__vtable;
    }
    else {
      pcVar6 = pcVar1->__vtable;
    }
  }
  lVar5 = (*(code *)pcVar6->SetWall)((int)&pcVar1->__vtable + (int)*(short *)&pcVar6->GetWall,&adj1)
  ;
  if (((lVar5 == 0) &&
      (lVar4 = (*(code *)pcVar1->__vtable[1].OutOfBounds)
                         ((int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable[1].GetMaxSize,
                          &adj1), lVar4 == 0xfffb)) &&
     (lVar5 = (*(code *)pcVar1->__vtable->SetWall)
                        ((int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->GetWall,&adj2),
     lVar5 == 0)) {
    lVar4 = (*(code *)pcVar1->__vtable[1].OutOfBounds)
                      ((int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable[1].GetMaxSize,&adj2
                      );
  }
  ___7CTilePt(&adj2,2);
  ___7CTilePt(&adj1,2);
  ___9TileWalls(&tw,2);
LAB_00245898:
  ___7CTilePt(&cpt,2);
  return (short)lVar4;
}

void cXObjectImpl::ComputeRect(FTilePt &inCenter, FTileRect *_outRect) {
	Int hwid;
	SInt16 footprintInsets;
	SInt16 footprintExtensions;
	Int r;
	Int b;
	cXPerson *p;
	cXObjectImpl *ptr;
	int insets[4];
	Int dir;
	
  ushort uVar1;
  cXObject__21_1030__vtable *pcVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  int insets [4];
  
  lVar15 = 0;
  pcVar2 = this->_vb966->__vtable;
  iVar4 = (*(code *)pcVar2[1].SetObjectProbe)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2[1].GetObjectProbe);
  iVar11 = (inCenter->y).whole;
  iVar6 = (inCenter->x).whole;
  iVar4 = iVar4 / 2;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
  (_outRect->top).whole = iVar11 - iVar4;
  (_outRect->left).whole = iVar6 - iVar4;
  (_outRect->right).whole = iVar6 + iVar4;
  (_outRect->bottom).whole = iVar11 + iVar4;
                    /* end of inlined section */
  pcVar2 = this->_vb966->__vtable;
  uVar1 = this->fDef->footprintInsetMask;
  lVar7 = (*(code *)pcVar2[1].Pickup)((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2[1].Turn);
  if (lVar7 == 2) {
                    /* inlined from SCID.h */
    if (this == (cXObjectImpl__127_901 *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = _dyncastimpl__7TreeSim4SCID(this->_vb966->_vb899,cXPersonID);
    }
                    /* end of inlined section */
    pcVar2 = this->_vb966->__vtable;
    uVar8 = (*(code *)pcVar2->ReconType)
                      ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->ReconStream,1);
    if ((uVar8 & 1) == 0) {
      lVar15 = (**(code **)(*(int *)((int)pvVar5 + 4) + 0xe4))
                         ((int)pvVar5 + (int)*(short *)(*(int *)((int)pvVar5 + 4) + 0xe0),0x49);
    }
  }
  if ((uVar1 != 0) || (lVar15 != 0)) {
    insets[1] = ((int)(short)uVar1 & 0xf0U) >> 4;
    insets[3] = (int)((int)(short)uVar1 & 0xf000U) >> 0xc;
    insets[2] = ((int)(short)uVar1 & 0xf00U) >> 8;
    insets[0] = (int)(short)uVar1 & 0xfU;
    if (lVar15 != 0) {
      uVar3 = (uint)lVar15;
      insets[0] = ((int)(short)uVar1 & 0xfU) - (uVar3 & 0xf);
      insets[1] = insets[1] - ((uVar3 & 0xf0) >> 4);
      insets[2] = insets[2] - ((uVar3 & 0xf00) >> 8);
      insets[3] = insets[3] - ((int)(uVar3 & 0xf000) >> 0xc);
    }
    iVar6 = (8 - (short)this->fData[1]) / 2;
    iVar4 = iVar6 + 3;
    iVar13 = iVar6 + 1;
    iVar14 = iVar6 + 2;
    iVar11 = iVar4;
    if (-1 < iVar6) {
      iVar11 = iVar6;
    }
    iVar10 = iVar6 + 4;
    if (-1 < iVar13) {
      iVar10 = iVar13;
    }
    iVar9 = iVar6 + 5;
    if (-1 < iVar14) {
      iVar9 = iVar14;
    }
    iVar12 = iVar6 + 6;
    if (-1 < iVar4) {
      iVar12 = iVar4;
    }
    iVar13 = insets[iVar13 + (iVar10 >> 2) * -4];
    iVar14 = insets[iVar14 + (iVar9 >> 2) * -4];
    iVar4 = insets[iVar4 + (iVar12 >> 2) * -4];
    (_outRect->top).whole = (_outRect->top).whole + insets[iVar6 + (iVar11 >> 2) * -4];
    (_outRect->right).whole = (_outRect->right).whole - iVar13;
    (_outRect->left).whole = (_outRect->left).whole + iVar4;
    (_outRect->bottom).whole = (_outRect->bottom).whole - iVar14;
  }
  return;
}

void cXObjectImpl::SetLocation(FTilePt &loc, Int inLevel, RecursionParam inParam) {
	Int slotCnt;
	Int numSlots;
	FTilePt *this;
	FTilePt &other;
	cXObjectImpl *anObject;
	
  ushort uVar1;
  cXObject__21_1030__vtable *pcVar2;
  cXObject__21_1030 *pcVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
  pcVar2 = this->_vb966->__vtable;
  (*(code *)pcVar2->RunTree)
            ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->IsSpriteVisible,inParam);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
  (this->fLocation).x.whole = (loc->x).whole;
                    /* end of inlined section */
  pcVar3 = this->_vb966;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
  (this->fLocation).y.whole = (loc->y).whole;
                    /* end of inlined section */
  pcVar2 = pcVar3->__vtable;
  (*(code *)pcVar2->IsMultiTile)
            ((int)&pcVar3->_vb899 + (int)*(short *)&pcVar2->GetTileWidth,inLevel);
  ComputeRect__12cXObjectImplRC7FTilePtP9FTileRect(this,&this->fLocation,&this->fRect);
  uVar5 = ResolveRoomID__FRC7FTilePti(loc,inLevel);
  uVar1 = this->fData[0x1d];
  this->fData[0x1d] = uVar5;
  if ((long)(short)uVar1 != (long)(int)(short)uVar5) {
    if (this->fData[7] == 0) {
      pcVar3 = this->_vb966;
      goto LAB_00245c20;
    }
    GlobalDispatch__Fsi(0xf2,(int)(short)uVar1);
    GlobalDispatch__Fsi(0xf2,(int)(short)uVar5);
  }
  pcVar3 = this->_vb966;
LAB_00245c20:
  iVar9 = 0;
  iVar6 = (*(code *)pcVar3->__vtable[1].GetHilite)
                    ((int)&pcVar3->_vb899 + (int)*(short *)&pcVar3->__vtable[1].SetHilite);
  if (0 < iVar6) {
    pcVar3 = this->_vb966;
    while( true ) {
      lVar7 = (*(code *)pcVar3->__vtable[1].Dirty)
                        ((int)&pcVar3->_vb899 + (int)*(short *)&pcVar3->__vtable[1].UpdateSimFlags,
                         iVar9);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
      lVar8 = 0;
      if (lVar7 != 0) {
        iVar4 = *(int *)((int)lVar7 + 4);
        lVar8 = (**(code **)(iVar4 + 0x454))((int)lVar7 + (int)*(short *)(iVar4 + 0x450));
      }
                    /* end of inlined section */
      if (lVar8 != 0) {
        SetLocation__12cXObjectImplRC7FTilePtiQ28cXObject14RecursionParam
                  ((cXObjectImpl__127_901 *)lVar8,loc,inLevel,1);
      }
      iVar9 = iVar9 + 1;
      if (iVar6 <= iVar9) break;
      pcVar3 = this->_vb966;
    }
  }
  return;
}

void cXObjectImpl::Turn(Int notches) {
	Int oldDir;
	
  ushort uVar1;
  cXObject__21_1030 *pcVar2;
  cXObject__21_1030__vtable *pcVar3;
  long lVar4;
  
  if ((notches != 0) && (this->fData[0x17] != 0)) {
    uVar1 = this->fData[1];
    pcVar2 = this->_vb966;
    this->fData[1] = this->fData[1] + this->fData[0x17] * (short)notches & 7;
    pcVar3 = pcVar2->__vtable;
    (*(code *)pcVar3->RunTree)((int)&pcVar2->_vb899 + (int)*(short *)&pcVar3->IsSpriteVisible,0);
    pcVar3 = this->_vb966->__vtable;
    lVar4 = (*(code *)pcVar3[1].ShouldAutoRotate)
                      ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3[1].IsSupport);
    if (lVar4 != 0) {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
      UpdateChairFacing__12cXObjectImplP12ObjectModuleiii
                (this->fModule,
                 ((this->fLocation).x.whole >> 4) + _12cXObjectImpl_sXDirTable[(short)uVar1],
                 ((this->fLocation).y.whole >> 4) + _12cXObjectImpl_sYDirTable[(short)uVar1],
                 this->fLevel);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
      UpdateChairFacing__12cXObjectImplP12ObjectModuleiii
                (this->fModule,
                 ((this->fLocation).x.whole >> 4) +
                 _12cXObjectImpl_sXDirTable[(short)this->fData[1]],
                 ((this->fLocation).y.whole >> 4) +
                 _12cXObjectImpl_sYDirTable[(short)this->fData[1]],this->fLevel);
    }
    UpdateWallAdjacency__12cXObjectImpl(this);
  }
  return;
}

float cXObjectImpl::GetSlotHeight(Int slotNum) {
	cXObject *parent;
	cXObject *child;
	ObjectSlot *slot;
	float slotHeight;
	
  cXObject__21_1030__vtable *pcVar1;
  cXObject__21_1030 *pcVar2;
  int iVar3;
  cXObject__21_1030 *pcVar4;
  long lVar5;
  float fVar6;
  
  if ((slotNum < 0) ||
     (pcVar1 = this->_vb966->__vtable,
     iVar3 = (*(code *)pcVar1[1].GetHilite)
                       ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].SetHilite),
     iVar3 <= slotNum)) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = 0.0;
    pcVar2 = this->_vb966;
    while (pcVar2 != (cXObject__21_1030 *)0x0) {
      lVar5 = (*(code *)pcVar2->__vtable[1].GetMiscFlag)
                        ((int)&pcVar2->_vb899 + (int)*(short *)&pcVar2->__vtable[1].SetMiscFlag,
                         slotNum);
      if (lVar5 != 0) {
        fVar6 = fVar6 + *(float *)((int)lVar5 + 8);
      }
      pcVar4 = (cXObject__21_1030 *)
               (*(code *)pcVar2->__vtable[1].IsRenderingRoot)
                         ((int)&pcVar2->_vb899 + (int)*(short *)&pcVar2->__vtable[1].GetRenderLayer)
      ;
      slotNum = (*(code *)pcVar2->__vtable[1].CenterHouseViewOnMe)
                          ((int)&pcVar2->_vb899 +
                           (int)*(short *)&pcVar2->__vtable[1].IsBeingDraggedAround);
      pcVar2 = pcVar4;
    }
  }
  return fVar6;
}

void cXObjectImpl::Dirty(RecursionParam inParam) {
	cXObject *anObject;
	cXObject *container;
	
  cXObject__21_1030 *pcVar1;
  cXObject__21_1030__vtable *pcVar2;
  cXObject__21_1030 *pcVar3;
  
  pcVar3 = this->_vb966;
  if (inParam == '\0') {
    pcVar2 = pcVar3->__vtable;
    while( true ) {
      pcVar1 = (cXObject__21_1030 *)
               (*(code *)pcVar2[1].IsRenderingRoot)
                         ((int)&pcVar3->_vb899 + (int)*(short *)&pcVar2[1].GetRenderLayer);
      if (pcVar1 == (cXObject__21_1030 *)0x0) break;
      pcVar2 = pcVar1->__vtable;
      pcVar3 = pcVar1;
    }
  }
  (*(code *)pcVar3->__vtable->RunTree)
            ((int)&pcVar3->_vb899 + (int)*(short *)&pcVar3->__vtable->RunTree,1,inParam);
  return;
}

void cXObjectImpl::GetTypeName(BString &name) {
	char *str;
	
  char *s;
  
  switch(this->fDef->type) {
  default:
    s = "unknown";
    break;
  case 1:
    s = "food";
    break;
  case 2:
    s = "person";
    break;
  case 3:
    s = "container";
    break;
  case 4:
    s = "furniture";
    break;
  case 5:
    s = "structure";
    break;
  case 6:
    s = "animal";
    break;
  case 7:
    s = "simulation";
    break;
  case 8:
    s = "portal";
    break;
  case 9:
    s = "mouse";
  }
  __as__7BStringPCc(name,s);
  return;
}

float cXObjectImpl::CalcShortDistance(cXObject *to) {
	float sdist;
	float slevelDist;
	cXObject *this;
	Int ys;
	Int xs;
	cXObject *this;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
  if (to == (cXObject__21_1030 *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(code *)to->__vtable[1].GetObjectImplementation)
                      ((int)&to->_vb899 + (int)*(short *)&to->__vtable[1].AdvanceGraphic);
  }
  iVar2 = (this->fLocation).x.whole - *(int *)(iVar1 + 0xcc);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
  iVar1 = (this->fLocation).y.whole - *(int *)(iVar1 + 200);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
  if (to == (cXObject__21_1030 *)0x0) {
    iVar3 = 0;
                    /* end of inlined section */
    iVar4 = this->fLevel;
  }
  else {
    iVar3 = (*(code *)to->__vtable[1].GetObjectImplementation)
                      ((int)&to->_vb899 + (int)*(short *)&to->__vtable[1].AdvanceGraphic);
    iVar4 = this->fLevel;
  }
  fVar5 = (float)((*(int *)(iVar3 + 0xe0) - iVar4) * 0x14);
  fVar5 = sqrtf((float)(iVar2 * iVar2 + iVar1 * iVar1) * 0.00390625 + fVar5 * fVar5);
  return fVar5;
}

float cXObjectImpl::CalcShortDistance(FTilePt *dest) {
	FTilePt &other;
	Int ys;
	Int xs;
	
  int iVar1;
  int iVar2;
  float fVar3;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
  iVar2 = (dest->y).whole - (this->fLocation).y.whole;
  iVar1 = (dest->x).whole - (this->fLocation).x.whole;
                    /* end of inlined section */
  fVar3 = sqrtf((float)(iVar1 * iVar1 + iVar2 * iVar2) * 0.00390625);
  return fVar3;
}

float cXObjectImpl::CalcDistance(cXObject *to) {
	cXObject *this;
	
  cXObject__21_1030__vtable *pcVar1;
  int iVar2;
  ushort uVar3;
  float fVar4;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
  uVar3 = _regr7;
  if (to != (cXObject__21_1030 *)0x0) {
    iVar2 = (*(code *)to->__vtable[1].GetObjectImplementation)
                      ((int)&to->_vb899 + (int)*(short *)&to->__vtable[1].AdvanceGraphic);
    uVar3 = *(ushort *)(iVar2 + 0x60);
  }
  if (uVar3 == this->fData[0x1d]) {
    pcVar1 = this->_vb966->__vtable;
    fVar4 = (float)(*(code *)pcVar1->SetMiscFlag)
                             ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1->GetHilite,to);
  }
  else {
    fVar4 = EstimateDistance__8cXPortalP12ObjectModuleP8cXObjectT2(this->fModule,this->_vb966,to);
  }
  return fVar4;
}

void cXObjectImpl::ReconHeader(ReconBuffer *r, SInt32 version) {
	SInt16 simOn;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  ushort simOn;
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
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  Recon32__11ReconBufferPii(r,&(this->fRect).top.whole,1);
  Recon32__11ReconBufferPii(r,&(this->fRect).left.whole,1);
  Recon32__11ReconBufferPii(r,(int *)&this->fRect,1);
  Recon32__11ReconBufferPii(r,&(this->fRect).right.whole,1);
  Recon32__11ReconBufferPii(r,&(this->fLocation).x.whole,1);
  Recon32__11ReconBufferPii(r,(int *)&this->fLocation,1);
  if (0x18 < version) {
    ReconInt__11ReconBufferPii(r,&this->fLevel,1);
  }
  if (version < 0x2f) {
    Recon16__11ReconBufferPsi(r,&this->fID,1);
  }
  simOn = 1;
  Recon16__11ReconBufferPsi(r,&simOn,1);
  if (version == 0x37) {
    ReconInt__11ReconBufferPii(r,&this->fMiscFlags,1);
  }
  return;
}

void cXObjectImpl::ReconStream(ReconBuffer *r, SInt32 version, bool placeHolder) {
	SInt16 wasDirInc;
	SInt16 numAttrs;
	ReconBuffer *this;
	SInt16 numDynSprites;
	
  cXObject__21_1030__vtable *pcVar1;
  TreeSimImpl__21_3338 *pTVar2;
  RelMatrix__vtable *pRVar3;
  cXObject__21_1030 *pcVar4;
  ushort *puVar5;
  int *piVar6;
  BehaviorFinder *bLoader;
  ushort *puVar7;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  ushort numAttrs;
  ushort wasDirInc;
  ushort numDynSprites;
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
  
  local_20 = (undefined4)unaff_s6;
  uStack_1c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s5;
  uStack_2c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  pcVar1 = this->_vb966->__vtable;
  (*(code *)pcVar1[1].GetFirst)((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].GetNext);
  puVar7 = this->fTemp;
  if (version < 1) {
    Recon16__11ReconBufferPsi(r,this->fAttrs,8);
    Recon16__11ReconBufferPsi(r,puVar7,0x20);
    Recon16__11ReconBufferPsi(r,this->fData,0x20);
LAB_0024639c:
    if (version < 0xb) goto LAB_00246454;
  }
  else if (version < 0xb) {
    Recon16__11ReconBufferPsi(r,this->fAttrs,8);
    Recon16__11ReconBufferPsi(r,puVar7,8);
    Recon16__11ReconBufferPsi(r,this->fData,0x24);
    goto LAB_0024639c;
  }
  if (version < 0x18) {
    Recon16__11ReconBufferPsi(r,this->fAttrs,8);
  }
  else {
    numAttrs = *(ushort *)&this->fNumAttr;
    Recon16__11ReconBufferPsi(r,&numAttrs,1);
    if ((long)this->fNumAttr < (long)(short)numAttrs) {
      if (placeHolder) {
        if (this->fAttrs != (ushort *)0x0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
          _memmanFree__FPv(this->fAttrs);
                    /* end of inlined section */
        }
                    /* inlined from /eor/src2/common/e_standard_heap.h */
        this->fNumAttr = (int)(short)numAttrs;
        puVar5 = (ushort *)_memmanAlloc__FUiUi((int)(short)numAttrs << 1,4);
                    /* end of inlined section */
        this->fAttrs = puVar5;
        puVar5 = this->fAttrs;
      }
      else {
        puVar5 = this->fAttrs;
      }
    }
    else {
      puVar5 = this->fAttrs;
    }
    Recon16__11ReconBufferPsi(r,puVar5,(int)(short)numAttrs);
  }
  Recon16__11ReconBufferPsi(r,puVar7,8);
  Recon16__11ReconBufferPsi(r,this->fData,0x48);
LAB_00246454:
  wasDirInc = 0;
  Recon16__11ReconBufferPsi(r,(ushort *)((uint)&numAttrs | 2),1);
  pTVar2 = this->_vb1168;
  pcVar1 = this->_vb966->__vtable;
  piVar6 = (int *)(*(code *)pcVar1->GetObjectLightSource)
                            ((int)&this->_vb966->_vb899 +
                             (int)*(short *)&pcVar1->GetLightingContribution);
  bLoader = (BehaviorFinder *)
            (**(code **)(*piVar6 + 0x184))((int)piVar6 + (int)*(short *)(*piVar6 + 0x180));
  ReconStream__9TreeStackP11ReconBufferiP14BehaviorFinder(&pTVar2->fStack,r,version,bLoader);
  if (4 < version) {
    if (version < 7) {
      pRVar3 = this->fInstMatrix->__vtable;
      (*(code *)pRVar3[1].GetValue)
                ((int)&this->fInstMatrix->__vtable + (int)*(short *)&pRVar3[1].RemoveArray,r,0);
    }
    else {
      pRVar3 = this->fInstMatrix->__vtable;
      (*(code *)pRVar3[1].GetValue)
                ((int)&this->fInstMatrix->__vtable + (int)*(short *)&pRVar3[1].RemoveArray,r,version
                );
    }
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
                    /* end of inlined section */
  if ((version < 0xd) && (r->fMode == kReading)) {
    this->fData[9] = 0;
    this->fData[10] = 0;
  }
  if (version < 0x22) {
    this->fData[0x10] = 0;
    this->fData[0x11] = 0;
    pcVar4 = this->_vb966;
  }
  else {
    pcVar4 = this->_vb966;
  }
  (*(code *)pcVar4->__vtable[1].GetObjectFromID)
            ((int)&pcVar4->_vb899 + (int)*(short *)&pcVar4->__vtable[1].IsChair,r,version);
  if (version < 0x34) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    this->fData[0x43] =
         (short)(((int)(this->fHierSlots).finish - (int)(this->fHierSlots).start) * 0x38e38e39 >> 2)
         - 1;
  }
  if (0x1a < version) {
    numDynSprites = this->fNumDynSprites;
    Recon16__11ReconBufferPsi(r,(ushort *)((uint)&numAttrs | 4),1);
    if (((long)(short)this->fNumDynSprites < (long)(int)(short)numDynSprites) && (placeHolder)) {
      if (this->fDynSpriteFlags != (ushort *)0x0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
        _memmanFree__FPv(this->fDynSpriteFlags);
                    /* end of inlined section */
      }
                    /* inlined from /eor/src2/common/e_standard_heap.h */
                    /* end of inlined section */
      this->fNumDynSprites = numDynSprites;
                    /* inlined from /eor/src2/common/e_standard_heap.h */
      puVar7 = (ushort *)_memmanAlloc__FUiUi((int)((uint)numDynSprites << 0x10) >> 0xf,4);
                    /* end of inlined section */
      this->fDynSpriteFlags = puVar7;
    }
    Recon16__11ReconBufferPsi(r,this->fDynSpriteFlags,(int)(short)numDynSprites);
  }
  if (placeHolder) {
    this->fData[1] = 0;
  }
  return;
}

void cXObjectImpl::ReconSlots(ReconBuffer *r, SInt32 version) {
	Int n;
	SInt16 objectID;
	SInt16 slotID;
	SInt16 reconSlotCount;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	
  ObjectSlot *position;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  int iVar1;
  undefined8 unaff_s3;
  long lVar2;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  ushort reconSlotCount;
  ObjectSlot local_e0;
  ushort slotID;
  ushort objectID;
  ushort *local_ac;
  ushort *local_a8;
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
  
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (4 < version) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    reconSlotCount =
         (ushort)((uint)(((int)(this->fHierSlots).finish - (int)(this->fHierSlots).start) *
                        0x38e38e39) >> 2);
    Recon16__11ReconBufferPsi(r,&reconSlotCount,1);
    if (0 < (short)reconSlotCount) {
      local_ac = &slotID;
      local_a8 = &objectID;
      lVar2 = 0;
      do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        iVar1 = (int)lVar2;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
        slotID = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
        objectID = 0;
        if (((int)(this->fHierSlots).finish - (int)(this->fHierSlots).start) * 0x38e38e39 >> 2 <=
            lVar2) {
          do {
            __10ObjectSlot(&local_e0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
            position = (this->fHierSlots).finish;
            if (position == (this->fHierSlots).end_of_storage) {
              insert_aux__t6vector2Z10ObjectSlotZt23__malloc_alloc_template1i0P10ObjectSlotRC10ObjectSlot
                        (&this->fHierSlots,position,&local_e0);
            }
            else {
              (position->field0_0x0).__vtable = (Slot__vtable *)_vt_4Slot;
              (position->field0_0x0).xoffset = local_e0.field0_0x0.xoffset;
              (position->field0_0x0).yoffset = local_e0.field0_0x0.yoffset;
              (position->field0_0x0).altOffset = local_e0.field0_0x0.altOffset;
              (position->field0_0x0).__vtable = (Slot__vtable *)_vt_10ObjectSlot;
              (position->field0_0x0).nameIndex = local_e0.field0_0x0.nameIndex;
              position->objectID = local_e0.objectID;
              position->height = local_e0.height;
              position->maximumSize = local_e0.maximumSize;
              position->flags = local_e0.flags;
              (this->fHierSlots).finish = (this->fHierSlots).finish + 1;
            }
                    /* end of inlined section */
            local_e0.field0_0x0.__vtable = (Slot__vtable *)_vt_4Slot;
          } while (((int)(this->fHierSlots).finish - (int)(this->fHierSlots).start) * 0x38e38e39 >>
                   2 <= lVar2);
        }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
        slotID = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
        objectID = (this->fHierSlots).start[iVar1].objectID;
        Recon16__11ReconBufferPsi(r,local_ac,1);
        Recon16__11ReconBufferPsi(r,local_a8,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
        (this->fHierSlots).start[iVar1].objectID = objectID;
        lVar2 = (long)(iVar1 + 1);
      } while ((long)(iVar1 + 1) < (long)(short)reconSlotCount);
    }
  }
  return;
}

SInt32 cXObjectImpl::ReconType() {
  return 0x584f424a;
}

int cXObjectImpl::GetDynamicToStaticLatency() {
	int maxLatency;
	Int slotCnt;
	Int numSlots;
	cXObject *anObject;
	int &a;
	int &b;
	
  cXObject__21_1030__vtable *pcVar1;
  cXObject__21_1030 *pcVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  int maxLatency;
  int local_7c;
  int local_78 [2];
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
  
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  maxLatency = -0x80000000;
  if (*(int *)&this->mDrawLabel != 0) {
    maxLatency = 0x7fffffff;
  }
  iVar7 = 0;
  pcVar1 = this->_vb966->__vtable;
  iVar4 = (*(code *)pcVar1[1].GetHilite)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].SetHilite);
  if (0 < iVar4) {
    pcVar2 = this->_vb966;
    while( true ) {
      lVar5 = (*(code *)pcVar2->__vtable[1].Dirty)
                        ((int)&pcVar2->_vb899 + (int)*(short *)&pcVar2->__vtable[1].UpdateSimFlags,
                         iVar7);
      if (lVar5 != 0) {
        iVar3 = *(int *)((int)lVar5 + 4);
        local_7c = (**(code **)(iVar3 + 0x74))((int)lVar5 + (int)*(short *)(iVar3 + 0x70));
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
        piVar6 = &local_7c;
        if (local_7c <= maxLatency) {
          piVar6 = &maxLatency;
        }
                    /* end of inlined section */
        maxLatency = *piVar6;
      }
      iVar7 = iVar7 + 1;
      if (iVar4 <= iVar7) break;
      pcVar2 = this->_vb966;
    }
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
  local_78[0] = 1000;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
  piVar6 = &maxLatency;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
  if (maxLatency < 0x3e9) {
    piVar6 = local_78;
  }
                    /* end of inlined section */
  return *piVar6;
}

void cXObjectImpl::SetLastDamage(RECT &in) {
  return;
}

void cXObjectImpl::ResetDamage() {
  return;
}

void cXObjectImpl::SetRenderLayer(RenderLayer inNewState, RecursionParam inParam) {
	Int slotCnt;
	Int numSlots;
	cXObject *anObject;
	
  cXObject__21_1030__vtable *pcVar1;
  cXObject__21_1030 *pcVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  
  if (((long)*(int *)&this->field_0x114 != (long)inNewState) && (this->fLevel < 2)) {
    *(int *)&this->field_0x114 = (int)inNewState;
  }
  if (inParam == '\0') {
    iVar6 = 0;
    pcVar1 = this->_vb966->__vtable;
    iVar4 = (*(code *)pcVar1[1].GetHilite)
                      ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].SetHilite);
    if (0 < iVar4) {
      pcVar2 = this->_vb966;
      while( true ) {
        lVar5 = (*(code *)pcVar2->__vtable[1].Dirty)
                          ((int)&pcVar2->_vb899 + (int)*(short *)&pcVar2->__vtable[1].UpdateSimFlags
                           ,iVar6);
        if (lVar5 != 0) {
          iVar3 = *(int *)((int)lVar5 + 4);
          (**(code **)(iVar3 + 0x6c))((int)lVar5 + (int)*(short *)(iVar3 + 0x68),(long)inNewState,0)
          ;
        }
        iVar6 = iVar6 + 1;
        if (iVar4 <= iVar6) break;
        pcVar2 = this->_vb966;
      }
    }
  }
  return;
}

bool cXObjectImpl::FindGoodLocation(FindGoodLocationParams &fglp, FTilePt *outLoc) {
	int directionToSelect;
	ObjectModule *module;
	int xoff;
	int yoff;
	int outTiles;
	int perimeter;
	FTilePt startLoc;
	int level;
	CTilePt center;
	short unsigned int origRoom;
	FindGoodLocationParams *this;
	FindGoodLocationParams *this;
	FindGoodLocationParams *this;
	int middle;
	CTilePt temp;
	CTilePt newLoc;
	bool goodSpot;
	TileWalls tw;
	FindGoodLocationParams *this;
	FindGoodLocationParams *this;
	FindGoodLocationParams *this;
	
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  cXObject__21_1030 *pcVar6;
  cXObject__21_1030__vtable *pcVar7;
  ulong *puVar8;
  cFixedWorld *pcVar9;
  FindGoodLocationParams *pFVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  cFixedWorld__vtable *pcVar15;
  ulong in_t0;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  int y;
  undefined8 unaff_s5;
  int x;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  FTilePt startLoc;
  CTilePt center;
  FTilePt aFStack_150 [2];
  CTilePt newLoc;
  ulong uStack_130;
  TileWalls tw;
  CTilePt aCStack_e0 [5];
  cXObjectImpl__127_901 *local_d0;
  FindGoodLocationParams *local_cc;
  FTilePt *local_c8;
  int directionToSelect;
  ObjectModule *module;
  int outTiles;
  int perimeter;
  int level;
  short origRoom;
  TileWalls *local_ac;
  CTilePt *local_a8;
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
  
  pcVar9 = _5Globs_pFixedWorld;
                    /* inlined from c:/eor/src2/games/sims/MSrc/FindGoodLocationParams.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/FindGoodLocationParams.h */
  directionToSelect = fglp->fDirectionVector;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/FindGoodLocationParams.h */
  if (directionToSelect == -1) {
    directionToSelect = -1;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  x = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
  module = _5Globs_pObjectModule;
                    /* end of inlined section */
  y = 0;
  outTiles = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/FindGoodLocationParams.h */
  level = 1;
                    /* end of inlined section */
  local_d0 = this;
  local_cc = fglp;
  local_c8 = outLoc;
  iVar12 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                     ((int)&_5Globs_pFixedWorld->__vtable +
                      (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
  pFVar10 = local_cc;
                    /* inlined from c:/eor/src2/games/sims/MSrc/FindGoodLocationParams.h */
                    /* end of inlined section */
  perimeter = iVar12 << 3;
                    /* inlined from c:/eor/src2/games/sims/MSrc/FindGoodLocationParams.h */
                    /* inlined from c:/eor/src2/games/sims/MSrc/FindGoodLocationParams.h */
  if ((*(int *)local_cc == 0) || (level = local_cc->fLevel, *(int *)local_cc == 0)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/FindGoodLocationParams.h */
    bVar2 = false;
  }
  else {
    puVar1 = (undefined *)((int)&(local_cc->fLocation).x.whole + 3);
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)&local_cc->fLocation & 7;
    startLoc = (FTilePt)((*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
                         in_t0 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                        *(ulong *)((int)&local_cc->fLocation - uVar4) >> uVar4 * 8);
    puVar1 = (undefined *)((int)&startLoc.x.whole + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar3);
    *puVar8 = *puVar8 & -1L << (uVar3 + 1) * 8 | (ulong)startLoc >> (7 - uVar3) * 8;
    bVar2 = true;
  }
                    /* end of inlined section */
  if (!bVar2) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pEORGlobals->__vtable->FreeSpriteRenderer)
              ((int)_5Globs_pEORGlobals->_pSelectedSims +
               *(short *)&_5Globs_pEORGlobals->__vtable->AllocSpriteRenderer + -0x24,&startLoc,
               _5Globs_pEORGlobals,pFVar10);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    lVar14 = (*(code *)_5Globs_pFixedWorld->__vtable->SetWallStorage)
                       ((int)&_5Globs_pFixedWorld->__vtable +
                        (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetWallStorage,&startLoc);
    if (lVar14 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      iVar12 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                         ((int)&_5Globs_pFixedWorld->__vtable +
                          (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
      __7CTilePtiii(&center,iVar12 / 2,iVar12 / 2,1);
      ToFTilePt__C7CTilePt((CTilePt *)aFStack_150);
      puVar1 = (undefined *)((int)&startLoc.x.whole + 3);
      uVar3 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar3);
      *puVar8 = *puVar8 & -1L << (uVar3 + 1) * 8 | (ulong)aFStack_150[0] >> (7 - uVar3) * 8;
      startLoc = aFStack_150[0];
      ___7CTilePt(&center,2);
    }
  }
  __7CTilePtRC7FTilePti(&center,&startLoc,level);
  iVar12 = GetX__C7CTilePt(&center);
  iVar13 = (*(code *)pcVar9->__vtable->GetFloor)
                     ((int)&pcVar9->__vtable + (int)*(short *)&pcVar9->__vtable->GetFloorLayer);
  if (iVar13 + -1 <= iVar12) {
    iVar12 = (*(code *)pcVar9->__vtable->GetFloor)
                       ((int)&pcVar9->__vtable + (int)*(short *)&pcVar9->__vtable->GetFloorLayer);
    SetX__7CTilePti(&center,iVar12 + -2);
  }
  iVar12 = GetX__C7CTilePt(&center);
  if (iVar12 < 1) {
    SetX__7CTilePti(&center,1);
  }
  iVar12 = GetY__C7CTilePt(&center);
  iVar13 = (*(code *)pcVar9->__vtable->GetFloor)
                     ((int)&pcVar9->__vtable + (int)*(short *)&pcVar9->__vtable->GetFloorLayer);
  if (iVar13 + -1 <= iVar12) {
    iVar12 = (*(code *)pcVar9->__vtable->GetFloor)
                       ((int)&pcVar9->__vtable + (int)*(short *)&pcVar9->__vtable->GetFloorLayer);
    SetY__7CTilePti(&center,iVar12 + -2);
  }
  iVar12 = GetY__C7CTilePt(&center);
  if (iVar12 < 1) {
    SetY__7CTilePti(&center,1);
    pcVar15 = pcVar9->__vtable;
  }
  else {
    pcVar15 = pcVar9->__vtable;
  }
  _origRoom = (*(code *)pcVar15[1].OutOfBounds)
                        ((int)&pcVar9->__vtable + (int)*(short *)&pcVar15[1].GetMaxSize,&center);
  if (0 < perimeter) {
    local_ac = &tw;
    local_a8 = aCStack_e0;
    do {
      __7CTilePtRC7CTilePt(&newLoc,&center);
      __7CTilePtiii((CTilePt *)&uStack_130,x,y,0);
      __apl__7CTilePtRC7CTilePt(&newLoc,(CTilePt *)&uStack_130);
      ___7CTilePt((CTilePt *)&uStack_130,2);
      lVar14 = (*(code *)pcVar9->__vtable->SetWall)
                         ((int)&pcVar9->__vtable + (int)*(short *)&pcVar9->__vtable->GetWall,&newLoc
                         );
      bVar2 = lVar14 == 0;
      if (bVar2) {
        outTiles = 0;
      }
      else {
        outTiles = outTiles + 1;
      }
      if (bVar2) {
        (*(code *)pcVar9->__vtable->ComputeArchValue)
                  (local_ac,(int)&pcVar9->__vtable + (int)*(short *)&pcVar9->__vtable->ComputeRooms,
                   &newLoc);
        bVar11 = HasDiagonal__C9TileWalls(local_ac);
        if (bVar11) {
          bVar2 = false;
        }
        else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/FindGoodLocationParams.h */
                    /* end of inlined section */
          if ((*(int *)&local_cc->fPreferEmptyTiles == 0) ||
             (lVar14 = (*(code *)module->__vtable[1].GetSimFlag)
                                 ((int)&module->__vtable +
                                  (int)*(short *)&module->__vtable[1].SetSimFlag,&newLoc),
             lVar14 == 0)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/FindGoodLocationParams.h */
                    /* end of inlined section */
            if ((*(int *)&local_cc->fStayInRoom == 0) ||
               (iVar12 = (*(code *)pcVar9->__vtable[1].OutOfBounds)
                                   ((int)&pcVar9->__vtable +
                                    (int)*(short *)&pcVar9->__vtable[1].GetMaxSize,&newLoc),
               iVar12 == _origRoom)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/FindGoodLocationParams.h */
                    /* end of inlined section */
              if ((*(int *)&local_cc->fEditableOnly == 0) ||
                 (lVar14 = (*(code *)pcVar9->__vtable[1].MayEditTile)
                                     ((int)&pcVar9->__vtable +
                                      (int)*(short *)&pcVar9->__vtable[1].GetLightLayer,&newLoc),
                 lVar14 != 0)) {
                pcVar6 = local_d0->_vb966;
                pcVar7 = pcVar6->__vtable;
                sVar5 = *(short *)&pcVar7->GetTemp;
                ToFTilePt__C7CTilePt(local_a8);
                lVar14 = (*(code *)pcVar7->GetAttr)
                                   ((int)&pcVar6->_vb899 + (int)sVar5,local_a8,level,0,0);
                if (lVar14 != 1) {
                  bVar2 = false;
                }
              }
              else {
                bVar2 = false;
              }
            }
            else {
              bVar2 = false;
            }
          }
          else {
            bVar2 = false;
          }
        }
        ___9TileWalls(&tw,2);
        if (bVar2) {
                    /* end of inlined section */
          ToFTilePt__C7CTilePt((CTilePt *)&uStack_130);
          puVar1 = (undefined *)((int)&(local_c8->x).whole + 3);
          uVar3 = (uint)puVar1 & 7;
          puVar8 = (ulong *)(puVar1 + -uVar3);
          *puVar8 = *puVar8 & -1L << (uVar3 + 1) * 8 | uStack_130 >> (7 - uVar3) * 8;
          uVar3 = (uint)local_c8 & 7;
          *(ulong *)((int)local_c8 - uVar3) =
               uStack_130 << uVar3 * 8 |
               *(ulong *)((int)local_c8 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
          ___7CTilePt(&newLoc,2);
          ___7CTilePt(&center,2);
          return true;
        }
      }
      if (directionToSelect == -1) {
        bVar2 = x < y;
        if (-x < y) {
          if (bVar2) goto LAB_00246f30;
          y = y + -1;
        }
        else if (bVar2) {
LAB_00246f30:
          if (y < -x) {
            if (bVar2) {
              y = y + 1;
            }
          }
          else {
            x = x + 1;
          }
        }
        else {
          x = x + -1;
        }
      }
      else if (directionToSelect == 2) {
LAB_00246fa8:
        if (x < 1) {
          x = 1 - x;
        }
        else {
          x = -x;
        }
      }
      else if (directionToSelect < 3) {
        if (directionToSelect == 0) {
LAB_00246f90:
          if (y < 1) {
            y = 1 - y;
          }
          else {
            y = -y;
          }
        }
      }
      else {
        if (directionToSelect == 4) goto LAB_00246f90;
        if (directionToSelect == 6) goto LAB_00246fa8;
      }
      ___7CTilePt(&newLoc,2);
    } while (outTiles < perimeter);
  }
  ___7CTilePt(&center,2);
  return false;
}

void cXObjectImpl::CenterHouseViewOnMe(bool asynchronous) {
  return;
}

Int cXObjectImpl::GetFrontFaceDirection() {
	ObjSelector *master;
	ObjSelector *this;
	ObjSelector *this;
	
  ObjectFolder *pOVar1;
  ObjectFolder__vtable *pOVar2;
  int iVar3;
  long lVar4;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
  pOVar1 = this->fObjSel->fFolder;
                    /* end of inlined section */
  pOVar2 = pOVar1->__vtable;
  lVar4 = (*(code *)pOVar2->GetPlaceholder)
                    ((int)&pOVar1->__vtable + (int)*(short *)&pOVar2->DoStream);
  if (lVar4 == 0) {
    iVar3 = 0;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
    iVar3 = (int)*(short *)(*(int *)((int)lVar4 + 0x18) + 0x7a);
  }
  return iVar3;
}

void cXObjectImpl::UpdateWallAdjacency() {
	cFixedWorld *world;
	StdPrm newWallAdj;
	CTilePt myLoc;
	cXObjectImpl *this;
	Int rot;
	TileWalls tw;
	
  ushort uVar1;
  cXObject__21_1030__vtable *pcVar2;
  cFixedWorld *pcVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  undefined8 unaff_s0;
  ushort uVar8;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  uint inRot;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  CTilePt myLoc;
  TileWalls tw;
  TileWalls TStack_b0;
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
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectImpl.h */
  pcVar2 = this->_vb966->__vtable;
  piVar5 = (int *)(*(code *)pcVar2->GetSelector)
                            ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->GetTreeTab);
  lVar7 = (**(code **)(*piVar5 + 0x1c))((int)piVar5 + (int)*(short *)(*piVar5 + 0x18),6);
  pcVar3 = _5Globs_pFixedWorld;
                    /* end of inlined section */
  if (lVar7 != 0) {
                    /* end of inlined section */
    pcVar2 = this->_vb966->__vtable;
    uVar8 = this->fData[5] & 0xffc0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)pcVar2[1].TestIntersection)
              (&myLoc,(int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2[1].IsInWorld);
    lVar7 = (*(code *)pcVar3->__vtable->SetWall)
                      ((int)&pcVar3->__vtable + (int)*(short *)&pcVar3->__vtable->GetWall,&myLoc);
    if (lVar7 == 0) {
      inRot = -(int)(short)this->fData[1] / 2 & 3;
      (*(code *)pcVar3->__vtable->ComputeArchValue)
                (&tw,(int)&pcVar3->__vtable + (int)*(short *)&pcVar3->__vtable->ComputeRooms,&myLoc)
      ;
      Rotate__9TileWallsi(&tw,inRot);
      bVar4 = HasWall__C9TileWalls16TileWallsSegment(&tw,kTopLeft);
      if (bVar4) {
        uVar8 = uVar8 | 1;
      }
      bVar4 = HasWall__C9TileWalls16TileWallsSegment(&tw,kTopRight);
      if (bVar4) {
        uVar8 = uVar8 | 4;
      }
      bVar4 = HasWall__C9TileWalls16TileWallsSegment(&tw,kBottomRight);
      if (bVar4) {
        uVar8 = uVar8 | 2;
      }
      bVar4 = HasWall__C9TileWalls16TileWallsSegment(&tw,kBottomLeft);
      if (bVar4) {
        uVar8 = uVar8 | 8;
      }
      iVar6 = GetLevel__C7CTilePt(&myLoc);
      if (iVar6 < 0) {
        iVar6 = GetLevel__C7CTilePt(&myLoc);
        SetLevel__7CTilePti(&myLoc,iVar6 + 1);
        (*(code *)pcVar3->__vtable->ComputeArchValue)
                  (&TStack_b0,
                   (int)&pcVar3->__vtable + (int)*(short *)&pcVar3->__vtable->ComputeRooms,&myLoc);
        __as__9TileWallsRC9TileWalls(&tw,&TStack_b0);
        ___9TileWalls(&TStack_b0,2);
        Rotate__9TileWallsi(&tw,inRot);
        bVar4 = HasWall__C9TileWalls16TileWallsSegment(&tw,kTopLeft);
        if (bVar4) {
          uVar8 = uVar8 | 0x10;
        }
        bVar4 = HasWall__C9TileWalls16TileWallsSegment(&tw,kBottomRight);
        if (bVar4) {
          uVar8 = uVar8 | 0x20;
        }
      }
      ___9TileWalls(&tw,2);
      uVar1 = this->fData[5];
    }
    else {
      uVar1 = this->fData[5];
    }
    if (uVar8 != uVar1) {
      this->fData[5] = uVar8;
      pcVar2 = this->_vb966->__vtable;
      (*(code *)pcVar2->GetInteractionLeader)
                ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->SetObjectProbe,6,0,0);
    }
    ___7CTilePt(&myLoc,2);
  }
  return;
}

bool cXObjectImpl::IsBeingDraggedAround() {
  return false;
}

Int cXObjectImpl::GetTileWidth() {
	cXPerson *person;
	cXObjectImpl *ptr;
	
  cXObject__21_1030__vtable *pcVar1;
  void *pvVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  pcVar1 = this->_vb966->__vtable;
  lVar4 = (*(code *)pcVar1[1].Pickup)((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].Turn);
  if (lVar4 == 2) {
                    /* inlined from SCID.h */
    if (this == (cXObjectImpl__127_901 *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = _dyncastimpl__7TreeSim4SCID(this->_vb966->_vb899,cXPersonID);
    }
                    /* end of inlined section */
    if (pvVar2 != (void *)0x0) {
      lVar5 = (**(code **)(*(int *)((int)pvVar2 + 4) + 0x18c))
                        ((int)pvVar2 + (int)*(short *)(*(int *)((int)pvVar2 + 4) + 0x188));
      lVar4 = 0;
      if (lVar5 != 0) goto LAB_00247344;
    }
    iVar3 = GetPersonWidth__8cXObject();
  }
  else {
    lVar4 = (long)(short)this->fDef->tileWidth;
    if (lVar4 == 0) {
      lVar4 = 0x10;
    }
LAB_00247344:
    iVar3 = (int)lVar4;
  }
  return iVar3;
}

Int cXObjectImpl::GetAgeInMinutes() {
	cSimulator *s;
	Int mins;
	Int hours;
	Int days;
	
  cXObject__21_1030__vtable *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int month1;
  int day1;
  
  pcVar1 = this->_vb966->__vtable;
  piVar2 = (int *)(*(code *)pcVar1[1].GetObjectSlot)
                            ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].CountObjectSlots
                            );
  iVar3 = (**(code **)(*piVar2 + 0x24))((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),5);
  iVar3 = iVar3 - (short)this->fData[0x15];
  iVar4 = (**(code **)(*piVar2 + 0x24))((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),0);
  iVar4 = iVar4 - (short)this->fData[0x18];
  iVar5 = (**(code **)(*piVar2 + 0x24))((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),8);
  month1 = (**(code **)(*piVar2 + 0x24))((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),7);
  day1 = (**(code **)(*piVar2 + 0x24))((int)piVar2 + (int)*(short *)(*piVar2 + 0x20),1);
  iVar5 = SubtractDates__8GameTimeiiiiii
                    (iVar5,month1,day1,(int)(short)this->fData[0x2d],(int)(short)this->fData[0x2e],
                     (int)(short)this->fData[0x2f]);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0x3c;
    iVar4 = iVar4 + -1;
  }
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0x18;
    iVar5 = iVar5 + -1;
  }
  return (iVar5 * 0x18 + iVar4) * 0x3c + iVar3;
}

cXObject* cXObjectImpl::GetInteractionLeader() {
	SInt16 intGrp;
	cXMTObject *mt;
	cXObjectImpl *ptr;
	cXMTObject *srch;
	
  short sVar1;
  cXObject__21_1030__vtable *pcVar2;
  int iVar3;
  void *pvVar4;
  code *pcVar5;
  cXObject__21_1030 *pcVar6;
  long lVar7;
  cXObject__21_1030 **ppcVar8;
  
  pcVar2 = this->_vb966->__vtable;
  lVar7 = (*(code *)pcVar2[1].GetFrontFaceDirection)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2[1].GetInteractionLeader);
  if (lVar7 == 0) {
    pcVar6 = this->_vb966;
  }
  else {
    pcVar2 = this->_vb966->__vtable;
    iVar3 = (*(code *)pcVar2[1].HandleError)
                      ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2[1].Error);
    sVar1 = *(short *)(iVar3 + 0x10);
    if (0 < sVar1) {
                    /* inlined from SCID.h */
      if (this == (cXObjectImpl__127_901 *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = _dyncastimpl__7TreeSim4SCID(this->_vb966->_vb899,cXMTObjectID);
      }
                    /* end of inlined section */
      if (pvVar4 == (void *)0x0) {
        return this->_vb966;
      }
      pcVar5 = *(code **)(*(int *)((int)pvVar4 + 4) + 0x14);
      iVar3 = (int)pvVar4 + (int)*(short *)(*(int *)((int)pvVar4 + 4) + 0x10);
      while (lVar7 = (*pcVar5)(iVar3), lVar7 != 0) {
        ppcVar8 = (cXObject__21_1030 **)lVar7;
        pcVar2 = (*ppcVar8)->__vtable;
        iVar3 = (*(code *)pcVar2[1].HandleError)
                          ((int)&(*ppcVar8)->_vb899 + (int)*(short *)&pcVar2[1].Error);
        if ((long)*(short *)(iVar3 + 0x10) == (long)(sVar1 * -0x10000 >> 0x10)) {
          if (lVar7 == 0) {
            return (cXObject__21_1030 *)0x0;
          }
          return *ppcVar8;
        }
        pcVar5 = *(code **)&ppcVar8[1]->field_0x1c;
        iVar3 = (int)ppcVar8 + (int)*(short *)&ppcVar8[1]->field_0x18;
      }
    }
    pcVar6 = this->_vb966;
  }
  return pcVar6;
}

bool cXObjectImpl::UserCanPickup() {
	s32 guid;
	CTilePt loc;
	int n;
	cXObject *obj;
	
  cXObject__21_1030__vtable *pcVar1;
  cXObject__21_1030 *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  CTilePt loc;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  gPlacementError = 0;
  gPlacementConflict = (cXObject__21_1030 *)0x0;
  if (*(int *)&(_5Globs_pEORGlobals->Cheats).gAllowMovingAllObjects == 0) {
    if ((this->fData[0x2b] & 2) == 0) {
      iVar5 = 0x25;
    }
    else {
      iVar5 = 0x26;
      if ((short)this->fData[0x3e] < 1) {
        pcVar1 = this->_vb966->__vtable;
        lVar6 = (*(code *)pcVar1->GetWallPlacementFlags)
                          ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1->GetFlags);
        iVar5 = 0x26;
        if (lVar6 == 0) {
          pcVar1 = this->_vb966->__vtable;
          iVar5 = (*(code *)pcVar1[1].GetHilite)
                            ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].SetHilite);
          iVar5 = iVar5 + -1;
          if (iVar5 < 0) {
            pcVar2 = this->_vb966;
          }
          else {
            pcVar2 = this->_vb966;
            while( true ) {
              lVar6 = (*(code *)pcVar2->__vtable[1].Dirty)
                                ((int)&pcVar2->_vb899 +
                                 (int)*(short *)&pcVar2->__vtable[1].UpdateSimFlags,iVar5);
              if ((lVar6 != 0) &&
                 (iVar3 = *(int *)((int)lVar6 + 4),
                 lVar6 = (**(code **)(iVar3 + 0x134))((int)lVar6 + (int)*(short *)(iVar3 + 0x130)),
                 lVar6 == 0)) {
                return false;
              }
              iVar5 = iVar5 + -1;
              if (iVar5 < 0) break;
              pcVar2 = this->_vb966;
            }
            pcVar2 = this->_vb966;
          }
          iVar5 = (*(code *)pcVar2->__vtable[1].HandleError)
                            ((int)&pcVar2->_vb899 + (int)*(short *)&pcVar2->__vtable[1].Error);
          if ((*(int *)(iVar5 + 0x1c) != -0x3a0ba55d) && (*(int *)(iVar5 + 0x1c) != 0x39e377cf)) {
            pcVar1 = this->_vb966->__vtable;
            (*(code *)pcVar1[1].TestIntersection)
                      (&loc,(int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].IsInWorld);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
            lVar6 = (*(code *)_5Globs_pFixedWorld->__vtable->HasWalls)
                              ((int)&_5Globs_pFixedWorld->__vtable +
                               (int)*(short *)&_5Globs_pFixedWorld->__vtable->HasWalls,&loc);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
            if ((lVar6 == 0) &&
               (lVar6 = (*(code *)_5Globs_pFixedWorld->__vtable[1].MayEditTile)
                                  ((int)&_5Globs_pFixedWorld->__vtable +
                                   (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].GetLightLayer,
                                   &loc), lVar6 == 0)) {
              gPlacementError = 0x27;
              ___7CTilePt(&loc,2);
              return false;
            }
            ___7CTilePt(&loc,2);
          }
          goto LAB_00247758;
        }
      }
    }
    bVar4 = false;
    gPlacementError = iVar5;
  }
  else {
LAB_00247758:
    bVar4 = true;
  }
  return bVar4;
}

bool cXObjectImpl::UserCanDelete() {
	int i;
	
  cXObject__21_1030__vtable *pcVar1;
  cXObject__21_1030 *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  if (*(int *)&(_5Globs_pEORGlobals->Cheats).gAllowMovingAllObjects == 0) {
    bVar3 = UserCanPickup__12cXObjectImpl(this);
    bVar4 = false;
    if (bVar3) {
      if ((this->fData[0x2b] & 8) != 0) {
        pcVar1 = this->_vb966->__vtable;
        iVar5 = (*(code *)pcVar1[1].GetHilite)
                          ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].SetHilite);
        iVar5 = iVar5 + -1;
        if (iVar5 < 0) {
          return true;
        }
        pcVar2 = this->_vb966;
        while( true ) {
          lVar6 = (*(code *)pcVar2->__vtable[1].Dirty)
                            ((int)&pcVar2->_vb899 +
                             (int)*(short *)&pcVar2->__vtable[1].UpdateSimFlags,iVar5);
          iVar5 = iVar5 + -1;
          if (lVar6 != 0) break;
          if (iVar5 < 0) goto LAB_00247808;
          pcVar2 = this->_vb966;
        }
      }
      bVar4 = false;
    }
  }
  else {
LAB_00247808:
    bVar4 = true;
  }
  return bVar4;
}

bool cXObjectImpl::IsDeletedByEvict() {
  cXObject__21_1030__vtable *pcVar1;
  bool bVar2;
  long lVar3;
  
  pcVar1 = this->_vb966->__vtable;
  lVar3 = (*(code *)pcVar1[1].Pickup)((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].Turn);
  if (lVar3 == 2) {
    bVar2 = true;
  }
  else {
    pcVar1 = this->_vb966->__vtable;
    lVar3 = (*(code *)pcVar1[1].GetPrevObjectSibling)
                      ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].GetNextObjectSibling);
    bVar2 = false;
    if (lVar3 == 0) {
      bVar2 = (this->fData[0x2b] & 0x10) == 0;
    }
  }
  return bVar2;
}

bool cXObjectImpl::UserCanPlace(FTilePt &newLoc, int inLevel, cXObject *ontop, Int slotNum) {
	FInt *this;
	ObjectSlot *slot;
	ObjectSlot *this;
	
  short sVar1;
  cFixedWorld__vtable *pcVar2;
  cXObject__21_1030__vtable *pcVar3;
  bool bVar4;
  bool bVar5;
  cFixedWorld__vtable **ppcVar6;
  long lVar7;
  int iVar8;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  CTilePt aCStack_d0 [5];
  CTilePt aCStack_c0 [5];
  cXObjectImpl__127_901 *local_b0;
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
  
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  bVar5 = false;
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  bVar4 = false;
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  pcVar2 = _5Globs_pFixedWorld->__vtable;
  sVar1 = *(short *)&pcVar2->GetWall;
  gPlacementError = 0;
  gPlacementConflict = (cXObject__21_1030 *)0x0;
  ppcVar6 = &_5Globs_pFixedWorld->__vtable;
  local_b0 = this;
  __7CTilePtRC7FTilePti(aCStack_d0,newLoc,1);
  lVar7 = (*(code *)pcVar2->SetWall)((int)ppcVar6 + (int)sVar1,aCStack_d0);
  if (lVar7 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    pcVar2 = _5Globs_pFixedWorld->__vtable;
    bVar4 = true;
    sVar1 = *(short *)&pcVar2[1].GetLightLayer;
    ppcVar6 = &_5Globs_pFixedWorld->__vtable;
    __7CTilePtRC7FTilePti(aCStack_c0,newLoc,1);
    lVar7 = (*(code *)pcVar2[1].MayEditTile)((int)ppcVar6 + (int)sVar1,aCStack_c0);
    if (lVar7 == 0) {
      bVar5 = true;
    }
  }
  else {
    bVar5 = true;
  }
  if (bVar4) {
    ___7CTilePt(aCStack_c0,2);
  }
  ___7CTilePt(aCStack_d0,2);
  iVar8 = 1;
  if (!bVar5) {
    pcVar3 = local_b0->_vb966->__vtable;
    lVar7 = (*(code *)pcVar3->GetAttr)
                      ((int)&local_b0->_vb966->_vb899 + (int)*(short *)&pcVar3->GetTemp,newLoc,
                       inLevel,ontop,slotNum);
    if (lVar7 == 0) {
      return false;
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
    if (((newLoc->x).whole & 0xfU) != 8) {
      return false;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
    if (((newLoc->y).whole & 0xfU) != 8) {
      return false;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    if (*(int *)&(_5Globs_pEORGlobals->Cheats).gAllowMovingAllObjects != 0) {
      return true;
    }
    if (ontop == (cXObject__21_1030 *)0x0) {
      return true;
    }
    lVar7 = (*(code *)ontop->__vtable[1].GetMiscFlag)
                      ((int)&ontop->_vb899 + (int)*(short *)&ontop->__vtable[1].SetMiscFlag,slotNum)
    ;
    if (lVar7 == 0) {
      return true;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
    iVar8 = *(int *)((int)lVar7 + 0x18);
                    /* end of inlined section */
    if (7 < iVar8) {
      return true;
    }
    if (iVar8 < 5) {
      return true;
    }
    iVar8 = 0xb;
  }
  gPlacementError = iVar8;
  return false;
}

void cXObjectImpl::UserPlace(FTilePt &newLoc, int inLevel, cXObject *ontop, Int slotNum) {
	int N;
	int i;
	
  cXObject__21_1030__vtable *pcVar1;
  cXObject__21_1030 *pcVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  
  pcVar1 = this->_vb966->__vtable;
  (*(code *)pcVar1->GetAdultAnimTable)
            ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1->GetModule,newLoc,inLevel,ontop,
             slotNum);
  pcVar1 = this->_vb966->__vtable;
  lVar5 = (*(code *)pcVar1[1].GetFrontFaceDirection)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].GetInteractionLeader);
  if (lVar5 == 0) {
    pcVar1 = this->_vb966->__vtable;
    iVar6 = 0;
    (*(code *)pcVar1->GetInteractionLeader)
              ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1->SetObjectProbe,0xb,0,0);
    pcVar1 = this->_vb966->__vtable;
    iVar3 = (*(code *)pcVar1[1].GetHilite)
                      ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].SetHilite);
    if (0 < iVar3) {
      pcVar2 = this->_vb966;
      while( true ) {
        lVar5 = (*(code *)pcVar2->__vtable[1].Dirty)
                          ((int)&pcVar2->_vb899 + (int)*(short *)&pcVar2->__vtable[1].UpdateSimFlags
                           ,iVar6);
        if (lVar5 != 0) {
          pcVar1 = this->_vb966->__vtable;
          iVar4 = (*(code *)pcVar1[1].Dirty)
                            ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].UpdateSimFlags,
                             iVar6);
          (**(code **)(*(int *)(iVar4 + 4) + 0xdc))
                    (iVar4 + *(short *)(*(int *)(iVar4 + 4) + 0xd8),0xb,0,0);
        }
        iVar6 = iVar6 + 1;
        if (iVar3 <= iVar6) break;
        pcVar2 = this->_vb966;
      }
    }
  }
  return;
}

void cXObjectImpl::UserPickup(bool single) {
	int N;
	int i;
	
  cXObject__21_1030__vtable *pcVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  cXObject__21_1030 *pcVar5;
  int iVar6;
  
  pcVar1 = this->_vb966->__vtable;
  lVar4 = (*(code *)pcVar1[1].GetFrontFaceDirection)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].GetInteractionLeader);
  if (lVar4 == 0) {
    pcVar1 = this->_vb966->__vtable;
    iVar6 = 0;
    (*(code *)pcVar1->GetInteractionLeader)
              ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1->SetObjectProbe,0xc,0,0);
    pcVar1 = this->_vb966->__vtable;
    iVar2 = (*(code *)pcVar1[1].GetHilite)
                      ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].SetHilite);
    if (iVar2 < 1) {
      pcVar5 = this->_vb966;
    }
    else {
      pcVar5 = this->_vb966;
      while( true ) {
        lVar4 = (*(code *)pcVar5->__vtable[1].Dirty)
                          ((int)&pcVar5->_vb899 + (int)*(short *)&pcVar5->__vtable[1].UpdateSimFlags
                           ,iVar6);
        if (lVar4 != 0) {
          pcVar1 = this->_vb966->__vtable;
          iVar3 = (*(code *)pcVar1[1].Dirty)
                            ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].UpdateSimFlags,
                             iVar6);
          (**(code **)(*(int *)(iVar3 + 4) + 0xdc))
                    (iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0xd8),0xc,0,0);
        }
        iVar6 = iVar6 + 1;
        if (iVar2 <= iVar6) break;
        pcVar5 = this->_vb966;
      }
      pcVar5 = this->_vb966;
    }
  }
  else {
    pcVar5 = this->_vb966;
  }
  (*(code *)pcVar5->__vtable->GetData)
            ((int)&pcVar5->_vb899 + (int)*(short *)&pcVar5->__vtable->GetRect);
  return;
}

bool cXObjectImpl::IsFromCatalog() {
	ObjDefinition *def;
	
  cXObject__21_1030__vtable *pcVar1;
  bool bVar2;
  int iVar3;
  
  pcVar1 = this->_vb966->__vtable;
  iVar3 = (*(code *)pcVar1[1].HandleError)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].Error);
  bVar2 = true;
  if ((*(short *)(iVar3 + 0x4e) == 0) && (bVar2 = true, *(short *)(iVar3 + 0x50) == 0)) {
    bVar2 = *(short *)(iVar3 + 0x8a) != 0;
  }
  return bVar2;
}

bool cXObjectImpl::ShouldAutoRotate() {
	cXMTObject *mtObj;
	cXMTObjectImpl *srch1;
	cXMTObjectImpl *srch2;
	cXObjectImpl *ptr;
	
  cXObject__21_1030__vtable *pcVar1;
  int iVar2;
  bool bVar3;
  void *pvVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  
  pcVar1 = this->_vb966->__vtable;
  uVar6 = (*(code *)pcVar1[1].EnableSim)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].SimEnabled);
  if ((uVar6 & 0xf) == 0) {
    pcVar1 = this->_vb966->__vtable;
    lVar7 = (*(code *)pcVar1[1].GetFrontFaceDirection)
                      ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].GetInteractionLeader);
    bVar3 = false;
    if (lVar7 != 0) {
                    /* inlined from SCID.h */
      if (this == (cXObjectImpl__127_901 *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = _dyncastimpl__7TreeSim4SCID(this->_vb966->_vb899,cXMTObjectID);
      }
                    /* end of inlined section */
      lVar7 = (**(code **)(*(int *)((int)pvVar4 + 4) + 0x14))
                        ((int)pvVar4 + (int)*(short *)(*(int *)((int)pvVar4 + 4) + 0x10));
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
      lVar9 = 0;
      if (lVar7 != 0) {
        iVar5 = *(int *)((int)lVar7 + 4);
        lVar9 = (**(code **)(iVar5 + 100))((int)lVar7 + (int)*(short *)(iVar5 + 0x60));
      }
                    /* end of inlined section */
      bVar3 = false;
      if (lVar9 != 0) {
        iVar5 = *(int *)lVar9;
        while( true ) {
          iVar2 = *(int *)(*(int *)(iVar5 + 4) + 4);
          uVar6 = (**(code **)(iVar2 + 0x31c))(*(int *)(iVar5 + 4) + (int)*(short *)(iVar2 + 0x318))
          ;
          bVar3 = true;
          if ((uVar6 & 0xf) != 0) break;
          lVar7 = (**(code **)(*(int *)((int)pvVar4 + 4) + 0x14))
                            ((int)pvVar4 + (int)*(short *)(*(int *)((int)pvVar4 + 4) + 0x10));
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
          if (lVar7 == 0) {
            lVar7 = 0;
          }
          else {
            iVar5 = *(int *)((int)lVar7 + 4);
            lVar7 = (**(code **)(iVar5 + 100))((int)lVar7 + (int)*(short *)(iVar5 + 0x60));
          }
                    /* end of inlined section */
          piVar8 = (int *)lVar9;
          if (lVar7 == 0) {
            iVar5 = piVar8[1];
          }
          else {
            iVar5 = *piVar8;
            while( true ) {
              if (((*(ushort *)(iVar5 + 0x7a) & 0x800) != 0) &&
                 ((*(ushort *)(*(int *)lVar7 + 0x7a) & 0x800) == 0)) {
                return true;
              }
              iVar5 = ((int *)lVar7)[1];
              iVar2 = *(int *)(iVar5 + 4);
              lVar7 = (**(code **)(iVar2 + 0x1c))(iVar5 + *(short *)(iVar2 + 0x18));
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
              if (lVar7 == 0) {
                lVar7 = 0;
              }
              else {
                iVar5 = *(int *)((int)lVar7 + 4);
                lVar7 = (**(code **)(iVar5 + 100))((int)lVar7 + (int)*(short *)(iVar5 + 0x60));
              }
                    /* end of inlined section */
              if (lVar7 == 0) break;
              iVar5 = *piVar8;
            }
            iVar5 = piVar8[1];
          }
          lVar7 = (**(code **)(*(int *)(iVar5 + 4) + 0x1c))
                            (iVar5 + *(short *)(*(int *)(iVar5 + 4) + 0x18));
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
          lVar9 = 0;
          if (lVar7 != 0) {
            iVar5 = *(int *)((int)lVar7 + 4);
            lVar9 = (**(code **)(iVar5 + 100))((int)lVar7 + (int)*(short *)(iVar5 + 0x60));
          }
                    /* end of inlined section */
          if (lVar9 == 0) {
            return false;
          }
          iVar5 = *(int *)lVar9;
        }
      }
    }
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}

void cXObjectImpl::AdvanceGraphic(int inc, bool allInGroup) {
	SInt16 numGraphics;
	SInt16 newGraphic;
	cXMTObject *mtThis;
	cXObjectImpl *ptr;
	int group;
	int curGroup;
	cXMTObject *this;
	
  short sVar1;
  cXObject__21_1030__vtable *pcVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  ushort uVar9;
  long lVar10;
  
  uVar9 = this->fData[0];
  pcVar2 = this->_vb966->__vtable;
  iVar3 = (*(code *)pcVar2[1].HandleError)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2[1].Error);
  lVar10 = (long)(((short)uVar9 + inc) * 0x10000 >> 0x10);
  if (lVar10 < 0) {
    lVar10 = (long)((*(short *)(iVar3 + 8) + -1) * 0x10000 >> 0x10);
  }
                    /* inlined from SCID.h */
  if (*(short *)(iVar3 + 8) <= lVar10) {
    lVar10 = 0;
  }
  if (this == (cXObjectImpl__127_901 *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = _dyncastimpl__7TreeSim4SCID(this->_vb966->_vb899,cXMTObjectID);
  }
  uVar9 = (ushort)lVar10;
                    /* end of inlined section */
  if (allInGroup) {
    if (pvVar4 == (void *)0x0) {
      this->fData[0] = uVar9;
      goto LAB_00248088;
    }
    pcVar2 = this->_vb966->__vtable;
    iVar3 = (*(code *)pcVar2[1].HandleError)
                      ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2[1].Error);
    sVar1 = *(short *)(iVar3 + 0x10);
    lVar10 = (long)sVar1;
    if ((long)sVar1 < 0) {
      lVar10 = (long)-(int)sVar1;
    }
    lVar6 = (**(code **)(*(int *)((int)pvVar4 + 4) + 0x14))
                      ((int)pvVar4 + (int)*(short *)(*(int *)((int)pvVar4 + 4) + 0x10));
    if (lVar6 != 0) {
      iVar3 = *(int *)lVar6;
      while( true ) {
        iVar3 = (**(code **)(*(int *)(iVar3 + 4) + 0x2a4))
                          (iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0x2a0));
        sVar1 = *(short *)(iVar3 + 0x10);
        lVar7 = (long)sVar1;
        if ((long)sVar1 < 0) {
          lVar7 = (long)-(int)sVar1;
        }
        piVar8 = (int *)lVar6;
        if ((lVar10 == 0) || (lVar10 == lVar7)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
          iVar3 = _pGifTag0;
          if (lVar6 != 0) {
            piVar5 = (int *)(**(code **)(piVar8[1] + 100))
                                      ((int)piVar8 + (int)*(short *)(piVar8[1] + 0x60));
            iVar3 = *piVar5;
          }
          *(ushort *)(iVar3 + 0x26) = uVar9;
          iVar3 = *(int *)(*piVar8 + 4);
          (**(code **)(iVar3 + 100))(*piVar8 + (int)*(short *)(iVar3 + 0x60),0);
          iVar3 = piVar8[1];
        }
        else {
          iVar3 = piVar8[1];
        }
        lVar6 = (**(code **)(iVar3 + 0x1c))((int)piVar8 + (int)*(short *)(iVar3 + 0x18));
        if (lVar6 == 0) break;
        iVar3 = *(int *)lVar6;
      }
    }
  }
  this->fData[0] = uVar9;
LAB_00248088:
  this->fData[0x13] = 2;
  pcVar2 = this->_vb966->__vtable;
  (*(code *)pcVar2->RunTree)((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar2->IsSpriteVisible,0)
  ;
  return;
}

TileWallsSegment cXObjectImpl::GetRequiredSegment() {
	TileWallsSegment seg;
	
  cXObject__21_1030__vtable *pcVar1;
  int iVar2;
  TileWallsSegment inSegment;
  ulong uVar3;
  int iVar4;
  
  inSegment = kNoWalls;
  pcVar1 = this->_vb966->__vtable;
  uVar3 = (*(code *)pcVar1[1].EnableSim)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].SimEnabled);
  uVar3 = uVar3 & 5;
  if (uVar3 == 1) {
    inSegment = kTopRight;
  }
  else if ((1 < uVar3) && (uVar3 == 4)) {
    inSegment = kBottomLeft;
  }
  if (inSegment != kNoWalls) {
    iVar2 = (uint)this->fData[1] << 0x10;
    iVar4 = iVar2 >> 0x10;
    if (iVar4 != 0) {
      inSegment = RotateSegment__9TileWalls16TileWallsSegmenti
                            (inSegment,iVar4 - (iVar2 >> 0x1f) >> 1);
    }
  }
  return inSegment;
}

bool cXObjectImpl::CanChooseAutonomously() {
	TreeTable *treeTab;
	int validEntries;
	int i;
	TreeTable *this;
	VECTOR<TreeTableEntry> *this;
	TreeTableEntry *entry;
	TreeTable *this;
	Int num;
	VECTOR<TreeTableEntry> *this;
	unsigned int n;
	VECTOR<TreeTableEntry> *this;
	VECTOR<TreeTableEntry> *this;
	TreeTableEntry *this;
	TreeTableEntry *this;
	
  cXObject__21_1030__vtable *pcVar1;
  cXObject__21_1030 *pcVar2;
  int iVar3;
  bool bVar4;
  cXObject__21_1030 *pcVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pcVar1 = this->_vb966->__vtable;
  lVar6 = (*(code *)pcVar1[1].Pickup)((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].Turn);
  bVar4 = false;
  if (lVar6 != 7) {
    pcVar1 = this->_vb966->__vtable;
    pcVar5 = (cXObject__21_1030 *)
             (*(code *)pcVar1->IsSupport)
                       ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1->GetBuildModeType);
    pcVar2 = this->_vb966;
    bVar4 = false;
    if (pcVar2 == pcVar5) {
      lVar6 = (*(code *)pcVar2->__vtable[1].GetFnTable)
                        ((int)&pcVar2->_vb899 + (int)*(short *)&pcVar2->__vtable[1].ForceLocation);
      if (lVar6 == 0) {
        bVar4 = false;
      }
      else {
        iVar8 = 0;
        iVar3 = *(int *)lVar6;
        iVar9 = 0;
        while( true ) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
          iVar7 = 0;
          if (iVar3 != 0) {
            iVar7 = *(int *)(iVar3 + -4);
          }
                    /* end of inlined section */
          bVar4 = iVar9 != 0;
          if (iVar7 <= iVar8) break;
                    /* inlined from c:/eor/src2/games/sims/MSrc/TreeTab.h */
          iVar7 = 0;
          if (-1 < iVar8) {
            iVar7 = 0;
            if (iVar3 != 0) {
              iVar7 = *(int *)(iVar3 + -4);
            }
            if (iVar8 < iVar7) {
              iVar7 = iVar8 * 0x1c + iVar3;
            }
            else {
              iVar7 = 0;
            }
          }
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
                    /* end of inlined section */
          iVar8 = iVar8 + 1;
          if (*(short *)(iVar7 + 0x12) < 100) {
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
                    /* end of inlined section */
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
                    /* end of inlined section */
            if ((*(ushort *)(iVar7 + 0xe) >> 7 & 1) == 0) {
              iVar9 = iVar9 + 1;
            }
          }
        }
      }
    }
  }
  return bVar4;
}

void cXObjectImpl::UpdateSimFlags() {
  short sVar1;
  ObjectModule *pOVar2;
  cXObject__21_1030__vtable *pcVar3;
  ObjectModule__vtable *pOVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  pOVar2 = this->fModule;
  pcVar3 = this->_vb966->__vtable;
  pOVar4 = pOVar2->__vtable;
  sVar1 = *(short *)&pOVar4[1].IsBuyAndBuildDisabled;
  uVar5 = (*(code *)pcVar3[1].UserCanPlace)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3[1].IsPartOfMe);
  pcVar3 = this->_vb966->__vtable;
  uVar6 = (*(code *)pcVar3->IsFromCatalog)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3->IsDeletedByEvict);
  (*(code *)pOVar4[1].SetIdleStatus)((int)&pOVar2->__vtable + (int)sVar1,uVar5,2,uVar6);
  pOVar2 = this->fModule;
  pcVar3 = this->_vb966->__vtable;
  pOVar4 = pOVar2->__vtable;
  sVar1 = *(short *)&pOVar4[1].IsBuyAndBuildDisabled;
  uVar5 = (*(code *)pcVar3[1].UserCanPlace)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3[1].IsPartOfMe);
  pcVar3 = this->_vb966->__vtable;
  uVar6 = (*(code *)pcVar3[1].GetContainedSlotNum)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3[1].GetContainerID);
  (*(code *)pOVar4[1].SetIdleStatus)((int)&pOVar2->__vtable + (int)sVar1,uVar5,8,uVar6);
  return;
}

Int cXObjectImpl::GetWallBlockFlags() {
	Int flags;
	Int objDirection;
	
  uint uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)(short)this->fData[0x35];
  if (uVar2 != 0) {
    uVar1 = (int)(short)this->fData[0x35] << ((int)(short)this->fData[1] & 0x1fU);
    uVar2 = (long)(int)(uVar1 | (int)uVar1 >> 8) & 0xff;
  }
  return (int)uVar2;
}

Int cXObject::GetWallBlockFlagsAtTile(CTilePt &pt, int direction) {
	Int flags;
	ObjectIterator oi;
	Int blockFlags;
	
  byte bVar1;
  cFixedWorld__vtable *pcVar2;
  ObjectModule__vtable *pOVar3;
  cFixedWorld *pcVar4;
  ObjectModule *pOVar5;
  short sVar6;
  byte *pbVar7;
  cXObject__129_882 *object;
  int iVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  ObjectIterator oi;
  
  pOVar5 = _5Globs_pObjectModule;
  pcVar4 = _5Globs_pFixedWorld;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  lVar10 = (*(code *)_5Globs_pFixedWorld->__vtable->SetWall)
                     ((int)&_5Globs_pFixedWorld->__vtable +
                      (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetWall,pt);
  uVar12 = 0;
  if (lVar10 == 0) {
    pcVar2 = pcVar4->__vtable;
    pbVar7 = (byte *)(*(code *)pcVar2[1].DoCommand)
                               ((int)&pcVar4->__vtable + (int)*(short *)&pcVar2[1].Load,pt);
    bVar1 = *pbVar7;
    pOVar3 = pOVar5->__vtable;
    uVar12 = (bVar1 & 1) << 6;
    sVar6 = *(short *)&pOVar3->SetSelectedPerson;
    if ((bVar1 & 2) != 0) {
      uVar12 = uVar12 | 1;
    }
    uVar12 = bVar1 & 4 | uVar12;
    if ((bVar1 & 8) != 0) {
      uVar12 = uVar12 | 0x10;
    }
    uVar11 = (*(code *)pOVar3[1].GetSimFlag)
                       ((int)&pOVar5->__vtable + (int)*(short *)&pOVar3[1].SetSimFlag,pt);
    object = (cXObject__129_882 *)
             (*(code *)pOVar3->AdvanceSelectedPerson)((int)&pOVar5->__vtable + (int)sVar6,uVar11);
    __14ObjectIteratorP8cXObjectQ214ObjectIterator11IterateType(&oi,object,kAll);
    sVar6 = _pOutVerts;
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
                    /* end of inlined section */
    while (_pOutVerts = sVar6, oi.fCurrent != (cXObject__15_2008 *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
      if (oi.fCurrent != (cXObject__15_2008 *)0x0) {
        iVar8 = (*(code *)(oi.fCurrent)->__vtable[1].GetObjectImplementation)
                          ((int)&(oi.fCurrent)->_vb3534 +
                           (int)*(short *)&(oi.fCurrent)->__vtable[1].AdvanceGraphic);
        sVar6 = *(short *)(iVar8 + 0x90);
      }
      if (sVar6 != 0) {
                    /* end of inlined section */
        uVar9 = (*(code *)(oi.fCurrent)->__vtable[1].IsBurning)
                          ((int)&(oi.fCurrent)->_vb3534 +
                           (int)*(short *)&(oi.fCurrent)->__vtable[1].IsDirty);
        uVar12 = uVar12 | uVar9;
      }
      __pp__14ObjectIterator(&oi);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
                    /* end of inlined section */
      sVar6 = _pOutVerts;
    }
    if (direction != 0) {
      uVar12 = uVar12 << (8U - direction & 0x1f);
      uVar12 = (uVar12 | (int)uVar12 >> 8) & 0xff;
    }
  }
  return uVar12;
}

int cXObjectImpl::GetLevel() {
  return this->fLevel;
}

void cXObjectImpl::SetLevel(int inLevel) {
  this->fLevel = inLevel;
  return;
}

CTilePt cXObjectImpl::GetCTilePt() {
  int in_a1_lo;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
  __7CTilePtiii((CTilePt *)this,*(int *)(in_a1_lo + 0xcc) >> 4,*(int *)(in_a1_lo + 200) >> 4,
                *(int *)(in_a1_lo + 0xe0));
  return SUB43(this,0);
}

bool cXObjectImpl::IsSpriteVisible(SInt16 spriteID) {
	SInt16 baseID;
	
  ushort uVar1;
  int iVar2;
  
  iVar2 = (int)(short)spriteID;
  if (this->fNumDynSprites != 0) {
    uVar1 = this->fDef->dynSpriteBaseID;
    if ((long)(short)uVar1 <= (long)iVar2) {
      if ((long)iVar2 < (long)((int)(short)uVar1 + (int)(short)this->fNumDynSprites)) {
        return this->fDynSpriteFlags[iVar2 - (short)uVar1] != 0;
      }
      return true;
    }
  }
  return true;
}

bool cXObjectImpl::RunTree(ObjEntryPoint ep, SInt16 stackObjectID, StdPrm *locals) {
  cXObject__21_1030__vtable *pcVar1;
  bool bVar2;
  int *piVar3;
  Behavior *beh;
  long lVar4;
  
  pcVar1 = this->_vb966->__vtable;
  piVar3 = (int *)(*(code *)pcVar1->GetSelector)
                            ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1->GetTreeTab);
  lVar4 = (**(code **)(*piVar3 + 0x1c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x18),ep);
  bVar2 = false;
  if (lVar4 != 0) {
    pcVar1 = this->_vb966->__vtable;
    beh = (Behavior *)
          (*(code *)pcVar1[1].SetData)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].IsOccupied);
    bVar2 = RunCheckTree__11TreeSimImplP8BehaviorssPs
                      (this->_vb1168,beh,stackObjectID,(ushort)lVar4,locals);
  }
  return bVar2;
}

void cXObjectImpl::SetDrawLabel(bool drawLabel) {
  cXObject__21_1030__vtable *pcVar1;
  
  if ((long)*(int *)&this->mDrawLabel != (long)drawLabel) {
    *(int *)&this->mDrawLabel = (int)drawLabel;
    pcVar1 = this->_vb966->__vtable;
    (*(code *)pcVar1->RunTree)
              ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1->IsSpriteVisible,0);
  }
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

ObjectSlot* ObjectSlot * copy_backward<ObjectSlot *, ObjectSlot *>(ObjectSlot *first, ObjectSlot *last, ObjectSlot *result) {
  float *pfVar1;
  Slot__vtable **ppSVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  Slot__vtable *pSVar6;
  ulong *puVar7;
  ulong in_v1;
  ulong uVar8;
  ObjectSlot *pOVar9;
  ObjectSlot *pOVar10;
  ulong in_a3;
  ulong in_t0;
  ulong in_t1;
  
  pOVar10 = result;
  if (first != last) {
    do {
      result = pOVar10 + -1;
      pOVar9 = last + -1;
      pSVar6 = pOVar10[-1].field0_0x0.__vtable;
      puVar3 = (undefined *)((int)&last[-1].field0_0x0.yoffset + 3);
      uVar4 = (uint)puVar3 & 7;
      uVar5 = (uint)pOVar9 & 7;
      uVar8 = (*(long *)(puVar3 + -uVar4) << (7 - uVar4) * 8 |
              in_v1 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
              *(ulong *)((int)pOVar9 - uVar5) >> uVar5 * 8;
      puVar3 = (undefined *)((int)&last[-1].field0_0x0.nameIndex + 3);
      uVar4 = (uint)puVar3 & 7;
      pfVar1 = &last[-1].field0_0x0.altOffset;
      uVar5 = (uint)pfVar1 & 7;
      in_a3 = (*(long *)(puVar3 + -uVar4) << (7 - uVar4) * 8 |
              in_a3 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
              *(ulong *)((int)pfVar1 - uVar5) >> uVar5 * 8;
      uVar4 = (uint)&last[-1].field_0x17 & 7;
      ppSVar2 = &last[-1].field0_0x0.__vtable;
      uVar5 = (uint)ppSVar2 & 7;
      in_t0 = (*(long *)(&last[-1].field_0x17 + -uVar4) << (7 - uVar4) * 8 |
              in_t0 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
              *(ulong *)((int)ppSVar2 - uVar5) >> uVar5 * 8;
      puVar3 = (undefined *)((int)&last[-1].maximumSize + 3);
      uVar4 = (uint)puVar3 & 7;
      uVar5 = (uint)&last[-1].height & 7;
      in_t1 = (*(long *)(puVar3 + -uVar4) << (7 - uVar4) * 8 |
              in_t1 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
              *(ulong *)((int)&last[-1].height - uVar5) >> uVar5 * 8;
      puVar3 = (undefined *)((int)&pOVar10[-1].field0_0x0.yoffset + 3);
      uVar4 = (uint)puVar3 & 7;
      puVar7 = (ulong *)(puVar3 + -uVar4);
      *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | uVar8 >> (7 - uVar4) * 8;
      uVar4 = (uint)result & 7;
      *(ulong *)((int)result - uVar4) =
           uVar8 << uVar4 * 8 |
           *(ulong *)((int)result - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      puVar3 = (undefined *)((int)&pOVar10[-1].field0_0x0.nameIndex + 3);
      uVar4 = (uint)puVar3 & 7;
      puVar7 = (ulong *)(puVar3 + -uVar4);
      *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | in_a3 >> (7 - uVar4) * 8;
      pfVar1 = &pOVar10[-1].field0_0x0.altOffset;
      uVar4 = (uint)pfVar1 & 7;
      puVar7 = (ulong *)((int)pfVar1 - uVar4);
      *puVar7 = in_a3 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      uVar4 = (uint)&pOVar10[-1].field_0x17 & 7;
      puVar7 = (ulong *)(&pOVar10[-1].field_0x17 + -uVar4);
      *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | in_t0 >> (7 - uVar4) * 8;
      ppSVar2 = &pOVar10[-1].field0_0x0.__vtable;
      uVar4 = (uint)ppSVar2 & 7;
      puVar7 = (ulong *)((int)ppSVar2 - uVar4);
      *puVar7 = in_t0 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      puVar3 = (undefined *)((int)&pOVar10[-1].maximumSize + 3);
      uVar4 = (uint)puVar3 & 7;
      puVar7 = (ulong *)(puVar3 + -uVar4);
      *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | in_t1 >> (7 - uVar4) * 8;
      uVar4 = (uint)&pOVar10[-1].height & 7;
      puVar7 = (ulong *)((int)&pOVar10[-1].height - uVar4);
      *puVar7 = in_t1 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      in_v1 = (ulong)last[-1].flags;
      pOVar10[-1].flags = last[-1].flags;
      pOVar10[-1].field0_0x0.__vtable = pSVar6;
      last = pOVar9;
      pOVar10 = result;
    } while (first != pOVar9);
  }
  return result;
}

void* __malloc_alloc_template<0>::oom_malloc(unsigned int n) {
  void *pvVar1;
  
  do {
    (*(code *)0x0)();
    pvVar1 = malloc(n);
  } while (pvVar1 == (void *)0x0);
  return pvVar1;
}

ObjectSlot* ObjectSlot * uninitialized_copy<ObjectSlot *, ObjectSlot *>(ObjectSlot *first, ObjectSlot *last, ObjectSlot *result) {
  int iVar1;
  ObjectSlot *pOVar2;
  ObjectSlot *pOVar3;
  
  pOVar3 = first;
  pOVar2 = result;
  if (first != last) {
    do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
      (pOVar2->field0_0x0).__vtable = (Slot__vtable *)_vt_4Slot;
                    /* end of inlined section */
      first = first + 1;
      result = result + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
      (pOVar2->field0_0x0).xoffset = (pOVar3->field0_0x0).xoffset;
      (pOVar2->field0_0x0).yoffset = (pOVar3->field0_0x0).yoffset;
      (pOVar2->field0_0x0).altOffset = (pOVar3->field0_0x0).altOffset;
      iVar1 = (pOVar3->field0_0x0).nameIndex;
                    /* end of inlined section */
      (pOVar2->field0_0x0).__vtable = (Slot__vtable *)_vt_10ObjectSlot;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
      (pOVar2->field0_0x0).nameIndex = iVar1;
                    /* end of inlined section */
      pOVar2->objectID = pOVar3->objectID;
      pOVar2->height = pOVar3->height;
      pOVar2->maximumSize = pOVar3->maximumSize;
      pOVar2->flags = pOVar3->flags;
      pOVar3 = pOVar3 + 1;
      pOVar2 = pOVar2 + 1;
    } while (first != last);
  }
  return result;
}

void vector<ObjectSlot, __malloc_alloc_template<0> >::insert_aux(ObjectSlot *position, ObjectSlot &x) {
	ObjectSlot x_copy;
	ObjectSlot &value;
	ObjectSlot &_ctor_arg;
	Slot &_ctor_arg;
	ObjectSlot &_ctor_arg;
	Slot &_ctor_arg;
	unsigned int old_size;
	unsigned int len;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	void *result;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	ObjectSlot *p;
	ObjectSlot &value;
	void *pAddress;
	ObjectSlot &_ctor_arg;
	Slot &_ctor_arg;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	ObjectSlot *first;
	ObjectSlot *pointer;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	
  Slot__vtable **ppSVar1;
  undefined *puVar2;
  ushort uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ObjectSlot *pOVar10;
  Slot__vtable *pSVar11;
  ObjectSlot *pOVar12;
  float *pfVar13;
  ObjectSlot *pOVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  ObjectSlot x_copy;
  
  pOVar10 = this->finish;
  if (pOVar10 == this->end_of_storage) {
    pOVar12 = this->start;
    iVar15 = ((int)pOVar10 - (int)pOVar12) * 0x38e38e39 >> 2;
    iVar16 = 1;
    if (iVar15 != 0) {
      iVar16 = iVar15 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if (iVar16 == 0) {
      pOVar10 = (ObjectSlot *)0x0;
    }
    else {
      pOVar10 = (ObjectSlot *)malloc(iVar16 * 0x24);
      if (pOVar10 == (ObjectSlot *)0x0) {
        pOVar10 = (ObjectSlot *)oom_malloc__t23__malloc_alloc_template1i0Ui(iVar16 * 0x24);
      }
      pOVar12 = this->start;
    }
                    /* end of inlined section */
    uninitialized_copy__H2ZP10ObjectSlotZP10ObjectSlot_X01X01X11_X11(pOVar12,position,pOVar10);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    pfVar13 = (float *)((int)pOVar10 + ((int)position - (int)this->start));
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
    pfVar13[4] = (float)_vt_4Slot;
    *pfVar13 = (x->field0_0x0).xoffset;
    pfVar13[1] = (x->field0_0x0).yoffset;
    pfVar13[2] = (x->field0_0x0).altOffset;
    fVar17 = (float)(x->field0_0x0).nameIndex;
    pfVar13[4] = (float)_vt_10ObjectSlot;
    pfVar13[3] = fVar17;
    *(ushort *)(pfVar13 + 5) = x->objectID;
    pfVar13[6] = (float)x->height;
    pfVar13[7] = (float)x->maximumSize;
    pfVar13[8] = (float)x->flags;
                    /* end of inlined section */
    uninitialized_copy__H2ZP10ObjectSlotZP10ObjectSlot_X01X01X11_X11
              (position,this->finish,
               (ObjectSlot *)((int)pOVar10 + (int)position + (0x24 - (int)this->start)));
    pOVar12 = this->finish;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    pOVar14 = this->start;
    if (pOVar14 == pOVar12) {
      pOVar12 = this->start;
    }
    else {
      pSVar11 = (pOVar14->field0_0x0).__vtable;
      while( true ) {
        (*(code *)pSVar11[1].Slot)
                  ((int)&(pOVar14->field0_0x0).xoffset + (int)*(short *)(pSVar11 + 1),2);
        if (pOVar14 + 1 == pOVar12) break;
        pSVar11 = pOVar14[1].field0_0x0.__vtable;
        pOVar14 = pOVar14 + 1;
      }
                    /* end of inlined section */
      pOVar12 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((pOVar12 != (ObjectSlot *)0x0) &&
       (((int)this->end_of_storage - (int)pOVar12) * 0x38e38e39 >> 2 != 0)) {
      free(pOVar12);
    }
    this->start = pOVar10;
    this->finish = pOVar10 + iVar15 + 1;
    this->end_of_storage = pOVar10 + iVar16;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    fVar17 = pOVar10[-1].field0_0x0.xoffset;
    (pOVar10->field0_0x0).__vtable = (Slot__vtable *)_vt_4Slot;
    (pOVar10->field0_0x0).xoffset = fVar17;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
    (pOVar10->field0_0x0).yoffset = pOVar10[-1].field0_0x0.yoffset;
    (pOVar10->field0_0x0).altOffset = pOVar10[-1].field0_0x0.altOffset;
    iVar16 = pOVar10[-1].field0_0x0.nameIndex;
    (pOVar10->field0_0x0).__vtable = (Slot__vtable *)_vt_10ObjectSlot;
    (pOVar10->field0_0x0).nameIndex = iVar16;
    pOVar10->objectID = pOVar10[-1].objectID;
    pOVar10->height = pOVar10[-1].height;
    pOVar10->maximumSize = pOVar10[-1].maximumSize;
    pOVar10->flags = pOVar10[-1].flags;
    uVar3 = x->objectID;
    uVar7 = *(ulong *)&x->field0_0x0;
    uVar8 = *(ulong *)&(x->field0_0x0).altOffset;
    uVar9 = *(ulong *)&x->height;
    iVar16 = x->flags;
                    /* end of inlined section */
    copy_backward__H2ZP10ObjectSlotZP10ObjectSlot_X01X01X11_X11
              (position,this->finish + -1,this->finish);
    pSVar11 = (position->field0_0x0).__vtable;
    uVar6 = CONCAT26(x_copy._22_2_,CONCAT24(uVar3,0x3b8208));
    puVar2 = (undefined *)((int)&(position->field0_0x0).yoffset + 3);
    uVar4 = (uint)puVar2 & 7;
    puVar5 = (ulong *)(puVar2 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar7 >> (7 - uVar4) * 8;
    uVar4 = (uint)position & 7;
    *(ulong *)((int)position - uVar4) =
         uVar7 << uVar4 * 8 |
         *(ulong *)((int)position - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    puVar2 = (undefined *)((int)&(position->field0_0x0).nameIndex + 3);
    uVar4 = (uint)puVar2 & 7;
    puVar5 = (ulong *)(puVar2 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar8 >> (7 - uVar4) * 8;
    pfVar13 = &(position->field0_0x0).altOffset;
    uVar4 = (uint)pfVar13 & 7;
    puVar5 = (ulong *)((int)pfVar13 - uVar4);
    *puVar5 = uVar8 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    uVar4 = (uint)&position->field_0x17 & 7;
    puVar5 = (ulong *)(&position->field_0x17 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar6 >> (7 - uVar4) * 8;
    ppSVar1 = &(position->field0_0x0).__vtable;
    uVar4 = (uint)ppSVar1 & 7;
    puVar5 = (ulong *)((int)ppSVar1 - uVar4);
    *puVar5 = uVar6 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    puVar2 = (undefined *)((int)&position->maximumSize + 3);
    uVar4 = (uint)puVar2 & 7;
    puVar5 = (ulong *)(puVar2 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar9 >> (7 - uVar4) * 8;
    uVar4 = (uint)&position->height & 7;
    puVar5 = (ulong *)((int)&position->height - uVar4);
    *puVar5 = uVar9 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    position->flags = iVar16;
    (position->field0_0x0).__vtable = pSVar11;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
    this->finish = this->finish + 1;
  }
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___8BString2(&_12cXObjectImpl_sLastUserTypedName,2);
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/object.cpp */
      __8BString2(&_12cXObjectImpl_sLastUserTypedName);
    }
  }
  return;
}

cXObject* cXObject::cXObject(int __in_chrg) {
  TreeSim *pTVar1;
  __vtbl_ptr_type *p_Var2;
  __vtbl_ptr_type *p_Var3;
  __vtbl_ptr_type *p_Var4;
  __vtbl_ptr_type *p_Var5;
  __vtbl_ptr_type _Var6;
  __vtbl_ptr_type _Var7;
  __vtbl_ptr_type _Var8;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  undefined local_c0 [16];
  __vtbl_ptr_type local_b0 [16];
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
  if (__in_chrg != 0) {
    this->_vb899 = (TreeSim *)&this->field_0x8;
    __7TreeSim((TreeSim *)&this->field_0x8);
  }
  this->_vb899->__vtable = (TreeSim__vtable *)_vt_8cXObject_7TreeSim;
  p_Var2 = (__vtbl_ptr_type *)local_c0;
  p_Var3 = _vt_8cXObject_7TreeSim;
  if (__in_chrg == 0) {
    do {
      p_Var5 = p_Var3;
      p_Var4 = p_Var2;
      _Var6 = p_Var5[1];
      _Var7 = p_Var5[2];
      _Var8 = p_Var5[3];
      *p_Var4 = *p_Var5;
      p_Var4[1] = _Var6;
      p_Var4[2] = _Var7;
      p_Var4[3] = _Var8;
      p_Var2 = p_Var4 + 4;
      p_Var3 = p_Var5 + 4;
    } while (p_Var5 + 4 != _vt_8cXObject_7TreeSim + 0x10);
    pTVar1 = this->_vb899;
    _Var6 = p_Var5[5];
    p_Var4[4] = _vt_8cXObject_7TreeSim[16];
    p_Var4[5] = _Var6;
    pTVar1->__vtable = (TreeSim__vtable *)local_c0;
  }
  this->__vtable = (cXObject__21_1030__vtable *)_vt_8cXObject;
  return this;
}

void cXObject::setObjectImpl(cXObjectImpl *obj) {
	TreeSim *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/TreeSim.h */
  this->_vb899->m_pObject = (cXObjectImpl__184_901 *)obj;
  return;
}

void cXObject::setPersonImpl(cXPersonImpl *obj) {
	TreeSim *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/TreeSim.h */
  this->_vb899->m_pPerson = obj;
  return;
}

void cXObject::setMTObjectImpl(cXMTObjectImpl *obj) {
	TreeSim *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/TreeSim.h */
  this->_vb899->m_pMTObject = (cXMTObjectImpl__138_905 *)obj;
  return;
}

void cXObject::setCursorObjectImpl(cXCursorObjectImpl *obj) {
	TreeSim *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/TreeSim.h */
  this->_vb899->m_pCursorObject = obj;
  return;
}

void cXObject::setPortalImpl(cXPortalImpl *obj) {
	TreeSim *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/TreeSim.h */
  this->_vb899->m_pPortal = obj;
  return;
}

cXObjectImpl* cXObject::CAST_IMPL() {
  cXObjectImpl__127_901 *pcVar1;
  
  if (this == (cXObject__21_1030 *)0x0) {
    pcVar1 = (cXObjectImpl__127_901 *)0x0;
  }
  else {
    pcVar1 = (cXObjectImpl__127_901 *)
             (*(code *)this->__vtable[1].GetObjectImplementation)
                       ((int)&this->_vb899 + (int)*(short *)&this->__vtable[1].AdvanceGraphic);
  }
  return pcVar1;
}

void Slot::~Slot(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (Slot__vtable *)_vt_4Slot;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void ObjectSlot::~ObjectSlot(int __in_chrg) {
	Slot *this;
	void *pAddress;
	
  (this->field0_0x0).__vtable = (Slot__vtable *)_vt_4Slot;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void cXObjectImpl::Kill() {
  short sVar1;
  ObjectModule *pOVar2;
  cXObject__21_1030__vtable *pcVar3;
  ObjectModule__vtable *pOVar4;
  undefined8 uVar5;
  
  pOVar2 = this->fModule;
  pcVar3 = this->_vb966->__vtable;
  pOVar4 = pOVar2->__vtable;
  sVar1 = *(short *)&pOVar4->GetNumObjects;
  uVar5 = (*(code *)pcVar3[1].UserCanPlace)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3[1].IsPartOfMe);
  (*(code *)pOVar4->CheckIntegrity)((int)&pOVar2->__vtable + (int)sVar1,uVar5);
  return;
}

Int cXObjectImpl::GetNumAttr() {
  return this->fNumAttr;
}

void cXObjectImpl::SetMiscFlag(MiscFlag flag, bool on) {
  MiscFlag MVar1;
  
  MVar1 = this->fMiscFlags & ~flag;
  this->fMiscFlags = MVar1;
  if (on) {
    this->fMiscFlags = MVar1 | flag;
  }
  return;
}

bool cXObjectImpl::GetMiscFlag(MiscFlag flag) {
  return (this->fMiscFlags & flag) != kUnhilited;
}

RenderLayer cXObjectImpl::GetRenderLayer() {
  return (char)*(undefined4 *)&this->field_0x114;
}

bool cXObjectImpl::IsRenderingRoot() {
  cXObject__21_1030__vtable *pcVar1;
  byte bVar2;
  
  pcVar1 = this->_vb966->__vtable;
  bVar2 = (*(code *)pcVar1[1].SetLastDamage)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].GetLastDamage);
  return (bool)(bVar2 ^ 1);
}

RECT& cXObjectImpl::GetLastDamage() {
  return &this->mLastDamage;
}

bool cXObjectImpl::IsEmissive() {
  cXObject__21_1030__vtable *pcVar1;
  bool bVar2;
  long lVar3;
  
  pcVar1 = this->_vb966->__vtable;
  lVar3 = (*(code *)pcVar1[1].GetLevel)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].GetLocation);
  bVar2 = false;
  if (lVar3 != 0) {
    pcVar1 = this->_vb966->__vtable;
    lVar3 = (*(code *)pcVar1[1].Pickup)((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].Turn)
    ;
    bVar2 = lVar3 != 8;
  }
  return bVar2;
}

bool cXObjectImpl::RunTree(char *treeName) {
  short sVar1;
  cXObject__21_1030 *pcVar2;
  cXObject__21_1030__vtable *pcVar3;
  undefined uVar4;
  undefined8 uVar5;
  
  pcVar2 = this->_vb966;
  pcVar3 = pcVar2->__vtable;
  sVar1 = *(short *)&pcVar3->SetData;
  uVar5 = (*(code *)pcVar3[1].SetData)((int)&pcVar2->_vb899 + (int)*(short *)&pcVar3[1].IsOccupied);
  uVar4 = (*(code *)pcVar3->SetTemp)((int)&pcVar2->_vb899 + (int)sVar1,uVar5,0,treeName,0);
  return (bool)uVar4;
}

bool cXObjectImpl::GetFreeWill() {
  return SUB41(__12cXObjectImpl_sFreeWill,0);
}

bool cXObjectImpl::GetAutoCenter() {
  return SUB41(__12cXObjectImpl_sAutoCenter,0);
}

void cXObjectImpl::SetAutoCenter(bool autoCenter) {
  __12cXObjectImpl_sAutoCenter = (int)autoCenter;
  return;
}

bool cXObjectImpl::GetAutoReset() {
  return SUB41(__12cXObjectImpl_sAutoReset,0);
}

void cXObjectImpl::SetAutoReset(bool autoReset) {
  __12cXObjectImpl_sAutoReset = (int)autoReset;
  return;
}

Int cXObjectImpl::HierCountSlots() {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  return ((int)(this->fHierSlots).finish - (int)(this->fHierSlots).start) * 0x38e38e39 >> 2;
}

bool cXObjectImpl::RequiresWallAdjacency() {
  cXObject__21_1030__vtable *pcVar1;
  int *piVar2;
  long lVar3;
  
  pcVar1 = this->_vb966->__vtable;
  piVar2 = (int *)(*(code *)pcVar1->GetSelector)
                            ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1->GetTreeTab);
  lVar3 = (**(code **)(*piVar2 + 0x1c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x18),6);
  return lVar3 != 0;
}

ObjFnTable* cXObjectImpl::GetFnTable() {
  ObjFnTable *pOVar1;
  
  pOVar1 = GetFnTable__11ObjSelector(this->fObjSel);
  return pOVar1;
}

SInt16 cXObjectImpl::GetTreeID(ObjEntryPoint ep) {
  cXObject__21_1030__vtable *pcVar1;
  ushort uVar2;
  int *piVar3;
  
  pcVar1 = this->_vb966->__vtable;
  piVar3 = (int *)(*(code *)pcVar1->GetSelector)
                            ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1->GetTreeTab);
  uVar2 = (**(code **)(*piVar3 + 0x1c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x18),ep);
  return uVar2;
}

bool cXObjectImpl::IsOccupied() {
  return (bool)((byte)(this->fData[8] >> 5) & 1);
}

void cXObjectImpl::SetData(int i, SInt16 d) {
  this->fData[i] = d;
  return;
}

void cXObjectImpl::SetTemp(int i, SInt16 d) {
  this->fTemp[i] = d;
  return;
}

void cXObjectImpl::SetAttr(int i, SInt16 d) {
  this->fAttrs[i] = d;
  return;
}

ObjectProbe* cXObjectImpl::GetObjectProbe() {
  return (ObjectProbe *)0x0;
}

void cXObjectImpl::SetObjectProbe(ObjectProbe *pr) {
  return;
}

ObjectFolder* cXObjectImpl::GetFolder() {
	ObjSelector *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
  return this->fObjSel->fFolder;
}

bool cXObjectImpl::SimIndependent() {
  return this->fData[0x3c] != 0;
}

bool cXObjectImpl::SimEnabled() {
  short sVar1;
  ObjectModule *pOVar2;
  cXObject__21_1030__vtable *pcVar3;
  ObjectModule__vtable *pOVar4;
  undefined uVar5;
  undefined8 uVar6;
  
  pOVar2 = this->fModule;
  pcVar3 = this->_vb966->__vtable;
  pOVar4 = pOVar2->__vtable;
  sVar1 = *(short *)&pOVar4[1].ClearIdleStatus;
  uVar6 = (*(code *)pcVar3[1].UserCanPlace)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3[1].IsPartOfMe);
  uVar5 = (*(code *)pOVar4[1].GetIdleStatus)((int)&pOVar2->__vtable + (int)sVar1,uVar6,1);
  return (bool)uVar5;
}

void cXObjectImpl::EnableSim(bool enable) {
  short sVar1;
  ObjectModule *pOVar2;
  cXObject__21_1030__vtable *pcVar3;
  ObjectModule__vtable *pOVar4;
  undefined8 uVar5;
  
  pOVar2 = this->fModule;
  pcVar3 = this->_vb966->__vtable;
  pOVar4 = pOVar2->__vtable;
  sVar1 = *(short *)&pOVar4[1].IsBuyAndBuildDisabled;
  uVar5 = (*(code *)pcVar3[1].UserCanPlace)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3[1].IsPartOfMe);
  (*(code *)pOVar4[1].SetIdleStatus)((int)&pOVar2->__vtable + (int)sVar1,uVar5,1,enable);
  return;
}

int cXObjectImpl::GetIdleStatus() {
  short sVar1;
  ObjectModule *pOVar2;
  cXObject__21_1030__vtable *pcVar3;
  ObjectModule__vtable *pOVar4;
  int iVar5;
  undefined8 uVar6;
  
  pOVar2 = this->fModule;
  pcVar3 = this->_vb966->__vtable;
  pOVar4 = pOVar2->__vtable;
  sVar1 = *(short *)&pOVar4[1].DisableBuyAndBuild;
  uVar6 = (*(code *)pcVar3[1].UserCanPlace)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3[1].IsPartOfMe);
  iVar5 = (*(code *)pOVar4[1].EnableBuyAndBuild)((int)&pOVar2->__vtable + (int)sVar1,uVar6);
  return iVar5;
}

void cXObjectImpl::SetIdleStatus(int ticks) {
  short sVar1;
  ObjectModule *pOVar2;
  cXObject__21_1030__vtable *pcVar3;
  ObjectModule__vtable *pOVar4;
  undefined8 uVar5;
  
  pOVar2 = this->fModule;
  pcVar3 = this->_vb966->__vtable;
  pOVar4 = pOVar2->__vtable;
  sVar1 = *(short *)&pOVar4[1].SetTutorialObject;
  uVar5 = (*(code *)pcVar3[1].UserCanPlace)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3[1].IsPartOfMe);
  (*(code *)pOVar4[1].ShowTutorialInfo)((int)&pOVar2->__vtable + (int)sVar1,uVar5,ticks);
  return;
}

void cXObjectImpl::ClearIdleStatus() {
  short sVar1;
  ObjectModule *pOVar2;
  cXObject__21_1030__vtable *pcVar3;
  ObjectModule__vtable *pOVar4;
  undefined8 uVar5;
  
  pOVar2 = this->fModule;
  pcVar3 = this->_vb966->__vtable;
  pOVar4 = pOVar2->__vtable;
  sVar1 = *(short *)&pOVar4[1].ComputeStats;
  uVar5 = (*(code *)pcVar3[1].UserCanPlace)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar3[1].IsPartOfMe);
  (*(code *)pOVar4[1].FillInObjectStats)((int)&pOVar2->__vtable + (int)sVar1,uVar5);
  return;
}

FTileRect& cXObjectImpl::GetRect() {
  return &this->fRect;
}

SInt16 cXObjectImpl::GetData(int i) {
  return this->fData[i];
}

SInt16 cXObjectImpl::GetTemp(int i) {
  return this->fTemp[i];
}

SInt16 cXObjectImpl::GetAttr(int i) {
  return this->fAttrs[i];
}

ObjectModule* cXObjectImpl::GetModule() {
  return this->fModule;
}

AnimTable* cXObjectImpl::GetAdultAnimTable() {
  AnimTable *pAVar1;
  
  pAVar1 = GetAdultAnimTable__11ObjSelector(this->fObjSel);
  return pAVar1;
}

AnimTable* cXObjectImpl::GetChildAnimTable() {
  AnimTable *pAVar1;
  
  pAVar1 = GetChildAnimTable__11ObjSelector(this->fObjSel);
  return pAVar1;
}

bool cXObjectImpl::HideForCutaway() {
  cXObject__21_1030__vtable *pcVar1;
  bool bVar2;
  int iVar3;
  
  pcVar1 = this->_vb966->__vtable;
  iVar3 = (*(code *)pcVar1[1].HandleError)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].Error);
  if ((*(short *)(iVar3 + 0x5c) != 0) || (bVar2 = false, (this->fData[8] & 0x400) != 0)) {
    bVar2 = true;
  }
  return bVar2;
}

Int cXObjectImpl::CountObjectSlots() {
	cXObjectImpl *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  return (((int)(this->fHierSlots).finish - (int)(this->fHierSlots).start) * 0x38e38e39 >> 2) + -1;
}

cXObject* cXObjectImpl::GetContainedObject(Int slotNum) {
	ObjectSlot *s;
	
  cXObject__21_1030__vtable *pcVar1;
  cXObject__21_1030 *pcVar2;
  long lVar3;
  
  pcVar1 = this->_vb966->__vtable;
  lVar3 = (*(code *)pcVar1[1].GetMiscFlag)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].SetMiscFlag,slotNum);
  if (lVar3 == 0) {
    pcVar2 = (cXObject__21_1030 *)0x0;
  }
  else {
    pcVar1 = this->_vb966->__vtable;
    pcVar2 = (cXObject__21_1030 *)
             (*(code *)pcVar1[1].GetLightingContribution)
                       ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].CanContributeLight,
                        *(undefined2 *)((int)lVar3 + 0x14));
  }
  return pcVar2;
}

RoomID cXObjectImpl::GetRoom() {
  return this->fData[0x1d];
}

ObjDefinition* cXObjectImpl::GetDef() {
  return this->fDef;
}

SInt16 cXObjectImpl::GetType() {
  return this->fDef->type;
}

SInt16 cXObjectImpl::GetID() {
  return this->fID;
}

void cXObjectImpl::GetLocation(FTilePt *tile) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong in_v0;
  ulong uVar5;
  
  puVar1 = (undefined *)((int)&(this->fLocation).x.whole + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->fLocation & 7;
  uVar5 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->fLocation - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&(tile->x).whole + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar5 >> (7 - uVar2) * 8;
  uVar2 = (uint)tile & 7;
  *(ulong *)((int)tile - uVar2) =
       uVar5 << uVar2 * 8 | *(ulong *)((int)tile - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  return;
}

FTilePt& cXObjectImpl::GetLocation() {
  return &this->fLocation;
}

TreeTable* cXObjectImpl::GetTreeTab() {
  TreeTable *pTVar1;
  
  pTVar1 = GetTreeTable__11ObjSelector(this->fObjSel);
  return pTVar1;
}

ObjSelector* cXObjectImpl::GetSelector() {
  return this->fObjSel;
}

Behavior* cXObjectImpl::GetBehavior() {
	ObjSelector *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
  return this->fObjSel->fBehavior;
}

iResFile* cXObjectImpl::GetSelFile() {
	ObjSelector *this;
	ObjSelector *this;
	
  iResFile__6_5027 *piVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
  piVar1 = (this->fObjSel->field0_0x0).fFile;
  if (piVar1 == (iResFile__6_5027 *)0x0) {
    piVar1 = loadFile__11ObjSelector(this->fObjSel);
                    /* end of inlined section */
  }
  return piVar1;
}

bool cXObjectImpl::IsMultiTile() {
  return this->fDef->masterID != 0;
}

StdPrm cXObjectImpl::GetFlags() {
  return this->fData[8];
}

SInt16 cXObjectImpl::GetWallPlacementFlags() {
  return this->fData[0xd];
}

RelMatrix& cXObjectImpl::GetRelMatrix() {
  return this->fInstMatrix;
}

int cXObjectImpl::GetNumRoutingSlots() {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  return (int)(this->fRoutingSlots).finish - (int)(this->fRoutingSlots).start >> 6;
}

RoutingSlot& cXObjectImpl::GetRoutingSlot(int iIndex) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  return (this->fRoutingSlots).start + iIndex;
}

SInt16 cXObjectImpl::GetSize() {
  return this->fData[0x31];
}

cSimulator* cXObjectImpl::GetSim() {
  ObjectModule__vtable *pOVar1;
  cSimulator *pcVar2;
  
  pOVar1 = this->fModule->__vtable;
  pcVar2 = (cSimulator *)
           (*(code *)pOVar1->RelationshipAccessed)
                     ((int)&this->fModule->__vtable + (int)*(short *)&pOVar1->RelationshipAccessed);
  return pcVar2;
}

int cXObjectImpl::GetBuildModeType() {
  ObjSelector *pOVar1;
  
  pOVar1 = GetMasterSelector__11ObjSelector(this->fObjSel);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
  return (int)(short)pOVar1->fHeader->buildModeType;
}

bool cXObjectImpl::IsSupport() {
  cXObject__21_1030__vtable *pcVar1;
  long lVar2;
  
  pcVar1 = this->_vb966->__vtable;
  lVar2 = (*(code *)pcVar1[1].GetPrevObjectSibling)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].GetNextObjectSibling);
  return lVar2 == 6;
}

bool cXObjectImpl::CanContributeLight() {
  return (bool)((byte)(this->fData[0x28] >> 10) & 1);
}

Int cXObjectImpl::GetLightingContribution() {
  return (int)(short)this->fData[0x33];
}

ObjectLightSource cXObjectImpl::GetObjectLightSource() {
  return (ObjectLightSource)(short)this->fData[0x10];
}

bool cXObjectImpl::IsBroken() {
  return this->fData[0xf] != 0;
}

bool cXObjectImpl::IsDirty() {
  return 0 < (short)this->fData[0x27];
}

bool cXObjectImpl::IsBurning() {
  return (bool)((byte)(this->fData[8] >> 9) & 1);
}

bool cXObjectImpl::CanBurn() {
  return (bool)((byte)(this->fData[0x28] >> 5) & 1);
}

bool cXObjectImpl::IsFireproof() {
  return (bool)((byte)(this->fData[8] >> 0xb) & 1);
}

bool cXObjectImpl::HasZeroExtent() {
  cXObject__21_1030__vtable *pcVar1;
  ulong uVar2;
  
  pcVar1 = this->_vb966->__vtable;
  uVar2 = (*(code *)pcVar1[1].SimIndependent)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].GetFolder);
  return (bool)((byte)(uVar2 >> 2) & 1);
}

bool cXObjectImpl::CanIntersectPeople() {
  cXObject__21_1030__vtable *pcVar1;
  cXObject__21_1030 *pcVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  pcVar1 = this->_vb966->__vtable;
  lVar5 = (*(code *)pcVar1[1].GetAgeInMinutes)
                    ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1[1].GetErrorString);
  pcVar2 = this->_vb966;
  if (lVar5 == 0) {
    uVar6 = (*(code *)pcVar2->__vtable[1].SimIndependent)
                      ((int)&pcVar2->_vb899 + (int)*(short *)&pcVar2->__vtable[1].GetFolder);
    bVar3 = (byte)(uVar6 >> 4);
  }
  else {
    uVar4 = (*(code *)pcVar2->__vtable[1].SimIndependent)
                      ((int)&pcVar2->_vb899 + (int)*(short *)&pcVar2->__vtable[1].GetFolder);
    bVar3 = (byte)((uVar4 & 0xffff) >> 1) ^ 1;
  }
  return (bool)(bVar3 & 1);
}

bool cXObjectImpl::IsChair() {
  cXObject__21_1030__vtable *pcVar1;
  int *piVar2;
  long lVar3;
  
  pcVar1 = this->_vb966->__vtable;
  piVar2 = (int *)(*(code *)pcVar1->GetSelector)
                            ((int)&this->_vb966->_vb899 + (int)*(short *)&pcVar1->GetTreeTab);
  lVar3 = (**(code **)(*piVar2 + 0x1c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x18),0x1a);
  return lVar3 != 0;
}

cXObject* cXObjectImpl::GetObjectFromID(SInt16 id) {
  ObjectModule__vtable *pOVar1;
  cXObject__21_1030 *pcVar2;
  
  pOVar1 = this->fModule->__vtable;
  pcVar2 = (cXObject__21_1030 *)
           (*(code *)pOVar1->AdvanceSelectedPerson)
                     ((int)&this->fModule->__vtable + (int)*(short *)&pOVar1->SetSelectedPerson,id);
  return pcVar2;
}

cXObject* cXObjectImpl::GetNext() {
  cXObject__21_1030 *pcVar1;
  
  pcVar1 = (cXObject__21_1030 *)0x0;
  if (this->fNext != (cXObjectImpl__127_901 *)0x0) {
    pcVar1 = this->fNext->_vb966;
  }
  return pcVar1;
}

cXObject* cXObjectImpl::GetFirst() {
  ObjectModule__vtable *pOVar1;
  cXObject__21_1030 *pcVar2;
  
  pOVar1 = this->fModule->__vtable;
  pcVar2 = (cXObject__21_1030 *)
           (*(code *)pOVar1->LevelInfoRequested)
                     ((int)&this->fModule->__vtable + (int)*(short *)&pOVar1->CleanupPeople);
  return pcVar2;
}

cXObjectImpl* cXObjectImpl::GetNextImpl() {
  return this->fNext;
}

cXObjectImpl* cXObjectImpl::GetFirstImpl() {
  ObjectModule__vtable *pOVar1;
  int iVar2;
  cXObjectImpl__127_901 *pcVar3;
  
  pOVar1 = this->fModule->__vtable;
  iVar2 = (*(code *)pOVar1->LevelInfoRequested)
                    ((int)&this->fModule->__vtable + (int)*(short *)&pOVar1->CleanupPeople);
  pcVar3 = (cXObjectImpl__127_901 *)
           (**(code **)(*(int *)(iVar2 + 4) + 0x454))
                     (iVar2 + *(short *)(*(int *)(iVar2 + 4) + 0x450));
  return pcVar3;
}

char* cXObjectImpl::GetName() {
	ObjSelector *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
  return this->fObjSel->fObjName;
}

cXObjectImpl* cXObjectImpl::GetObjectImplementation() {
  return this;
}

void global constructors keyed to cXObjectImpl::sXDirTable() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to cXObjectImpl::sXDirTable() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

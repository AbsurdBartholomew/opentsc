// STATUS: NOT STARTED

#include "MTObject.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObjectImpl : virtual cXObject, virtual TreeSimImpl {
	TreeSimImpl *$vb1187;
	cXObject *$vb966;
	static int sXDirTable[9];
	static int sYDirTable[9];
	static Int gPersonWidth;
	static bool sFreeWill;
	static bool sAutoCenter;
	static bool sAutoReset;
	static BString2 sLastUserTypedName;
	StdPrm *fAttrs;
	Int fNumAttr;
	StdPrm *fDynSpriteFlags;
	StdPrm fNumDynSprites;
	short int fTemp[8];
	short int fData[72];
	ObjectModule *fModule;
	cXObjectImpl *fNext;
	RelMatrix *fInstMatrix;
	SInt16 fID;
	FTilePt fLocation;
	FTileRect fRect;
	int fLevel;
	Int fMiscFlags;
	ObjDefinition *fDef;
	ObjSelector *fObjSel;
	vector<ObjectSlot,__malloc_alloc_template<0> > fHierSlots;
	vector<RoutingSlot,__malloc_alloc_template<0> > fRoutingSlots;
	vector<SpriteSlot,__malloc_alloc_template<0> > fSpriteSlots;
	RenderLayer mRenderLayer;
	RECT mLastDamage;
	int mHas3D;
	bool mDrawLabel;
	__vtbl_ptr_type *$vf901;
	
	cXObjectImpl& operator=();
	cXObjectImpl();
	/* vtable[1] */ virtual void Kill();
	/* vtable[2] */ virtual Int GetNumAttr();
	/* vtable[6] */ virtual SpriteSlot& GetSpriteSlot();
	/* vtable[3] */ virtual float CalcDistance();
	/* vtable[4] */ virtual float CalcShortDistance();
	/* vtable[5] */ virtual float CalcShortDistance();
	/* vtable[7] */ virtual void SetHilite();
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
	/* vtable[3] */ virtual bool Simulate();
	/* vtable[25] */ virtual bool RunTree();
	/* vtable[26] */ virtual bool RunTree();
	/* vtable[27] */ virtual bool RunTree();
	/* vtable[28] */ virtual void ParseUIString();
	static bool GetFreeWill(/* parameters unknown */);
	static bool GetAutoCenter(/* parameters unknown */);
	static void SetAutoCenter(/* parameters unknown */);
	static bool GetAutoReset(/* parameters unknown */);
	static void SetAutoReset(/* parameters unknown */);
	/* vtable[30] */ virtual void HandleError();
	/* vtable[29] */ virtual void Error();
	/* vtable[1] */ virtual TreeReturnCode TryElement();
	/* vtable[1] */ virtual bool GosubObjectTree();
	/* vtable[2] */ virtual void Cleanup();
	/* vtable[4] */ virtual NodeAction HandleBreakpoint();
	TreeReturnCode InterpValue();
	TreeReturnCode TryUserEvent();
	TreeReturnCode TryUIEffect();
	TreeReturnCode TryTestObjectType();
	TreeReturnCode TryMakeNewCharacter();
	TreeReturnCode TryFindGoodLocation();
	TreeReturnCode TrySetBalloon();
	TreeReturnCode TryDirectionTo();
	TreeReturnCode TryDistanceTo();
	TreeReturnCode TryRandom();
	TreeReturnCode TryTreeBreak();
	TreeReturnCode TryGrab();
	TreeReturnCode TryDrop();
	TreeReturnCode TryUpdate();
	TreeReturnCode TryIdle();
	TreeReturnCode TryKillObject();
	TreeReturnCode TryShowString();
	TreeReturnCode TryNotifyStackObject();
	TreeReturnCode TryCallNamedTree();
	TreeReturnCode TryMakeActionString();
	TreeReturnCode TryGenericSimCall();
	TreeReturnCode TryDialog();
	TreeReturnCode TryPushAction();
	TreeReturnCode TrySetToNext();
	TreeReturnCode TryExpression();
	TreeReturnCode TryFindTreeNew();
	TreeReturnCode TryCreateObject();
	TreeReturnCode TryPreloadObject();
	TreeReturnCode TryRelationship();
	TreeReturnCode TryRelationship2();
	TreeReturnCode TryDropOnto();
	TreeReturnCode TryBudget();
	TreeReturnCode TryFind5WorstMotives();
	TreeReturnCode TryFindFunctionalObject();
	TreeReturnCode TryCallFunctionalTree();
	TreeReturnCode TryPlaySound();
	TreeReturnCode TryKillSounds();
	TreeReturnCode TrySnap();
	TreeReturnCode TrySnap();
	TreeReturnCode TryBurn();
	TreeReturnCode TryTutorial();
	void JustBorn();
	void UpdateAge();
	void DayPassed();
	/* vtable[3] */ virtual void Initialize();
	/* vtable[4] */ virtual void Reset();
	/* vtable[5] */ virtual void PostLoad();
	/* vtable[6] */ virtual void PreSave();
	cXObjectImpl();
	/* vtable[1] */ virtual cXObjectImpl();
	void HierGetSite();
	void HierSetSite();
	void HierSever();
	cXObject* HierGetObject();
	Int HierCountSlots();
	ObjectSlot* HierGetSlot();
	cXObject* HierGetChild();
	cXObject* HierGetParent();
	cXObject* GetRootObject();
	void GetPlacementSpec();
	bool TestAndPlace();
	static void UpdateChairFacing(/* parameters unknown */);
	bool RequiresWallAdjacency();
	void UpdateWallAdjacency();
	bool AllowIdleOptimization();
	void SetLocation();
	void ComputeRect();
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
	/* vtable[48] */ virtual void SetLevel();
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
	/* vtable[62] */ virtual void SetIdleStatus();
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
	cXObjectImpl* GetNextImpl();
	cXObjectImpl* GetFirstImpl();
	/* vtable[129] */ virtual Int GetWallBlockFlags();
	/* vtable[130] */ virtual void ReconStream();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[132] */ virtual void ReconSlots();
	/* vtable[133] */ virtual void ReconHeader();
	/* vtable[134] */ virtual void Backtrace();
	/* vtable[135] */ virtual char* GetName();
	/* vtable[136] */ virtual int GetDebugName();
	/* vtable[137] */ virtual void AdvanceGraphic();
	/* vtable[138] */ virtual cXObjectImpl* GetObjectImplementation();
};

__vtbl_ptr_type cXMTObjectImpl::TreeSimImpl virtual table[6] = {
	/* [0] = */ {
		/* .__delta = */ -88,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 52,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::TryElement,
		/* .__delta2 = */ 4936
	},
	/* [2] = */ {
		/* .__delta = */ 52,
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
		/* .__delta = */ 52,
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

__vtbl_ptr_type cXMTObjectImpl::cXObjectImpl virtual table[8] = {
	/* [0] = */ {
		/* .__delta = */ -140,
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
		/* .__delta = */ -140,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::Initialize,
		/* .__delta2 = */ 24224
	},
	/* [4] = */ {
		/* .__delta = */ -140,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::Reset,
		/* .__delta2 = */ 28632
	},
	/* [5] = */ {
		/* .__delta = */ -140,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::PostLoad,
		/* .__delta2 = */ 29296
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

__vtbl_ptr_type cXMTObjectImpl::cXMTObject virtual table[14] = {
	/* [0] = */ {
		/* .__delta = */ -80,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -80,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::Initialize,
		/* .__delta2 = */ 24224
	},
	/* [2] = */ {
		/* .__delta = */ -80,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::GetFirstMultiTileObject,
		/* .__delta2 = */ 32584
	},
	/* [3] = */ {
		/* .__delta = */ -80,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::GetNextMultiTileObject,
		/* .__delta2 = */ 32624
	},
	/* [4] = */ {
		/* .__delta = */ -80,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::Reset,
		/* .__delta2 = */ 28632
	},
	/* [5] = */ {
		/* .__delta = */ -80,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::AssignOffsets,
		/* .__delta2 = */ 25800
	},
	/* [6] = */ {
		/* .__delta = */ -80,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::PostLoad,
		/* .__delta2 = */ 29296
	},
	/* [7] = */ {
		/* .__delta = */ -80,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::SetMultiObjectData,
		/* .__delta2 = */ 29440
	},
	/* [8] = */ {
		/* .__delta = */ -80,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::DirtyAll,
		/* .__delta2 = */ 29560
	},
	/* [9] = */ {
		/* .__delta = */ -80,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::IsDynamic,
		/* .__delta2 = */ 30304
	},
	/* [10] = */ {
		/* .__delta = */ -80,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::MergeInPlace,
		/* .__delta2 = */ 31344
	},
	/* [11] = */ {
		/* .__delta = */ -80,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::RemoveFromDynamic,
		/* .__delta2 = */ 30360
	},
	/* [12] = */ {
		/* .__delta = */ -80,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::GetMTObjectImplementation,
		/* .__delta2 = */ 32648
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type cXMTObjectImpl::cXObject virtual table[140] = {
	/* [0] = */ {
		/* .__delta = */ -72,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::Kill,
		/* .__delta2 = */ -29360
	},
	/* [2] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetNumAttr,
		/* .__delta2 = */ -29264
	},
	/* [3] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::CalcDistance,
		/* .__delta2 = */ 24888
	},
	/* [4] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::CalcShortDistance,
		/* .__delta2 = */ 24568
	},
	/* [5] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::CalcShortDistance,
		/* .__delta2 = */ 24800
	},
	/* [6] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetSpriteSlot,
		/* .__delta2 = */ 19792
	},
	/* [7] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetHilite,
		/* .__delta2 = */ 8984
	},
	/* [8] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetHilite,
		/* .__delta2 = */ 8968
	},
	/* [9] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetMiscFlag,
		/* .__delta2 = */ -29256
	},
	/* [10] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetMiscFlag,
		/* .__delta2 = */ -29216
	},
	/* [11] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::UpdateSimFlags,
		/* .__delta2 = */ -32136
	},
	/* [12] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::Dirty,
		/* .__delta2 = */ 24256
	},
	/* [13] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetRenderLayer,
		/* .__delta2 = */ 27008
	},
	/* [14] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetDynamicToStaticLatency,
		/* .__delta2 = */ 26704
	},
	/* [15] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetRenderLayer,
		/* .__delta2 = */ -29200
	},
	/* [16] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsRenderingRoot,
		/* .__delta2 = */ -29192
	},
	/* [17] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetLastDamage,
		/* .__delta2 = */ -29144
	},
	/* [18] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetLastDamage,
		/* .__delta2 = */ 26992
	},
	/* [19] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::ResetDamage,
		/* .__delta2 = */ 27000
	},
	/* [20] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsEmissive,
		/* .__delta2 = */ -29136
	},
	/* [21] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsBeingDraggedAround,
		/* .__delta2 = */ 29352
	},
	/* [22] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::CenterHouseViewOnMe,
		/* .__delta2 = */ 28704
	},
	/* [23] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetDrawLabel,
		/* .__delta2 = */ -31096
	},
	/* [24] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsSpriteVisible,
		/* .__delta2 = */ -31376
	},
	/* [25] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::RunTree,
		/* .__delta2 = */ 6712
	},
	/* [26] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::RunTree,
		/* .__delta2 = */ -29024
	},
	/* [27] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::RunTree,
		/* .__delta2 = */ -31288
	},
	/* [28] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::ParseUIString,
		/* .__delta2 = */ -24464
	},
	/* [29] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::Error,
		/* .__delta2 = */ 1848
	},
	/* [30] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::HandleError,
		/* .__delta2 = */ 1992
	},
	/* [31] = */ {
		/* .__delta = */ -72,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::Turn,
		/* .__delta2 = */ 25280
	},
	/* [32] = */ {
		/* .__delta = */ -72,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::Pickup,
		/* .__delta2 = */ 26936
	},
	/* [33] = */ {
		/* .__delta = */ -72,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::CanPlace,
		/* .__delta2 = */ 26016
	},
	/* [34] = */ {
		/* .__delta = */ -72,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::Place,
		/* .__delta2 = */ 26488
	},
	/* [35] = */ {
		/* .__delta = */ -72,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::IsPartOfMe,
		/* .__delta2 = */ 28568
	},
	/* [36] = */ {
		/* .__delta = */ -72,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::UserCanPlace,
		/* .__delta2 = */ 27088
	},
	/* [37] = */ {
		/* .__delta = */ -72,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::UserPlace,
		/* .__delta2 = */ 27552
	},
	/* [38] = */ {
		/* .__delta = */ -72,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::UserCanPickup,
		/* .__delta2 = */ 27920
	},
	/* [39] = */ {
		/* .__delta = */ -72,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::UserPickup,
		/* .__delta2 = */ 28056
	},
	/* [40] = */ {
		/* .__delta = */ -72,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::UserCanDelete,
		/* .__delta2 = */ 28432
	},
	/* [41] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::FindGoodLocation,
		/* .__delta2 = */ 27240
	},
	/* [42] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetPlacementInfo,
		/* .__delta2 = */ 13680
	},
	/* [43] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsInWorld,
		/* .__delta2 = */ 13832
	},
	/* [44] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::TestIntersection,
		/* .__delta2 = */ 20600
	},
	/* [45] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::ForceLocation,
		/* .__delta2 = */ 22040
	},
	/* [46] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetFnTable,
		/* .__delta2 = */ -28728
	},
	/* [47] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetTreeID,
		/* .__delta2 = */ -28696
	},
	/* [48] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetLevel,
		/* .__delta2 = */ -31448
	},
	/* [49] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsOccupied,
		/* .__delta2 = */ -28616
	},
	/* [50] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetData,
		/* .__delta2 = */ -28600
	},
	/* [51] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetTemp,
		/* .__delta2 = */ -28584
	},
	/* [52] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetAttr,
		/* .__delta2 = */ -28568
	},
	/* [53] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetObjectProbe,
		/* .__delta2 = */ -28544
	},
	/* [54] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetObjectProbe,
		/* .__delta2 = */ -28536
	},
	/* [55] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetInteractionLeader,
		/* .__delta2 = */ 29856
	},
	/* [56] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetFrontFaceDirection,
		/* .__delta2 = */ 28712
	},
	/* [57] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetFolder,
		/* .__delta2 = */ -28528
	},
	/* [58] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SimIndependent,
		/* .__delta2 = */ -28512
	},
	/* [59] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SimEnabled,
		/* .__delta2 = */ -28496
	},
	/* [60] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::EnableSim,
		/* .__delta2 = */ -28392
	},
	/* [61] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetIdleStatus,
		/* .__delta2 = */ -28272
	},
	/* [62] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetIdleStatus,
		/* .__delta2 = */ -28176
	},
	/* [63] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::ClearIdleStatus,
		/* .__delta2 = */ -28064
	},
	/* [64] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetRect,
		/* .__delta2 = */ -27968
	},
	/* [65] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetData,
		/* .__delta2 = */ -27960
	},
	/* [66] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetTemp,
		/* .__delta2 = */ -27944
	},
	/* [67] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetAttr,
		/* .__delta2 = */ -27928
	},
	/* [68] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetModule,
		/* .__delta2 = */ -27904
	},
	/* [69] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetAdultAnimTable,
		/* .__delta2 = */ -27896
	},
	/* [70] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetChildAnimTable,
		/* .__delta2 = */ -27864
	},
	/* [71] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::HideForCutaway,
		/* .__delta2 = */ -27832
	},
	/* [72] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetRequiredSegment,
		/* .__delta2 = */ -32568
	},
	/* [73] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::CountObjectSlots,
		/* .__delta2 = */ -27728
	},
	/* [74] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetObjectSlot,
		/* .__delta2 = */ 15904
	},
	/* [75] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetContainedObject,
		/* .__delta2 = */ -27688
	},
	/* [76] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetSlotHeight,
		/* .__delta2 = */ 24040
	},
	/* [77] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetContainer,
		/* .__delta2 = */ 15856
	},
	/* [78] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsContained,
		/* .__delta2 = */ 15696
	},
	/* [79] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetContainerID,
		/* .__delta2 = */ 15736
	},
	/* [80] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetContainedSlotNum,
		/* .__delta2 = */ 15816
	},
	/* [81] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetNextObjectSibling,
		/* .__delta2 = */ 14216
	},
	/* [82] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetPrevObjectSibling,
		/* .__delta2 = */ 14248
	},
	/* [83] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetRoom,
		/* .__delta2 = */ -27592
	},
	/* [84] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetDef,
		/* .__delta2 = */ -27584
	},
	/* [85] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetType,
		/* .__delta2 = */ -27576
	},
	/* [86] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetTypeName,
		/* .__delta2 = */ 24376
	},
	/* [87] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetID,
		/* .__delta2 = */ -27560
	},
	/* [88] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetLocation,
		/* .__delta2 = */ -27552
	},
	/* [89] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetLocation,
		/* .__delta2 = */ -27528
	},
	/* [90] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetLevel,
		/* .__delta2 = */ -31456
	},
	/* [91] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetCTilePt,
		/* .__delta2 = */ -31440
	},
	/* [92] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetTreeTab,
		/* .__delta2 = */ -27520
	},
	/* [93] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetSelector,
		/* .__delta2 = */ -27488
	},
	/* [94] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetBehavior,
		/* .__delta2 = */ -27480
	},
	/* [95] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetSelFile,
		/* .__delta2 = */ -27464
	},
	/* [96] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetTileWidth,
		/* .__delta2 = */ 29360
	},
	/* [97] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsMultiTile,
		/* .__delta2 = */ -27416
	},
	/* [98] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetFlags,
		/* .__delta2 = */ -27400
	},
	/* [99] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetWallPlacementFlags,
		/* .__delta2 = */ -27392
	},
	/* [100] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetRelMatrix,
		/* .__delta2 = */ -27384
	},
	/* [101] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetObstacleAtLocation,
		/* .__delta2 = */ 13424
	},
	/* [102] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetNumRoutingSlots,
		/* .__delta2 = */ -27376
	},
	/* [103] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetRoutingSlot,
		/* .__delta2 = */ -27352
	},
	/* [104] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetCurrentValue,
		/* .__delta2 = */ 9456
	},
	/* [105] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetSize,
		/* .__delta2 = */ -27336
	},
	/* [106] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetSim,
		/* .__delta2 = */ -27328
	},
	/* [107] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetErrorString,
		/* .__delta2 = */ 2680
	},
	/* [108] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetAgeInMinutes,
		/* .__delta2 = */ 29528
	},
	/* [109] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::CanChooseAutonomously,
		/* .__delta2 = */ -32400
	},
	/* [110] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetBuildModeType,
		/* .__delta2 = */ -27280
	},
	/* [111] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsSupport,
		/* .__delta2 = */ -27240
	},
	/* [112] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::ShouldAutoRotate,
		/* .__delta2 = */ 32016
	},
	/* [113] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::CanContributeLight,
		/* .__delta2 = */ -27184
	},
	/* [114] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetLightingContribution,
		/* .__delta2 = */ -27168
	},
	/* [115] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetObjectLightSource,
		/* .__delta2 = */ -27160
	},
	/* [116] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsDeletedByEvict,
		/* .__delta2 = */ 30752
	},
	/* [117] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsFromCatalog,
		/* .__delta2 = */ 31936
	},
	/* [118] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsBroken,
		/* .__delta2 = */ -27152
	},
	/* [119] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsDirty,
		/* .__delta2 = */ -27136
	},
	/* [120] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsBurning,
		/* .__delta2 = */ -27120
	},
	/* [121] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::CanBurn,
		/* .__delta2 = */ -27104
	},
	/* [122] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsFireproof,
		/* .__delta2 = */ -27088
	},
	/* [123] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::HasZeroExtent,
		/* .__delta2 = */ -27072
	},
	/* [124] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::CanIntersectPeople,
		/* .__delta2 = */ -27016
	},
	/* [125] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsChair,
		/* .__delta2 = */ -26888
	},
	/* [126] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetObjectFromID,
		/* .__delta2 = */ -26816
	},
	/* [127] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetNext,
		/* .__delta2 = */ -26760
	},
	/* [128] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetFirst,
		/* .__delta2 = */ -26736
	},
	/* [129] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetWallBlockFlags,
		/* .__delta2 = */ -31888
	},
	/* [130] = */ {
		/* .__delta = */ -72,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::ReconStream,
		/* .__delta2 = */ 28952
	},
	/* [131] = */ {
		/* .__delta = */ -72,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::ReconType,
		/* .__delta2 = */ 28936
	},
	/* [132] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::ReconSlots,
		/* .__delta2 = */ 26176
	},
	/* [133] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::ReconHeader,
		/* .__delta2 = */ 25032
	},
	/* [134] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::Backtrace,
		/* .__delta2 = */ 15360
	},
	/* [135] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetName,
		/* .__delta2 = */ -26616
	},
	/* [136] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetDebugName,
		/* .__delta2 = */ 1472
	},
	/* [137] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::AdvanceGraphic,
		/* .__delta2 = */ 32504
	},
	/* [138] = */ {
		/* .__delta = */ 68,
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

__vtbl_ptr_type cXMTObjectImpl::TreeSim virtual table[18] = {
	/* [0] = */ {
		/* .__delta = */ -40,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -40,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::~cXMTObjectImpl,
		/* .__delta2 = */ 20696
	},
	/* [2] = */ {
		/* .__delta = */ 48,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::Initialize,
		/* .__delta2 = */ 18040
	},
	/* [3] = */ {
		/* .__delta = */ 100,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::Simulate,
		/* .__delta2 = */ 4760
	},
	/* [4] = */ {
		/* .__delta = */ 48,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::SetError,
		/* .__delta2 = */ 16560
	},
	/* [5] = */ {
		/* .__delta = */ 48,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetError,
		/* .__delta2 = */ 16568
	},
	/* [6] = */ {
		/* .__delta = */ 48,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::ClearError,
		/* .__delta2 = */ 16576
	},
	/* [7] = */ {
		/* .__delta = */ 48,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetHighLevelAction,
		/* .__delta2 = */ 20552
	},
	/* [8] = */ {
		/* .__delta = */ 48,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetCurElem,
		/* .__delta2 = */ 20816
	},
	/* [9] = */ {
		/* .__delta = */ 48,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetMainSimElem,
		/* .__delta2 = */ 20872
	},
	/* [10] = */ {
		/* .__delta = */ 48,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetNthElem,
		/* .__delta2 = */ 21064
	},
	/* [11] = */ {
		/* .__delta = */ 48,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetStackSize,
		/* .__delta2 = */ 21104
	},
	/* [12] = */ {
		/* .__delta = */ 48,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetCurrentPrimitive,
		/* .__delta2 = */ 18200
	},
	/* [13] = */ {
		/* .__delta = */ 48,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetIterations,
		/* .__delta2 = */ 23888
	},
	/* [14] = */ {
		/* .__delta = */ 48,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetLastTransition,
		/* .__delta2 = */ 20384
	},
	/* [15] = */ {
		/* .__delta = */ 48,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetLastResult,
		/* .__delta2 = */ 23896
	},
	/* [16] = */ {
		/* .__delta = */ -40,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::GetISimInstance,
		/* .__delta2 = */ 24472
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type cXMTObject virtual table[14] = {
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type cXMTObject::cXObject virtual table[140] = {
	/* [0] = */ {
		/* .__delta = */ -40,
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
		/* .__delta = */ -40,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [33] = */ {
		/* .__delta = */ -40,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [34] = */ {
		/* .__delta = */ -40,
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
		/* .__delta = */ -40,
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

__vtbl_ptr_type cXMTObject::TreeSim virtual table[18] = {
	/* [0] = */ {
		/* .__delta = */ -8,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -8,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObject::~cXMTObject,
		/* .__delta2 = */ 16256
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

void cXMTObject::~cXMTObject(int __in_chrg) {
	void *pAddress;
	
  cXObject__21_1030 *pcVar1;
  ushort uVar2;
  ushort uVar3;
  __vtbl_ptr_type *p_Var4;
  __vtbl_ptr_type *p_Var5;
  __vtbl_ptr_type *p_Var6;
  cXObject__21_1030__vtable *pcVar7;
  __vtbl_ptr_type *p_Var8;
  __vtbl_ptr_type _Var9;
  __vtbl_ptr_type _Var10;
  __vtbl_ptr_type _Var11;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  undefined local_520 [8];
  __vtbl_ptr_type local_518 [17];
  undefined local_490 [264];
  short local_388;
  short local_380;
  short local_78;
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
  this->__vtable = (cXMTObject__123_3296__vtable *)_vt_10cXMTObject;
  this->_vb966->_vb899->__vtable = (TreeSim__vtable *)_vt_10cXMTObject_7TreeSim;
  this->_vb966->__vtable = (cXObject__21_1030__vtable *)_vt_10cXMTObject_8cXObject;
  uVar3 = _vt_10cXMTObject_7TreeSim[1].__delta;
  if (__in_chrg == 0) {
    p_Var8 = (__vtbl_ptr_type *)local_520;
    p_Var4 = _vt_10cXMTObject_7TreeSim;
    do {
      p_Var6 = p_Var4;
      p_Var5 = p_Var8;
      _Var9 = p_Var6[1];
      _Var10 = p_Var6[2];
      _Var11 = p_Var6[3];
      *p_Var5 = *p_Var6;
      p_Var5[1] = _Var9;
      p_Var5[2] = _Var10;
      p_Var5[3] = _Var11;
      p_Var8 = p_Var5 + 4;
      p_Var4 = p_Var6 + 4;
    } while (p_Var6 + 4 != _vt_10cXMTObject_7TreeSim + 0x10);
    pcVar1 = this->_vb966;
    _Var9 = p_Var6[5];
    p_Var5[4] = _vt_10cXMTObject_7TreeSim[16];
    p_Var5[5] = _Var9;
    p_Var8 = _vt_10cXMTObject_8cXObject;
    pcVar1->_vb899->__vtable = (TreeSim__vtable *)local_520;
    uVar2 = _vt_10cXMTObject_8cXObject[131].__delta;
    local_518[0].__delta = uVar3 + ((short)this - ((short)this->_vb966->_vb899 + -8));
    pcVar7 = (cXObject__21_1030__vtable *)local_490;
    do {
      _Var9 = p_Var8[1];
      _Var10 = p_Var8[2];
      _Var11 = p_Var8[3];
      *(__vtbl_ptr_type *)pcVar7 = *p_Var8;
      *(__vtbl_ptr_type *)&pcVar7->GetNumAttr = _Var9;
      *(__vtbl_ptr_type *)&pcVar7->CalcShortDistance = _Var10;
      *(__vtbl_ptr_type *)&pcVar7->GetSpriteSlot = _Var11;
      p_Var8 = p_Var8 + 4;
      pcVar7 = (cXObject__21_1030__vtable *)&pcVar7->GetHilite;
    } while (p_Var8 != _vt_10cXMTObject_7TreeSim);
    this->_vb966->__vtable = (cXObject__21_1030__vtable *)local_490;
    local_380 = (short)this - ((short)this->_vb966 + -0x28);
    local_78 = uVar2 + local_380;
    local_490._256_2_ = _vt_10cXMTObject_8cXObject[32].__delta + local_380;
    local_388 = _vt_10cXMTObject_8cXObject[33].__delta + local_380;
    local_380 = _vt_10cXMTObject_8cXObject[34].__delta + local_380;
  }
  if ((__in_chrg & 2U) != 0) {
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

cXMTObjectImpl* cXMTObjectImpl::cXMTObjectImpl(int __in_chrg, ObjSelector *sel, cXMTObject *leader, ObjectModule *module) {
	__vtbl_ptr_type _vt$14cXMTObjectImpl$7TreeSim[18];
	__vtbl_ptr_type _vt$14cXMTObjectImpl$8cXObject[140];
	__vtbl_ptr_type _vt$14cXMTObjectImpl$10cXMTObject[14];
	__vtbl_ptr_type _vt$14cXMTObjectImpl$11TreeSimImpl[6];
	__vtbl_ptr_type _vt$14cXMTObjectImpl$12cXObjectImpl[8];
	cXObject *this;
	cXMTObject *this;
	cXMTObject *this;
	cXMTObjectImpl *obj;
	cXMTObjectImpl *obj;
	cXObject *this;
	TreeSim *this;
	cXMTObjectImpl *obj;
	
  int *piVar1;
  cXMTObject__123_3296 *pcVar2;
  cXObjectImpl__138_901 *pcVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined6 uVar7;
  undefined6 uVar8;
  ushort uVar9;
  undefined6 uVar10;
  undefined6 uVar11;
  undefined6 uVar12;
  undefined6 uVar13;
  ushort uVar14;
  ushort uVar15;
  TreeSim__vtable *pTVar16;
  cXMTObject__123_3296__vtable *pcVar17;
  undefined *this_00;
  __vtbl_ptr_type *p_Var18;
  TreeSim__vtable *pTVar19;
  __vtbl_ptr_type *p_Var20;
  __vtbl_ptr_type *p_Var21;
  cXObject__21_1030__vtable *pcVar22;
  __vtbl_ptr_type *p_Var23;
  __vtbl_ptr_type _Var24;
  __vtbl_ptr_type _Var25;
  __vtbl_ptr_type _Var26;
  cXMTObject__123_3296__vtable *pcVar27;
  __vtbl_ptr_type local_c90;
  __vtbl_ptr_type local_c88 [35];
  undefined local_b70 [8];
  undefined8 local_b68 [17];
  undefined local_ae0 [264];
  short local_9d8;
  short local_9d0;
  short local_6c8;
  __vtbl_ptr_type _vt_14cXMTObjectImpl_7TreeSim [18];
  __vtbl_ptr_type _vt_14cXMTObjectImpl_8cXObject [140];
  __vtbl_ptr_type _vt_14cXMTObjectImpl_10cXMTObject [14];
  __vtbl_ptr_type _vt_14cXMTObjectImpl_11TreeSimImpl [6];
  __vtbl_ptr_type _vt_14cXMTObjectImpl_12cXObjectImpl [8];
  cXMTObject__123_3296 *local_b0;
  TreeSimImpl__21_3338__vtable *local_ac;
  cXObjectImpl__138_901__vtable *local_a8;
  
  local_b0 = leader;
  if (__in_chrg != 0) {
    this_00 = &this->field_0x28;
    *(undefined **)&this->field_0x50 = &this->field_0x48;
    this->_vb1079 = (cXMTObject__123_3296 *)&this->field_0x50;
    this->_vb901 = (cXObjectImpl__138_901 *)&this->field_0x8c;
    *(undefined **)&this->field_0x58 = this_00;
    *(undefined **)&this->field_0x90 = &this->field_0x48;
    *(undefined **)&this->field_0x48 = this_00;
    *(undefined **)&this->field_0x8c = &this->field_0x58;
    __7TreeSim((TreeSim *)this_00);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    piVar1 = *(int **)&this->field_0x90;
    *(__vtbl_ptr_type **)(*piVar1 + 0x1c) = _vt_8cXObject_7TreeSim;
    p_Var23 = &local_c90;
    p_Var21 = _vt_8cXObject_7TreeSim;
    do {
      p_Var18 = p_Var21;
      p_Var20 = p_Var23;
      _Var24 = p_Var18[1];
      _Var25 = p_Var18[2];
      _Var26 = p_Var18[3];
      *p_Var20 = *p_Var18;
      p_Var20[1] = _Var24;
      p_Var20[2] = _Var25;
      p_Var20[3] = _Var26;
      p_Var23 = p_Var20 + 4;
      p_Var21 = p_Var18 + 4;
    } while (p_Var18 + 4 != _vt_8cXObject_7TreeSim + 0x10);
    _Var24 = p_Var18[5];
    p_Var20[4] = _vt_8cXObject_7TreeSim[16];
    p_Var20[5] = _Var24;
    *(__vtbl_ptr_type **)(*piVar1 + 0x1c) = &local_c90;
    local_c88[0].__delta =
         _vt_8cXObject_7TreeSim[1].__delta + ((short)piVar1 - ((short)*piVar1 + -8));
                    /* end of inlined section */
    piVar1[1] = (int)_vt_8cXObject;
    if (__in_chrg != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
      pcVar2 = this->_vb1079;
      pcVar2->_vb966->_vb899->__vtable = (TreeSim__vtable *)_vt_10cXMTObject_7TreeSim;
      pcVar2->_vb966->__vtable = (cXObject__21_1030__vtable *)_vt_10cXMTObject_8cXObject;
      p_Var23 = _vt_10cXMTObject_7TreeSim;
      pTVar16 = (TreeSim__vtable *)local_b70;
      do {
        pTVar19 = pTVar16;
        p_Var21 = p_Var23;
        _Var24 = p_Var21[1];
        _Var25 = p_Var21[2];
        _Var26 = p_Var21[3];
        *(__vtbl_ptr_type *)pTVar19 = *p_Var21;
        *(__vtbl_ptr_type *)&pTVar19->Initialize = _Var24;
        *(__vtbl_ptr_type *)&pTVar19->SetError = _Var25;
        *(__vtbl_ptr_type *)&pTVar19->ClearError = _Var26;
        p_Var23 = p_Var21 + 4;
        pTVar16 = (TreeSim__vtable *)&pTVar19->GetCurElem;
      } while (p_Var21 + 4 != _vt_10cXMTObject_7TreeSim + 0x10);
      _Var24 = p_Var21[5];
      *(__vtbl_ptr_type *)&pTVar19->GetCurElem = _vt_10cXMTObject_7TreeSim[16];
      *(__vtbl_ptr_type *)&pTVar19->GetNthElem = _Var24;
      p_Var23 = _vt_10cXMTObject_8cXObject;
      pcVar2->_vb966->_vb899->__vtable = (TreeSim__vtable *)local_b70;
      local_b68[0]._0_2_ =
           _vt_10cXMTObject_7TreeSim[1].__delta +
           ((short)pcVar2 - ((short)pcVar2->_vb966->_vb899 + -8));
      pcVar22 = (cXObject__21_1030__vtable *)local_ae0;
      do {
        _Var25 = p_Var23[1];
        _Var26 = p_Var23[2];
        _Var24 = p_Var23[3];
        *(__vtbl_ptr_type *)pcVar22 = *p_Var23;
        *(__vtbl_ptr_type *)&pcVar22->GetNumAttr = _Var25;
        *(__vtbl_ptr_type *)&pcVar22->CalcShortDistance = _Var26;
        *(__vtbl_ptr_type *)&pcVar22->GetSpriteSlot = _Var24;
        p_Var23 = p_Var23 + 4;
        pcVar22 = (cXObject__21_1030__vtable *)&pcVar22->GetHilite;
      } while (p_Var23 != _vt_10cXMTObject_7TreeSim);
      pcVar2->_vb966->__vtable = (cXObject__21_1030__vtable *)local_ae0;
      local_9d0 = (short)pcVar2 - ((short)pcVar2->_vb966 + -0x28);
      local_6c8 = _vt_10cXMTObject_8cXObject[131].__delta + local_9d0;
      local_ae0._256_2_ = _vt_10cXMTObject_8cXObject[32].__delta + local_9d0;
      local_9d8 = _vt_10cXMTObject_8cXObject[33].__delta + local_9d0;
      local_9d0 = _vt_10cXMTObject_8cXObject[34].__delta + local_9d0;
                    /* end of inlined section */
      pcVar2->__vtable = (cXMTObject__123_3296__vtable *)_vt_10cXMTObject;
      if (__in_chrg != 0) {
        __11TreeSimImpli(*(TreeSimImpl__21_3338 **)&this->field_0x8c,0);
        __12cXObjectImpliP11ObjSelectorP12ObjectModule
                  ((cXObjectImpl__127_901 *)this->_vb901,0,sel,module);
      }
    }
  }
  this->_vb1079->_vb966->_vb899->__vtable = (TreeSim__vtable *)::_vt_14cXMTObjectImpl_7TreeSim;
  this->_vb1079->_vb966->__vtable = (cXObject__21_1030__vtable *)::_vt_14cXMTObjectImpl_8cXObject;
  this->_vb1079->__vtable = (cXMTObject__123_3296__vtable *)::_vt_14cXMTObjectImpl_10cXMTObject;
  this->_vb901->_vb1187->__vtable =
       (TreeSimImpl__21_3338__vtable *)::_vt_14cXMTObjectImpl_11TreeSimImpl;
  this->_vb901->__vtable = (cXObjectImpl__138_901__vtable *)::_vt_14cXMTObjectImpl_12cXObjectImpl;
  uVar15 = ::_vt_14cXMTObjectImpl_7TreeSim[2].__delta;
  uVar9 = ::_vt_14cXMTObjectImpl_7TreeSim[1].__delta;
  if (__in_chrg == 0) {
    local_ac = (TreeSimImpl__21_3338__vtable *)_vt_14cXMTObjectImpl_11TreeSimImpl;
    local_a8 = (cXObjectImpl__138_901__vtable *)_vt_14cXMTObjectImpl_12cXObjectImpl;
    p_Var23 = ::_vt_14cXMTObjectImpl_7TreeSim;
    pTVar16 = (TreeSim__vtable *)_vt_14cXMTObjectImpl_7TreeSim;
    do {
      pTVar19 = pTVar16;
      p_Var21 = p_Var23;
      _Var24 = p_Var21[1];
      _Var25 = p_Var21[2];
      _Var26 = p_Var21[3];
      *(__vtbl_ptr_type *)pTVar19 = *p_Var21;
      *(__vtbl_ptr_type *)&pTVar19->Initialize = _Var24;
      *(__vtbl_ptr_type *)&pTVar19->SetError = _Var25;
      *(__vtbl_ptr_type *)&pTVar19->ClearError = _Var26;
      p_Var23 = p_Var21 + 4;
      pTVar16 = (TreeSim__vtable *)&pTVar19->GetCurElem;
    } while (p_Var21 + 4 != ::_vt_14cXMTObjectImpl_7TreeSim + 0x10);
    pcVar2 = this->_vb1079;
    _Var24 = p_Var21[5];
    *(ulong *)&pTVar19->GetCurElem =
         CONCAT62(::_vt_14cXMTObjectImpl_7TreeSim[16]._2_6_,
                  ::_vt_14cXMTObjectImpl_7TreeSim[16].__delta);
    p_Var23 = ::_vt_14cXMTObjectImpl_8cXObject;
    *(__vtbl_ptr_type *)&pTVar19->GetNthElem = _Var24;
    pcVar2->_vb966->_vb899->__vtable = (TreeSim__vtable *)_vt_14cXMTObjectImpl_7TreeSim;
    uVar14 = ::_vt_14cXMTObjectImpl_8cXObject[1].__delta;
    sVar6 = (short)this;
    sVar4 = sVar6 - ((short)this->_vb1079->_vb966->_vb899 + -0x28);
    _vt_14cXMTObjectImpl_7TreeSim[1].__delta = uVar9 + sVar4;
    sVar5 = sVar6 - ((short)this->_vb901->_vb1187 + -0x58);
    _vt_14cXMTObjectImpl_7TreeSim[3].__delta =
         (::_vt_14cXMTObjectImpl_7TreeSim[3].__delta + sVar4) -
         (sVar6 - ((short)this->_vb901 + -0x8c));
    _vt_14cXMTObjectImpl_7TreeSim[2].__delta = (uVar15 + sVar4) - sVar5;
    _vt_14cXMTObjectImpl_7TreeSim[4].__delta =
         (::_vt_14cXMTObjectImpl_7TreeSim[4].__delta + sVar4) - sVar5;
    _vt_14cXMTObjectImpl_7TreeSim[5].__delta =
         (::_vt_14cXMTObjectImpl_7TreeSim[5].__delta + sVar4) - sVar5;
    _vt_14cXMTObjectImpl_7TreeSim[6].__delta =
         (::_vt_14cXMTObjectImpl_7TreeSim[6].__delta + sVar4) - sVar5;
    _vt_14cXMTObjectImpl_7TreeSim[7].__delta =
         (::_vt_14cXMTObjectImpl_7TreeSim[7].__delta + sVar4) - sVar5;
    _vt_14cXMTObjectImpl_7TreeSim[8].__delta =
         (::_vt_14cXMTObjectImpl_7TreeSim[8].__delta + sVar4) - sVar5;
    _vt_14cXMTObjectImpl_7TreeSim[9].__delta =
         (::_vt_14cXMTObjectImpl_7TreeSim[9].__delta + sVar4) - sVar5;
    _vt_14cXMTObjectImpl_7TreeSim[10].__delta =
         (::_vt_14cXMTObjectImpl_7TreeSim[10].__delta + sVar4) - sVar5;
    _vt_14cXMTObjectImpl_7TreeSim[11].__delta =
         (::_vt_14cXMTObjectImpl_7TreeSim[11].__delta + sVar4) - sVar5;
    _vt_14cXMTObjectImpl_7TreeSim[12].__delta =
         (::_vt_14cXMTObjectImpl_7TreeSim[12].__delta + sVar4) - sVar5;
    _vt_14cXMTObjectImpl_7TreeSim[13].__delta =
         (::_vt_14cXMTObjectImpl_7TreeSim[13].__delta + sVar4) - sVar5;
    _vt_14cXMTObjectImpl_7TreeSim[15].__delta =
         (::_vt_14cXMTObjectImpl_7TreeSim[15].__delta + sVar4) - sVar5;
    _vt_14cXMTObjectImpl_7TreeSim[16].__delta = ::_vt_14cXMTObjectImpl_7TreeSim[16].__delta + sVar4;
    _vt_14cXMTObjectImpl_7TreeSim[14].__delta =
         (::_vt_14cXMTObjectImpl_7TreeSim[14].__delta + sVar4) - sVar5;
    pcVar22 = (cXObject__21_1030__vtable *)_vt_14cXMTObjectImpl_8cXObject;
    do {
      _Var25 = p_Var23[1];
      _Var26 = p_Var23[2];
      _Var24 = p_Var23[3];
      *(__vtbl_ptr_type *)pcVar22 = *p_Var23;
      *(__vtbl_ptr_type *)&pcVar22->GetNumAttr = _Var25;
      *(__vtbl_ptr_type *)&pcVar22->CalcShortDistance = _Var26;
      *(__vtbl_ptr_type *)&pcVar22->GetSpriteSlot = _Var24;
      p_Var23 = p_Var23 + 4;
      pcVar22 = (cXObject__21_1030__vtable *)&pcVar22->GetHilite;
    } while (p_Var23 != ::_vt_14cXMTObjectImpl_7TreeSim);
    this->_vb1079->_vb966->__vtable = (cXObject__21_1030__vtable *)_vt_14cXMTObjectImpl_8cXObject;
    sVar5 = sVar6 - ((short)this->_vb1079->_vb966 + -0x48);
    sVar4 = sVar6 - ((short)this->_vb901 + -0x8c);
    _vt_14cXMTObjectImpl_8cXObject[1].__delta = (uVar14 + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[2].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[2].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[3].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[3].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[4].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[4].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[5].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[5].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[6].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[6].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[7].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[7].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[8].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[8].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[9].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[9].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[10].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[10].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[11].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[11].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[12].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[12].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[13].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[13].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[14].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[14].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[15].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[15].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[16].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[16].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[17].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[17].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[18].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[18].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[19].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[19].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[20].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[20].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[21].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[21].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[22].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[22].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[23].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[23].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[24].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[24].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[25].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[25].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[26].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[26].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[27].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[27].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[28].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[28].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[29].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[29].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[30].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[30].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[31].__delta =
         ::_vt_14cXMTObjectImpl_8cXObject[31].__delta + sVar5;
    _vt_14cXMTObjectImpl_8cXObject[32].__delta =
         ::_vt_14cXMTObjectImpl_8cXObject[32].__delta + sVar5;
    _vt_14cXMTObjectImpl_8cXObject[33].__delta =
         ::_vt_14cXMTObjectImpl_8cXObject[33].__delta + sVar5;
    _vt_14cXMTObjectImpl_8cXObject[34].__delta =
         ::_vt_14cXMTObjectImpl_8cXObject[34].__delta + sVar5;
    _vt_14cXMTObjectImpl_8cXObject[35].__delta =
         ::_vt_14cXMTObjectImpl_8cXObject[35].__delta + sVar5;
    _vt_14cXMTObjectImpl_8cXObject[36].__delta =
         ::_vt_14cXMTObjectImpl_8cXObject[36].__delta + sVar5;
    _vt_14cXMTObjectImpl_8cXObject[37].__delta =
         ::_vt_14cXMTObjectImpl_8cXObject[37].__delta + sVar5;
    _vt_14cXMTObjectImpl_8cXObject[38].__delta =
         ::_vt_14cXMTObjectImpl_8cXObject[38].__delta + sVar5;
    _vt_14cXMTObjectImpl_8cXObject[39].__delta =
         ::_vt_14cXMTObjectImpl_8cXObject[39].__delta + sVar5;
    _vt_14cXMTObjectImpl_8cXObject[40].__delta =
         ::_vt_14cXMTObjectImpl_8cXObject[40].__delta + sVar5;
    _vt_14cXMTObjectImpl_8cXObject[41].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[41].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[42].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[42].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[43].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[43].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[44].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[44].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[45].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[45].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[46].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[46].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[47].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[47].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[48].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[48].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[49].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[49].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[50].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[50].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[51].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[51].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[52].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[52].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[53].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[53].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[54].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[54].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[55].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[55].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[56].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[56].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[57].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[57].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[58].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[58].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[59].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[59].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[60].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[60].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[61].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[61].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[62].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[62].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[63].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[63].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[64].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[64].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[65].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[65].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[66].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[66].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[67].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[67].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[68].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[68].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[69].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[69].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[70].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[70].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[71].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[71].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[72].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[72].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[73].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[73].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[74].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[74].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[75].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[75].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[76].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[76].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[77].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[77].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[78].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[78].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[79].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[79].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[80].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[80].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[81].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[81].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[82].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[82].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[83].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[83].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[84].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[84].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[85].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[85].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[86].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[86].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[87].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[87].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[88].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[88].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[89].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[89].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[90].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[90].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[91].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[91].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[92].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[92].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[93].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[93].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[94].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[94].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[95].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[95].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[96].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[96].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[97].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[97].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[98].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[98].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[99].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[99].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[100].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[100].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[101].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[101].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[102].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[102].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[103].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[103].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[104].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[104].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[105].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[105].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[106].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[106].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[107].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[107].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[108].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[108].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[109].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[109].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[110].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[110].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[111].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[111].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[112].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[112].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[113].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[113].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[114].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[114].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[115].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[115].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[116].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[116].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[127].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[127].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[128].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[128].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[129].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[129].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[132].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[132].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[117].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[117].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[118].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[118].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[119].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[119].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[120].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[120].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[121].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[121].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[122].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[122].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[123].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[123].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[124].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[124].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[125].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[125].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[126].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[126].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[130].__delta =
         ::_vt_14cXMTObjectImpl_8cXObject[130].__delta + sVar5;
    _vt_14cXMTObjectImpl_8cXObject[131].__delta =
         ::_vt_14cXMTObjectImpl_8cXObject[131].__delta + sVar5;
    _vt_14cXMTObjectImpl_8cXObject[133].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[133].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[138].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[138].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[134].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[134].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[135].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[135].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[136].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[136].__delta + sVar5) - sVar4;
    _vt_14cXMTObjectImpl_8cXObject[137].__delta =
         (::_vt_14cXMTObjectImpl_8cXObject[137].__delta + sVar5) - sVar4;
    pcVar17 = (cXMTObject__123_3296__vtable *)_vt_14cXMTObjectImpl_10cXMTObject;
    p_Var23 = ::_vt_14cXMTObjectImpl_10cXMTObject;
    do {
      p_Var21 = p_Var23;
      pcVar27 = pcVar17;
      _Var24 = p_Var21[1];
      _Var25 = p_Var21[2];
      _Var26 = p_Var21[3];
      *(__vtbl_ptr_type *)pcVar27 = *p_Var21;
      *(__vtbl_ptr_type *)&pcVar27->GetFirstMultiTileObject = _Var24;
      *(__vtbl_ptr_type *)&pcVar27->Reset = _Var25;
      *(__vtbl_ptr_type *)&pcVar27->PostLoad = _Var26;
      pcVar17 = (cXMTObject__123_3296__vtable *)&pcVar27->DirtyAll;
      p_Var23 = p_Var21 + 4;
    } while (p_Var21 + 4 != ::_vt_14cXMTObjectImpl_10cXMTObject + 0xc);
    pcVar2 = this->_vb1079;
    _Var24 = p_Var21[5];
    *(ulong *)&pcVar27->DirtyAll =
         CONCAT62(::_vt_14cXMTObjectImpl_10cXMTObject[12]._2_6_,
                  ::_vt_14cXMTObjectImpl_10cXMTObject[12].__delta);
    *(__vtbl_ptr_type *)&pcVar27->MergeInPlace = _Var24;
    pcVar2->__vtable = (cXMTObject__123_3296__vtable *)_vt_14cXMTObjectImpl_10cXMTObject;
    uVar10 = ::_vt_14cXMTObjectImpl_11TreeSimImpl[4]._2_6_;
    uVar9 = ::_vt_14cXMTObjectImpl_11TreeSimImpl[4].__delta;
    uVar8 = ::_vt_14cXMTObjectImpl_11TreeSimImpl[2]._2_6_;
    uVar7 = ::_vt_14cXMTObjectImpl_11TreeSimImpl[1]._2_6_;
    sVar4 = sVar6 - ((short)this->_vb1079 + -0x50);
    _vt_14cXMTObjectImpl_10cXMTObject[1].__delta =
         ::_vt_14cXMTObjectImpl_10cXMTObject[1].__delta + sVar4;
    _vt_14cXMTObjectImpl_10cXMTObject[2].__delta =
         ::_vt_14cXMTObjectImpl_10cXMTObject[2].__delta + sVar4;
    _vt_14cXMTObjectImpl_10cXMTObject[3].__delta =
         ::_vt_14cXMTObjectImpl_10cXMTObject[3].__delta + sVar4;
    _vt_14cXMTObjectImpl_10cXMTObject[4].__delta =
         ::_vt_14cXMTObjectImpl_10cXMTObject[4].__delta + sVar4;
    _vt_14cXMTObjectImpl_10cXMTObject[5].__delta =
         ::_vt_14cXMTObjectImpl_10cXMTObject[5].__delta + sVar4;
    _vt_14cXMTObjectImpl_10cXMTObject[6].__delta =
         ::_vt_14cXMTObjectImpl_10cXMTObject[6].__delta + sVar4;
    _vt_14cXMTObjectImpl_10cXMTObject[7].__delta =
         ::_vt_14cXMTObjectImpl_10cXMTObject[7].__delta + sVar4;
    _vt_14cXMTObjectImpl_10cXMTObject[8].__delta =
         ::_vt_14cXMTObjectImpl_10cXMTObject[8].__delta + sVar4;
    _vt_14cXMTObjectImpl_10cXMTObject[9].__delta =
         ::_vt_14cXMTObjectImpl_10cXMTObject[9].__delta + sVar4;
    _vt_14cXMTObjectImpl_10cXMTObject[10].__delta =
         ::_vt_14cXMTObjectImpl_10cXMTObject[10].__delta + sVar4;
    _vt_14cXMTObjectImpl_10cXMTObject[11].__delta =
         ::_vt_14cXMTObjectImpl_10cXMTObject[11].__delta + sVar4;
    _vt_14cXMTObjectImpl_10cXMTObject[12].__delta =
         ::_vt_14cXMTObjectImpl_10cXMTObject[12].__delta + sVar4;
    _vt_14cXMTObjectImpl_11TreeSimImpl[0] = ::_vt_14cXMTObjectImpl_11TreeSimImpl[0];
    _vt_14cXMTObjectImpl_11TreeSimImpl[3] = ::_vt_14cXMTObjectImpl_11TreeSimImpl[3];
    _vt_14cXMTObjectImpl_11TreeSimImpl[5] = ::_vt_14cXMTObjectImpl_11TreeSimImpl[5];
    this->_vb901->_vb1187->__vtable = local_ac;
    uVar13 = ::_vt_14cXMTObjectImpl_12cXObjectImpl[5]._2_6_;
    uVar12 = ::_vt_14cXMTObjectImpl_12cXObjectImpl[4]._2_6_;
    uVar11 = ::_vt_14cXMTObjectImpl_12cXObjectImpl[3]._2_6_;
    pcVar3 = this->_vb901;
    sVar4 = sVar6 - ((short)pcVar3 + -0x8c);
    sVar5 = sVar6 - ((short)pcVar3->_vb1187 + -0x58);
    _vt_14cXMTObjectImpl_11TreeSimImpl[1] =
         (__vtbl_ptr_type)
         CONCAT62(uVar7,(::_vt_14cXMTObjectImpl_11TreeSimImpl[1].__delta + sVar5) - sVar4);
    _vt_14cXMTObjectImpl_11TreeSimImpl[2] =
         (__vtbl_ptr_type)
         CONCAT62(uVar8,(::_vt_14cXMTObjectImpl_11TreeSimImpl[2].__delta + sVar5) - sVar4);
    _vt_14cXMTObjectImpl_11TreeSimImpl[4] =
         (__vtbl_ptr_type)CONCAT62(uVar10,(uVar9 + sVar5) - sVar4);
    _vt_14cXMTObjectImpl_12cXObjectImpl[0] = ::_vt_14cXMTObjectImpl_12cXObjectImpl[0];
    _vt_14cXMTObjectImpl_12cXObjectImpl[1] = ::_vt_14cXMTObjectImpl_12cXObjectImpl[1];
    _vt_14cXMTObjectImpl_12cXObjectImpl[2] = ::_vt_14cXMTObjectImpl_12cXObjectImpl[2];
    _vt_14cXMTObjectImpl_12cXObjectImpl[6] = ::_vt_14cXMTObjectImpl_12cXObjectImpl[6];
    _vt_14cXMTObjectImpl_12cXObjectImpl[7] = ::_vt_14cXMTObjectImpl_12cXObjectImpl[7];
    pcVar3->__vtable = local_a8;
    sVar6 = sVar6 - ((short)this->_vb901 + -0x8c);
    _vt_14cXMTObjectImpl_12cXObjectImpl[3] =
         (__vtbl_ptr_type)CONCAT62(uVar11,::_vt_14cXMTObjectImpl_12cXObjectImpl[3].__delta + sVar6);
    _vt_14cXMTObjectImpl_12cXObjectImpl[4] =
         (__vtbl_ptr_type)CONCAT62(uVar12,::_vt_14cXMTObjectImpl_12cXObjectImpl[4].__delta + sVar6);
    _vt_14cXMTObjectImpl_12cXObjectImpl[5] =
         (__vtbl_ptr_type)CONCAT62(uVar13,::_vt_14cXMTObjectImpl_12cXObjectImpl[5].__delta + sVar6);
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
                    /* end of inlined section */
  this->_vb1079->_vb966->_vb899->m_pMTObject = this;
  SetLeader__14cXMTObjectImplP10cXMTObject(this,local_b0);
  this->fLevelOff = 0;
  this->fYOff = 0;
  this->fXOff = 0;
  this->fNormLevelOff = 0;
  this->fNormYOff = 0;
  this->fNormXOff = 0;
  return this;
}

void cXMTObjectImpl::~cXMTObjectImpl(int __in_chrg) {
	void *pAddress;
	
  cXMTObject__123_3296 *pcVar1;
  cXObjectImpl__138_901 *pcVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined6 uVar6;
  undefined6 uVar7;
  ushort uVar8;
  undefined6 uVar9;
  undefined6 uVar10;
  undefined6 uVar11;
  undefined6 uVar12;
  ushort uVar13;
  ushort uVar14;
  cXMTObject__123_3296__vtable *pcVar15;
  __vtbl_ptr_type *p_Var16;
  __vtbl_ptr_type *p_Var17;
  __vtbl_ptr_type _Var18;
  __vtbl_ptr_type _Var19;
  __vtbl_ptr_type _Var20;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  cXObject__21_1030__vtable *pcVar21;
  undefined8 unaff_s2;
  __vtbl_ptr_type *p_Var22;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  cXMTObject__123_3296__vtable *pcVar23;
  __vtbl_ptr_type *p_Var24;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  undefined local_680 [8];
  __vtbl_ptr_type local_678;
  __vtbl_ptr_type local_670;
  __vtbl_ptr_type local_668;
  __vtbl_ptr_type local_660;
  __vtbl_ptr_type local_658;
  short local_650;
  short local_648;
  short local_640;
  short local_638;
  short local_630;
  short local_628;
  short local_620;
  short local_618;
  short local_610;
  short local_608;
  short local_600;
  undefined local_5f0 [8];
  undefined8 local_5e8;
  short local_5e0;
  short local_5d8;
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
  short local_558;
  short local_550;
  short local_548;
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
  undefined8 local_190;
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
  __vtbl_ptr_type local_120;
  undefined8 local_118;
  undefined8 local_110;
  __vtbl_ptr_type local_108;
  undefined8 local_100;
  __vtbl_ptr_type local_f8;
  __vtbl_ptr_type local_f0;
  __vtbl_ptr_type local_e8;
  __vtbl_ptr_type local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  __vtbl_ptr_type local_c0;
  __vtbl_ptr_type local_b8;
  TreeSimImpl__21_3338__vtable *local_b0;
  cXObjectImpl__138_901__vtable *local_ac;
  undefined *local_a0;
  undefined *puStack_9c;
  undefined *local_90;
  undefined *puStack_8c;
  undefined *local_80;
  undefined *puStack_7c;
  undefined *local_70;
  undefined *puStack_6c;
  undefined *local_60;
  undefined *puStack_5c;
  undefined *local_50;
  undefined *puStack_4c;
  undefined *local_40;
  undefined *puStack_3c;
  undefined *local_30;
  undefined *puStack_2c;
  undefined *local_20;
  undefined *puStack_1c;
  undefined *local_10;
  undefined *puStack_c;
  
  local_30 = (undefined *)unaff_s7;
  puStack_2c = (undefined *)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined *)unaff_s6;
  puStack_3c = (undefined *)((ulong)unaff_s6 >> 0x20);
  local_10 = (undefined *)unaff_retaddr;
  puStack_c = (undefined *)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined *)unaff_s8;
  puStack_1c = (undefined *)((ulong)unaff_s8 >> 0x20);
  local_50 = (undefined *)unaff_s5;
  puStack_4c = (undefined *)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined *)unaff_s4;
  puStack_5c = (undefined *)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined *)unaff_s3;
  puStack_6c = (undefined *)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined *)unaff_s2;
  puStack_7c = (undefined *)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined *)unaff_s1;
  puStack_8c = (undefined *)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined *)unaff_s0;
  puStack_9c = (undefined *)((ulong)unaff_s0 >> 0x20);
  this->_vb1079->_vb966->_vb899->__vtable = (TreeSim__vtable *)_vt_14cXMTObjectImpl_7TreeSim;
  this->_vb1079->_vb966->__vtable = (cXObject__21_1030__vtable *)_vt_14cXMTObjectImpl_8cXObject;
  this->_vb1079->__vtable = (cXMTObject__123_3296__vtable *)_vt_14cXMTObjectImpl_10cXMTObject;
  this->_vb901->_vb1187->__vtable =
       (TreeSimImpl__21_3338__vtable *)_vt_14cXMTObjectImpl_11TreeSimImpl;
  this->_vb901->__vtable = (cXObjectImpl__138_901__vtable *)_vt_14cXMTObjectImpl_12cXObjectImpl;
  uVar14 = _vt_14cXMTObjectImpl_7TreeSim[2].__delta;
  uVar8 = _vt_14cXMTObjectImpl_7TreeSim[1].__delta;
  if (__in_chrg == 0) {
    local_b0 = (TreeSimImpl__21_3338__vtable *)&local_120;
    local_ac = (cXObjectImpl__138_901__vtable *)&local_f0;
    p_Var22 = (__vtbl_ptr_type *)local_680;
    p_Var24 = _vt_14cXMTObjectImpl_7TreeSim;
    do {
      p_Var17 = p_Var24;
      p_Var16 = p_Var22;
      _Var19 = p_Var17[1];
      _Var20 = p_Var17[2];
      _Var18 = p_Var17[3];
      *p_Var16 = *p_Var17;
      p_Var16[1] = _Var19;
      p_Var16[2] = _Var20;
      p_Var16[3] = _Var18;
      p_Var22 = p_Var16 + 4;
      p_Var24 = p_Var17 + 4;
    } while (p_Var17 + 4 != _vt_14cXMTObjectImpl_7TreeSim + 0x10);
    pcVar1 = this->_vb1079;
    _Var18 = p_Var17[5];
    p_Var16[4] = (__vtbl_ptr_type)
                 CONCAT62(_vt_14cXMTObjectImpl_7TreeSim[16]._2_6_,
                          _vt_14cXMTObjectImpl_7TreeSim[16].__delta);
    p_Var22 = _vt_14cXMTObjectImpl_8cXObject;
    p_Var16[5] = _Var18;
    pcVar1->_vb966->_vb899->__vtable = (TreeSim__vtable *)local_680;
    uVar13 = _vt_14cXMTObjectImpl_8cXObject[1].__delta;
    sVar4 = (short)this;
    sVar3 = sVar4 - ((short)this->_vb1079->_vb966->_vb899 + -0x28);
    local_678.__delta = uVar8 + sVar3;
    local_610 = sVar4 - ((short)this->_vb901->_vb1187 + -0x58);
    local_668.__delta =
         (_vt_14cXMTObjectImpl_7TreeSim[3].__delta + sVar3) -
         (sVar4 - ((short)this->_vb901 + -0x8c));
    local_670.__delta = (uVar14 + sVar3) - local_610;
    local_660.__delta = (_vt_14cXMTObjectImpl_7TreeSim[4].__delta + sVar3) - local_610;
    local_658.__delta = (_vt_14cXMTObjectImpl_7TreeSim[5].__delta + sVar3) - local_610;
    local_650 = (_vt_14cXMTObjectImpl_7TreeSim[6].__delta + sVar3) - local_610;
    local_648 = (_vt_14cXMTObjectImpl_7TreeSim[7].__delta + sVar3) - local_610;
    local_640 = (_vt_14cXMTObjectImpl_7TreeSim[8].__delta + sVar3) - local_610;
    local_638 = (_vt_14cXMTObjectImpl_7TreeSim[9].__delta + sVar3) - local_610;
    local_630 = (_vt_14cXMTObjectImpl_7TreeSim[10].__delta + sVar3) - local_610;
    local_628 = (_vt_14cXMTObjectImpl_7TreeSim[11].__delta + sVar3) - local_610;
    local_620 = (_vt_14cXMTObjectImpl_7TreeSim[12].__delta + sVar3) - local_610;
    local_618 = (_vt_14cXMTObjectImpl_7TreeSim[13].__delta + sVar3) - local_610;
    local_608 = (_vt_14cXMTObjectImpl_7TreeSim[15].__delta + sVar3) - local_610;
    local_600 = _vt_14cXMTObjectImpl_7TreeSim[16].__delta + sVar3;
    local_610 = (_vt_14cXMTObjectImpl_7TreeSim[14].__delta + sVar3) - local_610;
    pcVar21 = (cXObject__21_1030__vtable *)local_5f0;
    do {
      _Var18 = p_Var22[1];
      _Var19 = p_Var22[2];
      _Var20 = p_Var22[3];
      *(__vtbl_ptr_type *)pcVar21 = *p_Var22;
      *(__vtbl_ptr_type *)&pcVar21->GetNumAttr = _Var18;
      *(__vtbl_ptr_type *)&pcVar21->CalcShortDistance = _Var19;
      *(__vtbl_ptr_type *)&pcVar21->GetSpriteSlot = _Var20;
      p_Var22 = p_Var22 + 4;
      pcVar21 = (cXObject__21_1030__vtable *)&pcVar21->GetHilite;
    } while (p_Var22 != _vt_14cXMTObjectImpl_7TreeSim);
    this->_vb1079->_vb966->__vtable = (cXObject__21_1030__vtable *)local_5f0;
    sVar3 = sVar4 - ((short)this->_vb1079->_vb966 + -0x48);
    local_1a8 = sVar4 - ((short)this->_vb901 + -0x8c);
    local_5e8._0_2_ = (uVar13 + sVar3) - local_1a8;
    local_5e0 = (_vt_14cXMTObjectImpl_8cXObject[2].__delta + sVar3) - local_1a8;
    local_5d8 = (_vt_14cXMTObjectImpl_8cXObject[3].__delta + sVar3) - local_1a8;
    local_5d0 = (_vt_14cXMTObjectImpl_8cXObject[4].__delta + sVar3) - local_1a8;
    local_5c8 = (_vt_14cXMTObjectImpl_8cXObject[5].__delta + sVar3) - local_1a8;
    local_5c0 = (_vt_14cXMTObjectImpl_8cXObject[6].__delta + sVar3) - local_1a8;
    local_5b8 = (_vt_14cXMTObjectImpl_8cXObject[7].__delta + sVar3) - local_1a8;
    local_5b0 = (_vt_14cXMTObjectImpl_8cXObject[8].__delta + sVar3) - local_1a8;
    local_5a8 = (_vt_14cXMTObjectImpl_8cXObject[9].__delta + sVar3) - local_1a8;
    local_5a0 = (_vt_14cXMTObjectImpl_8cXObject[10].__delta + sVar3) - local_1a8;
    local_598 = (_vt_14cXMTObjectImpl_8cXObject[11].__delta + sVar3) - local_1a8;
    local_590 = (_vt_14cXMTObjectImpl_8cXObject[12].__delta + sVar3) - local_1a8;
    local_588 = (_vt_14cXMTObjectImpl_8cXObject[13].__delta + sVar3) - local_1a8;
    local_580 = (_vt_14cXMTObjectImpl_8cXObject[14].__delta + sVar3) - local_1a8;
    local_578 = (_vt_14cXMTObjectImpl_8cXObject[15].__delta + sVar3) - local_1a8;
    local_570 = (_vt_14cXMTObjectImpl_8cXObject[16].__delta + sVar3) - local_1a8;
    local_568 = (_vt_14cXMTObjectImpl_8cXObject[17].__delta + sVar3) - local_1a8;
    local_560 = (_vt_14cXMTObjectImpl_8cXObject[18].__delta + sVar3) - local_1a8;
    local_558 = (_vt_14cXMTObjectImpl_8cXObject[19].__delta + sVar3) - local_1a8;
    local_550 = (_vt_14cXMTObjectImpl_8cXObject[20].__delta + sVar3) - local_1a8;
    local_548 = (_vt_14cXMTObjectImpl_8cXObject[21].__delta + sVar3) - local_1a8;
    local_540 = (_vt_14cXMTObjectImpl_8cXObject[22].__delta + sVar3) - local_1a8;
    local_538 = (_vt_14cXMTObjectImpl_8cXObject[23].__delta + sVar3) - local_1a8;
    local_530 = (_vt_14cXMTObjectImpl_8cXObject[24].__delta + sVar3) - local_1a8;
    local_528 = (_vt_14cXMTObjectImpl_8cXObject[25].__delta + sVar3) - local_1a8;
    local_520 = (_vt_14cXMTObjectImpl_8cXObject[26].__delta + sVar3) - local_1a8;
    local_518 = (_vt_14cXMTObjectImpl_8cXObject[27].__delta + sVar3) - local_1a8;
    local_510 = (_vt_14cXMTObjectImpl_8cXObject[28].__delta + sVar3) - local_1a8;
    local_508 = (_vt_14cXMTObjectImpl_8cXObject[29].__delta + sVar3) - local_1a8;
    local_500 = (_vt_14cXMTObjectImpl_8cXObject[30].__delta + sVar3) - local_1a8;
    local_4f8 = _vt_14cXMTObjectImpl_8cXObject[31].__delta + sVar3;
    local_4f0 = _vt_14cXMTObjectImpl_8cXObject[32].__delta + sVar3;
    local_4e8 = _vt_14cXMTObjectImpl_8cXObject[33].__delta + sVar3;
    local_4e0 = _vt_14cXMTObjectImpl_8cXObject[34].__delta + sVar3;
    local_4d8 = _vt_14cXMTObjectImpl_8cXObject[35].__delta + sVar3;
    local_4d0 = _vt_14cXMTObjectImpl_8cXObject[36].__delta + sVar3;
    local_4c8 = _vt_14cXMTObjectImpl_8cXObject[37].__delta + sVar3;
    local_4c0 = _vt_14cXMTObjectImpl_8cXObject[38].__delta + sVar3;
    local_4b8 = _vt_14cXMTObjectImpl_8cXObject[39].__delta + sVar3;
    local_4b0 = _vt_14cXMTObjectImpl_8cXObject[40].__delta + sVar3;
    local_4a8 = (_vt_14cXMTObjectImpl_8cXObject[41].__delta + sVar3) - local_1a8;
    local_4a0 = (_vt_14cXMTObjectImpl_8cXObject[42].__delta + sVar3) - local_1a8;
    local_498 = (_vt_14cXMTObjectImpl_8cXObject[43].__delta + sVar3) - local_1a8;
    local_490 = (_vt_14cXMTObjectImpl_8cXObject[44].__delta + sVar3) - local_1a8;
    local_488 = (_vt_14cXMTObjectImpl_8cXObject[45].__delta + sVar3) - local_1a8;
    local_480 = (_vt_14cXMTObjectImpl_8cXObject[46].__delta + sVar3) - local_1a8;
    local_478 = (_vt_14cXMTObjectImpl_8cXObject[47].__delta + sVar3) - local_1a8;
    local_470 = (_vt_14cXMTObjectImpl_8cXObject[48].__delta + sVar3) - local_1a8;
    local_468 = (_vt_14cXMTObjectImpl_8cXObject[49].__delta + sVar3) - local_1a8;
    local_460 = (_vt_14cXMTObjectImpl_8cXObject[50].__delta + sVar3) - local_1a8;
    local_458 = (_vt_14cXMTObjectImpl_8cXObject[51].__delta + sVar3) - local_1a8;
    local_450 = (_vt_14cXMTObjectImpl_8cXObject[52].__delta + sVar3) - local_1a8;
    local_448 = (_vt_14cXMTObjectImpl_8cXObject[53].__delta + sVar3) - local_1a8;
    local_440 = (_vt_14cXMTObjectImpl_8cXObject[54].__delta + sVar3) - local_1a8;
    local_438 = (_vt_14cXMTObjectImpl_8cXObject[55].__delta + sVar3) - local_1a8;
    local_430 = (_vt_14cXMTObjectImpl_8cXObject[56].__delta + sVar3) - local_1a8;
    local_428 = (_vt_14cXMTObjectImpl_8cXObject[57].__delta + sVar3) - local_1a8;
    local_420 = (_vt_14cXMTObjectImpl_8cXObject[58].__delta + sVar3) - local_1a8;
    local_418 = (_vt_14cXMTObjectImpl_8cXObject[59].__delta + sVar3) - local_1a8;
    local_410 = (_vt_14cXMTObjectImpl_8cXObject[60].__delta + sVar3) - local_1a8;
    local_408 = (_vt_14cXMTObjectImpl_8cXObject[61].__delta + sVar3) - local_1a8;
    local_400 = (_vt_14cXMTObjectImpl_8cXObject[62].__delta + sVar3) - local_1a8;
    local_3f8 = (_vt_14cXMTObjectImpl_8cXObject[63].__delta + sVar3) - local_1a8;
    local_3f0 = (_vt_14cXMTObjectImpl_8cXObject[64].__delta + sVar3) - local_1a8;
    local_3e8 = (_vt_14cXMTObjectImpl_8cXObject[65].__delta + sVar3) - local_1a8;
    local_3e0 = (_vt_14cXMTObjectImpl_8cXObject[66].__delta + sVar3) - local_1a8;
    local_3d8 = (_vt_14cXMTObjectImpl_8cXObject[67].__delta + sVar3) - local_1a8;
    local_3d0 = (_vt_14cXMTObjectImpl_8cXObject[68].__delta + sVar3) - local_1a8;
    local_3c8 = (_vt_14cXMTObjectImpl_8cXObject[69].__delta + sVar3) - local_1a8;
    local_3c0 = (_vt_14cXMTObjectImpl_8cXObject[70].__delta + sVar3) - local_1a8;
    local_3b8 = (_vt_14cXMTObjectImpl_8cXObject[71].__delta + sVar3) - local_1a8;
    local_3b0 = (_vt_14cXMTObjectImpl_8cXObject[72].__delta + sVar3) - local_1a8;
    local_3a8 = (_vt_14cXMTObjectImpl_8cXObject[73].__delta + sVar3) - local_1a8;
    local_3a0 = (_vt_14cXMTObjectImpl_8cXObject[74].__delta + sVar3) - local_1a8;
    local_398 = (_vt_14cXMTObjectImpl_8cXObject[75].__delta + sVar3) - local_1a8;
    local_390 = (_vt_14cXMTObjectImpl_8cXObject[76].__delta + sVar3) - local_1a8;
    local_388 = (_vt_14cXMTObjectImpl_8cXObject[77].__delta + sVar3) - local_1a8;
    local_380 = (_vt_14cXMTObjectImpl_8cXObject[78].__delta + sVar3) - local_1a8;
    local_378 = (_vt_14cXMTObjectImpl_8cXObject[79].__delta + sVar3) - local_1a8;
    local_370 = (_vt_14cXMTObjectImpl_8cXObject[80].__delta + sVar3) - local_1a8;
    local_368 = (_vt_14cXMTObjectImpl_8cXObject[81].__delta + sVar3) - local_1a8;
    local_360 = (_vt_14cXMTObjectImpl_8cXObject[82].__delta + sVar3) - local_1a8;
    local_358 = (_vt_14cXMTObjectImpl_8cXObject[83].__delta + sVar3) - local_1a8;
    local_350 = (_vt_14cXMTObjectImpl_8cXObject[84].__delta + sVar3) - local_1a8;
    local_348 = (_vt_14cXMTObjectImpl_8cXObject[85].__delta + sVar3) - local_1a8;
    local_340 = (_vt_14cXMTObjectImpl_8cXObject[86].__delta + sVar3) - local_1a8;
    local_338 = (_vt_14cXMTObjectImpl_8cXObject[87].__delta + sVar3) - local_1a8;
    local_330 = (_vt_14cXMTObjectImpl_8cXObject[88].__delta + sVar3) - local_1a8;
    local_328 = (_vt_14cXMTObjectImpl_8cXObject[89].__delta + sVar3) - local_1a8;
    local_320 = (_vt_14cXMTObjectImpl_8cXObject[90].__delta + sVar3) - local_1a8;
    local_318 = (_vt_14cXMTObjectImpl_8cXObject[91].__delta + sVar3) - local_1a8;
    local_310 = (_vt_14cXMTObjectImpl_8cXObject[92].__delta + sVar3) - local_1a8;
    local_308 = (_vt_14cXMTObjectImpl_8cXObject[93].__delta + sVar3) - local_1a8;
    local_300 = (_vt_14cXMTObjectImpl_8cXObject[94].__delta + sVar3) - local_1a8;
    local_2f8 = (_vt_14cXMTObjectImpl_8cXObject[95].__delta + sVar3) - local_1a8;
    local_2f0 = (_vt_14cXMTObjectImpl_8cXObject[96].__delta + sVar3) - local_1a8;
    local_2e8 = (_vt_14cXMTObjectImpl_8cXObject[97].__delta + sVar3) - local_1a8;
    local_2e0 = (_vt_14cXMTObjectImpl_8cXObject[98].__delta + sVar3) - local_1a8;
    local_2d8 = (_vt_14cXMTObjectImpl_8cXObject[99].__delta + sVar3) - local_1a8;
    local_2d0 = (_vt_14cXMTObjectImpl_8cXObject[100].__delta + sVar3) - local_1a8;
    local_2c8 = (_vt_14cXMTObjectImpl_8cXObject[101].__delta + sVar3) - local_1a8;
    local_2c0 = (_vt_14cXMTObjectImpl_8cXObject[102].__delta + sVar3) - local_1a8;
    local_2b8 = (_vt_14cXMTObjectImpl_8cXObject[103].__delta + sVar3) - local_1a8;
    local_2b0 = (_vt_14cXMTObjectImpl_8cXObject[104].__delta + sVar3) - local_1a8;
    local_2a8 = (_vt_14cXMTObjectImpl_8cXObject[105].__delta + sVar3) - local_1a8;
    local_2a0 = (_vt_14cXMTObjectImpl_8cXObject[106].__delta + sVar3) - local_1a8;
    local_298 = (_vt_14cXMTObjectImpl_8cXObject[107].__delta + sVar3) - local_1a8;
    local_290 = (_vt_14cXMTObjectImpl_8cXObject[108].__delta + sVar3) - local_1a8;
    local_288 = (_vt_14cXMTObjectImpl_8cXObject[109].__delta + sVar3) - local_1a8;
    local_280 = (_vt_14cXMTObjectImpl_8cXObject[110].__delta + sVar3) - local_1a8;
    local_278 = (_vt_14cXMTObjectImpl_8cXObject[111].__delta + sVar3) - local_1a8;
    local_270 = (_vt_14cXMTObjectImpl_8cXObject[112].__delta + sVar3) - local_1a8;
    local_268 = (_vt_14cXMTObjectImpl_8cXObject[113].__delta + sVar3) - local_1a8;
    local_260 = (_vt_14cXMTObjectImpl_8cXObject[114].__delta + sVar3) - local_1a8;
    local_258 = (_vt_14cXMTObjectImpl_8cXObject[115].__delta + sVar3) - local_1a8;
    local_250 = (_vt_14cXMTObjectImpl_8cXObject[116].__delta + sVar3) - local_1a8;
    local_1f8 = (_vt_14cXMTObjectImpl_8cXObject[127].__delta + sVar3) - local_1a8;
    local_1f0 = (_vt_14cXMTObjectImpl_8cXObject[128].__delta + sVar3) - local_1a8;
    local_1e8 = (_vt_14cXMTObjectImpl_8cXObject[129].__delta + sVar3) - local_1a8;
    local_1d0 = (_vt_14cXMTObjectImpl_8cXObject[132].__delta + sVar3) - local_1a8;
    local_248 = (_vt_14cXMTObjectImpl_8cXObject[117].__delta + sVar3) - local_1a8;
    local_240 = (_vt_14cXMTObjectImpl_8cXObject[118].__delta + sVar3) - local_1a8;
    local_238 = (_vt_14cXMTObjectImpl_8cXObject[119].__delta + sVar3) - local_1a8;
    local_230 = (_vt_14cXMTObjectImpl_8cXObject[120].__delta + sVar3) - local_1a8;
    local_228 = (_vt_14cXMTObjectImpl_8cXObject[121].__delta + sVar3) - local_1a8;
    local_220 = (_vt_14cXMTObjectImpl_8cXObject[122].__delta + sVar3) - local_1a8;
    local_218 = (_vt_14cXMTObjectImpl_8cXObject[123].__delta + sVar3) - local_1a8;
    local_210 = (_vt_14cXMTObjectImpl_8cXObject[124].__delta + sVar3) - local_1a8;
    local_208 = (_vt_14cXMTObjectImpl_8cXObject[125].__delta + sVar3) - local_1a8;
    local_200 = (_vt_14cXMTObjectImpl_8cXObject[126].__delta + sVar3) - local_1a8;
    local_1e0 = _vt_14cXMTObjectImpl_8cXObject[130].__delta + sVar3;
    local_1d8 = _vt_14cXMTObjectImpl_8cXObject[131].__delta + sVar3;
    local_1c8 = (_vt_14cXMTObjectImpl_8cXObject[133].__delta + sVar3) - local_1a8;
    local_1a0 = (_vt_14cXMTObjectImpl_8cXObject[138].__delta + sVar3) - local_1a8;
    local_1c0 = (_vt_14cXMTObjectImpl_8cXObject[134].__delta + sVar3) - local_1a8;
    local_1b8 = (_vt_14cXMTObjectImpl_8cXObject[135].__delta + sVar3) - local_1a8;
    local_1b0 = (_vt_14cXMTObjectImpl_8cXObject[136].__delta + sVar3) - local_1a8;
    local_1a8 = (_vt_14cXMTObjectImpl_8cXObject[137].__delta + sVar3) - local_1a8;
    pcVar15 = (cXMTObject__123_3296__vtable *)&local_190;
    p_Var22 = _vt_14cXMTObjectImpl_10cXMTObject;
    do {
      p_Var24 = p_Var22;
      pcVar23 = pcVar15;
      _Var18 = p_Var24[1];
      _Var19 = p_Var24[2];
      _Var20 = p_Var24[3];
      *(__vtbl_ptr_type *)pcVar23 = *p_Var24;
      *(__vtbl_ptr_type *)&pcVar23->GetFirstMultiTileObject = _Var18;
      *(__vtbl_ptr_type *)&pcVar23->Reset = _Var19;
      *(__vtbl_ptr_type *)&pcVar23->PostLoad = _Var20;
      pcVar15 = (cXMTObject__123_3296__vtable *)&pcVar23->DirtyAll;
      p_Var22 = p_Var24 + 4;
    } while (p_Var24 + 4 != _vt_14cXMTObjectImpl_10cXMTObject + 0xc);
    _Var18 = p_Var24[5];
    *(ulong *)&pcVar23->DirtyAll =
         CONCAT62(_vt_14cXMTObjectImpl_10cXMTObject[12]._2_6_,
                  _vt_14cXMTObjectImpl_10cXMTObject[12].__delta);
    *(__vtbl_ptr_type *)&pcVar23->MergeInPlace = _Var18;
    this->_vb1079->__vtable = (cXMTObject__123_3296__vtable *)&local_190;
    uVar9 = _vt_14cXMTObjectImpl_11TreeSimImpl[4]._2_6_;
    uVar8 = _vt_14cXMTObjectImpl_11TreeSimImpl[4].__delta;
    uVar7 = _vt_14cXMTObjectImpl_11TreeSimImpl[2]._2_6_;
    uVar6 = _vt_14cXMTObjectImpl_11TreeSimImpl[1]._2_6_;
    local_130 = sVar4 - ((short)this->_vb1079 + -0x50);
    local_180 = _vt_14cXMTObjectImpl_10cXMTObject[2].__delta + local_130;
    local_178 = _vt_14cXMTObjectImpl_10cXMTObject[3].__delta + local_130;
    local_170 = _vt_14cXMTObjectImpl_10cXMTObject[4].__delta + local_130;
    local_168 = _vt_14cXMTObjectImpl_10cXMTObject[5].__delta + local_130;
    local_160 = _vt_14cXMTObjectImpl_10cXMTObject[6].__delta + local_130;
    local_158 = _vt_14cXMTObjectImpl_10cXMTObject[7].__delta + local_130;
    local_150 = _vt_14cXMTObjectImpl_10cXMTObject[8].__delta + local_130;
    local_148 = _vt_14cXMTObjectImpl_10cXMTObject[9].__delta + local_130;
    local_140 = _vt_14cXMTObjectImpl_10cXMTObject[10].__delta + local_130;
    local_138 = _vt_14cXMTObjectImpl_10cXMTObject[11].__delta + local_130;
    local_188 = _vt_14cXMTObjectImpl_10cXMTObject[1].__delta + local_130;
    local_130 = _vt_14cXMTObjectImpl_10cXMTObject[12].__delta + local_130;
    local_120 = _vt_14cXMTObjectImpl_11TreeSimImpl[0];
    local_108 = _vt_14cXMTObjectImpl_11TreeSimImpl[3];
    local_f8 = _vt_14cXMTObjectImpl_11TreeSimImpl[5];
    this->_vb901->_vb1187->__vtable = local_b0;
    uVar12 = _vt_14cXMTObjectImpl_12cXObjectImpl[5]._2_6_;
    uVar11 = _vt_14cXMTObjectImpl_12cXObjectImpl[4]._2_6_;
    uVar10 = _vt_14cXMTObjectImpl_12cXObjectImpl[3]._2_6_;
    pcVar2 = this->_vb901;
    sVar3 = sVar4 - ((short)pcVar2 + -0x8c);
    sVar5 = sVar4 - ((short)pcVar2->_vb1187 + -0x58);
    local_118 = CONCAT62(uVar6,(_vt_14cXMTObjectImpl_11TreeSimImpl[1].__delta + sVar5) - sVar3);
    local_110 = CONCAT62(uVar7,(_vt_14cXMTObjectImpl_11TreeSimImpl[2].__delta + sVar5) - sVar3);
    local_100 = CONCAT62(uVar9,(uVar8 + sVar5) - sVar3);
    local_f0 = _vt_14cXMTObjectImpl_12cXObjectImpl[0];
    local_e8 = _vt_14cXMTObjectImpl_12cXObjectImpl[1];
    local_e0 = _vt_14cXMTObjectImpl_12cXObjectImpl[2];
    local_c0 = _vt_14cXMTObjectImpl_12cXObjectImpl[6];
    local_b8 = _vt_14cXMTObjectImpl_12cXObjectImpl[7];
    pcVar2->__vtable = local_ac;
    sVar4 = sVar4 - ((short)this->_vb901 + -0x8c);
    local_d8 = CONCAT62(uVar10,_vt_14cXMTObjectImpl_12cXObjectImpl[3].__delta + sVar4);
    local_d0 = CONCAT62(uVar11,_vt_14cXMTObjectImpl_12cXObjectImpl[4].__delta + sVar4);
    local_c8 = CONCAT62(uVar12,_vt_14cXMTObjectImpl_12cXObjectImpl[5].__delta + sVar4);
  }
  RemoveFromChain__14cXMTObjectImpl(this);
  if ((__in_chrg & 2U) != 0) {
    ___12cXObjectImpl((cXObjectImpl__127_901 *)this->_vb901,0);
    ___11TreeSimImpl(this->_vb901->_vb1187,0);
    ___10cXMTObject(this->_vb1079,0);
    ___8cXObject(this->_vb1079->_vb966,0);
    ___7TreeSim(this->_vb1079->_vb966->_vb899,0);
  }
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void cXMTObjectImpl::Initialize() {
  cXObject__21_1030 *pcVar1;
  cXObject__21_1030__vtable *pcVar2;
  ObjDefinition *this_00;
  int iVar3;
  
  Initialize__12cXObjectImpl((cXObjectImpl__127_901 *)this->_vb901);
  pcVar1 = this->_vb901->_vb966;
  pcVar2 = pcVar1->__vtable;
  this_00 = (ObjDefinition *)
            (*(code *)pcVar2[1].HandleError)((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2[1].Error)
  ;
  GetMultiTileOffsets__13ObjDefinitionPiT1(this_00,&this->fNormXOff,&this->fNormYOff);
  pcVar1 = this->_vb901->_vb966;
  pcVar2 = pcVar1->__vtable;
  iVar3 = (*(code *)pcVar2[1].HandleError)((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2[1].Error);
  this->fNormLevelOff = (int)*(short *)(iVar3 + 0x70);
  return;
}

void cXMTObjectImpl::SetLeader(cXMTObject *leader) {
	cXMTObject *this;
	cXMTObjectImpl **srch;
	
  cXMTObjectImpl__138_905 *pcVar1;
  long lVar2;
  cXMTObjectImpl__138_905 *pcVar3;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
  if (leader == (cXMTObject__123_3296 *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)&leader->__vtable->field_0x64)
                      ((int)&leader->_vb966 + (int)*(short *)&leader->__vtable->field_0x60);
  }
  pcVar3 = (cXMTObjectImpl__138_905 *)lVar2;
                    /* end of inlined section */
  this->fLeadObject = pcVar3;
  this->fMultiNext = (cXMTObjectImpl__138_905 *)0x0;
  if (lVar2 != 0) {
    pcVar1 = pcVar3->fMultiNext;
    while (pcVar1 != (cXMTObjectImpl__138_905 *)0x0) {
      pcVar3 = pcVar3->fMultiNext;
      pcVar1 = pcVar3->fMultiNext;
    }
    pcVar3->fMultiNext = this;
  }
  return;
}

ISimInstance* cXMTObjectImpl::GetISimInstance() {
	cXMTObject *mtobj;
	ObjDefinition *pDef;
	int groupId;
	bool isInteractionGroupLead;
	bool isMtModelMtObj;
	ISimInstance *p;
	ISimInstance *pRet;
	cXMTObject *this;
	ISimInstance *pRet;
	bool gorupidmatch;
	cXMTObject *this;
	
  short sVar1;
  short sVar2;
  cXObject__21_1030__vtable *pcVar3;
  cXObject__21_1030 *pcVar4;
  int iVar5;
  ISimInstance *pIVar6;
  undefined4 *puVar7;
  TreeSimImpl__21_3338 **ppTVar8;
  cXMTObject__123_3296 *pcVar9;
  long lVar11;
  long lVar12;
  uint uVar13;
  code *pcVar10;
  
  pcVar9 = this->_vb1079;
  pcVar3 = pcVar9->_vb966->__vtable;
  iVar5 = (*(code *)pcVar3[1].HandleError)
                    ((int)&pcVar9->_vb966->_vb899 + (int)*(short *)&pcVar3[1].Error);
  sVar1 = *(short *)(iVar5 + 0x10);
  if (*(int *)(iVar5 + 0xc0) == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(uint *)(*(int *)(iVar5 + 0xc0) + 4) >> 5 & 1;
  }
  pIVar6 = GetISimInstance__11TreeSimImpl(this->_vb901->_vb1187);
  if (pIVar6 == (ISimInstance *)0x0) {
    lVar11 = (**(code **)&pcVar9->__vtable->field_0x4c)
                       ((int)&pcVar9->_vb966 + (int)*(short *)&pcVar9->__vtable->field_0x48);
    if (((lVar11 == 0) && (*(int *)(iVar5 + 0x1c) != 0x437)) && (*(int *)(iVar5 + 0x1c) != 0x439)) {
      if (uVar13 == 0) {
        sVar1 = *(short *)&pcVar9->__vtable->Reset;
        pcVar10 = (code *)pcVar9->__vtable->AssignOffsets;
        while( true ) {
          pcVar9 = (cXMTObject__123_3296 *)(*pcVar10)((int)&pcVar9->_vb966 + (int)sVar1);
          if (pcVar9 == (cXMTObject__123_3296 *)0x0) {
            return (ISimInstance *)0x0;
          }
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
          ppTVar8 = _pGifTag0;
          if (pcVar9 != (cXMTObject__123_3296 *)0x0) {
            puVar7 = (undefined4 *)
                     (**(code **)&pcVar9->__vtable->field_0x64)
                               ((int)&pcVar9->_vb966 + (int)*(short *)&pcVar9->__vtable->field_0x60)
            ;
            ppTVar8 = (TreeSimImpl__21_3338 **)*puVar7;
          }
          pIVar6 = GetISimInstance__11TreeSimImpl(*ppTVar8);
                    /* end of inlined section */
          if (pIVar6 != (ISimInstance *)0x0) break;
          sVar1 = *(short *)&pcVar9->__vtable->PostLoad;
          pcVar10 = (code *)pcVar9->__vtable->SetMultiObjectData;
        }
        return pIVar6;
      }
    }
    else if (uVar13 == 0) {
      return (ISimInstance *)0x0;
    }
    pIVar6 = (ISimInstance *)0x0;
    if (sVar1 >> 0x1f == 0) {
      sVar2 = *(short *)&pcVar9->__vtable->Reset;
      pcVar10 = (code *)pcVar9->__vtable->AssignOffsets;
      while( true ) {
        pcVar9 = (cXMTObject__123_3296 *)(*pcVar10)((int)&pcVar9->_vb966 + (int)sVar2);
        pIVar6 = (ISimInstance *)0x0;
        if (pcVar9 == (cXMTObject__123_3296 *)0x0) break;
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
        ppTVar8 = _pGifTag0;
        if (pcVar9 != (cXMTObject__123_3296 *)0x0) {
          puVar7 = (undefined4 *)
                   (**(code **)&pcVar9->__vtable->field_0x64)
                             ((int)&pcVar9->_vb966 + (int)*(short *)&pcVar9->__vtable->field_0x60);
          ppTVar8 = (TreeSimImpl__21_3338 **)*puVar7;
        }
                    /* end of inlined section */
        lVar11 = (long)sVar1;
        if ((long)sVar1 < 0) {
          lVar11 = (long)-(int)sVar1;
        }
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObjectImpl.h */
        pIVar6 = GetISimInstance__11TreeSimImpl(*ppTVar8);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObjectImpl.h */
                    /* end of inlined section */
        pcVar3 = pcVar9->_vb966->__vtable;
        iVar5 = (*(code *)pcVar3[1].HandleError)
                          ((int)&pcVar9->_vb966->_vb899 + (int)*(short *)&pcVar3[1].Error);
        pcVar4 = pcVar9->_vb966;
        if (*(short *)(iVar5 + 0x10) < 0) {
          iVar5 = (*(code *)pcVar4->__vtable[1].HandleError)
                            ((int)&pcVar4->_vb899 + (int)*(short *)&pcVar4->__vtable[1].Error);
          lVar12 = (long)-(int)*(short *)(iVar5 + 0x10);
        }
        else {
          iVar5 = (*(code *)pcVar4->__vtable[1].HandleError)
                            ((int)&pcVar4->_vb899 + (int)*(short *)&pcVar4->__vtable[1].Error);
          lVar12 = (long)*(short *)(iVar5 + 0x10);
        }
        if ((pIVar6 != (ISimInstance *)0x0) && (lVar11 == lVar12)) {
          return pIVar6;
        }
        sVar2 = *(short *)&pcVar9->__vtable->PostLoad;
        pcVar10 = (code *)pcVar9->__vtable->SetMultiObjectData;
      }
    }
  }
  return pIVar6;
}

void cXMTObjectImpl::RemoveFromChain() {
	cXMTObjectImpl *newLeader;
	cXMTObjectImpl *scan;
	cXMTObjectImpl **srch;
	
  cXMTObjectImpl__138_905 *pcVar1;
  cXMTObject__123_3296__vtable *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  cXMTObjectImpl__138_905 **ppcVar6;
  
  ppcVar6 = &this->fLeadObject;
  if (this->fLeadObject == (cXMTObjectImpl__138_905 *)0x0) {
    pcVar1 = this->fMultiNext;
    pcVar2 = this->_vb1079->__vtable;
    lVar4 = (*(code *)pcVar2->AssignOffsets)
                      ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar2->Reset);
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
    lVar5 = 0;
    if (lVar4 != 0) {
      iVar3 = *(int *)((int)lVar4 + 4);
      lVar5 = (**(code **)(iVar3 + 100))((int)lVar4 + (int)*(short *)(iVar3 + 0x60));
    }
                    /* end of inlined section */
    if (lVar5 != 0) {
      iVar3 = *(int *)((int)lVar5 + 4);
      while( true ) {
        *(cXMTObjectImpl__138_905 **)((int)lVar5 + 0xc) = pcVar1;
        lVar4 = (**(code **)(*(int *)(iVar3 + 4) + 0x1c))
                          (iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0x18));
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
        lVar5 = 0;
        if (lVar4 != 0) {
          iVar3 = *(int *)((int)lVar4 + 4);
          lVar5 = (**(code **)(iVar3 + 100))((int)lVar4 + (int)*(short *)(iVar3 + 0x60));
        }
                    /* end of inlined section */
        if (lVar5 == 0) break;
        iVar3 = *(int *)((int)lVar5 + 4);
      }
    }
    if (pcVar1 == (cXMTObjectImpl__138_905 *)0x0) {
      this->fLeadObject = (cXMTObjectImpl__138_905 *)0x0;
      goto LAB_002562a4;
    }
    pcVar1->fLeadObject = (cXMTObjectImpl__138_905 *)0x0;
  }
  else {
    do {
      if (*ppcVar6 == this) {
        *ppcVar6 = this->fMultiNext;
      }
      else {
        ppcVar6 = &(*ppcVar6)->fMultiNext;
      }
    } while (*ppcVar6 != (cXMTObjectImpl__138_905 *)0x0);
  }
  this->fLeadObject = (cXMTObjectImpl__138_905 *)0x0;
LAB_002562a4:
  this->fMultiNext = (cXMTObjectImpl__138_905 *)0x0;
  return;
}

void cXMTObjectImpl::Turn(Int notches) {
	FTilePt oldLoc;
	Int level;
	Int dirinc;
	cXMTObjectImpl *srch;
	
  undefined *puVar1;
  uint uVar2;
  cXObject__21_1030 *pcVar3;
  int iVar4;
  cXObject__21_1030__vtable *pcVar5;
  ulong *puVar6;
  short sVar7;
  cXMTObject__123_3296 *pcVar8;
  long lVar9;
  cXObjectImpl__138_901 *pcVar10;
  ulong in_v1;
  cXMTObjectImpl__138_905 *pcVar11;
  uint uVar12;
  FTilePt oldLoc;
  
  pcVar10 = this->_vb901;
  pcVar8 = this->_vb1079;
  puVar1 = (undefined *)((int)&(pcVar10->fLocation).x.whole + 3);
  uVar12 = (uint)puVar1 & 7;
  uVar2 = (uint)&pcVar10->fLocation & 7;
  oldLoc = (FTilePt)((*(long *)(puVar1 + -uVar12) << (7 - uVar12) * 8 |
                     in_v1 & 0xffffffffffffffffU >> (uVar12 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                    *(ulong *)((int)&pcVar10->fLocation - uVar2) >> uVar2 * 8);
  puVar1 = (undefined *)((int)&oldLoc.x.whole + 3);
  uVar12 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar12);
  *puVar6 = *puVar6 & -1L << (uVar12 + 1) * 8 | (ulong)oldLoc >> (7 - uVar12) * 8;
  pcVar3 = pcVar8->_vb966;
  iVar4 = pcVar10->fLevel;
  pcVar5 = pcVar3->__vtable;
  (*(code *)pcVar5->GetData)((int)&pcVar3->_vb899 + (int)*(short *)&pcVar5->GetRect);
  uVar12 = (short)this->_vb901->fData[0x17] * notches & 7;
  if (uVar12 != 0) {
    pcVar11 = this->fLeadObject;
    if (this->fLeadObject == (cXMTObjectImpl__138_905 *)0x0) {
      pcVar11 = this;
    }
    sVar7 = (short)uVar12;
    if (pcVar11 == (cXMTObjectImpl__138_905 *)0x0) {
      pcVar8 = this->_vb1079;
    }
    else {
      pcVar10 = pcVar11->_vb901;
      while( true ) {
        pcVar10->fData[1] = pcVar10->fData[1] + sVar7;
        pcVar11->_vb901->fData[1] = pcVar11->_vb901->fData[1] & 7;
        pcVar3 = pcVar11->_vb901->_vb966;
        pcVar5 = pcVar3->__vtable;
        (*(code *)pcVar5->RunTree)((int)&pcVar3->_vb899 + (int)*(short *)&pcVar5->IsSpriteVisible,0)
        ;
        pcVar11 = pcVar11->fMultiNext;
        if (pcVar11 == (cXMTObjectImpl__138_905 *)0x0) break;
        pcVar10 = pcVar11->_vb901;
      }
      pcVar8 = this->_vb1079;
    }
    (*(code *)pcVar8->__vtable->RemoveFromDynamic)
              ((int)&pcVar8->_vb966 + (int)*(short *)&pcVar8->__vtable->MergeInPlace);
    pcVar3 = this->_vb1079->_vb966;
    pcVar5 = pcVar3->__vtable;
    lVar9 = (*(code *)pcVar5->GetAttr)
                      ((int)&pcVar3->_vb899 + (int)*(short *)&pcVar5->GetTemp,&oldLoc,iVar4,0,0);
    if (lVar9 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      lVar9 = (*(code *)_5Globs_pFixedWorld->__vtable->SetWallStorage)
                        ((int)&_5Globs_pFixedWorld->__vtable +
                         (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetWallStorage,&oldLoc);
      if (lVar9 == 0) {
        pcVar11 = this->fLeadObject;
        if (this->fLeadObject == (cXMTObjectImpl__138_905 *)0x0) {
          pcVar11 = this;
        }
        if (pcVar11 == (cXMTObjectImpl__138_905 *)0x0) {
          pcVar8 = this->_vb1079;
        }
        else {
          pcVar10 = pcVar11->_vb901;
          while( true ) {
            pcVar10->fData[1] = pcVar10->fData[1] - sVar7;
            pcVar11->_vb901->fData[1] = pcVar11->_vb901->fData[1] & 7;
            pcVar11 = pcVar11->fMultiNext;
            if (pcVar11 == (cXMTObjectImpl__138_905 *)0x0) break;
            pcVar10 = pcVar11->_vb901;
          }
          pcVar8 = this->_vb1079;
        }
        (*(code *)pcVar8->__vtable->RemoveFromDynamic)
                  ((int)&pcVar8->_vb966 + (int)*(short *)&pcVar8->__vtable->MergeInPlace);
        pcVar8 = this->_vb1079;
      }
      else {
        pcVar8 = this->_vb1079;
      }
    }
    else {
      pcVar8 = this->_vb1079;
    }
    pcVar5 = pcVar8->_vb966->__vtable;
    lVar9 = (*(code *)pcVar5->GetAttr)
                      ((int)&pcVar8->_vb966->_vb899 + (int)*(short *)&pcVar5->GetTemp,&oldLoc,iVar4,
                       0,0);
    if (lVar9 != 0) {
      pcVar3 = this->_vb1079->_vb966;
      pcVar5 = pcVar3->__vtable;
      (*(code *)pcVar5->GetAdultAnimTable)
                ((int)&pcVar3->_vb899 + (int)*(short *)&pcVar5->GetModule,&oldLoc,iVar4,0,0);
    }
  }
  return;
}

void cXMTObjectImpl::AssignOffsets() {
	cXMTObjectImpl *lead;
	Int x0;
	Int y0;
	Int l0;
	Int direction;
	cXMTObjectImpl *srch;
	Int dir;
	
  int iVar1;
  int iVar2;
  int iVar3;
  cXMTObjectImpl__138_905 *pcVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  
  pcVar4 = this->fLeadObject;
  if (this->fLeadObject == (cXMTObjectImpl__138_905 *)0x0) {
    pcVar4 = this;
  }
  iVar1 = pcVar4->fNormXOff;
  iVar2 = pcVar4->fNormYOff;
  iVar3 = pcVar4->fNormLevelOff;
  if (pcVar4 == (cXMTObjectImpl__138_905 *)0x0) {
    return;
  }
  uVar7 = pcVar4->_vb901->fData[1] & 7;
  iVar6 = pcVar4->fNormLevelOff;
  do {
    iVar5 = pcVar4->fNormXOff - iVar1;
    pcVar4->fLevelOff = iVar6 - iVar3;
    iVar6 = pcVar4->fNormYOff - iVar2;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    pcVar4->fYOff = 0;
    pcVar4->fXOff = 0;
    if (uVar7 == 2) {
      pcVar4->fYOff = iVar5;
      pcVar4->fXOff = -iVar6;
LAB_00256588:
                    /* end of inlined section */
      pcVar4 = pcVar4->fMultiNext;
    }
    else {
      if (2 < uVar7) {
        if (uVar7 == 4) {
          pcVar4->fXOff = -iVar5;
          pcVar4->fYOff = -iVar6;
        }
        else {
          if (uVar7 != 6) {
            pcVar4 = pcVar4->fMultiNext;
            goto LAB_0025658c;
          }
          pcVar4->fXOff = iVar6;
          pcVar4->fYOff = -iVar5;
        }
        goto LAB_00256588;
      }
      if (uVar7 == 0) {
        pcVar4->fXOff = iVar5;
        pcVar4->fYOff = iVar6;
        goto LAB_00256588;
      }
      pcVar4 = pcVar4->fMultiNext;
    }
LAB_0025658c:
    if (pcVar4 == (cXMTObjectImpl__138_905 *)0x0) {
      return;
    }
    iVar6 = pcVar4->fNormLevelOff;
  } while( true );
}

bool cXMTObjectImpl::CanPlace(FTilePt &newLoc0, Int inLevel, cXObject *ontop, Int slotNum) {
	FTilePt curLoc;
	FTilePt newLoc;
	cXMTObjectImpl *curObj;
	int error;
	Int inX;
	Int inY;
	Int integer;
	Int integer;
	Int inX;
	Int inY;
	Int integer;
	Int integer;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong *puVar5;
  FTilePt FVar6;
  bool bVar7;
  ulong in_v0;
  ulong uVar8;
  long lVar9;
  int iVar10;
  cXMTObjectImpl__138_905 *pcVar11;
  FTilePt curLoc;
  FTilePt newLoc;
  
  if (ontop == (cXObject__21_1030 *)0x0) {
    puVar1 = (undefined *)((int)&(newLoc0->x).whole + 3);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)newLoc0 & 7;
    uVar8 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
            in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)newLoc0 - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&newLoc.x.whole + 3);
    uVar2 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar2);
    *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar8 >> (7 - uVar2) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    newLoc.x.whole = (int)(uVar8 >> 0x20);
    newLoc.y.whole = (int)uVar8;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    newLoc = (FTilePt)CONCAT44(newLoc.x.whole + this->fXOff * -0x10,
                               newLoc.y.whole + this->fYOff * -0x10);
                    /* end of inlined section */
    iVar4 = this->fLevelOff;
    pcVar11 = this->fLeadObject;
    if (this->fLeadObject == (cXMTObjectImpl__138_905 *)0x0) {
      pcVar11 = this;
    }
    lVar9 = (*(code *)_5Globs_pFixedWorld->__vtable->SetWallStorage)
                      ((int)&_5Globs_pFixedWorld->__vtable +
                       (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetWallStorage,&newLoc);
    iVar10 = 1;
    if (lVar9 == 0) {
      iVar10 = 0;
      FVar6 = newLoc;
      while (pcVar11 != (cXMTObjectImpl__138_905 *)0x0) {
        puVar1 = (undefined *)((int)&curLoc.x.whole + 3);
        uVar2 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar2);
        newLoc = FVar6;
        *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | (ulong)FVar6 >> (7 - uVar2) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
        curLoc.x = FVar6.x;
        curLoc.y = FVar6.y;
        curLoc = (FTilePt)CONCAT44(curLoc.x.whole + pcVar11->fXOff * 0x10,
                                   curLoc.y.whole + pcVar11->fYOff * 0x10);
                    /* end of inlined section */
        bVar7 = CanPlace__12cXObjectImplRC7FTilePtiP8cXObjecti
                          ((cXObjectImpl__127_901 *)pcVar11->_vb901,&curLoc,
                           (inLevel - iVar4) + pcVar11->fLevelOff,(cXObject__21_1030 *)0x0,slotNum);
        FVar6 = newLoc;
        if (bVar7) {
          pcVar11 = pcVar11->fMultiNext;
        }
        else if (((iVar10 == 0) || (gPlacementError == 0x1e)) || (gPlacementError == 0x1f)) {
          pcVar11 = pcVar11->fMultiNext;
          iVar10 = gPlacementError;
        }
        else {
          pcVar11 = pcVar11->fMultiNext;
        }
      }
      if (iVar10 != 0) {
        gPlacementError = iVar10;
        return false;
      }
      return true;
    }
  }
  else {
    iVar10 = 0x10;
  }
  gPlacementError = iVar10;
  return false;
}

void cXMTObjectImpl::Place(FTilePt &loc, Int inLevel, cXObject *ontop, Int slotNum) {
	FTilePt curLoc;
	FTilePt newLoc;
	cXMTObjectImpl *curObj;
	cXMTObjectImpl *leadObj;
	Int inX;
	Int inY;
	Int integer;
	Int integer;
	int level;
	Int inX;
	Int inY;
	Int integer;
	Int integer;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  cXMTObjectImpl__138_905 *pcVar6;
  cXObject__21_1030__vtable *pcVar7;
  ulong *puVar8;
  FTilePt FVar9;
  cXObjectImpl__138_901 *pcVar10;
  ulong in_v0;
  ulong uVar11;
  long lVar12;
  cXMTObjectImpl__138_905 *pcVar13;
  FTilePt curLoc;
  FTilePt newLoc;
  
  puVar1 = (undefined *)((int)&(loc->x).whole + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)loc & 7;
  uVar11 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
           in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)loc - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&newLoc.x.whole + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar2);
  *puVar8 = *puVar8 & -1L << (uVar2 + 1) * 8 | uVar11 >> (7 - uVar2) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
  newLoc.x.whole = (int)(uVar11 >> 0x20);
  newLoc.y.whole = (int)uVar11;
                    /* end of inlined section */
  pcVar13 = this->fLeadObject;
  if (this->fLeadObject == (cXMTObjectImpl__138_905 *)0x0) {
    pcVar13 = this;
  }
  iVar4 = this->fLevelOff;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
  newLoc = (FTilePt)CONCAT44(newLoc.x.whole + this->fXOff * -0x10,
                             newLoc.y.whole + this->fYOff * -0x10);
  pcVar6 = pcVar13;
  FVar9 = newLoc;
                    /* end of inlined section */
                    /* end of inlined section */
  while (newLoc = FVar9, pcVar6 != (cXMTObjectImpl__138_905 *)0x0) {
    puVar1 = (undefined *)((int)&curLoc.x.whole + 3);
    uVar2 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar2);
    *puVar8 = *puVar8 & -1L << (uVar2 + 1) * 8 | (ulong)FVar9 >> (7 - uVar2) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    curLoc.x = FVar9.x;
    curLoc.y = FVar9.y;
    curLoc = (FTilePt)CONCAT44(curLoc.x.whole + pcVar6->fXOff * 0x10,
                               curLoc.y.whole + pcVar6->fYOff * 0x10);
                    /* end of inlined section */
    iVar5 = pcVar6->fLevelOff;
    lVar12 = (*(code *)_5Globs_pFixedWorld->__vtable->SetWallStorage)
                       ((int)&_5Globs_pFixedWorld->__vtable +
                        (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetWallStorage,loc);
    if (lVar12 == 0) {
      Place__12cXObjectImplRC7FTilePtiP8cXObjecti
                ((cXObjectImpl__127_901 *)pcVar6->_vb901,&curLoc,(inLevel - iVar4) + iVar5,ontop,
                 slotNum);
      pcVar6 = pcVar6->fMultiNext;
      FVar9 = newLoc;
    }
    else {
      Pickup__12cXObjectImpl((cXObjectImpl__127_901 *)pcVar6->_vb901);
      pcVar6 = pcVar6->fMultiNext;
      FVar9 = newLoc;
    }
  }
  if (pcVar13 != (cXMTObjectImpl__138_905 *)0x0) {
    pcVar10 = pcVar13->_vb901;
    while( true ) {
      pcVar7 = pcVar10->_vb966->__vtable;
      (*(code *)pcVar7->GetInteractionLeader)
                ((int)&pcVar10->_vb966->_vb899 + (int)*(short *)&pcVar7->SetObjectProbe,9,0,0);
      pcVar13 = pcVar13->fMultiNext;
      if (pcVar13 == (cXMTObjectImpl__138_905 *)0x0) break;
      pcVar10 = pcVar13->_vb901;
    }
  }
  return;
}

void cXMTObjectImpl::Pickup() {
	cXMTObjectImpl *curObj;
	cXMTObjectImpl *leadObj;
	
  cXObject__21_1030__vtable *pcVar1;
  cXObjectImpl__138_901 *pcVar2;
  cXMTObjectImpl__138_905 *pcVar3;
  
  if (this->fLeadObject != (cXMTObjectImpl__138_905 *)0x0) {
    this = this->fLeadObject;
  }
  if (this != (cXMTObjectImpl__138_905 *)0x0) {
    pcVar2 = this->_vb901;
    pcVar3 = this;
    while( true ) {
      pcVar1 = pcVar2->_vb966->__vtable;
      (*(code *)pcVar1->GetInteractionLeader)
                ((int)&pcVar2->_vb966->_vb899 + (int)*(short *)&pcVar1->SetObjectProbe,10,0,0);
      pcVar3 = pcVar3->fMultiNext;
      if (pcVar3 == (cXMTObjectImpl__138_905 *)0x0) break;
      pcVar2 = pcVar3->_vb901;
    }
  }
  for (; this != (cXMTObjectImpl__138_905 *)0x0; this = this->fMultiNext) {
    Pickup__12cXObjectImpl((cXObjectImpl__127_901 *)this->_vb901);
  }
  return;
}

bool cXMTObjectImpl::UserCanPlace(FTilePt &newLoc, int inLevel, cXObject *ontop, Int slotNum) {
	FTilePt firstLoc;
	int firstLevel;
	cXMTObjectImpl *first;
	cXMTObjectImpl *mtObj;
	Int inX;
	Int inY;
	Int integer;
	Int integer;
	FTilePt loc;
	Int inX;
	Int inY;
	Int integer;
	Int integer;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  cXMTObject__123_3296 *pcVar4;
  int iVar5;
  cXMTObject__123_3296__vtable *pcVar6;
  cXObject__21_1030 *pcVar7;
  ulong *puVar8;
  bool bVar9;
  cXMTObjectImpl__138_905 *pcVar10;
  ulong in_v0;
  long lVar11;
  long lVar12;
  cXObjectImpl__127_901 **ppcVar13;
  FTilePt firstLoc;
  FTilePt loc;
  
  puVar1 = (undefined *)((int)&(newLoc->x).whole + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)newLoc & 7;
  firstLoc = (FTilePt)((*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                       in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                      *(ulong *)((int)newLoc - uVar3) >> uVar3 * 8);
  puVar1 = (undefined *)((int)&firstLoc.x.whole + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar2);
  *puVar8 = *puVar8 & -1L << (uVar2 + 1) * 8 | (ulong)firstLoc >> (7 - uVar2) * 8;
  pcVar4 = this->_vb1079;
  lVar11 = (*(code *)pcVar4->__vtable->AssignOffsets)
                     ((int)&pcVar4->_vb966 + (int)*(short *)&pcVar4->__vtable->Reset,pcVar4,inLevel,
                      ontop,slotNum);
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
  pcVar10 = (cXMTObjectImpl__138_905 *)0x0;
  if (lVar11 != 0) {
    iVar5 = *(int *)((int)lVar11 + 4);
    pcVar10 = (cXMTObjectImpl__138_905 *)
              (**(code **)(iVar5 + 100))((int)lVar11 + (int)*(short *)(iVar5 + 0x60));
  }
                    /* end of inlined section */
  if (this != pcVar10) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    firstLoc = (FTilePt)CONCAT44(firstLoc.x.whole + this->fXOff * -0x10,
                                 firstLoc.y.whole + this->fYOff * -0x10);
    loc = (FTilePt)CONCAT44(this->fXOff * 0x10,this->fYOff * 0x10);
                    /* end of inlined section */
    inLevel = inLevel - this->fLevelOff;
  }
  pcVar6 = this->_vb1079->__vtable;
  lVar12 = (*(code *)pcVar6->AssignOffsets)
                     ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar6->Reset);
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
  lVar11 = 0;
  if (lVar12 != 0) {
    iVar5 = *(int *)((int)lVar12 + 4);
    lVar11 = (**(code **)(iVar5 + 100))((int)lVar12 + (int)*(short *)(iVar5 + 0x60));
  }
  while( true ) {
                    /* end of inlined section */
    if (lVar11 == 0) {
      return true;
    }
    puVar1 = (undefined *)((int)&loc.x.whole + 3);
    uVar2 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar2);
    *puVar8 = *puVar8 & -1L << (uVar2 + 1) * 8 | (ulong)firstLoc >> (7 - uVar2) * 8;
    ppcVar13 = (cXObjectImpl__127_901 **)lVar11;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    loc.x = firstLoc.x;
    loc.y = firstLoc.y;
    loc = (FTilePt)CONCAT44(loc.x.whole + (int)ppcVar13[7] * 0x10,
                            loc.y.whole + (int)ppcVar13[8] * 0x10);
                    /* end of inlined section */
    bVar9 = UserCanPlace__12cXObjectImplRC7FTilePtiP8cXObjecti
                      (*ppcVar13,&loc,(int)ppcVar13[9]->fTemp + inLevel + -0x16,
                       (cXObject__21_1030 *)0x0,0);
    if (!bVar9) break;
    pcVar7 = ppcVar13[1]->_vb966;
    lVar12 = (**(code **)&pcVar7->field_0x1c)
                       ((int)ppcVar13[1]->fTemp + *(short *)&pcVar7->field_0x18 + -0x16);
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
    lVar11 = 0;
    if (lVar12 != 0) {
      iVar5 = *(int *)((int)lVar12 + 4);
      lVar11 = (**(code **)(iVar5 + 100))((int)lVar12 + (int)*(short *)(iVar5 + 0x60));
    }
  }
  return false;
}

void cXMTObjectImpl::UserPlace(FTilePt &newLoc, int inLevel, cXObject *ontop, Int slotNum) {
	cXMTObject *mtObj;
	int N;
	int i;
	
  cXMTObject__123_3296__vtable *pcVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar6;
  int *piVar7;
  long lVar5;
  
  UserPlace__12cXObjectImplRC7FTilePtiP8cXObjecti
            ((cXObjectImpl__127_901 *)this->_vb901,newLoc,inLevel,ontop,slotNum);
  pcVar1 = this->_vb1079->__vtable;
  pcVar4 = (code *)pcVar1->AssignOffsets;
  iVar2 = (int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar1->Reset;
  while (lVar5 = (*pcVar4)(iVar2), lVar5 != 0) {
    piVar7 = (int *)lVar5;
    iVar2 = *(int *)(*piVar7 + 4);
    iVar6 = 0;
    (**(code **)(iVar2 + 0xdc))(*piVar7 + (int)*(short *)(iVar2 + 0xd8),0xb,0,0);
    iVar2 = *(int *)(*piVar7 + 4);
    iVar2 = (**(code **)(iVar2 + 0x24c))(*piVar7 + (int)*(short *)(iVar2 + 0x248));
    if (iVar2 < 1) {
      iVar2 = piVar7[1];
    }
    else {
      iVar3 = *piVar7;
      while( true ) {
        lVar5 = (**(code **)(*(int *)(iVar3 + 4) + 0x25c))
                          (iVar3 + *(short *)(*(int *)(iVar3 + 4) + 600),iVar6);
        if (lVar5 != 0) {
          iVar3 = *(int *)(*piVar7 + 4);
          iVar3 = (**(code **)(iVar3 + 0x25c))(*piVar7 + (int)*(short *)(iVar3 + 600),iVar6);
          (**(code **)(*(int *)(iVar3 + 4) + 0xdc))
                    (iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0xd8),0xb,0,0);
        }
        iVar6 = iVar6 + 1;
        if (iVar2 <= iVar6) break;
        iVar3 = *piVar7;
      }
      iVar2 = piVar7[1];
    }
    pcVar4 = *(code **)(iVar2 + 0x1c);
    iVar2 = (int)piVar7 + (int)*(short *)(iVar2 + 0x18);
  }
  pcVar1 = this->_vb1079->__vtable;
  lVar5 = (**(code **)&pcVar1->field_0x4c)
                    ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar1->field_0x48);
  if (lVar5 != 0) {
    pcVar1 = this->_vb1079->__vtable;
    (**(code **)&pcVar1->field_0x54)
              ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar1->field_0x50);
  }
  return;
}

bool cXMTObjectImpl::UserCanPickup() {
	cXMTObject *mtObj;
	cXMTObject *this;
	
  cXMTObject__123_3296__vtable *pcVar1;
  bool bVar2;
  cXObjectImpl__127_901 **ppcVar3;
  code *pcVar4;
  int iVar6;
  long lVar5;
  
  pcVar1 = this->_vb1079->__vtable;
  pcVar4 = (code *)pcVar1->AssignOffsets;
  iVar6 = (int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar1->Reset;
  while( true ) {
    lVar5 = (*pcVar4)(iVar6);
    if (lVar5 == 0) {
      return true;
    }
    iVar6 = (int)lVar5;
    ppcVar3 = (cXObjectImpl__127_901 **)
              (**(code **)(*(int *)(iVar6 + 4) + 100))
                        (iVar6 + *(short *)(*(int *)(iVar6 + 4) + 0x60));
                    /* end of inlined section */
    bVar2 = UserCanPickup__12cXObjectImpl(*ppcVar3);
    if (!bVar2) break;
    pcVar4 = *(code **)(*(int *)(iVar6 + 4) + 0x1c);
    iVar6 = iVar6 + *(short *)(*(int *)(iVar6 + 4) + 0x18);
  }
  return false;
}

void cXMTObjectImpl::UserPickup(bool single) {
	cXMTObject *mtObj;
	int N;
	int i;
	
  cXMTObject__123_3296__vtable *pcVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  cXMTObject__123_3296 *pcVar6;
  int iVar7;
  int *piVar8;
  
  if (single) {
    pcVar1 = this->_vb1079->__vtable;
    lVar5 = (**(code **)&pcVar1->field_0x4c)
                      ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar1->field_0x48);
    pcVar6 = this->_vb1079;
    if (lVar5 == 0) goto LAB_00256df0;
    (**(code **)&pcVar6->__vtable->field_0x5c)
              ((int)&pcVar6->_vb966 + (int)*(short *)&pcVar6->__vtable->field_0x58);
  }
  pcVar6 = this->_vb1079;
LAB_00256df0:
  pcVar4 = (code *)pcVar6->__vtable->AssignOffsets;
  iVar2 = (int)&pcVar6->_vb966 + (int)*(short *)&pcVar6->__vtable->Reset;
  while (lVar5 = (*pcVar4)(iVar2), lVar5 != 0) {
    piVar8 = (int *)lVar5;
    iVar2 = *(int *)(*piVar8 + 4);
    iVar7 = 0;
    (**(code **)(iVar2 + 0xdc))(*piVar8 + (int)*(short *)(iVar2 + 0xd8),0xc,0,0);
    iVar2 = *(int *)(*piVar8 + 4);
    iVar2 = (**(code **)(iVar2 + 0x24c))(*piVar8 + (int)*(short *)(iVar2 + 0x248));
    if (iVar2 < 1) {
      iVar2 = piVar8[1];
    }
    else {
      iVar3 = *piVar8;
      while( true ) {
        lVar5 = (**(code **)(*(int *)(iVar3 + 4) + 0x25c))
                          (iVar3 + *(short *)(*(int *)(iVar3 + 4) + 600),iVar7);
        if (lVar5 != 0) {
          iVar3 = *(int *)(*piVar8 + 4);
          iVar3 = (**(code **)(iVar3 + 0x25c))(*piVar8 + (int)*(short *)(iVar3 + 600),iVar7);
          (**(code **)(*(int *)(iVar3 + 4) + 0xdc))
                    (iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0xd8),0xc,0,0);
        }
        iVar7 = iVar7 + 1;
        if (iVar2 <= iVar7) break;
        iVar3 = *piVar8;
      }
      iVar2 = piVar8[1];
    }
    pcVar4 = *(code **)(iVar2 + 0x1c);
    iVar2 = (int)piVar8 + (int)*(short *)(iVar2 + 0x18);
  }
  UserPickup__12cXObjectImplb((cXObjectImpl__127_901 *)this->_vb901,false);
  return;
}

bool cXMTObjectImpl::UserCanDelete() {
	cXMTObject *mtObj;
	cXMTObject *this;
	
  cXMTObject__123_3296__vtable *pcVar1;
  bool bVar2;
  cXObjectImpl__127_901 **ppcVar3;
  code *pcVar4;
  int iVar6;
  long lVar5;
  
  pcVar1 = this->_vb1079->__vtable;
  pcVar4 = (code *)pcVar1->AssignOffsets;
  iVar6 = (int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar1->Reset;
  while( true ) {
    lVar5 = (*pcVar4)(iVar6);
    if (lVar5 == 0) {
      return true;
    }
    iVar6 = (int)lVar5;
    ppcVar3 = (cXObjectImpl__127_901 **)
              (**(code **)(*(int *)(iVar6 + 4) + 100))
                        (iVar6 + *(short *)(*(int *)(iVar6 + 4) + 0x60));
                    /* end of inlined section */
    bVar2 = UserCanDelete__12cXObjectImpl(*ppcVar3);
    if (!bVar2) break;
    pcVar4 = *(code **)(*(int *)(iVar6 + 4) + 0x1c);
    iVar6 = iVar6 + *(short *)(*(int *)(iVar6 + 4) + 0x18);
  }
  return false;
}

bool cXMTObjectImpl::IsPartOfMe(cXObject *obj) {
	cXMTObjectImpl *srch;
	
  cXMTObject__123_3296 *pcVar1;
  
  if (this->fLeadObject != (cXMTObjectImpl__138_905 *)0x0) {
    this = this->fLeadObject;
  }
  if (this != (cXMTObjectImpl__138_905 *)0x0) {
    pcVar1 = this->_vb1079;
    while( true ) {
      if (pcVar1->_vb966 == obj) {
        return true;
      }
      this = this->fMultiNext;
      if (this == (cXMTObjectImpl__138_905 *)0x0) break;
      pcVar1 = this->_vb1079;
    }
  }
  return false;
}

void cXMTObjectImpl::Reset(Boolean simonce) {
	cXMTObjectImpl *curObj;
	
  cXMTObject__123_3296 *pcVar1;
  cXMTObject__123_3296__vtable *pcVar2;
  cXObject__21_1030__vtable *pcVar3;
  TreeSim *pTVar4;
  TreeSim__vtable *pTVar5;
  cXObject__21_1030 *pcVar6;
  cXObjectImpl__138_901 *pcVar7;
  cXObjectImpl__127_901 *this_00;
  cXMTObjectImpl__138_905 *pcVar8;
  
  if (this->fLeadObject == (cXMTObjectImpl__138_905 *)0x0) {
    pcVar1 = _vtxWEIGHTS;
    if (this != (cXMTObjectImpl__138_905 *)0x0) {
      this_00 = (cXObjectImpl__127_901 *)this->_vb901;
      pcVar8 = this;
      while( true ) {
        Reset__12cXObjectImplUs(this_00,simonce);
        pcVar8 = pcVar8->fMultiNext;
        if (pcVar8 == (cXMTObjectImpl__138_905 *)0x0) break;
        this_00 = (cXObjectImpl__127_901 *)pcVar8->_vb901;
      }
      pcVar1 = this->_vb1079;
    }
    (*(code *)pcVar1->__vtable->RemoveFromDynamic)
              ((int)&pcVar1->_vb966 + (int)*(short *)&pcVar1->__vtable->MergeInPlace);
    if (this != (cXMTObjectImpl__138_905 *)0x0) {
      pcVar7 = this->_vb901;
      while( true ) {
        pcVar3 = pcVar7->_vb966->__vtable;
        (*(code *)pcVar3->GetInteractionLeader)
                  ((int)&pcVar7->_vb966->_vb899 + (int)*(short *)&pcVar3->SetObjectProbe,0,0,0);
        if (simonce != 0) {
          pTVar4 = this->_vb901->_vb966->_vb899;
          pTVar5 = pTVar4->__vtable;
          (*(code *)pTVar5->GetHighLevelAction)
                    ((int)&pTVar4->m_pObject + (int)*(short *)&pTVar5->ClearError,0);
        }
        pcVar6 = this->_vb901->_vb966;
        pcVar3 = pcVar6->__vtable;
        (*(code *)pcVar3->SetDrawLabel)
                  ((int)&pcVar6->_vb899 + (int)*(short *)&pcVar3->CenterHouseViewOnMe);
        this = this->fMultiNext;
        if (this == (cXMTObjectImpl__138_905 *)0x0) break;
        pcVar7 = this->_vb901;
      }
    }
  }
  else {
    pcVar1 = this->fLeadObject->_vb1079;
    pcVar2 = pcVar1->__vtable;
    (*(code *)pcVar2->IsDynamic)((int)&pcVar1->_vb966 + (int)*(short *)&pcVar2->DirtyAll,simonce);
  }
  return;
}

SInt32 cXMTObjectImpl::ReconType() {
  return 0x584d544f;
}

void cXMTObjectImpl::ReconStream(ReconBuffer *r, SInt32 version, bool placeHolder) {
	SInt16 leadid;
	ReconBuffer *this;
	cXMTObject *leader;
	
  cXObject__21_1030 *pcVar1;
  cXObject__21_1030__vtable *pcVar2;
  cXMTObjectImpl__138_905 *pcVar3;
  cXMTObject__123_3296 *leader;
  long lVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  ushort leadid;
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
  ReconStream__12cXObjectImplP11ReconBufferib
            ((cXObjectImpl__127_901 *)this->_vb901,r,version,placeHolder);
  ReconInt__11ReconBufferPii(r,&this->fXOff,1);
  ReconInt__11ReconBufferPii(r,&this->fYOff,1);
  if (0x39 < version) {
    ReconInt__11ReconBufferPii(r,&this->fLevelOff,1);
  }
  if (version < 0x28) {
    pcVar3 = this->fLeadObject;
  }
  else {
    ReconInt__11ReconBufferPii(r,&this->fNormXOff,1);
    ReconInt__11ReconBufferPii(r,&this->fNormYOff,1);
    ReconInt__11ReconBufferPii(r,&this->fNormLevelOff,1);
    pcVar3 = this->fLeadObject;
  }
  if (pcVar3 == (cXMTObjectImpl__138_905 *)0x0) {
    leadid = 0;
  }
  else {
    pcVar1 = pcVar3->_vb901->_vb966;
    pcVar2 = pcVar1->__vtable;
    leadid = (*(code *)pcVar2[1].UserCanPlace)
                       ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2[1].IsPartOfMe);
  }
  Recon16__11ReconBufferPsi(r,&leadid,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
                    /* end of inlined section */
  if ((r->fMode == kReading) && (leadid != 0)) {
    pcVar1 = this->_vb901->_vb966;
    pcVar2 = pcVar1->__vtable;
    lVar4 = (*(code *)pcVar2[1].GetLightingContribution)
                      ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2[1].CanContributeLight);
                    /* inlined from SCID.h */
    if (lVar4 == 0) {
      leader = (cXMTObject__123_3296 *)0x0;
    }
    else {
      leader = (cXMTObject__123_3296 *)_dyncastimpl__7TreeSim4SCID(*(TreeSim **)lVar4,cXMTObjectID);
    }
    SetLeader__14cXMTObjectImplP10cXMTObject(this,leader);
  }
  return;
}

void cXMTObjectImpl::PostLoad(SInt32 version) {
  cXMTObject__123_3296__vtable *pcVar1;
  long lVar2;
  cXMTObject__123_3296 *pcVar3;
  
  PostLoad__12cXObjectImpli((cXObjectImpl__127_901 *)this->_vb901,version);
  pcVar3 = this->_vb1079;
  if (version < 0x3a) {
    (*(code *)pcVar3->__vtable->RemoveFromDynamic)
              ((int)&pcVar3->_vb966 + (int)*(short *)&pcVar3->__vtable->MergeInPlace);
    pcVar3 = this->_vb1079;
  }
  lVar2 = (**(code **)&pcVar3->__vtable->field_0x4c)
                    ((int)&pcVar3->_vb966 + (int)*(short *)&pcVar3->__vtable->field_0x48);
  if (lVar2 != 0) {
    pcVar1 = this->_vb1079->__vtable;
    (**(code **)&pcVar1->field_0x54)
              ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar1->field_0x50);
  }
  return;
}

void cXMTObjectImpl::SetMultiObjectData(Int dataNumber, Int dataValue) {
	cXMTObjectImpl *obj;
	
  cXObject__21_1030__vtable *pcVar1;
  cXObjectImpl__138_901 *pcVar2;
  
  if (this->fLeadObject != (cXMTObjectImpl__138_905 *)0x0) {
    this = this->fLeadObject;
  }
  if (this != (cXMTObjectImpl__138_905 *)0x0) {
    pcVar2 = this->_vb901;
    while( true ) {
      pcVar1 = pcVar2->_vb966->__vtable;
      (*(code *)pcVar1->GetObstacleAtLocation)
                ((int)&pcVar2->_vb966->_vb899 + (int)*(short *)&pcVar1->GetRelMatrix,dataNumber,
                 (short)dataValue);
      this = this->fMultiNext;
      if (this == (cXMTObjectImpl__138_905 *)0x0) break;
      pcVar2 = this->_vb901;
    }
  }
  return;
}

void cXMTObjectImpl::DirtyAll() {
	cXMTObject *srch;
	
  cXMTObject__123_3296__vtable *pcVar1;
  code *pcVar2;
  int iVar4;
  int *piVar5;
  long lVar3;
  
  pcVar1 = this->_vb1079->__vtable;
  pcVar2 = (code *)pcVar1->AssignOffsets;
  iVar4 = (int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar1->Reset;
  while (lVar3 = (*pcVar2)(iVar4), lVar3 != 0) {
    piVar5 = (int *)lVar3;
    iVar4 = *(int *)(*piVar5 + 4);
    (**(code **)(iVar4 + 100))(*piVar5 + (int)*(short *)(iVar4 + 0x60),0);
    pcVar2 = *(code **)(piVar5[1] + 0x1c);
    iVar4 = (int)piVar5 + (int)*(short *)(piVar5[1] + 0x18);
  }
  return;
}

static ObjectIterator ObjectsAtTile(FTilePt &fpt, int level) {
	CTilePt cpt;
	ObjectIterator oi;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  CTilePt cpt;
  ObjectIterator oi;
  
  __7CTilePtRC7FTilePti(&cpt,fpt,level);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
  init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType(&oi,&cpt,kAll);
  puVar1 = (undefined *)((int)&__return_storage_ptr__->fCurrent + 3);
                    /* end of inlined section */
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | oi._0_8_ >> (7 - uVar2) * 8;
  uVar2 = (uint)__return_storage_ptr__ & 7;
  *(ulong *)((int)__return_storage_ptr__ - uVar2) =
       oi._0_8_ << uVar2 * 8 |
       *(ulong *)((int)__return_storage_ptr__ - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  __return_storage_ptr__->fType = oi.fType;
  ___7CTilePt(&cpt,2);
  return __return_storage_ptr__;
}

void cXMTObjectImpl::MergeDynamic(cXMTObject *mtObject) {
	cXMTObjectImpl *myFirst;
	cXMTObjectImpl *otherFirst;
	cXMTObjectImpl **srch;
	FTilePt origin;
	FTilePt offsetOrigin;
	Int direction;
	cXMTObjectImpl *srch;
	Int inX;
	Int inY;
	Int integer;
	Int integer;
	FTilePt delta;
	
  FTilePt *pFVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  cXMTObject__123_3296__vtable *pcVar6;
  int iVar7;
  int iVar8;
  cXObjectImpl__138_901 *pcVar9;
  ulong *puVar10;
  cXMTObjectImpl__138_905 *pcVar11;
  cXMTObjectImpl__138_905 *pcVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  cXMTObjectImpl__138_905 **ppcVar17;
  int iVar18;
  cXMTObjectImpl__138_905 *pcVar19;
  uint uVar20;
  FTilePt origin;
  FTilePt offsetOrigin;
  FTilePt delta;
  
  pcVar6 = this->_vb1079->__vtable;
  lVar13 = (*(code *)pcVar6->AssignOffsets)
                     ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar6->Reset);
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
  pcVar11 = (cXMTObjectImpl__138_905 *)0x0;
  if (lVar13 != 0) {
    iVar7 = *(int *)((int)lVar13 + 4);
    pcVar11 = (cXMTObjectImpl__138_905 *)
              (**(code **)(iVar7 + 100))((int)lVar13 + (int)*(short *)(iVar7 + 0x60));
  }
                    /* end of inlined section */
  lVar13 = (*(code *)mtObject->__vtable->AssignOffsets)
                     ((int)&mtObject->_vb966 + (int)*(short *)&mtObject->__vtable->Reset);
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
  pcVar12 = (cXMTObjectImpl__138_905 *)0x0;
  if (lVar13 != 0) {
    iVar7 = *(int *)((int)lVar13 + 4);
    pcVar12 = (cXMTObjectImpl__138_905 *)
              (**(code **)(iVar7 + 100))((int)lVar13 + (int)*(short *)(iVar7 + 0x60));
  }
                    /* end of inlined section */
  if (pcVar11 != pcVar12) {
    uVar14 = (ulong)(int)this->fMultiNext;
    ppcVar17 = &this->fMultiNext;
    if (uVar14 != 0) {
      do {
        pcVar19 = *ppcVar17;
        uVar14 = (ulong)(int)pcVar19;
        ppcVar17 = &pcVar19->fMultiNext;
      } while (pcVar19->fMultiNext != (cXMTObjectImpl__138_905 *)0x0);
    }
    *ppcVar17 = pcVar12;
    puVar2 = (undefined *)((int)&(pcVar11->_vb901->fLocation).x.whole + 3);
    uVar20 = (uint)puVar2 & 7;
    pFVar1 = &pcVar11->_vb901->fLocation;
    uVar3 = (uint)pFVar1 & 7;
    uVar14 = (*(long *)(puVar2 + -uVar20) << (7 - uVar20) * 8 |
             uVar14 & 0xffffffffffffffffU >> (uVar20 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)pFVar1 - uVar3) >> uVar3 * 8;
    puVar2 = (undefined *)((int)&origin.x.whole + 3);
    uVar20 = (uint)puVar2 & 7;
    puVar10 = (ulong *)(puVar2 + -uVar20);
    *puVar10 = *puVar10 & -1L << (uVar20 + 1) * 8 | uVar14 >> (7 - uVar20) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    iVar7 = pcVar11->fXOff;
    iVar8 = pcVar11->fYOff;
                    /* end of inlined section */
    uVar5 = pcVar11->_vb901->fData[1];
    if (pcVar12 != (cXMTObjectImpl__138_905 *)0x0) {
      uVar20 = -(int)(short)uVar5 & 7;
      pcVar9 = pcVar12->_vb901;
      pcVar19 = pcVar12;
      do {
        pcVar19->fLeadObject = pcVar11;
        pcVar9->fData[1] = uVar5;
        puVar2 = (undefined *)((int)&(pcVar19->_vb901->fLocation).x.whole + 3);
        uVar3 = (uint)puVar2 & 7;
        pFVar1 = &pcVar19->_vb901->fLocation;
        uVar4 = (uint)pFVar1 & 7;
        uVar16 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                 (long)(int)pcVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
                 -1L << (8 - uVar4) * 8 | *(ulong *)((int)pFVar1 - uVar4) >> uVar4 * 8;
        puVar2 = (undefined *)((int)&delta.x.whole + 3);
        uVar3 = (uint)puVar2 & 7;
        puVar10 = (ulong *)(puVar2 + -uVar3);
        *puVar10 = *puVar10 & -1L << (uVar3 + 1) * 8 | uVar16 >> (7 - uVar3) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
        delta.x.whole = (int)(uVar16 >> 0x20);
        delta.y.whole = (int)uVar16;
        origin.x.whole = (int)(uVar14 >> 0x20);
        origin.y.whole = (int)uVar14;
        iVar18 = (delta.x.whole - origin.x.whole) + iVar7 * 0x10 >> 4;
                    /* end of inlined section */
        pcVar19->fXOff = iVar18;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
        pcVar19->fNormYOff = 0;
        iVar15 = (delta.y.whole - origin.y.whole) + iVar8 * 0x10 >> 4;
        pcVar19->fNormXOff = 0;
        pcVar19->fYOff = iVar15;
        if (uVar20 == 2) {
          pcVar19->fNormYOff = iVar18;
          pcVar19->fNormXOff = -iVar15;
LAB_00257638:
                    /* end of inlined section */
          pcVar19 = pcVar19->fMultiNext;
        }
        else {
          if (2 < uVar20) {
            if (uVar20 == 4) {
              pcVar19->fNormXOff = -iVar18;
              pcVar19->fNormYOff = -iVar15;
            }
            else {
              if (uVar20 != 6) {
                pcVar19 = pcVar19->fMultiNext;
                goto LAB_0025763c;
              }
              pcVar19->fNormXOff = iVar15;
              pcVar19->fNormYOff = -iVar18;
            }
            goto LAB_00257638;
          }
          if (uVar20 == 0) {
            pcVar19->fNormXOff = iVar18;
            pcVar19->fNormYOff = iVar15;
            goto LAB_00257638;
          }
          pcVar19 = pcVar19->fMultiNext;
        }
LAB_0025763c:
        if (pcVar19 == (cXMTObjectImpl__138_905 *)0x0) break;
        pcVar9 = pcVar19->_vb901;
      } while( true );
    }
    pcVar12->fLeadObject = pcVar11;
  }
  return;
}

bool cXMTObjectImpl::IsDynamic() {
  cXObject__21_1030 *pcVar1;
  cXObject__21_1030__vtable *pcVar2;
  long lVar3;
  
  pcVar1 = this->_vb901->_vb966;
  pcVar2 = pcVar1->__vtable;
  lVar3 = (*(code *)pcVar2->GetSelFile)
                    ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2->GetBehavior,8);
  return lVar3 != 0;
}

void cXMTObjectImpl::RemoveFromDynamic() {
	cXMTObjectImpl *oldLead;
	
  cXMTObject__123_3296__vtable *pcVar1;
  int iVar2;
  cXObject__21_1030__vtable *pcVar3;
  cXMTObjectImpl__138_905 *this_00;
  cXObjectImpl__138_901 *pcVar4;
  long lVar5;
  
  pcVar1 = this->_vb1079->__vtable;
  lVar5 = (*(code *)pcVar1->AssignOffsets)
                    ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar1->Reset);
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
  this_00 = (cXMTObjectImpl__138_905 *)0x0;
  if (lVar5 != 0) {
    iVar2 = *(int *)((int)lVar5 + 4);
    this_00 = (cXMTObjectImpl__138_905 *)
              (**(code **)(iVar2 + 100))((int)lVar5 + (int)*(short *)(iVar2 + 0x60));
  }
                    /* end of inlined section */
  if (this_00 == this) {
    pcVar1 = this->_vb1079->__vtable;
    lVar5 = (*(code *)pcVar1->SetMultiObjectData)
                      ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar1->PostLoad);
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
    this_00 = (cXMTObjectImpl__138_905 *)0x0;
    if (lVar5 != 0) {
      iVar2 = *(int *)((int)lVar5 + 4);
      this_00 = (cXMTObjectImpl__138_905 *)
                (**(code **)(iVar2 + 100))((int)lVar5 + (int)*(short *)(iVar2 + 0x60));
    }
  }
                    /* end of inlined section */
  RemoveFromChain__14cXMTObjectImpl(this);
  if (this_00 == (cXMTObjectImpl__138_905 *)0x0) {
    pcVar4 = this->_vb901;
  }
  else {
    UpdateAllAdjacecy__14cXMTObjectImpl(this_00);
    pcVar4 = this->_vb901;
  }
  pcVar3 = pcVar4->_vb966->__vtable;
  lVar5 = (*(code *)pcVar3->GetID)
                    ((int)&pcVar4->_vb966->_vb899 + (int)*(short *)&pcVar3->GetTypeName);
  if (lVar5 != 0) {
    UpdateAllAdjacecy__14cXMTObjectImpl(this);
  }
  return;
}

void cXMTObjectImpl::UpdateAllAdjacecy() {
	cXMTObjectImpl *part;
	
  cXObject__21_1030 *pcVar1;
  cXObject__21_1030__vtable *pcVar2;
  cXMTObject__123_3296__vtable *pcVar3;
  int iVar4;
  cXMTObject__123_3296 *pcVar5;
  long lVar6;
  long lVar7;
  
  pcVar1 = this->_vb901->_vb966;
  pcVar2 = pcVar1->__vtable;
  lVar6 = (*(code *)pcVar2->GetID)((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2->GetTypeName);
  if (lVar6 != 0) {
    pcVar3 = this->_vb1079->__vtable;
    lVar7 = (*(code *)pcVar3->AssignOffsets)
                      ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar3->Reset);
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
    lVar6 = 0;
    if (lVar7 != 0) {
      iVar4 = *(int *)((int)lVar7 + 4);
      lVar6 = (**(code **)(iVar4 + 100))((int)lVar7 + (int)*(short *)(iVar4 + 0x60));
    }
                    /* end of inlined section */
    while (lVar6 != 0) {
      UpdateDynAdjacency__14cXMTObjectImpl((cXMTObjectImpl__138_905 *)lVar6);
      pcVar5 = ((cXMTObjectImpl__138_905 *)lVar6)->_vb1079;
      pcVar3 = pcVar5->__vtable;
      lVar7 = (*(code *)pcVar3->SetMultiObjectData)
                        ((int)&pcVar5->_vb966 + (int)*(short *)&pcVar3->PostLoad);
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
      lVar6 = 0;
      if (lVar7 != 0) {
        iVar4 = *(int *)((int)lVar7 + 4);
        lVar6 = (**(code **)(iVar4 + 100))((int)lVar7 + (int)*(short *)(iVar4 + 0x60));
      }
    }
  }
  return;
}

void cXMTObjectImpl::UpdateDynAdjacency() {
	SInt16 adjFlags;
	short int locals[4];
	Int dir;
	Int effDir;
	FTilePt testLoc;
	ObjectIterator oi;
	Int direction;
	Int dir;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  cXObject__21_1030 *pcVar5;
  cXObject__21_1030__vtable *pcVar6;
  ulong *puVar7;
  cXMTObject__123_3296 *pcVar8;
  long lVar9;
  cXObjectImpl__138_901 *pcVar10;
  ulong uVar11;
  uint uVar12;
  ObjectIterator *__return_storage_ptr__;
  ushort uVar13;
  ushort locals [4];
  int local_90;
  int local_8c;
  ObjectIterator oi;
  
  pcVar5 = this->_vb901->_vb966;
  pcVar6 = pcVar5->__vtable;
  uVar11 = (ulong)((int)&pcVar5->_vb899 + (int)*(short *)&pcVar6->GetTypeName);
  lVar9 = (*(code *)pcVar6->GetID)();
  uVar13 = 0;
  if (lVar9 == 0) {
    return;
  }
  __return_storage_ptr__ = &oi;
  pcVar10 = this->_vb901;
  uVar12 = 0;
  do {
    uVar4 = pcVar10->fData[1];
    puVar1 = (undefined *)((int)&(pcVar10->fLocation).x.whole + 3);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)&pcVar10->fLocation & 7;
    uVar11 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
             uVar11 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)&pcVar10->fLocation - uVar3) >> uVar3 * 8;
    uVar2 = (int)locals + 7U & 7;
    puVar7 = (ulong *)(((int)locals + 7U) - uVar2);
    *puVar7 = *puVar7 & -1L << (uVar2 + 1) * 8 | uVar11 >> (7 - uVar2) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    local_8c = 0;
    local_90 = 0;
    switch(uVar12 + (int)(short)uVar4 & 7) {
    case 1:
      local_8c = 1;
    case 0:
      local_90 = -1;
      break;
    case 3:
      local_90 = 1;
    case 2:
      local_8c = 1;
      break;
    case 5:
      local_8c = -1;
    case 4:
      local_90 = 1;
      break;
    case 7:
      local_90 = -1;
    case 6:
      local_8c = -1;
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    locals._4_4_ = (int)(uVar11 >> 0x20);
    locals._0_4_ = (int)uVar11;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    locals = (ushort  [4])CONCAT44(locals._4_4_ + local_8c * 0x10,locals._0_4_ + local_90 * 0x10);
                    /* end of inlined section */
    uVar11 = (long)(int)__return_storage_ptr__;
    ObjectsAtTile__FRC7FTilePti(__return_storage_ptr__,(FTilePt *)locals,this->_vb901->fLevel);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
                    /* end of inlined section */
    if (oi.fCurrent != (cXObject__15_2008 *)0x0) {
      pcVar8 = this->_vb1079;
      while( true ) {
        pcVar6 = pcVar8->_vb966->__vtable;
        lVar9 = (*(code *)pcVar6->HideForCutaway)
                          ((int)&pcVar8->_vb966->_vb899 + (int)*(short *)&pcVar6->GetChildAnimTable,
                           oi.fCurrent);
        if (lVar9 != 0) {
          uVar13 = uVar13 | (ushort)(1 << (uVar12 & 0x1f));
        }
        uVar11 = (long)(int)__return_storage_ptr__;
        __pp__14ObjectIterator(__return_storage_ptr__);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
                    /* end of inlined section */
        if (oi.fCurrent == (cXObject__15_2008 *)0x0) break;
        pcVar8 = this->_vb1079;
      }
    }
    if (7 < (int)(uVar12 + 1)) {
      memset(locals,0,8);
      locals = (ushort  [4])((ulong)locals & 0xffffffffffff0000 | (ulong)uVar13);
      pcVar5 = this->_vb901->_vb966;
      pcVar6 = pcVar5->__vtable;
      (*(code *)pcVar6->GetInteractionLeader)
                ((int)&pcVar5->_vb899 + (int)*(short *)&pcVar6->SetObjectProbe,8,0,locals);
      return;
    }
    pcVar10 = this->_vb901;
    uVar12 = uVar12 + 1;
  } while( true );
}

void cXMTObjectImpl::MergeInPlace() {
	FTilePt location;
	Int level;
	ObjSelector *sel;
	Int dir;
	FTilePt testLoc;
	ObjectIterator oi;
	Int direction;
	Int dir;
	cXMTObjectImpl *mtObj;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  cXObjectImpl__138_901 *pcVar4;
  ObjSelector *pOVar5;
  int level;
  ulong *puVar6;
  ObjSelector *pOVar7;
  cXMTObjectImpl__138_905 *this_00;
  ulong in_v1;
  cXMTObject__123_3296 *mtObject;
  uint uVar8;
  FTilePt location;
  FTilePt testLoc;
  int local_a0;
  int local_9c;
  ObjectIterator oi;
  
  uVar8 = 0;
  pcVar4 = this->_vb901;
  puVar1 = (undefined *)((int)&(pcVar4->fLocation).x.whole + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&pcVar4->fLocation & 7;
  location = (FTilePt)((*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                       in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                      *(ulong *)((int)&pcVar4->fLocation - uVar3) >> uVar3 * 8);
  puVar1 = (undefined *)((int)&location.x.whole + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar2);
  *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | (ulong)location >> (7 - uVar2) * 8;
  pOVar5 = pcVar4->fObjSel;
  level = pcVar4->fLevel;
  do {
    puVar1 = (undefined *)((int)&testLoc.x.whole + 3);
    uVar2 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar2);
    *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | (ulong)location >> (7 - uVar2) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    local_9c = 0;
    local_a0 = 0;
    switch(uVar8 & 7) {
    case 0:
      local_a0 = -1;
      break;
    case 2:
      local_9c = 1;
      break;
    case 4:
      local_a0 = 1;
      break;
    case 6:
      local_9c = -1;
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    testLoc.x = location.x;
    testLoc.y = location.y;
    testLoc = (FTilePt)CONCAT44(testLoc.x.whole + local_9c * 0x10,testLoc.y.whole + local_a0 * 0x10)
    ;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
    uVar8 = uVar8 + 2;
    ObjectsAtTile__FRC7FTilePti(&oi,&testLoc,level);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
                    /* end of inlined section */
    while (oi.fCurrent != (cXObject__15_2008 *)0x0) {
      pOVar7 = (ObjSelector *)
               (*(code *)(oi.fCurrent)->__vtable[1].SetLevel)
                         ((int)&(oi.fCurrent)->_vb3534 +
                          (int)*(short *)&(oi.fCurrent)->__vtable[1].GetTreeID);
      if (pOVar7 == pOVar5) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
        this_00 = (cXMTObjectImpl__138_905 *)0x0;
        if (oi.fCurrent == (cXObject__15_2008 *)0x0) {
                    /* end of inlined section */
          mtObject = this->_vb1079;
        }
        else {
          this_00 = (cXMTObjectImpl__138_905 *)
                    _dyncastimpl__7TreeSim4SCID((oi.fCurrent)->_vb3534,cXMTObjectImplID);
          mtObject = this->_vb1079;
        }
        MergeDynamic__14cXMTObjectImplP10cXMTObject(this_00,mtObject);
      }
      __pp__14ObjectIterator(&oi);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
                    /* end of inlined section */
    }
  } while ((int)uVar8 < 8);
  UpdateAllAdjacecy__14cXMTObjectImpl(this);
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

cXMTObject* cXMTObject::cXMTObject(int __in_chrg) {
	cXObject *this;
	
  cXObject__21_1030 *pcVar1;
  TreeSim__vtable *pTVar2;
  __vtbl_ptr_type *p_Var3;
  TreeSim__vtable *pTVar4;
  __vtbl_ptr_type *p_Var5;
  cXObject__21_1030__vtable *pcVar6;
  __vtbl_ptr_type *p_Var7;
  __vtbl_ptr_type *p_Var8;
  __vtbl_ptr_type _Var9;
  __vtbl_ptr_type _Var10;
  __vtbl_ptr_type _Var11;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  undefined local_5e0 [16];
  __vtbl_ptr_type local_5d0 [16];
  TreeSim__vtable local_550 [2];
  cXObject__21_1030__vtable local_4c0 [2];
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
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  if (__in_chrg != 0) {
    *(undefined **)&this->field_0x28 = &this->field_0x8;
    this->_vb966 = (cXObject__21_1030 *)&this->field_0x28;
    __7TreeSim((TreeSim *)&this->field_0x8);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    pcVar1 = this->_vb966;
    pcVar1->_vb899->__vtable = (TreeSim__vtable *)_vt_8cXObject_7TreeSim;
    p_Var8 = (__vtbl_ptr_type *)local_5e0;
    p_Var5 = _vt_8cXObject_7TreeSim;
    do {
      p_Var3 = p_Var5;
      p_Var7 = p_Var8;
      _Var9 = p_Var3[1];
      _Var10 = p_Var3[2];
      _Var11 = p_Var3[3];
      *p_Var7 = *p_Var3;
      p_Var7[1] = _Var9;
      p_Var7[2] = _Var10;
      p_Var7[3] = _Var11;
      p_Var8 = p_Var7 + 4;
      p_Var5 = p_Var3 + 4;
    } while (p_Var3 + 4 != _vt_8cXObject_7TreeSim + 0x10);
    _Var9 = p_Var3[5];
    p_Var7[4] = _vt_8cXObject_7TreeSim[16];
    p_Var7[5] = _Var9;
    pcVar1->_vb899->__vtable = (TreeSim__vtable *)local_5e0;
    pcVar1->__vtable = (cXObject__21_1030__vtable *)_vt_8cXObject;
  }
                    /* end of inlined section */
  this->_vb966->_vb899->__vtable = (TreeSim__vtable *)_vt_10cXMTObject_7TreeSim;
  this->_vb966->__vtable = (cXObject__21_1030__vtable *)_vt_10cXMTObject_8cXObject;
  if (__in_chrg == 0) {
    p_Var8 = _vt_10cXMTObject_7TreeSim;
    pTVar2 = local_550;
    do {
      pTVar4 = pTVar2;
      p_Var5 = p_Var8;
      _Var11 = p_Var5[1];
      _Var9 = p_Var5[2];
      _Var10 = p_Var5[3];
      *(__vtbl_ptr_type *)pTVar4 = *p_Var5;
      *(__vtbl_ptr_type *)&pTVar4->Initialize = _Var11;
      *(__vtbl_ptr_type *)&pTVar4->SetError = _Var9;
      *(__vtbl_ptr_type *)&pTVar4->ClearError = _Var10;
      p_Var8 = p_Var5 + 4;
      pTVar2 = (TreeSim__vtable *)&pTVar4->GetCurElem;
    } while (p_Var5 + 4 != _vt_10cXMTObject_7TreeSim + 0x10);
    pcVar1 = this->_vb966;
    _Var9 = p_Var5[5];
    *(__vtbl_ptr_type *)&pTVar4->GetCurElem = _vt_10cXMTObject_7TreeSim[16];
    *(__vtbl_ptr_type *)&pTVar4->GetNthElem = _Var9;
    p_Var8 = _vt_10cXMTObject_8cXObject;
    pcVar1->_vb899->__vtable = local_550;
    pcVar6 = local_4c0;
    do {
      _Var10 = p_Var8[1];
      _Var11 = p_Var8[2];
      _Var9 = p_Var8[3];
      *(__vtbl_ptr_type *)pcVar6 = *p_Var8;
      *(__vtbl_ptr_type *)&pcVar6->GetNumAttr = _Var10;
      *(__vtbl_ptr_type *)&pcVar6->CalcShortDistance = _Var11;
      *(__vtbl_ptr_type *)&pcVar6->GetSpriteSlot = _Var9;
      p_Var8 = p_Var8 + 4;
      pcVar6 = (cXObject__21_1030__vtable *)&pcVar6->GetHilite;
    } while (p_Var8 != _vt_10cXMTObject_7TreeSim);
    this->_vb966->__vtable = local_4c0;
  }
  this->__vtable = (cXMTObject__123_3296__vtable *)_vt_10cXMTObject;
  return this;
}

void cXMTObject::setMTObjectImpl(cXMTObjectImpl *obj) {
	cXObject *this;
	TreeSim *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
  this->_vb966->_vb899->m_pMTObject = obj;
  return;
}

void cXMTObject::setCursorObjectImpl(cXCursorObjectImpl *obj) {
	cXObject *this;
	TreeSim *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
  this->_vb966->_vb899->m_pCursorObject = obj;
  return;
}

void cXMTObject::setPortalImpl(cXPortalImpl *obj) {
	cXObject *this;
	TreeSim *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
  this->_vb966->_vb899->m_pPortal = obj;
  return;
}

cXMTObjectImpl* cXMTObject::CAST_IMPL() {
  cXMTObjectImpl__138_905 *pcVar1;
  
                    /* end of inlined section */
  if (this == (cXMTObject__123_3296 *)0x0) {
    pcVar1 = (cXMTObjectImpl__138_905 *)0x0;
  }
  else {
    pcVar1 = (cXMTObjectImpl__138_905 *)
             (**(code **)&this->__vtable->field_0x64)
                       ((int)&this->_vb966 + (int)*(short *)&this->__vtable->field_0x60);
  }
  return pcVar1;
}

cXMTObject* cXMTObjectImpl::GetFirstMultiTileObject() {
  cXMTObjectImpl__138_905 *pcVar1;
  
  pcVar1 = this->fLeadObject;
  if ((this->fLeadObject == (cXMTObjectImpl__138_905 *)0x0) &&
     (pcVar1 = this, this == (cXMTObjectImpl__138_905 *)0x0)) {
    return (cXMTObject__123_3296 *)0x0;
  }
  return pcVar1->_vb1079;
}

cXMTObject* cXMTObjectImpl::GetNextMultiTileObject() {
  cXMTObject__123_3296 *pcVar1;
  
  pcVar1 = (cXMTObject__123_3296 *)0x0;
  if (this->fMultiNext != (cXMTObjectImpl__138_905 *)0x0) {
    pcVar1 = this->fMultiNext->_vb1079;
  }
  return pcVar1;
}

cXMTObjectImpl* cXMTObjectImpl::GetMTObjectImplementation() {
  return this;
}

ISimInstance* cXMTObjectImpl::GetISimInstanceBaseVer() {
  ISimInstance *pIVar1;
  
  pIVar1 = GetISimInstance__11TreeSimImpl(this->_vb901->_vb1187);
  return pIVar1;
}

cXMTObjectImpl* cXMTObjectImpl::CAST_IMPL() {
  cXMTObject__123_3296__vtable *pcVar1;
  cXMTObjectImpl__138_905 *pcVar2;
  
  if (this == (cXMTObjectImpl__138_905 *)0x0) {
    pcVar2 = (cXMTObjectImpl__138_905 *)0x0;
  }
  else {
    pcVar1 = this->_vb1079->__vtable;
    pcVar2 = (cXMTObjectImpl__138_905 *)
             (**(code **)&pcVar1->field_0x64)
                       ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar1->field_0x60);
  }
  return pcVar2;
}

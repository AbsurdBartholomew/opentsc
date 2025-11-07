// STATUS: NOT STARTED

#include "CursorObject.h"

// warning: multiple differing types with the same name (name not equal)
struct cXCursorObject : virtual cXMTObject {
	cXMTObject *$vb1079;
	__vtbl_ptr_type *$vf1098;
	
	cXCursorObject& operator=();
	cXCursorObject();
protected:
	cXCursorObject();
	/* vtable[1] */ virtual cXCursorObject(cXCursorObject*, int, void);
	void setCursorObjectImpl();
public:
	static SInt16 MakeMouseObject(/* parameters unknown */);
	static SInt16 MakeMouseObject(/* parameters unknown */);
	/* vtable[31] */ virtual void Turn();
	/* vtable[32] */ virtual void Pickup();
	/* vtable[33] */ virtual bool CanPlace();
	/* vtable[34] */ virtual void Place();
	/* vtable[5] */ virtual void AssignOffsets();
	/* vtable[4] */ virtual void Reset();
	/* vtable[1] */ virtual void Initialize();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[1] */ virtual SInt32 GetFloaterPrice();
	/* vtable[2] */ virtual Boolean GotoNextSlot();
	/* vtable[3] */ virtual Boolean CanDrop();
	/* vtable[4] */ virtual Boolean DropObject();
	/* vtable[5] */ virtual void Cancel();
	/* vtable[6] */ virtual void KillFloater();
	/* vtable[7] */ virtual void DetachFloater();
	/* vtable[8] */ virtual cXObject* GetFloater();
	/* vtable[9] */ virtual void FaceFront();
	/* vtable[10] */ virtual void FaceDirection(cXCursorObject*, int, void);
	static Int GetFrontDirection(/* parameters unknown */);
	/* vtable[14] */ virtual int GetDynamicToStaticLatency();
	/* vtable[11] */ virtual FTilePt GetLastPlace();
	/* vtable[12] */ virtual int GetLastLevel();
	/* vtable[13] */ virtual cXCursorObjectImpl* GetCursorObjectImplementation();
	cXCursorObjectImpl* CAST_IMPL();
};

// warning: multiple differing types with the same name (name not equal)
struct cXObjectImpl : virtual cXObject, virtual TreeSimImpl {
	TreeSimImpl *$vb1209;
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

// warning: multiple differing types with the same name (name not equal)
struct cXCursorObjectImpl : virtual cXCursorObject, virtual cXMTObjectImpl {
	cXMTObjectImpl *$vb905;
	cXCursorObject *$vb1098;
	cXObjectImpl *fFloater;
	Boolean fLegalPosition;
	Boolean fMyObject;
	FTilePt fLastPlace;
	int fLastLevel;
	float fSpoofAlt;
	SInt16 fTestContainerID;
	SInt16 fTestSlotNum;
	SInt16 fOrigContainerID;
	SInt16 fOrigSlotNum;
	
	cXCursorObjectImpl& operator=();
	cXCursorObjectImpl();
	void AlignFloater();
	bool AttemptFloaterPlacement();
	cXCursorObjectImpl();
	/* vtable[1] */ virtual cXCursorObjectImpl(cXCursorObjectImpl*, int, void);
	/* vtable[31] */ virtual void Turn();
	/* vtable[32] */ virtual void Pickup();
	/* vtable[33] */ virtual bool CanPlace();
	/* vtable[34] */ virtual void Place();
	/* vtable[5] */ virtual void AssignOffsets();
	/* vtable[4] */ virtual void Reset();
	/* vtable[1] */ virtual void Initialize();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[1] */ virtual SInt32 GetFloaterPrice();
	/* vtable[2] */ virtual Boolean GotoNextSlot();
	/* vtable[3] */ virtual Boolean CanDrop();
	/* vtable[4] */ virtual Boolean DropObject();
	/* vtable[5] */ virtual void Cancel();
	/* vtable[6] */ virtual void KillFloater();
	/* vtable[7] */ virtual void DetachFloater();
	/* vtable[8] */ virtual cXObject* GetFloater();
	/* vtable[9] */ virtual void FaceFront();
	/* vtable[10] */ virtual void FaceDirection(cXCursorObjectImpl*, int, void);
	/* vtable[14] */ virtual int GetDynamicToStaticLatency();
	/* vtable[11] */ virtual FTilePt GetLastPlace();
	/* vtable[12] */ virtual int GetLastLevel();
	/* vtable[13] */ virtual cXCursorObjectImpl* GetCursorObjectImplementation();
};

__vtbl_ptr_type cXCursorObjectImpl::cXCursorObject virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ -88,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -88,
		/* .__index = */ 0,
		/* .__pfn = */ &cXCursorObjectImpl::GetFloaterPrice,
		/* .__delta2 = */ 27280
	},
	/* [2] = */ {
		/* .__delta = */ -88,
		/* .__index = */ 0,
		/* .__pfn = */ &cXCursorObjectImpl::GotoNextSlot,
		/* .__delta2 = */ 29600
	},
	/* [3] = */ {
		/* .__delta = */ -88,
		/* .__index = */ 0,
		/* .__pfn = */ &cXCursorObjectImpl::CanDrop,
		/* .__delta2 = */ 31328
	},
	/* [4] = */ {
		/* .__delta = */ -88,
		/* .__index = */ 0,
		/* .__pfn = */ &cXCursorObjectImpl::DropObject,
		/* .__delta2 = */ 20504
	},
	/* [5] = */ {
		/* .__delta = */ -88,
		/* .__index = */ 0,
		/* .__pfn = */ &cXCursorObjectImpl::Cancel,
		/* .__delta2 = */ 29608
	},
	/* [6] = */ {
		/* .__delta = */ -88,
		/* .__index = */ 0,
		/* .__pfn = */ &cXCursorObjectImpl::KillFloater,
		/* .__delta2 = */ 19592
	},
	/* [7] = */ {
		/* .__delta = */ -88,
		/* .__index = */ 0,
		/* .__pfn = */ &cXCursorObjectImpl::DetachFloater,
		/* .__delta2 = */ 20000
	},
	/* [8] = */ {
		/* .__delta = */ -88,
		/* .__index = */ 0,
		/* .__pfn = */ &cXCursorObjectImpl::GetFloater,
		/* .__delta2 = */ 31360
	},
	/* [9] = */ {
		/* .__delta = */ -88,
		/* .__index = */ 0,
		/* .__pfn = */ &cXCursorObjectImpl::FaceFront,
		/* .__delta2 = */ 31384
	},
	/* [10] = */ {
		/* .__delta = */ -88,
		/* .__index = */ 0,
		/* .__pfn = */ &cXCursorObjectImpl::FaceDirection,
		/* .__delta2 = */ 30152
	},
	/* [11] = */ {
		/* .__delta = */ -88,
		/* .__index = */ 0,
		/* .__pfn = */ &cXCursorObjectImpl::GetLastPlace,
		/* .__delta2 = */ 31464
	},
	/* [12] = */ {
		/* .__delta = */ -88,
		/* .__index = */ 0,
		/* .__pfn = */ &cXCursorObjectImpl::GetLastLevel,
		/* .__delta2 = */ 31488
	},
	/* [13] = */ {
		/* .__delta = */ -88,
		/* .__index = */ 0,
		/* .__pfn = */ &cXCursorObjectImpl::GetCursorObjectImplementation,
		/* .__delta2 = */ 31496
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type cXCursorObjectImpl::cXObjectImpl virtual table[8] = {
	/* [0] = */ {
		/* .__delta = */ -148,
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
		/* .__delta = */ -148,
		/* .__index = */ 0,
		/* .__pfn = */ &cXCursorObjectImpl::Initialize,
		/* .__delta2 = */ 13416
	},
	/* [4] = */ {
		/* .__delta = */ -148,
		/* .__index = */ 0,
		/* .__pfn = */ &cXCursorObjectImpl::Reset,
		/* .__delta2 = */ 29272
	},
	/* [5] = */ {
		/* .__delta = */ 308,
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

__vtbl_ptr_type cXCursorObjectImpl::cXMTObject virtual table[14] = {
	/* [0] = */ {
		/* .__delta = */ -80,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -80,
		/* .__index = */ 0,
		/* .__pfn = */ &cXCursorObjectImpl::Initialize,
		/* .__delta2 = */ 13416
	},
	/* [2] = */ {
		/* .__delta = */ 376,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::GetFirstMultiTileObject,
		/* .__delta2 = */ 32584
	},
	/* [3] = */ {
		/* .__delta = */ 376,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::GetNextMultiTileObject,
		/* .__delta2 = */ 32624
	},
	/* [4] = */ {
		/* .__delta = */ -80,
		/* .__index = */ 0,
		/* .__pfn = */ &cXCursorObjectImpl::Reset,
		/* .__delta2 = */ 29272
	},
	/* [5] = */ {
		/* .__delta = */ -80,
		/* .__index = */ 0,
		/* .__pfn = */ &cXCursorObjectImpl::AssignOffsets,
		/* .__delta2 = */ 29616
	},
	/* [6] = */ {
		/* .__delta = */ 376,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::PostLoad,
		/* .__delta2 = */ 29296
	},
	/* [7] = */ {
		/* .__delta = */ 376,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::SetMultiObjectData,
		/* .__delta2 = */ 29440
	},
	/* [8] = */ {
		/* .__delta = */ 376,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::DirtyAll,
		/* .__delta2 = */ 29560
	},
	/* [9] = */ {
		/* .__delta = */ 376,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::IsDynamic,
		/* .__delta2 = */ 30304
	},
	/* [10] = */ {
		/* .__delta = */ 376,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::MergeInPlace,
		/* .__delta2 = */ 31344
	},
	/* [11] = */ {
		/* .__delta = */ 376,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::RemoveFromDynamic,
		/* .__delta2 = */ 30360
	},
	/* [12] = */ {
		/* .__delta = */ 376,
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

__vtbl_ptr_type cXCursorObjectImpl::cXObject virtual table[140] = {
	/* [0] = */ {
		/* .__delta = */ -72,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::Kill,
		/* .__delta2 = */ -29360
	},
	/* [2] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetNumAttr,
		/* .__delta2 = */ -29264
	},
	/* [3] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::CalcDistance,
		/* .__delta2 = */ 24888
	},
	/* [4] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::CalcShortDistance,
		/* .__delta2 = */ 24568
	},
	/* [5] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::CalcShortDistance,
		/* .__delta2 = */ 24800
	},
	/* [6] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetSpriteSlot,
		/* .__delta2 = */ 19792
	},
	/* [7] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetHilite,
		/* .__delta2 = */ 8984
	},
	/* [8] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetHilite,
		/* .__delta2 = */ 8968
	},
	/* [9] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetMiscFlag,
		/* .__delta2 = */ -29256
	},
	/* [10] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetMiscFlag,
		/* .__delta2 = */ -29216
	},
	/* [11] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::UpdateSimFlags,
		/* .__delta2 = */ -32136
	},
	/* [12] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::Dirty,
		/* .__delta2 = */ 24256
	},
	/* [13] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetRenderLayer,
		/* .__delta2 = */ 27008
	},
	/* [14] = */ {
		/* .__delta = */ -72,
		/* .__index = */ 0,
		/* .__pfn = */ &cXCursorObjectImpl::GetDynamicToStaticLatency,
		/* .__delta2 = */ 30136
	},
	/* [15] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetRenderLayer,
		/* .__delta2 = */ -29200
	},
	/* [16] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsRenderingRoot,
		/* .__delta2 = */ -29192
	},
	/* [17] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetLastDamage,
		/* .__delta2 = */ -29144
	},
	/* [18] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetLastDamage,
		/* .__delta2 = */ 26992
	},
	/* [19] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::ResetDamage,
		/* .__delta2 = */ 27000
	},
	/* [20] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsEmissive,
		/* .__delta2 = */ -29136
	},
	/* [21] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsBeingDraggedAround,
		/* .__delta2 = */ 29352
	},
	/* [22] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::CenterHouseViewOnMe,
		/* .__delta2 = */ 28704
	},
	/* [23] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetDrawLabel,
		/* .__delta2 = */ -31096
	},
	/* [24] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsSpriteVisible,
		/* .__delta2 = */ -31376
	},
	/* [25] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::RunTree,
		/* .__delta2 = */ 6712
	},
	/* [26] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::RunTree,
		/* .__delta2 = */ -29024
	},
	/* [27] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::RunTree,
		/* .__delta2 = */ -31288
	},
	/* [28] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::ParseUIString,
		/* .__delta2 = */ -24464
	},
	/* [29] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::Error,
		/* .__delta2 = */ 1848
	},
	/* [30] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::HandleError,
		/* .__delta2 = */ 1992
	},
	/* [31] = */ {
		/* .__delta = */ -72,
		/* .__index = */ 0,
		/* .__pfn = */ &cXCursorObjectImpl::Turn,
		/* .__delta2 = */ 26288
	},
	/* [32] = */ {
		/* .__delta = */ -72,
		/* .__index = */ 0,
		/* .__pfn = */ &cXCursorObjectImpl::Pickup,
		/* .__delta2 = */ 20144
	},
	/* [33] = */ {
		/* .__delta = */ -72,
		/* .__index = */ 0,
		/* .__pfn = */ &cXCursorObjectImpl::CanPlace,
		/* .__delta2 = */ 27232
	},
	/* [34] = */ {
		/* .__delta = */ -72,
		/* .__index = */ 0,
		/* .__pfn = */ &cXCursorObjectImpl::Place,
		/* .__delta2 = */ 27432
	},
	/* [35] = */ {
		/* .__delta = */ 384,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::IsPartOfMe,
		/* .__delta2 = */ 28568
	},
	/* [36] = */ {
		/* .__delta = */ 384,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::UserCanPlace,
		/* .__delta2 = */ 27088
	},
	/* [37] = */ {
		/* .__delta = */ 384,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::UserPlace,
		/* .__delta2 = */ 27552
	},
	/* [38] = */ {
		/* .__delta = */ 384,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::UserCanPickup,
		/* .__delta2 = */ 27920
	},
	/* [39] = */ {
		/* .__delta = */ 384,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::UserPickup,
		/* .__delta2 = */ 28056
	},
	/* [40] = */ {
		/* .__delta = */ 384,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::UserCanDelete,
		/* .__delta2 = */ 28432
	},
	/* [41] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::FindGoodLocation,
		/* .__delta2 = */ 27240
	},
	/* [42] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetPlacementInfo,
		/* .__delta2 = */ 13680
	},
	/* [43] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsInWorld,
		/* .__delta2 = */ 13832
	},
	/* [44] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::TestIntersection,
		/* .__delta2 = */ 20600
	},
	/* [45] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::ForceLocation,
		/* .__delta2 = */ 22040
	},
	/* [46] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetFnTable,
		/* .__delta2 = */ -28728
	},
	/* [47] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetTreeID,
		/* .__delta2 = */ -28696
	},
	/* [48] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetLevel,
		/* .__delta2 = */ -31448
	},
	/* [49] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsOccupied,
		/* .__delta2 = */ -28616
	},
	/* [50] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetData,
		/* .__delta2 = */ -28600
	},
	/* [51] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetTemp,
		/* .__delta2 = */ -28584
	},
	/* [52] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetAttr,
		/* .__delta2 = */ -28568
	},
	/* [53] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetObjectProbe,
		/* .__delta2 = */ -28544
	},
	/* [54] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetObjectProbe,
		/* .__delta2 = */ -28536
	},
	/* [55] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetInteractionLeader,
		/* .__delta2 = */ 29856
	},
	/* [56] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetFrontFaceDirection,
		/* .__delta2 = */ 28712
	},
	/* [57] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetFolder,
		/* .__delta2 = */ -28528
	},
	/* [58] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SimIndependent,
		/* .__delta2 = */ -28512
	},
	/* [59] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SimEnabled,
		/* .__delta2 = */ -28496
	},
	/* [60] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::EnableSim,
		/* .__delta2 = */ -28392
	},
	/* [61] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetIdleStatus,
		/* .__delta2 = */ -28272
	},
	/* [62] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::SetIdleStatus,
		/* .__delta2 = */ -28176
	},
	/* [63] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::ClearIdleStatus,
		/* .__delta2 = */ -28064
	},
	/* [64] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetRect,
		/* .__delta2 = */ -27968
	},
	/* [65] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetData,
		/* .__delta2 = */ -27960
	},
	/* [66] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetTemp,
		/* .__delta2 = */ -27944
	},
	/* [67] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetAttr,
		/* .__delta2 = */ -27928
	},
	/* [68] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetModule,
		/* .__delta2 = */ -27904
	},
	/* [69] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetAdultAnimTable,
		/* .__delta2 = */ -27896
	},
	/* [70] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetChildAnimTable,
		/* .__delta2 = */ -27864
	},
	/* [71] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::HideForCutaway,
		/* .__delta2 = */ -27832
	},
	/* [72] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetRequiredSegment,
		/* .__delta2 = */ -32568
	},
	/* [73] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::CountObjectSlots,
		/* .__delta2 = */ -27728
	},
	/* [74] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetObjectSlot,
		/* .__delta2 = */ 15904
	},
	/* [75] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetContainedObject,
		/* .__delta2 = */ -27688
	},
	/* [76] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetSlotHeight,
		/* .__delta2 = */ 24040
	},
	/* [77] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetContainer,
		/* .__delta2 = */ 15856
	},
	/* [78] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsContained,
		/* .__delta2 = */ 15696
	},
	/* [79] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetContainerID,
		/* .__delta2 = */ 15736
	},
	/* [80] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetContainedSlotNum,
		/* .__delta2 = */ 15816
	},
	/* [81] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetNextObjectSibling,
		/* .__delta2 = */ 14216
	},
	/* [82] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetPrevObjectSibling,
		/* .__delta2 = */ 14248
	},
	/* [83] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetRoom,
		/* .__delta2 = */ -27592
	},
	/* [84] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetDef,
		/* .__delta2 = */ -27584
	},
	/* [85] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetType,
		/* .__delta2 = */ -27576
	},
	/* [86] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetTypeName,
		/* .__delta2 = */ 24376
	},
	/* [87] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetID,
		/* .__delta2 = */ -27560
	},
	/* [88] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetLocation,
		/* .__delta2 = */ -27552
	},
	/* [89] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetLocation,
		/* .__delta2 = */ -27528
	},
	/* [90] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetLevel,
		/* .__delta2 = */ -31456
	},
	/* [91] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetCTilePt,
		/* .__delta2 = */ -31440
	},
	/* [92] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetTreeTab,
		/* .__delta2 = */ -27520
	},
	/* [93] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetSelector,
		/* .__delta2 = */ -27488
	},
	/* [94] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetBehavior,
		/* .__delta2 = */ -27480
	},
	/* [95] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetSelFile,
		/* .__delta2 = */ -27464
	},
	/* [96] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetTileWidth,
		/* .__delta2 = */ 29360
	},
	/* [97] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsMultiTile,
		/* .__delta2 = */ -27416
	},
	/* [98] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetFlags,
		/* .__delta2 = */ -27400
	},
	/* [99] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetWallPlacementFlags,
		/* .__delta2 = */ -27392
	},
	/* [100] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetRelMatrix,
		/* .__delta2 = */ -27384
	},
	/* [101] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetObstacleAtLocation,
		/* .__delta2 = */ 13424
	},
	/* [102] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetNumRoutingSlots,
		/* .__delta2 = */ -27376
	},
	/* [103] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetRoutingSlot,
		/* .__delta2 = */ -27352
	},
	/* [104] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetCurrentValue,
		/* .__delta2 = */ 9456
	},
	/* [105] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetSize,
		/* .__delta2 = */ -27336
	},
	/* [106] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetSim,
		/* .__delta2 = */ -27328
	},
	/* [107] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetErrorString,
		/* .__delta2 = */ 2680
	},
	/* [108] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetAgeInMinutes,
		/* .__delta2 = */ 29528
	},
	/* [109] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::CanChooseAutonomously,
		/* .__delta2 = */ -32400
	},
	/* [110] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetBuildModeType,
		/* .__delta2 = */ -27280
	},
	/* [111] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsSupport,
		/* .__delta2 = */ -27240
	},
	/* [112] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::ShouldAutoRotate,
		/* .__delta2 = */ 32016
	},
	/* [113] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::CanContributeLight,
		/* .__delta2 = */ -27184
	},
	/* [114] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetLightingContribution,
		/* .__delta2 = */ -27168
	},
	/* [115] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetObjectLightSource,
		/* .__delta2 = */ -27160
	},
	/* [116] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsDeletedByEvict,
		/* .__delta2 = */ 30752
	},
	/* [117] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsFromCatalog,
		/* .__delta2 = */ 31936
	},
	/* [118] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsBroken,
		/* .__delta2 = */ -27152
	},
	/* [119] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsDirty,
		/* .__delta2 = */ -27136
	},
	/* [120] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsBurning,
		/* .__delta2 = */ -27120
	},
	/* [121] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::CanBurn,
		/* .__delta2 = */ -27104
	},
	/* [122] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsFireproof,
		/* .__delta2 = */ -27088
	},
	/* [123] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::HasZeroExtent,
		/* .__delta2 = */ -27072
	},
	/* [124] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::CanIntersectPeople,
		/* .__delta2 = */ -27016
	},
	/* [125] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsChair,
		/* .__delta2 = */ -26888
	},
	/* [126] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetObjectFromID,
		/* .__delta2 = */ -26816
	},
	/* [127] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetNext,
		/* .__delta2 = */ -26760
	},
	/* [128] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetFirst,
		/* .__delta2 = */ -26736
	},
	/* [129] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetWallBlockFlags,
		/* .__delta2 = */ -31888
	},
	/* [130] = */ {
		/* .__delta = */ 384,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::ReconStream,
		/* .__delta2 = */ 28952
	},
	/* [131] = */ {
		/* .__delta = */ -72,
		/* .__index = */ 0,
		/* .__pfn = */ &cXCursorObjectImpl::ReconType,
		/* .__delta2 = */ 30120
	},
	/* [132] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::ReconSlots,
		/* .__delta2 = */ 26176
	},
	/* [133] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::ReconHeader,
		/* .__delta2 = */ 25032
	},
	/* [134] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::Backtrace,
		/* .__delta2 = */ 15360
	},
	/* [135] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetName,
		/* .__delta2 = */ -26616
	},
	/* [136] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::GetDebugName,
		/* .__delta2 = */ 1472
	},
	/* [137] = */ {
		/* .__delta = */ 76,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::AdvanceGraphic,
		/* .__delta2 = */ 32504
	},
	/* [138] = */ {
		/* .__delta = */ 76,
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

__vtbl_ptr_type cXCursorObjectImpl::TreeSim virtual table[18] = {
	/* [0] = */ {
		/* .__delta = */ -40,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -40,
		/* .__index = */ 0,
		/* .__pfn = */ &cXCursorObjectImpl::~cXCursorObjectImpl,
		/* .__delta2 = */ 13448
	},
	/* [2] = */ {
		/* .__delta = */ 56,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::Initialize,
		/* .__delta2 = */ 18040
	},
	/* [3] = */ {
		/* .__delta = */ 108,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::Simulate,
		/* .__delta2 = */ 4760
	},
	/* [4] = */ {
		/* .__delta = */ 56,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::SetError,
		/* .__delta2 = */ 16560
	},
	/* [5] = */ {
		/* .__delta = */ 56,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetError,
		/* .__delta2 = */ 16568
	},
	/* [6] = */ {
		/* .__delta = */ 56,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::ClearError,
		/* .__delta2 = */ 16576
	},
	/* [7] = */ {
		/* .__delta = */ 56,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetHighLevelAction,
		/* .__delta2 = */ 20552
	},
	/* [8] = */ {
		/* .__delta = */ 56,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetCurElem,
		/* .__delta2 = */ 20816
	},
	/* [9] = */ {
		/* .__delta = */ 56,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetMainSimElem,
		/* .__delta2 = */ 20872
	},
	/* [10] = */ {
		/* .__delta = */ 56,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetNthElem,
		/* .__delta2 = */ 21064
	},
	/* [11] = */ {
		/* .__delta = */ 56,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetStackSize,
		/* .__delta2 = */ 21104
	},
	/* [12] = */ {
		/* .__delta = */ 56,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetCurrentPrimitive,
		/* .__delta2 = */ 18200
	},
	/* [13] = */ {
		/* .__delta = */ 56,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetIterations,
		/* .__delta2 = */ 23888
	},
	/* [14] = */ {
		/* .__delta = */ 56,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetLastTransition,
		/* .__delta2 = */ 20384
	},
	/* [15] = */ {
		/* .__delta = */ 56,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetLastResult,
		/* .__delta2 = */ 23896
	},
	/* [16] = */ {
		/* .__delta = */ 416,
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

__vtbl_ptr_type cXCursorObject virtual table[15] = {
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type cXCursorObject::cXMTObject virtual table[14] = {
	/* [0] = */ {
		/* .__delta = */ -48,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -48,
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
		/* .__delta = */ -48,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [5] = */ {
		/* .__delta = */ -48,
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

__vtbl_ptr_type cXCursorObject::cXObject virtual table[140] = {
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
		/* .__delta = */ -40,
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
		/* .__delta = */ -40,
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

__vtbl_ptr_type cXCursorObject::TreeSim virtual table[18] = {
	/* [0] = */ {
		/* .__delta = */ -8,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -8,
		/* .__index = */ 0,
		/* .__pfn = */ &cXCursorObject::~cXCursorObject,
		/* .__delta2 = */ 30648
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

void cXCursorObjectImpl::Initialize() {
  Initialize__14cXMTObjectImpl(this->_vb905);
  return;
}

void cXCursorObjectImpl::~cXCursorObjectImpl(int __in_chrg) {
	cXCursorObject *this;
	void *pAddress;
	void *pAddress;
	
  cXMTObjectImpl__138_905 *pcVar1;
  cXObjectImpl__138_901 *pcVar2;
  cXCursorObject__152_1098 *pcVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  ushort uVar7;
  undefined6 uVar8;
  ushort uVar9;
  undefined6 uVar10;
  ushort uVar11;
  undefined6 uVar12;
  ushort uVar13;
  undefined6 uVar14;
  undefined6 uVar15;
  ushort uVar16;
  undefined6 uVar17;
  ushort uVar18;
  TreeSim__vtable *pTVar19;
  cXMTObject__123_3296__vtable *pcVar20;
  cXCursorObject__152_1098__vtable *pcVar21;
  __vtbl_ptr_type *p_Var22;
  TreeSim__vtable *pTVar23;
  __vtbl_ptr_type *p_Var24;
  __vtbl_ptr_type *p_Var25;
  __vtbl_ptr_type _Var26;
  __vtbl_ptr_type _Var27;
  __vtbl_ptr_type _Var28;
  undefined8 unaff_s0;
  cXObject__21_1030__vtable *pcVar29;
  cXCursorObject__152_1098__vtable *pcVar30;
  undefined8 unaff_s1;
  __vtbl_ptr_type *p_Var31;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  cXMTObject__123_3296__vtable *pcVar32;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  undefined local_c60 [8];
  __vtbl_ptr_type local_c58 [17];
  undefined local_bd0 [248];
  short local_ad8;
  short local_ad0;
  short local_ac8;
  short local_ac0;
  short local_7b8;
  undefined local_770 [8];
  undefined8 local_768 [3];
  short local_750;
  short local_748;
  undefined local_700 [8];
  undefined8 local_6f8;
  short local_6f0;
  short local_6e8;
  short local_6e0;
  short local_6d8;
  short local_6d0;
  short local_6c8;
  short local_6c0;
  short local_6b8;
  short local_6b0;
  short local_6a8;
  short local_6a0;
  short local_698;
  short local_690;
  short local_688;
  short local_680;
  undefined local_670 [8];
  undefined8 local_668;
  short local_660;
  short local_658;
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
  short local_5f8;
  short local_5f0;
  short local_5e8;
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
  undefined auStack_210 [16];
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
  cXMTObject__123_3296__vtable *local_b0;
  cXCursorObject__152_1098__vtable *local_ac;
  TreeSimImpl__21_3338__vtable *local_a8;
  cXObjectImpl__138_901__vtable *local_a4;
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
  
  local_20 = (undefined *)unaff_s8;
  puStack_1c = (undefined *)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined *)unaff_s7;
  puStack_2c = (undefined *)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined *)unaff_s5;
  puStack_4c = (undefined *)((ulong)unaff_s5 >> 0x20);
  local_10 = (undefined *)unaff_retaddr;
  puStack_c = (undefined *)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined *)unaff_s6;
  puStack_3c = (undefined *)((ulong)unaff_s6 >> 0x20);
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
  this->_vb1098->_vb1079->_vb966->_vb899->__vtable =
       (TreeSim__vtable *)_vt_18cXCursorObjectImpl_7TreeSim;
  this->_vb1098->_vb1079->_vb966->__vtable =
       (cXObject__21_1030__vtable *)_vt_18cXCursorObjectImpl_8cXObject;
  this->_vb1098->_vb1079->__vtable =
       (cXMTObject__123_3296__vtable *)_vt_18cXCursorObjectImpl_10cXMTObject;
  this->_vb1098->__vtable =
       (cXCursorObject__152_1098__vtable *)_vt_18cXCursorObjectImpl_14cXCursorObject;
  this->_vb905->_vb901->_vb1187->__vtable =
       (TreeSimImpl__21_3338__vtable *)_vt_14cXMTObjectImpl_11TreeSimImpl;
  this->_vb905->_vb901->__vtable =
       (cXObjectImpl__138_901__vtable *)_vt_18cXCursorObjectImpl_12cXObjectImpl;
  uVar13 = _vt_18cXCursorObjectImpl_7TreeSim[5].__delta;
  uVar11 = _vt_18cXCursorObjectImpl_7TreeSim[4].__delta;
  uVar9 = _vt_18cXCursorObjectImpl_7TreeSim[2].__delta;
  uVar7 = _vt_18cXCursorObjectImpl_7TreeSim[1].__delta;
  if (__in_chrg == 0) {
    local_b0 = (cXMTObject__123_3296__vtable *)auStack_210;
    local_ac = (cXCursorObject__152_1098__vtable *)&stack0xfffffe60;
    local_a8 = (TreeSimImpl__21_3338__vtable *)&local_120;
    local_a4 = (cXObjectImpl__138_901__vtable *)&local_f0;
    p_Var31 = _vt_18cXCursorObjectImpl_7TreeSim;
    pTVar19 = (TreeSim__vtable *)local_700;
    do {
      pTVar23 = pTVar19;
      p_Var22 = p_Var31;
      _Var26 = p_Var22[1];
      _Var27 = p_Var22[2];
      _Var28 = p_Var22[3];
      *(__vtbl_ptr_type *)pTVar23 = *p_Var22;
      *(__vtbl_ptr_type *)&pTVar23->Initialize = _Var26;
      *(__vtbl_ptr_type *)&pTVar23->SetError = _Var27;
      *(__vtbl_ptr_type *)&pTVar23->ClearError = _Var28;
      p_Var31 = p_Var22 + 4;
      pTVar19 = (TreeSim__vtable *)&pTVar23->GetCurElem;
    } while (p_Var22 + 4 != _vt_18cXCursorObjectImpl_7TreeSim + 0x10);
    _Var26 = p_Var22[5];
    *(ulong *)&pTVar23->GetCurElem =
         CONCAT62(_vt_18cXCursorObjectImpl_7TreeSim[16]._2_6_,
                  _vt_18cXCursorObjectImpl_7TreeSim[16].__delta);
    p_Var31 = _vt_18cXCursorObjectImpl_8cXObject;
    *(__vtbl_ptr_type *)&pTVar23->GetNthElem = _Var26;
    this->_vb1098->_vb1079->_vb966->_vb899->__vtable = (TreeSim__vtable *)local_700;
    uVar18 = _vt_18cXCursorObjectImpl_8cXObject[2].__delta;
    uVar16 = _vt_18cXCursorObjectImpl_8cXObject[1].__delta;
    pcVar1 = this->_vb905;
    sVar5 = (short)this;
    sVar4 = sVar5 - ((short)this->_vb1098->_vb1079->_vb966->_vb899 + -0x28);
    local_6f8._0_2_ = uVar7 + sVar4;
    local_690 = sVar5 - ((short)pcVar1->_vb901->_vb1187 + -0x60);
    local_6f0 = (uVar9 + sVar4) - local_690;
    local_6c8 = (_vt_18cXCursorObjectImpl_7TreeSim[7].__delta + sVar4) - local_690;
    local_6e0 = (uVar11 + sVar4) - local_690;
    local_6d8 = (uVar13 + sVar4) - local_690;
    local_6d0 = (_vt_18cXCursorObjectImpl_7TreeSim[6].__delta + sVar4) - local_690;
    local_6c0 = (_vt_18cXCursorObjectImpl_7TreeSim[8].__delta + sVar4) - local_690;
    local_6b8 = (_vt_18cXCursorObjectImpl_7TreeSim[9].__delta + sVar4) - local_690;
    local_6e8 = (_vt_18cXCursorObjectImpl_7TreeSim[3].__delta + sVar4) -
                (sVar5 - ((short)pcVar1->_vb901 + -0x94));
    local_6b0 = (_vt_18cXCursorObjectImpl_7TreeSim[10].__delta + sVar4) - local_690;
    local_680 = (_vt_18cXCursorObjectImpl_7TreeSim[16].__delta + sVar4) -
                (sVar5 - ((short)pcVar1 + -0x1c8));
    local_6a8 = (_vt_18cXCursorObjectImpl_7TreeSim[11].__delta + sVar4) - local_690;
    local_688 = (_vt_18cXCursorObjectImpl_7TreeSim[15].__delta + sVar4) - local_690;
    local_6a0 = (_vt_18cXCursorObjectImpl_7TreeSim[12].__delta + sVar4) - local_690;
    local_698 = (_vt_18cXCursorObjectImpl_7TreeSim[13].__delta + sVar4) - local_690;
    local_690 = (_vt_18cXCursorObjectImpl_7TreeSim[14].__delta + sVar4) - local_690;
    pcVar29 = (cXObject__21_1030__vtable *)local_670;
    do {
      _Var26 = p_Var31[1];
      _Var27 = p_Var31[2];
      _Var28 = p_Var31[3];
      *(__vtbl_ptr_type *)pcVar29 = *p_Var31;
      *(__vtbl_ptr_type *)&pcVar29->GetNumAttr = _Var26;
      *(__vtbl_ptr_type *)&pcVar29->CalcShortDistance = _Var27;
      *(__vtbl_ptr_type *)&pcVar29->GetSpriteSlot = _Var28;
      p_Var31 = p_Var31 + 4;
      pcVar29 = (cXObject__21_1030__vtable *)&pcVar29->GetHilite;
    } while (p_Var31 != _vt_18cXCursorObjectImpl_7TreeSim);
    this->_vb1098->_vb1079->_vb966->__vtable = (cXObject__21_1030__vtable *)local_670;
    sVar4 = sVar5 - ((short)this->_vb1098->_vb1079->_vb966 + -0x48);
    local_228 = sVar5 - ((short)this->_vb905->_vb901 + -0x94);
    local_668._0_2_ = (uVar16 + sVar4) - local_228;
    local_660 = (uVar18 + sVar4) - local_228;
    local_658 = (_vt_18cXCursorObjectImpl_8cXObject[3].__delta + sVar4) - local_228;
    local_650 = (_vt_18cXCursorObjectImpl_8cXObject[4].__delta + sVar4) - local_228;
    local_648 = (_vt_18cXCursorObjectImpl_8cXObject[5].__delta + sVar4) - local_228;
    local_640 = (_vt_18cXCursorObjectImpl_8cXObject[6].__delta + sVar4) - local_228;
    local_638 = (_vt_18cXCursorObjectImpl_8cXObject[7].__delta + sVar4) - local_228;
    local_630 = (_vt_18cXCursorObjectImpl_8cXObject[8].__delta + sVar4) - local_228;
    local_628 = (_vt_18cXCursorObjectImpl_8cXObject[9].__delta + sVar4) - local_228;
    local_620 = (_vt_18cXCursorObjectImpl_8cXObject[10].__delta + sVar4) - local_228;
    local_618 = (_vt_18cXCursorObjectImpl_8cXObject[11].__delta + sVar4) - local_228;
    local_610 = (_vt_18cXCursorObjectImpl_8cXObject[12].__delta + sVar4) - local_228;
    local_608 = (_vt_18cXCursorObjectImpl_8cXObject[13].__delta + sVar4) - local_228;
    local_260 = sVar5 - ((short)this->_vb905 + -0x1c8);
    local_5f8 = (_vt_18cXCursorObjectImpl_8cXObject[15].__delta + sVar4) - local_228;
    local_600 = _vt_18cXCursorObjectImpl_8cXObject[14].__delta + sVar4;
    local_5f0 = (_vt_18cXCursorObjectImpl_8cXObject[16].__delta + sVar4) - local_228;
    local_5e8 = (_vt_18cXCursorObjectImpl_8cXObject[17].__delta + sVar4) - local_228;
    local_5e0 = (_vt_18cXCursorObjectImpl_8cXObject[18].__delta + sVar4) - local_228;
    local_5d8 = (_vt_18cXCursorObjectImpl_8cXObject[19].__delta + sVar4) - local_228;
    local_5d0 = (_vt_18cXCursorObjectImpl_8cXObject[20].__delta + sVar4) - local_228;
    local_5c8 = (_vt_18cXCursorObjectImpl_8cXObject[21].__delta + sVar4) - local_228;
    local_5c0 = (_vt_18cXCursorObjectImpl_8cXObject[22].__delta + sVar4) - local_228;
    local_5b8 = (_vt_18cXCursorObjectImpl_8cXObject[23].__delta + sVar4) - local_228;
    local_5b0 = (_vt_18cXCursorObjectImpl_8cXObject[24].__delta + sVar4) - local_228;
    local_5a8 = (_vt_18cXCursorObjectImpl_8cXObject[25].__delta + sVar4) - local_228;
    local_5a0 = (_vt_18cXCursorObjectImpl_8cXObject[26].__delta + sVar4) - local_228;
    local_598 = (_vt_18cXCursorObjectImpl_8cXObject[27].__delta + sVar4) - local_228;
    local_590 = (_vt_18cXCursorObjectImpl_8cXObject[28].__delta + sVar4) - local_228;
    local_588 = (_vt_18cXCursorObjectImpl_8cXObject[29].__delta + sVar4) - local_228;
    local_580 = (_vt_18cXCursorObjectImpl_8cXObject[30].__delta + sVar4) - local_228;
    local_558 = (_vt_18cXCursorObjectImpl_8cXObject[35].__delta + sVar4) - local_260;
    local_578 = _vt_18cXCursorObjectImpl_8cXObject[31].__delta + sVar4;
    local_570 = _vt_18cXCursorObjectImpl_8cXObject[32].__delta + sVar4;
    local_568 = _vt_18cXCursorObjectImpl_8cXObject[33].__delta + sVar4;
    local_560 = _vt_18cXCursorObjectImpl_8cXObject[34].__delta + sVar4;
    local_550 = (_vt_18cXCursorObjectImpl_8cXObject[36].__delta + sVar4) - local_260;
    local_548 = (_vt_18cXCursorObjectImpl_8cXObject[37].__delta + sVar4) - local_260;
    local_540 = (_vt_18cXCursorObjectImpl_8cXObject[38].__delta + sVar4) - local_260;
    local_538 = (_vt_18cXCursorObjectImpl_8cXObject[39].__delta + sVar4) - local_260;
    local_530 = (_vt_18cXCursorObjectImpl_8cXObject[40].__delta + sVar4) - local_260;
    local_528 = (_vt_18cXCursorObjectImpl_8cXObject[41].__delta + sVar4) - local_228;
    local_520 = (_vt_18cXCursorObjectImpl_8cXObject[42].__delta + sVar4) - local_228;
    local_518 = (_vt_18cXCursorObjectImpl_8cXObject[43].__delta + sVar4) - local_228;
    local_510 = (_vt_18cXCursorObjectImpl_8cXObject[44].__delta + sVar4) - local_228;
    local_508 = (_vt_18cXCursorObjectImpl_8cXObject[45].__delta + sVar4) - local_228;
    local_500 = (_vt_18cXCursorObjectImpl_8cXObject[46].__delta + sVar4) - local_228;
    local_4f8 = (_vt_18cXCursorObjectImpl_8cXObject[47].__delta + sVar4) - local_228;
    local_4f0 = (_vt_18cXCursorObjectImpl_8cXObject[48].__delta + sVar4) - local_228;
    local_4e8 = (_vt_18cXCursorObjectImpl_8cXObject[49].__delta + sVar4) - local_228;
    local_4e0 = (_vt_18cXCursorObjectImpl_8cXObject[50].__delta + sVar4) - local_228;
    local_4d8 = (_vt_18cXCursorObjectImpl_8cXObject[51].__delta + sVar4) - local_228;
    local_4d0 = (_vt_18cXCursorObjectImpl_8cXObject[52].__delta + sVar4) - local_228;
    local_4c8 = (_vt_18cXCursorObjectImpl_8cXObject[53].__delta + sVar4) - local_228;
    local_4c0 = (_vt_18cXCursorObjectImpl_8cXObject[54].__delta + sVar4) - local_228;
    local_4b8 = (_vt_18cXCursorObjectImpl_8cXObject[55].__delta + sVar4) - local_228;
    local_4b0 = (_vt_18cXCursorObjectImpl_8cXObject[56].__delta + sVar4) - local_228;
    local_4a8 = (_vt_18cXCursorObjectImpl_8cXObject[57].__delta + sVar4) - local_228;
    local_4a0 = (_vt_18cXCursorObjectImpl_8cXObject[58].__delta + sVar4) - local_228;
    local_498 = (_vt_18cXCursorObjectImpl_8cXObject[59].__delta + sVar4) - local_228;
    local_490 = (_vt_18cXCursorObjectImpl_8cXObject[60].__delta + sVar4) - local_228;
    local_488 = (_vt_18cXCursorObjectImpl_8cXObject[61].__delta + sVar4) - local_228;
    local_480 = (_vt_18cXCursorObjectImpl_8cXObject[62].__delta + sVar4) - local_228;
    local_478 = (_vt_18cXCursorObjectImpl_8cXObject[63].__delta + sVar4) - local_228;
    local_470 = (_vt_18cXCursorObjectImpl_8cXObject[64].__delta + sVar4) - local_228;
    local_468 = (_vt_18cXCursorObjectImpl_8cXObject[65].__delta + sVar4) - local_228;
    local_460 = (_vt_18cXCursorObjectImpl_8cXObject[66].__delta + sVar4) - local_228;
    local_458 = (_vt_18cXCursorObjectImpl_8cXObject[67].__delta + sVar4) - local_228;
    local_450 = (_vt_18cXCursorObjectImpl_8cXObject[68].__delta + sVar4) - local_228;
    local_448 = (_vt_18cXCursorObjectImpl_8cXObject[69].__delta + sVar4) - local_228;
    local_440 = (_vt_18cXCursorObjectImpl_8cXObject[70].__delta + sVar4) - local_228;
    local_438 = (_vt_18cXCursorObjectImpl_8cXObject[71].__delta + sVar4) - local_228;
    local_430 = (_vt_18cXCursorObjectImpl_8cXObject[72].__delta + sVar4) - local_228;
    local_428 = (_vt_18cXCursorObjectImpl_8cXObject[73].__delta + sVar4) - local_228;
    local_420 = (_vt_18cXCursorObjectImpl_8cXObject[74].__delta + sVar4) - local_228;
    local_418 = (_vt_18cXCursorObjectImpl_8cXObject[75].__delta + sVar4) - local_228;
    local_410 = (_vt_18cXCursorObjectImpl_8cXObject[76].__delta + sVar4) - local_228;
    local_408 = (_vt_18cXCursorObjectImpl_8cXObject[77].__delta + sVar4) - local_228;
    local_400 = (_vt_18cXCursorObjectImpl_8cXObject[78].__delta + sVar4) - local_228;
    local_3f8 = (_vt_18cXCursorObjectImpl_8cXObject[79].__delta + sVar4) - local_228;
    local_3f0 = (_vt_18cXCursorObjectImpl_8cXObject[80].__delta + sVar4) - local_228;
    local_3e8 = (_vt_18cXCursorObjectImpl_8cXObject[81].__delta + sVar4) - local_228;
    local_3e0 = (_vt_18cXCursorObjectImpl_8cXObject[82].__delta + sVar4) - local_228;
    local_3d8 = (_vt_18cXCursorObjectImpl_8cXObject[83].__delta + sVar4) - local_228;
    local_3d0 = (_vt_18cXCursorObjectImpl_8cXObject[84].__delta + sVar4) - local_228;
    local_3c8 = (_vt_18cXCursorObjectImpl_8cXObject[85].__delta + sVar4) - local_228;
    local_3c0 = (_vt_18cXCursorObjectImpl_8cXObject[86].__delta + sVar4) - local_228;
    local_3b8 = (_vt_18cXCursorObjectImpl_8cXObject[87].__delta + sVar4) - local_228;
    local_3b0 = (_vt_18cXCursorObjectImpl_8cXObject[88].__delta + sVar4) - local_228;
    local_3a8 = (_vt_18cXCursorObjectImpl_8cXObject[89].__delta + sVar4) - local_228;
    local_3a0 = (_vt_18cXCursorObjectImpl_8cXObject[90].__delta + sVar4) - local_228;
    local_398 = (_vt_18cXCursorObjectImpl_8cXObject[91].__delta + sVar4) - local_228;
    local_390 = (_vt_18cXCursorObjectImpl_8cXObject[92].__delta + sVar4) - local_228;
    local_388 = (_vt_18cXCursorObjectImpl_8cXObject[93].__delta + sVar4) - local_228;
    local_380 = (_vt_18cXCursorObjectImpl_8cXObject[94].__delta + sVar4) - local_228;
    local_378 = (_vt_18cXCursorObjectImpl_8cXObject[95].__delta + sVar4) - local_228;
    local_370 = (_vt_18cXCursorObjectImpl_8cXObject[96].__delta + sVar4) - local_228;
    local_368 = (_vt_18cXCursorObjectImpl_8cXObject[97].__delta + sVar4) - local_228;
    local_360 = (_vt_18cXCursorObjectImpl_8cXObject[98].__delta + sVar4) - local_228;
    local_358 = (_vt_18cXCursorObjectImpl_8cXObject[99].__delta + sVar4) - local_228;
    local_350 = (_vt_18cXCursorObjectImpl_8cXObject[100].__delta + sVar4) - local_228;
    local_348 = (_vt_18cXCursorObjectImpl_8cXObject[101].__delta + sVar4) - local_228;
    local_340 = (_vt_18cXCursorObjectImpl_8cXObject[102].__delta + sVar4) - local_228;
    local_338 = (_vt_18cXCursorObjectImpl_8cXObject[103].__delta + sVar4) - local_228;
    local_330 = (_vt_18cXCursorObjectImpl_8cXObject[104].__delta + sVar4) - local_228;
    local_328 = (_vt_18cXCursorObjectImpl_8cXObject[105].__delta + sVar4) - local_228;
    local_320 = (_vt_18cXCursorObjectImpl_8cXObject[106].__delta + sVar4) - local_228;
    local_318 = (_vt_18cXCursorObjectImpl_8cXObject[107].__delta + sVar4) - local_228;
    local_310 = (_vt_18cXCursorObjectImpl_8cXObject[108].__delta + sVar4) - local_228;
    local_308 = (_vt_18cXCursorObjectImpl_8cXObject[109].__delta + sVar4) - local_228;
    local_300 = (_vt_18cXCursorObjectImpl_8cXObject[110].__delta + sVar4) - local_228;
    local_2f8 = (_vt_18cXCursorObjectImpl_8cXObject[111].__delta + sVar4) - local_228;
    local_2f0 = (_vt_18cXCursorObjectImpl_8cXObject[112].__delta + sVar4) - local_228;
    local_2e8 = (_vt_18cXCursorObjectImpl_8cXObject[113].__delta + sVar4) - local_228;
    local_2e0 = (_vt_18cXCursorObjectImpl_8cXObject[114].__delta + sVar4) - local_228;
    local_2d8 = (_vt_18cXCursorObjectImpl_8cXObject[115].__delta + sVar4) - local_228;
    local_280 = (_vt_18cXCursorObjectImpl_8cXObject[126].__delta + sVar4) - local_228;
    local_278 = (_vt_18cXCursorObjectImpl_8cXObject[127].__delta + sVar4) - local_228;
    local_270 = (_vt_18cXCursorObjectImpl_8cXObject[128].__delta + sVar4) - local_228;
    local_268 = (_vt_18cXCursorObjectImpl_8cXObject[129].__delta + sVar4) - local_228;
    local_2d0 = (_vt_18cXCursorObjectImpl_8cXObject[116].__delta + sVar4) - local_228;
    local_2c8 = (_vt_18cXCursorObjectImpl_8cXObject[117].__delta + sVar4) - local_228;
    local_2c0 = (_vt_18cXCursorObjectImpl_8cXObject[118].__delta + sVar4) - local_228;
    local_2b8 = (_vt_18cXCursorObjectImpl_8cXObject[119].__delta + sVar4) - local_228;
    local_2b0 = (_vt_18cXCursorObjectImpl_8cXObject[120].__delta + sVar4) - local_228;
    local_2a8 = (_vt_18cXCursorObjectImpl_8cXObject[121].__delta + sVar4) - local_228;
    local_2a0 = (_vt_18cXCursorObjectImpl_8cXObject[122].__delta + sVar4) - local_228;
    local_298 = (_vt_18cXCursorObjectImpl_8cXObject[123].__delta + sVar4) - local_228;
    local_290 = (_vt_18cXCursorObjectImpl_8cXObject[124].__delta + sVar4) - local_228;
    local_288 = (_vt_18cXCursorObjectImpl_8cXObject[125].__delta + sVar4) - local_228;
    local_260 = (_vt_18cXCursorObjectImpl_8cXObject[130].__delta + sVar4) - local_260;
    local_258 = _vt_18cXCursorObjectImpl_8cXObject[131].__delta + sVar4;
    local_250 = (_vt_18cXCursorObjectImpl_8cXObject[132].__delta + sVar4) - local_228;
    local_220 = (_vt_18cXCursorObjectImpl_8cXObject[138].__delta + sVar4) - local_228;
    local_248 = (_vt_18cXCursorObjectImpl_8cXObject[133].__delta + sVar4) - local_228;
    local_240 = (_vt_18cXCursorObjectImpl_8cXObject[134].__delta + sVar4) - local_228;
    local_238 = (_vt_18cXCursorObjectImpl_8cXObject[135].__delta + sVar4) - local_228;
    local_230 = (_vt_18cXCursorObjectImpl_8cXObject[136].__delta + sVar4) - local_228;
    local_228 = (_vt_18cXCursorObjectImpl_8cXObject[137].__delta + sVar4) - local_228;
    pcVar20 = local_b0;
    p_Var31 = _vt_18cXCursorObjectImpl_10cXMTObject;
    do {
      p_Var22 = p_Var31;
      pcVar32 = pcVar20;
      _Var26 = p_Var22[1];
      _Var27 = p_Var22[2];
      _Var28 = p_Var22[3];
      *(__vtbl_ptr_type *)pcVar32 = *p_Var22;
      *(__vtbl_ptr_type *)&pcVar32->GetFirstMultiTileObject = _Var26;
      *(__vtbl_ptr_type *)&pcVar32->Reset = _Var27;
      *(__vtbl_ptr_type *)&pcVar32->PostLoad = _Var28;
      pcVar20 = (cXMTObject__123_3296__vtable *)&pcVar32->DirtyAll;
      p_Var31 = p_Var22 + 4;
    } while (p_Var22 + 4 != _vt_18cXCursorObjectImpl_10cXMTObject + 0xc);
    _Var26 = p_Var22[5];
    *(ulong *)&pcVar32->DirtyAll =
         CONCAT62(_vt_18cXCursorObjectImpl_10cXMTObject[12]._2_6_,
                  _vt_18cXCursorObjectImpl_10cXMTObject[12].__delta);
    *(__vtbl_ptr_type *)&pcVar32->MergeInPlace = _Var26;
    uVar7 = _vt_18cXCursorObjectImpl_10cXMTObject[2].__delta;
    this->_vb1098->_vb1079->__vtable = local_b0;
    sVar4 = sVar5 - ((short)this->_vb1098->_vb1079 + -0x50);
    local_1b8 = sVar5 - ((short)this->_vb905 + -0x1c8);
    auStack_210._8_2_ = _vt_18cXCursorObjectImpl_10cXMTObject[1].__delta + sVar4;
    local_200 = (uVar7 + sVar4) - local_1b8;
    local_1f8 = (_vt_18cXCursorObjectImpl_10cXMTObject[3].__delta + sVar4) - local_1b8;
    local_1f0 = _vt_18cXCursorObjectImpl_10cXMTObject[4].__delta + sVar4;
    local_1e8 = _vt_18cXCursorObjectImpl_10cXMTObject[5].__delta + sVar4;
    local_1e0 = (_vt_18cXCursorObjectImpl_10cXMTObject[6].__delta + sVar4) - local_1b8;
    local_1d8 = (_vt_18cXCursorObjectImpl_10cXMTObject[7].__delta + sVar4) - local_1b8;
    local_1d0 = (_vt_18cXCursorObjectImpl_10cXMTObject[8].__delta + sVar4) - local_1b8;
    local_1c8 = (_vt_18cXCursorObjectImpl_10cXMTObject[9].__delta + sVar4) - local_1b8;
    local_1c0 = (_vt_18cXCursorObjectImpl_10cXMTObject[10].__delta + sVar4) - local_1b8;
    local_1b0 = (_vt_18cXCursorObjectImpl_10cXMTObject[12].__delta + sVar4) - local_1b8;
    local_1b8 = (_vt_18cXCursorObjectImpl_10cXMTObject[11].__delta + sVar4) - local_1b8;
    pcVar21 = local_ac;
    p_Var31 = _vt_18cXCursorObjectImpl_14cXCursorObject;
    do {
      p_Var22 = p_Var31;
      pcVar30 = pcVar21;
      _Var26 = p_Var22[1];
      _Var27 = p_Var22[2];
      _Var28 = p_Var22[3];
      *(__vtbl_ptr_type *)pcVar30 = *p_Var22;
      *(__vtbl_ptr_type *)&pcVar30->GotoNextSlot = _Var26;
      *(__vtbl_ptr_type *)&pcVar30->DropObject = _Var27;
      *(__vtbl_ptr_type *)&pcVar30->KillFloater = _Var28;
      pcVar21 = (cXCursorObject__152_1098__vtable *)&pcVar30->GetFloater;
      p_Var31 = p_Var22 + 4;
    } while (p_Var22 + 4 != _vt_18cXCursorObjectImpl_14cXCursorObject + 0xc);
    _Var26 = p_Var22[5];
    _Var27 = p_Var22[6];
    *(ulong *)&pcVar30->GetFloater =
         CONCAT62(_vt_18cXCursorObjectImpl_14cXCursorObject[12]._2_6_,
                  _vt_18cXCursorObjectImpl_14cXCursorObject[12].__delta);
    *(__vtbl_ptr_type *)&pcVar30->FaceDirection = _Var26;
    *(__vtbl_ptr_type *)&pcVar30->GetLastLevel = _Var27;
    this->_vb1098->__vtable = local_ac;
    uVar12 = _vt_14cXMTObjectImpl_11TreeSimImpl[4]._2_6_;
    uVar11 = _vt_14cXMTObjectImpl_11TreeSimImpl[4].__delta;
    uVar10 = _vt_14cXMTObjectImpl_11TreeSimImpl[2]._2_6_;
    uVar9 = _vt_14cXMTObjectImpl_11TreeSimImpl[2].__delta;
    uVar8 = _vt_14cXMTObjectImpl_11TreeSimImpl[1]._2_6_;
    uVar7 = _vt_14cXMTObjectImpl_11TreeSimImpl[1].__delta;
    local_138 = sVar5 - ((short)this->_vb1098 + -0x58);
    local_188 = _vt_18cXCursorObjectImpl_14cXCursorObject[3].__delta + local_138;
    local_180 = _vt_18cXCursorObjectImpl_14cXCursorObject[4].__delta + local_138;
    local_178 = _vt_18cXCursorObjectImpl_14cXCursorObject[5].__delta + local_138;
    local_170 = _vt_18cXCursorObjectImpl_14cXCursorObject[6].__delta + local_138;
    local_168 = _vt_18cXCursorObjectImpl_14cXCursorObject[7].__delta + local_138;
    local_160 = _vt_18cXCursorObjectImpl_14cXCursorObject[8].__delta + local_138;
    local_158 = _vt_18cXCursorObjectImpl_14cXCursorObject[9].__delta + local_138;
    local_150 = _vt_18cXCursorObjectImpl_14cXCursorObject[10].__delta + local_138;
    local_198 = _vt_18cXCursorObjectImpl_14cXCursorObject[1].__delta + local_138;
    local_190 = _vt_18cXCursorObjectImpl_14cXCursorObject[2].__delta + local_138;
    local_148 = _vt_18cXCursorObjectImpl_14cXCursorObject[11].__delta + local_138;
    local_140 = _vt_18cXCursorObjectImpl_14cXCursorObject[12].__delta + local_138;
    local_138 = _vt_18cXCursorObjectImpl_14cXCursorObject[13].__delta + local_138;
    local_120 = _vt_14cXMTObjectImpl_11TreeSimImpl[0];
    local_108 = _vt_14cXMTObjectImpl_11TreeSimImpl[3];
    local_f8 = _vt_14cXMTObjectImpl_11TreeSimImpl[5];
    this->_vb905->_vb901->_vb1187->__vtable = local_a8;
    uVar17 = _vt_18cXCursorObjectImpl_12cXObjectImpl[5]._2_6_;
    uVar16 = _vt_18cXCursorObjectImpl_12cXObjectImpl[5].__delta;
    uVar15 = _vt_18cXCursorObjectImpl_12cXObjectImpl[4]._2_6_;
    uVar14 = _vt_18cXCursorObjectImpl_12cXObjectImpl[3]._2_6_;
    uVar13 = _vt_18cXCursorObjectImpl_12cXObjectImpl[3].__delta;
    pcVar2 = this->_vb905->_vb901;
    sVar4 = sVar5 - ((short)pcVar2 + -0x94);
    sVar6 = sVar5 - ((short)pcVar2->_vb1187 + -0x60);
    local_118 = CONCAT62(uVar8,(uVar7 + sVar6) - sVar4);
    local_110 = CONCAT62(uVar10,(uVar9 + sVar6) - sVar4);
    local_100 = CONCAT62(uVar12,(uVar11 + sVar6) - sVar4);
    local_f0 = _vt_18cXCursorObjectImpl_12cXObjectImpl[0];
    local_e8 = _vt_18cXCursorObjectImpl_12cXObjectImpl[1];
    local_e0 = _vt_18cXCursorObjectImpl_12cXObjectImpl[2];
    local_c0 = _vt_18cXCursorObjectImpl_12cXObjectImpl[6];
    local_b8 = _vt_18cXCursorObjectImpl_12cXObjectImpl[7];
    this->_vb905->_vb901->__vtable = local_a4;
    sVar4 = sVar5 - ((short)this->_vb905->_vb901 + -0x94);
    local_d8 = CONCAT62(uVar14,uVar13 + sVar4);
    local_d0 = CONCAT62(uVar15,_vt_18cXCursorObjectImpl_12cXObjectImpl[4].__delta + sVar4);
    local_c8 = CONCAT62(uVar17,(uVar16 + sVar4) - (sVar5 - ((short)this->_vb905 + -0x1c8)));
  }
  if ((__in_chrg & 2U) != 0) {
    ___14cXMTObjectImpl(this->_vb905,0);
    ___12cXObjectImpl((cXObjectImpl__127_901 *)this->_vb905->_vb901,0);
    ___11TreeSimImpl(this->_vb905->_vb901->_vb1187,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/CursorObject.h */
    pcVar3 = this->_vb1098;
    pcVar3->__vtable = (cXCursorObject__152_1098__vtable *)_vt_14cXCursorObject;
    pcVar3->_vb1079->_vb966->_vb899->__vtable = (TreeSim__vtable *)_vt_14cXCursorObject_7TreeSim;
    pcVar3->_vb1079->_vb966->__vtable = (cXObject__21_1030__vtable *)_vt_14cXCursorObject_8cXObject;
    pcVar3->_vb1079->__vtable = (cXMTObject__123_3296__vtable *)_vt_14cXCursorObject_10cXMTObject;
    p_Var31 = (__vtbl_ptr_type *)local_c60;
    p_Var22 = _vt_14cXCursorObject_7TreeSim;
    do {
      p_Var25 = p_Var22;
      p_Var24 = p_Var31;
      _Var26 = p_Var25[1];
      _Var27 = p_Var25[2];
      _Var28 = p_Var25[3];
      *p_Var24 = *p_Var25;
      p_Var24[1] = _Var26;
      p_Var24[2] = _Var27;
      p_Var24[3] = _Var28;
      p_Var31 = p_Var24 + 4;
      p_Var22 = p_Var25 + 4;
    } while (p_Var25 + 4 != _vt_14cXCursorObject_7TreeSim + 0x10);
    _Var26 = p_Var25[5];
    p_Var24[4] = _vt_14cXCursorObject_7TreeSim[16];
    p_Var24[5] = _Var26;
    p_Var31 = _vt_14cXCursorObject_8cXObject;
    pcVar3->_vb1079->_vb966->_vb899->__vtable = (TreeSim__vtable *)local_c60;
    local_750 = (short)pcVar3;
    local_c58[0].__delta =
         _vt_14cXCursorObject_7TreeSim[1].__delta +
         (local_750 - ((short)pcVar3->_vb1079->_vb966->_vb899 + -8));
    pcVar29 = (cXObject__21_1030__vtable *)local_bd0;
    do {
      _Var27 = p_Var31[1];
      _Var28 = p_Var31[2];
      _Var26 = p_Var31[3];
      *(__vtbl_ptr_type *)pcVar29 = *p_Var31;
      *(__vtbl_ptr_type *)&pcVar29->GetNumAttr = _Var27;
      *(__vtbl_ptr_type *)&pcVar29->CalcShortDistance = _Var28;
      *(__vtbl_ptr_type *)&pcVar29->GetSpriteSlot = _Var26;
      p_Var31 = p_Var31 + 4;
      pcVar29 = (cXObject__21_1030__vtable *)&pcVar29->GetHilite;
    } while (p_Var31 != _vt_14cXCursorObject_7TreeSim);
    pcVar3->_vb1079->_vb966->__vtable = (cXObject__21_1030__vtable *)local_bd0;
    local_ac0 = local_750 - ((short)pcVar3->_vb1079->_vb966 + -0x28);
    local_7b8 = _vt_14cXCursorObject_8cXObject[131].__delta + local_ac0;
    local_bd0._112_2_ = _vt_14cXCursorObject_8cXObject[14].__delta + local_ac0;
    local_ad8 = _vt_14cXCursorObject_8cXObject[31].__delta + local_ac0;
    local_ad0 = _vt_14cXCursorObject_8cXObject[32].__delta + local_ac0;
    local_ac8 = _vt_14cXCursorObject_8cXObject[33].__delta + local_ac0;
    local_ac0 = _vt_14cXCursorObject_8cXObject[34].__delta + local_ac0;
    pcVar20 = (cXMTObject__123_3296__vtable *)local_770;
    p_Var31 = _vt_14cXCursorObject_10cXMTObject;
    do {
      p_Var22 = p_Var31;
      pcVar32 = pcVar20;
      _Var26 = p_Var22[1];
      _Var27 = p_Var22[2];
      _Var28 = p_Var22[3];
      *(__vtbl_ptr_type *)pcVar32 = *p_Var22;
      *(__vtbl_ptr_type *)&pcVar32->GetFirstMultiTileObject = _Var26;
      *(__vtbl_ptr_type *)&pcVar32->Reset = _Var27;
      *(__vtbl_ptr_type *)&pcVar32->PostLoad = _Var28;
      pcVar20 = (cXMTObject__123_3296__vtable *)&pcVar32->DirtyAll;
      p_Var31 = p_Var22 + 4;
    } while (p_Var22 + 4 != _vt_14cXCursorObject_10cXMTObject + 0xc);
    _Var26 = p_Var22[5];
    *(__vtbl_ptr_type *)&pcVar32->DirtyAll = _vt_14cXCursorObject_10cXMTObject[12];
    *(__vtbl_ptr_type *)&pcVar32->MergeInPlace = _Var26;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/CursorObject.h */
    pcVar3->_vb1079->__vtable = (cXMTObject__123_3296__vtable *)local_770;
    local_750 = local_750 - ((short)pcVar3->_vb1079 + -0x30);
    local_748 = _vt_14cXCursorObject_10cXMTObject[5].__delta + local_750;
    local_768[0]._0_2_ = _vt_14cXCursorObject_10cXMTObject[1].__delta + local_750;
    local_750 = _vt_14cXCursorObject_10cXMTObject[4].__delta + local_750;
                    /* end of inlined section */
    ___10cXMTObject(this->_vb1098->_vb1079,0);
    ___8cXObject(this->_vb1098->_vb1079->_vb966,0);
    ___7TreeSim(this->_vb1098->_vb1079->_vb966->_vb899,0);
  }
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

SInt16 cXCursorObject::MakeMouseObject(ObjectModule *module, SInt16 floaterID, ObjSelector *cursorSel, Int inLevel) {
	cXObjectImpl *floaterObj;
	cXCursorObject *mouseObj;
	FTilePt newLoc;
	Boolean multitile;
	cXObjectImpl *ptr;
	cXObjectImpl *ptr;
	cXMTObjectImpl *curObj;
	cXObjectImpl *ptr;
	cXCursorObject *addObj;
	cXCursorObject *ptr;
	cXCursorObject *this;
	cXCursorObject *this;
	cXCursorObject *this;
	cXMTObjectImpl *ptr;
	cXCursorObject *this;
	cXMTObject *curObj;
	cXCursorObject *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  cXMTObject__123_3296__vtable *pcVar6;
  cXObject__21_1030__vtable *pcVar7;
  ObjectModule__vtable *pOVar8;
  ulong *puVar9;
  bool bVar10;
  int iVar11;
  void *pvVar12;
  cXCursorObjectImpl__152_907 *pcVar13;
  cXMTObject__123_3296 *pcVar14;
  int *piVar15;
  cXCursorObject__152_1098 *pcVar16;
  code *pcVar17;
  cXMTObject__123_3296 **ppcVar18;
  long lVar19;
  undefined8 uVar20;
  int iVar21;
  cXObject__21_1030 *pcVar22;
  cXCursorObject__152_1098 *pcVar23;
  FTilePt newLoc;
  
  iVar21 = 1;
  if (inLevel != 0) {
    iVar21 = inLevel;
  }
  pcVar16 = (cXCursorObject__152_1098 *)0x0;
  if (cursorSel == (ObjSelector *)0x0) {
    return 0;
  }
  lVar19 = (*(code *)module->__vtable->AdvanceSelectedPerson)
                     ((int)&module->__vtable + (int)*(short *)&module->__vtable->SetSelectedPerson,
                      (long)(int)(short)floaterID);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
  iVar11 = 0;
  if (lVar19 != 0) {
    iVar11 = *(int *)((int)lVar19 + 4);
    iVar11 = (**(code **)(iVar11 + 0x454))((int)lVar19 + (int)*(short *)(iVar11 + 0x450));
  }
                    /* end of inlined section */
  if (iVar11 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    newLoc = (FTilePt)0x8000000080;
  }
  else {
    uVar2 = iVar11 + 0xcfU & 7;
    uVar3 = iVar11 + 200U & 7;
    newLoc = (FTilePt)((*(long *)((iVar11 + 0xcfU) - uVar2) << (7 - uVar2) * 8 |
                       0xffffffffffffffffU >> (uVar2 + 1) * 8 & 0x80) & -1L << (8 - uVar3) * 8 |
                      *(ulong *)((iVar11 + 200U) - uVar3) >> uVar3 * 8);
    puVar1 = (undefined *)((int)&newLoc.x.whole + 3);
    uVar2 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar2);
    *puVar9 = *puVar9 & -1L << (uVar2 + 1) * 8 | (ulong)newLoc >> (7 - uVar2) * 8;
  }
                    /* end of inlined section */
  bVar10 = true;
  if ((iVar11 == 0) ||
     (iVar5 = *(int *)(*(int *)(iVar11 + 4) + 4),
     lVar19 = (**(code **)(iVar5 + 0x30c))(*(int *)(iVar11 + 4) + (int)*(short *)(iVar5 + 0x308)),
     lVar19 == 0)) {
    bVar10 = false;
  }
  if (bVar10) {
                    /* inlined from SCID.h */
    piVar15 = _o_cd;
    if (iVar11 != 0) {
      pvVar12 = _dyncastimpl__7TreeSim4SCID(**(TreeSim ***)(iVar11 + 4),cXMTObjectImplID);
      piVar15 = *(int **)((int)pvVar12 + 0xc);
    }
    if (piVar15 != (int *)0x0) {
                    /* inlined from SCID.h */
      piVar15 = _o_cd;
      if (iVar11 != 0) {
        pvVar12 = _dyncastimpl__7TreeSim4SCID(**(TreeSim ***)(iVar11 + 4),cXMTObjectImplID);
        piVar15 = *(int **)((int)pvVar12 + 0xc);
      }
      iVar11 = 0;
      if (piVar15 != (int *)0x0) {
        iVar11 = *piVar15;
      }
    }
  }
  if ((iVar11 != 0) &&
     (iVar5 = *(int *)(*(int *)(iVar11 + 4) + 4),
     lVar19 = (**(code **)(iVar5 + 0x134))(*(int *)(iVar11 + 4) + (int)*(short *)(iVar5 + 0x130)),
     lVar19 == 0)) {
    return 0;
  }
  if (bVar10) {
                    /* inlined from SCID.h */
    if (iVar11 == 0) {
      pvVar12 = (void *)0x0;
    }
    else {
      pvVar12 = _dyncastimpl__7TreeSim4SCID(**(TreeSim ***)(iVar11 + 4),cXMTObjectImplID);
    }
                    /* end of inlined section */
    for (; pvVar12 != (void *)0x0; pvVar12 = *(void **)((int)pvVar12 + 8)) {
      pcVar13 = (cXCursorObjectImpl__152_907 *)__builtin_new(0x1f0);
      if (pvVar12 == (void *)0x0) {
        pcVar22 = (cXObject__21_1030 *)0x0;
      }
      else {
        pcVar22 = **(cXObject__21_1030 ***)((int)pvVar12 + 4);
      }
                    /* inlined from SCID.h */
      if (pcVar16 == (cXCursorObject__152_1098 *)0x0) {
        pcVar14 = (cXMTObject__123_3296 *)0x0;
                    /* end of inlined section */
      }
      else {
        pcVar14 = (cXMTObject__123_3296 *)
                  _dyncastimpl__7TreeSim4SCID(pcVar16->_vb1079->_vb966->_vb899,cXMTObjectID);
      }
      pcVar13 = __18cXCursorObjectImpliP11ObjSelectorP8cXObjectP10cXMTObjectP12ObjectModule
                          (pcVar13,1,cursorSel,pcVar22,pcVar14,module);
      pcVar23 = (cXCursorObject__152_1098 *)0x0;
      if (pcVar13 != (cXCursorObjectImpl__152_907 *)0x0) {
        pcVar23 = pcVar13->_vb1098;
      }
      if (pcVar23 == (cXCursorObject__152_1098 *)0x0) {
        pcVar22 = (cXObject__21_1030 *)0x0;
      }
      else {
        pcVar22 = pcVar23->_vb1079->_vb966;
      }
      if (pcVar16 == (cXCursorObject__152_1098 *)0x0) {
        pcVar16 = pcVar23;
      }
      lVar19 = (*(code *)module->__vtable->GetObjectFromID)
                         ((int)&module->__vtable + (int)*(short *)&module->__vtable->DayChanged,
                          pcVar22,0);
      if (lVar19 == 0) goto LAB_00264c0c;
      pcVar6 = pcVar23->_vb1079->__vtable;
      (*(code *)pcVar6->GetNextMultiTileObject)
                ((int)&pcVar23->_vb1079->_vb966 + (int)*(short *)&pcVar6->GetFirstMultiTileObject);
    }
    if (iVar11 != 0) {
      iVar5 = *(int *)(*(int *)(iVar11 + 4) + 4);
      (**(code **)(iVar5 + 0x13c))(*(int *)(iVar11 + 4) + (int)*(short *)(iVar5 + 0x138),0);
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/CursorObject.h */
    lVar19 = 0;
    if (pcVar16 != (cXCursorObject__152_1098 *)0x0) {
      lVar19 = (**(code **)&pcVar16->__vtable->field_0x6c)
                         ((int)&pcVar16->_vb1079 + (int)*(short *)&pcVar16->__vtable->field_0x68);
    }
    iVar11 = 0;
    if (lVar19 != 0) {
      iVar11 = *(int *)lVar19;
    }
    if (iVar11 != 0) {
      iVar5 = *(int *)(*(int *)(iVar11 + 4) + 4);
      (**(code **)(iVar5 + 0x24))(*(int *)(iVar11 + 4) + (int)*(short *)(iVar5 + 0x20),1);
    }
                    /* end of inlined section */
    while (pcVar14 = _pGifTag0, pcVar16 != (cXCursorObject__152_1098 *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/CursorObject.h */
      iVar11 = (**(code **)&pcVar16->__vtable->field_0x6c)
                         ((int)&pcVar16->_vb1079 + (int)*(short *)&pcVar16->__vtable->field_0x68);
                    /* end of inlined section */
      if ((long)*(short *)(*(int *)(iVar11 + 8) + 0xc4) == (long)(int)(short)floaterID) {
        pcVar14 = pcVar16->_vb1079;
        break;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/CursorObject.h */
      piVar15 = (int *)(**(code **)&pcVar16->__vtable->field_0x6c)
                                 ((int)&pcVar16->_vb1079 +
                                  (int)*(short *)&pcVar16->__vtable->field_0x68);
                    /* end of inlined section */
                    /* inlined from SCID.h */
      if (*(int *)(*piVar15 + 8) == 0) {
        pcVar16 = (cXCursorObject__152_1098 *)0x0;
      }
      else {
        pcVar16 = (cXCursorObject__152_1098 *)
                  _dyncastimpl__7TreeSim4SCID
                            (*(TreeSim **)**(undefined4 **)(*(int *)(*piVar15 + 8) + 4),
                             cXCursorObjectID);
      }
    }
    (*(code *)pcVar14->__vtable->RemoveFromDynamic)
              ((int)&pcVar14->_vb966 + (int)*(short *)&pcVar14->__vtable->MergeInPlace);
                    /* inlined from c:/eor/src2/games/sims/MSrc/CursorObject.h */
    pcVar13 = (cXCursorObjectImpl__152_907 *)0x0;
    if (pcVar16 != (cXCursorObject__152_1098 *)0x0) {
      pcVar13 = (cXCursorObjectImpl__152_907 *)
                (**(code **)&pcVar16->__vtable->field_0x6c)
                          ((int)&pcVar16->_vb1079 + (int)*(short *)&pcVar16->__vtable->field_0x68);
    }
                    /* end of inlined section */
    AlignFloater__18cXCursorObjectImpl(pcVar13);
    pcVar22 = pcVar16->_vb1079->_vb966;
    pcVar7 = pcVar22->__vtable;
    lVar19 = (*(code *)pcVar7->GetAttr)
                       ((int)&pcVar22->_vb899 + (int)*(short *)&pcVar7->GetTemp,&newLoc,iVar21,0,0);
    if (lVar19 != 0) {
      pcVar22 = pcVar16->_vb1079->_vb966;
      pcVar7 = pcVar22->__vtable;
      (*(code *)pcVar7->GetAdultAnimTable)
                ((int)&pcVar22->_vb899 + (int)*(short *)&pcVar7->GetModule,&newLoc,iVar21,0,0);
      pcVar14 = pcVar16->_vb1079;
      goto LAB_00264b5c;
    }
  }
  else {
    pcVar13 = (cXCursorObjectImpl__152_907 *)__builtin_new(0x1f0);
    pcVar22 = (cXObject__21_1030 *)0x0;
    if (iVar11 != 0) {
      pcVar22 = *(cXObject__21_1030 **)(iVar11 + 4);
    }
    pcVar16 = (cXCursorObject__152_1098 *)0x0;
    pcVar13 = __18cXCursorObjectImpliP11ObjSelectorP8cXObjectP10cXMTObjectP12ObjectModule
                        (pcVar13,1,cursorSel,pcVar22,(cXMTObject__123_3296 *)0x0,module);
    if (pcVar13 != (cXCursorObjectImpl__152_907 *)0x0) {
      pcVar16 = pcVar13->_vb1098;
    }
    if (pcVar16 == (cXCursorObject__152_1098 *)0x0) {
      pcVar22 = (cXObject__21_1030 *)0x0;
    }
    else {
      pcVar22 = pcVar16->_vb1079->_vb966;
    }
    lVar19 = (*(code *)module->__vtable->GetObjectFromID)
                       ((int)&module->__vtable + (int)*(short *)&module->__vtable->DayChanged,
                        pcVar22,0);
    if (lVar19 == 0) {
LAB_00264c0c:
      if (pcVar16 != (cXCursorObject__152_1098 *)0x0) {
        pOVar8 = module->__vtable;
        pcVar22 = pcVar16->_vb1079->_vb966;
        sVar4 = *(short *)&pOVar8->GetNumObjects;
        pcVar7 = pcVar22->__vtable;
        uVar20 = (*(code *)pcVar7[1].UserCanPlace)
                           ((int)&pcVar22->_vb899 + (int)*(short *)&pcVar7[1].IsPartOfMe);
        (*(code *)pOVar8->CheckIntegrity)((int)&module->__vtable + (int)sVar4,uVar20);
        return 0;
      }
      return 0;
    }
    if (iVar11 != 0) {
      iVar5 = *(int *)(*(int *)(iVar11 + 4) + 4);
      (**(code **)(iVar5 + 0x13c))(*(int *)(iVar11 + 4) + (int)*(short *)(iVar5 + 0x138),0);
    }
    pcVar6 = pcVar16->_vb1079->__vtable;
    (*(code *)pcVar6->GetNextMultiTileObject)
              ((int)&pcVar16->_vb1079->_vb966 + (int)*(short *)&pcVar6->GetFirstMultiTileObject);
    pcVar6 = pcVar16->_vb1079->__vtable;
    (*(code *)pcVar6->IsDynamic)
              ((int)&pcVar16->_vb1079->_vb966 + (int)*(short *)&pcVar6->DirtyAll,0);
    pcVar22 = pcVar16->_vb1079->_vb966;
    pcVar7 = pcVar22->__vtable;
    lVar19 = (*(code *)pcVar7->GetAttr)
                       ((int)&pcVar22->_vb899 + (int)*(short *)&pcVar7->GetTemp,&newLoc,iVar21,0,0);
    if (lVar19 != 0) {
      pcVar22 = pcVar16->_vb1079->_vb966;
      pcVar7 = pcVar22->__vtable;
      (*(code *)pcVar7->GetAdultAnimTable)
                ((int)&pcVar22->_vb899 + (int)*(short *)&pcVar7->GetModule,&newLoc,iVar21,0,0);
    }
  }
  pcVar14 = pcVar16->_vb1079;
LAB_00264b5c:
  pcVar17 = (code *)pcVar14->__vtable->AssignOffsets;
  iVar21 = (int)&pcVar14->_vb966 + (int)*(short *)&pcVar14->__vtable->Reset;
  while (lVar19 = (*pcVar17)(iVar21), lVar19 != 0) {
    piVar15 = (int *)lVar19;
    iVar21 = *(int *)(*piVar15 + 4);
    (**(code **)(iVar21 + 0x4c))(*piVar15 + (int)*(short *)(iVar21 + 0x48),0x80,1);
    pcVar17 = *(code **)(piVar15[1] + 0x1c);
    iVar21 = (int)piVar15 + (int)*(short *)(piVar15[1] + 0x18);
  }
  pcVar22 = pcVar16->_vb1079->_vb966;
  pcVar7 = pcVar22->__vtable;
  iVar21 = (*(code *)pcVar7[1].UserCanPlace)
                     ((int)&pcVar22->_vb899 + (int)*(short *)&pcVar7[1].IsPartOfMe);
  GlobalDispatch__Fsi(0xe1,iVar21);
                    /* inlined from c:/eor/src2/games/sims/MSrc/CursorObject.h */
  pcVar14 = _pGifTag0;
  if (pcVar16 != (cXCursorObject__152_1098 *)0x0) {
    ppcVar18 = (cXMTObject__123_3296 **)
               (**(code **)&pcVar16->__vtable->field_0x6c)
                         ((int)&pcVar16->_vb1079 + (int)*(short *)&pcVar16->__vtable->field_0x68);
    pcVar14 = *ppcVar18;
  }
  return *(ushort *)&pcVar14->_vb966[4].field_0x24;
}

void cXCursorObjectImpl::KillFloater() {
	FTilePt oldLoc;
	int level;
	cXCursorObjectImpl *curObj;
	cXMTObjectImpl *ptr;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  cXObject__21_1030 *pcVar6;
  cXObject__21_1030__vtable *pcVar7;
  ObjectModule *pOVar8;
  ObjectModule__vtable *pOVar9;
  ulong *puVar10;
  int *piVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  cXMTObjectImpl__138_905 *pcVar15;
  cXCursorObject__152_1098 *pcVar16;
  FTilePt oldLoc;
  
  if ((long)(int)this->fFloater != 0) {
    pcVar16 = this->_vb1098;
    puVar1 = (undefined *)((int)&(this->fLastPlace).x.whole + 3);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)&this->fLastPlace & 7;
    oldLoc = (FTilePt)((*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                       (long)(int)this->fFloater & 0xffffffffffffffffU >> (uVar2 + 1) * 8) &
                       -1L << (8 - uVar3) * 8 |
                      *(ulong *)((int)&this->fLastPlace - uVar3) >> uVar3 * 8);
    puVar1 = (undefined *)((int)&oldLoc.x.whole + 3);
    uVar2 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar2);
    *puVar10 = *puVar10 & -1L << (uVar2 + 1) * 8 | (ulong)oldLoc >> (7 - uVar2) * 8;
    iVar5 = this->fLastLevel;
    pcVar6 = pcVar16->_vb1079->_vb966;
    pcVar7 = pcVar6->__vtable;
    (*(code *)pcVar7->GetData)((int)&pcVar6->_vb899 + (int)*(short *)&pcVar7->GetRect);
    pcVar6 = this->fFloater->_vb966;
    pOVar8 = this->_vb905->_vb901->fModule;
    pcVar7 = pcVar6->__vtable;
    pOVar9 = pOVar8->__vtable;
    sVar4 = *(short *)&pOVar9->GetNumObjects;
    uVar13 = (*(code *)pcVar7[1].UserCanPlace)
                       ((int)&pcVar6->_vb899 + (int)*(short *)&pcVar7[1].IsPartOfMe);
    (*(code *)pOVar9->CheckIntegrity)((int)&pOVar8->__vtable + (int)sVar4,uVar13);
    pcVar15 = this->_vb905->fLeadObject;
    if (pcVar15 == (cXMTObjectImpl__138_905 *)0x0) {
      pcVar15 = this->_vb905;
    }
                    /* inlined from SCID.h */
    if (pcVar15 == (cXMTObjectImpl__138_905 *)0x0) {
      piVar11 = (int *)0x0;
    }
    else {
      piVar11 = (int *)_dyncastimpl__7TreeSim4SCID
                                 (pcVar15->_vb1079->_vb966->_vb899,cXCursorObjectImplID);
    }
                    /* end of inlined section */
    if (piVar11 == (int *)0x0) {
      pcVar16 = this->_vb1098;
    }
    else {
      iVar12 = *piVar11;
      while( true ) {
        piVar11[2] = 0;
                    /* inlined from SCID.h */
        if (*(int *)(iVar12 + 8) == 0) {
          piVar11 = (int *)0x0;
        }
        else {
          piVar11 = (int *)_dyncastimpl__7TreeSim4SCID
                                     (*(TreeSim **)**(undefined4 **)(*(int *)(iVar12 + 8) + 4),
                                      cXCursorObjectImplID);
        }
                    /* end of inlined section */
        if (piVar11 == (int *)0x0) break;
        iVar12 = *piVar11;
      }
      pcVar16 = this->_vb1098;
    }
    pcVar6 = pcVar16->_vb1079->_vb966;
    pcVar7 = pcVar6->__vtable;
    lVar14 = (*(code *)pcVar7->GetAttr)
                       ((int)&pcVar6->_vb899 + (int)*(short *)&pcVar7->GetTemp,&oldLoc,iVar5,0,0);
    if (lVar14 != 0) {
      pcVar6 = this->_vb1098->_vb1079->_vb966;
      pcVar7 = pcVar6->__vtable;
      (*(code *)pcVar7->GetAdultAnimTable)
                ((int)&pcVar6->_vb899 + (int)*(short *)&pcVar7->GetModule,&oldLoc,iVar5,0,0);
    }
  }
  return;
}

void cXCursorObjectImpl::DetachFloater() {
	cXCursorObjectImpl *curObj;
	cXMTObjectImpl *ptr;
	
  int *piVar1;
  int iVar2;
  cXMTObjectImpl__138_905 *pcVar3;
  
  if (this->fFloater != (cXObjectImpl__152_901 *)0x0) {
    pcVar3 = this->_vb905->fLeadObject;
    if (pcVar3 == (cXMTObjectImpl__138_905 *)0x0) {
      pcVar3 = this->_vb905;
    }
                    /* inlined from SCID.h */
    if (pcVar3 == (cXMTObjectImpl__138_905 *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)_dyncastimpl__7TreeSim4SCID
                                (pcVar3->_vb1079->_vb966->_vb899,cXCursorObjectImplID);
    }
                    /* end of inlined section */
    if (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      while( true ) {
        piVar1[2] = 0;
                    /* inlined from SCID.h */
        if (*(int *)(iVar2 + 8) == 0) {
          piVar1 = (int *)0x0;
        }
        else {
          piVar1 = (int *)_dyncastimpl__7TreeSim4SCID
                                    (*(TreeSim **)**(undefined4 **)(*(int *)(iVar2 + 8) + 4),
                                     cXCursorObjectImplID);
        }
                    /* end of inlined section */
        if (piVar1 == (int *)0x0) break;
        iVar2 = *piVar1;
      }
    }
  }
  return;
}

void cXCursorObjectImpl::Pickup() {
  cXObject__21_1030 *pcVar1;
  cXObject__21_1030__vtable *pcVar2;
  
  Pickup__14cXMTObjectImpl(this->_vb905);
  if (this->fFloater != (cXObjectImpl__152_901 *)0x0) {
    pcVar1 = this->fFloater->_vb966;
    pcVar2 = pcVar1->__vtable;
    (*(code *)pcVar2->GetData)((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2->GetRect);
  }
  return;
}

SInt16 cXCursorObject::MakeMouseObject(ObjectModule *module, ObjSelector *objSel, ObjSelector *cursorSel, int inLevel) {
	SInt16 floaterID;
	StdPrm mouseID;
	cXCursorObjectImpl *obj;
	cXMTObjectImpl *ptr;
	
  ushort uVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (objSel == (ObjSelector *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(code *)module->__vtable->GetObject)
                      ((int)&module->__vtable + (int)*(short *)&module->__vtable->GetFirst);
  }
  uVar1 = MakeMouseObject__14cXCursorObjectP12ObjectModulesP11ObjSelectori
                    (module,(ushort)uVar4,cursorSel,inLevel);
  if (uVar1 == 0) {
    (*(code *)module->__vtable->CheckIntegrity)
              ((int)&module->__vtable + (int)*(short *)&module->__vtable->GetNumObjects,uVar4);
  }
  else {
    lVar5 = (*(code *)module->__vtable->AdvanceSelectedPerson)
                      ((int)&module->__vtable + (int)*(short *)&module->__vtable->SetSelectedPerson,
                       uVar1);
                    /* inlined from SCID.h */
    piVar2 = (int *)0x0;
    if (lVar5 != 0) {
      piVar2 = (int *)_dyncastimpl__7TreeSim4SCID(*(TreeSim **)lVar5,cXCursorObjectImplID);
    }
                    /* end of inlined section */
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
      while( true ) {
        *(undefined2 *)((int)piVar2 + 0xe) = 1;
                    /* inlined from SCID.h */
        if (*(int *)(iVar3 + 8) == 0) {
          piVar2 = (int *)0x0;
        }
        else {
          piVar2 = (int *)_dyncastimpl__7TreeSim4SCID
                                    (*(TreeSim **)**(undefined4 **)(*(int *)(iVar3 + 8) + 4),
                                     cXCursorObjectImplID);
        }
                    /* end of inlined section */
        if (piVar2 == (int *)0x0) break;
        iVar3 = *piVar2;
      }
    }
  }
  return uVar1;
}

Boolean cXCursorObjectImpl::DropObject() {
	cXObject *floater;
	FTilePt placeLoc;
	int level;
	cXCursorObjectImpl *dropping;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  cXObject__21_1030 *pcVar4;
  int iVar5;
  cXObject__21_1030 *pcVar6;
  cXObject__21_1030__vtable *pcVar7;
  cXMTObject__123_3296 *pcVar8;
  cXMTObject__123_3296__vtable *pcVar9;
  int iVar10;
  cXObject__21_1030__vtable *pcVar11;
  ulong *puVar12;
  short sVar13;
  int *piVar14;
  cXMTObjectImpl__138_905 *pcVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  int iVar19;
  FTilePt placeLoc;
  
  sVar13 = 0;
  if (this->fFloater != (cXObjectImpl__152_901 *)0x0) {
    if ((ulong)(ushort)this->fLegalPosition == 0) {
      sVar13 = 0;
    }
    else {
      pcVar4 = this->fFloater->_vb966;
      puVar1 = (undefined *)((int)&(this->fLastPlace).x.whole + 3);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)&this->fLastPlace & 7;
      uVar16 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
               (ulong)(ushort)this->fLegalPosition & 0xffffffffffffffffU >> (uVar2 + 1) * 8) &
               -1L << (8 - uVar3) * 8 | *(ulong *)((int)&this->fLastPlace - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&placeLoc.x.whole + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar12 = (ulong *)(puVar1 + -uVar2);
      *puVar12 = *puVar12 & -1L << (uVar2 + 1) * 8 | uVar16 >> (7 - uVar2) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
      placeLoc.x.whole = (int)(uVar16 >> 0x20);
                    /* end of inlined section */
      iVar5 = this->fLastLevel;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
      placeLoc = (FTilePt)(uVar16 & 0xfffffff0 | (ulong)(placeLoc.x.whole & 0xfffffff0U | 8) << 0x20
                          | 8);
                    /* end of inlined section */
      pcVar6 = this->_vb1098->_vb1079->_vb966;
      pcVar7 = pcVar6->__vtable;
      (*(code *)pcVar7->GetData)((int)&pcVar6->_vb899 + (int)*(short *)&pcVar7->GetRect);
      pcVar8 = this->_vb905->_vb1079;
      pcVar9 = pcVar8->__vtable;
      lVar17 = (*(code *)pcVar9->AssignOffsets)
                         ((int)&pcVar8->_vb966 + (int)*(short *)&pcVar9->Reset);
                    /* inlined from SCID.h */
      if (lVar17 == 0) {
        piVar14 = (int *)0x0;
      }
      else {
        piVar14 = (int *)_dyncastimpl__7TreeSim4SCID
                                   (*(TreeSim **)*(undefined4 *)lVar17,cXCursorObjectImplID);
      }
                    /* end of inlined section */
      if (piVar14 == (int *)0x0) {
        pcVar15 = this->_vb905;
      }
      else {
        iVar19 = piVar14[2];
        while( true ) {
          iVar10 = *(int *)(*(int *)(iVar19 + 4) + 4);
          (**(code **)(iVar10 + 100))(*(int *)(iVar19 + 4) + (int)*(short *)(iVar10 + 0x60),0);
          iVar19 = *(int *)(*(int *)(piVar14[2] + 4) + 4);
          (**(code **)(iVar19 + 0x1e4))
                    (*(int *)(piVar14[2] + 4) + (int)*(short *)(iVar19 + 0x1e0),1);
          iVar19 = *(int *)(piVar14[2] + 4);
          iVar10 = *(int *)(iVar19 + 4);
          sVar13 = *(short *)(iVar10 + 0x38);
          uVar16 = (**(code **)(iVar10 + 0x44))(iVar19 + *(short *)(iVar10 + 0x40));
          (**(code **)(iVar10 + 0x3c))(iVar19 + sVar13,uVar16 & 0xfffffffffffffffe);
          piVar14[2] = 0;
          iVar19 = *(int *)(*(int *)(*piVar14 + 4) + 4);
          lVar17 = (**(code **)(iVar19 + 0x1c))
                             (*(int *)(*piVar14 + 4) + (int)*(short *)(iVar19 + 0x18));
                    /* inlined from SCID.h */
          if (lVar17 == 0) {
            piVar14 = (int *)0x0;
          }
          else {
            piVar14 = (int *)_dyncastimpl__7TreeSim4SCID
                                       (*(TreeSim **)*(undefined4 *)lVar17,cXCursorObjectImplID);
          }
                    /* end of inlined section */
          if (piVar14 == (int *)0x0) break;
          iVar19 = piVar14[2];
        }
        pcVar15 = this->_vb905;
      }
      pcVar7 = pcVar4->__vtable;
      sVar13 = *(short *)&pcVar7->GetObjectSlot;
      pcVar6 = pcVar15->_vb901->_vb966;
      pcVar11 = pcVar6->__vtable;
      uVar18 = (*(code *)pcVar11[1].GetLightingContribution)
                         ((int)&pcVar6->_vb899 + (int)*(short *)&pcVar11[1].CanContributeLight,
                          this->fTestContainerID);
      (*(code *)pcVar7->GetContainedObject)
                ((int)&pcVar4->_vb899 + (int)sVar13,&placeLoc,iVar5,uVar18,this->fTestSlotNum);
      sVar13 = 1;
    }
  }
  return sVar13;
}

cXCursorObjectImpl* cXCursorObjectImpl::cXCursorObjectImpl(int __in_chrg, ObjSelector *sel, cXObject *floatAbove, cXMTObject *leader, ObjectModule *module) {
	__vtbl_ptr_type _vt$18cXCursorObjectImpl$7TreeSim[18];
	__vtbl_ptr_type _vt$18cXCursorObjectImpl$8cXObject[140];
	__vtbl_ptr_type _vt$18cXCursorObjectImpl$10cXMTObject[14];
	__vtbl_ptr_type _vt$18cXCursorObjectImpl$14cXCursorObject[15];
	__vtbl_ptr_type _vt$14cXMTObjectImpl$11TreeSimImpl[6];
	__vtbl_ptr_type _vt$18cXCursorObjectImpl$12cXObjectImpl[8];
	cXObject *this;
	cXMTObject *this;
	cXCursorObject *this;
	cXCursorObject *this;
	cXCursorObjectImpl *obj;
	cXCursorObjectImpl *obj;
	cXMTObject *this;
	cXObject *this;
	cXCursorObjectImpl *obj;
	cXCursorObjectImpl *obj;
	TreeSim *this;
	cXObject *this;
	PlacementSpec ps;
	
  int *piVar1;
  int **ppiVar2;
  cXCursorObject__152_1098 *pcVar3;
  cXMTObjectImpl__138_905 *pcVar4;
  cXObjectImpl__138_901 *pcVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined6 uVar10;
  ushort uVar11;
  undefined6 uVar12;
  ushort uVar13;
  undefined6 uVar14;
  ushort uVar15;
  undefined6 uVar16;
  undefined6 uVar17;
  ushort uVar18;
  undefined6 uVar19;
  TreeSim__vtable *pTVar20;
  cXMTObject__123_3296__vtable *pcVar21;
  cXCursorObject__152_1098__vtable *pcVar22;
  ushort uVar23;
  cXObjectImpl__152_901 *pcVar24;
  __vtbl_ptr_type *p_Var25;
  undefined *this_00;
  __vtbl_ptr_type *p_Var26;
  TreeSim__vtable *pTVar27;
  __vtbl_ptr_type *p_Var28;
  cXObject__21_1030__vtable *pcVar29;
  __vtbl_ptr_type *p_Var30;
  __vtbl_ptr_type _Var31;
  __vtbl_ptr_type _Var32;
  __vtbl_ptr_type _Var33;
  cXMTObject__123_3296__vtable *pcVar34;
  cXCursorObject__152_1098__vtable *pcVar35;
  __vtbl_ptr_type local_18b0;
  __vtbl_ptr_type local_18a8 [35];
  __vtbl_ptr_type local_1790;
  __vtbl_ptr_type local_1788 [17];
  __vtbl_ptr_type local_1700 [32];
  short local_1600;
  short local_15f8;
  short local_15f0;
  short local_12e8;
  undefined local_c90 [8];
  undefined8 local_c88 [17];
  undefined local_c00 [248];
  short local_b08;
  short local_b00;
  short local_af8;
  short local_af0;
  short local_7e8;
  undefined local_7a0 [8];
  undefined8 local_798 [3];
  short local_780;
  short local_778;
  __vtbl_ptr_type _vt_18cXCursorObjectImpl_7TreeSim [18];
  __vtbl_ptr_type _vt_18cXCursorObjectImpl_8cXObject [140];
  __vtbl_ptr_type _vt_18cXCursorObjectImpl_10cXMTObject [14];
  __vtbl_ptr_type _vt_18cXCursorObjectImpl_14cXCursorObject [15];
  __vtbl_ptr_type _vt_14cXMTObjectImpl_11TreeSimImpl [6];
  __vtbl_ptr_type _vt_18cXCursorObjectImpl_12cXObjectImpl [8];
  PlacementSpec ps;
  FTilePt *local_c0;
  cXMTObject__123_3296__vtable *local_bc;
  cXCursorObject__152_1098__vtable *local_b8;
  TreeSimImpl__21_3338__vtable *local_b4;
  cXObjectImpl__138_901__vtable *local_b0;
  
  if (__in_chrg != 0) {
    this_00 = &this->field_0x28;
    *(undefined **)&this->field_0x1c8 = &this->field_0x94;
    this->_vb1098 = (cXCursorObject__152_1098 *)&this->field_0x58;
    this->_vb905 = (cXMTObjectImpl__138_905 *)&this->field_0x1c8;
    *(undefined **)&this->field_0x60 = this_00;
    *(undefined **)&this->field_0x48 = this_00;
    *(undefined **)&this->field_0x94 = &this->field_0x60;
    *(undefined **)&this->field_0x50 = &this->field_0x48;
    *(undefined **)&this->field_0x58 = &this->field_0x50;
    *(undefined **)&this->field_0x98 = &this->field_0x48;
    *(undefined **)&this->field_0x1cc = &this->field_0x50;
    __7TreeSim((TreeSim *)this_00);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    piVar1 = *(int **)&this->field_0x98;
    *(__vtbl_ptr_type **)(*piVar1 + 0x1c) = _vt_8cXObject_7TreeSim;
    p_Var30 = &local_18b0;
    p_Var28 = _vt_8cXObject_7TreeSim;
    do {
      p_Var25 = p_Var28;
      p_Var26 = p_Var30;
      _Var31 = p_Var25[1];
      _Var32 = p_Var25[2];
      _Var33 = p_Var25[3];
      *p_Var26 = *p_Var25;
      p_Var26[1] = _Var31;
      p_Var26[2] = _Var32;
      p_Var26[3] = _Var33;
      p_Var30 = p_Var26 + 4;
      p_Var28 = p_Var25 + 4;
    } while (p_Var25 + 4 != _vt_8cXObject_7TreeSim + 0x10);
    _Var31 = p_Var25[5];
    p_Var26[4] = _vt_8cXObject_7TreeSim[16];
    p_Var26[5] = _Var31;
    *(__vtbl_ptr_type **)(*piVar1 + 0x1c) = &local_18b0;
    local_18a8[0].__delta =
         _vt_8cXObject_7TreeSim[1].__delta + ((short)piVar1 - ((short)*piVar1 + -8));
                    /* end of inlined section */
    piVar1[1] = (int)_vt_8cXObject;
    if (__in_chrg != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
      ppiVar2 = *(int ***)&this->field_0x1cc;
      *(__vtbl_ptr_type **)(**ppiVar2 + 0x1c) = _vt_10cXMTObject_7TreeSim;
      (*ppiVar2)[1] = (int)_vt_10cXMTObject_8cXObject;
      p_Var30 = _vt_10cXMTObject_7TreeSim;
      p_Var28 = &local_1790;
      do {
        p_Var25 = p_Var28;
        p_Var26 = p_Var30;
        _Var31 = p_Var26[1];
        _Var32 = p_Var26[2];
        _Var33 = p_Var26[3];
        *p_Var25 = *p_Var26;
        p_Var25[1] = _Var31;
        p_Var25[2] = _Var32;
        p_Var25[3] = _Var33;
        p_Var30 = p_Var26 + 4;
        p_Var28 = p_Var25 + 4;
      } while (p_Var26 + 4 != _vt_10cXMTObject_7TreeSim + 0x10);
      _Var31 = p_Var26[5];
      p_Var25[4] = _vt_10cXMTObject_7TreeSim[16];
      p_Var25[5] = _Var31;
      p_Var28 = _vt_10cXMTObject_8cXObject;
      *(__vtbl_ptr_type **)(**ppiVar2 + 0x1c) = &local_1790;
      local_1788[0].__delta =
           _vt_10cXMTObject_7TreeSim[1].__delta + ((short)ppiVar2 - ((short)**ppiVar2 + -8));
      p_Var30 = local_1700;
      do {
        _Var32 = p_Var28[1];
        _Var33 = p_Var28[2];
        _Var31 = p_Var28[3];
        *p_Var30 = *p_Var28;
        p_Var30[1] = _Var32;
        p_Var30[2] = _Var33;
        p_Var30[3] = _Var31;
        p_Var28 = p_Var28 + 4;
        p_Var30 = p_Var30 + 4;
      } while (p_Var28 != _vt_10cXMTObject_7TreeSim);
      (*ppiVar2)[1] = (int)local_1700;
      local_15f0 = (short)ppiVar2 - ((short)*ppiVar2 + -0x28);
      local_12e8 = _vt_10cXMTObject_8cXObject[131].__delta + local_15f0;
      local_1600 = _vt_10cXMTObject_8cXObject[32].__delta + local_15f0;
      local_15f8 = _vt_10cXMTObject_8cXObject[33].__delta + local_15f0;
      local_15f0 = _vt_10cXMTObject_8cXObject[34].__delta + local_15f0;
                    /* end of inlined section */
      ppiVar2[1] = (int *)_vt_10cXMTObject;
      if (__in_chrg != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/CursorObject.h */
        pcVar3 = this->_vb1098;
        pcVar3->_vb1079->_vb966->_vb899->__vtable = (TreeSim__vtable *)_vt_14cXCursorObject_7TreeSim
        ;
        pcVar3->_vb1079->_vb966->__vtable =
             (cXObject__21_1030__vtable *)_vt_14cXCursorObject_8cXObject;
        pcVar3->_vb1079->__vtable =
             (cXMTObject__123_3296__vtable *)_vt_14cXCursorObject_10cXMTObject;
        p_Var30 = _vt_14cXCursorObject_7TreeSim;
        pTVar20 = (TreeSim__vtable *)local_c90;
        do {
          pTVar27 = pTVar20;
          p_Var28 = p_Var30;
          _Var32 = p_Var28[1];
          _Var33 = p_Var28[2];
          _Var31 = p_Var28[3];
          *(__vtbl_ptr_type *)pTVar27 = *p_Var28;
          *(__vtbl_ptr_type *)&pTVar27->Initialize = _Var32;
          *(__vtbl_ptr_type *)&pTVar27->SetError = _Var33;
          *(__vtbl_ptr_type *)&pTVar27->ClearError = _Var31;
          p_Var30 = p_Var28 + 4;
          pTVar20 = (TreeSim__vtable *)&pTVar27->GetCurElem;
        } while (p_Var28 + 4 != _vt_14cXCursorObject_7TreeSim + 0x10);
        _Var31 = p_Var28[5];
        *(__vtbl_ptr_type *)&pTVar27->GetCurElem = _vt_14cXCursorObject_7TreeSim[16];
        *(__vtbl_ptr_type *)&pTVar27->GetNthElem = _Var31;
        p_Var30 = _vt_14cXCursorObject_8cXObject;
        pcVar3->_vb1079->_vb966->_vb899->__vtable = (TreeSim__vtable *)local_c90;
        local_780 = (short)pcVar3;
        local_c88[0]._0_2_ =
             _vt_14cXCursorObject_7TreeSim[1].__delta +
             (local_780 - ((short)pcVar3->_vb1079->_vb966->_vb899 + -8));
        pcVar29 = (cXObject__21_1030__vtable *)local_c00;
        do {
          _Var31 = p_Var30[1];
          _Var32 = p_Var30[2];
          _Var33 = p_Var30[3];
          *(__vtbl_ptr_type *)pcVar29 = *p_Var30;
          *(__vtbl_ptr_type *)&pcVar29->GetNumAttr = _Var31;
          *(__vtbl_ptr_type *)&pcVar29->CalcShortDistance = _Var32;
          *(__vtbl_ptr_type *)&pcVar29->GetSpriteSlot = _Var33;
          p_Var30 = p_Var30 + 4;
          pcVar29 = (cXObject__21_1030__vtable *)&pcVar29->GetHilite;
        } while (p_Var30 != _vt_14cXCursorObject_7TreeSim);
        pcVar3->_vb1079->_vb966->__vtable = (cXObject__21_1030__vtable *)local_c00;
        local_af0 = local_780 - ((short)pcVar3->_vb1079->_vb966 + -0x28);
        local_7e8 = _vt_14cXCursorObject_8cXObject[131].__delta + local_af0;
        local_c00._112_2_ = _vt_14cXCursorObject_8cXObject[14].__delta + local_af0;
        local_b08 = _vt_14cXCursorObject_8cXObject[31].__delta + local_af0;
        local_b00 = _vt_14cXCursorObject_8cXObject[32].__delta + local_af0;
        local_af8 = _vt_14cXCursorObject_8cXObject[33].__delta + local_af0;
        local_af0 = _vt_14cXCursorObject_8cXObject[34].__delta + local_af0;
        pcVar21 = (cXMTObject__123_3296__vtable *)local_7a0;
        p_Var30 = _vt_14cXCursorObject_10cXMTObject;
        do {
          p_Var28 = p_Var30;
          pcVar34 = pcVar21;
          _Var31 = p_Var28[1];
          _Var32 = p_Var28[2];
          _Var33 = p_Var28[3];
          *(__vtbl_ptr_type *)pcVar34 = *p_Var28;
          *(__vtbl_ptr_type *)&pcVar34->GetFirstMultiTileObject = _Var31;
          *(__vtbl_ptr_type *)&pcVar34->Reset = _Var32;
          *(__vtbl_ptr_type *)&pcVar34->PostLoad = _Var33;
          pcVar21 = (cXMTObject__123_3296__vtable *)&pcVar34->DirtyAll;
          p_Var30 = p_Var28 + 4;
        } while (p_Var28 + 4 != _vt_14cXCursorObject_10cXMTObject + 0xc);
        _Var31 = p_Var28[5];
        *(__vtbl_ptr_type *)&pcVar34->DirtyAll = _vt_14cXCursorObject_10cXMTObject[12];
        *(__vtbl_ptr_type *)&pcVar34->MergeInPlace = _Var31;
        pcVar3->_vb1079->__vtable = (cXMTObject__123_3296__vtable *)local_7a0;
        local_780 = local_780 - ((short)pcVar3->_vb1079 + -0x30);
        local_778 = _vt_14cXCursorObject_10cXMTObject[5].__delta + local_780;
        local_798[0]._0_2_ = _vt_14cXCursorObject_10cXMTObject[1].__delta + local_780;
        local_780 = _vt_14cXCursorObject_10cXMTObject[4].__delta + local_780;
                    /* end of inlined section */
        pcVar3->__vtable = (cXCursorObject__152_1098__vtable *)_vt_14cXCursorObject;
        if (__in_chrg != 0) {
          __11TreeSimImpli(*(TreeSimImpl__21_3338 **)&this->field_0x94,0);
          __12cXObjectImpliP11ObjSelectorP12ObjectModule
                    (*(cXObjectImpl__127_901 **)&this->field_0x1c8,0,sel,module);
          __14cXMTObjectImpliP11ObjSelectorP10cXMTObjectP12ObjectModule
                    (this->_vb905,0,sel,leader,module);
        }
      }
    }
  }
  local_c0 = &this->fLastPlace;
  this->_vb1098->_vb1079->_vb966->_vb899->__vtable =
       (TreeSim__vtable *)::_vt_18cXCursorObjectImpl_7TreeSim;
  this->_vb1098->_vb1079->_vb966->__vtable =
       (cXObject__21_1030__vtable *)::_vt_18cXCursorObjectImpl_8cXObject;
  this->_vb1098->_vb1079->__vtable =
       (cXMTObject__123_3296__vtable *)::_vt_18cXCursorObjectImpl_10cXMTObject;
  this->_vb1098->__vtable =
       (cXCursorObject__152_1098__vtable *)::_vt_18cXCursorObjectImpl_14cXCursorObject;
  this->_vb905->_vb901->_vb1187->__vtable =
       (TreeSimImpl__21_3338__vtable *)::_vt_14cXMTObjectImpl_11TreeSimImpl;
  this->_vb905->_vb901->__vtable =
       (cXObjectImpl__138_901__vtable *)::_vt_18cXCursorObjectImpl_12cXObjectImpl;
  uVar13 = ::_vt_18cXCursorObjectImpl_7TreeSim[4].__delta;
  uVar11 = ::_vt_18cXCursorObjectImpl_7TreeSim[2].__delta;
  uVar23 = ::_vt_18cXCursorObjectImpl_7TreeSim[1].__delta;
  if (__in_chrg == 0) {
    local_bc = (cXMTObject__123_3296__vtable *)_vt_18cXCursorObjectImpl_10cXMTObject;
    local_b8 = (cXCursorObject__152_1098__vtable *)_vt_18cXCursorObjectImpl_14cXCursorObject;
    local_b4 = (TreeSimImpl__21_3338__vtable *)_vt_14cXMTObjectImpl_11TreeSimImpl;
    local_b0 = (cXObjectImpl__138_901__vtable *)_vt_18cXCursorObjectImpl_12cXObjectImpl;
    pTVar20 = (TreeSim__vtable *)_vt_18cXCursorObjectImpl_7TreeSim;
    p_Var30 = ::_vt_18cXCursorObjectImpl_7TreeSim;
    do {
      p_Var28 = p_Var30;
      pTVar27 = pTVar20;
      _Var33 = p_Var28[1];
      _Var31 = p_Var28[2];
      _Var32 = p_Var28[3];
      *(__vtbl_ptr_type *)pTVar27 = *p_Var28;
      *(__vtbl_ptr_type *)&pTVar27->Initialize = _Var33;
      *(__vtbl_ptr_type *)&pTVar27->SetError = _Var31;
      *(__vtbl_ptr_type *)&pTVar27->ClearError = _Var32;
      pTVar20 = (TreeSim__vtable *)&pTVar27->GetCurElem;
      p_Var30 = p_Var28 + 4;
    } while (p_Var28 + 4 != ::_vt_18cXCursorObjectImpl_7TreeSim + 0x10);
    pcVar3 = this->_vb1098;
    _Var31 = p_Var28[5];
    *(ulong *)&pTVar27->GetCurElem =
         CONCAT62(::_vt_18cXCursorObjectImpl_7TreeSim[16]._2_6_,
                  ::_vt_18cXCursorObjectImpl_7TreeSim[16].__delta);
    p_Var30 = ::_vt_18cXCursorObjectImpl_8cXObject;
    *(__vtbl_ptr_type *)&pTVar27->GetNthElem = _Var31;
    pcVar3->_vb1079->_vb966->_vb899->__vtable = (TreeSim__vtable *)_vt_18cXCursorObjectImpl_7TreeSim
    ;
    uVar18 = ::_vt_18cXCursorObjectImpl_8cXObject[2].__delta;
    uVar15 = ::_vt_18cXCursorObjectImpl_8cXObject[1].__delta;
    pcVar4 = this->_vb905;
    sVar8 = (short)this;
    sVar6 = sVar8 - ((short)this->_vb1098->_vb1079->_vb966->_vb899 + -0x28);
    _vt_18cXCursorObjectImpl_7TreeSim[1].__delta = uVar23 + sVar6;
    sVar7 = sVar8 - ((short)pcVar4->_vb901->_vb1187 + -0x60);
    _vt_18cXCursorObjectImpl_7TreeSim[2].__delta = (uVar11 + sVar6) - sVar7;
    _vt_18cXCursorObjectImpl_7TreeSim[7].__delta =
         (::_vt_18cXCursorObjectImpl_7TreeSim[7].__delta + sVar6) - sVar7;
    _vt_18cXCursorObjectImpl_7TreeSim[4].__delta = (uVar13 + sVar6) - sVar7;
    _vt_18cXCursorObjectImpl_7TreeSim[5].__delta =
         (::_vt_18cXCursorObjectImpl_7TreeSim[5].__delta + sVar6) - sVar7;
    _vt_18cXCursorObjectImpl_7TreeSim[6].__delta =
         (::_vt_18cXCursorObjectImpl_7TreeSim[6].__delta + sVar6) - sVar7;
    _vt_18cXCursorObjectImpl_7TreeSim[8].__delta =
         (::_vt_18cXCursorObjectImpl_7TreeSim[8].__delta + sVar6) - sVar7;
    _vt_18cXCursorObjectImpl_7TreeSim[9].__delta =
         (::_vt_18cXCursorObjectImpl_7TreeSim[9].__delta + sVar6) - sVar7;
    _vt_18cXCursorObjectImpl_7TreeSim[3].__delta =
         (::_vt_18cXCursorObjectImpl_7TreeSim[3].__delta + sVar6) -
         (sVar8 - ((short)pcVar4->_vb901 + -0x94));
    _vt_18cXCursorObjectImpl_7TreeSim[10].__delta =
         (::_vt_18cXCursorObjectImpl_7TreeSim[10].__delta + sVar6) - sVar7;
    _vt_18cXCursorObjectImpl_7TreeSim[16].__delta =
         (::_vt_18cXCursorObjectImpl_7TreeSim[16].__delta + sVar6) -
         (sVar8 - ((short)pcVar4 + -0x1c8));
    _vt_18cXCursorObjectImpl_7TreeSim[11].__delta =
         (::_vt_18cXCursorObjectImpl_7TreeSim[11].__delta + sVar6) - sVar7;
    _vt_18cXCursorObjectImpl_7TreeSim[15].__delta =
         (::_vt_18cXCursorObjectImpl_7TreeSim[15].__delta + sVar6) - sVar7;
    _vt_18cXCursorObjectImpl_7TreeSim[12].__delta =
         (::_vt_18cXCursorObjectImpl_7TreeSim[12].__delta + sVar6) - sVar7;
    _vt_18cXCursorObjectImpl_7TreeSim[13].__delta =
         (::_vt_18cXCursorObjectImpl_7TreeSim[13].__delta + sVar6) - sVar7;
    _vt_18cXCursorObjectImpl_7TreeSim[14].__delta =
         (::_vt_18cXCursorObjectImpl_7TreeSim[14].__delta + sVar6) - sVar7;
    pcVar29 = (cXObject__21_1030__vtable *)_vt_18cXCursorObjectImpl_8cXObject;
    do {
      _Var31 = p_Var30[1];
      _Var32 = p_Var30[2];
      _Var33 = p_Var30[3];
      *(__vtbl_ptr_type *)pcVar29 = *p_Var30;
      *(__vtbl_ptr_type *)&pcVar29->GetNumAttr = _Var31;
      *(__vtbl_ptr_type *)&pcVar29->CalcShortDistance = _Var32;
      *(__vtbl_ptr_type *)&pcVar29->GetSpriteSlot = _Var33;
      p_Var30 = p_Var30 + 4;
      pcVar29 = (cXObject__21_1030__vtable *)&pcVar29->GetHilite;
    } while (p_Var30 != ::_vt_18cXCursorObjectImpl_7TreeSim);
    this->_vb1098->_vb1079->_vb966->__vtable =
         (cXObject__21_1030__vtable *)_vt_18cXCursorObjectImpl_8cXObject;
    sVar9 = sVar8 - ((short)this->_vb1098->_vb1079->_vb966 + -0x48);
    sVar6 = sVar8 - ((short)this->_vb905->_vb901 + -0x94);
    _vt_18cXCursorObjectImpl_8cXObject[1].__delta = (uVar15 + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[2].__delta = (uVar18 + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[3].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[3].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[4].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[4].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[5].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[5].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[6].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[6].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[7].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[7].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[8].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[8].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[9].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[9].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[10].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[10].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[11].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[11].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[12].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[12].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[13].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[13].__delta + sVar9) - sVar6;
    sVar7 = sVar8 - ((short)this->_vb905 + -0x1c8);
    _vt_18cXCursorObjectImpl_8cXObject[15].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[15].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[14].__delta =
         ::_vt_18cXCursorObjectImpl_8cXObject[14].__delta + sVar9;
    _vt_18cXCursorObjectImpl_8cXObject[16].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[16].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[17].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[17].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[18].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[18].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[19].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[19].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[20].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[20].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[21].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[21].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[22].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[22].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[23].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[23].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[24].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[24].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[25].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[25].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[26].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[26].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[27].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[27].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[28].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[28].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[29].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[29].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[30].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[30].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[35].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[35].__delta + sVar9) - sVar7;
    _vt_18cXCursorObjectImpl_8cXObject[31].__delta =
         ::_vt_18cXCursorObjectImpl_8cXObject[31].__delta + sVar9;
    _vt_18cXCursorObjectImpl_8cXObject[32].__delta =
         ::_vt_18cXCursorObjectImpl_8cXObject[32].__delta + sVar9;
    _vt_18cXCursorObjectImpl_8cXObject[33].__delta =
         ::_vt_18cXCursorObjectImpl_8cXObject[33].__delta + sVar9;
    _vt_18cXCursorObjectImpl_8cXObject[34].__delta =
         ::_vt_18cXCursorObjectImpl_8cXObject[34].__delta + sVar9;
    _vt_18cXCursorObjectImpl_8cXObject[36].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[36].__delta + sVar9) - sVar7;
    _vt_18cXCursorObjectImpl_8cXObject[37].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[37].__delta + sVar9) - sVar7;
    _vt_18cXCursorObjectImpl_8cXObject[38].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[38].__delta + sVar9) - sVar7;
    _vt_18cXCursorObjectImpl_8cXObject[39].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[39].__delta + sVar9) - sVar7;
    _vt_18cXCursorObjectImpl_8cXObject[40].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[40].__delta + sVar9) - sVar7;
    _vt_18cXCursorObjectImpl_8cXObject[41].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[41].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[42].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[42].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[43].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[43].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[44].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[44].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[45].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[45].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[46].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[46].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[47].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[47].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[48].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[48].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[49].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[49].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[50].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[50].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[51].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[51].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[52].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[52].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[53].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[53].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[54].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[54].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[55].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[55].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[56].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[56].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[57].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[57].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[58].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[58].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[59].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[59].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[60].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[60].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[61].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[61].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[62].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[62].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[63].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[63].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[64].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[64].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[65].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[65].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[66].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[66].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[67].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[67].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[68].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[68].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[69].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[69].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[70].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[70].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[71].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[71].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[72].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[72].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[73].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[73].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[74].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[74].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[75].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[75].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[76].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[76].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[77].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[77].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[78].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[78].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[79].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[79].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[80].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[80].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[81].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[81].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[82].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[82].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[83].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[83].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[84].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[84].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[85].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[85].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[86].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[86].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[87].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[87].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[88].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[88].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[89].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[89].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[90].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[90].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[91].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[91].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[92].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[92].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[93].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[93].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[94].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[94].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[95].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[95].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[96].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[96].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[97].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[97].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[98].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[98].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[99].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[99].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[100].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[100].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[101].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[101].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[102].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[102].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[103].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[103].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[104].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[104].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[105].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[105].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[106].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[106].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[107].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[107].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[108].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[108].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[109].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[109].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[110].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[110].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[111].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[111].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[112].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[112].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[113].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[113].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[114].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[114].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[115].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[115].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[126].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[126].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[127].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[127].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[128].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[128].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[129].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[129].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[116].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[116].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[117].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[117].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[118].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[118].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[119].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[119].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[120].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[120].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[121].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[121].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[122].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[122].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[123].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[123].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[124].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[124].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[125].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[125].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[130].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[130].__delta + sVar9) - sVar7;
    _vt_18cXCursorObjectImpl_8cXObject[131].__delta =
         ::_vt_18cXCursorObjectImpl_8cXObject[131].__delta + sVar9;
    _vt_18cXCursorObjectImpl_8cXObject[132].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[132].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[138].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[138].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[133].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[133].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[134].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[134].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[135].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[135].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[136].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[136].__delta + sVar9) - sVar6;
    _vt_18cXCursorObjectImpl_8cXObject[137].__delta =
         (::_vt_18cXCursorObjectImpl_8cXObject[137].__delta + sVar9) - sVar6;
    pcVar21 = local_bc;
    p_Var30 = ::_vt_18cXCursorObjectImpl_10cXMTObject;
    do {
      p_Var28 = p_Var30;
      pcVar34 = pcVar21;
      _Var31 = p_Var28[1];
      _Var32 = p_Var28[2];
      _Var33 = p_Var28[3];
      *(__vtbl_ptr_type *)pcVar34 = *p_Var28;
      *(__vtbl_ptr_type *)&pcVar34->GetFirstMultiTileObject = _Var31;
      *(__vtbl_ptr_type *)&pcVar34->Reset = _Var32;
      *(__vtbl_ptr_type *)&pcVar34->PostLoad = _Var33;
      pcVar21 = (cXMTObject__123_3296__vtable *)&pcVar34->DirtyAll;
      p_Var30 = p_Var28 + 4;
    } while (p_Var28 + 4 != ::_vt_18cXCursorObjectImpl_10cXMTObject + 0xc);
    pcVar3 = this->_vb1098;
    _Var31 = p_Var28[5];
    *(ulong *)&pcVar34->DirtyAll =
         CONCAT62(::_vt_18cXCursorObjectImpl_10cXMTObject[12]._2_6_,
                  ::_vt_18cXCursorObjectImpl_10cXMTObject[12].__delta);
    *(__vtbl_ptr_type *)&pcVar34->MergeInPlace = _Var31;
    pcVar3->_vb1079->__vtable = local_bc;
    sVar7 = sVar8 - ((short)this->_vb1098->_vb1079 + -0x50);
    sVar6 = sVar8 - ((short)this->_vb905 + -0x1c8);
    _vt_18cXCursorObjectImpl_10cXMTObject[1].__delta =
         ::_vt_18cXCursorObjectImpl_10cXMTObject[1].__delta + sVar7;
    _vt_18cXCursorObjectImpl_10cXMTObject[2].__delta =
         (::_vt_18cXCursorObjectImpl_10cXMTObject[2].__delta + sVar7) - sVar6;
    _vt_18cXCursorObjectImpl_10cXMTObject[3].__delta =
         (::_vt_18cXCursorObjectImpl_10cXMTObject[3].__delta + sVar7) - sVar6;
    _vt_18cXCursorObjectImpl_10cXMTObject[4].__delta =
         ::_vt_18cXCursorObjectImpl_10cXMTObject[4].__delta + sVar7;
    _vt_18cXCursorObjectImpl_10cXMTObject[5].__delta =
         ::_vt_18cXCursorObjectImpl_10cXMTObject[5].__delta + sVar7;
    _vt_18cXCursorObjectImpl_10cXMTObject[6].__delta =
         (::_vt_18cXCursorObjectImpl_10cXMTObject[6].__delta + sVar7) - sVar6;
    _vt_18cXCursorObjectImpl_10cXMTObject[7].__delta =
         (::_vt_18cXCursorObjectImpl_10cXMTObject[7].__delta + sVar7) - sVar6;
    _vt_18cXCursorObjectImpl_10cXMTObject[8].__delta =
         (::_vt_18cXCursorObjectImpl_10cXMTObject[8].__delta + sVar7) - sVar6;
    _vt_18cXCursorObjectImpl_10cXMTObject[9].__delta =
         (::_vt_18cXCursorObjectImpl_10cXMTObject[9].__delta + sVar7) - sVar6;
    _vt_18cXCursorObjectImpl_10cXMTObject[10].__delta =
         (::_vt_18cXCursorObjectImpl_10cXMTObject[10].__delta + sVar7) - sVar6;
    _vt_18cXCursorObjectImpl_10cXMTObject[12].__delta =
         (::_vt_18cXCursorObjectImpl_10cXMTObject[12].__delta + sVar7) - sVar6;
    _vt_18cXCursorObjectImpl_10cXMTObject[11].__delta =
         (::_vt_18cXCursorObjectImpl_10cXMTObject[11].__delta + sVar7) - sVar6;
    p_Var30 = ::_vt_18cXCursorObjectImpl_14cXCursorObject;
    pcVar22 = local_b8;
    do {
      pcVar35 = pcVar22;
      p_Var28 = p_Var30;
      _Var33 = p_Var28[1];
      _Var31 = p_Var28[2];
      _Var32 = p_Var28[3];
      *(__vtbl_ptr_type *)pcVar35 = *p_Var28;
      *(__vtbl_ptr_type *)&pcVar35->GotoNextSlot = _Var33;
      *(__vtbl_ptr_type *)&pcVar35->DropObject = _Var31;
      *(__vtbl_ptr_type *)&pcVar35->KillFloater = _Var32;
      p_Var30 = p_Var28 + 4;
      pcVar22 = (cXCursorObject__152_1098__vtable *)&pcVar35->GetFloater;
    } while (p_Var28 + 4 != ::_vt_18cXCursorObjectImpl_14cXCursorObject + 0xc);
    pcVar3 = this->_vb1098;
    _Var31 = p_Var28[5];
    _Var32 = p_Var28[6];
    *(ulong *)&pcVar35->GetFloater =
         CONCAT62(::_vt_18cXCursorObjectImpl_14cXCursorObject[12]._2_6_,
                  ::_vt_18cXCursorObjectImpl_14cXCursorObject[12].__delta);
    *(__vtbl_ptr_type *)&pcVar35->FaceDirection = _Var31;
    *(__vtbl_ptr_type *)&pcVar35->GetLastLevel = _Var32;
    uVar15 = ::_vt_18cXCursorObjectImpl_14cXCursorObject[1].__delta;
    pcVar3->__vtable = local_b8;
    uVar14 = ::_vt_14cXMTObjectImpl_11TreeSimImpl[4]._2_6_;
    uVar13 = ::_vt_14cXMTObjectImpl_11TreeSimImpl[4].__delta;
    uVar12 = ::_vt_14cXMTObjectImpl_11TreeSimImpl[2]._2_6_;
    uVar11 = ::_vt_14cXMTObjectImpl_11TreeSimImpl[2].__delta;
    uVar10 = ::_vt_14cXMTObjectImpl_11TreeSimImpl[1]._2_6_;
    uVar23 = ::_vt_14cXMTObjectImpl_11TreeSimImpl[1].__delta;
    sVar6 = sVar8 - ((short)this->_vb1098 + -0x58);
    _vt_18cXCursorObjectImpl_14cXCursorObject[2].__delta =
         ::_vt_18cXCursorObjectImpl_14cXCursorObject[2].__delta + sVar6;
    _vt_18cXCursorObjectImpl_14cXCursorObject[4].__delta =
         ::_vt_18cXCursorObjectImpl_14cXCursorObject[4].__delta + sVar6;
    _vt_18cXCursorObjectImpl_14cXCursorObject[5].__delta =
         ::_vt_18cXCursorObjectImpl_14cXCursorObject[5].__delta + sVar6;
    _vt_18cXCursorObjectImpl_14cXCursorObject[6].__delta =
         ::_vt_18cXCursorObjectImpl_14cXCursorObject[6].__delta + sVar6;
    _vt_18cXCursorObjectImpl_14cXCursorObject[7].__delta =
         ::_vt_18cXCursorObjectImpl_14cXCursorObject[7].__delta + sVar6;
    _vt_18cXCursorObjectImpl_14cXCursorObject[8].__delta =
         ::_vt_18cXCursorObjectImpl_14cXCursorObject[8].__delta + sVar6;
    _vt_18cXCursorObjectImpl_14cXCursorObject[9].__delta =
         ::_vt_18cXCursorObjectImpl_14cXCursorObject[9].__delta + sVar6;
    _vt_18cXCursorObjectImpl_14cXCursorObject[10].__delta =
         ::_vt_18cXCursorObjectImpl_14cXCursorObject[10].__delta + sVar6;
    _vt_18cXCursorObjectImpl_14cXCursorObject[1].__delta = uVar15 + sVar6;
    _vt_18cXCursorObjectImpl_14cXCursorObject[3].__delta =
         ::_vt_18cXCursorObjectImpl_14cXCursorObject[3].__delta + sVar6;
    _vt_18cXCursorObjectImpl_14cXCursorObject[11].__delta =
         ::_vt_18cXCursorObjectImpl_14cXCursorObject[11].__delta + sVar6;
    _vt_18cXCursorObjectImpl_14cXCursorObject[12].__delta =
         ::_vt_18cXCursorObjectImpl_14cXCursorObject[12].__delta + sVar6;
    _vt_18cXCursorObjectImpl_14cXCursorObject[13].__delta =
         ::_vt_18cXCursorObjectImpl_14cXCursorObject[13].__delta + sVar6;
    _vt_14cXMTObjectImpl_11TreeSimImpl[0] = ::_vt_14cXMTObjectImpl_11TreeSimImpl[0];
    _vt_14cXMTObjectImpl_11TreeSimImpl[3] = ::_vt_14cXMTObjectImpl_11TreeSimImpl[3];
    _vt_14cXMTObjectImpl_11TreeSimImpl[5] = ::_vt_14cXMTObjectImpl_11TreeSimImpl[5];
    this->_vb905->_vb901->_vb1187->__vtable = local_b4;
    uVar19 = ::_vt_18cXCursorObjectImpl_12cXObjectImpl[5]._2_6_;
    uVar18 = ::_vt_18cXCursorObjectImpl_12cXObjectImpl[5].__delta;
    uVar17 = ::_vt_18cXCursorObjectImpl_12cXObjectImpl[4]._2_6_;
    uVar16 = ::_vt_18cXCursorObjectImpl_12cXObjectImpl[3]._2_6_;
    uVar15 = ::_vt_18cXCursorObjectImpl_12cXObjectImpl[3].__delta;
    pcVar5 = this->_vb905->_vb901;
    sVar6 = sVar8 - ((short)pcVar5 + -0x94);
    sVar7 = sVar8 - ((short)pcVar5->_vb1187 + -0x60);
    _vt_14cXMTObjectImpl_11TreeSimImpl[1] =
         (__vtbl_ptr_type)CONCAT62(uVar10,(uVar23 + sVar7) - sVar6);
    _vt_14cXMTObjectImpl_11TreeSimImpl[2] =
         (__vtbl_ptr_type)CONCAT62(uVar12,(uVar11 + sVar7) - sVar6);
    _vt_14cXMTObjectImpl_11TreeSimImpl[4] =
         (__vtbl_ptr_type)CONCAT62(uVar14,(uVar13 + sVar7) - sVar6);
    _vt_18cXCursorObjectImpl_12cXObjectImpl[0] = ::_vt_18cXCursorObjectImpl_12cXObjectImpl[0];
    _vt_18cXCursorObjectImpl_12cXObjectImpl[1] = ::_vt_18cXCursorObjectImpl_12cXObjectImpl[1];
    _vt_18cXCursorObjectImpl_12cXObjectImpl[2] = ::_vt_18cXCursorObjectImpl_12cXObjectImpl[2];
    _vt_18cXCursorObjectImpl_12cXObjectImpl[6] = ::_vt_18cXCursorObjectImpl_12cXObjectImpl[6];
    _vt_18cXCursorObjectImpl_12cXObjectImpl[7] = ::_vt_18cXCursorObjectImpl_12cXObjectImpl[7];
    this->_vb905->_vb901->__vtable = local_b0;
    sVar6 = sVar8 - ((short)this->_vb905->_vb901 + -0x94);
    _vt_18cXCursorObjectImpl_12cXObjectImpl[3] = (__vtbl_ptr_type)CONCAT62(uVar16,uVar15 + sVar6);
    _vt_18cXCursorObjectImpl_12cXObjectImpl[4] =
         (__vtbl_ptr_type)
         CONCAT62(uVar17,::_vt_18cXCursorObjectImpl_12cXObjectImpl[4].__delta + sVar6);
    _vt_18cXCursorObjectImpl_12cXObjectImpl[5] =
         (__vtbl_ptr_type)
         CONCAT62(uVar19,(uVar18 + sVar6) - (sVar8 - ((short)this->_vb905 + -0x1c8)));
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/CursorObject.h */
  this->_vb1098->_vb1079->_vb966->_vb899->m_pCursorObject = this;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
  this->fMyObject = 0;
  if (floatAbove == (cXObject__21_1030 *)0x0) {
    pcVar24 = (cXObjectImpl__152_901 *)0x0;
  }
  else {
    pcVar24 = (cXObjectImpl__152_901 *)
              (*(code *)floatAbove->__vtable[1].GetObjectImplementation)
                        ((int)&floatAbove->_vb899 +
                         (int)*(short *)&floatAbove->__vtable[1].AdvanceGraphic);
  }
                    /* end of inlined section */
  this->fFloater = pcVar24;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
  this->fLegalPosition = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
  (local_c0->x).whole = -0x10;
  (this->fLastPlace).y.whole = -0x10;
                    /* end of inlined section */
  this->fLastLevel = 1;
  this->fSpoofAlt = -1.0;
  if ((cXObjectImpl__127_901 *)this->fFloater == (cXObjectImpl__127_901 *)0x0) {
    this->fOrigContainerID = 0;
  }
  else {
    __13PlacementSpecP12cXObjectImpl(&ps,(cXObjectImpl__127_901 *)this->fFloater);
    if (ps.container != (cXObjectImpl__123_901 *)0x0) {
      pcVar29 = (ps.container)->_vb966->__vtable;
      uVar23 = (*(code *)pcVar29[1].UserCanPlace)
                         ((int)&(ps.container)->_vb966->_vb899 +
                          (int)*(short *)&pcVar29[1].IsPartOfMe);
      this->fOrigContainerID = uVar23;
      this->fOrigSlotNum = (ushort)ps.slotNum;
      goto LAB_00266664;
    }
    this->fOrigContainerID = 0;
  }
  this->fOrigSlotNum = 0;
LAB_00266664:
  this->fTestContainerID = this->fOrigContainerID;
  this->fTestSlotNum = this->fOrigSlotNum;
  AssignOffsets__18cXCursorObjectImpl(this);
  return this;
}

void cXCursorObjectImpl::Turn(Int notches) {
	cXMTObjectImpl *srch;
	cXObjectImpl *ptr;
	int slotCnt;
	cXObject *child;
	int slotCnt;
	cXObject *child;
	cXCursorObjectImpl *srch;
	
  cXObject__21_1030 *pcVar1;
  cXObject__21_1030__vtable *pcVar2;
  int iVar3;
  cXMTObject__123_3296__vtable *pcVar4;
  cXMTObject__123_3296 *pcVar5;
  int *piVar6;
  int iVar7;
  cXObjectImpl__152_901 *pcVar8;
  cXCursorObject__152_1098 *pcVar9;
  long lVar10;
  int iVar11;
  
  if (this->fFloater == (cXObjectImpl__152_901 *)0x0) {
    Turn__14cXMTObjectImpli(this->_vb905,notches);
    return;
  }
  pcVar1 = this->_vb1098->_vb1079->_vb966;
  pcVar2 = pcVar1->__vtable;
  (*(code *)pcVar2->GetData)((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2->GetRect);
  pcVar1 = this->fFloater->_vb966;
  pcVar2 = pcVar1->__vtable;
  (*(code *)pcVar2->ClearIdleStatus)
            ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2->SetIdleStatus,notches);
  pcVar1 = this->fFloater->_vb966;
  pcVar2 = pcVar1->__vtable;
  lVar10 = (*(code *)pcVar2[1].GetFrontFaceDirection)
                     ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2[1].GetInteractionLeader);
  pcVar8 = this->fFloater;
  if (lVar10 == 0) {
    pcVar2 = pcVar8->_vb966->__vtable;
    iVar7 = (*(code *)pcVar2[1].GetHilite)
                      ((int)&pcVar8->_vb966->_vb899 + (int)*(short *)&pcVar2[1].SetHilite);
    iVar7 = iVar7 + -1;
    if (iVar7 < 0) {
      pcVar9 = this->_vb1098;
      goto LAB_00266914;
    }
    pcVar8 = this->fFloater;
    while( true ) {
      pcVar2 = pcVar8->_vb966->__vtable;
      lVar10 = (*(code *)pcVar2[1].Dirty)
                         ((int)&pcVar8->_vb966->_vb899 + (int)*(short *)&pcVar2[1].UpdateSimFlags,
                          iVar7);
      if (lVar10 != 0) {
        iVar11 = (int)lVar10;
        lVar10 = (**(code **)(*(int *)(iVar11 + 4) + 0x30c))
                           (iVar11 + *(short *)(*(int *)(iVar11 + 4) + 0x308));
        if ((lVar10 == 0) &&
           (lVar10 = (**(code **)(*(int *)(iVar11 + 4) + 0x20c))
                               (iVar11 + *(short *)(*(int *)(iVar11 + 4) + 0x208),0x17), lVar10 == 2
           )) {
          (**(code **)(*(int *)(iVar11 + 4) + 0xfc))
                    (iVar11 + *(short *)(*(int *)(iVar11 + 4) + 0xf8),notches);
        }
      }
      iVar7 = iVar7 + -1;
      if (iVar7 < 0) break;
      pcVar8 = this->fFloater;
    }
  }
  else {
                    /* inlined from SCID.h */
    if (pcVar8 == (cXObjectImpl__152_901 *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)_dyncastimpl__7TreeSim4SCID(pcVar8->_vb966->_vb899,cXMTObjectImplID);
    }
                    /* end of inlined section */
    if (piVar6 != (int *)0x0) {
      if ((int *)piVar6[3] != (int *)0x0) {
        piVar6 = (int *)piVar6[3];
      }
      if (piVar6 == (int *)0x0) {
        pcVar9 = this->_vb1098;
      }
      else {
        iVar7 = *piVar6;
        while( true ) {
          iVar11 = *(int *)(*(int *)(iVar7 + 4) + 4);
          iVar7 = (**(code **)(iVar11 + 0x24c))
                            (*(int *)(iVar7 + 4) + (int)*(short *)(iVar11 + 0x248));
          iVar7 = iVar7 + -1;
          if (iVar7 < 0) {
            piVar6 = (int *)piVar6[2];
          }
          else {
            iVar11 = *piVar6;
            while( true ) {
              iVar3 = *(int *)(*(int *)(iVar11 + 4) + 4);
              lVar10 = (**(code **)(iVar3 + 0x25c))
                                 (*(int *)(iVar11 + 4) + (int)*(short *)(iVar3 + 600),iVar7);
              if (lVar10 != 0) {
                iVar11 = (int)lVar10;
                lVar10 = (**(code **)(*(int *)(iVar11 + 4) + 0x30c))
                                   (iVar11 + *(short *)(*(int *)(iVar11 + 4) + 0x308));
                if ((lVar10 == 0) &&
                   (lVar10 = (**(code **)(*(int *)(iVar11 + 4) + 0x20c))
                                       (iVar11 + *(short *)(*(int *)(iVar11 + 4) + 0x208),0x17),
                   lVar10 == 2)) {
                  (**(code **)(*(int *)(iVar11 + 4) + 0xfc))
                            (iVar11 + *(short *)(*(int *)(iVar11 + 4) + 0xf8),notches);
                }
              }
              iVar7 = iVar7 + -1;
              if (iVar7 < 0) break;
              iVar11 = *piVar6;
            }
            piVar6 = (int *)piVar6[2];
          }
          if (piVar6 == (int *)0x0) break;
          iVar7 = *piVar6;
        }
        pcVar9 = this->_vb1098;
      }
      goto LAB_00266914;
    }
  }
  pcVar9 = this->_vb1098;
LAB_00266914:
  pcVar4 = pcVar9->_vb1079->__vtable;
  (*(code *)pcVar4->RemoveFromDynamic)
            ((int)&pcVar9->_vb1079->_vb966 + (int)*(short *)&pcVar4->MergeInPlace);
  pcVar1 = this->_vb1098->_vb1079->_vb966;
  pcVar2 = pcVar1->__vtable;
  lVar10 = (*(code *)pcVar2->GetAttr)
                     ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2->GetTemp,&this->fLastPlace,
                      this->fLastLevel,0,0);
  if (lVar10 == 0) {
    pcVar5 = this->_vb905->_vb1079;
    pcVar4 = pcVar5->__vtable;
    lVar10 = (*(code *)pcVar4->AssignOffsets)((int)&pcVar5->_vb966 + (int)*(short *)&pcVar4->Reset);
                    /* inlined from SCID.h */
    if (lVar10 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)_dyncastimpl__7TreeSim4SCID
                                (*(TreeSim **)*(undefined4 *)lVar10,cXCursorObjectImplID);
    }
                    /* end of inlined section */
    if (piVar6 != (int *)0x0) {
      *(undefined2 *)(piVar6 + 3) = 0;
      while( true ) {
        iVar7 = *(int *)(*(int *)(*piVar6 + 4) + 4);
        lVar10 = (**(code **)(iVar7 + 0x1c))(*(int *)(*piVar6 + 4) + (int)*(short *)(iVar7 + 0x18));
                    /* inlined from SCID.h */
        if (lVar10 == 0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = (int *)_dyncastimpl__7TreeSim4SCID
                                    (*(TreeSim **)*(undefined4 *)lVar10,cXCursorObjectImplID);
        }
                    /* end of inlined section */
        if (piVar6 == (int *)0x0) break;
        *(undefined2 *)(piVar6 + 3) = 0;
      }
    }
  }
  else {
    pcVar1 = this->_vb1098->_vb1079->_vb966;
    pcVar2 = pcVar1->__vtable;
    (*(code *)pcVar2->GetAdultAnimTable)
              ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2->GetModule,&this->fLastPlace,
               this->fLastLevel,0,0);
  }
  return;
}

bool cXCursorObjectImpl::CanPlace(FTilePt &loc, Int inLevel, cXObject *ontop, Int slotNum) {
  bool bVar1;
  
  if (ontop == (cXObject__21_1030 *)0x0) {
    bVar1 = CanPlace__14cXMTObjectImplRC7FTilePtiP8cXObjecti
                      (this->_vb905,loc,inLevel,(cXObject__21_1030 *)0x0,slotNum);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

SInt32 cXCursorObjectImpl::GetFloaterPrice() {
  cXObject__21_1030 *pcVar1;
  cXObject__21_1030__vtable *pcVar2;
  int iVar3;
  ObjSelector *pOVar4;
  long lVar5;
  
  if (this->fFloater == (cXObjectImpl__152_901 *)0x0) {
    iVar3 = 0;
  }
  else {
    pcVar1 = this->fFloater->_vb966;
    pcVar2 = pcVar1->__vtable;
    lVar5 = (*(code *)pcVar2[1].GetFrontFaceDirection)
                      ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2[1].GetInteractionLeader);
    if (lVar5 == 0) {
      pcVar1 = this->fFloater->_vb966;
      pcVar2 = pcVar1->__vtable;
      iVar3 = (*(code *)pcVar2[1].HandleError)
                        ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2[1].Error);
      iVar3 = (int)*(short *)(iVar3 + 0x24);
    }
    else {
      pcVar1 = this->fFloater->_vb966;
      pcVar2 = pcVar1->__vtable;
      pOVar4 = (ObjSelector *)
               (*(code *)pcVar2[1].SetLevel)
                         ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2[1].GetTreeID);
      pOVar4 = GetMasterSelector__11ObjSelector(pOVar4);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
      iVar3 = (int)(short)pOVar4->fHeader->price;
    }
  }
  return iVar3;
}

void cXCursorObjectImpl::Place(FTilePt &loc, Int inLevel, cXObject *ontop, Int slotNum) {
	FTilePt leadLoc;
	Int inX;
	Int inY;
	Int integer;
	Int integer;
	FTilePt *this;
	cXCursorObjectImpl *curObj;
	cXMTObjectImpl *ptr;
	
  undefined *puVar1;
  FTilePt *pFVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  cXObject__21_1030 *pcVar6;
  cXObject__21_1030__vtable *pcVar7;
  cXObject__21_1030 *pcVar8;
  cXObject__21_1030__vtable *pcVar9;
  ulong *puVar10;
  bool bVar11;
  cXObjectImpl__152_901 *pcVar12;
  cXMTObjectImpl__138_905 *pcVar13;
  cXCursorObjectImpl__152_907 *pcVar14;
  ulong uVar15;
  undefined8 uVar16;
  FTilePt leadLoc;
  
  uVar15 = (ulong)inLevel;
  pcVar13 = this->_vb905;
  if ((long)(int)pcVar13->fLeadObject != 0) {
    puVar1 = (undefined *)((int)&(loc->x).whole + 3);
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)loc & 7;
    uVar15 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
             (long)(int)pcVar13->fLeadObject & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
             -1L << (8 - uVar4) * 8 | *(ulong *)((int)loc - uVar4) >> uVar4 * 8;
    puVar1 = (undefined *)((int)&leadLoc.x.whole + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar3);
    *puVar10 = *puVar10 & -1L << (uVar3 + 1) * 8 | uVar15 >> (7 - uVar3) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    leadLoc.x.whole = (int)(uVar15 >> 0x20);
    leadLoc.y.whole = (int)uVar15;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    leadLoc = (FTilePt)CONCAT44(leadLoc.x.whole + pcVar13->fXOff * -0x10,
                                leadLoc.y.whole + pcVar13->fYOff * -0x10);
                    /* end of inlined section */
    pcVar6 = pcVar13->fLeadObject->_vb1079->_vb966;
    pcVar7 = pcVar6->__vtable;
    (*(code *)pcVar7->GetAdultAnimTable)
              ((int)&pcVar6->_vb899 + (int)*(short *)&pcVar7->GetModule,&leadLoc,
               inLevel - pcVar13->fLevelOff,ontop,slotNum);
    goto LAB_00266d30;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
  bVar11 = __eq__C7FTilePtRC7FTilePt(loc,&this->fLastPlace);
                    /* end of inlined section */
  if (bVar11) {
    if ((long)this->fLastLevel != uVar15) {
      this->fTestContainerID = 0;
      goto LAB_00266bfc;
    }
    pcVar12 = this->fFloater;
  }
  else {
    this->fTestContainerID = 0;
LAB_00266bfc:
    this->fTestSlotNum = 0;
    pcVar12 = this->fFloater;
  }
  this->fLegalPosition = 0;
  if (pcVar12 == (cXObjectImpl__152_901 *)0x0) {
    this->fLegalPosition = 1;
  }
  bVar11 = AttemptFloaterPlacement__18cXCursorObjectImplRC7FTilePti(this,loc,inLevel);
  if (bVar11) {
    this->fLegalPosition = 1;
    pcVar6 = this->fFloater->_vb966;
    pcVar8 = this->_vb905->_vb901->_vb966;
    pcVar7 = pcVar6->__vtable;
    pcVar9 = pcVar8->__vtable;
    sVar5 = *(short *)&pcVar7->GetModule;
    uVar16 = (*(code *)pcVar9[1].GetLightingContribution)
                       ((int)&pcVar8->_vb899 + (int)*(short *)&pcVar9[1].CanContributeLight,
                        this->fTestContainerID);
    (*(code *)pcVar7->GetAdultAnimTable)
              ((int)&pcVar6->_vb899 + (int)sVar5,loc,uVar15,uVar16,this->fTestSlotNum);
    pcVar6 = this->fFloater->_vb966;
    pcVar7 = pcVar6->__vtable;
    (*(code *)pcVar7->GetCTilePt)((int)&pcVar6->_vb899 + (int)*(short *)&pcVar7->GetLevel);
  }
  Place__14cXMTObjectImplRC7FTilePtiP8cXObjecti(this->_vb905,loc,inLevel,(cXObject__21_1030 *)0x0,0)
  ;
  if (this != (cXCursorObjectImpl__152_907 *)0x0) {
    pcVar13 = this->_vb905;
    pcVar14 = this;
    while( true ) {
      puVar1 = (undefined *)((int)&(pcVar13->_vb901->fLocation).x.whole + 3);
      uVar3 = (uint)puVar1 & 7;
      pFVar2 = &pcVar13->_vb901->fLocation;
      uVar4 = (uint)pFVar2 & 7;
      uVar15 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
               uVar15 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
               *(ulong *)((int)pFVar2 - uVar4) >> uVar4 * 8;
      puVar1 = (undefined *)((int)&(pcVar14->fLastPlace).x.whole + 3);
      uVar3 = (uint)puVar1 & 7;
      puVar10 = (ulong *)(puVar1 + -uVar3);
      *puVar10 = *puVar10 & -1L << (uVar3 + 1) * 8 | uVar15 >> (7 - uVar3) * 8;
      uVar3 = (uint)&pcVar14->fLastPlace & 7;
      puVar10 = (ulong *)((int)&pcVar14->fLastPlace - uVar3);
      *puVar10 = uVar15 << uVar3 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      pcVar14->fLastLevel = pcVar14->_vb905->_vb901->fLevel;
      sVar5 = this->fLegalPosition;
      pcVar14->fSpoofAlt = -1.0;
      pcVar14->fLegalPosition = sVar5;
                    /* inlined from SCID.h */
      pcVar13 = pcVar14->_vb905->fMultiNext;
      if (pcVar13 == (cXMTObjectImpl__138_905 *)0x0) {
        pcVar14 = (cXCursorObjectImpl__152_907 *)0x0;
      }
      else {
        pcVar14 = (cXCursorObjectImpl__152_907 *)
                  _dyncastimpl__7TreeSim4SCID(pcVar13->_vb1079->_vb966->_vb899,cXCursorObjectImplID)
        ;
      }
                    /* end of inlined section */
      if (pcVar14 == (cXCursorObjectImpl__152_907 *)0x0) break;
      pcVar13 = pcVar14->_vb905;
    }
  }
LAB_00266d30:
  AlignFloater__18cXCursorObjectImpl(this);
  return;
}

bool cXCursorObjectImpl::AttemptFloaterPlacement(FTilePt &loc, int inLevel) {
	FTilePt tileLoc;
	int savePlacementError;
	StdPrm allowedHeightFlags;
	CTilePt tile;
	ObjectIterator oi;
	Int slotCnt;
	Int slotNum;
	ObjectSlot *slot;
	ObjectSlot *this;
	Int desiredDirection;
	Int turn;
	int cnt;
	FTilePt testLoc;
	Int direction;
	Int dir;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  cXObject__21_1030 *pcVar5;
  cXObject__21_1030__vtable *pcVar6;
  cXObject__21_1030 *pcVar7;
  cXObject__21_1030__vtable *pcVar8;
  cXObject__15_2008__vtable *pcVar9;
  ulong *puVar10;
  ushort uVar11;
  void *pvVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  cXObjectImpl__152_901 *pcVar19;
  ulong in_v1;
  int iVar20;
  int iVar21;
  FTilePt tileLoc;
  CTilePt tile;
  ObjectIterator oi;
  FTilePt testLoc;
  int local_90;
  int local_8c;
  
  pcVar19 = this->fFloater;
  puVar1 = (undefined *)((int)&(loc->x).whole + 3);
  uVar14 = (uint)puVar1 & 7;
  uVar2 = (uint)loc & 7;
  tileLoc = (FTilePt)((*(long *)(puVar1 + -uVar14) << (7 - uVar14) * 8 |
                      in_v1 & 0xffffffffffffffffU >> (uVar14 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                     *(ulong *)((int)loc - uVar2) >> uVar2 * 8);
  puVar1 = (undefined *)((int)&tileLoc.x.whole + 3);
  uVar14 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar14);
  *puVar10 = *puVar10 & -1L << (uVar14 + 1) * 8 | (ulong)tileLoc >> (7 - uVar14) * 8;
  if (pcVar19 != (cXObjectImpl__152_901 *)0x0) {
                    /* inlined from SCID.h */
    pvVar12 = _dyncastimpl__7TreeSim4SCID(pcVar19->_vb966->_vb899,cXPortalImplID);
                    /* end of inlined section */
    if (pvVar12 == (void *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
      tileLoc = (FTilePt)((ulong)tileLoc & 0xfffffff0 |
                          (ulong)(tileLoc.x.whole & 0xfffffff0U | 8) << 0x20 | 8);
                    /* end of inlined section */
      pcVar19 = this->fFloater;
    }
    else {
      pcVar19 = this->fFloater;
    }
    if (pcVar19 == (cXObjectImpl__152_901 *)0x0) {
      return false;
    }
    pcVar5 = pcVar19->_vb966;
    pcVar6 = pcVar5->__vtable;
    pcVar7 = this->_vb905->_vb901->_vb966;
    sVar4 = *(short *)&pcVar6->GetRequiredSegment;
    pcVar8 = pcVar7->__vtable;
    uVar16 = (*(code *)pcVar8[1].GetLightingContribution)
                       ((int)&pcVar7->_vb899 + (int)*(short *)&pcVar8[1].CanContributeLight,
                        this->fTestContainerID);
    lVar17 = (*(code *)pcVar6->CountObjectSlots)
                       ((int)&pcVar5->_vb899 + (int)sVar4,&tileLoc,inLevel,uVar16,this->fTestSlotNum
                       );
    if (lVar17 != 0) {
      return true;
    }
    if (gPlacementError != 0xb) {
      return false;
    }
    pcVar5 = this->fFloater->_vb966;
    pcVar6 = pcVar5->__vtable;
    lVar17 = (*(code *)pcVar6[1].GetFrontFaceDirection)
                       ((int)&pcVar5->_vb899 + (int)*(short *)&pcVar6[1].GetInteractionLeader);
    iVar21 = gPlacementError;
    if (lVar17 != 0) {
      return false;
    }
    pcVar5 = this->fFloater->_vb966;
    pcVar6 = pcVar5->__vtable;
    uVar18 = (*(code *)pcVar6->ReconType)
                       ((int)&pcVar5->_vb899 + (int)*(short *)&pcVar6->ReconStream,4);
    __7CTilePtRC7FTilePti(&tile,&tileLoc,inLevel);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
    init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType(&oi,&tile,kAll);
                    /* end of inlined section */
    while (oi.fCurrent != (cXObject__15_2008 *)0x0) {
                    /* end of inlined section */
      iVar20 = 0;
      iVar13 = (*(code *)(oi.fCurrent)->__vtable[1].GetHilite)
                         ((int)&(oi.fCurrent)->_vb3534 +
                          (int)*(short *)&(oi.fCurrent)->__vtable[1].SetHilite);
      if (0 < iVar13) {
        do {
          lVar17 = (*(code *)(oi.fCurrent)->__vtable[1].GetMiscFlag)
                             ((int)&(oi.fCurrent)->_vb3534 +
                              (int)*(short *)&(oi.fCurrent)->__vtable[1].SetMiscFlag,iVar20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
          if (((lVar17 != 0) &&
              (((uint)uVar18 & (0x10000 << (*(int *)((int)lVar17 + 0x18) - 1U & 0x1f)) >> 0x10 &
               0xffff) != 0)) &&
             (pcVar5 = this->fFloater->_vb966, pcVar6 = pcVar5->__vtable,
             lVar17 = (*(code *)pcVar6->CountObjectSlots)
                                ((int)&pcVar5->_vb899 + (int)*(short *)&pcVar6->GetRequiredSegment,
                                 &tileLoc,inLevel,oi.fCurrent,iVar20), lVar17 != 0)) {
                    /* end of inlined section */
            uVar11 = (*(code *)(oi.fCurrent)->__vtable[1].UserCanPlace)
                               ((int)&(oi.fCurrent)->_vb3534 +
                                (int)*(short *)&(oi.fCurrent)->__vtable[1].IsPartOfMe);
            this->fTestContainerID = uVar11;
            this->fTestSlotNum = (ushort)iVar20;
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
                    /* end of inlined section */
            uVar14 = (*(code *)(oi.fCurrent)->__vtable->ReconType)
                               ((int)&(oi.fCurrent)->_vb3534 +
                                (int)*(short *)&(oi.fCurrent)->__vtable->ReconStream,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
                    /* end of inlined section */
            lVar17 = (*(code *)(oi.fCurrent)->__vtable[1].GetFrontFaceDirection)
                               ((int)&(oi.fCurrent)->_vb3534 +
                                (int)*(short *)&(oi.fCurrent)->__vtable[1].GetInteractionLeader);
            iVar21 = 0;
            if (lVar17 == 0) goto LAB_0026713c;
            goto LAB_00266fe0;
          }
          iVar20 = iVar20 + 1;
        } while (iVar20 < iVar13);
      }
      __pp__14ObjectIterator(&oi);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
                    /* end of inlined section */
    }
    gPlacementError = iVar21;
                    /* end of inlined section */
    if ((uVar18 != 0) && ((uVar18 & 0xfffffffffffffff7) == 0)) {
      gPlacementError = 0x24;
    }
    ___7CTilePt(&tile,2);
  }
  return false;
  while( true ) {
    iVar21 = iVar21 + 1;
    uVar14 = uVar14 + 2;
    if (3 < iVar21) break;
LAB_00266fe0:
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
                    /* end of inlined section */
    pcVar9 = (oi.fCurrent)->__vtable;
    uVar18 = (ulong)(int)pcVar9;
    uVar15 = (*(code *)pcVar9[1].UserCanDelete)
                       ((int)&(oi.fCurrent)->_vb3534 + (int)*(short *)&pcVar9[1].UserPickup);
    uVar2 = uVar15 + 7 & 7;
    uVar3 = uVar15 & 7;
    uVar18 = (*(long *)((uVar15 + 7) - uVar2) << (7 - uVar2) * 8 |
             uVar18 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)(uVar15 - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&testLoc.x.whole + 3);
    uVar2 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar2);
    *puVar10 = *puVar10 & -1L << (uVar2 + 1) * 8 | uVar18 >> (7 - uVar2) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    local_8c = 0;
    local_90 = 0;
    switch(uVar14 & 7) {
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
    testLoc.x.whole = (int)(uVar18 >> 0x20);
    testLoc.y.whole = (int)uVar18;
    testLoc = (FTilePt)CONCAT44(testLoc.x.whole + local_8c * 0x10,testLoc.y.whole + local_90 * 0x10)
    ;
                    /* end of inlined section */
    pcVar5 = this->_vb905->_vb901->_vb966;
    pcVar6 = pcVar5->__vtable;
    lVar17 = (*(code *)pcVar6[1].GetRect)
                       ((int)&pcVar5->_vb899 + (int)*(short *)&pcVar6[1].ClearIdleStatus,&testLoc,
                        inLevel);
    if (lVar17 == 0) break;
  }
  pcVar19 = this->fFloater;
  if (iVar21 == 4) {
    pcVar6 = pcVar19->_vb966->__vtable;
    uVar14 = (*(code *)pcVar6->ReconType)
                       ((int)&pcVar19->_vb966->_vb899 + (int)*(short *)&pcVar6->ReconStream,1);
LAB_0026713c:
    pcVar19 = this->fFloater;
  }
  pcVar6 = pcVar19->_vb966->__vtable;
  iVar21 = (*(code *)pcVar6->ReconType)
                     ((int)&pcVar19->_vb966->_vb899 + (int)*(short *)&pcVar6->ReconStream,1);
  pcVar5 = this->fFloater->_vb966;
  pcVar7 = this->_vb1098->_vb1079->_vb966;
  pcVar6 = pcVar5->__vtable;
  pcVar8 = pcVar7->__vtable;
  sVar4 = *(short *)&pcVar8->SetIdleStatus;
  lVar17 = (*(code *)pcVar6->ReconType)
                     ((int)&pcVar5->_vb899 + (int)*(short *)&pcVar6->ReconStream,0x17);
  if (lVar17 == 0) {
    trap(7);
  }
  (*(code *)pcVar8->ClearIdleStatus)
            ((int)&pcVar7->_vb899 + (int)sVar4,(int)(uVar14 - iVar21) / (int)lVar17);
  ___7CTilePt(&tile,2);
  return true;
}

void cXCursorObjectImpl::Reset(Boolean simonce) {
	cXCursorObjectImpl *curObj;
	cXMTObjectImpl *ptr;
	cXMTObjectImpl *ptr;
	
  short sVar1;
  cXObject__21_1030__vtable *pcVar2;
  cXObject__21_1030 *pcVar3;
  cXCursorObjectImpl__152_907 *pcVar4;
  cXObjectImpl__152_901 *pcVar5;
  cXMTObjectImpl__138_905 *pcVar6;
  ulong uVar7;
  
  Reset__14cXMTObjectImplUs(this->_vb905,simonce);
                    /* inlined from SCID.h */
  pcVar6 = this->_vb905->fLeadObject;
  if (pcVar6 == (cXMTObjectImpl__138_905 *)0x0) {
    pcVar4 = (cXCursorObjectImpl__152_907 *)0x0;
  }
  else {
    pcVar4 = (cXCursorObjectImpl__152_907 *)
             _dyncastimpl__7TreeSim4SCID(pcVar6->_vb1079->_vb966->_vb899,cXCursorObjectImplID);
  }
                    /* end of inlined section */
  if (pcVar4 == (cXCursorObjectImpl__152_907 *)0x0) {
    pcVar4 = this;
  }
  if (pcVar4 != (cXCursorObjectImpl__152_907 *)0x0) {
    pcVar5 = pcVar4->fFloater;
    while( true ) {
      if (pcVar5 == (cXObjectImpl__152_901 *)0x0) {
        pcVar6 = pcVar4->_vb905;
      }
      else {
        pcVar2 = pcVar5->_vb966->__vtable;
        (*(code *)pcVar2->RunTree)
                  ((int)&pcVar5->_vb966->_vb899 + (int)*(short *)&pcVar2->IsSpriteVisible,0);
        pcVar4->_vb905->_vb901->fData[0x17] = pcVar4->fFloater->fData[0x17];
        pcVar4->_vb905->_vb901->fData[1] = pcVar4->fFloater->fData[1];
        pcVar3 = pcVar4->fFloater->_vb966;
        pcVar2 = pcVar3->__vtable;
        sVar1 = *(short *)&pcVar2->GetDynamicToStaticLatency;
        uVar7 = (*(code *)pcVar2->GetLastDamage)
                          ((int)&pcVar3->_vb899 + (int)*(short *)&pcVar2->IsRenderingRoot);
        (*(code *)pcVar2->GetRenderLayer)((int)&pcVar3->_vb899 + (int)sVar1,uVar7 | 1);
        pcVar6 = pcVar4->_vb905;
      }
                    /* inlined from SCID.h */
      if (pcVar6->fMultiNext == (cXMTObjectImpl__138_905 *)0x0) {
        pcVar4 = (cXCursorObjectImpl__152_907 *)0x0;
      }
      else {
        pcVar4 = (cXCursorObjectImpl__152_907 *)
                 _dyncastimpl__7TreeSim4SCID
                           (pcVar6->fMultiNext->_vb1079->_vb966->_vb899,cXCursorObjectImplID);
      }
                    /* end of inlined section */
      if (pcVar4 == (cXCursorObjectImpl__152_907 *)0x0) break;
      pcVar5 = pcVar4->fFloater;
    }
  }
  AlignFloater__18cXCursorObjectImpl(this);
  return;
}

Boolean cXCursorObjectImpl::GotoNextSlot() {
  return 0;
}

void cXCursorObjectImpl::Cancel() {
  return;
}

void cXCursorObjectImpl::AssignOffsets() {
	cXMTObjectImpl *floater;
	cXCursorObjectImpl *curObj;
	cXObjectImpl *ptr;
	cXMTObjectImpl *ptr;
	cXObjectImpl *ptr;
	cXMTObjectImpl *ptr;
	
  cXObject__21_1030 *pcVar1;
  cXObject__21_1030__vtable *pcVar2;
  int iVar3;
  void *pvVar4;
  cXCursorObjectImpl__152_907 *pcVar5;
  cXObjectImpl__152_901 *pcVar6;
  cXMTObjectImpl__138_905 *pcVar7;
  long lVar8;
  
  if (this->fFloater == (cXObjectImpl__152_901 *)0x0) {
    pcVar7 = this->_vb905;
  }
  else {
    pcVar1 = this->fFloater->_vb966;
    pcVar2 = pcVar1->__vtable;
    lVar8 = (*(code *)pcVar2[1].GetFrontFaceDirection)
                      ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2[1].GetInteractionLeader);
    if (lVar8 != 0) {
                    /* inlined from SCID.h */
      if (this->fFloater == (cXObjectImpl__152_901 *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = _dyncastimpl__7TreeSim4SCID(this->fFloater->_vb966->_vb899,cXMTObjectImplID);
      }
                    /* end of inlined section */
      if (pvVar4 == (void *)0x0) {
        pcVar7 = this->_vb905;
      }
      else {
        iVar3 = *(int *)(*(int *)((int)pvVar4 + 4) + 4);
        (**(code **)(iVar3 + 0x2c))(*(int *)((int)pvVar4 + 4) + (int)*(short *)(iVar3 + 0x28));
        pcVar7 = this->_vb905;
      }
                    /* inlined from SCID.h */
      if (pcVar7->fLeadObject == (cXMTObjectImpl__138_905 *)0x0) {
        pcVar5 = (cXCursorObjectImpl__152_907 *)0x0;
      }
      else {
        pcVar5 = (cXCursorObjectImpl__152_907 *)
                 _dyncastimpl__7TreeSim4SCID
                           (pcVar7->fLeadObject->_vb1079->_vb966->_vb899,cXCursorObjectImplID);
      }
                    /* end of inlined section */
      if (pcVar5 == (cXCursorObjectImpl__152_907 *)0x0) {
        pcVar5 = this;
      }
      if (pcVar5 == (cXCursorObjectImpl__152_907 *)0x0) {
        return;
      }
                    /* inlined from SCID.h */
      pcVar6 = pcVar5->fFloater;
      while( true ) {
        if (pcVar6 == (cXObjectImpl__152_901 *)0x0) {
          pvVar4 = (void *)0x0;
        }
        else {
          pvVar4 = _dyncastimpl__7TreeSim4SCID(pcVar6->_vb966->_vb899,cXMTObjectImplID);
        }
                    /* end of inlined section */
        if (pvVar4 == (void *)0x0) {
          pcVar7 = pcVar5->_vb905;
        }
        else {
          pcVar5->_vb905->fXOff = *(int *)((int)pvVar4 + 0x1c);
          pcVar5->_vb905->fYOff = *(int *)((int)pvVar4 + 0x20);
          pcVar5->_vb905->fLevelOff = *(int *)((int)pvVar4 + 0x24);
          pcVar7 = pcVar5->_vb905;
        }
                    /* inlined from SCID.h */
        if (pcVar7->fMultiNext == (cXMTObjectImpl__138_905 *)0x0) {
          pcVar5 = (cXCursorObjectImpl__152_907 *)0x0;
        }
        else {
          pcVar5 = (cXCursorObjectImpl__152_907 *)
                   _dyncastimpl__7TreeSim4SCID
                             (pcVar7->fMultiNext->_vb1079->_vb966->_vb899,cXCursorObjectImplID);
        }
                    /* end of inlined section */
        if (pcVar5 == (cXCursorObjectImpl__152_907 *)0x0) break;
        pcVar6 = pcVar5->fFloater;
      }
      return;
    }
    pcVar7 = this->_vb905;
  }
  pcVar7->fXOff = 0;
  pcVar7->fLevelOff = 0;
  pcVar7->fYOff = 0;
  return;
}

void cXCursorObjectImpl::AlignFloater() {
	cXCursorObjectImpl *curObj;
	cXMTObjectImpl *ptr;
	cXMTObjectImpl *ptr;
	
  cXCursorObjectImpl__152_907 *pcVar1;
  cXMTObjectImpl__138_905 *pcVar2;
  cXMTObjectImpl__138_905 **ppcVar3;
  
                    /* inlined from SCID.h */
  pcVar2 = this->_vb905->fLeadObject;
  pcVar1 = this;
  if ((pcVar2 != (cXMTObjectImpl__138_905 *)0x0) &&
     (pcVar1 = (cXCursorObjectImpl__152_907 *)
               _dyncastimpl__7TreeSim4SCID(pcVar2->_vb1079->_vb966->_vb899,cXCursorObjectImplID),
     pcVar1 == (cXCursorObjectImpl__152_907 *)0x0)) {
    pcVar1 = this;
  }
  if (pcVar1 != (cXCursorObjectImpl__152_907 *)0x0) {
    pcVar2 = pcVar1->_vb905;
    while( true ) {
      if (pcVar2->fMultiNext == (cXMTObjectImpl__138_905 *)0x0) {
        ppcVar3 = (cXMTObjectImpl__138_905 **)0x0;
      }
      else {
        ppcVar3 = (cXMTObjectImpl__138_905 **)
                  _dyncastimpl__7TreeSim4SCID
                            (pcVar2->fMultiNext->_vb1079->_vb966->_vb899,cXCursorObjectImplID);
      }
                    /* end of inlined section */
      if (ppcVar3 == (cXMTObjectImpl__138_905 **)0x0) break;
      pcVar2 = *ppcVar3;
    }
  }
  return;
}

SInt32 cXCursorObjectImpl::ReconType() {
  return 0x43555253;
}

int cXCursorObjectImpl::GetDynamicToStaticLatency() {
  return 0x7fffffff;
}

void cXCursorObjectImpl::FaceDirection(Int dir) {
	FTilePt loc;
	Int rotCount;
	Int rotCount;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  cXObject__21_1030 *pcVar4;
  cXObject__21_1030__vtable *pcVar5;
  ulong *puVar6;
  cXObjectImpl__152_901 *pcVar7;
  ulong uVar8;
  long lVar9;
  cXCursorObject__152_1098 *pcVar10;
  ulong uVar11;
  int iVar12;
  FTilePt loc;
  
  uVar11 = (ulong)dir;
  if (this->fFloater == (cXObjectImpl__152_901 *)0x0) {
    iVar12 = 0;
    if ((long)(short)this->_vb905->_vb901->fData[1] != uVar11) {
      pcVar10 = this->_vb1098;
      while( true ) {
        iVar12 = iVar12 + 1;
        pcVar4 = pcVar10->_vb1079->_vb966;
        pcVar5 = pcVar4->__vtable;
        (*(code *)pcVar5->ClearIdleStatus)
                  ((int)&pcVar4->_vb899 + (int)*(short *)&pcVar5->SetIdleStatus,1);
        if ((7 < iVar12) || ((long)(short)this->_vb905->_vb901->fData[1] == uVar11)) break;
        pcVar10 = this->_vb1098;
      }
    }
  }
  else {
    uVar8 = (ulong)(short)this->fFloater->fData[1];
    iVar12 = 0;
    if (uVar8 != uVar11) {
      pcVar10 = this->_vb1098;
      puVar1 = (undefined *)((int)&(this->fLastPlace).x.whole + 3);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)&this->fLastPlace & 7;
      loc = (FTilePt)((*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                      uVar8 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                     *(ulong *)((int)&this->fLastPlace - uVar3) >> uVar3 * 8);
      puVar1 = (undefined *)((int)&loc.x.whole + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar2);
      *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | (ulong)loc >> (7 - uVar2) * 8;
      pcVar4 = pcVar10->_vb1079->_vb966;
      pcVar5 = pcVar4->__vtable;
      (*(code *)pcVar5->GetData)((int)&pcVar4->_vb899 + (int)*(short *)&pcVar5->GetRect);
      pcVar7 = this->fFloater;
      while (pcVar10 = this->_vb1098, (long)(short)pcVar7->fData[1] != uVar11) {
        iVar12 = iVar12 + 1;
        pcVar4 = pcVar10->_vb1079->_vb966;
        pcVar5 = pcVar4->__vtable;
        (*(code *)pcVar5->ClearIdleStatus)
                  ((int)&pcVar4->_vb899 + (int)*(short *)&pcVar5->SetIdleStatus,1);
        if (7 < iVar12) {
          pcVar10 = this->_vb1098;
          break;
        }
        pcVar7 = this->fFloater;
      }
      pcVar4 = pcVar10->_vb1079->_vb966;
      pcVar5 = pcVar4->__vtable;
      lVar9 = (*(code *)pcVar5->GetAttr)
                        ((int)&pcVar4->_vb899 + (int)*(short *)&pcVar5->GetTemp,&loc,
                         this->fLastLevel,0,0);
      if (lVar9 != 0) {
        pcVar4 = this->_vb1098->_vb1079->_vb966;
        pcVar5 = pcVar4->__vtable;
        (*(code *)pcVar5->GetAdultAnimTable)
                  ((int)&pcVar4->_vb899 + (int)*(short *)&pcVar5->GetModule,&loc,this->fLastLevel,0,
                   0);
      }
    }
  }
  return;
}

Int cXCursorObject::GetFrontDirection() {
  return 0;
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

void cXCursorObject::~cXCursorObject(int __in_chrg) {
	void *pAddress;
	
  cXMTObject__123_3296 *pcVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  cXMTObject__123_3296__vtable *pcVar5;
  __vtbl_ptr_type *p_Var6;
  __vtbl_ptr_type *p_Var7;
  cXObject__21_1030__vtable *pcVar8;
  __vtbl_ptr_type _Var9;
  __vtbl_ptr_type *p_Var10;
  __vtbl_ptr_type _Var11;
  cXMTObject__123_3296__vtable *pcVar12;
  __vtbl_ptr_type _Var13;
  __vtbl_ptr_type *p_Var14;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  undefined local_590 [8];
  __vtbl_ptr_type local_588 [17];
  undefined local_500 [248];
  short local_408;
  short local_400;
  short local_3f8;
  short local_3f0;
  short local_e8;
  undefined8 local_a0;
  short local_98;
  undefined8 local_90 [2];
  short local_80;
  short local_78;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined *local_20;
  undefined *puStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined *)unaff_s1;
  puStack_1c = (undefined *)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  this->__vtable = (cXCursorObject__152_1098__vtable *)_vt_14cXCursorObject;
  this->_vb1079->_vb966->_vb899->__vtable = (TreeSim__vtable *)_vt_14cXCursorObject_7TreeSim;
  this->_vb1079->_vb966->__vtable = (cXObject__21_1030__vtable *)_vt_14cXCursorObject_8cXObject;
  this->_vb1079->__vtable = (cXMTObject__123_3296__vtable *)_vt_14cXCursorObject_10cXMTObject;
  uVar2 = _vt_14cXCursorObject_7TreeSim[1].__delta;
  if (__in_chrg == 0) {
    p_Var10 = (__vtbl_ptr_type *)local_590;
    p_Var14 = _vt_14cXCursorObject_7TreeSim;
    do {
      p_Var6 = p_Var14;
      p_Var7 = p_Var10;
      _Var9 = p_Var6[1];
      _Var11 = p_Var6[2];
      _Var13 = p_Var6[3];
      *p_Var7 = *p_Var6;
      p_Var7[1] = _Var9;
      p_Var7[2] = _Var11;
      p_Var7[3] = _Var13;
      p_Var10 = p_Var7 + 4;
      p_Var14 = p_Var6 + 4;
    } while (p_Var6 + 4 != _vt_14cXCursorObject_7TreeSim + 0x10);
    pcVar1 = this->_vb1079;
    _Var9 = p_Var6[5];
    p_Var7[4] = _vt_14cXCursorObject_7TreeSim[16];
    p_Var7[5] = _Var9;
    p_Var10 = _vt_14cXCursorObject_8cXObject;
    pcVar1->_vb966->_vb899->__vtable = (TreeSim__vtable *)local_590;
    uVar4 = _vt_14cXCursorObject_8cXObject[131].__delta;
    uVar3 = _vt_14cXCursorObject_8cXObject[14].__delta;
    local_80 = (short)this;
    local_588[0].__delta = uVar2 + (local_80 - ((short)this->_vb1079->_vb966->_vb899 + -8));
    pcVar8 = (cXObject__21_1030__vtable *)local_500;
    do {
      _Var9 = p_Var10[1];
      _Var11 = p_Var10[2];
      _Var13 = p_Var10[3];
      *(__vtbl_ptr_type *)pcVar8 = *p_Var10;
      *(__vtbl_ptr_type *)&pcVar8->GetNumAttr = _Var9;
      *(__vtbl_ptr_type *)&pcVar8->CalcShortDistance = _Var11;
      *(__vtbl_ptr_type *)&pcVar8->GetSpriteSlot = _Var13;
      p_Var10 = p_Var10 + 4;
      pcVar8 = (cXObject__21_1030__vtable *)&pcVar8->GetHilite;
    } while (p_Var10 != _vt_14cXCursorObject_7TreeSim);
    this->_vb1079->_vb966->__vtable = (cXObject__21_1030__vtable *)local_500;
    uVar2 = _vt_14cXCursorObject_10cXMTObject[5].__delta;
    local_3f0 = local_80 - ((short)this->_vb1079->_vb966 + -0x28);
    local_e8 = uVar4 + local_3f0;
    local_500._112_2_ = uVar3 + local_3f0;
    local_408 = _vt_14cXCursorObject_8cXObject[31].__delta + local_3f0;
    local_400 = _vt_14cXCursorObject_8cXObject[32].__delta + local_3f0;
    local_3f8 = _vt_14cXCursorObject_8cXObject[33].__delta + local_3f0;
    local_3f0 = _vt_14cXCursorObject_8cXObject[34].__delta + local_3f0;
    pcVar5 = (cXMTObject__123_3296__vtable *)&local_a0;
    p_Var10 = _vt_14cXCursorObject_10cXMTObject;
    do {
      p_Var14 = p_Var10;
      pcVar12 = pcVar5;
      _Var11 = p_Var14[1];
      _Var13 = p_Var14[2];
      _Var9 = p_Var14[3];
      *(__vtbl_ptr_type *)pcVar12 = *p_Var14;
      *(__vtbl_ptr_type *)&pcVar12->GetFirstMultiTileObject = _Var11;
      *(__vtbl_ptr_type *)&pcVar12->Reset = _Var13;
      *(__vtbl_ptr_type *)&pcVar12->PostLoad = _Var9;
      pcVar5 = (cXMTObject__123_3296__vtable *)&pcVar12->DirtyAll;
      p_Var10 = p_Var14 + 4;
    } while (p_Var14 + 4 != _vt_14cXCursorObject_10cXMTObject + 0xc);
    _Var9 = p_Var14[5];
    *(__vtbl_ptr_type *)&pcVar12->DirtyAll = _vt_14cXCursorObject_10cXMTObject[12];
    *(__vtbl_ptr_type *)&pcVar12->MergeInPlace = _Var9;
    this->_vb1079->__vtable = (cXMTObject__123_3296__vtable *)&local_a0;
    local_80 = local_80 - ((short)this->_vb1079 + -0x30);
    local_78 = uVar2 + local_80;
    local_98 = _vt_14cXCursorObject_10cXMTObject[1].__delta + local_80;
    local_80 = _vt_14cXCursorObject_10cXMTObject[4].__delta + local_80;
  }
  if ((__in_chrg & 2U) != 0) {
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

bool FTilePt::operator==(FTilePt &inPt) {
	FInt *this;
	FInt &in;
	
  bool bVar1;
  
  bVar1 = false;
  if ((this->x).whole == (inPt->x).whole) {
    bVar1 = (this->y).whole == (inPt->y).whole;
  }
  return bVar1;
}

Boolean cXCursorObjectImpl::CanDrop() {
  ushort uVar1;
  
  uVar1 = 0;
  if (this->fFloater != (cXObjectImpl__152_901 *)0x0) {
    uVar1 = (ushort)(this->fLegalPosition != 0);
  }
  return uVar1;
}

cXObject* cXCursorObjectImpl::GetFloater() {
  cXObject__21_1030 *pcVar1;
  
  pcVar1 = (cXObject__21_1030 *)0x0;
  if (this->fFloater != (cXObjectImpl__152_901 *)0x0) {
    pcVar1 = this->fFloater->_vb966;
  }
  return pcVar1;
}

void cXCursorObjectImpl::FaceFront() {
  short sVar1;
  cXCursorObject__152_1098 *pcVar2;
  cXCursorObject__152_1098__vtable *pcVar3;
  int iVar4;
  
  pcVar2 = this->_vb1098;
  pcVar3 = pcVar2->__vtable;
  sVar1 = *(short *)&pcVar3->field_0x50;
  iVar4 = GetFrontDirection__14cXCursorObject();
  (**(code **)&pcVar3->field_0x54)((int)&pcVar2->_vb1079 + (int)sVar1,iVar4);
  return;
}

FTilePt cXCursorObjectImpl::GetLastPlace() {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong in_v1;
  ulong uVar5;
  int in_a1_lo;
  
  uVar2 = in_a1_lo + 0x17U & 7;
  uVar3 = in_a1_lo + 0x10U & 7;
  uVar5 = (*(long *)((in_a1_lo + 0x17U) - uVar2) << (7 - uVar2) * 8 |
          in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((in_a1_lo + 0x10U) - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&this->_vb1098 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar5 >> (7 - uVar2) * 8;
  uVar2 = (uint)this & 7;
  *(ulong *)((int)this - uVar2) =
       uVar5 << uVar2 * 8 | *(ulong *)((int)this - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  return (FTilePt)(long)(int)this;
}

int cXCursorObjectImpl::GetLastLevel() {
  return this->fLastLevel;
}

cXCursorObjectImpl* cXCursorObjectImpl::GetCursorObjectImplementation() {
  return this;
}

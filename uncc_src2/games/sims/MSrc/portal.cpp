// STATUS: NOT STARTED

#include "portal.h"

// warning: multiple differing types with the same name (name not equal)
struct cXPortal : virtual cXMTObject {
	cXMTObject *$vb1079;
	__vtbl_ptr_type *$vf1099;
	
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

// warning: multiple differing types with the same name (name not equal)
struct cXObjectImpl : virtual cXObject, virtual TreeSimImpl {
	TreeSimImpl *$vb1211;
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
struct cXPortalImpl : virtual cXPortal, virtual cXMTObjectImpl {
	cXMTObjectImpl *$vb905;
	cXPortal *$vb1099;
	vector<float,__malloc_alloc_template<0> > fRouteScoreTable;
	
	cXPortalImpl& operator=();
	cXPortalImpl();
	/* vtable[1] */ virtual cXPortalImpl(cXPortalImpl*, int, void);
	void SetRouteScore();
	float GetRouteScore();
	static StdPrm FindAvailRouteID(/* parameters unknown */);
	static void ClearRoute(/* parameters unknown */);
	float GetDistToPortal();
	void ApplyWallStyle();
	cXPortalImpl();
	/* vtable[34] */ virtual void Place();
	/* vtable[33] */ virtual bool CanPlace();
	/* vtable[32] */ virtual void Pickup();
	/* vtable[1] */ virtual void Initialize();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[130] */ virtual void ReconStream();
	/* vtable[6] */ virtual void PostLoad(cXPortalImpl*, int, void);
	/* vtable[1] */ virtual cXPortal* GetOtherSide();
	/* vtable[14] */ virtual int GetDynamicToStaticLatency();
	/* vtable[2] */ virtual WallStyle GetWallStyle();
	/* vtable[3] */ virtual int GetCustomWallStyleID();
	/* vtable[4] */ virtual cXPortalImpl* GetPortalImplementation();
};

struct vector<cXPortalImpl *,__malloc_alloc_template<0> > {
protected:
	cXPortalImpl **start;
	cXPortalImpl **finish;
	cXPortalImpl **end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	cXPortalImpl** begin();
	cXPortalImpl** begin();
	cXPortalImpl** end();
	cXPortalImpl** end();
	reverse_iterator<cXPortalImpl **,cXPortalImpl *,cXPortalImpl *&,int> rbegin();
	reverse_iterator<cXPortalImpl *const *,cXPortalImpl *,cXPortalImpl *const &,int> rbegin();
	reverse_iterator<cXPortalImpl **,cXPortalImpl *,cXPortalImpl *&,int> rend();
	reverse_iterator<cXPortalImpl *const *,cXPortalImpl *,cXPortalImpl *const &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	cXPortalImpl*& operator[]();
	cXPortalImpl*& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<cXPortalImpl *,__malloc_alloc_template<0> >*, int, void);
	vector<cXPortalImpl *,__malloc_alloc_template<0> >& operator=();
	void reserve();
	cXPortalImpl*& front();
	cXPortalImpl*& front();
	cXPortalImpl*& back();
	cXPortalImpl*& back();
	void push_back();
	void swap();
	cXPortalImpl** insert();
	cXPortalImpl** insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct simple_alloc<cXPortalImpl *,__malloc_alloc_template<0> > {
	simple_alloc<cXPortalImpl *,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static cXPortalImpl** allocate(/* parameters unknown */);
	static cXPortalImpl** allocate(/* parameters unknown */);
	static cXPortalImpl** allocate(/* parameters unknown */);
	static cXPortalImpl** allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

SInt16 gDrawPortalIDs = 0;
SInt16 gDrawRouteID = 0;

__vtbl_ptr_type cXPortalImpl::cXPortal virtual table[6] = {
	/* [0] = */ {
		/* .__delta = */ -68,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPortalImpl::GetOtherSide,
		/* .__delta2 = */ 4976
	},
	/* [2] = */ {
		/* .__delta = */ -68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPortalImpl::GetWallStyle,
		/* .__delta2 = */ 14216
	},
	/* [3] = */ {
		/* .__delta = */ -68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPortalImpl::GetCustomWallStyleID,
		/* .__delta2 = */ 11664
	},
	/* [4] = */ {
		/* .__delta = */ -68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPortalImpl::GetPortalImplementation,
		/* .__delta2 = */ 14272
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type cXPortalImpl::cXObjectImpl virtual table[8] = {
	/* [0] = */ {
		/* .__delta = */ -128,
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
		/* .__delta = */ -128,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPortalImpl::Initialize,
		/* .__delta2 = */ 2952
	},
	/* [4] = */ {
		/* .__delta = */ 308,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::Reset,
		/* .__delta2 = */ 28632
	},
	/* [5] = */ {
		/* .__delta = */ -128,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPortalImpl::PostLoad,
		/* .__delta2 = */ 11720
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

__vtbl_ptr_type cXPortalImpl::cXMTObject virtual table[14] = {
	/* [0] = */ {
		/* .__delta = */ -60,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -60,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPortalImpl::Initialize,
		/* .__delta2 = */ 2952
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
		/* .__delta = */ 376,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::Reset,
		/* .__delta2 = */ 28632
	},
	/* [5] = */ {
		/* .__delta = */ 376,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::AssignOffsets,
		/* .__delta2 = */ 25800
	},
	/* [6] = */ {
		/* .__delta = */ -60,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPortalImpl::PostLoad,
		/* .__delta2 = */ 11720
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

__vtbl_ptr_type cXPortalImpl::cXObject virtual table[140] = {
	/* [0] = */ {
		/* .__delta = */ -52,
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
		/* .__delta = */ -52,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPortalImpl::GetDynamicToStaticLatency,
		/* .__delta2 = */ 11608
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
		/* .__delta = */ 384,
		/* .__index = */ 0,
		/* .__pfn = */ &cXMTObjectImpl::Turn,
		/* .__delta2 = */ 25280
	},
	/* [32] = */ {
		/* .__delta = */ -52,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPortalImpl::Pickup,
		/* .__delta2 = */ 4384
	},
	/* [33] = */ {
		/* .__delta = */ -52,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPortalImpl::CanPlace,
		/* .__delta2 = */ 3648
	},
	/* [34] = */ {
		/* .__delta = */ -52,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPortalImpl::Place,
		/* .__delta2 = */ 2984
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
		/* .__delta = */ -52,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPortalImpl::ReconStream,
		/* .__delta2 = */ 5176
	},
	/* [131] = */ {
		/* .__delta = */ -52,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPortalImpl::ReconType,
		/* .__delta2 = */ 5160
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

__vtbl_ptr_type cXPortalImpl::TreeSim virtual table[18] = {
	/* [0] = */ {
		/* .__delta = */ -20,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -20,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPortalImpl::~cXPortalImpl,
		/* .__delta2 = */ -6216
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

__vtbl_ptr_type cXPortal virtual table[6] = {
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type cXPortal::cXMTObject virtual table[14] = {
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
		/* .__delta = */ -48,
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

__vtbl_ptr_type cXPortal::cXObject virtual table[140] = {
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
		/* .__delta = */ -40,
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

__vtbl_ptr_type cXPortal::TreeSim virtual table[18] = {
	/* [0] = */ {
		/* .__delta = */ -8,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -8,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPortal::~cXPortal,
		/* .__delta2 = */ -6840
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

void cXPortal::~cXPortal(int __in_chrg) {
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
  undefined local_500 [256];
  short local_400;
  short local_3f8;
  short local_3f0;
  short local_f0;
  short local_e8;
  undefined8 local_a0;
  short local_98;
  undefined8 local_90 [4];
  short local_70;
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
  this->__vtable = (cXPortal__184_1099__vtable *)_vt_8cXPortal;
  this->_vb1079->_vb966->_vb899->__vtable = (TreeSim__vtable *)_vt_8cXPortal_7TreeSim;
  this->_vb1079->_vb966->__vtable = (cXObject__21_1030__vtable *)_vt_8cXPortal_8cXObject;
  this->_vb1079->__vtable = (cXMTObject__123_3296__vtable *)_vt_8cXPortal_10cXMTObject;
  uVar2 = _vt_8cXPortal_7TreeSim[1].__delta;
  if (__in_chrg == 0) {
    p_Var10 = (__vtbl_ptr_type *)local_590;
    p_Var14 = _vt_8cXPortal_7TreeSim;
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
    } while (p_Var6 + 4 != _vt_8cXPortal_7TreeSim + 0x10);
    pcVar1 = this->_vb1079;
    _Var9 = p_Var6[5];
    p_Var7[4] = _vt_8cXPortal_7TreeSim[16];
    p_Var7[5] = _Var9;
    p_Var10 = _vt_8cXPortal_8cXObject;
    pcVar1->_vb966->_vb899->__vtable = (TreeSim__vtable *)local_590;
    uVar4 = _vt_8cXPortal_8cXObject[131].__delta;
    uVar3 = _vt_8cXPortal_8cXObject[14].__delta;
    local_98 = (short)this;
    local_588[0].__delta = uVar2 + (local_98 - ((short)this->_vb1079->_vb966->_vb899 + -8));
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
    } while (p_Var10 != _vt_8cXPortal_7TreeSim);
    this->_vb1079->_vb966->__vtable = (cXObject__21_1030__vtable *)local_500;
    uVar2 = _vt_8cXPortal_10cXMTObject[6].__delta;
    local_f0 = local_98 - ((short)this->_vb1079->_vb966 + -0x28);
    local_e8 = uVar4 + local_f0;
    local_500._112_2_ = uVar3 + local_f0;
    local_400 = _vt_8cXPortal_8cXObject[32].__delta + local_f0;
    local_3f8 = _vt_8cXPortal_8cXObject[33].__delta + local_f0;
    local_3f0 = _vt_8cXPortal_8cXObject[34].__delta + local_f0;
    local_f0 = _vt_8cXPortal_8cXObject[130].__delta + local_f0;
    pcVar5 = (cXMTObject__123_3296__vtable *)&local_a0;
    p_Var10 = _vt_8cXPortal_10cXMTObject;
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
    } while (p_Var14 + 4 != _vt_8cXPortal_10cXMTObject + 0xc);
    _Var9 = p_Var14[5];
    *(__vtbl_ptr_type *)&pcVar12->DirtyAll = _vt_8cXPortal_10cXMTObject[12];
    *(__vtbl_ptr_type *)&pcVar12->MergeInPlace = _Var9;
    this->_vb1079->__vtable = (cXMTObject__123_3296__vtable *)&local_a0;
    local_98 = local_98 - ((short)this->_vb1079 + -0x30);
    local_70 = uVar2 + local_98;
    local_98 = _vt_8cXPortal_10cXMTObject[1].__delta + local_98;
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

void cXPortalImpl::~cXPortalImpl(int __in_chrg) {
	vector<float,__malloc_alloc_template<0> > *this;
	float *last;
	float *first;
	float *pointer;
	vector<float,__malloc_alloc_template<0> > *this;
	void *pAddress;
	void *pAddress;
	
  cXPortal__184_1099 *pcVar1;
  cXMTObjectImpl__138_905 *pcVar2;
  cXObjectImpl__138_901 *pcVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined6 uVar7;
  undefined6 uVar8;
  undefined6 uVar9;
  undefined6 uVar10;
  undefined6 uVar11;
  undefined6 uVar12;
  undefined6 uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  cXMTObject__123_3296__vtable *pcVar19;
  float *pfVar20;
  __vtbl_ptr_type *p_Var21;
  __vtbl_ptr_type *p_Var22;
  __vtbl_ptr_type _Var23;
  __vtbl_ptr_type _Var24;
  __vtbl_ptr_type _Var25;
  undefined8 unaff_s0;
  cXObject__21_1030__vtable *pcVar26;
  undefined8 unaff_s1;
  __vtbl_ptr_type *p_Var27;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  cXMTObject__123_3296__vtable *pcVar28;
  __vtbl_ptr_type *p_Var29;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  undefined local_6b0 [8];
  __vtbl_ptr_type local_6a8;
  __vtbl_ptr_type local_6a0;
  __vtbl_ptr_type local_698;
  __vtbl_ptr_type local_690;
  __vtbl_ptr_type local_688;
  short local_680;
  short local_678;
  short local_670;
  short local_668;
  short local_660;
  short local_658;
  short local_650;
  short local_648;
  short local_640;
  short local_638;
  short local_630;
  undefined local_620 [8];
  undefined8 local_618;
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
  __vtbl_ptr_type local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  __vtbl_ptr_type local_128;
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
  cXPortal__184_1099__vtable *local_ac;
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
  this->_vb1099->_vb1079->_vb966->_vb899->__vtable = (TreeSim__vtable *)_vt_12cXPortalImpl_7TreeSim;
  this->_vb1099->_vb1079->_vb966->__vtable =
       (cXObject__21_1030__vtable *)_vt_12cXPortalImpl_8cXObject;
  this->_vb1099->_vb1079->__vtable = (cXMTObject__123_3296__vtable *)_vt_12cXPortalImpl_10cXMTObject
  ;
  this->_vb1099->__vtable = (cXPortal__184_1099__vtable *)_vt_12cXPortalImpl_8cXPortal;
  this->_vb905->_vb901->_vb1187->__vtable =
       (TreeSimImpl__21_3338__vtable *)_vt_14cXMTObjectImpl_11TreeSimImpl;
  this->_vb905->_vb901->__vtable =
       (cXObjectImpl__138_901__vtable *)_vt_12cXPortalImpl_12cXObjectImpl;
  uVar18 = _vt_12cXPortalImpl_7TreeSim[4].__delta;
  uVar15 = _vt_12cXPortalImpl_7TreeSim[2].__delta;
  uVar14 = _vt_12cXPortalImpl_7TreeSim[1].__delta;
  if (__in_chrg == 0) {
    local_b0 = (cXMTObject__123_3296__vtable *)&stack0xfffffe40;
    local_ac = (cXPortal__184_1099__vtable *)&local_150;
    local_a8 = (TreeSimImpl__21_3338__vtable *)&local_120;
    local_a4 = (cXObjectImpl__138_901__vtable *)&local_f0;
    p_Var27 = (__vtbl_ptr_type *)local_6b0;
    p_Var29 = _vt_12cXPortalImpl_7TreeSim;
    do {
      p_Var22 = p_Var29;
      p_Var21 = p_Var27;
      _Var23 = p_Var22[1];
      _Var24 = p_Var22[2];
      _Var25 = p_Var22[3];
      *p_Var21 = *p_Var22;
      p_Var21[1] = _Var23;
      p_Var21[2] = _Var24;
      p_Var21[3] = _Var25;
      p_Var27 = p_Var21 + 4;
      p_Var29 = p_Var22 + 4;
    } while (p_Var22 + 4 != _vt_12cXPortalImpl_7TreeSim + 0x10);
    pcVar1 = this->_vb1099;
    _Var23 = p_Var22[5];
    p_Var21[4] = (__vtbl_ptr_type)
                 CONCAT62(_vt_12cXPortalImpl_7TreeSim[16]._2_6_,
                          _vt_12cXPortalImpl_7TreeSim[16].__delta);
    p_Var27 = _vt_12cXPortalImpl_8cXObject;
    p_Var21[5] = _Var23;
    pcVar1->_vb1079->_vb966->_vb899->__vtable = (TreeSim__vtable *)local_6b0;
    uVar17 = _vt_12cXPortalImpl_8cXObject[2].__delta;
    uVar16 = _vt_12cXPortalImpl_8cXObject[1].__delta;
    pcVar2 = this->_vb905;
    sVar5 = (short)this;
    sVar4 = sVar5 - ((short)this->_vb1099->_vb1079->_vb966->_vb899 + -0x14);
    local_6a8.__delta = uVar14 + sVar4;
    local_640 = sVar5 - ((short)pcVar2->_vb901->_vb1187 + -0x4c);
    local_6a0.__delta = (uVar15 + sVar4) - local_640;
    local_678 = (_vt_12cXPortalImpl_7TreeSim[7].__delta + sVar4) - local_640;
    local_690.__delta = (uVar18 + sVar4) - local_640;
    local_688.__delta = (_vt_12cXPortalImpl_7TreeSim[5].__delta + sVar4) - local_640;
    local_680 = (_vt_12cXPortalImpl_7TreeSim[6].__delta + sVar4) - local_640;
    local_670 = (_vt_12cXPortalImpl_7TreeSim[8].__delta + sVar4) - local_640;
    local_668 = (_vt_12cXPortalImpl_7TreeSim[9].__delta + sVar4) - local_640;
    local_698.__delta =
         (_vt_12cXPortalImpl_7TreeSim[3].__delta + sVar4) -
         (sVar5 - ((short)pcVar2->_vb901 + -0x80));
    local_660 = (_vt_12cXPortalImpl_7TreeSim[10].__delta + sVar4) - local_640;
    local_630 = (_vt_12cXPortalImpl_7TreeSim[16].__delta + sVar4) -
                (sVar5 - ((short)pcVar2 + -0x1b4));
    local_658 = (_vt_12cXPortalImpl_7TreeSim[11].__delta + sVar4) - local_640;
    local_638 = (_vt_12cXPortalImpl_7TreeSim[15].__delta + sVar4) - local_640;
    local_650 = (_vt_12cXPortalImpl_7TreeSim[12].__delta + sVar4) - local_640;
    local_648 = (_vt_12cXPortalImpl_7TreeSim[13].__delta + sVar4) - local_640;
    local_640 = (_vt_12cXPortalImpl_7TreeSim[14].__delta + sVar4) - local_640;
    pcVar26 = (cXObject__21_1030__vtable *)local_620;
    do {
      _Var25 = p_Var27[1];
      _Var23 = p_Var27[2];
      _Var24 = p_Var27[3];
      *(__vtbl_ptr_type *)pcVar26 = *p_Var27;
      *(__vtbl_ptr_type *)&pcVar26->GetNumAttr = _Var25;
      *(__vtbl_ptr_type *)&pcVar26->CalcShortDistance = _Var23;
      *(__vtbl_ptr_type *)&pcVar26->GetSpriteSlot = _Var24;
      p_Var27 = p_Var27 + 4;
      pcVar26 = (cXObject__21_1030__vtable *)&pcVar26->GetHilite;
    } while (p_Var27 != _vt_12cXPortalImpl_7TreeSim);
    this->_vb1099->_vb1079->_vb966->__vtable = (cXObject__21_1030__vtable *)local_620;
    sVar4 = sVar5 - ((short)this->_vb1099->_vb1079->_vb966 + -0x34);
    local_1d8 = sVar5 - ((short)this->_vb905->_vb901 + -0x80);
    local_618._0_2_ = (uVar16 + sVar4) - local_1d8;
    local_610 = (uVar17 + sVar4) - local_1d8;
    local_608 = (_vt_12cXPortalImpl_8cXObject[3].__delta + sVar4) - local_1d8;
    local_600 = (_vt_12cXPortalImpl_8cXObject[4].__delta + sVar4) - local_1d8;
    local_5f8 = (_vt_12cXPortalImpl_8cXObject[5].__delta + sVar4) - local_1d8;
    local_5f0 = (_vt_12cXPortalImpl_8cXObject[6].__delta + sVar4) - local_1d8;
    local_5e8 = (_vt_12cXPortalImpl_8cXObject[7].__delta + sVar4) - local_1d8;
    local_5e0 = (_vt_12cXPortalImpl_8cXObject[8].__delta + sVar4) - local_1d8;
    local_5d8 = (_vt_12cXPortalImpl_8cXObject[9].__delta + sVar4) - local_1d8;
    local_5d0 = (_vt_12cXPortalImpl_8cXObject[10].__delta + sVar4) - local_1d8;
    local_5c8 = (_vt_12cXPortalImpl_8cXObject[11].__delta + sVar4) - local_1d8;
    local_5c0 = (_vt_12cXPortalImpl_8cXObject[12].__delta + sVar4) - local_1d8;
    local_5b8 = (_vt_12cXPortalImpl_8cXObject[13].__delta + sVar4) - local_1d8;
    local_500 = sVar5 - ((short)this->_vb905 + -0x1b4);
    local_5a8 = (_vt_12cXPortalImpl_8cXObject[15].__delta + sVar4) - local_1d8;
    local_5b0 = _vt_12cXPortalImpl_8cXObject[14].__delta + sVar4;
    local_5a0 = (_vt_12cXPortalImpl_8cXObject[16].__delta + sVar4) - local_1d8;
    local_598 = (_vt_12cXPortalImpl_8cXObject[17].__delta + sVar4) - local_1d8;
    local_590 = (_vt_12cXPortalImpl_8cXObject[18].__delta + sVar4) - local_1d8;
    local_588 = (_vt_12cXPortalImpl_8cXObject[19].__delta + sVar4) - local_1d8;
    local_580 = (_vt_12cXPortalImpl_8cXObject[20].__delta + sVar4) - local_1d8;
    local_578 = (_vt_12cXPortalImpl_8cXObject[21].__delta + sVar4) - local_1d8;
    local_570 = (_vt_12cXPortalImpl_8cXObject[22].__delta + sVar4) - local_1d8;
    local_568 = (_vt_12cXPortalImpl_8cXObject[23].__delta + sVar4) - local_1d8;
    local_560 = (_vt_12cXPortalImpl_8cXObject[24].__delta + sVar4) - local_1d8;
    local_558 = (_vt_12cXPortalImpl_8cXObject[25].__delta + sVar4) - local_1d8;
    local_550 = (_vt_12cXPortalImpl_8cXObject[26].__delta + sVar4) - local_1d8;
    local_548 = (_vt_12cXPortalImpl_8cXObject[27].__delta + sVar4) - local_1d8;
    local_540 = (_vt_12cXPortalImpl_8cXObject[28].__delta + sVar4) - local_1d8;
    local_538 = (_vt_12cXPortalImpl_8cXObject[29].__delta + sVar4) - local_1d8;
    local_530 = (_vt_12cXPortalImpl_8cXObject[30].__delta + sVar4) - local_1d8;
    local_4e0 = (_vt_12cXPortalImpl_8cXObject[40].__delta + sVar4) - local_500;
    local_528 = (_vt_12cXPortalImpl_8cXObject[31].__delta + sVar4) - local_500;
    local_508 = (_vt_12cXPortalImpl_8cXObject[35].__delta + sVar4) - local_500;
    local_4f8 = (_vt_12cXPortalImpl_8cXObject[37].__delta + sVar4) - local_500;
    local_4f0 = (_vt_12cXPortalImpl_8cXObject[38].__delta + sVar4) - local_500;
    local_4e8 = (_vt_12cXPortalImpl_8cXObject[39].__delta + sVar4) - local_500;
    local_520 = _vt_12cXPortalImpl_8cXObject[32].__delta + sVar4;
    local_518 = _vt_12cXPortalImpl_8cXObject[33].__delta + sVar4;
    local_510 = _vt_12cXPortalImpl_8cXObject[34].__delta + sVar4;
    local_500 = (_vt_12cXPortalImpl_8cXObject[36].__delta + sVar4) - local_500;
    local_4d8 = (_vt_12cXPortalImpl_8cXObject[41].__delta + sVar4) - local_1d8;
    local_4d0 = (_vt_12cXPortalImpl_8cXObject[42].__delta + sVar4) - local_1d8;
    local_4c8 = (_vt_12cXPortalImpl_8cXObject[43].__delta + sVar4) - local_1d8;
    local_4c0 = (_vt_12cXPortalImpl_8cXObject[44].__delta + sVar4) - local_1d8;
    local_4b8 = (_vt_12cXPortalImpl_8cXObject[45].__delta + sVar4) - local_1d8;
    local_4b0 = (_vt_12cXPortalImpl_8cXObject[46].__delta + sVar4) - local_1d8;
    local_4a8 = (_vt_12cXPortalImpl_8cXObject[47].__delta + sVar4) - local_1d8;
    local_4a0 = (_vt_12cXPortalImpl_8cXObject[48].__delta + sVar4) - local_1d8;
    local_498 = (_vt_12cXPortalImpl_8cXObject[49].__delta + sVar4) - local_1d8;
    local_490 = (_vt_12cXPortalImpl_8cXObject[50].__delta + sVar4) - local_1d8;
    local_488 = (_vt_12cXPortalImpl_8cXObject[51].__delta + sVar4) - local_1d8;
    local_480 = (_vt_12cXPortalImpl_8cXObject[52].__delta + sVar4) - local_1d8;
    local_478 = (_vt_12cXPortalImpl_8cXObject[53].__delta + sVar4) - local_1d8;
    local_470 = (_vt_12cXPortalImpl_8cXObject[54].__delta + sVar4) - local_1d8;
    local_468 = (_vt_12cXPortalImpl_8cXObject[55].__delta + sVar4) - local_1d8;
    local_460 = (_vt_12cXPortalImpl_8cXObject[56].__delta + sVar4) - local_1d8;
    local_458 = (_vt_12cXPortalImpl_8cXObject[57].__delta + sVar4) - local_1d8;
    local_450 = (_vt_12cXPortalImpl_8cXObject[58].__delta + sVar4) - local_1d8;
    local_448 = (_vt_12cXPortalImpl_8cXObject[59].__delta + sVar4) - local_1d8;
    local_440 = (_vt_12cXPortalImpl_8cXObject[60].__delta + sVar4) - local_1d8;
    local_438 = (_vt_12cXPortalImpl_8cXObject[61].__delta + sVar4) - local_1d8;
    local_430 = (_vt_12cXPortalImpl_8cXObject[62].__delta + sVar4) - local_1d8;
    local_428 = (_vt_12cXPortalImpl_8cXObject[63].__delta + sVar4) - local_1d8;
    local_420 = (_vt_12cXPortalImpl_8cXObject[64].__delta + sVar4) - local_1d8;
    local_418 = (_vt_12cXPortalImpl_8cXObject[65].__delta + sVar4) - local_1d8;
    local_410 = (_vt_12cXPortalImpl_8cXObject[66].__delta + sVar4) - local_1d8;
    local_408 = (_vt_12cXPortalImpl_8cXObject[67].__delta + sVar4) - local_1d8;
    local_400 = (_vt_12cXPortalImpl_8cXObject[68].__delta + sVar4) - local_1d8;
    local_3f8 = (_vt_12cXPortalImpl_8cXObject[69].__delta + sVar4) - local_1d8;
    local_3f0 = (_vt_12cXPortalImpl_8cXObject[70].__delta + sVar4) - local_1d8;
    local_3e8 = (_vt_12cXPortalImpl_8cXObject[71].__delta + sVar4) - local_1d8;
    local_3e0 = (_vt_12cXPortalImpl_8cXObject[72].__delta + sVar4) - local_1d8;
    local_3d8 = (_vt_12cXPortalImpl_8cXObject[73].__delta + sVar4) - local_1d8;
    local_3d0 = (_vt_12cXPortalImpl_8cXObject[74].__delta + sVar4) - local_1d8;
    local_3c8 = (_vt_12cXPortalImpl_8cXObject[75].__delta + sVar4) - local_1d8;
    local_3c0 = (_vt_12cXPortalImpl_8cXObject[76].__delta + sVar4) - local_1d8;
    local_3b8 = (_vt_12cXPortalImpl_8cXObject[77].__delta + sVar4) - local_1d8;
    local_3b0 = (_vt_12cXPortalImpl_8cXObject[78].__delta + sVar4) - local_1d8;
    local_3a8 = (_vt_12cXPortalImpl_8cXObject[79].__delta + sVar4) - local_1d8;
    local_3a0 = (_vt_12cXPortalImpl_8cXObject[80].__delta + sVar4) - local_1d8;
    local_398 = (_vt_12cXPortalImpl_8cXObject[81].__delta + sVar4) - local_1d8;
    local_390 = (_vt_12cXPortalImpl_8cXObject[82].__delta + sVar4) - local_1d8;
    local_388 = (_vt_12cXPortalImpl_8cXObject[83].__delta + sVar4) - local_1d8;
    local_380 = (_vt_12cXPortalImpl_8cXObject[84].__delta + sVar4) - local_1d8;
    local_378 = (_vt_12cXPortalImpl_8cXObject[85].__delta + sVar4) - local_1d8;
    local_370 = (_vt_12cXPortalImpl_8cXObject[86].__delta + sVar4) - local_1d8;
    local_368 = (_vt_12cXPortalImpl_8cXObject[87].__delta + sVar4) - local_1d8;
    local_360 = (_vt_12cXPortalImpl_8cXObject[88].__delta + sVar4) - local_1d8;
    local_358 = (_vt_12cXPortalImpl_8cXObject[89].__delta + sVar4) - local_1d8;
    local_350 = (_vt_12cXPortalImpl_8cXObject[90].__delta + sVar4) - local_1d8;
    local_348 = (_vt_12cXPortalImpl_8cXObject[91].__delta + sVar4) - local_1d8;
    local_340 = (_vt_12cXPortalImpl_8cXObject[92].__delta + sVar4) - local_1d8;
    local_338 = (_vt_12cXPortalImpl_8cXObject[93].__delta + sVar4) - local_1d8;
    local_330 = (_vt_12cXPortalImpl_8cXObject[94].__delta + sVar4) - local_1d8;
    local_328 = (_vt_12cXPortalImpl_8cXObject[95].__delta + sVar4) - local_1d8;
    local_320 = (_vt_12cXPortalImpl_8cXObject[96].__delta + sVar4) - local_1d8;
    local_318 = (_vt_12cXPortalImpl_8cXObject[97].__delta + sVar4) - local_1d8;
    local_310 = (_vt_12cXPortalImpl_8cXObject[98].__delta + sVar4) - local_1d8;
    local_308 = (_vt_12cXPortalImpl_8cXObject[99].__delta + sVar4) - local_1d8;
    local_300 = (_vt_12cXPortalImpl_8cXObject[100].__delta + sVar4) - local_1d8;
    local_2f8 = (_vt_12cXPortalImpl_8cXObject[101].__delta + sVar4) - local_1d8;
    local_2f0 = (_vt_12cXPortalImpl_8cXObject[102].__delta + sVar4) - local_1d8;
    local_2e8 = (_vt_12cXPortalImpl_8cXObject[103].__delta + sVar4) - local_1d8;
    local_2e0 = (_vt_12cXPortalImpl_8cXObject[104].__delta + sVar4) - local_1d8;
    local_2d8 = (_vt_12cXPortalImpl_8cXObject[105].__delta + sVar4) - local_1d8;
    local_2d0 = (_vt_12cXPortalImpl_8cXObject[106].__delta + sVar4) - local_1d8;
    local_2c8 = (_vt_12cXPortalImpl_8cXObject[107].__delta + sVar4) - local_1d8;
    local_2c0 = (_vt_12cXPortalImpl_8cXObject[108].__delta + sVar4) - local_1d8;
    local_2b8 = (_vt_12cXPortalImpl_8cXObject[109].__delta + sVar4) - local_1d8;
    local_2b0 = (_vt_12cXPortalImpl_8cXObject[110].__delta + sVar4) - local_1d8;
    local_2a8 = (_vt_12cXPortalImpl_8cXObject[111].__delta + sVar4) - local_1d8;
    local_2a0 = (_vt_12cXPortalImpl_8cXObject[112].__delta + sVar4) - local_1d8;
    local_298 = (_vt_12cXPortalImpl_8cXObject[113].__delta + sVar4) - local_1d8;
    local_290 = (_vt_12cXPortalImpl_8cXObject[114].__delta + sVar4) - local_1d8;
    local_288 = (_vt_12cXPortalImpl_8cXObject[115].__delta + sVar4) - local_1d8;
    local_238 = (_vt_12cXPortalImpl_8cXObject[125].__delta + sVar4) - local_1d8;
    local_230 = (_vt_12cXPortalImpl_8cXObject[126].__delta + sVar4) - local_1d8;
    local_228 = (_vt_12cXPortalImpl_8cXObject[127].__delta + sVar4) - local_1d8;
    local_220 = (_vt_12cXPortalImpl_8cXObject[128].__delta + sVar4) - local_1d8;
    local_218 = (_vt_12cXPortalImpl_8cXObject[129].__delta + sVar4) - local_1d8;
    local_280 = (_vt_12cXPortalImpl_8cXObject[116].__delta + sVar4) - local_1d8;
    local_278 = (_vt_12cXPortalImpl_8cXObject[117].__delta + sVar4) - local_1d8;
    local_270 = (_vt_12cXPortalImpl_8cXObject[118].__delta + sVar4) - local_1d8;
    local_268 = (_vt_12cXPortalImpl_8cXObject[119].__delta + sVar4) - local_1d8;
    local_260 = (_vt_12cXPortalImpl_8cXObject[120].__delta + sVar4) - local_1d8;
    local_258 = (_vt_12cXPortalImpl_8cXObject[121].__delta + sVar4) - local_1d8;
    local_250 = (_vt_12cXPortalImpl_8cXObject[122].__delta + sVar4) - local_1d8;
    local_248 = (_vt_12cXPortalImpl_8cXObject[123].__delta + sVar4) - local_1d8;
    local_240 = (_vt_12cXPortalImpl_8cXObject[124].__delta + sVar4) - local_1d8;
    local_210 = _vt_12cXPortalImpl_8cXObject[130].__delta + sVar4;
    local_208 = _vt_12cXPortalImpl_8cXObject[131].__delta + sVar4;
    local_200 = (_vt_12cXPortalImpl_8cXObject[132].__delta + sVar4) - local_1d8;
    local_1d0 = (_vt_12cXPortalImpl_8cXObject[138].__delta + sVar4) - local_1d8;
    local_1f8 = (_vt_12cXPortalImpl_8cXObject[133].__delta + sVar4) - local_1d8;
    local_1f0 = (_vt_12cXPortalImpl_8cXObject[134].__delta + sVar4) - local_1d8;
    local_1e8 = (_vt_12cXPortalImpl_8cXObject[135].__delta + sVar4) - local_1d8;
    local_1e0 = (_vt_12cXPortalImpl_8cXObject[136].__delta + sVar4) - local_1d8;
    local_1d8 = (_vt_12cXPortalImpl_8cXObject[137].__delta + sVar4) - local_1d8;
    p_Var27 = _vt_12cXPortalImpl_10cXMTObject;
    pcVar19 = local_b0;
    do {
      pcVar28 = pcVar19;
      p_Var29 = p_Var27;
      _Var23 = p_Var29[1];
      _Var24 = p_Var29[2];
      _Var25 = p_Var29[3];
      *(__vtbl_ptr_type *)pcVar28 = *p_Var29;
      *(__vtbl_ptr_type *)&pcVar28->GetFirstMultiTileObject = _Var23;
      *(__vtbl_ptr_type *)&pcVar28->Reset = _Var24;
      *(__vtbl_ptr_type *)&pcVar28->PostLoad = _Var25;
      p_Var27 = p_Var29 + 4;
      pcVar19 = (cXMTObject__123_3296__vtable *)&pcVar28->DirtyAll;
    } while (p_Var29 + 4 != _vt_12cXPortalImpl_10cXMTObject + 0xc);
    _Var23 = p_Var29[5];
    *(ulong *)&pcVar28->DirtyAll =
         CONCAT62(_vt_12cXPortalImpl_10cXMTObject[12]._2_6_,
                  _vt_12cXPortalImpl_10cXMTObject[12].__delta);
    *(__vtbl_ptr_type *)&pcVar28->MergeInPlace = _Var23;
    uVar14 = _vt_12cXPortalImpl_10cXMTObject[12].__delta;
    this->_vb1099->_vb1079->__vtable = local_b0;
    uVar13 = _vt_12cXPortalImpl_8cXPortal[4]._2_6_;
    uVar12 = _vt_12cXPortalImpl_8cXPortal[3]._2_6_;
    uVar11 = _vt_12cXPortalImpl_8cXPortal[2]._2_6_;
    uVar10 = _vt_12cXPortalImpl_8cXPortal[1]._2_6_;
    sVar4 = sVar5 - ((short)this->_vb1099->_vb1079 + -0x3c);
    local_160 = sVar5 - ((short)this->_vb905 + -0x1b4);
    local_1b8 = _vt_12cXPortalImpl_10cXMTObject[1].__delta + sVar4;
    local_190 = _vt_12cXPortalImpl_10cXMTObject[6].__delta + sVar4;
    local_198 = (_vt_12cXPortalImpl_10cXMTObject[5].__delta + sVar4) - local_160;
    local_188 = (_vt_12cXPortalImpl_10cXMTObject[7].__delta + sVar4) - local_160;
    local_180 = (_vt_12cXPortalImpl_10cXMTObject[8].__delta + sVar4) - local_160;
    local_178 = (_vt_12cXPortalImpl_10cXMTObject[9].__delta + sVar4) - local_160;
    local_1b0 = (_vt_12cXPortalImpl_10cXMTObject[2].__delta + sVar4) - local_160;
    local_1a8 = (_vt_12cXPortalImpl_10cXMTObject[3].__delta + sVar4) - local_160;
    local_1a0 = (_vt_12cXPortalImpl_10cXMTObject[4].__delta + sVar4) - local_160;
    local_170 = (_vt_12cXPortalImpl_10cXMTObject[10].__delta + sVar4) - local_160;
    local_168 = (_vt_12cXPortalImpl_10cXMTObject[11].__delta + sVar4) - local_160;
    local_160 = (uVar14 + sVar4) - local_160;
    local_150 = _vt_12cXPortalImpl_8cXPortal[0];
    local_128 = _vt_12cXPortalImpl_8cXPortal[5];
    this->_vb1099->__vtable = local_ac;
    uVar9 = _vt_14cXMTObjectImpl_11TreeSimImpl[4]._2_6_;
    uVar8 = _vt_14cXMTObjectImpl_11TreeSimImpl[2]._2_6_;
    uVar7 = _vt_14cXMTObjectImpl_11TreeSimImpl[1]._2_6_;
    sVar4 = sVar5 - ((short)this->_vb1099 + -0x44);
    local_148 = CONCAT62(uVar10,_vt_12cXPortalImpl_8cXPortal[1].__delta + sVar4);
    local_130 = CONCAT62(uVar13,_vt_12cXPortalImpl_8cXPortal[4].__delta + sVar4);
    local_120 = _vt_14cXMTObjectImpl_11TreeSimImpl[0];
    local_140 = CONCAT62(uVar11,_vt_12cXPortalImpl_8cXPortal[2].__delta + sVar4);
    local_138 = CONCAT62(uVar12,_vt_12cXPortalImpl_8cXPortal[3].__delta + sVar4);
    local_108 = _vt_14cXMTObjectImpl_11TreeSimImpl[3];
    local_f8 = _vt_14cXMTObjectImpl_11TreeSimImpl[5];
    this->_vb905->_vb901->_vb1187->__vtable = local_a8;
    uVar12 = _vt_12cXPortalImpl_12cXObjectImpl[5]._2_6_;
    uVar11 = _vt_12cXPortalImpl_12cXObjectImpl[4]._2_6_;
    uVar15 = _vt_12cXPortalImpl_12cXObjectImpl[4].__delta;
    uVar10 = _vt_12cXPortalImpl_12cXObjectImpl[3]._2_6_;
    uVar14 = _vt_12cXPortalImpl_12cXObjectImpl[3].__delta;
    pcVar3 = this->_vb905->_vb901;
    sVar4 = sVar5 - ((short)pcVar3 + -0x80);
    sVar6 = sVar5 - ((short)pcVar3->_vb1187 + -0x4c);
    local_118 = CONCAT62(uVar7,(_vt_14cXMTObjectImpl_11TreeSimImpl[1].__delta + sVar6) - sVar4);
    local_110 = CONCAT62(uVar8,(_vt_14cXMTObjectImpl_11TreeSimImpl[2].__delta + sVar6) - sVar4);
    local_100 = CONCAT62(uVar9,(_vt_14cXMTObjectImpl_11TreeSimImpl[4].__delta + sVar6) - sVar4);
    local_b8 = _vt_12cXPortalImpl_12cXObjectImpl[7];
    local_f0 = _vt_12cXPortalImpl_12cXObjectImpl[0];
    local_e8 = _vt_12cXPortalImpl_12cXObjectImpl[1];
    local_e0 = _vt_12cXPortalImpl_12cXObjectImpl[2];
    local_c0 = _vt_12cXPortalImpl_12cXObjectImpl[6];
    this->_vb905->_vb901->__vtable = local_a4;
    sVar4 = sVar5 - ((short)this->_vb905->_vb901 + -0x80);
    local_d8 = CONCAT62(uVar10,uVar14 + sVar4);
    local_d0 = CONCAT62(uVar11,(uVar15 + sVar4) - (sVar5 - ((short)this->_vb905 + -0x1b4)));
    local_c8 = CONCAT62(uVar12,_vt_12cXPortalImpl_12cXObjectImpl[5].__delta + sVar4);
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  for (pfVar20 = (this->fRouteScoreTable).start; pfVar20 != (this->fRouteScoreTable).finish;
      pfVar20 = pfVar20 + 1) {
  }
  pfVar20 = (this->fRouteScoreTable).start;
  if ((pfVar20 != (float *)0x0) &&
     ((int)(this->fRouteScoreTable).end_of_storage - (int)pfVar20 >> 2 != 0)) {
    free(pfVar20);
  }
                    /* end of inlined section */
  if ((__in_chrg & 2U) != 0) {
    ___14cXMTObjectImpl(this->_vb905,0);
    ___12cXObjectImpl((cXObjectImpl__127_901 *)this->_vb905->_vb901,0);
    ___11TreeSimImpl(this->_vb905->_vb901->_vb1187,0);
    ___8cXPortal(this->_vb1099,0);
    ___10cXMTObject(this->_vb1099->_vb1079,0);
    ___8cXObject(this->_vb1099->_vb1079->_vb966,0);
    ___7TreeSim(this->_vb1099->_vb1079->_vb966->_vb899,0);
  }
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void cXPortalImpl::SetRouteScore(StdPrm routeID, float score) {
	vector<float,__malloc_alloc_template<0> > *this;
	vector<float,__malloc_alloc_template<0> > *this;
	unsigned int n;
	
  cXObject__21_1030 *pcVar1;
  cXObject__21_1030__vtable *pcVar2;
  float *position;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  ulong uVar3;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  float local_60 [4];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* end of inlined section */
  uVar3 = (ulong)(int)(short)routeID;
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  if ((ulong)(long)((int)(this->fRouteScoreTable).finish - (int)(this->fRouteScoreTable).start >> 2)
      < uVar3) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    position = (this->fRouteScoreTable).finish;
    while( true ) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      local_60[0] = 10001.0;
      if (position == (this->fRouteScoreTable).end_of_storage) {
        insert_aux__t6vector2ZfZt23__malloc_alloc_template1i0PfRCf
                  (&this->fRouteScoreTable,position,local_60);
      }
      else {
        *position = 10001.0;
        (this->fRouteScoreTable).finish = (this->fRouteScoreTable).finish + 1;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      if (uVar3 <= (ulong)(long)((int)(this->fRouteScoreTable).finish -
                                 (int)(this->fRouteScoreTable).start >> 2)) break;
      position = (this->fRouteScoreTable).finish;
    }
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  (this->fRouteScoreTable).start[(short)routeID + -1] = score;
  if ((long)(short)gDrawRouteID == uVar3) {
    pcVar1 = this->_vb905->_vb901->_vb966;
    pcVar2 = pcVar1->__vtable;
    (*(code *)pcVar2->RunTree)((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2->IsSpriteVisible,0);
  }
  return;
}

cXPortalImpl* cXPortalImpl::cXPortalImpl(int __in_chrg, ObjSelector *selector, cXMTObject *leader, ObjectModule *module) {
	__vtbl_ptr_type _vt$12cXPortalImpl$7TreeSim[18];
	__vtbl_ptr_type _vt$12cXPortalImpl$8cXObject[140];
	__vtbl_ptr_type _vt$12cXPortalImpl$10cXMTObject[14];
	__vtbl_ptr_type _vt$12cXPortalImpl$8cXPortal[6];
	__vtbl_ptr_type _vt$14cXMTObjectImpl$11TreeSimImpl[6];
	__vtbl_ptr_type _vt$12cXPortalImpl$12cXObjectImpl[8];
	cXObject *this;
	cXMTObject *this;
	cXPortal *this;
	cXPortal *this;
	cXPortalImpl *obj;
	cXPortalImpl *obj;
	cXMTObject *this;
	cXObject *this;
	cXPortalImpl *obj;
	cXPortalImpl *obj;
	TreeSim *this;
	
  int *piVar1;
  int **ppiVar2;
  cXPortal__184_1099 *pcVar3;
  TreeSim__vtable *pTVar4;
  cXMTObject__123_3296__vtable *pcVar5;
  __vtbl_ptr_type *p_Var6;
  undefined *this_00;
  __vtbl_ptr_type *p_Var7;
  TreeSim__vtable *pTVar8;
  __vtbl_ptr_type *p_Var9;
  cXObject__21_1030__vtable *pcVar10;
  __vtbl_ptr_type *p_Var11;
  __vtbl_ptr_type _Var12;
  __vtbl_ptr_type _Var13;
  __vtbl_ptr_type _Var14;
  cXMTObject__123_3296__vtable *pcVar15;
  __vtbl_ptr_type local_1830;
  __vtbl_ptr_type local_1828 [35];
  __vtbl_ptr_type local_1710;
  __vtbl_ptr_type local_1708 [17];
  __vtbl_ptr_type local_1680 [32];
  short local_1580;
  short local_1578;
  short local_1570;
  short local_1268;
  undefined local_c10 [8];
  undefined8 local_c08 [17];
  undefined local_b80 [256];
  short local_a80;
  short local_a78;
  short local_a70;
  short local_770;
  short local_768;
  undefined local_720 [8];
  undefined8 local_718 [5];
  short local_6f0;
  __vtbl_ptr_type _vt_12cXPortalImpl_7TreeSim [18];
  __vtbl_ptr_type _vt_12cXPortalImpl_8cXObject [140];
  __vtbl_ptr_type _vt_12cXPortalImpl_10cXMTObject [14];
  __vtbl_ptr_type _vt_12cXPortalImpl_8cXPortal [6];
  __vtbl_ptr_type _vt_14cXMTObjectImpl_11TreeSimImpl [6];
  __vtbl_ptr_type _vt_12cXPortalImpl_12cXObjectImpl [8];
  cXObjectImpl__138_901__vtable *local_b0;
  vector_float___malloc_alloc_template_0___ *local_ac;
  cXPortal__184_1099__vtable *local_a8;
  TreeSimImpl__21_3338__vtable *local_a4;
  
  if (__in_chrg != 0) {
    this_00 = &this->field_0x14;
    *(undefined **)&this->field_0x1b4 = &this->field_0x80;
    this->_vb1099 = (cXPortal__184_1099 *)&this->field_0x44;
    this->_vb905 = (cXMTObjectImpl__138_905 *)&this->field_0x1b4;
    *(undefined **)&this->field_0x4c = this_00;
    *(undefined **)&this->field_0x34 = this_00;
    *(undefined **)&this->field_0x80 = &this->field_0x4c;
    *(undefined **)&this->field_0x3c = &this->field_0x34;
    *(undefined **)&this->field_0x44 = &this->field_0x3c;
    *(undefined **)&this->field_0x84 = &this->field_0x34;
    *(undefined **)&this->field_0x1b8 = &this->field_0x3c;
    __7TreeSim((TreeSim *)this_00);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    piVar1 = *(int **)&this->field_0x84;
    *(__vtbl_ptr_type **)(*piVar1 + 0x1c) = _vt_8cXObject_7TreeSim;
    p_Var11 = &local_1830;
    p_Var9 = _vt_8cXObject_7TreeSim;
    do {
      p_Var6 = p_Var9;
      p_Var7 = p_Var11;
      _Var12 = p_Var6[1];
      _Var13 = p_Var6[2];
      _Var14 = p_Var6[3];
      *p_Var7 = *p_Var6;
      p_Var7[1] = _Var12;
      p_Var7[2] = _Var13;
      p_Var7[3] = _Var14;
      p_Var11 = p_Var7 + 4;
      p_Var9 = p_Var6 + 4;
    } while (p_Var6 + 4 != _vt_8cXObject_7TreeSim + 0x10);
    _Var12 = p_Var6[5];
    p_Var7[4] = _vt_8cXObject_7TreeSim[16];
    p_Var7[5] = _Var12;
    *(__vtbl_ptr_type **)(*piVar1 + 0x1c) = &local_1830;
    local_1828[0].__delta =
         _vt_8cXObject_7TreeSim[1].__delta + ((short)piVar1 - ((short)*piVar1 + -8));
                    /* end of inlined section */
    piVar1[1] = (int)_vt_8cXObject;
    if (__in_chrg != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
      ppiVar2 = *(int ***)&this->field_0x1b8;
      *(__vtbl_ptr_type **)(**ppiVar2 + 0x1c) = _vt_10cXMTObject_7TreeSim;
      (*ppiVar2)[1] = (int)_vt_10cXMTObject_8cXObject;
      p_Var11 = _vt_10cXMTObject_7TreeSim;
      p_Var9 = &local_1710;
      do {
        p_Var6 = p_Var9;
        p_Var7 = p_Var11;
        _Var12 = p_Var7[1];
        _Var13 = p_Var7[2];
        _Var14 = p_Var7[3];
        *p_Var6 = *p_Var7;
        p_Var6[1] = _Var12;
        p_Var6[2] = _Var13;
        p_Var6[3] = _Var14;
        p_Var11 = p_Var7 + 4;
        p_Var9 = p_Var6 + 4;
      } while (p_Var7 + 4 != _vt_10cXMTObject_7TreeSim + 0x10);
      _Var12 = p_Var7[5];
      p_Var6[4] = _vt_10cXMTObject_7TreeSim[16];
      p_Var6[5] = _Var12;
      p_Var9 = _vt_10cXMTObject_8cXObject;
      *(__vtbl_ptr_type **)(**ppiVar2 + 0x1c) = &local_1710;
      local_1708[0].__delta =
           _vt_10cXMTObject_7TreeSim[1].__delta + ((short)ppiVar2 - ((short)**ppiVar2 + -8));
      p_Var11 = local_1680;
      do {
        _Var13 = p_Var9[1];
        _Var14 = p_Var9[2];
        _Var12 = p_Var9[3];
        *p_Var11 = *p_Var9;
        p_Var11[1] = _Var13;
        p_Var11[2] = _Var14;
        p_Var11[3] = _Var12;
        p_Var9 = p_Var9 + 4;
        p_Var11 = p_Var11 + 4;
      } while (p_Var9 != _vt_10cXMTObject_7TreeSim);
      (*ppiVar2)[1] = (int)local_1680;
      local_1570 = (short)ppiVar2 - ((short)*ppiVar2 + -0x28);
      local_1268 = _vt_10cXMTObject_8cXObject[131].__delta + local_1570;
      local_1580 = _vt_10cXMTObject_8cXObject[32].__delta + local_1570;
      local_1578 = _vt_10cXMTObject_8cXObject[33].__delta + local_1570;
      local_1570 = _vt_10cXMTObject_8cXObject[34].__delta + local_1570;
                    /* end of inlined section */
      ppiVar2[1] = (int *)_vt_10cXMTObject;
      if (__in_chrg != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Portal.h */
        pcVar3 = this->_vb1099;
        pcVar3->_vb1079->_vb966->_vb899->__vtable = (TreeSim__vtable *)_vt_8cXPortal_7TreeSim;
        pcVar3->_vb1079->_vb966->__vtable = (cXObject__21_1030__vtable *)_vt_8cXPortal_8cXObject;
        pcVar3->_vb1079->__vtable = (cXMTObject__123_3296__vtable *)_vt_8cXPortal_10cXMTObject;
        p_Var11 = _vt_8cXPortal_7TreeSim;
        pTVar4 = (TreeSim__vtable *)local_c10;
        do {
          pTVar8 = pTVar4;
          p_Var9 = p_Var11;
          _Var13 = p_Var9[1];
          _Var14 = p_Var9[2];
          _Var12 = p_Var9[3];
          *(__vtbl_ptr_type *)pTVar8 = *p_Var9;
          *(__vtbl_ptr_type *)&pTVar8->Initialize = _Var13;
          *(__vtbl_ptr_type *)&pTVar8->SetError = _Var14;
          *(__vtbl_ptr_type *)&pTVar8->ClearError = _Var12;
          p_Var11 = p_Var9 + 4;
          pTVar4 = (TreeSim__vtable *)&pTVar8->GetCurElem;
        } while (p_Var9 + 4 != _vt_8cXPortal_7TreeSim + 0x10);
        _Var12 = p_Var9[5];
        *(__vtbl_ptr_type *)&pTVar8->GetCurElem = _vt_8cXPortal_7TreeSim[16];
        *(__vtbl_ptr_type *)&pTVar8->GetNthElem = _Var12;
        p_Var11 = _vt_8cXPortal_8cXObject;
        pcVar3->_vb1079->_vb966->_vb899->__vtable = (TreeSim__vtable *)local_c10;
        local_718[0]._0_2_ = (short)pcVar3;
        local_c08[0]._0_2_ =
             _vt_8cXPortal_7TreeSim[1].__delta +
             ((short)local_718[0] - ((short)pcVar3->_vb1079->_vb966->_vb899 + -8));
        pcVar10 = (cXObject__21_1030__vtable *)local_b80;
        do {
          _Var12 = p_Var11[1];
          _Var13 = p_Var11[2];
          _Var14 = p_Var11[3];
          *(__vtbl_ptr_type *)pcVar10 = *p_Var11;
          *(__vtbl_ptr_type *)&pcVar10->GetNumAttr = _Var12;
          *(__vtbl_ptr_type *)&pcVar10->CalcShortDistance = _Var13;
          *(__vtbl_ptr_type *)&pcVar10->GetSpriteSlot = _Var14;
          p_Var11 = p_Var11 + 4;
          pcVar10 = (cXObject__21_1030__vtable *)&pcVar10->GetHilite;
        } while (p_Var11 != _vt_8cXPortal_7TreeSim);
        pcVar3->_vb1079->_vb966->__vtable = (cXObject__21_1030__vtable *)local_b80;
        local_770 = (short)local_718[0] - ((short)pcVar3->_vb1079->_vb966 + -0x28);
        local_768 = _vt_8cXPortal_8cXObject[131].__delta + local_770;
        local_b80._112_2_ = _vt_8cXPortal_8cXObject[14].__delta + local_770;
        local_a80 = _vt_8cXPortal_8cXObject[32].__delta + local_770;
        local_a78 = _vt_8cXPortal_8cXObject[33].__delta + local_770;
        local_a70 = _vt_8cXPortal_8cXObject[34].__delta + local_770;
        local_770 = _vt_8cXPortal_8cXObject[130].__delta + local_770;
        pcVar5 = (cXMTObject__123_3296__vtable *)local_720;
        p_Var11 = _vt_8cXPortal_10cXMTObject;
        do {
          p_Var9 = p_Var11;
          pcVar15 = pcVar5;
          _Var12 = p_Var9[1];
          _Var13 = p_Var9[2];
          _Var14 = p_Var9[3];
          *(__vtbl_ptr_type *)pcVar15 = *p_Var9;
          *(__vtbl_ptr_type *)&pcVar15->GetFirstMultiTileObject = _Var12;
          *(__vtbl_ptr_type *)&pcVar15->Reset = _Var13;
          *(__vtbl_ptr_type *)&pcVar15->PostLoad = _Var14;
          pcVar5 = (cXMTObject__123_3296__vtable *)&pcVar15->DirtyAll;
          p_Var11 = p_Var9 + 4;
        } while (p_Var9 + 4 != _vt_8cXPortal_10cXMTObject + 0xc);
        _Var12 = p_Var9[5];
        *(__vtbl_ptr_type *)&pcVar15->DirtyAll = _vt_8cXPortal_10cXMTObject[12];
        *(__vtbl_ptr_type *)&pcVar15->MergeInPlace = _Var12;
        pcVar3->_vb1079->__vtable = (cXMTObject__123_3296__vtable *)local_720;
        local_718[0]._0_2_ = (short)local_718[0] - ((short)pcVar3->_vb1079 + -0x30);
        local_6f0 = _vt_8cXPortal_10cXMTObject[6].__delta + (short)local_718[0];
        local_718[0]._0_2_ = _vt_8cXPortal_10cXMTObject[1].__delta + (short)local_718[0];
                    /* end of inlined section */
        pcVar3->__vtable = (cXPortal__184_1099__vtable *)_vt_8cXPortal;
        if (__in_chrg != 0) {
          __11TreeSimImpli(*(TreeSimImpl__21_3338 **)&this->field_0x80,0);
          __12cXObjectImpliP11ObjSelectorP12ObjectModule
                    (*(cXObjectImpl__127_901 **)&this->field_0x1b4,0,selector,module);
          __14cXMTObjectImpliP11ObjSelectorP10cXMTObjectP12ObjectModule
                    (this->_vb905,0,selector,leader,module);
        }
      }
    }
  }
  local_ac = &this->fRouteScoreTable;
  this->_vb1099->_vb1079->_vb966->_vb899->__vtable =
       (TreeSim__vtable *)::_vt_12cXPortalImpl_7TreeSim;
  this->_vb1099->_vb1079->_vb966->__vtable =
       (cXObject__21_1030__vtable *)::_vt_12cXPortalImpl_8cXObject;
  this->_vb1099->_vb1079->__vtable =
       (cXMTObject__123_3296__vtable *)::_vt_12cXPortalImpl_10cXMTObject;
  this->_vb1099->__vtable = (cXPortal__184_1099__vtable *)::_vt_12cXPortalImpl_8cXPortal;
  this->_vb905->_vb901->_vb1187->__vtable =
       (TreeSimImpl__21_3338__vtable *)::_vt_14cXMTObjectImpl_11TreeSimImpl;
  this->_vb905->_vb901->__vtable =
       (cXObjectImpl__138_901__vtable *)::_vt_12cXPortalImpl_12cXObjectImpl;
  if (__in_chrg == 0) {
    local_a8 = (cXPortal__184_1099__vtable *)_vt_12cXPortalImpl_8cXPortal;
    local_a4 = (TreeSimImpl__21_3338__vtable *)_vt_14cXMTObjectImpl_11TreeSimImpl;
    local_b0 = (cXObjectImpl__138_901__vtable *)_vt_12cXPortalImpl_12cXObjectImpl;
    p_Var11 = ::_vt_12cXPortalImpl_7TreeSim;
    pTVar4 = (TreeSim__vtable *)_vt_12cXPortalImpl_7TreeSim;
    do {
      pTVar8 = pTVar4;
      p_Var9 = p_Var11;
      _Var13 = p_Var9[1];
      _Var14 = p_Var9[2];
      _Var12 = p_Var9[3];
      *(__vtbl_ptr_type *)pTVar8 = *p_Var9;
      *(__vtbl_ptr_type *)&pTVar8->Initialize = _Var13;
      *(__vtbl_ptr_type *)&pTVar8->SetError = _Var14;
      *(__vtbl_ptr_type *)&pTVar8->ClearError = _Var12;
      p_Var11 = p_Var9 + 4;
      pTVar4 = (TreeSim__vtable *)&pTVar8->GetCurElem;
    } while (p_Var9 + 4 != ::_vt_12cXPortalImpl_7TreeSim + 0x10);
    pcVar3 = this->_vb1099;
    _Var12 = p_Var9[5];
    *(ulong *)&pTVar8->GetCurElem =
         CONCAT62(::_vt_12cXPortalImpl_7TreeSim[16]._2_6_,::_vt_12cXPortalImpl_7TreeSim[16].__delta)
    ;
    p_Var11 = ::_vt_12cXPortalImpl_8cXObject;
    *(__vtbl_ptr_type *)&pTVar8->GetNthElem = _Var12;
    pcVar3->_vb1079->_vb966->_vb899->__vtable = (TreeSim__vtable *)_vt_12cXPortalImpl_7TreeSim;
    pcVar10 = (cXObject__21_1030__vtable *)_vt_12cXPortalImpl_8cXObject;
    do {
      _Var12 = p_Var11[1];
      _Var13 = p_Var11[2];
      _Var14 = p_Var11[3];
      *(__vtbl_ptr_type *)pcVar10 = *p_Var11;
      *(__vtbl_ptr_type *)&pcVar10->GetNumAttr = _Var12;
      *(__vtbl_ptr_type *)&pcVar10->CalcShortDistance = _Var13;
      *(__vtbl_ptr_type *)&pcVar10->GetSpriteSlot = _Var14;
      p_Var11 = p_Var11 + 4;
      pcVar10 = (cXObject__21_1030__vtable *)&pcVar10->GetHilite;
    } while (p_Var11 != ::_vt_12cXPortalImpl_7TreeSim);
    this->_vb1099->_vb1079->_vb966->__vtable =
         (cXObject__21_1030__vtable *)_vt_12cXPortalImpl_8cXObject;
    pcVar5 = (cXMTObject__123_3296__vtable *)_vt_12cXPortalImpl_10cXMTObject;
    p_Var11 = ::_vt_12cXPortalImpl_10cXMTObject;
    do {
      p_Var9 = p_Var11;
      pcVar15 = pcVar5;
      _Var12 = p_Var9[1];
      _Var13 = p_Var9[2];
      _Var14 = p_Var9[3];
      *(__vtbl_ptr_type *)pcVar15 = *p_Var9;
      *(__vtbl_ptr_type *)&pcVar15->GetFirstMultiTileObject = _Var12;
      *(__vtbl_ptr_type *)&pcVar15->Reset = _Var13;
      *(__vtbl_ptr_type *)&pcVar15->PostLoad = _Var14;
      pcVar5 = (cXMTObject__123_3296__vtable *)&pcVar15->DirtyAll;
      p_Var11 = p_Var9 + 4;
    } while (p_Var9 + 4 != ::_vt_12cXPortalImpl_10cXMTObject + 0xc);
    pcVar3 = this->_vb1099;
    _Var12 = p_Var9[5];
    *(ulong *)&pcVar15->DirtyAll =
         CONCAT62(::_vt_12cXPortalImpl_10cXMTObject[12]._2_6_,
                  ::_vt_12cXPortalImpl_10cXMTObject[12].__delta);
    *(__vtbl_ptr_type *)&pcVar15->MergeInPlace = _Var12;
    pcVar3->_vb1079->__vtable = (cXMTObject__123_3296__vtable *)_vt_12cXPortalImpl_10cXMTObject;
    this->_vb1099->__vtable = local_a8;
    this->_vb905->_vb901->_vb1187->__vtable = local_a4;
    this->_vb905->_vb901->__vtable = local_b0;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  (this->fRouteScoreTable).start = (float *)0x0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TreeSim.h */
  local_ac->end_of_storage = (float *)0x0;
  local_ac->finish = (float *)0x0;
  this->_vb1099->_vb1079->_vb966->_vb899->m_pPortal = this;
  return this;
}

void cXPortalImpl::Initialize() {
  Initialize__14cXMTObjectImpl(this->_vb905);
  return;
}

void cXPortalImpl::Place(FTilePt &newLoc, Int inLevel, cXObject *ontop, Int slotNum) {
  Place__14cXMTObjectImplRC7FTilePtiP8cXObjecti(this->_vb905,newLoc,inLevel,ontop,slotNum);
  ApplyWallStyle__12cXPortalImplb(this,true);
  DirtyAllRoutes__8cXPortalP12ObjectModule(this->_vb905->_vb901->fModule);
  return;
}

void cXPortalImpl::ApplyWallStyle(bool refreshMgr) {
	cFixedWorld *world;
	cXMTObject *obj;
	cXPortal *portal;
	cXMTObject *ptr;
	TileWallsSegment seg;
	CTilePt loc;
	TileWalls walls;
	
  short sVar1;
  cXMTObject__123_3296 *pcVar2;
  cXMTObject__123_3296__vtable *pcVar3;
  cXObject__21_1030 *pcVar4;
  cXObject__21_1030__vtable *pcVar5;
  cFixedWorld *pcVar6;
  bool bVar7;
  TreeSim **ppTVar8;
  int **ppiVar9;
  WallStyle inStyle;
  int *piVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  int iVar14;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  int iVar15;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  CTilePt loc;
  TileWalls walls;
  TileWalls TStack_e0;
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
  
  pcVar6 = _5Globs_pFixedWorld;
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  pcVar2 = this->_vb905->_vb1079;
  pcVar3 = pcVar2->__vtable;
  lVar11 = (*(code *)pcVar3->AssignOffsets)((int)&pcVar2->_vb966 + (int)*(short *)&pcVar3->Reset);
  if (lVar11 != 0) {
                    /* inlined from SCID.h */
    ppTVar8 = (TreeSim **)*(undefined4 *)lVar11;
    while( true ) {
      ppiVar9 = (int **)_dyncastimpl__7TreeSim4SCID(*ppTVar8,cXPortalID);
                    /* end of inlined section */
      lVar12 = (*(code *)ppiVar9[1][5])((int)ppiVar9 + (int)*(short *)(ppiVar9[1] + 4));
      iVar15 = (int)lVar11;
      if (lVar12 == 0) {
        iVar14 = *(int *)(iVar15 + 4);
      }
      else {
        iVar14 = *(int *)(**ppiVar9 + 4);
        lVar11 = (**(code **)(iVar14 + 0x244))(**ppiVar9 + (int)*(short *)(iVar14 + 0x240));
        if (lVar11 == 0) {
          iVar14 = *(int *)(iVar15 + 4);
        }
        else {
          iVar14 = *(int *)(**ppiVar9 + 4);
          (**(code **)(iVar14 + 0x2dc))(&loc,**ppiVar9 + (int)*(short *)(iVar14 + 0x2d8));
          lVar12 = (*(code *)pcVar6->__vtable->SetWall)
                             ((int)&pcVar6->__vtable + (int)*(short *)&pcVar6->__vtable->GetWall,
                              &loc);
          if (lVar12 == 0) {
            (*(code *)pcVar6->__vtable->ComputeArchValue)
                      (&walls,(int)&pcVar6->__vtable +
                              (int)*(short *)&pcVar6->__vtable->ComputeRooms,&loc);
            bVar7 = HasWall__C9TileWalls16TileWallsSegment(&walls,(TileWallsSegment)lVar11);
            if (bVar7) {
              inStyle = (*(code *)ppiVar9[1][5])((int)ppiVar9 + (int)*(short *)(ppiVar9[1] + 4));
              SetStyle__9TileWalls9WallStyle16TileWallsSegment
                        (&walls,inStyle,(TileWallsSegment)lVar11);
              __9TileWallsRC9TileWalls(&TStack_e0,&walls);
              (*(code *)pcVar6->__vtable->GetLightLayer)
                        ((int)&pcVar6->__vtable + (int)*(short *)&pcVar6->__vtable->GetWallManager,
                         &loc,&TStack_e0);
              if (refreshMgr) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
                piVar10 = (int *)(*(code *)_5Globs_pFixedWorld->__vtable[1].ComputeRooms)
                                           ((int)&_5Globs_pFixedWorld->__vtable +
                                            (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].
                                                            SetLightEntry);
                iVar14 = *piVar10;
                sVar1 = *(short *)(iVar14 + 0x70);
                pcVar4 = this->_vb905->_vb901->_vb966;
                pcVar5 = pcVar4->__vtable;
                uVar13 = (*(code *)pcVar5[1].GetPlacementInfo)
                                   ((int)&pcVar4->_vb899 +
                                    (int)*(short *)&pcVar5[1].FindGoodLocation);
                (**(code **)(iVar14 + 0x74))((int)piVar10 + (int)sVar1,uVar13);
              }
            }
            ___9TileWalls(&walls,2);
          }
          ___7CTilePt(&loc,2);
          iVar14 = *(int *)(iVar15 + 4);
        }
      }
      lVar11 = (**(code **)(iVar14 + 0x1c))(iVar15 + *(short *)(iVar14 + 0x18));
      if (lVar11 == 0) break;
      ppTVar8 = (TreeSim **)*(undefined4 *)lVar11;
    }
  }
  return;
}

bool cXPortalImpl::CanPlace(FTilePt &newLoc, Int inLevel, cXObject *ontop, Int slotNum) {
	FTilePt leadLoc;
	Int inX;
	Int inY;
	Int integer;
	Int integer;
	cFixedWorld *world;
	cXMTObject *obj;
	FTilePt center;
	cXPortalImpl *portal;
	cXMTObject *ptr;
	TileWallsSegment seg;
	CTilePt loc;
	TileWalls walls;
	FTilePt *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  cXMTObjectImpl__138_905 *this_00;
  cXObject__21_1030 *pcVar4;
  cXObject__21_1030__vtable *pcVar5;
  cXMTObject__123_3296 *pcVar6;
  cXMTObject__123_3296__vtable *pcVar7;
  ulong *puVar8;
  cFixedWorld *pcVar9;
  undefined uVar10;
  bool bVar11;
  int **ppiVar12;
  WallStyle WVar13;
  code *pcVar14;
  ulong uVar15;
  long lVar16;
  int iVar18;
  undefined4 *puVar19;
  FTilePt leadLoc;
  TileWalls walls;
  long lVar17;
  
  this_00 = this->_vb905;
  if ((long)(int)this_00->fLeadObject == 0) {
    bVar11 = CanPlace__14cXMTObjectImplRC7FTilePtiP8cXObjecti(this_00,newLoc,inLevel,ontop,slotNum);
    pcVar9 = _5Globs_pFixedWorld;
    if (bVar11) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      pcVar6 = this->_vb905->_vb1079;
      pcVar7 = pcVar6->__vtable;
      pcVar14 = (code *)pcVar7->AssignOffsets;
      iVar18 = (int)&pcVar6->_vb966 + (int)*(short *)&pcVar7->Reset;
      while (lVar17 = (*pcVar14)(iVar18), lVar17 != 0) {
        puVar19 = (undefined4 *)lVar17;
        ppiVar12 = (int **)_dyncastimpl__7TreeSim4SCID(*(TreeSim **)*puVar19,cXPortalImplID);
                    /* end of inlined section */
        iVar18 = ppiVar12[1][1];
        lVar17 = (**(code **)(iVar18 + 0x14))((int)ppiVar12[1] + (int)*(short *)(iVar18 + 0x10));
        if (lVar17 == 0) {
          iVar18 = puVar19[1];
        }
        else {
          iVar18 = *(int *)(*(int *)(**ppiVar12 + 4) + 4);
          lVar17 = (**(code **)(iVar18 + 0x244))
                             (*(int *)(**ppiVar12 + 4) + (int)*(short *)(iVar18 + 0x240));
          if (lVar17 != 0) {
            __7CTilePtRC7FTilePti((CTilePt *)&leadLoc,newLoc,inLevel);
            iVar18 = GetX__C7CTilePt((CTilePt *)&leadLoc);
            SetX__7CTilePti((CTilePt *)&leadLoc,iVar18 + (*ppiVar12)[7]);
            iVar18 = GetY__C7CTilePt((CTilePt *)&leadLoc);
            SetY__7CTilePti((CTilePt *)&leadLoc,iVar18 + (*ppiVar12)[8]);
            SetLevel__7CTilePti((CTilePt *)&leadLoc,inLevel + (*ppiVar12)[9]);
            lVar16 = (*(code *)pcVar9->__vtable->SetWall)
                               ((int)&pcVar9->__vtable + (int)*(short *)&pcVar9->__vtable->GetWall,
                                &leadLoc);
            if (lVar16 == 0) {
              (*(code *)pcVar9->__vtable->ComputeArchValue)
                        (&walls,(int)&pcVar9->__vtable +
                                (int)*(short *)&pcVar9->__vtable->ComputeRooms,&leadLoc);
              WVar13 = GetStyle__C9TileWalls16TileWallsSegment(&walls,(TileWallsSegment)lVar17);
              if (WVar13 != kNormalStyle) {
                gPlacementError = 0x16;
                ___9TileWalls(&walls,2);
                ___7CTilePt((CTilePt *)&leadLoc,2);
                return false;
              }
              ___9TileWalls(&walls,2);
            }
            ___7CTilePt((CTilePt *)&leadLoc,2);
          }
          iVar18 = puVar19[1];
        }
        pcVar14 = *(code **)(iVar18 + 0x1c);
        iVar18 = (int)puVar19 + (int)*(short *)(iVar18 + 0x18);
      }
      puVar1 = (undefined *)((int)&(newLoc->x).whole + 3);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)newLoc & 7;
      uVar15 = *(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 & -1L << (8 - uVar3) * 8 |
               *(ulong *)((int)newLoc - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&leadLoc.x.whole + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar2);
      *puVar8 = *puVar8 & -1L << (uVar2 + 1) * 8 | uVar15 >> (7 - uVar2) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
      leadLoc.x.whole = (int)(uVar15 >> 0x20);
      leadLoc = (FTilePt)(uVar15 & 0xfffffff0 | (ulong)(leadLoc.x.whole & 0xfffffff0U | 8) << 0x20 |
                         8);
      bVar11 = __eq__C7FTilePtRC7FTilePt(newLoc,&leadLoc);
                    /* end of inlined section */
      if (bVar11) {
        uVar10 = 1;
      }
      else {
        uVar10 = 0;
        gPlacementError = 3;
      }
    }
    else {
      uVar10 = 0;
    }
  }
  else {
    puVar1 = (undefined *)((int)&(newLoc->x).whole + 3);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)newLoc & 7;
    uVar15 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
             (long)(int)this_00->fLeadObject & 0xffffffffffffffffU >> (uVar2 + 1) * 8) &
             -1L << (8 - uVar3) * 8 | *(ulong *)((int)newLoc - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&leadLoc.x.whole + 3);
    uVar2 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar2);
    *puVar8 = *puVar8 & -1L << (uVar2 + 1) * 8 | uVar15 >> (7 - uVar2) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    leadLoc.x.whole = (int)(uVar15 >> 0x20);
    leadLoc.y.whole = (int)uVar15;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    leadLoc = (FTilePt)CONCAT44(leadLoc.x.whole + this_00->fXOff * -0x10,
                                leadLoc.y.whole + this_00->fYOff * -0x10);
                    /* end of inlined section */
    pcVar4 = this_00->fLeadObject->_vb1079->_vb966;
    pcVar5 = pcVar4->__vtable;
    uVar10 = (*(code *)pcVar5->GetAttr)
                       ((int)&pcVar4->_vb899 + (int)*(short *)&pcVar5->GetTemp,&leadLoc,
                        inLevel - this_00->fLevelOff);
  }
  return (bool)uVar10;
}

void cXPortalImpl::Pickup() {
	cFixedWorld *world;
	cXMTObject *obj;
	cXPortalImpl *portal;
	cXMTObject *ptr;
	TileWallsSegment seg;
	CTilePt loc;
	TileWalls walls;
	
  short sVar1;
  cXMTObject__123_3296 *pcVar2;
  cXMTObject__123_3296__vtable *pcVar3;
  int iVar4;
  cXObject__21_1030 *pcVar5;
  cXObject__21_1030__vtable *pcVar6;
  cFixedWorld *pcVar7;
  bool bVar8;
  TreeSim **ppTVar9;
  int **ppiVar10;
  int iVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  int iVar16;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  int iVar17;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  CTilePt loc;
  TileWalls walls;
  TileWalls TStack_c0;
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
  
  pcVar7 = _5Globs_pFixedWorld;
  local_30 = (undefined4)unaff_s5;
  uStack_2c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s6;
  uStack_1c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  pcVar2 = this->_vb905->_vb1079;
  pcVar3 = pcVar2->__vtable;
  lVar13 = (*(code *)pcVar3->AssignOffsets)((int)&pcVar2->_vb966 + (int)*(short *)&pcVar3->Reset);
  if (lVar13 != 0) {
                    /* inlined from SCID.h */
    ppTVar9 = (TreeSim **)*(undefined4 *)lVar13;
    while( true ) {
      ppiVar10 = (int **)_dyncastimpl__7TreeSim4SCID(*ppTVar9,cXPortalImplID);
                    /* end of inlined section */
      iVar17 = ppiVar10[1][1];
      lVar14 = (**(code **)(iVar17 + 0x14))((int)ppiVar10[1] + (int)*(short *)(iVar17 + 0x10));
      iVar17 = (int)lVar13;
      if (lVar14 == 0) {
        iVar16 = *(int *)(iVar17 + 4);
      }
      else {
        iVar16 = *(int *)(*(int *)(**ppiVar10 + 4) + 4);
        lVar13 = (**(code **)(iVar16 + 0x244))
                           (*(int *)(**ppiVar10 + 4) + (int)*(short *)(iVar16 + 0x240));
        if (lVar13 == 0) {
          iVar16 = *(int *)(iVar17 + 4);
        }
        else {
          iVar16 = **ppiVar10;
          iVar11 = *(int *)(iVar16 + 4);
          iVar4 = *(int *)(iVar11 + 4);
          iVar11 = (**(code **)(iVar4 + 0x2d4))(iVar11 + *(short *)(iVar4 + 0x2d0));
          __7CTilePtRC7FTilePti(&loc,(FTilePt *)(iVar16 + 200),iVar11);
          lVar14 = (*(code *)pcVar7->__vtable->SetWall)
                             ((int)&pcVar7->__vtable + (int)*(short *)&pcVar7->__vtable->GetWall,
                              &loc);
          if (lVar14 == 0) {
            (*(code *)pcVar7->__vtable->ComputeArchValue)
                      (&walls,(int)&pcVar7->__vtable +
                              (int)*(short *)&pcVar7->__vtable->ComputeRooms,&loc);
            bVar8 = HasWall__C9TileWalls16TileWallsSegment(&walls,(TileWallsSegment)lVar13);
            if (bVar8) {
              SetStyle__9TileWalls9WallStyle16TileWallsSegment
                        (&walls,kNormalStyle,(TileWallsSegment)lVar13);
              __9TileWallsRC9TileWalls(&TStack_c0,&walls);
              (*(code *)pcVar7->__vtable->GetLightLayer)
                        ((int)&pcVar7->__vtable + (int)*(short *)&pcVar7->__vtable->GetWallManager,
                         &loc,&TStack_c0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
              piVar12 = (int *)(*(code *)_5Globs_pFixedWorld->__vtable[1].ComputeRooms)
                                         ((int)&_5Globs_pFixedWorld->__vtable +
                                          (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].
                                                          SetLightEntry);
              iVar16 = *piVar12;
              sVar1 = *(short *)(iVar16 + 0x68);
              pcVar5 = this->_vb905->_vb901->_vb966;
              pcVar6 = pcVar5->__vtable;
              uVar15 = (*(code *)pcVar6[1].GetPlacementInfo)
                                 ((int)&pcVar5->_vb899 + (int)*(short *)&pcVar6[1].FindGoodLocation)
              ;
              (**(code **)(iVar16 + 0x6c))((int)piVar12 + (int)sVar1,uVar15);
            }
            ___9TileWalls(&walls,2);
          }
          ___7CTilePt(&loc,2);
          iVar16 = *(int *)(iVar17 + 4);
        }
      }
      lVar13 = (**(code **)(iVar16 + 0x1c))(iVar17 + *(short *)(iVar16 + 0x18));
      if (lVar13 == 0) break;
      ppTVar9 = (TreeSim **)*(undefined4 *)lVar13;
    }
  }
  Pickup__14cXMTObjectImpl(this->_vb905);
  DirtyAllRoutes__8cXPortalP12ObjectModule(this->_vb905->_vb901->fModule);
  return;
}

cXPortal* cXPortalImpl::GetOtherSide() {
	cXPortalImpl *opposite;
	cXMTObject *next;
	cXMTObject *ptr;
	
  cXObject__21_1030 *pcVar1;
  cXObject__21_1030__vtable *pcVar2;
  cXMTObject__123_3296 *pcVar3;
  cXPortalImpl__184_909 *pcVar4;
  cXPortal__184_1099 *pcVar5;
  long lVar6;
  cXMTObjectImpl__138_905 *pcVar7;
  
  pcVar7 = this->_vb905;
  while( true ) {
    if (pcVar7->fMultiNext == (cXMTObjectImpl__138_905 *)0x0) {
      pcVar3 = (cXMTObject__123_3296 *)0x0;
      if (pcVar7->fLeadObject != (cXMTObjectImpl__138_905 *)0x0) {
        pcVar3 = pcVar7->fLeadObject->_vb1079;
      }
    }
    else {
      pcVar3 = pcVar7->fMultiNext->_vb1079;
    }
                    /* inlined from SCID.h */
    if (pcVar3 == (cXMTObject__123_3296 *)0x0) {
      pcVar4 = (cXPortalImpl__184_909 *)0x0;
    }
    else {
      pcVar4 = (cXPortalImpl__184_909 *)
               _dyncastimpl__7TreeSim4SCID(pcVar3->_vb966->_vb899,cXPortalImplID);
    }
                    /* end of inlined section */
    if (pcVar4 == this) break;
    pcVar1 = pcVar4->_vb905->_vb901->_vb966;
    pcVar2 = pcVar1->__vtable;
    lVar6 = (*(code *)pcVar2->GetSelFile)
                      ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2->GetBehavior,0xf);
    if (lVar6 != 0) {
      pcVar5 = (cXPortal__184_1099 *)0x0;
      if (pcVar4 != (cXPortalImpl__184_909 *)0x0) {
        pcVar5 = pcVar4->_vb1099;
      }
      return pcVar5;
    }
    pcVar7 = pcVar4->_vb905;
  }
  return (cXPortal__184_1099 *)0x0;
}

SInt32 cXPortalImpl::ReconType() {
  return 0x444f4f52;
}

void cXPortalImpl::ReconStream(ReconBuffer *r, SInt32 version, bool placeHolder) {
	Int size;
	vector<float,__malloc_alloc_template<0> > *this;
	vector<float,__malloc_alloc_template<0> > *this;
	vector<float,__malloc_alloc_template<0> > *this;
	vector<float,__malloc_alloc_template<0> > *this;
	vector<float,__malloc_alloc_template<0> > *this;
	float &x;
	float &value;
	vector<float,__malloc_alloc_template<0> > *this;
	int i;
	Int t;
	
  float *pfVar1;
  int iVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  int size;
  float local_7c;
  int t;
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
  
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  ReconStream__14cXMTObjectImplP11ReconBufferib(this->_vb905,r,version,placeHolder);
  if (0xe < version) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    size = (int)(this->fRouteScoreTable).finish - (int)(this->fRouteScoreTable).start >> 2;
                    /* end of inlined section */
                    /* end of inlined section */
    ReconInt__11ReconBufferPii(r,&size,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    if ((uint)size <
        (uint)((int)(this->fRouteScoreTable).finish - (int)(this->fRouteScoreTable).start >> 2)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      pfVar1 = (this->fRouteScoreTable).finish;
                    /* end of inlined section */
      while ((this->fRouteScoreTable).finish = pfVar1 + -1,
            (uint)size <
            (uint)((int)(this->fRouteScoreTable).finish - (int)(this->fRouteScoreTable).start >> 2))
      {
        pfVar1 = (this->fRouteScoreTable).finish;
      }
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    pfVar1 = (this->fRouteScoreTable).start;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    if ((uint)((int)(this->fRouteScoreTable).finish - (int)pfVar1 >> 2) < (uint)size) {
      do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        pfVar1 = (this->fRouteScoreTable).finish;
        local_7c = 0.0;
        if (pfVar1 == (this->fRouteScoreTable).end_of_storage) {
          insert_aux__t6vector2ZfZt23__malloc_alloc_template1i0PfRCf
                    (&this->fRouteScoreTable,pfVar1,&local_7c);
        }
        else {
          *pfVar1 = 0.0;
          (this->fRouteScoreTable).finish = (this->fRouteScoreTable).finish + 1;
        }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        pfVar1 = (this->fRouteScoreTable).start;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      } while ((uint)((int)(this->fRouteScoreTable).finish - (int)pfVar1 >> 2) < (uint)size);
    }
    if (version < 0x26) {
      iVar2 = 0;
      if (0 < size) {
        do {
          t = 0;
          ReconInt__11ReconBufferPii(r,&t,1);
          iVar2 = iVar2 + 1;
        } while (iVar2 < size);
      }
    }
    else {
                    /* end of inlined section */
      ReconFloat__11ReconBufferPfi(r,pfVar1,size);
    }
  }
  return;
}

StdPrm cXPortalImpl::FindAvailRouteID(ObjectModule *module) {
	int iNumPeople;
	int iNumPortals;
	StdPrm routeID;
	int i;
	int i;
	
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int **ppiVar5;
  ObjectModule__vtable *pOVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = 0x20000;
  iVar8 = 1;
  iVar1 = (*(code *)module->__vtable->DisableBuyAndBuild)
                    ((int)&module->__vtable + (int)*(short *)&module->__vtable->FillInObjectStats);
  iVar2 = (*(code *)module->__vtable->ClearIdleStatus)
                    ((int)&module->__vtable + (int)*(short *)&module->__vtable->SetIdleStatus);
  do {
    iVar7 = 0;
    if (iVar1 < 1) {
LAB_0029169c:
      iVar7 = 0;
      if (iVar2 < 1) goto LAB_00291714;
      pOVar6 = module->__vtable;
      while( true ) {
        ppiVar5 = (int **)(*(code *)pOVar6->IsBuyAndBuildDisabled)
                                    ((int)&module->__vtable +
                                     (int)*(short *)&pOVar6->EnableBuyAndBuild,iVar7);
        iVar4 = *(int *)(**ppiVar5 + 4);
        iVar4 = (**(code **)(iVar4 + 0x20c))(**ppiVar5 + (int)*(short *)(iVar4 + 0x208),6);
        iVar7 = iVar7 + 1;
        if (iVar4 == iVar8) break;
        if (iVar2 <= iVar7) goto LAB_00291714;
        pOVar6 = module->__vtable;
      }
    }
    else {
      pOVar6 = module->__vtable;
      while( true ) {
        piVar3 = (int *)(*(code *)pOVar6->ComputeStats)
                                  ((int)&module->__vtable + (int)*(short *)&pOVar6->ShowTutorialInfo
                                   ,iVar7);
        iVar4 = *(int *)(*piVar3 + 4);
        iVar4 = (**(code **)(iVar4 + 0x20c))(*piVar3 + (int)*(short *)(iVar4 + 0x208),6);
        iVar7 = iVar7 + 1;
        if (iVar4 == iVar8) break;
        if (iVar1 <= iVar7) goto LAB_0029169c;
        pOVar6 = module->__vtable;
      }
    }
    iVar8 = iVar9 >> 0x10;
    iVar9 = iVar9 + 0x10000;
  } while (iVar8 < 10000);
  iVar8 = 0;
LAB_00291714:
  return (ushort)iVar8;
}

void cXPortal::DirtyAllRoutes(ObjectModule *module) {
	int iNumPortals;
	int i;
	cXPortalImpl *portal;
	vector<float,__malloc_alloc_template<0> > &rt;
	float *j;
	vector<float,__malloc_alloc_template<0> > *this;
	vector<float,__malloc_alloc_template<0> > *this;
	
  int iVar1;
  int iVar2;
  long lVar3;
  ObjectModule__vtable *pOVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar1 = (*(code *)module->__vtable->ClearIdleStatus)
                    ((int)&module->__vtable + (int)*(short *)&module->__vtable->SetIdleStatus);
  if (0 < iVar1) {
    pOVar4 = module->__vtable;
    while( true ) {
      lVar3 = (*(code *)pOVar4->IsBuyAndBuildDisabled)
                        ((int)&module->__vtable + (int)*(short *)&pOVar4->EnableBuyAndBuild,iVar7);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Portal.h */
      iVar2 = 0;
      if (lVar3 == 0) {
                    /* end of inlined section */
        iVar6 = 8;
      }
      else {
        iVar2 = *(int *)((int)lVar3 + 4);
        iVar2 = (**(code **)(iVar2 + 0x24))((int)lVar3 + (int)*(short *)(iVar2 + 0x20));
        iVar6 = iVar2 + 8;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      puVar5 = *(undefined4 **)(iVar2 + 8);
                    /* end of inlined section */
      iVar7 = iVar7 + 1;
      if (puVar5 != *(undefined4 **)(iVar6 + 4)) {
        *puVar5 = 0x461c4400;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
        while (puVar5 = puVar5 + 1, puVar5 != *(undefined4 **)(iVar6 + 4)) {
          *puVar5 = 0x461c4400;
        }
      }
      if (iVar1 <= iVar7) break;
      pOVar4 = module->__vtable;
    }
  }
  return;
}

bool cXPortal::InitPortalRoute(ObjectModule *module, cXObject *from, cXObject *to) {
	StdPrm routeID;
	
  ushort routeID;
  
  routeID = (*(code *)from->__vtable->ReconType)
                      ((int)&from->_vb899 + (int)*(short *)&from->__vtable->ReconStream,6,to);
  if (routeID == 0) {
    routeID = FindAvailRouteID__12cXPortalImplP12ObjectModule(module);
    (*(code *)from->__vtable->GetObstacleAtLocation)
              ((int)&from->_vb899 + (int)*(short *)&from->__vtable->GetRelMatrix,6,routeID);
  }
  ClearRoute__12cXPortalImplP12ObjectModulesf(module,routeID,10001.0);
  return true;
}

float cXPortalImpl::GetDistToPortal(cXPortal *other) {
	StdPrm routeID;
	cXPortalImpl *this;
	StdPrm routeID;
	unsigned int n;
	vector<cXPortalImpl *,__malloc_alloc_template<0> > open;
	cXPortalImpl *p;
	cXPortal *opp;
	int iNumPortals;
	int i;
	int i;
	int s;
	unsigned int n;
	cXPortalImpl *this;
	StdPrm routeID;
	unsigned int n;
	unsigned int n;
	cXPortalImpl *this;
	StdPrm routeID;
	unsigned int n;
	unsigned int n;
	vector<cXPortalImpl *,__malloc_alloc_template<0> > *this;
	vector<cXPortalImpl *,__malloc_alloc_template<0> > *this;
	vector<cXPortalImpl *,__malloc_alloc_template<0> > *this;
	cXPortalImpl **result;
	cXPortalImpl **first;
	ptrdiff_t n;
	cXPortalImpl *portal;
	float dist;
	cXPortalImpl *this;
	StdPrm routeID;
	unsigned int n;
	cXPortalImpl *this;
	StdPrm routeID;
	vector<float,__malloc_alloc_template<0> > *this;
	vector<float,__malloc_alloc_template<0> > *this;
	vector<float,__malloc_alloc_template<0> > *this;
	cXPortalImpl *this;
	StdPrm routeID;
	cXPortalImpl *this;
	StdPrm routeID;
	cXPortalImpl *&x;
	cXPortalImpl *&value;
	vector<cXPortalImpl *,__malloc_alloc_template<0> > *this;
	cXPortalImpl **first;
	cXPortalImpl **pointer;
	vector<cXPortalImpl *,__malloc_alloc_template<0> > *this;
	void *pAddress;
	cXPortal *this;
	StdPrm routeID;
	unsigned int n;
	
  cXObject__21_1030 *pcVar1;
  cXObject__21_1030__vtable *pcVar2;
  float *pfVar3;
  cXPortalImpl__184_909 *pcVar4;
  cXPortalImpl__184_909 *pcVar5;
  cXPortal__184_1099__vtable *pcVar6;
  ObjectModule *pOVar7;
  ObjectModule__vtable *pOVar8;
  int iVar9;
  ushort uVar10;
  float *pfVar11;
  cXPortal__184_1099 *pcVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  cXMTObjectImpl__138_905 *pcVar17;
  cXPortalImpl__184_909 **ppcVar18;
  cXPortalImpl__184_909 **ppcVar19;
  ulong uVar20;
  int iVar21;
  cXObject__21_1030 *pcVar22;
  undefined8 unaff_s0;
  int iVar23;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar24;
  float fVar25;
  vector_cXPortalImpl_____malloc_alloc_template_0___ open;
  cXPortalImpl__184_909 *local_c0;
  cXPortalImpl__184_909 *portal;
  cXPortal__184_1099 *local_b8;
  int iNumPortals;
  undefined4 local_b0;
  undefined4 uStack_ac;
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
  
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  pcVar1 = this->_vb905->_vb901->_vb966;
  pcVar2 = pcVar1->__vtable;
  local_b8 = other;
  uVar14 = (*(code *)pcVar2->ReconType)
                     ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2->ReconStream,6);
  if (uVar14 == 0) {
    uVar10 = FindAvailRouteID__12cXPortalImplP12ObjectModule(this->_vb905->_vb901->fModule);
    uVar14 = (ulong)(short)uVar10;
    pcVar1 = this->_vb905->_vb901->_vb966;
    pcVar2 = pcVar1->__vtable;
    (*(code *)pcVar2->GetObstacleAtLocation)
              ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2->GetRelMatrix,6,uVar14);
    ClearRoute__12cXPortalImplP12ObjectModulesf(this->_vb905->_vb901->fModule,uVar10,10001.0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    pfVar11 = (this->fRouteScoreTable).finish;
  }
  else {
    pfVar11 = (this->fRouteScoreTable).finish;
  }
  pfVar3 = (this->fRouteScoreTable).start;
  uVar20 = (ulong)((int)pfVar11 - (int)pfVar3 >> 2);
                    /* end of inlined section */
  iVar23 = (int)uVar14;
  if (uVar20 < uVar14) {
    pcVar17 = this->_vb905;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/PortalImpl.h */
    if (((long)uVar14 < 1) || (uVar20 < (uVar14 & 0xffff))) {
      fVar24 = 0.0;
    }
    else {
      fVar24 = pfVar3[iVar23 + -1];
    }
                    /* end of inlined section */
    if (fVar24 != 10001.0) goto LAB_00291e78;
    pcVar17 = this->_vb905;
  }
  uVar10 = (ushort)uVar14;
  ClearRoute__12cXPortalImplP12ObjectModulesf(pcVar17->_vb901->fModule,uVar10,10000.0);
  SetRouteScore__12cXPortalImplsf(this,uVar10,0.0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  open.start = (cXPortalImpl__184_909 **)0x0;
  open.finish = (cXPortalImpl__184_909 **)0x0;
  open.end_of_storage = (cXPortalImpl__184_909 **)0x0;
  local_c0 = this;
  insert_aux__t6vector2ZP12cXPortalImplZt23__malloc_alloc_template1i0PP12cXPortalImplRCP12cXPortalImpl
            (&open,(cXPortalImpl__184_909 **)0x0,&local_c0);
                    /* end of inlined section */
LAB_00291e08:
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  ppcVar18 = open.start;
  if ((int)open.finish - (int)open.start >> 2 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    iVar13 = (int)open.finish - (int)open.start >> 2;
                    /* end of inlined section */
    iVar21 = iVar13 + -2;
    iVar13 = iVar13 + -1;
    if (-1 < iVar21) {
      ppcVar18 = open.start + iVar21;
      do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        if (((long)uVar14 < 1) ||
           (pfVar11 = ((*ppcVar18)->fRouteScoreTable).start,
           (ulong)(long)((int)((*ppcVar18)->fRouteScoreTable).finish - (int)pfVar11 >> 2) <
           (uVar14 & 0xffff))) {
          fVar24 = 0.0;
        }
        else {
          fVar24 = pfVar11[iVar23 + -1];
        }
        if (((long)uVar14 < 1) ||
           (pfVar11 = (open.start[iVar13]->fRouteScoreTable).start,
           (ulong)(long)((int)(open.start[iVar13]->fRouteScoreTable).finish - (int)pfVar11 >> 2) <
           (uVar14 & 0xffff))) {
          fVar25 = 0.0;
        }
        else {
          fVar25 = pfVar11[iVar23 + -1];
        }
        if (fVar24 < fVar25) {
          iVar13 = iVar21;
        }
        iVar21 = iVar21 + -1;
        ppcVar18 = ppcVar18 + -1;
      } while (-1 < iVar21);
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    ppcVar18 = open.start + iVar13;
    ppcVar19 = ppcVar18 + 1;
    pcVar4 = *ppcVar18;
    if (ppcVar19 != open.finish) {
      for (iVar13 = (int)open.finish - (int)ppcVar19 >> 2; 0 < iVar13; iVar13 = iVar13 + -1) {
        pcVar5 = *ppcVar19;
        ppcVar19 = ppcVar19 + 1;
        *ppcVar18 = pcVar5;
        ppcVar18 = ppcVar18 + 1;
      }
    }
                    /* end of inlined section */
    iVar13 = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    open.finish = open.finish + -1;
                    /* end of inlined section */
    pcVar6 = pcVar4->_vb1099->__vtable;
    pcVar12 = (cXPortal__184_1099 *)
              (*(code *)pcVar6->GetCustomWallStyleID)
                        ((int)&pcVar4->_vb1099->_vb1079 + (int)*(short *)&pcVar6->GetWallStyle);
    pOVar7 = this->_vb905->_vb901->fModule;
    pOVar8 = pOVar7->__vtable;
    lVar15 = (*(code *)pOVar8->ClearIdleStatus)
                       ((int)&pOVar7->__vtable + (int)*(short *)&pOVar8->SetIdleStatus);
    iNumPortals = (int)lVar15;
    if (0 < lVar15) {
      iVar21 = iVar23 + -1;
      uVar20 = uVar14 & 0xffff;
      pcVar17 = this->_vb905;
      do {
        pOVar7 = pcVar17->_vb901->fModule;
        pOVar8 = pOVar7->__vtable;
        lVar15 = (*(code *)pOVar8->IsBuyAndBuildDisabled)
                           ((int)&pOVar7->__vtable + (int)*(short *)&pOVar8->EnableBuyAndBuild,
                            iVar13);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Portal.h */
        if (lVar15 == 0) {
          portal = (cXPortalImpl__184_909 *)0x0;
        }
        else {
          iVar9 = *(int *)((int)lVar15 + 4);
          portal = (cXPortalImpl__184_909 *)
                   (**(code **)(iVar9 + 0x24))((int)lVar15 + (int)*(short *)(iVar9 + 0x20));
        }
                    /* end of inlined section */
        pcVar1 = portal->_vb905->_vb901->_vb966;
        pcVar2 = pcVar1->__vtable;
        lVar15 = (*(code *)pcVar2[1].ParseUIString)
                           ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2[1].RunTree);
        pcVar1 = pcVar4->_vb905->_vb901->_vb966;
        pcVar2 = pcVar1->__vtable;
        lVar16 = (*(code *)pcVar2[1].ParseUIString)
                           ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2[1].RunTree);
        if (lVar15 == lVar16) {
LAB_00291c78:
                    /* inlined from c:/eor/src2/games/sims/MSrc/PortalImpl.h */
          if (((long)uVar14 < 1) ||
             (pfVar11 = (portal->fRouteScoreTable).start,
             (ulong)(long)((int)(portal->fRouteScoreTable).finish - (int)pfVar11 >> 2) < uVar20)) {
            fVar24 = 0.0;
          }
          else {
            fVar24 = pfVar11[iVar21];
          }
                    /* inlined from c:/eor/src2/games/sims/MSrc/PortalImpl.h */
          if (((long)uVar14 < 1) ||
             (pfVar11 = (pcVar4->fRouteScoreTable).start,
             (ulong)(long)((int)(pcVar4->fRouteScoreTable).finish - (int)pfVar11 >> 2) < uVar20)) {
            fVar25 = 0.0;
          }
          else {
            fVar25 = pfVar11[iVar21];
          }
          if (fVar25 < fVar24) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/PortalImpl.h */
            if (((long)uVar14 < 1) ||
               (pfVar11 = (pcVar4->fRouteScoreTable).start,
               (ulong)(long)((int)(pcVar4->fRouteScoreTable).finish - (int)pfVar11 >> 2) < uVar20))
            {
              fVar24 = 0.0;
            }
            else {
              fVar24 = pfVar11[iVar21];
            }
                    /* end of inlined section */
            pcVar1 = pcVar4->_vb905->_vb901->_vb966;
            pcVar2 = pcVar1->__vtable;
            if (portal == (cXPortalImpl__184_909 *)0x0) {
              pcVar22 = (cXObject__21_1030 *)0x0;
            }
            else {
              pcVar22 = portal->_vb1099->_vb1079->_vb966;
            }
            fVar25 = (float)(*(code *)pcVar2->SetMiscFlag)
                                      ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2->GetHilite,
                                       pcVar22);
                    /* inlined from c:/eor/src2/games/sims/MSrc/PortalImpl.h */
            fVar24 = fVar24 + fVar25 + 1.0;
            if (((long)uVar14 < 1) ||
               (pfVar11 = (portal->fRouteScoreTable).start,
               (ulong)(long)((int)(portal->fRouteScoreTable).finish - (int)pfVar11 >> 2) < uVar20))
            {
              fVar25 = 0.0;
            }
            else {
              fVar25 = pfVar11[iVar21];
            }
            if (fVar24 < fVar25) {
              SetRouteScore__12cXPortalImplsf(portal,uVar10,fVar24);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
              if (open.finish == open.end_of_storage) {
                insert_aux__t6vector2ZP12cXPortalImplZt23__malloc_alloc_template1i0PP12cXPortalImplRCP12cXPortalImpl
                          (&open,open.finish,&portal);
              }
              else {
                *open.finish = portal;
                open.finish = open.finish + 1;
              }
            }
          }
        }
        else if (portal == (cXPortalImpl__184_909 *)0x0) {
          if (pcVar12 == (cXPortal__184_1099 *)0x0) goto LAB_00291c78;
        }
        else if (portal->_vb1099 == pcVar12) goto LAB_00291c78;
        iVar13 = iVar13 + 1;
        if (iNumPortals <= iVar13) break;
        pcVar17 = this->_vb905;
      } while( true );
    }
    goto LAB_00291e08;
  }
  for (; ppcVar18 != open.finish; ppcVar18 = ppcVar18 + 1) {
  }
  if ((open.start != (cXPortalImpl__184_909 **)0x0) &&
     ((int)open.end_of_storage - (int)open.start >> 2 != 0)) {
    free(open.start);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Portal.h */
  }
LAB_00291e78:
  if (local_b8 == (cXPortal__184_1099 *)0x0) {
    iVar13 = 0;
  }
  else {
    iVar13 = (**(code **)&local_b8->__vtable->field_0x24)
                       ((int)&local_b8->_vb1079 + (int)*(short *)&local_b8->__vtable->field_0x20);
  }
  if (0 < (long)uVar14) {
    if ((uVar14 & 0xffff) <= (ulong)(long)(*(int *)(iVar13 + 0xc) - *(int *)(iVar13 + 8) >> 2)) {
      return *(float *)(*(int *)(iVar13 + 8) + (iVar23 + -1) * 4);
    }
  }
                    /* end of inlined section */
  return 0.0;
}

float cXPortal::EstimateDistance(ObjectModule *module, cXObject *from, cXObject *to) {
	float bestDist;
	int iNumPortals;
	int i;
	int j;
	cXPortalImpl *p1;
	float baseDist;
	cXPortal *p2;
	float dist;
	
  cXObject__21_1030 *pcVar1;
  cXObject__21_1030__vtable *pcVar2;
  int iVar3;
  cXPortalImpl__184_909 *this;
  cXPortal__184_1099 *other;
  long lVar4;
  long lVar5;
  ObjectModule__vtable *pOVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar8 = 0;
  fVar12 = 10000.0;
  iVar3 = (*(code *)module->__vtable->ClearIdleStatus)
                    ((int)&module->__vtable + (int)*(short *)&module->__vtable->SetIdleStatus);
  if (0 < iVar3) {
    pOVar6 = module->__vtable;
    while( true ) {
      lVar4 = (*(code *)pOVar6->IsBuyAndBuildDisabled)
                        ((int)&module->__vtable + (int)*(short *)&pOVar6->EnableBuyAndBuild,iVar8);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Portal.h */
      this = (cXPortalImpl__184_909 *)0x0;
      if (lVar4 != 0) {
        iVar7 = *(int *)((int)lVar4 + 4);
        this = (cXPortalImpl__184_909 *)
               (**(code **)(iVar7 + 0x24))((int)lVar4 + (int)*(short *)(iVar7 + 0x20));
      }
                    /* end of inlined section */
      iVar8 = iVar8 + 1;
      pcVar1 = this->_vb905->_vb901->_vb966;
      pcVar2 = pcVar1->__vtable;
      lVar4 = (*(code *)pcVar2[1].ParseUIString)
                        ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2[1].RunTree);
      lVar5 = (*(code *)from->__vtable[1].ParseUIString)
                        ((int)&from->_vb899 + (int)*(short *)&from->__vtable[1].RunTree);
      if (lVar4 == lVar5) {
        iVar7 = 0;
        pcVar1 = this->_vb905->_vb901->_vb966;
        pcVar2 = pcVar1->__vtable;
        fVar9 = (float)(*(code *)pcVar2->SetMiscFlag)
                                 ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2->GetHilite,from);
        if (0 < iVar3) {
          pOVar6 = module->__vtable;
          while( true ) {
            other = (cXPortal__184_1099 *)
                    (*(code *)pOVar6->IsBuyAndBuildDisabled)
                              ((int)&module->__vtable + (int)*(short *)&pOVar6->EnableBuyAndBuild,
                               iVar7);
            pcVar1 = other->_vb1079->_vb966;
            pcVar2 = pcVar1->__vtable;
            lVar4 = (*(code *)pcVar2[1].ParseUIString)
                              ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2[1].RunTree);
            lVar5 = (*(code *)to->__vtable[1].ParseUIString)
                              ((int)&to->_vb899 + (int)*(short *)&to->__vtable[1].RunTree);
            if (lVar4 == lVar5) {
              fVar10 = GetDistToPortal__12cXPortalImplP8cXPortal(this,other);
              pcVar1 = other->_vb1079->_vb966;
              pcVar2 = pcVar1->__vtable;
              fVar11 = (float)(*(code *)pcVar2->SetMiscFlag)
                                        ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2->GetHilite,to
                                        );
              fVar11 = fVar9 + fVar10 + fVar11;
              if (fVar11 < fVar12) {
                fVar12 = fVar11;
              }
            }
            iVar7 = iVar7 + 1;
            if (iVar3 <= iVar7) break;
            pOVar6 = module->__vtable;
          }
        }
      }
      if (iVar3 <= iVar8) break;
      pOVar6 = module->__vtable;
    }
  }
  return fVar12;
}

void cXPortalImpl::ClearRoute(ObjectModule *module, StdPrm routeID, float score) {
	int iNumPortals;
	int i;
	cXPortalImpl *portal;
	
  int iVar1;
  int iVar2;
  cXPortalImpl__184_909 *this;
  long lVar3;
  ObjectModule__vtable *pOVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar2 = (*(code *)module->__vtable->ClearIdleStatus)
                    ((int)&module->__vtable + (int)*(short *)&module->__vtable->SetIdleStatus);
  if (0 < iVar2) {
    pOVar4 = module->__vtable;
    while( true ) {
      lVar3 = (*(code *)pOVar4->IsBuyAndBuildDisabled)
                        ((int)&module->__vtable + (int)*(short *)&pOVar4->EnableBuyAndBuild,iVar5);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Portal.h */
      if (lVar3 == 0) {
                    /* end of inlined section */
        this = (cXPortalImpl__184_909 *)0x0;
      }
      else {
        iVar1 = *(int *)((int)lVar3 + 4);
        this = (cXPortalImpl__184_909 *)
               (**(code **)(iVar1 + 0x24))((int)lVar3 + (int)*(short *)(iVar1 + 0x20));
      }
      iVar5 = iVar5 + 1;
      SetRouteScore__12cXPortalImplsf(this,routeID,score);
      if (iVar2 <= iVar5) break;
      pOVar4 = module->__vtable;
    }
  }
  return;
}

cXPortal* cXPortal::FindBestPortal(ObjectModule *module, cXObject *start, cXObject *goal) {
	StdPrm routeID;
	cXPortalImpl *bestPortal;
	int iNumPortals;
	int i;
	int j;
	cXPortalImpl *p1;
	float dist;
	cXPortalImpl *this;
	StdPrm routeID;
	unsigned int n;
	float distStartToI;
	cXPortalImpl *p2;
	float distItoJ;
	cXPortalImpl *this;
	StdPrm routeID;
	vector<float,__malloc_alloc_template<0> > *this;
	vector<float,__malloc_alloc_template<0> > *this;
	vector<float,__malloc_alloc_template<0> > *this;
	unsigned int n;
	cXPortalImpl *this;
	StdPrm routeID;
	cXPortalImpl *this;
	StdPrm routeID;
	
  cXObject__21_1030__vtable *pcVar1;
  float *pfVar2;
  int iVar3;
  cXPortal__184_1099__vtable *pcVar4;
  int iVar5;
  int iVar6;
  cXPortalImpl__184_909 *this_00;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ObjectModule__vtable *pOVar13;
  cXObject__21_1030 *pcVar14;
  cXPortal__184_1099 *pcVar15;
  int **ppiVar16;
  int iVar17;
  cXPortalImpl__184_909 *this_01;
  long lVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iNumPortals;
  vector_float___malloc_alloc_template_0___ *this;
  
  lVar7 = (*(code *)start->__vtable->ReconType)
                    ((int)&start->_vb899 + (int)*(short *)&start->__vtable->ReconStream,6);
  if (lVar7 == 0) {
    pcVar15 = (cXPortal__184_1099 *)0x0;
  }
  else {
    iVar17 = 0;
    lVar21 = 0;
    lVar8 = (*(code *)module->__vtable->ClearIdleStatus)
                      ((int)&module->__vtable + (int)*(short *)&module->__vtable->SetIdleStatus);
    iVar5 = (int)lVar8;
    if (0 < lVar8) {
      uVar19 = (uint)lVar7;
      iVar6 = uVar19 - 1;
      uVar12 = uVar19 & 0xffff;
      pOVar13 = module->__vtable;
      lVar8 = lVar21;
      while( true ) {
        lVar21 = (*(code *)pOVar13->IsBuyAndBuildDisabled)
                           ((int)&module->__vtable + (int)*(short *)&pOVar13->EnableBuyAndBuild,
                            iVar17);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Portal.h */
        lVar18 = 0;
        if (lVar21 != 0) {
          iVar20 = *(int *)((int)lVar21 + 4);
          lVar18 = (**(code **)(iVar20 + 0x24))((int)lVar21 + (int)*(short *)(iVar20 + 0x20));
        }
        this_01 = (cXPortalImpl__184_909 *)lVar18;
                    /* end of inlined section */
        pcVar14 = this_01->_vb905->_vb901->_vb966;
        pcVar1 = pcVar14->__vtable;
        lVar9 = (*(code *)pcVar1[1].ParseUIString)
                          ((int)&pcVar14->_vb899 + (int)*(short *)&pcVar1[1].RunTree);
        lVar10 = (*(code *)start->__vtable[1].ParseUIString)
                           ((int)&start->_vb899 + (int)*(short *)&start->__vtable[1].RunTree);
        lVar21 = lVar8;
        if (lVar9 == lVar10) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/PortalImpl.h */
          if ((lVar7 < 1) ||
             (pfVar2 = (this_01->fRouteScoreTable).start,
             (uint)((int)(this_01->fRouteScoreTable).finish - (int)pfVar2 >> 2) < uVar12)) {
            fVar24 = 0.0;
          }
          else {
            fVar24 = pfVar2[iVar6];
          }
                    /* end of inlined section */
          if (fVar24 == 10001.0) {
            SetRouteScore__12cXPortalImplsf(this_01,(ushort)lVar7,10000.0);
            if (lVar18 == 0) {
              pcVar14 = (cXObject__21_1030 *)0x0;
            }
            else {
              pcVar14 = this_01->_vb1099->_vb1079->_vb966;
            }
            iVar20 = 0;
            fVar24 = (float)(*(code *)start->__vtable->SetMiscFlag)
                                      ((int)&start->_vb899 +
                                       (int)*(short *)&start->__vtable->GetHilite,pcVar14);
            if (0 < iVar5) {
              pOVar13 = module->__vtable;
              while( true ) {
                lVar9 = (*(code *)pOVar13->IsBuyAndBuildDisabled)
                                  ((int)&module->__vtable +
                                   (int)*(short *)&pOVar13->EnableBuyAndBuild,iVar20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Portal.h */
                lVar10 = 0;
                if (lVar9 != 0) {
                  iVar3 = *(int *)((int)lVar9 + 4);
                  lVar10 = (**(code **)(iVar3 + 0x24))((int)lVar9 + (int)*(short *)(iVar3 + 0x20));
                }
                ppiVar16 = (int **)lVar10;
                    /* end of inlined section */
                iVar3 = *(int *)(*(int *)(**ppiVar16 + 4) + 4);
                lVar9 = (**(code **)(iVar3 + 0x29c))
                                  (*(int *)(**ppiVar16 + 4) + (int)*(short *)(iVar3 + 0x298));
                lVar11 = (*(code *)goal->__vtable[1].ParseUIString)
                                   ((int)&goal->_vb899 + (int)*(short *)&goal->__vtable[1].RunTree);
                if (lVar9 == lVar11) {
                  pcVar15 = (cXPortal__184_1099 *)0x0;
                  if (lVar10 != 0) {
                    pcVar15 = (cXPortal__184_1099 *)ppiVar16[1];
                  }
                  fVar23 = GetDistToPortal__12cXPortalImplP8cXPortal(this_01,pcVar15);
                  if (fVar23 != 10000.0) {
                    pcVar4 = this_01->_vb1099->__vtable;
                    lVar9 = (*(code *)pcVar4->GetCustomWallStyleID)
                                      ((int)&this_01->_vb1099->_vb1079 +
                                       (int)*(short *)&pcVar4->GetWallStyle);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Portal.h */
                    this_00 = (cXPortalImpl__184_909 *)0x0;
                    if (lVar9 != 0) {
                      iVar3 = *(int *)((int)lVar9 + 4);
                      this_00 = (cXPortalImpl__184_909 *)
                                (**(code **)(iVar3 + 0x24))
                                          ((int)lVar9 + (int)*(short *)(iVar3 + 0x20));
                    }
                    pcVar15 = (cXPortal__184_1099 *)0x0;
                    if (lVar10 != 0) {
                      pcVar15 = (cXPortal__184_1099 *)ppiVar16[1];
                    }
                    fVar22 = GetDistToPortal__12cXPortalImplP8cXPortal(this_00,pcVar15);
                    if (fVar22 <= fVar23) {
                      iVar3 = *(int *)(*(int *)(**ppiVar16 + 4) + 4);
                      fVar22 = (float)(**(code **)(iVar3 + 0x24))
                                                (*(int *)(**ppiVar16 + 4) +
                                                 (int)*(short *)(iVar3 + 0x20),goal);
                      fVar22 = fVar24 + fVar23 + fVar22;
                      if (1000.0 < fVar22) {
                        fVar22 = 1000.0;
                      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/PortalImpl.h */
                      if ((lVar7 < 1) ||
                         (pfVar2 = (this_01->fRouteScoreTable).start,
                         (uint)((int)(this_01->fRouteScoreTable).finish - (int)pfVar2 >> 2) <
                         (uVar19 & 0xffff))) {
                        fVar23 = 0.0;
                      }
                      else {
                        fVar23 = pfVar2[uVar19 - 1];
                      }
                      if (fVar22 < fVar23) {
                        SetRouteScore__12cXPortalImplsf(this_01,(ushort)lVar7,fVar22);
                      }
                    }
                  }
                }
                iVar20 = iVar20 + 1;
                if (iVar5 <= iVar20) break;
                pOVar13 = module->__vtable;
              }
            }
                    /* inlined from c:/eor/src2/games/sims/MSrc/PortalImpl.h */
            if ((lVar7 < 1) ||
               (pfVar2 = (this_01->fRouteScoreTable).start,
               (uint)((int)(this_01->fRouteScoreTable).finish - (int)pfVar2 >> 2) < uVar12)) {
              fVar24 = 0.0;
            }
            else {
              fVar24 = pfVar2[iVar6];
            }
          }
                    /* end of inlined section */
          if (((fVar24 != 10000.0) && (fVar24 != 1101.0)) && (lVar21 = lVar18, lVar8 != 0)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/PortalImpl.h */
            if ((lVar7 < 1) ||
               (iVar20 = *(int *)((int)lVar8 + 8),
               (uint)(*(int *)((int)lVar8 + 0xc) - iVar20 >> 2) < uVar12)) {
              fVar23 = 0.0;
            }
            else {
              fVar23 = *(float *)(iVar20 + iVar6 * 4);
            }
            if (fVar23 <= fVar24) {
              lVar21 = lVar8;
            }
          }
        }
        iVar17 = iVar17 + 1;
        if (iVar5 <= iVar17) break;
        pOVar13 = module->__vtable;
        lVar8 = lVar21;
      }
    }
    pcVar15 = (cXPortal__184_1099 *)0x0;
    if (lVar21 != 0) {
      pcVar15 = *(cXPortal__184_1099 **)((int)lVar21 + 4);
    }
  }
  return pcVar15;
}

void cXPortal::FailedPortalTree(ObjectModule *module, cXObject *from, cXPortal *to) {
	StdPrm routeID;
	cXPortal *this;
	
  int iVar1;
  ushort routeID;
  cXPortalImpl__184_909 *pcVar2;
  long lVar3;
  
  routeID = (*(code *)from->__vtable->ReconType)
                      ((int)&from->_vb899 + (int)*(short *)&from->__vtable->ReconStream,6);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Portal.h */
  if (to == (cXPortal__184_1099 *)0x0) {
    pcVar2 = (cXPortalImpl__184_909 *)0x0;
  }
  else {
    pcVar2 = (cXPortalImpl__184_909 *)
             (**(code **)&to->__vtable->field_0x24)
                       ((int)&to->_vb1079 + (int)*(short *)&to->__vtable->field_0x20);
  }
                    /* end of inlined section */
  SetRouteScore__12cXPortalImplsf(pcVar2,routeID,1101.0);
  lVar3 = (*(code *)to->__vtable->GetCustomWallStyleID)
                    ((int)&to->_vb1079 + (int)*(short *)&to->__vtable->GetWallStyle);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Portal.h */
  pcVar2 = (cXPortalImpl__184_909 *)0x0;
  if (lVar3 != 0) {
    iVar1 = *(int *)((int)lVar3 + 4);
    pcVar2 = (cXPortalImpl__184_909 *)
             (**(code **)(iVar1 + 0x24))((int)lVar3 + (int)*(short *)(iVar1 + 0x20));
  }
                    /* end of inlined section */
  SetRouteScore__12cXPortalImplsf(pcVar2,routeID,1101.0);
  return;
}

void cXPortal::BeginningPortalTree(ObjectModule *module, cXObject *from, cXPortal *to) {
	StdPrm routeID;
	float score;
	cXPortal *this;
	StdPrm routeID;
	unsigned int n;
	cXPortal *this;
	RoomID room;
	int iNumPortals;
	int i;
	float newDist;
	cXPortalImpl *portal;
	float dist;
	cXPortalImpl *this;
	StdPrm routeID;
	unsigned int n;
	cXPortal *this;
	
  int iVar1;
  uint uVar2;
  int iVar3;
  int **ppiVar4;
  cXPortalImpl__184_909 *pcVar5;
  long lVar6;
  long lVar7;
  ObjectModule__vtable *pOVar8;
  ushort routeID;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar2 = (*(code *)from->__vtable->ReconType)
                    ((int)&from->_vb899 + (int)*(short *)&from->__vtable->ReconStream,6);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Portal.h */
  if (to == (cXPortal__184_1099 *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)&to->__vtable->field_0x24)
                      ((int)&to->_vb1079 + (int)*(short *)&to->__vtable->field_0x20);
  }
  if (0 < (int)uVar2) {
    if ((uVar2 & 0xffff) <= (uint)(*(int *)(iVar3 + 0xc) - *(int *)(iVar3 + 8) >> 2)) {
      fVar10 = *(float *)(*(int *)(iVar3 + 8) + (uVar2 - 1) * 4);
      goto LAB_00292870;
    }
  }
  fVar10 = 0.0;
LAB_00292870:
                    /* end of inlined section */
  routeID = (ushort)uVar2;
  if ((fVar10 < 1001.0) || (1100.0 < fVar10)) {
    if (fVar10 != 1101.0) {
      iVar9 = 0;
      fVar12 = 1001.0;
      lVar6 = (*(code *)from->__vtable[1].ParseUIString)
                        ((int)&from->_vb899 + (int)*(short *)&from->__vtable[1].RunTree);
      iVar3 = (*(code *)module->__vtable->ClearIdleStatus)
                        ((int)&module->__vtable + (int)*(short *)&module->__vtable->SetIdleStatus);
      fVar10 = fVar12;
      if (0 < iVar3) {
        pOVar8 = module->__vtable;
        while( true ) {
          lVar7 = (*(code *)pOVar8->IsBuyAndBuildDisabled)
                            ((int)&module->__vtable + (int)*(short *)&pOVar8->EnableBuyAndBuild,
                             iVar9);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Portal.h */
          ppiVar4 = (int **)0x0;
          if (lVar7 != 0) {
            iVar1 = *(int *)((int)lVar7 + 4);
            ppiVar4 = (int **)(**(code **)(iVar1 + 0x24))
                                        ((int)lVar7 + (int)*(short *)(iVar1 + 0x20));
          }
                    /* end of inlined section */
          iVar1 = *(int *)(*(int *)(**ppiVar4 + 4) + 4);
          lVar7 = (**(code **)(iVar1 + 0x29c))
                            (*(int *)(**ppiVar4 + 4) + (int)*(short *)(iVar1 + 0x298));
          if (lVar7 == lVar6) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/PortalImpl.h */
            if (((int)uVar2 < 1) ||
               ((uint)((int)ppiVar4[3] - (int)ppiVar4[2] >> 2) < (uVar2 & 0xffff))) {
              fVar11 = 0.0;
            }
            else {
              fVar11 = (float)ppiVar4[2][uVar2 - 1];
            }
            if (((fVar12 <= fVar11) && (fVar11 <= 1100.0)) && (fVar10 <= fVar11)) {
              fVar10 = fVar11 + 1.0;
            }
          }
          iVar9 = iVar9 + 1;
          if (iVar3 <= iVar9) break;
          pOVar8 = module->__vtable;
        }
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Portal.h */
      if (to == (cXPortal__184_1099 *)0x0) {
                    /* end of inlined section */
        pcVar5 = (cXPortalImpl__184_909 *)0x0;
      }
      else {
        pcVar5 = (cXPortalImpl__184_909 *)
                 (**(code **)&to->__vtable->field_0x24)
                           ((int)&to->_vb1079 + (int)*(short *)&to->__vtable->field_0x20);
      }
      SetRouteScore__12cXPortalImplsf(pcVar5,routeID,fVar10);
      lVar6 = (*(code *)to->__vtable->GetCustomWallStyleID)
                        ((int)&to->_vb1079 + (int)*(short *)&to->__vtable->GetWallStyle);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Portal.h */
      if (lVar6 == 0) {
                    /* end of inlined section */
        pcVar5 = (cXPortalImpl__184_909 *)0x0;
      }
      else {
        iVar3 = *(int *)((int)lVar6 + 4);
        pcVar5 = (cXPortalImpl__184_909 *)
                 (**(code **)(iVar3 + 0x24))((int)lVar6 + (int)*(short *)(iVar3 + 0x20));
      }
      SetRouteScore__12cXPortalImplsf(pcVar5,routeID,fVar10);
    }
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Portal.h */
    pcVar5 = (cXPortalImpl__184_909 *)0x0;
    if (to != (cXPortal__184_1099 *)0x0) {
      pcVar5 = (cXPortalImpl__184_909 *)
               (**(code **)&to->__vtable->field_0x24)
                         ((int)&to->_vb1079 + (int)*(short *)&to->__vtable->field_0x20);
    }
                    /* end of inlined section */
    SetRouteScore__12cXPortalImplsf(pcVar5,routeID,1101.0);
    lVar6 = (*(code *)to->__vtable->GetCustomWallStyleID)
                      ((int)&to->_vb1079 + (int)*(short *)&to->__vtable->GetWallStyle);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Portal.h */
    pcVar5 = (cXPortalImpl__184_909 *)0x0;
    if (lVar6 != 0) {
      iVar3 = *(int *)((int)lVar6 + 4);
      pcVar5 = (cXPortalImpl__184_909 *)
               (**(code **)(iVar3 + 0x24))((int)lVar6 + (int)*(short *)(iVar3 + 0x20));
    }
                    /* end of inlined section */
    SetRouteScore__12cXPortalImplsf(pcVar5,routeID,1101.0);
  }
  return;
}

void cXPortal::DumpRouteScores(ObjectModule *module, StdPrm routeID) {
	FILE *f;
	cXObject *srch;
	cXPortal *portal;
	Int score;
	cXObject *ptr;
	cXPortal *this;
	StdPrm routeID;
	unsigned int n;
	
  __sFILE__432_30 *fp;
  int **ppiVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  TreeSim *pTVar5;
  TreeSim **ppTVar6;
  
  fp = fopen("PortalScores.txt","a");
  if (fp != (__sFILE__432_30 *)0x0) {
    fprintf(fp,"Scores for route id %d\n");
    lVar2 = (*(code *)module->__vtable->LevelInfoRequested)
                      ((int)&module->__vtable + (int)*(short *)&module->__vtable->CleanupPeople);
    if (lVar2 != 0) {
      iVar4 = *(int *)((int)lVar2 + 4);
      while( true ) {
        ppTVar6 = (TreeSim **)lVar2;
        lVar3 = (**(code **)(iVar4 + 0x2ac))((int)ppTVar6 + (int)*(short *)(iVar4 + 0x2a8));
        if (lVar3 == 8) {
                    /* inlined from SCID.h */
          ppiVar1 = (int **)0x0;
          if (lVar2 != 0) {
            ppiVar1 = (int **)_dyncastimpl__7TreeSim4SCID(*ppTVar6,cXPortalID);
          }
          if (ppiVar1 != (int **)0x0) {
            (*(code *)ppiVar1[1][9])((int)ppiVar1 + (int)*(short *)(ppiVar1[1] + 8));
          }
                    /* end of inlined section */
          iVar4 = *(int *)(**ppiVar1 + 4);
          (**(code **)(iVar4 + 700))(**ppiVar1 + (int)*(short *)(iVar4 + 0x2b8));
          fprintf(fp,"%04d : %d");
          iVar4 = *(int *)(**ppiVar1 + 4);
          lVar2 = (**(code **)(iVar4 + 0x17c))(**ppiVar1 + (int)*(short *)(iVar4 + 0x178),0xf);
          if (lVar2 == 0) {
            fprintf(fp," (no portal)");
          }
          fprintf(fp,"\n");
          pTVar5 = ppTVar6[1];
        }
        else {
          pTVar5 = ppTVar6[1];
        }
        lVar2 = (*(code *)pTVar5[0x1f].__vtable)
                          ((int)ppTVar6 + (int)*(short *)&pTVar5[0x1f].m_pEoRPerson);
        if (lVar2 == 0) break;
        iVar4 = *(int *)((int)lVar2 + 4);
      }
    }
    fprintf(fp,"\n\n");
    fclose(fp);
  }
  return;
}

int cXPortalImpl::GetDynamicToStaticLatency() {
  int iVar1;
  
  if (gDrawRouteID == 0) {
    iVar1 = GetDynamicToStaticLatency__12cXObjectImpl((cXObjectImpl__127_901 *)this->_vb905->_vb901)
    ;
  }
  else {
    iVar1 = 0x7fffffff;
  }
  return iVar1;
}

int cXPortalImpl::GetCustomWallStyleID() {
  cXObject__21_1030 *pcVar1;
  cXObject__21_1030__vtable *pcVar2;
  int iVar3;
  
  pcVar1 = this->_vb905->_vb901->_vb966;
  pcVar2 = pcVar1->__vtable;
  iVar3 = (*(code *)pcVar2[1].HandleError)((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2[1].Error);
  return (int)*(short *)(iVar3 + 0xa2);
}

void cXPortalImpl::PostLoad(SInt32 version) {
  PostLoad__14cXMTObjectImpli(this->_vb905,version);
  if (version < 0x34) {
    ApplyWallStyle__12cXPortalImplb(this,true);
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

float* float * copy_backward<float *, float *>(float *first, float *last, float *result) {
  if (first != last) {
    do {
      last = last + -1;
      result = result + -1;
      *result = *last;
    } while (first != last);
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

float* float * uninitialized_copy<float *, float *>(float *first, float *last, float *result) {
	float *p;
	float &value;
	void *pAddress;
	
  float *pfVar1;
  float fVar2;
  
  pfVar1 = result;
  if (first != last) {
    do {
      fVar2 = *first;
      first = first + 1;
      result = pfVar1 + 1;
      *pfVar1 = fVar2;
      pfVar1 = result;
    } while (first != last);
  }
  return result;
}

void vector<float, __malloc_alloc_template<0> >::insert_aux(float *position, float &x) {
	float x_copy;
	vector<float,__malloc_alloc_template<0> > *this;
	vector<float,__malloc_alloc_template<0> > *this;
	vector<float,__malloc_alloc_template<0> > *this;
	void *result;
	vector<float,__malloc_alloc_template<0> > *this;
	vector<float,__malloc_alloc_template<0> > *this;
	float *p;
	float &value;
	void *pAddress;
	vector<float,__malloc_alloc_template<0> > *this;
	vector<float,__malloc_alloc_template<0> > *this;
	vector<float,__malloc_alloc_template<0> > *this;
	vector<float,__malloc_alloc_template<0> > *this;
	float *first;
	float *pointer;
	vector<float,__malloc_alloc_template<0> > *this;
	
  uint size;
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  
  pfVar1 = this->finish;
  if (pfVar1 == this->end_of_storage) {
    iVar4 = (int)pfVar1 - (int)this->start >> 2;
    iVar2 = 1;
    if (iVar4 != 0) {
      iVar2 = iVar4 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    size = iVar2 << 2;
    if (iVar2 == 0) {
      pfVar1 = (float *)0x0;
      size = 0;
    }
    else {
      pfVar1 = (float *)malloc(size);
      if (pfVar1 == (float *)0x0) {
        pfVar1 = (float *)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
      }
    }
                    /* end of inlined section */
                    /* end of inlined section */
    uninitialized_copy__H2ZPfZPf_X01X01X11_X11(this->start,position,pfVar1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *(float *)((int)pfVar1 + ((int)position - (int)this->start)) = *x;
                    /* end of inlined section */
    uninitialized_copy__H2ZPfZPf_X01X01X11_X11
              (position,this->finish,(float *)((int)pfVar1 + (int)position + (4 - (int)this->start))
              );
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    pfVar3 = this->start;
    if (pfVar3 == this->finish) {
      pfVar3 = this->start;
    }
    else {
      do {
        pfVar3 = pfVar3 + 1;
      } while (pfVar3 != this->finish);
                    /* end of inlined section */
      pfVar3 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((pfVar3 != (float *)0x0) && ((int)this->end_of_storage - (int)pfVar3 >> 2 != 0)) {
      free(pfVar3);
                    /* end of inlined section */
    }
    pfVar3 = pfVar1 + iVar4;
    this->start = pfVar1;
    this->end_of_storage = (float *)((int)pfVar1 + size);
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *pfVar1 = pfVar1[-1];
                    /* end of inlined section */
    fVar5 = *x;
    copy_backward__H2ZPfZPf_X01X01X11_X11(position,this->finish + -1,this->finish);
    *position = fVar5;
    pfVar3 = this->finish;
  }
  this->finish = pfVar3 + 1;
  return;
}

cXPortalImpl** cXPortalImpl ** copy_backward<cXPortalImpl **, cXPortalImpl **>(cXPortalImpl **first, cXPortalImpl **last, cXPortalImpl **result) {
  if (first != last) {
    do {
      last = last + -1;
      result = result + -1;
      *result = *last;
    } while (first != last);
  }
  return result;
}

cXPortalImpl** cXPortalImpl ** uninitialized_copy<cXPortalImpl **, cXPortalImpl **>(cXPortalImpl **first, cXPortalImpl **last, cXPortalImpl **result) {
	cXPortalImpl **p;
	cXPortalImpl *&value;
	void *pAddress;
	
  cXPortalImpl__184_909 *pcVar1;
  cXPortalImpl__184_909 **ppcVar2;
  
  ppcVar2 = result;
  if (first != last) {
    do {
      pcVar1 = *first;
      first = first + 1;
      result = ppcVar2 + 1;
      *ppcVar2 = pcVar1;
      ppcVar2 = result;
    } while (first != last);
  }
  return result;
}

void vector<cXPortalImpl *, __malloc_alloc_template<0> >::insert_aux(cXPortalImpl **position, cXPortalImpl *&x) {
	cXPortalImpl *x_copy;
	vector<cXPortalImpl *,__malloc_alloc_template<0> > *this;
	vector<cXPortalImpl *,__malloc_alloc_template<0> > *this;
	vector<cXPortalImpl *,__malloc_alloc_template<0> > *this;
	void *result;
	vector<cXPortalImpl *,__malloc_alloc_template<0> > *this;
	vector<cXPortalImpl *,__malloc_alloc_template<0> > *this;
	cXPortalImpl **p;
	cXPortalImpl *&value;
	void *pAddress;
	vector<cXPortalImpl *,__malloc_alloc_template<0> > *this;
	vector<cXPortalImpl *,__malloc_alloc_template<0> > *this;
	vector<cXPortalImpl *,__malloc_alloc_template<0> > *this;
	vector<cXPortalImpl *,__malloc_alloc_template<0> > *this;
	cXPortalImpl **first;
	cXPortalImpl **pointer;
	vector<cXPortalImpl *,__malloc_alloc_template<0> > *this;
	
  cXPortalImpl__184_909 *pcVar1;
  uint size;
  cXPortalImpl__184_909 **ppcVar2;
  int iVar3;
  cXPortalImpl__184_909 **ppcVar4;
  int iVar5;
  
  ppcVar2 = this->finish;
  if (ppcVar2 == this->end_of_storage) {
    iVar5 = (int)ppcVar2 - (int)this->start >> 2;
    iVar3 = 1;
    if (iVar5 != 0) {
      iVar3 = iVar5 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    size = iVar3 << 2;
    if (iVar3 == 0) {
      ppcVar2 = (cXPortalImpl__184_909 **)0x0;
      size = 0;
    }
    else {
      ppcVar2 = (cXPortalImpl__184_909 **)malloc(size);
      if (ppcVar2 == (cXPortalImpl__184_909 **)0x0) {
        ppcVar2 = (cXPortalImpl__184_909 **)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
      }
    }
                    /* end of inlined section */
                    /* end of inlined section */
    uninitialized_copy__H2ZPP12cXPortalImplZPP12cXPortalImpl_X01X01X11_X11
              (this->start,position,ppcVar2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *(cXPortalImpl__184_909 **)((int)ppcVar2 + ((int)position - (int)this->start)) = *x;
                    /* end of inlined section */
    uninitialized_copy__H2ZPP12cXPortalImplZPP12cXPortalImpl_X01X01X11_X11
              (position,this->finish,
               (cXPortalImpl__184_909 **)((int)ppcVar2 + (int)position + (4 - (int)this->start)));
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    ppcVar4 = this->start;
    if (ppcVar4 == this->finish) {
      ppcVar4 = this->start;
    }
    else {
      do {
        ppcVar4 = ppcVar4 + 1;
      } while (ppcVar4 != this->finish);
                    /* end of inlined section */
      ppcVar4 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((ppcVar4 != (cXPortalImpl__184_909 **)0x0) &&
       ((int)this->end_of_storage - (int)ppcVar4 >> 2 != 0)) {
      free(ppcVar4);
                    /* end of inlined section */
    }
    ppcVar4 = ppcVar2 + iVar5;
    this->start = ppcVar2;
    this->end_of_storage = (cXPortalImpl__184_909 **)((int)ppcVar2 + size);
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *ppcVar2 = ppcVar2[-1];
                    /* end of inlined section */
    pcVar1 = *x;
    copy_backward__H2ZPP12cXPortalImplZPP12cXPortalImpl_X01X01X11_X11
              (position,this->finish + -1,this->finish);
    *position = pcVar1;
    ppcVar4 = this->finish;
  }
  this->finish = ppcVar4 + 1;
  return;
}

cXPortal* cXPortal::cXPortal(int __in_chrg) {
	cXObject *this;
	cXMTObject *this;
	
  int *piVar1;
  cXMTObject__123_3296 *pcVar2;
  TreeSim__vtable *pTVar3;
  cXMTObject__123_3296__vtable *pcVar4;
  __vtbl_ptr_type *p_Var5;
  TreeSim__vtable *pTVar6;
  __vtbl_ptr_type *p_Var7;
  __vtbl_ptr_type *p_Var8;
  cXObject__21_1030__vtable *pcVar9;
  __vtbl_ptr_type *p_Var10;
  __vtbl_ptr_type _Var11;
  __vtbl_ptr_type _Var12;
  cXMTObject__123_3296__vtable *pcVar13;
  __vtbl_ptr_type _Var14;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  __vtbl_ptr_type local_be0 [36];
  TreeSim__vtable local_ac0 [2];
  cXObject__21_1030__vtable local_a30 [2];
  TreeSim__vtable local_5d0 [2];
  cXObject__21_1030__vtable local_540 [2];
  undefined8 local_e0 [14];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined *local_60;
  undefined *puStack_5c;
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
  
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined *)unaff_s1;
  puStack_5c = (undefined *)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  if (__in_chrg != 0) {
    this->_vb1079 = (cXMTObject__123_3296 *)&this->field_0x30;
    *(undefined **)&this->field_0x28 = &this->field_0x8;
    *(undefined **)&this->field_0x30 = &this->field_0x28;
    __7TreeSim((TreeSim *)&this->field_0x8);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    piVar1 = *(int **)&this->field_0x30;
    *(__vtbl_ptr_type **)(*piVar1 + 0x1c) = _vt_8cXObject_7TreeSim;
    p_Var10 = local_be0;
    p_Var8 = _vt_8cXObject_7TreeSim;
    do {
      p_Var5 = p_Var8;
      p_Var7 = p_Var10;
      _Var11 = p_Var5[1];
      _Var12 = p_Var5[2];
      _Var14 = p_Var5[3];
      *p_Var7 = *p_Var5;
      p_Var7[1] = _Var11;
      p_Var7[2] = _Var12;
      p_Var7[3] = _Var14;
      p_Var10 = p_Var7 + 4;
      p_Var8 = p_Var5 + 4;
    } while (p_Var5 + 4 != _vt_8cXObject_7TreeSim + 0x10);
    _Var11 = p_Var5[5];
    p_Var7[4] = _vt_8cXObject_7TreeSim[16];
    p_Var7[5] = _Var11;
    *(__vtbl_ptr_type **)(*piVar1 + 0x1c) = local_be0;
                    /* end of inlined section */
    piVar1[1] = (int)_vt_8cXObject;
    if (__in_chrg != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
      pcVar2 = this->_vb1079;
      pcVar2->_vb966->_vb899->__vtable = (TreeSim__vtable *)_vt_10cXMTObject_7TreeSim;
      pcVar2->_vb966->__vtable = (cXObject__21_1030__vtable *)_vt_10cXMTObject_8cXObject;
      p_Var10 = _vt_10cXMTObject_7TreeSim;
      pTVar3 = local_ac0;
      do {
        pTVar6 = pTVar3;
        p_Var8 = p_Var10;
        _Var11 = p_Var8[1];
        _Var12 = p_Var8[2];
        _Var14 = p_Var8[3];
        *(__vtbl_ptr_type *)pTVar6 = *p_Var8;
        *(__vtbl_ptr_type *)&pTVar6->Initialize = _Var11;
        *(__vtbl_ptr_type *)&pTVar6->SetError = _Var12;
        *(__vtbl_ptr_type *)&pTVar6->ClearError = _Var14;
        p_Var10 = p_Var8 + 4;
        pTVar3 = (TreeSim__vtable *)&pTVar6->GetCurElem;
      } while (p_Var8 + 4 != _vt_10cXMTObject_7TreeSim + 0x10);
      _Var11 = p_Var8[5];
      *(__vtbl_ptr_type *)&pTVar6->GetCurElem = _vt_10cXMTObject_7TreeSim[16];
      *(__vtbl_ptr_type *)&pTVar6->GetNthElem = _Var11;
      p_Var10 = _vt_10cXMTObject_8cXObject;
      pcVar2->_vb966->_vb899->__vtable = local_ac0;
      pcVar9 = local_a30;
      do {
        _Var12 = p_Var10[1];
        _Var14 = p_Var10[2];
        _Var11 = p_Var10[3];
        *(__vtbl_ptr_type *)pcVar9 = *p_Var10;
        *(__vtbl_ptr_type *)&pcVar9->GetNumAttr = _Var12;
        *(__vtbl_ptr_type *)&pcVar9->CalcShortDistance = _Var14;
        *(__vtbl_ptr_type *)&pcVar9->GetSpriteSlot = _Var11;
        p_Var10 = p_Var10 + 4;
        pcVar9 = (cXObject__21_1030__vtable *)&pcVar9->GetHilite;
      } while (p_Var10 != _vt_10cXMTObject_7TreeSim);
      pcVar2->_vb966->__vtable = local_a30;
      pcVar2->__vtable = (cXMTObject__123_3296__vtable *)_vt_10cXMTObject;
    }
  }
                    /* end of inlined section */
  this->_vb1079->_vb966->_vb899->__vtable = (TreeSim__vtable *)_vt_8cXPortal_7TreeSim;
  this->_vb1079->_vb966->__vtable = (cXObject__21_1030__vtable *)_vt_8cXPortal_8cXObject;
  this->_vb1079->__vtable = (cXMTObject__123_3296__vtable *)_vt_8cXPortal_10cXMTObject;
  if (__in_chrg == 0) {
    p_Var10 = _vt_8cXPortal_7TreeSim;
    pTVar3 = local_5d0;
    do {
      pTVar6 = pTVar3;
      p_Var8 = p_Var10;
      _Var11 = p_Var8[1];
      _Var12 = p_Var8[2];
      _Var14 = p_Var8[3];
      *(__vtbl_ptr_type *)pTVar6 = *p_Var8;
      *(__vtbl_ptr_type *)&pTVar6->Initialize = _Var11;
      *(__vtbl_ptr_type *)&pTVar6->SetError = _Var12;
      *(__vtbl_ptr_type *)&pTVar6->ClearError = _Var14;
      p_Var10 = p_Var8 + 4;
      pTVar3 = (TreeSim__vtable *)&pTVar6->GetCurElem;
    } while (p_Var8 + 4 != _vt_8cXPortal_7TreeSim + 0x10);
    pcVar2 = this->_vb1079;
    _Var11 = p_Var8[5];
    *(__vtbl_ptr_type *)&pTVar6->GetCurElem = _vt_8cXPortal_7TreeSim[16];
    *(__vtbl_ptr_type *)&pTVar6->GetNthElem = _Var11;
    p_Var10 = _vt_8cXPortal_8cXObject;
    pcVar2->_vb966->_vb899->__vtable = local_5d0;
    pcVar9 = local_540;
    do {
      _Var14 = p_Var10[1];
      _Var11 = p_Var10[2];
      _Var12 = p_Var10[3];
      *(__vtbl_ptr_type *)pcVar9 = *p_Var10;
      *(__vtbl_ptr_type *)&pcVar9->GetNumAttr = _Var14;
      *(__vtbl_ptr_type *)&pcVar9->CalcShortDistance = _Var11;
      *(__vtbl_ptr_type *)&pcVar9->GetSpriteSlot = _Var12;
      p_Var10 = p_Var10 + 4;
      pcVar9 = (cXObject__21_1030__vtable *)&pcVar9->GetHilite;
    } while (p_Var10 != _vt_8cXPortal_7TreeSim);
    this->_vb1079->_vb966->__vtable = local_540;
    pcVar4 = (cXMTObject__123_3296__vtable *)local_e0;
    p_Var10 = _vt_8cXPortal_10cXMTObject;
    do {
      p_Var8 = p_Var10;
      pcVar13 = pcVar4;
      _Var11 = p_Var8[1];
      _Var12 = p_Var8[2];
      _Var14 = p_Var8[3];
      *(__vtbl_ptr_type *)pcVar13 = *p_Var8;
      *(__vtbl_ptr_type *)&pcVar13->GetFirstMultiTileObject = _Var11;
      *(__vtbl_ptr_type *)&pcVar13->Reset = _Var12;
      *(__vtbl_ptr_type *)&pcVar13->PostLoad = _Var14;
      pcVar4 = (cXMTObject__123_3296__vtable *)&pcVar13->DirtyAll;
      p_Var10 = p_Var8 + 4;
    } while (p_Var8 + 4 != _vt_8cXPortal_10cXMTObject + 0xc);
    pcVar2 = this->_vb1079;
    _Var11 = p_Var8[5];
    *(__vtbl_ptr_type *)&pcVar13->DirtyAll = _vt_8cXPortal_10cXMTObject[12];
    *(__vtbl_ptr_type *)&pcVar13->MergeInPlace = _Var11;
    pcVar2->__vtable = (cXMTObject__123_3296__vtable *)local_e0;
  }
  this->__vtable = (cXPortal__184_1099__vtable *)_vt_8cXPortal;
  return this;
}

void cXPortal::setPortalImpl(cXPortalImpl *obj) {
	cXMTObject *this;
	cXObject *this;
	TreeSim *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
  this->_vb1079->_vb966->_vb899->m_pPortal = obj;
  return;
}

cXPortalImpl* cXPortal::CAST_IMPL() {
  cXPortalImpl__184_909 *pcVar1;
  
  if (this == (cXPortal__184_1099 *)0x0) {
    pcVar1 = (cXPortalImpl__184_909 *)0x0;
  }
  else {
    pcVar1 = (cXPortalImpl__184_909 *)
             (**(code **)&this->__vtable->field_0x24)
                       ((int)&this->_vb1079 + (int)*(short *)&this->__vtable->field_0x20);
  }
  return pcVar1;
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

float cXPortalImpl::GetRouteScore(StdPrm routeID) {
	unsigned int n;
	
  float *pfVar1;
  uint uVar2;
  
  uVar2 = (uint)(short)routeID;
  if (0 < (int)uVar2) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    pfVar1 = (this->fRouteScoreTable).start;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    if ((uVar2 & 0xffff) <= (uint)((int)(this->fRouteScoreTable).finish - (int)pfVar1 >> 2)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      return pfVar1[uVar2 - 1];
    }
  }
  return 0.0;
}

WallStyle cXPortalImpl::GetWallStyle() {
  cXObject__21_1030 *pcVar1;
  cXObject__21_1030__vtable *pcVar2;
  int iVar3;
  
  pcVar1 = this->_vb905->_vb901->_vb966;
  pcVar2 = pcVar1->__vtable;
  iVar3 = (*(code *)pcVar2[1].HandleError)((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2[1].Error);
  return (WallStyle)*(short *)(iVar3 + 0x5c);
}

cXPortalImpl* cXPortalImpl::GetPortalImplementation() {
  return this;
}

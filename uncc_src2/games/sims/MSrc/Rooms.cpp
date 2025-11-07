// STATUS: NOT STARTED

#include "Rooms.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb1880;
	__vtbl_ptr_type *$vf1734;
	
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

// warning: multiple differing types with the same name (name not equal)
struct cXPerson : virtual cXObject {
	cXObject *$vb1734;
	static Int kSimTicksPerMotiveTick;
	__vtbl_ptr_type *$vf2067;
	
	cXPerson& operator=();
	cXPerson();
protected:
	cXPerson();
	/* vtable[1] */ virtual cXPerson(cXPerson*, int, void);
	void setPersonImpl();
public:
	/* vtable[1] */ virtual void EORDrawStickFigure(cXPerson*, int, void);
	/* vtable[2] */ virtual int GetQueueCount();
	/* vtable[3] */ virtual u16* GetNextQueueStr();
	/* vtable[4] */ virtual void Initialize();
	/* vtable[5] */ virtual void Reset();
	/* vtable[6] */ virtual void PostLoad(cXPerson*, int, void);
	/* vtable[7] */ virtual void PreSave();
	/* vtable[8] */ virtual TreeReturnCode TryElement();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[130] */ virtual void ReconStream();
	/* vtable[14] */ virtual int GetDynamicToStaticLatency();
	/* vtable[34] */ virtual void Place();
	/* vtable[45] */ virtual void ForceLocation();
	/* vtable[9] */ virtual bool GosubObjectTree();
	/* vtable[10] */ virtual void StackJustPopped();
	/* vtable[11] */ virtual void Cleanup();
	/* vtable[12] */ virtual float GetMotive();
	/* vtable[13] */ virtual float* GetMotiveRef();
	/* vtable[14] */ virtual float* GetOldMotiveRef();
	/* vtable[15] */ virtual void SetMotive();
	/* vtable[16] */ virtual void SimMotives();
	/* vtable[17] */ virtual void CalcHappy();
	/* vtable[18] */ virtual bool AddAction();
	/* vtable[19] */ virtual bool RemoveAction();
	/* vtable[20] */ virtual Int CountActions();
	/* vtable[21] */ virtual Interaction* GetIndAction();
	/* vtable[22] */ virtual Interaction& GetCurrentAction();
	/* vtable[23] */ virtual Interaction& GetLastAction();
	/* vtable[24] */ virtual void DeleteTopAction();
	/* vtable[25] */ virtual void DebugDumpHappyScape();
	/* vtable[26] */ virtual void Skipping3D();
	/* vtable[27] */ virtual bool IsSelected();
	/* vtable[28] */ virtual StdPrm GetPersonData();
	/* vtable[29] */ virtual void SetPersonData();
	/* vtable[30] */ virtual StdPrm* GetPersonDataArray();
	/* vtable[31] */ virtual CustomCharacter* GetCustomCharacter();
	/* vtable[32] */ virtual NPC* GetNPCharacter();
	/* vtable[33] */ virtual StdPrm GetIdleState();
	/* vtable[34] */ virtual bool IsCarrying();
	/* vtable[35] */ virtual TileList* GetDestList();
	/* vtable[36] */ virtual SAnimator* GetSAnimator();
	/* vtable[37] */ virtual void GetJobSuitTex();
	/* vtable[38] */ virtual short unsigned int GetCurrentRoom();
	/* vtable[39] */ virtual void UpdateCurrentRoom();
	/* vtable[40] */ virtual SInt16 GetNeighborID();
	/* vtable[41] */ virtual void SetNeighborID();
	/* vtable[42] */ virtual bool IsSleeping();
	/* vtable[43] */ virtual bool IsRouting();
	/* vtable[44] */ virtual bool IsVisitor();
	/* vtable[45] */ virtual bool IsChild();
	/* vtable[46] */ virtual bool IsMale();
	/* vtable[47] */ virtual bool IsFemale();
	/* vtable[48] */ virtual bool IsAdult();
	/* vtable[49] */ virtual bool IsGhost();
	/* vtable[50] */ virtual bool IsInvisible();
	/* vtable[51] */ virtual bool IsGreen();
	/* vtable[52] */ virtual StdPrm GetVisibility();
	/* vtable[53] */ virtual Motives* GetMotives();
	/* vtable[54] */ virtual MotiveEffects* GetMotiveEffects();
	/* vtable[55] */ virtual void InvalidateRoutes();
	/* vtable[56] */ virtual bool GetRecording();
	/* vtable[57] */ virtual int GetRecordDuration();
	/* vtable[58] */ virtual void SetRecordDuration(cXPerson*, int, void);
	/* vtable[59] */ virtual int GetRecordMaxDuration();
	/* vtable[60] */ virtual void SetRecordMaxDuration(cXPerson*, int, void);
	/* vtable[61] */ virtual int GetRecordStartTicks();
	/* vtable[62] */ virtual int GetRecordCurTicks();
	/* vtable[63] */ virtual int GetRecordTicksElapsed();
	/* vtable[64] */ virtual Skill* GetRecordSkill();
	/* vtable[65] */ virtual void StartRecording();
	/* vtable[66] */ virtual void StopRecording();
	/* vtable[67] */ virtual void ClearRecording();
	/* vtable[68] */ virtual int TickRecording();
	/* vtable[69] */ virtual void LogEvent();
	/* vtable[70] */ virtual void Track();
	/* vtable[71] */ virtual bool ShouldInterrupt();
	/* vtable[72] */ virtual cXObject* GetControllingObject();
	/* vtable[73] */ virtual cXPersonImpl* GetPersonImplementation();
	cXPersonImpl* CAST_IMPL();
};

struct RoomScoreConstants : GlobalConstantsClient {
	RoomScoreConstants& operator=();
	RoomScoreConstants();
	RoomScoreConstants();
	/* vtable[3] */ virtual void UpdateConstants();
};

struct simple_alloc<__rb_tree_node<pair<const short unsigned int,RoomImpl *> >,__malloc_alloc_template<0> > {
	simple_alloc<__rb_tree_node<pair<const short unsigned int,RoomImpl *> >,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static __rb_tree_node<pair<const short unsigned int,RoomImpl *> >* allocate(/* parameters unknown */);
	static __rb_tree_node<pair<const short unsigned int,RoomImpl *> >* allocate(/* parameters unknown */);
	static __rb_tree_node<pair<const short unsigned int,RoomImpl *> >* allocate(/* parameters unknown */);
	static __rb_tree_node<pair<const short unsigned int,RoomImpl *> >* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct simple_alloc<__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,__malloc_alloc_template<0> > {
	simple_alloc<__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static __rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >* allocate(/* parameters unknown */);
	static __rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >* allocate(/* parameters unknown */);
	static __rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >* allocate(/* parameters unknown */);
	static __rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct pair<DiagonalNode,DiagonalNode> {
	DiagonalNode first;
	DiagonalNode second;
};

struct pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > {
	CTilePt first;
	pair<DiagonalNode,DiagonalNode> second;
};

struct __rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > : __rb_tree_node_base {
	pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > value_field;
};

struct pair<__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> >,bool> {
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > first;
	bool second;
};

struct __rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > : __rb_tree_base_iterator {
	__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >& operator=();
	__rb_tree_iterator();
	__rb_tree_iterator();
	__rb_tree_iterator();
	pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >& operator*();
	__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >& operator++();
	__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > operator++();
	__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >& operator--();
	__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > operator--();
};

struct pair<__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,bool> {
	__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > first;
	bool second;
};

struct simple_alloc<EVec3,__malloc_alloc_template<0> > {
	simple_alloc<EVec3,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static EVec3* allocate(/* parameters unknown */);
	static EVec3* allocate(/* parameters unknown */);
	static EVec3* allocate(/* parameters unknown */);
	static EVec3* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct SegSearch {
	TileWallsSegment seg;
	DiagonalSideSelector ds[2];
	Sides side[2];
};

struct unary_function<pair<const short unsigned int,RoomImpl *>,const short unsigned int> {
};

struct select1st<pair<const short unsigned int,RoomImpl *> > : unary_function<pair<const short unsigned int,RoomImpl *>,const short unsigned int> {
	select1st<pair<const short unsigned int,RoomImpl *> >& operator=();
	select1st();
	select1st();
	short unsigned int& operator()();
};

struct unary_function<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,const CTilePt> {
};

struct select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > : unary_function<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,const CTilePt> {
	select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >& operator=();
	select1st();
	select1st();
	CTilePt& operator()();
};

RoomManagerImpl *RoomManagerImpl::sRoomMgr = NULL;
static float sLightContributionFactor = 30.f;
u32 _roomUpdateCounter = 0;

__vtbl_ptr_type RoomScoreConstants virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &GlobalConstantsClient::GetFile,
		/* .__delta2 = */ -20920
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &GlobalConstantsClient::GetID,
		/* .__delta2 = */ -20872
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomScoreConstants::UpdateConstants,
		/* .__delta2 = */ -5032
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type RoomManagerImpl virtual table[28] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomManagerImpl::~RoomManagerImpl,
		/* .__delta2 = */ -3288
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomManagerImpl::GetRoomManagerImpl,
		/* .__delta2 = */ 15088
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomManagerImpl::ComputeRooms,
		/* .__delta2 = */ -1768
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomManagerImpl::ComputeCutaway,
		/* .__delta2 = */ -368
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomManagerImpl::GetRoomCount,
		/* .__delta2 = */ 15096
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomManagerImpl::RoomLightingChanged,
		/* .__delta2 = */ -2480
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomManagerImpl::RoomScoreChanged,
		/* .__delta2 = */ -2632
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomManagerImpl::AllRoomsLightingChanged,
		/* .__delta2 = */ -2328
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomManagerImpl::AllRoomsScoreChanged,
		/* .__delta2 = */ -2048
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomManagerImpl::PrintStats,
		/* .__delta2 = */ -48
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomManagerImpl::GetRoom,
		/* .__delta2 = */ 352
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomManagerImpl::GetNewRoom,
		/* .__delta2 = */ 472
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomManagerImpl::GetRoomEnvironmentScore,
		/* .__delta2 = */ 15104
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomManagerImpl::ResolveDiagonal,
		/* .__delta2 = */ 2920
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomManagerImpl::ResolveDiagonal,
		/* .__delta2 = */ 3304
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomManagerImpl::ProcessDegenerateTile,
		/* .__delta2 = */ 1216
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomManagerImpl::ResetDiagonals,
		/* .__delta2 = */ 768
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomManagerImpl::ResetRooms,
		/* .__delta2 = */ 3528
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomManagerImpl::GetOutsideAmbientLevel,
		/* .__delta2 = */ 4120
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomManagerImpl::GetOutsideObjectScore,
		/* .__delta2 = */ 15248
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomManagerImpl::RoomCount,
		/* .__delta2 = */ 15256
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomManagerImpl::GetHouse,
		/* .__delta2 = */ 15264
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomManagerImpl::ClearRoomPartitions,
		/* .__delta2 = */ 4264
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomManagerImpl::UpdateRooms,
		/* .__delta2 = */ 672
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomManagerImpl::OffsetWorld,
		/* .__delta2 = */ 4536
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomManagerImpl::GetRoomAmbientLight,
		/* .__delta2 = */ 4616
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type RoomImpl virtual table[26] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomImpl::~RoomImpl,
		/* .__delta2 = */ 5056
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomImpl::Clear,
		/* .__delta2 = */ 5496
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomImpl::ComputeRoom,
		/* .__delta2 = */ 5848
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomImpl::CollectObjectStats,
		/* .__delta2 = */ 7632
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomImpl::CollectTileStats,
		/* .__delta2 = */ 6984
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomImpl::PrintStats,
		/* .__delta2 = */ 8896
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomImpl::GetImpl,
		/* .__delta2 = */ 15000
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomImpl::GetRoomID,
		/* .__delta2 = */ 15008
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomImpl::Used,
		/* .__delta2 = */ 15016
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomImpl::GetAmbientLight,
		/* .__delta2 = */ 10264
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomImpl::SetAmbientLight,
		/* .__delta2 = */ 15024
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomImpl::IsOutside,
		/* .__delta2 = */ 9504
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomImpl::IsPool,
		/* .__delta2 = */ 10472
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomImpl::IsBedroom,
		/* .__delta2 = */ 15032
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomImpl::IsBathroom,
		/* .__delta2 = */ 15048
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomImpl::InvalidateRoom,
		/* .__delta2 = */ 9192
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomImpl::GetObjectDensity,
		/* .__delta2 = */ 9144
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomImpl::GetArea,
		/* .__delta2 = */ 9168
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomImpl::ComputeCutawayMatrix,
		/* .__delta2 = */ 9288
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomImpl::GetCutawayMatrix,
		/* .__delta2 = */ 15080
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomImpl::GetLevel,
		/* .__delta2 = */ 9296
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomImpl::SetOverheadLights,
		/* .__delta2 = */ 9776
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomImpl::GetPeopleCount,
		/* .__delta2 = */ 10008
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomImpl::WantsRoof,
		/* .__delta2 = */ 10376
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type RoomManager virtual table[28] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoomManager::~RoomManager,
		/* .__delta2 = */ 14920
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type Room virtual table[26] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &Room::~Room,
		/* .__delta2 = */ 14872
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

static RoomScoreConstants sTheClient;
static float sAreaScoreClip;
static float sAreaScoreLowLimit;
static float sAreaScoreRange;
static float sLightScoreLowLimit;
static float sLightScoreRange;
static float sEffectiveAreaLowClip;
static float sEffectiveAreaHighClip;
static float sRoomImpactMultiplier;
static float sOutdoorBadMultiplier;
static float sOutdoorGoodMultiplier;
static float sOutdoorObjectDivisor;
static float sOutdoorDaylightBonus;
static float sOutdoorDawnDuskBonus;
static float sOutdoorNightBonus;
static float sFloorScoreRange;
static float sFloorScoreLowLimit;
static float sWallScoreRange;
static float sWallScoreLowLimit;

RoomManager* RoomManager::CreateInstance() {
  RoomManagerImpl *pRVar1;
  
  pRVar1 = (RoomManagerImpl *)__builtin_new(0x40);
  pRVar1 = __15RoomManagerImpl(pRVar1);
  return &pRVar1->field0_0x0;
}

void RoomManager::DestroyInstance(RoomManager *pInstance) {
  if (pInstance != (RoomManager *)0x0) {
    (*(code *)pInstance->__vtable->ComputeRooms)
              ((int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->GetRoomManagerImpl,3
              );
  }
  return;
}

ConstantsClient* GetRoomScoreConstantsClient() {
  return (ConstantsClient *)&sTheClient;
}

void RoomScoreConstants::UpdateConstants() {
	iResFile *file;
	AUTOPTR<FloatConstants> mc;
	float floorScoreHighLimit;
	float areaScoreHighLimit;
	float lightScoreHighLimit;
	
  ConstantsClient__vtable *pCVar1;
  FloatConstants *pInstance;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  AUTOPTR_FloatConstants_ mc;
  
  pCVar1 = (this->field0_0x0).field0_0x0.__vtable;
  lVar2 = (*(code *)pCVar1->UpdateConstants)
                    ((int)&(this->field0_0x0).field0_0x0.__vtable + (int)*(short *)&pCVar1->GetID);
  pCVar1 = (this->field0_0x0).field0_0x0.__vtable;
  uVar3 = (*(code *)pCVar1[1].GetFile)
                    ((int)&(this->field0_0x0).field0_0x0.__vtable + (int)*(short *)(pCVar1 + 1));
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  DestroyInstance__14FloatConstantsP14FloatConstants((FloatConstants *)0x0);
  pInstance = CreateInstance__14FloatConstants();
                    /* end of inlined section */
  if (lVar2 != 0) {
                    /* end of inlined section */
    (*(code *)pInstance->__vtable[1].Load)
              ((int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable[1].Has,lVar2,uVar3);
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  uVar9 = 0xc1a00000;
  sLightContributionFactor =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (0x41f00000,
                         (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                         0x3b8258,1);
  uVar8 = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  sAreaScoreClip =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (0x42700000,
                         (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                         0x3b8280,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  sAreaScoreLowLimit =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (0xc1f00000,
                         (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                         0x3b8298,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  fVar4 = (float)(**(code **)(pInstance->__vtable + 1))
                           (0x41f00000,
                            (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                            0x3b82b8,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  sLightScoreLowLimit =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (uVar9,(int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load
                         ,0x3b82d8,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  fVar5 = (float)(**(code **)(pInstance->__vtable + 1))
                           (0x41a00000,
                            (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                            0x3b82f0,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  sEffectiveAreaLowClip =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (0x41200000,
                         (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                         0x3b8308,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  sEffectiveAreaHighClip =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (0x42340000,
                         (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                         0x3b8328,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  sRoomImpactMultiplier =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (0x41200000,
                         (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                         0x3b8348,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  sOutdoorBadMultiplier =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (0x40000000,
                         (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                         0x3b8360,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  sOutdoorGoodMultiplier =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (0x3f800000,
                         (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                         0x3b8380,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  sOutdoorObjectDivisor =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (0x40400000,
                         (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                         0x3b83a8,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  sOutdoorDaylightBonus =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (uVar8,(int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load
                         ,0x3b83c0,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  sOutdoorDawnDuskBonus =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (uVar9,(int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load
                         ,0x3b83d8,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  sOutdoorNightBonus =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (0xc2480000,
                         (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                         0x3b83f0,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  sFloorScoreLowLimit =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (0xc2200000,
                         (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                         0x3b8408,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  fVar6 = (float)(**(code **)(pInstance->__vtable + 1))
                           (uVar8,(int)&pInstance->__vtable +
                                  (int)*(short *)&pInstance->__vtable->Load,0x3b8420,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  sWallScoreLowLimit =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (0xc2200000,
                         (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                         0x3b8438,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  fVar7 = (float)(**(code **)(pInstance->__vtable + 1))
                           (uVar8,(int)&pInstance->__vtable +
                                  (int)*(short *)&pInstance->__vtable->Load,0x3b8450,1);
  sAreaScoreRange = fVar4 - sAreaScoreLowLimit;
  sLightScoreRange = fVar5 - sLightScoreLowLimit;
  sWallScoreRange = fVar7 - sWallScoreLowLimit;
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  sFloorScoreRange = fVar6 - sFloorScoreLowLimit;
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  DestroyInstance__14FloatConstantsP14FloatConstants(pInstance);
  return;
}

RoomManagerImpl* RoomManagerImpl::RoomManagerImpl() {
	RoomManager *this;
	map<short unsigned int,RoomImpl *,less<short unsigned int>,__malloc_alloc_template<0> > *this;
	rb_tree<short unsigned int,pair<const short unsigned int,RoomImpl *>,select1st<pair<const short unsigned int,RoomImpl *> >,less<short unsigned int>,__malloc_alloc_template<0> > *this;
	rb_tree<short unsigned int,pair<const short unsigned int,RoomImpl *>,select1st<pair<const short unsigned int,RoomImpl *> >,less<short unsigned int>,__malloc_alloc_template<0> > *this;
	rb_tree<short unsigned int,pair<const short unsigned int,RoomImpl *>,select1st<pair<const short unsigned int,RoomImpl *> >,less<short unsigned int>,__malloc_alloc_template<0> > *this;
	void *result;
	rb_tree<short unsigned int,pair<const short unsigned int,RoomImpl *>,select1st<pair<const short unsigned int,RoomImpl *> >,less<short unsigned int>,__malloc_alloc_template<0> > *this;
	rb_tree<short unsigned int,pair<const short unsigned int,RoomImpl *>,select1st<pair<const short unsigned int,RoomImpl *> >,less<short unsigned int>,__malloc_alloc_template<0> > *this;
	rb_tree<short unsigned int,pair<const short unsigned int,RoomImpl *>,select1st<pair<const short unsigned int,RoomImpl *> >,less<short unsigned int>,__malloc_alloc_template<0> > *this;
	map<CTilePt,pair<DiagonalNode,DiagonalNode>,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	void *result;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	map<CTilePt,pair<DiagonalNode,DiagonalNode>,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	void *result;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	
  __rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ *p_Var1;
  __rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ *p_Var2;
  _c2DArray *p_Var3;
  int iVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  BString aBStack_50 [4];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* end of inlined section */
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Map.h */
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (RoomManager__vtable *)_vt_15RoomManagerImpl;
                    /* inlined from Tree.h */
  (this->fRooms).t.node_count = 0;
  (this->fRooms).t.field_0x4 = 0;
  p_Var1 = (__rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ *)malloc(0x18);
  if (p_Var1 == (__rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ *)0x0) {
    p_Var1 = (__rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ *)
             oom_malloc__t23__malloc_alloc_template1i0Ui(0x18);
    (this->fRooms).t.header = p_Var1;
  }
  else {
    (this->fRooms).t.header = p_Var1;
  }
  *(undefined4 *)&p_Var1->field0_0x0 = 0;
  (((this->fRooms).t.header)->field0_0x0).parent = (__rb_tree_node_base *)0x0;
  p_Var1 = (this->fRooms).t.header;
  (p_Var1->field0_0x0).left = &p_Var1->field0_0x0;
  p_Var1 = (this->fRooms).t.header;
  (p_Var1->field0_0x0).right = &p_Var1->field0_0x0;
  (this->fDiagonals).t.node_count = 0;
  (this->fDiagonals).t.field_0x4 = 0;
  p_Var2 = (__rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ *)malloc(0x24);
  if (p_Var2 == (__rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ *)0x0) {
    p_Var2 = (__rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ *)
             oom_malloc__t23__malloc_alloc_template1i0Ui(0x24);
    (this->fDiagonals).t.header = p_Var2;
  }
  else {
    (this->fDiagonals).t.header = p_Var2;
  }
  *(undefined4 *)&p_Var2->field0_0x0 = 0;
  (((this->fDiagonals).t.header)->field0_0x0).parent = (__rb_tree_node_base *)0x0;
  p_Var2 = (this->fDiagonals).t.header;
  (p_Var2->field0_0x0).left = &p_Var2->field0_0x0;
  p_Var2 = (this->fDiagonals).t.header;
  (p_Var2->field0_0x0).right = &p_Var2->field0_0x0;
  (this->fSwapCache).t.node_count = 0;
  (this->fSwapCache).t.field_0x4 = 0;
  p_Var2 = (__rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ *)malloc(0x24);
  if (p_Var2 == (__rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ *)0x0) {
    p_Var2 = (__rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ *)
             oom_malloc__t23__malloc_alloc_template1i0Ui(0x24);
    (this->fSwapCache).t.header = p_Var2;
  }
  else {
    (this->fSwapCache).t.header = p_Var2;
  }
                    /* inlined from Tree.h */
  *(undefined4 *)&p_Var2->field0_0x0 = 0;
  (((this->fSwapCache).t.header)->field0_0x0).parent = (__rb_tree_node_base *)0x0;
  p_Var2 = (this->fSwapCache).t.header;
  (p_Var2->field0_0x0).left = &p_Var2->field0_0x0;
  p_Var2 = (this->fSwapCache).t.header;
  (p_Var2->field0_0x0).right = &p_Var2->field0_0x0;
                    /* end of inlined section */
  this->fRoomsDirty = 0;
  *(undefined4 *)&this->fLightsInited = 0;
  this->fOutdoorScore = 0.0;
  this->fOutdoorObjectScore = 0.0;
  _15RoomManagerImpl_sRoomMgr = this;
  p_Var3 = (_c2DArray *)__builtin_new(0x18);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  iVar4 = (*(code *)_5Globs_pFixedWorld->__vtable->GetWalls)
                    ((int)&_5Globs_pFixedWorld->__vtable +
                     (int)*(short *)&_5Globs_pFixedWorld->__vtable->SetFloor);
  __7BStringPCc(aBStack_50,"room ambient 1");
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
  __9_c2DArrayiiiRC7BString(p_Var3,1,iVar4,iVar4,aBStack_50);
                    /* end of inlined section */
  this->mRoomAmbient[0] = (cArray_unsigned_char_ *)p_Var3;
  ___7BString(aBStack_50,2);
  p_Var3 = (_c2DArray *)__builtin_new(0x18);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  iVar4 = (*(code *)_5Globs_pFixedWorld->__vtable->GetWalls)
                    ((int)&_5Globs_pFixedWorld->__vtable +
                     (int)*(short *)&_5Globs_pFixedWorld->__vtable->SetFloor);
  __7BStringPCc(aBStack_50,"room ambient 2");
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
  __9_c2DArrayiiiRC7BString(p_Var3,1,iVar4,iVar4,aBStack_50);
                    /* end of inlined section */
  this->mRoomAmbient[1] = (cArray_unsigned_char_ *)p_Var3;
  ___7BString(aBStack_50,2);
  return this;
}

void RoomManagerImpl::~RoomManagerImpl(int __in_chrg) {
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > i;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	RoomImpl *aRoom;
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > *this;
	__rb_tree_node_base *y;
	map<short unsigned int,RoomImpl *,less<short unsigned int>,__malloc_alloc_template<0> > *this;
	rb_tree<short unsigned int,pair<const short unsigned int,RoomImpl *>,select1st<pair<const short unsigned int,RoomImpl *> >,less<short unsigned int>,__malloc_alloc_template<0> > *this;
	rb_tree<short unsigned int,pair<const short unsigned int,RoomImpl *>,select1st<pair<const short unsigned int,RoomImpl *> >,less<short unsigned int>,__malloc_alloc_template<0> > *this;
	rb_tree<short unsigned int,pair<const short unsigned int,RoomImpl *>,select1st<pair<const short unsigned int,RoomImpl *> >,less<short unsigned int>,__malloc_alloc_template<0> > *this;
	rb_tree<short unsigned int,pair<const short unsigned int,RoomImpl *>,select1st<pair<const short unsigned int,RoomImpl *> >,less<short unsigned int>,__malloc_alloc_template<0> > *this;
	rb_tree<short unsigned int,pair<const short unsigned int,RoomImpl *>,select1st<pair<const short unsigned int,RoomImpl *> >,less<short unsigned int>,__malloc_alloc_template<0> > *this;
	map<CTilePt,pair<DiagonalNode,DiagonalNode>,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	map<CTilePt,pair<DiagonalNode,DiagonalNode>,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	void *pAddress;
	void *pAddress;
	RoomManager *this;
	int __in_chrg;
	void *pAddress;
	
  __rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ *p_Var1;
  RoomImpl *pRVar2;
  Room__vtable *pRVar3;
  __rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ *p_Var4;
  __rb_tree_base_iterator _Var5;
  __rb_tree_base_iterator _Var6;
  _c2DArray *this_00;
  __rb_tree_iterator_pair_const_short_unsigned_int_RoomImpl_____ i;
  
  (this->field0_0x0).__vtable = (RoomManager__vtable *)_vt_15RoomManagerImpl;
                    /* inlined from Tree.h */
  p_Var1 = (this->fRooms).t.header;
                    /* end of inlined section */
  _15RoomManagerImpl_sRoomMgr = (RoomManagerImpl *)0x0;
                    /* inlined from Tree.h */
  i.field0_0x0.node = *(__rb_tree_base_iterator *)&p_Var1->field0_0x0;
                    /* end of inlined section */
  if (i.field0_0x0.node != (__rb_tree_base_iterator)p_Var1) {
                    /* inlined from Tree.h */
                    /* end of inlined section */
    pRVar2 = (RoomImpl *)((__rb_tree_node_base *)((int)i.field0_0x0.node + 0x10))->parent;
    while( true ) {
      if (pRVar2 != (RoomImpl *)0x0) {
        pRVar3 = (pRVar2->field0_0x0).__vtable;
        (*(code *)pRVar3->ComputeRoom)
                  ((int)&(pRVar2->field0_0x0).__vtable + (int)*(short *)&pRVar3->Clear,3);
      }
                    /* inlined from Tree.h */
      _Var6.node = *(__rb_tree_node_base **)((int)i.field0_0x0.node + 0xc);
      if (_Var6.node == (__rb_tree_node_base *)0x0) {
        _Var6.node = *(__rb_tree_node_base **)((int)i.field0_0x0.node + 4);
        if (i.field0_0x0.node == (__rb_tree_base_iterator)(_Var6.node)->right) {
          do {
            i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var6.node;
            _Var6.node = *(__rb_tree_node_base **)((int)i.field0_0x0.node + 4);
          } while (i.field0_0x0.node == (__rb_tree_base_iterator)(_Var6.node)->right);
        }
        if (*(__rb_tree_node_base **)((int)i.field0_0x0.node + 0xc) != _Var6.node) {
          i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var6.node;
        }
                    /* end of inlined section */
        _Var5.node = (__rb_tree_node_base *)(this->fRooms).t.header;
      }
      else if ((_Var6.node)->left == (__rb_tree_node_base *)0x0) {
        _Var5.node = (__rb_tree_node_base *)(this->fRooms).t.header;
        i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var6.node;
      }
      else {
        do {
          _Var6.node = (_Var6.node)->left;
        } while ((_Var6.node)->left != (__rb_tree_node_base *)0x0);
        _Var5.node = (__rb_tree_node_base *)(this->fRooms).t.header;
        i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var6.node;
      }
                    /* inlined from Tree.h */
                    /* end of inlined section */
      if (i.field0_0x0.node == (__rb_tree_base_iterator)_Var5.node) break;
      pRVar2 = *(RoomImpl **)((int)i.field0_0x0.node + 0x14);
    }
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Map.h */
  if ((this->fRooms).t.node_count != 0) {
    __erase__t7rb_tree5ZUsZt4pair2ZCUsZP8RoomImplZt9select1st1Zt4pair2ZCUsZP8RoomImplZt4less1ZUsZt23__malloc_alloc_template1i0Pt14__rb_tree_node1Zt4pair2ZCUsZP8RoomImpl
              (&(this->fRooms).t,
               (__rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ *)
               (((this->fRooms).t.header)->field0_0x0).parent);
    p_Var1 = (this->fRooms).t.header;
    (p_Var1->field0_0x0).left = &p_Var1->field0_0x0;
    (((this->fRooms).t.header)->field0_0x0).parent = (__rb_tree_node_base *)0x0;
    p_Var1 = (this->fRooms).t.header;
    (p_Var1->field0_0x0).right = &p_Var1->field0_0x0;
    (this->fRooms).t.node_count = 0;
  }
  if ((this->fDiagonals).t.node_count != 0) {
    __erase__t7rb_tree5Z7CTilePtZt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNodeZt9select1st1Zt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNodeZt4less1Z7CTilePtZt23__malloc_alloc_template1i0Pt14__rb_tree_node1Zt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNode
              (&(this->fDiagonals).t,
               (__rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ *)
               (((this->fDiagonals).t.header)->field0_0x0).parent);
    p_Var4 = (this->fDiagonals).t.header;
    (p_Var4->field0_0x0).left = &p_Var4->field0_0x0;
    (((this->fDiagonals).t.header)->field0_0x0).parent = (__rb_tree_node_base *)0x0;
    p_Var4 = (this->fDiagonals).t.header;
    (p_Var4->field0_0x0).right = &p_Var4->field0_0x0;
    (this->fDiagonals).t.node_count = 0;
  }
                    /* end of inlined section */
  if ((_c2DArray *)this->mRoomAmbient[0] == (_c2DArray *)0x0) {
    this_00 = (_c2DArray *)this->mRoomAmbient[1];
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
    ___9_c2DArray((_c2DArray *)this->mRoomAmbient[0],3);
                    /* end of inlined section */
    this_00 = (_c2DArray *)this->mRoomAmbient[1];
  }
  if (this_00 != (_c2DArray *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
    ___9_c2DArray(this_00,3);
                    /* end of inlined section */
  }
                    /* inlined from Tree.h */
  if ((this->fSwapCache).t.node_count != 0) {
    __erase__t7rb_tree5Z7CTilePtZt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNodeZt9select1st1Zt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNodeZt4less1Z7CTilePtZt23__malloc_alloc_template1i0Pt14__rb_tree_node1Zt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNode
              (&(this->fSwapCache).t,
               (__rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ *)
               (((this->fSwapCache).t.header)->field0_0x0).parent);
    p_Var4 = (this->fSwapCache).t.header;
    (p_Var4->field0_0x0).left = &p_Var4->field0_0x0;
    (((this->fSwapCache).t.header)->field0_0x0).parent = (__rb_tree_node_base *)0x0;
    p_Var4 = (this->fSwapCache).t.header;
    (p_Var4->field0_0x0).right = &p_Var4->field0_0x0;
    (this->fSwapCache).t.node_count = 0;
  }
  free((this->fSwapCache).t.header);
  if ((this->fDiagonals).t.node_count != 0) {
    __erase__t7rb_tree5Z7CTilePtZt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNodeZt9select1st1Zt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNodeZt4less1Z7CTilePtZt23__malloc_alloc_template1i0Pt14__rb_tree_node1Zt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNode
              (&(this->fDiagonals).t,
               (__rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ *)
               (((this->fDiagonals).t.header)->field0_0x0).parent);
    p_Var4 = (this->fDiagonals).t.header;
    (p_Var4->field0_0x0).left = &p_Var4->field0_0x0;
    (((this->fDiagonals).t.header)->field0_0x0).parent = (__rb_tree_node_base *)0x0;
    p_Var4 = (this->fDiagonals).t.header;
    (p_Var4->field0_0x0).right = &p_Var4->field0_0x0;
    (this->fDiagonals).t.node_count = 0;
  }
  free((this->fDiagonals).t.header);
  if ((this->fRooms).t.node_count != 0) {
    __erase__t7rb_tree5ZUsZt4pair2ZCUsZP8RoomImplZt9select1st1Zt4pair2ZCUsZP8RoomImplZt4less1ZUsZt23__malloc_alloc_template1i0Pt14__rb_tree_node1Zt4pair2ZCUsZP8RoomImpl
              (&(this->fRooms).t,
               (__rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ *)
               (((this->fRooms).t.header)->field0_0x0).parent);
    p_Var1 = (this->fRooms).t.header;
    (p_Var1->field0_0x0).left = &p_Var1->field0_0x0;
    (((this->fRooms).t.header)->field0_0x0).parent = (__rb_tree_node_base *)0x0;
    p_Var1 = (this->fRooms).t.header;
    (p_Var1->field0_0x0).right = &p_Var1->field0_0x0;
    (this->fRooms).t.node_count = 0;
  }
  free((this->fRooms).t.header);
  (this->field0_0x0).__vtable = (RoomManager__vtable *)_vt_11RoomManager;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

void RoomManagerImpl::RoomScoreChanged(Int room) {
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	RoomImpl *aRoom;
	
  int *piVar1;
  __rb_tree_iterator_pair_const_short_unsigned_int_RoomImpl_____ _Var2;
  uint uVar3;
  long lVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  short local_40 [8];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40[0] = (short)room;
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Map.h */
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  _Var2 = find__t7rb_tree5ZUsZt4pair2ZCUsZP8RoomImplZt9select1st1Zt4pair2ZCUsZP8RoomImplZt4less1ZUsZt23__malloc_alloc_template1i0RCUs
                    (&(this->fRooms).t,local_40);
                    /* end of inlined section */
  if (_Var2.field0_0x0.node != (__rb_tree_node_base *)(this->fRooms).t.header) {
                    /* end of inlined section */
    piVar1 = *(int **)((int)_Var2.field0_0x0.node + 0x14);
    piVar1[0x1a] = 1;
    lVar4 = (**(code **)(*piVar1 + 0xac))((int)piVar1 + (int)*(short *)(*piVar1 + 0xa8));
    if (lVar4 == 1) {
      uVar3 = this->fRoomsDirty | 1;
    }
    else {
      if (lVar4 != 2) {
        return;
      }
      uVar3 = this->fRoomsDirty | 2;
    }
    this->fRoomsDirty = uVar3;
  }
  return;
}

void RoomManagerImpl::RoomLightingChanged(Int room) {
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	RoomImpl *aRoom;
	
  int *piVar1;
  __rb_tree_iterator_pair_const_short_unsigned_int_RoomImpl_____ _Var2;
  uint uVar3;
  long lVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  short local_40 [8];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40[0] = (short)room;
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Map.h */
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  _Var2 = find__t7rb_tree5ZUsZt4pair2ZCUsZP8RoomImplZt9select1st1Zt4pair2ZCUsZP8RoomImplZt4less1ZUsZt23__malloc_alloc_template1i0RCUs
                    (&(this->fRooms).t,local_40);
                    /* end of inlined section */
  if (_Var2.field0_0x0.node != (__rb_tree_node_base *)(this->fRooms).t.header) {
                    /* end of inlined section */
    piVar1 = *(int **)((int)_Var2.field0_0x0.node + 0x14);
    piVar1[0x1a] = 1;
    lVar4 = (**(code **)(*piVar1 + 0xac))((int)piVar1 + (int)*(short *)(*piVar1 + 0xa8));
    if (lVar4 == 1) {
      uVar3 = this->fRoomsDirty | 1;
    }
    else {
      if (lVar4 != 2) {
        return;
      }
      uVar3 = this->fRoomsDirty | 2;
    }
    this->fRoomsDirty = uVar3;
  }
  return;
}

void RoomManagerImpl::AllRoomsLightingChanged() {
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > f;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	RoomImpl *aRoom;
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > *this;
	__rb_tree_node_base *y;
	
  __rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ *p_Var1;
  Room__vtable *pRVar2;
  long lVar3;
  __rb_tree_base_iterator _Var4;
  __rb_tree_base_iterator _Var5;
  RoomImpl *pRVar6;
  __rb_tree_iterator_pair_const_short_unsigned_int_RoomImpl_____ f;
  
                    /* inlined from Tree.h */
  p_Var1 = (this->fRooms).t.header;
  f.field0_0x0.node = *(__rb_tree_base_iterator *)&p_Var1->field0_0x0;
                    /* end of inlined section */
  if (f.field0_0x0.node != (__rb_tree_base_iterator)p_Var1) {
                    /* inlined from Tree.h */
                    /* end of inlined section */
    pRVar6 = (RoomImpl *)((__rb_tree_node_base *)((int)f.field0_0x0.node + 0x10))->parent;
    while( true ) {
      pRVar2 = (pRVar6->field0_0x0).__vtable;
      lVar3 = (*(code *)pRVar2->ComputeCutawayMatrix)
                        ((int)&(pRVar6->field0_0x0).__vtable + (int)*(short *)&pRVar2->GetArea);
      if (lVar3 != 0) {
        *(undefined **)&pRVar6->fDirty = &pGifTag1;
      }
                    /* inlined from Tree.h */
      _Var5.node = *(__rb_tree_node_base **)((int)f.field0_0x0.node + 0xc);
      if (_Var5.node == (__rb_tree_node_base *)0x0) {
        _Var5.node = *(__rb_tree_node_base **)((int)f.field0_0x0.node + 4);
        if (f.field0_0x0.node == (__rb_tree_base_iterator)(_Var5.node)->right) {
          do {
            f.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var5.node;
            _Var5.node = *(__rb_tree_node_base **)((int)f.field0_0x0.node + 4);
          } while (f.field0_0x0.node == (__rb_tree_base_iterator)(_Var5.node)->right);
        }
        if (*(__rb_tree_node_base **)((int)f.field0_0x0.node + 0xc) != _Var5.node) {
          f.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var5.node;
        }
                    /* end of inlined section */
        _Var4.node = (__rb_tree_node_base *)(this->fRooms).t.header;
      }
      else if ((_Var5.node)->left == (__rb_tree_node_base *)0x0) {
        _Var4.node = (__rb_tree_node_base *)(this->fRooms).t.header;
        f.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var5.node;
      }
      else {
        do {
          _Var5.node = (_Var5.node)->left;
        } while ((_Var5.node)->left != (__rb_tree_node_base *)0x0);
        _Var4.node = (__rb_tree_node_base *)(this->fRooms).t.header;
        f.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var5.node;
      }
                    /* inlined from Tree.h */
                    /* end of inlined section */
      if (f.field0_0x0.node == (__rb_tree_base_iterator)_Var4.node) break;
      pRVar6 = *(RoomImpl **)((int)f.field0_0x0.node + 0x14);
    }
  }
  this->fRoomsDirty = 3;
  return;
}

void RoomManagerImpl::AllRoomsScoreChanged() {
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > f;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	RoomImpl *aRoom;
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > *this;
	__rb_tree_node_base *y;
	
  __rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ *p_Var1;
  Room__vtable *pRVar2;
  long lVar3;
  __rb_tree_base_iterator _Var4;
  __rb_tree_base_iterator _Var5;
  RoomImpl *pRVar6;
  __rb_tree_iterator_pair_const_short_unsigned_int_RoomImpl_____ f;
  
                    /* inlined from Tree.h */
  p_Var1 = (this->fRooms).t.header;
  f.field0_0x0.node = *(__rb_tree_base_iterator *)&p_Var1->field0_0x0;
                    /* end of inlined section */
  if (f.field0_0x0.node != (__rb_tree_base_iterator)p_Var1) {
                    /* inlined from Tree.h */
                    /* end of inlined section */
    pRVar6 = (RoomImpl *)((__rb_tree_node_base *)((int)f.field0_0x0.node + 0x10))->parent;
    while( true ) {
      pRVar2 = (pRVar6->field0_0x0).__vtable;
      lVar3 = (*(code *)pRVar2->ComputeCutawayMatrix)
                        ((int)&(pRVar6->field0_0x0).__vtable + (int)*(short *)&pRVar2->GetArea);
      if (lVar3 != 0) {
        *(undefined **)&pRVar6->fDirty = &pGifTag1;
      }
                    /* inlined from Tree.h */
      _Var5.node = *(__rb_tree_node_base **)((int)f.field0_0x0.node + 0xc);
      if (_Var5.node == (__rb_tree_node_base *)0x0) {
        _Var5.node = *(__rb_tree_node_base **)((int)f.field0_0x0.node + 4);
        if (f.field0_0x0.node == (__rb_tree_base_iterator)(_Var5.node)->right) {
          do {
            f.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var5.node;
            _Var5.node = *(__rb_tree_node_base **)((int)f.field0_0x0.node + 4);
          } while (f.field0_0x0.node == (__rb_tree_base_iterator)(_Var5.node)->right);
        }
        if (*(__rb_tree_node_base **)((int)f.field0_0x0.node + 0xc) != _Var5.node) {
          f.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var5.node;
        }
                    /* end of inlined section */
        _Var4.node = (__rb_tree_node_base *)(this->fRooms).t.header;
      }
      else if ((_Var5.node)->left == (__rb_tree_node_base *)0x0) {
        _Var4.node = (__rb_tree_node_base *)(this->fRooms).t.header;
        f.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var5.node;
      }
      else {
        do {
          _Var5.node = (_Var5.node)->left;
        } while ((_Var5.node)->left != (__rb_tree_node_base *)0x0);
        _Var4.node = (__rb_tree_node_base *)(this->fRooms).t.header;
        f.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var5.node;
      }
                    /* inlined from Tree.h */
                    /* end of inlined section */
      if (f.field0_0x0.node == (__rb_tree_base_iterator)_Var4.node) break;
      pRVar6 = *(RoomImpl **)((int)f.field0_0x0.node + 0x14);
    }
  }
  this->fRoomsDirty = 3;
  return;
}

void RoomManagerImpl::ComputeRooms(int inLevel) {
	static bool sConstantsLoaded = false;
	int houseArea;
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > i;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	RoomImpl *aRoom;
	float old_ambient;
	CTilePt *it;
	RoomImpl *this;
	ObjectIterator oi;
	CTilePt &location;
	__rb_tree_node_base *y;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	RoomImpl *aRoom;
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > *this;
	__rb_tree_base_iterator *this;
	__rb_tree_node_base *y;
	
  cSimulator__vtable *pcVar1;
  cSimulator *pcVar2;
  short sVar3;
  Room__vtable *pRVar4;
  int iVar5;
  uint uVar6;
  RoomManager__vtable *pRVar7;
  long lVar8;
  __rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ *p_Var9;
  __rb_tree_base_iterator _Var10;
  uint uVar11;
  __rb_tree_base_iterator _Var12;
  RoomImpl *pRVar13;
  CTilePt *location;
  CTilePt *pCVar14;
  short sVar15;
  float fVar16;
  float fVar17;
  ObjectIterator oi;
  __rb_tree_const_iterator_pair_const_short_unsigned_int_RoomImpl_____ i;
  
  if (sConstantsLoaded_1098 == 0) {
    UpdateConstants__18RoomScoreConstants(&sTheClient);
    sConstantsLoaded_1098 = 1;
  }
  if (*(int *)&this->fLightsInited == 0) {
    InitLights__15RoomManagerImpl(this);
    *(undefined4 *)&this->fLightsInited = 1;
                    /* inlined from Tree.h */
    p_Var9 = (this->fRooms).t.header;
  }
  else {
    p_Var9 = (this->fRooms).t.header;
  }
                    /* end of inlined section */
  sVar15 = 0;
                    /* inlined from Tree.h */
  i.field0_0x0.node = *(__rb_tree_base_iterator *)&p_Var9->field0_0x0;
                    /* end of inlined section */
  if (i.field0_0x0.node != (__rb_tree_base_iterator)p_Var9) {
                    /* inlined from Tree.h */
                    /* end of inlined section */
    pRVar13 = (RoomImpl *)((__rb_tree_node_base *)((int)i.field0_0x0.node + 0x10))->parent;
    sVar15 = 0;
    do {
      if (pRVar13 != (RoomImpl *)0x0) {
        pRVar4 = (pRVar13->field0_0x0).__vtable;
        lVar8 = (*(code *)pRVar4->ComputeCutawayMatrix)
                          ((int)&(pRVar13->field0_0x0).__vtable + (int)*(short *)&pRVar4->GetArea);
        if (lVar8 != 0) {
          if (inLevel == 0) {
            iVar5 = *(int *)&pRVar13->fDirty;
          }
          else {
            pRVar4 = (pRVar13->field0_0x0).__vtable;
            iVar5 = (*(code *)pRVar4[1].GetArea)
                              ((int)&(pRVar13->field0_0x0).__vtable +
                               (int)*(short *)&pRVar4[1].GetObjectDensity);
            if (iVar5 != inLevel) goto LAB_0020faf0;
            iVar5 = *(int *)&pRVar13->fDirty;
          }
          if (iVar5 != 0) {
            pRVar4 = (pRVar13->field0_0x0).__vtable;
                    /* inlined from c:/eor/src2/games/sims/MSrc/RoomsImpl.h */
                    /* end of inlined section */
            fVar16 = (float)(*(code *)pRVar4->GetLevel)
                                      ((int)&(pRVar13->field0_0x0).__vtable +
                                       (int)*(short *)&pRVar4->GetCutawayMatrix);
            pRVar4 = (pRVar13->field0_0x0).__vtable;
            (*(code *)pRVar4->CollectTileStats)
                      ((int)&(pRVar13->field0_0x0).__vtable +
                       (int)*(short *)&pRVar4->CollectObjectStats);
            *(undefined4 *)&pRVar13->fDirty = 0;
            pRVar13->fUsed = (int)&pGifTag1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
            location = (pRVar13->fRoomList).start;
                    /* end of inlined section */
            if (location == *(CTilePt **)&pRVar13->fRoomList) {
              pRVar4 = (pRVar13->field0_0x0).__vtable;
            }
            else {
              *(undefined4 *)&pRVar13->fIsPool = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
              pRVar4 = (pRVar13->field0_0x0).__vtable;
              if (location != *(CTilePt **)&pRVar13->fRoomList) {
                do {
                  (*(code *)pRVar4->SetAmbientLight)
                            ((int)&(pRVar13->field0_0x0).__vtable +
                             (int)*(short *)&pRVar4->GetAmbientLight,location);
                  pCVar14 = location + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
                  init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType(&oi,location,kAll)
                  ;
                    /* end of inlined section */
                  pRVar4 = (pRVar13->field0_0x0).__vtable;
                  (*(code *)pRVar4->Used)
                            ((int)&(pRVar13->field0_0x0).__vtable +
                             (int)*(short *)&pRVar4->GetRoomID,&oi);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                  pRVar4 = (pRVar13->field0_0x0).__vtable;
                  location = pCVar14;
                } while (pCVar14 != *(CTilePt **)&pRVar13->fRoomList);
              }
            }
            (*(code *)pRVar4->GetImpl)
                      ((int)&(pRVar13->field0_0x0).__vtable + (int)*(short *)&pRVar4->PrintStats);
            pRVar4 = (pRVar13->field0_0x0).__vtable;
            fVar17 = (float)(*(code *)pRVar4->GetLevel)
                                      ((int)&(pRVar13->field0_0x0).__vtable +
                                       (int)*(short *)&pRVar4->GetCutawayMatrix);
            if (fVar16 != fVar17) {
              pRVar4 = (pRVar13->field0_0x0).__vtable;
              iVar5 = (*(code *)pRVar4->GetObjectDensity)
                                ((int)&(pRVar13->field0_0x0).__vtable +
                                 (int)*(short *)&pRVar4->InvalidateRoom);
              GlobalDispatch__Fsi(0xf0,iVar5);
            }
          }
        }
LAB_0020faf0:
        if (((pRVar13 != (RoomImpl *)0x0) &&
            (pRVar4 = (pRVar13->field0_0x0).__vtable,
            lVar8 = (*(code *)pRVar4->ComputeCutawayMatrix)
                              ((int)&(pRVar13->field0_0x0).__vtable +
                               (int)*(short *)&pRVar4->GetArea), lVar8 != 0)) &&
           (pRVar4 = (pRVar13->field0_0x0).__vtable,
           lVar8 = (**(code **)(pRVar4 + 1))
                             ((int)&(pRVar13->field0_0x0).__vtable +
                              (int)*(short *)&pRVar4->WantsRoof), lVar8 == 0)) {
          pRVar4 = (pRVar13->field0_0x0).__vtable;
          sVar3 = (*(code *)pRVar4[1].IsOutside)
                            ((int)&(pRVar13->field0_0x0).__vtable +
                             (int)*(short *)&pRVar4[1].SetAmbientLight);
          sVar15 = sVar15 + sVar3;
        }
      }
      _Var12.node = *(__rb_tree_node_base **)((int)i.field0_0x0.node + 0xc);
      if (_Var12.node == (__rb_tree_node_base *)0x0) {
        _Var12.node = *(__rb_tree_node_base **)((int)i.field0_0x0.node + 4);
        if (i.field0_0x0.node == (__rb_tree_base_iterator)(_Var12.node)->right) {
          do {
            i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var12.node;
            _Var12.node = *(__rb_tree_node_base **)((int)i.field0_0x0.node + 4);
          } while (i.field0_0x0.node == (__rb_tree_base_iterator)(_Var12.node)->right);
        }
        if (*(__rb_tree_node_base **)((int)i.field0_0x0.node + 0xc) != _Var12.node) {
          i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var12.node;
        }
                    /* end of inlined section */
        _Var10.node = (__rb_tree_node_base *)(this->fRooms).t.header;
      }
      else if ((_Var12.node)->left == (__rb_tree_node_base *)0x0) {
        _Var10.node = (__rb_tree_node_base *)(this->fRooms).t.header;
        i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var12.node;
      }
      else {
        do {
          _Var12.node = (_Var12.node)->left;
        } while ((_Var12.node)->left != (__rb_tree_node_base *)0x0);
        _Var10.node = (__rb_tree_node_base *)(this->fRooms).t.header;
        i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var12.node;
      }
                    /* inlined from Tree.h */
                    /* end of inlined section */
      if (i.field0_0x0.node == (__rb_tree_base_iterator)_Var10.node) break;
      pRVar13 = *(RoomImpl **)((int)i.field0_0x0.node + 0x14);
    } while( true );
  }
  this->fOutdoorObjectScore = 0.0;
                    /* inlined from Tree.h */
  p_Var9 = (this->fRooms).t.header;
  i.field0_0x0.node = *(__rb_tree_base_iterator *)&p_Var9->field0_0x0;
                    /* end of inlined section */
  if (i.field0_0x0.node != (__rb_tree_base_iterator)p_Var9) {
                    /* inlined from Tree.h */
                    /* end of inlined section */
    pRVar13 = (RoomImpl *)((__rb_tree_node_base *)((int)i.field0_0x0.node + 0x10))->parent;
    while( true ) {
      if (((pRVar13 != (RoomImpl *)0x0) &&
          (pRVar4 = (pRVar13->field0_0x0).__vtable,
          lVar8 = (*(code *)pRVar4->ComputeCutawayMatrix)
                            ((int)&(pRVar13->field0_0x0).__vtable + (int)*(short *)&pRVar4->GetArea)
          , lVar8 != 0)) &&
         (pRVar4 = (pRVar13->field0_0x0).__vtable,
         lVar8 = (**(code **)(pRVar4 + 1))
                           ((int)&(pRVar13->field0_0x0).__vtable + (int)*(short *)&pRVar4->WantsRoof
                           ), lVar8 != 0)) {
        this->fOutdoorObjectScore = this->fOutdoorObjectScore + pRVar13->fBasicScore;
                    /* inlined from Tree.h */
      }
      _Var12.node = *(__rb_tree_node_base **)((int)i.field0_0x0.node + 0xc);
      if (_Var12.node == (__rb_tree_node_base *)0x0) {
        _Var12.node = *(__rb_tree_node_base **)((int)i.field0_0x0.node + 4);
        if (i.field0_0x0.node == (__rb_tree_base_iterator)(_Var12.node)->right) {
          do {
            i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var12.node;
            _Var12.node = *(__rb_tree_node_base **)((int)i.field0_0x0.node + 4);
          } while (i.field0_0x0.node == (__rb_tree_base_iterator)(_Var12.node)->right);
        }
        if (*(__rb_tree_node_base **)((int)i.field0_0x0.node + 0xc) != _Var12.node) {
          i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var12.node;
        }
                    /* end of inlined section */
        _Var10.node = (__rb_tree_node_base *)(this->fRooms).t.header;
      }
      else if ((_Var12.node)->left == (__rb_tree_node_base *)0x0) {
        _Var10.node = (__rb_tree_node_base *)(this->fRooms).t.header;
        i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var12.node;
      }
      else {
        do {
          _Var12.node = (_Var12.node)->left;
        } while ((_Var12.node)->left != (__rb_tree_node_base *)0x0);
        _Var10.node = (__rb_tree_node_base *)(this->fRooms).t.header;
        i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var12.node;
      }
                    /* inlined from Tree.h */
                    /* end of inlined section */
      if (i.field0_0x0.node == (__rb_tree_base_iterator)_Var10.node) break;
      pRVar13 = *(RoomImpl **)((int)i.field0_0x0.node + 0x14);
    }
  }
  pcVar2 = _5Globs_pSimulator;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  this->fOutdoorScore = this->fOutdoorObjectScore / sOutdoorObjectDivisor;
  pcVar1 = pcVar2->__vtable;
  lVar8 = (*(code *)pcVar1[1].DoStream)
                    ((int)&pcVar2->__vtable + (int)*(short *)&pcVar1[1].DoCommand);
  fVar16 = sOutdoorDawnDuskBonus;
  if (lVar8 == 1) {
    fVar17 = this->fOutdoorScore;
LAB_0020fd90:
    this->fOutdoorScore = fVar17 + fVar16;
    fVar17 = this->fOutdoorScore;
  }
  else {
    if (1 < lVar8) {
      if (lVar8 == 2) {
        fVar17 = this->fOutdoorScore;
        fVar16 = sOutdoorNightBonus;
      }
      else {
        fVar17 = this->fOutdoorScore;
        if (lVar8 != 3) goto LAB_0020fd9c;
      }
      goto LAB_0020fd90;
    }
    if (lVar8 == 0) {
      fVar17 = this->fOutdoorScore;
      fVar16 = sOutdoorDaylightBonus;
      goto LAB_0020fd90;
    }
    fVar17 = this->fOutdoorScore;
  }
LAB_0020fd9c:
  if (-100.0 <= fVar17) {
    if (100.0 < fVar17) {
      this->fOutdoorScore = 100.0;
    }
  }
  else {
    this->fOutdoorScore = -100.0;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pSimulator->__vtable->IsStopped)
            ((int)&_5Globs_pSimulator->__vtable +
             (int)*(short *)&_5Globs_pSimulator->__vtable->IsPaused,0x1b,sVar15);
  if (inLevel == 1) {
    uVar11 = this->fRoomsDirty;
    uVar6 = 0xfffffffe;
LAB_0020fe44:
    this->fRoomsDirty = uVar11 & uVar6;
  }
  else {
    if (1 < inLevel) {
      if (inLevel != 2) {
        pRVar7 = (this->field0_0x0).__vtable;
        goto LAB_0020fe50;
      }
      uVar11 = this->fRoomsDirty;
      uVar6 = 0xfffffffd;
      goto LAB_0020fe44;
    }
    if (inLevel != 0) {
      pRVar7 = (this->field0_0x0).__vtable;
      goto LAB_0020fe50;
    }
    this->fRoomsDirty = 0;
  }
  pRVar7 = (this->field0_0x0).__vtable;
LAB_0020fe50:
  (*(code *)pRVar7->AllRoomsScoreChanged)
            ((int)this->mRoomAmbient + *(short *)&pRVar7->AllRoomsLightingChanged + -0x38,inLevel);
  return;
}

void RoomManagerImpl::ComputeCutaway(int inLevel) {
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > i;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	Room *aRoom;
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > *this;
	__rb_tree_base_iterator *this;
	__rb_tree_node_base *y;
	
  __rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ *p_Var1;
  int iVar2;
  Room__vtable *pRVar3;
  __rb_tree_base_iterator _Var4;
  long lVar5;
  __rb_tree_base_iterator _Var6;
  RoomImpl *pRVar7;
  __rb_tree_const_iterator_pair_const_short_unsigned_int_RoomImpl_____ i;
  
                    /* inlined from Tree.h */
  p_Var1 = (this->fRooms).t.header;
  i.field0_0x0.node = *(__rb_tree_base_iterator *)&p_Var1->field0_0x0;
                    /* end of inlined section */
  if (i.field0_0x0.node == (__rb_tree_base_iterator)p_Var1) {
    return;
  }
                    /* inlined from Tree.h */
                    /* end of inlined section */
  pRVar7 = (RoomImpl *)((__rb_tree_node_base *)((int)i.field0_0x0.node + 0x10))->parent;
  do {
    pRVar3 = (pRVar7->field0_0x0).__vtable;
    lVar5 = (*(code *)pRVar3->ComputeCutawayMatrix)
                      ((int)&(pRVar7->field0_0x0).__vtable + (int)*(short *)&pRVar3->GetArea);
    if (lVar5 != 0) {
      if (inLevel == 0) {
        pRVar3 = (pRVar7->field0_0x0).__vtable;
      }
      else {
        pRVar3 = (pRVar7->field0_0x0).__vtable;
        iVar2 = (*(code *)pRVar3[1].GetArea)
                          ((int)&(pRVar7->field0_0x0).__vtable +
                           (int)*(short *)&pRVar3[1].GetObjectDensity);
        if (iVar2 != inLevel) goto LAB_0020ff20;
        pRVar3 = (pRVar7->field0_0x0).__vtable;
      }
      (*(code *)pRVar3[1].IsBedroom)
                ((int)&(pRVar7->field0_0x0).__vtable + (int)*(short *)&pRVar3[1].IsPool);
                    /* inlined from Tree.h */
    }
LAB_0020ff20:
    _Var4.node = *(__rb_tree_node_base **)((int)i.field0_0x0.node + 0xc);
    if (_Var4.node == (__rb_tree_node_base *)0x0) {
      _Var4.node = *(__rb_tree_node_base **)((int)i.field0_0x0.node + 4);
      if (i.field0_0x0.node == (__rb_tree_base_iterator)(_Var4.node)->right) {
        do {
          i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var4.node;
          _Var4.node = *(__rb_tree_node_base **)((int)i.field0_0x0.node + 4);
        } while (i.field0_0x0.node == (__rb_tree_base_iterator)(_Var4.node)->right);
      }
      if (*(__rb_tree_node_base **)((int)i.field0_0x0.node + 0xc) != _Var4.node) {
        i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var4.node;
      }
                    /* end of inlined section */
      _Var6.node = (__rb_tree_node_base *)(this->fRooms).t.header;
    }
    else if ((_Var4.node)->left == (__rb_tree_node_base *)0x0) {
      _Var6.node = (__rb_tree_node_base *)(this->fRooms).t.header;
      i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var4.node;
    }
    else {
      do {
        _Var4.node = (_Var4.node)->left;
      } while ((_Var4.node)->left != (__rb_tree_node_base *)0x0);
      _Var6.node = (__rb_tree_node_base *)(this->fRooms).t.header;
      i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var4.node;
    }
                    /* inlined from Tree.h */
                    /* end of inlined section */
    if (i.field0_0x0.node == (__rb_tree_base_iterator)_Var6.node) {
      return;
    }
    pRVar7 = *(RoomImpl **)((int)i.field0_0x0.node + 0x14);
  } while( true );
}

void RoomManagerImpl::PrintStats() {
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > i;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	Room *aRoom;
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > *this;
	__rb_tree_node_base *y;
	
  __rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ *p_Var1;
  Room__vtable *pRVar2;
  CTGDump *pCVar3;
  int inInt;
  long lVar4;
  __rb_tree_base_iterator _Var5;
  __rb_tree_base_iterator _Var6;
  RoomImpl *pRVar7;
  __rb_tree_iterator_pair_const_short_unsigned_int_RoomImpl_____ i;
  
  __ls__7CTGDumpPCc(&ctgDump,"\n\nRoom Statistics\n");
                    /* inlined from Tree.h */
  p_Var1 = (this->fRooms).t.header;
  i.field0_0x0.node = *(__rb_tree_base_iterator *)&p_Var1->field0_0x0;
                    /* end of inlined section */
  if (i.field0_0x0.node != (__rb_tree_base_iterator)p_Var1) {
                    /* inlined from Tree.h */
                    /* end of inlined section */
    pRVar7 = (RoomImpl *)((__rb_tree_node_base *)((int)i.field0_0x0.node + 0x10))->parent;
    while( true ) {
      pRVar2 = (pRVar7->field0_0x0).__vtable;
      lVar4 = (*(code *)pRVar2->ComputeCutawayMatrix)
                        ((int)&(pRVar7->field0_0x0).__vtable + (int)*(short *)&pRVar2->GetArea);
      if (lVar4 != 0) {
        pCVar3 = __ls__7CTGDumpPCc(&ctgDump,"------------ Room #");
        pRVar2 = (pRVar7->field0_0x0).__vtable;
        inInt = (*(code *)pRVar2->GetObjectDensity)
                          ((int)&(pRVar7->field0_0x0).__vtable +
                           (int)*(short *)&pRVar2->InvalidateRoom);
        pCVar3 = __ls__7CTGDumpi(pCVar3,inInt);
        __ls__7CTGDumpPCc(pCVar3,"\n");
        pRVar2 = (pRVar7->field0_0x0).__vtable;
        (*(code *)pRVar2->IsPool)
                  ((int)&(pRVar7->field0_0x0).__vtable + (int)*(short *)&pRVar2->IsOutside);
                    /* inlined from Tree.h */
      }
      _Var6.node = *(__rb_tree_node_base **)((int)i.field0_0x0.node + 0xc);
      if (_Var6.node == (__rb_tree_node_base *)0x0) {
        _Var6.node = *(__rb_tree_node_base **)((int)i.field0_0x0.node + 4);
        if (i.field0_0x0.node == (__rb_tree_base_iterator)(_Var6.node)->right) {
          do {
            i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var6.node;
            _Var6.node = *(__rb_tree_node_base **)((int)i.field0_0x0.node + 4);
          } while (i.field0_0x0.node == (__rb_tree_base_iterator)(_Var6.node)->right);
        }
        if (*(__rb_tree_node_base **)((int)i.field0_0x0.node + 0xc) != _Var6.node) {
          i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var6.node;
        }
                    /* end of inlined section */
        _Var5.node = (__rb_tree_node_base *)(this->fRooms).t.header;
      }
      else if ((_Var6.node)->left == (__rb_tree_node_base *)0x0) {
        _Var5.node = (__rb_tree_node_base *)(this->fRooms).t.header;
        i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var6.node;
      }
      else {
        do {
          _Var6.node = (_Var6.node)->left;
        } while ((_Var6.node)->left != (__rb_tree_node_base *)0x0);
        _Var5.node = (__rb_tree_node_base *)(this->fRooms).t.header;
        i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var6.node;
      }
                    /* inlined from Tree.h */
                    /* end of inlined section */
      if (i.field0_0x0.node == (__rb_tree_base_iterator)_Var5.node) break;
      pRVar7 = *(RoomImpl **)((int)i.field0_0x0.node + 0x14);
    }
  }
  return;
}

Room* RoomManagerImpl::GetRoom(short unsigned int inRoomID) {
	short unsigned int inID;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	Room *aRoom;
	
  __rb_tree_iterator_pair_const_short_unsigned_int_RoomImpl_____ _Var1;
  Room *pRVar2;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  short inID;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Rooms.h */
                    /* end of inlined section */
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Rooms.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* end of inlined section */
  if ((ushort)inRoomID < 0xfffb) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Map.h */
    inID = inRoomID;
    _Var1 = find__t7rb_tree5ZUsZt4pair2ZCUsZP8RoomImplZt9select1st1Zt4pair2ZCUsZP8RoomImplZt4less1ZUsZt23__malloc_alloc_template1i0RCUs
                      (&(this->fRooms).t,&inID);
                    /* end of inlined section */
    if (_Var1.field0_0x0.node == (__rb_tree_node_base *)(this->fRooms).t.header) {
      pRVar2 = (Room *)0x0;
    }
    else {
                    /* end of inlined section */
      pRVar2 = *(Room **)((int)_Var1.field0_0x0.node + 0x14);
      (*(code *)pRVar2->__vtable->ComputeCutawayMatrix)
                ((int)&pRVar2->__vtable + (int)*(short *)&pRVar2->__vtable->GetArea);
    }
  }
  else {
    pRVar2 = (Room *)0x0;
  }
  return pRVar2;
}

Room* RoomManagerImpl::GetNewRoom(short unsigned int inRoomID) {
	map<short unsigned int,RoomImpl *,less<short unsigned int>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	RoomImpl *aRoom;
	RoomImpl *aRoom;
	pair<const short unsigned int,RoomImpl *> v;
	
  Room__vtable *pRVar1;
  __rb_tree_iterator_pair_const_short_unsigned_int_RoomImpl_____ _Var2;
  RoomImpl *pRVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  short local_60 [8];
  pair_const_short_unsigned_int_RoomImpl___ v;
  rb_tree_short_unsigned_int_pair_const_short_unsigned_int_RoomImpl____select1st_pair_const_short_unsigned_int_RoomImpl______less_short_unsigned_int____malloc_alloc_template_0___
  rStack_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Map.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_60[0] = inRoomID;
  _Var2 = find__t7rb_tree5ZUsZt4pair2ZCUsZP8RoomImplZt9select1st1Zt4pair2ZCUsZP8RoomImplZt4less1ZUsZt23__malloc_alloc_template1i0RCUs
                    (&(this->fRooms).t,local_60);
                    /* end of inlined section */
  if (_Var2.field0_0x0.node == (__rb_tree_node_base *)(this->fRooms).t.header) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/RoomsImpl.h */
    pRVar3 = (RoomImpl *)_memmanAlloc__FUiUi(0x298,0x10);
                    /* end of inlined section */
    pRVar3 = __8RoomImplUsP15RoomManagerImpl(pRVar3,local_60[0],this);
    if (pRVar3 == (RoomImpl *)0x0) {
      pRVar3 = (RoomImpl *)0x0;
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Pair.h */
      v.first = local_60[0];
      v.second = pRVar3;
      insert_unique__t7rb_tree5ZUsZt4pair2ZCUsZP8RoomImplZt9select1st1Zt4pair2ZCUsZP8RoomImplZt4less1ZUsZt23__malloc_alloc_template1i0RCt4pair2ZCUsZP8RoomImpl
                (&rStack_40,(pair_const_short_unsigned_int_RoomImpl___ *)&this->fRooms);
                    /* end of inlined section */
      pRVar3->fUsed = 1;
    }
  }
  else {
                    /* end of inlined section */
    pRVar3 = *(RoomImpl **)((int)_Var2.field0_0x0.node + 0x14);
    pRVar1 = (pRVar3->field0_0x0).__vtable;
    (*(code *)pRVar1->CollectTileStats)
              ((int)&(pRVar3->field0_0x0).__vtable + (int)*(short *)&pRVar1->CollectObjectStats);
    pRVar3->fUsed = 1;
  }
  return &pRVar3->field0_0x0;
}

void RoomManagerImpl::UpdateRooms() {
  RoomManager__vtable *pRVar1;
  
  if (this->fRoomsDirty != 0) {
    pRVar1 = (this->field0_0x0).__vtable;
    _roomUpdateCounter = _roomUpdateCounter + 1;
    (*(code *)pRVar1->RoomScoreChanged)
              ((int)this->mRoomAmbient + *(short *)&pRVar1->RoomLightingChanged + -0x38,0);
    (*(code *)_5Globs_pHouse->__vtable[1].DoCommand)
              ((int)&_5Globs_pHouse->__vtable +
               (int)*(short *)&_5Globs_pHouse->__vtable[1].AddLayoutTick);
  }
  return;
}

void RoomManagerImpl::ResetDiagonals(int inLevel) {
	map<CTilePt,pair<DiagonalNode,DiagonalNode>,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > i;
	map<CTilePt,pair<DiagonalNode,DiagonalNode>,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *x;
	__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *this;
	__rb_tree_node_base *y;
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *tmp;
	unsigned int tmp;
	
  undefined uVar1;
  __rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ *p_Var2;
  __rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ *p_Var3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  __rb_tree_base_iterator _Var7;
  __rb_tree_base_iterator _Var8;
  rb_tree_CTilePt_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode____select1st_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode______less_CTilePt____malloc_alloc_template_0___
  rStack_70;
  __rb_tree_iterator_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ i;
  
  if (inLevel == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Map.h */
    if ((this->fDiagonals).t.node_count != 0) {
      __erase__t7rb_tree5Z7CTilePtZt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNodeZt9select1st1Zt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNodeZt4less1Z7CTilePtZt23__malloc_alloc_template1i0Pt14__rb_tree_node1Zt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNode
                (&(this->fDiagonals).t,
                 (__rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ *)
                 (((this->fDiagonals).t.header)->field0_0x0).parent);
      p_Var2 = (this->fDiagonals).t.header;
      (p_Var2->field0_0x0).left = &p_Var2->field0_0x0;
      (((this->fDiagonals).t.header)->field0_0x0).parent = (__rb_tree_node_base *)0x0;
      p_Var2 = (this->fDiagonals).t.header;
      (p_Var2->field0_0x0).right = &p_Var2->field0_0x0;
                    /* end of inlined section */
      (this->fDiagonals).t.node_count = 0;
    }
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Map.h */
    if ((this->fSwapCache).t.node_count != 0) {
      __erase__t7rb_tree5Z7CTilePtZt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNodeZt9select1st1Zt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNodeZt4less1Z7CTilePtZt23__malloc_alloc_template1i0Pt14__rb_tree_node1Zt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNode
                (&(this->fSwapCache).t,
                 (__rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ *)
                 (((this->fSwapCache).t.header)->field0_0x0).parent);
      p_Var2 = (this->fSwapCache).t.header;
      (p_Var2->field0_0x0).left = &p_Var2->field0_0x0;
      (((this->fSwapCache).t.header)->field0_0x0).parent = (__rb_tree_node_base *)0x0;
      p_Var2 = (this->fSwapCache).t.header;
      (p_Var2->field0_0x0).right = &p_Var2->field0_0x0;
      (this->fSwapCache).t.node_count = 0;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Map.h */
    p_Var2 = (this->fDiagonals).t.header;
    i.field0_0x0.node = *(__rb_tree_base_iterator *)&p_Var2->field0_0x0;
                    /* end of inlined section */
    if (i.field0_0x0.node != (__rb_tree_base_iterator)p_Var2) {
      do {
        iVar6 = GetLevel__C7CTilePt((CTilePt *)((int)i.field0_0x0.node + 0x10));
        if (iVar6 != inLevel) {
                    /* inlined from Tree.h */
          insert_unique__t7rb_tree5Z7CTilePtZt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNodeZt9select1st1Zt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNodeZt4less1Z7CTilePtZt23__malloc_alloc_template1i0RCt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNode
                    (&rStack_70,
                     (pair_const_CTilePt_pair_DiagonalNode_DiagonalNode___ *)&this->fSwapCache);
        }
                    /* inlined from Tree.h */
        _Var8.node = *(__rb_tree_node_base **)((int)i.field0_0x0.node + 0xc);
        if (_Var8.node == (__rb_tree_node_base *)0x0) {
          _Var8.node = *(__rb_tree_node_base **)((int)i.field0_0x0.node + 4);
          if (i.field0_0x0.node == (__rb_tree_base_iterator)(_Var8.node)->right) {
            do {
              i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var8.node;
              _Var8.node = *(__rb_tree_node_base **)((int)i.field0_0x0.node + 4);
            } while (i.field0_0x0.node == (__rb_tree_base_iterator)(_Var8.node)->right);
          }
          if (*(__rb_tree_node_base **)((int)i.field0_0x0.node + 0xc) != _Var8.node) {
            i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var8.node;
          }
                    /* end of inlined section */
          _Var7.node = (__rb_tree_node_base *)(this->fDiagonals).t.header;
        }
        else if ((_Var8.node)->left == (__rb_tree_node_base *)0x0) {
          _Var7.node = (__rb_tree_node_base *)(this->fDiagonals).t.header;
          i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var8.node;
        }
        else {
          do {
            _Var8.node = (_Var8.node)->left;
          } while ((_Var8.node)->left != (__rb_tree_node_base *)0x0);
          _Var7.node = (__rb_tree_node_base *)(this->fDiagonals).t.header;
          i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var8.node;
        }
                    /* inlined from Tree.h */
                    /* end of inlined section */
      } while (i.field0_0x0.node != (__rb_tree_base_iterator)_Var7.node);
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Map.h */
    p_Var2 = (this->fSwapCache).t.header;
    p_Var3 = (this->fDiagonals).t.header;
    uVar4 = (this->fSwapCache).t.node_count;
    uVar5 = (this->fDiagonals).t.node_count;
    uVar1 = (this->fDiagonals).t.field_0x4;
    (this->fDiagonals).t.field_0x4 = (this->fSwapCache).t.field_0x4;
    (this->fSwapCache).t.header = p_Var3;
    (this->fDiagonals).t.header = p_Var2;
    (this->fSwapCache).t.node_count = uVar5;
    (this->fDiagonals).t.node_count = uVar4;
    (this->fSwapCache).t.field_0x4 = uVar1;
  }
                    /* end of inlined section */
  return;
}

bool RoomManagerImpl::ProcessDegenerateTile(CTilePt &inPt, short unsigned int inRoom, Sides inSide) {
	__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > i;
	Sides opposite_side;
	map<CTilePt,pair<DiagonalNode,DiagonalNode>,less<CTilePt>,__malloc_alloc_template<0> > *this;
	CTilePt &x;
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *x;
	pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > v;
	short unsigned int id;
	Sides side;
	Sides side;
	CTilePt &a;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *&leftmost;
	__rb_tree_node_base *&rightmost;
	__rb_tree_node_base *x_parent;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	__rb_tree_color_type &a;
	__rb_tree_color_type tmp;
	__rb_tree_node_base *x;
	__rb_tree_node_base *x;
	__rb_tree_node_base *w;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	__rb_tree_node_base *w;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	
  undefined *puVar1;
  DiagonalNode *pDVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  __rb_tree_iterator_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ _Var7;
  __rb_tree_base_iterator _Var8;
  int iVar9;
  __rb_tree_node_base **pp_Var10;
  __rb_tree_node_base *p_Var11;
  __rb_tree_node_base **pp_Var12;
  __rb_tree_node_base *p_Var13;
  __rb_tree_base_iterator _Var14;
  __rb_tree_node_base *p_Var15;
  __rb_tree_node_base *p_Var16;
  __rb_tree_node_base **pp_Var17;
  __rb_tree_iterator_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ pAddress;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  pair_const_CTilePt_pair_DiagonalNode_DiagonalNode___ v;
  undefined auStack_a0 [7];
  undefined auStack_99 [8];
  undefined auStack_91 [17];
  undefined2 local_80;
  undefined2 uStack_7e;
  undefined4 local_7c;
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
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_7c = 0;
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  if (inSide == kBelow) {
    local_7c = 4;
  }
  else if ((int)inSide < 3) {
    if (inSide == kLeft) {
      local_7c = 3;
    }
  }
  else if (inSide == kRight) {
    local_7c = 1;
  }
  else if (inSide == kAbove) {
    local_7c = 2;
  }
  _Var7 = find__t7rb_tree5Z7CTilePtZt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNodeZt9select1st1Zt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNodeZt4less1Z7CTilePtZt23__malloc_alloc_template1i0RC7CTilePt
                    (&(this->fDiagonals).t,inPt);
  _Var14.node = (__rb_tree_node_base *)(this->fDiagonals).t.header;
                    /* end of inlined section */
  if (_Var7.field0_0x0.node == (__rb_tree_base_iterator)_Var14.node) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/RoomsImpl.h */
    auStack_91._1_2_ = inRoom;
    auStack_91._5_4_ = inSide;
    local_80 = 0xffff;
    _auStack_a0 = CONCAT44(inSide,CONCAT22(auStack_91._3_2_,inRoom));
    puVar1 = auStack_a0 + 7;
    uVar3 = (uint)puVar1 & 7;
    *(ulong *)(puVar1 + -uVar3) =
         *(ulong *)(puVar1 + -uVar3) & -1L << (uVar3 + 1) * 8 | _auStack_a0 >> (7 - uVar3) * 8;
    unique0x100000cd = (undefined  [8])CONCAT44(local_7c,CONCAT22(uStack_7e,local_80));
    uVar3 = (uint)auStack_91 & 7;
    puVar4 = (ulong *)(auStack_91 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)unique0x100000cd >> (7 - uVar3) * 8;
    __7CTilePtRC7CTilePt(&v.first,inPt);
    uVar6 = (ulong)stack0xffffff68;
    uVar5 = _auStack_a0;
    puVar1 = (undefined *)((int)&v.second.first.mSide + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | _auStack_a0 >> (7 - uVar3) * 8;
    uVar3 = (uint)&v.second & 7;
    puVar4 = (ulong *)((int)&v.second - uVar3);
    *puVar4 = uVar5 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    puVar1 = (undefined *)((int)&v.second.second.mSide + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar6 >> (7 - uVar3) * 8;
    pDVar2 = &v.second.second;
    uVar3 = (uint)pDVar2 & 7;
    puVar4 = (ulong *)((int)pDVar2 - uVar3);
    *puVar4 = uVar6 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    insert_unique__t7rb_tree5Z7CTilePtZt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNodeZt9select1st1Zt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNodeZt4less1Z7CTilePtZt23__malloc_alloc_template1i0RCt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNode
              ((rb_tree_CTilePt_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode____select1st_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode______less_CTilePt____malloc_alloc_template_0___
                *)auStack_a0,
               (pair_const_CTilePt_pair_DiagonalNode_DiagonalNode___ *)&this->fDiagonals);
                    /* end of inlined section */
    ___7CTilePt(&v.first,2);
    return true;
  }
                    /* end of inlined section */
  if (*(short *)((int)_Var7.field0_0x0.node + 0x14) != inRoom) {
    *(Sides *)((int)_Var7.field0_0x0.node + 0x20) = inSide;
    *(short *)((int)_Var7.field0_0x0.node + 0x1c) = inRoom;
    return true;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Map.h */
  pp_Var12 = &(_Var14.node)->right;
  pp_Var17 = &(_Var14.node)->parent;
  p_Var16 = *(__rb_tree_node_base **)((int)_Var7.field0_0x0.node + 8);
  pp_Var10 = &(_Var14.node)->left;
  pAddress = _Var7;
  if (p_Var16 == (__rb_tree_node_base *)0x0) {
LAB_0021065c:
    p_Var16 = *(__rb_tree_node_base **)((int)pAddress.field0_0x0.node + 0xc);
  }
  else {
    p_Var11 = *(__rb_tree_node_base **)((int)_Var7.field0_0x0.node + 0xc);
    if (p_Var11 != (__rb_tree_node_base *)0x0) {
      if (p_Var11->left != (__rb_tree_node_base *)0x0) {
        for (pAddress.field0_0x0.node = (__rb_tree_base_iterator)p_Var11->left;
            *(__rb_tree_node_base **)((int)pAddress.field0_0x0.node + 8) !=
            (__rb_tree_node_base *)0x0;
            pAddress.field0_0x0.node =
                 *(__rb_tree_base_iterator *)((int)pAddress.field0_0x0.node + 8)) {
        }
        goto LAB_0021065c;
      }
      p_Var16 = p_Var11->right;
      pAddress.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)p_Var11;
    }
  }
  if (pAddress.field0_0x0.node == _Var7.field0_0x0.node) {
    _Var14.node = *(__rb_tree_node_base **)((int)pAddress.field0_0x0.node + 4);
    if (p_Var16 != (__rb_tree_node_base *)0x0) {
      p_Var16->parent = _Var14.node;
    }
    if ((__rb_tree_base_iterator)*pp_Var17 == pAddress.field0_0x0.node) {
      *pp_Var17 = p_Var16;
    }
    else {
      p_Var11 = *(__rb_tree_node_base **)((int)pAddress.field0_0x0.node + 4);
      if ((__rb_tree_base_iterator)p_Var11->left == pAddress.field0_0x0.node) {
        p_Var11->left = p_Var16;
      }
      else {
        p_Var11->right = p_Var16;
      }
    }
    if ((__rb_tree_base_iterator)*pp_Var10 == _Var7.field0_0x0.node) {
      if (*(int *)((int)_Var7.field0_0x0.node + 0xc) == 0) {
        *pp_Var10 = *(__rb_tree_node_base **)((int)_Var7.field0_0x0.node + 4);
      }
      else {
        p_Var11 = p_Var16;
        if (p_Var16->left != (__rb_tree_node_base *)0x0) {
          for (p_Var11 = p_Var16->left; p_Var11->left != (__rb_tree_node_base *)0x0;
              p_Var11 = p_Var11->left) {
          }
        }
        *pp_Var10 = p_Var11;
      }
      _Var8.node = *pp_Var12;
    }
    else {
      _Var8.node = *pp_Var12;
    }
    if ((__rb_tree_base_iterator)_Var8.node != _Var7.field0_0x0.node) {
      iVar9 = *(int *)pAddress.field0_0x0.node;
      goto LAB_002107c4;
    }
    if (*(int *)((int)_Var7.field0_0x0.node + 8) == 0) {
      *pp_Var12 = *(__rb_tree_node_base **)((int)_Var7.field0_0x0.node + 4);
    }
    else {
      p_Var11 = p_Var16;
      if (p_Var16->right != (__rb_tree_node_base *)0x0) {
        for (p_Var11 = p_Var16->right; p_Var11->right != (__rb_tree_node_base *)0x0;
            p_Var11 = p_Var11->right) {
        }
      }
      *pp_Var12 = p_Var11;
    }
  }
  else {
    *(__rb_tree_base_iterator *)(*(int *)((int)_Var7.field0_0x0.node + 8) + 4) =
         pAddress.field0_0x0.node;
    *(__rb_tree_node_base **)((int)pAddress.field0_0x0.node + 8) =
         *(__rb_tree_node_base **)((int)_Var7.field0_0x0.node + 8);
    _Var14 = pAddress.field0_0x0.node;
    if (pAddress.field0_0x0.node !=
        (__rb_tree_base_iterator)*(__rb_tree_node_base **)((int)_Var7.field0_0x0.node + 0xc)) {
      _Var14.node = *(__rb_tree_node_base **)((int)pAddress.field0_0x0.node + 4);
      if (p_Var16 != (__rb_tree_node_base *)0x0) {
        p_Var16->parent = _Var14.node;
      }
      (*(__rb_tree_node_base **)((int)pAddress.field0_0x0.node + 4))->left = p_Var16;
      *(__rb_tree_node_base **)((int)pAddress.field0_0x0.node + 0xc) =
           *(__rb_tree_node_base **)((int)_Var7.field0_0x0.node + 0xc);
      *(__rb_tree_base_iterator *)(*(int *)((int)_Var7.field0_0x0.node + 0xc) + 4) =
           pAddress.field0_0x0.node;
    }
    if ((__rb_tree_base_iterator)*pp_Var17 == _Var7.field0_0x0.node) {
      *pp_Var17 = (__rb_tree_node_base *)pAddress.field0_0x0.node;
    }
    else {
      iVar9 = *(int *)((int)_Var7.field0_0x0.node + 4);
      if ((__rb_tree_base_iterator)*(__rb_tree_node_base **)(iVar9 + 8) == _Var7.field0_0x0.node) {
        *(__rb_tree_base_iterator *)(iVar9 + 8) = pAddress.field0_0x0.node;
      }
      else {
        *(__rb_tree_base_iterator *)(iVar9 + 0xc) = pAddress.field0_0x0.node;
      }
    }
    iVar9 = *(int *)pAddress.field0_0x0.node;
    *(__rb_tree_node_base **)((int)pAddress.field0_0x0.node + 4) =
         *(__rb_tree_node_base **)((int)_Var7.field0_0x0.node + 4);
    *(int *)pAddress.field0_0x0.node = *(int *)_Var7.field0_0x0.node;
    *(int *)_Var7.field0_0x0.node = iVar9;
    pAddress = _Var7;
  }
  iVar9 = *(int *)pAddress.field0_0x0.node;
LAB_002107c4:
  if (iVar9 != 0) {
    p_Var11 = *pp_Var17;
    while (p_Var16 != p_Var11) {
      if (p_Var16 == (__rb_tree_node_base *)0x0) {
        p_Var11 = (_Var14.node)->left;
      }
      else {
        if (*(int *)p_Var16 != 1) break;
        p_Var11 = (_Var14.node)->left;
      }
      if (p_Var16 == p_Var11) {
        p_Var11 = (_Var14.node)->right;
        if (*(int *)p_Var11 == 0) {
          *(int *)p_Var11 = 1;
          *(int *)_Var14.node = 0;
          p_Var11 = (_Var14.node)->right;
          (_Var14.node)->right = p_Var11->left;
          if (p_Var11->left != (__rb_tree_node_base *)0x0) {
            p_Var11->left->parent = _Var14.node;
          }
          p_Var11->parent = (_Var14.node)->parent;
          if (_Var14.node == *pp_Var17) {
            *pp_Var17 = p_Var11;
          }
          else {
            p_Var15 = (_Var14.node)->parent;
            if (_Var14.node == p_Var15->left) {
              p_Var15->left = p_Var11;
            }
            else {
              p_Var15->right = p_Var11;
            }
          }
          p_Var11->left = _Var14.node;
          (_Var14.node)->parent = p_Var11;
          p_Var11 = (_Var14.node)->right;
          p_Var15 = p_Var11->left;
        }
        else {
          p_Var15 = p_Var11->left;
        }
        if ((p_Var15 != (__rb_tree_node_base *)0x0) &&
           (p_Var13 = p_Var11->right, *(int *)p_Var15 != 1)) {
LAB_0021087c:
          if ((p_Var13 == (__rb_tree_node_base *)0x0) || (*(int *)p_Var13 == 1)) {
            if (p_Var15 != (__rb_tree_node_base *)0x0) {
              *(int *)p_Var15 = 1;
            }
            p_Var15 = p_Var11->left;
            *(int *)p_Var11 = 0;
            p_Var11->left = p_Var15->right;
            if (p_Var15->right != (__rb_tree_node_base *)0x0) {
              p_Var15->right->parent = p_Var11;
            }
            p_Var15->parent = p_Var11->parent;
            if (p_Var11 == *pp_Var17) {
              *pp_Var17 = p_Var15;
            }
            else {
              p_Var13 = p_Var11->parent;
              if (p_Var11 == p_Var13->right) {
                p_Var13->right = p_Var15;
              }
              else {
                p_Var13->left = p_Var15;
              }
            }
            p_Var15->right = p_Var11;
            p_Var11->parent = p_Var15;
            p_Var11 = (_Var14.node)->right;
            iVar9 = *(int *)_Var14.node;
          }
          else {
            iVar9 = *(int *)_Var14.node;
          }
          *(int *)p_Var11 = iVar9;
          *(int *)_Var14.node = 1;
          if (p_Var11->right != (__rb_tree_node_base *)0x0) {
            *(undefined4 *)p_Var11->right = 1;
          }
          p_Var11 = (_Var14.node)->right;
          (_Var14.node)->right = p_Var11->left;
          if (p_Var11->left != (__rb_tree_node_base *)0x0) {
            p_Var11->left->parent = _Var14.node;
          }
          p_Var11->parent = (_Var14.node)->parent;
          if (_Var14.node == *pp_Var17) {
            *pp_Var17 = p_Var11;
          }
          else {
            p_Var15 = (_Var14.node)->parent;
            if (_Var14.node == p_Var15->left) {
              p_Var15->left = p_Var11;
            }
            else {
              p_Var15->right = p_Var11;
            }
          }
          p_Var11->left = _Var14.node;
          (_Var14.node)->parent = p_Var11;
          break;
        }
        p_Var13 = p_Var11->right;
        if (p_Var13 == (__rb_tree_node_base *)0x0) goto LAB_002109f4;
        if (*(int *)p_Var13 != 1) goto LAB_0021087c;
        *(int *)p_Var11 = 0;
      }
      else {
        if (*(int *)p_Var11 == 0) {
          *(int *)p_Var11 = 1;
          *(int *)_Var14.node = 0;
          p_Var11 = (_Var14.node)->left;
          (_Var14.node)->left = p_Var11->right;
          if (p_Var11->right != (__rb_tree_node_base *)0x0) {
            p_Var11->right->parent = _Var14.node;
          }
          p_Var11->parent = (_Var14.node)->parent;
          if (_Var14.node == *pp_Var17) {
            *pp_Var17 = p_Var11;
          }
          else {
            p_Var15 = (_Var14.node)->parent;
            if (_Var14.node == p_Var15->right) {
              p_Var15->right = p_Var11;
            }
            else {
              p_Var15->left = p_Var11;
            }
          }
          p_Var11->right = _Var14.node;
          (_Var14.node)->parent = p_Var11;
          p_Var11 = (_Var14.node)->left;
          p_Var15 = p_Var11->right;
        }
        else {
          p_Var15 = p_Var11->right;
        }
        if (((p_Var15 != (__rb_tree_node_base *)0x0) &&
            (p_Var13 = p_Var11->left, *(int *)p_Var15 != 1)) ||
           ((p_Var13 = p_Var11->left, p_Var13 != (__rb_tree_node_base *)0x0 &&
            (*(int *)p_Var13 != 1)))) {
          if ((p_Var13 == (__rb_tree_node_base *)0x0) || (*(int *)p_Var13 == 1)) {
            if (p_Var15 != (__rb_tree_node_base *)0x0) {
              *(int *)p_Var15 = 1;
            }
            p_Var15 = p_Var11->right;
            *(int *)p_Var11 = 0;
            p_Var11->right = p_Var15->left;
            if (p_Var15->left != (__rb_tree_node_base *)0x0) {
              p_Var15->left->parent = p_Var11;
            }
            p_Var15->parent = p_Var11->parent;
            if (p_Var11 == *pp_Var17) {
              *pp_Var17 = p_Var15;
            }
            else {
              p_Var13 = p_Var11->parent;
              if (p_Var11 == p_Var13->left) {
                p_Var13->left = p_Var15;
              }
              else {
                p_Var13->right = p_Var15;
              }
            }
            p_Var15->left = p_Var11;
            p_Var11->parent = p_Var15;
            p_Var11 = (_Var14.node)->left;
            iVar9 = *(int *)_Var14.node;
          }
          else {
            iVar9 = *(int *)_Var14.node;
          }
          *(int *)p_Var11 = iVar9;
          *(int *)_Var14.node = 1;
          if (p_Var11->left != (__rb_tree_node_base *)0x0) {
            *(undefined4 *)p_Var11->left = 1;
          }
          p_Var11 = (_Var14.node)->left;
          (_Var14.node)->left = p_Var11->right;
          if (p_Var11->right != (__rb_tree_node_base *)0x0) {
            p_Var11->right->parent = _Var14.node;
          }
          p_Var11->parent = (_Var14.node)->parent;
          if (_Var14.node == *pp_Var17) {
            *pp_Var17 = p_Var11;
          }
          else {
            p_Var15 = (_Var14.node)->parent;
            if (_Var14.node == p_Var15->right) {
              p_Var15->right = p_Var11;
            }
            else {
              p_Var15->left = p_Var11;
            }
          }
          p_Var11->right = _Var14.node;
          (_Var14.node)->parent = p_Var11;
          break;
        }
LAB_002109f4:
        *(int *)p_Var11 = 0;
      }
      _Var14.node = (_Var14.node)->parent;
      p_Var16 = _Var14.node;
      p_Var11 = *pp_Var17;
    }
    if (p_Var16 != (__rb_tree_node_base *)0x0) {
      *(int *)p_Var16 = 1;
    }
  }
                    /* end of inlined section */
  ___7CTilePt((CTilePt *)((int)pAddress.field0_0x0.node + 0x10),2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
  free((void *)pAddress.field0_0x0.node);
                    /* end of inlined section */
                    /* inlined from Tree.h */
                    /* end of inlined section */
  (this->fDiagonals).t.node_count = (this->fDiagonals).t.node_count - 1;
  return false;
}

bool RoomManagerImpl::ResolveDiagonal(CTilePt &inPt, Room **outRoom1, Room **outRoom2, Sides *outSide1, Sides *outSide2) {
	CTilePt &x;
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *x;
	pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > v;
	
  undefined *puVar1;
  DiagonalNode *pDVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  RoomManager__vtable *pRVar6;
  ulong *puVar7;
  bool bVar8;
  __rb_tree_iterator_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ _Var9;
  Room *pRVar10;
  CTilePt *pCVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  pair_const_CTilePt_pair_DiagonalNode_DiagonalNode___ v;
  
  uVar14 = (ulong)(int)&v;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Map.h */
  _Var9 = find__t7rb_tree5Z7CTilePtZt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNodeZt9select1st1Zt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNodeZt4less1Z7CTilePtZt23__malloc_alloc_template1i0RC7CTilePt
                    (&(this->fDiagonals).t,inPt);
                    /* end of inlined section */
  if (_Var9.field0_0x0.node == (__rb_tree_node_base *)(this->fDiagonals).t.header) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    pRVar6 = (this->field0_0x0).__vtable;
    sVar5 = *(short *)&pRVar6->GetHouse;
    uVar12 = (*(code *)_5Globs_pFixedWorld->__vtable[1].OutOfBounds)
                       ((int)&_5Globs_pFixedWorld->__vtable +
                        (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].GetMaxSize,inPt);
    pRVar10 = (Room *)(*(code *)pRVar6->ClearRoomPartitions)
                                ((int)this->mRoomAmbient + sVar5 + -0x38,uVar12);
    *outRoom1 = pRVar10;
    bVar8 = false;
    *outRoom2 = pRVar10;
    *outSide1 = kNone;
    *outSide2 = kNone;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Pair.h */
    pCVar11 = __7CTilePtRC7CTilePt(&v.first,(CTilePt *)((int)_Var9.field0_0x0.node + 0x10));
                    /* end of inlined section */
    pRVar6 = (this->field0_0x0).__vtable;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Pair.h */
    uVar3 = (int)_Var9.field0_0x0.node + 0x1bU & 7;
    uVar4 = (int)_Var9.field0_0x0.node + 0x14U & 7;
    uVar13 = (*(long *)(((int)_Var9.field0_0x0.node + 0x1bU) - uVar3) << (7 - uVar3) * 8 |
             (long)(int)pCVar11 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
             *(ulong *)(((int)_Var9.field0_0x0.node + 0x14U) - uVar4) >> uVar4 * 8;
    uVar3 = (int)_Var9.field0_0x0.node + 0x23U & 7;
    uVar4 = (int)_Var9.field0_0x0.node + 0x1cU & 7;
    uVar14 = (*(long *)(((int)_Var9.field0_0x0.node + 0x23U) - uVar3) << (7 - uVar3) * 8 |
             uVar14 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
             *(ulong *)(((int)_Var9.field0_0x0.node + 0x1cU) - uVar4) >> uVar4 * 8;
    puVar1 = (undefined *)((int)&v.second.first.mSide + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar7 = (ulong *)(puVar1 + -uVar3);
    *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | uVar13 >> (7 - uVar3) * 8;
    uVar3 = (uint)&v.second & 7;
    puVar7 = (ulong *)((int)&v.second - uVar3);
    *puVar7 = uVar13 << uVar3 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    puVar1 = (undefined *)((int)&v.second.second.mSide + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar7 = (ulong *)(puVar1 + -uVar3);
    *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | uVar14 >> (7 - uVar3) * 8;
    pDVar2 = &v.second.second;
    uVar3 = (uint)pDVar2 & 7;
    puVar7 = (ulong *)((int)pDVar2 - uVar3);
    *puVar7 = uVar14 << uVar3 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    /* end of inlined section */
    pRVar10 = (Room *)(*(code *)pRVar6->ClearRoomPartitions)
                                ((int)this->mRoomAmbient + *(short *)&pRVar6->GetHouse + -0x38,
                                 v.second.first.mID);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Rooms.h */
                    /* end of inlined section */
    *outRoom1 = pRVar10;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Rooms.h */
                    /* end of inlined section */
    *outSide1 = v.second.first.mSide;
    if ((ushort)v.second.second.mID < 0xfffb) {
      pRVar6 = (this->field0_0x0).__vtable;
      pRVar10 = (Room *)(*(code *)pRVar6->ClearRoomPartitions)
                                  ((int)this->mRoomAmbient + *(short *)&pRVar6->GetHouse + -0x38);
      *outRoom2 = pRVar10;
      *outSide2 = v.second.second.mSide;
    }
    else {
      *outRoom2 = *outRoom1;
      *outSide1 = kNone;
      *outSide2 = kNone;
    }
    ___7CTilePt(&v.first,2);
    bVar8 = true;
  }
  return bVar8;
}

bool RoomManagerImpl::ResolveDiagonal(CTilePt &inPt, short unsigned int *outRoom1, short unsigned int *outRoom2, Sides *outSide1, Sides *outSide2) {
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *x;
	pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > v;
	
  undefined *puVar1;
  DiagonalNode *pDVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulong *puVar6;
  __rb_tree_iterator_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ _Var7;
  CTilePt *pCVar8;
  ulong uVar9;
  ulong in_v1;
  ulong uVar10;
  pair_const_CTilePt_pair_DiagonalNode_DiagonalNode___ v;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Map.h */
  _Var7 = find__t7rb_tree5Z7CTilePtZt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNodeZt9select1st1Zt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNodeZt4less1Z7CTilePtZt23__malloc_alloc_template1i0RC7CTilePt
                    (&(this->fDiagonals).t,inPt);
                    /* end of inlined section */
  bVar3 = _Var7.field0_0x0.node == (__rb_tree_node_base *)(this->fDiagonals).t.header;
  if (bVar3) {
    *outRoom1 = 0;
    *outRoom2 = 0;
    *outSide1 = kNone;
    *outSide2 = kNone;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Pair.h */
    pCVar8 = __7CTilePtRC7CTilePt(&v.first,(CTilePt *)((int)_Var7.field0_0x0.node + 0x10));
    uVar4 = (int)_Var7.field0_0x0.node + 0x1bU & 7;
    uVar5 = (int)_Var7.field0_0x0.node + 0x14U & 7;
    uVar9 = (*(long *)(((int)_Var7.field0_0x0.node + 0x1bU) - uVar4) << (7 - uVar4) * 8 |
            (long)(int)pCVar8 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
            *(ulong *)(((int)_Var7.field0_0x0.node + 0x14U) - uVar5) >> uVar5 * 8;
    uVar4 = (int)_Var7.field0_0x0.node + 0x23U & 7;
    uVar5 = (int)_Var7.field0_0x0.node + 0x1cU & 7;
    uVar10 = (*(long *)(((int)_Var7.field0_0x0.node + 0x23U) - uVar4) << (7 - uVar4) * 8 |
             in_v1 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
             *(ulong *)(((int)_Var7.field0_0x0.node + 0x1cU) - uVar5) >> uVar5 * 8;
    puVar1 = (undefined *)((int)&v.second.first.mSide + 3);
    uVar4 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar4);
    *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar9 >> (7 - uVar4) * 8;
    uVar4 = (uint)&v.second & 7;
    puVar6 = (ulong *)((int)&v.second - uVar4);
    *puVar6 = uVar9 << uVar4 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    puVar1 = (undefined *)((int)&v.second.second.mSide + 3);
    uVar4 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar4);
    *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar10 >> (7 - uVar4) * 8;
    pDVar2 = &v.second.second;
    uVar4 = (uint)pDVar2 & 7;
    puVar6 = (ulong *)((int)pDVar2 - uVar4);
    *puVar6 = uVar10 << uVar4 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
                    /* end of inlined section */
    *outRoom1 = v.second.first.mID;
    *outSide1 = v.second.first.mSide;
    *outRoom2 = v.second.second.mID;
    *outSide2 = v.second.second.mSide;
    ___7CTilePt(&v.first,2);
  }
  return !bVar3;
}

void RoomManagerImpl::ResetRooms(int inLevel) {
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > i;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	Room *rm;
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > *this;
	__rb_tree_node_base *y;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	Room *rm;
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > *this;
	__rb_tree_base_iterator *this;
	__rb_tree_node_base *y;
	
  __rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ *p_Var1;
  Room__vtable *pRVar2;
  int iVar3;
  RoomManager__vtable *pRVar4;
  long lVar5;
  __rb_tree_base_iterator _Var6;
  __rb_tree_base_iterator _Var7;
  RoomImpl *pRVar8;
  __rb_tree_iterator_pair_const_short_unsigned_int_RoomImpl_____ i;
  
  if (inLevel == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Map.h */
    p_Var1 = (this->fRooms).t.header;
    i.field0_0x0.node = *(__rb_tree_base_iterator *)&p_Var1->field0_0x0;
                    /* end of inlined section */
    if (i.field0_0x0.node != (__rb_tree_base_iterator)p_Var1) {
                    /* inlined from Tree.h */
                    /* end of inlined section */
      pRVar8 = (RoomImpl *)((__rb_tree_node_base *)((int)i.field0_0x0.node + 0x10))->parent;
      while( true ) {
        pRVar2 = (pRVar8->field0_0x0).__vtable;
        lVar5 = (*(code *)pRVar2->ComputeCutawayMatrix)
                          ((int)&(pRVar8->field0_0x0).__vtable + (int)*(short *)&pRVar2->GetArea);
        if (lVar5 != 0) {
          pRVar2 = (pRVar8->field0_0x0).__vtable;
          (*(code *)pRVar2->CollectTileStats)
                    ((int)&(pRVar8->field0_0x0).__vtable +
                     (int)*(short *)&pRVar2->CollectObjectStats);
                    /* inlined from Tree.h */
        }
        _Var7.node = *(__rb_tree_node_base **)((int)i.field0_0x0.node + 0xc);
        if (_Var7.node == (__rb_tree_node_base *)0x0) {
          _Var7.node = *(__rb_tree_node_base **)((int)i.field0_0x0.node + 4);
          if (i.field0_0x0.node == (__rb_tree_base_iterator)(_Var7.node)->right) {
            do {
              i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var7.node;
              _Var7.node = *(__rb_tree_node_base **)((int)i.field0_0x0.node + 4);
            } while (i.field0_0x0.node == (__rb_tree_base_iterator)(_Var7.node)->right);
          }
          if (*(__rb_tree_node_base **)((int)i.field0_0x0.node + 0xc) != _Var7.node) {
            i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var7.node;
          }
                    /* end of inlined section */
          _Var6.node = (__rb_tree_node_base *)(this->fRooms).t.header;
        }
        else if ((_Var7.node)->left == (__rb_tree_node_base *)0x0) {
          _Var6.node = (__rb_tree_node_base *)(this->fRooms).t.header;
          i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var7.node;
        }
        else {
          do {
            _Var7.node = (_Var7.node)->left;
          } while ((_Var7.node)->left != (__rb_tree_node_base *)0x0);
          _Var6.node = (__rb_tree_node_base *)(this->fRooms).t.header;
          i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var7.node;
        }
                    /* inlined from Tree.h */
                    /* end of inlined section */
        if (i.field0_0x0.node == (__rb_tree_base_iterator)_Var6.node) break;
        pRVar8 = *(RoomImpl **)((int)i.field0_0x0.node + 0x14);
      }
      pRVar4 = (this->field0_0x0).__vtable;
      goto LAB_00210fe0;
    }
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Map.h */
    p_Var1 = (this->fRooms).t.header;
    i.field0_0x0.node = *(__rb_tree_base_iterator *)&p_Var1->field0_0x0;
                    /* end of inlined section */
    if (i.field0_0x0.node != (__rb_tree_base_iterator)p_Var1) {
                    /* inlined from Tree.h */
                    /* end of inlined section */
      pRVar8 = (RoomImpl *)((__rb_tree_node_base *)((int)i.field0_0x0.node + 0x10))->parent;
      while( true ) {
        pRVar2 = (pRVar8->field0_0x0).__vtable;
        lVar5 = (*(code *)pRVar2->ComputeCutawayMatrix)
                          ((int)&(pRVar8->field0_0x0).__vtable + (int)*(short *)&pRVar2->GetArea);
        if ((lVar5 != 0) &&
           (pRVar2 = (pRVar8->field0_0x0).__vtable,
           iVar3 = (*(code *)pRVar2[1].GetArea)
                             ((int)&(pRVar8->field0_0x0).__vtable +
                              (int)*(short *)&pRVar2[1].GetObjectDensity), iVar3 == inLevel)) {
          pRVar2 = (pRVar8->field0_0x0).__vtable;
          (*(code *)pRVar2->CollectTileStats)
                    ((int)&(pRVar8->field0_0x0).__vtable +
                     (int)*(short *)&pRVar2->CollectObjectStats);
                    /* inlined from Tree.h */
        }
        _Var7.node = *(__rb_tree_node_base **)((int)i.field0_0x0.node + 0xc);
        if (_Var7.node == (__rb_tree_node_base *)0x0) {
          _Var7.node = *(__rb_tree_node_base **)((int)i.field0_0x0.node + 4);
          if (i.field0_0x0.node == (__rb_tree_base_iterator)(_Var7.node)->right) {
            do {
              i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var7.node;
              _Var7.node = *(__rb_tree_node_base **)((int)i.field0_0x0.node + 4);
            } while (i.field0_0x0.node == (__rb_tree_base_iterator)(_Var7.node)->right);
          }
          if (*(__rb_tree_node_base **)((int)i.field0_0x0.node + 0xc) != _Var7.node) {
            i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var7.node;
          }
                    /* end of inlined section */
          _Var6.node = (__rb_tree_node_base *)(this->fRooms).t.header;
        }
        else if ((_Var7.node)->left == (__rb_tree_node_base *)0x0) {
          _Var6.node = (__rb_tree_node_base *)(this->fRooms).t.header;
          i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var7.node;
        }
        else {
          do {
            _Var7.node = (_Var7.node)->left;
          } while ((_Var7.node)->left != (__rb_tree_node_base *)0x0);
          _Var6.node = (__rb_tree_node_base *)(this->fRooms).t.header;
          i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var7.node;
        }
                    /* inlined from Tree.h */
                    /* end of inlined section */
        if (i.field0_0x0.node == (__rb_tree_base_iterator)_Var6.node) break;
        pRVar8 = *(RoomImpl **)((int)i.field0_0x0.node + 0x14);
      }
    }
  }
  pRVar4 = (this->field0_0x0).__vtable;
LAB_00210fe0:
  (*(code *)pRVar4[1].AllRoomsLightingChanged)
            ((int)this->mRoomAmbient + *(short *)&pRVar4[1].RoomScoreChanged + -0x38,inLevel);
  return;
}

void RoomManagerImpl::InitLights() {
  return;
}

float RoomManagerImpl::GetOutsideAmbientLevel() {
	float ambient;
	
  long lVar1;
  float fVar2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  lVar1 = (*(code *)_5Globs_pSimulator->__vtable[1].DoStream)
                    ((int)&_5Globs_pSimulator->__vtable +
                     (int)*(short *)&_5Globs_pSimulator->__vtable[1].DoCommand);
  if (lVar1 == 1) {
LAB_00211080:
    fVar2 = 0.5;
  }
  else {
    if (1 < lVar1) {
      if (lVar1 == 2) {
        fVar2 = 0.0;
        goto LAB_00211088;
      }
      if (lVar1 == 3) goto LAB_00211080;
    }
    fVar2 = 1.0;
  }
LAB_00211088:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  return _5Globs_pLightingParameters->gTweeks[3] * fVar2;
}

void RoomManagerImpl::ClearRoomPartitions() {
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > i;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	RoomImpl *aRoom;
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > *this;
	__rb_tree_node_base *y;
	
  __rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ *p_Var1;
  RoomImpl *this_00;
  Room__vtable *pRVar2;
  long lVar3;
  __rb_tree_base_iterator _Var4;
  __rb_tree_base_iterator _Var5;
  __rb_tree_iterator_pair_const_short_unsigned_int_RoomImpl_____ i;
  
                    /* inlined from Tree.h */
  p_Var1 = (this->fRooms).t.header;
  i.field0_0x0.node = *(__rb_tree_base_iterator *)&p_Var1->field0_0x0;
                    /* end of inlined section */
  if (i.field0_0x0.node != (__rb_tree_base_iterator)p_Var1) {
                    /* inlined from Tree.h */
                    /* end of inlined section */
    this_00 = (RoomImpl *)((__rb_tree_node_base *)((int)i.field0_0x0.node + 0x10))->parent;
    while( true ) {
      pRVar2 = (this_00->field0_0x0).__vtable;
      lVar3 = (*(code *)pRVar2->ComputeCutawayMatrix)
                        ((int)&(this_00->field0_0x0).__vtable + (int)*(short *)&pRVar2->GetArea);
      if (lVar3 != 0) {
        ClearPartition__8RoomImpl(this_00);
                    /* inlined from Tree.h */
      }
      _Var5.node = *(__rb_tree_node_base **)((int)i.field0_0x0.node + 0xc);
      if (_Var5.node == (__rb_tree_node_base *)0x0) {
        _Var5.node = *(__rb_tree_node_base **)((int)i.field0_0x0.node + 4);
        if (i.field0_0x0.node == (__rb_tree_base_iterator)(_Var5.node)->right) {
          do {
            i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var5.node;
            _Var5.node = *(__rb_tree_node_base **)((int)i.field0_0x0.node + 4);
          } while (i.field0_0x0.node == (__rb_tree_base_iterator)(_Var5.node)->right);
        }
        if (*(__rb_tree_node_base **)((int)i.field0_0x0.node + 0xc) != _Var5.node) {
          i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var5.node;
        }
                    /* end of inlined section */
        _Var4.node = (__rb_tree_node_base *)(this->fRooms).t.header;
      }
      else if ((_Var5.node)->left == (__rb_tree_node_base *)0x0) {
        _Var4.node = (__rb_tree_node_base *)(this->fRooms).t.header;
        i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var5.node;
      }
      else {
        do {
          _Var5.node = (_Var5.node)->left;
        } while ((_Var5.node)->left != (__rb_tree_node_base *)0x0);
        _Var4.node = (__rb_tree_node_base *)(this->fRooms).t.header;
        i.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var5.node;
      }
                    /* inlined from Tree.h */
                    /* end of inlined section */
      if (i.field0_0x0.node == (__rb_tree_base_iterator)_Var4.node) break;
      this_00 = *(RoomImpl **)((int)i.field0_0x0.node + 0x14);
    }
  }
  return;
}

void RoomManagerImpl::OffsetWorld(CTilePt &inOffset) {
  RoomManager__vtable *pRVar1;
  
  pRVar1 = (this->field0_0x0).__vtable;
  (*(code *)pRVar1[1].PrintStats)
            ((int)this->mRoomAmbient + *(short *)&pRVar1[1].AllRoomsScoreChanged + -0x38,0);
  pRVar1 = (this->field0_0x0).__vtable;
  (*(code *)pRVar1[1].GetOutsideObjectScore)
            ((int)this->mRoomAmbient + *(short *)&pRVar1[1].GetOutsideAmbientLevel + -0x38);
  return;
}

float RoomManagerImpl::GetRoomAmbientLight(FTilePt &inViewCoords, int level) {
  return 1.0;
}

void RoomManagerImpl::ApplyLightLayer(vector<CTilePt,__malloc_alloc_template<0> > &inList, float val) {
	int level;
	UInt8 val8;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	int i;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	cArray<unsigned char> *this;
	
  cArray_unsigned_char_ *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CTilePt *this_00;
  int iVar5;
  int iVar6;
  
  iVar2 = GetLevel__C7CTilePt(inList->start);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  iVar5 = ((int)inList->finish - (int)inList->start) * -0x55555555;
                    /* end of inlined section */
  if (0 < iVar5) {
    iVar6 = 0;
    do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      iVar5 = iVar5 + -1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
      pcVar1 = this->mRoomAmbient[iVar2 + -1];
      this_00 = (CTilePt *)(&inList->start->mX + iVar6);
      iVar6 = iVar6 + 3;
      iVar3 = GetX__C7CTilePt(this_00);
      iVar4 = GetY__C7CTilePt(this_00);
                    /* end of inlined section */
      *(char *)((int)(pcVar1->field0_0x0).field0_0x0.fData[iVar3] + iVar4) =
           (char)(int)(val * 255.0 + 0.5);
    } while (iVar5 != 0);
  }
  return;
}

RoomImpl* RoomImpl::RoomImpl(short unsigned int inVal, RoomManagerImpl *inMgr) {
	Room *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<EVec3,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (Room__vtable *)_vt_8RoomImpl;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  (this->fRoomList).start = (CTilePt *)0x0;
  (this->fRoomList).end_of_storage = (CTilePt *)0x0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  (this->fRoomList).finish = (CTilePt *)0x0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  (this->fLightPositions).start = (EVec3 *)0x0;
  (this->fLightPositions).end_of_storage = (EVec3 *)0x0;
  (this->fLightPositions).finish = (EVec3 *)0x0;
  (this->fPartition).start = (PenaltyRect *)0x0;
  (this->fPartition).end_of_storage = (PenaltyRect *)0x0;
                    /* end of inlined section */
  (this->fPartition).finish = (PenaltyRect *)0x0;
  __11BitMatrix64(&this->fCutawayMatrix);
  this->fRoomID = inVal;
  this->fRoomManager = inMgr;
  *(undefined4 *)&this->fOverheadLightsOn = 0;
  Clear__8RoomImpl(this);
  return this;
}

void RoomImpl::~RoomImpl(int __in_chrg) {
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	PenaltyRect *last;
	PenaltyRect *first;
	PenaltyRect *pointer;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	void *pAddress;
	vector<EVec3,__malloc_alloc_template<0> > *this;
	EVec3 *last;
	EVec3 *first;
	EVec3 *pointer;
	vector<EVec3,__malloc_alloc_template<0> > *this;
	void *pAddress;
	CTilePt *last;
	CTilePt *first;
	CTilePt *pointer;
	Room *this;
	int __in_chrg;
	void *pAddress;
	
  PenaltyRect *pPVar1;
  CTilePt *pCVar2;
  EVec3 *pEVar3;
  PenaltyRect *pPVar4;
  CTilePt *pCVar5;
  
  (this->field0_0x0).__vtable = (Room__vtable *)_vt_8RoomImpl;
  Clear__8RoomImpl(this);
  ___11BitMatrix64(&this->fCutawayMatrix,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pPVar4 = (this->fPartition).start;
  pPVar1 = (this->fPartition).finish;
  if (pPVar4 == pPVar1) {
    pPVar4 = (this->fPartition).start;
  }
  else {
    do {
      pPVar4 = pPVar4 + 1;
    } while (pPVar4 != pPVar1);
    pPVar4 = (this->fPartition).start;
  }
  if ((pPVar4 != (PenaltyRect *)0x0) &&
     (((int)(this->fPartition).end_of_storage - (int)pPVar4) * -0x33333333 >> 2 != 0)) {
    free(pPVar4);
  }
  for (pEVar3 = (this->fLightPositions).start; pEVar3 != (this->fLightPositions).finish;
      pEVar3 = pEVar3 + 1) {
  }
  pEVar3 = (this->fLightPositions).start;
  if (pEVar3 == (EVec3 *)0x0) {
    pCVar5 = (this->fRoomList).start;
  }
  else if (((int)(this->fLightPositions).end_of_storage - (int)pEVar3) * -0x55555555 >> 2 == 0) {
    pCVar5 = (this->fRoomList).start;
  }
  else {
    free(pEVar3);
    pCVar5 = (this->fRoomList).start;
  }
  pCVar2 = (this->fRoomList).finish;
  if (pCVar5 == pCVar2) {
    pCVar5 = (this->fRoomList).start;
  }
  else {
    do {
      ___7CTilePt(pCVar5,2);
      pCVar5 = pCVar5 + 1;
    } while (pCVar5 != pCVar2);
    pCVar5 = (this->fRoomList).start;
  }
  if ((pCVar5 != (CTilePt *)0x0) &&
     (((int)(this->fRoomList).end_of_storage - (int)pCVar5) * -0x55555555 != 0)) {
    free(pCVar5);
  }
  (this->field0_0x0).__vtable = (Room__vtable *)_vt_4Room;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

void RoomImpl::Clear() {
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	PenaltyRect *last;
	PenaltyRect *first;
	PenaltyRect *pointer;
	EVec3 *first;
	EVec3 *last;
	EVec3 *pointer;
	
  PenaltyRect *pPVar1;
  EVec3 *pEVar2;
  PenaltyRect *pPVar3;
  EVec3 *pEVar4;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  this->fUsed = 0;
  this->fArea = 0;
  this->fObjectCount = 0;
  this->fWindowLightContribution = 0;
  this->fObjLightContribution = 0;
  this->fDirtyTotal = 0;
  this->fRoomImpactContribution = 0;
  this->fGoodObjectCount = 0;
  this->fBedCount = 0;
  this->fBathFixtureCount = 0;
  this->fFlooredArea = 0;
  this->fWallSegmentCount = 0;
  this->fPatternedWallSegmentCount = 0;
  this->fBasicScore = 0.0;
  this->fLightLevel = 0.0;
  *(undefined4 *)&this->fKnowIfOutside = 0;
  *(undefined4 *)&this->fOutside = 0;
  this->fLampCount = 0;
  this->fPeopleCount = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
  pPVar1 = (this->fPartition).start;
  for (pPVar3 = pPVar1; pPVar3 != (this->fPartition).finish; pPVar3 = pPVar3 + 1) {
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  (this->fPartition).finish = pPVar1;
                    /* end of inlined section */
  *(undefined4 *)&this->fDirty = 1;
  *(undefined4 *)&this->fWantsRoof = 0;
  *(undefined4 *)&this->fIsPool = 0;
  *(undefined4 *)&this->fIsFlat = 1;
  *(undefined4 *)&this->fKnowIfFlat = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
  pEVar2 = (this->fLightPositions).start;
  for (pEVar4 = pEVar2; pEVar4 != (this->fLightPositions).finish; pEVar4 = pEVar4 + 1) {
  }
  (this->fLightPositions).finish = pEVar2;
  return;
}

Partition* RoomImpl::GetPartition() {
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	
  Room__vtable *pRVar1;
  short inRoom;
  
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  if (((int)(this->fPartition).finish - (int)(this->fPartition).start) * -0x33333333 >> 2 == 0) {
    pRVar1 = (this->field0_0x0).__vtable;
    inRoom = (*(code *)pRVar1->GetObjectDensity)
                       ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pRVar1->InvalidateRoom);
    BuildRoomPartition__FUsPt6vector2Z11PenaltyRectZt23__malloc_alloc_template1i0
              (inRoom,&this->fPartition);
  }
  return &this->fPartition;
}

void RoomImpl::ComputeRoom() {
	float objAmbient;
	float windowAmbient;
	float outsideAmbient;
	float tem;
	float score;
	float areaScore;
	float lightScore;
	float effectiveArea;
	float roomImpactScore;
	float floorScore;
	float wallScore;
	
  Room__vtable *pRVar1;
  RoomManager__vtable *pRVar2;
  int iVar3;
  long lVar4;
  RoomManagerImpl *this_00;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pRVar1 = (this->field0_0x0).__vtable;
  lVar4 = (**(code **)(pRVar1 + 1))
                    ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pRVar1->WantsRoof);
  if (lVar4 == 0) {
    pRVar1 = (this->field0_0x0).__vtable;
    fVar6 = 0.01;
    fVar7 = (float)this->fObjLightContribution * 0.01;
    iVar3 = (*(code *)pRVar1[1].IsOutside)
                      ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pRVar1[1].SetAmbientLight
                      );
    pRVar2 = (this->fRoomManager->field0_0x0).__vtable;
    fVar8 = (fVar7 / (float)iVar3) * sLightContributionFactor;
    fVar5 = (float)(*(code *)pRVar2[1].GetNewRoom)
                             ((int)this->fRoomManager->mRoomAmbient +
                              *(short *)&pRVar2[1].GetRoom + -0x38);
    pRVar1 = (this->field0_0x0).__vtable;
    fVar7 = (float)this->fWindowLightContribution * fVar6;
    iVar3 = (*(code *)pRVar1[1].IsOutside)
                      ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pRVar1[1].SetAmbientLight
                      );
    fVar7 = (fVar7 / (float)iVar3) * fVar5 * sLightContributionFactor;
    if (fVar5 < fVar7) {
      fVar7 = fVar5;
    }
    fVar7 = fVar7 + fVar8;
    if (fVar7 < fVar6) {
      this->fLightLevel = 0.0;
    }
    else if (0.99 < fVar7) {
      this->fLightLevel = 1.0;
    }
    else {
      this->fLightLevel = fVar7;
    }
  }
  else {
    pRVar2 = (this->fRoomManager->field0_0x0).__vtable;
    fVar7 = (float)(*(code *)pRVar2[1].GetNewRoom)
                             ((int)this->fRoomManager->mRoomAmbient +
                              *(short *)&pRVar2[1].GetRoom + -0x38);
    this->fLightLevel = fVar7;
  }
  pRVar1 = (this->field0_0x0).__vtable;
  lVar4 = (**(code **)(pRVar1 + 1))
                    ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pRVar1->WantsRoof);
  if (lVar4 == 0) {
    pRVar1 = (this->field0_0x0).__vtable;
    iVar3 = (*(code *)pRVar1[1].IsOutside)
                      ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pRVar1[1].SetAmbientLight
                      );
    fVar7 = (float)iVar3;
    if (sAreaScoreClip < (float)iVar3) {
      fVar7 = sAreaScoreClip;
    }
    pRVar1 = (this->field0_0x0).__vtable;
    fVar5 = this->fLightLevel * sLightScoreRange + sLightScoreLowLimit;
    fVar8 = (fVar7 / sAreaScoreClip) * sAreaScoreRange + sAreaScoreLowLimit;
    iVar3 = (*(code *)pRVar1[1].IsOutside)
                      ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pRVar1[1].SetAmbientLight
                      );
    fVar6 = (float)iVar3;
    fVar7 = sEffectiveAreaLowClip;
    if ((sEffectiveAreaLowClip <= fVar6) && (fVar7 = fVar6, sEffectiveAreaHighClip < fVar6)) {
      fVar7 = sEffectiveAreaHighClip;
    }
    fVar7 = fVar8 + fVar5 + ((float)this->fRoomImpactContribution * sRoomImpactMultiplier) / fVar7 +
            ((float)this->fFlooredArea / (float)this->fArea) * sFloorScoreRange +
            sFloorScoreLowLimit +
            ((float)this->fPatternedWallSegmentCount / (float)this->fWallSegmentCount) *
            sWallScoreRange + sWallScoreLowLimit;
    this->fBasicScore = fVar7;
    if (fVar7 < -100.0) {
      this->fBasicScore = -100.0;
    }
    else if (100.0 < fVar7) {
      this->fBasicScore = 100.0;
    }
  }
  else {
    this->fBasicScore =
         (float)this->fGoodObjectCount * sOutdoorGoodMultiplier +
         (float)this->fRoomImpactContribution * sOutdoorBadMultiplier;
  }
  pRVar1 = (this->field0_0x0).__vtable;
  lVar4 = (**(code **)(pRVar1 + 1))
                    ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pRVar1->WantsRoof);
  if (lVar4 != 0) {
    ApplyLightLayer__15RoomManagerImplRCt6vector2Z7CTilePtZt23__malloc_alloc_template1i0f
              (this->fRoomManager,&this->fRoomList,this->fLightLevel);
    return;
  }
  if (*(int *)&this->fIsPool == 0) {
    if (*(int *)&this->fOverheadLightsOn == 0) {
      fVar7 = this->fLightLevel;
    }
    else if (this->fLampCount == 0) {
      if (this->fPeopleCount == 0) {
        fVar7 = this->fLightLevel;
      }
      else {
        if (this->fLightLevel < 0.8) {
          this_00 = this->fRoomManager;
          goto LAB_00211a7c;
        }
        fVar7 = this->fLightLevel;
      }
    }
    else {
      fVar7 = this->fLightLevel;
    }
    ApplyLightLayer__15RoomManagerImplRCt6vector2Z7CTilePtZt23__malloc_alloc_template1i0f
              (this->fRoomManager,&this->fRoomList,fVar7);
  }
  else {
    this_00 = this->fRoomManager;
LAB_00211a7c:
    ApplyLightLayer__15RoomManagerImplRCt6vector2Z7CTilePtZt23__malloc_alloc_template1i0f
              (this_00,&this->fRoomList,0.8);
  }
  return;
}

bool IsScoredStyle(WallStyle s) {
	WallStyle in;
	WallStyle in;
	WallStyle in;
	
  bool bVar1;
  bool bVar2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/wallStyles.h */
  bVar1 = true;
  bVar2 = false;
  if ((s != kNormalStyle) &&
     (((s == kCutawayTransitionLeft || (s == kCutawayTransitionRight)) ||
      (bVar1 = false, s == kCutawayTransitionThickLeft)))) {
    bVar1 = true;
  }
                    /* end of inlined section */
  if (bVar1) {
    bVar2 = true;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/wallStyles.h */
    if (((s == kDoorStyle) || (s == kDoorLeftStyle)) ||
       ((s == kDoorRightStyle || ((s == kFrenchDoorStyle || (bVar1 = false, s == kCustomDoorStyle)))
        ))) {
      bVar1 = true;
    }
                    /* end of inlined section */
    if (bVar1) {
      bVar2 = true;
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/wallStyles.h */
                    /* end of inlined section */
      if (s == kCustomWindowStyle) {
        bVar2 = true;
      }
    }
  }
  return bVar2;
}

void RoomImpl::CollectTileStats(CTilePt &tile) {
	TileWalls tw;
	static SegSearch segSrch[2] = {
		/* [0] = */ {
			/* .seg = */ kHorizDiag,
			/* .ds = */ {
				/* [0] = */ kTop,
				/* [1] = */ kBottom
			},
			/* .side = */ {
				/* [0] = */ kAbove,
				/* [1] = */ kBelow
			}
		},
		/* [1] = */ {
			/* .seg = */ kVertDiag,
			/* .ds = */ {
				/* [0] = */ kLeft,
				/* [1] = */ kRight
			},
			/* .side = */ {
				/* [0] = */ kLeft,
				/* [1] = */ kRight
			}
		}
	};
	SegSearch *ss;
	WallStyle style;
	bool hasPatt;
	bool hasFloor;
	int i;
	TileWallsSegment seg;
	
  Room__vtable *pRVar1;
  cFixedWorld__vtable *pcVar2;
  bool bVar3;
  cFixedWorld *pcVar4;
  bool bVar5;
  bool bVar6;
  WallStyle WVar7;
  WallPattern WVar8;
  FloorPattern FVar9;
  TileWallsSegment inSeg;
  int iVar10;
  long lVar11;
  undefined1 *puVar12;
  DiagonalSideSelector *pDVar13;
  TileWalls tw;
  
  pRVar1 = (this->field0_0x0).__vtable;
  lVar11 = (**(code **)(pRVar1 + 1))
                     ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pRVar1->WantsRoof);
  if (lVar11 != 0) {
    this->fArea = this->fArea + 2;
    return;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pFixedWorld->__vtable->ComputeArchValue)
            (&tw,(int)&_5Globs_pFixedWorld->__vtable +
                 (int)*(short *)&_5Globs_pFixedWorld->__vtable->ComputeRooms,tile);
  bVar5 = HasWall__C9TileWalls(&tw);
  pcVar4 = _5Globs_pFixedWorld;
  if (bVar5) {
    bVar5 = HasDiagonal__C9TileWalls(&tw);
    pcVar4 = _5Globs_pFixedWorld;
    if (!bVar5) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      this->fArea = this->fArea + 2;
      pcVar2 = pcVar4->__vtable;
      lVar11 = (*(code *)pcVar2->GetVertexConfig)
                         ((int)&pcVar4->__vtable + (int)*(short *)&pcVar2->IsOutside,tile);
      if (lVar11 != 0) {
        this->fFlooredArea = this->fFlooredArea + 2;
      }
      for (inSeg = First__C9TileWalls(&tw); inSeg != kNoWalls;
          inSeg = Next__C9TileWalls16TileWallsSegment(&tw,inSeg)) {
        WVar7 = GetStyle__C9TileWalls16TileWallsSegment(&tw,inSeg);
        bVar5 = IsScoredStyle__F9WallStyle(WVar7);
        if (bVar5) {
          this->fWallSegmentCount = this->fWallSegmentCount + 1;
          WVar8 = GetPattern__C9TileWalls16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                            (&tw,inSeg,kNotSpecified);
          if (WVar8 != kSheetRockPattern) {
            this->fPatternedWallSegmentCount = this->fPatternedWallSegmentCount + 1;
          }
        }
      }
      goto LAB_00211d9c;
    }
    puVar12 = segSrch_1384;
    this->fArea = this->fArea + 1;
    bVar5 = HasWall__C9TileWalls16TileWallsSegment(&tw,segSrch_1384._0_4_);
    if (!bVar5) {
      puVar12 = segSrch_1384 + 0x14;
    }
    bVar5 = false;
    bVar3 = false;
    WVar7 = GetStyle__C9TileWalls16TileWallsSegment(&tw,*(DiagonalSideSelector *)puVar12);
    iVar10 = 1;
    pDVar13 = (DiagonalSideSelector *)puVar12;
    do {
      pDVar13 = pDVar13 + 1;
      iVar10 = iVar10 + -1;
      WVar8 = GetPattern__C9TileWalls16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                        (&tw,*(DiagonalSideSelector *)puVar12,*pDVar13);
      if (WVar8 != kSheetRockPattern) {
        bVar5 = true;
      }
      FVar9 = GetFloorValue__C9TileWallsQ29TileWalls20DiagonalSideSelector(&tw,*pDVar13);
      if (FVar9 != kNoFloor) {
        bVar3 = true;
      }
    } while (-1 < iVar10);
    bVar6 = IsScoredStyle__F9WallStyle(WVar7);
    if ((bVar6) && (this->fWallSegmentCount = this->fWallSegmentCount + 1, bVar5)) {
      this->fPatternedWallSegmentCount = this->fPatternedWallSegmentCount + 1;
    }
    if (!bVar3) goto LAB_00211d9c;
    iVar10 = this->fFlooredArea + 1;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    this->fArea = this->fArea + 2;
    pcVar2 = pcVar4->__vtable;
    lVar11 = (*(code *)pcVar2->GetVertexConfig)
                       ((int)&pcVar4->__vtable + (int)*(short *)&pcVar2->IsOutside,tile);
    if (lVar11 == 0) goto LAB_00211d9c;
    iVar10 = this->fFlooredArea + 2;
  }
  this->fFlooredArea = iVar10;
LAB_00211d9c:
  ___9TileWalls(&tw,2);
  return;
}

void RoomImpl::CollectObjectStats(ObjectIterator objectIter) {
	ObjectIterator *this;
	cXObject *object;
	Int category;
	int roomImpact;
	ObjectIterator *this;
	int objContrib;
	FTilePt aPt;
	EVec3 position;
	int level;
	vector<EVec3,__malloc_alloc_template<0> > *this;
	vector<EVec3,__malloc_alloc_template<0> > *this;
	int level;
	FTilePt aPt;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  cXObject__15_2008 *pcVar5;
  EVec3 *position_00;
  Room__vtable *pRVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  ulong in_v0;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  cXObject__15_2008__vtable *pcVar14;
  uint in_a1_lo;
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
  undefined auStack_100 [7];
  undefined8 uStack_f9;
  FTilePt aPt;
  EVec3 position;
  CTilePt aCStack_d0 [5];
  CTilePt aCStack_c0 [5];
  float local_b0;
  ObjectIterator *local_ac;
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
  
  local_ac = (ObjectIterator *)auStack_100;
  local_50 = (int)unaff_s5;
  uStack_4c = (int)((ulong)unaff_s5 >> 0x20);
  local_10 = (int)unaff_retaddr;
  uStack_c = (int)((ulong)unaff_retaddr >> 0x20);
  local_20 = (int)unaff_s8;
  uStack_1c = (int)((ulong)unaff_s8 >> 0x20);
  local_30 = (int)unaff_s7;
  uStack_2c = (int)((ulong)unaff_s7 >> 0x20);
  local_40 = (int)unaff_s6;
  uStack_3c = (int)((ulong)unaff_s6 >> 0x20);
  local_60 = (int)unaff_s4;
  uStack_5c = (int)((ulong)unaff_s4 >> 0x20);
  local_70 = (int)unaff_s3;
  uStack_6c = (int)((ulong)unaff_s3 >> 0x20);
  local_80 = (int)unaff_s2;
  uStack_7c = (int)((ulong)unaff_s2 >> 0x20);
  local_90 = (int)unaff_s1;
  uStack_8c = (int)((ulong)unaff_s1 >> 0x20);
  local_a0 = (int)unaff_s0;
  uStack_9c = (int)((ulong)unaff_s0 >> 0x20);
  uVar2 = in_a1_lo + 7 & 7;
  uVar3 = in_a1_lo & 7;
  _auStack_100 = (*(long *)((in_a1_lo + 7) - uVar2) << (7 - uVar2) * 8 |
                 in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                 *(ulong *)(in_a1_lo - uVar3) >> uVar3 * 8;
  uStack_f9._1_4_ = *(IterateType *)(in_a1_lo + 8);
  puVar1 = auStack_100 + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | _auStack_100 >> (7 - uVar2) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
  stack0xffffff04 = (cXObject__15_2008 *)(_auStack_100 >> 0x20);
                    /* end of inlined section */
  if (stack0xffffff04 != (cXObject__15_2008 *)0x0) {
    local_a8 = aCStack_c0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
    do {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
      pcVar5 = local_ac->fCurrent;
                    /* end of inlined section */
      this->fObjectCount = this->fObjectCount + 1;
      lVar10 = (*(code *)pcVar5->__vtable->ReconType)
                         ((int)&pcVar5->_vb3534 + (int)*(short *)&pcVar5->__vtable->ReconStream,0x3b
                         );
      if (lVar10 < 8) {
        if (lVar10 < 5) {
          if (lVar10 != 4) {
            pcVar14 = pcVar5->__vtable;
            goto LAB_00211ed8;
          }
          this->fBedCount = this->fBedCount + 1;
        }
        else {
          this->fBathFixtureCount = this->fBathFixtureCount + 1;
        }
LAB_00211ed4:
        pcVar14 = pcVar5->__vtable;
      }
      else {
        if (lVar10 == 8) {
          pRVar6 = (this->field0_0x0).__vtable;
          uVar11 = (*(code *)pRVar6->GetObjectDensity)
                             ((int)&(this->field0_0x0).__vtable +
                              (int)*(short *)&pRVar6->InvalidateRoom);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Rooms.h */
                    /* end of inlined section */
          *(uint *)&this->fWantsRoof = (uint)((uVar11 & 0x3ff) != 0);
          goto LAB_00211ed4;
        }
        pcVar14 = pcVar5->__vtable;
      }
LAB_00211ed8:
      lVar10 = (*(code *)pcVar14[1].Pickup)((int)&pcVar5->_vb3534 + (int)*(short *)&pcVar14[1].Turn)
      ;
      if (lVar10 == 2) {
        this->fPeopleCount = this->fPeopleCount + 1;
        pcVar14 = pcVar5->__vtable;
      }
      else {
        pcVar14 = pcVar5->__vtable;
      }
      lVar10 = (*(code *)pcVar14[1].GetLocation)
                         ((int)&pcVar5->_vb3534 + (int)*(short *)&pcVar14[1].GetID);
      if (lVar10 == 0) {
LAB_002121f4:
        pcVar14 = pcVar5->__vtable;
      }
      else {
        lVar10 = (*(code *)pcVar5->__vtable[1].Pickup)
                           ((int)&pcVar5->_vb3534 + (int)*(short *)&pcVar5->__vtable[1].Turn);
        if (lVar10 == 8) {
          pcVar14 = pcVar5->__vtable;
        }
        else {
          this->fLampCount = this->fLampCount + 1;
          pcVar14 = pcVar5->__vtable;
        }
        lVar10 = (*(code *)pcVar14[1].GetLevel)
                           ((int)&pcVar5->_vb3534 + (int)*(short *)&pcVar14[1].GetLocation);
        pcVar14 = pcVar5->__vtable;
        if (lVar10 == 0) {
          iVar7 = (*(code *)pcVar14[1].GetPlacementInfo)
                            ((int)&pcVar5->_vb3534 + (int)*(short *)&pcVar14[1].FindGoodLocation);
          (*(code *)pcVar5->__vtable[1].UserCanPickup)
                    ((int)&pcVar5->_vb3534 + (int)*(short *)&pcVar5->__vtable[1].UserPlace,&aPt);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
          piVar8 = (int *)(*(code *)_5Globs_pFixedWorld->__vtable[1].GetWallManager)
                                    ((int)&_5Globs_pFixedWorld->__vtable +
                                     (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].
                                                     ComputeArchValue,iVar7 + -1);
          iVar9 = *piVar8;
          sVar4 = *(short *)(iVar9 + 0x40);
          __7CTilePtRC7FTilePti(local_a8,&aPt,iVar7);
          uVar13 = (*(code *)pcVar5->__vtable[1].GetTreeTab)
                             ((int)&pcVar5->_vb3534 + (int)*(short *)&pcVar5->__vtable[1].GetCTilePt
                             );
          (**(code **)(iVar9 + 0x44))((int)piVar8 + (int)sVar4,local_a8,uVar13);
          ___7CTilePt(local_a8,2);
          goto LAB_002121f4;
        }
        lVar12 = (*(code *)pcVar14[1].Pickup)
                           ((int)&pcVar5->_vb3534 + (int)*(short *)&pcVar14[1].Turn);
        if (lVar12 == 8) {
          this->fWindowLightContribution = this->fWindowLightContribution + (int)lVar10;
        }
        else {
          this->fObjLightContribution = this->fObjLightContribution + (int)lVar10;
        }
        lVar10 = (*(code *)pcVar5->__vtable[1].GetTreeTab)
                           ((int)&pcVar5->_vb3534 + (int)*(short *)&pcVar5->__vtable[1].GetCTilePt);
        pcVar14 = pcVar5->__vtable;
        if (lVar10 == 1) {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
          (*(code *)pcVar14[1].UserCanPickup)
                    ((int)&pcVar5->_vb3534 + (int)*(short *)&pcVar14[1].UserPlace,&aPt);
          local_b0 = 0.0;
          IsoToWorld__FRC7FTilePtRCf(&position,&aPt,&local_b0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
          position.field0_0x0.d[1] = position.field0_0x0.d[1] + 5.0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
          position_00 = (this->fLightPositions).finish;
          if (position_00 == (this->fLightPositions).end_of_storage) {
            insert_aux__t6vector2Z5EVec3Zt23__malloc_alloc_template1i0P5EVec3RC5EVec3
                      (&this->fLightPositions,position_00,&position);
          }
          else {
            (position_00->field0_0x0).d[0] = position.field0_0x0.d[0];
            (position_00->field0_0x0).d[1] = position.field0_0x0.d[1];
            (position_00->field0_0x0).d[2] = position.field0_0x0.d[2];
            (this->fLightPositions).finish = (this->fLightPositions).finish + 1;
          }
                    /* end of inlined section */
          iVar7 = (*(code *)pcVar5->__vtable[1].GetPlacementInfo)
                            ((int)&pcVar5->_vb3534 +
                             (int)*(short *)&pcVar5->__vtable[1].FindGoodLocation);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
          piVar8 = (int *)(*(code *)_5Globs_pFixedWorld->__vtable[1].GetWallManager)
                                    ((int)&_5Globs_pFixedWorld->__vtable +
                                     (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].
                                                     ComputeArchValue,iVar7 + -1);
          iVar9 = *piVar8;
          sVar4 = *(short *)(iVar9 + 0x40);
          __7CTilePtRC7FTilePti(aCStack_d0,&aPt,iVar7);
          uVar13 = (*(code *)pcVar5->__vtable[1].GetTreeTab)
                             ((int)&pcVar5->_vb3534 + (int)*(short *)&pcVar5->__vtable[1].GetCTilePt
                             );
          (**(code **)(iVar9 + 0x44))((int)piVar8 + (int)sVar4,aCStack_d0,uVar13);
          ___7CTilePt(aCStack_d0,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
          piVar8 = (int *)(*(code *)_5Globs_pFixedWorld->__vtable[1].GetWallManager)
                                    ((int)&_5Globs_pFixedWorld->__vtable +
                                     (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].
                                                     ComputeArchValue,iVar7 + -1);
          iVar9 = *piVar8;
          sVar4 = *(short *)(iVar9 + 0x38);
          __7CTilePtRC7FTilePti(aCStack_d0,&aPt,iVar7);
          uVar13 = (*(code *)pcVar5->__vtable[1].GetTreeTab)
                             ((int)&pcVar5->_vb3534 + (int)*(short *)&pcVar5->__vtable[1].GetCTilePt
                             );
          (**(code **)(iVar9 + 0x3c))((int)piVar8 + (int)sVar4,aCStack_d0,uVar13);
          ___7CTilePt(aCStack_d0,2);
          pcVar14 = pcVar5->__vtable;
        }
      }
      iVar9 = (*(code *)pcVar14->ReconType)
                        ((int)&pcVar5->_vb3534 + (int)*(short *)&pcVar14->ReconStream,0x27);
      this->fDirtyTotal = this->fDirtyTotal + iVar9;
      lVar10 = (*(code *)pcVar5->__vtable->ReconType)
                         ((int)&pcVar5->_vb3534 + (int)*(short *)&pcVar5->__vtable->ReconStream,7);
      pRVar6 = (this->field0_0x0).__vtable;
      lVar12 = (**(code **)(pRVar6 + 1))
                         ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pRVar6->WantsRoof);
      if (lVar12 == 0) {
        iVar9 = this->fRoomImpactContribution;
LAB_0021225c:
        this->fRoomImpactContribution = iVar9 + (int)lVar10;
        if (-1 < lVar10) {
          iVar9 = this->fGoodObjectCount;
          goto LAB_0021226c;
        }
      }
      else {
        if (lVar10 < 0) {
          iVar9 = this->fRoomImpactContribution;
          goto LAB_0021225c;
        }
        iVar9 = this->fGoodObjectCount;
LAB_0021226c:
        this->fGoodObjectCount = iVar9 + 1;
      }
      __pp__14ObjectIterator(local_ac);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectIterator.h */
                    /* end of inlined section */
    } while (local_ac->fCurrent != (cXObject__15_2008 *)0x0);
  }
  return;
}

void RoomImpl::PrintStats() {
  Room__vtable *pRVar1;
  CTGDump *pCVar2;
  int inInt;
  char *inString;
  
  pCVar2 = __ls__7CTGDumpPCc(&ctgDump,"ID = ");
  pCVar2 = __ls__7CTGDumpi(pCVar2,(uint)(ushort)this->fRoomID);
  pCVar2 = __ls__7CTGDumpPCc(pCVar2,", Used: ");
  if (this->fUsed == 0) {
    inString = " NO";
  }
  else {
    inString = " YES";
  }
  pCVar2 = __ls__7CTGDumpPCc(pCVar2,inString);
  pCVar2 = __ls__7CTGDumpPCc(pCVar2,", Level = ");
  pRVar1 = (this->field0_0x0).__vtable;
  inInt = (*(code *)pRVar1[1].GetArea)
                    ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pRVar1[1].GetObjectDensity)
  ;
  pCVar2 = __ls__7CTGDumpi(pCVar2,inInt);
  pCVar2 = __ls__7CTGDumpPCc(pCVar2,", TileCount = ");
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  pCVar2 = __ls__7CTGDumpUi(pCVar2,((int)(this->fRoomList).finish - (int)(this->fRoomList).start) *
                                   -0x55555555);
  __ls__7CTGDumpPCc(pCVar2,"\n");
  return;
}

float RoomImpl::GetObjectDensity() {
  return (float)this->fObjectCount / (float)this->fArea;
}

int RoomImpl::GetArea() {
  return this->fArea / 2;
}

void RoomImpl::InvalidateRoom(bool inFloorsWallsOnly) {
  return;
}

void RoomImpl::AbsorbNewRoomList(vector<CTilePt,__malloc_alloc_template<0> > &inRoomList) {
  Room__vtable *pRVar1;
  
  pRVar1 = (this->field0_0x0).__vtable;
  (*(code *)pRVar1->CollectTileStats)
            ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pRVar1->CollectObjectStats);
  __as__t6vector2Z7CTilePtZt23__malloc_alloc_template1i0RCt6vector2Z7CTilePtZt23__malloc_alloc_template1i0
            (&this->fRoomList,inRoomList);
  *(undefined4 *)&this->fDirty = 1;
  this->fUsed = 1;
  return;
}

void RoomImpl::ComputeCutawayMatrix() {
  return;
}

int RoomImpl::GetLevel() {
  return ((ushort)this->fRoomID >> 10 & 3) + 1;
}

void RoomImpl::ClearPartition() {
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	vector<PenaltyRect,__malloc_alloc_template<0> > *this;
	PenaltyRect *first;
	PenaltyRect *last;
	PenaltyRect *pointer;
	
  PenaltyRect *pPVar1;
  PenaltyRect *pPVar2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pPVar1 = (this->fPartition).start;
  for (pPVar2 = pPVar1; pPVar2 != (this->fPartition).finish; pPVar2 = pPVar2 + 1) {
  }
  (this->fPartition).finish = pPVar1;
  return;
}

bool RoomImpl::IsTileInRoom(CTilePt &where) {
	CTilePt *it;
	RoomImpl *this;
	
  bool bVar1;
  CTilePt *this_00;
  
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/RoomsImpl.h */
  this_00 = (this->fRoomList).start;
                    /* end of inlined section */
  if (this_00 != (this->fRoomList).finish) {
    do {
      bVar1 = __eq__C7CTilePtRC7CTilePt(this_00,where);
      if (bVar1) {
        return true;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      this_00 = this_00 + 1;
    } while (this_00 != (this->fRoomList).finish);
  }
  return false;
}

bool RoomImpl::IsOutside() {
	CTilePt *it;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	
  undefined uVar1;
  int iVar2;
  ulong uVar3;
  CTilePt *pCVar4;
  
  if (*(int *)&this->fKnowIfOutside == 0) {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    *(undefined4 *)&this->fIsFlat = 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    pCVar4 = (this->fRoomList).start;
                    /* end of inlined section */
    if (pCVar4 != (this->fRoomList).finish) {
      do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
        uVar3 = (*(code *)_5Globs_pFixedWorld->__vtable[1].OutOfBounds)
                          ((int)&_5Globs_pFixedWorld->__vtable +
                           (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].GetMaxSize,pCVar4);
        if (uVar3 == (ushort)this->fRoomID) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
          iVar2 = (*(code *)_5Globs_pFixedWorld->__vtable[1].GetFloorLayer)
                            ((int)&_5Globs_pFixedWorld->__vtable +
                             (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].OutOfGrid,pCVar4);
          *(undefined4 *)&this->fKnowIfOutside = 1;
          *(uint *)&this->fOutside = iVar2 >> 2 & 1;
          break;
        }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
        pCVar4 = pCVar4 + 1;
      } while (pCVar4 != (this->fRoomList).finish);
    }
    if (*(int *)&this->fKnowIfOutside == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      if (((int)(this->fRoomList).finish - (int)(this->fRoomList).start) * -0x55555555 == 1) {
        *(undefined4 *)&this->fOutside = 1;
      }
      else {
        *(undefined4 *)&this->fOutside = 0;
      }
      *(undefined4 *)&this->fKnowIfOutside = 1;
      uVar1 = (undefined)*(undefined4 *)&this->fOutside;
    }
    else {
      uVar1 = (undefined)*(undefined4 *)&this->fOutside;
    }
  }
  else {
    uVar1 = (undefined)*(undefined4 *)&this->fOutside;
  }
  return (bool)uVar1;
}

void RoomImpl::SetOverheadLights(bool on) {
  Room__vtable *pRVar1;
  int info;
  long lVar2;
  
  pRVar1 = (this->field0_0x0).__vtable;
  lVar2 = (**(code **)(pRVar1 + 1))
                    ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pRVar1->WantsRoof);
  if ((((lVar2 == 0) && ((long)*(int *)&this->fOverheadLightsOn != (long)on)) &&
      (*(int *)&this->fIsPool == 0)) &&
     ((*(int *)&this->fOverheadLightsOn = (int)on, this->fLampCount == 0 &&
      (this->fLightLevel < 0.8)))) {
    pRVar1 = (this->field0_0x0).__vtable;
    info = (*(code *)pRVar1->GetObjectDensity)
                     ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pRVar1->InvalidateRoom);
    GlobalDispatch__Fsi(0xf0,info);
    if (*(int *)&this->fOverheadLightsOn == 0) {
      ApplyLightLayer__15RoomManagerImplRCt6vector2Z7CTilePtZt23__malloc_alloc_template1i0f
                (this->fRoomManager,&this->fRoomList,this->fLightLevel);
    }
    else {
      ApplyLightLayer__15RoomManagerImplRCt6vector2Z7CTilePtZt23__malloc_alloc_template1i0f
                (this->fRoomManager,&this->fRoomList,0.8);
    }
  }
  return;
}

int RoomImpl::GetPeopleCount() {
	int count;
	ObjectModule *om;
	int iNumPeople;
	int i;
	cXPerson *p;
	
  Room__vtable *pRVar1;
  ObjectModule *pOVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ObjectModule__vtable *pOVar7;
  int iVar8;
  int iVar9;
  
  pOVar2 = _5Globs_pObjectModule;
  iVar9 = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  iVar3 = (*(code *)_5Globs_pObjectModule->__vtable->DisableBuyAndBuild)
                    ((int)&_5Globs_pObjectModule->__vtable +
                     (int)*(short *)&_5Globs_pObjectModule->__vtable->FillInObjectStats);
  iVar8 = 0;
  if (0 < iVar3) {
    pOVar7 = pOVar2->__vtable;
    iVar8 = 0;
    while( true ) {
      iVar4 = (*(code *)pOVar7->ComputeStats)
                        ((int)&pOVar2->__vtable + (int)*(short *)&pOVar7->ShowTutorialInfo,iVar9);
      lVar5 = (**(code **)(*(int *)(iVar4 + 4) + 0x18c))
                        (iVar4 + *(short *)(*(int *)(iVar4 + 4) + 0x188));
      if (lVar5 == 0) {
        lVar5 = (**(code **)(*(int *)(iVar4 + 4) + 0x134))
                          (iVar4 + *(short *)(*(int *)(iVar4 + 4) + 0x130));
        pRVar1 = (this->field0_0x0).__vtable;
        lVar6 = (*(code *)pRVar1->GetObjectDensity)
                          ((int)&(this->field0_0x0).__vtable +
                           (int)*(short *)&pRVar1->InvalidateRoom);
        if (lVar5 == lVar6) {
          iVar8 = iVar8 + 1;
        }
      }
      iVar9 = iVar9 + 1;
      if (iVar3 <= iVar9) break;
      pOVar7 = pOVar2->__vtable;
    }
  }
  return iVar8;
}

float RoomImpl::GetAmbientLight() {
  if ((*(int *)&this->fIsPool == 0) &&
     ((((*(int *)&this->fOverheadLightsOn == 0 || (this->fLampCount != 0)) ||
       (this->fPeopleCount < 1)) || (0.8 <= this->fLightLevel)))) {
    return this->fLightLevel;
  }
  return 0.8;
}

bool RoomImpl::WantsRoof() {
  Room__vtable *pRVar1;
  long lVar2;
  
  *(undefined4 *)&this->fIsFlat = 1;
  *(undefined4 *)&this->fKnowIfFlat = 1;
  if ((*(int *)&this->fWantsRoof == 0) &&
     (pRVar1 = (this->field0_0x0).__vtable,
     lVar2 = (**(code **)(pRVar1 + 1))
                       ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pRVar1->WantsRoof),
     lVar2 != 0)) {
    return false;
  }
  return true;
}

bool RoomImpl::IsPool() {
  return SUB41(*(undefined4 *)&this->fIsPool,0);
}

Sides Room::Rotate(Sides s, int r) {
  if (s == kNone) {
    return kNone;
  }
  return (s + ((-r & 3U) - 1) & 3) + kLeft;
}

RoomManager* RoomManager::GetRoomManager() {
  return &_15RoomManagerImpl_sRoomMgr->field0_0x0;
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

void* __malloc_alloc_template<0>::oom_malloc(unsigned int n) {
  void *pvVar1;
  
  do {
    (*(code *)0x0)();
    pvVar1 = malloc(n);
  } while (pvVar1 == (void *)0x0);
  return pvVar1;
}

void rb_tree<unsigned short, pair<unsigned short, RoomImpl *>, select1st<pair<unsigned short, RoomImpl *> >, less<unsigned short>, __malloc_alloc_template<0> >::__erase(__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x) {
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *y;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	rb_tree<short unsigned int,pair<const short unsigned int,RoomImpl *>,select1st<pair<const short unsigned int,RoomImpl *> >,less<short unsigned int>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *p;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *p;
	void *p;
	
  __rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ *p_Var1;
  __rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ *x_00;
  
  if (x != (__rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ *)0x0) {
    x_00 = (__rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ *)(x->field0_0x0).right;
    while( true ) {
      __erase__t7rb_tree5ZUsZt4pair2ZCUsZP8RoomImplZt9select1st1Zt4pair2ZCUsZP8RoomImplZt4less1ZUsZt23__malloc_alloc_template1i0Pt14__rb_tree_node1Zt4pair2ZCUsZP8RoomImpl
                (this,x_00);
      p_Var1 = (__rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ *)(x->field0_0x0).left;
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
      free(x);
                    /* end of inlined section */
      if (p_Var1 == (__rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ *)0x0) break;
      x_00 = (__rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ *)
             (p_Var1->field0_0x0).right;
      x = p_Var1;
    }
  }
  return;
}

void rb_tree<CTilePt, pair<CTilePt, pair<DiagonalNode, DiagonalNode> >, select1st<pair<CTilePt, pair<DiagonalNode, DiagonalNode> > >, less<CTilePt>, __malloc_alloc_template<0> >::__erase(__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *x) {
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *y;
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *x;
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *x;
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *x;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *p;
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *p;
	void *p;
	
  __rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ *p_Var1;
  __rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ *x_00;
  
  if (x != (__rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ *)0x0) {
    x_00 = (__rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ *)
           (x->field0_0x0).right;
    while( true ) {
      __erase__t7rb_tree5Z7CTilePtZt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNodeZt9select1st1Zt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNodeZt4less1Z7CTilePtZt23__malloc_alloc_template1i0Pt14__rb_tree_node1Zt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNode
                (this,x_00);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Rooms.cpp */
                    /* end of inlined section */
      p_Var1 = (__rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ *)
               (x->field0_0x0).left;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Rooms.cpp */
      ___7CTilePt(&(x->value_field).first,2);
      free(x);
                    /* end of inlined section */
      if (p_Var1 == (__rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ *)0x0)
      break;
      x_00 = (__rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ *)
             (p_Var1->field0_0x0).right;
      x = p_Var1;
    }
  }
  return;
}

__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > rb_tree<unsigned short, pair<unsigned short, RoomImpl *>, select1st<pair<unsigned short, RoomImpl *> >, less<unsigned short>, __malloc_alloc_template<0> >::find(short unsigned int &k) {
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *y;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	rb_tree<short unsigned int,pair<const short unsigned int,RoomImpl *>,select1st<pair<const short unsigned int,RoomImpl *> >,less<short unsigned int>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	short unsigned int &y;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	rb_tree<short unsigned int,pair<const short unsigned int,RoomImpl *>,select1st<pair<const short unsigned int,RoomImpl *> >,less<short unsigned int>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	short unsigned int &x;
	rb_tree<short unsigned int,pair<const short unsigned int,RoomImpl *>,select1st<pair<const short unsigned int,RoomImpl *> >,less<short unsigned int>,__malloc_alloc_template<0> > *this;
	
  ushort uVar1;
  __rb_tree_base_iterator _Var2;
  __rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ *p_Var3;
  __rb_tree_base_iterator _Var4;
  
  _Var4.node = (__rb_tree_node_base *)this->header;
  p_Var3 = *(__rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ **)
            &((__rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ *)_Var4.node)->field0_0x0;
  if (p_Var3 == (__rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ *)0x0) {
    _Var2.node = (__rb_tree_node_base *)this->header;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
    uVar1 = (p_Var3->value_field).first;
    while( true ) {
                    /* end of inlined section */
      if (uVar1 < (ushort)*k) {
        p_Var3 = *(__rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ **)&p_Var3->field0_0x0
        ;
      }
      else {
        _Var4.node = &p_Var3->field0_0x0;
        p_Var3 = *(__rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ **)&p_Var3->field0_0x0
        ;
      }
      if (p_Var3 == (__rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ *)0x0) break;
      uVar1 = (p_Var3->value_field).first;
    }
    _Var2.node = (__rb_tree_node_base *)this->header;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
                    /* end of inlined section */
  if ((_Var4.node != _Var2.node) && (*(ushort *)(_Var4.node + 1) <= (ushort)*k)) {
    return (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var4.node;
  }
  return (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var2.node;
}

__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > rb_tree<unsigned short, pair<unsigned short, RoomImpl *>, select1st<pair<unsigned short, RoomImpl *> >, less<unsigned short>, __malloc_alloc_template<0> >::__insert(__rb_tree_node_base *x_, __rb_tree_node_base *y_, pair<const short unsigned int,RoomImpl *> &v) {
	rb_tree<short unsigned int,pair<const short unsigned int,RoomImpl *>,select1st<pair<const short unsigned int,RoomImpl *> >,less<short unsigned int>,__malloc_alloc_template<0> > *this;
	void *result;
	pair<const short unsigned int,RoomImpl *> &value;
	pair<const short unsigned int,RoomImpl *> &x;
	rb_tree<short unsigned int,pair<const short unsigned int,RoomImpl *>,select1st<pair<const short unsigned int,RoomImpl *> >,less<short unsigned int>,__malloc_alloc_template<0> > *this;
	rb_tree<short unsigned int,pair<const short unsigned int,RoomImpl *>,select1st<pair<const short unsigned int,RoomImpl *> >,less<short unsigned int>,__malloc_alloc_template<0> > *this;
	rb_tree<short unsigned int,pair<const short unsigned int,RoomImpl *>,select1st<pair<const short unsigned int,RoomImpl *> >,less<short unsigned int>,__malloc_alloc_template<0> > *this;
	rb_tree<short unsigned int,pair<const short unsigned int,RoomImpl *>,select1st<pair<const short unsigned int,RoomImpl *> >,less<short unsigned int>,__malloc_alloc_template<0> > *this;
	rb_tree<short unsigned int,pair<const short unsigned int,RoomImpl *>,select1st<pair<const short unsigned int,RoomImpl *> >,less<short unsigned int>,__malloc_alloc_template<0> > *this;
	rb_tree<short unsigned int,pair<const short unsigned int,RoomImpl *>,select1st<pair<const short unsigned int,RoomImpl *> >,less<short unsigned int>,__malloc_alloc_template<0> > *this;
	__rb_tree_node_base *x;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *y;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  __rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ *p_Var4;
  int *piVar5;
  __rb_tree_node_base *p_Var6;
  ulong *puVar7;
  void *pvVar8;
  ulong uVar10;
  int *piVar11;
  __rb_tree_node_base **pp_Var12;
  __rb_tree_node_base *p_Var13;
  __rb_tree_node_base *p_Var14;
  int iVar15;
  __rb_tree_iterator_pair_const_short_unsigned_int_RoomImpl_____ _Var16;
  ulong uVar9;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
  pvVar8 = malloc(0x18);
  uVar9 = (ulong)(int)pvVar8;
  if (uVar9 == 0) {
    pvVar8 = oom_malloc__t23__malloc_alloc_template1i0Ui(0x18);
    uVar9 = (ulong)(int)pvVar8;
  }
  puVar1 = (undefined *)((int)&v->second + 3);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)v & 7;
  uVar10 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
           uVar9 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)v - uVar3) >> uVar3 * 8;
  _Var16.field0_0x0.node = SUB84(uVar9,0);
  uVar2 = (int)_Var16.field0_0x0.node + 0x17U & 7;
  puVar7 = (ulong *)(((int)_Var16.field0_0x0.node + 0x17U) - uVar2);
  *puVar7 = *puVar7 & -1L << (uVar2 + 1) * 8 | uVar10 >> (7 - uVar2) * 8;
  uVar2 = (int)_Var16.field0_0x0.node + 0x10U & 7;
  puVar7 = (ulong *)(((int)_Var16.field0_0x0.node + 0x10U) - uVar2);
  *puVar7 = uVar10 << uVar2 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
                    /* end of inlined section */
  if ((__rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ *)y_ == this->header) {
    y_->left = (__rb_tree_node_base *)_Var16.field0_0x0.node;
LAB_00212b84:
    p_Var4 = this->header;
    if ((__rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ *)y_ == p_Var4) {
      y_->parent = (__rb_tree_node_base *)_Var16.field0_0x0.node;
      (this->header->field0_0x0).right = (__rb_tree_node_base *)_Var16.field0_0x0.node;
    }
    else {
      if (y_ != *(__rb_tree_node_base **)&p_Var4->field0_0x0) {
        *(__rb_tree_node_base **)((int)_Var16.field0_0x0.node + 4) = y_;
        goto LAB_00212bc4;
      }
      *(__rb_tree_base_iterator *)&p_Var4->field0_0x0 = _Var16.field0_0x0.node;
    }
  }
  else {
    if (x_ != (__rb_tree_node_base *)0x0) {
      y_->left = (__rb_tree_node_base *)_Var16.field0_0x0.node;
      goto LAB_00212b84;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
                    /* end of inlined section */
    if ((ushort)v->first < *(ushort *)(y_ + 1)) {
      y_->left = (__rb_tree_node_base *)_Var16.field0_0x0.node;
      goto LAB_00212b84;
    }
    y_->right = (__rb_tree_node_base *)_Var16.field0_0x0.node;
    if (y_ == (this->header->field0_0x0).right) {
      (this->header->field0_0x0).right = (__rb_tree_node_base *)_Var16.field0_0x0.node;
    }
  }
  *(__rb_tree_node_base **)((int)_Var16.field0_0x0.node + 4) = y_;
LAB_00212bc4:
  *(undefined4 *)((int)_Var16.field0_0x0.node + 8) = 0;
  *(undefined4 *)((int)_Var16.field0_0x0.node + 0xc) = 0;
  p_Var4 = this->header;
  *(undefined4 *)_Var16.field0_0x0.node = 0;
  pp_Var12 = &(p_Var4->field0_0x0).parent;
  if (uVar9 == (long)(int)(p_Var4->field0_0x0).parent) {
LAB_00212dfc:
    p_Var13 = *pp_Var12;
  }
  else {
    if (*(int *)y_ == 0) {
      piVar11 = *(int **)((int)_Var16.field0_0x0.node + 4);
      do {
        piVar5 = *(int **)(piVar11[1] + 8);
        iVar15 = (int)uVar9;
        if (piVar11 == piVar5) {
          piVar11 = *(int **)(piVar11[1] + 0xc);
          if (piVar11 == (int *)0x0) {
            p_Var13 = *(__rb_tree_node_base **)(iVar15 + 4);
LAB_00212c2c:
            uVar10 = (ulong)(int)p_Var13;
            p_Var14 = p_Var13->right;
            if (uVar9 == (long)(int)p_Var14) {
              p_Var13->right = p_Var14->left;
              if (p_Var14->left != (__rb_tree_node_base *)0x0) {
                p_Var14->left->parent = p_Var13;
              }
              p_Var14->parent = p_Var13->parent;
              if (uVar10 == (long)(int)*pp_Var12) {
                *pp_Var12 = p_Var14;
              }
              else {
                p_Var6 = p_Var13->parent;
                if (uVar10 == (long)(int)p_Var6->left) {
                  p_Var6->left = p_Var14;
                }
                else {
                  p_Var6->right = p_Var14;
                }
              }
              p_Var14->left = p_Var13;
              p_Var13->parent = p_Var14;
              p_Var13 = p_Var13->parent;
            }
            else {
              p_Var13 = *(__rb_tree_node_base **)(iVar15 + 4);
              uVar10 = uVar9;
            }
            *(undefined4 *)p_Var13 = 1;
            **(undefined4 **)(*(int *)((int)uVar10 + 4) + 4) = 0;
            p_Var13 = *(__rb_tree_node_base **)(*(int *)((int)uVar10 + 4) + 4);
            p_Var14 = p_Var13->left;
            p_Var13->left = p_Var14->right;
            if (p_Var14->right != (__rb_tree_node_base *)0x0) {
              p_Var14->right->parent = p_Var13;
            }
            p_Var14->parent = p_Var13->parent;
            if (p_Var13 == *pp_Var12) {
              *pp_Var12 = p_Var14;
            }
            else {
              p_Var6 = p_Var13->parent;
              if (p_Var13 == p_Var6->right) {
                p_Var6->right = p_Var14;
              }
              else {
                p_Var6->left = p_Var14;
              }
            }
            p_Var14->right = p_Var13;
            goto LAB_00212ddc;
          }
          if (*piVar11 != 0) {
            p_Var13 = *(__rb_tree_node_base **)(iVar15 + 4);
            goto LAB_00212c2c;
          }
          *piVar5 = 1;
          *piVar11 = 1;
LAB_00212d08:
          **(undefined4 **)(*(int *)(iVar15 + 4) + 4) = 0;
          uVar10 = (ulong)*(int *)(*(int *)(iVar15 + 4) + 4);
        }
        else {
          if (piVar5 == (int *)0x0) {
            p_Var13 = *(__rb_tree_node_base **)(iVar15 + 4);
          }
          else {
            if (*piVar5 == 0) {
              *piVar11 = 1;
              *piVar5 = 1;
              goto LAB_00212d08;
            }
            p_Var13 = *(__rb_tree_node_base **)(iVar15 + 4);
          }
          uVar10 = (ulong)(int)p_Var13;
          p_Var14 = p_Var13->left;
          if (uVar9 == (long)(int)p_Var14) {
            p_Var13->left = p_Var14->right;
            if (p_Var14->right != (__rb_tree_node_base *)0x0) {
              p_Var14->right->parent = p_Var13;
            }
            p_Var14->parent = p_Var13->parent;
            if (uVar10 == (long)(int)*pp_Var12) {
              *pp_Var12 = p_Var14;
            }
            else {
              p_Var6 = p_Var13->parent;
              if (uVar10 == (long)(int)p_Var6->right) {
                p_Var6->right = p_Var14;
              }
              else {
                p_Var6->left = p_Var14;
              }
            }
            p_Var14->right = p_Var13;
            p_Var13->parent = p_Var14;
            p_Var13 = p_Var13->parent;
          }
          else {
            p_Var13 = *(__rb_tree_node_base **)(iVar15 + 4);
            uVar10 = uVar9;
          }
          *(undefined4 *)p_Var13 = 1;
          **(undefined4 **)(*(int *)((int)uVar10 + 4) + 4) = 0;
          p_Var13 = *(__rb_tree_node_base **)(*(int *)((int)uVar10 + 4) + 4);
          p_Var14 = p_Var13->right;
          p_Var13->right = p_Var14->left;
          if (p_Var14->left != (__rb_tree_node_base *)0x0) {
            p_Var14->left->parent = p_Var13;
          }
          p_Var14->parent = p_Var13->parent;
          if (p_Var13 == *pp_Var12) {
            *pp_Var12 = p_Var14;
          }
          else {
            p_Var6 = p_Var13->parent;
            if (p_Var13 == p_Var6->left) {
              p_Var6->left = p_Var14;
            }
            else {
              p_Var6->right = p_Var14;
            }
          }
          p_Var14->left = p_Var13;
LAB_00212ddc:
          p_Var13->parent = p_Var14;
        }
        if (uVar10 == (long)(int)*pp_Var12) {
          p_Var13 = *pp_Var12;
          goto LAB_00212e00;
        }
        if (**(int **)((int)uVar10 + 4) != 0) goto LAB_00212dfc;
        piVar11 = *(int **)((int)uVar10 + 4);
        uVar9 = uVar10;
      } while( true );
    }
    p_Var13 = *pp_Var12;
  }
LAB_00212e00:
  *(undefined4 *)p_Var13 = 1;
  this->node_count = this->node_count + 1;
  return (__rb_tree_iterator_pair_const_short_unsigned_int_RoomImpl_____)_Var16.field0_0x0.node;
}

pair<__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> >,bool> rb_tree<unsigned short, pair<unsigned short, RoomImpl *>, select1st<pair<unsigned short, RoomImpl *> >, less<unsigned short>, __malloc_alloc_template<0> >::insert_unique(pair<const short unsigned int,RoomImpl *> &v) {
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *y;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	bool comp;
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > j;
	rb_tree<short unsigned int,pair<const short unsigned int,RoomImpl *>,select1st<pair<const short unsigned int,RoomImpl *> >,less<short unsigned int>,__malloc_alloc_template<0> > *this;
	pair<const short unsigned int,RoomImpl *> &x;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > *this;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	rb_tree<short unsigned int,pair<const short unsigned int,RoomImpl *>,select1st<pair<const short unsigned int,RoomImpl *> >,less<short unsigned int>,__malloc_alloc_template<0> > *this;
	rb_tree<short unsigned int,pair<const short unsigned int,RoomImpl *>,select1st<pair<const short unsigned int,RoomImpl *> >,less<short unsigned int>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	pair<__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> >,bool> *this;
	__rb_tree_node_base *y;
	__rb_tree_node_base *y;
	__rb_tree_node_base *x;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	pair<const short unsigned int,RoomImpl *> &x;
	pair<__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> >,bool> *this;
	pair<__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> >,bool> *this;
	
  bool bVar1;
  __rb_tree_iterator_pair_const_short_unsigned_int_RoomImpl_____ _Var2;
  __rb_tree_base_iterator _Var3;
  __rb_tree_node_base *x_;
  pair_const_short_unsigned_int_RoomImpl___ *in_a2_lo;
  __rb_tree_base_iterator y_;
  __rb_tree_iterator_pair_const_short_unsigned_int_RoomImpl_____ j;
  
  y_.node = *(__rb_tree_node_base **)v;
  x_ = (y_.node)->parent;
  bVar1 = true;
  if (x_ != (__rb_tree_node_base *)0x0) {
    do {
      y_.node = x_;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
      bVar1 = (ushort)in_a2_lo->first < *(ushort *)(y_.node + 1);
                    /* end of inlined section */
      if (bVar1) {
        x_ = (y_.node)->left;
      }
      else {
        x_ = (y_.node)->right;
      }
    } while (x_ != (__rb_tree_node_base *)0x0);
  }
  j.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)y_.node;
  if (bVar1) {
    if (y_.node == *(__rb_tree_node_base **)(*(int *)v + 8)) goto LAB_00212f50;
                    /* end of inlined section */
    if ((*(int *)y_.node == 0) && ((y_.node)->parent->parent == y_.node)) {
      j.field0_0x0.node = (__rb_tree_base_iterator)(y_.node)->right;
    }
    else {
      j.field0_0x0.node = (__rb_tree_base_iterator)(y_.node)->left;
      if (j.field0_0x0.node == (__rb_tree_node_base *)0x0) {
        j.field0_0x0.node = (__rb_tree_base_iterator)(y_.node)->parent;
        _Var3.node = (__rb_tree_node_base *)j.field0_0x0.node;
        if (y_.node == *(__rb_tree_node_base **)((int)j.field0_0x0.node + 8)) {
          do {
            j.field0_0x0.node = (__rb_tree_base_iterator)(_Var3.node)->parent;
            bVar1 = _Var3.node == *(__rb_tree_node_base **)((int)j.field0_0x0.node + 8);
            _Var3.node = (__rb_tree_node_base *)j.field0_0x0.node;
          } while (bVar1);
        }
      }
      else if (*(__rb_tree_node_base **)((int)j.field0_0x0.node + 0xc) != (__rb_tree_node_base *)0x0
              ) {
        for (j.field0_0x0.node = *(__rb_tree_base_iterator *)((int)j.field0_0x0.node + 0xc);
            *(__rb_tree_node_base **)((int)j.field0_0x0.node + 0xc) != (__rb_tree_node_base *)0x0;
            j.field0_0x0.node = *(__rb_tree_base_iterator *)((int)j.field0_0x0.node + 0xc)) {
        }
      }
    }
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
                    /* end of inlined section */
  if ((ushort)in_a2_lo->first <= *(ushort *)((int)j.field0_0x0.node + 0x10)) {
    this->header = (__rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ *)j.field0_0x0.node;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Pair.h */
    *(undefined4 *)&this->field_0x4 = 0;
    return (pair___rb_tree_iterator_pair_const_short_unsigned_int_RoomImpl______bool_)
           (long)(int)this;
  }
LAB_00212f50:
  _Var2 = __insert__t7rb_tree5ZUsZt4pair2ZCUsZP8RoomImplZt9select1st1Zt4pair2ZCUsZP8RoomImplZt4less1ZUsZt23__malloc_alloc_template1i0P19__rb_tree_node_baseT1RCt4pair2ZCUsZP8RoomImpl
                    ((rb_tree_short_unsigned_int_pair_const_short_unsigned_int_RoomImpl____select1st_pair_const_short_unsigned_int_RoomImpl______less_short_unsigned_int____malloc_alloc_template_0___
                      *)v,x_,y_.node,in_a2_lo);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Pair.h */
  this->header = (__rb_tree_node_pair_const_short_unsigned_int_RoomImpl_____ *)_Var2.field0_0x0.node
  ;
                    /* end of inlined section */
  *(undefined4 *)&this->field_0x4 = 1;
                    /* end of inlined section */
  return (pair___rb_tree_iterator_pair_const_short_unsigned_int_RoomImpl______bool_)(long)(int)this;
}

__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > rb_tree<CTilePt, pair<CTilePt, pair<DiagonalNode, DiagonalNode> >, select1st<pair<CTilePt, pair<DiagonalNode, DiagonalNode> > >, less<CTilePt>, __malloc_alloc_template<0> >::__insert(__rb_tree_node_base *x_, __rb_tree_node_base *y_, pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > &v) {
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	void *result;
	pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > &value;
	pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > &_ctor_arg;
	pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > &x;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	__rb_tree_node_base *x;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *y;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	
  DiagonalNode *pDVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  __rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ *p_Var5;
  __rb_tree_node_base *p_Var6;
  ulong *puVar7;
  bool bVar8;
  __rb_tree_base_iterator _Var9;
  CTilePt *pCVar10;
  __rb_tree_node_base *p_Var11;
  ulong uVar12;
  ulong in_v1;
  ulong uVar13;
  __rb_tree_node_base **pp_Var14;
  __rb_tree_node_base *p_Var15;
  __rb_tree_base_iterator _Var16;
  __rb_tree_node_base *p_Var17;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
  _Var9.node = (__rb_tree_node_base *)malloc(0x24);
  if (_Var9.node == (__rb_tree_node_base *)0x0) {
    _Var9.node = (__rb_tree_node_base *)oom_malloc__t23__malloc_alloc_template1i0Ui(0x24);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
  }
  pCVar10 = __7CTilePtRC7CTilePt((CTilePt *)(_Var9.node + 1),&v->first);
  puVar2 = (undefined *)((int)&(v->second).first.mSide + 3);
  uVar3 = (uint)puVar2 & 7;
  uVar4 = (uint)&v->second & 7;
  uVar12 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
           (long)(int)pCVar10 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
           *(ulong *)((int)&v->second - uVar4) >> uVar4 * 8;
  puVar2 = (undefined *)((int)&(v->second).second.mSide + 3);
  uVar3 = (uint)puVar2 & 7;
  pDVar1 = &(v->second).second;
  uVar4 = (uint)pDVar1 & 7;
  uVar13 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
           in_v1 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
           *(ulong *)((int)pDVar1 - uVar4) >> uVar4 * 8;
  puVar2 = (undefined *)((int)&_Var9.node[1].left + 3);
  uVar3 = (uint)puVar2 & 7;
  puVar7 = (ulong *)(puVar2 + -uVar3);
  *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | uVar12 >> (7 - uVar3) * 8;
  uVar3 = (uint)&_Var9.node[1].parent & 7;
  puVar7 = (ulong *)((int)&_Var9.node[1].parent - uVar3);
  *puVar7 = uVar12 << uVar3 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  uVar3 = (uint)&_Var9.node[2].field_0x3 & 7;
  puVar7 = (ulong *)(&_Var9.node[2].field_0x3 + -uVar3);
  *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | uVar13 >> (7 - uVar3) * 8;
  uVar3 = (uint)&_Var9.node[1].right & 7;
  puVar7 = (ulong *)((int)&_Var9.node[1].right - uVar3);
  *puVar7 = uVar13 << uVar3 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    /* end of inlined section */
  if ((__rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ *)y_ == this->header) {
    y_->left = _Var9.node;
LAB_00213024:
    p_Var5 = this->header;
    if ((__rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ *)y_ == p_Var5) {
      y_->parent = _Var9.node;
      (this->header->field0_0x0).right = _Var9.node;
    }
    else {
      if (y_ != *(__rb_tree_node_base **)&p_Var5->field0_0x0) {
        (_Var9.node)->parent = y_;
        goto LAB_00213064;
      }
      *(__rb_tree_node_base **)&p_Var5->field0_0x0 = _Var9.node;
    }
  }
  else {
    if (x_ != (__rb_tree_node_base *)0x0) {
      y_->left = _Var9.node;
      goto LAB_00213024;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
    bVar8 = __lt__C7CTilePtRC7CTilePt(&v->first,(CTilePt *)(y_ + 1));
                    /* end of inlined section */
    if (bVar8) {
      y_->left = _Var9.node;
      goto LAB_00213024;
    }
    y_->right = _Var9.node;
    if (y_ == (this->header->field0_0x0).right) {
      (this->header->field0_0x0).right = _Var9.node;
    }
  }
  (_Var9.node)->parent = y_;
LAB_00213064:
  (_Var9.node)->left = (__rb_tree_node_base *)0x0;
  (_Var9.node)->right = (__rb_tree_node_base *)0x0;
  p_Var5 = this->header;
  *(undefined4 *)_Var9.node = 0;
  pp_Var14 = &(p_Var5->field0_0x0).parent;
  if (_Var9.node == (p_Var5->field0_0x0).parent) {
LAB_0021329c:
    p_Var17 = *pp_Var14;
  }
  else {
    if (*(int *)y_ == 0) {
      p_Var17 = (_Var9.node)->parent;
      _Var16.node = _Var9.node;
      do {
        p_Var11 = p_Var17->parent->left;
        if (p_Var17 == p_Var11) {
          p_Var17 = p_Var17->parent->right;
          if (p_Var17 == (__rb_tree_node_base *)0x0) {
            p_Var17 = (_Var16.node)->parent;
LAB_002130cc:
            p_Var11 = p_Var17->right;
            if (_Var16.node == p_Var11) {
              p_Var17->right = p_Var11->left;
              if (p_Var11->left != (__rb_tree_node_base *)0x0) {
                p_Var11->left->parent = p_Var17;
              }
              p_Var11->parent = p_Var17->parent;
              if (p_Var17 == *pp_Var14) {
                *pp_Var14 = p_Var11;
              }
              else {
                p_Var15 = p_Var17->parent;
                if (p_Var17 == p_Var15->left) {
                  p_Var15->left = p_Var11;
                }
                else {
                  p_Var15->right = p_Var11;
                }
              }
              p_Var11->left = p_Var17;
              p_Var17->parent = p_Var11;
              p_Var11 = p_Var17->parent;
            }
            else {
              p_Var11 = (_Var16.node)->parent;
              p_Var17 = _Var16.node;
            }
            *(undefined4 *)p_Var11 = 1;
            *(undefined4 *)p_Var17->parent->parent = 0;
            p_Var11 = p_Var17->parent->parent;
            p_Var15 = p_Var11->left;
            p_Var11->left = p_Var15->right;
            if (p_Var15->right != (__rb_tree_node_base *)0x0) {
              p_Var15->right->parent = p_Var11;
            }
            p_Var15->parent = p_Var11->parent;
            if (p_Var11 == *pp_Var14) {
              *pp_Var14 = p_Var15;
            }
            else {
              p_Var6 = p_Var11->parent;
              if (p_Var11 == p_Var6->right) {
                p_Var6->right = p_Var15;
              }
              else {
                p_Var6->left = p_Var15;
              }
            }
            p_Var15->right = p_Var11;
            goto LAB_0021327c;
          }
          if (*(int *)p_Var17 != 0) {
            p_Var17 = (_Var16.node)->parent;
            goto LAB_002130cc;
          }
          *(int *)p_Var11 = 1;
          *(int *)p_Var17 = 1;
LAB_002131a8:
          *(undefined4 *)(_Var16.node)->parent->parent = 0;
          _Var16.node = (_Var16.node)->parent->parent;
        }
        else {
          if (p_Var11 == (__rb_tree_node_base *)0x0) {
            p_Var17 = (_Var16.node)->parent;
          }
          else {
            if (*(int *)p_Var11 == 0) {
              *(int *)p_Var17 = 1;
              *(int *)p_Var11 = 1;
              goto LAB_002131a8;
            }
            p_Var17 = (_Var16.node)->parent;
          }
          p_Var11 = p_Var17->left;
          if (_Var16.node == p_Var11) {
            p_Var17->left = p_Var11->right;
            if (p_Var11->right != (__rb_tree_node_base *)0x0) {
              p_Var11->right->parent = p_Var17;
            }
            p_Var11->parent = p_Var17->parent;
            if (p_Var17 == *pp_Var14) {
              *pp_Var14 = p_Var11;
            }
            else {
              p_Var15 = p_Var17->parent;
              if (p_Var17 == p_Var15->right) {
                p_Var15->right = p_Var11;
              }
              else {
                p_Var15->left = p_Var11;
              }
            }
            p_Var11->right = p_Var17;
            p_Var17->parent = p_Var11;
            p_Var11 = p_Var17->parent;
          }
          else {
            p_Var11 = (_Var16.node)->parent;
            p_Var17 = _Var16.node;
          }
          *(undefined4 *)p_Var11 = 1;
          *(undefined4 *)p_Var17->parent->parent = 0;
          p_Var11 = p_Var17->parent->parent;
          p_Var15 = p_Var11->right;
          p_Var11->right = p_Var15->left;
          if (p_Var15->left != (__rb_tree_node_base *)0x0) {
            p_Var15->left->parent = p_Var11;
          }
          p_Var15->parent = p_Var11->parent;
          if (p_Var11 == *pp_Var14) {
            *pp_Var14 = p_Var15;
          }
          else {
            p_Var6 = p_Var11->parent;
            if (p_Var11 == p_Var6->left) {
              p_Var6->left = p_Var15;
            }
            else {
              p_Var6->right = p_Var15;
            }
          }
          p_Var15->left = p_Var11;
LAB_0021327c:
          p_Var11->parent = p_Var15;
          _Var16.node = p_Var17;
        }
        if (_Var16.node == *pp_Var14) {
          p_Var17 = *pp_Var14;
          goto LAB_002132a0;
        }
        if (*(int *)(_Var16.node)->parent != 0) goto LAB_0021329c;
        p_Var17 = (_Var16.node)->parent;
      } while( true );
    }
    p_Var17 = *pp_Var14;
  }
LAB_002132a0:
  *(undefined4 *)p_Var17 = 1;
  this->node_count = this->node_count + 1;
  return (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var9.node;
}

pair<__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,bool> rb_tree<CTilePt, pair<CTilePt, pair<DiagonalNode, DiagonalNode> >, select1st<pair<CTilePt, pair<DiagonalNode, DiagonalNode> > >, less<CTilePt>, __malloc_alloc_template<0> >::insert_unique(pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > &v) {
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *y;
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *x;
	bool comp;
	__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > j;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > &x;
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *x;
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *x;
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *x;
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *x;
	__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *this;
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *x;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *x;
	pair<__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,bool> *this;
	__rb_tree_node_base *y;
	__rb_tree_node_base *y;
	__rb_tree_node_base *x;
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *x;
	pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > &x;
	pair<__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,bool> *this;
	pair<__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,bool> *this;
	
  __rb_tree_base_iterator _Var1;
  __rb_tree_node_base *p_Var2;
  bool bVar3;
  __rb_tree_iterator_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ _Var4;
  __rb_tree_base_iterator _Var5;
  pair_const_CTilePt_pair_DiagonalNode_DiagonalNode___ *in_a2_lo;
  __rb_tree_iterator_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ j;
  
  bVar3 = true;
  _Var1.node = *(__rb_tree_node_base **)v;
  p_Var2 = (*(__rb_tree_node_base **)v)->parent;
  while (p_Var2 != (__rb_tree_node_base *)0x0) {
    bVar3 = __lt__C7CTilePtRC7CTilePt(&in_a2_lo->first,(CTilePt *)(p_Var2 + 1));
    _Var1.node = p_Var2;
                    /* end of inlined section */
    if (bVar3) {
      p_Var2 = p_Var2->left;
    }
    else {
      p_Var2 = p_Var2->right;
    }
  }
  j.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var1.node;
  if (bVar3 != false) {
    if (_Var1.node == *(__rb_tree_node_base **)(*(int *)v + 8)) goto LAB_00213404;
                    /* end of inlined section */
    if ((*(int *)_Var1.node == 0) && ((_Var1.node)->parent->parent == _Var1.node)) {
      j.field0_0x0.node = (__rb_tree_base_iterator)(_Var1.node)->right;
    }
    else {
      j.field0_0x0.node = (__rb_tree_base_iterator)(_Var1.node)->left;
      if (j.field0_0x0.node == (__rb_tree_node_base *)0x0) {
        j.field0_0x0.node = (__rb_tree_base_iterator)(_Var1.node)->parent;
        _Var5.node = (__rb_tree_node_base *)j.field0_0x0.node;
        if (_Var1.node == *(__rb_tree_node_base **)((int)j.field0_0x0.node + 8)) {
          do {
            j.field0_0x0.node = (__rb_tree_base_iterator)(_Var5.node)->parent;
            bVar3 = _Var5.node == *(__rb_tree_node_base **)((int)j.field0_0x0.node + 8);
            _Var5.node = (__rb_tree_node_base *)j.field0_0x0.node;
          } while (bVar3);
        }
      }
      else if (*(__rb_tree_node_base **)((int)j.field0_0x0.node + 0xc) != (__rb_tree_node_base *)0x0
              ) {
        for (j.field0_0x0.node = *(__rb_tree_base_iterator *)((int)j.field0_0x0.node + 0xc);
            *(__rb_tree_node_base **)((int)j.field0_0x0.node + 0xc) != (__rb_tree_node_base *)0x0;
            j.field0_0x0.node = *(__rb_tree_base_iterator *)((int)j.field0_0x0.node + 0xc)) {
        }
      }
    }
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
  bVar3 = __lt__C7CTilePtRC7CTilePt((CTilePt *)((int)j.field0_0x0.node + 0x10),&in_a2_lo->first);
                    /* end of inlined section */
  if (!bVar3) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Pair.h */
    *(undefined4 *)&this->field_0x4 = 0;
    this->header = (__rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ *)
                   j.field0_0x0.node;
    return (pair___rb_tree_iterator_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode______bool_)
           (long)(int)this;
  }
LAB_00213404:
  _Var4 = __insert__t7rb_tree5Z7CTilePtZt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNodeZt9select1st1Zt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNodeZt4less1Z7CTilePtZt23__malloc_alloc_template1i0P19__rb_tree_node_baseT1RCt4pair2ZC7CTilePtZt4pair2Z12DiagonalNodeZ12DiagonalNode
                    ((rb_tree_CTilePt_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode____select1st_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode______less_CTilePt____malloc_alloc_template_0___
                      *)v,(__rb_tree_node_base *)0x0,_Var1.node,in_a2_lo);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Pair.h */
  this->header = (__rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ *)
                 _Var4.field0_0x0.node;
                    /* end of inlined section */
  *(undefined4 *)&this->field_0x4 = 1;
                    /* end of inlined section */
  return (pair___rb_tree_iterator_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode______bool_)
         (long)(int)this;
}

__rb_tree_iterator<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > rb_tree<CTilePt, pair<CTilePt, pair<DiagonalNode, DiagonalNode> >, select1st<pair<CTilePt, pair<DiagonalNode, DiagonalNode> > >, less<CTilePt>, __malloc_alloc_template<0> >::find(CTilePt &k) {
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *y;
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *x;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *x;
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *x;
	CTilePt &y;
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *x;
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *x;
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *x;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > > *x;
	CTilePt &x;
	rb_tree<CTilePt,pair<const CTilePt,pair<DiagonalNode,DiagonalNode> >,select1st<pair<const CTilePt,pair<DiagonalNode,DiagonalNode> > >,less<CTilePt>,__malloc_alloc_template<0> > *this;
	
  __rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ *p_Var1;
  __rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ *p_Var2;
  bool bVar3;
  __rb_tree_base_iterator _Var4;
  
  p_Var1 = this->header;
  p_Var2 = *(__rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ **)
            &this->header->field0_0x0;
  while (p_Var2 != (__rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
    bVar3 = __lt__C7CTilePtRC7CTilePt(&(p_Var2->value_field).first,k);
                    /* end of inlined section */
    if (bVar3) {
      p_Var2 = *(__rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ **)
                &p_Var2->field0_0x0;
    }
    else {
      p_Var1 = p_Var2;
      p_Var2 = *(__rb_tree_node_pair_const_CTilePt_pair_DiagonalNode_DiagonalNode_____ **)
                &p_Var2->field0_0x0;
    }
  }
  _Var4.node = &this->header->field0_0x0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
                    /* end of inlined section */
  if ((p_Var1 != this->header) &&
     (bVar3 = __lt__C7CTilePtRC7CTilePt(k,&(p_Var1->value_field).first),
     _Var4.node = &p_Var1->field0_0x0, bVar3)) {
    _Var4.node = (__rb_tree_node_base *)this->header;
  }
  return (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var4.node;
}

EVec3* EVec3 * copy_backward<EVec3 *, EVec3 *>(EVec3 *first, EVec3 *last, EVec3 *result) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  EVec3 *pEVar6;
  ulong in_v1;
  EVec3 *pEVar7;
  
  pEVar6 = result;
  if (first != last) {
    do {
      result = pEVar6 + -1;
      pEVar7 = last + -1;
      puVar1 = (undefined *)((int)&last[-1].field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)pEVar7 & 7;
      in_v1 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)pEVar7 - uVar3) >> uVar3 * 8;
      fVar4 = last[-1].field0_0x0.d[2];
      puVar1 = (undefined *)((int)&pEVar6[-1].field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar2);
      *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | in_v1 >> (7 - uVar2) * 8;
      uVar2 = (uint)result & 7;
      *(ulong *)((int)result - uVar2) =
           in_v1 << uVar2 * 8 |
           *(ulong *)((int)result - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      pEVar6[-1].field0_0x0.d[2] = fVar4;
      last = pEVar7;
      pEVar6 = result;
    } while (first != pEVar7);
  }
  return result;
}

EVec3* EVec3 * uninitialized_copy<EVec3 *, EVec3 *>(EVec3 *first, EVec3 *last, EVec3 *result) {
	EVec3 *p;
	EVec3 &value;
	void *pAddress;
	EVec3 &v;
	
  EVec3 *pEVar1;
  EVec3 *pEVar2;
  
  pEVar2 = result;
  if (first != last) {
    do {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      pEVar1 = first + 1;
      result = pEVar2 + 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      (pEVar2->field0_0x0).d[0] = (first->field0_0x0).d[0];
      (pEVar2->field0_0x0).d[1] = (first->field0_0x0).d[1];
                    /* end of inlined section */
      (pEVar2->field0_0x0).d[2] = (first->field0_0x0).d[2];
      first = pEVar1;
      pEVar2 = result;
    } while (pEVar1 != last);
  }
  return result;
}

void vector<EVec3, __malloc_alloc_template<0> >::insert_aux(EVec3 *position, EVec3 &x) {
	EVec3 x_copy;
	EVec3 &value;
	EVec3 &v;
	EVec3 &v;
	unsigned int old_size;
	unsigned int len;
	vector<EVec3,__malloc_alloc_template<0> > *this;
	vector<EVec3,__malloc_alloc_template<0> > *this;
	vector<EVec3,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	void *result;
	vector<EVec3,__malloc_alloc_template<0> > *this;
	vector<EVec3,__malloc_alloc_template<0> > *this;
	EVec3 *p;
	EVec3 &value;
	void *pAddress;
	EVec3 &v;
	vector<EVec3,__malloc_alloc_template<0> > *this;
	vector<EVec3,__malloc_alloc_template<0> > *this;
	vector<EVec3,__malloc_alloc_template<0> > *this;
	vector<EVec3,__malloc_alloc_template<0> > *this;
	EVec3 *first;
	EVec3 *pointer;
	vector<EVec3,__malloc_alloc_template<0> > *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  EVec3 *pEVar5;
  float *pfVar6;
  EVec3 *pEVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  EVec3 x_copy;
  
  pEVar5 = this->finish;
  if (pEVar5 == this->end_of_storage) {
    iVar8 = ((int)pEVar5 - (int)this->start) * -0x55555555 >> 2;
    iVar9 = 1;
    if (iVar8 != 0) {
      iVar9 = iVar8 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if (iVar9 == 0) {
      pEVar5 = (EVec3 *)0x0;
    }
    else {
      pEVar5 = (EVec3 *)malloc(iVar9 * 0xc);
      if (pEVar5 == (EVec3 *)0x0) {
        pEVar5 = (EVec3 *)oom_malloc__t23__malloc_alloc_template1i0Ui(iVar9 * 0xc);
      }
    }
                    /* end of inlined section */
    uninitialized_copy__H2ZP5EVec3ZP5EVec3_X01X01X11_X11(this->start,position,pEVar5);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    pfVar6 = (float *)((int)pEVar5 + ((int)position - (int)this->start));
    *pfVar6 = (x->field0_0x0).d[0];
    pfVar6[1] = (x->field0_0x0).d[1];
    pfVar6[2] = (x->field0_0x0).d[2];
                    /* end of inlined section */
    uninitialized_copy__H2ZP5EVec3ZP5EVec3_X01X01X11_X11
              (position,this->finish,
               (EVec3 *)((int)pEVar5 + (int)position + (0xc - (int)this->start)));
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    pEVar7 = this->start;
    if (pEVar7 == this->finish) {
      pEVar7 = this->start;
    }
    else {
      do {
        pEVar7 = pEVar7 + 1;
      } while (pEVar7 != this->finish);
                    /* end of inlined section */
      pEVar7 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((pEVar7 != (EVec3 *)0x0) &&
       (((int)this->end_of_storage - (int)pEVar7) * -0x55555555 >> 2 != 0)) {
      free(pEVar7);
                    /* end of inlined section */
    }
    this->start = pEVar5;
    this->finish = pEVar5 + iVar8 + 1;
    this->end_of_storage = pEVar5 + iVar9;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    (pEVar5->field0_0x0).d[0] = pEVar5[-1].field0_0x0.d[0];
    (pEVar5->field0_0x0).d[1] = pEVar5[-1].field0_0x0.d[1];
    (pEVar5->field0_0x0).d[2] = pEVar5[-1].field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar10 = (x->field0_0x0).d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    uVar4 = *(ulong *)&x->field0_0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    copy_backward__H2ZP5EVec3ZP5EVec3_X01X01X11_X11(position,this->finish + -1,this->finish);
    puVar1 = (undefined *)((int)&position->field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
    uVar2 = (uint)position & 7;
    *(ulong *)((int)position - uVar2) =
         uVar4 << uVar2 * 8 |
         *(ulong *)((int)position - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    (position->field0_0x0).d[2] = fVar10;
    this->finish = this->finish + 1;
  }
  return;
}

CTilePt* CTilePt * uninitialized_copy<CTilePt *, CTilePt *>(CTilePt *first, CTilePt *last, CTilePt *result) {
	CTilePt *p;
	CTilePt &value;
	void *pAddress;
	
  CTilePt *pCVar1;
  CTilePt *this;
  
  this = result;
  if (first != last) {
    do {
      pCVar1 = first + 1;
      result = this + 1;
      __7CTilePtRC7CTilePt(this,first);
      first = pCVar1;
      this = result;
    } while (pCVar1 != last);
  }
  return result;
}

vector<CTilePt,__malloc_alloc_template<0> >& vector<CTilePt, __malloc_alloc_template<0> >::operator=(vector<CTilePt,__malloc_alloc_template<0> > &x) {
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	CTilePt *first;
	CTilePt *last;
	CTilePt *pointer;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	void *result;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	CTilePt *first;
	CTilePt *result;
	ptrdiff_t n;
	CTilePt *first;
	CTilePt *last;
	CTilePt *pointer;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	CTilePt *first;
	CTilePt *result;
	ptrdiff_t n;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	
  CTilePt *pCVar1;
  int iVar2;
  CTilePt *this_00;
  uint uVar3;
  int iVar4;
  
  if (x == this) {
    return this;
  }
  pCVar1 = x->start;
  this_00 = this->start;
  uVar3 = ((int)x->finish - (int)pCVar1) * -0x55555555;
  if ((uint)(((int)this->end_of_storage - (int)this_00) * -0x55555555) < uVar3) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    pCVar1 = this->finish;
    if (this_00 != pCVar1) {
      do {
        ___7CTilePt(this_00,2);
        this_00 = this_00 + 1;
      } while (this_00 != pCVar1);
                    /* end of inlined section */
      this_00 = this->start;
    }
    if (this_00 == (CTilePt *)0x0) {
      pCVar1 = x->finish;
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
      if (((int)this->end_of_storage - (int)this_00) * -0x55555555 == 0) {
        pCVar1 = x->finish;
      }
      else {
        free(this_00);
                    /* end of inlined section */
        pCVar1 = x->finish;
      }
    }
    uVar3 = (int)pCVar1 - (int)x->start;
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    pCVar1 = (CTilePt *)0x0;
    if (uVar3 * -0x55555555 == 0) {
                    /* end of inlined section */
      this->start = (CTilePt *)0x0;
    }
    else {
      pCVar1 = (CTilePt *)malloc(uVar3);
      if (pCVar1 == (CTilePt *)0x0) {
        pCVar1 = (CTilePt *)oom_malloc__t23__malloc_alloc_template1i0Ui(uVar3);
        this->start = pCVar1;
      }
      else {
        this->start = pCVar1;
      }
    }
    pCVar1 = uninitialized_copy__H2ZPC7CTilePtZP7CTilePt_X01X01X11_X11(x->start,x->finish,pCVar1);
    this->end_of_storage = pCVar1;
  }
  else {
    iVar2 = (int)this->finish - (int)this_00;
    iVar4 = iVar2 * -0x55555555;
    if (uVar3 <= (uint)(iVar2 * -0x55555555)) {
      for (; 0 < (int)uVar3; uVar3 = uVar3 - 1) {
        __as__7CTilePtRC7CTilePt(this_00,pCVar1);
        this_00 = this_00 + 1;
        pCVar1 = pCVar1 + 1;
      }
      pCVar1 = this->finish;
      if (this_00 == pCVar1) {
        pCVar1 = x->start;
      }
      else {
        do {
          ___7CTilePt(this_00,2);
          this_00 = this_00 + 1;
        } while (this_00 != pCVar1);
                    /* end of inlined section */
        pCVar1 = x->start;
      }
      goto LAB_002139a0;
    }
    for (; 0 < iVar4; iVar4 = iVar4 + -1) {
      __as__7CTilePtRC7CTilePt(this_00,pCVar1);
      this_00 = this_00 + 1;
      pCVar1 = pCVar1 + 1;
    }
                    /* end of inlined section */
    uninitialized_copy__H2ZPC7CTilePtZP7CTilePt_X01X01X11_X11
              ((CTilePt *)((int)this->finish + ((int)x->start - (int)this->start)),x->finish,
               this->finish);
  }
  pCVar1 = x->start;
LAB_002139a0:
  this->finish = (CTilePt *)((int)x->finish + ((int)this->start - (int)pCVar1));
  return this;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
    __21GlobalConstantsClients(&sTheClient.field0_0x0,3);
    sTheClient.field0_0x0.field0_0x0.__vtable = (ConstantsClient__vtable *)_vt_18RoomScoreConstants;
  }
  return;
}

void Room::~Room(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (Room__vtable *)_vt_4Room;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void RoomManager::~RoomManager(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (RoomManager__vtable *)_vt_11RoomManager;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void* RoomImpl::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _memmanAlloc__FUiUi(size,0x10);
  return pvVar1;
}

RoomImpl* RoomImpl::GetImpl() {
  return this;
}

short unsigned int RoomImpl::GetRoomID() {
  return this->fRoomID;
}

int RoomImpl::Used() {
  return this->fUsed;
}

void RoomImpl::SetAmbientLight(float inLight) {
  this->fLightLevel = inLight;
  return;
}

bool RoomImpl::IsBedroom() {
  return 0 < this->fBedCount;
}

bool RoomImpl::IsBathroom() {
  return 0 < this->fBathFixtureCount;
}

vector<CTilePt,__malloc_alloc_template<0> >& RoomImpl::GetTileList() {
  return &this->fRoomList;
}

vector<EVec3,__malloc_alloc_template<0> >& RoomImpl::GetLightPositionList() {
  return &this->fLightPositions;
}

BitMatrix64& RoomImpl::GetCutawayMatrix() {
  return &this->fCutawayMatrix;
}

RoomManagerImpl* RoomManagerImpl::GetRoomManagerImpl() {
  return this;
}

Int RoomManagerImpl::GetRoomCount() {
  return (this->fRooms).t.node_count;
}

float RoomManagerImpl::GetRoomEnvironmentScore(short unsigned int inRoomID) {
	RoomImpl *r;
	
  RoomManager__vtable *pRVar1;
  long lVar2;
  int *piVar3;
  float fVar4;
  
  pRVar1 = (this->field0_0x0).__vtable;
  lVar2 = (*(code *)pRVar1->ClearRoomPartitions)
                    ((int)this->mRoomAmbient + *(short *)&pRVar1->GetHouse + -0x38,inRoomID);
  if (lVar2 == 0) {
    fVar4 = 0.0;
  }
  else {
    piVar3 = (int *)lVar2;
    lVar2 = (**(code **)(*piVar3 + 100))((int)piVar3 + (int)*(short *)(*piVar3 + 0x60));
    if (lVar2 == 0) {
      fVar4 = (float)piVar3[0x18];
    }
    else {
      fVar4 = this->fOutdoorScore;
    }
  }
  return fVar4;
}

map<short unsigned int,RoomImpl *,less<short unsigned int>,__malloc_alloc_template<0> >& RoomManagerImpl::GetRoomCollection() {
  return &this->fRooms;
}

Room* RoomManagerImpl::GetRoom(__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > i) {
  return *(Room **)((int)i.field0_0x0.node + 0x14);
}

Room* RoomManagerImpl::GetRoom(__rb_tree_iterator<pair<const short unsigned int,RoomImpl *> > i) {
  return *(Room **)((int)i.field0_0x0.node + 0x14);
}

float RoomManagerImpl::GetOutsideObjectScore() {
  return this->fOutdoorObjectScore;
}

int RoomManagerImpl::RoomCount() {
  return (this->fRooms).t.node_count;
}

House* RoomManagerImpl::GetHouse() {
  RoomManager__vtable *pRVar1;
  House *pHVar2;
  
  pRVar1 = (this->field0_0x0).__vtable;
  pHVar2 = (House *)(*(code *)pRVar1[1].ResetRooms)
                              ((int)this->mRoomAmbient + *(short *)&pRVar1[1].ResetDiagonals + -0x38
                              );
  return pHVar2;
}

RoomScoreConstants* RoomScoreConstants::RoomScoreConstants() {
  __21GlobalConstantsClients(&this->field0_0x0,3);
  (this->field0_0x0).field0_0x0.__vtable = (ConstantsClient__vtable *)_vt_18RoomScoreConstants;
  return this;
}

void global constructors keyed to RoomManager::CreateInstance() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

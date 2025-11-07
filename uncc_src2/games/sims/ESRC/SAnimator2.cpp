// STATUS: NOT STARTED

#include "SAnimator2.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb1757;
	__vtbl_ptr_type *$vf1820;
	
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

// warning: multiple differing types with the same name (name not equal)
struct cXPerson : virtual cXObject {
	cXObject *$vb1820;
	static Int kSimTicksPerMotiveTick;
	__vtbl_ptr_type *$vf985;
	
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
	/* vtable[38] */ virtual RoomID GetCurrentRoom();
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

struct RumbleDataElement {
	u16 SmallMotorOn;
	u16 LargeMotorSpeed;
	float Duration;
};

struct simple_alloc<EPropItem *,__malloc_alloc_template<0> > {
	simple_alloc<EPropItem *,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static EPropItem** allocate(/* parameters unknown */);
	static EPropItem** allocate(/* parameters unknown */);
	static EPropItem** allocate(/* parameters unknown */);
	static EPropItem** allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct TRedBlackTree<unsigned int,EBoneParticle *> : ERedBlackTree {
	TRedBlackTree<unsigned int,EBoneParticle *>& operator=();
	TRedBlackTree();
	TRedBlackTree();
	TRedBlackTree(TRedBlackTree<unsigned int,EBoneParticle *>*, int, void);
	EBoneParticle* operator[]();
	EBoneParticle*& operator[]();
	RBIterator Insert();
	RBIterator Find();
	RBIterator FindFirst();
	RBIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	RBIterator SetValue();
	void SetValue();
	void SetValues();
	static u32 GetKey(/* parameters unknown */);
	static EBoneParticle* GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

bool _bShowAnimNames = false;

__vtbl_ptr_type SAnimator2 virtual table[35] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::~SAnimator2,
		/* .__delta2 = */ 3336
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::Initialize,
		/* .__delta2 = */ 3976
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::Render,
		/* .__delta2 = */ 4320
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::Update,
		/* .__delta2 = */ 4432
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::Reset,
		/* .__delta2 = */ 5368
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::ResetSuits,
		/* .__delta2 = */ 5496
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::SnapToGrid,
		/* .__delta2 = */ 5504
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::ForceLocation,
		/* .__delta2 = */ 5520
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::TryAnimate,
		/* .__delta2 = */ 6112
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::TryChangeSuit,
		/* .__delta2 = */ 4328
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::SetAnimDisplacements,
		/* .__delta2 = */ 7944
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::BeginFollow,
		/* .__delta2 = */ 7952
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::FollowOneStep,
		/* .__delta2 = */ 8320
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::EndFollow,
		/* .__delta2 = */ 8720
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::IsFollowing,
		/* .__delta2 = */ 8784
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::IsInterruptable,
		/* .__delta2 = */ 8800
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::StartReachAnimation,
		/* .__delta2 = */ 8808
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::IsReachDone,
		/* .__delta2 = */ 8816
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::StopReachAnimation,
		/* .__delta2 = */ 8824
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::LookTowards,
		/* .__delta2 = */ 8832
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::LookTowards,
		/* .__delta2 = */ 8840
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::Tick,
		/* .__delta2 = */ 8848
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::DequeueAnimEvent,
		/* .__delta2 = */ 8856
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::ReconStream,
		/* .__delta2 = */ 9032
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::ResetCensorship,
		/* .__delta2 = */ 10408
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::SetPixelated,
		/* .__delta2 = */ 10416
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::Dress,
		/* .__delta2 = */ 10504
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::Undress,
		/* .__delta2 = */ 10696
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::GetCarryHandPosAndDir,
		/* .__delta2 = */ 24248
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::DrawProps,
		/* .__delta2 = */ 24456
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::DrawCensor,
		/* .__delta2 = */ 26192
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::GetBonePos,
		/* .__delta2 = */ 24304
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator2::GetBonePosAndDirForParticle,
		/* .__delta2 = */ 18544
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type SAnimator virtual table[35] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SAnimator::~SAnimator,
		/* .__delta2 = */ 32104
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

SAnimator2* SAnimator2::SAnimator2() {
	SAnimator *this;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<float,__malloc_alloc_template<0> > *this;
	vector<float,__malloc_alloc_template<0> > *this;
	vector<EPropItem *,__malloc_alloc_template<0> > *this;
	int i;
	
  undefined *puVar1;
  EVec3 *pEVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  ulong *puVar6;
  char (*pacVar7) [128];
  ulong uVar8;
  int iVar9;
  
  (this->field0_0x0).__vtable = (SAnimator__vtable *)_vt_10SAnimator2;
                    /* inlined from ../MSrc/vector.h */
  (this->m_eventQueue).start = (int *)0x0;
  (this->m_eventQueue).end_of_storage = (int *)0x0;
  (this->m_eventQueue).finish = (int *)0x0;
  (this->m_FloatArray).start = (float *)0x0;
  (this->m_FloatArray).end_of_storage = (float *)0x0;
  (this->m_FloatArray).finish = (float *)0x0;
  (this->m_FloatArray2).start = (float *)0x0;
  (this->m_FloatArray2).end_of_storage = (float *)0x0;
  (this->m_FloatArray2).finish = (float *)0x0;
  (this->m_PropItemArray).start = (EPropItem **)0x0;
  (this->m_PropItemArray).end_of_storage = (EPropItem **)0x0;
  (this->m_PropItemArray).finish = (EPropItem **)0x0;
  puVar1 = (undefined *)((int)&(this->m_CensorBoundingBox).vMax.field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | 0UL >> (7 - uVar5) * 8;
  pEVar2 = &(this->m_CensorBoundingBox).vMax;
  uVar5 = (uint)pEVar2 & 7;
  puVar6 = (ulong *)((int)pEVar2 - uVar5);
  *puVar6 = 0L << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  (this->m_CensorBoundingBox).vMax.field0_0x0.d[2] = 0.0;
  puVar1 = (undefined *)((int)&(this->m_CensorBoundingBox).vMax.field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  pEVar2 = &(this->m_CensorBoundingBox).vMax;
  uVar3 = (uint)pEVar2 & 7;
  uVar8 = *(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)pEVar2 - uVar3) >> uVar3 * 8;
  fVar4 = (this->m_CensorBoundingBox).vMax.field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_CensorBoundingBox).vMin.field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar8 >> (7 - uVar5) * 8;
  uVar5 = (uint)&this->m_CensorBoundingBox & 7;
  puVar6 = (ulong *)((int)&this->m_CensorBoundingBox - uVar5);
  *puVar6 = uVar8 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  (this->m_CensorBoundingBox).vMin.field0_0x0.d[2] = fVar4;
  __13ERedBlackTree(&(this->m_activeParticles).field0_0x0);
                    /* end of inlined section */
  this->m_pSim = (ESim *)0x0;
  *(undefined4 *)&this->m_bInCensorship = 0;
  iVar9 = 4;
  if ((_globals.Cheats._28_4_ != 0) || (__bShowAnimNames != 0)) {
    pacVar7 = this->m_AnimationName[4];
    do {
      (*pacVar7)[0] = '\0';
      iVar9 = iVar9 + -1;
      pacVar7 = pacVar7[-1];
    } while (-1 < iVar9);
  }
  this->m_pPixelizationShader[0] = (ERShader *)0x0;
  this->m_pPixelizationShader[1] = (ERShader *)0x0;
  this->m_pPixelizationShader[2] = (ERShader *)0x0;
  this->m_CurrentAnimationId = 0;
  *(undefined4 *)&this->m_bCheckDrawCurtain = 0;
  return this;
}

void SAnimator2::~SAnimator2(int __in_chrg) {
	ESim *this;
	EPropItem **last;
	EPropItem **first;
	EPropItem **pointer;
	float *last;
	float *first;
	float *pointer;
	float *last;
	float *first;
	float *pointer;
	int *last;
	int *first;
	int *pointer;
	SAnimator *this;
	void *pAddress;
	void *ptr;
	
  float *pfVar1;
  int *piVar2;
  EPropItem **ppEVar3;
  float *pfVar4;
  int *piVar5;
  ERShader *this_00;
  EPropItem **ppEVar6;
  
  (this->field0_0x0).__vtable = (SAnimator__vtable *)_vt_10SAnimator2;
  while( true ) {
    if (this->m_pPixelizationShader[0] == (ERShader *)0x0) break;
    DelRef__9EResource(&this->m_pPixelizationShader[0]->field0_0x0);
    this->m_pPixelizationShader[0] = (ERShader *)0x0;
  }
  while (this->m_pPixelizationShader[1] != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pPixelizationShader[1]->field0_0x0);
    this->m_pPixelizationShader[1] = (ERShader *)0x0;
  }
  this_00 = this->m_pPixelizationShader[2];
  while (this_00 != (ERShader *)0x0) {
    DelRef__9EResource(&this_00->field0_0x0);
    this->m_pPixelizationShader[2] = (ERShader *)0x0;
    this_00 = this->m_pPixelizationShader[2];
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/esim.h */
                    /* end of inlined section */
  if (0 < this->m_pSim->m_iQueueCount) {
    Flush__16ESimsDataManager(&_simsdataman);
  }
  removeCostume__10SAnimator2(this);
  removeAllProps__10SAnimator2(this);
  cleanupParticles__10SAnimator2(this);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  RemoveAll__13ERedBlackTree(&(this->m_activeParticles).field0_0x0);
  ppEVar6 = (this->m_PropItemArray).finish;
  ppEVar3 = (this->m_PropItemArray).start;
  if (ppEVar3 == ppEVar6) {
    ppEVar6 = (this->m_PropItemArray).start;
  }
  else {
    do {
      ppEVar3 = ppEVar3 + 1;
    } while (ppEVar3 != ppEVar6);
    ppEVar6 = (this->m_PropItemArray).start;
  }
  if (ppEVar6 == (EPropItem **)0x0) {
    pfVar4 = (this->m_FloatArray2).start;
  }
  else if ((int)(this->m_PropItemArray).end_of_storage - (int)ppEVar6 >> 2 == 0) {
    pfVar4 = (this->m_FloatArray2).start;
  }
  else {
    free(ppEVar6);
    pfVar4 = (this->m_FloatArray2).start;
  }
  pfVar1 = (this->m_FloatArray2).finish;
  if (pfVar4 == pfVar1) {
    pfVar4 = (this->m_FloatArray2).start;
  }
  else {
    do {
      pfVar4 = pfVar4 + 1;
    } while (pfVar4 != pfVar1);
    pfVar4 = (this->m_FloatArray2).start;
  }
  if (pfVar4 == (float *)0x0) {
    pfVar4 = (this->m_FloatArray).start;
  }
  else if ((int)(this->m_FloatArray2).end_of_storage - (int)pfVar4 >> 2 == 0) {
    pfVar4 = (this->m_FloatArray).start;
  }
  else {
    free(pfVar4);
    pfVar4 = (this->m_FloatArray).start;
  }
  pfVar1 = (this->m_FloatArray).finish;
  if (pfVar4 == pfVar1) {
    pfVar4 = (this->m_FloatArray).start;
  }
  else {
    do {
      pfVar4 = pfVar4 + 1;
    } while (pfVar4 != pfVar1);
    pfVar4 = (this->m_FloatArray).start;
  }
  if (pfVar4 == (float *)0x0) {
    piVar5 = (this->m_eventQueue).start;
  }
  else if ((int)(this->m_FloatArray).end_of_storage - (int)pfVar4 >> 2 == 0) {
    piVar5 = (this->m_eventQueue).start;
  }
  else {
    free(pfVar4);
    piVar5 = (this->m_eventQueue).start;
  }
  piVar2 = (this->m_eventQueue).finish;
  if (piVar5 == piVar2) {
    piVar5 = (this->m_eventQueue).start;
  }
  else {
    do {
      piVar5 = piVar5 + 1;
    } while (piVar5 != piVar2);
    piVar5 = (this->m_eventQueue).start;
  }
  if ((piVar5 != (int *)0x0) && ((int)(this->m_eventQueue).end_of_storage - (int)piVar5 >> 2 != 0))
  {
    free(piVar5);
  }
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (SAnimator__vtable *)_vt_9SAnimator;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/SAnimator2.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

Boolean SAnimator2::Initialize(cXPerson *person) {
	TreeSim *this;
	
  TileList *pTVar1;
  ERShader *pEVar2;
  float fVar3;
  
  this->m_pPerson = (cXPerson__3_1554 *)person;
                    /* inlined from ../MSrc/TreeSim.h */
                    /* end of inlined section */
  this->m_pSim = person->_vb1820->_vb1757->m_pEoRPerson;
  pTVar1 = (TileList *)
           (*(code *)person->__vtable->ShouldInterrupt)
                     ((int)&person->_vb1820 + (int)*(short *)&person->__vtable->Track);
  this->m_Dir = 0.0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  fVar3 = this->m_Dir;
  *(undefined4 *)&this->m_FadeInShuffle = 0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_IdleMode = 0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_IdleInitialized = 0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_UpperBodyCostumeRef = (ERModel *)0x0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_LowerBodyCostumeRef = (ERModel *)0x0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_ShoesCostumeRef = (ERModel *)0x0;
  this->m_TimeMultiplier = 1.0;
  this->m_ShuffleIntensity = fVar3;
  this->m_ShuffleDir = -1;
  this->m_IdleTrackNum = 1;
  this->m_WalkTrackNum = 2;
  this->m_ShuffleTrackNum = 3;
  this->m_SkillPlayTrackNum = 4;
  this->m_SkillBlendProceedureTrackNum = 5;
  this->m_SkillBlendTrackNum = 6;
  this->m_CarryTrackNum = 7;
  this->m_HappySadTrackNum = 8;
  this->m_LastWalkRunWeight = fVar3;
  this->m_WalkRunWeight = fVar3;
  this->m_LastSpeed = fVar3;
  this->m_LastShuffleIntensity = fVar3;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  this->m_pDestList = pTVar1;
  pEVar2 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x40e5fa51,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pPixelizationShader[0] = pEVar2;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar2 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xd9ecabeb,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pPixelizationShader[1] = pEVar2;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar2 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xaeeb9b7d,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pPixelizationShader[2] = pEVar2;
  this->m_LastHappySadAnimId = 0;
  this->m_CarryAnim = -2;
  this->m_CurrentAnimationId = 0;
  this->m_SpecialOverrideAnimId = 0;
  *(undefined4 *)&this->m_bSpecialAnimOverride = 0;
  return 1;
}

void SAnimator2::Render(int which) {
  return;
}

TreeReturnCode SAnimator2::TryChangeSuit() {
	ESim *this;
	
  cXPerson__3_1554__vtable *pcVar1;
  int iVar2;
  TreeReturnCode TVar3;
  
  pcVar1 = this->m_pPerson->__vtable;
  iVar2 = (*(code *)pcVar1->GetRecordDuration)
                    ((int)&this->m_pPerson->_vb2479 + (int)*(short *)&pcVar1->GetRecording,8);
  TVar3 = kEngaged;
  if (this->m_LastCostume == iVar2) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/esim.h */
                    /* end of inlined section */
    TVar3 = kEngaged;
    if ((this->m_pSim->m_iQueueCount < 1) &&
       (TVar3 = kTrueComplete, -1 < this->m_pSim->m_SkinChangeStage)) {
      TVar3 = kEngaged;
    }
  }
  return TVar3;
}

void SAnimator2::Update() {
	SimSpeed speed;
	int interval;
	
  cXPerson__3_1554__vtable *pcVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  
  if (*(int *)&this->m_bCheckDrawCurtain == 1) {
    *(undefined4 *)&this->m_bCheckDrawCurtain = 0;
    pcVar1 = this->m_pPerson->__vtable;
    lVar2 = (*(code *)pcVar1->GetRecordDuration)
                      ((int)&this->m_pPerson->_vb2479 + (int)*(short *)&pcVar1->GetRecording,8);
    if (lVar2 != 0) {
      *(undefined4 *)&this->m_pSim->m_bDontDrawCurtain = 1;
    }
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  lVar2 = (*(code *)_5Globs_pSimulator->__vtable->GetDaysRunning)
                    ((int)&_5Globs_pSimulator->__vtable +
                     (int)*(short *)&_5Globs_pSimulator->__vtable->GetExpensesHistory);
  if (lVar2 == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    lVar2 = (*(code *)_5Globs_pSimulator->__vtable->ClearHistory)
                      ((int)&_5Globs_pSimulator->__vtable +
                       (int)*(short *)&_5Globs_pSimulator->__vtable->SetFunds);
    if (lVar2 == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      lVar2 = (*(code *)_5Globs_pSimulator->__vtable->DoStream)
                        ((int)&_5Globs_pSimulator->__vtable +
                         (int)*(short *)&_5Globs_pSimulator->__vtable->DoCommand);
                    /* inlined from ../MSrc/simulator.h */
      if (lVar2 == -2) {
        this->m_TimeMultiplier = 4.0;
      }
      else {
        if (lVar2 < -1) {
          if (lVar2 == -3) {
            this->m_TimeMultiplier = 10.0;
            goto LAB_001c128c;
          }
        }
        else {
          if (lVar2 == -1) {
            this->m_TimeMultiplier = 0.5;
            goto LAB_001c128c;
          }
          if (lVar2 == 0) {
            this->m_TimeMultiplier = 1.0;
            goto LAB_001c128c;
          }
        }
                    /* end of inlined section */
        this->m_TimeMultiplier = 0.0;
      }
    }
    else {
      this->m_TimeMultiplier = 0.0;
    }
  }
  else {
    this->m_TimeMultiplier = 0.0;
  }
LAB_001c128c:
  adjustAnimationPlayRates__10SAnimator2(this);
  this->m_LastTimeMultiplier = this->m_TimeMultiplier;
  if ((this->m_FollowState == 1) || (this->m_FollowMode == 5)) {
    moveAnimation__10SAnimator2(this);
    *(undefined4 *)&this->m_HoldTransferredTrack = 0;
  }
  else {
    this->m_WalkRunWeight = 0.0;
  }
  handleShuffle__10SAnimator2(this);
  updateMovementAnimations__10SAnimator2(this);
  if (this->m_skillName == (AnimRef *)0x0) {
    iVar3 = this->m_FollowState;
  }
  else {
    fVar4 = this->m_fAnimInterval + _dt * this->m_TimeMultiplier * 1000.0;
    iVar3 = (int)fVar4;
    this->m_fAnimInterval = fVar4 - (float)iVar3;
    if (iVar3 != 0) {
      processEvents__10SAnimator2RC7AnimRefiib
                (this,this->m_skillName,this->m_iAnimDuration,iVar3,
                 SUB41(*(undefined4 *)&this->m_bBackwards,0));
      this->m_iAnimDuration = this->m_iAnimDuration + iVar3;
    }
    iVar3 = this->m_FollowState;
  }
  if ((iVar3 == 0) && (this->m_FollowMode != 5)) {
    this->m_WalkRunWeight = 0.0;
    this->m_ShuffleIntensity = 0.0;
  }
  updateCarryAnimation__10SAnimator2(this);
  updateRenderAnimation__10SAnimator2(this);
  updateRenderModels__10SAnimator2(this);
  updateCensor__10SAnimator2(this);
  this->m_LastFollowState = this->m_FollowState;
  this->m_LastWalkRunWeight = this->m_WalkRunWeight;
  this->m_LastShuffleIntensity = this->m_ShuffleIntensity;
  return;
}

void SAnimator2::adjustAnimationPlayRates() {
  undefined1 *puVar1;
  ESim *pEVar2;
  
  if (this->m_LastTimeMultiplier != this->m_TimeMultiplier) {
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
    puVar1 = Find__C13ERedBlackTreeUiPUi
                       (&(this->m_pSim->field0_0x0).m_AC.m_tracks.field0_0x0,this->m_IdleTrackNum,
                        (uint *)0x0);
                    /* end of inlined section */
    pEVar2 = this->m_pSim;
    if (puVar1 != (undefined1 *)0x0) {
      SetTrackSpeed__15EAnimControllerif
                (&(pEVar2->field0_0x0).m_AC,this->m_IdleTrackNum,this->m_TimeMultiplier);
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
      pEVar2 = this->m_pSim;
    }
    puVar1 = Find__C13ERedBlackTreeUiPUi
                       (&(pEVar2->field0_0x0).m_AC.m_tracks.field0_0x0,this->m_WalkTrackNum,
                        (uint *)0x0);
                    /* end of inlined section */
    pEVar2 = this->m_pSim;
    if (puVar1 != (undefined1 *)0x0) {
      SetTrackSpeed__15EAnimControllerif
                (&(pEVar2->field0_0x0).m_AC,this->m_WalkTrackNum,this->m_TimeMultiplier);
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
      pEVar2 = this->m_pSim;
    }
    puVar1 = Find__C13ERedBlackTreeUiPUi
                       (&(pEVar2->field0_0x0).m_AC.m_tracks.field0_0x0,this->m_ShuffleTrackNum,
                        (uint *)0x0);
                    /* end of inlined section */
    pEVar2 = this->m_pSim;
    if (puVar1 != (undefined1 *)0x0) {
      SetTrackSpeed__15EAnimControllerif
                (&(pEVar2->field0_0x0).m_AC,this->m_ShuffleTrackNum,this->m_TimeMultiplier);
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
      pEVar2 = this->m_pSim;
    }
    puVar1 = Find__C13ERedBlackTreeUiPUi
                       (&(pEVar2->field0_0x0).m_AC.m_tracks.field0_0x0,this->m_SkillTrackNum,
                        (uint *)0x0);
                    /* end of inlined section */
    pEVar2 = this->m_pSim;
    if (puVar1 != (undefined1 *)0x0) {
      SetTrackSpeed__15EAnimControllerif
                (&(pEVar2->field0_0x0).m_AC,this->m_SkillTrackNum,this->m_TimeMultiplier);
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
      pEVar2 = this->m_pSim;
    }
    puVar1 = Find__C13ERedBlackTreeUiPUi
                       (&(pEVar2->field0_0x0).m_AC.m_tracks.field0_0x0,this->m_BlendSkillTrackNum,
                        (uint *)0x0);
                    /* end of inlined section */
    pEVar2 = this->m_pSim;
    if (puVar1 != (undefined1 *)0x0) {
      SetTrackSpeed__15EAnimControllerif
                (&(pEVar2->field0_0x0).m_AC,this->m_BlendSkillTrackNum,this->m_TimeMultiplier);
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
      pEVar2 = this->m_pSim;
    }
    puVar1 = Find__C13ERedBlackTreeUiPUi
                       (&(pEVar2->field0_0x0).m_AC.m_tracks.field0_0x0,this->m_CarryTrackNum,
                        (uint *)0x0);
                    /* end of inlined section */
    if (puVar1 != (undefined1 *)0x0) {
      SetTrackSpeed__15EAnimControllerif
                (&(this->m_pSim->field0_0x0).m_AC,this->m_CarryTrackNum,this->m_TimeMultiplier);
    }
  }
  return;
}

void SAnimator2::Reset() {
	vector<int,__malloc_alloc_template<0> > *this;
	int *last;
	int *first;
	int *pointer;
	
  int *piVar1;
  int *piVar2;
  
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_bAnimatePrimitiveEntered = 0;
                    /* inlined from ../MSrc/algobase.h */
  piVar1 = (this->m_eventQueue).start;
  for (piVar2 = piVar1; piVar2 != (this->m_eventQueue).finish; piVar2 = piVar2 + 1) {
  }
                    /* end of inlined section */
                    /* inlined from ../MSrc/vector.h */
  (this->m_eventQueue).finish = piVar1;
                    /* end of inlined section */
  this->m_iAnimDuration = 0;
  this->m_skillName = (AnimRef *)0x0;
  this->m_Dir = 0.0;
  this->m_CarryState = 0;
  this->m_LastCostume = 0;
  removeAllProps__10SAnimator2(this);
  return;
}

void SAnimator2::ResetSuits() {
  return;
}

void SAnimator2::SnapToGrid() {
  *(undefined4 *)&this->m_ResetPos = 1;
  return;
}

void SAnimator2::ForceLocation() {
  SAnimator__vtable *pSVar1;
  
  pSVar1 = (this->field0_0x0).__vtable;
  (*(code *)pSVar1->IsFollowing)
            ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pSVar1->EndFollow);
  return;
}

TreeReturnCode SAnimator2::resolveSkillForPrimitive(StackElem *elem, AnimateNewParam *param, SkillNameID &theSkill) {
	cXObject *obj;
	SInt16 animID;
	AnimateNewParam *this;
	AnimateNewParam *this;
	Int beh;
	
  char cVar1;
  ushort uVar2;
  TreeSim *pTVar3;
  TreeSim__vtable *pTVar4;
  cXObject__3_2479 *pcVar5;
  cXPerson__3_1554__vtable *pcVar6;
  cXObject__3_2479__vtable *pcVar7;
  ushort *puVar8;
  TreeReturnCode TVar9;
  TreeReturnCode TVar10;
  long lVar11;
  cXPerson__3_1554 *pcVar12;
  undefined4 uVar13;
  int idx;
  byte bVar14;
  long lVar15;
  
  *theSkill = (AnimRef *)0x0;
                    /* inlined from ../MSrc/xprimitives.h */
                    /* inlined from ../MSrc/xprimitives.h */
                    /* end of inlined section */
  uVar2 = param->animID;
  lVar15 = (long)(short)uVar2;
  if (((byte)param->flags >> 2 & 1) == 0) {
    pcVar6 = this->m_pPerson->__vtable;
    lVar11 = (*(code *)pcVar6[1].GetMotiveRef)
                       ((int)&this->m_pPerson->_vb2479 + (int)*(short *)&pcVar6[1].GetMotive);
LAB_001c169c:
    cVar1 = param->source;
    idx = (int)lVar15;
    if (cVar1 == '\x01') {
      TVar9 = GetGlobalAnimRef__FP8cXPersoniRPC7AnimRef
                        ((cXPerson__118_1094 *)this->m_pPerson,idx,theSkill);
    }
    else if (cVar1 < '\x02') {
      if (cVar1 != '\0') {
        return kTrueComplete;
      }
      if (lVar11 == 0) {
        pTVar3 = this->m_pPerson->_vb2479->_vb2830;
        pTVar4 = pTVar3->__vtable;
        (*(code *)pTVar4->GetMainSimElem)
                  ((int)&pTVar3->m_pObject + (int)*(short *)&pTVar4->GetCurElem,0x17);
        pcVar12 = this->m_pPerson;
        uVar13 = 0x17;
        goto LAB_001c1710;
      }
                    /* inlined from ../MSrc/xprimitives.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/xprimitives.h */
      bVar14 = (param->flags & 1U) != 0;
      if ((param->flags & 0x10U) != 0) {
        bVar14 = bVar14 | 2;
      }
                    /* end of inlined section */
      TVar9 = GetObjectAnimRef__FP8cXObjectP8cXPersonibRPC7AnimRef
                        ((cXObject__118_985 *)lVar11,(cXPerson__118_1094 *)this->m_pPerson,idx,
                         bVar14 == 0,theSkill);
    }
    else {
      if (cVar1 != '\x02') {
        if (cVar1 != '\x03') {
          return kTrueComplete;
        }
        TVar9 = GetMiscAnimRef__FP8cXPersoniRPC7AnimRef
                          ((cXPerson__118_1094 *)this->m_pPerson,idx,theSkill);
        if (TVar9 == kError) {
          return kError;
        }
        return kTrueComplete;
      }
      TVar9 = GetPersonStockAnimRef__FP8cXPersoniRPC7AnimRef
                        ((cXPerson__118_1094 *)this->m_pPerson,idx,theSkill);
    }
    TVar10 = kTrueComplete;
    if (TVar9 == kError) {
      TVar10 = kError;
    }
  }
  else {
    if (lVar15 < 0) {
      pcVar12 = this->m_pPerson;
    }
    else {
      if (lVar15 < (long)(ulong)elem->fNumParams) {
        puVar8 = GetParams__9StackElem(elem);
        pcVar5 = this->m_pPerson->_vb2479;
        lVar15 = (long)(short)puVar8[(short)uVar2];
        pcVar7 = pcVar5->__vtable;
        lVar11 = (*(code *)pcVar7[1].GetLightingContribution)
                           ((int)&pcVar5->_vb2830 + (int)*(short *)&pcVar7[1].CanContributeLight,
                            elem->fObjectID);
        goto LAB_001c169c;
      }
      pcVar12 = this->m_pPerson;
    }
    pTVar3 = pcVar12->_vb2479->_vb2830;
    pTVar4 = pTVar3->__vtable;
    (*(code *)pTVar4->GetMainSimElem)
              ((int)&pTVar3->m_pObject + (int)*(short *)&pTVar4->GetCurElem,8);
    pcVar12 = this->m_pPerson;
    uVar13 = 8;
LAB_001c1710:
    pcVar7 = pcVar12->_vb2479->__vtable;
    (*(code *)pcVar7->SimEnabled)
              ((int)&pcVar12->_vb2479->_vb2830 + (int)*(short *)&pcVar7->SimIndependent,uVar13);
    TVar10 = kError;
  }
  return TVar10;
}

TreeReturnCode SAnimator2::TryAnimate(StackElem *elem, AnimateNewParam *param) {
	TreeReturnCode result;
	int eventNumber;
	bool overrideCarry;
	SInt16 animID;
	Int behavior;
	ESim *this;
	AnimateNewParam *this;
	AnimateNewParam *this;
	Int beh;
	SkillNameID skill;
	EAnimDef *AD;
	char s[128];
	SkillNameID skill;
	char s[128];
	AnimateNewParam *this;
	SkillNameID skill;
	bool bResetEventCount;
	float Temp;
	int Temp1;
	AnimateNewParam *this;
	char s[128];
	int expectedEventNumber;
	AnimateNewParam *this;
	AnimateNewParam *this;
	int local;
	AnimateNewParam *this;
	AnimateNewParam *this;
	int local;
	
  char cVar1;
  cXPerson__3_1554__vtable *pcVar2;
  TreeSim *pTVar3;
  TreeSim__vtable *pTVar4;
  cXObject__3_2479 *pcVar5;
  cXObject__3_2479__vtable *pcVar6;
  bool bVar7;
  ushort *puVar8;
  undefined1 *puVar9;
  TreeReturnCode TVar10;
  EAnimDef *pEVar11;
  long lVar12;
  byte bVar13;
  SAnimator__vtable *pSVar14;
  cXPerson__3_1554 *pcVar15;
  byte bVar16;
  ESim *pEVar17;
  int iVar18;
  int iVar19;
  ushort uVar20;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  float fVar21;
  char s [128];
  AnimRef *local_a0;
  AnimRef *local_9c;
  AnimRef *skill;
  int eventNumber;
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
  
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s6;
  uStack_2c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_40 = (undefined4)unaff_s5;
  uStack_3c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/ESRC/esim.h */
  pEVar17 = this->m_pSim;
                    /* end of inlined section */
  eventNumber = 0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/esim.h */
                    /* end of inlined section */
  if ((0 < pEVar17->m_iQueueCount) || (-1 < pEVar17->m_SkinChangeStage)) {
    return kEngaged;
  }
  *(undefined4 *)&pEVar17->m_bDontDrawSim = 0;
  this->m_FollowMode = 4;
  this->m_bFirstFollowRoute = 1;
                    /* inlined from ../MSrc/xprimitives.h */
                    /* inlined from ../MSrc/xprimitives.h */
                    /* end of inlined section */
  uVar20 = param->animID;
  if (((byte)param->flags >> 2 & 1) != 0) {
    if ((short)uVar20 < 0) {
      pcVar15 = this->m_pPerson;
      goto LAB_001c1e38;
    }
    if ((short)(ushort)elem->fNumParams <= (short)uVar20) {
      pcVar15 = this->m_pPerson;
      goto LAB_001c1e38;
    }
    puVar8 = GetParams__9StackElem(elem);
    uVar20 = puVar8[(short)uVar20];
  }
                    /* inlined from ../MSrc/xprimitives.h */
  bVar13 = param->flags & 1;
  bVar16 = bVar13 | 2;
  if ((param->flags & 0x10U) == 0) {
    bVar16 = bVar13;
  }
                    /* end of inlined section */
  if (bVar16 == 1) {
    if (uVar20 == 0) {
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
      puVar9 = Find__C13ERedBlackTreeUiPUi
                         (&(this->m_pSim->field0_0x0).m_AC.m_tracks.field0_0x0,this->m_IdleTrackNum,
                          (uint *)0x0);
                    /* end of inlined section */
      if (puVar9 != (undefined1 *)0x0) {
        StopTrack__15EAnimControlleri(&(this->m_pSim->field0_0x0).m_AC,this->m_IdleTrackNum);
        return kTrueComplete;
      }
      return kTrueComplete;
    }
    TVar10 = resolveSkillForPrimitive__10SAnimator2P9StackElemPC15AnimateNewParamRPC7AnimRef
                       (this,elem,param,&local_a0);
    if (TVar10 == kError) {
      return kError;
    }
    if ((_globals.Cheats._28_4_ != 0) || (__bShowAnimNames != 0)) {
      castSkillToString__FPC7AnimRef(local_a0);
      sprintf(s,"Background: %s");
      addAnimationName__10SAnimator2Pc(this,s);
    }
    SetTrackAnim__15EAnimControlleriUi
              (&(this->m_pSim->field0_0x0).m_AC,this->m_IdleTrackNum,local_a0->id);
    SetTrackSpeed__15EAnimControllerif
              (&(this->m_pSim->field0_0x0).m_AC,this->m_IdleTrackNum,this->m_TimeMultiplier);
    SetTrackIntensity__15EAnimControllerif
              (&(this->m_pSim->field0_0x0).m_AC,this->m_IdleTrackNum,1.0);
    pEVar11 = GetTrackAnimDef__15EAnimControlleri
                        (&(this->m_pSim->field0_0x0).m_AC,this->m_IdleTrackNum);
    if (pEVar11 != (EAnimDef *)0x0) {
      pEVar11->endAction = '\0';
    }
    return kTrueComplete;
  }
  if (bVar16 == 2) {
    if (uVar20 == 0) {
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
      puVar9 = Find__C13ERedBlackTreeUiPUi
                         (&(this->m_pSim->field0_0x0).m_AC.m_tracks.field0_0x0,this->m_CarryTrackNum
                          ,(uint *)0x0);
                    /* end of inlined section */
      if (puVar9 != (undefined1 *)0x0) {
        StopTrack__15EAnimControlleri(&(this->m_pSim->field0_0x0).m_AC,this->m_CarryTrackNum);
      }
      this->m_CarryState = 0;
      this->m_CarryAnim = -1;
      return kTrueComplete;
    }
    TVar10 = resolveSkillForPrimitive__10SAnimator2P9StackElemPC15AnimateNewParamRPC7AnimRef
                       (this,elem,param,&local_9c);
    if (TVar10 == kError) {
      return kError;
    }
    if ((_globals.Cheats._28_4_ != 0) || (__bShowAnimNames != 0)) {
      castSkillToString__FPC7AnimRef(local_9c);
      sprintf(s,"Carry: %s");
      addAnimationName__10SAnimator2Pc(this,s);
    }
    SetTrackAnim__15EAnimControlleriUi
              (&(this->m_pSim->field0_0x0).m_AC,this->m_CarryTrackNum,local_9c->id);
    if (local_9c->id == 0x3bd7a6c3) {
      lockHandsUpCarryNodes__10SAnimator2(this);
      bVar16 = param->flags;
    }
    else {
      lockCarryArmNodes__10SAnimator2(this);
                    /* inlined from ../MSrc/xprimitives.h */
      bVar16 = param->flags;
    }
                    /* end of inlined section */
                    /* inlined from ../MSrc/xprimitives.h */
                    /* end of inlined section */
    if ((bVar16 >> 1 & 1) == 1) {
      SetTrackSpeed__15EAnimControllerif
                (&(this->m_pSim->field0_0x0).m_AC,this->m_CarryTrackNum,-this->m_TimeMultiplier);
      SetTrackPos__15EAnimControllerif(&(this->m_pSim->field0_0x0).m_AC,this->m_CarryTrackNum,1.0);
      pEVar17 = this->m_pSim;
    }
    else {
      SetTrackSpeed__15EAnimControllerif
                (&(this->m_pSim->field0_0x0).m_AC,this->m_CarryTrackNum,this->m_TimeMultiplier);
      pEVar17 = this->m_pSim;
    }
    SetTrackIntensity__15EAnimControllerif(&(pEVar17->field0_0x0).m_AC,this->m_CarryTrackNum,1.0);
    this->m_CarryAnim = -1;
    this->m_CarryState = 6;
    return kTrueComplete;
  }
  if (uVar20 == 0) {
    stopCurAnim__10SAnimator2(this);
    pcVar2 = this->m_pPerson->__vtable;
    (*(code *)pcVar2->GetRecordMaxDuration)
              ((int)&this->m_pPerson->_vb2479 + (int)*(short *)&pcVar2->SetRecordDuration,0x13,0);
    *(undefined4 *)&this->m_CarryOverride = 0;
    return kTrueComplete;
  }
  if (*(int *)&this->m_bAnimatePrimitiveEntered == 0) {
    *(undefined4 *)&this->m_ResetPos = 1;
    TVar10 = resolveSkillForPrimitive__10SAnimator2P9StackElemPC15AnimateNewParamRPC7AnimRef
                       (this,elem,param,&skill);
    if (TVar10 == kError) {
      return kError;
    }
    bVar7 = false;
    if ((*(int *)&this->m_bSpecialAnimOverride == 1) && (this->m_SpecialOverrideAnimId == skill->id)
       ) {
      fVar21 = this->m_fAnimInterval;
      iVar18 = this->m_iAnimDuration;
      stopCurAnim__10SAnimator2(this);
      this->m_iAnimDuration = iVar18;
      this->m_fAnimInterval = fVar21;
    }
    else {
      bVar7 = true;
      stopCurAnim__10SAnimator2(this);
    }
    blendAndTransferActionTrack__10SAnimator2(this);
    *(undefined4 *)&this->m_HoldTransferredTrack = 0;
                    /* inlined from ../MSrc/xprimitives.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/xprimitives.h */
                    /* end of inlined section */
    startSkill__10SAnimator2PC7AnimRefb(this,skill,(bool)((byte)param->flags >> 1 & 1));
    if ((_globals.Cheats._28_4_ != 0) || (__bShowAnimNames != 0)) {
      castSkillToString__FPC7AnimRef(skill);
      sprintf(s,"General: %s");
      addAnimationName__10SAnimator2Pc(this,s);
    }
    if (bVar16 == 3) {
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
      puVar9 = Find__C13ERedBlackTreeUiPUi
                         (&(this->m_pSim->field0_0x0).m_AC.m_tracks.field0_0x0,this->m_CarryTrackNum
                          ,(uint *)0x0);
                    /* end of inlined section */
      if (puVar9 != (undefined1 *)0x0) {
        StopTrack__15EAnimControlleri(&(this->m_pSim->field0_0x0).m_AC,this->m_CarryTrackNum);
      }
      *(undefined4 *)&this->m_CarryOverride = 1;
      this->m_CarryAnim = -1;
    }
    *(undefined4 *)&this->m_bAnimatePrimitiveEntered = 1;
    if (bVar7) {
      this->m_iAnimatePrimitiveEventCount = 0;
    }
    pSVar14 = (this->field0_0x0).__vtable;
  }
  else {
    pSVar14 = (this->field0_0x0).__vtable;
  }
  lVar12 = (*(code *)pSVar14[1].FollowOneStep)
                     ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pSVar14[1].BeginFollow,
                      &eventNumber);
  if (lVar12 == 0) {
    if (this->m_SkillTrackNum == 0) {
      cVar1 = param->expectedEventCount;
    }
    else {
      bVar7 = isAnimationDone__10SAnimator2(this);
      if (!bVar7) {
        return kEngaged;
      }
      cVar1 = param->expectedEventCount;
    }
    iVar18 = this->m_iAnimatePrimitiveEventCount;
    if ((long)cVar1 <= (long)iVar18) {
      *(undefined4 *)&this->m_bAnimatePrimitiveEntered = 0;
      *(undefined4 *)&this->m_CarryOverride = 0;
      pcVar2 = this->m_pPerson->__vtable;
      (*(code *)pcVar2->GetRecordMaxDuration)
                ((int)&this->m_pPerson->_vb2479 + (int)*(short *)&pcVar2->SetRecordDuration,0x13,0);
      return kTrueComplete;
    }
                    /* inlined from ../MSrc/xprimitives.h */
                    /* end of inlined section */
    eventNumber = iVar18;
    if (((byte)param->flags >> 1 & 1) != 0) {
      eventNumber = (cVar1 - iVar18) + -1;
    }
                    /* inlined from ../MSrc/xprimitives.h */
                    /* end of inlined section */
    if (((byte)param->flags >> 5 & 1) == 0) {
      if (elem->fNumParams != '\0') {
        puVar8 = GetParams__9StackElem(elem);
        *puVar8 = (ushort)eventNumber;
LAB_001c1e90:
        this->m_iAnimatePrimitiveEventCount = this->m_iAnimatePrimitiveEventCount + 1;
        return kFalseComplete;
      }
      pcVar15 = this->m_pPerson;
    }
    else {
      bVar16 = param->localNumForEvent;
      if (bVar16 < elem->fNumLocalVars) {
        puVar8 = GetLocals__9StackElem(elem);
        puVar8[bVar16] = (ushort)eventNumber;
        goto LAB_001c1e90;
      }
      pcVar15 = this->m_pPerson;
    }
  }
  else {
    bVar16 = param->flags;
    if (eventNumber < 100) {
                    /* inlined from ../MSrc/xprimitives.h */
                    /* end of inlined section */
      if ((bVar16 >> 1 & 1) == 0) {
        iVar18 = this->m_iAnimatePrimitiveEventCount;
        cVar1 = param->expectedEventCount;
        iVar19 = iVar18;
      }
      else {
        iVar19 = this->m_iAnimatePrimitiveEventCount;
        cVar1 = param->expectedEventCount;
        iVar18 = (param->expectedEventCount - iVar19) + -1;
      }
      if (iVar18 < cVar1) {
        if (iVar18 < 0) {
          iVar18 = -1;
        }
      }
      else {
        iVar18 = -1;
      }
      if (eventNumber != iVar18) {
        return kEngaged;
      }
      if (iVar18 < 0) {
        return kEngaged;
      }
      this->m_iAnimatePrimitiveEventCount = iVar19 + 1;
                    /* inlined from ../MSrc/xprimitives.h */
      bVar16 = param->flags;
      eventNumber = iVar18;
    }
                    /* end of inlined section */
    if ((bVar16 >> 5 & 1) == 0) {
      if (elem->fNumParams != '\0') {
        puVar8 = GetParams__9StackElem(elem);
        *puVar8 = (ushort)eventNumber;
        return kFalseComplete;
      }
      pcVar15 = this->m_pPerson;
    }
    else {
      bVar16 = param->localNumForEvent;
      if (bVar16 < elem->fNumLocalVars) {
        puVar8 = GetLocals__9StackElem(elem);
        puVar8[bVar16] = (ushort)eventNumber;
        return kFalseComplete;
      }
      pcVar15 = this->m_pPerson;
    }
  }
LAB_001c1e38:
  pTVar3 = pcVar15->_vb2479->_vb2830;
  pTVar4 = pTVar3->__vtable;
  (*(code *)pTVar4->GetMainSimElem)((int)&pTVar3->m_pObject + (int)*(short *)&pTVar4->GetCurElem,8);
  pcVar5 = this->m_pPerson->_vb2479;
  pcVar6 = pcVar5->__vtable;
  (*(code *)pcVar6->SimEnabled)((int)&pcVar5->_vb2830 + (int)*(short *)&pcVar6->SimIndependent,8);
  return kError;
}

void SAnimator2::SetAnimDisplacements(float xdisp, float ydisp, float dirdisp) {
  return;
}

void SAnimator2::BeginFollow() {
	int PosX;
	int PosY;
	int x;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	
  cXObject__3_2479 *pcVar1;
  cXObject__3_2479__vtable *pcVar2;
  FTilePt *pFVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  
  *(undefined4 *)&this->m_pSim->m_bDontDrawSim = 0;
  iVar7 = this->m_FollowMode;
  pcVar1 = this->m_pPerson->_vb2479;
  pcVar2 = pcVar1->__vtable;
  iVar4 = (*(code *)pcVar2->ReconType)
                    ((int)&pcVar1->_vb2830 + (int)*(short *)&pcVar2->ReconStream,1);
  iVar5 = getPersonX__10SAnimator2(this);
  iVar6 = getPersonY__10SAnimator2(this);
  blendAndTransferActionTrack__10SAnimator2(this);
  this->m_LastIntDir = iVar4;
  this->m_LastPosX = iVar5;
  this->m_LastPosY = iVar6;
  *(undefined4 *)&this->m_HoldTransferredTrack = 0;
  this->m_FollowState = 1;
  this->m_FollowMode = 1;
  if (iVar7 == 5) {
    *(undefined4 *)&this->m_StartOfPath = 0;
  }
  else {
    iVar7 = getPersonX__10SAnimator2(this);
    iVar4 = getPersonY__10SAnimator2(this);
    (this->m_Pos).field0_0x0.d[1] = (float)iVar4;
    (this->m_Pos).field0_0x0.d[0] = (float)iVar7;
    fVar8 = getPersonDirection__10SAnimator2(this);
    this->m_Dir = fVar8;
    *(undefined4 *)&this->m_StartOfPath = 1;
    *(undefined4 *)&this->m_ResetPos = 0;
  }
  this->m_CumulativeMoveTime = 0.0;
  *(undefined4 *)&this->m_UseMovementPos = 1;
  this->m_CurrentDestNode = 0;
  pcVar1 = this->m_pPerson->_vb2479;
  pcVar2 = pcVar1->__vtable;
  iVar7 = (*(code *)pcVar2->ReconType)
                    ((int)&pcVar1->_vb2830 + (int)*(short *)&pcVar2->ReconStream,0x11);
  this->m_WalkRunStyle = iVar7;
                    /* inlined from ../MSrc/vector.h */
  pFVar3 = (this->m_pDestList->field0_0x0).start;
                    /* end of inlined section */
  if ((pFVar3->x).whole == pFVar3[1].x.whole) {
                    /* end of inlined section */
    if ((pFVar3->y).whole == pFVar3[1].y.whole) {
      this->m_MinMovementIndex = 1;
    }
    else {
      this->m_MinMovementIndex = 0;
    }
  }
  else {
    this->m_MinMovementIndex = 0;
  }
  return;
}

TreeReturnCode SAnimator2::FollowOneStep() {
	TreeReturnCode result;
	ESim *this;
	FTilePt goal;
	int oldX;
	int oldY;
	int level;
	
  cXObject__3_2479 *pcVar1;
  cXObject__3_2479__vtable *pcVar2;
  SAnimator__vtable *pSVar3;
  int iVar4;
  int iVar5;
  cXPerson__3_1554 *pcVar6;
  undefined8 uVar7;
  long lVar8;
  TreeReturnCode TVar9;
  FTilePt goal;
  
  *(undefined4 *)&this->m_pSim->m_bDontDrawSim = 0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/esim.h */
                    /* end of inlined section */
  TVar9 = kEngaged;
  if (this->m_pSim->m_iQueueCount < 1) {
    iVar4 = this->m_FollowState;
    if (((iVar4 != 1) && (TVar9 = kFalseComplete, 1 < iVar4)) &&
       (TVar9 = kFalseComplete, iVar4 == 2)) {
      goal.x.whole = (int)((this->m_Pos).field0_0x0.d[0] + 0.5);
      goal.y.whole = (int)((this->m_Pos).field0_0x0.d[1] + 0.5);
      FindNearestPoint__8TileListP7FTilePti(this->m_pDestList,&goal,-1);
      iVar4 = getPersonX__10SAnimator2(this);
      iVar5 = getPersonY__10SAnimator2(this);
      pcVar1 = this->m_pPerson->_vb2479;
      pcVar2 = pcVar1->__vtable;
      uVar7 = (*(code *)pcVar2[1].GetPlacementInfo)
                        ((int)&pcVar1->_vb2830 + (int)*(short *)&pcVar2[1].FindGoodLocation);
      pcVar1 = this->m_pPerson->_vb2479;
      pcVar2 = pcVar1->__vtable;
      lVar8 = (*(code *)pcVar2->GetAttr)
                        ((int)&pcVar1->_vb2830 + (int)*(short *)&pcVar2->GetTemp,&goal,uVar7,0,0);
      if (lVar8 == 0) {
        pSVar3 = (this->field0_0x0).__vtable;
        goal.y.whole = iVar5;
        goal.x.whole = iVar4;
        (*(code *)pSVar3->IsFollowing)
                  ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pSVar3->EndFollow);
        pcVar6 = this->m_pPerson;
      }
      else {
        pcVar6 = this->m_pPerson;
      }
      TVar9 = (TreeReturnCode)(lVar8 != 0);
      pcVar2 = pcVar6->_vb2479->__vtable;
      (*(code *)pcVar2->GetAdultAnimTable)
                ((int)&pcVar6->_vb2479->_vb2830 + (int)*(short *)&pcVar2->GetModule,&goal,uVar7,0,0)
      ;
      setPersonDirection__10SAnimator2f(this,this->m_Dir);
    }
  }
  else {
    TVar9 = kEngaged;
  }
  return TVar9;
}

bool SAnimator2::EndFollow() {
  this->m_bFirstFollowRoute = 0;
  if (this->m_FollowState == 1) {
    this->m_FollowState = 0;
    return false;
  }
  this->m_FollowState = 0;
  if (this->m_FollowMode != 5) {
    this->m_FollowMode = 4;
  }
  return true;
}

int SAnimator2::IsFollowing() {
  return (int)(this->m_FollowState != 0);
}

int SAnimator2::IsInterruptable() {
  return 1;
}

int SAnimator2::StartReachAnimation(float height, bool extending) {
  return 0;
}

int SAnimator2::IsReachDone() {
  return 1;
}

void SAnimator2::StopReachAnimation() {
  return;
}

void SAnimator2::LookTowards(vec3 *target) {
  return;
}

void SAnimator2::LookTowards(int targetID) {
  return;
}

void SAnimator2::Tick() {
  return;
}

int SAnimator2::DequeueAnimEvent(int *number) {
	int result;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	int *last;
	int *first;
	int *first;
	int *result;
	int *first;
	ptrdiff_t n;
	int *last;
	int *first;
	int *pointer;
	
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
                    /* inlined from ../MSrc/vector.h */
  piVar1 = (this->m_eventQueue).start;
                    /* end of inlined section */
  iVar3 = 0;
  if ((int)(this->m_eventQueue).finish - (int)piVar1 >> 2 != 0) {
                    /* end of inlined section */
    *number = *piVar1;
                    /* inlined from ../MSrc/vector.h */
    piVar1 = (this->m_eventQueue).start;
    piVar6 = piVar1 + 1;
    piVar4 = piVar1;
    piVar5 = piVar6;
    for (iVar3 = (int)(this->m_eventQueue).finish - (int)piVar6 >> 2; 0 < iVar3; iVar3 = iVar3 + -1)
    {
      iVar2 = *piVar5;
      piVar5 = piVar5 + 1;
      *piVar4 = iVar2;
      piVar4 = piVar4 + 1;
    }
    piVar5 = (this->m_eventQueue).finish;
    for (; piVar4 != piVar5; piVar4 = piVar4 + 1) {
    }
                    /* end of inlined section */
    iVar3 = 1;
                    /* inlined from ../MSrc/vector.h */
    (this->m_eventQueue).finish = (int *)((int)piVar5 - ((int)piVar6 - (int)piVar1));
  }
                    /* end of inlined section */
  return iVar3;
}

void SAnimator2::ReconStream(ReconBuffer *r, SInt32 version) {
	Int fAnimatePrimitiveEventCount;
	Int fAnimatePrimitiveEntered;
	Int fCurState;
	float fHeadDirection;
	float fHeadGoalDirection;
	float fHeadDelta;
	float fHeadTarget[3];
	float fAnimDisplacementX;
	float fAnimDisplacementY;
	float fAnimDisplacementDir;
	int i;
	int accessories;
	ReconBuffer *this;
	BString bogus;
	ReconBuffer *this;
	BString bogus;
	ReconBuffer *this;
	ReconBuffer *this;
	ReconBuffer *this;
	BString bogus;
	BString bogus;
	ReconBuffer *this;
	ReconBuffer *this;
	ReconBuffer *this;
	SInt16 count;
	int i;
	bool WasAnimating;
	float AnimInterval;
	int AnimDuration;
	int EventCount;
	EPropItem *pNew;
	vector<EPropItem *,__malloc_alloc_template<0> > *this;
	EPropItem *&x;
	EPropItem *&value;
	vector<EPropItem *,__malloc_alloc_template<0> > *this;
	SInt16 count;
	int i;
	EPropItem *pItem;
	unsigned int n;
	ReconBuffer *this;
	
  cXObject__3_2479 *pcVar1;
  cXObject__3_2479__vtable *pcVar2;
  EPropItem *value;
  bool bVar3;
  Mode__6_4959 MVar4;
  ERModel *pEVar5;
  EPropItem **ppEVar6;
  undefined8 unaff_s0;
  int iVar7;
  undefined8 unaff_s1;
  long lVar8;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fHeadTarget [3];
  BString bogus;
  ushort local_100;
  ushort count;
  int fAnimatePrimitiveEventCount;
  int fAnimatePrimitiveEntered;
  int accessories;
  int fCurState;
  float fHeadDirection;
  float fHeadGoalDirection;
  float fHeadDelta;
  float fAnimDisplacementX;
  float fAnimDisplacementY;
  float fAnimDisplacementDir;
  EPropItem *pNew;
  bool WasAnimating;
  float AnimInterval;
  int AnimDuration;
  int EventCount;
  float *local_c0;
  float *local_bc;
  float *local_b8;
  float *local_b4;
  float *local_b0;
  float *local_ac;
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
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
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
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (version < 0x40) {
    ReconInt__11ReconBufferPii(r,&fAnimatePrimitiveEventCount,1);
    ReconInt__11ReconBufferPii(r,&fAnimatePrimitiveEntered,1);
                    /* inlined from ../MSrc/Recon.h */
                    /* end of inlined section */
    accessories = 0;
    local_b8 = &fHeadDelta;
    local_c0 = fHeadTarget + 1;
    local_bc = fHeadTarget + 2;
    local_b4 = &fAnimDisplacementX;
    iVar7 = 4;
    local_b0 = &fAnimDisplacementY;
    local_ac = &fAnimDisplacementDir;
    do {
      iVar7 = iVar7 + -1;
      __7BString(&bogus);
      ReconString__11ReconBufferR7BString(r,&bogus);
      ReconString__11ReconBufferR7BString(r,&bogus);
      ___7BString(&bogus,2);
    } while (-1 < iVar7);
    iVar7 = 0;
    Recon32__11ReconBufferPii(r,&accessories,1);
    if (accessories < 1) {
      MVar4 = r->fMode;
    }
    else {
      do {
        iVar7 = iVar7 + 1;
        __7BString(&bogus);
        ReconString__11ReconBufferR7BString(r,&bogus);
        ReconString__11ReconBufferR7BString(r,&bogus);
        ___7BString(&bogus,2);
      } while (iVar7 < accessories);
                    /* inlined from ../MSrc/Recon.h */
      MVar4 = r->fMode;
    }
                    /* end of inlined section */
    if (MVar4 == kReading) {
      __7BString(&bogus);
      ReconString__11ReconBufferR7BString(r,&bogus);
      ReconString__11ReconBufferR7BString(r,&bogus);
      ReconString__11ReconBufferR7BString(r,&bogus);
      ___7BString(&bogus,2);
    }
    else {
      __7BString(&bogus);
      ReconString__11ReconBufferR7BString(r,&bogus);
      ReconString__11ReconBufferR7BString(r,&bogus);
      ReconString__11ReconBufferR7BString(r,&bogus);
      ___7BString(&bogus,2);
    }
    ReconInt__11ReconBufferPii(r,&fCurState,1);
                    /* inlined from ../MSrc/Recon.h */
                    /* end of inlined section */
    if ((((r->fMode == kReading) && (fCurState != 0)) && (fCurState != 3)) &&
       ((fCurState != 1 && (fCurState != 2)))) {
      fCurState = 3;
    }
    ReconFloat__11ReconBufferPfi(r,&fHeadDirection,1);
    ReconFloat__11ReconBufferPfi(r,&fHeadGoalDirection,1);
    ReconFloat__11ReconBufferPfi(r,local_b8,1);
    ReconFloat__11ReconBufferPfi(r,fHeadTarget,1);
    ReconFloat__11ReconBufferPfi(r,local_c0,1);
    ReconFloat__11ReconBufferPfi(r,local_bc,1);
    ReconFloat__11ReconBufferPfi(r,local_b4,1);
    ReconFloat__11ReconBufferPfi(r,local_b0,1);
    ReconFloat__11ReconBufferPfi(r,local_ac,1);
                    /* inlined from ../MSrc/Recon.h */
                    /* end of inlined section */
    if (r->fMode != kReading) {
      return;
    }
    pcVar1 = this->m_pPerson->_vb2479;
    pcVar2 = pcVar1->__vtable;
    (*(code *)pcVar2->RunTree)((int)&pcVar1->_vb2830 + (int)*(short *)&pcVar2->IsSpriteVisible,0);
    MVar4 = r->fMode;
  }
  else {
                    /* inlined from ../MSrc/Recon.h */
                    /* end of inlined section */
    if (r->fMode == kReading) {
      lVar8 = 0;
      Recon16__11ReconBufferPsi(r,&local_100,1);
      if (0 < (short)local_100) {
        do {
          pNew = (EPropItem *)__builtin_new(0xc);
          ReconBool__11ReconBufferPb(r,&pNew->DrawInWindow);
          Recon32__11ReconBufferPii(r,(int *)pNew,1);
          bVar3 = IsValid__16EResourceManagerUi(&_modelman.field0_0x0,pNew->Id);
          if (bVar3) {
                    /* inlined from ../MSrc/vector.h */
            ppEVar6 = (this->m_PropItemArray).finish;
            if (ppEVar6 == (this->m_PropItemArray).end_of_storage) {
              insert_aux__t6vector2ZP9EPropItemZt23__malloc_alloc_template1i0PP9EPropItemRCP9EPropItem
                        (&this->m_PropItemArray,ppEVar6,&pNew);
            }
            else {
              *ppEVar6 = pNew;
              (this->m_PropItemArray).finish = (this->m_PropItemArray).finish + 1;
            }
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
            pEVar5 = (ERModel *)
                     AddRef__16EResourceManagerUiP5EFilei
                               (&_modelman.field0_0x0,pNew->Id,(EFile *)0x0,0);
                    /* end of inlined section */
            pNew->Model = pEVar5;
          }
          else {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
            _memmanFree__FPv(pNew);
          }
                    /* end of inlined section */
          lVar8 = (long)((int)lVar8 + 1);
        } while (lVar8 < (short)local_100);
      }
      _WasAnimating = 0;
      ReconBool__11ReconBufferPb(r,&WasAnimating);
      ReconFloat__11ReconBufferPfi(r,&AnimInterval,1);
      ReconInt__11ReconBufferPii(r,&AnimDuration,1);
      Recon32__11ReconBufferPii(r,(int *)&this->m_SpecialOverrideAnimId,1);
      ReconInt__11ReconBufferPii(r,&EventCount,1);
      if (_WasAnimating == 0) {
        this->m_SpecialOverrideAnimId = 0;
      }
      else {
        this->m_fAnimInterval = AnimInterval;
        this->m_iAnimDuration = AnimDuration;
        *(undefined4 *)&this->m_bSpecialAnimOverride = 1;
        this->m_iAnimatePrimitiveEventCount = EventCount;
      }
    }
    else {
                    /* end of inlined section */
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
      lVar8 = 0;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
      count = (ushort)((uint)((int)(this->m_PropItemArray).finish -
                             (int)(this->m_PropItemArray).start) >> 2);
      Recon16__11ReconBufferPsi(r,&count,1);
      if (0 < (short)count) {
                    /* inlined from ../MSrc/vector.h */
        ppEVar6 = (this->m_PropItemArray).start;
        while( true ) {
          iVar7 = (int)lVar8;
                    /* end of inlined section */
          lVar8 = (long)(iVar7 + 1);
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
          value = ppEVar6[iVar7];
          ReconBool__11ReconBufferPb(r,&value->DrawInWindow);
          Recon32__11ReconBufferPii(r,(int *)value,1);
          if ((short)count <= lVar8) break;
          ppEVar6 = (this->m_PropItemArray).start;
        }
      }
      ReconBool__11ReconBufferPb(r,&this->m_bAnimatePrimitiveEntered);
      ReconFloat__11ReconBufferPfi(r,&this->m_fAnimInterval,1);
      ReconInt__11ReconBufferPii(r,&this->m_iAnimDuration,1);
      Recon32__11ReconBufferPii(r,(int *)&this->m_CurrentAnimationId,1);
      ReconInt__11ReconBufferPii(r,&this->m_iAnimatePrimitiveEventCount,1);
    }
                    /* inlined from ../MSrc/Recon.h */
    MVar4 = r->fMode;
  }
                    /* end of inlined section */
  if (MVar4 == kReading) {
    *(undefined4 *)&this->m_bCheckDrawCurtain = 1;
  }
  return;
}

void SAnimator2::ResetCensorship() {
  return;
}

void SAnimator2::SetPixelated(int val) {
  return;
}

u32 SAnimator2::getCorrectId(PropNameID pProp) {
	u32 id;
	
  cXPerson__3_1554__vtable *pcVar1;
  uint uVar2;
  long lVar3;
  
  pcVar1 = this->m_pPerson->__vtable;
  lVar3 = (**(code **)&pcVar1->field_0x184)
                    ((int)&this->m_pPerson->_vb2479 + (int)*(short *)&pcVar1->field_0x180);
  if (lVar3 == 0) {
    uVar2 = pProp->childID;
    if (uVar2 == 0) {
      uVar2 = pProp->id;
    }
  }
  else {
    uVar2 = pProp->id;
  }
  return uVar2;
}

void SAnimator2::Dress(PropNameID pProp) {
	u32 id;
	EPropItem *Prop;
	u32 id;
	vector<EPropItem *,__malloc_alloc_template<0> > *this;
	vector<EPropItem *,__malloc_alloc_template<0> > *this;
	
  SAnimator__vtable *pSVar1;
  EPropItem **position;
  uint id;
  ERModel *pEVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  EPropItem *Prop;
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
  id = getCorrectId__10SAnimator2PC7PropRef(this,pProp);
  if (id != 0) {
    pSVar1 = (this->field0_0x0).__vtable;
    (*(code *)pSVar1[1].DequeueAnimEvent)
              ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pSVar1[1].Tick,pProp);
    Prop = (EPropItem *)__builtin_new(0xc);
    Prop->Id = id;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
    pEVar2 = (ERModel *)
             AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,id,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
    Prop->Model = pEVar2;
    *(undefined4 *)&Prop->DrawInWindow = *(undefined4 *)&pProp->showInWindow;
                    /* inlined from ../MSrc/vector.h */
    position = (this->m_PropItemArray).finish;
    if (position == (this->m_PropItemArray).end_of_storage) {
      insert_aux__t6vector2ZP9EPropItemZt23__malloc_alloc_template1i0PP9EPropItemRCP9EPropItem
                (&this->m_PropItemArray,position,&Prop);
    }
    else {
      *position = Prop;
      (this->m_PropItemArray).finish = (this->m_PropItemArray).finish + 1;
    }
  }
                    /* end of inlined section */
  return;
}

void SAnimator2::Undress(PropNameID pProp) {
	u32 id;
	int index;
	int i;
	vector<EPropItem *,__malloc_alloc_template<0> > *this;
	vector<EPropItem *,__malloc_alloc_template<0> > *this;
	vector<EPropItem *,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	EPropItem **position;
	EPropItem **result;
	EPropItem **result;
	EPropItem **result;
	EPropItem **first;
	ptrdiff_t n;
	
  EPropItem *pEVar1;
  uint uVar2;
  EPropItem **ppEVar3;
  int iVar4;
  uint uVar5;
  EPropItem **ppEVar6;
  EPropItem **ppEVar7;
  uint uVar8;
  uint uVar9;
  
  uVar2 = getCorrectId__10SAnimator2PC7PropRef(this,pProp);
  ppEVar3 = (this->m_PropItemArray).start;
  uVar8 = (int)(this->m_PropItemArray).finish - (int)ppEVar3 >> 2;
  uVar9 = 0xffffffff;
  if (uVar8 != 0) {
    uVar5 = 1;
    ppEVar7 = ppEVar3;
    if ((*ppEVar3)->Id == uVar2) {
      uVar9 = 0;
    }
    else {
      while ((ppEVar7 = ppEVar7 + 1, uVar9 = 0xffffffff, uVar5 < uVar8 &&
             (uVar9 = uVar5, (*ppEVar7)->Id != uVar2))) {
        uVar5 = uVar5 + 1;
      }
    }
  }
  if (-1 < (int)uVar9) {
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
    DelRef__9EResource(&ppEVar3[uVar9]->Model->field0_0x0);
                    /* inlined from ../MSrc/vector.h */
    _memmanFree__FPv((this->m_PropItemArray).start[uVar9]);
    ppEVar3 = (this->m_PropItemArray).finish;
    ppEVar6 = (this->m_PropItemArray).start + uVar9;
    ppEVar7 = ppEVar6 + 1;
    if (ppEVar7 == ppEVar3) {
      ppEVar3 = (this->m_PropItemArray).finish;
    }
    else {
      iVar4 = (int)ppEVar3 - (int)ppEVar7 >> 2;
      if (iVar4 < 1) {
        ppEVar3 = (this->m_PropItemArray).finish;
      }
      else {
        do {
          pEVar1 = *ppEVar7;
          iVar4 = iVar4 + -1;
          ppEVar7 = ppEVar7 + 1;
          *ppEVar6 = pEVar1;
          ppEVar6 = ppEVar6 + 1;
        } while (0 < iVar4);
        ppEVar3 = (this->m_PropItemArray).finish;
      }
    }
    (this->m_PropItemArray).finish = ppEVar3 + -1;
  }
                    /* end of inlined section */
  return;
}

int SAnimator2::getPersonX() {
  cXObject__3_2479 *pcVar1;
  cXObject__3_2479__vtable *pcVar2;
  int iVar3;
  
  pcVar1 = this->m_pPerson->_vb2479;
  pcVar2 = pcVar1->__vtable;
  iVar3 = (*(code *)pcVar2[1].UserCanDelete)
                    ((int)&pcVar1->_vb2830 + (int)*(short *)&pcVar2[1].UserPickup);
  return *(int *)(iVar3 + 4);
}

int SAnimator2::getPersonY() {
  cXObject__3_2479 *pcVar1;
  cXObject__3_2479__vtable *pcVar2;
  int *piVar3;
  
  pcVar1 = this->m_pPerson->_vb2479;
  pcVar2 = pcVar1->__vtable;
  piVar3 = (int *)(*(code *)pcVar2[1].UserCanDelete)
                            ((int)&pcVar1->_vb2830 + (int)*(short *)&pcVar2[1].UserPickup);
  return *piVar3;
}

void SAnimator2::moveAnimation() {
	int size;
	float Rate;
	float DeltaTime;
	FTilePt goal;
	int level;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	float TempNum;
	EVec2 DirVec;
	EVec2 Vec2;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	float DeltaTime;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	
  FTilePt *pFVar1;
  cXObject__3_2479 *pcVar2;
  cXObject__3_2479__vtable *pcVar3;
  undefined8 uVar4;
  long lVar5;
  TileList *pTVar6;
  int iVar7;
  undefined8 unaff_s0;
  int iVar8;
  undefined8 unaff_s1;
  int iVar9;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  FTilePt goal;
  EVec2 Vec2;
  float DeltaTime;
  float local_5c [3];
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
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  fVar13 = 3.0;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
  iVar9 = (int)(this->m_pDestList->field0_0x0).finish - (int)(this->m_pDestList->field0_0x0).start
          >> 3;
  if (this->m_WalkRunStyle == 1) {
    fVar13 = 9.0;
  }
  if (this->m_FollowMode == 4) {
    this->m_FollowState = 2;
    pcVar2 = this->m_pPerson->_vb2479;
    pcVar3 = pcVar2->__vtable;
    lVar5 = (*(code *)pcVar3->ReconType)
                      ((int)&pcVar2->_vb2830 + (int)*(short *)&pcVar3->ReconStream,9);
    if (lVar5 == 0) {
      if (1 < iVar9) {
                    /* inlined from ../MSrc/vector.h */
        pTVar6 = this->m_pDestList;
                    /* end of inlined section */
        (this->m_Pos).field0_0x0.d[0] = (float)(pTVar6->field0_0x0).start[iVar9 + -2].x.whole;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
        (this->m_Pos).field0_0x0.d[1] = (float)(pTVar6->field0_0x0).start[iVar9 + -2].y.whole;
        return;
      }
      iVar9 = getPersonX__10SAnimator2(this);
      (this->m_Pos).field0_0x0.d[0] = (float)iVar9;
      iVar9 = getPersonY__10SAnimator2(this);
      (this->m_Pos).field0_0x0.d[1] = (float)iVar9;
      return;
    }
                    /* inlined from ../MSrc/vector.h */
    pTVar6 = this->m_pDestList;
                    /* end of inlined section */
    this->m_FollowMode = 5;
                    /* inlined from ../MSrc/vector.h */
    iVar8 = iVar9 + -2;
    pFVar1 = (pTVar6->field0_0x0).start;
                    /* end of inlined section */
    goal.y.whole = (int)((float)pFVar1[iVar9 + -1].x.whole - (float)pFVar1[iVar8].x.whole);
    fVar10 = fVar13;
    if ((float)goal.y.whole <= fVar13) {
      fVar10 = (float)goal.y.whole;
    }
    fVar11 = -fVar13;
    if (fVar10 < fVar11) {
      fVar10 = fVar11;
    }
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
    (this->m_ContinueDestination).field0_0x0.d[0] =
         fVar10 + (float)(pTVar6->field0_0x0).start[iVar8].x.whole;
                    /* inlined from ../MSrc/vector.h */
    pFVar1 = (pTVar6->field0_0x0).start;
                    /* end of inlined section */
    goal.x.whole = (int)((float)pFVar1[iVar9 + -1].y.whole - (float)pFVar1[iVar8].y.whole);
    if ((float)goal.x.whole <= fVar13) {
      fVar13 = (float)goal.x.whole;
    }
    if (fVar13 < fVar11) {
      fVar13 = fVar11;
    }
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
    fVar10 = (this->m_ContinueDestination).field0_0x0.d[0];
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
    fVar12 = (this->m_Pos).field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    fVar11 = (this->m_Pos).field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    fVar13 = fVar13 + (float)(pTVar6->field0_0x0).start[iVar8].y.whole;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    (this->m_ContinueDestination).field0_0x0.d[1] = fVar13;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    if ((fVar10 - fVar12) * (float)goal.y.whole + (fVar13 - fVar11) * (float)goal.x.whole < 0.0) {
      (this->m_ContinueDestination).field0_0x0.d[0] = fVar12;
      (this->m_ContinueDestination).field0_0x0.d[1] = fVar11;
    }
    local_5c[0] = this->m_TimeMultiplier;
  }
  else {
    local_5c[0] = this->m_TimeMultiplier;
  }
  local_5c[0] = _dt * local_5c[0];
  rotateAnimation__10SAnimator2f(this,local_5c[0]);
  if (this->m_FollowMode == 5) {
    DeltaTime = _dt * this->m_TimeMultiplier;
    continuePath__10SAnimator2Rf(this,&DeltaTime);
    return;
  }
  iVar8 = iVar9 + -1;
  if (this->m_FollowMode != 1) {
    while (0.0 < local_5c[0]) {
      if (iVar8 <= this->m_CurrentDestNode) {
        iVar7 = this->m_CurrentDestNode;
        goto LAB_001c2e40;
      }
      if (this->m_MinMovementIndex < this->m_CurrentDestNode) {
        advanceAlongNode__10SAnimator2Rf(this,local_5c);
      }
      iVar7 = this->m_CurrentDestNode;
      if (local_5c[0] <= 0.0) goto LAB_001c2e40;
      this->m_CurrentDestNode = iVar7 + 1;
    }
    iVar7 = this->m_CurrentDestNode;
LAB_001c2e40:
    if (iVar7 != iVar8) {
      iVar7 = this->m_CurrentDestNode;
      goto LAB_001c2ebc;
    }
    pcVar2 = this->m_pPerson->_vb2479;
    pcVar3 = pcVar2->__vtable;
    lVar5 = (*(code *)pcVar3->ReconType)
                      ((int)&pcVar2->_vb2830 + (int)*(short *)&pcVar3->ReconStream,9);
    if (lVar5 == 0) {
      iVar7 = this->m_CurrentDestNode;
      goto LAB_001c2ebc;
    }
    if (this->m_bFirstFollowRoute != 0) {
      iVar7 = this->m_CurrentDestNode;
      goto LAB_001c2ebc;
    }
                    /* inlined from ../MSrc/vector.h */
    pTVar6 = this->m_pDestList;
                    /* end of inlined section */
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
    (this->m_ContinueDestination).field0_0x0.d[0] = (float)(pTVar6->field0_0x0).start[iVar8].x.whole
    ;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
    (this->m_ContinueDestination).field0_0x0.d[1] = (float)(pTVar6->field0_0x0).start[iVar8].y.whole
    ;
    continuePath__10SAnimator2Rf(this,local_5c);
  }
                    /* end of inlined section */
  iVar7 = this->m_CurrentDestNode;
LAB_001c2ebc:
  if (iVar7 < iVar8) {
    goal.x.whole = (int)((this->m_Pos).field0_0x0.d[0] + 0.5);
    goal.y.whole = (int)((this->m_Pos).field0_0x0.d[1] + 0.5);
    FindNearestPoint__8TileListP7FTilePti(this->m_pDestList,&goal,iVar7);
  }
  else {
    if (this->m_FollowMode == 2) {
      this->m_FollowMode = 3;
                    /* inlined from ../MSrc/vector.h */
      pTVar6 = this->m_pDestList;
    }
    else {
      pTVar6 = this->m_pDestList;
    }
                    /* end of inlined section */
    goal.x.whole = (pTVar6->field0_0x0).start[iVar9 + -2].x.whole;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
    goal.y.whole = (pTVar6->field0_0x0).start[iVar9 + -2].y.whole;
  }
  pcVar2 = this->m_pPerson->_vb2479;
  pcVar3 = pcVar2->__vtable;
  uVar4 = (*(code *)pcVar3[1].GetPlacementInfo)
                    ((int)&pcVar2->_vb2830 + (int)*(short *)&pcVar3[1].FindGoodLocation);
  pcVar2 = this->m_pPerson->_vb2479;
  pcVar3 = pcVar2->__vtable;
  lVar5 = (*(code *)pcVar3->GetAttr)
                    ((int)&pcVar2->_vb2830 + (int)*(short *)&pcVar3->GetTemp,&goal,uVar4,0,0);
  if (lVar5 == 0) {
    this->m_FollowState = 3;
  }
  else {
    pcVar2 = this->m_pPerson->_vb2479;
    pcVar3 = pcVar2->__vtable;
    (*(code *)pcVar3->GetAdultAnimTable)
              ((int)&pcVar2->_vb2830 + (int)*(short *)&pcVar3->GetModule,&goal,uVar4,0,0);
  }
  setPersonDirection__10SAnimator2f(this,this->m_Dir);
  return;
}

void SAnimator2::handleShuffle() {
  bool bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  *(undefined4 *)&this->m_FadeInShuffle = 0;
  if (this->m_FollowState == 1) {
    if ((this->m_FollowMode != 1) && (this->m_FollowMode != 3)) {
      iVar2 = *(int *)&this->m_FadeInShuffle;
      goto LAB_001c301c;
    }
    *(undefined4 *)&this->m_FadeInShuffle = 1;
  }
  iVar2 = *(int *)&this->m_FadeInShuffle;
LAB_001c301c:
  if (iVar2 == 1) {
    fVar4 = 1.0;
    fVar3 = this->m_ShuffleIntensity + this->m_TimeMultiplier * _dt * 5.0;
    bVar1 = 1.0 < fVar3;
    this->m_ShuffleIntensity = fVar3;
  }
  else {
    fVar4 = 0.0;
    fVar3 = this->m_ShuffleIntensity - this->m_TimeMultiplier * _dt * 5.0;
    bVar1 = fVar3 < 0.0;
    this->m_ShuffleIntensity = fVar3;
  }
  if (bVar1) {
    this->m_ShuffleIntensity = fVar4;
  }
  return;
}

void SAnimator2::rotateAnimation(float DeltaTime) {
	float DesiredDir;
	EVec2 TempVec;
	float DeltaDir;
	float RotateDirection;
	float TempDdir;
	bool Override;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	unsigned int n;
	
  FTilePt *pFVar1;
  cXObject__3_2479 *pcVar2;
  cXObject__3_2479__vtable *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  EVec2 TempVec;
  
  iVar6 = this->m_CurrentDestNode;
  if (iVar6 == 0) {
                    /* inlined from ../MSrc/vector.h */
    pFVar1 = (this->m_pDestList->field0_0x0).start;
                    /* end of inlined section */
    iVar5 = pFVar1[1].x.whole - (pFVar1->x).whole;
                    /* inlined from ../MSrc/vector.h */
    pFVar1 = (this->m_pDestList->field0_0x0).start;
                    /* end of inlined section */
    iVar6 = pFVar1[1].y.whole - (pFVar1->y).whole;
  }
  else {
                    /* inlined from ../MSrc/vector.h */
    pFVar1 = (this->m_pDestList->field0_0x0).start;
                    /* end of inlined section */
    iVar5 = pFVar1[iVar6].x.whole - pFVar1[iVar6 + -1].x.whole;
                    /* inlined from ../MSrc/vector.h */
    pFVar1 = (this->m_pDestList->field0_0x0).start;
                    /* end of inlined section */
    iVar6 = pFVar1[iVar6].y.whole - pFVar1[iVar6 + -1].y.whole;
  }
  TempVec.field0_0x0.d[1] = (float)iVar6;
  TempVec.field0_0x0.d[0] = (float)iVar5;
  if (this->m_FollowMode == 5) {
    TempVec.field0_0x0.d[0] =
         (this->m_ContinueDestination).field0_0x0.d[0] - (this->m_Pos).field0_0x0.d[0];
    TempVec.field0_0x0.d[1] =
         (this->m_ContinueDestination).field0_0x0.d[1] - (this->m_Pos).field0_0x0.d[1];
  }
  if ((((TempVec.field0_0x0.d[0] <= -0.001) || (0.001 <= TempVec.field0_0x0.d[0])) ||
      (TempVec.field0_0x0.d[1] <= -0.001)) || (0.001 <= TempVec.field0_0x0.d[1])) {
    fVar9 = atan2f(-TempVec.field0_0x0.d[1],TempVec.field0_0x0.d[0]);
  }
  else {
    fVar9 = this->m_Dir;
  }
  fVar12 = fVar9 - this->m_Dir;
  if (3.141593 < fVar12) {
    fVar12 = fVar12 - 6.283185;
  }
  if (fVar12 < -3.141593) {
    fVar12 = fVar12 + 6.283185;
  }
  if (fVar12 < 0.0) {
    fVar11 = -1.0;
    this->m_ShuffleDir = -1;
  }
  else {
    fVar11 = 1.0;
    this->m_ShuffleDir = 1;
  }
  if (this->m_FollowMode == 2) {
    fVar10 = 6.283185;
    fVar8 = this->m_Dir;
  }
  else {
    fVar10 = 1.570796;
    fVar8 = this->m_Dir;
  }
  this->m_Dir = fVar8 + fVar11 * DeltaTime * fVar10;
  fVar11 = this->m_Dir;
  if (3.141593 < fVar11) {
    fVar10 = 6.283185;
    fVar11 = fVar11 - 6.283185;
    this->m_Dir = fVar11;
    if (3.141593 < fVar11) {
      fVar11 = fmodf(fVar11,6.283185);
      this->m_Dir = fVar11;
      if (3.141593 < fVar11) {
        this->m_Dir = fVar11 - fVar10;
      }
    }
    fVar11 = this->m_Dir;
  }
  fVar10 = -3.141593;
  if (fVar11 < -3.141593) {
    fVar11 = fVar11 + 6.283185;
    this->m_Dir = fVar11;
    if (fVar11 < 3.141593) {
      fVar11 = fmodf(fVar11,6.283185);
      this->m_Dir = fVar11;
      if (fVar11 < fVar10) {
        this->m_Dir = fVar11 + 6.283185;
      }
    }
    fVar11 = this->m_Dir;
  }
  else {
    fVar11 = this->m_Dir;
  }
  fVar11 = fVar11 - fVar9;
  if (fVar11 < -3.141593) {
    fVar11 = fVar11 + 6.283185;
  }
  if (3.141593 < fVar11) {
    fVar11 = fVar11 - 6.283185;
  }
  if (fVar12 < 0.0) {
    bVar4 = fVar11 < 0.0;
  }
  else {
    bVar4 = 0.0 < fVar11;
  }
  if (bVar4) {
    this->m_Dir = fVar9;
  }
  if (2.0 <= this->m_TimeMultiplier) {
    this->m_Dir = fVar9;
  }
  bVar4 = false;
  pcVar2 = this->m_pPerson->_vb2479;
  pcVar3 = pcVar2->__vtable;
  lVar7 = (*(code *)pcVar3->ReconType)
                    ((int)&pcVar2->_vb2830 + (int)*(short *)&pcVar3->ReconStream,9);
  if (lVar7 == 0) {
    iVar6 = *(int *)&this->m_StartOfPath;
  }
  else if (fVar12 < 1.570796) {
    bVar4 = -1.570796 < fVar12;
    iVar6 = *(int *)&this->m_StartOfPath;
  }
  else {
    iVar6 = *(int *)&this->m_StartOfPath;
  }
  if (iVar6 == 0) {
    iVar6 = this->m_FollowMode;
  }
  else {
    fVar12 = this->m_Dir - fVar9;
    if ((0.0001 <= fVar12) || (fVar12 <= -0.0001)) goto LAB_001c3578;
    iVar6 = this->m_FollowMode;
  }
  if (iVar6 == 1) {
    this->m_FollowMode = 2;
  }
LAB_001c3578:
  if (bVar4) {
    iVar6 = this->m_FollowMode;
  }
  else {
    fVar9 = this->m_Dir - fVar9;
    if (0.0001 <= fVar9) {
      return;
    }
    if (fVar9 <= -0.0001) {
      return;
    }
    iVar6 = this->m_FollowMode;
  }
  if (iVar6 == 3) {
    this->m_FollowMode = 4;
  }
  return;
}

void SAnimator2::advanceAlongNode(float &DeltaTime) {
	EVec2 Target;
	int x;
	int y;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	unsigned int n;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FTilePt *pFVar5;
  FTilePt *pFVar6;
  EVec2 Target;
  
                    /* inlined from ../MSrc/vector.h */
  iVar1 = this->m_CurrentDestNode;
  pFVar5 = (this->m_pDestList->field0_0x0).start;
  pFVar6 = pFVar5 + iVar1;
  pFVar5 = pFVar5 + iVar1 + -1;
                    /* end of inlined section */
  iVar2 = (pFVar6->x).whole;
  iVar4 = (pFVar6->y).whole - (pFVar5->y).whole;
  iVar3 = iVar2 - (pFVar5->x).whole;
  if (3 < iVar3 * iVar3 + iVar4 * iVar4) {
                    /* end of inlined section */
    Target.field0_0x0.d[0] = (float)iVar2;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
    Target.field0_0x0.d[1] = (float)(this->m_pDestList->field0_0x0).start[iVar1].y.whole;
    moveTowardsDestination__10SAnimator2RfR5EVec2(this,DeltaTime,&Target);
  }
  return;
}

void SAnimator2::continuePath(float &DeltaTime) {
	EVec2 Target;
	
  EVec2 Target;
  
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  Target.field0_0x0.d[0] = (this->m_ContinueDestination).field0_0x0.d[0];
  Target.field0_0x0.d[1] = (this->m_ContinueDestination).field0_0x0.d[1];
                    /* end of inlined section */
  moveTowardsDestination__10SAnimator2RfR5EVec2(this,DeltaTime,&Target);
  return;
}

void SAnimator2::moveTowardsDestination(float &DeltaTime, EVec2 &Target) {
	EVec2 DirectionVec;
	float Dist;
	float MaxWalkSpeed;
	float MaxSpeed;
	float RampupTime;
	float acc;
	float ThresholdDist;
	float UseSpeed;
	float TempY;
	float scaler;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	float tempnum;
	float scaler;
	EVec2 *this;
	
  cXObject__3_2479 *pcVar1;
  cXObject__3_2479__vtable *pcVar2;
  bool bVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  EVec2 DirectionVec;
  
  fVar5 = (Target->field0_0x0).d[0] - (this->m_Pos).field0_0x0.d[0];
  fVar7 = (Target->field0_0x0).d[1] - (this->m_Pos).field0_0x0.d[1];
  fVar8 = sqrtf(fVar5 * fVar5 + fVar7 * fVar7);
  if (0.0001 <= fVar8) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    bVar3 = IsAdult__4ESim(this->m_pSim);
    fVar6 = 17.28002;
    if (bVar3) {
      fVar6 = 19.84002;
    }
    if (this->m_WalkRunStyle == 1) {
      fVar6 = 64.96007;
    }
    if (this->m_TimeMultiplier == 0.0) {
      fVar10 = 1e+12;
    }
    else {
      fVar10 = 0.5 / this->m_TimeMultiplier;
    }
    fVar11 = -fVar6;
    fVar9 = fVar11 / fVar10;
    fVar10 = fVar9 * fVar10 * 0.5 * fVar10 + fVar6 * fVar10;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
    if (((fVar10 <= fVar8) ||
        (pcVar1 = this->m_pPerson->_vb2479, pcVar2 = pcVar1->__vtable,
        lVar4 = (*(code *)pcVar2->ReconType)
                          ((int)&pcVar1->_vb2830 + (int)*(short *)&pcVar2->ReconStream,9),
        lVar4 != 0)) ||
       ((uint)this->m_CurrentDestNode <
        ((int)(this->m_pDestList->field0_0x0).finish - (int)(this->m_pDestList->field0_0x0).start >>
        3) - 2U)) {
      fVar10 = this->m_LastSpeed + -fVar9 * *DeltaTime;
      if (fVar6 < fVar10) {
        fVar10 = fVar6;
      }
    }
    else {
      fVar10 = sqrtf(fVar6 * fVar6 + (fVar9 + fVar9) * (fVar10 - fVar8));
      fVar10 = (fVar6 + fVar11 + fVar10) * 1.001;
    }
    this->m_LastSpeed = fVar10;
    fVar9 = fVar10 * *DeltaTime;
    if ((fVar9 <= fVar8) || (fVar9 <= 0.0)) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      *DeltaTime = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      (this->m_Pos).field0_0x0.d[0] = (this->m_Pos).field0_0x0.d[0] + fVar5 * (1.0 / fVar8) * fVar9;
      (this->m_Pos).field0_0x0.d[1] = (this->m_Pos).field0_0x0.d[1] + fVar7 * (1.0 / fVar8) * fVar9;
    }
    else {
      *DeltaTime = *DeltaTime * ((fVar9 - fVar8) / fVar9);
      (this->m_Pos).field0_0x0.d[0] = (Target->field0_0x0).d[0];
      (this->m_Pos).field0_0x0.d[1] = (Target->field0_0x0).d[1];
    }
                    /* end of inlined section */
    this->m_WalkRunWeight = fVar10 / fVar6;
    if ((this->m_FollowMode != 2) &&
       (pcVar1 = this->m_pPerson->_vb2479, pcVar2 = pcVar1->__vtable,
       lVar4 = (*(code *)pcVar2->ReconType)
                         ((int)&pcVar1->_vb2830 + (int)*(short *)&pcVar2->ReconStream,9), lVar4 == 0
       )) {
      this->m_WalkRunWeight = 0.0;
    }
  }
  return;
}

void SAnimator2::updateRenderAnimation() {
	int x;
	
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  if (*(int *)&this->m_ResetPos == 1) {
    *(undefined4 *)&this->m_ResetPos = 0;
    iVar1 = getPersonX__10SAnimator2(this);
    iVar2 = getPersonY__10SAnimator2(this);
    (this->m_Pos).field0_0x0.d[0] = (float)iVar1;
    (this->m_Pos).field0_0x0.d[1] = (float)iVar2;
    fVar3 = (this->m_Pos).field0_0x0.d[0];
  }
  else {
    fVar3 = (this->m_Pos).field0_0x0.d[0];
  }
  fVar4 = (this->m_Pos).field0_0x0.d[1];
  this->m_RenderPosX = fVar3;
  this->m_RenderPosY = fVar4;
  handleIdleAnimation__10SAnimator2(this);
  handleWalkRunAnimation__10SAnimator2(this);
  handleFootprintSounds__10SAnimator2(this);
  handleShuffleAnimation__10SAnimator2(this);
  handleActionBlending__10SAnimator2(this);
  handleMoodAnimations__10SAnimator2(this);
  positionCharacter__10SAnimator2(this);
  updateParticles__10SAnimator2(this);
  return;
}

void SAnimator2::updateParticles() {
	RBIterator i;
	RBIterator i2;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	
  int *piVar1;
  int iVar2;
  ERedBlackTreeNode *pEVar3;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar3 = (this->m_activeParticles).field0_0x0.m_list.m_pHead;
                    /* end of inlined section */
  if (pEVar3 != (ERedBlackTreeNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    piVar1 = (int *)pEVar3->value;
    while( true ) {
      iVar2 = *piVar1;
                    /* end of inlined section */
      if (iVar2 == 0) {
        pEVar3 = pEVar3->pNext;
      }
      else {
        do {
                    /* end of inlined section */
          Update__13EBoneParticle(*(EBoneParticle **)(iVar2 + 0x1c));
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
          iVar2 = *(int *)(iVar2 + 0x10);
                    /* end of inlined section */
        } while (iVar2 != 0);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
        pEVar3 = pEVar3->pNext;
      }
                    /* end of inlined section */
      if (pEVar3 == (ERedBlackTreeNode *)0x0) break;
      piVar1 = (int *)pEVar3->value;
    }
  }
  return;
}

void SAnimator2::handleMoodAnimations() {
	int MoodId;
	float Intensity;
	ESim *this;
	vector<float,__malloc_alloc_template<0> > *this;
	float *last;
	float *first;
	float *pointer;
	void *result;
	float *last;
	float *first;
	float *pointer;
	
  cXPerson__150_1300 *pcVar1;
  cXPerson__150_1300__vtable *pcVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 *puVar5;
  int iVar6;
  float *pfVar7;
  ESim *pEVar8;
  vector_float___malloc_alloc_template_0___ *pvVar9;
  uint uVar10;
  uint size;
  float fVar11;
  
  uVar10 = 0x6ee972f7;
                    /* inlined from c:/eor/src2/games/sims/ESRC/esim.h */
  pcVar1 = this->m_pSim->m_pPerson;
                    /* end of inlined section */
  pcVar2 = pcVar1->__vtable;
  fVar11 = (float)(*(code *)pcVar2->DebugDumpHappyScape)
                            ((int)&pcVar1->_vb1187 + (int)*(short *)&pcVar2->DeleteTopAction,3);
  fVar11 = GetMovtiveMag__Ff(fVar11);
  fVar11 = (fVar11 + fVar11) - 1.0;
  if (fVar11 < 0.0) {
    fVar11 = -fVar11;
    uVar10 = 0xf4e342db;
  }
  pEVar8 = this->m_pSim;
  if (uVar10 != this->m_LastHappySadAnimId) {
    this->m_LastHappySadAnimId = uVar10;
    StopTrack__15EAnimControlleri(&(pEVar8->field0_0x0).m_AC,this->m_HappySadTrackNum);
    if (uVar10 != 0) {
      SetTrackAnim__15EAnimControlleriUi
                (&(this->m_pSim->field0_0x0).m_AC,this->m_HappySadTrackNum,uVar10);
      SetTrackPos__15EAnimControllerif
                (&(this->m_pSim->field0_0x0).m_AC,this->m_HappySadTrackNum,0.0);
      SetTrackSpeed__15EAnimControllerif
                (&(this->m_pSim->field0_0x0).m_AC,this->m_HappySadTrackNum,0.0);
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
      pvVar9 = &this->m_FloatArray2;
      uVar10 = (((this->m_pSim->field0_0x0).m_AC.m_pRCharacter.m_p)->m_nodes).field0_0x0.m_size;
      size = uVar10 * 4;
      pfVar3 = (this->m_FloatArray2).start;
      for (pfVar7 = pfVar3; pfVar7 != (this->m_FloatArray2).finish; pfVar7 = pfVar7 + 1) {
      }
      (this->m_FloatArray2).finish = pfVar3;
      pfVar3 = (this->m_FloatArray2).start;
      if ((uint)((int)(this->m_FloatArray2).end_of_storage - (int)pfVar3 >> 2) < uVar10) {
        pfVar7 = (this->m_FloatArray2).finish;
        iVar6 = (int)pfVar7 - (int)pfVar3;
        if (uVar10 == 0) {
          pfVar3 = (float *)0x0;
        }
        else {
          pfVar3 = (float *)malloc(size);
          if (pfVar3 == (float *)0x0) {
            pfVar3 = (float *)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
          }
          pfVar7 = (this->m_FloatArray2).finish;
        }
        uninitialized_copy__H2ZPfZPf_X01X01X11_X11(pvVar9->start,pfVar7,pfVar3);
        pfVar7 = (this->m_FloatArray2).finish;
        pfVar4 = pvVar9->start;
        if (pfVar4 == pfVar7) {
          pfVar7 = pvVar9->start;
        }
        else {
          do {
            pfVar4 = pfVar4 + 1;
          } while (pfVar4 != pfVar7);
          pfVar7 = pvVar9->start;
        }
        if ((pfVar7 != (float *)0x0) &&
           ((int)(this->m_FloatArray2).end_of_storage - (int)pfVar7 >> 2 != 0)) {
          free(pfVar7);
        }
        (this->m_FloatArray2).end_of_storage = pfVar3 + uVar10;
        (this->m_FloatArray2).finish = pfVar3 + (iVar6 >> 2);
        pvVar9->start = pfVar3;
                    /* end of inlined section */
        pfVar3 = (this->m_FloatArray2).start;
      }
      else {
        pfVar3 = (this->m_FloatArray2).start;
      }
      memset(pfVar3,0,(long)(int)size);
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
      (this->m_FloatArray2).start[0x11] = 1.0;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
      (this->m_FloatArray2).start[0x12] = 1.0;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
      (this->m_FloatArray2).start[0x14] = 1.0;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
      (this->m_FloatArray2).start[0x15] = 1.0;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
      (this->m_FloatArray2).start[0x18] = 1.0;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
      (this->m_FloatArray2).start[0x1b] = 1.0;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
      (this->m_FloatArray2).start[0x1c] = 1.0;
      SetTrackBlendFactors__15EAnimControlleriPf
                (&(this->m_pSim->field0_0x0).m_AC,this->m_HappySadTrackNum,
                 (this->m_FloatArray2).start);
    }
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
    pEVar8 = this->m_pSim;
  }
  puVar5 = Find__C13ERedBlackTreeUiPUi
                     (&(pEVar8->field0_0x0).m_AC.m_tracks.field0_0x0,this->m_HappySadTrackNum,
                      (uint *)0x0);
                    /* end of inlined section */
  if (puVar5 != (undefined1 *)0x0) {
    SetTrackIntensity__15EAnimControllerif
              (&(this->m_pSim->field0_0x0).m_AC,this->m_HappySadTrackNum,fVar11);
  }
  return;
}

void SAnimator2::handleFootprintSounds() {
	float Interval;
	
  bool bVar1;
  int iVar2;
  float fVar3;
  
  if (*(int *)&this->m_UpdateFootprints != 0) {
    this->m_FootprintTiming = this->m_FootprintTiming + _dt * this->m_TimeMultiplier;
    bVar1 = IsAdult__4ESim(this->m_pSim);
    if (bVar1) {
      fVar3 = 0.55;
      iVar2 = this->m_WalkRunStyle;
    }
    else {
      iVar2 = this->m_WalkRunStyle;
      fVar3 = 0.45;
    }
    if (iVar2 == 1) {
      fVar3 = 0.3333;
    }
    if (fVar3 <= this->m_FootprintTiming) {
      this->m_FootprintTiming = this->m_FootprintTiming - fVar3;
      playFootprint__10SAnimator2(this);
    }
  }
  return;
}

void SAnimator2::playFootprint() {
	int sound;
	int barefoot;
	char *footstep;
	
  int iVar1;
  cXPerson__150_1300 *pcVar2;
  cXObject__150_1187 *pcVar3;
  bool bVar4;
  cSoundPlayer *this_00;
  ushort sourceID;
  int iVar5;
  char *sound;
  
  iVar5 = getFootSound__10SAnimator2i(this,1);
  this_00 = _5Globs_pSound;
  if (iVar5 == -1) {
    return;
  }
  iVar1 = this->m_LastCostume;
  bVar4 = false;
  if (((iVar1 - 1U < 2) || (iVar1 == 5)) || (iVar1 == 0xe)) {
    bVar4 = true;
  }
  switch(iVar5) {
  default:
    sound = "footstep_terrain";
    break;
  case 1:
    goto joined_r0x001c3f10;
  case 2:
joined_r0x001c3f10:
    if (bVar4) {
      sound = "footstep_hard_noshoe";
    }
    else {
      sound = "footstep_hard";
    }
    break;
  case 3:
    goto joined_r0x001c3f58;
  case 4:
    if (bVar4) {
      sound = "footstep_soft_noshoe";
    }
    else {
      sound = "footstep_soft";
    }
    break;
  case 5:
joined_r0x001c3f58:
    if (bVar4) {
      sound = "footstep_medium_noshoe";
    }
    else {
      sound = "footstep_medium";
    }
    break;
  case 6:
    sound = "footstep_plant";
    break;
  case 7:
    sound = "footstep_trash";
    break;
  case 8:
    sound = "footstep_ash";
    break;
  case 9:
    sound = "footstep_roach";
    break;
  case 10:
    sound = "footstep_puddle";
    break;
  case 0xb:
    sound = "footstep_pool_swim_stroke";
  }
  pcVar2 = (cXPerson__150_1300 *)this->m_pPerson;
  if (pcVar2 == _globals._pSelectedSims[0]) {
    pcVar3 = pcVar2->_vb1187;
  }
  else {
    if (pcVar2 != _globals._pSelectedSims[1]) {
      return;
    }
                    /* end of inlined section */
    pcVar3 = pcVar2->_vb1187;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  sourceID = (*(code *)pcVar3->__vtable[1].UserCanPlace)
                       ((int)&pcVar3->_vb1121 + (int)*(short *)&pcVar3->__vtable[1].IsPartOfMe);
  PlayObjectSnd__12cSoundPlayerPCcs(this_00,sound,sourceID);
  return;
}

int SAnimator2::getFootSound(int foot) {
	FTilePt floc;
	CTilePt pt;
	
  cXObject__3_2479 *pcVar1;
  cXObject__3_2479__vtable *pcVar2;
  int inLevel;
  FootSound FVar3;
  float fVar4;
  float fVar5;
  FTilePt floc;
  CTilePt pt;
  
  fVar5 = (this->m_Pos).field0_0x0.d[0];
  if (0.0 <= fVar5) {
    fVar4 = (this->m_Pos).field0_0x0.d[1];
    if (0.0 <= fVar4) {
                    /* end of inlined section */
      floc.y.whole = (int)(fVar4 + 0.5);
      floc.x.whole = (int)(fVar5 + 0.5);
      pcVar1 = this->m_pPerson->_vb2479;
      pcVar2 = pcVar1->__vtable;
      inLevel = (*(code *)pcVar2[1].GetPlacementInfo)
                          ((int)&pcVar1->_vb2830 + (int)*(short *)&pcVar2[1].FindGoodLocation);
      __7CTilePtRC7FTilePti(&pt,&floc,inLevel);
      FVar3 = GetFootSound__10SAnimator2iRC7CTilePt(foot,&pt);
      ___7CTilePt(&pt,2);
    }
    else {
      FVar3 = ~kOutdoors;
    }
  }
  else {
    FVar3 = ~kOutdoors;
  }
  return FVar3;
}

void SAnimator2::handleWalkRunAnimation() {
	SkillNameID SkillId;
	
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  float fVar1;
  AnimRef *SkillId;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  fVar1 = this->m_WalkRunWeight;
  if (0.001 < fVar1) {
    if (this->m_LastWalkRunWeight <= 0.001) {
      if (this->m_WalkRunStyle == 1) {
        GetStdAnimRef__FP8cXPerson10StdAnimIdxRPC7AnimRef
                  ((cXPerson__118_1094 *)this->m_pPerson,kAnimRunningLoop,&SkillId);
      }
      else {
        GetStdAnimRef__FP8cXPerson10StdAnimIdxRPC7AnimRef
                  ((cXPerson__118_1094 *)this->m_pPerson,kAnimWalkingLoop,&SkillId);
      }
      SetTrackAnim__15EAnimControlleriUi
                (&(this->m_pSim->field0_0x0).m_AC,this->m_WalkTrackNum,SkillId->id);
      this->m_FootprintTiming = 0.0;
      *(undefined4 *)&this->m_UpdateFootprints = 1;
    }
    fVar1 = this->m_WalkRunWeight;
  }
  if (fVar1 <= 0.001) {
    if (0.001 < this->m_LastWalkRunWeight) {
      StopTrack__15EAnimControlleri(&(this->m_pSim->field0_0x0).m_AC,this->m_WalkTrackNum);
      *(undefined4 *)&this->m_UpdateFootprints = 0;
      fVar1 = this->m_WalkRunWeight;
    }
    else {
      fVar1 = this->m_WalkRunWeight;
    }
  }
  else {
    fVar1 = this->m_WalkRunWeight;
  }
  if (0.001 < fVar1) {
    SetTrackSpeed__15EAnimControllerif
              (&(this->m_pSim->field0_0x0).m_AC,this->m_WalkTrackNum,this->m_TimeMultiplier);
    SetTrackIntensity__15EAnimControllerif
              (&(this->m_pSim->field0_0x0).m_AC,this->m_WalkTrackNum,this->m_WalkRunWeight);
  }
  return;
}

void SAnimator2::handleIdleAnimation() {
	int desiredAnim;
	SkillNameID SkillId;
	EAnimDef *AD;
	
  cXPerson__3_1554__vtable *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  EAnimDef *pEVar4;
  long lVar5;
  ESim *pEVar6;
  undefined8 unaff_s0;
  StdAnimIdx idx;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  AnimRef *SkillId;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  pcVar1 = this->m_pPerson->__vtable;
  iVar2 = (*(code *)pcVar1->ClearRecording)
                    ((int)&this->m_pPerson->_vb2479 + (int)*(short *)&pcVar1->StopRecording);
  if (this->m_IdleState != iVar2) {
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
    puVar3 = Find__C13ERedBlackTreeUiPUi
                       (&(this->m_pSim->field0_0x0).m_AC.m_tracks.field0_0x0,this->m_IdleTrackNum,
                        (uint *)0x0);
                    /* end of inlined section */
    pEVar6 = this->m_pSim;
    if (puVar3 == (undefined1 *)0x0) goto LAB_001c4288;
    StopTrack__15EAnimControlleri(&(pEVar6->field0_0x0).m_AC,this->m_IdleTrackNum);
  }
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
  pEVar6 = this->m_pSim;
LAB_001c4288:
  puVar3 = Find__C13ERedBlackTreeUiPUi
                     (&(pEVar6->field0_0x0).m_AC.m_tracks.field0_0x0,this->m_IdleTrackNum,
                      (uint *)0x0);
                    /* end of inlined section */
  if (puVar3 == (undefined1 *)0x0) {
    idx = ~kAnimBlank;
    pcVar1 = this->m_pPerson->__vtable;
    lVar5 = (*(code *)pcVar1->ClearRecording)
                      ((int)&this->m_pPerson->_vb2479 + (int)*(short *)&pcVar1->StopRecording);
    this->m_IdleState = (int)lVar5;
    if (lVar5 == 0) {
      idx = kAnimStandingLoop;
    }
    else if (0 < lVar5) {
      if (lVar5 == 1) {
        idx = kAnimSittingLoop;
      }
      else if (lVar5 == 2) {
        idx = kAnimSittingFloorLoop;
      }
    }
    if (idx != ~kAnimBlank) {
      GetStdAnimRef__FP8cXPerson10StdAnimIdxRPC7AnimRef
                ((cXPerson__118_1094 *)this->m_pPerson,idx,&SkillId);
      SetTrackAnim__15EAnimControlleriUi
                (&(this->m_pSim->field0_0x0).m_AC,this->m_IdleTrackNum,SkillId->id);
      SetTrackIntensity__15EAnimControllerif
                (&(this->m_pSim->field0_0x0).m_AC,this->m_IdleTrackNum,1.0);
      SetTrackSpeed__15EAnimControllerif
                (&(this->m_pSim->field0_0x0).m_AC,this->m_IdleTrackNum,this->m_TimeMultiplier);
      pEVar4 = GetTrackAnimDef__15EAnimControlleri
                         (&(this->m_pSim->field0_0x0).m_AC,this->m_IdleTrackNum);
      if (pEVar4 != (EAnimDef *)0x0) {
        pEVar4->endAction = '\0';
      }
    }
  }
  return;
}

void SAnimator2::handleShuffleAnimation() {
	SkillNameID SkillId;
	float u;
	
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  float fVar1;
  AnimRef *SkillId;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  fVar1 = this->m_ShuffleIntensity;
  if (0.001 < fVar1) {
    if (this->m_LastShuffleIntensity <= 0.001) {
      if (this->m_ShuffleDir == -1) {
        GetStdAnimRef__FP8cXPerson10StdAnimIdxRPC7AnimRef
                  ((cXPerson__118_1094 *)this->m_pPerson,kAnimStandingTurn90CCW,&SkillId);
      }
      else {
        GetStdAnimRef__FP8cXPerson10StdAnimIdxRPC7AnimRef
                  ((cXPerson__118_1094 *)this->m_pPerson,kAnimStandingTurn90CW,&SkillId);
      }
      SetTrackAnim__15EAnimControlleriUi
                (&(this->m_pSim->field0_0x0).m_AC,this->m_ShuffleTrackNum,SkillId->id);
    }
    fVar1 = this->m_ShuffleIntensity;
  }
  if (fVar1 <= 0.001) {
    if (0.001 < this->m_LastShuffleIntensity) {
      StopTrack__15EAnimControlleri(&(this->m_pSim->field0_0x0).m_AC,this->m_ShuffleTrackNum);
      fVar1 = this->m_ShuffleIntensity;
    }
    else {
      fVar1 = this->m_ShuffleIntensity;
    }
  }
  else {
    fVar1 = this->m_ShuffleIntensity;
  }
  if (0.001 < fVar1) {
    SetTrackSpeed__15EAnimControllerif
              (&(this->m_pSim->field0_0x0).m_AC,this->m_ShuffleTrackNum,this->m_TimeMultiplier);
                    /* inlined from /eor/src2/common/math/e_math.h */
    fVar1 = this->m_ShuffleIntensity;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
    SetTrackIntensity__15EAnimControllerif
              (&(this->m_pSim->field0_0x0).m_AC,this->m_ShuffleTrackNum,
               fVar1 * -2.0 * fVar1 * fVar1 + fVar1 * 3.0 * fVar1);
  }
  return;
}

void SAnimator2::handleActionBlending() {
  undefined1 *puVar1;
  float fVar2;
  
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
                    /* end of inlined section */
  if ((((*(int *)&this->m_HoldTransferredTrack == 0) && (0.0 < this->m_BlendTime)) &&
      (this->m_BlendSkillTrackNum != 0)) &&
     (puVar1 = Find__C13ERedBlackTreeUiPUi
                         (&(this->m_pSim->field0_0x0).m_AC.m_tracks.field0_0x0,
                          this->m_BlendSkillTrackNum,(uint *)0x0), puVar1 != (undefined1 *)0x0)) {
    fVar2 = this->m_BlendAccumulator + _dt * this->m_TimeMultiplier;
    this->m_BlendAccumulator = fVar2;
    if (this->m_BlendTime <= fVar2) {
      this->m_BlendTime = 0.0;
      StopTrack__15EAnimControlleri(&(this->m_pSim->field0_0x0).m_AC,this->m_BlendSkillTrackNum);
    }
    else {
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
      fVar2 = 1.0 - fVar2 / this->m_BlendTime;
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
      SetTrackIntensity__15EAnimControllerif
                (&(this->m_pSim->field0_0x0).m_AC,this->m_BlendSkillTrackNum,
                 fVar2 * -2.0 * fVar2 * fVar2 + fVar2 * 3.0 * fVar2);
    }
  }
  return;
}

void SAnimator2::positionCharacter() {
	EVec3 vTempVec;
	EVec3 vPos;
	EMat4 mOrient;
	EMat4 TempMat;
	EVec3 &vLeft;
	
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  EStorable__vtable *pEVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  EVec3 vTempVec;
  EVec3 vPos;
  EMat4 mOrient;
  float local_c0;
  float local_bc;
  float local_b8;
  EBound3 EStack_b0;
  EMat4 TempMat;
  
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  fVar10 = 1.0;
                    /* end of inlined section */
  vTempVec.field0_0x0.d[0] = this->m_RenderPosX;
  vTempVec.field0_0x0.d[1] = this->m_RenderPosY;
  vTempVec.field0_0x0.d[2] = 0.0;
  convertAnimationFormatToEngineFormat__10SAnimator2RC5EVec3R5EVec3(this,&vTempVec,&vPos);
  Id__5EMat4(&mOrient);
  RotateZ__5EMat4f(&mOrient,this->m_Dir);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  mOrient.field0_0x0.d[3][0] = vPos.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  mOrient.field0_0x0.d[3][1] = vPos.field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  mOrient.field0_0x0.d[3][2] = vPos.field0_0x0.d[2];
                    /* end of inlined section */
  local_c0 = fVar10;
  local_bc = fVar10;
  local_b8 = fVar10;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  Update__15EAnimControllerP5EVec3T1G5EVec3
            (&(this->m_pSim->field0_0x0).m_AC,(EVec3 *)0x0,(EVec3 *)0x0,(EVec3 *)&local_c0);
  Compute__15EAnimControllerRC5EMat4(&(this->m_pSim->field0_0x0).m_AC,&mOrient);
  CalcVisibilitySphere__15EAnimControllerRC5EMat4R12EBoundSphere
            (&(this->m_pSim->field0_0x0).m_AC,&mOrient,
             &(this->m_pSim->field0_0x0).field0_0x0.m_boundSphere);
                    /* inlined from /eor/src2/common/math/e_bound3.h */
  Compute__7EBound3RC12EBoundSphere(&EStack_b0,&(this->m_pSim->field0_0x0).field0_0x0.m_boundSphere)
  ;
                    /* end of inlined section */
  SetBounds__9EInstanceRC7EBound3((EInstance *)this->m_pSim,&EStack_b0);
  pEVar4 = (this->m_pSim->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar4[3].GetTypeInfo)
            ((int)((this->m_pSim->field0_0x0).field0_0x0.field0_0x0.m_otd.m_minPos + -7) +
             (int)*(short *)&pEVar4[3].SafeDelete,&mOrient);
  CalcNodeOrient__15EAnimControlleriR5EMat4(&(this->m_pSim->field0_0x0).m_AC,0x27,&TempMat);
  uVar7 = CONCAT44(TempMat.field0_0x0.d[3][1],TempMat.field0_0x0.d[3][0]);
  puVar1 = (undefined *)((int)&(this->m_CarryPos).field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar7 >> (7 - uVar5) * 8;
  uVar5 = (uint)&this->m_CarryPos & 7;
  puVar6 = (ulong *)((int)&this->m_CarryPos - uVar5);
  *puVar6 = uVar7 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  (this->m_CarryPos).field0_0x0.d[2] = TempMat.field0_0x0.d[3][2];
  CalcNodeOrient__15EAnimControlleriR5EMat4
            (&(this->m_pSim->field0_0x0).m_AC,0x11,&this->m_mHeadOrient);
  puVar1 = (undefined *)((int)&(this->m_mHeadOrient).field0_0x0 + 0x37);
  uVar5 = (uint)puVar1 & 7;
  puVar2 = (undefined *)((int)&(this->m_mHeadOrient).field0_0x0 + 0x30);
  uVar3 = (uint)puVar2 & 7;
  uVar7 = (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
          uVar7 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)(puVar2 + -uVar3) >> uVar3 * 8;
  fVar8 = (this->m_mHeadOrient).field0_0x0.d[3][2];
  puVar1 = (undefined *)((int)&(this->m_HeadPos).field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar7 >> (7 - uVar5) * 8;
  uVar5 = (uint)&this->m_HeadPos & 7;
  puVar6 = (ulong *)((int)&this->m_HeadPos - uVar5);
  *puVar6 = uVar7 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  (this->m_HeadPos).field0_0x0.d[2] = fVar8;
  CalcNodeOrient__15EAnimControlleriR5EMat4(&(this->m_pSim->field0_0x0).m_AC,1,&TempMat);
  puVar1 = (undefined *)((int)&(this->m_PelvisPos).field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
            CONCAT44(TempMat.field0_0x0.d[3][1],TempMat.field0_0x0.d[3][0]) >> (7 - uVar5) * 8;
  uVar5 = (uint)&this->m_PelvisPos & 7;
  puVar6 = (ulong *)((int)&this->m_PelvisPos - uVar5);
  *puVar6 = CONCAT44(TempMat.field0_0x0.d[3][1],TempMat.field0_0x0.d[3][0]) << uVar5 * 8 |
            *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  (this->m_PelvisPos).field0_0x0.d[2] = TempMat.field0_0x0.d[3][2];
  (this->m_CarryDir).field0_0x0.d[0] = 0.0;
  (this->m_CarryDir).field0_0x0.d[2] = fVar10;
  TempMat.field0_0x0.d[3][2] = 0.0;
  TempMat.field0_0x0.d[3][1] = 0.0;
  TempMat.field0_0x0.d[3][0] = 0.0;
  (this->m_CarryDir).field0_0x0.d[1] = 0.0;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  fVar8 = (this->m_CarryDir).field0_0x0.d[1];
  fVar9 = (this->m_CarryDir).field0_0x0.d[2];
  local_bc = fVar8 * TempMat.field0_0x0.d[1][1] + fVar9 * TempMat.field0_0x0.d[2][1];
  local_c0 = fVar8 * TempMat.field0_0x0.d[1][0] + fVar9 * TempMat.field0_0x0.d[2][0];
  local_b8 = fVar8 * TempMat.field0_0x0.d[1][2] + fVar9 * TempMat.field0_0x0.d[2][2];
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&(this->m_CarryDir).field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | CONCAT44(local_bc,local_c0) >> (7 - uVar5) * 8;
  uVar5 = (uint)&this->m_CarryDir & 7;
  puVar6 = (ulong *)((int)&this->m_CarryDir - uVar5);
  *puVar6 = CONCAT44(local_bc,local_c0) << uVar5 * 8 |
            *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  (this->m_CarryDir).field0_0x0.d[2] = local_b8;
  (this->m_CarryDir).field0_0x0.d[2] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar9 = (this->m_CarryDir).field0_0x0.d[0];
  fVar8 = (this->m_CarryDir).field0_0x0.d[1];
  fVar11 = (this->m_CarryDir).field0_0x0.d[2];
  fVar8 = sqrtf(fVar9 * fVar9 + fVar8 * fVar8 + fVar11 * fVar11);
  if (fVar8 != 0.0) {
    fVar10 = fVar10 / fVar8;
    (this->m_CarryDir).field0_0x0.d[0] = (this->m_CarryDir).field0_0x0.d[0] * fVar10;
    fVar8 = (this->m_CarryDir).field0_0x0.d[2];
    (this->m_CarryDir).field0_0x0.d[1] = (this->m_CarryDir).field0_0x0.d[1] * fVar10;
    (this->m_CarryDir).field0_0x0.d[2] = fVar8 * fVar10;
  }
                    /* end of inlined section */
  return;
}

void SAnimator2::GetBonePosAndDirForParticle(u32 bone, EMat4 &refMat) {
  CalcNodeOrient__15EAnimControlleriR5EMat4(&(this->m_pSim->field0_0x0).m_AC,bone,refMat);
  return;
}

void SAnimator2::convertAnimationFormatToEngineFormat(EVec3 &InVec, EVec3 &OutVec) {
  float fVar1;
  
  (OutVec->field0_0x0).d[0] = (InVec->field0_0x0).d[1] * 0.06249993;
  fVar1 = (InVec->field0_0x0).d[0];
  (OutVec->field0_0x0).d[2] = 0.0;
  (OutVec->field0_0x0).d[1] = fVar1 * 0.06249993;
  return;
}

void SAnimator2::processEvents(AnimRef &aref, int iStartTime, int interval, bool bBackward) {
	int i;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	int i;
	int rStartTime;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	
  TimePropsAssociation__0_5614 *event;
  TimePropsAssociation__76_3377 *event_00;
  int iVar1;
  int iVar2;
  
  event = (aref->props).pData;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
  iVar1 = 0;
  if (event != (TimePropsAssociation__0_5614 *)0x0) {
    iVar1 = event[-1].value.number;
  }
                    /* end of inlined section */
  if (bBackward) {
    iVar1 = iVar1 + -1;
    iVar2 = aref->duration - iStartTime;
    if (-1 < iVar1) {
      event_00 = (TimePropsAssociation__76_3377 *)(event + iVar1);
      do {
                    /* end of inlined section */
                    /* end of inlined section */
        if ((event_00->time <= iVar2) && ((interval < 0 || (iVar2 - interval < event_00->time)))) {
                    /* end of inlined section */
          eventHandler__10SAnimator2RCQ24anim20TimePropsAssociation(this,event_00);
        }
        iVar1 = iVar1 + -1;
        event_00 = event_00 + -1;
      } while (-1 < iVar1);
    }
  }
  else if (0 < iVar1) {
    do {
                    /* end of inlined section */
                    /* end of inlined section */
      if ((iStartTime <= ((TimePropsAssociation__76_3377 *)event)->time) &&
         ((interval < 0 || (((TimePropsAssociation__76_3377 *)event)->time < iStartTime + interval))
         )) {
                    /* end of inlined section */
        eventHandler__10SAnimator2RCQ24anim20TimePropsAssociation
                  (this,(TimePropsAssociation__76_3377 *)event);
      }
      iVar1 = iVar1 + -1;
      event = (TimePropsAssociation__0_5614 *)((TimePropsAssociation__76_3377 *)event + 1);
    } while (iVar1 != 0);
  }
  return;
}

void SAnimator2::eventHandler(TimePropsAssociation &event) {
	vector<int,__malloc_alloc_template<0> > *this;
	int &x;
	int &value;
	vector<int,__malloc_alloc_template<0> > *this;
	Int tmp;
	TreeSim *this;
	Int state;
	EMat4 mOrient;
	TreeSim *this;
	
  cXPerson__3_1554 *pcVar1;
  cXObject__3_2479 *pcVar2;
  cXObject__3_2479__vtable *pcVar3;
  TimePropsAssociation__value *position;
  int iVar4;
  cXPerson__3_1554__vtable *pcVar5;
  TreeSim__vtable *pTVar6;
  cSoundPlayer *this_00;
  ushort sourceID;
  Interaction *this_01;
  cXObject__142_982 *pcVar7;
  EStorable *this_02;
  ISimInstance *pPool;
  int iVar8;
  undefined4 uVar9;
  EMat4 mOrient;
  
  this_00 = _5Globs_pSound;
  switch(event->kind) {
  case kFootstep:
    footstepEvent__10SAnimator2i(this,(event->value).number);
    break;
  case kLeftHand:
    pcVar1 = this->m_pPerson;
    uVar9 = 0x16;
    goto LAB_001c4a40;
  case kRightHand:
    pcVar1 = this->m_pPerson;
    uVar9 = 0x17;
LAB_001c4a40:
    (*(code *)pcVar1->__vtable->GetRecordMaxDuration)
              ((int)&pcVar1->_vb2479 + (int)*(short *)&pcVar1->__vtable->SetRecordDuration,uVar9,
               *(undefined2 *)&event->value);
    break;
  case kSound:
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pcVar2 = this->m_pPerson->_vb2479;
    pcVar3 = pcVar2->__vtable;
    sourceID = (*(code *)pcVar3[1].UserCanPlace)
                         ((int)&pcVar2->_vb2830 + (int)*(short *)&pcVar3[1].IsPartOfMe);
                    /* inlined from ../MSrc/GameSound.h */
    PlayBySource__12cSoundPlayerPCQ23snd12EventMappings(this_00,(event->value).pEvent,sourceID);
                    /* end of inlined section */
    break;
  case kXEvt:
                    /* inlined from ../MSrc/vector.h */
    position = (TimePropsAssociation__value *)(this->m_eventQueue).finish;
    if (position == (TimePropsAssociation__value *)(this->m_eventQueue).end_of_storage) {
      insert_aux__t6vector2ZiZt23__malloc_alloc_template1i0PiRCi
                (&this->m_eventQueue,&position->number,&(event->value).number);
                    /* end of inlined section */
    }
    else {
      *position = event->value;
      (this->m_eventQueue).finish = (this->m_eventQueue).finish + 1;
    }
    break;
  case kRumble:
    playRumble__10SAnimator2P17RumbleDataElement(this,(event->value).pRumble);
    break;
  case kShadowEvt:
    iVar4 = (event->value).number;
    if (iVar4 < 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = 1;
      if (iVar4 < 2) {
        iVar8 = iVar4;
      }
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/esim.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/TreeSim.h */
                    /* end of inlined section */
    *(uint *)&this->m_pPerson->_vb2479->_vb2830->m_pEoRPerson->m_bDrawShadow = (uint)(iVar8 != 0);
    break;
  case kSplash:
    pcVar5 = this->m_pPerson->__vtable;
    this_01 = (Interaction *)
              (*(code *)pcVar5->IsChild)
                        ((int)&this->m_pPerson->_vb2479 + (int)*(short *)&pcVar5->IsVisitor);
    pcVar7 = GetStackObject__C11Interaction(this_01);
    pTVar6 = pcVar7->_vb1019->__vtable;
    this_02 = (EStorable *)
              (*(code *)pTVar6[1].GetISimInstance)
                        ((int)&pcVar7->_vb1019->m_pObject + (int)*(short *)&pTVar6[1].GetLastResult)
    ;
    pPool = (ISimInstance *)DynamicCast__9EStorableP9ETypeInfo(this_02,&_10EISwimPool_m_typeInfo);
                    /* inlined from ../MSrc/TreeSim.h */
                    /* end of inlined section */
    GetOrient__13EIStaticModelR5EMat4
              ((EIStaticModel *)this->m_pPerson->_vb2479->_vb2830->m_pEoRPerson,&mOrient);
    StartWaveInPool__FP12ISimInstance11ESimBoneIdxRC5EVec3
              (pPool,(event->value).boneId,(EVec3 *)((int)&mOrient.field0_0x0 + 0x30));
    break;
  case kParticle:
    procBoneParticleEvt__10SAnimator2P17EAnimParticleData(this,(event->value).pParticle);
  }
  return;
}

void SAnimator2::procBoneParticleEvt(EAnimParticleData *pParticleData) {
	u32 type;
	u32 bone;
	EBoneParticlePtrTree *pTree;
	TRedBlackTree<unsigned int,TRedBlackTree<unsigned int,EBoneParticle *> *> *this;
	u32 key;
	u32 key;
	u32 key;
	EBoneParticle *pEffect;
	u32 key;
	u32 key;
	
  ESimBoneIdx key;
  uint key_00;
  undefined1 *puVar1;
  ERedBlackTree *this_00;
  EBoneParticle *pEVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  TRedBlackTree_unsigned_int_EBoneParticle___ *pTree;
  EBoneParticle *pEffect;
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
  
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* end of inlined section */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
                    /* end of inlined section */
  key = pParticleData->m_boneId;
  key_00 = pParticleData->m_particleId;
  pTree = (TRedBlackTree_unsigned_int_EBoneParticle___ *)0x0;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  puVar1 = Find__C13ERedBlackTreeUiPUi(&(this->m_activeParticles).field0_0x0,key,(uint *)&pTree);
                    /* end of inlined section */
  if (puVar1 == (undefined1 *)0x0) {
    this_00 = (ERedBlackTree *)__builtin_new(0xc);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    __13ERedBlackTree(this_00);
    pTree = (TRedBlackTree_unsigned_int_EBoneParticle___ *)this_00;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    Insert__13ERedBlackTreeUiUib(&(this->m_activeParticles).field0_0x0,key,(uint)this_00,false);
                    /* end of inlined section */
    pEVar2 = (EBoneParticle *)__builtin_new(0x1c);
    pEVar2 = __13EBoneParticleUiP8cXPersonP17EAnimParticleData
                       (pEVar2,key_00,(cXPerson__2_985 *)this->m_pPerson,pParticleData);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    Insert__13ERedBlackTreeUiUib(&pTree->field0_0x0,key_00,(uint)pEVar2,false);
                    /* end of inlined section */
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
    pEffect = (EBoneParticle *)0x0;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    puVar1 = Find__C13ERedBlackTreeUiPUi(&pTree->field0_0x0,key_00,(uint *)((uint)&pTree | 4));
                    /* end of inlined section */
    if (puVar1 == (undefined1 *)0x0) {
      pEVar2 = (EBoneParticle *)__builtin_new(0x1c);
      pEVar2 = __13EBoneParticleUiP8cXPersonP17EAnimParticleData
                         (pEVar2,key_00,(cXPerson__2_985 *)this->m_pPerson,pParticleData);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      Insert__13ERedBlackTreeUiUib(&pTree->field0_0x0,key_00,(uint)pEVar2,false);
    }
    else {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      Remove__13ERedBlackTreeP17RBIteratorPtrType(&pTree->field0_0x0,puVar1);
                    /* end of inlined section */
      if (pEffect != (EBoneParticle *)0x0) {
        ___13EBoneParticle(pEffect,3);
      }
    }
  }
  return;
}

void SAnimator2::cleanupParticles() {
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator next;
	RBIterator i;
	void *pNode;
	RBIterator i;
	RBIterator i;
	TRedBlackTree<unsigned int,TRedBlackTree<unsigned int,EBoneParticle *> *> *this;
	RBIterator i;
	ERedBlackTree *this;
	TLinkedList<ERedBlackTreeNode,12,16> *this;
	RBIterator i;
	RBIterator next;
	RBIterator i;
	void *pNode;
	RBIterator i;
	RBIterator i;
	
  ERedBlackTree *pEVar1;
  ERedBlackTreeNode *pEVar2;
  EBoneParticle *this_00;
  ERedBlackTreeNode *pEVar3;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar3 = (this->m_activeParticles).field0_0x0.m_list.m_pHead;
                    /* end of inlined section */
  if (pEVar3 == (ERedBlackTreeNode *)0x0) {
    pEVar3 = (this->m_activeParticles).field0_0x0.m_list.m_pHead;
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    pEVar1 = (ERedBlackTree *)pEVar3->value;
    while( true ) {
      pEVar2 = (pEVar1->m_list).m_pHead;
      if (pEVar2 != (ERedBlackTreeNode *)0x0) {
        this_00 = (EBoneParticle *)pEVar2->value;
        while( true ) {
          pEVar2 = pEVar2->pNext;
          if (this_00 != (EBoneParticle *)0x0) {
            ___13EBoneParticle(this_00,3);
          }
          if (pEVar2 == (ERedBlackTreeNode *)0x0) break;
          this_00 = (EBoneParticle *)pEVar2->value;
        }
      }
      RemoveAll__13ERedBlackTree(pEVar1);
      pEVar3 = pEVar3->pNext;
                    /* end of inlined section */
      if (pEVar3 == (ERedBlackTreeNode *)0x0) break;
      pEVar1 = (ERedBlackTree *)pEVar3->value;
    }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    pEVar3 = (this->m_activeParticles).field0_0x0.m_list.m_pHead;
  }
  if (pEVar3 != (ERedBlackTreeNode *)0x0) {
    pEVar1 = (ERedBlackTree *)pEVar3->value;
    while( true ) {
      pEVar3 = pEVar3->pNext;
      if (pEVar1 != (ERedBlackTree *)0x0) {
        RemoveAll__13ERedBlackTree(pEVar1);
        _memmanFree__FPv(pEVar1);
      }
      if (pEVar3 == (ERedBlackTreeNode *)0x0) break;
      pEVar1 = (ERedBlackTree *)pEVar3->value;
    }
  }
  RemoveAll__13ERedBlackTree(&(this->m_activeParticles).field0_0x0);
  return;
}

void SAnimator2::playRumble(RumbleDataElement *pRumble) {
	int ControlNum;
	TreeSim *this;
	TreeSim *this;
	
  EGlobal *pEVar1;
  long lVar2;
  long lVar3;
  
                    /* end of inlined section */
  pEVar1 = _5Globs_pEORGlobals;
  lVar3 = -1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/TreeSim.h */
                    /* end of inlined section */
  if ((_5Globs_pEORGlobals->_pSelectedSims[0] != (cXPerson__150_1300 *)0x0) &&
     (_5Globs_pEORGlobals->_pSelectedSims[0]->_vb1187->_vb1121->m_pEoRPerson == this->m_pSim)) {
    lVar3 = 0;
  }
                    /* inlined from ../MSrc/TreeSim.h */
                    /* end of inlined section */
  if ((_5Globs_pEORGlobals->_pSelectedSims[1] != (cXPerson__150_1300 *)0x0) &&
     (_5Globs_pEORGlobals->_pSelectedSims[1]->_vb1187->_vb1121->m_pEoRPerson == this->m_pSim)) {
    lVar3 = 1;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  if ((((lVar3 != -1) && (*(int *)&(_globals.m_pOptionsRecon)->m_bRumble != 0)) &&
      (0.001 < pRumble->Duration)) &&
     (lVar2 = (*(code *)_5Globs_pSimulator->__vtable->DoStream)
                        ((int)&_5Globs_pSimulator->__vtable +
                         (int)*(short *)&_5Globs_pSimulator->__vtable->DoCommand), lVar2 == 0)) {
    VibrateAll__8EVibrateUcffff
              (pEVar1->m_pVibrate,(uchar)lVar3,(float)(uint)(ushort)pRumble->SmallMotorOn,
               (float)(uint)(ushort)pRumble->LargeMotorSpeed * 0.003921569,pRumble->Duration,
               pRumble->Duration);
  }
  return;
}

void SAnimator2::footstepEvent(int val) {
  playFootprint__10SAnimator2(this);
  return;
}

bool SAnimator2::startSkill(SkillNameID skill, bool bBackwards) {
  int nTrack;
  ESim *pEVar1;
  float fVar2;
  
  cleanupParticles__10SAnimator2(this);
  this->m_skillName = skill;
  if ((*(int *)&this->m_bSpecialAnimOverride == 0) || (this->m_SpecialOverrideAnimId != skill->id))
  {
    this->m_iAnimDuration = 0;
    this->m_fAnimInterval = 0.0;
    nTrack = this->m_SkillPlayTrackNum;
  }
  else {
    nTrack = this->m_SkillPlayTrackNum;
  }
  *(undefined4 *)&this->m_bSpecialAnimOverride = 0;
  this->m_SkillTrackNum = nTrack;
  this->m_SpecialOverrideAnimId = 0;
  *(int *)&this->m_bBackwards = (int)bBackwards;
  SetTrackAnim__15EAnimControlleriUi(&(this->m_pSim->field0_0x0).m_AC,nTrack,skill->id);
  this->m_CurrentAnimationId = skill->id;
  if (bBackwards) {
    SetTrackSpeed__15EAnimControllerif
              (&(this->m_pSim->field0_0x0).m_AC,this->m_SkillTrackNum,-this->m_TimeMultiplier);
    SetTrackPos__15EAnimControllerif(&(this->m_pSim->field0_0x0).m_AC,this->m_SkillTrackNum,1.0);
    pEVar1 = this->m_pSim;
  }
  else {
    SetTrackSpeed__15EAnimControllerif
              (&(this->m_pSim->field0_0x0).m_AC,this->m_SkillTrackNum,this->m_TimeMultiplier);
    pEVar1 = this->m_pSim;
  }
  SetTrackIntensity__15EAnimControllerif(&(pEVar1->field0_0x0).m_AC,this->m_SkillTrackNum,1.0);
  fVar2 = getPersonDirection__10SAnimator2(this);
  this->m_Dir = fVar2;
  return true;
}

bool SAnimator2::isAnimationDone() {
	bool result;
	
  int *piVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  
  bVar2 = this->m_skillName != (AnimRef *)0x0;
  if (bVar2) {
    bVar3 = IsTrackAnimComplete__15EAnimControlleri
                      (&(this->m_pSim->field0_0x0).m_AC,this->m_SkillTrackNum);
    bVar2 = false;
    if (bVar3) {
      if (this->m_skillName->duration < this->m_iAnimDuration) {
        piVar4 = (this->m_eventQueue).finish;
      }
      else {
        processEvents__10SAnimator2RC7AnimRefiib
                  (this,this->m_skillName,this->m_iAnimDuration,-1,
                   SUB41(*(undefined4 *)&this->m_bBackwards,0));
        this->m_iAnimDuration = this->m_skillName->duration + 1;
                    /* inlined from ../MSrc/vector.h */
        piVar4 = (this->m_eventQueue).finish;
      }
      piVar1 = (this->m_eventQueue).start;
                    /* end of inlined section */
      this->m_CurrentAnimationId = 0;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
      bVar2 = (int)piVar4 - (int)piVar1 >> 2 == 0;
    }
  }
  return bVar2;
}

void SAnimator2::stopCurAnim() {
	vector<int,__malloc_alloc_template<0> > *this;
	int *last;
	int *first;
	int *pointer;
	
  int *piVar1;
  int *piVar2;
  
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
  this->m_iAnimDuration = 0;
  this->m_skillName = (AnimRef *)0x0;
  this->m_fAnimInterval = 0.0;
  *(undefined4 *)&this->m_bBackwards = 0;
                    /* inlined from ../MSrc/algobase.h */
  piVar1 = (this->m_eventQueue).start;
  for (piVar2 = piVar1; piVar2 != (this->m_eventQueue).finish; piVar2 = piVar2 + 1) {
  }
  (this->m_eventQueue).finish = piVar1;
  return;
}

void SAnimator2::blendAndTransferActionTrack() {
	int Dir;
	int PosX;
	int PosY;
	
  cXObject__3_2479 *pcVar1;
  cXObject__3_2479__vtable *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ESim *pEVar7;
  float fVar8;
  
                    /* end of inlined section */
  *(undefined4 *)&this->m_HoldTransferredTrack = 1;
  this->m_BlendSkillTrackNum = this->m_SkillBlendTrackNum;
  cleanupParticles__10SAnimator2(this);
  if (this->m_SkillTrackNum == 0) {
    return;
  }
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
  puVar3 = Find__C13ERedBlackTreeUiPUi
                     (&(this->m_pSim->field0_0x0).m_AC.m_tracks.field0_0x0,this->m_SkillTrackNum,
                      (uint *)0x0);
                    /* end of inlined section */
  if (puVar3 == (undefined1 *)0x0) {
    return;
  }
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
  puVar3 = Find__C13ERedBlackTreeUiPUi
                     (&(this->m_pSim->field0_0x0).m_AC.m_tracks.field0_0x0,
                      this->m_BlendSkillTrackNum,(uint *)0x0);
                    /* end of inlined section */
  pEVar7 = this->m_pSim;
  if (puVar3 != (undefined1 *)0x0) {
    StopTrack__15EAnimControlleri(&(pEVar7->field0_0x0).m_AC,this->m_BlendSkillTrackNum);
    pEVar7 = this->m_pSim;
  }
  TransferTrack__15EAnimControllerii
            (&(pEVar7->field0_0x0).m_AC,this->m_SkillTrackNum,this->m_BlendSkillTrackNum);
  this->m_CurrentAnimationId = 0;
  this->m_BlendAccumulator = 0.0;
  this->m_BlendTime = 0.1;
  fVar8 = getPersonDirection__10SAnimator2(this);
  this->m_Dir = fVar8;
  pcVar1 = this->m_pPerson->_vb2479;
  pcVar2 = pcVar1->__vtable;
  iVar4 = (*(code *)pcVar2->ReconType)
                    ((int)&pcVar1->_vb2830 + (int)*(short *)&pcVar2->ReconStream,1);
  iVar5 = getPersonX__10SAnimator2(this);
  iVar6 = getPersonY__10SAnimator2(this);
  if (iVar4 == this->m_LastIntDir) {
    if (iVar5 == this->m_LastPosX) {
      if (iVar6 == this->m_LastPosY) {
        this->m_LastPosY = iVar6;
        goto LAB_001c5248;
      }
      pEVar7 = this->m_pSim;
    }
    else {
      pEVar7 = this->m_pSim;
    }
  }
  else {
    pEVar7 = this->m_pSim;
  }
  StopTrack__15EAnimControlleri(&(pEVar7->field0_0x0).m_AC,this->m_BlendSkillTrackNum);
  this->m_BlendTime = 0.0;
  *(undefined4 *)&this->m_HoldTransferredTrack = 0;
  this->m_LastPosY = iVar6;
LAB_001c5248:
  this->m_LastIntDir = iVar4;
  this->m_LastPosX = iVar5;
  return;
}

float SAnimator2::getPersonDirection() {
	float TempDir;
	float deg;
	
  cXObject__3_2479 *pcVar1;
  cXObject__3_2479__vtable *pcVar2;
  int iVar3;
  float fVar4;
  
  pcVar1 = this->m_pPerson->_vb2479;
  pcVar2 = pcVar1->__vtable;
  iVar3 = (*(code *)pcVar2->ReconType)
                    ((int)&pcVar1->_vb2830 + (int)*(short *)&pcVar2->ReconStream,1);
                    /* inlined from /eor/src2/common/e_standard_macros.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/e_standard_macros.h */
                    /* end of inlined section */
  fVar4 = -(((float)iVar3 - 2.0) * 45.0 * 0.01745329);
  if (fVar4 < 3.141593) {
    fVar4 = fVar4 + 6.283185;
  }
  if (3.141593 < fVar4) {
    fVar4 = fVar4 - 6.283185;
  }
  return fVar4;
}

void SAnimator2::setPersonDirection(float dir) {
	float TempF;
	int TempDir;
	
  cXObject__3_2479 *pcVar1;
  cXObject__3_2479__vtable *pcVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  float fVar7;
  
                    /* inlined from /eor/src2/common/e_standard_macros.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/e_standard_macros.h */
                    /* end of inlined section */
  fVar7 = floorf((-dir * 57.29578 + 22.5) * 0.02222222);
  iVar6 = (int)fVar7 + 2;
  if (8 < iVar6) {
    iVar6 = (int)fVar7 + -6;
  }
  if (iVar6 < 0) {
    iVar4 = -iVar6;
    iVar3 = iVar4 + 7;
    if (iVar6 < 1) {
      iVar3 = iVar4;
    }
    iVar6 = 8 - (iVar4 + (iVar3 >> 3) * -8);
    if (iVar6 == 8) {
      iVar6 = 0;
    }
    sVar5 = (short)iVar6;
  }
  else {
    iVar4 = iVar6 + 7;
    if (-1 < iVar6) {
      iVar4 = iVar6;
    }
    sVar5 = (short)iVar6 + (short)(iVar4 >> 3) * -8;
  }
  pcVar1 = this->m_pPerson->_vb2479;
  pcVar2 = pcVar1->__vtable;
  (*(code *)pcVar2->GetObstacleAtLocation)
            ((int)&pcVar1->_vb2830 + (int)*(short *)&pcVar2->GetRelMatrix,1,sVar5);
  return;
}

void SAnimator2::updateMovementAnimations() {
  return;
}

void SAnimator2::updateCarryAnimation() {
	int desiredAnim;
	SkillNameID skill;
	char s[128];
	
  cXPerson__3_1554__vtable *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 unaff_s0;
  int iVar5;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  char s [128];
  AnimRef *skill;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  if (this->m_CarryState != 6) {
    iVar5 = -1;
    if (*(int *)&this->m_CarryOverride == 0) {
      pcVar1 = this->m_pPerson->__vtable;
      lVar4 = (*(code *)pcVar1->LogEvent)
                        ((int)&this->m_pPerson->_vb2479 + (int)*(short *)&pcVar1->TickRecording);
      if (lVar4 == 0) {
        this->m_CarryState = 0;
      }
      else {
        this->m_CarryState = 1;
      }
      iVar2 = this->m_CarryState;
      iVar5 = -1;
      if (((iVar2 != 0) && (-1 < iVar2)) && (iVar2 < 6)) {
        iVar5 = 0;
      }
    }
    if (iVar5 != this->m_CarryAnim) {
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
      puVar3 = Find__C13ERedBlackTreeUiPUi
                         (&(this->m_pSim->field0_0x0).m_AC.m_tracks.field0_0x0,this->m_CarryTrackNum
                          ,(uint *)0x0);
                    /* end of inlined section */
      if (puVar3 != (undefined1 *)0x0) {
        StopTrack__15EAnimControlleri(&(this->m_pSim->field0_0x0).m_AC,this->m_CarryTrackNum);
      }
      if (iVar5 == -1) {
        this->m_CarryAnim = -1;
      }
      else if (iVar5 == 0) {
        GetStdAnimRef__FP8cXPerson10StdAnimIdxRPC7AnimRef
                  ((cXPerson__118_1094 *)this->m_pPerson,kAnimRightArmCarry,&skill);
        if ((_globals.Cheats._28_4_ != 0) || (__bShowAnimNames != 0)) {
          castSkillToString__FPC7AnimRef(skill);
          sprintf(s,"Carry: %s");
          addAnimationName__10SAnimator2Pc(this,s);
        }
        SetTrackAnim__15EAnimControlleriUi
                  (&(this->m_pSim->field0_0x0).m_AC,this->m_CarryTrackNum,skill->id);
        SetTrackSpeed__15EAnimControllerif
                  (&(this->m_pSim->field0_0x0).m_AC,this->m_CarryTrackNum,this->m_TimeMultiplier);
        SetTrackIntensity__15EAnimControllerif
                  (&(this->m_pSim->field0_0x0).m_AC,this->m_CarryTrackNum,1.0);
        lockCarryArmNodes__10SAnimator2(this);
        this->m_CarryAnim = 0;
      }
      else {
        this->m_CarryAnim = iVar5;
      }
    }
  }
  return;
}

void SAnimator2::lockHandsUpCarryNodes() {
	vector<float,__malloc_alloc_template<0> > *this;
	float *last;
	float *first;
	float *pointer;
	void *result;
	float *last;
	float *first;
	float *pointer;
	
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  vector_float___malloc_alloc_template_0___ *pvVar6;
  uint size;
  
                    /* inlined from ../MSrc/vector.h */
  pvVar6 = &this->m_FloatArray;
  uVar1 = (((this->m_pSim->field0_0x0).m_AC.m_pRCharacter.m_p)->m_nodes).field0_0x0.m_size;
  size = uVar1 * 4;
  pfVar2 = (this->m_FloatArray).start;
  for (pfVar5 = pfVar2; pfVar5 != (this->m_FloatArray).finish; pfVar5 = pfVar5 + 1) {
  }
  (this->m_FloatArray).finish = pfVar2;
  pfVar2 = (this->m_FloatArray).start;
  if ((uint)((int)(this->m_FloatArray).end_of_storage - (int)pfVar2 >> 2) < uVar1) {
    pfVar5 = (this->m_FloatArray).finish;
    iVar4 = (int)pfVar5 - (int)pfVar2;
    if (uVar1 == 0) {
      pfVar2 = (float *)0x0;
    }
    else {
      pfVar2 = (float *)malloc(size);
      if (pfVar2 == (float *)0x0) {
        pfVar2 = (float *)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
      }
      pfVar5 = (this->m_FloatArray).finish;
    }
    uninitialized_copy__H2ZPfZPf_X01X01X11_X11(pvVar6->start,pfVar5,pfVar2);
    pfVar5 = (this->m_FloatArray).finish;
    pfVar3 = pvVar6->start;
    if (pfVar3 == pfVar5) {
      pfVar5 = pvVar6->start;
    }
    else {
      do {
        pfVar3 = pfVar3 + 1;
      } while (pfVar3 != pfVar5);
      pfVar5 = pvVar6->start;
    }
    if ((pfVar5 != (float *)0x0) &&
       ((int)(this->m_FloatArray).end_of_storage - (int)pfVar5 >> 2 != 0)) {
      free(pfVar5);
    }
    (this->m_FloatArray).end_of_storage = pfVar2 + uVar1;
    (this->m_FloatArray).finish = pfVar2 + (iVar4 >> 2);
    pvVar6->start = pfVar2;
                    /* end of inlined section */
    pfVar2 = (this->m_FloatArray).start;
  }
  else {
    pfVar2 = (this->m_FloatArray).start;
  }
  memset(pfVar2,0,(long)(int)size);
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
  (this->m_FloatArray).start[0x1d] = 1.0;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
  (this->m_FloatArray).start[0x1e] = 1.0;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
  (this->m_FloatArray).start[0x1f] = 1.0;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
  (this->m_FloatArray).start[0x20] = 1.0;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
  (this->m_FloatArray).start[0x21] = 1.0;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
  (this->m_FloatArray).start[0x22] = 1.0;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
  (this->m_FloatArray).start[0x23] = 1.0;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
  (this->m_FloatArray).start[0x24] = 1.0;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
  (this->m_FloatArray).start[0x25] = 1.0;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
  (this->m_FloatArray).start[0x26] = 1.0;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
  (this->m_FloatArray).start[0x27] = 1.0;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
  (this->m_FloatArray).start[0x28] = 1.0;
  SetTrackBlendFactors__15EAnimControlleriPf
            (&(this->m_pSim->field0_0x0).m_AC,this->m_CarryTrackNum,(this->m_FloatArray).start);
  return;
}

void SAnimator2::lockCarryArmNodes() {
	vector<float,__malloc_alloc_template<0> > *this;
	float *last;
	float *first;
	float *pointer;
	void *result;
	float *last;
	float *first;
	float *pointer;
	
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  vector_float___malloc_alloc_template_0___ *pvVar6;
  uint size;
  
                    /* inlined from ../MSrc/vector.h */
  pvVar6 = &this->m_FloatArray;
  uVar1 = (((this->m_pSim->field0_0x0).m_AC.m_pRCharacter.m_p)->m_nodes).field0_0x0.m_size;
  size = uVar1 * 4;
  pfVar2 = (this->m_FloatArray).start;
  for (pfVar5 = pfVar2; pfVar5 != (this->m_FloatArray).finish; pfVar5 = pfVar5 + 1) {
  }
  (this->m_FloatArray).finish = pfVar2;
  pfVar2 = (this->m_FloatArray).start;
  if ((uint)((int)(this->m_FloatArray).end_of_storage - (int)pfVar2 >> 2) < uVar1) {
    pfVar5 = (this->m_FloatArray).finish;
    iVar4 = (int)pfVar5 - (int)pfVar2;
    if (uVar1 == 0) {
      pfVar2 = (float *)0x0;
    }
    else {
      pfVar2 = (float *)malloc(size);
      if (pfVar2 == (float *)0x0) {
        pfVar2 = (float *)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
      }
      pfVar5 = (this->m_FloatArray).finish;
    }
    uninitialized_copy__H2ZPfZPf_X01X01X11_X11(pvVar6->start,pfVar5,pfVar2);
    pfVar5 = (this->m_FloatArray).finish;
    pfVar3 = pvVar6->start;
    if (pfVar3 == pfVar5) {
      pfVar5 = pvVar6->start;
    }
    else {
      do {
        pfVar3 = pfVar3 + 1;
      } while (pfVar3 != pfVar5);
      pfVar5 = pvVar6->start;
    }
    if ((pfVar5 != (float *)0x0) &&
       ((int)(this->m_FloatArray).end_of_storage - (int)pfVar5 >> 2 != 0)) {
      free(pfVar5);
    }
    (this->m_FloatArray).end_of_storage = pfVar2 + uVar1;
    (this->m_FloatArray).finish = pfVar2 + (iVar4 >> 2);
    pvVar6->start = pfVar2;
                    /* end of inlined section */
    pfVar2 = (this->m_FloatArray).start;
  }
  else {
    pfVar2 = (this->m_FloatArray).start;
  }
  memset(pfVar2,0,(long)(int)size);
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
  (this->m_FloatArray).start[0x23] = 1.0;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
  (this->m_FloatArray).start[0x24] = 1.0;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
  (this->m_FloatArray).start[0x25] = 1.0;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
  (this->m_FloatArray).start[0x26] = 1.0;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
  (this->m_FloatArray).start[0x27] = 1.0;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
  (this->m_FloatArray).start[0x28] = 1.0;
  SetTrackBlendFactors__15EAnimControlleriPf
            (&(this->m_pSim->field0_0x0).m_AC,this->m_CarryTrackNum,(this->m_FloatArray).start);
  return;
}

void SAnimator2::updateRenderModels() {
	bool bCostumeChanged;
	
  cXPerson__3_1554__vtable *pcVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  char *rowname;
  
  pcVar1 = this->m_pPerson->__vtable;
  iVar3 = (*(code *)pcVar1->GetRecordDuration)
                    ((int)&this->m_pPerson->_vb2479 + (int)*(short *)&pcVar1->GetRecording,8);
  if (this->m_LastCostume == iVar3) {
    return;
  }
  pcVar1 = this->m_pPerson->__vtable;
  uVar4 = (*(code *)pcVar1->GetRecordDuration)
                    ((int)&this->m_pPerson->_vb2479 + (int)*(short *)&pcVar1->GetRecording,8);
  switch(uVar4) {
  case 0:
    bVar2 = wearNormal__10SAnimator2(this);
    goto LAB_001c5a70;
  case 1:
    rowname = "naked";
    break;
  case 2:
    rowname = "swimsuit";
    break;
  case 3:
    bVar2 = setJobModel__10SAnimator2(this);
    goto LAB_001c5a70;
  case 4:
    rowname = "formal";
    break;
  case 5:
    rowname = "sleep";
    break;
  case 6:
    bVar2 = setNewModel__10SAnimator2PCcb(this,"skeleton",true);
    goto LAB_001c5a70;
  case 7:
    rowname = "workout";
    break;
  default:
    bVar2 = wearNormal__10SAnimator2(this);
    goto LAB_001c5a70;
  }
  bVar2 = setNewModel__10SAnimator2PCcb(this,rowname,false);
LAB_001c5a70:
  if (bVar2 != false) {
    pcVar1 = this->m_pPerson->__vtable;
    iVar3 = (*(code *)pcVar1->GetRecordDuration)
                      ((int)&this->m_pPerson->_vb2479 + (int)*(short *)&pcVar1->GetRecording,8);
    this->m_LastCostume = iVar3;
  }
  return;
}

bool SAnimator2::setJobModel() {
	char *rowname;
	Career *c;
	
  short sVar1;
  Careers__vtable *pCVar2;
  cXPerson__3_1554__vtable *pcVar3;
  char *rowname;
  Careers *pCVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  
  pCVar4 = _5Globs_pCareers;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_pSim->m_bDontDrawHead = 0;
  *(undefined4 *)&this->m_pSim->m_bOverrideDefaultSkin = 0;
  pCVar2 = pCVar4->__vtable;
  pcVar3 = this->m_pPerson->__vtable;
  sVar1 = *(short *)&pCVar2->GetJobPerformance;
  uVar9 = (*(code *)pcVar3->GetRecordDuration)
                    ((int)&this->m_pPerson->_vb2479 + (int)*(short *)&pcVar3->GetRecording,0x38);
  iVar7 = (*(code *)pCVar2->GetJobGrade)((int)&pCVar4->__vtable + (int)sVar1,uVar9);
  pcVar3 = this->m_pPerson->__vtable;
  iVar8 = (*(code *)pcVar3->GetRecordDuration)
                    ((int)&this->m_pPerson->_vb2479 + (int)*(short *)&pcVar3->GetRecording,0x39);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  rowname = *(char **)(*(int *)(iVar7 + 4) + iVar8 * 0x6c + 100);
  if (rowname == (char *)0x0) {
    bVar5 = wearNormal__10SAnimator2(this);
    bVar6 = true;
    if (!bVar5) {
      bVar6 = false;
    }
  }
  else {
    bVar5 = setNewModel__10SAnimator2PCcb(this,rowname,false);
    bVar6 = false;
    if (bVar5) {
      bVar6 = true;
    }
  }
  return bVar6;
}

bool SAnimator2::wearNormal() {
  bool bVar1;
  
  bVar1 = removeCostume__10SAnimator2(this);
  if (bVar1) {
    this->m_pSim->m_QueuedModelIds[3] = this->m_pSim->m_OriginalModelIds[3];
    this->m_pSim->m_QueuedModelIds[4] = this->m_pSim->m_OriginalModelIds[4];
    this->m_pSim->m_QueuedModelIds[5] = this->m_pSim->m_OriginalModelIds[5];
    *(undefined4 *)&this->m_pSim->m_bSwitchOutfits = 1;
    CreateSkinAsync__4ESimPCQ23Sim7Costume(this->m_pSim,(Costume *)0x0);
    *(undefined4 *)&this->m_pSim->m_bDontDrawHead = 0;
    *(undefined4 *)&this->m_pSim->m_bOverrideDefaultSkin = 0;
  }
  return bVar1;
}

bool SAnimator2::setNewModel(char *rowname, bool Override) {
	ERQuickdata *ObjectData;
	ERQTable<Sim::CostumeSet> *pCostumeSetList;
	CostumeSet *CostumeSet;
	Costume *Costume;
	ESim *this;
	ERQuickdata *this;
	ERQuickdata *this;
	char *pRowName;
	ERQuickdata *this;
	ERQuickdata *this;
	CostumeSet *pData;
	
  uint uVar1;
  bool bVar2;
  bool bVar3;
  ERQuickdata *this_00;
  void *_pTable;
  Costume *pCVar4;
  Costume *InCostume;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/esim.h */
                    /* end of inlined section */
  if (0 < this->m_pSim->m_iQueueCount) {
    return false;
  }
  *(undefined4 *)&this->m_pSim->m_bDontDrawHead = 0;
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
  *(undefined4 *)&this->m_pSim->m_bOverrideDefaultSkin = 0;
  this_00 = (ERQuickdata *)
            AddRef__16EResourceManagerUiP5EFilei
                      (&_quickdataman.field0_0x0,0x2a2af469,(EFile *)0x0,0);
  _pTable = getTable__11ERQuickdataPCc(this_00,"Sim::CostumeSet");
  pCVar4 = (Costume *)getRow__11ERQuickdataPCvPCc(this_00,_pTable,rowname);
                    /* end of inlined section */
  if (pCVar4 == (Costume *)0x0) {
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
    pCVar4 = (Costume *)getRow__11ERQuickdataPCvPCc(this_00,_pTable,"naked");
  }
                    /* end of inlined section */
  bVar2 = IsMale__4ESim(this->m_pSim);
  if ((!bVar2) || (bVar3 = IsAdult__4ESim(this->m_pSim), InCostume = pCVar4, bVar3 != bVar2)) {
    bVar2 = IsMale__4ESim(this->m_pSim);
    if (!bVar2) {
      bVar2 = IsAdult__4ESim(this->m_pSim);
      InCostume = pCVar4 + 1;
      if (bVar2) goto LAB_001c5d44;
    }
    bVar2 = IsMale__4ESim(this->m_pSim);
    InCostume = pCVar4 + 3;
    if (bVar2) {
      bVar2 = IsAdult__4ESim(this->m_pSim);
      InCostume = pCVar4 + 3;
      if (!bVar2) {
        InCostume = pCVar4 + 2;
      }
    }
  }
LAB_001c5d44:
  if ((((InCostume->upperBody).model == 0) && ((InCostume->lowerBody).model == 0)) &&
     ((InCostume->shoe).model == 0)) {
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
    pCVar4 = (Costume *)getRow__11ERQuickdataPCvPCc(this_00,_pTable,"naked");
                    /* end of inlined section */
                    /* end of inlined section */
    bVar2 = IsMale__4ESim(this->m_pSim);
    if ((!bVar2) || (bVar3 = IsAdult__4ESim(this->m_pSim), InCostume = pCVar4, bVar3 != bVar2)) {
      bVar2 = IsMale__4ESim(this->m_pSim);
      if (!bVar2) {
        bVar2 = IsAdult__4ESim(this->m_pSim);
        InCostume = pCVar4 + 1;
        if (bVar2) goto LAB_001c5df4;
      }
      bVar2 = IsMale__4ESim(this->m_pSim);
      InCostume = pCVar4 + 3;
      if (bVar2) {
        bVar2 = IsAdult__4ESim(this->m_pSim);
        InCostume = pCVar4 + 3;
        if (!bVar2) {
          InCostume = pCVar4 + 2;
        }
      }
    }
  }
LAB_001c5df4:
  DelRef__16EResourceManagerP9EResource(&_quickdataman.field0_0x0,(EResource *)this_00);
  removeCostume__10SAnimator2(this);
  uVar1 = (InCostume->upperBody).model;
  if (uVar1 == 0) {
    this->m_pSim->m_QueuedModelIds[3] = 0;
  }
  else {
    this->m_pSim->m_QueuedModelIds[3] = uVar1;
  }
  uVar1 = (InCostume->lowerBody).model;
  if (uVar1 == 0) {
    this->m_pSim->m_QueuedModelIds[4] = 0;
  }
  else {
    this->m_pSim->m_QueuedModelIds[4] = uVar1;
  }
  uVar1 = (InCostume->shoe).model;
  if (uVar1 == 0) {
    this->m_pSim->m_QueuedModelIds[5] = 0;
  }
  else {
    this->m_pSim->m_QueuedModelIds[5] = uVar1;
  }
  *(undefined4 *)&this->m_pSim->m_bSwitchOutfits = 1;
  if (Override) {
    *(undefined4 *)&this->m_pSim->m_bDontDrawHead = 1;
    *(undefined4 *)&this->m_pSim->m_bOverrideDefaultSkin = 1;
  }
  else {
    CreateSkinAsync__4ESimPCQ23Sim7Costume(this->m_pSim,InCostume);
  }
  return true;
}

bool SAnimator2::removeCostume() {
  return true;
}

void SAnimator2::GetCarryHandPosAndDir(EVec3 &Pos, EVec3 &Dir) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  ulong in_v0;
  ulong uVar6;
  
  puVar1 = (undefined *)((int)&(this->m_CarryPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_CarryPos & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->m_CarryPos - uVar3) >> uVar3 * 8;
  fVar4 = (this->m_CarryPos).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&Pos->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)Pos & 7;
  *(ulong *)((int)Pos - uVar2) =
       uVar6 << uVar2 * 8 | *(ulong *)((int)Pos - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (Pos->field0_0x0).d[2] = fVar4;
  puVar1 = (undefined *)((int)&(this->m_CarryDir).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_CarryDir & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar6 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->m_CarryDir - uVar3) >> uVar3 * 8;
  fVar4 = (this->m_CarryDir).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&Dir->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)Dir & 7;
  *(ulong *)((int)Dir - uVar2) =
       uVar6 << uVar2 * 8 | *(ulong *)((int)Dir - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (Dir->field0_0x0).d[2] = fVar4;
  return;
}

void SAnimator2::GetBonePos(BoneNums Bone, EVec3 &Pos) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  ulong uVar6;
  
  if (Bone == kHeadBone) {
    puVar1 = (undefined *)((int)&(this->m_HeadPos).field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)&this->m_HeadPos & 7;
    uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
            (ulong)((int)Bone < 0x12) & 0xffffffffffffffffU >> (uVar2 + 1) * 8) &
            -1L << (8 - uVar3) * 8 | *(ulong *)((int)&this->m_HeadPos - uVar3) >> uVar3 * 8;
    fVar4 = (this->m_HeadPos).field0_0x0.d[2];
    puVar1 = (undefined *)((int)&Pos->field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar2);
    *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
    uVar2 = (uint)Pos & 7;
    *(ulong *)((int)Pos - uVar2) =
         uVar6 << uVar2 * 8 | *(ulong *)((int)Pos - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    (Pos->field0_0x0).d[2] = fVar4;
    return;
  }
  if ((ulong)((int)Bone < 0x12) != 0) {
    if (Bone != kPelvisBone) {
      return;
    }
    puVar1 = (undefined *)((int)&(this->m_PelvisPos).field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)&this->m_PelvisPos & 7;
    uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
            0xffffffffffffffffU >> (uVar2 + 1) * 8 & 1) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)&this->m_PelvisPos - uVar3) >> uVar3 * 8;
    fVar4 = (this->m_PelvisPos).field0_0x0.d[2];
    puVar1 = (undefined *)((int)&Pos->field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar2);
    *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
    uVar2 = (uint)Pos & 7;
    *(ulong *)((int)Pos - uVar2) =
         uVar6 << uVar2 * 8 | *(ulong *)((int)Pos - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    (Pos->field0_0x0).d[2] = fVar4;
    return;
  }
  if (Bone != kRightHandBone) {
    return;
  }
  puVar1 = (undefined *)((int)&(this->m_CarryPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_CarryPos & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          0xffffffffffffffffU >> (uVar2 + 1) * 8 & 0x27) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->m_CarryPos - uVar3) >> uVar3 * 8;
  fVar4 = (this->m_CarryPos).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&Pos->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)Pos & 7;
  *(ulong *)((int)Pos - uVar2) =
       uVar6 << uVar2 * 8 | *(ulong *)((int)Pos - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (Pos->field0_0x0).d[2] = fVar4;
  return;
}

void SAnimator2::DrawProps(ERC *prc, bool InWindow) {
	ESim *this;
	int i;
	unsigned int n;
	unsigned int n;
	
  EPropItem **ppEVar1;
  uint uVar2;
  int iVar3;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/esim.h */
                    /* end of inlined section */
  if (this->m_pSim->m_iQueueCount < 1) {
                    /* inlined from ../MSrc/vector.h */
    ppEVar1 = (this->m_PropItemArray).start;
                    /* end of inlined section */
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
    uVar2 = 0;
    if ((int)(this->m_PropItemArray).finish - (int)ppEVar1 >> 2 != 0) {
      iVar3 = 0;
      do {
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
        if ((InWindow) && (*(int *)&ppEVar1[uVar2]->DrawInWindow == 0)) {
          ppEVar1 = (this->m_PropItemArray).start;
        }
        else {
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
          Draw__7ERModelP3ERCUi
                    (*(ERModel **)(*(int *)((int)(this->m_PropItemArray).start + iVar3) + 8),prc,6);
                    /* inlined from ../MSrc/vector.h */
          ppEVar1 = (this->m_PropItemArray).start;
        }
                    /* end of inlined section */
        uVar2 = uVar2 + 1;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
        iVar3 = iVar3 + 4;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
      } while (uVar2 < (uint)((int)(this->m_PropItemArray).finish - (int)ppEVar1 >> 2));
    }
    if ((_globals.Cheats._28_4_ != 0) || (__bShowAnimNames != 0)) {
      drawLastAnimationNames__10SAnimator2P3ERC(this,prc);
    }
  }
  return;
}

void SAnimator2::removeAllProps() {
	int i;
	vector<EPropItem *,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<EPropItem *,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<EPropItem *,__malloc_alloc_template<0> > *this;
	EPropItem **last;
	EPropItem **first;
	EPropItem **pointer;
	
  EPropItem **ppEVar1;
  EPropItem **ppEVar2;
  int iVar3;
  uint uVar4;
  
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
  uVar4 = 0;
  if ((int)(this->m_PropItemArray).finish - (int)(this->m_PropItemArray).start >> 2 != 0) {
                    /* inlined from ../MSrc/vector.h */
    ppEVar1 = (this->m_PropItemArray).start;
    iVar3 = 0;
    do {
      uVar4 = uVar4 + 1;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
      DelRef__9EResource(*(EResource **)(*(int *)((int)ppEVar1 + iVar3) + 8));
                    /* inlined from ../MSrc/vector.h */
      _memmanFree__FPv(*(void **)((int)(this->m_PropItemArray).start + iVar3));
      ppEVar1 = (this->m_PropItemArray).start;
                    /* end of inlined section */
      iVar3 = uVar4 * 4;
    } while (uVar4 < (uint)((int)(this->m_PropItemArray).finish - (int)ppEVar1 >> 2));
  }
                    /* inlined from ../MSrc/vector.h */
  ppEVar1 = (this->m_PropItemArray).start;
  for (ppEVar2 = ppEVar1; ppEVar2 != (this->m_PropItemArray).finish; ppEVar2 = ppEVar2 + 1) {
  }
  (this->m_PropItemArray).finish = ppEVar1;
  return;
}

void SAnimator2::beginCensorParticles() {
	int censorship;
	EAnimParticleData data;
	EAnimParticleData data;
	EAnimParticleData data;
	
  cXPerson__3_1554__vtable *pcVar1;
  ulong uVar2;
  EAnimParticleData data;
  
                    /* end of inlined section */
  *(undefined4 *)&this->m_bInCensorship = 1;
  pcVar1 = this->m_pPerson->__vtable;
  uVar2 = (*(code *)pcVar1->GetRecordDuration)
                    ((int)&this->m_pPerson->_vb2479 + (int)*(short *)&pcVar1->GetRecording,0x1e);
  if (uVar2 == 0x80) {
    data.m_boneId = kNeck6;
    data.m_particleId = 0x31f09f93;
    data.z = 0.0;
    data.y = 0.0;
    data.x = 0.0;
    procBoneParticleEvt__10SAnimator2P17EAnimParticleData(this,&data);
    data.m_boneId = kL_Clavicle7;
    data.m_particleId = 0x31f09f93;
    data.z = 0.0;
    data.y = 0.0;
    data.x = 0.0;
    procBoneParticleEvt__10SAnimator2P17EAnimParticleData(this,&data);
    data.m_boneId = kPelvis1;
    data.m_particleId = 0x31f09f93;
    data.x = 0.0;
    data.z = 0.0;
    data.y = 0.0;
    procBoneParticleEvt__10SAnimator2P17EAnimParticleData(this,&data);
  }
  else {
    if ((uVar2 & 1) != 0) {
      data.m_boneId = kPelvis1;
      data.m_particleId = 0x31f09f93;
      data.x = 0.0;
      data.z = 0.0;
      data.y = 0.0;
      procBoneParticleEvt__10SAnimator2P17EAnimParticleData(this,&data);
    }
    if ((uVar2 & 2) != 0) {
      data.m_boneId = kL_Clavicle7;
      data.m_particleId = 0x31f09f93;
      data.x = 0.0;
      data.z = 0.0;
      data.y = 0.0;
      procBoneParticleEvt__10SAnimator2P17EAnimParticleData(this,&data);
    }
  }
  return;
}

void SAnimator2::endCensorParticles() {
	EBoneParticlePtrTree *pTree;
	EBoneParticle *pEffect;
	TRedBlackTree<unsigned int,TRedBlackTree<unsigned int,EBoneParticle *> *> *this;
	EBoneParticle *pEffect;
	EBoneParticle *pEffect;
	
  undefined1 *puVar1;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  TRedBlackTree_unsigned_int_EBoneParticle___ *pTree;
  EBoneParticle *local_2c;
  EBoneParticle *local_28;
  EBoneParticle *pEffect;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  pTree = (TRedBlackTree_unsigned_int_EBoneParticle___ *)0x0;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  *(undefined4 *)&this->m_bInCensorship = 0;
  puVar1 = Find__C13ERedBlackTreeUiPUi(&(this->m_activeParticles).field0_0x0,1,(uint *)&pTree);
                    /* end of inlined section */
  if (puVar1 != (undefined1 *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
    local_2c = (EBoneParticle *)0x0;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    puVar1 = Find__C13ERedBlackTreeUiPUi(&pTree->field0_0x0,0x31f09f93,(uint *)((uint)&pTree | 4));
                    /* end of inlined section */
    if (local_2c != (EBoneParticle *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      Remove__13ERedBlackTreeP17RBIteratorPtrType(&pTree->field0_0x0,puVar1);
                    /* end of inlined section */
      if (local_2c == (EBoneParticle *)0x0) {
        local_2c = (EBoneParticle *)0x0;
      }
      else {
        ___13EBoneParticle(local_2c,3);
        local_2c = (EBoneParticle *)0x0;
      }
    }
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  puVar1 = Find__C13ERedBlackTreeUiPUi(&(this->m_activeParticles).field0_0x0,0x1d,(uint *)&pTree);
                    /* end of inlined section */
  if (puVar1 != (undefined1 *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
    local_28 = (EBoneParticle *)0x0;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    puVar1 = Find__C13ERedBlackTreeUiPUi(&pTree->field0_0x0,0x31f09f93,(uint *)((uint)&pTree | 8));
                    /* end of inlined section */
    if (local_28 != (EBoneParticle *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      Remove__13ERedBlackTreeP17RBIteratorPtrType(&pTree->field0_0x0,puVar1);
                    /* end of inlined section */
      if (local_28 == (EBoneParticle *)0x0) {
        local_28 = (EBoneParticle *)0x0;
      }
      else {
        ___13EBoneParticle(local_28,3);
        local_28 = (EBoneParticle *)0x0;
      }
    }
  }
  puVar1 = Find__C13ERedBlackTreeUiPUi(&(this->m_activeParticles).field0_0x0,0x10,(uint *)&pTree);
                    /* end of inlined section */
  if (puVar1 != (undefined1 *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
    pEffect = (EBoneParticle *)0x0;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    puVar1 = Find__C13ERedBlackTreeUiPUi(&pTree->field0_0x0,0x31f09f93,(uint *)((uint)&pTree | 0xc))
    ;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
    if ((pEffect != (EBoneParticle *)0x0) &&
       (Remove__13ERedBlackTreeP17RBIteratorPtrType(&pTree->field0_0x0,puVar1),
       pEffect != (EBoneParticle *)0x0)) {
      ___13EBoneParticle(pEffect,3);
    }
  }
  return;
}

void SAnimator2::updateCensor() {
	int censorship;
	bool IncludeNode[41];
	float Len;
	EMat4 mOrient;
	EMat4 mOrient;
	EMat4 mOrient;
	
  cXPerson__3_1554__vtable *pcVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool IncludeNode [41];
  EMat4 mOrient;
  
  pcVar1 = this->m_pPerson->__vtable;
  uVar2 = (*(code *)pcVar1->GetRecordDuration)
                    ((int)&this->m_pPerson->_vb2479 + (int)*(short *)&pcVar1->GetRecording,0x1e);
  memset(IncludeNode,0,0xa4);
  *(undefined4 *)&this->m_DrawCensor = 0;
  *(undefined4 *)&this->m_pSim->m_bSimIsHidden = 0;
  if (uVar2 == 0x80) {
    IncludeNode._4_4_ = 1;
    IncludeNode._12_4_ = 1;
    IncludeNode._16_4_ = 1;
    IncludeNode._32_4_ = 1;
    IncludeNode._36_4_ = 1;
    IncludeNode._8_4_ = 1;
    GetOrient__13EIStaticModelR5EMat4((EIStaticModel *)this->m_pSim,&mOrient);
    CalcTightBoundBox__15EAnimControllerRC5EMat4R7EBound3Pb
              (&(this->m_pSim->field0_0x0).m_AC,&mOrient,&this->m_CensorBoundingBox,IncludeNode);
    *(undefined4 *)&this->m_DrawCensor = 1;
  }
  else {
    if ((uVar2 & 1) != 0) {
      *(undefined4 *)&this->m_DrawCensor = 1;
      IncludeNode._4_4_ = 1;
      IncludeNode._12_4_ = 1;
      IncludeNode._16_4_ = 1;
      IncludeNode._32_4_ = 1;
      IncludeNode._36_4_ = 1;
      IncludeNode._8_4_ = 1;
    }
    if ((uVar2 & 2) != 0) {
      *(undefined4 *)&this->m_DrawCensor = 1;
    }
    if (*(int *)&this->m_DrawCensor == 1) {
                    /* end of inlined section */
      GetOrient__13EIStaticModelR5EMat4((EIStaticModel *)this->m_pSim,&mOrient);
      CalcTightBoundBox__15EAnimControllerRC5EMat4R7EBound3Pb
                (&(this->m_pSim->field0_0x0).m_AC,&mOrient,&this->m_CensorBoundingBox,IncludeNode);
    }
  }
  if ((uVar2 & 4) != 0) {
    IncludeNode._4_4_ = 1;
    IncludeNode._12_4_ = 1;
    IncludeNode._16_4_ = 1;
    IncludeNode._32_4_ = 1;
    IncludeNode._36_4_ = 1;
    IncludeNode._8_4_ = 1;
    GetOrient__13EIStaticModelR5EMat4((EIStaticModel *)this->m_pSim,&mOrient);
    CalcTightBoundBox__15EAnimControllerRC5EMat4R7EBound3Pb
              (&(this->m_pSim->field0_0x0).m_AC,&mOrient,&this->m_CensorBoundingBox,IncludeNode);
    *(undefined4 *)&this->m_DrawCensor = 1;
  }
  if ((uVar2 & 8) != 0) {
    *(undefined4 *)&this->m_pSim->m_bSimIsHidden = 1;
  }
  fVar5 = (this->m_CensorBoundingBox).vMax.field0_0x0.d[0];
  fVar3 = (this->m_CensorBoundingBox).vMin.field0_0x0.d[0];
  fVar4 = fVar5 - fVar3;
  if (fVar4 < 0.0) {
    fVar4 = -fVar4;
  }
  if (fVar4 < 0.55) {
    fVar4 = (0.55 - fVar4) * 0.55;
    (this->m_CensorBoundingBox).vMin.field0_0x0.d[0] = fVar3 - fVar4;
    (this->m_CensorBoundingBox).vMax.field0_0x0.d[0] = fVar5 + fVar4;
    fVar3 = (this->m_CensorBoundingBox).vMax.field0_0x0.d[1];
  }
  else {
    fVar3 = (this->m_CensorBoundingBox).vMax.field0_0x0.d[1];
  }
  fVar4 = (this->m_CensorBoundingBox).vMin.field0_0x0.d[1];
  fVar5 = fVar3 - fVar4;
  if (fVar5 < 0.0) {
    fVar5 = -fVar5;
  }
  if (fVar5 < 0.55) {
    fVar5 = (0.55 - fVar5) * 0.55;
    (this->m_CensorBoundingBox).vMin.field0_0x0.d[1] = fVar4 - fVar5;
    (this->m_CensorBoundingBox).vMax.field0_0x0.d[1] = fVar3 + fVar5;
  }
  return;
}

void SAnimator2::DrawCensor(ERC *prc) {
	E3DWindow *pWin;
	EBound3 bbox;
	EVec3 Point;
	EVec3 Size;
	EVec3 Center;
	EVec3 LineToObject;
	EVec3 vDiagonal;
	EVec4 positions[2];
	float texCoords[4];
	unsigned char colors[8];
	u32 TempColor;
	signed char NormalS8[3];
	EVec3 Normal;
	float scaler;
	ESim *this;
	EVec3 *this;
	EVec3 &v;
	EMat4 *this;
	EVec3 *this;
	EMat4 *this;
	ERC *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	ERC *this;
	float y;
	
  undefined *puVar1;
  undefined *puVar2;
  cXPerson__3_1554__vtable *pcVar3;
  EGlobalManagerClient__vtable *pEVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  E3DWindow *pWin;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *__s;
  EMat4 *mOut;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulong in_t0;
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
  uint uVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  EBound3 bbox;
  EVec3 Point;
  EVec3 Size;
  EVec3 Center;
  EVec3 LineToObject;
  EVec3 vDiagonal;
  EVec4 positions [2];
  float texCoords [4];
  uchar colors [8];
  char NormalS8 [3];
  EVec3 Normal;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  ERShader **local_c0;
  EVec3 *local_bc;
  float *local_b8;
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
  
  pWin = _7EWindow_m_pCurrent3DWindow;
  local_60 = (int)unaff_s5;
  uStack_5c = (int)((ulong)unaff_s5 >> 0x20);
  local_a0 = (int)unaff_s1;
  uStack_9c = (int)((ulong)unaff_s1 >> 0x20);
  local_20 = (int)unaff_retaddr;
  uStack_1c = (int)((ulong)unaff_retaddr >> 0x20);
  local_30 = (int)unaff_s8;
  uStack_2c = (int)((ulong)unaff_s8 >> 0x20);
  local_40 = (int)unaff_s7;
  uStack_3c = (int)((ulong)unaff_s7 >> 0x20);
  local_50 = (int)unaff_s6;
  uStack_4c = (int)((ulong)unaff_s6 >> 0x20);
  local_70 = (int)unaff_s4;
  uStack_6c = (int)((ulong)unaff_s4 >> 0x20);
  local_80 = (int)unaff_s3;
  uStack_7c = (int)((ulong)unaff_s3 >> 0x20);
  local_90 = (int)unaff_s2;
  uStack_8c = (int)((ulong)unaff_s2 >> 0x20);
  local_b0 = (int)unaff_s0;
  uStack_ac = (int)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/ESRC/esim.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/window/e_window.h */
                    /* end of inlined section */
  if (((this->m_pSim->m_iQueueCount < 1) && (*(int *)&this->m_DrawCensor == 1)) &&
     (_7EWindow_m_pCurrent3DWindow != (E3DWindow *)0x0)) {
                    /* inlined from /eor/src2/common/math/e_bound3.h */
    Point.field0_0x0.d[2] = 0.0;
    Point.field0_0x0.d[1] = 0.0;
    Point.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar23 = (this->m_CensorBoundingBox).vMin.field0_0x0.d[0];
    puVar1 = (undefined *)((int)&bbox.vMax.field0_0x0 + 7);
    uVar10 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar10);
    *puVar5 = *puVar5 & -1L << (uVar10 + 1) * 8 | 0UL >> (7 - uVar10) * 8;
    uVar10 = (uint)&bbox.vMax & 7;
    puVar5 = (ulong *)((int)&bbox.vMax - uVar10);
    *puVar5 = 0L << uVar10 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
    bbox.vMax.field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&bbox.vMax.field0_0x0 + 7);
    uVar10 = (uint)puVar1 & 7;
    uVar19 = (uint)&bbox.vMax & 7;
    puVar2 = (undefined *)((int)&bbox.vMin.field0_0x0 + 7);
    uVar20 = (uint)puVar2 & 7;
    puVar5 = (ulong *)(puVar2 + -uVar20);
    *puVar5 = *puVar5 & -1L << (uVar20 + 1) * 8 |
              ((*(long *)(puVar1 + -uVar10) << (7 - uVar10) * 8 |
               in_t0 & 0xffffffffffffffffU >> (uVar10 + 1) * 8) & -1L << (8 - uVar19) * 8 |
              *(ulong *)((int)&bbox.vMax - uVar19) >> uVar19 * 8) >> (7 - uVar20) * 8;
    bbox.vMin.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    Point.field0_0x0.d[0] = fVar23;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    Point.field0_0x0.d[1] = (this->m_CensorBoundingBox).vMin.field0_0x0.d[1];
                    /* end of inlined section */
    Point.field0_0x0.d[0] = (this->m_CensorBoundingBox).vMax.field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    Point.field0_0x0.d[2] = (this->m_CensorBoundingBox).vMin.field0_0x0.d[2];
    bbox.vMin.field0_0x0.d[2] =
         fVar23 * (_7EWindow_m_pCurrent3DWindow->m_mLookAt).field0_0x0.d[2] +
         Point.field0_0x0.d[1] * (_7EWindow_m_pCurrent3DWindow->m_mLookAt).field0_0x0.d[1][2] +
         Point.field0_0x0.d[2] * (_7EWindow_m_pCurrent3DWindow->m_mLookAt).field0_0x0.d[2][2] +
         (_7EWindow_m_pCurrent3DWindow->m_mLookAt).field0_0x0.d[3][2];
                    /* end of inlined section */
    uVar8 = CONCAT44(fVar23 * (_7EWindow_m_pCurrent3DWindow->m_mLookAt).field0_0x0.d[1] +
                     Point.field0_0x0.d[1] *
                     (_7EWindow_m_pCurrent3DWindow->m_mLookAt).field0_0x0.d[1][1] +
                     Point.field0_0x0.d[2] *
                     (_7EWindow_m_pCurrent3DWindow->m_mLookAt).field0_0x0.d[2][1] +
                     (_7EWindow_m_pCurrent3DWindow->m_mLookAt).field0_0x0.d[3][1],
                     fVar23 * (_7EWindow_m_pCurrent3DWindow->m_mLookAt).field0_0x0.d[0] +
                     Point.field0_0x0.d[1] *
                     (_7EWindow_m_pCurrent3DWindow->m_mLookAt).field0_0x0.d[1][0] +
                     Point.field0_0x0.d[2] *
                     (_7EWindow_m_pCurrent3DWindow->m_mLookAt).field0_0x0.d[2][0] +
                     (_7EWindow_m_pCurrent3DWindow->m_mLookAt).field0_0x0.d[3][0]);
    puVar1 = (undefined *)((int)&bbox.vMax.field0_0x0 + 7);
    uVar10 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar10);
    *puVar5 = *puVar5 & -1L << (uVar10 + 1) * 8 | uVar8 >> (7 - uVar10) * 8;
    uVar10 = (uint)&bbox.vMax & 7;
    puVar5 = (ulong *)((int)&bbox.vMax - uVar10);
    *puVar5 = uVar8 << uVar10 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
    bbox.vMax.field0_0x0.d[2] = bbox.vMin.field0_0x0.d[2];
    puVar1 = (undefined *)((int)&bbox.vMax.field0_0x0 + 7);
    uVar10 = (uint)puVar1 & 7;
    uVar19 = (uint)&bbox.vMax & 7;
    bbox.vMin.field0_0x0._0_8_ =
         (*(long *)(puVar1 + -uVar10) << (7 - uVar10) * 8 |
         uVar8 & 0xffffffffffffffffU >> (uVar10 + 1) * 8) & -1L << (8 - uVar19) * 8 |
         *(ulong *)((int)&bbox.vMax - uVar19) >> uVar19 * 8;
    puVar1 = (undefined *)((int)&bbox.vMin.field0_0x0 + 7);
    uVar10 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar10);
    *puVar5 = *puVar5 & -1L << (uVar10 + 1) * 8 |
              (ulong)bbox.vMin.field0_0x0._0_8_ >> (7 - uVar10) * 8;
    adjustCensorBox__10SAnimator2R7EBound3RC5EVec3P9E3DWindow
              (this,&bbox,&Point,_7EWindow_m_pCurrent3DWindow);
    Point.field0_0x0.d[1] = (this->m_CensorBoundingBox).vMax.field0_0x0.d[1];
    adjustCensorBox__10SAnimator2R7EBound3RC5EVec3P9E3DWindow(this,&bbox,&Point,pWin);
    Point.field0_0x0.d[0] = (this->m_CensorBoundingBox).vMin.field0_0x0.d[0];
    adjustCensorBox__10SAnimator2R7EBound3RC5EVec3P9E3DWindow(this,&bbox,&Point,pWin);
    Point.field0_0x0.d[2] = (this->m_CensorBoundingBox).vMax.field0_0x0.d[2];
    Point.field0_0x0.d[1] = (this->m_CensorBoundingBox).vMin.field0_0x0.d[1];
    adjustCensorBox__10SAnimator2R7EBound3RC5EVec3P9E3DWindow(this,&bbox,&Point,pWin);
    Point.field0_0x0.d[0] = (this->m_CensorBoundingBox).vMax.field0_0x0.d[0];
    adjustCensorBox__10SAnimator2R7EBound3RC5EVec3P9E3DWindow(this,&bbox,&Point,pWin);
    Point.field0_0x0.d[1] = (this->m_CensorBoundingBox).vMax.field0_0x0.d[1];
    adjustCensorBox__10SAnimator2R7EBound3RC5EVec3P9E3DWindow(this,&bbox,&Point,pWin);
    Point.field0_0x0.d[0] = (this->m_CensorBoundingBox).vMin.field0_0x0.d[0];
    adjustCensorBox__10SAnimator2R7EBound3RC5EVec3P9E3DWindow(this,&bbox,&Point,pWin);
    Size.field0_0x0.d[0] = (bbox.vMin.field0_0x0.d[0] - bbox.vMax.field0_0x0.d[0]) * 0.5;
    if (Size.field0_0x0.d[0] < 0.0) {
      Size.field0_0x0.d[0] = -Size.field0_0x0.d[0];
    }
    Size.field0_0x0.d[1] = (bbox.vMin.field0_0x0.d[1] - bbox.vMax.field0_0x0.d[1]) * 0.5;
    if (Size.field0_0x0.d[1] < 0.0) {
      Size.field0_0x0.d[1] = -Size.field0_0x0.d[1];
    }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_f8 = ((this->m_CensorBoundingBox).vMax.field0_0x0.d[2] +
               (this->m_CensorBoundingBox).vMin.field0_0x0.d[2]) * 0.5;
    local_fc = ((this->m_CensorBoundingBox).vMax.field0_0x0.d[1] +
               (this->m_CensorBoundingBox).vMin.field0_0x0.d[1]) * 0.5;
    local_100 = ((this->m_CensorBoundingBox).vMax.field0_0x0.d[0] +
                (this->m_CensorBoundingBox).vMin.field0_0x0.d[0]) * 0.5;
    LineToObject.field0_0x0.d[0] = local_100 - (pWin->m_mLookAtPos).field0_0x0.d[3][0];
    LineToObject.field0_0x0.d[1] = local_fc - (pWin->m_mLookAtPos).field0_0x0.d[3][1];
    LineToObject.field0_0x0.d[2] = local_f8 - (pWin->m_mLookAtPos).field0_0x0.d[3][2];
    fVar23 = sqrtf(LineToObject.field0_0x0.d[0] * LineToObject.field0_0x0.d[0] +
                   LineToObject.field0_0x0.d[1] * LineToObject.field0_0x0.d[1] +
                   LineToObject.field0_0x0.d[2] * LineToObject.field0_0x0.d[2]);
    if (fVar23 != 0.0) {
      fVar23 = 1.0 / fVar23;
      LineToObject.field0_0x0.d[0] = LineToObject.field0_0x0.d[0] * fVar23;
      LineToObject.field0_0x0.d[2] = LineToObject.field0_0x0.d[2] * fVar23;
      LineToObject.field0_0x0.d[1] = LineToObject.field0_0x0.d[1] * fVar23;
    }
                    /* end of inlined section */
    local_b8 = &local_d0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    local_c0 = this->m_pPixelizationShader;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    local_bc = (EVec3 *)&local_110;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_100 = local_100 - LineToObject.field0_0x0.d[0] * 0.75;
    local_fc = local_fc - LineToObject.field0_0x0.d[1] * 0.75;
    local_f8 = local_f8 - LineToObject.field0_0x0.d[2] * 0.75;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    for (iVar13 = 0; iVar13 != -1; iVar13 = iVar13 + -1) {
    }
                    /* end of inlined section */
    pcVar3 = this->m_pPerson->__vtable;
    iVar13 = (*(code *)pcVar3->GetRecordTicksElapsed)
                       ((int)&this->m_pPerson->_vb2479 + (int)*(short *)&pcVar3->GetRecordCurTicks);
    uVar10 = GetRGBFromSkinColor__4ESimUc(this->m_pSim,*(uchar *)(iVar13 + 0x10));
    uVar19 = (uint)((float)(uVar10 & 0xff) * 0.5);
    uVar20 = (uint)((float)(uVar10 >> 8 & 0xff) * 0.5);
    uVar10 = (uint)((float)(uVar10 >> 0x10 & 0xff) * 0.5);
    Normal.field0_0x0.d[0] = (pWin->m_mLookAtPos).field0_0x0.d[2][1];
    Normal.field0_0x0.d[1] = (pWin->m_mLookAtPos).field0_0x0.d[2][2];
    Normal.field0_0x0.d[2] = (pWin->m_mLookAtPos).field0_0x0.d[2][3];
    ToS8s__C5EVec3PSc(&Normal,NormalS8);
                    /* inlined from /eor/src2/engine/e_dl.h */
    __s = (undefined8 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,400,0x10);
                    /* end of inlined section */
    memset(__s,0,400);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    fVar24 = (pWin->m_mLookAtPos).field0_0x0.d[1];
    fVar21 = (pWin->m_mLookAtPos).field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar23 = (pWin->m_mLookAtPos).field0_0x0.d[1][1];
    fVar22 = (pWin->m_mLookAtPos).field0_0x0.d[1][2];
    *(float *)__s =
         (local_100 - (pWin->m_mLookAtPos).field0_0x0.d[0] * Size.field0_0x0.d[0]) +
         (pWin->m_mLookAtPos).field0_0x0.d[1][0] * Size.field0_0x0.d[1];
    *(float *)((int)__s + 4) =
         (local_fc - fVar24 * Size.field0_0x0.d[0]) + fVar23 * Size.field0_0x0.d[1];
    *(float *)(__s + 1) = (local_f8 - fVar21 * Size.field0_0x0.d[0]) + fVar22 * Size.field0_0x0.d[1]
    ;
                    /* end of inlined section */
    *(int *)(__s + 2) = (int)NormalS8[0];
    *(int *)((int)__s + 0x14) = (int)NormalS8[1];
    *(undefined4 *)(__s + 4) = 0;
    *(int *)(__s + 3) = (int)NormalS8[2];
    *(undefined4 *)((int)__s + 0x24) = 0x3f800000;
    *(uint *)(__s + 6) = uVar10 & 0xff;
    *(uint *)((int)__s + 0x34) = uVar20 & 0xff;
    *(uint *)(__s + 7) = uVar19 & 0xff;
    *(undefined4 *)((int)__s + 0x3c) = 0xff;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    fVar22 = (pWin->m_mLookAtPos).field0_0x0.d[1];
    fVar24 = (pWin->m_mLookAtPos).field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_d0 = (pWin->m_mLookAtPos).field0_0x0.d[1][0] * Size.field0_0x0.d[1];
    local_cc = (pWin->m_mLookAtPos).field0_0x0.d[1][1] * Size.field0_0x0.d[1];
    local_c8 = (pWin->m_mLookAtPos).field0_0x0.d[1][2] * Size.field0_0x0.d[1];
    local_c4 = (pWin->m_mLookAtPos).field0_0x0.d[1][3] * Size.field0_0x0.d[1];
    fVar21 = local_b8[2];
    fVar23 = local_b8[1];
    *(float *)(__s + 10) =
         local_100 + (pWin->m_mLookAtPos).field0_0x0.d[0] * Size.field0_0x0.d[0] + local_d0;
    *(float *)((int)__s + 0x54) = local_fc + fVar22 * Size.field0_0x0.d[0] + fVar23;
    *(float *)(__s + 0xb) = local_f8 + fVar24 * Size.field0_0x0.d[0] + fVar21;
                    /* end of inlined section */
    *(undefined4 *)(__s + 0xe) = 0x3f800000;
    *(undefined4 *)(__s + 0xc) = *(undefined4 *)(__s + 2);
    *(undefined4 *)(__s + 0xd) = *(undefined4 *)(__s + 3);
    *(undefined4 *)((int)__s + 100) = *(undefined4 *)((int)__s + 0x14);
    *(undefined4 *)((int)__s + 0x74) = 0x3f800000;
    *(uint *)(__s + 0x10) = uVar10 & 0xff;
    *(uint *)((int)__s + 0x84) = uVar20 & 0xff;
    *(uint *)(__s + 0x11) = uVar19 & 0xff;
    *(undefined4 *)((int)__s + 0x8c) = 0xff;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    fVar21 = (pWin->m_mLookAtPos).field0_0x0.d[1];
    fVar24 = (pWin->m_mLookAtPos).field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    fVar23 = (pWin->m_mLookAtPos).field0_0x0.d[1][1];
    fVar22 = (pWin->m_mLookAtPos).field0_0x0.d[1][2];
    *(float *)(__s + 0x14) =
         (local_100 + (pWin->m_mLookAtPos).field0_0x0.d[0] * Size.field0_0x0.d[0]) -
         (pWin->m_mLookAtPos).field0_0x0.d[1][0] * Size.field0_0x0.d[1];
    *(float *)((int)__s + 0xa4) =
         (local_fc + fVar21 * Size.field0_0x0.d[0]) - fVar23 * Size.field0_0x0.d[1];
    *(float *)(__s + 0x15) =
         (local_f8 + fVar24 * Size.field0_0x0.d[0]) - fVar22 * Size.field0_0x0.d[1];
                    /* end of inlined section */
    *(undefined4 *)(__s + 0x18) = 0x3f800000;
    *(undefined4 *)(__s + 0x16) = *(undefined4 *)(__s + 2);
    *(undefined4 *)(__s + 0x17) = *(undefined4 *)(__s + 3);
    *(undefined4 *)((int)__s + 0xb4) = *(undefined4 *)((int)__s + 0x14);
    *(undefined4 *)((int)__s + 0xc4) = 0;
    *(uint *)(__s + 0x1a) = uVar10 & 0xff;
    *(uint *)((int)__s + 0xd4) = uVar20 & 0xff;
    *(uint *)(__s + 0x1b) = uVar19 & 0xff;
    *(undefined4 *)((int)__s + 0xdc) = 0xff;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_f0 = (pWin->m_mLookAtPos).field0_0x0.d[0] * Size.field0_0x0.d[0];
    local_e4 = (pWin->m_mLookAtPos).field0_0x0.d[3] * Size.field0_0x0.d[0];
    local_ec = (pWin->m_mLookAtPos).field0_0x0.d[1] * Size.field0_0x0.d[0];
    local_e8 = (pWin->m_mLookAtPos).field0_0x0.d[2] * Size.field0_0x0.d[0];
    local_100 = local_100 - local_f0;
    local_f8 = local_f8 - local_e8;
    local_fc = local_fc - local_ec;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_d4 = (pWin->m_mLookAtPos).field0_0x0.d[1][3] * Size.field0_0x0.d[1];
    local_e0 = (pWin->m_mLookAtPos).field0_0x0.d[1][0] * Size.field0_0x0.d[1];
    local_dc = (pWin->m_mLookAtPos).field0_0x0.d[1][1] * Size.field0_0x0.d[1];
    local_d8 = (pWin->m_mLookAtPos).field0_0x0.d[1][2] * Size.field0_0x0.d[1];
    local_110 = local_100 - local_e0;
    local_108 = local_f8 - local_d8;
    local_10c = local_fc - local_dc;
    *(float *)(__s + 0x1e) = local_110;
    *(float *)((int)__s + 0xf4) = local_10c;
    *(float *)(__s + 0x1f) = local_108;
                    /* end of inlined section */
    *(undefined4 *)(__s + 0x22) = 0;
    *(undefined4 *)(__s + 0x20) = *(undefined4 *)(__s + 2);
    *(undefined4 *)((int)__s + 0x104) = *(undefined4 *)((int)__s + 0x14);
    *(undefined4 *)(__s + 0x21) = *(undefined4 *)(__s + 3);
    *(undefined4 *)((int)__s + 0x114) = 0;
    *(uint *)(__s + 0x24) = uVar10 & 0xff;
    *(uint *)((int)__s + 0x124) = uVar20 & 0xff;
    *(uint *)(__s + 0x25) = uVar19 & 0xff;
    *(undefined4 *)((int)__s + 300) = 0xff;
    puVar9 = __s + 0x28;
    puVar17 = __s;
    do {
      puVar16 = puVar17;
      puVar18 = puVar9;
      uVar6 = *puVar16;
      uVar11 = *(undefined4 *)(puVar16 + 1);
      uVar12 = *(undefined4 *)((int)puVar16 + 0xc);
      uVar7 = puVar16[2];
      uVar14 = *(undefined4 *)(puVar16 + 3);
      uVar15 = *(undefined4 *)((int)puVar16 + 0x1c);
      *(int *)puVar18 = (int)uVar6;
      *(int *)((int)puVar18 + 4) = (int)((ulong)uVar6 >> 0x20);
      *(undefined4 *)(puVar18 + 1) = uVar11;
      *(undefined4 *)((int)puVar18 + 0xc) = uVar12;
      *(int *)(puVar18 + 2) = (int)uVar7;
      *(int *)((int)puVar18 + 0x14) = (int)((ulong)uVar7 >> 0x20);
      *(undefined4 *)(puVar18 + 3) = uVar14;
      *(undefined4 *)((int)puVar18 + 0x1c) = uVar15;
      puVar17 = puVar16 + 4;
      puVar9 = puVar18 + 4;
    } while (puVar17 != __s + 8);
    uVar6 = *puVar17;
    uVar11 = *(undefined4 *)(puVar16 + 5);
    uVar12 = *(undefined4 *)((int)puVar16 + 0x2c);
    *(int *)(puVar18 + 4) = (int)uVar6;
    *(int *)((int)puVar18 + 0x24) = (int)((ulong)uVar6 >> 0x20);
    *(undefined4 *)(puVar18 + 5) = uVar11;
    *(undefined4 *)((int)puVar18 + 0x2c) = uVar12;
    iVar13 = rand();
    Select__8ERShaderP3ERCi(local_c0[iVar13 % 3],prc,0);
                    /* inlined from /eor/src2/engine/e_dl.h */
    mOut = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
    CalcTextureProjection__9E3DWindowR5EMat4(pWin,mOut);
    pEVar4 = (_pGfx->field0_0x0).__vtable;
    local_110 = (float)(*(code *)pEVar4[0xd].EGlobalManagerClient)
                                 ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar4 + 0xd)
                                 );
    local_110 = local_110 * 5.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_10c = 5.0;
                    /* end of inlined section */
    (local_bc->field0_0x0).d[2] = 1.0;
    PostScale__5EMat4RC5EVec3(mOut,local_bc);
    (*(code *)prc->__vtable->MovieFrame)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->ZClear,mOut,0,0,1,0);
    (*(code *)prc->__vtable[1].DisableGeometryModes)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].EnableGeometryModes,1,2,0,0);
    (*(code *)prc->__vtable->ZTest)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->RecalcMatrices);
    (*(code *)prc->__vtable->TriIndexed)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->TriStrip,__s,5);
  }
  return;
}

void SAnimator2::adjustCensorBox(EBound3 &bbox, EVec3 &Point, E3DWindow *pWin) {
	EVec3 TempVec;
	EMat4 *this;
	EVec3 &v;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  EVec3 TempVec;
  
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  fVar5 = (Point->field0_0x0).d[0];
  fVar6 = (Point->field0_0x0).d[1];
  fVar8 = (Point->field0_0x0).d[2];
                    /* end of inlined section */
  fVar9 = (bbox->vMin).field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  fVar4 = fVar5 * (pWin->m_mLookAt).field0_0x0.d[2] + fVar6 * (pWin->m_mLookAt).field0_0x0.d[1][2] +
          fVar8 * (pWin->m_mLookAt).field0_0x0.d[2][2] + (pWin->m_mLookAt).field0_0x0.d[3][2];
  fVar7 = fVar5 * (pWin->m_mLookAt).field0_0x0.d[0] + fVar6 * (pWin->m_mLookAt).field0_0x0.d[1][0] +
          fVar8 * (pWin->m_mLookAt).field0_0x0.d[2][0] + (pWin->m_mLookAt).field0_0x0.d[3][0];
  fVar5 = fVar5 * (pWin->m_mLookAt).field0_0x0.d[1] + fVar6 * (pWin->m_mLookAt).field0_0x0.d[1][1] +
          fVar8 * (pWin->m_mLookAt).field0_0x0.d[2][1] + (pWin->m_mLookAt).field0_0x0.d[3][1];
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&TempVec.field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | CONCAT44(fVar5,fVar7) >> (7 - uVar2) * 8;
  if (fVar7 < fVar9) {
    (bbox->vMin).field0_0x0.d[0] = fVar7;
  }
  if ((bbox->vMax).field0_0x0.d[0] < fVar7) {
    (bbox->vMax).field0_0x0.d[0] = fVar7;
  }
  if (fVar5 < (bbox->vMin).field0_0x0.d[1]) {
    (bbox->vMin).field0_0x0.d[1] = fVar5;
  }
  if ((bbox->vMax).field0_0x0.d[1] < fVar5) {
    (bbox->vMax).field0_0x0.d[1] = fVar5;
  }
  if (fVar4 < (bbox->vMin).field0_0x0.d[2]) {
    (bbox->vMin).field0_0x0.d[2] = fVar4;
  }
  if ((bbox->vMax).field0_0x0.d[2] < fVar4) {
    (bbox->vMax).field0_0x0.d[2] = fVar4;
  }
  return;
}

void SAnimator2::addAnimationName(char *Name) {
	int i;
	
  char (*__dest) [128];
  char (*__src) [128];
  int iVar1;
  
  iVar1 = 3;
  __src = this->m_AnimationName;
  __dest = this->m_AnimationName;
  do {
    __src = __src[1];
    strcpy((char *)__dest,(char *)__src);
    iVar1 = iVar1 + -1;
    __dest = __dest[1];
  } while (-1 < iVar1);
  strcpy((char *)this->m_AnimationName[4],Name);
  return;
}

void SAnimator2::drawLastAnimationNames(ERC *prc) {
	ERFont *pFont;
	EVec2 Pos;
	TreeSim *this;
	ERFont *this;
	int i;
	ERFont *this;
	ERC *prc;
	
  ERFont *this_00;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 unaff_s0;
  char (*szString) [128];
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  int iVar4;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  EVec2 Pos;
  undefined4 local_80;
  float local_7c;
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
  
  this_00 = _globals.m_pFont;
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* inlined from ../MSrc/TreeSim.h */
                    /* end of inlined section */
  if ((_globals._pSelectedSims[0] == (cXPerson__150_1300 *)0x0) ||
     (_globals._pSelectedSims[0]->_vb1187->_vb1121->m_pEoRPerson == this->m_pSim)) {
    szString = this->m_AnimationName;
    iVar4 = 0;
    SetSize__6ERFontffb(_globals.m_pFont,15.0,1.0,true);
    uVar3 = _WHITE.field0_0x0.d[3];
    uVar2 = _WHITE.field0_0x0.d[2];
    uVar1 = _WHITE.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    (this_00->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (this_00->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar1 >> 0x20);
    (this_00->m_vColor).field0_0x0.d[2] = uVar2;
    (this_00->m_vColor).field0_0x0.d[3] = uVar3;
    Select__6ERFontP3ERC(this_00,prc);
    (*(code *)prc->__vtable[1].DisableGeometryModes)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].EnableGeometryModes,0,2,0,0);
    Pos.field0_0x0.d[1] = 0.05;
    do {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      local_80 = 0x3d4ccccd;
      local_7c = Pos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this_00,prc,szString,false,(EVec2 *)&local_80,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
      iVar4 = iVar4 + 1;
      szString = szString[1];
      Pos.field0_0x0.d[1] = Pos.field0_0x0.d[1] + 0.05;
    } while (iVar4 < 5);
    (*(code *)prc->__vtable[1].DisableGeometryModes)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].EnableGeometryModes,1,2,0,0);
  }
  return;
}

FootSound SAnimator2::GetFootSound(int foot, CTilePt &pt) {
	FootSound sound;
	ObjectIterator i;
	CTilePt &location;
	FloorPattern floor;
	SOUND floorSound;
	unsigned int n;
	
  cXObject__15_2008__vtable *pcVar1;
  FloorTile **ppFVar2;
  SOUND SVar3;
  cXObject__15_2008 *pcVar4;
  ObjSelector *this;
  int iVar5;
  FloorTile *pFVar6;
  long lVar7;
  FootSound FVar8;
  ObjectIterator i;
  
                    /* inlined from ../MSrc/ObjectIterator.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/ObjectIterator.h */
                    /* end of inlined section */
  FVar8 = kOutdoors;
                    /* inlined from ../MSrc/ObjectIterator.h */
  init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType(&i,pt,kAll);
                    /* end of inlined section */
  if (i.fCurrent != (cXObject__15_2008 *)0x0) {
    do {
      pcVar4 = i.fCurrent;
      lVar7 = (*(code *)(i.fCurrent)->__vtable[1].IsRenderingRoot)
                        ((int)&(i.fCurrent)->_vb3534 +
                         (int)*(short *)&(i.fCurrent)->__vtable[1].GetRenderLayer);
      if (lVar7 == 0) {
        pcVar1 = pcVar4->__vtable;
        this = (ObjSelector *)
               (*(code *)pcVar1[1].SetLevel)
                         ((int)&pcVar4->_vb3534 + (int)*(short *)&pcVar1[1].GetTreeID);
        iVar5 = GetGUID__11ObjSelector(this);
        if (iVar5 == 99999999) {
          if (FVar8 < kRoach) {
            FVar8 = kRoach;
          }
        }
        else if (iVar5 < 100000000) {
          if (iVar5 == -0x5d255f74) {
LAB_001c7770:
            if (FVar8 < kFoliage) {
              FVar8 = kFoliage;
            }
          }
          else if (iVar5 < -0x5d255f73) {
            if (iVar5 == -0x691cc673) goto LAB_001c7770;
            if (iVar5 == -0x641fcf47) goto LAB_001c77a0;
          }
          else if (iVar5 == -0x409d09ad) {
LAB_001c777c:
            if (FVar8 < kTrash) {
              FVar8 = kTrash;
            }
          }
          else if (iVar5 == -0x3fd4bf96) goto LAB_001c7770;
        }
        else if (iVar5 == 0x63416ba1) {
          if (FVar8 < kAsh) {
            FVar8 = kAsh;
          }
        }
        else if (iVar5 < 0x63416ba2) {
          if ((iVar5 == 0x3e7470f6) || (iVar5 == 0x5c67fc8f)) {
LAB_001c77a0:
            if (FVar8 < kPuddle) {
              FVar8 = kPuddle;
            }
          }
        }
        else {
          if (iVar5 == 0x65274a4f) goto LAB_001c7770;
          if (iVar5 == 0x7f907075) goto LAB_001c777c;
        }
      }
      __pp__14ObjectIterator(&i);
                    /* inlined from ../MSrc/ObjectIterator.h */
                    /* end of inlined section */
    } while (i.fCurrent != (cXObject__15_2008 *)0x0);
  }
  if (FVar8 == kOutdoors) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    iVar5 = (*(code *)_5Globs_pFixedWorld->__vtable->GetVertexConfig)
                      ((int)&_5Globs_pFixedWorld->__vtable +
                       (int)*(short *)&_5Globs_pFixedWorld->__vtable->IsOutside,pt);
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
    ppFVar2 = ((_globals._pFloorSet)->field0_0x0).pData;
    if (ppFVar2 == (FloorTile **)0x0) {
      pFVar6 = (FloorTile *)0x0;
    }
    else {
      pFVar6 = ppFVar2[-1];
    }
                    /* end of inlined section */
    if (iVar5 < (int)pFVar6) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
      SVar3 = ((_globals._pFloorSet)->field0_0x0).pData[iVar5]->sound;
      if (SVar3 == MEDIUM) {
        FVar8 = kTile;
      }
      else if ((int)SVar3 < 2) {
        if (SVar3 == HARD) {
          FVar8 = kWood;
        }
      }
      else if (SVar3 == SOFT) {
        FVar8 = kCarpet;
      }
      else if (SVar3 == SQUISHY) {
        FVar8 = kOutdoors;
      }
    }
    else {
      FVar8 = ~kOutdoors;
    }
  }
  return FVar8;
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

EPropItem** EPropItem ** copy_backward<EPropItem **, EPropItem **>(EPropItem **first, EPropItem **last, EPropItem **result) {
  if (first != last) {
    do {
      last = last + -1;
      result = result + -1;
      *result = *last;
    } while (first != last);
  }
  return result;
}

EPropItem** EPropItem ** uninitialized_copy<EPropItem **, EPropItem **>(EPropItem **first, EPropItem **last, EPropItem **result) {
	EPropItem **p;
	EPropItem *&value;
	void *pAddress;
	
  EPropItem *pEVar1;
  EPropItem **ppEVar2;
  
  ppEVar2 = result;
  if (first != last) {
    do {
      pEVar1 = *first;
      first = first + 1;
      result = ppEVar2 + 1;
      *ppEVar2 = pEVar1;
      ppEVar2 = result;
    } while (first != last);
  }
  return result;
}

void vector<EPropItem *, __malloc_alloc_template<0> >::insert_aux(EPropItem **position, EPropItem *&x) {
	EPropItem *x_copy;
	vector<EPropItem *,__malloc_alloc_template<0> > *this;
	vector<EPropItem *,__malloc_alloc_template<0> > *this;
	vector<EPropItem *,__malloc_alloc_template<0> > *this;
	void *result;
	vector<EPropItem *,__malloc_alloc_template<0> > *this;
	vector<EPropItem *,__malloc_alloc_template<0> > *this;
	EPropItem **p;
	EPropItem *&value;
	void *pAddress;
	vector<EPropItem *,__malloc_alloc_template<0> > *this;
	vector<EPropItem *,__malloc_alloc_template<0> > *this;
	vector<EPropItem *,__malloc_alloc_template<0> > *this;
	vector<EPropItem *,__malloc_alloc_template<0> > *this;
	EPropItem **first;
	EPropItem **pointer;
	vector<EPropItem *,__malloc_alloc_template<0> > *this;
	
  EPropItem *pEVar1;
  uint size;
  EPropItem **ppEVar2;
  int iVar3;
  EPropItem **ppEVar4;
  int iVar5;
  
  ppEVar2 = this->finish;
  if (ppEVar2 == this->end_of_storage) {
    iVar5 = (int)ppEVar2 - (int)this->start >> 2;
    iVar3 = 1;
    if (iVar5 != 0) {
      iVar3 = iVar5 << 1;
    }
                    /* inlined from ../MSrc/alloc.h */
    size = iVar3 << 2;
    if (iVar3 == 0) {
      ppEVar2 = (EPropItem **)0x0;
      size = 0;
    }
    else {
      ppEVar2 = (EPropItem **)malloc(size);
      if (ppEVar2 == (EPropItem **)0x0) {
        ppEVar2 = (EPropItem **)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
      }
    }
                    /* end of inlined section */
                    /* end of inlined section */
    uninitialized_copy__H2ZPP9EPropItemZPP9EPropItem_X01X01X11_X11(this->start,position,ppEVar2);
                    /* inlined from ../MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/algobase.h */
    *(EPropItem **)((int)ppEVar2 + ((int)position - (int)this->start)) = *x;
                    /* end of inlined section */
    uninitialized_copy__H2ZPP9EPropItemZPP9EPropItem_X01X01X11_X11
              (position,this->finish,
               (EPropItem **)((int)ppEVar2 + (int)position + (4 - (int)this->start)));
                    /* inlined from ../MSrc/algobase.h */
    ppEVar4 = this->start;
    if (ppEVar4 == this->finish) {
      ppEVar4 = this->start;
    }
    else {
      do {
        ppEVar4 = ppEVar4 + 1;
      } while (ppEVar4 != this->finish);
                    /* end of inlined section */
      ppEVar4 = this->start;
    }
                    /* inlined from ../MSrc/alloc.h */
    if ((ppEVar4 != (EPropItem **)0x0) && ((int)this->end_of_storage - (int)ppEVar4 >> 2 != 0)) {
      free(ppEVar4);
                    /* end of inlined section */
    }
    ppEVar4 = ppEVar2 + iVar5;
    this->start = ppEVar2;
    this->end_of_storage = (EPropItem **)((int)ppEVar2 + size);
  }
  else {
                    /* inlined from ../MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/algobase.h */
    *ppEVar2 = ppEVar2[-1];
                    /* end of inlined section */
    pEVar1 = *x;
    copy_backward__H2ZPP9EPropItemZPP9EPropItem_X01X01X11_X11
              (position,this->finish + -1,this->finish);
    *position = pEVar1;
    ppEVar4 = this->finish;
  }
  this->finish = ppEVar4 + 1;
  return;
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

int* int * copy_backward<int *, int *>(int *first, int *last, int *result) {
  if (first != last) {
    do {
      last = last + -1;
      result = result + -1;
      *result = *last;
    } while (first != last);
  }
  return result;
}

int* int * uninitialized_copy<int *, int *>(int *first, int *last, int *result) {
	int *p;
	int &value;
	void *pAddress;
	
  int iVar1;
  int *piVar2;
  
  piVar2 = result;
  if (first != last) {
    do {
      iVar1 = *first;
      first = first + 1;
      result = piVar2 + 1;
      *piVar2 = iVar1;
      piVar2 = result;
    } while (first != last);
  }
  return result;
}

void vector<int, __malloc_alloc_template<0> >::insert_aux(int *position, int &x) {
	int x_copy;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	void *result;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	int *p;
	int &value;
	void *pAddress;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	int *first;
	int *pointer;
	vector<int,__malloc_alloc_template<0> > *this;
	
  uint size;
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar1 = this->finish;
  if (piVar1 == this->end_of_storage) {
    iVar4 = (int)piVar1 - (int)this->start >> 2;
    iVar2 = 1;
    if (iVar4 != 0) {
      iVar2 = iVar4 << 1;
    }
                    /* inlined from ../MSrc/alloc.h */
    size = iVar2 << 2;
    if (iVar2 == 0) {
      piVar1 = (int *)0x0;
      size = 0;
    }
    else {
      piVar1 = (int *)malloc(size);
      if (piVar1 == (int *)0x0) {
        piVar1 = (int *)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
      }
    }
                    /* end of inlined section */
                    /* end of inlined section */
    uninitialized_copy__H2ZPiZPi_X01X01X11_X11(this->start,position,piVar1);
                    /* inlined from ../MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/algobase.h */
    *(int *)((int)piVar1 + ((int)position - (int)this->start)) = *x;
                    /* end of inlined section */
    uninitialized_copy__H2ZPiZPi_X01X01X11_X11
              (position,this->finish,(int *)((int)piVar1 + (int)position + (4 - (int)this->start)));
                    /* inlined from ../MSrc/algobase.h */
    piVar3 = this->start;
    if (piVar3 == this->finish) {
      piVar3 = this->start;
    }
    else {
      do {
        piVar3 = piVar3 + 1;
      } while (piVar3 != this->finish);
                    /* end of inlined section */
      piVar3 = this->start;
    }
                    /* inlined from ../MSrc/alloc.h */
    if ((piVar3 != (int *)0x0) && ((int)this->end_of_storage - (int)piVar3 >> 2 != 0)) {
      free(piVar3);
                    /* end of inlined section */
    }
    piVar3 = piVar1 + iVar4;
    this->start = piVar1;
    this->end_of_storage = (int *)((int)piVar1 + size);
  }
  else {
                    /* inlined from ../MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/algobase.h */
    *piVar1 = piVar1[-1];
                    /* end of inlined section */
    iVar2 = *x;
    copy_backward__H2ZPiZPi_X01X01X11_X11(position,this->finish + -1,this->finish);
    *position = iVar2;
    piVar3 = this->finish;
  }
  this->finish = piVar3 + 1;
  return;
}

void SAnimator::~SAnimator(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (SAnimator__vtable *)_vt_9SAnimator;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void* SAnimator2::operator new(unsigned int size) {
	void *result;
	
  void *__s;
  
  __s = _memmanAlloc__FUiUi(size,0x10);
  memset(__s,0,(long)(int)size);
  return __s;
}

void SAnimator2::operator delete(void *ptr) {
  _memmanFree__FPv(ptr);
  return;
}

EMat4& SAnimator2::GetHeadOrient() {
  return &this->m_mHeadOrient;
}

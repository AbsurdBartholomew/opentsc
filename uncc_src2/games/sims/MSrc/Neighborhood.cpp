// STATUS: NOT STARTED

#include "Neighborhood.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb1933;
	__vtbl_ptr_type *$vf1996;
	
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
	cXObject *$vb1996;
	static Int kSimTicksPerMotiveTick;
	__vtbl_ptr_type *$vf2096;
	
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

struct FamilyStat {
	SInt16 fLotNumber;
	SInt16 fNumMembers;
	SInt16 fNumAdultMales;
	SInt16 fNumAdultFemales;
	SInt16 fNumKidMales;
	SInt16 fNumKidFemales;
	SInt16 fNumWorkers;
	SInt16 fNumObjects;
	SInt32 fValueObjects;
	SInt32 fValueArch;
	SInt16 fHouseSqFt;
	SInt16 fHouseSize;
	SInt16 fHouseRatingFurnishings;
	SInt16 fHouseRatingSize;
	SInt16 fHouseRatingYard;
	SInt16 fHouseRatingUpkeep;
	SInt16 fHouseRatingLayout;
	SInt32 fBudgetIncome;
	SInt32 fBudgetBills;
	SInt32 fBudgetFood;
	SInt32 fBudgetMaintenance;
	SInt32 fBudgetObjects;
	SInt32 fBudgetMisc;
	SInt32 fBudgetArch;
	SInt32 fBudgetFunds;
	SInt16 fNumRomancesOutward;
	SInt16 fNumRomancesInward;
	SInt16 fNumFriendsOutward;
	SInt16 fNumFriendsInward;
	SInt16 fNumFriends;
};

struct NeighborhoodConstants : GlobalConstantsClient {
	NeighborhoodConstants& operator=();
	NeighborhoodConstants();
	NeighborhoodConstants();
	/* vtable[3] */ virtual void UpdateConstants();
};

// warning: multiple differing types with the same name (type name not equal)
struct simple_alloc<int,__malloc_alloc_template<0> > {
	simple_alloc<int,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static FamilyID* allocate(/* parameters unknown */);
	static FamilyID* allocate(/* parameters unknown */);
	static FamilyID* allocate(/* parameters unknown */);
	static FamilyID* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct AUTOPTR<cSimulator> {
private:
	cSimulator *m_ptr;
	
public:
	AUTOPTR();
	AUTOPTR();
	AUTOPTR(AUTOPTR<cSimulator>*, int, void);
	cSimulator* CreateInstance();
	void Reset();
	cSimulator* operator cSimulator *();
	cSimulator* operator->();
private:
	AUTOPTR<cSimulator>& operator=();
};

struct vector<cXPerson *,__malloc_alloc_template<0> > {
protected:
	cXPerson **start;
	cXPerson **finish;
	cXPerson **end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	cXPerson** begin();
	cXPerson** begin();
	cXPerson** end();
	cXPerson** end();
	reverse_iterator<cXPerson **,cXPerson *,cXPerson *&,int> rbegin();
	reverse_iterator<cXPerson *const *,cXPerson *,cXPerson *const &,int> rbegin();
	reverse_iterator<cXPerson **,cXPerson *,cXPerson *&,int> rend();
	reverse_iterator<cXPerson *const *,cXPerson *,cXPerson *const &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	cXPerson*& operator[]();
	cXPerson*& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<cXPerson *,__malloc_alloc_template<0> >*, int, void);
	vector<cXPerson *,__malloc_alloc_template<0> >& operator=();
	void reserve();
	cXPerson*& front();
	cXPerson*& front();
	cXPerson*& back();
	cXPerson*& back();
	void push_back();
	void swap();
	cXPerson** insert();
	cXPerson** insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct simple_alloc<cXPerson *,__malloc_alloc_template<0> > {
	simple_alloc<cXPerson *,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static cXPerson** allocate(/* parameters unknown */);
	static cXPerson** allocate(/* parameters unknown */);
	static cXPerson** allocate(/* parameters unknown */);
	static cXPerson** allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct SimpleReconObject<NeighborhoodImpl> : ReconObject {
private:
	NeighborhoodImpl *fObj;
	SInt32 fType;
	
public:
	SimpleReconObject<NeighborhoodImpl>& operator=();
	SimpleReconObject();
	/* vtable[1] */ virtual SimpleReconObject(SimpleReconObject<NeighborhoodImpl>*, int, void);
	SimpleReconObject();
	/* vtable[2] */ virtual void DoStream(ReconBuffer *r, SInt32 version);
	/* vtable[3] */ virtual SInt32 GetType();
};

struct ReconStreamPtrVector<Neighbor> {
private:
	vector<Neighbor *,__malloc_alloc_template<0> > &fVec;
	SInt32 fType;
	
public:
	ReconStreamPtrVector<Neighbor>& operator=();
	ReconStreamPtrVector();
	ReconStreamPtrVector();
	void DoStream();
};

struct SimpleReconObject<ReconStreamPtrVector<Neighbor> > : ReconObject {
private:
	ReconStreamPtrVector<Neighbor> *fObj;
	SInt32 fType;
	
public:
	SimpleReconObject<ReconStreamPtrVector<Neighbor> >& operator=();
	SimpleReconObject();
	/* vtable[1] */ virtual SimpleReconObject(SimpleReconObject<ReconStreamPtrVector<Neighbor> >*, int, void);
	SimpleReconObject();
	/* vtable[2] */ virtual void DoStream(ReconBuffer *r, SInt32 version);
	/* vtable[3] */ virtual SInt32 GetType();
};

int gInhibitTutorial = 0;

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

__vtbl_ptr_type SimpleReconObject<ReconStreamPtrVector<Neighbor> > virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<ReconStreamPtrVector<Neighbor> >::~SimpleReconObject,
		/* .__delta2 = */ 11392
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<ReconStreamPtrVector<Neighbor> >::DoStream,
		/* .__delta2 = */ 11512
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<ReconStreamPtrVector<Neighbor> >::GetType,
		/* .__delta2 = */ 11544
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type SimpleReconObject<NeighborhoodImpl> virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<NeighborhoodImpl>::~SimpleReconObject,
		/* .__delta2 = */ 11360
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<NeighborhoodImpl>::DoStream,
		/* .__delta2 = */ 11552
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<NeighborhoodImpl>::GetType,
		/* .__delta2 = */ 11600
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type NeighborhoodConstants virtual table[5] = {
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
		/* .__pfn = */ &NeighborhoodConstants::UpdateConstants,
		/* .__delta2 = */ -15936
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type NeighborhoodImpl virtual table[57] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::~NeighborhoodImpl,
		/* .__delta2 = */ -14928
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::GetNeighborhoodName,
		/* .__delta2 = */ 11088
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::GetHighestLevelCompleted,
		/* .__delta2 = */ 11120
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::LevelComplete,
		/* .__delta2 = */ -14320
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::SetFilename,
		/* .__delta2 = */ -14240
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::GetFilename,
		/* .__delta2 = */ 11128
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::GetDirectory,
		/* .__delta2 = */ -11512
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::GetHousePath,
		/* .__delta2 = */ -11152
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::GetNumCharacters,
		/* .__delta2 = */ -5944
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::GetFamilyFriendsCount,
		/* .__delta2 = */ -5600
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::GetFriendCount,
		/* .__delta2 = */ -5824
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::GetFamilyNetWorth,
		/* .__delta2 = */ -5544
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::LoadHouse,
		/* .__delta2 = */ -1440
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::SaveHouse,
		/* .__delta2 = */ 1096
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::UnloadHouse,
		/* .__delta2 = */ 1528
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::GetHouseNumber,
		/* .__delta2 = */ 1520
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::GetHouseFileInfo,
		/* .__delta2 = */ -1976
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::Save,
		/* .__delta2 = */ -12136
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::GetHouseNumberForLevel,
		/* .__delta2 = */ -10960
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::GetNeighborhoodVar,
		/* .__delta2 = */ 11168
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::SetNeighborhoodVar,
		/* .__delta2 = */ 11184
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::UpdateInstanceVisitorTypes,
		/* .__delta2 = */ 2312
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::GetNumNeighborHouses,
		/* .__delta2 = */ 11200
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::GetNeighborHouseByIndex,
		/* .__delta2 = */ 11224
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::DoStream,
		/* .__delta2 = */ -11480
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::FindNeighborByID,
		/* .__delta2 = */ -10952
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::FindNeighborByGUID,
		/* .__delta2 = */ -10888
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::GetNeighborSelector,
		/* .__delta2 = */ -9360
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::GetNeighborData,
		/* .__delta2 = */ -9192
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::GetNextNeighborID,
		/* .__delta2 = */ -9304
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::LoadPersistentData,
		/* .__delta2 = */ -10168
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::SavePersistentData,
		/* .__delta2 = */ -9584
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::RelationshipsChanged,
		/* .__delta2 = */ -14400
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::PostSim,
		/* .__delta2 = */ -14328
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::GetNumFamilies,
		/* .__delta2 = */ -8080
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::GetFamilyByIndex,
		/* .__delta2 = */ -8056
	},
	/* [37] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::GetFamily,
		/* .__delta2 = */ -8336
	},
	/* [38] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::GetFamilyInHouse,
		/* .__delta2 = */ -8208
	},
	/* [39] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::MakeNewFamily,
		/* .__delta2 = */ -7864
	},
	/* [40] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::RemoveFamily,
		/* .__delta2 = */ -7416
	},
	/* [41] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::AddToFamily,
		/* .__delta2 = */ -7176
	},
	/* [42] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::RemoveFromFamily,
		/* .__delta2 = */ -6728
	},
	/* [43] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::AddNewCharacter,
		/* .__delta2 = */ -6384
	},
	/* [44] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::DeleteCharacter,
		/* .__delta2 = */ -6280
	},
	/* [45] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::CountHouses,
		/* .__delta2 = */ -5952
	},
	/* [46] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::MoveOut,
		/* .__delta2 = */ -5088
	},
	/* [47] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::PrepareAndTestLot,
		/* .__delta2 = */ -3136
	},
	/* [48] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::GetLotPosition,
		/* .__delta2 = */ 1536
	},
	/* [49] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::GetCurrentTutorialStage,
		/* .__delta2 = */ 11248
	},
	/* [50] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::TutorialCompleted,
		/* .__delta2 = */ 1600
	},
	/* [51] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::CancelTutorial,
		/* .__delta2 = */ 2128
	},
	/* [52] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::GetShowTutorialArrow,
		/* .__delta2 = */ 11256
	},
	/* [53] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::SetShowTutorialArrow,
		/* .__delta2 = */ 11272
	},
	/* [54] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::AddFamilyHistoryStat,
		/* .__delta2 = */ 2304
	},
	/* [55] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &NeighborhoodImpl::GetImpl,
		/* .__delta2 = */ 11288
	},
	/* [56] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type Neighborhood virtual table[57] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &Neighborhood::~Neighborhood,
		/* .__delta2 = */ 11040
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

static NeighborhoodConstants sTheClient;

static tagPOINT fLotPos[10] = {
	/* [0] = */ {
		/* .x = */ 162,
		/* .y = */ 122
	},
	/* [1] = */ {
		/* .x = */ 636,
		/* .y = */ 102
	},
	/* [2] = */ {
		/* .x = */ 359,
		/* .y = */ 230
	},
	/* [3] = */ {
		/* .x = */ 209,
		/* .y = */ 305
	},
	/* [4] = */ {
		/* .x = */ 522,
		/* .y = */ 381
	},
	/* [5] = */ {
		/* .x = */ 105,
		/* .y = */ 482
	},
	/* [6] = */ {
		/* .x = */ 376,
		/* .y = */ 454
	},
	/* [7] = */ {
		/* .x = */ 672,
		/* .y = */ 477
	},
	/* [8] = */ {
		/* .x = */ 277,
		/* .y = */ 555
	},
	/* [9] = */ {
		/* .x = */ 527,
		/* .y = */ 548
	}
};

float gArchValueMultiplier = 0.f;
int gNewFamilyStartHour = 0;
float gPerfectFriendCount = 0.f;
float gHouseSizeWeight = 0.f;
int gLayoutFillValue = 0;
int gMoneyForNewFamily = 0;
float gYardScoreMultiplier = 0.f;
Int gScorePerDirtyObject = 0;
Int gScorePerBrokenObject = 0;

Neighborhood* Neighborhood::CreateInstance() {
  NeighborhoodImpl *pNVar1;
  
  pNVar1 = (NeighborhoodImpl *)__builtin_new(800);
  pNVar1 = __16NeighborhoodImpl(pNVar1);
  return &pNVar1->field0_0x0;
}

void Neighborhood::DestroyInstance(Neighborhood *pInstance) {
  if (pInstance != (Neighborhood *)0x0) {
    (*(code *)pInstance->__vtable->GetHighestLevelCompleted)
              ((int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->GetNeighborhoodName,
               3);
  }
  return;
}

ConstantsClient* GetNeighborhoodConstantsClient() {
  return (ConstantsClient *)&sTheClient;
}

void NeighborhoodConstants::UpdateConstants() {
	iResFile *file;
	AUTOPTR<FloatConstants> mc;
	
  ConstantsClient__vtable *pCVar1;
  FloatConstants *pInstance;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
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
  gArchValueMultiplier =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (0x3f333333,
                         (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                         0x3bbf40,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  fVar4 = (float)(**(code **)(pInstance->__vtable + 1))
                           (0x40e00000,
                            (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                            0x3bbf60,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  gNewFamilyStartHour = (int)fVar4;
  gPerfectFriendCount =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (0x41700000,
                         (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                         0x3bbf78,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  gHouseSizeWeight =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (0x40400000,
                         (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                         0x3bbf98,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  fVar4 = (float)(**(code **)(pInstance->__vtable + 1))
                           (0x43480000,
                            (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                            0x3bbfc0,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  gLayoutFillValue = (int)fVar4;
  fVar4 = (float)(**(code **)(pInstance->__vtable + 1))
                           (0x469c4000,
                            (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                            0x3bbfe0,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  gMoneyForNewFamily = (int)fVar4;
  gYardScoreMultiplier =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (0x3ea8f5c3,
                         (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                         0x3bbff8,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  fVar4 = (float)(**(code **)(pInstance->__vtable + 1))
                           (0x40c00000,
                            (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                            0x3bc010,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  gScorePerDirtyObject = (int)fVar4;
  fVar4 = (float)(**(code **)(pInstance->__vtable + 1))
                           (0x41700000,
                            (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                            0x3bc030,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  gScorePerBrokenObject = (int)fVar4;
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  DestroyInstance__14FloatConstantsP14FloatConstants(pInstance);
  return;
}

void NeighborList::DeleteAll() {
	Neighbor **i;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	Neighbor **first;
	Neighbor **pointer;
	
  Neighbor **ppNVar1;
  Neighbor **ppNVar2;
  Neighbor *this_00;
  Neighbor **ppNVar3;
  
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  ppNVar3 = (this->field0_0x0).start;
  ppNVar1 = (this->field0_0x0).finish;
                    /* end of inlined section */
  if (ppNVar3 == ppNVar1) {
    ppNVar3 = (this->field0_0x0).start;
    ppNVar2 = ppNVar3;
  }
  else {
    this_00 = *ppNVar3;
    while( true ) {
      if (this_00 == (Neighbor *)0x0) {
        ppNVar1 = (this->field0_0x0).finish;
      }
      else {
        ___8Neighbor(this_00,3);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        ppNVar1 = (this->field0_0x0).finish;
      }
                    /* end of inlined section */
      ppNVar3 = ppNVar3 + 1;
      if (ppNVar3 == ppNVar1) break;
      this_00 = *ppNVar3;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    ppNVar1 = (this->field0_0x0).finish;
    ppNVar3 = (this->field0_0x0).start;
    ppNVar2 = ppNVar3;
  }
  for (; ppNVar3 != ppNVar1; ppNVar3 = ppNVar3 + 1) {
  }
  (this->field0_0x0).finish = ppNVar2;
  return;
}

NeighborhoodImpl* NeighborhoodImpl::NeighborhoodImpl() {
	Neighborhood *this;
	vector<int,__malloc_alloc_template<0> > *this;
	NeighborList *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	int i;
	
  ushort *puVar1;
  int iVar2;
  
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  (this->field0_0x0).__vtable = (Neighborhood__vtable *)_vt_16NeighborhoodImpl;
  __12StringBufferPcUi(&(this->fFilename).field0_0x0,(this->fFilename).fChars,0x104);
  __13StringBuffer2PUsUi
            (&(this->fNeighborhoodName).field0_0x0,(this->fNeighborhoodName).fChars,0x20);
                    /* end of inlined section */
  __13UnlockedRecon(&this->m_UnlockedRecon);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  (this->fNeighborHouses).start = (int *)0x0;
  (this->fNeighborHouses).end_of_storage = (int *)0x0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  (this->fNeighborHouses).finish = (int *)0x0;
  (this->fNeighbors).field0_0x0.start = (Neighbor **)0x0;
                    /* end of inlined section */
  iVar2 = 0xf;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  (this->fNeighbors).field0_0x0.end_of_storage = (Neighbor **)0x0;
                    /* end of inlined section */
  puVar1 = this->fVars + 0xf;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  (this->fNeighbors).field0_0x0.finish = (Neighbor **)0x0;
  (this->fFamilies).start = (FamilyImpl **)0x0;
  (this->fFamilies).end_of_storage = (FamilyImpl **)0x0;
  (this->fFamilies).finish = (FamilyImpl **)0x0;
  do {
                    /* end of inlined section */
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  this->fHouseNum = 0;
  return this;
}

void NeighborhoodImpl::~NeighborhoodImpl(int __in_chrg) {
	FamilyImpl **j;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	FamilyImpl **first;
	FamilyImpl **last;
	FamilyImpl **pointer;
	FamilyImpl **last;
	FamilyImpl **first;
	FamilyImpl **pointer;
	Neighbor **first;
	Neighbor **last;
	Neighbor **pointer;
	FamilyID *last;
	FamilyID *first;
	FamilyID *pointer;
	Neighborhood *this;
	int __in_chrg;
	void *pAddress;
	
  int *piVar1;
  Neighbor **ppNVar2;
  int *piVar3;
  FamilyImpl **ppFVar4;
  FamilyImpl *pInstance;
  Neighbor **ppNVar5;
  FamilyImpl **ppFVar6;
  NeighborList *this_00;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (Neighborhood__vtable *)_vt_16NeighborhoodImpl;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  ppFVar6 = (this->fFamilies).start;
                    /* end of inlined section */
  if (ppFVar6 != (this->fFamilies).finish) {
    pInstance = *ppFVar6;
    while( true ) {
      ppFVar6 = ppFVar6 + 1;
      DestroyInstance__6FamilyP6Family(&pInstance->field0_0x0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      if (ppFVar6 == (this->fFamilies).finish) break;
      pInstance = *ppFVar6;
    }
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  this_00 = &this->fNeighbors;
  ppFVar6 = (this->fFamilies).start;
  for (ppFVar4 = ppFVar6; ppFVar4 != (this->fFamilies).finish; ppFVar4 = ppFVar4 + 1) {
  }
  (this->fFamilies).finish = ppFVar6;
  ppFVar6 = (this->fFamilies).finish;
  ppFVar4 = (this->fFamilies).start;
  if (ppFVar4 == ppFVar6) {
    ppFVar6 = (this->fFamilies).start;
  }
  else {
    do {
      ppFVar4 = ppFVar4 + 1;
    } while (ppFVar4 != ppFVar6);
    ppFVar6 = (this->fFamilies).start;
  }
  if ((ppFVar6 != (FamilyImpl **)0x0) &&
     ((int)(this->fFamilies).end_of_storage - (int)ppFVar6 >> 2 != 0)) {
    free(ppFVar6);
  }
  DeleteAll__12NeighborList(this_00);
  ppNVar5 = (this->fNeighbors).field0_0x0.finish;
  ppNVar2 = (this->fNeighbors).field0_0x0.start;
  if (ppNVar2 == ppNVar5) {
    ppNVar5 = (this_00->field0_0x0).start;
  }
  else {
    do {
      ppNVar2 = ppNVar2 + 1;
    } while (ppNVar2 != ppNVar5);
    ppNVar5 = (this_00->field0_0x0).start;
  }
  if (ppNVar5 == (Neighbor **)0x0) {
    piVar3 = (this->fNeighborHouses).start;
  }
  else if ((int)(this->fNeighbors).field0_0x0.end_of_storage - (int)ppNVar5 >> 2 == 0) {
    piVar3 = (this->fNeighborHouses).start;
  }
  else {
    free(ppNVar5);
    piVar3 = (this->fNeighborHouses).start;
  }
  piVar1 = (this->fNeighborHouses).finish;
  if (piVar3 == piVar1) {
    piVar3 = (this->fNeighborHouses).start;
  }
  else {
    do {
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1);
    piVar3 = (this->fNeighborHouses).start;
  }
  if ((piVar3 != (int *)0x0) &&
     ((int)(this->fNeighborHouses).end_of_storage - (int)piVar3 >> 2 != 0)) {
    free(piVar3);
                    /* end of inlined section */
  }
  ___13UnlockedRecon(&this->m_UnlockedRecon,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Neighborhood.h */
  (this->field0_0x0).__vtable = (Neighborhood__vtable *)_vt_12Neighborhood;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

void NeighborhoodImpl::RelationshipsChanged(Neighbor *n) {
  Neighborhood__vtable *pNVar1;
  long lVar2;
  
  *(undefined4 *)&n->fFriendCountDirty = 1;
  pNVar1 = (this->field0_0x0).__vtable;
  lVar2 = (*(code *)pNVar1[1].GetHouseNumberForLevel)
                    ((this->fFilename).fChars + *(short *)&pNVar1[1].Save + -0xc,n->fData[0x3d]);
  if (lVar2 != 0) {
    *(undefined4 *)((int)lVar2 + 0x20) = 1;
  }
  return;
}

void NeighborhoodImpl::PostSim() {
  return;
}

void NeighborhoodImpl::LevelComplete(int levelNum) {
  Neighborhood__vtable *pNVar1;
  int iVar2;
  
  pNVar1 = (this->field0_0x0).__vtable;
  iVar2 = (*(code *)pNVar1->GetDirectory)
                    ((this->fFilename).fChars + *(short *)&pNVar1->GetFilename + -0xc);
  if (iVar2 < levelNum) {
    this->fVars[0] = (ushort)levelNum;
  }
  return;
}

void NeighborhoodImpl::SetFilename(StringBuffer *neighborhoodFile) {
  copy__12StringBufferRC12StringBuffer(&(this->fFilename).field0_0x0,neighborhoodFile);
  return;
}

static bool SortFamilyByCreation(Family *&a, Family *&b) {
	Int ca;
	Int cb;
	
  Family__vtable *pFVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  
  pFVar1 = (*a)->__vtable;
  lVar3 = (*(code *)pFVar1->GetHasExportedHTMLBefore)
                    ((int)&(*a)->__vtable + (int)*(short *)&pFVar1->SetHasExportedHTMLBefore);
  pFVar1 = (*b)->__vtable;
  lVar4 = (*(code *)pFVar1->GetHasExportedHTMLBefore)
                    ((int)&(*b)->__vtable + (int)*(short *)&pFVar1->SetHasExportedHTMLBefore);
  bVar2 = lVar4 < lVar3;
  if (lVar3 == lVar4) {
    pFVar1 = (*a)->__vtable;
    lVar3 = (*(code *)pFVar1->GetHasBaby)((int)&(*a)->__vtable + (int)*(short *)&pFVar1->SetHasBaby)
    ;
    pFVar1 = (*b)->__vtable;
    lVar4 = (*(code *)pFVar1->GetHasBaby)((int)&(*b)->__vtable + (int)*(short *)&pFVar1->SetHasBaby)
    ;
    bVar2 = lVar4 < lVar3;
  }
  return bVar2;
}

ErrType NeighborhoodImpl::Load(NghResFile *pFile) {
	static bool sConstantsLoaded = false;
	ObjectFolder *f;
	ErrType err;
	ObjSelector *sel;
	FamilyImpl **i;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	FamilyImpl **first;
	FamilyImpl **last;
	FamilyImpl **pointer;
	Int famCnt;
	Neighbor **n;
	int i;
	SInt16 famNum;
	HandleNode *h;
	FamilyImpl *f;
	int numMembers;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	FamilyImpl *&x;
	FamilyImpl *&value;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	int m;
	FamilyMember *fm;
	FamilyMember *this;
	FamilyMember *this;
	FamilyImpl *f;
	StringBufW255 name;
	FamilyImpl *&x;
	FamilyImpl *&value;
	ObjSelector *this;
	FamilyImpl **f;
	
  Family__vtable *pFVar1;
  Neighborhood__vtable *pNVar2;
  ObjectFolder *pOVar3;
  CTGDump *pCVar4;
  char *inString;
  Neighbor **ppNVar5;
  FamilyImpl *pFVar6;
  int iVar7;
  Neighbor *pNVar8;
  FamilyImpl **ppFVar9;
  long lVar10;
  long lVar11;
  ObjectFolder__vtable *pOVar12;
  iResFile__6_5027__vtable *piVar13;
  uint n;
  int iVar14;
  FamilyImpl **ppFVar15;
  ObjSelector *sel;
  undefined8 unaff_s0;
  Neighbor **ppNVar16;
  int iVar17;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  ushort famNum;
  StackString2_256_ name;
  FamilyImpl *local_b0;
  FamilyImpl *f;
  int err;
  int famCnt;
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
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
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
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (sConstantsLoaded_1167 == 0) {
    UpdateConstants__21NeighborhoodConstants(&sTheClient);
    sConstantsLoaded_1167 = 1;
  }
                    /* end of inlined section */
  pOVar3 = _5Globs_pObjectFolder;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  DeleteAll__12NeighborList(&this->fNeighbors);
  (*(code *)pOVar3->__vtable->GetNthSubSelector)
            ((int)&pOVar3->__vtable + (int)*(short *)&pOVar3->__vtable->GetMasterSelector);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  ppFVar15 = (this->fFamilies).start;
                    /* end of inlined section */
  if (ppFVar15 != (this->fFamilies).finish) {
    pFVar6 = *ppFVar15;
    while( true ) {
      ppFVar15 = ppFVar15 + 1;
      DestroyInstance__6FamilyP6Family(&pFVar6->field0_0x0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      if (ppFVar15 == (this->fFamilies).finish) break;
      pFVar6 = *ppFVar15;
    }
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  ppFVar15 = (this->fFamilies).start;
  for (ppFVar9 = ppFVar15; ppFVar9 != (this->fFamilies).finish; ppFVar9 = ppFVar9 + 1) {
  }
                    /* end of inlined section */
                    /* end of inlined section */
  (this->fFamilies).finish = ppFVar15;
  SwitchToNewNeighborhood__16NeighborhoodImpl(this);
  err = ReconLoadObject__H1Z16NeighborhoodImpl_PX01P8iResFileisPi_i
                  (this,&pFile->field0_0x0,0x4e474248,1,(int *)0x0);
  (*(code *)pOVar3->__vtable->GetObjectsDatabase)
            ((int)&pOVar3->__vtable + (int)*(short *)&pOVar3->__vtable->GetBehaviorFinder,pFile);
  if (err == 0) {
    err = ReconLoadPtrVector__H1Z8Neighbor_Rt6vector2ZPX01Zt23__malloc_alloc_template1i0P8iResFileisPi_i
                    (&(this->fNeighbors).field0_0x0,&pFile->field0_0x0,0x4e425253,1,(int *)0x0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    ppNVar16 = (this->fNeighbors).field0_0x0.start;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    if (ppNVar16 == (this->fNeighbors).field0_0x0.finish) {
      pOVar12 = pOVar3->__vtable;
    }
    else {
      pNVar8 = *ppNVar16;
      while( true ) {
        if (pNVar8 == (Neighbor *)0x0) {
          ppNVar5 = (this->fNeighbors).field0_0x0.finish;
        }
        else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Neighbor.h */
                    /* end of inlined section */
          if (pNVar8->fSelector == (ObjSelector *)0x0) {
            pCVar4 = __ls__7CTGDumpPCc(&ctgDump,"c:/eor/src2/games/sims/MSrc/Neighborhood.cpp");
            pCVar4 = __ls__7CTGDumpPCc(pCVar4,"(");
            pCVar4 = __ls__7CTGDumpi(pCVar4,0x105);
            pCVar4 = __ls__7CTGDumpPCc(pCVar4,"): Missing file: ");
            inString = c_str__C12StringBuffer(&((*ppNVar16)->fOriginalFileName).field0_0x0);
            pCVar4 = __ls__7CTGDumpPCc(pCVar4,inString);
            __ls__7CTGDumpPCc(pCVar4,"\r\n");
            RemoveNeighbor__16NeighborhoodImplP8Neighbor(this,*ppNVar16);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
            ppNVar5 = (this->fNeighbors).field0_0x0.finish;
          }
          else {
            ppNVar5 = (this->fNeighbors).field0_0x0.finish;
          }
        }
                    /* end of inlined section */
        ppNVar16 = ppNVar16 + 1;
        if (ppNVar16 == ppNVar5) break;
        pNVar8 = *ppNVar16;
      }
      pOVar12 = pOVar3->__vtable;
    }
    (*(code *)pOVar12[1].GetLeadSelector)
              ((int)&pOVar3->__vtable + (int)*(short *)&pOVar12[1].GetSubTileSelector,pFile);
  }
  piVar13 = (pFile->field0_0x0).__vtable;
  if (err == -0x62) {
    err = 0;
  }
  lVar10 = (*(code *)piVar13->Add)
                     ((int)pFile->m_ppHouseWriteInfo + *(short *)&piVar13->SetID + -0x18,0x46414d49)
  ;
  famCnt = (int)lVar10;
  iVar14 = 0;
  if (lVar10 < 1) {
LAB_0024cd14:
    pNVar2 = (this->field0_0x0).__vtable;
    lVar10 = (*(code *)pNVar2[1].GetHouseNumberForLevel)
                       ((this->fFilename).fChars + *(short *)&pNVar2[1].Save + -0xc,0);
    if (lVar10 == 0) {
      pFVar6 = (FamilyImpl *)__builtin_new(0x34);
      f = __10FamilyImpli(pFVar6,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer2.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer2.h */
      __13StringBuffer2PUsUi(&name.field0_0x0,name.fChars,0x100);
      append__13StringBuffer2PCwi(&name.field0_0x0,(int *)&DAT_003bc0b0,-1);
                    /* end of inlined section */
      pFVar1 = (f->field0_0x0).__vtable;
      (*(code *)pFVar1->SetFriendCount)
                ((int)&(f->field0_0x0).__vtable + (int)*(short *)&pFVar1->GetFriendCount,&name);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      ppFVar15 = (this->fFamilies).finish;
      if (ppFVar15 == (this->fFamilies).end_of_storage) {
        insert_aux__t6vector2ZP10FamilyImplZt23__malloc_alloc_template1i0PP10FamilyImplRCP10FamilyImpl
                  (&this->fFamilies,ppFVar15,&f);
      }
      else {
        *ppFVar15 = f;
        (this->fFamilies).finish = (this->fFamilies).finish + 1;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      ppFVar15 = (this->fFamilies).finish;
    }
    else {
      ppFVar15 = (this->fFamilies).finish;
    }
    ppFVar9 = (this->fFamilies).start;
    n = (int)ppFVar15 - (int)ppFVar9 >> 2;
                    /* end of inlined section */
    if (1 < n) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      iVar14 = __lg__H1Zi_X01_X01(n);
      __introsort_loop__H4ZPP10FamilyImplZP10FamilyImplZiZPFRCP6FamilyRCP6Family_b_X01X01PX11X21X31_v
                (ppFVar9,ppFVar15,0,(undefined1 *)(iVar14 << 1));
      __final_insertion_sort__H2ZPP10FamilyImplZPFRCP6FamilyRCP6Family_b_X01X01X11_v
                (ppFVar9,ppFVar15,SortFamilyByCreation__FRCP6FamilyT0);
                    /* end of inlined section */
    }
    lVar10 = 0;
    do {
      pOVar12 = pOVar3->__vtable;
      while( true ) {
        while( true ) {
          lVar10 = (*(code *)pOVar12->ResumeObjectFiles)
                             ((int)&pOVar3->__vtable + (int)*(short *)&pOVar12->SuspendObjectFiles,
                              lVar10);
          if (lVar10 == 0) {
            UpdateFamilyNumbers__16NeighborhoodImpl(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
            ppFVar15 = (this->fFamilies).start;
            goto LAB_0024ce7c;
          }
          sel = (ObjSelector *)lVar10;
                    /* end of inlined section */
          if (sel->fHeader->type == 2) break;
          pOVar12 = pOVar3->__vtable;
        }
        pNVar8 = FindNeighborByType__16NeighborhoodImplP11ObjSelector(this,sel);
        if (pNVar8 == (Neighbor *)0x0) break;
        pOVar12 = pOVar3->__vtable;
      }
      AddNewNeighbor__16NeighborhoodImplP11ObjSelector(this,sel);
    } while( true );
  }
  piVar13 = (pFile->field0_0x0).__vtable;
  do {
    iVar14 = iVar14 + 1;
    famNum = 0xffff;
    lVar10 = (**(code **)(piVar13 + 1))
                       ((int)pFile->m_ppHouseWriteInfo + *(short *)&piVar13->GetString + -0x18,
                        0x46414d49,iVar14 * 0x10000 >> 0x10,0);
    if (lVar10 != 0) {
      piVar13 = (pFile->field0_0x0).__vtable;
      (*(code *)piVar13[1].Close)
                ((int)pFile->m_ppHouseWriteInfo + *(short *)&piVar13[1].Reopen + -0x18,lVar10,
                 &famNum);
    }
    if (famNum != 0xffff) {
      pFVar6 = (FamilyImpl *)__builtin_new(0x34);
      local_b0 = __10FamilyImpli(pFVar6,-1);
      pFVar1 = (local_b0->field0_0x0).__vtable;
      (*(code *)pFVar1->GetCreationOrder)
                ((int)&(local_b0->field0_0x0).__vtable + (int)*(short *)&pFVar1->SetHouseNumber,
                 pFile,famNum);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      ppFVar15 = (this->fFamilies).finish;
      if (ppFVar15 == (this->fFamilies).end_of_storage) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        insert_aux__t6vector2ZP10FamilyImplZt23__malloc_alloc_template1i0PP10FamilyImplRCP10FamilyImpl
                  (&this->fFamilies,ppFVar15,&local_b0);
      }
      else {
        *ppFVar15 = local_b0;
        (this->fFamilies).finish = (this->fFamilies).finish + 1;
      }
LAB_0024cc84:
      iVar17 = 0;
      pFVar1 = (local_b0->field0_0x0).__vtable;
      iVar7 = (*(code *)pFVar1->TestMember)
                        ((int)&(local_b0->field0_0x0).__vtable + (int)*(short *)&pFVar1->TestMember)
      ;
      if (0 < iVar7) {
        do {
          pFVar1 = (local_b0->field0_0x0).__vtable;
          lVar10 = (*(code *)pFVar1->SaveFamily)
                             ((int)&(local_b0->field0_0x0).__vtable +
                              (int)*(short *)&pFVar1->LoadFamily,iVar17);
          if (lVar10 != 0) {
            pNVar2 = (this->field0_0x0).__vtable;
            lVar11 = (*(code *)pNVar2->GetImpl)
                               ((this->fFilename).fChars +
                                *(short *)&pNVar2->AddFamilyHistoryStat + -0xc,*(int *)lVar10);
            if (lVar11 == 0) goto LAB_0024cc64;
          }
          iVar17 = iVar17 + 1;
          if (iVar7 <= iVar17) break;
        } while( true );
      }
    }
    if (famCnt <= iVar14) goto LAB_0024cd14;
    piVar13 = (pFile->field0_0x0).__vtable;
  } while( true );
LAB_0024cc64:
                    /* end of inlined section */
  RemoveMember__10FamilyImpli(local_b0,*(int *)lVar10);
  goto LAB_0024cc84;
LAB_0024ce7c:
                    /* end of inlined section */
  if (ppFVar15 == (this->fFamilies).finish) {
    return err;
  }
  pFVar6 = *ppFVar15;
  do {
    pFVar1 = (pFVar6->field0_0x0).__vtable;
    lVar10 = (*(code *)pFVar1->TestMember)
                       ((int)&(pFVar6->field0_0x0).__vtable + (int)*(short *)&pFVar1->TestMember);
    if (lVar10 == 0) {
      pFVar1 = ((*ppFVar15)->field0_0x0).__vtable;
      lVar10 = (*(code *)pFVar1->GetHasBaby)
                         ((int)&((*ppFVar15)->field0_0x0).__vtable +
                          (int)*(short *)&pFVar1->SetHasBaby);
      if (lVar10 != 0) break;
      ppFVar9 = (this->fFamilies).finish;
    }
    else {
      ppFVar9 = (this->fFamilies).finish;
    }
                    /* end of inlined section */
    ppFVar15 = ppFVar15 + 1;
    if (ppFVar15 == ppFVar9) {
      return err;
    }
    pFVar6 = *ppFVar15;
  } while( true );
  pFVar1 = ((*ppFVar15)->field0_0x0).__vtable;
  lVar10 = (*(code *)pFVar1->GetNewHouse)
                     ((int)&((*ppFVar15)->field0_0x0).__vtable + (int)*(short *)&pFVar1->SetNewHouse
                     );
  if (lVar10 != 0) {
    pFVar1 = ((*ppFVar15)->field0_0x0).__vtable;
    (*(code *)pFVar1->GetHTMLExportDirty)
              ((int)&((*ppFVar15)->field0_0x0).__vtable + (int)*(short *)&pFVar1->SetHTMLExportDirty
               ,0);
  }
  pNVar2 = (this->field0_0x0).__vtable;
  (*(code *)pNVar2[1].DoStream)
            ((this->fFilename).fChars + *(short *)&pNVar2[1].GetNeighborHouseByIndex + -0xc,
             *ppFVar15);
  ppFVar15 = (this->fFamilies).start;
  goto LAB_0024ce7c;
}

void NeighborhoodImpl::UpdateFamilyNumbers() {
	Neighbor **n;
	FamilyImpl **i;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	int n;
	Neighbor *n;
	Neighbor *this;
	
  Neighborhood__vtable *pNVar1;
  Family__vtable *pFVar2;
  undefined2 uVar3;
  Neighbor *pNVar4;
  undefined4 *puVar5;
  int iVar6;
  long lVar7;
  Neighbor **ppNVar8;
  FamilyImpl **ppFVar9;
  int iVar10;
  FamilyImpl **ppFVar11;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  ppNVar8 = (this->fNeighbors).field0_0x0.start;
                    /* end of inlined section */
  if (ppNVar8 != (this->fNeighbors).field0_0x0.finish) {
    pNVar4 = *ppNVar8;
    while( true ) {
      if (pNVar4 != (Neighbor *)0x0) {
        pNVar4->fData[0x3d] = 0;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      ppNVar8 = ppNVar8 + 1;
      if (ppNVar8 == (this->fNeighbors).field0_0x0.finish) break;
      pNVar4 = *ppNVar8;
    }
  }
  ppFVar9 = (this->fFamilies).start;
                    /* end of inlined section */
  if (ppFVar9 != (this->fFamilies).finish) {
    do {
      ppFVar11 = ppFVar9 + 1;
      for (iVar10 = 0; pFVar2 = ((*ppFVar9)->field0_0x0).__vtable,
          iVar6 = (*(code *)pFVar2->TestMember)
                            ((int)&((*ppFVar9)->field0_0x0).__vtable +
                             (int)*(short *)&pFVar2->TestMember), iVar10 < iVar6;
          iVar10 = iVar10 + 1) {
        pFVar2 = ((*ppFVar9)->field0_0x0).__vtable;
        puVar5 = (undefined4 *)
                 (*(code *)pFVar2->SaveFamily)
                           ((int)&((*ppFVar9)->field0_0x0).__vtable +
                            (int)*(short *)&pFVar2->LoadFamily,iVar10);
        pNVar1 = (this->field0_0x0).__vtable;
        lVar7 = (*(code *)pNVar1->GetImpl)
                          ((this->fFilename).fChars + *(short *)&pNVar1->AddFamilyHistoryStat + -0xc
                           ,*puVar5);
        if (lVar7 != 0) {
                    /* end of inlined section */
                    /* end of inlined section */
          pFVar2 = ((*ppFVar9)->field0_0x0).__vtable;
          uVar3 = (*(code *)pFVar2->GetHasBaby)
                            ((int)&((*ppFVar9)->field0_0x0).__vtable +
                             (int)*(short *)&pFVar2->SetHasBaby);
          *(undefined2 *)((int)lVar7 + 0xde) = uVar3;
        }
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      ppFVar9 = ppFVar11;
    } while (ppFVar11 != (this->fFamilies).finish);
  }
  return;
}

ErrType NeighborhoodImpl::Save(NghResFile *pFile, SInt32 version) {
	cSimulator *sim;
	ErrType err;
	FamilyImpl **i;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	Int objectsValue;
	float archValue;
	
  short sVar1;
  FamilyImpl *pFVar2;
  Family__vtable *pFVar3;
  cSimulator *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  Neighborhood__vtable *pNVar9;
  FamilyImpl **ppFVar10;
  float fVar11;
  
  pcVar4 = _5Globs_pSimulator;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  FlushCharacterData__10NghResFile((NghResFile__0_845 *)pFile);
  FlushNeighborData__10NghResFile((NghResFile__0_845 *)pFile);
  lVar8 = (*(code *)pcVar4->__vtable->Resume)
                    ((int)&pcVar4->__vtable + (int)*(short *)&pcVar4->__vtable->Pause,0x1a);
  if (lVar8 != 0) {
    this->fVars[2] = *(ushort *)&this->fHouseNum;
  }
  iVar5 = ReconSaveObject__H1Z16NeighborhoodImpl_PX01P8iResFileisi_i
                    (this,&pFile->field0_0x0,0x4e474248,1,version);
  if (iVar5 == 0) {
    iVar5 = ReconSavePtrVector__H1Z8Neighbor_Rt6vector2ZPX01Zt23__malloc_alloc_template1i0P8iResFileisi_i
                      (&(this->fNeighbors).field0_0x0,&pFile->field0_0x0,0x4e425253,1,version);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  }
  ppFVar10 = (this->fFamilies).start;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  if (ppFVar10 != (this->fFamilies).finish) {
    pFVar2 = *ppFVar10;
    while( true ) {
      pFVar3 = (pFVar2->field0_0x0).__vtable;
      lVar8 = (*(code *)pFVar3->GetNewHouse)
                        ((int)&(pFVar2->field0_0x0).__vtable + (int)*(short *)&pFVar3->SetNewHouse);
      if (lVar8 == 0) {
        pNVar9 = (this->field0_0x0).__vtable;
      }
      else {
        pFVar3 = ((*ppFVar10)->field0_0x0).__vtable;
        iVar6 = (*(code *)pFVar3->GetNewHouse)
                          ((int)&((*ppFVar10)->field0_0x0).__vtable +
                           (int)*(short *)&pFVar3->SetNewHouse);
        if (iVar6 == this->fHouseNum) {
          iVar6 = (*(code *)pcVar4->__vtable[1].GetLotValue)
                            ((int)&pcVar4->__vtable +
                             (int)*(short *)&pcVar4->__vtable[1].GetTutorialOn);
          iVar7 = (*(code *)pcVar4->__vtable[1].GetTicks)
                            ((int)&pcVar4->__vtable +
                             (int)*(short *)&pcVar4->__vtable[1].SetCurrentHour);
          pFVar2 = *ppFVar10;
          pFVar3 = (pFVar2->field0_0x0).__vtable;
          sVar1 = *(short *)&pFVar3[1].LoadFamily;
          fVar11 = (float)iVar7 * gArchValueMultiplier;
          iVar7 = (*(code *)pcVar4->__vtable[1].GetDaysRunning)
                            ((int)&pcVar4->__vtable +
                             (int)*(short *)&pcVar4->__vtable[1].GetExpensesHistory);
          (*(code *)pFVar3[1].SaveFamily)
                    ((int)&(pFVar2->field0_0x0).__vtable + (int)sVar1,iVar6 + (int)fVar11 + iVar7);
          pNVar9 = (this->field0_0x0).__vtable;
        }
        else {
          pNVar9 = (this->field0_0x0).__vtable;
        }
      }
      (*(code *)pNVar9->SetNeighborhoodVar)
                ((this->fFilename).fChars + *(short *)&pNVar9->GetNeighborhoodVar + -0xc,*ppFVar10);
      pFVar2 = *ppFVar10;
      ppFVar10 = ppFVar10 + 1;
      pFVar3 = (pFVar2->field0_0x0).__vtable;
      (*(code *)pFVar3->GetFunds)
                ((int)&(pFVar2->field0_0x0).__vtable + (int)*(short *)&pFVar3->SetCreationOrder,
                 pFile,version);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      if (ppFVar10 == (this->fFamilies).finish) break;
      pFVar2 = *ppFVar10;
    }
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pObjectFolder->__vtable[1].GetSelectorByBehavior)
            ((int)&_5Globs_pObjectFolder->__vtable +
             (int)*(short *)&_5Globs_pObjectFolder->__vtable[1].GetSelectorByGUID,pFile);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pObjectFolder->__vtable->GetAnimRefByName)
            ((int)&_5Globs_pObjectFolder->__vtable +
             (int)*(short *)&_5Globs_pObjectFolder->__vtable->GetSndEventByName,pFile);
  return iVar5;
}

void NeighborhoodImpl::GetDirectory(StringBuffer *path) {
  ExtractDirectory__FRC12StringBufferR12StringBuffer(&(this->fFilename).field0_0x0,path);
  return;
}

void NeighborhoodImpl::DoStream(ReconBuffer *r, SInt32 version) {
	ReconBuffer *this;
	EGlobal *pGlobal;
	ReconBuffer *this;
	
  uchar uVar1;
  Neighborhood__vtable *pNVar2;
  EGlobal *pEVar3;
  UnlockedRecon *pUVar4;
  
  Recon16__11ReconBufferPsi(r,this->fVars,0x10);
  pEVar3 = _5Globs_pEORGlobals;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
                    /* end of inlined section */
  if (r->fMode == kReading) {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    if (this->fVars[1] < 3) {
      uVar1 = (_5Globs_pEORGlobals->Cheats).TutorialStage;
    }
    else {
      pNVar2 = (this->field0_0x0).__vtable;
      (*(code *)pNVar2->AddNewCharacter)
                ((this->fFilename).fChars + *(short *)&pNVar2->RemoveFromFamily + -0xc,1,0);
      uVar1 = (pEVar3->Cheats).TutorialStage;
    }
    if (uVar1 != 0xff) {
      pNVar2 = (this->field0_0x0).__vtable;
      (*(code *)pNVar2->AddNewCharacter)
                ((this->fFilename).fChars + *(short *)&pNVar2->RemoveFromFamily + -0xc,1,
                 (pEVar3->Cheats).TutorialStage);
    }
    if ((pEVar3->Cheats).TutorialHouseNum != 0xff) {
      pNVar2 = (this->field0_0x0).__vtable;
      (*(code *)pNVar2->AddNewCharacter)
                ((this->fFilename).fChars + *(short *)&pNVar2->RemoveFromFamily + -0xc,2,
                 (pEVar3->Cheats).TutorialHouseNum);
    }
  }
  if (version < 0x40) {
                    /* end of inlined section */
    if (r->fMode == kReading) {
      assignDebug__13StringBuffer2PCc(&(this->fNeighborhoodName).field0_0x0,"");
      pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(this);
      Clear__13UnlockedRecon(pUVar4);
    }
  }
  else {
    ReconString__11ReconBufferR13StringBuffer2(r,&(this->fNeighborhoodName).field0_0x0);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(this);
    DoStream__13UnlockedReconP11ReconBufferi(pUVar4,r,version);
  }
  return;
}

void NeighborhoodImpl::GetHousePath(int houseNum, StringBuffer *housePath) {
	FileName buff;
	FileName path;
	
  Neighborhood__vtable *pNVar1;
  char *str;
  StackString_260_ buff;
  StackString_260_ path;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  __12StringBufferPcUi(&buff.field0_0x0,(char *)((uint)&buff | 8),0x104);
  __12StringBufferPcUi(&path.field0_0x0,path.fChars,0x104);
                    /* end of inlined section */
  pNVar1 = (this->field0_0x0).__vtable;
  (*(code *)pNVar1->UnloadHouse)
            ((this->fFilename).fChars + *(short *)&pNVar1->SaveHouse + -0xc,&path);
  str = buffer__12StringBuffer(&buff.field0_0x0);
  c_str__C12StringBuffer(&path.field0_0x0);
  sprintf(str,"%sHouses/House%02d.iff");
  copy__12StringBufferRC12StringBuffer(housePath,&buff.field0_0x0);
  return;
}

int NeighborhoodImpl::GetHouseNumberForLevel(int level) {
  return 0;
}

Neighbor* NeighborhoodImpl::FindNeighborByID(Int id) {
	unsigned int n;
	
  Neighbor **ppNVar1;
  
  if (0 < id) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    ppNVar1 = (this->fNeighbors).field0_0x0.start;
                    /* end of inlined section */
    if ((uint)id <= (uint)((int)(this->fNeighbors).field0_0x0.finish - (int)ppNVar1 >> 2)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      return ppNVar1[id + -1];
    }
  }
  return (Neighbor *)0x0;
}

Neighbor* NeighborhoodImpl::FindNeighborByGUID(SInt32 guid) {
	Neighbor **i;
	Neighbor *n;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	
  int iVar1;
  Neighbor **ppNVar2;
  Neighbor *this_00;
  Neighbor **ppNVar3;
  Neighbor *pNVar4;
  
  pNVar4 = (Neighbor *)0x0;
  if (guid != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    ppNVar3 = (this->fNeighbors).field0_0x0.start;
                    /* end of inlined section */
    pNVar4 = (Neighbor *)0x0;
    if (ppNVar3 != (this->fNeighbors).field0_0x0.finish) {
      this_00 = *ppNVar3;
      while( true ) {
        if (this_00 == (Neighbor *)0x0) {
          ppNVar2 = (this->fNeighbors).field0_0x0.finish;
        }
        else {
          iVar1 = GetGUID__8Neighbor(this_00);
          if (iVar1 == guid) {
            if (pNVar4 == (Neighbor *)0x0) {
              pNVar4 = *ppNVar3;
            }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
            ppNVar2 = (this->fNeighbors).field0_0x0.finish;
          }
          else {
            ppNVar2 = (this->fNeighbors).field0_0x0.finish;
          }
        }
                    /* end of inlined section */
        ppNVar3 = ppNVar3 + 1;
        if (ppNVar3 == ppNVar2) break;
        this_00 = *ppNVar3;
      }
    }
  }
  return pNVar4;
}

Neighbor* NeighborhoodImpl::FindNeighborByType(ObjSelector *sel) {
	Neighbor **i;
	Neighbor *n;
	
  Neighbor **ppNVar1;
  Neighbor *pNVar2;
  Neighbor **ppNVar3;
  Neighbor *pNVar4;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  ppNVar1 = (this->fNeighbors).field0_0x0.finish;
  ppNVar3 = (this->fNeighbors).field0_0x0.start;
                    /* end of inlined section */
  pNVar4 = (Neighbor *)0x0;
  if (ppNVar3 != ppNVar1) {
    pNVar2 = *ppNVar3;
    while( true ) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Neighbor.h */
                    /* end of inlined section */
      if (((pNVar2 != (Neighbor *)0x0) && (pNVar2->fSelector == sel)) && (pNVar4 == (Neighbor *)0x0)
         ) {
        pNVar4 = pNVar2;
      }
      ppNVar3 = ppNVar3 + 1;
      if (ppNVar3 == ppNVar1) break;
      pNVar2 = *ppNVar3;
    }
  }
  return pNVar4;
}

Neighbor* NeighborhoodImpl::AddNewNeighbor(ObjSelector *sel) {
	Neighbor **i;
	Int newID;
	Neighbor *n;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	unsigned int n;
	
  Neighbor **ppNVar1;
  Neighbor **ppNVar2;
  Neighbor *pNVar3;
  Neighbor **ppNVar4;
  undefined8 unaff_s0;
  int iVar5;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  Neighbor *local_60 [4];
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
  
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  pNVar3 = (Neighbor *)0x0;
  if (sel != (ObjSelector *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    ppNVar1 = (this->fNeighbors).field0_0x0.start;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    ppNVar2 = (this->fNeighbors).field0_0x0.finish;
                    /* end of inlined section */
    iVar5 = 0;
    if (ppNVar1 != ppNVar2) {
      pNVar3 = *ppNVar1;
      ppNVar4 = ppNVar1;
      while( true ) {
        if (pNVar3 == (Neighbor *)0x0) {
                    /* end of inlined section */
          iVar5 = ((int)ppNVar4 - (int)ppNVar1 >> 2) + 1;
        }
        ppNVar4 = ppNVar4 + 1;
        if (ppNVar4 == ppNVar2) break;
        pNVar3 = *ppNVar4;
      }
    }
    if (iVar5 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      ppNVar1 = (this->fNeighbors).field0_0x0.finish;
      local_60[0] = (Neighbor *)0x0;
      if (ppNVar1 == (this->fNeighbors).field0_0x0.end_of_storage) {
        insert_aux__t6vector2ZP8NeighborZt23__malloc_alloc_template1i0PP8NeighborRCP8Neighbor
                  (&(this->fNeighbors).field0_0x0,ppNVar1,local_60);
      }
      else {
        *ppNVar1 = (Neighbor *)0x0;
        (this->fNeighbors).field0_0x0.finish = (this->fNeighbors).field0_0x0.finish + 1;
      }
      iVar5 = (int)(this->fNeighbors).field0_0x0.finish - (int)(this->fNeighbors).field0_0x0.start
              >> 2;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Neighbor.h */
    pNVar3 = (Neighbor *)malloc(0x108);
    memset(pNVar3,0,0x108);
                    /* end of inlined section */
    pNVar3 = __8NeighborsP11ObjSelector(pNVar3,(ushort)iVar5,sel);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    (this->fNeighbors).field0_0x0.start[iVar5 + -1] = pNVar3;
  }
  return pNVar3;
}

static bool TestFriends(RelMatrix &r1, Int key1, RelMatrix &r2, Int key2) {
  bool bVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = (*(code *)r1->__vtable->GetValue)
                    ((int)&r1->__vtable + (int)*(short *)&r1->__vtable->RemoveArray,key2);
  if ((lVar3 < 1) ||
     (lVar3 = (*(code *)r2->__vtable->GetValue)
                        ((int)&r2->__vtable + (int)*(short *)&r2->__vtable->RemoveArray,key1),
     lVar3 < 1)) {
    bVar1 = false;
  }
  else {
    iVar2 = (*(code *)r1->__vtable[1].RelMatrix)
                      ((int)&r1->__vtable + (int)*(short *)(r1->__vtable + 1),key2,0);
    if (iVar2 < gFriendshipThreshold) {
      bVar1 = false;
    }
    else {
      iVar2 = (*(code *)r2->__vtable[1].RelMatrix)
                        ((int)&r2->__vtable + (int)*(short *)(r2->__vtable + 1),key1,0);
      bVar1 = gFriendshipThreshold <= iVar2;
    }
  }
  return bVar1;
}

void NeighborhoodImpl::LoadPersistentData(cXPerson *person) {
	Neighbor *n;
	Neighbor *this;
	Neighbor *this;
	int iNumFields;
	int i;
	Neighbor *this;
	
  cXObject__136_1996__vtable *pcVar1;
  int iVar2;
  ObjSelector *pOVar3;
  Neighbor *pNVar4;
  int iVar5;
  PersDataPair *pPVar6;
  cXPerson__136_2096__vtable *pcVar7;
  int iIndex;
  
  pcVar1 = person->_vb1996->__vtable;
  pOVar3 = (ObjSelector *)
           (*(code *)pcVar1[1].SetLevel)
                     ((int)&person->_vb1996->_vb1933 + (int)*(short *)&pcVar1[1].GetTreeID);
  pNVar4 = FindNeighborByType__16NeighborhoodImplP11ObjSelector(this,pOVar3);
  if (pNVar4 == (Neighbor *)0x0) {
    pcVar1 = person->_vb1996->__vtable;
    pOVar3 = (ObjSelector *)
             (*(code *)pcVar1[1].SetLevel)
                       ((int)&person->_vb1996->_vb1933 + (int)*(short *)&pcVar1[1].GetTreeID);
    pNVar4 = AddNewNeighbor__16NeighborhoodImplP11ObjSelector(this,pOVar3);
    (**(code **)&person->__vtable->field_0x14c)
              ((int)&person->_vb1996 + (int)*(short *)&person->__vtable->field_0x148,pNVar4->fID);
  }
  else {
    (**(code **)&person->__vtable->field_0x14c)
              ((int)&person->_vb1996 + (int)*(short *)&person->__vtable->field_0x148,pNVar4->fID);
    if (pNVar4->fPersonDataVersion == 0) {
      pcVar7 = person->__vtable;
    }
    else {
      iIndex = 0;
      iVar5 = GetNumPersistentDataFields__8Neighbor();
      if (0 < iVar5) {
        do {
          pPVar6 = GetPersistentDataFieldsByIndex__8Neighbori(iIndex);
          if (((pPVar6->fVersionAdded <= pNVar4->fPersonDataVersion) &&
              (iVar2 = pPVar6->fDataIndex, iVar2 != 0x3a)) && (iVar2 != 0x41)) {
            (*(code *)person->__vtable->GetRecordMaxDuration)
                      ((int)&person->_vb1996 + (int)*(short *)&person->__vtable->SetRecordDuration,
                       iVar2,pNVar4->fData[iVar2]);
          }
          iIndex = iIndex + 1;
        } while (iIndex < iVar5);
      }
      pcVar7 = person->__vtable;
    }
    (*(code *)pcVar7->GetRecordMaxDuration)
              ((int)&person->_vb1996 + (int)*(short *)&pcVar7->SetRecordDuration,0x3d,
               pNVar4->fData[0x3d]);
  }
  return;
}

void NeighborhoodImpl::RemoveNeighbor(Neighbor *n) {
	Int id;
	Neighbor **i;
	Neighbor *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	
  ushort uVar1;
  RelMatrix__vtable *pRVar2;
  Neighbor *pNVar3;
  Neighbor **ppNVar4;
  
  uVar1 = n->fID;
  GlobalDispatch__Fsi(0xfa,(int)(short)uVar1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  (this->fNeighbors).field0_0x0.start[(short)uVar1 + -1] = (Neighbor *)0x0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  ppNVar4 = (this->fNeighbors).field0_0x0.start;
                    /* end of inlined section */
  if (ppNVar4 != (this->fNeighbors).field0_0x0.finish) {
    pNVar3 = *ppNVar4;
    while( true ) {
      if (pNVar3 != (Neighbor *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Neighbor.h */
                    /* end of inlined section */
        pRVar2 = pNVar3->fRelations->__vtable;
        (*(code *)pRVar2->GetNthKey)
                  ((int)&pNVar3->fRelations->__vtable + (int)*(short *)&pRVar2->CountKeys,uVar1);
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      ppNVar4 = ppNVar4 + 1;
      if (ppNVar4 == (this->fNeighbors).field0_0x0.finish) break;
      pNVar3 = *ppNVar4;
    }
  }
  if (n != (Neighbor *)0x0) {
    ___8Neighbor(n,3);
  }
  return;
}

void NeighborhoodImpl::SavePersistentData(cXPerson *person) {
	Neighbor *n;
	int iNumFields;
	int i;
	
  short sVar1;
  Neighborhood__vtable *pNVar2;
  undefined2 uVar3;
  int iVar4;
  PersDataPair *pPVar5;
  undefined8 uVar6;
  long lVar7;
  int iIndex;
  
  pNVar2 = (this->field0_0x0).__vtable;
  sVar1 = *(short *)&pNVar2->GetShowTutorialArrow;
  uVar6 = (**(code **)&person->__vtable->field_0x144)
                    ((int)&person->_vb1996 + (int)*(short *)&person->__vtable->field_0x140);
  lVar7 = (*(code *)pNVar2->SetShowTutorialArrow)((this->fFilename).fChars + sVar1 + -0xc,uVar6);
  if (lVar7 != 0) {
    iIndex = 0;
    iVar4 = GetLatestPersDataVersion__8Neighbor();
    *(int *)((int)lVar7 + 0x104) = iVar4;
    iVar4 = GetNumPersistentDataFields__8Neighbor();
    if (0 < iVar4) {
      do {
        pPVar5 = GetPersistentDataFieldsByIndex__8Neighbori(iIndex);
        iIndex = iIndex + 1;
        uVar3 = (*(code *)person->__vtable->GetRecordDuration)
                          ((int)&person->_vb1996 + (int)*(short *)&person->__vtable->GetRecording,
                           pPVar5->fDataIndex);
        *(undefined2 *)((int)lVar7 + 100 + pPVar5->fDataIndex * 2) = uVar3;
      } while (iIndex < iVar4);
    }
  }
  return;
}

ObjSelector* NeighborhoodImpl::GetNeighborSelector(Int neighborID) {
	Neighbor *n;
	Neighbor *this;
	
  Neighborhood__vtable *pNVar1;
  ObjSelector *pOVar2;
  long lVar3;
  
  pNVar1 = (this->field0_0x0).__vtable;
  lVar3 = (*(code *)pNVar1->SetShowTutorialArrow)
                    ((this->fFilename).fChars + *(short *)&pNVar1->GetShowTutorialArrow + -0xc,
                     neighborID);
  if (lVar3 == 0) {
    pOVar2 = (ObjSelector *)0x0;
  }
  else {
    pOVar2 = *(ObjSelector **)((int)lVar3 + 8);
  }
  return pOVar2;
}

SInt16 NeighborhoodImpl::GetNextNeighborID(SInt16 startID) {
  int iVar1;
  uint uVar2;
  Neighbor **ppNVar3;
  uint uVar4;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  ppNVar3 = (this->fNeighbors).field0_0x0.start;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  uVar2 = (uint)(short)startID;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  uVar4 = (int)(this->fNeighbors).field0_0x0.finish - (int)ppNVar3 >> 2;
                    /* end of inlined section */
  if (uVar2 < uVar4) {
    iVar1 = uVar2 * 0x10000;
    ppNVar3 = ppNVar3 + uVar2;
    do {
      iVar1 = iVar1 + 0x10000;
      if (*ppNVar3 != (Neighbor *)0x0) {
        return (ushort)((uint)iVar1 >> 0x10);
      }
      ppNVar3 = ppNVar3 + 1;
    } while ((uint)(iVar1 >> 0x10) < uVar4);
  }
  return 0;
}

SInt16 NeighborhoodImpl::GetNeighborData(SInt16 neighborID, SInt16 dataIndex, SInt16 **ref) {
	Neighbor *n;
	SInt16 *stackTemp;
	cXPerson *p;
	int iNumPeople;
	int i;
	cXPerson *t;
	Neighbor *this;
	Family *f;
	Neighbor *this;
	Neighbor *this;
	FamilyImpl **i;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	int fnum;
	Family *f;
	Neighbor *this;
	int fnum;
	Family *f;
	Neighbor *this;
	int fnum;
	Family *f;
	Neighbor *this;
	
  short sVar1;
  Neighborhood__vtable *pNVar2;
  int iVar3;
  Family__vtable *pFVar4;
  ushort uVar5;
  ObjSelector *pOVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  FamilyImpl *pFVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  FamilyImpl **ppFVar14;
  undefined8 unaff_s2;
  Neighbor *this_00;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  ushort *stackTemp;
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
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  pNVar2 = (this->field0_0x0).__vtable;
  lVar11 = (*(code *)pNVar2->SetShowTutorialArrow)
                     ((this->fFilename).fChars + *(short *)&pNVar2->GetShowTutorialArrow + -0xc,
                      neighborID);
  if (ref == (ushort **)0x0) {
    ref = &stackTemp;
  }
  *ref = (ushort *)0x0;
  if (lVar11 == 0) {
    return 0;
  }
  this_00 = (Neighbor *)lVar11;
  switch(dataIndex) {
  case 0:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    iVar7 = 0;
    iVar8 = (*(code *)_5Globs_pObjectModule->__vtable->DisableBuyAndBuild)
                      ((int)&_5Globs_pObjectModule->__vtable +
                       (int)*(short *)&_5Globs_pObjectModule->__vtable->FillInObjectStats);
    lVar11 = 0;
    if (0 < iVar8) {
      do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
        lVar11 = (*(code *)_5Globs_pObjectModule->__vtable->ComputeStats)
                           ((int)&_5Globs_pObjectModule->__vtable +
                            (int)*(short *)&_5Globs_pObjectModule->__vtable->ShowTutorialInfo,iVar7)
        ;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Neighbor.h */
                    /* end of inlined section */
        if ((lVar11 != 0) &&
           (iVar3 = *(int *)(*(int *)lVar11 + 4),
           pOVar6 = (ObjSelector *)
                    (**(code **)(iVar3 + 0x2ec))(*(int *)lVar11 + (int)*(short *)(iVar3 + 0x2e8)),
           pOVar6 == this_00->fSelector)) break;
        iVar7 = iVar7 + 1;
        lVar11 = 0;
      } while (iVar7 < iVar8);
    }
    uVar5 = 0;
    if (lVar11 != 0) {
      iVar8 = *(int *)(*(int *)lVar11 + 4);
      uVar5 = (**(code **)(iVar8 + 700))(*(int *)lVar11 + (int)*(short *)(iVar8 + 0x2b8));
    }
    break;
  case 1:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    lVar11 = (*(code *)_5Globs_pHouse->__vtable->EnterLiveMode)
                       ((int)&_5Globs_pHouse->__vtable +
                        (int)*(short *)&_5Globs_pHouse->__vtable->DoStream);
    if (lVar11 == 0) {
      uVar5 = 0;
    }
    else {
      iVar8 = *(int *)lVar11;
      sVar1 = *(short *)(iVar8 + 0x38);
      iVar7 = GetGUID__11ObjSelector(this_00->fSelector);
      uVar5 = (**(code **)(iVar8 + 0x3c))((int)(int *)lVar11 + (int)sVar1,iVar7);
    }
    break;
  case 2:
                    /* end of inlined section */
    uVar5 = this_00->fData[0x3a];
    break;
  case 5:
    pNVar2 = (this->field0_0x0).__vtable;
    uVar5 = (*(code *)pNVar2->GetNumNeighborHouses)
                      ((this->fFilename).fChars +
                       *(short *)&pNVar2->UpdateInstanceVisitorTypes + -0xc,lVar11);
    break;
  case 6:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    ppFVar14 = (this->fFamilies).start;
                    /* end of inlined section */
    if (ppFVar14 != (this->fFamilies).finish) {
      pFVar10 = *ppFVar14;
      while( true ) {
        pFVar4 = (pFVar10->field0_0x0).__vtable;
        sVar1 = *(short *)&pFVar4->GetNumber;
        iVar8 = GetGUID__8Neighbor(this_00);
        lVar11 = (*(code *)pFVar4->GetHouseNumber)
                           ((int)&(pFVar10->field0_0x0).__vtable + (int)sVar1,iVar8);
        if (lVar11 != 0) break;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
        ppFVar14 = ppFVar14 + 1;
        if (ppFVar14 == (this->fFamilies).finish) {
          return 0;
        }
        pFVar10 = *ppFVar14;
      }
      pFVar10 = *ppFVar14;
      pFVar4 = (pFVar10->field0_0x0).__vtable;
      sVar1 = *(short *)&pFVar4->SetNewHouse;
      pcVar9 = (code *)pFVar4->GetNewHouse;
      goto LAB_0024df34;
    }
  default:
    uVar5 = 0;
    break;
  case 7:
                    /* end of inlined section */
    if (this_00->fData[0x3d] == 0) {
      return 0;
    }
    pNVar2 = (this->field0_0x0).__vtable;
    lVar11 = (*(code *)pNVar2[1].GetHouseNumberForLevel)
                       ((this->fFilename).fChars + *(short *)&pNVar2[1].Save + -0xc);
    if (lVar11 == 0) {
      return 0;
    }
    piVar13 = (int *)lVar11;
    lVar12 = (**(code **)(*piVar13 + 0x7c))((int)piVar13 + (int)*(short *)(*piVar13 + 0x78));
    if (lVar12 == 0) {
      return 0;
    }
    sVar1 = *(short *)(*piVar13 + 0xd8);
    pcVar9 = *(code **)(*piVar13 + 0xdc);
    goto LAB_0024dedc;
  case 8:
                    /* end of inlined section */
    if (this_00->fData[0x3d] == 0) {
      return 0;
    }
    pNVar2 = (this->field0_0x0).__vtable;
    lVar11 = (*(code *)pNVar2[1].GetHouseNumberForLevel)
                       ((this->fFilename).fChars + *(short *)&pNVar2[1].Save + -0xc);
    if (lVar11 == 0) {
      return 0;
    }
    piVar13 = (int *)lVar11;
    lVar12 = (**(code **)(*piVar13 + 0x7c))((int)piVar13 + (int)*(short *)(*piVar13 + 0x78));
    if (lVar12 == 0) {
      return 0;
    }
    sVar1 = *(short *)(*piVar13 + 0xe8);
    pcVar9 = *(code **)(*piVar13 + 0xec);
LAB_0024dedc:
    lVar11 = (*pcVar9)((int)lVar11 + (int)sVar1);
    uVar5 = (ushort)(lVar11 != 0);
    break;
  case 9:
                    /* end of inlined section */
    if (this_00->fData[0x3d] == 0) {
      return 0;
    }
    pNVar2 = (this->field0_0x0).__vtable;
    pFVar10 = (FamilyImpl *)
              (*(code *)pNVar2[1].GetHouseNumberForLevel)
                        ((this->fFilename).fChars + *(short *)&pNVar2[1].Save + -0xc);
    if (pFVar10 == (FamilyImpl *)0x0) {
      return 0;
    }
    pFVar4 = (pFVar10->field0_0x0).__vtable;
    sVar1 = *(short *)&pFVar4[1].SetName;
    pcVar9 = (code *)pFVar4[1].GetExportName;
LAB_0024df34:
    uVar5 = (*pcVar9)((int)&(pFVar10->field0_0x0).__vtable + (int)sVar1);
  }
  return uVar5;
}

Family* NeighborhoodImpl::GetFamily(Int number) {
	FamilyImpl **i;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	
  Family__vtable *pFVar1;
  int iVar2;
  FamilyImpl *pFVar3;
  FamilyImpl **ppFVar4;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  ppFVar4 = (this->fFamilies).start;
                    /* end of inlined section */
  if (ppFVar4 == (this->fFamilies).finish) {
LAB_0024dfd0:
    pFVar3 = (FamilyImpl *)0x0;
  }
  else {
    pFVar3 = *ppFVar4;
    while (pFVar1 = (pFVar3->field0_0x0).__vtable,
          iVar2 = (*(code *)pFVar1->GetHasBaby)
                            ((int)&(pFVar3->field0_0x0).__vtable +
                             (int)*(short *)&pFVar1->SetHasBaby), iVar2 != number) {
                    /* end of inlined section */
      ppFVar4 = ppFVar4 + 1;
      if (ppFVar4 == (this->fFamilies).finish) goto LAB_0024dfd0;
      pFVar3 = *ppFVar4;
    }
    pFVar3 = *ppFVar4;
  }
  return &pFVar3->field0_0x0;
}

Family* NeighborhoodImpl::GetFamilyInHouse(Int houseNumber) {
	FamilyImpl **i;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	
  Family__vtable *pFVar1;
  int iVar2;
  FamilyImpl *pFVar3;
  FamilyImpl **ppFVar4;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  ppFVar4 = (this->fFamilies).start;
                    /* end of inlined section */
  if (ppFVar4 == (this->fFamilies).finish) {
LAB_0024e050:
    pFVar3 = (FamilyImpl *)0x0;
  }
  else {
    pFVar3 = *ppFVar4;
    while (pFVar1 = (pFVar3->field0_0x0).__vtable,
          iVar2 = (*(code *)pFVar1->GetNewHouse)
                            ((int)&(pFVar3->field0_0x0).__vtable +
                             (int)*(short *)&pFVar1->SetNewHouse), iVar2 != houseNumber) {
                    /* end of inlined section */
      ppFVar4 = ppFVar4 + 1;
      if (ppFVar4 == (this->fFamilies).finish) goto LAB_0024e050;
      pFVar3 = *ppFVar4;
    }
    pFVar3 = *ppFVar4;
  }
  return &pFVar3->field0_0x0;
}

int NeighborhoodImpl::GetNumFamilies() {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  return (int)(this->fFamilies).finish - (int)(this->fFamilies).start >> 2;
}

Family* NeighborhoodImpl::GetFamilyByIndex(int iIndex) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  return &(this->fFamilies).start[iIndex]->field0_0x0;
}

int NeighborhoodImpl::GetFamilyIndex(Family *f) {
	unsigned int i;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	
  Family *pFVar1;
  Neighborhood__vtable *pNVar2;
  uint uVar3;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  uVar3 = 0;
  if ((int)(this->fFamilies).finish - (int)(this->fFamilies).start >> 2 == 0) {
LAB_0024e128:
    uVar3 = 0xffffffff;
  }
  else {
    pNVar2 = (this->field0_0x0).__vtable;
    while (pFVar1 = (Family *)
                    (*(code *)pNVar2[1].GetHouseFileInfo)
                              ((this->fFilename).fChars + *(short *)&pNVar2[1].GetHouseNumber + -0xc
                               ,uVar3), pFVar1 != f) {
                    /* end of inlined section */
      uVar3 = uVar3 + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      if ((uint)((int)(this->fFamilies).finish - (int)(this->fFamilies).start >> 2) <= uVar3)
      goto LAB_0024e128;
      pNVar2 = (this->field0_0x0).__vtable;
    }
  }
  return uVar3;
}

Family* NeighborhoodImpl::MakeNewFamily() {
	FamilyImpl *f;
	Int unusedNumber;
	Int highestOrder;
	FamilyImpl **fi;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	
  Neighborhood__vtable *pNVar1;
  Family__vtable *pFVar2;
  int iVar3;
  int iVar4;
  FamilyImpl **ppFVar5;
  FamilyImpl *pFVar6;
  long lVar7;
  uint n;
  FamilyImpl **ppFVar8;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  int iVar9;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  FamilyImpl *f;
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
  
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  iVar9 = 1;
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  while( true ) {
    pNVar1 = (this->field0_0x0).__vtable;
    lVar7 = (*(code *)pNVar1[1].GetHouseNumberForLevel)
                      ((this->fFilename).fChars + *(short *)&pNVar1[1].Save + -0xc,iVar9);
    if (lVar7 == 0) break;
    iVar9 = iVar9 + 1;
  }
  f = (FamilyImpl *)0x0;
  if (iVar9 < 0x8000) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    ppFVar8 = (this->fFamilies).start;
                    /* end of inlined section */
    iVar4 = 1;
    if (ppFVar8 != (this->fFamilies).finish) {
      pFVar6 = *ppFVar8;
      while( true ) {
        pFVar2 = (pFVar6->field0_0x0).__vtable;
        iVar3 = (*(code *)pFVar2->GetHasExportedHTMLBefore)
                          ((int)&(pFVar6->field0_0x0).__vtable +
                           (int)*(short *)&pFVar2->SetHasExportedHTMLBefore);
        if (iVar3 < iVar4) {
          ppFVar5 = (this->fFamilies).finish;
        }
        else {
          pFVar2 = ((*ppFVar8)->field0_0x0).__vtable;
          iVar4 = (*(code *)pFVar2->GetHasExportedHTMLBefore)
                            ((int)&((*ppFVar8)->field0_0x0).__vtable +
                             (int)*(short *)&pFVar2->SetHasExportedHTMLBefore);
          iVar4 = iVar4 + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
          ppFVar5 = (this->fFamilies).finish;
        }
                    /* end of inlined section */
        ppFVar8 = ppFVar8 + 1;
        if (ppFVar8 == ppFVar5) break;
        pFVar6 = *ppFVar8;
      }
    }
    pFVar6 = (FamilyImpl *)__builtin_new(0x34);
    f = __10FamilyImpli(pFVar6,iVar9);
    pFVar2 = (f->field0_0x0).__vtable;
    (*(code *)pFVar2[1].Family)((int)&(f->field0_0x0).__vtable + (int)*(short *)(pFVar2 + 1),iVar4);
    pFVar2 = (f->field0_0x0).__vtable;
    (*(code *)pFVar2[1].GetMemberByGUID)
              ((int)&(f->field0_0x0).__vtable + (int)*(short *)&pFVar2[1].GetIndexedMember,
               gMoneyForNewFamily);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    ppFVar8 = (this->fFamilies).finish;
    if (ppFVar8 == (this->fFamilies).end_of_storage) {
      insert_aux__t6vector2ZP10FamilyImplZt23__malloc_alloc_template1i0PP10FamilyImplRCP10FamilyImpl
                (&this->fFamilies,ppFVar8,&f);
    }
    else {
      *ppFVar8 = f;
      (this->fFamilies).finish = (this->fFamilies).finish + 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    ppFVar8 = (this->fFamilies).finish;
    ppFVar5 = (this->fFamilies).start;
    n = (int)ppFVar8 - (int)ppFVar5 >> 2;
                    /* end of inlined section */
    if (1 < n) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      iVar9 = __lg__H1Zi_X01_X01(n);
      __introsort_loop__H4ZPP10FamilyImplZP10FamilyImplZiZPFRCP6FamilyRCP6Family_b_X01X01PX11X21X31_v
                (ppFVar5,ppFVar8,0,(undefined1 *)(iVar9 << 1));
      __final_insertion_sort__H2ZPP10FamilyImplZPFRCP6FamilyRCP6Family_b_X01X01X11_v
                (ppFVar5,ppFVar8,SortFamilyByCreation__FRCP6FamilyT0);
                    /* end of inlined section */
    }
  }
  return &f->field0_0x0;
}

ErrType NeighborhoodImpl::RemoveFamily(Family *f) {
	FamilyImpl **i;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	FamilyImpl **position;
	FamilyImpl **result;
	FamilyImpl **result;
	FamilyImpl **result;
	FamilyImpl **first;
	ptrdiff_t n;
	
  FamilyImpl *pFVar1;
  FamilyImpl **ppFVar2;
  FamilyImpl **ppFVar3;
  long lVar4;
  FamilyImpl **ppFVar5;
  int iVar6;
  
  lVar4 = (*(code *)f->__vtable->GetHasBaby)
                    ((int)&f->__vtable + (int)*(short *)&f->__vtable->SetHasBaby);
  iVar6 = -1;
  if (lVar4 != 0) {
    lVar4 = (*(code *)f->__vtable->GetNewHouse)
                      ((int)&f->__vtable + (int)*(short *)&f->__vtable->SetNewHouse);
    iVar6 = -1;
    if (lVar4 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      ppFVar5 = (this->fFamilies).start;
                    /* end of inlined section */
      if (ppFVar5 == (this->fFamilies).finish) {
LAB_0024e3dc:
        iVar6 = -1;
      }
      else {
        pFVar1 = *ppFVar5;
        while (pFVar1 != (FamilyImpl *)f) {
                    /* end of inlined section */
          ppFVar5 = ppFVar5 + 1;
          if (ppFVar5 == (this->fFamilies).finish) goto LAB_0024e3dc;
          pFVar1 = *ppFVar5;
        }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        ppFVar2 = (this->fFamilies).finish;
        ppFVar3 = ppFVar5 + 1;
        if (ppFVar3 != ppFVar2) {
          for (iVar6 = (int)ppFVar2 - (int)ppFVar3 >> 2; 0 < iVar6; iVar6 = iVar6 + -1) {
            pFVar1 = *ppFVar3;
            ppFVar3 = ppFVar3 + 1;
            *ppFVar5 = pFVar1;
            ppFVar5 = ppFVar5 + 1;
          }
        }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
        (this->fFamilies).finish = (this->fFamilies).finish + -1;
        DestroyInstance__6FamilyP6Family(f);
        iVar6 = 0;
      }
    }
  }
  return iVar6;
}

ErrType NeighborhoodImpl::AddToFamily(Neighbor *n, Family *_f) {
	FamilyImpl *f;
	cXPerson *person;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	
  short sVar1;
  Neighborhood__vtable *pNVar2;
  ObjectModule__vtable *pOVar3;
  ObjectModule__vtable **ppOVar4;
  undefined2 uVar5;
  ushort uVar6;
  int iVar7;
  long lVar8;
  Family__vtable *pFVar9;
  int iVar10;
  
  pFVar9 = _f->__vtable;
  sVar1 = *(short *)&pFVar9->GetNumber;
  iVar7 = GetGUID__8Neighbor(n);
  lVar8 = (*(code *)pFVar9->GetHouseNumber)((int)&_f->__vtable + (int)sVar1,iVar7);
  iVar7 = -1;
  if (lVar8 == 0) {
                    /* end of inlined section */
                    /* end of inlined section */
    iVar7 = GetGUID__8Neighbor(n);
    AddMember__10FamilyImpli((FamilyImpl *)_f,iVar7);
    pNVar2 = (this->field0_0x0).__vtable;
    (*(code *)pNVar2->CountHouses)
              ((this->fFilename).fChars + *(short *)&pNVar2->DeleteCharacter + -0xc);
    pFVar9 = _f->__vtable;
    sVar1 = *(short *)&pFVar9->DoStream;
    iVar7 = GetGUID__8Neighbor(n);
    lVar8 = (*(code *)pFVar9->GetName)((int)&_f->__vtable + (int)sVar1,iVar7);
    if (lVar8 == 0) {
      iVar7 = -1;
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      pOVar3 = _5Globs_pObjectModule->__vtable;
      sVar1 = *(short *)&pOVar3->DoReconObject;
      ppOVar4 = &_5Globs_pObjectModule->__vtable;
      iVar7 = GetGUID__8Neighbor(n);
      lVar8 = (*(code *)pOVar3->DoReconPerson)((int)ppOVar4 + (int)sVar1,iVar7);
      pFVar9 = _f->__vtable;
      if (lVar8 != 0) {
        iVar10 = (int)lVar8;
        iVar7 = *(int *)(iVar10 + 4);
        sVar1 = *(short *)(iVar7 + 0xe8);
        uVar5 = (*(code *)pFVar9->GetHasBaby)
                          ((int)&_f->__vtable + (int)*(short *)&pFVar9->SetHasBaby);
        (**(code **)(iVar7 + 0xec))(iVar10 + sVar1,0x3d,uVar5);
        (**(code **)(*(int *)(iVar10 + 4) + 0xec))
                  (iVar10 + *(short *)(*(int *)(iVar10 + 4) + 0xe8),0x43,0);
                    /* end of inlined section */
        pFVar9 = _f->__vtable;
      }
      uVar6 = (*(code *)pFVar9->GetHasBaby)((int)&_f->__vtable + (int)*(short *)&pFVar9->SetHasBaby)
      ;
      n->fData[0x3d] = uVar6;
      n->fData[0x43] = 0;
      _f[8].__vtable = (Family__vtable *)&pGifTag1;
      (*(code *)_f->__vtable[1].GetHasBaby)
                ((int)&_f->__vtable + (int)*(short *)&_f->__vtable[1].SetHasBaby,1);
      GlobalDispatch__Fsi(0xe7,0);
      iVar7 = 0;
    }
  }
  return iVar7;
}

ErrType NeighborhoodImpl::RemoveFromFamily(Neighbor *n) {
	Int familyNumber;
	FamilyImpl *f;
	cXPerson *person;
	Neighbor *this;
	Neighbor *this;
	
  short sVar1;
  Neighborhood__vtable *pNVar2;
  Family__vtable *pFVar3;
  ObjectModule__vtable *pOVar4;
  ObjectModule__vtable **ppOVar5;
  int iVar6;
  long lVar7;
  FamilyImpl *this_00;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Neighbor.h */
                    /* end of inlined section */
  if ((n->fData[0x3d] != 0) &&
     (pNVar2 = (this->field0_0x0).__vtable,
     lVar7 = (*(code *)pNVar2[1].GetHouseNumberForLevel)
                       ((this->fFilename).fChars + *(short *)&pNVar2[1].Save + -0xc), lVar7 != 0)) {
    this_00 = (FamilyImpl *)lVar7;
    pFVar3 = (this_00->field0_0x0).__vtable;
    sVar1 = *(short *)&pFVar3->DoStream;
    iVar6 = GetGUID__8Neighbor(n);
    lVar7 = (*(code *)pFVar3->GetName)((int)&(this_00->field0_0x0).__vtable + (int)sVar1,iVar6);
    if (lVar7 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      pOVar4 = _5Globs_pObjectModule->__vtable;
      sVar1 = *(short *)&pOVar4->DoReconObject;
      ppOVar5 = &_5Globs_pObjectModule->__vtable;
      iVar6 = GetGUID__8Neighbor(n);
      lVar7 = (*(code *)pOVar4->DoReconPerson)((int)ppOVar5 + (int)sVar1,iVar6);
      if (lVar7 != 0) {
        iVar6 = *(int *)((int)lVar7 + 4);
        (**(code **)(iVar6 + 0xec))((int)lVar7 + (int)*(short *)(iVar6 + 0xe8),0x3d,0);
      }
                    /* end of inlined section */
      n->fData[0x3d] = 0;
      iVar6 = GetGUID__8Neighbor(n);
      RemoveMember__10FamilyImpli(this_00,iVar6);
      pNVar2 = (this->field0_0x0).__vtable;
      (*(code *)pNVar2->CountHouses)
                ((this->fFilename).fChars + *(short *)&pNVar2->DeleteCharacter + -0xc);
      pFVar3 = (this_00->field0_0x0).__vtable;
      *(undefined4 *)&this_00->fFriendCountDirty = 1;
      (*(code *)pFVar3[1].GetHasBaby)
                ((int)&(this_00->field0_0x0).__vtable + (int)*(short *)&pFVar3[1].SetHasBaby,1);
      GlobalDispatch__Fsi(0xe7,0);
      return 0;
    }
  }
  return -1;
}

ErrType NeighborhoodImpl::AddNewCharacter(Neighbor **outNewNeighbor) {
	Neighbor *newNeighbor;
	
  ObjSelector *sel;
  Neighbor *pNVar1;
  int iVar2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  sel = (ObjSelector *)
        (*(code *)_5Globs_pObjectFolder->__vtable->ApplyBCONTuningForFile)
                  ((int)&_5Globs_pObjectFolder->__vtable +
                   (int)*(short *)&_5Globs_pObjectFolder->__vtable->GetCurrentPerformanceCost);
  pNVar1 = AddNewNeighbor__16NeighborhoodImplP11ObjSelector(this,sel);
  if (pNVar1 == (Neighbor *)0x0) {
    iVar2 = -1;
  }
  else {
    *outNewNeighbor = pNVar1;
    iVar2 = 0;
  }
  return iVar2;
}

ErrType NeighborhoodImpl::DeleteCharacter(Neighbor *n) {
	ObjSelector *sel;
	SInt32 guid;
	ObjectModule *om;
	cXObject *obj;
	FamilyImpl **f;
	Neighbor *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	
  ObjSelector *this_00;
  FamilyImpl *pFVar1;
  Family__vtable *pFVar2;
  ObjectModule *pOVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ObjectModule__vtable *pOVar7;
  FamilyImpl **ppFVar8;
  int iVar9;
  
  bVar4 = IsCharacter__8Neighbor(n);
  if (bVar4) {
    this_00 = n->fSelector;
                    /* end of inlined section */
    iVar5 = GetGUID__11ObjSelector(this_00);
    pOVar3 = _5Globs_pObjectModule;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    ppFVar8 = (this->fFamilies).start;
                    /* end of inlined section */
    if (ppFVar8 == (this->fFamilies).finish) goto LAB_0024e844;
    pFVar1 = *ppFVar8;
    while( true ) {
      pFVar2 = (pFVar1->field0_0x0).__vtable;
      lVar6 = (*(code *)pFVar2->GetHouseNumber)
                        ((int)&(pFVar1->field0_0x0).__vtable + (int)*(short *)&pFVar2->GetNumber,
                         iVar5);
      ppFVar8 = ppFVar8 + 1;
      if (lVar6 != 0) break;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      if (ppFVar8 == (this->fFamilies).finish) {
        pOVar7 = pOVar3->__vtable;
        while (lVar6 = (*(code *)pOVar7->DoStream)
                                 ((int)&pOVar3->__vtable + (int)*(short *)&pOVar7->OffsetWorld,iVar5
                                 ), lVar6 != 0) {
          iVar9 = (int)lVar6;
          (**(code **)(*(int *)(iVar9 + 4) + 700))(iVar9 + *(short *)(*(int *)(iVar9 + 4) + 0x2b8));
          (**(code **)(*(int *)(iVar9 + 4) + 0xc))(iVar9 + *(short *)(*(int *)(iVar9 + 4) + 8));
LAB_0024e844:
          pOVar7 = pOVar3->__vtable;
        }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
        (*(code *)_5Globs_pObjectFolder->__vtable->CalcPerformanceCost)
                  ((int)&_5Globs_pObjectFolder->__vtable +
                   (int)*(short *)&_5Globs_pObjectFolder->__vtable->GetBaseMemoryCost,this_00);
        RemoveNeighbor__16NeighborhoodImplP8Neighbor(this,n);
        return 0;
      }
      pFVar1 = *ppFVar8;
    }
  }
  return -1;
}

Int NeighborhoodImpl::CountHouses() {
  return 0xb;
}

Int NeighborhoodImpl::GetNumCharacters() {
	int charCount;
	Neighbor **i;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	
  bool bVar1;
  Neighbor **ppNVar2;
  Neighbor *this_00;
  Neighbor **ppNVar3;
  int iVar4;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  ppNVar3 = (this->fNeighbors).field0_0x0.start;
                    /* end of inlined section */
  iVar4 = 0;
  if (ppNVar3 != (this->fNeighbors).field0_0x0.finish) {
    this_00 = *ppNVar3;
    while( true ) {
      if (this_00 == (Neighbor *)0x0) {
        ppNVar2 = (this->fNeighbors).field0_0x0.finish;
      }
      else {
        bVar1 = IsCharacter__8Neighbor(this_00);
        if (bVar1) {
          iVar4 = iVar4 + 1;
        }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        ppNVar2 = (this->fNeighbors).field0_0x0.finish;
      }
                    /* end of inlined section */
      ppNVar3 = ppNVar3 + 1;
      if (ppNVar3 == ppNVar2) break;
      this_00 = *ppNVar3;
    }
  }
  return iVar4;
}

Int NeighborhoodImpl::GetFriendCount(Neighbor *n) {
	Int friendCnt;
	Neighbor **otherNeighbor;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	RelMatrix *matrix[2];
	int key[2];
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	
  bool bVar1;
  Neighbor **ppNVar2;
  Neighbor *this_00;
  Neighbor **ppNVar3;
  int iVar4;
  RelMatrix *matrix [2];
  int key [2];
  
  if (*(int *)&n->fFriendCountDirty != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    ppNVar3 = (this->fNeighbors).field0_0x0.start;
                    /* end of inlined section */
    iVar4 = 0;
    if (ppNVar3 != (this->fNeighbors).field0_0x0.finish) {
      this_00 = *ppNVar3;
      while( true ) {
        if (this_00 == (Neighbor *)0x0) {
          ppNVar2 = (this->fNeighbors).field0_0x0.finish;
        }
        else if (this_00 == n) {
          ppNVar2 = (this->fNeighbors).field0_0x0.finish;
        }
        else {
          bVar1 = IsCharacter__8Neighbor(this_00);
          if (bVar1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Neighbor.h */
                    /* end of inlined section */
            if ((*ppNVar3)->fData[0x3d] == 0) {
              ppNVar2 = (this->fNeighbors).field0_0x0.finish;
            }
            else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Neighbor.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Neighbor.h */
                    /* end of inlined section */
              bVar1 = TestFriends__FR9RelMatrixiT0i
                                ((*ppNVar3)->fRelations,(int)(short)(*ppNVar3)->fID,n->fRelations,
                                 (int)(short)n->fID);
              if (bVar1) {
                iVar4 = iVar4 + 1;
              }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
              ppNVar2 = (this->fNeighbors).field0_0x0.finish;
            }
          }
          else {
            ppNVar2 = (this->fNeighbors).field0_0x0.finish;
          }
        }
                    /* end of inlined section */
        ppNVar3 = ppNVar3 + 1;
        if (ppNVar3 == ppNVar2) break;
        this_00 = *ppNVar3;
      }
    }
    n->fFriendCount = iVar4;
  }
  return n->fFriendCount;
}

Int NeighborhoodImpl::GetFamilyFriendsCount(Family *_f) {
	FamilyImpl *f;
	
  Family__vtable *pFVar1;
  
  if (_f[8].__vtable == (Family__vtable *)0x0) {
    pFVar1 = _f[7].__vtable;
  }
  else {
    UpdateFamilyFriendsCount__16NeighborhoodImplP6Family(this,_f);
    pFVar1 = _f[7].__vtable;
  }
  return (int)pFVar1;
}

Int NeighborhoodImpl::GetFamilyNetWorth(Family *_f) {
	int funds;
	int houseValue;
	Int objectsValue;
	float archValue;
	
  cSimulator *pcVar1;
  int iVar2;
  int iVar3;
  Family__vtable *pFVar4;
  Family__vtable *pFVar5;
  float fVar6;
  
  pFVar4 = _f[5].__vtable;
  pFVar5 = _f[6].__vtable;
  if (this->fHouseNum != 0) {
    iVar2 = (*(code *)_f->__vtable->GetNewHouse)
                      ((int)&_f->__vtable + (int)*(short *)&_f->__vtable->SetNewHouse);
    pcVar1 = _5Globs_pSimulator;
    if (iVar2 != this->fHouseNum) {
      return (int)(&pFVar5->field_0x0 + (int)&pFVar4->field_0x0);
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    iVar2 = (*(code *)_5Globs_pSimulator->__vtable[1].GetLotValue)
                      ((int)&_5Globs_pSimulator->__vtable +
                       (int)*(short *)&_5Globs_pSimulator->__vtable[1].GetTutorialOn);
    iVar3 = (*(code *)pcVar1->__vtable[1].GetTicks)
                      ((int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable[1].SetCurrentHour);
    fVar6 = (float)iVar3 * gArchValueMultiplier;
    iVar3 = (*(code *)pcVar1->__vtable[1].GetDaysRunning)
                      ((int)&pcVar1->__vtable +
                       (int)*(short *)&pcVar1->__vtable[1].GetExpensesHistory);
    pFVar5 = (Family__vtable *)(iVar2 + (int)fVar6 + iVar3);
    pFVar4 = (Family__vtable *)
             (*(code *)pcVar1->__vtable->GetObjectsValue)
                       ((int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->SetArchValue);
  }
  return (int)(&pFVar5->field_0x0 + (int)&pFVar4->field_0x0);
}

ErrType NeighborhoodImpl::MoveIn(Family *f, Int houseNum) {
  Neighborhood__vtable *pNVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  if (houseNum < 1) {
    iVar3 = -1;
  }
  else {
    pNVar1 = (this->field0_0x0).__vtable;
    iVar2 = (*(code *)pNVar1[1].GetNumFamilies)
                      ((this->fFilename).fChars + *(short *)&pNVar1[1].PostSim + -0xc);
    iVar3 = -1;
    if (houseNum <= iVar2) {
      pNVar1 = (this->field0_0x0).__vtable;
      lVar4 = (*(code *)pNVar1[1].SetNeighborhoodVar)
                        ((this->fFilename).fChars + *(short *)&pNVar1[1].GetNeighborhoodVar + -0xc,
                         houseNum);
      if (lVar4 == 0) {
        (*(code *)f->__vtable->GetHTMLExportDirty)
                  ((int)&f->__vtable + (int)*(short *)&f->__vtable->SetHTMLExportDirty,houseNum);
        (*(code *)f->__vtable[1].SetFriendCount)
                  ((int)&f->__vtable + (int)*(short *)&f->__vtable[1].GetFriendCount,1);
        (*(code *)f->__vtable[1].GetHasBaby)
                  ((int)&f->__vtable + (int)*(short *)&f->__vtable[1].SetHasBaby,1);
        iVar3 = 0;
      }
      else {
        iVar3 = -1;
      }
    }
  }
  return iVar3;
}

ErrType NeighborhoodImpl::MoveOut(NghResFile *pFile, Int houseNum, int tearDown) {
	Family *f;
	cFixedWorld *world;
	Int familyID;
	ErrType err;
	ObjectModule *om;
	cXObject *next;
	cXObject *srch;
	bool kill;
	int x;
	int y;
	int l;
	TileWalls tw;
	CTilePt pt;
	Neighbor **n;
	int lingerHouse;
	
  short sVar1;
  cSimulator__vtable *pcVar2;
  cFixedWorld__vtable *pcVar3;
  Neighbor *pNVar4;
  ObjectModule *pOVar5;
  cSimulator__vtable **ppcVar6;
  cFixedWorld *pcVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ObjectModule__vtable *pOVar14;
  int iVar15;
  Neighbor **ppNVar16;
  Neighborhood__vtable *pNVar17;
  int x;
  undefined8 unaff_s0;
  int y;
  undefined8 unaff_s1;
  undefined8 uVar18;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  int *piVar19;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  int iVar20;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  CTilePt pt;
  TileWalls tw;
  TileWalls TStack_f0;
  NghResFile__6_845 *local_b0;
  int local_ac;
  int local_a8;
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
  
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
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
  pNVar17 = (this->field0_0x0).__vtable;
  local_b0 = pFile;
  local_ac = houseNum;
  local_a8 = tearDown;
  lVar10 = (*(code *)pNVar17->RelationshipsChanged)
                     ((this->fFilename).fChars + *(short *)&pNVar17->SavePersistentData + -0xc);
  lVar11 = -1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  if ((lVar10 == 0) &&
     ((pNVar17 = (this->field0_0x0).__vtable,
      lVar10 = (*(code *)pNVar17[1].SetNeighborhoodVar)
                         ((this->fFilename).fChars + *(short *)&pNVar17[1].GetNeighborhoodVar + -0xc
                          ,local_ac), pcVar7 = _5Globs_pFixedWorld, lVar10 != 0 ||
      (lVar11 = -1, local_a8 != 0)))) {
    uVar18 = 0xffffffffffffffff;
    if (lVar10 != 0) {
      piVar19 = (int *)lVar10;
      uVar18 = (**(code **)(*piVar19 + 0x74))((int)piVar19 + (int)*(short *)(*piVar19 + 0x70));
      (**(code **)(*piVar19 + 0x84))((int)piVar19 + (int)*(short *)(*piVar19 + 0x80),0);
    }
    pNVar17 = (this->field0_0x0).__vtable;
    (*(code *)pNVar17->GetFamily)
              ((this->fFilename).fChars + *(short *)&pNVar17->GetFamilyByIndex + -0xc,local_b0,
               _5Globs_iSaveFileVersion);
    pNVar17 = (this->field0_0x0).__vtable;
    lVar11 = (*(code *)pNVar17->FindNeighborByGUID)
                       ((this->fFilename).fChars + *(short *)&pNVar17->FindNeighborByID + -0xc,
                        local_b0,local_ac,0xffffffffffffffff);
    pNVar17 = (this->field0_0x0).__vtable;
    lVar10 = (*(code *)pNVar17[1].GetHouseNumberForLevel)
                       ((this->fFilename).fChars + *(short *)&pNVar17[1].Save + -0xc,uVar18);
    piVar19 = (int *)lVar10;
    if (lVar11 == 0) {
      if (lVar10 == 0) {
                    /* end of inlined section */
        pOVar14 = _5Globs_pObjectModule->__vtable;
        pOVar5 = _5Globs_pObjectModule;
      }
      else {
        (**(code **)(*piVar19 + 0x104))((int)piVar19 + (int)*(short *)(*piVar19 + 0x100),1);
        pOVar5 = _5Globs_pObjectModule;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
        pcVar2 = _5Globs_pSimulator->__vtable;
        sVar1 = *(short *)&pcVar2[1].SetSpeed;
        ppcVar6 = &_5Globs_pSimulator->__vtable;
        uVar18 = (**(code **)(*piVar19 + 0x9c))((int)piVar19 + (int)*(short *)(*piVar19 + 0x98));
        (*(code *)pcVar2[1].GetSpeed)((int)ppcVar6 + (int)sVar1,uVar18);
        pOVar14 = pOVar5->__vtable;
      }
      (*(code *)pOVar14[1].GetFirst)
                ((int)&pOVar5->__vtable + (int)*(short *)&pOVar14[1].GetObjectFromID,0x3bc118,0);
      lVar11 = (*(code *)pOVar5->__vtable->LevelInfoRequested)
                         ((int)&pOVar5->__vtable + (int)*(short *)&pOVar5->__vtable->CleanupPeople);
      if (lVar11 != 0) {
        iVar15 = *(int *)((int)lVar11 + 4);
        do {
          iVar9 = (int)lVar11;
          lVar11 = (**(code **)(iVar15 + 0x3fc))(iVar9 + *(short *)(iVar15 + 0x3f8));
          lVar12 = (**(code **)(*(int *)(iVar9 + 4) + 0x26c))
                             (iVar9 + *(short *)(*(int *)(iVar9 + 4) + 0x268));
          if (lVar12 == 0) {
            uVar13 = (**(code **)(*(int *)(iVar9 + 4) + 0x3a4))
                               (iVar9 + *(short *)(*(int *)(iVar9 + 4) + 0x3a0));
            if (uVar13 == 0) {
              if (local_a8 != 0) {
                lVar12 = (**(code **)(*(int *)(iVar9 + 4) + 0x15c))
                                   (iVar9 + *(short *)(*(int *)(iVar9 + 4) + 0x158));
                if (lVar12 == 0) {
                  uVar13 = 1;
                }
                else {
                  pcVar3 = pcVar7->__vtable;
                  sVar1 = *(short *)&pcVar3[1].OutOfGrid;
                  (**(code **)(*(int *)(iVar9 + 4) + 0x2dc))
                            (&pt,iVar9 + *(short *)(*(int *)(iVar9 + 4) + 0x2d8));
                  uVar13 = (*(code *)pcVar3[1].GetFloorLayer)
                                     ((int)&pcVar7->__vtable + (int)sVar1,&pt);
                  ___7CTilePt(&pt,2);
                  uVar13 = (ulong)((uVar13 & 0x20) == 0);
                }
              }
              if (uVar13 == 0) goto LAB_0024ef38;
              iVar15 = *(int *)(iVar9 + 4);
            }
            else {
              iVar15 = *(int *)(iVar9 + 4);
            }
            pOVar14 = pOVar5->__vtable;
            sVar1 = *(short *)&pOVar14->GetNumObjects;
            uVar18 = (**(code **)(iVar15 + 700))(iVar9 + *(short *)(iVar15 + 0x2b8));
            (*(code *)pOVar14->CheckIntegrity)((int)&pOVar5->__vtable + (int)sVar1,uVar18);
            lVar11 = (*(code *)pOVar5->__vtable->LevelInfoRequested)
                               ((int)&pOVar5->__vtable +
                                (int)*(short *)&pOVar5->__vtable->CleanupPeople);
          }
LAB_0024ef38:
          if (lVar11 == 0) break;
          iVar15 = *(int *)((int)lVar11 + 4);
        } while( true );
      }
      if (local_a8 != 0) {
        __9TileWalls(&tw);
        iVar15 = 1;
        do {
          iVar20 = iVar15 + 1;
          iVar9 = 1;
          while (y = iVar9,
                iVar9 = (*(code *)pcVar7->__vtable->GetFloor)
                                  ((int)&pcVar7->__vtable +
                                   (int)*(short *)&pcVar7->__vtable->GetFloorLayer), y < iVar9 + -1)
          {
            for (x = 1; iVar8 = (*(code *)pcVar7->__vtable->GetFloor)
                                          ((int)&pcVar7->__vtable +
                                           (int)*(short *)&pcVar7->__vtable->GetFloorLayer),
                iVar9 = y + 1, x < iVar8 + -1; x = x + 1) {
              __7CTilePtiii(&pt,x,y,iVar15);
              uVar13 = (*(code *)pcVar7->__vtable[1].GetFloorLayer)
                                 ((int)&pcVar7->__vtable +
                                  (int)*(short *)&pcVar7->__vtable[1].OutOfGrid,&pt);
              if ((uVar13 & 0x20) == 0) {
                (*(code *)pcVar7->__vtable->AnalyzeWallVertex)
                          ((int)&pcVar7->__vtable +
                           (int)*(short *)&pcVar7->__vtable->SetVertexConfig,&pt,0);
                __9TileWallsRC9TileWalls(&TStack_f0,&tw);
                (*(code *)pcVar7->__vtable->GetLightLayer)
                          ((int)&pcVar7->__vtable + (int)*(short *)&pcVar7->__vtable->GetWallManager
                           ,&pt,&TStack_f0);
              }
              ___7CTilePt(&pt,2);
            }
          }
          iVar15 = iVar20;
        } while (iVar20 < 2);
        ___9TileWalls(&tw,2);
      }
      if (lVar10 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
        iVar15 = *piVar19;
        sVar1 = *(short *)(iVar15 + 0xa0);
        uVar18 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                           ((int)&_5Globs_pSimulator->__vtable +
                            (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue);
        (**(code **)(iVar15 + 0xa4))((int)piVar19 + (int)sVar1,uVar18);
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pSimulator->__vtable[1].GetSpeed)
                ((int)&_5Globs_pSimulator->__vtable +
                 (int)*(short *)&_5Globs_pSimulator->__vtable[1].SetSpeed,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pSimulator->__vtable->IsStopped)
                ((int)&_5Globs_pSimulator->__vtable +
                 (int)*(short *)&_5Globs_pSimulator->__vtable->IsPaused,0x1a,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pSimulator->__vtable[1].Resume)
                ((int)&_5Globs_pSimulator->__vtable +
                 (int)*(short *)&_5Globs_pSimulator->__vtable[1].Pause);
      ClearRouteHistory__9HouseImpl((HouseImpl *)_5Globs_pHouse);
      if (lVar10 != 0) {
        iVar15 = *piVar19;
        sVar1 = *(short *)(iVar15 + 0xa0);
        uVar18 = (**(code **)(iVar15 + 0xbc))((int)piVar19 + (int)*(short *)(iVar15 + 0xb8));
        (**(code **)(iVar15 + 0xa4))((int)piVar19 + (int)sVar1,uVar18);
        (**(code **)(*piVar19 + 0xb4))((int)piVar19 + (int)*(short *)(*piVar19 + 0xb0),0);
      }
      GlobalDispatch__Fsi(0x90,0);
      if (local_a8 == 0) {
        pNVar17 = (this->field0_0x0).__vtable;
      }
      else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        ppNVar16 = (this->fNeighbors).field0_0x0.start;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
        while (ppNVar16 != (this->fNeighbors).field0_0x0.finish) {
          pNVar4 = *ppNVar16;
          if (pNVar4 == (Neighbor *)0x0) {
            ppNVar16 = ppNVar16 + 1;
          }
          else {
            ppNVar16 = ppNVar16 + 1;
            if ((long)(short)pNVar4->fData[0x43] == (long)local_ac) {
              pNVar17 = (this->field0_0x0).__vtable;
              lVar11 = (*(code *)pNVar17[1].RelationshipsChanged)
                                 ((this->fFilename).fChars +
                                  *(short *)&pNVar17[1].SavePersistentData + -0xc);
              if (lVar11 != 0) {
                pNVar17 = (this->field0_0x0).__vtable;
                goto LAB_0024f1d0;
              }
              ppNVar16 = (this->fNeighbors).field0_0x0.start;
            }
          }
        }
        pNVar17 = (this->field0_0x0).__vtable;
      }
LAB_0024f1d0:
      lVar11 = (*(code *)pNVar17->GetNeighborData)
                         ((this->fFilename).fChars + *(short *)&pNVar17->GetNeighborSelector + -0xc,
                          local_b0);
      if (lVar11 == 0) {
        pNVar17 = (this->field0_0x0).__vtable;
      }
      else {
        if (lVar10 != 0) {
          (**(code **)(*piVar19 + 0x84))((int)piVar19 + (int)*(short *)(*piVar19 + 0x80),local_ac);
        }
        pNVar17 = (this->field0_0x0).__vtable;
      }
      (*(code *)pNVar17->LoadPersistentData)
                ((this->fFilename).fChars + *(short *)&pNVar17->GetNextNeighborID + -0xc);
    }
    else if (lVar10 != 0) {
      (**(code **)(*piVar19 + 0x84))((int)piVar19 + (int)*(short *)(*piVar19 + 0x80),local_ac);
    }
  }
  return (int)lVar11;
}

void NeighborhoodImpl::UpdateFamilyFriendsCount(Family *f) {
	Int friendCnt;
	Neighbor **i;
	Neighbor *n;
	Neighbor *this;
	Int famCnt;
	Neighbor *fn;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	
  short sVar1;
  Neighbor *this_00;
  Family__vtable *pFVar2;
  Neighborhood__vtable *pNVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  Neighbor **ppNVar8;
  long lVar9;
  Neighbor **ppNVar10;
  int iVar11;
  
  iVar11 = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  ppNVar10 = (this->fNeighbors).field0_0x0.start;
                    /* end of inlined section */
  if (ppNVar10 != (this->fNeighbors).field0_0x0.finish) {
    this_00 = *ppNVar10;
    do {
      ppNVar10 = ppNVar10 + 1;
      if (this_00 == (Neighbor *)0x0) {
LAB_0024f368:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        ppNVar8 = (this->fNeighbors).field0_0x0.finish;
      }
      else {
        pFVar2 = f->__vtable;
        sVar1 = *(short *)&pFVar2->GetNumber;
        iVar5 = GetGUID__8Neighbor(this_00);
        lVar9 = (*(code *)pFVar2->GetHouseNumber)((int)&f->__vtable + (int)sVar1,iVar5);
        if (lVar9 == 0) {
                    /* end of inlined section */
          if (this_00->fData[0x3d] != 0) {
            iVar5 = 0;
            while (iVar7 = (*(code *)f->__vtable->TestMember)
                                     ((int)&f->__vtable + (int)*(short *)&f->__vtable->TestMember),
                  iVar5 < iVar7) {
              puVar6 = (undefined4 *)
                       (*(code *)f->__vtable->SaveFamily)
                                 ((int)&f->__vtable + (int)*(short *)&f->__vtable->LoadFamily,iVar5)
              ;
              pNVar3 = (this->field0_0x0).__vtable;
              lVar9 = (*(code *)pNVar3->GetImpl)
                                ((this->fFilename).fChars +
                                 *(short *)&pNVar3->AddFamilyHistoryStat + -0xc,*puVar6);
              if (lVar9 == 0) {
                iVar5 = iVar5 + 1;
              }
              else {
                    /* end of inlined section */
                bVar4 = TestFriends__FR9RelMatrixiT0i
                                  (this_00->fRelations,(int)(short)this_00->fID,
                                   *(RelMatrix **)((short *)lVar9 + 6),(int)*(short *)lVar9);
                if (bVar4) {
                  iVar11 = iVar11 + 1;
                  break;
                }
                iVar5 = iVar5 + 1;
              }
            }
            goto LAB_0024f368;
          }
          ppNVar8 = (this->fNeighbors).field0_0x0.finish;
        }
        else {
          ppNVar8 = (this->fNeighbors).field0_0x0.finish;
        }
      }
                    /* end of inlined section */
      if (ppNVar10 == ppNVar8) break;
      this_00 = *ppNVar10;
    } while( true );
  }
  (*(code *)f->__vtable[1].GetHouseNumber)
            ((int)&f->__vtable + (int)*(short *)&f->__vtable[1].GetNumber,iVar11);
  return;
}

void NeighborhoodImpl::PrepareAndTestLot(StringBuffer &errorMessage) {
	int required[6];
	ObjectModule *om;
	ObjectFolder *of;
	SInt32 guid;
	ObjSelector *sel;
	ObjSelector *this;
	
  int iVar1;
  ObjectFolder__vtable *pOVar2;
  uint uVar3;
  ulong *puVar4;
  ObjectModule *pOVar5;
  ObjectFolder *pOVar6;
  long lVar7;
  ObjectModule__vtable *pOVar8;
  int *piVar9;
  int required [6];
  
  piVar9 = required;
  RemoveComeSeeMeObjects__Fv();
  pOVar6 = _5Globs_pObjectFolder;
  pOVar5 = _5Globs_pObjectModule;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  uVar3 = (int)required + 7U & 7;
  puVar4 = (ulong *)(((int)required + 7U) - uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | DAT_003bc128 >> (7 - uVar3) * 8;
  required._0_8_ = DAT_003bc128;
  uVar3 = (int)required + 0xfU & 7;
  puVar4 = (ulong *)(((int)required + 0xfU) - uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | DAT_003bc130 >> (7 - uVar3) * 8;
  required._8_8_ = DAT_003bc130;
  uVar3 = (int)required + 0x17U & 7;
  puVar4 = (ulong *)(((int)required + 0x17U) - uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | DAT_003bc138 >> (7 - uVar3) * 8;
  required._16_8_ = DAT_003bc138;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  required[0] = (int)DAT_003bc128;
  if (required[0] != 0) {
    pOVar8 = _5Globs_pObjectModule->__vtable;
    while( true ) {
      iVar1 = *piVar9;
      lVar7 = (*(code *)pOVar8->DoStream)
                        ((int)&pOVar5->__vtable + (int)*(short *)&pOVar8->OffsetWorld,iVar1);
      if ((lVar7 == 0) &&
         (pOVar2 = pOVar6->__vtable,
         lVar7 = (*(code *)pOVar2->DeletingInstance)
                           ((int)&pOVar6->__vtable + (int)*(short *)&pOVar2->CreatingInstance,iVar1)
         , lVar7 != 0)) break;
      piVar9 = piVar9 + 1;
      if (*piVar9 == 0) {
        return;
      }
      pOVar8 = pOVar5->__vtable;
    }
    copy__12StringBufferPCc(errorMessage,"Lot doesn\'t have an instance of ");
    append__12StringBufferPCci(errorMessage,*(char **)((int)lVar7 + 0x10),-1);
    append__12StringBufferPCci(errorMessage,".",-1);
  }
  return;
}

Int NeighborhoodImpl::GetHousePrice(cSimulator *sim) {
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (*(code *)sim->__vtable[1].GetDaysRunning)
                    ((int)&sim->__vtable + (int)*(short *)&sim->__vtable[1].GetExpensesHistory);
  iVar2 = (*(code *)sim->__vtable[1].GetLotValue)
                    ((int)&sim->__vtable + (int)*(short *)&sim->__vtable[1].GetTutorialOn);
  iVar3 = (*(code *)sim->__vtable[1].GetTicks)
                    ((int)&sim->__vtable + (int)*(short *)&sim->__vtable[1].SetCurrentHour);
  return iVar1 + iVar2 + (int)(gArchValueMultiplier * (float)iVar3);
}

bool NeighborhoodImpl::GetFamilyInfo(Family *f, FamilyInfo *info, bool inNgh) {
	StringBufW255 str;
	StackString2<128> *this;
	
  short *str_00;
  int iVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  StackString2_256_ str;
  StringBuffer2 SStack_160;
  short asStack_158 [132];
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
  
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer2.h */
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* end of inlined section */
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer2.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer2.h */
  __13StringBuffer2PUsUi(&str.field0_0x0,(short *)((uint)&str | 8),0x100);
                    /* end of inlined section */
  (*(code *)f->__vtable->GetNetWorth)
            ((int)&f->__vtable + (int)*(short *)&f->__vtable->SetHouseValue,&str);
  str_00 = c_str__C13StringBuffer2(&str.field0_0x0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer2.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer2.h */
  __13StringBuffer2PUsUi(&SStack_160,asStack_158,0x80);
  append__13StringBuffer2PCUsi(&SStack_160,str_00,-1);
  copy__13StringBuffer2RC13StringBuffer2((StringBuffer2 *)info,&SStack_160);
                    /* end of inlined section */
  iVar1 = (*(code *)f->__vtable[1].GetName)
                    ((int)&f->__vtable + (int)*(short *)&f->__vtable[1].DoStream);
  info->mNetWorth = iVar1;
  info->mFriendCount = 0;
  iVar1 = (*(code *)f->__vtable->GetNewHouse)
                    ((int)&f->__vtable + (int)*(short *)&f->__vtable->SetNewHouse);
  info->mLotNumber = iVar1;
  if (inNgh) {
    iVar1 = (*(code *)f->__vtable[1].GetExportName)
                      ((int)&f->__vtable + (int)*(short *)&f->__vtable[1].SetName);
    info->mFriendCount = iVar1;
  }
  return true;
}

bool NeighborhoodImpl::GetFamilyInfo(FamilyID familyNumber, FamilyInfo *info) {
	Family *f;
	
  Neighborhood__vtable *pNVar1;
  bool bVar2;
  long lVar3;
  
  pNVar1 = (this->field0_0x0).__vtable;
  lVar3 = (*(code *)pNVar1[1].GetHouseNumberForLevel)
                    ((this->fFilename).fChars + *(short *)&pNVar1[1].Save + -0xc,familyNumber);
  if (lVar3 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = GetFamilyInfo__16NeighborhoodImplP6FamilyP10FamilyInfob(this,(Family *)lVar3,info,true);
  }
  return bVar2;
}

bool NeighborhoodImpl::GetHouseInfo(NghResFile *pFile, int houseNumber, HouseInfo *info) {
	Family *f;
	
  Neighborhood__vtable *pNVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  
  if (0 < houseNumber) {
    pNVar1 = (this->field0_0x0).__vtable;
    iVar3 = (*(code *)pNVar1[1].GetNumFamilies)
                      ((this->fFilename).fChars + *(short *)&pNVar1[1].PostSim + -0xc);
    if (iVar3 < houseNumber) {
      return false;
    }
    SetCurrentHouse__10NghResFileUi((NghResFile__0_845 *)pFile,houseNumber);
    bVar2 = GetHouseInfo__16NeighborhoodImplP10NghResFileP9HouseInfo(this,pFile,info);
    if (bVar2) {
      pNVar1 = (this->field0_0x0).__vtable;
      lVar4 = (*(code *)pNVar1[1].SetNeighborhoodVar)
                        ((this->fFilename).fChars + *(short *)&pNVar1[1].GetNeighborhoodVar + -0xc,
                         houseNumber);
      if (lVar4 == 0) {
        info->mOccupants = -1;
        info->mHouseNumber = houseNumber;
      }
      else {
        iVar3 = *(int *)lVar4;
        iVar3 = (**(code **)(iVar3 + 0x74))((int)(int *)lVar4 + (int)*(short *)(iVar3 + 0x70));
        info->mOccupants = iVar3;
        GetFamilyInfo__16NeighborhoodImpliP10FamilyInfo(this,iVar3,&info->mOccupantInfo);
        info->mHouseNumber = houseNumber;
      }
      pNVar1 = (this->field0_0x0).__vtable;
      (*(code *)pNVar1[1].AddToFamily)
                ((this->fFilename).fChars + *(short *)&pNVar1[1].RemoveFamily + -0xc,houseNumber,
                 &info->mLotPosX,&info->mLotPosY);
      return true;
    }
  }
  return false;
}

bool NeighborhoodImpl::GetHouseInfo(NghResFile *file, HouseInfo *info) {
  Neighborhood__vtable *pNVar1;
  undefined uVar2;
  
  pNVar1 = (this->field0_0x0).__vtable;
  uVar2 = (*(code *)pNVar1->GetNumFamilies)
                    ((this->fFilename).fChars + *(short *)&pNVar1->PostSim + -0xc,file,&info->mPrice
                     ,&info->mIsTutorial,&info->mHasHouse,info);
  return (bool)uVar2;
}

bool NeighborhoodImpl::GetHouseFileInfo(NghResFile *inFile, Int *price, int *isTutorial, int *hasHouse, int *moveInAllowed) {
	SInt32 version;
	AUTOPTR<cSimulator> sim;
	
  bool bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  AUTOPTR_cSimulator_ sim;
  int version;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  sim.m_ptr = (cSimulator *)0x0;
  DestroyInstance__10cSimulatorP10cSimulator((cSimulator *)0x0);
  sim.m_ptr = (cSimulator *)0x0;
  sim.m_ptr = CreateInstance__10cSimulator();
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  iVar2 = ReconLoadObject__H1Z10cSimulator_PX01P8iResFileisPi_i
                    (sim.m_ptr,(iResFile__0_3211 *)inFile,kSimulatorResType,kSimulatorResourceID,
                     (int *)((uint)&sim | 4));
  if (iVar2 == 0) {
                    /* end of inlined section */
    iVar2 = (*(code *)(sim.m_ptr)->__vtable->Resume)
                      ((int)&(sim.m_ptr)->__vtable + (int)*(short *)&(sim.m_ptr)->__vtable->Pause,
                       0x16);
    *hasHouse = iVar2;
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
    lVar3 = (*(code *)(sim.m_ptr)->__vtable->Resume)
                      ((int)&(sim.m_ptr)->__vtable + (int)*(short *)&(sim.m_ptr)->__vtable->Pause,
                       0x1a);
    uVar4 = 0;
    *isTutorial = (int)lVar3;
    if (lVar3 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
      lVar3 = (*(code *)(sim.m_ptr)->__vtable->Resume)
                        ((int)&(sim.m_ptr)->__vtable + (int)*(short *)&(sim.m_ptr)->__vtable->Pause,
                         0x15);
      uVar4 = (uint)(lVar3 == 0);
    }
    *moveInAllowed = uVar4;
    iVar2 = GetHousePrice__16NeighborhoodImplP10cSimulator(this,sim.m_ptr);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
    *price = iVar2;
    DestroyInstance__10cSimulatorP10cSimulator(sim.m_ptr);
                    /* end of inlined section */
    bVar1 = true;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
    DestroyInstance__10cSimulatorP10cSimulator(sim.m_ptr);
    bVar1 = false;
                    /* end of inlined section */
  }
  return bVar1;
}

bool NeighborhoodImpl::compareHouses(int &h1, int &h2) {
	int originx;
	int originy;
	int p1x;
	int p1y;
	int p2x;
	int p2y;
	int dist1;
	int dist2;
	
  Neighborhood *pNVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  int originx;
  int originy;
  int p1x;
  int p1y;
  int p2x;
  int p2y;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  pNVar1 = _5Globs_pNeighborhood;
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pNeighborhood->__vtable[1].AddToFamily)
            ((int)&_5Globs_pNeighborhood->__vtable +
             (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].RemoveFamily,
             _5Globs_pNeighborhood[199].__vtable,&originx,(uint)&originx | 4);
  (*(code *)pNVar1->__vtable[1].AddToFamily)
            ((int)&pNVar1->__vtable + (int)*(short *)&pNVar1->__vtable[1].RemoveFamily,*h1,
             (uint)&originx | 8,(uint)&originx | 0xc);
  (*(code *)pNVar1->__vtable[1].AddToFamily)
            ((int)&pNVar1->__vtable + (int)*(short *)&pNVar1->__vtable[1].RemoveFamily,*h2,&p2x,&p2y
            );
  return (p1x - originx) * (p1x - originx) + (p1y - originy) * (p1y - originy) <
         (p2x - originx) * (p2x - originx) + (p2y - originy) * (p2y - originy);
}

ErrType NeighborhoodImpl::LoadHouse(NghResFile *pFile, Int houseNum, Int familyIDToMoveIn) {
	cSimulator *s;
	ErrType err;
	ObjectModule *om;
	SInt32 houseVersion;
	FamilyImpl **f;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	FamilyID *first;
	FamilyID *last;
	FamilyID *pointer;
	Family *f;
	vector<cXPerson *,__malloc_alloc_template<0> > residents;
	Family *f;
	bool newHouse;
	Int funds;
	int iNumPeople;
	int iter;
	cXPerson *p;
	cXPerson *&x;
	cXPerson *&value;
	Int housePrice;
	UInt32 i;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	int iNumPeople;
	int iter;
	cXPerson *p;
	bool isLingeringInAnotherHouse;
	ObjSelector *sel;
	int iNumPeople;
	int iter;
	cXPerson *p;
	bool isMovedOutResident;
	Family *f;
	vector<cXPerson *,__malloc_alloc_template<0> > *this;
	cXPerson **last;
	cXPerson **first;
	cXPerson **pointer;
	vector<cXPerson *,__malloc_alloc_template<0> > *this;
	void *pAddress;
	
  FamilyImpl *pFVar1;
  uint *position;
  cXObject__136_1996__vtable *pcVar2;
  bool bVar3;
  cSimulator *sim;
  ObjectModule *pOVar4;
  undefined2 uVar5;
  short sVar6;
  FamilyImpl **ppFVar7;
  Family *pFVar8;
  int iVar9;
  int iVar10;
  cSimulator__vtable *pcVar11;
  int *piVar12;
  Neighborhood__vtable *pNVar13;
  cXPerson__136_2096 **ppcVar14;
  long lVar15;
  int *piVar16;
  ObjectModule__vtable *pOVar17;
  Family__vtable *pFVar18;
  FamilyImpl **ppFVar19;
  int iVar20;
  uint uVar21;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 uVar22;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  vector_cXPerson_____malloc_alloc_template_0___ residents;
  uint local_d0;
  int houseVersion;
  cXPerson__136_2096 *local_c8;
  cXPerson__136_2096 *p;
  NghResFile__0_845 *local_c0;
  uint local_bc;
  int err;
  HouseImpl *local_b4;
  bool newHouse;
  int local_ac;
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
  
  sim = _5Globs_pSimulator;
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_c0 = (NghResFile__0_845 *)pFile;
  local_bc = houseNum;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  err = Load__16NeighborhoodImplP10NghResFile(this,pFile);
  if (err != 0) {
    return err;
  }
LAB_0024fab4:
  ppFVar19 = (this->fFamilies).start;
                    /* end of inlined section */
  if (ppFVar19 != (this->fFamilies).finish) {
    pFVar1 = *ppFVar19;
    do {
      pFVar18 = (pFVar1->field0_0x0).__vtable;
      lVar15 = (*(code *)pFVar18->TestMember)
                         ((int)&(pFVar1->field0_0x0).__vtable + (int)*(short *)&pFVar18->TestMember)
      ;
      if (lVar15 == 0) {
        pFVar18 = ((*ppFVar19)->field0_0x0).__vtable;
        lVar15 = (*(code *)pFVar18->GetHasBaby)
                           ((int)&((*ppFVar19)->field0_0x0).__vtable +
                            (int)*(short *)&pFVar18->SetHasBaby);
        if (lVar15 != 0) goto code_r0x0024fb0c;
        ppFVar7 = (this->fFamilies).finish;
      }
      else {
        ppFVar7 = (this->fFamilies).finish;
      }
                    /* end of inlined section */
      ppFVar19 = ppFVar19 + 1;
      if (ppFVar19 == ppFVar7) break;
      pFVar1 = *ppFVar19;
    } while( true );
  }
  pOVar4 = _5Globs_pObjectModule;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  piVar12 = (this->fNeighborHouses).start;
  for (piVar16 = piVar12; piVar16 != (this->fNeighborHouses).finish; piVar16 = piVar16 + 1) {
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
  local_b4 = (HouseImpl *)_5Globs_pHouse;
  (this->fNeighborHouses).finish = piVar12;
                    /* end of inlined section */
  pNVar13 = (this->field0_0x0).__vtable;
  pFVar8 = (Family *)
           (*(code *)pNVar13[1].GetHouseNumberForLevel)
                     ((this->fFilename).fChars + *(short *)&pNVar13[1].Save + -0xc,0);
  local_b4->fFamily = pFVar8;
  SetCurrentHouse__10NghResFileUi(local_c0,local_bc);
  err = LoadFile__9HouseImplP8iResFilePi(local_b4,(iResFile__6_5027 *)local_c0,&houseVersion);
  if (((0 < familyIDToMoveIn) && (local_bc != 0)) &&
     (pNVar13 = (this->field0_0x0).__vtable,
     lVar15 = (*(code *)pNVar13[1].GetHouseNumberForLevel)
                        ((this->fFilename).fChars + *(short *)&pNVar13[1].Save + -0xc,
                         familyIDToMoveIn), lVar15 != 0)) {
    err = MoveIn__16NeighborhoodImplP6Familyi(this,(Family *)lVar15,local_bc);
  }
  if (err != 0) {
    return err;
  }
                    /* end of inlined section */
  iVar20 = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  residents.start = (cXPerson__136_2096 **)0x0;
                    /* end of inlined section */
  local_ac = local_bc << 0x10;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  residents.finish = (cXPerson__136_2096 **)0x0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  residents.end_of_storage = (cXPerson__136_2096 **)0x0;
                    /* end of inlined section */
  iVar9 = (*(code *)pOVar4->__vtable->DisableBuyAndBuild)
                    ((int)&pOVar4->__vtable + (int)*(short *)&pOVar4->__vtable->FillInObjectStats);
  if (0 < iVar9) {
    pOVar17 = pOVar4->__vtable;
    while( true ) {
      local_c8 = (cXPerson__136_2096 *)
                 (*(code *)pOVar17->ComputeStats)
                           ((int)&pOVar4->__vtable + (int)*(short *)&pOVar17->ShowTutorialInfo,
                            iVar20);
      lVar15 = (*(code *)local_c8->__vtable->GetRecordDuration)
                         ((int)&local_c8->_vb1996 + (int)*(short *)&local_c8->__vtable->GetRecording
                          ,0x20);
      if (lVar15 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        if (residents.finish == residents.end_of_storage) {
          insert_aux__t6vector2ZP8cXPersonZt23__malloc_alloc_template1i0PP8cXPersonRCP8cXPerson
                    (&residents,residents.finish,&local_c8);
        }
        else {
          *residents.finish = local_c8;
          residents.finish = residents.finish + 1;
        }
      }
      iVar20 = iVar20 + 1;
      if (iVar9 <= iVar20) break;
      pOVar17 = pOVar4->__vtable;
    }
  }
  this->fHouseNum = local_bc;
  pNVar13 = (this->field0_0x0).__vtable;
  lVar15 = (*(code *)pNVar13[1].SetNeighborhoodVar)
                     ((this->fFilename).fChars + *(short *)&pNVar13[1].GetNeighborhoodVar + -0xc,
                      local_bc);
  if ((lVar15 == 0) || (local_bc == 0)) {
    pNVar13 = (this->field0_0x0).__vtable;
    lVar15 = (*(code *)pNVar13[1].GetHouseNumberForLevel)
                       ((this->fFilename).fChars + *(short *)&pNVar13[1].Save + -0xc,0);
    iVar9 = *(int *)lVar15;
  }
  else {
    iVar9 = *(int *)lVar15;
  }
  pFVar8 = (Family *)lVar15;
  _newHouse = (**(code **)(iVar9 + 0xfc))((int)&pFVar8->__vtable + (int)*(short *)(iVar9 + 0xf8));
  local_b4->fFamily = pFVar8;
  if (0 < familyIDToMoveIn) {
    iVar9 = GetHousePrice__16NeighborhoodImplP10cSimulator(this,sim);
    pFVar18 = pFVar8->__vtable;
    sVar6 = *(short *)&pFVar18[1].GetIndexedMember;
    iVar20 = (*(code *)pFVar18[1].CountMembers)
                       ((int)&pFVar8->__vtable + (int)*(short *)&pFVar18[1].MyDoCommand);
    iVar10 = (*(code *)pFVar8->__vtable[1].TestMember)
                       ((int)&pFVar8->__vtable + (int)*(short *)&pFVar8->__vtable[1].TestMember);
    (*(code *)pFVar18[1].GetMemberByGUID)
              ((int)&pFVar8->__vtable + (int)sVar6,(iVar20 + iVar10) - iVar9);
    (*(code *)pFVar8->__vtable[1].SaveFamily)
              ((int)&pFVar8->__vtable + (int)*(short *)&pFVar8->__vtable[1].LoadFamily,iVar9);
  }
  uVar22 = 0;
  pcVar11 = sim->__vtable;
  sVar6 = *(short *)&pcVar11->IsPaused;
  uVar5 = (*(code *)pFVar8->__vtable->GetHasBaby)
                    ((int)&pFVar8->__vtable + (int)*(short *)&pFVar8->__vtable->SetHasBaby);
  (*(code *)pcVar11->IsStopped)((int)&sim->__vtable + (int)sVar6,9,uVar5);
  (*(code *)sim->__vtable->IsStopped)
            ((int)&sim->__vtable + (int)*(short *)&sim->__vtable->IsPaused,10,local_ac >> 0x10);
  lVar15 = (*(code *)pFVar8->__vtable->GetHasBaby)
                     ((int)&pFVar8->__vtable + (int)*(short *)&pFVar8->__vtable->SetHasBaby);
  if (lVar15 == 0) {
    pcVar11 = sim->__vtable;
  }
  else {
    uVar22 = (*(code *)pFVar8->__vtable[1].CountMembers)
                       ((int)&pFVar8->__vtable + (int)*(short *)&pFVar8->__vtable[1].MyDoCommand);
    pcVar11 = sim->__vtable;
  }
  (*(code *)pcVar11[1].GetSpeed)((int)&sim->__vtable + (int)*(short *)&pcVar11[1].SetSpeed,uVar22);
  uVar21 = 1;
  if (local_bc == 0) {
    (*(code *)pOVar4->__vtable->GetSim)
              ((int)&pOVar4->__vtable + (int)*(short *)&pOVar4->__vtable->PreviewAnimation);
    pOVar17 = pOVar4->__vtable;
  }
  else {
    do {
      if (uVar21 != local_bc) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        position = (uint *)(this->fNeighborHouses).finish;
        local_d0 = uVar21;
        if (position == (uint *)(this->fNeighborHouses).end_of_storage) {
          insert_aux__t6vector2ZiZt23__malloc_alloc_template1i0PiRCi
                    ((vector_int___malloc_alloc_template_0_____3_5561 *)&this->fNeighborHouses,
                     (int *)position,(int *)&local_d0);
        }
        else {
          *position = uVar21;
          (this->fNeighborHouses).finish = (this->fNeighborHouses).finish + 1;
        }
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 < 10);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    piVar12 = (this->fNeighborHouses).finish;
    piVar16 = (this->fNeighborHouses).start;
    uVar21 = (int)piVar12 - (int)piVar16 >> 2;
                    /* end of inlined section */
    if (uVar21 < 2) {
      pOVar17 = pOVar4->__vtable;
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      iVar9 = __lg__H1Zi_X01_X01(uVar21);
      __introsort_loop__H4ZPiZiZiZPFRCiRCi_b_X01X01PX11X21X31_v
                (piVar16,piVar12,0,(undefined1 *)(iVar9 << 1));
      __final_insertion_sort__H2ZPiZPFRCiRCi_b_X01X01X11_v
                (piVar16,piVar12,compareHouses__16NeighborhoodImplRCiT1);
                    /* end of inlined section */
      pOVar17 = pOVar4->__vtable;
    }
  }
  (*(code *)pOVar17->KillObjectsInvalidatedByResize)
            ((int)&pOVar4->__vtable + (int)*(short *)&pOVar17->KillAllObjects,local_c0,houseVersion)
  ;
  pOVar17 = pOVar4->__vtable;
LAB_00250018:
  iVar20 = 0;
  iVar9 = (*(code *)pOVar17->DisableBuyAndBuild)
                    ((int)&pOVar4->__vtable + (int)*(short *)&pOVar17->FillInObjectStats);
  if (0 < iVar9) {
    pOVar17 = pOVar4->__vtable;
    do {
      piVar12 = (int *)(*(code *)pOVar17->ComputeStats)
                                 ((int)&pOVar4->__vtable + (int)*(short *)&pOVar17->ShowTutorialInfo
                                  ,iVar20);
      iVar10 = *(int *)(*piVar12 + 4);
      iVar10 = (**(code **)(iVar10 + 0x2ec))(*piVar12 + (int)*(short *)(iVar10 + 0x2e8));
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
      if ((int)(*(uint *)(iVar10 + 0x5c) & 0xc) >> 2 == 1) {
        bVar3 = false;
        lVar15 = (**(code **)(piVar12[1] + 0xe4))
                           ((int)piVar12 + (int)*(short *)(piVar12[1] + 0xe0),0x3d);
        if (lVar15 == 0) {
          bVar3 = true;
          iVar10 = (**(code **)(piVar12[1] + 0xe4))
                             ((int)piVar12 + (int)*(short *)(piVar12[1] + 0xe0),0x43);
          if (iVar10 == this->fHouseNum) {
            bVar3 = false;
          }
        }
        if (bVar3) goto LAB_0024fed0;
      }
      iVar20 = iVar20 + 1;
      if (iVar9 <= iVar20) break;
      pOVar17 = pOVar4->__vtable;
    } while( true );
  }
  if ((gInhibitTutorial == 0) && ((short)this->fVars[1] < 3)) {
    lVar15 = (*(code *)sim->__vtable->Resume)
                       ((int)&sim->__vtable + (int)*(short *)&sim->__vtable->Pause,0x1a);
    if (lVar15 != 0) {
      pOVar17 = pOVar4->__vtable;
LAB_0025012c:
      lVar15 = (*(code *)pOVar17->DoStream)
                         ((int)&pOVar4->__vtable + (int)*(short *)&pOVar17->OffsetWorld,
                          0xffffffffc3249a1d);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      if ((lVar15 == 0) &&
         (lVar15 = (*(code *)_5Globs_pObjectFolder->__vtable->DeletingInstance)
                             ((int)&_5Globs_pObjectFolder->__vtable +
                              (int)*(short *)&_5Globs_pObjectFolder->__vtable->CreatingInstance,
                              0xffffffffc3249a1d), lVar15 != 0)) {
        (*(code *)pOVar4->__vtable->GetObject)
                  ((int)&pOVar4->__vtable + (int)*(short *)&pOVar4->__vtable->GetFirst,lVar15);
      }
      goto LAB_00250190;
    }
    if (local_bc == 0) {
      pOVar17 = pOVar4->__vtable;
      goto LAB_0025012c;
    }
    pFVar18 = pFVar8->__vtable;
LAB_0025019c:
    lVar15 = (*(code *)pFVar18->GetHasBaby)
                       ((int)&pFVar8->__vtable + (int)*(short *)&pFVar18->SetHasBaby);
    if ((lVar15 != 0) && (_newHouse != 0)) {
      (*(code *)pFVar8->__vtable[1].SetFriendCount)
                ((int)&pFVar8->__vtable + (int)*(short *)&pFVar8->__vtable[1].GetFriendCount,0);
      pcVar11 = sim->__vtable;
      if (this->fVars[1] != 1) {
        (*(code *)pcVar11[1].IsStopped)
                  ((int)&sim->__vtable + (int)*(short *)&pcVar11[1].IsPaused,gNewFamilyStartHour);
        pcVar11 = sim->__vtable;
      }
      (*(code *)pcVar11[1].Resume)((int)&sim->__vtable + (int)*(short *)&pcVar11[1].Pause);
      (*(code *)sim->__vtable->GetPreviousExpenses)
                ((int)&sim->__vtable + (int)*(short *)&sim->__vtable->GetTodaysExpenses);
      ClearRouteHistory__9HouseImpl(local_b4);
      (*(code *)pOVar4->__vtable[1].GetFirst)
                ((int)&pOVar4->__vtable + (int)*(short *)&pOVar4->__vtable[1].GetObjectFromID,
                 0x3bc170,0);
    }
    pNVar13 = (this->field0_0x0).__vtable;
  }
  else {
LAB_00250190:
    if (local_bc != 0) {
      pFVar18 = pFVar8->__vtable;
      goto LAB_0025019c;
    }
    pNVar13 = (this->field0_0x0).__vtable;
  }
  (*(code *)pNVar13->CountHouses)
            ((this->fFilename).fChars + *(short *)&pNVar13->DeleteCharacter + -0xc);
  if (this->fVars[1] == 1) {
LAB_002503b0:
    GlobalDispatch__Fsi(0xf5,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    for (ppcVar14 = residents.start; ppcVar14 != residents.finish; ppcVar14 = ppcVar14 + 1) {
    }
    if (residents.start == (cXPerson__136_2096 **)0x0) {
      return err;
    }
    if ((int)residents.end_of_storage - (int)residents.start >> 2 == 0) {
      return err;
    }
    free(residents.start);
    return err;
                    /* end of inlined section */
  }
  pOVar17 = pOVar4->__vtable;
LAB_00250270:
  iVar20 = 0;
  iVar9 = (*(code *)pOVar17->DisableBuyAndBuild)
                    ((int)&pOVar4->__vtable + (int)*(short *)&pOVar17->FillInObjectStats);
  if (0 < iVar9) {
    pOVar17 = pOVar4->__vtable;
    do {
      p = (cXPerson__136_2096 *)
          (*(code *)pOVar17->ComputeStats)
                    ((int)&pOVar4->__vtable + (int)*(short *)&pOVar17->ShowTutorialInfo,iVar20);
      pcVar2 = p->_vb1996->__vtable;
      iVar10 = (*(code *)pcVar2[1].SetLevel)
                         ((int)&p->_vb1996->_vb1933 + (int)*(short *)&pcVar2[1].GetTreeID);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
      if ((int)(*(uint *)(iVar10 + 0x5c) & 0xc) >> 2 == 1) {
        lVar15 = (*(code *)p->__vtable->GetRecordDuration)
                           ((int)&p->_vb1996 + (int)*(short *)&p->__vtable->GetRecording,0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
        ppcVar14 = find__H2ZPP8cXPersonZP8cXPerson_X01X01RCX11_X01
                             (residents.start,residents.finish,&p);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
        if (ppcVar14 != residents.finish && lVar15 != 0) goto LAB_0024ff10;
        uVar22 = (*(code *)p->__vtable->GetRecordDuration)
                           ((int)&p->_vb1996 + (int)*(short *)&p->__vtable->GetRecording,0x3d);
        pNVar13 = (this->field0_0x0).__vtable;
        lVar15 = (*(code *)pNVar13[1].GetHouseNumberForLevel)
                           ((this->fFilename).fChars + *(short *)&pNVar13[1].Save + -0xc,uVar22);
        if (lVar15 != 0) {
          piVar12 = (int *)lVar15;
          lVar15 = (**(code **)(*piVar12 + 0x74))((int)piVar12 + (int)*(short *)(*piVar12 + 0x70));
          if ((lVar15 != 0) &&
             (sVar6 = (**(code **)(*piVar12 + 0x7c))
                                ((int)piVar12 + (int)*(short *)(*piVar12 + 0x78)), sVar6 == 0))
          goto LAB_0024ff10;
        }
      }
      iVar20 = iVar20 + 1;
      if (iVar9 <= iVar20) break;
      pOVar17 = pOVar4->__vtable;
    } while( true );
  }
  goto LAB_002503b0;
code_r0x0024fb0c:
  pFVar18 = ((*ppFVar19)->field0_0x0).__vtable;
  lVar15 = (*(code *)pFVar18->GetNewHouse)
                     ((int)&((*ppFVar19)->field0_0x0).__vtable +
                      (int)*(short *)&pFVar18->SetNewHouse);
  if (lVar15 != 0) {
    pFVar18 = ((*ppFVar19)->field0_0x0).__vtable;
    (*(code *)pFVar18->GetHTMLExportDirty)
              ((int)&((*ppFVar19)->field0_0x0).__vtable +
               (int)*(short *)&pFVar18->SetHTMLExportDirty,0);
  }
  pNVar13 = (this->field0_0x0).__vtable;
  (*(code *)pNVar13[1].DoStream)
            ((this->fFilename).fChars + *(short *)&pNVar13[1].GetNeighborHouseByIndex + -0xc,
             *ppFVar19);
  goto LAB_0024fab4;
LAB_0024fed0:
  pOVar17 = pOVar4->__vtable;
  iVar9 = *(int *)(*piVar12 + 4);
  sVar6 = *(short *)&pOVar17->GetNumObjects;
  uVar22 = (**(code **)(iVar9 + 700))(*piVar12 + (int)*(short *)(iVar9 + 0x2b8));
  (*(code *)pOVar17->CheckIntegrity)((int)&pOVar4->__vtable + (int)sVar6,uVar22);
  pOVar17 = pOVar4->__vtable;
  goto LAB_00250018;
LAB_0024ff10:
  pOVar17 = pOVar4->__vtable;
  sVar6 = *(short *)&pOVar17->GetNumObjects;
  pcVar2 = p->_vb1996->__vtable;
  uVar22 = (*(code *)pcVar2[1].UserCanPlace)
                     ((int)&p->_vb1996->_vb1933 + (int)*(short *)&pcVar2[1].IsPartOfMe);
  (*(code *)pOVar17->CheckIntegrity)((int)&pOVar4->__vtable + (int)sVar6,uVar22);
  pOVar17 = pOVar4->__vtable;
  goto LAB_00250270;
}

ErrType NeighborhoodImpl::SaveHouse(NghResFile *pFile) {
	Family *f;
	Int funds;
	ErrType err;
	Neighbor **n;
	
  cSimulator__vtable *pcVar1;
  Neighbor *pNVar2;
  Neighborhood__vtable *pNVar3;
  cSimulator *pcVar4;
  House *this_00;
  int *piVar5;
  int iVar6;
  Neighbor **ppNVar7;
  long lVar8;
  Neighbor **ppNVar9;
  undefined8 uVar10;
  
  this_00 = _5Globs_pHouse;
  uVar10 = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  piVar5 = (int *)(*(code *)_5Globs_pHouse->__vtable->EnterLiveMode)
                            ((int)&_5Globs_pHouse->__vtable +
                             (int)*(short *)&_5Globs_pHouse->__vtable->DoStream);
  pcVar4 = _5Globs_pSimulator;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  lVar8 = (**(code **)(*piVar5 + 0x74))((int)piVar5 + (int)*(short *)(*piVar5 + 0x70));
  if (lVar8 == 0) {
    iVar6 = *piVar5;
  }
  else {
    pcVar1 = pcVar4->__vtable;
    uVar10 = (*(code *)pcVar1->GetObjectsValue)
                       ((int)&pcVar4->__vtable + (int)*(short *)&pcVar1->SetArchValue);
    (**(code **)(*piVar5 + 0x104))((int)piVar5 + (int)*(short *)(*piVar5 + 0x100),1);
    iVar6 = *piVar5;
  }
  (**(code **)(iVar6 + 0xa4))((int)piVar5 + (int)*(short *)(iVar6 + 0xa0),uVar10);
  FlushHouseData__10NghResFile((NghResFile__0_845 *)pFile);
  iVar6 = SaveFile__9HouseImplP8iResFile((HouseImpl *)this_00,&pFile->field0_0x0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  ppNVar9 = (this->fNeighbors).field0_0x0.start;
LAB_00250520:
                    /* end of inlined section */
  if (ppNVar9 == (this->fNeighbors).field0_0x0.finish) {
LAB_0025059c:
    if (iVar6 == 0) {
      pNVar3 = (this->field0_0x0).__vtable;
      (*(code *)pNVar3->GetFamily)
                ((this->fFilename).fChars + *(short *)&pNVar3->GetFamilyByIndex + -0xc,pFile,
                 _5Globs_iSaveFileVersion);
    }
    return iVar6;
  }
  pNVar2 = *ppNVar9;
  do {
    if (pNVar2 == (Neighbor *)0x0) {
      ppNVar7 = (this->fNeighbors).field0_0x0.finish;
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Neighbor.h */
                    /* end of inlined section */
      if ((int)(pNVar2->fSelector->fFlags & 0xcU) >> 2 == 1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Neighbor.h */
                    /* end of inlined section */
        if (pNVar2->fData[0x3d] == 0) {
          if (pNVar2->fData[0x43] == 0) {
            pNVar3 = (this->field0_0x0).__vtable;
            lVar8 = (*(code *)pNVar3[1].RelationshipsChanged)
                              ((this->fFilename).fChars +
                               *(short *)&pNVar3[1].SavePersistentData + -0xc);
            if (lVar8 == 0) break;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
            ppNVar7 = (this->fNeighbors).field0_0x0.finish;
          }
          else {
            ppNVar7 = (this->fNeighbors).field0_0x0.finish;
          }
        }
        else {
          ppNVar7 = (this->fNeighbors).field0_0x0.finish;
        }
      }
      else {
        ppNVar7 = (this->fNeighbors).field0_0x0.finish;
      }
    }
                    /* end of inlined section */
    ppNVar9 = ppNVar9 + 1;
    if (ppNVar9 == ppNVar7) goto LAB_0025059c;
    pNVar2 = *ppNVar9;
  } while( true );
  ppNVar9 = (this->fNeighbors).field0_0x0.start;
  goto LAB_00250520;
}

Int NeighborhoodImpl::GetHouseNumber() {
  return this->fHouseNum;
}

void NeighborhoodImpl::UnloadHouse() {
  return;
}

void NeighborhoodImpl::GetLotPosition(int houseNumber, int *x, int *y) {
  int iVar1;
  
  if (8 < houseNumber - 1U) {
    *y = 0;
    *x = 0;
    return;
  }
  iVar1 = fLotPos[houseNumber].y;
  *x = fLotPos[houseNumber].x;
  *y = iVar1;
  return;
}

void NeighborhoodImpl::TutorialCompleted(int stage) {
	int nextStage;
	FileName houseFileName;
	IFFResFile2 houseFile;
	IFFResFile2 nghFile;
	SInt32 version;
	AUTOPTR<cSimulator> sim;
	NeighborhoodImpl ngh;
	
  Neighborhood__vtable *pNVar1;
  int iVar2;
  cSimulator *obj;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  ushort uVar3;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  StackString_260_ houseFileName;
  IFFResFile2__136_2646 houseFile;
  IFFResFile2__136_2646 nghFile;
  AUTOPTR_cSimulator_ sim;
  NeighborhoodImpl ngh;
  int version;
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
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  local_30 = (undefined4)unaff_s5;
  uStack_2c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
                    /* end of inlined section */
  local_20 = (undefined4)unaff_s6;
  uStack_1c = (undefined4)((ulong)unaff_s6 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* end of inlined section */
  uVar3 = (short)stage + 1;
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  __12StringBufferPcUi(&houseFileName.field0_0x0,(char *)((uint)&houseFileName | 8),0x104);
                    /* end of inlined section */
  pNVar1 = (this->field0_0x0).__vtable;
  (*(code *)pNVar1->GetHouseFileInfo)
            ((this->fFilename).fChars + *(short *)&pNVar1->GetHouseNumber + -0xc,this->fHouseNum,
             &houseFileName);
  __11IFFResFile2((IFFResFile2__143_989 *)&houseFile);
  __11IFFResFile2((IFFResFile2__143_989 *)&nghFile);
  iVar2 = Open__11IFFResFile2RC12StringBuffer
                    ((IFFResFile2__143_989 *)&houseFile,&houseFileName.field0_0x0);
  if ((iVar2 == 0) &&
     (iVar2 = Open__11IFFResFile2RC12StringBuffer
                        ((IFFResFile2__143_989 *)&nghFile,&(this->fFilename).field0_0x0), iVar2 == 0
     )) {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
    __16NeighborhoodImpl(&ngh);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
    DestroyInstance__10cSimulatorP10cSimulator((cSimulator *)0x0);
    obj = CreateInstance__10cSimulator();
                    /* end of inlined section */
                    /* end of inlined section */
    if (stage == 0) {
                    /* end of inlined section */
      ReconLoadObject__H1Z10cSimulator_PX01P8iResFileisPi_i
                (obj,(iResFile__0_3211 *)(IFFResFile2__143_989 *)&houseFile,kSimulatorResType,
                 kSimulatorResourceID,&version);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
      (*(code *)obj->__vtable->IsStopped)
                ((int)&obj->__vtable + (int)*(short *)&obj->__vtable->IsPaused,0x1a,0);
      ReconSaveObject__H1Z10cSimulator_PX01P8iResFileisi_i
                (obj,(iResFile__0_3211 *)(IFFResFile2__143_989 *)&houseFile,kSimulatorResType,
                 kSimulatorResourceID,version);
    }
    ReconLoadObject__H1Z16NeighborhoodImpl_PX01P8iResFileisPi_i
              (&ngh,(iResFile__6_5027 *)(IFFResFile2__143_989 *)&nghFile,0x4e474248,1,&version);
    ngh.fVars[2] = 0;
    ngh.fVars[1] = uVar3;
    ReconSaveObject__H1Z16NeighborhoodImpl_PX01P8iResFileisi_i
              (&ngh,(iResFile__6_5027 *)(IFFResFile2__143_989 *)&nghFile,0x4e474248,1,version);
    if (stage == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pSimulator->__vtable->IsStopped)
                ((int)&_5Globs_pSimulator->__vtable +
                 (int)*(short *)&_5Globs_pSimulator->__vtable->IsPaused,0x1a,0);
      this->fVars[1] = uVar3;
    }
    else {
      this->fVars[1] = uVar3;
    }
    this->fVars[2] = 0;
    ___16NeighborhoodImpl(&ngh,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
    DestroyInstance__10cSimulatorP10cSimulator(obj);
                    /* end of inlined section */
                    /* end of inlined section */
    ___11IFFResFile2((IFFResFile2__143_989 *)&nghFile,2);
    ___11IFFResFile2((IFFResFile2__143_989 *)&houseFile,2);
  }
  else {
    ___11IFFResFile2((IFFResFile2__143_989 *)&nghFile,2);
    ___11IFFResFile2((IFFResFile2__143_989 *)&houseFile,2);
  }
  return;
}

void NeighborhoodImpl::CancelTutorial() {
	cXObject *tutorial;
	
  short sVar1;
  ObjectModule__vtable *pOVar2;
  ObjectModule *pOVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  pOVar3 = _5Globs_pObjectModule;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  lVar4 = (*(code *)_5Globs_pObjectModule->__vtable[1].GetNumGlobalRoutineSlots)
                    ((int)&_5Globs_pObjectModule->__vtable +
                     (int)*(short *)&_5Globs_pObjectModule->__vtable[1].GetGlobalRoutingSlot);
  if (lVar4 != 0) {
    iVar6 = (int)lVar4;
    (**(code **)(*(int *)(iVar6 + 4) + 0xd4))
              (iVar6 + *(short *)(*(int *)(iVar6 + 4) + 0xd0),0x3bc180);
    pOVar2 = pOVar3->__vtable;
    sVar1 = *(short *)&pOVar2->GetNumObjects;
    uVar5 = (**(code **)(*(int *)(iVar6 + 4) + 700))
                      (iVar6 + *(short *)(*(int *)(iVar6 + 4) + 0x2b8));
    (*(code *)pOVar2->CheckIntegrity)((int)&pOVar3->__vtable + (int)sVar1,uVar5);
  }
  return;
}

void NeighborhoodImpl::AddFamilyHistoryStat() {
  return;
}

void NeighborhoodImpl::UpdateInstanceVisitorTypes() {
	Family *f;
	int iNumPeople;
	int j;
	cXPerson *p;
	Int visType;
	
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  piVar1 = (int *)(*(code *)_5Globs_pHouse->__vtable->EnterLiveMode)
                            ((int)&_5Globs_pHouse->__vtable +
                             (int)*(short *)&_5Globs_pHouse->__vtable->DoStream);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  iVar2 = (*(code *)_5Globs_pObjectModule->__vtable->DisableBuyAndBuild)
                    ((int)&_5Globs_pObjectModule->__vtable +
                     (int)*(short *)&_5Globs_pObjectModule->__vtable->FillInObjectStats);
  iVar7 = 0;
  if (0 < iVar2) {
    do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      iVar8 = iVar7 + 1;
      uVar3 = (*(code *)_5Globs_pObjectModule->__vtable->ComputeStats)
                        ((int)&_5Globs_pObjectModule->__vtable +
                         (int)*(short *)&_5Globs_pObjectModule->__vtable->ShowTutorialInfo,iVar7);
      iVar7 = (int)uVar3;
      lVar4 = (**(code **)(*(int *)(iVar7 + 4) + 0xe4))
                        (iVar7 + *(short *)(*(int *)(iVar7 + 4) + 0xe0),0x20);
      lVar5 = 1;
      if (lVar4 != 0) {
        lVar5 = lVar4;
      }
      uVar6 = (undefined2)lVar5;
      lVar5 = (**(code **)(*piVar1 + 0x34))((int)piVar1 + (int)*(short *)(*piVar1 + 0x30),uVar3);
      if (lVar5 != 0) {
        uVar6 = 0;
      }
      (**(code **)(*(int *)(iVar7 + 4) + 0xec))
                (iVar7 + *(short *)(*(int *)(iVar7 + 4) + 0xe8),0x20,uVar6);
      iVar7 = iVar8;
    } while (iVar8 < iVar2);
  }
  return;
}

void NeighborhoodImpl::SwitchToNewNeighborhood() {
	FileName test;
	
  Neighborhood__vtable *pNVar1;
  StackString_260_ test;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  __12StringBufferPcUi(&test.field0_0x0,(char *)((uint)&test | 8),0x104);
  append__12StringBufferPCci(&test.field0_0x0,"UserData/Neighborhood",-1);
                    /* end of inlined section */
  pNVar1 = (this->field0_0x0).__vtable;
  (*(code *)pNVar1->GetFriendCount)
            ((this->fFilename).fChars + *(short *)&pNVar1->GetFamilyFriendsCount + -0xc,&test);
  return;
}

UnlockedRecon* NeighborhoodImpl::GetUnlockedRecon() {
  return &this->m_UnlockedRecon;
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

ErrType int ReconLoadObject<NeighborhoodImpl>(NeighborhoodImpl *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 *version) {
	SimpleReconObject<NeighborhoodImpl> recon;
	ReconBuilder rb;
	NeighborhoodImpl *obj;
	SInt32 type;
	
  int iVar1;
  SimpleReconObject_NeighborhoodImpl_ recon;
  ReconBuilder__26_4392 rb;
  
  recon.field0_0x0.__vtable = (ReconObject__vtable *)_vt_t17SimpleReconObject1Z16NeighborhoodImpl;
  recon.fObj = obj;
  recon.fType = type;
  iVar1 = Reconstitute__12ReconBuilderP11ReconObjectP8iResFilesPi
                    ((ReconBuilder__6_5003 *)&rb,&recon.field0_0x0,file,id,version);
  ___11ReconObject(&recon.field0_0x0,2);
  return iVar1;
}

ErrType int ReconLoadObject<ReconStreamPtrVector<Neighbor> >(ReconStreamPtrVector<Neighbor> *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 *version) {
	SimpleReconObject<ReconStreamPtrVector<Neighbor> > recon;
	ReconBuilder rb;
	ReconStreamPtrVector<Neighbor> *obj;
	SInt32 type;
	
  int iVar1;
  SimpleReconObject_ReconStreamPtrVector_Neighbor___ recon;
  ReconBuilder__26_4392 rb;
  
  recon.field0_0x0.__vtable =
       (ReconObject__vtable *)_vt_t17SimpleReconObject1Zt20ReconStreamPtrVector1Z8Neighbor;
  recon.fObj = obj;
  recon.fType = type;
  iVar1 = Reconstitute__12ReconBuilderP11ReconObjectP8iResFilesPi
                    ((ReconBuilder__6_5003 *)&rb,&recon.field0_0x0,file,id,version);
  ___11ReconObject(&recon.field0_0x0,2);
  return iVar1;
}

ErrType int ReconLoadPtrVector<Neighbor>(vector<Neighbor *,__malloc_alloc_template<0> > &v, iResFile *file, SInt32 type, SInt16 id, SInt32 *version) {
	ReconStreamPtrVector<Neighbor> recon;
	SInt32 type;
	
  int iVar1;
  ReconStreamPtrVector_Neighbor_ recon;
  
  recon.fVec = v;
  recon.fType = type;
  iVar1 = ReconLoadObject__H1Zt20ReconStreamPtrVector1Z8Neighbor_PX01P8iResFileisPi_i
                    (&recon,file,type,id,version);
  return iVar1;
}

FamilyImpl** FamilyImpl ** copy_backward<FamilyImpl **, FamilyImpl **>(FamilyImpl **first, FamilyImpl **last, FamilyImpl **result) {
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

FamilyImpl** FamilyImpl ** uninitialized_copy<FamilyImpl **, FamilyImpl **>(FamilyImpl **first, FamilyImpl **last, FamilyImpl **result) {
	FamilyImpl **p;
	FamilyImpl *&value;
	void *pAddress;
	
  FamilyImpl *pFVar1;
  FamilyImpl **ppFVar2;
  
  ppFVar2 = result;
  if (first != last) {
    do {
      pFVar1 = *first;
      first = first + 1;
      result = ppFVar2 + 1;
      *ppFVar2 = pFVar1;
      ppFVar2 = result;
    } while (first != last);
  }
  return result;
}

void vector<FamilyImpl *, __malloc_alloc_template<0> >::insert_aux(FamilyImpl **position, FamilyImpl *&x) {
	FamilyImpl *x_copy;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	void *result;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	FamilyImpl **p;
	FamilyImpl *&value;
	void *pAddress;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	FamilyImpl **first;
	FamilyImpl **pointer;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	
  FamilyImpl *pFVar1;
  uint size;
  FamilyImpl **ppFVar2;
  int iVar3;
  FamilyImpl **ppFVar4;
  int iVar5;
  
  ppFVar2 = this->finish;
  if (ppFVar2 == this->end_of_storage) {
    iVar5 = (int)ppFVar2 - (int)this->start >> 2;
    iVar3 = 1;
    if (iVar5 != 0) {
      iVar3 = iVar5 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    size = iVar3 << 2;
    if (iVar3 == 0) {
      ppFVar2 = (FamilyImpl **)0x0;
      size = 0;
    }
    else {
      ppFVar2 = (FamilyImpl **)malloc(size);
      if (ppFVar2 == (FamilyImpl **)0x0) {
        ppFVar2 = (FamilyImpl **)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
      }
    }
                    /* end of inlined section */
                    /* end of inlined section */
    uninitialized_copy__H2ZPP10FamilyImplZPP10FamilyImpl_X01X01X11_X11(this->start,position,ppFVar2)
    ;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *(FamilyImpl **)((int)ppFVar2 + ((int)position - (int)this->start)) = *x;
                    /* end of inlined section */
    uninitialized_copy__H2ZPP10FamilyImplZPP10FamilyImpl_X01X01X11_X11
              (position,this->finish,
               (FamilyImpl **)((int)ppFVar2 + (int)position + (4 - (int)this->start)));
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    ppFVar4 = this->start;
    if (ppFVar4 == this->finish) {
      ppFVar4 = this->start;
    }
    else {
      do {
        ppFVar4 = ppFVar4 + 1;
      } while (ppFVar4 != this->finish);
                    /* end of inlined section */
      ppFVar4 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((ppFVar4 != (FamilyImpl **)0x0) && ((int)this->end_of_storage - (int)ppFVar4 >> 2 != 0)) {
      free(ppFVar4);
                    /* end of inlined section */
    }
    ppFVar4 = ppFVar2 + iVar5;
    this->start = ppFVar2;
    this->end_of_storage = (FamilyImpl **)((int)ppFVar2 + size);
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *ppFVar2 = ppFVar2[-1];
                    /* end of inlined section */
    pFVar1 = *x;
    copy_backward__H2ZPP10FamilyImplZPP10FamilyImpl_X01X01X11_X11
              (position,this->finish + -1,this->finish);
    *position = pFVar1;
    ppFVar4 = this->finish;
  }
  this->finish = ppFVar4 + 1;
  return;
}

int int __lg<int>(int n) {
	int k;
	
  int iVar1;
  
  iVar1 = 0;
  if (n != 1) {
    do {
      n = n / 2;
      iVar1 = iVar1 + 1;
    } while (n != 1);
  }
  return iVar1;
}

void void __push_heap<FamilyImpl **, int, FamilyImpl *, bool (*)>(FamilyImpl **first, int holeIndex, int topIndex, FamilyImpl *value, bool (*comp)(/* parameters unknown */)) {
	int parent;
	
  int iVar1;
  long lVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  int iVar3;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  FamilyImpl *local_90 [4];
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
  
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_s6;
  uStack_1c = (undefined4)((ulong)unaff_s6 >> 0x20);
  iVar1 = holeIndex + -1;
  local_30 = (undefined4)unaff_s5;
  uStack_2c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  while( true ) {
    iVar3 = iVar1 / 2;
    if (holeIndex <= topIndex) break;
    local_90[0] = value;
    lVar2 = (*(code *)comp)(first + iVar3,local_90);
    if (lVar2 == 0) break;
    iVar1 = iVar3 + -1;
    first[holeIndex] = first[iVar3];
    holeIndex = iVar3;
  }
  first[holeIndex] = value;
  return;
}

void void __adjust_heap<FamilyImpl **, int, FamilyImpl *, bool (*)>(FamilyImpl **first, int holeIndex, int len, FamilyImpl *value, bool (*comp)(/* parameters unknown */)) {
	int topIndex;
	int secondChild;
	
  long lVar1;
  FamilyImpl **ppFVar2;
  int iVar3;
  int iVar4;
  int holeIndex_00;
  
  iVar3 = holeIndex * 2 + 2;
  holeIndex_00 = holeIndex;
  while (iVar3 < len) {
    lVar1 = (*(code *)comp)(first + iVar3,first + iVar3 + -1);
    iVar4 = iVar3;
    if (lVar1 != 0) {
      iVar4 = iVar3 + -1;
    }
    first[holeIndex_00] = first[iVar4];
    holeIndex_00 = iVar4;
    iVar3 = (iVar4 + 1) * 2;
  }
  if (iVar3 == len) {
    ppFVar2 = first + holeIndex_00;
    holeIndex_00 = iVar3 + -1;
    *ppFVar2 = first[iVar3 + -1];
  }
  __push_heap__H4ZPP10FamilyImplZiZP10FamilyImplZPFRCP6FamilyRCP6Family_b_X01X11X11X21X31_v
            (first,holeIndex_00,holeIndex,value,comp);
  return;
}

void void __make_heap<FamilyImpl **, bool (*), FamilyImpl *, int>(FamilyImpl **first, FamilyImpl **last, bool (*comp)(/* parameters unknown */)) {
	ptrdiff_t parent;
	
  int holeIndex;
  FamilyImpl **ppFVar1;
  int len;
  
  len = (int)last - (int)first >> 2;
  if (1 < len) {
    holeIndex = (len + -2) / 2;
    ppFVar1 = first + holeIndex;
    while( true ) {
      __adjust_heap__H4ZPP10FamilyImplZiZP10FamilyImplZPFRCP6FamilyRCP6Family_b_X01X11X11X21X31_v
                (first,holeIndex,len,*ppFVar1,comp);
      ppFVar1 = ppFVar1 + -1;
      if (holeIndex == 0) break;
      holeIndex = holeIndex + -1;
    }
  }
  return;
}

void void sort_heap<FamilyImpl **, bool (*)>(FamilyImpl **first, FamilyImpl **last, bool (*comp)(/* parameters unknown */)) {
	FamilyImpl **first;
	bool (*comp)(/* parameters unknown */);
	bool (*comp)(/* parameters unknown */);
	FamilyImpl **first;
	FamilyImpl **first;
	FamilyImpl *value;
	bool (*comp)(/* parameters unknown */);
	
  FamilyImpl *value;
  FamilyImpl *pFVar1;
  FamilyImpl **ppFVar2;
  int iVar3;
  
  if (1 < (int)last - (int)first >> 2) {
    iVar3 = (int)last - (int)first;
    pFVar1 = *first;
    ppFVar2 = last;
    while( true ) {
      ppFVar2 = ppFVar2 + -1;
      value = *ppFVar2;
      iVar3 = iVar3 + -4;
      *ppFVar2 = pFVar1;
      last = last + -1;
      __adjust_heap__H4ZPP10FamilyImplZiZP10FamilyImplZPFRCP6FamilyRCP6Family_b_X01X11X11X21X31_v
                (first,0,iVar3 >> 2,value,comp);
      if ((int)last - (int)first >> 2 < 2) break;
      pFVar1 = *first;
    }
  }
  return;
}

void void __partial_sort<FamilyImpl **, FamilyImpl *, bool (*)>(FamilyImpl **first, FamilyImpl **middle, FamilyImpl **last, bool (*comp)(/* parameters unknown */)) {
	FamilyImpl **first;
	FamilyImpl **last;
	bool (*comp)(/* parameters unknown */);
	FamilyImpl **i;
	FamilyImpl **first;
	FamilyImpl **last;
	FamilyImpl **result;
	FamilyImpl *value;
	bool (*comp)(/* parameters unknown */);
	
  FamilyImpl *value;
  long lVar1;
  code *in_t0_lo;
  FamilyImpl **ppFVar2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/heap.h */
  __make_heap__H4ZPP10FamilyImplZPFRCP6FamilyRCP6Family_bZP10FamilyImplZi_X01X01X11PX21PX31_v
            (first,middle,in_t0_lo);
                    /* end of inlined section */
  if (middle < last) {
    ppFVar2 = middle;
    do {
      lVar1 = (*in_t0_lo)(ppFVar2,first);
      if (lVar1 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/iterator.h */
        value = *ppFVar2;
        *ppFVar2 = *first;
        __adjust_heap__H4ZPP10FamilyImplZiZP10FamilyImplZPFRCP6FamilyRCP6Family_b_X01X11X11X21X31_v
                  (first,0,(int)middle - (int)first >> 2,value,in_t0_lo);
      }
                    /* end of inlined section */
      ppFVar2 = ppFVar2 + 1;
    } while (ppFVar2 < last);
  }
  sort_heap__H2ZPP10FamilyImplZPFRCP6FamilyRCP6Family_b_X01X01X11_v(first,middle,in_t0_lo);
  return;
}

FamilyImpl** FamilyImpl ** __unguarded_partition<FamilyImpl **, FamilyImpl *, bool (*)>(FamilyImpl **first, FamilyImpl **last, FamilyImpl *pivot, bool (*comp)(/* parameters unknown */)) {
	FamilyImpl **a;
	FamilyImpl **b;
	FamilyImpl **b;
	FamilyImpl **a;
	FamilyImpl *tmp;
	
  FamilyImpl *pFVar1;
  long lVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  FamilyImpl *local_60 [4];
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
  
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  while( true ) {
    while( true ) {
      local_60[0] = pivot;
      lVar2 = (*(code *)comp)(first,local_60);
      if (lVar2 == 0) break;
      first = first + 1;
    }
    do {
      last = last + -1;
      local_60[0] = pivot;
      lVar2 = (*(code *)comp)(local_60,last);
    } while (lVar2 != 0);
    if (last <= first) break;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    pFVar1 = *first;
    *first = *last;
    *last = pFVar1;
    first = first + 1;
                    /* end of inlined section */
  }
  return first;
}

void void __introsort_loop<FamilyImpl **, FamilyImpl *, int, bool (*)>(FamilyImpl **first, FamilyImpl **last, int depth_limit, bool (*comp)(/* parameters unknown */)) {
	FamilyImpl **cut;
	FamilyImpl **first;
	FamilyImpl **middle;
	FamilyImpl **last;
	bool (*comp)(/* parameters unknown */);
	FamilyImpl *&a;
	FamilyImpl *&b;
	FamilyImpl *&c;
	bool (*comp)(/* parameters unknown */);
	
  int iVar1;
  FamilyImpl **ppFVar2;
  long lVar3;
  FamilyImpl **ppFVar4;
  code *in_t0_lo;
  FamilyImpl **ppFVar5;
  
  iVar1 = (int)last - (int)first;
  while( true ) {
    if (iVar1 >> 2 < 0x11) {
      return;
    }
    if (comp == (undefined1 *)0x0) break;
    comp = comp + -1;
    ppFVar5 = last + -1;
    ppFVar2 = first + (((int)last - (int)first >> 2) - ((int)last - (int)first >> 0x1f) >> 1);
    lVar3 = (*in_t0_lo)(first,ppFVar2);
    if (lVar3 == 0) {
      lVar3 = (*in_t0_lo)(first,ppFVar5);
      ppFVar4 = first;
      if ((lVar3 == 0) && (lVar3 = (*in_t0_lo)(ppFVar2,ppFVar5), ppFVar4 = ppFVar5, lVar3 == 0)) {
        ppFVar4 = ppFVar2;
      }
    }
    else {
      lVar3 = (*in_t0_lo)(ppFVar2,ppFVar5);
      ppFVar4 = ppFVar2;
      if ((lVar3 == 0) && (lVar3 = (*in_t0_lo)(first,ppFVar5), ppFVar4 = ppFVar5, lVar3 == 0)) {
        ppFVar4 = first;
      }
    }
    ppFVar2 = __unguarded_partition__H3ZPP10FamilyImplZP10FamilyImplZPFRCP6FamilyRCP6Family_b_X01X01X11X21_X01
                        (first,last,*ppFVar4,in_t0_lo);
    __introsort_loop__H4ZPP10FamilyImplZP10FamilyImplZiZPFRCP6FamilyRCP6Family_b_X01X01PX11X21X31_v
              (ppFVar2,last,0,comp);
    iVar1 = (int)ppFVar2 - (int)first;
    last = ppFVar2;
  }
                    /* end of inlined section */
  __partial_sort__H3ZPP10FamilyImplZP10FamilyImplZPFRCP6FamilyRCP6Family_b_X01X01X01PX11X21_v
            (first,last,last,(undefined1 *)0x0);
  return;
}

void void __unguarded_linear_insert<FamilyImpl **, FamilyImpl *, bool (*)>(FamilyImpl **last, FamilyImpl *value, bool (*comp)(/* parameters unknown */)) {
	FamilyImpl **next;
	
  long lVar1;
  FamilyImpl **ppFVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  FamilyImpl *local_60 [4];
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
  
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  while( true ) {
    ppFVar2 = last + -1;
    local_60[0] = value;
    lVar1 = (*(code *)comp)(local_60,ppFVar2);
    if (lVar1 == 0) break;
    *last = *ppFVar2;
    last = ppFVar2;
  }
  *last = value;
  return;
}

void void __insertion_sort<FamilyImpl **, bool (*)>(FamilyImpl **first, FamilyImpl **last, bool (*comp)(/* parameters unknown */)) {
	FamilyImpl **i;
	FamilyImpl **first;
	FamilyImpl **last;
	bool (*comp)(/* parameters unknown */);
	FamilyImpl *value;
	
  FamilyImpl *value;
  long lVar1;
  undefined8 unaff_s0;
  FamilyImpl **last_00;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  FamilyImpl *local_80 [4];
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
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if ((first != last) && (last_00 = first + 1, last_00 != last)) {
                    /* end of inlined section */
    value = *last_00;
    while( true ) {
      local_80[0] = value;
      lVar1 = (*(code *)comp)(local_80,first);
      if (lVar1 == 0) {
        __unguarded_linear_insert__H3ZPP10FamilyImplZP10FamilyImplZPFRCP6FamilyRCP6Family_b_X01X11X21_v
                  (last_00,value,comp);
      }
      else {
        copy_backward__H2ZPP10FamilyImplZPP10FamilyImpl_X01X01X11_X11(first,last_00,last_00 + 1);
        *first = value;
      }
      last_00 = last_00 + 1;
      if (last_00 == last) break;
      value = *last_00;
    }
  }
  return;
}

void void __unguarded_insertion_sort_aux<FamilyImpl **, FamilyImpl *, bool (*)>(FamilyImpl **first, FamilyImpl **last, bool (*comp)(/* parameters unknown */)) {
	FamilyImpl **i;
	
  FamilyImpl *value;
  undefined1 *in_a3_lo;
  FamilyImpl **ppFVar1;
  
  if (first != last) {
    value = *first;
    while( true ) {
      ppFVar1 = first + 1;
      __unguarded_linear_insert__H3ZPP10FamilyImplZP10FamilyImplZPFRCP6FamilyRCP6Family_b_X01X11X21_v
                (first,value,in_a3_lo);
      if (ppFVar1 == last) break;
      value = *ppFVar1;
      first = ppFVar1;
    }
  }
  return;
}

void void __final_insertion_sort<FamilyImpl **, bool (*)>(FamilyImpl **first, FamilyImpl **last, bool (*comp)(/* parameters unknown */)) {
	FamilyImpl **last;
	bool (*comp)(/* parameters unknown */);
	
  if ((int)last - (int)first >> 2 < 0x11) {
    __insertion_sort__H2ZPP10FamilyImplZPFRCP6FamilyRCP6Family_b_X01X01X11_v(first,last,comp);
  }
  else {
    __insertion_sort__H2ZPP10FamilyImplZPFRCP6FamilyRCP6Family_b_X01X01X11_v
              (first,first + 0x10,comp);
    __unguarded_insertion_sort_aux__H3ZPP10FamilyImplZP10FamilyImplZPFRCP6FamilyRCP6Family_b_X01X01PX11X21_v
              (first + 0x10,last,(undefined1 *)0x0);
  }
  return;
}

ErrType int ReconSaveObject<NeighborhoodImpl>(NeighborhoodImpl *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 version) {
	SimpleReconObject<NeighborhoodImpl> recon;
	ReconBuilder rb;
	NeighborhoodImpl *obj;
	SInt32 type;
	
  int iVar1;
  SimpleReconObject_NeighborhoodImpl_ recon;
  ReconBuilder__26_4392 rb;
  
  recon.field0_0x0.__vtable = (ReconObject__vtable *)_vt_t17SimpleReconObject1Z16NeighborhoodImpl;
  recon.fObj = obj;
  recon.fType = type;
  iVar1 = Compact__12ReconBuilderP11ReconObjectiP8iResFiles
                    ((ReconBuilder__6_5003 *)&rb,&recon.field0_0x0,version,file,id);
  ___11ReconObject(&recon.field0_0x0,2);
  return iVar1;
}

ErrType int ReconSaveObject<ReconStreamPtrVector<Neighbor> >(ReconStreamPtrVector<Neighbor> *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 version) {
	SimpleReconObject<ReconStreamPtrVector<Neighbor> > recon;
	ReconBuilder rb;
	ReconStreamPtrVector<Neighbor> *obj;
	SInt32 type;
	
  int iVar1;
  SimpleReconObject_ReconStreamPtrVector_Neighbor___ recon;
  ReconBuilder__26_4392 rb;
  
  recon.field0_0x0.__vtable =
       (ReconObject__vtable *)_vt_t17SimpleReconObject1Zt20ReconStreamPtrVector1Z8Neighbor;
  recon.fObj = obj;
  recon.fType = type;
  iVar1 = Compact__12ReconBuilderP11ReconObjectiP8iResFiles
                    ((ReconBuilder__6_5003 *)&rb,&recon.field0_0x0,version,file,id);
  ___11ReconObject(&recon.field0_0x0,2);
  return iVar1;
}

ErrType int ReconSavePtrVector<Neighbor>(vector<Neighbor *,__malloc_alloc_template<0> > &v, iResFile *file, SInt32 type, SInt16 id, SInt32 version) {
	ReconStreamPtrVector<Neighbor> recon;
	SInt32 type;
	
  int iVar1;
  ReconStreamPtrVector_Neighbor_ recon;
  
  recon.fVec = v;
  recon.fType = type;
  iVar1 = ReconSaveObject__H1Zt20ReconStreamPtrVector1Z8Neighbor_PX01P8iResFileisi_i
                    (&recon,file,type,id,version);
  return iVar1;
}

Neighbor** Neighbor ** copy_backward<Neighbor **, Neighbor **>(Neighbor **first, Neighbor **last, Neighbor **result) {
  if (first != last) {
    do {
      last = last + -1;
      result = result + -1;
      *result = *last;
    } while (first != last);
  }
  return result;
}

Neighbor** Neighbor ** uninitialized_copy<Neighbor **, Neighbor **>(Neighbor **first, Neighbor **last, Neighbor **result) {
	Neighbor **p;
	Neighbor *&value;
	void *pAddress;
	
  Neighbor *pNVar1;
  Neighbor **ppNVar2;
  
  ppNVar2 = result;
  if (first != last) {
    do {
      pNVar1 = *first;
      first = first + 1;
      result = ppNVar2 + 1;
      *ppNVar2 = pNVar1;
      ppNVar2 = result;
    } while (first != last);
  }
  return result;
}

void vector<Neighbor *, __malloc_alloc_template<0> >::insert_aux(Neighbor **position, Neighbor *&x) {
	Neighbor *x_copy;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	void *result;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	Neighbor **p;
	Neighbor *&value;
	void *pAddress;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	Neighbor **first;
	Neighbor **pointer;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	
  Neighbor *pNVar1;
  uint size;
  Neighbor **ppNVar2;
  int iVar3;
  Neighbor **ppNVar4;
  int iVar5;
  
  ppNVar2 = this->finish;
  if (ppNVar2 == this->end_of_storage) {
    iVar5 = (int)ppNVar2 - (int)this->start >> 2;
    iVar3 = 1;
    if (iVar5 != 0) {
      iVar3 = iVar5 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    size = iVar3 << 2;
    if (iVar3 == 0) {
      ppNVar2 = (Neighbor **)0x0;
      size = 0;
    }
    else {
      ppNVar2 = (Neighbor **)malloc(size);
      if (ppNVar2 == (Neighbor **)0x0) {
        ppNVar2 = (Neighbor **)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
      }
    }
                    /* end of inlined section */
                    /* end of inlined section */
    uninitialized_copy__H2ZPP8NeighborZPP8Neighbor_X01X01X11_X11(this->start,position,ppNVar2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *(Neighbor **)((int)ppNVar2 + ((int)position - (int)this->start)) = *x;
                    /* end of inlined section */
    uninitialized_copy__H2ZPP8NeighborZPP8Neighbor_X01X01X11_X11
              (position,this->finish,
               (Neighbor **)((int)ppNVar2 + (int)position + (4 - (int)this->start)));
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    ppNVar4 = this->start;
    if (ppNVar4 == this->finish) {
      ppNVar4 = this->start;
    }
    else {
      do {
        ppNVar4 = ppNVar4 + 1;
      } while (ppNVar4 != this->finish);
                    /* end of inlined section */
      ppNVar4 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((ppNVar4 != (Neighbor **)0x0) && ((int)this->end_of_storage - (int)ppNVar4 >> 2 != 0)) {
      free(ppNVar4);
                    /* end of inlined section */
    }
    ppNVar4 = ppNVar2 + iVar5;
    this->start = ppNVar2;
    this->end_of_storage = (Neighbor **)((int)ppNVar2 + size);
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *ppNVar2 = ppNVar2[-1];
                    /* end of inlined section */
    pNVar1 = *x;
    copy_backward__H2ZPP8NeighborZPP8Neighbor_X01X01X11_X11(position,this->finish + -1,this->finish)
    ;
    *position = pNVar1;
    ppNVar4 = this->finish;
  }
  this->finish = ppNVar4 + 1;
  return;
}

ErrType int ReconLoadObject<cSimulator>(cSimulator *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 *version) {
	SimpleReconObject<cSimulator> recon;
	ReconBuilder rb;
	cSimulator *obj;
	SInt32 type;
	
  int iVar1;
  SimpleReconObject_cSimulator_ recon;
  ReconBuilder__26_4392 rb;
  
  recon.field0_0x0.__vtable = (ReconObject__vtable *)_vt_t17SimpleReconObject1Z10cSimulator;
  recon.fObj = obj;
  recon.fType = type;
  iVar1 = Reconstitute__12ReconBuilderP11ReconObjectP8iResFilesPi
                    ((ReconBuilder__6_5003 *)&rb,&recon.field0_0x0,file,id,version);
  ___11ReconObject(&recon.field0_0x0,2);
  return iVar1;
}

cXPerson** cXPerson ** copy_backward<cXPerson **, cXPerson **>(cXPerson **first, cXPerson **last, cXPerson **result) {
  if (first != last) {
    do {
      last = last + -1;
      result = result + -1;
      *result = *last;
    } while (first != last);
  }
  return result;
}

cXPerson** cXPerson ** uninitialized_copy<cXPerson **, cXPerson **>(cXPerson **first, cXPerson **last, cXPerson **result) {
	cXPerson **p;
	cXPerson *&value;
	void *pAddress;
	
  cXPerson__136_2096 *pcVar1;
  cXPerson__136_2096 **ppcVar2;
  
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

void vector<cXPerson *, __malloc_alloc_template<0> >::insert_aux(cXPerson **position, cXPerson *&x) {
	cXPerson *x_copy;
	vector<cXPerson *,__malloc_alloc_template<0> > *this;
	vector<cXPerson *,__malloc_alloc_template<0> > *this;
	vector<cXPerson *,__malloc_alloc_template<0> > *this;
	void *result;
	vector<cXPerson *,__malloc_alloc_template<0> > *this;
	vector<cXPerson *,__malloc_alloc_template<0> > *this;
	cXPerson **p;
	cXPerson *&value;
	void *pAddress;
	vector<cXPerson *,__malloc_alloc_template<0> > *this;
	vector<cXPerson *,__malloc_alloc_template<0> > *this;
	vector<cXPerson *,__malloc_alloc_template<0> > *this;
	vector<cXPerson *,__malloc_alloc_template<0> > *this;
	cXPerson **first;
	cXPerson **pointer;
	vector<cXPerson *,__malloc_alloc_template<0> > *this;
	
  cXPerson__136_2096 *pcVar1;
  uint size;
  cXPerson__136_2096 **ppcVar2;
  int iVar3;
  cXPerson__136_2096 **ppcVar4;
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
      ppcVar2 = (cXPerson__136_2096 **)0x0;
      size = 0;
    }
    else {
      ppcVar2 = (cXPerson__136_2096 **)malloc(size);
      if (ppcVar2 == (cXPerson__136_2096 **)0x0) {
        ppcVar2 = (cXPerson__136_2096 **)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
      }
    }
                    /* end of inlined section */
                    /* end of inlined section */
    uninitialized_copy__H2ZPP8cXPersonZPP8cXPerson_X01X01X11_X11(this->start,position,ppcVar2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *(cXPerson__136_2096 **)((int)ppcVar2 + ((int)position - (int)this->start)) = *x;
                    /* end of inlined section */
    uninitialized_copy__H2ZPP8cXPersonZPP8cXPerson_X01X01X11_X11
              (position,this->finish,
               (cXPerson__136_2096 **)((int)ppcVar2 + (int)position + (4 - (int)this->start)));
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
    if ((ppcVar4 != (cXPerson__136_2096 **)0x0) &&
       ((int)this->end_of_storage - (int)ppcVar4 >> 2 != 0)) {
      free(ppcVar4);
                    /* end of inlined section */
    }
    ppcVar4 = ppcVar2 + iVar5;
    this->start = ppcVar2;
    this->end_of_storage = (cXPerson__136_2096 **)((int)ppcVar2 + size);
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *ppcVar2 = ppcVar2[-1];
                    /* end of inlined section */
    pcVar1 = *x;
    copy_backward__H2ZPP8cXPersonZPP8cXPerson_X01X01X11_X11(position,this->finish + -1,this->finish)
    ;
    *position = pcVar1;
    ppcVar4 = this->finish;
  }
  this->finish = ppcVar4 + 1;
  return;
}

FamilyID* int * copy_backward<int *, int *>(FamilyID *first, FamilyID *last, FamilyID *result) {
  if (first != last) {
    do {
      last = last + -1;
      result = result + -1;
      *result = *last;
    } while (first != last);
  }
  return result;
}

FamilyID* int * uninitialized_copy<int *, int *>(FamilyID *first, FamilyID *last, FamilyID *result) {
	FamilyID *p;
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

void vector<int, __malloc_alloc_template<0> >::insert_aux(FamilyID *position, FamilyID &x) {
	FamilyID x_copy;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	void *result;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	FamilyID *p;
	int &value;
	void *pAddress;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	FamilyID *first;
	FamilyID *pointer;
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
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
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
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *(int *)((int)piVar1 + ((int)position - (int)this->start)) = *x;
                    /* end of inlined section */
    uninitialized_copy__H2ZPiZPi_X01X01X11_X11
              (position,this->finish,(int *)((int)piVar1 + (int)position + (4 - (int)this->start)));
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
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
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((piVar3 != (int *)0x0) && ((int)this->end_of_storage - (int)piVar3 >> 2 != 0)) {
      free(piVar3);
                    /* end of inlined section */
    }
    piVar3 = piVar1 + iVar4;
    this->start = piVar1;
    this->end_of_storage = (int *)((int)piVar1 + size);
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
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

void void __push_heap<int *, int, int, bool (*)>(FamilyID *first, int holeIndex, int topIndex, int value, bool (*comp)(/* parameters unknown */)) {
	int parent;
	
  int iVar1;
  long lVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  int iVar3;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  int local_80 [4];
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
  
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  iVar1 = holeIndex + -1;
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_80[0] = value;
  while( true ) {
    iVar3 = iVar1 / 2;
    if (holeIndex <= topIndex) break;
    lVar2 = (*(code *)comp)(first + iVar3,local_80);
    if (lVar2 == 0) break;
    iVar1 = iVar3 + -1;
    first[holeIndex] = first[iVar3];
    holeIndex = iVar3;
  }
  first[holeIndex] = local_80[0];
  return;
}

void void __adjust_heap<int *, int, int, bool (*)>(FamilyID *first, int holeIndex, int len, int value, bool (*comp)(/* parameters unknown */)) {
	int topIndex;
	int secondChild;
	
  long lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int holeIndex_00;
  
  iVar3 = holeIndex * 2 + 2;
  holeIndex_00 = holeIndex;
  while (iVar3 < len) {
    lVar1 = (*(code *)comp)(first + iVar3,first + iVar3 + -1);
    iVar4 = iVar3;
    if (lVar1 != 0) {
      iVar4 = iVar3 + -1;
    }
    first[holeIndex_00] = first[iVar4];
    holeIndex_00 = iVar4;
    iVar3 = (iVar4 + 1) * 2;
  }
  if (iVar3 == len) {
    piVar2 = first + holeIndex_00;
    holeIndex_00 = iVar3 + -1;
    *piVar2 = first[iVar3 + -1];
  }
  __push_heap__H4ZPiZiZiZPFRCiRCi_b_X01X11X11X21X31_v(first,holeIndex_00,holeIndex,value,comp);
  return;
}

void void __make_heap<int *, bool (*), int, int>(FamilyID *first, FamilyID *last, bool (*comp)(/* parameters unknown */)) {
	ptrdiff_t parent;
	
  int holeIndex;
  int *piVar1;
  int len;
  
  len = (int)last - (int)first >> 2;
  if (1 < len) {
    holeIndex = (len + -2) / 2;
    piVar1 = first + holeIndex;
    while( true ) {
      __adjust_heap__H4ZPiZiZiZPFRCiRCi_b_X01X11X11X21X31_v(first,holeIndex,len,*piVar1,comp);
      piVar1 = piVar1 + -1;
      if (holeIndex == 0) break;
      holeIndex = holeIndex + -1;
    }
  }
  return;
}

void void sort_heap<int *, bool (*)>(FamilyID *first, FamilyID *last, bool (*comp)(/* parameters unknown */)) {
	FamilyID *first;
	bool (*comp)(/* parameters unknown */);
	bool (*comp)(/* parameters unknown */);
	FamilyID *first;
	FamilyID *first;
	int value;
	bool (*comp)(/* parameters unknown */);
	
  int value;
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (1 < (int)last - (int)first >> 2) {
    iVar3 = (int)last - (int)first;
    iVar1 = *first;
    piVar2 = last;
    while( true ) {
      piVar2 = piVar2 + -1;
      value = *piVar2;
      iVar3 = iVar3 + -4;
      *piVar2 = iVar1;
      last = last + -1;
      __adjust_heap__H4ZPiZiZiZPFRCiRCi_b_X01X11X11X21X31_v(first,0,iVar3 >> 2,value,comp);
      if ((int)last - (int)first >> 2 < 2) break;
      iVar1 = *first;
    }
  }
  return;
}

void void __partial_sort<int *, int, bool (*)>(FamilyID *first, FamilyID *middle, FamilyID *last, bool (*comp)(/* parameters unknown */)) {
	FamilyID *first;
	FamilyID *last;
	bool (*comp)(/* parameters unknown */);
	FamilyID *i;
	FamilyID *first;
	FamilyID *last;
	FamilyID *result;
	int value;
	bool (*comp)(/* parameters unknown */);
	
  int value;
  long lVar1;
  code *in_t0_lo;
  int *piVar2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/heap.h */
  __make_heap__H4ZPiZPFRCiRCi_bZiZi_X01X01X11PX21PX31_v(first,middle,in_t0_lo);
                    /* end of inlined section */
  if (middle < last) {
    piVar2 = middle;
    do {
      lVar1 = (*in_t0_lo)(piVar2,first);
      if (lVar1 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/iterator.h */
        value = *piVar2;
        *piVar2 = *first;
        __adjust_heap__H4ZPiZiZiZPFRCiRCi_b_X01X11X11X21X31_v
                  (first,0,(int)middle - (int)first >> 2,value,in_t0_lo);
      }
                    /* end of inlined section */
      piVar2 = piVar2 + 1;
    } while (piVar2 < last);
  }
  sort_heap__H2ZPiZPFRCiRCi_b_X01X01X11_v(first,middle,in_t0_lo);
  return;
}

FamilyID* int * __unguarded_partition<int *, int, bool (*)>(FamilyID *first, FamilyID *last, int pivot, bool (*comp)(/* parameters unknown */)) {
	FamilyID *a;
	FamilyID *b;
	FamilyID *b;
	FamilyID *a;
	FamilyID tmp;
	
  int iVar1;
  long lVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  int local_50 [4];
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
  local_50[0] = pivot;
  while( true ) {
    while( true ) {
      lVar2 = (*(code *)comp)(first,local_50);
      if (lVar2 == 0) break;
      first = first + 1;
    }
    do {
      last = last + -1;
      lVar2 = (*(code *)comp)(local_50,last);
    } while (lVar2 != 0);
    if (last <= first) break;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    iVar1 = *first;
    *first = *last;
    *last = iVar1;
    first = first + 1;
                    /* end of inlined section */
  }
  return first;
}

void void __introsort_loop<int *, int, int, bool (*)>(FamilyID *first, FamilyID *last, int depth_limit, bool (*comp)(/* parameters unknown */)) {
	FamilyID *cut;
	FamilyID *first;
	FamilyID *middle;
	FamilyID *last;
	bool (*comp)(/* parameters unknown */);
	int &a;
	int &b;
	int &c;
	bool (*comp)(/* parameters unknown */);
	
  int iVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  code *in_t0_lo;
  int *piVar5;
  
  iVar1 = (int)last - (int)first;
  while( true ) {
    if (iVar1 >> 2 < 0x11) {
      return;
    }
    if (comp == (undefined1 *)0x0) break;
    comp = comp + -1;
    piVar5 = last + -1;
    piVar2 = first + (((int)last - (int)first >> 2) - ((int)last - (int)first >> 0x1f) >> 1);
    lVar3 = (*in_t0_lo)(first,piVar2);
    if (lVar3 == 0) {
      lVar3 = (*in_t0_lo)(first,piVar5);
      piVar4 = first;
      if ((lVar3 == 0) && (lVar3 = (*in_t0_lo)(piVar2,piVar5), piVar4 = piVar5, lVar3 == 0)) {
        piVar4 = piVar2;
      }
    }
    else {
      lVar3 = (*in_t0_lo)(piVar2,piVar5);
      piVar4 = piVar2;
      if ((lVar3 == 0) && (lVar3 = (*in_t0_lo)(first,piVar5), piVar4 = piVar5, lVar3 == 0)) {
        piVar4 = first;
      }
    }
    piVar2 = __unguarded_partition__H3ZPiZiZPFRCiRCi_b_X01X01X11X21_X01(first,last,*piVar4,in_t0_lo)
    ;
    __introsort_loop__H4ZPiZiZiZPFRCiRCi_b_X01X01PX11X21X31_v(piVar2,last,0,comp);
    iVar1 = (int)piVar2 - (int)first;
    last = piVar2;
  }
                    /* end of inlined section */
  __partial_sort__H3ZPiZiZPFRCiRCi_b_X01X01X01PX11X21_v(first,last,last,(undefined1 *)0x0);
  return;
}

void void __unguarded_linear_insert<int *, int, bool (*)>(FamilyID *last, int value, bool (*comp)(/* parameters unknown */)) {
	FamilyID *next;
	
  int *piVar1;
  long lVar2;
  int *piVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  int local_50 [4];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  piVar1 = last + -1;
  local_50[0] = value;
  while( true ) {
    piVar3 = piVar1;
    lVar2 = (*(code *)comp)(local_50,piVar3);
    if (lVar2 == 0) break;
    *last = *piVar3;
    piVar1 = piVar3 + -1;
    last = piVar3;
  }
  *last = local_50[0];
  return;
}

void void __insertion_sort<int *, bool (*)>(FamilyID *first, FamilyID *last, bool (*comp)(/* parameters unknown */)) {
	FamilyID *i;
	FamilyID *first;
	FamilyID *last;
	bool (*comp)(/* parameters unknown */);
	FamilyID value;
	
  long lVar1;
  undefined8 unaff_s0;
  int *last_00;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  int value;
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
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if ((first != last) && (last_00 = first + 1, last_00 != last)) {
                    /* end of inlined section */
    value = *last_00;
    while( true ) {
      lVar1 = (*(code *)comp)(&value,first);
      if (lVar1 == 0) {
        __unguarded_linear_insert__H3ZPiZiZPFRCiRCi_b_X01X11X21_v(last_00,value,comp);
      }
      else {
        copy_backward__H2ZPiZPi_X01X01X11_X11(first,last_00,last_00 + 1);
        *first = value;
      }
      last_00 = last_00 + 1;
      if (last_00 == last) break;
      value = *last_00;
    }
  }
  return;
}

void void __unguarded_insertion_sort_aux<int *, int, bool (*)>(FamilyID *first, FamilyID *last, bool (*comp)(/* parameters unknown */)) {
	FamilyID *i;
	
  int value;
  undefined1 *in_a3_lo;
  int *piVar1;
  
  if (first != last) {
    value = *first;
    while( true ) {
      piVar1 = first + 1;
      __unguarded_linear_insert__H3ZPiZiZPFRCiRCi_b_X01X11X21_v(first,value,in_a3_lo);
      if (piVar1 == last) break;
      value = *piVar1;
      first = piVar1;
    }
  }
  return;
}

void void __final_insertion_sort<int *, bool (*)>(FamilyID *first, FamilyID *last, bool (*comp)(/* parameters unknown */)) {
	FamilyID *last;
	bool (*comp)(/* parameters unknown */);
	
  if ((int)last - (int)first >> 2 < 0x11) {
    __insertion_sort__H2ZPiZPFRCiRCi_b_X01X01X11_v(first,last,comp);
  }
  else {
    __insertion_sort__H2ZPiZPFRCiRCi_b_X01X01X11_v(first,first + 0x10,comp);
    __unguarded_insertion_sort_aux__H3ZPiZiZPFRCiRCi_b_X01X01PX11X21_v
              (first + 0x10,last,(undefined1 *)0x0);
  }
  return;
}

cXPerson** cXPerson ** find<cXPerson **, cXPerson *>(cXPerson **first, cXPerson **last, cXPerson *&value) {
  if ((first != last) && (*first != *value)) {
    for (first = first + 1; (first != last && (*first != *value)); first = first + 1) {
    }
  }
  return first;
}

ErrType int ReconSaveObject<cSimulator>(cSimulator *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 version) {
	SimpleReconObject<cSimulator> recon;
	ReconBuilder rb;
	cSimulator *obj;
	SInt32 type;
	
  int iVar1;
  SimpleReconObject_cSimulator_ recon;
  ReconBuilder__26_4392 rb;
  
  recon.field0_0x0.__vtable = (ReconObject__vtable *)_vt_t17SimpleReconObject1Z10cSimulator;
  recon.fObj = obj;
  recon.fType = type;
  iVar1 = Compact__12ReconBuilderP11ReconObjectiP8iResFiles
                    ((ReconBuilder__6_5003 *)&rb,&recon.field0_0x0,version,file,id);
  ___11ReconObject(&recon.field0_0x0,2);
  return iVar1;
}

void void fill<Neighbor **, Neighbor *>(Neighbor **first, Neighbor **last, Neighbor *&value) {
  Neighbor *pNVar1;
  
  if (first != last) {
    pNVar1 = *value;
    while( true ) {
      *first = pNVar1;
      first = first + 1;
      if (first == last) break;
      pNVar1 = *value;
    }
  }
  return;
}

Neighbor** Neighbor ** uninitialized_fill_n<Neighbor **, unsigned int, Neighbor *>(Neighbor **first, unsigned int n, Neighbor *&x) {
	Neighbor **p;
	Neighbor *&value;
	void *pAddress;
	
  Neighbor **ppNVar1;
  int iVar2;
  
  iVar2 = n - 1;
  ppNVar1 = first;
  if (n != 0) {
    do {
      first = ppNVar1 + 1;
      iVar2 = iVar2 + -1;
      *ppNVar1 = *x;
      ppNVar1 = first;
    } while (iVar2 != -1);
  }
  return first;
}

void vector<Neighbor *, __malloc_alloc_template<0> >::insert(Neighbor **position, unsigned int n, Neighbor *&x) {
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	unsigned int old_size;
	unsigned int len;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	unsigned int &b;
	unsigned int n;
	void *result;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	Neighbor **first;
	Neighbor **pointer;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	
  uint size;
  Neighbor **ppNVar1;
  uint *puVar2;
  Neighbor **ppNVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  uint old_size;
  uint local_6c [3];
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
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_6c[0] = n;
  if (n != 0) {
    ppNVar1 = this->finish;
    if ((uint)((int)this->end_of_storage - (int)ppNVar1 >> 2) < n) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
      old_size = (int)ppNVar1 - (int)this->start >> 2;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
      puVar2 = local_6c;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
      if (n <= old_size) {
        puVar2 = &old_size;
      }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
      size = (old_size + *puVar2) * 4;
      if (old_size + *puVar2 == 0) {
        ppNVar1 = (Neighbor **)0x0;
        size = 0;
      }
      else {
        ppNVar1 = (Neighbor **)malloc(size);
        if (ppNVar1 == (Neighbor **)0x0) {
          ppNVar1 = (Neighbor **)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
        }
      }
                    /* end of inlined section */
      uninitialized_copy__H2ZPP8NeighborZPP8Neighbor_X01X01X11_X11(this->start,position,ppNVar1);
      uninitialized_fill_n__H3ZPP8NeighborZUiZP8Neighbor_X01X11RCX21_X01
                ((Neighbor **)((int)ppNVar1 + ((int)position - (int)this->start)),local_6c[0],x);
      uninitialized_copy__H2ZPP8NeighborZPP8Neighbor_X01X01X11_X11
                (position,this->finish,
                 ppNVar1 + ((int)position - (int)this->start >> 2) + local_6c[0]);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
      ppNVar3 = this->start;
      if (ppNVar3 == this->finish) {
        ppNVar3 = this->start;
      }
      else {
        do {
          ppNVar3 = ppNVar3 + 1;
        } while (ppNVar3 != this->finish);
                    /* end of inlined section */
        ppNVar3 = this->start;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
      if ((ppNVar3 != (Neighbor **)0x0) && ((int)this->end_of_storage - (int)ppNVar3 >> 2 != 0)) {
        free(ppNVar3);
                    /* end of inlined section */
      }
      this->start = ppNVar1;
      this->end_of_storage = (Neighbor **)((int)ppNVar1 + size);
      this->finish = ppNVar1 + old_size + local_6c[0];
    }
    else {
      if (n < (uint)((int)ppNVar1 - (int)position >> 2)) {
        uninitialized_copy__H2ZPP8NeighborZPP8Neighbor_X01X01X11_X11(ppNVar1 + -n,ppNVar1,ppNVar1);
        copy_backward__H2ZPP8NeighborZPP8Neighbor_X01X01X11_X11
                  (position,this->finish + -local_6c[0],this->finish);
        fill__H2ZPP8NeighborZP8Neighbor_X01X01RCX11_v(position,position + local_6c[0],x);
      }
      else {
        uninitialized_copy__H2ZPP8NeighborZPP8Neighbor_X01X01X11_X11(position,ppNVar1,position + n);
        fill__H2ZPP8NeighborZP8Neighbor_X01X01RCX11_v(position,this->finish,x);
        uninitialized_fill_n__H3ZPP8NeighborZUiZP8Neighbor_X01X11RCX21_X01
                  (this->finish,local_6c[0] - ((int)this->finish - (int)position >> 2),x);
      }
      this->finish = this->finish + local_6c[0];
    }
  }
  return;
}

void void DoPtrVectorStream<Neighbor>(vector<Neighbor *,__malloc_alloc_template<0> > &cont, ReconBuffer *r, SInt32 version) {
	unsigned int size;
	Neighbor **i;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	Neighbor **first;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	Neighbor **result;
	Neighbor **result;
	Neighbor **result;
	Neighbor **first;
	ptrdiff_t n;
	Neighbor **last;
	Neighbor **first;
	Neighbor **pointer;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	Int ptrSet;
	
  uint uVar1;
  Neighbor **ppNVar2;
  Neighbor *pNVar3;
  Neighbor **ppNVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  uint size;
  undefined4 local_6c;
  int ptrSet;
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
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  size = (int)cont->finish - (int)cont->start >> 2;
                    /* end of inlined section */
  Recon32__11ReconBufferPii(r,(int *)&size,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  uVar1 = (int)cont->finish - (int)cont->start >> 2;
                    /* end of inlined section */
  if (uVar1 < size) {
                    /* end of inlined section */
    local_6c = 0;
    insert__t6vector2ZP8NeighborZt23__malloc_alloc_template1i0PP8NeighborUiRCP8Neighbor
              (cont,cont->finish,size - uVar1,(Neighbor **)((uint)&size | 4));
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  if (size < (uint)((int)cont->finish - (int)cont->start >> 2)) {
    do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      ppNVar2 = cont->finish;
                    /* end of inlined section */
      ppNVar4 = ppNVar2 + -1;
      if (ppNVar2[-1] != (Neighbor *)0x0) {
        ___8Neighbor(ppNVar2[-1],3);
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      iVar6 = (int)ppNVar2 - (int)ppNVar4;
      for (iVar5 = (int)cont->finish - (int)ppNVar2 >> 2; 0 < iVar5; iVar5 = iVar5 + -1) {
        pNVar3 = *ppNVar2;
        ppNVar2 = ppNVar2 + 1;
        *ppNVar4 = pNVar3;
        ppNVar4 = ppNVar4 + 1;
      }
      if (ppNVar4 == cont->finish) {
        ppNVar2 = cont->finish;
      }
      else {
        do {
          ppNVar4 = ppNVar4 + 1;
        } while (ppNVar4 != cont->finish);
        ppNVar2 = cont->finish;
      }
      ppNVar2 = (Neighbor **)((int)ppNVar2 - iVar6);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      cont->finish = ppNVar2;
    } while (size < (uint)((int)ppNVar2 - (int)cont->start >> 2));
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    ppNVar2 = cont->start;
  }
  else {
    ppNVar2 = cont->start;
  }
                    /* end of inlined section */
  if (ppNVar2 == cont->finish) {
    return;
  }
  pNVar3 = *ppNVar2;
  do {
    ptrSet = (int)(pNVar3 != (Neighbor *)0x0);
    ReconInt__11ReconBufferPii(r,&ptrSet,1);
    if (ptrSet == 0) {
      if (*ppNVar2 != (Neighbor *)0x0) {
        ___8Neighbor(*ppNVar2,3);
        *ppNVar2 = (Neighbor *)0x0;
      }
LAB_00252a94:
      if (ptrSet != 0) {
        pNVar3 = *ppNVar2;
        goto LAB_00252aa0;
      }
      ppNVar4 = cont->finish;
    }
    else {
      if (*ppNVar2 == (Neighbor *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Neighbor.h */
        pNVar3 = (Neighbor *)malloc(0x108);
        memset(pNVar3,0,0x108);
                    /* end of inlined section */
        pNVar3 = __8Neighbor(pNVar3);
        *ppNVar2 = pNVar3;
        goto LAB_00252a94;
      }
      pNVar3 = *ppNVar2;
LAB_00252aa0:
      DoStream__8NeighborP11ReconBufferi(pNVar3,r,version);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      ppNVar4 = cont->finish;
    }
                    /* end of inlined section */
    ppNVar2 = ppNVar2 + 1;
    if (ppNVar2 == ppNVar4) {
      return;
    }
    pNVar3 = *ppNVar2;
  } while( true );
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
    __21GlobalConstantsClients(&sTheClient.field0_0x0,4);
    sTheClient.field0_0x0.field0_0x0.__vtable =
         (ConstantsClient__vtable *)_vt_21NeighborhoodConstants;
  }
  return;
}

void Neighborhood::~Neighborhood(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (Neighborhood__vtable *)_vt_12Neighborhood;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

c16* NeighborhoodImpl::GetNeighborhoodName() {
  short *psVar1;
  
  psVar1 = c_str__C13StringBuffer2(&(this->fNeighborhoodName).field0_0x0);
  return psVar1;
}

int NeighborhoodImpl::GetHighestLevelCompleted() {
  return (int)(short)this->fVars[0];
}

void NeighborhoodImpl::GetFilename(StringBuffer *fileName) {
  copy__12StringBufferRC12StringBuffer(fileName,&(this->fFilename).field0_0x0);
  return;
}

SInt16 NeighborhoodImpl::GetNeighborhoodVar(int which) {
  return this->fVars[which];
}

void NeighborhoodImpl::SetNeighborhoodVar(int which, SInt16 data) {
  this->fVars[which] = data;
  return;
}

int NeighborhoodImpl::GetNumNeighborHouses() {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  return (int)(this->fNeighborHouses).finish - (int)(this->fNeighborHouses).start >> 2;
}

int NeighborhoodImpl::GetNeighborHouseByIndex(int iIndex) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  return (this->fNeighborHouses).start[iIndex];
}

int NeighborhoodImpl::GetCurrentTutorialStage() {
  return (int)(short)this->fVars[1];
}

bool NeighborhoodImpl::GetShowTutorialArrow() {
  return this->fVars[3] == 0;
}

void NeighborhoodImpl::SetShowTutorialArrow(bool show) {
  this->fVars[3] = (short)show ^ 1;
  return;
}

NeighborhoodImpl* NeighborhoodImpl::GetImpl() {
  return this;
}

void NeighborhoodImpl::SetHouseNum(int HouseNum) {
  this->fHouseNum = HouseNum;
  return;
}

NeighborhoodConstants* NeighborhoodConstants::NeighborhoodConstants() {
  __21GlobalConstantsClients(&this->field0_0x0,4);
  (this->field0_0x0).field0_0x0.__vtable = (ConstantsClient__vtable *)_vt_21NeighborhoodConstants;
  return this;
}

void SimpleReconObject<NeighborhoodImpl>::~SimpleReconObject(int __in_chrg) {
  ___11ReconObject(&this->field0_0x0,__in_chrg);
  return;
}

void SimpleReconObject<ReconStreamPtrVector<Neighbor> >::~SimpleReconObject(int __in_chrg) {
  ___11ReconObject(&this->field0_0x0,__in_chrg);
  return;
}

void SimpleReconObject<cSimulator>::~SimpleReconObject(int __in_chrg) {
  ___11ReconObject(&this->field0_0x0,__in_chrg);
  return;
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

void SimpleReconObject<ReconStreamPtrVector<Neighbor> >::DoStream(ReconBuffer *r, SInt32 version) {
	ReconStreamPtrVector<Neighbor> *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/ReconVector.h */
  DoPtrVectorStream__H1Z8Neighbor_Rt6vector2ZPX01Zt23__malloc_alloc_template1i0P11ReconBufferi_v
            (this->fObj->fVec,r,version);
  return;
}

SInt32 SimpleReconObject<ReconStreamPtrVector<Neighbor> >::GetType() {
                    /* end of inlined section */
  return this->fType;
}

void SimpleReconObject<NeighborhoodImpl>::DoStream(ReconBuffer *r, SInt32 version) {
  Neighborhood__vtable *pNVar1;
  
  pNVar1 = (this->fObj->field0_0x0).__vtable;
  (*(code *)pNVar1->CancelTutorial)
            ((this->fObj->fFilename).fChars + *(short *)&pNVar1->TutorialCompleted + -0xc,r,version)
  ;
  return;
}

SInt32 SimpleReconObject<NeighborhoodImpl>::GetType() {
  return this->fType;
}

void global constructors keyed to Neighborhood::CreateInstance() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

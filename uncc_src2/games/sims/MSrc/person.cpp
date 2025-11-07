// STATUS: NOT STARTED

#include "person.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObjectImpl : virtual cXObject, virtual TreeSimImpl {
	TreeSimImpl *$vb1233;
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
struct cXPersonImpl : virtual cXPerson, virtual cXObjectImpl {
	cXObjectImpl *$vb901;
	cXPerson *$vb1079;
	short int fPersonData[80];
	Motives fMotives;
	SInt32 fLastMotiveTick;
	ScoredInteractionVector fInteractions;
	ActionQueue fTreeQueue;
	Interaction fCurrentAction;
	Interaction fLastAction;
	vector<MotiveInc,__malloc_alloc_template<0> > fMotiveIncs;
	SAnimator *fAnimator;
	TileList fDestList;
	MotiveEffects *fMotiveEffects;
	vector<XRoute,__malloc_alloc_template<0> > fRouteStack;
	RoomID fCurrentRoom;
	vector<ObjectRecord,__malloc_alloc_template<0> > fObjectRecords;
	bool mRecording;
	int mRecordDuration;
	int mRecordMaxDuration;
	int mRecordCurTicks;
	int mRecordStartTicks;
	int mRecordTicksElapsed;
	Skill *mRecordSkill;
	int mRecordID;
	StdPrm fLastJobType;
	StdPrm fLastJobLevel;
	StackString<64> fLastJobSuit;
	StackString<64> fLastJobTexture;
	StackString<64> fLastJobAccessory;
	
	cXPersonImpl& operator=();
	cXPersonImpl(int __in_chrg, ObjSelector *selector, ObjectModule *module);
	cXPersonImpl();
	/* vtable[1] */ virtual cXPersonImpl(cXPersonImpl*, int, void);
	/* vtable[1] */ virtual void EORDrawStickFigure(int which);
	/* vtable[2] */ virtual int GetQueueCount();
	/* vtable[3] */ virtual u16* GetNextQueueStr(int depth);
	/* vtable[4] */ virtual void Initialize();
	/* vtable[5] */ virtual void Reset(Boolean simonce);
	/* vtable[6] */ virtual void PostLoad(SInt32 version);
	/* vtable[7] */ virtual void PreSave();
	/* vtable[8] */ virtual TreeReturnCode TryElement(StackElem *elem, BehaviorNode *node);
	/* vtable[3] */ virtual bool Simulate(SInt32 ticks);
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[130] */ virtual void ReconStream(ReconBuffer *r, SInt32 version, bool placeHolder);
	/* vtable[14] */ virtual int GetDynamicToStaticLatency();
	/* vtable[34] */ virtual void Place(FTilePt &loc, Int inLevel, cXObject *ontop, Int slotNum);
	/* vtable[45] */ virtual void ForceLocation();
	/* vtable[9] */ virtual bool GosubObjectTree(cXObject *obj, StdPrm *stackVals, SInt16 treeID, bool hasIcon);
	/* vtable[10] */ virtual void StackJustPopped();
	/* vtable[11] */ virtual void Cleanup(cXObject *respect);
	/* vtable[73] */ virtual cXPersonImpl* GetPersonImplementation();
	/* vtable[12] */ virtual float GetMotive(int i);
	/* vtable[13] */ virtual float* GetMotiveRef(int i);
	/* vtable[14] */ virtual float* GetOldMotiveRef(int i);
	/* vtable[15] */ virtual void SetMotive(int i, float val);
	/* vtable[16] */ virtual void SimMotives();
	/* vtable[17] */ virtual void CalcHappy();
	/* vtable[18] */ virtual bool AddAction(Interaction *interaction);
	/* vtable[19] */ virtual bool RemoveAction(SInt32 actionID);
	/* vtable[20] */ virtual Int CountActions();
	/* vtable[21] */ virtual Interaction* GetIndAction(Int index);
	/* vtable[22] */ virtual Interaction& GetCurrentAction();
	/* vtable[23] */ virtual Interaction& GetLastAction();
	/* vtable[24] */ virtual void DeleteTopAction();
	/* vtable[25] */ virtual void DebugDumpHappyScape();
	/* vtable[26] */ virtual void Skipping3D();
	/* vtable[27] */ virtual bool IsSelected();
	/* vtable[28] */ virtual StdPrm GetPersonData(Int which);
	/* vtable[29] */ virtual void SetPersonData(Int which, StdPrm val);
	/* vtable[30] */ virtual StdPrm* GetPersonDataArray();
	/* vtable[33] */ virtual StdPrm GetIdleState();
	/* vtable[34] */ virtual bool IsCarrying();
	/* vtable[35] */ virtual TileList* GetDestList();
	/* vtable[36] */ virtual SAnimator* GetSAnimator();
	/* vtable[37] */ virtual void GetJobSuitTex(StringBuffer &outJobSuit, StringBuffer &outJobTexture, StringBuffer &outJobAccessory);
	/* vtable[38] */ virtual RoomID GetCurrentRoom();
	/* vtable[39] */ virtual void UpdateCurrentRoom();
	/* vtable[40] */ virtual SInt16 GetNeighborID();
	/* vtable[41] */ virtual void SetNeighborID(SInt16 newID);
	/* vtable[42] */ virtual bool IsSleeping();
	/* vtable[43] */ virtual bool IsRouting();
	/* vtable[44] */ virtual bool IsVisitor();
	/* vtable[45] */ virtual bool IsChild();
	/* vtable[46] */ virtual bool IsMale();
	/* vtable[47] */ virtual bool IsFemale();
	/* vtable[48] */ virtual bool IsAdult();
	/* vtable[31] */ virtual CustomCharacter* GetCustomCharacter();
	/* vtable[32] */ virtual NPC* GetNPCharacter();
	/* vtable[49] */ virtual bool IsGhost();
	/* vtable[50] */ virtual bool IsInvisible();
	/* vtable[51] */ virtual bool IsGreen();
	/* vtable[52] */ virtual StdPrm GetVisibility();
	/* vtable[53] */ virtual Motives* GetMotives();
	/* vtable[54] */ virtual MotiveEffects* GetMotiveEffects();
	/* vtable[55] */ virtual void InvalidateRoutes();
	/* vtable[56] */ virtual bool GetRecording();
	/* vtable[57] */ virtual int GetRecordDuration();
	/* vtable[58] */ virtual void SetRecordDuration(int val);
	/* vtable[59] */ virtual int GetRecordMaxDuration();
	/* vtable[60] */ virtual void SetRecordMaxDuration(int val);
	/* vtable[61] */ virtual int GetRecordStartTicks();
	/* vtable[62] */ virtual int GetRecordCurTicks();
	/* vtable[63] */ virtual int GetRecordTicksElapsed();
	/* vtable[64] */ virtual Skill* GetRecordSkill();
	/* vtable[65] */ virtual void StartRecording(int id, int duration);
	/* vtable[66] */ virtual void StopRecording();
	/* vtable[67] */ virtual void ClearRecording();
	/* vtable[68] */ virtual int TickRecording();
	/* vtable[69] */ virtual void LogEvent(char *key, char *val, char *boneName);
	/* vtable[70] */ virtual void Track();
	/* vtable[71] */ virtual bool ShouldInterrupt();
	/* vtable[72] */ virtual cXObject* GetControllingObject();
	bool AskOthersToMove(XRoute *inRoute);
	bool MoveOutOfWay(XRoute *inRoute, TileList &desiredPath);
	bool MoveOutOfWay();
	void ActionSkipped(Interaction &action);
	TreeReturnCode TryGosubFoundAction(StackElem *elem);
	TreeReturnCode TryChangeSuit(StackElem *elem, XPrimParam *param);
	TreeReturnCode TrySetMotiveDelta(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryTestInteractingWith(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryGotoRoutingSlot(StackElem *elem, RoutingSlot *rs);
	TreeReturnCode TryGotoRoutingSlot();
	TreeReturnCode TryGotoRelative(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryReach(StackElem *elem, XPrimParam *param);
	XRoute* GetCurrentRoute();
	TreeReturnCode InitRoute(XRoute *route);
	bool TryRoomRouting(XRoute *route);
	TreeReturnCode TryGetReachInfo(StackElem *elem, XPrimParam *param, cXObject **reachObject, cXObject **container, Int *slotNum, float *slotHeight);
	TreeReturnCode TryIdleForInput(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryFindBestAction(StackElem *elem);
	TreeReturnCode TryLookTowards(StackElem *elem, XPrimParam *param);
	Int FindReachAnimation();
	void DumpDestList(char *filename);
	void SetCurrentAction(Interaction &curAction);
	void LoadMotiveEffects();
};

// warning: multiple differing types with the same name (name not equal)
struct cXPortal : virtual cXMTObject {
	cXMTObject *$vb3296;
	__vtbl_ptr_type *$vf1373;
	
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

struct LogPersonState {
	SInt32 fPersonGUID;
	float fMood;
	float fEnergy;
	float fComfort;
	float fHunger;
	float fHygiene;
	float fBladder;
	float fRoom;
	float fSocial;
	float fFun;
	
	LogPersonState& operator=();
	LogPersonState();
	LogPersonState();
	void SetDeltas();
};

struct LogInteractionSample {
	LogPersonState fDelta;
	Int fTotalTicks;
	Int fAnimTicks;
	Int fRoutingTicks;
	Int fBeginTicks;
	bool fSuccess;
	
	LogInteractionSample& operator=();
	LogInteractionSample();
	LogInteractionSample();
	void Print();
	static void PrintHeader(/* parameters unknown */);
};

struct LogPersonTracker {
private:
	SInt32 fPersonGUID;
	SInt16 fPersonID;
	SInt32 fObjectGUID;
	SInt16 fObjectID;
	Int fInteractionIndex;
	LogInteractionSample fSample;
	short int fPData[80];
	
public:
	LogPersonTracker& operator=();
	LogPersonTracker();
	LogPersonTracker();
	bool SameInteraction();
	bool SamePerson();
	void SetInteraction();
	SInt32 GetObjectGUID();
	Int GetInteractionIndex();
	LogInteractionSample& GetSample();
	void Print();
	static void PrintHeader(/* parameters unknown */);
};

struct vector<LogInteractionSample,__malloc_alloc_template<0> > {
protected:
	LogInteractionSample *start;
	LogInteractionSample *finish;
	LogInteractionSample *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	LogInteractionSample* begin();
	LogInteractionSample* begin();
	LogInteractionSample* end();
	LogInteractionSample* end();
	reverse_iterator<LogInteractionSample *,LogInteractionSample,LogInteractionSample &,int> rbegin();
	reverse_iterator<const LogInteractionSample *,LogInteractionSample,const LogInteractionSample &,int> rbegin();
	reverse_iterator<LogInteractionSample *,LogInteractionSample,LogInteractionSample &,int> rend();
	reverse_iterator<const LogInteractionSample *,LogInteractionSample,const LogInteractionSample &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	LogInteractionSample& operator[]();
	LogInteractionSample& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<LogInteractionSample,__malloc_alloc_template<0> >*, int, void);
	vector<LogInteractionSample,__malloc_alloc_template<0> >& operator=();
	void reserve();
	LogInteractionSample& front();
	LogInteractionSample& front();
	LogInteractionSample& back();
	LogInteractionSample& back();
	void push_back();
	void swap();
	LogInteractionSample* insert();
	LogInteractionSample* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct LogInteraction {
private:
	SInt32 fObjectGUID;
	Int fInteractionIndex;
	BString2 fObjName;
	BString2 fInteractionName;
	vector<LogInteractionSample,__malloc_alloc_template<0> > fSamples;
	
public:
	LogInteraction& operator=();
	LogInteraction();
	LogInteraction(LogInteraction*, int, void);
	LogInteraction();
	void AddSample();
	bool SameInteraction();
	bool HasObject();
	void Print();
	static void PrintHeader(/* parameters unknown */);
};

struct vector<LogInteraction,__malloc_alloc_template<0> > {
protected:
	LogInteraction *start;
	LogInteraction *finish;
	LogInteraction *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	LogInteraction* begin();
	LogInteraction* begin();
	LogInteraction* end();
	LogInteraction* end();
	reverse_iterator<LogInteraction *,LogInteraction,LogInteraction &,int> rbegin();
	reverse_iterator<const LogInteraction *,LogInteraction,const LogInteraction &,int> rbegin();
	reverse_iterator<LogInteraction *,LogInteraction,LogInteraction &,int> rend();
	reverse_iterator<const LogInteraction *,LogInteraction,const LogInteraction &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	LogInteraction& operator[]();
	LogInteraction& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<LogInteraction,__malloc_alloc_template<0> >*, int, void);
	vector<LogInteraction,__malloc_alloc_template<0> >& operator=();
	void reserve();
	LogInteraction& front();
	LogInteraction& front();
	LogInteraction& back();
	LogInteraction& back();
	void push_back();
	void swap();
	LogInteraction* insert();
	LogInteraction* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct vector<LogPersonTracker,__malloc_alloc_template<0> > {
protected:
	LogPersonTracker *start;
	LogPersonTracker *finish;
	LogPersonTracker *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	LogPersonTracker* begin();
	LogPersonTracker* begin();
	LogPersonTracker* end();
	LogPersonTracker* end();
	reverse_iterator<LogPersonTracker *,LogPersonTracker,LogPersonTracker &,int> rbegin();
	reverse_iterator<const LogPersonTracker *,LogPersonTracker,const LogPersonTracker &,int> rbegin();
	reverse_iterator<LogPersonTracker *,LogPersonTracker,LogPersonTracker &,int> rend();
	reverse_iterator<const LogPersonTracker *,LogPersonTracker,const LogPersonTracker &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	LogPersonTracker& operator[]();
	LogPersonTracker& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<LogPersonTracker,__malloc_alloc_template<0> >*, int, void);
	vector<LogPersonTracker,__malloc_alloc_template<0> >& operator=();
	void reserve();
	LogPersonTracker& front();
	LogPersonTracker& front();
	LogPersonTracker& back();
	LogPersonTracker& back();
	void push_back();
	void swap();
	LogPersonTracker* insert();
	LogPersonTracker* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct SimLog {
private:
	bool fLogging;
	vector<LogInteraction,__malloc_alloc_template<0> > fLogs;
	vector<LogPersonTracker,__malloc_alloc_template<0> > fTrackers;
	static SimLog sTheLog;
	
public:
	SimLog& operator=();
	SimLog();
	SimLog(SimLog*, int, void);
private:
	LogPersonTracker* GetTracker();
	LogInteraction* GetLog();
	SimLog();
public:
	static SimLog* GetLog(/* parameters unknown */);
	void BeginLogging();
	void EndLogging();
	bool IsLogging();
	void SimTickCompleted();
};

struct MotiveCurveArray<7> : MotiveCurveSet {
private:
	MotiveCurve fCurveArray[7];
};

struct AutonomyConstantsClient : GlobalConstantsClient {
	AutonomyConstantsClient& operator=();
	AutonomyConstantsClient();
	AutonomyConstantsClient();
	/* vtable[3] */ virtual void UpdateConstants();
};

struct simple_alloc<ScoredInteraction,__malloc_alloc_template<0> > {
	simple_alloc<ScoredInteraction,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static ScoredInteraction* allocate(/* parameters unknown */);
	static ScoredInteraction* allocate(/* parameters unknown */);
	static ScoredInteraction* allocate(/* parameters unknown */);
	static ScoredInteraction* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct simple_alloc<MotiveInc,__malloc_alloc_template<0> > {
	simple_alloc<MotiveInc,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static MotiveInc* allocate(/* parameters unknown */);
	static MotiveInc* allocate(/* parameters unknown */);
	static MotiveInc* allocate(/* parameters unknown */);
	static MotiveInc* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct simple_alloc<XRoute,__malloc_alloc_template<0> > {
	simple_alloc<XRoute,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static XRoute* allocate(/* parameters unknown */);
	static XRoute* allocate(/* parameters unknown */);
	static XRoute* allocate(/* parameters unknown */);
	static XRoute* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct simple_alloc<ObjectRecord,__malloc_alloc_template<0> > {
	simple_alloc<ObjectRecord,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static ObjectRecord* allocate(/* parameters unknown */);
	static ObjectRecord* allocate(/* parameters unknown */);
	static ObjectRecord* allocate(/* parameters unknown */);
	static ObjectRecord* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

enum GRS_PrimState {
	kGRS_0 = 0,
	kGRS_Initial = 1,
	kGRS_WaitingForPortal = 2,
	kGRS_Walking = 3,
	kGRS_WaitingForSit = 4,
	kGRS_WaitingForStand = 5,
	kGRS_Trapped = 6,
	kGRS_Failed = 7,
	kGRS_Succeeded = 8,
	kGRS_WalkingSucceeded = 9,
	kGRS_WalkingFailed = 10,
	kGRS_WalkTerminated = 11,
	kGRS_FoundPath = 12,
	kGRS_Waiting = 13,
	kGRS_WaitingForPersonToMove = 14,
	kGRS_RouteInvalidatedWhileWalking = 15,
	kGRS_NeedFailureFeedback = 16,
	kGRS_WaitingForFailureFeedback = 17,
	kGRS_FoundGoals = 18,
	kGRS_ObjectDeleted = 19,
	kGRS_ObjectDeletedWhileWalking = 20
};

struct AUTOPTR<PropTable> {
private:
	PropTable *m_ptr;
	
public:
	AUTOPTR();
	AUTOPTR();
	AUTOPTR(AUTOPTR<PropTable>*, int, void);
	PropTable* CreateInstance();
	void Reset();
	PropTable* operator PropTable *();
	PropTable* operator->();
private:
	AUTOPTR<PropTable>& operator=();
};

Boolean gDrawDebugRoutes = 0;
Boolean gDrawPersonOrigin = 0;
float gMinAutonomyFamilyScore = 0.2f;
float gMinAutonomyVisitorScore = 0.05f;
float gMinAutonomySittingScore = 0.1f;
int gInteractionRandCount = 10;
float gFunctionalScoreDistanceAttenuation = 3.f;
int gFriendshipThreshold = 25;
Int cXPerson::kSimTicksPerMotiveTick = 60;
int gThoughtBubbleZTweak = -65;
static bool sHappyCurvesSetup = false;

static int sHappyMotives[7] = {
	/* [0] = */ 7,
	/* [1] = */ 6,
	/* [2] = */ 8,
	/* [3] = */ 9,
	/* [4] = */ 15,
	/* [5] = */ 13,
	/* [6] = */ 14
};

static bool sAutonomyConstantsLoaded = false;

__vtbl_ptr_type AutonomyConstantsClient virtual table[5] = {
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
		/* .__pfn = */ &AutonomyConstantsClient::UpdateConstants,
		/* .__delta2 = */ 23872
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type cXPersonImpl::TreeSimImpl virtual table[6] = {
	/* [0] = */ {
		/* .__delta = */ -1324,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -1324,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::TryElement,
		/* .__delta2 = */ -8808
	},
	/* [2] = */ {
		/* .__delta = */ 52,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::Error,
		/* .__delta2 = */ 1848
	},
	/* [3] = */ {
		/* .__delta = */ -1324,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::StackJustPopped,
		/* .__delta2 = */ 1552
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

__vtbl_ptr_type cXPersonImpl::cXObjectImpl virtual table[8] = {
	/* [0] = */ {
		/* .__delta = */ -1376,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -1376,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GosubObjectTree,
		/* .__delta2 = */ 1264
	},
	/* [2] = */ {
		/* .__delta = */ -1376,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::Cleanup,
		/* .__delta2 = */ 2712
	},
	/* [3] = */ {
		/* .__delta = */ -1376,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::Initialize,
		/* .__delta2 = */ -29648
	},
	/* [4] = */ {
		/* .__delta = */ -1376,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::Reset,
		/* .__delta2 = */ -28096
	},
	/* [5] = */ {
		/* .__delta = */ -1376,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::PostLoad,
		/* .__delta2 = */ -27856
	},
	/* [6] = */ {
		/* .__delta = */ -1376,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::PreSave,
		/* .__delta2 = */ -26960
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type cXPersonImpl::cXPerson virtual table[75] = {
	/* [0] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::EORDrawStickFigure,
		/* .__delta2 = */ 24800
	},
	/* [2] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetQueueCount,
		/* .__delta2 = */ 24848
	},
	/* [3] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetNextQueueStr,
		/* .__delta2 = */ 24872
	},
	/* [4] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::Initialize,
		/* .__delta2 = */ -29648
	},
	/* [5] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::Reset,
		/* .__delta2 = */ -28096
	},
	/* [6] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::PostLoad,
		/* .__delta2 = */ -27856
	},
	/* [7] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::PreSave,
		/* .__delta2 = */ -26960
	},
	/* [8] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::TryElement,
		/* .__delta2 = */ -8808
	},
	/* [9] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GosubObjectTree,
		/* .__delta2 = */ 1264
	},
	/* [10] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::StackJustPopped,
		/* .__delta2 = */ 1552
	},
	/* [11] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::Cleanup,
		/* .__delta2 = */ 2712
	},
	/* [12] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetMotive,
		/* .__delta2 = */ -6944
	},
	/* [13] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetMotiveRef,
		/* .__delta2 = */ -6928
	},
	/* [14] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetOldMotiveRef,
		/* .__delta2 = */ -6912
	},
	/* [15] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::SetMotive,
		/* .__delta2 = */ -6896
	},
	/* [16] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::SimMotives,
		/* .__delta2 = */ -6880
	},
	/* [17] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::CalcHappy,
		/* .__delta2 = */ -6824
	},
	/* [18] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::AddAction,
		/* .__delta2 = */ -6408
	},
	/* [19] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::RemoveAction,
		/* .__delta2 = */ -3664
	},
	/* [20] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::CountActions,
		/* .__delta2 = */ 21296
	},
	/* [21] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetIndAction,
		/* .__delta2 = */ -2712
	},
	/* [22] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetCurrentAction,
		/* .__delta2 = */ 21320
	},
	/* [23] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetLastAction,
		/* .__delta2 = */ 21328
	},
	/* [24] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::DeleteTopAction,
		/* .__delta2 = */ 6296
	},
	/* [25] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::DebugDumpHappyScape,
		/* .__delta2 = */ -2656
	},
	/* [26] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::Skipping3D,
		/* .__delta2 = */ 696
	},
	/* [27] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::IsSelected,
		/* .__delta2 = */ 1176
	},
	/* [28] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetPersonData,
		/* .__delta2 = */ 21336
	},
	/* [29] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::SetPersonData,
		/* .__delta2 = */ 21352
	},
	/* [30] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetPersonDataArray,
		/* .__delta2 = */ 21368
	},
	/* [31] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetCustomCharacter,
		/* .__delta2 = */ 21624
	},
	/* [32] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetNPCharacter,
		/* .__delta2 = */ 21640
	},
	/* [33] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetIdleState,
		/* .__delta2 = */ 21376
	},
	/* [34] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::IsCarrying,
		/* .__delta2 = */ 21384
	},
	/* [35] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetDestList,
		/* .__delta2 = */ 21448
	},
	/* [36] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetSAnimator,
		/* .__delta2 = */ 21456
	},
	/* [37] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetJobSuitTex,
		/* .__delta2 = */ 7896
	},
	/* [38] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetCurrentRoom,
		/* .__delta2 = */ 21464
	},
	/* [39] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::UpdateCurrentRoom,
		/* .__delta2 = */ 808
	},
	/* [40] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetNeighborID,
		/* .__delta2 = */ 21472
	},
	/* [41] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::SetNeighborID,
		/* .__delta2 = */ 21520
	},
	/* [42] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::IsSleeping,
		/* .__delta2 = */ 7456
	},
	/* [43] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::IsRouting,
		/* .__delta2 = */ 21576
	},
	/* [44] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::IsVisitor,
		/* .__delta2 = */ 21608
	},
	/* [45] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::IsChild,
		/* .__delta2 = */ 7496
	},
	/* [46] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::IsMale,
		/* .__delta2 = */ 7544
	},
	/* [47] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::IsFemale,
		/* .__delta2 = */ 7640
	},
	/* [48] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::IsAdult,
		/* .__delta2 = */ 7688
	},
	/* [49] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::IsGhost,
		/* .__delta2 = */ 21656
	},
	/* [50] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::IsInvisible,
		/* .__delta2 = */ 21672
	},
	/* [51] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::IsGreen,
		/* .__delta2 = */ 21688
	},
	/* [52] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetVisibility,
		/* .__delta2 = */ 21704
	},
	/* [53] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetMotives,
		/* .__delta2 = */ 21712
	},
	/* [54] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetMotiveEffects,
		/* .__delta2 = */ 21720
	},
	/* [55] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::InvalidateRoutes,
		/* .__delta2 = */ 7784
	},
	/* [56] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetRecording,
		/* .__delta2 = */ 21728
	},
	/* [57] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetRecordDuration,
		/* .__delta2 = */ 21736
	},
	/* [58] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::SetRecordDuration,
		/* .__delta2 = */ 21744
	},
	/* [59] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetRecordMaxDuration,
		/* .__delta2 = */ 21752
	},
	/* [60] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::SetRecordMaxDuration,
		/* .__delta2 = */ 21760
	},
	/* [61] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetRecordStartTicks,
		/* .__delta2 = */ 21768
	},
	/* [62] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetRecordCurTicks,
		/* .__delta2 = */ 21776
	},
	/* [63] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetRecordTicksElapsed,
		/* .__delta2 = */ 21784
	},
	/* [64] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetRecordSkill,
		/* .__delta2 = */ 21792
	},
	/* [65] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::StartRecording,
		/* .__delta2 = */ 7848
	},
	/* [66] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::StopRecording,
		/* .__delta2 = */ 7856
	},
	/* [67] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::ClearRecording,
		/* .__delta2 = */ 7864
	},
	/* [68] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::TickRecording,
		/* .__delta2 = */ 7872
	},
	/* [69] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::LogEvent,
		/* .__delta2 = */ 7880
	},
	/* [70] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::Track,
		/* .__delta2 = */ 7888
	},
	/* [71] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::ShouldInterrupt,
		/* .__delta2 = */ -2648
	},
	/* [72] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetControllingObject,
		/* .__delta2 = */ 21800
	},
	/* [73] = */ {
		/* .__delta = */ -1316,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetPersonImplementation,
		/* .__delta2 = */ 21288
	},
	/* [74] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type cXPersonImpl::cXObject virtual table[140] = {
	/* [0] = */ {
		/* .__delta = */ -1308,
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
		/* .__delta = */ -1308,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::GetDynamicToStaticLatency,
		/* .__delta2 = */ -6960
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
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::Turn,
		/* .__delta2 = */ 23752
	},
	/* [32] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::Pickup,
		/* .__delta2 = */ 17952
	},
	/* [33] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::CanPlace,
		/* .__delta2 = */ 18752
	},
	/* [34] = */ {
		/* .__delta = */ -1308,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::Place,
		/* .__delta2 = */ 1112
	},
	/* [35] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::IsPartOfMe,
		/* .__delta2 = */ 22024
	},
	/* [36] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::UserCanPlace,
		/* .__delta2 = */ 30872
	},
	/* [37] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::UserPlace,
		/* .__delta2 = */ 31360
	},
	/* [38] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::UserCanPickup,
		/* .__delta2 = */ 30128
	},
	/* [39] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::UserPickup,
		/* .__delta2 = */ 31648
	},
	/* [40] = */ {
		/* .__delta = */ 68,
		/* .__index = */ 0,
		/* .__pfn = */ &cXObjectImpl::UserCanDelete,
		/* .__delta2 = */ 30576
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
		/* .__delta = */ -1308,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::ForceLocation,
		/* .__delta2 = */ 1200
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
		/* .__delta = */ -1308,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::ReconStream,
		/* .__delta2 = */ -7920
	},
	/* [131] = */ {
		/* .__delta = */ -1308,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::ReconType,
		/* .__delta2 = */ -7936
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

__vtbl_ptr_type cXPersonImpl::TreeSim virtual table[18] = {
	/* [0] = */ {
		/* .__delta = */ -1276,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -1276,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::~cXPersonImpl,
		/* .__delta2 = */ 30648
	},
	/* [2] = */ {
		/* .__delta = */ 48,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::Initialize,
		/* .__delta2 = */ 18040
	},
	/* [3] = */ {
		/* .__delta = */ -1276,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPersonImpl::Simulate,
		/* .__delta2 = */ -8512
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
		/* .__delta = */ 48,
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

__vtbl_ptr_type RoutingSlot virtual table[3] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RoutingSlot::~RoutingSlot,
		/* .__delta2 = */ -24192
	},
	/* [2] = */ {
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

__vtbl_ptr_type cXPerson virtual table[75] = {
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type cXPerson::cXObject virtual table[140] = {
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
		/* .__delta = */ -40,
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

__vtbl_ptr_type cXPerson::TreeSim virtual table[18] = {
	/* [0] = */ {
		/* .__delta = */ -8,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -8,
		/* .__index = */ 0,
		/* .__pfn = */ &cXPerson::~cXPerson,
		/* .__delta2 = */ 30224
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

static MotiveCurveArray<7> sAdultHappyWeightCurves;
static MotiveCurveArray<7> sChildHappyWeightCurves;
static AutonomyConstantsClient sTheAutonomyClient;

void MotiveInc::DoStream(ReconBuffer *r, SInt32 version) {
  ReconInt__11ReconBufferPii(r,&this->whichMotive,1);
  ReconFloat__11ReconBufferPfi(r,&this->incPerTick,1);
  ReconFloat__11ReconBufferPfi(r,&this->limit,1);
  return;
}

ConstantsClient* GetAutonomyConstantsClient() {
  return (ConstantsClient *)&sTheAutonomyClient;
}

void AutonomyConstantsClient::UpdateConstants() {
	iResFile *file;
	AUTOPTR<FloatConstants> mc;
	
  ConstantsClient__vtable *pCVar1;
  FloatConstants *pInstance;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  AUTOPTR_FloatConstants_ mc;
  
  uVar6 = 0x3e4ccccd;
  pCVar1 = (this->field0_0x0).field0_0x0.__vtable;
  uVar5 = 0x3ca3d70a;
  uVar2 = (*(code *)pCVar1->UpdateConstants)
                    ((int)&(this->field0_0x0).field0_0x0.__vtable + (int)*(short *)&pCVar1->GetID);
  pCVar1 = (this->field0_0x0).field0_0x0.__vtable;
  uVar3 = (*(code *)pCVar1[1].GetFile)
                    ((int)&(this->field0_0x0).field0_0x0.__vtable + (int)*(short *)(pCVar1 + 1));
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  DestroyInstance__14FloatConstantsP14FloatConstants((FloatConstants *)0x0);
  pInstance = CreateInstance__14FloatConstants();
                    /* end of inlined section */
  (*(code *)pInstance->__vtable[1].Load)
            ((int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable[1].Has,uVar2,uVar3);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  gMinAutonomyFamilyScore =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (uVar6,(int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load
                         ,0x3b88e8,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  gMinAutonomyVisitorScore =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (0x3d4ccccd,
                         (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                         0x3b8908,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  gLowAttenuation =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (0x3b03126f,
                         (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                         0x3b8928,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  gModerateAttenuation =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (uVar5,(int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load
                         ,0x3b8938,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  gHighAttenuation =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (0x3dcccccd,
                         (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                         0x3b8950,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  gVisLowAttenuation =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (0x3b03126f,
                         (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                         0x3b8968,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  gVisModerateAttenuation =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (uVar5,(int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load
                         ,0x3b8980,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  gVisHighAttenuation =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (0x3dcccccd,
                         (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                         0x3b89a0,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  gMinAutonomySittingScore =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (uVar6,(int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load
                         ,0x3b89c0,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  fVar4 = (float)(**(code **)(pInstance->__vtable + 1))
                           (0x41200000,
                            (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                            0x3b89e0,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  gInteractionRandCount = (int)fVar4;
  fVar4 = (float)(**(code **)(pInstance->__vtable + 1))
                           (0x41c80000,
                            (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                            0x3b89f8,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  gFriendshipThreshold = (int)fVar4;
  gFunctionalScoreDistanceAttenuation =
       (float)(**(code **)(pInstance->__vtable + 1))
                        (0x40400000,
                         (int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,
                         0x3b8a10,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  _sAutonomyConstantsLoaded = 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  DestroyInstance__14FloatConstantsP14FloatConstants(pInstance);
  return;
}

void ObjectRecord::DoStream(ReconBuffer *r, SInt32 ver) {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pObjectModule->__vtable[1].GetCurrentDialog)
            ((int)&_5Globs_pObjectModule->__vtable +
             (int)*(short *)&_5Globs_pObjectModule->__vtable[1].LevelInfoRequested,r,this);
  ReconInt__11ReconBufferPii(r,&this->fStackLevel,1);
  ReconBool__11ReconBufferPb(r,&this->fHasIcon);
  return;
}

void cXPersonImpl::EORDrawStickFigure(int which) {
  SAnimator__vtable *pSVar1;
  
  pSVar1 = this->fAnimator->__vtable;
  (*(code *)pSVar1->SnapToGrid)
            ((int)&this->fAnimator->__vtable + (int)*(short *)&pSVar1->ResetSuits,which);
  return;
}

int cXPersonImpl::GetQueueCount() {
	Queue<Interaction,8> *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
                    /* end of inlined section */
  return (this->fTreeQueue).fLast - (this->fTreeQueue).fFirst;
}

u16* cXPersonImpl::GetNextQueueStr(int depth) {
	Interaction inter;
	u16 *str;
	Queue<Interaction,8> *this;
	
  BString2 *this_00;
  short *psVar1;
  Interaction inter;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
                    /* end of inlined section */
  __11InteractionRC11Interaction
            (&inter,(this->fTreeQueue).fElems + ((this->fTreeQueue).fFirst + depth & 7));
  this_00 = GetName__C11Interaction(&inter);
  psVar1 = c_str__C8BString2(this_00);
  ___8BString2(&inter.fName,2);
  return psVar1;
}

cXPersonImpl* cXPersonImpl::cXPersonImpl(int __in_chrg, ObjSelector *selector, ObjectModule *module) {
	__vtbl_ptr_type _vt$12cXPersonImpl$7TreeSim[18];
	__vtbl_ptr_type _vt$12cXPersonImpl$8cXObject[140];
	__vtbl_ptr_type _vt$12cXPersonImpl$8cXPerson[75];
	__vtbl_ptr_type _vt$12cXPersonImpl$11TreeSimImpl[6];
	__vtbl_ptr_type _vt$12cXPersonImpl$12cXObjectImpl[8];
	cXObject *this;
	cXPerson *this;
	cXPerson *this;
	cXPersonImpl *obj;
	cXPersonImpl *obj;
	cXObject *this;
	TreeSim *this;
	cXPersonImpl *obj;
	int c;
	
  int *piVar1;
  cXPerson__123_1079 *pcVar2;
  cXObjectImpl__123_901 *pcVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  ushort uVar7;
  undefined6 uVar8;
  ushort uVar9;
  undefined6 uVar10;
  undefined6 uVar11;
  undefined6 uVar12;
  undefined6 uVar13;
  undefined6 uVar14;
  undefined6 uVar15;
  undefined6 uVar16;
  undefined6 uVar17;
  undefined6 uVar18;
  ushort uVar19;
  TreeSim__vtable *pTVar20;
  cXPerson__123_1079__vtable *pcVar21;
  undefined *this_00;
  __vtbl_ptr_type *p_Var22;
  TreeSim__vtable *pTVar23;
  __vtbl_ptr_type *p_Var24;
  __vtbl_ptr_type *p_Var25;
  cXObject__21_1030__vtable *pcVar26;
  __vtbl_ptr_type *p_Var27;
  __vtbl_ptr_type _Var28;
  __vtbl_ptr_type _Var29;
  __vtbl_ptr_type _Var30;
  Interaction *this_01;
  int iVar31;
  cXPerson__123_1079__vtable *pcVar32;
  __vtbl_ptr_type local_ec0;
  __vtbl_ptr_type local_eb8 [35];
  undefined local_da0 [8];
  undefined8 local_d98 [17];
  undefined local_d10 [272];
  short local_c00;
  short local_ba8;
  short local_900;
  short local_8f8;
  __vtbl_ptr_type _vt_12cXPersonImpl_7TreeSim [18];
  __vtbl_ptr_type _vt_12cXPersonImpl_8cXObject [140];
  __vtbl_ptr_type _vt_12cXPersonImpl_8cXPerson [75];
  __vtbl_ptr_type _vt_12cXPersonImpl_11TreeSimImpl [6];
  __vtbl_ptr_type _vt_12cXPersonImpl_12cXObjectImpl [8];
  StringBuffer *local_f0;
  char *local_ec;
  ushort *local_e8;
  Motives *local_e4;
  Interaction *local_e0;
  TreeSimImpl__21_3338__vtable *local_dc;
  Interaction *local_d8;
  vector_ScoredInteraction___malloc_alloc_template_0___ *local_d4;
  cXObjectImpl__123_901__vtable *local_d0;
  vector_MotiveInc___malloc_alloc_template_0___ *local_cc;
  TileList *local_c8;
  vector_XRoute___malloc_alloc_template_0___ *local_c4;
  vector_ObjectRecord___malloc_alloc_template_0___ *local_c0;
  StringBuffer *local_bc;
  char *local_b8;
  StringBuffer *local_b4;
  char *local_b0;
  
  if (__in_chrg != 0) {
    this_00 = &this->field_0x4fc;
    *(undefined **)&this->field_0x524 = &this->field_0x51c;
    this->_vb1079 = (cXPerson__123_1079 *)&this->field_0x524;
    this->_vb901 = (cXObjectImpl__123_901 *)&this->field_0x560;
    *(undefined **)&this->field_0x52c = this_00;
    *(undefined **)&this->field_0x564 = &this->field_0x51c;
    *(undefined **)&this->field_0x51c = this_00;
    *(undefined **)&this->field_0x560 = &this->field_0x52c;
    __7TreeSim((TreeSim *)this_00);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    piVar1 = *(int **)&this->field_0x564;
    *(__vtbl_ptr_type **)(*piVar1 + 0x1c) = _vt_8cXObject_7TreeSim;
    p_Var27 = &local_ec0;
    p_Var25 = _vt_8cXObject_7TreeSim;
    do {
      p_Var22 = p_Var25;
      p_Var24 = p_Var27;
      _Var28 = p_Var22[1];
      _Var29 = p_Var22[2];
      _Var30 = p_Var22[3];
      *p_Var24 = *p_Var22;
      p_Var24[1] = _Var28;
      p_Var24[2] = _Var29;
      p_Var24[3] = _Var30;
      p_Var27 = p_Var24 + 4;
      p_Var25 = p_Var22 + 4;
    } while (p_Var22 + 4 != _vt_8cXObject_7TreeSim + 0x10);
    _Var28 = p_Var22[5];
    p_Var24[4] = _vt_8cXObject_7TreeSim[16];
    p_Var24[5] = _Var28;
    *(__vtbl_ptr_type **)(*piVar1 + 0x1c) = &local_ec0;
    local_eb8[0].__delta =
         _vt_8cXObject_7TreeSim[1].__delta + ((short)piVar1 - ((short)*piVar1 + -8));
                    /* end of inlined section */
    piVar1[1] = (int)_vt_8cXObject;
    if (__in_chrg != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Person.h */
      pcVar2 = this->_vb1079;
      pcVar2->_vb966->_vb899->__vtable = (TreeSim__vtable *)_vt_8cXPerson_7TreeSim;
      pcVar2->_vb966->__vtable = (cXObject__21_1030__vtable *)_vt_8cXPerson_8cXObject;
      p_Var27 = _vt_8cXPerson_7TreeSim;
      pTVar20 = (TreeSim__vtable *)local_da0;
      do {
        pTVar23 = pTVar20;
        p_Var25 = p_Var27;
        _Var28 = p_Var25[1];
        _Var29 = p_Var25[2];
        _Var30 = p_Var25[3];
        *(__vtbl_ptr_type *)pTVar23 = *p_Var25;
        *(__vtbl_ptr_type *)&pTVar23->Initialize = _Var28;
        *(__vtbl_ptr_type *)&pTVar23->SetError = _Var29;
        *(__vtbl_ptr_type *)&pTVar23->ClearError = _Var30;
        p_Var27 = p_Var25 + 4;
        pTVar20 = (TreeSim__vtable *)&pTVar23->GetCurElem;
      } while (p_Var25 + 4 != _vt_8cXPerson_7TreeSim + 0x10);
      _Var28 = p_Var25[5];
      *(__vtbl_ptr_type *)&pTVar23->GetCurElem = _vt_8cXPerson_7TreeSim[16];
      *(__vtbl_ptr_type *)&pTVar23->GetNthElem = _Var28;
      p_Var27 = _vt_8cXPerson_8cXObject;
      pcVar2->_vb966->_vb899->__vtable = (TreeSim__vtable *)local_da0;
      local_d98[0]._0_2_ =
           _vt_8cXPerson_7TreeSim[1].__delta +
           ((short)pcVar2 - ((short)pcVar2->_vb966->_vb899 + -8));
      pcVar26 = (cXObject__21_1030__vtable *)local_d10;
      do {
        _Var29 = p_Var27[1];
        _Var30 = p_Var27[2];
        _Var28 = p_Var27[3];
        *(__vtbl_ptr_type *)pcVar26 = *p_Var27;
        *(__vtbl_ptr_type *)&pcVar26->GetNumAttr = _Var29;
        *(__vtbl_ptr_type *)&pcVar26->CalcShortDistance = _Var30;
        *(__vtbl_ptr_type *)&pcVar26->GetSpriteSlot = _Var28;
        p_Var27 = p_Var27 + 4;
        pcVar26 = (cXObject__21_1030__vtable *)&pcVar26->GetHilite;
      } while (p_Var27 != _vt_8cXPerson_7TreeSim);
      pcVar2->_vb966->__vtable = (cXObject__21_1030__vtable *)local_d10;
      local_900 = (short)pcVar2 - ((short)pcVar2->_vb966 + -0x28);
      local_8f8 = _vt_8cXPerson_8cXObject[131].__delta + local_900;
      local_d10._112_2_ = _vt_8cXPerson_8cXObject[14].__delta + local_900;
      local_c00 = _vt_8cXPerson_8cXObject[34].__delta + local_900;
      local_ba8 = _vt_8cXPerson_8cXObject[45].__delta + local_900;
      local_900 = _vt_8cXPerson_8cXObject[130].__delta + local_900;
                    /* end of inlined section */
      pcVar2->__vtable = (cXPerson__123_1079__vtable *)_vt_8cXPerson;
      if (__in_chrg != 0) {
        __11TreeSimImpli(*(TreeSimImpl__21_3338 **)&this->field_0x560,0);
        __12cXObjectImpliP11ObjSelectorP12ObjectModule
                  ((cXObjectImpl__127_901 *)this->_vb901,0,selector,module);
      }
    }
  }
  local_e4 = &this->fMotives;
  local_d4 = &this->fInteractions;
  local_e0 = &this->fCurrentAction;
  this->_vb1079->_vb966->_vb899->__vtable = (TreeSim__vtable *)::_vt_12cXPersonImpl_7TreeSim;
  local_d8 = &this->fLastAction;
  local_cc = &this->fMotiveIncs;
  local_c8 = &this->fDestList;
  local_c4 = &this->fRouteStack;
  local_c0 = &this->fObjectRecords;
  local_bc = (StringBuffer *)&this->fLastJobSuit;
  local_b8 = (this->fLastJobSuit).fChars;
  this_01 = (Interaction *)&this->fTreeQueue;
  local_b0 = (this->fLastJobTexture).fChars;
  local_f0 = (StringBuffer *)&this->fLastJobAccessory;
  local_b4 = (StringBuffer *)&this->fLastJobTexture;
  local_ec = (this->fLastJobAccessory).fChars;
  local_e8 = this->fPersonData;
  this->_vb1079->_vb966->__vtable = (cXObject__21_1030__vtable *)::_vt_12cXPersonImpl_8cXObject;
  this->_vb1079->__vtable = (cXPerson__123_1079__vtable *)::_vt_12cXPersonImpl_8cXPerson;
  this->_vb901->_vb1233->__vtable =
       (TreeSimImpl__21_3338__vtable *)::_vt_12cXPersonImpl_11TreeSimImpl;
  this->_vb901->__vtable = (cXObjectImpl__123_901__vtable *)::_vt_12cXPersonImpl_12cXObjectImpl;
  uVar9 = ::_vt_12cXPersonImpl_7TreeSim[2].__delta;
  uVar7 = ::_vt_12cXPersonImpl_7TreeSim[1].__delta;
  if (__in_chrg == 0) {
    local_dc = (TreeSimImpl__21_3338__vtable *)_vt_12cXPersonImpl_11TreeSimImpl;
    local_d0 = (cXObjectImpl__123_901__vtable *)_vt_12cXPersonImpl_12cXObjectImpl;
    p_Var27 = ::_vt_12cXPersonImpl_7TreeSim;
    pTVar20 = (TreeSim__vtable *)_vt_12cXPersonImpl_7TreeSim;
    do {
      pTVar23 = pTVar20;
      p_Var25 = p_Var27;
      _Var28 = p_Var25[1];
      _Var29 = p_Var25[2];
      _Var30 = p_Var25[3];
      *(__vtbl_ptr_type *)pTVar23 = *p_Var25;
      *(__vtbl_ptr_type *)&pTVar23->Initialize = _Var28;
      *(__vtbl_ptr_type *)&pTVar23->SetError = _Var29;
      *(__vtbl_ptr_type *)&pTVar23->ClearError = _Var30;
      p_Var27 = p_Var25 + 4;
      pTVar20 = (TreeSim__vtable *)&pTVar23->GetCurElem;
    } while (p_Var25 + 4 != ::_vt_12cXPersonImpl_7TreeSim + 0x10);
    pcVar2 = this->_vb1079;
    _Var28 = p_Var25[5];
    *(ulong *)&pTVar23->GetCurElem =
         CONCAT62(::_vt_12cXPersonImpl_7TreeSim[16]._2_6_,::_vt_12cXPersonImpl_7TreeSim[16].__delta)
    ;
    p_Var27 = ::_vt_12cXPersonImpl_8cXObject;
    *(__vtbl_ptr_type *)&pTVar23->GetNthElem = _Var28;
    pcVar2->_vb966->_vb899->__vtable = (TreeSim__vtable *)_vt_12cXPersonImpl_7TreeSim;
    uVar19 = ::_vt_12cXPersonImpl_8cXObject[1].__delta;
    sVar6 = (short)this;
    sVar4 = sVar6 - ((short)this->_vb1079->_vb966->_vb899 + -0x4fc);
    _vt_12cXPersonImpl_7TreeSim[1].__delta = uVar7 + sVar4;
    sVar5 = sVar6 - ((short)this->_vb901->_vb1233 + -0x52c);
    _vt_12cXPersonImpl_7TreeSim[3].__delta = ::_vt_12cXPersonImpl_7TreeSim[3].__delta + sVar4;
    _vt_12cXPersonImpl_7TreeSim[2].__delta = (uVar9 + sVar4) - sVar5;
    _vt_12cXPersonImpl_7TreeSim[4].__delta =
         (::_vt_12cXPersonImpl_7TreeSim[4].__delta + sVar4) - sVar5;
    _vt_12cXPersonImpl_7TreeSim[5].__delta =
         (::_vt_12cXPersonImpl_7TreeSim[5].__delta + sVar4) - sVar5;
    _vt_12cXPersonImpl_7TreeSim[6].__delta =
         (::_vt_12cXPersonImpl_7TreeSim[6].__delta + sVar4) - sVar5;
    _vt_12cXPersonImpl_7TreeSim[7].__delta =
         (::_vt_12cXPersonImpl_7TreeSim[7].__delta + sVar4) - sVar5;
    _vt_12cXPersonImpl_7TreeSim[8].__delta =
         (::_vt_12cXPersonImpl_7TreeSim[8].__delta + sVar4) - sVar5;
    _vt_12cXPersonImpl_7TreeSim[9].__delta =
         (::_vt_12cXPersonImpl_7TreeSim[9].__delta + sVar4) - sVar5;
    _vt_12cXPersonImpl_7TreeSim[10].__delta =
         (::_vt_12cXPersonImpl_7TreeSim[10].__delta + sVar4) - sVar5;
    _vt_12cXPersonImpl_7TreeSim[11].__delta =
         (::_vt_12cXPersonImpl_7TreeSim[11].__delta + sVar4) - sVar5;
    _vt_12cXPersonImpl_7TreeSim[12].__delta =
         (::_vt_12cXPersonImpl_7TreeSim[12].__delta + sVar4) - sVar5;
    _vt_12cXPersonImpl_7TreeSim[16].__delta =
         (::_vt_12cXPersonImpl_7TreeSim[16].__delta + sVar4) - sVar5;
    _vt_12cXPersonImpl_7TreeSim[13].__delta =
         (::_vt_12cXPersonImpl_7TreeSim[13].__delta + sVar4) - sVar5;
    _vt_12cXPersonImpl_7TreeSim[14].__delta =
         (::_vt_12cXPersonImpl_7TreeSim[14].__delta + sVar4) - sVar5;
    _vt_12cXPersonImpl_7TreeSim[15].__delta =
         (::_vt_12cXPersonImpl_7TreeSim[15].__delta + sVar4) - sVar5;
    pcVar26 = (cXObject__21_1030__vtable *)_vt_12cXPersonImpl_8cXObject;
    do {
      _Var28 = p_Var27[1];
      _Var29 = p_Var27[2];
      _Var30 = p_Var27[3];
      *(__vtbl_ptr_type *)pcVar26 = *p_Var27;
      *(__vtbl_ptr_type *)&pcVar26->GetNumAttr = _Var28;
      *(__vtbl_ptr_type *)&pcVar26->CalcShortDistance = _Var29;
      *(__vtbl_ptr_type *)&pcVar26->GetSpriteSlot = _Var30;
      p_Var27 = p_Var27 + 4;
      pcVar26 = (cXObject__21_1030__vtable *)&pcVar26->GetHilite;
    } while (p_Var27 != ::_vt_12cXPersonImpl_7TreeSim);
    this->_vb1079->_vb966->__vtable = (cXObject__21_1030__vtable *)_vt_12cXPersonImpl_8cXObject;
    sVar5 = sVar6 - ((short)this->_vb1079->_vb966 + -0x51c);
    sVar4 = sVar6 - ((short)this->_vb901 + -0x560);
    _vt_12cXPersonImpl_8cXObject[1].__delta = (uVar19 + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[2].__delta =
         (::_vt_12cXPersonImpl_8cXObject[2].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[3].__delta =
         (::_vt_12cXPersonImpl_8cXObject[3].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[4].__delta =
         (::_vt_12cXPersonImpl_8cXObject[4].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[5].__delta =
         (::_vt_12cXPersonImpl_8cXObject[5].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[6].__delta =
         (::_vt_12cXPersonImpl_8cXObject[6].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[7].__delta =
         (::_vt_12cXPersonImpl_8cXObject[7].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[8].__delta =
         (::_vt_12cXPersonImpl_8cXObject[8].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[9].__delta =
         (::_vt_12cXPersonImpl_8cXObject[9].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[10].__delta =
         (::_vt_12cXPersonImpl_8cXObject[10].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[11].__delta =
         (::_vt_12cXPersonImpl_8cXObject[11].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[12].__delta =
         (::_vt_12cXPersonImpl_8cXObject[12].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[13].__delta =
         (::_vt_12cXPersonImpl_8cXObject[13].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[14].__delta = ::_vt_12cXPersonImpl_8cXObject[14].__delta + sVar5;
    _vt_12cXPersonImpl_8cXObject[15].__delta =
         (::_vt_12cXPersonImpl_8cXObject[15].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[16].__delta =
         (::_vt_12cXPersonImpl_8cXObject[16].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[17].__delta =
         (::_vt_12cXPersonImpl_8cXObject[17].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[18].__delta =
         (::_vt_12cXPersonImpl_8cXObject[18].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[19].__delta =
         (::_vt_12cXPersonImpl_8cXObject[19].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[20].__delta =
         (::_vt_12cXPersonImpl_8cXObject[20].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[21].__delta =
         (::_vt_12cXPersonImpl_8cXObject[21].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[22].__delta =
         (::_vt_12cXPersonImpl_8cXObject[22].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[23].__delta =
         (::_vt_12cXPersonImpl_8cXObject[23].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[24].__delta =
         (::_vt_12cXPersonImpl_8cXObject[24].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[25].__delta =
         (::_vt_12cXPersonImpl_8cXObject[25].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[26].__delta =
         (::_vt_12cXPersonImpl_8cXObject[26].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[27].__delta =
         (::_vt_12cXPersonImpl_8cXObject[27].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[28].__delta =
         (::_vt_12cXPersonImpl_8cXObject[28].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[29].__delta =
         (::_vt_12cXPersonImpl_8cXObject[29].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[30].__delta =
         (::_vt_12cXPersonImpl_8cXObject[30].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[31].__delta =
         (::_vt_12cXPersonImpl_8cXObject[31].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[32].__delta =
         (::_vt_12cXPersonImpl_8cXObject[32].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[33].__delta =
         (::_vt_12cXPersonImpl_8cXObject[33].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[34].__delta = ::_vt_12cXPersonImpl_8cXObject[34].__delta + sVar5;
    _vt_12cXPersonImpl_8cXObject[35].__delta =
         (::_vt_12cXPersonImpl_8cXObject[35].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[36].__delta =
         (::_vt_12cXPersonImpl_8cXObject[36].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[37].__delta =
         (::_vt_12cXPersonImpl_8cXObject[37].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[38].__delta =
         (::_vt_12cXPersonImpl_8cXObject[38].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[39].__delta =
         (::_vt_12cXPersonImpl_8cXObject[39].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[40].__delta =
         (::_vt_12cXPersonImpl_8cXObject[40].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[41].__delta =
         (::_vt_12cXPersonImpl_8cXObject[41].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[42].__delta =
         (::_vt_12cXPersonImpl_8cXObject[42].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[43].__delta =
         (::_vt_12cXPersonImpl_8cXObject[43].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[44].__delta =
         (::_vt_12cXPersonImpl_8cXObject[44].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[45].__delta = ::_vt_12cXPersonImpl_8cXObject[45].__delta + sVar5;
    _vt_12cXPersonImpl_8cXObject[46].__delta =
         (::_vt_12cXPersonImpl_8cXObject[46].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[47].__delta =
         (::_vt_12cXPersonImpl_8cXObject[47].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[48].__delta =
         (::_vt_12cXPersonImpl_8cXObject[48].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[49].__delta =
         (::_vt_12cXPersonImpl_8cXObject[49].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[50].__delta =
         (::_vt_12cXPersonImpl_8cXObject[50].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[51].__delta =
         (::_vt_12cXPersonImpl_8cXObject[51].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[52].__delta =
         (::_vt_12cXPersonImpl_8cXObject[52].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[53].__delta =
         (::_vt_12cXPersonImpl_8cXObject[53].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[54].__delta =
         (::_vt_12cXPersonImpl_8cXObject[54].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[55].__delta =
         (::_vt_12cXPersonImpl_8cXObject[55].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[56].__delta =
         (::_vt_12cXPersonImpl_8cXObject[56].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[57].__delta =
         (::_vt_12cXPersonImpl_8cXObject[57].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[58].__delta =
         (::_vt_12cXPersonImpl_8cXObject[58].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[59].__delta =
         (::_vt_12cXPersonImpl_8cXObject[59].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[60].__delta =
         (::_vt_12cXPersonImpl_8cXObject[60].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[61].__delta =
         (::_vt_12cXPersonImpl_8cXObject[61].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[62].__delta =
         (::_vt_12cXPersonImpl_8cXObject[62].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[63].__delta =
         (::_vt_12cXPersonImpl_8cXObject[63].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[64].__delta =
         (::_vt_12cXPersonImpl_8cXObject[64].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[65].__delta =
         (::_vt_12cXPersonImpl_8cXObject[65].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[66].__delta =
         (::_vt_12cXPersonImpl_8cXObject[66].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[67].__delta =
         (::_vt_12cXPersonImpl_8cXObject[67].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[68].__delta =
         (::_vt_12cXPersonImpl_8cXObject[68].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[69].__delta =
         (::_vt_12cXPersonImpl_8cXObject[69].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[70].__delta =
         (::_vt_12cXPersonImpl_8cXObject[70].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[71].__delta =
         (::_vt_12cXPersonImpl_8cXObject[71].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[72].__delta =
         (::_vt_12cXPersonImpl_8cXObject[72].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[73].__delta =
         (::_vt_12cXPersonImpl_8cXObject[73].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[74].__delta =
         (::_vt_12cXPersonImpl_8cXObject[74].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[75].__delta =
         (::_vt_12cXPersonImpl_8cXObject[75].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[76].__delta =
         (::_vt_12cXPersonImpl_8cXObject[76].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[77].__delta =
         (::_vt_12cXPersonImpl_8cXObject[77].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[78].__delta =
         (::_vt_12cXPersonImpl_8cXObject[78].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[79].__delta =
         (::_vt_12cXPersonImpl_8cXObject[79].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[80].__delta =
         (::_vt_12cXPersonImpl_8cXObject[80].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[81].__delta =
         (::_vt_12cXPersonImpl_8cXObject[81].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[82].__delta =
         (::_vt_12cXPersonImpl_8cXObject[82].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[83].__delta =
         (::_vt_12cXPersonImpl_8cXObject[83].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[84].__delta =
         (::_vt_12cXPersonImpl_8cXObject[84].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[85].__delta =
         (::_vt_12cXPersonImpl_8cXObject[85].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[86].__delta =
         (::_vt_12cXPersonImpl_8cXObject[86].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[87].__delta =
         (::_vt_12cXPersonImpl_8cXObject[87].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[88].__delta =
         (::_vt_12cXPersonImpl_8cXObject[88].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[89].__delta =
         (::_vt_12cXPersonImpl_8cXObject[89].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[90].__delta =
         (::_vt_12cXPersonImpl_8cXObject[90].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[91].__delta =
         (::_vt_12cXPersonImpl_8cXObject[91].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[92].__delta =
         (::_vt_12cXPersonImpl_8cXObject[92].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[93].__delta =
         (::_vt_12cXPersonImpl_8cXObject[93].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[94].__delta =
         (::_vt_12cXPersonImpl_8cXObject[94].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[95].__delta =
         (::_vt_12cXPersonImpl_8cXObject[95].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[96].__delta =
         (::_vt_12cXPersonImpl_8cXObject[96].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[97].__delta =
         (::_vt_12cXPersonImpl_8cXObject[97].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[98].__delta =
         (::_vt_12cXPersonImpl_8cXObject[98].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[99].__delta =
         (::_vt_12cXPersonImpl_8cXObject[99].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[100].__delta =
         (::_vt_12cXPersonImpl_8cXObject[100].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[101].__delta =
         (::_vt_12cXPersonImpl_8cXObject[101].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[102].__delta =
         (::_vt_12cXPersonImpl_8cXObject[102].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[103].__delta =
         (::_vt_12cXPersonImpl_8cXObject[103].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[104].__delta =
         (::_vt_12cXPersonImpl_8cXObject[104].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[105].__delta =
         (::_vt_12cXPersonImpl_8cXObject[105].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[106].__delta =
         (::_vt_12cXPersonImpl_8cXObject[106].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[107].__delta =
         (::_vt_12cXPersonImpl_8cXObject[107].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[108].__delta =
         (::_vt_12cXPersonImpl_8cXObject[108].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[109].__delta =
         (::_vt_12cXPersonImpl_8cXObject[109].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[110].__delta =
         (::_vt_12cXPersonImpl_8cXObject[110].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[111].__delta =
         (::_vt_12cXPersonImpl_8cXObject[111].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[112].__delta =
         (::_vt_12cXPersonImpl_8cXObject[112].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[113].__delta =
         (::_vt_12cXPersonImpl_8cXObject[113].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[114].__delta =
         (::_vt_12cXPersonImpl_8cXObject[114].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[115].__delta =
         (::_vt_12cXPersonImpl_8cXObject[115].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[116].__delta =
         (::_vt_12cXPersonImpl_8cXObject[116].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[127].__delta =
         (::_vt_12cXPersonImpl_8cXObject[127].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[128].__delta =
         (::_vt_12cXPersonImpl_8cXObject[128].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[129].__delta =
         (::_vt_12cXPersonImpl_8cXObject[129].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[132].__delta =
         (::_vt_12cXPersonImpl_8cXObject[132].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[117].__delta =
         (::_vt_12cXPersonImpl_8cXObject[117].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[118].__delta =
         (::_vt_12cXPersonImpl_8cXObject[118].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[119].__delta =
         (::_vt_12cXPersonImpl_8cXObject[119].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[120].__delta =
         (::_vt_12cXPersonImpl_8cXObject[120].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[121].__delta =
         (::_vt_12cXPersonImpl_8cXObject[121].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[122].__delta =
         (::_vt_12cXPersonImpl_8cXObject[122].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[123].__delta =
         (::_vt_12cXPersonImpl_8cXObject[123].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[124].__delta =
         (::_vt_12cXPersonImpl_8cXObject[124].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[125].__delta =
         (::_vt_12cXPersonImpl_8cXObject[125].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[126].__delta =
         (::_vt_12cXPersonImpl_8cXObject[126].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[130].__delta = ::_vt_12cXPersonImpl_8cXObject[130].__delta + sVar5;
    _vt_12cXPersonImpl_8cXObject[131].__delta = ::_vt_12cXPersonImpl_8cXObject[131].__delta + sVar5;
    _vt_12cXPersonImpl_8cXObject[133].__delta =
         (::_vt_12cXPersonImpl_8cXObject[133].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[138].__delta =
         (::_vt_12cXPersonImpl_8cXObject[138].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[134].__delta =
         (::_vt_12cXPersonImpl_8cXObject[134].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[135].__delta =
         (::_vt_12cXPersonImpl_8cXObject[135].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[136].__delta =
         (::_vt_12cXPersonImpl_8cXObject[136].__delta + sVar5) - sVar4;
    _vt_12cXPersonImpl_8cXObject[137].__delta =
         (::_vt_12cXPersonImpl_8cXObject[137].__delta + sVar5) - sVar4;
    pcVar21 = (cXPerson__123_1079__vtable *)_vt_12cXPersonImpl_8cXPerson;
    p_Var27 = ::_vt_12cXPersonImpl_8cXPerson;
    do {
      p_Var25 = p_Var27;
      pcVar32 = pcVar21;
      _Var28 = p_Var25[1];
      _Var29 = p_Var25[2];
      _Var30 = p_Var25[3];
      *(__vtbl_ptr_type *)pcVar32 = *p_Var25;
      *(__vtbl_ptr_type *)&pcVar32->GetQueueCount = _Var28;
      *(__vtbl_ptr_type *)&pcVar32->Initialize = _Var29;
      *(__vtbl_ptr_type *)&pcVar32->PostLoad = _Var30;
      pcVar21 = (cXPerson__123_1079__vtable *)&pcVar32->TryElement;
      p_Var27 = p_Var25 + 4;
    } while (p_Var25 + 4 != ::_vt_12cXPersonImpl_8cXPerson + 0x48);
    pcVar2 = this->_vb1079;
    _Var28 = p_Var25[5];
    _Var29 = p_Var25[6];
    *(ulong *)&pcVar32->TryElement =
         CONCAT62(::_vt_12cXPersonImpl_8cXPerson[72]._2_6_,
                  ::_vt_12cXPersonImpl_8cXPerson[72].__delta);
    *(__vtbl_ptr_type *)&pcVar32->StackJustPopped = _Var28;
    *(__vtbl_ptr_type *)&pcVar32->GetMotive = _Var29;
    pcVar2->__vtable = (cXPerson__123_1079__vtable *)_vt_12cXPersonImpl_8cXPerson;
    uVar12 = ::_vt_12cXPersonImpl_11TreeSimImpl[4]._2_6_;
    uVar11 = ::_vt_12cXPersonImpl_11TreeSimImpl[3]._2_6_;
    uVar10 = ::_vt_12cXPersonImpl_11TreeSimImpl[2]._2_6_;
    uVar9 = ::_vt_12cXPersonImpl_11TreeSimImpl[2].__delta;
    uVar8 = ::_vt_12cXPersonImpl_11TreeSimImpl[1]._2_6_;
    uVar7 = ::_vt_12cXPersonImpl_11TreeSimImpl[1].__delta;
    sVar4 = sVar6 - ((short)this->_vb1079 + -0x524);
    _vt_12cXPersonImpl_8cXPerson[1].__delta = ::_vt_12cXPersonImpl_8cXPerson[1].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[2].__delta = ::_vt_12cXPersonImpl_8cXPerson[2].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[3].__delta = ::_vt_12cXPersonImpl_8cXPerson[3].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[4].__delta = ::_vt_12cXPersonImpl_8cXPerson[4].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[5].__delta = ::_vt_12cXPersonImpl_8cXPerson[5].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[6].__delta = ::_vt_12cXPersonImpl_8cXPerson[6].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[7].__delta = ::_vt_12cXPersonImpl_8cXPerson[7].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[8].__delta = ::_vt_12cXPersonImpl_8cXPerson[8].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[9].__delta = ::_vt_12cXPersonImpl_8cXPerson[9].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[10].__delta = ::_vt_12cXPersonImpl_8cXPerson[10].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[11].__delta = ::_vt_12cXPersonImpl_8cXPerson[11].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[12].__delta = ::_vt_12cXPersonImpl_8cXPerson[12].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[13].__delta = ::_vt_12cXPersonImpl_8cXPerson[13].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[14].__delta = ::_vt_12cXPersonImpl_8cXPerson[14].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[15].__delta = ::_vt_12cXPersonImpl_8cXPerson[15].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[16].__delta = ::_vt_12cXPersonImpl_8cXPerson[16].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[17].__delta = ::_vt_12cXPersonImpl_8cXPerson[17].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[18].__delta = ::_vt_12cXPersonImpl_8cXPerson[18].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[19].__delta = ::_vt_12cXPersonImpl_8cXPerson[19].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[20].__delta = ::_vt_12cXPersonImpl_8cXPerson[20].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[21].__delta = ::_vt_12cXPersonImpl_8cXPerson[21].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[22].__delta = ::_vt_12cXPersonImpl_8cXPerson[22].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[23].__delta = ::_vt_12cXPersonImpl_8cXPerson[23].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[24].__delta = ::_vt_12cXPersonImpl_8cXPerson[24].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[25].__delta = ::_vt_12cXPersonImpl_8cXPerson[25].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[26].__delta = ::_vt_12cXPersonImpl_8cXPerson[26].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[27].__delta = ::_vt_12cXPersonImpl_8cXPerson[27].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[28].__delta = ::_vt_12cXPersonImpl_8cXPerson[28].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[29].__delta = ::_vt_12cXPersonImpl_8cXPerson[29].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[30].__delta = ::_vt_12cXPersonImpl_8cXPerson[30].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[31].__delta = ::_vt_12cXPersonImpl_8cXPerson[31].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[32].__delta = ::_vt_12cXPersonImpl_8cXPerson[32].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[33].__delta = ::_vt_12cXPersonImpl_8cXPerson[33].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[34].__delta = ::_vt_12cXPersonImpl_8cXPerson[34].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[35].__delta = ::_vt_12cXPersonImpl_8cXPerson[35].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[36].__delta = ::_vt_12cXPersonImpl_8cXPerson[36].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[37].__delta = ::_vt_12cXPersonImpl_8cXPerson[37].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[38].__delta = ::_vt_12cXPersonImpl_8cXPerson[38].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[39].__delta = ::_vt_12cXPersonImpl_8cXPerson[39].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[40].__delta = ::_vt_12cXPersonImpl_8cXPerson[40].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[41].__delta = ::_vt_12cXPersonImpl_8cXPerson[41].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[42].__delta = ::_vt_12cXPersonImpl_8cXPerson[42].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[43].__delta = ::_vt_12cXPersonImpl_8cXPerson[43].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[44].__delta = ::_vt_12cXPersonImpl_8cXPerson[44].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[45].__delta = ::_vt_12cXPersonImpl_8cXPerson[45].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[46].__delta = ::_vt_12cXPersonImpl_8cXPerson[46].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[47].__delta = ::_vt_12cXPersonImpl_8cXPerson[47].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[48].__delta = ::_vt_12cXPersonImpl_8cXPerson[48].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[49].__delta = ::_vt_12cXPersonImpl_8cXPerson[49].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[50].__delta = ::_vt_12cXPersonImpl_8cXPerson[50].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[51].__delta = ::_vt_12cXPersonImpl_8cXPerson[51].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[52].__delta = ::_vt_12cXPersonImpl_8cXPerson[52].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[53].__delta = ::_vt_12cXPersonImpl_8cXPerson[53].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[54].__delta = ::_vt_12cXPersonImpl_8cXPerson[54].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[55].__delta = ::_vt_12cXPersonImpl_8cXPerson[55].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[56].__delta = ::_vt_12cXPersonImpl_8cXPerson[56].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[57].__delta = ::_vt_12cXPersonImpl_8cXPerson[57].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[58].__delta = ::_vt_12cXPersonImpl_8cXPerson[58].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[59].__delta = ::_vt_12cXPersonImpl_8cXPerson[59].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[60].__delta = ::_vt_12cXPersonImpl_8cXPerson[60].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[61].__delta = ::_vt_12cXPersonImpl_8cXPerson[61].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[62].__delta = ::_vt_12cXPersonImpl_8cXPerson[62].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[63].__delta = ::_vt_12cXPersonImpl_8cXPerson[63].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[64].__delta = ::_vt_12cXPersonImpl_8cXPerson[64].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[65].__delta = ::_vt_12cXPersonImpl_8cXPerson[65].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[66].__delta = ::_vt_12cXPersonImpl_8cXPerson[66].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[73].__delta = ::_vt_12cXPersonImpl_8cXPerson[73].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[67].__delta = ::_vt_12cXPersonImpl_8cXPerson[67].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[68].__delta = ::_vt_12cXPersonImpl_8cXPerson[68].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[69].__delta = ::_vt_12cXPersonImpl_8cXPerson[69].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[70].__delta = ::_vt_12cXPersonImpl_8cXPerson[70].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[71].__delta = ::_vt_12cXPersonImpl_8cXPerson[71].__delta + sVar4;
    _vt_12cXPersonImpl_8cXPerson[72].__delta = ::_vt_12cXPersonImpl_8cXPerson[72].__delta + sVar4;
    _vt_12cXPersonImpl_11TreeSimImpl[0] = ::_vt_12cXPersonImpl_11TreeSimImpl[0];
    _vt_12cXPersonImpl_11TreeSimImpl[5] = ::_vt_12cXPersonImpl_11TreeSimImpl[5];
    this->_vb901->_vb1233->__vtable = local_dc;
    uVar18 = ::_vt_12cXPersonImpl_12cXObjectImpl[6]._2_6_;
    uVar17 = ::_vt_12cXPersonImpl_12cXObjectImpl[5]._2_6_;
    uVar16 = ::_vt_12cXPersonImpl_12cXObjectImpl[4]._2_6_;
    uVar15 = ::_vt_12cXPersonImpl_12cXObjectImpl[3]._2_6_;
    uVar14 = ::_vt_12cXPersonImpl_12cXObjectImpl[2]._2_6_;
    uVar13 = ::_vt_12cXPersonImpl_12cXObjectImpl[1]._2_6_;
    pcVar3 = this->_vb901;
    sVar5 = sVar6 - ((short)pcVar3 + -0x560);
    sVar4 = sVar6 - ((short)pcVar3->_vb1233 + -0x52c);
    _vt_12cXPersonImpl_11TreeSimImpl[1] = (__vtbl_ptr_type)CONCAT62(uVar8,uVar7 + sVar4);
    _vt_12cXPersonImpl_11TreeSimImpl[2] = (__vtbl_ptr_type)CONCAT62(uVar10,(uVar9 + sVar4) - sVar5);
    _vt_12cXPersonImpl_11TreeSimImpl[3] =
         (__vtbl_ptr_type)CONCAT62(uVar11,::_vt_12cXPersonImpl_11TreeSimImpl[3].__delta + sVar4);
    _vt_12cXPersonImpl_11TreeSimImpl[4] =
         (__vtbl_ptr_type)
         CONCAT62(uVar12,(::_vt_12cXPersonImpl_11TreeSimImpl[4].__delta + sVar4) - sVar5);
    _vt_12cXPersonImpl_12cXObjectImpl[0] = ::_vt_12cXPersonImpl_12cXObjectImpl[0];
    _vt_12cXPersonImpl_12cXObjectImpl[7] = ::_vt_12cXPersonImpl_12cXObjectImpl[7];
    pcVar3->__vtable = local_d0;
    sVar6 = sVar6 - ((short)this->_vb901 + -0x560);
    _vt_12cXPersonImpl_12cXObjectImpl[1] =
         (__vtbl_ptr_type)CONCAT62(uVar13,::_vt_12cXPersonImpl_12cXObjectImpl[1].__delta + sVar6);
    _vt_12cXPersonImpl_12cXObjectImpl[2] =
         (__vtbl_ptr_type)CONCAT62(uVar14,::_vt_12cXPersonImpl_12cXObjectImpl[2].__delta + sVar6);
    _vt_12cXPersonImpl_12cXObjectImpl[3] =
         (__vtbl_ptr_type)CONCAT62(uVar15,::_vt_12cXPersonImpl_12cXObjectImpl[3].__delta + sVar6);
    _vt_12cXPersonImpl_12cXObjectImpl[4] =
         (__vtbl_ptr_type)CONCAT62(uVar16,::_vt_12cXPersonImpl_12cXObjectImpl[4].__delta + sVar6);
    _vt_12cXPersonImpl_12cXObjectImpl[5] =
         (__vtbl_ptr_type)CONCAT62(uVar17,::_vt_12cXPersonImpl_12cXObjectImpl[5].__delta + sVar6);
    _vt_12cXPersonImpl_12cXObjectImpl[6] =
         (__vtbl_ptr_type)CONCAT62(uVar18,::_vt_12cXPersonImpl_12cXObjectImpl[6].__delta + sVar6);
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Motive.h */
  iVar31 = 7;
  Init__7Motives(local_e4);
  (this->fInteractions).start = (ScoredInteraction *)0x0;
  local_d4->end_of_storage = (ScoredInteraction *)0x0;
  local_d4->finish = (ScoredInteraction *)0x0;
  do {
    iVar31 = iVar31 + -1;
    __11Interaction(this_01);
    this_01 = this_01 + 1;
  } while (iVar31 != -1);
  (this->fTreeQueue).fFirst = 0;
                    /* end of inlined section */
                    /* end of inlined section */
  (this->fTreeQueue).fLast = 0;
  __11Interaction(local_e0);
  __11Interaction(local_d8);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  (this->fMotiveIncs).start = (MotiveInc *)0x0;
  local_cc->end_of_storage = (MotiveInc *)0x0;
  local_cc->finish = (MotiveInc *)0x0;
  (this->fDestList).field0_0x0.start = (FTilePt *)0x0;
  (local_c8->field0_0x0).end_of_storage = (FTilePt *)0x0;
  (local_c8->field0_0x0).finish = (FTilePt *)0x0;
  (this->fRouteStack).start = (XRoute *)0x0;
  local_c4->end_of_storage = (XRoute *)0x0;
  local_c4->finish = (XRoute *)0x0;
  (this->fObjectRecords).start = (ObjectRecord *)0x0;
  local_c0->end_of_storage = (ObjectRecord *)0x0;
  local_c0->finish = (ObjectRecord *)0x0;
  __12StringBufferPcUi(local_bc,local_b8,0x40);
  __12StringBufferPcUi(local_b4,local_b0,0x40);
  __12StringBufferPcUi(local_f0,local_ec,0x40);
                    /* end of inlined section */
  iVar31 = 0x4f;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
                    /* end of inlined section */
  local_e8 = local_e8 + 0x4f;
                    /* inlined from c:/eor/src2/games/sims/MSrc/TreeSim.h */
  this->_vb1079->_vb966->_vb899->m_pPerson = (cXPersonImpl__142_963 *)this;
                    /* end of inlined section */
  this->fLastMotiveTick = 0;
  this->fMotiveEffects = (MotiveEffects *)0x0;
  (this->fMotives).person = (cXPerson__20_1697 *)this->_vb1079;
  do {
    *local_e8 = 0;
    iVar31 = iVar31 + -1;
    local_e8 = local_e8 + -1;
  } while (-1 < iVar31);
  this->fLastJobType = 0xfc19;
  this->fLastJobLevel = 0xffff;
  this->_vb901->mHas3D = 1;
  this->fCurrentRoom = -5;
  this->mRecordDuration = 0;
  this->mRecordMaxDuration = 0;
  *(undefined4 *)&this->mRecording = 0;
  this->mRecordStartTicks = 0;
  this->mRecordCurTicks = 0;
  this->mRecordTicksElapsed = 0;
  this->mRecordSkill = (undefined1 *)0x0;
  this->mRecordID = 0;
  this->fAnimator = (SAnimator *)0x0;
  return this;
}

void cXPerson::~cXPerson(int __in_chrg) {
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
  undefined local_490 [272];
  short local_380;
  short local_328;
  short local_80;
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
  this->__vtable = (cXPerson__123_1079__vtable *)_vt_8cXPerson;
  this->_vb966->_vb899->__vtable = (TreeSim__vtable *)_vt_8cXPerson_7TreeSim;
  this->_vb966->__vtable = (cXObject__21_1030__vtable *)_vt_8cXPerson_8cXObject;
  uVar3 = _vt_8cXPerson_7TreeSim[1].__delta;
  if (__in_chrg == 0) {
    p_Var8 = (__vtbl_ptr_type *)local_520;
    p_Var4 = _vt_8cXPerson_7TreeSim;
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
    } while (p_Var6 + 4 != _vt_8cXPerson_7TreeSim + 0x10);
    pcVar1 = this->_vb966;
    _Var9 = p_Var6[5];
    p_Var5[4] = _vt_8cXPerson_7TreeSim[16];
    p_Var5[5] = _Var9;
    p_Var8 = _vt_8cXPerson_8cXObject;
    pcVar1->_vb899->__vtable = (TreeSim__vtable *)local_520;
    uVar2 = _vt_8cXPerson_8cXObject[131].__delta;
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
    } while (p_Var8 != _vt_8cXPerson_7TreeSim);
    this->_vb966->__vtable = (cXObject__21_1030__vtable *)local_490;
    local_80 = (short)this - ((short)this->_vb966 + -0x28);
    local_78 = uVar2 + local_80;
    local_490._112_2_ = _vt_8cXPerson_8cXObject[14].__delta + local_80;
    local_380 = _vt_8cXPerson_8cXObject[34].__delta + local_80;
    local_328 = _vt_8cXPerson_8cXObject[45].__delta + local_80;
    local_80 = _vt_8cXPerson_8cXObject[130].__delta + local_80;
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

void cXPersonImpl::~cXPersonImpl(int __in_chrg) {
	MotiveCurve *this;
	ObjectRecord *last;
	ObjectRecord *first;
	ObjectRecord *pointer;
	XRoute *last;
	XRoute *first;
	XRoute *pointer;
	XRoute *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	RouteGoal *last;
	RouteGoal *first;
	RouteGoal *pointer;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	void *pAddress;
	FTilePt *first;
	FTilePt *last;
	FTilePt *pointer;
	MotiveInc *last;
	MotiveInc *first;
	MotiveInc *pointer;
	Interaction *this;
	void *pAddress;
	ScoredInteraction *last;
	ScoredInteraction *first;
	ScoredInteraction *pointer;
	void *pAddress;
	
  SAnimator *pSVar1;
  cXPerson__123_1079 *pcVar2;
  cXObjectImpl__123_901 *pcVar3;
  EGlobal__vtable *pEVar4;
  MotiveEffects *pAddress;
  ObjectRecord *pOVar5;
  XRoute *pXVar6;
  RouteGoal *pRVar7;
  FTilePt *pFVar8;
  MotiveInc *pMVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  ushort uVar13;
  undefined6 uVar14;
  ushort uVar15;
  undefined6 uVar16;
  undefined6 uVar17;
  undefined6 uVar18;
  undefined6 uVar19;
  undefined6 uVar20;
  undefined6 uVar21;
  undefined6 uVar22;
  undefined6 uVar23;
  undefined6 uVar24;
  ushort uVar25;
  EGlobal *pEVar26;
  cXPerson__123_1079__vtable *pcVar27;
  MotiveCurve *pMVar28;
  RouteGoal *pRVar29;
  FTilePt *pFVar30;
  MotiveInc *pMVar31;
  ScoredInteraction *pSVar32;
  __vtbl_ptr_type *p_Var33;
  XRoute *pXVar34;
  __vtbl_ptr_type *p_Var35;
  ObjectRecord *pOVar36;
  __vtbl_ptr_type _Var37;
  __vtbl_ptr_type _Var38;
  __vtbl_ptr_type _Var39;
  PiecewiseFn *this_00;
  XRoute *pXVar40;
  Interaction *pIVar41;
  undefined8 unaff_s0;
  cXObject__21_1030__vtable *pcVar42;
  undefined8 unaff_s1;
  __vtbl_ptr_type *p_Var43;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  cXPerson__123_1079__vtable *pcVar44;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  __vtbl_ptr_type *p_Var45;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  undefined local_880 [8];
  __vtbl_ptr_type local_878;
  __vtbl_ptr_type local_870;
  __vtbl_ptr_type local_868;
  __vtbl_ptr_type local_860;
  __vtbl_ptr_type local_858;
  short local_850;
  short local_848;
  short local_840;
  short local_838;
  short local_830;
  short local_828;
  short local_820;
  short local_818;
  short local_810;
  short local_808;
  short local_800;
  undefined local_7f0 [8];
  undefined8 local_7e8;
  short local_7e0;
  short local_7d8;
  short local_7d0;
  short local_7c8;
  short local_7c0;
  short local_7b8;
  short local_7b0;
  short local_7a8;
  short local_7a0;
  short local_798;
  short local_790;
  short local_788;
  short local_780;
  short local_778;
  short local_770;
  short local_768;
  short local_760;
  short local_758;
  short local_750;
  short local_748;
  short local_740;
  short local_738;
  short local_730;
  short local_728;
  short local_720;
  short local_718;
  short local_710;
  short local_708;
  short local_700;
  short local_6f8;
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
  undefined local_390 [8];
  undefined8 local_388;
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
  __vtbl_ptr_type local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  __vtbl_ptr_type local_108;
  __vtbl_ptr_type local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  __vtbl_ptr_type local_c8;
  undefined *local_c0;
  cXObjectImpl__123_901__vtable *local_bc;
  undefined *local_b8;
  undefined *local_b4;
  BString2 *local_b0;
  vector_ScoredInteraction___malloc_alloc_template_0___ *local_ac;
  BString2 *local_a8;
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
  local_50 = (undefined *)unaff_s5;
  puStack_4c = (undefined *)((ulong)unaff_s5 >> 0x20);
  local_10 = (undefined *)unaff_retaddr;
  puStack_c = (undefined *)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined *)unaff_s8;
  puStack_1c = (undefined *)((ulong)unaff_s8 >> 0x20);
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
  this->_vb1079->_vb966->_vb899->__vtable = (TreeSim__vtable *)_vt_12cXPersonImpl_7TreeSim;
  this->_vb1079->_vb966->__vtable = (cXObject__21_1030__vtable *)_vt_12cXPersonImpl_8cXObject;
  this->_vb1079->__vtable = (cXPerson__123_1079__vtable *)_vt_12cXPersonImpl_8cXPerson;
  this->_vb901->_vb1233->__vtable = (TreeSimImpl__21_3338__vtable *)_vt_12cXPersonImpl_11TreeSimImpl
  ;
  this->_vb901->__vtable = (cXObjectImpl__123_901__vtable *)_vt_12cXPersonImpl_12cXObjectImpl;
  uVar13 = _vt_12cXPersonImpl_7TreeSim[2].__delta;
  uVar25 = _vt_12cXPersonImpl_7TreeSim[1].__delta;
  local_c0 = (undefined *)__in_chrg;
  if (__in_chrg == 0) {
    local_bc = (cXObjectImpl__123_901__vtable *)&local_100;
    p_Var43 = (__vtbl_ptr_type *)local_880;
    p_Var45 = _vt_12cXPersonImpl_7TreeSim;
    do {
      p_Var35 = p_Var45;
      p_Var33 = p_Var43;
      _Var37 = p_Var35[1];
      _Var38 = p_Var35[2];
      _Var39 = p_Var35[3];
      *p_Var33 = *p_Var35;
      p_Var33[1] = _Var37;
      p_Var33[2] = _Var38;
      p_Var33[3] = _Var39;
      p_Var43 = p_Var33 + 4;
      p_Var45 = p_Var35 + 4;
    } while (p_Var35 + 4 != _vt_12cXPersonImpl_7TreeSim + 0x10);
    pcVar2 = this->_vb1079;
    _Var37 = p_Var35[5];
    p_Var33[4] = (__vtbl_ptr_type)
                 CONCAT62(_vt_12cXPersonImpl_7TreeSim[16]._2_6_,
                          _vt_12cXPersonImpl_7TreeSim[16].__delta);
    p_Var43 = _vt_12cXPersonImpl_8cXObject;
    p_Var33[5] = _Var37;
    pcVar2->_vb966->_vb899->__vtable = (TreeSim__vtable *)local_880;
    uVar15 = _vt_12cXPersonImpl_8cXObject[1].__delta;
    sVar12 = (short)this;
    sVar10 = sVar12 - ((short)this->_vb1079->_vb966->_vb899 + -0x4fc);
    local_878.__delta = uVar25 + sVar10;
    local_808 = sVar12 - ((short)this->_vb901->_vb1233 + -0x52c);
    local_868.__delta = _vt_12cXPersonImpl_7TreeSim[3].__delta + sVar10;
    local_870.__delta = (uVar13 + sVar10) - local_808;
    local_860.__delta = (_vt_12cXPersonImpl_7TreeSim[4].__delta + sVar10) - local_808;
    local_858.__delta = (_vt_12cXPersonImpl_7TreeSim[5].__delta + sVar10) - local_808;
    local_850 = (_vt_12cXPersonImpl_7TreeSim[6].__delta + sVar10) - local_808;
    local_848 = (_vt_12cXPersonImpl_7TreeSim[7].__delta + sVar10) - local_808;
    local_840 = (_vt_12cXPersonImpl_7TreeSim[8].__delta + sVar10) - local_808;
    local_838 = (_vt_12cXPersonImpl_7TreeSim[9].__delta + sVar10) - local_808;
    local_830 = (_vt_12cXPersonImpl_7TreeSim[10].__delta + sVar10) - local_808;
    local_828 = (_vt_12cXPersonImpl_7TreeSim[11].__delta + sVar10) - local_808;
    local_820 = (_vt_12cXPersonImpl_7TreeSim[12].__delta + sVar10) - local_808;
    local_800 = (_vt_12cXPersonImpl_7TreeSim[16].__delta + sVar10) - local_808;
    local_818 = (_vt_12cXPersonImpl_7TreeSim[13].__delta + sVar10) - local_808;
    local_810 = (_vt_12cXPersonImpl_7TreeSim[14].__delta + sVar10) - local_808;
    local_808 = (_vt_12cXPersonImpl_7TreeSim[15].__delta + sVar10) - local_808;
    pcVar42 = (cXObject__21_1030__vtable *)local_7f0;
    do {
      _Var37 = p_Var43[1];
      _Var38 = p_Var43[2];
      _Var39 = p_Var43[3];
      *(__vtbl_ptr_type *)pcVar42 = *p_Var43;
      *(__vtbl_ptr_type *)&pcVar42->GetNumAttr = _Var37;
      *(__vtbl_ptr_type *)&pcVar42->CalcShortDistance = _Var38;
      *(__vtbl_ptr_type *)&pcVar42->GetSpriteSlot = _Var39;
      p_Var43 = p_Var43 + 4;
      pcVar42 = (cXObject__21_1030__vtable *)&pcVar42->GetHilite;
    } while (p_Var43 != _vt_12cXPersonImpl_7TreeSim);
    this->_vb1079->_vb966->__vtable = (cXObject__21_1030__vtable *)local_7f0;
    uVar25 = _vt_12cXPersonImpl_8cXPerson[1].__delta;
    sVar10 = sVar12 - ((short)this->_vb1079->_vb966 + -0x51c);
    local_3a8 = sVar12 - ((short)this->_vb901 + -0x560);
    local_7e8._0_2_ = (uVar15 + sVar10) - local_3a8;
    local_7e0 = (_vt_12cXPersonImpl_8cXObject[2].__delta + sVar10) - local_3a8;
    local_7d8 = (_vt_12cXPersonImpl_8cXObject[3].__delta + sVar10) - local_3a8;
    local_7d0 = (_vt_12cXPersonImpl_8cXObject[4].__delta + sVar10) - local_3a8;
    local_7c8 = (_vt_12cXPersonImpl_8cXObject[5].__delta + sVar10) - local_3a8;
    local_7c0 = (_vt_12cXPersonImpl_8cXObject[6].__delta + sVar10) - local_3a8;
    local_7b8 = (_vt_12cXPersonImpl_8cXObject[7].__delta + sVar10) - local_3a8;
    local_7b0 = (_vt_12cXPersonImpl_8cXObject[8].__delta + sVar10) - local_3a8;
    local_7a8 = (_vt_12cXPersonImpl_8cXObject[9].__delta + sVar10) - local_3a8;
    local_7a0 = (_vt_12cXPersonImpl_8cXObject[10].__delta + sVar10) - local_3a8;
    local_798 = (_vt_12cXPersonImpl_8cXObject[11].__delta + sVar10) - local_3a8;
    local_790 = (_vt_12cXPersonImpl_8cXObject[12].__delta + sVar10) - local_3a8;
    local_788 = (_vt_12cXPersonImpl_8cXObject[13].__delta + sVar10) - local_3a8;
    local_780 = _vt_12cXPersonImpl_8cXObject[14].__delta + sVar10;
    local_778 = (_vt_12cXPersonImpl_8cXObject[15].__delta + sVar10) - local_3a8;
    local_770 = (_vt_12cXPersonImpl_8cXObject[16].__delta + sVar10) - local_3a8;
    local_768 = (_vt_12cXPersonImpl_8cXObject[17].__delta + sVar10) - local_3a8;
    local_760 = (_vt_12cXPersonImpl_8cXObject[18].__delta + sVar10) - local_3a8;
    local_758 = (_vt_12cXPersonImpl_8cXObject[19].__delta + sVar10) - local_3a8;
    local_750 = (_vt_12cXPersonImpl_8cXObject[20].__delta + sVar10) - local_3a8;
    local_748 = (_vt_12cXPersonImpl_8cXObject[21].__delta + sVar10) - local_3a8;
    local_740 = (_vt_12cXPersonImpl_8cXObject[22].__delta + sVar10) - local_3a8;
    local_738 = (_vt_12cXPersonImpl_8cXObject[23].__delta + sVar10) - local_3a8;
    local_730 = (_vt_12cXPersonImpl_8cXObject[24].__delta + sVar10) - local_3a8;
    local_728 = (_vt_12cXPersonImpl_8cXObject[25].__delta + sVar10) - local_3a8;
    local_720 = (_vt_12cXPersonImpl_8cXObject[26].__delta + sVar10) - local_3a8;
    local_718 = (_vt_12cXPersonImpl_8cXObject[27].__delta + sVar10) - local_3a8;
    local_710 = (_vt_12cXPersonImpl_8cXObject[28].__delta + sVar10) - local_3a8;
    local_708 = (_vt_12cXPersonImpl_8cXObject[29].__delta + sVar10) - local_3a8;
    local_700 = (_vt_12cXPersonImpl_8cXObject[30].__delta + sVar10) - local_3a8;
    local_6f8 = (_vt_12cXPersonImpl_8cXObject[31].__delta + sVar10) - local_3a8;
    local_6f0 = (_vt_12cXPersonImpl_8cXObject[32].__delta + sVar10) - local_3a8;
    local_6e8 = (_vt_12cXPersonImpl_8cXObject[33].__delta + sVar10) - local_3a8;
    local_6e0 = _vt_12cXPersonImpl_8cXObject[34].__delta + sVar10;
    local_6d8 = (_vt_12cXPersonImpl_8cXObject[35].__delta + sVar10) - local_3a8;
    local_6d0 = (_vt_12cXPersonImpl_8cXObject[36].__delta + sVar10) - local_3a8;
    local_6c8 = (_vt_12cXPersonImpl_8cXObject[37].__delta + sVar10) - local_3a8;
    local_6c0 = (_vt_12cXPersonImpl_8cXObject[38].__delta + sVar10) - local_3a8;
    local_6b8 = (_vt_12cXPersonImpl_8cXObject[39].__delta + sVar10) - local_3a8;
    local_6b0 = (_vt_12cXPersonImpl_8cXObject[40].__delta + sVar10) - local_3a8;
    local_6a8 = (_vt_12cXPersonImpl_8cXObject[41].__delta + sVar10) - local_3a8;
    local_6a0 = (_vt_12cXPersonImpl_8cXObject[42].__delta + sVar10) - local_3a8;
    local_698 = (_vt_12cXPersonImpl_8cXObject[43].__delta + sVar10) - local_3a8;
    local_690 = (_vt_12cXPersonImpl_8cXObject[44].__delta + sVar10) - local_3a8;
    local_688 = _vt_12cXPersonImpl_8cXObject[45].__delta + sVar10;
    local_680 = (_vt_12cXPersonImpl_8cXObject[46].__delta + sVar10) - local_3a8;
    local_678 = (_vt_12cXPersonImpl_8cXObject[47].__delta + sVar10) - local_3a8;
    local_670 = (_vt_12cXPersonImpl_8cXObject[48].__delta + sVar10) - local_3a8;
    local_668 = (_vt_12cXPersonImpl_8cXObject[49].__delta + sVar10) - local_3a8;
    local_660 = (_vt_12cXPersonImpl_8cXObject[50].__delta + sVar10) - local_3a8;
    local_658 = (_vt_12cXPersonImpl_8cXObject[51].__delta + sVar10) - local_3a8;
    local_650 = (_vt_12cXPersonImpl_8cXObject[52].__delta + sVar10) - local_3a8;
    local_648 = (_vt_12cXPersonImpl_8cXObject[53].__delta + sVar10) - local_3a8;
    local_640 = (_vt_12cXPersonImpl_8cXObject[54].__delta + sVar10) - local_3a8;
    local_638 = (_vt_12cXPersonImpl_8cXObject[55].__delta + sVar10) - local_3a8;
    local_630 = (_vt_12cXPersonImpl_8cXObject[56].__delta + sVar10) - local_3a8;
    local_628 = (_vt_12cXPersonImpl_8cXObject[57].__delta + sVar10) - local_3a8;
    local_620 = (_vt_12cXPersonImpl_8cXObject[58].__delta + sVar10) - local_3a8;
    local_618 = (_vt_12cXPersonImpl_8cXObject[59].__delta + sVar10) - local_3a8;
    local_610 = (_vt_12cXPersonImpl_8cXObject[60].__delta + sVar10) - local_3a8;
    local_608 = (_vt_12cXPersonImpl_8cXObject[61].__delta + sVar10) - local_3a8;
    local_600 = (_vt_12cXPersonImpl_8cXObject[62].__delta + sVar10) - local_3a8;
    local_5f8 = (_vt_12cXPersonImpl_8cXObject[63].__delta + sVar10) - local_3a8;
    local_5f0 = (_vt_12cXPersonImpl_8cXObject[64].__delta + sVar10) - local_3a8;
    local_5e8 = (_vt_12cXPersonImpl_8cXObject[65].__delta + sVar10) - local_3a8;
    local_5e0 = (_vt_12cXPersonImpl_8cXObject[66].__delta + sVar10) - local_3a8;
    local_5d8 = (_vt_12cXPersonImpl_8cXObject[67].__delta + sVar10) - local_3a8;
    local_5d0 = (_vt_12cXPersonImpl_8cXObject[68].__delta + sVar10) - local_3a8;
    local_5c8 = (_vt_12cXPersonImpl_8cXObject[69].__delta + sVar10) - local_3a8;
    local_5c0 = (_vt_12cXPersonImpl_8cXObject[70].__delta + sVar10) - local_3a8;
    local_5b8 = (_vt_12cXPersonImpl_8cXObject[71].__delta + sVar10) - local_3a8;
    local_5b0 = (_vt_12cXPersonImpl_8cXObject[72].__delta + sVar10) - local_3a8;
    local_5a8 = (_vt_12cXPersonImpl_8cXObject[73].__delta + sVar10) - local_3a8;
    local_5a0 = (_vt_12cXPersonImpl_8cXObject[74].__delta + sVar10) - local_3a8;
    local_598 = (_vt_12cXPersonImpl_8cXObject[75].__delta + sVar10) - local_3a8;
    local_590 = (_vt_12cXPersonImpl_8cXObject[76].__delta + sVar10) - local_3a8;
    local_588 = (_vt_12cXPersonImpl_8cXObject[77].__delta + sVar10) - local_3a8;
    local_580 = (_vt_12cXPersonImpl_8cXObject[78].__delta + sVar10) - local_3a8;
    local_578 = (_vt_12cXPersonImpl_8cXObject[79].__delta + sVar10) - local_3a8;
    local_570 = (_vt_12cXPersonImpl_8cXObject[80].__delta + sVar10) - local_3a8;
    local_568 = (_vt_12cXPersonImpl_8cXObject[81].__delta + sVar10) - local_3a8;
    local_560 = (_vt_12cXPersonImpl_8cXObject[82].__delta + sVar10) - local_3a8;
    local_558 = (_vt_12cXPersonImpl_8cXObject[83].__delta + sVar10) - local_3a8;
    local_550 = (_vt_12cXPersonImpl_8cXObject[84].__delta + sVar10) - local_3a8;
    local_548 = (_vt_12cXPersonImpl_8cXObject[85].__delta + sVar10) - local_3a8;
    local_540 = (_vt_12cXPersonImpl_8cXObject[86].__delta + sVar10) - local_3a8;
    local_538 = (_vt_12cXPersonImpl_8cXObject[87].__delta + sVar10) - local_3a8;
    local_530 = (_vt_12cXPersonImpl_8cXObject[88].__delta + sVar10) - local_3a8;
    local_528 = (_vt_12cXPersonImpl_8cXObject[89].__delta + sVar10) - local_3a8;
    local_520 = (_vt_12cXPersonImpl_8cXObject[90].__delta + sVar10) - local_3a8;
    local_518 = (_vt_12cXPersonImpl_8cXObject[91].__delta + sVar10) - local_3a8;
    local_510 = (_vt_12cXPersonImpl_8cXObject[92].__delta + sVar10) - local_3a8;
    local_508 = (_vt_12cXPersonImpl_8cXObject[93].__delta + sVar10) - local_3a8;
    local_500 = (_vt_12cXPersonImpl_8cXObject[94].__delta + sVar10) - local_3a8;
    local_4f8 = (_vt_12cXPersonImpl_8cXObject[95].__delta + sVar10) - local_3a8;
    local_4f0 = (_vt_12cXPersonImpl_8cXObject[96].__delta + sVar10) - local_3a8;
    local_4e8 = (_vt_12cXPersonImpl_8cXObject[97].__delta + sVar10) - local_3a8;
    local_4e0 = (_vt_12cXPersonImpl_8cXObject[98].__delta + sVar10) - local_3a8;
    local_4d8 = (_vt_12cXPersonImpl_8cXObject[99].__delta + sVar10) - local_3a8;
    local_4d0 = (_vt_12cXPersonImpl_8cXObject[100].__delta + sVar10) - local_3a8;
    local_4c8 = (_vt_12cXPersonImpl_8cXObject[101].__delta + sVar10) - local_3a8;
    local_4c0 = (_vt_12cXPersonImpl_8cXObject[102].__delta + sVar10) - local_3a8;
    local_4b8 = (_vt_12cXPersonImpl_8cXObject[103].__delta + sVar10) - local_3a8;
    local_4b0 = (_vt_12cXPersonImpl_8cXObject[104].__delta + sVar10) - local_3a8;
    local_4a8 = (_vt_12cXPersonImpl_8cXObject[105].__delta + sVar10) - local_3a8;
    local_4a0 = (_vt_12cXPersonImpl_8cXObject[106].__delta + sVar10) - local_3a8;
    local_498 = (_vt_12cXPersonImpl_8cXObject[107].__delta + sVar10) - local_3a8;
    local_490 = (_vt_12cXPersonImpl_8cXObject[108].__delta + sVar10) - local_3a8;
    local_488 = (_vt_12cXPersonImpl_8cXObject[109].__delta + sVar10) - local_3a8;
    local_480 = (_vt_12cXPersonImpl_8cXObject[110].__delta + sVar10) - local_3a8;
    local_478 = (_vt_12cXPersonImpl_8cXObject[111].__delta + sVar10) - local_3a8;
    local_470 = (_vt_12cXPersonImpl_8cXObject[112].__delta + sVar10) - local_3a8;
    local_468 = (_vt_12cXPersonImpl_8cXObject[113].__delta + sVar10) - local_3a8;
    local_460 = (_vt_12cXPersonImpl_8cXObject[114].__delta + sVar10) - local_3a8;
    local_458 = (_vt_12cXPersonImpl_8cXObject[115].__delta + sVar10) - local_3a8;
    local_450 = (_vt_12cXPersonImpl_8cXObject[116].__delta + sVar10) - local_3a8;
    local_3f8 = (_vt_12cXPersonImpl_8cXObject[127].__delta + sVar10) - local_3a8;
    local_3f0 = (_vt_12cXPersonImpl_8cXObject[128].__delta + sVar10) - local_3a8;
    local_3e8 = (_vt_12cXPersonImpl_8cXObject[129].__delta + sVar10) - local_3a8;
    local_3d0 = (_vt_12cXPersonImpl_8cXObject[132].__delta + sVar10) - local_3a8;
    local_448 = (_vt_12cXPersonImpl_8cXObject[117].__delta + sVar10) - local_3a8;
    local_440 = (_vt_12cXPersonImpl_8cXObject[118].__delta + sVar10) - local_3a8;
    local_438 = (_vt_12cXPersonImpl_8cXObject[119].__delta + sVar10) - local_3a8;
    local_430 = (_vt_12cXPersonImpl_8cXObject[120].__delta + sVar10) - local_3a8;
    local_428 = (_vt_12cXPersonImpl_8cXObject[121].__delta + sVar10) - local_3a8;
    local_420 = (_vt_12cXPersonImpl_8cXObject[122].__delta + sVar10) - local_3a8;
    local_418 = (_vt_12cXPersonImpl_8cXObject[123].__delta + sVar10) - local_3a8;
    local_410 = (_vt_12cXPersonImpl_8cXObject[124].__delta + sVar10) - local_3a8;
    local_408 = (_vt_12cXPersonImpl_8cXObject[125].__delta + sVar10) - local_3a8;
    local_400 = (_vt_12cXPersonImpl_8cXObject[126].__delta + sVar10) - local_3a8;
    local_3e0 = _vt_12cXPersonImpl_8cXObject[130].__delta + sVar10;
    local_3d8 = _vt_12cXPersonImpl_8cXObject[131].__delta + sVar10;
    local_3c8 = (_vt_12cXPersonImpl_8cXObject[133].__delta + sVar10) - local_3a8;
    local_3a0 = (_vt_12cXPersonImpl_8cXObject[138].__delta + sVar10) - local_3a8;
    local_3c0 = (_vt_12cXPersonImpl_8cXObject[134].__delta + sVar10) - local_3a8;
    local_3b8 = (_vt_12cXPersonImpl_8cXObject[135].__delta + sVar10) - local_3a8;
    local_3b0 = (_vt_12cXPersonImpl_8cXObject[136].__delta + sVar10) - local_3a8;
    local_3a8 = (_vt_12cXPersonImpl_8cXObject[137].__delta + sVar10) - local_3a8;
    pcVar27 = (cXPerson__123_1079__vtable *)local_390;
    p_Var43 = _vt_12cXPersonImpl_8cXPerson;
    do {
      p_Var45 = p_Var43;
      pcVar44 = pcVar27;
      _Var38 = p_Var45[1];
      _Var39 = p_Var45[2];
      _Var37 = p_Var45[3];
      *(__vtbl_ptr_type *)pcVar44 = *p_Var45;
      *(__vtbl_ptr_type *)&pcVar44->GetQueueCount = _Var38;
      *(__vtbl_ptr_type *)&pcVar44->Initialize = _Var39;
      *(__vtbl_ptr_type *)&pcVar44->PostLoad = _Var37;
      pcVar27 = (cXPerson__123_1079__vtable *)&pcVar44->TryElement;
      p_Var43 = p_Var45 + 4;
    } while (p_Var45 + 4 != _vt_12cXPersonImpl_8cXPerson + 0x48);
    _Var37 = p_Var45[5];
    _Var38 = p_Var45[6];
    *(ulong *)&pcVar44->TryElement =
         CONCAT62(_vt_12cXPersonImpl_8cXPerson[72]._2_6_,_vt_12cXPersonImpl_8cXPerson[72].__delta);
    *(__vtbl_ptr_type *)&pcVar44->StackJustPopped = _Var37;
    *(__vtbl_ptr_type *)&pcVar44->GetMotive = _Var38;
    this->_vb1079->__vtable = (cXPerson__123_1079__vtable *)local_390;
    uVar18 = _vt_12cXPersonImpl_11TreeSimImpl[4]._2_6_;
    uVar17 = _vt_12cXPersonImpl_11TreeSimImpl[3]._2_6_;
    uVar16 = _vt_12cXPersonImpl_11TreeSimImpl[2]._2_6_;
    uVar15 = _vt_12cXPersonImpl_11TreeSimImpl[2].__delta;
    uVar14 = _vt_12cXPersonImpl_11TreeSimImpl[1]._2_6_;
    uVar13 = _vt_12cXPersonImpl_11TreeSimImpl[1].__delta;
    local_150 = sVar12 - ((short)this->_vb1079 + -0x524);
    local_388._0_2_ = uVar25 + local_150;
    local_380 = _vt_12cXPersonImpl_8cXPerson[2].__delta + local_150;
    local_378 = _vt_12cXPersonImpl_8cXPerson[3].__delta + local_150;
    local_370 = _vt_12cXPersonImpl_8cXPerson[4].__delta + local_150;
    local_368 = _vt_12cXPersonImpl_8cXPerson[5].__delta + local_150;
    local_360 = _vt_12cXPersonImpl_8cXPerson[6].__delta + local_150;
    local_358 = _vt_12cXPersonImpl_8cXPerson[7].__delta + local_150;
    local_350 = _vt_12cXPersonImpl_8cXPerson[8].__delta + local_150;
    local_348 = _vt_12cXPersonImpl_8cXPerson[9].__delta + local_150;
    local_340 = _vt_12cXPersonImpl_8cXPerson[10].__delta + local_150;
    local_338 = _vt_12cXPersonImpl_8cXPerson[11].__delta + local_150;
    local_330 = _vt_12cXPersonImpl_8cXPerson[12].__delta + local_150;
    local_328 = _vt_12cXPersonImpl_8cXPerson[13].__delta + local_150;
    local_320 = _vt_12cXPersonImpl_8cXPerson[14].__delta + local_150;
    local_318 = _vt_12cXPersonImpl_8cXPerson[15].__delta + local_150;
    local_310 = _vt_12cXPersonImpl_8cXPerson[16].__delta + local_150;
    local_308 = _vt_12cXPersonImpl_8cXPerson[17].__delta + local_150;
    local_300 = _vt_12cXPersonImpl_8cXPerson[18].__delta + local_150;
    local_2f8 = _vt_12cXPersonImpl_8cXPerson[19].__delta + local_150;
    local_2f0 = _vt_12cXPersonImpl_8cXPerson[20].__delta + local_150;
    local_2e8 = _vt_12cXPersonImpl_8cXPerson[21].__delta + local_150;
    local_2e0 = _vt_12cXPersonImpl_8cXPerson[22].__delta + local_150;
    local_2d8 = _vt_12cXPersonImpl_8cXPerson[23].__delta + local_150;
    local_2d0 = _vt_12cXPersonImpl_8cXPerson[24].__delta + local_150;
    local_2c8 = _vt_12cXPersonImpl_8cXPerson[25].__delta + local_150;
    local_2c0 = _vt_12cXPersonImpl_8cXPerson[26].__delta + local_150;
    local_2b8 = _vt_12cXPersonImpl_8cXPerson[27].__delta + local_150;
    local_2b0 = _vt_12cXPersonImpl_8cXPerson[28].__delta + local_150;
    local_2a8 = _vt_12cXPersonImpl_8cXPerson[29].__delta + local_150;
    local_2a0 = _vt_12cXPersonImpl_8cXPerson[30].__delta + local_150;
    local_298 = _vt_12cXPersonImpl_8cXPerson[31].__delta + local_150;
    local_290 = _vt_12cXPersonImpl_8cXPerson[32].__delta + local_150;
    local_288 = _vt_12cXPersonImpl_8cXPerson[33].__delta + local_150;
    local_280 = _vt_12cXPersonImpl_8cXPerson[34].__delta + local_150;
    local_278 = _vt_12cXPersonImpl_8cXPerson[35].__delta + local_150;
    local_270 = _vt_12cXPersonImpl_8cXPerson[36].__delta + local_150;
    local_268 = _vt_12cXPersonImpl_8cXPerson[37].__delta + local_150;
    local_260 = _vt_12cXPersonImpl_8cXPerson[38].__delta + local_150;
    local_258 = _vt_12cXPersonImpl_8cXPerson[39].__delta + local_150;
    local_250 = _vt_12cXPersonImpl_8cXPerson[40].__delta + local_150;
    local_248 = _vt_12cXPersonImpl_8cXPerson[41].__delta + local_150;
    local_240 = _vt_12cXPersonImpl_8cXPerson[42].__delta + local_150;
    local_238 = _vt_12cXPersonImpl_8cXPerson[43].__delta + local_150;
    local_230 = _vt_12cXPersonImpl_8cXPerson[44].__delta + local_150;
    local_228 = _vt_12cXPersonImpl_8cXPerson[45].__delta + local_150;
    local_220 = _vt_12cXPersonImpl_8cXPerson[46].__delta + local_150;
    local_218 = _vt_12cXPersonImpl_8cXPerson[47].__delta + local_150;
    local_210 = _vt_12cXPersonImpl_8cXPerson[48].__delta + local_150;
    local_208 = _vt_12cXPersonImpl_8cXPerson[49].__delta + local_150;
    local_200 = _vt_12cXPersonImpl_8cXPerson[50].__delta + local_150;
    local_1f8 = _vt_12cXPersonImpl_8cXPerson[51].__delta + local_150;
    local_1f0 = _vt_12cXPersonImpl_8cXPerson[52].__delta + local_150;
    local_1e8 = _vt_12cXPersonImpl_8cXPerson[53].__delta + local_150;
    local_1e0 = _vt_12cXPersonImpl_8cXPerson[54].__delta + local_150;
    local_1d8 = _vt_12cXPersonImpl_8cXPerson[55].__delta + local_150;
    local_1d0 = _vt_12cXPersonImpl_8cXPerson[56].__delta + local_150;
    local_1c8 = _vt_12cXPersonImpl_8cXPerson[57].__delta + local_150;
    local_1c0 = _vt_12cXPersonImpl_8cXPerson[58].__delta + local_150;
    local_1b8 = _vt_12cXPersonImpl_8cXPerson[59].__delta + local_150;
    local_1b0 = _vt_12cXPersonImpl_8cXPerson[60].__delta + local_150;
    local_1a8 = _vt_12cXPersonImpl_8cXPerson[61].__delta + local_150;
    local_1a0 = _vt_12cXPersonImpl_8cXPerson[62].__delta + local_150;
    local_198 = _vt_12cXPersonImpl_8cXPerson[63].__delta + local_150;
    local_190 = _vt_12cXPersonImpl_8cXPerson[64].__delta + local_150;
    local_188 = _vt_12cXPersonImpl_8cXPerson[65].__delta + local_150;
    local_180 = _vt_12cXPersonImpl_8cXPerson[66].__delta + local_150;
    local_148 = _vt_12cXPersonImpl_8cXPerson[73].__delta + local_150;
    local_178 = _vt_12cXPersonImpl_8cXPerson[67].__delta + local_150;
    local_170 = _vt_12cXPersonImpl_8cXPerson[68].__delta + local_150;
    local_168 = _vt_12cXPersonImpl_8cXPerson[69].__delta + local_150;
    local_160 = _vt_12cXPersonImpl_8cXPerson[70].__delta + local_150;
    local_158 = _vt_12cXPersonImpl_8cXPerson[71].__delta + local_150;
    local_150 = _vt_12cXPersonImpl_8cXPerson[72].__delta + local_150;
    local_130 = _vt_12cXPersonImpl_11TreeSimImpl[0];
    local_108 = _vt_12cXPersonImpl_11TreeSimImpl[5];
    this->_vb901->_vb1233->__vtable = (TreeSimImpl__21_3338__vtable *)&local_130;
    uVar24 = _vt_12cXPersonImpl_12cXObjectImpl[6]._2_6_;
    uVar23 = _vt_12cXPersonImpl_12cXObjectImpl[5]._2_6_;
    uVar22 = _vt_12cXPersonImpl_12cXObjectImpl[4]._2_6_;
    uVar21 = _vt_12cXPersonImpl_12cXObjectImpl[3]._2_6_;
    uVar20 = _vt_12cXPersonImpl_12cXObjectImpl[2]._2_6_;
    uVar19 = _vt_12cXPersonImpl_12cXObjectImpl[1]._2_6_;
    pcVar3 = this->_vb901;
    sVar11 = sVar12 - ((short)pcVar3 + -0x560);
    sVar10 = sVar12 - ((short)pcVar3->_vb1233 + -0x52c);
    local_128 = CONCAT62(uVar14,uVar13 + sVar10);
    local_120 = CONCAT62(uVar16,(uVar15 + sVar10) - sVar11);
    local_118 = CONCAT62(uVar17,_vt_12cXPersonImpl_11TreeSimImpl[3].__delta + sVar10);
    local_110 = CONCAT62(uVar18,(_vt_12cXPersonImpl_11TreeSimImpl[4].__delta + sVar10) - sVar11);
    local_100 = _vt_12cXPersonImpl_12cXObjectImpl[0];
    local_c8 = _vt_12cXPersonImpl_12cXObjectImpl[7];
    pcVar3->__vtable = local_bc;
    sVar12 = sVar12 - ((short)this->_vb901 + -0x560);
    local_f8 = CONCAT62(uVar19,_vt_12cXPersonImpl_12cXObjectImpl[1].__delta + sVar12);
    local_f0 = CONCAT62(uVar20,_vt_12cXPersonImpl_12cXObjectImpl[2].__delta + sVar12);
    local_e8 = CONCAT62(uVar21,_vt_12cXPersonImpl_12cXObjectImpl[3].__delta + sVar12);
    local_e0 = CONCAT62(uVar22,_vt_12cXPersonImpl_12cXObjectImpl[4].__delta + sVar12);
    local_d8 = CONCAT62(uVar23,_vt_12cXPersonImpl_12cXObjectImpl[5].__delta + sVar12);
    local_d0 = CONCAT62(uVar24,_vt_12cXPersonImpl_12cXObjectImpl[6].__delta + sVar12);
    pSVar1 = this->fAnimator;
  }
  else {
    pSVar1 = this->fAnimator;
  }
  if (pSVar1 != (SAnimator *)0x0) {
    (*(code *)pSVar1->__vtable->Render)
              ((int)&pSVar1->__vtable + (int)*(short *)&pSVar1->__vtable->Initialize,3);
  }
                    /* end of inlined section */
  local_a8 = &(this->fLastAction).fName;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  local_b8 = (undefined *)((uint)local_c0 & 1);
  local_b0 = &(this->fCurrentAction).fName;
  (*(code *)_5Globs_pEORGlobals->__vtable->ConvertSpriteIdToResId)
            ((int)_5Globs_pEORGlobals->_pSelectedSims +
             *(short *)&_5Globs_pEORGlobals->__vtable->UpdateSpriteRenderer + -0x24,
             &this->_vb1079->_vb966->_vb899->m_pEoRInstance);
  pEVar26 = _5Globs_pEORGlobals;
  local_ac = &this->fInteractions;
  local_b4 = (undefined *)((uint)local_c0 & 2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  this->_vb1079->_vb966->_vb899->m_pEoRInstance = (IBaseSimInstance *)0x0;
  pEVar4 = pEVar26->__vtable;
  (*(code *)pEVar4->CreateThumbnail)
            ((int)pEVar26->_pSelectedSims + *(short *)&pEVar4->UnloadSelectorData + -0x24,
             this->_vb1079->_vb966);
  pAddress = this->fMotiveEffects;
  pMVar28 = (pAddress->field0_0x0).fCurveArray;
  if (pAddress != (MotiveEffects *)0x0) {
    if ((pAddress != (MotiveEffects *)0xfffffff8) && (pMVar28 != (MotiveCurve *)&pAddress->fPerson))
    {
      for (this_00 = (PiecewiseFn *)((pAddress->field0_0x0).fCurveArray + 8);
          ___11PiecewiseFn(this_00,0), pMVar28 != (MotiveCurve *)this_00;
          this_00 = (PiecewiseFn *)&this_00[-2].fMaxPoints) {
      }
    }
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(pAddress);
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pOVar36 = (this->fObjectRecords).start;
  pOVar5 = (this->fObjectRecords).finish;
  if (pOVar36 == pOVar5) {
    pOVar36 = (this->fObjectRecords).start;
  }
  else {
    do {
      pOVar36 = pOVar36 + 1;
    } while (pOVar36 != pOVar5);
    pOVar36 = (this->fObjectRecords).start;
  }
  if (pOVar36 == (ObjectRecord *)0x0) {
    pXVar34 = (this->fRouteStack).start;
  }
  else if (((int)(this->fObjectRecords).end_of_storage - (int)pOVar36) * -0x55555555 >> 2 == 0) {
    pXVar34 = (this->fRouteStack).start;
  }
  else {
    free(pOVar36);
    pXVar34 = (this->fRouteStack).start;
  }
  pXVar6 = (this->fRouteStack).finish;
  if (pXVar34 != pXVar6) {
    pRVar29 = (pXVar34->field0_0x0).start;
    while( true ) {
      pXVar40 = pXVar34 + 1;
      pRVar7 = (pXVar34->field0_0x0).finish;
      (pXVar34->fSlot).field0_0x0.__vtable = (Slot__vtable *)_vt_4Slot;
      for (; pRVar29 != pRVar7; pRVar29 = pRVar29 + 1) {
      }
      pRVar29 = (pXVar34->field0_0x0).start;
      if ((pRVar29 != (RouteGoal *)0x0) &&
         ((int)(pXVar34->field0_0x0).end_of_storage - (int)pRVar29 >> 4 != 0)) {
        free(pRVar29);
      }
      if (pXVar40 == pXVar6) break;
      pRVar29 = (pXVar40->field0_0x0).start;
      pXVar34 = pXVar40;
    }
  }
  pXVar34 = (this->fRouteStack).start;
  if (pXVar34 == (XRoute *)0x0) {
    pFVar30 = (this->fDestList).field0_0x0.start;
  }
  else if (((int)(this->fRouteStack).end_of_storage - (int)pXVar34) * -0x3e7063e7 >> 2 == 0) {
    pFVar30 = (this->fDestList).field0_0x0.start;
  }
  else {
    free(pXVar34);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    pFVar30 = (this->fDestList).field0_0x0.start;
  }
  pFVar8 = (this->fDestList).field0_0x0.finish;
  if (pFVar30 == pFVar8) {
    pFVar30 = (this->fDestList).field0_0x0.start;
  }
  else {
    do {
      pFVar30 = pFVar30 + 1;
    } while (pFVar30 != pFVar8);
    pFVar30 = (this->fDestList).field0_0x0.start;
  }
  if (pFVar30 == (FTilePt *)0x0) {
    pMVar31 = (this->fMotiveIncs).start;
  }
  else if ((int)(this->fDestList).field0_0x0.end_of_storage - (int)pFVar30 >> 3 == 0) {
    pMVar31 = (this->fMotiveIncs).start;
  }
  else {
    free(pFVar30);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    pMVar31 = (this->fMotiveIncs).start;
  }
  pMVar9 = (this->fMotiveIncs).finish;
  if (pMVar31 == pMVar9) {
    pMVar31 = (this->fMotiveIncs).start;
  }
  else {
    do {
      pMVar31 = pMVar31 + 1;
    } while (pMVar31 != pMVar9);
    pMVar31 = (this->fMotiveIncs).start;
  }
  if ((pMVar31 != (MotiveInc *)0x0) &&
     (((int)(this->fMotiveIncs).end_of_storage - (int)pMVar31) * -0x55555555 >> 2 != 0)) {
    free(pMVar31);
                    /* end of inlined section */
  }
  ___8BString2(local_a8,2);
  ___8BString2(local_b0,2);
  if (this != (cXPersonImpl__123_903 *)0xfffffec4) {
    if (&this->fTreeQueue == (Queue_Interaction_8_ *)&(this->fTreeQueue).fFirst) {
      pSVar32 = (this->fInteractions).start;
      goto LAB_00218b34;
    }
    for (pIVar41 = (this->fTreeQueue).fElems + 7; ___8BString2(&pIVar41->fName,2),
        &this->fTreeQueue != (Queue_Interaction_8_ *)pIVar41; pIVar41 = pIVar41 + -1) {
    }
  }
  pSVar32 = (this->fInteractions).start;
LAB_00218b34:
  for (; pSVar32 != local_ac->finish; pSVar32 = pSVar32 + 1) {
  }
  pSVar32 = local_ac->start;
  if ((pSVar32 != (ScoredInteraction *)0x0) &&
     ((int)local_ac->end_of_storage - (int)pSVar32 >> 4 != 0)) {
    free(pSVar32);
                    /* end of inlined section */
  }
  if (local_b4 != (undefined *)0x0) {
    ___12cXObjectImpl((cXObjectImpl__127_901 *)this->_vb901,0);
    ___11TreeSimImpl(this->_vb901->_vb1233,0);
    ___8cXPerson(this->_vb1079,0);
    ___8cXObject(this->_vb1079->_vb966,0);
    ___7TreeSim(this->_vb1079->_vb966->_vb899,0);
  }
  if (local_b8 != (undefined *)0x0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void cXPersonImpl::Initialize() {
	ObjectSlot handSlot;
	SpriteSlot headSlot;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	vector<ObjectSlot,__malloc_alloc_template<0> > *this;
	vector<SpriteSlot,__malloc_alloc_template<0> > *this;
	vector<SpriteSlot,__malloc_alloc_template<0> > *this;
	vector<SpriteSlot,__malloc_alloc_template<0> > *this;
	vector<ScoredInteraction,__malloc_alloc_template<0> > *this;
	vector<ScoredInteraction,__malloc_alloc_template<0> > *this;
	vector<ScoredInteraction,__malloc_alloc_template<0> > *this;
	vector<ScoredInteraction,__malloc_alloc_template<0> > *this;
	vector<ScoredInteraction,__malloc_alloc_template<0> > *this;
	vector<ScoredInteraction,__malloc_alloc_template<0> > *this;
	void *result;
	vector<ScoredInteraction,__malloc_alloc_template<0> > *this;
	vector<ScoredInteraction,__malloc_alloc_template<0> > *this;
	ScoredInteraction *last;
	ScoredInteraction *first;
	ScoredInteraction *pointer;
	vector<ScoredInteraction,__malloc_alloc_template<0> > *this;
	unsigned int old_size;
	void *result;
	MotiveInc *last;
	MotiveInc *first;
	MotiveInc *pointer;
	int c;
	MotiveCurveSet &curves;
	MotiveCurveSet *this;
	MotiveCurveSet *this;
	int n;
	MotiveCurveSet *this;
	int n;
	Int motive;
	MotiveCurveSet &curves;
	MotiveCurveSet *this;
	MotiveCurveSet *this;
	int n;
	MotiveCurveSet *this;
	int n;
	Int motive;
	
  bool bVar1;
  cXObjectImpl__123_901 *pcVar2;
  ObjectSlot *position;
  cXPerson__123_1079__vtable *pcVar3;
  EGlobal__vtable *pEVar4;
  SpriteSlot *position_00;
  ScoredInteraction *pSVar5;
  ScoredInteraction *pSVar6;
  MotiveInc *pMVar7;
  MotiveInc *pMVar8;
  int iVar9;
  cXObject__21_1030 *pcVar10;
  cXObject__21_1030__vtable *pcVar11;
  EGlobal *pEVar12;
  SAnimator *pSVar13;
  ScoredInteraction *result;
  ScoredInteraction *pSVar14;
  MotiveInc *result_00;
  MotiveInc *pMVar15;
  MotiveEffects *pMVar16;
  Behavior *pBVar17;
  iResFile__6_5027 *piVar18;
  ConstantsClient *pCVar19;
  long lVar20;
  ushort uVar21;
  ScoredInteraction *pSVar22;
  MotiveInc *pMVar23;
  vector_ScoredInteraction___malloc_alloc_template_0___ *pvVar24;
  int iVar25;
  int iVar26;
  vector_MotiveInc___malloc_alloc_template_0___ *pvVar27;
  int *piVar28;
  ObjectSlot handSlot;
  SpriteSlot headSlot;
  
  Initialize__12cXObjectImpl((cXObjectImpl__127_901 *)this->_vb901);
  __10ObjectSlot(&handSlot);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pcVar2 = this->_vb901;
                    /* end of inlined section */
  handSlot.height = kHeightHand;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  position = (pcVar2->fHierSlots).finish;
  if (position == (pcVar2->fHierSlots).end_of_storage) {
    insert_aux__t6vector2Z10ObjectSlotZt23__malloc_alloc_template1i0P10ObjectSlotRC10ObjectSlot
              (&pcVar2->fHierSlots,position,&handSlot);
  }
  else {
    (position->field0_0x0).__vtable = (Slot__vtable *)_vt_4Slot;
    (position->field0_0x0).xoffset = handSlot.field0_0x0.xoffset;
    (position->field0_0x0).yoffset = handSlot.field0_0x0.yoffset;
    (position->field0_0x0).altOffset = handSlot.field0_0x0.altOffset;
    (position->field0_0x0).__vtable = (Slot__vtable *)_vt_10ObjectSlot;
    (position->field0_0x0).nameIndex = handSlot.field0_0x0.nameIndex;
    position->objectID = handSlot.objectID;
    position->height = kHeightHand;
    position->maximumSize = handSlot.maximumSize;
    position->flags = handSlot.flags;
    (pcVar2->fHierSlots).finish = (pcVar2->fHierSlots).finish + 1;
  }
  pcVar2 = this->_vb901;
                    /* end of inlined section */
  pcVar2->fData[0x43] =
       (short)(((int)(pcVar2->fHierSlots).finish - (int)(pcVar2->fHierSlots).start) * 0x38e38e39 >>
              2) - 1;
  pcVar3 = this->_vb1079->__vtable;
  lVar20 = (**(code **)&pcVar3->field_0x184)
                     ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar3->field_0x180);
  uVar21 = 10;
  if (lVar20 != 0) {
    uVar21 = 0x14;
  }
  this->fPersonData[0x3a] = uVar21;
  pcVar3 = this->_vb1079->__vtable;
  lVar20 = (**(code **)&pcVar3->field_0x174)
                     ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar3->field_0x170);
  pEVar12 = _5Globs_pEORGlobals;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  this->fPersonData[0x41] = (ushort)(lVar20 == 0);
  pEVar4 = pEVar12->__vtable;
  (*(code *)pEVar4->AdvanceSelectedPerson)
            ((int)pEVar12->_pSelectedSims + *(short *)&pEVar4->SetSelectedPerson + -0x24,
             this->_vb1079);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  pSVar13 = (SAnimator *)
            (*(code *)_5Globs_pEORGlobals->__vtable->SelectWin)
                      ((int)_5Globs_pEORGlobals->_pSelectedSims +
                       *(short *)&_5Globs_pEORGlobals->__vtable->GetWin + -0x24);
  this->fAnimator = pSVar13;
  (*(code *)pSVar13->__vtable->Reset)
            ((int)&pSVar13->__vtable + (int)*(short *)&pSVar13->__vtable->Update,this->_vb1079);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  __10SpriteSlotP8cXObject(&headSlot,(cXObject__117_983 *)this->_vb1079->_vb966);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pcVar2 = this->_vb901;
                    /* end of inlined section */
  headSlot.field0_0x0.altOffset = 2.0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  position_00 = (pcVar2->fSpriteSlots).finish;
  if (position_00 == (pcVar2->fSpriteSlots).end_of_storage) {
    insert_aux__t6vector2Z10SpriteSlotZt23__malloc_alloc_template1i0P10SpriteSlotRC10SpriteSlot
              (&pcVar2->fSpriteSlots,position_00,&headSlot);
  }
  else {
    (position_00->field0_0x0).__vtable = (Slot__vtable *)_vt_4Slot;
    (position_00->field0_0x0).xoffset = headSlot.field0_0x0.xoffset;
    (position_00->field0_0x0).yoffset = headSlot.field0_0x0.yoffset;
    (position_00->field0_0x0).altOffset = 2.0;
    (position_00->field0_0x0).__vtable = (Slot__vtable *)_vt_10SpriteSlot;
    (position_00->field0_0x0).nameIndex = headSlot.field0_0x0.nameIndex;
    position_00->ticksLeft = headSlot.ticksLeft;
    position_00->id = headSlot.id;
    position_00->numFrames = headSlot.numFrames;
    position_00->frame = headSlot.frame;
    position_00->frameDelta = headSlot.frameDelta;
    position_00->frameTicks = headSlot.frameTicks;
    position_00->balloonSpriteID = headSlot.balloonSpriteID;
    position_00->notSignSpriteID = headSlot.notSignSpriteID;
    position_00->priority = headSlot.priority;
    *(undefined4 *)&position_00->showWhenInactive = headSlot._60_4_;
    position_00->m_pObj = headSlot.m_pObj;
    position_00->m_pSpriteRender = headSlot.m_pSpriteRender;
    position_00->field3_0x1c = headSlot.field3_0x1c;
    (pcVar2->fSpriteSlots).finish = (pcVar2->fSpriteSlots).finish + 1;
  }
  pvVar24 = &this->fInteractions;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pvVar27 = &this->fMotiveIncs;
                    /* end of inlined section */
  (*(code *)_5Globs_pEORGlobals->__vtable->LoadSelectorData)
            ((int)_5Globs_pEORGlobals->_pSelectedSims +
             *(short *)&_5Globs_pEORGlobals->__vtable->ReverseSelectedPerson + -0x24,
             this->_vb1079->_vb966);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pSVar5 = (this->fInteractions).start;
  if ((uint)((int)(this->fInteractions).end_of_storage - (int)pSVar5 >> 4) < 0x200) {
    pSVar6 = (this->fInteractions).finish;
    result = (ScoredInteraction *)malloc(0x2000);
    if (result == (ScoredInteraction *)0x0) {
      result = (ScoredInteraction *)oom_malloc__t23__malloc_alloc_template1i0Ui(0x2000);
      pSVar22 = (this->fInteractions).start;
    }
    else {
      pSVar22 = (this->fInteractions).start;
    }
    uninitialized_copy__H2ZP17ScoredInteractionZP17ScoredInteraction_X01X01X11_X11
              (pSVar22,(this->fInteractions).finish,result);
    pSVar22 = (this->fInteractions).finish;
    pSVar14 = (this->fInteractions).start;
    if (pSVar14 == pSVar22) {
      pSVar22 = pvVar24->start;
    }
    else {
      do {
        pSVar14 = pSVar14 + 1;
      } while (pSVar14 != pSVar22);
      pSVar22 = pvVar24->start;
    }
    if ((pSVar22 != (ScoredInteraction *)0x0) &&
       ((int)(this->fInteractions).end_of_storage - (int)pSVar22 >> 4 != 0)) {
      free(pSVar22);
    }
    (this->fInteractions).end_of_storage = result + 0x200;
    (this->fInteractions).finish = result + ((int)pSVar6 - (int)pSVar5 >> 4);
    pvVar24->start = result;
  }
  pMVar7 = (this->fMotiveIncs).start;
  if ((uint)(((int)(this->fMotiveIncs).end_of_storage - (int)pMVar7) * -0x55555555 >> 2) < 2) {
    pMVar8 = (this->fMotiveIncs).finish;
    result_00 = (MotiveInc *)malloc(0x18);
    if (result_00 == (MotiveInc *)0x0) {
      result_00 = (MotiveInc *)oom_malloc__t23__malloc_alloc_template1i0Ui(0x18);
      pMVar23 = (this->fMotiveIncs).start;
    }
    else {
      pMVar23 = (this->fMotiveIncs).start;
    }
    uninitialized_copy__H2ZP9MotiveIncZP9MotiveInc_X01X01X11_X11
              (pMVar23,(this->fMotiveIncs).finish,result_00);
    pMVar23 = (this->fMotiveIncs).finish;
    pMVar15 = (this->fMotiveIncs).start;
    if (pMVar15 == pMVar23) {
      pMVar23 = pvVar27->start;
    }
    else {
      do {
        pMVar15 = pMVar15 + 1;
      } while (pMVar15 != pMVar23);
      pMVar23 = pvVar27->start;
    }
    if ((pMVar23 != (MotiveInc *)0x0) &&
       (((int)(this->fMotiveIncs).end_of_storage - (int)pMVar23) * -0x55555555 >> 2 != 0)) {
      free(pMVar23);
    }
    (this->fMotiveIncs).end_of_storage = result_00 + 2;
    pvVar27->start = result_00;
    (this->fMotiveIncs).finish = result_00 + (((int)pMVar8 - (int)pMVar7) * -0x55555555 >> 2);
  }
                    /* end of inlined section */
  pMVar16 = (MotiveEffects *)__builtin_new(0xc4);
  pMVar16 = __13MotiveEffectsP8cXPerson(pMVar16,(cXPerson__139_927 *)this->_vb1079);
  bVar1 = _sHappyCurvesSetup == 0;
  this->fMotiveEffects = pMVar16;
  if (bVar1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
                    /* end of inlined section */
    iVar26 = 0;
    if (0 < sAdultHappyWeightCurves.field0_0x0.fNumCurves) {
      iVar25 = 0;
      piVar28 = sHappyMotives;
      do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
                    /* end of inlined section */
        iVar26 = iVar26 + 1;
        SetMaxPoints__11PiecewiseFni
                  ((PiecewiseFn *)
                   ((int)&((sAdultHappyWeightCurves.field0_0x0.fCurves)->field0_0x0).fPoints +
                   iVar25),8);
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
        iVar9 = *piVar28;
                    /* end of inlined section */
        piVar28 = piVar28 + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
        *(int *)((int)&(sAdultHappyWeightCurves.field0_0x0.fCurves)->fMotive + iVar25) = iVar9;
                    /* end of inlined section */
        iVar25 = iVar25 + 0x14;
      } while (iVar26 < sAdultHappyWeightCurves.field0_0x0.fNumCurves);
    }
    iVar26 = 0;
    pcVar10 = this->_vb901->_vb966;
    pcVar11 = pcVar10->__vtable;
    pBVar17 = (Behavior *)
              (*(code *)pcVar11[1].SetData)
                        ((int)&pcVar10->_vb899 + (int)*(short *)&pcVar11[1].IsOccupied);
    piVar18 = GetGlobFile__8Behavior(pBVar17);
    LoadFromFile__14MotiveCurveSetP8iResFiles(&sAdultHappyWeightCurves.field0_0x0,piVar18,0x1f6);
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
                    /* end of inlined section */
    if (0 < sChildHappyWeightCurves.field0_0x0.fNumCurves) {
      iVar25 = 0;
      piVar28 = sHappyMotives;
      do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
                    /* end of inlined section */
        iVar26 = iVar26 + 1;
        SetMaxPoints__11PiecewiseFni
                  ((PiecewiseFn *)
                   ((int)&((sChildHappyWeightCurves.field0_0x0.fCurves)->field0_0x0).fPoints +
                   iVar25),8);
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
        iVar9 = *piVar28;
                    /* end of inlined section */
        piVar28 = piVar28 + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
        *(int *)((int)&(sChildHappyWeightCurves.field0_0x0.fCurves)->fMotive + iVar25) = iVar9;
                    /* end of inlined section */
        iVar25 = iVar25 + 0x14;
      } while (iVar26 < sChildHappyWeightCurves.field0_0x0.fNumCurves);
    }
    pcVar10 = this->_vb901->_vb966;
    pcVar11 = pcVar10->__vtable;
    pBVar17 = (Behavior *)
              (*(code *)pcVar11[1].SetData)
                        ((int)&pcVar10->_vb899 + (int)*(short *)&pcVar11[1].IsOccupied);
    piVar18 = GetGlobFile__8Behavior(pBVar17);
    LoadFromFile__14MotiveCurveSetP8iResFiles(&sChildHappyWeightCurves.field0_0x0,piVar18,0x1f8);
    _sHappyCurvesSetup = 1;
  }
  if (_sAutonomyConstantsLoaded == 0) {
    pCVar19 = GetAutonomyConstantsClient__Fv();
    (*(code *)pCVar19->__vtable[1].UpdateConstants)
              ((int)&pCVar19->__vtable + (int)*(short *)&pCVar19->__vtable[1].GetID);
  }
  ___10SpriteSlot(&headSlot,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
  return;
}

void cXPersonImpl::Reset(Boolean simonce) {
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  Neighborhood__vtable *pNVar6;
  SAnimator__vtable *pSVar7;
  Neighborhood *pNVar8;
  
  uVar1 = this->fPersonData[0x3a];
  uVar2 = this->fPersonData[0x22];
  uVar3 = this->fPersonData[0x20];
  uVar4 = this->fPersonData[0x23];
  uVar5 = this->fPersonData[0x41];
  memset(this->fPersonData,0,0xa0);
  pNVar8 = _5Globs_pNeighborhood;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  this->fPersonData[0x22] = uVar2;
  this->fPersonData[0x20] = uVar3;
  this->fPersonData[0x23] = uVar4;
  this->fPersonData[0x3a] = uVar1;
  this->fPersonData[0x41] = uVar5;
  pNVar6 = pNVar8->__vtable;
  (*(code *)pNVar6[1].GetDirectory)
            ((int)&pNVar8->__vtable + (int)*(short *)&pNVar6[1].GetFilename,this->_vb1079);
  pSVar7 = this->fAnimator->__vtable;
  (*(code *)pSVar7->FollowOneStep)
            ((int)&this->fAnimator->__vtable + (int)*(short *)&pSVar7->BeginFollow);
  Reset__12cXObjectImplUs((cXObjectImpl__127_901 *)this->_vb901,simonce);
  pSVar7 = this->fAnimator->__vtable;
  (*(code *)pSVar7->SetAnimDisplacements)
            ((int)&this->fAnimator->__vtable + (int)*(short *)&pSVar7->TryChangeSuit);
  LoadMotiveEffects__12cXPersonImpl(this);
  return;
}

void cXPersonImpl::PostLoad(SInt32 version) {
	int keyCnt;
	cXObject *obj;
	
  bool bVar1;
  short sVar2;
  cXPerson__123_1079__vtable *pcVar3;
  SAnimator__vtable *pSVar4;
  ObjectModule *pOVar5;
  ObjectModule__vtable *pOVar6;
  cXObject__21_1030 *pcVar7;
  cXObject__21_1030__vtable *pcVar8;
  RelMatrix *pRVar9;
  RelMatrix__vtable *pRVar10;
  undefined2 uVar11;
  ObjSelector *pOVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  int iVar16;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pNeighborhood->__vtable[1].GetDirectory)
            ((int)&_5Globs_pNeighborhood->__vtable +
             (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].GetFilename,this->_vb1079);
  PostLoad__12cXObjectImpli((cXObjectImpl__127_901 *)this->_vb901,version);
  pcVar3 = this->_vb1079->__vtable;
  (**(code **)&pcVar3->field_0x13c)
            ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar3->field_0x138);
  pSVar4 = this->fAnimator->__vtable;
  (*(code *)pSVar4->StartReachAnimation)
            ((int)&this->fAnimator->__vtable + (int)*(short *)&pSVar4->IsInterruptable);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  pOVar12 = (ObjSelector *)
            (*(code *)_5Globs_pObjectFolder->__vtable[1].SetSemiGlobalFile)
                      ((int)&_5Globs_pObjectFolder->__vtable +
                       (int)*(short *)&_5Globs_pObjectFolder->__vtable[1].GetTypeAttrBlock);
  if (this->_vb901->fObjSel == pOVar12) {
    pOVar5 = this->_vb901->fModule;
    pOVar6 = pOVar5->__vtable;
    (*(code *)pOVar6[1].Init)
              ((int)&pOVar5->__vtable + (int)*(short *)&pOVar6[1].ObjectModule,this->_vb1079->_vb966
              );
    pcVar3 = this->_vb1079->__vtable;
    (*(code *)pcVar3->GetLastAction)
              ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar3->GetCurrentAction,0);
    pcVar7 = this->_vb901->_vb966;
    pOVar5 = this->_vb901->fModule;
    pcVar8 = pcVar7->__vtable;
    pOVar6 = pOVar5->__vtable;
    sVar2 = *(short *)&pOVar6->IsFamilyMemberAwakeAndVisible;
    uVar14 = (*(code *)pcVar8[1].UserCanPlace)
                       ((int)&pcVar7->_vb899 + (int)*(short *)&pcVar8[1].IsPartOfMe);
    (*(code *)pOVar6->DoCommand)((int)&pOVar5->__vtable + (int)sVar2,uVar14,1);
  }
  iVar16 = 0;
  if (version < 0x32) {
LAB_00219528:
    do {
      pRVar9 = this->_vb901->fInstMatrix;
      pRVar10 = pRVar9->__vtable;
      iVar13 = (*(code *)pRVar10[1].DoStream)
                         ((int)&pRVar9->__vtable + (int)*(short *)&pRVar10[1].SetValue);
      if (iVar16 < iVar13) {
        pRVar9 = this->_vb901->fInstMatrix;
        pcVar7 = this->_vb901->_vb966;
        pRVar10 = pRVar9->__vtable;
        pcVar8 = pcVar7->__vtable;
        sVar2 = *(short *)&pcVar8[1].CanContributeLight;
        uVar11 = (*(code *)pRVar10[1].GetNthKey)
                           ((int)&pRVar9->__vtable + (int)*(short *)&pRVar10[1].CountKeys,iVar16);
        lVar15 = (*(code *)pcVar8[1].GetLightingContribution)
                           ((int)&pcVar7->_vb899 + (int)sVar2,uVar11);
        if (lVar15 == 0) {
          iVar16 = iVar16 + 1;
          goto LAB_00219528;
        }
        iVar13 = *(int *)((int)lVar15 + 4);
        lVar15 = (**(code **)(iVar13 + 0x2ac))((int)lVar15 + (int)*(short *)(iVar13 + 0x2a8));
        if (lVar15 != 2) {
          iVar16 = iVar16 + 1;
          goto LAB_00219528;
        }
        pRVar9 = this->_vb901->fInstMatrix;
        pRVar10 = pRVar9->__vtable;
        sVar2 = *(short *)&pRVar10->CountKeys;
        uVar14 = (*(code *)pRVar10[1].GetNthKey)
                           ((int)&pRVar9->__vtable + (int)*(short *)&pRVar10[1].CountKeys,iVar16);
        (*(code *)pRVar10->GetNthKey)((int)&pRVar9->__vtable + (int)sVar2,uVar14);
        iVar16 = -1;
      }
      bVar1 = iVar16 == -1;
      iVar16 = 0;
    } while (bVar1);
  }
  LoadMotiveEffects__12cXPersonImpl(this);
  return;
}

void cXPersonImpl::LoadMotiveEffects() {
  cXObject__21_1030 *pcVar1;
  cXObject__21_1030__vtable *pcVar2;
  cXPerson__123_1079__vtable *pcVar3;
  int iVar4;
  Behavior *pBVar5;
  iResFile__6_5027 *piVar6;
  long lVar7;
  
  pcVar1 = this->_vb901->_vb966;
  pcVar2 = pcVar1->__vtable;
  iVar4 = (*(code *)pcVar2[1].HandleError)((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2[1].Error);
  if (*(short *)(iVar4 + 0x66) == 0) {
    pcVar3 = this->_vb1079->__vtable;
    lVar7 = (**(code **)&pcVar3->field_0x16c)
                      ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar3->field_0x168);
    if (lVar7 == 0) {
      pcVar1 = this->_vb901->_vb966;
      pcVar2 = pcVar1->__vtable;
      pBVar5 = (Behavior *)
               (*(code *)pcVar2[1].SetData)
                         ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2[1].IsOccupied);
      piVar6 = GetGlobFile__8Behavior(pBVar5);
      LoadFromFile__14MotiveCurveSetP8iResFiles((MotiveCurveSet *)this->fMotiveEffects,piVar6,0x1f5)
      ;
    }
    else {
      pcVar1 = this->_vb901->_vb966;
      pcVar2 = pcVar1->__vtable;
      pBVar5 = (Behavior *)
               (*(code *)pcVar2[1].SetData)
                         ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2[1].IsOccupied);
      piVar6 = GetGlobFile__8Behavior(pBVar5);
      LoadFromFile__14MotiveCurveSetP8iResFiles((MotiveCurveSet *)this->fMotiveEffects,piVar6,0x1f7)
      ;
    }
  }
  else {
    pcVar1 = this->_vb901->_vb966;
    pcVar2 = pcVar1->__vtable;
    pBVar5 = (Behavior *)
             (*(code *)pcVar2[1].SetData)
                       ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2[1].IsOccupied);
    piVar6 = GetPrivFile__8Behavior(pBVar5);
    pcVar1 = this->_vb901->_vb966;
    pcVar2 = pcVar1->__vtable;
    iVar4 = (*(code *)pcVar2[1].HandleError)((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2[1].Error)
    ;
    LoadFromFile__14MotiveCurveSetP8iResFiles
              ((MotiveCurveSet *)this->fMotiveEffects,piVar6,*(ushort *)(iVar4 + 0x66));
  }
  return;
}

void cXPersonImpl::PreSave() {
  PreSave__12cXObjectImpl((cXObjectImpl__127_901 *)this->_vb901);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pNeighborhood->__vtable[1].GetNumCharacters)
            ((int)&_5Globs_pNeighborhood->__vtable +
             (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].GetHousePath,this->_vb1079);
  return;
}

TreeReturnCode cXPersonImpl::TrySetMotiveDelta(StackElem *elem, XPrimParam *param) {
	StdPrm incPerHour;
	StdPrm maxValue;
	MotiveInc motiveInc;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	MotiveInc *first;
	MotiveInc *last;
	MotiveInc *pointer;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	
  undefined *puVar1;
  byte bVar2;
  MotiveInc *pMVar3;
  cXObject__21_1030 *pcVar4;
  cXObject__21_1030__vtable *pcVar5;
  uint uVar6;
  ulong *puVar7;
  TreeReturnCode TVar8;
  MotiveInc *pMVar9;
  cXObjectImpl__123_901 *pcVar10;
  cXObjectImpl__127_901 *this_00;
  ushort incPerHour;
  ushort maxValue;
  MotiveInc motiveInc;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
  if (((param->field0_0x0).distanceTo.fromOwner & 1) != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    pMVar3 = (this->fMotiveIncs).start;
    for (pMVar9 = pMVar3; pMVar9 != (this->fMotiveIncs).finish; pMVar9 = pMVar9 + 1) {
    }
                    /* end of inlined section */
                    /* end of inlined section */
    (this->fMotiveIncs).finish = pMVar3;
    return kTrueComplete;
  }
  bVar2 = (param->field0_0x0).distanceTo.flags;
  if (bVar2 < 5) {
    pcVar10 = this->_vb901;
  }
  else {
    if (bVar2 < 10) {
      this_00 = (cXObjectImpl__127_901 *)this->_vb901;
LAB_002197dc:
      TVar8 = InterpValue__12cXObjectImplssPPsPPfPs
                        (this_00,(ushort)(param->field0_0x0).pushAction.interactionIndex,
                         (param->field0_0x0).bparam[2],(ushort **)0x0,(float **)0x0,&incPerHour);
      if (TVar8 == kError) {
        return kError;
      }
      TVar8 = InterpValue__12cXObjectImplssPPsPPfPs
                        ((cXObjectImpl__127_901 *)this->_vb901,
                         (ushort)(param->field0_0x0).pushAction.dataForInteractingObject,
                         (param->field0_0x0).bparam[3],(ushort **)0x0,(float **)0x0,
                         (ushort *)((uint)&incPerHour | 2));
      if (TVar8 == kError) {
        return kError;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      motiveInc.incPerTick = (float)(int)(short)incPerHour * 0.0005555556;
      motiveInc.whichMotive = (int)(param->field0_0x0).distanceTo.flags;
      motiveInc.limit = (float)(int)(short)maxValue;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      pMVar3 = (this->fMotiveIncs).finish;
      if (pMVar3 == (this->fMotiveIncs).end_of_storage) {
        insert_aux__t6vector2Z9MotiveIncZt23__malloc_alloc_template1i0P9MotiveIncRC9MotiveInc
                  (&this->fMotiveIncs,pMVar3,&motiveInc);
      }
      else {
        puVar1 = (undefined *)((int)&pMVar3->incPerTick + 3);
        uVar6 = (uint)puVar1 & 7;
        puVar7 = (ulong *)(puVar1 + -uVar6);
        *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 |
                  CONCAT44(motiveInc.incPerTick,motiveInc.whichMotive) >> (7 - uVar6) * 8;
        uVar6 = (uint)pMVar3 & 7;
        *(ulong *)((int)pMVar3 - uVar6) =
             CONCAT44(motiveInc.incPerTick,motiveInc.whichMotive) << uVar6 * 8 |
             *(ulong *)((int)pMVar3 - uVar6) & 0xffffffffffffffffU >> (8 - uVar6) * 8;
        pMVar3->limit = motiveInc.limit;
        (this->fMotiveIncs).finish = (this->fMotiveIncs).finish + 1;
      }
      return kTrueComplete;
    }
    if (bVar2 < 0x10) {
      if (0xd < bVar2) {
        this_00 = (cXObjectImpl__127_901 *)this->_vb901;
        goto LAB_002197dc;
      }
      pcVar10 = this->_vb901;
    }
    else {
      pcVar10 = this->_vb901;
    }
  }
  pcVar10->_vb1233->fError = 0x1a;
  pcVar4 = this->_vb901->_vb966;
  pcVar5 = pcVar4->__vtable;
  (*(code *)pcVar5->SimEnabled)((int)&pcVar4->_vb899 + (int)*(short *)&pcVar5->SimIndependent,0x1a);
  return kError;
}

TreeReturnCode cXPersonImpl::TryGosubFoundAction(StackElem *elem) {
	cXObject *theObject;
	TreeTable *theTable;
	Int entryIndex;
	TreeTableEntry *entry;
	short int stackVars[4];
	TreeTableEntry *this;
	Interaction temp;
	
  ushort uVar1;
  cXObject__21_1030 *pcVar2;
  cXObject__21_1030__vtable *pcVar3;
  cXPerson__123_1079__vtable *pcVar4;
  TreeTableEntry *pTVar5;
  long lVar6;
  long lVar7;
  cXObjectImpl__123_901 *pcVar8;
  ushort uVar9;
  undefined4 uVar10;
  cXObject__142_982 *obj;
  ushort stackVars [4];
  Interaction temp;
  
  if (elem->fObjectID == 0) {
    pcVar8 = this->_vb901;
    uVar9 = 0x15;
    uVar10 = 0x15;
  }
  else {
    pcVar2 = this->_vb901->_vb966;
    pcVar3 = pcVar2->__vtable;
    lVar6 = (*(code *)pcVar3[1].GetLightingContribution)
                      ((int)&pcVar2->_vb899 + (int)*(short *)&pcVar3[1].CanContributeLight,
                       elem->fObjectID);
    if (lVar6 == 0) {
      return kFalseComplete;
    }
    obj = (cXObject__142_982 *)lVar6;
    lVar7 = (*(code *)obj->__vtable[1].GetFnTable)
                      ((int)&obj->_vb1019 + (int)*(short *)&obj->__vtable[1].ForceLocation);
    if (lVar7 == 0) {
      return kFalseComplete;
    }
    uVar9 = this->_vb901->fData[0x14];
    pTVar5 = GetEntryByIndex__C9TreeTablei((TreeTable *)lVar7,(int)(short)uVar9);
    uVar10 = 0x16;
    if (pTVar5 != (TreeTableEntry *)0x0) {
                    /* end of inlined section */
      uVar1 = pTVar5->fActionTreeID;
      memset(stackVars,0,8);
      pcVar4 = this->_vb1079->__vtable;
      lVar6 = (*(code *)pcVar4->RemoveAction)
                        ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar4->AddAction,lVar6,
                         stackVars,uVar1,0);
      if (lVar6 == 0) {
        return kError;
      }
      __11InteractionP8cXPersonP8cXObjectii
                (&temp,(cXPerson__142_985 *)this->_vb1079,obj,(int)(short)uVar9,2);
      SetStackVars__11InteractionPs(&temp,stackVars);
      SetCurrentAction__12cXPersonImplRC11Interaction(this,&temp);
      ___8BString2(&temp.fName,2);
      return kStackLoaded;
    }
    pcVar8 = this->_vb901;
    uVar9 = 0x16;
  }
  pcVar8->_vb1233->fError = uVar9;
  pcVar2 = this->_vb901->_vb966;
  pcVar3 = pcVar2->__vtable;
  (*(code *)pcVar3->SimEnabled)
            ((int)&pcVar2->_vb899 + (int)*(short *)&pcVar3->SimIndependent,uVar10);
  return kError;
}

TreeReturnCode cXPersonImpl::TryLookTowards(StackElem *elem, XPrimParam *param) {
	TreeReturnCode result;
	FTilePt pt0;
	EVec3 vTemp;
	FTilePt pt2;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	FTilePt *last;
	FTilePt *first;
	FTilePt *pointer;
	TreeReturnCode result;
	cXObject *stackObj;
	FTilePt pt1;
	FTilePt pt2;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	FTilePt *last;
	FTilePt *first;
	FTilePt *pointer;
	cXObject *this;
	FTilePt delta;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  cXPerson__123_1079__vtable *pcVar5;
  SAnimator__vtable *pSVar6;
  cXObject__21_1030 *pcVar7;
  cXObject__21_1030__vtable *pcVar8;
  ulong *puVar9;
  EGlobal *pEVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  FTilePt *pFVar14;
  cXObjectImpl__123_901 *pcVar15;
  ushort uVar16;
  TileList *pTVar17;
  FTilePt *pFVar18;
  SAnimator *pSVar19;
  undefined4 uVar20;
  ulong in_t0;
  float fVar21;
  float fVar22;
  float fVar23;
  FTilePt pt0;
  EVec3 vTemp;
  FTilePt local_90 [2];
  FTilePt pt2;
  FTilePt delta;
  
  sVar4 = (param->field0_0x0).find5WorstMotives.unused0;
  if (sVar4 == 1) {
    if (elem->fPrimState == 0) {
      pcVar5 = this->_vb1079->__vtable;
      lVar13 = (*(code *)pcVar5->ClearRecording)
                         ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar5->StopRecording);
      pEVar10 = _5Globs_pEORGlobals;
      lVar12 = 0;
      if (lVar13 != 0) goto LAB_00219f40;
      pTVar17 = &this->fDestList;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      pFVar18 = (this->fDestList).field0_0x0.start;
      for (pFVar14 = pFVar18; pFVar14 != (this->fDestList).field0_0x0.finish; pFVar14 = pFVar14 + 1)
      {
      }
      (this->fDestList).field0_0x0.finish = pFVar18;
                    /* end of inlined section */
      puVar1 = (undefined *)((int)&(this->_vb901->fLocation).x.whole + 3);
                    /* inlined from /eor/src2/common/e_standard_macros.h */
                    /* end of inlined section */
      uVar2 = (uint)puVar1 & 7;
      pFVar18 = &this->_vb901->fLocation;
      uVar3 = (uint)pFVar18 & 7;
      pt0 = (FTilePt)((*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                      (long)(int)pTVar17 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) &
                      -1L << (8 - uVar3) * 8 | *(ulong *)((int)pFVar18 - uVar3) >> uVar3 * 8);
      puVar1 = (undefined *)((int)&pt0.x.whole + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar9 = (ulong *)(puVar1 + -uVar2);
      *puVar9 = *puVar9 & -1L << (uVar2 + 1) * 8 | (ulong)pt0 >> (7 - uVar2) * 8;
      fVar22 = 100.0;
                    /* inlined from /eor/src2/common/e_standard_macros.h */
      fVar23 = (pEVar10->m_vCameraRotDegrees + 45.0) * 0.01745329;
                    /* end of inlined section */
      fVar21 = cosf(fVar23);
      fVar21 = -fVar21 * fVar22;
      fVar23 = sinf(fVar23);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
      local_90[0].y.whole = (int)fVar21 * 0x10 + pt0.y.whole;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
      local_90[0].x.whole = (int)(-fVar23 * fVar22) * 0x10 + pt0.x.whole;
      pFVar18 = (this->fDestList).field0_0x0.finish;
      if (pFVar18 == (this->fDestList).field0_0x0.end_of_storage) {
        insert_aux__t6vector2Z7FTilePtZt23__malloc_alloc_template1i0P7FTilePtRC7FTilePt
                  (&pTVar17->field0_0x0,pFVar18,&pt0);
      }
      else {
        puVar1 = (undefined *)((int)&(pFVar18->x).whole + 3);
        uVar2 = (uint)puVar1 & 7;
        puVar9 = (ulong *)(puVar1 + -uVar2);
        *puVar9 = *puVar9 & -1L << (uVar2 + 1) * 8 | (ulong)pt0 >> (7 - uVar2) * 8;
        uVar2 = (uint)pFVar18 & 7;
        *(ulong *)((int)pFVar18 - uVar2) =
             (long)pt0 << uVar2 * 8 |
             *(ulong *)((int)pFVar18 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        (this->fDestList).field0_0x0.finish = (this->fDestList).field0_0x0.finish + 1;
      }
      pFVar18 = (this->fDestList).field0_0x0.finish;
      if (pFVar18 == (this->fDestList).field0_0x0.end_of_storage) {
        insert_aux__t6vector2Z7FTilePtZt23__malloc_alloc_template1i0P7FTilePtRC7FTilePt
                  (&pTVar17->field0_0x0,pFVar18,&pt0);
      }
      else {
        puVar1 = (undefined *)((int)&(pFVar18->x).whole + 3);
        uVar2 = (uint)puVar1 & 7;
        puVar9 = (ulong *)(puVar1 + -uVar2);
        *puVar9 = *puVar9 & -1L << (uVar2 + 1) * 8 | (ulong)pt0 >> (7 - uVar2) * 8;
        uVar2 = (uint)pFVar18 & 7;
        *(ulong *)((int)pFVar18 - uVar2) =
             (long)pt0 << uVar2 * 8 |
             *(ulong *)((int)pFVar18 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        (this->fDestList).field0_0x0.finish = (this->fDestList).field0_0x0.finish + 1;
      }
      pFVar18 = (this->fDestList).field0_0x0.finish;
      if (pFVar18 == (this->fDestList).field0_0x0.end_of_storage) {
        insert_aux__t6vector2Z7FTilePtZt23__malloc_alloc_template1i0P7FTilePtRC7FTilePt
                  (&pTVar17->field0_0x0,pFVar18,local_90);
      }
      else {
        puVar1 = (undefined *)((int)&(pFVar18->x).whole + 3);
        uVar2 = (uint)puVar1 & 7;
        puVar9 = (ulong *)(puVar1 + -uVar2);
        *puVar9 = *puVar9 & -1L << (uVar2 + 1) * 8 |
                  CONCAT44(local_90[0].x.whole,local_90[0].y.whole) >> (7 - uVar2) * 8;
        uVar2 = (uint)pFVar18 & 7;
        *(ulong *)((int)pFVar18 - uVar2) =
             CONCAT44(local_90[0].x.whole,local_90[0].y.whole) << uVar2 * 8 |
             *(ulong *)((int)pFVar18 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        (this->fDestList).field0_0x0.finish = (this->fDestList).field0_0x0.finish + 1;
      }
                    /* end of inlined section */
      pcVar7 = this->_vb901->_vb966;
      pcVar8 = pcVar7->__vtable;
      (*(code *)pcVar8->GetObstacleAtLocation)
                ((int)&pcVar7->_vb899 + (int)*(short *)&pcVar8->GetRelMatrix,9,0);
      pSVar19 = this->fAnimator;
LAB_00219ea4:
      (*(code *)pSVar19->__vtable->ResetCensorship)
                ((int)&pSVar19->__vtable + (int)*(short *)&pSVar19->__vtable->ReconStream);
      elem->fPrimState = 1;
      pSVar19 = this->fAnimator;
    }
    else {
      pSVar19 = this->fAnimator;
    }
LAB_00219ec4:
    lVar13 = (*(code *)pSVar19->__vtable->Dress)
                       ((int)&pSVar19->__vtable + (int)*(short *)&pSVar19->__vtable->SetPixelated);
    lVar12 = 1;
    if (lVar13 != 0) {
      lVar12 = lVar13;
    }
    if ((lVar12 != 2) &&
       (pSVar6 = this->fAnimator->__vtable,
       lVar13 = (*(code *)pSVar6->GetCarryHandPosAndDir)
                          ((int)&this->fAnimator->__vtable + (int)*(short *)&pSVar6->Undress),
       lVar13 == 0)) {
      lVar12 = 2;
    }
    goto LAB_00219f40;
  }
  if (sVar4 < 2) {
    if (sVar4 == 0) {
      pSVar6 = this->fAnimator->__vtable;
      (*(code *)pSVar6[1].TryAnimate)
                ((int)&this->fAnimator->__vtable + (int)*(short *)&pSVar6[1].ForceLocation,
                 elem->fObjectID);
      lVar12 = 1;
      goto LAB_00219f40;
    }
    pcVar15 = this->_vb901;
LAB_00219f10:
    uVar16 = 0x27;
    uVar20 = 0x27;
  }
  else {
    if (3 < sVar4) {
      pcVar15 = this->_vb901;
      goto LAB_00219f10;
    }
    if (elem->fPrimState != 0) {
      pSVar19 = this->fAnimator;
      goto LAB_00219ec4;
    }
    pcVar5 = this->_vb1079->__vtable;
    lVar13 = (*(code *)pcVar5->ClearRecording)
                       ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar5->StopRecording);
    lVar12 = 0;
    if (lVar13 != 0) goto LAB_00219f40;
    pcVar7 = this->_vb901->_vb966;
    pcVar8 = pcVar7->__vtable;
    lVar12 = (*(code *)pcVar8[1].GetLightingContribution)
                       ((int)&pcVar7->_vb899 + (int)*(short *)&pcVar8[1].CanContributeLight,
                        elem->fObjectID);
    uVar16 = 0x15;
    if (lVar12 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      pTVar17 = &this->fDestList;
      pFVar18 = (this->fDestList).field0_0x0.start;
      for (pFVar14 = pFVar18; pFVar14 != (this->fDestList).field0_0x0.finish; pFVar14 = pFVar14 + 1)
      {
      }
      (this->fDestList).field0_0x0.finish = pFVar18;
                    /* end of inlined section */
      puVar1 = (undefined *)((int)&(this->_vb901->fLocation).x.whole + 3);
      uVar2 = (uint)puVar1 & 7;
      pFVar14 = &this->_vb901->fLocation;
      uVar3 = (uint)pFVar14 & 7;
      pt0 = (FTilePt)((*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                      (long)(int)pFVar18 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) &
                      -1L << (8 - uVar3) * 8 | *(ulong *)((int)pFVar14 - uVar3) >> uVar3 * 8);
      puVar1 = (undefined *)((int)&pt0.x.whole + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar9 = (ulong *)(puVar1 + -uVar2);
      *puVar9 = *puVar9 & -1L << (uVar2 + 1) * 8 | (ulong)pt0 >> (7 - uVar2) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
      if (lVar12 == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = *(int *)((int)lVar12 + 4);
        iVar11 = (**(code **)(iVar11 + 0x454))((int)lVar12 + (int)*(short *)(iVar11 + 0x450));
      }
                    /* end of inlined section */
      uVar16 = (param->field0_0x0).bparam[0];
      uVar2 = iVar11 + 0xcfU & 7;
      uVar3 = iVar11 + 200U & 7;
      pt2 = (FTilePt)((*(long *)((iVar11 + 0xcfU) - uVar2) << (7 - uVar2) * 8 |
                      in_t0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                     *(ulong *)((iVar11 + 200U) - uVar3) >> uVar3 * 8);
      puVar1 = (undefined *)((int)&pt2.x.whole + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar9 = (ulong *)(puVar1 + -uVar2);
      *puVar9 = *puVar9 & -1L << (uVar2 + 1) * 8 | (ulong)pt2 >> (7 - uVar2) * 8;
      if (uVar16 == 3) {
        puVar1 = (undefined *)((int)&delta.x.whole + 3);
        uVar2 = (uint)puVar1 & 7;
        puVar9 = (ulong *)(puVar1 + -uVar2);
        *puVar9 = *puVar9 & -1L << (uVar2 + 1) * 8 | (ulong)pt2 >> (7 - uVar2) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
        delta.x = pt2.x;
        delta.y = pt2.y;
        pt2 = (FTilePt)CONCAT44(delta.x.whole + (delta.x.whole - pt0.x.whole) * -2,
                                delta.y.whole + (delta.y.whole - pt0.y.whole) * -2);
        delta = (FTilePt)CONCAT44((delta.x.whole - pt0.x.whole) * 2,
                                  (delta.y.whole - pt0.y.whole) * 2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        pFVar18 = (this->fDestList).field0_0x0.finish;
      }
      else {
        pFVar18 = (this->fDestList).field0_0x0.finish;
      }
      if (pFVar18 == (this->fDestList).field0_0x0.end_of_storage) {
        insert_aux__t6vector2Z7FTilePtZt23__malloc_alloc_template1i0P7FTilePtRC7FTilePt
                  (&pTVar17->field0_0x0,pFVar18,&pt0);
      }
      else {
        puVar1 = (undefined *)((int)&(pFVar18->x).whole + 3);
        uVar2 = (uint)puVar1 & 7;
        puVar9 = (ulong *)(puVar1 + -uVar2);
        *puVar9 = *puVar9 & -1L << (uVar2 + 1) * 8 | (ulong)pt0 >> (7 - uVar2) * 8;
        uVar2 = (uint)pFVar18 & 7;
        *(ulong *)((int)pFVar18 - uVar2) =
             (long)pt0 << uVar2 * 8 |
             *(ulong *)((int)pFVar18 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        (this->fDestList).field0_0x0.finish = (this->fDestList).field0_0x0.finish + 1;
      }
      pFVar18 = (this->fDestList).field0_0x0.finish;
      if (pFVar18 == (this->fDestList).field0_0x0.end_of_storage) {
        insert_aux__t6vector2Z7FTilePtZt23__malloc_alloc_template1i0P7FTilePtRC7FTilePt
                  (&pTVar17->field0_0x0,pFVar18,&pt0);
      }
      else {
        puVar1 = (undefined *)((int)&(pFVar18->x).whole + 3);
        uVar2 = (uint)puVar1 & 7;
        puVar9 = (ulong *)(puVar1 + -uVar2);
        *puVar9 = *puVar9 & -1L << (uVar2 + 1) * 8 | (ulong)pt0 >> (7 - uVar2) * 8;
        uVar2 = (uint)pFVar18 & 7;
        *(ulong *)((int)pFVar18 - uVar2) =
             (long)pt0 << uVar2 * 8 |
             *(ulong *)((int)pFVar18 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        (this->fDestList).field0_0x0.finish = (this->fDestList).field0_0x0.finish + 1;
      }
      pFVar18 = (this->fDestList).field0_0x0.finish;
      if (pFVar18 == (this->fDestList).field0_0x0.end_of_storage) {
        insert_aux__t6vector2Z7FTilePtZt23__malloc_alloc_template1i0P7FTilePtRC7FTilePt
                  (&pTVar17->field0_0x0,pFVar18,&pt2);
      }
      else {
        puVar1 = (undefined *)((int)&(pFVar18->x).whole + 3);
        uVar2 = (uint)puVar1 & 7;
        puVar9 = (ulong *)(puVar1 + -uVar2);
        *puVar9 = *puVar9 & -1L << (uVar2 + 1) * 8 | (ulong)pt2 >> (7 - uVar2) * 8;
        uVar2 = (uint)pFVar18 & 7;
        *(ulong *)((int)pFVar18 - uVar2) =
             (long)pt2 << uVar2 * 8 |
             *(ulong *)((int)pFVar18 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        (this->fDestList).field0_0x0.finish = (this->fDestList).field0_0x0.finish + 1;
      }
                    /* end of inlined section */
      pSVar19 = this->fAnimator;
      goto LAB_00219ea4;
    }
    pcVar15 = this->_vb901;
    uVar20 = 0x15;
  }
  pcVar15->_vb1233->fError = uVar16;
  pcVar7 = this->_vb901->_vb966;
  pcVar8 = pcVar7->__vtable;
  (*(code *)pcVar8->SimEnabled)
            ((int)&pcVar7->_vb899 + (int)*(short *)&pcVar8->SimIndependent,uVar20);
  lVar12 = -1;
LAB_00219f40:
  return (TreeReturnCode)lVar12;
}

TreeReturnCode cXPersonImpl::TryGotoRoutingSlot(StackElem *elem, XPrimParam *param) {
	RoutingSlot *rs;
	cXObject *to;
	Int slotNum;
	Int slotNum;
	Int slotNum;
	RoutingSlot *this;
	
  byte bVar1;
  cXObject__21_1030 *pcVar2;
  cXObject__21_1030__vtable *pcVar3;
  ObjectModule *pOVar4;
  ObjectModule__vtable *pOVar5;
  short sVar6;
  ushort *puVar7;
  RoutingSlot *rs;
  TreeReturnCode TVar9;
  long lVar10;
  cXObjectImpl__123_901 *pcVar11;
  uint uVar12;
  ushort uVar13;
  int iVar14;
  undefined8 uVar15;
  code *pcVar8;
  
  if (elem->fPrimState != 0) {
    rs = (RoutingSlot *)0x0;
    goto LAB_0021a188;
  }
  pcVar2 = this->_vb901->_vb966;
  pcVar3 = pcVar2->__vtable;
  lVar10 = (*(code *)pcVar3[1].GetLightingContribution)
                     ((int)&pcVar2->_vb899 + (int)*(short *)&pcVar3[1].CanContributeLight,
                      elem->fObjectID);
  uVar13 = 0x34;
  if (lVar10 == 0) {
    pcVar11 = this->_vb901;
    uVar15 = 0x34;
    goto LAB_0021a0f8;
  }
  uVar13 = (param->field0_0x0).bparam[1];
  iVar14 = (int)lVar10;
  if (uVar13 == 0) {
    sVar6 = (param->field0_0x0).find5WorstMotives.unused0;
    if ((sVar6 < 0) && (uVar13 = 8, (short)(ushort)elem->fNumParams <= sVar6)) {
      pcVar11 = this->_vb901;
      uVar15 = 8;
      goto LAB_0021a0f8;
    }
    puVar7 = GetParams__9StackElem(elem);
    uVar13 = puVar7[(param->field0_0x0).find5WorstMotives.unused0];
    if (-1 < (short)uVar13) {
      sVar6 = (**(code **)(*(int *)(iVar14 + 4) + 0x334))
                        (iVar14 + *(short *)(*(int *)(iVar14 + 4) + 0x330));
      if (sVar6 <= (short)uVar13) goto LAB_0021a0e8;
      pcVar8 = *(code **)(*(int *)(iVar14 + 4) + 0x33c);
      iVar14 = iVar14 + *(short *)(*(int *)(iVar14 + 4) + 0x338);
      goto LAB_0021a13c;
    }
    pcVar11 = this->_vb901;
  }
  else if (uVar13 == 1) {
    uVar13 = (param->field0_0x0).find5WorstMotives.unused0;
    if ((short)uVar13 < 0) {
      pcVar11 = this->_vb901;
    }
    else {
      sVar6 = (**(code **)(*(int *)(iVar14 + 4) + 0x334))
                        (iVar14 + *(short *)(*(int *)(iVar14 + 4) + 0x330));
      if ((short)uVar13 < sVar6) {
        pcVar8 = *(code **)(*(int *)(iVar14 + 4) + 0x33c);
        iVar14 = iVar14 + *(short *)(*(int *)(iVar14 + 4) + 0x338);
        goto LAB_0021a13c;
      }
LAB_0021a0e8:
      pcVar11 = this->_vb901;
    }
  }
  else if (uVar13 == 2) {
    uVar13 = (param->field0_0x0).find5WorstMotives.unused0;
    if (-1 < (short)uVar13) {
      pOVar4 = this->_vb901->fModule;
      pOVar5 = pOVar4->__vtable;
      sVar6 = (*(code *)pOVar5[1].UpdateRooms)
                        ((int)&pOVar4->__vtable +
                         (int)*(short *)&pOVar5[1].KillObjectsInvalidatedByResize);
      if (sVar6 <= (short)uVar13) goto LAB_0021a0e8;
      pOVar4 = this->_vb901->fModule;
      pOVar5 = pOVar4->__vtable;
      pcVar8 = (code *)pOVar5[1].KillAllObjects;
      iVar14 = (int)&pOVar4->__vtable + (int)*(short *)&pOVar5[1].AddToKillQueue;
LAB_0021a13c:
      rs = (RoutingSlot *)(*pcVar8)(iVar14,uVar13);
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
      bVar1 = (param->field0_0x0).directionTo.flags;
      uVar12 = rs->rsFlags & 0xffffbfff;
      rs->rsFlags = uVar12;
      if (((bVar1 ^ 1) & 1) != 0) {
        rs->rsFlags = uVar12 | 0x4000;
      }
LAB_0021a188:
      TVar9 = TryGotoRoutingSlot__12cXPersonImplP9StackElemP11RoutingSlot(this,elem,rs);
      return TVar9;
    }
    pcVar11 = this->_vb901;
  }
  else {
    pcVar11 = this->_vb901;
  }
  uVar13 = 0x25;
  uVar15 = 0x25;
LAB_0021a0f8:
  pcVar11->_vb1233->fError = uVar13;
  pcVar2 = this->_vb901->_vb966;
  pcVar3 = pcVar2->__vtable;
  (*(code *)pcVar3->SimEnabled)
            ((int)&pcVar2->_vb899 + (int)*(short *)&pcVar3->SimIndependent,uVar15);
  return kError;
}

TreeReturnCode cXPersonImpl::TryGotoRoutingSlot(StackElem *elem, RoutingSlot *rs) {
	GRS_PrimState primState;
	cXObject *to;
	bool objectGone;
	XRoute *route;
	StdPrm trapCount;
	FTilePt lastLoc;
	TreeReturnCode result;
	bool done;
	XRoute temp;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	XRoute *this;
	RoutingSlot *this;
	Slot *this;
	void *pAddress;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	RouteGoal *first;
	RouteGoal *last;
	RouteGoal *pointer;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	void *pAddress;
	XRoute *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	RouteGoal *first;
	RouteGoal *last;
	RouteGoal *pointer;
	XRoute *this;
	XRoute *this;
	XRoute *this;
	XRoute *this;
	XRoute *this;
	bool canPlace;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	FTilePt final;
	unsigned int n;
	unsigned int n;
	Int y;
	Int x;
	Int dir;
	Int yinc;
	Int xinc;
	XRoute *this;
	XRoute *this;
	XRoute *this;
	XRoute *this;
	XRoute *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	Int interactionID;
	int iNumPeople;
	int i;
	cXPersonImpl *person;
	XRoute *hisRoute;
	XRoute *this;
	XRoute *this;
	XRoute *this;
	XRoute *this;
	XRoute *this;
	XRoute *this;
	XRoute *this;
	RouteGoal *first;
	RouteGoal *last;
	RouteGoal *pointer;
	XRoute *this;
	XRoute *this;
	XRoute *this;
	RoutingSlot *this;
	short int params[4];
	XRoute *this;
	XRoute *this;
	XRoute *this;
	XRoute *this;
	XRoute *this;
	XRoute *this;
	XRoute *this;
	Int ys;
	Int xs;
	XRoute *this;
	XRoute *i;
	XRoute *this;
	XRoute *this;
	cXObject *chair;
	short int stck[4];
	XRoute *this;
	XRoute *this;
	XRoute *this;
	StdPrm chairResult;
	XRoute *this;
	XRoute *this;
	Int result;
	XRoute *this;
	XRoute *this;
	SInt32 waitStartTicks;
	SInt16 treeID;
	XRoute *this;
	XRoute *this;
	XRoute *this;
	XRoute *this;
	XRoute *this;
	SInt32 ticksPassed;
	XRoute *this;
	Int waitStartTicks;
	SInt32 waitStartTicks;
	SInt32 ticksPassed;
	XRoute *this;
	XRoute *this;
	XRoute *this;
	Int waitStartTicks;
	XRoute *this;
	Int trapCount;
	XRoute *this;
	
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  cXObject__21_1030 *pcVar5;
  cXObject__21_1030__vtable *pcVar6;
  cXPerson__123_1079__vtable *pcVar7;
  RouteGoal *pRVar8;
  ulong *puVar9;
  cXObject__109_1077 *dest;
  RoutingSlot *pRVar10;
  FInt FVar11;
  XRoute *pXVar12;
  TreeReturnCode TVar13;
  long lVar14;
  RouteGoal *pRVar15;
  XRoute *pXVar16;
  ulong in_a3;
  uint uVar17;
  FTilePt lastLoc;
  RouteGoal *local_168;
  ushort stck [4];
  StackElem *local_c0;
  cXObject__21_1030 *to;
  int trapCount;
  bool done;
  
  bVar2 = false;
  pcVar5 = this->_vb901->_vb966;
  pcVar6 = pcVar5->__vtable;
  uVar17 = elem->fPrimState;
  lVar14 = (*(code *)pcVar6[1].GetLightingContribution)
                     ((int)&pcVar5->_vb899 + (int)*(short *)&pcVar6[1].CanContributeLight,
                      elem->fObjectID);
  dest = (cXObject__109_1077 *)lVar14;
  if ((lVar14 == 0) ||
     (lVar14 = (*(code *)dest->__vtable->GetID)
                         ((int)&dest->_vb1946 + (int)*(short *)&dest->__vtable->GetTypeName),
     lVar14 == 0)) {
    bVar2 = true;
  }
  if (uVar17 != 0) goto LAB_0021a39c;
  if (bVar2) {
    return kFalseComplete;
  }
  in_a3 = (ulong)(int)rs;
  __6XRouteP8cXObjectT1PC11RoutingSlot
            ((XRoute *)&lastLoc,(cXObject__109_1077 *)this->_vb1079->_vb966,dest,rs);
  pcVar7 = this->_vb1079->__vtable;
  lVar14 = (**(code **)&pcVar7->field_0x18c)
                     ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar7->field_0x188);
  if (lVar14 != 0) {
    pRVar10 = GetRoutingSlot__6XRoute((XRoute *)&lastLoc);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
    pRVar10->rsFlags = pRVar10->rsFlags | 0x800;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  }
  pXVar12 = (this->fRouteStack).start;
                    /* end of inlined section */
  if (((int)(this->fRouteStack).finish - (int)pXVar12) * -0x3e7063e7 >> 2 == 0) {
LAB_0021a2f8:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    pXVar12 = (this->fRouteStack).finish;
  }
  else {
                    /* end of inlined section */
    pRVar10 = GetRoutingSlot__6XRoute(pXVar12);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
    if ((pRVar10->rsFlags >> 0xe & 1U) == 0) {
      pRVar10 = GetRoutingSlot__6XRoute((XRoute *)&lastLoc);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
      pRVar10->rsFlags = pRVar10->rsFlags & 0xffffbfff;
      goto LAB_0021a2f8;
    }
    pXVar12 = (this->fRouteStack).finish;
  }
  if (pXVar12 == (this->fRouteStack).end_of_storage) {
    insert_aux__t6vector2Z6XRouteZt23__malloc_alloc_template1i0P6XRouteRC6XRoute
              (&this->fRouteStack,pXVar12,(XRoute *)&lastLoc);
  }
  else {
    __6XRouteRC6XRoute(pXVar12,(XRoute *)&lastLoc);
    (this->fRouteStack).finish = (this->fRouteStack).finish + 1;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
  uVar17 = 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
  for (FVar11.whole = lastLoc.y.whole; FVar11.whole != lastLoc.x.whole;
      FVar11.whole = FVar11.whole + 0x10) {
  }
  if ((lastLoc.y.whole != 0) && ((int)local_168 - lastLoc.y.whole >> 4 != 0)) {
    free((void *)lastLoc.y.whole);
  }
LAB_0021a39c:
                    /* end of inlined section */
  pXVar12 = GetCurrentRoute__12cXPersonImpl(this);
  if (pXVar12 == (XRoute *)0x0) {
    TVar13 = kFalseComplete;
  }
  else {
                    /* end of inlined section */
    if (pXVar12->fDest == (cXObject__109_1077 *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      elem->fPrimState = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
      pXVar12 = (this->fRouteStack).finish;
      pXVar16 = pXVar12 + -1;
      (this->fRouteStack).finish = pXVar16;
      pXVar12[-1].fSlot.field0_0x0.__vtable = (Slot__vtable *)_vt_4Slot;
      pRVar15 = pXVar12[-1].field0_0x0.start;
      pRVar8 = pXVar12[-1].field0_0x0.finish;
      if (pRVar15 == pRVar8) {
        pRVar15 = (pXVar16->field0_0x0).start;
      }
      else {
        do {
          pRVar15 = pRVar15 + 1;
        } while (pRVar15 != pRVar8);
        pRVar15 = (pXVar16->field0_0x0).start;
      }
      TVar13 = kEngaged;
      if ((pRVar15 != (RouteGoal *)0x0) &&
         (TVar13 = kEngaged, (int)pXVar12[-1].field0_0x0.end_of_storage - (int)pRVar15 >> 4 != 0)) {
        free(pRVar15);
        TVar13 = kEngaged;
                    /* end of inlined section */
      }
    }
    else {
      if ((bVar2) && (bVar2 = uVar17 == 3, uVar17 = 0x13, bVar2)) {
        uVar17 = 0x14;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/XRouting.h */
                    /* end of inlined section */
      if (*(int *)&pXVar12->fValid == 0) {
        switch(uVar17) {
        case 2:
                    /* end of inlined section */
          pXVar12->fCurPortal = (cXPortal__109_1169 *)0x0;
          break;
        case 3:
          uVar17 = 0xf;
        }
                    /* inlined from c:/eor/src2/games/sims/MSrc/XRouting.h */
        *(undefined4 *)&pXVar12->fValid = 1;
                    /* end of inlined section */
      }
      GetRoutingSlot__6XRoute(pXVar12);
      _done = 0;
      trapCount = (int)*(short *)&pXVar12->fTrapCount;
      puVar1 = (undefined *)((int)&(pXVar12->fLastLocation).x.whole + 3);
      uVar3 = (uint)puVar1 & 7;
      uVar4 = (uint)&pXVar12->fLastLocation & 7;
      lastLoc = (FTilePt)((*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
                          in_a3 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                         *(ulong *)((int)&pXVar12->fLastLocation - uVar4) >> uVar4 * 8);
      puVar1 = (undefined *)((int)&lastLoc.x.whole + 3);
      uVar3 = (uint)puVar1 & 7;
      puVar9 = (ulong *)(puVar1 + -uVar3);
      local_c0 = elem;
      *puVar9 = *puVar9 & -1L << (uVar3 + 1) * 8 | (ulong)lastLoc >> (7 - uVar3) * 8;
      bVar2 = uVar17 < 0x15;
      do {
        if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x0021a4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          TVar13 = (**(code **)(&DAT_003b8ae0 + uVar17 * 4))();
          return TVar13;
        }
        uVar17 = 7;
        bVar2 = true;
      } while (_done == 0);
      local_c0->fPrimState = 7;
      if (pXVar12 != (XRoute *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/XRouting.h */
        pXVar12->fTrapCount = trapCount;
        puVar1 = (undefined *)((int)&(pXVar12->fLastLocation).x.whole + 3);
        uVar17 = (uint)puVar1 & 7;
        puVar9 = (ulong *)(puVar1 + -uVar17);
        *puVar9 = *puVar9 & -1L << (uVar17 + 1) * 8 | (ulong)lastLoc >> (7 - uVar17) * 8;
        uVar17 = (uint)&pXVar12->fLastLocation & 7;
        puVar9 = (ulong *)((int)&pXVar12->fLastLocation - uVar17);
        *puVar9 = (long)lastLoc << uVar17 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar17) * 8;
      }
                    /* end of inlined section */
      TVar13 = kEngaged;
    }
  }
  return TVar13;
}

static void __tcf_0() {
	cXPersonImpl **last;
	cXPersonImpl **first;
	cXPersonImpl **pointer;
	
  void *pvVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pvVar1 = consider_3513;
  if (consider_3513 != DAT_003d3ce4) {
    do {
      pvVar1 = (void *)((int)pvVar1 + 4);
    } while (pvVar1 != DAT_003d3ce4);
  }
  if ((consider_3513 != (void *)0x0) && (DAT_003d3ce8 - (int)consider_3513 >> 2 != 0)) {
    free(consider_3513);
  }
  return;
}

bool cXPersonImpl::AskOthersToMove(XRoute *inRoute) {
	static vector<cXPersonImpl *,__malloc_alloc_template<0> > consider;
	XRoute testRoute;
	TileList destList;
	cXPersonImpl **first;
	cXPersonImpl **last;
	cXPersonImpl **pointer;
	int iNumPeople;
	int i;
	int j;
	cXPersonImpl *p1;
	cXPerson *p2;
	XRoute *rt;
	cXPerson *this;
	XRoute *this;
	cXPersonImpl *&x;
	cXPersonImpl *&value;
	XRoute *this;
	cXPersonImpl **i;
	FTilePt *first;
	FTilePt *pointer;
	FTilePt *first;
	FTilePt *last;
	FTilePt *pointer;
	XRoute *this;
	RoutingSlot *this;
	Slot *this;
	void *pAddress;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	RouteGoal *first;
	RouteGoal *last;
	RouteGoal *pointer;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	void *pAddress;
	FTilePt *first;
	FTilePt *pointer;
	FTilePt *pt;
	FTilePt *nextPt;
	cXPersonImpl *found;
	Int xinc;
	Int yinc;
	float tinc;
	FTilePt *this;
	FTilePt &other;
	Int xdel;
	FTilePt *this;
	FTilePt &other;
	float t;
	FTilePt curPt;
	cXPersonImpl **i;
	FTilePt &pt1;
	FTilePt &pt2;
	float t;
	FTileRect *this;
	FTilePt *first;
	FTilePt *last;
	FTilePt *pointer;
	XRoute *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	RouteGoal *first;
	RouteGoal *last;
	RouteGoal *pointer;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	void *pAddress;
	FTilePt *first;
	FTilePt *last;
	FTilePt *pointer;
	XRoute *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	RouteGoal *first;
	RouteGoal *last;
	RouteGoal *pointer;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	void *pAddress;
	
  cXObject__21_1030 *pcVar1;
  cXObject__21_1030__vtable *pcVar2;
  int iVar3;
  cXPerson__123_1079 *pcVar4;
  FTilePt *pFVar5;
  FTilePt *pFVar6;
  bool bVar7;
  int *piVar8;
  int iVar9;
  cXObjectImpl__123_901 *pcVar10;
  int iVar11;
  RoutingSlot *slot;
  RouteGoal *pRVar12;
  long lVar13;
  cXObject__109_1077 *pcVar14;
  cXPersonImpl__123_903 **ppcVar15;
  int iVar16;
  FTilePt *pFVar17;
  FTilePt *pFVar18;
  cXPersonImpl__123_903 *pcVar19;
  cXPersonImpl__123_903 *this_00;
  int iVar20;
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
  float fVar21;
  float fVar22;
  XRoute testRoute;
  TileList destList;
  FTilePt curPt;
  cXPersonImpl__123_903 *p1;
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
  
                    /* end of inlined section */
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
  if (inRoute == (XRoute *)0x0) {
    return false;
  }
  ppcVar15 = consider_3513;
  if (__tmp_0_3514 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    DAT_003d3ce8 = (cXPersonImpl__123_903 **)0x0;
                    /* end of inlined section */
    __tmp_0_3514 = 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    consider_3513 = (cXPersonImpl__123_903 **)0x0;
                    /* end of inlined section */
    DAT_003d3ce4 = (cXPersonImpl__123_903 **)0x0;
    atexit(__tcf_0);
    ppcVar15 = consider_3513;
  }
  for (; ppcVar15 != DAT_003d3ce4; ppcVar15 = ppcVar15 + 1) {
  }
                    /* end of inlined section */
  iVar16 = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  DAT_003d3ce4 = consider_3513;
                    /* end of inlined section */
  pcVar1 = this->_vb901->_vb966;
  pcVar2 = pcVar1->__vtable;
  piVar8 = (int *)(*(code *)pcVar2->AdvanceGraphic)
                            ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2->GetDebugName);
  iVar9 = (**(code **)(*piVar8 + 0xf4))((int)piVar8 + (int)*(short *)(*piVar8 + 0xf0));
  if (0 < iVar9) {
    pcVar10 = this->_vb901;
    do {
      pcVar2 = pcVar10->_vb966->__vtable;
      piVar8 = (int *)(*(code *)pcVar2->AdvanceGraphic)
                                ((int)&pcVar10->_vb966->_vb899 +
                                 (int)*(short *)&pcVar2->GetDebugName);
      lVar13 = (**(code **)(*piVar8 + 0xec))((int)piVar8 + (int)*(short *)(*piVar8 + 0xe8),iVar16);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Person.h */
      if (lVar13 == 0) {
        p1 = (cXPersonImpl__123_903 *)0x0;
      }
      else {
        iVar20 = *(int *)((int)lVar13 + 4);
        p1 = (cXPersonImpl__123_903 *)
             (**(code **)(iVar20 + 0x24c))((int)lVar13 + (int)*(short *)(iVar20 + 0x248));
      }
                    /* end of inlined section */
      if (p1 != this) {
        pcVar14 = (cXObject__109_1077 *)0x0;
        if (p1 != (cXPersonImpl__123_903 *)0x0) {
          pcVar14 = (cXObject__109_1077 *)p1->_vb1079->_vb966;
        }
        bVar7 = ShouldIgnore__6XRouteP8cXObject(inRoute,pcVar14);
        if ((!bVar7) && (this->fPersonData[0] == 0)) {
          iVar20 = 0;
          if (0 < iVar9) {
            pcVar10 = this->_vb901;
            do {
              pcVar2 = pcVar10->_vb966->__vtable;
              piVar8 = (int *)(*(code *)pcVar2->AdvanceGraphic)
                                        ((int)&pcVar10->_vb966->_vb899 +
                                         (int)*(short *)&pcVar2->GetDebugName);
              lVar13 = (**(code **)(*piVar8 + 0xec))
                                 ((int)piVar8 + (int)*(short *)(*piVar8 + 0xe8),iVar20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Person.h */
              iVar11 = 0;
              iVar3 = iRam000003e8;
              if (lVar13 != 0) {
                iVar3 = *(int *)((int)lVar13 + 4);
                iVar11 = (**(code **)(iVar3 + 0x24c))((int)lVar13 + (int)*(short *)(iVar3 + 0x248));
                iVar3 = *(int *)(iVar11 + 1000);
              }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
              iVar11 = *(int *)(iVar11 + 0x3e4);
                    /* end of inlined section */
              while (iVar11 != iVar3) {
                    /* end of inlined section */
                if (p1 == (cXPersonImpl__123_903 *)0x0) {
                  if (*(cXPerson__123_1079 **)(iVar11 + 0x84) == (cXPerson__123_1079 *)0x0)
                  goto LAB_0021b814;
                  iVar11 = iVar11 + 0xa4;
                }
                else {
                  if (*(cXPerson__123_1079 **)(iVar11 + 0x84) == p1->_vb1079) {
LAB_0021b814:
                    /* end of inlined section */
                    if (iVar11 != iVar3) goto LAB_0021b82c;
                    break;
                  }
                  iVar11 = iVar11 + 0xa4;
                }
              }
              iVar20 = iVar20 + 1;
              if (iVar9 <= iVar20) break;
              pcVar10 = this->_vb901;
            } while( true );
          }
LAB_0021b82c:
          if (iVar20 == iVar9) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
            if (DAT_003d3ce4 == DAT_003d3ce8) {
              insert_aux__t6vector2ZP12cXPersonImplZt23__malloc_alloc_template1i0PP12cXPersonImplRCP12cXPersonImpl
                        ((vector_cXPersonImpl_____malloc_alloc_template_0___ *)&consider_3513,
                         DAT_003d3ce4,&p1);
            }
            else {
              *DAT_003d3ce4 = p1;
              DAT_003d3ce4 = DAT_003d3ce4 + 1;
            }
          }
        }
      }
      iVar16 = iVar16 + 1;
      if (iVar9 <= iVar16) break;
      pcVar10 = this->_vb901;
    } while( true );
  }
                    /* end of inlined section */
  if ((int)DAT_003d3ce4 - (int)consider_3513 >> 2 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/XRouting.h */
    pcVar14 = inRoute->fDest;
                    /* end of inlined section */
    pcVar4 = this->_vb1079;
    slot = GetRoutingSlot__6XRoute(inRoute);
    __6XRouteP8cXObjectT1PC11RoutingSlot
              (&testRoute,(cXObject__109_1077 *)pcVar4->_vb966,pcVar14,slot);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    destList.field0_0x0.start = (FTilePt *)0x0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    destList.field0_0x0.finish = (FTilePt *)0x0;
    destList.field0_0x0.end_of_storage = (FTilePt *)0x0;
                    /* end of inlined section */
    pFVar5 = destList.field0_0x0.start;
    ppcVar15 = consider_3513;
    if (consider_3513 != DAT_003d3ce4) {
      do {
        for (; pFVar5 != destList.field0_0x0.finish; pFVar5 = pFVar5 + 1) {
        }
        destList.field0_0x0.finish = destList.field0_0x0.start;
                    /* end of inlined section */
        testRoute.fIgnore = (cXPerson__109_1171 *)0x0;
        if (*ppcVar15 != (cXPersonImpl__123_903 *)0x0) {
          testRoute.fIgnore = (cXPerson__109_1171 *)(*ppcVar15)->_vb1079;
        }
                    /* end of inlined section */
                    /* end of inlined section */
        BuildGoalList__6XRoute(&testRoute);
        bVar7 = FindPath__6XRouteR8TileList(&testRoute,&destList);
        if ((bVar7) &&
           (bVar7 = MoveOutOfWay__12cXPersonImplP6XRouteR8TileList(*ppcVar15,inRoute,&destList),
           pFVar5 = destList.field0_0x0.start, bVar7)) goto joined_r0x0021b964;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
        ppcVar15 = ppcVar15 + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
        pFVar5 = destList.field0_0x0.start;
      } while (ppcVar15 != DAT_003d3ce4);
    }
    for (; pFVar5 != destList.field0_0x0.finish; pFVar5 = pFVar5 + 1) {
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/XRouting.h */
    testRoute._148_4_ = 1;
    destList.field0_0x0.finish = destList.field0_0x0.start;
    testRoute.fIgnore = (cXPerson__109_1171 *)0x0;
                    /* end of inlined section */
    BuildGoalList__6XRoute(&testRoute);
    bVar7 = FindPath__6XRouteR8TileList(&testRoute,&destList);
    pFVar5 = destList.field0_0x0.start;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    if ((bVar7) &&
       (1 < (uint)((int)destList.field0_0x0.finish - (int)destList.field0_0x0.start >> 3))) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      this_00 = (cXPersonImpl__123_903 *)0x0;
      if (destList.field0_0x0.start + 1 != destList.field0_0x0.finish) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
        iVar9 = ((destList.field0_0x0.start)->x).whole;
        pFVar6 = destList.field0_0x0.start + 1;
        pFVar18 = destList.field0_0x0.start;
        while( true ) {
          pFVar17 = pFVar6;
          iVar9 = (pFVar17->x).whole - iVar9;
          iVar20 = (pFVar17->y).whole - (pFVar18->y).whole;
          iVar16 = -iVar9;
          if (-1 < iVar9) {
            iVar16 = iVar9;
          }
          if (iVar20 < 0) {
            iVar20 = -iVar20;
          }
                    /* end of inlined section */
          if (iVar16 <= iVar20) {
            iVar16 = iVar20;
          }
          if (this_00 == (cXPersonImpl__123_903 *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
            iVar9 = (pFVar18->x).whole;
            fVar22 = 0.0;
            pcVar19 = this_00;
            while( true ) {
              fVar21 = fVar22 + 1.0 / (float)(iVar16 + 1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
              iVar20 = (int)((float)iVar9 + fVar22 * (float)((pFVar17->x).whole - iVar9) + 0.5);
              iVar9 = (pFVar18->y).whole;
              iVar9 = (int)((float)iVar9 + fVar22 * (float)((pFVar17->y).whole - iVar9) + 0.5);
                    /* end of inlined section */
              this_00 = pcVar19;
              if (consider_3513 != DAT_003d3ce4) {
                this_00 = *consider_3513;
                ppcVar15 = consider_3513;
                while( true ) {
                  pcVar10 = this_00->_vb901;
                  bVar7 = false;
                  if ((((iVar20 < (pcVar10->fRect).right.whole) &&
                       ((pcVar10->fRect).left.whole <= iVar20)) &&
                      (iVar9 < (pcVar10->fRect).bottom.whole)) &&
                     (bVar7 = true, iVar9 < (pcVar10->fRect).top.whole)) {
                    bVar7 = false;
                  }
                    /* end of inlined section */
                  if ((bVar7) ||
                     (ppcVar15 = ppcVar15 + 1, this_00 = pcVar19, ppcVar15 == DAT_003d3ce4)) break;
                  this_00 = *ppcVar15;
                }
              }
              if ((1.0 <= fVar21) || (this_00 != (cXPersonImpl__123_903 *)0x0)) break;
              iVar9 = (pFVar18->x).whole;
              fVar22 = fVar21;
              pcVar19 = this_00;
            }
          }
          if ((pFVar17 + 1 == destList.field0_0x0.finish) ||
             (this_00 != (cXPersonImpl__123_903 *)0x0)) break;
          iVar9 = (pFVar17->x).whole;
          pFVar6 = pFVar17 + 1;
          pFVar18 = pFVar17;
        }
      }
      if ((this_00 != (cXPersonImpl__123_903 *)0x0) &&
         (bVar7 = MoveOutOfWay__12cXPersonImplP6XRouteR8TileList(this_00,inRoute,&destList),
         pFVar5 = destList.field0_0x0.start, bVar7)) {
        for (; pFVar5 != destList.field0_0x0.finish; pFVar5 = pFVar5 + 1) {
        }
        pRVar12 = testRoute.field0_0x0.start;
        if ((destList.field0_0x0.start != (FTilePt *)0x0) &&
           ((int)destList.field0_0x0.end_of_storage - (int)destList.field0_0x0.start >> 3 != 0)) {
          free(destList.field0_0x0.start);
          pRVar12 = testRoute.field0_0x0.start;
        }
        for (; pRVar12 != testRoute.field0_0x0.finish; pRVar12 = pRVar12 + 1) {
        }
        goto LAB_0021bd00;
      }
    }
    for (; pFVar5 != destList.field0_0x0.finish; pFVar5 = pFVar5 + 1) {
    }
    if ((destList.field0_0x0.start != (FTilePt *)0x0) &&
       ((int)destList.field0_0x0.end_of_storage - (int)destList.field0_0x0.start >> 3 != 0)) {
      free(destList.field0_0x0.start);
    }
    testRoute.fSlot.field0_0x0.__vtable = (Slot__vtable *)_vt_4Slot;
    for (pRVar12 = testRoute.field0_0x0.start; pRVar12 != testRoute.field0_0x0.finish;
        pRVar12 = pRVar12 + 1) {
    }
    if (testRoute.field0_0x0.start == (RouteGoal *)0x0) {
      return false;
    }
    if ((int)testRoute.field0_0x0.end_of_storage - (int)testRoute.field0_0x0.start >> 4 == 0) {
      return false;
    }
    free(testRoute.field0_0x0.start);
  }
                    /* end of inlined section */
  return false;
joined_r0x0021b964:
  for (; pFVar5 != destList.field0_0x0.finish; pFVar5 = pFVar5 + 1) {
  }
  pRVar12 = testRoute.field0_0x0.start;
  if ((destList.field0_0x0.start != (FTilePt *)0x0) &&
     ((int)destList.field0_0x0.end_of_storage - (int)destList.field0_0x0.start >> 3 != 0)) {
    free(destList.field0_0x0.start);
    pRVar12 = testRoute.field0_0x0.start;
  }
  for (; pRVar12 != testRoute.field0_0x0.finish; pRVar12 = pRVar12 + 1) {
  }
LAB_0021bd00:
  testRoute.fSlot.field0_0x0.__vtable = (Slot__vtable *)_vt_4Slot;
  if ((testRoute.field0_0x0.start != (RouteGoal *)0x0) &&
     ((int)testRoute.field0_0x0.end_of_storage - (int)testRoute.field0_0x0.start >> 4 != 0)) {
    free(testRoute.field0_0x0.start);
                    /* end of inlined section */
  }
  return true;
}

static bool IsMoveOutOfWay(Interaction *action) {
	Interaction *this;
	
  bool bVar1;
  cXObject__142_982 *pcVar2;
  ObjSelector *this;
  int iVar3;
  
  pcVar2 = GetStackObject__C11Interaction(action);
  bVar1 = false;
  if (pcVar2 != (cXObject__142_982 *)0x0) {
    pcVar2 = GetStackObject__C11Interaction(action);
    this = (ObjSelector *)
           (*(code *)pcVar2->__vtable[1].SetLevel)
                     ((int)&pcVar2->_vb1019 + (int)*(short *)&pcVar2->__vtable[1].GetTreeID);
    iVar3 = GetGUID__11ObjSelector(this);
    if (iVar3 == 0x7c4) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
                    /* end of inlined section */
      bVar1 = action->fTreeTabEntryIndex == 3;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}

static bool IsAskedToMove(cXPerson *p) {
	int qsize;
	
  bool bVar1;
  Interaction *pIVar2;
  int iVar3;
  cXPerson__123_1079__vtable *pcVar4;
  
  pIVar2 = (Interaction *)
           (*(code *)p->__vtable->IsChild)((int)&p->_vb966 + (int)*(short *)&p->__vtable->IsVisitor)
  ;
  bVar1 = IsMoveOutOfWay__FPC11Interaction(pIVar2);
  if (!bVar1) {
    iVar3 = (*(code *)p->__vtable->SetNeighborID)
                      ((int)&p->_vb966 + (int)*(short *)&p->__vtable->GetNeighborID);
    iVar3 = iVar3 + -1;
    if (iVar3 < 0) {
      return false;
    }
    pcVar4 = p->__vtable;
    while( true ) {
      pIVar2 = (Interaction *)
               (*(code *)pcVar4->IsRouting)
                         ((int)&p->_vb966 + (int)*(short *)&pcVar4->IsSleeping,iVar3);
      bVar1 = IsMoveOutOfWay__FPC11Interaction(pIVar2);
      iVar3 = iVar3 + -1;
      if (bVar1) break;
      if (iVar3 < 0) {
        return false;
      }
      pcVar4 = p->__vtable;
    }
  }
  return true;
}

bool cXPersonImpl::MoveOutOfWay(Int priority) {
	ObjSelector *destSel;
	SInt16 newDestID;
	cXObjectImpl *destObj;
	RoutingSlot rs;
	Interaction moveOutOfWay;
	
  cXObject__21_1030 *pcVar1;
  cXObject__21_1030__vtable *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  cXPerson__123_1079__vtable *pcVar6;
  uint uVar7;
  ulong *puVar8;
  ulong uVar9;
  bool bVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  cXObject__142_982 *obj;
  int iVar14;
  long lVar15;
  RoutingSlot rs;
  Interaction moveOutOfWay;
  
  bVar10 = IsAskedToMove__FP8cXPerson(this->_vb1079);
  if (bVar10) {
    bVar10 = false;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    lVar12 = (*(code *)_5Globs_pObjectFolder->__vtable->DeletingInstance)
                       ((int)&_5Globs_pObjectFolder->__vtable +
                        (int)*(short *)&_5Globs_pObjectFolder->__vtable->CreatingInstance,0x7c4);
    bVar10 = false;
    if (lVar12 != 0) {
      pcVar1 = this->_vb901->_vb966;
      pcVar2 = pcVar1->__vtable;
      piVar11 = (int *)(*(code *)pcVar2->AdvanceGraphic)
                                 ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2->GetDebugName);
      lVar12 = (**(code **)(*piVar11 + 0x4c))
                         ((int)piVar11 + (int)*(short *)(*piVar11 + 0x48),lVar12);
      if (lVar12 == 0) {
        bVar10 = false;
      }
      else {
        pcVar1 = this->_vb901->_vb966;
        pcVar2 = pcVar1->__vtable;
        piVar11 = (int *)(*(code *)pcVar2->AdvanceGraphic)
                                   ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2->GetDebugName);
        lVar13 = (**(code **)(*piVar11 + 0x8c))
                           ((int)piVar11 + (int)*(short *)(*piVar11 + 0x88),lVar12);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
        lVar15 = 0;
        if (lVar13 != 0) {
          iVar3 = *(int *)((int)lVar13 + 4);
          lVar15 = (**(code **)(iVar3 + 0x454))((int)lVar13 + (int)*(short *)(iVar3 + 0x450));
        }
        iVar14 = (int)lVar15;
                    /* end of inlined section */
        iVar3 = *(int *)(*(int *)(iVar14 + 4) + 4);
        (**(code **)(iVar3 + 0x114))
                  (*(int *)(iVar14 + 4) + (int)*(short *)(iVar3 + 0x110),&this->_vb901->fLocation,
                   this->_vb901->fLevel,0,0);
        __11RoutingSlot(&rs);
        AllowDirection__11RoutingSloti(&rs,0);
        AllowDirection__11RoutingSloti(&rs,2);
        AllowDirection__11RoutingSloti(&rs,4);
        AllowDirection__11RoutingSloti(&rs,6);
        AllowAnyRotation__11RoutingSlot(&rs);
        SetDistances__11RoutingSlotiii(&rs,0x10,0x50,0x10);
        AllowAnyFacing__11RoutingSlot(&rs);
        SetMultiplier__11RoutingSlotQ211RoutingSlot16VerticalPositioni(&rs,kStanding,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
        obj = (cXObject__142_982 *)0x0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
        uVar4 = *(uint *)(iVar14 + 0xfc);
                    /* end of inlined section */
        uVar5 = *(undefined4 *)(uVar4 + 0x10);
        uVar7 = uVar4 + 7 & 7;
        puVar8 = (ulong *)((uVar4 + 7) - uVar7);
        *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | rs.field0_0x0._0_8_ >> (7 - uVar7) * 8;
        uVar7 = uVar4 & 7;
        *(ulong *)(uVar4 - uVar7) =
             rs.field0_0x0._0_8_ << uVar7 * 8 |
             *(ulong *)(uVar4 - uVar7) & 0xffffffffffffffffU >> (8 - uVar7) * 8;
        uVar7 = uVar4 + 0xf & 7;
        puVar8 = (ulong *)((uVar4 + 0xf) - uVar7);
        *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | rs.field0_0x0._8_8_ >> (7 - uVar7) * 8;
        uVar7 = uVar4 + 8 & 7;
        puVar8 = (ulong *)((uVar4 + 8) - uVar7);
        *puVar8 = rs.field0_0x0._8_8_ << uVar7 * 8 |
                  *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
        uVar7 = uVar4 + 0x17 & 7;
        puVar8 = (ulong *)((uVar4 + 0x17) - uVar7);
        *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 |
                  CONCAT44(rs.multipliers[0],rs.field0_0x0.__vtable) >> (7 - uVar7) * 8;
        uVar7 = uVar4 + 0x10 & 7;
        puVar8 = (ulong *)((uVar4 + 0x10) - uVar7);
        *puVar8 = CONCAT44(rs.multipliers[0],rs.field0_0x0.__vtable) << uVar7 * 8 |
                  *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
        uVar7 = uVar4 + 0x1f & 7;
        puVar8 = (ulong *)((uVar4 + 0x1f) - uVar7);
        *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | rs.multipliers._4_8_ >> (7 - uVar7) * 8;
        uVar7 = uVar4 + 0x18 & 7;
        puVar8 = (ulong *)((uVar4 + 0x18) - uVar7);
        *puVar8 = rs.multipliers._4_8_ << uVar7 * 8 |
                  *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
        uVar9 = CONCAT44(rs.snapTargetSlot,rs.rsFlags) | 0x2000;
        uVar7 = uVar4 + 0x27 & 7;
        puVar8 = (ulong *)((uVar4 + 0x27) - uVar7);
        *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | uVar9 >> (7 - uVar7) * 8;
        uVar7 = uVar4 + 0x20 & 7;
        puVar8 = (ulong *)((uVar4 + 0x20) - uVar7);
        *puVar8 = uVar9 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
        uVar7 = uVar4 + 0x2f & 7;
        puVar8 = (ulong *)((uVar4 + 0x2f) - uVar7);
        *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | rs._40_8_ >> (7 - uVar7) * 8;
        uVar7 = uVar4 + 0x28 & 7;
        puVar8 = (ulong *)((uVar4 + 0x28) - uVar7);
        *puVar8 = rs._40_8_ << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
        uVar7 = uVar4 + 0x37 & 7;
        puVar8 = (ulong *)((uVar4 + 0x37) - uVar7);
        *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | rs._48_8_ >> (7 - uVar7) * 8;
        uVar7 = uVar4 + 0x30 & 7;
        puVar8 = (ulong *)((uVar4 + 0x30) - uVar7);
        *puVar8 = rs._48_8_ << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
        uVar7 = uVar4 + 0x3f & 7;
        puVar8 = (ulong *)((uVar4 + 0x3f) - uVar7);
        *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | rs._56_8_ >> (7 - uVar7) * 8;
        uVar7 = uVar4 + 0x38 & 7;
        puVar8 = (ulong *)((uVar4 + 0x38) - uVar7);
        *puVar8 = rs._56_8_ << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
        *(undefined4 *)(uVar4 + 0x10) = uVar5;
        if (lVar15 != 0) {
          obj = *(cXObject__142_982 **)(iVar14 + 4);
        }
        rs.rsFlags = rs.rsFlags | 0x2000;
        __11InteractionP8cXPersonP8cXObjectii
                  (&moveOutOfWay,(cXPerson__142_985 *)this->_vb1079,obj,3,priority);
        pcVar6 = this->_vb1079->__vtable;
        lVar13 = (*(code *)pcVar6->GetJobSuitTex)
                           ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar6->GetSAnimator,
                            &moveOutOfWay);
        bVar10 = lVar13 != 0;
        if (bVar10) {
          ___8BString2(&moveOutOfWay.fName,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
        }
        else {
          pcVar1 = this->_vb901->_vb966;
          pcVar2 = pcVar1->__vtable;
          piVar11 = (int *)(*(code *)pcVar2->AdvanceGraphic)
                                     ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2->GetDebugName);
          (**(code **)(*piVar11 + 0x54))((int)piVar11 + (int)*(short *)(*piVar11 + 0x50),lVar12);
          ___8BString2(&moveOutOfWay.fName,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
        }
      }
    }
  }
                    /* end of inlined section */
  return bVar10;
}

bool cXPersonImpl::MoveOutOfWay(XRoute *inRoute, TileList &desiredPath) {
	XRoute *myRoute;
	FTilePt x0;
	FTilePt x1;
	ObjSelector *destSel;
	SInt16 newDestID;
	cXObjectImpl *destObj;
	RoutingSlot rs;
	cXPerson *router;
	Int priority;
	Interaction moveOutOfWay;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	XRoute *this;
	FTilePt *pt;
	FTilePt *nextPt;
	FTileRect rect;
	Int state;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	Int xinc;
	Int yinc;
	float tinc;
	FTilePt *this;
	FTilePt &other;
	Int xdel;
	FTilePt *this;
	FTilePt &other;
	float t;
	FTilePt curPt;
	FTilePt &pt1;
	FTilePt &pt2;
	float t;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	FTilePt delta;
	FTilePt origin;
	Int dir;
	Int x;
	Int y;
	XRoute testRoute;
	TileList destList;
	FTilePt *first;
	FTilePt *last;
	FTilePt *pointer;
	RouteGoal *first;
	RouteGoal *last;
	RouteGoal *pointer;
	XRoute *this;
	cXPerson *this;
	XRoute *this;
	cXPerson *moving;
	XRoute *this;
	
  FInt *pFVar1;
  undefined *puVar2;
  short sVar3;
  cXObjectImpl__123_901 *pcVar4;
  cXObject__21_1030 *pcVar5;
  cXObject__21_1030__vtable *pcVar6;
  cXPerson__123_1079__vtable *pcVar7;
  cXPerson__109_1171 *pcVar8;
  ulong *puVar9;
  bool bVar10;
  XRoute *pXVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  RouteGoal *pRVar15;
  void *pvVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int iVar20;
  ulong uVar21;
  int iVar22;
  int iVar23;
  cXObject__109_1077 *dest;
  cXObject__142_982 *obj;
  int iVar24;
  FTilePt *pFVar25;
  FTilePt *pFVar26;
  ulong uVar27;
  uint uVar28;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  long lVar29;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar30;
  FTilePt x0;
  FTilePt x1;
  FTilePt delta;
  undefined local_1d8 [8];
  FTilePt curPt;
  RoutingSlot rs;
  TileList destList;
  XRoute local_160;
  undefined4 local_b0;
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
  
  uVar27 = (ulong)(int)inRoute;
  uVar21 = (ulong)(int)this;
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
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
  bVar10 = IsAskedToMove__FP8cXPerson(this->_vb1079);
  if (bVar10) {
    return false;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  if ((uint)((int)(desiredPath->field0_0x0).finish - (int)(desiredPath->field0_0x0).start >> 3) < 2)
  {
    return false;
  }
  pXVar11 = GetCurrentRoute__12cXPersonImpl(this);
  if (pXVar11 == (XRoute *)0x0) {
    pFVar26 = (desiredPath->field0_0x0).start;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/XRouting.h */
                    /* end of inlined section */
    if (pXVar11->fMoving != (cXPerson__109_1171 *)0x0) {
      return false;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    pFVar26 = (desiredPath->field0_0x0).start;
  }
                    /* end of inlined section */
  pcVar4 = this->_vb901;
  uVar19 = (ulong)(int)pcVar4;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
  x0 = (FTilePt)0x0;
  x1 = (FTilePt)0x0;
  pFVar25 = (desiredPath->field0_0x0).finish;
  puVar2 = (undefined *)((int)&(pcVar4->fRect).right.whole + 3);
                    /* end of inlined section */
  uVar28 = (uint)puVar2 & 7;
  uVar14 = (uint)&pcVar4->fRect & 7;
  delta = (FTilePt)((*(long *)(puVar2 + -uVar28) << (7 - uVar28) * 8 |
                    uVar21 & 0xffffffffffffffffU >> (uVar28 + 1) * 8) & -1L << (8 - uVar14) * 8 |
                   *(ulong *)((int)&pcVar4->fRect - uVar14) >> uVar14 * 8);
  puVar2 = (undefined *)((int)&(pcVar4->fRect).left.whole + 3);
  uVar28 = (uint)puVar2 & 7;
  pFVar1 = &(pcVar4->fRect).top;
  uVar14 = (uint)pFVar1 & 7;
  uVar21 = (*(long *)(puVar2 + -uVar28) << (7 - uVar28) * 8 |
           uVar27 & 0xffffffffffffffffU >> (uVar28 + 1) * 8) & -1L << (8 - uVar14) * 8 |
           *(ulong *)((int)pFVar1 - uVar14) >> uVar14 * 8;
  puVar2 = (undefined *)((int)&delta.x.whole + 3);
  uVar28 = (uint)puVar2 & 7;
  puVar9 = (ulong *)(puVar2 + -uVar28);
  *puVar9 = *puVar9 & -1L << (uVar28 + 1) * 8 | (ulong)delta >> (7 - uVar28) * 8;
  puVar2 = local_1d8 + 7;
  uVar28 = (uint)puVar2 & 7;
  *(ulong *)(puVar2 + -uVar28) =
       *(ulong *)(puVar2 + -uVar28) & -1L << (uVar28 + 1) * 8 | uVar21 >> (7 - uVar28) * 8;
  local_1d8 = (undefined  [8])uVar21;
  uVar27 = 0;
  if (pFVar26 + 1 != pFVar25) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    iVar12 = (pFVar26->x).whole;
    pFVar25 = pFVar26;
    pFVar26 = pFVar26 + 1;
    do {
      iVar12 = (pFVar26->x).whole - iVar12;
      iVar22 = (pFVar26->y).whole - (pFVar25->y).whole;
      iVar20 = -iVar12;
      if (-1 < iVar12) {
        iVar20 = iVar12;
      }
      if (iVar22 < 0) {
        iVar22 = -iVar22;
      }
                    /* end of inlined section */
      if (iVar20 <= iVar22) {
        iVar20 = iVar22;
      }
      fVar30 = 0.0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
      iVar12 = (pFVar25->x).whole;
LAB_0021c370:
      bVar10 = false;
      iVar22 = (int)((float)iVar12 + fVar30 * (float)((pFVar26->x).whole - iVar12) + 0.5);
      uVar21 = (ulong)iVar22;
      curPt.x.whole = iVar22;
      iVar12 = (pFVar25->y).whole;
      iVar12 = (int)((float)iVar12 + fVar30 * (float)((pFVar26->y).whole - iVar12) + 0.5);
      uVar19 = (ulong)iVar12;
      curPt.y.whole = iVar12;
      if ((long)uVar21 < (long)delta.x.whole) {
        if ((long)local_1d8._4_4_ <= (long)uVar21) {
          if (((long)uVar19 < (long)delta.y.whole) &&
             (bVar10 = true, (long)uVar19 < (long)local_1d8._0_4_)) {
            bVar10 = false;
          }
        }
      }
                    /* end of inlined section */
      if (bVar10) {
        if (uVar27 == 0) {
          x0 = (FTilePt)CONCAT44(iVar22,iVar12);
          puVar2 = (undefined *)((int)&x0.x.whole + 3);
          uVar28 = (uint)puVar2 & 7;
          puVar9 = (ulong *)(puVar2 + -uVar28);
          *puVar9 = *puVar9 & -1L << (uVar28 + 1) * 8 | (ulong)x0 >> (7 - uVar28) * 8;
          uVar27 = 1;
        }
LAB_0021c460:
        fVar30 = fVar30 + 1.0 / (float)(iVar20 + 1);
        if (1.0 <= fVar30) goto LAB_0021c470;
        iVar12 = (pFVar25->x).whole;
        goto LAB_0021c370;
      }
      if (uVar27 != 1) goto LAB_0021c460;
      puVar2 = (undefined *)((int)&x1.x.whole + 3);
      uVar28 = (uint)puVar2 & 7;
      puVar9 = (ulong *)(puVar2 + -uVar28);
      *puVar9 = *puVar9 & -1L << (uVar28 + 1) * 8 | CONCAT44(iVar22,iVar12) >> (7 - uVar28) * 8;
      x1 = (FTilePt)CONCAT44(iVar22,iVar12);
      uVar27 = 2;
LAB_0021c470:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      if ((pFVar26 + 1 == (desiredPath->field0_0x0).finish) || (1 < uVar27)) break;
      iVar12 = (pFVar26->x).whole;
      pFVar25 = pFVar26;
      pFVar26 = pFVar26 + 1;
    } while( true );
  }
  if (uVar27 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    pFVar26 = (desiredPath->field0_0x0).start;
                    /* end of inlined section */
    pcVar4 = this->_vb901;
    puVar2 = (undefined *)((int)&(pFVar26->x).whole + 3);
    uVar28 = (uint)puVar2 & 7;
    uVar14 = (uint)pFVar26 & 7;
    x0 = (FTilePt)((*(long *)(puVar2 + -uVar28) << (7 - uVar28) * 8 |
                   uVar21 & 0xffffffffffffffffU >> (uVar28 + 1) * 8) & -1L << (8 - uVar14) * 8 |
                  *(ulong *)((int)pFVar26 - uVar14) >> uVar14 * 8);
    puVar2 = (undefined *)((int)&x0.x.whole + 3);
    uVar28 = (uint)puVar2 & 7;
    puVar9 = (ulong *)(puVar2 + -uVar28);
    *puVar9 = *puVar9 & -1L << (uVar28 + 1) * 8 | (ulong)x0 >> (7 - uVar28) * 8;
    puVar2 = (undefined *)((int)&(pcVar4->fLocation).x.whole + 3);
    uVar28 = (uint)puVar2 & 7;
    pFVar26 = &pcVar4->fLocation;
    uVar14 = (uint)pFVar26 & 7;
    x1 = (FTilePt)((*(long *)(puVar2 + -uVar28) << (7 - uVar28) * 8 |
                   (ulong)x0 & 0xffffffffffffffffU >> (uVar28 + 1) * 8) & -1L << (8 - uVar14) * 8 |
                  *(ulong *)((int)pFVar26 - uVar14) >> uVar14 * 8);
    puVar2 = (undefined *)((int)&x1.x.whole + 3);
    uVar28 = (uint)puVar2 & 7;
    puVar9 = (ulong *)(puVar2 + -uVar28);
    *puVar9 = *puVar9 & -1L << (uVar28 + 1) * 8 | (ulong)x1 >> (7 - uVar28) * 8;
  }
  else if (uVar27 < 2) {
    puVar2 = (undefined *)((int)&(pFVar26->x).whole + 3);
    uVar28 = (uint)puVar2 & 7;
    uVar14 = (uint)pFVar26 & 7;
    x1 = (FTilePt)((*(long *)(puVar2 + -uVar28) << (7 - uVar28) * 8 |
                   uVar19 & 0xffffffffffffffffU >> (uVar28 + 1) * 8) & -1L << (8 - uVar14) * 8 |
                  *(ulong *)((int)pFVar26 - uVar14) >> uVar14 * 8);
    puVar2 = (undefined *)((int)&x1.x.whole + 3);
    uVar28 = (uint)puVar2 & 7;
    puVar9 = (ulong *)(puVar2 + -uVar28);
    *puVar9 = *puVar9 & -1L << (uVar28 + 1) * 8 | (ulong)x1 >> (7 - uVar28) * 8;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  lVar17 = (*(code *)_5Globs_pObjectFolder->__vtable->DeletingInstance)
                     ((int)&_5Globs_pObjectFolder->__vtable +
                      (int)*(short *)&_5Globs_pObjectFolder->__vtable->CreatingInstance,0x7c4);
  if (lVar17 == 0) {
    return false;
  }
  pcVar5 = this->_vb901->_vb966;
  pcVar6 = pcVar5->__vtable;
  piVar13 = (int *)(*(code *)pcVar6->AdvanceGraphic)
                             ((int)&pcVar5->_vb899 + (int)*(short *)&pcVar6->GetDebugName);
  lVar17 = (**(code **)(*piVar13 + 0x4c))((int)piVar13 + (int)*(short *)(*piVar13 + 0x48),lVar17);
  if (lVar17 == 0) {
    return false;
  }
  pcVar5 = this->_vb901->_vb966;
  pcVar6 = pcVar5->__vtable;
  piVar13 = (int *)(*(code *)pcVar6->AdvanceGraphic)
                             ((int)&pcVar5->_vb899 + (int)*(short *)&pcVar6->GetDebugName);
  lVar18 = (**(code **)(*piVar13 + 0x8c))((int)piVar13 + (int)*(short *)(*piVar13 + 0x88),lVar17);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
  lVar29 = 0;
  if (lVar18 != 0) {
    iVar12 = *(int *)((int)lVar18 + 4);
    lVar29 = (**(code **)(iVar12 + 0x454))((int)lVar18 + (int)*(short *)(iVar12 + 0x450));
  }
  iVar22 = (int)lVar29;
                    /* end of inlined section */
  iVar12 = *(int *)(*(int *)(iVar22 + 4) + 4);
  (**(code **)(iVar12 + 0x114))
            (*(int *)(iVar22 + 4) + (int)*(short *)(iVar12 + 0x110),&this->_vb901->fLocation,
             this->_vb901->fLevel,0,0);
                    /* end of inlined section */
  __11RoutingSlot(&rs);
  puVar2 = (undefined *)((int)&delta.x.whole + 3);
  uVar28 = (uint)puVar2 & 7;
  puVar9 = (ulong *)(puVar2 + -uVar28);
  *puVar9 = *puVar9 & -1L << (uVar28 + 1) * 8 | (ulong)x1 >> (7 - uVar28) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
  destList.field0_0x0.finish = (FTilePt *)0x0;
  delta.x = x1.x;
  delta.y = x1.y;
  iVar12 = delta.x.whole - x0.x.whole;
  destList.field0_0x0.start = (FTilePt *)0x0;
  iVar20 = delta.y.whole - x0.y.whole;
  delta = (FTilePt)CONCAT44(iVar12,iVar20);
                    /* end of inlined section */
  if (iVar12 == 0 && iVar20 == 0) {
    return false;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
  iVar24 = -iVar12;
  if (-1 < iVar12) {
    iVar24 = iVar12;
  }
  iVar23 = -iVar20;
  if (-1 < iVar20) {
    iVar23 = iVar20;
  }
  if (iVar24 << 1 < iVar23) {
    uVar28 = 4;
  }
  else {
    uVar28 = 3;
    if (iVar23 << 1 < iVar24) {
      uVar28 = 2;
    }
  }
  if (iVar12 < 0) {
    if (uVar28 == 2) {
      uVar28 = 6;
    }
    else if (uVar28 == 3) {
      uVar28 = 5;
    }
  }
  if (iVar20 < 0) {
    if (uVar28 == 4) {
      uVar28 = 0;
      goto LAB_0021c6fc;
    }
    if (uVar28 < 5) {
      uVar14 = uVar28 + 2;
      if (uVar28 == 3) {
        uVar28 = 1;
        goto LAB_0021c6fc;
      }
    }
    else {
      uVar14 = uVar28 + 2;
      if (uVar28 == 5) {
        uVar28 = 7;
        goto LAB_0021c6fc;
      }
    }
  }
  else {
LAB_0021c6fc:
    uVar14 = uVar28 + 2;
  }
  AllowDirection__11RoutingSloti(&rs,uVar14 - (uVar14 & 0x18));
  AllowDirection__11RoutingSloti(&rs,(uVar28 + 6) - (uVar28 + 6 & 0x18));
  AllowAnyRotation__11RoutingSlot(&rs);
  SetDistances__11RoutingSlotiii(&rs,0x10,0x50,0x10);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
                    /* end of inlined section */
  rs.resolution = 8;
  AllowAnyFacing__11RoutingSlot(&rs);
  SetMultiplier__11RoutingSlotQ211RoutingSlot16VerticalPositioni(&rs,kStanding,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
  dest = (cXObject__109_1077 *)0x0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
  rs.rsFlags = rs.rsFlags | 0x2000;
                    /* end of inlined section */
  if (lVar29 != 0) {
    dest = *(cXObject__109_1077 **)(iVar22 + 4);
  }
  __6XRouteP8cXObjectT1PC11RoutingSlot
            (&local_160,(cXObject__109_1077 *)this->_vb1079->_vb966,dest,&rs);
  BuildGoalList__6XRoute(&local_160);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  destList.field0_0x0.start = (FTilePt *)0x0;
  destList.field0_0x0.finish = (FTilePt *)0x0;
                    /* end of inlined section */
  destList.field0_0x0.end_of_storage = (FTilePt *)0x0;
  bVar10 = FindPath__6XRouteR8TileList(&local_160,(TileList *)(Interaction *)&destList);
  pFVar26 = destList.field0_0x0.start;
  if (!bVar10) {
    AllowDirection__11RoutingSloti(&rs,uVar28);
    SetDistances__11RoutingSlotiii(&rs,0x10,0x50,0x50);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    pFVar26 = destList.field0_0x0.start;
  }
  for (; pFVar26 != destList.field0_0x0.finish; pFVar26 = pFVar26 + 1) {
  }
  if ((destList.field0_0x0.start != (FTilePt *)0x0) &&
     ((int)destList.field0_0x0.end_of_storage - (int)destList.field0_0x0.start >> 3 != 0)) {
    free(destList.field0_0x0.start);
  }
  local_160.fSlot.field0_0x0.__vtable = (Slot__vtable *)_vt_4Slot;
  for (pRVar15 = local_160.field0_0x0.start; pRVar15 != local_160.field0_0x0.finish;
      pRVar15 = pRVar15 + 1) {
  }
  if (local_160.field0_0x0.start != (RouteGoal *)0x0) {
    if ((int)local_160.field0_0x0.end_of_storage - (int)local_160.field0_0x0.start >> 4 == 0) {
      uVar28 = *(uint *)(iVar22 + 0xfc);
      goto LAB_0021c8cc;
    }
    free(local_160.field0_0x0.start);
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  uVar28 = *(uint *)(iVar22 + 0xfc);
LAB_0021c8cc:
                    /* end of inlined section */
  local_b0 = *(undefined4 *)(uVar28 + 0x10);
  uVar14 = uVar28 + 7 & 7;
  puVar9 = (ulong *)((uVar28 + 7) - uVar14);
  *puVar9 = *puVar9 & -1L << (uVar14 + 1) * 8 | rs.field0_0x0._0_8_ >> (7 - uVar14) * 8;
  uVar14 = uVar28 & 7;
  *(ulong *)(uVar28 - uVar14) =
       rs.field0_0x0._0_8_ << uVar14 * 8 |
       *(ulong *)(uVar28 - uVar14) & 0xffffffffffffffffU >> (8 - uVar14) * 8;
  uVar14 = uVar28 + 0xf & 7;
  puVar9 = (ulong *)((uVar28 + 0xf) - uVar14);
  *puVar9 = *puVar9 & -1L << (uVar14 + 1) * 8 | rs.field0_0x0._8_8_ >> (7 - uVar14) * 8;
  uVar14 = uVar28 + 8 & 7;
  puVar9 = (ulong *)((uVar28 + 8) - uVar14);
  *puVar9 = rs.field0_0x0._8_8_ << uVar14 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
  uVar14 = uVar28 + 0x17 & 7;
  puVar9 = (ulong *)((uVar28 + 0x17) - uVar14);
  *puVar9 = *puVar9 & -1L << (uVar14 + 1) * 8 |
            CONCAT44(rs.multipliers[0],rs.field0_0x0.__vtable) >> (7 - uVar14) * 8;
  uVar14 = uVar28 + 0x10 & 7;
  puVar9 = (ulong *)((uVar28 + 0x10) - uVar14);
  *puVar9 = CONCAT44(rs.multipliers[0],rs.field0_0x0.__vtable) << uVar14 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
  uVar14 = uVar28 + 0x1f & 7;
  puVar9 = (ulong *)((uVar28 + 0x1f) - uVar14);
  *puVar9 = *puVar9 & -1L << (uVar14 + 1) * 8 | rs.multipliers._4_8_ >> (7 - uVar14) * 8;
  uVar14 = uVar28 + 0x18 & 7;
  puVar9 = (ulong *)((uVar28 + 0x18) - uVar14);
  *puVar9 = rs.multipliers._4_8_ << uVar14 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
  uVar14 = uVar28 + 0x27 & 7;
  puVar9 = (ulong *)((uVar28 + 0x27) - uVar14);
  *puVar9 = *puVar9 & -1L << (uVar14 + 1) * 8 |
            CONCAT44(rs.snapTargetSlot,rs.rsFlags) >> (7 - uVar14) * 8;
  uVar14 = uVar28 + 0x20 & 7;
  puVar9 = (ulong *)((uVar28 + 0x20) - uVar14);
  *puVar9 = CONCAT44(rs.snapTargetSlot,rs.rsFlags) << uVar14 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
  uVar14 = uVar28 + 0x2f & 7;
  puVar9 = (ulong *)((uVar28 + 0x2f) - uVar14);
  *puVar9 = *puVar9 & -1L << (uVar14 + 1) * 8 | rs._40_8_ >> (7 - uVar14) * 8;
  uVar14 = uVar28 + 0x28 & 7;
  puVar9 = (ulong *)((uVar28 + 0x28) - uVar14);
  *puVar9 = rs._40_8_ << uVar14 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
  uVar14 = uVar28 + 0x37 & 7;
  puVar9 = (ulong *)((uVar28 + 0x37) - uVar14);
  *puVar9 = *puVar9 & -1L << (uVar14 + 1) * 8 | rs._48_8_ >> (7 - uVar14) * 8;
  uVar14 = uVar28 + 0x30 & 7;
  puVar9 = (ulong *)((uVar28 + 0x30) - uVar14);
  *puVar9 = rs._48_8_ << uVar14 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
  uVar14 = uVar28 + 0x3f & 7;
  puVar9 = (ulong *)((uVar28 + 0x3f) - uVar14);
  *puVar9 = *puVar9 & -1L << (uVar14 + 1) * 8 |
            CONCAT44(rs.resolution,rs.facing) >> (7 - uVar14) * 8;
  uVar14 = uVar28 + 0x38 & 7;
  puVar9 = (ulong *)((uVar28 + 0x38) - uVar14);
  *puVar9 = CONCAT44(rs.resolution,rs.facing) << uVar14 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar14) * 8;
  *(undefined4 *)(uVar28 + 0x10) = local_b0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/XRouting.h */
  pvVar16 = (void *)0x0;
  if (inRoute->fStart != (cXObject__109_1077 *)0x0) {
    pvVar16 = _dyncastimpl__7TreeSim4SCID(inRoute->fStart->_vb1946,cXPersonID);
  }
  sVar3 = sRam0000004a;
  if (pvVar16 != (void *)0x0) {
    iVar12 = (**(code **)(*(int *)((int)pvVar16 + 4) + 0x24c))
                       ((int)pvVar16 + (int)*(short *)(*(int *)((int)pvVar16 + 4) + 0x248));
    sVar3 = *(short *)(iVar12 + 0x4a);
  }
  obj = (cXObject__142_982 *)0x0;
  if (lVar29 != 0) {
    obj = *(cXObject__142_982 **)(iVar22 + 4);
  }
  __11InteractionP8cXPersonP8cXObjectii
            ((Interaction *)&destList,(cXPerson__142_985 *)this->_vb1079,obj,3,(int)sVar3);
  pcVar7 = this->_vb1079->__vtable;
  lVar18 = (*(code *)pcVar7->GetJobSuitTex)
                     ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar7->GetSAnimator,
                      (Interaction *)&destList);
  if (lVar18 == 0) {
    pcVar5 = this->_vb901->_vb966;
    pcVar6 = pcVar5->__vtable;
    piVar13 = (int *)(*(code *)pcVar6->AdvanceGraphic)
                               ((int)&pcVar5->_vb899 + (int)*(short *)&pcVar6->GetDebugName);
    (**(code **)(*piVar13 + 0x54))((int)piVar13 + (int)*(short *)(*piVar13 + 0x50),lVar17);
    ___8BString2((BString2 *)&local_160.fSlot,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/XRouting.h */
    pcVar8 = (cXPerson__109_1171 *)this->_vb1079;
                    /* end of inlined section */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/XRouting.h */
    *(undefined4 *)&inRoute->fMoveSuccess = 0;
    inRoute->fMoving = pcVar8;
                    /* end of inlined section */
    inRoute->fMoveInteractionID = local_160.fSlot.field0_0x0.nameIndex;
    ___8BString2((BString2 *)&local_160.fSlot,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
  }
                    /* end of inlined section */
  return lVar18 != 0;
}

XRoute* cXPersonImpl::GetCurrentRoute() {
	unsigned int n;
	
  XRoute *pXVar1;
  int iVar2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pXVar1 = (this->fRouteStack).start;
  iVar2 = ((int)(this->fRouteStack).finish - (int)pXVar1) * -0x3e7063e7 >> 2;
                    /* end of inlined section */
  if (iVar2 == 0) {
    return (XRoute *)0x0;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  return pXVar1 + iVar2 + -1;
}

TreeReturnCode cXPersonImpl::InitRoute(XRoute *route) {
	cXObjectImpl *to;
	RoutingSlot *rs;
	bool success;
	TreeReturnCode result;
	FTilePt finalPoint;
	FTilePt toLoc;
	FTilePt dirFinderPoint;
	XRoute *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	FTilePt *last;
	FTilePt *first;
	FTilePt *pointer;
	cXObject *obj;
	XRoute *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	unsigned int n;
	RoutingSlot *this;
	FTilePt nextToLastPoint;
	FTilePt delta;
	unsigned int n;
	Int &x;
	RoutingSlot *this;
	RoutingSlot *this;
	RoutingSlot *this;
	Int dir;
	Int y;
	Int x;
	Int dir;
	Int yinc;
	Int xinc;
	RoutingSlot *this;
	Int direction;
	Int &x;
	Int dir;
	RoutingSlot *this;
	int dir;
	Int y;
	Int x;
	Int dir;
	Int yinc;
	Int xinc;
	RoutingSlot *this;
	Int direction;
	Int &x;
	Int dir;
	Int dir;
	RoutingSlot *this;
	Int direction;
	Int &x;
	Int dir;
	
  undefined *puVar1;
  short sVar2;
  cXObject__109_1077 *pcVar3;
  cXObject__21_1030 *pcVar4;
  cXObject__21_1030__vtable *pcVar5;
  cXPerson__123_1079 *pcVar6;
  cXPerson__123_1079__vtable *pcVar7;
  code *pcVar8;
  ulong *puVar9;
  bool bVar10;
  int iVar11;
  RoutingSlot *pRVar12;
  RoomManager *pRVar13;
  RouteGoal *pRVar14;
  FTilePt *pFVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  FTilePt *pFVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  ulong in_t1;
  TreeReturnCode TVar27;
  FTilePt finalPoint;
  FTilePt toLoc;
  FTilePt dirFinderPoint;
  FTilePt nextToLastPoint;
  FTilePt delta;
  int local_90;
  int local_8c;
  
  if (route == (XRoute *)0x0) goto LAB_0021d2c0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/XRouting.h */
  pcVar3 = route->fDest;
  iVar11 = 0;
  if (pcVar3 != (cXObject__109_1077 *)0x0) {
    iVar11 = (*(code *)pcVar3->__vtable[1].GetObjectImplementation)
                       ((int)&pcVar3->_vb1946 + (int)*(short *)&pcVar3->__vtable[1].AdvanceGraphic);
  }
                    /* end of inlined section */
  pRVar12 = GetRoutingSlot__6XRoute(route);
  pcVar4 = this->_vb901->_vb966;
  pcVar5 = pcVar4->__vtable;
  uVar16 = (*(code *)pcVar5[1].ParseUIString)
                     ((int)&pcVar4->_vb899 + (int)*(short *)&pcVar5[1].RunTree);
  pRVar13 = GetRoomManager__11RoomManager();
  lVar17 = (*(code *)pRVar13->__vtable->ClearRoomPartitions)
                     ((int)&pRVar13->__vtable + (int)*(short *)&pRVar13->__vtable->GetHouse);
  bVar10 = false;
  if (lVar17 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    uVar16 = (ulong)(int)&this->fDestList;
    pFVar15 = (this->fDestList).field0_0x0.start;
    for (pFVar21 = pFVar15; pFVar21 != (this->fDestList).field0_0x0.finish; pFVar21 = pFVar21 + 1) {
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    (this->fDestList).field0_0x0.finish = pFVar15;
                    /* end of inlined section */
    bVar10 = FindPath__6XRouteR8TileList(route,&this->fDestList);
  }
  if (bVar10 == false) {
    TVar27 = kFalseComplete;
  }
  else {
    TVar27 = kEngaged;
    pRVar14 = GetCurrentGoal__6XRoute(route);
    this->fPersonData[0x25] = pRVar14->entryDirFlag;
    uVar16 = (ulong)(short)pRVar14->chairID;
    if (uVar16 != 0) {
      TVar27 = kFalseComplete;
      pcVar4 = this->_vb901->_vb966;
      pcVar5 = pcVar4->__vtable;
      uVar18 = (*(code *)pcVar5[1].GetLightingContribution)
                         ((int)&pcVar4->_vb899 + (int)*(short *)&pcVar5[1].CanContributeLight);
      if (uVar18 != 0) {
        iVar25 = (int)uVar18;
        lVar17 = (**(code **)(*(int *)(iVar25 + 4) + 0x3ec))
                           (iVar25 + *(short *)(*(int *)(iVar25 + 4) + 1000));
        if (lVar17 != 0) {
          pcVar4 = this->_vb901->_vb966;
          uVar16 = (ulong)(int)pcVar4;
          uVar19 = (*(code *)pcVar4->__vtable[1].IsRenderingRoot)
                             ((int)&pcVar4->_vb899 +
                              (int)*(short *)&pcVar4->__vtable[1].GetRenderLayer);
          if (uVar19 == uVar18) {
            TVar27 = kTrueComplete;
          }
          else {
            pcVar6 = this->_vb1079;
            pcVar7 = pcVar6->__vtable;
            sVar2 = *(short *)&pcVar7->AddAction;
            uVar20 = (**(code **)(*(int *)(iVar25 + 4) + 0x17c))
                               (iVar25 + *(short *)(*(int *)(iVar25 + 4) + 0x178),0x1a);
            pcVar8 = (code *)pcVar7->RemoveAction;
            in_t1 = (ulong)(int)pcVar8;
            lVar17 = (*pcVar8)((int)&pcVar6->_vb966 + (int)sVar2,uVar18,0,uVar20,0);
            TVar27 = kFalseComplete;
            uVar16 = uVar18;
            if (lVar17 != 0) {
              TVar27 = kStackLoaded;
            }
          }
        }
      }
      if (TVar27 == kFalseComplete) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/XRouting.h */
                    /* end of inlined section */
        route->fResult = 5;
      }
    }
  }
  if (TVar27 != kEngaged) {
LAB_0021ccf8:
    ResetGoals__6XRoute(route);
    return TVar27;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pFVar15 = (this->fDestList).field0_0x0.start;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  uVar22 = (int)(this->fDestList).field0_0x0.finish - (int)pFVar15 >> 3;
                    /* end of inlined section */
  if (uVar22 < 2) {
    TVar27 = kFalseComplete;
  }
  if (TVar27 != kEngaged) goto LAB_0021ccf8;
  pFVar21 = pFVar15 + (uVar22 - 1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  puVar1 = (undefined *)((int)&(pFVar21->x).whole + 3);
                    /* end of inlined section */
  uVar22 = (uint)puVar1 & 7;
  uVar24 = (uint)pFVar21 & 7;
  finalPoint = (FTilePt)((*(long *)(puVar1 + -uVar22) << (7 - uVar22) * 8 |
                         uVar16 & 0xffffffffffffffffU >> (uVar22 + 1) * 8) & -1L << (8 - uVar24) * 8
                        | *(ulong *)((int)pFVar21 - uVar24) >> uVar24 * 8);
  puVar1 = (undefined *)((int)&finalPoint.x.whole + 3);
  uVar22 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar22);
  *puVar9 = *puVar9 & -1L << (uVar22 + 1) * 8 | (ulong)finalPoint >> (7 - uVar22) * 8;
  uVar22 = iVar11 + 0xcfU & 7;
  uVar24 = iVar11 + 200U & 7;
  toLoc = (FTilePt)((*(long *)((iVar11 + 0xcfU) - uVar22) << (7 - uVar22) * 8 |
                    (long)(int)pFVar21 & 0xffffffffffffffffU >> (uVar22 + 1) * 8) &
                    -1L << (8 - uVar24) * 8 | *(ulong *)((iVar11 + 200U) - uVar24) >> uVar24 * 8);
  puVar1 = (undefined *)((int)&toLoc.x.whole + 3);
  uVar22 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar22);
  *puVar9 = *puVar9 & -1L << (uVar22 + 1) * 8 | (ulong)toLoc >> (7 - uVar22) * 8;
  puVar1 = (undefined *)((int)&dirFinderPoint.x.whole + 3);
  uVar22 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar22);
  *puVar9 = *puVar9 & -1L << (uVar22 + 1) * 8 | (ulong)finalPoint >> (7 - uVar22) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
  iVar25 = pRVar12->facing;
                    /* end of inlined section */
  delta.y = finalPoint.y;
  delta.x = finalPoint.x;
  if (iVar25 == -3) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    pFVar15 = pFVar15 + ((int)(this->fDestList).field0_0x0.finish - (int)pFVar15 >> 3) + -2;
    puVar1 = (undefined *)((int)&(pFVar15->x).whole + 3);
                    /* end of inlined section */
    uVar22 = (uint)puVar1 & 7;
    uVar24 = (uint)pFVar15 & 7;
    nextToLastPoint =
         (FTilePt)((*(long *)(puVar1 + -uVar22) << (7 - uVar22) * 8 |
                   in_t1 & 0xffffffffffffffffU >> (uVar22 + 1) * 8) & -1L << (8 - uVar24) * 8 |
                  *(ulong *)((int)pFVar15 - uVar24) >> uVar24 * 8);
    puVar1 = (undefined *)((int)&nextToLastPoint.x.whole + 3);
    uVar22 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar22);
    *puVar9 = *puVar9 & -1L << (uVar22 + 1) * 8 | (ulong)nextToLastPoint >> (7 - uVar22) * 8;
    puVar1 = (undefined *)((int)&delta.x.whole + 3);
    uVar22 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar22);
    *puVar9 = *puVar9 & -1L << (uVar22 + 1) * 8 | (ulong)finalPoint >> (7 - uVar22) * 8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
    iVar11 = delta.x.whole - nextToLastPoint.x.whole;
    iVar25 = delta.y.whole - nextToLastPoint.y.whole;
    delta = (FTilePt)CONCAT44(iVar11,iVar25);
    bVar10 = false;
    if ((iVar11 == 0) && (iVar25 == 0)) {
      bVar10 = true;
    }
                    /* end of inlined section */
    if (bVar10) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
      local_8c = 0;
      local_90 = 0;
      switch(this->_vb901->fData[1] & 7) {
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
      dirFinderPoint =
           (FTilePt)CONCAT44(delta.x.whole + local_8c * 0x10,delta.y.whole + local_90 * 0x10);
                    /* end of inlined section */
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
      dirFinderPoint = (FTilePt)CONCAT44(delta.x.whole + iVar11,delta.y.whole + iVar25);
                    /* end of inlined section */
    }
    goto LAB_0021d298;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
  dirFinderPoint = finalPoint;
                    /* end of inlined section */
  if ((iVar25 == -1) || (iVar25 == -2)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
    if ((pRVar12->rsFlags & 0xffU) == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
      bVar10 = __eq__C7FTilePtRC7FTilePt(&toLoc,&finalPoint);
                    /* end of inlined section */
      if (bVar10) {
        uVar22 = (int)*(short *)(iVar11 + 0x28);
LAB_0021cfc0:
        uVar24 = uVar22;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
        iVar11 = pRVar12->facing;
      }
      else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
        iVar25 = toLoc.x.whole - finalPoint.x.whole;
        iVar26 = toLoc.y.whole - finalPoint.y.whole;
        iVar11 = -iVar25;
        if (-1 < iVar25) {
          iVar11 = iVar25;
        }
        iVar23 = -iVar26;
        if (-1 < iVar26) {
          iVar23 = iVar26;
        }
        if (iVar11 << 1 < iVar23) {
          uVar24 = 4;
        }
        else {
          uVar24 = 3;
          if (iVar23 << 1 < iVar11) {
            uVar24 = 2;
          }
        }
        if (iVar25 < 0) {
          if (uVar24 == 2) {
            uVar24 = 6;
          }
          else if (uVar24 == 3) {
            uVar24 = 5;
          }
        }
        uVar22 = uVar24;
        if (-1 < iVar26) goto LAB_0021cfc0;
        if (uVar24 == 4) {
          uVar22 = 0;
          goto LAB_0021cfc0;
        }
        if (uVar24 < 5) {
          uVar22 = 1;
          if (uVar24 == 3) goto LAB_0021cfc0;
          iVar11 = pRVar12->facing;
        }
        else {
          if (uVar24 == 5) {
            uVar22 = 7;
            goto LAB_0021cfc0;
          }
          iVar11 = pRVar12->facing;
        }
      }
                    /* end of inlined section */
      if (iVar11 == -1) {
        uVar24 = uVar24 + 4;
      }
      nextToLastPoint = (FTilePt)0x0;
      switch(uVar24 & 7) {
      case 0:
        goto switchD_0021d17c_caseD_0;
      case 1:
        goto switchD_0021d17c_caseD_1;
      case 3:
        nextToLastPoint = (FTilePt)0x1;
      case 2:
        uVar22 = 1;
        break;
      case 4:
        goto switchD_0021d17c_caseD_4;
      case 5:
        goto switchD_0021d17c_caseD_5;
      case 6:
        goto switchD_0021d17c_caseD_6;
      case 7:
        goto switchD_0021d17c_caseD_7;
      default:
        goto switchD_0021d17c_caseD_8;
      }
      goto LAB_0021d264;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
    dirFinderPoint.x = toLoc.x;
                    /* end of inlined section */
    if ((pRVar12->rsFlags & 0x100U) == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
      iVar25 = dirFinderPoint.x.whole - delta.x.whole;
      iVar26 = toLoc.y.whole - delta.y.whole;
      iVar11 = -iVar25;
      if (-1 < iVar25) {
        iVar11 = iVar25;
      }
      iVar23 = -iVar26;
      if (-1 < iVar26) {
        iVar23 = iVar26;
      }
      if (iVar11 << 1 < iVar23) {
        uVar22 = 4;
      }
      else {
        uVar22 = 3;
        if (iVar23 << 1 < iVar11) {
          uVar22 = 2;
        }
      }
      if (iVar25 < 0) {
        if (uVar22 == 2) {
          uVar22 = 6;
        }
        else if (uVar22 == 3) {
          uVar22 = 5;
        }
      }
      if (-1 < iVar26) {
        iVar11 = pRVar12->facing;
        goto LAB_0021d128;
      }
      if (uVar22 == 4) {
        uVar22 = 0;
LAB_0021d124:
        iVar11 = pRVar12->facing;
      }
      else if (uVar22 < 5) {
        if (uVar22 == 3) {
          uVar22 = 1;
          goto LAB_0021d124;
        }
        iVar11 = pRVar12->facing;
      }
      else {
        if (uVar22 == 5) {
          uVar22 = 7;
          goto LAB_0021d124;
        }
        iVar11 = pRVar12->facing;
      }
LAB_0021d128:
                    /* end of inlined section */
      if (iVar11 == -1) {
        uVar22 = uVar22 + 4;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
      nextToLastPoint = (FTilePt)0x0;
      switch(uVar22 & 7) {
      case 0:
        goto switchD_0021d17c_caseD_0;
      case 1:
        goto switchD_0021d17c_caseD_1;
      case 3:
        nextToLastPoint = (FTilePt)0x1;
      case 2:
        uVar22 = 1;
        break;
      case 4:
        goto switchD_0021d17c_caseD_4;
      case 5:
        goto switchD_0021d17c_caseD_5;
      case 6:
        goto switchD_0021d17c_caseD_6;
      case 7:
        goto switchD_0021d17c_caseD_7;
      default:
        goto switchD_0021d17c_caseD_8;
      }
      goto LAB_0021d264;
    }
    puVar1 = (undefined *)((int)&dirFinderPoint.x.whole + 3);
    uVar22 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar22);
    *puVar9 = *puVar9 & -1L << (uVar22 + 1) * 8 | (ulong)toLoc >> (7 - uVar22) * 8;
    dirFinderPoint = toLoc;
    goto LAB_0021d29c;
  }
                    /* end of inlined section */
  iVar25 = *(int *)(*(int *)(iVar11 + 4) + 4);
  iVar25 = (**(code **)(iVar25 + 0x20c))(*(int *)(iVar11 + 4) + (int)*(short *)(iVar25 + 0x208),1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
  iVar11 = pRVar12->facing;
  puVar1 = (undefined *)((int)&dirFinderPoint.x.whole + 3);
                    /* end of inlined section */
  uVar22 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar22);
  *puVar9 = *puVar9 & -1L << (uVar22 + 1) * 8 | (ulong)finalPoint >> (7 - uVar22) * 8;
  dirFinderPoint = finalPoint;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
  nextToLastPoint = (FTilePt)0x0;
  switch(iVar25 + iVar11 & 7) {
  case 1:
switchD_0021d17c_caseD_1:
    nextToLastPoint = (FTilePt)0x100000000;
  case 0:
switchD_0021d17c_caseD_0:
    nextToLastPoint = (FTilePt)((ulong)nextToLastPoint | 0xffffffff);
    break;
  case 3:
    nextToLastPoint = (FTilePt)0x1;
  case 2:
    uVar22 = 1;
LAB_0021d264:
    nextToLastPoint = (FTilePt)((ulong)nextToLastPoint | (ulong)uVar22 << 0x20);
    break;
  case 5:
switchD_0021d17c_caseD_5:
    nextToLastPoint = (FTilePt)0xffffffff00000000;
  case 4:
switchD_0021d17c_caseD_4:
    nextToLastPoint = (FTilePt)((ulong)nextToLastPoint | 1);
    break;
  case 6:
    goto switchD_0021d17c_caseD_6;
  case 7:
switchD_0021d17c_caseD_7:
    nextToLastPoint = (FTilePt)0xffffffff;
    goto switchD_0021d17c_caseD_6;
  default:
    break;
  }
switchD_0021d17c_caseD_8:
  dirFinderPoint =
       (FTilePt)CONCAT44(dirFinderPoint.x.whole + nextToLastPoint.x.whole * 0x10,
                         dirFinderPoint.y.whole + nextToLastPoint.y.whole * 0x10);
  nextToLastPoint = (FTilePt)CONCAT44(nextToLastPoint.x.whole * 0x10,nextToLastPoint.y.whole * 0x10)
  ;
LAB_0021d298:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
LAB_0021d29c:
  bVar10 = false;
  if (dirFinderPoint.x.whole == finalPoint.x.whole) {
    bVar10 = dirFinderPoint.y.whole == finalPoint.y.whole;
  }
                    /* end of inlined section */
  if (bVar10) {
LAB_0021d2c0:
    TVar27 = kFalseComplete;
  }
  else {
    pFVar15 = (this->fDestList).field0_0x0.finish;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    if (pFVar15 == (this->fDestList).field0_0x0.end_of_storage) {
      insert_aux__t6vector2Z7FTilePtZt23__malloc_alloc_template1i0P7FTilePtRC7FTilePt
                (&(this->fDestList).field0_0x0,pFVar15,&dirFinderPoint);
    }
    else {
      puVar1 = (undefined *)((int)&(pFVar15->x).whole + 3);
      uVar22 = (uint)puVar1 & 7;
      puVar9 = (ulong *)(puVar1 + -uVar22);
      *puVar9 = *puVar9 & -1L << (uVar22 + 1) * 8 | (ulong)dirFinderPoint >> (7 - uVar22) * 8;
      uVar22 = (uint)pFVar15 & 7;
      *(ulong *)((int)pFVar15 - uVar22) =
           (long)dirFinderPoint << uVar22 * 8 |
           *(ulong *)((int)pFVar15 - uVar22) & 0xffffffffffffffffU >> (8 - uVar22) * 8;
      (this->fDestList).field0_0x0.finish = (this->fDestList).field0_0x0.finish + 1;
    }
                    /* end of inlined section */
    TVar27 = kEngaged;
  }
  return TVar27;
switchD_0021d17c_caseD_6:
  uVar22 = 0xffffffff;
  goto LAB_0021d264;
}

TreeReturnCode cXPersonImpl::TryGotoRelative(StackElem *elem, XPrimParam *param) {
	RoutingSlot rs;
	
  byte bVar1;
  cXObject__21_1030__vtable *pcVar2;
  TreeReturnCode TVar3;
  cXObjectImpl__123_901 *pcVar4;
  char cVar5;
  RoutingSlot rs;
  
  if (elem->fPrimState != 0) {
    TVar3 = TryGotoRoutingSlot__12cXPersonImplP9StackElemP11RoutingSlot
                      (this,elem,(RoutingSlot *)0x0);
    return TVar3;
  }
  __11RoutingSlot(&rs);
  SetMultiplier__11RoutingSlotQ211RoutingSlot16VerticalPositioni(&rs,kStanding,1);
  SetTileDistances__11RoutingSlotfff(&rs,1.0,1.0,1.0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
  rs.rsFlags = rs.rsFlags & 0xffffbfff;
  if ((((param->field0_0x0).gotoRelative.flags >> 1 ^ 1) & 1) != 0) {
    rs.rsFlags = rs.rsFlags | 0x4000;
  }
  rs.rsFlags = rs.rsFlags & 0xffff7fff;
  if (((param->field0_0x0).gotoRelative.flags >> 2 & 1) != 0) {
    rs.rsFlags = rs.rsFlags | 0x8000;
  }
                    /* end of inlined section */
  bVar1 = (param->field0_0x0).distanceTo.flags;
  switch((int)((bVar1 + 2) * 0x1000000) >> 0x18) {
  case 0:
    SetIsOnTopOfObject__11RoutingSlot(&rs);
    cVar5 = (param->field0_0x0).gotoRelative.relDirection;
    break;
  case 1:
    AllowDirection__11RoutingSloti(&rs,0);
    AllowDirection__11RoutingSloti(&rs,2);
    AllowDirection__11RoutingSloti(&rs,4);
    AllowDirection__11RoutingSloti(&rs,6);
    SetTileDistances__11RoutingSlotfff(&rs,1.0,2.0,1.0);
    cVar5 = (param->field0_0x0).gotoRelative.relDirection;
    break;
  case 2:
  case 4:
  case 6:
  case 8:
    AllowDirection__11RoutingSloti(&rs,(int)(char)bVar1);
    cVar5 = (param->field0_0x0).gotoRelative.relDirection;
    break;
  case 3:
    AllowDirection__11RoutingSloti(&rs,0);
    AllowDirection__11RoutingSloti(&rs,2);
    cVar5 = (param->field0_0x0).gotoRelative.relDirection;
    break;
  case 5:
    AllowDirection__11RoutingSloti(&rs,2);
    AllowDirection__11RoutingSloti(&rs,4);
    cVar5 = (param->field0_0x0).gotoRelative.relDirection;
    break;
  case 7:
    AllowDirection__11RoutingSloti(&rs,4);
    AllowDirection__11RoutingSloti(&rs,6);
    cVar5 = (param->field0_0x0).gotoRelative.relDirection;
    break;
  case 9:
    AllowDirection__11RoutingSloti(&rs,6);
    AllowDirection__11RoutingSloti(&rs,0);
    cVar5 = (param->field0_0x0).gotoRelative.relDirection;
    break;
  default:
    AllowDirection__11RoutingSloti(&rs,0);
    AllowDirection__11RoutingSloti(&rs,2);
    AllowDirection__11RoutingSloti(&rs,4);
    AllowDirection__11RoutingSloti(&rs,6);
    SetTileDistances__11RoutingSlotfff(&rs,1.0,2.0,1.0);
    cVar5 = (param->field0_0x0).gotoRelative.relDirection;
  }
  if (cVar5 == -1) {
    AllowAnyFacing__11RoutingSlot(&rs);
LAB_0021d600:
    TVar3 = TryGotoRoutingSlot__12cXPersonImplP9StackElemP11RoutingSlot(this,elem,&rs);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
  }
  else {
    if (cVar5 < '\0') {
      if (cVar5 == -2) {
        FaceTowardsObject__11RoutingSlot(&rs);
        goto LAB_0021d600;
      }
      pcVar4 = this->_vb901;
    }
    else {
      if (cVar5 < '\b') {
        SetFacingDirection__11RoutingSloti(&rs,(int)(param->field0_0x0).gotoRelative.relDirection);
        goto LAB_0021d600;
      }
      pcVar4 = this->_vb901;
    }
    pcVar2 = pcVar4->_vb966->__vtable;
    (*(code *)pcVar2[1].ReconStream)
              ((int)&pcVar4->_vb966->_vb899 + (int)*(short *)&pcVar2[1].GetWallBlockFlags);
    TVar3 = kFalseComplete;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
  }
  return TVar3;
}

bool cXPersonImpl::TryRoomRouting(XRoute *route) {
	cXPortal *best;
	SInt16 treeID;
	XRoute *this;
	XRoute *this;
	XRoute *this;
	XRoute *this;
	cXPortal *curPortal;
	
  cXObject__21_1030 *pcVar1;
  cXObject__21_1030__vtable *pcVar2;
  cXPerson__123_1079__vtable *pcVar3;
  bool bVar4;
  cXPortal__184_1099 *to;
  long lVar5;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/XRouting.h */
                    /* end of inlined section */
  if ((((route->fCurPortal != (cXPortal__109_1169 *)0x0) ||
       (bVar4 = InitPortalRoute__8cXPortalP12ObjectModuleP8cXObjectT2
                          (this->_vb901->fModule,this->_vb1079->_vb966,
                           (cXObject__21_1030 *)route->fDest), bVar4)) &&
      (to = FindBestPortal__8cXPortalP12ObjectModuleP8cXObjectT2
                      (this->_vb901->fModule,this->_vb1079->_vb966,(cXObject__21_1030 *)route->fDest
                      ), to != (cXPortal__184_1099 *)0x0)) &&
     ((pcVar1 = to->_vb1079->_vb966, pcVar2 = pcVar1->__vtable,
      lVar5 = (*(code *)pcVar2->GetSelFile)
                        ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2->GetBehavior,0xf), lVar5 != 0
      && (pcVar3 = this->_vb1079->__vtable,
         lVar5 = (*(code *)pcVar3->RemoveAction)
                           ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar3->AddAction,
                            to->_vb1079->_vb966,0,lVar5,0), lVar5 != 0)))) {
    BeginningPortalTree__8cXPortalP12ObjectModuleP8cXObjectP8cXPortal
              (this->_vb901->fModule,this->_vb1079->_vb966,to);
                    /* inlined from c:/eor/src2/games/sims/MSrc/XRouting.h */
    route->fCurPortal = (cXPortal__109_1169 *)to;
    return true;
                    /* end of inlined section */
  }
  return false;
}

TreeReturnCode cXPersonImpl::TryGetReachInfo(StackElem *elem, XPrimParam *param, cXObject **reachObject, cXObject **container, Int *slotNum, float *slotHeight) {
	PlacementSpec ps;
	
  ushort uVar1;
  short sVar2;
  cXObject__21_1030__vtable *pcVar3;
  cXObjectImpl__127_901 *obj;
  cXObject__21_1030 *pcVar4;
  ushort *puVar5;
  int iVar6;
  long lVar7;
  cXObjectImpl__123_901 *pcVar8;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  float fVar9;
  PlacementSpec ps;
  float local_90 [4];
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
  local_30 = (undefined4)unaff_s5;
  uStack_2c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  uVar1 = (param->field0_0x0).bparam[0];
  if (uVar1 == 2) {
    *reachObject = (cXObject__21_1030 *)0x0;
    *container = (cXObject__21_1030 *)0x0;
    *slotNum = 0;
    *slotHeight = -1.0;
    return kTrueComplete;
  }
  if (uVar1 == 0) {
    pcVar4 = this->_vb901->_vb966;
    pcVar3 = pcVar4->__vtable;
    lVar7 = (*(code *)pcVar3[1].GetLightingContribution)
                      ((int)&pcVar4->_vb899 + (int)*(short *)&pcVar3[1].CanContributeLight,
                       elem->fObjectID);
    pcVar4 = (cXObject__21_1030 *)lVar7;
    *reachObject = pcVar4;
    if (lVar7 == 0) {
      return kFalseComplete;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    obj = (cXObjectImpl__127_901 *)
          (*(code *)pcVar4->__vtable[1].GetObjectImplementation)
                    ((int)&pcVar4->_vb899 + (int)*(short *)&pcVar4->__vtable[1].AdvanceGraphic);
                    /* end of inlined section */
    __13PlacementSpecP12cXObjectImpl(&ps,obj);
    pcVar4 = (cXObject__21_1030 *)0x0;
    if (ps.container != (cXObjectImpl__123_901 *)0x0) {
      pcVar4 = (ps.container)->_vb966;
    }
    *container = pcVar4;
LAB_0021d8d4:
    *slotNum = ps.slotNum;
    pcVar4 = *container;
    if (pcVar4 == (cXObject__21_1030 *)0x0) {
      *slotHeight = 0.0;
    }
    else {
      if (*slotNum < 0) {
        return kFalseComplete;
      }
      iVar6 = (*(code *)pcVar4->__vtable[1].GetHilite)
                        ((int)&pcVar4->_vb899 + (int)*(short *)&pcVar4->__vtable[1].SetHilite);
      if (iVar6 <= *slotNum) {
        return kFalseComplete;
      }
      pcVar3 = (*container)->__vtable;
      local_90[0] = (float)(*(code *)pcVar3[1].GetDynamicToStaticLatency)
                                     ((int)&(*container)->_vb899 +
                                      (int)*(short *)&pcVar3[1].SetRenderLayer);
      fVar9 = AltToWorld__FRCf(local_90);
      *slotHeight = fVar9;
    }
    return kTrueComplete;
  }
  if (uVar1 != 1) {
    return kFalseComplete;
  }
  pcVar4 = this->_vb901->_vb966;
  pcVar3 = pcVar4->__vtable;
  lVar7 = (*(code *)pcVar3[1].GetLightingContribution)
                    ((int)&pcVar4->_vb899 + (int)*(short *)&pcVar3[1].CanContributeLight,
                     elem->fObjectID);
  *container = (cXObject__21_1030 *)lVar7;
  if (lVar7 == 0) {
    return kFalseComplete;
  }
  pcVar4 = this->_vb901->_vb966;
  pcVar3 = pcVar4->__vtable;
  pcVar4 = (cXObject__21_1030 *)
           (*(code *)pcVar3[1].Dirty)
                     ((int)&pcVar4->_vb899 + (int)*(short *)&pcVar3[1].UpdateSimFlags,0);
  *reachObject = pcVar4;
  sVar2 = (param->field0_0x0).find5WorstMotives.whoToSearch;
  if (sVar2 < 0) {
    pcVar8 = this->_vb901;
  }
  else {
    if (sVar2 < (short)(ushort)elem->fNumParams) {
      puVar5 = GetParams__9StackElem(elem);
      ps.slotNum = (int)(short)puVar5[(param->field0_0x0).find5WorstMotives.whoToSearch];
      goto LAB_0021d8d4;
    }
    pcVar8 = this->_vb901;
  }
  pcVar8->_vb1233->fError = 8;
  pcVar4 = this->_vb901->_vb966;
  pcVar3 = pcVar4->__vtable;
  (*(code *)pcVar3->SimEnabled)((int)&pcVar4->_vb899 + (int)*(short *)&pcVar3->SimIndependent,8);
  return kError;
}

TreeReturnCode cXPersonImpl::TryReach(StackElem *elem, XPrimParam *param) {
	ReachParam *rp;
	Int slotNum;
	cXObject *container;
	cXObject *reachObj;
	float slotHeight;
	Int grabDropEvt;
	bool doDrop;
	int level;
	cXObject *this;
	cXObject *this;
	
  SAnimator__vtable *pSVar1;
  cXObject__21_1030 *pcVar2;
  cXObject__21_1030__vtable *pcVar3;
  code *pcVar4;
  bool bVar5;
  TreeSim **ppTVar6;
  short sVar7;
  TreeReturnCode TVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char *pcVar13;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  cXObject__21_1030 *reachObj;
  cXObject__21_1030 *container;
  int slotNum;
  float slotHeight;
  int grabDropEvt;
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
  iVar9 = elem->fPrimState;
  if (iVar9 == 0) {
    TVar8 = TryGetReachInfo__12cXPersonImplP9StackElemP10XPrimParamPP8cXObjectT3PiPf
                      (this,elem,param,&reachObj,(cXObject__21_1030 **)((uint)&reachObj | 4),
                       (int *)((uint)&reachObj | 8),(float *)((uint)&reachObj | 0xc));
    if (TVar8 == kFalseComplete) {
      return kFalseComplete;
    }
    pSVar1 = this->fAnimator->__vtable;
    sVar7 = (*(code *)pSVar1[1].SAnimator)
                      (slotHeight,(int)&this->fAnimator->__vtable + (int)*(short *)(pSVar1 + 1),1);
    if (sVar7 != 0) {
      elem->fPrimState = 1;
      return kEngaged;
    }
LAB_0021da90:
    TVar8 = (TreeReturnCode)((param->field0_0x0).bparam[1] == 0);
  }
  else {
    if (iVar9 == 1) {
      grabDropEvt = -1;
      bVar5 = false;
      while (pSVar1 = this->fAnimator->__vtable,
            lVar10 = (*(code *)pSVar1[1].FollowOneStep)
                               ((int)&this->fAnimator->__vtable +
                                (int)*(short *)&pSVar1[1].BeginFollow,&grabDropEvt), lVar10 != 0) {
        if (grabDropEvt == 0) {
          bVar5 = true;
        }
      }
      pSVar1 = this->fAnimator->__vtable;
      lVar10 = (*(code *)pSVar1[1].Render)
                         ((int)&this->fAnimator->__vtable + (int)*(short *)&pSVar1[1].Initialize);
      if (lVar10 != 0) {
        bVar5 = true;
      }
      if (bVar5) {
        TVar8 = TryGetReachInfo__12cXPersonImplP9StackElemP10XPrimParamPP8cXObjectT3PiPf
                          (this,elem,param,&reachObj,(cXObject__21_1030 **)((uint)&reachObj | 4),
                           (int *)((uint)&reachObj | 8),(float *)((uint)&reachObj | 0xc));
        if (TVar8 == kFalseComplete) goto LAB_0021da90;
        iVar9 = 2;
        if ((param->field0_0x0).bparam[1] != 0) {
          if ((param->field0_0x0).bparam[0] == 0) {
            lVar10 = (*(code *)reachObj->__vtable->GetAttr)
                               ((int)&reachObj->_vb899 + (int)*(short *)&reachObj->__vtable->GetTemp
                                ,&this->_vb901->fLocation,this->_vb901->fLevel,this->_vb1079->_vb966
                                ,0);
            if (lVar10 != 0) {
              (*(code *)reachObj->__vtable->GetAdultAnimTable)
                        ((int)&reachObj->_vb899 + (int)*(short *)&reachObj->__vtable->GetModule,
                         &this->_vb901->fLocation,this->_vb901->fLevel,this->_vb1079->_vb966,0);
              pcVar2 = this->_vb901->_vb966;
              pcVar3 = pcVar2->__vtable;
              iVar9 = (int)&pcVar2->_vb899 + (int)*(short *)&pcVar3->SetData;
              uVar11 = (*(code *)reachObj->__vtable[1].SetData)
                                 ((int)&reachObj->_vb899 +
                                  (int)*(short *)&reachObj->__vtable[1].IsOccupied);
              uVar12 = (*(code *)reachObj->__vtable[1].UserCanPlace)
                                 ((int)&reachObj->_vb899 +
                                  (int)*(short *)&reachObj->__vtable[1].IsPartOfMe);
              pcVar4 = (code *)pcVar3->SetTemp;
              pcVar13 = "CT - Grab";
LAB_0021dcc4:
              (*pcVar4)(iVar9,uVar11,uVar12,pcVar13,0);
              elem->fPrimState = 2;
              goto LAB_0021dd54;
            }
            iVar9 = 3;
          }
          else {
            if ((param->field0_0x0).bparam[0] != 1) {
              return kEngaged;
            }
            uVar11 = (*(code *)container->__vtable[1].GetPlacementInfo)
                               ((int)&container->_vb899 +
                                (int)*(short *)&container->__vtable[1].FindGoodLocation);
            if (reachObj != (cXObject__21_1030 *)0x0) {
              pcVar3 = reachObj->__vtable;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
                    /* end of inlined section */
              sVar7 = *(short *)&pcVar3->GetTemp;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
              ppTVar6 = &reachObj->_vb899;
              if (container == (cXObject__21_1030 *)0x0) {
                    /* end of inlined section */
                iVar9 = 200;
              }
              else {
                iVar9 = (*(code *)container->__vtable[1].GetObjectImplementation)
                                  ((int)&container->_vb899 +
                                   (int)*(short *)&container->__vtable[1].AdvanceGraphic);
                iVar9 = iVar9 + 200;
              }
              lVar10 = (*(code *)pcVar3->GetAttr)
                                 ((int)ppTVar6 + (int)sVar7,iVar9,uVar11,container,slotNum);
              if (lVar10 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
                    /* end of inlined section */
                pcVar3 = reachObj->__vtable;
                sVar7 = *(short *)&pcVar3->GetModule;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
                ppTVar6 = &reachObj->_vb899;
                if (container == (cXObject__21_1030 *)0x0) {
                  iVar9 = 0;
                    /* end of inlined section */
                }
                else {
                  iVar9 = (*(code *)container->__vtable[1].GetObjectImplementation)
                                    ((int)&container->_vb899 +
                                     (int)*(short *)&container->__vtable[1].AdvanceGraphic);
                }
                (*(code *)pcVar3->GetAdultAnimTable)
                          ((int)ppTVar6 + (int)sVar7,iVar9 + 200,uVar11,container,slotNum);
                pcVar2 = this->_vb901->_vb966;
                pcVar3 = pcVar2->__vtable;
                iVar9 = (int)&pcVar2->_vb899 + (int)*(short *)&pcVar3->SetData;
                uVar11 = (*(code *)reachObj->__vtable[1].SetData)
                                   ((int)&reachObj->_vb899 +
                                    (int)*(short *)&reachObj->__vtable[1].IsOccupied);
                uVar12 = (*(code *)reachObj->__vtable[1].UserCanPlace)
                                   ((int)&reachObj->_vb899 +
                                    (int)*(short *)&reachObj->__vtable[1].IsPartOfMe);
                pcVar4 = (code *)pcVar3->SetTemp;
                pcVar13 = "CT - Put";
                goto LAB_0021dcc4;
              }
            }
            iVar9 = 3;
          }
        }
        elem->fPrimState = iVar9;
      }
    }
    else {
      if (iVar9 == 2) {
        pSVar1 = this->fAnimator->__vtable;
        lVar10 = (*(code *)pSVar1[1].Render)
                           ((int)&this->fAnimator->__vtable + (int)*(short *)&pSVar1[1].Initialize);
        if (lVar10 == 0) {
          return kEngaged;
        }
        pSVar1 = this->fAnimator->__vtable;
        (*(code *)pSVar1[1].Reset)
                  ((int)&this->fAnimator->__vtable + (int)*(short *)&pSVar1[1].Update);
        return kTrueComplete;
      }
      if (iVar9 != 3) {
        return kError;
      }
      pSVar1 = this->fAnimator->__vtable;
      lVar10 = (*(code *)pSVar1[1].Render)
                         ((int)&this->fAnimator->__vtable + (int)*(short *)&pSVar1[1].Initialize);
      if (lVar10 != 0) {
        pSVar1 = this->fAnimator->__vtable;
        (*(code *)pSVar1[1].Reset)
                  ((int)&this->fAnimator->__vtable + (int)*(short *)&pSVar1[1].Update);
        return kFalseComplete;
      }
    }
LAB_0021dd54:
    TVar8 = kEngaged;
  }
  return TVar8;
}

TreeReturnCode cXPersonImpl::TryElement(StackElem *elem, BehaviorNode *node) {
	TreeReturnCode result;
	XPrimParam *param;
	BehaviorNode *this;
	
  SAnimator__vtable *pSVar1;
  TreeReturnCode TVar2;
  ushort *param;
  
                    /* inlined from /eor/projects/sims/Qdata/Bhavdata.h */
                    /* end of inlined section */
  param = node->param;
  switch((int)(((node->_treePrimID & 0x7fff) - 3) * 0x10000) >> 0x10) {
  case 0:
    TVar2 = TryFindBestAction__12cXPersonImplP9StackElem(this,elem);
    break;
  default:
    TVar2 = TryElement__12cXObjectImplP9StackElemP12BehaviorNode
                      ((cXObjectImpl__127_901 *)this->_vb901,elem,node);
    break;
  case 3:
    TVar2 = TryChangeSuit__12cXPersonImplP9StackElemP10XPrimParam(this,elem,(XPrimParam *)param);
    break;
  case 0xe:
    TVar2 = TryIdleForInput__12cXPersonImplP9StackElemP10XPrimParam(this,elem,(XPrimParam *)param);
    break;
  case 0x13:
    TVar2 = TryLookTowards__12cXPersonImplP9StackElemP10XPrimParam(this,elem,(XPrimParam *)param);
    break;
  case 0x18:
    TVar2 = TryGotoRelative__12cXPersonImplP9StackElemP10XPrimParam(this,elem,(XPrimParam *)param);
    break;
  case 0x1a:
    TVar2 = TrySetMotiveDelta__12cXPersonImplP9StackElemP10XPrimParam(this,elem,(XPrimParam *)param)
    ;
    break;
  case 0x1b:
    TVar2 = TryGosubFoundAction__12cXPersonImplP9StackElem(this,elem);
    break;
  case 0x22:
    TVar2 = TryTestInteractingWith__12cXPersonImplP9StackElemP10XPrimParam
                      (this,elem,(XPrimParam *)param);
    break;
  case 0x29:
    pSVar1 = this->fAnimator->__vtable;
    TVar2 = (*(code *)pSVar1->StopReachAnimation)
                      ((int)&this->fAnimator->__vtable + (int)*(short *)&pSVar1->IsReachDone);
    break;
  case 0x2a:
    TVar2 = TryGotoRoutingSlot__12cXPersonImplP9StackElemP10XPrimParam
                      (this,elem,(XPrimParam *)param);
    break;
  case 0x2c:
    TVar2 = TryReach__12cXPersonImplP9StackElemP10XPrimParam(this,elem,(XPrimParam *)param);
  }
  return TVar2;
}

bool cXPersonImpl::Simulate(SInt32 ticks) {
	bool engaged;
	MotiveInc *i;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	float &motive;
	float inc;
	float limit;
	
  SAnimator *pSVar1;
  cXPerson__123_1079__vtable *pcVar2;
  cXObject__21_1030 *pcVar3;
  cXObject__21_1030__vtable *pcVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  RoomManager *pRVar8;
  int iVar9;
  float *pfVar10;
  MotiveInc *pMVar11;
  long lVar12;
  undefined8 uVar13;
  MotiveInc *pMVar14;
  float fVar15;
  float fVar16;
  
  bVar6 = Simulate__12cXObjectImpli((cXObjectImpl__127_901 *)this->_vb901,ticks);
  if (bVar6) {
    if (ticks < this->fLastMotiveTick + 0x3c) {
      pSVar1 = this->fAnimator;
    }
    else {
      this->fLastMotiveTick = ticks;
      pcVar2 = this->_vb1079->__vtable;
      (*(code *)pcVar2->GetIdleState)
                ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar2->GetNPCharacter);
      pSVar1 = this->fAnimator;
    }
    (*(code *)pSVar1->__vtable[1].SetAnimDisplacements)
              ((int)&pSVar1->__vtable + (int)*(short *)&pSVar1->__vtable[1].TryChangeSuit);
    if (this->fCurrentRoom == -5) {
      uVar7 = this->fPersonData[0x1b];
    }
    else {
      pRVar8 = GetRoomManager__11RoomManager();
      fVar15 = (float)(**(code **)(pRVar8->__vtable + 1))
                                ((int)&pRVar8->__vtable +
                                 (int)*(short *)&pRVar8->__vtable->GetRoomAmbientLight,
                                 this->fCurrentRoom);
      (this->fMotives).Motive[0xd] = fVar15;
      uVar7 = this->fPersonData[0x1b];
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    pMVar14 = (this->fMotiveIncs).start;
                    /* end of inlined section */
    this->fPersonData[0x1b] = uVar7 + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    if (pMVar14 != (this->fMotiveIncs).finish) {
      iVar9 = pMVar14->whichMotive;
      do {
        fVar16 = pMVar14->incPerTick;
        fVar15 = pMVar14->limit;
        pfVar10 = (this->fMotives).Motive + iVar9;
        if (fVar16 < 0.0) {
          if (fVar15 < *pfVar10) {
            fVar16 = *pfVar10 + fVar16;
            bVar5 = fVar16 < fVar15;
            *pfVar10 = fVar16;
            goto LAB_0021dff8;
          }
          pMVar11 = (this->fMotiveIncs).finish;
        }
        else if (*pfVar10 < fVar15) {
          fVar16 = *pfVar10 + fVar16;
          bVar5 = fVar15 < fVar16;
          *pfVar10 = fVar16;
LAB_0021dff8:
          if (bVar5) {
            *pfVar10 = fVar15;
          }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
          pMVar11 = (this->fMotiveIncs).finish;
        }
        else {
          pMVar11 = (this->fMotiveIncs).finish;
        }
                    /* end of inlined section */
        pMVar14 = pMVar14 + 1;
        if (pMVar14 == pMVar11) break;
        iVar9 = pMVar14->whichMotive;
      } while( true );
    }
    if (ticks % 10 == 0) {
      pcVar2 = this->_vb1079->__vtable;
      lVar12 = (**(code **)&pcVar2->field_0x164)
                         ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar2->field_0x160);
      if (lVar12 == 0) {
        if (this->_vb901->fData[0x22] == 0) {
          pcVar2 = this->_vb1079->__vtable;
          lVar12 = (**(code **)&pcVar2->field_0x154)
                             ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar2->field_0x150);
          if (lVar12 == 0) {
            pcVar2 = this->_vb1079->__vtable;
            uVar13 = (**(code **)&pcVar2->field_0x15c)
                               ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar2->field_0x158);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
            (*(code *)_5Globs_pHouse->__vtable[1].Destroy)
                      ((int)&_5Globs_pHouse->__vtable +
                       (int)*(short *)&_5Globs_pHouse->__vtable[1].Initialize,uVar13);
            uVar7 = this->fPersonData[1];
          }
          else {
            uVar7 = this->fPersonData[1];
          }
        }
        else {
          uVar7 = this->fPersonData[1];
        }
      }
      else {
        uVar7 = this->fPersonData[1];
      }
    }
    else {
      uVar7 = this->fPersonData[1];
    }
    if (uVar7 != 0) {
      pcVar3 = this->_vb901->_vb966;
      pcVar4 = pcVar3->__vtable;
      (*(code *)pcVar4->GetObjectProbe)
                ((int)&pcVar3->_vb899 + (int)*(short *)&pcVar4->SetAttr,0x3b8cc8);
      this->fPersonData[1] = 0;
    }
  }
  return bVar6;
}

SInt32 cXPersonImpl::ReconType() {
  return 0x50455253;
}

void cXPersonImpl::ReconStream(ReconBuffer *r, SInt32 version, bool placeHolder) {
	int i;
	float sucker[28];
	ReconBuffer *this;
	Int actionCount;
	Queue<Interaction,8> *this;
	int cnt;
	ReconBuffer *this;
	Queue<Interaction,8> *this;
	Interaction &elem;
	Interaction &_ctor_arg;
	Interaction *this;
	QueueSizeType depth;
	
  SAnimator__vtable *pSVar1;
  cXPerson__123_1079__vtable *pcVar2;
  uint uVar3;
  Mode__6_4959 MVar4;
  long lVar5;
  ushort uVar6;
  int iVar7;
  float *pfVar8;
  cXPerson__123_1079 *pcVar9;
  ObjectRecord *dummy;
  ushort *puVar10;
  int iVar11;
  Interaction *pIVar12;
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
  float sucker [28];
  int actionCount;
  int local_bc;
  uint local_b8;
  uint local_b4;
  vector_ObjectRecord___malloc_alloc_template_0___ *local_b0;
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
  
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  ReconStream__12cXObjectImplP11ReconBufferib
            ((cXObjectImpl__127_901 *)this->_vb901,r,version,placeHolder);
  if (10 >= version) {
    ReconFloat__11ReconBufferPfi(r,sucker,0x1c);
  }
  local_b8 = (uint)(version < 0x2c);
  local_b4 = (uint)(version < 0x2d);
  if (2 < version) {
    pSVar1 = this->fAnimator->__vtable;
    (*(code *)pSVar1[1].IsFollowing)
              ((int)&this->fAnimator->__vtable + (int)*(short *)&pSVar1[1].EndFollow,r,version);
    if (3 < version) {
      ReconFloat__11ReconBufferPfi(r,(this->fMotives).Motive,0x10);
    }
    if (version < 8) {
                    /* end of inlined section */
      pfVar8 = (this->fMotives).oldMotive + 0xf;
      if (r->fMode == kReading) {
        iVar7 = 0xf;
        do {
          *pfVar8 = 0.0;
          iVar7 = iVar7 + -1;
          pfVar8 = pfVar8 + -1;
        } while (-1 < iVar7);
      }
    }
    else {
      ReconFloat__11ReconBufferPfi(r,(this->fMotives).oldMotive,0x10);
    }
  }
  if (10 < version) {
    if (version < 0x29) {
      Recon16__11ReconBufferPsi(r,this->fPersonData,0x40);
      pcVar9 = this->_vb1079;
    }
    else {
      Recon16__11ReconBufferPsi(r,this->fPersonData,0x50);
      pcVar9 = this->_vb1079;
    }
  }
  else {
    pcVar9 = this->_vb1079;
  }
  lVar5 = (**(code **)&pcVar9->__vtable->field_0x184)
                    ((int)&pcVar9->_vb966 + (int)*(short *)&pcVar9->__vtable->field_0x180);
  uVar6 = 10;
  if (lVar5 != 0) {
    uVar6 = 0x14;
  }
  this->fPersonData[0x3a] = uVar6;
  pcVar2 = this->_vb1079->__vtable;
  lVar5 = (**(code **)&pcVar2->field_0x174)
                    ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar2->field_0x170);
  this->fPersonData[0x41] = (ushort)(lVar5 == 0);
  if (0xc < version) {
                    /* end of inlined section */
    DoContainerStream__H2Zt6vector2Z6XRouteZt23__malloc_alloc_template1i0Z6XRoute_RX01PX11P11ReconBufferi_v
              (&this->fRouteStack,(this->fRouteStack).start,r,version);
  }
  if (0x2a < version) {
                    /* end of inlined section */
    DoStream__11InteractionP11ReconBufferi(&this->fCurrentAction,r,version);
    DoStream__11InteractionP11ReconBufferi(&this->fLastAction,r,version);
    local_b0 = &this->fObjectRecords;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
    actionCount = (this->fTreeQueue).fLast - (this->fTreeQueue).fFirst;
                    /* end of inlined section */
    ReconInt__11ReconBufferPii(r,&actionCount,1);
    if (actionCount < 1) {
      dummy = (this->fObjectRecords).start;
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
      MVar4 = r->fMode;
      iVar7 = 0;
      while( true ) {
                    /* end of inlined section */
        local_bc = iVar7 + 1;
        if (MVar4 == kReading) {
          __11Interaction((Interaction *)sucker);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
          uVar3 = (this->fTreeQueue).fLast;
          if (uVar3 - (this->fTreeQueue).fFirst < 8) {
            pIVar12 = (this->fTreeQueue).fElems + (uVar3 & 7);
            pIVar12->m_pNextItem = (Interaction *)sucker[0];
            puVar10 = pIVar12->fStackVars;
            pIVar12->fType = (Type)sucker[1];
            iVar11 = 3;
            pfVar8 = sucker + 6;
            pIVar12->fPerson = (cXPersonImpl__142_963 *)sucker[2];
            pIVar12->fStackObject = (cXObjectImpl__15_3423 *)sucker[3];
            pIVar12->fIconObject = (cXObjectImpl__15_3423 *)sucker[4];
            pIVar12->fTreeTabEntryIndex = (int)sucker[5];
            do {
              uVar6 = *(ushort *)pfVar8;
              iVar11 = iVar11 + -1;
              pfVar8 = (float *)((int)pfVar8 + 2);
              *puVar10 = uVar6;
              puVar10 = puVar10 + 1;
            } while (iVar11 != -1);
            pIVar12->fPriority = (int)sucker[8];
            pIVar12->fTreeID = sucker[9]._0_2_;
            pIVar12->fAttenuation = sucker[10];
            __as__8BString2RC8BString2(&pIVar12->fName,(BString2 *)(sucker + 0xb));
            pIVar12->fMenuItem = (int)sucker[12];
            pIVar12->fSubMenuItem = (int)sucker[13];
            pIVar12->fID = (int)sucker[14];
            pIVar12->fFlags = (int)sucker[15];
            (this->fTreeQueue).fLast = (this->fTreeQueue).fLast + 1;
          }
                    /* end of inlined section */
          ___8BString2((BString2 *)(sucker + 0xb),2);
        }
        iVar11 = local_bc;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
                    /* end of inlined section */
        DoStream__11InteractionP11ReconBufferi
                  ((this->fTreeQueue).fElems + ((this->fTreeQueue).fFirst + iVar7 & 7),r,version);
        if (actionCount <= iVar11) break;
        MVar4 = r->fMode;
        iVar7 = iVar11;
      }
                    /* end of inlined section */
      dummy = (this->fObjectRecords).start;
    }
    DoContainerStream__H2Zt6vector2Z12ObjectRecordZt23__malloc_alloc_template1i0Z12ObjectRecord_RX01PX11P11ReconBufferi_v
              (local_b0,dummy,r,version);
  }
  if (local_b8 == 0) {
                    /* end of inlined section */
    DoContainerStream__H2Zt6vector2Z9MotiveIncZt23__malloc_alloc_template1i0Z9MotiveInc_RX01PX11P11ReconBufferi_v
              (&this->fMotiveIncs,(this->fMotiveIncs).start,r,version);
  }
  if (local_b4 != 0) {
    this->fPersonData[0x1a] = 0;
    this->fPersonData[1] = 0;
    this->fPersonData[8] = 0;
    this->fPersonData[0x15] = 0;
    this->fPersonData[0x16] = 0;
    this->fPersonData[0x17] = 0;
    this->fPersonData[0x18] = 0;
    this->fPersonData[0x19] = 0;
  }
  return;
}

int cXPersonImpl::GetDynamicToStaticLatency() {
  return 0x7fffffff;
}

float cXPersonImpl::GetMotive(int i) {
  return (this->fMotives).Motive[i];
}

float* cXPersonImpl::GetMotiveRef(int i) {
  return (this->fMotives).Motive + i;
}

float* cXPersonImpl::GetOldMotiveRef(int i) {
  return (this->fMotives).oldMotive + i;
}

void cXPersonImpl::SetMotive(int i, float val) {
  (this->fMotives).Motive[i] = val;
  return;
}

void cXPersonImpl::SimMotives() {
  if ((this->fPersonData[0x1d] == 0) && (this->_vb901->fData[0x22] == 0)) {
    Sim__7Motives(&this->fMotives);
  }
  return;
}

void cXPersonImpl::CalcHappy() {
	float motSum;
	float wghtSum;
	MotiveCurve *c;
	float mot;
	float wght;
	MotiveCurve *this;
	PiecewiseFn *this;
	float x;
	float diff;
	int i;
	
  cXPerson__123_1079__vtable *pcVar1;
  int iVar2;
  PiecewisePt *pPVar3;
  PiecewisePt *pPVar4;
  long lVar5;
  MotiveCurve *pMVar6;
  int iVar7;
  MotiveCurve *pMVar8;
  int iVar9;
  MotiveCurveArray_7_ *pMVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar14 = 0.0;
  fVar13 = 0.0;
  pcVar1 = this->_vb1079->__vtable;
  lVar5 = (**(code **)&pcVar1->field_0x16c)
                    ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar1->field_0x168);
  if (lVar5 == 0) {
    pMVar10 = &sAdultHappyWeightCurves;
  }
  else {
    pMVar10 = &sChildHappyWeightCurves;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
  pMVar6 = (pMVar10->field0_0x0).fCurves;
                    /* end of inlined section */
  if (pMVar6 == pMVar6 + (pMVar10->field0_0x0).fNumCurves) {
    fVar13 = 0.0 / fVar13;
  }
  else {
    do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
      iVar2 = (pMVar6->field0_0x0).fNumPoints;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Piecewise.h */
      fVar12 = (this->fMotives).Motive[pMVar6->fMotive];
      if (iVar2 == 0) {
        fVar11 = 0.0;
        iVar9 = (pMVar10->field0_0x0).fNumCurves;
        pMVar8 = (pMVar10->field0_0x0).fCurves;
      }
      else {
        fVar11 = 0.0;
        iVar7 = iVar2 + -1;
        pPVar3 = (pMVar6->field0_0x0).fPoints;
        iVar9 = (pMVar10->field0_0x0).fNumCurves;
        pMVar8 = (pMVar10->field0_0x0).fCurves;
        if (-1 < iVar7) {
          pPVar4 = pPVar3 + iVar7;
          fVar11 = fVar12 - pPVar4->fX;
          if (fVar11 <= 0.0) {
            iVar7 = iVar2 + -2;
            while ((pPVar4 = pPVar4 + -1, -1 < iVar7 &&
                   (fVar11 = fVar12 - pPVar4->fX, fVar11 <= 0.0))) {
              iVar7 = iVar7 + -1;
            }
          }
        }
        if (iVar7 == iVar2 + -1) {
          fVar11 = pPVar3[iVar7].fY;
        }
        else if (iVar7 == -1) {
          fVar11 = pPVar3->fY;
        }
        else {
          fVar11 = fVar11 * (pMVar6->field0_0x0).fReciprocals[iVar7] *
                   (pPVar3[iVar7 + 1].fY - pPVar3[iVar7].fY) + pPVar3[iVar7].fY;
        }
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
      pMVar6 = pMVar6 + 1;
                    /* end of inlined section */
      fVar13 = fVar13 + fVar11;
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
                    /* end of inlined section */
      fVar14 = fVar14 + fVar12 * fVar11;
    } while (pMVar6 != pMVar8 + iVar9);
    fVar13 = fVar14 / fVar13;
  }
  (this->fMotives).Motive[3] = fVar13;
  return;
}

bool cXPersonImpl::AddAction(Interaction *interaction) {
	static Interaction *sImmediateAction = NULL;
	static cXPerson *sImmediatePerson = NULL;
	TreeTableEntry *entry;
	TreeTableEntry *this;
	cXObject *obj;
	ObjTestSim check;
	Interaction *this;
	Interaction *this;
	Interaction *this;
	Interaction *this;
	Interaction *this;
	ActionQueue &tq;
	Int priority;
	TreeTableEntry *this;
	Interaction *last;
	Queue<Interaction,8> *this;
	Queue<Interaction,8> *this;
	Queue<Interaction,8> *this;
	QueueSizeType depth;
	Interaction *this;
	Interaction *this;
	Interaction *this;
	Interaction *this;
	ActionQueue newQueue;
	int depth;
	Interaction *this;
	Interaction &elem;
	Interaction &_ctor_arg;
	Queue<Interaction,8> *this;
	Queue<Interaction,8> *this;
	QueueSizeType depth;
	Interaction *this;
	Interaction *this;
	void *pAddress;
	Queue<Interaction,8> *this;
	QueueSizeType depth;
	Queue<Interaction,8> *this;
	Interaction *this;
	Interaction *this;
	void *pAddress;
	QueueSizeType targetDepth;
	Queue<Interaction,8> *this;
	Queue<Interaction,8> *this;
	Queue<Interaction,8> *this;
	ActionQueue copy;
	int depth;
	Queue<Interaction,8> *this;
	Queue<Interaction,8> *this;
	Queue<Interaction,8> *this;
	QueueSizeType depth;
	Queue<Interaction,8> *this;
	Interaction *this;
	Queue<Interaction,8> *this;
	Queue<Interaction,8> *this;
	QueueSizeType depth;
	Queue<Interaction,8> *this;
	QueueSizeType depth;
	Queue<Interaction,8> *this;
	Interaction *this;
	Queue<Interaction,8> *this;
	Interaction *this;
	void *pAddress;
	void *pAddress;
	Interaction *this;
	Interaction *this;
	Interaction &_ctor_arg;
	Queue<Interaction,8> *this;
	Interaction &elem;
	Interaction &_ctor_arg;
	Interaction *this;
	
  ushort uVar1;
  cXObjectImpl__123_901 *pcVar2;
  Type TVar3;
  Interaction **ppIVar4;
  bool bVar5;
  ushort stackObjectID;
  TreeTableEntry *pTVar6;
  cXObject__142_982 *pcVar7;
  Behavior *beh;
  int iVar8;
  cXObject__142_982 *pcVar9;
  BString2 *pBVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  ushort *puVar14;
  int *piVar15;
  int *piVar16;
  Interaction **ppIVar17;
  Queue_Interaction_8_ *this_00;
  Interaction *pIVar18;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  uint uVar22;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  Queue_Interaction_8_ copy;
  Interaction *local_c0;
  Interaction *local_bc;
  Interaction **local_b0;
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
  
  this_00 = &copy;
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
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
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  pTVar6 = GetEntry__C11Interaction(interaction);
  if (pTVar6 == (TreeTableEntry *)0x0) {
    return false;
  }
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
                    /* end of inlined section */
  if ((*(ushort *)&pTVar6->field_0xe >> 2 & 1) != 0) {
    pcVar7 = GetStackObject__C11Interaction(interaction);
    __10ObjTestSimP8cXPersonP8cXObjectb
              ((ObjTestSim *)&copy,(cXPerson__124_906 *)this->_vb1079,(cXObject__124_908 *)pcVar7,
               false);
    TestInteraction__10ObjTestSimP11InteractionPP16TTabScratchEntry
              ((ObjTestSim *)&copy,interaction,(TTabScratchEntry **)0x0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
                    /* end of inlined section */
    if (((interaction->fFlags >> 3 & 1U) != 0) && (sImmediateAction_3656 == (Interaction *)0x0)) {
      sImmediatePerson_3657 = this->_vb1079;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
                    /* end of inlined section */
      uVar1 = this->fPersonData[0x21];
      sImmediateAction_3656 = interaction;
      this->fPersonData[0x21] = (ushort)interaction->fPriority;
      pcVar2 = this->_vb901;
      beh = (Behavior *)
            (*(code *)pcVar7->__vtable[1].SetData)
                      ((int)&pcVar7->_vb1019 + (int)*(short *)&pcVar7->__vtable[1].IsOccupied);
      stackObjectID =
           (*(code *)pcVar7->__vtable[1].UserCanPlace)
                     ((int)&pcVar7->_vb1019 + (int)*(short *)&pcVar7->__vtable[1].IsPartOfMe);
      RunOneTickTree__11TreeSimImplP8BehaviorssPs
                (pcVar2->_vb1233,beh,stackObjectID,interaction->fTreeID,interaction->fStackVars);
      sImmediateAction_3656 = (Interaction *)0x0;
      sImmediatePerson_3657 = (cXPerson__123_1079 *)0x0;
      this->fPersonData[0x21] = uVar1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
                    /* end of inlined section */
      if (interaction->fID == 0) {
        SetUniqueID__11Interaction(interaction);
      }
      ___10ObjTestSim((ObjTestSim *)&copy,2);
      return true;
    }
    ___10ObjTestSim((ObjTestSim *)&copy,2);
    return false;
  }
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
                    /* end of inlined section */
  if ((*(ushort *)&pTVar6->field_0xe >> 3 & 1) == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
    uVar20 = (this->fTreeQueue).fFirst;
    iVar8 = (this->fTreeQueue).fLast - uVar20;
                    /* end of inlined section */
    if (iVar8 == 0) {
      pIVar18 = &this->fCurrentAction;
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
      pIVar18 = (this->fTreeQueue).fElems + (uVar20 + iVar8 + -1 & 7);
                    /* end of inlined section */
    }
    pcVar7 = GetIconObject__C11Interaction(pIVar18);
    pcVar9 = GetIconObject__C11Interaction(interaction);
    if (pcVar7 != pcVar9) {
      iVar8 = interaction->fPriority;
      goto LAB_0021e8a8;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
                    /* end of inlined section */
    if (pIVar18->fTreeTabEntryIndex == interaction->fTreeTabEntryIndex) {
      return false;
    }
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
  iVar8 = interaction->fPriority;
LAB_0021e8a8:
                    /* end of inlined section */
  SetUniqueID__11Interaction(interaction);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
                    /* end of inlined section */
  if ((interaction->fFlags >> 1 & 1U) == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
    uVar20 = (this->fTreeQueue).fLast;
    uVar19 = (this->fTreeQueue).fFirst;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
    uVar21 = uVar20 - uVar19;
                    /* end of inlined section */
    if (uVar21 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
                    /* end of inlined section */
      if ((this->fTreeQueue).fElems[uVar19 + (uVar21 - 1) & 7].fPriority < iVar8) {
        uVar12 = (uVar21 - 2) + uVar19;
        uVar22 = uVar21 - 1;
        do {
          uVar21 = uVar22;
          uVar11 = uVar12 & 7;
          if (uVar21 == 0) break;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
                    /* end of inlined section */
          uVar12 = uVar12 - 1;
          uVar22 = uVar21 - 1;
        } while ((this->fTreeQueue).fElems[uVar11].fPriority < iVar8);
      }
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
                    /* end of inlined section */
    if (uVar21 != uVar20 - uVar19) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
      iVar8 = 7;
      do {
        iVar8 = iVar8 + -1;
        __11Interaction(this_00->fElems);
        this_00 = (Queue_Interaction_8_ *)((int)this_00 + 0x40);
      } while (iVar8 != -1);
      copy.fFirst = 0;
                    /* end of inlined section */
      uVar20 = 0;
                    /* end of inlined section */
      copy.fLast = 0;
      if (uVar21 == 0) goto LAB_0021ee64;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
      uVar19 = (this->fTreeQueue).fFirst;
      uVar22 = uVar20;
      while( true ) {
        uVar20 = uVar22 + 1;
        pIVar18 = (this->fTreeQueue).fElems + (uVar19 + uVar22 & 7);
        if (copy.fLast - copy.fFirst < 8) {
          uVar19 = copy.fLast & 7;
          iVar8 = 3;
          puVar13 = pIVar18->fStackVars;
          copy.fElems[uVar19].m_pNextItem = pIVar18->m_pNextItem;
          puVar14 = copy.fElems[uVar19].fStackVars;
          copy.fElems[uVar19].fType = pIVar18->fType;
          copy.fElems[uVar19].fPerson = pIVar18->fPerson;
          copy.fElems[uVar19].fStackObject = pIVar18->fStackObject;
          copy.fElems[uVar19].fIconObject = pIVar18->fIconObject;
          copy.fElems[uVar19].fTreeTabEntryIndex = pIVar18->fTreeTabEntryIndex;
          do {
            uVar1 = *puVar13;
            iVar8 = iVar8 + -1;
            puVar13 = puVar13 + 1;
            *puVar14 = uVar1;
            puVar14 = puVar14 + 1;
          } while (iVar8 != -1);
          copy.fElems[uVar19].fPriority = pIVar18->fPriority;
          copy.fElems[uVar19].fTreeID = pIVar18->fTreeID;
          copy.fElems[uVar19].fAttenuation = pIVar18->fAttenuation;
          __as__8BString2RC8BString2(&copy.fElems[uVar19].fName,&pIVar18->fName);
          copy.fElems[uVar19].fMenuItem = pIVar18->fMenuItem;
          copy.fElems[uVar19].fSubMenuItem = pIVar18->fSubMenuItem;
          copy.fElems[uVar19].fID = pIVar18->fID;
          copy.fElems[uVar19].fFlags = pIVar18->fFlags;
          copy.fLast = copy.fLast + 1;
        }
                    /* end of inlined section */
        if (uVar21 <= uVar20) break;
        uVar19 = (this->fTreeQueue).fFirst;
        uVar22 = uVar20;
      }
                    /* end of inlined section */
      uVar19 = (this->fTreeQueue).fLast;
                    /* end of inlined section */
      while (uVar20 < uVar19 - (this->fTreeQueue).fFirst) {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
        uVar19 = (this->fTreeQueue).fFirst + uVar20;
                    /* end of inlined section */
        uVar20 = uVar20 + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
                    /* end of inlined section */
        ActionSkipped__12cXPersonImplRC11Interaction(this,(this->fTreeQueue).fElems + (uVar19 & 7));
LAB_0021ee64:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
        uVar19 = (this->fTreeQueue).fLast;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
      (this->fTreeQueue).fLast = 0;
                    /* end of inlined section */
      uVar20 = 0;
                    /* end of inlined section */
      (this->fTreeQueue).fFirst = 0;
      if (uVar21 != 0) {
        do {
          uVar22 = uVar20 + 1;
          uVar19 = (this->fTreeQueue).fLast;
          uVar20 = copy.fFirst + uVar20 & 7;
          if (uVar19 - (this->fTreeQueue).fFirst < 8) {
            TVar3 = copy.fElems[uVar20].fType;
            pIVar18 = (this->fTreeQueue).fElems + (uVar19 & 7);
            iVar8 = 3;
            pIVar18->m_pNextItem = copy.fElems[uVar20].m_pNextItem;
            puVar13 = pIVar18->fStackVars;
            pIVar18->fType = TVar3;
            puVar14 = copy.fElems[uVar20].fStackVars;
            pIVar18->fPerson = copy.fElems[uVar20].fPerson;
            pIVar18->fStackObject = copy.fElems[uVar20].fStackObject;
            pIVar18->fIconObject = copy.fElems[uVar20].fIconObject;
            pIVar18->fTreeTabEntryIndex = copy.fElems[uVar20].fTreeTabEntryIndex;
            do {
              uVar1 = *puVar14;
              iVar8 = iVar8 + -1;
              puVar14 = puVar14 + 1;
              *puVar13 = uVar1;
              puVar13 = puVar13 + 1;
            } while (iVar8 != -1);
            pIVar18->fPriority = copy.fElems[uVar20].fPriority;
            pIVar18->fTreeID = copy.fElems[uVar20].fTreeID;
            pIVar18->fAttenuation = copy.fElems[uVar20].fAttenuation;
            __as__8BString2RC8BString2(&pIVar18->fName,&copy.fElems[uVar20].fName);
            pIVar18->fMenuItem = copy.fElems[uVar20].fMenuItem;
            pIVar18->fSubMenuItem = copy.fElems[uVar20].fSubMenuItem;
            pIVar18->fID = copy.fElems[uVar20].fID;
            pIVar18->fFlags = copy.fElems[uVar20].fFlags;
            (this->fTreeQueue).fLast = (this->fTreeQueue).fLast + 1;
          }
                    /* end of inlined section */
          uVar20 = uVar22;
        } while (uVar22 < uVar21);
      }
      if (&copy != (Queue_Interaction_8_ *)&copy.fFirst) {
        for (pIVar18 = copy.fElems + 7; ___8BString2(&pIVar18->fName,2),
            &copy != (Queue_Interaction_8_ *)pIVar18; pIVar18 = pIVar18 + -1) {
        }
      }
    }
                    /* end of inlined section */
    if (sImmediateAction_3656 == (Interaction *)0x0) {
      uVar20 = (this->fTreeQueue).fLast;
    }
    else if (this->_vb1079 == sImmediatePerson_3657) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
                    /* end of inlined section */
      if ((interaction->fFlags >> 6 & 1U) != 0) {
        pBVar10 = GetName__C11Interaction(sImmediateAction_3656);
        SetName__11InteractionRC8BString2(interaction,pBVar10);
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
      pIVar18 = sImmediateAction_3656;
      iVar8 = 3;
      puVar13 = interaction->fStackVars;
      puVar14 = sImmediateAction_3656->fStackVars;
      sImmediateAction_3656->m_pNextItem = interaction->m_pNextItem;
      pIVar18->fType = interaction->fType;
      pIVar18->fPerson = interaction->fPerson;
      pIVar18->fStackObject = interaction->fStackObject;
      pIVar18->fIconObject = interaction->fIconObject;
      pIVar18->fTreeTabEntryIndex = interaction->fTreeTabEntryIndex;
      do {
        uVar1 = *puVar13;
        iVar8 = iVar8 + -1;
        puVar13 = puVar13 + 1;
        *puVar14 = uVar1;
        puVar14 = puVar14 + 1;
      } while (iVar8 != -1);
      pIVar18->fPriority = interaction->fPriority;
      pIVar18->fTreeID = interaction->fTreeID;
      pIVar18->fAttenuation = interaction->fAttenuation;
      __as__8BString2RC8BString2(&pIVar18->fName,&interaction->fName);
      pIVar18->fMenuItem = interaction->fMenuItem;
      pIVar18->fSubMenuItem = interaction->fSubMenuItem;
      pIVar18->fID = interaction->fID;
      pIVar18->fFlags = interaction->fFlags;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
      uVar20 = (this->fTreeQueue).fLast;
    }
    else {
      uVar20 = (this->fTreeQueue).fLast;
    }
    if (uVar20 - (this->fTreeQueue).fFirst < 8) {
      iVar8 = 3;
      pIVar18 = (this->fTreeQueue).fElems + (uVar20 & 7);
      puVar13 = interaction->fStackVars;
      pIVar18->m_pNextItem = interaction->m_pNextItem;
      puVar14 = pIVar18->fStackVars;
      pIVar18->fType = interaction->fType;
      pIVar18->fPerson = interaction->fPerson;
      pIVar18->fStackObject = interaction->fStackObject;
      pIVar18->fIconObject = interaction->fIconObject;
      pIVar18->fTreeTabEntryIndex = interaction->fTreeTabEntryIndex;
      do {
        uVar1 = *puVar13;
        iVar8 = iVar8 + -1;
        puVar13 = puVar13 + 1;
        *puVar14 = uVar1;
        puVar14 = puVar14 + 1;
      } while (iVar8 != -1);
      pIVar18->fPriority = interaction->fPriority;
      pIVar18->fTreeID = interaction->fTreeID;
      pIVar18->fAttenuation = interaction->fAttenuation;
      __as__8BString2RC8BString2(&pIVar18->fName,&interaction->fName);
      bVar5 = true;
      pIVar18->fMenuItem = interaction->fMenuItem;
      pIVar18->fSubMenuItem = interaction->fSubMenuItem;
      pIVar18->fID = interaction->fID;
      pIVar18->fFlags = interaction->fFlags;
      (this->fTreeQueue).fLast = (this->fTreeQueue).fLast + 1;
    }
    else {
      bVar5 = false;
    }
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
                    /* end of inlined section */
    if ((interaction->fFlags >> 6 & 1U) != 0) {
      pBVar10 = GetName__C11Interaction(&this->fCurrentAction);
      SetName__11InteractionRC8BString2(interaction,pBVar10);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
    }
    local_b0 = &local_c0;
    piVar16 = &copy.fElems[0].fPriority;
    iVar8 = 7;
    puVar14 = interaction->fStackVars;
    piVar15 = &copy.fElems[0].fID;
    pIVar18 = (Interaction *)piVar16;
    do {
      iVar8 = iVar8 + -1;
      __11Interaction(pIVar18);
      pIVar18 = (Interaction *)(&pIVar18->field_0x26 + 0x1a);
    } while (iVar8 != -1);
    copy.fElems[0].fPriority = (int)interaction->m_pNextItem;
    copy.fElems[0]._36_4_ = interaction->fType;
    copy.fElems[0].fAttenuation = (float)interaction->fPerson;
    iVar8 = 3;
    copy.fElems[0].fName.reference = (basic_string_ref2 *)interaction->fStackObject;
    copy.fElems[0].fMenuItem = (int)interaction->fIconObject;
    copy.fElems[0].fSubMenuItem = interaction->fTreeTabEntryIndex;
    local_bc = (Interaction *)0x0;
    local_c0 = (Interaction *)0x0;
    do {
      uVar1 = *puVar14;
      iVar8 = iVar8 + -1;
      puVar14 = puVar14 + 1;
      *(ushort *)piVar15 = uVar1;
      piVar15 = (int *)((int)piVar15 + 2);
    } while (iVar8 != -1);
    copy.fElems[1].m_pNextItem = (Interaction *)interaction->fPriority;
    copy.fElems[1].fType._0_2_ = interaction->fTreeID;
    copy.fElems[1].fPerson = (cXPersonImpl__142_963 *)interaction->fAttenuation;
    __as__8BString2RC8BString2((BString2 *)&copy.fElems[1].fStackObject,&interaction->fName);
    copy.fElems[1].fIconObject = (cXObjectImpl__15_3423 *)interaction->fMenuItem;
    copy.fElems[1].fTreeTabEntryIndex = interaction->fSubMenuItem;
    copy.fElems[1].fStackVars._0_4_ = interaction->fID;
    copy.fElems[1].fStackVars._4_4_ = interaction->fFlags;
    local_bc = (Interaction *)((int)local_bc + 1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
    uVar20 = (this->fTreeQueue).fFirst;
                    /* end of inlined section */
    uVar19 = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
                    /* end of inlined section */
    if ((this->fTreeQueue).fLast != uVar20) {
      do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
        pIVar18 = (this->fTreeQueue).fElems + (uVar20 + uVar19 & 7);
        if ((uint)((int)local_bc - (int)local_c0) < 8) {
          uVar20 = (uint)local_bc & 7;
          iVar8 = 3;
          puVar14 = pIVar18->fStackVars;
          *(Interaction **)((int)piVar16 + (uVar20 * 0x20 + -0xb) * 2 + 0x16) = pIVar18->m_pNextItem
          ;
          piVar15 = &copy.fElems[uVar20].fID;
          *(Type *)&copy.fElems[uVar20].fTreeID = pIVar18->fType;
          copy.fElems[uVar20].fAttenuation = (float)pIVar18->fPerson;
          copy.fElems[uVar20].fName.reference = (basic_string_ref2 *)pIVar18->fStackObject;
          copy.fElems[uVar20].fMenuItem = (int)pIVar18->fIconObject;
          copy.fElems[uVar20].fSubMenuItem = pIVar18->fTreeTabEntryIndex;
          do {
            uVar1 = *puVar14;
            iVar8 = iVar8 + -1;
            puVar14 = puVar14 + 1;
            *(ushort *)piVar15 = uVar1;
            piVar15 = (int *)((int)piVar15 + 2);
          } while (iVar8 != -1);
          copy.fElems[uVar20 + 1].m_pNextItem = (Interaction *)pIVar18->fPriority;
          *(ushort *)&copy.fElems[uVar20 + 1].fType = pIVar18->fTreeID;
          copy.fElems[uVar20 + 1].fPerson = (cXPersonImpl__142_963 *)pIVar18->fAttenuation;
          __as__8BString2RC8BString2
                    ((BString2 *)&copy.fElems[uVar20 + 1].fStackObject,&pIVar18->fName);
          bVar5 = true;
          copy.fElems[uVar20 + 1].fIconObject = (cXObjectImpl__15_3423 *)pIVar18->fMenuItem;
          copy.fElems[uVar20 + 1].fTreeTabEntryIndex = pIVar18->fSubMenuItem;
          *(int *)copy.fElems[uVar20 + 1].fStackVars = pIVar18->fID;
          *(int *)(copy.fElems[uVar20 + 1].fStackVars + 2) = pIVar18->fFlags;
          local_bc = (Interaction *)((int)&local_bc->m_pNextItem + 1);
        }
        else {
          bVar5 = false;
        }
                    /* end of inlined section */
        if (!bVar5) {
          ppIVar4 = local_b0;
          if ((Interaction **)piVar16 == local_b0) {
            return false;
          }
          do {
            ppIVar17 = ppIVar4 + -0x10;
            ___8BString2((BString2 *)(ppIVar4 + -5),2);
            ppIVar4 = ppIVar17;
          } while ((Interaction **)piVar16 != ppIVar17);
          return false;
        }
        uVar20 = (this->fTreeQueue).fFirst;
                    /* end of inlined section */
        uVar19 = uVar19 + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
                    /* end of inlined section */
      } while (uVar19 < (this->fTreeQueue).fLast - uVar20);
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
                    /* end of inlined section */
    uVar20 = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
    (this->fTreeQueue).fLast = 0;
                    /* end of inlined section */
    (this->fTreeQueue).fFirst = 0;
    if (local_bc != local_c0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
      uVar19 = (this->fTreeQueue).fLast;
      while( true ) {
        uVar21 = (int)local_c0->fStackVars + (uVar20 - 0x18) & 7;
        if (uVar19 - (this->fTreeQueue).fFirst < 8) {
          TVar3 = *(Type *)&copy.fElems[uVar21].fTreeID;
          pIVar18 = (this->fTreeQueue).fElems + (uVar19 & 7);
          pIVar18->m_pNextItem = *(Interaction **)((int)piVar16 + (uVar21 * 0x20 + -0xb) * 2 + 0x16)
          ;
          puVar14 = pIVar18->fStackVars;
          pIVar18->fType = TVar3;
          iVar8 = 3;
          piVar15 = &copy.fElems[uVar21].fID;
          pIVar18->fPerson = (cXPersonImpl__142_963 *)copy.fElems[uVar21].fAttenuation;
          pIVar18->fStackObject = (cXObjectImpl__15_3423 *)copy.fElems[uVar21].fName.reference;
          pIVar18->fIconObject = (cXObjectImpl__15_3423 *)copy.fElems[uVar21].fMenuItem;
          pIVar18->fTreeTabEntryIndex = copy.fElems[uVar21].fSubMenuItem;
          do {
            uVar1 = *(ushort *)piVar15;
            iVar8 = iVar8 + -1;
            piVar15 = (int *)((int)piVar15 + 2);
            *puVar14 = uVar1;
            puVar14 = puVar14 + 1;
          } while (iVar8 != -1);
          pIVar18->fPriority = (int)copy.fElems[uVar21 + 1].m_pNextItem;
          pIVar18->fTreeID = *(ushort *)&copy.fElems[uVar21 + 1].fType;
          pIVar18->fAttenuation = (float)copy.fElems[uVar21 + 1].fPerson;
          __as__8BString2RC8BString2
                    (&pIVar18->fName,(BString2 *)&copy.fElems[uVar21 + 1].fStackObject);
          pIVar18->fMenuItem = (int)copy.fElems[uVar21 + 1].fIconObject;
          pIVar18->fSubMenuItem = copy.fElems[uVar21 + 1].fTreeTabEntryIndex;
          pIVar18->fID = *(int *)copy.fElems[uVar21 + 1].fStackVars;
          pIVar18->fFlags = *(int *)(copy.fElems[uVar21 + 1].fStackVars + 2);
          (this->fTreeQueue).fLast = (this->fTreeQueue).fLast + 1;
        }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
        uVar20 = uVar20 + 1;
                    /* end of inlined section */
        if ((uint)((int)local_bc - (int)local_c0) <= uVar20) break;
        uVar19 = (this->fTreeQueue).fLast;
      }
    }
    bVar5 = true;
    ppIVar4 = local_b0;
    if ((Interaction **)piVar16 != local_b0) {
      do {
        ppIVar17 = ppIVar4 + -0x10;
        ___8BString2((BString2 *)(ppIVar4 + -5),2);
        ppIVar4 = ppIVar17;
      } while ((Interaction **)piVar16 != ppIVar17);
      bVar5 = true;
                    /* end of inlined section */
    }
  }
  return bVar5;
}

bool cXPersonImpl::RemoveAction(SInt32 actionID) {
	ActionQueue copy;
	int depth;
	Interaction *this;
	Interaction newAction;
	Queue<Interaction,8> *this;
	QueueSizeType depth;
	Interaction *this;
	Interaction *this;
	void *pAddress;
	Interaction *this;
	void *pAddress;
	
  ushort uVar1;
  cXPerson__123_1079__vtable *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  ushort *puVar7;
  ushort *puVar8;
  int iVar9;
  Queue_Interaction_8_ *pQVar10;
  int iVar11;
  Interaction *action;
  Queue_Interaction_8_ *pQVar12;
  uint uVar13;
  Interaction newAction;
  Queue_Interaction_8_ copy;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
                    /* end of inlined section */
  if (actionID == (this->fCurrentAction).fID) {
    this->fPersonData[0x21] = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
    (this->fCurrentAction).fFlags = (this->fCurrentAction).fFlags | 0x100;
                    /* end of inlined section */
    pcVar2 = this->_vb1079->__vtable;
    lVar6 = (*(code *)pcVar2[1].Cleanup)
                      ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar2[1].StackJustPopped);
    bVar4 = true;
    if (lVar6 == 0) {
      __11InteractionP8cXPersonP8cXObjectii
                (&newAction,(cXPerson__142_985 *)this->_vb1079,
                 (cXObject__142_982 *)this->_vb1079->_vb966,0x21,0x32);
      SetIconObject__11InteractionP8cXObject(&newAction,(cXObject__142_982 *)0x0);
      pcVar2 = this->_vb1079->__vtable;
      (*(code *)pcVar2->GetJobSuitTex)
                ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar2->GetSAnimator,&newAction);
      ___8BString2(&newAction.fName,2);
      bVar4 = true;
                    /* end of inlined section */
    }
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
    iVar11 = 7;
    pQVar10 = &copy;
    do {
      iVar11 = iVar11 + -1;
      __11Interaction(pQVar10->fElems);
      pQVar10 = (Queue_Interaction_8_ *)(pQVar10->fElems + 1);
    } while (iVar11 != -1);
                    /* end of inlined section */
    uVar13 = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
    copy.fLast = 0;
                    /* end of inlined section */
    copy.fFirst = 0;
    if ((this->fTreeQueue).fLast != (this->fTreeQueue).fFirst) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
      uVar5 = (this->fTreeQueue).fFirst;
      do {
        action = (this->fTreeQueue).fElems + (uVar5 & 7);
                    /* end of inlined section */
        if (action->fID == actionID) {
          ActionSkipped__12cXPersonImplRC11Interaction(this,action);
        }
        else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
          if (copy.fLast - copy.fFirst < 8) {
            uVar5 = copy.fLast & 7;
            iVar11 = 3;
            puVar8 = action->fStackVars;
            copy.fElems[uVar5].m_pNextItem = action->m_pNextItem;
            puVar7 = copy.fElems[uVar5].fStackVars;
            copy.fElems[uVar5].fType = action->fType;
            copy.fElems[uVar5].fPerson = action->fPerson;
            copy.fElems[uVar5].fStackObject = action->fStackObject;
            copy.fElems[uVar5].fIconObject = action->fIconObject;
            copy.fElems[uVar5].fTreeTabEntryIndex = action->fTreeTabEntryIndex;
            do {
              uVar1 = *puVar8;
              iVar11 = iVar11 + -1;
              puVar8 = puVar8 + 1;
              *puVar7 = uVar1;
              puVar7 = puVar7 + 1;
            } while (iVar11 != -1);
            copy.fElems[uVar5].fPriority = action->fPriority;
            copy.fElems[uVar5].fTreeID = action->fTreeID;
            copy.fElems[uVar5].fAttenuation = action->fAttenuation;
            __as__8BString2RC8BString2(&copy.fElems[uVar5].fName,&action->fName);
            copy.fElems[uVar5].fMenuItem = action->fMenuItem;
            copy.fElems[uVar5].fSubMenuItem = action->fSubMenuItem;
            copy.fElems[uVar5].fID = action->fID;
            copy.fElems[uVar5].fFlags = action->fFlags;
            copy.fLast = copy.fLast + 1;
          }
        }
        uVar13 = uVar13 + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
        uVar3 = (this->fTreeQueue).fFirst;
                    /* end of inlined section */
        uVar5 = uVar3 + uVar13;
      } while (uVar13 < (this->fTreeQueue).fLast - uVar3);
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
                    /* end of inlined section */
    if (copy.fLast - copy.fFirst == (this->fTreeQueue).fLast - (this->fTreeQueue).fFirst) {
      if (&copy != (Queue_Interaction_8_ *)&copy.fFirst) {
        pQVar10 = (Queue_Interaction_8_ *)(copy.fElems + 7);
        do {
          ___8BString2(&pQVar10->fElems[0].fName,2);
          bVar4 = &copy != pQVar10;
          pQVar10 = (Queue_Interaction_8_ *)&pQVar10[-1].fElems[7].fPerson;
        } while (bVar4);
      }
      bVar4 = false;
                    /* end of inlined section */
    }
    else {
      iVar11 = 7;
      pQVar10 = &copy;
      pQVar12 = &this->fTreeQueue;
      do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
        iVar11 = iVar11 + -1;
        puVar8 = pQVar12->fElems[0].fStackVars;
        iVar9 = 3;
        pQVar12->fElems[0].m_pNextItem = pQVar10->fElems[0].m_pNextItem;
        puVar7 = pQVar10->fElems[0].fStackVars;
        pQVar12->fElems[0].fType = pQVar10->fElems[0].fType;
        pQVar12->fElems[0].fPerson = pQVar10->fElems[0].fPerson;
        pQVar12->fElems[0].fStackObject = pQVar10->fElems[0].fStackObject;
        pQVar12->fElems[0].fIconObject = pQVar10->fElems[0].fIconObject;
        pQVar12->fElems[0].fTreeTabEntryIndex = pQVar10->fElems[0].fTreeTabEntryIndex;
        do {
          uVar1 = *puVar7;
          iVar9 = iVar9 + -1;
          puVar7 = puVar7 + 1;
          *puVar8 = uVar1;
          puVar8 = puVar8 + 1;
        } while (iVar9 != -1);
        pQVar12->fElems[0].fPriority = pQVar10->fElems[0].fPriority;
        pQVar12->fElems[0].fTreeID = pQVar10->fElems[0].fTreeID;
        pQVar12->fElems[0].fAttenuation = pQVar10->fElems[0].fAttenuation;
        __as__8BString2RC8BString2(&pQVar12->fElems[0].fName,&pQVar10->fElems[0].fName);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
        pQVar12->fElems[0].fMenuItem = pQVar10->fElems[0].fMenuItem;
        pQVar12->fElems[0].fSubMenuItem = pQVar10->fElems[0].fSubMenuItem;
        pQVar12->fElems[0].fID = pQVar10->fElems[0].fID;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
        pQVar12->fElems[0].fFlags = pQVar10->fElems[0].fFlags;
                    /* end of inlined section */
        pQVar10 = (Queue_Interaction_8_ *)(pQVar10->fElems + 1);
        pQVar12 = (Queue_Interaction_8_ *)(pQVar12->fElems + 1);
      } while (iVar11 != -1);
      (this->fTreeQueue).fFirst = copy.fFirst;
      (this->fTreeQueue).fLast = copy.fLast;
      if (&copy != (Queue_Interaction_8_ *)&copy.fFirst) {
        pQVar10 = (Queue_Interaction_8_ *)(copy.fElems + 7);
        do {
          ___8BString2(&pQVar10->fElems[0].fName,2);
          bVar4 = &copy != pQVar10;
          pQVar10 = (Queue_Interaction_8_ *)&pQVar10[-1].fElems[7].fPerson;
        } while (bVar4);
      }
                    /* end of inlined section */
      bVar4 = true;
    }
  }
  return bVar4;
}

Interaction* cXPersonImpl::GetIndAction(Int index) {
	Queue<Interaction,8> *this;
	QueueSizeType depth;
	
  uint uVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
                    /* end of inlined section */
  if ((-1 < index) &&
     (uVar1 = (this->fTreeQueue).fFirst, (uint)index < (this->fTreeQueue).fLast - uVar1)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
                    /* end of inlined section */
    return (this->fTreeQueue).fElems + (uVar1 + index & 7);
  }
  return (Interaction *)0x0;
}

void cXPersonImpl::DebugDumpHappyScape() {
  return;
}

bool cXPersonImpl::ShouldInterrupt() {
	bool interrupt;
	Queue<Interaction,8> *this;
	
  bool bVar1;
  uint uVar2;
  
  if (this->fPersonData[0x47] != 0) {
    return false;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
  uVar2 = (this->fTreeQueue).fFirst;
                    /* end of inlined section */
  bVar1 = false;
  if ((this->fTreeQueue).fLast != uVar2) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
    uVar2 = uVar2 & 7;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
                    /* end of inlined section */
    if ((long)(short)this->fPersonData[0x21] < (long)(this->fTreeQueue).fElems[uVar2].fPriority) {
      bVar1 = true;
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
                    /* end of inlined section */
      if (((this->fTreeQueue).fElems[uVar2].fFlags >> 1 & 1U) != 0) {
        bVar1 = true;
      }
    }
  }
  if (!bVar1) {
    if (-99.0 <= (this->fMotives).Motive[7]) {
      if (-99.0 <= (this->fMotives).Motive[9]) {
        if ((this->fMotives).Motive[5] < -99.0) {
          bVar1 = true;
        }
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = true;
    }
  }
  return bVar1;
}

TreeReturnCode cXPersonImpl::TryTestInteractingWith(StackElem *elem, XPrimParam *param) {
	SInt16 objectID;
	ObjectRecord *i;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	
  ushort uVar1;
  cXObject__21_1030__vtable *pcVar2;
  ushort uVar3;
  cXObjectImpl__123_901 *pcVar4;
  TreeReturnCode TVar5;
  ObjectRecord *pOVar6;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pOVar6 = (this->fObjectRecords).start;
                    /* end of inlined section */
  uVar1 = elem->fObjectID;
  if (pOVar6 == (this->fObjectRecords).finish) {
LAB_0021f6c4:
    TVar5 = kFalseComplete;
  }
  else {
    pcVar4 = pOVar6->fObject;
    while( true ) {
      pcVar2 = pcVar4->_vb966->__vtable;
      uVar3 = (*(code *)pcVar2[1].UserCanPlace)
                        ((int)&pcVar4->_vb966->_vb899 + (int)*(short *)&pcVar2[1].IsPartOfMe);
      if (uVar3 == uVar1) break;
                    /* end of inlined section */
      pOVar6 = pOVar6 + 1;
      if (pOVar6 == (this->fObjectRecords).finish) goto LAB_0021f6c4;
      pcVar4 = pOVar6->fObject;
    }
    TVar5 = kTrueComplete;
  }
  return TVar5;
}

TreeReturnCode cXPersonImpl::TryChangeSuit(StackElem *elem, XPrimParam *param) {
	iResFile *file;
	AUTOPTR<PropTable> propTable;
	PropNameID suitName;
	ChangeSuitParam *this;
	int index;
	ChangeSuitParam *this;
	
  uchar uVar1;
  cXPerson__123_1079__vtable *pcVar2;
  cXPerson__123_1079 *pcVar3;
  SAnimator__vtable *pSVar4;
  cXObject__21_1030 *pcVar5;
  cXObject__21_1030__vtable *pcVar6;
  SAnimator *pSVar7;
  int iVar8;
  int iVar9;
  TreeReturnCode TVar10;
  PropTable *pInstance;
  iResFile__6_5027 *piVar11;
  ulong uVar12;
  long lVar13;
  cXObjectImpl__123_901 *pcVar14;
  ushort uVar15;
  undefined4 uVar16;
  AUTOPTR_PropTable_ propTable;
  
  if ((param->field0_0x0).pushAction.dataForInteractingObject == '\x01') {
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
    if (((param->field0_0x0).bparam[1] & 1) != 0) {
      return kTrueComplete;
    }
    if ((param->field0_0x0).pushAction.interactionIndex < 8) {
      pcVar2 = this->_vb1079->__vtable;
      (*(code *)pcVar2->GetRecordMaxDuration)
                ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar2->SetRecordDuration,0x15,0);
      pcVar3 = this->_vb1079;
    }
    else {
      pcVar2 = this->_vb1079->__vtable;
      iVar8 = (*(code *)pcVar2->GetRecordDuration)
                        ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar2->GetRecording,0x15);
      pcVar2 = this->_vb1079->__vtable;
      uVar12 = (*(code *)pcVar2->GetRecordDuration)
                         ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar2->GetRecording,8);
      pcVar3 = this->_vb1079;
      if ((param->field0_0x0).pushAction.interactionIndex == uVar12) {
        lVar13 = (**(code **)&pcVar3->__vtable->field_0x16c)
                           ((int)&pcVar3->_vb966 + (int)*(short *)&pcVar3->__vtable->field_0x168);
        if (lVar13 == 0) {
          do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/SRand.h */
            iVar9 = GetNextRandomNumber__Fv();
            iVar9 = iVar9 % 10;
                    /* end of inlined section */
          } while (iVar9 == iVar8);
        }
        else {
          iVar9 = 0;
          if (iVar8 == 0) {
            iVar9 = 1;
          }
        }
      }
      else {
        lVar13 = (**(code **)&pcVar3->__vtable->field_0x16c)
                           ((int)&pcVar3->_vb966 + (int)*(short *)&pcVar3->__vtable->field_0x168);
        if (lVar13 == 0) {
          iVar8 = 10;
                    /* inlined from c:/eor/src2/games/sims/MSrc/SRand.h */
          iVar9 = GetNextRandomNumber__Fv();
          iVar9 = iVar9 % 10;
        }
        else {
          iVar8 = 2;
                    /* inlined from c:/eor/src2/games/sims/MSrc/SRand.h */
          iVar9 = GetNextRandomNumber__Fv();
                    /* end of inlined section */
          iVar9 = iVar9 % 2;
        }
        if (iVar8 == 0) {
          trap(7);
        }
      }
                    /* end of inlined section */
      pcVar2 = this->_vb1079->__vtable;
      (*(code *)pcVar2->GetRecordMaxDuration)
                ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar2->SetRecordDuration,0x15,
                 (short)iVar9);
      pcVar3 = this->_vb1079;
    }
    (*(code *)pcVar3->__vtable->GetRecordMaxDuration)
              ((int)&pcVar3->_vb966 + (int)*(short *)&pcVar3->__vtable->SetRecordDuration,8,
               (param->field0_0x0).pushAction.interactionIndex);
    pSVar4 = this->fAnimator->__vtable;
    TVar10 = (*(code *)pSVar4->LookTowards)
                       ((int)&this->fAnimator->__vtable + (int)*(short *)&pSVar4->LookTowards);
    return TVar10;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  DestroyInstance__9PropTableP9PropTable((PropTable *)0x0);
  pInstance = CreateInstance__9PropTable();
                    /* end of inlined section */
  uVar1 = (param->field0_0x0).pushAction.dataForInteractingObject;
                    /* end of inlined section */
  if (uVar1 == '\0') {
    piVar11 = GetGlobFile__8Behavior(elem->fBehavior);
  }
  else {
    if (uVar1 != '\x02') {
      pcVar14 = this->_vb901;
      uVar15 = 0x2f;
      uVar16 = 0x2f;
                    /* end of inlined section */
      goto LAB_0021f948;
    }
    piVar11 = GetPrivFile__8Behavior(elem->fBehavior);
  }
                    /* end of inlined section */
  (*(code *)pInstance->__vtable->GetEntry)
            ((int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->GetFile,piVar11,0x130)
  ;
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
  lVar13 = (*(code *)pInstance->__vtable[1].GetID)
                     ((int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable[1].Load,
                      (param->field0_0x0).pushAction.interactionIndex);
  uVar15 = 0x30;
  if (lVar13 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/XPrimitives.h */
                    /* end of inlined section */
    pSVar7 = this->fAnimator;
    if (((param->field0_0x0).bparam[1] & 1) == 0) {
      (*(code *)pSVar7->__vtable[1].LookTowards)
                ((int)&pSVar7->__vtable + (int)*(short *)&pSVar7->__vtable[1].LookTowards);
    }
    else {
      (*(code *)pSVar7->__vtable[1].DequeueAnimEvent)
                ((int)&pSVar7->__vtable + (int)*(short *)&pSVar7->__vtable[1].Tick);
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
    DestroyInstance__9PropTableP9PropTable(pInstance);
    return kTrueComplete;
                    /* end of inlined section */
  }
  pcVar14 = this->_vb901;
  uVar16 = 0x30;
LAB_0021f948:
  pcVar14->_vb1233->fError = uVar15;
  pcVar5 = this->_vb901->_vb966;
  pcVar6 = pcVar5->__vtable;
  (*(code *)pcVar6->SimEnabled)
            ((int)&pcVar5->_vb899 + (int)*(short *)&pcVar6->SimIndependent,uVar16);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  DestroyInstance__9PropTableP9PropTable(pInstance);
  return kError;
                    /* end of inlined section */
}

TreeReturnCode cXPersonImpl::TryIdleForInput(StackElem *elem, XPrimParam *param) {
	IdleForInputParam *idleForInput;
	bool interrupt;
	StdPrm *dec;
	Interaction interaction;
	cXObjectImpl *obj;
	ObjTestSim check;
	SInt16 treeID;
	Queue<Interaction,8> *this;
	Interaction &elem;
	Interaction &_ctor_arg;
	Interaction *this;
	
  short sVar1;
  ushort uVar2;
  cXPerson__123_1079__vtable *pcVar3;
  cXObject__21_1030 *pcVar4;
  cXObject__21_1030__vtable *pcVar5;
  uint uVar6;
  TreeSim *pTVar7;
  TreeSim__vtable *pTVar8;
  TreeReturnCode TVar9;
  ushort *puVar10;
  cXObject__142_982 *pcVar11;
  int iVar12;
  long lVar13;
  ushort *puVar14;
  ushort *puVar15;
  int iVar16;
  Interaction *pIVar17;
  BString2 *this_00;
  Interaction interaction;
  ObjTestSim check;
  
  pcVar3 = this->_vb1079->__vtable;
  lVar13 = (*(code *)pcVar3[1].Cleanup)
                     ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar3[1].StackJustPopped);
  sVar1 = (param->field0_0x0).find5WorstMotives.unused0;
  if ((sVar1 < 0) || ((short)(ushort)elem->fNumParams <= sVar1)) {
    this->_vb901->_vb1233->fError = 8;
    pcVar4 = this->_vb901->_vb966;
    pcVar5 = pcVar4->__vtable;
    (*(code *)pcVar5->SimEnabled)((int)&pcVar4->_vb899 + (int)*(short *)&pcVar5->SimIndependent,8);
    TVar9 = kError;
  }
  else {
    puVar10 = GetParams__9StackElem(elem);
    puVar10 = puVar10 + (param->field0_0x0).find5WorstMotives.unused0;
    if (lVar13 == 0) {
      if (*puVar10 == 0) {
        TVar9 = kTrueComplete;
        this->_vb901->fData[8] = this->_vb901->fData[8] & 0xffbf;
      }
      else {
        TVar9 = kEngaged;
        *puVar10 = *puVar10 - 1;
      }
    }
    else {
      this->_vb901->fData[8] = this->_vb901->fData[8] | 0x40;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
                    /* end of inlined section */
      if ((((param->field0_0x0).bparam[1] == 0) ||
          (uVar6 = (this->fTreeQueue).fFirst, (this->fTreeQueue).fLast == uVar6)) ||
         ((elem->fPrimState == 1 && (((this->fTreeQueue).fElems[uVar6 & 7].fFlags >> 1 & 1U) == 0)))
         ) {
        TVar9 = kTrueComplete;
      }
      else {
        __11Interaction(&interaction);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
        uVar6 = (this->fTreeQueue).fFirst;
        this_00 = &interaction.fName;
        if (uVar6 < (this->fTreeQueue).fLast) {
          puVar15 = interaction.fStackVars;
          pIVar17 = (this->fTreeQueue).fElems + (uVar6 & 7);
          iVar16 = 3;
          interaction.m_pNextItem = pIVar17->m_pNextItem;
          puVar14 = pIVar17->fStackVars;
          interaction.fType = pIVar17->fType;
          interaction.fPerson = pIVar17->fPerson;
          interaction.fStackObject = pIVar17->fStackObject;
          interaction.fIconObject = pIVar17->fIconObject;
          interaction.fTreeTabEntryIndex = pIVar17->fTreeTabEntryIndex;
          do {
            uVar2 = *puVar14;
            iVar16 = iVar16 + -1;
            puVar14 = puVar14 + 1;
            *puVar15 = uVar2;
            puVar15 = puVar15 + 1;
          } while (iVar16 != -1);
          interaction.fPriority = pIVar17->fPriority;
          interaction.fTreeID = pIVar17->fTreeID;
          interaction.fAttenuation = pIVar17->fAttenuation;
          __as__8BString2RC8BString2(this_00,&pIVar17->fName);
          interaction.fMenuItem = pIVar17->fMenuItem;
          interaction.fSubMenuItem = pIVar17->fSubMenuItem;
          interaction.fID = pIVar17->fID;
          interaction.fFlags = pIVar17->fFlags;
          (this->fTreeQueue).fFirst = (this->fTreeQueue).fFirst + 1;
        }
                    /* end of inlined section */
        pcVar11 = GetStackObject__C11Interaction(&interaction);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
        lVar13 = 0;
        if (pcVar11 != (cXObject__142_982 *)0x0) {
          lVar13 = (*(code *)pcVar11->__vtable[1].GetObjectImplementation)
                             ((int)&pcVar11->_vb1019 +
                              (int)*(short *)&pcVar11->__vtable[1].AdvanceGraphic);
        }
                    /* end of inlined section */
        if (lVar13 != 0) {
          iVar16 = (int)lVar13;
          __10ObjTestSimP8cXPersonP8cXObjectb
                    (&check,(cXPerson__124_906 *)this->_vb1079,*(cXObject__124_908 **)(iVar16 + 4),
                     false);
          TestInteraction__10ObjTestSimP11InteractionPP16TTabScratchEntry
                    (&check,&interaction,(TTabScratchEntry **)0x0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
                    /* end of inlined section */
                    /* end of inlined section */
          if ((((interaction.fFlags >> 3 & 1U) != 0) && (interaction.fTreeID != 0)) &&
             (pcVar3 = this->_vb1079->__vtable,
             lVar13 = (*(code *)pcVar3->RemoveAction)
                                ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar3->AddAction,
                                 *(undefined4 *)(iVar16 + 4),interaction.fStackVars,
                                 interaction.fTreeID,0), lVar13 != 0)) {
            SetCurrentAction__12cXPersonImplRC11Interaction(this,&interaction);
            *puVar10 = 0;
            elem->fPrimState = 1;
            pTVar7 = this->_vb901->_vb1233->_vb899;
            pTVar8 = pTVar7->__vtable;
            iVar12 = (**(code **)(pTVar8 + 1))
                               ((int)&pTVar7->m_pObject + (int)*(short *)&pTVar8->GetISimInstance);
            *(undefined2 *)(iVar12 + 4) = *(undefined2 *)(iVar16 + 0xc4);
            this->_vb901->fData[8] = this->_vb901->fData[8] | 0x40;
            ___10ObjTestSim(&check,2);
            ___8BString2(this_00,2);
            return kStackLoaded;
          }
          ActionSkipped__12cXPersonImplRC11Interaction(this,&interaction);
          ___10ObjTestSim(&check,2);
        }
        ___8BString2(this_00,2);
        TVar9 = kEngaged;
      }
    }
  }
  return TVar9;
}

static int CompareScoredInteractions(void *v1, void *v2) {
	float diff;
	
  int iVar1;
  float fVar2;
  
  fVar2 = *(float *)((int)v2 + 8) - *(float *)((int)v1 + 8);
  iVar1 = 1;
  if ((fVar2 <= 1e-07) && (iVar1 = -1, -1e-07 <= fVar2)) {
    return 0;
  }
  return iVar1;
}

static void __tcf_1() {
  ___15InteractionList((InteractionList *)&unscoredInteractions_3727,2);
  return;
}

TreeReturnCode cXPersonImpl::TryFindBestAction(StackElem *elem) {
	ScoredInteraction scoredInteraction;
	float baseHappy;
	float minScore;
	ObjTestSim testSim;
	int arraySize;
	int objID;
	int sciSize;
	vector<ScoredInteraction,__malloc_alloc_template<0> > *this;
	ScoredInteraction *last;
	ScoredInteraction *first;
	ScoredInteraction *pointer;
	cXObjectImpl *obj;
	static InteractionList unscoredInteractions;
	float distance;
	iterator i;
	Interaction *node;
	TTabScratchEntry *ads;
	float attenuation;
	TTabScratchEntry *this;
	TTabScratchEntry *this;
	vector<ScoredInteraction,__malloc_alloc_template<0> > *this;
	vector<ScoredInteraction,__malloc_alloc_template<0> > *this;
	Int pick;
	unsigned int lim;
	unsigned int lim;
	ScoredInteraction *sci;
	bool goAhead;
	unsigned int n;
	
  undefined *puVar1;
  cXPerson__123_1079__vtable *pcVar2;
  ObjectModule *pOVar3;
  ObjectModule__vtable *pOVar4;
  int iVar5;
  cXObject__21_1030 *pcVar6;
  cXObject__21_1030__vtable *pcVar7;
  ulong *puVar8;
  bool bVar9;
  ulong uVar10;
  int iVar11;
  cXObjectImpl__123_901 *pcVar12;
  cXObject__142_982 *pcVar13;
  ScoredInteraction *pSVar14;
  long lVar15;
  ScoredInteraction *pSVar16;
  cXPerson__124_906 *tester;
  cXObject__124_908 *stackObj;
  cXObject__21_1030 *pcVar17;
  undefined8 unaff_s0;
  int iVar18;
  uint uVar19;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  ScoredInteraction scoredInteraction;
  ObjTestSim testSim;
  iterator i;
  TTabScratchEntry *ads;
  undefined4 local_c0;
  undefined4 uStack_bc;
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
  
  local_50 = (undefined4)unaff_s7;
  uStack_4c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_a0 = (undefined4)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_60 = (undefined4)unaff_s6;
  uStack_5c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s5;
  uStack_6c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_80 = (undefined4)unaff_s4;
  uStack_7c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s3;
  uStack_8c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_b0 = (undefined4)unaff_s1;
  uStack_ac = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_c0 = (undefined4)unaff_s0;
  uStack_bc = (undefined4)((ulong)unaff_s0 >> 0x20);
  if ((__12cXObjectImpl_sFreeWill == 0) &&
     (pcVar2 = this->_vb1079->__vtable,
     lVar15 = (**(code **)&pcVar2->field_0x164)
                        ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar2->field_0x160),
     lVar15 == 0)) {
    return kFalseComplete;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pSVar14 = (this->fInteractions).start;
  for (pSVar16 = pSVar14; pSVar16 != (this->fInteractions).finish; pSVar16 = pSVar16 + 1) {
  }
  (this->fInteractions).finish = pSVar14;
                    /* end of inlined section */
  fVar20 = GetCurrentScore__13MotiveEffects(this->fMotiveEffects);
  if (this->fPersonData[0x20] == 0) {
    tester = (cXPerson__124_906 *)this->_vb1079;
    fVar25 = gMinAutonomyFamilyScore;
  }
  else {
    tester = (cXPerson__124_906 *)this->_vb1079;
    fVar25 = gMinAutonomyVisitorScore;
  }
  __10ObjTestSimP8cXPersonb(&testSim,tester,true);
  pOVar3 = this->_vb901->fModule;
  pOVar4 = pOVar3->__vtable;
  iVar11 = (*(code *)pOVar4->GetGlobalRoutingSlot)
                     ((int)&pOVar3->__vtable + (int)*(short *)&pOVar4->EnqueueObjectDialog);
  if (iVar11 < 1) {
    pSVar14 = (this->fInteractions).finish;
  }
  else {
    pcVar12 = this->_vb901;
    iVar18 = 1;
    while( true ) {
      pOVar4 = pcVar12->fModule->__vtable;
      lVar15 = (*(code *)pOVar4->AdvanceSelectedPerson)
                         ((int)&pcVar12->fModule->__vtable +
                          (int)*(short *)&pOVar4->SetSelectedPerson,iVar18);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
      pcVar12 = (cXObjectImpl__123_901 *)0x0;
      if (lVar15 != 0) {
        iVar5 = *(int *)((int)lVar15 + 4);
        pcVar12 = (cXObjectImpl__123_901 *)
                  (**(code **)(iVar5 + 0x454))((int)lVar15 + (int)*(short *)(iVar5 + 0x450));
      }
                    /* end of inlined section */
      if ((((pcVar12 != (cXObjectImpl__123_901 *)0x0) &&
           (pOVar3 = this->_vb901->fModule, pOVar4 = pOVar3->__vtable,
           lVar15 = (*(code *)pOVar4[1].GetIdleStatus)
                              ((int)&pOVar3->__vtable + (int)*(short *)&pOVar4[1].ClearIdleStatus,
                               iVar18,8), lVar15 != 0)) && (pcVar12 != this->_vb901)) &&
         ((short)pcVar12->fData[0x19] < 1)) {
        stackObj = (cXObject__124_908 *)0x0;
        if (pcVar12 != (cXObjectImpl__123_901 *)0x0) {
          stackObj = (cXObject__124_908 *)pcVar12->_vb966;
        }
        SetStackObject__10ObjTestSimP8cXObject(&testSim,stackObj);
        if (__tmp_1_3728 == 0) {
          __15InteractionList((InteractionList *)&unscoredInteractions_3727);
          __tmp_1_3728 = 1;
          atexit(__tcf_1);
        }
        clear__15InteractionList((InteractionList *)&unscoredInteractions_3727);
        AppendInteractions__10ObjTestSimR15InteractionList
                  (&testSim,(InteractionList *)&unscoredInteractions_3727);
        uVar19 = size__C15InteractionList((InteractionList *)&unscoredInteractions_3727);
        pcVar17 = (cXObject__21_1030 *)0x0;
        if (uVar19 != 0) {
          pcVar6 = this->_vb901->_vb966;
          pcVar7 = pcVar6->__vtable;
          if (pcVar12 != (cXObjectImpl__123_901 *)0x0) {
            pcVar17 = pcVar12->_vb966;
          }
          fVar21 = (float)(*(code *)pcVar7->SetMiscFlag)
                                    ((int)&pcVar6->_vb899 + (int)*(short *)&pcVar7->GetHilite,
                                     pcVar17);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjTestSim.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjTestSim.h */
                    /* end of inlined section */
          i.m_pInteraction = unscoredInteractions_3727;
          if (unscoredInteractions_3727 != (Interaction *)0x0) {
            fVar23 = 1.0;
            do {
              ads = (TTabScratchEntry *)0x0;
              TestInteraction__10ObjTestSimP11InteractionPP16TTabScratchEntry
                        (&testSim,i.m_pInteraction,&ads);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjTestSim.h */
                    /* end of inlined section */
              if (((i.m_pInteraction)->fFlags >> 3 & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjTestSim.h */
                    /* end of inlined section */
                fVar24 = fVar23 / (fVar21 * (i.m_pInteraction)->fAttenuation + fVar23);
                fVar22 = GetInteractionScore__13MotiveEffectsPC11TreeTableAd
                                   (this->fMotiveEffects,ads->fAds);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjTestSim.h */
                    /* end of inlined section */
                scoredInteraction.fAttenScore = (fVar22 - fVar20) * fVar24;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
                scoredInteraction._12_4_ = (i.m_pInteraction)->fFlags & 1;
                    /* end of inlined section */
                if (fVar25 <= scoredInteraction.fAttenScore) {
                    /* end of inlined section */
                  pcVar13 = GetStackObject__C11Interaction(i.m_pInteraction);
                  scoredInteraction.fStackObjectID =
                       (*(code *)pcVar13->__vtable[1].UserCanPlace)
                                 ((int)&pcVar13->_vb1019 +
                                  (int)*(short *)&pcVar13->__vtable[1].IsPartOfMe);
                    /* inlined from c:/eor/src2/games/sims/MSrc/TreeTab.h */
                  scoredInteraction.fActionIndex = ads->fIndex;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                  pSVar14 = (this->fInteractions).finish;
                  if (pSVar14 == (this->fInteractions).end_of_storage) {
                    insert_aux__t6vector2Z17ScoredInteractionZt23__malloc_alloc_template1i0P17ScoredInteractionRC17ScoredInteraction
                              (&this->fInteractions,pSVar14,&scoredInteraction);
                  }
                  else {
                    uVar10 = CONCAT44(scoredInteraction.fActionIndex,
                                      CONCAT22(scoredInteraction._2_2_,
                                               scoredInteraction.fStackObjectID));
                    puVar1 = (undefined *)((int)&pSVar14->fActionIndex + 3);
                    uVar19 = (uint)puVar1 & 7;
                    puVar8 = (ulong *)(puVar1 + -uVar19);
                    *puVar8 = *puVar8 & -1L << (uVar19 + 1) * 8 | uVar10 >> (7 - uVar19) * 8;
                    uVar19 = (uint)pSVar14 & 7;
                    *(ulong *)((int)pSVar14 - uVar19) =
                         uVar10 << uVar19 * 8 |
                         *(ulong *)((int)pSVar14 - uVar19) & 0xffffffffffffffffU >> (8 - uVar19) * 8
                    ;
                    uVar19 = (uint)&pSVar14->field_0xf & 7;
                    puVar8 = (ulong *)(&pSVar14->field_0xf + -uVar19);
                    *puVar8 = *puVar8 & -1L << (uVar19 + 1) * 8 |
                              CONCAT44(scoredInteraction._12_4_,scoredInteraction.fAttenScore) >>
                              (7 - uVar19) * 8;
                    uVar19 = (uint)&pSVar14->fAttenScore & 7;
                    puVar8 = (ulong *)((int)&pSVar14->fAttenScore - uVar19);
                    *puVar8 = CONCAT44(scoredInteraction._12_4_,scoredInteraction.fAttenScore) <<
                              uVar19 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar19) * 8;
                    (this->fInteractions).finish = (this->fInteractions).finish + 1;
                  }
                }
              }
                    /* end of inlined section */
              __pp__Q215InteractionList8iterator(&i);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjTestSim.h */
                    /* end of inlined section */
            } while (i.m_pInteraction != (Interaction *)0x0);
          }
        }
      }
      if (iVar11 < iVar18 + 1) break;
      pcVar12 = this->_vb901;
      iVar18 = iVar18 + 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    pSVar14 = (this->fInteractions).finish;
  }
  pSVar16 = (this->fInteractions).start;
  uVar19 = (int)pSVar14 - (int)pSVar16 >> 4;
                    /* end of inlined section */
  if (0 < (int)uVar19) {
                    /* end of inlined section */
    qsort(pSVar16,uVar19,0x10,CompareScoredInteractions__FPCvT0);
    iVar18 = gInteractionRandCount;
    iVar11 = 0;
    if (this->fPersonData[0x20] == 0) {
      bVar9 = 0 < (int)uVar19;
      if (*(int *)&pSVar16->fAutoFirstSelect == 0) {
        if ((int)uVar19 < gInteractionRandCount) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/SRand.h */
          iVar11 = GetNextRandomNumber__Fv();
          iVar11 = iVar11 % (int)uVar19;
          if (uVar19 == 0) {
            trap(7);
          }
                    /* end of inlined section */
          bVar9 = iVar11 < (int)uVar19;
        }
        else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/SRand.h */
          iVar11 = GetNextRandomNumber__Fv();
          iVar11 = iVar11 % iVar18;
          if (iVar18 == 0) {
            trap(7);
          }
                    /* end of inlined section */
          bVar9 = iVar11 < (int)uVar19;
        }
      }
    }
    else {
      bVar9 = 0 < (int)uVar19;
    }
    if (bVar9) {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      bVar9 = true;
      pcVar2 = this->_vb1079->__vtable;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      pSVar14 = (this->fInteractions).start + iVar11;
                    /* end of inlined section */
      lVar15 = (*(code *)pcVar2->ClearRecording)
                         ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar2->StopRecording);
      if ((lVar15 != 0) && (pSVar14->fAttenScore < gMinAutonomySittingScore)) {
        bVar9 = false;
      }
      if (bVar9) {
        this->_vb901->fData[0x14] = *(ushort *)&pSVar14->fActionIndex;
        elem->fObjectID = pSVar14->fStackObjectID;
        ___10ObjTestSim(&testSim,2);
        return kTrueComplete;
      }
    }
  }
  ___10ObjTestSim(&testSim,2);
  return kFalseComplete;
}

void cXPersonImpl::Skipping3D() {
  cXPerson__123_1079__vtable *pcVar1;
  int *piVar2;
  long lVar3;
  
  pcVar1 = this->_vb1079->__vtable;
  lVar3 = (*(code *)pcVar1->GetPersonImplementation)
                    ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar1->GetControllingObject);
  if (lVar3 != 0) {
    pcVar1 = this->_vb1079->__vtable;
    piVar2 = (int *)(*(code *)pcVar1->GetPersonImplementation)
                              ((int)&this->_vb1079->_vb966 +
                               (int)*(short *)&pcVar1->GetControllingObject);
    (**(code **)(*piVar2 + 0xcc))((int)piVar2 + (int)*(short *)(*piVar2 + 200));
  }
  return;
}

void cXPersonImpl::UpdateCurrentRoom() {
	short unsigned int newRoomID;
	RoomManager *room_mgr;
	Room *oldRoom;
	Room *newRoom;
	short unsigned int inID;
	
  cXObject__21_1030 *pcVar1;
  cXObject__21_1030__vtable *pcVar2;
  int iVar3;
  RoomManager *pRVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  
  pcVar1 = this->_vb901->_vb966;
  pcVar2 = pcVar1->__vtable;
  uVar5 = (*(code *)pcVar2[1].ParseUIString)
                    ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2[1].RunTree);
  if (uVar5 != (ushort)this->fCurrentRoom) {
    pRVar4 = GetRoomManager__11RoomManager();
                    /* end of inlined section */
    lVar7 = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/rooms.h */
                    /* end of inlined section */
    lVar8 = 0;
    if ((ushort)this->fCurrentRoom < 0xfffb) {
      lVar7 = (*(code *)pRVar4->__vtable->ClearRoomPartitions)
                        ((int)&pRVar4->__vtable + (int)*(short *)&pRVar4->__vtable->GetHouse);
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/rooms.h */
                    /* end of inlined section */
    if (uVar5 < 0xfffb) {
      lVar8 = (*(code *)pRVar4->__vtable->ClearRoomPartitions)
                        ((int)&pRVar4->__vtable + (int)*(short *)&pRVar4->__vtable->GetHouse,uVar5);
    }
    this->fCurrentRoom = (short)uVar5;
    if (lVar7 != 0) {
      piVar6 = (int *)lVar7;
      lVar7 = (**(code **)(*piVar6 + 0xbc))((int)piVar6 + (int)*(short *)(*piVar6 + 0xb8));
      if (lVar7 == 0) {
        (**(code **)(*piVar6 + 0xb4))((int)piVar6 + (int)*(short *)(*piVar6 + 0xb0),0);
      }
    }
    if (lVar8 != 0) {
      iVar3 = *(int *)lVar8;
      (**(code **)(iVar3 + 0xb4))((int)(int *)lVar8 + (int)*(short *)(iVar3 + 0xb0),1);
    }
  }
  return;
}

void cXPersonImpl::Place(FTilePt &loc, Int inLevel, cXObject *ontop, Int slotNum) {
  cXPerson__123_1079__vtable *pcVar1;
  
  Place__12cXObjectImplRC7FTilePtiP8cXObjecti
            ((cXObjectImpl__127_901 *)this->_vb901,loc,inLevel,ontop,slotNum);
  pcVar1 = this->_vb1079->__vtable;
  (**(code **)&pcVar1->field_0x13c)
            ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar1->field_0x138);
  return;
}

bool cXPersonImpl::IsSelected() {
  return (bool)((byte)(this->_vb901->fMiscFlags >> 1) & 1);
}

void cXPersonImpl::ForceLocation() {
  SAnimator__vtable *pSVar1;
  
  pSVar1 = this->fAnimator->__vtable;
  (*(code *)pSVar1->StartReachAnimation)
            ((int)&this->fAnimator->__vtable + (int)*(short *)&pSVar1->IsInterruptable);
  this->fPersonData[0x40] = 0;
  return;
}

bool cXPersonImpl::GosubObjectTree(cXObject *obj, StdPrm *stackVals, SInt16 treeID, bool hasIcon) {
	ObjectRecord newRec;
	cXObject *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	cXObject *this;
	
  undefined *puVar1;
  TreeSim *pTVar2;
  TreeSim__vtable *pTVar3;
  ObjectRecord *position;
  uint uVar4;
  ulong *puVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  ObjectRecord newRec;
  
  bVar6 = GosubObjectTree__12cXObjectImplP8cXObjectPssb
                    ((cXObjectImpl__127_901 *)this->_vb901,obj,stackVals,treeID,hasIcon);
  bVar7 = false;
  if (bVar6) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    if (obj == (cXObject__21_1030 *)0x0) {
      newRec.fObject = (cXObjectImpl__123_901 *)0x0;
    }
    else {
      newRec.fObject =
           (cXObjectImpl__123_901 *)
           (*(code *)obj->__vtable[1].GetObjectImplementation)
                     ((int)&obj->_vb899 + (int)*(short *)&obj->__vtable[1].AdvanceGraphic);
    }
                    /* end of inlined section */
    pTVar2 = this->_vb901->_vb1233->_vb899;
    pTVar3 = pTVar2->__vtable;
    newRec.fStackLevel =
         (*(code *)pTVar3[1].ClearError)
                   ((int)&pTVar2->m_pObject + (int)*(short *)&pTVar3[1].GetError);
    newRec._8_4_ = (int)hasIcon;
    if (hasIcon) {
      SetIconObject__11InteractionP8cXObject(&this->fCurrentAction,(cXObject__142_982 *)obj);
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    position = (this->fObjectRecords).finish;
    if (position == (this->fObjectRecords).end_of_storage) {
      insert_aux__t6vector2Z12ObjectRecordZt23__malloc_alloc_template1i0P12ObjectRecordRC12ObjectRecord
                (&this->fObjectRecords,position,&newRec);
    }
    else {
      puVar1 = (undefined *)((int)&position->fStackLevel + 3);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 |
                CONCAT44(newRec.fStackLevel,newRec.fObject) >> (7 - uVar4) * 8;
      uVar4 = (uint)position & 7;
      *(ulong *)((int)position - uVar4) =
           CONCAT44(newRec.fStackLevel,newRec.fObject) << uVar4 * 8 |
           *(ulong *)((int)position - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      *(int *)&position->fHasIcon = newRec._8_4_;
      (this->fObjectRecords).finish = (this->fObjectRecords).finish + 1;
    }
    if (obj == (cXObject__21_1030 *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (*(code *)obj->__vtable[1].GetObjectImplementation)
                        ((int)&obj->_vb899 + (int)*(short *)&obj->__vtable[1].AdvanceGraphic);
    }
                    /* end of inlined section */
    bVar7 = true;
    *(short *)(iVar8 + 0xa2) = *(short *)(iVar8 + 0xa2) + 1;
  }
  return bVar7;
}

void cXPersonImpl::StackJustPopped() {
	Int newStackSize;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	ObjectRecord *last;
	ObjectRecord *i;
	ObjectRecord *position;
	ObjectRecord *result;
	ObjectRecord *result;
	ObjectRecord *result;
	ObjectRecord *first;
	ptrdiff_t n;
	ObjectRecord *position;
	ObjectRecord *result;
	ObjectRecord *result;
	ObjectRecord *result;
	ObjectRecord *first;
	ptrdiff_t n;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  TreeSim *pTVar4;
  TreeSim__vtable *pTVar5;
  undefined4 uVar6;
  ulong *puVar7;
  int iVar8;
  ObjectRecord *pOVar9;
  ulong uVar10;
  ulong in_t1;
  ObjectRecord *pOVar11;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  ObjectRecord *pOVar12;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  Interaction IStack_a0;
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
  
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  pTVar4 = this->_vb901->_vb1233->_vb899;
  pTVar5 = pTVar4->__vtable;
  iVar8 = (*(code *)pTVar5[1].ClearError)
                    ((int)&pTVar4->m_pObject + (int)*(short *)&pTVar5[1].GetError);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pOVar9 = (this->fObjectRecords).finish;
  uVar10 = 0xffffffffaaaaaaab;
                    /* end of inlined section */
  pOVar12 = pOVar9 + -1;
  if (((int)pOVar9 - (int)(this->fObjectRecords).start) * -0x55555555 >> 2 != 0) {
                    /* end of inlined section */
    if (iVar8 == pOVar9[-1].fStackLevel + -1) {
      (pOVar9[-1].fObject)->fData[0x3e] = (pOVar9[-1].fObject)->fData[0x3e] - 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      pOVar11 = (this->fObjectRecords).start;
                    /* end of inlined section */
      if (pOVar11 != (this->fObjectRecords).finish) {
        iVar8 = *(int *)&pOVar11->fHasIcon;
        while( true ) {
          if (iVar8 != 0) {
            uVar10 = 0;
            if (pOVar11->fObject != (cXObjectImpl__123_901 *)0x0) {
              uVar10 = (ulong)(int)pOVar11->fObject->_vb966;
            }
            SetIconObject__11InteractionP8cXObject
                      (&this->fCurrentAction,(cXObject__142_982 *)uVar10);
          }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
          if (pOVar11 + 1 == (this->fObjectRecords).finish) break;
          iVar8 = *(int *)&pOVar11[1].fHasIcon;
          pOVar11 = pOVar11 + 1;
        }
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      pOVar11 = (this->fObjectRecords).finish;
      if (pOVar9 != pOVar11) {
        for (iVar8 = ((int)pOVar11 - (int)pOVar9) * -0x55555555 >> 2; 0 < iVar8; iVar8 = iVar8 + -1)
        {
          puVar1 = (undefined *)((int)&pOVar9->fStackLevel + 3);
          uVar2 = (uint)puVar1 & 7;
          uVar3 = (uint)pOVar9 & 7;
          uVar10 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                   uVar10 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                   *(ulong *)((int)pOVar9 - uVar3) >> uVar3 * 8;
          uVar6 = *(undefined4 *)&pOVar9->fHasIcon;
          puVar1 = (undefined *)((int)&pOVar12->fStackLevel + 3);
          uVar2 = (uint)puVar1 & 7;
          puVar7 = (ulong *)(puVar1 + -uVar2);
          *puVar7 = *puVar7 & -1L << (uVar2 + 1) * 8 | uVar10 >> (7 - uVar2) * 8;
          uVar2 = (uint)pOVar12 & 7;
          *(ulong *)((int)pOVar12 - uVar2) =
               uVar10 << uVar2 * 8 |
               *(ulong *)((int)pOVar12 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
          *(undefined4 *)&pOVar12->fHasIcon = uVar6;
          pOVar9 = pOVar9 + 1;
          pOVar12 = pOVar12 + 1;
        }
      }
                    /* end of inlined section */
      (this->fObjectRecords).finish = (this->fObjectRecords).finish + -1;
    }
    else if (iVar8 < pOVar9[-1].fStackLevel) {
      (pOVar9[-1].fObject)->fData[0x3e] = (pOVar9[-1].fObject)->fData[0x3e] - 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      pOVar11 = (this->fObjectRecords).finish;
      if (pOVar9 != pOVar11) {
        for (iVar8 = ((int)pOVar11 - (int)pOVar9) * -0x55555555 >> 2; 0 < iVar8; iVar8 = iVar8 + -1)
        {
          puVar1 = (undefined *)((int)&pOVar9->fStackLevel + 3);
          uVar2 = (uint)puVar1 & 7;
          uVar3 = (uint)pOVar9 & 7;
          in_t1 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                  in_t1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                  *(ulong *)((int)pOVar9 - uVar3) >> uVar3 * 8;
          uVar6 = *(undefined4 *)&pOVar9->fHasIcon;
          puVar1 = (undefined *)((int)&pOVar12->fStackLevel + 3);
          uVar2 = (uint)puVar1 & 7;
          puVar7 = (ulong *)(puVar1 + -uVar2);
          *puVar7 = *puVar7 & -1L << (uVar2 + 1) * 8 | in_t1 >> (7 - uVar2) * 8;
          uVar2 = (uint)pOVar12 & 7;
          *(ulong *)((int)pOVar12 - uVar2) =
               in_t1 << uVar2 * 8 |
               *(ulong *)((int)pOVar12 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
          *(undefined4 *)&pOVar12->fHasIcon = uVar6;
          pOVar9 = pOVar9 + 1;
          pOVar12 = pOVar12 + 1;
        }
      }
      (this->fObjectRecords).finish = (this->fObjectRecords).finish + -1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    if (((int)(this->fObjectRecords).finish - (int)(this->fObjectRecords).start) * -0x55555555 >> 2
        == 0) {
      __11Interaction(&IStack_a0);
      SetCurrentAction__12cXPersonImplRC11Interaction(this,&IStack_a0);
      ___8BString2(&IStack_a0.fName,2);
    }
  }
  return;
}

void cXPersonImpl::SetCurrentAction(Interaction &curAction) {
	Interaction *this;
	Interaction *this;
	Interaction &_ctor_arg;
	MotiveInc *first;
	MotiveInc *last;
	MotiveInc *pointer;
	
  TreeSim *pTVar1;
  TreeSim__vtable *pTVar2;
  MotiveInc *pMVar3;
  cXObjectImpl__127_901 *this_00;
  ushort uVar4;
  cXObject__142_982 *pcVar5;
  long lVar6;
  MotiveInc *pMVar7;
  ushort *puVar8;
  uint uVar9;
  ushort *puVar10;
  int iVar11;
  
  pcVar5 = GetStackObject__C11Interaction(&this->fCurrentAction);
  if (pcVar5 != (cXObject__142_982 *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
    puVar10 = (this->fLastAction).fStackVars;
    (this->fLastAction).m_pNextItem = (this->fCurrentAction).m_pNextItem;
    iVar11 = 3;
    puVar8 = (this->fCurrentAction).fStackVars;
    (this->fLastAction).fType = (this->fCurrentAction).fType;
    (this->fLastAction).fPerson = (this->fCurrentAction).fPerson;
    (this->fLastAction).fStackObject = (this->fCurrentAction).fStackObject;
    (this->fLastAction).fIconObject = (this->fCurrentAction).fIconObject;
    (this->fLastAction).fTreeTabEntryIndex = (this->fCurrentAction).fTreeTabEntryIndex;
    do {
      uVar4 = *puVar8;
      iVar11 = iVar11 + -1;
      puVar8 = puVar8 + 1;
      *puVar10 = uVar4;
      puVar10 = puVar10 + 1;
    } while (iVar11 != -1);
    (this->fLastAction).fPriority = (this->fCurrentAction).fPriority;
    (this->fLastAction).fTreeID = (this->fCurrentAction).fTreeID;
    (this->fLastAction).fAttenuation = (this->fCurrentAction).fAttenuation;
    __as__8BString2RC8BString2(&(this->fLastAction).fName,&(this->fCurrentAction).fName);
    (this->fLastAction).fMenuItem = (this->fCurrentAction).fMenuItem;
    (this->fLastAction).fSubMenuItem = (this->fCurrentAction).fSubMenuItem;
    (this->fLastAction).fID = (this->fCurrentAction).fID;
    (this->fLastAction).fFlags = (this->fCurrentAction).fFlags;
                    /* end of inlined section */
    pTVar1 = this->_vb901->_vb1233->_vb899;
    pTVar2 = pTVar1->__vtable;
    lVar6 = (*(code *)pTVar2[1].GetLastTransition)
                      ((int)&pTVar1->m_pObject + (int)*(short *)&pTVar2[1].GetIterations);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
    uVar9 = (this->fLastAction).fFlags & 0xffffffdf;
    (this->fLastAction).fFlags = uVar9;
    if (lVar6 != 0) {
      (this->fLastAction).fFlags = uVar9 | 0x20;
    }
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
  puVar10 = (this->fCurrentAction).fStackVars;
  (this->fCurrentAction).m_pNextItem = curAction->m_pNextItem;
  iVar11 = 3;
  puVar8 = curAction->fStackVars;
  (this->fCurrentAction).fType = curAction->fType;
  (this->fCurrentAction).fPerson = curAction->fPerson;
  (this->fCurrentAction).fStackObject = curAction->fStackObject;
  (this->fCurrentAction).fIconObject = curAction->fIconObject;
  (this->fCurrentAction).fTreeTabEntryIndex = curAction->fTreeTabEntryIndex;
  do {
    uVar4 = *puVar8;
    iVar11 = iVar11 + -1;
    puVar8 = puVar8 + 1;
    *puVar10 = uVar4;
    puVar10 = puVar10 + 1;
  } while (iVar11 != -1);
  (this->fCurrentAction).fPriority = curAction->fPriority;
  (this->fCurrentAction).fTreeID = curAction->fTreeID;
  (this->fCurrentAction).fAttenuation = curAction->fAttenuation;
  __as__8BString2RC8BString2(&(this->fCurrentAction).fName,&curAction->fName);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
  (this->fCurrentAction).fMenuItem = curAction->fMenuItem;
  (this->fCurrentAction).fSubMenuItem = curAction->fSubMenuItem;
  (this->fCurrentAction).fID = curAction->fID;
                    /* end of inlined section */
  (this->fCurrentAction).fFlags = curAction->fFlags;
  pcVar5 = GetStackObject__C11Interaction(&this->fCurrentAction);
  if (pcVar5 == (cXObject__142_982 *)0x0) {
    uVar4 = (ushort)(this->fCurrentAction).fPriority;
  }
  else {
    this->fPersonData[0x26] = 0;
    this->fPersonData[0x27] = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
                    /* end of inlined section */
    if ((this->fCurrentAction).fID == 0) {
      SetUniqueID__11Interaction(&this->fCurrentAction);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
      uVar4 = (ushort)(this->fCurrentAction).fPriority;
    }
    else {
      uVar4 = (ushort)(this->fCurrentAction).fPriority;
    }
  }
                    /* end of inlined section */
  this->fPersonData[0x21] = uVar4;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
  pMVar3 = (this->fMotiveIncs).start;
  for (pMVar7 = pMVar3; pMVar7 != (this->fMotiveIncs).finish; pMVar7 = pMVar7 + 1) {
  }
  (this->fMotiveIncs).finish = pMVar3;
                    /* end of inlined section */
  if (this->fPersonData[0x49] == 0) {
    this->fPersonData[0x47] = 0;
  }
  else {
    this_00 = (cXObjectImpl__127_901 *)this->_vb901;
    this->fPersonData[0x49] = 0;
    ComputeRect__12cXObjectImplRC7FTilePtP9FTileRect(this_00,&this_00->fLocation,&this_00->fRect);
    this->fPersonData[0x47] = 0;
  }
  this->fPersonData[0x48] = 0;
  return;
}

void cXPersonImpl::Cleanup(cXObject *respect) {
	bool cleanupAll;
	bool involved;
	ObjectRecord *i;
	FTilePt loc;
	int lev;
	cXObjectImpl *obj;
	int targetStackSize;
	XRoute *first;
	XRoute *last;
	XRoute *pointer;
	XRoute *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	RouteGoal *first;
	RouteGoal *last;
	RouteGoal *pointer;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	void *pAddress;
	FindGoodLocationParams fglp;
	int level;
	bool inQueue;
	int count;
	Queue<Interaction,8> *this;
	QueueSizeType depth;
	ActionQueue copy;
	Queue<Interaction,8> *this;
	Interaction tmp;
	Interaction *this;
	Interaction &elem;
	Interaction &_ctor_arg;
	Interaction *this;
	Interaction tmp;
	Interaction &elem;
	Interaction &_ctor_arg;
	Interaction *this;
	Queue<Interaction,8> *this;
	Interaction &elem;
	Interaction &_ctor_arg;
	Interaction *this;
	Interaction *this;
	void *pAddress;
	Interaction &_ctor_arg;
	XRoute *rt;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	XRoute *this;
	XRoute *this;
	XRoute *this;
	Queue<Interaction,8> *this;
	
  undefined *puVar1;
  ObjectRecord *pOVar2;
  cXPerson__123_1079__vtable *pcVar3;
  ObjectModule *pOVar4;
  ObjectModule__vtable *pOVar5;
  SAnimator__vtable *pSVar6;
  SpriteSlot *this_00;
  RouteGoal *pRVar7;
  uint uVar8;
  ulong *puVar9;
  bool bVar10;
  int *piVar11;
  ushort uVar12;
  CTGDump *pCVar13;
  char *inString;
  cXObjectImpl__123_901 *pcVar14;
  int iVar15;
  RouteGoal *pRVar16;
  cXPerson__123_1079 *pcVar17;
  Behavior *startBehavior;
  cXObject__142_982 *pcVar18;
  uint uVar19;
  cXPerson__109_1171 *pcVar20;
  XRoute *pXVar21;
  long lVar22;
  ObjectRecord *pOVar23;
  XRoute *pXVar24;
  uint uVar25;
  cXObject__21_1030__vtable *pcVar26;
  ushort *puVar27;
  XRoute *pXVar28;
  ulong uVar29;
  cXObject__21_1030 *pcVar30;
  ushort *puVar31;
  FInt *pFVar32;
  XRoute *pXVar33;
  Interaction *pIVar34;
  Queue_Interaction_8_ *this_01;
  cXPersonImpl__142_963 **ppcVar35;
  int iVar36;
  uint uVar37;
  Interaction *this_02;
  undefined local_330 [7];
  undefined auStack_329 [9];
  FindGoodLocationParams fglp;
  Interaction local_300;
  Queue_Interaction_8_ copy;
  Interaction *local_b0;
  Interaction *local_ac;
  Queue_Interaction_8_ *local_a8;
  
  pcVar30 = this->_vb901->_vb966;
  pcVar26 = pcVar30->__vtable;
  lVar22 = (*(code *)pcVar26->IsBeingDraggedAround)
                     ((int)&pcVar30->_vb899 + (int)*(short *)&pcVar26->IsEmissive,0x800);
  if (lVar22 != 0) {
    pCVar13 = __ls__7CTGDumpPCc(&ctgDump,"already cleaning up ");
    pcVar30 = this->_vb901->_vb966;
    pcVar26 = pcVar30->__vtable;
    inString = (char *)(*(code *)pcVar26[1].ReconSlots)
                                 ((int)&pcVar30->_vb899 + (int)*(short *)&pcVar26[1].ReconType);
    pCVar13 = __ls__7CTGDumpPCc(pCVar13,inString);
    __ls__7CTGDumpPCc(pCVar13,"\n");
    return;
  }
  pcVar30 = this->_vb901->_vb966;
  pcVar26 = pcVar30->__vtable;
  (*(code *)pcVar26->ResetDamage)
            ((int)&pcVar30->_vb899 + (int)*(short *)&pcVar26->SetLastDamage,0x800,1);
  if (respect == (cXObject__21_1030 *)0x0) {
    pcVar30 = this->_vb901->_vb966;
    pcVar26 = pcVar30->__vtable;
    lVar22 = (*(code *)pcVar26->IsBeingDraggedAround)
                       ((int)&pcVar30->_vb899 + (int)*(short *)&pcVar26->IsEmissive,0x1000);
  }
  else {
    lVar22 = (*(code *)respect->__vtable->IsBeingDraggedAround)
                       ((int)&respect->_vb899 + (int)*(short *)&respect->__vtable->IsEmissive,0x1000
                       );
  }
  bVar10 = false;
  if (respect == (cXObject__21_1030 *)0x0) {
    bVar10 = true;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    pOVar23 = (this->fObjectRecords).start;
    pOVar2 = (this->fObjectRecords).finish;
                    /* end of inlined section */
    if (pOVar23 != pOVar2) {
      pcVar14 = pOVar23->fObject;
      do {
        if (pcVar14 == (cXObjectImpl__123_901 *)0x0) {
          if (respect == (cXObject__21_1030 *)0x0) goto LAB_00220c18;
        }
        else if (pcVar14->_vb966 == respect) {
LAB_00220c18:
          bVar10 = true;
        }
        pOVar23 = pOVar23 + 1;
        if (pOVar23 == pOVar2) break;
        pcVar14 = pOVar23->fObject;
      } while( true );
    }
    if (!bVar10) {
      pcVar18 = GetIconObject__C11Interaction(&this->fCurrentAction);
      bVar10 = false;
      if (pcVar18 != (cXObject__142_982 *)respect) goto LAB_00220c4c;
    }
    bVar10 = true;
  }
LAB_00220c4c:
  if (bVar10) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    local_ac = &local_300;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    if (((int)(this->fObjectRecords).finish - (int)(this->fObjectRecords).start) * -0x55555555 >> 2
        != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      pOVar23 = (this->fObjectRecords).finish;
      while( true ) {
                    /* end of inlined section */
        iVar36 = pOVar23[-1].fStackLevel;
        pcVar14 = pOVar23[-1].fObject;
        while (iVar15 = GetStackSize__9TreeStack(&this->_vb901->_vb1233->fStack),
              iVar36 + -1 < iVar15) {
          Pop__9TreeStack(&this->_vb901->_vb1233->fStack);
          pcVar3 = this->_vb1079->__vtable;
          (*(code *)pcVar3->GetIndAction)
                    ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar3->CountActions);
        }
        pcVar30 = (cXObject__21_1030 *)0x0;
        if (lVar22 == 0) {
          pOVar4 = this->_vb901->fModule;
          pOVar5 = pOVar4->__vtable;
          if (pcVar14 != (cXObjectImpl__123_901 *)0x0) {
            pcVar30 = pcVar14->_vb966;
          }
          (*(code *)pOVar5[1].Init)
                    ((int)&pOVar4->__vtable + (int)*(short *)&pOVar5[1].ObjectModule,pcVar30);
          (*(code *)pcVar14->__vtable->PostLoad)
                    ((int)pcVar14->fTemp + *(short *)&pcVar14->__vtable->Reset + -0x16,0);
        }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
        if (((int)(this->fObjectRecords).finish - (int)(this->fObjectRecords).start) * -0x55555555
            >> 2 == 0) break;
        pOVar23 = (this->fObjectRecords).finish;
      }
    }
    pSVar6 = this->fAnimator->__vtable;
    (*(code *)pSVar6[1].StopReachAnimation)
              ((int)&this->fAnimator->__vtable + (int)*(short *)&pSVar6[1].IsReachDone,0);
    pSVar6 = this->fAnimator->__vtable;
    (*(code *)pSVar6->SetAnimDisplacements)
              ((int)&this->fAnimator->__vtable + (int)*(short *)&pSVar6->TryChangeSuit);
    pSVar6 = this->fAnimator->__vtable;
    (*(code *)pSVar6->FollowOneStep)
              ((int)&this->fAnimator->__vtable + (int)*(short *)&pSVar6->BeginFollow);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    this_00 = (this->_vb901->fSpriteSlots).start;
    uVar29 = (ulong)(int)this_00;
    ActivateForTicks__10SpriteSloti(this_00,0);
    pXVar28 = (this->fRouteStack).start;
    pXVar21 = (this->fRouteStack).finish;
    if (pXVar28 != pXVar21) {
      pRVar16 = (pXVar28->field0_0x0).start;
      pXVar24 = pXVar28;
      while( true ) {
        pXVar33 = pXVar24 + 1;
        pRVar7 = (pXVar24->field0_0x0).finish;
        (pXVar24->fSlot).field0_0x0.__vtable = (Slot__vtable *)_vt_4Slot;
        for (; pRVar16 != pRVar7; pRVar16 = pRVar16 + 1) {
        }
        pRVar16 = (pXVar24->field0_0x0).start;
        uVar29 = (ulong)(int)pRVar16;
        if ((uVar29 != 0) && ((int)(pXVar24->field0_0x0).end_of_storage - (int)pRVar16 >> 4 != 0)) {
          free(pRVar16);
        }
        if (pXVar33 == pXVar21) break;
        pRVar16 = (pXVar33->field0_0x0).start;
        pXVar24 = pXVar33;
      }
    }
    (this->fRouteStack).finish =
         (XRoute *)((int)(this->fRouteStack).finish - ((int)pXVar21 - (int)pXVar28));
                    /* end of inlined section */
    pcVar14 = this->_vb901;
    puVar1 = (undefined *)((int)&(pcVar14->fLocation).x.whole + 3);
    uVar37 = (uint)puVar1 & 7;
    uVar19 = (uint)&pcVar14->fLocation & 7;
    _local_330 = (*(long *)(puVar1 + -uVar37) << (7 - uVar37) * 8 |
                 uVar29 & 0xffffffffffffffffU >> (uVar37 + 1) * 8) & -1L << (8 - uVar19) * 8 |
                 *(ulong *)((int)&pcVar14->fLocation - uVar19) >> uVar19 * 8;
    puVar1 = local_330 + 7;
    uVar37 = (uint)puVar1 & 7;
    *(ulong *)(puVar1 + -uVar37) =
         *(ulong *)(puVar1 + -uVar37) & -1L << (uVar37 + 1) * 8 | _local_330 >> (7 - uVar37) * 8;
    iVar36 = pcVar14->fLevel;
    pcVar26 = pcVar14->_vb966->__vtable;
    (*(code *)pcVar26->GetData)((int)&pcVar14->_vb966->_vb899 + (int)*(short *)&pcVar26->GetRect);
    pcVar30 = this->_vb901->_vb966;
    pcVar26 = pcVar30->__vtable;
    lVar22 = (*(code *)pcVar26->IsBeingDraggedAround)
                       ((int)&pcVar30->_vb899 + (int)*(short *)&pcVar26->IsEmissive,0x40);
    if (lVar22 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      lVar22 = (*(code *)_5Globs_pFixedWorld->__vtable->SetWallStorage)
                         ((int)&_5Globs_pFixedWorld->__vtable +
                          (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetWallStorage,local_330);
      if (lVar22 == 0) {
        uVar12 = this->fPersonData[0];
      }
      else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
        iVar15 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                           ((int)&_5Globs_pFixedWorld->__vtable +
                            (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
        _local_330 = _local_330 & 0xffffffff |
                     (ulong)(iVar15 / 2 << 4 | stack0xfffffcd4 & 0xf) << 0x20;
                    /* end of inlined section */
        iVar15 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                           ((int)&_5Globs_pFixedWorld->__vtable +
                            (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
        _local_330 = _local_330 & 0xfffffff000000000 | (ulong)(uint)(iVar15 / 2 << 4) | 0x800000008;
                    /* end of inlined section */
        uVar12 = this->fPersonData[0];
      }
      if (((uVar12 == 0) && (this->fPersonData[0x40] == 0)) &&
         (pcVar30 = this->_vb901->_vb966, pcVar26 = pcVar30->__vtable,
         lVar22 = (*(code *)pcVar26->GetAttr)
                            ((int)&pcVar30->_vb899 + (int)*(short *)&pcVar26->GetTemp,local_330,
                             iVar36,0), lVar22 != 0)) {
        pcVar17 = this->_vb1079;
      }
      else {
        fglp._20_4_ = 1;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/FindGoodLocationParams.h */
        fglp.fDirectionVector = -1;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/FindGoodLocationParams.h */
        fglp._24_4_ = 1.401298e-45;
        fglp._28_4_ = 0;
        fglp._0_4_ = (cXObjectImpl__15_3423 *)&pGifTag1;
        puVar1 = (undefined *)((int)&fglp.fLocation.x.whole + 3);
        uVar37 = (uint)puVar1 & 7;
        puVar9 = (ulong *)(puVar1 + -uVar37);
        *puVar9 = *puVar9 & -1L << (uVar37 + 1) * 8 | _local_330 >> (7 - uVar37) * 8;
        uVar37 = (uint)&fglp.fLocation & 7;
        puVar9 = (ulong *)((int)&fglp.fLocation - uVar37);
        *puVar9 = _local_330 << uVar37 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar37) * 8;
        fglp._20_4_ = 1;
        fglp._24_4_ = 0.0;
                    /* end of inlined section */
        pcVar30 = this->_vb901->_vb966;
        pcVar26 = pcVar30->__vtable;
        fglp.fLevel = iVar36;
        lVar22 = (*(code *)pcVar26->GetRoom)
                           ((int)&pcVar30->_vb899 + (int)*(short *)&pcVar26->GetPrevObjectSibling,
                            &fglp,local_330);
        if (lVar22 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/FindGoodLocationParams.h */
          fglp._20_4_ = 0;
                    /* end of inlined section */
          pcVar30 = this->_vb901->_vb966;
          pcVar26 = pcVar30->__vtable;
          (*(code *)pcVar26->GetRoom)
                    ((int)&pcVar30->_vb899 + (int)*(short *)&pcVar26->GetPrevObjectSibling,&fglp,
                     local_330);
          pcVar17 = this->_vb1079;
        }
        else {
          pcVar17 = this->_vb1079;
        }
      }
      pcVar26 = pcVar17->_vb966->__vtable;
      (*(code *)pcVar26->GetAdultAnimTable)
                ((int)&pcVar17->_vb966->_vb899 + (int)*(short *)&pcVar26->GetModule,local_330,iVar36
                 ,0,0);
      pcVar30 = this->_vb1079->_vb966;
      pcVar26 = pcVar30->__vtable;
      (*(code *)pcVar26->GetCTilePt)((int)&pcVar30->_vb899 + (int)*(short *)&pcVar26->GetLevel);
      pcVar14 = this->_vb901;
    }
    else {
      pcVar14 = this->_vb901;
    }
    this->fPersonData[0] = 0;
    this->fPersonData[0x28] = 0;
    this->fPersonData[0x3b] = 0;
    pcVar14->fData[0x22] = 0;
    this->_vb901->fData[9] = 0;
    pcVar14 = this->_vb901;
    pcVar30 = pcVar14->_vb966;
    pcVar26 = pcVar30->__vtable;
    startBehavior =
         (Behavior *)
         (*(code *)pcVar26[1].SetData)
                   ((int)&pcVar30->_vb899 + (int)*(short *)&pcVar26[1].IsOccupied);
    pcVar30 = this->_vb901->_vb966;
    pcVar26 = pcVar30->__vtable;
    uVar12 = (*(code *)pcVar26->GetSelFile)
                       ((int)&pcVar30->_vb899 + (int)*(short *)&pcVar26->GetBehavior,1);
    Reset__11TreeSimImplP8Behaviors(pcVar14->_vb1233,startBehavior,uVar12);
    pcVar30 = this->_vb901->_vb966;
    pcVar26 = pcVar30->__vtable;
    (*(code *)pcVar26->GetInteractionLeader)
              ((int)&pcVar30->_vb899 + (int)*(short *)&pcVar26->SetObjectProbe,3,0,0);
    __11Interaction(local_ac);
    SetCurrentAction__12cXPersonImplRC11Interaction(this,local_ac);
    ___8BString2(&local_300.fName,2);
    pcVar30 = this->_vb1079->_vb966;
    pcVar26 = pcVar30->__vtable;
    (*(code *)pcVar26->GetCTilePt)((int)&pcVar30->_vb899 + (int)*(short *)&pcVar26->GetLevel);
  }
  local_b0 = &this->fCurrentAction;
  if (respect == (cXObject__21_1030 *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
                    /* end of inlined section */
    if ((this->fTreeQueue).fLast != (this->fTreeQueue).fFirst) {
      pcVar17 = this->_vb1079;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
                    /* end of inlined section */
      while ((*(code *)pcVar17->__vtable->IsGhost)
                       ((int)&pcVar17->_vb966 + (int)*(short *)&pcVar17->__vtable->IsAdult),
            (this->fTreeQueue).fLast != (this->fTreeQueue).fFirst) {
        pcVar17 = this->_vb1079;
      }
    }
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
                    /* end of inlined section */
    uVar37 = 0;
    bVar10 = false;
    this_02 = &this->fLastAction;
    if ((this->fTreeQueue).fLast != (this->fTreeQueue).fFirst) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
      uVar19 = (this->fTreeQueue).fFirst;
      do {
        pIVar34 = (this->fTreeQueue).fElems + (uVar19 & 7);
                    /* end of inlined section */
        pcVar18 = GetStackObject__C11Interaction(pIVar34);
        if ((pcVar18 == (cXObject__142_982 *)respect) ||
           (pcVar18 = GetIconObject__C11Interaction(pIVar34),
           pcVar18 == (cXObject__142_982 *)respect)) {
          bVar10 = true;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
          uVar25 = (this->fTreeQueue).fLast;
        }
        else {
          uVar25 = (this->fTreeQueue).fLast;
        }
                    /* end of inlined section */
        uVar37 = uVar37 + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
        uVar8 = (this->fTreeQueue).fFirst;
                    /* end of inlined section */
        uVar19 = uVar8 + uVar37;
      } while (uVar37 < uVar25 - uVar8);
    }
    local_a8 = (Queue_Interaction_8_ *)&copy.fFirst;
    if (bVar10) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
      this_01 = &copy;
      iVar36 = 7;
      do {
        iVar36 = iVar36 + -1;
        __11Interaction(this_01->fElems);
        this_01 = (Queue_Interaction_8_ *)(this_01->fElems + 1);
      } while (iVar36 != -1);
      copy.fLast = 0;
      copy.fFirst = 0;
                    /* end of inlined section */
      if ((this->fTreeQueue).fLast == (this->fTreeQueue).fFirst) {
        (this->fTreeQueue).fLast = 0;
      }
      else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
        uVar37 = (this->fTreeQueue).fFirst;
        do {
          pIVar34 = (this->fTreeQueue).fElems + (uVar37 & 7);
                    /* end of inlined section */
          pcVar18 = GetStackObject__C11Interaction(pIVar34);
          if (pcVar18 == (cXObject__142_982 *)respect) {
            pcVar17 = this->_vb1079;
LAB_00221244:
            (*(code *)pcVar17->__vtable->IsGhost)
                      ((int)&pcVar17->_vb966 + (int)*(short *)&pcVar17->__vtable->IsAdult);
            uVar19 = (this->fTreeQueue).fLast;
          }
          else {
            pcVar18 = GetIconObject__C11Interaction(pIVar34);
            if (pcVar18 == (cXObject__142_982 *)respect) {
              pcVar17 = this->_vb1079;
              goto LAB_00221244;
            }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
            if (copy.fLast - copy.fFirst < 8) {
              uVar37 = copy.fLast & 7;
              iVar36 = 3;
              puVar31 = pIVar34->fStackVars;
              copy.fElems[uVar37].m_pNextItem = pIVar34->m_pNextItem;
              puVar27 = copy.fElems[uVar37].fStackVars;
              copy.fElems[uVar37].fType = pIVar34->fType;
              copy.fElems[uVar37].fPerson = pIVar34->fPerson;
              copy.fElems[uVar37].fStackObject = pIVar34->fStackObject;
              copy.fElems[uVar37].fIconObject = pIVar34->fIconObject;
              copy.fElems[uVar37].fTreeTabEntryIndex = pIVar34->fTreeTabEntryIndex;
              do {
                uVar12 = *puVar31;
                iVar36 = iVar36 + -1;
                puVar31 = puVar31 + 1;
                *puVar27 = uVar12;
                puVar27 = puVar27 + 1;
              } while (iVar36 != -1);
              copy.fElems[uVar37].fPriority = pIVar34->fPriority;
              copy.fElems[uVar37].fTreeID = pIVar34->fTreeID;
              copy.fElems[uVar37].fAttenuation = pIVar34->fAttenuation;
              __as__8BString2RC8BString2(&copy.fElems[uVar37].fName,&pIVar34->fName);
              copy.fElems[uVar37].fMenuItem = pIVar34->fMenuItem;
              copy.fElems[uVar37].fSubMenuItem = pIVar34->fSubMenuItem;
              copy.fElems[uVar37].fID = pIVar34->fID;
              copy.fElems[uVar37].fFlags = pIVar34->fFlags;
              copy.fLast = copy.fLast + 1;
            }
                    /* end of inlined section */
            __11Interaction((Interaction *)local_330);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
            uVar37 = (this->fTreeQueue).fFirst;
            if (uVar37 < (this->fTreeQueue).fLast) {
              pFVar32 = &fglp.fLocation.x;
              iVar36 = 3;
              pIVar34 = (this->fTreeQueue).fElems + (uVar37 & 7);
              puVar27 = pIVar34->fStackVars;
              _local_330 = *(ulong *)pIVar34;
              auStack_329._1_4_ = pIVar34->fPerson;
              auStack_329._5_4_ = pIVar34->fStackObject;
              fglp._0_4_ = pIVar34->fIconObject;
              fglp.fLocation.y.whole = pIVar34->fTreeTabEntryIndex;
              do {
                uVar12 = *puVar27;
                iVar36 = iVar36 + -1;
                puVar27 = puVar27 + 1;
                *(ushort *)&pFVar32->whole = uVar12;
                pFVar32 = (FInt *)((int)&pFVar32->whole + 2);
              } while (iVar36 != -1);
              fglp.fDirectionVector = pIVar34->fPriority;
              fglp._20_4_ = fglp._20_4_ & 0xffff0000 | (uint)pIVar34->fTreeID;
              fglp._24_4_ = pIVar34->fAttenuation;
              __as__8BString2RC8BString2((BString2 *)&fglp.fEditableOnly,&pIVar34->fName);
              local_300.m_pNextItem = (Interaction *)pIVar34->fMenuItem;
              local_300.fType = pIVar34->fSubMenuItem;
              local_300.fPerson = (cXPersonImpl__142_963 *)pIVar34->fID;
              local_300.fStackObject = (cXObjectImpl__15_3423 *)pIVar34->fFlags;
              (this->fTreeQueue).fFirst = (this->fTreeQueue).fFirst + 1;
            }
                    /* end of inlined section */
            ___8BString2((BString2 *)&fglp.fEditableOnly,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
            uVar19 = (this->fTreeQueue).fLast;
          }
          uVar37 = (this->fTreeQueue).fFirst;
                    /* end of inlined section */
        } while (uVar19 != uVar37);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
        (this->fTreeQueue).fLast = 0;
      }
      (this->fTreeQueue).fFirst = 0;
                    /* end of inlined section */
      if (copy.fLast != copy.fFirst) {
        do {
          __11Interaction((Interaction *)local_330);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
          if (copy.fFirst < copy.fLast) {
            uVar37 = copy.fFirst & 7;
            pFVar32 = &fglp.fLocation.x;
            iVar36 = 3;
            puVar27 = copy.fElems[uVar37].fStackVars;
            _local_330 = CONCAT44(copy.fElems[uVar37].fType,copy.fElems[uVar37].m_pNextItem);
            auStack_329._1_4_ = copy.fElems[uVar37].fPerson;
            auStack_329._5_4_ = copy.fElems[uVar37].fStackObject;
            fglp._0_4_ = copy.fElems[uVar37].fIconObject;
            fglp.fLocation.y.whole = copy.fElems[uVar37].fTreeTabEntryIndex;
            do {
              uVar12 = *puVar27;
              iVar36 = iVar36 + -1;
              puVar27 = puVar27 + 1;
              *(ushort *)&pFVar32->whole = uVar12;
              pFVar32 = (FInt *)((int)&pFVar32->whole + 2);
            } while (iVar36 != -1);
            fglp.fDirectionVector = copy.fElems[uVar37].fPriority;
            fglp._20_4_ = fglp._20_4_ & 0xffff0000 | (uint)copy.fElems[uVar37].fTreeID;
            fglp._24_4_ = copy.fElems[uVar37].fAttenuation;
            __as__8BString2RC8BString2((BString2 *)&fglp.fEditableOnly,&copy.fElems[uVar37].fName);
            local_300.m_pNextItem = (Interaction *)copy.fElems[uVar37].fMenuItem;
            local_300.fType = copy.fElems[uVar37].fSubMenuItem;
            local_300.fPerson = (cXPersonImpl__142_963 *)copy.fElems[uVar37].fID;
            local_300.fStackObject = (cXObjectImpl__15_3423 *)copy.fElems[uVar37].fFlags;
            copy.fFirst = copy.fFirst + 1;
          }
          uVar37 = (this->fTreeQueue).fLast;
          if (uVar37 - (this->fTreeQueue).fFirst < 8) {
            iVar36 = 3;
            pIVar34 = (this->fTreeQueue).fElems + (uVar37 & 7);
            pFVar32 = &fglp.fLocation.x;
            pIVar34->m_pNextItem = local_330._0_4_;
            puVar27 = pIVar34->fStackVars;
            pIVar34->fType = stack0xfffffcd4;
            pIVar34->fPerson = auStack_329._1_4_;
            pIVar34->fStackObject = auStack_329._5_4_;
            pIVar34->fIconObject = fglp._0_4_;
            pIVar34->fTreeTabEntryIndex = fglp.fLocation.y.whole;
            do {
              piVar11 = &pFVar32->whole;
              iVar36 = iVar36 + -1;
              pFVar32 = (FInt *)((int)&pFVar32->whole + 2);
              *puVar27 = *(ushort *)piVar11;
              puVar27 = puVar27 + 1;
            } while (iVar36 != -1);
            pIVar34->fPriority = fglp.fDirectionVector;
            pIVar34->fTreeID = fglp._20_2_;
            pIVar34->fAttenuation = fglp._24_4_;
            __as__8BString2RC8BString2(&pIVar34->fName,(BString2 *)&fglp.fEditableOnly);
            pIVar34->fMenuItem = (int)local_300.m_pNextItem;
            pIVar34->fSubMenuItem = local_300.fType;
            pIVar34->fID = (int)local_300.fPerson;
            pIVar34->fFlags = (int)local_300.fStackObject;
            (this->fTreeQueue).fLast = (this->fTreeQueue).fLast + 1;
          }
                    /* end of inlined section */
          ___8BString2((BString2 *)&fglp.fEditableOnly,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
                    /* end of inlined section */
        } while (copy.fLast != copy.fFirst);
      }
      if (&copy != local_a8) {
        do {
          ppcVar35 = &local_a8[-1].fElems[7].fPerson;
          ___8BString2((BString2 *)&local_a8[-1].fElems[7].fSubMenuItem,2);
          local_a8 = (Queue_Interaction_8_ *)ppcVar35;
        } while (&copy != (Queue_Interaction_8_ *)ppcVar35);
      }
    }
                    /* end of inlined section */
    pcVar18 = GetStackObject__C11Interaction(this_02);
    if (pcVar18 == (cXObject__142_982 *)respect) {
      __11Interaction((Interaction *)local_330);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
      puVar27 = (this->fLastAction).fStackVars;
      iVar36 = 3;
      pFVar32 = &fglp.fLocation.x;
      (this->fLastAction).m_pNextItem = local_330._0_4_;
      (this->fLastAction).fType = stack0xfffffcd4;
      (this->fLastAction).fPerson = auStack_329._1_4_;
      (this->fLastAction).fStackObject = auStack_329._5_4_;
      (this->fLastAction).fIconObject = fglp._0_4_;
      (this->fLastAction).fTreeTabEntryIndex = fglp.fLocation.y.whole;
      do {
        piVar11 = &pFVar32->whole;
        iVar36 = iVar36 + -1;
        pFVar32 = (FInt *)((int)&pFVar32->whole + 2);
        *puVar27 = *(ushort *)piVar11;
        puVar27 = puVar27 + 1;
      } while (iVar36 != -1);
      (this->fLastAction).fPriority = fglp.fDirectionVector;
      (this->fLastAction).fTreeID = fglp._20_2_;
      (this->fLastAction).fAttenuation = fglp._24_4_;
      __as__8BString2RC8BString2(&(this->fLastAction).fName,(BString2 *)&fglp.fEditableOnly);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
      (this->fLastAction).fFlags = (int)local_300.fStackObject;
      (this->fLastAction).fMenuItem = (int)local_300.m_pNextItem;
      (this->fLastAction).fSubMenuItem = local_300.fType;
                    /* end of inlined section */
      (this->fLastAction).fID = (int)local_300.fPerson;
      ___8BString2((BString2 *)&fglp.fEditableOnly,2);
    }
    else {
      pcVar18 = GetIconObject__C11Interaction(this_02);
      if (pcVar18 == (cXObject__142_982 *)respect) {
        SetIconObject__11InteractionP8cXObject(this_02,(cXObject__142_982 *)0x0);
      }
    }
    pcVar18 = GetStackObject__C11Interaction(local_b0);
    if (pcVar18 == (cXObject__142_982 *)respect) {
      __11Interaction((Interaction *)local_330);
      SetCurrentAction__12cXPersonImplRC11Interaction(this,(Interaction *)local_330);
      ___8BString2((BString2 *)&fglp.fEditableOnly,2);
      pcVar26 = respect->__vtable;
    }
    else {
      pcVar18 = GetIconObject__C11Interaction(local_b0);
      if (pcVar18 == (cXObject__142_982 *)respect) {
        SetIconObject__11InteractionP8cXObject(local_b0,(cXObject__142_982 *)0x0);
        pcVar26 = respect->__vtable;
      }
      else {
        pcVar26 = respect->__vtable;
      }
    }
    lVar22 = (*(code *)pcVar26[1].Pickup)((int)&respect->_vb899 + (int)*(short *)&pcVar26[1].Turn);
    if (lVar22 != 2) {
      pcVar14 = this->_vb901;
      goto LAB_00221848;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    pXVar28 = (this->fRouteStack).start;
                    /* end of inlined section */
    if (pXVar28 != (this->fRouteStack).finish) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/XRouting.h */
      pcVar20 = pXVar28->fMoving;
      do {
                    /* end of inlined section */
        if (pcVar20 == (cXPerson__109_1171 *)0x0) {
          if (respect == (cXObject__21_1030 *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/XRouting.h */
            *(undefined4 *)&pXVar28->fMoveSuccess = 1;
            goto LAB_002217e8;
          }
          pXVar21 = (this->fRouteStack).finish;
        }
        else if (pcVar20->_vb1077 == (cXObject__109_1077 *)respect) {
          *(undefined4 *)&pXVar28->fMoveSuccess = 1;
LAB_002217e8:
          pXVar28->fMoving = (cXPerson__109_1171 *)0x0;
          pXVar28->fMoveInteractionID = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
          pXVar21 = (this->fRouteStack).finish;
        }
        else {
          pXVar21 = (this->fRouteStack).finish;
        }
                    /* end of inlined section */
        if (pXVar28 + 1 == pXVar21) goto code_r0x00221800;
        pcVar20 = pXVar28[1].fMoving;
        pXVar28 = pXVar28 + 1;
      } while( true );
    }
  }
  pcVar14 = this->_vb901;
LAB_00221848:
  pcVar26 = pcVar14->_vb966->__vtable;
  (*(code *)pcVar26->ResetDamage)
            ((int)&pcVar14->_vb966->_vb899 + (int)*(short *)&pcVar26->SetLastDamage,0x800,0);
  return;
code_r0x00221800:
  pcVar14 = this->_vb901;
  goto LAB_00221848;
}

void cXPersonImpl::DeleteTopAction() {
	Interaction action;
	Queue<Interaction,8> *this;
	Interaction &elem;
	Interaction &_ctor_arg;
	Interaction *this;
	
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  Interaction *pIVar6;
  Interaction action;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
                    /* end of inlined section */
  if ((this->fTreeQueue).fLast != (this->fTreeQueue).fFirst) {
    __11Interaction(&action);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
    uVar2 = (this->fTreeQueue).fFirst;
    if (uVar2 < (this->fTreeQueue).fLast) {
      puVar4 = action.fStackVars;
      pIVar6 = (this->fTreeQueue).fElems + (uVar2 & 7);
      iVar5 = 3;
      action.m_pNextItem = pIVar6->m_pNextItem;
      puVar3 = pIVar6->fStackVars;
      action.fType = pIVar6->fType;
      action.fPerson = pIVar6->fPerson;
      action.fStackObject = pIVar6->fStackObject;
      action.fIconObject = pIVar6->fIconObject;
      action.fTreeTabEntryIndex = pIVar6->fTreeTabEntryIndex;
      do {
        uVar1 = *puVar3;
        iVar5 = iVar5 + -1;
        puVar3 = puVar3 + 1;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      } while (iVar5 != -1);
      action.fPriority = pIVar6->fPriority;
      action.fTreeID = pIVar6->fTreeID;
      action.fAttenuation = pIVar6->fAttenuation;
      __as__8BString2RC8BString2(&action.fName,&pIVar6->fName);
      action.fMenuItem = pIVar6->fMenuItem;
      action.fSubMenuItem = pIVar6->fSubMenuItem;
      action.fID = pIVar6->fID;
      action.fFlags = pIVar6->fFlags;
      (this->fTreeQueue).fFirst = (this->fTreeQueue).fFirst + 1;
    }
                    /* end of inlined section */
    ActionSkipped__12cXPersonImplRC11Interaction(this,&action);
    ___8BString2(&action.fName,2);
                    /* end of inlined section */
  }
  return;
}

void cXPersonImpl::ActionSkipped(Interaction &action) {
	cXObject *obj;
	
  short sVar1;
  cXObject__142_982__vtable *pcVar2;
  cXObject__21_1030 *pcVar3;
  cXObject__21_1030__vtable *pcVar4;
  cXObject__142_982 *pcVar5;
  undefined8 uVar6;
  
  pcVar5 = GetStackObject__C11Interaction(action);
  if (pcVar5 != (cXObject__142_982 *)0x0) {
    pcVar2 = pcVar5->__vtable;
    pcVar3 = this->_vb901->_vb966;
    sVar1 = *(short *)&pcVar2->SetObjectProbe;
    pcVar4 = pcVar3->__vtable;
    uVar6 = (*(code *)pcVar4[1].UserCanPlace)
                      ((int)&pcVar3->_vb899 + (int)*(short *)&pcVar4[1].IsPartOfMe);
    (*(code *)pcVar2->GetInteractionLeader)((int)&pcVar5->_vb1019 + (int)sVar1,4,uVar6,0);
  }
  return;
}

void cXPersonImpl::DumpDestList(char *filename) {
	FILE *f;
	int cnt;
	FTilePt cur;
	unsigned int n;
	FTilePt next;
	FTilePt last;
	float t;
	FTilePt ex;
	float t;
	
  undefined *puVar1;
  uint uVar2;
  cXObject__21_1030 *pcVar3;
  cXObject__21_1030__vtable *pcVar4;
  ulong *puVar5;
  bool bVar6;
  __sFILE__432_30 *fp;
  FTilePt *pFVar7;
  FTilePt *pFVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  FTilePt cur;
  FTilePt next;
  FTilePt last;
  FTilePt ex;
  
  fp = fopen(filename,"a");
  if (fp != (__sFILE__432_30 *)0x0) {
    pcVar3 = this->_vb901->_vb966;
    pcVar4 = pcVar3->__vtable;
    (*(code *)pcVar4[1].UserCanPlace)((int)&pcVar3->_vb899 + (int)*(short *)&pcVar4[1].IsPartOfMe);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pSimulator->__vtable[1].SetMode)
              ((int)&_5Globs_pSimulator->__vtable +
               (int)*(short *)&_5Globs_pSimulator->__vtable[1].GetMode);
    fprintf(fp,"Person:%d Ticks:%d\n");
    fprintf(fp,"Location:(%d,%d)\n");
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    if ((int)(this->fDestList).field0_0x0.finish - (int)(this->fDestList).field0_0x0.start >> 3 != 0
       ) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      pFVar7 = (this->fDestList).field0_0x0.start;
      uVar10 = 0;
      while( true ) {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        pFVar7 = pFVar7 + uVar10;
        puVar1 = (undefined *)((int)&(pFVar7->x).whole + 3);
                    /* end of inlined section */
        uVar9 = (uint)puVar1 & 7;
        uVar2 = (uint)pFVar7 & 7;
        cur = (FTilePt)((*(long *)(puVar1 + -uVar9) << (7 - uVar9) * 8 |
                        (long)(int)(uVar10 * 8) & 0xffffffffffffffffU >> (uVar9 + 1) * 8) &
                        -1L << (8 - uVar2) * 8 | *(ulong *)((int)pFVar7 - uVar2) >> uVar2 * 8);
        puVar1 = (undefined *)((int)&cur.x.whole + 3);
        uVar9 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar9);
        *puVar5 = *puVar5 & -1L << (uVar9 + 1) * 8 | (ulong)cur >> (7 - uVar9) * 8;
        uVar9 = uVar10 + 1;
        fprintf(fp,"Route Pt %d:(%d,%d)\n");
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        pFVar7 = (this->fDestList).field0_0x0.start;
                    /* end of inlined section */
        if (uVar10 < ((int)(this->fDestList).field0_0x0.finish - (int)pFVar7 >> 3) - 1U) {
                    /* end of inlined section */
          fVar12 = 0.0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
          pFVar8 = pFVar7 + uVar9;
                    /* end of inlined section */
          fVar11 = 0.5;
          puVar1 = (undefined *)((int)&(pFVar8->x).whole + 3);
          uVar10 = (uint)puVar1 & 7;
          uVar2 = (uint)pFVar8 & 7;
          next = (FTilePt)((*(long *)(puVar1 + -uVar10) << (7 - uVar10) * 8 |
                           (long)(int)pFVar7 & 0xffffffffffffffffU >> (uVar10 + 1) * 8) &
                           -1L << (8 - uVar2) * 8 | *(ulong *)((int)pFVar8 - uVar2) >> uVar2 * 8);
          puVar1 = (undefined *)((int)&next.x.whole + 3);
          uVar10 = (uint)puVar1 & 7;
          puVar5 = (ulong *)(puVar1 + -uVar10);
          *puVar5 = *puVar5 & -1L << (uVar10 + 1) * 8 | (ulong)next >> (7 - uVar10) * 8;
          fVar13 = 0.01;
          puVar1 = (undefined *)((int)&last.x.whole + 3);
          uVar10 = (uint)puVar1 & 7;
          puVar5 = (ulong *)(puVar1 + -uVar10);
          *puVar5 = *puVar5 & -1L << (uVar10 + 1) * 8 | (ulong)cur >> (7 - uVar10) * 8;
          last = cur;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
          do {
            ex.x.whole = (int)((float)cur.x.whole + fVar12 * (float)(next.x.whole - cur.x.whole) +
                              fVar11);
            ex.y.whole = (int)((float)cur.y.whole + fVar12 * (float)(next.y.whole - cur.y.whole) +
                              fVar11);
            bVar6 = __eq__C7FTilePtRC7FTilePt(&ex,&last);
                    /* end of inlined section */
            if (!bVar6) {
              fprintf(fp,"Int Pt %3f:(%d,%d)\n");
              last = (FTilePt)CONCAT44(ex.x.whole,ex.y.whole);
              puVar1 = (undefined *)((int)&last.x.whole + 3);
              uVar10 = (uint)puVar1 & 7;
              puVar5 = (ulong *)(puVar1 + -uVar10);
              *puVar5 = *puVar5 & -1L << (uVar10 + 1) * 8 | (ulong)last >> (7 - uVar10) * 8;
            }
            fVar12 = fVar12 + fVar13;
          } while (fVar12 < 1.0);
        }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
        if ((uint)((int)(this->fDestList).field0_0x0.finish -
                   (int)(this->fDestList).field0_0x0.start >> 3) <= uVar9) break;
        pFVar7 = (this->fDestList).field0_0x0.start;
        uVar10 = uVar9;
      }
    }
    fprintf(fp,"\n\n");
    fclose(fp);
  }
  return;
}

bool cXPersonImpl::IsSleeping() {
  return (this->fMotives).Motive[0xb] < 0.0;
}

bool cXPersonImpl::IsChild() {
  cXPerson__123_1079__vtable *pcVar1;
  byte bVar2;
  
  pcVar1 = this->_vb1079->__vtable;
  bVar2 = (**(code **)&pcVar1->field_0x184)
                    ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar1->field_0x180);
  return (bool)(bVar2 ^ 1);
}

bool cXPersonImpl::IsMale() {
	CustomCharacter *pCustom;
	
  cXPerson__123_1079__vtable *pcVar1;
  undefined uVar2;
  int *piVar3;
  long lVar4;
  
  pcVar1 = this->_vb1079->__vtable;
  lVar4 = (*(code *)pcVar1->GetRecordTicksElapsed)
                    ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar1->GetRecordCurTicks);
  if (lVar4 == 0) {
    pcVar1 = this->_vb1079->__vtable;
    piVar3 = (int *)(*(code *)pcVar1->StartRecording)
                              ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar1->GetRecordSkill)
    ;
    uVar2 = *piVar3 == 0;
  }
  else {
    uVar2 = (undefined)*(undefined4 *)lVar4;
  }
  return (bool)uVar2;
}

bool cXPersonImpl::IsFemale() {
  cXPerson__123_1079__vtable *pcVar1;
  byte bVar2;
  
  pcVar1 = this->_vb1079->__vtable;
  bVar2 = (**(code **)&pcVar1->field_0x174)
                    ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar1->field_0x170);
  return (bool)(bVar2 ^ 1);
}

bool cXPersonImpl::IsAdult() {
	CustomCharacter *pCustom;
	
  cXPerson__123_1079__vtable *pcVar1;
  undefined uVar2;
  int iVar3;
  long lVar4;
  
  pcVar1 = this->_vb1079->__vtable;
  lVar4 = (*(code *)pcVar1->GetRecordTicksElapsed)
                    ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar1->GetRecordCurTicks);
  if (lVar4 == 0) {
    pcVar1 = this->_vb1079->__vtable;
    iVar3 = (*(code *)pcVar1->StartRecording)
                      ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar1->GetRecordSkill);
    uVar2 = *(int *)(iVar3 + 4) == 0;
  }
  else {
    uVar2 = (undefined)*(undefined4 *)((int)lVar4 + 4);
  }
  return (bool)uVar2;
}

void cXPersonImpl::InvalidateRoutes() {
	XRoute *i;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	XRoute *this;
	
  XRoute *pXVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pXVar1 = (this->fRouteStack).start;
                    /* end of inlined section */
  if (pXVar1 != (this->fRouteStack).finish) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/XRouting.h */
    *(undefined4 *)&pXVar1->fValid = 0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    while (pXVar1 + 1 != (this->fRouteStack).finish) {
      *(undefined4 *)&pXVar1[1].fValid = 0;
      pXVar1 = pXVar1 + 1;
    }
  }
  return;
}

void cXPersonImpl::StartRecording(int id, int duration) {
  return;
}

void cXPersonImpl::StopRecording() {
  return;
}

void cXPersonImpl::ClearRecording() {
  return;
}

int cXPersonImpl::TickRecording() {
  return 0;
}

void cXPersonImpl::LogEvent(char *key, char *val, char *boneName) {
  return;
}

void cXPersonImpl::Track() {
  return;
}

void cXPersonImpl::GetJobSuitTex(StringBuffer &outJobSuit, StringBuffer &outJobTexture, StringBuffer &outJobAccessory) {
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

SpriteSlot* SpriteSlot * copy_backward<SpriteSlot *, SpriteSlot *>(SpriteSlot *first, SpriteSlot *last, SpriteSlot *result) {
  float *pfVar1;
  undefined *puVar2;
  Slot__vtable **ppSVar3;
  uint uVar4;
  uint uVar5;
  Slot__vtable *pSVar6;
  ulong *puVar7;
  ulong uVar8;
  SpriteSlot *pSVar9;
  SpriteSlot *pSVar10;
  SpriteSlot *pSVar11;
  SpriteSlot *pSVar12;
  ulong in_t1;
  ulong in_t2;
  ulong in_t3;
  
  pSVar10 = result;
  if (first != last) {
    do {
      result = pSVar10 + -1;
      pSVar9 = last + -1;
      pSVar6 = pSVar10[-1].field0_0x0.__vtable;
      uVar8 = (ulong)(int)pSVar6;
      pSVar11 = pSVar9;
      pSVar12 = result;
      if ((((uint)pSVar9 | (uint)result) & 7) == 0) {
        do {
          uVar8 = *(ulong *)&pSVar11->field0_0x0;
          in_t1 = *(ulong *)&(pSVar11->field0_0x0).altOffset;
          in_t2 = *(ulong *)&(pSVar11->field0_0x0).__vtable;
          in_t3 = *(ulong *)&pSVar11->id;
          *(ulong *)&pSVar12->field0_0x0 = uVar8;
          *(ulong *)&(pSVar12->field0_0x0).altOffset = in_t1;
          *(ulong *)&(pSVar12->field0_0x0).__vtable = in_t2;
          *(ulong *)&pSVar12->id = in_t3;
          pSVar11 = (SpriteSlot *)&pSVar11->numFrames;
          pSVar12 = (SpriteSlot *)&pSVar12->numFrames;
        } while (pSVar11 != (SpriteSlot *)&last[-1].m_pObj);
      }
      else {
        do {
          puVar2 = (undefined *)((int)&(pSVar11->field0_0x0).yoffset + 3);
          uVar4 = (uint)puVar2 & 7;
          uVar5 = (uint)pSVar11 & 7;
          uVar8 = (*(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 |
                  uVar8 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
                  *(ulong *)((int)pSVar11 - uVar5) >> uVar5 * 8;
          puVar2 = (undefined *)((int)&(pSVar11->field0_0x0).nameIndex + 3);
          uVar4 = (uint)puVar2 & 7;
          pfVar1 = &(pSVar11->field0_0x0).altOffset;
          uVar5 = (uint)pfVar1 & 7;
          in_t1 = (*(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 |
                  in_t1 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
                  *(ulong *)((int)pfVar1 - uVar5) >> uVar5 * 8;
          puVar2 = (undefined *)((int)&pSVar11->ticksLeft + 3);
          uVar4 = (uint)puVar2 & 7;
          ppSVar3 = &(pSVar11->field0_0x0).__vtable;
          uVar5 = (uint)ppSVar3 & 7;
          in_t2 = (*(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 |
                  in_t2 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
                  *(ulong *)((int)ppSVar3 - uVar5) >> uVar5 * 8;
          puVar2 = (undefined *)((int)&pSVar11->field3_0x1c + 3);
          uVar4 = (uint)puVar2 & 7;
          uVar5 = (uint)&pSVar11->id & 7;
          in_t3 = (*(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 |
                  in_t3 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
                  *(ulong *)((int)&pSVar11->id - uVar5) >> uVar5 * 8;
          puVar2 = (undefined *)((int)&(pSVar12->field0_0x0).yoffset + 3);
          uVar4 = (uint)puVar2 & 7;
          puVar7 = (ulong *)(puVar2 + -uVar4);
          *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | uVar8 >> (7 - uVar4) * 8;
          uVar4 = (uint)pSVar12 & 7;
          *(ulong *)((int)pSVar12 - uVar4) =
               uVar8 << uVar4 * 8 |
               *(ulong *)((int)pSVar12 - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
          puVar2 = (undefined *)((int)&(pSVar12->field0_0x0).nameIndex + 3);
          uVar4 = (uint)puVar2 & 7;
          puVar7 = (ulong *)(puVar2 + -uVar4);
          *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | in_t1 >> (7 - uVar4) * 8;
          pfVar1 = &(pSVar12->field0_0x0).altOffset;
          uVar4 = (uint)pfVar1 & 7;
          puVar7 = (ulong *)((int)pfVar1 - uVar4);
          *puVar7 = in_t1 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
          puVar2 = (undefined *)((int)&pSVar12->ticksLeft + 3);
          uVar4 = (uint)puVar2 & 7;
          puVar7 = (ulong *)(puVar2 + -uVar4);
          *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | in_t2 >> (7 - uVar4) * 8;
          ppSVar3 = &(pSVar12->field0_0x0).__vtable;
          uVar4 = (uint)ppSVar3 & 7;
          puVar7 = (ulong *)((int)ppSVar3 - uVar4);
          *puVar7 = in_t2 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
          puVar2 = (undefined *)((int)&pSVar12->field3_0x1c + 3);
          uVar4 = (uint)puVar2 & 7;
          puVar7 = (ulong *)(puVar2 + -uVar4);
          *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | in_t3 >> (7 - uVar4) * 8;
          uVar4 = (uint)&pSVar12->id & 7;
          puVar7 = (ulong *)((int)&pSVar12->id - uVar4);
          *puVar7 = in_t3 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
          pSVar11 = (SpriteSlot *)&pSVar11->numFrames;
          pSVar12 = (SpriteSlot *)&pSVar12->numFrames;
        } while (pSVar11 != (SpriteSlot *)&last[-1].m_pObj);
      }
      uVar4 = (uint)(undefined *)((int)pSVar11 + 7U) & 7;
      uVar5 = (uint)pSVar11 & 7;
      uVar8 = (*(long *)((undefined *)((int)pSVar11 + 7U) + -uVar4) << (7 - uVar4) * 8 |
              uVar8 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
              *(ulong *)((int)pSVar11 - uVar5) >> uVar5 * 8;
      uVar4 = (uint)(undefined *)((int)pSVar12 + 7U) & 7;
      puVar7 = (ulong *)((undefined *)((int)pSVar12 + 7U) + -uVar4);
      *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | uVar8 >> (7 - uVar4) * 8;
      uVar4 = (uint)pSVar12 & 7;
      *(ulong *)((int)pSVar12 - uVar4) =
           uVar8 << uVar4 * 8 |
           *(ulong *)((int)pSVar12 - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      pSVar10[-1].field0_0x0.__vtable = pSVar6;
      last = pSVar9;
      pSVar10 = result;
    } while (first != pSVar9);
  }
  return result;
}

SpriteSlot* SpriteSlot * uninitialized_copy<SpriteSlot *, SpriteSlot *>(SpriteSlot *first, SpriteSlot *last, SpriteSlot *result) {
  int iVar1;
  SpriteSlot *pSVar2;
  SpriteSlot *pSVar3;
  
  pSVar3 = first;
  pSVar2 = result;
  if (first != last) {
    do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
      (pSVar2->field0_0x0).__vtable = (Slot__vtable *)_vt_4Slot;
                    /* end of inlined section */
      first = first + 1;
      result = result + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
      (pSVar2->field0_0x0).xoffset = (pSVar3->field0_0x0).xoffset;
      (pSVar2->field0_0x0).yoffset = (pSVar3->field0_0x0).yoffset;
      (pSVar2->field0_0x0).altOffset = (pSVar3->field0_0x0).altOffset;
      iVar1 = (pSVar3->field0_0x0).nameIndex;
                    /* end of inlined section */
      (pSVar2->field0_0x0).__vtable = (Slot__vtable *)_vt_10SpriteSlot;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
      (pSVar2->field0_0x0).nameIndex = iVar1;
                    /* end of inlined section */
      pSVar2->ticksLeft = pSVar3->ticksLeft;
      pSVar2->id = pSVar3->id;
      pSVar2->numFrames = pSVar3->numFrames;
      pSVar2->frame = pSVar3->frame;
      pSVar2->frameDelta = pSVar3->frameDelta;
      pSVar2->frameTicks = pSVar3->frameTicks;
      pSVar2->balloonSpriteID = pSVar3->balloonSpriteID;
      pSVar2->notSignSpriteID = pSVar3->notSignSpriteID;
      pSVar2->priority = pSVar3->priority;
      *(undefined4 *)&pSVar2->showWhenInactive = *(undefined4 *)&pSVar3->showWhenInactive;
      pSVar2->m_pObj = pSVar3->m_pObj;
      pSVar2->m_pSpriteRender = pSVar3->m_pSpriteRender;
      pSVar2->field3_0x1c = pSVar3->field3_0x1c;
      pSVar3 = pSVar3 + 1;
      pSVar2 = pSVar2 + 1;
    } while (first != last);
  }
  return result;
}

void vector<SpriteSlot, __malloc_alloc_template<0> >::insert_aux(SpriteSlot *position, SpriteSlot &x) {
	SpriteSlot x_copy;
	SpriteSlot &value;
	SpriteSlot &_ctor_arg;
	Slot &_ctor_arg;
	SpriteSlot &_ctor_arg;
	Slot &_ctor_arg;
	unsigned int old_size;
	unsigned int len;
	vector<SpriteSlot,__malloc_alloc_template<0> > *this;
	vector<SpriteSlot,__malloc_alloc_template<0> > *this;
	vector<SpriteSlot,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	void *result;
	vector<SpriteSlot,__malloc_alloc_template<0> > *this;
	vector<SpriteSlot,__malloc_alloc_template<0> > *this;
	SpriteSlot *p;
	SpriteSlot &value;
	void *pAddress;
	SpriteSlot &_ctor_arg;
	Slot &_ctor_arg;
	vector<SpriteSlot,__malloc_alloc_template<0> > *this;
	vector<SpriteSlot,__malloc_alloc_template<0> > *this;
	vector<SpriteSlot,__malloc_alloc_template<0> > *this;
	vector<SpriteSlot,__malloc_alloc_template<0> > *this;
	SpriteSlot *first;
	SpriteSlot *pointer;
	vector<SpriteSlot,__malloc_alloc_template<0> > *this;
	
  undefined *puVar1;
  Slot__vtable **ppSVar2;
  ulong uVar3;
  uint uVar4;
  ulong *puVar5;
  SpriteSlot *pSVar6;
  Slot__vtable *pSVar7;
  float *pfVar8;
  ulong uVar9;
  ulong uVar10;
  SpriteSlot *pSVar11;
  SpriteSlot *pSVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  SpriteSlot x_copy;
  
  pSVar11 = &x_copy;
  pSVar12 = &x_copy;
  pSVar6 = this->finish;
  if (pSVar6 == this->end_of_storage) {
    pSVar11 = this->start;
    iVar14 = ((int)pSVar6 - (int)pSVar11) * 0x38e38e39 >> 3;
    iVar15 = 1;
    if (iVar14 != 0) {
      iVar15 = iVar14 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if (iVar15 == 0) {
      pSVar6 = (SpriteSlot *)0x0;
    }
    else {
      pSVar6 = (SpriteSlot *)malloc(iVar15 * 0x48);
      if (pSVar6 == (SpriteSlot *)0x0) {
        pSVar6 = (SpriteSlot *)oom_malloc__t23__malloc_alloc_template1i0Ui(iVar15 * 0x48);
      }
      pSVar11 = this->start;
    }
                    /* end of inlined section */
    uninitialized_copy__H2ZP10SpriteSlotZP10SpriteSlot_X01X01X11_X11(pSVar11,position,pSVar6);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    pfVar8 = (float *)((int)pSVar6 + ((int)position - (int)this->start));
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
    pfVar8[4] = (float)_vt_4Slot;
    *pfVar8 = (x->field0_0x0).xoffset;
    pfVar8[1] = (x->field0_0x0).yoffset;
    pfVar8[2] = (x->field0_0x0).altOffset;
    fVar16 = (float)(x->field0_0x0).nameIndex;
    pfVar8[4] = (float)_vt_10SpriteSlot;
    pfVar8[3] = fVar16;
    pfVar8[5] = (float)x->ticksLeft;
    pfVar8[6] = (float)x->id;
    pfVar8[8] = (float)x->numFrames;
    pfVar8[9] = (float)x->frame;
    pfVar8[10] = (float)x->frameDelta;
    pfVar8[0xb] = (float)x->frameTicks;
    pfVar8[0xc] = (float)x->balloonSpriteID;
    pfVar8[0xd] = (float)x->notSignSpriteID;
    pfVar8[0xe] = (float)x->priority;
    pfVar8[0xf] = *(float *)&x->showWhenInactive;
    pfVar8[0x10] = (float)x->m_pObj;
    pfVar8[0x11] = (float)x->m_pSpriteRender;
    *(SpriteSlot__null___1__1 *)(pfVar8 + 7) = x->field3_0x1c;
                    /* end of inlined section */
    uninitialized_copy__H2ZP10SpriteSlotZP10SpriteSlot_X01X01X11_X11
              (position,this->finish,
               (SpriteSlot *)((int)pSVar6 + (int)position + (0x48 - (int)this->start)));
    pSVar11 = this->finish;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    pSVar12 = this->start;
    if (pSVar12 == pSVar11) {
      pSVar11 = this->start;
    }
    else {
      pSVar7 = (pSVar12->field0_0x0).__vtable;
      while( true ) {
        (*(code *)pSVar7[1].Slot)
                  ((int)&(pSVar12->field0_0x0).xoffset + (int)*(short *)(pSVar7 + 1),2);
        if (pSVar12 + 1 == pSVar11) break;
        pSVar7 = pSVar12[1].field0_0x0.__vtable;
        pSVar12 = pSVar12 + 1;
      }
                    /* end of inlined section */
      pSVar11 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((pSVar11 != (SpriteSlot *)0x0) &&
       (((int)this->end_of_storage - (int)pSVar11) * 0x38e38e39 >> 3 != 0)) {
      free(pSVar11);
    }
    this->start = pSVar6;
    this->finish = pSVar6 + iVar14 + 1;
    this->end_of_storage = pSVar6 + iVar15;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    fVar16 = pSVar6[-1].field0_0x0.xoffset;
    (pSVar6->field0_0x0).__vtable = (Slot__vtable *)_vt_4Slot;
    (pSVar6->field0_0x0).xoffset = fVar16;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
    (pSVar6->field0_0x0).yoffset = pSVar6[-1].field0_0x0.yoffset;
    (pSVar6->field0_0x0).altOffset = pSVar6[-1].field0_0x0.altOffset;
    iVar15 = pSVar6[-1].field0_0x0.nameIndex;
    (pSVar6->field0_0x0).__vtable = (Slot__vtable *)_vt_10SpriteSlot;
    (pSVar6->field0_0x0).nameIndex = iVar15;
    pSVar6->ticksLeft = pSVar6[-1].ticksLeft;
    pSVar6->id = pSVar6[-1].id;
    pSVar6->numFrames = pSVar6[-1].numFrames;
    pSVar6->frame = pSVar6[-1].frame;
    pSVar6->frameDelta = pSVar6[-1].frameDelta;
    pSVar6->frameTicks = pSVar6[-1].frameTicks;
    pSVar6->balloonSpriteID = pSVar6[-1].balloonSpriteID;
    pSVar6->notSignSpriteID = pSVar6[-1].notSignSpriteID;
    pSVar6->priority = pSVar6[-1].priority;
    *(undefined4 *)&pSVar6->showWhenInactive = *(undefined4 *)&pSVar6[-1].showWhenInactive;
    pSVar6->m_pObj = pSVar6[-1].m_pObj;
    pSVar6->m_pSpriteRender = pSVar6[-1].m_pSpriteRender;
    pSVar6->field3_0x1c = pSVar6[-1].field3_0x1c;
    x_copy.field0_0x0.__vtable = (Slot__vtable *)_vt_10SpriteSlot;
    x_copy.numFrames = x->numFrames;
    x_copy.ticksLeft = x->ticksLeft;
    x_copy.field0_0x0.xoffset = (x->field0_0x0).xoffset;
    x_copy.field0_0x0.yoffset = (x->field0_0x0).yoffset;
    x_copy.field0_0x0.altOffset = (x->field0_0x0).altOffset;
    x_copy.field0_0x0.nameIndex = (x->field0_0x0).nameIndex;
    x_copy.id = x->id;
    x_copy.frame = x->frame;
    x_copy.frameDelta = x->frameDelta;
    x_copy.frameTicks = x->frameTicks;
    x_copy.balloonSpriteID = x->balloonSpriteID;
    x_copy.notSignSpriteID = x->notSignSpriteID;
    x_copy.priority = x->priority;
    x_copy._60_4_ = *(undefined4 *)&x->showWhenInactive;
    x_copy.m_pObj = x->m_pObj;
    x_copy.m_pSpriteRender = x->m_pSpriteRender;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    x_copy.field3_0x1c = x->field3_0x1c;
                    /* end of inlined section */
                    /* end of inlined section */
    copy_backward__H2ZP10SpriteSlotZP10SpriteSlot_X01X01X11_X11
              (position,this->finish + -1,this->finish);
    pSVar7 = (position->field0_0x0).__vtable;
    pSVar6 = position;
    if (((uint)position & 7) == 0) {
      do {
        uVar9 = *(ulong *)((int)pSVar12 + 8);
        uVar10 = *(ulong *)((int)pSVar12 + 0x10);
        uVar13 = *(ulong *)((int)pSVar12 + 0x18);
        *(ulong *)&pSVar6->field0_0x0 = *(ulong *)pSVar12;
        *(ulong *)&(pSVar6->field0_0x0).altOffset = uVar9;
        *(ulong *)&(pSVar6->field0_0x0).__vtable = uVar10;
        *(ulong *)&pSVar6->id = uVar13;
        pSVar12 = (SpriteSlot *)((int)pSVar12 + 0x20);
        pSVar6 = (SpriteSlot *)&pSVar6->numFrames;
        pSVar11 = pSVar12;
      } while (pSVar12 != (SpriteSlot *)&x_copy.m_pObj);
    }
    else {
      do {
        uVar9 = *(ulong *)pSVar11;
        uVar10 = *(ulong *)((int)pSVar11 + 8);
        uVar13 = *(ulong *)((int)pSVar11 + 0x10);
        uVar3 = *(ulong *)((int)pSVar11 + 0x18);
        puVar1 = (undefined *)((int)&(pSVar6->field0_0x0).yoffset + 3);
        uVar4 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar4);
        *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar9 >> (7 - uVar4) * 8;
        uVar4 = (uint)pSVar6 & 7;
        *(ulong *)((int)pSVar6 - uVar4) =
             uVar9 << uVar4 * 8 |
             *(ulong *)((int)pSVar6 - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
        puVar1 = (undefined *)((int)&(pSVar6->field0_0x0).nameIndex + 3);
        uVar4 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar4);
        *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar10 >> (7 - uVar4) * 8;
        pfVar8 = &(pSVar6->field0_0x0).altOffset;
        uVar4 = (uint)pfVar8 & 7;
        puVar5 = (ulong *)((int)pfVar8 - uVar4);
        *puVar5 = uVar10 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
        puVar1 = (undefined *)((int)&pSVar6->ticksLeft + 3);
        uVar4 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar4);
        *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar13 >> (7 - uVar4) * 8;
        ppSVar2 = &(pSVar6->field0_0x0).__vtable;
        uVar4 = (uint)ppSVar2 & 7;
        puVar5 = (ulong *)((int)ppSVar2 - uVar4);
        *puVar5 = uVar13 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
        puVar1 = (undefined *)((int)&pSVar6->field3_0x1c + 3);
        uVar4 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar4);
        *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar3 >> (7 - uVar4) * 8;
        uVar4 = (uint)&pSVar6->id & 7;
        puVar5 = (ulong *)((int)&pSVar6->id - uVar4);
        *puVar5 = uVar3 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
        pSVar11 = (SpriteSlot *)((int)pSVar11 + 0x20);
        pSVar6 = (SpriteSlot *)&pSVar6->numFrames;
      } while (pSVar11 != (SpriteSlot *)&x_copy.m_pObj);
    }
    uVar9 = *(ulong *)pSVar11;
    uVar4 = (uint)(undefined *)((int)pSVar6 + 7U) & 7;
    puVar5 = (ulong *)((undefined *)((int)pSVar6 + 7U) + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar9 >> (7 - uVar4) * 8;
    uVar4 = (uint)pSVar6 & 7;
    *(ulong *)((int)pSVar6 - uVar4) =
         uVar9 << uVar4 * 8 |
         *(ulong *)((int)pSVar6 - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    (position->field0_0x0).__vtable = pSVar7;
    this->finish = this->finish + 1;
    ___10SpriteSlot(&x_copy,2);
  }
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

ScoredInteraction* ScoredInteraction * uninitialized_copy<ScoredInteraction *, ScoredInteraction *>(ScoredInteraction *first, ScoredInteraction *last, ScoredInteraction *result) {
	ScoredInteraction *p;
	ScoredInteraction &value;
	void *pAddress;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ScoredInteraction *pSVar5;
  ulong in_a3;
  ulong in_t0;
  
  pSVar5 = result;
  if (first != last) {
    do {
      puVar1 = (undefined *)((int)&first->fActionIndex + 3);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)first & 7;
      in_a3 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_a3 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)first - uVar3) >> uVar3 * 8;
      uVar2 = (uint)&first->field_0xf & 7;
      uVar3 = (uint)&first->fAttenScore & 7;
      in_t0 = (*(long *)(&first->field_0xf + -uVar2) << (7 - uVar2) * 8 |
              in_t0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)&first->fAttenScore - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&pSVar5->fActionIndex + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | in_a3 >> (7 - uVar2) * 8;
      uVar2 = (uint)pSVar5 & 7;
      *(ulong *)((int)pSVar5 - uVar2) =
           in_a3 << uVar2 * 8 |
           *(ulong *)((int)pSVar5 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      uVar2 = (uint)&pSVar5->field_0xf & 7;
      puVar4 = (ulong *)(&pSVar5->field_0xf + -uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | in_t0 >> (7 - uVar2) * 8;
      first = first + 1;
      result = pSVar5 + 1;
      uVar2 = (uint)&pSVar5->fAttenScore & 7;
      puVar4 = (ulong *)((int)&pSVar5->fAttenScore - uVar2);
      *puVar4 = in_t0 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      pSVar5 = result;
    } while (first != last);
  }
  return result;
}

MotiveInc* MotiveInc * uninitialized_copy<MotiveInc *, MotiveInc *>(MotiveInc *first, MotiveInc *last, MotiveInc *result) {
	MotiveInc *p;
	MotiveInc &value;
	void *pAddress;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  MotiveInc *pMVar6;
  ulong in_a3;
  
  pMVar6 = result;
  if (first != last) {
    do {
      puVar1 = (undefined *)((int)&first->incPerTick + 3);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)first & 7;
      in_a3 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_a3 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)first - uVar3) >> uVar3 * 8;
      fVar4 = first->limit;
      puVar1 = (undefined *)((int)&pMVar6->incPerTick + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar2);
      *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | in_a3 >> (7 - uVar2) * 8;
      uVar2 = (uint)pMVar6 & 7;
      *(ulong *)((int)pMVar6 - uVar2) =
           in_a3 << uVar2 * 8 |
           *(ulong *)((int)pMVar6 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      first = first + 1;
      result = pMVar6 + 1;
      pMVar6->limit = fVar4;
      pMVar6 = result;
    } while (first != last);
  }
  return result;
}

MotiveInc* MotiveInc * copy_backward<MotiveInc *, MotiveInc *>(MotiveInc *first, MotiveInc *last, MotiveInc *result) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  MotiveInc *pMVar6;
  ulong in_v1;
  MotiveInc *pMVar7;
  
  pMVar6 = result;
  if (first != last) {
    do {
      result = pMVar6 + -1;
      pMVar7 = last + -1;
      puVar1 = (undefined *)((int)&last[-1].incPerTick + 3);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)pMVar7 & 7;
      in_v1 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)pMVar7 - uVar3) >> uVar3 * 8;
      fVar4 = last[-1].limit;
      puVar1 = (undefined *)((int)&pMVar6[-1].incPerTick + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar2);
      *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | in_v1 >> (7 - uVar2) * 8;
      uVar2 = (uint)result & 7;
      *(ulong *)((int)result - uVar2) =
           in_v1 << uVar2 * 8 |
           *(ulong *)((int)result - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      pMVar6[-1].limit = fVar4;
      last = pMVar7;
      pMVar6 = result;
    } while (first != pMVar7);
  }
  return result;
}

void vector<MotiveInc, __malloc_alloc_template<0> >::insert_aux(MotiveInc *position, MotiveInc &x) {
	MotiveInc x_copy;
	unsigned int old_size;
	unsigned int len;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	void *result;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	MotiveInc *p;
	MotiveInc &value;
	void *pAddress;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	MotiveInc *first;
	MotiveInc *pointer;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  MotiveInc *pMVar6;
  ulong uVar7;
  uint uVar8;
  MotiveInc *pMVar9;
  ulong in_a3;
  int iVar10;
  int iVar11;
  MotiveInc x_copy;
  
  uVar7 = (ulong)(int)position;
  pMVar6 = this->finish;
  if ((long)(int)pMVar6 == (long)(int)this->end_of_storage) {
    iVar10 = ((int)pMVar6 - (int)this->start) * -0x55555555 >> 2;
    iVar11 = 1;
    if (iVar10 != 0) {
      iVar11 = iVar10 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if (iVar11 == 0) {
      pMVar6 = (MotiveInc *)0x0;
    }
    else {
      pMVar6 = (MotiveInc *)malloc(iVar11 * 0xc);
      if (pMVar6 == (MotiveInc *)0x0) {
        pMVar6 = (MotiveInc *)oom_malloc__t23__malloc_alloc_template1i0Ui(iVar11 * 0xc);
      }
    }
                    /* end of inlined section */
    uninitialized_copy__H2ZP9MotiveIncZP9MotiveInc_X01X01X11_X11(this->start,position,pMVar6);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    uVar8 = (int)pMVar6 + ((int)position - (int)this->start);
    puVar1 = (undefined *)((int)&x->incPerTick + 3);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)x & 7;
    uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
            uVar7 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)x - uVar3) >> uVar3 * 8;
    fVar4 = x->limit;
    uVar2 = uVar8 + 7 & 7;
    puVar5 = (ulong *)((uVar8 + 7) - uVar2);
    *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
    uVar2 = uVar8 & 7;
    *(ulong *)(uVar8 - uVar2) =
         uVar7 << uVar2 * 8 | *(ulong *)(uVar8 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    *(float *)(uVar8 + 8) = fVar4;
                    /* end of inlined section */
    uninitialized_copy__H2ZP9MotiveIncZP9MotiveInc_X01X01X11_X11
              (position,this->finish,
               (MotiveInc *)((int)pMVar6 + (int)position + (0xc - (int)this->start)));
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    pMVar9 = this->start;
    if (pMVar9 == this->finish) {
      pMVar9 = this->start;
    }
    else {
      do {
        pMVar9 = pMVar9 + 1;
      } while (pMVar9 != this->finish);
                    /* end of inlined section */
      pMVar9 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((pMVar9 != (MotiveInc *)0x0) &&
       (((int)this->end_of_storage - (int)pMVar9) * -0x55555555 >> 2 != 0)) {
      free(pMVar9);
                    /* end of inlined section */
    }
    this->start = pMVar6;
    this->finish = pMVar6 + iVar10 + 1;
    this->end_of_storage = pMVar6 + iVar11;
  }
  else {
    puVar1 = (undefined *)((int)&pMVar6[-1].incPerTick + 3);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)(pMVar6 + -1) & 7;
    uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
            (long)(int)this->end_of_storage & 0xffffffffffffffffU >> (uVar2 + 1) * 8) &
            -1L << (8 - uVar3) * 8 | *(ulong *)((int)(pMVar6 + -1) - uVar3) >> uVar3 * 8;
    fVar4 = pMVar6[-1].limit;
    puVar1 = (undefined *)((int)&pMVar6->incPerTick + 3);
    uVar2 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar2);
    *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
    uVar2 = (uint)pMVar6 & 7;
    *(ulong *)((int)pMVar6 - uVar2) =
         uVar7 << uVar2 * 8 |
         *(ulong *)((int)pMVar6 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    pMVar6->limit = fVar4;
    puVar1 = (undefined *)((int)&x->incPerTick + 3);
                    /* end of inlined section */
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)x & 7;
    x_copy._0_8_ = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                   in_a3 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                   *(ulong *)((int)x - uVar3) >> uVar3 * 8;
    x_copy.limit = x->limit;
    puVar1 = (undefined *)((int)&x_copy.incPerTick + 3);
    uVar2 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar2);
    *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | x_copy._0_8_ >> (7 - uVar2) * 8;
    copy_backward__H2ZP9MotiveIncZP9MotiveInc_X01X01X11_X11(position,this->finish + -1,this->finish)
    ;
    puVar1 = (undefined *)((int)&position->incPerTick + 3);
    uVar2 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar2);
    *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | x_copy._0_8_ >> (7 - uVar2) * 8;
    uVar2 = (uint)position & 7;
    *(ulong *)((int)position - uVar2) =
         x_copy._0_8_ << uVar2 * 8 |
         *(ulong *)((int)position - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    position->limit = x_copy.limit;
    this->finish = this->finish + 1;
  }
  return;
}

FTilePt* FTilePt * copy_backward<FTilePt *, FTilePt *>(FTilePt *first, FTilePt *last, FTilePt *result) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  FTilePt *pFVar5;
  ulong in_v1;
  FTilePt *pFVar6;
  
  pFVar5 = result;
  if (first != last) {
    do {
      result = pFVar5 + -1;
      pFVar6 = last + -1;
      puVar1 = (undefined *)((int)&last[-1].x.whole + 3);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)pFVar6 & 7;
      in_v1 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)pFVar6 - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&pFVar5[-1].x.whole + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | in_v1 >> (7 - uVar2) * 8;
      uVar2 = (uint)result & 7;
      *(ulong *)((int)result - uVar2) =
           in_v1 << uVar2 * 8 |
           *(ulong *)((int)result - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      last = pFVar6;
      pFVar5 = result;
    } while (first != pFVar6);
  }
  return result;
}

FTilePt* FTilePt * uninitialized_copy<FTilePt *, FTilePt *>(FTilePt *first, FTilePt *last, FTilePt *result) {
	FTilePt *p;
	FTilePt &value;
	void *pAddress;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  FTilePt *pFVar5;
  ulong in_a3;
  
  pFVar5 = result;
  if (first != last) {
    do {
      puVar1 = (undefined *)((int)&(first->x).whole + 3);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)first & 7;
      in_a3 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_a3 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)first - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&(pFVar5->x).whole + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | in_a3 >> (7 - uVar2) * 8;
      first = first + 1;
      result = pFVar5 + 1;
      uVar2 = (uint)pFVar5 & 7;
      *(ulong *)((int)pFVar5 - uVar2) =
           in_a3 << uVar2 * 8 |
           *(ulong *)((int)pFVar5 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      pFVar5 = result;
    } while (first != last);
  }
  return result;
}

void vector<FTilePt, __malloc_alloc_template<0> >::insert_aux(FTilePt *position, FTilePt &x) {
	FTilePt x_copy;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	void *result;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	FTilePt *p;
	FTilePt &value;
	void *pAddress;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	FTilePt *first;
	FTilePt *pointer;
	vector<FTilePt,__malloc_alloc_template<0> > *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  uint uVar5;
  FTilePt *pFVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  FTilePt *pFVar10;
  ulong in_a3;
  int iVar11;
  FTilePt x_copy;
  
  uVar7 = (ulong)(int)position;
  pFVar6 = this->finish;
  if ((long)(int)pFVar6 == (long)(int)this->end_of_storage) {
    iVar11 = (int)pFVar6 - (int)this->start >> 3;
    iVar9 = 1;
    if (iVar11 != 0) {
      iVar9 = iVar11 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    uVar5 = iVar9 << 3;
    if (iVar9 == 0) {
      pFVar6 = (FTilePt *)0x0;
      uVar5 = 0;
    }
    else {
      pFVar6 = (FTilePt *)malloc(uVar5);
      if (pFVar6 == (FTilePt *)0x0) {
        pFVar6 = (FTilePt *)oom_malloc__t23__malloc_alloc_template1i0Ui(uVar5);
      }
    }
                    /* end of inlined section */
                    /* end of inlined section */
    uninitialized_copy__H2ZP7FTilePtZP7FTilePt_X01X01X11_X11(this->start,position,pFVar6);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    uVar8 = (int)pFVar6 + ((int)position - (int)this->start);
    puVar1 = (undefined *)((int)&(x->x).whole + 3);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)x & 7;
    uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
            uVar7 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)x - uVar3) >> uVar3 * 8;
    uVar2 = uVar8 + 7 & 7;
    puVar4 = (ulong *)((uVar8 + 7) - uVar2);
    *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
    uVar2 = uVar8 & 7;
    *(ulong *)(uVar8 - uVar2) =
         uVar7 << uVar2 * 8 | *(ulong *)(uVar8 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
                    /* end of inlined section */
    uninitialized_copy__H2ZP7FTilePtZP7FTilePt_X01X01X11_X11
              (position,this->finish,
               (FTilePt *)((int)pFVar6 + (int)position + (8 - (int)this->start)));
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    pFVar10 = this->start;
    if (pFVar10 == this->finish) {
      pFVar10 = this->start;
    }
    else {
      do {
        pFVar10 = pFVar10 + 1;
      } while (pFVar10 != this->finish);
                    /* end of inlined section */
      pFVar10 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((pFVar10 != (FTilePt *)0x0) && ((int)this->end_of_storage - (int)pFVar10 >> 3 != 0)) {
      free(pFVar10);
                    /* end of inlined section */
    }
    pFVar10 = pFVar6 + iVar11;
    this->start = pFVar6;
    this->end_of_storage = (FTilePt *)((int)&(pFVar6->y).whole + uVar5);
  }
  else {
    puVar1 = (undefined *)((int)&pFVar6[-1].x.whole + 3);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    uVar5 = (uint)puVar1 & 7;
    uVar2 = (uint)(pFVar6 + -1) & 7;
    uVar7 = (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
            (long)(int)this->end_of_storage & 0xffffffffffffffffU >> (uVar5 + 1) * 8) &
            -1L << (8 - uVar2) * 8 | *(ulong *)((int)(pFVar6 + -1) - uVar2) >> uVar2 * 8;
    puVar1 = (undefined *)((int)&(pFVar6->x).whole + 3);
    uVar5 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 | uVar7 >> (7 - uVar5) * 8;
    uVar5 = (uint)pFVar6 & 7;
    *(ulong *)((int)pFVar6 - uVar5) =
         uVar7 << uVar5 * 8 |
         *(ulong *)((int)pFVar6 - uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar1 = (undefined *)((int)&(x->x).whole + 3);
                    /* end of inlined section */
    uVar5 = (uint)puVar1 & 7;
    uVar2 = (uint)x & 7;
    x_copy = (FTilePt)((*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
                       in_a3 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                      *(ulong *)((int)x - uVar2) >> uVar2 * 8);
    puVar1 = (undefined *)((int)&x_copy.x.whole + 3);
    uVar5 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 | (ulong)x_copy >> (7 - uVar5) * 8;
    copy_backward__H2ZP7FTilePtZP7FTilePt_X01X01X11_X11(position,this->finish + -1,this->finish);
    puVar1 = (undefined *)((int)&(position->x).whole + 3);
    uVar5 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 | (ulong)x_copy >> (7 - uVar5) * 8;
    uVar5 = (uint)position & 7;
    *(ulong *)((int)position - uVar5) =
         (long)x_copy << uVar5 * 8 |
         *(ulong *)((int)position - uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    pFVar10 = this->finish;
  }
  this->finish = pFVar10 + 1;
  return;
}

RouteGoal* RouteGoal * uninitialized_copy<RouteGoal *, RouteGoal *>(RouteGoal *first, RouteGoal *last, RouteGoal *result) {
	RouteGoal *p;
	RouteGoal &value;
	void *pAddress;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  RouteGoal *pRVar5;
  ulong in_a3;
  ulong in_t0;
  
  pRVar5 = result;
  if (first != last) {
    do {
      puVar1 = (undefined *)((int)&(first->loc).x.whole + 3);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)first & 7;
      in_a3 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_a3 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)first - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&first->entryDirFlag + 1);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)&first->score & 7;
      in_t0 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_t0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)&first->score - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&(pRVar5->loc).x.whole + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | in_a3 >> (7 - uVar2) * 8;
      uVar2 = (uint)pRVar5 & 7;
      *(ulong *)((int)pRVar5 - uVar2) =
           in_a3 << uVar2 * 8 |
           *(ulong *)((int)pRVar5 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      puVar1 = (undefined *)((int)&pRVar5->entryDirFlag + 1);
      uVar2 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | in_t0 >> (7 - uVar2) * 8;
      first = first + 1;
      result = pRVar5 + 1;
      uVar2 = (uint)&pRVar5->score & 7;
      puVar4 = (ulong *)((int)&pRVar5->score - uVar2);
      *puVar4 = in_t0 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      pRVar5 = result;
    } while (first != last);
  }
  return result;
}

XRoute* XRoute * copy_backward<XRoute *, XRoute *>(XRoute *first, XRoute *last, XRoute *result) {
	XRoute *this;
	XRoute &_ctor_arg;
	
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  ulong *puVar5;
  vector_RouteGoal___malloc_alloc_template_0___ *pvVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  int iVar14;
  ulong uVar13;
  ulong uVar15;
  
  uVar13 = (ulong)(int)result;
  uVar15 = (ulong)(int)last;
  uVar8 = uVar13;
  while ((long)(int)first != uVar15) {
    iVar12 = (int)uVar13;
    result = (XRoute *)(iVar12 + -0xa4);
    uVar13 = (ulong)(int)result;
    iVar14 = (int)uVar15;
    uVar15 = (ulong)(int)(vector_RouteGoal___malloc_alloc_template_0___ *)(iVar14 + -0xa4);
    uVar9 = uVar13;
    uVar10 = uVar15;
    pvVar6 = __as__t6vector2Z9RouteGoalZt23__malloc_alloc_template1i0RCt6vector2Z9RouteGoalZt23__malloc_alloc_template1i0
                       ((vector_RouteGoal___malloc_alloc_template_0___ *)result,
                        (vector_RouteGoal___malloc_alloc_template_0___ *)(iVar14 + -0xa4));
    uVar3 = *(undefined4 *)(iVar12 + -0x88);
    uVar1 = iVar14 - 0x91U & 7;
    uVar2 = iVar14 - 0x98U & 7;
    uVar7 = (*(long *)((iVar14 - 0x91U) - uVar1) << (7 - uVar1) * 8 |
            (long)(int)pvVar6 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
            *(ulong *)((iVar14 - 0x98U) - uVar2) >> uVar2 * 8;
    uVar1 = iVar14 - 0x89U & 7;
    uVar2 = iVar14 - 0x90U & 7;
    uVar9 = (*(long *)((iVar14 - 0x89U) - uVar1) << (7 - uVar1) * 8 |
            uVar9 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
            *(ulong *)((iVar14 - 0x90U) - uVar2) >> uVar2 * 8;
    uVar1 = iVar14 - 0x81U & 7;
    uVar2 = iVar14 - 0x88U & 7;
    uVar10 = (*(long *)((iVar14 - 0x81U) - uVar1) << (7 - uVar1) * 8 |
             uVar10 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
             *(ulong *)((iVar14 - 0x88U) - uVar2) >> uVar2 * 8;
    uVar1 = iVar14 - 0x79U & 7;
    uVar2 = iVar14 - 0x80U & 7;
    uVar11 = (*(long *)((iVar14 - 0x79U) - uVar1) << (7 - uVar1) * 8 |
             uVar8 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
             *(ulong *)((iVar14 - 0x80U) - uVar2) >> uVar2 * 8;
    uVar1 = iVar12 - 0x91U & 7;
    puVar5 = (ulong *)((iVar12 - 0x91U) - uVar1);
    *puVar5 = *puVar5 & -1L << (uVar1 + 1) * 8 | uVar7 >> (7 - uVar1) * 8;
    uVar1 = iVar12 - 0x98U & 7;
    puVar5 = (ulong *)((iVar12 - 0x98U) - uVar1);
    *puVar5 = uVar7 << uVar1 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
    uVar1 = iVar12 - 0x89U & 7;
    puVar5 = (ulong *)((iVar12 - 0x89U) - uVar1);
    *puVar5 = *puVar5 & -1L << (uVar1 + 1) * 8 | uVar9 >> (7 - uVar1) * 8;
    uVar1 = iVar12 - 0x90U & 7;
    puVar5 = (ulong *)((iVar12 - 0x90U) - uVar1);
    *puVar5 = uVar9 << uVar1 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
    uVar1 = iVar12 - 0x81U & 7;
    puVar5 = (ulong *)((iVar12 - 0x81U) - uVar1);
    *puVar5 = *puVar5 & -1L << (uVar1 + 1) * 8 | uVar10 >> (7 - uVar1) * 8;
    uVar1 = iVar12 - 0x88U & 7;
    puVar5 = (ulong *)((iVar12 - 0x88U) - uVar1);
    *puVar5 = uVar10 << uVar1 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
    uVar1 = iVar12 - 0x79U & 7;
    puVar5 = (ulong *)((iVar12 - 0x79U) - uVar1);
    *puVar5 = *puVar5 & -1L << (uVar1 + 1) * 8 | uVar11 >> (7 - uVar1) * 8;
    uVar1 = iVar12 - 0x80U & 7;
    puVar5 = (ulong *)((iVar12 - 0x80U) - uVar1);
    *puVar5 = uVar11 << uVar1 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
    uVar1 = iVar14 - 0x71U & 7;
    uVar2 = iVar14 - 0x78U & 7;
    uVar8 = (*(long *)((iVar14 - 0x71U) - uVar1) << (7 - uVar1) * 8 |
            uVar7 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
            *(ulong *)((iVar14 - 0x78U) - uVar2) >> uVar2 * 8;
    uVar1 = iVar14 - 0x69U & 7;
    uVar2 = iVar14 - 0x70U & 7;
    uVar9 = (*(long *)((iVar14 - 0x69U) - uVar1) << (7 - uVar1) * 8 |
            uVar9 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
            *(ulong *)((iVar14 - 0x70U) - uVar2) >> uVar2 * 8;
    uVar1 = iVar14 - 0x61U & 7;
    uVar2 = iVar14 - 0x68U & 7;
    uVar10 = (*(long *)((iVar14 - 0x61U) - uVar1) << (7 - uVar1) * 8 |
             uVar10 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
             *(ulong *)((iVar14 - 0x68U) - uVar2) >> uVar2 * 8;
    uVar1 = iVar14 - 0x59U & 7;
    uVar2 = iVar14 - 0x60U & 7;
    uVar7 = (*(long *)((iVar14 - 0x59U) - uVar1) << (7 - uVar1) * 8 |
            uVar11 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
            *(ulong *)((iVar14 - 0x60U) - uVar2) >> uVar2 * 8;
    uVar1 = iVar12 - 0x71U & 7;
    puVar5 = (ulong *)((iVar12 - 0x71U) - uVar1);
    *puVar5 = *puVar5 & -1L << (uVar1 + 1) * 8 | uVar8 >> (7 - uVar1) * 8;
    uVar1 = iVar12 - 0x78U & 7;
    puVar5 = (ulong *)((iVar12 - 0x78U) - uVar1);
    *puVar5 = uVar8 << uVar1 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
    uVar1 = iVar12 - 0x69U & 7;
    puVar5 = (ulong *)((iVar12 - 0x69U) - uVar1);
    *puVar5 = *puVar5 & -1L << (uVar1 + 1) * 8 | uVar9 >> (7 - uVar1) * 8;
    uVar1 = iVar12 - 0x70U & 7;
    puVar5 = (ulong *)((iVar12 - 0x70U) - uVar1);
    *puVar5 = uVar9 << uVar1 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
    uVar1 = iVar12 - 0x61U & 7;
    puVar5 = (ulong *)((iVar12 - 0x61U) - uVar1);
    *puVar5 = *puVar5 & -1L << (uVar1 + 1) * 8 | uVar10 >> (7 - uVar1) * 8;
    uVar1 = iVar12 - 0x68U & 7;
    puVar5 = (ulong *)((iVar12 - 0x68U) - uVar1);
    *puVar5 = uVar10 << uVar1 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
    uVar1 = iVar12 - 0x59U & 7;
    puVar5 = (ulong *)((iVar12 - 0x59U) - uVar1);
    *puVar5 = *puVar5 & -1L << (uVar1 + 1) * 8 | uVar7 >> (7 - uVar1) * 8;
    uVar1 = iVar12 - 0x60U & 7;
    puVar5 = (ulong *)((iVar12 - 0x60U) - uVar1);
    *puVar5 = uVar7 << uVar1 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
    *(undefined4 *)(iVar12 + -0x88) = uVar3;
    *(undefined4 *)(iVar12 + -0x58) = *(undefined4 *)(iVar14 + -0x58);
    *(undefined4 *)(iVar12 + -0x54) = *(undefined4 *)(iVar14 + -0x54);
    *(undefined4 *)(iVar12 + -0x50) = *(undefined4 *)(iVar14 + -0x50);
    *(undefined4 *)(iVar12 + -0x4c) = *(undefined4 *)(iVar14 + -0x4c);
    iVar4 = *(int *)(iVar14 + -0x48);
    *(int *)(iVar12 + -0x48) = iVar4;
    *(undefined4 *)(iVar12 + -0x44) = *(undefined4 *)(iVar14 + -0x44);
    uVar1 = iVar14 - 0x39U & 7;
    uVar2 = iVar14 - 0x40U & 7;
    uVar8 = (*(long *)((iVar14 - 0x39U) - uVar1) << (7 - uVar1) * 8 |
            (long)iVar4 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
            *(ulong *)((iVar14 - 0x40U) - uVar2) >> uVar2 * 8;
    uVar1 = iVar12 - 0x39U & 7;
    puVar5 = (ulong *)((iVar12 - 0x39U) - uVar1);
    *puVar5 = *puVar5 & -1L << (uVar1 + 1) * 8 | uVar8 >> (7 - uVar1) * 8;
    uVar1 = iVar12 - 0x40U & 7;
    puVar5 = (ulong *)((iVar12 - 0x40U) - uVar1);
    *puVar5 = uVar8 << uVar1 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
    *(undefined4 *)(iVar12 + -0x38) = *(undefined4 *)(iVar14 + -0x38);
    uVar1 = iVar14 - 0x2dU & 7;
    uVar2 = iVar14 - 0x34U & 7;
    uVar8 = (*(long *)((iVar14 - 0x2dU) - uVar1) << (7 - uVar1) * 8 |
            uVar7 & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
            *(ulong *)((iVar14 - 0x34U) - uVar2) >> uVar2 * 8;
    uVar1 = iVar12 - 0x2dU & 7;
    puVar5 = (ulong *)((iVar12 - 0x2dU) - uVar1);
    *puVar5 = *puVar5 & -1L << (uVar1 + 1) * 8 | uVar8 >> (7 - uVar1) * 8;
    uVar1 = iVar12 - 0x34U & 7;
    puVar5 = (ulong *)((iVar12 - 0x34U) - uVar1);
    *puVar5 = uVar8 << uVar1 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
    *(undefined4 *)(iVar12 + -0x2c) = *(undefined4 *)(iVar14 + -0x2c);
    *(undefined4 *)(iVar12 + -0x28) = *(undefined4 *)(iVar14 + -0x28);
    *(undefined4 *)(iVar12 + -0x24) = *(undefined4 *)(iVar14 + -0x24);
    *(undefined4 *)(iVar12 + -0x20) = *(undefined4 *)(iVar14 + -0x20);
    *(undefined4 *)(iVar12 + -0x1c) = *(undefined4 *)(iVar14 + -0x1c);
    *(undefined4 *)(iVar12 + -0x18) = *(undefined4 *)(iVar14 + -0x18);
    *(undefined2 *)(iVar12 + -0x14) = *(undefined2 *)(iVar14 + -0x14);
    *(undefined4 *)(iVar12 + -0x10) = *(undefined4 *)(iVar14 + -0x10);
    *(undefined4 *)(iVar12 + -0xc) = *(undefined4 *)(iVar14 + -0xc);
    *(undefined2 *)(iVar12 + -8) = *(undefined2 *)(iVar14 + -8);
    *(undefined4 *)(iVar12 + -4) = *(undefined4 *)(iVar14 + -4);
  }
  return result;
}

XRoute* XRoute * uninitialized_copy<XRoute *, XRoute *>(XRoute *first, XRoute *last, XRoute *result) {
	XRoute *p;
	XRoute &value;
	void *pAddress;
	
  XRoute *pXVar1;
  XRoute *this;
  
  this = result;
  if (first != last) {
    do {
      pXVar1 = first + 1;
      result = this + 1;
      __6XRouteRC6XRoute(this,first);
      first = pXVar1;
      this = result;
    } while (pXVar1 != last);
  }
  return result;
}

void vector<XRoute, __malloc_alloc_template<0> >::insert_aux(XRoute *position, XRoute &x) {
	XRoute x_copy;
	XRoute *this;
	XRoute *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	RouteGoal *first;
	RouteGoal *last;
	RouteGoal *pointer;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	void *pAddress;
	unsigned int old_size;
	unsigned int len;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	void *result;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	XRoute &value;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	XRoute *first;
	XRoute *pointer;
	XRoute *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	RouteGoal *first;
	RouteGoal *last;
	RouteGoal *pointer;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	void *pAddress;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	
  float *pfVar1;
  undefined *puVar2;
  Slot__vtable **ppSVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  Slot__vtable *pSVar7;
  RouteGoal *pRVar8;
  ulong *puVar9;
  XRoute *pXVar10;
  RouteGoal *pRVar11;
  XRoute *pXVar12;
  XRoute *pXVar13;
  ulong in_t4;
  ulong uVar14;
  ulong in_t5;
  ulong uVar15;
  ulong in_t6;
  ulong uVar16;
  ulong in_t7;
  ulong uVar17;
  XRoute *pXVar18;
  int iVar19;
  int iVar20;
  XRoute x_copy;
  
  pXVar10 = this->finish;
  if (pXVar10 == this->end_of_storage) {
    pXVar13 = this->start;
    iVar19 = ((int)pXVar10 - (int)pXVar13) * -0x3e7063e7 >> 2;
    iVar20 = 1;
    if (iVar19 != 0) {
      iVar20 = iVar19 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if (iVar20 == 0) {
      pXVar10 = (XRoute *)0x0;
    }
    else {
      pXVar10 = (XRoute *)malloc(iVar20 * 0xa4);
      if (pXVar10 == (XRoute *)0x0) {
        pXVar10 = (XRoute *)oom_malloc__t23__malloc_alloc_template1i0Ui(iVar20 * 0xa4);
      }
      pXVar13 = this->start;
    }
                    /* end of inlined section */
    uninitialized_copy__H2ZP6XRouteZP6XRoute_X01X01X11_X11(pXVar13,position,pXVar10);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    __6XRouteRC6XRoute((XRoute *)((int)pXVar10 + ((int)position - (int)this->start)),x);
                    /* end of inlined section */
    uninitialized_copy__H2ZP6XRouteZP6XRoute_X01X01X11_X11
              (position,this->finish,
               (XRoute *)((int)pXVar10 + (int)position + (0xa4 - (int)this->start)));
    pXVar13 = this->finish;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    pXVar12 = this->start;
    if (pXVar12 != pXVar13) {
                    /* end of inlined section */
      pRVar11 = (pXVar12->field0_0x0).start;
      while( true ) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
        pXVar18 = pXVar12 + 1;
        pRVar8 = (pXVar12->field0_0x0).finish;
        (pXVar12->fSlot).field0_0x0.__vtable = (Slot__vtable *)_vt_4Slot;
        for (; pRVar11 != pRVar8; pRVar11 = pRVar11 + 1) {
        }
                    /* end of inlined section */
        pRVar11 = (pXVar12->field0_0x0).start;
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
        if ((pRVar11 != (RouteGoal *)0x0) &&
           ((int)(pXVar12->field0_0x0).end_of_storage - (int)pRVar11 >> 4 != 0)) {
          free(pRVar11);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
        }
        if (pXVar18 == pXVar13) break;
        pRVar11 = (pXVar18->field0_0x0).start;
        pXVar12 = pXVar18;
      }
    }
                    /* end of inlined section */
    pXVar13 = this->start;
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((pXVar13 != (XRoute *)0x0) &&
       (((int)this->end_of_storage - (int)pXVar13) * -0x3e7063e7 >> 2 != 0)) {
      free(pXVar13);
                    /* end of inlined section */
    }
    this->start = pXVar10;
    this->finish = pXVar10 + iVar19 + 1;
    this->end_of_storage = pXVar10 + iVar20;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    __6XRouteRC6XRoute(pXVar10,pXVar10 + -1);
                    /* end of inlined section */
    __6XRouteRC6XRoute(&x_copy,x);
    copy_backward__H2ZP6XRouteZP6XRoute_X01X01X11_X11(position,this->finish + -1,this->finish);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    __as__t6vector2Z9RouteGoalZt23__malloc_alloc_template1i0RCt6vector2Z9RouteGoalZt23__malloc_alloc_template1i0
              (&position->field0_0x0,&x_copy.field0_0x0);
    pSVar7 = (position->fSlot).field0_0x0.__vtable;
    puVar2 = (undefined *)((int)&x_copy.fSlot.field0_0x0.yoffset + 3);
    uVar5 = (uint)puVar2 & 7;
    uVar6 = (uint)&x_copy.fSlot & 7;
    uVar14 = (*(long *)(puVar2 + -uVar5) << (7 - uVar5) * 8 |
             in_t4 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
             *(ulong *)((int)&x_copy.fSlot - uVar6) >> uVar6 * 8;
    puVar2 = (undefined *)((int)&x_copy.fSlot.field0_0x0.nameIndex + 3);
    uVar5 = (uint)puVar2 & 7;
    pfVar1 = &x_copy.fSlot.field0_0x0.altOffset;
    uVar6 = (uint)pfVar1 & 7;
    uVar15 = (*(long *)(puVar2 + -uVar5) << (7 - uVar5) * 8 |
             in_t5 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
             *(ulong *)((int)pfVar1 - uVar6) >> uVar6 * 8;
    puVar2 = (undefined *)((int)x_copy.fSlot.multipliers + 3);
    uVar5 = (uint)puVar2 & 7;
    ppSVar3 = &x_copy.fSlot.field0_0x0.__vtable;
    uVar6 = (uint)ppSVar3 & 7;
    uVar16 = (*(long *)(puVar2 + -uVar5) << (7 - uVar5) * 8 |
             in_t6 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
             *(ulong *)((int)ppSVar3 - uVar6) >> uVar6 * 8;
    puVar2 = (undefined *)((int)x_copy.fSlot.multipliers + 0xb);
    uVar5 = (uint)puVar2 & 7;
    piVar4 = x_copy.fSlot.multipliers + 1;
    uVar6 = (uint)piVar4 & 7;
    uVar17 = (*(long *)(puVar2 + -uVar5) << (7 - uVar5) * 8 |
             in_t7 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
             *(ulong *)((int)piVar4 - uVar6) >> uVar6 * 8;
    puVar2 = (undefined *)((int)&(position->fSlot).field0_0x0.yoffset + 3);
    uVar5 = (uint)puVar2 & 7;
    puVar9 = (ulong *)(puVar2 + -uVar5);
    *puVar9 = *puVar9 & -1L << (uVar5 + 1) * 8 | uVar14 >> (7 - uVar5) * 8;
    uVar5 = (uint)&position->fSlot & 7;
    puVar9 = (ulong *)((int)&position->fSlot - uVar5);
    *puVar9 = uVar14 << uVar5 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar2 = (undefined *)((int)&(position->fSlot).field0_0x0.nameIndex + 3);
    uVar5 = (uint)puVar2 & 7;
    puVar9 = (ulong *)(puVar2 + -uVar5);
    *puVar9 = *puVar9 & -1L << (uVar5 + 1) * 8 | uVar15 >> (7 - uVar5) * 8;
    pfVar1 = &(position->fSlot).field0_0x0.altOffset;
    uVar5 = (uint)pfVar1 & 7;
    puVar9 = (ulong *)((int)pfVar1 - uVar5);
    *puVar9 = uVar15 << uVar5 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar2 = (undefined *)((int)(position->fSlot).multipliers + 3);
    uVar5 = (uint)puVar2 & 7;
    puVar9 = (ulong *)(puVar2 + -uVar5);
    *puVar9 = *puVar9 & -1L << (uVar5 + 1) * 8 | uVar16 >> (7 - uVar5) * 8;
    ppSVar3 = &(position->fSlot).field0_0x0.__vtable;
    uVar5 = (uint)ppSVar3 & 7;
    puVar9 = (ulong *)((int)ppSVar3 - uVar5);
    *puVar9 = uVar16 << uVar5 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar2 = (undefined *)((int)(position->fSlot).multipliers + 0xb);
    uVar5 = (uint)puVar2 & 7;
    puVar9 = (ulong *)(puVar2 + -uVar5);
    *puVar9 = *puVar9 & -1L << (uVar5 + 1) * 8 | uVar17 >> (7 - uVar5) * 8;
    piVar4 = (position->fSlot).multipliers + 1;
    uVar5 = (uint)piVar4 & 7;
    puVar9 = (ulong *)((int)piVar4 - uVar5);
    *puVar9 = uVar17 << uVar5 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar2 = (undefined *)((int)&x_copy.fSlot.snapTargetSlot + 3);
    uVar5 = (uint)puVar2 & 7;
    piVar4 = &x_copy.fSlot.rsFlags;
    uVar6 = (uint)piVar4 & 7;
    uVar14 = (*(long *)(puVar2 + -uVar5) << (7 - uVar5) * 8 |
             uVar14 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
             *(ulong *)((int)piVar4 - uVar6) >> uVar6 * 8;
    puVar2 = (undefined *)((int)&x_copy.fSlot.maxProximity + 3);
    uVar5 = (uint)puVar2 & 7;
    piVar4 = &x_copy.fSlot.minProximity;
    uVar6 = (uint)piVar4 & 7;
    uVar15 = (*(long *)(puVar2 + -uVar5) << (7 - uVar5) * 8 |
             uVar15 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
             *(ulong *)((int)piVar4 - uVar6) >> uVar6 * 8;
    puVar2 = (undefined *)((int)&x_copy.fSlot.gradient + 3);
    uVar5 = (uint)puVar2 & 7;
    piVar4 = &x_copy.fSlot.optimalProximity;
    uVar6 = (uint)piVar4 & 7;
    uVar16 = (*(long *)(puVar2 + -uVar5) << (7 - uVar5) * 8 |
             uVar16 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
             *(ulong *)((int)piVar4 - uVar6) >> uVar6 * 8;
    puVar2 = (undefined *)((int)&x_copy.fSlot.resolution + 3);
    uVar5 = (uint)puVar2 & 7;
    piVar4 = &x_copy.fSlot.facing;
    uVar6 = (uint)piVar4 & 7;
    uVar17 = (*(long *)(puVar2 + -uVar5) << (7 - uVar5) * 8 |
             uVar17 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
             *(ulong *)((int)piVar4 - uVar6) >> uVar6 * 8;
    puVar2 = (undefined *)((int)&(position->fSlot).snapTargetSlot + 3);
    uVar5 = (uint)puVar2 & 7;
    puVar9 = (ulong *)(puVar2 + -uVar5);
    *puVar9 = *puVar9 & -1L << (uVar5 + 1) * 8 | uVar14 >> (7 - uVar5) * 8;
    piVar4 = &(position->fSlot).rsFlags;
    uVar5 = (uint)piVar4 & 7;
    puVar9 = (ulong *)((int)piVar4 - uVar5);
    *puVar9 = uVar14 << uVar5 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar2 = (undefined *)((int)&(position->fSlot).maxProximity + 3);
    uVar5 = (uint)puVar2 & 7;
    puVar9 = (ulong *)(puVar2 + -uVar5);
    *puVar9 = *puVar9 & -1L << (uVar5 + 1) * 8 | uVar15 >> (7 - uVar5) * 8;
    piVar4 = &(position->fSlot).minProximity;
    uVar5 = (uint)piVar4 & 7;
    puVar9 = (ulong *)((int)piVar4 - uVar5);
    *puVar9 = uVar15 << uVar5 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar2 = (undefined *)((int)&(position->fSlot).gradient + 3);
    uVar5 = (uint)puVar2 & 7;
    puVar9 = (ulong *)(puVar2 + -uVar5);
    *puVar9 = *puVar9 & -1L << (uVar5 + 1) * 8 | uVar16 >> (7 - uVar5) * 8;
    piVar4 = &(position->fSlot).optimalProximity;
    uVar5 = (uint)piVar4 & 7;
    puVar9 = (ulong *)((int)piVar4 - uVar5);
    *puVar9 = uVar16 << uVar5 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar2 = (undefined *)((int)&(position->fSlot).resolution + 3);
    uVar5 = (uint)puVar2 & 7;
    puVar9 = (ulong *)(puVar2 + -uVar5);
    *puVar9 = *puVar9 & -1L << (uVar5 + 1) * 8 | uVar17 >> (7 - uVar5) * 8;
    piVar4 = &(position->fSlot).facing;
    uVar5 = (uint)piVar4 & 7;
    puVar9 = (ulong *)((int)piVar4 - uVar5);
    *puVar9 = uVar17 << uVar5 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    position->fDest = x_copy.fDest;
    position->fStart = x_copy.fStart;
    position->fCurGoal = x_copy.fCurGoal;
    position->fMaxScore = x_copy.fMaxScore;
    position->fTrapCount = x_copy.fTrapCount;
    position->fWaitStartTicks = x_copy.fWaitStartTicks;
    (position->fSlot).field0_0x0.__vtable = pSVar7;
    puVar2 = (undefined *)((int)&x_copy.fLastLocation.x.whole + 3);
    uVar5 = (uint)puVar2 & 7;
    uVar6 = (uint)&x_copy.fLastLocation & 7;
    uVar14 = (*(long *)(puVar2 + -uVar5) << (7 - uVar5) * 8 |
             (long)x_copy.fCurGoal & 0xffffffffffffffffU >> (uVar5 + 1) * 8) &
             -1L << (8 - uVar6) * 8 | *(ulong *)((int)&x_copy.fLastLocation - uVar6) >> uVar6 * 8;
    puVar2 = (undefined *)((int)&(position->fLastLocation).x.whole + 3);
    uVar5 = (uint)puVar2 & 7;
    puVar9 = (ulong *)(puVar2 + -uVar5);
    *puVar9 = *puVar9 & -1L << (uVar5 + 1) * 8 | uVar14 >> (7 - uVar5) * 8;
    uVar5 = (uint)&position->fLastLocation & 7;
    puVar9 = (ulong *)((int)&position->fLastLocation - uVar5);
    *puVar9 = uVar14 << uVar5 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    position->fCurPortal = x_copy.fCurPortal;
    puVar2 = (undefined *)((int)&(position->fStartPt).x.whole + 3);
    uVar5 = (uint)puVar2 & 7;
    puVar9 = (ulong *)(puVar2 + -uVar5);
    *puVar9 = *puVar9 & -1L << (uVar5 + 1) * 8 | (ulong)x_copy.fStartPt >> (7 - uVar5) * 8;
    uVar5 = (uint)&position->fStartPt & 7;
    puVar9 = (ulong *)((int)&position->fStartPt - uVar5);
    *puVar9 = (long)x_copy.fStartPt << uVar5 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    position->fExitDirFlag = x_copy.fExitDirFlag;
    *(undefined4 *)&position->fValid = x_copy._124_4_;
    position->fIgnore = x_copy.fIgnore;
    position->fMoving = x_copy.fMoving;
    *(undefined4 *)&position->fMoveSuccess = x_copy._136_4_;
    position->fResult = x_copy.fResult;
    position->fBlockingObjectID = x_copy.fBlockingObjectID;
    position->fMaxGoalCount = x_copy.fMaxGoalCount;
    *(undefined4 *)&position->fIgnoreAllPeople = x_copy._148_4_;
    position->fMoveInteractionID = x_copy.fMoveInteractionID;
    position->fFootprintMask = x_copy.fFootprintMask;
    x_copy.fSlot.field0_0x0.__vtable = (Slot__vtable *)_vt_4Slot;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
    this->finish = this->finish + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    for (pRVar11 = x_copy.field0_0x0.start; pRVar11 != x_copy.field0_0x0.finish;
        pRVar11 = pRVar11 + 1) {
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((x_copy.field0_0x0.start != (RouteGoal *)0x0) &&
       ((int)x_copy.field0_0x0.end_of_storage - (int)x_copy.field0_0x0.start >> 4 != 0)) {
      free(x_copy.field0_0x0.start);
                    /* end of inlined section */
    }
  }
  return;
}

vector<RouteGoal,__malloc_alloc_template<0> >& vector<RouteGoal, __malloc_alloc_template<0> >::operator=(vector<RouteGoal,__malloc_alloc_template<0> > &x) {
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	RouteGoal *first;
	RouteGoal *last;
	RouteGoal *pointer;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	void *result;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	RouteGoal *first;
	RouteGoal *result;
	ptrdiff_t n;
	RouteGoal *first;
	RouteGoal *last;
	RouteGoal *pointer;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	RouteGoal *first;
	RouteGoal *result;
	ptrdiff_t n;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  RouteGoal *pRVar6;
  RouteGoal *pRVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (x == this) {
    return this;
  }
  pRVar7 = x->start;
  pRVar6 = this->start;
  uVar12 = (ulong)(int)pRVar6;
  uVar13 = (ulong)((int)x->finish - (int)pRVar7 >> 4);
  if ((ulong)(long)((int)this->end_of_storage - (int)pRVar6 >> 4) < uVar13) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    while (uVar12 != (long)(int)this->finish) {
      pRVar6 = pRVar6 + 1;
      uVar12 = (ulong)(int)pRVar6;
    }
                    /* end of inlined section */
    pRVar7 = this->start;
    if (pRVar7 == (RouteGoal *)0x0) {
LAB_002234cc:
                    /* end of inlined section */
      pRVar7 = x->finish;
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
      if ((int)this->end_of_storage - (int)pRVar7 >> 4 != 0) {
        free(pRVar7);
        goto LAB_002234cc;
      }
      pRVar7 = x->finish;
    }
    iVar9 = (int)pRVar7 - (int)x->start >> 4;
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    uVar8 = iVar9 << 4;
    if (iVar9 == 0) {
      pRVar7 = (RouteGoal *)0x0;
                    /* end of inlined section */
      this->start = (RouteGoal *)0x0;
    }
    else {
      pRVar7 = (RouteGoal *)malloc(uVar8);
      if (pRVar7 == (RouteGoal *)0x0) {
        pRVar7 = (RouteGoal *)oom_malloc__t23__malloc_alloc_template1i0Ui(uVar8);
        this->start = pRVar7;
      }
      else {
        this->start = pRVar7;
      }
    }
    pRVar7 = uninitialized_copy__H2ZPC9RouteGoalZP9RouteGoal_X01X01X11_X11
                       (x->start,x->finish,pRVar7);
    this->end_of_storage = pRVar7;
  }
  else {
    uVar10 = (ulong)((int)this->finish - (int)pRVar6 >> 4);
    uVar4 = uVar12;
    uVar5 = uVar13;
    if (uVar13 <= uVar10) {
      for (; uVar8 = (uint)uVar4, 0 < (long)uVar5; uVar5 = (long)((int)uVar5 + -1)) {
        puVar1 = (undefined *)((int)&(pRVar7->loc).x.whole + 3);
        uVar11 = (uint)puVar1 & 7;
        uVar2 = (uint)pRVar7 & 7;
        uVar12 = (*(long *)(puVar1 + -uVar11) << (7 - uVar11) * 8 |
                 uVar12 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                 *(ulong *)((int)pRVar7 - uVar2) >> uVar2 * 8;
        puVar1 = (undefined *)((int)&pRVar7->entryDirFlag + 1);
        uVar11 = (uint)puVar1 & 7;
        uVar2 = (uint)&pRVar7->score & 7;
        uVar13 = (*(long *)(puVar1 + -uVar11) << (7 - uVar11) * 8 |
                 uVar13 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                 *(ulong *)((int)&pRVar7->score - uVar2) >> uVar2 * 8;
        uVar11 = uVar8 + 7 & 7;
        puVar3 = (ulong *)((uVar8 + 7) - uVar11);
        *puVar3 = *puVar3 & -1L << (uVar11 + 1) * 8 | uVar12 >> (7 - uVar11) * 8;
        uVar11 = uVar8 & 7;
        *(ulong *)(uVar8 - uVar11) =
             uVar12 << uVar11 * 8 |
             *(ulong *)(uVar8 - uVar11) & 0xffffffffffffffffU >> (8 - uVar11) * 8;
        uVar11 = uVar8 + 0xf & 7;
        puVar3 = (ulong *)((uVar8 + 0xf) - uVar11);
        *puVar3 = *puVar3 & -1L << (uVar11 + 1) * 8 | uVar13 >> (7 - uVar11) * 8;
        uVar11 = uVar8 + 8 & 7;
        puVar3 = (ulong *)((uVar8 + 8) - uVar11);
        *puVar3 = uVar13 << uVar11 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
        pRVar7 = pRVar7 + 1;
        uVar4 = (long)(int)(uVar8 + 0x10);
      }
      if (uVar4 == (long)(int)this->finish) {
        pRVar7 = x->start;
      }
      else {
        do {
          uVar8 = uVar8 + 0x10;
        } while ((long)(int)uVar8 != (long)(int)this->finish);
                    /* end of inlined section */
        pRVar7 = x->start;
      }
      goto LAB_00223614;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    for (; 0 < (long)uVar10; uVar10 = (ulong)((int)uVar10 + -1)) {
      puVar1 = (undefined *)((int)&(pRVar7->loc).x.whole + 3);
      uVar8 = (uint)puVar1 & 7;
      uVar11 = (uint)pRVar7 & 7;
      uVar12 = (*(long *)(puVar1 + -uVar8) << (7 - uVar8) * 8 |
               uVar12 & 0xffffffffffffffffU >> (uVar8 + 1) * 8) & -1L << (8 - uVar11) * 8 |
               *(ulong *)((int)pRVar7 - uVar11) >> uVar11 * 8;
      puVar1 = (undefined *)((int)&pRVar7->entryDirFlag + 1);
      uVar8 = (uint)puVar1 & 7;
      uVar11 = (uint)&pRVar7->score & 7;
      uVar13 = (*(long *)(puVar1 + -uVar8) << (7 - uVar8) * 8 |
               uVar13 & 0xffffffffffffffffU >> (uVar8 + 1) * 8) & -1L << (8 - uVar11) * 8 |
               *(ulong *)((int)&pRVar7->score - uVar11) >> uVar11 * 8;
      uVar11 = (uint)uVar4;
      uVar8 = uVar11 + 7 & 7;
      puVar3 = (ulong *)((uVar11 + 7) - uVar8);
      *puVar3 = *puVar3 & -1L << (uVar8 + 1) * 8 | uVar12 >> (7 - uVar8) * 8;
      uVar8 = uVar11 & 7;
      *(ulong *)(uVar11 - uVar8) =
           uVar12 << uVar8 * 8 | *(ulong *)(uVar11 - uVar8) & 0xffffffffffffffffU >> (8 - uVar8) * 8
      ;
      uVar8 = uVar11 + 0xf & 7;
      puVar3 = (ulong *)((uVar11 + 0xf) - uVar8);
      *puVar3 = *puVar3 & -1L << (uVar8 + 1) * 8 | uVar13 >> (7 - uVar8) * 8;
      uVar8 = uVar11 + 8 & 7;
      puVar3 = (ulong *)((uVar11 + 8) - uVar8);
      *puVar3 = uVar13 << uVar8 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
      pRVar7 = pRVar7 + 1;
      uVar4 = (long)(int)(uVar11 + 0x10);
    }
                    /* end of inlined section */
    iVar9 = (int)this->finish - (int)this->start >> 4;
    uninitialized_copy__H2ZPC9RouteGoalZP9RouteGoal_X01X01X11_X11
              (x->start + iVar9,x->finish,this->start + iVar9);
  }
  pRVar7 = x->start;
LAB_00223614:
  this->finish = this->start + ((int)x->finish - (int)pRVar7 >> 4);
  return this;
}

cXPersonImpl** cXPersonImpl ** copy_backward<cXPersonImpl **, cXPersonImpl **>(cXPersonImpl **first, cXPersonImpl **last, cXPersonImpl **result) {
  if (first != last) {
    do {
      last = last + -1;
      result = result + -1;
      *result = *last;
    } while (first != last);
  }
  return result;
}

cXPersonImpl** cXPersonImpl ** uninitialized_copy<cXPersonImpl **, cXPersonImpl **>(cXPersonImpl **first, cXPersonImpl **last, cXPersonImpl **result) {
	cXPersonImpl **p;
	cXPersonImpl *&value;
	void *pAddress;
	
  cXPersonImpl__123_903 *pcVar1;
  cXPersonImpl__123_903 **ppcVar2;
  
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

void vector<cXPersonImpl *, __malloc_alloc_template<0> >::insert_aux(cXPersonImpl **position, cXPersonImpl *&x) {
	cXPersonImpl *x_copy;
	vector<cXPersonImpl *,__malloc_alloc_template<0> > *this;
	vector<cXPersonImpl *,__malloc_alloc_template<0> > *this;
	vector<cXPersonImpl *,__malloc_alloc_template<0> > *this;
	void *result;
	vector<cXPersonImpl *,__malloc_alloc_template<0> > *this;
	vector<cXPersonImpl *,__malloc_alloc_template<0> > *this;
	cXPersonImpl **p;
	cXPersonImpl *&value;
	void *pAddress;
	vector<cXPersonImpl *,__malloc_alloc_template<0> > *this;
	vector<cXPersonImpl *,__malloc_alloc_template<0> > *this;
	vector<cXPersonImpl *,__malloc_alloc_template<0> > *this;
	vector<cXPersonImpl *,__malloc_alloc_template<0> > *this;
	cXPersonImpl **first;
	cXPersonImpl **pointer;
	vector<cXPersonImpl *,__malloc_alloc_template<0> > *this;
	
  cXPersonImpl__123_903 *pcVar1;
  uint size;
  cXPersonImpl__123_903 **ppcVar2;
  int iVar3;
  cXPersonImpl__123_903 **ppcVar4;
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
      ppcVar2 = (cXPersonImpl__123_903 **)0x0;
      size = 0;
    }
    else {
      ppcVar2 = (cXPersonImpl__123_903 **)malloc(size);
      if (ppcVar2 == (cXPersonImpl__123_903 **)0x0) {
        ppcVar2 = (cXPersonImpl__123_903 **)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
      }
    }
                    /* end of inlined section */
                    /* end of inlined section */
    uninitialized_copy__H2ZPP12cXPersonImplZPP12cXPersonImpl_X01X01X11_X11
              (this->start,position,ppcVar2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *(cXPersonImpl__123_903 **)((int)ppcVar2 + ((int)position - (int)this->start)) = *x;
                    /* end of inlined section */
    uninitialized_copy__H2ZPP12cXPersonImplZPP12cXPersonImpl_X01X01X11_X11
              (position,this->finish,
               (cXPersonImpl__123_903 **)((int)ppcVar2 + (int)position + (4 - (int)this->start)));
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
    if ((ppcVar4 != (cXPersonImpl__123_903 **)0x0) &&
       ((int)this->end_of_storage - (int)ppcVar4 >> 2 != 0)) {
      free(ppcVar4);
                    /* end of inlined section */
    }
    ppcVar4 = ppcVar2 + iVar5;
    this->start = ppcVar2;
    this->end_of_storage = (cXPersonImpl__123_903 **)((int)ppcVar2 + size);
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *ppcVar2 = ppcVar2[-1];
                    /* end of inlined section */
    pcVar1 = *x;
    copy_backward__H2ZPP12cXPersonImplZPP12cXPersonImpl_X01X01X11_X11
              (position,this->finish + -1,this->finish);
    *position = pcVar1;
    ppcVar4 = this->finish;
  }
  this->finish = ppcVar4 + 1;
  return;
}

void void fill<XRoute *, XRoute>(XRoute *first, XRoute *last, XRoute &value) {
	XRoute *this;
	XRoute &_ctor_arg;
	
  float *pfVar1;
  Slot__vtable **ppSVar2;
  undefined *puVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  RouteGoal *pRVar7;
  ulong *puVar8;
  vector_RouteGoal___malloc_alloc_template_0___ *pvVar9;
  ulong uVar10;
  ulong uVar11;
  vector_RouteGoal___malloc_alloc_template_0___ *this;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  uVar16 = (ulong)(int)first;
  uVar11 = uVar16;
  uVar13 = (long)(int)value;
  for (; uVar16 != (long)(int)last; uVar16 = (ulong)((int)uVar16 + 0xa4)) {
    this = (vector_RouteGoal___malloc_alloc_template_0___ *)uVar11;
    uVar14 = (long)(int)value;
    pvVar9 = __as__t6vector2Z9RouteGoalZt23__malloc_alloc_template1i0RCt6vector2Z9RouteGoalZt23__malloc_alloc_template1i0
                       (this,&value->field0_0x0);
    pRVar7 = this[2].finish;
    puVar3 = (undefined *)((int)&(value->fSlot).field0_0x0.yoffset + 3);
    uVar5 = (uint)puVar3 & 7;
    uVar6 = (uint)&value->fSlot & 7;
    uVar10 = (*(long *)(puVar3 + -uVar5) << (7 - uVar5) * 8 |
             (long)(int)pvVar9 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
             *(ulong *)((int)&value->fSlot - uVar6) >> uVar6 * 8;
    puVar3 = (undefined *)((int)&(value->fSlot).field0_0x0.nameIndex + 3);
    uVar5 = (uint)puVar3 & 7;
    pfVar1 = &(value->fSlot).field0_0x0.altOffset;
    uVar6 = (uint)pfVar1 & 7;
    uVar12 = (*(long *)(puVar3 + -uVar5) << (7 - uVar5) * 8 |
             uVar11 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
             *(ulong *)((int)pfVar1 - uVar6) >> uVar6 * 8;
    puVar3 = (undefined *)((int)(value->fSlot).multipliers + 3);
    uVar5 = (uint)puVar3 & 7;
    ppSVar2 = &(value->fSlot).field0_0x0.__vtable;
    uVar6 = (uint)ppSVar2 & 7;
    uVar14 = (*(long *)(puVar3 + -uVar5) << (7 - uVar5) * 8 |
             uVar14 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
             *(ulong *)((int)ppSVar2 - uVar6) >> uVar6 * 8;
    puVar3 = (undefined *)((int)(value->fSlot).multipliers + 0xb);
    uVar5 = (uint)puVar3 & 7;
    piVar4 = (value->fSlot).multipliers + 1;
    uVar6 = (uint)piVar4 & 7;
    uVar15 = (*(long *)(puVar3 + -uVar5) << (7 - uVar5) * 8 |
             uVar13 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
             *(ulong *)((int)piVar4 - uVar6) >> uVar6 * 8;
    puVar3 = (undefined *)((int)&this[1].finish + 3);
    uVar5 = (uint)puVar3 & 7;
    puVar8 = (ulong *)(puVar3 + -uVar5);
    *puVar8 = *puVar8 & -1L << (uVar5 + 1) * 8 | uVar10 >> (7 - uVar5) * 8;
    uVar5 = (uint)(this + 1) & 7;
    puVar8 = (ulong *)((int)(this + 1) - uVar5);
    *puVar8 = uVar10 << uVar5 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar3 = (undefined *)((int)&this[2].start + 3);
    uVar5 = (uint)puVar3 & 7;
    puVar8 = (ulong *)(puVar3 + -uVar5);
    *puVar8 = *puVar8 & -1L << (uVar5 + 1) * 8 | uVar12 >> (7 - uVar5) * 8;
    uVar5 = (uint)&this[1].end_of_storage & 7;
    puVar8 = (ulong *)((int)&this[1].end_of_storage - uVar5);
    *puVar8 = uVar12 << uVar5 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar3 = (undefined *)((int)&this[2].end_of_storage + 3);
    uVar5 = (uint)puVar3 & 7;
    puVar8 = (ulong *)(puVar3 + -uVar5);
    *puVar8 = *puVar8 & -1L << (uVar5 + 1) * 8 | uVar14 >> (7 - uVar5) * 8;
    uVar5 = (uint)&this[2].finish & 7;
    puVar8 = (ulong *)((int)&this[2].finish - uVar5);
    *puVar8 = uVar14 << uVar5 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar3 = (undefined *)((int)&this[3].finish + 3);
    uVar5 = (uint)puVar3 & 7;
    puVar8 = (ulong *)(puVar3 + -uVar5);
    *puVar8 = *puVar8 & -1L << (uVar5 + 1) * 8 | uVar15 >> (7 - uVar5) * 8;
    uVar5 = (uint)(this + 3) & 7;
    puVar8 = (ulong *)((int)(this + 3) - uVar5);
    *puVar8 = uVar15 << uVar5 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar3 = (undefined *)((int)&(value->fSlot).snapTargetSlot + 3);
    uVar5 = (uint)puVar3 & 7;
    piVar4 = &(value->fSlot).rsFlags;
    uVar6 = (uint)piVar4 & 7;
    uVar11 = (*(long *)(puVar3 + -uVar5) << (7 - uVar5) * 8 |
             uVar10 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
             *(ulong *)((int)piVar4 - uVar6) >> uVar6 * 8;
    puVar3 = (undefined *)((int)&(value->fSlot).maxProximity + 3);
    uVar5 = (uint)puVar3 & 7;
    piVar4 = &(value->fSlot).minProximity;
    uVar6 = (uint)piVar4 & 7;
    uVar13 = (*(long *)(puVar3 + -uVar5) << (7 - uVar5) * 8 |
             uVar12 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
             *(ulong *)((int)piVar4 - uVar6) >> uVar6 * 8;
    puVar3 = (undefined *)((int)&(value->fSlot).gradient + 3);
    uVar5 = (uint)puVar3 & 7;
    piVar4 = &(value->fSlot).optimalProximity;
    uVar6 = (uint)piVar4 & 7;
    uVar14 = (*(long *)(puVar3 + -uVar5) << (7 - uVar5) * 8 |
             uVar14 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
             *(ulong *)((int)piVar4 - uVar6) >> uVar6 * 8;
    puVar3 = (undefined *)((int)&(value->fSlot).resolution + 3);
    uVar5 = (uint)puVar3 & 7;
    piVar4 = &(value->fSlot).facing;
    uVar6 = (uint)piVar4 & 7;
    uVar10 = (*(long *)(puVar3 + -uVar5) << (7 - uVar5) * 8 |
             uVar15 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
             *(ulong *)((int)piVar4 - uVar6) >> uVar6 * 8;
    puVar3 = (undefined *)((int)&this[4].start + 3);
    uVar5 = (uint)puVar3 & 7;
    puVar8 = (ulong *)(puVar3 + -uVar5);
    *puVar8 = *puVar8 & -1L << (uVar5 + 1) * 8 | uVar11 >> (7 - uVar5) * 8;
    uVar5 = (uint)&this[3].end_of_storage & 7;
    puVar8 = (ulong *)((int)&this[3].end_of_storage - uVar5);
    *puVar8 = uVar11 << uVar5 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar3 = (undefined *)((int)&this[4].end_of_storage + 3);
    uVar5 = (uint)puVar3 & 7;
    puVar8 = (ulong *)(puVar3 + -uVar5);
    *puVar8 = *puVar8 & -1L << (uVar5 + 1) * 8 | uVar13 >> (7 - uVar5) * 8;
    uVar5 = (uint)&this[4].finish & 7;
    puVar8 = (ulong *)((int)&this[4].finish - uVar5);
    *puVar8 = uVar13 << uVar5 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar3 = (undefined *)((int)&this[5].finish + 3);
    uVar5 = (uint)puVar3 & 7;
    puVar8 = (ulong *)(puVar3 + -uVar5);
    *puVar8 = *puVar8 & -1L << (uVar5 + 1) * 8 | uVar14 >> (7 - uVar5) * 8;
    uVar5 = (uint)(this + 5) & 7;
    puVar8 = (ulong *)((int)(this + 5) - uVar5);
    *puVar8 = uVar14 << uVar5 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar3 = (undefined *)((int)&this[6].start + 3);
    uVar5 = (uint)puVar3 & 7;
    puVar8 = (ulong *)(puVar3 + -uVar5);
    *puVar8 = *puVar8 & -1L << (uVar5 + 1) * 8 | uVar10 >> (7 - uVar5) * 8;
    uVar5 = (uint)&this[5].end_of_storage & 7;
    puVar8 = (ulong *)((int)&this[5].end_of_storage - uVar5);
    *puVar8 = uVar10 << uVar5 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    this[2].finish = pRVar7;
    this[6].finish = (RouteGoal *)value->fDest;
    this[6].end_of_storage = (RouteGoal *)value->fStart;
    this[7].start = (RouteGoal *)value->fCurGoal;
    this[7].finish = (RouteGoal *)value->fMaxScore;
    this[7].end_of_storage = (RouteGoal *)value->fTrapCount;
    pRVar7 = (RouteGoal *)value->fWaitStartTicks;
    this[8].start = pRVar7;
    puVar3 = (undefined *)((int)&(value->fLastLocation).x.whole + 3);
    uVar5 = (uint)puVar3 & 7;
    uVar6 = (uint)&value->fLastLocation & 7;
    uVar11 = (*(long *)(puVar3 + -uVar5) << (7 - uVar5) * 8 |
             (long)(int)pRVar7 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
             *(ulong *)((int)&value->fLastLocation - uVar6) >> uVar6 * 8;
    puVar3 = (undefined *)((int)&this[8].end_of_storage + 3);
    uVar5 = (uint)puVar3 & 7;
    puVar8 = (ulong *)(puVar3 + -uVar5);
    *puVar8 = *puVar8 & -1L << (uVar5 + 1) * 8 | uVar11 >> (7 - uVar5) * 8;
    uVar5 = (uint)&this[8].finish & 7;
    puVar8 = (ulong *)((int)&this[8].finish - uVar5);
    *puVar8 = uVar11 << uVar5 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    this[9].start = (RouteGoal *)value->fCurPortal;
    puVar3 = (undefined *)((int)&(value->fStartPt).x.whole + 3);
    uVar5 = (uint)puVar3 & 7;
    uVar6 = (uint)&value->fStartPt & 7;
    uVar13 = (*(long *)(puVar3 + -uVar5) << (7 - uVar5) * 8 |
             uVar10 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
             *(ulong *)((int)&value->fStartPt - uVar6) >> uVar6 * 8;
    puVar3 = (undefined *)((int)&this[9].end_of_storage + 3);
    uVar5 = (uint)puVar3 & 7;
    puVar8 = (ulong *)(puVar3 + -uVar5);
    *puVar8 = *puVar8 & -1L << (uVar5 + 1) * 8 | uVar13 >> (7 - uVar5) * 8;
    uVar5 = (uint)&this[9].finish & 7;
    puVar8 = (ulong *)((int)&this[9].finish - uVar5);
    *puVar8 = uVar13 << uVar5 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    this[10].start = (RouteGoal *)value->fExitDirFlag;
    this[10].finish = *(RouteGoal **)&value->fValid;
    this[10].end_of_storage = (RouteGoal *)value->fIgnore;
    this[0xb].start = (RouteGoal *)value->fMoving;
    this[0xb].finish = *(RouteGoal **)&value->fMoveSuccess;
    this[0xb].end_of_storage = (RouteGoal *)value->fResult;
    *(ushort *)&this[0xc].start = value->fBlockingObjectID;
    this[0xc].finish = *(RouteGoal **)&value->fIgnoreAllPeople;
    this[0xc].end_of_storage = (RouteGoal *)value->fMoveInteractionID;
    *(ushort *)&this[0xd].start = value->fFootprintMask;
    this[0xd].finish = (RouteGoal *)value->fMaxGoalCount;
    uVar11 = (long)(int)&this[0xd].end_of_storage;
  }
  return;
}

XRoute* XRoute * uninitialized_fill_n<XRoute *, unsigned int, XRoute>(XRoute *first, unsigned int n, XRoute &x) {
	XRoute *p;
	XRoute &value;
	void *pAddress;
	
  XRoute *this;
  int iVar1;
  
  iVar1 = n - 1;
  this = first;
  if (n != 0) {
    do {
      first = this + 1;
      __6XRouteRC6XRoute(this,x);
      iVar1 = iVar1 + -1;
      this = first;
    } while (iVar1 != -1);
  }
  return first;
}

void vector<XRoute, __malloc_alloc_template<0> >::insert(XRoute *position, unsigned int n, XRoute &x) {
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	unsigned int old_size;
	unsigned int len;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	unsigned int &b;
	unsigned int n;
	unsigned int n;
	void *result;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	XRoute *first;
	XRoute *pointer;
	XRoute *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	RouteGoal *first;
	RouteGoal *last;
	RouteGoal *pointer;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	void *pAddress;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	
  XRoute *pXVar1;
  RouteGoal *pRVar2;
  XRoute *pXVar3;
  RouteGoal *pRVar4;
  XRoute *pXVar5;
  uint *puVar6;
  XRoute *pXVar7;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  int iVar8;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  uint old_size;
  uint local_7c [3];
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
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_7c[0] = n;
  if (n != 0) {
    pXVar3 = this->finish;
    if ((uint)(((int)this->end_of_storage - (int)pXVar3) * -0x3e7063e7 >> 2) < n) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
      old_size = ((int)pXVar3 - (int)this->start) * -0x3e7063e7 >> 2;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
      puVar6 = local_7c;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
      if (n <= old_size) {
        puVar6 = &old_size;
      }
                    /* end of inlined section */
      iVar8 = old_size + *puVar6;
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
      if (iVar8 == 0) {
        pXVar3 = (XRoute *)0x0;
      }
      else {
        pXVar3 = (XRoute *)malloc(iVar8 * 0xa4);
        if (pXVar3 == (XRoute *)0x0) {
          pXVar3 = (XRoute *)oom_malloc__t23__malloc_alloc_template1i0Ui(iVar8 * 0xa4);
        }
      }
                    /* end of inlined section */
      uninitialized_copy__H2ZP6XRouteZP6XRoute_X01X01X11_X11(this->start,position,pXVar3);
      uninitialized_fill_n__H3ZP6XRouteZUiZ6XRoute_X01X11RCX21_X01
                ((XRoute *)((int)pXVar3 + ((int)position - (int)this->start)),local_7c[0],x);
      uninitialized_copy__H2ZP6XRouteZP6XRoute_X01X01X11_X11
                (position,this->finish,
                 pXVar3 + (((int)position - (int)this->start) * -0x3e7063e7 >> 2) + local_7c[0]);
      pXVar1 = this->finish;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
      pXVar5 = this->start;
      if (pXVar5 != pXVar1) {
                    /* end of inlined section */
        pRVar4 = (pXVar5->field0_0x0).start;
        while( true ) {
          pXVar7 = pXVar5 + 1;
          pRVar2 = (pXVar5->field0_0x0).finish;
          (pXVar5->fSlot).field0_0x0.__vtable = (Slot__vtable *)_vt_4Slot;
          for (; pRVar4 != pRVar2; pRVar4 = pRVar4 + 1) {
          }
                    /* end of inlined section */
          pRVar4 = (pXVar5->field0_0x0).start;
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
          if ((pRVar4 != (RouteGoal *)0x0) &&
             ((int)(pXVar5->field0_0x0).end_of_storage - (int)pRVar4 >> 4 != 0)) {
            free(pRVar4);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
          }
          if (pXVar7 == pXVar1) break;
          pRVar4 = (pXVar7->field0_0x0).start;
          pXVar5 = pXVar7;
        }
      }
                    /* end of inlined section */
      pXVar1 = this->start;
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
      if ((pXVar1 != (XRoute *)0x0) &&
         (((int)this->end_of_storage - (int)pXVar1) * -0x3e7063e7 >> 2 != 0)) {
        free(pXVar1);
                    /* end of inlined section */
      }
      this->start = pXVar3;
      this->end_of_storage = pXVar3 + iVar8;
      this->finish = pXVar3 + old_size + local_7c[0];
    }
    else {
      if (n < (uint)(((int)pXVar3 - (int)position) * -0x3e7063e7 >> 2)) {
        uninitialized_copy__H2ZP6XRouteZP6XRoute_X01X01X11_X11(pXVar3 + -n,pXVar3,pXVar3);
        copy_backward__H2ZP6XRouteZP6XRoute_X01X01X11_X11
                  (position,this->finish + -local_7c[0],this->finish);
        fill__H2ZP6XRouteZ6XRoute_X01X01RCX11_v(position,position + local_7c[0],x);
      }
      else {
        uninitialized_copy__H2ZP6XRouteZP6XRoute_X01X01X11_X11(position,pXVar3,position + n);
        fill__H2ZP6XRouteZ6XRoute_X01X01RCX11_v(position,this->finish,x);
        uninitialized_fill_n__H3ZP6XRouteZUiZ6XRoute_X01X11RCX21_X01
                  (this->finish,
                   local_7c[0] - (((int)this->finish - (int)position) * -0x3e7063e7 >> 2),x);
      }
      this->finish = this->finish + local_7c[0];
    }
  }
  return;
}

void void DoContainerStream<vector<XRoute, __malloc_alloc_template<0> >, XRoute>(vector<XRoute,__malloc_alloc_template<0> > &cont, XRoute *dummy, ReconBuffer *r, SInt32 version) {
	SInt32 size;
	XRoute *i;
	int sizeDiff;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	XRoute *this;
	RoutingSlot *this;
	Slot *this;
	void *pAddress;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	RouteGoal *first;
	RouteGoal *last;
	RouteGoal *pointer;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	void *pAddress;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	XRoute *last;
	XRoute *first;
	XRoute *pointer;
	XRoute *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	RouteGoal *last;
	RouteGoal *first;
	RouteGoal *pointer;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	void *pAddress;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	vector<XRoute,__malloc_alloc_template<0> > *this;
	
  RouteGoal *pRVar1;
  int iVar2;
  RouteGoal *pRVar3;
  int iVar4;
  XRoute *pXVar5;
  XRoute *pXVar6;
  uint n;
  XRoute *pXVar7;
  XRoute *pXVar8;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  XRoute local_140;
  int size;
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
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  local_30 = (undefined4)unaff_s5;
  uStack_2c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  size = ((int)cont->finish - (int)cont->start) * -0x3e7063e7 >> 2;
                    /* end of inlined section */
  Recon32__11ReconBufferPii(r,&size,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pXVar8 = cont->finish;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  iVar2 = ((int)pXVar8 - (int)cont->start) * -0x3e7063e7 >> 2;
                    /* end of inlined section */
  iVar4 = iVar2 - size;
  n = size - iVar2;
  if (iVar4 < 0) {
                    /* end of inlined section */
    __6XRoute(&local_140);
    insert__t6vector2Z6XRouteZt23__malloc_alloc_template1i0P6XRouteUiRC6XRoute
              (cont,pXVar8,n,&local_140);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Slots.h */
    local_140.fSlot.field0_0x0.__vtable = (Slot__vtable *)_vt_4Slot;
    for (pRVar3 = local_140.field0_0x0.start; pRVar3 != local_140.field0_0x0.finish;
        pRVar3 = pRVar3 + 1) {
    }
    if (local_140.field0_0x0.start == (RouteGoal *)0x0) {
      pXVar8 = cont->start;
    }
    else if ((int)local_140.field0_0x0.end_of_storage - (int)local_140.field0_0x0.start >> 4 == 0) {
      pXVar8 = cont->start;
    }
    else {
      free(local_140.field0_0x0.start);
                    /* end of inlined section */
      pXVar8 = cont->start;
    }
  }
  else {
    if (0 < iVar4) {
                    /* end of inlined section */
      pXVar5 = pXVar8 + -iVar4;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
      if (pXVar5 != pXVar8) {
        pRVar3 = (pXVar5->field0_0x0).start;
        pXVar6 = pXVar5;
        while( true ) {
          pXVar7 = pXVar6 + 1;
          pRVar1 = (pXVar6->field0_0x0).finish;
          (pXVar6->fSlot).field0_0x0.__vtable = (Slot__vtable *)_vt_4Slot;
          for (; pRVar3 != pRVar1; pRVar3 = pRVar3 + 1) {
          }
          pRVar3 = (pXVar6->field0_0x0).start;
          if ((pRVar3 != (RouteGoal *)0x0) &&
             ((int)(pXVar6->field0_0x0).end_of_storage - (int)pRVar3 >> 4 != 0)) {
            free(pRVar3);
          }
          if (pXVar7 == pXVar8) break;
          pRVar3 = (pXVar7->field0_0x0).start;
          pXVar6 = pXVar7;
        }
      }
      cont->finish = (XRoute *)((int)cont->finish - ((int)pXVar8 - (int)pXVar5));
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    pXVar8 = cont->start;
  }
                    /* end of inlined section */
  if (pXVar8 != cont->finish) {
    do {
      pXVar5 = pXVar8 + 1;
      DoStream__6XRouteP11ReconBufferi(pXVar8,r,version);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      pXVar8 = pXVar5;
    } while (pXVar5 != cont->finish);
  }
  return;
}

ObjectRecord* ObjectRecord * uninitialized_copy<ObjectRecord *, ObjectRecord *>(ObjectRecord *first, ObjectRecord *last, ObjectRecord *result) {
	ObjectRecord *p;
	ObjectRecord &value;
	void *pAddress;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong *puVar5;
  ObjectRecord *pOVar6;
  ulong in_a3;
  
  pOVar6 = result;
  if (first != last) {
    do {
      puVar1 = (undefined *)((int)&first->fStackLevel + 3);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)first & 7;
      in_a3 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_a3 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)first - uVar3) >> uVar3 * 8;
      uVar4 = *(undefined4 *)&first->fHasIcon;
      puVar1 = (undefined *)((int)&pOVar6->fStackLevel + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar2);
      *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | in_a3 >> (7 - uVar2) * 8;
      uVar2 = (uint)pOVar6 & 7;
      *(ulong *)((int)pOVar6 - uVar2) =
           in_a3 << uVar2 * 8 |
           *(ulong *)((int)pOVar6 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      first = first + 1;
      result = pOVar6 + 1;
      *(undefined4 *)&pOVar6->fHasIcon = uVar4;
      pOVar6 = result;
    } while (first != last);
  }
  return result;
}

ObjectRecord* ObjectRecord * copy_backward<ObjectRecord *, ObjectRecord *>(ObjectRecord *first, ObjectRecord *last, ObjectRecord *result) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong *puVar5;
  ObjectRecord *pOVar6;
  ulong in_v1;
  ObjectRecord *pOVar7;
  
  pOVar6 = result;
  if (first != last) {
    do {
      result = pOVar6 + -1;
      pOVar7 = last + -1;
      puVar1 = (undefined *)((int)&last[-1].fStackLevel + 3);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)pOVar7 & 7;
      in_v1 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)pOVar7 - uVar3) >> uVar3 * 8;
      uVar4 = *(undefined4 *)&last[-1].fHasIcon;
      puVar1 = (undefined *)((int)&pOVar6[-1].fStackLevel + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar2);
      *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | in_v1 >> (7 - uVar2) * 8;
      uVar2 = (uint)result & 7;
      *(ulong *)((int)result - uVar2) =
           in_v1 << uVar2 * 8 |
           *(ulong *)((int)result - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      *(undefined4 *)&pOVar6[-1].fHasIcon = uVar4;
      last = pOVar7;
      pOVar6 = result;
    } while (first != pOVar7);
  }
  return result;
}

void void fill<ObjectRecord *, ObjectRecord>(ObjectRecord *first, ObjectRecord *last, ObjectRecord &value) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong *puVar5;
  ulong in_v0;
  
  if (first != last) {
    do {
      puVar1 = (undefined *)((int)&value->fStackLevel + 3);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)value & 7;
      in_v0 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)value - uVar3) >> uVar3 * 8;
      uVar4 = *(undefined4 *)&value->fHasIcon;
      puVar1 = (undefined *)((int)&first->fStackLevel + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar2);
      *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | in_v0 >> (7 - uVar2) * 8;
      uVar2 = (uint)first & 7;
      *(ulong *)((int)first - uVar2) =
           in_v0 << uVar2 * 8 |
           *(ulong *)((int)first - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      *(undefined4 *)&first->fHasIcon = uVar4;
      first = first + 1;
    } while (first != last);
  }
  return;
}

ObjectRecord* ObjectRecord * uninitialized_fill_n<ObjectRecord *, unsigned int, ObjectRecord>(ObjectRecord *first, unsigned int n, ObjectRecord &x) {
	ObjectRecord *p;
	ObjectRecord &value;
	void *pAddress;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong *puVar5;
  int iVar6;
  ObjectRecord *pOVar7;
  ulong in_a3;
  
  iVar6 = n - 1;
  pOVar7 = first;
  if (n != 0) {
    do {
      iVar6 = iVar6 + -1;
      puVar1 = (undefined *)((int)&x->fStackLevel + 3);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)x & 7;
      in_a3 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_a3 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)x - uVar3) >> uVar3 * 8;
      uVar4 = *(undefined4 *)&x->fHasIcon;
      puVar1 = (undefined *)((int)&pOVar7->fStackLevel + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar2);
      *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | in_a3 >> (7 - uVar2) * 8;
      uVar2 = (uint)pOVar7 & 7;
      *(ulong *)((int)pOVar7 - uVar2) =
           in_a3 << uVar2 * 8 |
           *(ulong *)((int)pOVar7 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      first = pOVar7 + 1;
      *(undefined4 *)&pOVar7->fHasIcon = uVar4;
      pOVar7 = first;
    } while (iVar6 != -1);
  }
  return first;
}

void vector<ObjectRecord, __malloc_alloc_template<0> >::insert(ObjectRecord *position, unsigned int n, ObjectRecord &x) {
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	unsigned int old_size;
	unsigned int len;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	unsigned int &b;
	unsigned int n;
	unsigned int n;
	void *result;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	ObjectRecord *first;
	ObjectRecord *pointer;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	
  ObjectRecord *pOVar1;
  uint *puVar2;
  ObjectRecord *pOVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  int iVar4;
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
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_6c[0] = n;
  if (n != 0) {
    pOVar1 = this->finish;
    if ((uint)(((int)this->end_of_storage - (int)pOVar1) * -0x55555555 >> 2) < n) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
      old_size = ((int)pOVar1 - (int)this->start) * -0x55555555 >> 2;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
      puVar2 = local_6c;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
      if (n <= old_size) {
        puVar2 = &old_size;
      }
                    /* end of inlined section */
      iVar4 = old_size + *puVar2;
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
      if (iVar4 == 0) {
        pOVar1 = (ObjectRecord *)0x0;
      }
      else {
        pOVar1 = (ObjectRecord *)malloc(iVar4 * 0xc);
        if (pOVar1 == (ObjectRecord *)0x0) {
          pOVar1 = (ObjectRecord *)oom_malloc__t23__malloc_alloc_template1i0Ui(iVar4 * 0xc);
        }
      }
                    /* end of inlined section */
      uninitialized_copy__H2ZP12ObjectRecordZP12ObjectRecord_X01X01X11_X11
                (this->start,position,pOVar1);
      uninitialized_fill_n__H3ZP12ObjectRecordZUiZ12ObjectRecord_X01X11RCX21_X01
                ((ObjectRecord *)((int)pOVar1 + ((int)position - (int)this->start)),local_6c[0],x);
      uninitialized_copy__H2ZP12ObjectRecordZP12ObjectRecord_X01X01X11_X11
                (position,this->finish,
                 pOVar1 + (((int)position - (int)this->start) * -0x55555555 >> 2) + local_6c[0]);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
      pOVar3 = this->start;
      if (pOVar3 == this->finish) {
        pOVar3 = this->start;
      }
      else {
        do {
          pOVar3 = pOVar3 + 1;
        } while (pOVar3 != this->finish);
                    /* end of inlined section */
        pOVar3 = this->start;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
      if ((pOVar3 != (ObjectRecord *)0x0) &&
         (((int)this->end_of_storage - (int)pOVar3) * -0x55555555 >> 2 != 0)) {
        free(pOVar3);
                    /* end of inlined section */
      }
      this->start = pOVar1;
      this->end_of_storage = pOVar1 + iVar4;
      this->finish = pOVar1 + old_size + local_6c[0];
    }
    else {
      if (n < (uint)(((int)pOVar1 - (int)position) * -0x55555555 >> 2)) {
        uninitialized_copy__H2ZP12ObjectRecordZP12ObjectRecord_X01X01X11_X11
                  (pOVar1 + -n,pOVar1,pOVar1);
        copy_backward__H2ZP12ObjectRecordZP12ObjectRecord_X01X01X11_X11
                  (position,this->finish + -local_6c[0],this->finish);
        fill__H2ZP12ObjectRecordZ12ObjectRecord_X01X01RCX11_v(position,position + local_6c[0],x);
      }
      else {
        uninitialized_copy__H2ZP12ObjectRecordZP12ObjectRecord_X01X01X11_X11
                  (position,pOVar1,position + n);
        fill__H2ZP12ObjectRecordZ12ObjectRecord_X01X01RCX11_v(position,this->finish,x);
        uninitialized_fill_n__H3ZP12ObjectRecordZUiZ12ObjectRecord_X01X11RCX21_X01
                  (this->finish,
                   local_6c[0] - (((int)this->finish - (int)position) * -0x55555555 >> 2),x);
      }
      this->finish = this->finish + local_6c[0];
    }
  }
  return;
}

void void DoContainerStream<vector<ObjectRecord, __malloc_alloc_template<0> >, ObjectRecord>(vector<ObjectRecord,__malloc_alloc_template<0> > &cont, ObjectRecord *dummy, ReconBuffer *r, SInt32 version) {
	SInt32 size;
	ObjectRecord *i;
	int sizeDiff;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	ObjectRecord *last;
	ObjectRecord *first;
	ObjectRecord *pointer;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	
  int iVar1;
  ObjectRecord *pOVar2;
  int iVar3;
  uint n;
  ObjectRecord *pOVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  ObjectRecord OStack_80;
  int size;
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
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  size = ((int)cont->finish - (int)cont->start) * -0x55555555 >> 2;
                    /* end of inlined section */
  Recon32__11ReconBufferPii(r,&size,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pOVar4 = cont->finish;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  iVar1 = ((int)pOVar4 - (int)cont->start) * -0x55555555 >> 2;
                    /* end of inlined section */
  iVar3 = iVar1 - size;
  n = size - iVar1;
  if (iVar3 < 0) {
                    /* end of inlined section */
    memset(&OStack_80,0,0xc);
    insert__t6vector2Z12ObjectRecordZt23__malloc_alloc_template1i0P12ObjectRecordUiRC12ObjectRecord
              (cont,pOVar4,n,&OStack_80);
    pOVar4 = cont->start;
  }
  else {
    if (0 < iVar3) {
                    /* end of inlined section */
      pOVar2 = pOVar4 + -iVar3;
      iVar1 = (int)pOVar4 - (int)pOVar2;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
      for (; pOVar2 != pOVar4; pOVar2 = pOVar2 + 1) {
      }
      cont->finish = (ObjectRecord *)((int)cont->finish - iVar1);
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    pOVar4 = cont->start;
  }
                    /* end of inlined section */
  if (pOVar4 != cont->finish) {
    do {
      pOVar2 = pOVar4 + 1;
      DoStream__12ObjectRecordP11ReconBufferi(pOVar4,r,version);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      pOVar4 = pOVar2;
    } while (pOVar2 != cont->finish);
  }
  return;
}

void void fill<MotiveInc *, MotiveInc>(MotiveInc *first, MotiveInc *last, MotiveInc &value) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  ulong in_v0;
  
  if (first != last) {
    do {
      puVar1 = (undefined *)((int)&value->incPerTick + 3);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)value & 7;
      in_v0 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)value - uVar3) >> uVar3 * 8;
      fVar4 = value->limit;
      puVar1 = (undefined *)((int)&first->incPerTick + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar2);
      *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | in_v0 >> (7 - uVar2) * 8;
      uVar2 = (uint)first & 7;
      *(ulong *)((int)first - uVar2) =
           in_v0 << uVar2 * 8 |
           *(ulong *)((int)first - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      first->limit = fVar4;
      first = first + 1;
    } while (first != last);
  }
  return;
}

MotiveInc* MotiveInc * uninitialized_fill_n<MotiveInc *, unsigned int, MotiveInc>(MotiveInc *first, unsigned int n, MotiveInc &x) {
	MotiveInc *p;
	MotiveInc &value;
	void *pAddress;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  int iVar6;
  MotiveInc *pMVar7;
  ulong in_a3;
  
  iVar6 = n - 1;
  pMVar7 = first;
  if (n != 0) {
    do {
      iVar6 = iVar6 + -1;
      puVar1 = (undefined *)((int)&x->incPerTick + 3);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)x & 7;
      in_a3 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_a3 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)x - uVar3) >> uVar3 * 8;
      fVar4 = x->limit;
      puVar1 = (undefined *)((int)&pMVar7->incPerTick + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar2);
      *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | in_a3 >> (7 - uVar2) * 8;
      uVar2 = (uint)pMVar7 & 7;
      *(ulong *)((int)pMVar7 - uVar2) =
           in_a3 << uVar2 * 8 |
           *(ulong *)((int)pMVar7 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      first = pMVar7 + 1;
      pMVar7->limit = fVar4;
      pMVar7 = first;
    } while (iVar6 != -1);
  }
  return first;
}

void vector<MotiveInc, __malloc_alloc_template<0> >::insert(MotiveInc *position, unsigned int n, MotiveInc &x) {
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	unsigned int old_size;
	unsigned int len;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	unsigned int &b;
	unsigned int n;
	unsigned int n;
	void *result;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	MotiveInc *first;
	MotiveInc *pointer;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	
  MotiveInc *pMVar1;
  uint *puVar2;
  MotiveInc *pMVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  int iVar4;
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
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_6c[0] = n;
  if (n != 0) {
    pMVar1 = this->finish;
    if ((uint)(((int)this->end_of_storage - (int)pMVar1) * -0x55555555 >> 2) < n) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
      old_size = ((int)pMVar1 - (int)this->start) * -0x55555555 >> 2;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
      puVar2 = local_6c;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
      if (n <= old_size) {
        puVar2 = &old_size;
      }
                    /* end of inlined section */
      iVar4 = old_size + *puVar2;
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
      if (iVar4 == 0) {
        pMVar1 = (MotiveInc *)0x0;
      }
      else {
        pMVar1 = (MotiveInc *)malloc(iVar4 * 0xc);
        if (pMVar1 == (MotiveInc *)0x0) {
          pMVar1 = (MotiveInc *)oom_malloc__t23__malloc_alloc_template1i0Ui(iVar4 * 0xc);
        }
      }
                    /* end of inlined section */
      uninitialized_copy__H2ZP9MotiveIncZP9MotiveInc_X01X01X11_X11(this->start,position,pMVar1);
      uninitialized_fill_n__H3ZP9MotiveIncZUiZ9MotiveInc_X01X11RCX21_X01
                ((MotiveInc *)((int)pMVar1 + ((int)position - (int)this->start)),local_6c[0],x);
      uninitialized_copy__H2ZP9MotiveIncZP9MotiveInc_X01X01X11_X11
                (position,this->finish,
                 pMVar1 + (((int)position - (int)this->start) * -0x55555555 >> 2) + local_6c[0]);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
      pMVar3 = this->start;
      if (pMVar3 == this->finish) {
        pMVar3 = this->start;
      }
      else {
        do {
          pMVar3 = pMVar3 + 1;
        } while (pMVar3 != this->finish);
                    /* end of inlined section */
        pMVar3 = this->start;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
      if ((pMVar3 != (MotiveInc *)0x0) &&
         (((int)this->end_of_storage - (int)pMVar3) * -0x55555555 >> 2 != 0)) {
        free(pMVar3);
                    /* end of inlined section */
      }
      this->start = pMVar1;
      this->end_of_storage = pMVar1 + iVar4;
      this->finish = pMVar1 + old_size + local_6c[0];
    }
    else {
      if (n < (uint)(((int)pMVar1 - (int)position) * -0x55555555 >> 2)) {
        uninitialized_copy__H2ZP9MotiveIncZP9MotiveInc_X01X01X11_X11(pMVar1 + -n,pMVar1,pMVar1);
        copy_backward__H2ZP9MotiveIncZP9MotiveInc_X01X01X11_X11
                  (position,this->finish + -local_6c[0],this->finish);
        fill__H2ZP9MotiveIncZ9MotiveInc_X01X01RCX11_v(position,position + local_6c[0],x);
      }
      else {
        uninitialized_copy__H2ZP9MotiveIncZP9MotiveInc_X01X01X11_X11(position,pMVar1,position + n);
        fill__H2ZP9MotiveIncZ9MotiveInc_X01X01RCX11_v(position,this->finish,x);
        uninitialized_fill_n__H3ZP9MotiveIncZUiZ9MotiveInc_X01X11RCX21_X01
                  (this->finish,
                   local_6c[0] - (((int)this->finish - (int)position) * -0x55555555 >> 2),x);
      }
      this->finish = this->finish + local_6c[0];
    }
  }
  return;
}

void void DoContainerStream<vector<MotiveInc, __malloc_alloc_template<0> >, MotiveInc>(vector<MotiveInc,__malloc_alloc_template<0> > &cont, MotiveInc *dummy, ReconBuffer *r, SInt32 version) {
	SInt32 size;
	MotiveInc *i;
	int sizeDiff;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	MotiveInc *last;
	MotiveInc *first;
	MotiveInc *pointer;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	vector<MotiveInc,__malloc_alloc_template<0> > *this;
	
  int iVar1;
  MotiveInc *pMVar2;
  int iVar3;
  uint n;
  MotiveInc *pMVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  MotiveInc MStack_80;
  int size;
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
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  size = ((int)cont->finish - (int)cont->start) * -0x55555555 >> 2;
                    /* end of inlined section */
  Recon32__11ReconBufferPii(r,&size,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pMVar4 = cont->finish;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  iVar1 = ((int)pMVar4 - (int)cont->start) * -0x55555555 >> 2;
                    /* end of inlined section */
  iVar3 = iVar1 - size;
  n = size - iVar1;
  if (iVar3 < 0) {
                    /* end of inlined section */
    memset(&MStack_80,0,0xc);
    insert__t6vector2Z9MotiveIncZt23__malloc_alloc_template1i0P9MotiveIncUiRC9MotiveInc
              (cont,pMVar4,n,&MStack_80);
    pMVar4 = cont->start;
  }
  else {
    if (0 < iVar3) {
                    /* end of inlined section */
      pMVar2 = pMVar4 + -iVar3;
      iVar1 = (int)pMVar4 - (int)pMVar2;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
      for (; pMVar2 != pMVar4; pMVar2 = pMVar2 + 1) {
      }
      cont->finish = (MotiveInc *)((int)cont->finish - iVar1);
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    pMVar4 = cont->start;
  }
                    /* end of inlined section */
  if (pMVar4 != cont->finish) {
    do {
      pMVar2 = pMVar4 + 1;
      DoStream__9MotiveIncP11ReconBufferi(pMVar4,r,version);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      pMVar4 = pMVar2;
    } while (pMVar2 != cont->finish);
  }
  return;
}

ScoredInteraction* ScoredInteraction * copy_backward<ScoredInteraction *, ScoredInteraction *>(ScoredInteraction *first, ScoredInteraction *last, ScoredInteraction *result) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  int iVar5;
  ulong in_v1;
  ScoredInteraction *pSVar7;
  ulong uVar8;
  ulong uVar6;
  
  uVar6 = (ulong)(int)result;
  uVar8 = uVar6;
  if (first != last) {
    do {
      iVar5 = (int)uVar6;
      result = (ScoredInteraction *)(iVar5 - 0x10);
      uVar6 = (ulong)(int)result;
      pSVar7 = last + -1;
      puVar1 = (undefined *)((int)&last[-1].fActionIndex + 3);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)pSVar7 & 7;
      in_v1 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)pSVar7 - uVar3) >> uVar3 * 8;
      uVar2 = (uint)&last[-1].field_0xf & 7;
      uVar3 = (uint)&last[-1].fAttenScore & 7;
      uVar8 = (*(long *)(&last[-1].field_0xf + -uVar2) << (7 - uVar2) * 8 |
              uVar8 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)&last[-1].fAttenScore - uVar3) >> uVar3 * 8;
      uVar2 = iVar5 - 9U & 7;
      puVar4 = (ulong *)((iVar5 - 9U) - uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | in_v1 >> (7 - uVar2) * 8;
      uVar2 = (uint)result & 7;
      *(ulong *)((int)result - uVar2) =
           in_v1 << uVar2 * 8 |
           *(ulong *)((int)result - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      uVar2 = iVar5 - 1U & 7;
      puVar4 = (ulong *)((iVar5 - 1U) - uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar8 >> (7 - uVar2) * 8;
      uVar2 = iVar5 - 8U & 7;
      puVar4 = (ulong *)((iVar5 - 8U) - uVar2);
      *puVar4 = uVar8 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      last = pSVar7;
    } while (first != pSVar7);
  }
  return result;
}

void vector<ScoredInteraction, __malloc_alloc_template<0> >::insert_aux(ScoredInteraction *position, ScoredInteraction &x) {
	ScoredInteraction x_copy;
	vector<ScoredInteraction,__malloc_alloc_template<0> > *this;
	vector<ScoredInteraction,__malloc_alloc_template<0> > *this;
	vector<ScoredInteraction,__malloc_alloc_template<0> > *this;
	void *result;
	vector<ScoredInteraction,__malloc_alloc_template<0> > *this;
	vector<ScoredInteraction,__malloc_alloc_template<0> > *this;
	ScoredInteraction *p;
	ScoredInteraction &value;
	void *pAddress;
	vector<ScoredInteraction,__malloc_alloc_template<0> > *this;
	vector<ScoredInteraction,__malloc_alloc_template<0> > *this;
	vector<ScoredInteraction,__malloc_alloc_template<0> > *this;
	vector<ScoredInteraction,__malloc_alloc_template<0> > *this;
	ScoredInteraction *first;
	ScoredInteraction *pointer;
	vector<ScoredInteraction,__malloc_alloc_template<0> > *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  uint uVar5;
  void *pvVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  ScoredInteraction *pSVar10;
  ulong uVar11;
  ScoredInteraction *result;
  ulong in_a3;
  int iVar12;
  ScoredInteraction x_copy;
  
  uVar7 = (ulong)(int)position;
  pSVar10 = this->finish;
  if ((long)(int)pSVar10 == (long)(int)this->end_of_storage) {
    iVar12 = (int)pSVar10 - (int)this->start >> 4;
    iVar9 = 1;
    if (iVar12 != 0) {
      iVar9 = iVar12 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    uVar5 = iVar9 << 4;
    if (iVar9 == 0) {
      uVar11 = 0;
      uVar5 = 0;
    }
    else {
      pvVar6 = malloc(uVar5);
      uVar11 = (ulong)(int)pvVar6;
      if (uVar11 == 0) {
        pvVar6 = oom_malloc__t23__malloc_alloc_template1i0Ui(uVar5);
        uVar11 = (ulong)(int)pvVar6;
      }
    }
                    /* end of inlined section */
    result = (ScoredInteraction *)uVar11;
                    /* end of inlined section */
    uninitialized_copy__H2ZP17ScoredInteractionZP17ScoredInteraction_X01X01X11_X11
              (this->start,position,result);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    uVar8 = (int)result + ((int)position - (int)this->start);
    puVar1 = (undefined *)((int)&x->fActionIndex + 3);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)x & 7;
    uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
            uVar7 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)x - uVar3) >> uVar3 * 8;
    uVar2 = (uint)&x->field_0xf & 7;
    uVar3 = (uint)&x->fAttenScore & 7;
    uVar11 = (*(long *)(&x->field_0xf + -uVar2) << (7 - uVar2) * 8 |
             uVar11 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)&x->fAttenScore - uVar3) >> uVar3 * 8;
    uVar2 = uVar8 + 7 & 7;
    puVar4 = (ulong *)((uVar8 + 7) - uVar2);
    *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
    uVar2 = uVar8 & 7;
    *(ulong *)(uVar8 - uVar2) =
         uVar7 << uVar2 * 8 | *(ulong *)(uVar8 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    uVar2 = uVar8 + 0xf & 7;
    puVar4 = (ulong *)((uVar8 + 0xf) - uVar2);
    *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar11 >> (7 - uVar2) * 8;
    uVar2 = uVar8 + 8 & 7;
    puVar4 = (ulong *)((uVar8 + 8) - uVar2);
    *puVar4 = uVar11 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
                    /* end of inlined section */
    uninitialized_copy__H2ZP17ScoredInteractionZP17ScoredInteraction_X01X01X11_X11
              (position,this->finish,
               (ScoredInteraction *)((int)result + (int)position + (0x10 - (int)this->start)));
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    pSVar10 = this->start;
    if (pSVar10 == this->finish) {
      pSVar10 = this->start;
    }
    else {
      do {
        pSVar10 = pSVar10 + 1;
      } while (pSVar10 != this->finish);
                    /* end of inlined section */
      pSVar10 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((pSVar10 != (ScoredInteraction *)0x0) &&
       ((int)this->end_of_storage - (int)pSVar10 >> 4 != 0)) {
      free(pSVar10);
                    /* end of inlined section */
    }
    pSVar10 = result + iVar12;
    this->start = result;
    this->end_of_storage = (ScoredInteraction *)((int)&result->fStackObjectID + uVar5);
  }
  else {
    puVar1 = (undefined *)((int)&pSVar10[-1].fActionIndex + 3);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    uVar5 = (uint)puVar1 & 7;
    uVar2 = (uint)(pSVar10 + -1) & 7;
    uVar7 = (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
            (long)(int)this->end_of_storage & 0xffffffffffffffffU >> (uVar5 + 1) * 8) &
            -1L << (8 - uVar2) * 8 | *(ulong *)((int)(pSVar10 + -1) - uVar2) >> uVar2 * 8;
    uVar5 = (uint)&pSVar10[-1].field_0xf & 7;
    uVar2 = (uint)&pSVar10[-1].fAttenScore & 7;
    uVar11 = (*(long *)(&pSVar10[-1].field_0xf + -uVar5) << (7 - uVar5) * 8 |
             (long)(int)this & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar2) * 8 |
             *(ulong *)((int)&pSVar10[-1].fAttenScore - uVar2) >> uVar2 * 8;
    puVar1 = (undefined *)((int)&pSVar10->fActionIndex + 3);
    uVar5 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 | uVar7 >> (7 - uVar5) * 8;
    uVar5 = (uint)pSVar10 & 7;
    *(ulong *)((int)pSVar10 - uVar5) =
         uVar7 << uVar5 * 8 |
         *(ulong *)((int)pSVar10 - uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    uVar5 = (uint)&pSVar10->field_0xf & 7;
    puVar4 = (ulong *)(&pSVar10->field_0xf + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 | uVar11 >> (7 - uVar5) * 8;
    uVar5 = (uint)&pSVar10->fAttenScore & 7;
    puVar4 = (ulong *)((int)&pSVar10->fAttenScore - uVar5);
    *puVar4 = uVar11 << uVar5 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar1 = (undefined *)((int)&x->fActionIndex + 3);
                    /* end of inlined section */
    uVar5 = (uint)puVar1 & 7;
    uVar2 = (uint)x & 7;
    x_copy._0_8_ = (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
                   in_a3 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                   *(ulong *)((int)x - uVar2) >> uVar2 * 8;
    uVar5 = (uint)&x->field_0xf & 7;
    uVar2 = (uint)&x->fAttenScore & 7;
    x_copy._8_8_ = (*(long *)(&x->field_0xf + -uVar5) << (7 - uVar5) * 8 |
                   uVar7 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar2) * 8 |
                   *(ulong *)((int)&x->fAttenScore - uVar2) >> uVar2 * 8;
    puVar1 = (undefined *)((int)&x_copy.fActionIndex + 3);
    uVar5 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 | x_copy._0_8_ >> (7 - uVar5) * 8;
    uVar5 = (uint)&x_copy.field_0xf & 7;
    puVar4 = (ulong *)(&x_copy.field_0xf + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 | x_copy._8_8_ >> (7 - uVar5) * 8;
    copy_backward__H2ZP17ScoredInteractionZP17ScoredInteraction_X01X01X11_X11
              (position,this->finish + -1,this->finish);
    puVar1 = (undefined *)((int)&position->fActionIndex + 3);
    uVar5 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 | x_copy._0_8_ >> (7 - uVar5) * 8;
    uVar5 = (uint)position & 7;
    *(ulong *)((int)position - uVar5) =
         x_copy._0_8_ << uVar5 * 8 |
         *(ulong *)((int)position - uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    uVar5 = (uint)&position->field_0xf & 7;
    puVar4 = (ulong *)(&position->field_0xf + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 | x_copy._8_8_ >> (7 - uVar5) * 8;
    uVar5 = (uint)&position->fAttenScore & 7;
    puVar4 = (ulong *)((int)&position->fAttenScore - uVar5);
    *puVar4 = x_copy._8_8_ << uVar5 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    pSVar10 = this->finish;
  }
  this->finish = pSVar10 + 1;
  return;
}

void vector<ObjectRecord, __malloc_alloc_template<0> >::insert_aux(ObjectRecord *position, ObjectRecord &x) {
	ObjectRecord x_copy;
	unsigned int old_size;
	unsigned int len;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	void *result;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	ObjectRecord *p;
	ObjectRecord &value;
	void *pAddress;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	ObjectRecord *first;
	ObjectRecord *pointer;
	vector<ObjectRecord,__malloc_alloc_template<0> > *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong *puVar5;
  ObjectRecord *pOVar6;
  ulong uVar7;
  uint uVar8;
  ObjectRecord *pOVar9;
  ulong in_a3;
  int iVar10;
  int iVar11;
  ObjectRecord x_copy;
  
  uVar7 = (ulong)(int)position;
  pOVar6 = this->finish;
  if ((long)(int)pOVar6 == (long)(int)this->end_of_storage) {
    iVar10 = ((int)pOVar6 - (int)this->start) * -0x55555555 >> 2;
    iVar11 = 1;
    if (iVar10 != 0) {
      iVar11 = iVar10 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if (iVar11 == 0) {
      pOVar6 = (ObjectRecord *)0x0;
    }
    else {
      pOVar6 = (ObjectRecord *)malloc(iVar11 * 0xc);
      if (pOVar6 == (ObjectRecord *)0x0) {
        pOVar6 = (ObjectRecord *)oom_malloc__t23__malloc_alloc_template1i0Ui(iVar11 * 0xc);
      }
    }
                    /* end of inlined section */
    uninitialized_copy__H2ZP12ObjectRecordZP12ObjectRecord_X01X01X11_X11
              (this->start,position,pOVar6);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    uVar8 = (int)pOVar6 + ((int)position - (int)this->start);
    puVar1 = (undefined *)((int)&x->fStackLevel + 3);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)x & 7;
    uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
            uVar7 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)x - uVar3) >> uVar3 * 8;
    uVar4 = *(undefined4 *)&x->fHasIcon;
    uVar2 = uVar8 + 7 & 7;
    puVar5 = (ulong *)((uVar8 + 7) - uVar2);
    *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
    uVar2 = uVar8 & 7;
    *(ulong *)(uVar8 - uVar2) =
         uVar7 << uVar2 * 8 | *(ulong *)(uVar8 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    *(undefined4 *)(uVar8 + 8) = uVar4;
                    /* end of inlined section */
    uninitialized_copy__H2ZP12ObjectRecordZP12ObjectRecord_X01X01X11_X11
              (position,this->finish,
               (ObjectRecord *)((int)pOVar6 + (int)position + (0xc - (int)this->start)));
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    pOVar9 = this->start;
    if (pOVar9 == this->finish) {
      pOVar9 = this->start;
    }
    else {
      do {
        pOVar9 = pOVar9 + 1;
      } while (pOVar9 != this->finish);
                    /* end of inlined section */
      pOVar9 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((pOVar9 != (ObjectRecord *)0x0) &&
       (((int)this->end_of_storage - (int)pOVar9) * -0x55555555 >> 2 != 0)) {
      free(pOVar9);
                    /* end of inlined section */
    }
    this->start = pOVar6;
    this->finish = pOVar6 + iVar10 + 1;
    this->end_of_storage = pOVar6 + iVar11;
  }
  else {
    puVar1 = (undefined *)((int)&pOVar6[-1].fStackLevel + 3);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)(pOVar6 + -1) & 7;
    uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
            (long)(int)this->end_of_storage & 0xffffffffffffffffU >> (uVar2 + 1) * 8) &
            -1L << (8 - uVar3) * 8 | *(ulong *)((int)(pOVar6 + -1) - uVar3) >> uVar3 * 8;
    uVar4 = *(undefined4 *)&pOVar6[-1].fHasIcon;
    puVar1 = (undefined *)((int)&pOVar6->fStackLevel + 3);
    uVar2 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar2);
    *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
    uVar2 = (uint)pOVar6 & 7;
    *(ulong *)((int)pOVar6 - uVar2) =
         uVar7 << uVar2 * 8 |
         *(ulong *)((int)pOVar6 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    *(undefined4 *)&pOVar6->fHasIcon = uVar4;
    puVar1 = (undefined *)((int)&x->fStackLevel + 3);
                    /* end of inlined section */
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)x & 7;
    x_copy._0_8_ = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                   in_a3 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                   *(ulong *)((int)x - uVar3) >> uVar3 * 8;
    x_copy._8_4_ = *(undefined4 *)&x->fHasIcon;
    puVar1 = (undefined *)((int)&x_copy.fStackLevel + 3);
    uVar2 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar2);
    *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | x_copy._0_8_ >> (7 - uVar2) * 8;
    copy_backward__H2ZP12ObjectRecordZP12ObjectRecord_X01X01X11_X11
              (position,this->finish + -1,this->finish);
    puVar1 = (undefined *)((int)&position->fStackLevel + 3);
    uVar2 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar2);
    *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | x_copy._0_8_ >> (7 - uVar2) * 8;
    uVar2 = (uint)position & 7;
    *(ulong *)((int)position - uVar2) =
         x_copy._0_8_ << uVar2 * 8 |
         *(ulong *)((int)position - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    *(undefined4 *)&position->fHasIcon = x_copy._8_4_;
    this->finish = this->finish + 1;
  }
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
	MotiveCurve *array;
	MotiveCurve *this;
	MotiveCurve *array;
	MotiveCurve *this;
	
  PiecewiseFn *pPVar1;
  int iVar2;
  
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      pPVar1 = (PiecewiseFn *)0x3d3e1c;
      do {
        pPVar1 = (PiecewiseFn *)((int)(pPVar1 + 0xfffffffe) + 0xc);
        ___11PiecewiseFn(pPVar1,0);
      } while ((MotiveCurve *)pPVar1 != sChildHappyWeightCurves.fCurveArray);
      pPVar1 = (PiecewiseFn *)0x3d3d84;
      do {
        pPVar1 = (PiecewiseFn *)((int)(pPVar1 + 0xfffffffe) + 0xc);
        ___11PiecewiseFn(pPVar1,0);
      } while ((MotiveCurve *)pPVar1 != sAdultHappyWeightCurves.fCurveArray);
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/MotiveCurve.h */
      iVar2 = 6;
      pPVar1 = (PiecewiseFn *)sAdultHappyWeightCurves.fCurveArray;
      sAdultHappyWeightCurves.field0_0x0.fNumCurves = 7;
      sAdultHappyWeightCurves.field0_0x0.fCurves = sAdultHappyWeightCurves.fCurveArray;
      do {
        iVar2 = iVar2 + -1;
        __11PiecewiseFn(pPVar1);
        pPVar1[1].fPoints = (PiecewisePt *)0xffffffff;
        pPVar1 = (PiecewiseFn *)&pPVar1[1].fReciprocals;
      } while (iVar2 != -1);
      pPVar1 = (PiecewiseFn *)sChildHappyWeightCurves.fCurveArray;
      sChildHappyWeightCurves.field0_0x0.fNumCurves = 7;
      sChildHappyWeightCurves.field0_0x0.fCurves = sChildHappyWeightCurves.fCurveArray;
      iVar2 = 6;
      do {
        iVar2 = iVar2 + -1;
        __11PiecewiseFn(pPVar1);
        pPVar1[1].fPoints = (PiecewisePt *)0xffffffff;
        pPVar1 = (PiecewiseFn *)&pPVar1[1].fReciprocals;
      } while (iVar2 != -1);
      __21GlobalConstantsClients(&sTheAutonomyClient.field0_0x0,2);
      sTheAutonomyClient.field0_0x0.field0_0x0.__vtable =
           (ConstantsClient__vtable *)_vt_23AutonomyConstantsClient;
    }
  }
  return;
}

cXPerson* cXPerson::cXPerson(int __in_chrg) {
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
  this->_vb966->_vb899->__vtable = (TreeSim__vtable *)_vt_8cXPerson_7TreeSim;
  this->_vb966->__vtable = (cXObject__21_1030__vtable *)_vt_8cXPerson_8cXObject;
  if (__in_chrg == 0) {
    p_Var8 = _vt_8cXPerson_7TreeSim;
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
    } while (p_Var5 + 4 != _vt_8cXPerson_7TreeSim + 0x10);
    pcVar1 = this->_vb966;
    _Var9 = p_Var5[5];
    *(__vtbl_ptr_type *)&pTVar4->GetCurElem = _vt_8cXPerson_7TreeSim[16];
    *(__vtbl_ptr_type *)&pTVar4->GetNthElem = _Var9;
    p_Var8 = _vt_8cXPerson_8cXObject;
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
    } while (p_Var8 != _vt_8cXPerson_7TreeSim);
    this->_vb966->__vtable = local_4c0;
  }
  this->__vtable = (cXPerson__123_1079__vtable *)_vt_8cXPerson;
  return this;
}

void cXPerson::setPersonImpl(cXPersonImpl *obj) {
	cXObject *this;
	TreeSim *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
  this->_vb966->_vb899->m_pPerson = (cXPersonImpl__142_963 *)obj;
  return;
}

cXPersonImpl* cXPerson::CAST_IMPL() {
  cXPersonImpl__123_903 *pcVar1;
  
                    /* end of inlined section */
  if (this == (cXPerson__123_1079 *)0x0) {
    pcVar1 = (cXPersonImpl__123_903 *)0x0;
  }
  else {
    pcVar1 = (cXPersonImpl__123_903 *)
             (*(code *)this->__vtable[1].SetMotive)
                       ((int)&this->_vb966 + (int)*(short *)&this->__vtable[1].GetOldMotiveRef);
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

void RoutingSlot::~RoutingSlot(int __in_chrg) {
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

XRoute* XRoute::XRoute(XRoute &_ctor_arg) {
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > &x;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	void *result;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	vector<RouteGoal,__malloc_alloc_template<0> > *this;
	RoutingSlot *this;
	RoutingSlot &_ctor_arg;
	Slot &_ctor_arg;
	Slot *this;
	
  undefined *puVar1;
  uint uVar2;
  cXPortal__109_1169 *pcVar3;
  ulong *puVar4;
  int iVar5;
  RouteGoal *pRVar6;
  int *piVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
  iVar5 = (int)(_ctor_arg->field0_0x0).finish - (int)(_ctor_arg->field0_0x0).start >> 4;
  if (iVar5 == 0) {
    pRVar6 = (RouteGoal *)0x0;
    (this->field0_0x0).start = (RouteGoal *)0x0;
  }
  else {
    uVar11 = iVar5 << 4;
    pRVar6 = (RouteGoal *)malloc(uVar11);
    if (pRVar6 == (RouteGoal *)0x0) {
      pRVar6 = (RouteGoal *)oom_malloc__t23__malloc_alloc_template1i0Ui(uVar11);
      (this->field0_0x0).start = pRVar6;
    }
    else {
      (this->field0_0x0).start = pRVar6;
    }
  }
  pRVar6 = uninitialized_copy__H2ZPC9RouteGoalZP9RouteGoal_X01X01X11_X11
                     ((_ctor_arg->field0_0x0).start,(_ctor_arg->field0_0x0).finish,pRVar6);
  (this->field0_0x0).end_of_storage = pRVar6;
  (this->field0_0x0).finish = pRVar6;
  (this->fSlot).field0_0x0.__vtable = (Slot__vtable *)_vt_4Slot;
  piVar9 = (this->fSlot).multipliers;
  iVar10 = 2;
  piVar7 = (_ctor_arg->fSlot).multipliers;
  (this->fSlot).field0_0x0.xoffset = (_ctor_arg->fSlot).field0_0x0.xoffset;
  (this->fSlot).field0_0x0.yoffset = (_ctor_arg->fSlot).field0_0x0.yoffset;
  (this->fSlot).field0_0x0.altOffset = (_ctor_arg->fSlot).field0_0x0.altOffset;
  iVar5 = (_ctor_arg->fSlot).field0_0x0.nameIndex;
  (this->fSlot).field0_0x0.__vtable = (Slot__vtable *)_vt_11RoutingSlot;
  (this->fSlot).field0_0x0.nameIndex = iVar5;
  do {
    iVar5 = *piVar7;
    iVar10 = iVar10 + -1;
    piVar7 = piVar7 + 1;
    *piVar9 = iVar5;
    piVar9 = piVar9 + 1;
  } while (iVar10 != -1);
  (this->fSlot).rsFlags = (_ctor_arg->fSlot).rsFlags;
  (this->fSlot).snapTargetSlot = (_ctor_arg->fSlot).snapTargetSlot;
  (this->fSlot).minProximity = (_ctor_arg->fSlot).minProximity;
  (this->fSlot).maxProximity = (_ctor_arg->fSlot).maxProximity;
  (this->fSlot).optimalProximity = (_ctor_arg->fSlot).optimalProximity;
  (this->fSlot).gradient = (_ctor_arg->fSlot).gradient;
  (this->fSlot).facing = (_ctor_arg->fSlot).facing;
  (this->fSlot).resolution = (_ctor_arg->fSlot).resolution;
  this->fDest = _ctor_arg->fDest;
  this->fStart = _ctor_arg->fStart;
  this->fCurGoal = _ctor_arg->fCurGoal;
  this->fMaxScore = _ctor_arg->fMaxScore;
  iVar5 = _ctor_arg->fTrapCount;
  this->fTrapCount = iVar5;
  this->fWaitStartTicks = _ctor_arg->fWaitStartTicks;
  puVar1 = (undefined *)((int)&(_ctor_arg->fLastLocation).x.whole + 3);
  uVar11 = (uint)puVar1 & 7;
  uVar2 = (uint)&_ctor_arg->fLastLocation & 7;
  uVar8 = (*(long *)(puVar1 + -uVar11) << (7 - uVar11) * 8 |
          (long)iVar5 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar2) * 8 |
          *(ulong *)((int)&_ctor_arg->fLastLocation - uVar2) >> uVar2 * 8;
  puVar1 = (undefined *)((int)&(this->fLastLocation).x.whole + 3);
  uVar11 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar11);
  *puVar4 = *puVar4 & -1L << (uVar11 + 1) * 8 | uVar8 >> (7 - uVar11) * 8;
  uVar11 = (uint)&this->fLastLocation & 7;
  puVar4 = (ulong *)((int)&this->fLastLocation - uVar11);
  *puVar4 = uVar8 << uVar11 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
  pcVar3 = _ctor_arg->fCurPortal;
  this->fCurPortal = pcVar3;
  puVar1 = (undefined *)((int)&(_ctor_arg->fStartPt).x.whole + 3);
  uVar11 = (uint)puVar1 & 7;
  uVar2 = (uint)&_ctor_arg->fStartPt & 7;
  uVar8 = (*(long *)(puVar1 + -uVar11) << (7 - uVar11) * 8 |
          (long)(int)pcVar3 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar2) * 8 |
          *(ulong *)((int)&_ctor_arg->fStartPt - uVar2) >> uVar2 * 8;
  puVar1 = (undefined *)((int)&(this->fStartPt).x.whole + 3);
  uVar11 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar11);
  *puVar4 = *puVar4 & -1L << (uVar11 + 1) * 8 | uVar8 >> (7 - uVar11) * 8;
  uVar11 = (uint)&this->fStartPt & 7;
  puVar4 = (ulong *)((int)&this->fStartPt - uVar11);
  *puVar4 = uVar8 << uVar11 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
  this->fExitDirFlag = _ctor_arg->fExitDirFlag;
  *(undefined4 *)&this->fValid = *(undefined4 *)&_ctor_arg->fValid;
  this->fIgnore = _ctor_arg->fIgnore;
  this->fMoving = _ctor_arg->fMoving;
  *(undefined4 *)&this->fMoveSuccess = *(undefined4 *)&_ctor_arg->fMoveSuccess;
  this->fResult = _ctor_arg->fResult;
  this->fBlockingObjectID = _ctor_arg->fBlockingObjectID;
  *(undefined4 *)&this->fIgnoreAllPeople = *(undefined4 *)&_ctor_arg->fIgnoreAllPeople;
  this->fMoveInteractionID = _ctor_arg->fMoveInteractionID;
  this->fFootprintMask = _ctor_arg->fFootprintMask;
  this->fMaxGoalCount = _ctor_arg->fMaxGoalCount;
  return this;
}

cXPersonImpl* cXPersonImpl::GetPersonImplementation() {
  return this;
}

Int cXPersonImpl::CountActions() {
	Queue<Interaction,8> *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/Queue.h */
                    /* end of inlined section */
  return (this->fTreeQueue).fLast - (this->fTreeQueue).fFirst;
}

Interaction& cXPersonImpl::GetCurrentAction() {
  return &this->fCurrentAction;
}

Interaction& cXPersonImpl::GetLastAction() {
  return &this->fLastAction;
}

StdPrm cXPersonImpl::GetPersonData(Int which) {
  return this->fPersonData[which];
}

void cXPersonImpl::SetPersonData(Int which, StdPrm val) {
  this->fPersonData[which] = val;
  return;
}

StdPrm* cXPersonImpl::GetPersonDataArray() {
  return this->fPersonData;
}

StdPrm cXPersonImpl::GetIdleState() {
  return this->fPersonData[0];
}

bool cXPersonImpl::IsCarrying() {
  cXObject__21_1030 *pcVar1;
  cXObject__21_1030__vtable *pcVar2;
  int iVar3;
  
  pcVar1 = this->_vb901->_vb966;
  pcVar2 = pcVar1->__vtable;
  iVar3 = (*(code *)pcVar2[1].GetMiscFlag)
                    ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2[1].SetMiscFlag,0);
  return *(short *)(iVar3 + 0x14) != 0;
}

TileList* cXPersonImpl::GetDestList() {
  return &this->fDestList;
}

SAnimator* cXPersonImpl::GetSAnimator() {
  return this->fAnimator;
}

RoomID cXPersonImpl::GetCurrentRoom() {
  return this->fCurrentRoom;
}

SInt16 cXPersonImpl::GetNeighborID() {
  cXPerson__123_1079__vtable *pcVar1;
  ushort uVar2;
  
  pcVar1 = this->_vb1079->__vtable;
  uVar2 = (*(code *)pcVar1->GetRecordDuration)
                    ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar1->GetRecording,0x1f);
  return uVar2;
}

void cXPersonImpl::SetNeighborID(SInt16 newID) {
  cXPerson__123_1079__vtable *pcVar1;
  
  pcVar1 = this->_vb1079->__vtable;
  (*(code *)pcVar1->GetRecordMaxDuration)
            ((int)&this->_vb1079->_vb966 + (int)*(short *)&pcVar1->SetRecordDuration,0x1f,newID);
  return;
}

bool cXPersonImpl::IsRouting() {
  XRoute *pXVar1;
  
  pXVar1 = GetCurrentRoute__12cXPersonImpl(this);
  return pXVar1 != (XRoute *)0x0;
}

bool cXPersonImpl::IsVisitor() {
  return this->fPersonData[0x20] != 0;
}

CustomCharacter* cXPersonImpl::GetCustomCharacter() {
	ObjSelector *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
  return this->_vb901->fObjSel->fCustomCharacter;
}

NPC* cXPersonImpl::GetNPCharacter() {
	ObjSelector *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
  return this->_vb901->fObjSel->fNPCharacter;
}

bool cXPersonImpl::IsGhost() {
  return (bool)((byte)this->fPersonData[0x44] & 1);
}

bool cXPersonImpl::IsInvisible() {
  return (bool)((byte)this->fPersonData[0x4a] & 1);
}

bool cXPersonImpl::IsGreen() {
  return (this->fPersonData[0x4a] & 2) != 0;
}

StdPrm cXPersonImpl::GetVisibility() {
  return this->fPersonData[0x4a];
}

Motives* cXPersonImpl::GetMotives() {
  return &this->fMotives;
}

MotiveEffects* cXPersonImpl::GetMotiveEffects() {
  return this->fMotiveEffects;
}

bool cXPersonImpl::GetRecording() {
  return SUB41(*(undefined4 *)&this->mRecording,0);
}

int cXPersonImpl::GetRecordDuration() {
  return this->mRecordDuration;
}

void cXPersonImpl::SetRecordDuration(int val) {
  this->mRecordDuration = val;
  return;
}

int cXPersonImpl::GetRecordMaxDuration() {
  return this->mRecordMaxDuration;
}

void cXPersonImpl::SetRecordMaxDuration(int val) {
  this->mRecordMaxDuration = val;
  return;
}

int cXPersonImpl::GetRecordStartTicks() {
  return this->mRecordStartTicks;
}

int cXPersonImpl::GetRecordCurTicks() {
  return this->mRecordCurTicks;
}

int cXPersonImpl::GetRecordTicksElapsed() {
  return this->mRecordTicksElapsed;
}

Skill* cXPersonImpl::GetRecordSkill() {
  return this->mRecordSkill;
}

cXObject* cXPersonImpl::GetControllingObject() {
	unsigned int n;
	
  ObjectRecord *pOVar1;
  cXObjectImpl__123_901 *pcVar2;
  int iVar3;
  cXObject__21_1030 *pcVar4;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pOVar1 = (this->fObjectRecords).start;
  iVar3 = ((int)(this->fObjectRecords).finish - (int)pOVar1) * -0x55555555 >> 2;
                    /* end of inlined section */
  if (0 < iVar3) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    pcVar2 = pOVar1[iVar3 + -1].fObject;
    pcVar4 = (cXObject__21_1030 *)0x0;
    if (pcVar2 != (cXObjectImpl__123_901 *)0x0) {
      pcVar4 = pcVar2->_vb966;
    }
    return pcVar4;
  }
  return this->_vb1079->_vb966;
}

AutonomyConstantsClient* AutonomyConstantsClient::AutonomyConstantsClient() {
  __21GlobalConstantsClients(&this->field0_0x0,2);
  (this->field0_0x0).field0_0x0.__vtable = (ConstantsClient__vtable *)_vt_23AutonomyConstantsClient;
  return this;
}

void global constructors keyed to gDrawDebugRoutes() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to gDrawDebugRoutes() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

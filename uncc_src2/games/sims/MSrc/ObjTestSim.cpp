// STATUS: NOT STARTED

#include "ObjTestSim.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb1059;
	__vtbl_ptr_type *$vf908;
	
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
	cXObject *$vb908;
	static Int kSimTicksPerMotiveTick;
	__vtbl_ptr_type *$vf906;
	
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

// warning: multiple differing types with the same name (name not equal)
struct TreeSimImpl : virtual TreeSim {
	TreeSim *$vb1059;
	Int fIterations;
	TreeStack fStack;
	Int fLastTrans;
	bool fLastResult;
	StdPrm *fAutoStackArea;
	SInt16 fError;
	__vtbl_ptr_type *$vf1383;
	
	TreeSimImpl& operator=();
	TreeSimImpl();
	/* vtable[1] */ virtual TreeSimImpl(TreeSimImpl*, int, void);
	/* vtable[1] */ virtual TreeReturnCode TryElement();
	/* vtable[2] */ virtual void Error();
	/* vtable[3] */ virtual void StackJustPopped();
	void GetCurrentNode();
	void Reset();
	bool Gosub();
	NodeAction DoNodeAction();
	/* vtable[4] */ virtual NodeAction HandleBreakpoint();
	bool RunCheckTree();
	void RunOneTickTree();
	TreeSimImpl();
	/* vtable[2] */ virtual void Initialize();
	/* vtable[3] */ virtual bool Simulate();
	/* vtable[4] */ virtual void SetError();
	/* vtable[5] */ virtual SInt16 GetError();
	/* vtable[6] */ virtual void ClearError();
	/* vtable[7] */ virtual StackElem* GetHighLevelAction();
	/* vtable[8] */ virtual StackElem* GetCurElem();
	/* vtable[9] */ virtual StackElem* GetMainSimElem();
	/* vtable[10] */ virtual StackElem* GetNthElem();
	/* vtable[11] */ virtual SInt16 GetStackSize();
	/* vtable[12] */ virtual SInt16 GetCurrentPrimitive();
	/* vtable[13] */ virtual Int GetIterations();
	/* vtable[14] */ virtual bool GetLastTransition();
	/* vtable[15] */ virtual bool GetLastResult();
	/* vtable[16] */ virtual ISimInstance* GetISimInstance();
};

// warning: multiple differing types with the same name (name not equal)
struct cXObjectImpl : virtual cXObject, virtual TreeSimImpl {
	TreeSimImpl *$vb1383;
	cXObject *$vb908;
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
	__vtbl_ptr_type *$vf1010;
	
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
	cXObjectImpl *$vb1010;
	cXPerson *$vb906;
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
	cXPersonImpl();
	cXPersonImpl();
	/* vtable[1] */ virtual cXPersonImpl(cXPersonImpl*, int, void);
	/* vtable[1] */ virtual void EORDrawStickFigure(cXPersonImpl*, int, void);
	/* vtable[2] */ virtual int GetQueueCount();
	/* vtable[3] */ virtual u16* GetNextQueueStr();
	/* vtable[4] */ virtual void Initialize();
	/* vtable[5] */ virtual void Reset();
	/* vtable[6] */ virtual void PostLoad(cXPersonImpl*, int, void);
	/* vtable[7] */ virtual void PreSave();
	/* vtable[8] */ virtual TreeReturnCode TryElement();
	/* vtable[3] */ virtual bool Simulate();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[130] */ virtual void ReconStream();
	/* vtable[14] */ virtual int GetDynamicToStaticLatency();
	/* vtable[34] */ virtual void Place();
	/* vtable[45] */ virtual void ForceLocation();
	/* vtable[9] */ virtual bool GosubObjectTree();
	/* vtable[10] */ virtual void StackJustPopped();
	/* vtable[11] */ virtual void Cleanup();
	/* vtable[73] */ virtual cXPersonImpl* GetPersonImplementation();
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
	/* vtable[58] */ virtual void SetRecordDuration(cXPersonImpl*, int, void);
	/* vtable[59] */ virtual int GetRecordMaxDuration();
	/* vtable[60] */ virtual void SetRecordMaxDuration(cXPersonImpl*, int, void);
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
	bool AskOthersToMove();
	bool MoveOutOfWay();
	bool MoveOutOfWay();
	void ActionSkipped();
	TreeReturnCode TryGosubFoundAction();
	TreeReturnCode TryChangeSuit();
	TreeReturnCode TrySetMotiveDelta();
	TreeReturnCode TryTestInteractingWith();
	TreeReturnCode TryGotoRoutingSlot();
	TreeReturnCode TryGotoRoutingSlot();
	TreeReturnCode TryGotoRelative();
	TreeReturnCode TryReach();
	XRoute* GetCurrentRoute();
	TreeReturnCode InitRoute();
	bool TryRoomRouting();
	TreeReturnCode TryGetReachInfo();
	TreeReturnCode TryIdleForInput();
	TreeReturnCode TryFindBestAction();
	TreeReturnCode TryLookTowards();
	Int FindReachAnimation();
	void DumpDestList();
	void SetCurrentAction();
	void LoadMotiveEffects();
};

TTabScratchEntry sCheckTreeAds = {
	/* .fCheckTreeID = */ 0,
	/* .fActionTreeID = */ 0,
	/* .fAds = */ {
		/* [0] = */ {
			/* .fPersonalityAd = */ 0,
			/* .fMin = */ 0,
			/* .fRange = */ 0
		},
		/* [1] = */ {
			/* .fPersonalityAd = */ 0,
			/* .fMin = */ 0,
			/* .fRange = */ 0
		},
		/* [2] = */ {
			/* .fPersonalityAd = */ 0,
			/* .fMin = */ 0,
			/* .fRange = */ 0
		},
		/* [3] = */ {
			/* .fPersonalityAd = */ 0,
			/* .fMin = */ 0,
			/* .fRange = */ 0
		},
		/* [4] = */ {
			/* .fPersonalityAd = */ 0,
			/* .fMin = */ 0,
			/* .fRange = */ 0
		},
		/* [5] = */ {
			/* .fPersonalityAd = */ 0,
			/* .fMin = */ 0,
			/* .fRange = */ 0
		},
		/* [6] = */ {
			/* .fPersonalityAd = */ 0,
			/* .fMin = */ 0,
			/* .fRange = */ 0
		},
		/* [7] = */ {
			/* .fPersonalityAd = */ 0,
			/* .fMin = */ 0,
			/* .fRange = */ 0
		},
		/* [8] = */ {
			/* .fPersonalityAd = */ 0,
			/* .fMin = */ 0,
			/* .fRange = */ 0
		},
		/* [9] = */ {
			/* .fPersonalityAd = */ 0,
			/* .fMin = */ 0,
			/* .fRange = */ 0
		},
		/* [10] = */ {
			/* .fPersonalityAd = */ 0,
			/* .fMin = */ 0,
			/* .fRange = */ 0
		},
		/* [11] = */ {
			/* .fPersonalityAd = */ 0,
			/* .fMin = */ 0,
			/* .fRange = */ 0
		},
		/* [12] = */ {
			/* .fPersonalityAd = */ 0,
			/* .fMin = */ 0,
			/* .fRange = */ 0
		},
		/* [13] = */ {
			/* .fPersonalityAd = */ 0,
			/* .fMin = */ 0,
			/* .fRange = */ 0
		},
		/* [14] = */ {
			/* .fPersonalityAd = */ 0,
			/* .fMin = */ 0,
			/* .fRange = */ 0
		},
		/* [15] = */ {
			/* .fPersonalityAd = */ 0,
			/* .fMin = */ 0,
			/* .fRange = */ 0
		}
	},
	/* .fAttenuation = */ kCustom,
	/* .fAttenuationVal = */ 0.f,
	/* .fFlags = */ 0,
	/* .fIndex = */ 0,
	/* .fMinAutonomy = */ 0,
	/* .fJoinIndex = */ 0
};

TTabScratchEntry *ObjTestSim::sCheckTreeModEntry = &sCheckTreeAds;
ObjTestSim *ObjTestSim::sMenuBuilder = NULL;
bool gUserActionControl = false;
bool gAllowInUse = true;
InteractionList *ObjTestSim::sMenu;
Interaction *ObjTestSim::sInteraction;

ObjTestSim* ObjTestSim::ObjTestSim(cXPerson *tester, bool autonomous) {
  this->fPerson = (cXPerson__15_1740 *)tester;
  *(int *)&this->fAutonomous = (int)autonomous;
  this->fStackObject = (cXObject__15_2008 *)0x0;
  this->fStashed = (cXPerson__15_1740 *)0x0;
  return this;
}

ObjTestSim* ObjTestSim::ObjTestSim(cXPerson *tester, cXObject *stackObj, bool autonomous) {
  this->fPerson = (cXPerson__15_1740 *)tester;
  this->fStackObject = (cXObject__15_2008 *)0x0;
  this->fStashed = (cXPerson__15_1740 *)0x0;
  *(int *)&this->fAutonomous = (int)autonomous;
  SetStackObject__10ObjTestSimP8cXObject(this,stackObj);
  return this;
}

void ObjTestSim::~ObjTestSim(int __in_chrg) {
	int cnt;
	void *pAddress;
	
  ushort uVar1;
  cXObject__15_2008__vtable *pcVar2;
  cXPerson__15_1740 *pcVar3;
  ushort *puVar4;
  int iVar5;
  
  if (this->fStashed != (cXPerson__15_1740 *)0x0) {
    puVar4 = this->fTempStash;
    pcVar3 = this->fStashed;
    iVar5 = 0;
    while( true ) {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      pcVar2 = pcVar3->_vb2008->__vtable;
      (*(code *)pcVar2->GetRoutingSlot)
                ((int)&pcVar3->_vb2008->_vb3534 + (int)*(short *)&pcVar2->GetNumRoutingSlots,iVar5,
                 uVar1);
      if (7 < iVar5 + 1) break;
      pcVar3 = this->fStashed;
      iVar5 = iVar5 + 1;
    }
    this->fStashed = (cXPerson__15_1740 *)0x0;
  }
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void ObjTestSim::SetStackObject(cXObject *stackObj) {
  if (stackObj != (cXObject__124_908 *)0x0) {
    stackObj = (cXObject__124_908 *)
               (*(code *)stackObj->__vtable->IsSupport)
                         ((int)&stackObj->_vb1059 +
                          (int)*(short *)&stackObj->__vtable->GetBuildModeType);
  }
  this->fStackObject = (cXObject__15_2008 *)stackObj;
  return;
}

void ObjTestSim::TestInteraction(Interaction *interaction, TTabScratchEntry **modifiedEntry) {
	cXPersonImpl *person;
	cXObject *stackObj;
	TreeTableEntry *entry;
	short int stackLocals[4];
	bool avail;
	Interaction *this;
	Interaction *this;
	Interaction *this;
	TreeTableEntry *this;
	TreeTableEntry *this;
	TreeTableEntry *this;
	SInt16 checkTreeID;
	TreeTableEntry *this;
	int cnt;
	TreeTableAd *roomAd;
	TTabScratchEntry *this;
	TreeTableAd *this;
	Interaction *this;
	TreeTableAd *roomAd;
	TTabScratchEntry *this;
	TreeTableAd *this;
	Interaction *this;
	bool flag;
	Interaction *this;
	
  int iVar1;
  TreeSimImpl__21_3338 **ppTVar2;
  TTabScratchEntry *pTVar3;
  bool bVar4;
  ushort uVar5;
  ushort uVar6;
  cXPerson__142_985 *pcVar7;
  cXObject__142_982 *pcVar8;
  TreeTableEntry *other;
  cXPerson__15_1740 *pcVar9;
  Behavior *beh;
  uint uVar10;
  long lVar11;
  cXObject__142_982__vtable *pcVar12;
  int iVar13;
  int iVar14;
  ushort *puVar15;
  int *piVar16;
  long lVar17;
  ushort stackLocals [4];
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
                    /* end of inlined section */
  interaction->fFlags = interaction->fFlags & 0xfffffff7U | 4;
  pcVar7 = GetPerson__C11Interaction(interaction);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Person.h */
  lVar17 = 0;
  if (pcVar7 != (cXPerson__142_985 *)0x0) {
    lVar17 = (*(code *)pcVar7->__vtable[1].SetMotive)
                       ((int)&pcVar7->_vb982 + (int)*(short *)&pcVar7->__vtable[1].GetOldMotiveRef);
  }
                    /* end of inlined section */
  pcVar8 = GetStackObject__C11Interaction(interaction);
  if (pcVar8 == (cXObject__142_982 *)0x0) {
    return;
  }
  other = GetEntry__C11Interaction(interaction);
  if (other == (TreeTableEntry *)0x0) {
    return;
  }
  memset(stackLocals,0,8);
  if (*(int *)&this->fAutonomous != 0) {
    stackLocals[0] = 1;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
                    /* end of inlined section */
  if (interaction->fType == kJoin) {
    stackLocals[1] = 1;
  }
  piVar16 = (int *)lVar17;
  bVar4 = true;
  iVar13 = *(int *)(*(int *)(*piVar16 + 4) + 4);
  (**(code **)(iVar13 + 0x194))(*(int *)(*piVar16 + 4) + (int)*(short *)(iVar13 + 400),0x32,0);
  lVar11 = (*(code *)pcVar8->__vtable[1].GetNumRoutingSlots)
                     ((int)&pcVar8->_vb1019 +
                      (int)*(short *)&pcVar8->__vtable[1].GetObstacleAtLocation);
  if (lVar11 == 0) {
    if (*(int *)&this->fAutonomous == 0) {
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
      uVar5 = *(ushort *)&other->field_0xe;
    }
    else {
      lVar11 = (*(code *)pcVar8->__vtable->ReconType)
                         ((int)&pcVar8->_vb1019 + (int)*(short *)&pcVar8->__vtable->ReconStream,0x19
                         );
      if (0 < lVar11) {
        bVar4 = false;
        goto LAB_00225894;
      }
      uVar5 = *(ushort *)&other->field_0xe;
    }
                    /* end of inlined section */
    iVar13 = piVar16[1];
    if ((uVar5 & 1) != 0) goto LAB_00225898;
    lVar11 = (**(code **)(*(int *)(iVar13 + 4) + 0x164))
                       (iVar13 + *(short *)(*(int *)(iVar13 + 4) + 0x160));
    if (lVar11 != 0) {
      bVar4 = false;
    }
  }
  else {
    bVar4 = false;
  }
LAB_00225894:
  iVar13 = piVar16[1];
LAB_00225898:
  lVar11 = (**(code **)(*(int *)(iVar13 + 4) + 0x16c))
                     (iVar13 + *(short *)(*(int *)(iVar13 + 4) + 0x168));
  pTVar3 = _10ObjTestSim_sCheckTreeModEntry;
  if (lVar11 == 0) {
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
    uVar5 = *(ushort *)&other->field_0xe >> 6;
  }
  else {
    uVar5 = *(ushort *)&other->field_0xe >> 4;
                    /* end of inlined section */
  }
                    /* end of inlined section */
  if (((uVar5 ^ 1) & 1) == 0) {
    bVar4 = false;
  }
  if (bVar4 != false) {
    if (modifiedEntry != (TTabScratchEntry **)0x0) {
      *modifiedEntry = _10ObjTestSim_sCheckTreeModEntry;
      CopyFrom__16TTabScratchEntryPC14TreeTableEntry(pTVar3,other);
    }
                    /* end of inlined section */
    uVar5 = other->fCheckTreeID;
    if (uVar5 == 0) {
      bVar4 = true;
    }
    else if (pcVar8 == (cXObject__142_982 *)0x0) {
      bVar4 = false;
    }
    else {
      if (this->fStashed == (cXPerson__15_1740 *)0x0) {
        pcVar9 = (cXPerson__15_1740 *)0x0;
        if (lVar17 != 0) {
          pcVar9 = (cXPerson__15_1740 *)piVar16[1];
        }
        this->fStashed = pcVar9;
        puVar15 = this->fTempStash;
        iVar13 = 0;
        do {
          iVar14 = iVar13 + 1;
          iVar1 = *(int *)(*(int *)(*piVar16 + 4) + 4);
          uVar6 = (**(code **)(iVar1 + 0x214))
                            (*(int *)(*piVar16 + 4) + (int)*(short *)(iVar1 + 0x210),iVar13);
          *puVar15 = uVar6;
          puVar15 = puVar15 + 1;
          iVar13 = iVar14;
        } while (iVar14 < 8);
        pcVar12 = pcVar8->__vtable;
      }
      else {
        pcVar12 = pcVar8->__vtable;
      }
      ppTVar2 = (TreeSimImpl__21_3338 **)*piVar16;
      beh = (Behavior *)
            (*(code *)pcVar12[1].SetData)
                      ((int)&pcVar8->_vb1019 + (int)*(short *)&pcVar12[1].IsOccupied);
      uVar6 = (*(code *)pcVar8->__vtable[1].UserCanPlace)
                        ((int)&pcVar8->_vb1019 + (int)*(short *)&pcVar8->__vtable[1].IsPartOfMe);
      bVar4 = RunCheckTree__11TreeSimImplP8BehaviorssPs(*ppTVar2,beh,uVar6,uVar5,stackLocals);
      if (_gUserActionControl != 0) {
        bVar4 = true;
        iVar13 = *(int *)(*(int *)(*piVar16 + 4) + 4);
        (**(code **)(iVar13 + 0x194))(*(int *)(*piVar16 + 4) + (int)*(short *)(iVar13 + 400),0x32,0)
        ;
      }
    }
    if (modifiedEntry != (TTabScratchEntry **)0x0) {
      lVar17 = (*(code *)pcVar8->__vtable[1].ParseUIString)
                         ((int)&pcVar8->_vb1019 + (int)*(short *)&pcVar8->__vtable[1].RunTree);
      iVar13 = *(int *)(*(int *)(*piVar16 + 4) + 4);
      lVar11 = (**(code **)(iVar13 + 0x29c))
                         (*(int *)(*piVar16 + 4) + (int)*(short *)(iVar13 + 0x298));
      if (lVar17 != lVar11) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/TreeTab.h */
                    /* end of inlined section */
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
        (*modifiedEntry)->fAds[0xd].fRange = -(*modifiedEntry)->fAds[0xd].fMin;
      }
    }
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  if (*(int *)&(_5Globs_pEORGlobals->Cheats).DebugInteractions == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
    uVar10 = interaction->fFlags & 0xfffffff7;
    interaction->fFlags = uVar10;
    if (bVar4 != false) {
      interaction->fFlags = uVar10 | 8;
    }
                    /* end of inlined section */
    iVar13 = *(int *)(*(int *)(*piVar16 + 4) + 4);
    lVar17 = (**(code **)(iVar13 + 0x20c))
                       (*(int *)(*piVar16 + 4) + (int)*(short *)(iVar13 + 0x208),0x32);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
    uVar10 = interaction->fFlags & 0xffffffef;
    interaction->fFlags = uVar10;
    if (lVar17 != 0) {
      interaction->fFlags = uVar10 | 0x10;
    }
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
                    /* end of inlined section */
    interaction->fFlags = interaction->fFlags | 8;
    pTVar3 = _10ObjTestSim_sCheckTreeModEntry;
    if (modifiedEntry != (TTabScratchEntry **)0x0) {
      *modifiedEntry = _10ObjTestSim_sCheckTreeModEntry;
      CopyFrom__16TTabScratchEntryPC14TreeTableEntry(pTVar3,other);
      lVar17 = (*(code *)pcVar8->__vtable[1].ParseUIString)
                         ((int)&pcVar8->_vb1019 + (int)*(short *)&pcVar8->__vtable[1].RunTree);
      iVar13 = *(int *)(*(int *)(*piVar16 + 4) + 4);
      lVar11 = (**(code **)(iVar13 + 0x29c))
                         (*(int *)(*piVar16 + 4) + (int)*(short *)(iVar13 + 0x298));
      if (lVar17 != lVar11) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/TreeTab.h */
                    /* end of inlined section */
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
                    /* end of inlined section */
        (*modifiedEntry)->fAds[0xd].fRange = -(*modifiedEntry)->fAds[0xd].fMin;
      }
    }
  }
  return;
}

void ObjTestSim::AppendInteractions(InteractionList &interactions) {
  if (*(int *)&this->fAutonomous == 0) {
    AppendInteractionsForMenu__10ObjTestSimR15InteractionList(this,interactions);
  }
  else {
    AppendInteractionsForAuto__10ObjTestSimR15InteractionList(this,interactions);
  }
  return;
}

void ObjTestSim::AppendInteractionsForMenu(InteractionList &interactions) {
	TreeTable *treeTab;
	TreeTableEntry *entry;
	TreeTable *this;
	VECTOR<TreeTableEntry> *this;
	Int cnt;
	TreeTableEntry *entry;
	Interaction newInteraction;
	TreeTable *this;
	Int num;
	VECTOR<TreeTableEntry> *this;
	unsigned int n;
	VECTOR<TreeTableEntry> *this;
	VECTOR<TreeTableEntry> *this;
	VECTOR<TreeTableEntry> *this;
	VECTOR<TreeTableEntry> *this;
	TreeTableEntry *this;
	TreeTableEntry *this;
	cXPerson *targetPerson;
	cXObject *ptr;
	Interaction join;
	
  cXObject__15_2008__vtable *pcVar1;
  cXPerson__15_1740__vtable *pcVar2;
  int iVar3;
  int iVar4;
  Interaction *this_00;
  TreeTableEntry *pTVar5;
  cXPerson__15_1740 *person;
  long lVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  Interaction join;
  
  pcVar1 = this->fStackObject->__vtable;
  lVar6 = (*(code *)pcVar1[1].GetFnTable)
                    ((int)&this->fStackObject->_vb3534 + (int)*(short *)&pcVar1[1].ForceLocation);
  if (lVar6 != 0) {
    piVar9 = (int *)lVar6;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    iVar8 = 0;
    if (*piVar9 != 0) {
      iVar8 = *(int *)(*piVar9 + -4);
    }
                    /* end of inlined section */
    iVar7 = 0;
    _10ObjTestSim_sMenuBuilder = this;
    _10ObjTestSim_sMenu = interactions;
    if (0 < iVar8) {
      iVar10 = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/TreeTab.h */
      iVar4 = *piVar9;
      while( true ) {
        iVar3 = 0;
        if (iVar4 != 0) {
          iVar3 = *(int *)(iVar4 + -4);
        }
        if ((iVar7 < 0) || (iVar3 <= iVar7)) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(short *)(iVar4 + iVar10 + 0x16) * 0x1c + iVar4;
        }
                    /* end of inlined section */
        iVar7 = iVar7 + 1;
        iVar10 = iVar10 + 0x1c;
        __11InteractionP8cXPersonP8cXObjectii
                  (&join,(cXPerson__142_985 *)this->fPerson,(cXObject__142_982 *)this->fStackObject,
                   (int)*(short *)(iVar4 + 0x10),0x32);
        RunMenuCheckTree__10ObjTestSimR15InteractionListR11Interaction(this,interactions,&join);
        ___8BString2(&join.fName,2);
        if (iVar8 <= iVar7) break;
        iVar4 = *piVar9;
      }
    }
    pcVar2 = this->fPerson->__vtable;
    this_00 = (Interaction *)
              (*(code *)pcVar2->IsChild)
                        ((int)&this->fPerson->_vb2008 + (int)*(short *)&pcVar2->IsVisitor);
    pTVar5 = GetEntry__C11Interaction(this_00);
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
                    /* end of inlined section */
    if ((pTVar5 != (TreeTableEntry *)0x0) && ((*(ushort *)&pTVar5->field_0xe >> 1 & 1) != 0)) {
                    /* inlined from SCID.h */
      person = (cXPerson__15_1740 *)0x0;
      if (this->fStackObject != (cXObject__15_2008 *)0x0) {
        person = (cXPerson__15_1740 *)
                 _dyncastimpl__7TreeSim4SCID(this->fStackObject->_vb3534,cXPersonID);
      }
                    /* end of inlined section */
      if ((person != (cXPerson__15_1740 *)0x0) && (person != this->fPerson)) {
        __11InteractionP8cXPersonT1
                  (&join,(cXPerson__142_985 *)person,(cXPerson__142_985 *)this->fPerson);
        RunMenuCheckTree__10ObjTestSimR15InteractionListR11Interaction(this,interactions,&join);
        ___8BString2(&join.fName,2);
      }
    }
                    /* end of inlined section */
    _10ObjTestSim_sMenuBuilder = (ObjTestSim *)0x0;
  }
  return;
}

void ObjTestSim::RunMenuCheckTree(InteractionList &interactions, Interaction &interaction) {
	unsigned int size;
	Interaction *this;
	Interaction *this;
	
  uint uVar1;
  uint uVar2;
  
  _10ObjTestSim_sInteraction = interaction;
  uVar1 = size__C15InteractionList(interactions);
  TestInteraction__10ObjTestSimP11InteractionPP16TTabScratchEntry
            (this,interaction,(TTabScratchEntry **)0x0);
  uVar2 = size__C15InteractionList(interactions);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
                    /* end of inlined section */
  if (((uVar1 == uVar2) && ((interaction->fFlags >> 4 & 1U) == 0)) &&
     ((interaction->fFlags >> 3 & 1U) != 0)) {
    push_back__15InteractionListRC11Interaction(interactions,interaction);
  }
  return;
}

bool ObjTestSim::IsMenuInProgress() {
  bool bVar1;
  
  bVar1 = false;
  if ((_10ObjTestSim_sMenuBuilder != (ObjTestSim *)0x0) &&
     (_10ObjTestSim_sMenu != (InteractionList *)0x0)) {
    bVar1 = _10ObjTestSim_sInteraction != (Interaction *)0x0;
  }
  return bVar1;
}

void ObjTestSim::MakeNewMenuItem(c16 *name, StdPrm *stackVars) {
	Interaction newInteraction;
	
  bool bVar1;
  Interaction newInteraction;
  
  bVar1 = IsMenuInProgress__10ObjTestSim();
  if (bVar1) {
    __11InteractionRC11Interaction(&newInteraction,_10ObjTestSim_sInteraction);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
    newInteraction.fFlags = newInteraction.fFlags & 0xffffffefU | 8;
                    /* end of inlined section */
    __as__8BString2PCUs(&newInteraction.fName,name);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
                    /* end of inlined section */
    newInteraction.fStackVars[3] = stackVars[3];
    newInteraction.fStackVars[0] = *stackVars;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
    newInteraction.fFlags = newInteraction.fFlags | 4;
                    /* end of inlined section */
    newInteraction.fStackVars[1] = stackVars[1];
    newInteraction.fStackVars[2] = stackVars[2];
                    /* end of inlined section */
    push_back__15InteractionListRC11Interaction(_10ObjTestSim_sMenu,&newInteraction);
    ___8BString2(&newInteraction.fName,2);
                    /* end of inlined section */
  }
  return;
}

void ObjTestSim::AppendInteractionsForAuto(InteractionList &intVector) {
	TreeTable *treeTab;
	bool visitor;
	bool child;
	StdPrm autonomy;
	TreeTable *this;
	VECTOR<TreeTableEntry> *this;
	int i;
	TreeTableEntry *entry;
	TreeTable *this;
	Int num;
	VECTOR<TreeTableEntry> *this;
	unsigned int n;
	VECTOR<TreeTableEntry> *this;
	VECTOR<TreeTableEntry> *this;
	VECTOR<TreeTableEntry> *this;
	VECTOR<TreeTableEntry> *this;
	TreeTableEntry *this;
	TreeTableEntry *this;
	TreeTableEntry *this;
	TreeTableEntry *this;
	TreeTableEntry *this;
	TreeTableEntry *this;
	cXPerson *otherPerson;
	TreeTableEntry *entry;
	cXObject *ptr;
	TreeTableEntry *this;
	Interaction join;
	
  ushort uVar1;
  cXObject__15_2008__vtable *pcVar2;
  cXPerson__15_1740__vtable *pcVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  cXPerson__142_985 *personToJoin;
  Interaction *this_00;
  TreeTableEntry *pTVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  Interaction join;
  
  pcVar2 = this->fStackObject->__vtable;
  lVar8 = (*(code *)pcVar2[1].GetFnTable)
                    ((int)&this->fStackObject->_vb3534 + (int)*(short *)&pcVar2[1].ForceLocation);
  if ((lVar8 != 0) && (_gUserActionControl == 0)) {
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
    iVar13 = *(int *)lVar8;
    iVar12 = 0;
    if (iVar13 != 0) {
      iVar12 = *(int *)(iVar13 + -4);
    }
                    /* end of inlined section */
    iVar12 = iVar12 + -1;
    pcVar3 = this->fPerson->__vtable;
    lVar9 = (**(code **)&pcVar3->field_0x164)
                      ((int)&this->fPerson->_vb2008 + (int)*(short *)&pcVar3->field_0x160);
    pcVar3 = this->fPerson->__vtable;
    lVar10 = (**(code **)&pcVar3->field_0x16c)
                       ((int)&this->fPerson->_vb2008 + (int)*(short *)&pcVar3->field_0x168);
    pcVar3 = this->fPerson->__vtable;
    sVar5 = (*(code *)pcVar3->GetRecordDuration)
                      ((int)&this->fPerson->_vb2008 + (int)*(short *)&pcVar3->GetRecording,0x24);
    if (-1 < iVar12) {
      iVar13 = iVar12 * 0x1c;
      do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/TreeTab.h */
        iVar11 = *(int *)lVar8;
        iVar6 = 0;
        if (iVar11 != 0) {
          iVar6 = *(int *)(iVar11 + -4);
        }
        if ((iVar12 < 0) || (iVar6 <= iVar12)) {
          iVar11 = 0;
        }
        else {
          iVar11 = *(short *)(iVar11 + iVar13 + 0x16) * 0x1c + iVar11;
        }
                    /* end of inlined section */
        uVar1 = *(ushort *)(iVar11 + 0xe);
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
                    /* end of inlined section */
        if ((lVar9 == 0) || ((uVar1 & 1) != 0)) {
                    /* end of inlined section */
          uVar4 = uVar1 >> 6;
          if (lVar10 != 0) {
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
            uVar4 = uVar1 >> 4;
          }
                    /* end of inlined section */
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
                    /* end of inlined section */
                    /* end of inlined section */
          if (((((uVar4 ^ 1) & 1) != 0) && ((uVar1 >> 7 & 1) == 0)) &&
             (*(short *)(iVar11 + 0x12) <= sVar5)) {
                    /* end of inlined section */
            __11InteractionP8cXPersonP8cXObjectii
                      (&join,(cXPerson__142_985 *)this->fPerson,
                       (cXObject__142_982 *)this->fStackObject,(int)*(short *)(iVar11 + 0x10),0);
            push_back__15InteractionListRC11Interaction(intVector,&join);
            ___8BString2(&join.fName,2);
          }
        }
        iVar12 = iVar12 + -1;
        iVar13 = iVar13 + -0x1c;
      } while (-1 < iVar12);
    }
    pcVar2 = this->fStackObject->__vtable;
    lVar8 = (*(code *)pcVar2[1].Pickup)
                      ((int)&this->fStackObject->_vb3534 + (int)*(short *)&pcVar2[1].Turn);
    if (lVar8 == 2) {
                    /* inlined from SCID.h */
      personToJoin = (cXPerson__142_985 *)0x0;
      if (this->fStackObject != (cXObject__15_2008 *)0x0) {
        personToJoin = (cXPerson__142_985 *)
                       _dyncastimpl__7TreeSim4SCID(this->fStackObject->_vb3534,cXPersonID);
      }
                    /* end of inlined section */
      this_00 = (Interaction *)
                (*(code *)personToJoin->__vtable->IsChild)
                          ((int)&personToJoin->_vb982 +
                           (int)*(short *)&personToJoin->__vtable->IsVisitor);
      pTVar7 = GetEntry__C11Interaction(this_00);
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
                    /* end of inlined section */
      if ((pTVar7 != (TreeTableEntry *)0x0) && ((*(ushort *)&pTVar7->field_0xe >> 1 & 1) != 0)) {
        __11InteractionP8cXPersonT1(&join,(cXPerson__142_985 *)this->fPerson,personToJoin);
        push_back__15InteractionListRC11Interaction(intVector,&join);
        ___8BString2(&join.fName,2);
                    /* end of inlined section */
      }
    }
  }
  return;
}

InteractionList* InteractionList::InteractionList() {
  this->m_pFirst = (Interaction *)0x0;
  this->m_pLast = (Interaction *)0x0;
  return this;
}

void InteractionList::~InteractionList(int __in_chrg) {
	void *pAddress;
	
  clear__15InteractionList(this);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

unsigned int InteractionList::size() {
	unsigned int result;
	Interaction *node;
	
  Interaction *pIVar1;
  uint uVar2;
  
  uVar2 = 0;
  for (pIVar1 = this->m_pFirst; pIVar1 != (Interaction *)0x0; pIVar1 = pIVar1->m_pNextItem) {
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}

void InteractionList::push_back(Interaction &x) {
	Interaction *node;
	
  Interaction *pIVar1;
  
  pIVar1 = (Interaction *)__builtin_new(0x40);
  pIVar1 = __11InteractionRC11Interaction(pIVar1,x);
  pIVar1->m_pNextItem = (Interaction *)0x0;
  if (this->m_pLast == (Interaction *)0x0) {
    this->m_pLast = pIVar1;
    this->m_pFirst = pIVar1;
  }
  else {
    this->m_pLast->m_pNextItem = pIVar1;
    this->m_pLast = pIVar1;
  }
  return;
}

void InteractionList::clear() {
	Interaction *node;
	Interaction *tmp;
	Interaction *this;
	void *pAddress;
	
  Interaction *pIVar1;
  Interaction *pAddress;
  
  pAddress = this->m_pFirst;
  if (pAddress == (Interaction *)0x0) {
    this->m_pFirst = (Interaction *)0x0;
  }
  else {
    do {
      pIVar1 = pAddress->m_pNextItem;
      if (pAddress != (Interaction *)0x0) {
        ___8BString2(&pAddress->fName,2);
                    /* inlined from /eor/src2/common/e_standard_heap.h */
        _memmanFree__FPv(pAddress);
      }
                    /* end of inlined section */
      pAddress = pIVar1;
    } while (pIVar1 != (Interaction *)0x0);
    this->m_pFirst = (Interaction *)0x0;
  }
  this->m_pLast = (Interaction *)0x0;
  return;
}

void InteractionList::increment(iterator &it) {
  if (it->m_pInteraction != (Interaction *)0x0) {
    it->m_pInteraction = it->m_pInteraction->m_pNextItem;
  }
  return;
}

Interaction* InteractionList::iterator::operator++() {
	Interaction *result;
	
  Interaction *pIVar1;
  
  pIVar1 = this->m_pInteraction;
  increment__15InteractionListRQ215InteractionList8iterator(this);
  return pIVar1;
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

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___16TTabScratchEntry(&sCheckTreeAds,2);
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjTestSim.cpp */
      __16TTabScratchEntry(&sCheckTreeAds);
    }
  }
  return;
}

void global constructors keyed to sCheckTreeAds() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to sCheckTreeAds() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

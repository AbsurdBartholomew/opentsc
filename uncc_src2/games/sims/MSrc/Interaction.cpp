// STATUS: NOT STARTED

#include "Interaction.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb1019;
	__vtbl_ptr_type *$vf982;
	
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
	cXObject *$vb982;
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

// warning: multiple differing types with the same name (name not equal)
struct TreeSimImpl : virtual TreeSim {
	TreeSim *$vb1019;
	Int fIterations;
	TreeStack fStack;
	Int fLastTrans;
	bool fLastResult;
	StdPrm *fAutoStackArea;
	SInt16 fError;
	__vtbl_ptr_type *$vf1344;
	
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
	TreeSimImpl *$vb1344;
	cXObject *$vb982;
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
	__vtbl_ptr_type *$vf965;
	
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
	cXObjectImpl *$vb965;
	cXPerson *$vb985;
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

SInt32 Interaction::sLastUniqueID = 0;

Interaction* Interaction::Interaction() {
	Interaction *this;
	Interaction *this;
	Interaction *this;
	
  this->fPerson = (cXPersonImpl__142_963 *)0x0;
  this->fStackObject = (cXObjectImpl__15_3423 *)0x0;
  this->fIconObject = (cXObjectImpl__15_3423 *)0x0;
  this->fPriority = 0;
  this->fTreeID = 0;
  this->fAttenuation = 0.0;
  this->fTreeTabEntryIndex = -1;
  __8BString2(&this->fName);
  this->fID = 0;
  this->fType = kNormal;
  this->fStackVars[0] = 0;
  this->fStackVars[1] = 0;
  this->fStackVars[2] = 0;
  this->fStackVars[3] = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
  this->fFlags = 0;
  return this;
}

Interaction* Interaction::Interaction(Interaction &other) {
	Interaction *this;
	Interaction &_ctor_arg;
	
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  int iVar4;
  
  __8BString2(&this->fName);
  puVar3 = this->fStackVars;
  iVar4 = 3;
  this->m_pNextItem = other->m_pNextItem;
  puVar2 = other->fStackVars;
  this->fType = other->fType;
  this->fPerson = other->fPerson;
  this->fStackObject = other->fStackObject;
  this->fIconObject = other->fIconObject;
  this->fTreeTabEntryIndex = other->fTreeTabEntryIndex;
  do {
    uVar1 = *puVar2;
    iVar4 = iVar4 + -1;
    puVar2 = puVar2 + 1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  } while (iVar4 != -1);
  this->fPriority = other->fPriority;
  this->fTreeID = other->fTreeID;
  this->fAttenuation = other->fAttenuation;
  __as__8BString2RC8BString2(&this->fName,&other->fName);
  this->fMenuItem = other->fMenuItem;
  this->fSubMenuItem = other->fSubMenuItem;
  this->fID = other->fID;
  this->fFlags = other->fFlags;
  return this;
}

Interaction* Interaction::Interaction(cXPerson *person, cXObject *obj, Int animIndex) {
	Interaction *this;
	Interaction *this;
	cXPerson *this;
	cXObject *this;
	cXObject *this;
	Interaction *this;
	
  uint uVar1;
  cXPersonImpl__142_963 *pcVar2;
  cXObjectImpl__15_3423 *pcVar3;
  
  __8BString2(&this->fName);
  this->fType = kAnimPreview;
  this->fPriority = 100;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Person.h */
  this->fFlags = 0;
  if (person == (cXPerson__142_985 *)0x0) {
                    /* end of inlined section */
    this->fPerson = (cXPersonImpl__142_963 *)0x0;
  }
  else {
    pcVar2 = (cXPersonImpl__142_963 *)
             (*(code *)person->__vtable[1].SetMotive)
                       ((int)&person->_vb982 + (int)*(short *)&person->__vtable[1].GetOldMotiveRef);
    this->fPerson = pcVar2;
  }
  if (obj == (cXObject__142_982 *)0x0) {
    this->fStackObject = (cXObjectImpl__15_3423 *)0x0;
    this->fTreeTabEntryIndex = -1;
    this->fIconObject = (cXObjectImpl__15_3423 *)0x0;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    pcVar3 = (cXObjectImpl__15_3423 *)
             (*(code *)obj->__vtable[1].GetObjectImplementation)
                       ((int)&obj->_vb1019 + (int)*(short *)&obj->__vtable[1].AdvanceGraphic);
                    /* end of inlined section */
    this->fStackObject = pcVar3;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    pcVar3 = (cXObjectImpl__15_3423 *)
             (*(code *)obj->__vtable[1].GetObjectImplementation)
                       ((int)&obj->_vb1019 + (int)*(short *)&obj->__vtable[1].AdvanceGraphic);
                    /* end of inlined section */
    this->fIconObject = pcVar3;
    this->fTreeTabEntryIndex = animIndex;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
  uVar1 = this->fFlags;
                    /* end of inlined section */
  this->fStackVars[0] = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
                    /* end of inlined section */
  this->fStackVars[1] = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
  this->fFlags = uVar1 & 0xfffffffe;
                    /* end of inlined section */
  this->fStackVars[2] = 0;
  this->fStackVars[3] = 0;
  this->fID = 0;
  this->fTreeID = 0;
  this->fAttenuation = 0.0;
  return this;
}

Interaction* Interaction::Interaction(cXPerson *person, cXPerson *personToJoin) {
	Interaction &join;
	Int joinIndex;
	TreeTableEntry *entry;
	Interaction *this;
	Interaction &_ctor_arg;
	cXPerson *this;
	Interaction *this;
	Interaction *this;
	TreeTable *ttab;
	TreeTableEntry *entry;
	TreeTableEntry *this;
	TreeTableEntry *this;
	TreeTableEntry *this;
	TreeTableEntry *this;
	TreeTableEntry *this;
	Interaction *this;
	Interaction *this;
	
  ushort uVar1;
  Interaction *pIVar2;
  cXObject__15_2008 *pcVar3;
  cXObject__15_2008__vtable *pcVar4;
  cXPerson__142_985 *pcVar5;
  cXPerson__142_985__vtable *pcVar6;
  bool visitor;
  Interaction **ppIVar7;
  cXPersonImpl__142_963 *pcVar8;
  TreeTableEntry *pTVar9;
  TreeTableEntry *pTVar10;
  uint uVar11;
  long lVar12;
  Interaction **ppIVar13;
  BString2 *this_00;
  ushort *puVar14;
  int iVar15;
  long lVar16;
  float fVar17;
  
  __8BString2(&this->fName);
  ppIVar7 = (Interaction **)
            (*(code *)personToJoin->__vtable->IsChild)
                      ((int)&personToJoin->_vb982 +
                       (int)*(short *)&personToJoin->__vtable->IsVisitor);
  puVar14 = this->fStackVars;
  iVar15 = 3;
  ppIVar13 = ppIVar7 + 6;
  this->m_pNextItem = *ppIVar7;
  this->fType = (Type)ppIVar7[1];
  this->fPerson = (cXPersonImpl__142_963 *)ppIVar7[2];
  this->fStackObject = (cXObjectImpl__15_3423 *)ppIVar7[3];
  this->fIconObject = (cXObjectImpl__15_3423 *)ppIVar7[4];
  this->fTreeTabEntryIndex = (int)ppIVar7[5];
  do {
    uVar1 = *(ushort *)ppIVar13;
    iVar15 = iVar15 + -1;
    ppIVar13 = (Interaction **)((int)ppIVar13 + 2);
    *puVar14 = uVar1;
    puVar14 = puVar14 + 1;
  } while (iVar15 != -1);
  this_00 = &this->fName;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Person.h */
                    /* end of inlined section */
  this->fPriority = (int)ppIVar7[8];
  this->fTreeID = *(ushort *)(ppIVar7 + 9);
  this->fAttenuation = (float)ppIVar7[10];
  __as__8BString2RC8BString2(this_00,(BString2 *)(ppIVar7 + 0xb));
  this->fMenuItem = (int)ppIVar7[0xc];
  this->fSubMenuItem = (int)ppIVar7[0xd];
  this->fID = (int)ppIVar7[0xe];
  pIVar2 = ppIVar7[0xf];
  this->fType = kJoin;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Person.h */
  this->fFlags = (int)pIVar2;
  if (person == (cXPerson__142_985 *)0x0) {
    pcVar8 = (cXPersonImpl__142_963 *)0x0;
  }
  else {
    pcVar8 = (cXPersonImpl__142_963 *)
             (*(code *)person->__vtable[1].SetMotive)
                       ((int)&person->_vb982 + (int)*(short *)&person->__vtable[1].GetOldMotiveRef);
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
                    /* end of inlined section */
  this->fPerson = pcVar8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
                    /* end of inlined section */
  this->fPriority = 0x32;
  lVar16 = -1;
  this->fFlags = this->fFlags & 0xfffffff9;
  if ((this->fStackObject != (cXObjectImpl__15_3423 *)0x0) &&
     (pcVar3 = this->fStackObject->_vb2008, pcVar4 = pcVar3->__vtable,
     lVar12 = (*(code *)pcVar4[1].GetFnTable)
                        ((int)&pcVar3->_vb3534 + (int)*(short *)&pcVar4[1].ForceLocation),
     lVar12 != 0)) {
    pTVar9 = GetEntryByIndex__C9TreeTablei((TreeTable *)lVar12,(int)ppIVar7[5]);
                    /* end of inlined section */
    if ((pTVar9 != (TreeTableEntry *)0x0) &&
       (pTVar10 = GetEntryByIndex__C9TreeTablei((TreeTable *)lVar12,(int)(short)pTVar9->fJoinIndex),
       pTVar10 != (TreeTableEntry *)0x0)) {
      lVar16 = (long)(short)pTVar9->fJoinIndex;
    }
  }
  if (lVar16 == -1) {
    this->fStackObject = (cXObjectImpl__15_3423 *)0x0;
  }
  else {
    this->fTreeTabEntryIndex = (int)lVar16;
  }
  this->fStackVars[0] = 0;
  this->fStackVars[1] = 0;
  this->fStackVars[2] = 0;
  this->fStackVars[3] = 0;
  this->fID = 0;
  pTVar9 = GetEntry__C11Interaction(this);
  if (pTVar9 == (TreeTableEntry *)0x0) {
    this->fTreeID = 0;
    this->fAttenuation = 0.0;
    __as__8BString2PCw(this_00,(int *)&DAT_003bd468);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
    this->fFlags = this->fFlags & 0xfffffffe;
  }
  else {
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
                    /* end of inlined section */
    this->fTreeID = pTVar9->fActionTreeID;
    pcVar5 = this->fPerson->_vb985;
    pcVar6 = pcVar5->__vtable;
    visitor = (bool)(**(code **)&pcVar6->field_0x164)
                              ((int)&pcVar5->_vb982 + (int)*(short *)&pcVar6->field_0x160);
    fVar17 = GetAttenuationValue__C14TreeTableEntryb(pTVar9,visitor);
    this->fAttenuation = fVar17;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    __as__8BString2PCUs(this_00,*(pTVar9->fName).ptr);
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
    uVar1 = *(ushort *)&pTVar9->field_0xe;
    uVar11 = this->fFlags & 0xfffffffe;
    this->fFlags = uVar11;
    if ((uVar1 >> 8 & 1) != 0) {
                    /* end of inlined section */
      this->fFlags = uVar11 | 1;
    }
  }
                    /* end of inlined section */
  return this;
}

Interaction* Interaction::Interaction(cXPerson *person, cXObject *obj, Int treeTabEntryIndex, Int priority) {
	TreeTableEntry *entry;
	Interaction *this;
	Interaction *this;
	cXPerson *this;
	cXObject *this;
	cXObject *this;
	TreeTableEntry *this;
	TreeTableEntry *this;
	Interaction *this;
	Interaction *this;
	
  ushort uVar1;
  cXPerson__142_985 *pcVar2;
  cXPerson__142_985__vtable *pcVar3;
  bool visitor;
  cXPersonImpl__142_963 *pcVar4;
  cXObjectImpl__15_3423 *pcVar5;
  TreeTableEntry *this_00;
  uint uVar6;
  float fVar7;
  
  __8BString2(&this->fName);
  this->fPriority = priority;
  this->fType = kNormal;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
  this->fFlags = 0;
  if (person == (cXPerson__142_985 *)0x0) {
                    /* end of inlined section */
    this->fPerson = (cXPersonImpl__142_963 *)0x0;
  }
  else {
    pcVar4 = (cXPersonImpl__142_963 *)
             (*(code *)person->__vtable[1].SetMotive)
                       ((int)&person->_vb982 + (int)*(short *)&person->__vtable[1].GetOldMotiveRef);
    this->fPerson = pcVar4;
  }
  if (obj == (cXObject__142_982 *)0x0) {
    this->fStackObject = (cXObjectImpl__15_3423 *)0x0;
    this->fTreeTabEntryIndex = -1;
    this->fIconObject = (cXObjectImpl__15_3423 *)0x0;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    pcVar5 = (cXObjectImpl__15_3423 *)
             (*(code *)obj->__vtable[1].GetObjectImplementation)
                       ((int)&obj->_vb1019 + (int)*(short *)&obj->__vtable[1].AdvanceGraphic);
                    /* end of inlined section */
    this->fStackObject = pcVar5;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    pcVar5 = (cXObjectImpl__15_3423 *)
             (*(code *)obj->__vtable[1].GetObjectImplementation)
                       ((int)&obj->_vb1019 + (int)*(short *)&obj->__vtable[1].AdvanceGraphic);
                    /* end of inlined section */
    this->fIconObject = pcVar5;
    this->fTreeTabEntryIndex = treeTabEntryIndex;
  }
  this->fStackVars[0] = 0;
  this->fStackVars[1] = 0;
  this->fStackVars[2] = 0;
  this->fStackVars[3] = 0;
  this->fID = 0;
  this_00 = GetEntry__C11Interaction(this);
  if (this_00 == (TreeTableEntry *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
                    /* end of inlined section */
    this->fTreeID = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
    uVar6 = this->fFlags & 0xfffffffe;
                    /* end of inlined section */
    this->fAttenuation = 0.0;
  }
  else {
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
                    /* end of inlined section */
    this->fTreeID = this_00->fActionTreeID;
    pcVar2 = this->fPerson->_vb985;
    pcVar3 = pcVar2->__vtable;
    visitor = (bool)(**(code **)&pcVar3->field_0x164)
                              ((int)&pcVar2->_vb982 + (int)*(short *)&pcVar3->field_0x160);
    fVar7 = GetAttenuationValue__C14TreeTableEntryb(this_00,visitor);
    this->fAttenuation = fVar7;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
    uVar1 = *(ushort *)&this_00->field_0xe;
    uVar6 = this->fFlags & 0xfffffffe;
    this->fFlags = uVar6;
    if ((uVar1 >> 8 & 1) == 0) {
      return this;
    }
    uVar6 = uVar6 | 1;
                    /* end of inlined section */
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
  this->fFlags = uVar6;
                    /* end of inlined section */
  return this;
}

void Interaction::SetStackVars(StdPrm *stackVars) {
  this->fStackVars[0] = *stackVars;
  this->fStackVars[1] = stackVars[1];
  this->fStackVars[2] = stackVars[2];
  this->fStackVars[3] = stackVars[3];
  return;
}

TreeTableEntry* Interaction::GetEntry() {
  cXObject__15_2008 *pcVar1;
  cXObject__15_2008__vtable *pcVar2;
  TreeTable *this_00;
  TreeTableEntry *pTVar3;
  
  if (this->fStackObject == (cXObjectImpl__15_3423 *)0x0) {
    pTVar3 = (TreeTableEntry *)0x0;
  }
  else {
    pcVar1 = this->fStackObject->_vb2008;
    pcVar2 = pcVar1->__vtable;
    this_00 = (TreeTable *)
              (*(code *)pcVar2[1].GetFnTable)
                        ((int)&pcVar1->_vb3534 + (int)*(short *)&pcVar2[1].ForceLocation);
    pTVar3 = GetEntryByIndex__C9TreeTablei(this_00,this->fTreeTabEntryIndex);
  }
  return pTVar3;
}

void Interaction::SetUniqueID() {
  _11Interaction_sLastUniqueID = _11Interaction_sLastUniqueID + 1;
  this->fID = _11Interaction_sLastUniqueID;
  return;
}

InteractionName& Interaction::GetName() {
	TreeTableEntry *entry;
	TreeTableEntry *this;
	TreeTableEntry *this;
	Interaction *this;
	
  uint uVar1;
  TreeTableEntry *pTVar2;
  BString2 *this_00;
  
  this_00 = &this->fName;
  uVar1 = length__C8BString2(this_00);
  if (uVar1 == 0) {
    pTVar2 = GetEntry__C11Interaction(this);
    if (pTVar2 == (TreeTableEntry *)0x0) {
      uVar1 = this->fFlags;
    }
    else {
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
                    /* end of inlined section */
      if ((*(ushort *)&pTVar2->field_0xe >> 7 & 1) != 0) {
        __as__8BString2PCw(this_00,(int *)&DAT_003bd478);
      }
                    /* inlined from /eor/projects/sims/Qdata/TreeTabData.h */
                    /* end of inlined section */
      __apl__8BString2PCUs(this_00,*(pTVar2->fName).ptr);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
      uVar1 = this->fFlags;
    }
  }
  else {
    uVar1 = this->fFlags;
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
  this->fFlags = uVar1 & 0xffffff7f;
                    /* end of inlined section */
  return &this->fName;
}

void Interaction::SetName(InteractionName &name) {
	Interaction *this;
	
  __as__8BString2RC8BString2(&this->fName,name);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
  this->fFlags = this->fFlags | 0x80;
  return;
}

void Interaction::DoStream(ReconBuffer *r, SInt32 version) {
	Int type;
	bool tmp;
	Interaction *this;
	bool flag;
	Interaction *this;
	bool flag;
	Interaction *this;
	Interaction *this;
	bool flag;
	Interaction *this;
	bool flag;
	Interaction *this;
	bool flag;
	
  ObjectModule *pOVar1;
  uint uVar2;
  int iVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  int type;
  bool tmp;
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
  
  pOVar1 = _5Globs_pObjectModule;
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
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  type = this->fType;
  ReconInt__11ReconBufferPii(r,&type,1);
  this->fType = type;
  Recon32__11ReconBufferPii(r,&this->fID,1);
  (*(code *)pOVar1->__vtable[1].EnqueueObjectDialog)
            ((int)&pOVar1->__vtable + (int)*(short *)&pOVar1->__vtable[1].EnqueueObjectDialog,r,
             &this->fPerson);
  (*(code *)pOVar1->__vtable[1].GetCurrentDialog)
            ((int)&pOVar1->__vtable + (int)*(short *)&pOVar1->__vtable[1].LevelInfoRequested,r,
             &this->fStackObject);
  (*(code *)pOVar1->__vtable[1].GetCurrentDialog)
            ((int)&pOVar1->__vtable + (int)*(short *)&pOVar1->__vtable[1].LevelInfoRequested,r,
             &this->fIconObject);
  ReconInt__11ReconBufferPii(r,&this->fTreeTabEntryIndex,1);
  Recon16__11ReconBufferPsi(r,this->fStackVars,4);
  ReconInt__11ReconBufferPii(r,&this->fPriority,1);
  Recon16__11ReconBufferPsi(r,&this->fTreeID,1);
  ReconFloat__11ReconBufferPfi(r,&this->fAttenuation,1);
  if (version < 0x3e) {
                    /* end of inlined section */
    ReconBool__11ReconBufferPb(r,&tmp);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
    uVar2 = this->fFlags & 0xfffffffb;
    this->fFlags = uVar2;
    if (_tmp != 0) {
      this->fFlags = uVar2 | 4;
    }
                    /* end of inlined section */
    ReconBool__11ReconBufferPb(r,&tmp);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
    uVar2 = this->fFlags & 0xffffffdf;
    this->fFlags = uVar2;
    if (_tmp != 0) {
      this->fFlags = uVar2 | 0x20;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
                    /* end of inlined section */
    if ((this->fFlags >> 2 & 1U) != 0) {
      ReconBool__11ReconBufferPb(r,&tmp);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
      uVar2 = this->fFlags & 0xfffffff7;
      this->fFlags = uVar2;
      if (_tmp != 0) {
        this->fFlags = uVar2 | 8;
      }
                    /* end of inlined section */
      ReconBool__11ReconBufferPb(r,&tmp);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
      uVar2 = this->fFlags & 0xffffffef;
      this->fFlags = uVar2;
      if (_tmp != 0) {
        this->fFlags = uVar2 | 0x10;
      }
    }
                    /* end of inlined section */
    if (version < 0x3c) {
      iVar3 = this->fID;
    }
    else {
      ReconBool__11ReconBufferPb(r,&tmp);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Interaction.h */
      uVar2 = this->fFlags & 0xfffffffd;
      this->fFlags = uVar2;
      if (_tmp != 0) {
        this->fFlags = uVar2 | 2;
      }
                    /* end of inlined section */
      iVar3 = this->fID;
    }
  }
  else {
    ReconInt__11ReconBufferPii(r,&this->fFlags,1);
    iVar3 = this->fID;
  }
  if (_11Interaction_sLastUniqueID < iVar3) {
    _11Interaction_sLastUniqueID = iVar3;
  }
  return;
}

cXObject* Interaction::GetStackObject() {
  cXObject__142_982 *pcVar1;
  
  pcVar1 = (cXObject__142_982 *)0x0;
  if (this->fStackObject != (cXObjectImpl__15_3423 *)0x0) {
    pcVar1 = (cXObject__142_982 *)this->fStackObject->_vb2008;
  }
  return pcVar1;
}

cXPerson* Interaction::GetPerson() {
  cXPerson__142_985 *pcVar1;
  
  pcVar1 = (cXPerson__142_985 *)0x0;
  if (this->fPerson != (cXPersonImpl__142_963 *)0x0) {
    pcVar1 = this->fPerson->_vb985;
  }
  return pcVar1;
}

cXObject* Interaction::GetIconObject() {
  cXObject__142_982 *pcVar1;
  
  pcVar1 = (cXObject__142_982 *)0x0;
  if (this->fIconObject != (cXObjectImpl__15_3423 *)0x0) {
    pcVar1 = (cXObject__142_982 *)this->fIconObject->_vb2008;
  }
  return pcVar1;
}

void Interaction::SetIconObject(cXObject *iconObj) {
	cXObject *this;
	
  cXObjectImpl__15_3423 *pcVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
  if (iconObj == (cXObject__142_982 *)0x0) {
                    /* end of inlined section */
    this->fIconObject = (cXObjectImpl__15_3423 *)0x0;
  }
  else {
    pcVar1 = (cXObjectImpl__15_3423 *)
             (*(code *)iconObj->__vtable[1].GetObjectImplementation)
                       ((int)&iconObj->_vb1019 + (int)*(short *)&iconObj->__vtable[1].AdvanceGraphic
                       );
    this->fIconObject = pcVar1;
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

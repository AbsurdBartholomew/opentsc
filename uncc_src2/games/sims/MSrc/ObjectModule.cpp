// STATUS: NOT STARTED

#include "ObjectModule.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb1093;
	__vtbl_ptr_type *$vf898;
	
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
struct TreeSimImpl : virtual TreeSim {
	TreeSim *$vb1093;
	Int fIterations;
	TreeStack fStack;
	Int fLastTrans;
	bool fLastResult;
	StdPrm *fAutoStackArea;
	SInt16 fError;
	__vtbl_ptr_type *$vf1300;
	
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
	TreeSimImpl *$vb1300;
	cXObject *$vb898;
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
	__vtbl_ptr_type *$vf1095;
	
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
struct cXPerson : virtual cXObject {
	cXObject *$vb898;
	static Int kSimTicksPerMotiveTick;
	__vtbl_ptr_type *$vf907;
	
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
struct cXPersonImpl : virtual cXPerson, virtual cXObjectImpl {
	cXObjectImpl *$vb1095;
	cXPerson *$vb907;
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

struct vector<cXObjectImpl *,__malloc_alloc_template<0> > {
protected:
	cXObjectImpl **start;
	cXObjectImpl **finish;
	cXObjectImpl **end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	cXObjectImpl** begin();
	cXObjectImpl** begin();
	cXObjectImpl** end();
	cXObjectImpl** end();
	reverse_iterator<cXObjectImpl **,cXObjectImpl *,cXObjectImpl *&,int> rbegin();
	reverse_iterator<cXObjectImpl *const *,cXObjectImpl *,cXObjectImpl *const &,int> rbegin();
	reverse_iterator<cXObjectImpl **,cXObjectImpl *,cXObjectImpl *&,int> rend();
	reverse_iterator<cXObjectImpl *const *,cXObjectImpl *,cXObjectImpl *const &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	cXObjectImpl*& operator[]();
	cXObjectImpl*& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<cXObjectImpl *,__malloc_alloc_template<0> >*, int, void);
	vector<cXObjectImpl *,__malloc_alloc_template<0> >& operator=();
	void reserve();
	cXObjectImpl*& front();
	cXObjectImpl*& front();
	cXObjectImpl*& back();
	cXObjectImpl*& back();
	void push_back();
	void swap();
	cXObjectImpl** insert();
	cXObjectImpl** insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct vector<cXPortal *,__malloc_alloc_template<0> > {
protected:
	cXPortal **start;
	cXPortal **finish;
	cXPortal **end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	cXPortal** begin();
	cXPortal** begin();
	cXPortal** end();
	cXPortal** end();
	reverse_iterator<cXPortal **,cXPortal *,cXPortal *&,int> rbegin();
	reverse_iterator<cXPortal *const *,cXPortal *,cXPortal *const &,int> rbegin();
	reverse_iterator<cXPortal **,cXPortal *,cXPortal *&,int> rend();
	reverse_iterator<cXPortal *const *,cXPortal *,cXPortal *const &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	cXPortal*& operator[]();
	cXPortal*& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<cXPortal *,__malloc_alloc_template<0> >*, int, void);
	vector<cXPortal *,__malloc_alloc_template<0> >& operator=();
	void reserve();
	cXPortal*& front();
	cXPortal*& front();
	cXPortal*& back();
	cXPortal*& back();
	void push_back();
	void swap();
	cXPortal** insert();
	cXPortal** insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct ObjectModuleImpl : ObjectModule, Commander {
	bool fInited;
	bool fPersonRelationshipsChanged;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > fObjectTable;
	vector<int,__malloc_alloc_template<0> > fIdleMap;
	cXObjectImpl *fFirst;
	cXObjectImpl *fLast;
	short int fObjectMap[64][64];
	vector<cXObjectImpl *,__malloc_alloc_template<0> > fDisablers;
	vector<short int,__malloc_alloc_template<0> > fKillQueue;
	SInt16 fAnimTesterObject;
	vector<cXPersonImpl *,__malloc_alloc_template<0> > fPeople;
	vector<cXPortal *,__malloc_alloc_template<0> > fPortals;
	vector<RoutingSlot,__malloc_alloc_template<0> > fGlobalRoutingSlots;
	cXObjectImpl *fTutorialObject;
	
	ObjectModuleImpl& operator=();
	ObjectModuleImpl();
	void KillOutOfWorldObject(SInt16 id, bool multiPart);
	void UpdateSimObjects();
	void RemoveObject(cXObject *_obj);
	SInt16 AddObject(cXObject *newObject, SInt16 id);
	cXObjectImpl* ConstructObject(ObjSelector *sel, cXMTObject *mtLead);
	ObjectModuleImpl();
	/* vtable[1] */ virtual ObjectModuleImpl(ObjectModuleImpl*, int, void);
	/* vtable[2] */ virtual void Init();
	/* vtable[3] */ virtual void Destroy();
	/* vtable[4] */ virtual ErrType Save(iResFile *pFile);
	/* vtable[5] */ virtual ErrType Load(iResFile *pFile);
	/* vtable[6] */ virtual void PostLoad(iResFile *pFile, SInt32 version);
	/* vtable[7] */ virtual ObjectFolder* GetFolder();
	/* vtable[8] */ virtual SInt16 AddObject();
	/* vtable[9] */ virtual SInt16 MakeNewOutOfWorldObject(ObjSelector *objSel);
	/* vtable[10] */ virtual void KillObject(SInt16 id);
	/* vtable[11] */ virtual void AddToKillQueue(SInt16 id, bool cleanup);
	/* vtable[12] */ virtual ErrType KillAllObjects();
	/* vtable[13] */ virtual ErrType KillObjectsInvalidatedByResize();
	/* vtable[14] */ virtual void UpdateRooms(int inLevel);
	/* vtable[15] */ virtual bool PostSim(bool paused);
	/* vtable[16] */ virtual void DayChanged();
	/* vtable[17] */ virtual cXObject* GetObjectFromID(Int id);
	/* vtable[18] */ virtual cXObject* GetFirst();
	/* vtable[19] */ virtual cXObject* GetObject(int iIndex);
	/* vtable[20] */ virtual int GetNumObjects();
	/* vtable[21] */ virtual bool CheckIntegrity();
	/* vtable[22] */ virtual bool IsFamilyMemberAwakeAndVisible();
	/* vtable[23] */ virtual Boolean DoCommand(SInt16 command, SInt32 info);
	/* vtable[24] */ virtual bool PreviewAnimation(SInt16 personID, SInt16 objectID, SInt16 animationID, bool backwards);
	/* vtable[25] */ virtual cSimulator* GetSim();
	/* vtable[26] */ virtual cXObject* GetObjectByGUID(SInt32 inGUID);
	/* vtable[27] */ virtual cXPerson* GetPersonByGUID(SInt32 guid);
	/* vtable[28] */ virtual void ForceAllLocations();
	/* vtable[29] */ virtual cXPerson* GetPeople(int iIndex);
	/* vtable[30] */ virtual int GetNumPeople();
	/* vtable[31] */ virtual cXPortal* GetPortal(int iIndex);
	/* vtable[32] */ virtual int GetNumPortals();
	/* vtable[33] */ virtual cXPerson* GetSelectedPerson();
	/* vtable[34] */ virtual void SetSelectedPerson(cXPerson *newSelection);
	/* vtable[35] */ virtual cXPerson* AdvanceSelectedPerson();
	/* vtable[36] */ virtual void CleanupPeople(cXObject *respect);
	/* vtable[37] */ virtual void LevelInfoRequested();
	/* vtable[38] */ virtual EDialog* GetCurrentDialog(cXObject *obj);
	/* vtable[39] */ virtual void EnqueueObjectDialog(ObjSelector *sel, DialogParam *param);
	/* vtable[40] */ virtual void EnqueueObjectDialog();
	/* vtable[41] */ virtual RoutingSlot& GetGlobalRoutingSlot(int iIndex);
	/* vtable[42] */ virtual int GetNumGlobalRoutineSlots();
	/* vtable[43] */ virtual void SendMessage(cXObject *obj, char *message, int param);
	/* vtable[44] */ virtual void BroadcastMessage(char *message, int param);
	/* vtable[45] */ virtual void UpdateWallAdjacencies();
	/* vtable[46] */ virtual void InvalidateAllRoutes();
	/* vtable[47] */ virtual void SkillAccessed(cXPerson *person, Int skillIndex, bool writing);
	/* vtable[48] */ virtual void MotiveAccessed(cXPerson *person, Int motiveIndex, bool writing);
	/* vtable[49] */ virtual void PersonalityAccessed(cXPerson *person, Int personalityIndex, bool writing);
	/* vtable[50] */ virtual void RelationshipAccessed(Neighbor *from, Neighbor *to, Int relIndex, bool writing);
	/* vtable[51] */ virtual void RelationshipAccessed();
	/* vtable[52] */ virtual void OffsetWorld(CTilePt &inOffset);
	/* vtable[53] */ virtual void DoStream(ReconBuffer *r, SInt32 version);
	/* vtable[54] */ virtual void DoReconObject(ReconBuffer *r, cXObjectImpl **obj);
	/* vtable[55] */ virtual void DoReconPerson(ReconBuffer *r, cXPersonImpl **p);
	/* vtable[56] */ virtual cXObject* GetTutorialObject();
	/* vtable[57] */ virtual int SetTutorialObject(cXObject *_obj);
	/* vtable[58] */ virtual void ShowTutorialInfo();
	/* vtable[59] */ virtual void ComputeStats(SInt32 *familyObjectsValue, SInt32 *lotObjectsValue, bool *outHasPhone, bool *outHasBaby, bool *hasUserPlacedObjects);
	/* vtable[60] */ virtual void FillInObjectStats(RoomManager *rmMgr, HouseStats &hs);
	/* vtable[61] */ virtual void DisableBuyAndBuild(cXObject *disabler);
	/* vtable[62] */ virtual void EnableBuyAndBuild(cXObject *enabler);
	/* vtable[63] */ virtual bool IsBuyAndBuildDisabled();
	/* vtable[64] */ virtual void SetIdleStatus(int id, int ticks);
	/* vtable[65] */ virtual void ClearIdleStatus(int id);
	/* vtable[66] */ virtual int GetIdleStatus(int id);
	/* vtable[67] */ virtual void SetSimFlag(int id, SimFlag flag0, bool on);
	/* vtable[68] */ virtual bool GetSimFlag(int id, SimFlag flag);
	/* vtable[69] */ virtual SInt16 GetTileObjectID(CTilePt &in);
	/* vtable[70] */ virtual void SetTileObjectID(CTilePt &in, SInt16 objID);
	void killDemolishedObjects(iResFile *pFile);
};

// warning: multiple differing types with the same name (name not equal)
struct cXMTObject : virtual cXObject {
	cXObject *$vb898;
	__vtbl_ptr_type *$vf2848;
	
	cXMTObject& operator=();
	cXMTObject();
protected:
	cXMTObject();
	/* vtable[1] */ virtual cXMTObject(cXMTObject*, int, void);
	void setMTObjectImpl();
	void setCursorObjectImpl();
	void setPortalImpl();
public:
	/* vtable[1] */ virtual void Initialize();
	/* vtable[2] */ virtual cXMTObject* GetFirstMultiTileObject();
	/* vtable[3] */ virtual cXMTObject* GetNextMultiTileObject();
	/* vtable[32] */ virtual void Pickup();
	/* vtable[33] */ virtual bool CanPlace();
	/* vtable[34] */ virtual void Place();
	/* vtable[4] */ virtual void Reset();
	/* vtable[5] */ virtual void AssignOffsets();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[6] */ virtual void PostLoad(cXMTObject*, int, void);
	/* vtable[7] */ virtual void SetMultiObjectData();
	/* vtable[8] */ virtual void DirtyAll();
	/* vtable[9] */ virtual bool IsDynamic();
	/* vtable[10] */ virtual void MergeInPlace();
	/* vtable[11] */ virtual void RemoveFromDynamic();
	/* vtable[12] */ virtual cXMTObjectImpl* GetMTObjectImplementation();
	cXMTObjectImpl* CAST_IMPL();
};

// warning: multiple differing types with the same name (name not equal)
struct cXPortal : virtual cXMTObject {
	cXMTObject *$vb2848;
	__vtbl_ptr_type *$vf910;
	
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
struct cXMTObjectImpl : virtual cXMTObject, virtual cXObjectImpl {
	cXObjectImpl *$vb1095;
	cXMTObject *$vb2848;
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
struct cXPortalImpl : virtual cXPortal, virtual cXMTObjectImpl {
	cXMTObjectImpl *$vb1099;
	cXPortal *$vb910;
	vector<float,__malloc_alloc_template<0> > fRouteScoreTable;
	
	cXPortalImpl& operator=();
	cXPortalImpl(int __in_chrg, ObjSelector *selector, cXMTObject *leader, ObjectModule *module);
	/* vtable[1] */ virtual cXPortalImpl(cXPortalImpl*, int, void);
	void SetRouteScore(StdPrm routeID, float score);
	float GetRouteScore(StdPrm routeID);
	static StdPrm FindAvailRouteID(/* parameters unknown */);
	static void ClearRoute(/* parameters unknown */);
	float GetDistToPortal(cXPortal *other);
	void ApplyWallStyle(bool refreshMgr);
	cXPortalImpl();
	/* vtable[34] */ virtual void Place(FTilePt &newLoc, Int inLevel, cXObject *ontop, Int slotNum);
	/* vtable[33] */ virtual bool CanPlace(FTilePt &newLoc, Int inLevel, cXObject *ontop, Int slotNum);
	/* vtable[32] */ virtual void Pickup();
	/* vtable[1] */ virtual void Initialize();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[130] */ virtual void ReconStream(ReconBuffer *r, SInt32 version, bool placeHolder);
	/* vtable[6] */ virtual void PostLoad(SInt32 version);
	/* vtable[1] */ virtual cXPortal* GetOtherSide();
	/* vtable[14] */ virtual int GetDynamicToStaticLatency();
	/* vtable[2] */ virtual WallStyle GetWallStyle();
	/* vtable[3] */ virtual int GetCustomWallStyleID();
	/* vtable[4] */ virtual cXPortalImpl* GetPortalImplementation();
};

// warning: multiple differing types with the same name (name not equal)
struct cXCursorObject : virtual cXMTObject {
	cXMTObject *$vb2848;
	__vtbl_ptr_type *$vf3011;
	
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
struct cXCursorObjectImpl : virtual cXCursorObject, virtual cXMTObjectImpl {
	cXMTObjectImpl *$vb1099;
	cXCursorObject *$vb3011;
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

struct simple_alloc<cXObjectImpl *,__malloc_alloc_template<0> > {
	simple_alloc<cXObjectImpl *,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static cXObjectImpl** allocate(/* parameters unknown */);
	static cXObjectImpl** allocate(/* parameters unknown */);
	static cXObjectImpl** allocate(/* parameters unknown */);
	static cXObjectImpl** allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct simple_alloc<cXPortal *,__malloc_alloc_template<0> > {
	simple_alloc<cXPortal *,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static cXPortal** allocate(/* parameters unknown */);
	static cXPortal** allocate(/* parameters unknown */);
	static cXPortal** allocate(/* parameters unknown */);
	static cXPortal** allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct SimpleReconObject<ObjectModuleImpl> : ReconObject {
private:
	ObjectModuleImpl *fObj;
	SInt32 fType;
	
public:
	SimpleReconObject<ObjectModuleImpl>& operator=();
	SimpleReconObject();
	/* vtable[1] */ virtual SimpleReconObject(SimpleReconObject<ObjectModuleImpl>*, int, void);
	SimpleReconObject();
	/* vtable[2] */ virtual void DoStream(ReconBuffer *r, SInt32 version);
	/* vtable[3] */ virtual SInt32 GetType();
};

int gAllowVisitorControl = 0;

__vtbl_ptr_type SimpleReconObject<ObjectModuleImpl> virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<ObjectModuleImpl>::~SimpleReconObject,
		/* .__delta2 = */ -22304
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<ObjectModuleImpl>::DoStream,
		/* .__delta2 = */ -22272
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<ObjectModuleImpl>::GetType,
		/* .__delta2 = */ -22224
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ObjectModuleImpl::Commander virtual table[4] = {
	/* [0] = */ {
		/* .__delta = */ -4,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -4,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::~ObjectModuleImpl,
		/* .__delta2 = */ 20048
	},
	/* [2] = */ {
		/* .__delta = */ -4,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::DoCommand,
		/* .__delta2 = */ 31280
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ObjectModuleImpl virtual table[72] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::~ObjectModuleImpl,
		/* .__delta2 = */ 20048
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::Init,
		/* .__delta2 = */ 23960
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::Destroy,
		/* .__delta2 = */ 24224
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::Save,
		/* .__delta2 = */ 20856
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::Load,
		/* .__delta2 = */ 21104
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::PostLoad,
		/* .__delta2 = */ 22096
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::GetFolder,
		/* .__delta2 = */ -22640
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::AddObject,
		/* .__delta2 = */ -22624
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::MakeNewOutOfWorldObject,
		/* .__delta2 = */ 25192
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::KillObject,
		/* .__delta2 = */ 27384
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::AddToKillQueue,
		/* .__delta2 = */ 30536
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::KillAllObjects,
		/* .__delta2 = */ 28976
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::KillObjectsInvalidatedByResize,
		/* .__delta2 = */ 29184
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::UpdateRooms,
		/* .__delta2 = */ 28312
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::PostSim,
		/* .__delta2 = */ 27616
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::DayChanged,
		/* .__delta2 = */ 28200
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::GetObjectFromID,
		/* .__delta2 = */ -26592
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::GetFirst,
		/* .__delta2 = */ -22584
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::GetObject,
		/* .__delta2 = */ -22560
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::GetNumObjects,
		/* .__delta2 = */ -22520
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::CheckIntegrity,
		/* .__delta2 = */ -31240
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::IsFamilyMemberAwakeAndVisible,
		/* .__delta2 = */ 31112
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::DoCommand,
		/* .__delta2 = */ 31280
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::PreviewAnimation,
		/* .__delta2 = */ 31824
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::GetSim,
		/* .__delta2 = */ -22496
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::GetObjectByGUID,
		/* .__delta2 = */ 24528
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::GetPersonByGUID,
		/* .__delta2 = */ 24712
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::ForceAllLocations,
		/* .__delta2 = */ 32240
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::GetPeople,
		/* .__delta2 = */ -22480
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::GetNumPeople,
		/* .__delta2 = */ -22440
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::GetPortal,
		/* .__delta2 = */ -22416
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::GetNumPortals,
		/* .__delta2 = */ -22392
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::GetSelectedPerson,
		/* .__delta2 = */ -27184
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::SetSelectedPerson,
		/* .__delta2 = */ -27304
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::AdvanceSelectedPerson,
		/* .__delta2 = */ -27240
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::CleanupPeople,
		/* .__delta2 = */ -30632
	},
	/* [37] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::LevelInfoRequested,
		/* .__delta2 = */ -30472
	},
	/* [38] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::GetCurrentDialog,
		/* .__delta2 = */ -30352
	},
	/* [39] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::EnqueueObjectDialog,
		/* .__delta2 = */ -30344
	},
	/* [40] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::EnqueueObjectDialog,
		/* .__delta2 = */ -30336
	},
	/* [41] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::GetGlobalRoutingSlot,
		/* .__delta2 = */ -22368
	},
	/* [42] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::GetNumGlobalRoutineSlots,
		/* .__delta2 = */ -22352
	},
	/* [43] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::SendMessage,
		/* .__delta2 = */ -30168
	},
	/* [44] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::BroadcastMessage,
		/* .__delta2 = */ -30328
	},
	/* [45] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::UpdateWallAdjacencies,
		/* .__delta2 = */ -29992
	},
	/* [46] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::InvalidateAllRoutes,
		/* .__delta2 = */ -29872
	},
	/* [47] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::SkillAccessed,
		/* .__delta2 = */ -29752
	},
	/* [48] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::MotiveAccessed,
		/* .__delta2 = */ -29744
	},
	/* [49] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::PersonalityAccessed,
		/* .__delta2 = */ -29736
	},
	/* [50] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::RelationshipAccessed,
		/* .__delta2 = */ -29728
	},
	/* [51] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::RelationshipAccessed,
		/* .__delta2 = */ -29720
	},
	/* [52] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::OffsetWorld,
		/* .__delta2 = */ -29600
	},
	/* [53] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::DoStream,
		/* .__delta2 = */ 22792
	},
	/* [54] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::DoReconObject,
		/* .__delta2 = */ 22432
	},
	/* [55] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::DoReconPerson,
		/* .__delta2 = */ 22640
	},
	/* [56] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::GetTutorialObject,
		/* .__delta2 = */ -28640
	},
	/* [57] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::SetTutorialObject,
		/* .__delta2 = */ -28616
	},
	/* [58] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::ShowTutorialInfo,
		/* .__delta2 = */ -28496
	},
	/* [59] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::ComputeStats,
		/* .__delta2 = */ -28432
	},
	/* [60] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::FillInObjectStats,
		/* .__delta2 = */ -27776
	},
	/* [61] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::DisableBuyAndBuild,
		/* .__delta2 = */ -31720
	},
	/* [62] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::EnableBuyAndBuild,
		/* .__delta2 = */ -31520
	},
	/* [63] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::IsBuyAndBuildDisabled,
		/* .__delta2 = */ -22328
	},
	/* [64] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::SetIdleStatus,
		/* .__delta2 = */ -26656
	},
	/* [65] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::ClearIdleStatus,
		/* .__delta2 = */ -27040
	},
	/* [66] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::GetIdleStatus,
		/* .__delta2 = */ -26680
	},
	/* [67] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::SetSimFlag,
		/* .__delta2 = */ -26792
	},
	/* [68] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::GetSimFlag,
		/* .__delta2 = */ -26720
	},
	/* [69] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::GetTileObjectID,
		/* .__delta2 = */ -26512
	},
	/* [70] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModuleImpl::SetTileObjectID,
		/* .__delta2 = */ -26392
	},
	/* [71] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ObjectModule virtual table[72] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjectModule::~ObjectModule,
		/* .__delta2 = */ -22688
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ObjectModule* ObjectModule::CreateInstance() {
  ObjectModuleImpl *pOVar1;
  
  pOVar1 = (ObjectModuleImpl *)__builtin_new(0x2080);
  pOVar1 = __16ObjectModuleImpl(pOVar1);
  return &pOVar1->field0_0x0;
}

void ObjectModule::DestroyInstance(ObjectModule *pInstance) {
  if (pInstance != (ObjectModule *)0x0) {
    (*(code *)pInstance->__vtable->Destroy)
              ((int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Init,3);
  }
  return;
}

void* TreeSim::_dyncastimpl(SCID id) {
	void *result;
	
  cXPersonImpl__142_963 *pcVar1;
  
  switch(id) {
  case TreeSimID:
  case cXObjectID:
    pcVar1 = (cXPersonImpl__142_963 *)this->m_pObject;
    break;
  case cXPersonID:
    pcVar1 = this->m_pPerson;
    break;
  case cXMTObjectID:
    pcVar1 = (cXPersonImpl__142_963 *)this->m_pMTObject;
    break;
  case cXCursorObjectID:
    pcVar1 = (cXPersonImpl__142_963 *)this->m_pCursorObject;
    break;
  case cXPortalID:
    pcVar1 = (cXPersonImpl__142_963 *)this->m_pPortal;
    break;
  case cXPersonImplID:
    return this->m_pPerson;
  case cXMTObjectImplID:
    return this->m_pMTObject;
  case cXCursorObjectImplID:
    return this->m_pCursorObject;
  case cXObjectImplID:
    return this->m_pObject;
  case cXPortalImplID:
    return this->m_pPortal;
  default:
    goto switchD_00234d04_caseD_b;
  }
  if (pcVar1 != (cXPersonImpl__142_963 *)0x0) {
    return (cXPortal__184_1099 *)pcVar1->_vb985;
  }
switchD_00234d04_caseD_b:
  return (void *)0x0;
}

ObjectModuleImpl* ObjectModuleImpl::ObjectModuleImpl() {
	ObjectModule *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<short int,__malloc_alloc_template<0> > *this;
	vector<cXPersonImpl *,__malloc_alloc_template<0> > *this;
	vector<cXPortal *,__malloc_alloc_template<0> > *this;
	vector<RoutingSlot,__malloc_alloc_template<0> > *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectModule.h */
                    /* end of inlined section */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (ObjectModule__vtable *)_vt_12ObjectModule;
  __9Commander((Commander *)&this->field_0x4);
  *(__vtbl_ptr_type **)&this->field_0x10 = _vt_16ObjectModuleImpl_9Commander;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (ObjectModule__vtable *)_vt_16ObjectModuleImpl;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  *(undefined4 *)&this->field_0x1c = 0;
  *(undefined4 *)&this->field_0x24 = 0;
  *(undefined4 *)&this->field_0x20 = 0;
  (this->fIdleMap).start = (int *)0x0;
  (this->fIdleMap).end_of_storage = (int *)0x0;
  (this->fIdleMap).finish = (int *)0x0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  (this->fDisablers).start = (cXObjectImpl__128_1095 **)0x0;
  (this->fDisablers).end_of_storage = (cXObjectImpl__128_1095 **)0x0;
  (this->fDisablers).finish = (cXObjectImpl__128_1095 **)0x0;
  (this->fKillQueue).start = (ushort *)0x0;
  (this->fKillQueue).end_of_storage = (ushort *)0x0;
  (this->fKillQueue).finish = (ushort *)0x0;
  (this->fPeople).start = (cXPersonImpl__123_903 **)0x0;
  (this->fPeople).end_of_storage = (cXPersonImpl__123_903 **)0x0;
  (this->fPeople).finish = (cXPersonImpl__123_903 **)0x0;
  (this->fPortals).start = (cXPortal__128_910 **)0x0;
  (this->fPortals).end_of_storage = (cXPortal__128_910 **)0x0;
  (this->fPortals).finish = (cXPortal__128_910 **)0x0;
  (this->fGlobalRoutingSlots).start = (RoutingSlot *)0x0;
  (this->fGlobalRoutingSlots).end_of_storage = (RoutingSlot *)0x0;
  (this->fGlobalRoutingSlots).finish = (RoutingSlot *)0x0;
                    /* end of inlined section */
  *(undefined4 *)&this->fInited = 0;
  this->fFirst = (cXObjectImpl__128_1095 *)0x0;
  this->fLast = (cXObjectImpl__128_1095 *)0x0;
  this->fAnimTesterObject = 0;
  this->fTutorialObject = (cXObjectImpl__128_1095 *)0x0;
  *(undefined4 *)&this->fPersonRelationshipsChanged = 0;
  return this;
}

void ObjectModuleImpl::~ObjectModuleImpl(int __in_chrg) {
	vector<RoutingSlot,__malloc_alloc_template<0> > *this;
	RoutingSlot *last;
	RoutingSlot *first;
	RoutingSlot *pointer;
	vector<RoutingSlot,__malloc_alloc_template<0> > *this;
	void *pAddress;
	vector<cXPortal *,__malloc_alloc_template<0> > *this;
	cXPortal **last;
	cXPortal **first;
	cXPortal **pointer;
	vector<cXPortal *,__malloc_alloc_template<0> > *this;
	void *pAddress;
	cXPersonImpl **last;
	cXPersonImpl **first;
	cXPersonImpl **pointer;
	SInt16 *last;
	SInt16 *first;
	SInt16 *pointer;
	cXObjectImpl **last;
	cXObjectImpl **first;
	cXObjectImpl **pointer;
	int *last;
	int *first;
	int *pointer;
	cXObjectImpl **last;
	cXObjectImpl **first;
	cXObjectImpl **pointer;
	ObjectModule *this;
	int __in_chrg;
	void *pAddress;
	
  RoutingSlot *pRVar1;
  cXPersonImpl__123_903 **ppcVar2;
  ushort *puVar3;
  cXObjectImpl__128_1095 **ppcVar4;
  int *piVar5;
  Slot__vtable *pSVar6;
  cXPortal__128_910 **ppcVar7;
  cXPersonImpl__123_903 **ppcVar8;
  ushort *puVar9;
  cXObjectImpl__128_1095 **ppcVar10;
  int *piVar11;
  int iVar12;
  void *pAddress;
  RoutingSlot *pRVar13;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  *(__vtbl_ptr_type **)&this->field_0x10 = _vt_16ObjectModuleImpl_9Commander;
  (this->field0_0x0).__vtable = (ObjectModule__vtable *)_vt_16ObjectModuleImpl;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pRVar13 = (this->fGlobalRoutingSlots).start;
  pRVar1 = (this->fGlobalRoutingSlots).finish;
  if (pRVar13 != pRVar1) {
    pSVar6 = (pRVar13->field0_0x0).__vtable;
    while( true ) {
      (*(code *)pSVar6[1].Slot)((int)pRVar13->multipliers + *(short *)(pSVar6 + 1) + -0x14,2);
      if (pRVar13 + 1 == pRVar1) break;
      pSVar6 = pRVar13[1].field0_0x0.__vtable;
      pRVar13 = pRVar13 + 1;
    }
  }
  pRVar13 = (this->fGlobalRoutingSlots).start;
  if ((pRVar13 != (RoutingSlot *)0x0) &&
     ((int)(this->fGlobalRoutingSlots).end_of_storage - (int)pRVar13 >> 6 != 0)) {
    free(pRVar13);
  }
  for (ppcVar7 = (this->fPortals).start; ppcVar7 != (this->fPortals).finish; ppcVar7 = ppcVar7 + 1)
  {
  }
  ppcVar7 = (this->fPortals).start;
  if (ppcVar7 == (cXPortal__128_910 **)0x0) {
    ppcVar8 = (this->fPeople).start;
  }
  else if ((int)(this->fPortals).end_of_storage - (int)ppcVar7 >> 2 == 0) {
    ppcVar8 = (this->fPeople).start;
  }
  else {
    free(ppcVar7);
    ppcVar8 = (this->fPeople).start;
  }
  ppcVar2 = (this->fPeople).finish;
  if (ppcVar8 == ppcVar2) {
    ppcVar8 = (this->fPeople).start;
  }
  else {
    do {
      ppcVar8 = ppcVar8 + 1;
    } while (ppcVar8 != ppcVar2);
    ppcVar8 = (this->fPeople).start;
  }
  if (ppcVar8 == (cXPersonImpl__123_903 **)0x0) {
    puVar9 = (this->fKillQueue).start;
  }
  else if ((int)(this->fPeople).end_of_storage - (int)ppcVar8 >> 2 == 0) {
    puVar9 = (this->fKillQueue).start;
  }
  else {
    free(ppcVar8);
    puVar9 = (this->fKillQueue).start;
  }
  puVar3 = (this->fKillQueue).finish;
  if (puVar9 == puVar3) {
    puVar9 = (this->fKillQueue).start;
  }
  else {
    do {
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar3);
    puVar9 = (this->fKillQueue).start;
  }
  if (puVar9 == (ushort *)0x0) {
    ppcVar10 = (this->fDisablers).start;
  }
  else if ((int)(this->fKillQueue).end_of_storage - (int)puVar9 >> 1 == 0) {
    ppcVar10 = (this->fDisablers).start;
  }
  else {
    free(puVar9);
    ppcVar10 = (this->fDisablers).start;
  }
  ppcVar4 = (this->fDisablers).finish;
  if (ppcVar10 == ppcVar4) {
    ppcVar10 = (this->fDisablers).start;
  }
  else {
    do {
      ppcVar10 = ppcVar10 + 1;
    } while (ppcVar10 != ppcVar4);
    ppcVar10 = (this->fDisablers).start;
  }
  if (ppcVar10 == (cXObjectImpl__128_1095 **)0x0) {
    piVar11 = (this->fIdleMap).start;
  }
  else if ((int)(this->fDisablers).end_of_storage - (int)ppcVar10 >> 2 == 0) {
    piVar11 = (this->fIdleMap).start;
  }
  else {
    free(ppcVar10);
    piVar11 = (this->fIdleMap).start;
  }
  piVar5 = (this->fIdleMap).finish;
  if (piVar11 == piVar5) {
    piVar11 = (this->fIdleMap).start;
  }
  else {
    do {
      piVar11 = piVar11 + 1;
    } while (piVar11 != piVar5);
    piVar11 = (this->fIdleMap).start;
  }
  if (piVar11 == (int *)0x0) {
    iVar12 = *(int *)&this->field_0x1c;
  }
  else if ((int)(this->fIdleMap).end_of_storage - (int)piVar11 >> 2 == 0) {
    iVar12 = *(int *)&this->field_0x1c;
  }
  else {
    free(piVar11);
    iVar12 = *(int *)&this->field_0x1c;
  }
  if (iVar12 == *(int *)&this->field_0x20) {
    pAddress = *(void **)&this->field_0x1c;
  }
  else {
    do {
      iVar12 = iVar12 + 4;
    } while (iVar12 != *(int *)&this->field_0x20);
    pAddress = *(void **)&this->field_0x1c;
  }
  if ((pAddress != (void *)0x0) && (*(int *)&this->field_0x24 - (int)pAddress >> 2 != 0)) {
    free(pAddress);
                    /* end of inlined section */
  }
  ___9Commander((Commander *)&this->field_0x4,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectModule.h */
  (this->field0_0x0).__vtable = (ObjectModule__vtable *)_vt_12ObjectModule;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

ErrType ObjectModuleImpl::Save(iResFile *pFile) {
	int version;
	cXObjectImpl *obj;
	ErrType err;
	ResourceName dummy;
	
  cXObjectImpl__128_1095__vtable *pcVar1;
  int iVar2;
  cXObjectImpl__128_1095 *pcVar3;
  StackString_64_ dummy;
  
  iVar2 = _5Globs_iSaveFileVersion;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pObjectFolder->__vtable[1].GetNextSelector)
            ((int)&_5Globs_pObjectFolder->__vtable +
             (int)*(short *)&_5Globs_pObjectFolder->__vtable[1].CountSelectors);
  pcVar3 = this->fFirst;
  if (pcVar3 != (cXObjectImpl__128_1095 *)0x0) {
    pcVar1 = pcVar3->__vtable;
    while( true ) {
      (*(code *)pcVar1->SetRenderLayer)((int)pcVar3->fTemp + *(short *)&pcVar1->Dirty + -0x16);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectImpl.h */
      pcVar3 = pcVar3->fNext;
                    /* end of inlined section */
      if (pcVar3 == (cXObjectImpl__128_1095 *)0x0) break;
      pcVar1 = pcVar3->__vtable;
    }
  }
  iVar2 = ReconSaveObject__H1Z16ObjectModuleImpl_PX01P8iResFileisi_i(this,pFile,0x4f626a4d,1,iVar2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  __12StringBufferPcUi(&dummy.field0_0x0,dummy.fChars,0x40);
                    /* end of inlined section */
  (*(code *)pFile->__vtable[1].FindUniqueID)
            ((int)&pFile->fNextFile + (int)*(short *)&pFile->__vtable[1].FindUniqueName,0,0x44554d50
             ,1,&dummy,1);
  return iVar2;
}

ErrType ObjectModuleImpl::Load(iResFile *pFile) {
	SInt32 version;
	ErrType err;
	cXObjectImpl *srch;
	CTilePt objLoc;
	u32 x;
	u32 y;
	
  short sVar1;
  ObjectFolder__vtable *pOVar2;
  ObjectModule__vtable *pOVar3;
  cXObject__128_898 *pcVar4;
  cXObject__128_898__vtable *pcVar5;
  ObjectFolder *pOVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  cXObjectImpl__128_1095 *pcVar12;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  CTilePt objLoc;
  int version;
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
  
  pOVar6 = _5Globs_pObjectFolder;
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pObjectFolder->__vtable->GetLeadSelector)
            ((int)&_5Globs_pObjectFolder->__vtable +
             (int)*(short *)&_5Globs_pObjectFolder->__vtable->GetSubTileSelector);
  pOVar2 = pOVar6->__vtable;
  (*(code *)pOVar2[1].ReconBehavior)
            ((int)&pOVar6->__vtable + (int)*(short *)&pOVar2[1].ReconSelector,pFile);
  pOVar3 = (this->field0_0x0).__vtable;
  (*(code *)pOVar3->GetSim)((int)this->fObjectMap[-1] + *(short *)&pOVar3->PreviewAnimation + 0x44);
  iVar7 = ReconLoadObject__H1Z16ObjectModuleImpl_PX01P8iResFileisPi_i
                    (this,pFile,0x4f626a4d,1,&version);
  memset(this->fObjectMap,0,0x2000);
  pcVar12 = this->fFirst;
  if (pcVar12 != (cXObjectImpl__128_1095 *)0x0) {
    pcVar4 = pcVar12->_vb898;
    while( true ) {
      (*(code *)pcVar4->__vtable[1].TestIntersection)
                (&objLoc,(int)&pcVar4->_vb1093 + (int)*(short *)&pcVar4->__vtable[1].IsInWorld);
      uVar8 = GetX__C7CTilePt(&objLoc);
      uVar9 = GetY__C7CTilePt(&objLoc);
      if (((uVar8 < 0x40) && (uVar9 < 0x40)) &&
         (pcVar5 = pcVar12->_vb898->__vtable,
         lVar10 = (*(code *)pcVar5->ReconType)
                            ((int)&pcVar12->_vb898->_vb1093 + (int)*(short *)&pcVar5->ReconStream,
                             0x1a), lVar10 == 0)) {
        pOVar3 = (this->field0_0x0).__vtable;
        pcVar5 = pcVar12->_vb898->__vtable;
        sVar1 = *(short *)&pOVar3[1].GetTileObjectID;
        uVar11 = (*(code *)pcVar5[1].UserCanPlace)
                           ((int)&pcVar12->_vb898->_vb1093 + (int)*(short *)&pcVar5[1].IsPartOfMe);
        (*(code *)pOVar3[1].SetTileObjectID)
                  ((int)this->fObjectMap[-1] + sVar1 + 0x44,&objLoc,uVar11);
      }
      ___7CTilePt(&objLoc,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectImpl.h */
      pcVar12 = pcVar12->fNext;
                    /* end of inlined section */
      if (pcVar12 == (cXObjectImpl__128_1095 *)0x0) break;
      pcVar4 = pcVar12->_vb898;
    }
  }
  if (iVar7 == 0) {
    UpdateSimObjects__16ObjectModuleImpl(this);
    pOVar3 = (this->field0_0x0).__vtable;
    (*(code *)pOVar3->SendMessage)
              ((int)this->fObjectMap[-1] + *(short *)&pOVar3->GetNumGlobalRoutineSlots + 0x44);
  }
  *(undefined4 *)&this->fPersonRelationshipsChanged = 1;
  return iVar7;
}

void ObjectModuleImpl::killDemolishedObjects(iResFile *pFile) {
	HandleNode *handle;
	vector<short int,__malloc_alloc_template<0> > killList;
	HandleNode *mem;
	int iSize;
	int i;
	HandleNode *mem;
	HandleNode *mem;
	cXObjectImpl *obj;
	SInt32 guid;
	SInt16 &x;
	short int &value;
	HandleNode *mem;
	HandleNode *h;
	int i;
	unsigned int n;
	unsigned int n;
	vector<short int,__malloc_alloc_template<0> > *this;
	SInt16 *last;
	SInt16 *first;
	SInt16 *pointer;
	vector<short int,__malloc_alloc_template<0> > *this;
	void *pAddress;
	
  int *piVar1;
  cXObject__128_898 *pcVar2;
  cXObject__128_898__vtable *pcVar3;
  ObjectModule__vtable *pOVar4;
  ushort *puVar5;
  uint *puVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  undefined8 unaff_s0;
  int *piVar11;
  undefined8 unaff_s1;
  cXObjectImpl__128_1095 *pcVar12;
  int iVar13;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  vector_short_int___malloc_alloc_template_0___ killList;
  ushort local_90 [8];
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
  
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s6;
  uStack_1c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_30 = (undefined4)unaff_s5;
  uStack_2c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  lVar8 = (*(code *)pFile->__vtable->Write)
                    ((int)&pFile->fNextFile + (int)*(short *)&pFile->__vtable->AddWithLanguage,
                     0x44554d50,1,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  killList.start = (ushort *)0x0;
  uVar9 = 0;
  killList.finish = (ushort *)0x0;
  killList.end_of_storage = (ushort *)0x0;
  puVar6 = (uint *)lVar8;
  if (lVar8 != 0) {
    uVar9 = *puVar6;
  }
                    /* end of inlined section */
  if (uVar9 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
    piVar1 = (int *)puVar6[1];
    uVar9 = 0;
    if (lVar8 != 0) {
      uVar9 = *puVar6;
    }
                    /* end of inlined section */
    pcVar12 = this->fFirst;
    if (pcVar12 != (cXObjectImpl__128_1095 *)0x0) {
      pcVar2 = pcVar12->_vb898;
      while( true ) {
        iVar7 = (*(code *)pcVar2->__vtable[1].HandleError)
                          ((int)&pcVar2->_vb1093 + (int)*(short *)&pcVar2->__vtable[1].Error);
        iVar7 = *(int *)(iVar7 + 0x1c);
        piVar11 = piVar1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          if (*piVar11 == iVar7) {
            pcVar3 = pcVar12->_vb898->__vtable;
            local_90[0] = (*(code *)pcVar3[1].UserCanPlace)
                                    ((int)&pcVar12->_vb898->_vb1093 +
                                     (int)*(short *)&pcVar3[1].IsPartOfMe);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
            if (killList.finish == killList.end_of_storage) {
              insert_aux__t6vector2ZsZt23__malloc_alloc_template1i0PsRCs
                        (&killList,killList.finish,local_90);
            }
            else {
              *killList.finish = local_90[0];
              killList.finish = killList.finish + 1;
            }
          }
          piVar11 = piVar11 + 1;
        }
        pcVar12 = pcVar12->fNext;
        if (pcVar12 == (cXObjectImpl__128_1095 *)0x0) break;
        pcVar2 = pcVar12->_vb898;
      }
    }
  }
                    /* end of inlined section */
  iVar7 = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  iVar13 = (int)killList.finish - (int)killList.start >> 1;
                    /* end of inlined section */
  puVar5 = killList.start;
  if (0 < iVar13) {
    do {
      pOVar4 = (this->field0_0x0).__vtable;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      lVar8 = (*(code *)pOVar4->AdvanceSelectedPerson)
                        ((int)this->fObjectMap[-1] + *(short *)&pOVar4->SetSelectedPerson + 0x44,
                         killList.start[iVar7]);
      if (lVar8 != 0) {
        pOVar4 = (this->field0_0x0).__vtable;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
        (*(code *)pOVar4->CheckIntegrity)
                  ((int)this->fObjectMap[-1] + *(short *)&pOVar4->GetNumObjects + 0x44,
                   killList.start[iVar7]);
      }
      iVar7 = iVar7 + 1;
      puVar5 = killList.start;
    } while (iVar7 < iVar13);
  }
  for (; puVar5 != killList.finish; puVar5 = puVar5 + 1) {
  }
  if ((killList.start != (ushort *)0x0) &&
     ((int)killList.end_of_storage - (int)killList.start >> 1 != 0)) {
    free(killList.start);
  }
  return;
}

void ObjectModuleImpl::PostLoad(iResFile *pFile, SInt32 version) {
	Family *family;
	int n;
	cXObjectImpl *srch;
	int j;
	cXPerson *newSel;
	
  short sVar1;
  ObjectModule__vtable *pOVar2;
  cXObjectImpl__128_1095__vtable *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  long lVar7;
  cXObjectImpl__128_1095 *pcVar8;
  int iVar9;
  
  pcVar8 = this->fFirst;
  if (pcVar8 != (cXObjectImpl__128_1095 *)0x0) {
    pcVar3 = pcVar8->__vtable;
    while( true ) {
      (*(code *)pcVar3->UpdateSimFlags)
                ((int)pcVar8->fTemp + *(short *)&pcVar3->GetMiscFlag + -0x16,version);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectImpl.h */
      pcVar8 = pcVar8->fNext;
                    /* end of inlined section */
      if (pcVar8 == (cXObjectImpl__128_1095 *)0x0) break;
      pcVar3 = pcVar8->__vtable;
    }
  }
  killDemolishedObjects__16ObjectModuleImplP8iResFile(this,pFile);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  piVar4 = (int *)(*(code *)_5Globs_pHouse->__vtable->EnterLiveMode)
                            ((int)&_5Globs_pHouse->__vtable +
                             (int)*(short *)&_5Globs_pHouse->__vtable->DoStream);
  iVar5 = (**(code **)(*piVar4 + 0x1c))((int)piVar4 + (int)*(short *)(*piVar4 + 0x18));
  if (0 < iVar5) {
    iVar9 = 0;
    do {
      pOVar2 = (this->field0_0x0).__vtable;
      if (iVar5 == 0) {
        trap(7);
      }
      sVar1 = *(short *)&pOVar2->DoReconObject;
      puVar6 = (undefined4 *)
               (**(code **)(*piVar4 + 0x24))
                         ((int)piVar4 + (int)*(short *)(*piVar4 + 0x20),iVar9 % iVar5);
      lVar7 = (*(code *)pOVar2->DoReconPerson)((int)this->fObjectMap[-1] + sVar1 + 0x44,*puVar6);
      if (lVar7 != 0) {
        pOVar2 = (this->field0_0x0).__vtable;
        (*(code *)pOVar2->GetTileObjectID)
                  ((int)this->fObjectMap[-1] + *(short *)&pOVar2->GetSimFlag + 0x44);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar5);
  }
  return;
}

void ObjectModuleImpl::DoReconObject(ReconBuffer *r, cXObjectImpl **obj) {
	SInt16 objID;
	ReconBuffer *this;
	ReconBuffer *this;
	
  cXObject__128_898 *pcVar1;
  cXObject__128_898__vtable *pcVar2;
  ObjectModule__vtable *pOVar3;
  int iVar4;
  cXObjectImpl__128_1095 *pcVar5;
  long lVar6;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  ushort objID;
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
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
                    /* end of inlined section */
  if (r->fMode != kReading) {
    if (*obj == (cXObjectImpl__128_1095 *)0x0) {
      objID = 0;
    }
    else {
      pcVar1 = (*obj)->_vb898;
      pcVar2 = pcVar1->__vtable;
      objID = (*(code *)pcVar2[1].UserCanPlace)
                        ((int)&pcVar1->_vb1093 + (int)*(short *)&pcVar2[1].IsPartOfMe);
    }
  }
  Recon16__11ReconBufferPsi(r,&objID,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
                    /* end of inlined section */
  if (r->fMode == kReading) {
    pOVar3 = (this->field0_0x0).__vtable;
    lVar6 = (*(code *)pOVar3->AdvanceSelectedPerson)
                      ((int)this->fObjectMap[-1] + *(short *)&pOVar3->SetSelectedPerson + 0x44,objID
                      );
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    if (lVar6 == 0) {
                    /* end of inlined section */
      *obj = (cXObjectImpl__128_1095 *)0x0;
    }
    else {
      iVar4 = *(int *)((int)lVar6 + 4);
      pcVar5 = (cXObjectImpl__128_1095 *)
               (**(code **)(iVar4 + 0x454))((int)lVar6 + (int)*(short *)(iVar4 + 0x450));
      *obj = pcVar5;
    }
  }
  return;
}

void ObjectModuleImpl::DoReconPerson(ReconBuffer *r, cXPersonImpl **p) {
	cXObjectImpl *obj;
	ReconBuffer *this;
	
  ObjectModule__vtable *pOVar1;
  cXPersonImpl__128_1097 *pcVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  cXObjectImpl__128_1095 *obj;
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
  if (*p == (cXPersonImpl__128_1097 *)0x0) {
    obj = (cXObjectImpl__128_1095 *)0x0;
  }
  else {
    obj = (*p)->_vb1095;
  }
  pOVar1 = (this->field0_0x0).__vtable;
  (*(code *)pOVar1[1].GetCurrentDialog)
            ((int)this->fObjectMap[-1] + *(short *)&pOVar1[1].LevelInfoRequested + 0x44,r,&obj);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
                    /* end of inlined section */
  if (r->fMode == kReading) {
    if (obj == (cXObjectImpl__128_1095 *)0x0) {
      *p = (cXPersonImpl__128_1097 *)0x0;
    }
    else {
                    /* inlined from SCID.h */
      pcVar2 = (cXPersonImpl__128_1097 *)
               _dyncastimpl__7TreeSim4SCID(obj->_vb898->_vb1093,cXPersonImplID);
                    /* end of inlined section */
      *p = pcVar2;
    }
  }
  return;
}

void ObjectModuleImpl::DoStream(ReconBuffer *r, SInt32 version) {
	bool compress;
	ObjSelector *placeHolder;
	ReconBuffer *this;
	SInt16 zero;
	cXObjectImpl *obj;
	SInt16 id;
	ObjSelector *sel;
	cXObjectImpl *newObj;
	cXObjectImpl *obj;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	ReconBuffer *this;
	int disablerCount;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	unsigned int new_size;
	cXObjectImpl *&x;
	unsigned int new_size;
	cXObjectImpl **last;
	cXObjectImpl **first;
	cXObjectImpl **pointer;
	UInt i;
	unsigned int n;
	BString tmp;
	
  cXObject__128_898__vtable *pcVar1;
  cXObjectImpl__128_1095 **position;
  cXObjectImpl__128_1095 *pcVar2;
  int iVar3;
  Mode__6_4959 MVar4;
  ObjectModule__vtable *pOVar5;
  uint uVar6;
  cXObjectImpl__128_1095 **ppcVar7;
  cXObjectImpl__128_1095 **ppcVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  cXObject__128_898 *pcVar12;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  ushort zero;
  ushort id;
  BString tmp;
  bool compress;
  ObjSelector *sel;
  int disablerCount;
  cXObjectImpl__128_1095 *local_74;
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
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (0x2e < version) {
    _compress = 1;
    ReconBool__11ReconBufferPb(r,&compress);
    if (_compress != 0) {
      EnableCompression__11ReconBuffer(r);
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    lVar9 = (*(code *)_5Globs_pObjectFolder->__vtable[1].SetSemiGlobalFile)
                      ((int)&_5Globs_pObjectFolder->__vtable +
                       (int)*(short *)&_5Globs_pObjectFolder->__vtable[1].GetTypeAttrBlock);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
                    /* end of inlined section */
    if (r->fMode == kReading) {
      while( true ) {
        Recon16__11ReconBufferPsi(r,&id,1);
        if (id == 0) break;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
        (*(code *)_5Globs_pObjectFolder->__vtable->SetSemiGlobalFile)
                  ((int)&_5Globs_pObjectFolder->__vtable +
                   (int)*(short *)&_5Globs_pObjectFolder->__vtable->GetTypeAttrBlock,&sel,r,1,
                   version);
        if (sel == (ObjSelector *)0x0) {
          sel = (ObjSelector *)lVar9;
        }
        pcVar2 = ConstructObject__16ObjectModuleImplP11ObjSelectorP10cXMTObject
                           (this,sel,(cXMTObject__128_2848 *)0x0);
        pcVar12 = (cXObject__128_898 *)0x0;
        if (pcVar2 != (cXObjectImpl__128_1095 *)0x0) {
          pcVar12 = pcVar2->_vb898;
        }
        AddObject__16ObjectModuleImplP8cXObjectsb(this,pcVar12,id,true);
        (*(code *)pcVar2->__vtable->SetHilite)
                  ((int)pcVar2->fTemp + *(short *)&pcVar2->__vtable->PreSave + -0x16);
        pcVar1 = pcVar2->_vb898->__vtable;
        (*(code *)pcVar1->ResetDamage)
                  ((int)&pcVar2->_vb898->_vb1093 + (int)*(short *)&pcVar1->SetLastDamage,0x80,1);
      }
    }
    else {
      for (pcVar2 = this->fFirst; pcVar2 != (cXObjectImpl__128_1095 *)0x0; pcVar2 = pcVar2->fNext) {
        Recon16__11ReconBufferPsi(r,&pcVar2->fID,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
        (*(code *)_5Globs_pObjectFolder->__vtable->SetSemiGlobalFile)
                  ((int)&_5Globs_pObjectFolder->__vtable +
                   (int)*(short *)&_5Globs_pObjectFolder->__vtable->GetTypeAttrBlock,
                   &pcVar2->fObjSel,r,1,version);
      }
      zero = 0;
      Recon16__11ReconBufferPsi(r,&zero,1);
    }
    ReconMark__11ReconBuffer(r);
    pcVar2 = this->fFirst;
    if (pcVar2 == (cXObjectImpl__128_1095 *)0x0) {
      pOVar5 = (this->field0_0x0).__vtable;
      goto LAB_00235c04;
    }
    pcVar12 = pcVar2->_vb898;
    while( true ) {
      lVar10 = (*(code *)pcVar12->__vtable[1].SetLevel)
                         ((int)&pcVar12->_vb1093 + (int)*(short *)&pcVar12->__vtable[1].GetTreeID);
      pcVar1 = pcVar2->_vb898->__vtable;
      (*(code *)pcVar1[1].IsFireproof)
                ((int)&pcVar2->_vb898->_vb1093 + (int)*(short *)&pcVar1[1].CanBurn,r,version,
                 lVar10 == lVar9);
      if (version < 0x36) {
        MVar4 = r->fMode;
      }
      else {
        pcVar1 = pcVar2->_vb898->__vtable;
        iVar3 = (*(code *)pcVar1[1].UserCanPlace)
                          ((int)&pcVar2->_vb898->_vb1093 + (int)*(short *)&pcVar1[1].IsPartOfMe);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
        ReconInt__11ReconBufferPii(r,(this->fIdleMap).start + iVar3 + -1,1);
        if (version < 0x39) {
          pcVar1 = pcVar2->_vb898->__vtable;
          iVar3 = (*(code *)pcVar1[1].UserCanPlace)
                            ((int)&pcVar2->_vb898->_vb1093 + (int)*(short *)&pcVar1[1].IsPartOfMe);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
          puVar11 = (uint *)((this->fIdleMap).start + iVar3 + -1);
                    /* end of inlined section */
          *puVar11 = (uint)*(ushort *)puVar11;
          pcVar1 = pcVar2->_vb898->__vtable;
          iVar3 = (*(code *)pcVar1[1].UserCanPlace)
                            ((int)&pcVar2->_vb898->_vb1093 + (int)*(short *)&pcVar1[1].IsPartOfMe);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
          puVar11 = (uint *)((this->fIdleMap).start + iVar3 + -1);
                    /* end of inlined section */
          *puVar11 = *puVar11 | 0x10000;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
          MVar4 = r->fMode;
        }
        else {
          MVar4 = r->fMode;
        }
      }
                    /* end of inlined section */
      if (MVar4 == kReading) {
        ReadToNextMark__11ReconBuffer(r);
      }
      ReconMark__11ReconBuffer(r);
      pcVar2 = pcVar2->fNext;
      if (pcVar2 == (cXObjectImpl__128_1095 *)0x0) break;
      pcVar12 = pcVar2->_vb898;
    }
  }
  pOVar5 = (this->field0_0x0).__vtable;
LAB_00235c04:
  (*(code *)pOVar5[1].GetCurrentDialog)
            ((int)this->fObjectMap[-1] + *(short *)&pOVar5[1].LevelInfoRequested + 0x44,r,
             &this->fTutorialObject);
  if (0x33 < version) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    disablerCount = (int)(this->fDisablers).finish - (int)(this->fDisablers).start >> 2;
                    /* end of inlined section */
    ReconInt__11ReconBufferPii(r,&disablerCount,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    position = (this->fDisablers).finish;
    ppcVar7 = (this->fDisablers).start;
    uVar6 = (int)position - (int)ppcVar7 >> 2;
    local_74 = (cXObjectImpl__128_1095 *)0x0;
    if ((uint)disablerCount < uVar6) {
      ppcVar7 = ppcVar7 + disablerCount;
      for (ppcVar8 = ppcVar7; ppcVar8 != position; ppcVar8 = ppcVar8 + 1) {
      }
      (this->fDisablers).finish = ppcVar7;
    }
    else {
      insert__t6vector2ZP12cXObjectImplZt23__malloc_alloc_template1i0PP12cXObjectImplUiRCP12cXObjectImpl
                (&this->fDisablers,position,disablerCount - uVar6,&local_74);
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    if ((int)(this->fDisablers).finish - (int)(this->fDisablers).start >> 2 != 0) {
      pOVar5 = (this->field0_0x0).__vtable;
      uVar6 = 0;
      while( true ) {
                    /* end of inlined section */
        (*(code *)pOVar5[1].GetCurrentDialog)
                  ((int)this->fObjectMap[-1] + *(short *)&pOVar5[1].LevelInfoRequested + 0x44,r,
                   (this->fDisablers).start + uVar6);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
        if ((uint)((int)(this->fDisablers).finish - (int)(this->fDisablers).start >> 2) <= uVar6 + 1
           ) break;
        pOVar5 = (this->field0_0x0).__vtable;
        uVar6 = uVar6 + 1;
      }
    }
    if (version < 0x40) {
      __7BString(&tmp);
      ReconString__11ReconBufferR7BString(r,&tmp);
      ___7BString(&tmp,2);
    }
    else {
      ReconString__11ReconBufferR8BString2(r,&_12cXObjectImpl_sLastUserTypedName);
    }
  }
  return;
}

void ObjectModuleImpl::Init() {
	SlotLoader sl;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	cXObjectImpl **first;
	cXObjectImpl **last;
	cXObjectImpl **pointer;
	int *first;
	int *last;
	int *pointer;
	
  int *piVar1;
  iResFile__0_3211 *file;
  int iVar2;
  int *piVar3;
  SlotLoader sl;
  
  if (*(int *)&this->fInited == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    for (iVar2 = *(int *)&this->field_0x1c; iVar2 != *(int *)&this->field_0x20; iVar2 = iVar2 + 4) {
    }
    *(int *)&this->field_0x20 = *(int *)&this->field_0x1c;
    piVar1 = (this->fIdleMap).start;
    for (piVar3 = piVar1; piVar3 != (this->fIdleMap).finish; piVar3 = piVar3 + 1) {
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    (this->fIdleMap).finish = piVar1;
                    /* end of inlined section */
    *(undefined4 *)&this->fInited = 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    file = (iResFile__0_3211 *)
           (*(code *)_5Globs_pObjectFolder->__vtable->GetNextSelector)
                     ((int)&_5Globs_pObjectFolder->__vtable +
                      (int)*(short *)&_5Globs_pObjectFolder->__vtable->CountSelectors);
    __10SlotLoaderP8iResFiles(&sl,file,0);
    Load__10SlotLoadersPt6vector2Z10ObjectSlotZt23__malloc_alloc_template1i0Pt6vector2Z11RoutingSlotZt23__malloc_alloc_template1i0
              (&sl,100,(vector_ObjectSlot___malloc_alloc_template_0___ *)0x0,
               &this->fGlobalRoutingSlots);
    ___10SlotLoader(&sl,2);
  }
  return;
}

void ObjectModuleImpl::Destroy() {
	cXObjectImpl **i;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	cXObject *obj;
	cXObjectImpl **first;
	cXObjectImpl **last;
	cXObjectImpl **pointer;
	int *first;
	int *last;
	int *pointer;
	
  cXObject__128_898 *_obj;
  TreeSim__vtable *pTVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (*(int *)&this->fInited != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    piVar4 = *(int **)&this->field_0x1c;
                    /* end of inlined section */
    if (piVar4 != *(int **)&this->field_0x20) {
      iVar3 = *piVar4;
      while( true ) {
        if (iVar3 == 0) {
          piVar2 = *(int **)&this->field_0x20;
        }
        else {
          _obj = *(cXObject__128_898 **)(iVar3 + 4);
          RemoveObject__16ObjectModuleImplP8cXObject(this,_obj);
          if (_obj != (cXObject__128_898 *)0x0) {
            pTVar1 = _obj->_vb1093->__vtable;
            (*(code *)pTVar1->Simulate)
                      ((int)&_obj->_vb1093->m_pObject + (int)*(short *)&pTVar1->Initialize,3);
          }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
          piVar2 = *(int **)&this->field_0x20;
        }
                    /* end of inlined section */
        piVar4 = piVar4 + 1;
        if (piVar4 == piVar2) break;
        iVar3 = *piVar4;
      }
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    for (iVar3 = *(int *)&this->field_0x1c; iVar3 != *(int *)&this->field_0x20; iVar3 = iVar3 + 4) {
    }
    *(int *)&this->field_0x20 = *(int *)&this->field_0x1c;
    piVar4 = (this->fIdleMap).start;
    for (piVar2 = piVar4; piVar2 != (this->fIdleMap).finish; piVar2 = piVar2 + 1) {
    }
    (this->fIdleMap).finish = piVar4;
                    /* end of inlined section */
    *(undefined4 *)&this->fInited = 0;
  }
  return;
}

cXObject* ObjectModuleImpl::GetObjectByGUID(SInt32 inGUID) {
	ObjSelector *sel;
	cXObjectImpl **i;
	cXObjectImpl **end;
	
  int *piVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  lVar4 = (*(code *)_5Globs_pObjectFolder->__vtable->DeletingInstance)
                    ((int)&_5Globs_pObjectFolder->__vtable +
                     (int)*(short *)&_5Globs_pObjectFolder->__vtable->CreatingInstance,inGUID);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  piVar1 = *(int **)&this->field_0x20;
  piVar6 = *(int **)&this->field_0x1c;
                    /* end of inlined section */
  if (piVar6 != piVar1) {
    if (piVar6 == (int *)0x0) {
      return (cXObject__128_898 *)0x0;
    }
    iVar3 = *piVar6;
    while( true ) {
      if ((iVar3 != 0) &&
         (iVar2 = *(int *)(*(int *)(iVar3 + 4) + 4),
         lVar5 = (**(code **)(iVar2 + 0x2ec))(*(int *)(iVar3 + 4) + (int)*(short *)(iVar2 + 0x2e8)),
         lVar5 == lVar4)) {
        if (*piVar6 == 0) {
          return (cXObject__128_898 *)0x0;
        }
        return *(cXObject__128_898 **)(*piVar6 + 4);
      }
      piVar6 = piVar6 + 1;
      if (piVar6 == piVar1) {
        return (cXObject__128_898 *)0x0;
      }
      if (piVar6 == (int *)0x0) break;
      iVar3 = *piVar6;
    }
  }
  return (cXObject__128_898 *)0x0;
}

cXPerson* ObjectModuleImpl::GetPersonByGUID(SInt32 guid) {
	cXPersonImpl **i;
	vector<cXPersonImpl *,__malloc_alloc_template<0> > *this;
	vector<cXPersonImpl *,__malloc_alloc_template<0> > *this;
	
  cXObject__21_1030 *pcVar1;
  cXObject__21_1030__vtable *pcVar2;
  cXPersonImpl__123_903 *pcVar3;
  ObjSelector *this_00;
  int iVar4;
  cXPerson__128_907 *pcVar5;
  cXPersonImpl__123_903 **ppcVar6;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  ppcVar6 = (this->fPeople).start;
                    /* end of inlined section */
  if (ppcVar6 == (this->fPeople).finish) {
LAB_00236108:
    pcVar5 = (cXPerson__128_907 *)0x0;
  }
  else {
    pcVar3 = *ppcVar6;
    while( true ) {
      pcVar1 = pcVar3->_vb901->_vb966;
      pcVar2 = pcVar1->__vtable;
      this_00 = (ObjSelector *)
                (*(code *)pcVar2[1].SetLevel)
                          ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2[1].GetTreeID);
      iVar4 = GetGUID__11ObjSelector(this_00);
      if (iVar4 == guid) break;
                    /* end of inlined section */
      ppcVar6 = ppcVar6 + 1;
      if (ppcVar6 == (this->fPeople).finish) goto LAB_00236108;
      pcVar3 = *ppcVar6;
    }
    pcVar5 = (cXPerson__128_907 *)0x0;
    if (*ppcVar6 != (cXPersonImpl__123_903 *)0x0) {
      pcVar5 = (cXPerson__128_907 *)(*ppcVar6)->_vb1079;
    }
  }
  return pcVar5;
}

cXObjectImpl* ObjectModuleImpl::ConstructObject(ObjSelector *sel, cXMTObject *mtLead) {
	ObjSelector *this;
	ObjSelector *this;
	ObjSelector *this;
	
  ObjDefinition *pOVar1;
  cXObjectImpl__127_901 *pcVar2;
  cXPortalImpl__184_909 *pcVar3;
  cXMTObjectImpl__138_905 *this_00;
  cXPersonImpl__123_903 *pcVar4;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
  pOVar1 = sel->fHeader;
                    /* end of inlined section */
  if (pOVar1->masterID == 0) {
    switch((int)((pOVar1->type - 1) * 0x10000) >> 0x10) {
    default:
      pcVar2 = (cXObjectImpl__127_901 *)__builtin_new(400);
      pcVar2 = __12cXObjectImpliP11ObjSelectorP12ObjectModule(pcVar2,1,sel,&this->field0_0x0);
      break;
    case 1:
      pcVar4 = (cXPersonImpl__123_903 *)__builtin_new(0x694);
      pcVar4 = __12cXPersonImpliP11ObjSelectorP12ObjectModule(pcVar4,1,sel,&this->field0_0x0);
      goto LAB_00236240;
    case 7:
    case 8:
      pcVar2 = (cXObjectImpl__127_901 *)0x0;
    }
  }
  else {
    if (pOVar1->type == 8) {
      pcVar3 = (cXPortalImpl__184_909 *)__builtin_new(0x1dc);
      pcVar3 = __12cXPortalImpliP11ObjSelectorP10cXMTObjectP12ObjectModule
                         (pcVar3,1,sel,(cXMTObject__123_3296 *)mtLead,&this->field0_0x0);
      if (pcVar3 == (cXPortalImpl__184_909 *)0x0) {
        return (cXObjectImpl__128_1095 *)0x0;
      }
      return (cXObjectImpl__128_1095 *)pcVar3->_vb905->_vb901;
    }
    this_00 = (cXMTObjectImpl__138_905 *)__builtin_new(0x1c0);
    pcVar4 = (cXPersonImpl__123_903 *)
             __14cXMTObjectImpliP11ObjSelectorP10cXMTObjectP12ObjectModule
                       (this_00,1,sel,(cXMTObject__123_3296 *)mtLead,&this->field0_0x0);
LAB_00236240:
    pcVar2 = (cXObjectImpl__127_901 *)0x0;
    if (pcVar4 != (cXPersonImpl__123_903 *)0x0) {
      pcVar2 = (cXObjectImpl__127_901 *)pcVar4->_vb901;
    }
  }
  return (cXObjectImpl__128_1095 *)pcVar2;
}

SInt16 ObjectModuleImpl::MakeNewOutOfWorldObject(ObjSelector *objSel) {
	SInt16 newID;
	ObjDefinition *header;
	ObjSelector *this;
	ObjSelector *this;
	ObjSelector *this;
	ObjDefinition *this;
	ObjDefinition *this;
	ObjDefinition *this;
	bool failed;
	cXMTObjectImpl *leadObj;
	cXMTObjectImpl *newObj;
	ObjSelector *subSel;
	Int n;
	cXObjectImpl *newObj;
	cXObject *this;
	
  short sVar1;
  ObjDefinition *pOVar2;
  cXObject__21_1030__vtable *pcVar3;
  ObjectModule__vtable *pOVar4;
  TreeSim *pTVar5;
  TreeSim__vtable *pTVar6;
  cXObject__21_1030 *pcVar7;
  int iVar8;
  cXObject__128_898 *pcVar9;
  bool bVar10;
  iResFile__6_5027 *piVar11;
  cXObjectImpl__128_1095 *pcVar12;
  cXObjectImpl__127_901 **ppcVar13;
  cXObjectImpl__127_901 **ppcVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  cXObjectImpl__127_901 *pcVar18;
  long lVar19;
  
  lVar19 = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
  piVar11 = (objSel->field0_0x0).fFile;
  if (piVar11 == (iResFile__6_5027 *)0x0) {
    piVar11 = loadFile__11ObjSelector(objSel);
  }
                    /* end of inlined section */
  (*(code *)piVar11->__vtable->FindUniqueName)
            ((int)&piVar11->fNextFile + (int)*(short *)&piVar11->__vtable->GetLanguage);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
  pOVar2 = objSel->fHeader;
                    /* end of inlined section */
  if (pOVar2->masterID == 0) {
    pcVar12 = ConstructObject__16ObjectModuleImplP11ObjSelectorP10cXMTObject
                        (this,objSel,(cXMTObject__128_2848 *)0x0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    pcVar9 = pcVar12->_vb898;
    lVar19 = 0;
    if (pcVar9 != (cXObject__128_898 *)0x0) {
      lVar19 = (*(code *)pcVar9->__vtable[1].GetObjectImplementation)
                         ((int)&pcVar9->_vb1093 + (int)*(short *)&pcVar9->__vtable[1].AdvanceGraphic
                         );
    }
                    /* end of inlined section */
    if (lVar19 == 0) {
      lVar19 = 0;
      goto LAB_00236678;
    }
    pOVar4 = (this->field0_0x0).__vtable;
    pcVar18 = (cXObjectImpl__127_901 *)lVar19;
    lVar19 = (*(code *)pOVar4->GetObjectFromID)
                       ((int)this->fObjectMap[-1] + *(short *)&pOVar4->DayChanged + 0x44,
                        pcVar18->_vb966,0);
    if (lVar19 == 0) {
      pTVar5 = pcVar18->_vb966->_vb899;
      pTVar6 = pTVar5->__vtable;
      (*(code *)pTVar6->Simulate)((int)&pTVar5->m_pObject + (int)*(short *)&pTVar6->Initialize,3);
    }
    else {
      (*(code *)pcVar18->__vtable->SetHilite)
                ((int)pcVar18->fTemp + *(short *)&pcVar18->__vtable->PreSave + -0x16);
      JustBorn__12cXObjectImpl(pcVar18);
      (*(code *)pcVar18->__vtable->SetMiscFlag)
                ((int)pcVar18->fTemp + *(short *)&pcVar18->__vtable->GetHilite + -0x16,1);
      pcVar7 = pcVar18->_vb966;
      pcVar18->fData[0x29] = pOVar2->price;
      pcVar3 = pcVar7->__vtable;
      (*(code *)pcVar3->ResetDamage)
                ((int)&pcVar7->_vb899 + (int)*(short *)&pcVar3->SetLastDamage,0x80,1);
      pOVar4 = (this->field0_0x0).__vtable;
      pcVar3 = pcVar18->_vb966->__vtable;
      sVar1 = *(short *)&pOVar4[1].IsBuyAndBuildDisabled;
      uVar17 = (*(code *)pcVar3[1].UserCanPlace)
                         ((int)&pcVar18->_vb966->_vb899 + (int)*(short *)&pcVar3[1].IsPartOfMe);
      (*(code *)pOVar4[1].SetIdleStatus)((int)this->fObjectMap[-1] + sVar1 + 0x44,uVar17,1,1);
    }
  }
  else {
                    /* inlined from /eor/projects/sims/Qdata/ObjDefinition.h */
                    /* end of inlined section */
    bVar10 = false;
    if (pOVar2->subIndex == 0xffff) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      ppcVar14 = (cXObjectImpl__127_901 **)0x0;
      ppcVar13 = (cXObjectImpl__127_901 **)0x0;
      lVar15 = (*(code *)_5Globs_pObjectFolder->__vtable->Load)
                         ((int)&_5Globs_pObjectFolder->__vtable +
                          (int)*(short *)&_5Globs_pObjectFolder->__vtable->Save);
      iVar8 = 0;
      while (lVar15 != 0) {
        pcVar18 = (cXObjectImpl__127_901 *)0x0;
        if (ppcVar14 == (cXObjectImpl__127_901 **)0x0) {
LAB_00236358:
          pcVar12 = ConstructObject__16ObjectModuleImplP11ObjSelectorP10cXMTObject
                              (this,(ObjSelector *)lVar15,(cXMTObject__128_2848 *)pcVar18);
                    /* inlined from SCID.h */
          if (pcVar12 == (cXObjectImpl__128_1095 *)0x0) {
            ppcVar13 = (cXObjectImpl__127_901 **)0x0;
          }
          else {
            ppcVar13 = (cXObjectImpl__127_901 **)
                       _dyncastimpl__7TreeSim4SCID(pcVar12->_vb898->_vb1093,cXMTObjectImplID);
          }
                    /* end of inlined section */
          if (ppcVar13 != (cXObjectImpl__127_901 **)0x0) {
            pOVar4 = (this->field0_0x0).__vtable;
            lVar15 = (*(code *)pOVar4->GetObjectFromID)
                               ((int)this->fObjectMap[-1] + *(short *)&pOVar4->DayChanged + 0x44,
                                ppcVar13[1]->_vb1168,0);
            if (lVar15 != 0) {
              if (ppcVar14 == (cXObjectImpl__127_901 **)0x0) {
                ppcVar14 = ppcVar13;
              }
              pcVar7 = ppcVar13[1]->_vb966;
              (**(code **)&pcVar7->field_0xc)
                        ((int)ppcVar13[1]->fTemp + *(short *)&pcVar7->field_0x8 + -0x16);
              JustBorn__12cXObjectImpl(*ppcVar13);
              goto LAB_002363fc;
            }
            pTVar5 = ppcVar13[1]->_vb1168->_vb899;
            pTVar6 = pTVar5->__vtable;
            (*(code *)pTVar6->Simulate)
                      ((int)&pTVar5->m_pObject + (int)*(short *)&pTVar6->Initialize,3);
          }
          bVar10 = true;
        }
        else {
          pcVar3 = (*ppcVar14)->_vb966->__vtable;
          lVar16 = (*(code *)pcVar3[1].SetLevel)
                             ((int)&(*ppcVar14)->_vb966->_vb899 +
                              (int)*(short *)&pcVar3[1].GetTreeID);
          if (lVar16 != lVar15) {
            pcVar18 = (cXObjectImpl__127_901 *)0x0;
            if (ppcVar14 != (cXObjectImpl__127_901 **)0x0) {
              pcVar18 = ppcVar14[1];
            }
            goto LAB_00236358;
          }
        }
LAB_002363fc:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
        lVar15 = (*(code *)_5Globs_pObjectFolder->__vtable->GetTreeTable)
                           ((int)&_5Globs_pObjectFolder->__vtable +
                            (int)*(short *)&_5Globs_pObjectFolder->__vtable->OpenResFile,objSel,
                            iVar8);
        iVar8 = iVar8 + 1;
      }
      if ((bVar10) || (ppcVar14 == (cXObjectImpl__127_901 **)0x0)) {
        if (ppcVar14 != (cXObjectImpl__127_901 **)0x0) {
          KillOutOfWorldObject__16ObjectModuleImplsb(this,(*ppcVar14)->fID,false);
        }
      }
      else {
        lVar19 = (long)(short)(*ppcVar14)->fID;
        (*ppcVar14)->fData[0x29] = pOVar2->price;
        pcVar7 = ppcVar13[1]->_vb966;
        (**(code **)&pcVar7->field_0x24)
                  ((int)ppcVar13[1]->fTemp + *(short *)&pcVar7->field_0x20 + -0x16,1);
        pcVar18 = *ppcVar14;
        while( true ) {
          pcVar3 = pcVar18->_vb966->__vtable;
          (*(code *)pcVar3->ResetDamage)
                    ((int)&pcVar18->_vb966->_vb899 + (int)*(short *)&pcVar3->SetLastDamage,0x80,1);
          pOVar4 = (this->field0_0x0).__vtable;
          sVar1 = *(short *)&pOVar4[1].IsBuyAndBuildDisabled;
          pcVar3 = (*ppcVar14)->_vb966->__vtable;
          uVar17 = (*(code *)pcVar3[1].UserCanPlace)
                             ((int)&(*ppcVar14)->_vb966->_vb899 +
                              (int)*(short *)&pcVar3[1].IsPartOfMe);
          (*(code *)pOVar4[1].SetIdleStatus)((int)this->fObjectMap[-1] + sVar1 + 0x44,uVar17,1,1);
          pcVar7 = ppcVar14[1]->_vb966;
          lVar15 = (**(code **)&pcVar7->field_0x1c)
                             ((int)ppcVar14[1]->fTemp + *(short *)&pcVar7->field_0x18 + -0x16);
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
          ppcVar14 = (cXObjectImpl__127_901 **)0x0;
          if (lVar15 != 0) {
            iVar8 = *(int *)((int)lVar15 + 4);
            ppcVar14 = (cXObjectImpl__127_901 **)
                       (**(code **)(iVar8 + 100))((int)lVar15 + (int)*(short *)(iVar8 + 0x60));
          }
                    /* end of inlined section */
          if (ppcVar14 == (cXObjectImpl__127_901 **)0x0) break;
          pcVar18 = *ppcVar14;
        }
      }
    }
  }
  if (lVar19 != 0) {
    GlobalDispatch__Fsi(0xe1,(int)lVar19);
  }
LAB_00236678:
  return (ushort)lVar19;
}

void ObjectModuleImpl::KillOutOfWorldObject(SInt16 id, bool multiPart) {
	cXObject *obj;
	ObjDefinition *def;
	cXMTObjectImpl *mobj;
	cXObject *srch;
	cXObject *ptr;
	cXMTObject *nextObj;
	cXMTObject *this;
	cXMTObject *this;
	int n;
	cXObject *this;
	cXCursorObject *curs;
	cXObject *ptr;
	int i;
	cXObject *this;
	
  short sVar1;
  TreeSim__vtable *pTVar2;
  cXObject__128_898 *pcVar3;
  int iVar4;
  int *piVar5;
  cXObject__128_898__vtable *pcVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  cXObjectImpl__127_901 *this_00;
  long lVar10;
  ObjectModule__vtable *pOVar11;
  int *piVar12;
  int iVar13;
  long lVar14;
  
  iVar13 = (int)(short)id;
  lVar14 = (long)iVar13;
  pOVar11 = (this->field0_0x0).__vtable;
  pcVar3 = (cXObject__128_898 *)
           (*(code *)pOVar11->AdvanceSelectedPerson)
                     ((int)this->fObjectMap[-1] + *(short *)&pOVar11->SetSelectedPerson + 0x44,
                      lVar14);
  if (pcVar3 == (cXObject__128_898 *)0x0) {
    return;
  }
  iVar4 = (*(code *)pcVar3->__vtable[1].HandleError)
                    ((int)&pcVar3->_vb1093 + (int)*(short *)&pcVar3->__vtable[1].Error);
                    /* inlined from SCID.h */
                    /* end of inlined section */
                    /* inlined from SCID.h */
  piVar5 = (int *)_dyncastimpl__7TreeSim4SCID(pcVar3->_vb1093,cXMTObjectImplID);
                    /* end of inlined section */
  if ((!multiPart) && (piVar5 != (int *)0x0)) {
    if ((int *)piVar5[3] != (int *)0x0) {
      KillOutOfWorldObject__16ObjectModuleImplsb(this,*(ushort *)(*(int *)piVar5[3] + 0xc4),false);
      return;
    }
    piVar12 = (int *)piVar5[1];
    if (piVar12 != (int *)0x0) {
      iVar13 = *piVar12;
      while( true ) {
        (**(code **)(*(int *)(iVar13 + 4) + 0x4c))
                  (iVar13 + *(short *)(*(int *)(iVar13 + 4) + 0x48),0x40,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
        iVar13 = _GM_LIGHT;
        if (piVar12 != (int *)0x0) {
          iVar13 = (**(code **)(piVar12[1] + 100))
                             ((int)piVar12 + (int)*(short *)(piVar12[1] + 0x60));
          iVar13 = *(int *)(iVar13 + 8);
        }
        piVar12 = (int *)0x0;
        if (iVar13 != 0) {
          piVar12 = *(int **)(iVar13 + 4);
        }
        if (piVar12 == (int *)0x0) break;
        iVar13 = *piVar12;
      }
    }
    if (piVar5 == (int *)0x0) {
      return;
    }
    iVar13 = piVar5[2];
    while( true ) {
      iVar4 = 0;
      if (iVar13 != 0) {
        iVar4 = *(int *)(iVar13 + 4);
      }
      KillOutOfWorldObject__16ObjectModuleImplsb(this,*(ushort *)(*piVar5 + 0xc4),true);
                    /* inlined from c:/eor/src2/games/sims/MSrc/MTObject.h */
      piVar5 = (int *)0x0;
      if (iVar4 != 0) {
        piVar5 = (int *)(**(code **)(*(int *)(iVar4 + 4) + 100))
                                  (iVar4 + *(short *)(*(int *)(iVar4 + 4) + 0x60));
      }
                    /* end of inlined section */
      if (piVar5 == (int *)0x0) break;
      iVar13 = piVar5[2];
    }
    return;
  }
  GlobalDispatch__Fsi(0x86,iVar13);
  (*(code *)pcVar3->__vtable->ResetDamage)
            ((int)&pcVar3->_vb1093 + (int)*(short *)&pcVar3->__vtable->SetLastDamage,0x40,1);
  if (this->fTutorialObject == (cXObjectImpl__128_1095 *)0x0) {
    pOVar11 = (this->field0_0x0).__vtable;
    if (pcVar3 == (cXObject__128_898 *)0x0) goto LAB_00236870;
LAB_00236888:
    sVar1 = *(short *)&pOVar11->GetIdleStatus;
  }
  else {
    pOVar11 = (this->field0_0x0).__vtable;
    if (pcVar3 == this->fTutorialObject->_vb898) {
LAB_00236870:
      (*(code *)pOVar11[1].BroadcastMessage)
                ((int)this->fObjectMap[-1] + *(short *)&pOVar11[1].SendMessage + 0x44,0);
      pOVar11 = (this->field0_0x0).__vtable;
      goto LAB_00236888;
    }
    sVar1 = *(short *)&pOVar11->GetIdleStatus;
  }
  lVar10 = (*(code *)pOVar11->SetSimFlag)((int)this->fObjectMap[-1] + sVar1 + 0x44);
  if (lVar10 == 0) {
    if (pcVar3 != (cXObject__128_898 *)0x0) {
      pcVar6 = pcVar3->__vtable;
      goto LAB_002368d8;
    }
    pOVar11 = (this->field0_0x0).__vtable;
  }
  else {
    if (pcVar3 != *(cXObject__128_898 **)lVar10) {
      pcVar6 = pcVar3->__vtable;
      goto LAB_002368d8;
    }
    pOVar11 = (this->field0_0x0).__vtable;
  }
  (*(code *)pOVar11->GetTileObjectID)
            ((int)this->fObjectMap[-1] + *(short *)&pOVar11->GetSimFlag + 0x44,0);
  pcVar6 = pcVar3->__vtable;
LAB_002368d8:
  (*(code *)pcVar6->RunTree)((int)&pcVar3->_vb1093 + (int)*(short *)&pcVar6->IsSpriteVisible,0);
  pOVar11 = (this->field0_0x0).__vtable;
  (*(code *)pOVar11[1].Init)
            ((int)this->fObjectMap[-1] + *(short *)&pOVar11[1].ObjectModule + 0x44,pcVar3);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
  iVar7 = 0;
  if (pcVar3 != (cXObject__128_898 *)0x0) {
    iVar7 = (*(code *)pcVar3->__vtable[1].GetObjectImplementation)
                      ((int)&pcVar3->_vb1093 + (int)*(short *)&pcVar3->__vtable[1].AdvanceGraphic);
  }
                    /* end of inlined section */
  (**(code **)(*(int *)(iVar7 + 0x130) + 0x14))
            (iVar7 + *(short *)(*(int *)(iVar7 + 0x130) + 0x10),0);
  if (*(short *)(iVar4 + 0x12) == 9) {
                    /* inlined from SCID.h */
    pvVar8 = (void *)0x0;
    if (pcVar3 != (cXObject__128_898 *)0x0) {
      pvVar8 = _dyncastimpl__7TreeSim4SCID(pcVar3->_vb1093,cXCursorObjectID);
    }
                    /* end of inlined section */
    lVar10 = (**(code **)(*(int *)((int)pvVar8 + 4) + 0x24))
                       ((int)pvVar8 + (int)*(short *)(*(int *)((int)pvVar8 + 4) + 0x20));
    if (lVar10 == 0) {
      (**(code **)(*(int *)((int)pvVar8 + 4) + 0x34))
                ((int)pvVar8 + (int)*(short *)(*(int *)((int)pvVar8 + 4) + 0x30));
      pcVar6 = pcVar3->__vtable;
    }
    else {
      pcVar6 = pcVar3->__vtable;
    }
  }
  else {
    pcVar6 = pcVar3->__vtable;
  }
  iVar7 = 0;
  iVar4 = (*(code *)pcVar6[1].GetHilite)
                    ((int)&pcVar3->_vb1093 + (int)*(short *)&pcVar6[1].SetHilite);
  if (0 < iVar4) {
    pcVar6 = pcVar3->__vtable;
    while( true ) {
      iVar9 = (*(code *)pcVar6[1].GetMiscFlag)
                        ((int)&pcVar3->_vb1093 + (int)*(short *)&pcVar6[1].SetMiscFlag,iVar7);
      if (*(short *)(iVar9 + 0x14) != 0) {
        pOVar11 = (this->field0_0x0).__vtable;
        (*(code *)pOVar11->CheckIntegrity)
                  ((int)this->fObjectMap[-1] + *(short *)&pOVar11->GetNumObjects + 0x44);
      }
      iVar7 = iVar7 + 1;
      if (iVar4 <= iVar7) break;
      pcVar6 = pcVar3->__vtable;
    }
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
  this_00 = (cXObjectImpl__127_901 *)0x0;
  if (pcVar3 != (cXObject__128_898 *)0x0) {
    this_00 = (cXObjectImpl__127_901 *)
              (*(code *)pcVar3->__vtable[1].GetObjectImplementation)
                        ((int)&pcVar3->_vb1093 + (int)*(short *)&pcVar3->__vtable[1].AdvanceGraphic)
    ;
  }
                    /* end of inlined section */
  HierSever__12cXObjectImpl(this_00);
  RemoveObject__16ObjectModuleImplP8cXObject(this,pcVar3);
  if (pcVar3 != (cXObject__128_898 *)0x0) {
    pTVar2 = pcVar3->_vb1093->__vtable;
    (*(code *)pTVar2->Simulate)
              ((int)&pcVar3->_vb1093->m_pObject + (int)*(short *)&pTVar2->Initialize,3);
  }
  if (lVar14 == (short)this->fAnimTesterObject) {
    this->fAnimTesterObject = 0;
  }
  pcVar3 = (cXObject__128_898 *)0x0;
  if (this->fFirst != (cXObjectImpl__128_1095 *)0x0) {
    pcVar3 = this->fFirst->_vb898;
  }
  if (pcVar3 != (cXObject__128_898 *)0x0) {
    pcVar6 = pcVar3->__vtable;
    while( true ) {
      piVar5 = (int *)(*(code *)pcVar6[1].SetIdleStatus)
                                ((int)&pcVar3->_vb1093 + (int)*(short *)&pcVar6[1].GetIdleStatus);
      (**(code **)(*piVar5 + 0x24))((int)piVar5 + (int)*(short *)(*piVar5 + 0x20),lVar14);
      pcVar3 = (cXObject__128_898 *)
               (*(code *)pcVar3->__vtable[1].IsDeletedByEvict)
                         ((int)&pcVar3->_vb1093 +
                          (int)*(short *)&pcVar3->__vtable[1].GetObjectLightSource);
      if (pcVar3 == (cXObject__128_898 *)0x0) break;
      pcVar6 = pcVar3->__vtable;
    }
  }
  GlobalDispatch__Fsi(0x87,iVar13);
  return;
}

void ObjectModuleImpl::KillObject(SInt16 id) {
	cXObjectImpl *obj;
	
  short sVar1;
  ObjectModule__vtable *pOVar2;
  int iVar3;
  short sVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  
  pOVar2 = (this->field0_0x0).__vtable;
  lVar5 = (*(code *)pOVar2->AdvanceSelectedPerson)
                    ((int)this->fObjectMap[-1] + *(short *)&pOVar2->SetSelectedPerson + 0x44,id);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
  lVar7 = 0;
  if (lVar5 != 0) {
    iVar3 = *(int *)((int)lVar5 + 4);
    lVar7 = (**(code **)(iVar3 + 0x454))((int)lVar5 + (int)*(short *)(iVar3 + 0x450));
  }
                    /* end of inlined section */
  if (lVar7 != 0) {
    iVar6 = (int)lVar7;
    sVar1 = *(short *)(iVar6 + 0x34);
    iVar3 = *(int *)(*(int *)(iVar6 + 4) + 4);
    sVar4 = (**(code **)(iVar3 + 0x29c))(*(int *)(iVar6 + 4) + (int)*(short *)(iVar3 + 0x298));
    iVar3 = *(int *)(*(int *)(iVar6 + 4) + 4);
    (**(code **)(iVar3 + 0x104))(*(int *)(iVar6 + 4) + (int)*(short *)(iVar3 + 0x100));
    KillOutOfWorldObject__16ObjectModuleImplsb(this,id,false);
    if (sVar1 != 0) {
      GlobalDispatch__Fsi(0xf2,(int)sVar4);
    }
  }
  return;
}

bool ObjectModuleImpl::PostSim(bool paused) {
	cXPerson *selected;
	SInt16 killID;
	cXObject *obj;
	SInt16 *result;
	SInt16 *first;
	ptrdiff_t n;
	cXMTObject *mtObj;
	cXObject *ptr;
	
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  void *pvVar4;
  ObjectModule__vtable *pOVar5;
  long lVar6;
  int iVar7;
  ushort *puVar8;
  ushort *puVar9;
  TreeSim **ppTVar10;
  
  if (!paused) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    puVar8 = (this->fKillQueue).start;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    iVar7 = (int)(this->fKillQueue).finish - (int)puVar8;
                    /* end of inlined section */
    while (iVar7 >> 1 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      puVar3 = (this->fKillQueue).finish;
      puVar9 = puVar8 + 1;
      uVar1 = *puVar8;
      if (puVar9 == puVar3) {
LAB_00236c64:
        puVar8 = (this->fKillQueue).finish;
      }
      else {
        iVar7 = (int)puVar3 - (int)puVar9 >> 1;
        if (0 < iVar7) {
          do {
            uVar2 = *puVar9;
            iVar7 = iVar7 + -1;
            puVar9 = puVar9 + 1;
            *puVar8 = uVar2;
            puVar8 = puVar8 + 1;
          } while (0 < iVar7);
          goto LAB_00236c64;
        }
        puVar8 = (this->fKillQueue).finish;
      }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      (this->fKillQueue).finish = puVar8 + -1;
                    /* end of inlined section */
      pOVar5 = (this->field0_0x0).__vtable;
      lVar6 = (*(code *)pOVar5->AdvanceSelectedPerson)
                        ((int)this->fObjectMap[-1] + *(short *)&pOVar5->SetSelectedPerson + 0x44,
                         uVar1);
      if (lVar6 == 0) {
        puVar8 = (this->fKillQueue).start;
      }
      else {
        ppTVar10 = (TreeSim **)lVar6;
        lVar6 = (*(code *)ppTVar10[1][0x18].m_pCursorObject)
                          ((int)ppTVar10 + (int)*(short *)&ppTVar10[1][0x18].m_pMTObject);
        if (lVar6 == 0) {
          pOVar5 = (this->field0_0x0).__vtable;
        }
        else {
                    /* inlined from SCID.h */
          pvVar4 = _dyncastimpl__7TreeSim4SCID(*ppTVar10,cXMTObjectID);
                    /* end of inlined section */
          if (pvVar4 == (void *)0x0) {
            pOVar5 = (this->field0_0x0).__vtable;
          }
          else {
            lVar6 = (**(code **)(*(int *)((int)pvVar4 + 4) + 0x4c))
                              ((int)pvVar4 + (int)*(short *)(*(int *)((int)pvVar4 + 4) + 0x48));
            if (lVar6 == 0) {
              pOVar5 = (this->field0_0x0).__vtable;
            }
            else {
              (**(code **)(*(int *)((int)pvVar4 + 4) + 0x5c))
                        ((int)pvVar4 + (int)*(short *)(*(int *)((int)pvVar4 + 4) + 0x58));
              pOVar5 = (this->field0_0x0).__vtable;
            }
          }
        }
        (*(code *)pOVar5->CheckIntegrity)
                  ((int)this->fObjectMap[-1] + *(short *)&pOVar5->GetNumObjects + 0x44,uVar1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        puVar8 = (this->fKillQueue).start;
      }
      iVar7 = (int)(this->fKillQueue).finish - (int)puVar8;
                    /* end of inlined section */
    }
    if (*(int *)&this->fPersonRelationshipsChanged == 0) {
      pOVar5 = (this->field0_0x0).__vtable;
      goto LAB_00236d90;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    iVar7 = (*(code *)_5Globs_pSimulator->__vtable[1].SetMode)
                      ((int)&_5Globs_pSimulator->__vtable +
                       (int)*(short *)&_5Globs_pSimulator->__vtable[1].GetMode);
    if (iVar7 % 0x28 != 0) {
      pOVar5 = (this->field0_0x0).__vtable;
      goto LAB_00236d90;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pNeighborhood->__vtable[1].LoadHouse)
              ((int)&_5Globs_pNeighborhood->__vtable +
               (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].GetFamilyNetWorth);
    *(undefined4 *)&this->fPersonRelationshipsChanged = 0;
  }
  pOVar5 = (this->field0_0x0).__vtable;
LAB_00236d90:
  lVar6 = (*(code *)pOVar5->SetSimFlag)
                    ((int)this->fObjectMap[-1] + *(short *)&pOVar5->GetIdleStatus + 0x44);
  if (lVar6 == 0) {
    pOVar5 = (this->field0_0x0).__vtable;
    (**(code **)(pOVar5 + 1))((int)this->fObjectMap[-1] + *(short *)&pOVar5->SetTileObjectID + 0x44)
    ;
  }
  else if ((gAllowVisitorControl == 0) &&
          (iVar7 = *(int *)((int)lVar6 + 4),
          lVar6 = (**(code **)(iVar7 + 0x164))((int)lVar6 + (int)*(short *)(iVar7 + 0x160)),
          lVar6 != 0)) {
    pOVar5 = (this->field0_0x0).__vtable;
    (**(code **)(pOVar5 + 1))((int)this->fObjectMap[-1] + *(short *)&pOVar5->SetTileObjectID + 0x44)
    ;
  }
  return false;
}

void ObjectModuleImpl::DayChanged() {
	cXObject *srch;
	cXObject *this;
	
  ObjectModule__vtable *pOVar1;
  cXObjectImpl__127_901 *this_00;
  code *pcVar2;
  int iVar4;
  long lVar3;
  
  pOVar1 = (this->field0_0x0).__vtable;
  pcVar2 = (code *)pOVar1->LevelInfoRequested;
  iVar4 = (int)this->fObjectMap[-1] + *(short *)&pOVar1->CleanupPeople + 0x44;
  while (lVar3 = (*pcVar2)(iVar4), lVar3 != 0) {
    iVar4 = (int)lVar3;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    this_00 = (cXObjectImpl__127_901 *)
              (**(code **)(*(int *)(iVar4 + 4) + 0x454))
                        (iVar4 + *(short *)(*(int *)(iVar4 + 4) + 0x450));
                    /* end of inlined section */
    DayPassed__12cXObjectImpl(this_00);
    pcVar2 = *(code **)(*(int *)(iVar4 + 4) + 0x3fc);
    iVar4 = iVar4 + *(short *)(*(int *)(iVar4 + 4) + 0x3f8);
  }
  return;
}

void ObjectModuleImpl::UpdateRooms(int inLevel) {
	cXObjectImpl *obj;
	cXPerson *p;
	cXObjectImpl *ptr;
	
  short sVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  long lVar5;
  ObjectModule__vtable *pOVar6;
  int iVar7;
  long lVar8;
  
  pOVar6 = (this->field0_0x0).__vtable;
  lVar5 = (*(code *)pOVar6->LevelInfoRequested)
                    ((int)this->fObjectMap[-1] + *(short *)&pOVar6->CleanupPeople + 0x44);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
  lVar8 = 0;
  if (lVar5 != 0) {
    iVar7 = *(int *)((int)lVar5 + 4);
    lVar8 = (**(code **)(iVar7 + 0x454))((int)lVar5 + (int)*(short *)(iVar7 + 0x450));
  }
                    /* end of inlined section */
  if (lVar8 != 0) {
    iVar7 = *(int *)((int)lVar8 + 4);
    do {
      lVar5 = (**(code **)(*(int *)(iVar7 + 4) + 0x2d4))
                        (iVar7 + *(short *)(*(int *)(iVar7 + 4) + 0x2d0));
      iVar7 = (int)lVar8;
      if (lVar5 == 0) {
        iVar4 = *(int *)(*(int *)(iVar7 + 4) + 4);
        (**(code **)(iVar4 + 0x184))(*(int *)(iVar7 + 4) + (int)*(short *)(iVar4 + 0x180),1);
        __ls__7CTGDumpPCc(&ctgDump,"Forcing level 0 object to level 1\n");
      }
      iVar4 = *(int *)(iVar7 + 4);
      if (inLevel == 0) {
LAB_00236f74:
        iVar4 = (**(code **)(*(int *)(iVar4 + 4) + 0x2d4))
                          (iVar4 + *(short *)(*(int *)(iVar4 + 4) + 0x2d0));
        sVar1 = ResolveRoomID__FRC7FTilePti((FTilePt *)(iVar7 + 200),iVar4);
        *(short *)(iVar7 + 0x60) = sVar1;
        iVar4 = *(int *)(*(int *)(iVar7 + 4) + 4);
        lVar5 = (**(code **)(iVar4 + 0x2ac))(*(int *)(iVar7 + 4) + (int)*(short *)(iVar4 + 0x2a8));
        if (lVar5 == 2) {
                    /* inlined from SCID.h */
          if (lVar8 == 0) {
            pvVar3 = (void *)0x0;
          }
          else {
            pvVar3 = _dyncastimpl__7TreeSim4SCID(**(TreeSim ***)(iVar7 + 4),cXPersonID);
          }
                    /* end of inlined section */
          if (pvVar3 == (void *)0x0) {
            iVar4 = *(int *)(iVar7 + 4);
          }
          else {
            (**(code **)(*(int *)((int)pvVar3 + 4) + 0x13c))
                      ((int)pvVar3 + (int)*(short *)(*(int *)((int)pvVar3 + 4) + 0x138));
            iVar4 = *(int *)(iVar7 + 4);
          }
        }
        else {
          iVar4 = *(int *)(iVar7 + 4);
        }
      }
      else {
        iVar2 = (**(code **)(*(int *)(iVar4 + 4) + 0x2d4))
                          (iVar4 + *(short *)(*(int *)(iVar4 + 4) + 0x2d0));
        iVar4 = *(int *)(iVar7 + 4);
        if (iVar2 == inLevel) goto LAB_00236f74;
      }
      lVar5 = (**(code **)(*(int *)(iVar4 + 4) + 0x3fc))
                        (iVar4 + *(short *)(*(int *)(iVar4 + 4) + 0x3f8));
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
      lVar8 = 0;
      if (lVar5 != 0) {
        iVar7 = *(int *)((int)lVar5 + 4);
        lVar8 = (**(code **)(iVar7 + 0x454))((int)lVar5 + (int)*(short *)(iVar7 + 0x450));
      }
                    /* end of inlined section */
      if (lVar8 == 0) goto code_r0x00237040;
      iVar7 = *(int *)((int)lVar8 + 4);
    } while( true );
  }
  pOVar6 = (this->field0_0x0).__vtable;
LAB_00237044:
  lVar8 = (*(code *)pOVar6->LevelInfoRequested)
                    ((int)this->fObjectMap[-1] + *(short *)&pOVar6->CleanupPeople + 0x44);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
  lVar5 = 0;
  if (lVar8 != 0) {
    iVar7 = *(int *)((int)lVar8 + 4);
    lVar5 = (**(code **)(iVar7 + 0x454))((int)lVar8 + (int)*(short *)(iVar7 + 0x450));
  }
  do {
                    /* end of inlined section */
    if (lVar5 == 0) {
      return;
    }
    iVar7 = (int)lVar5;
    if (inLevel == 0) {
      iVar4 = *(int *)(iVar7 + 4);
LAB_002370ac:
      (**(code **)(*(int *)(iVar4 + 4) + 0xdc))
                (iVar4 + *(short *)(*(int *)(iVar4 + 4) + 0xd8),7,0,0);
      iVar7 = *(int *)(iVar7 + 4);
    }
    else {
      iVar4 = *(int *)(*(int *)(iVar7 + 4) + 4);
      iVar4 = (**(code **)(iVar4 + 0x2d4))(*(int *)(iVar7 + 4) + (int)*(short *)(iVar4 + 0x2d0));
      if (iVar4 == inLevel) {
        iVar4 = *(int *)(iVar7 + 4);
        goto LAB_002370ac;
      }
      iVar7 = *(int *)(iVar7 + 4);
    }
    lVar8 = (**(code **)(*(int *)(iVar7 + 4) + 0x3fc))
                      (iVar7 + *(short *)(*(int *)(iVar7 + 4) + 0x3f8));
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    lVar5 = 0;
    if (lVar8 != 0) {
      iVar7 = *(int *)((int)lVar8 + 4);
      lVar5 = (**(code **)(iVar7 + 0x454))((int)lVar8 + (int)*(short *)(iVar7 + 0x450));
    }
  } while( true );
code_r0x00237040:
  pOVar6 = (this->field0_0x0).__vtable;
  goto LAB_00237044;
}

ErrType ObjectModuleImpl::KillAllObjects() {
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	cXObjectImpl **first;
	cXObjectImpl **last;
	cXObjectImpl **pointer;
	
  short sVar1;
  cXObject__128_898__vtable *pcVar2;
  cXObjectImpl__128_1095 *pcVar3;
  undefined8 uVar4;
  int iVar5;
  ObjectModule__vtable *pOVar6;
  
  if (this->fFirst != (cXObjectImpl__128_1095 *)0x0) {
    pcVar3 = this->fFirst;
    pOVar6 = (this->field0_0x0).__vtable;
    while( true ) {
      sVar1 = *(short *)&pOVar6->GetNumObjects;
      pcVar2 = pcVar3->_vb898->__vtable;
      uVar4 = (*(code *)pcVar2[1].UserCanPlace)
                        ((int)&pcVar3->_vb898->_vb1093 + (int)*(short *)&pcVar2[1].IsPartOfMe);
      (*(code *)pOVar6->CheckIntegrity)((int)this->fObjectMap[-1] + sVar1 + 0x44,uVar4);
      pcVar3 = this->fFirst;
      if (pcVar3 == (cXObjectImpl__128_1095 *)0x0) break;
      pOVar6 = (this->field0_0x0).__vtable;
    }
  }
  for (iVar5 = *(int *)&this->field_0x1c; iVar5 != *(int *)&this->field_0x20; iVar5 = iVar5 + 4) {
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  *(int *)&this->field_0x20 = *(int *)&this->field_0x1c;
                    /* end of inlined section */
  return 0;
}

ErrType ObjectModuleImpl::KillObjectsInvalidatedByResize() {
	cXObjectImpl *cur_obj;
	int world_size;
	int max_world_size;
	CTilePt where;
	cXObjectImpl *next_obj;
	cXObject *leader;
	cXObjectImpl *ptr;
	cXObjectImpl *ptr;
	
  short sVar1;
  cXObject__128_898__vtable *pcVar2;
  ObjectModule__vtable *pOVar3;
  cXObjectImpl__128_1095 *pcVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  cXObject__128_898 *pcVar11;
  cXObjectImpl__128_1095 *pcVar12;
  cXObjectImpl__128_1095 *pcVar13;
  CTilePt where;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  pcVar12 = this->fFirst;
  iVar5 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                    ((int)&_5Globs_pFixedWorld->__vtable +
                     (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  iVar6 = (*(code *)_5Globs_pFixedWorld->__vtable->GetWalls)
                    ((int)&_5Globs_pFixedWorld->__vtable +
                     (int)*(short *)&_5Globs_pFixedWorld->__vtable->SetFloor);
  if (pcVar12 == (cXObjectImpl__128_1095 *)0x0) {
    return 0;
  }
  pcVar11 = pcVar12->_vb898;
  do {
    (*(code *)pcVar11->__vtable[1].TestIntersection)
              (&where,(int)&pcVar11->_vb1093 + (int)*(short *)&pcVar11->__vtable[1].IsInWorld);
    pcVar2 = pcVar12->_vb898->__vtable;
    lVar9 = (*(code *)pcVar2[1].GetFrontFaceDirection)
                      ((int)&pcVar12->_vb898->_vb1093 +
                       (int)*(short *)&pcVar2[1].GetInteractionLeader);
    if (lVar9 == 0) {
      pcVar13 = pcVar12->fNext;
    }
    else {
                    /* inlined from SCID.h */
      iVar8 = _o_cd;
      if (pcVar12 != (cXObjectImpl__128_1095 *)0x0) {
        pvVar7 = _dyncastimpl__7TreeSim4SCID(pcVar12->_vb898->_vb1093,cXMTObjectImplID);
        iVar8 = *(int *)((int)pvVar7 + 0xc);
      }
      pcVar11 = (cXObject__128_898 *)0x0;
      if (iVar8 != 0) {
        pcVar11 = **(cXObject__128_898 ***)(iVar8 + 4);
      }
      pcVar4 = pcVar12->fNext;
      while ((pcVar13 = pcVar4, pcVar13 != (cXObjectImpl__128_1095 *)0x0 &&
             (pcVar2 = pcVar13->_vb898->__vtable,
             lVar9 = (*(code *)pcVar2[1].GetFrontFaceDirection)
                               ((int)&pcVar13->_vb898->_vb1093 +
                                (int)*(short *)&pcVar2[1].GetInteractionLeader), lVar9 != 0))) {
        if (pcVar13 == (cXObjectImpl__128_1095 *)0x0) {
          pcVar4 = pcRam000000bc;
          if (pcVar11 != (cXObject__128_898 *)0x0) {
LAB_0023730c:
                    /* inlined from SCID.h */
            iVar8 = _o_cd;
            if (pcVar13 != (cXObjectImpl__128_1095 *)0x0) {
              pvVar7 = _dyncastimpl__7TreeSim4SCID(pcVar13->_vb898->_vb1093,cXMTObjectImplID);
              iVar8 = *(int *)((int)pvVar7 + 0xc);
            }
            if (iVar8 == 0) {
              if (pcVar11 != (cXObject__128_898 *)0x0) break;
              pcVar4 = pcVar13->fNext;
            }
            else {
              if (pcVar11 != **(cXObject__128_898 ***)(iVar8 + 4)) break;
              pcVar4 = pcVar13->fNext;
            }
          }
        }
        else {
          if (pcVar11 != pcVar13->_vb898) goto LAB_0023730c;
          pcVar4 = pcVar13->fNext;
        }
      }
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    lVar9 = (*(code *)_5Globs_pFixedWorld->__vtable->SetWall)
                      ((int)&_5Globs_pFixedWorld->__vtable +
                       (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetWall,&where);
    if (lVar9 != 0) {
      iVar8 = GetX__C7CTilePt(&where);
      if ((iVar5 + -1 <= iVar8) && (iVar8 = GetY__C7CTilePt(&where), iVar5 + -1 <= iVar8)) {
        iVar8 = GetX__C7CTilePt(&where);
        if ((iVar8 < iVar6 + -1) && (iVar8 = GetY__C7CTilePt(&where), iVar8 < iVar6 + -1)) {
          pOVar3 = (this->field0_0x0).__vtable;
          pcVar2 = pcVar12->_vb898->__vtable;
          sVar1 = *(short *)&pOVar3->GetNumObjects;
          uVar10 = (*(code *)pcVar2[1].UserCanPlace)
                             ((int)&pcVar12->_vb898->_vb1093 + (int)*(short *)&pcVar2[1].IsPartOfMe)
          ;
          (*(code *)pOVar3->CheckIntegrity)((int)this->fObjectMap[-1] + sVar1 + 0x44,uVar10);
        }
      }
    }
    ___7CTilePt(&where,2);
    if (pcVar13 == (cXObjectImpl__128_1095 *)0x0) {
      return 0;
    }
    pcVar11 = pcVar13->_vb898;
    pcVar12 = pcVar13;
  } while( true );
}

void ObjectModuleImpl::UpdateSimObjects() {
	vector<cXObjectImpl *,__malloc_alloc_template<0> > simObjects;
	cXObjectImpl *srch;
	ObjSelector *sel;
	cXObjectImpl *&x;
	cXObjectImpl *&value;
	ObjSelector *this;
	ObjSelector *this;
	SInt16 foundID;
	cXObjectImpl **i;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	cXObjectImpl **position;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	cXObjectImpl **result;
	cXObjectImpl **result;
	cXObjectImpl **result;
	cXObjectImpl **first;
	ptrdiff_t n;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	cXObjectImpl **last;
	cXObjectImpl **first;
	cXObjectImpl **pointer;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	void *pAddress;
	
  short sVar1;
  cXObject__128_898__vtable *pcVar2;
  ObjectModule__vtable *pOVar3;
  cXObject__128_898 *pcVar4;
  ObjDefinition *pOVar5;
  int iVar6;
  cXObjectImpl__128_1095 *pcVar7;
  cXObjectImpl__128_1095 **ppcVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  cXObjectImpl__128_1095 **ppcVar12;
  undefined8 unaff_s0;
  long lVar13;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  vector_cXObjectImpl_____malloc_alloc_template_0___ simObjects;
  cXObjectImpl__128_1095 *srch;
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
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  simObjects.start = (cXObjectImpl__128_1095 **)0x0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  simObjects.finish = (cXObjectImpl__128_1095 **)0x0;
  simObjects.end_of_storage = (cXObjectImpl__128_1095 **)0x0;
  pcVar7 = this->fFirst;
                    /* end of inlined section */
  while (srch = pcVar7, srch != (cXObjectImpl__128_1095 *)0x0) {
    pcVar2 = srch->_vb898->__vtable;
    iVar6 = (*(code *)pcVar2[1].HandleError)
                      ((int)&srch->_vb898->_vb1093 + (int)*(short *)&pcVar2[1].Error);
    if (*(short *)(iVar6 + 0x54) != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      if (simObjects.finish == simObjects.end_of_storage) {
        insert_aux__t6vector2ZP12cXObjectImplZt23__malloc_alloc_template1i0PP12cXObjectImplRCP12cXObjectImpl
                  (&simObjects,simObjects.finish,&srch);
      }
      else {
        *simObjects.finish = srch;
        simObjects.finish = simObjects.finish + 1;
      }
    }
                    /* end of inlined section */
    pcVar2 = srch->_vb898->__vtable;
    lVar9 = (*(code *)pcVar2[1].IsDeletedByEvict)
                      ((int)&srch->_vb898->_vb1093 + (int)*(short *)&pcVar2[1].GetObjectLightSource)
    ;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    pcVar7 = (cXObjectImpl__128_1095 *)0x0;
    if (lVar9 != 0) {
      iVar6 = *(int *)((int)lVar9 + 4);
      pcVar7 = (cXObjectImpl__128_1095 *)
               (**(code **)(iVar6 + 0x454))((int)lVar9 + (int)*(short *)(iVar6 + 0x450));
    }
  }
                    /* end of inlined section */
  lVar9 = 0;
LAB_002376a0:
  do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    lVar9 = (*(code *)_5Globs_pObjectFolder->__vtable->ResumeObjectFiles)
                      ((int)&_5Globs_pObjectFolder->__vtable +
                       (int)*(short *)&_5Globs_pObjectFolder->__vtable->SuspendObjectFiles,lVar9);
    ppcVar12 = simObjects.start;
    if (lVar9 == 0) {
      for (; ppcVar12 != simObjects.finish; ppcVar12 = ppcVar12 + 1) {
      }
      if ((simObjects.start != (cXObjectImpl__128_1095 **)0x0) &&
         ((int)simObjects.end_of_storage - (int)simObjects.start >> 2 != 0)) {
        free(simObjects.start);
                    /* end of inlined section */
      }
      return;
    }
    pOVar5 = ((ObjSelector *)lVar9)->fHeader;
                    /* end of inlined section */
  } while (pOVar5->type != 7);
LAB_00237568:
                    /* end of inlined section */
  if (pOVar5->globalSimulationObject != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    lVar13 = 0;
    if (simObjects.start != simObjects.finish) {
      pcVar7 = *simObjects.start;
      ppcVar12 = simObjects.start;
      do {
        pcVar2 = pcVar7->_vb898->__vtable;
        lVar10 = (*(code *)pcVar2[1].SetLevel)
                           ((int)&pcVar7->_vb898->_vb1093 + (int)*(short *)&pcVar2[1].GetTreeID);
        if (lVar10 == lVar9) {
          if (lVar13 != 0) goto code_r0x002375b0;
          pcVar4 = (*ppcVar12)->_vb898;
          pcVar2 = pcVar4->__vtable;
          lVar13 = (*(code *)pcVar2[1].UserCanPlace)
                             ((int)&pcVar4->_vb1093 + (int)*(short *)&pcVar2[1].IsPartOfMe);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        }
                    /* end of inlined section */
        ppcVar12 = ppcVar12 + 1;
        if (ppcVar12 == simObjects.finish) break;
        pcVar7 = *ppcVar12;
      } while( true );
    }
    if (lVar13 == 0) {
      pOVar3 = (this->field0_0x0).__vtable;
      lVar13 = (*(code *)pOVar3->GetObject)
                         ((int)this->fObjectMap[-1] + *(short *)&pOVar3->GetFirst + 0x44,lVar9);
    }
    iVar6 = GetGUID__11ObjSelector((ObjSelector *)lVar9);
    if (iVar6 == 0x3eec206c) {
      this->fAnimTesterObject = (ushort)lVar13;
    }
  }
  goto LAB_002376a0;
code_r0x002375b0:
  pOVar3 = (this->field0_0x0).__vtable;
  pcVar4 = (*ppcVar12)->_vb898;
  sVar1 = *(short *)&pOVar3->GetNumObjects;
  pcVar2 = pcVar4->__vtable;
  uVar11 = (*(code *)pcVar2[1].UserCanPlace)
                     ((int)&pcVar4->_vb1093 + (int)*(short *)&pcVar2[1].IsPartOfMe);
  (*(code *)pOVar3->CheckIntegrity)((int)this->fObjectMap[-1] + sVar1 + 0x44,uVar11);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  ppcVar8 = ppcVar12 + 1;
  if (ppcVar8 != simObjects.finish) {
    for (iVar6 = (int)simObjects.finish - (int)ppcVar8 >> 2; 0 < iVar6; iVar6 = iVar6 + -1) {
      pcVar7 = *ppcVar8;
      ppcVar8 = ppcVar8 + 1;
      *ppcVar12 = pcVar7;
      ppcVar12 = ppcVar12 + 1;
    }
  }
  simObjects.finish = simObjects.finish + -1;
                    /* end of inlined section */
  goto LAB_00237568;
}

void ObjectModuleImpl::AddToKillQueue(SInt16 id, bool cleanup) {
	cXObject *obj;
	cXObject *rootSrch;
	cXMTObject *mtObj;
	cXObject *ptr;
	cXMTObject *lead;
	int i;
	unsigned int n;
	int i;
	unsigned int n;
	
  ObjectModule__vtable *pOVar1;
  int iVar2;
  ushort uVar3;
  TreeSim **ppTVar4;
  void *pvVar5;
  TreeSim **ppTVar6;
  long lVar7;
  TreeSim *pTVar8;
  ushort *puVar9;
  undefined8 unaff_s0;
  int iVar10;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  ushort local_90 [8];
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
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  pOVar1 = (this->field0_0x0).__vtable;
  local_90[0] = id;
  ppTVar4 = (TreeSim **)
            (*(code *)pOVar1->AdvanceSelectedPerson)
                      ((int)this->fObjectMap[-1] + *(short *)&pOVar1->SetSelectedPerson + 0x44,id);
  if (ppTVar4 == (TreeSim **)0x0) {
    return;
  }
  lVar7 = (*(code *)ppTVar4[1][0x18].m_pCursorObject)
                    ((int)ppTVar4 + (int)*(short *)&ppTVar4[1][0x18].m_pMTObject);
  if (lVar7 != 0) {
                    /* inlined from SCID.h */
    pvVar5 = _dyncastimpl__7TreeSim4SCID(*ppTVar4,cXMTObjectID);
                    /* end of inlined section */
    if (pvVar5 == (void *)0x0) {
      return;
    }
    lVar7 = (**(code **)(*(int *)((int)pvVar5 + 4) + 0x4c))
                      ((int)pvVar5 + (int)*(short *)(*(int *)((int)pvVar5 + 4) + 0x48));
    if (lVar7 == 0) {
      ppTVar4 = (TreeSim **)0x0;
      lVar7 = (**(code **)(*(int *)((int)pvVar5 + 4) + 0x14))
                        ((int)pvVar5 + (int)*(short *)(*(int *)((int)pvVar5 + 4) + 0x10));
      if (lVar7 != 0) {
        ppTVar4 = (TreeSim **)*(int *)lVar7;
      }
      iVar10 = *(int *)lVar7;
      iVar2 = *(int *)(iVar10 + 4);
      local_90[0] = (**(code **)(iVar2 + 700))(iVar10 + *(short *)(iVar2 + 0x2b8));
    }
  }
  ppTVar6 = ppTVar4;
  do {
    pTVar8 = ppTVar6[1];
    do {
      lVar7 = (*(code *)pTVar8[0x13].m_pCursorObject)
                        ((int)ppTVar6 + (int)*(short *)&pTVar8[0x13].m_pMTObject);
      if (lVar7 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        puVar9 = (this->fKillQueue).start;
                    /* end of inlined section */
        iVar10 = ((int)(this->fKillQueue).finish - (int)puVar9 >> 1) + -1;
        if (-1 < iVar10) {
          puVar9 = puVar9 + iVar10;
          do {
                    /* end of inlined section */
            iVar10 = iVar10 + -1;
            if (*puVar9 == local_90[0]) {
              return;
            }
            puVar9 = puVar9 + -1;
          } while (-1 < iVar10);
        }
        (*(code *)ppTVar4[1][8].m_pPerson)((int)ppTVar4 + (int)*(short *)&ppTVar4[1][8].m_pObject);
        (*(code *)ppTVar4[1][2].m_pCursorObject)
                  ((int)ppTVar4 + (int)*(short *)&ppTVar4[1][2].m_pMTObject,0x1000,!cleanup);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        puVar9 = (this->fKillQueue).finish;
        if (puVar9 == (this->fKillQueue).end_of_storage) {
          insert_aux__t6vector2ZsZt23__malloc_alloc_template1i0PsRCs
                    (&this->fKillQueue,puVar9,local_90);
        }
        else {
          *puVar9 = local_90[0];
          (this->fKillQueue).finish = (this->fKillQueue).finish + 1;
        }
        return;
      }
      ppTVar6 = (TreeSim **)
                (*(code *)ppTVar6[1][0x13].m_pCursorObject)
                          ((int)ppTVar6 + (int)*(short *)&ppTVar6[1][0x13].m_pMTObject);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      iVar10 = ((int)(this->fKillQueue).finish - (int)(this->fKillQueue).start >> 1) + -1;
      pTVar8 = ppTVar6[1];
    } while (iVar10 < 0);
    while( true ) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      puVar9 = (this->fKillQueue).start + iVar10;
                    /* end of inlined section */
      uVar3 = (*(code *)pTVar8[0x15].__vtable)
                        ((int)ppTVar6 + (int)*(short *)&pTVar8[0x15].m_pEoRPerson);
      iVar10 = iVar10 + -1;
      if (*puVar9 == uVar3) {
        return;
      }
      if (iVar10 < 0) break;
      pTVar8 = ppTVar6[1];
    }
  } while( true );
}

bool ObjectModuleImpl::IsFamilyMemberAwakeAndVisible() {
	cXPersonImpl **i;
	vector<cXPersonImpl *,__malloc_alloc_template<0> > *this;
	vector<cXPersonImpl *,__malloc_alloc_template<0> > *this;
	
  cXPerson__123_1079__vtable *pcVar1;
  cXPersonImpl__123_903 **ppcVar2;
  long lVar3;
  cXPersonImpl__123_903 *pcVar4;
  cXPersonImpl__123_903 **ppcVar5;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  ppcVar5 = (this->fPeople).start;
                    /* end of inlined section */
  if (ppcVar5 != (this->fPeople).finish) {
    pcVar4 = *ppcVar5;
    while( true ) {
      if (pcVar4->_vb901->fData[0x22] == 0) {
        pcVar1 = pcVar4->_vb1079->__vtable;
        lVar3 = (**(code **)&pcVar1->field_0x154)
                          ((int)&pcVar4->_vb1079->_vb966 + (int)*(short *)&pcVar1->field_0x150);
        if (lVar3 == 0) {
          pcVar1 = (*ppcVar5)->_vb1079->__vtable;
          lVar3 = (**(code **)&pcVar1->field_0x164)
                            ((int)&(*ppcVar5)->_vb1079->_vb966 + (int)*(short *)&pcVar1->field_0x160
                            );
          if (lVar3 == 0) {
            return true;
          }
          ppcVar2 = (this->fPeople).finish;
        }
        else {
          ppcVar2 = (this->fPeople).finish;
        }
      }
      else {
        ppcVar2 = (this->fPeople).finish;
      }
                    /* end of inlined section */
      ppcVar5 = ppcVar5 + 1;
      if (ppcVar5 == ppcVar2) break;
      pcVar4 = *ppcVar5;
    }
  }
  return false;
}

Boolean ObjectModuleImpl::DoCommand(SInt16 command, SInt32 info) {
	SlotLoader sl;
	vector<RoutingSlot,__malloc_alloc_template<0> > *this;
	vector<RoutingSlot,__malloc_alloc_template<0> > *this;
	vector<RoutingSlot,__malloc_alloc_template<0> > *this;
	vector<RoutingSlot,__malloc_alloc_template<0> > *this;
	vector<RoutingSlot,__malloc_alloc_template<0> > *this;
	RoutingSlot *first;
	RoutingSlot *last;
	RoutingSlot *pointer;
	cXObject *obj;
	
  short sVar1;
  RoutingSlot *pRVar2;
  RoutingSlot *pRVar3;
  ObjectFolder__vtable *pOVar4;
  ObjectModule__vtable *pOVar5;
  ObjectFolder *pOVar6;
  Slot__vtable *pSVar7;
  iResFile__0_3211 *file;
  int iVar8;
  long lVar9;
  code *pcVar10;
  RoutingSlot *pRVar11;
  SlotLoader sl;
  
  if (command == 0xf5) {
    pOVar5 = (this->field0_0x0).__vtable;
    lVar9 = (*(code *)pOVar5->SetSimFlag)
                      ((int)this->fObjectMap[-1] + *(short *)&pOVar5->GetIdleStatus + 0x44);
    if (lVar9 != 0) {
      return 1;
    }
    pOVar5 = (this->field0_0x0).__vtable;
    (**(code **)(pOVar5 + 1))((int)this->fObjectMap[-1] + *(short *)&pOVar5->SetTileObjectID + 0x44)
    ;
    return 1;
  }
  if ((short)command < 0xf6) {
    if (command != 0x85) {
      if (command != 0xf1) {
        return 0;
      }
      pOVar5 = (this->field0_0x0).__vtable;
      lVar9 = (*(code *)pOVar5->AdvanceSelectedPerson)
                        ((int)this->fObjectMap[-1] + *(short *)&pOVar5->SetSelectedPerson + 0x44,
                         info);
      if (lVar9 == 0) {
        return 1;
      }
      iVar8 = (int)lVar9;
      lVar9 = (**(code **)(*(int *)(iVar8 + 4) + 0x29c))
                        (iVar8 + *(short *)(*(int *)(iVar8 + 4) + 0x298));
      if (lVar9 == 0xfffb) {
        return 1;
      }
      iVar8 = (**(code **)(*(int *)(iVar8 + 4) + 0x29c))
                        (iVar8 + *(short *)(*(int *)(iVar8 + 4) + 0x298));
      GlobalDispatch__Fsi(0xf0,iVar8);
      return 1;
    }
    pOVar5 = (this->field0_0x0).__vtable;
    sVar1 = *(short *)&pOVar5->GetTutorialObject;
    pcVar10 = (code *)pOVar5->SetTutorialObject;
  }
  else {
    if (command == 0x104) {
      UpdateSimObjects__16ObjectModuleImpl(this);
      return 1;
    }
    if (0x104 < (short)command) {
      if (command != 0x10a) {
        return 0;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      pRVar2 = (this->fGlobalRoutingSlots).start;
      pRVar3 = (this->fGlobalRoutingSlots).finish;
      if (pRVar2 != pRVar3) {
        pSVar7 = (pRVar2->field0_0x0).__vtable;
        pRVar11 = pRVar2;
        while( true ) {
          (*(code *)pSVar7[1].Slot)((int)pRVar11->multipliers + *(short *)(pSVar7 + 1) + -0x14,2);
          if (pRVar11 + 1 == pRVar3) break;
          pSVar7 = pRVar11[1].field0_0x0.__vtable;
          pRVar11 = pRVar11 + 1;
        }
      }
      pOVar6 = _5Globs_pObjectFolder;
      (this->fGlobalRoutingSlots).finish =
           (RoutingSlot *)((int)(this->fGlobalRoutingSlots).finish - ((int)pRVar3 - (int)pRVar2));
                    /* end of inlined section */
      pOVar4 = pOVar6->__vtable;
      file = (iResFile__0_3211 *)
             (*(code *)pOVar4->GetNextSelector)
                       ((int)&pOVar6->__vtable + (int)*(short *)&pOVar4->CountSelectors);
      __10SlotLoaderP8iResFiles(&sl,file,0);
      Load__10SlotLoadersPt6vector2Z10ObjectSlotZt23__malloc_alloc_template1i0Pt6vector2Z11RoutingSlotZt23__malloc_alloc_template1i0
                (&sl,100,(vector_ObjectSlot___malloc_alloc_template_0___ *)0x0,
                 &this->fGlobalRoutingSlots);
      ___10SlotLoader(&sl,2);
      return 1;
    }
    if (command != 0x100) {
      return 0;
    }
    pOVar5 = (this->field0_0x0).__vtable;
    sVar1 = *(short *)&pOVar5[1].GetObject;
    pcVar10 = (code *)pOVar5[1].GetNumObjects;
  }
  (*pcVar10)((int)this->fObjectMap[-1] + sVar1 + 0x44);
  return 1;
}

bool ObjectModuleImpl::PreviewAnimation(SInt16 personID, SInt16 objectID, SInt16 animationID, bool backwards) {
	cXPerson *person;
	AnimTable *animTable;
	short int stackVars[4];
	Interaction interaction;
	cXObject *obj;
	
  ObjectModule__vtable *pOVar1;
  int iVar2;
  bool bVar3;
  short sVar4;
  cXPerson__142_985 *person;
  cXObject__142_982 *obj;
  long lVar5;
  ushort stackVars [4];
  Interaction interaction;
  
  pOVar1 = (this->field0_0x0).__vtable;
  lVar5 = (*(code *)pOVar1->AdvanceSelectedPerson)
                    ((int)this->fObjectMap[-1] + *(short *)&pOVar1->SetSelectedPerson + 0x44,
                     personID);
                    /* inlined from SCID.h */
  person = (cXPerson__142_985 *)0x0;
  if (lVar5 != 0) {
    person = (cXPerson__142_985 *)_dyncastimpl__7TreeSim4SCID(*(TreeSim **)lVar5,cXPersonID);
  }
                    /* end of inlined section */
  bVar3 = false;
  if (person != (cXPerson__142_985 *)0x0) {
    lVar5 = 0;
    if (objectID != 0) {
      pOVar1 = (this->field0_0x0).__vtable;
      lVar5 = (*(code *)pOVar1->AdvanceSelectedPerson)
                        ((int)this->fObjectMap[-1] + *(short *)&pOVar1->SetSelectedPerson + 0x44,
                         objectID);
      if (lVar5 == 0) {
        return false;
      }
      iVar2 = *(int *)((int)lVar5 + 4);
      lVar5 = (**(code **)(iVar2 + 0x22c))((int)lVar5 + (int)*(short *)(iVar2 + 0x228));
    }
    bVar3 = false;
    if ((lVar5 != 0) && (bVar3 = false, 0 < (short)animationID)) {
      iVar2 = *(int *)lVar5;
      sVar4 = (**(code **)(iVar2 + 0x3c))((int)(int *)lVar5 + (int)*(short *)(iVar2 + 0x38));
      bVar3 = false;
      if ((short)animationID < sVar4) {
        if (this->fAnimTesterObject == 0) {
          bVar3 = false;
        }
        else {
          stackVars[2] = (ushort)backwards;
          stackVars[3] = 0;
          pOVar1 = (this->field0_0x0).__vtable;
          stackVars[0] = objectID;
          stackVars[1] = animationID;
          obj = (cXObject__142_982 *)
                (*(code *)pOVar1->AdvanceSelectedPerson)
                          ((int)this->fObjectMap[-1] + *(short *)&pOVar1->SetSelectedPerson + 0x44,
                           this->fAnimTesterObject);
          __11InteractionP8cXPersonP8cXObjectii(&interaction,person,obj,0,100);
          SetStackVars__11InteractionPs(&interaction,stackVars);
          (*(code *)person->__vtable->GetJobSuitTex)
                    ((int)&person->_vb982 + (int)*(short *)&person->__vtable->GetSAnimator,
                     &interaction);
          ___8BString2(&interaction.fName,2);
          bVar3 = true;
        }
      }
    }
  }
  return bVar3;
}

void ObjectModuleImpl::ForceAllLocations() {
	cXObject *srch;
	
  ObjectModule__vtable *pOVar1;
  code *pcVar2;
  int iVar4;
  long lVar3;
  
  pOVar1 = (this->field0_0x0).__vtable;
  pcVar2 = (code *)pOVar1->LevelInfoRequested;
  iVar4 = (int)this->fObjectMap[-1] + *(short *)&pOVar1->CleanupPeople + 0x44;
  while (lVar3 = (*pcVar2)(iVar4), lVar3 != 0) {
    iVar4 = (int)lVar3;
    (**(code **)(*(int *)(iVar4 + 4) + 0x16c))(iVar4 + *(short *)(*(int *)(iVar4 + 4) + 0x168));
    pcVar2 = *(code **)(*(int *)(iVar4 + 4) + 0x3fc);
    iVar4 = iVar4 + *(short *)(*(int *)(iVar4 + 4) + 0x3f8);
  }
  return;
}

SInt16 ObjectModuleImpl::AddObject(cXObject *_obj, SInt16 newID, bool eol) {
	cXObjectImpl *obj;
	cXPersonImpl *person;
	cXPortal *portal;
	int maxIterations;
	cXObject *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<int,__malloc_alloc_template<0> > *this;
	int &x;
	int &value;
	vector<int,__malloc_alloc_template<0> > *this;
	cXObjectImpl *ptr;
	vector<cXPersonImpl *,__malloc_alloc_template<0> > *this;
	cXPersonImpl *&x;
	cXPersonImpl *&value;
	vector<cXPersonImpl *,__malloc_alloc_template<0> > *this;
	cXObjectImpl *ptr;
	vector<cXPortal *,__malloc_alloc_template<0> > *this;
	cXPortal *&x;
	cXPortal *&value;
	vector<cXPortal *,__malloc_alloc_template<0> > *this;
	int maxIterations;
	
  cXPersonImpl__128_1097 **position;
  cXObject__128_898 *pcVar1;
  cXObject__128_898__vtable *pcVar2;
  cXPortal__128_910 **position_00;
  uint uVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  cXObjectImpl__128_1095 **ppcVar7;
  int iVar8;
  undefined8 unaff_s0;
  cXObjectImpl__128_1095 *pcVar9;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  uint uVar10;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  cXObjectImpl__128_1095 *local_a0;
  int local_9c;
  cXPersonImpl__128_1097 *person;
  cXPortal__128_910 *portal;
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
  
  local_20 = (undefined4)unaff_s7;
  uStack_1c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
  uVar10 = (uint)(short)newID;
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s6;
  uStack_2c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_40 = (undefined4)unaff_s5;
  uStack_3c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  if (_obj == (cXObject__128_898 *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (*(code *)_obj->__vtable[1].GetObjectImplementation)
                      ((int)&_obj->_vb1093 + (int)*(short *)&_obj->__vtable[1].AdvanceGraphic);
  }
                    /* end of inlined section */
  if (uVar10 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    piVar6 = *(int **)&this->field_0x1c;
    uVar3 = *(int *)&this->field_0x20 - (int)piVar6 >> 2;
                    /* end of inlined section */
    uVar10 = 1;
    if (uVar3 != 0) {
      iVar8 = 0x20000;
      do {
                    /* end of inlined section */
        if (*piVar6 == 0) break;
        piVar6 = piVar6 + 1;
        uVar10 = iVar8 >> 0x10;
        iVar8 = iVar8 + 0x10000;
      } while ((uVar10 & 0xffff) <= uVar3);
    }
  }
  if (0 < (int)uVar10) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    iVar8 = *(int *)&this->field_0x1c;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    iVar4 = *(int *)&this->field_0x20 - iVar8;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    while ((uint)(iVar4 >> 2) < (uVar10 & 0xffff)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      ppcVar7 = *(cXObjectImpl__128_1095 ***)&this->field_0x20;
      local_a0 = (cXObjectImpl__128_1095 *)0x0;
      if (ppcVar7 == *(cXObjectImpl__128_1095 ***)&this->field_0x24) {
        insert_aux__t6vector2ZP12cXObjectImplZt23__malloc_alloc_template1i0PP12cXObjectImplRCP12cXObjectImpl
                  ((vector_cXObjectImpl_____malloc_alloc_template_0___ *)&this->field_0x1c,ppcVar7,
                   &local_a0);
      }
      else {
        *ppcVar7 = (cXObjectImpl__128_1095 *)0x0;
        *(int *)&this->field_0x20 = *(int *)&this->field_0x20 + 4;
      }
                    /* end of inlined section */
      local_9c = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      piVar6 = (this->fIdleMap).finish;
      if (piVar6 == (this->fIdleMap).end_of_storage) {
        insert_aux__t6vector2ZiZt23__malloc_alloc_template1i0PiRCi(&this->fIdleMap,piVar6,&local_9c)
        ;
      }
      else {
        *piVar6 = 0;
        (this->fIdleMap).finish = (this->fIdleMap).finish + 1;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      iVar8 = *(int *)&this->field_0x1c;
      iVar4 = *(int *)&this->field_0x20 - iVar8;
                    /* end of inlined section */
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    ppcVar7 = (cXObjectImpl__128_1095 **)(iVar8 + (uVar10 - 1) * 4);
                    /* end of inlined section */
    if (*ppcVar7 == (cXObjectImpl__128_1095 *)0x0) {
      pcVar9 = (cXObjectImpl__128_1095 *)lVar5;
      *ppcVar7 = pcVar9;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      (this->fIdleMap).start[uVar10 - 1] = 0xffff;
      pcVar9->fID = (ushort)uVar10;
      if (eol) {
        if (this->fLast == (cXObjectImpl__128_1095 *)0x0) {
          this->fLast = pcVar9;
          this->fFirst = pcVar9;
        }
        else {
          this->fLast->fNext = pcVar9;
LAB_00238024:
          this->fLast = pcVar9;
        }
      }
      else {
        pcVar9->fNext = this->fFirst;
        this->fFirst = pcVar9;
        if (this->fLast == (cXObjectImpl__128_1095 *)0x0) goto LAB_00238024;
      }
                    /* inlined from SCID.h */
      if (lVar5 == 0) {
        person = (cXPersonImpl__128_1097 *)0x0;
      }
      else {
        person = (cXPersonImpl__128_1097 *)
                 _dyncastimpl__7TreeSim4SCID(pcVar9->_vb898->_vb1093,cXPersonImplID);
      }
                    /* end of inlined section */
      if (person != (cXPersonImpl__128_1097 *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        position = (cXPersonImpl__128_1097 **)(this->fPeople).finish;
        if (position == (cXPersonImpl__128_1097 **)(this->fPeople).end_of_storage) {
          insert_aux__t6vector2ZP12cXPersonImplZt23__malloc_alloc_template1i0PP12cXPersonImplRCP12cXPersonImpl
                    (&this->fPeople,(cXPersonImpl__123_903 **)position,
                     (cXPersonImpl__123_903 **)&person);
        }
        else {
          *position = person;
          (this->fPeople).finish = (this->fPeople).finish + 1;
        }
      }
                    /* inlined from SCID.h */
      if (lVar5 == 0) {
        portal = (cXPortal__128_910 *)0x0;
      }
      else {
        portal = (cXPortal__128_910 *)
                 _dyncastimpl__7TreeSim4SCID(pcVar9->_vb898->_vb1093,cXPortalID);
      }
                    /* end of inlined section */
      if ((portal != (cXPortal__128_910 *)0x0) &&
         (pcVar1 = portal->_vb2848->_vb898, pcVar2 = pcVar1->__vtable,
         lVar5 = (*(code *)pcVar2->GetSelFile)
                           ((int)&pcVar1->_vb1093 + (int)*(short *)&pcVar2->GetBehavior,0xf),
         lVar5 != 0)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        position_00 = (this->fPortals).finish;
        if (position_00 == (this->fPortals).end_of_storage) {
          insert_aux__t6vector2ZP8cXPortalZt23__malloc_alloc_template1i0PP8cXPortalRCP8cXPortal
                    (&this->fPortals,position_00,&portal);
        }
        else {
          *position_00 = portal;
          (this->fPortals).finish = (this->fPortals).finish + 1;
        }
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
      iVar8 = (*(code *)_5Globs_pNeighborhood->__vtable->GetHouseNumberForLevel)
                        ((int)&_5Globs_pNeighborhood->__vtable +
                         (int)*(short *)&_5Globs_pNeighborhood->__vtable->Save);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      _7TreeSim_sMaxIterations =
           (*(int *)&this->field_0x20 - *(int *)&this->field_0x1c >> 2) * 0xf + 10000 +
           iVar8 * iVar8 * 0xf;
                    /* inlined from c:/eor/src2/games/sims/MSrc/TreeSim.h */
      goto LAB_00238158;
    }
  }
  uVar10 = 0;
LAB_00238158:
                    /* end of inlined section */
  return (ushort)uVar10;
}

void ObjectModuleImpl::RemoveObject(cXObject *_obj) {
	cXObjectImpl *obj;
	cXObjectImpl **srch;
	cXObjectImpl *last;
	cXPerson *person;
	cXPortal *portal;
	cXObject *this;
	unsigned int n;
	cXObjectImpl *ptr;
	cXPersonImpl **i;
	vector<cXPersonImpl *,__malloc_alloc_template<0> > *this;
	vector<cXPersonImpl *,__malloc_alloc_template<0> > *this;
	cXPersonImpl **position;
	vector<cXPersonImpl *,__malloc_alloc_template<0> > *this;
	vector<cXPersonImpl *,__malloc_alloc_template<0> > *this;
	cXPersonImpl **result;
	cXPersonImpl **result;
	cXPersonImpl **result;
	cXPersonImpl **first;
	ptrdiff_t n;
	cXObjectImpl *ptr;
	cXPortal **i;
	vector<cXPortal *,__malloc_alloc_template<0> > *this;
	vector<cXPortal *,__malloc_alloc_template<0> > *this;
	cXPortal **position;
	vector<cXPortal *,__malloc_alloc_template<0> > *this;
	vector<cXPortal *,__malloc_alloc_template<0> > *this;
	cXPortal **result;
	cXPortal **result;
	cXPortal **result;
	cXPortal **first;
	ptrdiff_t n;
	bool found;
	cXObjectImpl **i;
	
  cXPortal__128_910 **ppcVar1;
  ObjectModule__vtable *pOVar2;
  bool bVar3;
  cXObjectImpl__128_1095 *pcVar4;
  cXPerson__123_1079 *pcVar5;
  cXPersonImpl__123_903 *pcVar6;
  cXPersonImpl__123_903 **ppcVar7;
  cXPortal__128_910 *pcVar8;
  cXPortal__128_910 *pcVar9;
  int iVar10;
  cXObjectImpl__128_1095 **ppcVar11;
  cXObjectImpl__128_1095 *pcVar12;
  cXPersonImpl__123_903 **ppcVar13;
  cXPortal__128_910 **ppcVar14;
  cXPersonImpl__123_903 **ppcVar15;
  cXPortal__128_910 **ppcVar16;
  cXObject__128_898 *pcVar17;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
  if (_obj == (cXObject__128_898 *)0x0) {
    pcVar4 = (cXObjectImpl__128_1095 *)0x0;
  }
  else {
    pcVar4 = (cXObjectImpl__128_1095 *)
             (*(code *)_obj->__vtable[1].GetObjectImplementation)
                       ((int)&_obj->_vb1093 + (int)*(short *)&_obj->__vtable[1].AdvanceGraphic);
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  ppcVar11 = (cXObjectImpl__128_1095 **)(*(int *)&this->field_0x1c + ((short)pcVar4->fID + -1) * 4);
                    /* end of inlined section */
  if (*ppcVar11 != pcVar4) {
    return;
  }
                    /* end of inlined section */
  *ppcVar11 = (cXObjectImpl__128_1095 *)0x0;
  pcVar12 = (cXObjectImpl__128_1095 *)0x0;
  if (this->fFirst != (cXObjectImpl__128_1095 *)0x0) {
    if (this->fFirst == pcVar4) {
      this->fFirst = pcVar4->fNext;
    }
    else {
      pcVar12 = this->fFirst;
      while( true ) {
        if (pcVar12->fNext == (cXObjectImpl__128_1095 *)0x0) break;
        if (pcVar12->fNext == pcVar4) {
          pcVar12->fNext = pcVar4->fNext;
          break;
        }
        pcVar12 = pcVar12->fNext;
      }
    }
  }
  if (pcVar4 == this->fLast) {
    this->fLast = pcVar12;
  }
                    /* inlined from SCID.h */
  if (pcVar4 == (cXObjectImpl__128_1095 *)0x0) {
    pcVar5 = (cXPerson__123_1079 *)0x0;
  }
  else {
    pcVar5 = (cXPerson__123_1079 *)_dyncastimpl__7TreeSim4SCID(pcVar4->_vb898->_vb1093,cXPersonID);
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  if ((pcVar5 != (cXPerson__123_1079 *)0x0) &&
     (ppcVar15 = (this->fPeople).start, ppcVar15 != (this->fPeople).finish)) {
    pcVar6 = *ppcVar15;
    while (pcVar6 != (cXPersonImpl__123_903 *)0x0) {
      if (pcVar6->_vb1079 == pcVar5) {
        ppcVar7 = (this->fPeople).finish;
        goto LAB_002382a8;
      }
      ppcVar7 = (this->fPeople).finish;
LAB_002382f4:
                    /* end of inlined section */
      ppcVar15 = ppcVar15 + 1;
      if (ppcVar15 == ppcVar7) goto LAB_00238300;
      pcVar6 = *ppcVar15;
    }
    if (pcVar5 != (cXPerson__123_1079 *)0x0) {
      ppcVar7 = (this->fPeople).finish;
      goto LAB_002382f4;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    ppcVar7 = (this->fPeople).finish;
LAB_002382a8:
    ppcVar13 = ppcVar15 + 1;
    if (ppcVar13 == ppcVar7) goto LAB_002382e4;
    iVar10 = (int)ppcVar7 - (int)ppcVar13 >> 2;
    if (iVar10 < 1) {
      ppcVar15 = (this->fPeople).finish;
    }
    else {
      do {
        pcVar6 = *ppcVar13;
        iVar10 = iVar10 + -1;
        ppcVar13 = ppcVar13 + 1;
        *ppcVar15 = pcVar6;
        ppcVar15 = ppcVar15 + 1;
      } while (0 < iVar10);
LAB_002382e4:
      ppcVar15 = (this->fPeople).finish;
    }
                    /* end of inlined section */
    (this->fPeople).finish = ppcVar15 + -1;
  }
LAB_00238300:
                    /* inlined from SCID.h */
  if (pcVar4 == (cXObjectImpl__128_1095 *)0x0) {
    pcVar8 = (cXPortal__128_910 *)0x0;
  }
  else {
    pcVar8 = (cXPortal__128_910 *)_dyncastimpl__7TreeSim4SCID(pcVar4->_vb898->_vb1093,cXPortalID);
  }
                    /* end of inlined section */
  if (pcVar8 == (cXPortal__128_910 *)0x0) {
    ppcVar11 = (this->fDisablers).start;
    goto LAB_002383a8;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  ppcVar16 = (this->fPortals).start;
                    /* end of inlined section */
  if (ppcVar16 != (this->fPortals).finish) {
    pcVar9 = *ppcVar16;
    while (pcVar9 != pcVar8) {
                    /* end of inlined section */
      ppcVar16 = ppcVar16 + 1;
      if (ppcVar16 == (this->fPortals).finish) goto LAB_002383a0;
      pcVar9 = *ppcVar16;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    ppcVar1 = (this->fPortals).finish;
    ppcVar14 = ppcVar16 + 1;
    if (ppcVar14 == ppcVar1) {
LAB_00238384:
      ppcVar16 = (this->fPortals).finish;
    }
    else {
      iVar10 = (int)ppcVar1 - (int)ppcVar14 >> 2;
      if (0 < iVar10) {
        do {
          pcVar8 = *ppcVar14;
          iVar10 = iVar10 + -1;
          ppcVar14 = ppcVar14 + 1;
          *ppcVar16 = pcVar8;
          ppcVar16 = ppcVar16 + 1;
        } while (0 < iVar10);
        goto LAB_00238384;
      }
      ppcVar16 = (this->fPortals).finish;
    }
                    /* end of inlined section */
    (this->fPortals).finish = ppcVar16 + -1;
  }
LAB_002383a0:
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  ppcVar11 = (this->fDisablers).start;
LAB_002383a8:
  do {
    bVar3 = false;
    do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      if (ppcVar11 == (this->fDisablers).finish) goto LAB_002383f4;
      pcVar12 = *ppcVar11;
      ppcVar11 = ppcVar11 + 1;
    } while (pcVar12 != pcVar4);
    pOVar2 = (this->field0_0x0).__vtable;
    pcVar17 = (cXObject__128_898 *)0x0;
    if (pcVar4 != (cXObjectImpl__128_1095 *)0x0) {
      pcVar17 = pcVar4->_vb898;
    }
    (*(code *)pOVar2[1].DoReconObject)
              ((int)this->fObjectMap[-1] + *(short *)&pOVar2[1].DoStream + 0x44,pcVar17);
    bVar3 = true;
LAB_002383f4:
    if (!bVar3) {
      return;
    }
    ppcVar11 = (this->fDisablers).start;
  } while( true );
}

void ObjectModuleImpl::DisableBuyAndBuild(cXObject *disabler) {
	bool disabled;
	cXObject *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	
  ObjectModule__vtable *pOVar1;
  cXObjectImpl__128_1095 **position;
  long lVar2;
  long lVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  cXObjectImpl__128_1095 *local_50 [4];
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
  pOVar1 = (this->field0_0x0).__vtable;
  lVar2 = (*(code *)pOVar1[1].GetTutorialObject)
                    ((int)this->fObjectMap[-1] + *(short *)&pOVar1[1].DoReconPerson + 0x44);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
  if (disabler == (cXObject__128_898 *)0x0) {
    local_50[0] = (cXObjectImpl__128_1095 *)0x0;
  }
  else {
    local_50[0] = (cXObjectImpl__128_1095 *)
                  (*(code *)disabler->__vtable[1].GetObjectImplementation)
                            ((int)&disabler->_vb1093 +
                             (int)*(short *)&disabler->__vtable[1].AdvanceGraphic);
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  position = (this->fDisablers).finish;
  if (position == (this->fDisablers).end_of_storage) {
    insert_aux__t6vector2ZP12cXObjectImplZt23__malloc_alloc_template1i0PP12cXObjectImplRCP12cXObjectImpl
              (&this->fDisablers,position,local_50);
  }
  else {
    *position = local_50[0];
    (this->fDisablers).finish = (this->fDisablers).finish + 1;
  }
                    /* end of inlined section */
  pOVar1 = (this->field0_0x0).__vtable;
  lVar3 = (*(code *)pOVar1[1].GetTutorialObject)
                    ((int)this->fObjectMap[-1] + *(short *)&pOVar1[1].DoReconPerson + 0x44);
  if (lVar2 != lVar3) {
    GlobalDispatch__Fsi(0x107,0);
  }
  return;
}

void ObjectModuleImpl::EnableBuyAndBuild(cXObject *enabler) {
	bool disabled;
	cXObjectImpl **i;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	cXObjectImpl **position;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	cXObjectImpl **result;
	cXObjectImpl **result;
	cXObjectImpl **result;
	cXObjectImpl **first;
	ptrdiff_t n;
	
  cXObjectImpl__128_1095 **ppcVar1;
  cXObjectImpl__128_1095 *pcVar2;
  cXObjectImpl__128_1095 **ppcVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ObjectModule__vtable *pOVar7;
  cXObjectImpl__128_1095 **ppcVar8;
  
  pOVar7 = (this->field0_0x0).__vtable;
  lVar4 = (*(code *)pOVar7[1].GetTutorialObject)
                    ((int)this->fObjectMap[-1] + *(short *)&pOVar7[1].DoReconPerson + 0x44);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  ppcVar3 = (this->fDisablers).start;
                    /* end of inlined section */
  if (ppcVar3 == (this->fDisablers).finish) {
    pOVar7 = (this->field0_0x0).__vtable;
LAB_002385bc:
    lVar5 = (*(code *)pOVar7[1].GetTutorialObject)
                      ((int)this->fObjectMap[-1] + *(short *)&pOVar7[1].DoReconPerson + 0x44);
    if (lVar4 != lVar5) {
      GlobalDispatch__Fsi(0x107,0);
    }
    return;
  }
  pcVar2 = *ppcVar3;
  do {
    if (pcVar2 == (cXObjectImpl__128_1095 *)0x0) {
      if (enabler == (cXObject__128_898 *)0x0) goto LAB_00238558;
      ppcVar1 = (this->fDisablers).finish;
    }
    else {
      if (pcVar2->_vb898 == enabler) {
LAB_00238558:
        ppcVar8 = ppcVar3 + 1;
        ppcVar1 = (this->fDisablers).finish;
        if (ppcVar8 == ppcVar1) {
          ppcVar3 = (this->fDisablers).finish;
        }
        else {
          iVar6 = (int)ppcVar1 - (int)ppcVar8 >> 2;
          if (iVar6 < 1) {
            ppcVar3 = (this->fDisablers).finish;
          }
          else {
            do {
              pcVar2 = *ppcVar8;
              iVar6 = iVar6 + -1;
              ppcVar8 = ppcVar8 + 1;
              *ppcVar3 = pcVar2;
              ppcVar3 = ppcVar3 + 1;
            } while (0 < iVar6);
            ppcVar3 = (this->fDisablers).finish;
          }
        }
                    /* end of inlined section */
        (this->fDisablers).finish = ppcVar3 + -1;
LAB_002385b8:
        pOVar7 = (this->field0_0x0).__vtable;
        goto LAB_002385bc;
      }
      ppcVar1 = (this->fDisablers).finish;
    }
                    /* end of inlined section */
    ppcVar3 = ppcVar3 + 1;
    if (ppcVar3 == ppcVar1) goto LAB_002385b8;
    pcVar2 = *ppcVar3;
  } while( true );
}

bool ObjectModuleImpl::CheckIntegrity() {
	cFixedWorld *world;
	CTilePt worldLoc;
	CTilePt objLoc;
	cXObject *obj;
	CTilePt objLoc;
	cXObjectImpl *root;
	cXObject *this;
	CTilePt rootLoc;
	
  ObjectModule__vtable *pOVar1;
  cFixedWorld *pcVar2;
  bool bVar3;
  cXObject__128_898__vtable *pcVar4;
  code *pcVar5;
  cXObject__21_1030 *pcVar6;
  CTGDump *pCVar7;
  cXObject__128_898 *pcVar8;
  long lVar9;
  cFixedWorld__vtable *pcVar10;
  int iVar11;
  cXObjectImpl__127_901 *this_00;
  long lVar12;
  CTilePt objLoc;
  CTilePt rootLoc;
  
  pcVar2 = _5Globs_pFixedWorld;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
            ((int)&_5Globs_pFixedWorld->__vtable +
             (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
  pcVar8 = (cXObject__128_898 *)0x0;
  if (this->fFirst != (cXObjectImpl__128_1095 *)0x0) {
    pcVar8 = this->fFirst->_vb898;
  }
  if (pcVar8 == (cXObject__128_898 *)0x0) {
    return true;
  }
  pcVar4 = pcVar8->__vtable;
LAB_00238668:
  (*(code *)pcVar4[1].TestIntersection)
            (&objLoc,(int)&pcVar8->_vb1093 + (int)*(short *)&pcVar4[1].IsInWorld);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
  lVar12 = 0;
  if (pcVar8 == (cXObject__128_898 *)0x0) goto LAB_002386c8;
  pcVar5 = (code *)pcVar8->__vtable[1].GetObjectImplementation;
  iVar11 = (int)&pcVar8->_vb1093 + (int)*(short *)&pcVar8->__vtable[1].AdvanceGraphic;
  do {
    lVar12 = (*pcVar5)(iVar11);
LAB_002386c8:
    do {
      this_00 = (cXObjectImpl__127_901 *)lVar12;
                    /* end of inlined section */
      pcVar6 = HierGetParent__12cXObjectImpl(this_00);
      if (pcVar6 == (cXObject__21_1030 *)0x0) {
        if (lVar12 == 0) {
          if (pcVar8 == (cXObject__128_898 *)0x0) {
            pcVar10 = pcVar2->__vtable;
            goto LAB_00238778;
          }
          pcVar6 = this_00->_vb966;
LAB_00238700:
          (*(code *)pcVar6->__vtable[1].TestIntersection)
                    (&rootLoc,(int)&pcVar6->_vb899 + (int)*(short *)&pcVar6->__vtable[1].IsInWorld);
          bVar3 = __ne__C7CTilePtRC7CTilePt(&rootLoc,&objLoc);
          if (bVar3) {
            pCVar7 = __ls__7CTGDumpPCc(&ctgDump,"c:/eor/src2/games/sims/MSrc/ObjectModule.cpp");
            pCVar7 = __ls__7CTGDumpPCc(pCVar7,"(");
            pCVar7 = __ls__7CTGDumpi(pCVar7,0x650);
            __ls__7CTGDumpPCc(pCVar7,"): Error detected.\r\n");
          }
          ___7CTilePt(&rootLoc,2);
        }
        else {
          if ((cXObject__128_898 *)this_00->_vb966 != pcVar8) {
            pcVar6 = this_00->_vb966;
            goto LAB_00238700;
          }
          pcVar10 = pcVar2->__vtable;
LAB_00238778:
          lVar12 = (*(code *)pcVar10->SetWall)
                             ((int)&pcVar2->__vtable + (int)*(short *)&pcVar10->GetWall,&objLoc);
          if (lVar12 == 0) {
            pOVar1 = (this->field0_0x0).__vtable;
            lVar12 = (*(code *)pOVar1[1].GetSimFlag)
                               ((int)this->fObjectMap[-1] + *(short *)&pOVar1[1].SetSimFlag + 0x44,
                                &objLoc);
            lVar9 = (*(code *)pcVar8->__vtable[1].UserCanPlace)
                              ((int)&pcVar8->_vb1093 +
                               (int)*(short *)&pcVar8->__vtable[1].IsPartOfMe);
            if (lVar12 != lVar9) {
              pCVar7 = __ls__7CTGDumpPCc(&ctgDump,"c:/eor/src2/games/sims/MSrc/ObjectModule.cpp");
              pCVar7 = __ls__7CTGDumpPCc(pCVar7,"(");
              pCVar7 = __ls__7CTGDumpi(pCVar7,0x664);
              __ls__7CTGDumpPCc(pCVar7,"): Error detected.\r\n");
            }
          }
        }
        ___7CTilePt(&objLoc,2);
        pcVar8 = (cXObject__128_898 *)
                 (*(code *)pcVar8->__vtable[1].IsDeletedByEvict)
                           ((int)&pcVar8->_vb1093 +
                            (int)*(short *)&pcVar8->__vtable[1].GetObjectLightSource);
        if (pcVar8 == (cXObject__128_898 *)0x0) {
          return true;
        }
        pcVar4 = pcVar8->__vtable;
        goto LAB_00238668;
      }
                    /* end of inlined section */
      pcVar6 = HierGetParent__12cXObjectImpl(this_00);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
      lVar12 = 0;
    } while (pcVar6 == (cXObject__21_1030 *)0x0);
    pcVar5 = (code *)pcVar6->__vtable[1].GetObjectImplementation;
    iVar11 = (int)&pcVar6->_vb899 + (int)*(short *)&pcVar6->__vtable[1].AdvanceGraphic;
  } while( true );
}

void ObjectModuleImpl::CleanupPeople(cXObject *respect) {
	cXPersonImpl **i;
	vector<cXPersonImpl *,__malloc_alloc_template<0> > *this;
	vector<cXPersonImpl *,__malloc_alloc_template<0> > *this;
	
  cXPerson__123_1079 *pcVar1;
  cXPersonImpl__123_903 **ppcVar2;
  cXPersonImpl__123_903 *pcVar3;
  cXPersonImpl__123_903 **ppcVar4;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  ppcVar4 = (this->fPeople).start;
                    /* end of inlined section */
  if (ppcVar4 == (this->fPeople).finish) {
    return;
  }
  pcVar3 = *ppcVar4;
  do {
    if (pcVar3 == (cXPersonImpl__123_903 *)0x0) {
      pcVar1 = _vtxWEIGHTS;
      if (respect != (cXObject__128_898 *)0x0) goto LAB_002388b4;
      ppcVar2 = (this->fPeople).finish;
    }
    else if ((cXObject__128_898 *)pcVar3->_vb1079->_vb966 == respect) {
      ppcVar2 = (this->fPeople).finish;
    }
    else {
      pcVar1 = pcVar3->_vb1079;
LAB_002388b4:
      (*(code *)pcVar1->__vtable->GetLastAction)
                ((int)&pcVar1->_vb966 + (int)*(short *)&pcVar1->__vtable->GetCurrentAction,respect);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      ppcVar2 = (this->fPeople).finish;
    }
                    /* end of inlined section */
    ppcVar4 = ppcVar4 + 1;
    if (ppcVar4 == ppcVar2) {
      return;
    }
    pcVar3 = *ppcVar4;
  } while( true );
}

void ObjectModuleImpl::LevelInfoRequested() {
	cXObject *srch;
	
  cXObject__128_898 *pcVar1;
  cXObject__128_898__vtable *pcVar2;
  
  pcVar1 = (cXObject__128_898 *)0x0;
  if (this->fFirst != (cXObjectImpl__128_1095 *)0x0) {
    pcVar1 = this->fFirst->_vb898;
  }
  if (pcVar1 != (cXObject__128_898 *)0x0) {
    pcVar2 = pcVar1->__vtable;
    while( true ) {
      (*(code *)pcVar2->GetInteractionLeader)
                ((int)&pcVar1->_vb1093 + (int)*(short *)&pcVar2->SetObjectProbe,0xd,0,0);
      pcVar1 = (cXObject__128_898 *)
               (*(code *)pcVar1->__vtable[1].IsDeletedByEvict)
                         ((int)&pcVar1->_vb1093 +
                          (int)*(short *)&pcVar1->__vtable[1].GetObjectLightSource);
      if (pcVar1 == (cXObject__128_898 *)0x0) break;
      pcVar2 = pcVar1->__vtable;
    }
  }
  return;
}

EDialog* ObjectModuleImpl::GetCurrentDialog(cXObject *obj) {
  return (EDialog *)0x0;
}

void ObjectModuleImpl::EnqueueObjectDialog(cXObject *obj, StackElem *elem, DialogParam *param) {
  return;
}

void ObjectModuleImpl::EnqueueObjectDialog(ObjSelector *sel, DialogParam *param) {
  return;
}

void ObjectModuleImpl::BroadcastMessage(char *message, int param) {
	cXObjectImpl *srch;
	short int stackVars[4];
	Behavior *b;
	
  cXObject__128_898 *pcVar1;
  ushort treeID;
  Behavior *this_00;
  cXObjectImpl__128_1095 *pcVar2;
  ushort stackVars [4];
  
  stackVars[0] = (ushort)param;
  stackVars[1] = 0;
  stackVars[2] = 0;
  stackVars[3] = 0;
  pcVar2 = this->fFirst;
  if (pcVar2 != (cXObjectImpl__128_1095 *)0x0) {
    pcVar1 = pcVar2->_vb898;
    while( true ) {
      this_00 = (Behavior *)
                (*(code *)pcVar1->__vtable[1].SetData)
                          ((int)&pcVar1->_vb1093 + (int)*(short *)&pcVar1->__vtable[1].IsOccupied);
      treeID = GetTreeIDByName__8BehaviorPCc(this_00,message);
      if (treeID != 0) {
        RunOneTickTree__11TreeSimImplP8BehaviorssPs
                  ((TreeSimImpl__21_3338 *)pcVar2->_vb1300,this_00,0,treeID,stackVars);
      }
      pcVar2 = pcVar2->fNext;
      if (pcVar2 == (cXObjectImpl__128_1095 *)0x0) break;
      pcVar1 = pcVar2->_vb898;
    }
  }
  return;
}

void ObjectModuleImpl::SendMessage(cXObject *obj, char *message, int param) {
	short int stackVars[4];
	Behavior *b;
	SInt16 treeID;
	cXObject *this;
	
  ushort treeID;
  Behavior *this_00;
  TreeSimImpl__21_3338 **ppTVar1;
  TreeSimImpl__21_3338 *this_01;
  ushort stackVars [4];
  
  stackVars[0] = (ushort)param;
  stackVars[1] = 0;
  stackVars[2] = 0;
  stackVars[3] = 0;
  this_00 = (Behavior *)
            (*(code *)obj->__vtable[1].SetData)
                      ((int)&obj->_vb1093 + (int)*(short *)&obj->__vtable[1].IsOccupied);
  treeID = GetTreeIDByName__8BehaviorPCc(this_00,message);
  if (treeID != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
    this_01 = _pGifTag0;
    if (obj != (cXObject__128_898 *)0x0) {
      ppTVar1 = (TreeSimImpl__21_3338 **)
                (*(code *)obj->__vtable[1].GetObjectImplementation)
                          ((int)&obj->_vb1093 + (int)*(short *)&obj->__vtable[1].AdvanceGraphic);
      this_01 = *ppTVar1;
    }
    RunOneTickTree__11TreeSimImplP8BehaviorssPs(this_01,this_00,0,treeID,stackVars);
  }
  return;
}

void ObjectModuleImpl::UpdateWallAdjacencies() {
	cXObjectImpl *srch;
	cXObjectImpl *this;
	
  cXObject__128_898 *pcVar1;
  int *piVar2;
  long lVar3;
  cXObjectImpl__127_901 *this_00;
  
  this_00 = (cXObjectImpl__127_901 *)this->fFirst;
  if (this_00 != (cXObjectImpl__127_901 *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjectImpl.h */
    pcVar1 = (cXObject__128_898 *)this_00->_vb966;
    while( true ) {
      piVar2 = (int *)(*(code *)pcVar1->__vtable->GetSelector)
                                ((int)&pcVar1->_vb1093 +
                                 (int)*(short *)&pcVar1->__vtable->GetTreeTab);
      lVar3 = (**(code **)(*piVar2 + 0x1c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x18),6);
                    /* end of inlined section */
      if (lVar3 == 0) {
        this_00 = this_00->fNext;
      }
      else {
        UpdateWallAdjacency__12cXObjectImpl(this_00);
        this_00 = this_00->fNext;
      }
      if (this_00 == (cXObjectImpl__127_901 *)0x0) break;
      pcVar1 = (cXObject__128_898 *)this_00->_vb966;
    }
  }
  return;
}

void ObjectModuleImpl::InvalidateAllRoutes() {
	cXPersonImpl **i;
	vector<cXPersonImpl *,__malloc_alloc_template<0> > *this;
	vector<cXPersonImpl *,__malloc_alloc_template<0> > *this;
	
  cXPerson__123_1079__vtable *pcVar1;
  cXPersonImpl__123_903 *pcVar2;
  cXPersonImpl__123_903 **ppcVar3;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  ppcVar3 = (this->fPeople).start;
                    /* end of inlined section */
  if (ppcVar3 != (this->fPeople).finish) {
    pcVar2 = *ppcVar3;
    while( true ) {
      ppcVar3 = ppcVar3 + 1;
      pcVar1 = pcVar2->_vb1079->__vtable;
      (**(code **)&pcVar1->field_0x1bc)
                ((int)&pcVar2->_vb1079->_vb966 + (int)*(short *)&pcVar1->field_0x1b8);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      if (ppcVar3 == (this->fPeople).finish) break;
      pcVar2 = *ppcVar3;
    }
  }
  DirtyAllRoutes__8cXPortalP12ObjectModule(&this->field0_0x0);
  return;
}

void ObjectModuleImpl::SkillAccessed(cXPerson *person, Int skillIndex, bool writing) {
  return;
}

void ObjectModuleImpl::MotiveAccessed(cXPerson *person, Int motiveIndex, bool writing) {
  return;
}

void ObjectModuleImpl::PersonalityAccessed(cXPerson *person, Int personalityIndex, bool writing) {
  return;
}

void ObjectModuleImpl::RelationshipAccessed(cXObject *from, cXObject *to, Int relIndex, bool writing) {
  return;
}

void ObjectModuleImpl::RelationshipAccessed(Neighbor *from, Neighbor *to, Int relIndex, bool writing) {
  if (writing) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pNeighborhood->__vtable[1].GetFriendCount)
              ((int)&_5Globs_pNeighborhood->__vtable +
               (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].GetFamilyFriendsCount,from,
               _5Globs_pNeighborhood,relIndex);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pNeighborhood->__vtable[1].GetFriendCount)
              ((int)&_5Globs_pNeighborhood->__vtable +
               (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].GetFamilyFriendsCount,to);
    *(undefined4 *)&this->fPersonRelationshipsChanged = 1;
  }
  return;
}

void ObjectModuleImpl::OffsetWorld(CTilePt &inOffset) {
	cXObjectImpl *anObject;
	cXMTObjectImpl *mt_obj;
	cXObjectImpl *leader;
	cXObjectImpl *next_obj;
	cXObjectImpl *ptr;
	cXObjectImpl *ptr;
	cXMTObjectImpl *this;
	FTilePt loc;
	FTilePt loc;
	cXObjectImpl *next;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  ObjectModule__vtable *pOVar5;
  cXObject__128_898 *pcVar6;
  cXObject__21_1030__vtable *pcVar7;
  ulong *puVar8;
  int *piVar9;
  void *pvVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  cXObjectImpl__127_901 **ppcVar16;
  ulong uVar17;
  cXObject__21_1030 *pcVar18;
  cXObjectImpl__127_901 *pcVar19;
  cXObjectImpl__127_901 *this_00;
  cXObjectImpl__127_901 *pcVar20;
  FTilePt loc;
  
  pOVar5 = (this->field0_0x0).__vtable;
  (*(code *)pOVar5[1].IsFamilyMemberAwakeAndVisible)
            ((int)this->fObjectMap[-1] + *(short *)&pOVar5[1].CheckIntegrity + 0x44);
  this_00 = (cXObjectImpl__127_901 *)this->fFirst;
  if (this_00 == (cXObjectImpl__127_901 *)0x0) {
    return;
  }
  pcVar6 = (cXObject__128_898 *)this_00->_vb966;
  do {
    lVar14 = (*(code *)pcVar6->__vtable[1].GetFrontFaceDirection)
                       ((int)&pcVar6->_vb1093 +
                        (int)*(short *)&pcVar6->__vtable[1].GetInteractionLeader);
    if (lVar14 == 0) {
      pcVar7 = this_00->_vb966->__vtable;
      uVar17 = (ulong)(int)pcVar7;
      uVar11 = (*(code *)pcVar7[1].UserCanDelete)
                         ((int)&this_00->_vb966->_vb899 + (int)*(short *)&pcVar7[1].UserPickup);
      uVar2 = uVar11 + 7 & 7;
      uVar3 = uVar11 & 7;
      loc = (FTilePt)((*(long *)((uVar11 + 7) - uVar2) << (7 - uVar2) * 8 |
                      uVar17 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                     *(ulong *)(uVar11 - uVar3) >> uVar3 * 8);
      puVar1 = (undefined *)((int)&loc.x.whole + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar2);
      *puVar8 = *puVar8 & -1L << (uVar2 + 1) * 8 | (ulong)loc >> (7 - uVar2) * 8;
      iVar12 = GetX__C7CTilePt(inOffset);
      iVar13 = GetY__C7CTilePt(inOffset);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
      loc = (FTilePt)CONCAT44(loc.x.whole + iVar12 * 0x10,loc.y.whole + iVar13 * 0x10);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
      lVar14 = (*(code *)_5Globs_pFixedWorld->__vtable->SetWallStorage)
                         ((int)&_5Globs_pFixedWorld->__vtable +
                          (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetWallStorage,&loc);
      pcVar18 = this_00->_vb966;
      if (lVar14 == 0) {
        iVar12 = (*(code *)pcVar18->__vtable[1].GetPlacementInfo)
                           ((int)&pcVar18->_vb899 +
                            (int)*(short *)&pcVar18->__vtable[1].FindGoodLocation);
        SetLocation__12cXObjectImplRC7FTilePtiQ28cXObject14RecursionParam(this_00,&loc,iVar12,0);
        pcVar20 = this_00->fNext;
      }
      else {
        pOVar5 = (this->field0_0x0).__vtable;
        sVar4 = *(short *)&pOVar5->GetNumObjects;
        pcVar20 = this_00->fNext;
        uVar15 = (*(code *)pcVar18->__vtable[1].UserCanPlace)
                           ((int)&pcVar18->_vb899 + (int)*(short *)&pcVar18->__vtable[1].IsPartOfMe)
        ;
        (*(code *)pOVar5->CheckIntegrity)((int)this->fObjectMap[-1] + sVar4 + 0x44,uVar15);
      }
    }
    else {
                    /* inlined from SCID.h */
      if (this_00 == (cXObjectImpl__127_901 *)0x0) {
        piVar9 = (int *)0x0;
                    /* end of inlined section */
        ppcVar16 = _o_cd;
      }
      else {
        piVar9 = (int *)_dyncastimpl__7TreeSim4SCID(this_00->_vb966->_vb899,cXMTObjectImplID);
        ppcVar16 = (cXObjectImpl__127_901 **)piVar9[3];
      }
      pcVar19 = (cXObjectImpl__127_901 *)0x0;
      if (ppcVar16 != (cXObjectImpl__127_901 **)0x0) {
        pcVar19 = *ppcVar16;
      }
      pcVar20 = *(cXObjectImpl__127_901 **)(*piVar9 + 0xbc);
      while ((pcVar20 != (cXObjectImpl__127_901 *)0x0 &&
             (pcVar7 = pcVar20->_vb966->__vtable,
             lVar14 = (*(code *)pcVar7[1].GetFrontFaceDirection)
                                ((int)&pcVar20->_vb966->_vb899 +
                                 (int)*(short *)&pcVar7[1].GetInteractionLeader), lVar14 != 0))) {
        if (pcVar19 == pcVar20) {
LAB_00238da4:
          pcVar20 = pcVar20->fNext;
        }
        else {
                    /* inlined from SCID.h */
          pvVar10 = _dyncastimpl__7TreeSim4SCID(pcVar20->_vb966->_vb899,cXMTObjectImplID);
          if (*(int *)((int)pvVar10 + 0xc) == 0) {
            lVar14 = 0;
          }
          else {
            iVar12 = *(int *)(*(int *)((int)pvVar10 + 0xc) + 4);
            iVar13 = *(int *)(iVar12 + 4);
            lVar14 = (**(code **)(iVar13 + 100))(iVar12 + *(short *)(iVar13 + 0x60));
          }
                    /* end of inlined section */
          if (lVar14 == 0) {
            if (pcVar19 == (cXObjectImpl__127_901 *)0x0) goto LAB_00238da4;
            break;
          }
          if (pcVar19 != *(cXObjectImpl__127_901 **)lVar14) break;
          pcVar20 = pcVar20->fNext;
        }
      }
      if ((this_00 != (cXObjectImpl__127_901 *)0x0) && (this_00 != pcVar20)) {
        pcVar18 = this_00->_vb966;
        while( true ) {
          pcVar7 = pcVar18->__vtable;
          uVar17 = (ulong)(int)pcVar7;
          uVar11 = (*(code *)pcVar7[1].UserCanDelete)
                             ((int)&pcVar18->_vb899 + (int)*(short *)&pcVar7[1].UserPickup);
          uVar2 = uVar11 + 7 & 7;
          uVar3 = uVar11 & 7;
          loc = (FTilePt)((*(long *)((uVar11 + 7) - uVar2) << (7 - uVar2) * 8 |
                          uVar17 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8
                         | *(ulong *)(uVar11 - uVar3) >> uVar3 * 8);
          puVar1 = (undefined *)((int)&loc.x.whole + 3);
          uVar2 = (uint)puVar1 & 7;
          puVar8 = (ulong *)(puVar1 + -uVar2);
          *puVar8 = *puVar8 & -1L << (uVar2 + 1) * 8 | (ulong)loc >> (7 - uVar2) * 8;
          iVar12 = GetX__C7CTilePt(inOffset);
          iVar13 = GetY__C7CTilePt(inOffset);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
          loc = (FTilePt)CONCAT44(loc.x.whole + iVar12 * 0x10,loc.y.whole + iVar13 * 0x10);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
          lVar14 = (*(code *)_5Globs_pFixedWorld->__vtable->SetWallStorage)
                             ((int)&_5Globs_pFixedWorld->__vtable +
                              (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetWallStorage,&loc);
          if (lVar14 != 0) break;
          pcVar7 = this_00->_vb966->__vtable;
          iVar12 = (*(code *)pcVar7[1].GetPlacementInfo)
                             ((int)&this_00->_vb966->_vb899 +
                              (int)*(short *)&pcVar7[1].FindGoodLocation);
          SetLocation__12cXObjectImplRC7FTilePtiQ28cXObject14RecursionParam(this_00,&loc,iVar12,0);
          this_00 = this_00->fNext;
          if ((this_00 == (cXObjectImpl__127_901 *)0x0) || (this_00 == pcVar20)) goto LAB_00238fec;
          pcVar18 = this_00->_vb966;
        }
        pOVar5 = (this->field0_0x0).__vtable;
        pcVar7 = this_00->_vb966->__vtable;
        sVar4 = *(short *)&pOVar5->GetNumObjects;
        uVar15 = (*(code *)pcVar7[1].UserCanPlace)
                           ((int)&this_00->_vb966->_vb899 + (int)*(short *)&pcVar7[1].IsPartOfMe);
        (*(code *)pOVar5->CheckIntegrity)((int)this->fObjectMap[-1] + sVar4 + 0x44,uVar15);
      }
    }
LAB_00238fec:
    this_00 = pcVar20;
    if (this_00 == (cXObjectImpl__127_901 *)0x0) {
      return;
    }
    pcVar6 = (cXObject__128_898 *)this_00->_vb966;
  } while( true );
}

cXObject* ObjectModuleImpl::GetTutorialObject() {
  cXObject__128_898 *pcVar1;
  
  pcVar1 = (cXObject__128_898 *)0x0;
  if (this->fTutorialObject != (cXObjectImpl__128_1095 *)0x0) {
    pcVar1 = this->fTutorialObject->_vb898;
  }
  return pcVar1;
}

int ObjectModuleImpl::SetTutorialObject(cXObject *_obj) {
	cXObjectImpl *obj;
	cXObject *this;
	
  cXObjectImpl__128_1095 *pcVar1;
  cXObjectImpl__128_1095 *pcVar2;
  int iVar3;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Object.h */
  if (_obj == (cXObject__128_898 *)0x0) {
    pcVar2 = (cXObjectImpl__128_1095 *)0x0;
                    /* end of inlined section */
    pcVar1 = this->fTutorialObject;
  }
  else {
    pcVar2 = (cXObjectImpl__128_1095 *)
             (*(code *)_obj->__vtable[1].GetObjectImplementation)
                       ((int)&_obj->_vb1093 + (int)*(short *)&_obj->__vtable[1].AdvanceGraphic);
    pcVar1 = this->fTutorialObject;
  }
  if ((pcVar1 == (cXObjectImpl__128_1095 *)0x0) || (pcVar2 == (cXObjectImpl__128_1095 *)0x0)) {
    if (pcVar1 != pcVar2) {
      this->fTutorialObject = pcVar2;
      GlobalDispatch__Fsi(0x106,0);
    }
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}

void ObjectModuleImpl::ShowTutorialInfo() {
  cXObject__128_898 *pcVar1;
  cXObject__128_898__vtable *pcVar2;
  
  if (this->fTutorialObject != (cXObjectImpl__128_1095 *)0x0) {
    pcVar1 = this->fTutorialObject->_vb898;
    pcVar2 = pcVar1->__vtable;
    (*(code *)pcVar2->GetObjectProbe)
              ((int)&pcVar1->_vb1093 + (int)*(short *)&pcVar2->SetAttr,0x3ba6f0);
  }
  return;
}

void ObjectModuleImpl::ComputeStats(SInt32 *familyObjectsValue, SInt32 *lotObjectsValue, bool *outHasPhone, bool *outHasBaby, bool *hasUserPlacedObjects) {
	cXObject *next;
	cXObject *srch;
	cXMTObject *mtSrch;
	cXObject *ptr;
	
  short sVar1;
  ObjectModule__vtable *pOVar2;
  cFixedWorld__vtable *pcVar3;
  cFixedWorld__vtable **ppcVar4;
  void *pvVar5;
  void *pvVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  TreeSim *pTVar12;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  TreeSim **ppTVar13;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  CTilePt aCStack_c0 [5];
  undefined4 *local_b0;
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
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  *familyObjectsValue = 0;
  *lotObjectsValue = 0;
  *(undefined4 *)outHasPhone = 0;
  *(undefined4 *)outHasBaby = 0;
  *(undefined4 *)hasUserPlacedObjects = 0;
  pOVar2 = (this->field0_0x0).__vtable;
  local_b0 = (undefined4 *)outHasPhone;
  lVar8 = (*(code *)pOVar2->LevelInfoRequested)
                    ((int)this->fObjectMap[-1] + *(short *)&pOVar2->CleanupPeople + 0x44);
  if (lVar8 == 0) {
    return;
  }
  iVar7 = *(int *)((int)lVar8 + 4);
  do {
    ppTVar13 = (TreeSim **)lVar8;
    lVar9 = (**(code **)(iVar7 + 0x3fc))((int)ppTVar13 + (int)*(short *)(iVar7 + 0x3f8));
    lVar10 = (*(code *)ppTVar13[1][0x10].m_pCursorObject)
                       ((int)ppTVar13 + (int)*(short *)&ppTVar13[1][0x10].m_pMTObject,0x3b);
    if (lVar10 == 1) {
      *local_b0 = 1;
LAB_002391c0:
      pTVar12 = ppTVar13[1];
    }
    else {
      if (lVar10 == 9) {
        *(undefined4 *)outHasBaby = 1;
        goto LAB_002391c0;
      }
      pTVar12 = ppTVar13[1];
    }
    lVar10 = (*(code *)pTVar12[0x18].m_pCursorObject)
                       ((int)ppTVar13 + (int)*(short *)&pTVar12[0x18].m_pMTObject);
    if (lVar10 == 0) {
      pTVar12 = ppTVar13[1];
LAB_0023921c:
      lVar8 = (*(code *)pTVar12[0x15].m_pCursorObject)
                        ((int)ppTVar13 + (int)*(short *)&pTVar12[0x15].m_pMTObject);
      if (lVar8 != 7) {
        lVar8 = (*(code *)ppTVar13[1][10].__vtable)
                          ((int)ppTVar13 + (int)*(short *)&ppTVar13[1][10].m_pEoRPerson);
        pTVar12 = ppTVar13[1];
        if (lVar8 != 0) {
          lVar8 = (*(code *)pTVar12[0x1d].m_pCursorObject)
                            ((int)ppTVar13 + (int)*(short *)&pTVar12[0x1d].m_pMTObject);
          pTVar12 = ppTVar13[1];
          if (lVar8 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
            pcVar3 = _5Globs_pFixedWorld->__vtable;
            sVar1 = *(short *)&pcVar3[1].OutOfGrid;
            ppcVar4 = &_5Globs_pFixedWorld->__vtable;
            (*(code *)pTVar12[0x16].__vtable)
                      (aCStack_c0,(int)ppTVar13 + (int)*(short *)&pTVar12[0x16].m_pEoRPerson);
            uVar11 = (*(code *)pcVar3[1].GetFloorLayer)((int)ppcVar4 + (int)sVar1,aCStack_c0);
            ___7CTilePt(aCStack_c0,2);
            if ((uVar11 & 0x20) == 0) {
              *(undefined4 *)hasUserPlacedObjects = 1;
            }
            pTVar12 = ppTVar13[1];
          }
        }
        lVar8 = (*(code *)pTVar12[0x1d].m_pPerson)
                          ((int)ppTVar13 + (int)*(short *)&pTVar12[0x1d].m_pObject);
        pTVar12 = ppTVar13[1];
        if (lVar8 == 0) {
          lVar8 = (*(code *)pTVar12[0x1b].m_pEoRInstance)
                            ((int)ppTVar13 + (int)*(short *)&pTVar12[0x1b].m_pPortal);
          if ((lVar8 != 0) && (lVar8 != 4)) {
            iVar7 = (*(code *)ppTVar13[1][0x1a].m_pPerson)
                              ((int)ppTVar13 + (int)*(short *)&ppTVar13[1][0x1a].m_pObject);
            *lotObjectsValue = *lotObjectsValue + iVar7;
          }
        }
        else {
          iVar7 = (*(code *)pTVar12[0x1a].m_pPerson)
                            ((int)ppTVar13 + (int)*(short *)&pTVar12[0x1a].m_pObject);
          *familyObjectsValue = *familyObjectsValue + iVar7;
        }
      }
    }
    else {
                    /* inlined from SCID.h */
      pvVar5 = (void *)0x0;
      if (lVar8 != 0) {
        pvVar5 = _dyncastimpl__7TreeSim4SCID(*ppTVar13,cXMTObjectID);
      }
                    /* end of inlined section */
      if (pvVar5 == (void *)0x0) {
        pTVar12 = ppTVar13[1];
        goto LAB_0023921c;
      }
      pvVar6 = (void *)(**(code **)(*(int *)((int)pvVar5 + 4) + 0x14))
                                 ((int)pvVar5 + (int)*(short *)(*(int *)((int)pvVar5 + 4) + 0x10));
      if (pvVar5 == pvVar6) {
        pTVar12 = ppTVar13[1];
        goto LAB_0023921c;
      }
    }
    if (lVar9 == 0) {
      return;
    }
    iVar7 = *(int *)((int)lVar9 + 4);
    lVar8 = lVar9;
  } while( true );
}

void ObjectModuleImpl::FillInObjectStats(RoomManager *rmMgr, HouseStats &hs) {
	cXObject *obj;
	Int value;
	Room *rm;
	
  short sVar1;
  ObjectModule__vtable *pOVar2;
  cFixedWorld__vtable *pcVar3;
  RoomManager__vtable *pRVar4;
  cFixedWorld__vtable **ppcVar5;
  int iVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar11;
  int iVar12;
  long lVar10;
  
  pOVar2 = (this->field0_0x0).__vtable;
  pcVar7 = (code *)pOVar2->LevelInfoRequested;
  iVar12 = (int)this->fObjectMap[-1] + *(short *)&pOVar2->CleanupPeople + 0x44;
  do {
    lVar10 = (*pcVar7)(iVar12);
    if (lVar10 == 0) {
      return;
    }
    iVar12 = (int)lVar10;
    lVar10 = (**(code **)(*(int *)(iVar12 + 4) + 0x3b4))
                       (iVar12 + *(short *)(*(int *)(iVar12 + 4) + 0x3b0));
    if (lVar10 == 0) {
      lVar10 = (**(code **)(*(int *)(iVar12 + 4) + 0x3bc))
                         (iVar12 + *(short *)(*(int *)(iVar12 + 4) + 0x3b8));
      if (lVar10 != 0) {
        iVar6 = hs->fObjectStateScore;
        iVar11 = gScorePerDirtyObject;
        goto LAB_0023940c;
      }
      iVar6 = *(int *)(iVar12 + 4);
    }
    else {
      iVar6 = hs->fObjectStateScore;
      iVar11 = gScorePerBrokenObject;
LAB_0023940c:
      hs->fObjectStateScore = iVar6 + iVar11;
      iVar6 = *(int *)(iVar12 + 4);
    }
    lVar10 = (**(code **)(iVar6 + 0x3ac))(iVar12 + *(short *)(iVar6 + 0x3a8));
    if (lVar10 == 0) {
      iVar6 = *(int *)(iVar12 + 4);
    }
    else {
      hs->fObjectCount = hs->fObjectCount + 1;
      lVar10 = (**(code **)(*(int *)(iVar12 + 4) + 0x344))
                         (iVar12 + *(short *)(*(int *)(iVar12 + 4) + 0x340));
      iVar6 = *(int *)(iVar12 + 4);
      if (0 < lVar10) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
        pcVar3 = _5Globs_pFixedWorld->__vtable;
        sVar1 = *(short *)&pcVar3->GetWallStorage;
        ppcVar5 = &_5Globs_pFixedWorld->__vtable;
        uVar8 = (**(code **)(iVar6 + 0x2cc))(iVar12 + *(short *)(iVar6 + 0x2c8));
        lVar9 = (*(code *)pcVar3->SetWallStorage)((int)ppcVar5 + (int)sVar1,uVar8);
        iVar6 = *(int *)(iVar12 + 4);
        if (lVar9 == 0) {
          pRVar4 = rmMgr->__vtable;
          sVar1 = *(short *)&pRVar4->GetHouse;
          uVar8 = (**(code **)(iVar6 + 0x29c))(iVar12 + *(short *)(iVar6 + 0x298));
          lVar9 = (*(code *)pRVar4->ClearRoomPartitions)((int)&rmMgr->__vtable + (int)sVar1,uVar8);
          if (lVar9 == 0) {
            iVar6 = *(int *)(iVar12 + 4);
          }
          else {
            iVar6 = *(int *)lVar9;
            lVar9 = (**(code **)(iVar6 + 100))((int)(int *)lVar9 + (int)*(short *)(iVar6 + 0x60));
            if (lVar9 == 0) {
              hs->fIndoorObjValue = hs->fIndoorObjValue + (int)lVar10;
            }
            else {
              hs->fOutdoorObjValue = hs->fOutdoorObjValue + (int)lVar10;
            }
            iVar6 = *(int *)(iVar12 + 4);
          }
        }
      }
    }
    pcVar7 = *(code **)(iVar6 + 0x3fc);
    iVar12 = iVar12 + *(short *)(iVar6 + 0x3f8);
  } while( true );
}

void ObjectModuleImpl::SetSelectedPerson(cXPerson *newSelection) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pEORGlobals->__vtable->SetCam)
            ((int)_5Globs_pEORGlobals->_pSelectedSims +
             *(short *)&_5Globs_pEORGlobals->__vtable->GetCam + -0x24,0,newSelection,0);
  return;
}

cXPerson* ObjectModuleImpl::AdvanceSelectedPerson() {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pEORGlobals->__vtable->CreateVanityMirror)
            ((int)_5Globs_pEORGlobals->_pSelectedSims +
             *(short *)&_5Globs_pEORGlobals->__vtable->CreateWardrobe + -0x24,0);
  return (cXPerson__128_907 *)0x0;
}

cXPerson* ObjectModuleImpl::GetSelectedPerson() {
	vector<cXPersonImpl *,__malloc_alloc_template<0> > &pc;
	cXPersonImpl **i;
	vector<cXPersonImpl *,__malloc_alloc_template<0> > *this;
	vector<cXPersonImpl *,__malloc_alloc_template<0> > *this;
	bool selFlagSet;
	
  cXObject__21_1030 *pcVar1;
  cXObject__21_1030__vtable *pcVar2;
  cXPersonImpl__123_903 *pcVar3;
  int iVar4;
  cXPerson__128_907 *pcVar5;
  cXPersonImpl__123_903 **ppcVar6;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  ppcVar6 = (this->fPeople).start;
                    /* end of inlined section */
  pcVar5 = (cXPerson__128_907 *)0x0;
  if (ppcVar6 != (this->fPeople).finish) {
    pcVar3 = *ppcVar6;
    while (pcVar1 = pcVar3->_vb901->_vb966, pcVar2 = pcVar1->__vtable,
          iVar4 = (*(code *)pcVar2->GetLastDamage)
                            ((int)&pcVar1->_vb899 + (int)*(short *)&pcVar2->IsRenderingRoot),
          (iVar4 >> 1 & 1U) == 0) {
                    /* end of inlined section */
      ppcVar6 = ppcVar6 + 1;
      if (ppcVar6 == (this->fPeople).finish) {
        return (cXPerson__128_907 *)0x0;
      }
      pcVar3 = *ppcVar6;
    }
    pcVar5 = (cXPerson__128_907 *)0x0;
    if (*ppcVar6 != (cXPersonImpl__123_903 *)0x0) {
      pcVar5 = (cXPerson__128_907 *)(*ppcVar6)->_vb1079;
    }
  }
  return pcVar5;
}

void ObjectModuleImpl::ClearIdleStatus(int id) {
	cXObject *obj;
	StackElem *objElem;
	BehaviorNode *node;
	BehaviorNode *this;
	
  int iVar1;
  ushort uVar2;
  StackElem *this_00;
  BehaviorNode *pBVar3;
  ushort *puVar4;
  ObjectModule__vtable *pOVar5;
  long lVar6;
  
  pOVar5 = (this->field0_0x0).__vtable;
  lVar6 = (*(code *)pOVar5->AdvanceSelectedPerson)
                    ((int)this->fObjectMap[-1] + *(short *)&pOVar5->SetSelectedPerson + 0x44);
  if (lVar6 == 0) {
    pOVar5 = (this->field0_0x0).__vtable;
  }
  else {
    iVar1 = *(int *)(*(int *)lVar6 + 0x1c);
    this_00 = (StackElem *)
              (**(code **)(iVar1 + 0x4c))(*(int *)lVar6 + (int)*(short *)(iVar1 + 0x48));
    uVar2 = GetTreeID__C9StackElem(this_00);
    pBVar3 = GetNodeRef__8Behaviorss(this_00->fBehavior,uVar2,this_00->fNodeNum);
    if (pBVar3 == (BehaviorNode *)0x0) {
      pOVar5 = (this->field0_0x0).__vtable;
    }
    else {
                    /* inlined from /eor/projects/sims/Qdata/Bhavdata.h */
                    /* end of inlined section */
      if ((pBVar3->_treePrimID & 0x7fff) == 0) {
        pOVar5 = (this->field0_0x0).__vtable;
        uVar2 = (*(code *)pOVar5[1].EnableBuyAndBuild)
                          ((int)this->fObjectMap[-1] +
                           *(short *)&pOVar5[1].DisableBuyAndBuild + 0x44,id);
        if ((short)uVar2 < 0) {
          pOVar5 = (this->field0_0x0).__vtable;
        }
        else {
          puVar4 = GetParams__9StackElem(this_00);
          *puVar4 = uVar2;
          pOVar5 = (this->field0_0x0).__vtable;
        }
      }
      else {
        pOVar5 = (this->field0_0x0).__vtable;
      }
    }
  }
  (*(code *)pOVar5[1].ShowTutorialInfo)
            ((int)this->fObjectMap[-1] + *(short *)&pOVar5[1].SetTutorialObject + 0x44,id,
             0xfffffffffffffffe);
  return;
}

void ObjectModuleImpl::SetSimFlag(int id, SimFlag flag0, bool on) {
	int flag;
	unsigned int n;
	
  uint *puVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  puVar1 = (uint *)((this->fIdleMap).start + id + -1);
                    /* end of inlined section */
  *puVar1 = *puVar1 & ~(flag0 << 0x10);
  if (on) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    puVar1 = (uint *)((this->fIdleMap).start + id + -1);
                    /* end of inlined section */
    *puVar1 = *puVar1 | flag0 << 0x10;
  }
  return;
}

bool ObjectModuleImpl::GetSimFlag(int id, SimFlag flag) {
	unsigned int n;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  return ((this->fIdleMap).start[id + -1] & flag << 0x10) != 0;
}

int ObjectModuleImpl::GetIdleStatus(int id) {
	unsigned int n;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  return (int)*(short *)((this->fIdleMap).start + id + -1);
}

void ObjectModuleImpl::SetIdleStatus(int id, int ticks) {
	unsigned int n;
	
  uint *puVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  puVar1 = (uint *)((this->fIdleMap).start + id + -1);
                    /* end of inlined section */
  *puVar1 = *puVar1 & 0xffff0000;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  puVar1 = (uint *)((this->fIdleMap).start + id + -1);
                    /* end of inlined section */
  *puVar1 = *puVar1 | ticks & 0xffffU;
  return;
}

cXObject* ObjectModuleImpl::GetObjectFromID(Int id) {
	unsigned int n;
	
  int iVar1;
  cXObject__128_898 *pcVar2;
  
  if (0 < id) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    if (id <= *(int *)&this->field_0x20 - *(int *)&this->field_0x1c >> 2) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      iVar1 = *(int *)(*(int *)&this->field_0x1c + (id + -1) * 4);
      pcVar2 = (cXObject__128_898 *)0x0;
      if (iVar1 != 0) {
        pcVar2 = *(cXObject__128_898 **)(iVar1 + 4);
      }
      return pcVar2;
    }
  }
  return (cXObject__128_898 *)0x0;
}

SInt16 ObjectModuleImpl::GetTileObjectID(CTilePt &in) {
	u32 x;
	u32 y;
	
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = GetX__C7CTilePt(in);
  uVar3 = GetY__C7CTilePt(in);
  if ((uVar2 < 0x40) && (uVar3 < 0x40)) {
    uVar1 = this->fObjectMap[uVar3][uVar2];
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

void ObjectModuleImpl::SetTileObjectID(CTilePt &in, SInt16 objID) {
	u32 x;
	u32 y;
	
  uint uVar1;
  uint uVar2;
  
  uVar1 = GetX__C7CTilePt(in);
  uVar2 = GetY__C7CTilePt(in);
  if ((uVar1 < 0x40) && (uVar2 < 0x40)) {
    this->fObjectMap[uVar2][uVar1] = objID;
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

ErrType int ReconSaveObject<ObjectModuleImpl>(ObjectModuleImpl *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 version) {
	SimpleReconObject<ObjectModuleImpl> recon;
	ReconBuilder rb;
	ObjectModuleImpl *obj;
	SInt32 type;
	
  int iVar1;
  SimpleReconObject_ObjectModuleImpl_ recon;
  ReconBuilder__6_5003 rb;
  
  recon.field0_0x0.__vtable = (ReconObject__vtable *)_vt_t17SimpleReconObject1Z16ObjectModuleImpl;
  recon.fObj = obj;
  recon.fType = type;
  iVar1 = Compact__12ReconBuilderP11ReconObjectiP8iResFiles(&rb,&recon.field0_0x0,version,file,id);
  ___11ReconObject(&recon.field0_0x0,2);
  return iVar1;
}

ErrType int ReconLoadObject<ObjectModuleImpl>(ObjectModuleImpl *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 *version) {
	SimpleReconObject<ObjectModuleImpl> recon;
	ReconBuilder rb;
	ObjectModuleImpl *obj;
	SInt32 type;
	
  int iVar1;
  SimpleReconObject_ObjectModuleImpl_ recon;
  ReconBuilder__6_5003 rb;
  
  recon.field0_0x0.__vtable = (ReconObject__vtable *)_vt_t17SimpleReconObject1Z16ObjectModuleImpl;
  recon.fObj = obj;
  recon.fType = type;
  iVar1 = Reconstitute__12ReconBuilderP11ReconObjectP8iResFilesPi
                    (&rb,&recon.field0_0x0,file,id,version);
  ___11ReconObject(&recon.field0_0x0,2);
  return iVar1;
}

SInt16* short * copy_backward<short *, short *>(SInt16 *first, SInt16 *last, SInt16 *result) {
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

SInt16* short * uninitialized_copy<short *, short *>(SInt16 *first, SInt16 *last, SInt16 *result) {
	SInt16 *p;
	short int &value;
	void *pAddress;
	
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = result;
  if (first != last) {
    do {
      uVar1 = *first;
      first = first + 1;
      result = puVar2 + 1;
      *puVar2 = uVar1;
      puVar2 = result;
    } while (first != last);
  }
  return result;
}

void vector<short, __malloc_alloc_template<0> >::insert_aux(SInt16 *position, SInt16 &x) {
	vector<short int,__malloc_alloc_template<0> > *this;
	vector<short int,__malloc_alloc_template<0> > *this;
	vector<short int,__malloc_alloc_template<0> > *this;
	void *result;
	vector<short int,__malloc_alloc_template<0> > *this;
	vector<short int,__malloc_alloc_template<0> > *this;
	SInt16 *p;
	short int &value;
	void *pAddress;
	vector<short int,__malloc_alloc_template<0> > *this;
	vector<short int,__malloc_alloc_template<0> > *this;
	vector<short int,__malloc_alloc_template<0> > *this;
	vector<short int,__malloc_alloc_template<0> > *this;
	SInt16 *first;
	SInt16 *pointer;
	vector<short int,__malloc_alloc_template<0> > *this;
	
  ushort uVar1;
  int iVar2;
  uint size;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  int iVar3;
  
  puVar4 = this->finish;
  if (puVar4 == this->end_of_storage) {
    iVar2 = (int)puVar4 - (int)this->start >> 1;
    iVar6 = iVar2 << 1;
    iVar3 = iVar6;
    if (iVar2 == 0) {
      iVar6 = 0;
      iVar3 = 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    size = iVar3 << 1;
    if (iVar3 == 0) {
      puVar4 = (ushort *)0x0;
      size = 0;
    }
    else {
      puVar4 = (ushort *)malloc(size);
      if (puVar4 == (ushort *)0x0) {
        puVar4 = (ushort *)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
      }
    }
                    /* end of inlined section */
    uninitialized_copy__H2ZPsZPs_X01X01X11_X11(this->start,position,puVar4);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *(ushort *)((int)puVar4 + ((int)position - (int)this->start)) = *x;
                    /* end of inlined section */
    uninitialized_copy__H2ZPsZPs_X01X01X11_X11
              (position,this->finish,
               (ushort *)((int)puVar4 + (int)position + (2 - (int)this->start)));
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    puVar5 = this->start;
    if (puVar5 == this->finish) {
      puVar5 = this->start;
    }
    else {
      do {
        puVar5 = puVar5 + 1;
      } while (puVar5 != this->finish);
                    /* end of inlined section */
      puVar5 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((puVar5 != (ushort *)0x0) && ((int)this->end_of_storage - (int)puVar5 >> 1 != 0)) {
      free(puVar5);
                    /* end of inlined section */
    }
    puVar5 = (ushort *)((int)puVar4 + iVar6);
    this->start = puVar4;
    this->end_of_storage = (ushort *)((int)puVar4 + size);
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *puVar4 = puVar4[-1];
                    /* end of inlined section */
    uVar1 = *x;
    copy_backward__H2ZPsZPs_X01X01X11_X11(position,this->finish + -1,this->finish);
    *position = uVar1;
    puVar5 = this->finish;
  }
  this->finish = puVar5 + 1;
  return;
}

cXObjectImpl** cXObjectImpl ** uninitialized_copy<cXObjectImpl **, cXObjectImpl **>(cXObjectImpl **first, cXObjectImpl **last, cXObjectImpl **result) {
	cXObjectImpl **p;
	cXObjectImpl *&value;
	void *pAddress;
	
  cXObjectImpl__128_1095 *pcVar1;
  cXObjectImpl__128_1095 **ppcVar2;
  
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

cXObjectImpl** cXObjectImpl ** copy_backward<cXObjectImpl **, cXObjectImpl **>(cXObjectImpl **first, cXObjectImpl **last, cXObjectImpl **result) {
  if (first != last) {
    do {
      last = last + -1;
      result = result + -1;
      *result = *last;
    } while (first != last);
  }
  return result;
}

void void fill<cXObjectImpl **, cXObjectImpl *>(cXObjectImpl **first, cXObjectImpl **last, cXObjectImpl *&value) {
  cXObjectImpl__128_1095 *pcVar1;
  
  if (first != last) {
    pcVar1 = *value;
    while( true ) {
      *first = pcVar1;
      first = first + 1;
      if (first == last) break;
      pcVar1 = *value;
    }
  }
  return;
}

cXObjectImpl** cXObjectImpl ** uninitialized_fill_n<cXObjectImpl **, unsigned int, cXObjectImpl *>(cXObjectImpl **first, unsigned int n, cXObjectImpl *&x) {
	cXObjectImpl **p;
	cXObjectImpl *&value;
	void *pAddress;
	
  cXObjectImpl__128_1095 **ppcVar1;
  int iVar2;
  
  iVar2 = n - 1;
  ppcVar1 = first;
  if (n != 0) {
    do {
      first = ppcVar1 + 1;
      iVar2 = iVar2 + -1;
      *ppcVar1 = *x;
      ppcVar1 = first;
    } while (iVar2 != -1);
  }
  return first;
}

void vector<cXObjectImpl *, __malloc_alloc_template<0> >::insert(cXObjectImpl **position, unsigned int n, cXObjectImpl *&x) {
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	unsigned int old_size;
	unsigned int len;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	unsigned int &b;
	unsigned int n;
	void *result;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	cXObjectImpl **first;
	cXObjectImpl **pointer;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	
  uint size;
  cXObjectImpl__128_1095 **ppcVar1;
  uint *puVar2;
  cXObjectImpl__128_1095 **ppcVar3;
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
    ppcVar1 = this->finish;
    if ((uint)((int)this->end_of_storage - (int)ppcVar1 >> 2) < n) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
      old_size = (int)ppcVar1 - (int)this->start >> 2;
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
        ppcVar1 = (cXObjectImpl__128_1095 **)0x0;
        size = 0;
      }
      else {
        ppcVar1 = (cXObjectImpl__128_1095 **)malloc(size);
        if (ppcVar1 == (cXObjectImpl__128_1095 **)0x0) {
          ppcVar1 = (cXObjectImpl__128_1095 **)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
        }
      }
                    /* end of inlined section */
      uninitialized_copy__H2ZPP12cXObjectImplZPP12cXObjectImpl_X01X01X11_X11
                (this->start,position,ppcVar1);
      uninitialized_fill_n__H3ZPP12cXObjectImplZUiZP12cXObjectImpl_X01X11RCX21_X01
                ((cXObjectImpl__128_1095 **)((int)ppcVar1 + ((int)position - (int)this->start)),
                 local_6c[0],x);
      uninitialized_copy__H2ZPP12cXObjectImplZPP12cXObjectImpl_X01X01X11_X11
                (position,this->finish,
                 ppcVar1 + ((int)position - (int)this->start >> 2) + local_6c[0]);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
      ppcVar3 = this->start;
      if (ppcVar3 == this->finish) {
        ppcVar3 = this->start;
      }
      else {
        do {
          ppcVar3 = ppcVar3 + 1;
        } while (ppcVar3 != this->finish);
                    /* end of inlined section */
        ppcVar3 = this->start;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
      if ((ppcVar3 != (cXObjectImpl__128_1095 **)0x0) &&
         ((int)this->end_of_storage - (int)ppcVar3 >> 2 != 0)) {
        free(ppcVar3);
                    /* end of inlined section */
      }
      this->start = ppcVar1;
      this->end_of_storage = (cXObjectImpl__128_1095 **)((int)ppcVar1 + size);
      this->finish = ppcVar1 + old_size + local_6c[0];
    }
    else {
      if (n < (uint)((int)ppcVar1 - (int)position >> 2)) {
        uninitialized_copy__H2ZPP12cXObjectImplZPP12cXObjectImpl_X01X01X11_X11
                  (ppcVar1 + -n,ppcVar1,ppcVar1);
        copy_backward__H2ZPP12cXObjectImplZPP12cXObjectImpl_X01X01X11_X11
                  (position,this->finish + -local_6c[0],this->finish);
        fill__H2ZPP12cXObjectImplZP12cXObjectImpl_X01X01RCX11_v(position,position + local_6c[0],x);
      }
      else {
        uninitialized_copy__H2ZPP12cXObjectImplZPP12cXObjectImpl_X01X01X11_X11
                  (position,ppcVar1,position + n);
        fill__H2ZPP12cXObjectImplZP12cXObjectImpl_X01X01RCX11_v(position,this->finish,x);
        uninitialized_fill_n__H3ZPP12cXObjectImplZUiZP12cXObjectImpl_X01X11RCX21_X01
                  (this->finish,local_6c[0] - ((int)this->finish - (int)position >> 2),x);
      }
      this->finish = this->finish + local_6c[0];
    }
  }
  return;
}

void vector<cXObjectImpl *, __malloc_alloc_template<0> >::insert_aux(cXObjectImpl **position, cXObjectImpl *&x) {
	cXObjectImpl *x_copy;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	void *result;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	cXObjectImpl **p;
	cXObjectImpl *&value;
	void *pAddress;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	cXObjectImpl **first;
	cXObjectImpl **pointer;
	vector<cXObjectImpl *,__malloc_alloc_template<0> > *this;
	
  cXObjectImpl__128_1095 *pcVar1;
  uint size;
  cXObjectImpl__128_1095 **ppcVar2;
  int iVar3;
  cXObjectImpl__128_1095 **ppcVar4;
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
      ppcVar2 = (cXObjectImpl__128_1095 **)0x0;
      size = 0;
    }
    else {
      ppcVar2 = (cXObjectImpl__128_1095 **)malloc(size);
      if (ppcVar2 == (cXObjectImpl__128_1095 **)0x0) {
        ppcVar2 = (cXObjectImpl__128_1095 **)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
      }
    }
                    /* end of inlined section */
                    /* end of inlined section */
    uninitialized_copy__H2ZPP12cXObjectImplZPP12cXObjectImpl_X01X01X11_X11
              (this->start,position,ppcVar2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *(cXObjectImpl__128_1095 **)((int)ppcVar2 + ((int)position - (int)this->start)) = *x;
                    /* end of inlined section */
    uninitialized_copy__H2ZPP12cXObjectImplZPP12cXObjectImpl_X01X01X11_X11
              (position,this->finish,
               (cXObjectImpl__128_1095 **)((int)ppcVar2 + (int)position + (4 - (int)this->start)));
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
    if ((ppcVar4 != (cXObjectImpl__128_1095 **)0x0) &&
       ((int)this->end_of_storage - (int)ppcVar4 >> 2 != 0)) {
      free(ppcVar4);
                    /* end of inlined section */
    }
    ppcVar4 = ppcVar2 + iVar5;
    this->start = ppcVar2;
    this->end_of_storage = (cXObjectImpl__128_1095 **)((int)ppcVar2 + size);
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *ppcVar2 = ppcVar2[-1];
                    /* end of inlined section */
    pcVar1 = *x;
    copy_backward__H2ZPP12cXObjectImplZPP12cXObjectImpl_X01X01X11_X11
              (position,this->finish + -1,this->finish);
    *position = pcVar1;
    ppcVar4 = this->finish;
  }
  this->finish = ppcVar4 + 1;
  return;
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
	
  cXPersonImpl__128_1097 *pcVar1;
  cXPersonImpl__128_1097 **ppcVar2;
  
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
	
  cXPersonImpl__128_1097 *pcVar1;
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
              (this->start,(cXPersonImpl__123_903 **)position,ppcVar2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *(cXPersonImpl__128_1097 **)((int)ppcVar2 + ((int)position - (int)this->start)) = *x;
                    /* end of inlined section */
    uninitialized_copy__H2ZPP12cXPersonImplZPP12cXPersonImpl_X01X01X11_X11
              ((cXPersonImpl__123_903 **)position,this->finish,
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
              ((cXPersonImpl__123_903 **)position,this->finish + -1,this->finish);
    *position = pcVar1;
    ppcVar4 = this->finish;
  }
  this->finish = ppcVar4 + 1;
  return;
}

cXPortal** cXPortal ** copy_backward<cXPortal **, cXPortal **>(cXPortal **first, cXPortal **last, cXPortal **result) {
  if (first != last) {
    do {
      last = last + -1;
      result = result + -1;
      *result = *last;
    } while (first != last);
  }
  return result;
}

cXPortal** cXPortal ** uninitialized_copy<cXPortal **, cXPortal **>(cXPortal **first, cXPortal **last, cXPortal **result) {
	cXPortal **p;
	cXPortal *&value;
	void *pAddress;
	
  cXPortal__128_910 *pcVar1;
  cXPortal__128_910 **ppcVar2;
  
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

void vector<cXPortal *, __malloc_alloc_template<0> >::insert_aux(cXPortal **position, cXPortal *&x) {
	cXPortal *x_copy;
	vector<cXPortal *,__malloc_alloc_template<0> > *this;
	vector<cXPortal *,__malloc_alloc_template<0> > *this;
	vector<cXPortal *,__malloc_alloc_template<0> > *this;
	void *result;
	vector<cXPortal *,__malloc_alloc_template<0> > *this;
	vector<cXPortal *,__malloc_alloc_template<0> > *this;
	cXPortal **p;
	cXPortal *&value;
	void *pAddress;
	vector<cXPortal *,__malloc_alloc_template<0> > *this;
	vector<cXPortal *,__malloc_alloc_template<0> > *this;
	vector<cXPortal *,__malloc_alloc_template<0> > *this;
	vector<cXPortal *,__malloc_alloc_template<0> > *this;
	cXPortal **first;
	cXPortal **pointer;
	vector<cXPortal *,__malloc_alloc_template<0> > *this;
	
  cXPortal__128_910 *pcVar1;
  uint size;
  cXPortal__128_910 **ppcVar2;
  int iVar3;
  cXPortal__128_910 **ppcVar4;
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
      ppcVar2 = (cXPortal__128_910 **)0x0;
      size = 0;
    }
    else {
      ppcVar2 = (cXPortal__128_910 **)malloc(size);
      if (ppcVar2 == (cXPortal__128_910 **)0x0) {
        ppcVar2 = (cXPortal__128_910 **)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
      }
    }
                    /* end of inlined section */
                    /* end of inlined section */
    uninitialized_copy__H2ZPP8cXPortalZPP8cXPortal_X01X01X11_X11(this->start,position,ppcVar2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *(cXPortal__128_910 **)((int)ppcVar2 + ((int)position - (int)this->start)) = *x;
                    /* end of inlined section */
    uninitialized_copy__H2ZPP8cXPortalZPP8cXPortal_X01X01X11_X11
              (position,this->finish,
               (cXPortal__128_910 **)((int)ppcVar2 + (int)position + (4 - (int)this->start)));
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
    if ((ppcVar4 != (cXPortal__128_910 **)0x0) &&
       ((int)this->end_of_storage - (int)ppcVar4 >> 2 != 0)) {
      free(ppcVar4);
                    /* end of inlined section */
    }
    ppcVar4 = ppcVar2 + iVar5;
    this->start = ppcVar2;
    this->end_of_storage = (cXPortal__128_910 **)((int)ppcVar2 + size);
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *ppcVar2 = ppcVar2[-1];
                    /* end of inlined section */
    pcVar1 = *x;
    copy_backward__H2ZPP8cXPortalZPP8cXPortal_X01X01X11_X11(position,this->finish + -1,this->finish)
    ;
    *position = pcVar1;
    ppcVar4 = this->finish;
  }
  this->finish = ppcVar4 + 1;
  return;
}

void ObjectModule::~ObjectModule(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (ObjectModule__vtable *)_vt_12ObjectModule;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

ObjectFolder* ObjectModuleImpl::GetFolder() {
  return _5Globs_pObjectFolder;
}

SInt16 ObjectModuleImpl::AddObject(cXObject *newObject, SInt16 id) {
  ushort uVar1;
  
  uVar1 = AddObject__16ObjectModuleImplP8cXObjectsb(this,newObject,id,false);
  return uVar1;
}

cXObject* ObjectModuleImpl::GetFirst() {
  cXObject__128_898 *pcVar1;
  
  pcVar1 = (cXObject__128_898 *)0x0;
  if (this->fFirst != (cXObjectImpl__128_1095 *)0x0) {
    pcVar1 = this->fFirst->_vb898;
  }
  return pcVar1;
}

cXObject* ObjectModuleImpl::GetObject(int iIndex) {
  int iVar1;
  cXObject__128_898 *pcVar2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  iVar1 = *(int *)(*(int *)&this->field_0x1c + iIndex * 4);
  pcVar2 = (cXObject__128_898 *)0x0;
  if (iVar1 != 0) {
    pcVar2 = *(cXObject__128_898 **)(iVar1 + 4);
  }
  return pcVar2;
}

int ObjectModuleImpl::GetNumObjects() {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  return *(int *)&this->field_0x20 - *(int *)&this->field_0x1c >> 2;
}

cSimulator* ObjectModuleImpl::GetSim() {
  return _5Globs_pSimulator;
}

cXPerson* ObjectModuleImpl::GetPeople(int iIndex) {
  cXPersonImpl__123_903 *pcVar1;
  cXPerson__128_907 *pcVar2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  pcVar1 = (this->fPeople).start[iIndex];
  pcVar2 = (cXPerson__128_907 *)0x0;
  if (pcVar1 != (cXPersonImpl__123_903 *)0x0) {
    pcVar2 = (cXPerson__128_907 *)pcVar1->_vb1079;
  }
  return pcVar2;
}

int ObjectModuleImpl::GetNumPeople() {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  return (int)(this->fPeople).finish - (int)(this->fPeople).start >> 2;
}

cXPortal* ObjectModuleImpl::GetPortal(int iIndex) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  return (this->fPortals).start[iIndex];
}

int ObjectModuleImpl::GetNumPortals() {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  return (int)(this->fPortals).finish - (int)(this->fPortals).start >> 2;
}

RoutingSlot& ObjectModuleImpl::GetGlobalRoutingSlot(int iIndex) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  return (this->fGlobalRoutingSlots).start + iIndex;
}

int ObjectModuleImpl::GetNumGlobalRoutineSlots() {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  return (int)(this->fGlobalRoutingSlots).finish - (int)(this->fGlobalRoutingSlots).start >> 6;
}

bool ObjectModuleImpl::IsBuyAndBuildDisabled() {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  return (int)(this->fDisablers).finish - (int)(this->fDisablers).start >> 2 != 0;
}

void SimpleReconObject<ObjectModuleImpl>::~SimpleReconObject(int __in_chrg) {
  ___11ReconObject(&this->field0_0x0,__in_chrg);
  return;
}

void SimpleReconObject<ObjectModuleImpl>::DoStream(ReconBuffer *r, SInt32 version) {
  ObjectModule__vtable *pOVar1;
  
  pOVar1 = (this->fObj->field0_0x0).__vtable;
  (*(code *)pOVar1[1].CleanupPeople)
            ((int)this->fObj->fObjectMap[-1] + *(short *)&pOVar1[1].AdvanceSelectedPerson + 0x44,r,
             version);
  return;
}

SInt32 SimpleReconObject<ObjectModuleImpl>::GetType() {
  return this->fType;
}

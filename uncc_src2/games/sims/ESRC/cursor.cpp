// STATUS: NOT STARTED

#include "cursor.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb3534;
	__vtbl_ptr_type *$vf2008;
	
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
	cXObject *$vb2008;
	static Int kSimTicksPerMotiveTick;
	__vtbl_ptr_type *$vf1740;
	
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
struct cXMTObject : virtual cXObject {
	cXObject *$vb2008;
	__vtbl_ptr_type *$vf5522;
	
	cXMTObject& operator=();
	cXMTObject(int __in_chrg);
protected:
	cXMTObject();
	/* vtable[1] */ virtual cXMTObject(cXMTObject*, int, void);
	void setMTObjectImpl(cXMTObjectImpl *obj);
	void setCursorObjectImpl(cXCursorObjectImpl *obj);
	void setPortalImpl(cXPortalImpl *obj);
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
struct cXCursorObject : virtual cXMTObject {
	cXMTObject *$vb5522;
	__vtbl_ptr_type *$vf1968;
	
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
struct TreeSimImpl : virtual TreeSim {
	TreeSim *$vb3534;
	Int fIterations;
	TreeStack fStack;
	Int fLastTrans;
	bool fLastResult;
	StdPrm *fAutoStackArea;
	SInt16 fError;
	__vtbl_ptr_type *$vf5747;
	
	TreeSimImpl& operator=();
	TreeSimImpl(int __in_chrg);
	/* vtable[1] */ virtual TreeSimImpl(TreeSimImpl*, int, void);
	/* vtable[1] */ virtual TreeReturnCode TryElement();
	/* vtable[2] */ virtual void Error();
	/* vtable[3] */ virtual void StackJustPopped();
	void GetCurrentNode(SInt16 *treeID, SInt16 *nodeNum);
	void Reset(Behavior *startBehavior, SInt16 startTreeID);
	bool Gosub(Behavior *pTransfer, StdPrm *inStack, SInt16 treeID);
	NodeAction DoNodeAction(StackElem *elem);
	/* vtable[4] */ virtual NodeAction HandleBreakpoint(StackElem *elem, BehaviorNode *node);
	bool RunCheckTree(Behavior *beh, SInt16 stackObjectID, SInt16 treeID, StdPrm *locals);
	void RunOneTickTree(Behavior *beh, SInt16 stackObjectID, SInt16 treeID, StdPrm *locals);
	TreeSimImpl();
	/* vtable[2] */ virtual void Initialize(Int stackSize, StdPrm *autoStackArea);
	/* vtable[3] */ virtual bool Simulate(SInt32 ticks);
	/* vtable[4] */ virtual void SetError(SInt16 err);
	/* vtable[5] */ virtual SInt16 GetError();
	/* vtable[6] */ virtual void ClearError();
	/* vtable[7] */ virtual StackElem* GetHighLevelAction();
	/* vtable[8] */ virtual StackElem* GetCurElem();
	/* vtable[9] */ virtual StackElem* GetMainSimElem();
	/* vtable[10] */ virtual StackElem* GetNthElem(SInt16 stackPos);
	/* vtable[11] */ virtual SInt16 GetStackSize();
	/* vtable[12] */ virtual SInt16 GetCurrentPrimitive();
	/* vtable[13] */ virtual Int GetIterations();
	/* vtable[14] */ virtual bool GetLastTransition();
	/* vtable[15] */ virtual bool GetLastResult();
	/* vtable[16] */ virtual ISimInstance* GetISimInstance();
};

// warning: multiple differing types with the same name (name not equal)
struct cXObjectImpl : virtual cXObject, virtual TreeSimImpl {
	TreeSimImpl *$vb5747;
	cXObject *$vb2008;
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
	__vtbl_ptr_type *$vf3423;
	
	cXObjectImpl& operator=();
	cXObjectImpl(int __in_chrg, ObjSelector *selector, ObjectModule *module);
	/* vtable[1] */ virtual void Kill();
	/* vtable[2] */ virtual Int GetNumAttr();
	/* vtable[6] */ virtual SpriteSlot& GetSpriteSlot();
	/* vtable[3] */ virtual float CalcDistance(cXObject *to);
	/* vtable[4] */ virtual float CalcShortDistance(FTilePt *dest);
	/* vtable[5] */ virtual float CalcShortDistance();
	/* vtable[7] */ virtual void SetHilite(Int newHilite);
	/* vtable[8] */ virtual Int GetHilite();
	/* vtable[9] */ virtual void SetMiscFlag(MiscFlag flag, bool on);
	/* vtable[10] */ virtual bool GetMiscFlag(MiscFlag flag);
	/* vtable[11] */ virtual void UpdateSimFlags();
	/* vtable[12] */ virtual void Dirty(RecursionParam inParam);
	/* vtable[13] */ virtual void SetRenderLayer(RenderLayer inNewState, RecursionParam inParam);
	/* vtable[14] */ virtual int GetDynamicToStaticLatency();
	/* vtable[15] */ virtual RenderLayer GetRenderLayer();
	/* vtable[16] */ virtual bool IsRenderingRoot();
	/* vtable[17] */ virtual RECT& GetLastDamage();
	/* vtable[18] */ virtual void SetLastDamage(RECT &in);
	/* vtable[19] */ virtual void ResetDamage();
	/* vtable[20] */ virtual bool IsEmissive();
	/* vtable[21] */ virtual bool IsBeingDraggedAround();
	/* vtable[22] */ virtual void CenterHouseViewOnMe(bool asynchronous);
	/* vtable[23] */ virtual void SetDrawLabel(bool drawLabel);
	/* vtable[24] */ virtual bool IsSpriteVisible(SInt16 spriteID);
	/* vtable[3] */ virtual bool Simulate(SInt32 ticks);
	/* vtable[25] */ virtual bool RunTree(char *treeName);
	/* vtable[26] */ virtual bool RunTree();
	/* vtable[27] */ virtual bool RunTree();
	/* vtable[28] */ virtual void ParseUIString(BString2 &rawText, StackElem *elem, StdPrm *stackVars, ObjSelector **stackObjType);
	static bool GetFreeWill(/* parameters unknown */);
	static bool GetAutoCenter(/* parameters unknown */);
	static void SetAutoCenter(/* parameters unknown */);
	static bool GetAutoReset(/* parameters unknown */);
	static void SetAutoReset(/* parameters unknown */);
	/* vtable[30] */ virtual void HandleError();
	/* vtable[29] */ virtual void Error(SInt16 errNum);
	/* vtable[1] */ virtual TreeReturnCode TryElement(StackElem *elem, BehaviorNode *node);
	/* vtable[1] */ virtual bool GosubObjectTree(cXObject *other, StdPrm *stck, SInt16 treeID, bool hasIcon);
	/* vtable[2] */ virtual void Cleanup(cXObject *obj);
	/* vtable[4] */ virtual NodeAction HandleBreakpoint(StackElem *elem, BehaviorNode *node);
	TreeReturnCode InterpValue(StdPrm ownerField, StdPrm dataField, StdPrm **dataRef, float **floatRef, StdPrm *pResultValue);
	TreeReturnCode TryUserEvent(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryUIEffect(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryTestObjectType(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryMakeNewCharacter(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryFindGoodLocation(StackElem *elem, XPrimParam *param);
	TreeReturnCode TrySetBalloon(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryDirectionTo(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryDistanceTo(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryRandom(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryTreeBreak(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryGrab(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryDrop();
	TreeReturnCode TryUpdate(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryIdle(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryKillObject(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryShowString(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryNotifyStackObject(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryCallNamedTree(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryMakeActionString(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryGenericSimCall(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryDialog(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryPushAction(StackElem *elem, XPrimParam *param);
	TreeReturnCode TrySetToNext(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryExpression(ExpressionParam *expression);
	TreeReturnCode TryFindTreeNew(StackElem *elem, FindTreeNewParam *param);
	TreeReturnCode TryCreateObject(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryPreloadObject(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryRelationship(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryRelationship2(StackElem *elem, XPrimParam *_param);
	TreeReturnCode TryDropOnto(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryBudget(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryFind5WorstMotives(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryFindFunctionalObject(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryCallFunctionalTree(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryPlaySound(StackElem *elem, PlaySoundParam *param);
	TreeReturnCode TryKillSounds(StackElem *elem, KillSoundsParam *param);
	TreeReturnCode TrySnap(FTilePt loc, int level, cXObject *container, Int slotNum, bool ignoreRooms, Int snapDirection, bool useFootprint);
	TreeReturnCode TrySnap();
	TreeReturnCode TryBurn(StackElem *elem, XPrimParam *param);
	TreeReturnCode TryTutorial(StackElem *elem, XPrimParam *param);
	void JustBorn();
	void UpdateAge();
	void DayPassed();
	/* vtable[3] */ virtual void Initialize();
	/* vtable[4] */ virtual void Reset(Boolean simonce);
	/* vtable[5] */ virtual void PostLoad(SInt32 version);
	/* vtable[6] */ virtual void PreSave();
	cXObjectImpl();
	/* vtable[1] */ virtual cXObjectImpl();
	void HierGetSite(HierarchySite *site);
	void HierSetSite(HierarchySite *newsite);
	void HierSever();
	cXObject* HierGetObject(HierarchySite *site);
	Int HierCountSlots();
	ObjectSlot* HierGetSlot(Int slotNum);
	cXObject* HierGetChild(Int number);
	cXObject* HierGetParent();
	cXObject* GetRootObject(FTilePt &loc, Int level);
	void GetPlacementSpec(PlacementSpec *ps);
	bool TestAndPlace(PlacementSpec *ps, bool placing);
	static void UpdateChairFacing(/* parameters unknown */);
	bool RequiresWallAdjacency();
	void UpdateWallAdjacency();
	bool AllowIdleOptimization();
	void SetLocation(FTilePt &loc, Int inLevel, RecursionParam inParam);
	void ComputeRect(FTilePt &inCenter, FTileRect *_outRect);
	/* vtable[31] */ virtual void Turn(Int notches);
	/* vtable[32] */ virtual void Pickup();
	/* vtable[33] */ virtual bool CanPlace(FTilePt &loc, Int inLevel, cXObject *container, Int slotNum);
	/* vtable[34] */ virtual void Place(FTilePt &loc, Int inLevel, cXObject *container, Int slotNum);
	/* vtable[35] */ virtual bool IsPartOfMe(cXObject *other);
	/* vtable[36] */ virtual bool UserCanPlace(FTilePt &newLoc, int inLevel, cXObject *ontop, Int slotNum);
	/* vtable[37] */ virtual void UserPlace(FTilePt &newLoc, int inLevel, cXObject *ontop, Int slotNum);
	/* vtable[38] */ virtual bool UserCanPickup();
	/* vtable[39] */ virtual void UserPickup(bool single);
	/* vtable[40] */ virtual bool UserCanDelete();
	/* vtable[41] */ virtual bool FindGoodLocation(FindGoodLocationParams &fglp, FTilePt *outLoc);
	/* vtable[42] */ virtual void GetPlacementInfo(FTilePt *loc, Int *level, cXObject **container, SInt16 *slotNum, bool *inWorld);
	/* vtable[43] */ virtual bool IsInWorld();
	/* vtable[44] */ virtual bool TestIntersection(FTilePt &loc, Int inLevel);
	/* vtable[45] */ virtual void ForceLocation();
	/* vtable[46] */ virtual ObjFnTable* GetFnTable();
	/* vtable[47] */ virtual SInt16 GetTreeID(ObjEntryPoint ep);
	/* vtable[48] */ virtual void SetLevel(int inLevel);
	/* vtable[49] */ virtual bool IsOccupied();
	/* vtable[50] */ virtual void SetData(int i, SInt16 d);
	/* vtable[51] */ virtual void SetTemp(int i, SInt16 d);
	/* vtable[52] */ virtual void SetAttr(int i, SInt16 d);
	/* vtable[53] */ virtual ObjectProbe* GetObjectProbe();
	/* vtable[54] */ virtual void SetObjectProbe(ObjectProbe *pr);
	/* vtable[55] */ virtual cXObject* GetInteractionLeader();
	/* vtable[56] */ virtual Int GetFrontFaceDirection();
	/* vtable[57] */ virtual ObjectFolder* GetFolder();
	/* vtable[58] */ virtual bool SimIndependent();
	/* vtable[59] */ virtual bool SimEnabled();
	/* vtable[60] */ virtual void EnableSim(bool enable);
	/* vtable[61] */ virtual int GetIdleStatus();
	/* vtable[62] */ virtual void SetIdleStatus(int ticks);
	/* vtable[63] */ virtual void ClearIdleStatus();
	/* vtable[64] */ virtual FTileRect& GetRect();
	/* vtable[65] */ virtual SInt16 GetData(int i);
	/* vtable[66] */ virtual SInt16 GetTemp(int i);
	/* vtable[67] */ virtual SInt16 GetAttr(int i);
	/* vtable[68] */ virtual ObjectModule* GetModule();
	/* vtable[69] */ virtual AnimTable* GetAdultAnimTable();
	/* vtable[70] */ virtual AnimTable* GetChildAnimTable();
	/* vtable[71] */ virtual bool HideForCutaway();
	/* vtable[72] */ virtual TileWallsSegment GetRequiredSegment();
	/* vtable[73] */ virtual Int CountObjectSlots();
	/* vtable[74] */ virtual ObjectSlot* GetObjectSlot(Int index);
	/* vtable[75] */ virtual cXObject* GetContainedObject(Int slotNum);
	/* vtable[76] */ virtual float GetSlotHeight(Int slotNum);
	/* vtable[77] */ virtual cXObject* GetContainer();
	/* vtable[78] */ virtual bool IsContained();
	/* vtable[79] */ virtual SInt16 GetContainerID();
	/* vtable[80] */ virtual SInt16 GetContainedSlotNum();
	/* vtable[81] */ virtual cXObject* GetNextObjectSibling();
	/* vtable[82] */ virtual cXObject* GetPrevObjectSibling();
	/* vtable[83] */ virtual RoomID GetRoom();
	/* vtable[84] */ virtual ObjDefinition* GetDef();
	/* vtable[85] */ virtual SInt16 GetType();
	/* vtable[86] */ virtual void GetTypeName(BString &name);
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
	/* vtable[101] */ virtual cXObject* GetObstacleAtLocation(FTilePt &loc, Int level);
	/* vtable[102] */ virtual int GetNumRoutingSlots();
	/* vtable[103] */ virtual RoutingSlot& GetRoutingSlot(int iIndex);
	/* vtable[104] */ virtual SInt16 GetCurrentValue();
	/* vtable[105] */ virtual SInt16 GetSize();
	/* vtable[106] */ virtual cSimulator* GetSim();
	/* vtable[107] */ virtual void GetErrorString(StringBuffer &errStr);
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
	/* vtable[126] */ virtual cXObject* GetObjectFromID(SInt16 id);
	/* vtable[127] */ virtual cXObject* GetNext();
	/* vtable[128] */ virtual cXObject* GetFirst();
	cXObjectImpl* GetNextImpl();
	cXObjectImpl* GetFirstImpl();
	/* vtable[129] */ virtual Int GetWallBlockFlags();
	/* vtable[130] */ virtual void ReconStream(ReconBuffer *r, SInt32 version, bool placeHolder);
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[132] */ virtual void ReconSlots(ReconBuffer *r, SInt32 version);
	/* vtable[133] */ virtual void ReconHeader(ReconBuffer *r, SInt32 version);
	/* vtable[134] */ virtual void Backtrace();
	/* vtable[135] */ virtual char* GetName();
	/* vtable[136] */ virtual int GetDebugName(char *buffer, int iBufferSize);
	/* vtable[137] */ virtual void AdvanceGraphic(int inc, bool allInGroup);
	/* vtable[138] */ virtual cXObjectImpl* GetObjectImplementation();
};

// warning: multiple differing types with the same name (name not equal)
struct cXMTObjectImpl : virtual cXMTObject, virtual cXObjectImpl {
	cXObjectImpl *$vb3423;
	cXMTObject *$vb5522;
	cXMTObjectImpl *fMultiNext;
	cXMTObjectImpl *fLeadObject;
	Int fNormXOff;
	Int fNormYOff;
	Int fNormLevelOff;
	Int fXOff;
	Int fYOff;
	Int fLevelOff;
	
	cXMTObjectImpl& operator=();
	cXMTObjectImpl(int __in_chrg, ObjSelector *sel, cXMTObject *leader, ObjectModule *module);
	void SetLeader(cXMTObject *leader);
	void RemoveFromChain();
	void UpdateDynAdjacency();
	void UpdateAllAdjacecy();
	void MergeDynamic(cXMTObject *mtObject);
	cXMTObjectImpl();
	/* vtable[1] */ virtual cXMTObjectImpl(cXMTObjectImpl*, int, void);
	/* vtable[1] */ virtual void Initialize();
	/* vtable[2] */ virtual cXMTObject* GetFirstMultiTileObject();
	/* vtable[3] */ virtual cXMTObject* GetNextMultiTileObject();
	/* vtable[31] */ virtual void Turn(Int notches);
	/* vtable[32] */ virtual void Pickup();
	/* vtable[33] */ virtual bool CanPlace(FTilePt &newLoc0, Int inLevel, cXObject *ontop, Int slotNum);
	/* vtable[34] */ virtual void Place(FTilePt &loc, Int inLevel, cXObject *ontop, Int slotNum);
	/* vtable[4] */ virtual void Reset(Boolean simonce);
	/* vtable[35] */ virtual bool IsPartOfMe(cXObject *obj);
	/* vtable[36] */ virtual bool UserCanPlace(FTilePt &newLoc, int inLevel, cXObject *ontop, Int slotNum);
	/* vtable[37] */ virtual void UserPlace(FTilePt &newLoc, int inLevel, cXObject *ontop, Int slotNum);
	/* vtable[38] */ virtual bool UserCanPickup();
	/* vtable[39] */ virtual void UserPickup(bool single);
	/* vtable[40] */ virtual bool UserCanDelete();
	/* vtable[5] */ virtual void AssignOffsets();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[130] */ virtual void ReconStream(ReconBuffer *r, SInt32 version, bool placeHolder);
	/* vtable[6] */ virtual void PostLoad(SInt32 version);
	/* vtable[7] */ virtual void SetMultiObjectData(Int dataNumber, Int dataValue);
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
struct cXCursorObjectImpl : virtual cXCursorObject, virtual cXMTObjectImpl {
	cXMTObjectImpl *$vb3536;
	cXCursorObject *$vb1968;
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
	cXCursorObjectImpl(int __in_chrg, ObjSelector *sel, cXObject *floatAbove, cXMTObject *leader, ObjectModule *module);
	void AlignFloater();
	bool AttemptFloaterPlacement(FTilePt &loc, int inLevel);
	cXCursorObjectImpl();
	/* vtable[1] */ virtual cXCursorObjectImpl(cXCursorObjectImpl*, int, void);
	/* vtable[31] */ virtual void Turn(Int notches);
	/* vtable[32] */ virtual void Pickup();
	/* vtable[33] */ virtual bool CanPlace(FTilePt &loc, Int inLevel, cXObject *ontop, Int slotNum);
	/* vtable[34] */ virtual void Place(FTilePt &loc, Int inLevel, cXObject *ontop, Int slotNum);
	/* vtable[5] */ virtual void AssignOffsets();
	/* vtable[4] */ virtual void Reset(Boolean simonce);
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
	/* vtable[10] */ virtual void FaceDirection(Int dir);
	/* vtable[14] */ virtual int GetDynamicToStaticLatency();
	/* vtable[11] */ virtual FTilePt GetLastPlace();
	/* vtable[12] */ virtual int GetLastLevel();
	/* vtable[13] */ virtual cXCursorObjectImpl* GetCursorObjectImplementation();
};

bool esmscrsrPauseUpdate = false;
float kRefundRate = 0.8f;

EBound3 ESimsCursor::m_lotBound = {
	/* .vMin = */ {
		/* . = */ {
			/* .d = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f
			},
			/* . = */ {
				/* .x = */ 0.f,
				/* .y = */ 0.f,
				/* .z = */ 0.f
			}
		}
	},
	/* .vMax = */ {
		/* . = */ {
			/* .d = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f
			},
			/* . = */ {
				/* .x = */ 0.f,
				/* .y = */ 0.f,
				/* .z = */ 0.f
			}
		}
	}
};

ELights m_esmc_playerColorLight[2];

ELights m_esmc_deflight = {
	/* .a = */ {
		/* .vColor = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f
				},
				/* . = */ {
					/* .x = */ 0.f,
					/* .y = */ 0.f,
					/* .z = */ 0.f
				}
			}
		},
		/* .pad = */ 0.f
	}
};

float _curs_move_pause = 0.25f;
float _cursRadMin = 0.35f;
float _cursRadMax = 1.f;
ERShader *ESimsCursor::m_pWhiteLineShader = NULL;
ERShader *ESimsCursor::m_pWallUnderConstructionShd = NULL;
ERShader *ESimsCursor::m_pBuildToolGuideShd = NULL;
bool ESimsCursor::m_bGridInit = false;
EDL *ESimsCursor::m_pGridDl = NULL;

__vtbl_ptr_type ESimsCursor::Panelstateman virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ -332,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -332,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsCursor::~ESimsCursor,
		/* .__delta2 = */ -5792
	},
	/* [2] = */ {
		/* .__delta = */ -332,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsCursor::SetState,
		/* .__delta2 = */ 120
	},
	/* [3] = */ {
		/* .__delta = */ -332,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsCursor::SetEvent,
		/* .__delta2 = */ 18352
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ESimsCursor virtual table[16] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsCursor::~ESimsCursor,
		/* .__delta2 = */ -5792
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsCursor::Update,
		/* .__delta2 = */ 5320
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsCursor::Draw,
		/* .__delta2 = */ 18344
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsCursor::SetPos,
		/* .__delta2 = */ -1768
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::SetBoxDims,
		/* .__delta2 = */ 3560
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::SetBoxDims,
		/* .__delta2 = */ 3592
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsCursor::Message,
		/* .__delta2 = */ -696
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::StateChanged,
		/* .__delta2 = */ 3672
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::OnButtonRepeat,
		/* .__delta2 = */ 3680
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::OnStickRepeat,
		/* .__delta2 = */ 3688
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::GetPos,
		/* .__delta2 = */ 3912
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::AddChild,
		/* .__delta2 = */ 3024
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::RemoveChild,
		/* .__delta2 = */ 3072
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsCursor::SetFlag,
		/* .__delta2 = */ -1168
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type Panelstateman virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &Panelstateman::~Panelstateman,
		/* .__delta2 = */ 12000
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

u32 CursorFloorTile::GetMaxisIndex() {
  uint uVar1;
  
  uVar1 = GetFloorIndex__7EGlobalPC9FloorTile(&_globals,this->m_node);
  return uVar1;
}

void GetObjectInstance(cXObject *pXObj, TNodeList<ISimInstance *> &instances) {
	cXMTObject *mtobj;
	cXObject *ptr;
	ISimInstance *pInstance;
	TNodeList<ISimInstance *> *this;
	ISimInstance *data;
	ISimInstance *pInstance;
	TNodeList<ISimInstance *> *this;
	ISimInstance *data;
	TNodeList<ISimInstance *> *this;
	ISimInstance *data;
	ISimInstance *pInstance;
	TNodeList<ISimInstance *> *this;
	ISimInstance *data;
	
  TreeSim__vtable *pTVar1;
  void *pvVar2;
  int *piVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  
  RemoveAll__9ENodeList(&instances->field0_0x0);
  if (pXObj != (cXObject__15_2008 *)0x0) {
    lVar5 = (*(code *)pXObj->__vtable[1].GetFrontFaceDirection)
                      ((int)&pXObj->_vb3534 +
                       (int)*(short *)&pXObj->__vtable[1].GetInteractionLeader);
    if (lVar5 == 0) {
      pTVar1 = pXObj->_vb3534->__vtable;
      lVar5 = (*(code *)pTVar1[1].GetISimInstance)
                        ((int)&pXObj->_vb3534->m_pObject + (int)*(short *)&pTVar1[1].GetLastResult);
      if (lVar5 != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        AddTail__9ENodeListUi(&instances->field0_0x0,(uint)lVar5);
      }
    }
    else {
                    /* inlined from ../MSrc/SCID.h */
      pvVar2 = _dyncastimpl__7TreeSim4SCID(pXObj->_vb3534,cXMTObjectID);
                    /* end of inlined section */
      lVar5 = (**(code **)(*(int *)((int)pvVar2 + 4) + 0x4c))
                        ((int)pvVar2 + (int)*(short *)(*(int *)((int)pvVar2 + 4) + 0x48));
      if (lVar5 == 0) {
        lVar5 = (**(code **)(*(int *)((int)pvVar2 + 4) + 0x14))
                          ((int)pvVar2 + (int)*(short *)(*(int *)((int)pvVar2 + 4) + 0x10));
        if (lVar5 != 0) {
          piVar3 = *(int **)lVar5;
          while( true ) {
            iVar8 = *(int *)(*piVar3 + 0x1c);
            lVar6 = (**(code **)(iVar8 + 0x84))(*piVar3 + (int)*(short *)(iVar8 + 0x80));
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
            puVar4 = Search__C9ENodeListUi(&instances->field0_0x0,(uint)lVar6);
                    /* end of inlined section */
            iVar8 = (int)lVar5;
            if (lVar6 == 0) {
              iVar7 = *(int *)(iVar8 + 4);
            }
            else if (puVar4 == (undefined1 *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
              AddTail__9ENodeListUi(&instances->field0_0x0,(uint)lVar6);
                    /* end of inlined section */
              iVar7 = *(int *)(iVar8 + 4);
            }
            else {
              iVar7 = *(int *)(iVar8 + 4);
            }
            lVar5 = (**(code **)(iVar7 + 0x1c))(iVar8 + *(short *)(iVar7 + 0x18));
            if (lVar5 == 0) break;
            piVar3 = *(int **)lVar5;
          }
        }
      }
      else {
        pTVar1 = pXObj->_vb3534->__vtable;
        lVar5 = (*(code *)pTVar1[1].GetISimInstance)
                          ((int)&pXObj->_vb3534->m_pObject + (int)*(short *)&pTVar1[1].GetLastResult
                          );
        if (lVar5 != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
          AddTail__9ENodeListUi(&instances->field0_0x0,(uint)lVar5);
                    /* end of inlined section */
        }
      }
    }
  }
  return;
}

ESimsCursor* ESimsCursor::ESimsCursor(int __in_chrg, int playerid) {
  undefined *puVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  ulong *puVar5;
  short sVar6;
  undefined6 uVar7;
  undefined6 uVar8;
  undefined6 uVar9;
  ulong uVar10;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  __vtbl_ptr_type local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  __vtbl_ptr_type local_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
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
  if (__in_chrg != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
                    /* end of inlined section */
    this->_vb1647 = (Panelstateman *)&this->field_0x14c;
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
    *(__vtbl_ptr_type **)&this->field_0x150 = _vt_13Panelstateman;
    *(undefined4 *)&this->field_0x14c = 0;
  }
                    /* end of inlined section */
  __13EUIObjectNode((EUIObjectNode *)this);
  this->_vb1647->__vtable = (Panelstateman__vtable *)_vt_11ESimsCursor_13Panelstateman;
  uVar9 = _vt_11ESimsCursor_13Panelstateman[3]._2_6_;
  uVar8 = _vt_11ESimsCursor_13Panelstateman[2]._2_6_;
  uVar7 = _vt_11ESimsCursor_13Panelstateman[1]._2_6_;
  if (__in_chrg == 0) {
    local_60 = _vt_11ESimsCursor_13Panelstateman[4];
    local_80 = _vt_11ESimsCursor_13Panelstateman[0];
    this->_vb1647->__vtable = (Panelstateman__vtable *)&local_80;
    sVar6 = (short)this - ((short)this->_vb1647 + -0x14c);
    local_78 = CONCAT62(uVar7,_vt_11ESimsCursor_13Panelstateman[1].__delta + sVar6);
    local_70 = CONCAT62(uVar8,_vt_11ESimsCursor_13Panelstateman[2].__delta + sVar6);
    local_68 = CONCAT62(uVar9,_vt_11ESimsCursor_13Panelstateman[3].__delta + sVar6);
  }
  *(int *)&this->field_0x30 = playerid;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_objList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
  *(__vtbl_ptr_type **)&this->field_0x38 = _vt_11ESimsCursor;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_objList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_floorList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_floorList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
  this->m_pdl = (EDL *)0x0;
  this->m_pLineDl = (EDL *)0x0;
  this->m_pPiMenu = (EPiMenu *)0x0;
  this->m_pLineShdr = (ERShader *)0x0;
  this->m_pFloorShd = (ERShader *)0x0;
  this->m_pWPaperShd = (ERShader *)0x0;
  this->m_pMainBase = (ERModel *)0x0;
  this->m_pMainBaseH = (ERModel *)0x0;
  this->m_pMainCirDash = (ERModel *)0x0;
  this->m_pArrow = (ERModel *)0x0;
  this->m_pArrowH = (ERModel *)0x0;
  this->m_pTrackBase = (ERModel *)0x0;
  this->m_pTrackH = (ERModel *)0x0;
  this->m_pTrackCirDash = (ERModel *)0x0;
  this->m_pBuild = (ERModel *)0x0;
  this->m_pBuildH = (ERModel *)0x0;
  this->m_pBuild02 = (ERModel *)0x0;
  this->m_pBuy = (ERModel *)0x0;
  this->m_pBuy02 = (ERModel *)0x0;
  this->m_pBuyH = (ERModel *)0x0;
  this->m_pEmit = (EIParticleEmit *)0x0;
  this->m_pType = (ERParticleType *)0x0;
  this->m_pCam = (ESimsCam *)0x0;
  this->m_pCursorObject = (cXCursorObject__15_1968 *)0x0;
  this->m_mode = kDefault;
  *(undefined4 *)&this->m_bNewObject = 0;
  *(undefined4 *)&this->m_bUndoable = 0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
                    /* end of inlined section */
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | 0UL >> (7 - uVar4) * 8;
  uVar4 = (uint)&this->m_vPos & 7;
  puVar5 = (ulong *)((int)&this->m_vPos - uVar4);
  *puVar5 = 0L << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  (this->m_vPos).field0_0x0.d[2] = 0.0;
  puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  uVar2 = (uint)&this->m_vPos & 7;
  uVar10 = *(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 & -1L << (8 - uVar2) * 8 |
           *(ulong *)((int)&this->m_vPos - uVar2) >> uVar2 * 8;
  fVar3 = (this->m_vPos).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vLastPos).field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar10 >> (7 - uVar4) * 8;
  uVar4 = (uint)&this->m_vLastPos & 7;
  puVar5 = (ulong *)((int)&this->m_vLastPos - uVar4);
  *puVar5 = uVar10 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  (this->m_vLastPos).field0_0x0.d[2] = fVar3;
  this->m_fCursorTheta = 0.0;
  this->m_refund = 0;
  this->m_scaletime = 0.0;
  this->m_ring_S0 = 0;
  this->m_wallPaperSide = 0;
  this->m_fenctype = kNormalStyle;
  this->m_ring_S1 = 1;
  memset(this->m_ToolValueCalcFnTab,0,0x38);
  uVar10 = DAT_003aa4c0;
  puVar1 = (undefined *)((int)&this->m_ToolValueCalcFnTab[0].__pfn_or_delta2 + 3);
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | DAT_003aa4c0 >> (7 - uVar4) * 8;
  uVar4 = (uint)this->m_ToolValueCalcFnTab & 7;
  puVar5 = (ulong *)((int)this->m_ToolValueCalcFnTab - uVar4);
  *puVar5 = uVar10 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  uVar10 = DAT_003aa4c8;
  puVar1 = (undefined *)((int)&this->m_ToolValueCalcFnTab[2].__pfn_or_delta2 + 3);
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | DAT_003aa4c8 >> (7 - uVar4) * 8;
  uVar4 = (uint)(this->m_ToolValueCalcFnTab + 2) & 7;
  puVar5 = (ulong *)((int)(this->m_ToolValueCalcFnTab + 2) - uVar4);
  *puVar5 = uVar10 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  uVar10 = DAT_003aa4d0;
  puVar1 = (undefined *)((int)&this->m_ToolValueCalcFnTab[3].__pfn_or_delta2 + 3);
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | DAT_003aa4d0 >> (7 - uVar4) * 8;
  uVar4 = (uint)(this->m_ToolValueCalcFnTab + 3) & 7;
  puVar5 = (ulong *)((int)(this->m_ToolValueCalcFnTab + 3) - uVar4);
  *puVar5 = uVar10 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  uVar10 = DAT_003aa4d8;
  puVar1 = (undefined *)((int)&this->m_ToolValueCalcFnTab[4].__pfn_or_delta2 + 3);
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | DAT_003aa4d8 >> (7 - uVar4) * 8;
  uVar4 = (uint)(this->m_ToolValueCalcFnTab + 4) & 7;
  puVar5 = (ulong *)((int)(this->m_ToolValueCalcFnTab + 4) - uVar4);
  *puVar5 = uVar10 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  uVar10 = DAT_003aa4e0;
  puVar1 = (undefined *)((int)&this->m_ToolValueCalcFnTab[5].__pfn_or_delta2 + 3);
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | DAT_003aa4e0 >> (7 - uVar4) * 8;
  uVar4 = (uint)(this->m_ToolValueCalcFnTab + 5) & 7;
  puVar5 = (ulong *)((int)(this->m_ToolValueCalcFnTab + 5) - uVar4);
  *puVar5 = uVar10 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  return this;
}

void ESimsCursor::~ESimsCursor(int __in_chrg) {
	Panelstateman *this;
	void *pAddress;
	void *pAddress;
	
  short sVar1;
  undefined6 uVar2;
  undefined6 uVar3;
  undefined6 uVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  __vtbl_ptr_type local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  __vtbl_ptr_type local_40;
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
  *(__vtbl_ptr_type **)&this->field_0x38 = _vt_11ESimsCursor;
  this->_vb1647->__vtable = (Panelstateman__vtable *)_vt_11ESimsCursor_13Panelstateman;
  uVar4 = _vt_11ESimsCursor_13Panelstateman[3]._2_6_;
  uVar3 = _vt_11ESimsCursor_13Panelstateman[2]._2_6_;
  uVar2 = _vt_11ESimsCursor_13Panelstateman[1]._2_6_;
  if (__in_chrg == 0) {
    local_40 = _vt_11ESimsCursor_13Panelstateman[4];
    local_60 = _vt_11ESimsCursor_13Panelstateman[0];
    this->_vb1647->__vtable = (Panelstateman__vtable *)&local_60;
    sVar1 = (short)this - ((short)this->_vb1647 + -0x14c);
    local_58 = CONCAT62(uVar2,_vt_11ESimsCursor_13Panelstateman[1].__delta + sVar1);
    local_50 = CONCAT62(uVar3,_vt_11ESimsCursor_13Panelstateman[2].__delta + sVar1);
    local_48 = CONCAT62(uVar4,_vt_11ESimsCursor_13Panelstateman[3].__delta + sVar1);
  }
  Reset__11ESimsCursor(this);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  RemoveAll__9ENodeList(&(this->m_floorList).field0_0x0);
  RemoveAll__9ENodeList(&(this->m_objList).field0_0x0);
                    /* end of inlined section */
  ___13EUIObjectNode((EUIObjectNode *)this,0);
  if ((__in_chrg & 2U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
    this->_vb1647->__vtable = (Panelstateman__vtable *)_vt_13Panelstateman;
  }
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void ESimsCursor::Init() {
	ERC *prc;
	EVec3 vNorm;
	ERC *this;
	
  ulong uVar1;
  EGlobalManagerClient__vtable *pEVar2;
  uint uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  EGraphics *pEVar7;
  EDL *pEVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  ERShader *pEVar13;
  ERModel *pEVar14;
  EPiMenu *pEVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined8 *puVar20;
  EVec4 *pEVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined8 *puVar26;
  EAllocGroup **ppEVar27;
  undefined8 *puVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  EVec3 vNorm;
  
  pEVar7 = _pGfx;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  m_esmc_deflight.a.vColor.field0_0x0.d[1] = 1.0;
  m_esmc_deflight.a.vColor.field0_0x0.d[0] = 1.0;
  m_esmc_deflight.a.vColor.field0_0x0.d[2] = 1.0;
                    /* end of inlined section */
  this->m_mode = kDefault;
  *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | 2;
  pEVar2 = (pEVar7->field0_0x0).__vtable;
  uVar16 = (*(code *)pEVar2[6].EGlobalManagerClient)
                     ((int)&(pEVar7->field0_0x0).__vtable + (int)*(short *)(pEVar2 + 6),1);
  Rect__10EPrimitiveP3ERCff((ERC *)uVar16,1.0,1.0);
  pEVar2 = (_pGfx->field0_0x0).__vtable;
  pEVar8 = (EDL *)(*(code *)pEVar2[6].ManagedShutdown)
                            ((int)&(_pGfx->field0_0x0).__vtable +
                             (int)*(short *)&pEVar2[6].ManagedStartup,uVar16);
  this->m_pdl = pEVar8;
  pEVar2 = (_pGfx->field0_0x0).__vtable;
  uVar16 = (*(code *)pEVar2[6].EGlobalManagerClient)
                     ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar2 + 6),1);
  ppEVar27 = (EAllocGroup **)uVar16;
                    /* inlined from /eor/src2/engine/e_dl.h */
  puVar9 = (undefined8 *)Alloc__11EAllocGroupUii(*ppEVar27,0x280,0x10);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  *(undefined4 *)((int)puVar9 + 0x3c) = 0x80;
  *(undefined4 *)(puVar9 + 6) = 0x80;
  *(undefined4 *)((int)puVar9 + 0x34) = 0x80;
  *(undefined4 *)(puVar9 + 7) = 0x80;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vNorm.field0_0x0.d[2] = 4.5;
  vNorm.field0_0x0.d[1] = -1.0;
  vNorm.field0_0x0.d[0] = 1.0;
  fVar29 = sqrtf(22.25);
  if (fVar29 != 0.0) {
    fVar29 = 1.0 / fVar29;
    vNorm.field0_0x0.d[0] = fVar29 * 1.0;
    vNorm.field0_0x0.d[2] = fVar29 * 4.5;
    vNorm.field0_0x0.d[1] = fVar29 * -1.0;
  }
  fVar30 = vNorm.field0_0x0.d[0] * 127.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar31 = vNorm.field0_0x0.d[1] * 127.0;
  fVar29 = vNorm.field0_0x0.d[2] * 127.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  if (-127.0 <= fVar30) {
                    /* end of inlined section */
    if (fVar30 <= 127.0) {
                    /* end of inlined section */
      iVar12 = (int)(char)(int)fVar30;
    }
    else {
      iVar12 = 0x7f;
    }
  }
  else {
    iVar12 = -0x7f;
  }
  *(int *)(puVar9 + 2) = iVar12;
  if (-127.0 <= fVar31) {
                    /* end of inlined section */
    if (fVar31 <= 127.0) {
                    /* end of inlined section */
      iVar12 = (int)(char)(int)fVar31;
    }
    else {
      iVar12 = 0x7f;
    }
  }
  else {
    iVar12 = -0x7f;
  }
  *(int *)((int)puVar9 + 0x14) = iVar12;
  iVar12 = -0x7f;
                    /* end of inlined section */
  if ((-127.0 <= fVar29) && (iVar12 = 0x7f, fVar29 <= 127.0)) {
                    /* end of inlined section */
    iVar12 = (int)(char)(int)fVar29;
  }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  *(int *)(puVar9 + 3) = iVar12;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(undefined4 *)(puVar9 + 4) = 0x3f800000;
                    /* end of inlined section */
  puVar20 = puVar9 + 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(undefined4 *)((int)puVar9 + 0x24) = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  puVar26 = puVar9 + 0x28;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  puVar28 = puVar9 + 0x30;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(undefined4 *)puVar9 = 0x3d0f5c29;
  *(undefined4 *)((int)puVar9 + 4) = 0x3d0f5c29;
  *(undefined4 *)(puVar9 + 1) = 0x40600000;
  puVar11 = puVar9 + 10;
  puVar10 = puVar9;
  do {
    puVar18 = puVar10;
    puVar17 = puVar11;
    uVar5 = *puVar18;
                    /* end of inlined section */
    uVar22 = *(undefined4 *)(puVar18 + 1);
    uVar23 = *(undefined4 *)((int)puVar18 + 0xc);
    uVar6 = puVar18[2];
    uVar24 = *(undefined4 *)(puVar18 + 3);
    uVar25 = *(undefined4 *)((int)puVar18 + 0x1c);
    *(int *)puVar17 = (int)uVar5;
    *(int *)((int)puVar17 + 4) = (int)((ulong)uVar5 >> 0x20);
    *(undefined4 *)(puVar17 + 1) = uVar22;
    *(undefined4 *)((int)puVar17 + 0xc) = uVar23;
    *(int *)(puVar17 + 2) = (int)uVar6;
    *(int *)((int)puVar17 + 0x14) = (int)((ulong)uVar6 >> 0x20);
    *(undefined4 *)(puVar17 + 3) = uVar24;
    *(undefined4 *)((int)puVar17 + 0x1c) = uVar25;
    puVar10 = puVar18 + 4;
    puVar11 = puVar17 + 4;
  } while (puVar10 != puVar20);
  uVar5 = *puVar10;
  uVar22 = *(undefined4 *)(puVar18 + 5);
  uVar23 = *(undefined4 *)((int)puVar18 + 0x2c);
  *(int *)(puVar17 + 4) = (int)uVar5;
  *(int *)((int)puVar17 + 0x24) = (int)((ulong)uVar5 >> 0x20);
  *(undefined4 *)(puVar17 + 5) = uVar22;
  *(undefined4 *)((int)puVar17 + 0x2c) = uVar23;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(undefined4 *)(puVar9 + 0xe) = 0;
  *(undefined4 *)((int)puVar9 + 0x74) = 0x3f800000;
  *(undefined4 *)(puVar9 + 10) = 0xbd0f5c29;
  *(undefined4 *)((int)puVar9 + 0x54) = 0xbd0f5c29;
  *(undefined4 *)(puVar9 + 0xb) = 0x40600000;
  puVar11 = puVar9 + 0x14;
  puVar10 = puVar9;
  do {
    puVar18 = puVar11;
    uVar5 = *puVar10;
                    /* end of inlined section */
    uVar22 = *(undefined4 *)(puVar10 + 1);
    uVar23 = *(undefined4 *)((int)puVar10 + 0xc);
    uVar6 = puVar10[2];
    uVar24 = *(undefined4 *)(puVar10 + 3);
    uVar25 = *(undefined4 *)((int)puVar10 + 0x1c);
    *(int *)puVar18 = (int)uVar5;
    *(int *)((int)puVar18 + 4) = (int)((ulong)uVar5 >> 0x20);
    *(undefined4 *)(puVar18 + 1) = uVar22;
    *(undefined4 *)((int)puVar18 + 0xc) = uVar23;
    *(int *)(puVar18 + 2) = (int)uVar6;
    *(int *)((int)puVar18 + 0x14) = (int)((ulong)uVar6 >> 0x20);
    *(undefined4 *)(puVar18 + 3) = uVar24;
    *(undefined4 *)((int)puVar18 + 0x1c) = uVar25;
    puVar10 = puVar10 + 4;
    puVar11 = puVar18 + 4;
  } while (puVar10 != puVar20);
  uVar5 = *puVar20;
                    /* end of inlined section */
  uVar22 = *(undefined4 *)(puVar9 + 9);
  uVar23 = *(undefined4 *)((int)puVar9 + 0x4c);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  *(int *)(puVar18 + 4) = (int)uVar5;
  *(int *)((int)puVar18 + 0x24) = (int)((ulong)uVar5 >> 0x20);
  *(undefined4 *)(puVar18 + 5) = uVar22;
  *(undefined4 *)((int)puVar18 + 0x2c) = uVar23;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(undefined4 *)(puVar9 + 0x18) = 0x3f800000;
  *(undefined4 *)((int)puVar9 + 0xc4) = 0;
  *(undefined4 *)(puVar9 + 0x14) = 0x3d0f5c29;
  *(undefined4 *)((int)puVar9 + 0xa4) = 0x3d0f5c29;
  *(undefined4 *)(puVar9 + 0x15) = 0;
  puVar11 = puVar9;
  puVar10 = puVar9 + 0x1e;
  do {
    puVar18 = puVar10;
    uVar5 = *puVar11;
                    /* end of inlined section */
    uVar22 = *(undefined4 *)(puVar11 + 1);
    uVar23 = *(undefined4 *)((int)puVar11 + 0xc);
    uVar6 = puVar11[2];
    uVar24 = *(undefined4 *)(puVar11 + 3);
    uVar25 = *(undefined4 *)((int)puVar11 + 0x1c);
    *(int *)puVar18 = (int)uVar5;
    *(int *)((int)puVar18 + 4) = (int)((ulong)uVar5 >> 0x20);
    *(undefined4 *)(puVar18 + 1) = uVar22;
    *(undefined4 *)((int)puVar18 + 0xc) = uVar23;
    *(int *)(puVar18 + 2) = (int)uVar6;
    *(int *)((int)puVar18 + 0x14) = (int)((ulong)uVar6 >> 0x20);
    *(undefined4 *)(puVar18 + 3) = uVar24;
    *(undefined4 *)((int)puVar18 + 0x1c) = uVar25;
    puVar11 = puVar11 + 4;
    puVar10 = puVar18 + 4;
  } while (puVar11 != puVar20);
  uVar5 = *puVar20;
  uVar22 = *(undefined4 *)(puVar9 + 9);
  uVar23 = *(undefined4 *)((int)puVar9 + 0x4c);
  *(int *)(puVar18 + 4) = (int)uVar5;
  *(int *)((int)puVar18 + 0x24) = (int)((ulong)uVar5 >> 0x20);
  *(undefined4 *)(puVar18 + 5) = uVar22;
  *(undefined4 *)((int)puVar18 + 0x2c) = uVar23;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(undefined4 *)(puVar9 + 0x22) = 0;
  *(undefined4 *)((int)puVar9 + 0x114) = 0;
  *(undefined4 *)(puVar9 + 0x1e) = 0xbd0f5c29;
  *(undefined4 *)((int)puVar9 + 0xf4) = 0xbd0f5c29;
  *(undefined4 *)(puVar9 + 0x1f) = 0;
                    /* end of inlined section */
  (*(code *)ppEVar27[0xb][1].m_pos)
            ((int)ppEVar27 + (int)*(short *)&ppEVar27[0xb][1].m_allocList.field0_0x0.m_l.m_pTail,
             puVar9,4);
  puVar11 = puVar9;
  puVar10 = puVar26;
  do {
    puVar17 = puVar10;
    puVar18 = puVar11;
    uVar5 = *puVar18;
    uVar22 = *(undefined4 *)(puVar18 + 1);
    uVar23 = *(undefined4 *)((int)puVar18 + 0xc);
    uVar6 = puVar18[2];
    uVar24 = *(undefined4 *)(puVar18 + 3);
    uVar25 = *(undefined4 *)((int)puVar18 + 0x1c);
    *(int *)puVar17 = (int)uVar5;
    *(int *)((int)puVar17 + 4) = (int)((ulong)uVar5 >> 0x20);
    *(undefined4 *)(puVar17 + 1) = uVar22;
    *(undefined4 *)((int)puVar17 + 0xc) = uVar23;
    *(int *)(puVar17 + 2) = (int)uVar6;
    *(int *)((int)puVar17 + 0x14) = (int)((ulong)uVar6 >> 0x20);
    *(undefined4 *)(puVar17 + 3) = uVar24;
    *(undefined4 *)((int)puVar17 + 0x1c) = uVar25;
    puVar11 = puVar18 + 4;
    puVar10 = puVar17 + 4;
  } while (puVar11 != puVar20);
  uVar5 = *puVar11;
                    /* end of inlined section */
  uVar22 = *(undefined4 *)(puVar18 + 5);
  uVar23 = *(undefined4 *)((int)puVar18 + 0x2c);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  *(int *)(puVar17 + 4) = (int)uVar5;
  *(int *)((int)puVar17 + 0x24) = (int)((ulong)uVar5 >> 0x20);
  *(undefined4 *)(puVar17 + 5) = uVar22;
  *(undefined4 *)((int)puVar17 + 0x2c) = uVar23;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vNorm.field0_0x0.d[2] = 4.5;
  vNorm.field0_0x0.d[0] = 1.0;
  vNorm.field0_0x0.d[1] = 1.0;
  fVar29 = sqrtf(22.25);
  if (fVar29 != 0.0) {
    fVar29 = 1.0 / fVar29;
    vNorm.field0_0x0.d[0] = fVar29 * 1.0;
    vNorm.field0_0x0.d[2] = fVar29 * 4.5;
    vNorm.field0_0x0.d[1] = fVar29 * 1.0;
  }
  fVar30 = vNorm.field0_0x0.d[0] * 127.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar31 = vNorm.field0_0x0.d[1] * 127.0;
  fVar29 = vNorm.field0_0x0.d[2] * 127.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  if (-127.0 <= fVar30) {
                    /* end of inlined section */
    if (fVar30 <= 127.0) {
                    /* end of inlined section */
      iVar12 = (int)(char)(int)fVar30;
    }
    else {
      iVar12 = 0x7f;
    }
  }
  else {
    iVar12 = -0x7f;
  }
  *(int *)(puVar9 + 0x2a) = iVar12;
  if (-127.0 <= fVar31) {
                    /* end of inlined section */
    if (fVar31 <= 127.0) {
                    /* end of inlined section */
      iVar12 = (int)(char)(int)fVar31;
    }
    else {
      iVar12 = 0x7f;
    }
  }
  else {
    iVar12 = -0x7f;
  }
  *(int *)((int)puVar9 + 0x154) = iVar12;
  if (-127.0 <= fVar29) {
                    /* end of inlined section */
    if (fVar29 <= 127.0) {
                    /* end of inlined section */
      iVar12 = (int)(char)(int)fVar29;
    }
    else {
      iVar12 = 0x7f;
    }
  }
  else {
    iVar12 = -0x7f;
  }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  *(int *)(puVar9 + 0x2b) = iVar12;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(undefined4 *)(puVar9 + 0x2c) = 0x3f800000;
  *(undefined4 *)((int)puVar9 + 0x164) = 0x3f800000;
  *(undefined4 *)(puVar9 + 0x28) = 0x3d0f5c29;
  *(undefined4 *)((int)puVar9 + 0x144) = 0xbd0f5c29;
  *(undefined4 *)(puVar9 + 0x29) = 0x40600000;
  puVar11 = puVar9 + 0x32;
  puVar10 = puVar26;
  do {
    puVar20 = puVar11;
    uVar5 = *puVar10;
                    /* end of inlined section */
    uVar22 = *(undefined4 *)(puVar10 + 1);
    uVar23 = *(undefined4 *)((int)puVar10 + 0xc);
    uVar6 = puVar10[2];
    uVar24 = *(undefined4 *)(puVar10 + 3);
    uVar25 = *(undefined4 *)((int)puVar10 + 0x1c);
    *(int *)puVar20 = (int)uVar5;
    *(int *)((int)puVar20 + 4) = (int)((ulong)uVar5 >> 0x20);
    *(undefined4 *)(puVar20 + 1) = uVar22;
    *(undefined4 *)((int)puVar20 + 0xc) = uVar23;
    *(int *)(puVar20 + 2) = (int)uVar6;
    *(int *)((int)puVar20 + 0x14) = (int)((ulong)uVar6 >> 0x20);
    *(undefined4 *)(puVar20 + 3) = uVar24;
    *(undefined4 *)((int)puVar20 + 0x1c) = uVar25;
    puVar10 = puVar10 + 4;
    puVar11 = puVar20 + 4;
  } while (puVar10 != puVar28);
  uVar5 = *puVar28;
  uVar22 = *(undefined4 *)(puVar9 + 0x31);
  uVar23 = *(undefined4 *)((int)puVar9 + 0x18c);
  *(int *)(puVar20 + 4) = (int)uVar5;
  *(int *)((int)puVar20 + 0x24) = (int)((ulong)uVar5 >> 0x20);
  *(undefined4 *)(puVar20 + 5) = uVar22;
  *(undefined4 *)((int)puVar20 + 0x2c) = uVar23;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(undefined4 *)(puVar9 + 0x36) = 0;
  *(undefined4 *)((int)puVar9 + 0x1b4) = 0x3f800000;
  *(undefined4 *)(puVar9 + 0x32) = 0xbd0f5c29;
  *(undefined4 *)((int)puVar9 + 0x194) = 0x3d0f5c29;
  *(undefined4 *)(puVar9 + 0x33) = 0x40600000;
  puVar11 = puVar9 + 0x3c;
  puVar10 = puVar26;
  do {
    puVar20 = puVar11;
    uVar5 = *puVar10;
                    /* end of inlined section */
    uVar24 = *(undefined4 *)(puVar10 + 1);
    uVar25 = *(undefined4 *)((int)puVar10 + 0xc);
    uVar6 = puVar10[2];
    uVar22 = *(undefined4 *)(puVar10 + 3);
    uVar23 = *(undefined4 *)((int)puVar10 + 0x1c);
    *(int *)puVar20 = (int)uVar5;
    *(int *)((int)puVar20 + 4) = (int)((ulong)uVar5 >> 0x20);
    *(undefined4 *)(puVar20 + 1) = uVar24;
    *(undefined4 *)((int)puVar20 + 0xc) = uVar25;
    *(int *)(puVar20 + 2) = (int)uVar6;
    *(int *)((int)puVar20 + 0x14) = (int)((ulong)uVar6 >> 0x20);
    *(undefined4 *)(puVar20 + 3) = uVar22;
    *(undefined4 *)((int)puVar20 + 0x1c) = uVar23;
    puVar10 = puVar10 + 4;
    puVar11 = puVar20 + 4;
  } while (puVar10 != puVar28);
  uVar5 = *puVar28;
                    /* end of inlined section */
  uVar22 = *(undefined4 *)(puVar9 + 0x31);
  uVar23 = *(undefined4 *)((int)puVar9 + 0x18c);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  *(int *)(puVar20 + 4) = (int)uVar5;
  *(int *)((int)puVar20 + 0x24) = (int)((ulong)uVar5 >> 0x20);
  *(undefined4 *)(puVar20 + 5) = uVar22;
  *(undefined4 *)((int)puVar20 + 0x2c) = uVar23;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(undefined4 *)(puVar9 + 0x40) = 0x3f800000;
  *(undefined4 *)((int)puVar9 + 0x204) = 0;
  *(undefined4 *)(puVar9 + 0x3c) = 0x3d0f5c29;
  *(undefined4 *)((int)puVar9 + 0x1e4) = 0xbd0f5c29;
  *(undefined4 *)(puVar9 + 0x3d) = 0;
  puVar11 = puVar9 + 0x46;
  puVar10 = puVar26;
  do {
    puVar20 = puVar10;
    puVar18 = puVar11;
    uVar5 = *puVar20;
                    /* end of inlined section */
    uVar22 = *(undefined4 *)(puVar20 + 1);
    uVar23 = *(undefined4 *)((int)puVar20 + 0xc);
    uVar6 = puVar20[2];
    uVar24 = *(undefined4 *)(puVar20 + 3);
    uVar25 = *(undefined4 *)((int)puVar20 + 0x1c);
    *(int *)puVar18 = (int)uVar5;
    *(int *)((int)puVar18 + 4) = (int)((ulong)uVar5 >> 0x20);
    *(undefined4 *)(puVar18 + 1) = uVar22;
    *(undefined4 *)((int)puVar18 + 0xc) = uVar23;
    *(int *)(puVar18 + 2) = (int)uVar6;
    *(int *)((int)puVar18 + 0x14) = (int)((ulong)uVar6 >> 0x20);
    *(undefined4 *)(puVar18 + 3) = uVar24;
    *(undefined4 *)((int)puVar18 + 0x1c) = uVar25;
    puVar10 = puVar20 + 4;
    puVar11 = puVar18 + 4;
  } while (puVar10 != puVar28);
  uVar5 = *puVar10;
  uVar22 = *(undefined4 *)(puVar20 + 5);
  uVar23 = *(undefined4 *)((int)puVar20 + 0x2c);
  *(int *)(puVar18 + 4) = (int)uVar5;
  *(int *)((int)puVar18 + 0x24) = (int)((ulong)uVar5 >> 0x20);
  *(undefined4 *)(puVar18 + 5) = uVar22;
  *(undefined4 *)((int)puVar18 + 0x2c) = uVar23;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(undefined4 *)(puVar9 + 0x4a) = 0;
  *(undefined4 *)((int)puVar9 + 0x254) = 0;
  *(undefined4 *)(puVar9 + 0x46) = 0xbd0f5c29;
  *(undefined4 *)((int)puVar9 + 0x234) = 0x3d0f5c29;
  *(undefined4 *)(puVar9 + 0x47) = 0;
                    /* end of inlined section */
  (*(code *)ppEVar27[0xb][1].m_pos)
            ((int)ppEVar27 + (int)*(short *)&ppEVar27[0xb][1].m_allocList.field0_0x0.m_l.m_pTail,
             puVar26,4);
  pEVar2 = (_pGfx->field0_0x0).__vtable;
  pEVar8 = (EDL *)(*(code *)pEVar2[6].ManagedShutdown)
                            ((int)&(_pGfx->field0_0x0).__vtable +
                             (int)*(short *)&pEVar2[6].ManagedStartup,uVar16);
  this->m_pLineDl = pEVar8;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  uVar19 = 0x9a1fbcde;
  if (*(int *)&this->field_0x30 != 0) {
    uVar19 = 0xe8136bd8;
  }
  pEVar13 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,uVar19,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pLineShdr = pEVar13;
  if (*(int *)&this->field_0x30 == 0) {
    pEVar21 = &_YELLOW;
  }
  else {
    pEVar21 = &_RED;
  }
                    /* end of inlined section */
  iVar12 = *(int *)&this->field_0x30;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
  uVar1 = *(ulong *)&pEVar21->field0_0x0;
  fVar29 = (pEVar21->field0_0x0).d[2];
  uVar19 = iVar12 * 0x10 + 0x35ea27;
  uVar3 = uVar19 & 7;
  puVar4 = (ulong *)(uVar19 - uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar1 >> (7 - uVar3) * 8;
  *(ulong *)&m_esmc_playerColorLight[iVar12].a.vColor.field0_0x0 = uVar1;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
  m_esmc_playerColorLight[iVar12].a.vColor.field0_0x0.d[2] = fVar29;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
  pEVar14 = (ERModel *)
            AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,0x18dd79ec,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pMainBase = pEVar14;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
  pEVar14 = (ERModel *)
            AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,0xdfeff763,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pMainBaseH = pEVar14;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
  pEVar14 = (ERModel *)
            AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,0x295792e6,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pMainCirDash = pEVar14;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
  pEVar14 = (ERModel *)
            AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,0xf6140ad9,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pArrow = pEVar14;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
  pEVar14 = (ERModel *)
            AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,0xb4d2fb9a,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pArrowH = pEVar14;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
  pEVar14 = (ERModel *)
            AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,0xc1a394fd,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pTrackBase = pEVar14;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
  pEVar14 = (ERModel *)
            AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,0x528d93c8,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pTrackH = pEVar14;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
  pEVar14 = (ERModel *)
            AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,0x68de8ae2,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pTrackCirDash = pEVar14;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
  pEVar14 = (ERModel *)
            AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,0xc2706da9,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pBuild = pEVar14;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
  pEVar14 = (ERModel *)
            AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,0x483b42f3,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pBuildH = pEVar14;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
  pEVar14 = (ERModel *)
            AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,0xd9cfd517,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pBuild02 = pEVar14;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
  pEVar14 = (ERModel *)
            AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,0x5adadd6,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pBuy = pEVar14;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
  pEVar14 = (ERModel *)
            AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,0x7bf822a7,(EFile *)0x0,0);
  this->m_pBuyH = pEVar14;
  pEVar14 = (ERModel *)
            AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,0xb5fa839a,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pBuy02 = pEVar14;
  pEVar15 = (EPiMenu *)__builtin_new(0x50);
  pEVar15 = __7EPiMenui(pEVar15,*(int *)&this->field_0x30);
  this->m_pPiMenu = pEVar15;
  (**(code **)(*(int *)&this->field_0x38 + 100))
            ((int)&(((ESimsCursor__15_1743 *)(this->m_ToolValueCalcFnTab + -8))->field0_0x0).m_state
             + (int)*(short *)(*(int *)&this->field_0x38 + 0x60),pEVar15);
  return;
}

void ESimsCursor::SetCam(ESimsCam *pcam) {
  this->m_pCam = pcam;
  SnapToDefPos__11ESimsCursor(this);
  return;
}

void ESimsCursor::Reset() {
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	NLIterator next;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	
  CursorFloorTile *this_00;
  EGlobalManagerClient__vtable *pEVar1;
  EPiMenu *pEVar2;
  EUIObjectNode__vtable *pEVar3;
  ENodeListNode *pEVar4;
  EDL *pEVar5;
  ERShader *pEVar6;
  ERModel *pEVar7;
  
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  if ((this->m_objList).field0_0x0.m_l.m_pHead != (ENodeListNode *)0x0) {
    RemoveAll__9ENodeList(&(this->m_objList).field0_0x0);
  }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  pEVar4 = (this->m_floorList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar4 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    if (pEVar4 != (ENodeListNode *)0x0) {
      this_00 = (CursorFloorTile *)pEVar4->data;
      while( true ) {
        pEVar4 = pEVar4->pNext;
        if (this_00 != (CursorFloorTile *)0x0) {
          Cleanup__15CursorFloorTile(this_00);
          _memmanFree__FPv(this_00);
        }
        if (pEVar4 == (ENodeListNode *)0x0) break;
        this_00 = (CursorFloorTile *)pEVar4->data;
      }
    }
    RemoveAll__9ENodeList(&(this->m_floorList).field0_0x0);
  }
  while (this->m_pdl != (EDL *)0x0) {
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[3].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[7].EGlobalManagerClient)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 7),this->m_pdl);
    this->m_pdl = (EDL *)0x0;
  }
  pEVar5 = this->m_pLineDl;
  while (pEVar5 != (EDL *)0x0) {
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[3].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[7].EGlobalManagerClient)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 7),this->m_pLineDl);
    this->m_pLineDl = (EDL *)0x0;
    pEVar5 = this->m_pLineDl;
  }
  (**(code **)(*(int *)&this->field_0x38 + 0x6c))
            ((int)&(((ESimsCursor__15_1743 *)(this->m_ToolValueCalcFnTab + -8))->field0_0x0).m_state
             + (int)*(short *)(*(int *)&this->field_0x38 + 0x68),this->m_pPiMenu);
  pEVar2 = this->m_pPiMenu;
  if (pEVar2 != (EPiMenu *)0x0) {
    pEVar3 = (pEVar2->field0_0x0).__vtable;
    (*(code *)pEVar3->Draw)
              ((int)&(pEVar2->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
               (int)*(short *)&pEVar3->Update,3);
  }
  this->m_pPiMenu = (EPiMenu *)0x0;
  while (this->m_pLineShdr != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pLineShdr->field0_0x0);
    this->m_pLineShdr = (ERShader *)0x0;
  }
  pEVar6 = this->m_pFloorShd;
  while (pEVar6 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar6->field0_0x0);
    this->m_pFloorShd = (ERShader *)0x0;
    pEVar6 = this->m_pFloorShd;
  }
  pEVar6 = this->m_pWPaperShd;
  while (pEVar6 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar6->field0_0x0);
    this->m_pWPaperShd = (ERShader *)0x0;
    pEVar6 = this->m_pWPaperShd;
  }
  pEVar7 = this->m_pMainBase;
  while (pEVar7 != (ERModel *)0x0) {
    DelRef__9EResource(&pEVar7->field0_0x0);
    this->m_pMainBase = (ERModel *)0x0;
    pEVar7 = this->m_pMainBase;
  }
  pEVar7 = this->m_pMainBaseH;
  while (pEVar7 != (ERModel *)0x0) {
    DelRef__9EResource(&pEVar7->field0_0x0);
    this->m_pMainBaseH = (ERModel *)0x0;
    pEVar7 = this->m_pMainBaseH;
  }
  pEVar7 = this->m_pMainCirDash;
  while (pEVar7 != (ERModel *)0x0) {
    DelRef__9EResource(&pEVar7->field0_0x0);
    this->m_pMainCirDash = (ERModel *)0x0;
    pEVar7 = this->m_pMainCirDash;
  }
  pEVar7 = this->m_pArrow;
  while (pEVar7 != (ERModel *)0x0) {
    DelRef__9EResource(&pEVar7->field0_0x0);
    this->m_pArrow = (ERModel *)0x0;
    pEVar7 = this->m_pArrow;
  }
  pEVar7 = this->m_pArrowH;
  while (pEVar7 != (ERModel *)0x0) {
    DelRef__9EResource(&pEVar7->field0_0x0);
    this->m_pArrowH = (ERModel *)0x0;
    pEVar7 = this->m_pArrowH;
  }
  pEVar7 = this->m_pTrackBase;
  while (pEVar7 != (ERModel *)0x0) {
    DelRef__9EResource(&pEVar7->field0_0x0);
    this->m_pTrackBase = (ERModel *)0x0;
    pEVar7 = this->m_pTrackBase;
  }
  pEVar7 = this->m_pTrackH;
  while (pEVar7 != (ERModel *)0x0) {
    DelRef__9EResource(&pEVar7->field0_0x0);
    this->m_pTrackH = (ERModel *)0x0;
    pEVar7 = this->m_pTrackH;
  }
  pEVar7 = this->m_pTrackCirDash;
  while (pEVar7 != (ERModel *)0x0) {
    DelRef__9EResource(&pEVar7->field0_0x0);
    this->m_pTrackCirDash = (ERModel *)0x0;
    pEVar7 = this->m_pTrackCirDash;
  }
  pEVar7 = this->m_pBuild;
  while (pEVar7 != (ERModel *)0x0) {
    DelRef__9EResource(&pEVar7->field0_0x0);
    this->m_pBuild = (ERModel *)0x0;
    pEVar7 = this->m_pBuild;
  }
  pEVar7 = this->m_pBuild02;
  while (pEVar7 != (ERModel *)0x0) {
    DelRef__9EResource(&pEVar7->field0_0x0);
    this->m_pBuild02 = (ERModel *)0x0;
    pEVar7 = this->m_pBuild02;
  }
  pEVar7 = this->m_pBuildH;
  while (pEVar7 != (ERModel *)0x0) {
    DelRef__9EResource(&pEVar7->field0_0x0);
    this->m_pBuildH = (ERModel *)0x0;
    pEVar7 = this->m_pBuildH;
  }
  pEVar7 = this->m_pBuy;
  while (pEVar7 != (ERModel *)0x0) {
    DelRef__9EResource(&pEVar7->field0_0x0);
    this->m_pBuy = (ERModel *)0x0;
    pEVar7 = this->m_pBuy;
  }
  pEVar7 = this->m_pBuy02;
  while (pEVar7 != (ERModel *)0x0) {
    DelRef__9EResource(&pEVar7->field0_0x0);
    this->m_pBuy02 = (ERModel *)0x0;
    pEVar7 = this->m_pBuy02;
  }
  pEVar7 = this->m_pBuyH;
  while (pEVar7 != (ERModel *)0x0) {
    DelRef__9EResource(&pEVar7->field0_0x0);
    this->m_pBuyH = (ERModel *)0x0;
    pEVar7 = this->m_pBuyH;
  }
  SnapToDefPos__11ESimsCursor(this);
  this->m_mode = kDefault;
  return;
}

void ESimsCursor::SetPos(EVec3 &vin) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  ulong *puVar6;
  ulong in_v0;
  ulong uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined *)((int)&vin->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)vin & 7;
  uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)vin - uVar3) >> uVar3 * 8;
  fVar4 = (vin->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar2);
  *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vPos & 7;
  puVar6 = (ulong *)((int)&this->m_vPos - uVar2);
  *puVar6 = uVar7 << uVar2 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vPos).field0_0x0.d[2] = fVar4;
  iVar5 = *(int *)(*(int *)&this->field_0x8 + 0x38);
  uVar8 = 0x15;
  if (*(int *)&this->field_0x30 != 0) {
    uVar8 = 0x16;
  }
  (**(code **)(iVar5 + 0x3c))(*(int *)&this->field_0x8 + (int)*(short *)(iVar5 + 0x38),this,uVar8);
  return;
}

bool ESimsCursor::CheckForXPressLive() {
	ESimsCursor *this;
	
  EUIVirtualCtrl__vtable *pEVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
                    /* end of inlined section */
  if (this->m_mode != kPiMenu) {
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar4 = (*(code *)pEVar1[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                       *(undefined4 *)&this->field_0x30,0x40);
    if (lVar4 == 0) {
      return false;
    }
    GetListofObjectsInCusorRad__11ESimsCursor(this);
    bVar3 = CreateObjectMenuFromOjbList__7EPiMenuRt9TNodeList1ZP12ISimInstance
                      (this->m_pPiMenu,&this->m_objList);
    if (bVar3) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x7d99927f);
                    /* end of inlined section */
      iVar2 = *(int *)(*(int *)&this->field_0x8 + 0x38);
      (**(code **)(iVar2 + 0x3c))
                (*(int *)&this->field_0x8 + (int)*(short *)(iVar2 + 0x38),this,0x13);
      this->m_mode = kPiMenu;
      return true;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
                    /* end of inlined section */
    this->m_mode = kDefault;
  }
  return false;
}

bool ESimsCursor::CheckForXPressBuyBuild() {
	ESimsCursor *this;
	
  short sVar1;
  EUIVirtualCtrl__vtable *pEVar2;
  ENodeListNode *pEVar3;
  int iVar4;
  bool bVar5;
  cXObject__56_2557 *pcVar6;
  long lVar7;
  undefined8 uVar8;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
                    /* end of inlined section */
  if (this->m_mode != kPiMenu) {
    pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar7 = (*(code *)pEVar2[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2[1].ClearBut + -4,
                       *(undefined4 *)&this->field_0x30,0x40);
    if (lVar7 == 0) {
      return false;
    }
    GetListofObjectsInCusorRad__11ESimsCursor(this);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pEVar3 = (this->m_objList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
    if ((pEVar3 != (ENodeListNode *)0x0) && (pEVar3 == (this->m_objList).field0_0x0.m_l.m_pTail)) {
                    /* end of inlined section */
      iVar4 = *(int *)&this->field_0x38;
      sVar1 = *(short *)(iVar4 + 0x38);
      pcVar6 = GetXOb__12ISimInstance((ISimInstance *)pEVar3->data);
      uVar8 = (*(code *)pcVar6->__vtable[1].UserCanPlace)
                        ((int)&pcVar6->_vb2602 + (int)*(short *)&pcVar6->__vtable[1].IsPartOfMe);
      (**(code **)(iVar4 + 0x3c))
                ((int)&(((ESimsCursor__15_1743 *)(this->m_ToolValueCalcFnTab + -8))->field0_0x0).
                       m_state + (int)sVar1,uVar8,0x1c);
      this->m_mode = kDefault;
      return true;
    }
    bVar5 = CreateObjectMenuForBuyBuild__7EPiMenuRt9TNodeList1ZP12ISimInstance
                      (this->m_pPiMenu,&this->m_objList);
    if (bVar5) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x7d99927f);
                    /* end of inlined section */
      this->m_mode = kPiMenu;
      return true;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
                    /* end of inlined section */
    this->m_mode = kDefault;
  }
  return false;
}

void ESimsCursor::SetFlag(u32 mask, bool on) {
  if (on) {
    *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 | mask;
    return;
  }
  *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 & ~mask;
  return;
}

void ESimsCursor::SnapToDefPos() {
	cXPerson *pSelected;
	FTilePt pt;
	EVec3 *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  cXObject__150_1187 *pcVar4;
  cXObject__150_1187__vtable *pcVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  float fVar9;
  FTilePt pt;
  
  if (((_globals._pSelectedSims[0] != (cXPerson__150_1300 *)0x0) ||
      (_globals._pSelectedSims[1] != (cXPerson__150_1300 *)0x0)) &&
     (_globals._pSelectedSims[*(int *)&this->field_0x30] != (cXPerson__150_1300 *)0x0)) {
    pcVar4 = _globals._pSelectedSims[*(int *)&this->field_0x30]->_vb1187;
    pcVar5 = pcVar4->__vtable;
    uVar8 = (ulong)(int)pcVar5;
    uVar7 = (*(code *)pcVar5[1].UserCanDelete)
                      ((int)&pcVar4->_vb1121 + (int)*(short *)&pcVar5[1].UserPickup);
    uVar2 = uVar7 + 7 & 7;
    uVar3 = uVar7 & 7;
    uVar8 = (*(long *)((uVar7 + 7) - uVar2) << (7 - uVar2) * 8 |
            uVar8 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)(uVar7 - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&pt.x.whole + 3);
    uVar2 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar2);
    *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | uVar8 >> (7 - uVar2) * 8;
    pt.x.whole = (int)(uVar8 >> 0x20);
                    /* inlined from ../MSrc/tiles.h */
    pt.y.whole = (int)uVar8;
                    /* end of inlined section */
                    /* inlined from ../MSrc/tiles.h */
                    /* end of inlined section */
    fVar9 = (float)pt.x.whole * 0.0625 + _globals._global_house_offy;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    (this->m_vPos).field0_0x0.d[0] = (float)pt.y.whole * 0.0625 + _globals._global_house_offx;
    (this->m_vPos).field0_0x0.d[2] = 0.05;
    (this->m_vPos).field0_0x0.d[1] = fVar9;
    puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
                    /* end of inlined section */
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)&this->m_vPos & 7;
    uVar8 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
            (long)pt.x.whole & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)&this->m_vPos - uVar3) >> uVar3 * 8;
    fVar9 = (this->m_vPos).field0_0x0.d[2];
    puVar1 = (undefined *)((int)&(this->m_vLastPos).field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar2);
    *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | uVar8 >> (7 - uVar2) * 8;
    uVar2 = (uint)&this->m_vLastPos & 7;
    puVar6 = (ulong *)((int)&this->m_vLastPos - uVar2);
    *puVar6 = uVar8 << uVar2 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    (this->m_vLastPos).field0_0x0.d[2] = fVar9;
  }
  return;
}

void ESimsCursor::UpdateHouse(cXObject *pOb) {
	EHouse &house;
	cXObject *ptr;
	
  EHouse__26_3190 *this_00;
  bool bVar1;
  void *pvVar2;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pFixedWorld->__vtable[1].SetVertexConfig)
            ((int)&_5Globs_pFixedWorld->__vtable +
             (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].GetVertexConfig,0);
  this_00 = _globals._pCurHouse;
  ForceFullLMCompute__6EHouse((EHouse__2_990 *)_globals._pCurHouse);
  if (this_00->m_pObjectMan != (EIObjectMan *)0x0) {
    ReOrientHouse__11EIObjectManb(this_00->m_pObjectMan,false);
  }
                    /* inlined from ../MSrc/SCID.h */
  pvVar2 = (void *)0x0;
  if (pOb != (cXObject__15_2008 *)0x0) {
    pvVar2 = _dyncastimpl__7TreeSim4SCID(pOb->_vb3534,cXPortalImplID);
  }
                    /* end of inlined section */
  if (pvVar2 == (void *)0x0) {
    bVar1 = CheckForZeroExtentOverride__7EGlobalP8cXObject(&_globals,(cXObject__47_3244 *)pOb);
    if (bVar1) {
      ReCalcHouse__6EHouse((EHouse__2_990 *)this_00);
    }
  }
  else {
    ReCalcHouse__6EHouse((EHouse__2_990 *)this_00);
  }
  return;
}

void ESimsCursor::Message(EUIObjectNode *pChild, u32 messid) {
	Panelstate state;
	Panelstate state;
	cXObject *pObj;
	bool bIsMtTile;
	cXObject *ptr;
	cXObject *ptr;
	ObjSelector *pCursorSel;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  TreeSim *pTVar4;
  ObjectFolder__vtable *pOVar5;
  cXObject__15_2008__vtable *pcVar6;
  cXCursorObject__15_1968__vtable *pcVar7;
  ulong *puVar8;
  bool bVar9;
  ObjectModule *module;
  ObjectFolder *pOVar10;
  ushort uVar11;
  TreeSim **ppTVar12;
  void *pvVar13;
  int iVar14;
  uint uVar15;
  ObjSelector *cursorSel;
  cXCursorObject__15_1968 *pcVar16;
  cXObject__15_2008 *pcVar17;
  long lVar18;
  ulong uVar19;
  
  if (messid == 0x1d) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
                    /* end of inlined section */
    if (this->_vb1647->m_state + ~LIVE_SIM_EDIT < 2) {
      Kill__7EPiMenu(this->m_pPiMenu);
      this->m_mode = kDefault;
    }
    else {
      iVar14 = *(int *)(*(int *)&this->field_0x8 + 0x38);
      (**(code **)(iVar14 + 0x3c))
                (*(int *)&this->field_0x8 + (int)*(short *)(iVar14 + 0x38),this,0x14);
      UpdateObjectHighlight__11EIObjectMan((_globals._pCurHouse)->m_pObjectMan);
      this->m_mode = kDefault;
    }
  }
  else if (messid == 0x1c) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
                    /* end of inlined section */
    if (this->_vb1647->m_state + ~LIVE_SIM_EDIT < 2) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      ppTVar12 = (TreeSim **)
                 (*(code *)_5Globs_pObjectModule->__vtable->AdvanceSelectedPerson)
                           ((int)&_5Globs_pObjectModule->__vtable +
                            (int)*(short *)&_5Globs_pObjectModule->__vtable->SetSelectedPerson);
      if (ppTVar12 == (TreeSim **)0x0) {
        bVar9 = false;
      }
      else {
        lVar18 = (*(code *)ppTVar12[1][0x18].m_pCursorObject)
                           ((int)ppTVar12 + (int)*(short *)&ppTVar12[1][0x18].m_pMTObject);
        bVar9 = true;
        if (lVar18 == 0) {
          bVar9 = false;
        }
      }
      if (bVar9) {
                    /* inlined from ../MSrc/SCID.h */
        iVar14 = _o_cd;
        if (ppTVar12 != (TreeSim **)0x0) {
          pvVar13 = _dyncastimpl__7TreeSim4SCID(*ppTVar12,cXMTObjectImplID);
          iVar14 = *(int *)((int)pvVar13 + 0xc);
        }
        if (iVar14 != 0) {
                    /* inlined from ../MSrc/SCID.h */
          iVar14 = _o_cd;
          if (ppTVar12 != (TreeSim **)0x0) {
            pvVar13 = _dyncastimpl__7TreeSim4SCID(*ppTVar12,cXMTObjectImplID);
            iVar14 = *(int *)((int)pvVar13 + 0xc);
          }
          if (iVar14 == 0) {
            ppTVar12 = (TreeSim **)0x0;
          }
          else {
            ppTVar12 = (TreeSim **)**(undefined4 **)(iVar14 + 4);
          }
        }
      }
      if ((ppTVar12 != (TreeSim **)0x0) &&
         (lVar18 = (*(code *)ppTVar12[1][9].m_pEoRInstance)
                             ((int)ppTVar12 + (int)*(short *)&ppTVar12[1][9].m_pPortal), lVar18 != 0
         )) {
        this->m_refund = 0;
        *(undefined4 *)&this->m_bUndoable = 1;
        *(undefined4 *)&this->m_bNewObject = 0;
        pTVar4 = ppTVar12[1];
        uVar19 = (ulong)(int)pTVar4;
        uVar15 = (*(code *)pTVar4[0x16].m_pCursorObject)
                           ((int)ppTVar12 + (int)*(short *)&pTVar4[0x16].m_pMTObject);
        uVar2 = uVar15 + 7 & 7;
        uVar3 = uVar15 & 7;
        uVar19 = (*(long *)((uVar15 + 7) - uVar2) << (7 - uVar2) * 8 |
                 uVar19 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                 *(ulong *)(uVar15 - uVar3) >> uVar3 * 8;
        puVar1 = (undefined *)((int)&(this->m_undoLoc).x.whole + 3);
        uVar2 = (uint)puVar1 & 7;
        puVar8 = (ulong *)(puVar1 + -uVar2);
        *puVar8 = *puVar8 & -1L << (uVar2 + 1) * 8 | uVar19 >> (7 - uVar2) * 8;
        uVar2 = (uint)&this->m_undoLoc & 7;
        puVar8 = (ulong *)((int)&this->m_undoLoc - uVar2);
        *puVar8 = uVar19 << uVar2 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        uVar11 = (*(code *)ppTVar12[1][0x10].m_pCursorObject)
                           ((int)ppTVar12 + (int)*(short *)&ppTVar12[1][0x10].m_pMTObject,1);
        pOVar10 = _5Globs_pObjectFolder;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this->m_undoDir = uVar11;
        pOVar5 = pOVar10->__vtable;
        cursorSel = (ObjSelector *)
                    (*(code *)pOVar5->DeletingInstance)
                              ((int)&pOVar10->__vtable + (int)*(short *)&pOVar5->CreatingInstance,
                               0x437);
        module = _5Globs_pObjectModule;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        uVar11 = (*(code *)ppTVar12[1][0x15].__vtable)
                           ((int)ppTVar12 + (int)*(short *)&ppTVar12[1][0x15].m_pEoRPerson);
        uVar11 = MakeMouseObject__14cXCursorObjectP12ObjectModulesP11ObjSelectori
                           (module,uVar11,cursorSel,1);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        lVar18 = (*(code *)_5Globs_pObjectModule->__vtable->AdvanceSelectedPerson)
                           ((int)&_5Globs_pObjectModule->__vtable +
                            (int)*(short *)&_5Globs_pObjectModule->__vtable->SetSelectedPerson,
                            uVar11);
                    /* inlined from ../MSrc/SCID.h */
        if (lVar18 == 0) {
          pcVar16 = (cXCursorObject__15_1968 *)0x0;
                    /* end of inlined section */
          this->m_pCursorObject = (cXCursorObject__15_1968 *)0x0;
        }
        else {
          pcVar16 = (cXCursorObject__15_1968 *)
                    _dyncastimpl__7TreeSim4SCID(*(TreeSim **)lVar18,cXCursorObjectID);
          this->m_pCursorObject = pcVar16;
        }
        pcVar17 = pcVar16->_vb5522->_vb2008;
        pcVar6 = pcVar17->__vtable;
        (*(code *)pcVar6->GetData)((int)&pcVar17->_vb3534 + (int)*(short *)&pcVar6->GetRect);
        if (this->m_pCursorObject != (cXCursorObject__15_1968 *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
          PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xd9552ae4);
                    /* end of inlined section */
          Kill__7EPiMenu(this->m_pPiMenu);
          this->m_mode = kDefault;
          pcVar7 = this->m_pCursorObject->__vtable;
          pcVar17 = (cXObject__15_2008 *)
                    (**(code **)&pcVar7->field_0x44)
                              ((int)&this->m_pCursorObject->_vb5522 +
                               (int)*(short *)&pcVar7->field_0x40);
          UpdateHouse__11ESimsCursorP8cXObject(this,pcVar17);
          return;
        }
      }
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
                    /* end of inlined section */
    }
  }
  else {
    if (messid == 0x1a) {
      messid = 0x11;
    }
    else if (messid == 0x1b) {
      messid = 0x12;
    }
    iVar14 = *(int *)(*(int *)&this->field_0x8 + 0x38);
    (**(code **)(iVar14 + 0x3c))
              (*(int *)&this->field_0x8 + (int)*(short *)(iVar14 + 0x38),pChild,messid);
  }
  return;
}

void ESimsCursor::SetState(Panelstate state) {
	EUIObjectNode *this;
	
  this->_vb1647->m_state = state;
  _esmscrsrPauseUpdate = 0;
  if (state < NSTATES) {
                    /* WARNING: Could not recover jumptable at 0x001200b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_003aa4f0)[state])();
    return;
  }
  ExitWallTool__11ESimsCursor((ESimsCursor__16_2000 *)this);
  ExitFloorTool__11ESimsCursor((ESimsCursor__16_2000 *)this);
  ExitPaperTool__11ESimsCursor((ESimsCursor__16_2000 *)this);
  return;
}

void ESimsCursor::LiveUpdate() {
	ESimsCursor *this;
	ESimsCursor *this;
	ESimsCursor *this;
	
  EUIObjectNode__vtable *pEVar1;
  bool bVar2;
  EPiMenu *pEVar3;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
                    /* end of inlined section */
  if (this->m_mode == kPiMenu) {
    pEVar3 = this->m_pPiMenu;
    if (pEVar3 == (EPiMenu *)0x0) {
      bVar2 = false;
    }
    else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      bVar2 = ((pEVar3->field0_0x0).m_flags & 4) != 0;
    }
    if (bVar2) {
      pEVar1 = (pEVar3->field0_0x0).__vtable;
      (*(code *)pEVar1->SetBoxDims)
                ((int)&(pEVar3->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                 (int)*(short *)&pEVar1->SetPos);
      return;
    }
    pEVar3 = this->m_pPiMenu;
  }
  else {
    pEVar3 = this->m_pPiMenu;
  }
  if (pEVar3 == (EPiMenu *)0x0) {
    bVar2 = false;
  }
  else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    bVar2 = ((pEVar3->field0_0x0).m_flags & 4) != 0;
  }
  if (bVar2) {
    Die__7EPiMenu(this->m_pPiMenu);
  }
  bVar2 = CheckForXPressLive__11ESimsCursor(this);
  if (!bVar2) {
    MoveCursor__11ESimsCursor(this);
  }
  return;
}

void ESimsCursor::PauseUpdate() {
	ESimsCursor *this;
	bool dup;
	bool ddown;
	bool dleft;
	bool dright;
	bool gotDpadDir;
	
  EUIVirtualCtrl__vtable *pEVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  CursorMode CVar8;
  
  if (_esmscrsrPauseUpdate == 0) {
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar4 = (**(code **)(pEVar1 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,
                       *(undefined4 *)&this->field_0x30,0x40);
    if (lVar4 != 0) {
      return;
    }
    _esmscrsrPauseUpdate = 1;
    return;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
                    /* end of inlined section */
  if (this->m_mode + ~kPiMenu < 4) {
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar4 = (*(code *)pEVar1[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                       *(undefined4 *)&this->field_0x30,0x1000);
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar5 = (*(code *)pEVar1[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                       *(undefined4 *)&this->field_0x30,0x4000);
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar6 = (*(code *)pEVar1[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                       *(undefined4 *)&this->field_0x30,0x8000);
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar7 = (*(code *)pEVar1[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                       *(undefined4 *)&this->field_0x30,0x2000);
    bVar3 = false;
    if (lVar4 == 0) {
      if (lVar5 == 0) {
        if (lVar6 == 0) {
          if (lVar7 != 0) goto LAB_00120360;
        }
        else {
          bVar3 = true;
        }
      }
      else {
        bVar3 = true;
      }
    }
    else {
LAB_00120360:
      bVar3 = true;
    }
    if (bVar3) {
      iVar2 = *(int *)&this->field_0x8;
LAB_0012039c:
      (**(code **)(*(int *)(iVar2 + 0x38) + 0x3c))
                (iVar2 + *(short *)(*(int *)(iVar2 + 0x38) + 0x38),this,0x25);
      goto LAB_001203b8;
    }
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar4 = (*(code *)pEVar1[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                       *(undefined4 *)&this->field_0x30,0x10);
    if (lVar4 != 0) {
      iVar2 = *(int *)&this->field_0x8;
      goto LAB_0012039c;
    }
    CVar8 = this->m_mode;
  }
  else {
LAB_001203b8:
    CVar8 = this->m_mode;
  }
  if (CVar8 == kWallTool) {
LAB_00120414:
    MoveCursor__11ESimsCursor(this);
    WallToolUpdate__11ESimsCursor((ESimsCursor__16_2000 *)this);
  }
  else {
    if ((int)CVar8 < 4) {
      if (CVar8 == kFloorTool) {
        MoveCursor__11ESimsCursor(this);
        FloorUpdate__11ESimsCursor((ESimsCursor__16_2000 *)this);
        return;
      }
    }
    else {
      if (CVar8 == kPaperTool) {
        MoveCursor__11ESimsCursor(this);
        PaperToolUpdate__11ESimsCursor((ESimsCursor__16_2000 *)this);
        return;
      }
      if (CVar8 == kFenceTool) goto LAB_00120414;
    }
    BuyUpdate__11ESimsCursor(this);
  }
  return;
}

bool ESimsCursor::TryUndoObjectPlacement() {
	FTilePt origloc;
	FTilePt startTile;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  cXObject__15_2008 *pcVar4;
  cXObject__15_2008__vtable *pcVar5;
  cXCursorObject__15_1968__vtable *pcVar6;
  ulong *puVar7;
  cXCursorObject__15_1968 *pcVar8;
  long lVar9;
  ulong uVar10;
  FTilePt origloc;
  FTilePt startTile;
  
  if (this->m_pCursorObject != (cXCursorObject__15_1968 *)0x0) {
                    /* end of inlined section */
    pcVar4 = this->m_pCursorObject->_vb5522->_vb2008;
    pcVar5 = pcVar4->__vtable;
    (*(code *)pcVar5[1].UserCanPickup)
              ((int)&pcVar4->_vb3534 + (int)*(short *)&pcVar5[1].UserPlace,&origloc);
    pcVar4 = this->m_pCursorObject->_vb5522->_vb2008;
    pcVar5 = pcVar4->__vtable;
    lVar9 = (*(code *)pcVar5->GetID)((int)&pcVar4->_vb3534 + (int)*(short *)&pcVar5->GetTypeName);
    pcVar8 = this->m_pCursorObject;
    if (lVar9 != 0) {
      pcVar4 = pcVar8->_vb5522->_vb2008;
      pcVar5 = pcVar4->__vtable;
      (*(code *)pcVar5->GetData)((int)&pcVar4->_vb3534 + (int)*(short *)&pcVar5->GetRect);
      pcVar8 = this->m_pCursorObject;
    }
    pcVar4 = pcVar8->_vb5522->_vb2008;
    pcVar5 = pcVar4->__vtable;
    (*(code *)pcVar5->GetAdultAnimTable)
              ((int)&pcVar4->_vb3534 + (int)*(short *)&pcVar5->GetModule,&origloc,1,0,0);
    pcVar4 = this->m_pCursorObject->_vb5522->_vb2008;
    pcVar5 = pcVar4->__vtable;
    lVar9 = (*(code *)pcVar5->GetID)((int)&pcVar4->_vb3534 + (int)*(short *)&pcVar5->GetTypeName);
    if (lVar9 == 0) {
      pcVar8 = this->m_pCursorObject;
    }
    else {
      pcVar4 = this->m_pCursorObject->_vb5522->_vb2008;
      pcVar5 = pcVar4->__vtable;
      (*(code *)pcVar5->GetData)((int)&pcVar4->_vb3534 + (int)*(short *)&pcVar5->GetRect);
      pcVar8 = this->m_pCursorObject;
    }
    uVar10 = (**(code **)&pcVar8->__vtable->field_0x54)
                       ((int)&pcVar8->_vb5522 + (int)*(short *)&pcVar8->__vtable->field_0x50,
                        this->m_undoDir);
    pcVar8 = this->m_pCursorObject;
    puVar1 = (undefined *)((int)&(this->m_undoLoc).x.whole + 3);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)&this->m_undoLoc & 7;
    startTile = (FTilePt)((*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                          uVar10 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8
                         | *(ulong *)((int)&this->m_undoLoc - uVar3) >> uVar3 * 8);
    puVar1 = (undefined *)((int)&startTile.x.whole + 3);
    uVar2 = (uint)puVar1 & 7;
    puVar7 = (ulong *)(puVar1 + -uVar2);
    *puVar7 = *puVar7 & -1L << (uVar2 + 1) * 8 | (ulong)startTile >> (7 - uVar2) * 8;
    pcVar4 = pcVar8->_vb5522->_vb2008;
    pcVar5 = pcVar4->__vtable;
    lVar9 = (*(code *)pcVar5->GetAttr)
                      ((int)&pcVar4->_vb3534 + (int)*(short *)&pcVar5->GetTemp,&startTile,1,0,0);
    if (lVar9 != 0) {
      pcVar4 = this->m_pCursorObject->_vb5522->_vb2008;
      pcVar5 = pcVar4->__vtable;
      (*(code *)pcVar5->GetAdultAnimTable)
                ((int)&pcVar4->_vb3534 + (int)*(short *)&pcVar5->GetModule,&startTile,1,0,0);
      pcVar6 = this->m_pCursorObject->__vtable;
      lVar9 = (*(code *)pcVar6->DetachFloater)
                        ((int)&this->m_pCursorObject->_vb5522 + (int)*(short *)&pcVar6->KillFloater)
      ;
      if (lVar9 == 0) {
        return false;
      }
      pcVar6 = this->m_pCursorObject->__vtable;
      lVar9 = (*(code *)pcVar6->FaceFront)
                        ((int)&this->m_pCursorObject->_vb5522 + (int)*(short *)&pcVar6->GetFloater);
      if (lVar9 != 0) {
        return true;
      }
    }
  }
  return false;
}

bool TryFindAlternativeUndoLoc(cXObject *newObj) {
	FindGoodLocationParams fglp;
	FTilePt newLoc;
	
  ObjSelector *pOVar1;
  long lVar2;
  cXObject__15_2008__vtable *pcVar3;
  FindGoodLocationParams fglp;
  FTilePt newLoc;
  
  if (newObj != (cXObject__15_2008 *)0x0) {
    pOVar1 = (ObjSelector *)
             (*(code *)newObj->__vtable[1].SetLevel)
                       ((int)&newObj->_vb3534 + (int)*(short *)&newObj->__vtable[1].GetTreeID);
    pOVar1 = GetMasterSelector__11ObjSelector(pOVar1);
                    /* inlined from ../MSrc/objselector.h */
                    /* end of inlined section */
    if (pOVar1->fHeader->type != 7) {
                    /* inlined from ../MSrc/findgoodlocationparams.h */
      fglp.fDirectionVector = -1;
                    /* end of inlined section */
                    /* inlined from ../MSrc/findgoodlocationparams.h */
      fglp._0_4_ = 0;
                    /* end of inlined section */
                    /* inlined from ../MSrc/findgoodlocationparams.h */
      fglp._28_4_ = 0;
                    /* end of inlined section */
                    /* inlined from ../MSrc/findgoodlocationparams.h */
      fglp._20_4_ = 1;
      fglp._24_4_ = 1;
                    /* end of inlined section */
      lVar2 = (*(code *)newObj->__vtable->GetRoom)
                        ((int)&newObj->_vb3534 +
                         (int)*(short *)&newObj->__vtable->GetPrevObjectSibling,&fglp,&newLoc);
      if (lVar2 == 0) {
        fglp._20_4_ = 0;
                    /* end of inlined section */
        lVar2 = (*(code *)newObj->__vtable->GetRoom)
                          ((int)&newObj->_vb3534 +
                           (int)*(short *)&newObj->__vtable->GetPrevObjectSibling,&fglp,&newLoc);
        if (lVar2 == 0) {
          return false;
        }
        pcVar3 = newObj->__vtable;
      }
      else {
        pcVar3 = newObj->__vtable;
      }
      (*(code *)pcVar3->GetAdultAnimTable)
                ((int)&newObj->_vb3534 + (int)*(short *)&pcVar3->GetModule,&newLoc,1,0,0);
      return true;
    }
  }
  return true;
}

void ESimsCursor::CancelCursor(bool quit) {
	cXObject *pFloat;
	cXObject *pFloat;
	ExpenseType exptype;
	
  short sVar1;
  cXCursorObject__15_1968__vtable *pcVar2;
  ObjectModule__vtable *pOVar3;
  cSimulator__vtable *pcVar4;
  cXObject__15_2008__vtable *pcVar5;
  ObjectModule__vtable **ppOVar6;
  cSimulator__vtable **ppcVar7;
  bool bVar8;
  ObjSelector *pOVar9;
  cXCursorObject__15_1968 *pcVar10;
  long lVar11;
  undefined8 uVar12;
  cXObject__15_2008 *pcVar13;
  int iVar14;
  
  this->m_mode = kDefault;
  pcVar10 = this->m_pCursorObject;
  if (pcVar10 == (cXCursorObject__15_1968 *)0x0) {
    this->m_refund = 0;
    if (!quit) {
      return;
    }
    iVar14 = *(int *)(*(int *)&this->field_0x8 + 0x38);
    (**(code **)(iVar14 + 0x3c))
              (*(int *)&this->field_0x8 + (int)*(short *)(iVar14 + 0x38),this,0x25);
    return;
  }
  pcVar2 = pcVar10->__vtable;
  if (*(int *)&this->m_bUndoable != 0) {
    lVar11 = (**(code **)&pcVar2->field_0x44)
                       ((int)&pcVar10->_vb5522 + (int)*(short *)&pcVar2->field_0x40);
    bVar8 = TryUndoObjectPlacement__11ESimsCursor(this);
    if (!bVar8) {
      pcVar2 = this->m_pCursorObject->__vtable;
      (**(code **)&pcVar2->field_0x3c)
                ((int)&this->m_pCursorObject->_vb5522 +
                 (int)*(short *)&pcVar2->GetDynamicToStaticLatency);
      pcVar13 = (cXObject__15_2008 *)lVar11;
      bVar8 = TryFindAlternativeUndoLoc__FP8cXObject(pcVar13);
      if (!bVar8) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        pOVar3 = _5Globs_pObjectModule->__vtable;
        sVar1 = *(short *)&pOVar3->GetNumObjects;
        ppOVar6 = &_5Globs_pObjectModule->__vtable;
        uVar12 = (*(code *)pcVar13->__vtable[1].UserCanPlace)
                           ((int)&pcVar13->_vb3534 + (int)*(short *)&pcVar13->__vtable[1].IsPartOfMe
                           );
        lVar11 = 0;
        (*(code *)pOVar3->CheckIntegrity)((int)ppOVar6 + (int)sVar1,uVar12);
      }
    }
    if (lVar11 == 0) {
      pcVar10 = this->m_pCursorObject;
    }
    else {
      ClearPlacementError__11ESimsCursorP8cXObject(this,(cXObject__15_2008 *)lVar11);
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xd9552ae4);
                    /* end of inlined section */
      UpdateHouse__11ESimsCursorP8cXObject(this,(cXObject__15_2008 *)lVar11);
      pcVar10 = this->m_pCursorObject;
    }
    goto LAB_00120988;
  }
  lVar11 = (**(code **)&pcVar2->field_0x44)
                     ((int)&pcVar10->_vb5522 + (int)*(short *)&pcVar2->field_0x40);
  if (lVar11 == 0) {
LAB_0012096c:
    pcVar10 = this->m_pCursorObject;
  }
  else {
    iVar14 = (int)lVar11;
    lVar11 = (**(code **)(*(int *)(iVar14 + 4) + 0x374))
                       (iVar14 + *(short *)(*(int *)(iVar14 + 4) + 0x370));
    uVar12 = 7;
    if (lVar11 == 0) {
      uVar12 = 6;
    }
    if (_globals.Cheats._4_4_ == 0) {
      bVar8 = IsBuildHouseMode__7EGlobal(&_globals);
      if (!bVar8) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        pcVar4 = _5Globs_pSimulator->__vtable;
        sVar1 = *(short *)&pcVar4->SetObjectsValue;
        ppcVar7 = &_5Globs_pSimulator->__vtable;
        pOVar9 = (ObjSelector *)
                 (**(code **)(*(int *)(iVar14 + 4) + 0x2ec))
                           (iVar14 + *(short *)(*(int *)(iVar14 + 4) + 0x2e8));
        pOVar9 = GetMasterSelector__11ObjSelector(pOVar9);
                    /* inlined from ../MSrc/objselector.h */
                    /* end of inlined section */
        (*(code *)pcVar4->GetProbe)
                  ((int)ppcVar7 + (int)sVar1,uVar12,-(int)(short)pOVar9->fHeader->price);
        goto LAB_0012096c;
      }
      pcVar10 = this->m_pCursorObject;
    }
    else {
      pcVar10 = this->m_pCursorObject;
    }
  }
  (*(code *)pcVar10->__vtable->GetCursorObjectImplementation)
            ((int)&pcVar10->_vb5522 + (int)*(short *)&pcVar10->__vtable->GetLastLevel);
                    /* end of inlined section */
  pcVar10 = this->m_pCursorObject;
LAB_00120988:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  pOVar3 = _5Globs_pObjectModule->__vtable;
  pcVar13 = pcVar10->_vb5522->_vb2008;
  sVar1 = *(short *)&pOVar3->GetNumObjects;
  pcVar5 = pcVar13->__vtable;
  ppOVar6 = &_5Globs_pObjectModule->__vtable;
  uVar12 = (*(code *)pcVar5[1].UserCanPlace)
                     ((int)&pcVar13->_vb3534 + (int)*(short *)&pcVar5[1].IsPartOfMe);
  (*(code *)pOVar3->CheckIntegrity)((int)ppOVar6 + (int)sVar1,uVar12);
  this->m_pCursorObject = (cXCursorObject__15_1968 *)0x0;
  if (quit) {
    iVar14 = *(int *)(*(int *)&this->field_0x8 + 0x38);
    (**(code **)(iVar14 + 0x3c))
              (*(int *)&this->field_0x8 + (int)*(short *)(iVar14 + 0x38),this,0x25);
  }
  return;
}

cXObject* ESimsCursor::GetGrabObject() {
  cXCursorObject__15_1968 *pcVar1;
  cXObject__15_2008 *pcVar2;
  
  pcVar1 = this->m_pCursorObject;
  if (pcVar1 == (cXCursorObject__15_1968 *)0x0) {
    pcVar2 = (cXObject__15_2008 *)0x0;
  }
  else {
    pcVar2 = (cXObject__15_2008 *)
             (**(code **)&pcVar1->__vtable->field_0x44)
                       ((int)&pcVar1->_vb5522 + (int)*(short *)&pcVar1->__vtable->field_0x40);
  }
  return pcVar2;
}

void ESimsCursor::UpdateLot() {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pFixedWorld->__vtable[1].SetVertexConfig)
            ((int)&_5Globs_pFixedWorld->__vtable +
             (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].GetVertexConfig,0);
  RecalcHouse__7EGlobal(&_globals);
  return;
}

bool ESimsCursor::CanUserSell() {
	cXObject *pFloater;
	bool canKillFloater;
	int candel;
	cXMTObject *mtobj;
	cXObject *ptr;
	
  short sVar1;
  cXCursorObject__15_1968 *pcVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  TreeSim **ppTVar9;
  
  pcVar2 = this->m_pCursorObject;
  bVar4 = false;
  if (pcVar2 != (cXCursorObject__15_1968 *)0x0) {
    lVar7 = (**(code **)&pcVar2->__vtable->field_0x44)
                      ((int)&pcVar2->_vb5522 + (int)*(short *)&pcVar2->__vtable->field_0x40);
    if (lVar7 == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
      if (*(int *)&this->m_bNewObject == 0) {
        ppTVar9 = (TreeSim **)lVar7;
        uVar8 = (*(code *)ppTVar9[1][0x10].m_pCursorObject)
                          ((int)ppTVar9 + (int)*(short *)&ppTVar9[1][0x10].m_pMTObject,0x2b);
        bVar4 = (uVar8 & 8) != 0;
        if (bVar4) {
          lVar7 = (*(code *)ppTVar9[1][0x18].m_pCursorObject)
                            ((int)ppTVar9 + (int)*(short *)&ppTVar9[1][0x18].m_pMTObject);
          if (lVar7 == 0) {
            lVar7 = (*(code *)ppTVar9[1][0x12].__vtable)
                              ((int)ppTVar9 + (int)*(short *)&ppTVar9[1][0x12].m_pEoRPerson,0);
            bVar4 = lVar7 == 0 && bVar4;
          }
          else {
                    /* inlined from ../MSrc/SCID.h */
            piVar5 = (int *)_dyncastimpl__7TreeSim4SCID(*ppTVar9,cXMTObjectID);
                    /* end of inlined section */
            lVar7 = (**(code **)(piVar5[1] + 0x4c))((int)piVar5 + (int)*(short *)(piVar5[1] + 0x48))
            ;
            if (lVar7 == 0) {
              sVar1 = *(short *)(piVar5[1] + 0x10);
              pcVar6 = *(code **)(piVar5[1] + 0x14);
              while (piVar5 = (int *)(*pcVar6)((int)piVar5 + (int)sVar1), piVar5 != (int *)0x0) {
                iVar3 = *(int *)(*piVar5 + 4);
                lVar7 = (**(code **)(iVar3 + 0x25c))(*piVar5 + (int)*(short *)(iVar3 + 600),0);
                if (lVar7 != 0) {
                  return false;
                }
                sVar1 = *(short *)(piVar5[1] + 0x18);
                pcVar6 = *(code **)(piVar5[1] + 0x1c);
              }
            }
          }
        }
      }
    }
  }
  return bVar4;
}

s32 ESimsCursor::_GetkDefaultToolValue() {
	cXObject *pFloater;
	
  cXCursorObject__15_1968 *pcVar1;
  ObjSelector *pOVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  pcVar1 = this->m_pCursorObject;
  if (pcVar1 == (cXCursorObject__15_1968 *)0x0) {
    iVar3 = 0;
  }
  else {
    lVar4 = (**(code **)&pcVar1->__vtable->field_0x44)
                      ((int)&pcVar1->_vb5522 + (int)*(short *)&pcVar1->__vtable->field_0x40);
    iVar3 = 0;
    if (lVar4 != 0) {
      iVar5 = (int)lVar4;
      iVar3 = *(int *)(iVar5 + 4);
      if (*(int *)&this->m_bNewObject == 0) {
        lVar4 = (**(code **)(iVar3 + 0x374))(iVar5 + *(short *)(iVar3 + 0x370));
        if (lVar4 == 4) {
          return 0;
        }
        iVar3 = (**(code **)(*(int *)(iVar5 + 4) + 0x344))
                          (iVar5 + *(short *)(*(int *)(iVar5 + 4) + 0x340));
      }
      else {
        pOVar2 = (ObjSelector *)(**(code **)(iVar3 + 0x2ec))(iVar5 + *(short *)(iVar3 + 0x2e8));
        pOVar2 = GetMasterSelector__11ObjSelector(pOVar2);
                    /* inlined from ../MSrc/objselector.h */
                    /* end of inlined section */
        iVar3 = (int)(short)pOVar2->fHeader->price;
      }
      iVar3 = -iVar3;
    }
  }
  return iVar3;
}

void ESimsCursor::BuyUpdate() {
	bool dup;
	bool ddown;
	bool dleft;
	bool dright;
	ESimsCursor *this;
	ESimsCursor *this;
	ESimsCursor *this;
	ESimsCursor *this;
	ESimsCursor *this;
	ESimsCursor *this;
	cXObject *pFloat;
	bool canKillFloater;
	cXObject *pFloater;
	int candel;
	cXMTObject *mtobj;
	cXObject *ptr;
	ExpenseType exptype;
	int refund;
	
  short sVar1;
  EPiMenu *pEVar2;
  EUIVirtualCtrl__vtable *pEVar3;
  EUIObjectNode__vtable *pEVar4;
  cXCursorObject__15_1968__vtable *pcVar5;
  cSimulator__vtable *pcVar6;
  ObjectModule__vtable *pOVar7;
  cXObject__15_2008 *pcVar8;
  cXObject__15_2008__vtable *pcVar9;
  bool bVar10;
  bool bVar11;
  ObjectModule__vtable **ppOVar12;
  cSimulator__vtable **ppcVar13;
  bool bVar14;
  cXCursorObject__15_1968 *pcVar15;
  int *piVar16;
  code *pcVar17;
  ObjSelector *pOVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  undefined8 uVar25;
  TreeSim **ppTVar26;
  
  if (*(int *)&this->field_0x30 == 1) {
    return;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
                    /* end of inlined section */
  if (this->m_mode == kPiMenu) {
    pEVar2 = this->m_pPiMenu;
    if (pEVar2 == (EPiMenu *)0x0) {
      bVar14 = false;
    }
    else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      bVar14 = ((pEVar2->field0_0x0).m_flags & 4) != 0;
    }
    if (!bVar14) {
      if (pEVar2 == (EPiMenu *)0x0) {
        this->m_mode = kDefault;
      }
      else {
        Kill__7EPiMenu(pEVar2);
        this->m_mode = kDefault;
      }
    }
  }
  pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar20 = (*(code *)pEVar3[1].GetBut)
                     ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar3[1].ClearBut + -4,
                      *(undefined4 *)&this->field_0x30,0x1000);
  pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar21 = (*(code *)pEVar3[1].GetBut)
                     ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar3[1].ClearBut + -4,
                      *(undefined4 *)&this->field_0x30,0x4000);
  pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar22 = (*(code *)pEVar3[1].GetBut)
                     ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar3[1].ClearBut + -4,
                      *(undefined4 *)&this->field_0x30,0x8000);
  pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar23 = (*(code *)pEVar3[1].GetBut)
                     ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar3[1].ClearBut + -4,
                      *(undefined4 *)&this->field_0x30,0x2000);
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
                    /* end of inlined section */
  if (this->m_mode == kPiMenu) {
    if (this->m_pPiMenu == (EPiMenu *)0x0) {
      bVar14 = false;
    }
    else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      bVar14 = ((this->m_pPiMenu->field0_0x0).m_flags & 4) != 0;
    }
    if (!bVar14) goto LAB_00120ddc;
    pcVar15 = this->m_pCursorObject;
  }
  else {
LAB_00120ddc:
    if ((((lVar20 != 0) || (lVar21 != 0)) || (lVar22 != 0)) || (lVar23 != 0)) {
      CancelCursor__11ESimsCursorb(this,true);
      return;
    }
    pcVar15 = this->m_pCursorObject;
  }
  if (pcVar15 == (cXCursorObject__15_1968 *)0x0) {
    pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar20 = (*(code *)pEVar3[1].GetBut)
                       ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar3[1].ClearBut + -4,
                        *(undefined4 *)&this->field_0x30,0x10);
    if (lVar20 != 0) {
      iVar19 = *(int *)(*(int *)&this->field_0x8 + 0x38);
      (**(code **)(iVar19 + 0x3c))
                (*(int *)&this->field_0x8 + (int)*(short *)(iVar19 + 0x38),this,0x25);
      this->m_mode = kDefault;
      return;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
                    /* end of inlined section */
    if (this->m_mode == kPiMenu) {
      pEVar2 = this->m_pPiMenu;
      if (pEVar2 == (EPiMenu *)0x0) {
        bVar14 = false;
      }
      else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
        bVar14 = ((pEVar2->field0_0x0).m_flags & 4) != 0;
      }
      if (bVar14) {
        pEVar4 = (pEVar2->field0_0x0).__vtable;
        (*(code *)pEVar4->SetBoxDims)
                  ((int)&(pEVar2->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                   (int)*(short *)&pEVar4->SetPos);
        return;
      }
    }
    MoveCursor__11ESimsCursor(this);
    CheckForXPressBuyBuild__11ESimsCursor(this);
    return;
  }
  MoveCursor__11ESimsCursor(this);
  Float__11ESimsCursor(this);
  pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar20 = (*(code *)pEVar3[1].GetBut)
                     ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar3[1].ClearBut + -4,
                      *(undefined4 *)&this->field_0x30,0x40);
  if (lVar20 != 0) {
    pcVar15 = this->m_pCursorObject;
    lVar20 = 0;
    if (pcVar15 != (cXCursorObject__15_1968 *)0x0) {
      lVar20 = (*(code *)pcVar15->__vtable->DetachFloater)
                         ((int)&pcVar15->_vb5522 + (int)*(short *)&pcVar15->__vtable->KillFloater);
    }
    if (lVar20 != 0) {
      pcVar5 = this->m_pCursorObject->__vtable;
      lVar20 = (**(code **)&pcVar5->field_0x44)
                         ((int)&this->m_pCursorObject->_vb5522 + (int)*(short *)&pcVar5->field_0x40)
      ;
      pcVar5 = this->m_pCursorObject->__vtable;
      lVar21 = (*(code *)pcVar5->FaceFront)
                         ((int)&this->m_pCursorObject->_vb5522 + (int)*(short *)&pcVar5->GetFloater)
      ;
      pcVar15 = this->m_pCursorObject;
      if (lVar21 != 0) {
        lVar21 = (**(code **)&pcVar15->__vtable->field_0x44)
                           ((int)&pcVar15->_vb5522 + (int)*(short *)&pcVar15->__vtable->field_0x40);
        if (lVar21 == 0) {
          if (lVar20 == 0) {
            pcVar15 = this->m_pCursorObject;
          }
          else {
            OrientObjectInstance__FP8cXObject((cXObject__47_3244 *)(cXObject__15_2008 *)lVar20);
            UpdateHouse__11ESimsCursorP8cXObject(this,(cXObject__15_2008 *)lVar20);
                    /* end of inlined section */
            pcVar15 = this->m_pCursorObject;
          }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
          pOVar7 = _5Globs_pObjectModule->__vtable;
          pcVar8 = pcVar15->_vb5522->_vb2008;
          sVar1 = *(short *)&pOVar7->GetNumObjects;
          pcVar9 = pcVar8->__vtable;
          ppOVar12 = &_5Globs_pObjectModule->__vtable;
          uVar25 = (*(code *)pcVar9[1].UserCanPlace)
                             ((int)&pcVar8->_vb3534 + (int)*(short *)&pcVar9[1].IsPartOfMe);
          (*(code *)pOVar7->CheckIntegrity)((int)ppOVar12 + (int)sVar1,uVar25);
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
                    /* end of inlined section */
          *(undefined4 *)&this->m_bUndoable = 0;
          this->m_pCursorObject = (cXCursorObject__15_1968 *)0x0;
                    /* end of inlined section */
          *(undefined4 *)&this->m_bNewObject = 0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
          PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xd9552ae4);
          return;
                    /* end of inlined section */
        }
        pcVar15 = this->m_pCursorObject;
      }
      (*(code *)pcVar15->__vtable->GetCursorObjectImplementation)
                ((int)&pcVar15->_vb5522 + (int)*(short *)&pcVar15->__vtable->GetLastLevel);
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      pOVar7 = _5Globs_pObjectModule->__vtable;
      pcVar8 = this->m_pCursorObject->_vb5522->_vb2008;
      sVar1 = *(short *)&pOVar7->GetNumObjects;
      pcVar9 = pcVar8->__vtable;
      ppOVar12 = &_5Globs_pObjectModule->__vtable;
      uVar25 = (*(code *)pcVar9[1].UserCanPlace)
                         ((int)&pcVar8->_vb3534 + (int)*(short *)&pcVar9[1].IsPartOfMe);
      (*(code *)pOVar7->CheckIntegrity)((int)ppOVar12 + (int)sVar1,uVar25);
      this->m_pCursorObject = (cXCursorObject__15_1968 *)0x0;
      return;
    }
LAB_001213ec:
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
    return;
                    /* end of inlined section */
  }
                    /* end of inlined section */
  pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar20 = (*(code *)pEVar3[1].GetBut)
                     ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar3[1].ClearBut + -4,
                      *(undefined4 *)&this->field_0x30,0x80);
  if (lVar20 == 0) {
    pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar20 = (*(code *)pEVar3[1].GetBut)
                       ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar3[1].ClearBut + -4,
                        *(undefined4 *)&this->field_0x30,0x10);
    if (lVar20 != 0) {
      CancelCursor__11ESimsCursorb(this,false);
      return;
    }
    pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar20 = (*(code *)pEVar3[1].GetBut)
                       ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar3[1].ClearBut + -4,
                        *(undefined4 *)&this->field_0x30,4);
    if (lVar20 == 0) {
      pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar20 = (*(code *)pEVar3[1].GetBut)
                         ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar3[1].ClearBut + -4
                          ,*(undefined4 *)&this->field_0x30,8);
      if (lVar20 == 0) {
        return;
      }
      TurnObject__11ESimsCursorb(this,false);
      return;
    }
    TurnObject__11ESimsCursorb(this,true);
    return;
  }
  pcVar5 = this->m_pCursorObject->__vtable;
  lVar20 = (**(code **)&pcVar5->field_0x44)
                     ((int)&this->m_pCursorObject->_vb5522 + (int)*(short *)&pcVar5->field_0x40);
  bVar14 = lVar20 != 0;
  if (!bVar14) goto LAB_001213ec;
  ppTVar26 = (TreeSim **)lVar20;
  uVar24 = (*(code *)ppTVar26[1][0x10].m_pCursorObject)
                     ((int)ppTVar26 + (int)*(short *)&ppTVar26[1][0x10].m_pMTObject,0x2b);
  bVar10 = (uVar24 & 8) != 0;
  bVar11 = bVar10 && bVar14;
  if (!bVar10 || !bVar14) goto LAB_001213ec;
  lVar21 = (*(code *)ppTVar26[1][0x18].m_pCursorObject)
                     ((int)ppTVar26 + (int)*(short *)&ppTVar26[1][0x18].m_pMTObject);
  if (lVar21 == 0) {
    lVar20 = (*(code *)ppTVar26[1][0x12].__vtable)
                       ((int)ppTVar26 + (int)*(short *)&ppTVar26[1][0x12].m_pEoRPerson,0);
    bVar11 = lVar20 == 0 && bVar11;
  }
  else {
                    /* inlined from ../MSrc/SCID.h */
    piVar16 = (int *)0x0;
    if (lVar20 != 0) {
      piVar16 = (int *)_dyncastimpl__7TreeSim4SCID(*ppTVar26,cXMTObjectID);
    }
                    /* end of inlined section */
    lVar20 = (**(code **)(piVar16[1] + 0x4c))((int)piVar16 + (int)*(short *)(piVar16[1] + 0x48));
    if (lVar20 == 0) {
      sVar1 = *(short *)(piVar16[1] + 0x10);
      pcVar17 = *(code **)(piVar16[1] + 0x14);
      while (piVar16 = (int *)(*pcVar17)((int)piVar16 + (int)sVar1), piVar16 != (int *)0x0) {
        iVar19 = *(int *)(*piVar16 + 4);
        lVar20 = (**(code **)(iVar19 + 0x25c))(*piVar16 + (int)*(short *)(iVar19 + 600),0);
        if (lVar20 != 0) {
          bVar11 = false;
          break;
        }
        sVar1 = *(short *)(piVar16[1] + 0x18);
        pcVar17 = *(code **)(piVar16[1] + 0x1c);
      }
    }
  }
  if (!bVar11) goto LAB_001213ec;
  lVar20 = (*(code *)ppTVar26[1][0x1b].m_pEoRInstance)
                     ((int)ppTVar26 + (int)*(short *)&ppTVar26[1][0x1b].m_pPortal);
  if (lVar20 == 4) {
    pcVar15 = this->m_pCursorObject;
    goto LAB_00121370;
  }
  if (*(int *)&this->m_bNewObject == 0) {
    iVar19 = (*(code *)ppTVar26[1][0x1a].m_pPerson)
                       ((int)ppTVar26 + (int)*(short *)&ppTVar26[1][0x1a].m_pObject);
    lVar20 = (*(code *)ppTVar26[1][0x1b].m_pEoRInstance)
                       ((int)ppTVar26 + (int)*(short *)&ppTVar26[1][0x1b].m_pPortal);
    if (lVar20 != 0) {
      if (_globals.Cheats._4_4_ == 0) {
        bVar14 = IsBuildHouseMode__7EGlobal(&_globals);
        if (bVar14) {
          pcVar15 = this->m_pCursorObject;
        }
        else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
          (*(code *)_5Globs_pSimulator->__vtable->GetProbe)
                    ((int)&_5Globs_pSimulator->__vtable +
                     (int)*(short *)&_5Globs_pSimulator->__vtable->SetObjectsValue,7,
                     -(int)((float)iVar19 * 0.8 + 0.5));
          pcVar15 = this->m_pCursorObject;
        }
      }
      else {
        pcVar15 = this->m_pCursorObject;
      }
      goto LAB_00121370;
    }
    if (_globals.Cheats._4_4_ != 0) {
      pcVar15 = this->m_pCursorObject;
      goto LAB_00121370;
    }
    bVar14 = IsBuildHouseMode__7EGlobal(&_globals);
    if (bVar14) {
      pcVar15 = this->m_pCursorObject;
      goto LAB_00121370;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pSimulator->__vtable->GetProbe)
              ((int)&_5Globs_pSimulator->__vtable +
               (int)*(short *)&_5Globs_pSimulator->__vtable->SetObjectsValue,6,-iVar19);
  }
  else {
    *(undefined4 *)&this->m_bNewObject = 0;
    lVar20 = (*(code *)ppTVar26[1][0x1b].m_pEoRInstance)
                       ((int)ppTVar26 + (int)*(short *)&ppTVar26[1][0x1b].m_pPortal);
    uVar25 = 7;
    if (lVar20 == 0) {
      uVar25 = 6;
    }
    if (_globals.Cheats._4_4_ == 0) {
      bVar14 = IsBuildHouseMode__7EGlobal(&_globals);
      if (bVar14) {
        pcVar15 = this->m_pCursorObject;
      }
      else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        pcVar6 = _5Globs_pSimulator->__vtable;
        sVar1 = *(short *)&pcVar6->SetObjectsValue;
        ppcVar13 = &_5Globs_pSimulator->__vtable;
        pOVar18 = (ObjSelector *)
                  (*(code *)ppTVar26[1][0x17].m_pCursorObject)
                            ((int)ppTVar26 + (int)*(short *)&ppTVar26[1][0x17].m_pMTObject);
        pOVar18 = GetMasterSelector__11ObjSelector(pOVar18);
                    /* inlined from ../MSrc/objselector.h */
                    /* end of inlined section */
        (*(code *)pcVar6->GetProbe)
                  ((int)ppcVar13 + (int)sVar1,uVar25,-(int)(short)pOVar18->fHeader->price);
        pcVar15 = this->m_pCursorObject;
      }
      goto LAB_00121370;
    }
  }
  pcVar15 = this->m_pCursorObject;
LAB_00121370:
  (*(code *)pcVar15->__vtable->GetCursorObjectImplementation)
            ((int)&pcVar15->_vb5522 + (int)*(short *)&pcVar15->__vtable->GetLastLevel);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  pOVar7 = _5Globs_pObjectModule->__vtable;
  pcVar8 = this->m_pCursorObject->_vb5522->_vb2008;
  sVar1 = *(short *)&pOVar7->GetNumObjects;
  pcVar9 = pcVar8->__vtable;
  ppOVar12 = &_5Globs_pObjectModule->__vtable;
  uVar25 = (*(code *)pcVar9[1].UserCanPlace)
                     ((int)&pcVar8->_vb3534 + (int)*(short *)&pcVar9[1].IsPartOfMe);
  (*(code *)pOVar7->CheckIntegrity)((int)ppOVar12 + (int)sVar1,uVar25);
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
                    /* end of inlined section */
  this->m_pCursorObject = (cXCursorObject__15_1968 *)0x0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
  PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x994e8974);
  return;
                    /* end of inlined section */
}

void ESimsCursor::Update() {
	EUIObjectNode *this;
	ECheats *this;
	
  Panelstate PVar1;
  bool bVar2;
  int iVar3;
  
  if (*(int *)&this->field_0x30 == 1) {
    bVar2 = IsTwoPlayer__7EGlobal(&_globals);
    if (!bVar2) {
      return;
    }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    iVar3 = *(int *)&this->field_0x10;
  }
  else {
    iVar3 = *(int *)&this->field_0x10;
  }
                    /* end of inlined section */
  if ((iVar3 >> 1 & 1U) == 0) {
    return;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/cheats.h */
                    /* end of inlined section */
  if (*(int *)&(_globals.m_pCheats)->m_bCheatsOn != 0) {
    return;
  }
  PVar1 = this->_vb1647->m_state;
  if (-1 < (int)PVar1) {
    if ((int)PVar1 < 8) {
      _esmscrsrPauseUpdate = 0;
      LiveUpdate__11ESimsCursor(this);
      return;
    }
    if (PVar1 == PAUSED_CURSOR_STATE) {
      PauseUpdate__11ESimsCursor(this);
      return;
    }
  }
  _esmscrsrPauseUpdate = 0;
  return;
}

void ESimsCursor::MoveCursor() {
	float StickX;
	float StickY;
	EVec3 vStick;
	float size;
	static float _curs_move_time = 0.f;
	ESimsCam *this;
	ESimsCam *this;
	EVec3 veye;
	EVec3 vtarget;
	EVec3 vEyeToTarg;
	float theta;
	EMat4 mRot;
	bool bClampx;
	bool bClampy;
	ESimsCam *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ESimsCam *pEVar4;
  ulong *puVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  ulong in_v1;
  ulong uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  EVec3 vStick;
  EVec3 veye;
  EVec3 vtarget;
  EVec3 vEyeToTarg;
  float local_ac;
  EMat4 mRot;
  
  puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_vPos & 7;
  uVar9 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->m_vPos - uVar3) >> uVar3 * 8;
  fVar11 = (this->m_vPos).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vLastPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar9 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vLastPos & 7;
  puVar5 = (ulong *)((int)&this->m_vLastPos - uVar2);
  *puVar5 = uVar9 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vLastPos).field0_0x0.d[2] = fVar11;
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
                    /* end of inlined section */
  if (this->m_pCam->m_mode != 4) {
    fVar11 = 1.0;
    fVar12 = GetStick__11EControllerii(_ctrlPads[*(int *)&this->field_0x30],0,0);
    fVar13 = GetStick__11EControllerii(_ctrlPads[*(int *)&this->field_0x30],0,1);
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
    fVar14 = this->m_pCam->m_transSpeed;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vStick.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
    vStick.field0_0x0.d[1] = ABS(fVar13) * fVar13 * fVar14 * _dt;
    vStick.field0_0x0.d[0] = fVar12 * ABS(fVar12) * fVar14 * _dt;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    iVar8 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                      ((int)&_5Globs_pFixedWorld->__vtable +
                       (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
    _curs_move_time_5049 = _curs_move_time_5049 + _dt;
    fVar12 = (float)iVar8 - fVar11;
                    /* end of inlined section */
    if ((vStick.field0_0x0.d[0] != 0.0) || (vStick.field0_0x0.d[1] != 0.0)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
      pEVar4 = this->m_pCam;
      fVar13 = (pEVar4->m_vTarget).field0_0x0.d[0] - (pEVar4->m_vEye).field0_0x0.d[0];
      local_ac = (pEVar4->m_vTarget).field0_0x0.d[1] - (pEVar4->m_vEye).field0_0x0.d[1];
      fVar14 = (pEVar4->m_vTarget).field0_0x0.d[2] - (pEVar4->m_vEye).field0_0x0.d[2];
      fVar14 = sqrtf(fVar13 * fVar13 + local_ac * local_ac + fVar14 * fVar14);
      if (fVar14 != 0.0) {
        fVar13 = fVar13 * (fVar11 / fVar14);
        local_ac = local_ac * (fVar11 / fVar14);
      }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      fVar13 = atan2f(fVar13,local_ac);
      Id__5EMat4(&mRot);
      RotateZ__5EMat4f(&mRot,-fVar13);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
      fVar13 = vStick.field0_0x0.d[2] * mRot.field0_0x0.d[2][1];
      fVar15 = (this->m_vPos).field0_0x0.d[0];
      fVar14 = vStick.field0_0x0.d[0] * mRot.field0_0x0.d[0][0] +
               vStick.field0_0x0.d[1] * mRot.field0_0x0.d[1][0] +
               vStick.field0_0x0.d[2] * mRot.field0_0x0.d[2][0] + mRot.field0_0x0.d[3][0];
      vStick.field0_0x0.d[2] =
           vStick.field0_0x0.d[0] * mRot.field0_0x0.d[0][2] +
           vStick.field0_0x0.d[1] * mRot.field0_0x0.d[1][2] +
           vStick.field0_0x0.d[2] * mRot.field0_0x0.d[2][2] + mRot.field0_0x0.d[3][2];
      fVar13 = vStick.field0_0x0.d[0] * mRot.field0_0x0.d[0][1] +
               vStick.field0_0x0.d[1] * mRot.field0_0x0.d[1][1] + fVar13 + mRot.field0_0x0.d[3][1];
                    /* end of inlined section */
      vStick.field0_0x0._0_8_ = CONCAT44(fVar13,fVar14);
      puVar1 = (undefined *)((int)&vStick.field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar2);
      *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | (ulong)vStick.field0_0x0._0_8_ >> (7 - uVar2) * 8
      ;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      (this->m_vPos).field0_0x0.d[0] = fVar15 + fVar14;
      fVar14 = (this->m_vPos).field0_0x0.d[2];
      (this->m_vPos).field0_0x0.d[1] = (this->m_vPos).field0_0x0.d[1] + fVar13;
      (this->m_vPos).field0_0x0.d[2] = fVar14 + vStick.field0_0x0.d[2];
                    /* end of inlined section */
      fVar14 = (this->m_vPos).field0_0x0.d[0];
      bVar6 = false;
      if ((fVar11 <= fVar14) && (fVar14 <= fVar12)) {
        bVar6 = true;
      }
      fVar11 = (this->m_vPos).field0_0x0.d[1];
      bVar7 = false;
      if ((1.0 <= fVar11) && (fVar11 <= fVar12)) {
        bVar7 = true;
      }
      if (!bVar6) {
        vStick.field0_0x0._0_8_ = (ulong)(uint)fVar13 << 0x20;
      }
      if (!bVar7) {
        vStick.field0_0x0._0_8_ = vStick.field0_0x0._0_8_ & 0xffffffff;
      }
      fVar13 = 1.0;
      fVar14 = (this->m_vPos).field0_0x0.d[0];
      fVar11 = fVar13;
      if (1.0 <= fVar14) {
        fVar11 = (float)((int)fVar14 * (uint)(fVar14 < fVar12) |
                        (int)fVar12 * (uint)(fVar14 >= fVar12));
      }
      fVar14 = (this->m_vPos).field0_0x0.d[1];
      (this->m_vPos).field0_0x0.d[0] = fVar11;
      if (1.0 <= fVar14) {
        fVar13 = (float)((int)fVar14 * (uint)(fVar14 < fVar12) |
                        (int)fVar12 * (uint)(fVar14 >= fVar12));
      }
      (this->m_vPos).field0_0x0.d[1] = fVar13;
      iVar8 = *(int *)(*(int *)&this->field_0x8 + 0x38);
      uVar10 = 0x15;
      if (*(int *)&this->field_0x30 != 0) {
        uVar10 = 0x16;
      }
      (**(code **)(iVar8 + 0x3c))
                (*(int *)&this->field_0x8 + (int)*(short *)(iVar8 + 0x38),this,uVar10);
      CusorMoved__8ESimsCamiRC5EVec2(this->m_pCam,*(int *)&this->field_0x30,(EVec2 *)&vStick);
    }
  }
  return;
}

void ESimsCursor::GetListofObjectsInCusorRad() {
  RemoveAll__9ENodeList(&(this->m_objList).field0_0x0);
  GetObjectsInRect__11EIObjectManiRt9TNodeList1ZP12ISimInstance
            ((_globals._pCurHouse)->m_pObjectMan,*(int *)&this->field_0x30,&this->m_objList);
  return;
}

void ESimsCursor::SetCursorObject(ObjSelector *pSel) {
	ObjSelector *pCursorSel;
	
  ObjectFolder__vtable *pOVar1;
  ObjectFolder *pOVar2;
  ushort uVar3;
  ObjSelector *cursorSel;
  ObjSelector *objSel;
  cXCursorObject__15_1968 *pcVar4;
  long lVar5;
  
  pOVar2 = _5Globs_pObjectFolder;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_bNewObject = 1;
  this->m_refund = 0;
  *(undefined4 *)&this->m_bUndoable = 0;
  pOVar1 = pOVar2->__vtable;
  cursorSel = (ObjSelector *)
              (*(code *)pOVar1->DeletingInstance)
                        ((int)&pOVar2->__vtable + (int)*(short *)&pOVar1->CreatingInstance,0x437);
  objSel = GetMasterSelector__11ObjSelector(pSel);
  uVar3 = MakeMouseObject__14cXCursorObjectP12ObjectModuleP11ObjSelectorT2i
                    (_5Globs_pObjectModule,objSel,cursorSel,1);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  lVar5 = (*(code *)_5Globs_pObjectModule->__vtable->AdvanceSelectedPerson)
                    ((int)&_5Globs_pObjectModule->__vtable +
                     (int)*(short *)&_5Globs_pObjectModule->__vtable->SetSelectedPerson,uVar3);
                    /* inlined from ../MSrc/SCID.h */
  if (lVar5 == 0) {
                    /* end of inlined section */
    this->m_pCursorObject = (cXCursorObject__15_1968 *)0x0;
  }
  else {
    pcVar4 = (cXCursorObject__15_1968 *)
             _dyncastimpl__7TreeSim4SCID(*(TreeSim **)lVar5,cXCursorObjectID);
    this->m_pCursorObject = pcVar4;
  }
  this->m_mode = kDefault;
  return;
}

void ESimsCursor::DrawMenu(ERC *prc) {
	ESimsCursor *this;
	ESimsCursor *this;
	
  EPiMenu *pEVar1;
  EUIObjectNode__vtable *pEVar2;
  bool bVar3;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
                    /* end of inlined section */
  if (this->m_mode == kPiMenu) {
    pEVar1 = this->m_pPiMenu;
    if (pEVar1 == (EPiMenu *)0x0) {
      bVar3 = false;
    }
    else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      bVar3 = ((pEVar1->field0_0x0).m_flags & 4) != 0;
    }
    if (bVar3) {
      pEVar2 = (pEVar1->field0_0x0).__vtable;
      (*(code *)pEVar2->Message)
                ((int)&(pEVar1->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                 (int)*(short *)&pEVar2->SetBoxDims,prc);
    }
  }
  return;
}

void ESimsCursor::Draw_Curs(ERC *prc) {
	float _range[2];
	ESimsCam *this;
	EUIObjectNode *this;
	Panelstate state;
	ESimsCursor *this;
	ESimsCursor *this;
	ESimsCursor *this;
	ESimsCursor *this;
	ESimsCursor *this;
	ESimsCursor *this;
	EVec2 vSnap;
	float mu;
	ERC *this;
	float x;
	float y;
	float y;
	float x;
	EVec3 *this;
	ERC *this;
	float x;
	float y;
	float y;
	float x;
	float x;
	float y;
	float y;
	float x;
	int tmp;
	float u;
	float a;
	float b;
	ERC *this;
	ESimsCursor *this;
	float mu;
	u32 butts;
	bool bRoomFill;
	bool drag;
	ERC *this;
	float x;
	float y;
	float y;
	float x;
	EVec3 *this;
	int tmp;
	float u;
	float a;
	float b;
	ERC *this;
	EVec2 v1;
	ERC *this;
	float x;
	float y;
	float y;
	float x;
	EVec3 *this;
	ESimsCam *this;
	ERC *this;
	float x;
	float y;
	float y;
	float x;
	EVec3 *this;
	ERC *this;
	float x;
	float y;
	float y;
	float x;
	ERC *this;
	float x;
	float y;
	float y;
	float x;
	EVec3 *this;
	float arrowRot;
	ERC *this;
	EVec3 *this;
	float x;
	float y;
	float y;
	float x;
	EVec3 *this;
	EVec3 vSimPos;
	EVec3 vCursToSim;
	ERC *this;
	float x;
	float y;
	float y;
	float x;
	ERC *this;
	float x;
	float y;
	float y;
	float x;
	ESimsCam *this;
	float zscale;
	ERC *this;
	float z;
	float z;
	ESimsCursor *this;
	u32 butts;
	bool bRoomFill;
	EVec2 v1;
	ERC *this;
	float z;
	float z;
	EVec3 *this;
	ESimsCursor *this;
	EVec2 vSnap;
	
  undefined *puVar1;
  EUIVirtualCtrl__vtable *pEVar2;
  int iVar3;
  cXPerson__150_1300 *pcVar4;
  cXObject__150_1187 *pcVar5;
  cXObject__150_1187__vtable *pcVar6;
  ulong *puVar7;
  bool bVar8;
  CursorMode CVar9;
  EMat4 *pEVar10;
  uint uVar11;
  ERC__vtable *pEVar12;
  EMat4 *pEVar13;
  int *piVar14;
  ESimsCam *pEVar15;
  long lVar16;
  EDL *pEVar17;
  ERModel *this_00;
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
  float fVar18;
  float fVar19;
  float _range [2];
  EVec2 v1;
  EVec3 vCursToSim;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  CTilePt aCStack_c0 [5];
  undefined4 local_b0;
  null____pfn_or_delta2 nStack_ac;
  undefined4 local_a0;
  null____pfn_or_delta2 nStack_9c;
  undefined4 local_90;
  null____pfn_or_delta2 nStack_8c;
  undefined4 local_80;
  null____pfn_or_delta2 nStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  EDL *local_40;
  EDL *pEStack_3c;
  float local_30;
  int iStack_2c;
  ERShader *local_20;
  ERModel *pEStack_1c;
  
  local_60 = (int)unaff_s5;
  uStack_5c = (int)((ulong)unaff_s5 >> 0x20);
  local_70 = (int)unaff_s4;
  uStack_6c = (int)((ulong)unaff_s4 >> 0x20);
  local_20 = (ERShader *)unaff_retaddr;
  pEStack_1c = (ERModel *)((ulong)unaff_retaddr >> 0x20);
  local_30 = (float)unaff_s8;
  iStack_2c = (int)((ulong)unaff_s8 >> 0x20);
  local_40 = (EDL *)unaff_s7;
  pEStack_3c = (EDL *)((ulong)unaff_s7 >> 0x20);
  local_50 = (int)unaff_s6;
  uStack_4c = (int)((ulong)unaff_s6 >> 0x20);
  local_80 = (int)unaff_s3;
  nStack_7c = SUB84((ulong)unaff_s3 >> 0x20,0);
  local_90 = (int)unaff_s2;
  nStack_8c = SUB84((ulong)unaff_s2 >> 0x20,0);
  local_a0 = (int)unaff_s1;
  nStack_9c = SUB84((ulong)unaff_s1 >> 0x20,0);
  local_b0 = (int)unaff_s0;
  nStack_ac = SUB84((ulong)unaff_s0 >> 0x20,0);
  if ((*(int *)&this->field_0x30 == 1) && (bVar8 = IsTwoPlayer__7EGlobal(&_globals), !bVar8)) {
    return;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
                    /* end of inlined section */
  if (this->m_pCam->m_mode == 3) {
    return;
  }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if ((*(int *)&this->field_0x10 >> 1 & 1U) == 0) {
    return;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
                    /* end of inlined section */
  if (this->_vb1647->m_state + ~LIVE_SIM_EDIT < 2) {
    DrawGrid__11ESimsCursorP3ERC(prc);
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
    CVar9 = this->m_mode;
                    /* end of inlined section */
    if (CVar9 == kFloorTool) {
      pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar16 = (**(code **)(pEVar2 + 1))
                         ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4,
                          *(undefined4 *)&this->field_0x30,0xc);
      if (lVar16 == 0) {
        pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
        lVar16 = (**(code **)(pEVar2 + 1))
                           ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4,
                            *(undefined4 *)&this->field_0x30,0x40);
        if (lVar16 == 0) {
          pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
          lVar16 = (**(code **)(pEVar2 + 1))
                             ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4
                              ,*(undefined4 *)&this->field_0x30,0x80);
          if (lVar16 == 0) goto LAB_00121dec;
          DrawDeletePrevew__11ESimsCursorP3ERC((ESimsCursor__16_2000 *)this,prc);
          CVar9 = this->m_mode;
        }
        else {
          DrawFloorPrevew__11ESimsCursorP3ERC((ESimsCursor__16_2000 *)this,prc);
          CVar9 = this->m_mode;
        }
      }
      else {
        DrawRoomFillPrevew__11ESimsCursorP3ERC((ESimsCursor__16_2000 *)this,prc);
        CVar9 = this->m_mode;
      }
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
      bVar8 = false;
      if ((CVar9 == kWallTool) || (CVar9 == kFenceTool)) {
        bVar8 = true;
      }
                    /* end of inlined section */
      if (bVar8) {
        pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
        lVar16 = (**(code **)(pEVar2 + 1))
                           ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4,
                            *(undefined4 *)&this->field_0x30,0xc);
        if (lVar16 == 0) {
          pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
          lVar16 = (**(code **)(pEVar2 + 1))
                             ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4
                              ,*(undefined4 *)&this->field_0x30,0x40);
          if (lVar16 == 0) {
            pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
            lVar16 = (**(code **)(pEVar2 + 1))
                               ((int)(_globals.m_pCtrlPad)->m_pressed +
                                *(short *)&pEVar2->GetBut + -4,*(undefined4 *)&this->field_0x30,0x80
                               );
            if (lVar16 == 0) {
LAB_00121dec:
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
              CVar9 = this->m_mode;
            }
            else {
              DrawWallDelPreview__11ESimsCursorP3ERC((ESimsCursor__16_2000 *)this,prc);
              CVar9 = this->m_mode;
            }
          }
          else {
            DrawWallPreview__11ESimsCursorP3ERC((ESimsCursor__16_2000 *)this,prc);
            CVar9 = this->m_mode;
          }
        }
        else {
          DrawWallRoomPreview__11ESimsCursorP3ERC((ESimsCursor__16_2000 *)this,prc);
          CVar9 = this->m_mode;
        }
      }
      else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
                    /* end of inlined section */
        if (this->m_mode == kPaperTool) {
          pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
          lVar16 = (**(code **)(pEVar2 + 1))
                             ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4
                              ,*(undefined4 *)&this->field_0x30,0xc);
          if (lVar16 == 0) {
            pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
            lVar16 = (**(code **)(pEVar2 + 1))
                               ((int)(_globals.m_pCtrlPad)->m_pressed +
                                *(short *)&pEVar2->GetBut + -4,*(undefined4 *)&this->field_0x30,0x40
                               );
            if (lVar16 == 0) {
              pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
              lVar16 = (**(code **)(pEVar2 + 1))
                                 ((int)(_globals.m_pCtrlPad)->m_pressed +
                                  *(short *)&pEVar2->GetBut + -4,*(undefined4 *)&this->field_0x30,
                                  0x80);
              if (lVar16 != 0) {
                DrawPaperDelPreview__11ESimsCursorP3ERC((ESimsCursor__16_2000 *)this,prc);
              }
              goto LAB_00121dec;
            }
            DrawPaperPreview__11ESimsCursorP3ERC((ESimsCursor__16_2000 *)this,prc);
            CVar9 = this->m_mode;
          }
          else {
            DrawPaperRoomPreview__11ESimsCursorP3ERC((ESimsCursor__16_2000 *)this,prc);
            CVar9 = this->m_mode;
          }
        }
        else {
          CVar9 = this->m_mode;
        }
      }
    }
  }
  else {
    CVar9 = this->m_mode;
  }
                    /* end of inlined section */
  uVar11 = (int)_range + 7U & 7;
  puVar7 = (ulong *)(((int)_range + 7U) - uVar11);
  *puVar7 = *puVar7 & -1L << (uVar11 + 1) * 8 | (ulong)DAT_003aa518 >> (7 - uVar11) * 8;
  _range = DAT_003aa518;
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
                    /* end of inlined section */
  if (CVar9 == kPiMenu) {
    if (this->m_pPiMenu == (EPiMenu *)0x0) {
      bVar8 = false;
    }
    else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      bVar8 = ((this->m_pPiMenu->field0_0x0).m_flags & 4) != 0;
    }
    if (bVar8) {
      return;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
    CVar9 = this->m_mode;
  }
  else {
    CVar9 = this->m_mode;
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
                    /* end of inlined section */
  if (CVar9 == kFloorTool) {
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
    GetSnapPos__11ESimsCursor((ESimsCursor__15_1743 *)&v1);
                    /* inlined from /eor/src2/engine/e_dl.h */
    pEVar10 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
    Id__5EMat4(pEVar10);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    vCursToSim.field0_0x0.d[0] = v1.field0_0x0.d[0];
    vCursToSim.field0_0x0.d[1] = v1.field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vCursToSim.field0_0x0.d[2] = 0.1;
    Translate__5EMat4RC5EVec3(pEVar10,&vCursToSim);
                    /* end of inlined section */
    (*(code *)prc->__vtable->SetMipMap)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,pEVar10);
    (*(code *)prc->__vtable[1].LineList)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,0x35ea40,0);
    Draw__7ERModelP3ERCUi(this->m_pBuild,prc,5);
    Draw__7ERModelP3ERCUi(this->m_pBuild02,prc,5);
    (*(code *)prc->__vtable[1].LineList)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,
               m_esmc_playerColorLight + *(int *)&this->field_0x30,0);
    Draw__7ERModelP3ERCUi(this->m_pBuildH,prc,5);
                    /* inlined from /eor/src2/engine/e_dl.h */
    pEVar10 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
    Id__5EMat4(pEVar10);
    uVar11 = GetDownButtons__11EControlleri(_ctrlPads[*(int *)&this->field_0x30],-1);
    if ((uVar11 & 0xc0) == 0) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      vCursToSim.field0_0x0.d[0] = v1.field0_0x0.d[0];
      vCursToSim.field0_0x0.d[1] = v1.field0_0x0.d[1];
      vCursToSim.field0_0x0.d[2] = 0.1;
      Translate__5EMat4RC5EVec3(pEVar10,&vCursToSim);
                    /* end of inlined section */
      pEVar12 = prc->__vtable;
    }
    else {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      vCursToSim.field0_0x0.d[0] = (this->m_vCursorAnchor).field0_0x0.d[0];
      vCursToSim.field0_0x0.d[1] = (this->m_vCursorAnchor).field0_0x0.d[1];
      vCursToSim.field0_0x0.d[2] = 0.1;
      Translate__5EMat4RC5EVec3(pEVar10,&vCursToSim);
                    /* end of inlined section */
      pEVar12 = prc->__vtable;
    }
    (*(code *)pEVar12->SetMipMap)((int)&prc->m_pdl + (int)*(short *)&pEVar12->MipMapSetup,pEVar10);
    (*(code *)prc->__vtable[1].LineList)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,0x35ea40,0);
    Draw__7ERModelP3ERCUi(this->m_pBuild,prc,5);
    fVar19 = this->m_scaletime + _dt;
    this->m_scaletime = fVar19;
    if (0.4 < fVar19) {
      iVar3 = this->m_ring_S1;
      this->m_ring_S1 = this->m_ring_S0;
      this->m_ring_S0 = iVar3;
      this->m_scaletime = 0.0;
    }
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
    fVar19 = this->m_scaletime * 2.5;
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_math.h */
    fVar19 = _range[this->m_ring_S0] +
             (fVar19 * -2.0 * fVar19 * fVar19 + fVar19 * 3.0 * fVar19) *
             (_range[this->m_ring_S1] - _range[this->m_ring_S0]);
    pEVar13 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
    __as__5EMat4RC5EMat4(pEVar13,pEVar10);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    vCursToSim.field0_0x0.d[2] = 1.0;
    vCursToSim.field0_0x0.d[0] = fVar19;
    vCursToSim.field0_0x0.d[1] = fVar19;
    PreScale__5EMat4RC5EVec3(pEVar13,&vCursToSim);
                    /* end of inlined section */
    (*(code *)prc->__vtable->SetMipMap)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,pEVar13);
    Draw__7ERModelP3ERCUi(this->m_pBuild02,prc,5);
    (*(code *)prc->__vtable->SetMipMap)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,pEVar10);
    (*(code *)prc->__vtable[1].LineList)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,
               m_esmc_playerColorLight + *(int *)&this->field_0x30,0);
    this_00 = this->m_pBuildH;
    goto LAB_00122764;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
  bVar8 = false;
  if ((CVar9 == kWallTool) || (CVar9 == kFenceTool)) {
    bVar8 = true;
  }
                    /* end of inlined section */
  if (bVar8) {
    pEVar17 = prc->m_pdl;
LAB_00122194:
    pEVar10 = (EMat4 *)Alloc__11EAllocGroupUii(&pEVar17->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
    Id__5EMat4(pEVar10);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    v1.field0_0x0 =
         (EVec2__null___1__1)*(EVec2__null___1__1 *)&(this->m_vCursorAnchor).field0_0x0.field1;
    Translate__5EMat4RC5EVec3(pEVar10,(EVec3 *)&v1);
                    /* end of inlined section */
    (*(code *)prc->__vtable->SetMipMap)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,pEVar10);
    fVar19 = this->m_scaletime + _dt;
    this->m_scaletime = fVar19;
    if (0.4 < fVar19) {
      iVar3 = this->m_ring_S1;
      this->m_ring_S1 = this->m_ring_S0;
      this->m_ring_S0 = iVar3;
      this->m_scaletime = 0.0;
    }
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
    fVar19 = this->m_scaletime * 2.5;
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
    bVar8 = false;
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_math.h */
    fVar19 = _range[this->m_ring_S0] +
             (fVar19 * -2.0 * fVar19 * fVar19 + fVar19 * 3.0 * fVar19) *
             (_range[this->m_ring_S1] - _range[this->m_ring_S0]);
    pEVar13 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
    __as__5EMat4RC5EMat4(pEVar13,pEVar10);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    v1.field0_0x0 = (EVec2__null___1__1)CONCAT44(fVar19,fVar19);
    PreScale__5EMat4RC5EVec3(pEVar13,(EVec3 *)&v1);
                    /* end of inlined section */
    (*(code *)prc->__vtable->SetMipMap)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,pEVar10);
    (*(code *)prc->__vtable[1].LineList)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,0x35ea40,0);
    Draw__7ERModelP3ERCUi(this->m_pBuild,prc,5);
    uVar11 = GetDownButtons__11EControlleri(_ctrlPads[*(int *)&this->field_0x30],-1);
    if (((uVar11 & 0xc0) != 0) || ((uVar11 & 0x4c) != 0)) {
      bVar8 = true;
    }
    pEVar12 = prc->__vtable;
    if (bVar8) {
      (*(code *)pEVar12->SetMipMap)((int)&prc->m_pdl + (int)*(short *)&pEVar12->MipMapSetup,pEVar13)
      ;
      Draw__7ERModelP3ERCUi(this->m_pBuild02,prc,5);
      pEVar12 = prc->__vtable;
    }
    (*(code *)pEVar12->SetMipMap)((int)&prc->m_pdl + (int)*(short *)&pEVar12->MipMapSetup,pEVar10);
    (*(code *)prc->__vtable[1].LineList)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,
               m_esmc_playerColorLight + *(int *)&this->field_0x30,0);
    Draw__7ERModelP3ERCUi(this->m_pBuildH,prc,5);
    if (bVar8) {
                    /* end of inlined section */
      FindWallDragVert__11ESimsCursorRC5EVec2R5EVec2
                ((ESimsCursor__16_2000 *)this,&this->m_vCursorAnchor,&v1);
                    /* inlined from /eor/src2/engine/e_dl.h */
      pEVar10 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
      Id__5EMat4(pEVar10);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
      local_d0 = v1.field0_0x0.d[0];
      local_cc = v1.field0_0x0.d[1];
      local_c8 = 0x3dcccccd;
      Translate__5EMat4RC5EVec3(pEVar10,(EVec3 *)&local_d0);
                    /* end of inlined section */
      (*(code *)prc->__vtable->SetMipMap)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,pEVar10);
      (*(code *)prc->__vtable[1].LineList)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,0x35ea40,0);
      Draw__7ERModelP3ERCUi(this->m_pBuild,prc,5);
      (*(code *)prc->__vtable[1].LineList)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,
                 m_esmc_playerColorLight + *(int *)&this->field_0x30,0);
      this_00 = this->m_pBuildH;
      goto LAB_00122764;
    }
LAB_00122b20:
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
    pEVar15 = this->m_pCam;
  }
  else {
    if (CVar9 == kPaperTool) {
                    /* inlined from /eor/src2/engine/e_rc.h */
      pEVar17 = prc->m_pdl;
      goto LAB_00122194;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
                    /* end of inlined section */
    if (this->m_pCam->m_mode != 4) {
      if (this->_vb1647->m_state == PAUSED_CURSOR_STATE) {
                    /* inlined from /eor/src2/engine/e_rc.h */
        pEVar10 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
        Id__5EMat4(pEVar10);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
        v1.field0_0x0 = (EVec2__null___1__1)*(EVec2__null___1__1 *)&(this->m_vPos).field0_0x0;
        Translate__5EMat4RC5EVec3(pEVar10,(EVec3 *)&v1);
                    /* end of inlined section */
        (*(code *)prc->__vtable->SetMipMap)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,pEVar10);
        (*(code *)prc->__vtable[1].LineList)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,0x35ea40,0);
        Draw__7ERModelP3ERCUi(this->m_pBuy,prc,5);
        (*(code *)prc->__vtable->SetMipMap)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,pEVar10);
        (*(code *)prc->__vtable[1].LineList)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,
                   m_esmc_playerColorLight + *(int *)&this->field_0x30,0);
        Draw__7ERModelP3ERCUi(this->m_pBuyH,prc,5);
        (*(code *)prc->__vtable[1].LineList)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,0x35ea40,0);
        this_00 = this->m_pBuy02;
        goto LAB_00122764;
      }
                    /* inlined from /eor/src2/engine/e_rc.h */
      pEVar10 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
      Id__5EMat4(pEVar10);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      v1.field0_0x0 = (EVec2__null___1__1)*(EVec2__null___1__1 *)&(this->m_vPos).field0_0x0;
      Translate__5EMat4RC5EVec3(pEVar10,(EVec3 *)&v1);
                    /* end of inlined section */
      fVar19 = 0.0;
      (*(code *)prc->__vtable->SetMipMap)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,pEVar10);
      (*(code *)prc->__vtable[1].LineList)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,0x35ea40,0);
      Draw__7ERModelP3ERCUi(this->m_pMainBase,prc,5);
      (*(code *)prc->__vtable[1].LineList)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,
                 m_esmc_playerColorLight + *(int *)&this->field_0x30,0);
      Draw__7ERModelP3ERCUi(this->m_pMainBaseH,prc,5);
      pcVar4 = _globals._pSelectedSims[*(int *)&this->field_0x30];
      if (pcVar4 == (cXPerson__150_1300 *)0x0) {
        pEVar17 = prc->m_pdl;
      }
      else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        v1.field0_0x0 = (EVec2__null___1__1)(null___1__1)0x0;
                    /* end of inlined section */
        piVar14 = (int *)(*(code *)pcVar4->__vtable->GetPersonImplementation)
                                   ((int)&pcVar4->_vb1187 +
                                    (int)*(short *)&pcVar4->__vtable->GetControllingObject);
        (**(code **)(*piVar14 + 0x104))((int)piVar14 + (int)*(short *)(*piVar14 + 0x100),1,&v1);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        if (v1.field0_0x0.d[0] * v1.field0_0x0.d[0] + v1.field0_0x0.d[1] * v1.field0_0x0.d[1] <
            0.0001) {
          pcVar5 = _globals._pSelectedSims[*(int *)&this->field_0x30]->_vb1187;
          pcVar6 = pcVar5->__vtable;
          (*(code *)pcVar6[1].TestIntersection)
                    (aCStack_c0,(int)&pcVar5->_vb1121 + (int)*(short *)&pcVar6[1].IsInWorld);
          GetEVec3M__C7CTilePt(&vCursToSim,aCStack_c0);
          v1.field0_0x0 =
               (EVec2__null___1__1)CONCAT44(vCursToSim.field0_0x0.d[1],vCursToSim.field0_0x0.d[0]);
          puVar1 = (undefined *)((int)&v1.field0_0x0 + 7);
          uVar11 = (uint)puVar1 & 7;
          puVar7 = (ulong *)(puVar1 + -uVar11);
          *puVar7 = *puVar7 & -1L << (uVar11 + 1) * 8 | (ulong)v1.field0_0x0 >> (7 - uVar11) * 8;
          ___7CTilePt(aCStack_c0,2);
        }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vCursToSim.field0_0x0.d[0] = v1.field0_0x0.d[0] - (this->m_vPos).field0_0x0.d[0];
                    /* end of inlined section */
        vCursToSim.field0_0x0.d[2] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vCursToSim.field0_0x0.d[1] = v1.field0_0x0.d[1] - (this->m_vPos).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        fVar19 = atan2f(vCursToSim.field0_0x0.d[1],vCursToSim.field0_0x0.d[0]);
        fVar19 = fVar19 - 1.570796;
                    /* inlined from /eor/src2/engine/e_rc.h */
        pEVar17 = prc->m_pdl;
      }
      pEVar10 = (EMat4 *)Alloc__11EAllocGroupUii(&pEVar17->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
      Id__5EMat4(pEVar10);
      RotateZ__5EMat4f(pEVar10,fVar19);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
      v1.field0_0x0 = (EVec2__null___1__1)*(EVec2__null___1__1 *)&(this->m_vPos).field0_0x0;
      PostTranslate__5EMat4RC5EVec3(pEVar10,(EVec3 *)&v1);
                    /* end of inlined section */
      (*(code *)prc->__vtable->SetMipMap)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,pEVar10);
      (*(code *)prc->__vtable[1].LineList)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,0x35ea40,0);
      Draw__7ERModelP3ERCUi(this->m_pArrow,prc,5);
      (*(code *)prc->__vtable[1].LineList)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,
                 m_esmc_playerColorLight + *(int *)&this->field_0x30,0);
      Draw__7ERModelP3ERCUi(this->m_pArrowH,prc,5);
                    /* inlined from /eor/src2/engine/e_dl.h */
      pEVar10 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
      Id__5EMat4(pEVar10);
      fVar19 = this->m_fCursorTheta + _dt * 3.0;
      this->m_fCursorTheta = fVar19;
      if (0.0 <= fVar19) {
        if (6.283185 < fVar19) {
          fVar19 = 0.0;
        }
      }
      else {
        fVar19 = 6.283185;
      }
      this->m_fCursorTheta = fVar19;
      RotateZ__5EMat4f(pEVar10,fVar19);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
      v1.field0_0x0 = (EVec2__null___1__1)*(EVec2__null___1__1 *)&(this->m_vPos).field0_0x0;
      PostTranslate__5EMat4RC5EVec3(pEVar10,(EVec3 *)&v1);
                    /* end of inlined section */
      (*(code *)prc->__vtable->SetMipMap)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,pEVar10);
      Draw__7ERModelP3ERCUi(this->m_pMainCirDash,prc,5);
      goto LAB_00122b20;
    }
                    /* inlined from /eor/src2/engine/e_rc.h */
    pEVar10 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
    Id__5EMat4(pEVar10);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    v1.field0_0x0 = (EVec2__null___1__1)*(EVec2__null___1__1 *)&(this->m_vPos).field0_0x0;
    Translate__5EMat4RC5EVec3(pEVar10,(EVec3 *)&v1);
                    /* end of inlined section */
    (*(code *)prc->__vtable->SetMipMap)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,pEVar10);
    (*(code *)prc->__vtable[1].LineList)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,0x35ea40,0);
    Draw__7ERModelP3ERCUi(this->m_pTrackBase,prc,5);
    (*(code *)prc->__vtable[1].LineList)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,
               m_esmc_playerColorLight + *(int *)&this->field_0x30,0);
    Draw__7ERModelP3ERCUi(this->m_pTrackH,prc,5);
                    /* inlined from /eor/src2/engine/e_dl.h */
    pEVar10 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
    Id__5EMat4(pEVar10);
    fVar19 = this->m_fCursorTheta + _dt * 3.0;
    this->m_fCursorTheta = fVar19;
    if (0.0 <= fVar19) {
      if (6.283185 < fVar19) {
        fVar19 = 0.0;
      }
    }
    else {
      fVar19 = 6.283185;
    }
    this->m_fCursorTheta = fVar19;
    RotateZ__5EMat4f(pEVar10,fVar19);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    v1.field0_0x0 = (EVec2__null___1__1)*(EVec2__null___1__1 *)&(this->m_vPos).field0_0x0;
    PostTranslate__5EMat4RC5EVec3(pEVar10,(EVec3 *)&v1);
                    /* end of inlined section */
    (*(code *)prc->__vtable->SetMipMap)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,pEVar10);
    this_00 = this->m_pTrackCirDash;
LAB_00122764:
    Draw__7ERModelP3ERCUi(this_00,prc,5);
    pEVar15 = this->m_pCam;
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
                    /* end of inlined section */
  if (pEVar15->m_mode == 4) {
    return;
  }
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(this->m_pLineShdr,prc,0);
  fVar19 = GetCurZoomRatio__8ESimsCam(this->m_pCam);
                    /* inlined from /eor/src2/common/math/e_math.h */
  fVar19 = fVar19 * 1.5 + 1.0;
  pEVar10 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
  Id__5EMat4(pEVar10);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  v1.field0_0x0 = (EVec2__null___1__1)(null___1__1)0x3f8000003f800000;
  Scale__5EMat4RC5EVec3(pEVar10,(EVec3 *)&v1);
  bVar8 = false;
  if ((this->m_mode == kWallTool) || (this->m_mode == kFenceTool)) {
    bVar8 = true;
  }
                    /* end of inlined section */
  if (bVar8) {
    fVar18 = (this->m_vCursorAnchor).field0_0x0.d[0];
  }
  else {
    if (this->m_mode != kPaperTool) {
                    /* end of inlined section */
      if (this->m_mode != kFloorTool) {
                    /* end of inlined section */
        (pEVar10->field0_0x0).d[3][0] = (this->m_vPos).field0_0x0.d[0];
        fVar19 = (this->m_vPos).field0_0x0.d[1];
        (pEVar10->field0_0x0).d[3][2] = 0.0;
        (pEVar10->field0_0x0).d[3][1] = fVar19;
        (*(code *)prc->__vtable->SetMipMap)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,pEVar10);
        (*(code *)prc->__vtable->DisableRasterModes)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->EnableRasterModes,
                   this->m_pLineDl);
        return;
      }
      uVar11 = GetDownButtons__11EControlleri(_ctrlPads[*(int *)&this->field_0x30],-1);
      if ((uVar11 & 0xc0) == 0) {
        GetSnapPos__11ESimsCursor((ESimsCursor__15_1743 *)&v1);
        (pEVar10->field0_0x0).d[3][0] = v1.field0_0x0.d[0];
      }
      else {
                    /* end of inlined section */
        (pEVar10->field0_0x0).d[3][0] = (this->m_vCursorAnchor).field0_0x0.d[0];
        v1.field0_0x0.d[1] = (this->m_vCursorAnchor).field0_0x0.d[1];
      }
      (pEVar10->field0_0x0).d[3][2] = 0.1;
      (pEVar10->field0_0x0).d[3][1] = v1.field0_0x0.d[1];
      pEVar12 = prc->__vtable;
      goto LAB_00122d44;
    }
                    /* end of inlined section */
    fVar18 = (this->m_vCursorAnchor).field0_0x0.d[0];
  }
  (pEVar10->field0_0x0).d[3][0] = fVar18;
  fVar18 = (this->m_vCursorAnchor).field0_0x0.d[1];
  (pEVar10->field0_0x0).d[3][2] = 0.1;
  (pEVar10->field0_0x0).d[3][1] = fVar18;
  (*(code *)prc->__vtable->SetMipMap)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,pEVar10);
  (*(code *)prc->__vtable->DisableRasterModes)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->EnableRasterModes,this->m_pLineDl);
  uVar11 = GetDownButtons__11EControlleri(_ctrlPads[*(int *)&this->field_0x30],-1);
  if (((uVar11 & 0xc0) == 0) && ((uVar11 & 0x4c) == 0)) {
    return;
  }
                    /* end of inlined section */
  FindWallDragVert__11ESimsCursorRC5EVec2R5EVec2
            ((ESimsCursor__16_2000 *)this,&this->m_vCursorAnchor,&v1);
                    /* inlined from /eor/src2/engine/e_dl.h */
  pEVar10 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
  Id__5EMat4(pEVar10);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  vCursToSim.field0_0x0.d[0] = 1.0;
  vCursToSim.field0_0x0.d[1] = 1.0;
  vCursToSim.field0_0x0.d[2] = fVar19;
  Scale__5EMat4RC5EVec3(pEVar10,&vCursToSim);
                    /* end of inlined section */
  (pEVar10->field0_0x0).d[3][0] = v1.field0_0x0.d[0];
  (pEVar10->field0_0x0).d[3][2] = 0.1;
  (pEVar10->field0_0x0).d[3][1] = v1.field0_0x0.d[1];
  pEVar12 = prc->__vtable;
LAB_00122d44:
  (*(code *)pEVar12->SetMipMap)((int)&prc->m_pdl + (int)*(short *)&pEVar12->MipMapSetup,pEVar10);
  (*(code *)prc->__vtable->DisableRasterModes)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->EnableRasterModes,this->m_pLineDl);
  return;
}

float ESimsCursor::GetCurorRad() {
	float a;
	float b;
	
  float fVar1;
  
  fVar1 = GetCurZoomRatio__8ESimsCam(this->m_pCam);
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
  return _cursRadMin + fVar1 * (_cursRadMax - _cursRadMin);
}

void ESimsCursor::TurnObject(bool left) {
	cXCursorObject *mMouseObj;
	cXObject *floater;
	int theta;
	FTilePt origloc;
	
  cXCursorObject__15_1968 *pcVar1;
  cXObject__15_2008 *pcVar2;
  cXObject__15_2008__vtable *pcVar3;
  cXObject__47_3244 *pObj;
  int iVar4;
  long lVar5;
  int iVar6;
  FTilePt origloc;
  
  pcVar1 = this->m_pCursorObject;
  pObj = (cXObject__47_3244 *)
         (**(code **)&pcVar1->__vtable->field_0x44)
                   ((int)&pcVar1->_vb5522 + (int)*(short *)&pcVar1->__vtable->field_0x40);
  iVar4 = (*(code *)pObj->__vtable->ReconType)
                    ((int)&pObj->_vb5112 + (int)*(short *)&pObj->__vtable->ReconStream,1);
  if (left) {
    iVar4 = iVar4 + 2;
  }
  else {
    iVar4 = iVar4 + -2;
  }
  iVar6 = 6;
  if ((-1 < iVar4) && (iVar6 = iVar4, 6 < iVar4)) {
    iVar6 = 0;
  }
  (**(code **)&pcVar1->__vtable->field_0x54)
            ((int)&pcVar1->_vb5522 + (int)*(short *)&pcVar1->__vtable->field_0x50,iVar6);
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
  PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xc21c2a9);
                    /* end of inlined section */
  pcVar2 = pcVar1->_vb5522->_vb2008;
  pcVar3 = pcVar2->__vtable;
  (*(code *)pcVar3[1].UserCanPickup)
            ((int)&pcVar2->_vb3534 + (int)*(short *)&pcVar3[1].UserPlace,&origloc);
  pcVar2 = pcVar1->_vb5522->_vb2008;
  pcVar3 = pcVar2->__vtable;
  lVar5 = (*(code *)pcVar3->GetAttr)
                    ((int)&pcVar2->_vb3534 + (int)*(short *)&pcVar3->GetTemp,&origloc,1,0,0);
  if (lVar5 != 0) {
    pcVar2 = pcVar1->_vb5522->_vb2008;
    pcVar3 = pcVar2->__vtable;
    (*(code *)pcVar3->GetAdultAnimTable)
              ((int)&pcVar2->_vb3534 + (int)*(short *)&pcVar3->GetModule,&origloc,1,0,0);
  }
  OrientObjectInstance__FP8cXObject(pObj);
  return;
}

void ESimsCursor::GetSnapPos(int &x, int &y) {
	EVec2 vRet;
	EHouse *this;
	
  float fVar1;
  float fVar2;
  int iVar3;
  EVec2 vRet;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar2 = (this->m_vPos).field0_0x0.d[0] - ((_globals._pCurHouse)->m_vHouse_off).field0_0x0.d[0];
  fVar1 = (this->m_vPos).field0_0x0.d[1] - ((_globals._pCurHouse)->m_vHouse_off).field0_0x0.d[1];
  iVar3 = (int)fVar2;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  *x = iVar3;
  *y = (int)fVar1;
  if (0.5 <= fVar2 - (float)iVar3) {
    *x = *x + 1;
                    /* end of inlined section */
  }
  if (0.5 <= fVar1 - (float)(int)fVar1) {
    *y = *y + 1;
  }
  return;
}

void ESimsCursor::SnapToWallVert(EVec2 &vOutPos) {
	EVec2 vRet;
	int xtmp;
	int ytmp;
	EVec2 vCenter;
	EVec2 vUL;
	EHouse *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  EVec2 vRet;
  EVec2 vCenter;
  EVec2 vUL;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar5 = (this->m_vPos).field0_0x0.d[0] - ((_globals._pCurHouse)->m_vHouse_off).field0_0x0.d[0];
  fVar8 = (this->m_vPos).field0_0x0.d[1] - ((_globals._pCurHouse)->m_vHouse_off).field0_0x0.d[1];
  iVar6 = (int)fVar5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  iVar7 = (int)fVar8;
                    /* end of inlined section */
  if (0.5 <= fVar5 - (float)iVar6) {
    iVar6 = iVar6 + 1;
  }
                    /* end of inlined section */
  if (0.5 <= fVar8 - (float)iVar7) {
    iVar7 = iVar7 + 1;
  }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar4 = CONCAT44((float)iVar7 + 0.5 + ((_globals._pCurHouse)->m_vHouse_off).field0_0x0.d[1],
                   ((float)iVar6 - 0.5) + ((_globals._pCurHouse)->m_vHouse_off).field0_0x0.d[0]);
  puVar1 = (undefined *)((int)&vOutPos->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
  uVar2 = (uint)vOutPos & 7;
  *(ulong *)((int)vOutPos - uVar2) =
       uVar4 << uVar2 * 8 |
       *(ulong *)((int)vOutPos - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  return;
}

EVec2 ESimsCursor::GetSnapPos() {
	int xint;
	int yint;
	EVec2 vRet;
	EHouse *this;
	EVec2 *this;
	
  ESimsCursor__15_1743 *in_a1_lo;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  float fVar1;
  EVec2 vRet;
  int xint;
  int yint;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  GetSnapPos__11ESimsCursorRiT1(in_a1_lo,&xint,&yint);
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar1 = ((_globals._pCurHouse)->m_vHouse_off).field0_0x0.d[0];
  (this->field0_0x0).__vtable =
       (Panelstateman__vtable *)
       ((float)yint + ((_globals._pCurHouse)->m_vHouse_off).field0_0x0.d[1]);
  (this->field0_0x0).m_state = (Panelstate)((float)xint + fVar1);
  return (EVec2)(EVec2__null___1__1)(long)(int)this;
}

void ESimsCursor::ClearPlacementError(cXObject *pFloat) {
	ISimInstance *pinst;
	CTilePt tipt;
	cXObject *pContained;
	ISimInstance *pISimContained;
	cXMTObject *mtobj;
	cXObject *ptr;
	cXObject *pContained;
	ISimInstance *pISimContained;
	TNodeList<ISimInstance *> list;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  short sVar1;
  EStorable__vtable *pEVar2;
  ISimsObjectModel__26_3162 *pIVar3;
  int *piVar4;
  code *pcVar5;
  ISimsObjectModel__26_3162 *this_00;
  long lVar6;
  long lVar7;
  int iVar8;
  int *piVar9;
  ENodeListNode *pEVar10;
  CTilePt tipt;
  TNodeList_ISimInstance___ list;
  
  pIVar3 = (ISimsObjectModel__26_3162 *)GetObjectInstance__FP8cXObject((cXObject__47_3244 *)pFloat);
  if (pIVar3 != (ISimsObjectModel__26_3162 *)0x0) {
    pEVar2 = (pIVar3->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
    lVar6 = (*(code *)pEVar2[8].GetTypeVersion)
                      ((int)((pIVar3->field0_0x0).field0_0x0.field0_0x0.m_otd.m_minPos + -7) +
                       (int)*(short *)&pEVar2[8].GetTypeKey);
    if (lVar6 == 0) {
      iVar8 = *(int *)&(pIVar3->field0_0x0).field_0x130;
      (**(code **)(iVar8 + 0x14))
                ((undefined *)
                 ((int)((pIVar3->field0_0x0).m_highlight + -6) + (int)*(short *)(iVar8 + 0x10)));
      (*(code *)pFloat->__vtable[1].TestIntersection)
                (&tipt,(int)&pFloat->_vb3534 + (int)*(short *)&pFloat->__vtable[1].IsInWorld);
      pEVar2 = (pIVar3->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar2[8].GetTypeName)
                ((int)((pIVar3->field0_0x0).field0_0x0.field0_0x0.m_otd.m_minPos + -7) +
                 (int)*(short *)&pEVar2[8].GetTypeInfo,0);
      ReCalcLights3__16ISimsObjectModel(pIVar3);
      lVar6 = (*(code *)pFloat->__vtable[1].GetFrontFaceDirection)
                        ((int)&pFloat->_vb3534 +
                         (int)*(short *)&pFloat->__vtable[1].GetInteractionLeader);
      if (lVar6 == 0) {
        lVar6 = (*(code *)pFloat->__vtable[1].Dirty)
                          ((int)&pFloat->_vb3534 +
                           (int)*(short *)&pFloat->__vtable[1].UpdateSimFlags,0);
        if (lVar6 != 0) {
          iVar8 = *(int *)lVar6;
          while( true ) {
            lVar7 = (**(code **)(*(int *)(iVar8 + 0x1c) + 0x84))
                              (iVar8 + *(short *)(*(int *)(iVar8 + 0x1c) + 0x80));
            pIVar3 = (ISimsObjectModel__26_3162 *)lVar7;
            if (lVar7 != 0) {
              iVar8 = *(int *)&(pIVar3->field0_0x0).field_0x130;
              (**(code **)(iVar8 + 0x14))
                        ((undefined *)
                         ((int)((pIVar3->field0_0x0).m_highlight + -6) +
                         (int)*(short *)(iVar8 + 0x10)));
              pEVar2 = (pIVar3->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
              (*(code *)pEVar2[8].GetTypeName)
                        ((int)((pIVar3->field0_0x0).field0_0x0.field0_0x0.m_otd.m_minPos + -7) +
                         (int)*(short *)&pEVar2[8].GetTypeInfo,0);
              ReCalcLights3__16ISimsObjectModel(pIVar3);
            }
            iVar8 = *(int *)((int)lVar6 + 4);
            lVar6 = (**(code **)(iVar8 + 0x25c))((int)lVar6 + (int)*(short *)(iVar8 + 600),0);
            if (lVar6 == 0) break;
            iVar8 = *(int *)lVar6;
          }
        }
      }
      else {
                    /* inlined from ../MSrc/SCID.h */
        piVar4 = (int *)0x0;
        if (pFloat != (cXObject__15_2008 *)0x0) {
          piVar4 = (int *)_dyncastimpl__7TreeSim4SCID(pFloat->_vb3534,cXMTObjectID);
        }
                    /* end of inlined section */
        lVar6 = (**(code **)(piVar4[1] + 0x4c))((int)piVar4 + (int)*(short *)(piVar4[1] + 0x48));
        if (lVar6 == 0) {
          sVar1 = *(short *)(piVar4[1] + 0x10);
          pcVar5 = *(code **)(piVar4[1] + 0x14);
          while (piVar4 = (int *)(*pcVar5)((int)piVar4 + (int)sVar1), piVar4 != (int *)0x0) {
            iVar8 = *(int *)(*piVar4 + 4);
            pcVar5 = *(code **)(iVar8 + 0x25c);
            iVar8 = *piVar4 + (int)*(short *)(iVar8 + 600);
            while (lVar6 = (*pcVar5)(iVar8,0), lVar6 != 0) {
              piVar9 = (int *)lVar6;
              iVar8 = *(int *)(*piVar9 + 0x1c);
              lVar6 = (**(code **)(iVar8 + 0x84))(*piVar9 + (int)*(short *)(iVar8 + 0x80));
              pIVar3 = (ISimsObjectModel__26_3162 *)lVar6;
              if (lVar6 != 0) {
                iVar8 = *(int *)&(pIVar3->field0_0x0).field_0x130;
                (**(code **)(iVar8 + 0x14))
                          ((undefined *)
                           ((int)((pIVar3->field0_0x0).m_highlight + -6) +
                           (int)*(short *)(iVar8 + 0x10)));
                pEVar2 = (pIVar3->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
                (*(code *)pEVar2[8].GetTypeName)
                          ((int)((pIVar3->field0_0x0).field0_0x0.field0_0x0.m_otd.m_minPos + -7) +
                           (int)*(short *)&pEVar2[8].GetTypeInfo,0);
                ReCalcLights3__16ISimsObjectModel(pIVar3);
              }
              pcVar5 = *(code **)(piVar9[1] + 0x25c);
              iVar8 = (int)piVar9 + (int)*(short *)(piVar9[1] + 600);
            }
            sVar1 = *(short *)(piVar4[1] + 0x18);
            pcVar5 = *(code **)(piVar4[1] + 0x1c);
          }
        }
      }
      ___7CTilePt(&tipt,2);
    }
    else {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      list.field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
      list.field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
      GetObjectInstance__FP8cXObjectRt9TNodeList1ZP12ISimInstance(pFloat,&list);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
      if (list.field0_0x0.m_l.m_pHead != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        piVar4 = (int *)(list.field0_0x0.m_l.m_pHead)->data;
        pEVar10 = list.field0_0x0.m_l.m_pHead;
        while( true ) {
                    /* end of inlined section */
          (**(code **)(piVar4[0x4c] + 0x14))((int)piVar4 + *(short *)(piVar4[0x4c] + 0x10) + 0x130);
          (**(code **)(*piVar4 + 300))((int)piVar4 + (int)*(short *)(*piVar4 + 0x128),0);
          this_00 = (ISimsObjectModel__26_3162 *)
                    DynamicCast__9EStorableP9ETypeInfo
                              ((EStorable *)pIVar3,&_16ISimsObjectModel_m_typeInfo);
          ReCalcLights3__16ISimsObjectModel(this_00);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
          pEVar10 = pEVar10->pNext;
                    /* end of inlined section */
          if (pEVar10 == (ENodeListNode *)0x0) break;
          piVar4 = (int *)pEVar10->data;
        }
      }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      RemoveAll__9ENodeList(&list.field0_0x0);
                    /* end of inlined section */
    }
  }
  return;
}

void ESimsCursor::Float() {
	cXCursorObject *mMouseObj;
	FTilePt origloc;
	int xint;
	int yint;
	FTilePt startTile;
	cXObject *pFloat;
	Int inX;
	Int inY;
	Int integer;
	Int integer;
	ISimInstance *pinst;
	CTilePt tipt;
	cXObject *pContained;
	ISimInstance *pISimContained;
	cXMTObject *mtobj;
	cXObject *ptr;
	cXObject *pContained;
	ISimInstance *pISimContained;
	TNodeList<ISimInstance *> list;
	NLIterator i;
	CTilePt tipt;
	NLIterator i;
	NLIterator i;
	
  short sVar1;
  cXCursorObject__15_1968 *pcVar2;
  cXMTObject__15_5522 *pcVar3;
  ISimsObjectModel__26_3162 *pIVar4;
  EStorable__vtable *pEVar5;
  int *piVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ISimsObjectModel__26_3162 *this_00;
  long lVar11;
  long lVar12;
  cXCursorObject__15_1968__vtable *pcVar13;
  cXObject__15_2008__vtable *pcVar14;
  cXObject__15_2008 *pcVar15;
  undefined8 unaff_s0;
  int *piVar16;
  undefined8 unaff_s1;
  ENodeListNode *pEVar17;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  FTilePt origloc;
  FTilePt startTile;
  CTilePt tipt;
  TNodeList_ISimInstance___ list;
  int yint;
  int xint;
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
  
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s7;
  uStack_1c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_30 = (undefined4)unaff_s6;
  uStack_2c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_40 = (undefined4)unaff_s5;
  uStack_3c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
  pcVar2 = this->m_pCursorObject;
  pcVar15 = pcVar2->_vb5522->_vb2008;
  pcVar14 = pcVar15->__vtable;
  (*(code *)pcVar14[1].UserCanPickup)
            ((int)&pcVar15->_vb3534 + (int)*(short *)&pcVar14[1].UserPlace,&origloc);
  pcVar15 = pcVar2->_vb5522->_vb2008;
  pcVar14 = pcVar15->__vtable;
  lVar11 = (*(code *)pcVar14->GetID)((int)&pcVar15->_vb3534 + (int)*(short *)&pcVar14->GetTypeName);
  pcVar3 = pcVar2->_vb5522;
  if (lVar11 != 0) {
    pcVar14 = pcVar3->_vb2008->__vtable;
    (*(code *)pcVar14->GetData)((int)&pcVar3->_vb2008->_vb3534 + (int)*(short *)&pcVar14->GetRect);
    pcVar3 = pcVar2->_vb5522;
  }
  pcVar14 = pcVar3->_vb2008->__vtable;
  (*(code *)pcVar14->GetAdultAnimTable)
            ((int)&pcVar3->_vb2008->_vb3534 + (int)*(short *)&pcVar14->GetModule,&origloc,1,0,0);
  pcVar15 = pcVar2->_vb5522->_vb2008;
  pcVar14 = pcVar15->__vtable;
  lVar11 = (*(code *)pcVar14->GetID)((int)&pcVar15->_vb3534 + (int)*(short *)&pcVar14->GetTypeName);
  if (lVar11 != 0) {
    pcVar15 = pcVar2->_vb5522->_vb2008;
    pcVar14 = pcVar15->__vtable;
    (*(code *)pcVar14->GetData)((int)&pcVar15->_vb3534 + (int)*(short *)&pcVar14->GetRect);
  }
  GetSnapPos__11ESimsCursorRiT1(this,&yint,&xint);
                    /* inlined from ../MSrc/tiles.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/tiles.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/tiles.h */
  startTile.x.whole = xint << 4 | 8;
  startTile.y.whole = yint << 4 | 8;
                    /* end of inlined section */
  lVar11 = (*(code *)_5Globs_pFixedWorld->__vtable->SetWallStorage)
                     ((int)&_5Globs_pFixedWorld->__vtable +
                      (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetWallStorage,&startTile);
  if (lVar11 == 0) {
    pcVar15 = pcVar2->_vb5522->_vb2008;
    pcVar14 = pcVar15->__vtable;
    lVar11 = (*(code *)pcVar14->GetAttr)
                       ((int)&pcVar15->_vb3534 + (int)*(short *)&pcVar14->GetTemp,&startTile,1,0,0);
    if (lVar11 != 0) {
      pcVar15 = pcVar2->_vb5522->_vb2008;
      pcVar14 = pcVar15->__vtable;
      (*(code *)pcVar14->GetAdultAnimTable)
                ((int)&pcVar15->_vb3534 + (int)*(short *)&pcVar14->GetModule,&startTile,1,0,0);
    }
    pcVar13 = pcVar2->__vtable;
  }
  else {
    pcVar13 = pcVar2->__vtable;
  }
  lVar11 = (**(code **)&pcVar13->field_0x44)
                     ((int)&pcVar2->_vb5522 + (int)*(short *)&pcVar13->field_0x40);
  if (lVar11 == 0) {
    return;
  }
  pcVar15 = (cXObject__15_2008 *)lVar11;
  pIVar4 = (ISimsObjectModel__26_3162 *)GetObjectInstance__FP8cXObject((cXObject__47_3244 *)pcVar15)
  ;
  if (pIVar4 == (ISimsObjectModel__26_3162 *)0x0) {
    return;
  }
  pEVar5 = (pIVar4->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
  lVar12 = (*(code *)pEVar5[8].GetTypeVersion)
                     ((int)((pIVar4->field0_0x0).field0_0x0.field0_0x0.m_otd.m_minPos + -7) +
                      (int)*(short *)&pEVar5[8].GetTypeKey);
  if (lVar12 != 0) {
    list.field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    list.field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
    GetObjectInstance__FP8cXObjectRt9TNodeList1ZP12ISimInstance(pcVar15,&list);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
    if (list.field0_0x0.m_l.m_pHead == (ENodeListNode *)0x0) {
LAB_00123a54:
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      RemoveAll__9ENodeList(&list.field0_0x0);
      return;
                    /* end of inlined section */
    }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    piVar6 = (int *)(list.field0_0x0.m_l.m_pHead)->data;
    pEVar17 = list.field0_0x0.m_l.m_pHead;
    do {
                    /* end of inlined section */
      (**(code **)(piVar6[0x4c] + 0x14))((int)piVar6 + *(short *)(piVar6[0x4c] + 0x10) + 0x130);
      (*(code *)pcVar15->__vtable[1].TestIntersection)
                (&tipt,(int)&pcVar15->_vb3534 + (int)*(short *)&pcVar15->__vtable[1].IsInWorld);
      iVar8 = GetX__C7CTilePt(&tipt);
      if (iVar8 < 0) {
        iVar8 = *piVar6;
LAB_001239f8:
        (**(code **)(iVar8 + 300))((int)piVar6 + (int)*(short *)(iVar8 + 0x128),1);
        pEVar17 = pEVar17->pNext;
      }
      else {
        iVar8 = GetX__C7CTilePt(&tipt);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        iVar9 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                          ((int)&_5Globs_pFixedWorld->__vtable +
                           (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
        if (iVar9 < iVar8) {
          iVar8 = *piVar6;
          goto LAB_001239f8;
        }
        iVar8 = GetY__C7CTilePt(&tipt);
        if (iVar8 < 0) {
          iVar8 = *piVar6;
          goto LAB_001239f8;
        }
        iVar9 = GetY__C7CTilePt(&tipt);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        iVar10 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                           ((int)&_5Globs_pFixedWorld->__vtable +
                            (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
        iVar8 = *piVar6;
        if (iVar10 < iVar9) goto LAB_001239f8;
        (**(code **)(iVar8 + 300))((int)piVar6 + (int)*(short *)(iVar8 + 0x128),0);
        this_00 = (ISimsObjectModel__26_3162 *)
                  DynamicCast__9EStorableP9ETypeInfo
                            ((EStorable *)pIVar4,&_16ISimsObjectModel_m_typeInfo);
        ReCalcLights3__16ISimsObjectModel(this_00);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar17 = pEVar17->pNext;
      }
                    /* end of inlined section */
      ___7CTilePt(&tipt,2);
      if (pEVar17 == (ENodeListNode *)0x0) goto LAB_00123a54;
      piVar6 = (int *)pEVar17->data;
    } while( true );
  }
  iVar8 = *(int *)&(pIVar4->field0_0x0).field_0x130;
  (**(code **)(iVar8 + 0x14))
            ((undefined *)
             ((int)((pIVar4->field0_0x0).m_highlight + -6) + (int)*(short *)(iVar8 + 0x10)));
  (*(code *)pcVar15->__vtable[1].TestIntersection)
            (&tipt,(int)&pcVar15->_vb3534 + (int)*(short *)&pcVar15->__vtable[1].IsInWorld);
  iVar8 = GetX__C7CTilePt(&tipt);
  if (iVar8 < 0) {
    pEVar5 = (pIVar4->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
  }
  else {
    iVar8 = GetX__C7CTilePt(&tipt);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    iVar9 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                      ((int)&_5Globs_pFixedWorld->__vtable +
                       (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
    if (iVar9 < iVar8) {
      pEVar5 = (pIVar4->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
    }
    else {
      iVar8 = GetY__C7CTilePt(&tipt);
      if (iVar8 < 0) {
        pEVar5 = (pIVar4->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
      }
      else {
        iVar8 = GetY__C7CTilePt(&tipt);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        iVar9 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                          ((int)&_5Globs_pFixedWorld->__vtable +
                           (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
        pEVar5 = (pIVar4->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
        if (iVar8 <= iVar9) {
          (*(code *)pEVar5[8].GetTypeName)
                    ((int)((pIVar4->field0_0x0).field0_0x0.field0_0x0.m_otd.m_minPos + -7) +
                     (int)*(short *)&pEVar5[8].GetTypeInfo,0);
          ReCalcLights3__16ISimsObjectModel(pIVar4);
          pcVar14 = pcVar15->__vtable;
          goto LAB_0012377c;
        }
      }
    }
  }
  (*(code *)pEVar5[8].GetTypeName)
            ((int)((pIVar4->field0_0x0).field0_0x0.field0_0x0.m_otd.m_minPos + -7) +
             (int)*(short *)&pEVar5[8].GetTypeInfo,1);
  pcVar14 = pcVar15->__vtable;
LAB_0012377c:
  lVar12 = (*(code *)pcVar14[1].GetFrontFaceDirection)
                     ((int)&pcVar15->_vb3534 + (int)*(short *)&pcVar14[1].GetInteractionLeader);
  if (lVar12 == 0) {
    lVar11 = (*(code *)pcVar15->__vtable[1].Dirty)
                       ((int)&pcVar15->_vb3534 + (int)*(short *)&pcVar15->__vtable[1].UpdateSimFlags
                        ,0);
    if (lVar11 != 0) {
      iVar8 = *(int *)lVar11;
      while( true ) {
        lVar12 = (**(code **)(*(int *)(iVar8 + 0x1c) + 0x84))
                           (iVar8 + *(short *)(*(int *)(iVar8 + 0x1c) + 0x80));
        pIVar4 = (ISimsObjectModel__26_3162 *)lVar12;
        if (lVar12 != 0) {
          iVar8 = *(int *)&(pIVar4->field0_0x0).field_0x130;
          (**(code **)(iVar8 + 0x14))
                    ((undefined *)
                     ((int)((pIVar4->field0_0x0).m_highlight + -6) + (int)*(short *)(iVar8 + 0x10)))
          ;
          ReCalcLights3__16ISimsObjectModel(pIVar4);
        }
        iVar8 = *(int *)((int)lVar11 + 4);
        lVar11 = (**(code **)(iVar8 + 0x25c))((int)lVar11 + (int)*(short *)(iVar8 + 600),0);
        if (lVar11 == 0) break;
        iVar8 = *(int *)lVar11;
      }
    }
  }
  else {
                    /* inlined from ../MSrc/SCID.h */
    piVar6 = (int *)0x0;
    if (lVar11 != 0) {
      piVar6 = (int *)_dyncastimpl__7TreeSim4SCID(pcVar15->_vb3534,cXMTObjectID);
    }
                    /* end of inlined section */
    lVar11 = (**(code **)(piVar6[1] + 0x4c))((int)piVar6 + (int)*(short *)(piVar6[1] + 0x48));
    if (lVar11 == 0) {
      sVar1 = *(short *)(piVar6[1] + 0x10);
      pcVar7 = *(code **)(piVar6[1] + 0x14);
      while (piVar6 = (int *)(*pcVar7)((int)piVar6 + (int)sVar1), piVar6 != (int *)0x0) {
        iVar8 = *(int *)(*piVar6 + 4);
        pcVar7 = *(code **)(iVar8 + 0x25c);
        iVar8 = *piVar6 + (int)*(short *)(iVar8 + 600);
        while (lVar11 = (*pcVar7)(iVar8,0), lVar11 != 0) {
          piVar16 = (int *)lVar11;
          iVar8 = *(int *)(*piVar16 + 0x1c);
          lVar11 = (**(code **)(iVar8 + 0x84))(*piVar16 + (int)*(short *)(iVar8 + 0x80));
          pIVar4 = (ISimsObjectModel__26_3162 *)lVar11;
          if (lVar11 != 0) {
            iVar8 = *(int *)&(pIVar4->field0_0x0).field_0x130;
            (**(code **)(iVar8 + 0x14))
                      ((undefined *)
                       ((int)((pIVar4->field0_0x0).m_highlight + -6) + (int)*(short *)(iVar8 + 0x10)
                       ));
            ReCalcLights3__16ISimsObjectModel(pIVar4);
          }
          pcVar7 = *(code **)(piVar16[1] + 0x25c);
          iVar8 = (int)piVar16 + (int)*(short *)(piVar16[1] + 600);
        }
        sVar1 = *(short *)(piVar6[1] + 0x18);
        pcVar7 = *(code **)(piVar6[1] + 0x1c);
      }
    }
  }
  ___7CTilePt(&tipt,2);
  return;
}

cXObject* ESimsCursor::PointToObject(PointToObjectMode mode) {
	int xint;
	int yint;
	FTilePt fp;
	CTilePt tile;
	cXObject *foundObj;
	Int inX;
	Int inY;
	Int integer;
	Int integer;
	CTilePt worldWhere;
	ObjectIterator i;
	cXObject *obj;
	Sint16 flags2;
	
  cXObject__15_2008 *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 unaff_s0;
  cXObject__15_2008 *pcVar4;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  FTilePt fp;
  CTilePt tile;
  CTilePt worldWhere;
  ObjectIterator i;
  int yint;
  int xint;
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
  
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  GetSnapPos__11ESimsCursorRiT1(this,&yint,&xint);
                    /* inlined from ../MSrc/tiles.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/tiles.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/tiles.h */
  fp.x.whole = xint << 4;
                    /* end of inlined section */
                    /* inlined from ../MSrc/tiles.h */
  fp.y.whole = yint << 4;
                    /* end of inlined section */
                    /* end of inlined section */
  __7CTilePtRC7FTilePti(&tile,&fp,1);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  lVar2 = (*(code *)_5Globs_pFixedWorld->__vtable->SetWall)
                    ((int)&_5Globs_pFixedWorld->__vtable +
                     (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetWall,&tile);
  if (lVar2 == 0) {
    pcVar4 = (cXObject__15_2008 *)0x0;
    __7CTilePtRC7CTilePt(&worldWhere,&tile);
                    /* inlined from ../MSrc/objectiterator.h */
    init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType(&i,&worldWhere,kAll);
                    /* end of inlined section */
    if (i.fCurrent != (cXObject__15_2008 *)0x0) {
                    /* inlined from ../MSrc/objectiterator.h */
      do {
                    /* end of inlined section */
        pcVar1 = i.fCurrent;
        uVar3 = (*(code *)(i.fCurrent)->__vtable->ReconType)
                          ((int)&(i.fCurrent)->_vb3534 +
                           (int)*(short *)&(i.fCurrent)->__vtable->ReconStream,0x28);
        if (mode == kPointToRegularObject) {
          if ((uVar3 & 0xc000) == 0) {
            pcVar4 = pcVar1;
          }
        }
        else if ((int)mode < 2) {
          if (mode == kPointToAnyObject) {
            pcVar4 = pcVar1;
          }
        }
        else {
          if (mode == kPointToDoorObject) {
            uVar3 = uVar3 & 0x8000;
          }
          else {
            uVar3 = uVar3 & 0x4000;
            if (mode != kPointToWindowObject) goto LAB_00123bcc;
          }
          if (uVar3 != 0) {
            pcVar4 = pcVar1;
          }
        }
LAB_00123bcc:
      } while ((pcVar4 == (cXObject__15_2008 *)0x0) &&
              (__pp__14ObjectIterator(&i), i.fCurrent != (cXObject__15_2008 *)0x0
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */));
    }
    ___7CTilePt(&worldWhere,2);
    ___7CTilePt(&tile,2);
  }
  else {
    ___7CTilePt(&tile,2);
    pcVar4 = (cXObject__15_2008 *)0x0;
  }
  return pcVar4;
}

bool ESimsCursor::TurnToWall() {
	bool result;
	cXCursorObject *mMouseObj;
	cXObject *pFloater;
	Int count;
	Int maxCount;
	Int count;
	
  cXCursorObject__15_1968 *pcVar1;
  cXObject__15_2008__vtable *pcVar2;
  cXObject__15_2008 *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  cXMTObject__15_5522 *pcVar9;
  
  pcVar1 = this->m_pCursorObject;
  bVar5 = false;
  if (pcVar1 != (cXCursorObject__15_1968 *)0x0) {
    lVar7 = (**(code **)&pcVar1->__vtable->field_0x44)
                      ((int)&pcVar1->_vb5522 + (int)*(short *)&pcVar1->__vtable->field_0x40);
    bVar5 = false;
    if (lVar7 != 0) {
      iVar6 = (**(code **)&pcVar1->__vtable->field_0x44)
                        ((int)&pcVar1->_vb5522 + (int)*(short *)&pcVar1->__vtable->field_0x40);
      lVar7 = (**(code **)(*(int *)(iVar6 + 4) + 900))
                        (iVar6 + *(short *)(*(int *)(iVar6 + 4) + 0x380));
      bVar5 = false;
      if (lVar7 != 0) {
        iVar6 = (**(code **)&pcVar1->__vtable->field_0x44)
                          ((int)&pcVar1->_vb5522 + (int)*(short *)&pcVar1->__vtable->field_0x40);
        lVar7 = (**(code **)(*(int *)(iVar6 + 4) + 0x374))
                          (iVar6 + *(short *)(*(int *)(iVar6 + 4) + 0x370));
        if ((lVar7 == 1) ||
           (lVar7 = (**(code **)(*(int *)(iVar6 + 4) + 0x374))
                              (iVar6 + *(short *)(*(int *)(iVar6 + 4) + 0x370)), lVar7 == 2)) {
          iVar6 = 1;
          pcVar9 = pcVar1->_vb5522;
          while( true ) {
            pcVar2 = pcVar9->_vb2008->__vtable;
            (*(code *)pcVar2->ClearIdleStatus)
                      ((int)&pcVar9->_vb2008->_vb3534 + (int)*(short *)&pcVar2->SetIdleStatus,iVar6)
            ;
            lVar7 = (*(code *)pcVar1->__vtable->DetachFloater)
                              ((int)&pcVar1->_vb5522 + (int)*(short *)&pcVar1->__vtable->KillFloater
                              );
            bVar5 = false;
            if (lVar7 != 0) break;
            iVar4 = -iVar6;
            if (gPlacementError == 0x16) {
              return false;
            }
            iVar6 = iVar6 + 1;
            pcVar3 = pcVar1->_vb5522->_vb2008;
            pcVar2 = pcVar3->__vtable;
            (*(code *)pcVar2->ClearIdleStatus)
                      ((int)&pcVar3->_vb3534 + (int)*(short *)&pcVar2->SetIdleStatus,iVar4);
            if (3 < iVar6) {
              return false;
            }
            pcVar9 = pcVar1->_vb5522;
          }
        }
        else {
          iVar6 = 1;
          pcVar3 = pcVar1->_vb5522->_vb2008;
          pcVar2 = pcVar3->__vtable;
          lVar7 = (*(code *)pcVar2->ReconType)
                            ((int)&pcVar3->_vb3534 + (int)*(short *)&pcVar2->ReconStream,0x17);
          if (lVar7 == 0) {
            trap(7);
          }
          pcVar9 = pcVar1->_vb5522;
          while( true ) {
            pcVar2 = pcVar9->_vb2008->__vtable;
            (*(code *)pcVar2->ClearIdleStatus)
                      ((int)&pcVar9->_vb2008->_vb3534 + (int)*(short *)&pcVar2->SetIdleStatus,iVar6)
            ;
            lVar8 = (*(code *)pcVar1->__vtable->DetachFloater)
                              ((int)&pcVar1->_vb5522 + (int)*(short *)&pcVar1->__vtable->KillFloater
                              );
            iVar4 = -iVar6;
            if (lVar8 != 0) break;
            iVar6 = iVar6 + 1;
            pcVar3 = pcVar1->_vb5522->_vb2008;
            pcVar2 = pcVar3->__vtable;
            (*(code *)pcVar2->ClearIdleStatus)
                      ((int)&pcVar3->_vb3534 + (int)*(short *)&pcVar2->SetIdleStatus,iVar4);
            if (8 / (int)lVar7 <= iVar6) {
              return false;
            }
            pcVar9 = pcVar1->_vb5522;
          }
          bVar5 = true;
        }
      }
    }
  }
  return bVar5;
}

void ESimsCursor::CleanUpGrid() {
  EGlobalManagerClient__vtable *pEVar1;
  
  __11ESimsCursor_m_bGridInit = 0;
  while (_11ESimsCursor_m_pGridDl != (EDL *)0x0) {
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[3].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[7].EGlobalManagerClient)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 7),
               _11ESimsCursor_m_pGridDl);
    _11ESimsCursor_m_pGridDl = (EDL *)0x0;
  }
  while (_11ESimsCursor_m_pWhiteLineShader != (ERShader *)0x0) {
    DelRef__9EResource(&_11ESimsCursor_m_pWhiteLineShader->field0_0x0);
    _11ESimsCursor_m_pWhiteLineShader = (ERShader *)0x0;
  }
  while (_11ESimsCursor_m_pWallUnderConstructionShd != (ERShader *)0x0) {
    DelRef__9EResource(&_11ESimsCursor_m_pWallUnderConstructionShd->field0_0x0);
    _11ESimsCursor_m_pWallUnderConstructionShd = (ERShader *)0x0;
  }
  while (_11ESimsCursor_m_pBuildToolGuideShd != (ERShader *)0x0) {
    DelRef__9EResource(&_11ESimsCursor_m_pBuildToolGuideShd->field0_0x0);
    _11ESimsCursor_m_pBuildToolGuideShd = (ERShader *)0x0;
  }
  return;
}

void ESimsCursor::SetUpGrid() {
	ERC *prc;
	cFixedWorld &world;
	u8 size;
	EBound3 bound;
	int width;
	int height;
	int i;
	EHouse *this;
	u8 x;
	u8 y;
	CTilePt pt;
	EVec3 v;
	int i;
	int value;
	int value;
	int value;
	int value;
	int value;
	int value;
	int value;
	int value;
	int value;
	int value;
	ERC *this;
	int idx;
	EVec4 vPos0;
	EVec4 vPos1;
	float y;
	ERC *this;
	int idx;
	EVec4 vPos0;
	EVec4 vPos1;
	float x;
	
  undefined *puVar1;
  uint uVar2;
  EGlobalManagerClient__vtable *pEVar3;
  cFixedWorld__vtable *pcVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  EHouse__26_3190 *pEVar9;
  cFixedWorld *pcVar10;
  undefined8 *puVar11;
  int iVar12;
  void *pvVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  EVec4 *pEVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  float *pfVar20;
  uint *puVar21;
  int iVar22;
  ulong uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  uint uVar28;
  uint uVar29;
  ERC *prc;
  EVec2 *pEVar30;
  uint x;
  int iVar31;
  int iVar32;
  float fVar33;
  EBound3 bound;
  EVec4 vPos0;
  EVec4 vPos1;
  uint local_b0;
  
  if (__11ESimsCursor_m_bGridInit == 0) {
    __11ESimsCursor_m_bGridInit = 1;
    while (_11ESimsCursor_m_pWhiteLineShader != (ERShader *)0x0) {
      DelRef__9EResource(&_11ESimsCursor_m_pWhiteLineShader->field0_0x0);
      _11ESimsCursor_m_pWhiteLineShader = (ERShader *)0x0;
    }
    while (_11ESimsCursor_m_pWallUnderConstructionShd != (ERShader *)0x0) {
      DelRef__9EResource(&_11ESimsCursor_m_pWallUnderConstructionShd->field0_0x0);
      _11ESimsCursor_m_pWallUnderConstructionShd = (ERShader *)0x0;
    }
    while (_11ESimsCursor_m_pBuildToolGuideShd != (ERShader *)0x0) {
      DelRef__9EResource(&_11ESimsCursor_m_pBuildToolGuideShd->field0_0x0);
      _11ESimsCursor_m_pBuildToolGuideShd = (ERShader *)0x0;
    }
    x = 1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _11ESimsCursor_m_pWhiteLineShader =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x1a18ca65,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _11ESimsCursor_m_pWallUnderConstructionShd =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x899ba3eb,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _11ESimsCursor_m_pBuildToolGuideShd =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x3b494d6c,(EFile *)0x0,0);
                    /* end of inlined section */
    pEVar3 = (_pGfx->field0_0x0).__vtable;
    uVar15 = (*(code *)pEVar3[6].EGlobalManagerClient)
                       ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar3 + 6),1);
    prc = (ERC *)uVar15;
    (*(code *)prc->__vtable->ZTest)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->RecalcMatrices);
    Select__8ERShaderP3ERCi(_11ESimsCursor_m_pWhiteLineShader,prc,0);
    (*(code *)prc->__vtable[1].Vertex)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].TriIndexed);
    (*(code *)prc->__vtable->NewEntry)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->Terminate,1);
    uVar23 = 0;
    (*(code *)prc->__vtable[1].DisableGeometryModes)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].EnableGeometryModes,1,2,0,0);
    pcVar10 = _5Globs_pFixedWorld;
    pEVar9 = _globals._pCurHouse;
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
    pEVar30 = &(_globals._pCurHouse)->m_vHouse_off;
                    /* end of inlined section */
    iVar12 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                       ((int)&_5Globs_pFixedWorld->__vtable +
                        (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vPos0.field0_0x0.d[2] = 0.0;
    vPos0.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
    uVar29 = iVar12 - 1U & 0xff;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vPos0.field0_0x0._0_1_ = 0;
    vPos0.field0_0x0._1_1_ = 0;
    vPos0.field0_0x0._2_2_ = 0;
                    /* end of inlined section */
    puVar1 = (undefined *)((int)&bound.vMax.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_bound3.h */
    uVar28 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar28);
    *puVar5 = *puVar5 & -1L << (uVar28 + 1) * 8 | (ulong)(0 >> (7 - uVar28) * 8);
    uVar28 = (uint)&bound.vMax & 7;
    puVar5 = (ulong *)((int)&bound.vMax - uVar28);
    *puVar5 = 0L << uVar28 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar28) * 8;
    bound.vMax.field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&bound.vMax.field0_0x0 + 7);
    uVar28 = (uint)puVar1 & 7;
    uVar2 = (uint)&bound.vMax & 7;
    bound.vMin.field0_0x0._0_8_ =
         (*(long *)(puVar1 + -uVar28) << (7 - uVar28) * 8 |
         uVar23 & 0xffffffffffffffffU >> (uVar28 + 1) * 8) & -1L << (8 - uVar2) * 8 |
         *(ulong *)((int)&bound.vMax - uVar2) >> uVar2 * 8;
    puVar1 = (undefined *)((int)&bound.vMin.field0_0x0 + 7);
    uVar28 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar28);
    *puVar5 = *puVar5 & -1L << (uVar28 + 1) * 8 |
              (ulong)bound.vMin.field0_0x0._0_8_ >> (7 - uVar28) * 8;
    bound.vMin.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
    if (1 < uVar29) {
      do {
        uVar28 = 1;
        local_b0 = x + 1;
        if (1 < uVar29) {
          do {
            __7CTilePtiii((CTilePt *)&vPos0,x,uVar28,1);
            pcVar4 = pcVar10->__vtable;
            uVar23 = (*(code *)pcVar4[1].GetFloorLayer)
                               ((int)&pcVar10->__vtable + (int)*(short *)&pcVar4[1].OutOfGrid);
            if ((uVar23 & 0x21) == 1) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
              vPos1.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
              vPos1.field0_0x0.d[0] =
                   (float)(int)(char)vPos0.field0_0x0._1_1_ + (pEVar30->field0_0x0).d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
              vPos1.field0_0x0.d[1] =
                   (float)(int)(char)vPos0.field0_0x0._0_1_ + (pEVar9->m_vHouse_off).field0_0x0.d[1]
              ;
                    /* end of inlined section */
              if ((bound.vMin.field0_0x0.d[0] == 0.0) && (bound.vMin.field0_0x0.d[1] == 0.0)) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                bVar8 = false;
                if ((bound.vMin.field0_0x0.d[0] == bound.vMax.field0_0x0.d[0]) &&
                   ((bound.vMin.field0_0x0.d[1] == bound.vMax.field0_0x0.d[1] &&
                    (bound.vMin.field0_0x0.d[2] == bound.vMax.field0_0x0.d[2])))) {
                  bVar8 = true;
                }
                    /* end of inlined section */
                if (bVar8) {
                  bound.vMin.field0_0x0._0_8_ =
                       CONCAT44(vPos1.field0_0x0.d[1],vPos1.field0_0x0.d[0]);
                  puVar1 = (undefined *)((int)&bound.vMin.field0_0x0 + 7);
                  uVar2 = (uint)puVar1 & 7;
                  puVar5 = (ulong *)(puVar1 + -uVar2);
                  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 |
                            (ulong)bound.vMin.field0_0x0._0_8_ >> (7 - uVar2) * 8;
                  bound.vMin.field0_0x0.d[2] = 0.0;
                  puVar1 = (undefined *)((int)&bound.vMax.field0_0x0 + 7);
                  uVar2 = (uint)puVar1 & 7;
                  puVar5 = (ulong *)(puVar1 + -uVar2);
                  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 |
                            (ulong)bound.vMin.field0_0x0._0_8_ >> (7 - uVar2) * 8;
                  uVar2 = (uint)&bound.vMax & 7;
                  puVar5 = (ulong *)((int)&bound.vMax - uVar2);
                  *puVar5 = bound.vMin.field0_0x0._0_8_ << uVar2 * 8 |
                            *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
                  bound.vMax.field0_0x0.d[2] = 0.0;
                  goto LAB_001242d8;
                }
              }
                    /* inlined from /eor/src2/common/math/e_bound3.h */
              pEVar16 = &vPos1;
              pfVar20 = (float *)((uint)&bound | 0xc);
              iVar12 = 2;
              do {
                fVar33 = pfVar20[-3];
                if ((pEVar16->field0_0x0).d[0] <= fVar33) {
                  fVar33 = (pEVar16->field0_0x0).d[0];
                }
                pfVar20[-3] = fVar33;
                fVar33 = (pEVar16->field0_0x0).d[0];
                if ((pEVar16->field0_0x0).d[0] < *pfVar20) {
                  fVar33 = *pfVar20;
                }
                *pfVar20 = fVar33;
                pEVar16 = (EVec4 *)((int)&pEVar16->field0_0x0 + 4);
                iVar12 = iVar12 + -1;
                pfVar20 = pfVar20 + 1;
              } while (-1 < iVar12);
            }
LAB_001242d8:
            ___7CTilePt((CTilePt *)&vPos0,2);
            uVar28 = uVar28 + 1 & 0xff;
          } while (uVar28 < uVar29);
        }
        x = local_b0 & 0xff;
      } while (x < uVar29);
    }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_bound3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_rc.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_bound3.h */
                    /* end of inlined section */
    bound.vMax.field0_0x0.d[0] = bound.vMax.field0_0x0.d[0] + 0.5;
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
    bound.vMax.field0_0x0.d[1] = bound.vMax.field0_0x0.d[1] + 0.5;
                    /* inlined from /eor/src2/common/math/e_bound3.h */
                    /* end of inlined section */
    bound.vMin.field0_0x0._0_8_ =
         CONCAT44(bound.vMin.field0_0x0.d[1] - 0.5,bound.vMin.field0_0x0.d[0] - 0.5);
    iVar31 = (int)(bound.vMax.field0_0x0.d[0] - (bound.vMin.field0_0x0.d[0] - 0.5));
                    /* inlined from /eor/src2/common/math/e_bound3.h */
    _11ESimsCursor_m_lotBound.vMin.field0_0x0._0_8_ = bound.vMin.field0_0x0._0_8_;
    _11ESimsCursor_m_lotBound._8_8_ = ZEXT48((uint)bound.vMin.field0_0x0.d[2]);
    puVar1 = (undefined *)((int)&bound.vMax.field0_0x0 + 7);
    uVar28 = (uint)puVar1 & 7;
    uVar2 = (uint)&bound.vMax & 7;
    uVar23 = (*(long *)(puVar1 + -uVar28) << (7 - uVar28) * 8 |
             bound.vMin.field0_0x0._0_8_ & 0xffffffffffffffffU >> (uVar28 + 1) * 8) &
             -1L << (8 - uVar2) * 8 | *(ulong *)((int)&bound.vMax - uVar2) >> uVar2 * 8;
    _11ESimsCursor_m_lotBound._8_8_ = uVar23 << 0x20 | _11ESimsCursor_m_lotBound._8_8_;
    _11ESimsCursor_m_lotBound.vMax.field0_0x0._4_8_ =
         CONCAT44(bound.vMax.field0_0x0.d[2],(float)(uVar23 >> 0x20));
                    /* end of inlined section */
    iVar32 = (int)(bound.vMax.field0_0x0.d[1] - (bound.vMin.field0_0x0.d[1] - 0.5));
                    /* inlined from /eor/src2/engine/e_dl.h */
    pvVar13 = Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,iVar31 * 0xa0,0x10);
                    /* end of inlined section */
    iVar12 = 0;
    if (0 < iVar31) {
      do {
        iVar22 = iVar12 + 1;
        puVar14 = (undefined8 *)(iVar12 * 0xa0 + (int)pvVar13);
        *(undefined4 *)(puVar14 + 6) = 0;
        *(undefined4 *)((int)puVar14 + 0x34) = 0;
        *(undefined4 *)(puVar14 + 7) = 0;
        *(undefined4 *)((int)puVar14 + 0x3c) = 0x80;
        puVar19 = puVar14;
        puVar11 = puVar14 + 10;
        do {
          puVar17 = puVar11;
          puVar18 = puVar19;
          uVar6 = *puVar18;
          uVar24 = *(undefined4 *)(puVar18 + 1);
          uVar25 = *(undefined4 *)((int)puVar18 + 0xc);
          uVar7 = puVar18[2];
          uVar26 = *(undefined4 *)(puVar18 + 3);
          uVar27 = *(undefined4 *)((int)puVar18 + 0x1c);
          *(int *)puVar17 = (int)uVar6;
          *(int *)((int)puVar17 + 4) = (int)((ulong)uVar6 >> 0x20);
          *(undefined4 *)(puVar17 + 1) = uVar24;
          *(undefined4 *)((int)puVar17 + 0xc) = uVar25;
          *(int *)(puVar17 + 2) = (int)uVar7;
          *(int *)((int)puVar17 + 0x14) = (int)((ulong)uVar7 >> 0x20);
          *(undefined4 *)(puVar17 + 3) = uVar26;
          *(undefined4 *)((int)puVar17 + 0x1c) = uVar27;
          puVar19 = puVar18 + 4;
          puVar11 = puVar17 + 4;
        } while (puVar19 != puVar14 + 8);
        uVar6 = *puVar19;
        uVar24 = *(undefined4 *)(puVar18 + 5);
        uVar25 = *(undefined4 *)((int)puVar18 + 0x2c);
        *(int *)(puVar17 + 4) = (int)uVar6;
        *(int *)((int)puVar17 + 0x24) = (int)((ulong)uVar6 >> 0x20);
        *(undefined4 *)(puVar17 + 5) = uVar24;
        *(undefined4 *)((int)puVar17 + 0x2c) = uVar25;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
        pfVar20 = (float *)(iVar12 * 0xa0 + (int)pvVar13);
        fVar33 = bound.vMin.field0_0x0.d[0] + (float)iVar12;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        vPos0.field0_0x0.d[1] = bound.vMin.field0_0x0.d[1];
        vPos0.field0_0x0._0_1_ = SUB41(fVar33,0);
        vPos0.field0_0x0._1_1_ = (undefined)((uint)fVar33 >> 8);
        vPos0.field0_0x0._2_2_ = (undefined2)((uint)fVar33 >> 0x10);
        vPos0.field0_0x0.d[2] = 0.025;
        vPos0.field0_0x0.d[3] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
        *pfVar20 = fVar33;
        pfVar20[1] = bound.vMin.field0_0x0.d[1];
        pfVar20[2] = 0.025;
        pfVar20[3] = 0.0;
        pfVar20[0x14] = bound.vMin.field0_0x0.d[0] + (float)iVar12;
        pfVar20[0x15] = bound.vMax.field0_0x0.d[1] - 1.0;
        pfVar20[0x16] = 0.025;
        pfVar20[0x17] = 0.0;
        iVar12 = iVar22;
      } while (iVar22 < iVar31);
    }
    (*(code *)prc->__vtable->ClipRatio)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->Viewport,pvVar13,iVar31 << 1);
                    /* inlined from /eor/src2/engine/e_rc.h */
    pvVar13 = Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,iVar32 * 0xa0,0x10);
                    /* end of inlined section */
    iVar12 = 0;
    if (0 < iVar32) {
      do {
        iVar31 = iVar12 + 1;
        puVar14 = (undefined8 *)(iVar12 * 0xa0 + (int)pvVar13);
        *(undefined4 *)(puVar14 + 6) = 0;
        *(undefined4 *)((int)puVar14 + 0x34) = 0;
        *(undefined4 *)(puVar14 + 7) = 0;
        *(undefined4 *)((int)puVar14 + 0x3c) = 0x80;
        puVar19 = puVar14;
        puVar11 = puVar14 + 10;
        do {
          puVar17 = puVar11;
          puVar18 = puVar19;
          uVar6 = *puVar18;
          uVar24 = *(undefined4 *)(puVar18 + 1);
          uVar25 = *(undefined4 *)((int)puVar18 + 0xc);
          uVar7 = puVar18[2];
          uVar26 = *(undefined4 *)(puVar18 + 3);
          uVar27 = *(undefined4 *)((int)puVar18 + 0x1c);
          *(int *)puVar17 = (int)uVar6;
          *(int *)((int)puVar17 + 4) = (int)((ulong)uVar6 >> 0x20);
          *(undefined4 *)(puVar17 + 1) = uVar24;
          *(undefined4 *)((int)puVar17 + 0xc) = uVar25;
          *(int *)(puVar17 + 2) = (int)uVar7;
          *(int *)((int)puVar17 + 0x14) = (int)((ulong)uVar7 >> 0x20);
          *(undefined4 *)(puVar17 + 3) = uVar26;
          *(undefined4 *)((int)puVar17 + 0x1c) = uVar27;
          puVar19 = puVar18 + 4;
          puVar11 = puVar17 + 4;
        } while (puVar19 != puVar14 + 8);
        uVar6 = *puVar19;
        uVar24 = *(undefined4 *)(puVar18 + 5);
        uVar25 = *(undefined4 *)((int)puVar18 + 0x2c);
        *(int *)(puVar17 + 4) = (int)uVar6;
        *(int *)((int)puVar17 + 0x24) = (int)((ulong)uVar6 >> 0x20);
        *(undefined4 *)(puVar17 + 5) = uVar24;
        *(undefined4 *)((int)puVar17 + 0x2c) = uVar25;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
        puVar21 = (uint *)(iVar12 * 0xa0 + (int)pvVar13);
        vPos0.field0_0x0.d[1] = bound.vMin.field0_0x0.d[1] + (float)iVar12;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        vPos0.field0_0x0._0_1_ = (undefined)bound.vMin.field0_0x0._0_8_;
        vPos0.field0_0x0._1_1_ = (undefined)((ulong)bound.vMin.field0_0x0._0_8_ >> 8);
        vPos0.field0_0x0._2_2_ = (undefined2)((ulong)bound.vMin.field0_0x0._0_8_ >> 0x10);
        vPos0.field0_0x0.d[2] = 0.025;
        vPos0.field0_0x0.d[3] = 0.0;
                    /* end of inlined section */
        vPos1.field0_0x0.d[0] = bound.vMax.field0_0x0.d[0] - 1.0;
        vPos1.field0_0x0.d[1] = bound.vMin.field0_0x0.d[1] + (float)iVar12;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        vPos1.field0_0x0.d[2] = 0.025;
        vPos1.field0_0x0.d[3] = 0.0;
                    /* end of inlined section */
        *puVar21 = (uint)bound.vMin.field0_0x0.d[0] & 0xffff0000 |
                   (uint)(ushort)bound.vMin.field0_0x0._0_8_;
        puVar21[1] = (uint)vPos0.field0_0x0.d[1];
        puVar21[2] = 0x3ccccccd;
        puVar21[3] = 0;
        puVar21[0x14] = (uint)vPos1.field0_0x0.d[0];
        puVar21[0x15] = (uint)vPos1.field0_0x0.d[1];
        puVar21[0x16] = 0x3ccccccd;
        puVar21[0x17] = 0;
        iVar12 = iVar31;
      } while (iVar31 < iVar32);
    }
    (*(code *)prc->__vtable->ClipRatio)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->Viewport,pvVar13,iVar32 << 1);
    (*(code *)prc->__vtable[1].TriList)((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].TriFan);
    pEVar3 = (_pGfx->field0_0x0).__vtable;
    _11ESimsCursor_m_pGridDl =
         (EDL *)(*(code *)pEVar3[6].ManagedShutdown)
                          ((int)&(_pGfx->field0_0x0).__vtable +
                           (int)*(short *)&pEVar3[6].ManagedStartup,uVar15);
  }
  return;
}

void ESimsCursor::DrawGrid(ERC *prc) {
  if (((prc != (ERC *)0x0) && (__11ESimsCursor_m_bGridInit != 0)) &&
     (_11ESimsCursor_m_pGridDl != (EDL *)0x0)) {
    (*(code *)prc->__vtable->DisableRasterModes)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->EnableRasterModes);
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

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  int iVar1;
  
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from /eor/src2/common/math/e_bound3.h */
    _11ESimsCursor_m_lotBound.vMax.field0_0x0._4_8_ = 0;
    _11ESimsCursor_m_lotBound.vMin.field0_0x0._0_8_ = 0;
    _11ESimsCursor_m_lotBound._8_8_ = 0;
    for (iVar1 = 0; iVar1 != -1; iVar1 = iVar1 + -1) {
    }
  }
  return;
}

void Panelstateman::~Panelstateman(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (Panelstateman__vtable *)_vt_13Panelstateman;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void ESimsCursor::Draw(ERC *prc) {
  return;
}

void ESimsCursor::SetEvent(PanelEvent event, u32 data) {
  return;
}

ESimsCam* ESimsCursor::GetCam() {
  return this->m_pCam;
}

void ESimsCursor::GetPos(EVec3 &vIn) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  ulong in_v0;
  ulong uVar6;
  
  puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_vPos & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->m_vPos - uVar3) >> uVar3 * 8;
  fVar4 = (this->m_vPos).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&vIn->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)vIn & 7;
  *(ulong *)((int)vIn - uVar2) =
       uVar6 << uVar2 * 8 | *(ulong *)((int)vIn - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (vIn->field0_0x0).d[2] = fVar4;
  return;
}

EVec3& ESimsCursor::GetPos() {
  return &this->m_vPos;
}

u32 ESimsCursor::GetPlayerId() {
  return *(uint *)&this->field_0x30;
}

bool ESimsCursor::SafeToUnPause() {
  return this->m_pCursorObject == (cXCursorObject__15_1968 *)0x0;
}

bool ESimsCursor::HasGrabObject() {
  return this->m_pCursorObject != (cXCursorObject__15_1968 *)0x0;
}

bool ESimsCursor::InPiMenu() {
  return this->m_mode == kPiMenu;
}

CursorFloorTile* ESimsCursor::CreateCursorFloorTile(FloorTile &n, float x, float y) {
	FloorTile &node;
	
  CursorFloorTile *this_00;
  
  this_00 = (CursorFloorTile *)_memmanAlloc__FUiUi(0x50,0x10);
  this_00->m_node = n;
  this_00->m_pRect = (EDL *)0x0;
  Init__15CursorFloorTileff(this_00,x,y);
  return this_00;
}

CursorMode ESimsCursor::GetCursorMode() {
  return this->m_mode;
}

bool ESimsCursor::CursorHasObject() {
  return this->m_pCursorObject != (cXCursorObject__15_1968 *)0x0;
}

bool ESimsCursor::InToolMode() {
  return this->m_mode + ~kPiMenu < 4;
}

bool ESimsCursor::InFloorMode() {
  return this->m_mode == kFloorTool;
}

bool ESimsCursor::InWallMode() {
  bool bVar1;
  
  bVar1 = false;
  if ((this->m_mode == kWallTool) || (this->m_mode == kFenceTool)) {
    bVar1 = true;
  }
  return bVar1;
}

bool ESimsCursor::InPaperTool() {
  return this->m_mode == kPaperTool;
}

s32 ESimsCursor::GetCurToolValue() {
  ushort uVar1;
  ushort uVar2;
  CursorMode CVar3;
  int iVar4;
  null____pfn_or_delta2 nVar5;
  undefined8 in_t0;
  
  CVar3 = this->m_mode;
  if ((CVar3 < nToolModes) && (uVar1 = this->m_ToolValueCalcFnTab[CVar3].__index, uVar1 != 0)) {
    if ((short)uVar1 < 0) {
      nVar5 = this->m_ToolValueCalcFnTab[CVar3].__pfn_or_delta2;
      CVar3 = this->m_mode;
    }
    else {
      in_t0 = *(undefined8 *)
               ((short)uVar1 * 8 +
                *(int *)((int)&(((ESimsCursor__15_1743 *)(this->m_ToolValueCalcFnTab + -8))->
                               field0_0x0).m_state +
                        (int)(short)this->m_ToolValueCalcFnTab[CVar3].__pfn_or_delta2.__delta2) + -8
               );
      nVar5 = SUB84((ulong)in_t0 >> 0x20,0);
      CVar3 = this->m_mode;
    }
    uVar2 = this->m_ToolValueCalcFnTab[CVar3].__delta;
    if ((short)uVar1 < 0) {
      iVar4 = (int)(short)uVar2;
    }
    else {
      iVar4 = (int)(short)in_t0 + (int)(short)uVar2;
    }
    iVar4 = (*(code *)nVar5)((int)&(((ESimsCursor__15_1743 *)(this->m_ToolValueCalcFnTab + -8))->
                                   field0_0x0).m_state + iVar4);
    return iVar4;
  }
  return 0;
}

bool ESimsCursor::PiMenuCanUpdate() {
  if (this->m_pPiMenu != (EPiMenu *)0x0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    return ((this->m_pPiMenu->field0_0x0).m_flags & 4) != 0;
  }
  return false;
}

void global constructors keyed to esmscrsrPauseUpdate() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

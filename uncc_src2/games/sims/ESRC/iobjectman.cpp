// STATUS: NOT STARTED

#include "iobjectman.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb3308;
	__vtbl_ptr_type *$vf2742;
	
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
struct cXMTObject : virtual cXObject {
	cXObject *$vb2742;
	__vtbl_ptr_type *$vf3650;
	
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
struct TreeSimImpl : virtual TreeSim {
	TreeSim *$vb3308;
	Int fIterations;
	TreeStack fStack;
	Int fLastTrans;
	bool fLastResult;
	StdPrm *fAutoStackArea;
	SInt16 fError;
	__vtbl_ptr_type *$vf3758;
	
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
	TreeSimImpl *$vb3758;
	cXObject *$vb2742;
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
	__vtbl_ptr_type *$vf3310;
	
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
struct cXMTObjectImpl : virtual cXMTObject, virtual cXObjectImpl {
	cXObjectImpl *$vb3310;
	cXMTObject *$vb3650;
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
struct ESimsCursor : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb4753;
protected:
	struct {
		short int __delta;
		short int __index;
		union {
			s32 (*__pfn)();
			short int __delta2;
		} __pfn_or_delta2;
	} m_ToolValueCalcFnTab[7];
	CursorMode m_mode;
	bool m_bUndoable;
	bool m_bNewObject;
	EVec3 m_vLastPos;
	EVec3 m_vPos;
	EVec2 m_vCursorAnchor;
	EVec2 m_vCursorAnchorCenter;
	ESimsCam *m_pCam;
	EDL *m_pdl;
	EDL *m_pLineDl;
	EPiMenu *m_pPiMenu;
	cXCursorObject *m_pCursorObject;
	float m_fCursorTheta;
	int m_wallPaperSide;
	ERShader *m_pLineShdr;
	ERShader *m_pFloorShd;
	ERShader *m_pWPaperShd;
	ERModel *m_pMainBase;
	ERModel *m_pMainBaseH;
	ERModel *m_pMainCirDash;
	ERModel *m_pArrow;
	ERModel *m_pArrowH;
	ERModel *m_pTrackBase;
	ERModel *m_pTrackH;
	ERModel *m_pTrackCirDash;
	ERModel *m_pBuild;
	ERModel *m_pBuild02;
	ERModel *m_pBuildH;
	ERModel *m_pBuy;
	ERModel *m_pBuy02;
	ERModel *m_pBuyH;
	EIParticleEmit *m_pEmit;
	ERParticleType *m_pType;
	TNodeList<ISimInstance *> m_objList;
	CursorFloorTilePtrList m_floorList;
	WallTile *m_pToolResMap;
	FTilePt m_undoLoc;
	SInt16 m_undoDir;
	SInt32 m_refund;
	SInt32 m_ring_S0;
	SInt32 m_ring_S1;
	float m_scaletime;
	WallStyle m_fenctype;
	u32 m_toolUnitPrice;
	static EBound3 m_lotBound;
	static bool m_bGridInit;
	static EDL *m_pGridDl;
	static ERShader *m_pWhiteLineShader;
	static ERShader *m_pWallUnderConstructionShd;
public:
	static ERShader *m_pBuildToolGuideShd;
	
	ESimsCursor& operator=();
	ESimsCursor();
	ESimsCursor();
	/* vtable[1] */ virtual ESimsCursor(ESimsCursor*, int, void);
	bool CanUserSell();
	void ClearPlacementError();
	void Init();
	void Reset();
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw();
	/* vtable[7] */ virtual void Message();
	/* vtable[14] */ virtual void SetFlag();
	/* vtable[2] */ virtual void SetState();
	/* vtable[3] */ virtual void SetEvent();
	void DrawMenu();
	void Draw_Curs();
	void GetCamOff();
	void SnapToDefPos();
	void SetCam();
	ESimsCam* GetCam();
	void GetPos();
	EVec3& GetPos();
	/* vtable[4] */ virtual void SetPos();
	u32 GetPlayerId();
	float GetCurorRad();
	void SetCursorObject();
	bool SafeToUnPause();
	void MoveCursor();
	void InitFloorTool();
	void SnapToWallVert();
	void FindWallDragVert();
	EVec2 GetSnapPos();
	void GetSnapPos();
	void LiveUpdate();
	void PauseUpdate();
	void BuyUpdate();
	bool CheckForXPressLive();
	void GetListofObjectsInCusorRad();
	bool HasGrabObject();
	cXObject* GetGrabObject();
	bool CheckForXPressBuyBuild();
	void Float();
	cXObject* PointToObject();
	bool TurnToWall();
	void TurnObject();
	bool InPiMenu();
	bool PiMenuCanUpdate();
	void CancelCursor();
	void UpdateHouse();
	bool TryUndoObjectPlacement();
	void FloorUpdate();
	CursorFloorTile* CreateCursorFloorTile();
	CursorMode GetCursorMode();
	bool CursorHasObject();
	void ExitFloorTool();
	void DrawCursorFloorList();
	bool InToolMode();
	bool InFloorMode();
	bool InWallMode();
	void DrawFloorPrevew();
	void DrawDeletePrevew();
	void DrawPrevewRect();
	void DrawRoomFillPrevew();
	void SetFloor();
	void BeginWallTool();
	void ExitWallTool();
	void WallToolUpdate();
	void DrawWallPreview();
	void DrawWallDelPreview();
	void DrawWallRoomPreview();
	bool FinalizeWallPlacement();
	bool FinalizeWallDel();
	bool FinalizeRoom();
	s32 GetWallLineCost();
	bool CanChangeTileAdd();
	bool CanChangeTileDelete();
	bool SubmitLine();
	static bool KillArchitecturalObject(/* parameters unknown */);
	bool AddWallAtTile();
	void VertPosToTile();
	static void ConvertVertsToTiles(/* parameters unknown */);
	static TilePtDir GetTileDirection(/* parameters unknown */);
	void DeleteWallAtTile();
	bool LegalWallTile();
	bool InPaperTool();
	void BeginPaperTool();
	void ExitPaperTool();
	void PaperToolUpdate();
	void DrawPaperPreview();
	void DrawPaperDelPreview();
	void DrawPaperRoomPreview();
	bool FinalizePaperPlacement();
	bool FinalizePaperDel();
	bool FinalizePaperForRoom();
	void AddPaperAtTile();
	void DeletePaperAtTile();
	void ChangeTile();
	int GetSideOfWall();
	bool SubmitPaperLine();
	int GetPaperLineCost();
	static void UpdateLot(/* parameters unknown */);
	s32 _GetkDefaultToolValue();
	s32 _GetkFloorToolValue();
	s32 _GetkWallToolValue();
	s32 _GetkPaperToolValue();
	s32 _GetkFenceToolValue();
	s32 GetCurToolValue();
	static void CleanUpGrid(/* parameters unknown */);
	static void SetUpGrid(/* parameters unknown */);
	static void DrawGrid(/* parameters unknown */);
};

// warning: multiple differing types with the same name (name not equal)
struct SimInfoWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb4753;
	float m_infoWinAlpha;
	float m_infoWinAlphaTime;
	s32 m_curwindow;
protected:
	s32 m_pressed;
	bool m_bButtdown;
	bool m_bDrawInfo;
	float m_introAnimDur;
	float m_infointroAnimDur;
	float m_infoDelayDur;
	float m_introTime;
	float m_hoverTime;
	float m_infoInTime;
	float m_simnametimeout;
	int m_curOpt;
	ERelationsWin m_rltnsMenu;
	static ESlideTextBox m_nameBoxs[2];
	static ESlideTextBox m_playerNameBoxs[2];
	static bool m_bInit;
	static void (*m_DrawTable[4])(/* parameters unknown */);
	static void (*m_UpdateTable[4])(/* parameters unknown */);
	static ERFont *m_pFont;
public:
	static ERShader *m_textarrowl;
	static ERShader *m_textarrowr;
	static ERShader *m_pDpadInverse;
	static ERShader *m_pMenubevel_T_L;
	static ERShader *m_pTextBoxBGBL;
	static ERShader *m_pTextBoxBGBR;
	static ERShader *m_pTextBoxBGTL;
	static ERShader *m_pTextBoxBGTR;
	static ERShader *m_pTextBoxBGML;
	static ERShader *m_pTextBoxBGMR;
	static ERShader *m_pTextBoxBGTC;
	static ERShader *m_pTextBoxBGBC;
	static ERShader *m_pTextBoxHBL;
	static ERShader *m_pTextBoxHBR;
	static ERShader *m_pTextBoxHTL;
	static ERShader *m_pTextBoxHTR;
	static ERShader *m_pTextBoxHML;
	static ERShader *m_pTextBoxHMR;
	static ERShader *m_pTextBoxHTC;
	static ERShader *m_pTextBoxHBC;
	static ERShader *m_pTextLineBGL;
	static ERShader *m_pTextLineBGR;
	static ERShader *m_pTextLineBGC;
	static ERShader *m_pTextPopOutC;
	static ERShader *m_pTextPopOutCH;
	static ERShader *m_pTextPopOutL;
	static ERShader *m_pTextPopOutLH;
	static ERShader *m_pTextPopOutR;
	static ERShader *m_pTextPopOutRH;
	static UiStringLookUpTableEntry __MoodStrings[8];
	static UiStringLookUpTableEntry __PersStrings[8];
	static UiStringLookUpTableEntry __JobStrings[8];
	static UiStringLookUpTableEntry __RelaStrings[8];
	static UiStringLookUpTableEntry *__InfoTextLookup[4];
	
	SimInfoWin& operator=();
	SimInfoWin();
	SimInfoWin();
	/* vtable[1] */ virtual SimInfoWin(SimInfoWin*, int, void);
	/* vtable[3] */ virtual void Draw();
	/* vtable[2] */ virtual void Update();
	/* vtable[2] */ virtual void SetState();
	/* vtable[3] */ virtual void SetEvent();
	void DrawInfo();
	void SetWindow();
	s32 GetWindow();
	void GetBut();
	void ResetState();
	void ChangedSelectedSim();
	static void Init(/* parameters unknown */);
	static void CleanUp(/* parameters unknown */);
	static void DrawTextBox(/* parameters unknown */);
	static void DrawBigHighlightBox(/* parameters unknown */);
protected:
	int GetDirection();
	void DrawBackGround();
	void StartIntro();
	void StartTextSlide();
	void UpdateIntroAnim();
	void UpdateInfoIntroAnim();
	void StartInfoIntro();
	void ResetAllclocks();
	void JobDrawInfo();
};

// warning: multiple differing types with the same name (name not equal)
struct DPadWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb4753;
protected:
	EVec2 m_vPosOff;
	struct {
		short int __delta;
		short int __index;
		union {
			void (*__pfn)();
			short int __delta2;
		} __pfn_or_delta2;
	} m_fnTab[10];
public:
	static bool m_bInit;
	static ERShader *m_pBack;
	static ERShader *m_pBack1;
	static ERShader *m_pBack2;
	static ERShader *m_pUpShdr;
	static ERShader *m_pDownShdr;
	static ERShader *m_pLeftShdr;
	static ERShader *m_pRightShdr;
	static ERShader *m_pDelqueueShdr;
	static ERShader *m_pJobShdr;
	static ERShader *m_pMoodShdr;
	static ERShader *m_pMovequeueShdr;
	static ERShader *m_pPersonalityShdr;
	static ERShader *m_pRelationshipsShdr;
	static ERShader *m_pBlankUp;
	static ERShader *m_pBlankDown;
	static ERShader *m_pBlankLeft;
	static ERShader *m_pBlankRight;
	static ERShader *m_pQuestion;
	static ERShader *m_pCancle;
	
	DPadWin& operator=();
	DPadWin();
	DPadWin();
	/* vtable[1] */ virtual DPadWin(DPadWin*, int, void);
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw();
	/* vtable[2] */ virtual void SetState();
	/* vtable[3] */ virtual void SetEvent();
	void SetDefaultFlags();
	static void Init(/* parameters unknown */);
	static void CleanUp(/* parameters unknown */);
	static void DrawButtonPrompts(/* parameters unknown */);
protected:
	void DrawHead();
	void DrawLIVE_DEFAULT();
	void DrawLIVE_DIALOG();
	void DrawLIVE_ACTIONQ();
	void DrawLIVE_INFOUP();
	void DrawLIVE_PIMENU();
};

// warning: multiple differing types with the same name (name not equal)
struct EPausePanel : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb4753;
	EDialogMenu m_DialogMenu;
	c16 *m_ppNoYesOptions[2];
	c16 *m_ppYesNoOptions[2];
	c16 *m_ppCancelSaveNoSaveOptions[3];
	c16 *m_ppCancelRemove2Options[2];
protected:
	ERFont *m_pFont;
	float m_PauseTimer;
	static float m_ItemInfoTimer;
	u32 m_nDisplayMode;
	bool m_bCleanUpModelReference;
	bool m_bCheckSavedSuccess;
	bool m_bHideDialog;
	EPauseMainMenu m_PauseMainMenu;
	EPauseBudgetMenu m_PauseBudgetMenu;
	EPauseBuyMenu m_PauseBuyMenu;
	EPauseBuildMenu m_PauseBuildMenu;
	EPauseOptionsMenu m_PauseOptionsMenu;
	EPauseItemInfo *m_pItemInfo;
	bool m_bDeleteInfo;
	ERShader *m_pBlankShdr;
	ERShader *m_pXIcon;
	ERShader *m_pTriIcon;
	ERShader *m_pSquareIcon;
	ERShader *m_pMenuBevelShdr;
	static ERShader *m_pDPadUp;
	static ERShader *m_pDPadDown;
	static ERShader *m_pDPadLeft;
	static ERShader *m_pDPadRight;
	EUIIcon m_XIcon;
	EUIIcon m_TriIcon;
	EUIIcon m_SquareIcon;
	EUIIcon m_XIcon2;
	EUIIcon m_TriIcon2;
	EUIIcon m_XIcon3;
	EUIIcon m_TriIcon3;
	EUIPrompt m_PromptsYN[2];
	EUIPrompt m_PromptsYNC[3];
	EUIPrompt m_Prompts[2];
	EPromptBar m_PromptBarYN;
	EPromptBar m_PromptBarYNC;
	EPromptBar m_PromptBar;
	
public:
	EPausePanel& operator=();
	EPausePanel();
	EPausePanel();
	/* vtable[1] */ virtual EPausePanel(EPausePanel*, int, void);
	/* vtable[14] */ virtual void Init();
	/* vtable[15] */ virtual void Reset();
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw();
	/* vtable[7] */ virtual void Message();
	/* vtable[2] */ virtual void SetState();
	/* vtable[3] */ virtual void SetEvent();
	void DrawGenericMessageBox();
	static void ResetItemInfoTimer(/* parameters unknown */);
	static float GetItemInfoTimer(/* parameters unknown */);
	static ERShader* GetShaderDPadUp(/* parameters unknown */);
	static ERShader* GetShaderDPadDown(/* parameters unknown */);
	static ERShader* GetShaderDPadLeft(/* parameters unknown */);
	static ERShader* GetShaderDPadRight(/* parameters unknown */);
	static void SetDPadUp(/* parameters unknown */);
	static void SetDPadDown(/* parameters unknown */);
	static void SetDPadLeft(/* parameters unknown */);
	static void SetDPadRight(/* parameters unknown */);
};

EDL *_pBoundRectDL = NULL;
bool _bDispCurorRect = false;

bool EIObjectMan::IsValidID(u32 id) {
  return id != 0;
}

void EIObjectMan::Init() {
	ERC *prc;
	
  EGlobalManagerClient__vtable *pEVar1;
  undefined8 uVar2;
  
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  uVar2 = (*(code *)pEVar1[6].EGlobalManagerClient)
                    ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 6),1);
  Rect__10EPrimitiveP3ERCff((ERC *)uVar2,1.0,1.0);
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  _pBoundRectDL =
       (EDL *)(*(code *)pEVar1[6].ManagedShutdown)
                        ((int)&(_pGfx->field0_0x0).__vtable +
                         (int)*(short *)&pEVar1[6].ManagedStartup,uVar2);
  return;
}

void EIObjectMan::~EIObjectMan(int __in_chrg) {
	ISimInstanceHandleGenerator *this;
	void *pAddress;
	void *pAddress;
	
  EGlobalManagerClient__vtable *pEVar1;
  
  while (_pBoundRectDL != (EDL *)0x0) {
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[3].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[7].EGlobalManagerClient)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 7),_pBoundRectDL);
    _pBoundRectDL = (EDL *)0x0;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/iobjectman.h */
  RemoveAll__13ERedBlackTree(&(this->m_objects).field0_0x0);
                    /* end of inlined section */
  (this->m_handleGen).m_lastHandle = 0;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

bool EIObjectMan::Find(ISimInstance *pin) {
	RBIterator i;
	RBIterator i;
	RBIterator i;
	
  ISimInstance *pIVar1;
  ERedBlackTreeNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_objects).field0_0x0.m_list.m_pHead;
                    /* end of inlined section */
  if (pEVar2 != (ERedBlackTreeNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    pIVar1 = (ISimInstance *)pEVar2->value;
    while( true ) {
                    /* end of inlined section */
      if (pin == pIVar1) {
        return true;
      }
      pEVar2 = pEVar2->pNext;
      if (pEVar2 == (ERedBlackTreeNode *)0x0) break;
      pIVar1 = (ISimInstance *)pEVar2->value;
    }
  }
  return false;
}

void EIObjectMan::UpdateObjectHighlight() {
	bool paused;
	bool intool;
	bool objinhand;
	float cursrad[2];
	ESimsCursor *this;
	ESimsCursor *this;
	RBIterator i;
	RBIterator i;
	RBValue v;
	RBIterator i;
	
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ERedBlackTreeNode *pEVar5;
  float cursrad [2];
  
  if (_globals._pPanel != (EPanel *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/livemodepanel.h */
    bVar2 = 1 < (_globals._pPanel)->m_panleState + ~LIVE_SIM_EDIT;
    bVar4 = false;
                    /* end of inlined section */
    if (!bVar2) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
                    /* end of inlined section */
      bVar4 = _globals._pCursor[_globals.m_whichPlayerPaused]->m_mode + ~kPiMenu < 4;
    }
    bVar3 = false;
    if (!bVar2) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
                    /* end of inlined section */
      bVar3 = _globals._pCursor[_globals.m_whichPlayerPaused]->m_pCursorObject !=
              (cXCursorObject__152_1098 *)0x0;
    }
    if ((bVar4) || (bVar3)) {
      TurnOffAllHighlights__11EIObjectManUi(this,0);
      TurnOffAllHighlights__11EIObjectManUi(this,1);
    }
    else {
      cursrad[0] = GetCurorRad__11ESimsCursor((ESimsCursor__15_1743 *)_globals._pCursor[0]);
      if (_globals._pCursor[1] == (ESimsCursor__67_3982 *)0x0) {
        cursrad[1] = 0.0;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
        pEVar5 = (this->m_objects).field0_0x0.m_list.m_pHead;
      }
      else {
        cursrad[1] = GetCurorRad__11ESimsCursor((ESimsCursor__15_1743 *)_globals._pCursor[1]);
        pEVar5 = (this->m_objects).field0_0x0.m_list.m_pHead;
      }
                    /* end of inlined section */
      if (pEVar5 != (ERedBlackTreeNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
        piVar1 = (int *)pEVar5->value;
        while( true ) {
                    /* end of inlined section */
          if (bVar2) {
            (**(code **)(*piVar1 + 0x11c))
                      (cursrad[0],(int)piVar1 + (int)*(short *)(*piVar1 + 0x118),0,0);
            bVar4 = IsTwoPlayer__7EGlobal(&_globals);
            if (bVar4) {
              (**(code **)(*piVar1 + 0x11c))
                        (cursrad[1],(int)piVar1 + (int)*(short *)(*piVar1 + 0x118),1,0);
            }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
            pEVar5 = pEVar5->pNext;
          }
          else {
            (**(code **)(*piVar1 + 0x11c))
                      (cursrad[_globals.m_whichPlayerPaused],
                       (int)piVar1 + (int)*(short *)(*piVar1 + 0x118),_globals.m_whichPlayerPaused,3
                      );
            pEVar5 = pEVar5->pNext;
          }
                    /* end of inlined section */
          if (pEVar5 == (ERedBlackTreeNode *)0x0) break;
          piVar1 = (int *)pEVar5->value;
        }
      }
    }
  }
  return;
}

ISimInstance* EIObjectMan::GetObjectInstace(ESimsCursor *pcurs, cXObject *pObj) {
  return (ISimInstance *)0x0;
}

void EIObjectMan::TurnOffAllHighlights(u32 playerid) {
	u32 flags;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	
  uint uVar1;
  uint uVar2;
  ERedBlackTreeNode *pEVar3;
  
  uVar1 = 0;
  if (playerid == 0) {
    uVar1 = 1;
  }
  else {
    if (playerid != 1) {
      pEVar3 = (this->m_objects).field0_0x0.m_list.m_pHead;
      goto LAB_00173384;
    }
    uVar1 = 8;
  }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  pEVar3 = (this->m_objects).field0_0x0.m_list.m_pHead;
LAB_00173384:
                    /* end of inlined section */
  if (pEVar3 != (ERedBlackTreeNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    uVar2 = pEVar3->value;
    while( true ) {
                    /* end of inlined section */
      *(uint *)(uVar2 + 0x144) = *(uint *)(uVar2 + 0x144) & ~uVar1;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      pEVar3 = pEVar3->pNext;
                    /* end of inlined section */
      if (pEVar3 == (ERedBlackTreeNode *)0x0) break;
      uVar2 = pEVar3->value;
    }
  }
  return;
}

void EIObjectMan::GetObjectsInRect(int player, TNodeList<ISimInstance *> &vList) {
	u32 flag;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	TNodeList<ISimInstance *> *this;
	
  uint data;
  ERedBlackTreeNode *pEVar1;
  uint uVar2;
  
  uVar2 = 8;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_objects).field0_0x0.m_list.m_pHead;
                    /* end of inlined section */
  if (player == 0) {
    uVar2 = 1;
  }
  if (pEVar1 != (ERedBlackTreeNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    data = pEVar1->value;
    while( true ) {
                    /* end of inlined section */
      if ((*(uint *)(data + 0x144) & uVar2) == 0) {
        pEVar1 = pEVar1->pNext;
      }
      else {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        AddTail__9ENodeListUi(&vList->field0_0x0,data);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
        pEVar1 = pEVar1->pNext;
      }
                    /* end of inlined section */
      if (pEVar1 == (ERedBlackTreeNode *)0x0) break;
      data = pEVar1->value;
    }
  }
  return;
}

void EIObjectMan::FreeSimsObjectInstance(ISimInstance *pInst) {
	EIObjectMan *this;
	ISimInstance *pInst;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	
  EStorable__vtable *pEVar1;
  ISimInstance *pIVar2;
  ERedBlackTreeNode *pEVar3;
  uint key;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar3 = (this->m_objects).field0_0x0.m_list.m_pHead;
  if (pEVar3 == (ERedBlackTreeNode *)0x0) {
LAB_00173464:
    key = 0xffffffff;
  }
  else {
    pIVar2 = (ISimInstance *)pEVar3->value;
    while (pInst != pIVar2) {
      pEVar3 = pEVar3->pNext;
      if (pEVar3 == (ERedBlackTreeNode *)0x0) goto LAB_00173464;
      pIVar2 = (ISimInstance *)pEVar3->value;
    }
    key = pEVar3->key;
  }
  Remove__13ERedBlackTreeUi(&(this->m_objects).field0_0x0,key);
                    /* end of inlined section */
  if (pInst != (ISimInstance *)0x0) {
    pEVar1 = (pInst->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((pInst->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

void EIObjectMan::AttachObject(ISimInstance *pModel) {
	ISimInstanceHandleGenerator *this;
	u32 ret;
	
  uint key;
  
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  key = (this->m_handleGen).m_lastHandle;
  (this->m_handleGen).m_lastHandle = key + 1;
  Insert__13ERedBlackTreeUiUib(&(this->m_objects).field0_0x0,key,(uint)pModel,false);
  return;
}

ISimInstance* EIObjectMan::AddObject(cXObject *pXObject, ERLevel *pLevel) {
	ISimInstance *pModel;
	ISimInstanceHandleGenerator *this;
	u32 ret;
	
  uint key;
  EStorable__vtable *pEVar1;
  ISimInstance *pInstance;
  undefined1 *puVar2;
  EInstance *pInstance_00;
  long lVar3;
  
  pInstance = AllocSimsObjectInstance__11EIObjectManP8cXObject(this,pXObject);
  if (pInstance != (ISimInstance *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/iobjectman.h */
    key = (this->m_handleGen).m_lastHandle;
    (this->m_handleGen).m_lastHandle = key + 1;
    puVar2 = Insert__13ERedBlackTreeUiUib(&(this->m_objects).field0_0x0,key,(uint)pInstance,false);
                    /* end of inlined section */
    if (puVar2 == (undefined1 *)0x0) {
      pEVar1 = (pInstance->field0_0x0).field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar1[1].GetTypeKey)
                ((int)((pInstance->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
                 (int)*(short *)&pEVar1[1].GetTypeName,3);
      pInstance = (ISimInstance *)0x0;
    }
    else if (pLevel != (ERLevel *)0x0) {
      InsertInstance__7ERLevelP9EInstanceT1(pLevel,(EInstance *)pInstance,(EInstance *)0x0);
      pEVar1 = (pInstance->field0_0x0).field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar1[6].GetTypeVersion)
                ((int)((pInstance->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
                 (int)*(short *)&pEVar1[6].GetTypeKey,pLevel);
      pEVar1 = (pInstance->field0_0x0).field0_0x0.field0_0x0.__vtable;
      lVar3 = (*(code *)pEVar1[7].GetTypeInfo)
                        ((int)((pInstance->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
                         (int)*(short *)&pEVar1[7].SafeDelete);
      if (lVar3 != 0) {
        pEVar1 = (pInstance->field0_0x0).field0_0x0.field0_0x0.__vtable;
        pInstance_00 = (EInstance *)
                       (*(code *)pEVar1[7].GetTypeInfo)
                                 ((int)((pInstance->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
                                  (int)*(short *)&pEVar1[7].SafeDelete);
        InsertInstance__7ERLevelP9EInstanceT1(pLevel,pInstance_00,(EInstance *)0x0);
      }
    }
  }
  return pInstance;
}

void EIObjectMan::RemoveObjectsFromHouse(ERLevel *pLevel) {
	RBIterator i;
	RBIterator i;
	RBIterator i;
	TRedBlackTree<unsigned int,ISimInstance *> *this;
	RBIterator i;
	ERedBlackTree *this;
	TLinkedList<ERedBlackTreeNode,12,16> *this;
	RBIterator i;
	RBIterator i;
	void *pNode;
	RBIterator i;
	RBIterator i;
	
  EStorable__vtable *pEVar1;
  int *piVar2;
  EInstance *pEVar3;
  long lVar4;
  ERedBlackTreeNode *pEVar5;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar5 = (this->m_objects).field0_0x0.m_list.m_pHead;
                    /* end of inlined section */
  if (pEVar5 != (ERedBlackTreeNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    pEVar3 = (EInstance *)pEVar5->value;
    while( true ) {
      RemoveInstance__7ERLevelP9EInstance(pLevel,pEVar3);
      pEVar1 = (pEVar3->field0_0x0).__vtable;
      (*(code *)pEVar1[6].Read)
                ((int)((pEVar3->m_otd).m_minPos + -7) + (int)*(short *)&pEVar1[6].EStorable,pLevel);
      pEVar1 = (pEVar3->field0_0x0).__vtable;
      lVar4 = (*(code *)pEVar1[7].GetTypeInfo)
                        ((int)((pEVar3->m_otd).m_minPos + -7) + (int)*(short *)&pEVar1[7].SafeDelete
                        );
      if (lVar4 == 0) {
        pEVar5 = pEVar5->pNext;
      }
      else {
        pEVar1 = (pEVar3->field0_0x0).__vtable;
        pEVar3 = (EInstance *)
                 (*(code *)pEVar1[7].GetTypeInfo)
                           ((int)((pEVar3->m_otd).m_minPos + -7) +
                            (int)*(short *)&pEVar1[7].SafeDelete);
        RemoveInstance__7ERLevelP9EInstance(pLevel,pEVar3);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
        pEVar5 = pEVar5->pNext;
      }
                    /* end of inlined section */
      if (pEVar5 == (ERedBlackTreeNode *)0x0) break;
      pEVar3 = (EInstance *)pEVar5->value;
    }
  }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  pEVar5 = (this->m_objects).field0_0x0.m_list.m_pHead;
  if (pEVar5 != (ERedBlackTreeNode *)0x0) {
    piVar2 = (int *)pEVar5->value;
    while( true ) {
      pEVar5 = pEVar5->pNext;
      (**(code **)(*piVar2 + 0xc))((int)piVar2 + (int)*(short *)(*piVar2 + 8));
      if (pEVar5 == (ERedBlackTreeNode *)0x0) break;
      piVar2 = (int *)pEVar5->value;
    }
  }
  RemoveAll__13ERedBlackTree(&(this->m_objects).field0_0x0);
  return;
}

bool EIObjectMan::IsEmpty() {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  return (this->m_objects).field0_0x0.m_list.m_pHead == (ERedBlackTreeNode *)0x0;
}

ISimInstance* EIObjectMan::AllocSimsObjectInstance(cXObject *pXOb) {
	ObjDefinition *pDef;
	CTilePt tile;
	ISimsObjectModel *pRetVal;
	ObjDefinition *this;
	void *result;
	void *result;
	void *result;
	void *result;
	void *result;
	void *result;
	void *result;
	void *result;
	
  uint **ppuVar1;
  uint *puVar2;
  EStorable__vtable *pEVar3;
  uint uVar4;
  ISimsWallObjectModel *pIVar5;
  EISwimPool *pEVar6;
  ISimsCounterTopObject *pIVar7;
  uint uVar8;
  IShrubObject *this_00;
  ISimsObjectModel__26_3162 *this_01;
  ISimsMultiTileObjectModel *this_02;
  long lVar9;
  int iVar10;
  CTilePt tile;
  
  lVar9 = (*(code *)pXOb->__vtable[1].HandleError)
                    ((int)&pXOb->_vb3308 + (int)*(short *)&pXOb->__vtable[1].Error);
  iVar10 = (int)lVar9;
  if (*(int *)(iVar10 + 0x1c) != 0x7c4) {
    (*(code *)pXOb->__vtable[1].TestIntersection)
              (&tile,(int)&pXOb->_vb3308 + (int)*(short *)&pXOb->__vtable[1].IsInWorld);
    if (lVar9 != 0) {
      ppuVar1 = *(uint ***)(iVar10 + 0xc0);
      uVar4 = 0;
      if (ppuVar1 != (uint **)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
        if (*ppuVar1 == (uint *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = (*ppuVar1)[-1];
        }
      }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
      if ((0 < (int)uVar4) && (uVar4 = **ppuVar1, uVar4 != 0)) {
                    /* end of inlined section */
        puVar2 = ppuVar1[1];
        if (*(short *)(iVar10 + 0x14) == 0) {
          if (((uint)puVar2 >> 1 & 1) == 1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/isiminstance.h */
            pIVar5 = (ISimsWallObjectModel *)_memmanAlloc__FUiUi(0x2b0,0x10);
            memset(pIVar5,0,0x2b0);
                    /* end of inlined section */
            pEVar6 = (EISwimPool *)__20ISimsWallObjectModel(pIVar5);
          }
          else if (((uint)puVar2 >> 2 & 1) == 1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/isiminstance.h */
            pIVar7 = (ISimsCounterTopObject *)_memmanAlloc__FUiUi(0x2b0,0x10);
            memset(pIVar7,0,0x2b0);
                    /* end of inlined section */
            pEVar6 = (EISwimPool *)__21ISimsCounterTopObject(pIVar7);
          }
          else {
            uVar8 = CalcId__16EResourceManagerPCc("boxwood_hedge");
            if (uVar8 == uVar4) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/isiminstance.h */
              this_00 = (IShrubObject *)_memmanAlloc__FUiUi(0x2b0,0x10);
              memset(this_00,0,0x2b0);
                    /* end of inlined section */
              pEVar6 = (EISwimPool *)__12IShrubObject(this_00);
            }
            else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/isiminstance.h */
              this_01 = (ISimsObjectModel__26_3162 *)_memmanAlloc__FUiUi(0x2b0,0x10);
              memset(this_01,0,0x2b0);
                    /* end of inlined section */
              pEVar6 = (EISwimPool *)__16ISimsObjectModel(this_01);
            }
          }
        }
        else if (((uint)puVar2 >> 1 & 1) == 1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/isiminstance.h */
          pIVar5 = (ISimsWallObjectModel *)_memmanAlloc__FUiUi(0x2b0,0x10);
          memset(pIVar5,0,0x2b0);
                    /* end of inlined section */
          pEVar6 = (EISwimPool *)__20ISimsWallObjectModel(pIVar5);
        }
        else if (((uint)puVar2 >> 2 & 1) == 1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/isiminstance.h */
          pIVar7 = (ISimsCounterTopObject *)_memmanAlloc__FUiUi(0x2b0,0x10);
          memset(pIVar7,0,0x2b0);
                    /* end of inlined section */
          pEVar6 = (EISwimPool *)__21ISimsCounterTopObject(pIVar7);
        }
        else if (((uint)puVar2 >> 4 & 1) == 1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/isiminstance.h */
          pEVar6 = (EISwimPool *)_memmanAlloc__FUiUi(0x470,0x10);
          memset(pEVar6,0,0x470);
                    /* end of inlined section */
          pEVar6 = __10EISwimPool(pEVar6);
        }
        else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/isiminstance.h */
          this_02 = (ISimsMultiTileObjectModel *)_memmanAlloc__FUiUi(0x2b0,0x10);
          memset(this_02,0,0x2b0);
                    /* end of inlined section */
          pEVar6 = (EISwimPool *)__25ISimsMultiTileObjectModel(this_02);
        }
        pEVar3 = (((ISimsObjectModel__15_4971 *)&pEVar6->field0_0x0)->field0_0x0).field0_0x0.
                 field0_0x0.field0_0x0.__vtable;
        (*(code *)pEVar3[5].EStorable)
                  ((int)((((ISimsObjectModel__15_4971 *)&pEVar6->field0_0x0)->field0_0x0).field0_0x0
                         .field0_0x0.m_otd.m_minPos + 0xfffffff9) +
                   (int)*(short *)&pEVar3[5].GetTypeVersion,pXOb,this->m_pHouse);
        pEVar3 = (((ISimsObjectModel__15_4971 *)&pEVar6->field0_0x0)->field0_0x0).field0_0x0.
                 field0_0x0.field0_0x0.__vtable;
        (*(code *)pEVar3[6].GetTypeName)
                  ((int)((((ISimsObjectModel__15_4971 *)&pEVar6->field0_0x0)->field0_0x0).field0_0x0
                         .field0_0x0.m_otd.m_minPos + 0xfffffff9) +
                   (int)*(short *)&pEVar3[6].GetTypeInfo);
        ___7CTilePt(&tile,2);
        return (ISimInstance *)pEVar6;
      }
    }
    ___7CTilePt(&tile,2);
  }
  return (ISimInstance *)0x0;
}

void EIObjectMan::PostLoad() {
  ReOrientHouse__11EIObjectManb(this,false);
  return;
}

void EIObjectMan::DrawTileBoundRects(ERC *prc) {
  return;
}

void EIObjectMan::ReOrientHouse(bool countersOnly) {
	RBIterator it;
	RBIterator i;
	RBIterator i;
	
  bool bVar1;
  ISimInstance *this_00;
  ERedBlackTreeNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_objects).field0_0x0.m_list.m_pHead;
                    /* end of inlined section */
  if (pEVar2 != (ERedBlackTreeNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    this_00 = (ISimInstance *)pEVar2->value;
    while( true ) {
                    /* end of inlined section */
      bVar1 = GetIsPerson__12ISimInstance(this_00);
      if (bVar1) {
        pEVar2 = pEVar2->pNext;
      }
      else {
        (**(code **)(*(int *)&this_00->field_0x130 + 0x14))
                  ((undefined *)
                   ((int)(this_00->m_highlight + -6) +
                   (int)*(short *)(*(int *)&this_00->field_0x130 + 0x10)));
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
        pEVar2 = pEVar2->pNext;
      }
                    /* end of inlined section */
      if (pEVar2 == (ERedBlackTreeNode *)0x0) break;
      this_00 = (ISimInstance *)pEVar2->value;
    }
  }
  return;
}

void EIObjectMan::ReComputeLights() {
	RBIterator it;
	RBIterator i;
	RBIterator i;
	
  ISimsObjectModel__26_3162 *this_00;
  bool bVar1;
  ERedBlackTreeNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_objects).field0_0x0.m_list.m_pHead;
                    /* end of inlined section */
  if (pEVar2 != (ERedBlackTreeNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    this_00 = (ISimsObjectModel__26_3162 *)pEVar2->value;
    while( true ) {
                    /* end of inlined section */
      bVar1 = GetIsPerson__12ISimInstance(&this_00->field0_0x0);
      if (bVar1) {
        pEVar2 = pEVar2->pNext;
      }
      else {
        ReCalcLights3__16ISimsObjectModel(this_00);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
        pEVar2 = pEVar2->pNext;
      }
                    /* end of inlined section */
      if (pEVar2 == (ERedBlackTreeNode *)0x0) break;
      this_00 = (ISimsObjectModel__26_3162 *)pEVar2->value;
    }
  }
  return;
}

void EIObjectMan::HotSyncLighting() {
	RBIterator it;
	RBIterator i;
	RBIterator i;
	
  ISimsObjectModel__26_3162 *this_00;
  bool bVar1;
  ERedBlackTreeNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_objects).field0_0x0.m_list.m_pHead;
                    /* end of inlined section */
  if (pEVar2 != (ERedBlackTreeNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    this_00 = (ISimsObjectModel__26_3162 *)pEVar2->value;
    while( true ) {
                    /* end of inlined section */
      bVar1 = GetIsPerson__12ISimInstance(&this_00->field0_0x0);
      if (bVar1) {
        pEVar2 = pEVar2->pNext;
      }
      else {
        HotSyncLighting__16ISimsObjectModel(this_00);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
        pEVar2 = pEVar2->pNext;
      }
                    /* end of inlined section */
      if (pEVar2 == (ERedBlackTreeNode *)0x0) break;
      this_00 = (ISimsObjectModel__26_3162 *)pEVar2->value;
    }
  }
  return;
}

u32 GetHandleFromISimInstance(ISimInstance *p) {
	ISimInstance *pInst;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	
  ISimInstance *pIVar1;
  ERedBlackTreeNode *pEVar2;
  
  if ((_globals._pCurHouse != (EHouse__26_3190 *)0x0) &&
     ((_globals._pCurHouse)->m_pObjectMan != (EIObjectMan *)0x0)) {
    pEVar2 = ((_globals._pCurHouse)->m_pObjectMan->m_objects).field0_0x0.m_list.m_pHead;
    if (pEVar2 != (ERedBlackTreeNode *)0x0) {
      pIVar1 = (ISimInstance *)pEVar2->value;
      while( true ) {
        if (p == pIVar1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/iobjectman.h */
          return pEVar2->key;
        }
        pEVar2 = pEVar2->pNext;
        if (pEVar2 == (ERedBlackTreeNode *)0x0) break;
        pIVar1 = (ISimInstance *)pEVar2->value;
      }
    }
                    /* end of inlined section */
    return 0xffffffff;
  }
  return 0xffffffff;
}

ISimInstance* GetObjectInstance(u32 handle) {
	u32 handle;
	ISimInstance *pRet;
	u32 key;
	
  undefined1 *puVar1;
  ISimInstance *pIVar2;
  undefined8 unaff_retaddr;
  ISimInstance *pRet;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  if ((_globals._pCurHouse == (EHouse__26_3190 *)0x0) ||
     ((_globals._pCurHouse)->m_pObjectMan == (EIObjectMan *)0x0)) {
    pIVar2 = (ISimInstance *)0x0;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/iobjectman.h */
    pRet = (ISimInstance *)0x0;
    puVar1 = Find__C13ERedBlackTreeUiPUi
                       (&((_globals._pCurHouse)->m_pObjectMan->m_objects).field0_0x0,handle,
                        (uint *)&pRet);
    pIVar2 = (ISimInstance *)0x0;
    if (puVar1 != (undefined1 *)0x0) {
      pIVar2 = pRet;
    }
  }
  return pIVar2;
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

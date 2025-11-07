// STATUS: NOT STARTED

#include "iobject.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb3296;
	__vtbl_ptr_type *$vf2557;
	
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
	TreeSim *$vb3296;
	Int fIterations;
	TreeStack fStack;
	Int fLastTrans;
	bool fLastResult;
	StdPrm *fAutoStackArea;
	SInt16 fError;
	__vtbl_ptr_type *$vf3744;
	
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
	TreeSimImpl *$vb3744;
	cXObject *$vb2557;
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
	__vtbl_ptr_type *$vf3298;
	
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
	cXObjectImpl *$vb3298;
	cXMTObject *$vb3636;
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
	Panelstateman *$vb4884;
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
	Panelstateman *$vb4884;
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
	Panelstateman *$vb4884;
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
	Panelstateman *$vb4884;
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

// warning: multiple differing types with the same name (name not equal)
struct cXPortal : virtual cXMTObject {
	cXMTObject *$vb3636;
	__vtbl_ptr_type *$vf3235;
	
	cXPortal& operator=();
	cXPortal(int __in_chrg);
protected:
	cXPortal();
	/* vtable[1] */ virtual cXPortal(cXPortal*, int, void);
	void setPortalImpl(cXPortalImpl *obj);
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

float _newlightint = 1.1f;
float _newlightfallstart = 0.f;
float _newlightfallend = 9.f;
float _wallobjscale = 2.25f;

float _hlphase[2] = {
	/* [0] = */ 0.f,
	/* [1] = */ 0.f
};

u32 _hllastframe = 0;
float _hlfreq = 0.2f;
float _hlstartamp = 0.6f;
float _hlstartlen = 0.35f;
float _hlpulseamp = 0.f;
float _hlpulselen = 0.7f;
float _hlminscalestart = 1.3f;
float _hlminscalepulse = 1.2f;

EVec3 _hlcolor = {
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
};

EVec3 _hlcolor2 = {
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
};

ERShader *ISimsObjectModel::m_pWhiteShader = NULL;
bool _ISOM_bUpdateWarn = false;
bool _ISOM_bInitWarn = false;

TRedBlackTree<EILightmap *,EILightmap *> ISimsObjectModel::m_lightmapComputeList = {
	/* base class 0 = */ {
		/* .m_list = */ {
			/* .m_pHead = */ NULL,
			/* .m_pTail = */ NULL
		},
		/* .m_pRoot = */ NULL
	}
};

ISimsObjectModelPtrRBTree ISimsObjectModel::m_updateCalc3List = {
	/* base class 0 = */ {
		/* .m_list = */ {
			/* .m_pHead = */ NULL,
			/* .m_pTail = */ NULL
		},
		/* .m_pRoot = */ NULL
	}
};

EILightmapFloatTree ISimsObjectModel::m_lmcomputefloattree = {
	/* base class 0 = */ {
		/* .m_list = */ {
			/* .m_pHead = */ NULL,
			/* .m_pTail = */ NULL
		},
		/* .m_pRoot = */ NULL
	}
};

ETypeInfo *gpTypeInfo_ISimsObjectModel = NULL;
bool _drawbulbpos = false;
float _isom_minburpscale = 0.8f;
float _isom_maxburpscale = -0.7f;
bool _adjSunIntensity = false;
ETypeInfo *gpTypeInfo_ISimsWallObjectModel = NULL;
ETypeInfo *gpTypeInfo_ISimsMultiTileObjectModel = NULL;
ETypeInfo *gpTypeInfo_ISimsCounterTopObject = NULL;
ETypeInfo *gpTypeInfo_IShrubObject = NULL;

__vtbl_ptr_type IShrubObject::IBaseSimInstance virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &IShrubObject::~IShrubObject,
		/* .__delta2 = */ 5024
	},
	/* [2] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &IShrubObject::SetObjOrient,
		/* .__delta2 = */ 5208
	},
	/* [3] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::SetCursFlags,
		/* .__delta2 = */ 20656
	},
	/* [4] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::GetCursFlags,
		/* .__delta2 = */ 20664
	},
	/* [5] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::GetSimInstance,
		/* .__delta2 = */ 20672
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type IShrubObject virtual table[41] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IShrubObject::SafeDelete,
		/* .__delta2 = */ 11936
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IShrubObject::GetTypeInfo,
		/* .__delta2 = */ 11992
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IShrubObject::GetTypeName,
		/* .__delta2 = */ 12008
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IShrubObject::GetTypeKey,
		/* .__delta2 = */ 12024
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IShrubObject::GetTypeVersion,
		/* .__delta2 = */ 12040
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IShrubObject::~IShrubObject,
		/* .__delta2 = */ 5024
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::Read,
		/* .__delta2 = */ -25112
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::Write,
		/* .__delta2 = */ -25208
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::Init,
		/* .__delta2 = */ -5208
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::Update,
		/* .__delta2 = */ -15696
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::VisibilityTest,
		/* .__delta2 = */ -23936
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::Draw,
		/* .__delta2 = */ -5544
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::DrawWireFrame,
		/* .__delta2 = */ -5176
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::SetOrient,
		/* .__delta2 = */ -24728
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetUpdatePriority,
		/* .__delta2 = */ -5160
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::CollidePointWithInstance,
		/* .__delta2 = */ -23320
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::CollideSphereWithInstance,
		/* .__delta2 = */ -22192
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CollideTest,
		/* .__delta2 = */ -5136
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::CalcLights3,
		/* .__delta2 = */ -8232
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::GetBoundSphere,
		/* .__delta2 = */ -25000
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetTriggerList,
		/* .__delta2 = */ -5104
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::ReadInstanceData,
		/* .__delta2 = */ -5096
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::SetLevel,
		/* .__delta2 = */ -5088
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::GetDrawMatrix,
		/* .__delta2 = */ -5776
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IShrubObject::Create,
		/* .__delta2 = */ 5120
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::OrentSubObject,
		/* .__delta2 = */ 17496
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::SetCarryOrient,
		/* .__delta2 = */ 17552
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::CreateShadow,
		/* .__delta2 = */ -8400
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::InsertSubModelsInHouse,
		/* .__delta2 = */ -15880
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::RemoveSubModelsFromHouse,
		/* .__delta2 = */ -9360
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::PropigateFlagsToSubModels,
		/* .__delta2 = */ -15800
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::GetShadow,
		/* .__delta2 = */ 10808
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::SetOutOfWorld,
		/* .__delta2 = */ -8248
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::StartBurp,
		/* .__delta2 = */ -5792
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::TestForCursorOverlap,
		/* .__delta2 = */ 18928
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::GetObCenter,
		/* .__delta2 = */ 20040
	},
	/* [37] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::SetPlacementError,
		/* .__delta2 = */ 17456
	},
	/* [38] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::IsMultiTilePart,
		/* .__delta2 = */ 6952
	},
	/* [39] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::OrentSubObject,
		/* .__delta2 = */ -1672
	},
	/* [40] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ISimsCounterTopObject::IBaseSimInstance virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsCounterTopObject::~ISimsCounterTopObject,
		/* .__delta2 = */ 2664
	},
	/* [2] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsCounterTopObject::SetObjOrient,
		/* .__delta2 = */ 2800
	},
	/* [3] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::SetCursFlags,
		/* .__delta2 = */ 20656
	},
	/* [4] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::GetCursFlags,
		/* .__delta2 = */ 20664
	},
	/* [5] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::GetSimInstance,
		/* .__delta2 = */ 20672
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ISimsCounterTopObject virtual table[41] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsCounterTopObject::SafeDelete,
		/* .__delta2 = */ 11632
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsCounterTopObject::GetTypeInfo,
		/* .__delta2 = */ 11688
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsCounterTopObject::GetTypeName,
		/* .__delta2 = */ 11704
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsCounterTopObject::GetTypeKey,
		/* .__delta2 = */ 11720
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsCounterTopObject::GetTypeVersion,
		/* .__delta2 = */ 11736
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsCounterTopObject::~ISimsCounterTopObject,
		/* .__delta2 = */ 2664
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::Read,
		/* .__delta2 = */ -25112
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::Write,
		/* .__delta2 = */ -25208
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::Init,
		/* .__delta2 = */ -5208
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsCounterTopObject::Update,
		/* .__delta2 = */ 4856
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::VisibilityTest,
		/* .__delta2 = */ -23936
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::Draw,
		/* .__delta2 = */ -5544
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::DrawWireFrame,
		/* .__delta2 = */ -5176
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::SetOrient,
		/* .__delta2 = */ -24728
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetUpdatePriority,
		/* .__delta2 = */ -5160
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::CollidePointWithInstance,
		/* .__delta2 = */ -23320
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::CollideSphereWithInstance,
		/* .__delta2 = */ -22192
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CollideTest,
		/* .__delta2 = */ -5136
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::CalcLights3,
		/* .__delta2 = */ -8232
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::GetBoundSphere,
		/* .__delta2 = */ -25000
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetTriggerList,
		/* .__delta2 = */ -5104
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::ReadInstanceData,
		/* .__delta2 = */ -5096
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::SetLevel,
		/* .__delta2 = */ -5088
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::GetDrawMatrix,
		/* .__delta2 = */ -5776
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsCounterTopObject::Create,
		/* .__delta2 = */ 2760
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::OrentSubObject,
		/* .__delta2 = */ 17496
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::SetCarryOrient,
		/* .__delta2 = */ 17552
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::CreateShadow,
		/* .__delta2 = */ -8400
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::InsertSubModelsInHouse,
		/* .__delta2 = */ -15880
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::RemoveSubModelsFromHouse,
		/* .__delta2 = */ -9360
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::PropigateFlagsToSubModels,
		/* .__delta2 = */ -15800
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::GetShadow,
		/* .__delta2 = */ 10808
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::SetOutOfWorld,
		/* .__delta2 = */ -8248
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::StartBurp,
		/* .__delta2 = */ -5792
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::TestForCursorOverlap,
		/* .__delta2 = */ 18928
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::GetObCenter,
		/* .__delta2 = */ 20040
	},
	/* [37] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::SetPlacementError,
		/* .__delta2 = */ 17456
	},
	/* [38] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::IsMultiTilePart,
		/* .__delta2 = */ 6952
	},
	/* [39] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::OrentSubObject,
		/* .__delta2 = */ -1672
	},
	/* [40] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ISimsMultiTileObjectModel::IBaseSimInstance virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsMultiTileObjectModel::~ISimsMultiTileObjectModel,
		/* .__delta2 = */ 1328
	},
	/* [2] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsMultiTileObjectModel::SetObjOrient,
		/* .__delta2 = */ 1512
	},
	/* [3] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::SetCursFlags,
		/* .__delta2 = */ 20656
	},
	/* [4] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::GetCursFlags,
		/* .__delta2 = */ 20664
	},
	/* [5] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::GetSimInstance,
		/* .__delta2 = */ 20672
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ISimsMultiTileObjectModel virtual table[41] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsMultiTileObjectModel::SafeDelete,
		/* .__delta2 = */ 11328
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsMultiTileObjectModel::GetTypeInfo,
		/* .__delta2 = */ 11384
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsMultiTileObjectModel::GetTypeName,
		/* .__delta2 = */ 11400
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsMultiTileObjectModel::GetTypeKey,
		/* .__delta2 = */ 11416
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsMultiTileObjectModel::GetTypeVersion,
		/* .__delta2 = */ 11432
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsMultiTileObjectModel::~ISimsMultiTileObjectModel,
		/* .__delta2 = */ 1328
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::Read,
		/* .__delta2 = */ -25112
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::Write,
		/* .__delta2 = */ -25208
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::Init,
		/* .__delta2 = */ -5208
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::Update,
		/* .__delta2 = */ -15696
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::VisibilityTest,
		/* .__delta2 = */ -23936
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::Draw,
		/* .__delta2 = */ -5544
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::DrawWireFrame,
		/* .__delta2 = */ -5176
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::SetOrient,
		/* .__delta2 = */ -24728
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetUpdatePriority,
		/* .__delta2 = */ -5160
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::CollidePointWithInstance,
		/* .__delta2 = */ -23320
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::CollideSphereWithInstance,
		/* .__delta2 = */ -22192
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CollideTest,
		/* .__delta2 = */ -5136
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::CalcLights3,
		/* .__delta2 = */ -8232
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::GetBoundSphere,
		/* .__delta2 = */ -25000
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetTriggerList,
		/* .__delta2 = */ -5104
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::ReadInstanceData,
		/* .__delta2 = */ -5096
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::SetLevel,
		/* .__delta2 = */ -5088
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::GetDrawMatrix,
		/* .__delta2 = */ -5776
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsMultiTileObjectModel::Create,
		/* .__delta2 = */ 1424
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::OrentSubObject,
		/* .__delta2 = */ 17496
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::SetCarryOrient,
		/* .__delta2 = */ 17552
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::CreateShadow,
		/* .__delta2 = */ -8400
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::InsertSubModelsInHouse,
		/* .__delta2 = */ -15880
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::RemoveSubModelsFromHouse,
		/* .__delta2 = */ -9360
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::PropigateFlagsToSubModels,
		/* .__delta2 = */ -15800
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::GetShadow,
		/* .__delta2 = */ 10808
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::SetOutOfWorld,
		/* .__delta2 = */ -8248
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::StartBurp,
		/* .__delta2 = */ -5792
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::TestForCursorOverlap,
		/* .__delta2 = */ 18928
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::GetObCenter,
		/* .__delta2 = */ 20040
	},
	/* [37] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::SetPlacementError,
		/* .__delta2 = */ 17456
	},
	/* [38] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::IsMultiTilePart,
		/* .__delta2 = */ 6952
	},
	/* [39] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::OrentSubObject,
		/* .__delta2 = */ -1672
	},
	/* [40] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ISimsWallObjectModel::IBaseSimInstance virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsWallObjectModel::~ISimsWallObjectModel,
		/* .__delta2 = */ -1192
	},
	/* [2] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsWallObjectModel::SetObjOrient,
		/* .__delta2 = */ -1000
	},
	/* [3] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::SetCursFlags,
		/* .__delta2 = */ 20656
	},
	/* [4] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::GetCursFlags,
		/* .__delta2 = */ 20664
	},
	/* [5] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::GetSimInstance,
		/* .__delta2 = */ 20672
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ISimsWallObjectModel virtual table[41] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsWallObjectModel::SafeDelete,
		/* .__delta2 = */ 11024
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsWallObjectModel::GetTypeInfo,
		/* .__delta2 = */ 11080
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsWallObjectModel::GetTypeName,
		/* .__delta2 = */ 11096
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsWallObjectModel::GetTypeKey,
		/* .__delta2 = */ 11112
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsWallObjectModel::GetTypeVersion,
		/* .__delta2 = */ 11128
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsWallObjectModel::~ISimsWallObjectModel,
		/* .__delta2 = */ -1192
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::Read,
		/* .__delta2 = */ -25112
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::Write,
		/* .__delta2 = */ -25208
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::Init,
		/* .__delta2 = */ -5208
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::Update,
		/* .__delta2 = */ -15696
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::VisibilityTest,
		/* .__delta2 = */ -23936
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::Draw,
		/* .__delta2 = */ -5544
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::DrawWireFrame,
		/* .__delta2 = */ -5176
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::SetOrient,
		/* .__delta2 = */ -24728
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetUpdatePriority,
		/* .__delta2 = */ -5160
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::CollidePointWithInstance,
		/* .__delta2 = */ -23320
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::CollideSphereWithInstance,
		/* .__delta2 = */ -22192
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CollideTest,
		/* .__delta2 = */ -5136
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::CalcLights3,
		/* .__delta2 = */ -8232
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::GetBoundSphere,
		/* .__delta2 = */ -25000
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetTriggerList,
		/* .__delta2 = */ -5104
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::ReadInstanceData,
		/* .__delta2 = */ -5096
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::SetLevel,
		/* .__delta2 = */ -5088
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::GetDrawMatrix,
		/* .__delta2 = */ -5776
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsWallObjectModel::Create,
		/* .__delta2 = */ -1088
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::OrentSubObject,
		/* .__delta2 = */ 17496
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::SetCarryOrient,
		/* .__delta2 = */ 17552
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsWallObjectModel::CreateShadow,
		/* .__delta2 = */ -1096
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::InsertSubModelsInHouse,
		/* .__delta2 = */ -15880
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::RemoveSubModelsFromHouse,
		/* .__delta2 = */ -9360
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::PropigateFlagsToSubModels,
		/* .__delta2 = */ -15800
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::GetShadow,
		/* .__delta2 = */ 10808
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::SetOutOfWorld,
		/* .__delta2 = */ -8248
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::StartBurp,
		/* .__delta2 = */ -5792
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::TestForCursorOverlap,
		/* .__delta2 = */ 18928
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::GetObCenter,
		/* .__delta2 = */ 20040
	},
	/* [37] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::SetPlacementError,
		/* .__delta2 = */ 17456
	},
	/* [38] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::IsMultiTilePart,
		/* .__delta2 = */ 6952
	},
	/* [39] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::OrentSubObject,
		/* .__delta2 = */ -1672
	},
	/* [40] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ISimsObjectModel::IBaseSimInstance virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::~ISimsObjectModel,
		/* .__delta2 = */ -16936
	},
	/* [2] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::SetObjOrient,
		/* .__delta2 = */ -2056
	},
	/* [3] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::SetCursFlags,
		/* .__delta2 = */ 20656
	},
	/* [4] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::GetCursFlags,
		/* .__delta2 = */ 20664
	},
	/* [5] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::GetSimInstance,
		/* .__delta2 = */ 20672
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ISimsObjectModel virtual table[41] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::SafeDelete,
		/* .__delta2 = */ 10512
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::GetTypeInfo,
		/* .__delta2 = */ 10568
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::GetTypeName,
		/* .__delta2 = */ 10584
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::GetTypeKey,
		/* .__delta2 = */ 10600
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::GetTypeVersion,
		/* .__delta2 = */ 10616
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::~ISimsObjectModel,
		/* .__delta2 = */ -16936
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::Read,
		/* .__delta2 = */ -25112
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::Write,
		/* .__delta2 = */ -25208
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::Init,
		/* .__delta2 = */ -5208
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::Update,
		/* .__delta2 = */ -15696
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::VisibilityTest,
		/* .__delta2 = */ -23936
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::Draw,
		/* .__delta2 = */ -5544
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::DrawWireFrame,
		/* .__delta2 = */ -5176
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::SetOrient,
		/* .__delta2 = */ -24728
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetUpdatePriority,
		/* .__delta2 = */ -5160
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::CollidePointWithInstance,
		/* .__delta2 = */ -23320
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::CollideSphereWithInstance,
		/* .__delta2 = */ -22192
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CollideTest,
		/* .__delta2 = */ -5136
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::CalcLights3,
		/* .__delta2 = */ -8232
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::GetBoundSphere,
		/* .__delta2 = */ -25000
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetTriggerList,
		/* .__delta2 = */ -5104
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::ReadInstanceData,
		/* .__delta2 = */ -5096
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::SetLevel,
		/* .__delta2 = */ -5088
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::GetDrawMatrix,
		/* .__delta2 = */ -5776
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::Create,
		/* .__delta2 = */ -2160
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::OrentSubObject,
		/* .__delta2 = */ 17496
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::SetCarryOrient,
		/* .__delta2 = */ 17552
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::CreateShadow,
		/* .__delta2 = */ -8400
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::InsertSubModelsInHouse,
		/* .__delta2 = */ -15880
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::RemoveSubModelsFromHouse,
		/* .__delta2 = */ -9360
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::PropigateFlagsToSubModels,
		/* .__delta2 = */ -15800
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::GetShadow,
		/* .__delta2 = */ 10808
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::SetOutOfWorld,
		/* .__delta2 = */ -8248
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::StartBurp,
		/* .__delta2 = */ -5792
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::TestForCursorOverlap,
		/* .__delta2 = */ 18928
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::GetObCenter,
		/* .__delta2 = */ 20040
	},
	/* [37] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::SetPlacementError,
		/* .__delta2 = */ 17456
	},
	/* [38] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::IsMultiTilePart,
		/* .__delta2 = */ 6952
	},
	/* [39] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimsObjectModel::OrentSubObject,
		/* .__delta2 = */ -1672
	},
	/* [40] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo ISimsObjectModel::m_typeInfo;
ETypeInfo ISimsWallObjectModel::m_typeInfo;
ETypeInfo ISimsMultiTileObjectModel::m_typeInfo;
ETypeInfo ISimsCounterTopObject::m_typeInfo;
ETypeInfo IShrubObject::m_typeInfo;

EParticleEffect* EParticleEffect::EParticleEffect() {
  this->m_pType = (ERParticleType *)0x0;
  this->m_pEmit = (EIParticleEmit *)0x0;
  return this;
}

EParticleEffect* EParticleEffect::EParticleEffect(u32 typeId) {
	EHouse *this;
	
  ERParticleType *pEVar1;
  EIParticleEmit *pEVar2;
  
                    /* inlined from /eor/src2/engine/particle/e_particletypeman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/particle/e_particletypeman.h */
  pEVar1 = (ERParticleType *)
           AddRef__16EResourceManagerUiP5EFilei(&_particletypeman.field0_0x0,typeId,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pType = pEVar1;
                    /* inlined from /eor/src2/engine/particle/e_particleemit.h */
  pEVar2 = (EIParticleEmit *)_allocBucketAlloc__FUiUi(0x124,0x1b);
                    /* end of inlined section */
  pEVar2 = __14EIParticleEmit(pEVar2);
  this->m_pEmit = pEVar2;
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
  InsertInstance__7ERLevelP9EInstanceT1
            ((_globals._pCurHouse)->m_pLevel,(EInstance *)pEVar2,(EInstance *)0x0);
  Type__14EIParticleEmitP14ERParticleType(this->m_pEmit,this->m_pType);
  return this;
}

void EParticleEffect::~EParticleEffect(int __in_chrg) {
	void *pAddress;
	
  AddParticleEffectToOrphanMan__7EGlobalP14ERParticleTypeP14EIParticleEmit
            (&_globals,this->m_pType,this->m_pEmit);
  this->m_pType = (ERParticleType *)0x0;
  this->m_pEmit = (EIParticleEmit *)0x0;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void EParticleEffect::SetPos(EMat4 &m, EVec3 &vPos) {
	EVec3 v;
	EVec3 &v;
	EMat4 *this;
	EIParticleEmit *this;
	
  undefined *puVar1;
  EIParticleEmit *pEVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  EVec3 v;
  
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar11 = (vPos->field0_0x0).d[0];
  fVar10 = (vPos->field0_0x0).d[1];
  fVar6 = (m->field0_0x0).d[2];
  fVar7 = (m->field0_0x0).d[1][2];
  v.field0_0x0.d[2] = (vPos->field0_0x0).d[2];
  fVar8 = (m->field0_0x0).d[2][2];
  fVar9 = (m->field0_0x0).d[3][2];
  pEVar2 = this->m_pEmit;
                    /* end of inlined section */
  uVar5 = CONCAT44(fVar11 * (m->field0_0x0).d[1] + fVar10 * (m->field0_0x0).d[1][1] +
                   v.field0_0x0.d[2] * (m->field0_0x0).d[2][1] + (m->field0_0x0).d[3][1],
                   fVar11 * (m->field0_0x0).d[0] + fVar10 * (m->field0_0x0).d[1][0] +
                   v.field0_0x0.d[2] * (m->field0_0x0).d[2][0] + (m->field0_0x0).d[3][0]);
  puVar1 = (undefined *)((int)&v.field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar5 >> (7 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(pEVar2->m_vPos).field0_0x0 + 7);
                    /* inlined from /eor/src2/engine/particle/e_particleemit.h */
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar5 >> (7 - uVar3) * 8;
  uVar3 = (uint)&pEVar2->m_vPos & 7;
  puVar4 = (ulong *)((int)&pEVar2->m_vPos - uVar3);
  *puVar4 = uVar5 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  (pEVar2->m_vPos).field0_0x0.d[2] =
       fVar11 * fVar6 + fVar10 * fVar7 + v.field0_0x0.d[2] * fVar8 + fVar9;
  return;
}

float CalcRotAngleOff(float rot) {
	float frot;
	float thetadelt1;
	float thetadelt2;
	
  if ((ABS(1.570796 - ABS(rot)) < 0.001) || (ABS(4.712389 - ABS(rot)) < 0.001)) {
    rot = -rot;
  }
  return rot;
}

void EParticleEffect::SetDir(float rot, EVec3 &vPos) {
	float frot;
	EMat4 mat;
	EVec3 vdir;
	EVec3 &v;
	EIParticleEmit *this;
	
  undefined *puVar1;
  EIParticleEmit *pEVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  EMat4 mat;
  EVec3 vdir;
  
  fVar6 = CalcRotAngleOff__Ff(rot);
  Id__5EMat4(&mat);
  RotateZ__5EMat4f(&mat,fVar6);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar7 = (vPos->field0_0x0).d[0];
  fVar6 = (vPos->field0_0x0).d[1];
  vdir.field0_0x0.d[2] = (vPos->field0_0x0).d[2];
  pEVar2 = this->m_pEmit;
                    /* end of inlined section */
  uVar5 = CONCAT44(fVar7 * mat.field0_0x0.d[0][1] + fVar6 * mat.field0_0x0.d[1][1] +
                   vdir.field0_0x0.d[2] * mat.field0_0x0.d[2][1] + mat.field0_0x0.d[3][1],
                   fVar7 * mat.field0_0x0.d[0][0] + fVar6 * mat.field0_0x0.d[1][0] +
                   vdir.field0_0x0.d[2] * mat.field0_0x0.d[2][0] + mat.field0_0x0.d[3][0]);
  puVar1 = (undefined *)((int)&vdir.field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar5 >> (7 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(pEVar2->m_vDir).field0_0x0 + 7);
                    /* inlined from /eor/src2/engine/particle/e_particleemit.h */
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar5 >> (7 - uVar3) * 8;
  uVar3 = (uint)&pEVar2->m_vDir & 7;
  puVar4 = (ulong *)((int)&pEVar2->m_vDir - uVar3);
  *puVar4 = uVar5 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  (pEVar2->m_vDir).field0_0x0.d[2] =
       fVar7 * mat.field0_0x0.d[0][2] + fVar6 * mat.field0_0x0.d[1][2] +
       vdir.field0_0x0.d[2] * mat.field0_0x0.d[2][2] + mat.field0_0x0.d[3][2];
  return;
}

EParticleObj* EParticleObj::EParticleObj() {
	TNodeList<EParticleEffect *> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_effectList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_effectList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  return this;
}

void EParticleObj::~EParticleObj(int __in_chrg) {
	TNodeList<EParticleEffect *> *this;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator next;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	TNodeList<EParticleEffect *> *this;
	ENodeList *this;
	void *pAddress;
	void *pAddress;
	
  ENodeListNode *pEVar1;
  EParticleEffect *this_00;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_effectList).field0_0x0.m_l.m_pHead;
  if (pEVar1 != (ENodeListNode *)0x0) {
    this_00 = (EParticleEffect *)pEVar1->data;
    while( true ) {
      pEVar1 = pEVar1->pNext;
      if (this_00 != (EParticleEffect *)0x0) {
        ___15EParticleEffect(this_00,3);
      }
      if (pEVar1 == (ENodeListNode *)0x0) break;
      this_00 = (EParticleEffect *)pEVar1->data;
    }
  }
  RemoveAll__9ENodeList((ENodeList *)this);
  RemoveAll__9ENodeList((ENodeList *)this);
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EParticleObj::CreateEffects(EMat4 &mObj, float theata, ObjAnimDef *pAnimDef) {
	TNodeList<EParticleEffect *> *this;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator next;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	VECTOR<EParticleInfoNode> *this;
	int i;
	VECTOR<EParticleInfoNode> *this;
	unsigned int n;
	VECTOR<EParticleInfoNode> *this;
	TNodeList<EParticleEffect *> *this;
	
  EParticleInfoNode *pEVar1;
  ENodeListNode *pEVar2;
  EParticleEffect *pEVar3;
  uint *puVar4;
  float fVar5;
  int iVar6;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_effectList).field0_0x0.m_l.m_pHead;
  if (pEVar2 != (ENodeListNode *)0x0) {
    pEVar3 = (EParticleEffect *)pEVar2->data;
    while( true ) {
      pEVar2 = pEVar2->pNext;
      if (pEVar3 != (EParticleEffect *)0x0) {
        ___15EParticleEffect(pEVar3,3);
      }
      if (pEVar2 == (ENodeListNode *)0x0) break;
      pEVar3 = (EParticleEffect *)pEVar2->data;
    }
  }
  RemoveAll__9ENodeList((ENodeList *)this);
  pEVar1 = (pAnimDef->pParticleInfo->vParticles).pData;
  if (pEVar1 == (EParticleInfoNode *)0x0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = pEVar1[-1].dirz;
  }
                    /* end of inlined section */
  if ((fVar5 != 0.0) && (0 < (int)fVar5)) {
    iVar6 = 0;
    do {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      puVar4 = (uint *)((int)&((pAnimDef->pParticleInfo->vParticles).pData)->particleID + iVar6);
                    /* end of inlined section */
      if (*puVar4 != 0) {
        pEVar3 = (EParticleEffect *)__builtin_new(8);
        pEVar3 = __15EParticleEffectUi(pEVar3,*puVar4);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        AddTail__9ENodeListUi((ENodeList *)this,(uint)pEVar3);
                    /* end of inlined section */
      }
      fVar5 = (float)((int)fVar5 + -1);
      iVar6 = iVar6 + 0x1c;
    } while (fVar5 != 0.0);
  }
  return;
}

void EParticleObj::UpdateEffectPos(float rot, EMat4 &mObj, ObjAnimDef *pAnimDef) {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	EVec3 vdir;
	VECTOR<EParticleInfoNode> *this;
	VECTOR<EParticleInfoNode> *this;
	float x;
	float y;
	float z;
	float x;
	float y;
	float z;
	
  EParticleEffect *this_00;
  EParticleInfoNode *pEVar1;
  ENodeListNode *pEVar2;
  int iVar3;
  EVec3 vdir;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_effectList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar2 != (ENodeListNode *)0x0) {
    iVar3 = 0;
    do {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      this_00 = (EParticleEffect *)pEVar2->data;
                    /* end of inlined section */
      if (this_00 != (EParticleEffect *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
        pEVar1 = (pAnimDef->pParticleInfo->vParticles).pData;
        vdir.field0_0x0.d[0] = *(float *)((int)&pEVar1->posx + iVar3);
        vdir.field0_0x0.d[1] = *(float *)((int)&pEVar1->posy + iVar3);
        vdir.field0_0x0.d[2] = *(float *)((int)&pEVar1->posz + iVar3);
                    /* end of inlined section */
        SetPos__15EParticleEffectRC5EMat4RC5EVec3(this_00,mObj,&vdir);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vdir.field0_0x0.d[2] = *(float *)((int)&pEVar1->dirz + iVar3);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vdir.field0_0x0.d[0] = *(float *)((int)&pEVar1->diry + iVar3);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vdir.field0_0x0.d[1] = *(float *)((int)&pEVar1->dirx + iVar3);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        SetDir__15EParticleEffectfRC5EVec3(this_00,rot,&vdir);
      }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar2 = pEVar2->pNext;
                    /* end of inlined section */
      iVar3 = iVar3 + 0x1c;
    } while (pEVar2 != (ENodeListNode *)0x0);
  }
  return;
}

EStream& operator<<(EStream &s, ISimsObjectModel *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, ISimsObjectModel *&pD) {
	EStorable *pStorable;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EStorable *pStorable;
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
  __rs__FR7EStreamRP9EStorable(s,&pStorable);
  *pD = (ISimsObjectModel__26_3162 *)pStorable;
  return s;
}

ISimsObjectModel* ISimsObjectModel::ISimsObjectModel() {
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  __12ISimInstance(&this->field0_0x0);
  *(__vtbl_ptr_type **)&(this->field0_0x0).field_0x130 = _vt_16ISimsObjectModel_16IBaseSimInstance;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EStorable__vtable *)_vt_16ISimsObjectModel;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_subModelList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_subModelList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
  iVar3 = 1;
  do {
    bVar1 = iVar3 != -1;
    iVar3 = iVar3 + -1;
  } while (bVar1);
  this->m_pEHouse = (EHouse__26_3190 *)0x0;
  uVar4 = *(ulong *)&this->m_pEHouse;
  uVar2 = (this->field0_0x0).field0_0x0.field0_0x0.m_instanceFlags;
  this->m_lastGraphic = 0xffffffff;
  this->m_burpTime = 60.0;
  (this->field0_0x0).field0_0x0.field0_0x0.m_instanceFlags = uVar2 | 0x300;
  this->p2blendidx[1] = 1;
  *(ulong *)&this->m_pEHouse = uVar4 & 0xffffffe0ffffffff;
  (this->field0_0x0).m_pXOb = (cXObject__179_1116 *)0x0;
  this->m_pShadow = (EIStaticModel *)0x0;
  this->m_pCurParticleObj = (EParticleObj *)0x0;
  this->m_pLightBulb = (EILight *)0x0;
  this->m_pCurShader = (ERShader *)0x0;
  this->m_pWall = (EIWallPart2 *)0x0;
  this->m_nTracks = 0;
  this->m_time = 0.0;
  (this->m_curState).animationID = 0;
  (this->m_curState).modelID = 0;
  (this->m_curState).searchShdID = 0;
  (this->m_curState).shaderID = 0;
  (this->m_curState).pParticleInfo = (EParticleInfo *)0x0;
  (this->field0_0x0).m_cursFlags = 0;
  *(undefined4 *)&(this->field0_0x0).field0_0x0.m_dynamiclyLit = 1;
  this->p1blendidx[0] = 0;
  this->p1blendidx[1] = 1;
  this->p2blendidx[0] = 0;
  this->m_curShdId = 0;
  this->m_lastdir = 0;
  this->m_highlightTime[0] = 0.0;
  this->m_highlightTime[1] = 0.0;
  return this;
}

void ISimsObjectModel::~ISimsObjectModel(int __in_chrg) {
	RBIterator itr;
	NLIterator i;
	ISimsObjectModel *key;
	RBIterator i;
	NLIterator i;
	NLIterator i;
	RBIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	void *p;
	
  EILight *pEVar1;
  EIStaticModel *pEVar2;
  EStorable__vtable *pEVar3;
  int *piVar4;
  undefined1 *puVar5;
  uint key;
  ENodeListNode *pEVar6;
  
  *(__vtbl_ptr_type **)&(this->field0_0x0).field_0x130 = _vt_16ISimsObjectModel_16IBaseSimInstance;
  pEVar1 = this->m_pLightBulb;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EStorable__vtable *)_vt_16ISimsObjectModel;
  if (pEVar1 != (EILight *)0x0) {
    OverlapLightmapCollect__16ISimsObjectModelP7EILight(this,pEVar1);
  }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  puVar5 = Find__C13ERedBlackTreeUiPUi
                     (&_16ISimsObjectModel_m_updateCalc3List.field0_0x0,(uint)this,(uint *)0x0);
                    /* end of inlined section */
  if (puVar5 != (undefined1 *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    Remove__13ERedBlackTreeP17RBIteratorPtrType
              (&_16ISimsObjectModel_m_updateCalc3List.field0_0x0,puVar5);
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar6 = (this->m_subModelList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar6 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    key = pEVar6->data;
    while( true ) {
      puVar5 = Find__C13ERedBlackTreeUiPUi
                         (&_16ISimsObjectModel_m_updateCalc3List.field0_0x0,key,(uint *)0x0);
                    /* end of inlined section */
      if (puVar5 != (undefined1 *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
        Remove__13ERedBlackTreeP17RBIteratorPtrType
                  (&_16ISimsObjectModel_m_updateCalc3List.field0_0x0,puVar5);
      }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar6 = pEVar6->pNext;
                    /* end of inlined section */
      if (pEVar6 == (ENodeListNode *)0x0) break;
      key = pEVar6->data;
    }
  }
  pEVar2 = this->m_pShadow;
  if (pEVar2 != (EIStaticModel *)0x0) {
    pEVar3 = (pEVar2->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar3[1].GetTypeKey)
              ((int)((pEVar2->field0_0x0).m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar3[1].GetTypeName,3);
  }
  this->m_pShadow = (EIStaticModel *)0x0;
  if (this->m_pCurParticleObj != (EParticleObj *)0x0) {
    ___12EParticleObj(this->m_pCurParticleObj,3);
  }
  pEVar1 = this->m_pLightBulb;
  this->m_pCurParticleObj = (EParticleObj *)0x0;
  if (pEVar1 != (EILight *)0x0) {
    pEVar3 = (pEVar1->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar3[1].GetTypeKey)
              ((int)((pEVar1->field0_0x0).m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar3[1].GetTypeName,3);
  }
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar6 = (this->m_subModelList).field0_0x0.m_l.m_pHead;
  this->m_pLightBulb = (EILight *)0x0;
  if (pEVar6 != (ENodeListNode *)0x0) {
    piVar4 = (int *)pEVar6->data;
    while( true ) {
      pEVar6 = pEVar6->pNext;
      (**(code **)(*piVar4 + 0xc))((int)piVar4 + (int)*(short *)(*piVar4 + 8));
      if (pEVar6 == (ENodeListNode *)0x0) break;
      piVar4 = (int *)pEVar6->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_subModelList).field0_0x0);
                    /* end of inlined section */
  while (this->m_pCurShader != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pCurShader->field0_0x0);
    this->m_pCurShader = (ERShader *)0x0;
  }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  RemoveAll__9ENodeList(&(this->m_subModelList).field0_0x0);
                    /* end of inlined section */
  ___12ISimInstance(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/isiminstance.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

float ISimsObjectModel::GetHeightOffset() {
	float height;
	cXObject *pContainerOb;
	cXObject *this;
	TreeSim *this;
	EVec3 vHandPos;
	ISimInstance *pContainerInst;
	ISimInstance *this;
	EInstance *this;
	
  short sVar1;
  undefined2 uVar2;
  cXObject__179_1116 *pcVar3;
  ObjectModule__vtable *pOVar4;
  int iVar5;
  cXObject__179_1116__vtable *pcVar6;
  ObjectModule__vtable **ppOVar7;
  int iVar8;
  int *piVar9;
  long lVar10;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  float fVar11;
  undefined4 uVar12;
  EVec3 vHandPos;
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
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if ((*(ulong *)&this->m_pEHouse & 0x800000000) == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
    pcVar3 = (this->field0_0x0).m_pXOb;
                    /* end of inlined section */
    pOVar4 = _5Globs_pObjectModule->__vtable;
    sVar1 = *(short *)&pOVar4->SetSelectedPerson;
                    /* inlined from ../MSrc/object.h */
    ppOVar7 = &_5Globs_pObjectModule->__vtable;
    if (pcVar3 == (cXObject__179_1116 *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (*(code *)pcVar3->__vtable[1].GetObjectImplementation)
                        ((int)&pcVar3->_vb1050 + (int)*(short *)&pcVar3->__vtable[1].AdvanceGraphic)
      ;
    }
                    /* end of inlined section */
    lVar10 = (*(code *)pOVar4->AdvanceSelectedPerson)
                       ((int)ppOVar7 + (int)sVar1,*(undefined2 *)(iVar8 + 0x2a));
    uVar12 = 0.0;
    if (lVar10 != 0) {
                    /* inlined from ../MSrc/TreeSim.h */
      iVar8 = *(int *)lVar10;
                    /* end of inlined section */
      if (*(int *)(iVar8 + 0x18) == 0) {
        lVar10 = (**(code **)(*(int *)(iVar8 + 0x1c) + 0x84))
                           (iVar8 + *(short *)(*(int *)(iVar8 + 0x1c) + 0x80));
                    /* inlined from c:/eor/src2/games/sims/ESRC/isiminstance.h */
                    /* end of inlined section */
        if ((lVar10 == 0) || (*(int *)((int)lVar10 + 300) == 0)) {
          uVar12 = 0.0;
        }
        else {
                    /* end of inlined section */
          uVar12 = *(float *)((int)lVar10 + 0x3c) + 0.01;
        }
      }
      else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        iVar8 = *(int *)(*(int *)(iVar8 + 0x18) + 0x1b0);
                    /* end of inlined section */
        iVar5 = *(int *)(iVar8 + 4);
        piVar9 = (int *)(**(code **)(iVar5 + 0x124))(iVar8 + *(short *)(iVar5 + 0x120));
        (**(code **)(*piVar9 + 0x104))
                  ((int)piVar9 + (int)*(short *)(*piVar9 + 0x100),0x27,&vHandPos);
        uVar12 = vHandPos.field0_0x0.d[2];
      }
    }
    if (0.001 < uVar12) {
      if (uVar12 < -1.0) {
        return -1.0;
      }
      return (float)((int)uVar12 * (uint)(uVar12 < 1.0) | (uint)(uVar12 >= 1.0) * 0x3f800000);
    }
    pcVar3 = (this->field0_0x0).m_pXOb;
    pcVar6 = pcVar3->__vtable;
    sVar1 = *(short *)&pcVar6[1].SetRenderLayer;
                    /* inlined from ../MSrc/object.h */
    uVar2 = uRam0000002c;
    if (pcVar3 != (cXObject__179_1116 *)0x0) {
      iVar8 = (*(code *)pcVar6[1].GetObjectImplementation)
                        ((int)&pcVar3->_vb1050 + (int)*(short *)&pcVar6[1].AdvanceGraphic);
      uVar2 = *(undefined2 *)(iVar8 + 0x2c);
    }
    local_60[0] = (float)(*(code *)pcVar6[1].GetDynamicToStaticLatency)
                                   ((int)&pcVar3->_vb1050 + (int)sVar1,uVar2);
    fVar11 = AltToWorld__FRCf(local_60);
    if (0.75 <= fVar11) {
      if (fVar11 < 2.0) {
        return 0.58;
      }
      if (2.666667 <= fVar11) {
        if (fVar11 < 4.0) {
          return 1.0;
        }
        return 1.8;
      }
      return 1.0;
    }
  }
  return 0.0;
}

void ISimsObjectModel::InsertSubModelsInHouse(ERLevel *pLevel) {
	NLIterator it;
	NLIterator i;
	NLIterator i;
	
  EInstance *pInstance;
  ENodeListNode *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_subModelList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar1 != (ENodeListNode *)0x0) {
                    /* end of inlined section */
    pInstance = (EInstance *)pEVar1->data;
    while( true ) {
      InsertInstance__7ERLevelP9EInstanceT1(pLevel,pInstance,(EInstance *)0x0);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar1 = pEVar1->pNext;
                    /* end of inlined section */
      if (pEVar1 == (ENodeListNode *)0x0) break;
      pInstance = (EInstance *)pEVar1->data;
    }
  }
  return;
}

void ISimsObjectModel::PropigateFlagsToSubModels() {
	NLIterator it;
	NLIterator i;
	NLIterator i;
	
  uint uVar1;
  ENodeListNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_subModelList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar2 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    uVar1 = pEVar2->data;
    while( true ) {
      (**(code **)(*(int *)(uVar1 + 0x130) + 0x1c))
                (uVar1 + 0x130 + (int)*(short *)(*(int *)(uVar1 + 0x130) + 0x18),
                 (this->field0_0x0).m_cursFlags);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar2 = pEVar2->pNext;
                    /* end of inlined section */
      if (pEVar2 == (ENodeListNode *)0x0) break;
      uVar1 = pEVar2->data;
    }
  }
  return;
}

void ISimsObjectModel::Update() {
	s32 dir;
	ESimsCursor *pCursor;
	cXObject *pobj;
	EMat4 mOrient;
	VECTOR<EParticleInfoNode> *this;
	VECTOR<EParticleInfoNode> *this;
	EMat4 mOrient;
	EMat4 mOrient;
	float y;
	float y;
	EVec3 *this;
	EMat4 mOrient;
	EVec3 *this;
	cXObject *pContainerOb;
	cXObject *this;
	cXObject *this;
	EVec3 vRot;
	float ftheta;
	TreeSim *this;
	ISimInstance *pContainerInst;
	ISimInstance *this;
	EBoundSphere shpere;
	float ftheta;
	EInstance *this;
	EVec3 *this;
	float x;
	float y;
	float z;
	ISimsObjectModel *this;
	
  short sVar1;
  cXObject__179_1116__vtable *pcVar2;
  EParticleInfo *pEVar3;
  EParticleInfoNode *pEVar4;
  TreeSim__vtable *pTVar5;
  EStorable__vtable *pEVar6;
  ObjectModule__vtable *pOVar7;
  ObjectModule__vtable **ppOVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ObjAnimDef *pOVar13;
  EParticleObj *pEVar14;
  cXObject__179_1116 *pcVar15;
  ISimsObjectModel__26_3162 *pIVar16;
  EStorable *pEVar17;
  ObjSelector *this_00;
  int *piVar18;
  long lVar19;
  ulong uVar20;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  float fVar21;
  EMat4 mOrient;
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if ((*(ulong *)&this->m_pEHouse & 0x800000000) != 0) {
    return;
  }
  pcVar15 = (this->field0_0x0).m_pXOb;
  if (pcVar15 == (cXObject__179_1116 *)0x0) {
    return;
  }
  iVar10 = (*(code *)pcVar15->__vtable->ReconType)
                     ((int)&pcVar15->_vb1050 + (int)*(short *)&pcVar15->__vtable->ReconStream,1);
  pcVar15 = (this->field0_0x0).m_pXOb;
  pcVar2 = pcVar15->__vtable;
  iVar11 = (*(code *)pcVar2[1].HandleError)
                     ((int)&pcVar15->_vb1050 + (int)*(short *)&pcVar2[1].Error);
  if (*(int *)(iVar11 + 0x1c) == -0x40ec8e6b) {
    if (iVar10 != this->m_lastdir) {
      iVar11 = *(int *)&(this->field0_0x0).field_0x130;
      (**(code **)(iVar11 + 0x14))
                ((undefined *)
                 ((int)((this->field0_0x0).m_highlight + -6) + (int)*(short *)(iVar11 + 0x10)));
    }
    this->m_lastdir = iVar10;
  }
  else {
    this->m_lastdir = iVar10;
  }
  pcVar15 = (this->field0_0x0).m_pXOb;
  pcVar2 = pcVar15->__vtable;
  uVar12 = (*(code *)pcVar2->ReconType)
                     ((int)&pcVar15->_vb1050 + (int)*(short *)&pcVar2->ReconStream,0);
  if (this->m_lastGraphic == uVar12) {
    pOVar13 = GetAnimDef__16ISimsObjectModelib(this,this->m_lastGraphic,true);
    UpdateAnim__16ISimsObjectModelPC10ObjAnimDef(this,pOVar13);
  }
  else {
    pOVar13 = GetAnimDef__16ISimsObjectModelib(this,uVar12,SUB41(__ISOM_bUpdateWarn,0));
    UpdateModel__16ISimsObjectModelPC10ObjAnimDef(this,pOVar13);
    UpdateAnim__16ISimsObjectModelPC10ObjAnimDef(this,pOVar13);
    UpdateParticle__16ISimsObjectModelPC10ObjAnimDef(this,pOVar13);
    UpdateShader__16ISimsObjectModelPC10ObjAnimDef(this,pOVar13);
    UpdateBulb__16ISimsObjectModelPC10ObjAnimDef(this,pOVar13);
    this->m_lastGraphic = uVar12;
  }
  if (this->m_pCurParticleObj == (EParticleObj *)0x0) {
    if (((*(ulong *)&this->m_pEHouse & 0x200000000) != 0) &&
       ((pcVar15 = (this->field0_0x0).m_pXOb, pcVar15 == (cXObject__179_1116 *)0x0 ||
        (lVar19 = (*(code *)pcVar15->__vtable->ReconType)
                            ((int)&pcVar15->_vb1050 + (int)*(short *)&pcVar15->__vtable->ReconStream
                             ,0x22), lVar19 == 0)))) {
      if (this->m_pCurParticleObj == (EParticleObj *)0x0) {
        uVar20 = *(ulong *)&this->m_pEHouse;
      }
      else {
        ___12EParticleObj(this->m_pCurParticleObj,3);
        uVar20 = *(ulong *)&this->m_pEHouse;
      }
      pEVar3 = (this->m_curState).pParticleInfo;
      this->m_pCurParticleObj = (EParticleObj *)0x0;
      *(ulong *)&this->m_pEHouse = uVar20 & 0xfffffffdffffffff;
      if (pEVar3 != (EParticleInfo *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
        pEVar4 = (pEVar3->vParticles).pData;
        if (pEVar4 == (EParticleInfoNode *)0x0) {
          fVar21 = 0.0;
        }
        else {
          fVar21 = pEVar4[-1].dirz;
        }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
        if ((fVar21 != 0.0) &&
           (((((this->m_curState).pParticleInfo)->vParticles).pData)->particleID != 0)) {
          pEVar14 = (EParticleObj *)__builtin_new(8);
          pEVar14 = __12EParticleObj(pEVar14);
          this->m_pCurParticleObj = pEVar14;
          GetOrient__13EIStaticModelR5EMat4((EIStaticModel *)this,&mOrient);
          CreateEffects__12EParticleObjRC5EMat4fPC10ObjAnimDef
                    (this->m_pCurParticleObj,&mOrient,0.0,&this->m_curState);
        }
      }
    }
  }
  else if ((((*(ulong *)&this->m_pEHouse & 0x200000000) == 0) &&
           (pcVar15 = (this->field0_0x0).m_pXOb, pcVar15 != (cXObject__179_1116 *)0x0)) &&
          (lVar19 = (*(code *)pcVar15->__vtable->ReconType)
                              ((int)&pcVar15->_vb1050 +
                               (int)*(short *)&pcVar15->__vtable->ReconStream,0x22), lVar19 != 0)) {
    *(ulong *)&this->m_pEHouse = *(ulong *)&this->m_pEHouse | 0x200000000;
    if (this->m_pCurParticleObj != (EParticleObj *)0x0) {
      ___12EParticleObj(this->m_pCurParticleObj,3);
    }
    this->m_pCurParticleObj = (EParticleObj *)0x0;
  }
  else {
    GetOrient__13EIStaticModelR5EMat4((EIStaticModel *)this,&mOrient);
    pcVar15 = (this->field0_0x0).m_pXOb;
    pcVar2 = pcVar15->__vtable;
    iVar10 = (*(code *)pcVar2->ReconType)
                       ((int)&pcVar15->_vb1050 + (int)*(short *)&pcVar2->ReconStream,1);
    UpdateEffectPos__12EParticleObjfRC5EMat4PC10ObjAnimDef
              (this->m_pCurParticleObj,(float)iVar10 * 0.7853982,&mOrient,&this->m_curState);
  }
  UpdateHighlightAnim__16ISimsObjectModel(this);
  pcVar15 = (cXObject__179_1116 *)0x0;
  if (_globals._pCursor[0] != (ESimsCursor__67_3982 *)0x0) {
    pcVar15 = (cXObject__179_1116 *)
              GetGrabObject__11ESimsCursor((ESimsCursor__15_1743 *)_globals._pCursor[0]);
  }
  if (pcVar15 == (this->field0_0x0).m_pXOb) {
    uVar20 = *(ulong *)&this->m_pEHouse;
  }
  else {
    if (pcVar15 == (cXObject__179_1116 *)0x0) {
      uVar12 = (this->field0_0x0).m_cursFlags;
      goto LAB_0016c6c0;
    }
    pTVar5 = pcVar15->_vb1050->__vtable;
    pIVar16 = (ISimsObjectModel__26_3162 *)
              (*(code *)pTVar5[1].GetISimInstance)
                        ((int)&pcVar15->_vb1050->m_pObject + (int)*(short *)&pTVar5[1].GetLastResult
                        );
    if (this != pIVar16) {
      uVar12 = (this->field0_0x0).m_cursFlags;
      goto LAB_0016c6c0;
    }
    uVar20 = *(ulong *)&this->m_pEHouse;
  }
  if ((uVar20 & 0x1000000000) != 0) {
                    /* end of inlined section */
    GetOrient__13EIStaticModelR5EMat4((EIStaticModel *)this,&mOrient);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    local_60 = 0x3f800000;
    local_5c = _wallobjscale;
    local_58 = 0x3f800000;
    PreScale__5EMat4RC5EVec3(&mOrient,(EVec3 *)&local_60);
                    /* end of inlined section */
    pEVar6 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar6[3].GetTypeInfo)
              ((int)((this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar6[3].SafeDelete,&mOrient);
    if (this->m_nTracks != 0) {
      Enable__15EAnimControllerbRC5EMat4(&(this->field0_0x0).m_AC,true,&mOrient);
    }
  }
  pEVar17 = DynamicCast__9EStorableP9ETypeInfo((EStorable *)this,&_10EISwimPool_m_typeInfo);
  if (pEVar17 != (EStorable *)0x0) {
                    /* end of inlined section */
    GetOrient__13EIStaticModelR5EMat4((EIStaticModel *)this,&mOrient);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    local_60 = 0;
    local_5c = 0.0;
    local_58 = 0x3f800000;
    PreTranslate__5EMat4RC5EVec3(&mOrient,(EVec3 *)&local_60);
                    /* end of inlined section */
    pEVar6 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar6[3].GetTypeInfo)
              ((int)((this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar6[3].SafeDelete,&mOrient);
  }
  uVar12 = (this->field0_0x0).m_cursFlags;
LAB_0016c6c0:
  if ((uVar12 & 0x40) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
    pcVar15 = (this->field0_0x0).m_pXOb;
                    /* end of inlined section */
    pOVar7 = _5Globs_pObjectModule->__vtable;
    sVar1 = *(short *)&pOVar7->SetSelectedPerson;
                    /* inlined from ../MSrc/object.h */
    ppOVar8 = &_5Globs_pObjectModule->__vtable;
    if (pcVar15 == (cXObject__179_1116 *)0x0) {
      iVar10 = 0;
    }
    else {
      iVar10 = (*(code *)pcVar15->__vtable[1].GetObjectImplementation)
                         ((int)&pcVar15->_vb1050 +
                          (int)*(short *)&pcVar15->__vtable[1].AdvanceGraphic);
    }
                    /* end of inlined section */
    lVar19 = (*(code *)pOVar7->AdvanceSelectedPerson)
                       ((int)ppOVar8 + (int)sVar1,*(undefined2 *)(iVar10 + 0x2a));
    if ((lVar19 != 0) && (((this->field0_0x0).m_cursFlags & 0x80) != 0)) {
                    /* inlined from ../MSrc/object.h */
      pcVar15 = (this->field0_0x0).m_pXOb;
      piVar18 = (int *)lVar19;
      if (pcVar15 == (cXObject__179_1116 *)0x0) {
        iVar10 = piVar18[1];
      }
      else {
        (*(code *)pcVar15->__vtable[1].GetObjectImplementation)
                  ((int)&pcVar15->_vb1050 + (int)*(short *)&pcVar15->__vtable[1].AdvanceGraphic);
                    /* end of inlined section */
        iVar10 = piVar18[1];
      }
      this_00 = (ObjSelector *)
                (**(code **)(iVar10 + 0x2ec))((int)piVar18 + (int)*(short *)(iVar10 + 0x2e8));
      bVar9 = GetIsPerson__11ObjSelector(this_00);
      if (bVar9) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        iVar10 = *(int *)(*(int *)(*piVar18 + 0x18) + 0x1b0);
                    /* end of inlined section */
        iVar11 = *(int *)(iVar10 + 4);
        piVar18 = (int *)(**(code **)(iVar11 + 0x124))(iVar10 + *(short *)(iVar11 + 0x120));
        (**(code **)(*piVar18 + 0xec))
                  ((int)piVar18 + (int)*(short *)(*piVar18 + 0xe8),&this->m_vPos,&mOrient);
        pcVar15 = (this->field0_0x0).m_pXOb;
        pcVar2 = pcVar15->__vtable;
        iVar10 = (*(code *)pcVar2->ReconType)
                           ((int)&pcVar15->_vb1050 + (int)*(short *)&pcVar2->ReconStream,1);
        fVar21 = atan2f(mOrient.field0_0x0.d[0][1],mOrient.field0_0x0.d[0][0]);
        this->m_fRot = (float)iVar10 * 0.7853982 + fVar21;
      }
      else {
        iVar10 = *(int *)(*piVar18 + 0x1c);
        lVar19 = (**(code **)(iVar10 + 0x84))(*piVar18 + (int)*(short *)(iVar10 + 0x80));
                    /* inlined from c:/eor/src2/games/sims/ESRC/isiminstance.h */
                    /* end of inlined section */
        if ((lVar19 != 0) && (piVar18 = (int *)lVar19, piVar18[0x4b] != 0)) {
                    /* end of inlined section */
          (**(code **)(*piVar18 + 0xa4))((int)piVar18 + (int)*(short *)(*piVar18 + 0xa0),&mOrient);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          fVar21 = (float)piVar18[0xf];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          (this->m_vPos).field0_0x0.d[0] = mOrient.field0_0x0.d[0][0];
          (this->m_vPos).field0_0x0.d[2] = fVar21;
          (this->m_vPos).field0_0x0.d[1] = mOrient.field0_0x0.d[0][1];
                    /* end of inlined section */
          pcVar15 = (this->field0_0x0).m_pXOb;
          pcVar2 = pcVar15->__vtable;
          iVar10 = (*(code *)pcVar2->ReconType)
                             ((int)&pcVar15->_vb1050 + (int)*(short *)&pcVar2->ReconStream,1);
                    /* inlined from c:/eor/src2/games/sims/ESRC/iobject.h */
                    /* end of inlined section */
          this->m_fRot = (float)iVar10 * 0.7853982 + (float)piVar18[0x76];
        }
      }
    }
    CalcOrient__16ISimsObjectModel(this);
  }
  return;
}

void ISimsObjectModel::UpdateParticle(ObjAnimDef *animdef) {
	VECTOR<EParticleInfoNode> *this;
	VECTOR<EParticleInfoNode> *this;
	EMat4 mOrient;
	
  cXObject__179_1116 *pcVar1;
  cXObject__179_1116__vtable *pcVar2;
  EParticleInfo *pEVar3;
  EParticleInfoNode *pEVar4;
  float fVar5;
  EParticleObj *pEVar6;
  long lVar7;
  EMat4 mOrient;
  
  pcVar1 = (this->field0_0x0).m_pXOb;
  pcVar2 = pcVar1->__vtable;
  lVar7 = (*(code *)pcVar2->ReconType)
                    ((int)&pcVar1->_vb1050 + (int)*(short *)&pcVar2->ReconStream,0x22);
  if (((lVar7 == 0) && (animdef != (ObjAnimDef *)0x0)) &&
     ((this->m_curState).pParticleInfo != animdef->pParticleInfo)) {
    pEVar6 = this->m_pCurParticleObj;
    (this->m_curState).pParticleInfo = animdef->pParticleInfo;
    if (pEVar6 != (EParticleObj *)0x0) {
      ___12EParticleObj(pEVar6,3);
    }
    pEVar3 = (this->m_curState).pParticleInfo;
    this->m_pCurParticleObj = (EParticleObj *)0x0;
    if (pEVar3 != (EParticleInfo *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      pEVar4 = (pEVar3->vParticles).pData;
      if (pEVar4 == (EParticleInfoNode *)0x0) {
        fVar5 = 0.0;
      }
      else {
        fVar5 = pEVar4[-1].dirz;
      }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
      if ((fVar5 != 0.0) &&
         (((((this->m_curState).pParticleInfo)->vParticles).pData)->particleID != 0)) {
        pEVar6 = (EParticleObj *)__builtin_new(8);
        pEVar6 = __12EParticleObj(pEVar6);
        this->m_pCurParticleObj = pEVar6;
        GetOrient__13EIStaticModelR5EMat4((EIStaticModel *)this,&mOrient);
        CreateEffects__12EParticleObjRC5EMat4fPC10ObjAnimDef
                  (this->m_pCurParticleObj,&mOrient,0.0,animdef);
      }
    }
  }
  return;
}

void ISimsObjectModel::SetupCharacter() {
  cXObject__179_1116 *pcVar1;
  cXObject__179_1116__vtable *pcVar2;
  uint characterId;
  int iVar3;
  
  pcVar1 = (this->field0_0x0).m_pXOb;
  pcVar2 = pcVar1->__vtable;
  iVar3 = (*(code *)pcVar2[1].HandleError)((int)&pcVar1->_vb1050 + (int)*(short *)&pcVar2[1].Error);
  if ((*(int *)(iVar3 + 0xc0) != 0) &&
     (characterId = *(uint *)(*(int *)(iVar3 + 0xc0) + 0x18), characterId != 0)) {
    Init__15EAnimControllerUi(&(this->field0_0x0).m_AC,characterId);
  }
  return;
}

void ISimsObjectModel::HotSyncLighting() {
	ObjLightDef *pLightDef;
	int graphic;
	
  EILight *pEVar1;
  cXObject__179_1116 *pcVar2;
  EStorable__vtable *pEVar3;
  uint graphic;
  int iVar4;
  ObjAnimDef *animdef;
  
  if ((*(ulong *)&this->m_pEHouse & 0x800000000) == 0) {
    pEVar1 = this->m_pLightBulb;
    if (pEVar1 == (EILight *)0x0) {
      pcVar2 = (this->field0_0x0).m_pXOb;
    }
    else {
      pEVar3 = (pEVar1->field0_0x0).field0_0x0.__vtable;
      (*(code *)pEVar3->GetTypeName)
                ((int)((pEVar1->field0_0x0).m_otd.m_minPos + -7) +
                 (int)*(short *)&pEVar3->GetTypeInfo);
      this->m_pLightBulb = (EILight *)0x0;
      pcVar2 = (this->field0_0x0).m_pXOb;
    }
    iVar4 = (*(code *)pcVar2->__vtable[1].HandleError)
                      ((int)&pcVar2->_vb1050 + (int)*(short *)&pcVar2->__vtable[1].Error);
    if (*(int *)(*(int *)(iVar4 + 0xc0) + 0x2c) != 0) {
      graphic = this->m_lastGraphic;
      InitBulb__16ISimsObjectModel(this);
      animdef = GetAnimDef__16ISimsObjectModelib(this,graphic,SUB41(__ISOM_bInitWarn,0));
      UpdateBulb__16ISimsObjectModelPC10ObjAnimDef(this,animdef);
    }
  }
  return;
}

void ISimsObjectModel::InitBulb() {
	ResData *pResData;
	ObjLightDef *pLightDef;
	EMat4 mOrient;
	float red;
	float green;
	float blue;
	EVec3 *this;
	float x;
	float y;
	float z;
	float deg;
	float deg;
	EVec3 *this;
	float x;
	float y;
	float z;
	EVec3 vR;
	EVec3 *this;
	float x;
	float y;
	float z;
	float x;
	float y;
	float z;
	EInstance *this;
	EHouse *this;
	
  undefined *puVar1;
  byte bVar2;
  byte bVar3;
  cXObject__179_1116 *pcVar4;
  cXObject__179_1116__vtable *pcVar5;
  int *piVar6;
  EILight *pEVar7;
  uint uVar8;
  ulong *puVar9;
  ulong uVar10;
  int iVar11;
  EIPointLight *pEVar12;
  EISpotLight *pEVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  EMat4 mOrient;
  EVec3 vR;
  
  pcVar4 = (this->field0_0x0).m_pXOb;
  pcVar5 = pcVar4->__vtable;
  iVar11 = (*(code *)pcVar5[1].HandleError)((int)&pcVar4->_vb1050 + (int)*(short *)&pcVar5[1].Error)
  ;
  iVar11 = *(int *)(iVar11 + 0xc0);
  piVar6 = *(int **)(iVar11 + 0x2c);
  if (piVar6 == (int *)0x0) goto LAB_0016cf3c;
                    /* end of inlined section */
  GetOrient__13EIStaticModelR5EMat4((EIStaticModel *)this,&mOrient);
  if (*piVar6 == 0) {
    pEVar12 = (EIPointLight *)__builtin_new(0xbc);
    pEVar12 = __12EIPointLight(pEVar12);
    this->m_pLightBulb = &pEVar12->field0_0x0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    pEVar12->m_falloffStartDistance = (float)piVar6[0xb];
    pEVar12->m_falloffEndDistance = (float)piVar6[0xc];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar15 = (float)piVar6[4];
    fVar16 = (float)piVar6[5];
    (pEVar12->m_vPos).field0_0x0.d[0] = (float)piVar6[3];
    (pEVar12->m_vPos).field0_0x0.d[2] = fVar16;
    (pEVar12->m_vPos).field0_0x0.d[1] = fVar15;
    fVar14 = (pEVar12->m_vPos).field0_0x0.d[0];
                    /* end of inlined section */
    uVar10 = CONCAT44(fVar14 * mOrient.field0_0x0.d[0][1] + fVar15 * mOrient.field0_0x0.d[1][1] +
                      fVar16 * mOrient.field0_0x0.d[2][1] + mOrient.field0_0x0.d[3][1],
                      fVar14 * mOrient.field0_0x0.d[0][0] + fVar15 * mOrient.field0_0x0.d[1][0] +
                      fVar16 * mOrient.field0_0x0.d[2][0] + mOrient.field0_0x0.d[3][0]);
    puVar1 = (undefined *)((int)&(pEVar12->m_vPos).field0_0x0 + 7);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | uVar10 >> (7 - uVar8) * 8;
    uVar8 = (uint)&pEVar12->m_vPos & 7;
    puVar9 = (ulong *)((int)&pEVar12->m_vPos - uVar8);
    *puVar9 = uVar10 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    (pEVar12->m_vPos).field0_0x0.d[2] =
         fVar14 * mOrient.field0_0x0.d[0][2] + fVar15 * mOrient.field0_0x0.d[1][2] +
         fVar16 * mOrient.field0_0x0.d[2][2] + mOrient.field0_0x0.d[3][2];
    *(undefined4 *)&(pEVar12->field0_0x0).m_shadows = 1;
    *(undefined4 *)&pEVar12->m_distanceFalloffEnabled = 1;
    pEVar12->m_falloffStartDistance = (float)piVar6[0xb];
    pEVar12->m_falloffEndDistance = (float)piVar6[0xc];
LAB_0016ce78:
    bVar2 = *(byte *)(piVar6 + 1);
  }
  else {
    if (*piVar6 == 1) {
      pEVar13 = (EISpotLight *)__builtin_new(0xd8);
      pEVar13 = __11EISpotLight(pEVar13);
                    /* inlined from /eor/src2/common/e_standard_macros.h */
                    /* end of inlined section */
      this->m_pLightBulb = &pEVar13->field0_0x0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      pEVar13->m_falloffStartAngle = (float)piVar6[9] * 0.01745329;
                    /* inlined from /eor/src2/common/e_standard_macros.h */
                    /* end of inlined section */
      pEVar13->m_falloffEndAngle = (float)piVar6[10] * 0.01745329;
      pEVar13->m_falloffStartDistance = (float)piVar6[0xb];
      pEVar13->m_falloffEndDistance = (float)piVar6[0xc];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar15 = (float)piVar6[7];
      fVar16 = (float)piVar6[8];
      (pEVar13->m_vDir).field0_0x0.d[0] = (float)piVar6[6];
      (pEVar13->m_vDir).field0_0x0.d[1] = fVar15;
      (pEVar13->m_vDir).field0_0x0.d[2] = fVar16;
      fVar14 = (pEVar13->m_vDir).field0_0x0.d[0];
                    /* end of inlined section */
      uVar10 = CONCAT44(fVar14 * mOrient.field0_0x0.d[0][1] + fVar15 * mOrient.field0_0x0.d[1][1] +
                        fVar16 * mOrient.field0_0x0.d[2][1],
                        fVar14 * mOrient.field0_0x0.d[0][0] + fVar15 * mOrient.field0_0x0.d[1][0] +
                        fVar16 * mOrient.field0_0x0.d[2][0]);
      puVar1 = (undefined *)((int)&(pEVar13->m_vDir).field0_0x0 + 7);
      uVar8 = (uint)puVar1 & 7;
      puVar9 = (ulong *)(puVar1 + -uVar8);
      *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | uVar10 >> (7 - uVar8) * 8;
      uVar8 = (uint)&pEVar13->m_vDir & 7;
      puVar9 = (ulong *)((int)&pEVar13->m_vDir - uVar8);
      *puVar9 = uVar10 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
      (pEVar13->m_vDir).field0_0x0.d[2] =
           fVar14 * mOrient.field0_0x0.d[0][2] + fVar15 * mOrient.field0_0x0.d[1][2] +
           fVar16 * mOrient.field0_0x0.d[2][2];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar15 = (pEVar13->m_vDir).field0_0x0.d[0];
      fVar14 = (pEVar13->m_vDir).field0_0x0.d[1];
      fVar16 = (pEVar13->m_vDir).field0_0x0.d[2];
      fVar14 = sqrtf(fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16);
      if (fVar14 == 0.0) {
        fVar14 = (float)piVar6[3];
      }
      else {
        fVar14 = 1.0 / fVar14;
        (pEVar13->m_vDir).field0_0x0.d[0] = (pEVar13->m_vDir).field0_0x0.d[0] * fVar14;
        fVar15 = (pEVar13->m_vDir).field0_0x0.d[2];
        (pEVar13->m_vDir).field0_0x0.d[1] = (pEVar13->m_vDir).field0_0x0.d[1] * fVar14;
        (pEVar13->m_vDir).field0_0x0.d[2] = fVar15 * fVar14;
        fVar14 = (float)piVar6[3];
      }
      fVar15 = (float)piVar6[4];
      fVar16 = (float)piVar6[5];
      (pEVar13->m_vPos).field0_0x0.d[0] = fVar14;
      (pEVar13->m_vPos).field0_0x0.d[2] = fVar16;
      (pEVar13->m_vPos).field0_0x0.d[1] = fVar15;
      fVar14 = (pEVar13->m_vPos).field0_0x0.d[0];
                    /* end of inlined section */
      uVar10 = CONCAT44(fVar14 * mOrient.field0_0x0.d[0][1] + fVar15 * mOrient.field0_0x0.d[1][1] +
                        fVar16 * mOrient.field0_0x0.d[2][1] + mOrient.field0_0x0.d[3][1],
                        fVar14 * mOrient.field0_0x0.d[0][0] + fVar15 * mOrient.field0_0x0.d[1][0] +
                        fVar16 * mOrient.field0_0x0.d[2][0] + mOrient.field0_0x0.d[3][0]);
      puVar1 = (undefined *)((int)&(pEVar13->m_vPos).field0_0x0 + 7);
      uVar8 = (uint)puVar1 & 7;
      puVar9 = (ulong *)(puVar1 + -uVar8);
      *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | uVar10 >> (7 - uVar8) * 8;
      uVar8 = (uint)&pEVar13->m_vPos & 7;
      puVar9 = (ulong *)((int)&pEVar13->m_vPos - uVar8);
      *puVar9 = uVar10 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
      (pEVar13->m_vPos).field0_0x0.d[2] =
           fVar14 * mOrient.field0_0x0.d[0][2] + fVar15 * mOrient.field0_0x0.d[1][2] +
           fVar16 * mOrient.field0_0x0.d[2][2] + mOrient.field0_0x0.d[3][2];
      *(undefined4 *)&(pEVar13->field0_0x0).m_shadows = 1;
      *(undefined4 *)&pEVar13->m_distanceFalloffEnabled = 1;
      pEVar13->m_falloffStartDistance = (float)piVar6[0xb];
      pEVar13->m_falloffEndDistance = (float)piVar6[0xc];
      goto LAB_0016ce78;
    }
    bVar2 = *(byte *)(piVar6 + 1);
  }
  bVar3 = *(byte *)((int)piVar6 + 6);
  pEVar7 = this->m_pLightBulb;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar10 = CONCAT44((float)(uint)*(byte *)((int)piVar6 + 5) * 0.003921569,
                    (float)(uint)bVar2 * 0.003921569);
  puVar1 = (undefined *)((int)&(pEVar7->m_vColor).field0_0x0 + 7);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | uVar10 >> (7 - uVar8) * 8;
  uVar8 = (uint)&pEVar7->m_vColor & 7;
  puVar9 = (ulong *)((int)&pEVar7->m_vColor - uVar8);
  *puVar9 = uVar10 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (pEVar7->m_vColor).field0_0x0.d[2] = (float)(uint)bVar3 * 0.003921569;
  fVar14 = _newlightint;
  this->m_pLightBulb->m_intensity = (float)piVar6[2];
  *(undefined4 *)&this->m_pLightBulb->m_on = 0;
  this->m_pLightBulb->m_intensity = fVar14;
  if ((*(uint *)(iVar11 + 4) >> 8 & 1) == 0) {
    this->m_pLightBulb->m_pSource = (EInstance *)0x0;
  }
  else {
    this->m_pLightBulb->m_pSource = (EInstance *)this;
  }
                    /* inlined from /eor/src2/engine/instance/e_instance.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/instance/e_instance.h */
                    /* end of inlined section */
  SetOverlapCauseFlags__9EInstanceUi
            (&this->m_pLightBulb->field0_0x0,
             (this->m_pLightBulb->field0_0x0).m_otd.m_causeFlags | 0x10000);
LAB_0016cf3c:
  if (this->m_pLightBulb != (EILight *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
    InsertInstance__7ERLevelP9EInstanceT1
              (this->m_pEHouse->m_pLevel,&this->m_pLightBulb->field0_0x0,(EInstance *)0x0);
  }
  return;
}

void ISimsObjectModel::UpdateBulb(ObjAnimDef *animdef) {
  EILight *pEVar1;
  EObjeLightOnOff EVar2;
  
  pEVar1 = this->m_pLightBulb;
                    /* inlined from ../MSrc/Function.h */
                    /* end of inlined section */
  if (((pEVar1 != (EILight *)0x0) && (animdef != (ObjAnimDef *)0x0)) &&
     (EVar2 = animdef->light, (this->m_curState).light != EVar2)) {
    (this->m_curState).light = EVar2;
    if (EVar2 == ON) {
      *(undefined4 *)&pEVar1->m_on = 1;
    }
    else {
      *(undefined4 *)&pEVar1->m_on = 0;
    }
    OverlapLightmapCollect__16ISimsObjectModelP7EILight(this,this->m_pLightBulb);
  }
  return;
}

void ISimsObjectModel::DoLightmapCompute() {
	RBIterator i;
	RBIterator i;
	RBIterator i;
	
  bool bVar1;
  ERedBlackTreeNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  if (_16ISimsObjectModel_m_updateCalc3List.field0_0x0.m_list.m_pHead != (ERedBlackTreeNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
    bVar1 = _16ISimsObjectModel_m_updateCalc3List.field0_0x0.m_list.m_pHead !=
            (ERedBlackTreeNode *)0x0;
    pEVar2 = _16ISimsObjectModel_m_updateCalc3List.field0_0x0.m_list.m_pHead;
    while (bVar1) {
                    /* end of inlined section */
      ReCalcLights3__16ISimsObjectModel((ISimsObjectModel__26_3162 *)pEVar2->value);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      pEVar2 = pEVar2->pNext;
                    /* end of inlined section */
      bVar1 = pEVar2 != (ERedBlackTreeNode *)0x0;
    }
    RemoveAll__13ERedBlackTree(&_16ISimsObjectModel_m_updateCalc3List.field0_0x0);
  }
  return;
}

void ISimsObjectModel::OverlapLightmapCollect(EILight *pLight) {
	OTIterator oti;
	EVec3 vEyeToTarg;
	RBIterator i;
	EInstance *pInstance;
	OTIterator i;
	RBIterator i;
	RBIterator i;
	EInstance *pInstance;
	EILightmap *pValue;
	EIPointLight *pPoint;
	EISpotLight *pSpot;
	EVec3 vLightPos;
	EVec3 vNorm;
	float distSq;
	RBIterator i;
	RBIterator i;
	EInstance *this;
	EOTData *this;
	EILightmap *this;
	EVec3 &v;
	float key;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  EStorable__vtable *pEVar4;
  uint uVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  EStorable *pEVar8;
  EStorable *pEVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ERedBlackTreeNode *pEVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  EVec3 vEyeToTarg;
  EVec3 vLightPos;
  EVec3 vNorm;
  
                    /* inlined from /eor/src2/engine/collision/e_overlaptracker.h */
  uVar12 = 0x18;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/collision/e_overlaptracker.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/collision/e_overlaptracker.h */
  puVar7 = GetOverlap__15EOverlapTrackerP17RBIteratorPtrTypeR7EOTDataUi
                     ((undefined1 *)(pLight->field0_0x0).m_otd.m_overlaps.field0_0x0.m_list.m_pHead,
                      &(pLight->field0_0x0).m_otd,0x18);
                    /* end of inlined section */
  if (puVar7 == (undefined1 *)0x0) {
LAB_0016d130:
    RemoveAll__10EFloatTree(&_16ISimsObjectModel_m_lmcomputefloattree.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vEyeToTarg.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    vEyeToTarg.field0_0x0._0_8_ = 0;
    if (_globals._pCurCam != (ESimsCam *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
      vEyeToTarg.field0_0x0.d[2] =
           ((_globals._pCurCam)->m_vTarget).field0_0x0.d[2] -
           ((_globals._pCurCam)->m_vEye).field0_0x0.d[2];
      vLightPos.field0_0x0.d[2] = vEyeToTarg.field0_0x0.d[2];
      vLightPos.field0_0x0._0_8_ =
           CONCAT44(((_globals._pCurCam)->m_vTarget).field0_0x0.d[1] -
                    ((_globals._pCurCam)->m_vEye).field0_0x0.d[1],
                    ((_globals._pCurCam)->m_vTarget).field0_0x0.d[0] -
                    ((_globals._pCurCam)->m_vEye).field0_0x0.d[0]);
      vEyeToTarg.field0_0x0._0_8_ = vLightPos.field0_0x0._0_8_;
      puVar1 = (undefined *)((int)&vEyeToTarg.field0_0x0 + 7);
                    /* end of inlined section */
      uVar5 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar5);
      *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
                (ulong)vLightPos.field0_0x0._0_8_ >> (7 - uVar5) * 8;
    }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
    if (_16ISimsObjectModel_m_lightmapComputeList.field0_0x0.m_list.m_pHead !=
        (ERedBlackTreeNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      uVar5 = (_16ISimsObjectModel_m_lightmapComputeList.field0_0x0.m_list.m_pHead)->value;
      pEVar13 = _16ISimsObjectModel_m_lightmapComputeList.field0_0x0.m_list.m_pHead;
      while( true ) {
                    /* end of inlined section */
        uVar11 = 0x4e0b10;
        pEVar9 = DynamicCast__9EStorableP9ETypeInfo((EStorable *)pLight,&_12EIPointLight_m_typeInfo)
        ;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
        if (pEVar9 == (EStorable *)0x0) {
          uVar11 = 0x4e0b30;
          pEVar8 = DynamicCast__9EStorableP9ETypeInfo
                             ((EStorable *)pLight,&_11EISpotLight_m_typeInfo);
          vLightPos.field0_0x0.d[2] = 0.0;
        }
        else {
          pEVar8 = (EStorable *)0x0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          vLightPos.field0_0x0.d[2] = 0.0;
        }
        vLightPos.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
        vLightPos.field0_0x0._0_8_ = 0;
        if (pEVar9 == (EStorable *)0x0) {
          if (pEVar8 != (EStorable *)0x0) {
            puVar1 = (undefined *)((int)&pEVar8[0x2a].__vtable + 3);
            uVar2 = (uint)puVar1 & 7;
            uVar3 = (uint)(pEVar8 + 0x29) & 7;
            uVar11 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                     uVar11 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                     *(ulong *)((int)(pEVar8 + 0x29) - uVar3) >> uVar3 * 8;
            vLightPos.field0_0x0.d[2] = (float)pEVar8[0x2b].__vtable;
            puVar1 = (undefined *)((int)&vLightPos.field0_0x0 + 7);
            uVar2 = (uint)puVar1 & 7;
            puVar6 = (ulong *)(puVar1 + -uVar2);
            *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | uVar11 >> (7 - uVar2) * 8;
            vLightPos.field0_0x0._0_8_ = uVar11;
          }
        }
        else {
          puVar1 = (undefined *)((int)&pEVar9[0x2a].__vtable + 3);
          uVar2 = (uint)puVar1 & 7;
          uVar3 = (uint)(pEVar9 + 0x29) & 7;
          vLightPos.field0_0x0._0_8_ =
               (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
               uVar12 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
               *(ulong *)((int)(pEVar9 + 0x29) - uVar3) >> uVar3 * 8;
          vLightPos.field0_0x0.d[2] = (float)pEVar9[0x2b].__vtable;
          puVar1 = (undefined *)((int)&vLightPos.field0_0x0 + 7);
          uVar2 = (uint)puVar1 & 7;
          puVar6 = (ulong *)(puVar1 + -uVar2);
          *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 |
                    (ulong)vLightPos.field0_0x0._0_8_ >> (7 - uVar2) * 8;
        }
                    /* end of inlined section */
        uVar2 = uVar5 + 0x14b & 7;
        uVar3 = uVar5 + 0x144 & 7;
        vNorm.field0_0x0._0_8_ =
             (*(long *)((uVar5 + 0x14b) - uVar2) << (7 - uVar2) * 8 |
             uVar11 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((uVar5 + 0x144) - uVar3) >> uVar3 * 8;
        vNorm.field0_0x0.d[2] = *(float *)(uVar5 + 0x14c);
        puVar1 = (undefined *)((int)&vNorm.field0_0x0 + 7);
        uVar2 = (uint)puVar1 & 7;
        puVar6 = (ulong *)(puVar1 + -uVar2);
        *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 |
                  (ulong)vNorm.field0_0x0._0_8_ >> (7 - uVar2) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vNorm.field0_0x0.d[1] = (float)((ulong)vNorm.field0_0x0._0_8_ >> 0x20);
        fVar16 = (*(float *)(uVar5 + 0x28) + *(float *)(uVar5 + 0x34)) * 0.5 -
                 vLightPos.field0_0x0.d[0];
        fVar15 = (*(float *)(uVar5 + 0x2c) + *(float *)(uVar5 + 0x38)) * 0.5 -
                 vLightPos.field0_0x0.d[1];
        fVar14 = (*(float *)(uVar5 + 0x30) + *(float *)(uVar5 + 0x3c)) * 0.5 -
                 vLightPos.field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        fVar14 = fVar16 * fVar16 + fVar15 * fVar15 + fVar14 * fVar14;
        if (0.0 <= vNorm.field0_0x0.d[0] * vEyeToTarg.field0_0x0.d[0] +
                   vNorm.field0_0x0.d[1] * vEyeToTarg.field0_0x0.d[1] +
                   vNorm.field0_0x0.d[2] * vEyeToTarg.field0_0x0.d[2]) {
          fVar14 = fVar14 + 40.0;
        }
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
        uVar12 = 1;
        Insert__10EFloatTreefUib
                  (&_16ISimsObjectModel_m_lmcomputefloattree.field0_0x0,fVar14,uVar5,true);
        pEVar13 = pEVar13->pNext;
                    /* end of inlined section */
        if (pEVar13 == (ERedBlackTreeNode *)0x0) break;
        uVar5 = pEVar13->value;
      }
    }
    return;
  }
                    /* inlined from /eor/src2/engine/collision/e_overlaptracker.h */
  pEVar9 = *(EStorable **)(puVar7 + 0x18);
  do {
                    /* end of inlined section */
    pEVar8 = DynamicCast__9EStorableP9ETypeInfo(pEVar9,&_10EILightmap_m_typeInfo);
    if (pEVar8 == (EStorable *)0x0) {
      pEVar9 = DynamicCast__9EStorableP9ETypeInfo(pEVar9,&_16ISimsObjectModel_m_typeInfo);
      if (pEVar9 != (EStorable *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
        Insert__13ERedBlackTreeUiUib
                  (&_16ISimsObjectModel_m_updateCalc3List.field0_0x0,(uint)pEVar9,(uint)pEVar9,false
                  );
      }
LAB_0016d114:
                    /* inlined from /eor/src2/engine/collision/e_overlaptracker.h */
      puVar7 = *(undefined1 **)(puVar7 + 0x10);
    }
    else {
      pEVar4 = (pLight->field0_0x0).field0_0x0.__vtable;
      lVar10 = (*(code *)pEVar4[6].GetTypeName)
                         ((int)((pLight->field0_0x0).m_otd.m_minPos + -7) +
                          (int)*(short *)&pEVar4[6].GetTypeInfo,pEVar8 + 0x48,pEVar8 + 0x51);
      if (lVar10 == 0) goto LAB_0016d114;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      Insert__13ERedBlackTreeUiUib
                (&_16ISimsObjectModel_m_lightmapComputeList.field0_0x0,(uint)pEVar8,(uint)pEVar8,
                 false);
                    /* end of inlined section */
      puVar7 = *(undefined1 **)(puVar7 + 0x10);
    }
    uVar12 = 0x18;
    puVar7 = GetOverlap__15EOverlapTrackerP17RBIteratorPtrTypeR7EOTDataUi
                       (puVar7,&(pLight->field0_0x0).m_otd,0x18);
                    /* end of inlined section */
    if (puVar7 == (undefined1 *)0x0) goto LAB_0016d130;
    pEVar9 = *(EStorable **)(puVar7 + 0x18);
  } while( true );
}

void ISimsObjectModel::SetSOMModel(u32 modelId) {
	u32 oldModelId;
	EAnimController *this;
	float scaler;
	EMat4 mOrient;
	int cotd;
	
  uint uVar1;
  int iVar2;
  int iVar3;
  EAnimController *this_00;
  EMat4 mOrient;
  
  uVar1 = (this->field0_0x0).field0_0x0.m_modelId;
  SetModel__13EIStaticModelUi((EIStaticModel *)this,modelId);
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
  this_00 = &(this->field0_0x0).m_AC;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
                    /* end of inlined section */
  (this->field0_0x0).m_AC.m_modelScaler = ((this->field0_0x0).field0_0x0.m_pModel)->m_scaler;
  if (((uVar1 != modelId) && (this->m_nTracks != 0)) &&
     ((*(ulong *)&this->m_pEHouse & 0x100000000) != 0)) {
                    /* end of inlined section */
    GetOrient__13EIStaticModelR5EMat4((EIStaticModel *)this,&mOrient);
    Enable__15EAnimControllerbRC5EMat4(this_00,true,&mOrient);
    Enable__15EAnimControllerbRC5EMat4(this_00,false,&mOrient);
  }
  iVar2 = GetShaderCount__7ERModel((this->field0_0x0).field0_0x0.m_pModel);
  iVar3 = 0;
  this->m_nOtds = iVar2;
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      iVar3 = iVar3 + 1;
      *(EAnimController **)((int)&((this->field0_0x0).field0_0x0.m_otds)->callbackParam2 + iVar2) =
           &(this->field0_0x0).m_AC;
      iVar2 = iVar2 + 0x30;
    } while (iVar3 < this->m_nOtds);
  }
  return;
}

void ISimsObjectModel::UpdateHighlightAnim() {
	int i;
	
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  if (_framecount != _hllastframe) {
    iVar2 = 0;
    _hllastframe = _framecount;
    fVar3 = _dt * _hlfreq;
    iVar1 = 0;
    do {
      iVar2 = iVar2 + 1;
      fVar4 = *(float *)((int)_hlphase + iVar1) + fVar3;
      *(float *)((int)_hlphase + iVar1) = fVar4;
      if (1.0 < fVar4) {
        do {
          fVar4 = *(float *)((int)_hlphase + iVar1) - 1.0;
          *(float *)((int)_hlphase + iVar1) = fVar4;
        } while (1.0 < fVar4);
      }
      iVar1 = iVar2 * 4;
    } while (iVar2 < 2);
  }
  if (_globals.m_renderPass == 0) {
    if (((this->field0_0x0).m_cursFlags & 1) == 0) {
      this->m_highlightTime[0] = 0.0;
    }
    else {
      if (this->m_highlightTime[0] == 0.0) {
        _hlphase[0] = _hlpulselen * 0.5;
      }
      this->m_highlightTime[0] = this->m_highlightTime[0] + _dt * _hlfreq;
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
                    /* end of inlined section */
      if ((_globals._pCursor[0] != (ESimsCursor__67_3982 *)0x0) &&
         (_globals._pCursor[0]->m_mode == kPiMenu)) {
        this->m_highlightTime[0] = 0.0;
      }
    }
  }
  else {
    this->m_highlightTime[0] = 0.0;
  }
  if (_globals.m_renderPass == 1) {
    if (((this->field0_0x0).m_cursFlags & 8) == 0) {
      this->m_highlightTime[1] = 0.0;
    }
    else {
      if (this->m_highlightTime[1] == 0.0) {
        _hlphase[1] = _hlpulselen * 0.5;
      }
      this->m_highlightTime[1] = this->m_highlightTime[1] + _dt * _hlfreq;
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
                    /* end of inlined section */
      if ((_globals._pCursor[1] != (ESimsCursor__67_3982 *)0x0) &&
         (_globals._pCursor[1]->m_mode == kPiMenu)) {
        this->m_highlightTime[1] = 0.0;
        return;
      }
    }
  }
  else {
    this->m_highlightTime[1] = 0.0;
  }
  return;
}

void ISimsObjectModel::UpdateModel(ObjAnimDef *animdef) {
  uint modelId;
  
  if (((animdef != (ObjAnimDef *)0x0) &&
      (modelId = animdef->modelID, (this->m_curState).modelID != modelId)) &&
     ((this->m_curState).modelID = modelId, modelId != 0)) {
    SetSOMModel__16ISimsObjectModelUi(this,modelId);
  }
  return;
}

void ISimsObjectModel::UpdateShader(ObjAnimDef *animdef) {
  uint uVar1;
  
  if (((((this->field0_0x0).field0_0x0.m_pModel != (ERModel *)0x0) && (animdef != (ObjAnimDef *)0x0)
       ) && (uVar1 = animdef->shaderID, (this->m_curState).shaderID != uVar1)) && (uVar1 != 0)) {
    (this->m_curState).shaderID = uVar1;
    (this->m_curState).searchShdID = animdef->searchShdID;
    ChageShader__16ISimsObjectModelUiUi(this,animdef->searchShdID,animdef->shaderID);
  }
  return;
}

void ISimsObjectModel::UpdateAnim(ObjAnimDef *animdef) {
	EMat4 mOrient;
	bool animpaused;
	float mult;
	u32 animId;
	EAnimDef *pAnimDef;
	SimSpeed speed;
	EAnimDef *pAnimDef;
	float u;
	float u;
	float m1;
	float m2;
	EAnimDef *pAnimDef;
	
  uint animId;
  uint animId_00;
  cSimulator__vtable *pcVar1;
  bool bVar2;
  cSimulator *pcVar3;
  EAnimDef *pEVar4;
  long lVar5;
  ulong uVar6;
  undefined8 unaff_s0;
  EAnimController *this_00;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  float fVar7;
  float fVar8;
  EMat4 mOrient;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
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
  if ((this->field0_0x0).field0_0x0.m_pModel == (ERModel *)0x0) {
    return;
  }
                    /* end of inlined section */
  GetOrient__13EIStaticModelR5EMat4((EIStaticModel *)this,&mOrient);
  this_00 = &(this->field0_0x0).m_AC;
  if ((animdef != (ObjAnimDef *)0x0) &&
     (animId = animdef->animationID, (this->m_curState).animationID != animId)) {
    Enable__15EAnimControllerbRC5EMat4(this_00,true,&mOrient);
    animId_00 = (this->m_curState).animationID;
    this->m_time = 0.0;
    *(ulong *)&this->m_pEHouse = *(ulong *)&this->m_pEHouse & 0xfffffffeffffffff;
    if (animId_00 == 0) {
      if (animId == 0) goto LAB_0016d824;
      SetTrackAnim__15EAnimControlleriUi(this_00,0,animId);
      SetTrackIntensity__15EAnimControllerif(this_00,0,1.0);
      this->m_nTracks = 1;
    }
    else if (animId == 0) {
LAB_0016d824:
      StopAllTracks__15EAnimController(this_00);
      this->m_nTracks = 0;
    }
    else {
      SetTrackAnim__15EAnimControlleriUi(this_00,0,animId_00);
      SetTrackAnim__15EAnimControlleriUi(this_00,1,animId);
      pEVar4 = GetTrackAnimDef__15EAnimControlleri(this_00,1);
      if ((pEVar4->blendType != '\x01') || (pEVar4->blendDuration <= this->m_time)) {
        SetTrackIntensity__15EAnimControllerif(this_00,0,0.0);
        fVar8 = 1.0;
      }
      else {
        SetTrackIntensity__15EAnimControllerif(this_00,0,1.0);
        fVar8 = 0.0;
      }
      SetTrackIntensity__15EAnimControllerif(this_00,1,fVar8);
      this->m_nTracks = 2;
    }
    (this->m_curState).animationID = animId;
  }
  pcVar3 = _5Globs_pSimulator;
  bVar2 = false;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  this->m_time = this->m_time + _dt;
  pcVar1 = pcVar3->__vtable;
  lVar5 = (*(code *)pcVar1->GetDaysRunning)
                    ((int)&pcVar3->__vtable + (int)*(short *)&pcVar1->GetExpensesHistory);
  if (lVar5 == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    lVar5 = (*(code *)_5Globs_pSimulator->__vtable->ClearHistory)
                      ((int)&_5Globs_pSimulator->__vtable +
                       (int)*(short *)&_5Globs_pSimulator->__vtable->SetFunds);
    if (lVar5 != 0) {
      bVar2 = true;
    }
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
LAB_0016d934:
    fVar8 = 0.0;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    lVar5 = (*(code *)_5Globs_pSimulator->__vtable->DoStream)
                      ((int)&_5Globs_pSimulator->__vtable +
                       (int)*(short *)&_5Globs_pSimulator->__vtable->DoCommand);
                    /* inlined from ../MSrc/simulator.h */
    if (lVar5 == -2) {
      fVar8 = 4.0;
    }
    else if (lVar5 < -1) {
      if (lVar5 != -3) goto LAB_0016d934;
      fVar8 = 10.0;
    }
    else if (lVar5 == -1) {
      fVar8 = 0.5;
    }
    else {
      if (lVar5 != 0) goto LAB_0016d934;
      fVar8 = 1.0;
    }
  }
                    /* end of inlined section */
  SetGlobalSpeed__15EAnimControllerf(this_00,fVar8);
  if (this->m_nTracks != 2) {
    if (this->m_nTracks != 1) {
      return;
    }
    pEVar4 = GetTrackAnimDef__15EAnimControlleri(this_00,0);
    if ((this->m_time < 0.24) || (pEVar4->blendType == '\0')) {
      Enable__15EAnimControllerbRC5EMat4(this_00,true,&mOrient);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_58 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_5c = 0x3f800000;
                    /* end of inlined section */
      *(ulong *)&this->m_pEHouse = *(ulong *)&this->m_pEHouse & 0xfffffffeffffffff;
                    /* end of inlined section */
      local_60 = 0x3f800000;
      Update__15EAnimControllerP5EVec3T1G5EVec3
                (this_00,(EVec3 *)0x0,(EVec3 *)0x0,(EVec3 *)&local_60);
      uVar6 = *(ulong *)&this->m_pEHouse;
    }
    else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_58 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_5c = 0x3f800000;
                    /* end of inlined section */
      *(ulong *)&this->m_pEHouse = *(ulong *)&this->m_pEHouse | 0x100000000;
                    /* end of inlined section */
      local_60 = 0x3f800000;
      Update__15EAnimControllerP5EVec3T1G5EVec3
                (this_00,(EVec3 *)0x0,(EVec3 *)0x0,(EVec3 *)&local_60);
      uVar6 = *(ulong *)&this->m_pEHouse;
    }
    *(ulong *)&this->m_pEHouse = uVar6 & 0xfffffffeffffffff;
    return;
  }
  pEVar4 = GetTrackAnimDef__15EAnimControlleri(this_00,1);
  if (pEVar4->blendType == '\x01') {
    if (this->m_time < pEVar4->blendDuration) {
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
      fVar7 = this->m_time / pEVar4->blendDuration;
                    /* inlined from /eor/src2/common/math/e_math.h */
      fVar8 = pEVar4->blendM1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_math.h */
      fVar8 = (pEVar4->blendM2 + -2.0 + fVar8) * fVar7 * fVar7 * fVar7 +
              ((3.0 - pEVar4->blendM2) - (fVar8 + fVar8)) * fVar7 * fVar7 + fVar8 * fVar7;
                    /* end of inlined section */
      SetTrackIntensity__15EAnimControllerif(this_00,0,1.0 - fVar8);
      SetTrackIntensity__15EAnimControllerif(this_00,1,fVar8);
      goto LAB_0016da28;
    }
  }
  SetTrackIntensity__15EAnimControllerif(this_00,0,0.0);
  SetTrackIntensity__15EAnimControllerif(this_00,1,1.0);
LAB_0016da28:
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_58 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_5c = 0x3f800000;
                    /* end of inlined section */
                    /* end of inlined section */
  local_60 = 0x3f800000;
  Update__15EAnimControllerP5EVec3T1G5EVec3(this_00,(EVec3 *)0x0,(EVec3 *)0x0,(EVec3 *)&local_60);
  return;
}

void ISimsObjectModel::RemoveSubModelsFromHouse(ERLevel *pLevel) {
	NLIterator it;
	NLIterator i;
	NLIterator i;
	
  EInstance *pInstance;
  ENodeListNode *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_subModelList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar1 != (ENodeListNode *)0x0) {
                    /* end of inlined section */
    pInstance = (EInstance *)pEVar1->data;
    while( true ) {
      RemoveInstance__7ERLevelP9EInstance(pLevel,pInstance);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar1 = pEVar1->pNext;
                    /* end of inlined section */
      if (pEVar1 == (ENodeListNode *)0x0) break;
      pInstance = (EInstance *)pEVar1->data;
    }
  }
  return;
}

void ISimsObjectModel::ChageShader(u32 oldShdId, u32 newShdId) {
	u32 id;
	int csm;
	EOrderTableData *potd;
	int index;
	int csms;
	int index;
	EResource *this;
	
  int iVar1;
  ERShader *pEVar2;
  ERModel *pEVar3;
  EShader *pEVar4;
  int iVar5;
  EOrderTableData *pEVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  
  if ((this->field0_0x0).field0_0x0.m_pModel != (ERModel *)0x0) {
    while (this->m_pCurShader != (ERShader *)0x0) {
      DelRef__9EResource(&this->m_pCurShader->field0_0x0);
      this->m_pCurShader = (ERShader *)0x0;
    }
    if (newShdId != 0) {
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
      pEVar2 = (ERShader *)
               AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,newShdId,(EFile *)0x0,0);
                    /* end of inlined section */
      this->m_pCurShader = pEVar2;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
      iVar1 = (((this->field0_0x0).field0_0x0.m_pModel)->m_subModels).field0_0x0.m_size;
                    /* end of inlined section */
      iVar10 = 0;
      if (0 < iVar1) {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
        pEVar3 = (this->field0_0x0).field0_0x0.m_pModel;
        do {
          iVar7 = iVar10 * 0x18;
                    /* end of inlined section */
          iVar10 = iVar10 + 1;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
          piVar9 = (int *)((int)(pEVar3->m_subModels).field0_0x0.m_p + iVar7);
          iVar7 = piVar9[1];
                    /* end of inlined section */
          pEVar6 = (this->field0_0x0).field0_0x0.m_otds;
          if (0 < iVar7) {
            iVar8 = 0;
            do {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
              iVar5 = *piVar9 + iVar8;
              if (this->m_pCurShader == (ERShader *)0x0) {
                pEVar4 = *(EShader **)(*(int *)(iVar5 + 4) + 0x14);
LAB_0016dc9c:
                pEVar6->pShader = pEVar4;
              }
              else {
                    /* inlined from /eor/src2/engine/resource/e_resource.h */
                iVar5 = *(int *)(iVar5 + 4);
                    /* end of inlined section */
                if (*(uint *)(iVar5 + 0xc) != oldShdId) {
                  pEVar4 = *(EShader **)(iVar5 + 0x14);
                  goto LAB_0016dc9c;
                }
                pEVar6->pShader = this->m_pCurShader->m_pShader;
              }
              pEVar6 = pEVar6 + 1;
              iVar7 = iVar7 + -1;
              iVar8 = iVar8 + 0x4c;
            } while (iVar7 != 0);
          }
          if (iVar1 <= iVar10) {
            return;
          }
          pEVar3 = (this->field0_0x0).field0_0x0.m_pModel;
        } while( true );
      }
    }
  }
  return;
}

bool ISimsObjectModel::TestLightToObject(EILight *pLight) {
	EVec3 vLightPos;
	EVec3 vObjPos;
	EBound3 overlapRegion;
	TNodeList<EInstance *> instList;
	NLIterator nli;
	EInstance *this;
	EOTData *this;
	EVec3 &v;
	EInstance *this;
	EOTData *this;
	EVec3 &v;
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
	NLIterator i;
	NLIterator i;
	ECollisionInfo cli;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  bool bVar5;
  EStorable *pEVar6;
  EStorable *pEVar7;
  EVec3 *pEVar8;
  EBound3 *pEVar9;
  EVec3 *pEVar10;
  uint uVar11;
  int iVar12;
  ENodeListNode *pEVar13;
  float fVar14;
  EVec3 vLightPos;
  EVec3 vObjPos;
  TNodeList_EInstance___ instList;
  EBound3 overlapRegion;
  ECollisionInfo cli;
  
  pEVar6 = DynamicCast__9EStorableP9ETypeInfo((EStorable *)pLight,&_12EIPointLight_m_typeInfo);
  pEVar7 = DynamicCast__9EStorableP9ETypeInfo((EStorable *)pLight,&_11EISpotLight_m_typeInfo);
  if ((pEVar6 != (EStorable *)0x0) || (pEVar7 != (EStorable *)0x0)) {
                    /* inlined from /eor/src2/engine/instance/e_instance.h */
    vLightPos.field0_0x0.d[1] =
         ((pLight->field0_0x0).m_otd.m_bPos.vMin.field0_0x0.d[1] +
         (pLight->field0_0x0).m_otd.m_bPos.vMax.field0_0x0.d[1]) * 0.5;
    vLightPos.field0_0x0.d[2] =
         ((pLight->field0_0x0).m_otd.m_bPos.vMin.field0_0x0.d[2] +
         (pLight->field0_0x0).m_otd.m_bPos.vMax.field0_0x0.d[2]) * 0.5;
    vLightPos.field0_0x0.d[0] =
         ((pLight->field0_0x0).m_otd.m_bPos.vMin.field0_0x0.d[0] +
         (pLight->field0_0x0).m_otd.m_bPos.vMax.field0_0x0.d[0]) * 0.5;
    pEVar8 = &overlapRegion.vMax;
    iVar12 = 2;
    instList.field0_0x0.m_l.m_pHead =
         (ENodeListNode *)
         ((this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_bPos.vMin.field0_0x0.d[0] +
         (this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_bPos.vMax.field0_0x0.d[0]);
    instList.field0_0x0.m_l.m_pTail =
         (ENodeListNode *)
         (*(float *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_bPos.vMin.field0_0x0 + 4
                    ) +
         *(float *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_bPos.vMax.field0_0x0 + 4)
         );
    vObjPos.field0_0x0.d[0] = (float)instList.field0_0x0.m_l.m_pHead * 0.5;
    vObjPos.field0_0x0.d[2] =
         (*(float *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_bPos.vMin.field0_0x0 + 8
                    ) +
         *(float *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_bPos.vMax.field0_0x0 + 8)
         ) * 0.5;
    vObjPos.field0_0x0.d[1] = (float)instList.field0_0x0.m_l.m_pTail * 0.5;
    uVar4 = CONCAT44(vLightPos.field0_0x0.d[1],vLightPos.field0_0x0.d[0]);
    puVar1 = (undefined *)((int)&overlapRegion.vMax.field0_0x0 + 7);
    uVar11 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar11);
    *puVar3 = *puVar3 & -1L << (uVar11 + 1) * 8 | uVar4 >> (7 - uVar11) * 8;
    uVar11 = (uint)&overlapRegion.vMax & 7;
    puVar3 = (ulong *)((int)&overlapRegion.vMax - uVar11);
    *puVar3 = uVar4 << uVar11 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    overlapRegion.vMax.field0_0x0.d[2] = vLightPos.field0_0x0.d[2];
    puVar1 = (undefined *)((int)&overlapRegion.vMax.field0_0x0 + 7);
    uVar11 = (uint)puVar1 & 7;
    uVar2 = (uint)&overlapRegion.vMax & 7;
    overlapRegion.vMin.field0_0x0._0_8_ =
         (*(long *)(puVar1 + -uVar11) << (7 - uVar11) * 8 |
         uVar4 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar2) * 8 |
         *(ulong *)((int)&overlapRegion.vMax - uVar2) >> uVar2 * 8;
    puVar1 = (undefined *)((int)&overlapRegion.vMin.field0_0x0 + 7);
    uVar11 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar11);
    *puVar3 = *puVar3 & -1L << (uVar11 + 1) * 8 |
              (ulong)overlapRegion.vMin.field0_0x0._0_8_ >> (7 - uVar11) * 8;
    overlapRegion.vMin.field0_0x0.d[2] = vLightPos.field0_0x0.d[2];
    pEVar9 = &overlapRegion;
    pEVar10 = &vObjPos;
    do {
      fVar14 = (pEVar9->vMin).field0_0x0.d[0];
      if ((pEVar10->field0_0x0).d[0] <= fVar14) {
        fVar14 = (pEVar10->field0_0x0).d[0];
      }
      (pEVar9->vMin).field0_0x0.d[0] = fVar14;
      fVar14 = (pEVar10->field0_0x0).d[0];
      if ((pEVar10->field0_0x0).d[0] < (pEVar8->field0_0x0).d[0]) {
        fVar14 = (pEVar8->field0_0x0).d[0];
      }
      (pEVar8->field0_0x0).d[0] = fVar14;
      pEVar10 = (EVec3 *)((int)&pEVar10->field0_0x0 + 4);
      pEVar8 = (EVec3 *)((int)&pEVar8->field0_0x0 + 4);
      iVar12 = iVar12 + -1;
      pEVar9 = (EBound3 *)((int)&(pEVar9->vMin).field0_0x0 + 4);
    } while (-1 < iVar12);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    instList.field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* end of inlined section */
    instList.field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
    GetOverlapList__9EInstanceRC7EBound3UiRt9TNodeList1ZP9EInstance
              (&pLight->field0_0x0,&overlapRegion,0x10000,&instList);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
    if (instList.field0_0x0.m_l.m_pHead != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      uVar11 = (instList.field0_0x0.m_l.m_pHead)->data;
      pEVar13 = instList.field0_0x0.m_l.m_pHead;
      while( true ) {
        if (uVar11 == 0) {
          pEVar13 = pEVar13->pNext;
        }
        else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/eroom.h */
          bVar5 = false;
          if ((*(int *)(uVar11 + 0x140) == 1) || (*(int *)(uVar11 + 0x140) == 3)) {
            bVar5 = true;
          }
                    /* end of inlined section */
          if (bVar5) {
            pEVar13 = pEVar13->pNext;
          }
          else {
                    /* end of inlined section */
            bVar5 = IntersectPointWithBoundBox__10ECollisionR14ECollisionInfoRC5EVec3T2RC7EBound3
                              (&cli,&vObjPos,&vLightPos,(EBound3 *)(uVar11 + 0x28));
            if (bVar5) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
              RemoveAll__9ENodeList(&instList.field0_0x0);
              return false;
                    /* end of inlined section */
            }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
            pEVar13 = pEVar13->pNext;
          }
        }
                    /* end of inlined section */
        if (pEVar13 == (ENodeListNode *)0x0) break;
        uVar11 = pEVar13->data;
      }
    }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    RemoveAll__9ENodeList(&instList.field0_0x0);
                    /* end of inlined section */
  }
  return true;
}

void ISimsObjectModel::CreateShadow() {
	EMat4 mShadow;
	
  EMat4 mShadow;
  
  this->m_pShadow = (EIStaticModel *)0x0;
  return;
}

void ISimsObjectModel::SetPosStatic(EVec3 &vpos, float rot) {
                    /* end of inlined section */
  return;
}

void ISimsObjectModel::CalcOrient() {
	EMat4 mOrient;
	EVec3 *this;
	
  EStorable__vtable *pEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  EMat4 mOrient;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  RotateZ__5EMat4f(&mOrient,this->m_fRot);
  PostTranslate__5EMat4RC5EVec3(&mOrient,&this->m_vPos);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  local_30 = 0xbf800000;
  local_2c = 0xbf800000;
  local_28 = 0x3f800000;
  PreScale__5EMat4RC5EVec3(&mOrient,(EVec3 *)&local_30);
                    /* end of inlined section */
  pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1[3].GetTypeInfo)
            ((int)((this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_minPos + -7) +
             (int)*(short *)&pEVar1[3].SafeDelete,&mOrient);
  return;
}

void ISimsObjectModel::SetOutOfWorld() {
  return;
}

static __Q39EInstance51CalcLights3__16ISimsObjectModelRC5EVec3R8ELights3.0_12EBrightLight.6360() {}

EBrightLight* EInstance::CalcLights3__16ISimsObjectModelRC5EVec3R8ELights3.0::EBrightLight::EBrightLight() {
  return param_1;
}

void ISimsObjectModel::CalcLights3(EVec3 &vPos, ELights3 &lights3Out) {
	ResData *pResData;
	bool constUpdate;
	u32 flags;
	EVec3 vTotalDir;
	EVec3 vTotalColor;
	float totalColorMag;
	EBrightLight b[2];
	int nBrightest;
	OTIterator oti;
	EInstance *this;
	EVec3 vColor;
	EVec3 vDir;
	float dirMag;
	float colorMag;
	float scaler;
	EInstance *pInstance;
	u32 typeFlags;
	EILight *pLight;
	bool addLight;
	OTIterator i;
	RBIterator i;
	RBIterator i;
	EHouse *this;
	EVec3 vColor;
	EVec3 vDir;
	float dirMag;
	float colorMag;
	float scaler;
	int pos;
	EInstance *pInstance;
	u32 typeFlags;
	int cb;
	float directionality;
	float ambient;
	float scaler;
	float scaler;
	
  undefined *puVar1;
  uint uVar2;
  cXObject__179_1116 *pcVar3;
  EILight *pEVar4;
  EStorable__vtable *pEVar5;
  ERedBlackTreeNode *i;
  ulong *puVar6;
  EVec3 *pEVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined1 *puVar11;
  EIPointLight *pLight;
  uint uVar12;
  int iVar13;
  EBrightLight *pEVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  EOTData *otd;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  EVec3 vTotalDir;
  EVec3 vTotalColor;
  float local_144;
  EBrightLight b [2];
  EVec3 vColor;
  EVec3 vDir;
  
  if ((this->field0_0x0).field0_0x0.field0_0x0.m_pLevel != (ERLevel *)0x0) {
    pcVar3 = (this->field0_0x0).m_pXOb;
    if (pcVar3 == (cXObject__179_1116 *)0x0) {
      iVar13 = 0;
    }
    else {
      iVar13 = (*(code *)pcVar3->__vtable[1].HandleError)
                         ((int)&pcVar3->_vb1050 + (int)*(short *)&pcVar3->__vtable[1].Error);
      iVar13 = *(int *)(iVar13 + 0xc0);
    }
    if (iVar13 == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(uint *)(iVar13 + 4) >> 7 & 1;
    }
                    /* inlined from /eor/src2/engine/instance/e_instance.h */
    vTotalDir.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
    otd = &(this->field0_0x0).field0_0x0.field0_0x0.m_otd;
                    /* inlined from /eor/src2/engine/instance/e_instance.h */
    vTotalDir.field0_0x0.d[1] = 0.0;
    vTotalDir.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
    uVar19 = (long)(int)(this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_receiveFlags & 0x18;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vTotalColor.field0_0x0.d[2] = 0.0;
    vTotalColor.field0_0x0.d[1] = 0.0;
    vTotalColor.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
    fVar24 = 0.0;
                    /* end of inlined section */
    iVar13 = 0;
    do {
      bVar10 = iVar13 != -1;
      iVar13 = iVar13 + -1;
    } while (bVar10);
    pEVar4 = this->m_pLightBulb;
    uVar12 = 0;
    if (pEVar4 != (EILight *)0x0) {
                    /* end of inlined section */
      pEVar5 = (pEVar4->field0_0x0).field0_0x0.__vtable;
      fVar23 = 0.0;
      (*(code *)pEVar5[5].EStorable)
                ((int)((pEVar4->field0_0x0).m_otd.m_minPos + -7) +
                 (int)*(short *)&pEVar5[5].GetTypeVersion,vPos);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar20 = sqrtf(vDir.field0_0x0.d[0] * vDir.field0_0x0.d[0] +
                     vDir.field0_0x0.d[1] * vDir.field0_0x0.d[1] +
                     vDir.field0_0x0.d[2] * vDir.field0_0x0.d[2]);
                    /* end of inlined section */
      if (fVar20 == fVar23) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vColor.field0_0x0.d[0] = vColor.field0_0x0.d[0] * 3.141593;
        vColor.field0_0x0.d[1] = vColor.field0_0x0.d[1] * 3.141593;
        vColor.field0_0x0.d[2] = vColor.field0_0x0.d[2] * 3.141593;
      }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      uVar8 = vColor.field0_0x0.d[2];
      fVar21 = sqrtf(vColor.field0_0x0.d[0] * vColor.field0_0x0.d[0] +
                     vColor.field0_0x0.d[1] * vColor.field0_0x0.d[1] +
                     vColor.field0_0x0.d[2] * vColor.field0_0x0.d[2]);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vTotalDir.field0_0x0.d[0] = vDir.field0_0x0.d[0] * fVar21 + 0.0;
      vTotalDir.field0_0x0.d[1] = vDir.field0_0x0.d[1] * fVar21 + 0.0;
      vTotalDir.field0_0x0.d[2] = vDir.field0_0x0.d[2] * fVar21 + 0.0;
                    /* end of inlined section */
      fVar24 = fVar21 + 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vTotalColor.field0_0x0.d[0] = vColor.field0_0x0.d[0] + 0.0;
      vTotalColor.field0_0x0.d[1] = vColor.field0_0x0.d[1] + 0.0;
      vTotalColor.field0_0x0.d[2] = vColor.field0_0x0.d[2] + 0.0;
                    /* end of inlined section */
      if (fVar20 != fVar23) {
        b[0].vColor.field0_0x0._0_8_ = CONCAT44(vColor.field0_0x0.d[1],vColor.field0_0x0.d[0]);
        puVar1 = (undefined *)((int)&b[0].vColor.field0_0x0 + 7);
        uVar12 = (uint)puVar1 & 7;
        puVar6 = (ulong *)(puVar1 + -uVar12);
        *puVar6 = *puVar6 & -1L << (uVar12 + 1) * 8 |
                  b[0].vColor.field0_0x0._0_8_ >> (7 - uVar12) * 8;
        b[0].vDir.field0_0x0.d[2] = vDir.field0_0x0.d[2];
        b[0].vColor.field0_0x0._8_4_ = uVar8;
        uVar12 = 1;
        uVar17 = CONCAT44(vDir.field0_0x0.d[1],vDir.field0_0x0.d[0]);
        puVar1 = (undefined *)((int)&b[0].vDir.field0_0x0 + 7);
        uVar2 = (uint)puVar1 & 7;
        puVar6 = (ulong *)(puVar1 + -uVar2);
        *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | uVar17 >> (7 - uVar2) * 8;
        uVar2 = (uint)&b[0].vDir & 7;
        puVar6 = (ulong *)((int)&b[0].vDir - uVar2);
        *puVar6 = uVar17 << uVar2 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        b[0].dirMag = fVar20;
        b[0].colorMag = fVar21;
      }
    }
                    /* inlined from /eor/src2/engine/collision/e_overlaptracker.h */
    i = (this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_overlaps.field0_0x0.m_list.m_pHead;
    uVar16 = (ulong)(int)i;
    uVar17 = uVar19;
    puVar11 = GetOverlap__15EOverlapTrackerP17RBIteratorPtrTypeR7EOTDataUi
                        ((undefined1 *)i,otd,(uint)uVar19);
                    /* end of inlined section */
    if (puVar11 != (undefined1 *)0x0) {
      fVar20 = 3.141593;
      do {
                    /* end of inlined section */
        pLight = (EIPointLight *)
                 DynamicCast__9EStorableP9ETypeInfo
                           (*(EStorable **)(puVar11 + 0x18),&_7EILight_m_typeInfo);
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
        uVar17 = 1;
        if (pLight == (_globals._pCurHouse)->m_pSun) {
          uVar17 = *(ulong *)&this->m_pEHouse >> 0x22 & 1;
        }
        else if (uVar18 == 0) {
          bVar10 = TestLightToObject__16ISimsObjectModelP7EILight(this,(EILight *)pLight);
          uVar17 = (ulong)bVar10;
        }
        else if ((EIPointLight *)this->m_pLightBulb == pLight) {
          uVar17 = 0;
        }
        if (uVar17 != 0) {
                    /* end of inlined section */
          fVar21 = 0.0;
          (*(code *)(pLight->field0_0x0).field0_0x0.field0_0x0.__vtable[5].EStorable)();
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          fVar23 = sqrtf(vDir.field0_0x0.d[0] * vDir.field0_0x0.d[0] +
                         vDir.field0_0x0.d[1] * vDir.field0_0x0.d[1] +
                         vDir.field0_0x0.d[2] * vDir.field0_0x0.d[2]);
                    /* end of inlined section */
          if (fVar23 == fVar21) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
            vColor.field0_0x0.d[0] = vColor.field0_0x0.d[0] * fVar20;
            vColor.field0_0x0.d[1] = vColor.field0_0x0.d[1] * fVar20;
            vColor.field0_0x0.d[2] = vColor.field0_0x0.d[2] * fVar20;
          }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          fVar22 = sqrtf(vColor.field0_0x0.d[0] * vColor.field0_0x0.d[0] +
                         vColor.field0_0x0.d[1] * vColor.field0_0x0.d[1] +
                         vColor.field0_0x0.d[2] * vColor.field0_0x0.d[2]);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          vTotalDir.field0_0x0.d[0] = vTotalDir.field0_0x0.d[0] + vDir.field0_0x0.d[0] * fVar22;
          vTotalDir.field0_0x0.d[1] = vTotalDir.field0_0x0.d[1] + vDir.field0_0x0.d[1] * fVar22;
          vTotalDir.field0_0x0.d[2] = vTotalDir.field0_0x0.d[2] + vDir.field0_0x0.d[2] * fVar22;
                    /* end of inlined section */
          fVar24 = fVar24 + fVar22;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          vTotalColor.field0_0x0.d[0] = vTotalColor.field0_0x0.d[0] + vColor.field0_0x0.d[0];
          vTotalColor.field0_0x0.d[1] = vTotalColor.field0_0x0.d[1] + vColor.field0_0x0.d[1];
          vTotalColor.field0_0x0.d[2] = vTotalColor.field0_0x0.d[2] + vColor.field0_0x0.d[2];
                    /* end of inlined section */
          if (fVar23 != fVar21) {
            lVar15 = -1;
            if (uVar12 == 1) {
              lVar15 = 0;
              if (b[0].colorMag < fVar22) {
                puVar1 = (undefined *)((int)&b[1].vColor.field0_0x0 + 7);
                uVar12 = (uint)puVar1 & 7;
                puVar6 = (ulong *)(puVar1 + -uVar12);
                *puVar6 = *puVar6 & -1L << (uVar12 + 1) * 8 |
                          b[0].vColor.field0_0x0._0_8_ >> (7 - uVar12) * 8;
                b[1].vColor.field0_0x0._0_8_ = b[0].vColor.field0_0x0._0_8_;
                puVar1 = (undefined *)((int)&b[1].vDir.field0_0x0 + 3);
                uVar12 = (uint)puVar1 & 7;
                puVar6 = (ulong *)(puVar1 + -uVar12);
                *puVar6 = *puVar6 & -1L << (uVar12 + 1) * 8 |
                          CONCAT44(b[0].vDir.field0_0x0._0_4_,b[0].vColor.field0_0x0._8_4_) >>
                          (7 - uVar12) * 8;
                b[1]._8_8_ = CONCAT44(b[0].vDir.field0_0x0._0_4_,b[0].vColor.field0_0x0._8_4_);
                puVar1 = (undefined *)((int)&b[1].vDir.field0_0x0 + 0xb);
                uVar12 = (uint)puVar1 & 7;
                puVar6 = (ulong *)(puVar1 + -uVar12);
                *puVar6 = *puVar6 & -1L << (uVar12 + 1) * 8 |
                          CONCAT44(b[0].vDir.field0_0x0.d[2],b[0].vDir.field0_0x0._4_4_) >>
                          (7 - uVar12) * 8;
                b[1].vDir.field0_0x0._4_8_ =
                     CONCAT44(b[0].vDir.field0_0x0.d[2],b[0].vDir.field0_0x0._4_4_);
                puVar1 = (undefined *)((int)&b[1].colorMag + 3);
                uVar12 = (uint)puVar1 & 7;
                puVar6 = (ulong *)(puVar1 + -uVar12);
                *puVar6 = *puVar6 & -1L << (uVar12 + 1) * 8 |
                          CONCAT44(b[0].colorMag,b[0].dirMag) >> (7 - uVar12) * 8;
                b[1]._24_8_ = CONCAT44(b[0].colorMag,b[0].dirMag);
                uVar12 = 2;
              }
              else {
                lVar15 = 1;
                uVar12 = 2;
              }
            }
            else if (uVar12 < 2) {
              if (uVar12 == 0) {
                lVar15 = 0;
                uVar12 = 1;
              }
            }
            else if ((uVar12 == 2) && (b[1].colorMag < fVar22)) {
              lVar15 = 0;
              if (b[0].colorMag < fVar22) {
                puVar1 = (undefined *)((int)&b[1].vColor.field0_0x0 + 7);
                uVar2 = (uint)puVar1 & 7;
                puVar6 = (ulong *)(puVar1 + -uVar2);
                *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 |
                          b[0].vColor.field0_0x0._0_8_ >> (7 - uVar2) * 8;
                b[1].vColor.field0_0x0._0_8_ = b[0].vColor.field0_0x0._0_8_;
                puVar1 = (undefined *)((int)&b[1].vDir.field0_0x0 + 3);
                uVar2 = (uint)puVar1 & 7;
                puVar6 = (ulong *)(puVar1 + -uVar2);
                *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 |
                          CONCAT44(b[0].vDir.field0_0x0._0_4_,b[0].vColor.field0_0x0._8_4_) >>
                          (7 - uVar2) * 8;
                b[1]._8_8_ = CONCAT44(b[0].vDir.field0_0x0._0_4_,b[0].vColor.field0_0x0._8_4_);
                puVar1 = (undefined *)((int)&b[1].vDir.field0_0x0 + 0xb);
                uVar2 = (uint)puVar1 & 7;
                puVar6 = (ulong *)(puVar1 + -uVar2);
                *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 |
                          CONCAT44(b[0].vDir.field0_0x0.d[2],b[0].vDir.field0_0x0._4_4_) >>
                          (7 - uVar2) * 8;
                b[1].vDir.field0_0x0._4_8_ =
                     CONCAT44(b[0].vDir.field0_0x0.d[2],b[0].vDir.field0_0x0._4_4_);
                puVar1 = (undefined *)((int)&b[1].colorMag + 3);
                uVar2 = (uint)puVar1 & 7;
                puVar6 = (ulong *)(puVar1 + -uVar2);
                *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 |
                          CONCAT44(b[0].colorMag,b[0].dirMag) >> (7 - uVar2) * 8;
                b[1]._24_8_ = CONCAT44(b[0].colorMag,b[0].dirMag);
              }
              else {
                lVar15 = 1;
              }
            }
            uVar8 = vColor.field0_0x0.d[2];
            iVar13 = (int)lVar15;
            if (lVar15 != -1) {
              uVar17 = CONCAT44(vColor.field0_0x0.d[1],vColor.field0_0x0.d[0]);
              puVar1 = (undefined *)((int)&b[iVar13].vColor.field0_0x0 + 7);
              uVar2 = (uint)puVar1 & 7;
              puVar6 = (ulong *)(puVar1 + -uVar2);
              *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | uVar17 >> (7 - uVar2) * 8;
              *(ulong *)&b[iVar13].vColor.field0_0x0 = uVar17;
              uVar9 = vDir.field0_0x0.d[2];
              b[iVar13].vColor.field0_0x0.d[2] = uVar8;
              uVar17 = CONCAT44(vDir.field0_0x0.d[1],vDir.field0_0x0.d[0]);
              puVar1 = (undefined *)((int)&b[iVar13].vDir.field0_0x0 + 7);
              uVar2 = (uint)puVar1 & 7;
              puVar6 = (ulong *)(puVar1 + -uVar2);
              *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | uVar17 >> (7 - uVar2) * 8;
              uVar2 = (uint)&b[iVar13].vDir & 7;
              puVar6 = (ulong *)((int)&b[iVar13].vDir - uVar2);
              *puVar6 = uVar17 << uVar2 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
              b[iVar13].vDir.field0_0x0.d[2] = uVar9;
              b[iVar13].colorMag = fVar22;
              b[iVar13].dirMag = fVar23;
            }
          }
        }
                    /* inlined from /eor/src2/engine/collision/e_overlaptracker.h */
        uVar16 = (ulong)(int)*(undefined1 **)(puVar11 + 0x10);
        uVar17 = uVar19;
        puVar11 = GetOverlap__15EOverlapTrackerP17RBIteratorPtrTypeR7EOTDataUi
                            (*(undefined1 **)(puVar11 + 0x10),otd,(uint)uVar19);
                    /* end of inlined section */
      } while (puVar11 != (undefined1 *)0x0);
    }
    if (uVar12 == 0) {
      puVar1 = (undefined *)((int)&lights3Out->d[0].vColor.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar18 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar18);
      *puVar6 = *puVar6 & -1L << (uVar18 + 1) * 8 | 0UL >> (7 - uVar18) * 8;
      uVar18 = (uint)lights3Out->d & 7;
      puVar6 = (ulong *)((int)lights3Out->d - uVar18);
      *puVar6 = 0L << uVar18 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar18) * 8;
      lights3Out->d[0].vColor.field0_0x0.d[2] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar17 = 0;
      puVar1 = (undefined *)((int)&lights3Out->d[0].vDir.field0_0x0 + 7);
      uVar18 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar18);
      *puVar6 = *puVar6 & -1L << (uVar18 + 1) * 8 | 0UL >> (7 - uVar18) * 8;
      pEVar7 = &lights3Out->d[0].vDir;
      uVar18 = (uint)pEVar7 & 7;
      puVar6 = (ulong *)((int)pEVar7 - uVar18);
      *puVar6 = 0L << uVar18 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar18) * 8;
      lights3Out->d[0].vDir.field0_0x0.d[2] = 0.0;
    }
    else {
      puVar1 = (undefined *)((int)&lights3Out->d[0].vColor.field0_0x0 + 7);
      uVar18 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar18);
      *puVar6 = *puVar6 & -1L << (uVar18 + 1) * 8 | b[0].vColor.field0_0x0._0_8_ >> (7 - uVar18) * 8
      ;
      uVar18 = (uint)lights3Out->d & 7;
      puVar6 = (ulong *)((int)lights3Out->d - uVar18);
      *puVar6 = b[0].vColor.field0_0x0._0_8_ << uVar18 * 8 |
                *puVar6 & 0xffffffffffffffffU >> (8 - uVar18) * 8;
      lights3Out->d[0].vColor.field0_0x0.d[2] = b[0].vColor.field0_0x0._8_4_;
      puVar1 = (undefined *)((int)&b[0].vDir.field0_0x0 + 7);
      uVar18 = (uint)puVar1 & 7;
      uVar2 = (uint)&b[0].vDir & 7;
      uVar19 = (*(long *)(puVar1 + -uVar18) << (7 - uVar18) * 8 |
               uVar16 & 0xffffffffffffffffU >> (uVar18 + 1) * 8) & -1L << (8 - uVar2) * 8 |
               *(ulong *)((int)&b[0].vDir - uVar2) >> uVar2 * 8;
      puVar1 = (undefined *)((int)&lights3Out->d[0].vDir.field0_0x0 + 7);
      uVar18 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar18);
      *puVar6 = *puVar6 & -1L << (uVar18 + 1) * 8 | uVar19 >> (7 - uVar18) * 8;
      pEVar7 = &lights3Out->d[0].vDir;
      uVar18 = (uint)pEVar7 & 7;
      puVar6 = (ulong *)((int)pEVar7 - uVar18);
      *puVar6 = uVar19 << uVar18 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar18) * 8;
      lights3Out->d[0].vDir.field0_0x0.d[2] = b[0].vDir.field0_0x0.d[2];
    }
    if (uVar12 < 2) {
      puVar1 = (undefined *)((int)&lights3Out->d[1].vColor.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar18 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar18);
      *puVar6 = *puVar6 & -1L << (uVar18 + 1) * 8 | 0UL >> (7 - uVar18) * 8;
      uVar18 = (uint)(lights3Out->d + 1) & 7;
      puVar6 = (ulong *)((int)(lights3Out->d + 1) - uVar18);
      *puVar6 = 0L << uVar18 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar18) * 8;
      lights3Out->d[1].vColor.field0_0x0.d[2] = 0.0;
      puVar1 = (undefined *)((int)&lights3Out->d[1].vDir.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar18 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar18);
      *puVar6 = *puVar6 & -1L << (uVar18 + 1) * 8 | 0UL >> (7 - uVar18) * 8;
      pEVar7 = &lights3Out->d[1].vDir;
      uVar18 = (uint)pEVar7 & 7;
      puVar6 = (ulong *)((int)pEVar7 - uVar18);
      *puVar6 = 0L << uVar18 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar18) * 8;
      lights3Out->d[1].vDir.field0_0x0.d[2] = 0.0;
    }
    else {
      puVar1 = (undefined *)((int)&lights3Out->d[1].vColor.field0_0x0 + 7);
      uVar18 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar18);
      *puVar6 = *puVar6 & -1L << (uVar18 + 1) * 8 | b[1].vColor.field0_0x0._0_8_ >> (7 - uVar18) * 8
      ;
      uVar18 = (uint)(lights3Out->d + 1) & 7;
      puVar6 = (ulong *)((int)(lights3Out->d + 1) - uVar18);
      *puVar6 = b[1].vColor.field0_0x0._0_8_ << uVar18 * 8 |
                *puVar6 & 0xffffffffffffffffU >> (8 - uVar18) * 8;
      lights3Out->d[1].vColor.field0_0x0.d[2] = b[1].vColor.field0_0x0._8_4_;
      puVar1 = (undefined *)((int)&b[1].vDir.field0_0x0 + 7);
      uVar18 = (uint)puVar1 & 7;
      uVar2 = (uint)&b[1].vDir & 7;
      uVar19 = (*(long *)(puVar1 + -uVar18) << (7 - uVar18) * 8 |
               uVar17 & 0xffffffffffffffffU >> (uVar18 + 1) * 8) & -1L << (8 - uVar2) * 8 |
               *(ulong *)((int)&b[1].vDir - uVar2) >> uVar2 * 8;
      puVar1 = (undefined *)((int)&lights3Out->d[1].vDir.field0_0x0 + 7);
      uVar18 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar18);
      *puVar6 = *puVar6 & -1L << (uVar18 + 1) * 8 | uVar19 >> (7 - uVar18) * 8;
      pEVar7 = &lights3Out->d[1].vDir;
      uVar18 = (uint)pEVar7 & 7;
      puVar6 = (ulong *)((int)pEVar7 - uVar18);
      *puVar6 = uVar19 << uVar18 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar18) * 8;
      lights3Out->d[1].vDir.field0_0x0.d[2] = b[1].vDir.field0_0x0._8_4_;
    }
    if (uVar12 != 0) {
      pEVar14 = b;
      do {
        fVar20 = pEVar14->colorMag;
        uVar12 = uVar12 - 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        fVar24 = fVar24 - fVar20;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vTotalDir.field0_0x0.d[0] =
             vTotalDir.field0_0x0.d[0] - (pEVar14->vDir).field0_0x0.d[0] * fVar20;
        vTotalDir.field0_0x0.d[1] =
             vTotalDir.field0_0x0.d[1] - (pEVar14->vDir).field0_0x0.d[1] * fVar20;
        vTotalDir.field0_0x0.d[2] =
             vTotalDir.field0_0x0.d[2] - (pEVar14->vDir).field0_0x0.d[2] * fVar20;
        vTotalColor.field0_0x0.d[0] =
             vTotalColor.field0_0x0.d[0] - (pEVar14->vColor).field0_0x0.d[0];
        vTotalColor.field0_0x0.d[1] =
             vTotalColor.field0_0x0.d[1] - (pEVar14->vColor).field0_0x0.d[1];
        pEVar7 = &pEVar14->vColor;
                    /* end of inlined section */
        pEVar14 = pEVar14 + 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vTotalColor.field0_0x0.d[2] = vTotalColor.field0_0x0.d[2] - (pEVar7->field0_0x0).d[2];
                    /* end of inlined section */
      } while (uVar12 != 0);
    }
    if (fVar24 == 0.0) {
      puVar1 = (undefined *)((int)&lights3Out->d[2].vColor.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar18 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar18);
      *puVar6 = *puVar6 & -1L << (uVar18 + 1) * 8 | 0UL >> (7 - uVar18) * 8;
      uVar18 = (uint)(lights3Out->d + 2) & 7;
      puVar6 = (ulong *)((int)(lights3Out->d + 2) - uVar18);
      *puVar6 = 0L << uVar18 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar18) * 8;
      lights3Out->d[2].vColor.field0_0x0.d[2] = 0.0;
      puVar1 = (undefined *)((int)&lights3Out->d[2].vDir.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar18 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar18);
      *puVar6 = *puVar6 & -1L << (uVar18 + 1) * 8 | 0UL >> (7 - uVar18) * 8;
      pEVar7 = &lights3Out->d[2].vDir;
      uVar18 = (uint)pEVar7 & 7;
      puVar6 = (ulong *)((int)pEVar7 - uVar18);
      *puVar6 = 0L << uVar18 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar18) * 8;
      lights3Out->d[2].vDir.field0_0x0.d[2] = 0.0;
      puVar1 = (undefined *)((int)&(lights3Out->field0_0x0).a.vColor.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar18 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar18);
      *puVar6 = *puVar6 & -1L << (uVar18 + 1) * 8 | 0UL >> (7 - uVar18) * 8;
      uVar18 = (uint)lights3Out & 7;
      *(ulong *)((int)lights3Out - uVar18) =
           0L << uVar18 * 8 |
           *(ulong *)((int)lights3Out - uVar18) & 0xffffffffffffffffU >> (8 - uVar18) * 8;
      (lights3Out->field0_0x0).a.vColor.field0_0x0.d[2] = 0.0;
    }
    else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar20 = sqrtf(vTotalDir.field0_0x0.d[0] * vTotalDir.field0_0x0.d[0] +
                     vTotalDir.field0_0x0.d[1] * vTotalDir.field0_0x0.d[1] +
                     vTotalDir.field0_0x0.d[2] * vTotalDir.field0_0x0.d[2]);
                    /* end of inlined section */
      fVar20 = fVar20 / fVar24;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar19 = CONCAT44(vTotalColor.field0_0x0.d[1] * fVar20,vTotalColor.field0_0x0.d[0] * fVar20);
      puVar1 = (undefined *)((int)&lights3Out->d[2].vColor.field0_0x0 + 7);
      uVar18 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar18);
      *puVar6 = *puVar6 & -1L << (uVar18 + 1) * 8 | uVar19 >> (7 - uVar18) * 8;
      uVar18 = (uint)(lights3Out->d + 2) & 7;
      puVar6 = (ulong *)((int)(lights3Out->d + 2) - uVar18);
      *puVar6 = uVar19 << uVar18 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar18) * 8;
      lights3Out->d[2].vColor.field0_0x0.d[2] = vTotalColor.field0_0x0.d[2] * fVar20;
      puVar1 = (undefined *)((int)&lights3Out->d[2].vDir.field0_0x0 + 7);
      uVar18 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar18);
      *puVar6 = *puVar6 & -1L << (uVar18 + 1) * 8 |
                CONCAT44(vTotalDir.field0_0x0.d[1],vTotalDir.field0_0x0.d[0]) >> (7 - uVar18) * 8;
      pEVar7 = &lights3Out->d[2].vDir;
      uVar18 = (uint)pEVar7 & 7;
      puVar6 = (ulong *)((int)pEVar7 - uVar18);
      *puVar6 = CONCAT44(vTotalDir.field0_0x0.d[1],vTotalDir.field0_0x0.d[0]) << uVar18 * 8 |
                *puVar6 & 0xffffffffffffffffU >> (8 - uVar18) * 8;
      lights3Out->d[2].vDir.field0_0x0.d[2] = vTotalDir.field0_0x0.d[2];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar23 = lights3Out->d[2].vDir.field0_0x0.d[0];
      fVar24 = lights3Out->d[2].vDir.field0_0x0.d[1];
      fVar21 = lights3Out->d[2].vDir.field0_0x0.d[2];
      fVar24 = sqrtf(fVar23 * fVar23 + fVar24 * fVar24 + fVar21 * fVar21);
      if (fVar24 != 0.0) {
        fVar24 = 1.0 / fVar24;
        lights3Out->d[2].vDir.field0_0x0.d[0] = lights3Out->d[2].vDir.field0_0x0.d[0] * fVar24;
        fVar23 = lights3Out->d[2].vDir.field0_0x0.d[2];
        lights3Out->d[2].vDir.field0_0x0.d[1] = lights3Out->d[2].vDir.field0_0x0.d[1] * fVar24;
        lights3Out->d[2].vDir.field0_0x0.d[2] = fVar23 * fVar24;
      }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      fVar20 = 1.0 - fVar20;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar19 = CONCAT44(vTotalColor.field0_0x0.d[1] * fVar20 * 0.3183099,
                        vTotalColor.field0_0x0.d[0] * fVar20 * 0.3183099);
      puVar1 = (undefined *)((int)&(lights3Out->field0_0x0).a.vColor.field0_0x0 + 7);
      uVar18 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar18);
      *puVar6 = *puVar6 & -1L << (uVar18 + 1) * 8 | uVar19 >> (7 - uVar18) * 8;
      uVar18 = (uint)lights3Out & 7;
      *(ulong *)((int)lights3Out - uVar18) =
           uVar19 << uVar18 * 8 |
           *(ulong *)((int)lights3Out - uVar18) & 0xffffffffffffffffU >> (8 - uVar18) * 8;
      (lights3Out->field0_0x0).a.vColor.field0_0x0.d[2] =
           vTotalColor.field0_0x0.d[2] * fVar20 * 0.3183099;
    }
  }
  return;
}

void ISimsObjectModel::ReCalcLights3() {
  EStorable__vtable *pEVar1;
  
  pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1[4].GetTypeName)
            ((int)((this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_minPos + -7) +
             (int)*(short *)&pEVar1[4].GetTypeInfo,&(this->field0_0x0).field0_0x0.m_boundSphere,
             &this->m_lights3);
  return;
}

void ISimsObjectModel::StartBurp(int player) {
  this->m_highlightTime[player] = 0.0;
  return;
}

EMat4* ISimsObjectModel::GetDrawMatrix(ERC *prc) {
	ESimsCursor *pCursor;
	cXObject *pobj;
	ERC *this;
	ERC *this;
	ERC *this;
	
  TreeSim__vtable *pTVar1;
  cXObject__179_1116 *pcVar2;
  ISimsObjectModel__26_3162 *pIVar3;
  EStorable *pEVar4;
  uint uVar5;
  EMat4 *this_00;
  ulong uVar6;
  EDL *this_01;
  
  if (_globals._pCursor[0] == (ESimsCursor__67_3982 *)0x0) {
    pcVar2 = (cXObject__179_1116 *)0x0;
  }
  else {
    pcVar2 = (cXObject__179_1116 *)
             GetGrabObject__11ESimsCursor((ESimsCursor__15_1743 *)_globals._pCursor[0]);
  }
  if (pcVar2 == (this->field0_0x0).m_pXOb) {
    uVar6 = *(ulong *)&this->m_pEHouse;
LAB_0016e9e0:
    if ((uVar6 & 0x1000000000) != 0) {
      this_01 = prc->m_pdl;
      goto LAB_0016ea24;
    }
                    /* end of inlined section */
    pEVar4 = DynamicCast__9EStorableP9ETypeInfo((EStorable *)this,&_10EISwimPool_m_typeInfo);
    if (pEVar4 != (EStorable *)0x0) {
      this_01 = prc->m_pdl;
      goto LAB_0016ea24;
    }
                    /* end of inlined section */
    uVar5 = (this->field0_0x0).m_cursFlags;
  }
  else if (pcVar2 == (cXObject__179_1116 *)0x0) {
    uVar5 = (this->field0_0x0).m_cursFlags;
  }
  else {
    pTVar1 = pcVar2->_vb1050->__vtable;
    pIVar3 = (ISimsObjectModel__26_3162 *)
             (*(code *)pTVar1[1].GetISimInstance)
                       ((int)&pcVar2->_vb1050->m_pObject + (int)*(short *)&pTVar1[1].GetLastResult);
    if (this == pIVar3) {
      uVar6 = *(ulong *)&this->m_pEHouse;
      goto LAB_0016e9e0;
    }
    uVar5 = (this->field0_0x0).m_cursFlags;
  }
  if ((uVar5 & 0x40) == 0) {
    return &(this->field0_0x0).field0_0x0.m_mOrient;
  }
  this_01 = prc->m_pdl;
LAB_0016ea24:
                    /* inlined from /eor/src2/engine/e_dl.h */
  this_00 = (EMat4 *)Alloc__11EAllocGroupUii(&this_01->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
  __as__5EMat4RC5EMat4(this_00,&(this->field0_0x0).field0_0x0.m_mOrient);
  return this_00;
}

void ISimsObjectModel::Draw(ERC *prc, u32 renderFlags) {
	ResData *pResData;
	bool bHideForCutaway;
	bool bInBuyBuild;
	ESimsCursor *pCursor;
	cXObject *pobj;
	bool drawshadow;
	bool notShadowMask;
	EMat4 *pmOrient;
	ELights *pLights;
	int nLights;
	bool hilights[2];
	EResource *this;
	EHouse *this;
	EHouse *this;
	bool constUpdate;
	EVec3 vColors[2];
	ELights3 *pNewLights;
	int l;
	EVec3 vTotalColor;
	float totalIntensity;
	float destIntensity;
	ERC *this;
	EVec3 *this;
	EVec3 *this;
	int chl;
	float start;
	float pulse;
	float hlintensity;
	EVec3 *this;
	float scaler;
	EVec3 vZero;
	EVec3 *this;
	float u;
	EVec3 &vA;
	EVec3 &v;
	float scaler;
	EVec3 *this;
	float u;
	float scaler;
	EAnimController *this;
	EOrderTableData *potd;
	EMat4 mOrient;
	EMat4 mOrient;
	EOrderTableData *potd;
	int cOtd;
	EOrderTableData *potd;
	int cOtd;
	
  undefined *puVar1;
  short sVar2;
  cFixedWorld__vtable *pcVar3;
  TreeSim__vtable *pTVar4;
  EDL *this_00;
  ulong *puVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  ELights3 *pEVar9;
  cFixedWorld__vtable **ppcVar10;
  EVec3 *pEVar11;
  EVec3 *pEVar12;
  EVec3 *pEVar13;
  int iVar14;
  cXObject__179_1116 *pcVar15;
  uint uVar16;
  ELights3 *pEVar17;
  ELights3 *pEVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  double dVar22;
  EStorable__vtable *pEVar23;
  EVec3 *pEVar24;
  EDirLight *pEVar25;
  uint uVar26;
  EDirLight *pEVar27;
  EOrderTableData *pEVar28;
  EAnimController *this_01;
  ELights3 *pEVar29;
  int *piVar30;
  int iVar31;
  int iVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  bool hilights [2];
  EMat4 mOrient;
  ERC *local_d0;
  uint local_cc;
  EMat4 *pmOrient;
  ELights3 *pNewLights;
  
  piVar30 = (int *)hilights;
  pcVar15 = (this->field0_0x0).m_pXOb;
  if (pcVar15 == (cXObject__179_1116 *)0x0) {
    iVar14 = 0;
  }
  else {
    iVar14 = (*(code *)pcVar15->__vtable[1].HandleError)
                       ((int)&pcVar15->_vb1050 + (int)*(short *)&pcVar15->__vtable[1].Error);
    iVar14 = *(int *)(iVar14 + 0xc0);
  }
  if ((this->field0_0x0).field0_0x0.m_pModel == (ERModel *)0x0) {
    return;
  }
  pcVar15 = (this->field0_0x0).m_pXOb;
  if (pcVar15 != (cXObject__179_1116 *)0x0) {
    lVar19 = (*(code *)pcVar15->__vtable->ReconType)
                       ((int)&pcVar15->_vb1050 + (int)*(short *)&pcVar15->__vtable->ReconStream,0x22
                       );
    if (lVar19 != 0) {
      return;
    }
    pcVar15 = (this->field0_0x0).m_pXOb;
  }
  bVar7 = false;
  if (pcVar15 != (cXObject__179_1116 *)0x0) {
    uVar20 = (*(code *)pcVar15->__vtable->ReconType)
                       ((int)&pcVar15->_vb1050 + (int)*(short *)&pcVar15->__vtable->ReconStream,8);
    bVar7 = (uVar20 & 0x400) != 0;
  }
  bVar6 = false;
  if (_globals._pPanel != (EPanel *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/livemodepanel.h */
                    /* end of inlined section */
    bVar6 = (_globals._pPanel)->m_panleState + ~LIVE_SIM_EDIT < 2;
  }
  pcVar15 = (cXObject__179_1116 *)0x0;
  if (_globals._pCursor[0] != (ESimsCursor__67_3982 *)0x0) {
    pcVar15 = (cXObject__179_1116 *)
              GetGrabObject__11ESimsCursor((ESimsCursor__15_1743 *)_globals._pCursor[0]);
  }
  if (bVar6) {
    if (pcVar15 == (cXObject__179_1116 *)0x0) {
      uVar20 = *(ulong *)&this->m_pEHouse;
    }
    else {
                    /* inlined from /eor/src2/engine/resource/e_resource.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/resource/e_resource.h */
                    /* end of inlined section */
      if ((((this->field0_0x0).field0_0x0.m_pModel)->field0_0x0).m_resId == 0xab98338e) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        pcVar3 = _5Globs_pFixedWorld->__vtable;
        sVar2 = *(short *)&pcVar3->GetWallStorage;
        ppcVar10 = &_5Globs_pFixedWorld->__vtable;
        uVar21 = (*(code *)((cXObject__15_2008__vtable *)pcVar15->__vtable)[1].UserCanDelete)
                           ((int)&pcVar15->_vb1050 +
                            (int)*(short *)&((cXObject__15_2008__vtable *)pcVar15->__vtable)[1].
                                            UserPickup);
        lVar19 = (*(code *)pcVar3->SetWallStorage)((int)ppcVar10 + (int)sVar2,uVar21);
        if (lVar19 != 0) {
          return;
        }
        uVar20 = *(ulong *)&this->m_pEHouse;
      }
      else {
        uVar20 = *(ulong *)&this->m_pEHouse;
      }
    }
  }
  else {
    uVar20 = *(ulong *)&this->m_pEHouse;
  }
  if (((uVar20 & 0x1000000000) != 0) || (bVar7)) {
    if (bVar6) {
      if (pcVar15 == (this->field0_0x0).m_pXOb) {
        uVar20 = *(ulong *)&this->m_pEHouse;
      }
      else {
        if (pcVar15 != (cXObject__179_1116 *)0x0) {
          pTVar4 = pcVar15->_vb1050->__vtable;
          (*(code *)pTVar4[1].GetISimInstance)
                    ((int)&pcVar15->_vb1050->m_pObject + (int)*(short *)&pTVar4[1].GetLastResult);
          goto LAB_0016ec24;
        }
        uVar20 = *(ulong *)&this->m_pEHouse;
      }
    }
    else {
LAB_0016ec24:
      uVar20 = *(ulong *)&this->m_pEHouse;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
                    /* end of inlined section */
    if ((((uVar20 & 0x1000000000) != 0) && ((_globals._pCurHouse)->m_wallUpDownState == WallDown))
       && (!bVar6)) {
      return;
    }
  }
  if (iVar14 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = *(uint *)(iVar14 + 4) >> 6 & 1;
  }
  uVar26 = ((int)renderFlags >> 3 ^ 1U) & 1;
  if (uVar26 == 0) {
    if (uVar16 == 0) {
      return;
    }
    pEVar23 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
  }
  else {
    pEVar23 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
  }
  pmOrient = (EMat4 *)(*(code *)pEVar23[5].GetTypeKey)
                                ((int)((this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_minPos + -7)
                                 + (int)*(short *)&pEVar23[5].GetTypeName,prc);
  iVar32 = 0;
  pEVar29 = (ELights3 *)0x0;
  if (uVar26 == 0) goto LAB_0016ed58;
  if (((this->field0_0x0).m_cursFlags & 4) != 0) {
    pEVar29 = (ELights3 *)&_12ISimInstance__ERRORLightCur;
    goto LAB_0016ed58;
  }
  iVar32 = _globals._nCurLights;
  pEVar29 = (ELights3 *)_globals._pCurLights;
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
  if (((bVar6) || (*(int *)&(this->field0_0x0).field0_0x0.m_dynamiclyLit == 0)) ||
     (*(int *)&(_globals._pCurHouse)->m_bShadows == 0)) goto LAB_0016ed58;
  if (iVar14 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = *(uint *)(iVar14 + 4) >> 7 & 1;
  }
  if ((*(ulong *)&this->m_pEHouse & 0x800000000) == 0) {
    if (uVar16 != 0) {
      pEVar23 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
      goto LAB_0016ed28;
    }
  }
  else {
    pEVar23 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
LAB_0016ed28:
    (*(code *)pEVar23[4].GetTypeName)
              ((int)((this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar23[4].GetTypeInfo,&(this->field0_0x0).field0_0x0.m_boundSphere);
  }
  iVar32 = 3;
  pEVar29 = &this->m_lights3;
LAB_0016ed58:
  _hilights = 0;
  bVar7 = false;
  if (_globals.m_renderPass == 0) {
    _hilights = (uint)(((this->field0_0x0).m_cursFlags & 1) != 0);
  }
  if (_globals.m_renderPass == 1) {
    bVar7 = ((this->field0_0x0).m_cursFlags & 8) != 0;
  }
  local_d0 = prc;
  local_cc = renderFlags;
  if ((_hilights != 0) || (pEVar17 = pEVar29, bVar7)) {
                    /* end of inlined section */
    iVar14 = 0;
    do {
      bVar7 = iVar14 != -1;
      iVar14 = iVar14 + -1;
    } while (bVar7);
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
    this_00 = prc->m_pdl;
    uVar20 = (ulong)(int)this_00;
    puVar1 = (undefined *)((int)&mOrient.field0_0x0 + 7);
                    /* end of inlined section */
    uVar16 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar16);
    *puVar5 = *puVar5 & -1L << (uVar16 + 1) * 8 |
              (ulong)_hlcolor.field0_0x0._0_8_ >> (7 - uVar16) * 8;
    mOrient.field0_0x0._0_8_ = _hlcolor.field0_0x0._0_8_;
    mOrient.field0_0x0.d[0][2] = _hlcolor.field0_0x0.d[2];
    puVar1 = (undefined *)((int)&mOrient.field0_0x0 + 0x13);
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
                    /* end of inlined section */
    uVar16 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar16);
    *puVar5 = *puVar5 & -1L << (uVar16 + 1) * 8 |
              (ulong)_hlcolor2.field0_0x0._0_8_ >> (7 - uVar16) * 8;
    puVar1 = (undefined *)((int)&mOrient.field0_0x0 + 0xc);
    uVar16 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar16);
    *puVar5 = _hlcolor2.field0_0x0._0_8_ << uVar16 * 8 |
              *puVar5 & 0xffffffffffffffffU >> (8 - uVar16) * 8;
    mOrient.field0_0x0.d[1][1] = _hlcolor2.field0_0x0.d[2];
                    /* inlined from /eor/src2/engine/e_dl.h */
    pEVar17 = (ELights3 *)Alloc__11EAllocGroupUii(&this_00->m_allocGroup,0x70,0x10);
    puVar1 = (undefined *)((int)&(((EAmbLight *)&pEVar17->field0_0x0)->vColor).field0_0x0 + 7);
                    /* end of inlined section */
    uVar16 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar16);
    *puVar5 = *puVar5 & -1L << (uVar16 + 1) * 8 | 0UL >> (7 - uVar16) * 8;
    uVar16 = (uint)pEVar17 & 7;
    *(ulong *)((int)pEVar17 - uVar16) =
         0L << uVar16 * 8 |
         *(ulong *)((int)pEVar17 - uVar16) & 0xffffffffffffffffU >> (8 - uVar16) * 8;
    (((EAmbLight *)&pEVar17->field0_0x0)->vColor).field0_0x0.d[2] = 0.0;
    pEVar9 = pEVar29;
    iVar14 = iVar32;
    pEVar18 = pEVar17;
    if (0 < iVar32) {
      do {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        pEVar24 = &pEVar9->d[0].vDir;
                    /* end of inlined section */
        iVar14 = iVar14 + -1;
        puVar1 = (undefined *)((int)&pEVar18->d[0].vColor.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        uVar16 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar16);
        *puVar5 = *puVar5 & -1L << (uVar16 + 1) * 8 | 0UL >> (7 - uVar16) * 8;
        uVar16 = (uint)pEVar18->d & 7;
        puVar5 = (ulong *)((int)pEVar18->d - uVar16);
        *puVar5 = 0L << uVar16 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar16) * 8;
        pEVar18->d[0].vColor.field0_0x0.d[2] = 0.0;
        puVar1 = (undefined *)((int)&pEVar9->d[0].vDir.field0_0x0 + 7);
        uVar16 = (uint)puVar1 & 7;
        uVar26 = (uint)pEVar24 & 7;
        uVar20 = (*(long *)(puVar1 + -uVar16) << (7 - uVar16) * 8 |
                 uVar20 & 0xffffffffffffffffU >> (uVar16 + 1) * 8) & -1L << (8 - uVar26) * 8 |
                 *(ulong *)((int)pEVar24 - uVar26) >> uVar26 * 8;
        fVar33 = pEVar9->d[0].vDir.field0_0x0.d[2];
        puVar1 = (undefined *)((int)&pEVar18->d[0].vDir.field0_0x0 + 7);
        uVar16 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar16);
        *puVar5 = *puVar5 & -1L << (uVar16 + 1) * 8 | uVar20 >> (7 - uVar16) * 8;
        pEVar11 = &pEVar18->d[0].vDir;
        uVar16 = (uint)pEVar11 & 7;
        puVar5 = (ulong *)((int)pEVar11 - uVar16);
        *puVar5 = uVar20 << uVar16 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar16) * 8;
        pEVar18->d[0].vDir.field0_0x0.d[2] = fVar33;
        pEVar9 = (ELights3 *)pEVar24;
        pEVar18 = (ELights3 *)&pEVar18->d[0].vDir;
      } while (iVar14 != 0);
    }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    mOrient.field0_0x0.d[2][2] = 0.0;
    mOrient.field0_0x0.d[2][1] = 0.0;
    mOrient.field0_0x0.d[2][0] = 0.0;
                    /* end of inlined section */
    fVar37 = 0.0;
    fVar33 = fVar37;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    if ((pEVar29 != (ELights3 *)0x0) &&
       (fVar35 = (((EAmbLight *)&pEVar29->field0_0x0)->vColor).field0_0x0.d[0],
       fVar33 = (((EAmbLight *)&pEVar29->field0_0x0)->vColor).field0_0x0.d[1],
       fVar34 = (((EAmbLight *)&pEVar29->field0_0x0)->vColor).field0_0x0.d[2],
       fVar33 = sqrtf(fVar35 * fVar35 + fVar33 * fVar33 + fVar34 * fVar34), 0 < iVar32)) {
      pEVar27 = pEVar29->d;
      iVar14 = iVar32;
      do {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar36 = (pEVar27->vColor).field0_0x0.d[0];
                    /* end of inlined section */
        iVar14 = iVar14 + -1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar34 = (pEVar27->vColor).field0_0x0.d[1];
        fVar35 = (pEVar27->vColor).field0_0x0.d[2];
                    /* end of inlined section */
        pEVar27 = pEVar27 + 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar34 = sqrtf(fVar36 * fVar36 + fVar34 * fVar34 + fVar35 * fVar35);
                    /* end of inlined section */
        fVar33 = fVar33 + fVar34;
      } while (iVar14 != 0);
    }
    iVar31 = 0;
    iVar14 = 0;
    do {
      if (*piVar30 != 0) {
        fVar34 = *(float *)((int)this->m_highlightTime + iVar14);
        if (_hlstartlen <= fVar34) {
          fVar34 = 0.0;
        }
        else {
          fVar34 = (float)((int)fVar33 * (uint)(_hlminscalestart < fVar33) |
                          (int)_hlminscalestart * (uint)(_hlminscalestart >= fVar33)) * _hlstartamp
                   * (1.0 - fVar34 / _hlstartlen);
        }
        if (_hlpulselen <= *(float *)((int)_hlphase + iVar14)) {
          fVar34 = (float)((int)fVar34 * (uint)(0.0 <= fVar34));
        }
        else {
          dVar22 = (double)fabs((long)(double)(0.5 - *(float *)((int)_hlphase + iVar14) /
                                                     _hlpulselen));
          fVar35 = (float)((int)fVar33 * (uint)(_hlminscalepulse < fVar33) |
                          (int)_hlminscalepulse * (uint)(_hlminscalepulse >= fVar33)) * _hlpulseamp;
          fVar35 = (float)((double)(fVar35 + fVar35) * (0.5 - dVar22));
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          fVar34 = (float)((int)fVar35 * (uint)(fVar34 < fVar35) |
                          (int)fVar34 * (uint)(fVar34 >= fVar35));
        }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        iVar8 = iVar31 * 0xc;
                    /* end of inlined section */
        fVar37 = fVar37 + fVar34;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        mOrient.field0_0x0.d[3][2] = *(float *)((int)&mOrient.field0_0x0 + iVar8 + 8) * fVar34;
        mOrient.field0_0x0.d[3][0] = *(float *)((int)&mOrient.field0_0x0 + iVar8) * fVar34;
        mOrient.field0_0x0.d[3][1] = *(float *)((int)&mOrient.field0_0x0 + iVar8 + 4) * fVar34;
        mOrient.field0_0x0.d[2][2] = mOrient.field0_0x0.d[2][2] + mOrient.field0_0x0.d[3][2];
        mOrient.field0_0x0.d[2][0] = mOrient.field0_0x0.d[2][0] + mOrient.field0_0x0.d[3][0];
        mOrient.field0_0x0.d[2][1] = mOrient.field0_0x0.d[2][1] + mOrient.field0_0x0.d[3][1];
      }
                    /* end of inlined section */
      iVar31 = iVar31 + 1;
      piVar30 = piVar30 + 1;
      iVar14 = iVar14 + 4;
    } while (iVar31 < 2);
    if (pEVar29 == (ELights3 *)0x0) {
      puVar1 = (undefined *)((int)&(((EAmbLight *)&pEVar17->field0_0x0)->vColor).field0_0x0 + 7);
      uVar16 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar16);
      *puVar5 = *puVar5 & -1L << (uVar16 + 1) * 8 |
                CONCAT44(mOrient.field0_0x0.d[2][1],mOrient.field0_0x0.d[2][0]) >> (7 - uVar16) * 8;
      uVar16 = (uint)pEVar17 & 7;
      *(ulong *)((int)pEVar17 - uVar16) =
           CONCAT44(mOrient.field0_0x0.d[2][1],mOrient.field0_0x0.d[2][0]) << uVar16 * 8 |
           *(ulong *)((int)pEVar17 - uVar16) & 0xffffffffffffffffU >> (8 - uVar16) * 8;
      (((EAmbLight *)&pEVar17->field0_0x0)->vColor).field0_0x0.d[2] = mOrient.field0_0x0.d[2][2];
    }
    else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar33 = (((EAmbLight *)&pEVar29->field0_0x0)->vColor).field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      fVar34 = (float)((int)fVar37 * (uint)(fVar37 < 1.0) | (uint)(fVar37 >= 1.0) * 0x3f800000);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar37 = (((EAmbLight *)&pEVar29->field0_0x0)->vColor).field0_0x0.d[2];
      uVar20 = CONCAT44((((EAmbLight *)&pEVar29->field0_0x0)->vColor).field0_0x0.d[1] +
                        (mOrient.field0_0x0.d[2][1] -
                        (((EAmbLight *)&pEVar29->field0_0x0)->vColor).field0_0x0.d[1]) * fVar34,
                        (((EAmbLight *)&pEVar29->field0_0x0)->vColor).field0_0x0.d[0] +
                        (mOrient.field0_0x0.d[2][0] -
                        (((EAmbLight *)&pEVar29->field0_0x0)->vColor).field0_0x0.d[0]) * fVar34);
      puVar1 = (undefined *)((int)&(((EAmbLight *)&pEVar17->field0_0x0)->vColor).field0_0x0 + 7);
      uVar16 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar16);
      *puVar5 = *puVar5 & -1L << (uVar16 + 1) * 8 | uVar20 >> (7 - uVar16) * 8;
      uVar16 = (uint)pEVar17 & 7;
      *(ulong *)((int)pEVar17 - uVar16) =
           uVar20 << uVar16 * 8 |
           *(ulong *)((int)pEVar17 - uVar16) & 0xffffffffffffffffU >> (8 - uVar16) * 8;
      (((EAmbLight *)&pEVar17->field0_0x0)->vColor).field0_0x0.d[2] =
           fVar37 + (mOrient.field0_0x0.d[2][2] - fVar33) * fVar34;
      mOrient.field0_0x0.d[3][2] = 0.0;
      mOrient.field0_0x0.d[3][1] = 0.0;
                    /* end of inlined section */
      mOrient.field0_0x0.d[3][0] = 0.0;
      if (0 < iVar32) {
        pEVar27 = pEVar29->d;
        pEVar25 = pEVar17->d;
        iVar14 = iVar32;
        do {
          pEVar11 = &pEVar27->vColor;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          iVar14 = iVar14 + -1;
          pEVar24 = &pEVar27->vColor;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          fVar37 = (pEVar27->vColor).field0_0x0.d[2];
          pEVar12 = &pEVar27->vColor;
          pEVar13 = &pEVar27->vColor;
          fVar33 = (pEVar27->vColor).field0_0x0.d[2];
                    /* end of inlined section */
          pEVar27 = pEVar27 + 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          uVar20 = CONCAT44((pEVar13->field0_0x0).d[1] + (0.0 - (pEVar24->field0_0x0).d[1]) * fVar34
                            ,(pEVar12->field0_0x0).d[0] +
                             (0.0 - (pEVar11->field0_0x0).d[0]) * fVar34);
          puVar1 = (undefined *)((int)&(pEVar25->vColor).field0_0x0 + 7);
          uVar16 = (uint)puVar1 & 7;
          puVar5 = (ulong *)(puVar1 + -uVar16);
          *puVar5 = *puVar5 & -1L << (uVar16 + 1) * 8 | uVar20 >> (7 - uVar16) * 8;
          uVar16 = (uint)pEVar25 & 7;
          *(ulong *)((int)pEVar25 - uVar16) =
               uVar20 << uVar16 * 8 |
               *(ulong *)((int)pEVar25 - uVar16) & 0xffffffffffffffffU >> (8 - uVar16) * 8;
          (pEVar25->vColor).field0_0x0.d[2] = fVar33 + (0.0 - fVar37) * fVar34;
                    /* end of inlined section */
          pEVar25 = pEVar25 + 1;
        } while (iVar14 != 0);
      }
    }
  }
  if (this->m_nTracks == 0) {
    iVar14 = this->m_nOtds + -1;
    pEVar28 = (this->field0_0x0).field0_0x0.m_otds;
    if (iVar14 != -1) {
      pEVar28->pfnCallback = StaticOrderTableCallback__16ISimsObjectModelP3ERCUiUi;
      while( true ) {
        iVar14 = iVar14 + -1;
        pEVar28->renderFlags = local_cc;
        pEVar28->pLights = &pEVar17->field0_0x0;
        pEVar28->pmOrient = pmOrient;
        pEVar28->nLights = iVar32;
        InsertInOrderTable__7ERLevelR15EOrderTableData
                  ((this->field0_0x0).field0_0x0.field0_0x0.m_pLevel,pEVar28);
        if (iVar14 == -1) break;
        pEVar28[1].pfnCallback = StaticOrderTableCallback__16ISimsObjectModelP3ERCUiUi;
        pEVar28 = pEVar28 + 1;
      }
    }
  }
  else {
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
                    /* end of inlined section */
    this_01 = &(this->field0_0x0).m_AC;
    if ((((this->field0_0x0).m_AC.m_pRCharacter.m_p)->m_nodes).field0_0x0.m_size < 5) {
                    /* end of inlined section */
      GetOrient__13EIStaticModelR5EMat4((EIStaticModel *)this,&mOrient);
      Compute__15EAnimControllerRC5EMat4(this_01,&mOrient);
      iVar14 = this->m_nOtds + -1;
      pEVar28 = (this->field0_0x0).field0_0x0.m_otds;
      if (iVar14 != -1) {
        pEVar28->pfnCallback = AnimOrderTableCallback__16ISimsObjectModelP3ERCUiUi;
        while( true ) {
          iVar14 = iVar14 + -1;
          pEVar28->pmOrient = (EMat4 *)0x0;
          pEVar28->renderFlags = local_cc;
          pEVar28->pLights = &pEVar17->field0_0x0;
          pEVar28->nLights = iVar32;
          InsertInOrderTable__7ERLevelR15EOrderTableData
                    ((this->field0_0x0).field0_0x0.field0_0x0.m_pLevel,pEVar28);
          if (iVar14 == -1) break;
          pEVar28[1].pfnCallback = AnimOrderTableCallback__16ISimsObjectModelP3ERCUiUi;
          pEVar28 = pEVar28 + 1;
        }
      }
    }
    else if (*(int *)&((this->field0_0x0).field0_0x0.m_pModel)->m_drawSorted == 0) {
                    /* end of inlined section */
      GetOrient__13EIStaticModelR5EMat4((EIStaticModel *)this,&mOrient);
      (*(code *)local_d0->__vtable[1].LineList)
                ((int)&local_d0->m_pdl + (int)*(short *)&local_d0->__vtable[1].QuadList,pEVar17,
                 iVar32);
      Draw__15EAnimControllerP3ERCP7ERModelRC5EMat4Ui
                (this_01,local_d0,(this->field0_0x0).field0_0x0.m_pModel,&mOrient,local_cc);
      SelectLights__7ERLevelP3ERC((this->field0_0x0).field0_0x0.field0_0x0.m_pLevel,local_d0);
    }
    else {
      pEVar28 = (this->field0_0x0).field0_0x0.m_otds;
      pEVar28->pfnCallback = BigAnimOrderTableCallback__16ISimsObjectModelP3ERCUiUi;
      pEVar28->pLights = &pEVar17->field0_0x0;
      pEVar28->nLights = iVar32;
      pEVar28->sortMode = 1;
      pEVar28->callbackParam2 = local_cc;
      pEVar28->pShader = (EShader *)0x0;
      pEVar28->renderFlags = local_cc;
      pEVar28->callbackParam1 = (uint)this;
      pEVar28->pmOrient = (EMat4 *)0x0;
      pEVar28->sortValue = 0;
      InsertInOrderTable__7ERLevelR15EOrderTableData
                ((this->field0_0x0).field0_0x0.field0_0x0.m_pLevel,pEVar28);
    }
  }
  return;
}

void ISimsObjectModel::StaticOrderTableCallback(ERC *prc, u32 param1, u32 param2) {
  DrawGeometry__15ESubModelShaderP3ERC((ESubModelShader *)param1,prc);
  return;
}

void ISimsObjectModel::AnimOrderTableCallback(ERC *prc, u32 param1, u32 param2) {
	EMat4 *pmNodes;
	bool weighting;
	
  int iVar1;
  undefined4 uVar2;
  
                    /* inlined from /eor/src2/engine/e_rptr.h */
  iVar1 = *(int *)(*(int *)(param2 + 8) + 0x18);
                    /* end of inlined section */
  uVar2 = *(undefined4 *)param2;
  if (1 < iVar1) {
    (*(code *)prc->__vtable->NewEntry)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->Terminate,0x40);
  }
  (*(code *)prc->__vtable->Memcpy)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->SendHardwareDisplayList,uVar2,0,iVar1
            );
  DrawGeometry__15ESubModelShaderP3ERC((ESubModelShader *)param1,prc);
  if (1 < iVar1) {
    (*(code *)prc->__vtable->EndCommand)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->BeginCommand,0x40);
  }
  return;
}

void ISimsObjectModel::BigAnimOrderTableCallback(ERC *prc, u32 param1, u32 param2) {
	EMat4 mOrient;
	
  EMat4 mOrient;
  
  GetOrient__13EIStaticModelR5EMat4((EIStaticModel *)param1,&mOrient);
  Draw__15EAnimControllerP3ERCP7ERModelRC5EMat4Ui
            ((EAnimController *)(param1 + 0x14c),prc,*(ERModel **)(param1 + 300),&mOrient,param2 | 2
            );
  return;
}

void ISimsObjectModel::DrawBounds(ERC *prc) {
  return;
}

ObjAnimDef& ISimsObjectModel::GetAnimDef(s32 graphic, bool ignoreWarn) {
	int index;
	VECTOR<ObjAnimDef> *this;
	VECTOR<ObjAnimDef> *this;
	VECTOR<ObjAnimDef> *this;
	bool found;
	int i;
	VECTOR<ObjAnimDef> *this;
	unsigned int n;
	VECTOR<ObjAnimDef> *this;
	VECTOR<ObjAnimDef> *this;
	unsigned int n;
	VECTOR<ObjAnimDef> *this;
	
  cXObject__179_1116 *pcVar1;
  cXObject__179_1116__vtable *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  pcVar1 = (this->field0_0x0).m_pXOb;
  iVar4 = (*(code *)pcVar1->__vtable[1].HandleError)
                    ((int)&pcVar1->_vb1050 + (int)*(short *)&pcVar1->__vtable[1].Error,pcVar1,
                     ignoreWarn);
  iVar5 = 0;
  if (*(int *)(iVar4 + 0xc0) != 0) {
    pcVar1 = (this->field0_0x0).m_pXOb;
    pcVar2 = pcVar1->__vtable;
    iVar5 = (*(code *)pcVar2[1].HandleError)
                      ((int)&pcVar1->_vb1050 + (int)*(short *)&pcVar2[1].Error);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    if (**(int **)(iVar5 + 0xc0) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(**(int **)(iVar5 + 0xc0) + -4);
    }
  }
  pcVar1 = (this->field0_0x0).m_pXOb;
  pcVar2 = pcVar1->__vtable;
  iVar4 = (*(code *)pcVar2[1].HandleError)((int)&pcVar1->_vb1050 + (int)*(short *)&pcVar2[1].Error);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  if (*(int *)(**(int **)(iVar4 + 0xc0) + 0x18) != -1) {
    iVar4 = 0;
    bVar3 = false;
    if (0 < iVar5) {
      iVar7 = 0;
      do {
        pcVar1 = (this->field0_0x0).m_pXOb;
        pcVar2 = pcVar1->__vtable;
        iVar6 = (*(code *)pcVar2[1].HandleError)
                          ((int)&pcVar1->_vb1050 + (int)*(short *)&pcVar2[1].Error);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
        if (*(int *)(**(int **)(iVar6 + 0xc0) + iVar7 + 0x18) == graphic) {
          bVar3 = true;
          graphic = iVar4;
          break;
        }
        iVar4 = iVar4 + 1;
        iVar7 = iVar7 + 0x1c;
      } while (iVar4 < iVar5);
    }
    if (!bVar3) {
      graphic = 0;
    }
  }
  if ((graphic < 0) || (iVar5 <= graphic)) {
    graphic = 0;
    pcVar1 = (this->field0_0x0).m_pXOb;
  }
  else {
    pcVar1 = (this->field0_0x0).m_pXOb;
  }
  iVar5 = (*(code *)pcVar1->__vtable[1].HandleError)
                    ((int)&pcVar1->_vb1050 + (int)*(short *)&pcVar1->__vtable[1].Error);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  return (ObjAnimDef *)(**(int **)(iVar5 + 0xc0) + graphic * 0x1c);
}

void ISimsObjectModel::SetInitalObjectState() {
	u32 graphic;
	
  short sVar1;
  cXObject__179_1116 *pcVar2;
  cXObject__179_1116__vtable *pcVar3;
  int iVar4;
  ObjAnimDef *animdef;
  
  pcVar2 = (this->field0_0x0).m_pXOb;
  pcVar3 = pcVar2->__vtable;
  iVar4 = (*(code *)pcVar3[1].GetObjectImplementation)
                    ((int)&pcVar2->_vb1050 + (int)*(short *)&pcVar3[1].AdvanceGraphic);
  sVar1 = *(short *)(iVar4 + 0x26);
  if ((long)(int)this->m_lastGraphic != (long)sVar1) {
    animdef = GetAnimDef__16ISimsObjectModelib(this,(int)sVar1,SUB41(__ISOM_bInitWarn,0));
    this->m_lastGraphic = (int)sVar1;
    UpdateModel__16ISimsObjectModelPC10ObjAnimDef(this,animdef);
    SetupCharacter__16ISimsObjectModel(this);
    InitBulb__16ISimsObjectModel(this);
    UpdateBulb__16ISimsObjectModelPC10ObjAnimDef(this,animdef);
    UpdateAnim__16ISimsObjectModelPC10ObjAnimDef(this,animdef);
    UpdateParticle__16ISimsObjectModelPC10ObjAnimDef(this,animdef);
    UpdateShader__16ISimsObjectModelPC10ObjAnimDef(this,animdef);
  }
  return;
}

void ISimsObjectModel::Create(cXObject *pXOb, EHouse *pEHouse) {
  int iVar1;
  EStorable__vtable *pEVar2;
  
  (this->field0_0x0).m_pXOb = (cXObject__179_1116 *)pXOb;
  iVar1 = *(int *)&(this->field0_0x0).field_0x130;
  this->m_pEHouse = pEHouse;
  (**(code **)(iVar1 + 0x14))
            ((undefined *)
             ((int)((this->field0_0x0).m_highlight + -6) + (int)*(short *)(iVar1 + 0x10)));
  SetInitalObjectState__16ISimsObjectModel(this);
  if ((this->field0_0x0).field0_0x0.m_pModel != (ERModel *)0x0) {
    pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar2[2].SafeDelete)
              ((int)((this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)(pEVar2 + 2));
  }
  return;
}

void ISimsObjectModel::SetObjOrient() {
	cXObject *pXOb;
	float _xoff;
	float _yoff;
	CTilePt pt;
	EVec3 vPos;
	EHouse *this;
	
  cXObject__179_1116 *pcVar1;
  int iVar2;
  int iVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  float fVar4;
  float fVar5;
  CTilePt pt;
  EVec3 vPos;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  pcVar1 = (this->field0_0x0).m_pXOb;
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
  fVar4 = (this->m_pEHouse->m_vHouse_off).field0_0x0.d[1];
  fVar5 = (this->m_pEHouse->m_vHouse_off).field0_0x0.d[0];
  (*(code *)pcVar1->__vtable[1].TestIntersection)
            (&pt,(int)&pcVar1->_vb1050 + (int)*(short *)&pcVar1->__vtable[1].IsInWorld);
  iVar2 = (*(code *)pcVar1->__vtable->ReconType)
                    ((int)&pcVar1->_vb1050 + (int)*(short *)&pcVar1->__vtable->ReconStream,1);
  this->m_fRot = (float)iVar2 * 0.7853982;
  iVar3 = GetX__C7CTilePt(&pt);
  vPos.field0_0x0.d[0] = (float)iVar3 + fVar5;
  iVar3 = GetY__C7CTilePt(&pt);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vPos.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
  vPos.field0_0x0.d[1] = (float)iVar3 + fVar4;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_58 = 0x3f800000;
  local_5c = 0x3f800000;
                    /* end of inlined section */
  local_60 = 0x3f800000;
  ApplyMatrix__16ISimsObjectModelfRC5EVec3T2(this,(float)iVar2 * 0.7853982,&vPos,(EVec3 *)&local_60)
  ;
  ___7CTilePt(&pt,2);
  return;
}

void ISimsObjectModel::OrientSubObjects() {
	NLIterator iter;
	NLIterator i;
	NLIterator i;
	
  int *piVar1;
  ENodeListNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_subModelList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar2 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    piVar1 = (int *)pEVar2->data;
    while( true ) {
      (**(code **)(*piVar1 + 0xd4))
                ((int)piVar1 + (int)*(short *)(*piVar1 + 0xd0),(this->field0_0x0).m_pXOb);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar2 = pEVar2->pNext;
                    /* end of inlined section */
      if (pEVar2 == (ENodeListNode *)0x0) break;
      piVar1 = (int *)pEVar2->data;
    }
  }
  return;
}

void ISimsObjectModel::OrentSubObject() {
	float ftheta;
	EMat4 mOr;
	float _xoff;
	float _yoff;
	CTilePt pt;
	EHouse *this;
	
  cXObject__179_1116 *pcVar1;
  cXObject__179_1116__vtable *pcVar2;
  EStorable__vtable *pEVar3;
  int iVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EMat4 mOr;
  CTilePt pt;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  pcVar1 = (this->field0_0x0).m_pXOb;
  pcVar2 = pcVar1->__vtable;
  iVar4 = (*(code *)pcVar2->ReconType)
                    ((int)&pcVar1->_vb1050 + (int)*(short *)&pcVar2->ReconStream,1);
  pcVar1 = (this->field0_0x0).m_pXOb;
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
  pcVar2 = pcVar1->__vtable;
  local_5c = (this->m_pEHouse->m_vHouse_off).field0_0x0.d[1];
  local_60 = (this->m_pEHouse->m_vHouse_off).field0_0x0.d[0];
  (*(code *)pcVar2[1].TestIntersection)
            (&pt,(int)&pcVar1->_vb1050 + (int)*(short *)&pcVar2[1].IsInWorld);
  Id__5EMat4(&mOr);
  RotateZ__5EMat4f(&mOr,(float)iVar4 * 0.7853982);
  iVar4 = GetX__C7CTilePt(&pt);
  local_60 = (float)iVar4 + local_60;
  iVar4 = GetY__C7CTilePt(&pt);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  local_58 = 0;
                    /* end of inlined section */
  local_5c = (float)iVar4 + local_5c;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  PostTranslate__5EMat4RC5EVec3(&mOr,(EVec3 *)&local_60);
                    /* end of inlined section */
  SwapXY__FR5EMat4(&mOr);
  pEVar3 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar3[3].GetTypeInfo)
            ((int)((this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_minPos + -7) +
             (int)*(short *)&pEVar3[3].SafeDelete,&mOr);
  pEVar3 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar3[2].SafeDelete)
            ((int)((this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_minPos + -7) +
             (int)*(short *)(pEVar3 + 2));
  ___7CTilePt(&pt,2);
  return;
}

EStream& operator<<(EStream &s, ISimsWallObjectModel *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, ISimsWallObjectModel *&pD) {
	EStorable *pStorable;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EStorable *pStorable;
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
  __rs__FR7EStreamRP9EStorable(s,&pStorable);
  *pD = (ISimsWallObjectModel *)pStorable;
  return s;
}

ISimsWallObjectModel* ISimsWallObjectModel::ISimsWallObjectModel() {
  __16ISimsObjectModel((ISimsObjectModel__26_3162 *)this);
  *(__vtbl_ptr_type **)&(this->field0_0x0).field0_0x0.field_0x130 =
       _vt_20ISimsWallObjectModel_16IBaseSimInstance;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EStorable__vtable *)_vt_20ISimsWallObjectModel;
  return this;
}

void ISimsWallObjectModel::~ISimsWallObjectModel(int __in_chrg) {
	void *p;
	
  *(__vtbl_ptr_type **)&(this->field0_0x0).field0_0x0.field_0x130 =
       _vt_20ISimsWallObjectModel_16IBaseSimInstance;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EStorable__vtable *)_vt_20ISimsWallObjectModel;
  ___16ISimsObjectModel((ISimsObjectModel__26_3162 *)this,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/isiminstance.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void ISimsWallObjectModel::CreateShadow() {
  return;
}

void ISimsWallObjectModel::Create(cXObject *pXOb, EHouse *pEHouse) {
  EStorable__vtable *pEVar1;
  
  (this->field0_0x0).field0_0x0.m_pXOb = (cXObject__179_1116 *)pXOb;
  (this->field0_0x0).m_pEHouse = (EHouse__2_990 *)pEHouse;
  SetInitalObjectState__16ISimsObjectModel((ISimsObjectModel__26_3162 *)this);
  SetObjOrient__20ISimsWallObjectModel(this);
  if ((this->field0_0x0).field0_0x0.field0_0x0.m_pModel != (ERModel *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[2].SafeDelete)
              ((int)((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_otd.m_minPos + 0xfffffff9
                    ) + (int)*(short *)(pEVar1 + 2));
  }
  return;
}

void ISimsWallObjectModel::SetObjOrient() {
	cXObject *pXOb;
	EMat4 mOr;
	float _HouseXoff;
	float _HouseYoff;
	int theta;
	float ftheta;
	EVec2 vCenter;
	float xoff;
	float yoff;
	EVec3 vusePos;
	EHouse *this;
	cXMTObjectImpl *pMtOb;
	cXMTObjectImpl *pMaster;
	cXObject *ptr;
	cXMTObjectImpl *pCurObj;
	EIObjTileBoundRect m_tileBoundRect;
	CTilePt pt;
	ESimsCursor *pCursor;
	EVec3 vcPos;
	ESimsCursor *this;
	ObjLightDef *pLightDef;
	EMat4 mOrient;
	EIPointLight *pPoint;
	EVec3 *this;
	float x;
	float y;
	float z;
	EISpotLight *pSpot;
	EVec3 *this;
	float x;
	float y;
	float z;
	EVec3 *this;
	float x;
	float y;
	float z;
	EVec3 vR;
	
  undefined *puVar1;
  undefined1 **ppuVar2;
  EHouse__2_990 *pEVar3;
  int iVar4;
  EGlobalManagerClient__vtable *pEVar5;
  TreeSim__vtable *pTVar6;
  cXObject__179_1116__vtable *pcVar7;
  EILight *pEVar8;
  uint uVar9;
  ulong *puVar10;
  ulong uVar11;
  ESimsCursor__67_3982 *this_00;
  int *piVar12;
  cXObject__179_1116 *pcVar13;
  cXObject__15_2008 *pcVar14;
  ISimsWallObjectModel *pIVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  float fVar20;
  EStorable__vtable *pEVar21;
  undefined1 *puVar22;
  ERLevel *pEVar23;
  ERIGroup *pEVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  EMat4 mOr;
  EVec2 vCenter;
  EIObjTileBoundRect m_tileBoundRect;
  EVec3 vcPos;
  CTilePt aCStack_130 [5];
  EVec2__null___1__1 aEStack_120 [2];
  EMat4 mOrient;
  EVec3 vR;
  
  pcVar13 = (this->field0_0x0).field0_0x0.m_pXOb;
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
  pEVar3 = (this->field0_0x0).m_pEHouse;
                    /* end of inlined section */
  fVar28 = (pEVar3->m_vHouse_off).field0_0x0.d[1];
  fVar26 = (pEVar3->m_vHouse_off).field0_0x0.d[0];
  (*(code *)pcVar13->__vtable[1].HandleError)
            ((int)&pcVar13->_vb1050 + (int)*(short *)&pcVar13->__vtable[1].Error);
  lVar17 = (*(code *)pcVar13->__vtable->ReconType)
                     ((int)&pcVar13->_vb1050 + (int)*(short *)&pcVar13->__vtable->ReconStream,1);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vCenter.field0_0x0 = (EVec2__null___1__1)(null___1__1)0x0;
                    /* end of inlined section */
  fVar27 = (float)(int)lVar17 * 0.7853982;
  lVar18 = (*(code *)pcVar13->__vtable[1].GetFrontFaceDirection)
                     ((int)&pcVar13->_vb1050 +
                      (int)*(short *)&pcVar13->__vtable[1].GetInteractionLeader);
  if (lVar18 == 0) {
    (*(code *)pcVar13->__vtable[1].TestIntersection)
              ((CTilePt *)&m_tileBoundRect,
               (int)&pcVar13->_vb1050 + (int)*(short *)&pcVar13->__vtable[1].IsInWorld);
    GetEVec3__C7CTilePt((EVec3 *)&aEStack_120[0].field1,(CTilePt *)&m_tileBoundRect);
    puVar1 = (undefined *)((int)&vCenter.field0_0x0 + 7);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | (ulong)aEStack_120[0] >> (7 - uVar9) * 8;
    vCenter.field0_0x0 = (EVec2__null___1__1)(EVec2__null___1__1)aEStack_120[0].field1;
LAB_0016fea8:
    ___7CTilePt((CTilePt *)&m_tileBoundRect,2);
  }
  else {
                    /* inlined from ../MSrc/SCID.h */
    piVar12 = (int *)0x0;
    if (pcVar13 != (cXObject__179_1116 *)0x0) {
      piVar12 = (int *)_dyncastimpl__7TreeSim4SCID(pcVar13->_vb1050,cXMTObjectImplID);
    }
                    /* end of inlined section */
    piVar19 = (int *)piVar12[3];
    if ((int *)piVar12[3] == (int *)0x0) {
      piVar19 = piVar12;
    }
    lVar17 = (*(code *)pcVar13->__vtable->ReconType)
                       ((int)&pcVar13->_vb1050 + (int)*(short *)&pcVar13->__vtable->ReconStream,1);
    iVar16 = *(int *)(piVar12[1] + 4);
    fVar27 = (float)(int)lVar17 * 0.7853982;
    lVar18 = (**(code **)(iVar16 + 0x4c))(piVar12[1] + (int)*(short *)(iVar16 + 0x48));
    if (lVar18 != 0) {
      (*(code *)pcVar13->__vtable[1].TestIntersection)
                ((CTilePt *)&m_tileBoundRect,
                 (int)&pcVar13->_vb1050 + (int)*(short *)&pcVar13->__vtable[1].IsInWorld);
      fVar25 = GetXf__C7CTilePt((CTilePt *)&m_tileBoundRect);
      (*(code *)pcVar13->__vtable[1].TestIntersection)
                (aCStack_130,(int)&pcVar13->_vb1050 + (int)*(short *)&pcVar13->__vtable[1].IsInWorld
                );
      fVar20 = GetYf__C7CTilePt(aCStack_130);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      vCenter.field0_0x0 = (EVec2__null___1__1)CONCAT44(fVar20,fVar25);
                    /* end of inlined section */
      ___7CTilePt(aCStack_130,2);
      goto LAB_0016fea8;
    }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    m_tileBoundRect.m_vLRBT.field0_0x0.d[3] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    m_tileBoundRect.m_vLRBT.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    m_tileBoundRect.m_vLRBT.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    m_tileBoundRect.m_vLRBT.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
    (*(code *)pcVar13->__vtable[1].TestIntersection)
              ((CTilePt *)&vcPos,
               (int)&pcVar13->_vb1050 + (int)*(short *)&pcVar13->__vtable[1].IsInWorld);
    Set__18EIObjTileBoundRectRC7CTilePt(&m_tileBoundRect,(CTilePt *)&vcPos);
    ___7CTilePt((CTilePt *)&vcPos,2);
    if (piVar19 != (int *)0x0) {
      iVar16 = *piVar19;
      while( true ) {
        iVar4 = *(int *)(*(int *)(iVar16 + 4) + 4);
        (**(code **)(iVar4 + 0x2dc))
                  ((CTilePt *)&vcPos,*(int *)(iVar16 + 4) + (int)*(short *)(iVar4 + 0x2d8));
        AddTilePt__18EIObjTileBoundRectRC7CTilePt(&m_tileBoundRect,(CTilePt *)&vcPos);
        ___7CTilePt((CTilePt *)&vcPos,2);
        piVar19 = (int *)piVar19[2];
        if (piVar19 == (int *)0x0) break;
        iVar16 = *piVar19;
      }
    }
    GetCenter__18EIObjTileBoundRectR5EVec2(&m_tileBoundRect,&vCenter);
  }
  fVar25 = 0.0;
  Id__5EMat4(&mOr);
  RotateZ__5EMat4f(&mOr,fVar27);
  fVar27 = fVar25;
  if (lVar17 == 2) {
    fVar25 = -0.45;
  }
  else if (lVar17 < 3) {
    if (lVar17 == 0) {
      fVar27 = 0.45;
    }
  }
  else if (lVar17 == 4) {
    fVar27 = -0.45;
  }
  else if (lVar17 == 6) {
    fVar25 = 0.45;
  }
  m_tileBoundRect.m_vLRBT.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
  pEVar5 = (_pGfx->field0_0x0).__vtable;
  m_tileBoundRect.m_vLRBT.field0_0x0.d[0] = vCenter.field0_0x0.d[0];
  m_tileBoundRect.m_vLRBT.field0_0x0.d[1] = vCenter.field0_0x0.d[1];
  (*(code *)pEVar5[3].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar5[3].ManagedStartup);
  if (0.0 <= m_tileBoundRect.m_vLRBT.field0_0x0.d[0]) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    iVar16 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                       ((int)&_5Globs_pFixedWorld->__vtable +
                        (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
    if ((float)iVar16 < m_tileBoundRect.m_vLRBT.field0_0x0.d[0]) {
      pEVar21 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
    }
    else {
                    /* end of inlined section */
      if (m_tileBoundRect.m_vLRBT.field0_0x0.d[1] < 0.0) {
        pEVar21 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
      }
      else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        iVar16 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                           ((int)&_5Globs_pFixedWorld->__vtable +
                            (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
        if (m_tileBoundRect.m_vLRBT.field0_0x0.d[1] <= (float)iVar16) goto LAB_001700cc;
        pEVar21 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
      }
    }
  }
  else {
    pEVar21 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  }
  this_00 = _globals._pCursor[0];
  lVar17 = (*(code *)pEVar21[8].GetTypeVersion)
                     ((int)((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_otd.m_minPos +
                           0xfffffff9) + (int)*(short *)&pEVar21[8].GetTypeKey);
  if (lVar17 == 0) {
    if (this_00 == (ESimsCursor__67_3982 *)0x0) goto LAB_001700cc;
    pcVar13 = (cXObject__179_1116 *)GetGrabObject__11ESimsCursor((ESimsCursor__15_1743 *)this_00);
    if (pcVar13 == (this->field0_0x0).field0_0x0.m_pXOb) {
      m_tileBoundRect.m_vLRBT.field0_0x0.d[1] = (this_00->m_vPos).field0_0x0.d[0];
    }
    else {
      pcVar14 = GetGrabObject__11ESimsCursor((ESimsCursor__15_1743 *)this_00);
      if (pcVar14 == (cXObject__15_2008 *)0x0) goto LAB_001700cc;
      pcVar14 = GetGrabObject__11ESimsCursor((ESimsCursor__15_1743 *)this_00);
      pTVar6 = pcVar14->_vb3534->__vtable;
      pIVar15 = (ISimsWallObjectModel *)
                (*(code *)pTVar6[1].GetISimInstance)
                          ((int)&pcVar14->_vb3534->m_pObject +
                           (int)*(short *)&pTVar6[1].GetLastResult);
      if (this != pIVar15) goto LAB_001700cc;
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
      m_tileBoundRect.m_vLRBT.field0_0x0.d[1] = (this_00->m_vPos).field0_0x0.d[0];
    }
  }
  else {
    m_tileBoundRect.m_vLRBT.field0_0x0.d[1] = (this_00->m_vPos).field0_0x0.d[0];
  }
                    /* end of inlined section */
  fVar27 = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar25 = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  m_tileBoundRect.m_vLRBT.field0_0x0.d[0] = (this_00->m_vPos).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
LAB_001700cc:
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vcPos.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
  vcPos.field0_0x0.d[0] = m_tileBoundRect.m_vLRBT.field0_0x0.d[0] + fVar26 + fVar25;
  vcPos.field0_0x0.d[1] = m_tileBoundRect.m_vLRBT.field0_0x0.d[1] + fVar28 + fVar27;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  PostTranslate__5EMat4RC5EVec3(&mOr,&vcPos);
                    /* end of inlined section */
  SwapXY__FR5EMat4(&mOr);
  pEVar21 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar21[3].GetTypeInfo)
            ((int)((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_otd.m_minPos + 0xfffffff9)
             + (int)*(short *)&pEVar21[3].SafeDelete,&mOr);
  OrientSubObjects__16ISimsObjectModel((ISimsObjectModel__26_3162 *)this);
  if ((this->field0_0x0).m_pLightBulb != (EILight *)0x0) {
    pcVar13 = (this->field0_0x0).field0_0x0.m_pXOb;
    pcVar7 = pcVar13->__vtable;
    iVar16 = (*(code *)pcVar7[1].HandleError)
                       ((int)&pcVar13->_vb1050 + (int)*(short *)&pcVar7[1].Error);
    piVar12 = *(int **)(*(int *)(iVar16 + 0xc0) + 0x2c);
    if (piVar12 != (int *)0x0) {
                    /* end of inlined section */
      GetOrient__13EIStaticModelR5EMat4((EIStaticModel *)this,&mOrient);
      if (*piVar12 == 0) {
        pEVar8 = (this->field0_0x0).m_pLightBulb;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        pEVar24 = (ERIGroup *)piVar12[5];
        pEVar23 = (ERLevel *)piVar12[4];
        pEVar8[1].field0_0x0.field0_0x0.__vtable = (EStorable__vtable *)piVar12[3];
        pEVar8[1].field0_0x0.m_pIGroup = pEVar24;
        pEVar8[1].field0_0x0.m_pLevel = pEVar23;
        pEVar21 = pEVar8[1].field0_0x0.field0_0x0.__vtable;
        vcPos.field0_0x0.d[0] =
             (float)pEVar21 * mOrient.field0_0x0.d[0][0] +
             (float)pEVar23 * mOrient.field0_0x0.d[1][0] +
             (float)pEVar24 * mOrient.field0_0x0.d[2][0] + mOrient.field0_0x0.d[3][0];
        vcPos.field0_0x0.d[2] =
             (float)pEVar21 * mOrient.field0_0x0.d[0][2] +
             (float)pEVar23 * mOrient.field0_0x0.d[1][2] +
             (float)pEVar24 * mOrient.field0_0x0.d[2][2] + mOrient.field0_0x0.d[3][2];
        vcPos.field0_0x0.d[1] =
             (float)pEVar21 * mOrient.field0_0x0.d[0][1] +
             (float)pEVar23 * mOrient.field0_0x0.d[1][1] +
             (float)pEVar24 * mOrient.field0_0x0.d[2][1] + mOrient.field0_0x0.d[3][1];
                    /* end of inlined section */
        puVar1 = (undefined *)((int)&pEVar8[1].field0_0x0.m_pLevel + 3);
        uVar9 = (uint)puVar1 & 7;
        puVar10 = (ulong *)(puVar1 + -uVar9);
        *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
                   CONCAT44(vcPos.field0_0x0.d[1],vcPos.field0_0x0.d[0]) >> (7 - uVar9) * 8;
        uVar9 = (uint)(pEVar8 + 1) & 7;
        puVar10 = (ulong *)((int)(pEVar8 + 1) - uVar9);
        *puVar10 = CONCAT44(vcPos.field0_0x0.d[1],vcPos.field0_0x0.d[0]) << uVar9 * 8 |
                   *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
        pEVar8[1].field0_0x0.m_pIGroup = (ERIGroup *)vcPos.field0_0x0.d[2];
        pEVar21 = (pEVar8->field0_0x0).field0_0x0.__vtable;
        (*(code *)pEVar21[2].SafeDelete)
                  ((int)((pEVar8->field0_0x0).m_otd.m_minPos + -7) + (int)*(short *)(pEVar21 + 2));
      }
      else if (*piVar12 == 1) {
        pEVar8 = (this->field0_0x0).m_pLightBulb;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        pEVar23 = (ERLevel *)piVar12[4];
        pEVar24 = (ERIGroup *)piVar12[5];
        pEVar8[1].field0_0x0.field0_0x0.__vtable = (EStorable__vtable *)piVar12[3];
        pEVar8[1].field0_0x0.m_pIGroup = pEVar24;
        pEVar8[1].field0_0x0.m_pLevel = pEVar23;
        pEVar21 = pEVar8[1].field0_0x0.field0_0x0.__vtable;
                    /* end of inlined section */
        uVar11 = CONCAT44((float)pEVar21 * mOrient.field0_0x0.d[0][1] +
                          (float)pEVar23 * mOrient.field0_0x0.d[1][1] +
                          (float)pEVar24 * mOrient.field0_0x0.d[2][1] + mOrient.field0_0x0.d[3][1],
                          (float)pEVar21 * mOrient.field0_0x0.d[0][0] +
                          (float)pEVar23 * mOrient.field0_0x0.d[1][0] +
                          (float)pEVar24 * mOrient.field0_0x0.d[2][0] + mOrient.field0_0x0.d[3][0]);
        puVar1 = (undefined *)((int)&pEVar8[1].field0_0x0.m_pLevel + 3);
        uVar9 = (uint)puVar1 & 7;
        puVar10 = (ulong *)(puVar1 + -uVar9);
        *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | uVar11 >> (7 - uVar9) * 8;
        uVar9 = (uint)(pEVar8 + 1) & 7;
        puVar10 = (ulong *)((int)(pEVar8 + 1) - uVar9);
        *puVar10 = uVar11 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
        pEVar8[1].field0_0x0.m_pIGroup =
             (ERIGroup *)
             ((float)pEVar21 * mOrient.field0_0x0.d[0][2] +
              (float)pEVar23 * mOrient.field0_0x0.d[1][2] +
              (float)pEVar24 * mOrient.field0_0x0.d[2][2] + mOrient.field0_0x0.d[3][2]);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar27 = (float)piVar12[8];
        fVar26 = (float)piVar12[7];
        pEVar8[1].field0_0x0.m_iIGroup = (undefined1 *)piVar12[6];
        pEVar8[1].field0_0x0.m_instanceId = (uint)fVar26;
        pEVar8[1].field0_0x0.m_instanceFlags = (uint)fVar27;
        puVar22 = pEVar8[1].field0_0x0.m_iIGroup;
        vcPos.field0_0x0.d[0] =
             (float)puVar22 * mOrient.field0_0x0.d[0][0] + fVar26 * mOrient.field0_0x0.d[1][0] +
             fVar27 * mOrient.field0_0x0.d[2][0];
        vcPos.field0_0x0.d[2] =
             (float)puVar22 * mOrient.field0_0x0.d[0][2] + fVar26 * mOrient.field0_0x0.d[1][2] +
             fVar27 * mOrient.field0_0x0.d[2][2];
        vcPos.field0_0x0.d[1] =
             (float)puVar22 * mOrient.field0_0x0.d[0][1] + fVar26 * mOrient.field0_0x0.d[1][1] +
             fVar27 * mOrient.field0_0x0.d[2][1];
                    /* end of inlined section */
        puVar1 = (undefined *)((int)&pEVar8[1].field0_0x0.m_instanceId + 3);
        uVar9 = (uint)puVar1 & 7;
        puVar10 = (ulong *)(puVar1 + -uVar9);
        *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
                   CONCAT44(vcPos.field0_0x0.d[1],vcPos.field0_0x0.d[0]) >> (7 - uVar9) * 8;
        ppuVar2 = &pEVar8[1].field0_0x0.m_iIGroup;
        uVar9 = (uint)ppuVar2 & 7;
        puVar10 = (ulong *)((int)ppuVar2 - uVar9);
        *puVar10 = CONCAT44(vcPos.field0_0x0.d[1],vcPos.field0_0x0.d[0]) << uVar9 * 8 |
                   *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
        pEVar8[1].field0_0x0.m_instanceFlags = (uint)vcPos.field0_0x0.d[2];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        puVar22 = pEVar8[1].field0_0x0.m_iIGroup;
        fVar26 = (float)pEVar8[1].field0_0x0.m_instanceId;
        fVar27 = (float)pEVar8[1].field0_0x0.m_instanceFlags;
        fVar26 = sqrtf((float)puVar22 * (float)puVar22 + fVar26 * fVar26 + fVar27 * fVar27);
        if (fVar26 == 0.0) {
          pEVar21 = (pEVar8->field0_0x0).field0_0x0.__vtable;
        }
        else {
          fVar26 = 1.0 / fVar26;
          pEVar8[1].field0_0x0.m_iIGroup =
               (undefined1 *)((float)pEVar8[1].field0_0x0.m_iIGroup * fVar26);
          fVar27 = (float)pEVar8[1].field0_0x0.m_instanceFlags;
          pEVar8[1].field0_0x0.m_instanceId =
               (uint)((float)pEVar8[1].field0_0x0.m_instanceId * fVar26);
          pEVar8[1].field0_0x0.m_instanceFlags = (uint)(fVar27 * fVar26);
                    /* end of inlined section */
          pEVar21 = (pEVar8->field0_0x0).field0_0x0.__vtable;
        }
        (*(code *)pEVar21[2].SafeDelete)
                  ((int)((pEVar8->field0_0x0).m_otd.m_minPos + -7) + (int)*(short *)(pEVar21 + 2));
      }
    }
  }
  return;
}

EStream& operator<<(EStream &s, ISimsMultiTileObjectModel *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, ISimsMultiTileObjectModel *&pD) {
	EStorable *pStorable;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EStorable *pStorable;
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
  __rs__FR7EStreamRP9EStorable(s,&pStorable);
  *pD = (ISimsMultiTileObjectModel *)pStorable;
  return s;
}

ISimsMultiTileObjectModel* ISimsMultiTileObjectModel::ISimsMultiTileObjectModel() {
  __16ISimsObjectModel((ISimsObjectModel__26_3162 *)this);
  *(__vtbl_ptr_type **)&(this->field0_0x0).field0_0x0.field_0x130 =
       _vt_25ISimsMultiTileObjectModel_16IBaseSimInstance;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EStorable__vtable *)_vt_25ISimsMultiTileObjectModel;
  return this;
}

void ISimsMultiTileObjectModel::~ISimsMultiTileObjectModel(int __in_chrg) {
	void *p;
	
  *(__vtbl_ptr_type **)&(this->field0_0x0).field0_0x0.field_0x130 =
       _vt_25ISimsMultiTileObjectModel_16IBaseSimInstance;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EStorable__vtable *)_vt_25ISimsMultiTileObjectModel;
  ___16ISimsObjectModel((ISimsObjectModel__26_3162 *)this,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/isiminstance.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void ISimsMultiTileObjectModel::Create(cXObject *pXOb, EHouse *pEHouse) {
  EStorable__vtable *pEVar1;
  
  (this->field0_0x0).field0_0x0.m_pXOb = (cXObject__179_1116 *)pXOb;
  (this->field0_0x0).m_pEHouse = (EHouse__2_990 *)pEHouse;
  SetObjOrient__25ISimsMultiTileObjectModel(this);
  SetInitalObjectState__16ISimsObjectModel((ISimsObjectModel__26_3162 *)this);
  if ((this->field0_0x0).field0_0x0.field0_0x0.m_pModel != (ERModel *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[2].SafeDelete)
              ((int)((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_otd.m_minPos + 0xfffffff9
                    ) + (int)*(short *)(pEVar1 + 2));
  }
  return;
}

void ISimsMultiTileObjectModel::SetObjOrient() {
	cXPortal *pPortal;
	cXObject *pXOb;
	cXMTObjectImpl *pMtOb;
	cXMTObjectImpl *pMaster;
	float ftheta;
	EVec2 vCenter;
	cXObject *ptr;
	ERoom *pERoom;
	TileWallsSegment segment;
	CTilePt point;
	bool pointInBounds;
	TileWalls walls;
	TileWallsSegment segpos;
	cXObject *ptr;
	cXMTObjectImpl *pCurObj;
	EIObjTileBoundRect m_tileBoundRect;
	EHouse *this;
	
  cXObject__179_1116 *pcVar1;
  ERoom *this_00;
  cXObject__179_1116__vtable *pcVar2;
  int iVar3;
  int **ppiVar4;
  TileWallsSegment TVar5;
  TileWallsSegment inSeg;
  WallStyle WVar6;
  WallStyle WVar7;
  EIWallPart2 *pEVar8;
  int *piVar9;
  int iVar10;
  EHouse__2_990 *pEVar11;
  ulong uVar12;
  long lVar13;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  int *piVar14;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  TileWallsSegment seg;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar15;
  float ftheta;
  CTilePt point;
  float local_fc;
  EIObjTileBoundRect m_tileBoundRect;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
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
  
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from ../MSrc/SCID.h */
  pcVar1 = (this->field0_0x0).field0_0x0.m_pXOb;
  ppiVar4 = (int **)0x0;
  if (pcVar1 != (cXObject__179_1116 *)0x0) {
    ppiVar4 = (int **)_dyncastimpl__7TreeSim4SCID(pcVar1->_vb1050,cXPortalID);
  }
                    /* end of inlined section */
  *(ulong *)&(this->field0_0x0).m_pEHouse =
       *(ulong *)&(this->field0_0x0).m_pEHouse & 0xffffffefffffffff |
       (ulong)(ppiVar4 != (int **)0x0) << 0x24;
  if ((ulong)(ppiVar4 != (int **)0x0) != 0) {
    this_00 = ((this->field0_0x0).m_pEHouse)->m_pWallMan2;
    iVar10 = *(int *)(**ppiVar4 + 4);
    TVar5 = (**(code **)(iVar10 + 0x244))(**ppiVar4 + (int)*(short *)(iVar10 + 0x240));
    pcVar1 = (this->field0_0x0).field0_0x0.m_pXOb;
    pcVar2 = pcVar1->__vtable;
    (*(code *)pcVar2[1].TestIntersection)
              (&point,(int)&pcVar1->_vb1050 + (int)*(short *)&pcVar2[1].IsInWorld);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    uVar12 = (*(code *)_5Globs_pFixedWorld->__vtable->SetWall)
                       ((int)&_5Globs_pFixedWorld->__vtable +
                        (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetWall,&point);
    if ((uVar12 ^ 1) != 0) {
      seg = TVar5;
      if (TVar5 == kNoWalls) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        (*(code *)_5Globs_pFixedWorld->__vtable->ComputeArchValue)
                  ((TileWalls *)&m_tileBoundRect,
                   (int)&_5Globs_pFixedWorld->__vtable +
                   (int)*(short *)&_5Globs_pFixedWorld->__vtable->ComputeRooms,&point);
        for (inSeg = First__C9TileWalls((TileWalls *)&m_tileBoundRect); seg = TVar5,
            inSeg != kNoWalls;
            inSeg = Next__C9TileWalls16TileWallsSegment((TileWalls *)&m_tileBoundRect,inSeg)) {
          WVar6 = (*(code *)ppiVar4[1][5])((int)ppiVar4 + (int)*(short *)(ppiVar4[1] + 4));
          WVar7 = GetStyle__C9TileWalls16TileWallsSegment((TileWalls *)&m_tileBoundRect,inSeg);
          seg = inSeg;
          if (WVar6 == WVar7) break;
        }
        ___9TileWalls((TileWalls *)&m_tileBoundRect,2);
      }
                    /* end of inlined section */
      if (((uVar12 ^ 1) != 0) && (seg != kNoWalls)) {
        pEVar8 = GetWallFromTileAndSegment__5ERoom16TileWallsSegmentR7CTilePt(this_00,seg,&point);
        (this->field0_0x0).m_pWall = pEVar8;
      }
    }
    ___7CTilePt(&point,2);
  }
  pcVar1 = (this->field0_0x0).field0_0x0.m_pXOb;
                    /* inlined from ../MSrc/SCID.h */
  piVar9 = (int *)0x0;
  if (pcVar1 != (cXObject__179_1116 *)0x0) {
    piVar9 = (int *)_dyncastimpl__7TreeSim4SCID(pcVar1->_vb1050,cXMTObjectImplID);
  }
                    /* end of inlined section */
  piVar14 = (int *)piVar9[3];
  if ((int *)piVar9[3] == (int *)0x0) {
    piVar14 = piVar9;
  }
  iVar10 = (*(code *)pcVar1->__vtable->ReconType)
                     ((int)&pcVar1->_vb1050 + (int)*(short *)&pcVar1->__vtable->ReconStream,1);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  _point = -1.0;
  local_fc = -1.0;
                    /* end of inlined section */
  ftheta = (float)iVar10 * 0.7853982;
  iVar10 = *(int *)(piVar9[1] + 4);
  lVar13 = (**(code **)(iVar10 + 0x4c))(piVar9[1] + (int)*(short *)(iVar10 + 0x48));
  if (lVar13 == 0) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    m_tileBoundRect.m_vLRBT.field0_0x0.d[3] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    m_tileBoundRect.m_vLRBT.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    m_tileBoundRect.m_vLRBT.field0_0x0.d[1] = 0.0;
    m_tileBoundRect.m_vLRBT.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
    (*(code *)pcVar1->__vtable[1].TestIntersection)
              ((CTilePt *)&local_e0,
               (int)&pcVar1->_vb1050 + (int)*(short *)&pcVar1->__vtable[1].IsInWorld);
    Set__18EIObjTileBoundRectRC7CTilePt
              ((EIObjTileBoundRect *)(TileWalls *)&m_tileBoundRect,(CTilePt *)&local_e0);
    ___7CTilePt((CTilePt *)&local_e0,2);
    if (piVar14 != (int *)0x0) {
      iVar10 = *piVar14;
      while( true ) {
        iVar3 = *(int *)(*(int *)(iVar10 + 4) + 4);
        (**(code **)(iVar3 + 0x2dc))
                  ((CTilePt *)&local_e0,*(int *)(iVar10 + 4) + (int)*(short *)(iVar3 + 0x2d8));
        AddTilePt__18EIObjTileBoundRectRC7CTilePt
                  ((EIObjTileBoundRect *)(TileWalls *)&m_tileBoundRect,(CTilePt *)&local_e0);
        ___7CTilePt((CTilePt *)&local_e0,2);
        piVar14 = (int *)piVar14[2];
        if (piVar14 == (int *)0x0) break;
        iVar10 = *piVar14;
      }
    }
    GetCenter__18EIObjTileBoundRectR5EVec2
              ((EIObjTileBoundRect *)(TileWalls *)&m_tileBoundRect,(EVec2 *)&point);
    pEVar11 = (this->field0_0x0).m_pEHouse;
  }
  else {
    (*(code *)pcVar1->__vtable[1].TestIntersection)
              ((TileWalls *)&m_tileBoundRect,
               (int)&pcVar1->_vb1050 + (int)*(short *)&pcVar1->__vtable[1].IsInWorld);
    fVar15 = GetXf__C7CTilePt((CTilePt *)(TileWalls *)&m_tileBoundRect);
    (*(code *)pcVar1->__vtable[1].TestIntersection)
              ((CTilePt *)&local_e0,
               (int)&pcVar1->_vb1050 + (int)*(short *)&pcVar1->__vtable[1].IsInWorld);
    local_fc = GetYf__C7CTilePt((CTilePt *)&local_e0);
    _point = fVar15;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    ___7CTilePt((CTilePt *)&local_e0,2);
    ___7CTilePt((CTilePt *)(TileWalls *)&m_tileBoundRect,2);
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
    pEVar11 = (this->field0_0x0).m_pEHouse;
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  _point = _point + (pEVar11->m_vHouse_off).field0_0x0.d[0];
  m_tileBoundRect.m_vLRBT.field0_0x0.d[1] = local_fc + (pEVar11->m_vHouse_off).field0_0x0.d[1];
  m_tileBoundRect.m_vLRBT.field0_0x0.d[2] = 0.0;
  local_d8 = 0x3f800000;
  local_dc = 0x3f800000;
                    /* end of inlined section */
  local_e0 = 0x3f800000;
  m_tileBoundRect.m_vLRBT.field0_0x0.d[0] = _point;
  ApplyMatrix__16ISimsObjectModelfRC5EVec3T2
            ((ISimsObjectModel__26_3162 *)this,ftheta,(EVec3 *)(TileWalls *)&m_tileBoundRect,
             (EVec3 *)(CTilePt *)&local_e0);
  return;
}

EStream& operator<<(EStream &s, ISimsCounterTopObject *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, ISimsCounterTopObject *&pD) {
	EStorable *pStorable;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EStorable *pStorable;
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
  __rs__FR7EStreamRP9EStorable(s,&pStorable);
  *pD = (ISimsCounterTopObject *)pStorable;
  return s;
}

ISimsCounterTopObject* ISimsCounterTopObject::ISimsCounterTopObject() {
  __16ISimsObjectModel((ISimsObjectModel__26_3162 *)this);
  *(__vtbl_ptr_type **)&(this->field0_0x0).field0_0x0.field_0x130 =
       _vt_21ISimsCounterTopObject_16IBaseSimInstance;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EStorable__vtable *)_vt_21ISimsCounterTopObject;
  return this;
}

void ISimsCounterTopObject::~ISimsCounterTopObject(int __in_chrg) {
	void *p;
	
  *(__vtbl_ptr_type **)&(this->field0_0x0).field0_0x0.field_0x130 =
       _vt_21ISimsCounterTopObject_16IBaseSimInstance;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EStorable__vtable *)_vt_21ISimsCounterTopObject;
  ___16ISimsObjectModel((ISimsObjectModel__26_3162 *)this,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/isiminstance.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void ISimsCounterTopObject::Create(cXObject *pXOb, EHouse *pEHouse) {
  (this->field0_0x0).field0_0x0.m_pXOb = (cXObject__179_1116 *)pXOb;
  (this->field0_0x0).m_pEHouse = (EHouse__2_990 *)pEHouse;
  SetObjOrient__21ISimsCounterTopObject(this);
  return;
}

void ISimsCounterTopObject::SetObjOrient() {
	cXObject *pXOb;
	u32 workbenchId;
	ECntrMdlLkupNode *pModels;
	CTilePt point;
	bool bFoundSink;
	ObjectIterator i;
	TNodeList<ISimInstance *> *this;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	VECTOR<ObjAnimDef> *this;
	VECTOR<ObjAnimDef> *this;
	int count;
	unsigned int n;
	unsigned int n;
	ISimsObjectModel *pCounterTop;
	void *result;
	ISimInstance *data;
	CTilePt pt;
	bool bGotVNeighbor;
	bool bGotHNeighbor;
	ObjectIterator leftIt;
	ObjectIterator topIt;
	ObjectIterator rightIt;
	ObjectIterator botIt;
	cXObject *pTempOb;
	cXObject *p;
	VECTOR<ObjAnimDef> *this;
	VECTOR<ObjAnimDef> *this;
	VECTOR<ObjAnimDef> *this;
	cXObject *pTempOb;
	cXObject *p;
	VECTOR<ObjAnimDef> *this;
	VECTOR<ObjAnimDef> *this;
	VECTOR<ObjAnimDef> *this;
	cXObject *pTempOb;
	cXObject *p;
	VECTOR<ObjAnimDef> *this;
	VECTOR<ObjAnimDef> *this;
	VECTOR<ObjAnimDef> *this;
	cXObject *pTempOb;
	cXObject *p;
	VECTOR<ObjAnimDef> *this;
	VECTOR<ObjAnimDef> *this;
	VECTOR<ObjAnimDef> *this;
	
  TNodeList_ISimInstance___ *this_00;
  EStorable__vtable *pEVar1;
  int *piVar2;
  cXObject__179_1116 *pcVar3;
  ECntrMdlLkupNode *pEVar4;
  cXObject__179_1116__vtable *pcVar5;
  bool bVar6;
  bool bVar7;
  cXObject__56_2557 *p;
  cXObject__15_2008 *pcVar8;
  bool bVar9;
  int iVar10;
  ECntrMdlLkupTable *pEVar11;
  uint uVar12;
  int iVar13;
  ISimsObjectModel__26_3162 *pIVar14;
  long lVar15;
  ECntrMdlLkupNode *pEVar16;
  ECntrMdlLkupNode *pEVar17;
  ENodeListNode *pEVar18;
  uint modelId;
  ECntrMdlLkupNode *pEVar19;
  CTilePt point;
  ObjectIterator i;
  CTilePt pt;
  ObjectIterator leftIt;
  CTilePt aCStack_f0 [5];
  ObjectIterator topIt;
  ObjectIterator rightIt;
  ObjectIterator botIt;
  bool bGotVNeighbor;
  bool bGotHNeighbor;
  
  if ((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pLevel != (ERLevel *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[6].Read)
              ((int)((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_otd.m_minPos + 0xfffffff9
                    ) + (int)*(short *)&pEVar1[6].EStorable);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  }
  this_00 = &(this->field0_0x0).m_subModelList;
  pEVar18 = (this_00->field0_0x0).m_l.m_pHead;
  if (pEVar18 != (ENodeListNode *)0x0) {
    piVar2 = (int *)pEVar18->data;
    while( true ) {
      pEVar18 = pEVar18->pNext;
      (**(code **)(*piVar2 + 0xc))((int)piVar2 + (int)*(short *)(*piVar2 + 8));
      if (pEVar18 == (ENodeListNode *)0x0) break;
      piVar2 = (int *)pEVar18->data;
    }
  }
  RemoveAll__9ENodeList(&this_00->field0_0x0);
                    /* end of inlined section */
  pcVar3 = (this->field0_0x0).field0_0x0.m_pXOb;
  iVar10 = (*(code *)pcVar3->__vtable[1].HandleError)
                     ((int)&pcVar3->_vb1050 + (int)*(short *)&pcVar3->__vtable[1].Error);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  modelId = ***(uint ***)(iVar10 + 0xc0);
  pEVar11 = GetCounterModelTable__7EGlobal(&_globals);
  pEVar4 = (pEVar11->vCounters).pData;
  iVar10 = 0;
  pEVar16 = pEVar4;
  pEVar17 = pEVar4;
  while( true ) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    uVar12 = 0;
    if (pEVar4 != (ECntrMdlLkupNode *)0x0) {
      uVar12 = pEVar4[-1].counterCornerID;
    }
                    /* end of inlined section */
    pEVar19 = (ECntrMdlLkupNode *)0x0;
                    /* end of inlined section */
    if (((int)uVar12 <= iVar10) || (pEVar19 = pEVar17, pEVar16->defaultID == modelId)) break;
    pEVar17 = pEVar17 + 1;
    pEVar16 = pEVar16 + 1;
    iVar10 = iVar10 + 1;
  }
  (*(code *)pcVar3->__vtable[1].TestIntersection)
            (&point,(int)&pcVar3->_vb1050 + (int)*(short *)&pcVar3->__vtable[1].IsInWorld);
  iVar10 = GetX__C7CTilePt(&point);
  if (-1 < iVar10) {
    iVar10 = GetX__C7CTilePt(&point);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    iVar13 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                       ((int)&_5Globs_pFixedWorld->__vtable +
                        (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
    if ((iVar10 <= iVar13) && (iVar10 = GetY__C7CTilePt(&point), -1 < iVar10)) {
      iVar10 = GetY__C7CTilePt(&point);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      iVar13 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                         ((int)&_5Globs_pFixedWorld->__vtable +
                          (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
      if (iVar10 <= iVar13) {
        bVar6 = false;
                    /* inlined from ../MSrc/objectiterator.h */
        init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType(&i,&point,kAll);
        p = (cXObject__56_2557 *)i.fCurrent;
                    /* end of inlined section */
        while (p != (cXObject__56_2557 *)0x0) {
          i.fCurrent = (cXObject__15_2008 *)p;
          bVar9 = IsSinkId__21ISimsCounterTopObjectP8cXObject((cXObject__53_2557 *)p);
          if (bVar9) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/isiminstance.h */
            pIVar14 = (ISimsObjectModel__26_3162 *)_memmanAlloc__FUiUi(0x2b0,0x10);
            memset(pIVar14,0,0x2b0);
                    /* end of inlined section */
            pIVar14 = __16ISimsObjectModel(pIVar14);
            pIVar14->m_pEHouse = (EHouse__26_3190 *)(this->field0_0x0).m_pEHouse;
            SetXOb__12ISimInstanceP8cXObject(&pIVar14->field0_0x0,p);
            SetSOMModel__16ISimsObjectModelUi(pIVar14,pEVar19->counterTopID);
            pEVar1 = (pIVar14->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
            (*(code *)pEVar1[8].Read)
                      ((int)((pIVar14->field0_0x0).field0_0x0.field0_0x0.m_otd.m_minPos + -7) +
                       (int)*(short *)&pEVar1[8].EStorable);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
            AddTail__9ENodeListUi(&this_00->field0_0x0,(uint)pIVar14);
                    /* end of inlined section */
            *(ulong *)&pIVar14->m_pEHouse = *(ulong *)&pIVar14->m_pEHouse | 0x800000000;
            if ((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pLevel == (ERLevel *)0x0) {
              modelId = pEVar19->counterBaseID;
            }
            else {
              pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
              (*(code *)pEVar1[6].GetTypeVersion)
                        ((int)((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_otd.m_minPos +
                              0xfffffff9) + (int)*(short *)&pEVar1[6].GetTypeKey);
              modelId = pEVar19->counterBaseID;
            }
            bVar6 = true;
            break;
          }
          __pp__14ObjectIterator(&i);
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
          p = (cXObject__56_2557 *)i.fCurrent;
        }
        if (!bVar6) {
          pcVar3 = (this->field0_0x0).field0_0x0.m_pXOb;
          pcVar5 = pcVar3->__vtable;
          bVar9 = false;
          bVar6 = false;
          (*(code *)pcVar5[1].TestIntersection)
                    (&pt,(int)&pcVar3->_vb1050 + (int)*(short *)&pcVar5[1].IsInWorld);
          iVar10 = GetX__C7CTilePt(&pt);
          iVar13 = GetY__C7CTilePt(&pt);
          __7CTilePtiii(aCStack_f0,iVar10 + -1,iVar13,1);
                    /* inlined from ../MSrc/objectiterator.h */
          init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType(&leftIt,aCStack_f0,kAll);
                    /* end of inlined section */
          ___7CTilePt(aCStack_f0,2);
          pcVar8 = leftIt.fCurrent;
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
          while (pcVar8 != (cXObject__15_2008 *)0x0) {
            bVar7 = false;
            leftIt.fCurrent = pcVar8;
            if (((pcVar8 != (cXObject__15_2008 *)0x0) &&
                (lVar15 = (*(code *)pcVar8->__vtable[1].HandleError)
                                    ((int)&pcVar8->_vb3534 +
                                     (int)*(short *)&pcVar8->__vtable[1].Error), lVar15 != 0)) &&
               (iVar10 = (*(code *)pcVar8->__vtable[1].HandleError)
                                   ((int)&pcVar8->_vb3534 +
                                    (int)*(short *)&pcVar8->__vtable[1].Error),
               *(int *)(iVar10 + 0xc0) != 0)) {
              iVar10 = (*(code *)pcVar8->__vtable[1].HandleError)
                                 ((int)&pcVar8->_vb3534 + (int)*(short *)&pcVar8->__vtable[1].Error)
              ;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
              if (**(int **)(iVar10 + 0xc0) == 0) {
                iVar10 = 0;
              }
              else {
                iVar10 = *(int *)(**(int **)(iVar10 + 0xc0) + -4);
              }
                    /* end of inlined section */
              if (0 < iVar10) {
                bVar7 = true;
                iVar10 = (*(code *)pcVar8->__vtable[1].HandleError)
                                   ((int)&pcVar8->_vb3534 +
                                    (int)*(short *)&pcVar8->__vtable[1].Error);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                if (***(int ***)(iVar10 + 0xc0) != 0x6cd21f7f) {
                  bVar7 = false;
                }
              }
            }
            if (bVar7) {
              bVar6 = true;
              break;
            }
            __pp__14ObjectIterator(&leftIt);
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
            pcVar8 = leftIt.fCurrent;
          }
          iVar10 = GetX__C7CTilePt(&pt);
          iVar13 = GetY__C7CTilePt(&pt);
          __7CTilePtiii(aCStack_f0,iVar10,iVar13 + 1,1);
                    /* inlined from ../MSrc/objectiterator.h */
          init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType(&topIt,aCStack_f0,kAll);
                    /* end of inlined section */
          ___7CTilePt(aCStack_f0,2);
          pcVar8 = topIt.fCurrent;
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
          while (pcVar8 != (cXObject__15_2008 *)0x0) {
                    /* end of inlined section */
            bVar7 = false;
            topIt.fCurrent = pcVar8;
            if (((pcVar8 != (cXObject__15_2008 *)0x0) &&
                (lVar15 = (*(code *)pcVar8->__vtable[1].HandleError)
                                    ((int)&pcVar8->_vb3534 +
                                     (int)*(short *)&pcVar8->__vtable[1].Error), lVar15 != 0)) &&
               (iVar10 = (*(code *)pcVar8->__vtable[1].HandleError)
                                   ((int)&pcVar8->_vb3534 +
                                    (int)*(short *)&pcVar8->__vtable[1].Error),
               *(int *)(iVar10 + 0xc0) != 0)) {
              iVar10 = (*(code *)pcVar8->__vtable[1].HandleError)
                                 ((int)&pcVar8->_vb3534 + (int)*(short *)&pcVar8->__vtable[1].Error)
              ;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
              if (**(int **)(iVar10 + 0xc0) == 0) {
                iVar10 = 0;
              }
              else {
                iVar10 = *(int *)(**(int **)(iVar10 + 0xc0) + -4);
              }
                    /* end of inlined section */
              if (0 < iVar10) {
                bVar7 = true;
                iVar10 = (*(code *)pcVar8->__vtable[1].HandleError)
                                   ((int)&pcVar8->_vb3534 +
                                    (int)*(short *)&pcVar8->__vtable[1].Error);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                if (***(int ***)(iVar10 + 0xc0) != 0x6cd21f7f) {
                  bVar7 = false;
                }
              }
            }
            if (bVar7) {
              bVar9 = true;
              break;
            }
            __pp__14ObjectIterator(&topIt);
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
            pcVar8 = topIt.fCurrent;
          }
          iVar10 = GetX__C7CTilePt(&pt);
          iVar13 = GetY__C7CTilePt(&pt);
          __7CTilePtiii(aCStack_f0,iVar10 + 1,iVar13,1);
                    /* inlined from ../MSrc/objectiterator.h */
          init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType(&rightIt,aCStack_f0,kAll);
                    /* end of inlined section */
          ___7CTilePt(aCStack_f0,2);
          pcVar8 = rightIt.fCurrent;
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
          while (pcVar8 != (cXObject__15_2008 *)0x0) {
                    /* end of inlined section */
            bVar7 = false;
            rightIt.fCurrent = pcVar8;
            if (((pcVar8 != (cXObject__15_2008 *)0x0) &&
                (lVar15 = (*(code *)pcVar8->__vtable[1].HandleError)
                                    ((int)&pcVar8->_vb3534 +
                                     (int)*(short *)&pcVar8->__vtable[1].Error), lVar15 != 0)) &&
               (iVar10 = (*(code *)pcVar8->__vtable[1].HandleError)
                                   ((int)&pcVar8->_vb3534 +
                                    (int)*(short *)&pcVar8->__vtable[1].Error),
               *(int *)(iVar10 + 0xc0) != 0)) {
              iVar10 = (*(code *)pcVar8->__vtable[1].HandleError)
                                 ((int)&pcVar8->_vb3534 + (int)*(short *)&pcVar8->__vtable[1].Error)
              ;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
              if (**(int **)(iVar10 + 0xc0) == 0) {
                iVar10 = 0;
              }
              else {
                iVar10 = *(int *)(**(int **)(iVar10 + 0xc0) + -4);
              }
                    /* end of inlined section */
              if (0 < iVar10) {
                bVar7 = true;
                iVar10 = (*(code *)pcVar8->__vtable[1].HandleError)
                                   ((int)&pcVar8->_vb3534 +
                                    (int)*(short *)&pcVar8->__vtable[1].Error);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                if (***(int ***)(iVar10 + 0xc0) != 0x6cd21f7f) {
                  bVar7 = false;
                }
              }
            }
            if (bVar7) {
              bVar6 = true;
              break;
            }
            __pp__14ObjectIterator(&rightIt);
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
            pcVar8 = rightIt.fCurrent;
          }
          iVar10 = GetX__C7CTilePt(&pt);
          iVar13 = GetY__C7CTilePt(&pt);
          __7CTilePtiii(aCStack_f0,iVar10,iVar13 + -1,1);
                    /* inlined from ../MSrc/objectiterator.h */
          init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType(&botIt,aCStack_f0,kAll);
                    /* end of inlined section */
          ___7CTilePt(aCStack_f0,2);
          pcVar8 = botIt.fCurrent;
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
          while (pcVar8 != (cXObject__15_2008 *)0x0) {
            bVar7 = false;
            botIt.fCurrent = pcVar8;
            if (((pcVar8 != (cXObject__15_2008 *)0x0) &&
                (lVar15 = (*(code *)pcVar8->__vtable[1].HandleError)
                                    ((int)&pcVar8->_vb3534 +
                                     (int)*(short *)&pcVar8->__vtable[1].Error), lVar15 != 0)) &&
               (iVar10 = (*(code *)pcVar8->__vtable[1].HandleError)
                                   ((int)&pcVar8->_vb3534 +
                                    (int)*(short *)&pcVar8->__vtable[1].Error),
               *(int *)(iVar10 + 0xc0) != 0)) {
              iVar10 = (*(code *)pcVar8->__vtable[1].HandleError)
                                 ((int)&pcVar8->_vb3534 + (int)*(short *)&pcVar8->__vtable[1].Error)
              ;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
              if (**(int **)(iVar10 + 0xc0) == 0) {
                iVar10 = 0;
              }
              else {
                iVar10 = *(int *)(**(int **)(iVar10 + 0xc0) + -4);
              }
                    /* end of inlined section */
              if (0 < iVar10) {
                bVar7 = true;
                iVar10 = (*(code *)pcVar8->__vtable[1].HandleError)
                                   ((int)&pcVar8->_vb3534 +
                                    (int)*(short *)&pcVar8->__vtable[1].Error);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                if (***(int ***)(iVar10 + 0xc0) != 0x6cd21f7f) {
                  bVar7 = false;
                }
              }
            }
            if (bVar7) {
              bVar9 = true;
              break;
            }
            __pp__14ObjectIterator(&botIt);
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
            pcVar8 = botIt.fCurrent;
          }
          if ((bVar6) && (bVar9)) {
            modelId = pEVar19->counterCornerID;
          }
          ___7CTilePt(&pt,2);
        }
        SetSOMModel__16ISimsObjectModelUi((ISimsObjectModel__26_3162 *)this,modelId);
        SetObjOrient__16ISimsObjectModel((ISimsObjectModel__26_3162 *)this);
        pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
        (*(code *)pEVar1[2].SafeDelete)
                  ((int)((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_otd.m_minPos +
                        0xfffffff9) + (int)*(short *)(pEVar1 + 2));
        ___7CTilePt(&point,2);
        return;
      }
    }
  }
  SetObjOrient__16ISimsObjectModel((ISimsObjectModel__26_3162 *)this);
  ___7CTilePt(&point,2);
  return;
}

void ISimsCounterTopObject::Update() {
  return;
}

EStream& operator<<(EStream &s, IShrubObject *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, IShrubObject *&pD) {
	EStorable *pStorable;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EStorable *pStorable;
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
  __rs__FR7EStreamRP9EStorable(s,&pStorable);
  *pD = (IShrubObject *)pStorable;
  return s;
}

IShrubObject* IShrubObject::IShrubObject() {
  __16ISimsObjectModel((ISimsObjectModel__26_3162 *)this);
  *(__vtbl_ptr_type **)&(this->field0_0x0).field0_0x0.field_0x130 =
       _vt_12IShrubObject_16IBaseSimInstance;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EStorable__vtable *)_vt_12IShrubObject;
  return this;
}

void IShrubObject::~IShrubObject(int __in_chrg) {
	void *p;
	
  *(__vtbl_ptr_type **)&(this->field0_0x0).field0_0x0.field_0x130 =
       _vt_12IShrubObject_16IBaseSimInstance;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EStorable__vtable *)_vt_12IShrubObject;
  ___16ISimsObjectModel((ISimsObjectModel__26_3162 *)this,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/isiminstance.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void IShrubObject::Create(cXObject *pXOb, EHouse *pEHouse) {
  EStorable__vtable *pEVar1;
  
  (this->field0_0x0).field0_0x0.m_pXOb = (cXObject__179_1116 *)pXOb;
  (this->field0_0x0).m_pEHouse = (EHouse__2_990 *)pEHouse;
  SetObjOrient__12IShrubObject(this);
  SetInitalObjectState__16ISimsObjectModel((ISimsObjectModel__26_3162 *)this);
  if ((this->field0_0x0).field0_0x0.field0_0x0.m_pModel != (ERModel *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[2].SafeDelete)
              ((int)((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_otd.m_minPos + 0xfffffff9
                    ) + (int)*(short *)(pEVar1 + 2));
  }
  return;
}

void IShrubObject::SetObjOrient() {
	cXObject *pXOb;
	float _xoff;
	float _yoff;
	CTilePt pt;
	float xs;
	float ys;
	EHouse *this;
	TileWalls walls;
	bool bGotVNeighbor;
	bool bGotHNeighbor;
	ObjectIterator leftIt;
	ObjectIterator topIt;
	ObjectIterator rightIt;
	ObjectIterator botIt;
	cXObject *pTempOb;
	cXObject *pOb;
	VECTOR<ObjAnimDef> *this;
	VECTOR<ObjAnimDef> *this;
	VECTOR<ObjAnimDef> *this;
	cXObject *pTempOb;
	cXObject *pOb;
	VECTOR<ObjAnimDef> *this;
	VECTOR<ObjAnimDef> *this;
	VECTOR<ObjAnimDef> *this;
	cXObject *pTempOb;
	cXObject *pOb;
	VECTOR<ObjAnimDef> *this;
	VECTOR<ObjAnimDef> *this;
	VECTOR<ObjAnimDef> *this;
	cXObject *pTempOb;
	cXObject *pOb;
	VECTOR<ObjAnimDef> *this;
	VECTOR<ObjAnimDef> *this;
	VECTOR<ObjAnimDef> *this;
	float x;
	float y;
	
  EGlobalManagerClient__vtable *pEVar1;
  cXObject__179_1116 *pcVar2;
  EHouse__2_990 *pEVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  cXObject__15_2008 *pcVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  CTilePt pt;
  TileWalls walls;
  ObjectIterator leftIt;
  CTilePt aCStack_120 [5];
  ObjectIterator topIt;
  ObjectIterator rightIt;
  ObjectIterator botIt;
  bool bGotHNeighbor;
  
  uVar14 = 0x3f800000;
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  uVar13 = 0x3f800000;
  walls.mPatterns._0_4_ = uVar14;
  (*(code *)pEVar1[3].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
  pcVar2 = (this->field0_0x0).field0_0x0.m_pXOb;
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
  pEVar3 = (this->field0_0x0).m_pEHouse;
                    /* end of inlined section */
  fVar11 = (pEVar3->m_vHouse_off).field0_0x0.d[1];
  fVar12 = (pEVar3->m_vHouse_off).field0_0x0.d[0];
  (*(code *)pcVar2->__vtable[1].HandleError)
            ((int)&pcVar2->_vb1050 + (int)*(short *)&pcVar2->__vtable[1].Error);
  (*(code *)pcVar2->__vtable[1].TestIntersection)
            (&pt,(int)&pcVar2->_vb1050 + (int)*(short *)&pcVar2->__vtable[1].IsInWorld);
  iVar8 = GetX__C7CTilePt(&pt);
  walls.mStyles._8_4_ = uVar14;
  if (-1 < iVar8) {
    iVar8 = GetX__C7CTilePt(&pt);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    iVar9 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                      ((int)&_5Globs_pFixedWorld->__vtable +
                       (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
    walls.mStyles._8_4_ = uVar13;
    if ((iVar8 <= iVar9) && (iVar8 = GetY__C7CTilePt(&pt), -1 < iVar8)) {
      iVar8 = GetY__C7CTilePt(&pt);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      iVar9 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                        ((int)&_5Globs_pFixedWorld->__vtable +
                         (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
      if (iVar8 <= iVar9) {
        bVar5 = false;
        bVar6 = false;
        (*(code *)_5Globs_pFixedWorld->__vtable->ComputeArchValue)
                  (&walls,(int)&_5Globs_pFixedWorld->__vtable +
                          (int)*(short *)&_5Globs_pFixedWorld->__vtable->ComputeRooms,&pt);
        iVar8 = GetX__C7CTilePt(&pt);
        iVar9 = GetY__C7CTilePt(&pt);
        __7CTilePtiii(aCStack_120,iVar8 + -1,iVar9,1);
                    /* inlined from ../MSrc/objectiterator.h */
        init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType(&leftIt,aCStack_120,kAll);
                    /* end of inlined section */
        ___7CTilePt(aCStack_120,2);
        pcVar7 = leftIt.fCurrent;
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
        while (pcVar7 != (cXObject__15_2008 *)0x0) {
                    /* end of inlined section */
          bVar4 = false;
          leftIt.fCurrent = pcVar7;
          if (((pcVar7 != (cXObject__15_2008 *)0x0) &&
              (lVar10 = (*(code *)pcVar7->__vtable[1].HandleError)
                                  ((int)&pcVar7->_vb3534 + (int)*(short *)&pcVar7->__vtable[1].Error
                                  ), lVar10 != 0)) &&
             (iVar8 = (*(code *)pcVar7->__vtable[1].HandleError)
                                ((int)&pcVar7->_vb3534 + (int)*(short *)&pcVar7->__vtable[1].Error),
             *(int *)(iVar8 + 0xc0) != 0)) {
            iVar8 = (*(code *)pcVar7->__vtable[1].HandleError)
                              ((int)&pcVar7->_vb3534 + (int)*(short *)&pcVar7->__vtable[1].Error);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
            if (**(int **)(iVar8 + 0xc0) == 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = *(int *)(**(int **)(iVar8 + 0xc0) + -4);
            }
                    /* end of inlined section */
            if (0 < iVar8) {
              bVar4 = true;
              iVar8 = (*(code *)pcVar7->__vtable[1].HandleError)
                                ((int)&pcVar7->_vb3534 + (int)*(short *)&pcVar7->__vtable[1].Error);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
              if (***(int ***)(iVar8 + 0xc0) != -0x404611d6) {
                bVar4 = false;
              }
            }
          }
          if (bVar4) {
            bVar6 = true;
            break;
          }
          __pp__14ObjectIterator(&leftIt);
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
          pcVar7 = leftIt.fCurrent;
        }
        iVar8 = GetX__C7CTilePt(&pt);
        iVar9 = GetY__C7CTilePt(&pt);
        __7CTilePtiii(aCStack_120,iVar8,iVar9 + 1,1);
                    /* inlined from ../MSrc/objectiterator.h */
        init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType(&topIt,aCStack_120,kAll);
                    /* end of inlined section */
        ___7CTilePt(aCStack_120,2);
        pcVar7 = topIt.fCurrent;
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
        while (pcVar7 != (cXObject__15_2008 *)0x0) {
                    /* end of inlined section */
          bVar4 = false;
          topIt.fCurrent = pcVar7;
          if (((pcVar7 != (cXObject__15_2008 *)0x0) &&
              (lVar10 = (*(code *)pcVar7->__vtable[1].HandleError)
                                  ((int)&pcVar7->_vb3534 + (int)*(short *)&pcVar7->__vtable[1].Error
                                  ), lVar10 != 0)) &&
             (iVar8 = (*(code *)pcVar7->__vtable[1].HandleError)
                                ((int)&pcVar7->_vb3534 + (int)*(short *)&pcVar7->__vtable[1].Error),
             *(int *)(iVar8 + 0xc0) != 0)) {
            iVar8 = (*(code *)pcVar7->__vtable[1].HandleError)
                              ((int)&pcVar7->_vb3534 + (int)*(short *)&pcVar7->__vtable[1].Error);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
            if (**(int **)(iVar8 + 0xc0) == 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = *(int *)(**(int **)(iVar8 + 0xc0) + -4);
            }
                    /* end of inlined section */
            if (0 < iVar8) {
              bVar4 = true;
              iVar8 = (*(code *)pcVar7->__vtable[1].HandleError)
                                ((int)&pcVar7->_vb3534 + (int)*(short *)&pcVar7->__vtable[1].Error);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
              if (***(int ***)(iVar8 + 0xc0) != -0x404611d6) {
                bVar4 = false;
              }
            }
          }
          if (bVar4) {
            bVar5 = true;
            break;
          }
          __pp__14ObjectIterator(&topIt);
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
          pcVar7 = topIt.fCurrent;
        }
        iVar8 = GetX__C7CTilePt(&pt);
        iVar9 = GetY__C7CTilePt(&pt);
        __7CTilePtiii(aCStack_120,iVar8 + 1,iVar9,1);
                    /* inlined from ../MSrc/objectiterator.h */
        init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType(&rightIt,aCStack_120,kAll);
                    /* end of inlined section */
        ___7CTilePt(aCStack_120,2);
        pcVar7 = rightIt.fCurrent;
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
        while (pcVar7 != (cXObject__15_2008 *)0x0) {
                    /* end of inlined section */
          bVar4 = false;
          rightIt.fCurrent = pcVar7;
          if (((pcVar7 != (cXObject__15_2008 *)0x0) &&
              (lVar10 = (*(code *)pcVar7->__vtable[1].HandleError)
                                  ((int)&pcVar7->_vb3534 + (int)*(short *)&pcVar7->__vtable[1].Error
                                  ), lVar10 != 0)) &&
             (iVar8 = (*(code *)pcVar7->__vtable[1].HandleError)
                                ((int)&pcVar7->_vb3534 + (int)*(short *)&pcVar7->__vtable[1].Error),
             *(int *)(iVar8 + 0xc0) != 0)) {
            iVar8 = (*(code *)pcVar7->__vtable[1].HandleError)
                              ((int)&pcVar7->_vb3534 + (int)*(short *)&pcVar7->__vtable[1].Error);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
            if (**(int **)(iVar8 + 0xc0) == 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = *(int *)(**(int **)(iVar8 + 0xc0) + -4);
            }
                    /* end of inlined section */
            if (0 < iVar8) {
              bVar4 = true;
              iVar8 = (*(code *)pcVar7->__vtable[1].HandleError)
                                ((int)&pcVar7->_vb3534 + (int)*(short *)&pcVar7->__vtable[1].Error);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
              if (***(int ***)(iVar8 + 0xc0) != -0x404611d6) {
                bVar4 = false;
              }
            }
          }
          if (bVar4) {
            bVar6 = true;
            break;
          }
          __pp__14ObjectIterator(&rightIt);
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
          pcVar7 = rightIt.fCurrent;
        }
        iVar8 = GetX__C7CTilePt(&pt);
        iVar9 = GetY__C7CTilePt(&pt);
        __7CTilePtiii(aCStack_120,iVar8,iVar9 + -1,1);
                    /* inlined from ../MSrc/objectiterator.h */
        init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType(&botIt,aCStack_120,kAll);
                    /* end of inlined section */
        ___7CTilePt(aCStack_120,2);
        pcVar7 = botIt.fCurrent;
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
        while (pcVar7 != (cXObject__15_2008 *)0x0) {
                    /* end of inlined section */
          bVar4 = false;
          botIt.fCurrent = pcVar7;
          if (((pcVar7 != (cXObject__15_2008 *)0x0) &&
              (lVar10 = (*(code *)pcVar7->__vtable[1].HandleError)
                                  ((int)&pcVar7->_vb3534 + (int)*(short *)&pcVar7->__vtable[1].Error
                                  ), lVar10 != 0)) &&
             (iVar8 = (*(code *)pcVar7->__vtable[1].HandleError)
                                ((int)&pcVar7->_vb3534 + (int)*(short *)&pcVar7->__vtable[1].Error),
             *(int *)(iVar8 + 0xc0) != 0)) {
            iVar8 = (*(code *)pcVar7->__vtable[1].HandleError)
                              ((int)&pcVar7->_vb3534 + (int)*(short *)&pcVar7->__vtable[1].Error);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
            if (**(int **)(iVar8 + 0xc0) == 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = *(int *)(**(int **)(iVar8 + 0xc0) + -4);
            }
                    /* end of inlined section */
            if (0 < iVar8) {
              bVar4 = true;
              iVar8 = (*(code *)pcVar7->__vtable[1].HandleError)
                                ((int)&pcVar7->_vb3534 + (int)*(short *)&pcVar7->__vtable[1].Error);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
              if (***(int ***)(iVar8 + 0xc0) != -0x404611d6) {
                bVar4 = false;
              }
            }
          }
          if (bVar4) {
            bVar5 = true;
            break;
          }
          __pp__14ObjectIterator(&botIt);
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
          pcVar7 = botIt.fCurrent;
        }
        if (bVar5) {
          uVar14 = 0x3fa8f5c3;
        }
        if (bVar6) {
          walls.mPatterns._0_4_ = 0x3fa8f5c3;
        }
        ___9TileWalls(&walls,2);
        walls.mStyles._8_4_ = uVar14;
      }
    }
  }
  iVar8 = GetX__C7CTilePt(&pt);
  walls.mSegments = (TileWallsSegment)((float)iVar8 + fVar12);
  iVar8 = GetY__C7CTilePt(&pt);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  walls.mPlacement = (int)((float)iVar8 + fVar11);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  walls.mStyles._0_4_ = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  walls.mPatterns._4_4_ = 0x3f800000;
  ApplyMatrix__16ISimsObjectModelfRC5EVec3T2
            ((ISimsObjectModel__26_3162 *)this,1.570796,(EVec3 *)&walls,(EVec3 *)(walls.mStyles + 4)
            );
  ___7CTilePt(&pt,2);
  return;
}

bool ISimsObjectModel::IsMultiTilePart() {
  cXObject__179_1116 *pcVar1;
  cXObject__179_1116__vtable *pcVar2;
  int iVar3;
  
  pcVar1 = (this->field0_0x0).m_pXOb;
  pcVar2 = pcVar1->__vtable;
  iVar3 = (*(code *)pcVar2[1].HandleError)((int)&pcVar1->_vb1050 + (int)*(short *)&pcVar2[1].Error);
  return (bool)((byte)(*(uint *)(*(int *)(iVar3 + 0xc0) + 4) >> 5) & 1);
}

void ISimsObjectModel::ApplyMatrix(float ftheta, EVec3 &vPos, EVec3 &vScale) {
	EVec3 vusePos;
	EVec2 vShiftPos;
	CTilePt tile;
	int lotstart;
	UInt16 roomid;
	Room *pRoom;
	EMat4 mOr;
	cXObject *pParent;
	ResData *pResData;
	float dummy;
	EVec3 &v;
	EHouse *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	ESimsCursor *pCursor;
	EVec3 vcPos;
	ESimsCursor *this;
	cXObject *pContainerOb;
	TreeSim *this;
	cXObject *pContained;
	ISimInstance *pISimContained;
	ObjectSlot *pSlot;
	float xoff;
	float yoff;
	EVec3 vOff;
	float fthetapar;
	EMat4 mParentOr;
	float x;
	float y;
	EBound3 bound;
	EMat4 mShadow;
	float x;
	float y;
	float y;
	float x;
	EVec3 *this;
	ObjLightDef *pLightDef;
	EMat4 mOrient;
	EIPointLight *pPoint;
	EVec3 *this;
	float x;
	float y;
	float z;
	EISpotLight *pSpot;
	EVec3 *this;
	float x;
	float y;
	float z;
	EVec3 *this;
	float x;
	float y;
	float z;
	EVec3 vR;
	
  undefined *puVar1;
  undefined *puVar2;
  undefined1 **ppuVar3;
  uint uVar4;
  short sVar5;
  EGlobalManagerClient__vtable *pEVar6;
  TreeSim__vtable *pTVar7;
  cXObject__179_1116__vtable *pcVar8;
  ObjectModule__vtable *pOVar9;
  ERModel *pEVar10;
  uint uVar11;
  ulong *puVar12;
  ObjectModule__vtable **ppOVar13;
  ESimsCursor__67_3982 *this_00;
  int iVar14;
  cXObject__179_1116 *pcVar15;
  cXObject__15_2008 *pcVar16;
  ISimsObjectModel__26_3162 *pIVar17;
  code *pcVar18;
  float *pfVar19;
  EILight *pEVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  int iVar25;
  undefined8 unaff_s2;
  int iVar26;
  undefined8 unaff_s3;
  int *piVar27;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  EStorable__vtable *pEVar28;
  undefined1 *puVar29;
  ERLevel *pEVar30;
  ERIGroup *pEVar31;
  float fVar32;
  float fVar33;
  EVec3 vusePos;
  EVec2 vShiftPos;
  CTilePt tile;
  EVec3 vOff;
  EMat4 mOr;
  EMat4 mOrient;
  EVec3 vR;
  undefined4 local_e0;
  undefined4 local_dc;
  float local_d8;
  float dummy;
  float *local_cc;
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
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_70 = (undefined4)unaff_s5;
  uStack_6c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_b0 = (undefined4)unaff_s1;
  uStack_ac = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_c0 = (undefined4)unaff_s0;
  uStack_bc = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s8;
  uStack_3c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_50 = (undefined4)unaff_s7;
  uStack_4c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_60 = (undefined4)unaff_s6;
  uStack_5c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_80 = (undefined4)unaff_s4;
  uStack_7c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s3;
  uStack_8c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_a0 = (undefined4)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  if ((this->field0_0x0).field0_0x0.m_pModel == (ERModel *)0x0) {
    return;
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vusePos.field0_0x0.d[0] = (vPos->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vusePos.field0_0x0.d[1] = (vPos->field0_0x0).d[1];
  vusePos.field0_0x0.d[2] = (vPos->field0_0x0).d[2];
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* end of inlined section */
  __7CTilePtiii(&tile,(int)(vusePos.field0_0x0.d[0] -
                           ((_globals._pCurHouse)->m_vHouse_off).field0_0x0.d[0]),
                (int)(vusePos.field0_0x0.d[1] -
                     ((_globals._pCurHouse)->m_vHouse_off).field0_0x0.d[1]),1);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  iVar14 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                     ((int)&_5Globs_pFixedWorld->__vtable +
                      (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
  uVar24 = 0;
  if ((((0 < (long)tile.mX) && ((long)tile.mX <= (long)(iVar14 + -1))) && (0 < (long)tile.mY)) &&
     ((long)tile.mY <= (long)(iVar14 + -1))) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    uVar24 = (*(code *)_5Globs_pFixedWorld->__vtable[1].OutOfBounds)
                       ((int)&_5Globs_pFixedWorld->__vtable +
                        (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].GetMaxSize,&tile);
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  lVar21 = (*(code *)_5Globs_pRoomManager->__vtable->ClearRoomPartitions)
                     ((int)&_5Globs_pRoomManager->__vtable +
                      (int)*(short *)&_5Globs_pRoomManager->__vtable->GetHouse,uVar24);
  if (lVar21 == 0) {
    *(ulong *)&this->m_pEHouse = *(ulong *)&this->m_pEHouse | 0x400000000;
  }
  else {
    iVar14 = *(int *)lVar21;
    lVar21 = (**(code **)(iVar14 + 100))((int)(int *)lVar21 + (int)*(short *)(iVar14 + 0x60));
    *(ulong *)&this->m_pEHouse =
         *(ulong *)&this->m_pEHouse & 0xfffffffbffffffff | (ulong)(lVar21 != 0) << 0x22;
  }
  fVar32 = 0.0;
  pEVar6 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar6[3].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar6[3].ManagedStartup);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar33 = (vPos->field0_0x0).d[0];
                    /* end of inlined section */
  if (fVar32 <= fVar33) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    iVar14 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                       ((int)&_5Globs_pFixedWorld->__vtable +
                        (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
    if ((float)iVar14 < fVar33) {
      pEVar28 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
    }
    else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar33 = (vPos->field0_0x0).d[1];
                    /* end of inlined section */
      if (fVar33 < fVar32) {
        pEVar28 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
      }
      else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        iVar14 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                           ((int)&_5Globs_pFixedWorld->__vtable +
                            (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
        if (fVar33 <= (float)iVar14) goto LAB_00171e50;
        pEVar28 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
      }
    }
  }
  else {
    pEVar28 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
  }
  this_00 = _globals._pCursor[0];
  lVar21 = (*(code *)pEVar28[8].GetTypeVersion)
                     ((int)((this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_minPos + -7) +
                      (int)*(short *)&pEVar28[8].GetTypeKey);
  if (lVar21 == 0) {
    if (this_00 == (ESimsCursor__67_3982 *)0x0) goto LAB_00171e50;
    pcVar15 = (cXObject__179_1116 *)GetGrabObject__11ESimsCursor((ESimsCursor__15_1743 *)this_00);
    if (pcVar15 == (this->field0_0x0).m_pXOb) {
      vusePos.field0_0x0.d[1] = (this_00->m_vPos).field0_0x0.d[0];
    }
    else {
      pcVar16 = GetGrabObject__11ESimsCursor((ESimsCursor__15_1743 *)this_00);
      if (pcVar16 == (cXObject__15_2008 *)0x0) goto LAB_00171e50;
      pcVar16 = GetGrabObject__11ESimsCursor((ESimsCursor__15_1743 *)this_00);
      pTVar7 = pcVar16->_vb3534->__vtable;
      pIVar17 = (ISimsObjectModel__26_3162 *)
                (*(code *)pTVar7[1].GetISimInstance)
                          ((int)&pcVar16->_vb3534->m_pObject +
                           (int)*(short *)&pTVar7[1].GetLastResult);
      if (this != pIVar17) goto LAB_00171e50;
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
      vusePos.field0_0x0.d[1] = (this_00->m_vPos).field0_0x0.d[0];
    }
  }
  else {
    vusePos.field0_0x0.d[1] = (this_00->m_vPos).field0_0x0.d[0];
  }
  vusePos.field0_0x0.d[0] = (this_00->m_vPos).field0_0x0.d[1];
  vOff.field0_0x0._0_8_ = CONCAT44(vusePos.field0_0x0.d[0],vusePos.field0_0x0.d[1]);
  vOff.field0_0x0.d[2] = (this_00->m_vPos).field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
LAB_00171e50:
  local_cc = &this->m_fRot;
  Id__5EMat4(&mOr);
  Scale__5EMat4RC5EVec3(&mOr,vScale);
  PostRotateZ__5EMat4f(&mOr,ftheta);
  PostTranslate__5EMat4RC5EVec3(&mOr,&vusePos);
  SwapXY__FR5EMat4(&mOr);
  pcVar15 = (this->field0_0x0).m_pXOb;
  pcVar8 = pcVar15->__vtable;
  uVar22 = (*(code *)pcVar8->ReconType)
                     ((int)&pcVar15->_vb1050 + (int)*(short *)&pcVar8->ReconStream,4);
  if ((uVar22 & 0x20) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pcVar15 = (this->field0_0x0).m_pXOb;
    pOVar9 = _5Globs_pObjectModule->__vtable;
    pcVar8 = pcVar15->__vtable;
    sVar5 = *(short *)&pOVar9->SetSelectedPerson;
    ppOVar13 = &_5Globs_pObjectModule->__vtable;
    uVar24 = (*(code *)pcVar8->ReconType)
                       ((int)&pcVar15->_vb1050 + (int)*(short *)&pcVar8->ReconStream,2);
    lVar21 = (*(code *)pOVar9->AdvanceSelectedPerson)((int)ppOVar13 + (int)sVar5,uVar24);
                    /* inlined from ../MSrc/TreeSim.h */
                    /* end of inlined section */
    if ((lVar21 != 0) && (*(int *)(*(int *)lVar21 + 0x18) != 0)) {
      iVar14 = *(int *)&(this->field0_0x0).field_0x130;
      sVar5 = *(short *)(iVar14 + 0x18);
      uVar22 = (**(code **)(iVar14 + 0x24))
                         ((undefined *)
                          ((int)((this->field0_0x0).m_highlight + -6) +
                          (int)*(short *)(iVar14 + 0x20)));
      (**(code **)(iVar14 + 0x1c))
                ((undefined *)((int)((this->field0_0x0).m_highlight + -6) + (int)sVar5),
                 uVar22 | 0xc0);
      pcVar15 = (this->field0_0x0).m_pXOb;
      pcVar8 = pcVar15->__vtable;
      pcVar18 = (code *)pcVar8[1].Dirty;
      iVar14 = (int)&pcVar15->_vb1050 + (int)*(short *)&pcVar8[1].UpdateSimFlags;
      while (lVar21 = (*pcVar18)(iVar14,0), lVar21 != 0) {
        piVar27 = (int *)lVar21;
        iVar14 = *(int *)(*piVar27 + 0x1c);
        lVar21 = (**(code **)(iVar14 + 0x84))(*piVar27 + (int)*(short *)(iVar14 + 0x80));
        if (lVar21 == 0) {
          iVar14 = piVar27[1];
        }
        else {
          iVar14 = *(int *)&(this->field0_0x0).field_0x130;
          iVar26 = (int)lVar21;
          iVar25 = *(int *)(iVar26 + 0x130);
          sVar5 = *(short *)(iVar25 + 0x18);
          uVar22 = (**(code **)(iVar14 + 0x24))
                             ((undefined *)
                              ((int)((this->field0_0x0).m_highlight + -6) +
                              (int)*(short *)(iVar14 + 0x20)));
          (**(code **)(iVar25 + 0x1c))(iVar26 + 0x130 + (int)sVar5,uVar22 | 0xc0);
          (**(code **)(*(int *)(iVar26 + 0x130) + 0x14))
                    (iVar26 + 0x130 + (int)*(short *)(*(int *)(iVar26 + 0x130) + 0x10));
          iVar14 = piVar27[1];
        }
        pcVar18 = *(code **)(iVar14 + 0x25c);
        iVar14 = (int)piVar27 + (int)*(short *)(iVar14 + 600);
      }
    }
    mOr.field0_0x0.d[3][2] = GetHeightOffset__16ISimsObjectModel(this);
  }
  pcVar15 = (this->field0_0x0).m_pXOb;
  pcVar8 = pcVar15->__vtable;
  lVar21 = (*(code *)pcVar8[1].IsRenderingRoot)
                     ((int)&pcVar15->_vb1050 + (int)*(short *)&pcVar8[1].GetRenderLayer);
  if (lVar21 == 0) {
    pEVar28 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
  }
  else {
    pcVar15 = (this->field0_0x0).m_pXOb;
    pcVar8 = pcVar15->__vtable;
    lVar23 = (*(code *)pcVar8[1].GetFrontFaceDirection)
                       ((int)&pcVar15->_vb1050 + (int)*(short *)&pcVar8[1].GetInteractionLeader);
    if (lVar23 == 0) {
      pcVar15 = (this->field0_0x0).m_pXOb;
      iVar25 = (int)lVar21;
      iVar14 = *(int *)(iVar25 + 4);
      pcVar8 = pcVar15->__vtable;
      sVar5 = *(short *)(iVar14 + 0x250);
      uVar24 = (*(code *)pcVar8->ReconType)
                         ((int)&pcVar15->_vb1050 + (int)*(short *)&pcVar8->ReconStream,3);
      pfVar19 = (float *)(**(code **)(iVar14 + 0x254))(iVar25 + sVar5,uVar24);
      vOff.field0_0x0.d[1] = pfVar19[1] * 0.0625;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vOff.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
      vOff.field0_0x0.d[0] = *pfVar19 * 0.0625;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      iVar14 = (**(code **)(*(int *)(iVar25 + 4) + 0x20c))
                         (iVar25 + *(short *)(*(int *)(iVar25 + 4) + 0x208),1);
      Id__5EMat4(&mOrient);
      RotateZ__5EMat4f(&mOrient,(float)iVar14 * 0.7853982);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
      fVar32 = vOff.field0_0x0.d[2] * mOrient.field0_0x0.d[2][1];
      fVar33 = vOff.field0_0x0.d[0] * mOrient.field0_0x0.d[0][0] +
               vOff.field0_0x0.d[1] * mOrient.field0_0x0.d[1][0] +
               vOff.field0_0x0.d[2] * mOrient.field0_0x0.d[2][0] + mOrient.field0_0x0.d[3][0];
      vOff.field0_0x0.d[2] =
           vOff.field0_0x0.d[0] * mOrient.field0_0x0.d[0][2] +
           vOff.field0_0x0.d[1] * mOrient.field0_0x0.d[1][2] +
           vOff.field0_0x0.d[2] * mOrient.field0_0x0.d[2][2] + mOrient.field0_0x0.d[3][2];
      fVar32 = vOff.field0_0x0.d[0] * mOrient.field0_0x0.d[0][1] +
               vOff.field0_0x0.d[1] * mOrient.field0_0x0.d[1][1] + fVar32 +
               mOrient.field0_0x0.d[3][1];
                    /* end of inlined section */
      vOff.field0_0x0._0_8_ = CONCAT44(fVar32,fVar33);
      puVar1 = (undefined *)((int)&vOff.field0_0x0 + 7);
      uVar11 = (uint)puVar1 & 7;
      puVar12 = (ulong *)(puVar1 + -uVar11);
      *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
                 (ulong)vOff.field0_0x0._0_8_ >> (7 - uVar11) * 8;
      mOr.field0_0x0.d[3][0] = mOr.field0_0x0.d[3][0] + fVar32;
      mOr.field0_0x0.d[3][1] = mOr.field0_0x0.d[3][1] + fVar33;
      pEVar28 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
    }
    else {
      pEVar28 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
    }
  }
  (*(code *)pEVar28[3].GetTypeInfo)
            ((int)((this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_minPos + -7) +
             (int)*(short *)&pEVar28[3].SafeDelete,&mOr);
  pcVar15 = (this->field0_0x0).m_pXOb;
  pcVar8 = pcVar15->__vtable;
  iVar14 = (*(code *)pcVar8[1].HandleError)
                     ((int)&pcVar15->_vb1050 + (int)*(short *)&pcVar8[1].Error);
  pEVar10 = (this->field0_0x0).field0_0x0.m_pModel;
  iVar14 = *(int *)(iVar14 + 0xc0);
  if (((pEVar10 != (ERModel *)0x0) && (iVar14 != 0)) && (*(int *)(iVar14 + 0x18) != 0)) {
                    /* inlined from /eor/src2/common/math/e_bound3.h */
    mOrient.field0_0x0.d[2][2] = 0.0;
    mOrient.field0_0x0.d[2][1] = 0.0;
    mOrient.field0_0x0.d[2][0] = 0.0;
    puVar1 = (undefined *)((int)&mOrient.field0_0x0 + 0x13);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 | 0UL >> (7 - uVar11) * 8;
    puVar1 = (undefined *)((int)&mOrient.field0_0x0 + 0xc);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = 0L << uVar11 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    mOrient.field0_0x0.d[1][1] = 0.0;
    puVar1 = (undefined *)((int)&mOrient.field0_0x0 + 0x13);
    uVar11 = (uint)puVar1 & 7;
    puVar2 = (undefined *)((int)&mOrient.field0_0x0 + 0xc);
    uVar4 = (uint)puVar2 & 7;
    mOrient.field0_0x0._0_8_ =
         *(long *)(puVar1 + -uVar11) << (7 - uVar11) * 8 & -1L << (8 - uVar4) * 8 |
         *(ulong *)(puVar2 + -uVar4) >> uVar4 * 8;
    puVar1 = (undefined *)((int)&mOrient.field0_0x0 + 7);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               (ulong)mOrient.field0_0x0._0_8_ >> (7 - uVar11) * 8;
    mOrient.field0_0x0.d[0][2] = 0.0;
    Compute__7EBound3RC7EBound3RC5EMat4
              ((EBound3 *)&mOrient,&pEVar10->m_boundBox,&(this->field0_0x0).field0_0x0.m_mOrient);
                    /* end of inlined section */
    CalcBoundSphere__7EBound3R12EBoundSphere
              ((EBound3 *)&mOrient,&(this->field0_0x0).field0_0x0.m_boundSphere);
    SetBounds__9EInstanceRC7EBound3((EInstance *)this,(EBound3 *)&mOrient);
    Enable__15EAnimControllerbRC5EMat4(&(this->field0_0x0).m_AC,true,&mOr);
    *(ulong *)&this->m_pEHouse = *(ulong *)&this->m_pEHouse & 0xfffffffeffffffff;
  }
  GetHPR__5EMat4RfN21(&mOr,local_cc,&dummy,&dummy);
  puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
  uVar11 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar11);
  *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
             CONCAT44(mOr.field0_0x0.d[3][1],mOr.field0_0x0.d[3][0]) >> (7 - uVar11) * 8;
  uVar11 = (uint)&this->m_vPos & 7;
  puVar12 = (ulong *)((int)&this->m_vPos - uVar11);
  *puVar12 = CONCAT44(mOr.field0_0x0.d[3][1],mOr.field0_0x0.d[3][0]) << uVar11 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
  (this->m_vPos).field0_0x0.d[2] = mOr.field0_0x0.d[3][2];
  OrientSubObjects__16ISimsObjectModel(this);
  if (this->m_pShadow == (EIStaticModel *)0x0) {
    pEVar20 = this->m_pLightBulb;
  }
  else if (iVar14 == 0) {
    pEVar20 = this->m_pLightBulb;
  }
  else {
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    __as__5EMat4RC5EMat4(&mOrient,&mOr);
    local_e0 = *(undefined4 *)(iVar14 + 0x24);
    local_dc = *(undefined4 *)(iVar14 + 0x28);
    local_d8 = 1.0;
    PreScale__5EMat4RC5EVec3(&mOrient,(EVec3 *)&local_e0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    local_e0 = 0;
                    /* end of inlined section */
    local_d8 = *(float *)(iVar14 + 0x20) + 0.01;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_dc = 0;
    PostTranslate__5EMat4RC5EVec3(&mOrient,(EVec3 *)&local_e0);
                    /* end of inlined section */
    pEVar28 = (this->m_pShadow->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar28[3].GetTypeInfo)
              ((int)((this->m_pShadow->field0_0x0).m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar28[3].SafeDelete,&mOrient);
    pEVar20 = this->m_pLightBulb;
  }
  if (pEVar20 != (EILight *)0x0) {
    pcVar15 = (this->field0_0x0).m_pXOb;
    pcVar8 = pcVar15->__vtable;
    iVar14 = (*(code *)pcVar8[1].HandleError)
                       ((int)&pcVar15->_vb1050 + (int)*(short *)&pcVar8[1].Error);
    piVar27 = *(int **)(*(int *)(iVar14 + 0xc0) + 0x2c);
    if (piVar27 != (int *)0x0) {
                    /* end of inlined section */
      GetOrient__13EIStaticModelR5EMat4((EIStaticModel *)this,&mOrient);
      if (*piVar27 == 0) {
        pEVar20 = this->m_pLightBulb;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        pEVar31 = (ERIGroup *)piVar27[5];
        pEVar30 = (ERLevel *)piVar27[4];
        pEVar20[1].field0_0x0.field0_0x0.__vtable = (EStorable__vtable *)piVar27[3];
        pEVar20[1].field0_0x0.m_pIGroup = pEVar31;
        pEVar20[1].field0_0x0.m_pLevel = pEVar30;
        pEVar28 = pEVar20[1].field0_0x0.field0_0x0.__vtable;
        vOff.field0_0x0.d[2] =
             (float)pEVar28 * mOrient.field0_0x0.d[0][2] +
             (float)pEVar30 * mOrient.field0_0x0.d[1][2] +
             (float)pEVar31 * mOrient.field0_0x0.d[2][2] + mOrient.field0_0x0.d[3][2];
        vOff.field0_0x0._0_8_ =
             CONCAT44((float)pEVar28 * mOrient.field0_0x0.d[0][1] +
                      (float)pEVar30 * mOrient.field0_0x0.d[1][1] +
                      (float)pEVar31 * mOrient.field0_0x0.d[2][1] + mOrient.field0_0x0.d[3][1],
                      (float)pEVar28 * mOrient.field0_0x0.d[0][0] +
                      (float)pEVar30 * mOrient.field0_0x0.d[1][0] +
                      (float)pEVar31 * mOrient.field0_0x0.d[2][0] + mOrient.field0_0x0.d[3][0]);
        puVar1 = (undefined *)((int)&pEVar20[1].field0_0x0.m_pLevel + 3);
                    /* end of inlined section */
        uVar11 = (uint)puVar1 & 7;
        puVar12 = (ulong *)(puVar1 + -uVar11);
        *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
                   (ulong)vOff.field0_0x0._0_8_ >> (7 - uVar11) * 8;
        uVar11 = (uint)(pEVar20 + 1) & 7;
        puVar12 = (ulong *)((int)(pEVar20 + 1) - uVar11);
        *puVar12 = vOff.field0_0x0._0_8_ << uVar11 * 8 |
                   *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
        pEVar20[1].field0_0x0.m_pIGroup = (ERIGroup *)vOff.field0_0x0.d[2];
        pEVar28 = (pEVar20->field0_0x0).field0_0x0.__vtable;
        (*(code *)pEVar28[2].SafeDelete)
                  ((int)((pEVar20->field0_0x0).m_otd.m_minPos + -7) + (int)*(short *)(pEVar28 + 2));
      }
      else if (*piVar27 == 1) {
        pEVar20 = this->m_pLightBulb;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        pEVar30 = (ERLevel *)piVar27[4];
        pEVar31 = (ERIGroup *)piVar27[5];
        pEVar20[1].field0_0x0.field0_0x0.__vtable = (EStorable__vtable *)piVar27[3];
        pEVar20[1].field0_0x0.m_pIGroup = pEVar31;
        pEVar20[1].field0_0x0.m_pLevel = pEVar30;
        pEVar28 = pEVar20[1].field0_0x0.field0_0x0.__vtable;
        vOff.field0_0x0._0_8_ =
             CONCAT44((float)pEVar28 * mOrient.field0_0x0.d[0][1] +
                      (float)pEVar30 * mOrient.field0_0x0.d[1][1] +
                      (float)pEVar31 * mOrient.field0_0x0.d[2][1] + mOrient.field0_0x0.d[3][1],
                      (float)pEVar28 * mOrient.field0_0x0.d[0][0] +
                      (float)pEVar30 * mOrient.field0_0x0.d[1][0] +
                      (float)pEVar31 * mOrient.field0_0x0.d[2][0] + mOrient.field0_0x0.d[3][0]);
        puVar1 = (undefined *)((int)&pEVar20[1].field0_0x0.m_pLevel + 3);
                    /* end of inlined section */
        uVar11 = (uint)puVar1 & 7;
        puVar12 = (ulong *)(puVar1 + -uVar11);
        *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
                   (ulong)vOff.field0_0x0._0_8_ >> (7 - uVar11) * 8;
        uVar11 = (uint)(pEVar20 + 1) & 7;
        puVar12 = (ulong *)((int)(pEVar20 + 1) - uVar11);
        *puVar12 = vOff.field0_0x0._0_8_ << uVar11 * 8 |
                   *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
        pEVar20[1].field0_0x0.m_pIGroup =
             (ERIGroup *)
             ((float)pEVar28 * mOrient.field0_0x0.d[0][2] +
              (float)pEVar30 * mOrient.field0_0x0.d[1][2] +
              (float)pEVar31 * mOrient.field0_0x0.d[2][2] + mOrient.field0_0x0.d[3][2]);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar33 = (float)piVar27[8];
        fVar32 = (float)piVar27[7];
        pEVar20[1].field0_0x0.m_iIGroup = (undefined1 *)piVar27[6];
        pEVar20[1].field0_0x0.m_instanceId = (uint)fVar32;
        pEVar20[1].field0_0x0.m_instanceFlags = (uint)fVar33;
        puVar29 = pEVar20[1].field0_0x0.m_iIGroup;
        vOff.field0_0x0.d[2] =
             (float)puVar29 * mOrient.field0_0x0.d[0][2] + fVar32 * mOrient.field0_0x0.d[1][2] +
             fVar33 * mOrient.field0_0x0.d[2][2];
        vOff.field0_0x0._0_8_ =
             CONCAT44((float)puVar29 * mOrient.field0_0x0.d[0][1] +
                      fVar32 * mOrient.field0_0x0.d[1][1] + fVar33 * mOrient.field0_0x0.d[2][1],
                      (float)puVar29 * mOrient.field0_0x0.d[0][0] +
                      fVar32 * mOrient.field0_0x0.d[1][0] + fVar33 * mOrient.field0_0x0.d[2][0]);
        puVar1 = (undefined *)((int)&pEVar20[1].field0_0x0.m_instanceId + 3);
                    /* end of inlined section */
        uVar11 = (uint)puVar1 & 7;
        puVar12 = (ulong *)(puVar1 + -uVar11);
        *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
                   (ulong)vOff.field0_0x0._0_8_ >> (7 - uVar11) * 8;
        ppuVar3 = &pEVar20[1].field0_0x0.m_iIGroup;
        uVar11 = (uint)ppuVar3 & 7;
        puVar12 = (ulong *)((int)ppuVar3 - uVar11);
        *puVar12 = vOff.field0_0x0._0_8_ << uVar11 * 8 |
                   *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
        pEVar20[1].field0_0x0.m_instanceFlags = (uint)vOff.field0_0x0.d[2];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        puVar29 = pEVar20[1].field0_0x0.m_iIGroup;
        fVar32 = (float)pEVar20[1].field0_0x0.m_instanceId;
        fVar33 = (float)pEVar20[1].field0_0x0.m_instanceFlags;
        fVar32 = sqrtf((float)puVar29 * (float)puVar29 + fVar32 * fVar32 + fVar33 * fVar33);
        if (fVar32 == 0.0) {
          pEVar28 = (pEVar20->field0_0x0).field0_0x0.__vtable;
        }
        else {
          fVar32 = 1.0 / fVar32;
          pEVar20[1].field0_0x0.m_iIGroup =
               (undefined1 *)((float)pEVar20[1].field0_0x0.m_iIGroup * fVar32);
          fVar33 = (float)pEVar20[1].field0_0x0.m_instanceFlags;
          pEVar20[1].field0_0x0.m_instanceId =
               (uint)((float)pEVar20[1].field0_0x0.m_instanceId * fVar32);
          pEVar20[1].field0_0x0.m_instanceFlags = (uint)(fVar33 * fVar32);
                    /* end of inlined section */
          pEVar28 = (pEVar20->field0_0x0).field0_0x0.__vtable;
        }
        (*(code *)pEVar28[2].SafeDelete)
                  ((int)((pEVar20->field0_0x0).m_otd.m_minPos + -7) + (int)*(short *)(pEVar28 + 2));
      }
    }
  }
  ___7CTilePt(&tile,2);
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
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      RemoveAll__10EFloatTree(&_16ISimsObjectModel_m_lmcomputefloattree.field0_0x0);
      RemoveAll__13ERedBlackTree(&_16ISimsObjectModel_m_updateCalc3List.field0_0x0);
      RemoveAll__13ERedBlackTree(&_16ISimsObjectModel_m_lightmapComputeList.field0_0x0);
    }
    else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      _hlcolor2.field0_0x0.d[0] = 1.1;
      _hlcolor2.field0_0x0.d[2] = 0.65;
      _hlcolor.field0_0x0.d[0] = 1.0;
      _hlcolor.field0_0x0.d[1] = 1.0;
      _hlcolor.field0_0x0.d[2] = 0.65;
      _hlcolor2.field0_0x0.d[1] = 0.65;
      __13ERedBlackTree(&_16ISimsObjectModel_m_lightmapComputeList.field0_0x0);
      __13ERedBlackTree(&_16ISimsObjectModel_m_updateCalc3List.field0_0x0);
      __10EFloatTree(&_16ISimsObjectModel_m_lmcomputefloattree.field0_0x0);
      gpTypeInfo_ISimsObjectModel =
           Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_16ISimsObjectModel_m_typeInfo,New__16ISimsObjectModel,0,"ISimsObjectModel",
                      &_12ISimInstance_m_typeInfo);
      gpTypeInfo_ISimsWallObjectModel =
           Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_20ISimsWallObjectModel_m_typeInfo,New__20ISimsWallObjectModel,0,
                      "ISimsWallObjectModel",&_16ISimsObjectModel_m_typeInfo);
      gpTypeInfo_ISimsMultiTileObjectModel =
           Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_25ISimsMultiTileObjectModel_m_typeInfo,New__25ISimsMultiTileObjectModel,0,
                      "ISimsMultiTileObjectModel",&_16ISimsObjectModel_m_typeInfo);
      gpTypeInfo_ISimsCounterTopObject =
           Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_21ISimsCounterTopObject_m_typeInfo,New__21ISimsCounterTopObject,0,
                      "ISimsCounterTopObject",&_16ISimsObjectModel_m_typeInfo);
      gpTypeInfo_IShrubObject =
           Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_12IShrubObject_m_typeInfo,New__12IShrubObject,0,"IShrubObject",
                      &_16ISimsObjectModel_m_typeInfo);
    }
  }
  return;
}

ISimsObjectModel* ISimsObjectModel::New() {
	void *result;
	
  ISimsObjectModel__26_3162 *pIVar1;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/isiminstance.h */
  pIVar1 = (ISimsObjectModel__26_3162 *)_memmanAlloc__FUiUi(0x2b0,0x10);
  memset(pIVar1,0,0x2b0);
                    /* end of inlined section */
  pIVar1 = __16ISimsObjectModel(pIVar1);
  return pIVar1;
}

void ISimsObjectModel::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (ISimsObjectModel__26_3162 *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* ISimsObjectModel::GetTypeInfo() {
  return &_16ISimsObjectModel_m_typeInfo;
}

char* ISimsObjectModel::GetTypeName() {
  return _16ISimsObjectModel_m_typeInfo.m_name;
}

u32 ISimsObjectModel::GetTypeKey() {
  return _16ISimsObjectModel_m_typeInfo.m_key;
}

u16 ISimsObjectModel::GetTypeVersion() {
  return _16ISimsObjectModel_m_typeInfo.m_version;
}

u16 ISimsObjectModel::GetReadVersion() {
  return _16ISimsObjectModel_m_typeInfo.m_readVersion;
}

ETypeInfo* ISimsObjectModel::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_16ISimsObjectModel_m_typeInfo,New__16ISimsObjectModel,version,
                      "ISimsObjectModel",&_12ISimInstance_m_typeInfo);
  return pEVar1;
}

ISimsObjectModel* ISimsObjectModel::CreateCopy() {
  ISimsObjectModel__26_3162 *pIVar1;
  
  pIVar1 = (ISimsObjectModel__26_3162 *)CreateCopy__9EStorable((EStorable *)this);
  return pIVar1;
}

void ISimsObjectModel::ShutdownCalc3List() {
  RemoveAll__13ERedBlackTree(&_16ISimsObjectModel_m_updateCalc3List.field0_0x0);
  return;
}

void ISimsObjectModel::ShutdownLMComputeList() {
  RemoveAll__13ERedBlackTree(&_16ISimsObjectModel_m_lightmapComputeList.field0_0x0);
  return;
}

EIStaticModel* ISimsObjectModel::GetShadow() {
  return this->m_pShadow;
}

void ISimsObjectModel::SetShadow(EIStaticModel *ps) {
  this->m_pShadow = ps;
  return;
}

bool ISimsObjectModel::GetDynamic() {
  return (bool)((byte)((int)(this->field0_0x0).m_cursFlags >> 6) & 1);
}

void ISimsObjectModel::SetDynamic(bool on) {
  if (!on) {
    (this->field0_0x0).m_cursFlags = (this->field0_0x0).m_cursFlags & 0xffffffbf;
    return;
  }
  (this->field0_0x0).m_cursFlags = (this->field0_0x0).m_cursFlags | 0x40;
  return;
}

EVec3& ISimsObjectModel::GetPos() {
  return &this->m_vPos;
}

void ISimsObjectModel::SetPos(EVec3 &vpos) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  ulong in_v0;
  ulong uVar6;
  
  puVar1 = (undefined *)((int)&vpos->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)vpos & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)vpos - uVar3) >> uVar3 * 8;
  fVar4 = (vpos->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vPos & 7;
  puVar5 = (ulong *)((int)&this->m_vPos - uVar2);
  *puVar5 = uVar6 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vPos).field0_0x0.d[2] = fVar4;
  return;
}

float ISimsObjectModel::GetRot() {
  return this->m_fRot;
}

void ISimsObjectModel::SetRot(float val) {
  this->m_fRot = val;
  return;
}

EILight* ISimsObjectModel::GetILight() {
  return this->m_pLightBulb;
}

ISimsWallObjectModel* ISimsWallObjectModel::New() {
	void *result;
	
  ISimsWallObjectModel *pIVar1;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/isiminstance.h */
  pIVar1 = (ISimsWallObjectModel *)_memmanAlloc__FUiUi(0x2b0,0x10);
  memset(pIVar1,0,0x2b0);
                    /* end of inlined section */
  pIVar1 = __20ISimsWallObjectModel(pIVar1);
  return pIVar1;
}

void ISimsWallObjectModel::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (ISimsWallObjectModel *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_otd.m_minPos + 0xfffffff9
                    ) + (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* ISimsWallObjectModel::GetTypeInfo() {
  return &_20ISimsWallObjectModel_m_typeInfo;
}

char* ISimsWallObjectModel::GetTypeName() {
  return _20ISimsWallObjectModel_m_typeInfo.m_name;
}

u32 ISimsWallObjectModel::GetTypeKey() {
  return _20ISimsWallObjectModel_m_typeInfo.m_key;
}

u16 ISimsWallObjectModel::GetTypeVersion() {
  return _20ISimsWallObjectModel_m_typeInfo.m_version;
}

u16 ISimsWallObjectModel::GetReadVersion() {
  return _20ISimsWallObjectModel_m_typeInfo.m_readVersion;
}

ETypeInfo* ISimsWallObjectModel::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_20ISimsWallObjectModel_m_typeInfo,New__20ISimsWallObjectModel,version,
                      "ISimsWallObjectModel",&_16ISimsObjectModel_m_typeInfo);
  return pEVar1;
}

ISimsWallObjectModel* ISimsWallObjectModel::CreateCopy() {
  ISimsWallObjectModel *pIVar1;
  
  pIVar1 = (ISimsWallObjectModel *)CreateCopy__9EStorable((EStorable *)this);
  return pIVar1;
}

ISimsMultiTileObjectModel* ISimsMultiTileObjectModel::New() {
	void *result;
	
  ISimsMultiTileObjectModel *pIVar1;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/isiminstance.h */
  pIVar1 = (ISimsMultiTileObjectModel *)_memmanAlloc__FUiUi(0x2b0,0x10);
  memset(pIVar1,0,0x2b0);
                    /* end of inlined section */
  pIVar1 = __25ISimsMultiTileObjectModel(pIVar1);
  return pIVar1;
}

void ISimsMultiTileObjectModel::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (ISimsMultiTileObjectModel *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_otd.m_minPos + 0xfffffff9
                    ) + (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* ISimsMultiTileObjectModel::GetTypeInfo() {
  return &_25ISimsMultiTileObjectModel_m_typeInfo;
}

char* ISimsMultiTileObjectModel::GetTypeName() {
  return _25ISimsMultiTileObjectModel_m_typeInfo.m_name;
}

u32 ISimsMultiTileObjectModel::GetTypeKey() {
  return _25ISimsMultiTileObjectModel_m_typeInfo.m_key;
}

u16 ISimsMultiTileObjectModel::GetTypeVersion() {
  return _25ISimsMultiTileObjectModel_m_typeInfo.m_version;
}

u16 ISimsMultiTileObjectModel::GetReadVersion() {
  return _25ISimsMultiTileObjectModel_m_typeInfo.m_readVersion;
}

ETypeInfo* ISimsMultiTileObjectModel::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_25ISimsMultiTileObjectModel_m_typeInfo,New__25ISimsMultiTileObjectModel,
                      version,"ISimsMultiTileObjectModel",&_16ISimsObjectModel_m_typeInfo);
  return pEVar1;
}

ISimsMultiTileObjectModel* ISimsMultiTileObjectModel::CreateCopy() {
  ISimsMultiTileObjectModel *pIVar1;
  
  pIVar1 = (ISimsMultiTileObjectModel *)CreateCopy__9EStorable((EStorable *)this);
  return pIVar1;
}

ISimsCounterTopObject* ISimsCounterTopObject::New() {
	void *result;
	
  ISimsCounterTopObject *pIVar1;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/isiminstance.h */
  pIVar1 = (ISimsCounterTopObject *)_memmanAlloc__FUiUi(0x2b0,0x10);
  memset(pIVar1,0,0x2b0);
                    /* end of inlined section */
  pIVar1 = __21ISimsCounterTopObject(pIVar1);
  return pIVar1;
}

void ISimsCounterTopObject::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (ISimsCounterTopObject *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_otd.m_minPos + 0xfffffff9
                    ) + (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* ISimsCounterTopObject::GetTypeInfo() {
  return &_21ISimsCounterTopObject_m_typeInfo;
}

char* ISimsCounterTopObject::GetTypeName() {
  return _21ISimsCounterTopObject_m_typeInfo.m_name;
}

u32 ISimsCounterTopObject::GetTypeKey() {
  return _21ISimsCounterTopObject_m_typeInfo.m_key;
}

u16 ISimsCounterTopObject::GetTypeVersion() {
  return _21ISimsCounterTopObject_m_typeInfo.m_version;
}

u16 ISimsCounterTopObject::GetReadVersion() {
  return _21ISimsCounterTopObject_m_typeInfo.m_readVersion;
}

ETypeInfo* ISimsCounterTopObject::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_21ISimsCounterTopObject_m_typeInfo,New__21ISimsCounterTopObject,version,
                      "ISimsCounterTopObject",&_16ISimsObjectModel_m_typeInfo);
  return pEVar1;
}

ISimsCounterTopObject* ISimsCounterTopObject::CreateCopy() {
  ISimsCounterTopObject *pIVar1;
  
  pIVar1 = (ISimsCounterTopObject *)CreateCopy__9EStorable((EStorable *)this);
  return pIVar1;
}

IShrubObject* IShrubObject::New() {
	void *result;
	
  IShrubObject *pIVar1;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/isiminstance.h */
  pIVar1 = (IShrubObject *)_memmanAlloc__FUiUi(0x2b0,0x10);
  memset(pIVar1,0,0x2b0);
                    /* end of inlined section */
  pIVar1 = __12IShrubObject(pIVar1);
  return pIVar1;
}

void IShrubObject::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (IShrubObject *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_otd.m_minPos + 0xfffffff9
                    ) + (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* IShrubObject::GetTypeInfo() {
  return &_12IShrubObject_m_typeInfo;
}

char* IShrubObject::GetTypeName() {
  return _12IShrubObject_m_typeInfo.m_name;
}

u32 IShrubObject::GetTypeKey() {
  return _12IShrubObject_m_typeInfo.m_key;
}

u16 IShrubObject::GetTypeVersion() {
  return _12IShrubObject_m_typeInfo.m_version;
}

u16 IShrubObject::GetReadVersion() {
  return _12IShrubObject_m_typeInfo.m_readVersion;
}

ETypeInfo* IShrubObject::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_12IShrubObject_m_typeInfo,New__12IShrubObject,version,"IShrubObject",
                      &_16ISimsObjectModel_m_typeInfo);
  return pEVar1;
}

IShrubObject* IShrubObject::CreateCopy() {
  IShrubObject *pIVar1;
  
  pIVar1 = (IShrubObject *)CreateCopy__9EStorable((EStorable *)this);
  return pIVar1;
}

bool ISimsCounterTopObject::IsSinkId(cXObject *pOb) {
  int iVar1;
  long lVar2;
  bool bVar3;
  
  bVar3 = false;
  if (pOb != (cXObject__53_2557 *)0x0) {
    lVar2 = (*(code *)pOb->__vtable[1].HandleError)
                      ((int)&pOb->_vb3296 + (int)*(short *)&pOb->__vtable[1].Error);
    bVar3 = false;
    if (lVar2 != 0) {
      iVar1 = (*(code *)pOb->__vtable[1].HandleError)
                        ((int)&pOb->_vb3296 + (int)*(short *)&pOb->__vtable[1].Error);
      bVar3 = false;
      if (*(int *)(iVar1 + 0xc0) != 0) {
        iVar1 = (*(code *)pOb->__vtable[1].HandleError)
                          ((int)&pOb->_vb3296 + (int)*(short *)&pOb->__vtable[1].Error);
        bVar3 = (bool)((byte)(*(uint *)(*(int *)(iVar1 + 0xc0) + 4) >> 3) & 1);
      }
    }
  }
  return bVar3;
}

void global constructors keyed to _newlightint() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _newlightint() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

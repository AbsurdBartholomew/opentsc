// STATUS: NOT STARTED

#include "e2pdialog.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObjectImpl : virtual cXObject, virtual TreeSimImpl {
	TreeSimImpl *$vb3338;
	cXObject *$vb1030;
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
struct cXPerson : virtual cXObject {
	cXObject *$vb1030;
	static Int kSimTicksPerMotiveTick;
	__vtbl_ptr_type *$vf1619;
	
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

__vtbl_ptr_type E2PDialog virtual table[4] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &E2PDialog::~E2PDialog,
		/* .__delta2 = */ 960
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &E2PDialog::SetParams,
		/* .__delta2 = */ 1480
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

E2PDialog* E2PDialog::E2PDialog(int ControllerNum) {
  this->__vtable = (E2PDialog__vtable *)_vt_9E2PDialog;
  __8BString2(&this->m_TitleString);
  __8BString2(&this->m_Choice1String);
  __8BString2(&this->m_Choice2String);
  __8BString2(&this->m_Choice3String);
  __8BString2(&this->m_StatusString);
  this->m_ControllerNum = ControllerNum;
  *(undefined4 *)&this->m_DialogActive = 0;
  this->m_pXIcon = (ERShader *)0x0;
  this->m_pTriIcon = (ERShader *)0x0;
  this->m_pCircIcon = (ERShader *)0x0;
  this->m_pSquareIcon = (ERShader *)0x0;
  this->m_pLastElem = (StackElem *)0x0;
  this->m_pLastParam = (DialogParam *)0x0;
  this->m_pLastObj = (cXObject__21_1030 *)0x0;
  return this;
}

void E2PDialog::~E2PDialog(int __in_chrg) {
	void *pAddress;
	
  ERShader *pEVar1;
  
  this->__vtable = (E2PDialog__vtable *)_vt_9E2PDialog;
  while( true ) {
    if (this->m_pXIcon == (ERShader *)0x0) break;
    DelRef__9EResource(&this->m_pXIcon->field0_0x0);
    this->m_pXIcon = (ERShader *)0x0;
  }
  while (this->m_pTriIcon != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pTriIcon->field0_0x0);
    this->m_pTriIcon = (ERShader *)0x0;
  }
  pEVar1 = this->m_pCircIcon;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pCircIcon = (ERShader *)0x0;
    pEVar1 = this->m_pCircIcon;
  }
  pEVar1 = this->m_pSquareIcon;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pSquareIcon = (ERShader *)0x0;
    pEVar1 = this->m_pSquareIcon;
  }
  ___8BString2(&this->m_StatusString,2);
  ___8BString2(&this->m_Choice3String,2);
  ___8BString2(&this->m_Choice2String,2);
  ___8BString2(&this->m_Choice1String,2);
  ___8BString2(&this->m_TitleString,2);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void E2PDialog::Init() {
  ERShader *pEVar1;
  
  if (this->m_pXIcon == (ERShader *)0x0) {
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    pEVar1 = (ERShader *)
             AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xc1d9c5ed,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pXIcon = pEVar1;
    pEVar1 = this->m_pTriIcon;
  }
  else {
    pEVar1 = this->m_pTriIcon;
  }
  if (pEVar1 == (ERShader *)0x0) {
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    pEVar1 = (ERShader *)
             AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x2ccf500a,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pTriIcon = pEVar1;
    pEVar1 = this->m_pCircIcon;
  }
  else {
    pEVar1 = this->m_pCircIcon;
  }
  if (pEVar1 == (ERShader *)0x0) {
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    pEVar1 = (ERShader *)
             AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xc45a417b,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pCircIcon = pEVar1;
    pEVar1 = this->m_pSquareIcon;
  }
  else {
    pEVar1 = this->m_pSquareIcon;
  }
  if (pEVar1 == (ERShader *)0x0) {
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    pEVar1 = (ERShader *)
             AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x8b8cc935,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pSquareIcon = pEVar1;
  }
  return;
}

TreeReturnCode E2PDialog::SetParams(StackElem *elem, DialogParam *param, cXObject *pObj) {
	int OptionPressed;
	ObjSelector *Sel;
	ObjSelector *textSel;
	AUTOPTR<StringSet> dialogStrings;
	iResFile *file;
	ObjSelector *this;
	ObjSelector *this;
	cXObject *this;
	
  bool bVar1;
  ObjSelector *this_00;
  StringSet *pInstance;
  iResFile__6_5027 *piVar2;
  short **ppsVar3;
  int iVar4;
  TreeReturnCode TVar5;
  ushort uVar6;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  BString2 *pBVar7;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  AUTOPTR_StringSet_ dialogStrings;
  BString2 aBStack_a0 [4];
  ObjSelector *textSel;
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
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  *(undefined4 *)&this->m_DialogActive = 1;
  if (((this->m_pLastElem == elem) && (this->m_pLastParam == param)) && (this->m_pLastObj == pObj))
  {
    iVar4 = *(int *)&this->m_Button1Down;
  }
  else {
    this_00 = (ObjSelector *)0x0;
    if (pObj != (cXObject__21_1030 *)0x0) {
      this_00 = (ObjSelector *)
                (*(code *)pObj->__vtable[1].SetLevel)
                          ((int)&pObj->_vb899 + (int)*(short *)&pObj->__vtable[1].GetTreeID);
    }
    textSel = (ObjSelector *)0x0;
                    /* inlined from ../MSrc/tautoptr.h */
    DestroyInstance__9StringSetP9StringSet((StringSet *)0x0);
    pInstance = CreateInstance__9StringSet();
                    /* end of inlined section */
    if (elem == (StackElem *)0x0) {
                    /* inlined from ../MSrc/objselector.h */
      piVar2 = (this_00->field0_0x0).fFile;
      if (piVar2 == (iResFile__6_5027 *)0x0) {
        piVar2 = loadFile__11ObjSelector(this_00);
      }
    }
    else {
      piVar2 = GetPrivFile__8Behavior(elem->fBehavior);
    }
                    /* end of inlined section */
    pBVar7 = &this->m_TitleString;
    (*(code *)pInstance->__vtable[1].GetDescription)
              ((int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable[1].RemoveString,
               piVar2,0x12d,0);
    __8BString2UsUi(aBStack_a0,(ushort)param->titleStr,1);
    bVar1 = __ne__C8BString2RC8BString2(pBVar7,aBStack_a0);
    ___8BString2(aBStack_a0,2);
    if (bVar1) {
                    /* end of inlined section */
      ppsVar3 = (short **)
                (*(code *)pInstance->__vtable->SetDescription)
                          ((int)&pInstance->__vtable +
                           (int)*(short *)&pInstance->__vtable->GetDescription,param->titleStr);
      assign__8BString2PCUs(pBVar7,*ppsVar3);
      (*(code *)pObj->__vtable->GetFolder)
                ((int)&pObj->_vb899 + (int)*(short *)&pObj->__vtable->GetFrontFaceDirection,pBVar7,
                 elem,0,&textSel);
    }
    pBVar7 = &this->m_Choice1String;
    __8BString2UsUi(aBStack_a0,(ushort)param->yesStr,1);
    bVar1 = __ne__C8BString2RC8BString2(pBVar7,aBStack_a0);
    ___8BString2(aBStack_a0,2);
    if (bVar1) {
                    /* end of inlined section */
      ppsVar3 = (short **)
                (*(code *)pInstance->__vtable->SetDescription)
                          ((int)&pInstance->__vtable +
                           (int)*(short *)&pInstance->__vtable->GetDescription,param->yesStr);
      assign__8BString2PCUs(pBVar7,*ppsVar3);
      (*(code *)pObj->__vtable->GetFolder)
                ((int)&pObj->_vb899 + (int)*(short *)&pObj->__vtable->GetFrontFaceDirection,pBVar7,
                 elem,0,&textSel);
    }
    pBVar7 = &this->m_Choice2String;
    __8BString2UsUi(aBStack_a0,(ushort)param->noStr,1);
    bVar1 = __ne__C8BString2RC8BString2(pBVar7,aBStack_a0);
    ___8BString2(aBStack_a0,2);
    if (bVar1) {
                    /* end of inlined section */
      ppsVar3 = (short **)
                (*(code *)pInstance->__vtable->SetDescription)
                          ((int)&pInstance->__vtable +
                           (int)*(short *)&pInstance->__vtable->GetDescription,param->noStr);
      assign__8BString2PCUs(pBVar7,*ppsVar3);
      (*(code *)pObj->__vtable->GetFolder)
                ((int)&pObj->_vb899 + (int)*(short *)&pObj->__vtable->GetFrontFaceDirection,pBVar7,
                 elem,0,&textSel);
    }
    pBVar7 = &this->m_Choice3String;
    __8BString2UsUi(aBStack_a0,(ushort)param->cancelStr,1);
    bVar1 = __ne__C8BString2RC8BString2(pBVar7,aBStack_a0);
    ___8BString2(aBStack_a0,2);
    if (bVar1) {
                    /* end of inlined section */
      ppsVar3 = (short **)
                (*(code *)pInstance->__vtable->SetDescription)
                          ((int)&pInstance->__vtable +
                           (int)*(short *)&pInstance->__vtable->GetDescription,param->cancelStr);
      assign__8BString2PCUs(pBVar7,*ppsVar3);
      (*(code *)pObj->__vtable->GetFolder)
                ((int)&pObj->_vb899 + (int)*(short *)&pObj->__vtable->GetFrontFaceDirection,pBVar7,
                 elem,0,&textSel);
    }
    pBVar7 = &this->m_StatusString;
    __8BString2UsUi(aBStack_a0,(ushort)param->messageStr,1);
    bVar1 = __ne__C8BString2RC8BString2(pBVar7,aBStack_a0);
    ___8BString2(aBStack_a0,2);
    if (bVar1) {
                    /* end of inlined section */
      ppsVar3 = (short **)
                (*(code *)pInstance->__vtable->SetDescription)
                          ((int)&pInstance->__vtable +
                           (int)*(short *)&pInstance->__vtable->GetDescription,param->messageStr);
      assign__8BString2PCUs(pBVar7,*ppsVar3);
      (*(code *)pObj->__vtable->GetFolder)
                ((int)&pObj->_vb899 + (int)*(short *)&pObj->__vtable->GetFrontFaceDirection,pBVar7,
                 elem,0,&textSel);
    }
                    /* inlined from ../MSrc/tautoptr.h */
    DestroyInstance__9StringSetP9StringSet(pInstance);
                    /* end of inlined section */
    iVar4 = *(int *)&this->m_Button1Down;
  }
  this->m_pLastElem = elem;
  this->m_pLastParam = param;
  this->m_pLastObj = pObj;
  if (iVar4 == 1) {
LAB_00130978:
    iVar4 = *(int *)&this->m_Button2Down;
  }
  else {
    iVar4 = *(int *)&this->m_Button2Down;
    if (iVar4 == 1) {
      this->m_pLastElem = (StackElem *)0x0;
      goto LAB_00130984;
    }
    if (*(int *)&this->m_Button3Down != 1) {
      if (*(int *)&this->m_Button4Down != 1) {
        return kEngaged;
      }
      goto LAB_00130978;
    }
    iVar4 = *(int *)&this->m_Button2Down;
  }
  this->m_pLastElem = (StackElem *)0x0;
LAB_00130984:
  this->m_pLastParam = (DialogParam *)0x0;
  this->m_pLastObj = (cXObject__21_1030 *)0x0;
  *(undefined4 *)&this->m_DialogActive = 0;
  if (iVar4 == 1) {
    TVar5 = kFalseComplete;
  }
  else {
    uVar6 = (ushort)(*(int *)&this->m_Button1Down == 1);
    if (*(int *)&this->m_Button4Down == 1) {
      uVar6 = 2;
    }
                    /* inlined from ../MSrc/object.h */
    if (*(int *)&this->m_Button3Down == 1) {
      uVar6 = 3;
    }
    if (pObj != (cXObject__21_1030 *)0x0) {
      iVar4 = (*(code *)pObj->__vtable[1].GetObjectImplementation)
                        ((int)&pObj->_vb899 + (int)*(short *)&pObj->__vtable[1].AdvanceGraphic);
      *(ushort *)(iVar4 + 0x16) = uVar6;
      uVar6 = uRam00000016;
    }
    uRam00000016 = uVar6;
    TVar5 = kTrueComplete;
  }
  return TVar5;
}

void E2PDialog::Update() {
	TreeSim *this;
	TreeSim *this;
	
  EUIVirtualCtrl__vtable *pEVar1;
  undefined4 uVar2;
  int iVar3;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  if (this->m_pLastObj == (cXObject__21_1030 *)0x0) {
    iVar3 = *(int *)&this->m_DialogActive;
  }
  else {
    if (_5Globs_pEORGlobals->_pSelectedSims[this->m_ControllerNum] == (cXPerson__150_1300 *)0x0) {
      *(undefined4 *)&this->m_DialogActive = 0;
    }
    else {
                    /* end of inlined section */
                    /* inlined from ../MSrc/treesim.h */
                    /* end of inlined section */
      if (this->m_pLastObj->_vb899->m_pEoRPerson ==
          _5Globs_pEORGlobals->_pSelectedSims[this->m_ControllerNum]->_vb1187->_vb1121->m_pEoRPerson
         ) {
        iVar3 = *(int *)&this->m_DialogActive;
        goto LAB_00130a90;
      }
      *(undefined4 *)&this->m_DialogActive = 0;
    }
    this->m_pLastElem = (StackElem *)0x0;
    this->m_pLastParam = (DialogParam *)0x0;
    this->m_pLastObj = (cXObject__21_1030 *)0x0;
    iVar3 = *(int *)&this->m_DialogActive;
  }
LAB_00130a90:
  if (iVar3 == 1) {
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    uVar2 = (*(code *)pEVar1[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                       this->m_ControllerNum,0x80);
    *(undefined4 *)&this->m_Button1Down = uVar2;
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    uVar2 = (*(code *)pEVar1[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                       this->m_ControllerNum,0x10);
    *(undefined4 *)&this->m_Button2Down = uVar2;
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    uVar2 = (*(code *)pEVar1[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                       this->m_ControllerNum,0x20);
    *(undefined4 *)&this->m_Button3Down = uVar2;
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    uVar2 = (*(code *)pEVar1[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                       this->m_ControllerNum,0x40);
    *(undefined4 *)&this->m_Button4Down = uVar2;
  }
  else {
    *(undefined4 *)&this->m_Button4Down = 0;
    *(undefined4 *)&this->m_Button1Down = 0;
    *(undefined4 *)&this->m_Button2Down = 0;
    *(undefined4 *)&this->m_Button3Down = 0;
  }
  return;
}

void E2PDialog::Draw(ERC *prc) {
	EVec2 UpperLeft;
	EVec2 LowerRight;
	EVec2 Dimensions;
	EVec2 Pos;
	float Center;
	float LeftRight;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	EVec2 *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	float x;
	float x;
	float x;
	
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  ERFont *pEVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  EStorable__vtable *pEVar9;
  short *psVar10;
  EVec2 *vPos;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  EStorable__vtable *pEVar14;
  EVec2 UpperLeft;
  EVec2 LowerRight;
  EVec2 Dimensions;
  EVec2 Pos;
  undefined local_f0 [20];
  EStorable__vtable *local_dc;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  EHashTableNode *local_b8;
  EHashTableNode *local_b4;
  EHashTableNode **local_b0;
  uint uStack_ac;
  EFontSize *local_a0;
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
  
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (EFontSize *)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_b0 = (EHashTableNode **)unaff_s0;
  uStack_ac = (uint)((ulong)unaff_s0 >> 0x20);
  if (*(int *)&this->m_DialogActive == 1) {
    Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
    if (this->m_ControllerNum == 0) {
      LowerRight.field0_0x0.d[0] = 0.48;
      UpperLeft.field0_0x0.d[0] = 0.04;
    }
    else {
      LowerRight.field0_0x0.d[0] = 0.96;
      UpperLeft.field0_0x0.d[0] = 0.52;
    }
    UpperLeft.field0_0x0.d[1] = 0.26;
    LowerRight.field0_0x0.d[1] = 0.72;
    fVar13 = 0.77;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&UpperLeft,
               &LowerRight,0x3cfc68,0x3cfc70,0x35f4b0);
    LowerRight.field0_0x0.d[0] = LowerRight.field0_0x0.d[0] - 0.015;
    LowerRight.field0_0x0.d[1] = LowerRight.field0_0x0.d[1] - 0.02;
    UpperLeft.field0_0x0.d[0] = UpperLeft.field0_0x0.d[0] + 0.015;
    UpperLeft.field0_0x0.d[1] = UpperLeft.field0_0x0.d[1] + 0.02;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&UpperLeft,
               &LowerRight,0x3cfc68,0x3cfc70,0x35f4d0);
    SetSize__6ERFontffb(_globals.m_pFont,15.0,1.0,true);
    uVar8 = _WHITE.field0_0x0.d[3];
    uVar7 = _WHITE.field0_0x0.d[2];
    uVar6 = _WHITE.field0_0x0._0_8_;
    pEVar5 = _globals.m_pFont;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (pEVar5->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar6 >> 0x20);
    (pEVar5->m_vColor).field0_0x0.d[2] = uVar7;
    (pEVar5->m_vColor).field0_0x0.d[3] = uVar8;
                    /* end of inlined section */
    Select__6ERFontP3ERC(_globals.m_pFont,prc);
    pEVar5 = _globals.m_pFont;
    if (this->m_ControllerNum == 0) {
      fVar13 = 0.25;
    }
    Pos.field0_0x0.d[1] = 0.3;
    psVar10 = c_str__C8BString2(&this->m_TitleString);
    fVar12 = 0.875;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_f0,pEVar5,SUB41(psVar10,0),(EWindow *)&pGifTag1);
    pEVar9 = local_f0._0_4_;
                    /* end of inlined section */
    puVar1 = (undefined *)((int)&Dimensions.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
              CONCAT44(local_f0._4_4_,local_f0._0_4_) >> (7 - uVar3) * 8;
    local_f0._16_4_ = fVar13 - (float)pEVar9 * 0.5;
    psVar10 = c_str__C8BString2(&this->m_TitleString);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vPos = (EVec2 *)(local_f0 + 0x10);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_dc = (EStorable__vtable *)Pos.field0_0x0.d[1];
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_globals.m_pFont,prc,psVar10,true,vPos,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
    pEVar5 = _globals.m_pFont;
                    /* end of inlined section */
    if (this->m_ControllerNum == 0) {
      fVar12 = 0.125;
    }
    Pos.field0_0x0.d[1] = 0.39;
    psVar10 = c_str__C8BString2(&this->m_Choice1String);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_f0,pEVar5,SUB41(psVar10,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
    iVar2 = this->m_ControllerNum;
    puVar1 = (undefined *)((int)&Dimensions.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
              CONCAT44(local_f0._4_4_,local_f0._0_4_) >> (7 - uVar3) * 8;
    Pos.field0_0x0.d[0] = fVar12;
    if (iVar2 != 0) {
      Pos.field0_0x0.d[0] = fVar12 - (float)local_f0._0_4_;
    }
    psVar10 = c_str__C8BString2(&this->m_Choice1String);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_f0._0_4_ = (EStorable__vtable *)Pos.field0_0x0.d[0];
    local_f0._4_4_ = (char *)Pos.field0_0x0.d[1];
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_globals.m_pFont,prc,psVar10,true,(EVec2 *)(ERFont *)local_f0,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
    pEVar5 = _globals.m_pFont;
                    /* end of inlined section */
    Pos.field0_0x0.d[1] = 0.48;
    psVar10 = c_str__C8BString2(&this->m_Choice2String);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_f0,pEVar5,SUB41(psVar10,0),(EWindow *)&pGifTag1);
    pEVar9 = local_f0._0_4_;
                    /* end of inlined section */
    iVar2 = this->m_ControllerNum;
    Dimensions.field0_0x0 = (EVec2__null___1__1)CONCAT44(local_f0._4_4_,local_f0._0_4_);
    puVar1 = (undefined *)((int)&Dimensions.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)Dimensions.field0_0x0 >> (7 - uVar3) * 8;
    Pos.field0_0x0.d[0] = fVar12;
    if (iVar2 != 0) {
      Pos.field0_0x0.d[0] = fVar12 - (float)pEVar9;
    }
    psVar10 = c_str__C8BString2(&this->m_Choice2String);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_f0._0_4_ = (EStorable__vtable *)Pos.field0_0x0.d[0];
    local_f0._4_4_ = (char *)Pos.field0_0x0.d[1];
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_globals.m_pFont,prc,psVar10,true,(EVec2 *)(ERFont *)local_f0,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
    pEVar5 = _globals.m_pFont;
                    /* end of inlined section */
    Pos.field0_0x0.d[1] = 0.57;
    psVar10 = c_str__C8BString2(&this->m_Choice3String);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_f0,pEVar5,SUB41(psVar10,0),(EWindow *)&pGifTag1);
    pEVar9 = local_f0._0_4_;
                    /* end of inlined section */
    iVar2 = this->m_ControllerNum;
    Dimensions.field0_0x0 = (EVec2__null___1__1)CONCAT44(local_f0._4_4_,local_f0._0_4_);
    puVar1 = (undefined *)((int)&Dimensions.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)Dimensions.field0_0x0 >> (7 - uVar3) * 8;
    Pos.field0_0x0.d[0] = fVar12;
    if (iVar2 != 0) {
      Pos.field0_0x0.d[0] = fVar12 - (float)pEVar9;
    }
    psVar10 = c_str__C8BString2(&this->m_Choice3String);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_f0._0_4_ = (EStorable__vtable *)Pos.field0_0x0.d[0];
    local_f0._4_4_ = (char *)Pos.field0_0x0.d[1];
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_globals.m_pFont,prc,psVar10,true,(EVec2 *)(ERFont *)local_f0,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
    pEVar5 = _globals.m_pFont;
                    /* end of inlined section */
    psVar10 = c_str__C8BString2(&this->m_StatusString);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_f0,pEVar5,SUB41(psVar10,0),(EWindow *)&pGifTag1);
    pEVar9 = local_f0._0_4_;
                    /* end of inlined section */
    Dimensions.field0_0x0 = (EVec2__null___1__1)CONCAT44(local_f0._4_4_,local_f0._0_4_);
    puVar1 = (undefined *)((int)&Dimensions.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)Dimensions.field0_0x0 >> (7 - uVar3) * 8;
    pEVar14 = (EStorable__vtable *)0x3f63d70a;
    psVar10 = c_str__C8BString2(&this->m_StatusString);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_f0._4_4_ = (char *)0x3f266666;
    local_f0._0_4_ = (EStorable__vtable *)(fVar13 - (float)pEVar9 * 0.5);
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_globals.m_pFont,prc,psVar10,true,(EVec2 *)(ERFont *)local_f0,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
                    /* end of inlined section */
    if (this->m_ControllerNum == 0) {
      pEVar14 = (EStorable__vtable *)0x3d99999a;
    }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    Select__8ERShaderP3ERCi(this->m_pSquareIcon,prc,0);
    uVar11 = 0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_f0._4_4_ = (char *)0x3ec28f5c;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_cc = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_d0 = 0x3f800000;
    local_b4 = (EHashTableNode *)0x3f800000;
    local_b8 = (EHashTableNode *)0x3f800000;
    local_bc = 0x3f800000;
    local_c0 = 0x3f800000;
                    /* end of inlined section */
    local_f0._0_4_ = pEVar14;
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,(ERFont *)local_f0,
               &local_d0,&local_c0);
    Select__8ERShaderP3ERCi(this->m_pXIcon,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_f0._4_4_ = (char *)0x3ef0a3d7;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_f0._16_4_ = 1.0;
    local_dc = (EStorable__vtable *)0x3f800000;
    local_c4 = 0x3f800000;
    local_c8 = 0x3f800000;
    local_cc = 0x3f800000;
    local_d0 = 0x3f800000;
                    /* end of inlined section */
    local_f0._0_4_ = pEVar14;
    (*(code *)prc->__vtable[1].ClipRect)
              (uVar11,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,
               (ERFont *)local_f0,vPos,&local_d0);
    Select__8ERShaderP3ERCi(this->m_pCircIcon,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_f0._4_4_ = (char *)0x3f0f5c29;
    local_dc = (EStorable__vtable *)0x3f800000;
    local_f0._16_4_ = 1.0;
    local_c4 = 0x3f800000;
    local_c8 = 0x3f800000;
    local_cc = 0x3f800000;
    local_d0 = 0x3f800000;
                    /* end of inlined section */
    local_f0._0_4_ = pEVar14;
    (*(code *)prc->__vtable[1].ClipRect)
              (uVar11,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,
               (ERFont *)local_f0,vPos,&local_d0);
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

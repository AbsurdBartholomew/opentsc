// STATUS: NOT STARTED

#include "livemodepanel.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb4530;
	__vtbl_ptr_type *$vf4439;
	
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
	cXObject *$vb4439;
	static Int kSimTicksPerMotiveTick;
	__vtbl_ptr_type *$vf3772;
	
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

__vtbl_ptr_type EPanel virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPanel::~EPanel,
		/* .__delta2 = */ -13368
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPanel::Update,
		/* .__delta2 = */ -21176
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPanel::Draw,
		/* .__delta2 = */ -19416
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::SetPos,
		/* .__delta2 = */ 2768
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
		/* .__pfn = */ &EPanel::Message,
		/* .__delta2 = */ -18536
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EPanel* EPanel::EPanel() {
  __13EUIObjectNode(&this->field0_0x0);
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_6EPanel;
  __11EPausePaneli((EPausePanel__69_3945 *)&this->m_pausePanel,1);
  __15EMemoryMeterWin(&this->m_MemoryMeterWin);
  this->mpCurChild = (EUIObjectNode *)0x0;
  this->mSelected = (EUIObjectNode *)0x0;
  this->m_pCursors[0] = (ESimsCursor__3_1557 *)0x0;
  this->m_pCursors[1] = (ESimsCursor__3_1557 *)0x0;
  this->m_pTimeNMoneyWin = (TimeWindowAndPauseBar *)0x0;
  this->m_pCameras[1] = (ESimsCam *)0x0;
  this->m_pCameras[0] = (ESimsCam *)0x0;
  this->m_pDpadWins[0] = (DPadWin__3_4779 *)0x0;
  this->m_pDpadWins[1] = (DPadWin__3_4779 *)0x0;
  this->m_pInfoWindows[0] = (SimInfoWin__3_4679 *)0x0;
  this->m_pActionQueues[0] = (EActionQueue__30_2184 *)0x0;
  this->m_pInfoWindows[1] = (SimInfoWin__3_4679 *)0x0;
  this->m_pActionQueues[1] = (EActionQueue__30_2184 *)0x0;
  this->m_state = 0x20;
  SetupFnTable__6EPanel(this);
  *(undefined4 *)&this->m_b2playerInit = 0;
  *(undefined4 *)&this->m_b2playerReadyToQuit = 0;
  *(undefined4 *)&this->m_bDidResumeSinglePlayerDialog = 0;
  *(undefined4 *)&this->m_bAmInBuildHouseMode = 0;
  return this;
}

void EPanel::Init() {
  EUIObjectNode__vtable *pEVar1;
  bool bVar2;
  TimeOfDay TVar3;
  ERFont *pEVar4;
  TimeWindowAndPauseBar *pTVar5;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  TVar3 = (*(code *)_5Globs_pSimulator->__vtable[1].DoStream)
                    ((int)&_5Globs_pSimulator->__vtable +
                     (int)*(short *)&_5Globs_pSimulator->__vtable[1].DoCommand);
  this->m_tod = TVar3;
  Init__7DPadWin();
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
  pEVar4 = (ERFont *)
           AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pFont = pEVar4;
  Init__11EPausePanel((EPausePanel__69_3945 *)&this->m_pausePanel);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].GetPos)
            ((int)this->m_messageFns + *(short *)&pEVar1[1].OnStickRepeat + -0x3c,
             &this->m_pausePanel);
  InitPanleForPlayer__6EPaneli(this,0);
  bVar2 = IsTwoPlayer__7EGlobal(&_globals);
  if (bVar2) {
    SetupTwoPlayer__6EPanel(this);
    *(undefined4 *)&this->m_b2playerInit = 1;
  }
  this->m_state = 0x20;
  pTVar5 = (TimeWindowAndPauseBar *)__builtin_new(0x48);
  pTVar5 = __21TimeWindowAndPauseBar(pTVar5);
  this->m_pTimeNMoneyWin = pTVar5;
  SetState__6EPaneliQ213Panelstateman10Panelstate(this,0,LIVE_DEFAULT_STATE);
  SetState__6EPaneliQ213Panelstateman10Panelstate(this,1,LIVE_DEFAULT_STATE);
  SetUpGrid__11ESimsCursor();
                    /* inlined from /eor/src2/engine/particle/e_particleemit.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/particle/e_particleemit.h */
  __14EIParticleEmit_m_allEnabled = 1;
                    /* end of inlined section */
  *(undefined4 *)&this->m_bAmInBuildHouseMode = 0;
  return;
}

void EPanel::InitPanleForPlayer(int which) {
	void *result;
	int player;
	ESimsCam *this;
	int which;
	ESimsCursor *pCurs;
	
  EUIObjectNode__vtable *pEVar1;
  ESimsCam *__s;
  SimInfoWin__78_2366 *this_00;
  SimInfoWin__3_4679 *pSVar2;
  DPadWin__20_1663 *pDVar3;
  ESimsCursor__15_1743 *pEVar4;
  EActionQueue__30_2184 *pEVar5;
  ESimsCursor__3_1557 **ppEVar6;
  ESimsCam **ppEVar7;
  
  ppEVar7 = this->m_pCameras + which;
  if (*ppEVar7 == (ESimsCam *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
    __s = (ESimsCam *)_memmanAlloc__FUiUi(0x1820,0x10);
    memset(__s,0,0x1820);
    (__s->field0_0x0).m_state = LIVE_DEFAULT_STATE;
    (__s->field0_0x0).__vtable = (Panelstateman__vtable *)_vt_8ESimsCam;
    __13EPortalWindow(&__s->m_win);
    __s->m_playerId = which;
                    /* end of inlined section */
    *ppEVar7 = __s;
  }
  this_00 = (SimInfoWin__78_2366 *)__builtin_new(0x140);
  pSVar2 = (SimInfoWin__3_4679 *)__10SimInfoWinii(this_00,1,which);
  this->m_pInfoWindows[which] = pSVar2;
  pDVar3 = (DPadWin__20_1663 *)__builtin_new(0xa0);
  pDVar3 = __7DPadWiniUi(pDVar3,1,which);
  this->m_pDpadWins[which] = (DPadWin__3_4779 *)pDVar3;
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].GetPos)
            ((int)this->m_messageFns + *(short *)&pEVar1[1].OnStickRepeat + -0x3c,pDVar3);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].GetPos)
            ((int)this->m_messageFns + *(short *)&pEVar1[1].OnStickRepeat + -0x3c,
             this->m_pInfoWindows[which]);
  ppEVar6 = this->m_pCursors + which;
  pEVar4 = (ESimsCursor__15_1743 *)__builtin_new(0x154);
  pEVar4 = __11ESimsCursorii(pEVar4,1,which);
  *ppEVar6 = (ESimsCursor__3_1557 *)pEVar4;
  Init__11ESimsCursor(pEVar4);
  SetCam__11ESimsCursorP8ESimsCam((ESimsCursor__15_1743 *)*ppEVar6,*ppEVar7);
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
  pEVar4 = (ESimsCursor__15_1743 *)*ppEVar6;
  (*ppEVar7)->m_pCursor = (ESimsCursor__3_1557 *)pEVar4;
  _globals._pCursor[which] = (ESimsCursor__67_3982 *)pEVar4;
                    /* end of inlined section */
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].GetPos)
            ((int)this->m_messageFns + *(short *)&pEVar1[1].OnStickRepeat + -0x3c,
             (ESimsCursor__15_1743 *)*ppEVar6);
  Init__8ESimsCam(*ppEVar7);
  pEVar5 = (EActionQueue__30_2184 *)__builtin_new(0xbc);
  pEVar5 = __12EActionQueueiUi(pEVar5,1,which);
  this->m_pActionQueues[which] = pEVar5;
  Init__12EActionQueue(pEVar5);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].GetPos)
            ((int)this->m_messageFns + *(short *)&pEVar1[1].OnStickRepeat + -0x3c,
             this->m_pActionQueues[which]);
  return;
}

void EPanel::Reset() {
  ESimsCam *pEVar1;
  Panelstateman__vtable *pPVar2;
  DPadWin__3_4779 *pDVar3;
  TimeWindowAndPauseBar *pTVar4;
  ESimsCursor__3_1557 *pEVar5;
  SimInfoWin__3_4679 *pSVar6;
  EActionQueue__30_2184 *pEVar7;
  
  CleanUpGrid__11ESimsCursor();
  Reset__17EPictureInPicture(_globals.m_pPiP);
  RemoveAll__9ENodeList((ENodeList *)this);
  DelRef__9EResource(&this->m_pFont->field0_0x0);
  pEVar1 = this->m_pCameras[0];
  this->m_pFont = (ERFont *)0x0;
  if (pEVar1 != (ESimsCam *)0x0) {
    pPVar2 = (pEVar1->field0_0x0).__vtable;
    (*(code *)pPVar2->SetEvent)
              ((int)&(pEVar1->field0_0x0).m_state + (int)*(short *)&pPVar2->SetState,3);
  }
  pEVar1 = this->m_pCameras[1];
  if (pEVar1 != (ESimsCam *)0x0) {
    pPVar2 = (pEVar1->field0_0x0).__vtable;
    (*(code *)pPVar2->SetEvent)
              ((int)&(pEVar1->field0_0x0).m_state + (int)*(short *)&pPVar2->SetState,3);
  }
  pDVar3 = this->m_pDpadWins[0];
  if (pDVar3 != (DPadWin__3_4779 *)0x0) {
    (**(code **)(*(int *)&pDVar3->field_0x38 + 0xc))
              ((int)&(((DPadWin__3_4779 *)(pDVar3->m_fnTab + -9))->field0_0x0).m_state +
               (int)*(short *)(*(int *)&pDVar3->field_0x38 + 8),3);
  }
  pDVar3 = this->m_pDpadWins[1];
  if (pDVar3 != (DPadWin__3_4779 *)0x0) {
    (**(code **)(*(int *)&pDVar3->field_0x38 + 0xc))
              ((int)&(((DPadWin__3_4779 *)(pDVar3->m_fnTab + -9))->field0_0x0).m_state +
               (int)*(short *)(*(int *)&pDVar3->field_0x38 + 8),3);
  }
  pTVar4 = this->m_pTimeNMoneyWin;
  if (pTVar4 != (TimeWindowAndPauseBar *)0x0) {
    pPVar2 = (pTVar4->field0_0x0).__vtable;
    (*(code *)pPVar2->SetEvent)
              ((int)pTVar4->m_pPause_Speed_Indicators + *(short *)&pPVar2->SetState + -0xc,3);
  }
  pEVar5 = this->m_pCursors[0];
  if (pEVar5 != (ESimsCursor__3_1557 *)0x0) {
    (**(code **)(*(int *)&pEVar5->field_0x38 + 0xc))
              ((int)&(((ESimsCursor__3_1557 *)(pEVar5->m_ToolValueCalcFnTab + -8))->field0_0x0).
                     m_state + (int)*(short *)(*(int *)&pEVar5->field_0x38 + 8),3);
  }
  pEVar5 = this->m_pCursors[1];
  if (pEVar5 != (ESimsCursor__3_1557 *)0x0) {
    (**(code **)(*(int *)&pEVar5->field_0x38 + 0xc))
              ((int)&(((ESimsCursor__3_1557 *)(pEVar5->m_ToolValueCalcFnTab + -8))->field0_0x0).
                     m_state + (int)*(short *)(*(int *)&pEVar5->field_0x38 + 8),3);
  }
  pSVar6 = this->m_pInfoWindows[0];
  if (pSVar6 != (SimInfoWin__3_4679 *)0x0) {
    (**(code **)(*(int *)&pSVar6->field_0x38 + 0xc))
              ((int)&(pSVar6->field0_0x0).m_state + (int)*(short *)(*(int *)&pSVar6->field_0x38 + 8)
               ,3);
  }
  pEVar7 = this->m_pActionQueues[0];
  if (pEVar7 != (EActionQueue__30_2184 *)0x0) {
    (**(code **)(*(int *)&pEVar7->field_0x38 + 0xc))
              ((int)&(pEVar7->field0_0x0).m_state + (int)*(short *)(*(int *)&pEVar7->field_0x38 + 8)
               ,3);
  }
  pSVar6 = this->m_pInfoWindows[1];
  if (pSVar6 != (SimInfoWin__3_4679 *)0x0) {
    (**(code **)(*(int *)&pSVar6->field_0x38 + 0xc))
              ((int)&(pSVar6->field0_0x0).m_state + (int)*(short *)(*(int *)&pSVar6->field_0x38 + 8)
               ,3);
  }
  pEVar7 = this->m_pActionQueues[1];
  if (pEVar7 != (EActionQueue__30_2184 *)0x0) {
    (**(code **)(*(int *)&pEVar7->field_0x38 + 0xc))
              ((int)&(pEVar7->field0_0x0).m_state + (int)*(short *)(*(int *)&pEVar7->field_0x38 + 8)
               ,3);
  }
  *(undefined4 *)&this->m_bAmInBuildHouseMode = 0;
  this->m_pCameras[0] = (ESimsCam *)0x0;
  this->m_pCameras[1] = (ESimsCam *)0x0;
  this->m_pCursors[0] = (ESimsCursor__3_1557 *)0x0;
  this->m_pCursors[1] = (ESimsCursor__3_1557 *)0x0;
  this->m_pTimeNMoneyWin = (TimeWindowAndPauseBar *)0x0;
  this->m_pDpadWins[0] = (DPadWin__3_4779 *)0x0;
  this->m_pDpadWins[1] = (DPadWin__3_4779 *)0x0;
  this->m_pInfoWindows[0] = (SimInfoWin__3_4679 *)0x0;
  this->m_pActionQueues[0] = (EActionQueue__30_2184 *)0x0;
  this->m_pInfoWindows[1] = (SimInfoWin__3_4679 *)0x0;
  this->m_pActionQueues[1] = (EActionQueue__30_2184 *)0x0;
  *(undefined4 *)&this->m_b2playerInit = 0;
  *(undefined4 *)&this->m_b2playerReadyToQuit = 0;
  *(undefined4 *)&this->m_bDidResumeSinglePlayerDialog = 0;
  this->m_state = 0x20;
  CleanupBackgroundShaders__11EPiMenuItem();
  CleanUp__7DPadWin();
                    /* inlined from /eor/src2/engine/particle/e_particleemit.h */
  __14EIParticleEmit_m_allEnabled = 1;
  return;
}

void EPanel::ResetPanelForPlayer(int which) {
  EUIObjectNode__vtable *pEVar1;
  ESimsCam *pEVar2;
  Panelstateman__vtable *pPVar3;
  DPadWin__3_4779 *pDVar4;
  ESimsCursor__3_1557 *pEVar5;
  SimInfoWin__3_4679 *pSVar6;
  EActionQueue__30_2184 *pEVar7;
  EActionQueue__30_2184 **ppEVar8;
  ESimsCursor__3_1557 **ppEVar9;
  SimInfoWin__3_4679 **ppSVar10;
  DPadWin__3_4779 **ppDVar11;
  
                    /* end of inlined section */
  pEVar1 = (this->field0_0x0).__vtable;
  ppDVar11 = this->m_pDpadWins + which;
  (*(code *)pEVar1[1].RemoveChild)
            ((int)this->m_messageFns + *(short *)&pEVar1[1].AddChild + -0x3c,*ppDVar11);
  pEVar1 = (this->field0_0x0).__vtable;
  ppSVar10 = this->m_pInfoWindows + which;
  (*(code *)pEVar1[1].RemoveChild)
            ((int)this->m_messageFns + *(short *)&pEVar1[1].AddChild + -0x3c,*ppSVar10);
  pEVar1 = (this->field0_0x0).__vtable;
  ppEVar9 = this->m_pCursors + which;
  (*(code *)pEVar1[1].RemoveChild)
            ((int)this->m_messageFns + *(short *)&pEVar1[1].AddChild + -0x3c,*ppEVar9);
  pEVar1 = (this->field0_0x0).__vtable;
  ppEVar8 = this->m_pActionQueues + which;
  (*(code *)pEVar1[1].RemoveChild)
            ((int)this->m_messageFns + *(short *)&pEVar1[1].AddChild + -0x3c,*ppEVar8);
  pEVar2 = this->m_pCameras[which];
  if (pEVar2 != (ESimsCam *)0x0) {
    pPVar3 = (pEVar2->field0_0x0).__vtable;
    (*(code *)pPVar3->SetEvent)
              ((int)&(pEVar2->field0_0x0).m_state + (int)*(short *)&pPVar3->SetState,3);
  }
  pDVar4 = *ppDVar11;
  if (pDVar4 != (DPadWin__3_4779 *)0x0) {
    (**(code **)(*(int *)&pDVar4->field_0x38 + 0xc))
              ((int)&(((DPadWin__3_4779 *)(pDVar4->m_fnTab + -9))->field0_0x0).m_state +
               (int)*(short *)(*(int *)&pDVar4->field_0x38 + 8),3);
  }
  pEVar5 = *ppEVar9;
  if (pEVar5 != (ESimsCursor__3_1557 *)0x0) {
    (**(code **)(*(int *)&pEVar5->field_0x38 + 0xc))
              ((int)&(((ESimsCursor__3_1557 *)(pEVar5->m_ToolValueCalcFnTab + -8))->field0_0x0).
                     m_state + (int)*(short *)(*(int *)&pEVar5->field_0x38 + 8),3);
  }
  pSVar6 = *ppSVar10;
  if (pSVar6 != (SimInfoWin__3_4679 *)0x0) {
    (**(code **)(*(int *)&pSVar6->field_0x38 + 0xc))
              ((int)&(pSVar6->field0_0x0).m_state + (int)*(short *)(*(int *)&pSVar6->field_0x38 + 8)
               ,3);
  }
  pEVar7 = *ppEVar8;
  if (pEVar7 != (EActionQueue__30_2184 *)0x0) {
    (**(code **)(*(int *)&pEVar7->field_0x38 + 0xc))
              ((int)&(pEVar7->field0_0x0).m_state + (int)*(short *)(*(int *)&pEVar7->field_0x38 + 8)
               ,3);
  }
  this->m_pCameras[which] = (ESimsCam *)0x0;
  *ppEVar9 = (ESimsCursor__3_1557 *)0x0;
  *ppDVar11 = (DPadWin__3_4779 *)0x0;
  *ppSVar10 = (SimInfoWin__3_4679 *)0x0;
  *ppEVar8 = (EActionQueue__30_2184 *)0x0;
  _globals._pCursor[which] = (ESimsCursor__67_3982 *)0x0;
  return;
}

void EPanel::UpdateCameras() {
	ESimsCam *this;
	
  ESimsCam *pEVar1;
  Panelstateman__vtable *pPVar2;
  
  pEVar1 = this->m_pCameras[0];
  if (pEVar1 == (ESimsCam *)0x0) {
    pEVar1 = this->m_pCameras[1];
  }
  else {
    pPVar2 = (pEVar1->field0_0x0).__vtable;
    (*(code *)pPVar2[2].Panelstateman)
              ((int)&(pEVar1->field0_0x0).m_state + (int)*(short *)(pPVar2 + 2));
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
    _globals.m_vCameraRotDegrees = this->m_pCameras[0]->m_DegRotAng;
                    /* end of inlined section */
    pEVar1 = this->m_pCameras[1];
  }
  if (pEVar1 != (ESimsCam *)0x0) {
    pPVar2 = (pEVar1->field0_0x0).__vtable;
    (*(code *)pPVar2[2].Panelstateman)
              ((int)&(pEVar1->field0_0x0).m_state + (int)*(short *)(pPVar2 + 2));
  }
  return;
}

void CleanLotForBuildHouseMode() {
	TNodeList<unsigned int> killList;
	cXObject *srch;
	NLIterator i;
	ObjDefinition *pDef;
	NLIterator i;
	NLIterator i;
	
  ENodeListNode *pEVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  int iVar6;
  TNodeList_unsigned_int_ killList;
  long lVar5;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  killList.field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  killList.field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
  pcVar4 = (code *)_5Globs_pObjectModule->__vtable->LevelInfoRequested;
  iVar6 = (int)&_5Globs_pObjectModule->__vtable +
          (int)*(short *)&_5Globs_pObjectModule->__vtable->CleanupPeople;
  do {
    lVar5 = (*pcVar4)(iVar6);
    pEVar1 = killList.field0_0x0.m_l.m_pHead;
    if (lVar5 == 0) {
                    /* end of inlined section */
      for (; pEVar1 != (ENodeListNode *)0x0; pEVar1 = pEVar1->pNext) {
                    /* end of inlined section */
        (*(code *)_5Globs_pObjectModule->__vtable->CheckIntegrity)
                  ((int)&_5Globs_pObjectModule->__vtable +
                   (int)*(short *)&_5Globs_pObjectModule->__vtable->GetNumObjects,
                   *(undefined2 *)&pEVar1->data);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
      }
      RemoveAll__9ENodeList(&killList.field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      RemoveAll__9ENodeList(&killList.field0_0x0);
      return;
    }
    iVar6 = (int)lVar5;
    iVar2 = (**(code **)(*(int *)(iVar6 + 4) + 0x2a4))
                      (iVar6 + *(short *)(*(int *)(iVar6 + 4) + 0x2a0));
    if (*(ushort *)(iVar2 + 0x12) - 1 < 2) {
      iVar2 = *(int *)(iVar6 + 4);
LAB_0017ac6c:
      uVar3 = (**(code **)(iVar2 + 700))(iVar6 + *(short *)(iVar2 + 0x2b8));
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      AddTail__9ENodeListUi(&killList.field0_0x0,uVar3);
                    /* end of inlined section */
      iVar2 = *(int *)(iVar6 + 4);
    }
    else {
      if (*(ushort *)(iVar2 + 0x12) == 0x22) {
LAB_0017ac68:
        iVar2 = *(int *)(iVar6 + 4);
        goto LAB_0017ac6c;
      }
      iVar2 = *(int *)(iVar2 + 0x1c);
      if (iVar2 == 0x24c95f99) {
        iVar2 = *(int *)(iVar6 + 4);
        goto LAB_0017ac6c;
      }
      if ((iVar2 == -0x3a0ba55d) || (iVar2 == 0x39e377cf)) goto LAB_0017ac68;
      lVar5 = (**(code **)(*(int *)(iVar6 + 4) + 0x3c4))
                        (iVar6 + *(short *)(*(int *)(iVar6 + 4) + 0x3c0));
      iVar2 = *(int *)(iVar6 + 4);
      if (lVar5 != 0) {
        uVar3 = (**(code **)(iVar2 + 700))(iVar6 + *(short *)(iVar2 + 0x2b8));
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        AddTail__9ENodeListUi(&killList.field0_0x0,uVar3);
                    /* end of inlined section */
        iVar2 = *(int *)(iVar6 + 4);
      }
    }
    pcVar4 = *(code **)(iVar2 + 0x3fc);
    iVar6 = iVar6 + *(short *)(iVar2 + 0x3f8);
  } while( true );
}

void EPanel::Update() {
	bool inFirstPerson;
	bool cammoved;
	Family *pFam;
	int id;
	bool bInStoryMode;
	bool bWasInSandbox2P;
	cXObject *pObj;
	Panelstate state;
	Family *pFam;
	int nmembers;
	
  EUIObjectNode__vtable *pEVar1;
  EDialogWin__vtable *pEVar2;
  int iVar3;
  EUIVirtualCtrl__vtable *pEVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  Panelstate PVar9;
  int *piVar10;
  long lVar11;
  
  if ((*(int *)&this->m_bAmInBuildHouseMode == 0) &&
     (bVar5 = IsBuildHouseMode__7EGlobal(&_globals), bVar5)) {
    *(undefined4 *)&this->m_bAmInBuildHouseMode = 1;
    CleanLotForBuildHouseMode__Fv();
    *(undefined4 *)&this->m_bDidObjHighlight = 0;
  }
  else {
    bVar5 = IsBuildHouseMode__7EGlobal(&_globals);
    if (bVar5) {
      *(undefined4 *)&this->m_bDidObjHighlight = 0;
    }
    else {
      if (((*(int *)&this->m_b2playerReadyToQuit != 0) && (*(int *)&this->m_b2playerInit != 0)) &&
         (_globals._pSelectedSims[1] == (cXPerson__150_1300 *)0x0)) {
        ResetPanelForPlayer__6EPaneli(this,1);
        *(undefined4 *)&this->m_bDidResumeSinglePlayerDialog = 0;
        *(undefined4 *)&this->m_b2playerInit = 0;
        *(undefined4 *)&this->m_b2playerReadyToQuit = 0;
        return;
      }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      lVar11 = 0;
      if (_5Globs_pHouse != (House *)0x0) {
        lVar11 = (*(code *)_5Globs_pHouse->__vtable->EnterLiveMode)
                           ((int)&_5Globs_pHouse->__vtable +
                            (int)*(short *)&_5Globs_pHouse->__vtable->DoStream);
      }
      lVar8 = -1;
      if (lVar11 != 0) {
        piVar10 = (int *)lVar11;
        lVar11 = (**(code **)(*piVar10 + 0x1c))((int)piVar10 + (int)*(short *)(*piVar10 + 0x18));
        if (lVar11 != 0) {
          lVar8 = (**(code **)(*piVar10 + 0x74))((int)piVar10 + (int)*(short *)(*piVar10 + 0x70));
        }
      }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      bVar5 = false;
      if (_5Globs_pNeighborhood != (Neighborhood *)0x0) {
        lVar11 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                           ((int)&_5Globs_pNeighborhood->__vtable +
                            (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
        bVar5 = lVar11 == 1;
      }
      bVar7 = false;
      if (*(int *)&this->m_b2playerInit == 0) {
LAB_0017aecc:
        PVar9 = this->m_panleState;
      }
      else if ((_globals._pSelectedSims[0] == (cXPerson__150_1300 *)0x0) ||
              (_globals._pSelectedSims[1] == (cXPerson__150_1300 *)0x0)) {
        bVar6 = IsBuildHouseMode__7EGlobal(&_globals);
        if (bVar6) {
          PVar9 = this->m_panleState;
        }
        else {
          if (!bVar5) {
            bVar7 = IsChallangeMode__7EGlobal(&_globals);
            bVar7 = !bVar7;
            goto LAB_0017aecc;
          }
          PVar9 = this->m_panleState;
        }
      }
      else {
        PVar9 = this->m_panleState;
      }
      if (((PVar9 == LIVE_DIALOG_STATE) || (*(int *)&this->m_b2playerReadyToQuit != 0)) ||
         (*(int *)&this->m_bDidResumeSinglePlayerDialog != 0)) {
        if (((!bVar7) || (PVar9 == LIVE_DIALOG_STATE)) ||
           (*(int *)&this->m_bDidResumeSinglePlayerDialog == 0)) goto LAB_0017b034;
        _globals._pSelectedSims[1] = (cXPerson__150_1300 *)0x0;
        SetSelectedPerson__7EGlobalUiP8cXPersonb(&_globals,1,(cXPerson__47_985 *)0x0,false);
        TurnOffAllHighlights__11EIObjectManUi((_globals._pCurHouse)->m_pObjectMan,1);
        iVar3 = *(int *)&this->m_pActionQueues[0]->field_0x38;
        (**(code **)(iVar3 + 0x9c))
                  ((int)&(this->m_pActionQueues[0]->field0_0x0).m_state +
                   (int)*(short *)(iVar3 + 0x98),1,1,1);
        _Mess_dpad_chaged_selected_sim_R__6EPanelPvUi(this,(void *)0x0,9);
        *(undefined4 *)&this->m_b2playerReadyToQuit = 1;
      }
      else {
        if (!bVar7) {
LAB_0017b034:
          bVar7 = IsTwoPlayer__7EGlobal(&_globals);
          if (bVar7) {
            *(undefined4 *)&this->m_bDidObjHighlight = 0;
          }
          else if (bVar5) {
            *(undefined4 *)&this->m_bDidObjHighlight = 0;
          }
          else {
            if (this->m_panleState == LIVE_DIALOG_STATE) goto LAB_0017b090;
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
                    /* end of inlined section */
            if (this->m_panleState + ~LIVE_SIM_EDIT < 2) {
              *(undefined4 *)&this->m_bDidObjHighlight = 0;
            }
            else {
              if (lVar8 == -1) {
                pEVar1 = (this->field0_0x0).__vtable;
                (*(code *)pEVar1[1].EUIObjectNode)
                          ((int)this->m_messageFns + *(short *)(pEVar1 + 1) + -0x3c,
                           this->m_pDpadWins[0],0x22);
                goto LAB_0017b090;
              }
              *(undefined4 *)&this->m_bDidObjHighlight = 0;
            }
          }
          goto LAB_0017b094;
        }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        lVar11 = (*(code *)_5Globs_pObjectModule->__vtable->DoStream)
                           ((int)&_5Globs_pObjectModule->__vtable +
                            (int)*(short *)&_5Globs_pObjectModule->__vtable->OffsetWorld,
                            0xffffffffbf1c5efc);
        if (lVar11 == 0) {
          _globals._pSelectedSims[1] = (cXPerson__150_1300 *)0x0;
          SetSelectedPerson__7EGlobalUiP8cXPersonb(&_globals,1,(cXPerson__47_985 *)0x0,false);
          TurnOffAllHighlights__11EIObjectManUi((_globals._pCurHouse)->m_pObjectMan,1);
          iVar3 = *(int *)&this->m_pActionQueues[0]->field_0x38;
          (**(code **)(iVar3 + 0x9c))
                    ((int)&(this->m_pActionQueues[0]->field0_0x0).m_state +
                     (int)*(short *)(iVar3 + 0x98),1,1,1);
          _Mess_dpad_chaged_selected_sim_R__6EPanelPvUi(this,(void *)0x0,9);
          *(undefined4 *)&this->m_b2playerReadyToQuit = 1;
        }
        else {
          iVar3 = *(int *)((int)lVar11 + 4);
          (**(code **)(iVar3 + 0xd4))((int)lVar11 + (int)*(short *)(iVar3 + 0xd0),0x3b05e0);
          *(undefined4 *)&this->m_bDidResumeSinglePlayerDialog = 1;
        }
      }
LAB_0017b090:
      *(undefined4 *)&this->m_bDidObjHighlight = 0;
    }
  }
LAB_0017b094:
  bVar5 = false;
  if (_globals._pCurCam != (ESimsCam *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
                    /* end of inlined section */
    bVar5 = (_globals._pCurCam)->m_mode == 3;
  }
  if ((bVar5) || (_globals._VanityMirrorState != '\0')) {
    TurnOffAllHighlights__11EIObjectManUi((_globals._pCurHouse)->m_pObjectMan,0);
    TurnOffAllHighlights__11EIObjectManUi((_globals._pCurHouse)->m_pObjectMan,1);
  }
  else {
    UpdateObjectHighlight__11EIObjectMan((_globals._pCurHouse)->m_pObjectMan);
  }
  Update__15EMemoryMeterWin(&this->m_MemoryMeterWin);
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
                    /* end of inlined section */
  if (1 < this->m_panleState + ~LIVE_SIM_EDIT) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    lVar11 = 0;
    if (_5Globs_pHouse != (House *)0x0) {
      lVar11 = (*(code *)_5Globs_pHouse->__vtable->EnterLiveMode)
                         ((int)&_5Globs_pHouse->__vtable +
                          (int)*(short *)&_5Globs_pHouse->__vtable->DoStream);
    }
    if (lVar11 != 0) {
      Update__9E2PDialog(_globals.m_p2PDialog[0]);
      Update__9E2PDialog(_globals.m_p2PDialog[1]);
      pEVar2 = (_globals.m_pMessDialogs[0]->field0_0x0).__vtable;
      (*(code *)pEVar2->SetObject)
                ((int)&(_globals.m_pMessDialogs[0]->field0_0x0).m_mover +
                 (int)*(short *)&pEVar2->SetObject);
      pEVar2 = (_globals.m_pMessDialogs[1]->field0_0x0).__vtable;
      (*(code *)pEVar2->SetObject)
                ((int)&(_globals.m_pMessDialogs[1]->field0_0x0).m_mover +
                 (int)*(short *)&pEVar2->SetObject);
      iVar3 = *(int *)lVar11;
      lVar11 = (**(code **)(iVar3 + 0x1c))((int)(int *)lVar11 + (int)*(short *)(iVar3 + 0x18));
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      lVar8 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                        ((int)&_5Globs_pNeighborhood->__vtable +
                         (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
      if (lVar11 < 2) {
LAB_0017b230:
        pEVar4 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
        lVar11 = (*(code *)pEVar4[1].GetBut)
                           ((int)(_globals.m_pCtrlPad)->m_pressed +
                            *(short *)&pEVar4[1].ClearBut + -4,1,0x800);
        if (lVar11 != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
          PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
        }
      }
      else if (((*(int *)&this->m_b2playerInit == 0) && (this->m_panleState != LIVE_DIALOG_STATE))
              && (lVar8 == 0)) {
        pEVar4 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
        lVar11 = (*(code *)pEVar4[1].GetBut)
                           ((int)(_globals.m_pCtrlPad)->m_pressed +
                            *(short *)&pEVar4[1].ClearBut + -4,1,0x800);
        if (lVar11 != 0) {
          SetupTwoPlayer__6EPanel(this);
          *(undefined4 *)&this->m_b2playerInit = 1;
        }
      }
      else if (lVar11 < 2) goto LAB_0017b230;
    }
  }
                    /* end of inlined section */
  UpdateCameras__6EPanel(this);
  Update__13EUIObjectNode(&this->field0_0x0);
  Update__21TimeWindowAndPauseBar(this->m_pTimeNMoneyWin);
  Update__7EDialog(_globals.m_pDialog);
  bVar5 = false;
  if (this->m_pCameras[0] != (ESimsCam *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
                    /* end of inlined section */
    bVar5 = *(int *)&this->m_pCameras[0]->m_bmoved != 0;
  }
  if (bVar5) {
                    /* end of inlined section */
    NotifyViewChange__12cSoundPlayer(_5Globs_pSound);
  }
  else if (*(int *)&this->m_bDidObjHighlight == 0) goto LAB_0017b2d8;
  UpdateWallsHalfUp__5ERoomi((_globals._pCurHouse)->m_pWallMan2,0);
LAB_0017b2d8:
  if (_globals.m_pPiP != (EPictureInPicture *)0x0) {
    Update__17EPictureInPicture(_globals.m_pPiP);
  }
  return;
}

void EPanel::SetupTwoPlayer() {
  int iVar1;
  cXPerson__47_985 *newSelection;
  
  if (_globals._pSelectedSims[1] == (cXPerson__150_1300 *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    newSelection = (cXPerson__47_985 *)
                   (*(code *)_5Globs_pObjectModule->__vtable->SetSimFlag)
                             ((int)&_5Globs_pObjectModule->__vtable +
                              (int)*(short *)&_5Globs_pObjectModule->__vtable->GetIdleStatus);
    SetSelectedPerson__7EGlobalUiP8cXPersonb(&_globals,1,newSelection,false);
    UpdateObjectHighlight__11EIObjectMan((_globals._pCurHouse)->m_pObjectMan);
  }
  InitPanleForPlayer__6EPaneli(this,1);
  UpdateWin__8ESimsCam(this->m_pCameras[0]);
  UpdateWin__8ESimsCam(this->m_pCameras[1]);
  iVar1 = *(int *)&this->m_pActionQueues[0]->field_0x38;
  (**(code **)(iVar1 + 0x9c))
            ((int)&(this->m_pActionQueues[0]->field0_0x0).m_state + (int)*(short *)(iVar1 + 0x98),1,
             2,1);
  iVar1 = *(int *)&this->m_pActionQueues[1]->field_0x38;
  (**(code **)(iVar1 + 0x9c))
            ((int)&(this->m_pActionQueues[1]->field0_0x0).m_state + (int)*(short *)(iVar1 + 0x98),1,
             1,1);
  SetWallState__6EHouse20EWallUpDownStateType((EHouse__2_990 *)_globals._pCurHouse,WallHalfUP);
  SetNextWallMode__6EHouse((EHouse__2_990 *)_globals._pCurHouse);
  return;
}

bool EPanel::GetInfoWinVis(int player) {
	EUIObjectNode *this;
	
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  return (bool)((byte)(*(int *)&this->m_pInfoWindows[player]->field_0x10 >> 1) & 1);
}

void EPanel::Draw(ERC *prc) {
	cXPerson *pPerson1;
	ESim *pESim1;
	ESims3DHead *pHead1;
	cXPerson *pPerson2;
	ESim *pESim2;
	ESims3DHead *pHead2;
	Panelstate state;
	Panelstate state;
	TreeSim *this;
	ESim *this;
	TreeSim *this;
	ESim *this;
	
  EDialogWin__vtable *pEVar1;
  EUIObjectNode__vtable *pEVar2;
  ESim *pEVar3;
  TimeWindowAndPauseBar *this_00;
  SimInfoWin__3_4679 *pSVar4;
  ESims3DHead *pEVar5;
  ESims3DHead *pEVar6;
  
  (*(code *)prc->__vtable[1].LineList)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,_globals._pCurLights,
             _globals._nCurLights);
  Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
                    /* end of inlined section */
  if (this->m_panleState + ~LIVE_SIM_EDIT < 2) {
    Draw__15EMemoryMeterWinP3ERC(&this->m_MemoryMeterWin,prc);
  }
  Draw__13EUIObjectNodeP3ERC(&this->field0_0x0,prc);
  pSVar4 = this->m_pInfoWindows[0];
  if (pSVar4 == (SimInfoWin__3_4679 *)0x0) {
    pSVar4 = this->m_pInfoWindows[1];
  }
  else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if ((*(int *)&pSVar4->field_0x10 >> 1 & 1U) == 0) {
      (**(code **)(*(int *)&pSVar4->field_0x38 + 0x1c))
                ((int)&(pSVar4->field0_0x0).m_state +
                 (int)*(short *)(*(int *)&pSVar4->field_0x38 + 0x18),prc);
      pSVar4 = this->m_pInfoWindows[1];
    }
    else {
      pSVar4 = this->m_pInfoWindows[1];
    }
  }
  if (pSVar4 == (SimInfoWin__3_4679 *)0x0) {
    this_00 = this->m_pTimeNMoneyWin;
  }
  else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if ((*(int *)&pSVar4->field_0x10 >> 1 & 1U) == 0) {
      (**(code **)(*(int *)&pSVar4->field_0x38 + 0x1c))
                ((int)&(pSVar4->field0_0x0).m_state +
                 (int)*(short *)(*(int *)&pSVar4->field_0x38 + 0x18),prc);
      this_00 = this->m_pTimeNMoneyWin;
    }
    else {
      this_00 = this->m_pTimeNMoneyWin;
    }
  }
  Draw__21TimeWindowAndPauseBarP3ERC(this_00,prc);
  Draw__17EPictureInPictureP3ERC(_globals.m_pPiP,prc);
  DrawMenu__11ESimsCursorP3ERC((ESimsCursor__15_1743 *)this->m_pCursors[0],prc);
  if ((ESimsCursor__15_1743 *)this->m_pCursors[1] != (ESimsCursor__15_1743 *)0x0) {
    DrawMenu__11ESimsCursorP3ERC((ESimsCursor__15_1743 *)this->m_pCursors[1],prc);
  }
  Draw__9E2PDialogP3ERC(_globals.m_p2PDialog[0],prc);
  Draw__9E2PDialogP3ERC(_globals.m_p2PDialog[1],prc);
  pEVar1 = (_globals.m_pMessDialogs[0]->field0_0x0).__vtable;
  (*(code *)pEVar1->PutPanelToSleep)
            ((int)&(_globals.m_pMessDialogs[0]->field0_0x0).m_mover +
             (int)*(short *)&pEVar1->SetParams,prc);
  pEVar1 = (_globals.m_pMessDialogs[1]->field0_0x0).__vtable;
  (*(code *)pEVar1->PutPanelToSleep)
            ((int)&(_globals.m_pMessDialogs[1]->field0_0x0).m_mover +
             (int)*(short *)&pEVar1->SetParams,prc);
  Draw__7EDialogP3ERC(_globals.m_pDialog,prc);
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
                    /* end of inlined section */
  if (1 < this->m_panleState + ~LIVE_SIM_EDIT) {
    if (_globals._pSelectedSims[0] == (cXPerson__150_1300 *)0x0) {
      pEVar3 = (ESim *)0x0;
    }
    else {
                    /* inlined from ../MSrc/TreeSim.h */
                    /* end of inlined section */
      pEVar3 = _globals._pSelectedSims[0]->_vb1187->_vb1121->m_pEoRPerson;
    }
    pEVar5 = (ESims3DHead *)0x0;
    if (pEVar3 != (ESim *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/esim.h */
      pEVar5 = pEVar3->m_pSimHead;
    }
                    /* end of inlined section */
    if (_globals._pSelectedSims[1] == (cXPerson__150_1300 *)0x0) {
      pEVar3 = (ESim *)0x0;
    }
    else {
                    /* inlined from ../MSrc/TreeSim.h */
                    /* end of inlined section */
      pEVar3 = _globals._pSelectedSims[1]->_vb1187->_vb1121->m_pEoRPerson;
    }
    pEVar6 = (ESims3DHead *)0x0;
    if (pEVar3 != (ESim *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/esim.h */
      pEVar6 = pEVar3->m_pSimHead;
    }
                    /* end of inlined section */
    if (pEVar5 != (ESims3DHead *)0x0) {
      pEVar2 = (pEVar5->field0_0x0).__vtable;
      (*(code *)pEVar2->Message)
                ((int)&(pEVar5->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                 (int)*(short *)&pEVar2->SetBoxDims,prc);
    }
    if (pEVar6 != (ESims3DHead *)0x0) {
      pEVar2 = (pEVar6->field0_0x0).__vtable;
      (*(code *)pEVar2->Message)
                ((int)&(pEVar6->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                 (int)*(short *)&pEVar2->SetBoxDims,prc);
    }
  }
  return;
}

void EPanel::SetState(int playerid, Panelstate state) {
  Panelstateman__vtable *pPVar1;
  Panelstateman *pPVar2;
  
  this->m_panleState = state;
  if (playerid == 0) {
    SetState__11EPausePanelQ213Panelstateman10Panelstate
              ((EPausePanel__69_3945 *)&this->m_pausePanel,state);
  }
  pPVar1 = (this->m_pTimeNMoneyWin->field0_0x0).__vtable;
  (*(code *)pPVar1[1].Panelstateman)
            ((int)this->m_pTimeNMoneyWin->m_pPause_Speed_Indicators + *(short *)(pPVar1 + 1) + -0xc,
             state);
  if (this->m_pDpadWins[playerid] != (DPadWin__3_4779 *)0x0) {
    pPVar1 = (this->m_pCameras[playerid]->field0_0x0).__vtable;
    (*(code *)pPVar1[1].Panelstateman)
              ((int)&(this->m_pCameras[playerid]->field0_0x0).m_state + (int)*(short *)(pPVar1 + 1),
               state);
    pPVar2 = this->m_pDpadWins[playerid]->_vb1676;
    pPVar1 = pPVar2->__vtable;
    (*(code *)pPVar1[1].Panelstateman)((int)&pPVar2->m_state + (int)*(short *)(pPVar1 + 1),state);
    pPVar2 = this->m_pCursors[playerid]->_vb1676;
    pPVar1 = pPVar2->__vtable;
    (*(code *)pPVar1[1].Panelstateman)((int)&pPVar2->m_state + (int)*(short *)(pPVar1 + 1),state);
    pPVar2 = this->m_pInfoWindows[playerid]->_vb1676;
    pPVar1 = pPVar2->__vtable;
    (*(code *)pPVar1[1].Panelstateman)((int)&pPVar2->m_state + (int)*(short *)(pPVar1 + 1),state);
    pPVar2 = this->m_pActionQueues[playerid]->_vb2090;
    pPVar1 = pPVar2->__vtable;
    (*(code *)pPVar1[1].Panelstateman)((int)&pPVar2->m_state + (int)*(short *)(pPVar1 + 1),state);
  }
  return;
}

void EPanel::Message(EUIObjectNode *pChild, u32 messId) {
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  null____pfn_or_delta2 nVar4;
  undefined8 in_t3;
  
  if (messId < 0x30) {
    uVar1 = this->m_messageFns[messId].__index;
    if (uVar1 != 0) {
      if ((short)uVar1 < 0) {
        nVar4 = this->m_messageFns[messId].__pfn_or_delta2;
      }
      else {
        in_t3 = *(undefined8 *)
                 ((short)uVar1 * 8 +
                  *(int *)((int)this->m_messageFns +
                          (short)this->m_messageFns[messId].__pfn_or_delta2.__delta2 + -0x3c) + -8);
        nVar4 = SUB84((ulong)in_t3 >> 0x20,0);
      }
      uVar2 = this->m_messageFns[messId].__delta;
      if ((short)uVar1 < 0) {
        iVar3 = (int)(short)uVar2;
      }
      else {
        iVar3 = (int)(short)in_t3 + (int)(short)uVar2;
      }
      (*(code *)nVar4)((int)this->m_messageFns + iVar3 + -0x3c,pChild);
    }
  }
  return;
}

void EPanel::SetupFnTable() {
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  memset(this->m_messageFns,0,0x180);
  uVar4 = DAT_003b0608;
  puVar1 = (undefined *)((int)&this->m_messageFns[4].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0608 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 4) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 4) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b0610;
  puVar1 = (undefined *)((int)&this->m_messageFns[5].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0610 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 5) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 5) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b0618;
  puVar1 = (undefined *)((int)&this->m_messageFns[6].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0618 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 6) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 6) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b0620;
  puVar1 = (undefined *)((int)&this->m_messageFns[7].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0620 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 7) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 7) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b0628;
  puVar1 = (undefined *)((int)&this->m_messageFns[8].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0628 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 8) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 8) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b0630;
  puVar1 = (undefined *)((int)&this->m_messageFns[9].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0630 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 9) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 9) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b0638;
  puVar1 = (undefined *)((int)&this->m_messageFns[10].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0638 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 10) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 10) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b0640;
  puVar1 = (undefined *)((int)&this->m_messageFns[0xb].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0640 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0xb) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0xb) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b0648;
  puVar1 = (undefined *)((int)&this->m_messageFns[0xc].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0648 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0xc) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0xc) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b0650;
  puVar1 = (undefined *)((int)&this->m_messageFns[0xd].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0650 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0xd) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0xd) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b0658;
  puVar1 = (undefined *)((int)&this->m_messageFns[0xe].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0658 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0xe) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0xe) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b0660;
  puVar1 = (undefined *)((int)&this->m_messageFns[0xf].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0660 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0xf) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0xf) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b0668;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x10].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0668 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x10) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x10) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b0670;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x11].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0670 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x11) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x11) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b0678;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x12].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0678 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x12) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x12) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b0680;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x13].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0680 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x13) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x13) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b0688;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x14].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0688 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x14) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x14) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b0690;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x15].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0690 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x15) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x15) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b0698;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x16].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0698 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x16) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x16) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b06a0;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x17].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b06a0 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x17) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x17) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b06a8;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x18].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b06a8 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x18) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x18) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b06b0;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x19].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b06b0 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x19) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x19) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b06b8;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x1a].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b06b8 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x1a) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x1a) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b06c0;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x1b].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b06c0 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x1b) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x1b) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b06c8;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x1d].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b06c8 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x1d) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x1d) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b06d0;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x1e].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b06d0 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x1e) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x1e) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b06d8;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x1f].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b06d8 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x1f) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x1f) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b06e0;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x20].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b06e0 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x20) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x20) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b06e8;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x21].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b06e8 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x21) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x21) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b06f0;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x22].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b06f0 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x22) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x22) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b06f8;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x23].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b06f8 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x23) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x23) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b0700;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x24].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0700 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x24) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x24) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b0708;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x25].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0708 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x25) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x25) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b0710;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x26].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0710 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x26) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x26) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b0718;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x27].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0718 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x27) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x27) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b0720;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x28].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0720 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x28) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x28) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b0728;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x29].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0728 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x29) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x29) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b0730;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x2a].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0730 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x2a) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x2a) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b0738;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x2b].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0738 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x2b) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x2b) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b0740;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x2c].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0740 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x2c) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x2c) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b0748;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x2d].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0748 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x2d) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x2d) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b0750;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x2e].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0750 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x2e) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x2e) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003b0758;
  puVar1 = (undefined *)((int)&this->m_messageFns[0x2f].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003b0758 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_messageFns + 0x2f) & 7;
  puVar3 = (ulong *)((int)(this->m_messageFns + 0x2f) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  return;
}

void EPanel::_Mess_dpad_toggle_mood(void *p, u32 messid) {
	int ctrl;
	
  int playerid;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  playerid = *(int *)((int)p + 0x30);
                    /* end of inlined section */
  SetWindow__10SimInfoWinib((SimInfoWin__78_2366 *)this->m_pInfoWindows[playerid],0,true);
  if (playerid == 0) {
    SetState__6EPaneliQ213Panelstateman10Panelstate(this,0,LIVE_INFOUP_1_STATE);
  }
  else {
    SetState__6EPaneliQ213Panelstateman10Panelstate(this,playerid,LIVE_INFOUP_2_STATE);
  }
  return;
}

void EPanel::_Mess_dpad_toggle_job(void *p, u32 messid) {
	int ctrl;
	
  int playerid;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  playerid = *(int *)((int)p + 0x30);
                    /* end of inlined section */
  SetWindow__10SimInfoWinib((SimInfoWin__78_2366 *)this->m_pInfoWindows[playerid],2,true);
  if (playerid == 0) {
    SetState__6EPaneliQ213Panelstateman10Panelstate(this,0,LIVE_INFOUP_1_STATE);
  }
  else {
    SetState__6EPaneliQ213Panelstateman10Panelstate(this,playerid,LIVE_INFOUP_2_STATE);
  }
  return;
}

void EPanel::_Mess_dpad_toggle_personality(void *p, u32 messid) {
	int ctrl;
	
  int playerid;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  playerid = *(int *)((int)p + 0x30);
                    /* end of inlined section */
  SetWindow__10SimInfoWinib((SimInfoWin__78_2366 *)this->m_pInfoWindows[playerid],1,true);
  if (playerid == 0) {
    SetState__6EPaneliQ213Panelstateman10Panelstate(this,0,LIVE_INFOUP_1_STATE);
  }
  else {
    SetState__6EPaneliQ213Panelstateman10Panelstate(this,playerid,LIVE_INFOUP_2_STATE);
  }
  return;
}

void EPanel::_Mess_dpad_toggle_relationships(void *p, u32 messid) {
	int ctrl;
	
  int playerid;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  playerid = *(int *)((int)p + 0x30);
                    /* end of inlined section */
  SetWindow__10SimInfoWinib((SimInfoWin__78_2366 *)this->m_pInfoWindows[playerid],3,true);
  if (playerid == 0) {
    SetState__6EPaneliQ213Panelstateman10Panelstate(this,0,LIVE_INFOUP_1_STATE);
  }
  else {
    SetState__6EPaneliQ213Panelstateman10Panelstate(this,playerid,LIVE_INFOUP_2_STATE);
  }
  return;
}

void EPanel::_Mess_dpad_chaged_selected_sim_L(void *p, u32 messid) {
  ReverseSelectedPerson__7EGlobalUi(&_globals,(uint)p);
  ChangedSelectedSim__10SimInfoWin((SimInfoWin__78_2366 *)this->m_pInfoWindows[(int)p]);
  CenterOnSelectedSim__8ESimsCam(this->m_pCameras[(int)p]);
  UpdateObjectHighlight__11EIObjectMan((_globals._pCurHouse)->m_pObjectMan);
  return;
}

void EPanel::_Mess_dpad_chaged_selected_sim_R(void *p, u32 messid) {
  AdvanceSelectedPerson__7EGlobalUi(&_globals,(uint)p);
  ChangedSelectedSim__10SimInfoWin((SimInfoWin__78_2366 *)this->m_pInfoWindows[(int)p]);
  CenterOnSelectedSim__8ESimsCam(this->m_pCameras[(int)p]);
  UpdateObjectHighlight__11EIObjectMan((_globals._pCurHouse)->m_pObjectMan);
  return;
}

void EPanel::_Mess_dpad_chaged_selected_simLButton(void *p, u32 _Messid) {
  ReverseSelectedPerson__7EGlobalUi(&_globals,(uint)p);
  ChangedSelectedSim__10SimInfoWin((SimInfoWin__78_2366 *)this->m_pInfoWindows[(int)p]);
  UpdateObjectHighlight__11EIObjectMan((_globals._pCurHouse)->m_pObjectMan);
  return;
}

void EPanel::_Mess_dpad_chaged_selected_simRButton(void *p, u32 _Messid) {
  AdvanceSelectedPerson__7EGlobalUi(&_globals,(uint)p);
  ChangedSelectedSim__10SimInfoWin((SimInfoWin__78_2366 *)this->m_pInfoWindows[(int)p]);
  UpdateObjectHighlight__11EIObjectMan((_globals._pCurHouse)->m_pObjectMan);
  return;
}

void EPanel::_Mess_dpad_paused(void *p, u32 messid) {
  return;
}

void EPanel::_Mess_dpad_toggle_ActionQueueMan(void *p, u32 messid) {
	int ctrl;
	Panelstate state;
	EInteractionPtrList interactionList;
	
  Panelstate state;
  TNodeList_const_Interaction___ interactionList;
  
  state = LIVE_DEFAULT_STATE;
  if (this->m_panleState != LIVE_ACTIONQ_STATE) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    interactionList.field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    interactionList.field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
    state = LIVE_ACTIONQ_STATE;
    GetListOfActionsInQueue__12EActionQueueRt9TNodeList1ZPC11Interaction
              (this->m_pActionQueues[(int)p],&interactionList);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
    if (interactionList.field0_0x0.m_l.m_pHead == (ENodeListNode *)0x0) {
      state = LIVE_DEFAULT_STATE;
    }
    RemoveAll__9ENodeList(&interactionList.field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    RemoveAll__9ENodeList(&interactionList.field0_0x0);
  }
                    /* end of inlined section */
  SetState__6EPaneliQ213Panelstateman10Panelstate(this,(int)p,state);
  return;
}

void EPanel::_Mess_dpad_delete_Action_p1(void *p, u32 messid) {
  return;
}

void EPanel::_Mess_dpad_delete_Action_p2(void *p, u32 messid) {
  return;
}

void EPanel::_Mess_dpad_next_wall_mode(void *p, u32 messid) {
	bool wasfirstperson;
	ESimsCam *this;
	EHouse *this;
	
  bool bVar1;
  bool bVar2;
  ESimsCam *this_00;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
                    /* end of inlined section */
  bVar1 = this->m_pCameras[0]->m_mode != 3;
  bVar2 = IsTwoPlayer__7EGlobal(&_globals);
  if (((!bVar2) && (bVar2 = IsBuildHouseMode__7EGlobal(&_globals), !bVar2)) &&
     (_globals.Cheats._44_4_ != 0)) {
    if (!bVar1) {
      this_00 = this->m_pCameras[0];
      goto LAB_0017c11c;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
    if ((_globals._pCurHouse)->m_wallUpDownState == WallDown) {
      SetWallState__6EHouse20EWallUpDownStateType((EHouse__2_990 *)_globals._pCurHouse,WallUP);
      ToggleFirstPerson__8ESimsCam(this->m_pCameras[0]);
      return;
    }
  }
  if (bVar1) {
    SetNextWallMode__6EHouse((EHouse__2_990 *)_globals._pCurHouse);
    return;
  }
  this_00 = this->m_pCameras[0];
LAB_0017c11c:
  ToggleFirstPerson__8ESimsCam(this_00);
  SetWallState__6EHouse20EWallUpDownStateType((EHouse__2_990 *)_globals._pCurHouse,WallDown);
  SetNextWallMode__6EHouse((EHouse__2_990 *)_globals._pCurHouse);
  return;
}

void EPanel::_Mess_dpad_speed_up(void *p, u32 messid) {
  return;
}

void EPanel::_Mess_dpad_speed_down(void *p, u32 messid) {
  return;
}

void EPanel::_Mess_infowin_cancle(void *p, u32 messid) {
	SimInfoWin *this;
	
  int playerid;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  playerid = *(int *)((int)p + 0x30);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/siminfowin.h */
                    /* end of inlined section */
  SetWindow__10SimInfoWinib
            ((SimInfoWin__78_2366 *)this->m_pInfoWindows[playerid],
             this->m_pInfoWindows[playerid]->m_curwindow,false);
  SetState__6EPaneliQ213Panelstateman10Panelstate(this,playerid,LIVE_DEFAULT_STATE);
  return;
}

void EPanel::_Mess_curs_add_action_to_queue_p1(void *p, u32 messid) {
  return;
}

void EPanel::_Mess_curs_add_action_to_queue_p2(void *p, u32 messid) {
  return;
}

void EPanel::_Mess_curs_activate_pi_menu(void *p, u32 messid) {
  SetState__6EPaneliQ213Panelstateman10Panelstate(this,*(int *)((int)p + 0x30),LIVE_PIMENU_STATE);
  return;
}

void EPanel::_Mess_curs_de_activate_pi_menu(void *p, u32 messid) {
  SetState__6EPaneliQ213Panelstateman10Panelstate(this,*(int *)((int)p + 0x30),LIVE_DEFAULT_STATE);
  return;
}

void EPanel::_Mess_curs_moved_p1(void *p, u32 messid) {
  *(undefined4 *)&this->m_bDidObjHighlight = 1;
  return;
}

void EPanel::_Mess_curs_moved_p2(void *p, u32 messid) {
  *(undefined4 *)&this->m_bDidObjHighlight = 1;
  return;
}

void EPanel::_Mess_cam_activate_firstperson(void *p, u32 messid) {
  return;
}

void EPanel::_Mess_cam_de_activate_firstperson(void *p, u32 messid) {
  return;
}

void EPanel::_Mess_cam_changed_pos(void *p, u32 messid) {
  return;
}

void EPanel::_Mess_pi_add_action_to_queue_p1(void *p, u32 messid) {
  return;
}

void EPanel::_Mess_pi_add_action_to_queue_p2(void *p, u32 messid) {
  return;
}

void EPanel::_Mess_pi_went_to_sleep(void *p, u32 messid) {
  return;
}

void EPanel::_Mess_dialog_activate(void *p, u32 messid) {
  SetState__6EPaneliQ213Panelstateman10Panelstate(this,0,LIVE_DIALOG_STATE);
  SetState__6EPaneliQ213Panelstateman10Panelstate(this,1,LIVE_DIALOG_STATE);
  return;
}

void EPanel::_Mess_dialog_de_activate(void *p, u32 messid) {
  SetState__6EPaneliQ213Panelstateman10Panelstate(this,0,LIVE_DEFAULT_STATE);
  SetState__6EPaneliQ213Panelstateman10Panelstate(this,1,LIVE_DEFAULT_STATE);
  return;
}

void EPanel::_Mess_sim_object_placed(void *p, u32 messid) {
	cXObject *obj;
	cXObject *pContained;
	ISimInstance *pISimContained;
	
  short sVar1;
  bool bVar2;
  cXObject__56_2557 *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if ((p != (void *)0x0) && (bVar2 = GetIsPerson__12ISimInstance((ISimInstance *)p), !bVar2)) {
    pcVar3 = GetXOb__12ISimInstance((ISimInstance *)p);
    iVar9 = *(int *)((int)p + 0x130);
    sVar1 = *(short *)(iVar9 + 0x18);
    uVar4 = (**(code **)(iVar9 + 0x24))((int)p + *(short *)(iVar9 + 0x20) + 0x130);
    (**(code **)(iVar9 + 0x1c))((int)p + sVar1 + 0x130,uVar4 & 0xffffffffffffff3f);
    (**(code **)(*(int *)((int)p + 0x130) + 0x14))
              ((int)p + *(short *)(*(int *)((int)p + 0x130) + 0x10) + 0x130);
    lVar5 = (*(code *)pcVar3->__vtable[1].Dirty)
                      ((int)&pcVar3->_vb2602 + (int)*(short *)&pcVar3->__vtable[1].UpdateSimFlags,0)
    ;
    if (lVar5 != 0) {
      iVar9 = *(int *)lVar5;
      while( true ) {
        lVar6 = (**(code **)(*(int *)(iVar9 + 0x1c) + 0x84))
                          (iVar9 + *(short *)(*(int *)(iVar9 + 0x1c) + 0x80));
        iVar9 = (int)lVar5;
        if (lVar6 == 0) {
          iVar7 = *(int *)(iVar9 + 4);
        }
        else {
          iVar8 = (int)lVar6;
          iVar7 = *(int *)(iVar8 + 0x130);
          sVar1 = *(short *)(iVar7 + 0x18);
          uVar4 = (**(code **)(*(int *)((int)p + 0x130) + 0x24))
                            ((int)p + *(short *)(*(int *)((int)p + 0x130) + 0x20) + 0x130);
          (**(code **)(iVar7 + 0x1c))(iVar8 + 0x130 + (int)sVar1,uVar4 & 0xffffffffffffff3f);
          (**(code **)(*(int *)(iVar8 + 0x130) + 0x14))
                    (iVar8 + 0x130 + (int)*(short *)(*(int *)(iVar8 + 0x130) + 0x10));
          iVar7 = *(int *)(iVar9 + 4);
        }
        lVar5 = (**(code **)(iVar7 + 0x25c))(iVar9 + *(short *)(iVar7 + 600),0);
        if (lVar5 == 0) break;
        iVar9 = *(int *)lVar5;
      }
    }
  }
  return;
}

void EPanel::_Mess_sim_object_picked(void *p, u32 messid) {
  return;
}

void EPanel::_Mess_pause_begin(void *p, u32 _Messid) {
	ESimsCursor *this;
	
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
                    /* end of inlined section */
  if (_globals._pCursor[0]->m_pCursorObject == (cXCursorObject__152_1098 *)0x0) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/particle/e_particleemit.h */
    __14EIParticleEmit_m_allEnabled = 0;
                    /* end of inlined section */
    EnableLightMaps__6EHouseb((EHouse__2_990 *)_globals._pCurHouse,false);
    ForceIncComputeComplete__6EHouse((EHouse__2_990 *)_globals._pCurHouse);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    _globals.m_whichPlayerPaused = *(int *)((int)p + 0x30);
                    /* end of inlined section */
    SetState__6EPaneliQ213Panelstateman10Panelstate(this,0,PAUSED_PANEL_STATE);
    SetState__6EPaneliQ213Panelstateman10Panelstate(this,1,PAUSED_PANEL_STATE);
    Pause__21TimeWindowAndPauseBar(this->m_pTimeNMoneyWin);
  }
  return;
}

void EPanel::_Mess_pause_end(void *p, u32 _Messid) {
	Family *pFam;
	int id;
	ESimsCursor *this;
	
  long lVar1;
  int *piVar2;
  long lVar3;
  
                    /* inlined from /eor/src2/engine/particle/e_particleemit.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/particle/e_particleemit.h */
  __14EIParticleEmit_m_allEnabled = 1;
                    /* end of inlined section */
  if (_5Globs_pHouse == (House *)0x0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (*(code *)_5Globs_pHouse->__vtable->EnterLiveMode)
                      ((int)&_5Globs_pHouse->__vtable +
                       (int)*(short *)&_5Globs_pHouse->__vtable->DoStream,_5Globs_pHouse,_Messid);
  }
  lVar3 = -1;
  if (lVar1 != 0) {
    piVar2 = (int *)lVar1;
    lVar1 = (**(code **)(*piVar2 + 0x1c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x18));
    if (lVar1 != 0) {
      lVar3 = (**(code **)(*piVar2 + 0x74))((int)piVar2 + (int)*(short *)(*piVar2 + 0x70));
    }
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
                    /* end of inlined section */
  if ((lVar3 != -1) && (_globals._pCursor[0]->m_pCursorObject == (cXCursorObject__152_1098 *)0x0)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pHouse->__vtable[1].GetHouseStats)
              ((int)&_5Globs_pHouse->__vtable +
               (int)*(short *)&_5Globs_pHouse->__vtable[1].SetDescription);
    GlobalDispatch__Fsi(0x90,0);
    EnableLightMaps__6EHouseb((EHouse__2_990 *)_globals._pCurHouse,true);
    lVar1 = (*(code *)(_globals.m_pDialog)->__vtable[1].SetParams)
                      ((int)&(_globals.m_pDialog)->m_retcode +
                       (int)*(short *)&(_globals.m_pDialog)->__vtable[1].EDialog);
    if (lVar1 == 0) {
      SetState__6EPaneliQ213Panelstateman10Panelstate(this,0,LIVE_DEFAULT_STATE);
      SetState__6EPaneliQ213Panelstateman10Panelstate(this,1,LIVE_DEFAULT_STATE);
    }
    else {
      SetState__6EPaneliQ213Panelstateman10Panelstate(this,0,LIVE_DIALOG_STATE);
      SetState__6EPaneliQ213Panelstateman10Panelstate(this,1,LIVE_DIALOG_STATE);
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pSimulator->__vtable->SetTimeOfDay)
              ((int)&_5Globs_pSimulator->__vtable +
               (int)*(short *)&_5Globs_pSimulator->__vtable->GetTimeOfDay,0);
    UnPause__21TimeWindowAndPauseBar(this->m_pTimeNMoneyWin);
  }
  return;
}

void EPanel::_Mess_pause_cursor_begin(void *p, u32 _Messid) {
  SetState__6EPaneliQ213Panelstateman10Panelstate(this,0,PAUSED_CURSOR_STATE);
  SetState__6EPaneliQ213Panelstateman10Panelstate(this,1,PAUSED_CURSOR_STATE);
  return;
}

void EPanel::_Mess_pause_cursor_end(void *p, u32 _Messid) {
  SetState__6EPaneliQ213Panelstateman10Panelstate(this,0,PAUSED_PANEL_STATE);
  SetState__6EPaneliQ213Panelstateman10Panelstate(this,1,PAUSED_PANEL_STATE);
  return;
}

void EPanel::_Mess_language_change(void *p, u32 _Messid) {
  Panelstateman__vtable *pPVar1;
  Panelstateman *pPVar2;
  
  SetEvent__11EPausePanelQ213Panelstateman10PanelEventUi
            ((EPausePanel__69_3945 *)&this->m_pausePanel,LANG_EVENT,0);
  pPVar1 = (this->m_pTimeNMoneyWin->field0_0x0).__vtable;
  (*(code *)pPVar1[1].SetEvent)
            ((int)this->m_pTimeNMoneyWin->m_pPause_Speed_Indicators +
             *(short *)&pPVar1[1].SetState + -0xc,0,0);
  if (this->m_pDpadWins[0] != (DPadWin__3_4779 *)0x0) {
    pPVar1 = (this->m_pCameras[0]->field0_0x0).__vtable;
    (*(code *)pPVar1[1].SetEvent)
              ((int)&(this->m_pCameras[0]->field0_0x0).m_state + (int)*(short *)&pPVar1[1].SetState,
               0,0);
    pPVar2 = this->m_pDpadWins[0]->_vb1676;
    pPVar1 = pPVar2->__vtable;
    (*(code *)pPVar1[1].SetEvent)((int)&pPVar2->m_state + (int)*(short *)&pPVar1[1].SetState,0,0);
    pPVar2 = this->m_pCursors[0]->_vb1676;
    pPVar1 = pPVar2->__vtable;
    (*(code *)pPVar1[1].SetEvent)((int)&pPVar2->m_state + (int)*(short *)&pPVar1[1].SetState,0,0);
    pPVar2 = this->m_pInfoWindows[0]->_vb1676;
    pPVar1 = pPVar2->__vtable;
    (*(code *)pPVar1[1].SetEvent)((int)&pPVar2->m_state + (int)*(short *)&pPVar1[1].SetState,0,0);
    pPVar2 = this->m_pActionQueues[0]->_vb2090;
    pPVar1 = pPVar2->__vtable;
    (*(code *)pPVar1[1].SetEvent)((int)&pPVar2->m_state + (int)*(short *)&pPVar1[1].SetState,0,0);
  }
  if (this->m_pDpadWins[1] != (DPadWin__3_4779 *)0x0) {
    pPVar1 = (this->m_pCameras[1]->field0_0x0).__vtable;
    (*(code *)pPVar1[1].SetEvent)
              ((int)&(this->m_pCameras[1]->field0_0x0).m_state + (int)*(short *)&pPVar1[1].SetState,
               0,0);
    pPVar2 = this->m_pDpadWins[1]->_vb1676;
    pPVar1 = pPVar2->__vtable;
    (*(code *)pPVar1[1].SetEvent)((int)&pPVar2->m_state + (int)*(short *)&pPVar1[1].SetState,0,0);
    pPVar2 = this->m_pCursors[1]->_vb1676;
    pPVar1 = pPVar2->__vtable;
    (*(code *)pPVar1[1].SetEvent)((int)&pPVar2->m_state + (int)*(short *)&pPVar1[1].SetState,0,0);
    pPVar2 = this->m_pInfoWindows[1]->_vb1676;
    pPVar1 = pPVar2->__vtable;
    (*(code *)pPVar1[1].SetEvent)((int)&pPVar2->m_state + (int)*(short *)&pPVar1[1].SetState,0,0);
    pPVar2 = this->m_pActionQueues[1]->_vb2090;
    pPVar1 = pPVar2->__vtable;
    (*(code *)pPVar1[1].SetEvent)((int)&pPVar2->m_state + (int)*(short *)&pPVar1[1].SetState,0,0);
  }
  return;
}

void EPanel::_Mess_cmdObjectLightingChanged(void *p, u32 _Messid) {
	TimeOfDay stod;
	
  TimeOfDay TVar1;
  bool bVar2;
  TimeOfDay TVar3;
  
  bVar2 = IsChallangeMode__7EGlobal(&_globals);
  if (!bVar2) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    TVar3 = (*(code *)_5Globs_pSimulator->__vtable[1].DoStream)
                      ((int)&_5Globs_pSimulator->__vtable +
                       (int)*(short *)&_5Globs_pSimulator->__vtable[1].DoCommand);
    if (TVar3 == kTimeOfDay_Night) {
      TVar1 = this->m_tod;
    }
    else {
      if (TVar3 != kTimeOfDay_Day) {
        this->m_tod = TVar3;
        return;
      }
      TVar1 = this->m_tod;
    }
    if (TVar1 == TVar3) {
      this->m_tod = TVar3;
    }
    else {
      ForceFullLMCompute__6EHouse((EHouse__2_990 *)_globals._pCurHouse);
      this->m_tod = TVar3;
    }
  }
  return;
}

void EPanel::_Mess_cmdRoomLightingChanged(void *p, u32 _Messid) {
  return;
}

void EPanel::_Mess_sim_edit_begin(void *p, u32 _Messid) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pSimulator->__vtable->Spend)
            ((int)&_5Globs_pSimulator->__vtable +
             (int)*(short *)&_5Globs_pSimulator->__vtable->GetFunds,_5Globs_pSimulator,_Messid);
  SetState__6EPaneliQ213Panelstateman10Panelstate(this,0,LIVE_SIM_EDIT);
  SetState__6EPaneliQ213Panelstateman10Panelstate(this,1,LIVE_SIM_EDIT);
  _globals.m_whichPlayerPaused = 0;
  return;
}

void EPanel::_Mess_sim_edit_end(void *p, u32 _Messid) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pSimulator->__vtable->GetPreviousExpenses)
            ((int)&_5Globs_pSimulator->__vtable +
             (int)*(short *)&_5Globs_pSimulator->__vtable->GetTodaysExpenses,_5Globs_pSimulator,
             _Messid);
  SetState__6EPaneliQ213Panelstateman10Panelstate(this,0,LIVE_DEFAULT_STATE);
  SetState__6EPaneliQ213Panelstateman10Panelstate(this,1,LIVE_DEFAULT_STATE);
  return;
}

void EPanel::_Mess_scratch_mem_init_end(void *p, u32 _Messid) {
	Panelstate state;
	
  if (_globals._pCurHouse != (EHouse__26_3190 *)0x0) {
    ReCalcHouse__6EHouse((EHouse__2_990 *)_globals._pCurHouse);
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
                    /* end of inlined section */
    if (this->m_panleState + ~LIVE_SIM_EDIT < 2) {
      EnableLightMaps__6EHouseb((EHouse__2_990 *)_globals._pCurHouse,false);
    }
    else {
      EnableLightMaps__6EHouseb((EHouse__2_990 *)_globals._pCurHouse,true);
    }
  }
  return;
}

void EPanel::_Mess_pip_called(void *p, u32 _Messid) {
  if (this->m_pTimeNMoneyWin != (TimeWindowAndPauseBar *)0x0) {
    HandlePipEvent__21TimeWindowAndPauseBar(this->m_pTimeNMoneyWin);
  }
  return;
}

void EPanel::_Mess_player_2_quit(void *p, u32 _Messid) {
  int iVar1;
  
  _globals._pSelectedSims[1] = (cXPerson__150_1300 *)0x0;
  SetSelectedPerson__7EGlobalUiP8cXPersonb(&_globals,1,(cXPerson__47_985 *)0x0,false);
  TurnOffAllHighlights__11EIObjectManUi((_globals._pCurHouse)->m_pObjectMan,1);
  iVar1 = *(int *)&this->m_pActionQueues[0]->field_0x38;
  (**(code **)(iVar1 + 0x9c))
            ((int)&(this->m_pActionQueues[0]->field0_0x0).m_state + (int)*(short *)(iVar1 + 0x98),1,
             1,1);
  *(undefined4 *)&this->m_b2playerReadyToQuit = 1;
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

void EPanel::~EPanel(int __in_chrg) {
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_6EPanel;
  Reset__6EPanel(this);
  ___15EMemoryMeterWin(&this->m_MemoryMeterWin,2);
  ___11EPausePanel((EPausePanel__69_3945 *)&this->m_pausePanel,2);
  ___13EUIObjectNode(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
    __dl__6EPanelPv(this);
  }
  return;
}

void* EPanel::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _memmanAlloc__FUiUi(size,0x10);
  return pvVar1;
}

void EPanel::operator delete(void *p) {
  _memmanFree__FPv(p);
  return;
}

ESimsCam* EPanel::GetCam(int which) {
  return this->m_pCameras[which];
}

Panelstate EPanel::GetState() {
  return this->m_panleState;
}

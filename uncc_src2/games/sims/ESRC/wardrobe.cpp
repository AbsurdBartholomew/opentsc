// STATUS: NOT STARTED

#include "wardrobe.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb2464;
	__vtbl_ptr_type *$vf2528;
	
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
	cXObject *$vb2528;
	static Int kSimTicksPerMotiveTick;
	__vtbl_ptr_type *$vf1945;
	
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
struct SimInfoWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb3960;
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

__vtbl_ptr_type EWardrobeMenu virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EWardrobeMenu::~EWardrobeMenu,
		/* .__delta2 = */ -18256
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::Update,
		/* .__delta2 = */ 2272
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EWardrobeMenu::Draw,
		/* .__delta2 = */ -14448
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
		/* .__pfn = */ &EWardrobeMenu::Message,
		/* .__delta2 = */ -10056
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

__vtbl_ptr_type EUIIconDef virtual table[3] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIIconDef::~EUIIconDef,
		/* .__delta2 = */ -25888
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EWardrobeMenu* EWardrobeMenu::EWardrobeMenu(ESim *pPerson, ISimInstance *pObj, u32 nWhichController) {
	EVec3 vPos;
	
  undefined *puVar1;
  EUITextIconDef *pEVar2;
  EFontAlignY *pEVar3;
  uint *puVar4;
  EUIIconDef *pEVar5;
  int *piVar6;
  EUIVirtualCtrl **ppEVar7;
  uint uVar8;
  ulong *puVar9;
  EUIIconDef *iconDef;
  EUITextIconDef *textDef;
  EUIStaticTextIcon *this_00;
  ECharedTextMenuItem *this_01;
  undefined8 unaff_s0;
  EUIIcon *this_02;
  undefined8 unaff_s1;
  int iVar10;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  EUIIconDef local_1b0;
  uint local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  EVec3 vPos;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  EUITextIconDef local_150;
  EUIIconDef local_130;
  EUIIconDef__vtable *local_110;
  ESim *local_100;
  ISimInstance *local_fc;
  uint local_f8;
  ECharedTextMenuItem *local_f4;
  EUIIconDef *local_f0;
  EVec3 *local_ec;
  EAnimController *local_e8;
  EPromptBar *local_e4;
  EUITextIconDef *local_e0;
  uint local_d0;
  undefined4 uStack_cc;
  int local_c0;
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
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  iVar10 = 3;
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_100 = pPerson;
  local_fc = pObj;
  local_f8 = nWhichController;
  __13EUIObjectNode(&this->field0_0x0);
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_13EWardrobeMenu;
  __15CustomCharacter(&this->m_originalCharacter);
  local_ec = (EVec3 *)&local_160;
  local_e0 = &local_150;
  local_f0 = &local_130;
                    /* end of inlined section */
  this_02 = this->m_dpadIcons;
  do {
    local_1b0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_1b0.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_1b0.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_1b0.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_1b0.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_1b0.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
    __7EUIIconG10EUIIconDefiii(this_02,&local_1b0,0,0,0x40);
    iVar10 = iVar10 + -1;
    this_02 = this_02 + 1;
  } while (iVar10 != -1);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1b0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1b0.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1b0.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1b0.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1b0.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1b0.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
  __7EUIIconG10EUIIconDefiii(&this->m_XIcon,&local_1b0,0,0,0x40);
  textDef = local_e0;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1b0.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1b0.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1b0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1b0.m_flags = 0;
  local_1b0.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1b0.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
  this_00 = (EUIStaticTextIcon *)this->m_Prompts;
  iVar10 = 1;
  __7EUIIconG10EUIIconDefiii(&this->m_TriIcon,&local_1b0,0,0,0x40);
  iconDef = local_f0;
  local_e4 = &this->m_PromptBar;
  local_f4 = this->m_pBodyMenuItems;
  local_e8 = &this->m_ac;
  local_c0 = 0x40;
  uStack_bc = 0;
  local_d0 = 0x20;
  uStack_cc = 0;
  do {
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_1b0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_1b0.m_flags = 0;
    local_1b0.m_selColorIdx = 0;
                    /* end of inlined section */
    iVar10 = iVar10 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_1b0.m_colorIdx = 1;
    local_1b0.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_18c = 0;
    local_188 = 0;
    local_184 = 0x41400000;
    local_180 = 0;
    local_17c = 1;
    local_178 = CONCAT22(local_178._2_2_,0xffff);
    vPos.field0_0x0.d[2] = 0.0;
    vPos.field0_0x0.d[1] = 0.0;
    vPos.field0_0x0.d[0] = 0.0;
    local_158 = 0;
    local_15c = 0;
    local_160 = 0;
    local_150.m_xAlign = E_FAX_LEFT;
    local_150.m_yAlign = E_FAY_TOP;
    textDef->m_pointsize = 12.0;
    local_150.m_selColorIdx = 0;
    textDef->m_colorIdx = 1;
    local_150.m_retChar = -1;
    local_130.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_130.m_flags = 0;
    iconDef->m_trigger = local_c0;
    local_130.m_selColorIdx = 0;
    iconDef->m_colorIdx = 1;
    local_130.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_1b0.m_trigger = local_c0;
    local_190 = local_d0;
    local_150.m_maxChars = local_d0;
    __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
              (this_00,textDef,iconDef,-1,local_ec);
    this_01 = local_f4;
    local_130.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    (this_00->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).m_textdef.m_xAlign + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_18c,local_190) >> (7 - uVar8) * 8;
    pEVar2 = &(this_00->field0_0x0).m_textdef;
    uVar8 = (uint)pEVar2 & 7;
    puVar9 = (ulong *)((int)pEVar2 - uVar8);
    *puVar9 = CONCAT44(local_18c,local_190) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).m_textdef.m_pointsize + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_184,local_188) >> (7 - uVar8) * 8;
    pEVar3 = &(this_00->field0_0x0).m_textdef.m_yAlign;
    uVar8 = (uint)pEVar3 & 7;
    puVar9 = (ulong *)((int)pEVar3 - uVar8);
    *puVar9 = CONCAT44(local_184,local_188) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).m_textdef.m_colorIdx + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_17c,local_180) >> (7 - uVar8) * 8;
    puVar4 = &(this_00->field0_0x0).m_textdef.m_selColorIdx;
    uVar8 = (uint)puVar4 & 7;
    puVar9 = (ulong *)((int)puVar4 - uVar8);
    *puVar9 = CONCAT44(local_17c,local_180) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    *(undefined4 *)&(this_00->field0_0x0).m_textdef.m_retChar = local_178;
    local_110 = (this_00->field0_0x0).field0_0x0.m_def.__vtable;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).field0_0x0.m_def.m_trigger + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 |
              CONCAT44(local_1b0.m_trigger,local_1b0.m_flags) >> (7 - uVar8) * 8;
    pEVar5 = &(this_00->field0_0x0).field0_0x0.m_def;
    uVar8 = (uint)pEVar5 & 7;
    puVar9 = (ulong *)((int)pEVar5 - uVar8);
    *puVar9 = CONCAT44(local_1b0.m_trigger,local_1b0.m_flags) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 |
              CONCAT44(local_1b0.m_colorIdx,local_1b0.m_selColorIdx) >> (7 - uVar8) * 8;
    piVar6 = &(this_00->field0_0x0).field0_0x0.m_def.m_selColorIdx;
    uVar8 = (uint)piVar6 & 7;
    puVar9 = (ulong *)((int)piVar6 - uVar8);
    *puVar9 = CONCAT44(local_1b0.m_colorIdx,local_1b0.m_selColorIdx) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).field0_0x0.m_def.__vtable + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 |
              CONCAT44(local_1b0.__vtable,local_1b0.m_pCtrl) >> (7 - uVar8) * 8;
    ppEVar7 = &(this_00->field0_0x0).field0_0x0.m_def.m_pCtrl;
    uVar8 = (uint)ppEVar7 & 7;
    puVar9 = (ulong *)((int)ppEVar7 - uVar8);
    *puVar9 = CONCAT44(local_1b0.__vtable,local_1b0.m_pCtrl) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    (this_00->field0_0x0).field0_0x0.m_def.__vtable = local_110;
    this_00[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    this_00[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
    this_00 = (EUIStaticTextIcon *)&this_00[1].field0_0x0.field0_0x0.field0_0x0.m_id;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_1b0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
  } while (iVar10 != -1);
  iVar10 = 5;
  __10EPromptBar(local_e4);
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedmenuitems.h */
  do {
    iVar10 = iVar10 + -1;
    __13EUIObjectNode(&this_01->field0_0x0);
    (this_01->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_19ECharedTextMenuItem;
    Init__19ECharedTextMenuItem(this_01);
                    /* end of inlined section */
    this_01 = this_01 + 1;
  } while (iVar10 != -1);
  __15EAnimController(local_e8);
  this->m_pMySim = (ESim *)0x0;
  this->m_pBlankShdr = (ERShader *)0x0;
  this->m_pCustomCharacter = (CustomCharacter *)0x0;
  this->m_pMirrorShdr = (ERShader *)0x0;
  this->m_pGlassModel = (ERModel *)0x0;
  Init__13EWardrobeMenuP4ESimP12ISimInstanceUi(this,local_100,local_fc,local_f8);
  return this;
}

void EWardrobeMenu::~EWardrobeMenu(int __in_chrg) {
	void *p;
	
  bool bVar1;
  EUIObjectNode__vtable *pEVar2;
  ECharedTextMenuItem *pEVar3;
  EUIPrompt *pEVar4;
  EUIIcon *pEVar5;
  
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_13EWardrobeMenu;
  CleanUp__13EWardrobeMenu(this);
  ___15EAnimController(&this->m_ac,2);
  if ((this != (EWardrobeMenu *)0xfffffa50) &&
     (this->m_pBodyMenuItems != (ECharedTextMenuItem *)&this->m_ac)) {
    for (pEVar3 = this->m_pBodyMenuItems + 5;
        (*(code *)(*(EUIObjectNode__vtable **)&pEVar3->field0_0x0)->Draw)
                  ((undefined *)
                   ((int)&(pEVar3->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                   (int)*(short *)&(*(EUIObjectNode__vtable **)&pEVar3->field0_0x0)->Update),0),
        this->m_pBodyMenuItems != pEVar3; pEVar3 = pEVar3 + -1) {
    }
  }
  ___10EPromptBar(&this->m_PromptBar,2);
  if ((this != (EWardrobeMenu *)0xfffffc70) &&
     (this->m_Prompts != (EUIPrompt *)&this->m_nNumPrompts)) {
    for (pEVar4 = this->m_Prompts + 1;
        pEVar2 = (pEVar4->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable,
        (*(code *)pEVar2->Draw)
                  ((int)(pEVar4->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                   *(short *)&pEVar2->Update + 4,0), this->m_Prompts != pEVar4; pEVar4 = pEVar4 + -1
        ) {
    }
  }
  ___7EUIIcon(&this->m_TriIcon,2);
  ___7EUIIcon(&this->m_XIcon,2);
  if ((this != (EWardrobeMenu *)0xffffff28) && (this->m_dpadIcons != &this->m_XIcon)) {
    pEVar5 = this->m_dpadIcons + 3;
    do {
      pEVar2 = (pEVar5->field0_0x0).__vtable;
      (*(code *)pEVar2->Draw)
                ((int)pEVar5->m_maxBackShdrSize[-0xc] + *(short *)&pEVar2->Update + 4,0);
      bVar1 = this->m_dpadIcons != pEVar5;
      pEVar5 = pEVar5 + -1;
    } while (bVar1);
  }
  ___13EUIObjectNode(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/wardrobe.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EWardrobeMenu::Init(ESim *pPerson, ISimInstance *pObj, u32 nWhichController) {
	int i;
	u16 *pShortName;
	float fTempWidth;
	float fNewWidth;
	EVec2 vTextSize;
	ESim *this;
	ESim *this;
	float x;
	float x;
	float x;
	float x;
	float x;
	float x;
	float x;
	EUIMenu *this;
	EUIMenu *this;
	EUIObjectNode *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	ESim *this;
	u32 userParam;
	
  undefined *puVar1;
  EUIIconDef *pEVar2;
  int *piVar3;
  EUIVirtualCtrl **ppEVar4;
  short sVar5;
  ESim *pEVar6;
  cXPerson__150_1300 *pcVar7;
  cXPerson__150_1300__vtable *pcVar8;
  EUIObjectNode__vtable *pEVar9;
  EUIIconDef__vtable *pEVar10;
  ulong *puVar11;
  char *pcVar12;
  EUIStaticTextIcon *pEVar13;
  bool bVar14;
  cXObject__56_2557 *pcVar15;
  ObjSelector *pOVar16;
  ELocString EVar17;
  ERShader *pEVar18;
  ERModel *pEVar19;
  ERFont *pEVar20;
  CustomCharacter *pCVar21;
  short *psVar22;
  EUIMenu *pEVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  short *psVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  uint uVar34;
  uint uVar35;
  ulong in_t2;
  ulong uVar36;
  ECharedTextMenuItem *pEVar37;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  int iVar38;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar39;
  float fVar40;
  EVec2 vTextSize;
  int local_140;
  __vtbl_ptr_type *local_13c;
  int local_130;
  int iStack_12c;
  int local_128;
  uint uStack_124;
  int local_120;
  __vtbl_ptr_type *local_11c;
  EUIIconDef__vtable *local_110;
  ECharedTextMenuItem *local_100;
  int *local_fc;
  int *local_f8;
  ECharedTextMenuItem *local_f4;
  EUIIcon *local_f0;
  short *local_ec;
  ECharedTextMenuItem *local_e8;
  EUIPrompt *local_e4;
  ECharedTextMenuItem *local_e0;
  ECharedTextMenuItem *local_dc;
  EUIIcon *local_d8;
  ECharedTextMenuItem *local_d4;
  ECharedTextMenuItem *local_d0;
  EUIPrompt *local_cc;
  EPromptBar *local_c8;
  EAnimController *local_c4;
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
  
  local_40 = (undefined4)unaff_s8;
  uStack_3c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_50 = (undefined4)unaff_s7;
  uStack_4c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_60 = (undefined4)unaff_s6;
  uStack_5c = (undefined4)((ulong)unaff_s6 >> 0x20);
  iVar38 = 0;
  local_70 = (undefined4)unaff_s5;
  uStack_6c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_80 = (undefined4)unaff_s4;
  uStack_7c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s3;
  uStack_8c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_a0 = (undefined4)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_b0 = (undefined4)unaff_s1;
  uStack_ac = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_c0 = (undefined4)unaff_s0;
  uStack_bc = (undefined4)((ulong)unaff_s0 >> 0x20);
  *(undefined4 *)&this->m_bExitMirror = 0;
  *(undefined4 *)&this->m_bSwitchCameraMode = 0;
  this->m_fTransitionTime = 0.0;
  this->m_nTransitionMode = '\0';
  this->m_pMySim = pPerson;
  this->m_nControllerID = nWhichController;
  this->m_pWorldObject = pObj;
  *(undefined4 *)&this->m_bReachedMidpoint = 1;
  *(undefined4 *)&this->m_bUpdateThumbnail = 1;
  pcVar15 = GetXOb__12ISimInstance(pObj);
  pOVar16 = (ObjSelector *)
            (*(code *)pcVar15->__vtable[1].SetLevel)
                      ((int)&pcVar15->_vb2602 + (int)*(short *)&pcVar15->__vtable[1].GetTreeID);
  pOVar16 = GetMasterSelector__11ObjSelector(pOVar16);
  EVar17 = GetCatalogShortName__11ObjSelector(pOVar16);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
  psVar22 = *EVar17.ptr;
                    /* end of inlined section */
  local_f8 = &local_130;
  local_fc = &local_140;
  sVar5 = *psVar22;
  this->m_szShortName[0] = sVar5;
  if (sVar5 != 0) {
    psVar27 = this->m_szShortName;
    do {
      iVar38 = iVar38 + 1;
      psVar27 = psVar27 + 1;
      psVar22 = psVar22 + 1;
      if (0x1f < iVar38) break;
      sVar5 = *psVar22;
      *psVar27 = sVar5;
    } while (sVar5 != 0);
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/esim.h */
  pEVar6 = this->m_pMySim;
  *(undefined4 *)&pEVar6->m_bUseVanityDraw = 1;
  pEVar6->m_nTypeOfObject = 2;
                    /* end of inlined section */
  this->m_szShortName[0x1f] = 0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar18 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xa25eba9a,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  this->m_pBlankShdr = pEVar18;
  pEVar18 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xab5fdccc,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
  this->m_pMirrorShdr = pEVar18;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
  pEVar19 = (ERModel *)
            AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,0x35bf373b,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
  this->m_pGlassModel = pEVar19;
  local_e0 = this->m_pBodyMenuItems;
  pEVar20 = (ERFont *)
            AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
  fVar40 = 0.0;
  this->m_pFont = pEVar20;
  local_100 = this->m_pBodyMenuItems + 2;
  local_ec = this->m_szShortName;
  local_d8 = &this->m_TriIcon;
  uVar33 = (ulong)(int)local_d8;
  local_f0 = &this->m_XIcon;
                    /* inlined from c:/eor/src2/games/sims/ESRC/esim.h */
                    /* end of inlined section */
  iVar38 = 5;
                    /* inlined from c:/eor/src2/games/sims/ESRC/esim.h */
  pcVar7 = this->m_pMySim->m_pPerson;
                    /* end of inlined section */
  pcVar8 = pcVar7->__vtable;
  uVar26 = (ulong)(int)pcVar8;
  local_f4 = this->m_pBodyMenuItems + 4;
  local_e8 = local_100;
  local_dc = this->m_pBodyMenuItems + 5;
  local_d4 = this->m_pBodyMenuItems + 3;
  local_d0 = this->m_pBodyMenuItems + 1;
  pCVar21 = (CustomCharacter *)
            (*(code *)pcVar8->GetRecordTicksElapsed)
                      ((int)&pcVar7->_vb1187 + (int)*(short *)&pcVar8->GetRecordCurTicks);
  local_cc = this->m_Prompts;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_pCustomCharacter = pCVar21;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  uVar24 = (uint)&pCVar21->field_0x7 & 7;
  uVar25 = (uint)pCVar21 & 7;
  uVar36 = (*(long *)(&pCVar21->field_0x7 + -uVar24) << (7 - uVar24) * 8 |
           in_t2 & 0xffffffffffffffffU >> (uVar24 + 1) * 8) & -1L << (8 - uVar25) * 8 |
           *(ulong *)((int)pCVar21 - uVar25) >> uVar25 * 8;
  uVar24 = (uint)&pCVar21->m_nFacialHairIndex & 7;
  uVar25 = (uint)&pCVar21->m_nBodyType & 7;
  uVar26 = (*(long *)(&pCVar21->m_nFacialHairIndex + -uVar24) << (7 - uVar24) * 8 |
           uVar26 & 0xffffffffffffffffU >> (uVar24 + 1) * 8) & -1L << (8 - uVar25) * 8 |
           *(ulong *)(&pCVar21->m_nBodyType + -uVar25) >> uVar25 * 8;
  uVar24 = (uint)&pCVar21->field_0x17 & 7;
  uVar25 = (uint)&pCVar21->m_nSkinColor & 7;
  uVar33 = (*(long *)(&pCVar21->field_0x17 + -uVar24) << (7 - uVar24) * 8 |
           uVar33 & 0xffffffffffffffffU >> (uVar24 + 1) * 8) & -1L << (8 - uVar25) * 8 |
           *(ulong *)(&pCVar21->m_nSkinColor + -uVar25) >> uVar25 * 8;
  puVar1 = &(this->m_originalCharacter).field_0x7;
  uVar24 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar24);
  *puVar11 = *puVar11 & -1L << (uVar24 + 1) * 8 | uVar36 >> (7 - uVar24) * 8;
  uVar24 = (uint)&this->m_originalCharacter & 7;
  puVar11 = (ulong *)((int)&this->m_originalCharacter - uVar24);
  *puVar11 = uVar36 << uVar24 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar24) * 8;
  pcVar12 = &(this->m_originalCharacter).m_nFacialHairIndex;
  uVar24 = (uint)pcVar12 & 7;
  pcVar12 = pcVar12 + -uVar24;
  *(ulong *)pcVar12 = *(ulong *)pcVar12 & -1L << (uVar24 + 1) * 8 | uVar26 >> (7 - uVar24) * 8;
  pcVar12 = &(this->m_originalCharacter).m_nBodyType;
  uVar24 = (uint)pcVar12 & 7;
  pcVar12 = pcVar12 + -uVar24;
  *(ulong *)pcVar12 =
       uVar26 << uVar24 * 8 | *(ulong *)pcVar12 & 0xffffffffffffffffU >> (8 - uVar24) * 8;
  puVar1 = &(this->m_originalCharacter).field_0x17;
  uVar24 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar24);
  *puVar11 = *puVar11 & -1L << (uVar24 + 1) * 8 | uVar33 >> (7 - uVar24) * 8;
  pcVar12 = &(this->m_originalCharacter).m_nSkinColor;
  uVar24 = (uint)pcVar12 & 7;
  pcVar12 = pcVar12 + -uVar24;
  *(ulong *)pcVar12 =
       uVar33 << uVar24 * 8 | *(ulong *)pcVar12 & 0xffffffffffffffffU >> (8 - uVar24) * 8;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar18 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x542a4dcf,(EFile *)0x0,0);
                    /* end of inlined section */
  local_e4 = this->m_Prompts + 1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  this->m_pMenuBevelShdr = pEVar18;
  pEVar18 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x4185128e,(EFile *)0x0,0);
                    /* end of inlined section */
  local_c8 = &this->m_PromptBar;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  this->m_pMenuBevelBottomShdr = pEVar18;
  pEVar18 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x2d14ac7d,(EFile *)0x0,0);
                    /* end of inlined section */
  local_c4 = &this->m_ac;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  this->m_pDPadBackgroundShdr = pEVar18;
  pEVar18 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xc9ff8b99,(EFile *)0x0,0);
  pEVar37 = local_e0;
                    /* end of inlined section */
  this->m_pSideMenuCurveShdr = pEVar18;
  psVar22 = GetCreateASimString__7EGlobalPCc(&_globals,"upper body");
  SetText__19ECharedTextMenuItemPCUs(this->m_pBodyMenuItems,psVar22);
  psVar22 = GetCreateASimString__7EGlobalPCc(&_globals,"upper color");
  SetText__19ECharedTextMenuItemPCUs(this->m_pBodyMenuItems + 1,psVar22);
  psVar22 = GetCreateASimString__7EGlobalPCc(&_globals,"lower body");
  SetText__19ECharedTextMenuItemPCUs(local_100,psVar22);
  psVar22 = GetCreateASimString__7EGlobalPCc(&_globals,"lower color");
  SetText__19ECharedTextMenuItemPCUs(this->m_pBodyMenuItems + 3,psVar22);
  psVar22 = GetCreateASimString__7EGlobalPCc(&_globals,"shoe");
  SetText__19ECharedTextMenuItemPCUs(this->m_pBodyMenuItems + 4,psVar22);
  psVar22 = GetCreateASimString__7EGlobalPCc(&_globals,"shoe color");
  SetText__19ECharedTextMenuItemPCUs(this->m_pBodyMenuItems + 5,psVar22);
  do {
    fVar39 = GetWidth__19ECharedTextMenuItem(pEVar37);
    if (fVar40 < fVar39) {
      fVar40 = fVar39;
    }
    iVar38 = iVar38 + -1;
    pEVar37 = pEVar37 + 1;
  } while (-1 < iVar38);
  pEVar9 = this->m_pBodyMenuItems[0].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  iVar38 = 5;
  local_13c = (__vtbl_ptr_type *)0x0;
  this->m_fBodyMenuWidth = fVar40 + 0.056;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vTextSize.field0_0x0.d[1] = 0.025;
                    /* end of inlined section */
  vTextSize.field0_0x0.d[0] = fVar40;
  (*(code *)pEVar9->RemoveChild)
            ((int)&(local_e0->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar9->AddChild,&vTextSize);
  pEVar9 = this->m_pBodyMenuItems[1].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vTextSize.field0_0x0.d[1] = 0.044;
                    /* end of inlined section */
  vTextSize.field0_0x0.d[0] = fVar40;
  (*(code *)pEVar9->RemoveChild)
            ((int)&(local_d0->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar9->AddChild,&vTextSize);
  pEVar9 = this->m_pBodyMenuItems[2].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vTextSize.field0_0x0.d[1] = 0.025;
                    /* end of inlined section */
  vTextSize.field0_0x0.d[0] = fVar40;
  (*(code *)pEVar9->RemoveChild)
            ((int)&(local_e8->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar9->AddChild,&vTextSize);
  pEVar9 = this->m_pBodyMenuItems[3].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vTextSize.field0_0x0.d[1] = 0.044;
                    /* end of inlined section */
  vTextSize.field0_0x0.d[0] = fVar40;
  (*(code *)pEVar9->RemoveChild)
            ((int)&(local_d4->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar9->AddChild,&vTextSize);
  pEVar9 = this->m_pBodyMenuItems[4].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vTextSize.field0_0x0.d[1] = 0.025;
                    /* end of inlined section */
  vTextSize.field0_0x0.d[0] = fVar40;
  (*(code *)pEVar9->RemoveChild)
            ((int)&(local_f4->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar9->AddChild,&vTextSize);
  pEVar9 = this->m_pBodyMenuItems[5].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vTextSize.field0_0x0.d[1] = 0.048;
                    /* end of inlined section */
  vTextSize.field0_0x0.d[0] = fVar40;
  (*(code *)pEVar9->RemoveChild)
            ((int)&(local_dc->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar9->AddChild,&vTextSize);
  pEVar23 = (EUIMenu *)__builtin_new(0x98);
  pEVar23 = __7EUIMenuiifff(pEVar23,-1,0,0.05,(float)local_13c,(float)local_13c);
  this->m_pMenu = pEVar23;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  pEVar9 = (pEVar23->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  sVar5 = *(short *)&pEVar9->StateChanged;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_140 = 0x3d8b4396;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_fc[2] = 0x3e78d4fe;
                    /* end of inlined section */
  (*(code *)pEVar9->OnButtonRepeat)((int)pEVar23->m_maxBackShdrSize + sVar5 + -0x44);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  pEVar9 = (this->m_pMenu->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vTextSize.field0_0x0.d[1] = 0.5;
                    /* end of inlined section */
  vTextSize.field0_0x0.d[0] = fVar40;
  (*(code *)pEVar9->RemoveChild)
            ((int)this->m_pMenu->m_maxBackShdrSize + *(short *)&pEVar9->AddChild + -0x44,&vTextSize)
  ;
  pEVar9 = (this->m_pMenu->field0_0x0).__vtable;
  (*(code *)pEVar9[2].RemoveChild)
            ((int)this->m_pMenu->m_maxBackShdrSize + *(short *)&pEVar9[2].AddChild + -0x44,4);
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
  pEVar23 = this->m_pMenu;
  pEVar9 = (pEVar23->field0_0x0).__vtable;
  pEVar23->m_optgap = 0.02;
  (*(code *)pEVar9[2].Message)
            ((int)pEVar23->m_maxBackShdrSize + *(short *)&pEVar9[2].SetBoxDims + -0x44);
  pEVar23 = this->m_pMenu;
  pEVar9 = (pEVar23->field0_0x0).__vtable;
  pEVar23->m_yoff = -0.01;
  (*(code *)pEVar9[2].Message)
            ((int)pEVar23->m_maxBackShdrSize + *(short *)&pEVar9[2].SetBoxDims + -0x44);
                    /* end of inlined section */
  pEVar9 = (this->m_pMenu->field0_0x0).__vtable;
  (*(code *)pEVar9[2].GetPos)
            ((int)this->m_pMenu->m_maxBackShdrSize + *(short *)&pEVar9[2].OnStickRepeat + -0x44,0,0,
             0);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_pMenu->field0_0x0).m_id = 3;
  local_e0->m_nNextMessage = 8;
  local_e0->m_nPrevMessage = 9;
  local_d0->m_nNextMessage = 0x1c;
  local_d0->m_nPrevMessage = 0x1d;
  local_e8->m_nNextMessage = 10;
  local_e8->m_nPrevMessage = 0xb;
  local_d4->m_nNextMessage = 0x1e;
  local_d4->m_nPrevMessage = 0x1f;
  local_f4->m_nPrevMessage = 0xd;
  local_f4->m_nNextMessage = 0xc;
  local_dc->m_nNextMessage = 0x20;
  local_dc->m_nPrevMessage = 0x21;
  local_e0->m_nCameraMessage = 0x2a;
  local_d0->m_nCameraMessage = 0x2a;
  local_e8->m_nCameraMessage = 0x2a;
  local_d4->m_nCameraMessage = 0x2a;
  local_f4->m_nCameraMessage = 0x2b;
  local_dc->m_nCameraMessage = 0x2b;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pEVar37 = this->m_pBodyMenuItems;
  do {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vTextSize.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vTextSize.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
    iVar38 = iVar38 + -1;
    pEVar9 = (this->m_pMenu->field0_0x0).__vtable;
    (*(code *)pEVar9[2].SetBoxDims)
              ((int)this->m_pMenu->m_maxBackShdrSize + *(short *)&pEVar9[2].SetPos + -0x44,pEVar37,
               &vTextSize);
    pEVar37 = pEVar37 + 1;
  } while (-1 < iVar38);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  SetActiveController__13EUIObjectNodeUi(&this->m_pMenu->field0_0x0,this->m_nControllerID);
  pEVar9 = (this->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar40 = 0.05;
                    /* end of inlined section */
  (*(code *)pEVar9[1].GetPos)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar9[1].OnStickRepeat,this->m_pMenu);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  this->m_nNumPrompts = 2;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_130 = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_f8[1] = -1;
  local_128 = 0;
  pEVar10 = (local_f0->m_def).__vtable;
  local_f8[3] = 1;
  local_120 = 0;
  puVar1 = (undefined *)((int)&(this->m_XIcon).m_def.m_trigger + 3);
  uVar24 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar24);
  *puVar11 = *puVar11 & -1L << (uVar24 + 1) * 8 | CONCAT44(iStack_12c,1) >> (7 - uVar24) * 8;
  pEVar2 = &(this->m_XIcon).m_def;
  uVar24 = (uint)pEVar2 & 7;
  puVar11 = (ulong *)((int)pEVar2 - uVar24);
  *puVar11 = CONCAT44(iStack_12c,1) << uVar24 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar24) * 8;
  puVar1 = (undefined *)((int)&(this->m_XIcon).m_def.m_colorIdx + 3);
  uVar24 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar24);
  *puVar11 = *puVar11 & -1L << (uVar24 + 1) * 8 | ((ulong)uStack_124 << 0x20) >> (7 - uVar24) * 8;
  piVar3 = &(this->m_XIcon).m_def.m_selColorIdx;
  uVar24 = (uint)piVar3 & 7;
  puVar11 = (ulong *)((int)piVar3 - uVar24);
  *puVar11 = ((ulong)uStack_124 << 0x20) << uVar24 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar24) * 8;
  puVar1 = (undefined *)((int)&(this->m_XIcon).m_def.__vtable + 3);
  uVar24 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar24);
  *puVar11 = *puVar11 & -1L << (uVar24 + 1) * 8 | 0x3a890800000000U >> (7 - uVar24) * 8;
  ppEVar4 = &(this->m_XIcon).m_def.m_pCtrl;
  uVar24 = (uint)ppEVar4 & 7;
  puVar11 = (ulong *)((int)ppEVar4 - uVar24);
  *puVar11 = 0x3a890800000000 << uVar24 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar24) * 8;
  (local_f0->m_def).__vtable = pEVar10;
  local_11c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar38 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon).field0_0x0.m_WDH.field0_0x0.d[0] = fVar40;
                    /* end of inlined section */
  vTextSize.field0_0x0.d[1] = 32.0 / (float)iVar38;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon).field0_0x0.m_WDH.field0_0x0.d[2] = vTextSize.field0_0x0.d[1];
  vTextSize.field0_0x0.d[0] = fVar40;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_f0,-0x3e263a13);
  InitInActiveShader__7EUIIconi(local_f0,-0x3e263a13);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_110 = (local_d8->m_def).__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_140 = 0;
  puVar1 = (undefined *)((int)&(this->m_TriIcon).m_def.m_trigger + 3);
  uVar24 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar24);
  *puVar11 = *puVar11 & -1L << (uVar24 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar24) * 8;
  pEVar2 = &(this->m_TriIcon).m_def;
  uVar24 = (uint)pEVar2 & 7;
  puVar11 = (ulong *)((int)pEVar2 - uVar24);
  *puVar11 = -0xffffffff << uVar24 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar24) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon).m_def.m_colorIdx + 3);
  uVar24 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar24);
  *puVar11 = *puVar11 & -1L << (uVar24 + 1) * 8 | 0x100000000U >> (7 - uVar24) * 8;
  piVar3 = &(this->m_TriIcon).m_def.m_selColorIdx;
  uVar24 = (uint)piVar3 & 7;
  puVar11 = (ulong *)((int)piVar3 - uVar24);
  *puVar11 = 0x100000000 << uVar24 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar24) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon).m_def.__vtable + 3);
  uVar24 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar24);
  *puVar11 = *puVar11 & -1L << (uVar24 + 1) * 8 | 0x3a890800000000U >> (7 - uVar24) * 8;
  ppEVar4 = &(this->m_TriIcon).m_def.m_pCtrl;
  uVar24 = (uint)ppEVar4 & 7;
  puVar11 = (ulong *)((int)ppEVar4 - uVar24);
  *puVar11 = 0x3a890800000000 << uVar24 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar24) * 8;
  local_13c = _vt_10EUIIconDef;
  (local_d8->m_def).__vtable = local_110;
                    /* end of inlined section */
  iVar38 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon).field0_0x0.m_WDH.field0_0x0.d[0] = fVar40;
                    /* end of inlined section */
  vTextSize.field0_0x0.d[1] = 32.0 / (float)iVar38;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon).field0_0x0.m_WDH.field0_0x0.d[2] = vTextSize.field0_0x0.d[1];
  vTextSize.field0_0x0.d[0] = fVar40;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_d8,0x2ccf500a);
  InitInActiveShader__7EUIIconi(local_d8,0x2ccf500a);
  pEVar9 = this->m_Prompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar9[2].StateChanged;
  pEVar13 = &local_cc->field0_0x0;
  psVar22 = GetCreateASimString__7EGlobalPCc(&_globals,"accept");
  (*(code *)pEVar9[2].OnButtonRepeat)
            ((int)(pEVar13->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar22,0x20)
  ;
  AddIcon__9EUIPromptP7EUIIcon(local_cc,local_f0);
  pEVar9 = this->m_Prompts[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar9[2].StateChanged;
  pEVar13 = &local_e4->field0_0x0;
  psVar22 = GetCreateASimString__7EGlobalPCc(&_globals,"back");
  (*(code *)pEVar9[2].OnButtonRepeat)
            ((int)(pEVar13->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar22,0x20)
  ;
  AddIcon__9EUIPromptP7EUIIcon(local_e4,local_d8);
  Init__10EPromptBar(local_c8);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  vTextSize.field0_0x0.d[0] = (_13EUIObjectNode_SAFE_RIGHT + 0.178) * 0.5;
  vTextSize.field0_0x0.d[1] = _13EUIObjectNode_SAFE_BOTTOM - 23.0 / (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  Setup__10EPromptBarP9EUIPromptUiG5EVec2(local_c8,local_cc,this->m_nNumPrompts,&vTextSize);
  SetupDpadWin__13EWardrobeMenu(this);
  SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&vTextSize,this->m_pFont,SUB41(local_ec,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  this->m_fTitleWidth = vTextSize.field0_0x0.d[0] + 0.07;
  this->m_fTitleXPos = 0.5 - (vTextSize.field0_0x0.d[0] + 0.07) * 0.5;
  bVar14 = IsAdult__4ESim(this->m_pMySim);
  if (bVar14) {
    bVar14 = IsMale__4ESim(this->m_pMySim);
    if (bVar14) {
      Init__15EAnimControllerUi(local_c4,0xffa60350);
    }
    else {
      Init__15EAnimControllerUi(local_c4,0x1fb80af4);
    }
    uVar24 = 0x4356d2d4;
    uVar25 = 0xda5f836e;
    uVar28 = 0xad58b3f8;
    uVar29 = 0x333c265b;
    uVar30 = 0x443b16cd;
    uVar31 = 0xaa3577e1;
    uVar32 = 0x3a8a6a70;
    uVar34 = 0x4d8d5ae6;
    uVar35 = 0x75269f3e;
  }
  else {
    Init__15EAnimControllerUi(local_c4,0xd5e79699);
    uVar24 = 0x6da0fa52;
    uVar25 = 0xf4a9abe8;
    uVar28 = 0x83ae9b7e;
    uVar29 = 0x1dca0edd;
    uVar30 = 0x6acd3e4b;
    uVar31 = 0xf3c46ff1;
    uVar32 = 0x84c35f67;
    uVar34 = 0x147c42f6;
    uVar35 = 0x637b7260;
  }
  this->m_nIdleAnimationID[0] = uVar24;
  this->m_nIdleAnimationID[1] = uVar25;
  this->m_nIdleAnimationID[2] = uVar28;
  this->m_nIdleAnimationID[3] = uVar29;
  this->m_nIdleAnimationID[4] = uVar30;
  this->m_nIdleAnimationID[5] = uVar31;
  this->m_nIdleAnimationID[6] = uVar32;
  this->m_nIdleAnimationID[7] = uVar34;
  this->m_nIdleAnimationID[8] = uVar35;
                    /* inlined from c:/eor/src2/games/sims/ESRC/esim.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/esim.h */
  local_c4->m_modelScaler = this->m_pMySim->m_Models[2]->m_scaler;
                    /* end of inlined section */
  SetTrackAnim__15EAnimControlleriUi(local_c4,1,this->m_nIdleAnimationID[8]);
  SetGlobalSpeed__15EAnimControllerf(local_c4,1.15);
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
  local_c4->m_postComputeUserParam = (uint)this->m_pMySim;
  local_c4->m_pfnPostComputeCallback = ScaleBones__4ESimUiRC5EMat4P11ERCharacterP5EMat4;
                    /* end of inlined section */
  *(undefined4 *)&this->m_bMiddleAnim = 0;
  iVar38 = rand();
  this->m_nRepeatIdleCount = iVar38 % 5 + 3;
  return;
}

void EWardrobeMenu::CleanUp() {
	int i;
	ESim *this;
	
  EUIMenu *pEVar1;
  ESim *pEVar2;
  EUIObjectNode__vtable *pEVar3;
  ERShader *pEVar4;
  ERModel *this_00;
  EUIIcon *pEVar5;
  int iVar6;
  
  if (*(int *)&this->m_bUpdateThumbnail == 0) {
    pEVar3 = (this->field0_0x0).__vtable;
  }
  else {
    CreateThumbnail__4ESimb(this->m_pMySim,true);
    pEVar3 = (this->field0_0x0).__vtable;
  }
  (*(code *)pEVar3[1].RemoveChild)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar3[1].AddChild,this->m_pMenu);
  DelRef__9EResource(&this->m_pFont->field0_0x0);
  this->m_pFont = (ERFont *)0x0;
  if (this->m_pBlankShdr != (ERShader *)0x0) {
    iVar6 = 3;
    pEVar3 = (this->field0_0x0).__vtable;
    pEVar5 = this->m_dpadIcons;
    while( true ) {
      iVar6 = iVar6 + -1;
      (*(code *)pEVar3[1].RemoveChild)
                ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                 (int)*(short *)&pEVar3[1].AddChild,pEVar5);
      if (iVar6 < 0) break;
      pEVar3 = (this->field0_0x0).__vtable;
      pEVar5 = pEVar5 + 1;
    }
  }
  Reset__10EPromptBar(&this->m_PromptBar);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)this->m_Prompts);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)(this->m_Prompts + 1));
  while (this->m_pBlankShdr != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pBlankShdr->field0_0x0);
    this->m_pBlankShdr = (ERShader *)0x0;
  }
  pEVar4 = this->m_pMirrorShdr;
  while (pEVar4 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar4->field0_0x0);
    this->m_pMirrorShdr = (ERShader *)0x0;
    pEVar4 = this->m_pMirrorShdr;
  }
  pEVar4 = this->m_pMenuBevelShdr;
  while (pEVar4 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar4->field0_0x0);
    this->m_pMenuBevelShdr = (ERShader *)0x0;
    pEVar4 = this->m_pMenuBevelShdr;
  }
  pEVar4 = this->m_pMenuBevelBottomShdr;
  while (pEVar4 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar4->field0_0x0);
    this->m_pMenuBevelBottomShdr = (ERShader *)0x0;
    pEVar4 = this->m_pMenuBevelBottomShdr;
  }
  pEVar4 = this->m_pDPadBackgroundShdr;
  while (pEVar4 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar4->field0_0x0);
    this->m_pDPadBackgroundShdr = (ERShader *)0x0;
    pEVar4 = this->m_pDPadBackgroundShdr;
  }
  pEVar4 = this->m_pSideMenuCurveShdr;
  while (pEVar4 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar4->field0_0x0);
    this->m_pSideMenuCurveShdr = (ERShader *)0x0;
    pEVar4 = this->m_pSideMenuCurveShdr;
  }
  this_00 = this->m_pGlassModel;
  while (this_00 != (ERModel *)0x0) {
    DelRef__9EResource(&this_00->field0_0x0);
    this->m_pGlassModel = (ERModel *)0x0;
    this_00 = this->m_pGlassModel;
  }
  pEVar1 = this->m_pMenu;
  if (pEVar1 != (EUIMenu *)0x0) {
    pEVar3 = (pEVar1->field0_0x0).__vtable;
    (*(code *)pEVar3->Draw)((int)pEVar1->m_maxBackShdrSize + *(short *)&pEVar3->Update + -0x44,3);
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/esim.h */
  pEVar2 = this->m_pMySim;
                    /* end of inlined section */
  this->m_pMenu = (EUIMenu *)0x0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/esim.h */
  pEVar2->m_nTypeOfObject = 0;
  *(undefined4 *)&pEVar2->m_bUseVanityDraw = 0;
  return;
}

void EWardrobeMenu::Draw(ERC *prc) {
	ERFont *this;
	ERFont *this;
	ERC *prc;
	
  ERFont *pEVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  float fVar5;
  undefined4 uVar6;
  float _h;
  float alph;
  undefined local_150 [8];
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  undefined4 local_11c;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  undefined4 local_fc;
  float local_f0;
  undefined4 local_ec;
  float local_e0;
  undefined4 local_dc;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
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
  
  local_60 = (undefined4)unaff_s6;
  uStack_5c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s5;
  uStack_6c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_retaddr;
  uStack_4c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_80 = (undefined4)unaff_s4;
  uStack_7c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s3;
  uStack_8c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_a0 = (undefined4)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_b0 = (undefined4)unaff_s1;
  uStack_ac = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_c0 = (undefined4)unaff_s0;
  uStack_bc = (undefined4)((ulong)unaff_s0 >> 0x20);
  alph = 1.0;
  if (1.0 <= this->m_fTransitionTime) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    Select__8ERShaderP3ERCi(this->m_pBlankShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    uVar6 = 0x3f553f7d;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_150._0_4_ = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_150._4_4_ = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_13c = 0.113;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_130 = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_11c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    fVar5 = 0.055;
    local_140 = alph;
    local_12c = alph;
    local_120 = alph;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,local_150,
               (EVec2 *)&local_140,&local_130,&local_120,0x35f4b0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_150._0_4_ = 0.173;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_110 = 0.0;
    local_fc = 0;
                    /* end of inlined section */
    _h = 0.102;
    local_150._4_4_ = (float)uVar6;
    local_140 = alph;
    local_13c = alph;
    local_10c = alph;
    local_100 = alph;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,local_150,
               (EVec2 *)&local_140,&local_110,&local_100,0x35f4b0);
    local_140 = this->m_fBodyMenuWidth + fVar5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_150._0_4_ = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_150._4_4_ = 0.113;
    local_13c = 0.745;
    local_130 = 0.0;
    local_ec = 0;
                    /* end of inlined section */
    local_12c = alph;
    local_f0 = alph;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,local_150,
               (EVec2 *)&local_140,&local_130,&local_f0,0x35f4b0);
    local_140 = this->m_fBodyMenuWidth + fVar5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_150._0_4_ = 0.18;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_150._4_4_ = 0.745;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_130 = 0.0;
    local_dc = 0;
                    /* end of inlined section */
    local_13c = (float)uVar6;
    local_12c = alph;
    local_e0 = alph;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,local_150,
               (EVec2 *)&local_140,&local_130,&local_e0,0x35f4b0);
    Select__8ERShaderP3ERCi(this->m_pMenuBevelShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    local_150._0_4_ = this->m_fBodyMenuWidth + fVar5;
    local_140 = this->m_fBodyMenuWidth + 0.065;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_150._4_4_ = 0.113;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_130 = 0.0;
    local_11c = 0;
                    /* end of inlined section */
    local_13c = (float)uVar6;
    local_12c = alph;
    local_120 = alph;
    local_d0 = alph;
    local_cc = alph;
    local_c8 = alph;
    local_c4 = alph;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,local_150,
               (EVec2 *)&local_140,&local_130,&local_120,&local_d0);
    Select__8ERShaderP3ERCi(this->m_pMenuBevelBottomShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_150._4_4_ = 0.113;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_150._0_4_ = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_13c = 0.123;
    local_130 = 0.0;
    local_11c = 0;
                    /* end of inlined section */
    local_140 = alph;
    local_12c = alph;
    local_120 = alph;
    local_110 = alph;
    local_10c = alph;
    local_108 = alph;
    local_104 = alph;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,local_150,
               (EVec2 *)&local_140,&local_130,&local_120,&local_110);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_150._0_4_ = 0.179;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_13c = 0.843;
    local_130 = 0.0;
    local_11c = 0;
                    /* end of inlined section */
    local_150._4_4_ = (float)uVar6;
    local_140 = alph;
    local_12c = alph;
    local_120 = alph;
    local_110 = alph;
    local_10c = alph;
    local_108 = alph;
    local_104 = alph;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,local_150,
               (EVec2 *)&local_140,&local_130,&local_120,&local_110);
    DrawTextBox__10EDialogWinP3ERCffff(prc,this->m_fTitleXPos,0.038,this->m_fTitleWidth,alph);
    uVar4 = _WHITE.field0_0x0.d[3];
    uVar3 = _WHITE.field0_0x0.d[2];
    uVar2 = _WHITE.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    pEVar1 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    (pEVar1->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (pEVar1->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
    (pEVar1->m_vColor).field0_0x0.d[2] = uVar3;
    (pEVar1->m_vColor).field0_0x0.d[3] = uVar4;
                    /* end of inlined section */
    SetSize__6ERFontffb(this->m_pFont,16.0,alph,true);
    Select__6ERFontP3ERC(this->m_pFont,prc);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_140 = 0.5;
    local_13c = 0.07;
    local_150._0_4_ = 0.5;
    local_150._4_4_ = 0.07;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,this->m_szShortName,true,(EVec2 *)&local_140,E_FAX_CENTER,
               E_FAY_CENTER,(EVec2 *)0x0);
                    /* end of inlined section */
    Select__8ERShaderP3ERCi(this->m_pSideMenuCurveShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_150._0_4_ = 0.025;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_150._4_4_ = 0.745;
                    /* end of inlined section */
    local_140 = alph;
    local_13c = alph;
    local_130 = alph;
    local_12c = alph;
    local_128 = alph;
    local_124 = alph;
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,local_150,
               (EVec2 *)&local_140,&local_130);
    local_150._0_4_ = alph;
    local_150._4_4_ = alph;
    local_148 = alph;
    local_144 = alph;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* end of inlined section */
    DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
              (prc,0.04,0.305,_h,this->m_fBodyMenuWidth,alph,(EVec4 *)local_150);
    local_150._0_4_ = alph;
    local_150._4_4_ = alph;
    local_148 = alph;
    local_144 = alph;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* end of inlined section */
    DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
              (prc,0.04,0.413,_h,this->m_fBodyMenuWidth,alph,(EVec4 *)local_150);
    local_150._0_4_ = alph;
    local_150._4_4_ = alph;
    local_148 = alph;
    local_144 = alph;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* end of inlined section */
    DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
              (prc,0.04,0.523,_h,this->m_fBodyMenuWidth,alph,(EVec4 *)local_150);
    Select__8ERShaderP3ERCi(this->m_pDPadBackgroundShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_150._0_4_ = -0.22;
    local_150._4_4_ = 0.747891;
                    /* end of inlined section */
    local_140 = alph;
    local_13c = alph;
    local_130 = alph;
    local_12c = alph;
    local_128 = alph;
    local_124 = alph;
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,local_150,
               (EVec2 *)&local_140,&local_130);
    Draw__10EPromptBarP3ERC(&this->m_PromptBar,prc);
    Draw__13EUIObjectNodeP3ERC(&this->field0_0x0,prc);
  }
  return;
}

bool EWardrobeMenu::MirrorUpdate() {
	EVec3 vNewPos;
	EVec3 vNewTarget;
	EVec3 *this;
	EVec3 &v;
	EVec3 *this;
	EVec3 &v;
	EVec3 *this;
	EVec3 &v;
	EVec3 vNewPos;
	EVec3 vNewTarget;
	EVec3 *this;
	EVec3 &v;
	EVec3 *this;
	EVec3 &v;
	EVec3 *this;
	EVec3 &v;
	CustomCharacter OldCharData;
	
  undefined *puVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  EUIObjectNode__vtable *pEVar5;
  EUIVirtualCtrl__vtable *pEVar6;
  ulong *puVar7;
  char *pcVar8;
  bool bVar9;
  ESimsCam *pEVar10;
  CustomCharacter *pCVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  EAnimController *this_00;
  CustomCharacter *pCVar15;
  EVec3 *vTarget;
  ulong in_a2;
  ulong uVar16;
  ulong uVar17;
  ulong in_t0;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  CustomCharacter OldCharData;
  
  pCVar15 = &OldCharData;
  TurnOffAllHighlights__11EIObjectManUi((_globals._pCurHouse)->m_pObjectMan,0);
  TurnOffAllHighlights__11EIObjectManUi((_globals._pCurHouse)->m_pObjectMan,1);
  fVar22 = _dt;
  fVar19 = this->m_fTransitionTime;
  if (1.0 <= fVar19) {
    pEVar5 = (this->m_pMenu->field0_0x0).__vtable;
    (*(code *)pEVar5->SetBoxDims)
              ((int)this->m_pMenu->m_maxBackShdrSize + *(short *)&pEVar5->SetPos + -0x44);
    Update__10EPromptBar(&this->m_PromptBar);
    uVar16 = (ulong)(int)_globals.m_pCtrlPad;
    pEVar6 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar14 = (*(code *)pEVar6[1].GetBut)
                       ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar6[1].ClearBut + -4,
                        this->m_nControllerID,0x10);
    if (lVar14 == 0) {
      pEVar6 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar14 = (*(code *)pEVar6[1].GetBut)
                         ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar6[1].ClearBut + -4
                          ,this->m_nControllerID,0x40);
      if (lVar14 != 0) {
        this->m_fTransitionTime = 0.0;
        this->m_nTransitionMode = '\x01';
        *(undefined4 *)&this->m_bReachedMidpoint = 0;
      }
    }
    else {
      this->m_fTransitionTime = 0.0;
      *(undefined4 *)&this->m_bReachedMidpoint = 0;
      this->m_nTransitionMode = '\x01';
      pCVar11 = __15CustomCharacterRC15CustomCharacter(&OldCharData,this->m_pCustomCharacter);
      pCVar15 = this->m_pCustomCharacter;
      *(undefined4 *)&this->m_bUpdateThumbnail = 0;
      puVar1 = &(this->m_originalCharacter).field_0x7;
      uVar3 = (uint)puVar1 & 7;
      uVar4 = (uint)&this->m_originalCharacter & 7;
      uVar17 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
               uVar16 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
               *(ulong *)((int)&this->m_originalCharacter - uVar4) >> uVar4 * 8;
      pcVar8 = &(this->m_originalCharacter).m_nFacialHairIndex;
      uVar3 = (uint)pcVar8 & 7;
      pcVar2 = &(this->m_originalCharacter).m_nBodyType;
      uVar4 = (uint)pcVar2 & 7;
      uVar18 = (*(long *)(pcVar8 + -uVar3) << (7 - uVar3) * 8 |
               in_t0 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
               *(ulong *)(pcVar2 + -uVar4) >> uVar4 * 8;
      puVar1 = &(this->m_originalCharacter).field_0x17;
      uVar3 = (uint)puVar1 & 7;
      pcVar8 = &(this->m_originalCharacter).m_nSkinColor;
      uVar4 = (uint)pcVar8 & 7;
      uVar16 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
               (long)(int)pCVar11 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8
               | *(ulong *)(pcVar8 + -uVar4) >> uVar4 * 8;
      uVar3 = (uint)&pCVar15->field_0x7 & 7;
      puVar7 = (ulong *)(&pCVar15->field_0x7 + -uVar3);
      *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | uVar17 >> (7 - uVar3) * 8;
      uVar3 = (uint)pCVar15 & 7;
      *(ulong *)((int)pCVar15 - uVar3) =
           uVar17 << uVar3 * 8 |
           *(ulong *)((int)pCVar15 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      uVar3 = (uint)&pCVar15->m_nFacialHairIndex & 7;
      pcVar8 = &pCVar15->m_nFacialHairIndex + -uVar3;
      *(ulong *)pcVar8 = *(ulong *)pcVar8 & -1L << (uVar3 + 1) * 8 | uVar18 >> (7 - uVar3) * 8;
      uVar3 = (uint)&pCVar15->m_nBodyType & 7;
      pcVar8 = &pCVar15->m_nBodyType + -uVar3;
      *(ulong *)pcVar8 =
           uVar18 << uVar3 * 8 | *(ulong *)pcVar8 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      uVar3 = (uint)&pCVar15->field_0x17 & 7;
      puVar7 = (ulong *)(&pCVar15->field_0x17 + -uVar3);
      *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | uVar16 >> (7 - uVar3) * 8;
      uVar3 = (uint)&pCVar15->m_nSkinColor & 7;
      pcVar8 = &pCVar15->m_nSkinColor + -uVar3;
      *(ulong *)pcVar8 =
           uVar16 << uVar3 * 8 | *(ulong *)pcVar8 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      AlterBody__4ESimP15CustomCharacterUi(this->m_pMySim,&OldCharData,0x3e);
    }
    goto LAB_001ed410;
  }
  if (*(int *)&this->m_bReachedMidpoint == 0) {
    if (this->m_nTransitionMode == '\0') {
      *(undefined4 *)&this->m_bSwitchCameraMode = 0;
      fVar22 = fVar22 * 0.6666667;
    }
    else {
      *(undefined4 *)&this->m_bSwitchCameraMode = 1;
    }
    this->m_fTransitionTime = fVar19 + fVar22;
    fVar22 = this->m_fTransitionTime;
    if (1.0 <= fVar22) {
      this->m_fTransitionTime = 0.0;
      *(undefined4 *)&this->m_bReachedMidpoint = 1;
      goto LAB_001ed410;
    }
                    /* end of inlined section */
    if (this->m_nTransitionMode == '\0') {
                    /* inlined from /eor/src2/common/math/e_math.h */
      fVar19 = (this->m_vOldEye).field0_0x0.d[0];
      fVar21 = (this->m_vOldTarget).field0_0x0.d[0];
      fVar22 = -fVar22 * fVar22 * fVar22 + (fVar22 + fVar22) * fVar22;
      fVar20 = (this->m_vVanityTarget).field0_0x0.d[0];
      OldCharData._8_4_ =
           (this->m_vOldEye).field0_0x0.d[2] +
           ((this->m_vMidpoint).field0_0x0.d[2] - (this->m_vOldEye).field0_0x0.d[2]) * fVar22;
                    /* end of inlined section */
      OldCharData._0_8_ =
           CONCAT44((this->m_vOldEye).field0_0x0.d[1] +
                    ((this->m_vMidpoint).field0_0x0.d[1] - (this->m_vOldEye).field0_0x0.d[1]) *
                    fVar22,fVar19 + ((this->m_vMidpoint).field0_0x0.d[0] - fVar19) * fVar22);
      uVar3 = (uint)&OldCharData.field_0x7 & 7;
      puVar7 = (ulong *)(&OldCharData.field_0x7 + -uVar3);
      *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | OldCharData._0_8_ >> (7 - uVar3) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      OldCharData._16_8_ =
           CONCAT44((this->m_vOldTarget).field0_0x0.d[1] +
                    ((this->m_vVanityTarget).field0_0x0.d[1] - (this->m_vOldTarget).field0_0x0.d[1])
                    * fVar22,fVar21 + (fVar20 - fVar21) * fVar22);
      uVar3 = (uint)&OldCharData.field_0x17 & 7;
      puVar7 = (ulong *)(&OldCharData.field_0x17 + -uVar3);
      *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | OldCharData._16_8_ >> (7 - uVar3) * 8;
    }
    else {
                    /* inlined from /eor/src2/common/math/e_math.h */
      fVar19 = (this->m_vVanityEye).field0_0x0.d[0];
      fVar22 = -fVar22 * fVar22 * fVar22 + (fVar22 + fVar22) * fVar22;
      OldCharData._8_4_ =
           (this->m_vVanityEye).field0_0x0.d[2] +
           ((this->m_vMidpoint).field0_0x0.d[2] - (this->m_vVanityEye).field0_0x0.d[2]) * fVar22;
                    /* end of inlined section */
      OldCharData._0_8_ =
           CONCAT44((this->m_vVanityEye).field0_0x0.d[1] +
                    ((this->m_vMidpoint).field0_0x0.d[1] - (this->m_vVanityEye).field0_0x0.d[1]) *
                    fVar22,fVar19 + ((this->m_vMidpoint).field0_0x0.d[0] - fVar19) * fVar22);
      uVar3 = (uint)&OldCharData.field_0x7 & 7;
      puVar7 = (ulong *)(&OldCharData.field_0x7 + -uVar3);
      *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | OldCharData._0_8_ >> (7 - uVar3) * 8;
      puVar1 = (undefined *)((int)&(this->m_vVanityTarget).field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      uVar4 = (uint)&this->m_vVanityTarget & 7;
      OldCharData._16_8_ =
           (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
           (long)(int)&this->m_vVanityEye & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
           -1L << (8 - uVar4) * 8 | *(ulong *)((int)&this->m_vVanityTarget - uVar4) >> uVar4 * 8;
      uVar3 = (uint)&OldCharData.field_0x17 & 7;
      puVar7 = (ulong *)(&OldCharData.field_0x17 + -uVar3);
      *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | OldCharData._16_8_ >> (7 - uVar3) * 8;
    }
LAB_001ed308:
    pEVar10 = GetCam__7EGlobal(&_globals);
    vTarget = (EVec3 *)&OldCharData.m_nSkinColor;
  }
  else {
    if (this->m_nTransitionMode == '\0') {
      *(undefined4 *)&this->m_bSwitchCameraMode = 1;
    }
    else {
      *(undefined4 *)&this->m_bSwitchCameraMode = 0;
      fVar22 = fVar22 * 0.6666667;
    }
    this->m_fTransitionTime = fVar19 + fVar22;
    fVar22 = this->m_fTransitionTime;
    if (fVar22 < 1.0) {
                    /* end of inlined section */
      if (this->m_nTransitionMode == '\0') {
                    /* inlined from /eor/src2/common/math/e_math.h */
        fVar19 = (this->m_vMidpoint).field0_0x0.d[0];
        fVar22 = -fVar22 * fVar22 * fVar22 + fVar22 * fVar22 + fVar22;
        OldCharData._8_4_ =
             (this->m_vMidpoint).field0_0x0.d[2] +
             ((this->m_vVanityEye).field0_0x0.d[2] - (this->m_vMidpoint).field0_0x0.d[2]) * fVar22;
                    /* end of inlined section */
        OldCharData._0_8_ =
             CONCAT44((this->m_vMidpoint).field0_0x0.d[1] +
                      ((this->m_vVanityEye).field0_0x0.d[1] - (this->m_vMidpoint).field0_0x0.d[1]) *
                      fVar22,fVar19 + ((this->m_vVanityEye).field0_0x0.d[0] - fVar19) * fVar22);
        uVar3 = (uint)&OldCharData.field_0x7 & 7;
        puVar7 = (ulong *)(&OldCharData.field_0x7 + -uVar3);
        *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | OldCharData._0_8_ >> (7 - uVar3) * 8;
        puVar1 = (undefined *)((int)&(this->m_vVanityTarget).field0_0x0 + 7);
        uVar3 = (uint)puVar1 & 7;
        uVar4 = (uint)&this->m_vVanityTarget & 7;
        OldCharData._16_8_ =
             (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
             in_a2 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
             *(ulong *)((int)&this->m_vVanityTarget - uVar4) >> uVar4 * 8;
        uVar3 = (uint)&OldCharData.field_0x17 & 7;
        puVar7 = (ulong *)(&OldCharData.field_0x17 + -uVar3);
        *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | OldCharData._16_8_ >> (7 - uVar3) * 8;
      }
      else {
                    /* inlined from /eor/src2/common/math/e_math.h */
        fVar19 = (this->m_vMidpoint).field0_0x0.d[0];
        fVar20 = (this->m_vVanityTarget).field0_0x0.d[0];
        fVar21 = (this->m_vOldTarget).field0_0x0.d[0];
        fVar22 = -fVar22 * fVar22 * fVar22 + fVar22 * fVar22 + fVar22;
        OldCharData._8_4_ =
             (this->m_vMidpoint).field0_0x0.d[2] +
             ((this->m_vOldEye).field0_0x0.d[2] - (this->m_vMidpoint).field0_0x0.d[2]) * fVar22;
                    /* end of inlined section */
        OldCharData._0_8_ =
             CONCAT44((this->m_vMidpoint).field0_0x0.d[1] +
                      ((this->m_vOldEye).field0_0x0.d[1] - (this->m_vMidpoint).field0_0x0.d[1]) *
                      fVar22,fVar19 + ((this->m_vOldEye).field0_0x0.d[0] - fVar19) * fVar22);
        uVar3 = (uint)&OldCharData.field_0x7 & 7;
        puVar7 = (ulong *)(&OldCharData.field_0x7 + -uVar3);
        *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | OldCharData._0_8_ >> (7 - uVar3) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        OldCharData._16_8_ =
             CONCAT44((this->m_vVanityTarget).field0_0x0.d[1] +
                      ((this->m_vOldTarget).field0_0x0.d[1] -
                      (this->m_vVanityTarget).field0_0x0.d[1]) * fVar22,
                      fVar20 + (fVar21 - fVar20) * fVar22);
        uVar3 = (uint)&OldCharData.field_0x17 & 7;
        puVar7 = (ulong *)(&OldCharData.field_0x17 + -uVar3);
        *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | OldCharData._16_8_ >> (7 - uVar3) * 8;
      }
      goto LAB_001ed308;
    }
    if (this->m_nTransitionMode == '\x01') {
      *(undefined4 *)&this->m_bExitMirror = 1;
      pEVar10 = GetCam__7EGlobal(&_globals);
      SetPos__8ESimsCamRC5EVec3N21(pEVar10,&this->m_vOldEye,&this->m_vOldTarget,&this->m_vOldUp);
      goto LAB_001ed410;
    }
    pEVar10 = GetCam__7EGlobal(&_globals);
    pCVar15 = (CustomCharacter *)&this->m_vVanityEye;
    vTarget = &this->m_vVanityTarget;
  }
  SetPos__8ESimsCamRC5EVec3N21(pEVar10,(EVec3 *)pCVar15,vTarget,&this->m_vVanityUp);
LAB_001ed410:
  this_00 = &this->m_ac;
  bVar9 = IsTrackAnimComplete__15EAnimControlleri(this_00,1);
  if ((!bVar9) || (this->m_fTransitionTime < 1.0)) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    OldCharData._8_4_ = 1.0;
    OldCharData._0_8_ = 0x3f8000003f800000;
                    /* end of inlined section */
    Update__15EAnimControllerP5EVec3T1G5EVec3
              (this_00,(EVec3 *)0x0,(EVec3 *)0x0,(EVec3 *)&OldCharData);
  }
  else {
    if (*(int *)&this->m_bMiddleAnim == 0) {
      uVar3 = this->m_nIdleAnimationID[8];
      *(undefined4 *)&this->m_bMiddleAnim = 1;
      SetTrackAnim__15EAnimControlleriUi(this_00,1,uVar3);
      return (bool)(char)*(undefined4 *)&this->m_bExitMirror;
    }
    if (this->m_nRepeatIdleCount != 0) {
      this->m_nRepeatIdleCount = this->m_nRepeatIdleCount - 1;
      RestartTrack__15EAnimControlleri(this_00,1);
      return (bool)(char)*(undefined4 *)&this->m_bExitMirror;
    }
    *(undefined4 *)&this->m_bMiddleAnim = 0;
    iVar12 = rand();
    iVar13 = iVar12 + 7;
    if (-1 < iVar12) {
      iVar13 = iVar12;
    }
    SetTrackAnim__15EAnimControlleriUi
              (this_00,1,*(uint *)((int)this + (iVar12 + (iVar13 >> 3) * -8) * 4 + 0x954));
    iVar13 = rand();
    this->m_nRepeatIdleCount = iVar13 % 5 + 3;
  }
  return (bool)(char)*(undefined4 *)&this->m_bExitMirror;
}

void EWardrobeMenu::SetupDpadWin() {
	EUIIcon *this;
	EUIIcon *this;
	EUIIcon *this;
	EUIIcon *this;
	
  undefined *puVar1;
  EUIIconDef *pEVar2;
  int *piVar3;
  EUIVirtualCtrl **ppEVar4;
  EUIObjectNode__vtable *pEVar5;
  uint uVar6;
  ulong *puVar7;
  undefined8 unaff_s0;
  EUIIcon *this_00;
  undefined8 unaff_s1;
  EUIIcon *this_01;
  undefined8 unaff_s2;
  EUIIcon *this_02;
  undefined8 unaff_s3;
  EUIIcon *this_03;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  undefined4 uVar8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  __vtbl_ptr_type *local_bc;
  EUIIconDef__vtable *local_b0;
  EUIIconDef__vtable *local_a0;
  EUIIconDef__vtable *local_90;
  EUIIconDef__vtable *local_80;
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
  
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  this_03 = this->m_dpadIcons + 3;
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  this_02 = this->m_dpadIcons + 2;
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  this_01 = this->m_dpadIcons + 1;
  this_00 = this->m_dpadIcons;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  uVar8 = 0x3d89374c;
  local_b0 = this->m_dpadIcons[0].m_def.__vtable;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[0].m_def.m_trigger + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar6) * 8;
  pEVar2 = &this->m_dpadIcons[0].m_def;
  uVar6 = (uint)pEVar2 & 7;
  puVar7 = (ulong *)((int)pEVar2 - uVar6);
  *puVar7 = -0xffffffff << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[0].m_def.m_colorIdx + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0x100000000U >> (7 - uVar6) * 8;
  piVar3 = &this->m_dpadIcons[0].m_def.m_selColorIdx;
  uVar6 = (uint)piVar3 & 7;
  puVar7 = (ulong *)((int)piVar3 - uVar6);
  *puVar7 = 0x100000000 << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[0].m_def.__vtable + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0x3a890800000000U >> (7 - uVar6) * 8;
  ppEVar4 = &this->m_dpadIcons[0].m_def.m_pCtrl;
  uVar6 = (uint)ppEVar4 & 7;
  puVar7 = (ulong *)((int)ppEVar4 - uVar6);
  *puVar7 = 0x3a890800000000 << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  this->m_dpadIcons[0].m_def.__vtable = local_b0;
  local_a0 = this->m_dpadIcons[1].m_def.__vtable;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[1].m_def.m_trigger + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar6) * 8;
  pEVar2 = &this->m_dpadIcons[1].m_def;
  uVar6 = (uint)pEVar2 & 7;
  puVar7 = (ulong *)((int)pEVar2 - uVar6);
  *puVar7 = -0xffffffff << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[1].m_def.m_colorIdx + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0x100000000U >> (7 - uVar6) * 8;
  piVar3 = &this->m_dpadIcons[1].m_def.m_selColorIdx;
  uVar6 = (uint)piVar3 & 7;
  puVar7 = (ulong *)((int)piVar3 - uVar6);
  *puVar7 = 0x100000000 << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[1].m_def.__vtable + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0x3a890800000000U >> (7 - uVar6) * 8;
  ppEVar4 = &this->m_dpadIcons[1].m_def.m_pCtrl;
  uVar6 = (uint)ppEVar4 & 7;
  puVar7 = (ulong *)((int)ppEVar4 - uVar6);
  *puVar7 = 0x3a890800000000 << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  this->m_dpadIcons[1].m_def.__vtable = local_a0;
  local_90 = this->m_dpadIcons[2].m_def.__vtable;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[2].m_def.m_trigger + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar6) * 8;
  pEVar2 = &this->m_dpadIcons[2].m_def;
  uVar6 = (uint)pEVar2 & 7;
  puVar7 = (ulong *)((int)pEVar2 - uVar6);
  *puVar7 = -0xffffffff << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[2].m_def.m_colorIdx + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0x100000000U >> (7 - uVar6) * 8;
  piVar3 = &this->m_dpadIcons[2].m_def.m_selColorIdx;
  uVar6 = (uint)piVar3 & 7;
  puVar7 = (ulong *)((int)piVar3 - uVar6);
  *puVar7 = 0x100000000 << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[2].m_def.__vtable + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0x3a890800000000U >> (7 - uVar6) * 8;
  ppEVar4 = &this->m_dpadIcons[2].m_def.m_pCtrl;
  uVar6 = (uint)ppEVar4 & 7;
  puVar7 = (ulong *)((int)ppEVar4 - uVar6);
  *puVar7 = 0x3a890800000000 << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  this->m_dpadIcons[2].m_def.__vtable = local_90;
  local_c4 = 1;
  local_d0 = 1;
  local_cc = 0xffffffff;
  local_c8 = 0;
  local_c0 = 0;
  local_80 = this->m_dpadIcons[3].m_def.__vtable;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[3].m_def.m_trigger + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar6) * 8;
  pEVar2 = &this->m_dpadIcons[3].m_def;
  uVar6 = (uint)pEVar2 & 7;
  puVar7 = (ulong *)((int)pEVar2 - uVar6);
  *puVar7 = -0xffffffff << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[3].m_def.m_colorIdx + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0x100000000U >> (7 - uVar6) * 8;
  piVar3 = &this->m_dpadIcons[3].m_def.m_selColorIdx;
  uVar6 = (uint)piVar3 & 7;
  puVar7 = (ulong *)((int)piVar3 - uVar6);
  *puVar7 = 0x100000000 << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[3].m_def.__vtable + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0x3a890800000000U >> (7 - uVar6) * 8;
  ppEVar4 = &this->m_dpadIcons[3].m_def.m_pCtrl;
  uVar6 = (uint)ppEVar4 & 7;
  puVar7 = (ulong *)((int)ppEVar4 - uVar6);
  *puVar7 = 0x3a890800000000 << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  this->m_dpadIcons[3].m_def.__vtable = local_80;
                    /* end of inlined section */
  local_bc = _vt_10EUIIconDef;
  InitActiveShader__7EUIIconi(this_00,0x32272593);
  InitActiveShader__7EUIIconi(this_02,-0x5297d65a);
  InitActiveShader__7EUIIconi(this_01,-0xc504a5b);
  InitActiveShader__7EUIIconi(this_03,-0x340fa10b);
  InitInActiveShader__7EUIIconi(this_00,0x32272593);
  InitInActiveShader__7EUIIconi(this_02,-0x5297d65a);
  InitInActiveShader__7EUIIconi(this_01,-0xc504a5b);
  InitInActiveShader__7EUIIconi(this_03,-0x340fa10b);
  pEVar5 = this->m_dpadIcons[0].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_c8 = 0x3f4b020c;
  local_cc = 0;
                    /* end of inlined section */
  local_d0 = uVar8;
  (*(code *)pEVar5->OnButtonRepeat)
            ((int)this_00->m_maxBackShdrSize[-0xc] + *(short *)&pEVar5->StateChanged + 4,&local_d0);
  pEVar5 = this->m_dpadIcons[2].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_d0 = 0x3d0b4398;
  local_c8 = 0x3f5851ec;
  local_cc = 0;
                    /* end of inlined section */
  (*(code *)pEVar5->OnButtonRepeat)
            ((int)this_02->m_maxBackShdrSize[-0xc] + *(short *)&pEVar5->StateChanged + 4,&local_d0);
  pEVar5 = this->m_dpadIcons[1].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_d0 = 0x3dbc6a80;
  local_c8 = 0x3f5851ec;
  local_cc = 0;
                    /* end of inlined section */
  (*(code *)pEVar5->OnButtonRepeat)
            ((int)this_01->m_maxBackShdrSize[-0xc] + *(short *)&pEVar5->StateChanged + 4,&local_d0);
  pEVar5 = this->m_dpadIcons[3].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_c8 = 0x3f620c4a;
  local_cc = 0;
                    /* end of inlined section */
  local_d0 = uVar8;
  (*(code *)pEVar5->OnButtonRepeat)
            ((int)this_03->m_maxBackShdrSize[-0xc] + *(short *)&pEVar5->StateChanged + 4,&local_d0);
  pEVar5 = (this->field0_0x0).__vtable;
  (*(code *)pEVar5[1].GetPos)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar5[1].OnStickRepeat,this_00);
  pEVar5 = (this->field0_0x0).__vtable;
  (*(code *)pEVar5[1].GetPos)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar5[1].OnStickRepeat,this_01);
  pEVar5 = (this->field0_0x0).__vtable;
  (*(code *)pEVar5[1].GetPos)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar5[1].OnStickRepeat,this_02);
  pEVar5 = (this->field0_0x0).__vtable;
  (*(code *)pEVar5[1].GetPos)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar5[1].OnStickRepeat,this_03);
  return;
}

void EWardrobeMenu::Message(EUIObjectNode *pChild, u32 messId) {
	CustomCharacter OldCharData;
	
  CustomCharacter OldCharData;
  
  __15CustomCharacterRC15CustomCharacter(&OldCharData,this->m_pCustomCharacter);
  switch(messId) {
  case 8:
    AlterBody__4ESimP15CustomCharacterUi(this->m_pMySim,&OldCharData,8);
    break;
  case 9:
    AlterBody__4ESimP15CustomCharacterUi(this->m_pMySim,&OldCharData,9);
    break;
  case 10:
    AlterBody__4ESimP15CustomCharacterUi(this->m_pMySim,&OldCharData,10);
    break;
  case 0xb:
    AlterBody__4ESimP15CustomCharacterUi(this->m_pMySim,&OldCharData,0xb);
    break;
  case 0xc:
    AlterBody__4ESimP15CustomCharacterUi(this->m_pMySim,&OldCharData,0xc);
    break;
  case 0xd:
    AlterBody__4ESimP15CustomCharacterUi(this->m_pMySim,&OldCharData,0xd);
    break;
  case 0x1c:
    AlterBody__4ESimP15CustomCharacterUi(this->m_pMySim,&OldCharData,0x1c);
    break;
  case 0x1d:
    AlterBody__4ESimP15CustomCharacterUi(this->m_pMySim,&OldCharData,0x1d);
    break;
  case 0x1e:
    AlterBody__4ESimP15CustomCharacterUi(this->m_pMySim,&OldCharData,0x1e);
    break;
  case 0x1f:
    AlterBody__4ESimP15CustomCharacterUi(this->m_pMySim,&OldCharData,0x1f);
    break;
  case 0x20:
    AlterBody__4ESimP15CustomCharacterUi(this->m_pMySim,&OldCharData,0x20);
    break;
  case 0x21:
    AlterBody__4ESimP15CustomCharacterUi(this->m_pMySim,&OldCharData,0x21);
  }
  return;
}

void EWardrobeMenu::MoveCamera(ESimsCam *pCam) {
	EMat4 mCamOrientation;
	EVec3 vNewPos;
	EVec3 vNewTarget;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  bool bVar4;
  EMat4 mCamOrientation;
  EVec3 vNewPos;
  EVec3 vNewTarget;
  
  GetOrient__13EIStaticModelR5EMat4(&this->m_pWorldObject->field0_0x0,&this->m_mMirrorOrientation);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  __as__5EMat4RC5EMat4(&mCamOrientation,&this->m_mMirrorOrientation);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vNewPos.field0_0x0.d[0] = mCamOrientation.field0_0x0.d[3][0];
  vNewPos.field0_0x0.d[1] = mCamOrientation.field0_0x0.d[3][1];
  vNewTarget.field0_0x0.d[0] = mCamOrientation.field0_0x0.d[3][0];
  vNewTarget.field0_0x0.d[1] = mCamOrientation.field0_0x0.d[3][1];
                    /* end of inlined section */
  bVar4 = IsAdult__4ESim(this->m_pMySim);
  if (bVar4) {
                    /* end of inlined section */
    if (0.5 < mCamOrientation.field0_0x0.d[0][0]) {
                    /* end of inlined section */
      vNewPos.field0_0x0.d[1] = mCamOrientation.field0_0x0.d[3][1] - 1.5;
      vNewTarget.field0_0x0.d[0] = mCamOrientation.field0_0x0.d[3][0] - 0.6;
      vNewTarget.field0_0x0.d[1] = mCamOrientation.field0_0x0.d[3][1] + 2.8;
    }
    else {
                    /* end of inlined section */
      if (mCamOrientation.field0_0x0.d[0][0] < -0.5) {
                    /* end of inlined section */
        vNewPos.field0_0x0.d[1] = mCamOrientation.field0_0x0.d[3][1] + 1.5;
        vNewTarget.field0_0x0.d[0] = mCamOrientation.field0_0x0.d[3][0] + 0.6;
        vNewTarget.field0_0x0.d[1] = mCamOrientation.field0_0x0.d[3][1] - 2.8;
      }
    }
                    /* end of inlined section */
    if (0.5 < mCamOrientation.field0_0x0.d[0][1]) {
                    /* end of inlined section */
      vNewPos.field0_0x0.d[0] = mCamOrientation.field0_0x0.d[3][0] + 1.5;
      vNewTarget.field0_0x0.d[0] = vNewTarget.field0_0x0.d[0] - 2.8;
      vNewTarget.field0_0x0.d[1] = vNewTarget.field0_0x0.d[1] - 0.6;
    }
    else {
                    /* end of inlined section */
      if (mCamOrientation.field0_0x0.d[0][1] < -0.5) {
                    /* end of inlined section */
        vNewPos.field0_0x0.d[0] = mCamOrientation.field0_0x0.d[3][0] - 1.5;
        vNewTarget.field0_0x0.d[0] = vNewTarget.field0_0x0.d[0] + 2.8;
        vNewTarget.field0_0x0.d[1] = vNewTarget.field0_0x0.d[1] + 0.6;
      }
    }
                    /* end of inlined section */
    vNewPos.field0_0x0.d[2] = 2.0;
  }
  else {
                    /* end of inlined section */
    if (0.5 < mCamOrientation.field0_0x0.d[0][0]) {
                    /* end of inlined section */
      vNewPos.field0_0x0.d[1] = mCamOrientation.field0_0x0.d[3][1] - 1.3;
      vNewTarget.field0_0x0.d[0] = mCamOrientation.field0_0x0.d[3][0] - 0.4;
      vNewTarget.field0_0x0.d[1] = mCamOrientation.field0_0x0.d[3][1] + 1.5;
    }
    else {
                    /* end of inlined section */
      if (mCamOrientation.field0_0x0.d[0][0] < -0.5) {
                    /* end of inlined section */
        vNewPos.field0_0x0.d[1] = mCamOrientation.field0_0x0.d[3][1] + 1.3;
        vNewTarget.field0_0x0.d[0] = mCamOrientation.field0_0x0.d[3][0] + 0.4;
        vNewTarget.field0_0x0.d[1] = mCamOrientation.field0_0x0.d[3][1] - 1.5;
      }
    }
                    /* end of inlined section */
    if (0.5 < mCamOrientation.field0_0x0.d[0][1]) {
                    /* end of inlined section */
      vNewPos.field0_0x0.d[0] = mCamOrientation.field0_0x0.d[3][0] + 1.3;
      vNewTarget.field0_0x0.d[0] = vNewTarget.field0_0x0.d[0] - 1.5;
      vNewTarget.field0_0x0.d[1] = vNewTarget.field0_0x0.d[1] - 0.4;
    }
    else {
                    /* end of inlined section */
      if (mCamOrientation.field0_0x0.d[0][1] < -0.5) {
                    /* end of inlined section */
        vNewPos.field0_0x0.d[0] = mCamOrientation.field0_0x0.d[3][0] - 1.3;
        vNewTarget.field0_0x0.d[0] = vNewTarget.field0_0x0.d[0] + 1.5;
        vNewTarget.field0_0x0.d[1] = vNewTarget.field0_0x0.d[1] + 0.4;
      }
    }
                    /* end of inlined section */
    vNewPos.field0_0x0.d[2] = 2.1;
  }
  puVar1 = (undefined *)((int)&(this->m_vVanityEye).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 |
            CONCAT44(vNewPos.field0_0x0.d[1],vNewPos.field0_0x0.d[0]) >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vVanityEye & 7;
  puVar3 = (ulong *)((int)&this->m_vVanityEye - uVar2);
  *puVar3 = CONCAT44(vNewPos.field0_0x0.d[1],vNewPos.field0_0x0.d[0]) << uVar2 * 8 |
            *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vVanityEye).field0_0x0.d[2] = vNewPos.field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vVanityTarget).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 |
            CONCAT44(vNewTarget.field0_0x0.d[1],vNewTarget.field0_0x0.d[0]) >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vVanityTarget & 7;
  puVar3 = (ulong *)((int)&this->m_vVanityTarget - uVar2);
  *puVar3 = CONCAT44(vNewTarget.field0_0x0.d[1],vNewTarget.field0_0x0.d[0]) << uVar2 * 8 |
            *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vVanityTarget).field0_0x0.d[2] = mCamOrientation.field0_0x0.d[3][2];
  (this->m_vVanityUp).field0_0x0.d[2] = 1.0;
  (this->m_vVanityUp).field0_0x0.d[0] = 0.0;
  (this->m_vVanityUp).field0_0x0.d[1] = 0.0;
  puVar1 = (undefined *)((int)&(this->m_vMidpoint).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 |
            CONCAT44(vNewPos.field0_0x0.d[1],vNewPos.field0_0x0.d[0]) >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vMidpoint & 7;
  puVar3 = (ulong *)((int)&this->m_vMidpoint - uVar2);
  *puVar3 = CONCAT44(vNewPos.field0_0x0.d[1],vNewPos.field0_0x0.d[0]) << uVar2 * 8 |
            *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vMidpoint).field0_0x0.d[2] = vNewPos.field0_0x0.d[2];
  (this->m_vMidpoint).field0_0x0.d[2] = 4.0;
  GetPos__8ESimsCamR5EVec3N21(pCam,&this->m_vOldEye,&this->m_vOldTarget,&this->m_vOldUp);
  *(undefined4 *)&this->m_bReachedMidpoint = 0;
  this->m_fTransitionTime = 0.0;
  this->m_nTransitionMode = '\0';
  return;
}

void EWardrobeMenu::RestoreCamera() {
  ESimsCam *pEVar1;
  
  pEVar1 = GetCam__7EGlobal(&_globals);
  ForceFullScreen__8ESimsCam(pEVar1);
  pEVar1 = GetCam__7EGlobal(&_globals);
  SetPos__8ESimsCamRC5EVec3N21(pEVar1,&this->m_vOldEye,&this->m_vOldTarget,&this->m_vOldUp);
  return;
}

void EWardrobeMenu::GetOldCameraData(EVec3 *vEye, EVec3 *vTarget, EVec3 *vUp) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  ulong in_v0;
  ulong uVar6;
  ulong in_t1;
  
  puVar1 = (undefined *)((int)&(this->m_vOldEye).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_vOldEye & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->m_vOldEye - uVar3) >> uVar3 * 8;
  fVar4 = (this->m_vOldEye).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&vEye->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)vEye & 7;
  *(ulong *)((int)vEye - uVar2) =
       uVar6 << uVar2 * 8 | *(ulong *)((int)vEye - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (vEye->field0_0x0).d[2] = fVar4;
  puVar1 = (undefined *)((int)&(this->m_vOldTarget).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_vOldTarget & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar6 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->m_vOldTarget - uVar3) >> uVar3 * 8;
  fVar4 = (this->m_vOldTarget).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&vTarget->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)vTarget & 7;
  *(ulong *)((int)vTarget - uVar2) =
       uVar6 << uVar2 * 8 |
       *(ulong *)((int)vTarget - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (vTarget->field0_0x0).d[2] = fVar4;
  puVar1 = (undefined *)((int)&(this->m_vOldUp).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_vOldUp & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_t1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->m_vOldUp - uVar3) >> uVar3 * 8;
  fVar4 = (this->m_vOldUp).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&vUp->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)vUp & 7;
  *(ulong *)((int)vUp - uVar2) =
       uVar6 << uVar2 * 8 | *(ulong *)((int)vUp - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (vUp->field0_0x0).d[2] = fVar4;
  return;
}

EVec3 EWardrobeMenu::GetLightVector() {
	EVec3 vLight;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  float fVar4;
  float fVar5;
  EVec3 vLight;
  
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar4 = (this->m_vVanityEye).field0_0x0.d[0] - (this->m_vVanityTarget).field0_0x0.d[0];
                    /* end of inlined section */
  vLight.field0_0x0.d[2] = (this->m_vVanityTarget).field0_0x0.d[2] + 1.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vLight.field0_0x0.d[2] = (this->m_vVanityEye).field0_0x0.d[2] - vLight.field0_0x0.d[2];
  fVar5 = (this->m_vVanityEye).field0_0x0.d[1] - (this->m_vVanityTarget).field0_0x0.d[1];
                    /* end of inlined section */
  vLight.field0_0x0._0_8_ = CONCAT44(fVar5,fVar4);
  puVar1 = (undefined *)((int)&vLight.field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)vLight.field0_0x0._0_8_ >> (7 - uVar2) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar4 = sqrtf(fVar4 * fVar4 + fVar5 * fVar5 + vLight.field0_0x0.d[2] * vLight.field0_0x0.d[2]);
  if (fVar4 != 0.0) {
    fVar4 = 1.0 / fVar4;
    vLight.field0_0x0.d[0] = vLight.field0_0x0.d[0] * fVar4;
    vLight.field0_0x0.d[2] = vLight.field0_0x0.d[2] * fVar4;
    vLight.field0_0x0._0_8_ = CONCAT44(vLight.field0_0x0.d[1] * fVar4,vLight.field0_0x0.d[0]);
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (__return_storage_ptr__->field0_0x0).d[0] = vLight.field0_0x0.d[0];
  (__return_storage_ptr__->field0_0x0).d[1] = vLight.field0_0x0.d[1];
  (__return_storage_ptr__->field0_0x0).d[2] = vLight.field0_0x0.d[2];
  return __return_storage_ptr__;
}

void EWardrobeMenu::CalulateAnimation(ERC *prc) {
	EMat4 mOrient;
	
  EMat4 mOrient;
  
  GetOrient__13EIStaticModelR5EMat4((EIStaticModel *)this->m_pMySim,&mOrient);
  Compute__15EAnimControllerRC5EMat4(&this->m_ac,&mOrient);
                    /* inlined from /eor/src2/engine/e_rptr.h */
                    /* end of inlined section */
  CopyMatrices__7ERModelP3ERCP5EMat4i
            (prc,(this->m_ac).m_mNodes,(((this->m_ac).m_pRCharacter.m_p)->m_nodes).field0_0x0.m_size
            );
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

void EUIIconDef::~EUIIconDef(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void* EWardrobeMenu::operator new(unsigned int size) {
	void *result;
	
  void *__s;
  
  __s = _memmanAlloc__FUiUi(size,0x10);
  memset(__s,0,(long)(int)size);
  return __s;
}

void EWardrobeMenu::operator delete(void *p) {
  _memmanFree__FPv(p);
  return;
}

ERShader* EWardrobeMenu::GetMirrorShader() {
  return this->m_pMirrorShdr;
}

ERModel* EWardrobeMenu::GetGlassModel() {
  return this->m_pGlassModel;
}

EMat4* EWardrobeMenu::GetOrient() {
  return &this->m_mMirrorOrientation;
}

ESim* EWardrobeMenu::GetSim() {
  return this->m_pMySim;
}

ISimInstance* EWardrobeMenu::GetObject() {
  return this->m_pWorldObject;
}

u32 EWardrobeMenu::GetControllerID() {
  return this->m_nControllerID;
}

bool EWardrobeMenu::SwitchCameraMode() {
  return SUB41(*(undefined4 *)&this->m_bSwitchCameraMode,0);
}

bool EWardrobeMenu::IsCameraMoving() {
  return this->m_fTransitionTime < 1.0;
}

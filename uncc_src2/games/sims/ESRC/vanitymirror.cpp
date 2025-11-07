// STATUS: NOT STARTED

#include "vanitymirror.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb2485;
	__vtbl_ptr_type *$vf2549;
	
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
	cXObject *$vb2549;
	static Int kSimTicksPerMotiveTick;
	__vtbl_ptr_type *$vf1966;
	
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
	Panelstateman *$vb3981;
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

__vtbl_ptr_type EVanityMirrorMenu virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EVanityMirrorMenu::~EVanityMirrorMenu,
		/* .__delta2 = */ -30024
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
		/* .__pfn = */ &EVanityMirrorMenu::Draw,
		/* .__delta2 = */ -26408
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
		/* .__pfn = */ &EVanityMirrorMenu::Message,
		/* .__delta2 = */ -21424
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

EVanityMirrorMenu* EVanityMirrorMenu::EVanityMirrorMenu(ESim *pPerson, ISimInstance *pObj, u32 nWhichController) {
	EVec3 vPos;
	
  undefined *puVar1;
  EUITextIconDef *pEVar2;
  EFontAlignY *pEVar3;
  uint *puVar4;
  EUIIconDef *pEVar5;
  int *piVar6;
  EUIVirtualCtrl **ppEVar7;
  bool bVar8;
  uint uVar9;
  ulong *puVar10;
  EUIIconDef *iconDef;
  EUITextIconDef *textDef;
  EUIStaticTextIcon *this_00;
  ECharedTextMenuItem *this_01;
  undefined8 unaff_s0;
  EUIIcon *this_02;
  undefined8 unaff_s1;
  int iVar11;
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
  EUIIconDef *local_f4;
  EPromptBar *local_f0;
  CustomCharacter *local_ec;
  EAnimController *local_e8;
  EVec3 *local_e4;
  ECharedTextMenuItem *local_e0;
  EUITextIconDef *local_dc;
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
  iVar11 = 3;
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_100 = pPerson;
  local_fc = pObj;
  local_f8 = nWhichController;
  __13EUIObjectNode(&this->field0_0x0);
  local_e4 = (EVec3 *)&local_160;
  local_dc = &local_150;
  local_f4 = &local_130;
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_17EVanityMirrorMenu;
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
    iVar11 = iVar11 + -1;
    this_02 = this_02 + 1;
  } while (iVar11 != -1);
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
  textDef = local_dc;
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
  iVar11 = 1;
  __7EUIIconG10EUIIconDefiii(&this->m_TriIcon,&local_1b0,0,0,0x40);
  iconDef = local_f4;
  local_f0 = &this->m_PromptBar;
  local_e0 = this->m_pHeadMenuItems;
  local_ec = &this->m_originalCharacter;
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
    iVar11 = iVar11 + -1;
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
              (this_00,textDef,iconDef,-1,local_e4);
    this_01 = local_e0;
    local_130.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    (this_00->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).m_textdef.m_xAlign + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | CONCAT44(local_18c,local_190) >> (7 - uVar9) * 8;
    pEVar2 = &(this_00->field0_0x0).m_textdef;
    uVar9 = (uint)pEVar2 & 7;
    puVar10 = (ulong *)((int)pEVar2 - uVar9);
    *puVar10 = CONCAT44(local_18c,local_190) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).m_textdef.m_pointsize + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | CONCAT44(local_184,local_188) >> (7 - uVar9) * 8;
    pEVar3 = &(this_00->field0_0x0).m_textdef.m_yAlign;
    uVar9 = (uint)pEVar3 & 7;
    puVar10 = (ulong *)((int)pEVar3 - uVar9);
    *puVar10 = CONCAT44(local_184,local_188) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).m_textdef.m_colorIdx + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | CONCAT44(local_17c,local_180) >> (7 - uVar9) * 8;
    puVar4 = &(this_00->field0_0x0).m_textdef.m_selColorIdx;
    uVar9 = (uint)puVar4 & 7;
    puVar10 = (ulong *)((int)puVar4 - uVar9);
    *puVar10 = CONCAT44(local_17c,local_180) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    *(undefined4 *)&(this_00->field0_0x0).m_textdef.m_retChar = local_178;
    local_110 = (this_00->field0_0x0).field0_0x0.m_def.__vtable;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).field0_0x0.m_def.m_trigger + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
               CONCAT44(local_1b0.m_trigger,local_1b0.m_flags) >> (7 - uVar9) * 8;
    pEVar5 = &(this_00->field0_0x0).field0_0x0.m_def;
    uVar9 = (uint)pEVar5 & 7;
    puVar10 = (ulong *)((int)pEVar5 - uVar9);
    *puVar10 = CONCAT44(local_1b0.m_trigger,local_1b0.m_flags) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
               CONCAT44(local_1b0.m_colorIdx,local_1b0.m_selColorIdx) >> (7 - uVar9) * 8;
    piVar6 = &(this_00->field0_0x0).field0_0x0.m_def.m_selColorIdx;
    uVar9 = (uint)piVar6 & 7;
    puVar10 = (ulong *)((int)piVar6 - uVar9);
    *puVar10 = CONCAT44(local_1b0.m_colorIdx,local_1b0.m_selColorIdx) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).field0_0x0.m_def.__vtable + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
               CONCAT44(local_1b0.__vtable,local_1b0.m_pCtrl) >> (7 - uVar9) * 8;
    ppEVar7 = &(this_00->field0_0x0).field0_0x0.m_def.m_pCtrl;
    uVar9 = (uint)ppEVar7 & 7;
    puVar10 = (ulong *)((int)ppEVar7 - uVar9);
    *puVar10 = CONCAT44(local_1b0.__vtable,local_1b0.m_pCtrl) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    (this_00->field0_0x0).field0_0x0.m_def.__vtable = local_110;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    this_00[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
         (ENodeListNode *)0x0;
    this_00[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
    this_00 = (EUIStaticTextIcon *)&this_00[1].field0_0x0.field0_0x0.field0_0x0.m_id;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_1b0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
  } while (iVar11 != -1);
  iVar11 = 4;
  __10EPromptBar(local_f0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedmenuitems.h */
  do {
    iVar11 = iVar11 + -1;
    __13EUIObjectNode(&this_01->field0_0x0);
    (this_01->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_19ECharedTextMenuItem;
    Init__19ECharedTextMenuItem(this_01);
                    /* end of inlined section */
    this_01 = this_01 + 1;
  } while (iVar11 != -1);
  __15CustomCharacter(local_ec);
  __15EAnimController(local_e8);
                    /* inlined from /eor/src2/engine/window/e_portalwindow.h */
                    /* end of inlined section */
  iVar11 = 4;
  do {
    bVar8 = iVar11 != -1;
    iVar11 = iVar11 + -1;
  } while (bVar8);
                    /* end of inlined section */
  this->m_pMySim = (ESim *)0x0;
  this->m_pBlankShdr = (ERShader *)0x0;
  this->m_pCustomCharacter = (CustomCharacter *)0x0;
  this->m_pMirrorShdr = (ERShader *)0x0;
  this->m_pGlassModel = (ERModel *)0x0;
  Init__17EVanityMirrorMenuP4ESimP12ISimInstanceUi(this,local_100,local_fc,local_f8);
  return this;
}

void EVanityMirrorMenu::~EVanityMirrorMenu(int __in_chrg) {
	void *p;
	
  bool bVar1;
  EUIObjectNode__vtable *pEVar2;
  ECharedTextMenuItem *pEVar3;
  EUIPrompt *pEVar4;
  EUIIcon *pEVar5;
  
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_17EVanityMirrorMenu;
  CleanUp__17EVanityMirrorMenu(this);
  ___15EAnimController(&this->m_ac,2);
  if ((this != (EVanityMirrorMenu *)0xfffffaa0) &&
     (this->m_pHeadMenuItems != (ECharedTextMenuItem *)&this->m_originalCharacter)) {
    for (pEVar3 = this->m_pHeadMenuItems + 4; pEVar2 = (pEVar3->field0_0x0).__vtable,
        (*(code *)pEVar2->Draw)
                  ((undefined *)
                   ((int)&(pEVar3->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                   (int)*(short *)&pEVar2->Update),0), this->m_pHeadMenuItems != pEVar3;
        pEVar3 = pEVar3 + -1) {
    }
  }
  ___10EPromptBar(&this->m_PromptBar,2);
  if ((this != (EVanityMirrorMenu *)0xfffffcc8) &&
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
  if ((this != (EVanityMirrorMenu *)0xffffff80) && (this->m_dpadIcons != &this->m_XIcon)) {
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
                    /* inlined from c:/eor/src2/games/sims/ESRC/vanitymirror.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EVanityMirrorMenu::Init(ESim *pPerson, ISimInstance *pObj, u32 nWhichController) {
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
	EUIMenu *this;
	EUIMenu *this;
	EUIObjectNode *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	u32 userParam;
	
  undefined *puVar1;
  EUIIconDef *pEVar2;
  int *piVar3;
  EUIVirtualCtrl **ppEVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  ESim *pEVar8;
  cXPerson__150_1300 *pcVar9;
  cXPerson__150_1300__vtable *pcVar10;
  EUIObjectNode__vtable *pEVar11;
  EUIIconDef__vtable *pEVar12;
  ulong *puVar13;
  EUIStaticTextIcon *pEVar14;
  bool bVar15;
  cXObject__56_2557 *pcVar16;
  ObjSelector *pOVar17;
  ELocString EVar18;
  ERShader *pEVar19;
  ERModel *pEVar20;
  ERFont *pEVar21;
  CustomCharacter *pCVar22;
  short *psVar23;
  EUIMenu *pEVar24;
  ulong uVar25;
  short *psVar26;
  char *pcVar27;
  ulong in_t1;
  ulong uVar28;
  ulong in_t2;
  ulong uVar29;
  ECharedTextMenuItem *pEVar30;
  undefined8 unaff_s0;
  int iVar31;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  EAnimController *this_00;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  EUIIcon *this_01;
  undefined8 unaff_s7;
  EUIIcon *this_02;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar32;
  float fVar33;
  EVec2 vTextSize;
  int local_120;
  __vtbl_ptr_type *local_11c;
  int local_110;
  int iStack_10c;
  int local_108;
  uint uStack_104;
  int local_100;
  __vtbl_ptr_type *local_fc;
  EUIIconDef__vtable *local_f0;
  EUIPrompt *local_e0;
  EPromptBar *local_dc;
  ECharedTextMenuItem *local_d8;
  int *local_d4;
  int *local_d0;
  short *local_cc;
  EUIPrompt *local_c8;
  ECharedTextMenuItem *local_c4;
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
  
  local_80 = (undefined4)unaff_s4;
  uStack_7c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s3;
  uStack_8c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_b0 = (undefined4)unaff_s1;
  uStack_ac = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s8;
  uStack_3c = (undefined4)((ulong)unaff_s8 >> 0x20);
  iVar31 = 0;
  local_50 = (undefined4)unaff_s7;
  uStack_4c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_60 = (undefined4)unaff_s6;
  uStack_5c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s5;
  uStack_6c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_a0 = (undefined4)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_c0 = (undefined4)unaff_s0;
  uStack_bc = (undefined4)((ulong)unaff_s0 >> 0x20);
  *(undefined4 *)&this->m_bExitMirror = 0;
  *(undefined4 *)&this->m_bSwitchCameraMode = 0;
  this->m_fTransitionTime = 0.0;
  this->m_nTransitionMode = '\0';
  this->m_fAnimSoundTimer = 0.0;
  this->m_pAnimRef = (AnimRef *)0x0;
  this->m_pCam = (ESimsCam *)0x0;
  this->m_pMySim = pPerson;
  this->m_nControllerID = nWhichController;
  this->m_pWorldObject = pObj;
  *(undefined4 *)&this->m_bReachedMidpoint = 1;
  *(undefined4 *)&this->m_bUpdateThumbnail = 1;
  pcVar16 = GetXOb__12ISimInstance(pObj);
  pOVar17 = (ObjSelector *)
            (*(code *)pcVar16->__vtable[1].SetLevel)
                      ((int)&pcVar16->_vb2602 + (int)*(short *)&pcVar16->__vtable[1].GetTreeID);
  pOVar17 = GetMasterSelector__11ObjSelector(pOVar17);
  EVar18 = GetCatalogShortName__11ObjSelector(pOVar17);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
  psVar23 = *EVar18.ptr;
                    /* end of inlined section */
  local_d0 = &local_110;
  local_d4 = &local_120;
  sVar7 = *psVar23;
  this->m_szShortName[0] = sVar7;
  if (sVar7 != 0) {
    psVar26 = this->m_szShortName;
    do {
      iVar31 = iVar31 + 1;
      psVar26 = psVar26 + 1;
      psVar23 = psVar23 + 1;
      if (0x1f < iVar31) break;
      sVar7 = *psVar23;
      *psVar26 = sVar7;
    } while (sVar7 != 0);
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/esim.h */
  pEVar8 = this->m_pMySim;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/esim.h */
  pEVar8->m_nTypeOfObject = 1;
  *(undefined4 *)&pEVar8->m_bUseVanityDraw = 1;
                    /* end of inlined section */
  this->m_szShortName[0x1f] = 0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar19 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xa25eba9a,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  this->m_pBlankShdr = pEVar19;
  pEVar19 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xab5fdccc,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
  this->m_pMirrorShdr = pEVar19;
  local_c4 = this->m_pHeadMenuItems;
  pEVar20 = (ERModel *)
            AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,0x35bf373b,(EFile *)0x0,0);
  this->m_pGlassModel = pEVar20;
  pEVar21 = (ERFont *)
            AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pFont = pEVar21;
                    /* inlined from c:/eor/src2/games/sims/ESRC/esim.h */
  pcVar9 = this->m_pMySim->m_pPerson;
                    /* end of inlined section */
  pcVar10 = pcVar9->__vtable;
  uVar25 = (ulong)(int)pcVar10;
  local_d8 = this->m_pHeadMenuItems + 1;
  pCVar22 = (CustomCharacter *)
            (*(code *)pcVar10->GetRecordTicksElapsed)
                      ((int)&pcVar9->_vb1187 + (int)*(short *)&pcVar10->GetRecordCurTicks);
  this->m_pCustomCharacter = pCVar22;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  uVar5 = (uint)&pCVar22->field_0x7 & 7;
  uVar6 = (uint)pCVar22 & 7;
  uVar28 = (*(long *)(&pCVar22->field_0x7 + -uVar5) << (7 - uVar5) * 8 |
           in_t1 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
           *(ulong *)((int)pCVar22 - uVar6) >> uVar6 * 8;
  uVar5 = (uint)&pCVar22->m_nFacialHairIndex & 7;
  uVar6 = (uint)&pCVar22->m_nBodyType & 7;
  uVar29 = (*(long *)(&pCVar22->m_nFacialHairIndex + -uVar5) << (7 - uVar5) * 8 |
           in_t2 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
           *(ulong *)(&pCVar22->m_nBodyType + -uVar6) >> uVar6 * 8;
  uVar5 = (uint)&pCVar22->field_0x17 & 7;
  uVar6 = (uint)&pCVar22->m_nSkinColor & 7;
  uVar25 = (*(long *)(&pCVar22->field_0x17 + -uVar5) << (7 - uVar5) * 8 |
           uVar25 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
           *(ulong *)(&pCVar22->m_nSkinColor + -uVar6) >> uVar6 * 8;
  puVar1 = &(this->m_originalCharacter).field_0x7;
  uVar5 = (uint)puVar1 & 7;
  puVar13 = (ulong *)(puVar1 + -uVar5);
  *puVar13 = *puVar13 & -1L << (uVar5 + 1) * 8 | uVar28 >> (7 - uVar5) * 8;
  uVar5 = (uint)&this->m_originalCharacter & 7;
  puVar13 = (ulong *)((int)&this->m_originalCharacter - uVar5);
  *puVar13 = uVar28 << uVar5 * 8 | *puVar13 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  pcVar27 = &(this->m_originalCharacter).m_nFacialHairIndex;
  uVar5 = (uint)pcVar27 & 7;
  pcVar27 = pcVar27 + -uVar5;
  *(ulong *)pcVar27 = *(ulong *)pcVar27 & -1L << (uVar5 + 1) * 8 | uVar29 >> (7 - uVar5) * 8;
  pcVar27 = &(this->m_originalCharacter).m_nBodyType;
  uVar5 = (uint)pcVar27 & 7;
  pcVar27 = pcVar27 + -uVar5;
  *(ulong *)pcVar27 =
       uVar29 << uVar5 * 8 | *(ulong *)pcVar27 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  puVar1 = &(this->m_originalCharacter).field_0x17;
  uVar5 = (uint)puVar1 & 7;
  puVar13 = (ulong *)(puVar1 + -uVar5);
  *puVar13 = *puVar13 & -1L << (uVar5 + 1) * 8 | uVar25 >> (7 - uVar5) * 8;
  pcVar27 = &(this->m_originalCharacter).m_nSkinColor;
  uVar5 = (uint)pcVar27 & 7;
  pcVar27 = pcVar27 + -uVar5;
  *(ulong *)pcVar27 =
       uVar25 << uVar5 * 8 | *(ulong *)pcVar27 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar19 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x542a4dcf,(EFile *)0x0,0);
  this->m_pMenuBevelShdr = pEVar19;
  pEVar19 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x4185128e,(EFile *)0x0,0);
  this->m_pMenuBevelBottomShdr = pEVar19;
  pEVar19 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x2d14ac7d,(EFile *)0x0,0);
  this->m_pDPadBackgroundShdr = pEVar19;
  pEVar19 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xc9ff8b99,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pSideMenuCurveShdr = pEVar19;
  psVar23 = GetCreateASimString__7EGlobalPCc(&_globals,"hairhat");
  SetText__19ECharedTextMenuItemPCUs(this->m_pHeadMenuItems,psVar23);
  psVar23 = GetCreateASimString__7EGlobalPCc(&_globals,"hair color");
  SetText__19ECharedTextMenuItemPCUs(this->m_pHeadMenuItems + 1,psVar23);
  bVar15 = IsAdult__4ESim(pPerson);
  if (bVar15) {
    bVar15 = IsMale__4ESim(pPerson);
    if (bVar15) {
      pcVar27 = "facial hair";
    }
    else {
      pcVar27 = "makeup";
    }
    psVar23 = GetCreateASimString__7EGlobalPCc(&_globals,pcVar27);
    SetText__19ECharedTextMenuItemPCUs(this->m_pHeadMenuItems + 2,psVar23);
  }
  else {
    psVar23 = GetCreateASimString__7EGlobalPCc(&_globals,"variations");
    SetText__19ECharedTextMenuItemPCUs(this->m_pHeadMenuItems + 2,psVar23);
  }
  psVar23 = GetCreateASimString__7EGlobalPCc(&_globals,"eye color");
  SetText__19ECharedTextMenuItemPCUs(this->m_pHeadMenuItems + 3,psVar23);
  psVar23 = GetCreateASimString__7EGlobalPCc(&_globals,"accessories");
  fVar33 = 0.0;
  SetText__19ECharedTextMenuItemPCUs(this->m_pHeadMenuItems + 4,psVar23);
  this_01 = &this->m_XIcon;
  local_cc = this->m_szShortName;
  local_e0 = this->m_Prompts;
  local_c8 = this->m_Prompts + 1;
  local_dc = &this->m_PromptBar;
  this_02 = &this->m_TriIcon;
  this_00 = &this->m_ac;
  pEVar30 = this->m_pHeadMenuItems;
  iVar31 = 4;
  do {
    fVar32 = GetWidth__19ECharedTextMenuItem(pEVar30);
    if (fVar33 < fVar32) {
      fVar33 = fVar32;
    }
    iVar31 = iVar31 + -1;
    pEVar30 = pEVar30 + 1;
  } while (-1 < iVar31);
  pEVar11 = this->m_pHeadMenuItems[0].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  iVar31 = 4;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vTextSize.field0_0x0.d[1] = 0.025;
                    /* end of inlined section */
  vTextSize.field0_0x0.d[0] = fVar33;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  (*(code *)pEVar11->RemoveChild)
            ((int)&(local_c4->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar11->AddChild,&vTextSize);
  local_11c = (__vtbl_ptr_type *)0x0;
  pEVar11 = this->m_pHeadMenuItems[1].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vTextSize.field0_0x0.d[1] = 0.057;
                    /* end of inlined section */
  vTextSize.field0_0x0.d[0] = fVar33;
  (*(code *)pEVar11->RemoveChild)
            ((int)&(local_d8->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar11->AddChild,&vTextSize);
  pEVar11 = this->m_pHeadMenuItems[2].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vTextSize.field0_0x0.d[1] = 0.059;
                    /* end of inlined section */
  vTextSize.field0_0x0.d[0] = fVar33;
  (*(code *)pEVar11->RemoveChild)
            ((int)&this->m_pHeadMenuItems[2].field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar11->AddChild,&vTextSize);
  pEVar11 = this->m_pHeadMenuItems[3].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vTextSize.field0_0x0.d[1] = 0.059;
                    /* end of inlined section */
  vTextSize.field0_0x0.d[0] = fVar33;
  (*(code *)pEVar11->RemoveChild)
            ((int)&this->m_pHeadMenuItems[3].field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar11->AddChild,&vTextSize);
  pEVar11 = this->m_pHeadMenuItems[4].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vTextSize.field0_0x0.d[1] = 0.059;
                    /* end of inlined section */
  vTextSize.field0_0x0.d[0] = fVar33;
  (*(code *)pEVar11->RemoveChild)
            ((int)&this->m_pHeadMenuItems[4].field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar11->AddChild,&vTextSize);
  this->m_fMenuWidth = fVar33 + 0.056;
  pEVar24 = (EUIMenu *)__builtin_new(0x98);
  pEVar24 = __7EUIMenuiifff(pEVar24,-1,0,0.05,(float)local_11c,(float)local_11c);
  this->m_pMenu = pEVar24;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  pEVar11 = (pEVar24->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  sVar7 = *(short *)&pEVar11->StateChanged;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_120 = 0x3d8b4396;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_d4[2] = 0x3e78d4fe;
                    /* end of inlined section */
  (*(code *)pEVar11->OnButtonRepeat)((int)pEVar24->m_maxBackShdrSize + sVar7 + -0x44);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  pEVar11 = (this->m_pMenu->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vTextSize.field0_0x0.d[1] = 0.5;
                    /* end of inlined section */
  vTextSize.field0_0x0.d[0] = fVar33;
  (*(code *)pEVar11->RemoveChild)
            ((int)this->m_pMenu->m_maxBackShdrSize + *(short *)&pEVar11->AddChild + -0x44,&vTextSize
            );
  pEVar11 = (this->m_pMenu->field0_0x0).__vtable;
  (*(code *)pEVar11[2].RemoveChild)
            ((int)this->m_pMenu->m_maxBackShdrSize + *(short *)&pEVar11[2].AddChild + -0x44,4);
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
  pEVar24 = this->m_pMenu;
  pEVar11 = (pEVar24->field0_0x0).__vtable;
  pEVar24->m_optgap = 0.02;
  (*(code *)pEVar11[2].Message)
            ((int)pEVar24->m_maxBackShdrSize + *(short *)&pEVar11[2].SetBoxDims + -0x44);
  pEVar24 = this->m_pMenu;
  pEVar11 = (pEVar24->field0_0x0).__vtable;
  pEVar24->m_yoff = -0.01;
  (*(code *)pEVar11[2].Message)
            ((int)pEVar24->m_maxBackShdrSize + *(short *)&pEVar11[2].SetBoxDims + -0x44);
                    /* end of inlined section */
  pEVar11 = (this->m_pMenu->field0_0x0).__vtable;
  (*(code *)pEVar11[2].GetPos)
            ((int)this->m_pMenu->m_maxBackShdrSize + *(short *)&pEVar11[2].OnStickRepeat + -0x44,0,0
             ,0);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_pMenu->field0_0x0).m_id = 0;
  local_c4->m_nNextMessage = 0xe;
  local_c4->m_nPrevMessage = 0xf;
  local_d8->m_nPrevMessage = 0x23;
  local_d8->m_nNextMessage = 0x22;
  this->m_pHeadMenuItems[2].m_nPrevMessage = 0x13;
  this->m_pHeadMenuItems[2].m_nNextMessage = 0x12;
  this->m_pHeadMenuItems[3].m_nPrevMessage = 0x27;
  this->m_pHeadMenuItems[3].m_nNextMessage = 0x26;
  this->m_pHeadMenuItems[4].m_nPrevMessage = 0x17;
  this->m_pHeadMenuItems[4].m_nNextMessage = 0x16;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pEVar30 = this->m_pHeadMenuItems;
  do {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vTextSize.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vTextSize.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
    iVar31 = iVar31 + -1;
    pEVar11 = (this->m_pMenu->field0_0x0).__vtable;
    (*(code *)pEVar11[2].SetBoxDims)
              ((int)this->m_pMenu->m_maxBackShdrSize + *(short *)&pEVar11[2].SetPos + -0x44,pEVar30,
               &vTextSize);
    pEVar30 = pEVar30 + 1;
  } while (-1 < iVar31);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  SetActiveController__13EUIObjectNodeUi(&this->m_pMenu->field0_0x0,this->m_nControllerID);
  pEVar11 = (this->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar33 = 0.05;
                    /* end of inlined section */
  (*(code *)pEVar11[1].GetPos)
            ((int)this->m_dpadIcons + *(short *)&pEVar11[1].OnStickRepeat + -0x80,this->m_pMenu);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  this->m_nNumPrompts = 2;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_110 = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_d0[1] = -1;
  local_108 = 0;
  pEVar12 = (this->m_XIcon).m_def.__vtable;
  local_d0[3] = 1;
  local_100 = 0;
  puVar1 = (undefined *)((int)&(this->m_XIcon).m_def.m_trigger + 3);
  uVar5 = (uint)puVar1 & 7;
  puVar13 = (ulong *)(puVar1 + -uVar5);
  *puVar13 = *puVar13 & -1L << (uVar5 + 1) * 8 | CONCAT44(iStack_10c,1) >> (7 - uVar5) * 8;
  pEVar2 = &(this->m_XIcon).m_def;
  uVar5 = (uint)pEVar2 & 7;
  puVar13 = (ulong *)((int)pEVar2 - uVar5);
  *puVar13 = CONCAT44(iStack_10c,1) << uVar5 * 8 | *puVar13 & 0xffffffffffffffffU >> (8 - uVar5) * 8
  ;
  puVar1 = (undefined *)((int)&(this->m_XIcon).m_def.m_colorIdx + 3);
  uVar5 = (uint)puVar1 & 7;
  puVar13 = (ulong *)(puVar1 + -uVar5);
  *puVar13 = *puVar13 & -1L << (uVar5 + 1) * 8 | ((ulong)uStack_104 << 0x20) >> (7 - uVar5) * 8;
  piVar3 = &(this->m_XIcon).m_def.m_selColorIdx;
  uVar5 = (uint)piVar3 & 7;
  puVar13 = (ulong *)((int)piVar3 - uVar5);
  *puVar13 = ((ulong)uStack_104 << 0x20) << uVar5 * 8 |
             *puVar13 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  puVar1 = (undefined *)((int)&(this->m_XIcon).m_def.__vtable + 3);
  uVar5 = (uint)puVar1 & 7;
  puVar13 = (ulong *)(puVar1 + -uVar5);
  *puVar13 = *puVar13 & -1L << (uVar5 + 1) * 8 | 0x3a890800000000U >> (7 - uVar5) * 8;
  ppEVar4 = &(this->m_XIcon).m_def.m_pCtrl;
  uVar5 = (uint)ppEVar4 & 7;
  puVar13 = (ulong *)((int)ppEVar4 - uVar5);
  *puVar13 = 0x3a890800000000 << uVar5 * 8 | *puVar13 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  (this->m_XIcon).m_def.__vtable = pEVar12;
  local_fc = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar31 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon).field0_0x0.m_WDH.field0_0x0.d[0] = fVar33;
                    /* end of inlined section */
  vTextSize.field0_0x0.d[1] = 32.0 / (float)iVar31;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon).field0_0x0.m_WDH.field0_0x0.d[2] = vTextSize.field0_0x0.d[1];
  vTextSize.field0_0x0.d[0] = fVar33;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(this_01,-0x3e263a13);
  InitInActiveShader__7EUIIconi(this_01,-0x3e263a13);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_f0 = (this->m_TriIcon).m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_120 = 0;
  puVar1 = (undefined *)((int)&(this->m_TriIcon).m_def.m_trigger + 3);
  uVar5 = (uint)puVar1 & 7;
  puVar13 = (ulong *)(puVar1 + -uVar5);
  *puVar13 = *puVar13 & -1L << (uVar5 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar5) * 8;
  pEVar2 = &(this->m_TriIcon).m_def;
  uVar5 = (uint)pEVar2 & 7;
  puVar13 = (ulong *)((int)pEVar2 - uVar5);
  *puVar13 = -0xffffffff << uVar5 * 8 | *puVar13 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon).m_def.m_colorIdx + 3);
  uVar5 = (uint)puVar1 & 7;
  puVar13 = (ulong *)(puVar1 + -uVar5);
  *puVar13 = *puVar13 & -1L << (uVar5 + 1) * 8 | 0x100000000U >> (7 - uVar5) * 8;
  piVar3 = &(this->m_TriIcon).m_def.m_selColorIdx;
  uVar5 = (uint)piVar3 & 7;
  puVar13 = (ulong *)((int)piVar3 - uVar5);
  *puVar13 = 0x100000000 << uVar5 * 8 | *puVar13 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon).m_def.__vtable + 3);
  uVar5 = (uint)puVar1 & 7;
  puVar13 = (ulong *)(puVar1 + -uVar5);
  *puVar13 = *puVar13 & -1L << (uVar5 + 1) * 8 | 0x3a890800000000U >> (7 - uVar5) * 8;
  ppEVar4 = &(this->m_TriIcon).m_def.m_pCtrl;
  uVar5 = (uint)ppEVar4 & 7;
  puVar13 = (ulong *)((int)ppEVar4 - uVar5);
  *puVar13 = 0x3a890800000000 << uVar5 * 8 | *puVar13 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  local_11c = _vt_10EUIIconDef;
  (this->m_TriIcon).m_def.__vtable = local_f0;
                    /* end of inlined section */
  iVar31 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon).field0_0x0.m_WDH.field0_0x0.d[0] = fVar33;
                    /* end of inlined section */
  vTextSize.field0_0x0.d[1] = 32.0 / (float)iVar31;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon).field0_0x0.m_WDH.field0_0x0.d[2] = vTextSize.field0_0x0.d[1];
  vTextSize.field0_0x0.d[0] = fVar33;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(this_02,0x2ccf500a);
  InitInActiveShader__7EUIIconi(this_02,0x2ccf500a);
  pEVar11 = this->m_Prompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar7 = *(short *)&pEVar11[2].StateChanged;
  pEVar14 = &local_e0->field0_0x0;
  psVar23 = GetCreateASimString__7EGlobalPCc(&_globals,"accept");
  (*(code *)pEVar11[2].OnButtonRepeat)
            ((int)(pEVar14->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar7 + 4,psVar23,0x20)
  ;
  AddIcon__9EUIPromptP7EUIIcon(local_e0,this_01);
  pEVar11 = this->m_Prompts[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar7 = *(short *)&pEVar11[2].StateChanged;
  pEVar14 = &local_c8->field0_0x0;
  psVar23 = GetCreateASimString__7EGlobalPCc(&_globals,"back");
  (*(code *)pEVar11[2].OnButtonRepeat)
            ((int)(pEVar14->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar7 + 4,psVar23,0x20)
  ;
  AddIcon__9EUIPromptP7EUIIcon(local_c8,this_02);
  Init__10EPromptBar(local_dc);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  vTextSize.field0_0x0.d[0] = (_13EUIObjectNode_SAFE_RIGHT + 0.178) * 0.5;
  vTextSize.field0_0x0.d[1] = _13EUIObjectNode_SAFE_BOTTOM - 23.0 / (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  Setup__10EPromptBarP9EUIPromptUiG5EVec2(local_dc,local_e0,this->m_nNumPrompts,&vTextSize);
  SetupDpadWin__17EVanityMirrorMenu(this);
  SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&vTextSize,this->m_pFont,SUB41(local_cc,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  this->m_fTitleWidth = vTextSize.field0_0x0.d[0] + 0.07;
  this->m_fTitleXPos = 0.5 - (vTextSize.field0_0x0.d[0] + 0.07) * 0.5;
  bVar15 = IsAdult__4ESim(this->m_pMySim);
  if (bVar15) {
    bVar15 = IsMale__4ESim(this->m_pMySim);
    if (bVar15) {
      Init__15EAnimControllerUi(this_00,0xffa60350);
    }
    else {
      Init__15EAnimControllerUi(this_00,0x1fb80af4);
    }
    this->m_nIdleAnimationID[2] = 0x79a5f747;
    this->m_nIdleAnimationID[0] = 0xb1a5cf2d;
    this->m_nIdleAnimationID[1] = 0x1d2ac82c;
    this->m_nIdleAnimationID[3] = 0xe0aca6fd;
    SetTrackAnim__15EAnimControlleriUi(this_00,1,0xe0aca6fd);
  }
  else {
    Init__15EAnimControllerUi(this_00,0xd5e79699);
    this->m_nIdleAnimationID[0] = 0xfe05d224;
    this->m_nIdleAnimationID[1] = 0x670c839e;
    SetTrackAnim__15EAnimControlleriUi(this_00,1,0xfe05d224);
    this->m_nCurrentChildAnim = 0;
  }
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
                    /* end of inlined section */
                    /* end of inlined section */
  (this->m_ac).m_modelScaler = 0.0002441406;
  SetGlobalSpeed__15EAnimControllerf(this_00,1.0);
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
  (this->m_ac).m_postComputeUserParam = (uint)this->m_pMySim;
  (this->m_ac).m_pfnPostComputeCallback = ScaleBones__4ESimUiRC5EMat4P11ERCharacterP5EMat4;
                    /* end of inlined section */
  *(undefined4 *)&this->m_bMiddleAnim = 0;
  iVar31 = rand();
  this->m_nRepeatIdleCount = iVar31 % 5;
  return;
}

void EVanityMirrorMenu::CleanUp() {
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
    CreateThumbnail__4ESimb(this->m_pMySim,false);
    pEVar3 = (this->field0_0x0).__vtable;
  }
  (*(code *)pEVar3[1].RemoveChild)
            ((int)this->m_dpadIcons + *(short *)&pEVar3[1].AddChild + -0x80,this->m_pMenu);
  DelRef__9EResource(&this->m_pFont->field0_0x0);
  this->m_pFont = (ERFont *)0x0;
  if (this->m_pBlankShdr != (ERShader *)0x0) {
    iVar6 = 3;
    pEVar3 = (this->field0_0x0).__vtable;
    pEVar5 = this->m_dpadIcons;
    while( true ) {
      iVar6 = iVar6 + -1;
      (*(code *)pEVar3[1].RemoveChild)
                ((int)this->m_dpadIcons + *(short *)&pEVar3[1].AddChild + -0x80,pEVar5);
      if (iVar6 < 0) break;
      pEVar3 = (this->field0_0x0).__vtable;
      pEVar5 = pEVar5 + 1;
    }
  }
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
  Reset__10EPromptBar(&this->m_PromptBar);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)this->m_Prompts);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)(this->m_Prompts + 1));
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

void EVanityMirrorMenu::Draw(ERC *prc) {
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
  undefined4 uVar7;
  undefined local_150 [8];
  undefined4 local_148;
  undefined4 local_144;
  float local_140;
  undefined4 local_13c;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
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
  
                    /* end of inlined section */
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
    local_150._4_4_ = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_140 = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_13c = 0x3de76c8b;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_130 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_12c = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_11c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_120 = 0x3f800000;
                    /* end of inlined section */
    fVar5 = 0.055;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,local_150,
               (EVec2 *)&local_140,&local_130,&local_120,0x35f4b0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    uVar7 = 0x3f3eb852;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_150._0_4_ = 0.173;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_140 = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_13c = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_110 = 0;
    local_10c = 0x3f800000;
    local_100 = 0x3f800000;
    local_fc = 0;
                    /* end of inlined section */
    local_150._4_4_ = uVar6;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,local_150,
               (EVec2 *)&local_140,&local_110,&local_100,0x35f4b0);
    local_140 = this->m_fMenuWidth + fVar5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_150._0_4_ = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_150._4_4_ = 0x3de76c8b;
    local_130 = 0;
    local_12c = 0x3f800000;
    local_f0 = 0x3f800000;
    local_ec = 0;
                    /* end of inlined section */
    local_13c = uVar7;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,local_150,
               (EVec2 *)&local_140,&local_130,&local_f0,0x35f4b0);
    local_140 = this->m_fMenuWidth + fVar5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_150._0_4_ = 0.18;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_130 = 0;
    local_12c = 0x3f800000;
    local_e0 = 0x3f800000;
    local_dc = 0;
                    /* end of inlined section */
    local_150._4_4_ = uVar7;
    local_13c = uVar6;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,local_150,
               (EVec2 *)&local_140,&local_130,&local_e0,0x35f4b0);
    Select__8ERShaderP3ERCi(this->m_pMenuBevelShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    local_150._0_4_ = this->m_fMenuWidth + fVar5;
    local_140 = this->m_fMenuWidth + 0.065;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_150._4_4_ = 0x3de76c8b;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_130 = 0;
    local_12c = 0x3f800000;
    local_120 = 0x3f800000;
    local_11c = 0;
    local_c4 = 0x3f800000;
    local_c8 = 0x3f800000;
    local_cc = 0x3f800000;
    local_d0 = 0x3f800000;
                    /* end of inlined section */
    local_13c = uVar6;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,local_150,
               (EVec2 *)&local_140,&local_130,&local_120,&local_d0);
    Select__8ERShaderP3ERCi(this->m_pMenuBevelBottomShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_150._4_4_ = 0x3de76c8b;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_150._0_4_ = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_140 = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_13c = 0x3dfbe76d;
    local_130 = 0;
    local_12c = 0x3f800000;
    local_120 = 0x3f800000;
    local_11c = 0;
    local_104 = 0x3f800000;
    local_108 = 0x3f800000;
    local_10c = 0x3f800000;
    local_110 = 0x3f800000;
                    /* end of inlined section */
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
    local_140 = 1.0;
    local_13c = 0x3f57ced9;
    local_130 = 0;
    local_12c = 0x3f800000;
    local_120 = 0x3f800000;
    local_11c = 0;
    local_104 = 0x3f800000;
    local_108 = 0x3f800000;
    local_10c = 0x3f800000;
    local_110 = 0x3f800000;
                    /* end of inlined section */
    local_150._4_4_ = uVar6;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,local_150,
               (EVec2 *)&local_140,&local_130,&local_120,&local_110);
    DrawTextBox__10EDialogWinP3ERCffff(prc,this->m_fTitleXPos,0.038,this->m_fTitleWidth,1.0);
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
    SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
    Select__6ERFontP3ERC(this->m_pFont,prc);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_140 = 0.5;
    local_13c = 0x3d8f5c29;
    local_150._0_4_ = 0.5;
    local_150._4_4_ = 0x3d8f5c29;
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
    local_13c = 0x3f800000;
    local_140 = 1.0;
    local_124 = 0x3f800000;
    local_128 = 0x3f800000;
    local_12c = 0x3f800000;
    local_130 = 0x3f800000;
                    /* end of inlined section */
    local_150._4_4_ = uVar7;
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,local_150,
               (EVec2 *)&local_140,&local_130);
    DrawTextBox__10EDialogWinP3ERCffff(prc,0.04,0.414,this->m_fMenuWidth,1.0);
    DrawTextBox__10EDialogWinP3ERCffff(prc,0.04,0.493,this->m_fMenuWidth,1.0);
    DrawTextBox__10EDialogWinP3ERCffff(prc,0.04,0.57,this->m_fMenuWidth,1.0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_144 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_148 = 0x3f800000;
    local_150._4_4_ = 0x3f800000;
                    /* end of inlined section */
    local_150._0_4_ = 1.0;
    DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
              (prc,0.04,0.29,0.102,this->m_fMenuWidth,1.0,(EVec4 *)local_150);
    Select__8ERShaderP3ERCi(this->m_pDPadBackgroundShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_150._0_4_ = -0.22;
    local_150._4_4_ = 0x3f3f75c9;
    local_13c = 0x3f800000;
    local_140 = 1.0;
    local_124 = 0x3f800000;
    local_128 = 0x3f800000;
    local_12c = 0x3f800000;
    local_130 = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,local_150,
               (EVec2 *)&local_140,&local_130);
    Draw__10EPromptBarP3ERC(&this->m_PromptBar,prc);
    Draw__13EUIObjectNodeP3ERC(&this->field0_0x0,prc);
  }
  return;
}

bool EVanityMirrorMenu::MirrorUpdate() {
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
	u32 i;
	u32 x;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	ESim *this;
	
  undefined *puVar1;
  char *pcVar2;
  uint uVar3;
  EUIObjectNode__vtable *pEVar4;
  EUIVirtualCtrl__vtable *pEVar5;
  cXObject__150_1187 *pcVar6;
  cXObject__150_1187__vtable *pcVar7;
  ulong *puVar8;
  cSoundPlayer *this_00;
  bool bVar9;
  ushort sourceID;
  ESimsCam *pEVar10;
  CustomCharacter *pCVar11;
  int iVar12;
  int iVar13;
  AnimRef *pAVar14;
  TimePropsAssociation__0_5614 *pTVar15;
  ESimBoneIdx EVar16;
  uint uVar17;
  long lVar18;
  EVanitySoundEvent *pEVar19;
  EAnimController *this_01;
  CustomCharacter *pCVar20;
  char *pcVar21;
  EVanitySoundEvent *pEVar22;
  EVec3 *vTarget;
  ESimBoneIdx EVar23;
  ulong in_a2;
  ulong uVar24;
  ulong uVar25;
  ulong in_t0;
  ulong uVar26;
  float *pfVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  CustomCharacter OldCharData;
  
  pCVar20 = &OldCharData;
  if (this->m_pCam == (ESimsCam *)0x0) {
    return false;
  }
  TurnOffAllHighlights__11EIObjectManUi((_globals._pCurHouse)->m_pObjectMan,0);
  TurnOffAllHighlights__11EIObjectManUi((_globals._pCurHouse)->m_pObjectMan,1);
  fVar31 = _dt;
  fVar28 = this->m_fTransitionTime;
  if (fVar28 < 1.0) {
    if (*(int *)&this->m_bReachedMidpoint == 0) {
      if (this->m_nTransitionMode == '\0') {
        *(undefined4 *)&this->m_bSwitchCameraMode = 0;
        fVar31 = fVar31 * 0.6666667;
      }
      else {
        *(undefined4 *)&this->m_bSwitchCameraMode = 1;
      }
      this->m_fTransitionTime = fVar28 + fVar31;
      fVar31 = this->m_fTransitionTime;
      if (fVar31 < 1.0) {
                    /* end of inlined section */
        if (this->m_nTransitionMode == '\0') {
                    /* inlined from /eor/src2/common/math/e_math.h */
          fVar28 = (this->m_vOldEye).field0_0x0.d[0];
          fVar30 = (this->m_vOldTarget).field0_0x0.d[0];
          fVar31 = -fVar31 * fVar31 * fVar31 + (fVar31 + fVar31) * fVar31;
          fVar29 = (this->m_vVanityTarget).field0_0x0.d[0];
          OldCharData._8_4_ =
               (this->m_vOldEye).field0_0x0.d[2] +
               ((this->m_vMidpoint).field0_0x0.d[2] - (this->m_vOldEye).field0_0x0.d[2]) * fVar31;
                    /* end of inlined section */
          OldCharData._0_8_ =
               CONCAT44((this->m_vOldEye).field0_0x0.d[1] +
                        ((this->m_vMidpoint).field0_0x0.d[1] - (this->m_vOldEye).field0_0x0.d[1]) *
                        fVar31,fVar28 + ((this->m_vMidpoint).field0_0x0.d[0] - fVar28) * fVar31);
          uVar17 = (uint)&OldCharData.field_0x7 & 7;
          puVar8 = (ulong *)(&OldCharData.field_0x7 + -uVar17);
          *puVar8 = *puVar8 & -1L << (uVar17 + 1) * 8 | OldCharData._0_8_ >> (7 - uVar17) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          OldCharData._16_8_ =
               CONCAT44((this->m_vOldTarget).field0_0x0.d[1] +
                        ((this->m_vVanityTarget).field0_0x0.d[1] -
                        (this->m_vOldTarget).field0_0x0.d[1]) * fVar31,
                        fVar30 + (fVar29 - fVar30) * fVar31);
          uVar17 = (uint)&OldCharData.field_0x17 & 7;
          puVar8 = (ulong *)(&OldCharData.field_0x17 + -uVar17);
          *puVar8 = *puVar8 & -1L << (uVar17 + 1) * 8 | OldCharData._16_8_ >> (7 - uVar17) * 8;
        }
        else {
                    /* inlined from /eor/src2/common/math/e_math.h */
          fVar28 = (this->m_vVanityEye).field0_0x0.d[0];
          fVar31 = -fVar31 * fVar31 * fVar31 + (fVar31 + fVar31) * fVar31;
          OldCharData._8_4_ =
               (this->m_vVanityEye).field0_0x0.d[2] +
               ((this->m_vMidpoint).field0_0x0.d[2] - (this->m_vVanityEye).field0_0x0.d[2]) * fVar31
          ;
                    /* end of inlined section */
          OldCharData._0_8_ =
               CONCAT44((this->m_vVanityEye).field0_0x0.d[1] +
                        ((this->m_vMidpoint).field0_0x0.d[1] - (this->m_vVanityEye).field0_0x0.d[1])
                        * fVar31,fVar28 + ((this->m_vMidpoint).field0_0x0.d[0] - fVar28) * fVar31);
          uVar17 = (uint)&OldCharData.field_0x7 & 7;
          puVar8 = (ulong *)(&OldCharData.field_0x7 + -uVar17);
          *puVar8 = *puVar8 & -1L << (uVar17 + 1) * 8 | OldCharData._0_8_ >> (7 - uVar17) * 8;
          puVar1 = (undefined *)((int)&(this->m_vVanityTarget).field0_0x0 + 7);
          uVar17 = (uint)puVar1 & 7;
          uVar3 = (uint)&this->m_vVanityTarget & 7;
          OldCharData._16_8_ =
               (*(long *)(puVar1 + -uVar17) << (7 - uVar17) * 8 |
               (long)(int)&this->m_vVanityEye & 0xffffffffffffffffU >> (uVar17 + 1) * 8) &
               -1L << (8 - uVar3) * 8 | *(ulong *)((int)&this->m_vVanityTarget - uVar3) >> uVar3 * 8
          ;
          uVar17 = (uint)&OldCharData.field_0x17 & 7;
          puVar8 = (ulong *)(&OldCharData.field_0x17 + -uVar17);
          *puVar8 = *puVar8 & -1L << (uVar17 + 1) * 8 | OldCharData._16_8_ >> (7 - uVar17) * 8;
        }
        goto LAB_001ea458;
      }
      this->m_fTransitionTime = 0.0;
      *(undefined4 *)&this->m_bReachedMidpoint = 1;
    }
    else {
      if (this->m_nTransitionMode == '\0') {
        *(undefined4 *)&this->m_bSwitchCameraMode = 1;
      }
      else {
        *(undefined4 *)&this->m_bSwitchCameraMode = 0;
        fVar31 = fVar31 * 0.6666667;
      }
      this->m_fTransitionTime = fVar28 + fVar31;
      fVar31 = this->m_fTransitionTime;
      if (fVar31 < 1.0) {
                    /* end of inlined section */
        if (this->m_nTransitionMode == '\0') {
                    /* inlined from /eor/src2/common/math/e_math.h */
          fVar28 = (this->m_vMidpoint).field0_0x0.d[0];
          fVar31 = -fVar31 * fVar31 * fVar31 + fVar31 * fVar31 + fVar31;
          OldCharData._8_4_ =
               (this->m_vMidpoint).field0_0x0.d[2] +
               ((this->m_vVanityEye).field0_0x0.d[2] - (this->m_vMidpoint).field0_0x0.d[2]) * fVar31
          ;
                    /* end of inlined section */
          OldCharData._0_8_ =
               CONCAT44((this->m_vMidpoint).field0_0x0.d[1] +
                        ((this->m_vVanityEye).field0_0x0.d[1] - (this->m_vMidpoint).field0_0x0.d[1])
                        * fVar31,fVar28 + ((this->m_vVanityEye).field0_0x0.d[0] - fVar28) * fVar31);
          uVar17 = (uint)&OldCharData.field_0x7 & 7;
          puVar8 = (ulong *)(&OldCharData.field_0x7 + -uVar17);
          *puVar8 = *puVar8 & -1L << (uVar17 + 1) * 8 | OldCharData._0_8_ >> (7 - uVar17) * 8;
          puVar1 = (undefined *)((int)&(this->m_vVanityTarget).field0_0x0 + 7);
          uVar17 = (uint)puVar1 & 7;
          uVar3 = (uint)&this->m_vVanityTarget & 7;
          OldCharData._16_8_ =
               (*(long *)(puVar1 + -uVar17) << (7 - uVar17) * 8 |
               in_a2 & 0xffffffffffffffffU >> (uVar17 + 1) * 8) & -1L << (8 - uVar3) * 8 |
               *(ulong *)((int)&this->m_vVanityTarget - uVar3) >> uVar3 * 8;
          uVar17 = (uint)&OldCharData.field_0x17 & 7;
          puVar8 = (ulong *)(&OldCharData.field_0x17 + -uVar17);
          *puVar8 = *puVar8 & -1L << (uVar17 + 1) * 8 | OldCharData._16_8_ >> (7 - uVar17) * 8;
        }
        else {
                    /* inlined from /eor/src2/common/math/e_math.h */
          fVar28 = (this->m_vMidpoint).field0_0x0.d[0];
          fVar29 = (this->m_vVanityTarget).field0_0x0.d[0];
          fVar30 = (this->m_vOldTarget).field0_0x0.d[0];
          fVar31 = -fVar31 * fVar31 * fVar31 + fVar31 * fVar31 + fVar31;
          OldCharData._8_4_ =
               (this->m_vMidpoint).field0_0x0.d[2] +
               ((this->m_vOldEye).field0_0x0.d[2] - (this->m_vMidpoint).field0_0x0.d[2]) * fVar31;
                    /* end of inlined section */
          OldCharData._0_8_ =
               CONCAT44((this->m_vMidpoint).field0_0x0.d[1] +
                        ((this->m_vOldEye).field0_0x0.d[1] - (this->m_vMidpoint).field0_0x0.d[1]) *
                        fVar31,fVar28 + ((this->m_vOldEye).field0_0x0.d[0] - fVar28) * fVar31);
          uVar17 = (uint)&OldCharData.field_0x7 & 7;
          puVar8 = (ulong *)(&OldCharData.field_0x7 + -uVar17);
          *puVar8 = *puVar8 & -1L << (uVar17 + 1) * 8 | OldCharData._0_8_ >> (7 - uVar17) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          OldCharData._16_8_ =
               CONCAT44((this->m_vVanityTarget).field0_0x0.d[1] +
                        ((this->m_vOldTarget).field0_0x0.d[1] -
                        (this->m_vVanityTarget).field0_0x0.d[1]) * fVar31,
                        fVar29 + (fVar30 - fVar29) * fVar31);
          uVar17 = (uint)&OldCharData.field_0x17 & 7;
          puVar8 = (ulong *)(&OldCharData.field_0x17 + -uVar17);
          *puVar8 = *puVar8 & -1L << (uVar17 + 1) * 8 | OldCharData._16_8_ >> (7 - uVar17) * 8;
        }
LAB_001ea458:
        pEVar10 = GetCam__7EGlobal(&_globals);
        vTarget = (EVec3 *)&OldCharData.m_nSkinColor;
      }
      else {
        if (this->m_nTransitionMode == '\x01') {
          *(undefined4 *)&this->m_bExitMirror = 1;
          pEVar10 = GetCam__7EGlobal(&_globals);
          SetPos__8ESimsCamRC5EVec3N21(pEVar10,&this->m_vOldEye,&this->m_vOldTarget,&this->m_vOldUp)
          ;
          goto LAB_001ea558;
        }
        pEVar10 = GetCam__7EGlobal(&_globals);
        pCVar20 = (CustomCharacter *)&this->m_vVanityEye;
        vTarget = &this->m_vVanityTarget;
      }
      SetPos__8ESimsCamRC5EVec3N21(pEVar10,(EVec3 *)pCVar20,vTarget,&this->m_vVanityUp);
    }
  }
  else {
    pEVar4 = (this->m_pMenu->field0_0x0).__vtable;
    (*(code *)pEVar4->SetBoxDims)
              ((int)this->m_pMenu->m_maxBackShdrSize + *(short *)&pEVar4->SetPos + -0x44);
    uVar24 = (ulong)(int)_globals.m_pCtrlPad;
    pEVar5 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar18 = (*(code *)pEVar5[1].GetBut)
                       ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar5[1].ClearBut + -4,
                        this->m_nControllerID,0x10);
    if (lVar18 == 0) {
      pEVar5 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar18 = (*(code *)pEVar5[1].GetBut)
                         ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar5[1].ClearBut + -4
                          ,this->m_nControllerID,0x40);
      if (lVar18 != 0) {
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
      pCVar20 = this->m_pCustomCharacter;
      *(undefined4 *)&this->m_bUpdateThumbnail = 0;
      puVar1 = &(this->m_originalCharacter).field_0x7;
      uVar17 = (uint)puVar1 & 7;
      uVar3 = (uint)&this->m_originalCharacter & 7;
      uVar25 = (*(long *)(puVar1 + -uVar17) << (7 - uVar17) * 8 |
               uVar24 & 0xffffffffffffffffU >> (uVar17 + 1) * 8) & -1L << (8 - uVar3) * 8 |
               *(ulong *)((int)&this->m_originalCharacter - uVar3) >> uVar3 * 8;
      pcVar21 = &(this->m_originalCharacter).m_nFacialHairIndex;
      uVar17 = (uint)pcVar21 & 7;
      pcVar2 = &(this->m_originalCharacter).m_nBodyType;
      uVar3 = (uint)pcVar2 & 7;
      uVar26 = (*(long *)(pcVar21 + -uVar17) << (7 - uVar17) * 8 |
               in_t0 & 0xffffffffffffffffU >> (uVar17 + 1) * 8) & -1L << (8 - uVar3) * 8 |
               *(ulong *)(pcVar2 + -uVar3) >> uVar3 * 8;
      puVar1 = &(this->m_originalCharacter).field_0x17;
      uVar17 = (uint)puVar1 & 7;
      pcVar21 = &(this->m_originalCharacter).m_nSkinColor;
      uVar3 = (uint)pcVar21 & 7;
      uVar24 = (*(long *)(puVar1 + -uVar17) << (7 - uVar17) * 8 |
               (long)(int)pCVar11 & 0xffffffffffffffffU >> (uVar17 + 1) * 8) &
               -1L << (8 - uVar3) * 8 | *(ulong *)(pcVar21 + -uVar3) >> uVar3 * 8;
      uVar17 = (uint)&pCVar20->field_0x7 & 7;
      puVar8 = (ulong *)(&pCVar20->field_0x7 + -uVar17);
      *puVar8 = *puVar8 & -1L << (uVar17 + 1) * 8 | uVar25 >> (7 - uVar17) * 8;
      uVar17 = (uint)pCVar20 & 7;
      *(ulong *)((int)pCVar20 - uVar17) =
           uVar25 << uVar17 * 8 |
           *(ulong *)((int)pCVar20 - uVar17) & 0xffffffffffffffffU >> (8 - uVar17) * 8;
      uVar17 = (uint)&pCVar20->m_nFacialHairIndex & 7;
      pcVar21 = &pCVar20->m_nFacialHairIndex + -uVar17;
      *(ulong *)pcVar21 = *(ulong *)pcVar21 & -1L << (uVar17 + 1) * 8 | uVar26 >> (7 - uVar17) * 8;
      uVar17 = (uint)&pCVar20->m_nBodyType & 7;
      pcVar21 = &pCVar20->m_nBodyType + -uVar17;
      *(ulong *)pcVar21 =
           uVar26 << uVar17 * 8 | *(ulong *)pcVar21 & 0xffffffffffffffffU >> (8 - uVar17) * 8;
      uVar17 = (uint)&pCVar20->field_0x17 & 7;
      puVar8 = (ulong *)(&pCVar20->field_0x17 + -uVar17);
      *puVar8 = *puVar8 & -1L << (uVar17 + 1) * 8 | uVar24 >> (7 - uVar17) * 8;
      uVar17 = (uint)&pCVar20->m_nSkinColor & 7;
      pcVar21 = &pCVar20->m_nSkinColor + -uVar17;
      *(ulong *)pcVar21 =
           uVar24 << uVar17 * 8 | *(ulong *)pcVar21 & 0xffffffffffffffffU >> (8 - uVar17) * 8;
      AlterBody__4ESimP15CustomCharacterUi(this->m_pMySim,&OldCharData,0x3e);
    }
  }
LAB_001ea558:
  this_01 = &this->m_ac;
  bVar9 = IsTrackAnimComplete__15EAnimControlleri(this_01,1);
  if ((!bVar9) || (this->m_fTransitionTime < 1.0)) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    OldCharData._8_4_ = 1.0;
    OldCharData._0_8_ = 0x3f8000003f800000;
                    /* end of inlined section */
    Update__15EAnimControllerP5EVec3T1G5EVec3
              (this_01,(EVec3 *)0x0,(EVec3 *)0x0,(EVec3 *)&OldCharData);
LAB_001ea7dc:
    pAVar14 = this->m_pAnimRef;
  }
  else {
    bVar9 = IsAdult__4ESim(this->m_pMySim);
    if (bVar9) {
      if (*(int *)&this->m_bMiddleAnim == 0) {
        uVar17 = this->m_nIdleAnimationID[3];
        *(undefined4 *)&this->m_bMiddleAnim = 1;
        SetTrackAnim__15EAnimControlleriUi(this_01,1,uVar17);
        pAVar14 = this->m_pAnimRef;
      }
      else {
        if (this->m_nRepeatIdleCount != 0) {
          this->m_nRepeatIdleCount = this->m_nRepeatIdleCount - 1;
          RestartTrack__15EAnimControlleri(this_01,1);
          goto LAB_001ea7dc;
        }
        this->m_pAnimRef = (AnimRef *)0x0;
        iVar12 = rand();
        iVar12 = iVar12 % 3;
        *(undefined4 *)&this->m_bMiddleAnim = 0;
        SetTrackAnim__15EAnimControlleriUi(this_01,1,this->m_nIdleAnimationID[iVar12]);
        iVar13 = rand();
        this->m_nRepeatIdleCount = iVar13 % 5 + 3;
        bVar9 = IsAdult__4ESim(this->m_pMySim);
        if (!bVar9) {
          pAVar14 = this->m_pAnimRef;
          goto LAB_001ea7e0;
        }
        if (iVar12 == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
          pcVar21 = "brushoff";
LAB_001ea670:
          pAVar14 = (AnimRef *)
                    (*(code *)_5Globs_pObjectFolder->__vtable[1].GetObjectsDatabase)
                              ((int)&_5Globs_pObjectFolder->__vtable +
                               (int)*(short *)&_5Globs_pObjectFolder->__vtable[1].GetBehaviorFinder,
                               pcVar21);
          this->m_pAnimRef = pAVar14;
          pAVar14 = this->m_pAnimRef;
        }
        else {
          if (iVar12 == 1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
            pcVar21 = "combo";
            goto LAB_001ea670;
          }
          pAVar14 = this->m_pAnimRef;
        }
        if (pAVar14 == (AnimRef *)0x0) goto LAB_001ea890;
        pEVar22 = this->m_soundEvent;
        this->m_fAnimSoundTimer = 0.0;
        *(undefined4 *)pEVar22 = 1;
        pEVar19 = pEVar22;
        while (pEVar19 = pEVar19 + 1, pEVar19 < &this->m_pAnimRef) {
          *(undefined4 *)pEVar19 = 1;
        }
        EVar23 = 0;
        iVar12 = 0;
        while( true ) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
          pTVar15 = (this->m_pAnimRef->props).pData;
          if (pTVar15 == (TimePropsAssociation__0_5614 *)0x0) {
            EVar16 = 0;
          }
          else {
            EVar16 = pTVar15[-1].value.boneId;
          }
                    /* end of inlined section */
          if (EVar16 <= EVar23) break;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
          pTVar15 = (this->m_pAnimRef->props).pData + EVar23;
                    /* end of inlined section */
          if (pTVar15->kind == kSound) {
                    /* end of inlined section */
            this->m_soundEvent[iVar12].m_fQueTime = (float)pTVar15->time * 0.001;
            this->m_soundEvent[iVar12].m_nEventIndex = EVar23;
            *(undefined4 *)(pEVar22 + iVar12) = 0;
            EVar23 = EVar23 + kPelvis1;
            iVar12 = iVar12 + 1;
          }
          else {
            EVar23 = EVar23 + kPelvis1;
          }
        }
        pAVar14 = this->m_pAnimRef;
      }
    }
    else {
      uVar17 = (uint)(this->m_nCurrentChildAnim == 0);
      this->m_nCurrentChildAnim = uVar17;
      SetTrackAnim__15EAnimControlleriUi(this_01,1,this->m_nIdleAnimationID[uVar17]);
      pAVar14 = this->m_pAnimRef;
    }
  }
LAB_001ea7e0:
  if (pAVar14 != (AnimRef *)0x0) {
    pEVar19 = this->m_soundEvent;
    pfVar27 = &this->m_soundEvent[0].m_fQueTime;
    do {
      if ((*pfVar27 <= this->m_fAnimSoundTimer) && (*(int *)pEVar19 == 0)) {
        *(int *)pEVar19 = 1;
        this_00 = _5Globs_pSound;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
        uVar17 = pEVar19->m_nEventIndex;
        pTVar15 = (this->m_pAnimRef->props).pData;
                    /* end of inlined section */
        pcVar6 = this->m_pMySim->m_pPerson->_vb1187;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
        pcVar7 = pcVar6->__vtable;
        sourceID = (*(code *)pcVar7[1].UserCanPlace)
                             ((int)&pcVar6->_vb1121 + (int)*(short *)&pcVar7[1].IsPartOfMe);
                    /* inlined from ../MSrc/GameSound.h */
        PlayBySource__12cSoundPlayerPCQ23snd12EventMappings
                  (this_00,pTVar15[uVar17].value.pEvent,sourceID);
                    /* end of inlined section */
      }
      pfVar27 = pfVar27 + 3;
      pEVar19 = pEVar19 + 1;
    } while (pfVar27 < (undefined *)((int)&(this->m_vOldEye).field0_0x0 + 4));
    this->m_fAnimSoundTimer = this->m_fAnimSoundTimer + _dt;
  }
LAB_001ea890:
  Update__10EPromptBar(&this->m_PromptBar);
  return (bool)(char)*(undefined4 *)&this->m_bExitMirror;
}

void EVanityMirrorMenu::SetupDpadWin() {
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
            ((int)this->m_dpadIcons + *(short *)&pEVar5[1].OnStickRepeat + -0x80,this_00);
  pEVar5 = (this->field0_0x0).__vtable;
  (*(code *)pEVar5[1].GetPos)
            ((int)this->m_dpadIcons + *(short *)&pEVar5[1].OnStickRepeat + -0x80,this_01);
  pEVar5 = (this->field0_0x0).__vtable;
  (*(code *)pEVar5[1].GetPos)
            ((int)this->m_dpadIcons + *(short *)&pEVar5[1].OnStickRepeat + -0x80,this_02);
  pEVar5 = (this->field0_0x0).__vtable;
  (*(code *)pEVar5[1].GetPos)
            ((int)this->m_dpadIcons + *(short *)&pEVar5[1].OnStickRepeat + -0x80,this_03);
  return;
}

void EVanityMirrorMenu::Message(EUIObjectNode *pChild, u32 messId) {
	CustomCharacter OldCharData;
	
  CustomCharacter OldCharData;
  
  __15CustomCharacterRC15CustomCharacter(&OldCharData,this->m_pCustomCharacter);
  switch(messId) {
  case 0xe:
    AlterBody__4ESimP15CustomCharacterUi(this->m_pMySim,&OldCharData,0xe);
    break;
  case 0xf:
    AlterBody__4ESimP15CustomCharacterUi(this->m_pMySim,&OldCharData,0xf);
    break;
  case 0x12:
    AlterBody__4ESimP15CustomCharacterUi(this->m_pMySim,&OldCharData,0x12);
    break;
  case 0x13:
    AlterBody__4ESimP15CustomCharacterUi(this->m_pMySim,&OldCharData,0x13);
    break;
  case 0x16:
    AlterBody__4ESimP15CustomCharacterUi(this->m_pMySim,&OldCharData,0x16);
    break;
  case 0x17:
    AlterBody__4ESimP15CustomCharacterUi(this->m_pMySim,&OldCharData,0x17);
    break;
  case 0x22:
    AlterBody__4ESimP15CustomCharacterUi(this->m_pMySim,&OldCharData,0x22);
    break;
  case 0x23:
    AlterBody__4ESimP15CustomCharacterUi(this->m_pMySim,&OldCharData,0x23);
    break;
  case 0x26:
    AlterBody__4ESimP15CustomCharacterUi(this->m_pMySim,&OldCharData,0x26);
    break;
  case 0x27:
    AlterBody__4ESimP15CustomCharacterUi(this->m_pMySim,&OldCharData,0x27);
  }
  return;
}

void EVanityMirrorMenu::MoveCamera(ESimsCam *pCam) {
	EMat4 mCamOrientation;
	EVec3 vNewPos;
	EVec3 vNewTarget;
	
  undefined *puVar1;
  ESimsCam *this_00;
  uint uVar2;
  ulong *puVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  EMat4 mCamOrientation;
  EVec3 vNewPos;
  EVec3 vNewTarget;
  
  GetOrient__13EIStaticModelR5EMat4(&this->m_pWorldObject->field0_0x0,&this->m_mMirrorOrientation);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  __as__5EMat4RC5EMat4(&mCamOrientation,&this->m_mMirrorOrientation);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vNewPos.field0_0x0.d[0] = mCamOrientation.field0_0x0.d[3][0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vNewPos.field0_0x0.d[1] = mCamOrientation.field0_0x0.d[3][1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vNewTarget.field0_0x0.d[0] = mCamOrientation.field0_0x0.d[3][0];
                    /* end of inlined section */
  (this->m_pd).flags = 3;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->m_pd).nCorners = 4;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vNewTarget.field0_0x0.d[1] = mCamOrientation.field0_0x0.d[3][1];
                    /* end of inlined section */
  (this->m_pd).vCorners[1].field0_0x0.d[2] = 1.1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->m_pd).vCorners[3].field0_0x0.d[2] = 2.1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->m_pd).vCorners[0].field0_0x0.d[2] = 1.1;
  (this->m_pd).vCorners[2].field0_0x0.d[2] = 2.1;
  if (0.5 < mCamOrientation.field0_0x0.d[0][0]) {
                    /* end of inlined section */
    fVar7 = mCamOrientation.field0_0x0.d[3][1] + 0.35;
    vNewTarget.field0_0x0.d[1] = mCamOrientation.field0_0x0.d[3][1] + 0.2;
    fVar5 = mCamOrientation.field0_0x0.d[3][0] - 0.35;
    vNewPos.field0_0x0.d[0] = mCamOrientation.field0_0x0.d[3][0] - 0.37;
    (this->m_pd).vCorners[2].field0_0x0.d[1] = fVar7;
    vNewTarget.field0_0x0.d[0] = mCamOrientation.field0_0x0.d[3][0] + 1.0;
    vNewPos.field0_0x0.d[1] = mCamOrientation.field0_0x0.d[3][1] + 0.2;
    fVar6 = mCamOrientation.field0_0x0.d[3][1] - 0.35;
LAB_001eaf0c:
    (this->m_pd).vCorners[3].field0_0x0.d[0] = fVar5;
    (this->m_pd).vCorners[3].field0_0x0.d[1] = fVar6;
    (this->m_pd).vCorners[0].field0_0x0.d[0] = fVar5;
    (this->m_pd).vCorners[0].field0_0x0.d[1] = fVar6;
    (this->m_pd).vCorners[1].field0_0x0.d[0] = fVar5;
    (this->m_pd).vCorners[1].field0_0x0.d[1] = fVar7;
    (this->m_pd).vCorners[2].field0_0x0.d[0] = fVar5;
                    /* end of inlined section */
  }
  else {
                    /* end of inlined section */
    if (mCamOrientation.field0_0x0.d[0][0] < -0.5) {
                    /* end of inlined section */
      fVar7 = mCamOrientation.field0_0x0.d[3][1] - 0.35;
      vNewTarget.field0_0x0.d[1] = mCamOrientation.field0_0x0.d[3][1] - 0.2;
      fVar5 = mCamOrientation.field0_0x0.d[3][0] + 0.35;
      vNewPos.field0_0x0.d[0] = mCamOrientation.field0_0x0.d[3][0] + 0.37;
      (this->m_pd).vCorners[2].field0_0x0.d[1] = fVar7;
      vNewTarget.field0_0x0.d[0] = mCamOrientation.field0_0x0.d[3][0] - 1.0;
      vNewPos.field0_0x0.d[1] = mCamOrientation.field0_0x0.d[3][1] - 0.2;
      fVar6 = mCamOrientation.field0_0x0.d[3][1] + 0.35;
      goto LAB_001eaf0c;
    }
  }
  if (0.5 < mCamOrientation.field0_0x0.d[0][1]) {
                    /* end of inlined section */
    fVar6 = vNewTarget.field0_0x0.d[1] - 0.35;
    fVar7 = vNewTarget.field0_0x0.d[0] - 0.35;
    fVar5 = vNewTarget.field0_0x0.d[0] + 0.35;
    vNewTarget.field0_0x0.d[0] = vNewTarget.field0_0x0.d[0] - 0.2;
    vNewPos.field0_0x0.d[0] = vNewPos.field0_0x0.d[0] - 0.2;
    (this->m_pd).vCorners[2].field0_0x0.d[0] = fVar7;
    vNewPos.field0_0x0.d[1] = vNewPos.field0_0x0.d[1] - 0.37;
    (this->m_pd).vCorners[3].field0_0x0.d[0] = fVar5;
    vNewTarget.field0_0x0.d[1] = vNewTarget.field0_0x0.d[1] + 1.0;
  }
  else {
                    /* end of inlined section */
    if (-0.5 <= mCamOrientation.field0_0x0.d[0][1]) goto LAB_001eb050;
                    /* end of inlined section */
    fVar6 = vNewTarget.field0_0x0.d[1] + 0.35;
    fVar7 = vNewTarget.field0_0x0.d[0] + 0.35;
    fVar5 = vNewTarget.field0_0x0.d[0] - 0.35;
    vNewTarget.field0_0x0.d[0] = vNewTarget.field0_0x0.d[0] + 0.2;
    vNewPos.field0_0x0.d[0] = vNewPos.field0_0x0.d[0] + 0.2;
    (this->m_pd).vCorners[2].field0_0x0.d[0] = fVar7;
    vNewPos.field0_0x0.d[1] = vNewPos.field0_0x0.d[1] + 0.37;
    (this->m_pd).vCorners[3].field0_0x0.d[0] = fVar5;
    vNewTarget.field0_0x0.d[1] = vNewTarget.field0_0x0.d[1] - 1.0;
  }
  (this->m_pd).vCorners[3].field0_0x0.d[1] = fVar6;
  (this->m_pd).vCorners[0].field0_0x0.d[0] = fVar5;
  (this->m_pd).vCorners[0].field0_0x0.d[1] = fVar6;
  (this->m_pd).vCorners[1].field0_0x0.d[0] = fVar7;
  (this->m_pd).vCorners[1].field0_0x0.d[1] = fVar6;
  (this->m_pd).vCorners[2].field0_0x0.d[1] = fVar6;
LAB_001eb050:
  bVar4 = IsAdult__4ESim(this->m_pMySim);
  if (bVar4) {
                    /* end of inlined section */
    fVar5 = 1.35;
    vNewPos.field0_0x0.d[2] = 1.6;
  }
  else {
                    /* end of inlined section */
    fVar5 = 1.0;
    vNewPos.field0_0x0.d[2] = 1.3;
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
  (this->m_vVanityTarget).field0_0x0.d[2] = fVar5;
  this->m_pCam = pCam;
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
  this_00 = this->m_pCam;
  (this->m_vMidpoint).field0_0x0.d[2] = 4.0;
  GetPos__8ESimsCamR5EVec3N21(this_00,&this->m_vOldEye,&this->m_vOldTarget,&this->m_vOldUp);
  *(undefined4 *)&this->m_bReachedMidpoint = 0;
  this->m_fTransitionTime = 0.0;
  this->m_nTransitionMode = '\0';
  return;
}

void EVanityMirrorMenu::RestoreCamera() {
  ESimsCam *pEVar1;
  
  pEVar1 = GetCam__7EGlobal(&_globals);
  ForceFullScreen__8ESimsCam(pEVar1);
  pEVar1 = GetCam__7EGlobal(&_globals);
  SetPos__8ESimsCamRC5EVec3N21(pEVar1,&this->m_vOldEye,&this->m_vOldTarget,&this->m_vOldUp);
  return;
}

void EVanityMirrorMenu::GetOldCameraData(EVec3 *vEye, EVec3 *vTarget, EVec3 *vUp) {
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

EVec3 EVanityMirrorMenu::GetLightVector() {
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

void EVanityMirrorMenu::CalulateAnimation(ERC *prc) {
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

void* EVanityMirrorMenu::operator new(unsigned int size) {
	void *result;
	
  void *__s;
  
  __s = _memmanAlloc__FUiUi(size,0x10);
  memset(__s,0,4);
  return __s;
}

void EVanityMirrorMenu::operator delete(void *p) {
  _memmanFree__FPv(p);
  return;
}

EPortalDef EVanityMirrorMenu::GetPortalDefinition() {
	EPortalDef *this;
	EPortalDef &_ctor_arg;
	
  EVec3 *pEVar1;
  EPortalDef *pEVar2;
  EPortalDef *pEVar3;
  int iVar4;
  
  pEVar2 = &this->m_pd;
                    /* inlined from /eor/src2/engine/window/e_portalwindow.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/window/e_portalwindow.h */
  iVar4 = 5;
  pEVar3 = __return_storage_ptr__;
  do {
                    /* end of inlined section */
    iVar4 = iVar4 + -1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    pEVar3->vCorners[0].field0_0x0.d[0] = pEVar2->vCorners[0].field0_0x0.d[0];
    pEVar3->vCorners[0].field0_0x0.d[1] = pEVar2->vCorners[0].field0_0x0.d[1];
    pEVar1 = pEVar2->vCorners;
                    /* end of inlined section */
    pEVar2 = (EPortalDef *)(pEVar2->vCorners + 1);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    pEVar3->vCorners[0].field0_0x0.d[2] = (pEVar1->field0_0x0).d[2];
                    /* end of inlined section */
    pEVar3 = (EPortalDef *)(pEVar3->vCorners + 1);
  } while (iVar4 != -1);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
  __return_storage_ptr__->nCorners = (this->m_pd).nCorners;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  __return_storage_ptr__->flags = (this->m_pd).flags;
  __as__5EMat4RC5EMat4(&__return_storage_ptr__->mReOrient,&(this->m_pd).mReOrient);
                    /* end of inlined section */
  return __return_storage_ptr__;
}

ERShader* EVanityMirrorMenu::GetMirrorShader() {
  return this->m_pMirrorShdr;
}

ERModel* EVanityMirrorMenu::GetGlassModel() {
  return this->m_pGlassModel;
}

EMat4* EVanityMirrorMenu::GetOrient() {
  return &this->m_mMirrorOrientation;
}

ESim* EVanityMirrorMenu::GetSim() {
  return this->m_pMySim;
}

ISimInstance* EVanityMirrorMenu::GetObject() {
  return this->m_pWorldObject;
}

u32 EVanityMirrorMenu::GetControllerID() {
  return this->m_nControllerID;
}

bool EVanityMirrorMenu::SwitchCameraMode() {
  return SUB41(*(undefined4 *)&this->m_bSwitchCameraMode,0);
}

bool EVanityMirrorMenu::IsCameraMoving() {
  return this->m_fTransitionTime < 1.0;
}

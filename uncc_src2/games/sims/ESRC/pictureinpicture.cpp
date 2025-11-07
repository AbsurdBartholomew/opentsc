// STATUS: NOT STARTED

#include "pictureinpicture.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb3183;
	__vtbl_ptr_type *$vf1526;
	
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
struct SimInfoWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb3804;
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
	Panelstateman *$vb3804;
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
	Panelstateman *$vb3804;
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

__vtbl_ptr_type EPictureInPicture virtual table[4] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPictureInPicture::~EPictureInPicture,
		/* .__delta2 = */ -13832
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPictureInPicture::DoPictureInPicture,
		/* .__delta2 = */ -11808
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EPictureInPicture* EPictureInPicture::EPictureInPicture() {
  ERFont *this_00;
  
  this->__vtable = (EPictureInPicture__vtable *)_vt_17EPictureInPicture;
  __13EPortalWindow(&this->m_Portal);
  resetPiP__17EPictureInPicture(this);
  this->m_pFont = (ERFont *)0x0;
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
  this_00 = (ERFont *)
            AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pFont = this_00;
  SetSize__6ERFontffb(this_00,36.0,1.0,true);
  LoadFont__6ERFont(this->m_pFont);
  this->m_ObjectId = 0xffff;
  return this;
}

void EPictureInPicture::~EPictureInPicture(int __in_chrg) {
	void *p;
	
  this->__vtable = (EPictureInPicture__vtable *)_vt_17EPictureInPicture;
  while (this->m_pFont != (ERFont *)0x0) {
    DelRef__9EResource(&this->m_pFont->field0_0x0);
    this->m_pFont = (ERFont *)0x0;
  }
  ___13EPortalWindow(&this->m_Portal,2);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pictureinpicture.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EPictureInPicture::Update() {
  cXObject__47_3244 *pcVar1;
  float fVar2;
  
  if (*(int *)this == 0) {
    return;
  }
  if (_globals._pPanel == (EPanel *)0x0) {
    pcVar1 = this->m_pLastObject;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/livemodepanel.h */
                    /* end of inlined section */
    if (((_globals._pPanel)->m_panleState + ~LIVE_SIM_EDIT < 2) ||
       ((_globals._pPanel)->m_panleState == LIVE_SIM_EDIT)) goto LAB_001bcab8;
    pcVar1 = this->m_pLastObject;
  }
  if (pcVar1 != (cXObject__47_3244 *)0x0) {
    if (this->m_Duration <= 0.001) {
      return;
    }
    fVar2 = this->m_TimeAccumulator + _dt;
    this->m_TimeAccumulator = fVar2;
    if ((fVar2 < this->m_Duration) && (fVar2 <= 120.0)) {
      return;
    }
    resetPiP__17EPictureInPicture(this);
    return;
  }
LAB_001bcab8:
  resetPiP__17EPictureInPicture(this);
  return;
}

void EPictureInPicture::Draw(ERC *prc) {
	float YOffset;
	cXObject *ObjPtr;
	ISimInstance *ISim;
	EVec3 Target;
	EBoundSphere Sphere;
	float Radius;
	float Scale;
	EVec3 Eye;
	EVec3 Up;
	float Size;
	EFloatRect Rect;
	float AspectRatio;
	EVec2 UpperLeft;
	EVec2 LowerRight;
	EVec2 SizeVec;
	EVec2 Center;
	float UseSize;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 unaff_s0;
  EPortalWindow *this_00;
  undefined8 unaff_s1;
  int *piVar7;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  int *piVar8;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  EVec3 Target;
  EVec3 Eye;
  CTilePt aCStack_1a0 [5];
  EBoundSphere Sphere;
  EVec3 Up;
  TRect_float_ Rect;
  EVec2 UpperLeft;
  EVec2 LowerRight;
  EVec2 SizeVec;
  EVec2 Center;
  undefined4 local_120;
  undefined4 local_11c;
  float local_110;
  float local_10c;
  undefined4 local_100;
  float local_fc;
  float local_f0;
  undefined4 local_ec;
  undefined4 local_e0;
  float local_dc;
  float local_d0;
  undefined4 local_cc;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
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
  
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  if ((*(int *)this != 0) && (bVar4 = IsTwoPlayer__7EGlobal(&_globals), !bVar4)) {
    fVar13 = 0.0;
    bVar4 = GetInfoWinVis__6EPaneli(_globals._pPanel,0);
    if (bVar4) {
      fVar13 = -0.31;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    lVar6 = (*(code *)_5Globs_pObjectModule->__vtable->AdvanceSelectedPerson)
                      ((int)&_5Globs_pObjectModule->__vtable +
                       (int)*(short *)&_5Globs_pObjectModule->__vtable->SetSelectedPerson,
                       this->m_ObjectId);
    if (lVar6 == 0) {
      this->m_pLastObject = (cXObject__47_3244 *)0x0;
    }
    else {
      piVar7 = (int *)lVar6;
      iVar5 = *(int *)(*piVar7 + 0x1c);
      lVar6 = (**(code **)(iVar5 + 0x84))(*piVar7 + (int)*(short *)(iVar5 + 0x80));
      piVar8 = (int *)lVar6;
      if (lVar6 == 0) {
        (**(code **)(piVar7[1] + 0x2dc))
                  (aCStack_1a0,(int)piVar7 + (int)*(short *)(piVar7[1] + 0x2d8));
        GetEVec3M__C7CTilePt(&Eye,aCStack_1a0);
        Target.field0_0x0._0_8_ = CONCAT44(Eye.field0_0x0.d[1],Eye.field0_0x0.d[0]);
        puVar1 = (undefined *)((int)&Target.field0_0x0 + 7);
        uVar2 = (uint)puVar1 & 7;
        puVar3 = (ulong *)(puVar1 + -uVar2);
        *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 |
                  (ulong)Target.field0_0x0._0_8_ >> (7 - uVar2) * 8;
        Target.field0_0x0.d[2] = Eye.field0_0x0.d[2];
        ___7CTilePt(aCStack_1a0,2);
        iVar5 = *piVar8;
      }
      else {
        (**(code **)(*piVar8 + 0x124))(&Eye,(int)piVar8 + (int)*(short *)(*piVar8 + 0x120));
        Target.field0_0x0._0_8_ = CONCAT44(Eye.field0_0x0.d[1],Eye.field0_0x0.d[0]);
        puVar1 = (undefined *)((int)&Target.field0_0x0 + 7);
        uVar2 = (uint)puVar1 & 7;
        puVar3 = (ulong *)(puVar1 + -uVar2);
        *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 |
                  (ulong)Target.field0_0x0._0_8_ >> (7 - uVar2) * 8;
        Target.field0_0x0.d[2] = Eye.field0_0x0.d[2];
                    /* end of inlined section */
        iVar5 = *piVar8;
      }
      (**(code **)(iVar5 + 0xa4))((int)piVar8 + (int)*(short *)(iVar5 + 0xa0),&Sphere);
      if (Sphere.radius < 2.0) {
        Sphere.radius = 2.0;
      }
      this_00 = &this->m_Portal;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      fVar11 = Sphere.radius * 0.5 * 15.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      local_dc = 1.0;
      Eye.field0_0x0.d[2] = Target.field0_0x0.d[2] + fVar11;
      Up.field0_0x0.d[2] = 1.0;
      Eye.field0_0x0.d[0] = Target.field0_0x0.d[0] - Sphere.radius * 0.5 * 7.5;
      Up.field0_0x0.d[1] = 0.0;
      Eye.field0_0x0.d[1] = Target.field0_0x0.d[1] - fVar11;
      Up.field0_0x0.d[0] = 0.0;
      SetLookAt__13EPortalWindowRC5EVec3N21(this_00,&Eye,&Target,&Up);
      Rect.bottom = _13EUIObjectNode_SAFE_BOTTOM + fVar13;
      fVar11 = (float)(this->m_Size + 1) * 0.1;
      Rect.right = _13EUIObjectNode_SAFE_RIGHT;
      Rect.left = _13EUIObjectNode_SAFE_RIGHT - fVar11;
      Rect.top = (_13EUIObjectNode_SAFE_BOTTOM - fVar11 * 1.333333) + fVar13;
      SetViewport__9E3DWindowRCt5TRect1Zf(&this_00->field0_0x0,&Rect);
      UpperLeft.field0_0x0.d[0] = Rect.left - 0.0325;
      LowerRight.field0_0x0.d[0] = Rect.right + 0.03;
      UpperLeft.field0_0x0.d[1] = Rect.top - 0.05;
      LowerRight.field0_0x0.d[1] = Rect.bottom + 0.04;
      fVar9 = LowerRight.field0_0x0.d[0] - UpperLeft.field0_0x0.d[0];
      fVar13 = LowerRight.field0_0x0.d[1] - UpperLeft.field0_0x0.d[1];
      fVar10 = (LowerRight.field0_0x0.d[0] + UpperLeft.field0_0x0.d[0]) * 0.5;
      fVar12 = (LowerRight.field0_0x0.d[1] + UpperLeft.field0_0x0.d[1]) * 0.5;
      Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
      fVar11 = this->m_TimeAccumulator;
      if (fVar11 < 0.25) {
        if (0.001 < fVar11) {
          fVar13 = fVar11 * 4.0 * fVar13 * 0.5;
          fVar11 = fVar11 * 4.0 * fVar9 * 0.5;
          LowerRight.field0_0x0.d[1] = fVar12 + fVar13;
          LowerRight.field0_0x0.d[0] = fVar10 + fVar11;
          UpperLeft.field0_0x0.d[0] = fVar10 - fVar11;
          UpperLeft.field0_0x0.d[1] = fVar12 - fVar13;
          DrawBigBox__10EDialogWinP3ERCfffff
                    (prc,UpperLeft.field0_0x0.d[0],UpperLeft.field0_0x0.d[1],
                     LowerRight.field0_0x0.d[0],LowerRight.field0_0x0.d[1],local_dc);
        }
      }
      else {
        UpperLeft.field0_0x0.d[0] = Rect.left - 0.01;
        LowerRight.field0_0x0.d[1] = Rect.bottom + 0.01;
        UpperLeft.field0_0x0.d[1] = Rect.top - 0.015;
        LowerRight.field0_0x0.d[0] = Rect.right + 0.005;
        (*(code *)prc->__vtable[1].DisplayList)
                  (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&UpperLeft,
                   &LowerRight,0x3cfc68,0x3cfc70,0x35f4d0);
        Select__13EPortalWindowP3ERC(this_00,prc);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_11c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_120 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_100 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_ec = 0;
                    /* end of inlined section */
        local_110 = local_dc;
        local_10c = local_dc;
        local_fc = local_dc;
        local_f0 = local_dc;
        (*(code *)prc->__vtable[1].DisplayList)
                  (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_120,
                   &local_110,&local_100,&local_f0,0x35f4d0);
        (*(code *)prc->__vtable[1].DisableGeometryModes)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].EnableGeometryModes,1,1,0,0);
        (*(code *)prc->__vtable[1].EnableRasterModes)
                  (0x3f000000,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SetGeometryModes,1
                   ,1,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_11c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_120 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_e0 = 0;
        local_c0 = 0;
        local_cc = 0;
        local_b4 = 0;
        local_b8 = 0;
        local_bc = 0;
                    /* end of inlined section */
        local_110 = local_dc;
        local_10c = local_dc;
        local_d0 = local_dc;
        (*(code *)prc->__vtable[1].DisplayList)
                  (local_dc,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,
                   &local_120,&local_110,&local_e0,&local_d0,&local_c0);
        (*(code *)prc->__vtable[1].DisableGeometryModes)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].EnableGeometryModes,1,2,0,0);
        (*(code *)prc->__vtable[1].EnableRasterModes)
                  (0x3f000000,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SetGeometryModes,1
                   ,5,0);
        (*(code *)prc->__vtable->EndCommand)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->BeginCommand,1);
        Draw__6EHouseP3ERC((EHouse__2_990 *)_globals._pCurHouse,prc);
        (*(code *)prc->__vtable->NewEntry)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->Terminate,1);
        (*(code *)prc->__vtable->ZTest)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->RecalcMatrices);
        Draw__12EParticleManP3ERC(&_pclman,prc);
        SelectWin__7EGlobalP3ERC(&_globals,prc);
      }
    }
  }
  return;
}

void EPictureInPicture::Reset() {
  resetPiP__17EPictureInPicture(this);
  return;
}

void EPictureInPicture::resetPiP() {
  this->m_Duration = 0.0;
  this->m_Zoom = 1;
  *(undefined4 *)this = 0;
  this->m_pLastObject = (cXObject__47_3244 *)0x0;
  this->m_Size = 0;
  this->m_DisplayText[0] = 0;
  *(undefined4 *)&this->m_IsThereACaption = 0;
  this->m_TimeAccumulator = 0.0;
  return;
}

void EPictureInPicture::DoPictureInPicture(bool inTurnOn, cXObject *inObject, bool inLive, int inMSTimeout, int inZoom, int inSize, bool inDontShowIfObjectVisible, bool justCenter, u16 *inText) {
	bool justCenter;
	u16 *inText;
	
  ushort uVar1;
  uint uVar2;
  float fVar3;
  undefined3 in_stack_00000001;
  
  if ((inTurnOn) && ((cXObject__73_1526 *)this->m_pLastObject == inObject)) {
    resetPiP__17EPictureInPicture(this);
  }
  if (inTurnOn) {
    if ((_justCenter != 1) && (*(int *)this != 1)) {
      *(undefined4 *)this = 1;
      this->m_pLastObject = (cXObject__47_3244 *)inObject;
      uVar1 = (*(code *)inObject->__vtable[1].UserCanPlace)
                        ((int)&inObject->_vb3183 + (int)*(short *)&inObject->__vtable[1].IsPartOfMe)
      ;
      this->m_ObjectId = uVar1;
      this->m_Zoom = inZoom;
      this->m_Size = inSize;
      if ((inText != (short *)0x0) && (uVar2 = wcslen__FPCUs(inText), uVar2 != 0)) {
        wcscpy__FPUsPCUs(this->m_DisplayText,inText);
        *(undefined4 *)&this->m_IsThereACaption = 1;
      }
      if (inMSTimeout < 1) {
        fVar3 = -1.0;
      }
      else {
        fVar3 = (float)inMSTimeout * 0.001;
      }
      this->m_Duration = fVar3;
      setupPortal__17EPictureInPicture(this);
    }
  }
  else {
    resetPiP__17EPictureInPicture(this);
  }
  return;
}

void EPictureInPicture::setupPortal() {
	float Size;
	EFloatRect Rect;
	float AspectRatio;
	
  float fVar1;
  TRect_float_ Rect;
  
  Rect.right = _13EUIObjectNode_SAFE_RIGHT;
  Rect.bottom = _13EUIObjectNode_SAFE_BOTTOM;
  fVar1 = (float)(this->m_Size + 1) * 0.1;
  Rect.left = _13EUIObjectNode_SAFE_RIGHT - fVar1;
  Rect.top = _13EUIObjectNode_SAFE_BOTTOM - fVar1 * 1.333333;
  SetViewport__9E3DWindowRCt5TRect1Zf(&(this->m_Portal).field0_0x0,&Rect);
  SetProjection__13EPortalWindowffff
            (&this->m_Portal,fVar1 * 33.75,1.0,_globals._EHouse_levelrad * 0.01,
             _globals._EHouse_levelrad * 20.0);
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

void* EPictureInPicture::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _memmanAlloc__FUiUi(size,0x10);
  return pvVar1;
}

void EPictureInPicture::operator delete(void *p) {
  _memmanFree__FPv(p);
  return;
}

bool EPictureInPicture::IsPipActive() {
  return SUB41(*(undefined4 *)this,0);
}

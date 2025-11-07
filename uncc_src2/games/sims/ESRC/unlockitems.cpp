// STATUS: NOT STARTED

#include "unlockitems.h"

// warning: multiple differing types with the same name (name not equal)
struct SimInfoWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb2269;
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
	Panelstateman *$vb2269;
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
	Panelstateman *$vb2269;
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
struct cXObject : virtual TreeSim {
	TreeSim *$vb4655;
	__vtbl_ptr_type *$vf4595;
	
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
	cXObject *$vb4595;
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

struct ERQTable<LockTable> {
	char *pName;
	LockTable *pData;
	char **ppRowNames;
	u32 uNumRows;
	u32 uRowSize;
};

bool CheckLockableById(u32 type, u32 targetId, s32 *data) {
	bool bFound;
	ERQuickdata *pSimsUIData;
	HouseData *pHouseData;
	int nNumHouses;
	ERQuickdata *this;
	ERQTable<HouseData> *pTable;
	int nHouse;
	VECTOR<LockableAssociation> *this;
	int i;
	VECTOR<LockableAssociation> *this;
	unsigned int n;
	VECTOR<LockableAssociation> *this;
	VECTOR<LockableAssociation> *this;
	unsigned int n;
	VECTOR<LockableAssociation> *this;
	ChallengeData *pChallengeData;
	int nNumHouses;
	ERQuickdata *this;
	ERQTable<ChallengeData> *pTable;
	int nHouse;
	LockTable *pLockTable;
	VECTOR<LockableItem> *pLockVector;
	ERQuickdata *this;
	VECTOR<LockableItem> *this;
	int i;
	VECTOR<LockableItem> *this;
	unsigned int n;
	VECTOR<LockableItem> *this;
	VECTOR<LockableItem> *this;
	unsigned int n;
	VECTOR<LockableItem> *this;
	
  byte bVar1;
  bool bVar2;
  ERQuickdata *this;
  void *pvVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
  this = (ERQuickdata *)
         AddRef__16EResourceManagerUiP5EFilei(&_quickdataman.field0_0x0,0xa173a1ee,(EFile *)0x0,0);
                    /* end of inlined section */
  bVar2 = false;
                    /* end of inlined section */
  if (type == 0) {
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
    pvVar3 = getTable__11ERQuickdataPCc(this,"HouseData");
                    /* end of inlined section */
    iVar11 = *(int *)((int)pvVar3 + 0xc);
    iVar8 = *(int *)((int)pvVar3 + 4);
    if (0 < iVar11) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      iVar7 = 0;
      iVar5 = 0;
      do {
        iVar7 = *(int *)(iVar7 + iVar8 + 0x14);
        iVar12 = 0;
        if (iVar7 != 0) {
          iVar12 = *(int *)(iVar7 + -4);
        }
                    /* end of inlined section */
        iVar7 = 0;
        iVar13 = iVar5 + 1;
        if ((0 < iVar12) && (!bVar2)) {
          iVar10 = 0;
          iVar9 = iVar5 * 0x58 + iVar8;
          piVar6 = (int *)(iVar9 + 0x14);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
          iVar5 = *piVar6;
          while( true ) {
                    /* end of inlined section */
            iVar7 = iVar7 + 1;
            if (*(byte *)(iVar5 + iVar10) == targetId) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
              bVar2 = true;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
              *data = *(int *)(*(int *)(iVar9 + 0x14) + iVar10 + 4);
            }
            iVar10 = iVar10 + 0xc;
            if ((iVar12 <= iVar7) || (bVar2)) break;
            iVar5 = *piVar6;
          }
        }
      } while ((iVar13 < iVar11) && (iVar7 = iVar13 * 0x58, iVar5 = iVar13, !bVar2));
    }
  }
  else if (type == 2) {
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
    pvVar3 = getTable__11ERQuickdataPCc(this,"ChallengeData");
                    /* end of inlined section */
    iVar11 = *(int *)((int)pvVar3 + 0xc);
    iVar8 = 0;
    if (0 < iVar11) {
      bVar1 = *(byte *)(*(int *)((int)pvVar3 + 4) + 0xc);
      iVar7 = *(int *)((int)pvVar3 + 4);
      while( true ) {
        iVar8 = iVar8 + 1;
        if (bVar1 == targetId) {
          bVar2 = true;
          *data = *(int *)(iVar7 + 0x10);
        }
        if ((iVar11 <= iVar8) || (bVar2)) break;
        bVar1 = *(byte *)(iVar7 + 0x70);
        iVar7 = iVar7 + 100;
      }
    }
  }
  else {
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
    pvVar3 = getTable__11ERQuickdataPCc(this,"LockTable");
                    /* end of inlined section */
    iVar11 = *(int *)((int)pvVar3 + 4);
    piVar6 = (int *)0x0;
    switch(type) {
    case 1:
      piVar6 = (int *)(iVar11 + 4);
      break;
    case 3:
      piVar6 = (int *)(iVar11 + 0xc);
      break;
    case 4:
      piVar6 = (int *)(iVar11 + 0x10);
      break;
    case 5:
      piVar6 = (int *)(iVar11 + 0x14);
      break;
    case 6:
      piVar6 = (int *)(iVar11 + 0x18);
      break;
    case 7:
      piVar6 = (int *)(iVar11 + 0x1c);
      break;
    case 8:
      piVar6 = (int *)(iVar11 + 0x20);
      break;
    case 9:
      piVar6 = (int *)(iVar11 + 0x24);
      break;
    case 10:
      piVar6 = (int *)(iVar11 + 0x28);
      break;
    case 0xb:
      piVar6 = (int *)(iVar11 + 0x2c);
      break;
    case 0xc:
      piVar6 = (int *)(iVar11 + 0x30);
      break;
    case 0xd:
      piVar6 = (int *)(iVar11 + 0x34);
      break;
    case 0xe:
      piVar6 = (int *)(iVar11 + 0x38);
      break;
    case 0xf:
      piVar6 = (int *)(iVar11 + 0x3c);
      break;
    case 0x10:
      piVar6 = (int *)(iVar11 + 0x40);
      break;
    case 0x11:
      piVar6 = (int *)(iVar11 + 0x44);
      break;
    case 0x12:
      piVar6 = (int *)(iVar11 + 0x48);
      break;
    case 0x13:
      piVar6 = (int *)(iVar11 + 0x4c);
      break;
    case 0x14:
      piVar6 = (int *)(iVar11 + 0x50);
      break;
    case 0x15:
      piVar6 = (int *)(iVar11 + 0x54);
      break;
    case 0x16:
      piVar6 = (int *)(iVar11 + 0x58);
      break;
    case 0x17:
      piVar6 = (int *)(iVar11 + 0x5c);
      break;
    case 0x18:
      piVar6 = (int *)(iVar11 + 0x60);
      break;
    case 0x19:
      piVar6 = (int *)(iVar11 + 100);
      break;
    case 0x1a:
      piVar6 = (int *)(iVar11 + 0x68);
      break;
    case 0x1b:
      piVar6 = (int *)(iVar11 + 0x6c);
      break;
    case 0x1c:
      piVar6 = (int *)(iVar11 + 0x70);
      break;
    case 0x1d:
      piVar6 = (int *)(iVar11 + 0x74);
      break;
    case 0x1e:
      piVar6 = (int *)(iVar11 + 0x78);
      break;
    case 0x1f:
      piVar6 = (int *)(iVar11 + 0x7c);
    }
    if (piVar6 != (int *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      iVar11 = 0;
      if (*piVar6 != 0) {
        iVar11 = *(int *)(*piVar6 + -4);
      }
                    /* end of inlined section */
      iVar8 = 0;
      if (0 < iVar11) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
        iVar7 = *piVar6;
        while( true ) {
          pbVar4 = (byte *)(iVar7 + iVar8 * 8);
                    /* end of inlined section */
          iVar8 = iVar8 + 1;
          if (*pbVar4 == targetId) {
            bVar2 = true;
            *data = *(int *)(pbVar4 + 4);
          }
          if ((iVar11 <= iVar8) || (bVar2)) break;
          iVar7 = *piVar6;
        }
      }
    }
  }
  DelRef__16EResourceManagerUi(&_quickdataman.field0_0x0,0xa173a1ee);
  return bVar2;
}

bool CheckLockableByData(u32 type, s32 targetData, u32 *id) {
	bool bFound;
	ERQuickdata *pSimsUIData;
	HouseData *pHouseData;
	int nNumHouses;
	ERQuickdata *this;
	ERQTable<HouseData> *pTable;
	int nHouse;
	VECTOR<LockableAssociation> *this;
	int i;
	VECTOR<LockableAssociation> *this;
	unsigned int n;
	VECTOR<LockableAssociation> *this;
	VECTOR<LockableAssociation> *this;
	unsigned int n;
	VECTOR<LockableAssociation> *this;
	ChallengeData *pChallengeData;
	int nNumHouses;
	ERQuickdata *this;
	ERQTable<ChallengeData> *pTable;
	int nHouse;
	LockTable *pLockTable;
	VECTOR<LockableItem> *pLockVector;
	ERQuickdata *this;
	VECTOR<LockableItem> *this;
	int i;
	VECTOR<LockableItem> *this;
	unsigned int n;
	VECTOR<LockableItem> *this;
	VECTOR<LockableItem> *this;
	unsigned int n;
	VECTOR<LockableItem> *this;
	
  bool bVar1;
  ERQuickdata *this;
  void *pvVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
  this = (ERQuickdata *)
         AddRef__16EResourceManagerUiP5EFilei(&_quickdataman.field0_0x0,0xa173a1ee,(EFile *)0x0,0);
                    /* end of inlined section */
  bVar1 = false;
                    /* end of inlined section */
  if (type == 0) {
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
    pvVar2 = getTable__11ERQuickdataPCc(this,"HouseData");
                    /* end of inlined section */
    iVar10 = *(int *)((int)pvVar2 + 0xc);
    iVar7 = *(int *)((int)pvVar2 + 4);
    if (0 < iVar10) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      iVar6 = 0;
      iVar4 = 0;
      do {
        iVar6 = *(int *)(iVar6 + iVar7 + 0x14);
        iVar11 = 0;
        if (iVar6 != 0) {
          iVar11 = *(int *)(iVar6 + -4);
        }
                    /* end of inlined section */
        iVar6 = 0;
        iVar12 = iVar4 + 1;
        if ((0 < iVar11) && (!bVar1)) {
          iVar9 = 0;
          iVar8 = iVar4 * 0x58 + iVar7;
          piVar5 = (int *)(iVar8 + 0x14);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
          iVar4 = *piVar5;
          while( true ) {
                    /* end of inlined section */
            iVar6 = iVar6 + 1;
            if (*(int *)(iVar4 + iVar9 + 4) == targetData) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
              bVar1 = true;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
              *id = (uint)*(byte *)(*(int *)(iVar8 + 0x14) + iVar9);
            }
            iVar9 = iVar9 + 0xc;
            if ((iVar11 <= iVar6) || (bVar1)) break;
            iVar4 = *piVar5;
          }
        }
      } while ((iVar12 < iVar10) && (iVar6 = iVar12 * 0x58, iVar4 = iVar12, !bVar1));
    }
  }
  else if (type == 2) {
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
    pvVar2 = getTable__11ERQuickdataPCc(this,"ChallengeData");
                    /* end of inlined section */
    iVar10 = *(int *)((int)pvVar2 + 0xc);
    iVar7 = 0;
    if (0 < iVar10) {
      iVar6 = *(int *)(*(int *)((int)pvVar2 + 4) + 0x10);
      iVar4 = *(int *)((int)pvVar2 + 4);
      while( true ) {
        iVar7 = iVar7 + 1;
        if (iVar6 == targetData) {
          bVar1 = true;
          *id = (uint)*(byte *)(iVar4 + 0xc);
        }
        if ((iVar10 <= iVar7) || (bVar1)) break;
        iVar6 = *(int *)(iVar4 + 0x74);
        iVar4 = iVar4 + 100;
      }
    }
  }
  else {
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
    pvVar2 = getTable__11ERQuickdataPCc(this,"LockTable");
                    /* end of inlined section */
    iVar10 = *(int *)((int)pvVar2 + 4);
    piVar5 = (int *)0x0;
    switch(type) {
    case 1:
      piVar5 = (int *)(iVar10 + 4);
      break;
    case 3:
      piVar5 = (int *)(iVar10 + 0xc);
      break;
    case 4:
      piVar5 = (int *)(iVar10 + 0x10);
      break;
    case 5:
      piVar5 = (int *)(iVar10 + 0x14);
      break;
    case 6:
      piVar5 = (int *)(iVar10 + 0x18);
      break;
    case 7:
      piVar5 = (int *)(iVar10 + 0x1c);
      break;
    case 8:
      piVar5 = (int *)(iVar10 + 0x20);
      break;
    case 9:
      piVar5 = (int *)(iVar10 + 0x24);
      break;
    case 10:
      piVar5 = (int *)(iVar10 + 0x28);
      break;
    case 0xb:
      piVar5 = (int *)(iVar10 + 0x2c);
      break;
    case 0xc:
      piVar5 = (int *)(iVar10 + 0x30);
      break;
    case 0xd:
      piVar5 = (int *)(iVar10 + 0x34);
      break;
    case 0xe:
      piVar5 = (int *)(iVar10 + 0x38);
      break;
    case 0xf:
      piVar5 = (int *)(iVar10 + 0x3c);
      break;
    case 0x10:
      piVar5 = (int *)(iVar10 + 0x40);
      break;
    case 0x11:
      piVar5 = (int *)(iVar10 + 0x44);
      break;
    case 0x12:
      piVar5 = (int *)(iVar10 + 0x48);
      break;
    case 0x13:
      piVar5 = (int *)(iVar10 + 0x4c);
      break;
    case 0x14:
      piVar5 = (int *)(iVar10 + 0x50);
      break;
    case 0x15:
      piVar5 = (int *)(iVar10 + 0x54);
      break;
    case 0x16:
      piVar5 = (int *)(iVar10 + 0x58);
      break;
    case 0x17:
      piVar5 = (int *)(iVar10 + 0x5c);
      break;
    case 0x18:
      piVar5 = (int *)(iVar10 + 0x60);
      break;
    case 0x19:
      piVar5 = (int *)(iVar10 + 100);
      break;
    case 0x1a:
      piVar5 = (int *)(iVar10 + 0x68);
      break;
    case 0x1b:
      piVar5 = (int *)(iVar10 + 0x6c);
      break;
    case 0x1c:
      piVar5 = (int *)(iVar10 + 0x70);
      break;
    case 0x1d:
      piVar5 = (int *)(iVar10 + 0x74);
      break;
    case 0x1e:
      piVar5 = (int *)(iVar10 + 0x78);
      break;
    case 0x1f:
      piVar5 = (int *)(iVar10 + 0x7c);
    }
    if (piVar5 != (int *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      iVar10 = 0;
      if (*piVar5 != 0) {
        iVar10 = *(int *)(*piVar5 + -4);
      }
                    /* end of inlined section */
      iVar7 = 0;
      if (0 < iVar10) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
        iVar6 = *piVar5;
        while( true ) {
          pbVar3 = (byte *)(iVar6 + iVar7 * 8);
                    /* end of inlined section */
          iVar7 = iVar7 + 1;
          if (*(int *)(pbVar3 + 4) == targetData) {
            bVar1 = true;
            *id = (uint)*pbVar3;
          }
          if ((iVar10 <= iVar7) || (bVar1)) break;
          iVar6 = *piVar5;
        }
      }
    }
  }
  DelRef__16EResourceManagerUi(&_quickdataman.field0_0x0,0xa173a1ee);
  return bVar1;
}

bool CheckNeighborhoodUnlocked(u32 type, u32 targetId) {
	bool bFound;
	vector<UnlockedId,__malloc_alloc_template<0> > *pLockVector;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	int i;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	
  UnlockedId *pUVar1;
  bool bVar2;
  NeighborhoodImpl *pNVar3;
  UnlockedRecon *pUVar4;
  UnlockedId *pUVar5;
  int iVar6;
  int iVar7;
  
  pUVar4 = (UnlockedRecon *)0x0;
  switch(type) {
  case 0:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    break;
  case 1:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->gameModes;
    break;
  case 2:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->challengeLevels;
    break;
  case 3:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->careers;
    break;
  case 4:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->ma_hair;
    break;
  case 5:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->ma_makeup;
    break;
  case 6:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->ma_accessories;
    break;
  case 7:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->ma_face;
    break;
  case 8:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->ma_upperBody;
    break;
  case 9:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->ma_lowerBody;
    break;
  case 10:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->ma_shoes;
    break;
  case 0xb:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->mc_hair;
    break;
  case 0xc:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->mc_makeup;
    break;
  case 0xd:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->mc_accessories;
    break;
  case 0xe:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->mc_face;
    break;
  case 0xf:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->mc_upperBody;
    break;
  case 0x10:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->mc_lowerBody;
    break;
  case 0x11:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->mc_shoes;
    break;
  case 0x12:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->fa_hair;
    break;
  case 0x13:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->fa_makeup;
    break;
  case 0x14:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->fa_accessories;
    break;
  case 0x15:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->fa_face;
    break;
  case 0x16:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->fa_upperBody;
    break;
  case 0x17:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->fa_lowerBody;
    break;
  case 0x18:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->fa_shoes;
    break;
  case 0x19:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->fc_hair;
    break;
  case 0x1a:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->fc_makeup;
    break;
  case 0x1b:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->fc_accessories;
    break;
  case 0x1c:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->fc_face;
    break;
  case 0x1d:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->fc_upperBody;
    break;
  case 0x1e:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->fc_lowerBody;
    break;
  case 0x1f:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar3 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar4 = GetUnlockedRecon__16NeighborhoodImpl(pNVar3);
    pUVar4 = (UnlockedRecon *)&pUVar4->fc_shoes;
  }
  bVar2 = false;
  if (pUVar4 != (UnlockedRecon *)0x0) {
                    /* inlined from ../MSrc/vector.h */
    pUVar1 = (pUVar4->objects).start;
    iVar7 = (int)(pUVar4->objects).finish - (int)pUVar1;
                    /* end of inlined section */
    iVar6 = 0;
    pUVar5 = pUVar1;
    bVar2 = false;
    if (0 < iVar7) {
      do {
        iVar6 = iVar6 + 1;
        if (pUVar5->id == targetId) {
          bVar2 = true;
        }
      } while ((iVar6 < iVar7) && (pUVar5 = pUVar1 + iVar6, !bVar2));
    }
  }
  return bVar2;
}

bool CheckGlobalUnlocked(u32 type, u32 targetId) {
	bool bFound;
	vector<UnlockedId,__malloc_alloc_template<0> > *pLockVector;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	int i;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	
  UnlockedId *pUVar1;
  bool bVar2;
  UnlockedId *pUVar3;
  UnlockedRecon *pUVar4;
  int iVar5;
  int iVar6;
  
  bVar2 = false;
  pUVar4 = (UnlockedRecon *)0x0;
  switch(type) {
  case 0:
    pUVar4 = &(_globals.m_pOptionsRecon)->m_Unlocked;
    break;
  case 1:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).gameModes;
    break;
  case 2:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).challengeLevels;
    break;
  case 3:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).careers;
    break;
  case 4:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).ma_hair;
    break;
  case 5:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).ma_makeup;
    break;
  case 6:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).ma_accessories;
    break;
  case 7:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).ma_face;
    break;
  case 8:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).ma_upperBody;
    break;
  case 9:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).ma_lowerBody;
    break;
  case 10:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).ma_shoes;
    break;
  case 0xb:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).mc_hair;
    break;
  case 0xc:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).mc_makeup;
    break;
  case 0xd:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).mc_accessories;
    break;
  case 0xe:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).mc_face;
    break;
  case 0xf:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).mc_upperBody;
    break;
  case 0x10:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).mc_lowerBody;
    break;
  case 0x11:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).mc_shoes;
    break;
  case 0x12:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).fa_hair;
    break;
  case 0x13:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).fa_makeup;
    break;
  case 0x14:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).fa_accessories;
    break;
  case 0x15:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).fa_face;
    break;
  case 0x16:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).fa_upperBody;
    break;
  case 0x17:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).fa_lowerBody;
    break;
  case 0x18:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).fa_shoes;
    break;
  case 0x19:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).fc_hair;
    break;
  case 0x1a:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).fc_makeup;
    break;
  case 0x1b:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).fc_accessories;
    break;
  case 0x1c:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).fc_face;
    break;
  case 0x1d:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).fc_upperBody;
    break;
  case 0x1e:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).fc_lowerBody;
    break;
  case 0x1f:
    pUVar4 = (UnlockedRecon *)&((_globals.m_pOptionsRecon)->m_Unlocked).fc_shoes;
  }
  if (pUVar4 != (UnlockedRecon *)0x0) {
                    /* inlined from ../MSrc/vector.h */
    pUVar1 = (pUVar4->objects).start;
    iVar6 = (int)(pUVar4->objects).finish - (int)pUVar1;
                    /* end of inlined section */
    iVar5 = 0;
    pUVar3 = pUVar1;
    if (0 < iVar6) {
      do {
        iVar5 = iVar5 + 1;
        if (pUVar3->id == targetId) {
          bVar2 = true;
        }
      } while ((iVar5 < iVar6) && (pUVar3 = pUVar1 + iVar5, !bVar2));
    }
  }
  return bVar2;
}

void AddToNeighborhoodUnlocked(u32 type, u32 targetId) {
	UnlockedId LockId;
	vector<UnlockedId,__malloc_alloc_template<0> > *pLockVector;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	
  UnlockedId *position;
  NeighborhoodImpl *pNVar1;
  UnlockedRecon *pUVar2;
  UnlockedId LockId;
  
  pUVar2 = (UnlockedRecon *)0x0;
  LockId.id = (uchar)targetId;
  switch(type) {
  case 0:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    break;
  case 1:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->gameModes;
    break;
  case 2:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->challengeLevels;
    break;
  case 3:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->careers;
    break;
  case 4:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->ma_hair;
    break;
  case 5:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->ma_makeup;
    break;
  case 6:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->ma_accessories;
    break;
  case 7:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->ma_face;
    break;
  case 8:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->ma_upperBody;
    break;
  case 9:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->ma_lowerBody;
    break;
  case 10:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->ma_shoes;
    break;
  case 0xb:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->mc_hair;
    break;
  case 0xc:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->mc_makeup;
    break;
  case 0xd:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->mc_accessories;
    break;
  case 0xe:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->mc_face;
    break;
  case 0xf:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->mc_upperBody;
    break;
  case 0x10:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->mc_lowerBody;
    break;
  case 0x11:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->mc_shoes;
    break;
  case 0x12:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->fa_hair;
    break;
  case 0x13:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->fa_makeup;
    break;
  case 0x14:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->fa_accessories;
    break;
  case 0x15:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->fa_face;
    break;
  case 0x16:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->fa_upperBody;
    break;
  case 0x17:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->fa_lowerBody;
    break;
  case 0x18:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->fa_shoes;
    break;
  case 0x19:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->fc_hair;
    break;
  case 0x1a:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->fc_makeup;
    break;
  case 0x1b:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->fc_accessories;
    break;
  case 0x1c:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->fc_face;
    break;
  case 0x1d:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->fc_upperBody;
    break;
  case 0x1e:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->fc_lowerBody;
    break;
  case 0x1f:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar1 = (NeighborhoodImpl *)
             (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar2 = GetUnlockedRecon__16NeighborhoodImpl(pNVar1);
    pUVar2 = (UnlockedRecon *)&pUVar2->fc_shoes;
  }
  if (pUVar2 != (UnlockedRecon *)0x0) {
                    /* inlined from ../MSrc/vector.h */
    position = (pUVar2->objects).finish;
    if (position == (pUVar2->objects).end_of_storage) {
      insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                (&pUVar2->objects,position,&LockId);
                    /* end of inlined section */
    }
    else {
      position->id = LockId.id;
      (pUVar2->objects).finish = (pUVar2->objects).finish + 1;
    }
  }
  return;
}

void AddToGlobalUnlocked(u32 type, u32 targetId) {
	UnlockedId LockId;
	vector<UnlockedId,__malloc_alloc_template<0> > *pLockVector;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	
  UnlockedId *position;
  vector_UnlockedId___malloc_alloc_template_0___ *this;
  UnlockedId LockId;
  
  this = (vector_UnlockedId___malloc_alloc_template_0___ *)0x0;
  LockId.id = (uchar)targetId;
  switch(type) {
  case 0:
    this = (vector_UnlockedId___malloc_alloc_template_0___ *)&(_globals.m_pOptionsRecon)->m_Unlocked
    ;
    break;
  case 1:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).gameModes;
    break;
  case 2:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).challengeLevels;
    break;
  case 3:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).careers;
    break;
  case 4:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).ma_hair;
    break;
  case 5:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).ma_makeup;
    break;
  case 6:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).ma_accessories;
    break;
  case 7:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).ma_face;
    break;
  case 8:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).ma_upperBody;
    break;
  case 9:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).ma_lowerBody;
    break;
  case 10:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).ma_shoes;
    break;
  case 0xb:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).mc_hair;
    break;
  case 0xc:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).mc_makeup;
    break;
  case 0xd:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).mc_accessories;
    break;
  case 0xe:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).mc_face;
    break;
  case 0xf:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).mc_upperBody;
    break;
  case 0x10:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).mc_lowerBody;
    break;
  case 0x11:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).mc_shoes;
    break;
  case 0x12:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).fa_hair;
    break;
  case 0x13:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).fa_makeup;
    break;
  case 0x14:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).fa_accessories;
    break;
  case 0x15:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).fa_face;
    break;
  case 0x16:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).fa_upperBody;
    break;
  case 0x17:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).fa_lowerBody;
    break;
  case 0x18:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).fa_shoes;
    break;
  case 0x19:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).fc_hair;
    break;
  case 0x1a:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).fc_makeup;
    break;
  case 0x1b:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).fc_accessories;
    break;
  case 0x1c:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).fc_face;
    break;
  case 0x1d:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).fc_upperBody;
    break;
  case 0x1e:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).fc_lowerBody;
    break;
  case 0x1f:
    this = &((_globals.m_pOptionsRecon)->m_Unlocked).fc_shoes;
  }
  if (this != (vector_UnlockedId___malloc_alloc_template_0___ *)0x0) {
                    /* inlined from ../MSrc/vector.h */
    position = this->finish;
    if (position == this->end_of_storage) {
      insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                (this,position,&LockId);
                    /* end of inlined section */
    }
    else {
      position->id = LockId.id;
      this->finish = this->finish + 1;
    }
  }
  return;
}

s32 UnlockItems(u32 code, u32 nPersonId, u16 *nBitCode) {
	s32 nReturnCode;
	s32 nType;
	u32 nIdCode;
	s32 nData;
	bool bUnlockedSomething;
	int nSkinBase;
	int nSkinEnum;
	u32 nFoundId;
	cXObject *person;
	bool bContinue;
	cXPerson *aPerson;
	CustomCharacter *pCustChar;
	cXObject *ptr;
	
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  void *pvVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  TreeSim **ppTVar10;
  uint uVar11;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  int iVar12;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  uint nFoundId;
  int nData;
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
  
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  uVar11 = code & 0xff;
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  uVar9 = (code & 0xff00) >> 8;
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  iVar12 = 0;
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  bVar1 = false;
  nData = 0;
  *nBitCode = 0;
  if (uVar9 < 4) {
    bVar2 = CheckLockableById__FUiUiPi(uVar9,uVar11,(int *)((uint)&nFoundId | 4));
    if (!bVar2) {
      return 0;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    lVar6 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                      ((int)&_5Globs_pNeighborhood->__vtable +
                       (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
    if ((lVar6 == 1) && (bVar2 = CheckNeighborhoodUnlocked__FUiUi(uVar9,uVar11), !bVar2)) {
      AddToNeighborhoodUnlocked__FUiUi(uVar9,uVar11);
      bVar1 = true;
    }
    bVar2 = CheckGlobalUnlocked__FUiUi(uVar9,uVar11);
    if (!bVar2) {
      AddToGlobalUnlocked__FUiUi(uVar9,uVar11);
      bVar1 = true;
    }
    if (!bVar1) {
      return 0;
    }
    if (uVar9 == 0) {
      SetEvent__11EPausePanelQ213Panelstateman10PanelEventUi
                ((EPausePanel__69_3945 *)&(_globals._pPanel)->m_pausePanel,UNLOCK_OBJECT_EVENT,nData
                );
    }
    if (uVar9 == 1) {
      uVar3 = *nBitCode | 2;
      nData = iVar12;
    }
    else if (uVar9 < 2) {
      if (uVar9 != 0) {
        return 0;
      }
      uVar3 = *nBitCode | 1;
    }
    else if (uVar9 == 2) {
      uVar3 = *nBitCode | 4;
      nData = iVar12;
    }
    else {
      if (uVar9 != 3) {
        return 0;
      }
      uVar3 = *nBitCode | 8;
      nData = iVar12;
    }
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    bVar1 = _5Globs_pObjectModule == (ObjectModule *)0x0;
    nFoundId = 0;
    if (bVar1) {
      return 0;
    }
                    /* end of inlined section */
    lVar6 = (*(code *)_5Globs_pObjectModule->__vtable->AdvanceSelectedPerson)
                      ((int)&_5Globs_pObjectModule->__vtable +
                       (int)*(short *)&_5Globs_pObjectModule->__vtable->SetSelectedPerson,nPersonId)
    ;
    if (lVar6 == 0 || bVar1) {
      return 0;
    }
    ppTVar10 = (TreeSim **)lVar6;
    lVar7 = (*(code *)ppTVar10[1][0x15].m_pCursorObject)
                      ((int)ppTVar10 + (int)*(short *)&ppTVar10[1][0x15].m_pMTObject);
    if (lVar7 != 2) {
      return 0;
    }
                    /* inlined from ../MSrc/SCID.h */
    pvVar4 = (void *)0x0;
    if (lVar6 != 0) {
      pvVar4 = _dyncastimpl__7TreeSim4SCID(*ppTVar10,cXPersonID);
    }
                    /* end of inlined section */
    piVar5 = (int *)(**(code **)(*(int *)((int)pvVar4 + 4) + 0xfc))
                              ((int)pvVar4 + (int)*(short *)(*(int *)((int)pvVar4 + 4) + 0xf8));
    uVar9 = 0xb;
    if (*piVar5 == 0) {
      iVar8 = piVar5[1];
      uVar9 = 0x19;
      uVar11 = 0x12;
    }
    else {
      iVar8 = piVar5[1];
      uVar11 = 4;
    }
    if (iVar8 != 0) {
      uVar9 = uVar11;
    }
    nFoundId = 0;
    bVar1 = false;
    bVar2 = CheckLockableByData__FUiiPUi(uVar9,(int)*(char *)((int)piVar5 + 0xb),&nFoundId);
    if (bVar2) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      lVar6 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                        ((int)&_5Globs_pNeighborhood->__vtable +
                         (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
      if ((lVar6 == 1) && (bVar2 = CheckNeighborhoodUnlocked__FUiUi(uVar9,nFoundId), !bVar2)) {
        bVar1 = true;
        AddToNeighborhoodUnlocked__FUiUi(uVar9,nFoundId);
      }
      bVar2 = CheckGlobalUnlocked__FUiUi(uVar9,nFoundId);
      if (!bVar2) {
        bVar1 = true;
        AddToGlobalUnlocked__FUiUi(uVar9,nFoundId);
      }
      if (bVar1) {
        *nBitCode = *nBitCode | 0x10;
      }
    }
    nFoundId = 0;
    uVar11 = uVar9 + 1;
    bVar1 = false;
    bVar2 = CheckLockableByData__FUiiPUi(uVar11,(int)*(char *)((int)piVar5 + 0xf),&nFoundId);
    if (bVar2) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      lVar6 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                        ((int)&_5Globs_pNeighborhood->__vtable +
                         (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
      if ((lVar6 == 1) && (bVar2 = CheckNeighborhoodUnlocked__FUiUi(uVar11,nFoundId), !bVar2)) {
        bVar1 = true;
        AddToNeighborhoodUnlocked__FUiUi(uVar11,nFoundId);
      }
      bVar2 = CheckGlobalUnlocked__FUiUi(uVar11,nFoundId);
      if (!bVar2) {
        bVar1 = true;
        AddToGlobalUnlocked__FUiUi(uVar11,nFoundId);
      }
      if (bVar1) {
        *nBitCode = *nBitCode | 0x20;
      }
    }
    nFoundId = 0;
    uVar11 = uVar9 + 2;
    bVar1 = false;
    bVar2 = CheckLockableByData__FUiiPUi(uVar11,(int)*(char *)((int)piVar5 + 9),&nFoundId);
    if (bVar2) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      lVar6 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                        ((int)&_5Globs_pNeighborhood->__vtable +
                         (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
      if ((lVar6 == 1) && (bVar2 = CheckNeighborhoodUnlocked__FUiUi(uVar11,nFoundId), !bVar2)) {
        bVar1 = true;
        AddToNeighborhoodUnlocked__FUiUi(uVar11,nFoundId);
      }
      bVar2 = CheckGlobalUnlocked__FUiUi(uVar11,nFoundId);
      if (!bVar2) {
        bVar1 = true;
        AddToGlobalUnlocked__FUiUi(uVar11,nFoundId);
      }
      if (bVar1) {
        *nBitCode = *nBitCode | 0x40;
      }
    }
    nFoundId = 0;
    uVar11 = uVar9 + 3;
    bVar1 = false;
    bVar2 = CheckLockableByData__FUiiPUi(uVar11,(int)*(char *)((int)piVar5 + 10),&nFoundId);
    if (bVar2) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      lVar6 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                        ((int)&_5Globs_pNeighborhood->__vtable +
                         (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
      if ((lVar6 == 1) && (bVar2 = CheckNeighborhoodUnlocked__FUiUi(uVar11,nFoundId), !bVar2)) {
        bVar1 = true;
        AddToNeighborhoodUnlocked__FUiUi(uVar11,nFoundId);
      }
      bVar2 = CheckGlobalUnlocked__FUiUi(uVar11,nFoundId);
      if (!bVar2) {
        bVar1 = true;
        AddToGlobalUnlocked__FUiUi(uVar11,nFoundId);
      }
      if (bVar1) {
        *nBitCode = *nBitCode | 0x80;
      }
    }
    nFoundId = 0;
    uVar11 = uVar9 + 4;
    bVar1 = false;
    bVar2 = CheckLockableByData__FUiiPUi(uVar11,(int)*(char *)(piVar5 + 3),&nFoundId);
    if (bVar2) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      lVar6 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                        ((int)&_5Globs_pNeighborhood->__vtable +
                         (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
      if ((lVar6 == 1) && (bVar2 = CheckNeighborhoodUnlocked__FUiUi(uVar11,nFoundId), !bVar2)) {
        bVar1 = true;
        AddToNeighborhoodUnlocked__FUiUi(uVar11,nFoundId);
      }
      bVar2 = CheckGlobalUnlocked__FUiUi(uVar11,nFoundId);
      if (!bVar2) {
        bVar1 = true;
        AddToGlobalUnlocked__FUiUi(uVar11,nFoundId);
      }
      if (bVar1) {
        *nBitCode = *nBitCode | 0x100;
      }
    }
    nFoundId = 0;
    uVar11 = uVar9 + 5;
    bVar1 = false;
    bVar2 = CheckLockableByData__FUiiPUi(uVar11,(int)*(char *)((int)piVar5 + 0xd),&nFoundId);
    if (bVar2) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      lVar6 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                        ((int)&_5Globs_pNeighborhood->__vtable +
                         (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
      if ((lVar6 == 1) && (bVar2 = CheckNeighborhoodUnlocked__FUiUi(uVar11,nFoundId), !bVar2)) {
        bVar1 = true;
        AddToNeighborhoodUnlocked__FUiUi(uVar11,nFoundId);
      }
      bVar2 = CheckGlobalUnlocked__FUiUi(uVar11,nFoundId);
      if (!bVar2) {
        bVar1 = true;
        AddToGlobalUnlocked__FUiUi(uVar11,nFoundId);
      }
      if (bVar1) {
        *nBitCode = *nBitCode | 0x200;
      }
    }
    nFoundId = 0;
    uVar9 = uVar9 + 6;
    bVar1 = false;
    bVar2 = CheckLockableByData__FUiiPUi(uVar9,(int)*(char *)((int)piVar5 + 0xe),&nFoundId);
    if (!bVar2) {
      return 0;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    lVar6 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                      ((int)&_5Globs_pNeighborhood->__vtable +
                       (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
    if ((lVar6 == 1) && (bVar2 = CheckNeighborhoodUnlocked__FUiUi(uVar9,nFoundId), !bVar2)) {
      bVar1 = true;
      AddToNeighborhoodUnlocked__FUiUi(uVar9,nFoundId);
    }
    bVar2 = CheckGlobalUnlocked__FUiUi(uVar9,nFoundId);
    if (!bVar2) {
      bVar1 = true;
      AddToGlobalUnlocked__FUiUi(uVar9,nFoundId);
    }
    if (!bVar1) {
      return 0;
    }
    uVar3 = *nBitCode | 0x400;
    nData = iVar12;
  }
  *nBitCode = uVar3;
  return nData;
}

void TestUnlocked(u32 code, u16 *nBitCode) {
	s32 nType;
	u32 nIdCode;
	s32 nData;
	bool bFoundUnlocked;
	
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  long lVar4;
  uint type;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  uint targetId;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  int nData;
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
  
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  targetId = code & 0xff;
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  type = (code & 0xff00) >> 8;
  nData = 0;
  *nBitCode = 0;
  if ((type < 4) && (bVar1 = CheckLockableById__FUiUiPi(type,targetId,&nData), bVar1)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    bVar1 = true;
    lVar4 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                      ((int)&_5Globs_pNeighborhood->__vtable +
                       (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
    if (lVar4 == 1) {
      bVar1 = CheckNeighborhoodUnlocked__FUiUi(type,targetId);
    }
    else {
      bVar2 = CheckGlobalUnlocked__FUiUi(type,targetId);
      if (!bVar2) {
        bVar1 = false;
      }
    }
    if (bVar1 != false) {
      if (type == 1) {
        uVar3 = *nBitCode | 2;
      }
      else if (type < 2) {
        if (type != 0) {
          return;
        }
        uVar3 = *nBitCode | 1;
      }
      else if (type == 2) {
        uVar3 = *nBitCode | 4;
      }
      else {
        if (type != 3) {
          return;
        }
        uVar3 = *nBitCode | 8;
      }
      *nBitCode = uVar3;
    }
  }
  return;
}

s32 NewScore(s16 nPlayerNum, s16 nScore, s16 nComponent1, s16 nComponent2, s16 nComponent3, s16 nComponent4) {
	s32 nIndex;
	int i;
	int nHouseNum;
	EHouse *this;
	bool bNewHighScore;
	c16 *pSimName;
	ScoreRecon *this;
	ScoreRecon &_ctor_arg;
	StackString2<16> &other;
	StackString2<16> *this;
	
  cXObject__150_1187 *pcVar1;
  cXObject__150_1187__vtable *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  OptionsRecon *pOVar6;
  ObjSelector *this;
  BString2 *this_00;
  short *str;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
  iVar11 = -1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
  iVar8 = (_globals._pCurHouse)->m_lotNum;
                    /* end of inlined section */
  if (_globals._pSelectedSims[(short)nPlayerNum] != (cXPerson__150_1300 *)0x0) {
    bVar3 = false;
    iVar10 = 0;
    piVar7 = (int *)((int)&((_globals.m_pOptionsRecon)->m_Unlocked).ma_makeup + iVar8 * 0x17c);
    iVar9 = *piVar7;
    while( true ) {
      if (iVar9 <= (short)nScore) {
        bVar3 = true;
        iVar11 = iVar10;
      }
      iVar10 = iVar10 + 1;
      piVar7 = piVar7 + 0x13;
      if ((4 < iVar10) || (bVar3)) break;
      iVar9 = *piVar7;
    }
    if (bVar3) {
      iVar9 = 4;
      if (iVar11 < 4) {
        iVar10 = 0x130;
        do {
          pOVar6 = _globals.m_pOptionsRecon;
          iVar9 = iVar9 + -1;
          iVar4 = iVar10 + iVar8 * 0x17c + -0x17c;
          iVar5 = iVar10 + iVar8 * 0x17c + -0x17c;
                    /* inlined from ../MSrc/stringbuffer2.h */
          iVar10 = iVar10 + -0x4c;
          copy__13StringBuffer2RC13StringBuffer2
                    ((StringBuffer2 *)((int)&(_globals.m_pOptionsRecon)->m_Unlocked + iVar5 + 0x180)
                     ,(StringBuffer2 *)((int)_globals.m_pOptionsRecon + iVar4 + 0x148));
          copy__13StringBuffer2RC13StringBuffer2
                    ((StringBuffer2 *)((int)&(pOVar6->m_Unlocked).careers + iVar5 + 0x184),
                     (StringBuffer2 *)((int)pOVar6 + iVar4 + 0x170));
                    /* end of inlined section */
          *(undefined4 *)((int)&(pOVar6->m_Unlocked).ma_makeup + iVar5 + 0x17c) =
               *(undefined4 *)(&pOVar6->m_bRumble + iVar4 + 0x17c);
          *(undefined4 *)((int)&(pOVar6->m_Unlocked).ma_makeup + iVar5 + 0x180) =
               *(undefined4 *)(&pOVar6->m_bAutoCenter + iVar4 + 0x17c);
          *(undefined4 *)((int)&(pOVar6->m_Unlocked).ma_makeup + iVar5 + 0x184) =
               *(undefined4 *)(&pOVar6->m_nSFXVolume + iVar4 + 0x17c);
          *(undefined4 *)((int)&(pOVar6->m_Unlocked).ma_accessories + iVar5 + 0x17c) =
               *(undefined4 *)(&pOVar6->m_nLanguageIndex + iVar4 + 0x17c);
          *(undefined4 *)((int)&(pOVar6->m_Unlocked).ma_accessories + iVar5 + 0x180) =
               *(undefined4 *)((int)&(pOVar6->m_Unlocked).objects + iVar4 + 0x17c);
        } while (iVar11 < iVar9);
      }
      iVar9 = iVar11 * 0x4c;
      iVar10 = iVar9 + iVar8 * 0x17c + -0x17c;
      iVar8 = iVar8 * 0x17c + 0x18;
      *(int *)((int)&((_globals.m_pOptionsRecon)->m_Unlocked).ma_makeup + iVar10 + 0x17c) =
           (int)(short)nScore;
      *(int *)((int)&((_globals.m_pOptionsRecon)->m_Unlocked).ma_makeup + iVar10 + 0x180) =
           (int)(short)nComponent1;
      *(int *)((int)&((_globals.m_pOptionsRecon)->m_Unlocked).ma_makeup + iVar10 + 0x184) =
           (int)(short)nComponent2;
      *(int *)((int)&((_globals.m_pOptionsRecon)->m_Unlocked).ma_accessories + iVar10 + 0x17c) =
           (int)(short)nComponent3;
      *(int *)((int)&((_globals.m_pOptionsRecon)->m_Unlocked).ma_accessories + iVar10 + 0x180) =
           (int)(short)nComponent4;
      erase__13StringBuffer2
                ((StringBuffer2 *)
                 ((int)&((_globals.m_pOptionsRecon)->m_Unlocked).careers + iVar9 + iVar8 + -0x10));
      pcVar1 = _globals._pSelectedSims[(short)nPlayerNum]->_vb1187;
      pcVar2 = pcVar1->__vtable;
      this = (ObjSelector *)
             (*(code *)pcVar2[1].SetLevel)
                       ((int)&pcVar1->_vb1121 + (int)*(short *)&pcVar2[1].GetTreeID);
      this_00 = GetUserName__11ObjSelector(this);
      str = c_str__C8BString2(this_00);
      erase__13StringBuffer2
                ((StringBuffer2 *)
                 ((int)&((_globals.m_pOptionsRecon)->m_Unlocked).objects + iVar9 + iVar8 + -0x14));
      append__13StringBuffer2PCUsi
                ((StringBuffer2 *)
                 ((int)&((_globals.m_pOptionsRecon)->m_Unlocked).objects + iVar9 + iVar8 + -0x14),
                 str,0xf);
    }
  }
  return iVar11;
}

void MergeNghUnlockedToGlobal() {
	bool bFound;
	UnlockedId LockId;
	vector<UnlockedId,__malloc_alloc_template<0> > *pGlobalUnlockedVector;
	vector<UnlockedId,__malloc_alloc_template<0> > *pNghUnlockedVector;
	int nType;
	int nGlobalSize;
	int nNghSize;
	int nGlobal;
	int nNgh;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	
  int iVar1;
  bool bVar2;
  int iVar3;
  UnlockedId *pUVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  vector_UnlockedId___malloc_alloc_template_0___ *this;
  int iVar8;
  int iVar9;
  uint uVar10;
  UnlockedId LockId;
  
  uVar10 = 0;
  this = (vector_UnlockedId___malloc_alloc_template_0___ *)0x0;
  piVar7 = (int *)0x0;
  bVar2 = true;
  while( true ) {
    if (bVar2) {
      switch(uVar10) {
      default:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = (vector_UnlockedId___malloc_alloc_template_0___ *)
               &(_globals.m_pOptionsRecon)->m_Unlocked;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x158);
        break;
      case 1:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).gameModes;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x164);
        break;
      case 2:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).challengeLevels;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x170);
        break;
      case 3:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).careers;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x17c);
        break;
      case 4:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).ma_hair;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x188);
        break;
      case 5:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).ma_makeup;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x194);
        break;
      case 6:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).ma_accessories;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x1a0);
        break;
      case 7:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).ma_face;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x1ac);
        break;
      case 8:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).ma_upperBody;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x1b8);
        break;
      case 9:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).ma_lowerBody;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x1c4);
        break;
      case 10:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).ma_shoes;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x1d0);
        break;
      case 0xb:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).mc_hair;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x1dc);
        break;
      case 0xc:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).mc_makeup;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x1e8);
        break;
      case 0xd:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).mc_accessories;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 500);
        break;
      case 0xe:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).mc_face;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x200);
        break;
      case 0xf:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).mc_upperBody;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x20c);
        break;
      case 0x10:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).mc_lowerBody;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x218);
        break;
      case 0x11:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).mc_shoes;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x224);
        break;
      case 0x12:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).fa_hair;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x230);
        break;
      case 0x13:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).fa_makeup;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x23c);
        break;
      case 0x14:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).fa_accessories;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x248);
        break;
      case 0x15:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).fa_face;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x254);
        break;
      case 0x16:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).fa_upperBody;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x260);
        break;
      case 0x17:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).fa_lowerBody;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x26c);
        break;
      case 0x18:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).fa_shoes;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x278);
        break;
      case 0x19:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).fc_hair;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x284);
        break;
      case 0x1a:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).fc_makeup;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x290);
        break;
      case 0x1b:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).fc_accessories;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x29c);
        break;
      case 0x1c:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).fc_face;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x2a8);
        break;
      case 0x1d:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).fc_upperBody;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x2b4);
        break;
      case 0x1e:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).fc_lowerBody;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x2c0);
        break;
      case 0x1f:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this = &((_globals.m_pOptionsRecon)->m_Unlocked).fc_shoes;
        iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        piVar7 = (int *)(iVar3 + 0x2cc);
      }
    }
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
    uVar10 = uVar10 + 1;
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
    iVar6 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar3 = piVar7[1];
    iVar1 = *piVar7;
                    /* end of inlined section */
    iVar8 = (int)this->finish - (int)this->start;
    if (0 < iVar3 - iVar1) {
      do {
        bVar2 = false;
        iVar5 = 0;
        iVar9 = iVar6 + 1;
        if (0 < iVar8) {
                    /* inlined from ../MSrc/vector.h */
          pUVar4 = this->start;
          do {
            iVar5 = iVar5 + 1;
            if (*(uchar *)(*piVar7 + iVar6) == pUVar4->id) {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar4 = this->start + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
          LockId.id = *(uchar *)(*piVar7 + iVar5);
                    /* inlined from ../MSrc/vector.h */
          pUVar4 = this->finish;
          if (pUVar4 == this->end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (this,pUVar4,&LockId);
                    /* end of inlined section */
          }
          else {
            pUVar4->id = LockId.id;
            this->finish = this->finish + 1;
          }
        }
        iVar6 = iVar9;
      } while (iVar9 < iVar3 - iVar1);
    }
    if (0x1f < (int)uVar10) break;
    bVar2 = uVar10 < 0x20;
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

UnlockedId* UnlockedId * copy_backward<UnlockedId *, UnlockedId *>(UnlockedId *first, UnlockedId *last, UnlockedId *result) {
  if (first != last) {
    do {
      last = last + -1;
      result = result + -1;
      result->id = last->id;
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

UnlockedId* UnlockedId * uninitialized_copy<UnlockedId *, UnlockedId *>(UnlockedId *first, UnlockedId *last, UnlockedId *result) {
	UnlockedId *p;
	UnlockedId &value;
	void *pAddress;
	
  uchar *puVar1;
  UnlockedId *pUVar2;
  
  pUVar2 = result;
  if (first != last) {
    do {
      puVar1 = &first->id;
      first = first + 1;
      result = pUVar2 + 1;
      pUVar2->id = *puVar1;
      pUVar2 = result;
    } while (first != last);
  }
  return result;
}

void vector<UnlockedId, __malloc_alloc_template<0> >::insert_aux(UnlockedId *position, UnlockedId &x) {
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	void *result;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	UnlockedId *p;
	UnlockedId &value;
	void *pAddress;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	UnlockedId *first;
	UnlockedId *pointer;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	
  uchar uVar1;
  UnlockedId *pUVar2;
  UnlockedId *pUVar3;
  int iVar4;
  UnlockedId *pUVar5;
  uint size;
  
  pUVar2 = this->finish;
  if (pUVar2 == this->end_of_storage) {
    iVar4 = (int)pUVar2 - (int)this->start;
    size = 1;
    if (iVar4 != 0) {
      size = iVar4 * 2;
    }
                    /* inlined from ../MSrc/alloc.h */
    pUVar2 = (UnlockedId *)0x0;
    if ((size != 0) && (pUVar2 = (UnlockedId *)malloc(size), pUVar2 == (UnlockedId *)0x0)) {
      pUVar2 = (UnlockedId *)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
    }
                    /* end of inlined section */
                    /* end of inlined section */
    uninitialized_copy__H2ZP10UnlockedIdZP10UnlockedId_X01X01X11_X11(this->start,position,pUVar2);
                    /* inlined from ../MSrc/algobase.h */
    pUVar5 = pUVar2 + iVar4;
                    /* end of inlined section */
                    /* inlined from ../MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/algobase.h */
    pUVar2[(int)position - (int)this->start].id = x->id;
                    /* end of inlined section */
    uninitialized_copy__H2ZP10UnlockedIdZP10UnlockedId_X01X01X11_X11
              (position,this->finish,pUVar2 + (int)(position + (1 - (int)this->start)));
                    /* inlined from ../MSrc/algobase.h */
    pUVar3 = this->start;
    if (pUVar3 == this->finish) {
      pUVar3 = this->start;
    }
    else {
      do {
        pUVar3 = pUVar3 + 1;
      } while (pUVar3 != this->finish);
                    /* end of inlined section */
      pUVar3 = this->start;
    }
                    /* inlined from ../MSrc/alloc.h */
    if ((pUVar3 != (UnlockedId *)0x0) && (this->end_of_storage != pUVar3)) {
      free(pUVar3);
                    /* end of inlined section */
    }
    this->start = pUVar2;
    this->end_of_storage = pUVar2 + size;
  }
  else {
                    /* inlined from ../MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/algobase.h */
    pUVar2->id = pUVar2[-1].id;
                    /* end of inlined section */
    uVar1 = x->id;
    copy_backward__H2ZP10UnlockedIdZP10UnlockedId_X01X01X11_X11
              (position,this->finish + -1,this->finish);
    position->id = uVar1;
    pUVar5 = this->finish;
  }
  this->finish = pUVar5 + 1;
  return;
}

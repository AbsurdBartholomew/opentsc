// STATUS: NOT STARTED

#include "neighborhoodmode.h"

// warning: multiple differing types with the same name (name not equal)
struct DPadWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb4826;
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
struct ESimsCursor : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb4826;
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
	ISimInstanceList m_objList;
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
	Panelstateman *$vb4826;
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
struct cXObject : virtual TreeSim {
	TreeSim *$vb4875;
	__vtbl_ptr_type *$vf4929;
	
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

// warning: multiple differing types with the same name (size not equal)
struct EVoice {
	bool bInUse;
	bool bIsPlaying;
	float volumeL;
	float volumeR;
	float pitch;
	int iLatencyCounter;
	ERSampledata *pSampleRes;
	IDirectMusicAudioPath *pAudioPath;
	IDirectMusicSegment8 *pSegment;
	
	EVoice& operator=();
	EVoice();
	EVoice();
	void reset();
};

struct EWin32Audio : EAudio {
	bool m_bMusicPaused;
	float m_MusicVolume;
	float m_MusicPan;
	int m_iMusicLatencyCounter;
	IDirectMusicAudioPath *m_pMusicPath;
	IDirectSoundBuffer8 *m_pMusicBuffer;
	IDirectMusicSegment8 *m_pMusicSegment;
	EVoice m_voice[48];
	int m_iLastVoiceAlloc;
	
	EWin32Audio& operator=();
	EWin32Audio();
	EWin32Audio();
	/* vtable[1] */ virtual EWin32Audio(EWin32Audio*, int, void);
	void OnAppShutdown();
	/* vtable[2] */ virtual void InitAudio();
	/* vtable[3] */ virtual void Shutdown();
	/* vtable[4] */ virtual void Update();
	/* vtable[5] */ virtual void Flush();
	/* vtable[6] */ virtual void AddEvent();
	/* vtable[7] */ virtual void RemoveEvent();
	/* vtable[8] */ virtual void PlayMusic();
	/* vtable[9] */ virtual void StopMusic();
	/* vtable[10] */ virtual void PauseMusic();
	/* vtable[11] */ virtual void ResumeMusic();
	/* vtable[12] */ virtual void SetMusicVolume();
	/* vtable[13] */ virtual float GetMusicVolume();
	/* vtable[14] */ virtual void SetMusicPan();
	/* vtable[15] */ virtual float GetMusicPan();
	/* vtable[16] */ virtual bool IsPlayingMusic();
	/* vtable[17] */ virtual EVOICE AllocVoice();
	/* vtable[18] */ virtual void FreeVoice();
	/* vtable[19] */ virtual void BindVoice();
	/* vtable[20] */ virtual void UnbindVoice();
	/* vtable[21] */ virtual void GetVoiceState();
	/* vtable[22] */ virtual void SetVoiceState();
};

struct StackString2<2> : StringBuffer2 {
private:
	short unsigned int fChars[2];
};

int _curopt = -1;
static float m_fontSize = 15.f;
static float m_promptoff = 0.025f;
static float _pi_xpromptoff = 0.01f;

__vtbl_ptr_type SimpleReconObject<cSimulator> virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<cSimulator>::~SimpleReconObject,
		/* .__delta2 = */ -31568
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<cSimulator>::DoStream,
		/* .__delta2 = */ -31536
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<cSimulator>::GetType,
		/* .__delta2 = */ -31488
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ENeighborhoodMode virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ENeighborhoodMode::~ENeighborhoodMode,
		/* .__delta2 = */ -27536
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ENeighborhoodMode::Init,
		/* .__delta2 = */ -26664
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ENeighborhoodMode::Update,
		/* .__delta2 = */ -19200
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ENeighborhoodMode::Draw,
		/* .__delta2 = */ -12432
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ENeighborhoodMode::Reset,
		/* .__delta2 = */ -20992
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EHouseSelectMenu virtual table[25] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EHouseSelectMenu::~EHouseSelectMenu,
		/* .__delta2 = */ -31184
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EHouseSelectMenu::Update,
		/* .__delta2 = */ -30920
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EHouseSelectMenu::Draw,
		/* .__delta2 = */ -30952
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIScrollMenu::SetPos,
		/* .__delta2 = */ 416
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::SetBoxDims,
		/* .__delta2 = */ 8880
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::SetBoxDims,
		/* .__delta2 = */ 8944
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EHouseSelectMenu::Message,
		/* .__delta2 = */ -30856
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIScrollMenu::StateChanged,
		/* .__delta2 = */ 472
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::OnButtonRepeat,
		/* .__delta2 = */ 11384
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::OnStickRepeat,
		/* .__delta2 = */ 11496
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
		/* .__pfn = */ &EUIMenu::AddChild,
		/* .__delta2 = */ 11632
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
		/* .__pfn = */ &EUIScrollMenu::RemoveAllOpts,
		/* .__delta2 = */ -3056
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::RemoveOpt,
		/* .__delta2 = */ 8688
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIScrollMenu::AddOpt,
		/* .__delta2 = */ -3008
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIScrollMenu::SetPositions,
		/* .__delta2 = */ -2176
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::SetCurOpt,
		/* .__delta2 = */ 7336
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIScrollMenu::SetLayout,
		/* .__delta2 = */ 360
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::SetStick,
		/* .__delta2 = */ 11960
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIScrollMenu::NextItem,
		/* .__delta2 = */ 536
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIScrollMenu::PrevItem,
		/* .__delta2 = */ 568
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::ProcessStickAndButtonAutoRepeat,
		/* .__delta2 = */ 11080
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EHouseSelectMenuItem virtual table[23] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EHouseSelectMenuItem::~EHouseSelectMenuItem,
		/* .__delta2 = */ 32040
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EHouseSelectMenuItem::Update,
		/* .__delta2 = */ -31608
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EHouseSelectMenuItem::Draw,
		/* .__delta2 = */ 32232
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
		/* .__pfn = */ &EUIObjectNode::Message,
		/* .__delta2 = */ 3616
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
		/* .__pfn = */ &EUIIcon::ShaderRect,
		/* .__delta2 = */ 12848
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIDynTextIcon::SetText,
		/* .__delta2 = */ -4560
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIDynTextIcon::InitString,
		/* .__delta2 = */ -4016
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIDynTextIcon::SetText,
		/* .__delta2 = */ -3800
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIDynTextIcon::InitString,
		/* .__delta2 = */ -3632
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIDynTextIcon::SetTextDef,
		/* .__delta2 = */ -4680
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIDynTextIcon::GetText,
		/* .__delta2 = */ -3352
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIDynTextIcon::DrawText,
		/* .__delta2 = */ -4368
	},
	/* [22] = */ {
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

__vtbl_ptr_type EGameState virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGameState::~EGameState,
		/* .__delta2 = */ 13440
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

static EVec2 vTopLeft;
static EVec2 vTopLeftMessage;
static EVec2 vWHDialog;
static EVec2 vWHMessageBack;
static EVec2 vWHMessageBox;
static EVec2 vWTitleBar;
static EVec2 vWPromptBar;

EHouseSelectMenuItem* EHouseSelectMenuItem::EHouseSelectMenuItem(c16 *string) {
	EUIIconDef icondef;
	EUITextIconDef textdef;
	EUIVirtualCtrl *pCtrl;
	EUIObjectNode *this;
	EUIIcon *this;
	
  undefined *puVar1;
  EUIIconDef *pEVar2;
  int *piVar3;
  EUIVirtualCtrl **ppEVar4;
  uint uVar5;
  ulong *puVar6;
  ERShader *pEVar7;
  EUIIconDef__vtable *local_120;
  undefined4 local_11c;
  undefined4 local_118;
  EUITextIconDef local_110;
  EUIIconDef local_f0;
  EUIIconDef icondef;
  EUITextIconDef textdef;
  
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_110.m_maxChars = 0x20;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_118 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_11c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_120 = (EUIIconDef__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_110.m_xAlign = E_FAX_LEFT;
  local_110.m_yAlign = E_FAY_TOP;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_110.m_pointsize = 12.0;
  local_110.m_selColorIdx = 0;
  local_110.m_colorIdx = 1;
  local_110.m_retChar = -1;
  local_f0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_f0.m_flags = 0;
  local_f0.m_trigger = 0x40;
  local_f0.m_selColorIdx = 0;
  local_f0.m_colorIdx = 1;
                    /* end of inlined section */
  local_f0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __14EUIDynTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (&this->field0_0x0,&local_110,&local_f0,-1,(EVec3 *)&local_120);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_f0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_20EHouseSelectMenuItem;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  icondef.m_flags = 0;
  icondef.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_selColorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_pCtrl = &(_globals.m_pCtrlPad)->field0_0x0;
  textdef.m_maxChars = 0x20;
  textdef.m_xAlign = E_FAX_CENTER;
  textdef.m_yAlign = E_FAY_TOP;
  textdef.m_selColorIdx = 4;
  textdef.m_pointsize = 16.0;
  textdef.m_colorIdx = 1;
                    /* end of inlined section */
  textdef.m_retChar = -1;
  SetFont__11EUITextIconi((EUITextIcon *)this,-0x2080f4e9);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_120 = (this->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_11c = 0x3d23d70a;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] = 0.25;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[2] = 0.04;
  puVar1 = (undefined *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
            CONCAT44(icondef.m_trigger,icondef.m_flags) >> (7 - uVar5) * 8;
  pEVar2 = &(this->field0_0x0).field0_0x0.field0_0x0.m_def;
  uVar5 = (uint)pEVar2 & 7;
  puVar6 = (ulong *)((int)pEVar2 - uVar5);
  *puVar6 = CONCAT44(icondef.m_trigger,icondef.m_flags) << uVar5 * 8 |
            *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  puVar1 = (undefined *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
            CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) >> (7 - uVar5) * 8;
  piVar3 = &(this->field0_0x0).field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar5 = (uint)piVar3 & 7;
  puVar6 = (ulong *)((int)piVar3 - uVar5);
  *puVar6 = CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) << uVar5 * 8 |
            *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  puVar1 = (undefined *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
            CONCAT44(icondef.__vtable,icondef.m_pCtrl) >> (7 - uVar5) * 8;
  ppEVar4 = &(this->field0_0x0).field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar5 = (uint)ppEVar4 & 7;
  puVar6 = (ulong *)((int)ppEVar4 - uVar5);
  *puVar6 = CONCAT44(icondef.__vtable,icondef.m_pCtrl) << uVar5 * 8 |
            *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable = local_120;
  SetTextDef__14EUIDynTextIconRC14EUITextIconDef(&this->field0_0x0,&textdef);
  InitString__14EUIDynTextIconPCUsi(&this->field0_0x0,(short *)0x0,0x20);
  SetText__14EUIDynTextIconPCUs(&this->field0_0x0,string);
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar7 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x3e95aa5d,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pREndcapShdr = pEVar7;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar7 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xc49a973e,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pLEndcapShdr = pEVar7;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar7 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x54258aaf,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pBackShdr = pEVar7;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar7 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xc1d9c5ed,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pXIcon = pEVar7;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_activeCtrl = 0;
  return this;
}

void EHouseSelectMenuItem::~EHouseSelectMenuItem(int __in_chrg) {
  ERShader *pEVar1;
  
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_20EHouseSelectMenuItem;
  while (this->m_pREndcapShdr != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pREndcapShdr->field0_0x0);
    this->m_pREndcapShdr = (ERShader *)0x0;
  }
  pEVar1 = this->m_pLEndcapShdr;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pLEndcapShdr = (ERShader *)0x0;
    pEVar1 = this->m_pLEndcapShdr;
  }
  pEVar1 = this->m_pBackShdr;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pBackShdr = (ERShader *)0x0;
    pEVar1 = this->m_pBackShdr;
  }
  pEVar1 = this->m_pXIcon;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pXIcon = (ERShader *)0x0;
    pEVar1 = this->m_pXIcon;
  }
  ___14EUIDynTextIcon(&this->field0_0x0,__in_chrg);
  return;
}

void EHouseSelectMenuItem::Draw(ERC *prc) {
	float scale;
	int cidx;
	EVec2 vStrSize;
	ETexture *ptexture;
	float xbutwidth;
	float ybutwidth;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	static float pimenuBurpTime = 0.f;
	float _range[2];
	static int pimenuItemS0 = 0;
	static int pimenuItemS1 = 1;
	float mu;
	int tmp;
	float u;
	float a;
	float b;
	EUIObjectNode *this;
	EUIObjectNode *this;
	int which;
	ETexture *this;
	EGraphics *this;
	ETexture *this;
	EGraphics *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	ERC *prc;
	u16 *szString;
	EVec2 *this;
	EUIObjectNode *this;
	float strleft;
	
  undefined *puVar1;
  ushort uVar2;
  ERFont *this_00;
  int iVar3;
  int iVar4;
  EUIObjectNode *pEVar5;
  EUIObjectNode__vtable *pEVar6;
  ulong *puVar7;
  undefined8 uVar8;
  float *pfVar9;
  float fVar10;
  uint uVar11;
  undefined8 unaff_s0;
  EVec4 *vcolor;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  float fVar12;
  float fVar13;
  float _range [2];
  undefined auStack_b0 [16];
  EVec2 vStrSize;
  float local_90;
  EStorable__vtable *local_8c;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int iStack_6c;
  EHashTableNode **local_60;
  uint uStack_5c;
  EFontSize *local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  iVar3 = pimenuItemS1_5273;
  local_40 = (int)unaff_s3;
  uStack_3c = (int)((ulong)unaff_s3 >> 0x20);
  local_70 = (int)unaff_s0;
  iStack_6c = (int)((ulong)unaff_s0 >> 0x20);
  local_30 = (int)unaff_retaddr;
  uStack_2c = (int)((ulong)unaff_retaddr >> 0x20);
  local_50 = (EFontSize *)unaff_s2;
  uStack_4c = (int)((ulong)unaff_s2 >> 0x20);
  local_60 = (EHashTableNode **)unaff_s1;
  uStack_5c = (uint)((ulong)unaff_s1 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  uVar11 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_flags;
                    /* end of inlined section */
  if (((int)uVar11 >> 1 & 1U) != 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (((int)uVar11 >> 3 & 1U) == 0) {
      vcolor = &_BLUE;
    }
    else {
      vcolor = &_YELLOW;
    }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    fVar12 = 1.0;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (((int)(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_flags >> 3 & 1U) != 0) {
      pimenuBurpTime_5271 = pimenuBurpTime_5271 + _dt;
      vStrSize.field0_0x0.d[0] = 1.0;
      vStrSize.field0_0x0.d[1] = _pi_burp_scale;
      _range = (float  [2])CONCAT44(_pi_burp_scale,0x3f800000);
      puVar1 = auStack_b0 + 7;
      uVar11 = (uint)puVar1 & 7;
      *(ulong *)(puVar1 + -uVar11) =
           *(ulong *)(puVar1 + -uVar11) & -1L << (uVar11 + 1) * 8 |
           (ulong)_range >> (7 - uVar11) * 8;
      auStack_b0._0_8_ = _range;
      uVar11 = (int)_range + 7U & 7;
      puVar7 = (ulong *)(((int)_range + 7U) - uVar11);
      *puVar7 = *puVar7 & -1L << (uVar11 + 1) * 8 | (ulong)_range >> (7 - uVar11) * 8;
      if (_pi_burp_dur < pimenuBurpTime_5271) {
        pimenuItemS1_5273 = pimenuItemS0_5272;
        pimenuItemS0_5272 = iVar3;
        pimenuBurpTime_5271 = 0.0;
      }
                    /* inlined from /eor/src2/common/math/e_math.h */
      fVar12 = _range[pimenuItemS0_5272] +
               (pimenuBurpTime_5271 / _pi_burp_dur) *
               (_range[pimenuItemS1_5273] - _range[pimenuItemS0_5272]);
    }
                    /* end of inlined section */
    DrawBackGround__20EHouseSelectMenuItemP3ERCffffRC5EVec4(this,prc,0.005,0.005,1.0,fVar12,&_BLACK)
    ;
    DrawBackGround__20EHouseSelectMenuItemP3ERCffffRC5EVec4(this,prc,0.0,0.0,1.0,fVar12,vcolor);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    this_00 = _globals.m_pFont;
    if (((int)(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_flags >> 3 & 1U) == 0) {
      this_00 = (this->field0_0x0).field0_0x0.m_pFont;
    }
    SetSize__6ERFontffb(this_00,(this->field0_0x0).field0_0x0.m_textdef.m_pointsize,1.0,true);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    uVar11 = (int)(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_flags >> 3 & 1U ^ 1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    uVar8 = *(undefined8 *)&_7EUIIcon_m_vColors[uVar11].field0_0x0;
    fVar12 = _7EUIIcon_m_vColors[uVar11].field0_0x0.d[2];
    fVar10 = _7EUIIcon_m_vColors[uVar11].field0_0x0.d[3];
                    /* end of inlined section */
    (this_00->m_vColor).field0_0x0.d[0] = (float)uVar8;
    (this_00->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar8 >> 0x20);
    (this_00->m_vColor).field0_0x0.d[2] = fVar12;
    (this_00->m_vColor).field0_0x0.d[3] = fVar10;
    Select__6ERFontP3ERC(this_00,prc);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)&vStrSize,this_00,SUB41((this->field0_0x0).m_p,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
    iVar3 = *(int *)(((this->m_pXIcon->m_rtextureList).field0_0x0.m_l.m_pHead)->data + 0x14);
                    /* inlined from /eor/src2/engine/texture/e_texture.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_graphics.h */
    uVar2 = *(ushort *)(iVar3 + 0x12);
    iVar4 = _pGfx->m_yscreen;
                    /* end of inlined section */
    fVar13 = (float)(uint)*(ushort *)(iVar3 + 0x10) / (float)_pGfx->m_xscreen;
    pEVar5 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pParent;
    fVar12 = 0.5;
    pEVar6 = pEVar5->__vtable;
    pfVar9 = (float *)(*(code *)pEVar6[1].OnButtonRepeat)
                                ((int)&(pEVar5->m_ChildList).field0_0x0.m_l.m_pHead +
                                 (int)*(short *)&pEVar6[1].StateChanged);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    local_8c = (EStorable__vtable *)
               ((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pos.field0_0x0.d[2] +
               (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[2] * fVar12);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    fVar10 = *pfVar9 + (((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pParent)->m_WDH).
                       field0_0x0.d[0] * fVar12;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    _range = (float  [2])CONCAT44(local_8c,fVar10);
    local_90 = fVar10;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this_00,prc,(this->field0_0x0).m_p,true,(EVec2 *)&local_90,E_FAX_CENTER,E_FAY_CENTER,
               (EVec2 *)0x0);
                    /* end of inlined section */
    if (((int)(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_flags >> 3 & 1U) != 0) {
      Select__8ERShaderP3ERCi(this->m_pXIcon,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      _range = (float  [2])
               CONCAT44(((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pos.field0_0x0.d[2] -
                        0.008) - ((float)(uint)uVar2 / (float)iVar4) * 0.25,
                        (fVar10 - vStrSize.field0_0x0.d[0] * fVar12) - (fVar13 + _pi_xpromptoff));
      local_8c = (EStorable__vtable *)0x3f800000;
      local_90 = 1.0;
      local_74 = 0x3f800000;
      local_78 = 0x3f800000;
      local_7c = 0x3f800000;
      local_80 = 0x3f800000;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].ClipRect)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,_range,
                 (EVec2 *)&local_90,&local_80);
    }
  }
  return;
}

void EHouseSelectMenuItem::DrawBackGround(ERC *prc, float x, float y, float xs, float ys, EVec4 &vcolor) {
	float ypos;
	float height;
	float totalW;
	float segW;
	float midW;
	EVec2 vL;
	EVec2 vC;
	EVec2 vR;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	float x;
	float x;
	float x;
	float x;
	float x;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  EVec2 vL;
  EVec2 vC;
  EVec2 vR;
  float local_110;
  float local_10c;
  float local_100;
  float local_fc;
  undefined4 local_f0;
  float local_ec;
  float local_e0;
  float local_dc;
  float local_d0;
  float local_cc;
  undefined4 local_c0;
  float local_bc;
  float local_b0;
  float local_ac;
  float local_a0;
  float local_9c;
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
  
  local_50 = (undefined4)unaff_retaddr;
  uStack_4c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  fVar5 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] + 0.08;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  fVar2 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[2];
                    /* end of inlined section */
  local_bc = 0.5;
  fVar4 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pos.field0_0x0.d[2];
  local_a0 = fVar5 * 0.1666667;
  fVar3 = fVar2 + fVar2;
  fVar5 = fVar5 - (local_a0 + local_a0);
  Select__8ERShaderP3ERCi(this->m_pLEndcapShdr,prc,0);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  fVar1 = ((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pos.field0_0x0.d[0] + x) - 0.04;
  local_9c = fVar3 * ys * local_bc;
  fVar2 = (fVar4 - fVar2 * 0.5) + y +
          (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[2];
  local_bc = fVar3 * -ys * local_bc;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_110 = fVar1 + local_a0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_10c = fVar2 + local_9c;
  vC.field0_0x0.d[1] = fVar2 + local_bc;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vR.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vC.field0_0x0.d[0] = fVar1;
  vR.field0_0x0.d[1] = local_bc;
  local_100 = local_a0;
  local_fc = local_9c;
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vC,&local_110,
             0x3cfc68,0x3cfc70,vcolor);
  Select__8ERShaderP3ERCi(this->m_pBackShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vC.field0_0x0.d[0] = fVar1 + local_a0;
  local_dc = fVar2 + local_9c;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_e0 = vC.field0_0x0.d[0] + fVar5;
  vR.field0_0x0.d[1] = fVar2 + local_bc;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_f0 = 0;
                    /* end of inlined section */
  vC.field0_0x0.d[1] = fVar2;
  vR.field0_0x0.d[0] = vC.field0_0x0.d[0];
  local_ec = local_bc;
  local_d0 = fVar5;
  local_cc = local_9c;
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vR,&local_e0,0x3cfc68
             ,0x3cfc70,vcolor);
  Select__8ERShaderP3ERCi(this->m_pREndcapShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vR.field0_0x0.d[0] = vC.field0_0x0.d[0] + fVar5;
  local_ac = vC.field0_0x0.d[1] + local_9c;
  vR.field0_0x0.d[1] = vC.field0_0x0.d[1];
  local_10c = vC.field0_0x0.d[1] + local_bc;
  local_b0 = vR.field0_0x0.d[0] + local_a0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_c0 = 0;
                    /* end of inlined section */
  local_110 = vR.field0_0x0.d[0];
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_110,&local_b0,
             0x3cfc68,0x3cfc70,vcolor);
  return;
}

void EHouseSelectMenuItem::Update() {
  Update__7EUIIcon((EUIIcon *)this);
  return;
}

EHouseSelectMenu* EHouseSelectMenu::EHouseSelectMenu() {
	EUIObjectNode *this;
	EUIMenu *this;
	EUIScrollMenu *this;
	EUIMenu *this;
	EUIMenu *this;
	float y;
	EUIScrollMenu *this;
	EUIMenu *this;
	
  uint uVar1;
  EUIObjectNode__vtable *pEVar2;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  undefined4 local_50;
  float local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  __13EUIScrollMenuiifffiib(&this->field0_0x0,-1,-1,0.05,0.0,0.0,-1,-1,true);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_itemList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_itemList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_16EHouseSelectMenu;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (*_vt_16EHouseSelectMenu[8]._4_4_)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             (short)_vt_16EHouseSelectMenu[8].__delta + -0x44,0x16,1);
  uVar1 = (this->field0_0x0).field0_0x0.field0_0x0.m_flags;
  (this->field0_0x0).field0_0x0.m_xoff = 0.0;
  pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (this->field0_0x0).field0_0x0.field0_0x0.m_flags = uVar1 | 0x16;
  (*(code *)pEVar2[2].Message)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar2[2].SetBoxDims + -0x44);
  pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (this->field0_0x0).field0_0x0.m_layout = 0;
  (this->field0_0x0).field0_0x0.m_optJusty = 1;
  (this->field0_0x0).field0_0x0.m_optJustx = 0;
  (*(code *)pEVar2[2].Message)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar2[2].SetBoxDims + -0x44);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_4c = _pimenu_height;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_50 = 0x3e800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
  (this->field0_0x0).field0_0x0.m_stick = 4;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.m_activeCtrl = -1;
  SetBoxDims__7EUIMenuRC5EVec2((EUIMenu *)this,(EVec2 *)&local_50);
                    /* inlined from /eor/src2/engine/ui/e_uiscrollmenu.h */
                    /* end of inlined section */
  local_38 = _13EUIObjectNode_SAFE_TOP + _pimenu_yoff;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_3c = 0;
  local_40 = 0x3e19999a;
  SetPos__13EUIObjectNodeRC5EVec3((EUIObjectNode *)this,(EVec3 *)&local_40);
  pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar2[2].Message)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar2[2].SetBoxDims + -0x44);
  pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (this->field0_0x0).field0_0x0.m_optgap = 0.0145;
  (*(code *)pEVar2[2].Message)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar2[2].SetBoxDims + -0x44);
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.m_pCurOpt = (EUIObjectNode *)0x0;
  Init__16EHouseSelectMenu(this);
  return this;
}

void EHouseSelectMenu::~EHouseSelectMenu(int __in_chrg) {
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_16EHouseSelectMenu;
  Reset__16EHouseSelectMenu(this);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  RemoveAll__9ENodeList(&(this->m_itemList).field0_0x0);
                    /* end of inlined section */
  ___13EUIScrollMenu(&this->field0_0x0,__in_chrg);
  return;
}

void EHouseSelectMenu::Init() {
  return;
}

void EHouseSelectMenu::Reset() {
	TNodeList<EHouseSelectMenuItem *> *this;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator next;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	
  EUIObjectNode__vtable *pEVar1;
  uint uVar2;
  ENodeListNode *pEVar3;
  
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1[2].EUIObjectNode)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize + *(short *)(pEVar1 + 2) + -0x44);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar3 = (this->m_itemList).field0_0x0.m_l.m_pHead;
  if (pEVar3 != (ENodeListNode *)0x0) {
    uVar2 = pEVar3->data;
    while( true ) {
      pEVar3 = pEVar3->pNext;
      if (uVar2 != 0) {
        (**(code **)(*(int *)(uVar2 + 0x38) + 0xc))
                  (uVar2 + (int)*(short *)(*(int *)(uVar2 + 0x38) + 8),3);
      }
      if (pEVar3 == (ENodeListNode *)0x0) break;
      uVar2 = pEVar3->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_itemList).field0_0x0);
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.m_pCurOpt = (EUIObjectNode *)0x0;
  return;
}

void EHouseSelectMenu::Draw(ERC *prc) {
  Draw__13EUIScrollMenuP3ERC(&this->field0_0x0,prc);
  return;
}

void EHouseSelectMenu::Update() {
  *(undefined4 *)&this->m_Destruct = 0;
  Update__13EUIScrollMenu(&this->field0_0x0);
  if (*(int *)&this->m_Destruct == 1) {
    Reset__16EHouseSelectMenu(this);
  }
  return;
}

void EHouseSelectMenu::Message(EUIObjectNode *p, u32 MessId) {
  bool bVar1;
  
  if (MessId == 1) {
    bVar1 = HandleHouseSelectMenu__17ENeighborhoodModei
                      (this->m_pNeighborhoodMode,(int)p[2].m_WDH.field0_0x0.d[2]);
    *(int *)&this->m_Destruct = (int)bVar1;
  }
  return;
}

ENeighborhoodMode* ENeighborhoodMode::ENeighborhoodMode() {
	EGameState *this;
	EGameStateId *this;
	EVec3 vPos;
	EVec3 vPos;
	EVec3 vPos;
	EVec3 vPos;
	int i;
	
  undefined *puVar1;
  EUITextIconDef *pEVar2;
  EFontAlignY *pEVar3;
  uint *puVar4;
  EUIIconDef *pEVar5;
  int *piVar6;
  EUIVirtualCtrl **ppEVar7;
  EUITextIconDef *pEVar8;
  uint *puVar9;
  EUIIconDef *pEVar10;
  bool bVar11;
  uint uVar12;
  ulong *puVar13;
  undefined4 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 unaff_s0;
  EUIIcon *this_00;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  EUIStaticTextIcon *pEVar17;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  int iVar18;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  EUIIconDef local_460;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  EUITextIconDef local_400;
  EUIIconDef local_3e0;
  EUIIconDef__vtable *local_3c0;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 local_3a0;
  __vtbl_ptr_type *local_39c;
  uint local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 local_380;
  undefined4 uStack_37c;
  uint local_378;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  EUITextIconDef local_350;
  EUIIconDef local_330;
  EUIIconDef__vtable *local_310;
  EUIIconDef local_300;
  uint local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  EUITextIconDef local_2a0;
  EUIIconDef local_280;
  EUIIconDef__vtable *local_260;
  EUIIconDef local_250;
  uint local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  EVec3 vPos;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  EUITextIconDef local_1f0;
  EUIIconDef local_1d0;
  EUIIconDef__vtable *local_1b0;
  EUIIconDef local_1a0;
  int local_180;
  EUITextIconDef *local_17c;
  ERoofs **local_178;
  EUIIcon *local_174;
  EUIIconDef *local_170;
  EVec3 *local_16c;
  EUITextIconDef *local_168;
  EUIIcon *local_164;
  EPromptBar *local_160;
  EUIIconDef *local_15c;
  EUIStaticTextIcon *local_158;
  uint *local_154;
  EUIIconDef *local_150;
  EPromptBar *local_14c;
  EVec3 *local_148;
  EUIIcon *local_144;
  EUITextIconDef *local_140;
  EUIIcon *local_13c;
  undefined4 *local_138;
  EUIIconDef *local_134;
  EPromptBar *local_130;
  uint *local_12c;
  EUIIcon *local_128;
  EUIIconDef *local_124;
  EDialogMenu *local_120;
  E3DWindow *local_11c;
  EHouse__26_3190 **local_118;
  EPromptBar *local_114;
  EVec3 *local_110;
  EUIIcon *local_10c;
  EGameMenuMainPanel *local_108;
  uint *local_104;
  EUIStaticTextIcon *local_100;
  uint local_f0;
  int iStack_ec;
  int local_e0;
  undefined4 uStack_dc;
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
  
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
                    /* end of inlined section */
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_460.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_460.m_flags = 0;
                    /* end of inlined section */
  pEVar17 = (EUIStaticTextIcon *)this->m_PromptsDescLevel2;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_460.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_460.m_selColorIdx = 0;
  local_460.m_colorIdx = 1;
  (this->field0_0x0).m_state.m_id = 0;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EGameState__vtable *)_vt_17ENeighborhoodMode;
                    /* end of inlined section */
  local_460.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_XIcon,&local_460,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_460.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_460.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_460.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_460.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_460.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_460.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
  local_180 = 3;
  __7EUIIconG10EUIIconDefiii(&this->m_TriIcon,&local_460,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_460.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_460.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_460.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_460.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_460.m_colorIdx = 1;
                    /* end of inlined section */
                    /* end of inlined section */
  local_460.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_SquareIcon,&local_460,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_460.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_460.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_460.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_460.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_460.m_colorIdx = 1;
                    /* end of inlined section */
                    /* end of inlined section */
  local_460.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_CircleIcon,&local_460,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_460.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_460.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_460.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_460.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_460.m_colorIdx = 1;
                    /* end of inlined section */
                    /* end of inlined section */
  local_460.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_XIcon2,&local_460,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_460.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_460.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_460.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_460.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_460.m_colorIdx = 1;
                    /* end of inlined section */
                    /* end of inlined section */
  local_460.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_TriIcon2,&local_460,0,0,0x40);
  local_138 = &local_3b0;
  local_12c = &local_390;
  local_110 = (EVec3 *)&local_360;
  local_17c = &local_350;
  local_170 = &local_330;
  local_154 = &local_2e0;
  local_148 = (EVec3 *)&local_2b0;
  local_140 = &local_2a0;
  local_134 = &local_280;
  local_124 = &local_250;
  local_104 = &local_230;
  local_16c = (EVec3 *)&local_200;
  local_168 = &local_1f0;
  local_15c = &local_1d0;
  local_150 = &local_1a0;
  do {
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
    local_440 = 0x20;
                    /* end of inlined section */
    local_180 = local_180 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_460.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    local_460.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_460.m_flags = 0;
    local_460.m_selColorIdx = 0;
    local_460.m_colorIdx = 1;
    local_460.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_43c = 0;
    local_438 = 0;
    local_434 = 0x41400000;
    local_430 = 0;
    local_42c = 1;
    local_400.m_maxChars = 0x20;
    local_428 = CONCAT22(local_428._2_2_,0xffff);
    local_418 = 0;
    local_41c = 0;
    local_420 = 0;
    local_408 = 0;
    local_40c = 0;
    local_410 = 0;
    local_400.m_xAlign = E_FAX_LEFT;
    local_400.m_yAlign = E_FAY_TOP;
    local_400.m_pointsize = 12.0;
    local_400.m_selColorIdx = 0;
    local_400.m_colorIdx = 1;
    local_400.m_retChar = -1;
    local_3e0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_3e0.m_flags = 0;
    local_3e0.m_trigger = 0x40;
    local_3e0.m_selColorIdx = 0;
    local_3e0.m_colorIdx = 1;
    local_3e0.m_pCtrl = (EUIVirtualCtrl *)0x0;
    __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
              (pEVar17,&local_400,&local_3e0,-1,(EVec3 *)&local_410);
    puVar9 = local_12c;
    puVar14 = local_138;
    pEVar10 = local_170;
    pEVar8 = local_17c;
    local_3e0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    (pEVar17->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
    puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).m_textdef.m_xAlign + 3);
    uVar12 = (uint)puVar1 & 7;
    puVar13 = (ulong *)(puVar1 + -uVar12);
    *puVar13 = *puVar13 & -1L << (uVar12 + 1) * 8 |
               CONCAT44(local_43c,local_440) >> (7 - uVar12) * 8;
    pEVar2 = &(pEVar17->field0_0x0).m_textdef;
    uVar12 = (uint)pEVar2 & 7;
    puVar13 = (ulong *)((int)pEVar2 - uVar12);
    *puVar13 = CONCAT44(local_43c,local_440) << uVar12 * 8 |
               *puVar13 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
    puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).m_textdef.m_pointsize + 3);
    uVar12 = (uint)puVar1 & 7;
    puVar13 = (ulong *)(puVar1 + -uVar12);
    *puVar13 = *puVar13 & -1L << (uVar12 + 1) * 8 |
               CONCAT44(local_434,local_438) >> (7 - uVar12) * 8;
    pEVar3 = &(pEVar17->field0_0x0).m_textdef.m_yAlign;
    uVar12 = (uint)pEVar3 & 7;
    puVar13 = (ulong *)((int)pEVar3 - uVar12);
    *puVar13 = CONCAT44(local_434,local_438) << uVar12 * 8 |
               *puVar13 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
    puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).m_textdef.m_colorIdx + 3);
    uVar12 = (uint)puVar1 & 7;
    puVar13 = (ulong *)(puVar1 + -uVar12);
    *puVar13 = *puVar13 & -1L << (uVar12 + 1) * 8 |
               CONCAT44(local_42c,local_430) >> (7 - uVar12) * 8;
    puVar4 = &(pEVar17->field0_0x0).m_textdef.m_selColorIdx;
    uVar12 = (uint)puVar4 & 7;
    puVar13 = (ulong *)((int)puVar4 - uVar12);
    *puVar13 = CONCAT44(local_42c,local_430) << uVar12 * 8 |
               *puVar13 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
    *(undefined4 *)&(pEVar17->field0_0x0).m_textdef.m_retChar = local_428;
    local_3c0 = (pEVar17->field0_0x0).field0_0x0.m_def.__vtable;
    puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).field0_0x0.m_def.m_trigger + 3);
    uVar12 = (uint)puVar1 & 7;
    puVar13 = (ulong *)(puVar1 + -uVar12);
    *puVar13 = *puVar13 & -1L << (uVar12 + 1) * 8 |
               CONCAT44(local_460.m_trigger,local_460.m_flags) >> (7 - uVar12) * 8;
    pEVar5 = &(pEVar17->field0_0x0).field0_0x0.m_def;
    uVar12 = (uint)pEVar5 & 7;
    puVar13 = (ulong *)((int)pEVar5 - uVar12);
    *puVar13 = CONCAT44(local_460.m_trigger,local_460.m_flags) << uVar12 * 8 |
               *puVar13 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
    puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
    uVar12 = (uint)puVar1 & 7;
    puVar13 = (ulong *)(puVar1 + -uVar12);
    *puVar13 = *puVar13 & -1L << (uVar12 + 1) * 8 |
               CONCAT44(local_460.m_colorIdx,local_460.m_selColorIdx) >> (7 - uVar12) * 8;
    piVar6 = &(pEVar17->field0_0x0).field0_0x0.m_def.m_selColorIdx;
    uVar12 = (uint)piVar6 & 7;
    puVar13 = (ulong *)((int)piVar6 - uVar12);
    *puVar13 = CONCAT44(local_460.m_colorIdx,local_460.m_selColorIdx) << uVar12 * 8 |
               *puVar13 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
    puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).field0_0x0.m_def.__vtable + 3);
    uVar12 = (uint)puVar1 & 7;
    puVar13 = (ulong *)(puVar1 + -uVar12);
    *puVar13 = *puVar13 & -1L << (uVar12 + 1) * 8 |
               CONCAT44(local_460.__vtable,local_460.m_pCtrl) >> (7 - uVar12) * 8;
    ppEVar7 = &(pEVar17->field0_0x0).field0_0x0.m_def.m_pCtrl;
    uVar12 = (uint)ppEVar7 & 7;
    puVar13 = (ulong *)((int)ppEVar7 - uVar12);
    *puVar13 = CONCAT44(local_460.__vtable,local_460.m_pCtrl) << uVar12 * 8 |
               *puVar13 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
    (pEVar17->field0_0x0).field0_0x0.m_def.__vtable = local_3c0;
    pEVar17[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    pEVar17[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
         (ENodeListNode *)0x0;
    local_460.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
    pEVar17 = (EUIStaticTextIcon *)&pEVar17[1].field0_0x0.field0_0x0.field0_0x0.m_id;
  } while (local_180 != -1);
  local_114 = &this->m_PromptsBarDescLevel2;
  local_160 = &this->m_PromptsBarDescLevel1;
  local_144 = &this->m_XIcon3;
  local_10c = &this->m_TriIcon3;
  local_158 = (EUIStaticTextIcon *)this->m_GenericYesNoBox;
  local_14c = &this->m_GenericYesNoPrompt;
  local_128 = &this->m_XIcon4;
  local_164 = &this->m_TriIcon4;
  local_13c = &this->m_CircleIcon4;
  local_100 = (EUIStaticTextIcon *)this->m_FamilySelectPrompts;
  local_130 = &this->m_FamilySelectBar;
  local_174 = this->m_dpadIcons;
  local_11c = &this->m_TempWin;
  local_108 = &this->m_MainMenu;
  local_120 = &this->m_DialogMenu;
  local_118 = this->m_pHouseData;
  local_178 = this->m_pRoofs;
  pEVar17 = (EUIStaticTextIcon *)this->m_PromptsDescLevel1;
  lVar15 = 1;
  local_c0 = 0x40;
  uStack_bc = 0;
  local_d0 = 0x20;
  uStack_cc = 0;
  uVar16 = 0xffff;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  do {
    local_39c = _vt_10EUIIconDef;
                    /* end of inlined section */
    local_f0 = (int)lVar15 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_3b0 = 0;
    puVar14[1] = local_c0;
    local_3a8 = 0;
    puVar14[3] = 1;
    local_3a0 = 0;
    local_38c = 0;
    local_388 = 0;
    puVar9[3] = 0x41400000;
    local_380 = 0;
    puVar9[5] = 1;
    local_350.m_retChar = (short)uVar16;
    local_378 = local_378 & 0xffff0000 | (uint)(ushort)local_350.m_retChar;
    local_368 = 0;
    local_36c = 0;
    local_370 = 0;
    local_358 = 0;
    local_35c = 0;
    local_360 = 0;
    local_350.m_xAlign = E_FAX_LEFT;
    local_350.m_yAlign = E_FAY_TOP;
    pEVar8->m_pointsize = 12.0;
    local_350.m_selColorIdx = 0;
    pEVar8->m_colorIdx = 1;
    local_330.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_330.m_flags = 0;
    pEVar10->m_trigger = local_c0;
    local_330.m_selColorIdx = 0;
    pEVar10->m_colorIdx = 1;
    local_330.m_pCtrl = (EUIVirtualCtrl *)0x0;
    iStack_ec = (int)local_f0 >> 0x1f;
    local_e0 = (int)uVar16;
    uStack_dc = (undefined4)((ulong)uVar16 >> 0x20);
    local_390 = local_d0;
    local_350.m_maxChars = local_d0;
    __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
              (pEVar17,pEVar8,pEVar10,-1,local_110);
    local_330.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    (pEVar17->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
    puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).m_textdef.m_xAlign + 3);
    uVar12 = (uint)puVar1 & 7;
    puVar13 = (ulong *)(puVar1 + -uVar12);
    *puVar13 = *puVar13 & -1L << (uVar12 + 1) * 8 |
               CONCAT44(local_38c,local_390) >> (7 - uVar12) * 8;
    pEVar2 = &(pEVar17->field0_0x0).m_textdef;
    uVar12 = (uint)pEVar2 & 7;
    puVar13 = (ulong *)((int)pEVar2 - uVar12);
    *puVar13 = CONCAT44(local_38c,local_390) << uVar12 * 8 |
               *puVar13 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
    puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).m_textdef.m_pointsize + 3);
    uVar12 = (uint)puVar1 & 7;
    puVar13 = (ulong *)(puVar1 + -uVar12);
    *puVar13 = *puVar13 & -1L << (uVar12 + 1) * 8 |
               CONCAT44(uStack_384,local_388) >> (7 - uVar12) * 8;
    pEVar3 = &(pEVar17->field0_0x0).m_textdef.m_yAlign;
    uVar12 = (uint)pEVar3 & 7;
    puVar13 = (ulong *)((int)pEVar3 - uVar12);
    *puVar13 = CONCAT44(uStack_384,local_388) << uVar12 * 8 |
               *puVar13 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
    puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).m_textdef.m_colorIdx + 3);
    uVar12 = (uint)puVar1 & 7;
    puVar13 = (ulong *)(puVar1 + -uVar12);
    *puVar13 = *puVar13 & -1L << (uVar12 + 1) * 8 |
               CONCAT44(uStack_37c,local_380) >> (7 - uVar12) * 8;
    puVar4 = &(pEVar17->field0_0x0).m_textdef.m_selColorIdx;
    uVar12 = (uint)puVar4 & 7;
    puVar13 = (ulong *)((int)puVar4 - uVar12);
    *puVar13 = CONCAT44(uStack_37c,local_380) << uVar12 * 8 |
               *puVar13 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
    *(uint *)&(pEVar17->field0_0x0).m_textdef.m_retChar = local_378;
    local_310 = (pEVar17->field0_0x0).field0_0x0.m_def.__vtable;
    puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).field0_0x0.m_def.m_trigger + 3);
    uVar12 = (uint)puVar1 & 7;
    puVar13 = (ulong *)(puVar1 + -uVar12);
    *puVar13 = *puVar13 & -1L << (uVar12 + 1) * 8 |
               CONCAT44(uStack_3ac,local_3b0) >> (7 - uVar12) * 8;
    pEVar5 = &(pEVar17->field0_0x0).field0_0x0.m_def;
    uVar12 = (uint)pEVar5 & 7;
    puVar13 = (ulong *)((int)pEVar5 - uVar12);
    *puVar13 = CONCAT44(uStack_3ac,local_3b0) << uVar12 * 8 |
               *puVar13 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
    puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
    uVar12 = (uint)puVar1 & 7;
    puVar13 = (ulong *)(puVar1 + -uVar12);
    *puVar13 = *puVar13 & -1L << (uVar12 + 1) * 8 |
               CONCAT44(uStack_3a4,local_3a8) >> (7 - uVar12) * 8;
    piVar6 = &(pEVar17->field0_0x0).field0_0x0.m_def.m_selColorIdx;
    uVar12 = (uint)piVar6 & 7;
    puVar13 = (ulong *)((int)piVar6 - uVar12);
    *puVar13 = CONCAT44(uStack_3a4,local_3a8) << uVar12 * 8 |
               *puVar13 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
    puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).field0_0x0.m_def.__vtable + 3);
    uVar12 = (uint)puVar1 & 7;
    puVar13 = (ulong *)(puVar1 + -uVar12);
    *puVar13 = *puVar13 & -1L << (uVar12 + 1) * 8 |
               CONCAT44(local_39c,local_3a0) >> (7 - uVar12) * 8;
    ppEVar7 = &(pEVar17->field0_0x0).field0_0x0.m_def.m_pCtrl;
    uVar12 = (uint)ppEVar7 & 7;
    puVar13 = (ulong *)((int)ppEVar7 - uVar12);
    *puVar13 = CONCAT44(local_39c,local_3a0) << uVar12 * 8 |
               *puVar13 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
    (pEVar17->field0_0x0).field0_0x0.m_def.__vtable = local_310;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    pEVar17[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
         (ENodeListNode *)0x0;
    pEVar17[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
    pEVar17 = (EUIStaticTextIcon *)&pEVar17[1].field0_0x0.field0_0x0.field0_0x0.m_id;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_39c = _vt_10EUIIconDef;
                    /* end of inlined section */
    lVar15 = CONCAT44(iStack_ec,local_f0);
    uVar16 = CONCAT44(uStack_dc,local_e0);
  } while (lVar15 != -1);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  __10EPromptBar(local_114);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  __10EPromptBar(local_160);
  pEVar17 = local_158;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_300.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_300.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_300.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_300.m_selColorIdx = 0;
  local_300.m_colorIdx = 1;
  local_300.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
  __7EUIIconG10EUIIconDefiii(local_144,&local_300,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_300.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_300.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_300.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_300.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_300.m_colorIdx = 1;
  local_300.m_pCtrl = (EUIVirtualCtrl *)0x0;
  iVar18 = 1;
                    /* end of inlined section */
  __7EUIIconG10EUIIconDefiii(local_10c,&local_300,0,0,0x40);
  pEVar5 = local_134;
  pEVar2 = local_140;
  puVar4 = local_154;
  local_e0 = 0x40;
  uStack_dc = 0;
  local_f0 = 0x20;
  iStack_ec = 0;
  do {
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_300.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_300.m_flags = 0;
    local_300.m_selColorIdx = 0;
                    /* end of inlined section */
    iVar18 = iVar18 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_300.m_colorIdx = 1;
    local_300.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_2dc = 0;
    local_2d8 = 0;
    puVar4[3] = 0x41400000;
    local_2d0 = 0;
    puVar4[5] = 1;
    local_2c8 = CONCAT22(local_2c8._2_2_,0xffff);
    local_2b8 = 0;
    local_2bc = 0;
    local_2c0 = 0;
    local_2a8 = 0;
    local_2ac = 0;
    local_2b0 = 0;
    local_2a0.m_xAlign = E_FAX_LEFT;
    local_2a0.m_yAlign = E_FAY_TOP;
    pEVar2->m_pointsize = 12.0;
    local_2a0.m_selColorIdx = 0;
    pEVar2->m_colorIdx = 1;
    local_2a0.m_retChar = -1;
    local_280.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_280.m_flags = 0;
    pEVar5->m_trigger = local_e0;
    local_280.m_selColorIdx = 0;
    pEVar5->m_colorIdx = 1;
    local_280.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_300.m_trigger = local_e0;
    local_2e0 = local_f0;
    local_2a0.m_maxChars = local_f0;
    __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
              (pEVar17,pEVar2,pEVar5,-1,local_148);
    local_280.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    (pEVar17->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
    puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).m_textdef.m_xAlign + 3);
    uVar12 = (uint)puVar1 & 7;
    puVar13 = (ulong *)(puVar1 + -uVar12);
    *puVar13 = *puVar13 & -1L << (uVar12 + 1) * 8 |
               CONCAT44(local_2dc,local_2e0) >> (7 - uVar12) * 8;
    pEVar8 = &(pEVar17->field0_0x0).m_textdef;
    uVar12 = (uint)pEVar8 & 7;
    puVar13 = (ulong *)((int)pEVar8 - uVar12);
    *puVar13 = CONCAT44(local_2dc,local_2e0) << uVar12 * 8 |
               *puVar13 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
    puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).m_textdef.m_pointsize + 3);
    uVar12 = (uint)puVar1 & 7;
    puVar13 = (ulong *)(puVar1 + -uVar12);
    *puVar13 = *puVar13 & -1L << (uVar12 + 1) * 8 |
               CONCAT44(uStack_2d4,local_2d8) >> (7 - uVar12) * 8;
    pEVar3 = &(pEVar17->field0_0x0).m_textdef.m_yAlign;
    uVar12 = (uint)pEVar3 & 7;
    puVar13 = (ulong *)((int)pEVar3 - uVar12);
    *puVar13 = CONCAT44(uStack_2d4,local_2d8) << uVar12 * 8 |
               *puVar13 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
    puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).m_textdef.m_colorIdx + 3);
    uVar12 = (uint)puVar1 & 7;
    puVar13 = (ulong *)(puVar1 + -uVar12);
    *puVar13 = *puVar13 & -1L << (uVar12 + 1) * 8 |
               CONCAT44(uStack_2cc,local_2d0) >> (7 - uVar12) * 8;
    puVar9 = &(pEVar17->field0_0x0).m_textdef.m_selColorIdx;
    uVar12 = (uint)puVar9 & 7;
    puVar13 = (ulong *)((int)puVar9 - uVar12);
    *puVar13 = CONCAT44(uStack_2cc,local_2d0) << uVar12 * 8 |
               *puVar13 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
    *(undefined4 *)&(pEVar17->field0_0x0).m_textdef.m_retChar = local_2c8;
    local_260 = (pEVar17->field0_0x0).field0_0x0.m_def.__vtable;
    puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).field0_0x0.m_def.m_trigger + 3);
    uVar12 = (uint)puVar1 & 7;
    puVar13 = (ulong *)(puVar1 + -uVar12);
    *puVar13 = *puVar13 & -1L << (uVar12 + 1) * 8 |
               CONCAT44(local_300.m_trigger,local_300.m_flags) >> (7 - uVar12) * 8;
    pEVar10 = &(pEVar17->field0_0x0).field0_0x0.m_def;
    uVar12 = (uint)pEVar10 & 7;
    puVar13 = (ulong *)((int)pEVar10 - uVar12);
    *puVar13 = CONCAT44(local_300.m_trigger,local_300.m_flags) << uVar12 * 8 |
               *puVar13 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
    puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
    uVar12 = (uint)puVar1 & 7;
    puVar13 = (ulong *)(puVar1 + -uVar12);
    *puVar13 = *puVar13 & -1L << (uVar12 + 1) * 8 |
               CONCAT44(local_300.m_colorIdx,local_300.m_selColorIdx) >> (7 - uVar12) * 8;
    piVar6 = &(pEVar17->field0_0x0).field0_0x0.m_def.m_selColorIdx;
    uVar12 = (uint)piVar6 & 7;
    puVar13 = (ulong *)((int)piVar6 - uVar12);
    *puVar13 = CONCAT44(local_300.m_colorIdx,local_300.m_selColorIdx) << uVar12 * 8 |
               *puVar13 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
    puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).field0_0x0.m_def.__vtable + 3);
    uVar12 = (uint)puVar1 & 7;
    puVar13 = (ulong *)(puVar1 + -uVar12);
    *puVar13 = *puVar13 & -1L << (uVar12 + 1) * 8 |
               CONCAT44(local_300.__vtable,local_300.m_pCtrl) >> (7 - uVar12) * 8;
    ppEVar7 = &(pEVar17->field0_0x0).field0_0x0.m_def.m_pCtrl;
    uVar12 = (uint)ppEVar7 & 7;
    puVar13 = (ulong *)((int)ppEVar7 - uVar12);
    *puVar13 = CONCAT44(local_300.__vtable,local_300.m_pCtrl) << uVar12 * 8 |
               *puVar13 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
    (pEVar17->field0_0x0).field0_0x0.m_def.__vtable = local_260;
    pEVar17[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    pEVar17[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
    pEVar17 = (EUIStaticTextIcon *)&pEVar17[1].field0_0x0.field0_0x0.field0_0x0.m_id;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_300.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
  } while (iVar18 != -1);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  __10EPromptBar(local_14c);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_250.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_250.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_124->m_trigger = 0x40;
                    /* end of inlined section */
  iVar18 = 2;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_250.m_selColorIdx = 0;
  local_124->m_colorIdx = 1;
                    /* end of inlined section */
  local_250.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(local_128,local_124,0,0,0x40);
  pEVar17 = local_100;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_250.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_250.m_flags = 0;
  local_124->m_trigger = 0x40;
  local_250.m_selColorIdx = 0;
  local_124->m_colorIdx = 1;
                    /* end of inlined section */
  local_250.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(local_164,local_124,0,0,0x40);
  puVar4 = local_104;
  pEVar2 = local_168;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_250.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_250.m_flags = 0;
  local_124->m_trigger = 0x40;
  local_250.m_selColorIdx = 0;
  local_124->m_colorIdx = 1;
  local_250.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
  __7EUIIconG10EUIIconDefiii(local_13c,local_124,0,0,0x40);
  pEVar5 = local_15c;
  local_e0 = 0x40;
  uStack_dc = 0;
  local_f0 = 0x20;
  iStack_ec = 0;
  do {
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_250.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_250.m_flags = 0;
    local_250.m_selColorIdx = 0;
                    /* end of inlined section */
    iVar18 = iVar18 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_250.m_colorIdx = 1;
    local_250.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_22c = 0;
    local_228 = 0;
    puVar4[3] = 0x41400000;
    local_220 = 0;
    puVar4[5] = 1;
    local_218 = CONCAT22(local_218._2_2_,0xffff);
    vPos.field0_0x0.d[2] = 0.0;
    vPos.field0_0x0.d[1] = 0.0;
    vPos.field0_0x0.d[0] = 0.0;
    local_1f8 = 0;
    local_1fc = 0;
    local_200 = 0;
    local_1f0.m_xAlign = E_FAX_LEFT;
    local_1f0.m_yAlign = E_FAY_TOP;
    pEVar2->m_pointsize = 12.0;
    local_1f0.m_selColorIdx = 0;
    pEVar2->m_colorIdx = 1;
    local_1f0.m_retChar = -1;
    local_1d0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_1d0.m_flags = 0;
    pEVar5->m_trigger = local_e0;
    local_1d0.m_selColorIdx = 0;
    pEVar5->m_colorIdx = 1;
    local_1d0.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_250.m_trigger = local_e0;
    local_230 = local_f0;
    local_1f0.m_maxChars = local_f0;
    __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
              (pEVar17,pEVar2,pEVar5,-1,local_16c);
    this_00 = local_174;
    local_1d0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    (pEVar17->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
    puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).m_textdef.m_xAlign + 3);
    uVar12 = (uint)puVar1 & 7;
    puVar13 = (ulong *)(puVar1 + -uVar12);
    *puVar13 = *puVar13 & -1L << (uVar12 + 1) * 8 |
               CONCAT44(local_22c,local_230) >> (7 - uVar12) * 8;
    pEVar8 = &(pEVar17->field0_0x0).m_textdef;
    uVar12 = (uint)pEVar8 & 7;
    puVar13 = (ulong *)((int)pEVar8 - uVar12);
    *puVar13 = CONCAT44(local_22c,local_230) << uVar12 * 8 |
               *puVar13 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
    puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).m_textdef.m_pointsize + 3);
    uVar12 = (uint)puVar1 & 7;
    puVar13 = (ulong *)(puVar1 + -uVar12);
    *puVar13 = *puVar13 & -1L << (uVar12 + 1) * 8 |
               CONCAT44(uStack_224,local_228) >> (7 - uVar12) * 8;
    pEVar3 = &(pEVar17->field0_0x0).m_textdef.m_yAlign;
    uVar12 = (uint)pEVar3 & 7;
    puVar13 = (ulong *)((int)pEVar3 - uVar12);
    *puVar13 = CONCAT44(uStack_224,local_228) << uVar12 * 8 |
               *puVar13 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
    puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).m_textdef.m_colorIdx + 3);
    uVar12 = (uint)puVar1 & 7;
    puVar13 = (ulong *)(puVar1 + -uVar12);
    *puVar13 = *puVar13 & -1L << (uVar12 + 1) * 8 |
               CONCAT44(uStack_21c,local_220) >> (7 - uVar12) * 8;
    puVar9 = &(pEVar17->field0_0x0).m_textdef.m_selColorIdx;
    uVar12 = (uint)puVar9 & 7;
    puVar13 = (ulong *)((int)puVar9 - uVar12);
    *puVar13 = CONCAT44(uStack_21c,local_220) << uVar12 * 8 |
               *puVar13 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
    *(undefined4 *)&(pEVar17->field0_0x0).m_textdef.m_retChar = local_218;
    local_1b0 = (pEVar17->field0_0x0).field0_0x0.m_def.__vtable;
    puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).field0_0x0.m_def.m_trigger + 3);
    uVar12 = (uint)puVar1 & 7;
    puVar13 = (ulong *)(puVar1 + -uVar12);
    *puVar13 = *puVar13 & -1L << (uVar12 + 1) * 8 |
               CONCAT44(local_250.m_trigger,local_250.m_flags) >> (7 - uVar12) * 8;
    pEVar10 = &(pEVar17->field0_0x0).field0_0x0.m_def;
    uVar12 = (uint)pEVar10 & 7;
    puVar13 = (ulong *)((int)pEVar10 - uVar12);
    *puVar13 = CONCAT44(local_250.m_trigger,local_250.m_flags) << uVar12 * 8 |
               *puVar13 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
    puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
    uVar12 = (uint)puVar1 & 7;
    puVar13 = (ulong *)(puVar1 + -uVar12);
    *puVar13 = *puVar13 & -1L << (uVar12 + 1) * 8 |
               CONCAT44(local_250.m_colorIdx,local_250.m_selColorIdx) >> (7 - uVar12) * 8;
    piVar6 = &(pEVar17->field0_0x0).field0_0x0.m_def.m_selColorIdx;
    uVar12 = (uint)piVar6 & 7;
    puVar13 = (ulong *)((int)piVar6 - uVar12);
    *puVar13 = CONCAT44(local_250.m_colorIdx,local_250.m_selColorIdx) << uVar12 * 8 |
               *puVar13 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
    puVar1 = (undefined *)((int)&(pEVar17->field0_0x0).field0_0x0.m_def.__vtable + 3);
    uVar12 = (uint)puVar1 & 7;
    puVar13 = (ulong *)(puVar1 + -uVar12);
    *puVar13 = *puVar13 & -1L << (uVar12 + 1) * 8 |
               CONCAT44(local_250.__vtable,local_250.m_pCtrl) >> (7 - uVar12) * 8;
    ppEVar7 = &(pEVar17->field0_0x0).field0_0x0.m_def.m_pCtrl;
    uVar12 = (uint)ppEVar7 & 7;
    puVar13 = (ulong *)((int)ppEVar7 - uVar12);
    *puVar13 = CONCAT44(local_250.__vtable,local_250.m_pCtrl) << uVar12 * 8 |
               *puVar13 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
    (pEVar17->field0_0x0).field0_0x0.m_def.__vtable = local_1b0;
    pEVar17[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    pEVar17[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
    pEVar17 = (EUIStaticTextIcon *)&pEVar17[1].field0_0x0.field0_0x0.field0_0x0.m_id;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_250.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
  } while (iVar18 != -1);
  iVar18 = 3;
  __10EPromptBar(local_130);
  pEVar5 = local_150;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  do {
    local_1a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_1a0.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    pEVar5->m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_1a0.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    pEVar5->m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_1a0.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
    __7EUIIconG10EUIIconDefiii(this_00,pEVar5,0,0,0x40);
    iVar18 = iVar18 + -1;
    this_00 = this_00 + 1;
  } while (iVar18 != -1);
                    /* end of inlined section */
                    /* end of inlined section */
  iVar18 = 6;
  do {
    bVar11 = iVar18 != -1;
    iVar18 = iVar18 + -1;
  } while (bVar11);
  __9E3DWindow(local_11c);
  __18EGameMenuMainPanel(local_108);
  __11EDialogMenu(local_120);
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
  (this->field0_0x0).m_state.m_id = 2;
  iVar18 = 7;
  _curopt = -1;
  this->m_HouseCoords[1].field0_0x0.d[0] = -16.0;
  this->m_HouseCoords[2].field0_0x0.d[0] = -162.0;
  this->m_HouseCoords[2].field0_0x0.d[1] = 19.0;
  this->m_HouseCoords[3].field0_0x0.d[0] = -101.0;
  this->m_HouseCoords[4].field0_0x0.d[0] = 27.0;
  this->m_HouseCoords[5].field0_0x0.d[0] = -38.0;
  this->m_HouseCoords[6].field0_0x0.d[0] = -141.0;
  this->m_HouseCoords[6].field0_0x0.d[1] = 102.0;
  this->m_HouseCoords[7].field0_0x0.d[0] = -94.0;
  this->m_HouseCoords[0].field0_0x0.d[0] = 48.0;
  this->m_HouseCoords[1].field0_0x0.d[1] = -10.0;
  this->m_HouseCoords[7].field0_0x0.d[1] = 153.0;
  this->m_HouseNextToMoveTo[0] = 4;
  this->m_HouseNextToMoveTo[3] = 6;
  this->m_HouseNextToMoveTo[4] = 5;
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
  this->m_pWin = (EPortalWindow *)0x0;
  this->m_HouseCoords[0].field0_0x0.d[1] = -10.0;
  this->m_HouseCoords[3].field0_0x0.d[1] = 90.0;
  this->m_HouseCoords[4].field0_0x0.d[1] = 90.0;
  this->m_HouseCoords[5].field0_0x0.d[1] = 153.0;
  this->m_HousePrevToMoveTo[0] = 1;
  this->m_HousePrevToMoveTo[1] = 2;
  this->m_HousePrevToMoveTo[2] = 6;
  this->m_HousePrevToMoveTo[3] = 7;
  this->m_HousePrevToMoveTo[4] = 0;
  this->m_HousePrevToMoveTo[5] = 4;
  this->m_HousePrevToMoveTo[6] = 3;
  this->m_HousePrevToMoveTo[7] = 5;
  this->m_HouseNextToMoveTo[1] = 0;
  this->m_HouseNextToMoveTo[2] = 1;
  this->m_HouseNextToMoveTo[5] = 7;
  this->m_HouseNextToMoveTo[6] = 2;
  this->m_HouseNextToMoveTo[7] = 3;
  this->m_HouseViewDir[0] = 145.0;
  this->m_HouseViewDir[1] = 90.0;
  this->m_HouseViewDir[2] = 35.0;
  this->m_HouseViewDir[4] = 225.0;
  this->m_HouseViewDir[5] = 245.0;
  this->m_HouseViewDir[6] = 340.0;
  this->m_HouseViewDir[7] = 325.0;
  *(undefined4 *)&this->field_0x11c0 = 1;
  this->m_CameraAngle = 1.264;
  (this->m_vPos).field0_0x0.d[0] = -35.0;
  (this->m_vPos).field0_0x0.d[1] = 75.0;
  this->m_HouseViewDir[3] = 325.0;
  *(undefined4 *)this->m_bHouseLockedOut = 0;
  *(undefined4 *)(this->m_bHouseLockedOut + 4) = 0;
  *(undefined4 *)&this->field_0x11ac = 0;
  *(undefined4 *)&this->field_0x11b0 = 1;
  *(undefined4 *)&this->field_0x11b4 = 0;
  *(undefined4 *)&this->field_0x11b8 = 0;
  *(undefined4 *)&this->field_0x11bc = 0;
  do {
    *local_118 = (EHouse__26_3190 *)0x0;
    iVar18 = iVar18 + -1;
    *local_178 = (ERoofs *)0x0;
    local_118 = local_118 + 1;
    local_178 = local_178 + 1;
  } while (-1 < iVar18);
  this->m_Alpha = 0.0;
  this->m_pHouseSelectMenu = (EHouseSelectMenu *)0x0;
  this->m_pSelectFamilyMenu = (EFamilySelect *)0x0;
  this->m_pHouseImportMenu = (EHouseImportMenuMgr *)0x0;
  this->m_pFamilyMemberMenu = (EFamilyMemberMenuMgr *)0x0;
  this->m_pImportNeighborhood = (NeighborhoodImpl *)0x0;
  this->m_pCharedMode = (ECharedMode *)0x0;
  this->m_pDataset = (ERDataset *)0x0;
  this->m_pParticleEmitter[0] = (EIParticleEmit *)0x0;
  this->m_pParticleEmitter[1] = (EIParticleEmit *)0x0;
  this->m_pParticleType = (ERParticleType *)0x0;
  this->m_pCarsModel = (ERModel *)0x0;
  this->m_pDeleteFamily = (FamilyImpl *)0x0;
  this->m_pChallengeModeIntroShdr = (ERShader *)0x0;
  return this;
}

void ENeighborhoodMode::~ENeighborhoodMode(int __in_chrg) {
	EGameState *this;
	EGameStateId *this;
	void *pAddress;
	void *ptr;
	void *ptr;
	
  bool bVar1;
  NghResFile__0_845 *pNVar2;
  iResFile__0_3211__vtable *piVar3;
  EUIObjectNode__vtable *pEVar4;
  EPromptBar *this_00;
  EUIIcon *pEVar5;
  EUIPrompt *pEVar6;
  
  (this->field0_0x0).__vtable = (EGameState__vtable *)_vt_17ENeighborhoodMode;
  pNVar2 = this->m_pImportResFile;
  if (pNVar2 != (NghResFile__0_845 *)0x0) {
    piVar3 = (pNVar2->field0_0x0).__vtable;
    (*(code *)piVar3->Create)
              ((int)pNVar2->m_ppHouseWriteInfo + *(short *)&piVar3->_dyncastimpl + -0x18,3);
    this->m_pImportResFile = (NghResFile__0_845 *)0x0;
  }
  if (this->m_pCharedMode != (ECharedMode *)0x0) {
    Reset__11ECharedModei(this->m_pCharedMode,2);
    if (this->m_pCharedMode == (ECharedMode *)0x0) {
      this->m_pCharedMode = (ECharedMode *)0x0;
    }
    else {
      ___11ECharedMode(this->m_pCharedMode,3);
      this->m_pCharedMode = (ECharedMode *)0x0;
    }
  }
  _curopt = -1;
  this->m_pDeleteFamily = (FamilyImpl *)0x0;
  ___11EDialogMenu(&this->m_DialogMenu,2);
  ___18EGameMenuMainPanel(&this->m_MainMenu,2);
  ___7EWindow(&(this->m_TempWin).field0_0x0,0);
  this_00 = &this->m_PromptsBarDescLevel2;
  if ((this != (ENeighborhoodMode *)0xfffff128) && (this->m_dpadIcons != (EUIIcon *)&this->m_pFont))
  {
    for (pEVar5 = this->m_dpadIcons + 3; pEVar4 = (pEVar5->field0_0x0).__vtable,
        (*(code *)pEVar4->Draw)
                  ((int)pEVar5->m_maxBackShdrSize[-0xc] + *(short *)&pEVar4->Update + 4,0),
        this->m_dpadIcons != pEVar5; pEVar5 = pEVar5 + -1) {
    }
  }
  ___10EPromptBar(&this->m_FamilySelectBar,2);
  if ((this != (ENeighborhoodMode *)0xfffff398) &&
     (this->m_FamilySelectPrompts != (EUIPrompt *)&this->m_FamilySelectBar)) {
    for (pEVar6 = this->m_FamilySelectPrompts + 2;
        pEVar4 = (pEVar6->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable,
        (*(code *)pEVar4->Draw)
                  ((int)(pEVar6->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                   *(short *)&pEVar4->Update + 4,0), this->m_FamilySelectPrompts != pEVar6;
        pEVar6 = pEVar6 + -1) {
    }
  }
  ___7EUIIcon(&this->m_CircleIcon4,2);
  ___7EUIIcon(&this->m_TriIcon4,2);
  ___7EUIIcon(&this->m_XIcon4,2);
  ___10EPromptBar(&this->m_GenericYesNoPrompt,2);
  if ((this != (ENeighborhoodMode *)0xfffff6b4) &&
     (this->m_GenericYesNoBox != (EUIPrompt *)&this->m_GenericYesNoPrompt)) {
    for (pEVar6 = this->m_GenericYesNoBox + 1;
        pEVar4 = (pEVar6->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable,
        (*(code *)pEVar4->Draw)
                  ((int)(pEVar6->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                   *(short *)&pEVar4->Update + 4,0), this->m_GenericYesNoBox != pEVar6;
        pEVar6 = (EUIPrompt *)((int)(pEVar6 + -2) + 0xb0)) {
    }
  }
  ___7EUIIcon(&this->m_TriIcon3,2);
  ___7EUIIcon(&this->m_XIcon3,2);
  ___10EPromptBar(&this->m_PromptsBarDescLevel1,2);
  ___10EPromptBar(this_00,2);
  if (this != (ENeighborhoodMode *)0xfffff9bc) {
    while (this->m_PromptsDescLevel1 != (EUIPrompt *)this_00) {
      (**(code **)(*(int *)((int)(this_00 + -2) + 0x48) + 0xc))
                ((int)&(((EPromptBar *)((int)(this_00 + -2) + 0x10))->field0_0x0).m_ChildList.
                       field0_0x0.m_l.m_pHead +
                 (int)*(short *)(*(int *)((int)(this_00 + -2) + 0x48) + 8),0);
      this_00 = (EPromptBar *)((int)(this_00 + -2) + 0x10);
    }
  }
                    /* end of inlined section */
  if ((this != (ENeighborhoodMode *)0xfffffc7c) &&
     (this->m_PromptsDescLevel2 != this->m_PromptsDescLevel1)) {
    pEVar6 = this->m_PromptsDescLevel2 + 3;
    do {
      pEVar4 = (pEVar6->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar4->Draw)
                ((int)(pEVar6->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                 *(short *)&pEVar4->Update + 4,0);
      bVar1 = this->m_PromptsDescLevel2 != pEVar6;
      pEVar6 = pEVar6 + -1;
    } while (bVar1);
  }
  ___7EUIIcon(&this->m_TriIcon2,2);
  ___7EUIIcon(&this->m_XIcon2,2);
  ___7EUIIcon(&this->m_CircleIcon,2);
  ___7EUIIcon(&this->m_SquareIcon,2);
  ___7EUIIcon(&this->m_TriIcon,2);
  ___7EUIIcon(&this->m_XIcon,2);
                    /* inlined from c:/eor/src2/games/sims/ESRC/gamestate.h */
  (this->field0_0x0).__vtable = (EGameState__vtable *)_vt_10EGameState;
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/gamestate.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void ENeighborhoodMode::Init(int FromState) {
	ERC *prc;
	EVec3 vNorm;
	int i;
	ERC *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	float scaler;
	
  undefined *puVar1;
  EUIIconDef *pEVar2;
  int *piVar3;
  EUIVirtualCtrl **ppEVar4;
  short sVar5;
  EGlobalManagerClient__vtable *pEVar6;
  EUIIconDef__vtable *pEVar7;
  EUIObjectNode__vtable *pEVar8;
  uint uVar9;
  ulong *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  EUIStaticTextIcon *pEVar13;
  undefined8 *puVar14;
  ERDataset *pEVar15;
  EPortalWindow *pEVar16;
  EDL *pEVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ERShader *pEVar20;
  ERFont *pEVar21;
  short *psVar22;
  ECharedMode *pEVar23;
  ERModel *pEVar24;
  EAnimController *pEVar25;
  short **ppsVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  EUIIcon *this_00;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  EAllocGroup **ppEVar35;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar36;
  int iVar37;
  float fVar38;
  float fVar39;
  EVec3 vNorm;
  undefined4 local_190;
  float local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  __vtbl_ptr_type *local_17c;
  undefined4 local_178;
  EUIIconDef__vtable *local_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  uint uStack_164;
  undefined4 local_160;
  __vtbl_ptr_type *local_15c;
  EUIIconDef__vtable *local_150;
  EUIIcon *local_140;
  EGameMenuMainPanel *local_13c;
  EUIPrompt *local_138;
  EUIPrompt *local_134;
  EUIIconDef__vtable **local_130;
  EUIIcon *local_12c;
  short **local_128;
  EUIIcon *local_124;
  EUIPrompt *local_120;
  EUIPrompt *local_11c;
  EUIPrompt *local_118;
  EUIIcon *local_114;
  EUIIcon *local_110;
  EPromptBar *local_10c;
  EDialogMenu *local_108;
  EUIPrompt *local_104;
  EPromptBar *local_100;
  EUIPrompt *local_fc;
  EUIIcon *local_f8;
  EUIIcon *local_f4;
  EUIPrompt *local_f0;
  EPromptBar *local_ec;
  EUIPrompt *local_e8;
  EPromptBar *local_e4;
  EUIIcon *local_e0;
  EUIPrompt *local_dc;
  EUIPrompt *local_d8;
  EUIIcon *local_d4;
  EUIIcon *local_d0;
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
  
                    /* inlined from /eor/src2/engine/dataset/e_datasetman.h */
  local_60 = (undefined4)unaff_s6;
  uStack_5c = (undefined4)((ulong)unaff_s6 >> 0x20);
                    /* end of inlined section */
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/engine/dataset/e_datasetman.h */
  local_40 = (undefined4)unaff_s8;
  uStack_3c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_50 = (undefined4)unaff_s7;
  uStack_4c = (undefined4)((ulong)unaff_s7 >> 0x20);
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
  pEVar15 = (ERDataset *)
            GetRefAsync__16EResourceManagerUib(&_datasetman.field0_0x0,0x6bc3a0fe,false);
  this->m_pDataset = pEVar15;
  pEVar16 = (EPortalWindow *)_memmanAlloc__FUiUi(0x1760,0x10);
                    /* end of inlined section */
  pEVar16 = __13EPortalWindow(pEVar16);
  this->m_pWin = pEVar16;
  _curopt = -1;
  this->m_NeighborhoodSubmode = 0;
  this->m_DrawSubmode = 0;
  if (_globals.Cheats._0_4_ != 0) {
                    /* end of inlined section */
    SetGameMode__12cSoundPlayerQ23snd5eMode(_5Globs_pSound,kLoad);
  }
  pEVar6 = (_pGfx->field0_0x0).__vtable;
  uVar27 = (*(code *)pEVar6[6].EGlobalManagerClient)
                     ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar6 + 6),1);
  Rect__10EPrimitiveP3ERCff((ERC *)uVar27,1.0,1.0);
  pEVar6 = (_pGfx->field0_0x0).__vtable;
  pEVar17 = (EDL *)(*(code *)pEVar6[6].ManagedShutdown)
                             ((int)&(_pGfx->field0_0x0).__vtable +
                              (int)*(short *)&pEVar6[6].ManagedStartup,uVar27);
  this->m_pdl = pEVar17;
  pEVar6 = (_pGfx->field0_0x0).__vtable;
  uVar27 = (*(code *)pEVar6[6].EGlobalManagerClient)
                     ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar6 + 6),1);
  ppEVar35 = (EAllocGroup **)uVar27;
                    /* inlined from /eor/src2/engine/e_dl.h */
  puVar18 = (undefined8 *)Alloc__11EAllocGroupUii(*ppEVar35,0x140,0x10);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  *(undefined4 *)((int)puVar18 + 0x3c) = 0x80;
  *(undefined4 *)(puVar18 + 6) = 0x80;
  *(undefined4 *)((int)puVar18 + 0x34) = 0x80;
  *(undefined4 *)(puVar18 + 7) = 0x80;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vNorm.field0_0x0.d[2] = 4.5;
  vNorm.field0_0x0.d[1] = -1.0;
  vNorm.field0_0x0.d[0] = 1.0;
  fVar36 = sqrtf(22.25);
  if (fVar36 != 0.0) {
    fVar36 = 1.0 / fVar36;
    vNorm.field0_0x0.d[0] = fVar36 * 1.0;
    vNorm.field0_0x0.d[2] = fVar36 * 4.5;
    vNorm.field0_0x0.d[1] = fVar36 * -1.0;
  }
  fVar38 = vNorm.field0_0x0.d[0] * 127.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar39 = vNorm.field0_0x0.d[1] * 127.0;
  fVar36 = vNorm.field0_0x0.d[2] * 127.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  if (-127.0 <= fVar38) {
                    /* end of inlined section */
    if (fVar38 <= 127.0) {
                    /* end of inlined section */
      iVar37 = (int)(char)(int)fVar38;
    }
    else {
      iVar37 = 0x7f;
    }
  }
  else {
    iVar37 = -0x7f;
  }
  *(int *)(puVar18 + 2) = iVar37;
  if (-127.0 <= fVar39) {
                    /* end of inlined section */
    if (fVar39 <= 127.0) {
                    /* end of inlined section */
      iVar37 = (int)(char)(int)fVar39;
    }
    else {
      iVar37 = 0x7f;
    }
  }
  else {
    iVar37 = -0x7f;
  }
  *(int *)((int)puVar18 + 0x14) = iVar37;
  iVar37 = -0x7f;
                    /* end of inlined section */
  if ((-127.0 <= fVar36) && (iVar37 = 0x7f, fVar36 <= 127.0)) {
                    /* end of inlined section */
    iVar37 = (int)(char)(int)fVar36;
  }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  *(int *)(puVar18 + 3) = iVar37;
  local_130 = &local_170;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_f4 = &this->m_XIcon;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  local_d0 = &this->m_SquareIcon;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(undefined4 *)(puVar18 + 4) = 0x3f800000;
                    /* end of inlined section */
  puVar30 = puVar18 + 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(undefined4 *)((int)puVar18 + 0x24) = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_180 = 0x3d4ccccd;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_178 = 0x40600000;
                    /* end of inlined section */
  this_00 = &this->m_TriIcon;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_17c = (__vtbl_ptr_type *)0x3d4ccccd;
                    /* end of inlined section */
  local_110 = &this->m_XIcon2;
  local_124 = &this->m_CircleIcon;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  local_f8 = &this->m_TriIcon2;
  local_f0 = this->m_PromptsDescLevel2 + 3;
  local_e8 = this->m_PromptsDescLevel2;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(undefined4 *)puVar18 = 0x3d4ccccd;
                    /* end of inlined section */
  local_118 = this->m_PromptsDescLevel2 + 2;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  local_138 = this->m_PromptsDescLevel2 + 1;
  local_d8 = this->m_PromptsDescLevel1;
  local_11c = this->m_PromptsDescLevel1 + 1;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(undefined4 *)((int)puVar18 + 4) = 0x3d4ccccd;
                    /* end of inlined section */
  local_100 = &this->m_PromptsBarDescLevel2;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  local_ec = &this->m_PromptsBarDescLevel1;
  local_e0 = &this->m_XIcon3;
  local_140 = &this->m_TriIcon3;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(undefined4 *)(puVar18 + 1) = 0x40600000;
                    /* end of inlined section */
  local_120 = this->m_GenericYesNoBox;
  local_104 = this->m_GenericYesNoBox + 1;
  local_e4 = &this->m_GenericYesNoPrompt;
  local_d4 = &this->m_XIcon4;
  local_12c = &this->m_TriIcon4;
  local_114 = &this->m_CircleIcon4;
  local_134 = this->m_FamilySelectPrompts + 2;
  local_fc = this->m_FamilySelectPrompts;
  local_dc = this->m_FamilySelectPrompts + 1;
  local_10c = &this->m_FamilySelectBar;
  local_13c = &this->m_MainMenu;
  local_108 = &this->m_DialogMenu;
  local_128 = this->m_ppOptionsTextList;
  puVar14 = puVar18 + 10;
  puVar19 = puVar18;
  do {
    puVar29 = puVar19;
    puVar28 = puVar14;
    uVar11 = *puVar29;
    uVar31 = *(undefined4 *)(puVar29 + 1);
    uVar32 = *(undefined4 *)((int)puVar29 + 0xc);
    uVar12 = puVar29[2];
    uVar33 = *(undefined4 *)(puVar29 + 3);
    uVar34 = *(undefined4 *)((int)puVar29 + 0x1c);
    *(int *)puVar28 = (int)uVar11;
    *(int *)((int)puVar28 + 4) = (int)((ulong)uVar11 >> 0x20);
    *(undefined4 *)(puVar28 + 1) = uVar31;
    *(undefined4 *)((int)puVar28 + 0xc) = uVar32;
    *(int *)(puVar28 + 2) = (int)uVar12;
    *(int *)((int)puVar28 + 0x14) = (int)((ulong)uVar12 >> 0x20);
    *(undefined4 *)(puVar28 + 3) = uVar33;
    *(undefined4 *)((int)puVar28 + 0x1c) = uVar34;
    puVar19 = puVar29 + 4;
    puVar14 = puVar28 + 4;
  } while (puVar19 != puVar30);
  uVar11 = *puVar19;
  uVar31 = *(undefined4 *)(puVar29 + 5);
  uVar32 = *(undefined4 *)((int)puVar29 + 0x2c);
  *(int *)(puVar28 + 4) = (int)uVar11;
  *(int *)((int)puVar28 + 0x24) = (int)((ulong)uVar11 >> 0x20);
  *(undefined4 *)(puVar28 + 5) = uVar31;
  *(undefined4 *)((int)puVar28 + 0x2c) = uVar32;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(undefined4 *)(puVar18 + 0xe) = 0;
  *(undefined4 *)((int)puVar18 + 0x74) = 0x3f800000;
  *(undefined4 *)(puVar18 + 10) = 0xbd4ccccd;
  *(undefined4 *)((int)puVar18 + 0x54) = 0xbd4ccccd;
  *(undefined4 *)(puVar18 + 0xb) = 0x40600000;
  puVar14 = puVar18 + 0x14;
  puVar19 = puVar18;
  do {
    puVar29 = puVar14;
    uVar11 = *puVar19;
                    /* end of inlined section */
    uVar31 = *(undefined4 *)(puVar19 + 1);
    uVar32 = *(undefined4 *)((int)puVar19 + 0xc);
    uVar12 = puVar19[2];
    uVar33 = *(undefined4 *)(puVar19 + 3);
    uVar34 = *(undefined4 *)((int)puVar19 + 0x1c);
    *(int *)puVar29 = (int)uVar11;
    *(int *)((int)puVar29 + 4) = (int)((ulong)uVar11 >> 0x20);
    *(undefined4 *)(puVar29 + 1) = uVar31;
    *(undefined4 *)((int)puVar29 + 0xc) = uVar32;
    *(int *)(puVar29 + 2) = (int)uVar12;
    *(int *)((int)puVar29 + 0x14) = (int)((ulong)uVar12 >> 0x20);
    *(undefined4 *)(puVar29 + 3) = uVar33;
    *(undefined4 *)((int)puVar29 + 0x1c) = uVar34;
    puVar19 = puVar19 + 4;
    puVar14 = puVar29 + 4;
  } while (puVar19 != puVar30);
  uVar11 = *puVar30;
                    /* end of inlined section */
  uVar31 = *(undefined4 *)(puVar18 + 9);
  uVar32 = *(undefined4 *)((int)puVar18 + 0x4c);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  *(int *)(puVar29 + 4) = (int)uVar11;
  *(int *)((int)puVar29 + 0x24) = (int)((ulong)uVar11 >> 0x20);
  *(undefined4 *)(puVar29 + 5) = uVar31;
  *(undefined4 *)((int)puVar29 + 0x2c) = uVar32;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(undefined4 *)(puVar18 + 0x18) = 0x3f800000;
  *(undefined4 *)((int)puVar18 + 0xc4) = 0;
  *(undefined4 *)(puVar18 + 0x14) = 0x3d4ccccd;
  *(undefined4 *)((int)puVar18 + 0xa4) = 0x3d4ccccd;
  *(undefined4 *)(puVar18 + 0x15) = 0;
  puVar14 = puVar18 + 0x1e;
  puVar19 = puVar18;
  do {
    puVar29 = puVar19;
    puVar28 = puVar14;
    uVar11 = *puVar29;
                    /* end of inlined section */
    uVar31 = *(undefined4 *)(puVar29 + 1);
    uVar32 = *(undefined4 *)((int)puVar29 + 0xc);
    uVar12 = puVar29[2];
    uVar33 = *(undefined4 *)(puVar29 + 3);
    uVar34 = *(undefined4 *)((int)puVar29 + 0x1c);
    *(int *)puVar28 = (int)uVar11;
    *(int *)((int)puVar28 + 4) = (int)((ulong)uVar11 >> 0x20);
    *(undefined4 *)(puVar28 + 1) = uVar31;
    *(undefined4 *)((int)puVar28 + 0xc) = uVar32;
    *(int *)(puVar28 + 2) = (int)uVar12;
    *(int *)((int)puVar28 + 0x14) = (int)((ulong)uVar12 >> 0x20);
    *(undefined4 *)(puVar28 + 3) = uVar33;
    *(undefined4 *)((int)puVar28 + 0x1c) = uVar34;
    puVar19 = puVar29 + 4;
    puVar14 = puVar28 + 4;
  } while (puVar19 != puVar30);
  uVar11 = *puVar19;
  uVar31 = *(undefined4 *)(puVar29 + 5);
  uVar32 = *(undefined4 *)((int)puVar29 + 0x2c);
  *(int *)(puVar28 + 4) = (int)uVar11;
  *(int *)((int)puVar28 + 0x24) = (int)((ulong)uVar11 >> 0x20);
  *(undefined4 *)(puVar28 + 5) = uVar31;
  *(undefined4 *)((int)puVar28 + 0x2c) = uVar32;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(undefined4 *)(puVar18 + 0x22) = 0;
                    /* end of inlined section */
  fVar36 = 32.0;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(undefined4 *)((int)puVar18 + 0x114) = 0;
  local_190 = 0xbd4ccccd;
  local_188 = 0;
  local_18c = -0.05;
  *(undefined4 *)(puVar18 + 0x1e) = 0xbd4ccccd;
  *(undefined4 *)((int)puVar18 + 0xf4) = 0xbd4ccccd;
  uVar31 = 0x3f6b851f;
  *(undefined4 *)(puVar18 + 0x1f) = 0;
                    /* end of inlined section */
  (*(code *)ppEVar35[0xb][1].m_pos)
            ((int)ppEVar35 + (int)*(short *)&ppEVar35[0xb][1].m_allocList.field0_0x0.m_l.m_pTail,
             puVar18,4);
  pEVar6 = (_pGfx->field0_0x0).__vtable;
  pEVar17 = (EDL *)(*(code *)pEVar6[6].ManagedShutdown)
                             ((int)&(_pGfx->field0_0x0).__vtable +
                              (int)*(short *)&pEVar6[6].ManagedStartup,uVar27);
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  this->m_pLineDl = pEVar17;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xbc13fc51,(EFile *)0x0,0);
  this->m_pXCursorShader = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x9444f651,(EFile *)0x0,0);
  this->m_pXCursorWireShader = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xbf286af3,(EFile *)0x0,0);
  this->m_pCursorShader = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x977f60f3,(EFile *)0x0,0);
  this->m_pCursorWireShader = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x9a1fbcde,(EFile *)0x0,0);
  this->m_pLineShdr = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x15bb3e8a,(EFile *)0x0,0);
  this->m_pWhiteShaderAdditive = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xa25eba9a,(EFile *)0x0,0);
  this->m_pBlankShdr = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x542a4dcf,(EFile *)0x0,0);
  this->m_pMenuBevelShdr = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x4185128e,(EFile *)0x0,0);
  this->m_pMenuBevelBottomShdr = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x6b80ae,(EFile *)0x0,0);
  this->m_pTitleBgCenterShdr = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x90d49d3f,(EFile *)0x0,0);
  this->m_pTitleBgLeftShdr = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x6adba05c,(EFile *)0x0,0);
  this->m_pTitleBgRightShdr = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xff679fa5,(EFile *)0x0,0);
  this->m_pTitleHighCenterShdr = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x6fd88234,(EFile *)0x0,0);
  this->m_pTitleHighLeftShdr = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x95d7bf57,(EFile *)0x0,0);
  this->m_pTitleHighRightShdr = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xd814ccd8,(EFile *)0x0,0);
  this->m_pTitleIconShdr = pEVar20;
  pEVar21 = (ERFont *)
            AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
  local_184 = 0x3f800000;
  local_188 = 0x3f666666;
  local_190 = 0x3f666666;
  local_18c = 0.9;
                    /* end of inlined section */
  this->m_pFont = pEVar21;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  (pEVar21->m_vColor).field0_0x0.d[0] = 0.9;
  (pEVar21->m_vColor).field0_0x0.d[1] = 0.9;
  (pEVar21->m_vColor).field0_0x0.d[2] = 0.9;
  (pEVar21->m_vColor).field0_0x0.d[3] = 1.0;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x9c19fe1e,(EFile *)0x0,0);
  this->m_pTextLineCenterShdr = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xf6a9deec,(EFile *)0x0,0);
  this->m_pTextLineRightShdr = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xca6e38f,(EFile *)0x0,0);
  this->m_pTextLineLeftShdr = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x2d14ac7d,(EFile *)0x0,0);
  this->m_pDPadBackgroundShdr = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xc1d9c5ed,(EFile *)0x0,0);
  this->m_pXIcon = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x2ccf500a,(EFile *)0x0,0);
  this->m_pTriIcon = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xc45a417b,(EFile *)0x0,0);
  this->m_pCircIcon = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x8b8cc935,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pSquareIcon = pEVar20;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_170 = (EUIIconDef__vtable *)0x1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_130[1] = (EUIIconDef__vtable *)0xffffffff;
  local_168 = 0;
  pEVar7 = (local_f4->m_def).__vtable;
  local_130[3] = (EUIIconDef__vtable *)0x1;
  local_160 = 0;
  puVar1 = (undefined *)((int)&(this->m_XIcon).m_def.m_trigger + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | CONCAT44(uStack_16c,1) >> (7 - uVar9) * 8;
  pEVar2 = &(this->m_XIcon).m_def;
  uVar9 = (uint)pEVar2 & 7;
  puVar10 = (ulong *)((int)pEVar2 - uVar9);
  *puVar10 = CONCAT44(uStack_16c,1) << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8
  ;
  puVar1 = (undefined *)((int)&(this->m_XIcon).m_def.m_colorIdx + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | ((ulong)uStack_164 << 0x20) >> (7 - uVar9) * 8;
  piVar3 = &(this->m_XIcon).m_def.m_selColorIdx;
  uVar9 = (uint)piVar3 & 7;
  puVar10 = (ulong *)((int)piVar3 - uVar9);
  *puVar10 = ((ulong)uStack_164 << 0x20) << uVar9 * 8 |
             *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_XIcon).m_def.__vtable + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x3a890800000000U >> (7 - uVar9) * 8;
  ppEVar4 = &(this->m_XIcon).m_def.m_pCtrl;
  uVar9 = (uint)ppEVar4 & 7;
  puVar10 = (ulong *)((int)ppEVar4 - uVar9);
  *puVar10 = 0x3a890800000000 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  (local_f4->m_def).__vtable = pEVar7;
  local_15c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar37 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_190 = 0x3d4ccccd;
                    /* end of inlined section */
  local_18c = fVar36 / (float)iVar37;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_18c;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_f4,-0x3e263a13);
  InitInActiveShader__7EUIIconi(local_f4,-0x3e263a13);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_150 = (this->m_TriIcon).m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_188 = 0;
  local_180 = 0;
  local_184 = 1;
  puVar1 = (undefined *)((int)&(this->m_TriIcon).m_def.m_trigger + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar9) * 8;
  pEVar2 = &(this->m_TriIcon).m_def;
  uVar9 = (uint)pEVar2 & 7;
  puVar10 = (ulong *)((int)pEVar2 - uVar9);
  *puVar10 = -0xffffffff << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon).m_def.m_colorIdx + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x100000000U >> (7 - uVar9) * 8;
  piVar3 = &(this->m_TriIcon).m_def.m_selColorIdx;
  uVar9 = (uint)piVar3 & 7;
  puVar10 = (ulong *)((int)piVar3 - uVar9);
  *puVar10 = 0x100000000 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon).m_def.__vtable + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x3a890800000000U >> (7 - uVar9) * 8;
  ppEVar4 = &(this->m_TriIcon).m_def.m_pCtrl;
  uVar9 = (uint)ppEVar4 & 7;
  puVar10 = (ulong *)((int)ppEVar4 - uVar9);
  *puVar10 = 0x3a890800000000 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  (this->m_TriIcon).m_def.__vtable = local_150;
  local_17c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar37 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_190 = 0x3d4ccccd;
                    /* end of inlined section */
  local_18c = fVar36 / (float)iVar37;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_18c;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(this_00,0x2ccf500a);
  InitInActiveShader__7EUIIconi(this_00,0x2ccf500a);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_170 = (local_d0->m_def).__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_188 = 0;
  local_180 = 0;
  local_184 = 1;
  puVar1 = (undefined *)((int)&(this->m_SquareIcon).m_def.m_trigger + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar9) * 8;
  pEVar2 = &(this->m_SquareIcon).m_def;
  uVar9 = (uint)pEVar2 & 7;
  puVar10 = (ulong *)((int)pEVar2 - uVar9);
  *puVar10 = -0xffffffff << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_SquareIcon).m_def.m_colorIdx + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x100000000U >> (7 - uVar9) * 8;
  piVar3 = &(this->m_SquareIcon).m_def.m_selColorIdx;
  uVar9 = (uint)piVar3 & 7;
  puVar10 = (ulong *)((int)piVar3 - uVar9);
  *puVar10 = 0x100000000 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_SquareIcon).m_def.__vtable + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x3a890800000000U >> (7 - uVar9) * 8;
  ppEVar4 = &(this->m_SquareIcon).m_def.m_pCtrl;
  uVar9 = (uint)ppEVar4 & 7;
  puVar10 = (ulong *)((int)ppEVar4 - uVar9);
  *puVar10 = 0x3a890800000000 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  (local_d0->m_def).__vtable = local_170;
  local_17c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar37 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_SquareIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_190 = 0x3d4ccccd;
                    /* end of inlined section */
  local_18c = fVar36 / (float)iVar37;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_SquareIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_18c;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_d0,-0x747336cb);
  InitInActiveShader__7EUIIconi(local_d0,-0x747336cb);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_170 = (local_124->m_def).__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_188 = 0;
  local_180 = 0;
  local_184 = 1;
  puVar1 = (undefined *)((int)&(this->m_CircleIcon).m_def.m_trigger + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar9) * 8;
  pEVar2 = &(this->m_CircleIcon).m_def;
  uVar9 = (uint)pEVar2 & 7;
  puVar10 = (ulong *)((int)pEVar2 - uVar9);
  *puVar10 = -0xffffffff << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_CircleIcon).m_def.m_colorIdx + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x100000000U >> (7 - uVar9) * 8;
  piVar3 = &(this->m_CircleIcon).m_def.m_selColorIdx;
  uVar9 = (uint)piVar3 & 7;
  puVar10 = (ulong *)((int)piVar3 - uVar9);
  *puVar10 = 0x100000000 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_CircleIcon).m_def.__vtable + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x3a890800000000U >> (7 - uVar9) * 8;
  ppEVar4 = &(this->m_CircleIcon).m_def.m_pCtrl;
  uVar9 = (uint)ppEVar4 & 7;
  puVar10 = (ulong *)((int)ppEVar4 - uVar9);
  *puVar10 = 0x3a890800000000 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  (local_124->m_def).__vtable = local_170;
  local_17c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar37 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_CircleIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_190 = 0x3d4ccccd;
                    /* end of inlined section */
  local_18c = fVar36 / (float)iVar37;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_CircleIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_18c;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_124,-0x3ba5be85);
  InitInActiveShader__7EUIIconi(local_124,-0x3ba5be85);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_170 = (local_110->m_def).__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_188 = 0;
  local_180 = 0;
  local_184 = 1;
  puVar1 = (undefined *)((int)&(this->m_XIcon2).m_def.m_trigger + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar9) * 8;
  pEVar2 = &(this->m_XIcon2).m_def;
  uVar9 = (uint)pEVar2 & 7;
  puVar10 = (ulong *)((int)pEVar2 - uVar9);
  *puVar10 = -0xffffffff << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_XIcon2).m_def.m_colorIdx + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x100000000U >> (7 - uVar9) * 8;
  piVar3 = &(this->m_XIcon2).m_def.m_selColorIdx;
  uVar9 = (uint)piVar3 & 7;
  puVar10 = (ulong *)((int)piVar3 - uVar9);
  *puVar10 = 0x100000000 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_XIcon2).m_def.__vtable + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x3a890800000000U >> (7 - uVar9) * 8;
  ppEVar4 = &(this->m_XIcon2).m_def.m_pCtrl;
  uVar9 = (uint)ppEVar4 & 7;
  puVar10 = (ulong *)((int)ppEVar4 - uVar9);
  *puVar10 = 0x3a890800000000 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  (local_110->m_def).__vtable = local_170;
  local_17c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar37 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon2).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_190 = 0x3d4ccccd;
                    /* end of inlined section */
  local_18c = fVar36 / (float)iVar37;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon2).field0_0x0.m_WDH.field0_0x0.d[2] = local_18c;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_110,-0x3e263a13);
  InitInActiveShader__7EUIIconi(local_110,-0x3e263a13);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_170 = (local_f8->m_def).__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_188 = 0;
  local_180 = 0;
  local_184 = 1;
  puVar1 = (undefined *)((int)&(this->m_TriIcon2).m_def.m_trigger + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar9) * 8;
  pEVar2 = &(this->m_TriIcon2).m_def;
  uVar9 = (uint)pEVar2 & 7;
  puVar10 = (ulong *)((int)pEVar2 - uVar9);
  *puVar10 = -0xffffffff << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon2).m_def.m_colorIdx + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x100000000U >> (7 - uVar9) * 8;
  piVar3 = &(this->m_TriIcon2).m_def.m_selColorIdx;
  uVar9 = (uint)piVar3 & 7;
  puVar10 = (ulong *)((int)piVar3 - uVar9);
  *puVar10 = 0x100000000 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon2).m_def.__vtable + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x3a890800000000U >> (7 - uVar9) * 8;
  ppEVar4 = &(this->m_TriIcon2).m_def.m_pCtrl;
  uVar9 = (uint)ppEVar4 & 7;
  puVar10 = (ulong *)((int)ppEVar4 - uVar9);
  *puVar10 = 0x3a890800000000 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  (local_f8->m_def).__vtable = local_170;
  local_17c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar37 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon2).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_190 = 0x3d4ccccd;
                    /* end of inlined section */
  local_18c = fVar36 / (float)iVar37;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon2).field0_0x0.m_WDH.field0_0x0.d[2] = local_18c;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_f8,0x2ccf500a);
  InitInActiveShader__7EUIIconi(local_f8,0x2ccf500a);
  pEVar8 = this->m_PromptsDescLevel2[3].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar8[2].StateChanged;
  pEVar13 = &local_f0->field0_0x0;
  psVar22 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"exit");
  (*(code *)pEVar8[2].OnButtonRepeat)
            ((int)(pEVar13->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar22,0x20)
  ;
  AddIcon__9EUIPromptP7EUIIcon(local_f0,this_00);
  pEVar8 = this->m_PromptsDescLevel2[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar8[2].StateChanged;
  pEVar13 = &local_e8->field0_0x0;
  psVar22 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"select");
  (*(code *)pEVar8[2].OnButtonRepeat)
            ((int)(pEVar13->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar22,0x20)
  ;
  AddIcon__9EUIPromptP7EUIIcon(local_e8,local_f4);
  pEVar8 = this->m_PromptsDescLevel2[2].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar8[2].StateChanged;
  pEVar13 = &local_118->field0_0x0;
  psVar22 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"save");
  (*(code *)pEVar8[2].OnButtonRepeat)
            ((int)(pEVar13->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar22,0x20)
  ;
  AddIcon__9EUIPromptP7EUIIcon(local_118,local_d0);
  pEVar8 = this->m_PromptsDescLevel2[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar8[2].StateChanged;
  pEVar13 = &local_138->field0_0x0;
  psVar22 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"createfamily");
  (*(code *)pEVar8[2].OnButtonRepeat)
            ((int)(pEVar13->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar22,0x20)
  ;
  AddIcon__9EUIPromptP7EUIIcon(local_138,local_124);
  pEVar8 = this->m_PromptsDescLevel1[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar8[2].StateChanged;
  pEVar13 = &local_d8->field0_0x0;
  psVar22 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"select");
  (*(code *)pEVar8[2].OnButtonRepeat)
            ((int)(pEVar13->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar22,0x20)
  ;
  AddIcon__9EUIPromptP7EUIIcon(local_d8,local_110);
  pEVar8 = this->m_PromptsDescLevel1[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar8[2].StateChanged;
  pEVar13 = &local_11c->field0_0x0;
  psVar22 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"exit");
  (*(code *)pEVar8[2].OnButtonRepeat)
            ((int)(pEVar13->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar22,0x20)
  ;
  AddIcon__9EUIPromptP7EUIIcon(local_11c,local_f8);
  Init__10EPromptBar(local_100);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_190 = 0x3f000000;
  local_18c = (float)uVar31;
                    /* end of inlined section */
  Setup__10EPromptBarP9EUIPromptUiG5EVec2(local_100,local_e8,4,(EVec2 *)&local_190);
  Init__10EPromptBar(local_ec);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_190 = 0x3f000000;
  local_18c = (float)uVar31;
                    /* end of inlined section */
  Setup__10EPromptBarP9EUIPromptUiG5EVec2(local_ec,local_d8,2,(EVec2 *)&local_190);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_170 = (local_e0->m_def).__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_188 = 0;
  local_180 = 0;
  local_184 = 1;
  puVar1 = (undefined *)((int)&(this->m_XIcon3).m_def.m_trigger + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar9) * 8;
  pEVar2 = &(this->m_XIcon3).m_def;
  uVar9 = (uint)pEVar2 & 7;
  puVar10 = (ulong *)((int)pEVar2 - uVar9);
  *puVar10 = -0xffffffff << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_XIcon3).m_def.m_colorIdx + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x100000000U >> (7 - uVar9) * 8;
  piVar3 = &(this->m_XIcon3).m_def.m_selColorIdx;
  uVar9 = (uint)piVar3 & 7;
  puVar10 = (ulong *)((int)piVar3 - uVar9);
  *puVar10 = 0x100000000 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_XIcon3).m_def.__vtable + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x3a890800000000U >> (7 - uVar9) * 8;
  ppEVar4 = &(this->m_XIcon3).m_def.m_pCtrl;
  uVar9 = (uint)ppEVar4 & 7;
  puVar10 = (ulong *)((int)ppEVar4 - uVar9);
  *puVar10 = 0x3a890800000000 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  (local_e0->m_def).__vtable = local_170;
  local_17c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar37 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon3).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_190 = 0x3d4ccccd;
                    /* end of inlined section */
  local_18c = fVar36 / (float)iVar37;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon3).field0_0x0.m_WDH.field0_0x0.d[2] = local_18c;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_e0,-0x3e263a13);
  InitInActiveShader__7EUIIconi(local_e0,-0x3e263a13);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_170 = (local_140->m_def).__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_188 = 0;
  local_180 = 0;
  local_184 = 1;
  puVar1 = (undefined *)((int)&(this->m_TriIcon3).m_def.m_trigger + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar9) * 8;
  pEVar2 = &(this->m_TriIcon3).m_def;
  uVar9 = (uint)pEVar2 & 7;
  puVar10 = (ulong *)((int)pEVar2 - uVar9);
  *puVar10 = -0xffffffff << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon3).m_def.m_colorIdx + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x100000000U >> (7 - uVar9) * 8;
  piVar3 = &(this->m_TriIcon3).m_def.m_selColorIdx;
  uVar9 = (uint)piVar3 & 7;
  puVar10 = (ulong *)((int)piVar3 - uVar9);
  *puVar10 = 0x100000000 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon3).m_def.__vtable + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x3a890800000000U >> (7 - uVar9) * 8;
  ppEVar4 = &(this->m_TriIcon3).m_def.m_pCtrl;
  uVar9 = (uint)ppEVar4 & 7;
  puVar10 = (ulong *)((int)ppEVar4 - uVar9);
  *puVar10 = 0x3a890800000000 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  (local_140->m_def).__vtable = local_170;
  local_17c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar37 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon3).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_190 = 0x3d4ccccd;
                    /* end of inlined section */
  local_18c = fVar36 / (float)iVar37;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon3).field0_0x0.m_WDH.field0_0x0.d[2] = local_18c;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_140,0x2ccf500a);
  InitInActiveShader__7EUIIconi(local_140,0x2ccf500a);
  pEVar8 = this->m_GenericYesNoBox[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar8[2].StateChanged;
  pEVar13 = &local_120->field0_0x0;
  psVar22 = GetUiString__7EGlobalPCc(&_globals,"yes");
  (*(code *)pEVar8[2].OnButtonRepeat)
            ((int)(pEVar13->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar22,0x20)
  ;
  AddIcon__9EUIPromptP7EUIIcon(local_120,local_e0);
  pEVar8 = this->m_GenericYesNoBox[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar8[2].StateChanged;
  pEVar13 = &local_104->field0_0x0;
  psVar22 = GetUiString__7EGlobalPCc(&_globals,"no");
  (*(code *)pEVar8[2].OnButtonRepeat)
            ((int)(pEVar13->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar22,0x20)
  ;
  AddIcon__9EUIPromptP7EUIIcon(local_104,local_140);
  Init__10EPromptBar(local_e4);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_190 = 0x3f000000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_18c = 0.622;
                    /* end of inlined section */
  Setup__10EPromptBarP9EUIPromptUiG5EVec2
            (&this->m_GenericYesNoPrompt,this->m_GenericYesNoBox,2,(EVec2 *)&local_190);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_170 = (local_d4->m_def).__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_188 = 0;
  local_180 = 0;
  local_184 = 1;
  puVar1 = (undefined *)((int)&(this->m_XIcon4).m_def.m_trigger + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar9) * 8;
  pEVar2 = &(this->m_XIcon4).m_def;
  uVar9 = (uint)pEVar2 & 7;
  puVar10 = (ulong *)((int)pEVar2 - uVar9);
  *puVar10 = -0xffffffff << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_XIcon4).m_def.m_colorIdx + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x100000000U >> (7 - uVar9) * 8;
  piVar3 = &(this->m_XIcon4).m_def.m_selColorIdx;
  uVar9 = (uint)piVar3 & 7;
  puVar10 = (ulong *)((int)piVar3 - uVar9);
  *puVar10 = 0x100000000 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_XIcon4).m_def.__vtable + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x3a890800000000U >> (7 - uVar9) * 8;
  ppEVar4 = &(this->m_XIcon4).m_def.m_pCtrl;
  uVar9 = (uint)ppEVar4 & 7;
  puVar10 = (ulong *)((int)ppEVar4 - uVar9);
  *puVar10 = 0x3a890800000000 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  (local_d4->m_def).__vtable = local_170;
  local_17c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar37 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon4).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_190 = 0x3d4ccccd;
                    /* end of inlined section */
  local_18c = fVar36 / (float)iVar37;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon4).field0_0x0.m_WDH.field0_0x0.d[2] = local_18c;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_d4,-0x3e263a13);
  InitInActiveShader__7EUIIconi(local_d4,-0x3e263a13);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_170 = (local_12c->m_def).__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_188 = 0;
  local_180 = 0;
  local_184 = 1;
  puVar1 = (undefined *)((int)&(this->m_TriIcon4).m_def.m_trigger + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar9) * 8;
  pEVar2 = &(this->m_TriIcon4).m_def;
  uVar9 = (uint)pEVar2 & 7;
  puVar10 = (ulong *)((int)pEVar2 - uVar9);
  *puVar10 = -0xffffffff << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon4).m_def.m_colorIdx + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x100000000U >> (7 - uVar9) * 8;
  piVar3 = &(this->m_TriIcon4).m_def.m_selColorIdx;
  uVar9 = (uint)piVar3 & 7;
  puVar10 = (ulong *)((int)piVar3 - uVar9);
  *puVar10 = 0x100000000 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon4).m_def.__vtable + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x3a890800000000U >> (7 - uVar9) * 8;
  ppEVar4 = &(this->m_TriIcon4).m_def.m_pCtrl;
  uVar9 = (uint)ppEVar4 & 7;
  puVar10 = (ulong *)((int)ppEVar4 - uVar9);
  *puVar10 = 0x3a890800000000 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  (local_12c->m_def).__vtable = local_170;
  local_17c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar37 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon4).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_190 = 0x3d4ccccd;
                    /* end of inlined section */
  local_18c = fVar36 / (float)iVar37;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon4).field0_0x0.m_WDH.field0_0x0.d[2] = local_18c;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_12c,0x2ccf500a);
  InitInActiveShader__7EUIIconi(local_12c,0x2ccf500a);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_170 = (local_114->m_def).__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_188 = 0;
  local_180 = 0;
  local_184 = 1;
  puVar1 = (undefined *)((int)&(this->m_CircleIcon4).m_def.m_trigger + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar9) * 8;
  pEVar2 = &(this->m_CircleIcon4).m_def;
  uVar9 = (uint)pEVar2 & 7;
  puVar10 = (ulong *)((int)pEVar2 - uVar9);
  *puVar10 = -0xffffffff << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_CircleIcon4).m_def.m_colorIdx + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x100000000U >> (7 - uVar9) * 8;
  piVar3 = &(this->m_CircleIcon4).m_def.m_selColorIdx;
  uVar9 = (uint)piVar3 & 7;
  puVar10 = (ulong *)((int)piVar3 - uVar9);
  *puVar10 = 0x100000000 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_CircleIcon4).m_def.__vtable + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x3a890800000000U >> (7 - uVar9) * 8;
  ppEVar4 = &(this->m_CircleIcon4).m_def.m_pCtrl;
  uVar9 = (uint)ppEVar4 & 7;
  puVar10 = (ulong *)((int)ppEVar4 - uVar9);
  *puVar10 = 0x3a890800000000 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  local_17c = _vt_10EUIIconDef;
  (local_114->m_def).__vtable = local_170;
                    /* end of inlined section */
  iVar37 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_CircleIcon4).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_190 = 0x3d4ccccd;
                    /* end of inlined section */
  local_18c = fVar36 / (float)iVar37;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_CircleIcon4).field0_0x0.m_WDH.field0_0x0.d[2] = local_18c;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_114,-0x3ba5be85);
  InitInActiveShader__7EUIIconi(local_114,-0x3ba5be85);
  pEVar8 = this->m_FamilySelectPrompts[2].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar8[2].StateChanged;
  pEVar13 = &local_134->field0_0x0;
  psVar22 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"exit");
  (*(code *)pEVar8[2].OnButtonRepeat)
            ((int)(pEVar13->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar22,0x20)
  ;
  AddIcon__9EUIPromptP7EUIIcon(local_134,local_12c);
  pEVar8 = this->m_FamilySelectPrompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar8[2].StateChanged;
  pEVar13 = &local_fc->field0_0x0;
  psVar22 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"select");
  (*(code *)pEVar8[2].OnButtonRepeat)
            ((int)(pEVar13->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar22,0x20)
  ;
  AddIcon__9EUIPromptP7EUIIcon(local_fc,local_d4);
  pEVar8 = this->m_FamilySelectPrompts[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar8[2].StateChanged;
  pEVar13 = &local_dc->field0_0x0;
  psVar22 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"delete_family");
  (*(code *)pEVar8[2].OnButtonRepeat)
            ((int)(pEVar13->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar22,0x20)
  ;
  AddIcon__9EUIPromptP7EUIIcon(local_dc,local_114);
  Init__10EPromptBar(local_10c);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_190 = 0x3f000000;
  local_18c = (float)uVar31;
                    /* end of inlined section */
  Setup__10EPromptBarP9EUIPromptUiG5EVec2(local_10c,local_fc,3,(EVec2 *)&local_190);
  *(undefined4 *)&this->m_bClearpCurHouseOnExit = 0;
  Init__7DPadWin();
  *(undefined4 *)&this->m_bInHouseSelectMenu = 0;
  *(undefined4 *)&this->m_bPlayHouse = 0;
  *(undefined4 *)&this->m_bEvictFamilyOrDestroyHouse = 0;
  *(undefined4 *)&this->m_bMoveIn = 0;
  this->m_pImportResFile = (NghResFile__0_845 *)0x0;
  this->m_ImportHouseNum = 0;
  this->m_CreateAFamilyMode = 0;
  pEVar23 = (ECharedMode *)__builtin_new(0x10);
  pEVar23 = __11ECharedMode(pEVar23);
  this->m_pCharedMode = pEVar23;
  Init__11ECharedModei(pEVar23,3);
  *(undefined4 *)&this->m_bExitScreen = 0;
  *(undefined4 *)&this->m_bSaveScreen = 0;
  *(undefined4 *)&this->m_bImportActive = 0;
  this->m_ImportMode = 0;
  *(undefined4 *)&this->m_bImportSimActive = 0;
  this->m_ImportSimMode = 0;
  *(undefined4 *)&this->m_SelectionTargetInitialized = 0;
  Init__18EGameMenuMainPanel(local_13c);
  if (_globals._344_4_ == 1) {
LAB_0018ac00:
    _curopt = 0;
  }
  else {
    if (_globals._332_4_ != 1) goto LAB_0018ac28;
    if (_globals._344_4_ == 1) goto LAB_0018ac00;
    _curopt = _globals._332_4_;
  }
  StartHouseSelection__17ENeighborhoodMode(this);
  _globals._332_4_ = 0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
LAB_0018ac28:
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x3f933f2,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  this->m_pMorePrompts[0] = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x24100c84,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pMorePrompts[1] = pEVar20;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
  _globals._380_4_ = 0;
  pEVar24 = (ERModel *)
            AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,0xc5910af4,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pCarsModel = pEVar24;
  pEVar25 = (EAnimController *)__builtin_new(0x44);
  pEVar25 = __15EAnimController(pEVar25);
  this->m_AC = pEVar25;
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
  pEVar25->m_modelScaler = this->m_pCarsModel->m_scaler;
                    /* end of inlined section */
  Init__15EAnimControllerUi(this->m_AC,0x3f2aa218);
  SetTrackAnim__15EAnimControlleriUi(this->m_AC,0,0xc5910af4);
  SetTrackSpeed__15EAnimControllerif(this->m_AC,0,1.0);
  SetTrackIntensity__15EAnimControllerif(this->m_AC,0,1.0);
  *(undefined4 *)&this->m_bGoingToCredits = 0;
  Init__11EDialogMenu(local_108);
  psVar22 = GetUiString__7EGlobalPCc(&_globals,"no");
  this->m_ppNoYesOptions[0] = psVar22;
  psVar22 = GetUiString__7EGlobalPCc(&_globals,"yes");
  this->m_ppNoYesOptions[1] = psVar22;
  psVar22 = GetUiString__7EGlobalPCc(&_globals,"yes");
  this->m_ppYesNoOptions[0] = psVar22;
  psVar22 = GetUiString__7EGlobalPCc(&_globals,"no");
  this->m_ppYesNoOptions[1] = psVar22;
  iVar37 = 3;
  ppsVar26 = local_128 + 3;
  do {
    *ppsVar26 = (short *)0x0;
    iVar37 = iVar37 + -1;
    ppsVar26 = ppsVar26 + -1;
  } while (-1 < iVar37);
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_pDeleteFamily = (FamilyImpl *)0x0;
  *(undefined4 *)&this->m_bDisableHouseMenu = 0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_pChallengeModeIntroShdr = (ERShader *)0x0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_PulseAccumulator = 0.0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xda8131bb,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pGlow = pEVar20;
  SetupDpadWin__17ENeighborhoodMode(this);
  return;
}

void ENeighborhoodMode::Reset(int ToState) {
	int i;
	
  EAnimController *pEVar1;
  NghResFile__0_845 *pNVar2;
  iResFile__0_3211__vtable *piVar3;
  EHouseSelectMenu *pEVar4;
  EUIObjectNode__vtable *pEVar5;
  ERoofs *pEVar6;
  EStorable__vtable *pEVar7;
  EGlobalManagerClient__vtable *pEVar8;
  EPortalWindow *pEVar9;
  EWindow__vtable *pEVar10;
  NeighborhoodImpl *pNVar11;
  EDL *pEVar12;
  ERShader *pEVar13;
  EHouseImportMenuMgr *this_00;
  EFamilyMemberMenuMgr *this_01;
  ERFont *this_02;
  EHouse__26_3190 **ppEVar14;
  ERoofs **ppEVar15;
  int iVar16;
  
  Reset__11EDialogMenu(&this->m_DialogMenu);
  this->m_pDeleteFamily = (FamilyImpl *)0x0;
  Reset__18EGameMenuMainPanel(&this->m_MainMenu);
  while (this->m_pCarsModel != (ERModel *)0x0) {
    DelRef__9EResource(&this->m_pCarsModel->field0_0x0);
    this->m_pCarsModel = (ERModel *)0x0;
  }
  pEVar1 = this->m_AC;
  if (pEVar1 != (EAnimController *)0x0) {
    (**(code **)(pEVar1->__vtable + 1))
              ((int)&pEVar1->m_mNodes + (int)*(short *)&pEVar1->__vtable->ComputeMatrices,3);
  }
  this->m_AC = (EAnimController *)0x0;
  ppEVar14 = this->m_pHouseData;
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)this->m_PromptsDescLevel2);
  ppEVar15 = this->m_pRoofs;
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)(this->m_PromptsDescLevel2 + 1));
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)(this->m_PromptsDescLevel2 + 2));
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)(this->m_PromptsDescLevel2 + 3));
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)this->m_PromptsDescLevel1);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)(this->m_PromptsDescLevel1 + 1));
  Reset__10EPromptBar(&this->m_PromptsBarDescLevel2);
  Reset__10EPromptBar(&this->m_PromptsBarDescLevel1);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)this->m_GenericYesNoBox);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)(this->m_GenericYesNoBox + 1));
  Reset__10EPromptBar(&this->m_GenericYesNoPrompt);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)this->m_FamilySelectPrompts);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)(this->m_FamilySelectPrompts + 1));
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)(this->m_FamilySelectPrompts + 2));
  Reset__10EPromptBar(&this->m_FamilySelectBar);
  while (this->m_pGlow != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pGlow->field0_0x0);
    this->m_pGlow = (ERShader *)0x0;
  }
  pEVar13 = this->m_pMorePrompts[0];
  while (pEVar13 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar13->field0_0x0);
    this->m_pMorePrompts[0] = (ERShader *)0x0;
    pEVar13 = this->m_pMorePrompts[0];
  }
  pEVar13 = this->m_pMorePrompts[1];
  while (pEVar13 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar13->field0_0x0);
    this->m_pMorePrompts[1] = (ERShader *)0x0;
    pEVar13 = this->m_pMorePrompts[1];
  }
  pNVar2 = this->m_pImportResFile;
  if (pNVar2 != (NghResFile__0_845 *)0x0) {
    piVar3 = (pNVar2->field0_0x0).__vtable;
    (*(code *)piVar3->Create)
              ((int)pNVar2->m_ppHouseWriteInfo + *(short *)&piVar3->_dyncastimpl + -0x18,3);
    this->m_pImportResFile = (NghResFile__0_845 *)0x0;
  }
  pEVar4 = this->m_pHouseSelectMenu;
  if (pEVar4 != (EHouseSelectMenu *)0x0) {
    pEVar5 = (pEVar4->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar5->Draw)
              ((int)(pEVar4->field0_0x0).field0_0x0.m_maxBackShdrSize +
               *(short *)&pEVar5->Update + -0x44,3);
    this->m_pHouseSelectMenu = (EHouseSelectMenu *)0x0;
  }
  if (this->m_pSelectFamilyMenu == (EFamilySelect *)0x0) {
    this_00 = this->m_pHouseImportMenu;
  }
  else {
    ___13EFamilySelect(this->m_pSelectFamilyMenu,3);
    this->m_pSelectFamilyMenu = (EFamilySelect *)0x0;
    this_00 = this->m_pHouseImportMenu;
  }
  if (this_00 == (EHouseImportMenuMgr *)0x0) {
    this_01 = this->m_pFamilyMemberMenu;
  }
  else {
    ___19EHouseImportMenuMgr(this_00,3);
    this->m_pHouseImportMenu = (EHouseImportMenuMgr *)0x0;
    this_01 = this->m_pFamilyMemberMenu;
  }
  if (this_01 == (EFamilyMemberMenuMgr *)0x0) {
    pNVar11 = this->m_pImportNeighborhood;
  }
  else {
    ___20EFamilyMemberMenuMgr(this_01,3);
    this->m_pFamilyMemberMenu = (EFamilyMemberMenuMgr *)0x0;
    pNVar11 = this->m_pImportNeighborhood;
  }
  if (pNVar11 != (NeighborhoodImpl *)0x0) {
    this->m_pImportNeighborhood = (NeighborhoodImpl *)0x0;
  }
  CleanUp__7DPadWin();
  iVar16 = 7;
  do {
    if ((EHouse__2_990 *)*ppEVar14 == (EHouse__2_990 *)0x0) {
      pEVar6 = *ppEVar15;
    }
    else {
      ___6EHouse((EHouse__2_990 *)*ppEVar14,3);
      *ppEVar14 = (EHouse__26_3190 *)0x0;
      pEVar6 = *ppEVar15;
    }
    if (pEVar6 != (ERoofs *)0x0) {
      pEVar7 = (pEVar6->field0_0x0).field0_0x0.__vtable;
      (*(code *)pEVar7[1].GetTypeKey)
                ((int)((pEVar6->field0_0x0).m_otd.m_minPos + -7) +
                 (int)*(short *)&pEVar7[1].GetTypeName,3);
      *ppEVar15 = (ERoofs *)0x0;
    }
    ppEVar15 = ppEVar15 + 1;
    iVar16 = iVar16 + -1;
    ppEVar14 = ppEVar14 + 1;
  } while (-1 < iVar16);
  while (this->m_pdl != (EDL *)0x0) {
    pEVar8 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar8[3].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar8[3].ManagedStartup);
    pEVar8 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar8[7].EGlobalManagerClient)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar8 + 7),this->m_pdl);
    this->m_pdl = (EDL *)0x0;
  }
  pEVar12 = this->m_pLineDl;
  while (pEVar12 != (EDL *)0x0) {
    pEVar8 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar8[3].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar8[3].ManagedStartup);
    pEVar8 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar8[7].EGlobalManagerClient)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar8 + 7),this->m_pLineDl);
    this->m_pLineDl = (EDL *)0x0;
    pEVar12 = this->m_pLineDl;
  }
  pEVar13 = this->m_pBlankShdr;
  while (pEVar13 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar13->field0_0x0);
    this->m_pBlankShdr = (ERShader *)0x0;
    pEVar13 = this->m_pBlankShdr;
  }
  pEVar13 = this->m_pMenuBevelShdr;
  while (pEVar13 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar13->field0_0x0);
    this->m_pMenuBevelShdr = (ERShader *)0x0;
    pEVar13 = this->m_pMenuBevelShdr;
  }
  pEVar13 = this->m_pMenuBevelBottomShdr;
  while (pEVar13 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar13->field0_0x0);
    this->m_pMenuBevelBottomShdr = (ERShader *)0x0;
    pEVar13 = this->m_pMenuBevelBottomShdr;
  }
  pEVar13 = this->m_pTitleBgCenterShdr;
  while (pEVar13 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar13->field0_0x0);
    this->m_pTitleBgCenterShdr = (ERShader *)0x0;
    pEVar13 = this->m_pTitleBgCenterShdr;
  }
  pEVar13 = this->m_pTitleBgLeftShdr;
  while (pEVar13 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar13->field0_0x0);
    this->m_pTitleBgLeftShdr = (ERShader *)0x0;
    pEVar13 = this->m_pTitleBgLeftShdr;
  }
  pEVar13 = this->m_pTitleBgRightShdr;
  while (pEVar13 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar13->field0_0x0);
    this->m_pTitleBgRightShdr = (ERShader *)0x0;
    pEVar13 = this->m_pTitleBgRightShdr;
  }
  pEVar13 = this->m_pTitleHighCenterShdr;
  while (pEVar13 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar13->field0_0x0);
    this->m_pTitleHighCenterShdr = (ERShader *)0x0;
    pEVar13 = this->m_pTitleHighCenterShdr;
  }
  pEVar13 = this->m_pTitleHighLeftShdr;
  while (pEVar13 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar13->field0_0x0);
    this->m_pTitleHighLeftShdr = (ERShader *)0x0;
    pEVar13 = this->m_pTitleHighLeftShdr;
  }
  pEVar13 = this->m_pTitleHighRightShdr;
  while (pEVar13 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar13->field0_0x0);
    this->m_pTitleHighRightShdr = (ERShader *)0x0;
    pEVar13 = this->m_pTitleHighRightShdr;
  }
  pEVar13 = this->m_pTitleIconShdr;
  while (pEVar13 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar13->field0_0x0);
    this->m_pTitleIconShdr = (ERShader *)0x0;
    pEVar13 = this->m_pTitleIconShdr;
  }
  pEVar13 = this->m_pWhiteShaderAdditive;
  while (pEVar13 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar13->field0_0x0);
    this->m_pWhiteShaderAdditive = (ERShader *)0x0;
    pEVar13 = this->m_pWhiteShaderAdditive;
  }
  pEVar13 = this->m_pLineShdr;
  while (pEVar13 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar13->field0_0x0);
    this->m_pLineShdr = (ERShader *)0x0;
    pEVar13 = this->m_pLineShdr;
  }
  pEVar13 = this->m_pXCursorShader;
  while (pEVar13 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar13->field0_0x0);
    this->m_pXCursorShader = (ERShader *)0x0;
    pEVar13 = this->m_pXCursorShader;
  }
  pEVar13 = this->m_pXCursorWireShader;
  while (pEVar13 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar13->field0_0x0);
    this->m_pXCursorWireShader = (ERShader *)0x0;
    pEVar13 = this->m_pXCursorWireShader;
  }
  pEVar13 = this->m_pCursorShader;
  while (pEVar13 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar13->field0_0x0);
    this->m_pCursorShader = (ERShader *)0x0;
    pEVar13 = this->m_pCursorShader;
  }
  pEVar13 = this->m_pCursorWireShader;
  while (pEVar13 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar13->field0_0x0);
    this->m_pCursorWireShader = (ERShader *)0x0;
    pEVar13 = this->m_pCursorWireShader;
  }
  this_02 = this->m_pFont;
  while (this_02 != (ERFont *)0x0) {
    DelRef__9EResource(&this_02->field0_0x0);
    this->m_pFont = (ERFont *)0x0;
    this_02 = this->m_pFont;
  }
  pEVar13 = this->m_pDPadBackgroundShdr;
  while (pEVar13 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar13->field0_0x0);
    this->m_pDPadBackgroundShdr = (ERShader *)0x0;
    pEVar13 = this->m_pDPadBackgroundShdr;
  }
  pEVar13 = this->m_pTextLineCenterShdr;
  while (pEVar13 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar13->field0_0x0);
    this->m_pTextLineCenterShdr = (ERShader *)0x0;
    pEVar13 = this->m_pTextLineCenterShdr;
  }
  pEVar13 = this->m_pTextLineRightShdr;
  while (pEVar13 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar13->field0_0x0);
    this->m_pTextLineRightShdr = (ERShader *)0x0;
    pEVar13 = this->m_pTextLineRightShdr;
  }
  pEVar13 = this->m_pTextLineLeftShdr;
  while (pEVar13 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar13->field0_0x0);
    this->m_pTextLineLeftShdr = (ERShader *)0x0;
    pEVar13 = this->m_pTextLineLeftShdr;
  }
  pEVar13 = this->m_pXIcon;
  while (pEVar13 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar13->field0_0x0);
    this->m_pXIcon = (ERShader *)0x0;
    pEVar13 = this->m_pXIcon;
  }
  pEVar13 = this->m_pTriIcon;
  while (pEVar13 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar13->field0_0x0);
    this->m_pTriIcon = (ERShader *)0x0;
    pEVar13 = this->m_pTriIcon;
  }
  pEVar13 = this->m_pCircIcon;
  while (pEVar13 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar13->field0_0x0);
    this->m_pCircIcon = (ERShader *)0x0;
    pEVar13 = this->m_pCircIcon;
  }
  pEVar13 = this->m_pSquareIcon;
  while (pEVar13 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar13->field0_0x0);
    this->m_pSquareIcon = (ERShader *)0x0;
    pEVar13 = this->m_pSquareIcon;
  }
  if (*(int *)&this->m_bGoingToCredits == 0) {
    while (this->m_pDataset != (ERDataset *)0x0) {
      DelRef__9EResource(&this->m_pDataset->field0_0x0);
      this->m_pDataset = (ERDataset *)0x0;
    }
  }
  _curopt = -1;
  CleanupLevel__17ENeighborhoodMode(this);
  pEVar9 = this->m_pWin;
  if (pEVar9 != (EPortalWindow *)0x0) {
    pEVar10 = (pEVar9->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar10->WindowMatrixChanged)
              ((int)&(pEVar9->field0_0x0).field0_0x0.m_mWindow.field0_0x0 +
               (int)*(short *)&pEVar10->Select,3);
  }
  this->m_pWin = (EPortalWindow *)0x0;
  if (*(int *)&this->m_bClearpCurHouseOnExit == 1) {
    _globals._pCurHouse = (EHouse__26_3190 *)0x0;
  }
  Reset__11ECharedModei(this->m_pCharedMode,2);
  if (this->m_pCharedMode == (ECharedMode *)0x0) {
    this->m_pCharedMode = (ECharedMode *)0x0;
  }
  else {
    ___11ECharedMode(this->m_pCharedMode,3);
    this->m_pCharedMode = (ECharedMode *)0x0;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
  if (_globals.m_pStoryModeTransitionShader == (ERShader *)0x0) {
    _globals.m_GenTransitionLoadPercent = 0.2;
  }
  return;
}

void ENeighborhoodMode::SetSelectHouseSubmode() {
  this->m_NeighborhoodSubmode = 1;
  ResetSelectHouseCamera__17ENeighborhoodMode(this);
  return;
}

void ENeighborhoodMode::Update() {
  int iVar1;
  
  if (*(int *)this->m_pCharedMode == 0) {
    initContinue__11ECharedMode(this->m_pCharedMode);
    *(undefined4 *)this->m_pCharedMode = 1;
    iVar1 = this->m_NeighborhoodSubmode;
  }
  else {
    iVar1 = this->m_NeighborhoodSubmode;
  }
  if (iVar1 == 1) {
    UpdateHouseSel__17ENeighborhoodMode(this);
  }
  else if (iVar1 < 2) {
    if (iVar1 == 0) {
      UpdateHoodSel__17ENeighborhoodMode(this);
    }
  }
  else if (iVar1 == 2) {
    UpdateLoadMode__17ENeighborhoodMode(this);
  }
  else if (iVar1 == 3) {
    UpdateOptionsMode__17ENeighborhoodMode(this);
  }
  return;
}

void ENeighborhoodMode::UpdateHoodSel() {
	int SelectedOption;
	
  int iVar1;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  EGameStateId local_30 [4];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  iVar1 = UpdateReturn__18EGameMenuMainPanel(&this->m_MainMenu);
  if (-1 < iVar1) {
    if (iVar1 == 5) {
      *(undefined4 *)&this->m_bGoingToCredits = 1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
      local_30[0].m_id = 5;
                    /* end of inlined section */
      SetState__13EGameStateManG12EGameStateId(_app.m_pGameStateMan,local_30);
    }
    else {
      _curopt = iVar1;
      StartHouseSelection__17ENeighborhoodMode(this);
      _globals._332_4_ = 0;
    }
  }
  return;
}

void ENeighborhoodMode::StartHouseSelection() {
	int i;
	EVec2 TempPnt;
	EVec3 Offset;
	EVec2 Target;
	float TargetAngle;
	EVec2 *this;
	int lotnum;
	EIParticleEmit *this;
	EIParticleEmit *this;
	s32 version;
	Int lotSize;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  ulong *puVar7;
  uchar uVar8;
  cSoundPlayer *this_00;
  NghResFile__0_845 *this_01;
  ERParticleType *pEVar9;
  EIParticleEmit *pEVar10;
  EIParticleEmit *pEVar11;
  ERLevel *pEVar12;
  EHouse__2_990 *pEVar13;
  ERoofs *pEVar14;
  EHouseSelectMenu *pEVar15;
  EFamilySelect *pEVar16;
  NeighborhoodImpl *pNVar17;
  int *piVar18;
  ETextEntryDialog *pEVar19;
  short *pTitle;
  long lVar20;
  ulong uVar21;
  ERoofs **ppEVar22;
  undefined8 unaff_s0;
  long lVar23;
  undefined8 unaff_s1;
  uint uCurrentHouse;
  undefined8 unaff_s2;
  EHouse__26_3190 **ppEVar24;
  undefined8 unaff_s3;
  int iVar25;
  undefined8 unaff_s4;
  uint uVar26;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar27;
  float fVar28;
  float fVar29;
  EVec2 TempPnt;
  EVec3 Offset;
  int version;
  EHouse__26_3190 **local_bc;
  ERoofs **local_b8;
  EVec2 *local_b4;
  undefined *local_b0;
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
  
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
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
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  this->m_LastSelection = -1;
  *(undefined4 *)&this->m_bInHouseSelectMenu = 0;
  if (_globals.Cheats._0_4_ == 0) {
    *(undefined4 *)&this->m_bNeighborhoodIsChallengeMode = 0;
  }
  else {
                    /* end of inlined section */
    SetGameMode__12cSoundPlayerQ23snd5eMode(_5Globs_pSound,kLoad);
    *(undefined4 *)&this->m_bNeighborhoodIsChallengeMode = 0;
  }
  if (_globals._332_4_ == 0) {
    if (_curopt == 0) {
                    /* end of inlined section */
      ReadFromFile__10NghResFilePCc(_5Globs_pNghResFile,"story.ngh");
      _globals._340_4_ = 1;
      this->m_StoryModeTransitionStateNum = 0;
    }
    else if (_curopt == 2) {
                    /* end of inlined section */
      ReadFromFile__10NghResFilePCc(_5Globs_pNghResFile,"chall.ngh");
      iVar25 = this->m_CurrentTargetHouse;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      *(undefined4 *)&this->m_bNeighborhoodIsChallengeMode = 1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      this->m_ChallengeModeStateNum = 0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      fVar28 = this->m_HouseCoords[iVar25].field0_0x0.d[0] + 16.0;
                    /* end of inlined section */
      fVar29 = this->m_HouseViewDir[iVar25];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      fVar27 = this->m_HouseCoords[iVar25].field0_0x0.d[1] + 16.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      TempPnt.field0_0x0 = (EVec2__null___1__1)CONCAT44(fVar27,fVar28);
                    /* end of inlined section */
      uVar21 = CONCAT44(fVar27,fVar28);
      puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
      uVar26 = (uint)puVar1 & 7;
      puVar7 = (ulong *)(puVar1 + -uVar26);
      *puVar7 = *puVar7 & -1L << (uVar26 + 1) * 8 | uVar21 >> (7 - uVar26) * 8;
      uVar26 = (uint)&this->m_vPos & 7;
      puVar7 = (ulong *)((int)&this->m_vPos - uVar26);
      *puVar7 = uVar21 << uVar26 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar26) * 8;
      (this->m_vPos).field0_0x0.d[2] = 0.0;
      this->m_CameraAngle = fVar29 * 0.01745329;
      uVar8 = _globals.ChallengeModeHouseNum;
      *(undefined4 *)&this->m_SelectionTargetInitialized = 1;
      this->m_CurrentTargetHouse = uVar8 - 1;
      SetChallengeModeBackground__17ENeighborhoodMode(this);
    }
    else if (_curopt == 1) {
                    /* end of inlined section */
      ReadFromFile__10NghResFilePCc(_5Globs_pNghResFile,"default.ngh");
    }
  }
  if (((_globals._332_4_ == 1) || (_curopt == 3)) || (_curopt == 4)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar17 = (NeighborhoodImpl *)
              (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                        ((int)&_5Globs_pNeighborhood->__vtable +
                         (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    Load__16NeighborhoodImplP10NghResFile(pNVar17,(NghResFile__6_845 *)_5Globs_pNghResFile);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    iVar25 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    if ((*(short *)(iVar25 + 0x2e6) == 1) && (_globals._344_4_ == 0)) {
      *(undefined4 *)&this->m_bClearpCurHouseOnExit = 0;
      _globals._pCurHouse = (EHouse__26_3190 *)0x0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      iVar25 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                         ((int)&_5Globs_pNeighborhood->__vtable +
                          (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
      sVar5 = *(short *)(iVar25 + 0x2e8);
      SetCurrentHouse__10NghResFileUi(_5Globs_pNghResFile,(int)sVar5);
      SetCurHouse__7EGlobali(&_globals,(int)sVar5);
      if (_globals.Cheats._0_4_ != 0) {
                    /* end of inlined section */
        SetGameMode__12cSoundPlayerQ23snd5eMode(_5Globs_pSound,kLoad);
                    /* end of inlined section */
      }
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
      TempPnt.field0_0x0 = (EVec2__null___1__1)CONCAT44(TempPnt.field0_0x0.d[1],1);
                    /* end of inlined section */
      SetState__13EGameStateManG12EGameStateId(_app.m_pGameStateMan,(EGameStateId *)&TempPnt);
      _globals._380_4_ = 1;
      _globals.m_GenTransitionLoadPercent = 0.0;
      return;
    }
    _globals._344_4_ = 0;
                    /* end of inlined section */
    iVar25 = *(int *)&this->m_bNeighborhoodIsChallengeMode;
  }
  else {
    iVar25 = *(int *)&this->m_bNeighborhoodIsChallengeMode;
  }
  Offset.field0_0x0.d[2] = 0.0;
  this->m_pLevel = (ERLevel *)0x0;
  if (((iVar25 == 0) && (uVar21 = 0x360000, _globals._340_4_ == 0)) && (_curopt != 0)) {
                    /* inlined from /eor/src2/engine/particle/e_particletypeman.h */
    pEVar9 = (ERParticleType *)
             AddRef__16EResourceManagerUiP5EFilei
                       (&_particletypeman.field0_0x0,0xcf9534f3,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/particle/e_particleemit.h */
                    /* end of inlined section */
    this->m_pParticleType = pEVar9;
                    /* inlined from /eor/src2/engine/particle/e_particleemit.h */
    pEVar10 = (EIParticleEmit *)_allocBucketAlloc__FUiUi(0x124,0x1b);
                    /* end of inlined section */
    local_bc = this->m_pHouseData;
    local_b8 = this->m_pRoofs;
    pEVar10 = __14EIParticleEmit(pEVar10);
    local_b4 = this->m_HouseCoords;
    local_b0 = (undefined *)((int)&this->m_HouseCoords[0].field0_0x0 + 4);
                    /* inlined from /eor/src2/engine/particle/e_particleemit.h */
                    /* end of inlined section */
    this->m_pParticleEmitter[0] = pEVar10;
                    /* inlined from /eor/src2/engine/particle/e_particleemit.h */
    pEVar10 = (EIParticleEmit *)_allocBucketAlloc__FUiUi(0x124,0x1b);
                    /* end of inlined section */
    pEVar11 = __14EIParticleEmit(pEVar10);
    pEVar10 = this->m_pParticleEmitter[0];
    pEVar9 = this->m_pParticleType;
    this->m_pParticleEmitter[1] = pEVar11;
    Type__14EIParticleEmitP14ERParticleType(pEVar10,pEVar9);
    Type__14EIParticleEmitP14ERParticleType(this->m_pParticleEmitter[1],this->m_pParticleType);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    pEVar10 = this->m_pParticleEmitter[0];
    puVar1 = (undefined *)((int)&(pEVar10->m_vPos).field0_0x0 + 7);
    uVar26 = (uint)puVar1 & 7;
    puVar7 = (ulong *)(puVar1 + -uVar26);
    *puVar7 = *puVar7 & -1L << (uVar26 + 1) * 8 | 0x428e999ac3708000U >> (7 - uVar26) * 8;
    uVar26 = (uint)&pEVar10->m_vPos & 7;
    puVar7 = (ulong *)((int)&pEVar10->m_vPos - uVar26);
    *puVar7 = 0x428e999ac3708000 << uVar26 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar26) * 8;
    (pEVar10->m_vPos).field0_0x0.d[2] = 37.5;
    pEVar10 = this->m_pParticleEmitter[1];
    puVar1 = (undefined *)((int)&(pEVar10->m_vPos).field0_0x0 + 7);
    uVar26 = (uint)puVar1 & 7;
    puVar7 = (ulong *)(puVar1 + -uVar26);
    *puVar7 = *puVar7 & -1L << (uVar26 + 1) * 8 | 0x42dc0000c36c199aU >> (7 - uVar26) * 8;
    uVar26 = (uint)&pEVar10->m_vPos & 7;
    puVar7 = (ulong *)((int)&pEVar10->m_vPos - uVar26);
    *puVar7 = 0x42dc0000c36c199a << uVar26 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar26) * 8;
    (pEVar10->m_vPos).field0_0x0.d[2] = 32.5;
    pEVar12 = (ERLevel *)
              AddRef__16EResourceManagerUiP5EFilei(&_levelman.field0_0x0,0xdfe51080,(EFile *)0x0,0);
    this_00 = _5Globs_pSound;
                    /* end of inlined section */
    this->m_pLevel = pEVar12;
    SetGameMode__12cSoundPlayerQ23snd5eMode(this_00,kHood);
    iVar25 = 0;
    uVar26 = 0;
    while( true ) {
      uCurrentHouse = uVar26 + 1;
      uVar6 = (int)&this->m_HouseCoords[0].field0_0x0 + iVar25 + 7;
      uVar3 = uVar6 & 7;
      uVar2 = (int)&this->m_HouseCoords[0].field0_0x0 + iVar25;
      uVar4 = uVar2 & 7;
      TempPnt.field0_0x0 =
           (EVec2__null___1__1)
           ((*(long *)(uVar6 - uVar3) << (7 - uVar3) * 8 |
            uVar21 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
           *(ulong *)(uVar2 - uVar4) >> uVar4 * 8);
      puVar1 = (undefined *)((int)&TempPnt.field0_0x0 + 7);
      uVar6 = (uint)puVar1 & 7;
      puVar7 = (ulong *)(puVar1 + -uVar6);
      *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | (ulong)TempPnt.field0_0x0 >> (7 - uVar6) * 8;
      pEVar13 = (EHouse__2_990 *)__builtin_new(0xb8);
      ppEVar24 = local_bc + uVar26;
      uVar21 = 1;
      pEVar13 = __6EHouseRC5EVec2iP7ERLevelbN34
                          (pEVar13,&TempPnt,uCurrentHouse,this->m_pLevel,false,true,false,true);
      this_01 = _5Globs_pNghResFile;
      *ppEVar24 = (EHouse__26_3190 *)pEVar13;
      SetCurrentHouse__10NghResFileUi(this_01,uCurrentHouse);
      ReconLoadObject__H1Z10cSimulator_PX01P8iResFileisPi_i
                (_5Globs_pSimulator,&_5Globs_pNghResFile->field0_0x0,kSimulatorResType,
                 kSimulatorResourceID,&version);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      lVar20 = (*(code *)_5Globs_pSimulator->__vtable->Resume)
                         ((int)&_5Globs_pSimulator->__vtable +
                          (int)*(short *)&_5Globs_pSimulator->__vtable->Pause,0x17);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      lVar23 = 0x40;
      if (lVar20 != 0) {
        lVar23 = lVar20;
      }
      lVar20 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                         ((int)&_5Globs_pFixedWorld->__vtable +
                          (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
      if (lVar23 != lVar20) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        (*(code *)_5Globs_pFixedWorld->__vtable->OutOfGrid)
                  ((int)&_5Globs_pFixedWorld->__vtable +
                   (int)*(short *)&_5Globs_pFixedWorld->__vtable->OutOfBounds,lVar23,1);
      }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      ppEVar22 = local_b8 + uVar26;
      (*(code *)_5Globs_pFixedWorld->__vtable->GetMaxSize)
                ((int)&_5Globs_pFixedWorld->__vtable +
                 (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetSize,_5Globs_pNghResFile,version)
      ;
      (*(code *)_5Globs_pFixedWorld->__vtable[1].SetVertexConfig)
                ((int)&_5Globs_pFixedWorld->__vtable +
                 (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].GetVertexConfig,0);
      *(undefined4 *)&this->m_bClearpCurHouseOnExit = 1;
      _globals._pCurHouse = *ppEVar24;
      Init__6EHouse((EHouse__2_990 *)*ppEVar24);
      pEVar14 = (ERoofs *)__builtin_new(0xa4);
      pEVar14 = __6ERoofs(pEVar14);
      *ppEVar22 = pEVar14;
      Offset.field0_0x0.d[0] =
           *(float *)((int)&local_b4->field0_0x0 + iVar25) - _globals._global_house_offx;
      Offset.field0_0x0.d[1] = *(float *)(local_b0 + iVar25) - _globals._global_house_offy;
      CreateRoof__6ERoofsR5EVec3b(pEVar14,&Offset,false);
      InsertInstance__7ERLevelP9EInstanceT1
                (this->m_pLevel,&(*ppEVar22)->field0_0x0,(EInstance *)0x0);
      if (7 < (int)uCurrentHouse) break;
      iVar25 = uCurrentHouse * 8;
      uVar26 = uCurrentHouse;
    }
  }
  pEVar15 = (EHouseSelectMenu *)__builtin_new(0xc0);
  pEVar15 = __16EHouseSelectMenu(pEVar15);
  this->m_pHouseSelectMenu = pEVar15;
  pEVar15->m_pNeighborhoodMode = this;
  pEVar16 = (EFamilySelect *)__builtin_new(0x134);
  pEVar16 = __13EFamilySelect(pEVar16);
  this->m_pSelectFamilyMenu = pEVar16;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  pNVar17 = (NeighborhoodImpl *)
            (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                      ((int)&_5Globs_pNeighborhood->__vtable +
                       (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
  Load__16NeighborhoodImplP10NghResFile(pNVar17,(NghResFile__6_845 *)_5Globs_pNghResFile);
  if (_curopt == 2) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    iVar25 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    *(undefined2 *)(iVar25 + 0x2e6) = 2;
  }
  else if (_curopt == 1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    iVar25 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    *(undefined2 *)(iVar25 + 0x2e6) = 0;
  }
  if (_globals._340_4_ == 1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    iVar25 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    *(undefined2 *)(iVar25 + 0x2e6) = 1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    iVar25 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    *(undefined2 *)(iVar25 + 0x2e8) = 0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    piVar18 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                               ((int)&_5Globs_pNeighborhood->__vtable +
                                (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                AddFamilyHistoryStat);
    (**(code **)(*piVar18 + 0x94))
              ((int)piVar18 + (int)*(short *)(*piVar18 + 0x90),_5Globs_pNghResFile,
               _5Globs_iSaveFileVersion);
    _globals._340_4_ = 0;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  iVar25 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                     ((int)&_5Globs_pNeighborhood->__vtable +
                      (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
  iVar25 = length__C13StringBuffer2((StringBuffer2 *)(iVar25 + 0x110));
  if (iVar25 == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    iVar25 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    if (*(short *)(iVar25 + 0x2e6) == 1) {
      *(undefined4 *)&this->m_bGetNeighborhoodName = 0;
    }
    else if (*(int *)&this->m_bNeighborhoodIsChallengeMode == 0) {
      *(undefined4 *)&this->m_bGetNeighborhoodName = 1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/textentry.h */
      pEVar19 = (ETextEntryDialog *)_memmanAlloc__FUiUi(0x1c0,0x10);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/textentry.h */
                    /* end of inlined section */
      pTitle = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"neigbhorhood_name_title");
      pEVar19 = __16ETextEntryDialogPCUsUifib(pEVar19,pTitle,0xe,0.15,0,false);
      this->m_pTextEntryDialog = pEVar19;
    }
    else {
      *(undefined4 *)&this->m_bGetNeighborhoodName = 0;
    }
  }
  else {
    *(undefined4 *)&this->m_bGetNeighborhoodName = 0;
  }
  SetSelectHouseSubmode__17ENeighborhoodMode(this);
  UpdateSelectHouseCamera__17ENeighborhoodMode(this);
  UpdateCursorPos__17ENeighborhoodMode(this);
  return;
}

void ENeighborhoodMode::UpdateHouseSel() {
	int Selection;
	int Selection;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ETextEntryDialog *pEVar4;
  EUIObjectNode__vtable *pEVar5;
  EUIVirtualCtrl__vtable *pEVar6;
  ulong *puVar7;
  EUiAudio *this_00;
  int iVar8;
  int *piVar9;
  short *psVar10;
  long lVar11;
  ulong uVar12;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  undefined local_a0 [8];
  undefined4 local_98;
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
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* end of inlined section */
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
  iVar8 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                    ((int)&_5Globs_pNeighborhood->__vtable +
                     (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
  if (*(short *)(iVar8 + 0x2e6) == 1) {
    if (*(int *)&this->m_bGetNeighborhoodName == 0) {
      TransitionStoryModeToNextHouse__17ENeighborhoodMode(this);
      return;
    }
    iVar8 = *(int *)&this->m_bNeighborhoodIsChallengeMode;
  }
  else {
    iVar8 = *(int *)&this->m_bNeighborhoodIsChallengeMode;
  }
  if (iVar8 == 0) {
    if (*(int *)(this->m_bHouseLockedOut + this->m_CurrentTargetHouse * 4) != 0) {
      iVar8 = this->m_CurrentTargetHouse;
      while (iVar8 = this->m_HouseNextToMoveTo[iVar8], this->m_CurrentTargetHouse = iVar8,
            *(int *)(this->m_bHouseLockedOut + iVar8 * 4) != 0) {
        iVar8 = this->m_CurrentTargetHouse;
      }
    }
    this->m_DrawButtonDescLevel = 2;
    UpdateSelectHouseCamera__17ENeighborhoodMode(this);
    UpdateCursorPos__17ENeighborhoodMode(this);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_a0._0_4_ = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_98 = 0x3f800000;
                    /* end of inlined section */
    local_a0._4_4_ = 0x3f800000;
    Update__15EAnimControllerP5EVec3T1G5EVec3
              (this->m_AC,(EVec3 *)0x0,(EVec3 *)0x0,(EVec3 *)local_a0);
    Update__12EParticleMan(&_pclman);
    Update__10EPromptBar(&this->m_PromptsBarDescLevel2);
    Update__10EPromptBar(&this->m_PromptsBarDescLevel1);
    Update__10EPromptBar(&this->m_FamilySelectBar);
    Update__10EPromptBar(&this->m_GenericYesNoPrompt);
    if (*(int *)&this->m_bGetNeighborhoodName == 1) {
      UpdateSelectHouseCamera__17ENeighborhoodMode(this);
      this->m_DrawButtonDescLevel = 0;
      pEVar6 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar11 = (*(code *)pEVar6[1].GetBut)
                         ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar6[1].ClearBut + -4
                          ,0,0x10);
      if (lVar11 == 0) {
        pEVar6 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
        lVar11 = (*(code *)pEVar6[1].GetBut)
                           ((int)(_globals.m_pCtrlPad)->m_pressed +
                            *(short *)&pEVar6[1].ClearBut + -4,1,0x10);
        if (lVar11 == 0) {
          UpdateGetNeighborhoodName__17ENeighborhoodMode(this);
          return;
        }
        pEVar4 = this->m_pTextEntryDialog;
      }
      else {
        pEVar4 = this->m_pTextEntryDialog;
      }
      if (pEVar4 != (ETextEntryDialog *)0x0) {
        pEVar5 = (pEVar4->field0_0x0).__vtable;
        (*(code *)pEVar5->Draw)((int)pEVar4->m_szText + *(short *)&pEVar5->Update + -0x3e,3);
      }
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      this_00 = _8EUiAudio__pUiAudioMan;
                    /* end of inlined section */
      this->m_pTextEntryDialog = (ETextEntryDialog *)0x0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(this_00,0x48ae94f);
                    /* end of inlined section */
      HouseSelectGoToHoodSelect__17ENeighborhoodMode(this);
    }
    else {
      if (*(int *)&this->m_bInHouseSelectMenu == 1) {
        this->m_DrawButtonDescLevel = 1;
      }
      if (this->m_CreateAFamilyMode == 2) {
        UpdateCreateAFamilyStage2__17ENeighborhoodMode(this);
      }
      else if (this->m_CreateAFamilyMode == 1) {
        UpdateCreateAFamilyStage1__17ENeighborhoodMode(this);
      }
      else if (*(int *)&this->m_bImportActive == 1) {
        UpdateImport__17ENeighborhoodMode(this);
      }
      else if (*(int *)&this->m_bImportSimActive == 1) {
        UpdateImportSim__17ENeighborhoodMode(this);
      }
      else {
        if (*(int *)&this->m_bPlayHouse == 0) {
          iVar8 = *(int *)&this->m_bEvictFamilyOrDestroyHouse;
        }
        else {
          Reset__16EHouseSelectMenu(this->m_pHouseSelectMenu);
          *(undefined4 *)&this->m_bInHouseSelectMenu = 0;
          iVar8 = GetHouseSelection__17ENeighborhoodMode(this);
          if (-1 < iVar8) {
            *(undefined4 *)&this->m_bClearpCurHouseOnExit = 0;
            _globals._pCurHouse = (EHouse__26_3190 *)0x0;
            SetCurHouse__7EGlobali(&_globals,iVar8 + 1);
            if (_globals.Cheats._0_4_ != 0) {
                    /* end of inlined section */
              SetGameMode__12cSoundPlayerQ23snd5eMode(_5Globs_pSound,kLoad);
            }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
            piVar9 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                                      ((int)&_5Globs_pNeighborhood->__vtable +
                                       (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                       AddFamilyHistoryStat);
            (**(code **)(*piVar9 + 0x94))
                      ((int)piVar9 + (int)*(short *)(*piVar9 + 0x90),_5Globs_pNghResFile,
                       _5Globs_iSaveFileVersion);
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
            local_a0._0_4_ = 1;
                    /* end of inlined section */
            SetState__13EGameStateManG12EGameStateId(_app.m_pGameStateMan,(EGameStateId *)local_a0);
            _globals._380_4_ = 1;
            _globals.m_GenTransitionLoadPercent = 0.0;
            return;
          }
          iVar8 = *(int *)&this->m_bEvictFamilyOrDestroyHouse;
        }
        if (iVar8 == 1) {
          UpdateEvictFamilyOrDestroyHouse__17ENeighborhoodMode(this);
        }
        else if (*(int *)&this->m_bInHouseSelectMenu == 0) {
          if (*(int *)&this->m_bMoveIn == 0) {
            if (*(int *)&this->m_bExitScreen == 0) {
              if (*(int *)&this->m_bSaveScreen == 0) {
                pEVar6 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
                lVar11 = (*(code *)pEVar6[1].GetBut)
                                   ((int)(_globals.m_pCtrlPad)->m_pressed +
                                    *(short *)&pEVar6[1].ClearBut + -4,0,0x2000);
                if (lVar11 != 0) {
                  iVar8 = this->m_CurrentTargetHouse;
                  while (iVar8 = this->m_HouseNextToMoveTo[iVar8],
                        this->m_CurrentTargetHouse = iVar8,
                        *(int *)(this->m_bHouseLockedOut + iVar8 * 4) != 0) {
                    iVar8 = this->m_CurrentTargetHouse;
                  }
                  this->m_LastTargetCameraAngle = this->m_CameraAngle;
                  puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
                  uVar2 = (uint)puVar1 & 7;
                  uVar3 = (uint)&this->m_vPos & 7;
                  uVar12 = *(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 & -1L << (8 - uVar3) * 8 |
                           *(ulong *)((int)&this->m_vPos - uVar3) >> uVar3 * 8;
                  puVar1 = (undefined *)((int)&(this->m_LastTargetPos).field0_0x0 + 7);
                  uVar2 = (uint)puVar1 & 7;
                  puVar7 = (ulong *)(puVar1 + -uVar2);
                  *puVar7 = *puVar7 & -1L << (uVar2 + 1) * 8 | uVar12 >> (7 - uVar2) * 8;
                  uVar2 = (uint)&this->m_LastTargetPos & 7;
                  puVar7 = (ulong *)((int)&this->m_LastTargetPos - uVar2);
                  *puVar7 = uVar12 << uVar2 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
                  this->m_CumulativeTime = 0.0;
                }
                pEVar6 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
                lVar11 = (*(code *)pEVar6[1].GetBut)
                                   ((int)(_globals.m_pCtrlPad)->m_pressed +
                                    *(short *)&pEVar6[1].ClearBut + -4,0,0x8000);
                if (lVar11 != 0) {
                  iVar8 = this->m_CurrentTargetHouse;
                  while (iVar8 = this->m_HousePrevToMoveTo[iVar8],
                        this->m_CurrentTargetHouse = iVar8,
                        *(int *)(this->m_bHouseLockedOut + iVar8 * 4) != 0) {
                    iVar8 = this->m_CurrentTargetHouse;
                  }
                  this->m_LastTargetCameraAngle = this->m_CameraAngle;
                  puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
                  uVar2 = (uint)puVar1 & 7;
                  uVar3 = (uint)&this->m_vPos & 7;
                  uVar12 = *(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 & -1L << (8 - uVar3) * 8 |
                           *(ulong *)((int)&this->m_vPos - uVar3) >> uVar3 * 8;
                  puVar1 = (undefined *)((int)&(this->m_LastTargetPos).field0_0x0 + 7);
                  uVar2 = (uint)puVar1 & 7;
                  puVar7 = (ulong *)(puVar1 + -uVar2);
                  *puVar7 = *puVar7 & -1L << (uVar2 + 1) * 8 | uVar12 >> (7 - uVar2) * 8;
                  uVar2 = (uint)&this->m_LastTargetPos & 7;
                  puVar7 = (ulong *)((int)&this->m_LastTargetPos - uVar2);
                  *puVar7 = uVar12 << uVar2 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
                  this->m_CumulativeTime = 0.0;
                }
                pEVar6 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
                lVar11 = (*(code *)pEVar6[1].GetBut)
                                   ((int)(_globals.m_pCtrlPad)->m_pressed +
                                    *(short *)&pEVar6[1].ClearBut + -4,0,0x40);
                if (lVar11 == 0) {
                  pEVar6 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
                  lVar11 = (*(code *)pEVar6[1].GetBut)
                                     ((int)(_globals.m_pCtrlPad)->m_pressed +
                                      *(short *)&pEVar6[1].ClearBut + -4,0,0x20);
                  if (lVar11 == 0) {
                    pEVar6 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
                    lVar11 = (*(code *)pEVar6[1].GetBut)
                                       ((int)(_globals.m_pCtrlPad)->m_pressed +
                                        *(short *)&pEVar6[1].ClearBut + -4,0,0x10);
                    if (lVar11 == 0) {
                      pEVar6 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
                      lVar11 = (*(code *)pEVar6[1].GetBut)
                                         ((int)(_globals.m_pCtrlPad)->m_pressed +
                                          *(short *)&pEVar6[1].ClearBut + -4,0,0x80);
                      if (lVar11 != 0) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                        local_a0._0_4_ = 0x3e4ccccd;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                        local_a0._4_4_ = 0x3e99999a;
                    /* end of inlined section */
                        psVar10 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"save_dialog");
                        SetupDialog__11EDialogMenuG5EVec2fiPPCUsPCUsb
                                  (&this->m_DialogMenu,(EVec2 *)local_a0,0.6,2,
                                   this->m_ppYesNoOptions,psVar10,false);
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
                        PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
                    /* end of inlined section */
                        *(undefined4 *)&this->m_bWaitForSaveReturn = 0;
                        *(undefined4 *)&this->m_bSaveScreen = 1;
                      }
                    }
                    else {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                      local_a0._0_4_ = 0x3e4ccccd;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                      local_a0._4_4_ = 0x3e99999a;
                    /* end of inlined section */
                      psVar10 = GetNeighborhoodModeString__7EGlobalPCc
                                          (&_globals,"exit_neighborhood_dialog");
                      SetupDialog__11EDialogMenuG5EVec2fiPPCUsPCUsb
                                (&this->m_DialogMenu,(EVec2 *)local_a0,0.6,2,this->m_ppNoYesOptions,
                                 psVar10,false);
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
                      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x48ae94f);
                    /* end of inlined section */
                      *(undefined4 *)&this->m_bExitScreen = 1;
                    }
                  }
                  else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
                    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
                    /* end of inlined section */
                    StartCreateAFamily__17ENeighborhoodMode(this);
                  }
                }
                else {
                  iVar8 = GetHouseSelection__17ENeighborhoodMode(this);
                  if ((-1 < iVar8) && (*(int *)&this->m_bDisableHouseMenu == 0)) {
                    SelectHouse__17ENeighborhoodModei(this,iVar8);
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
                    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
                    /* end of inlined section */
                  }
                }
              }
              else {
                this->m_DrawButtonDescLevel = 1;
                UpdateSaveScreen__17ENeighborhoodMode(this);
              }
            }
            else {
              this->m_DrawButtonDescLevel = 1;
              UpdateExitScreen__17ENeighborhoodMode(this);
            }
          }
          else {
            UpdateMovein__17ENeighborhoodMode(this);
          }
        }
        else {
          UpdateHouseSelectMenu__17ENeighborhoodMode(this);
        }
      }
    }
  }
  else {
    UpdateCursorPos__17ENeighborhoodMode(this);
    UpdateChallengeModeSetup__17ENeighborhoodMode(this);
  }
  return;
}

void ENeighborhoodMode::SelectHouse(int Selection) {
	HouseInfo HInfo;
	NeighborhoodImpl *NH;
	c16 *string;
	EHouseSelectMenuItem *psaveopt;
	NeighborhoodImpl *this;
	int HouseNum;
	EHouseSelectMenuItem *data;
	EHouseSelectMenuItem *data;
	EHouseSelectMenuItem *data;
	EHouseSelectMenuItem *data;
	EHouseSelectMenuItem *data;
	EHouseSelectMenuItem *data;
	EHouseSelectMenuItem *data;
	EHouseSelectMenuItem *data;
	EHouseSelectMenuItem *data;
	
  EUIObjectNode__vtable *pEVar1;
  NghResFile__0_845 *pFile;
  bool bVar2;
  NeighborhoodImpl *this_00;
  short *psVar3;
  EHouseSelectMenuItem *pEVar4;
  int *piVar5;
  long lVar6;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  int iVar7;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  HouseInfo HInfo;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
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
  
                    /* inlined from ../MSrc/neighborhoodimpl.h */
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* end of inlined section */
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from ../MSrc/neighborhoodimpl.h */
  iVar7 = Selection + 1;
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
  *(undefined4 *)&this->m_bInHouseSelectMenu = 1;
  *(undefined4 *)&this->m_bWaitForButtonUp = 1;
                    /* inlined from ../MSrc/neighborhoodimpl.h */
  HInfo.mOccupants = -1;
  HInfo.mMoveInAllowed = 0;
  HInfo.mIsTutorial = 0;
  HInfo.mHasHouse = 0;
  HInfo.mPrice = 0;
  __13StringBuffer2PUsUi
            ((StringBuffer2 *)&HInfo.mOccupantInfo,HInfo.mOccupantInfo.mName.fChars,0x80);
                    /* end of inlined section */
  this_00 = (NeighborhoodImpl *)
            (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                      ((int)&_5Globs_pNeighborhood->__vtable +
                       (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
  pFile = _5Globs_pNghResFile;
                    /* inlined from ../MSrc/neighborhoodimpl.h */
  this_00->fHouseNum = iVar7;
                    /* end of inlined section */
  GetHouseInfo__16NeighborhoodImplP10NghResFileiP9HouseInfo
            (this_00,(NghResFile__6_845 *)pFile,iVar7,&HInfo);
  if (HInfo.mHasHouse == 0) {
    HInfo.mHasHouse = 1;
  }
  if (HInfo.mOccupants < 0) {
    if (HInfo.mHasHouse == 0) {
      bVar2 = ThereAreFamiliesToMoveIn__17ENeighborhoodMode(this);
      if (bVar2) {
        psVar3 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"move_in_family");
        pEVar4 = (EHouseSelectMenuItem *)__builtin_new(0xac);
        pEVar4 = __20EHouseSelectMenuItemPCUs(pEVar4,psVar3);
        pEVar4->m_Index = 2;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_68 = 0;
        local_6c = 0;
        local_70 = 0;
                    /* end of inlined section */
        pEVar1 = (this->m_pHouseSelectMenu->field0_0x0).field0_0x0.field0_0x0.__vtable;
        (*(code *)pEVar1[2].SetBoxDims)
                  ((int)(this->m_pHouseSelectMenu->field0_0x0).field0_0x0.m_maxBackShdrSize +
                   *(short *)&pEVar1[2].SetPos + -0x44,pEVar4,&local_70);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        AddTail__9ENodeListUi(&(this->m_pHouseSelectMenu->m_itemList).field0_0x0,(uint)pEVar4);
      }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      iVar7 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                        ((int)&_5Globs_pNeighborhood->__vtable +
                         (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
      if (0xf < (uint)(*(int *)(iVar7 + 0x314) - *(int *)(iVar7 + 0x310) >> 2)) {
        return;
      }
      psVar3 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"import_house");
      pEVar4 = (EHouseSelectMenuItem *)__builtin_new(0xac);
      pEVar4 = __20EHouseSelectMenuItemPCUs(pEVar4,psVar3);
                    /* end of inlined section */
    }
    else {
      bVar2 = ThereAreFamiliesToMoveIn__17ENeighborhoodMode(this);
      if (bVar2) {
        psVar3 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"move_in_family");
        pEVar4 = (EHouseSelectMenuItem *)__builtin_new(0xac);
        pEVar4 = __20EHouseSelectMenuItemPCUs(pEVar4,psVar3);
        pEVar4->m_Index = 2;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_68 = 0;
        local_6c = 0;
        local_70 = 0;
                    /* end of inlined section */
        pEVar1 = (this->m_pHouseSelectMenu->field0_0x0).field0_0x0.field0_0x0.__vtable;
        (*(code *)pEVar1[2].SetBoxDims)
                  ((int)(this->m_pHouseSelectMenu->field0_0x0).field0_0x0.m_maxBackShdrSize +
                   *(short *)&pEVar1[2].SetPos + -0x44,pEVar4,&local_70);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        AddTail__9ENodeListUi(&(this->m_pHouseSelectMenu->m_itemList).field0_0x0,(uint)pEVar4);
      }
                    /* end of inlined section */
      psVar3 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"build_house");
      pEVar4 = (EHouseSelectMenuItem *)__builtin_new(0xac);
      pEVar4 = __20EHouseSelectMenuItemPCUs(pEVar4,psVar3);
      pEVar4->m_Index = 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_68 = 0;
      local_6c = 0;
      local_70 = 0;
                    /* end of inlined section */
      pEVar1 = (this->m_pHouseSelectMenu->field0_0x0).field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar1[2].SetBoxDims)
                ((int)(this->m_pHouseSelectMenu->field0_0x0).field0_0x0.m_maxBackShdrSize +
                 *(short *)&pEVar1[2].SetPos + -0x44,pEVar4,&local_70);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      AddTail__9ENodeListUi(&(this->m_pHouseSelectMenu->m_itemList).field0_0x0,(uint)pEVar4);
                    /* end of inlined section */
      psVar3 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"destroy_house");
      pEVar4 = (EHouseSelectMenuItem *)__builtin_new(0xac);
      pEVar4 = __20EHouseSelectMenuItemPCUs(pEVar4,psVar3);
      pEVar4->m_Index = 4;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_68 = 0;
      local_6c = 0;
      local_70 = 0;
                    /* end of inlined section */
      pEVar1 = (this->m_pHouseSelectMenu->field0_0x0).field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar1[2].SetBoxDims)
                ((int)(this->m_pHouseSelectMenu->field0_0x0).field0_0x0.m_maxBackShdrSize +
                 *(short *)&pEVar1[2].SetPos + -0x44,pEVar4,&local_70);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      AddTail__9ENodeListUi(&(this->m_pHouseSelectMenu->m_itemList).field0_0x0,(uint)pEVar4);
                    /* end of inlined section */
      iVar7 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                        ((int)&_5Globs_pNeighborhood->__vtable +
                         (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
      if (0xf < (uint)(*(int *)(iVar7 + 0x314) - *(int *)(iVar7 + 0x310) >> 2)) {
        return;
      }
      psVar3 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"import_house");
      pEVar4 = (EHouseSelectMenuItem *)__builtin_new(0xac);
      pEVar4 = __20EHouseSelectMenuItemPCUs(pEVar4,psVar3);
    }
    pEVar4->m_Index = 3;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_68 = 0;
    local_6c = 0;
    local_70 = 0;
                    /* end of inlined section */
    pEVar1 = (this->m_pHouseSelectMenu->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[2].SetBoxDims)
              ((int)(this->m_pHouseSelectMenu->field0_0x0).field0_0x0.m_maxBackShdrSize +
               *(short *)&pEVar1[2].SetPos + -0x44,pEVar4,&local_70);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    AddTail__9ENodeListUi(&(this->m_pHouseSelectMenu->m_itemList).field0_0x0,(uint)pEVar4);
                    /* end of inlined section */
  }
  else {
    psVar3 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"play_house");
    pEVar4 = (EHouseSelectMenuItem *)__builtin_new(0xac);
    pEVar4 = __20EHouseSelectMenuItemPCUs(pEVar4,psVar3);
    pEVar4->m_Index = 5;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_68 = 0;
    local_6c = 0;
    local_70 = 0;
                    /* end of inlined section */
    pEVar1 = (this->m_pHouseSelectMenu->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[2].SetBoxDims)
              ((int)(this->m_pHouseSelectMenu->field0_0x0).field0_0x0.m_maxBackShdrSize +
               *(short *)&pEVar1[2].SetPos + -0x44,pEVar4,&local_70);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    AddTail__9ENodeListUi(&(this->m_pHouseSelectMenu->m_itemList).field0_0x0,(uint)pEVar4);
                    /* end of inlined section */
    psVar3 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"evict_family");
    pEVar4 = (EHouseSelectMenuItem *)__builtin_new(0xac);
    pEVar4 = __20EHouseSelectMenuItemPCUs(pEVar4,psVar3);
    pEVar4->m_Index = 6;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_68 = 0;
    local_6c = 0;
    local_70 = 0;
                    /* end of inlined section */
    pEVar1 = (this->m_pHouseSelectMenu->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[2].SetBoxDims)
              ((int)(this->m_pHouseSelectMenu->field0_0x0).field0_0x0.m_maxBackShdrSize +
               *(short *)&pEVar1[2].SetPos + -0x44,pEVar4,&local_70);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    AddTail__9ENodeListUi(&(this->m_pHouseSelectMenu->m_itemList).field0_0x0,(uint)pEVar4);
                    /* end of inlined section */
    piVar5 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                              ((int)&_5Globs_pNeighborhood->__vtable +
                               (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                               AddFamilyHistoryStat);
    piVar5 = (int *)(**(code **)(*piVar5 + 0x134))
                              ((int)piVar5 + (int)*(short *)(*piVar5 + 0x130),iVar7);
    lVar6 = (**(code **)(*piVar5 + 0x1c))((int)piVar5 + (int)*(short *)(*piVar5 + 0x18));
    if (lVar6 < 4) {
      psVar3 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"import_sim");
      pEVar4 = (EHouseSelectMenuItem *)__builtin_new(0xac);
      pEVar4 = __20EHouseSelectMenuItemPCUs(pEVar4,psVar3);
      pEVar4->m_Index = 7;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_68 = 0;
      local_6c = 0;
      local_70 = 0;
                    /* end of inlined section */
      pEVar1 = (this->m_pHouseSelectMenu->field0_0x0).field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar1[2].SetBoxDims)
                ((int)(this->m_pHouseSelectMenu->field0_0x0).field0_0x0.m_maxBackShdrSize +
                 *(short *)&pEVar1[2].SetPos + -0x44,pEVar4,&local_70);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      AddTail__9ENodeListUi(&(this->m_pHouseSelectMenu->m_itemList).field0_0x0,(uint)pEVar4);
    }
  }
  return;
}

void ENeighborhoodMode::UpdateHouseSelectMenu() {
  EUIVirtualCtrl__vtable *pEVar1;
  EHouseSelectMenu *pEVar2;
  EUIObjectNode__vtable *pEVar3;
  long lVar4;
  
  pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar4 = (*(code *)pEVar1[1].GetBut)
                    ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,0,
                     0x10);
  if (((lVar4 == 0) &&
      (pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable,
      lVar4 = (*(code *)pEVar1[1].GetBut)
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                         1,0x10), lVar4 == 0)) && (*(int *)&this->m_bDisableHouseMenu != 1)) {
    pEVar2 = this->m_pHouseSelectMenu;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x48ae94f);
                    /* end of inlined section */
    Reset__16EHouseSelectMenu(this->m_pHouseSelectMenu);
    *(undefined4 *)&this->m_bInHouseSelectMenu = 0;
    pEVar2 = this->m_pHouseSelectMenu;
  }
  if (pEVar2 == (EHouseSelectMenu *)0x0) {
    *(undefined4 *)&this->m_bWaitForButtonUp = 0;
  }
  else if (*(int *)&this->m_bWaitForButtonUp == 1) {
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar4 = (**(code **)(pEVar1 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,0,0x40
                      );
    if (lVar4 == 1) {
      pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar4 = (**(code **)(pEVar1 + 1))
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,1,
                         0x40);
      if (lVar4 != 0) {
        *(undefined4 *)&this->m_bWaitForButtonUp = 0;
      }
    }
    else {
      *(undefined4 *)&this->m_bWaitForButtonUp = 0;
    }
  }
  else {
    pEVar3 = (pEVar2->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar3->SetBoxDims)
              ((int)(pEVar2->field0_0x0).field0_0x0.m_maxBackShdrSize +
               *(short *)&pEVar3->SetPos + -0x44);
  }
  return;
}

int ENeighborhoodMode::GetHouseSelection() {
	int i;
	int Selection;
	
  int iVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = (this->m_vPos).field0_0x0.d[0];
  pfVar2 = this->m_HouseCoords[0].field0_0x0.d + 1;
  iVar1 = 0;
  do {
    iVar3 = iVar1;
    if ((pfVar2[-1] <= fVar5) && (fVar5 <= pfVar2[-1] + 32.0)) {
      fVar4 = (this->m_vPos).field0_0x0.d[1];
      if ((*pfVar2 <= fVar4) && (fVar4 <= *pfVar2 + 32.0)) break;
    }
    iVar1 = iVar3 + 1;
    pfVar2 = pfVar2 + 2;
    iVar3 = -2;
  } while (iVar1 < 8);
  iVar1 = -1;
  if (iVar3 != -2) {
    iVar1 = iVar3;
  }
  return iVar1;
}

void ENeighborhoodMode::UpdateCursorPos() {
	EVec3 P1;
	EVec3 P2;
	EVec2 Target;
	float TargetAngle;
	EVec2 *this;
	EVec2 DeltaVec;
	float DeltaAngle;
	EVec2 &v;
	EVec3 &v;
	
  undefined *puVar1;
  uint uVar2;
  Neighborhood__vtable *pNVar3;
  uint uVar4;
  ulong *puVar5;
  Neighborhood *pNVar6;
  int iVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  EVec2 Target;
  EVec2 DeltaVec;
  
  pNVar6 = _5Globs_pNeighborhood;
  if (*(int *)&this->m_SelectionTargetInitialized == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    *(undefined4 *)&this->m_SelectionTargetInitialized = 1;
    pNVar3 = pNVar6->__vtable;
    iVar7 = (*(code *)pNVar3[1].GetImpl)
                      ((int)&pNVar6->__vtable + (int)*(short *)&pNVar3[1].AddFamilyHistoryStat);
    if (*(short *)(iVar7 + 0x2e6) == 1) {
      iVar7 = 7;
    }
    else {
      iVar7 = _globals.m_NeighborhoodHouseNum + -1;
    }
    this->m_CurrentTargetHouse = iVar7;
    this->m_LastTargetCameraAngle = this->m_CameraAngle;
    puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    uVar2 = (uint)&this->m_vPos & 7;
    uVar8 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
            (long)iVar7 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar2) * 8 |
            *(ulong *)((int)&this->m_vPos - uVar2) >> uVar2 * 8;
    puVar1 = (undefined *)((int)&(this->m_LastTargetPos).field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar8 >> (7 - uVar4) * 8;
    uVar4 = (uint)&this->m_LastTargetPos & 7;
    puVar5 = (ulong *)((int)&this->m_LastTargetPos - uVar4);
    *puVar5 = uVar8 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    this->m_CumulativeTime = 0.0;
  }
  else {
    iVar7 = this->m_CurrentTargetHouse;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    fVar12 = this->m_CumulativeTime + _dt;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    fVar11 = this->m_HouseCoords[iVar7].field0_0x0.d[0] + 16.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    fVar9 = this->m_HouseCoords[iVar7].field0_0x0.d[1] + 16.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    fVar13 = this->m_HouseViewDir[iVar7] * 0.01745329;
    this->m_CumulativeTime = fVar12;
    if ((1.0 <= fVar12) || (*(int *)&this->m_bNeighborhoodIsChallengeMode != 0)) {
                    /* end of inlined section */
      *(undefined4 *)&this->m_bDisableHouseMenu = 0;
      uVar8 = CONCAT44(fVar9,fVar11);
      puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar8 >> (7 - uVar4) * 8;
      uVar4 = (uint)&this->m_vPos & 7;
      puVar5 = (ulong *)((int)&this->m_vPos - uVar4);
      *puVar5 = uVar8 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      (this->m_vPos).field0_0x0.d[2] = 0.0;
      this->m_CameraAngle = fVar13;
    }
    else {
                    /* inlined from /eor/src2/common/math/e_math.h */
      fVar10 = (this->m_LastTargetPos).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      fVar12 = fVar12 * -2.0 * fVar12 * fVar12 + fVar12 * 3.0 * fVar12;
                    /* end of inlined section */
      uVar8 = CONCAT44((this->m_LastTargetPos).field0_0x0.d[1] +
                       (fVar9 - (this->m_LastTargetPos).field0_0x0.d[1]) * fVar12,
                       fVar10 + (fVar11 - fVar10) * fVar12);
      puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar8 >> (7 - uVar4) * 8;
      uVar4 = (uint)&this->m_vPos & 7;
      puVar5 = (ulong *)((int)&this->m_vPos - uVar4);
      *puVar5 = uVar8 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      (this->m_vPos).field0_0x0.d[2] = 0.0;
      fVar13 = fVar13 - this->m_LastTargetCameraAngle;
      if (3.141593 < fVar13) {
        fVar13 = fVar13 - 6.283185;
      }
      if (fVar13 < -3.141593) {
        fVar13 = fVar13 + 6.283185;
      }
      *(undefined4 *)&this->m_bDisableHouseMenu = 1;
      this->m_CameraAngle = this->m_LastTargetCameraAngle + fVar13 * fVar12;
    }
  }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar13 = (this->m_vPos).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar9 = (this->m_vPos).field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->m_vTargetPos).field0_0x0.d[2] = 0.01;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->m_vTargetPos).field0_0x0.d[0] = fVar13;
  (this->m_vTargetPos).field0_0x0.d[1] = fVar9;
  return;
}

void ENeighborhoodMode::Draw(ERC *prc) {
  EGlobalManagerClient__vtable *pEVar1;
  int iVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
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
  
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  if (*(int *)this->m_pCharedMode != 0) {
    if (_globals._436_4_ == 1) {
      pEVar1 = (_pGfx->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_50 = 0;
      local_4c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_48 = 0;
                    /* end of inlined section */
      (*(code *)pEVar1[4].EGlobalManagerClient)
                ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 4),&local_50,1);
      iVar2 = this->m_NeighborhoodSubmode;
    }
    else {
      iVar2 = this->m_NeighborhoodSubmode;
    }
    if (iVar2 == 1) {
      DrawHouseSel__17ENeighborhoodModeP3ERC(this,prc);
      iVar2 = this->m_NeighborhoodSubmode;
    }
    else if (iVar2 < 2) {
      if (iVar2 == 0) {
        DrawHoodSel__17ENeighborhoodModeP3ERC(this,prc);
        iVar2 = this->m_NeighborhoodSubmode;
      }
      else {
        iVar2 = this->m_NeighborhoodSubmode;
      }
    }
    else if (iVar2 == 2) {
      DrawLoadMode__17ENeighborhoodModeP3ERC(this,prc);
      iVar2 = this->m_NeighborhoodSubmode;
    }
    else if (iVar2 == 3) {
      DrawOptionsMode__17ENeighborhoodModeP3ERC(this,prc);
      iVar2 = this->m_NeighborhoodSubmode;
    }
    else {
      iVar2 = this->m_NeighborhoodSubmode;
    }
    this->m_DrawSubmode = iVar2;
  }
  return;
}

void ENeighborhoodMode::DrawHoodSel(ERC *prc) {
  Draw__18EGameMenuMainPanelP3ERC(&this->m_MainMenu,prc);
  return;
}

void ENeighborhoodMode::DrawHouseSel(ERC *prc) {
	EVec3 _lightpos;
	float _amb;
	float _dir;
	float _dir2;
	EVec3 _ambColor;
	EVec3 _dirColor;
	EVec3 _dir2Color;
	ELights2 *_pLights;
	EVec3 Up;
	ERC *this;
	float scaler;
	float scaler;
	float scaler;
	ELights *pLights;
	float scaler;
	float scaler;
	float scaler;
	EMat4 Mat;
	float scaler;
	float scaler;
	float scaler;
	int i;
	
  undefined *puVar1;
  bool bVar2;
  ERLevel *pEVar3;
  EWindow__vtable *pEVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  int iVar8;
  ELights *pEVar9;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  EVec3 _lightpos;
  EVec3 _ambColor;
  EVec3 _dirColor;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  EVec3 _dir2Color;
  EVec3 Up;
  EMat4 Mat;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
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
  
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (*(int *)&this->m_bNeighborhoodIsChallengeMode == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    iVar8 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                      ((int)&_5Globs_pNeighborhood->__vtable +
                       (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    if (*(short *)(iVar8 + 0x2e6) == 1) {
      if (*(int *)&this->m_bGetNeighborhoodName == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        iVar8 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        if ((*(short *)(iVar8 + 0x2e8) == 0) && (this->m_StoryModeTransitionStateNum == 1)) {
          Draw__11ECharedModeP3ERC(this->m_pCharedMode,prc);
          return;
        }
        Select__8ERShaderP3ERCi(_globals.m_pBlackShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        _lightpos.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        _lightpos.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        _ambColor.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        _ambColor.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        _dirColor.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        _dirColor.field0_0x0.d[1] = 1.0;
        local_130 = 0x3f800000;
        local_12c = 0;
        local_114 = 0x3f800000;
        local_118 = 0x3f800000;
        local_11c = 0x3f800000;
        local_120 = 0x3f800000;
                    /* end of inlined section */
        (*(code *)prc->__vtable[1].DisplayList)
                  (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&_lightpos,
                   &_ambColor,&_dirColor,&local_130,&local_120);
        return;
      }
      iVar8 = this->m_CreateAFamilyMode;
    }
    else {
      iVar8 = this->m_CreateAFamilyMode;
    }
    if (iVar8 == 2) {
      DrawCreateAFamilyStage2__17ENeighborhoodModeP3ERC(this,prc);
    }
    else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
      _lightpos.field0_0x0.d[0] = -0.43089;
      _lightpos.field0_0x0.d[1] = -0.29153;
      _lightpos.field0_0x0.d[2] = -0.65401;
      _ambColor.field0_0x0.d[1] = 1.0;
      _ambColor.field0_0x0.d[2] = 1.0;
      _ambColor.field0_0x0.d[0] = 1.0;
      _dirColor.field0_0x0.d[1] = 1.0;
      _dirColor.field0_0x0.d[2] = 1.0;
      _dirColor.field0_0x0.d[0] = 1.0;
      _dir2Color.field0_0x0.d[1] = 1.0;
      _dir2Color.field0_0x0.d[2] = 1.0;
      _dir2Color.field0_0x0.d[0] = 1.0;
      pEVar9 = (ELights *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x50,0x10);
                    /* end of inlined section */
      fVar13 = 0.4;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      fVar14 = 0.35;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar7 = CONCAT44(_ambColor.field0_0x0.d[1] * 0.4,_ambColor.field0_0x0.d[0] * 0.4);
      puVar1 = (undefined *)((int)&(pEVar9->a).vColor.field0_0x0 + 7);
      uVar5 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar5);
      *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar7 >> (7 - uVar5) * 8;
      uVar5 = (uint)pEVar9 & 7;
      *(ulong *)((int)pEVar9 - uVar5) =
           uVar7 << uVar5 * 8 |
           *(ulong *)((int)pEVar9 - uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
      (pEVar9->a).vColor.field0_0x0.d[2] = _ambColor.field0_0x0.d[2] * 0.4;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      puVar1 = (undefined *)((int)&pEVar9[1].a.vColor.field0_0x0 + 7);
      uVar5 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar5);
      *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
                CONCAT44(_dirColor.field0_0x0.d[1],_dirColor.field0_0x0.d[0]) >> (7 - uVar5) * 8;
      uVar5 = (uint)(pEVar9 + 1) & 7;
      puVar6 = (ulong *)((int)(pEVar9 + 1) - uVar5);
      *puVar6 = CONCAT44(_dirColor.field0_0x0.d[1],_dirColor.field0_0x0.d[0]) << uVar5 * 8 |
                *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
      pEVar9[1].a.vColor.field0_0x0.d[2] = _dirColor.field0_0x0.d[2];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      Up.field0_0x0.d[0] = _dir2Color.field0_0x0.d[0] * 0.35;
      Up.field0_0x0.d[1] = _dir2Color.field0_0x0.d[1] * 0.35;
      Up.field0_0x0.d[2] = _dir2Color.field0_0x0.d[2] * 0.35;
                    /* end of inlined section */
      puVar1 = (undefined *)((int)&pEVar9[3].a.vColor.field0_0x0 + 7);
      uVar5 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar5);
      *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
                CONCAT44(Up.field0_0x0.d[1],Up.field0_0x0.d[0]) >> (7 - uVar5) * 8;
      uVar5 = (uint)(pEVar9 + 3) & 7;
      puVar6 = (ulong *)((int)(pEVar9 + 3) - uVar5);
      *puVar6 = CONCAT44(Up.field0_0x0.d[1],Up.field0_0x0.d[0]) << uVar5 * 8 |
                *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
      pEVar9[3].a.vColor.field0_0x0.d[2] = Up.field0_0x0.d[2];
      puVar1 = (undefined *)((int)&pEVar9[2].a.vColor.field0_0x0 + 7);
      uVar5 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar5);
      *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
                CONCAT44(_lightpos.field0_0x0.d[1],_lightpos.field0_0x0.d[0]) >> (7 - uVar5) * 8;
      uVar5 = (uint)(pEVar9 + 2) & 7;
      puVar6 = (ulong *)((int)(pEVar9 + 2) - uVar5);
      *puVar6 = CONCAT44(_lightpos.field0_0x0.d[1],_lightpos.field0_0x0.d[0]) << uVar5 * 8 |
                *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
      pEVar9[2].a.vColor.field0_0x0.d[2] = _lightpos.field0_0x0.d[2];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar11 = pEVar9[2].a.vColor.field0_0x0.d[0];
      fVar10 = pEVar9[2].a.vColor.field0_0x0.d[1];
      fVar12 = pEVar9[2].a.vColor.field0_0x0.d[2];
      fVar10 = sqrtf(fVar11 * fVar11 + fVar10 * fVar10 + fVar12 * fVar12);
      if (fVar10 == 0.0) {
        pEVar3 = this->m_pLevel;
      }
      else {
        fVar10 = 1.0 / fVar10;
        pEVar9[2].a.vColor.field0_0x0.d[0] = pEVar9[2].a.vColor.field0_0x0.d[0] * fVar10;
        fVar11 = pEVar9[2].a.vColor.field0_0x0.d[2];
        pEVar9[2].a.vColor.field0_0x0.d[1] = pEVar9[2].a.vColor.field0_0x0.d[1] * fVar10;
        pEVar9[2].a.vColor.field0_0x0.d[2] = fVar11 * fVar10;
                    /* end of inlined section */
        pEVar3 = this->m_pLevel;
      }
      if (pEVar3 != (ERLevel *)0x0) {
                    /* inlined from /eor/src2/engine/level/e_rlevel.h */
        pEVar3->m_pLights = pEVar9;
        pEVar3->m_nDirLights = 1;
      }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar7 = CONCAT44(_ambColor.field0_0x0.d[1] * fVar13,_ambColor.field0_0x0.d[0] * fVar13);
      puVar1 = (undefined *)((int)&(pEVar9->a).vColor.field0_0x0 + 7);
      uVar5 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar5);
      *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar7 >> (7 - uVar5) * 8;
      uVar5 = (uint)pEVar9 & 7;
      *(ulong *)((int)pEVar9 - uVar5) =
           uVar7 << uVar5 * 8 |
           *(ulong *)((int)pEVar9 - uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
      (pEVar9->a).vColor.field0_0x0.d[2] = _ambColor.field0_0x0.d[2] * fVar13;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar7 = CONCAT44(_dirColor.field0_0x0.d[1] * 0.7,_dirColor.field0_0x0.d[0] * 0.7);
      puVar1 = (undefined *)((int)&pEVar9[1].a.vColor.field0_0x0 + 7);
      uVar5 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar5);
      *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar7 >> (7 - uVar5) * 8;
      uVar5 = (uint)(pEVar9 + 1) & 7;
      puVar6 = (ulong *)((int)(pEVar9 + 1) - uVar5);
      *puVar6 = uVar7 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
      pEVar9[1].a.vColor.field0_0x0.d[2] = _dirColor.field0_0x0.d[2] * 0.7;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      Up.field0_0x0.d[0] = _dir2Color.field0_0x0.d[0] * fVar14;
      Up.field0_0x0.d[1] = _dir2Color.field0_0x0.d[1] * fVar14;
      Up.field0_0x0.d[2] = _dir2Color.field0_0x0.d[2] * fVar14;
                    /* end of inlined section */
      puVar1 = (undefined *)((int)&pEVar9[3].a.vColor.field0_0x0 + 7);
      uVar5 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar5);
      *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
                CONCAT44(Up.field0_0x0.d[1],Up.field0_0x0.d[0]) >> (7 - uVar5) * 8;
      uVar5 = (uint)(pEVar9 + 3) & 7;
      puVar6 = (ulong *)((int)(pEVar9 + 3) - uVar5);
      *puVar6 = CONCAT44(Up.field0_0x0.d[1],Up.field0_0x0.d[0]) << uVar5 * 8 |
                *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
      pEVar9[3].a.vColor.field0_0x0.d[2] = Up.field0_0x0.d[2];
      (*(code *)prc->__vtable[1].LineList)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,pEVar9,1);
      Up.field0_0x0.d[1] = 0.0;
      Up.field0_0x0.d[0] = 0.0;
      Up.field0_0x0.d[2] = 1.0;
      pEVar4 = (this->m_pWin->field0_0x0).field0_0x0.__vtable;
      (*(code *)pEVar4[2].Cast3DWindow)
                ((int)&(this->m_pWin->field0_0x0).field0_0x0.m_mWindow.field0_0x0 +
                 (int)*(short *)&pEVar4[2].SetRenderSurface,&this->m_vCameraPos,
                 &this->m_vCameraTarget,&Up);
      pEVar4 = (this->m_pWin->field0_0x0).field0_0x0.__vtable;
      (*(code *)pEVar4->OutputCoordinatesChanged)
                ((int)&(this->m_pWin->field0_0x0).field0_0x0.m_mWindow.field0_0x0 +
                 (int)*(short *)&pEVar4->InputCoordinatesChanged,prc);
      (*(code *)prc->__vtable[1].DisableGeometryModes)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].EnableGeometryModes,1,2,0,0);
      (*(code *)prc->__vtable[1].EnableRasterModes)
                (0x3f000000,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SetGeometryModes,1,5
                 ,0);
      (*(code *)prc->__vtable->Init)((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->LoadMPG,0,0);
      (*(code *)prc->__vtable->ZTest)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->RecalcMatrices);
      if (this->m_pLevel == (ERLevel *)0x0) {
        Select__8ERShaderP3ERCi(_globals.m_pBlackShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        Mat.field0_0x0.d[0][1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        Mat.field0_0x0.d[0][0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        Mat.field0_0x0.d[1][1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        Mat.field0_0x0.d[1][0] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        Mat.field0_0x0.d[2][0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        Mat.field0_0x0.d[2][1] = 1.0;
        Mat.field0_0x0.d[3][0] = 1.0;
        Mat.field0_0x0.d[3][1] = 0.0;
        local_b0 = 0x3f800000;
        local_a4 = 0x3f800000;
        local_ac = 0x3f800000;
        local_a8 = 0x3f800000;
                    /* end of inlined section */
        (*(code *)prc->__vtable[1].DisplayList)
                  (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&Mat,
                   (undefined *)((int)&Mat.field0_0x0 + 0x10),
                   (undefined *)((int)&Mat.field0_0x0 + 0x20),
                   (undefined *)((int)&Mat.field0_0x0 + 0x30),&local_b0);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      }
      else {
        Draw__7ERLevelP3ERCUii(this->m_pLevel,prc,4,0);
        Draw__12EParticleManP3ERC(&_pclman,prc);
        Id__5EMat4(&Mat);
        Draw__15EAnimControllerP3ERCP7ERModelRC5EMat4Ui(this->m_AC,prc,this->m_pCarsModel,&Mat,5);
      }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar7 = CONCAT44(_ambColor.field0_0x0.d[1] * 0.4,_ambColor.field0_0x0.d[0] * 0.4);
      puVar1 = (undefined *)((int)&(pEVar9->a).vColor.field0_0x0 + 7);
      uVar5 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar5);
      *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar7 >> (7 - uVar5) * 8;
      uVar5 = (uint)pEVar9 & 7;
      *(ulong *)((int)pEVar9 - uVar5) =
           uVar7 << uVar5 * 8 |
           *(ulong *)((int)pEVar9 - uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
      (pEVar9->a).vColor.field0_0x0.d[2] = _ambColor.field0_0x0.d[2] * 0.4;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar7 = CONCAT44(_dirColor.field0_0x0.d[1] * 0.7,_dirColor.field0_0x0.d[0] * 0.7);
      puVar1 = (undefined *)((int)&pEVar9[1].a.vColor.field0_0x0 + 7);
      uVar5 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar5);
      *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar7 >> (7 - uVar5) * 8;
      uVar5 = (uint)(pEVar9 + 1) & 7;
      puVar6 = (ulong *)((int)(pEVar9 + 1) - uVar5);
      *puVar6 = uVar7 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
      pEVar9[1].a.vColor.field0_0x0.d[2] = _dirColor.field0_0x0.d[2] * 0.7;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      Mat.field0_0x0.d[0][0] = _dir2Color.field0_0x0.d[0] * 0.35;
      Mat.field0_0x0.d[0][1] = _dir2Color.field0_0x0.d[1] * 0.35;
      Mat.field0_0x0.d[0][2] = _dir2Color.field0_0x0.d[2] * 0.35;
                    /* end of inlined section */
      puVar1 = (undefined *)((int)&pEVar9[3].a.vColor.field0_0x0 + 7);
      uVar5 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar5);
      *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
                CONCAT44(Mat.field0_0x0.d[0][1],Mat.field0_0x0.d[0][0]) >> (7 - uVar5) * 8;
      uVar5 = (uint)(pEVar9 + 3) & 7;
      puVar6 = (ulong *)((int)(pEVar9 + 3) - uVar5);
      *puVar6 = CONCAT44(Mat.field0_0x0.d[0][1],Mat.field0_0x0.d[0][0]) << uVar5 * 8 |
                *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
      pEVar9[3].a.vColor.field0_0x0.d[2] = Mat.field0_0x0.d[0][2];
      (*(code *)prc->__vtable[1].LineList)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,pEVar9,1);
      (*(code *)prc->__vtable->EndCommand)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->BeginCommand,1);
      iVar8 = 6;
      do {
        bVar2 = -1 < iVar8;
        iVar8 = iVar8 + -1;
      } while (bVar2);
      DrawCursor__17ENeighborhoodModeP3ERC(this,prc);
      DrawHoodBasicUI__17ENeighborhoodModeP3ERC(this,prc);
      if (this->m_CreateAFamilyMode == 1) {
        DrawCreateAFamilyStage1__17ENeighborhoodModeP3ERC(this,prc);
      }
      else {
        if (*(int *)&this->m_bImportActive == 1) {
          DrawImport__17ENeighborhoodModeP3ERC(this,prc);
          iVar8 = *(int *)&this->m_bImportSimActive;
        }
        else {
          iVar8 = *(int *)&this->m_bImportSimActive;
        }
        if (iVar8 == 1) {
          DrawImportSim__17ENeighborhoodModeP3ERC(this,prc);
          iVar8 = *(int *)&this->m_bGetNeighborhoodName;
        }
        else {
          iVar8 = *(int *)&this->m_bGetNeighborhoodName;
        }
        if (iVar8 == 1) {
          DrawGetNeighborhoodName__17ENeighborhoodModeP3ERC(this,prc);
        }
      }
    }
  }
  else {
    DrawChallengeModeSetup__17ENeighborhoodModeP3ERC(this,prc);
  }
  return;
}

void ENeighborhoodMode::DrawHoodBasicUI(ERC *prc) {
	StackString2<128> Buffer;
	StackString2<2> Space;
	EVec2 Dimensions;
	EVec2 Pos;
	int Selection;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	
  ERFont *pEVar1;
  EUIObjectNode__vtable *pEVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  short *psVar7;
  EFontSize *pEVar8;
  float fVar9;
  float fVar10;
  StackString2_2_ Space;
  EVec2 Dimensions;
  EVec2 Pos;
  EFontSize *local_220;
  float local_21c;
  int local_210;
  float local_20c;
  EHashTableNode *local_208;
  EHashTableNode *local_204;
  EFontSize *local_200;
  uint local_1fc;
  EFontSize *local_1f0;
  undefined4 local_1ec;
  EFontSize *local_1e0;
  EFontSize *local_1dc;
  EFontSize *local_1d8;
  EFontSize *local_1d4;
  StackString2_128_ Buffer;
  
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  pEVar8 = (EFontSize *)0x3f800000;
  fVar10 = 0.125;
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(this->m_pBlankShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  Space.field0_0x0.fMem = (short *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  Space.field0_0x0.fCapacity = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  Dimensions.field0_0x0.d[1] = 0.115;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  Pos.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_21c = 0.0;
  local_210 = 0;
  local_208 = (EHashTableNode *)0x3f2b851f;
  local_204 = (EHashTableNode *)0x3ea8f5c3;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar9 = 82.5;
  Dimensions.field0_0x0.d[0] = (float)pEVar8;
  Pos.field0_0x0.d[1] = (float)pEVar8;
  local_220 = pEVar8;
  local_20c = fVar10;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&Space,&Dimensions,
             &Pos,(EVec2 *)&local_220,&local_210);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(this->m_pMenuBevelBottomShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  Space.field0_0x0.fCapacity = 0x3de76c8b;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  Space.field0_0x0.fMem = (short *)0x0;
  Dimensions.field0_0x0.d[1] = 0.446477;
                    /* end of inlined section */
  Dimensions.field0_0x0.d[0] = fVar9;
  Pos.field0_0x0._0_4_ = pEVar8;
  Pos.field0_0x0._4_4_ = pEVar8;
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&Space,&Dimensions,&Pos
            );
  Select__8ERShaderP3ERCi(this->m_pTitleBgCenterShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  Dimensions.field0_0x0.d[0] = 14.2;
  Space.field0_0x0.fMem = (short *)0x3e19999a;
  Space.field0_0x0.fCapacity = 0x3d0ff972;
                    /* end of inlined section */
  Dimensions.field0_0x0.d[1] = (float)pEVar8;
  Pos.field0_0x0.d[0] = (float)pEVar8;
  Pos.field0_0x0._4_4_ = pEVar8;
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&Space,&Dimensions,&Pos
            );
  Select__8ERShaderP3ERCi(this->m_pTitleBgLeftShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  Space.field0_0x0.fMem = (short *)0x3dcccccd;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  Space.field0_0x0.fCapacity = 0x3d0ff972;
                    /* end of inlined section */
  Dimensions.field0_0x0._0_4_ = pEVar8;
  Dimensions.field0_0x0._4_4_ = pEVar8;
  Pos.field0_0x0._0_4_ = pEVar8;
  Pos.field0_0x0._4_4_ = pEVar8;
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&Space,&Dimensions,&Pos
            );
  Select__8ERShaderP3ERCi(this->m_pTitleBgRightShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  Space.field0_0x0.fMem = (short *)0x3f5c28f6;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  Space.field0_0x0.fCapacity = 0x3d0ff972;
                    /* end of inlined section */
  Dimensions.field0_0x0.d[0] = (float)pEVar8;
  Dimensions.field0_0x0.d[1] = (float)pEVar8;
  Pos.field0_0x0._0_4_ = pEVar8;
  Pos.field0_0x0._4_4_ = pEVar8;
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&Space,&Dimensions,&Pos
            );
  if (*(int *)&this->m_bGetNeighborhoodName == 1) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    Select__8ERShaderP3ERCi(this->m_pBlankShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    Space.field0_0x0.fMem = (short *)0x3e3126e9;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    Space.field0_0x0.fCapacity = 0x3f553f7d;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    Pos.field0_0x0.d[0] = 0.0;
    local_1fc = 0;
                    /* end of inlined section */
    Dimensions.field0_0x0._0_4_ = pEVar8;
    Dimensions.field0_0x0._4_4_ = pEVar8;
    Pos.field0_0x0._4_4_ = pEVar8;
    local_200 = pEVar8;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&Space,&Dimensions,
               &Pos,&local_200,0x35f4b0);
    Select__8ERShaderP3ERCi(this->m_pMenuBevelShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    Space.field0_0x0.fMem = (short *)0x3e374bc7;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    Space.field0_0x0.fCapacity = 0x3f553f7d;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    Dimensions.field0_0x0.d[1] = 0.843;
    Pos.field0_0x0.d[0] = 0.0;
    local_1ec = 0;
                    /* end of inlined section */
    Dimensions.field0_0x0.d[0] = (float)pEVar8;
    Pos.field0_0x0.d[1] = (float)pEVar8;
    local_1f0 = pEVar8;
    local_1e0 = pEVar8;
    local_1dc = pEVar8;
    local_1d8 = pEVar8;
    local_1d4 = pEVar8;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&Space,&Dimensions,
               &Pos,&local_1f0,&local_1e0);
    DrawDpadWin__17ENeighborhoodModeP3ERC(this,prc);
  }
  else {
    Select__8ERShaderP3ERCi(this->m_pBlankShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    Space.field0_0x0.fCapacity = 0x3f5ddb55;
    Space.field0_0x0.fMem = (short *)0x0;
    Dimensions.field0_0x0.d[1] = 14.0;
    Pos.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
    Dimensions.field0_0x0.d[0] = fVar9;
    Pos.field0_0x0.d[1] = fVar10;
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&Space,&Dimensions,
               &Pos);
    Select__8ERShaderP3ERCi(this->m_pMenuBevelShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    Space.field0_0x0.fCapacity = 0x3f5ced91;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    Space.field0_0x0.fMem = (short *)0x0;
    Dimensions.field0_0x0.d[1] = 0.446477;
                    /* end of inlined section */
    Dimensions.field0_0x0.d[0] = fVar9;
    Pos.field0_0x0.d[0] = (float)pEVar8;
    Pos.field0_0x0.d[1] = (float)pEVar8;
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&Space,&Dimensions,
               &Pos);
                    /* inlined from ../MSrc/stringbuffer2.h */
  }
  __13StringBuffer2PUsUi(&Buffer.field0_0x0,Buffer.fChars,0x80);
  __13StringBuffer2PUsUi(&Space.field0_0x0,(short *)((uint)&Space | 8),2);
                    /* end of inlined section */
  assignDebug__13StringBuffer2PCc(&Space.field0_0x0," ");
  erase__13StringBuffer2(&Buffer.field0_0x0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  iVar6 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                    ((int)&_5Globs_pNeighborhood->__vtable +
                     (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
  psVar7 = c_str__C13StringBuffer2((StringBuffer2 *)(iVar6 + 0x110));
  append__13StringBuffer2PCUsi(&Buffer.field0_0x0,psVar7,-1);
  psVar7 = c_str__C13StringBuffer2(&Space.field0_0x0);
  append__13StringBuffer2PCUsi(&Buffer.field0_0x0,psVar7,-1);
  psVar7 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"title");
  append__13StringBuffer2PCUsi(&Buffer.field0_0x0,psVar7,-1);
  SetSize__6ERFontffb(this->m_pFont,18.0,1.0,true);
  uVar5 = _WHITE.field0_0x0.d[3];
  uVar4 = _WHITE.field0_0x0.d[2];
  uVar3 = _WHITE.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  pEVar1 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  (pEVar1->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (pEVar1->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar3 >> 0x20);
  (pEVar1->m_vColor).field0_0x0.d[2] = uVar4;
  (pEVar1->m_vColor).field0_0x0.d[3] = uVar5;
                    /* end of inlined section */
  Select__6ERFontP3ERC(this->m_pFont,prc);
  pEVar1 = _globals.m_pFont;
  psVar7 = c_str__C13StringBuffer2(&Buffer.field0_0x0);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&Dimensions,pEVar1,SUB41(psVar7,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  Pos.field0_0x0.d[1] = 0.05;
  Pos.field0_0x0.d[0] = 0.5 - Dimensions.field0_0x0.d[0] * 0.5;
  psVar7 = c_str__C13StringBuffer2(&Buffer.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_220 = (EFontSize *)Pos.field0_0x0.d[0];
  local_21c = Pos.field0_0x0.d[1];
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this->m_pFont,prc,psVar7,true,(EVec2 *)&local_220,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
  if (this->m_DrawButtonDescLevel == 2) {
    Draw__10EPromptBarP3ERC(&this->m_PromptsBarDescLevel2,prc);
    iVar6 = this->m_DrawButtonDescLevel;
  }
  else {
    iVar6 = this->m_DrawButtonDescLevel;
  }
  if ((iVar6 == 1) || (*(int *)&this->m_bGetNeighborhoodName == 1)) {
    Draw__10EPromptBarP3ERC(&this->m_PromptsBarDescLevel1,prc);
    iVar6 = this->m_CreateAFamilyMode;
  }
  else {
    iVar6 = this->m_CreateAFamilyMode;
  }
  if ((iVar6 == 1) && (*(int *)&this->m_bQueryDelete == 0)) {
    Draw__10EPromptBarP3ERC(&this->m_FamilySelectBar,prc);
  }
  iVar6 = GetHouseSelection__17ENeighborhoodMode(this);
  if (iVar6 < 0) {
    this->m_Alpha = 0.0;
  }
  else if (*(int *)&this->m_bEvictFamilyOrDestroyHouse == 0) {
    if (*(int *)&this->m_bMoveIn == 0) {
      if (this->m_CreateAFamilyMode == 0) {
        if (this->m_ImportMode == 0) {
          if (this->m_ImportSimMode == 0) {
            if (*(int *)&this->m_bGetNeighborhoodName == 0) {
              if (*(long *)&this->m_bExitScreen == 0) {
                DrawHouseDesc__17ENeighborhoodModeP3ERCi(this,prc,iVar6);
                iVar6 = *(int *)&this->m_bInHouseSelectMenu;
                goto LAB_0018df2c;
              }
              this->m_Alpha = 0.0;
            }
            else {
              this->m_Alpha = 0.0;
            }
          }
          else {
            this->m_Alpha = 0.0;
          }
        }
        else {
          this->m_Alpha = 0.0;
        }
      }
      else {
        this->m_Alpha = 0.0;
      }
    }
    else {
      this->m_Alpha = 0.0;
    }
  }
  else {
    this->m_Alpha = 0.0;
  }
  iVar6 = *(int *)&this->m_bInHouseSelectMenu;
LAB_0018df2c:
  if (iVar6 != 0) {
    pEVar2 = (this->m_pHouseSelectMenu->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar2->Message)
              ((int)(this->m_pHouseSelectMenu->field0_0x0).field0_0x0.m_maxBackShdrSize +
               *(short *)&pEVar2->SetBoxDims + -0x44,prc);
  }
  if (*(int *)&this->m_bEvictFamilyOrDestroyHouse == 1) {
    if (*(int *)&this->m_bInHouseSelectMenu == 1) {
      Reset__16EHouseSelectMenu(this->m_pHouseSelectMenu);
      *(undefined4 *)&this->m_bInHouseSelectMenu = 0;
    }
    DrawEvictFamilyOrHouse__17ENeighborhoodModeP3ERC(this,prc);
    iVar6 = *(int *)&this->m_bMoveIn;
  }
  else {
    iVar6 = *(int *)&this->m_bMoveIn;
  }
  if (iVar6 == 0) {
    iVar6 = *(int *)&this->m_bExitScreen;
  }
  else {
    Draw__13EFamilySelectP3ERC(this->m_pSelectFamilyMenu,prc);
    iVar6 = *(int *)&this->m_bExitScreen;
  }
  if (iVar6 != 0) {
    DrawExitScreen__17ENeighborhoodModeP3ERC(this,prc);
  }
  if (*(int *)&this->m_bSaveScreen != 0) {
    DrawSaveScreen__17ENeighborhoodModeP3ERC(this,prc);
  }
                    /* end of inlined section */
  return;
}

void ENeighborhoodMode::DrawHouseDesc(ERC *prc, int Selection) {
	EVec2 Offset;
	NeighborhoodImpl *NH;
	float Alpha;
	HouseInfo HInfo;
	c16 *string;
	StringBufW255 StString;
	StringBufW255 StString2;
	short unsigned int Buffer[128];
	EVec2 Pos;
	EVec4 Color;
	NeighborhoodImpl *this;
	int HouseNum;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	EVec2 *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	EVec4 vRed;
	static int _0 = 0;
	static int _1 = 1;
	static float piPromtTime = 0.f;
	EVec4 *color[2];
	EVec2 vPos;
	int t;
	int i;
	int value;
	int value;
	int value;
	
  undefined *puVar1;
  short sVar2;
  ERFont *pEVar3;
  ERC__vtable *pEVar4;
  ERShader *this_00;
  uint uVar5;
  ulong *puVar6;
  EVec4__null___1__1 *pEVar7;
  EVec4__null___1__1 *pEVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  NghResFile__0_845 *pFile;
  NeighborhoodImpl *this_01;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  int *piVar15;
  EVec4 *pEVar16;
  char *pRef;
  EVec4 *pEVar17;
  EVec4 *pEVar18;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  int iVar19;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar20;
  float aspect;
  undefined4 uVar21;
  EVec2 Offset;
  HouseInfo HInfo;
  StackString2_256_ StString;
  StackString2_256_ StString2;
  short Buffer [128];
  EVec2 Pos;
  EVec4 Color;
  EVec4 vRed;
  EVec4 *color [2];
  float local_250;
  float local_24c;
  EVec2 vPos;
  float local_230;
  float local_22c;
  float local_220;
  float local_21c;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_200;
  float local_1fc;
  float local_1f0;
  float local_1ec;
  float local_1e0;
  float local_1dc;
  undefined4 local_1d0;
  float local_1cc;
  undefined4 local_1c0;
  float local_1bc;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a0;
  undefined4 local_19c;
  float local_190;
  float local_18c;
  undefined4 local_180;
  float local_17c;
  undefined4 local_170;
  float local_16c;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_150 [4];
  undefined4 local_140;
  float local_13c;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_120 [4];
  undefined4 local_110 [4];
  undefined4 *local_100;
  undefined4 *local_fc;
  undefined4 *local_f8;
  undefined4 *local_f4;
  undefined4 *local_f0;
  undefined4 *local_ec;
  undefined4 *local_e8;
  undefined4 *local_e4;
  undefined4 *local_e0;
  undefined4 *local_dc;
  undefined4 *local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
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
  
  local_90 = (undefined4)unaff_s4;
  uStack_8c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_a0 = (undefined4)unaff_s3;
  uStack_9c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_d0 = (undefined4)unaff_s0;
  uStack_cc = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s8;
  uStack_4c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_60 = (undefined4)unaff_s7;
  uStack_5c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_70 = (undefined4)unaff_s6;
  uStack_6c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_80 = (undefined4)unaff_s5;
  uStack_7c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_b0 = (undefined4)unaff_s2;
  uStack_ac = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_c0 = (undefined4)unaff_s1;
  uStack_bc = (undefined4)((ulong)unaff_s1 >> 0x20);
  fVar20 = this->m_Alpha + _dt * 24.0 + _dt * 24.0;
  this->m_Alpha = fVar20;
  if (24.0 < fVar20) {
    this->m_Alpha = 24.0;
  }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  Offset.field0_0x0.d[1] = 0.3;
                    /* end of inlined section */
  Offset.field0_0x0.d[0] = 0.3;
  if (*(int *)&this->m_bInHouseSelectMenu == 0) {
    Offset.field0_0x0.d[1] = 0.15;
  }
  else {
    Offset.field0_0x0.d[0] = 0.5;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  aspect = 1.0;
  this_01 = (NeighborhoodImpl *)
            (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                      ((int)&_5Globs_pNeighborhood->__vtable +
                       (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
  Select__8ERShaderP3ERCi(this->m_pBlankShdr,prc,0);
  fVar20 = this->m_Alpha * 0.04166667;
  fVar20 = fVar20 + fVar20;
  if (aspect < fVar20) {
    fVar20 = aspect;
  }
                    /* inlined from ../MSrc/neighborhoodimpl.h */
  iVar19 = Selection + 1;
                    /* end of inlined section */
  DrawBigBox__10EDialogWinP3ERCfffff
            (prc,Offset.field0_0x0.d[0],Offset.field0_0x0.d[1],Offset.field0_0x0.d[0] + 0.4,
             Offset.field0_0x0.d[1] + 0.32,fVar20);
                    /* inlined from ../MSrc/neighborhoodimpl.h */
  HInfo.mMoveInAllowed = 0;
  HInfo.mIsTutorial = 0;
  HInfo.mHasHouse = 0;
  HInfo.mPrice = 0;
  HInfo.mOccupants = -1;
  __13StringBuffer2PUsUi
            ((StringBuffer2 *)&HInfo.mOccupantInfo,HInfo.mOccupantInfo.mName.fChars,0x80);
  pFile = _5Globs_pNghResFile;
                    /* end of inlined section */
                    /* inlined from ../MSrc/neighborhoodimpl.h */
  this_01->fHouseNum = iVar19;
                    /* end of inlined section */
  GetHouseInfo__16NeighborhoodImplP10NghResFileiP9HouseInfo
            (this_01,(NghResFile__6_845 *)pFile,iVar19,&HInfo);
  psVar12 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"housedesc_l1");
                    /* inlined from ../MSrc/stringbuffer2.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/stringbuffer2.h */
  __13StringBuffer2PUsUi(&StString.field0_0x0,StString.fChars,0x100);
  __13StringBuffer2PUsUi(&StString2.field0_0x0,StString2.fChars,0x100);
                    /* end of inlined section */
  IntToWString__FiPUsUii(iVar19,Buffer,0x7f,0);
  psVar13 = c_str__C8BString2(&_sNum);
  SubstituteString__FPCUsN20Rt12StackString21Ui256(psVar12,psVar13,Buffer,&StString);
  SetSize__6ERFontffb(this->m_pFont,15.0,aspect,true);
  uVar10 = _WHITE.field0_0x0.d[2];
  uVar9 = _WHITE.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  pEVar3 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  fVar20 = _WHITE.field0_0x0.d[3] * fVar20;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  (pEVar3->m_vColor).field0_0x0.d[0] = _WHITE.field0_0x0.d[0];
  (pEVar3->m_vColor).field0_0x0.d[1] = uVar9;
  (pEVar3->m_vColor).field0_0x0.d[2] = uVar10;
  (pEVar3->m_vColor).field0_0x0.d[3] = fVar20;
                    /* end of inlined section */
  Select__6ERFontP3ERC(this->m_pFont,prc);
  psVar12 = c_str__C13StringBuffer2(&StString.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vRed.field0_0x0.d[0] = Offset.field0_0x0.d[0] + 0.045;
  vRed.field0_0x0.d[1] = Offset.field0_0x0.d[1] + 0.05;
  color = (EVec4 * [2])CONCAT44(vRed.field0_0x0.d[1],vRed.field0_0x0.d[0]);
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this->m_pFont,prc,psVar12,true,(EVec2 *)color,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
  if (HInfo.mOccupants < 0) {
    psVar12 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"housedesc_l5");
    GetMoneyString__FiRt12StackString21Ui256(HInfo.mPrice,&StString2);
    psVar13 = c_str__C8BString2(&_sAmount);
    psVar14 = c_str__C13StringBuffer2(&StString2.field0_0x0);
    SubstituteString__FPCUsN20Rt12StackString21Ui256(psVar12,psVar13,psVar14,&StString);
    psVar12 = c_str__C13StringBuffer2(&StString.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vRed.field0_0x0.d[0] = Offset.field0_0x0.d[0] + 0.045;
    vRed.field0_0x0.d[1] = Offset.field0_0x0.d[1] + 0.14;
    local_250 = vRed.field0_0x0.d[0];
    local_24c = vRed.field0_0x0.d[1];
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,psVar12,true,(EVec2 *)&local_250,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0)
    ;
                    /* end of inlined section */
    if (HInfo.mHasHouse == 0) {
      pRef = "housedesc_l8";
    }
    else {
      pRef = "housedesc_l7";
    }
    psVar12 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,pRef);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    vRed.field0_0x0.d[0] = Offset.field0_0x0.d[0] + 0.045;
    vRed.field0_0x0.d[1] = Offset.field0_0x0.d[1] + 0.19;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    color = (EVec4 * [2])CONCAT44(vRed.field0_0x0.d[1],vRed.field0_0x0.d[0]);
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,psVar12,true,(EVec2 *)color,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
    iVar19 = *(int *)&this->m_bInHouseSelectMenu;
  }
  else {
    psVar12 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"housedesc_l2");
    psVar13 = c_str__C8BString2(&_sName);
    psVar14 = c_str__C13StringBuffer2((StringBuffer2 *)&HInfo.mOccupantInfo);
    SubstituteString__FPCUsN20Rt12StackString21Ui256(psVar12,psVar13,psVar14,&StString);
    psVar12 = c_str__C13StringBuffer2(&StString.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vRed.field0_0x0.d[0] = Offset.field0_0x0.d[0] + 0.045;
    vRed.field0_0x0.d[1] = Offset.field0_0x0.d[1] + 0.12;
    color = (EVec4 * [2])CONCAT44(vRed.field0_0x0.d[1],vRed.field0_0x0.d[0]);
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,psVar12,true,(EVec2 *)color,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
    psVar12 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"housedesc_l3");
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    piVar15 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                               ((int)&_5Globs_pNeighborhood->__vtable +
                                (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                AddFamilyHistoryStat);
    iVar19 = (**(code **)(*piVar15 + 0x134))
                       ((int)piVar15 + (int)*(short *)(*piVar15 + 0x130),iVar19);
    GetMoneyString__FiRt12StackString21Ui256(HInfo.mPrice + *(int *)(iVar19 + 0x14),&StString2);
    psVar13 = c_str__C8BString2(&_sAmount);
    psVar14 = c_str__C13StringBuffer2(&StString2.field0_0x0);
    SubstituteString__FPCUsN20Rt12StackString21Ui256(psVar12,psVar13,psVar14,&StString);
    psVar12 = c_str__C13StringBuffer2(&StString.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vRed.field0_0x0.d[0] = Offset.field0_0x0.d[0] + 0.045;
    vRed.field0_0x0.d[1] = Offset.field0_0x0.d[1] + 0.17;
    color = (EVec4 * [2])CONCAT44(vRed.field0_0x0.d[1],vRed.field0_0x0.d[0]);
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,psVar12,true,(EVec2 *)color,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
    psVar12 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"housedesc_l4");
    IntToWString__FiPUsUii(HInfo.mOccupantInfo.mFriendCount,Buffer,0x7f,0);
    psVar13 = c_str__C8BString2(&_sNum);
    SubstituteString__FPCUsN20Rt12StackString21Ui256(psVar12,psVar13,Buffer,&StString);
    psVar12 = c_str__C13StringBuffer2(&StString.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vRed.field0_0x0.d[0] = Offset.field0_0x0.d[0] + 0.045;
    vRed.field0_0x0.d[1] = Offset.field0_0x0.d[1] + 0.22;
    color = (EVec4 * [2])CONCAT44(vRed.field0_0x0.d[1],vRed.field0_0x0.d[0]);
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,psVar12,true,(EVec2 *)color,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
    iVar19 = *(int *)&this->m_bInHouseSelectMenu;
  }
  iVar11 = _1_5395;
  if (iVar19 == 0) {
                    /* end of inlined section */
    piPromtTime_5396 = piPromtTime_5396 + _dt;
    if (0.85 < piPromtTime_5396) {
      _1_5395 = _0_5394;
      _0_5394 = iVar11;
      piPromtTime_5396 = 0.0;
    }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    uVar5 = (int)color + 7U & 7;
    puVar6 = (ulong *)(((int)color + 7U) - uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | (ulong)_PTR__RED_003b1500 >> (7 - uVar5) * 8;
    color = _PTR__RED_003b1500;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    pEVar18 = color[_1_5395];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    pEVar16 = color[_0_5394];
    local_d8 = &local_1c0;
    local_dc = &local_1d0;
    local_100 = &local_1b0;
    local_fc = &local_180;
    local_f8 = &local_170;
    local_f4 = &local_160;
    local_f0 = local_150;
    local_ec = &local_140;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_e8 = &local_130;
    local_e4 = local_120;
    local_e0 = local_110;
                    /* end of inlined section */
    fVar20 = piPromtTime_5396 * 1.176471;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    iVar19 = 3;
    pEVar17 = &vRed;
    do {
      pEVar7 = &pEVar16->field0_0x0;
      iVar19 = iVar19 + -1;
      pEVar8 = &pEVar18->field0_0x0;
      pEVar16 = (EVec4 *)((int)&pEVar16->field0_0x0 + 4);
      pEVar18 = (EVec4 *)((int)&pEVar18->field0_0x0 + 4);
      (pEVar17->field0_0x0).d[0] = pEVar7->d[0] + (pEVar8->d[0] - pEVar7->d[0]) * fVar20;
      pEVar17 = (EVec4 *)((int)&pEVar17->field0_0x0 + 4);
    } while (-1 < iVar19);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    uVar21 = 0x3e99999a;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    vPos.field0_0x0 = (EVec2__null___1__1)(null___1__1)0x3e99999a3e8a3d71;
                    /* end of inlined section */
    Select__8ERShaderP3ERCi(this->m_pMorePrompts[1],prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    pEVar4 = prc->__vtable;
    sVar2 = *(short *)&pEVar4[1].SpriteList;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_210 = 0x3ba3d70a;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_20c = 0x3ba3d70a;
    fVar20 = 0.04;
    local_220 = vPos.field0_0x0.d[0] + 0.005;
    local_200 = 0x3c23d70a;
    local_21c = vPos.field0_0x0.d[1] + 0.005;
                    /* end of inlined section */
    local_110[0] = 0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_1fc = 0.04;
    local_1d0 = 0x3ba3d70a;
    local_230 = local_220 - 0.01;
    local_22c = local_21c - 0.04;
    local_dc[1] = 0x3ba3d70a;
    local_1e0 = vPos.field0_0x0.d[0] + 0.005;
    local_1c0 = 0x3c23d70a;
    local_1dc = vPos.field0_0x0.d[1] + local_1cc;
    local_d8[1] = 0x3d23d70a;
    local_1f0 = local_1e0 + 0.01;
    local_1ec = local_1dc + local_1bc;
    local_1ac = 0;
    local_1a0 = 0;
    local_1b0 = 0x3f800000;
    local_19c = 0x3f800000;
                    /* end of inlined section */
    (*(code *)pEVar4[1].DisplayList)
              ((int)&prc->m_pdl + (int)sVar2,&local_230,&local_1f0,local_100,&local_1a0,0x35f4d0);
    pEVar4 = prc->__vtable;
    sVar2 = *(short *)&pEVar4[1].SpriteList;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_210 = 0x3ba3d70a;
    local_20c = 0x3ba3d70a;
    local_200 = 0x3c23d70a;
    local_220 = vPos.field0_0x0.d[0] + 0.005;
    local_21c = vPos.field0_0x0.d[1] + 0.005;
    local_180 = 0x3ba3d70a;
    local_230 = local_220 - 0.01;
    local_22c = local_21c - fVar20;
    local_fc[1] = 0x3ba3d70a;
    local_190 = vPos.field0_0x0.d[0] + 0.005;
    local_170 = 0x3c23d70a;
    local_18c = vPos.field0_0x0.d[1] + local_17c;
    local_f8[1] = fVar20;
    local_1f0 = local_190 + 0.01;
    local_1ec = local_18c + local_16c;
    local_160 = 0x3f800000;
    local_f0[1] = 0x3f800000;
                    /* end of inlined section */
    local_1fc = fVar20;
    local_15c = local_110[0];
    local_150[0] = local_110[0];
    (*(code *)pEVar4[1].DisplayList)
              (local_110[0],(int)&prc->m_pdl + (int)sVar2,&local_230,&local_1f0,local_f4,local_f0,
               &vRed);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    this_00 = this->m_pMorePrompts[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_230 = 0.72;
    local_22c = (float)uVar21;
                    /* end of inlined section */
    vPos.field0_0x0 = (EVec2__null___1__1)CONCAT44(uVar21,0x3f3851ec);
    puVar1 = (undefined *)((int)&vPos.field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | (ulong)vPos.field0_0x0 >> (7 - uVar5) * 8;
    Select__8ERShaderP3ERCi(this_00,prc,0);
    pEVar4 = prc->__vtable;
    sVar2 = *(short *)&pEVar4[1].SpriteList;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_210 = 0x3ba3d70a;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_20c = 0x3ba3d70a;
    local_200 = 0x3c23d70a;
    local_220 = vPos.field0_0x0.d[0] + 0.005;
    local_21c = vPos.field0_0x0.d[1] + 0.005;
    local_1d0 = 0x3ba3d70a;
    local_230 = local_220 - 0.01;
    local_22c = local_21c - fVar20;
    local_dc[1] = 0x3ba3d70a;
    local_1e0 = vPos.field0_0x0.d[0] + 0.005;
    local_140 = 0x3c23d70a;
    local_1dc = vPos.field0_0x0.d[1] + local_1cc;
    local_ec[1] = fVar20;
    local_1f0 = local_1e0 + 0.01;
    local_1ec = local_1dc + local_13c;
    local_130 = 0x3f800000;
    local_e4[1] = 0x3f800000;
                    /* end of inlined section */
    local_1fc = fVar20;
    local_12c = local_110[0];
    local_120[0] = local_110[0];
    (*(code *)pEVar4[1].DisplayList)
              (local_110[0],(int)&prc->m_pdl + (int)sVar2,&local_230,&local_1f0,local_e8,local_e4,
               0x35f4d0);
    pEVar4 = prc->__vtable;
    sVar2 = *(short *)&pEVar4[1].SpriteList;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_210 = 0x3ba3d70a;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_20c = 0x3ba3d70a;
    local_200 = 0x3c23d70a;
    local_220 = vPos.field0_0x0.d[0] + 0.005;
    local_21c = vPos.field0_0x0.d[1] + 0.005;
    local_1d0 = 0x3ba3d70a;
    local_230 = local_220 - 0.01;
    local_22c = local_21c - fVar20;
    local_dc[1] = 0x3ba3d70a;
    local_1e0 = vPos.field0_0x0.d[0] + 0.005;
    local_1c0 = 0x3c23d70a;
    local_1dc = vPos.field0_0x0.d[1] + local_1cc;
    local_d8[1] = fVar20;
    local_1f0 = local_1e0 + 0.01;
    local_1ec = local_1dc + local_1bc;
    local_1b0 = 0x3f800000;
    local_e0[1] = 0x3f800000;
                    /* end of inlined section */
    local_1fc = fVar20;
    local_1ac = local_110[0];
    (*(code *)pEVar4[1].DisplayList)
              (local_110[0],(int)&prc->m_pdl + (int)sVar2,&local_230,&local_1f0,local_100,local_e0,
               &vRed);
  }
  return;
}

void ENeighborhoodMode::DrawHouseHighlight(ERC *prc) {
	int HouseNum;
	EVec2 Pos1;
	EVec2 Pos2;
	int AlphaColor;
	ERC *this;
	float x;
	float y;
	float x;
	float y;
	float x;
	float y;
	float x;
	float y;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  EVec2 Pos1;
  EVec2 Pos2;
  
  iVar7 = GetHouseSelection__17ENeighborhoodMode(this);
  if ((long)iVar7 == 0xffffffffffffffff) {
    this->m_Alpha = 0.0;
  }
  else {
    puVar1 = (undefined *)((int)&this->m_HouseCoords[iVar7].field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)(this->m_HouseCoords + iVar7) & 7;
    Pos1.field0_0x0 =
         (EVec2__null___1__1)
         ((*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          (long)iVar7 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
         *(ulong *)((int)(this->m_HouseCoords + iVar7) - uVar3) >> uVar3 * 8);
    puVar1 = (undefined *)((int)&Pos2.field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar2);
    *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | (ulong)Pos1.field0_0x0 >> (7 - uVar2) * 8;
    Pos2.field0_0x0 = (EVec2__null___1__1)(EVec2__null___1__1)Pos1;
    puVar1 = (undefined *)((int)&Pos1.field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar2);
    *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | (ulong)Pos1.field0_0x0 >> (7 - uVar2) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    Pos2.field0_0x0 =
         (EVec2__null___1__1)CONCAT44(Pos2.field0_0x0.d[1] + 32.0,Pos2.field0_0x0.d[0] + 32.0);
                    /* end of inlined section */
    (*(code *)prc->__vtable->ZTest)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->RecalcMatrices);
    Select__8ERShaderP3ERCi(this->m_pWhiteShaderAdditive,prc,0);
                    /* inlined from /eor/src2/engine/e_dl.h */
    puVar8 = (undefined8 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,400,0x10);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
    fVar19 = this->m_Alpha + _dt * 24.0 + _dt * 24.0;
    this->m_Alpha = fVar19;
    if (24.0 < fVar19) {
      this->m_Alpha = 24.0;
    }
    fVar19 = this->m_Alpha;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    *(undefined4 *)((int)puVar8 + 0x3c) = 0x80;
    *(undefined4 *)(puVar8 + 3) = 0x7f;
    *(undefined4 *)(puVar8 + 7) = 0;
    puVar15 = puVar8 + 8;
    *(int *)((int)puVar8 + 0x34) = (int)fVar19;
    *(int *)(puVar8 + 6) = (int)fVar19;
    *(undefined4 *)(puVar8 + 2) = 0;
    *(undefined4 *)((int)puVar8 + 0x14) = 0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    *(undefined4 *)(puVar8 + 4) = 0x3f800000;
    *(undefined4 *)((int)puVar8 + 0x24) = 0x3f800000;
    *(float *)puVar8 = Pos2.field0_0x0.d[0];
    *(float *)((int)puVar8 + 4) = Pos2.field0_0x0.d[1];
    *(undefined4 *)(puVar8 + 1) = 0x3dcccccd;
    puVar10 = puVar8 + 10;
    puVar9 = puVar8;
    do {
      puVar12 = puVar9;
      puVar11 = puVar10;
      uVar5 = *puVar12;
                    /* end of inlined section */
      uVar13 = *(undefined4 *)(puVar12 + 1);
      uVar14 = *(undefined4 *)((int)puVar12 + 0xc);
      uVar6 = puVar12[2];
      uVar16 = *(undefined4 *)(puVar12 + 3);
      uVar17 = *(undefined4 *)((int)puVar12 + 0x1c);
      *(int *)puVar11 = (int)uVar5;
      *(int *)((int)puVar11 + 4) = (int)((ulong)uVar5 >> 0x20);
      *(undefined4 *)(puVar11 + 1) = uVar13;
      *(undefined4 *)((int)puVar11 + 0xc) = uVar14;
      *(int *)(puVar11 + 2) = (int)uVar6;
      *(int *)((int)puVar11 + 0x14) = (int)((ulong)uVar6 >> 0x20);
      *(undefined4 *)(puVar11 + 3) = uVar16;
      *(undefined4 *)((int)puVar11 + 0x1c) = uVar17;
      puVar9 = puVar12 + 4;
      puVar10 = puVar11 + 4;
    } while (puVar9 != puVar15);
    uVar5 = *puVar9;
    uVar13 = *(undefined4 *)(puVar12 + 5);
    uVar14 = *(undefined4 *)((int)puVar12 + 0x2c);
    *(int *)(puVar11 + 4) = (int)uVar5;
    *(int *)((int)puVar11 + 0x24) = (int)((ulong)uVar5 >> 0x20);
    *(undefined4 *)(puVar11 + 5) = uVar13;
    *(undefined4 *)((int)puVar11 + 0x2c) = uVar14;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    *(undefined4 *)(puVar8 + 0xe) = 0;
    *(undefined4 *)((int)puVar8 + 0x74) = 0x3f800000;
    *(float *)(puVar8 + 10) = Pos1.field0_0x0.d[0];
    *(float *)((int)puVar8 + 0x54) = Pos2.field0_0x0.d[1];
    *(undefined4 *)(puVar8 + 0xb) = 0x3dcccccd;
    puVar10 = puVar8 + 0x14;
    puVar9 = puVar8;
    do {
      puVar12 = puVar10;
                    /* end of inlined section */
      uVar16 = *(undefined4 *)((int)puVar9 + 4);
      uVar17 = *(undefined4 *)(puVar9 + 1);
      uVar18 = *(undefined4 *)((int)puVar9 + 0xc);
      uVar5 = puVar9[2];
      uVar13 = *(undefined4 *)(puVar9 + 3);
      uVar14 = *(undefined4 *)((int)puVar9 + 0x1c);
      *(undefined4 *)puVar12 = *(undefined4 *)puVar9;
      *(undefined4 *)((int)puVar12 + 4) = uVar16;
      *(undefined4 *)(puVar12 + 1) = uVar17;
      *(undefined4 *)((int)puVar12 + 0xc) = uVar18;
      *(int *)(puVar12 + 2) = (int)uVar5;
      *(int *)((int)puVar12 + 0x14) = (int)((ulong)uVar5 >> 0x20);
      *(undefined4 *)(puVar12 + 3) = uVar13;
      *(undefined4 *)((int)puVar12 + 0x1c) = uVar14;
      puVar9 = puVar9 + 4;
      puVar10 = puVar12 + 4;
    } while (puVar9 != puVar15);
    uVar5 = *puVar15;
                    /* end of inlined section */
    uVar13 = *(undefined4 *)(puVar8 + 9);
    uVar14 = *(undefined4 *)((int)puVar8 + 0x4c);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    *(int *)(puVar12 + 4) = (int)uVar5;
    *(int *)((int)puVar12 + 0x24) = (int)((ulong)uVar5 >> 0x20);
    *(undefined4 *)(puVar12 + 5) = uVar13;
    *(undefined4 *)((int)puVar12 + 0x2c) = uVar14;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    *(undefined4 *)(puVar8 + 0x18) = 0x3f800000;
    *(undefined4 *)((int)puVar8 + 0xc4) = 0;
    *(float *)(puVar8 + 0x14) = Pos2.field0_0x0.d[0];
    *(float *)((int)puVar8 + 0xa4) = Pos1.field0_0x0.d[1];
    *(undefined4 *)(puVar8 + 0x15) = 0x3dcccccd;
    puVar10 = puVar8;
    puVar9 = puVar8 + 0x1e;
    do {
      puVar11 = puVar9;
      puVar12 = puVar10;
      uVar5 = *puVar12;
                    /* end of inlined section */
      uVar13 = *(undefined4 *)(puVar12 + 1);
      uVar14 = *(undefined4 *)((int)puVar12 + 0xc);
      uVar6 = puVar12[2];
      uVar16 = *(undefined4 *)(puVar12 + 3);
      uVar17 = *(undefined4 *)((int)puVar12 + 0x1c);
      *(int *)puVar11 = (int)uVar5;
      *(int *)((int)puVar11 + 4) = (int)((ulong)uVar5 >> 0x20);
      *(undefined4 *)(puVar11 + 1) = uVar13;
      *(undefined4 *)((int)puVar11 + 0xc) = uVar14;
      *(int *)(puVar11 + 2) = (int)uVar6;
      *(int *)((int)puVar11 + 0x14) = (int)((ulong)uVar6 >> 0x20);
      *(undefined4 *)(puVar11 + 3) = uVar16;
      *(undefined4 *)((int)puVar11 + 0x1c) = uVar17;
      puVar10 = puVar12 + 4;
      puVar9 = puVar11 + 4;
    } while (puVar10 != puVar15);
    uVar5 = *puVar10;
    uVar13 = *(undefined4 *)(puVar12 + 5);
    uVar14 = *(undefined4 *)((int)puVar12 + 0x2c);
    *(int *)(puVar11 + 4) = (int)uVar5;
    *(int *)((int)puVar11 + 0x24) = (int)((ulong)uVar5 >> 0x20);
    *(undefined4 *)(puVar11 + 5) = uVar13;
    *(undefined4 *)((int)puVar11 + 0x2c) = uVar14;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    *(undefined4 *)(puVar8 + 0x22) = 0;
    *(undefined4 *)((int)puVar8 + 0x114) = 0;
    *(float *)(puVar8 + 0x1e) = Pos1.field0_0x0.d[0];
    *(float *)((int)puVar8 + 0xf4) = Pos1.field0_0x0.d[1];
    *(undefined4 *)(puVar8 + 0x1f) = 0x3dcccccd;
    puVar10 = puVar8 + 0x14;
    puVar9 = puVar8 + 0x28;
    do {
      puVar12 = puVar9;
      puVar15 = puVar10;
      uVar5 = *puVar15;
                    /* end of inlined section */
      uVar13 = *(undefined4 *)(puVar15 + 1);
      uVar14 = *(undefined4 *)((int)puVar15 + 0xc);
      uVar6 = puVar15[2];
      uVar16 = *(undefined4 *)(puVar15 + 3);
      uVar17 = *(undefined4 *)((int)puVar15 + 0x1c);
      *(int *)puVar12 = (int)uVar5;
      *(int *)((int)puVar12 + 4) = (int)((ulong)uVar5 >> 0x20);
      *(undefined4 *)(puVar12 + 1) = uVar13;
      *(undefined4 *)((int)puVar12 + 0xc) = uVar14;
      *(int *)(puVar12 + 2) = (int)uVar6;
      *(int *)((int)puVar12 + 0x14) = (int)((ulong)uVar6 >> 0x20);
      *(undefined4 *)(puVar12 + 3) = uVar16;
      *(undefined4 *)((int)puVar12 + 0x1c) = uVar17;
      puVar10 = puVar15 + 4;
      puVar9 = puVar12 + 4;
    } while (puVar10 != puVar8 + 0x1c);
    uVar5 = *puVar10;
    uVar13 = *(undefined4 *)(puVar15 + 5);
    uVar14 = *(undefined4 *)((int)puVar15 + 0x2c);
    *(int *)(puVar12 + 4) = (int)uVar5;
    *(int *)((int)puVar12 + 0x24) = (int)((ulong)uVar5 >> 0x20);
    *(undefined4 *)(puVar12 + 5) = uVar13;
    *(undefined4 *)((int)puVar12 + 0x2c) = uVar14;
    (*(code *)prc->__vtable->TriIndexed)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->TriStrip,puVar8,5);
  }
  return;
}

void ENeighborhoodMode::DrawCursor(ERC *prc) {
  return;
}

void ENeighborhoodMode::ResetSelectHouseCamera() {
	EFloatRect Rect;
	EPortalWindow *pPortalWin;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  float fVar5;
  EPortalWindow *pEVar6;
  EGlobalManagerClient__vtable *pEVar7;
  EWindow__vtable *pEVar8;
  ulong *puVar9;
  ulong in_v0;
  ulong uVar10;
  long lVar11;
  undefined4 uVar12;
  TRect_float_ Rect;
  
  (this->m_vLastCameraTarget).field0_0x0.d[2] = 0.0;
  (this->m_vLastCameraTarget).field0_0x0.d[1] = 0.0;
  (this->m_vLastCameraTarget).field0_0x0.d[0] = 0.0;
  puVar1 = (undefined *)((int)&(this->m_vLastCameraTarget).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_vLastCameraTarget & 7;
  uVar10 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
           in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)&this->m_vLastCameraTarget - uVar3) >> uVar3 * 8;
  fVar5 = (this->m_vLastCameraTarget).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vLastCameraPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar2);
  *puVar9 = *puVar9 & -1L << (uVar2 + 1) * 8 | uVar10 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vLastCameraPos & 7;
  puVar9 = (ulong *)((int)&this->m_vLastCameraPos - uVar2);
  *puVar9 = uVar10 << uVar2 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vLastCameraPos).field0_0x0.d[2] = fVar5;
  puVar1 = (undefined *)((int)&(this->m_vLastCameraPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_vLastCameraPos & 7;
  uVar10 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
           uVar10 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)&this->m_vLastCameraPos - uVar3) >> uVar3 * 8;
  fVar5 = (this->m_vLastCameraPos).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vCameraTarget).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar2);
  *puVar9 = *puVar9 & -1L << (uVar2 + 1) * 8 | uVar10 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vCameraTarget & 7;
  puVar9 = (ulong *)((int)&this->m_vCameraTarget - uVar2);
  *puVar9 = uVar10 << uVar2 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vCameraTarget).field0_0x0.d[2] = fVar5;
  puVar1 = (undefined *)((int)&(this->m_vCameraTarget).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_vCameraTarget & 7;
  uVar10 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
           uVar10 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)&this->m_vCameraTarget - uVar3) >> uVar3 * 8;
  fVar5 = (this->m_vCameraTarget).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vCameraPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar2);
  *puVar9 = *puVar9 & -1L << (uVar2 + 1) * 8 | uVar10 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vCameraPos & 7;
  puVar9 = (ulong *)((int)&this->m_vCameraPos - uVar2);
  *puVar9 = uVar10 << uVar2 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vCameraPos).field0_0x0.d[2] = fVar5;
  Rect.left = 0.0;
  Rect.right = 1.0;
  Rect.top = 0.0;
  Rect.bottom = 1.0;
  SetViewport__9E3DWindowRCt5TRect1Zf(&this->m_pWin->field0_0x0,&Rect);
  pEVar6 = this->m_pWin;
  pEVar7 = (_pGfx->field0_0x0).__vtable;
  pEVar8 = (pEVar6->field0_0x0).field0_0x0.__vtable;
  sVar4 = *(short *)(pEVar8 + 2);
  uVar12 = (*(code *)pEVar7[0xd].EGlobalManagerClient)
                     ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar7 + 0xd));
  (*(code *)pEVar8[2].EWindow)
            (0x42700000,uVar12,0x41200000,0x453b8000,
             (int)&(pEVar6->field0_0x0).field0_0x0.m_mWindow.field0_0x0 + (int)sVar4);
  pEVar8 = (this->m_pWin->field0_0x0).field0_0x0.__vtable;
  lVar11 = (*(code *)pEVar8[1].CastPortalWindow)
                     ((int)&(this->m_pWin->field0_0x0).field0_0x0.m_mWindow.field0_0x0 +
                      (int)*(short *)&pEVar8[1].Cast3DWindow);
  if (lVar11 != 0) {
    SetClipRatio__13EPortalWindowf((EPortalWindow *)lVar11,3.0);
  }
  return;
}

void ENeighborhoodMode::UpdateSelectHouseCamera() {
	EPortalWindow *pPortalWin;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  EWindow__vtable *pEVar4;
  ulong *puVar5;
  ulong in_v0;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float x;
  
  puVar1 = (undefined *)((int)&(this->m_vCameraTarget).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_vCameraTarget & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->m_vCameraTarget - uVar3) >> uVar3 * 8;
  fVar8 = (this->m_vCameraTarget).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vLastCameraTarget).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vLastCameraTarget & 7;
  puVar5 = (ulong *)((int)&this->m_vLastCameraTarget - uVar2);
  *puVar5 = uVar6 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vLastCameraTarget).field0_0x0.d[2] = fVar8;
  puVar1 = (undefined *)((int)&(this->m_vCameraPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_vCameraPos & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar6 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->m_vCameraPos - uVar3) >> uVar3 * 8;
  fVar8 = (this->m_vCameraPos).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vLastCameraPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vLastCameraPos & 7;
  puVar5 = (ulong *)((int)&this->m_vLastCameraPos - uVar2);
  *puVar5 = uVar6 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vLastCameraPos).field0_0x0.d[2] = fVar8;
  (this->m_vCameraPos).field0_0x0.d[2] = 20.0;
  fVar8 = cosf(this->m_CameraAngle);
  x = this->m_CameraAngle;
  (this->m_vCameraPos).field0_0x0.d[0] = -fVar8 * 40.0;
  fVar8 = sinf(x);
  (this->m_vCameraPos).field0_0x0.d[1] = -fVar8 * 40.0;
  puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_vPos & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar6 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->m_vPos - uVar3) >> uVar3 * 8;
  fVar8 = (this->m_vPos).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vCameraTarget).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vCameraTarget & 7;
  puVar5 = (ulong *)((int)&this->m_vCameraTarget - uVar2);
  *puVar5 = uVar6 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vCameraTarget).field0_0x0.d[2] = fVar8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (this->m_vCameraPos).field0_0x0.d[0] =
       (this->m_vCameraPos).field0_0x0.d[0] + (this->m_vCameraTarget).field0_0x0.d[0];
  fVar8 = (this->m_vCameraPos).field0_0x0.d[2];
  (this->m_vCameraPos).field0_0x0.d[1] =
       (this->m_vCameraPos).field0_0x0.d[1] + (this->m_vCameraTarget).field0_0x0.d[1];
  (this->m_vCameraPos).field0_0x0.d[2] = fVar8 + (this->m_vCameraTarget).field0_0x0.d[2];
                    /* end of inlined section */
  (this->m_vCameraTarget).field0_0x0.d[2] = 7.5;
  pEVar4 = (this->m_pWin->field0_0x0).field0_0x0.__vtable;
  lVar7 = (*(code *)pEVar4[1].CastPortalWindow)
                    ((int)&(this->m_pWin->field0_0x0).field0_0x0.m_mWindow.field0_0x0 +
                     (int)*(short *)&pEVar4[1].Cast3DWindow);
  if (lVar7 != 0) {
    SetClipRatio__13EPortalWindowf((EPortalWindow *)lVar7,3.0);
  }
  return;
}

bool ENeighborhoodMode::HandleHouseSelectMenu(int Index) {
	HouseInfo HInfo;
	StringBufW255 StString;
	StringBufW255 StString2;
	bool ReturnValue;
	int HouseNum;
	HouseInfo HInfo;
	int Selection;
	StringBufW255 StString;
	int HouseNum;
	
  Neighborhood__vtable *pNVar1;
  Neighborhood *pNVar2;
  NghResFile__0_845 *pFile;
  bool bVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  NeighborhoodImpl *pNVar7;
  short *psVar8;
  short *psVar9;
  HouseInfo local_940;
  StackString2_256_ SStack_800;
  StackString2_256_ StString2;
  undefined4 local_3e0;
  undefined4 local_3dc;
  HouseInfo HInfo;
  StackString2_256_ StString;
  
                    /* inlined from ../MSrc/neighborhoodimpl.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/stringbuffer2.h */
                    /* end of inlined section */
  bVar3 = false;
                    /* inlined from ../MSrc/neighborhoodimpl.h */
  local_940.mOccupants = -1;
  local_940.mMoveInAllowed = 0;
  local_940.mIsTutorial = 0;
  local_940.mHasHouse = 0;
  local_940.mPrice = 0;
  __13StringBuffer2PUsUi
            ((StringBuffer2 *)&local_940.mOccupantInfo,local_940.mOccupantInfo.mName.fChars,0x80);
  __13StringBuffer2PUsUi(&SStack_800.field0_0x0,SStack_800.fChars,0x100);
  __13StringBuffer2PUsUi(&StString2.field0_0x0,StString2.fChars,0x100);
  pNVar2 = _5Globs_pNeighborhood;
                    /* end of inlined section */
  switch(Index) {
  case 1:
  case 5:
    *(undefined4 *)&this->m_bPlayHouse = 1;
    break;
  case 2:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    *(undefined4 *)&this->m_bMoveIn = 1;
    bVar3 = true;
    pNVar1 = pNVar2->__vtable;
    iVar4 = (*(code *)pNVar1[1].GetImpl)
                      ((int)&pNVar2->__vtable + (int)*(short *)&pNVar1[1].AddFamilyHistoryStat);
    iVar6 = GetHouseSelection__17ENeighborhoodMode(this);
    pNVar2 = _5Globs_pNeighborhood;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
    *(int *)(iVar4 + 0x31c) = iVar6 + 1;
                    /* end of inlined section */
    pNVar1 = pNVar2->__vtable;
    pNVar7 = (NeighborhoodImpl *)
             (*(code *)pNVar1[1].GetImpl)
                       ((int)&pNVar2->__vtable + (int)*(short *)&pNVar1[1].AddFamilyHistoryStat);
    pFile = _5Globs_pNghResFile;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    iVar4 = GetHouseSelection__17ENeighborhoodMode(this);
    GetHouseInfo__16NeighborhoodImplP10NghResFileiP9HouseInfo
              (pNVar7,(NghResFile__6_845 *)pFile,iVar4 + 1,&local_940);
    GetMoneyString__FiRt12StackString21Ui256(local_940.mPrice,&StString2);
    psVar5 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"house_cost_title");
    psVar8 = c_str__C8BString2(&_sAmount);
    psVar9 = c_str__C13StringBuffer2(&StString2.field0_0x0);
    SubstituteString__FPCUsN20Rt12StackString21Ui256(psVar5,psVar8,psVar9,&SStack_800);
    psVar5 = c_str__C13StringBuffer2(&SStack_800.field0_0x0);
    Init__13EFamilySelectPCUsibT3P16NeighborhoodImplT3
              (this->m_pSelectFamilyMenu,psVar5,local_940.mPrice,false,false,(NeighborhoodImpl *)0x0
               ,false);
    *(undefined4 *)&this->m_bInHouseSelectMenu = 0;
    break;
  case 3:
    bVar3 = true;
    ImportHouse__17ENeighborhoodMode(this);
    *(undefined4 *)&this->m_bInHouseSelectMenu = 0;
    break;
  case 4:
  case 6:
    if (Index == 4) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
                    /* end of inlined section */
      this->m_bEvictionMode = 0;
    }
    else {
      iVar4 = rand();
      if (iVar4 / 2 << 1 == iVar4 + -1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
        PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
                    /* end of inlined section */
      }
      else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
        PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
                    /* end of inlined section */
      }
      this->m_bEvictionMode = 2;
    }
    iVar4 = GetHouseSelection__17ENeighborhoodMode(this);
    if (-1 < iVar4) {
      *(undefined4 *)&this->m_bEvictFamilyOrDestroyHouse = 1;
      if (Index == 4) {
        psVar5 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"continue_option");
        this->m_ppOptionsTextList[0] = psVar5;
        psVar5 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"cancel_option");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_3e0 = 0x3e4ccccd;
                    /* end of inlined section */
        this->m_ppOptionsTextList[1] = psVar5;
                    /* end of inlined section */
        local_3dc = 0x3e99999a;
        psVar5 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"dialog_demolish");
        SetupDialog__11EDialogMenuG5EVec2fiPPCUsPCUsb
                  (&this->m_DialogMenu,(EVec2 *)&local_3e0,0.6,2,this->m_ppOptionsTextList,psVar5,
                   false);
        bVar3 = false;
      }
      else {
        psVar5 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"dialog_evict_liquidate_option");
        this->m_ppOptionsTextList[1] = psVar5;
        psVar5 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"dialog_evict_noliquid_option");
                    /* inlined from ../MSrc/neighborhoodimpl.h */
        HInfo.mMoveInAllowed = 0;
        HInfo.mIsTutorial = 0;
        HInfo.mHasHouse = 0;
        HInfo.mPrice = 0;
                    /* end of inlined section */
        this->m_ppOptionsTextList[0] = psVar5;
                    /* inlined from ../MSrc/stringbuffer2.h */
        HInfo.mOccupants = -1;
        __13StringBuffer2PUsUi
                  ((StringBuffer2 *)&HInfo.mOccupantInfo,HInfo.mOccupantInfo.mName.fChars,0x80);
                    /* end of inlined section */
        iVar4 = GetHouseSelection__17ENeighborhoodMode(this);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/neighborhoodimpl.h */
                    /* end of inlined section */
        iVar6 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
                    /* inlined from ../MSrc/neighborhoodimpl.h */
        *(int *)(iVar6 + 0x31c) = iVar4 + 1;
                    /* end of inlined section */
        pNVar7 = (NeighborhoodImpl *)
                 (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                           ((int)&_5Globs_pNeighborhood->__vtable +
                            (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat)
        ;
        GetHouseInfo__16NeighborhoodImplP10NghResFileiP9HouseInfo
                  (pNVar7,(NghResFile__6_845 *)_5Globs_pNghResFile,iVar4 + 1,&HInfo);
                    /* inlined from ../MSrc/stringbuffer2.h */
        __13StringBuffer2PUsUi(&StString.field0_0x0,StString.fChars,0x100);
                    /* end of inlined section */
        psVar5 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"dialog_evict");
        psVar8 = c_str__C8BString2(&_sName);
        psVar9 = c_str__C13StringBuffer2((StringBuffer2 *)&HInfo.mOccupantInfo);
        SubstituteString__FPCUsN20Rt12StackString21Ui256(psVar5,psVar8,psVar9,&StString);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_3e0 = 0x3e4ccccd;
                    /* end of inlined section */
        local_3dc = 0x3e99999a;
        psVar5 = c_str__C13StringBuffer2(&StString.field0_0x0);
        SetupDialog__11EDialogMenuG5EVec2fiPPCUsPCUsb
                  (&this->m_DialogMenu,(EVec2 *)&local_3e0,0.6,2,this->m_ppOptionsTextList,psVar5,
                   true);
        bVar3 = false;
      }
    }
    break;
  case 7:
    ImportSimStart__17ENeighborhoodModeb(this,true);
    bVar3 = true;
    *(undefined4 *)&this->m_bInHouseSelectMenu = 0;
  }
  return bVar3;
}

void ENeighborhoodMode::ImportSimStart(bool bSkipCurrentNeighborhood) {
  NghResFile__0_845 *pNVar1;
  
  this->m_ImportSimMode = 0;
  *(undefined4 *)&this->m_bImportSimActive = 1;
  pNVar1 = (NghResFile__0_845 *)__builtin_new(0x40);
  pNVar1 = __10NghResFile(pNVar1);
  this->m_pImportResFile = pNVar1;
  SetImportNeighborhoodMode__12ESimsMemCardP10NghResFileb
            (_globals.m_pMemCard,pNVar1,bSkipCurrentNeighborhood);
  return;
}

void ENeighborhoodMode::ImportHouse() {
	StringBufW255 StString;
	short unsigned int Buffer[128];
	
  NghResFile__0_845 *pNVar1;
  int iVar2;
  short *psVar3;
  short *searchString;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  StackString2_256_ StString;
  short Buffer [128];
  undefined4 local_80;
  undefined4 local_7c;
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
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  this->m_ImportMode = 0;
  *(undefined4 *)&this->m_bImportActive = 1;
  pNVar1 = (NghResFile__0_845 *)__builtin_new(0x40);
  pNVar1 = __10NghResFile(pNVar1);
  this->m_pImportResFile = pNVar1;
  SetImportNeighborhoodMode__12ESimsMemCardP10NghResFileb(_globals.m_pMemCard,pNVar1,true);
                    /* inlined from ../MSrc/stringbuffer2.h */
  __13StringBuffer2PUsUi(&StString.field0_0x0,(short *)((uint)&StString | 8),0x100);
                    /* end of inlined section */
  iVar2 = GetHouseSelection__17ENeighborhoodMode(this);
  IntToWString__FiPUsUii(iVar2 + 1,Buffer,0x7f,0);
  psVar3 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"import_house_sure");
  searchString = c_str__C8BString2(&_sNum);
  SubstituteString__FPCUsN20Rt12StackString21Ui256(psVar3,searchString,Buffer,&StString);
  psVar3 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"cancel_option");
  this->m_ppOptionsTextList[0] = psVar3;
  psVar3 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"import_house_option");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_80 = 0x3e4ccccd;
                    /* end of inlined section */
  this->m_ppOptionsTextList[1] = psVar3;
                    /* end of inlined section */
  local_7c = 0x3e99999a;
  psVar3 = c_str__C13StringBuffer2(&StString.field0_0x0);
  SetupDialog__11EDialogMenuG5EVec2fiPPCUsPCUsb
            (&this->m_DialogMenu,(EVec2 *)&local_80,0.6,2,this->m_ppOptionsTextList,psVar3,true);
  return;
}

void ENeighborhoodMode::DoActualImport(bool IncludeFurniture) {
	int Selection;
	HouseRecon *H;
	int i;
	ObjSelector *this;
	
  short sVar1;
  int iVar2;
  bool bVar3;
  int HouseNum;
  HouseRecon *pHVar4;
  uint uCurrentHouse;
  int iVar5;
  bool *pbVar6;
  int iVar7;
  
  iVar7 = 0;
  HouseNum = GetHouseSelection__17ENeighborhoodMode(this);
  uCurrentHouse = HouseNum + 1;
  CopyHouse__10NghResFileiR10NghResFilei
            (_5Globs_pNghResFile,uCurrentHouse,this->m_pImportResFile,this->m_ImportHouseNum + 1);
  SetCurrentHouse__10NghResFileUi(_5Globs_pNghResFile,uCurrentHouse);
  pHVar4 = (HouseRecon *)__builtin_new(0x16008);
  pHVar4 = __10HouseRecon(pHVar4);
  LoadHouseData__10HouseReconP8iResFile(pHVar4,(iResFile__6_5027 *)_5Globs_pNghResFile);
  SetCurrentHouse__10NghResFileUi(_5Globs_pNghResFile,uCurrentHouse);
  if (0 < pHVar4->m_iNumSelectors) {
    pbVar6 = &pHVar4->m_selectors[0].bDiscard;
    iVar5 = 0;
    do {
      iVar2 = *(int *)((int)&pHVar4->m_selectors[0].pObjSel + iVar5);
                    /* inlined from ../MSrc/objselector.h */
                    /* end of inlined section */
      if ((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x18), iVar2 != 0)) {
        sVar1 = *(short *)(iVar2 + 0x12);
        if (sVar1 == 4) {
                    /* end of inlined section */
          bVar3 = DeleteSelectorOnEvict__17ENeighborhoodModei(*(int *)(iVar2 + 0x1c));
          if (bVar3) {
            *(undefined4 *)pbVar6 = 1;
          }
        }
        else if (sVar1 < 5) {
          if ((sVar1 < 3) && (0 < sVar1)) goto LAB_0018fa3c;
        }
        else if (sVar1 == 0x22) {
LAB_0018fa3c:
                    /* inlined from ../MSrc/objselector.h */
                    /* end of inlined section */
          bVar3 = GuidIsOk__17ENeighborhoodModei
                            (this,*(int *)(*(int *)(*(int *)((int)&pHVar4->m_selectors[0].pObjSel +
                                                            iVar5) + 0x18) + 0x1c));
          if (bVar3) {
            *(undefined4 *)(&pHVar4->m_selectors[0].bDiscard + iVar5) = 1;
          }
        }
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 0x1c;
      pbVar6 = pbVar6 + 0x1c;
    } while (iVar7 < pHVar4->m_iNumSelectors);
  }
                    /* end of inlined section */
  SaveHouseData__10HouseReconP8iResFilei
            (pHVar4,(iResFile__6_5027 *)_5Globs_pNghResFile,_5Globs_iSaveFileVersion);
  if (pHVar4 != (HouseRecon *)0x0) {
    ___10HouseRecon(pHVar4,3);
  }
  ResetHouseVisuals__17ENeighborhoodModei(this,HouseNum);
  bVar3 = ImpFamilySetupSource__17ENeighborhoodModei(this,HouseNum);
  if (bVar3) {
    ImpFamilyReadSourceFamily__17ENeighborhoodModei(this,HouseNum);
    ImpFamilySetupDestination__17ENeighborhoodMode(this);
    ImpFamilyWriteDestFamily__17ENeighborhoodModei(this,HouseNum);
    ImpFamilyCleanup__17ENeighborhoodMode(this);
    this->m_pImportNeighborhood = (NeighborhoodImpl *)0x0;
  }
  else {
    this->m_pImportNeighborhood = (NeighborhoodImpl *)0x0;
  }
  return;
}

void ENeighborhoodMode::UpdateEvictFamilyOrDestroyHouse() {
	int Choice;
	int Selection;
	int Selection;
	
  int iVar1;
  int Selection;
  
  this->m_DrawButtonDescLevel = 1;
  iVar1 = DialogUpdate__11EDialogMenu(&this->m_DialogMenu);
  if (iVar1 == -1) {
    return;
  }
  if (iVar1 != -2) {
    if (this->m_bEvictionMode != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3fe4572b);
                    /* end of inlined section */
      Selection = GetHouseSelection__17ENeighborhoodMode(this);
      if (iVar1 == 1) {
        EvictFamilyAndLiquidateAssets__17ENeighborhoodModei(this,Selection);
        *(undefined4 *)&this->m_bEvictFamilyOrDestroyHouse = 0;
        return;
      }
      EvictFamily__17ENeighborhoodModeib(this,Selection,true);
      *(undefined4 *)&this->m_bEvictFamilyOrDestroyHouse = 0;
      return;
    }
    if (iVar1 != 1) {
      iVar1 = GetHouseSelection__17ENeighborhoodMode(this);
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xa027b573);
                    /* end of inlined section */
      DemolishHouse__17ENeighborhoodModei(this,iVar1);
      ResetHouseVisuals__17ENeighborhoodModei(this,iVar1);
      *(undefined4 *)&this->m_bEvictFamilyOrDestroyHouse = 0;
      return;
    }
  }
  iVar1 = rand();
  if (iVar1 % 2 == 1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x7934f096);
                    /* end of inlined section */
    *(undefined4 *)&this->m_bEvictFamilyOrDestroyHouse = 0;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x9ac0295d);
                    /* end of inlined section */
    *(undefined4 *)&this->m_bEvictFamilyOrDestroyHouse = 0;
  }
  return;
}

void ENeighborhoodMode::DrawEvictFamilyOrHouse(ERC *prc) {
  DialogDraw__11EDialogMenuP3ERCb(&this->m_DialogMenu,prc,true);
  return;
}

void ENeighborhoodMode::DrawGenericMessageBox(ERC *prc, c16 *Title, c16 *Line1, c16 *Line2) {
	EVec2 vBigBoxTL;
	EVec2 vBigBoxBR;
	float dialogCenterX;
	EVec2 vposPrompt;
	EVec2 titleStringWH;
	float titleStringw;
	EVec2 vTitleBack;
	float promptBackW;
	EVec2 Dimensions;
	EVec2 Pos;
	u16 *szString;
	ERFont *this;
	u16 *szString;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	EVec2 *this;
	u16 *szString;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	u16 *szString;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ERFont *pEVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  float _y;
  char *pcVar8;
  float fVar9;
  EStorable__vtable *pEVar10;
  float _w;
  float fVar11;
  float fVar12;
  EVec2 vBigBoxTL;
  EVec2 vBigBoxBR;
  EVec2 vposPrompt;
  EVec2 titleStringWH;
  EVec2 vTitleBack;
  EVec2 Dimensions;
  EVec2 Pos;
  undefined local_b0 [96];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_b0._32_4_ = (EHashTableNode **)unaff_s1;
  local_b0._36_4_ = (uint)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_b0._80_4_ = (EFontSize *)unaff_s4;
  local_b0._84_4_ = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_b0._64_4_ = (EHashTableNode **)unaff_s3;
  local_b0._68_4_ = (uint)((ulong)unaff_s3 >> 0x20);
  local_b0._48_4_ = (EFontSize *)unaff_s2;
  local_b0._52_4_ = (int)((ulong)unaff_s2 >> 0x20);
  local_b0._16_4_ = (EFontSize *)unaff_s0;
  local_b0._20_4_ = (EStorable__vtable *)((ulong)unaff_s0 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* end of inlined section */
  DrawBigBox__10EDialogWinP3ERCfffff
            (prc,vTopLeft.field0_0x0.d[0],vTopLeft.field0_0x0.d[1],
             vTopLeft.field0_0x0.d[0] + vWHDialog.field0_0x0.d[0],
             vTopLeft.field0_0x0.d[1] + vWHDialog.field0_0x0.d[1],1.0);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar12 = vTopLeftMessage.field0_0x0.d[0] + vWTitleBar.field0_0x0.d[0] * 0.5;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&titleStringWH,_globals.m_pFont,SUB41(Title,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  _w = 0.2;
  titleStringWH.field0_0x0.d[0] = titleStringWH.field0_0x0.d[0] + 0.1;
  if (0.2 <= titleStringWH.field0_0x0.d[0]) {
    _w = (float)((int)titleStringWH.field0_0x0.d[0] *
                 (uint)(titleStringWH.field0_0x0.d[0] < vWTitleBar.field0_0x0.d[0]) |
                (int)vWTitleBar.field0_0x0.d[0] *
                (uint)(titleStringWH.field0_0x0.d[0] >= vWTitleBar.field0_0x0.d[0]));
  }
  fVar11 = 0.5;
  fVar9 = _w * 0.5;
  _y = vTopLeftMessage.field0_0x0.d[1] - (vWTitleBar.field0_0x0.d[1] + 0.01);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  SetSize__6ERFontffb(_globals.m_pFont,m_fontSize,1.0,true);
  uVar7 = _WHITE.field0_0x0.d[3];
  uVar6 = _WHITE.field0_0x0.d[2];
  uVar5 = _WHITE.field0_0x0._0_8_;
  pEVar4 = _globals.m_pFont;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (pEVar4->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
  (pEVar4->m_vColor).field0_0x0.d[2] = uVar6;
  (pEVar4->m_vColor).field0_0x0.d[3] = uVar7;
                    /* end of inlined section */
  Select__6ERFontP3ERC(_globals.m_pFont,prc);
  DrawTextBox__10EDialogWinP3ERCffff(prc,fVar12 - fVar9,_y,_w,1.0);
  Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  Dimensions.field0_0x0 = (EVec2__null___1__1)(null___1__1)0x3f8000003f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
            (prc,vTopLeftMessage.field0_0x0.d[0],vTopLeftMessage.field0_0x0.d[1],
             vWHMessageBox.field0_0x0.d[1],vWHMessageBox.field0_0x0.d[0],1.0,
             (EVec4 *)(ERFont *)&Dimensions);
  Draw__10EPromptBarP3ERC(&this->m_GenericYesNoPrompt,prc);
  SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
  Select__6ERFontP3ERC(this->m_pFont,prc);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&Dimensions,_globals.m_pFont,SUB41(Title,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  local_b0._4_4_ = (char *)(vTopLeftMessage.field0_0x0.d[1] - vWTitleBar.field0_0x0.d[1]);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  local_b0._0_4_ = (EStorable__vtable *)(fVar12 - Dimensions.field0_0x0.d[0] * fVar11);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this->m_pFont,prc,Title,true,(EVec2 *)(ERFont *)local_b0,E_FAX_LEFT,E_FAY_TOP,
             (EVec2 *)0x0);
                    /* end of inlined section */
  SetSize__6ERFontffb(this->m_pFont,15.0,1.0,true);
  if (Line1 != (short *)0x0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_b0,_globals.m_pFont,SUB41(Line1,0),(EWindow *)&pGifTag1);
    pEVar10 = local_b0._0_4_;
                    /* end of inlined section */
    Dimensions.field0_0x0 = (EVec2__null___1__1)CONCAT44(local_b0._4_4_,local_b0._0_4_);
    puVar1 = (undefined *)((int)&Dimensions.field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)Dimensions.field0_0x0 >> (7 - uVar2) * 8;
    pcVar8 = (char *)(vTopLeftMessage.field0_0x0.d[0] + 0.16);
    pEVar10 = (EStorable__vtable *)(fVar11 - (float)pEVar10 * fVar11);
    Select__6ERFontP3ERC(this->m_pFont,prc);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_b0._0_4_ = pEVar10;
    local_b0._4_4_ = pcVar8;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,Line1,true,(EVec2 *)(ERFont *)local_b0,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
  }
                    /* end of inlined section */
  if (Line2 != (short *)0x0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_b0,_globals.m_pFont,SUB41(Line2,0),(EWindow *)&pGifTag1);
    pEVar10 = local_b0._0_4_;
                    /* end of inlined section */
    Dimensions.field0_0x0 = (EVec2__null___1__1)CONCAT44(local_b0._4_4_,local_b0._0_4_);
    puVar1 = (undefined *)((int)&Dimensions.field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)Dimensions.field0_0x0 >> (7 - uVar2) * 8;
    pcVar8 = (char *)(vTopLeftMessage.field0_0x0.d[0] + 0.21);
    Select__6ERFontP3ERC(this->m_pFont,prc);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_b0._0_4_ = (EStorable__vtable *)(fVar11 - (float)pEVar10 * fVar11);
    local_b0._4_4_ = pcVar8;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,Line2,true,(EVec2 *)(ERFont *)local_b0,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
  }
                    /* end of inlined section */
  return;
}

void ENeighborhoodMode::DemolishHouse(int Selection) {
	HouseRecon *H;
	int x;
	int y;
	int l;
	TileWalls tw;
	cFixedWorld *world;
	s32 version;
	int i;
	CTilePt pt;
	
  ushort uVar1;
  ObjDefinition *pOVar2;
  cFixedWorld *pcVar3;
  bool bVar4;
  HouseRecon *pHVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  bool *pbVar9;
  undefined8 unaff_s0;
  int iVar10;
  undefined8 unaff_s1;
  int x;
  undefined8 unaff_s2;
  int y;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  int iVar11;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  TileWalls tw;
  CTilePt pt;
  TileWalls TStack_f0;
  int version;
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
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  iVar10 = 0;
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  SetCurrentHouse__10NghResFileUi(_5Globs_pNghResFile,Selection + 1);
  pHVar5 = (HouseRecon *)__builtin_new(0x16008);
  pHVar5 = __10HouseRecon(pHVar5);
  LoadHouseData__10HouseReconP8iResFile(pHVar5,(iResFile__6_5027 *)_5Globs_pNghResFile);
  if (0 < pHVar5->m_iNumSelectors) {
    pbVar9 = &pHVar5->m_selectors[0].bDiscard;
    do {
      if (*(ObjSelector **)(pbVar9 + -4) == (ObjSelector *)0x0) {
        iVar7 = pHVar5->m_iNumSelectors;
      }
      else {
                    /* inlined from ../MSrc/objselector.h */
        pOVar2 = (*(ObjSelector **)(pbVar9 + -4))->fHeader;
                    /* end of inlined section */
        if (pOVar2 == (ObjDefinition *)0x0) {
          iVar7 = pHVar5->m_iNumSelectors;
        }
        else {
          uVar1 = pOVar2->type;
          if (0 < (short)uVar1) {
            if ((short)uVar1 < 10) {
              iVar7 = pOVar2->guid;
            }
            else {
              if (uVar1 != 0x22) {
                iVar7 = pHVar5->m_iNumSelectors;
                goto LAB_001901ec;
              }
                    /* end of inlined section */
              iVar7 = pOVar2->guid;
            }
            bVar4 = GuidIsOk__17ENeighborhoodModei(this,iVar7);
            if (bVar4) {
              *(undefined4 *)pbVar9 = 1;
            }
          }
          iVar7 = pHVar5->m_iNumSelectors;
        }
      }
LAB_001901ec:
      iVar10 = iVar10 + 1;
      pbVar9 = pbVar9 + 0x1c;
    } while (iVar10 < iVar7);
  }
  __9TileWalls(&tw);
  pcVar3 = _5Globs_pFixedWorld;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  ReconLoadObject__H1Z10cSimulator_PX01P8iResFileisPi_i
            (_5Globs_pSimulator,&_5Globs_pNghResFile->field0_0x0,kSimulatorResType,
             kSimulatorResourceID,&version);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pFixedWorld->__vtable->GetMaxSize)
            ((int)&_5Globs_pFixedWorld->__vtable +
             (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetSize,_5Globs_pNghResFile,version);
  iVar10 = 1;
  do {
    iVar11 = iVar10 + 1;
    iVar7 = 1;
    while (y = iVar7,
          iVar7 = (*(code *)pcVar3->__vtable->GetFloor)
                            ((int)&pcVar3->__vtable +
                             (int)*(short *)&pcVar3->__vtable->GetFloorLayer), y < iVar7 + -1) {
      x = 1;
      while( true ) {
        iVar6 = (*(code *)pcVar3->__vtable->GetFloor)
                          ((int)&pcVar3->__vtable + (int)*(short *)&pcVar3->__vtable->GetFloorLayer)
        ;
        iVar7 = y + 1;
        if (iVar6 + -1 <= x) break;
        __7CTilePtiii(&pt,x,y,iVar10);
        uVar8 = (*(code *)pcVar3->__vtable[1].GetFloorLayer)
                          ((int)&pcVar3->__vtable + (int)*(short *)&pcVar3->__vtable[1].OutOfGrid,
                           &pt);
        if ((uVar8 & 0x20) == 0) {
          (*(code *)pcVar3->__vtable->AnalyzeWallVertex)
                    ((int)&pcVar3->__vtable + (int)*(short *)&pcVar3->__vtable->SetVertexConfig,&pt,
                     0);
          __9TileWallsRC9TileWalls(&TStack_f0,&tw);
          (*(code *)pcVar3->__vtable->GetLightLayer)
                    ((int)&pcVar3->__vtable + (int)*(short *)&pcVar3->__vtable->GetWallManager,&pt,
                     &TStack_f0);
        }
        ___7CTilePt(&pt,2);
        x = x + 1;
      }
    }
    iVar10 = iVar11;
  } while (iVar11 < 2);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pSimulator->__vtable[1].GetArchValue)
            ((int)&_5Globs_pSimulator->__vtable +
             (int)*(short *)&_5Globs_pSimulator->__vtable[1].SetLotValue,0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pSimulator->__vtable[1].SetTimeOfDay)
            ((int)&_5Globs_pSimulator->__vtable +
             (int)*(short *)&_5Globs_pSimulator->__vtable[1].GetTimeOfDay,0);
  ReconSaveObject__H1Z10cSimulator_PX01P8iResFileisi_i
            (_5Globs_pSimulator,&_5Globs_pNghResFile->field0_0x0,kSimulatorResType,
             kSimulatorResourceID,version);
  (*(code *)pcVar3->__vtable->SetSize)
            ((int)&pcVar3->__vtable + (int)*(short *)&pcVar3->__vtable->DoCommand,
             _5Globs_pNghResFile,_5Globs_iSaveFileVersion);
  SaveHouseData__10HouseReconP8iResFilei
            (pHVar5,(iResFile__6_5027 *)_5Globs_pNghResFile,_5Globs_iSaveFileVersion);
  if (pHVar5 != (HouseRecon *)0x0) {
    ___10HouseRecon(pHVar5,3);
  }
  ___9TileWalls(&tw,2);
  return;
}

void ENeighborhoodMode::EvictFamily(int Selection, bool RefundMoney) {
	HouseRecon *H;
	int i;
	int Assets;
	HouseInfo HInfo;
	NeighborhoodImpl *NH;
	Family *f;
	NeighborhoodImpl *this;
	ObjSelector *this;
	
  short sVar1;
  NghResFile__0_845 *pFile;
  int iVar2;
  bool bVar3;
  HouseRecon *pHVar4;
  NeighborhoodImpl *this_00;
  int iVar5;
  int *piVar6;
  long lVar7;
  uint uCurrentHouse;
  int iVar8;
  bool *pbVar9;
  int iVar10;
  HouseInfo HInfo;
  int Assets;
  
  uCurrentHouse = Selection + 1;
  iVar10 = 0;
  SetCurrentHouse__10NghResFileUi(_5Globs_pNghResFile,uCurrentHouse);
  pHVar4 = (HouseRecon *)__builtin_new(0x16008);
  pHVar4 = __10HouseRecon(pHVar4);
  LoadHouseData__10HouseReconP8iResFile(pHVar4,(iResFile__6_5027 *)_5Globs_pNghResFile);
  SetCurrentHouse__10NghResFileUi(_5Globs_pNghResFile,uCurrentHouse);
                    /* inlined from ../MSrc/neighborhoodimpl.h */
  HInfo.mOccupants = -1;
  HInfo.mMoveInAllowed = 0;
  HInfo.mIsTutorial = 0;
  HInfo.mHasHouse = 0;
  HInfo.mPrice = 0;
  __13StringBuffer2PUsUi
            ((StringBuffer2 *)&HInfo.mOccupantInfo,HInfo.mOccupantInfo.mName.fChars,0x80);
                    /* end of inlined section */
  this_00 = (NeighborhoodImpl *)
            (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                      ((int)&_5Globs_pNeighborhood->__vtable +
                       (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
  pFile = _5Globs_pNghResFile;
                    /* inlined from ../MSrc/neighborhoodimpl.h */
  this_00->fHouseNum = uCurrentHouse;
                    /* end of inlined section */
  GetHouseInfo__16NeighborhoodImplP10NghResFileiP9HouseInfo
            (this_00,(NghResFile__6_845 *)pFile,uCurrentHouse,&HInfo);
  iVar2 = HInfo.mPrice;
  if (0 < pHVar4->m_iNumSelectors) {
    pbVar9 = &pHVar4->m_selectors[0].bDiscard;
    iVar8 = 0;
    do {
      iVar5 = *(int *)((int)&pHVar4->m_selectors[0].pObjSel + iVar8);
      if (iVar5 == 0) {
        iVar5 = pHVar4->m_iNumSelectors;
        goto LAB_00190610;
      }
                    /* inlined from ../MSrc/objselector.h */
      iVar5 = *(int *)(iVar5 + 0x18);
                    /* end of inlined section */
      if (iVar5 == 0) {
LAB_0019060c:
        iVar5 = pHVar4->m_iNumSelectors;
      }
      else {
        sVar1 = *(short *)(iVar5 + 0x12);
        if (sVar1 == 4) {
                    /* end of inlined section */
          bVar3 = DeleteSelectorOnEvict__17ENeighborhoodModei(*(int *)(iVar5 + 0x1c));
          if (!bVar3) {
            iVar5 = pHVar4->m_iNumSelectors;
            goto LAB_00190610;
          }
          *(undefined4 *)pbVar9 = 1;
          goto LAB_0019060c;
        }
        if (sVar1 < 5) {
          if (sVar1 < 3) {
            if (sVar1 < 1) goto LAB_0019060c;
LAB_001905ec:
                    /* inlined from ../MSrc/objselector.h */
                    /* end of inlined section */
            bVar3 = GuidIsOk__17ENeighborhoodModei
                              (this,*(int *)(*(int *)(*(int *)((int)&pHVar4->m_selectors[0].pObjSel
                                                              + iVar8) + 0x18) + 0x1c));
            if (bVar3) {
              *(undefined4 *)(&pHVar4->m_selectors[0].bDiscard + iVar8) = 1;
            }
            goto LAB_0019060c;
          }
          iVar5 = pHVar4->m_iNumSelectors;
        }
        else {
          if (sVar1 == 0x22) goto LAB_001905ec;
          iVar5 = pHVar4->m_iNumSelectors;
        }
      }
LAB_00190610:
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 0x1c;
      pbVar9 = pbVar9 + 0x1c;
    } while (iVar10 < iVar5);
  }
                    /* end of inlined section */
  SaveHouseData__10HouseReconP8iResFilei
            (pHVar4,(iResFile__6_5027 *)_5Globs_pNghResFile,_5Globs_iSaveFileVersion);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  piVar6 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                            ((int)&_5Globs_pNeighborhood->__vtable +
                             (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat
                            );
  lVar7 = (**(code **)(*piVar6 + 0x134))
                    ((int)piVar6 + (int)*(short *)(*piVar6 + 0x130),Selection + 1);
  if (lVar7 != 0) {
    piVar6 = (int *)lVar7;
    iVar10 = *piVar6;
    if (RefundMoney) {
      sVar1 = *(short *)(iVar10 + 0xa0);
      iVar8 = (**(code **)(iVar10 + 0x9c))((int)piVar6 + (int)*(short *)(iVar10 + 0x98));
      (**(code **)(iVar10 + 0xa4))((int)piVar6 + (int)sVar1,iVar8 + iVar2);
      iVar10 = *piVar6;
    }
    (**(code **)(iVar10 + 0x74))((int)piVar6 + (int)*(short *)(iVar10 + 0x70));
    (**(code **)(*piVar6 + 0x84))((int)piVar6 + (int)*(short *)(*piVar6 + 0x80),0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    piVar6 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                              ((int)&_5Globs_pNeighborhood->__vtable +
                               (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                               AddFamilyHistoryStat);
    (**(code **)(*piVar6 + 0x94))
              ((int)piVar6 + (int)*(short *)(*piVar6 + 0x90),_5Globs_pNghResFile,
               _5Globs_iSaveFileVersion);
  }
  if (pHVar4 != (HouseRecon *)0x0) {
    ___10HouseRecon(pHVar4,3);
  }
  return;
}

void ENeighborhoodMode::EvictFamilyAndLiquidateAssets(int Selection) {
	HouseRecon *H;
	int i;
	int Assets;
	HouseInfo HInfo;
	NeighborhoodImpl *NH;
	Family *f;
	NeighborhoodImpl *this;
	ObjSelector *this;
	
  ushort uVar1;
  short sVar2;
  ObjDefinition *pOVar3;
  NghResFile__0_845 *pFile;
  int iVar4;
  bool bVar5;
  HouseRecon *pHVar6;
  NeighborhoodImpl *this_00;
  int iVar7;
  int *piVar8;
  long lVar9;
  uint uCurrentHouse;
  int iVar10;
  ObjSelector **ppOVar11;
  int iVar12;
  HouseInfo HInfo;
  int Assets;
  
  uCurrentHouse = Selection + 1;
  iVar12 = 0;
  SetCurrentHouse__10NghResFileUi(_5Globs_pNghResFile,uCurrentHouse);
  pHVar6 = (HouseRecon *)__builtin_new(0x16008);
  pHVar6 = __10HouseRecon(pHVar6);
  LoadHouseData__10HouseReconP8iResFile(pHVar6,(iResFile__6_5027 *)_5Globs_pNghResFile);
  SetCurrentHouse__10NghResFileUi(_5Globs_pNghResFile,uCurrentHouse);
                    /* inlined from ../MSrc/neighborhoodimpl.h */
  HInfo.mOccupants = -1;
  HInfo.mMoveInAllowed = 0;
  HInfo.mIsTutorial = 0;
  HInfo.mHasHouse = 0;
  HInfo.mPrice = 0;
  __13StringBuffer2PUsUi
            ((StringBuffer2 *)&HInfo.mOccupantInfo,HInfo.mOccupantInfo.mName.fChars,0x80);
                    /* end of inlined section */
  this_00 = (NeighborhoodImpl *)
            (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                      ((int)&_5Globs_pNeighborhood->__vtable +
                       (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
  pFile = _5Globs_pNghResFile;
                    /* inlined from ../MSrc/neighborhoodimpl.h */
  this_00->fHouseNum = uCurrentHouse;
                    /* end of inlined section */
  GetHouseInfo__16NeighborhoodImplP10NghResFileiP9HouseInfo
            (this_00,(NghResFile__6_845 *)pFile,uCurrentHouse,&HInfo);
  iVar4 = HInfo.mPrice;
  if (0 < pHVar6->m_iNumSelectors) {
    ppOVar11 = &pHVar6->m_selectors[0].pObjSel;
    iVar10 = 0;
    do {
      if (*ppOVar11 == (ObjSelector *)0x0) {
        iVar7 = pHVar6->m_iNumSelectors;
      }
      else {
                    /* inlined from ../MSrc/objselector.h */
        pOVar3 = (*ppOVar11)->fHeader;
                    /* end of inlined section */
        if (pOVar3 == (ObjDefinition *)0x0) {
          iVar7 = pHVar6->m_iNumSelectors;
        }
        else {
          uVar1 = pOVar3->type;
          if (uVar1 == 9) {
LAB_001908d4:
                    /* inlined from ../MSrc/objselector.h */
                    /* end of inlined section */
            bVar5 = GuidIsOk__17ENeighborhoodModei
                              (this,*(int *)(*(int *)(*(int *)((int)&pHVar6->m_selectors[0].pObjSel
                                                              + iVar10) + 0x18) + 0x1c));
            if (bVar5) {
              *(undefined4 *)(&pHVar6->m_selectors[0].bDiscard + iVar10) = 1;
            }
LAB_001908f8:
            iVar7 = pHVar6->m_iNumSelectors;
          }
          else if ((short)uVar1 < 10) {
            if ((short)uVar1 < 8) {
              if (0 < (short)uVar1) goto LAB_001908d4;
              goto LAB_001908f8;
            }
            iVar7 = pHVar6->m_iNumSelectors;
          }
          else {
            if (uVar1 == 0x22) goto LAB_001908d4;
            iVar7 = pHVar6->m_iNumSelectors;
          }
        }
      }
      iVar12 = iVar12 + 1;
      iVar10 = iVar10 + 0x1c;
      ppOVar11 = ppOVar11 + 7;
    } while (iVar12 < iVar7);
  }
                    /* end of inlined section */
  SaveHouseData__10HouseReconP8iResFilei
            (pHVar6,(iResFile__6_5027 *)_5Globs_pNghResFile,_5Globs_iSaveFileVersion);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  piVar8 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                            ((int)&_5Globs_pNeighborhood->__vtable +
                             (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat
                            );
  lVar9 = (**(code **)(*piVar8 + 0x134))
                    ((int)piVar8 + (int)*(short *)(*piVar8 + 0x130),Selection + 1);
  if (lVar9 != 0) {
    piVar8 = (int *)lVar9;
    iVar12 = *piVar8;
    sVar2 = *(short *)(iVar12 + 0xa0);
    iVar10 = (**(code **)(iVar12 + 0x9c))((int)piVar8 + (int)*(short *)(iVar12 + 0x98));
    (**(code **)(iVar12 + 0xa4))((int)piVar8 + (int)sVar2,iVar10 + iVar4);
    (**(code **)(*piVar8 + 0x74))((int)piVar8 + (int)*(short *)(*piVar8 + 0x70));
    (**(code **)(*piVar8 + 0x84))((int)piVar8 + (int)*(short *)(*piVar8 + 0x80),0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    piVar8 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                              ((int)&_5Globs_pNeighborhood->__vtable +
                               (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                               AddFamilyHistoryStat);
    (**(code **)(*piVar8 + 0x94))
              ((int)piVar8 + (int)*(short *)(*piVar8 + 0x90),_5Globs_pNghResFile,
               _5Globs_iSaveFileVersion);
  }
  if (pHVar6 != (HouseRecon *)0x0) {
    ___10HouseRecon(pHVar6,3);
  }
  return;
}

void ENeighborhoodMode::ResetHouseVisuals(int HouseNum) {
	EVec2 TempPnt;
	s32 version;
	Int lotSize;
	EVec3 Offset;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  cFixedWorld__vtable *pcVar4;
  EStorable__vtable *pEVar5;
  ulong *puVar6;
  cFixedWorld *pcVar7;
  NghResFile__0_845 *this_00;
  EHouse__2_990 *pEVar8;
  ERoofs *pEVar9;
  long lVar10;
  ulong uVar11;
  ERoofs **ppEVar12;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  EHouse__26_3190 **ppEVar13;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  long lVar14;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  EVec2 TempPnt;
  EVec3 Offset;
  int version;
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
  
  local_60 = (int)unaff_s2;
  uStack_5c = (int)((ulong)unaff_s2 >> 0x20);
  local_80 = (int)unaff_s0;
  uStack_7c = (int)((ulong)unaff_s0 >> 0x20);
  local_10 = (int)unaff_retaddr;
  uStack_c = (int)((ulong)unaff_retaddr >> 0x20);
  local_20 = (int)unaff_s6;
  uStack_1c = (int)((ulong)unaff_s6 >> 0x20);
  local_30 = (int)unaff_s5;
  uStack_2c = (int)((ulong)unaff_s5 >> 0x20);
  local_40 = (int)unaff_s4;
  uStack_3c = (int)((ulong)unaff_s4 >> 0x20);
  local_50 = (int)unaff_s3;
  uStack_4c = (int)((ulong)unaff_s3 >> 0x20);
  local_70 = (int)unaff_s1;
  uStack_6c = (int)((ulong)unaff_s1 >> 0x20);
  if (this->m_pLevel != (ERLevel *)0x0) {
                    /* end of inlined section */
    uVar11 = (ulong)(HouseNum * 4);
    ppEVar13 = this->m_pHouseData + HouseNum;
    if ((EHouse__2_990 *)*ppEVar13 != (EHouse__2_990 *)0x0) {
      ___6EHouse((EHouse__2_990 *)*ppEVar13,3);
      *ppEVar13 = (EHouse__26_3190 *)0x0;
    }
    puVar1 = (undefined *)((int)&this->m_HouseCoords[HouseNum].field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)(this->m_HouseCoords + HouseNum) & 7;
    TempPnt.field0_0x0 =
         (EVec2__null___1__1)
         ((*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar11 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
         *(ulong *)((int)(this->m_HouseCoords + HouseNum) - uVar3) >> uVar3 * 8);
    puVar1 = (undefined *)((int)&TempPnt.field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar2);
    *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | (ulong)TempPnt.field0_0x0 >> (7 - uVar2) * 8;
    pEVar8 = (EHouse__2_990 *)__builtin_new(0xb8);
    pEVar8 = __6EHouseRC5EVec2iP7ERLevelbN34
                       (pEVar8,&TempPnt,HouseNum + 1U,this->m_pLevel,false,true,false,true);
    this_00 = _5Globs_pNghResFile;
    *ppEVar13 = (EHouse__26_3190 *)pEVar8;
    SetCurrentHouse__10NghResFileUi(this_00,HouseNum + 1U);
    ReconLoadObject__H1Z10cSimulator_PX01P8iResFileisPi_i
              (_5Globs_pSimulator,&_5Globs_pNghResFile->field0_0x0,kSimulatorResType,
               kSimulatorResourceID,&version);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    lVar10 = (*(code *)_5Globs_pSimulator->__vtable->Resume)
                       ((int)&_5Globs_pSimulator->__vtable +
                        (int)*(short *)&_5Globs_pSimulator->__vtable->Pause,0x17);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    lVar14 = 0x40;
    if (lVar10 != 0) {
      lVar14 = lVar10;
    }
    lVar10 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                       ((int)&_5Globs_pFixedWorld->__vtable +
                        (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
    if (lVar14 != lVar10) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pFixedWorld->__vtable->OutOfGrid)
                ((int)&_5Globs_pFixedWorld->__vtable +
                 (int)*(short *)&_5Globs_pFixedWorld->__vtable->OutOfBounds,lVar14,1);
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pFixedWorld->__vtable->GetMaxSize)
              ((int)&_5Globs_pFixedWorld->__vtable +
               (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetSize,_5Globs_pNghResFile,version);
    pcVar7 = _5Globs_pFixedWorld;
    _globals._pCurHouse = *ppEVar13;
    *(undefined4 *)&this->m_bClearpCurHouseOnExit = 1;
    pcVar4 = pcVar7->__vtable;
    (*(code *)pcVar4[1].SetVertexConfig)
              ((int)&pcVar7->__vtable + (int)*(short *)&pcVar4[1].GetVertexConfig,0);
    Init__6EHouse((EHouse__2_990 *)_globals._pCurHouse);
    ppEVar12 = this->m_pRoofs + HouseNum;
    pEVar9 = *ppEVar12;
    if (pEVar9 != (ERoofs *)0x0) {
      pEVar5 = (pEVar9->field0_0x0).field0_0x0.__vtable;
      (*(code *)pEVar5[1].GetTypeKey)
                ((int)((pEVar9->field0_0x0).m_otd.m_minPos + -7) +
                 (int)*(short *)&pEVar5[1].GetTypeName,3);
      *ppEVar12 = (ERoofs *)0x0;
    }
    pEVar9 = (ERoofs *)__builtin_new(0xa4);
    pEVar9 = __6ERoofs(pEVar9);
    *ppEVar12 = pEVar9;
    Offset.field0_0x0.d[1] =
         this->m_HouseCoords[HouseNum].field0_0x0.d[1] - _globals._global_house_offy;
    Offset.field0_0x0.d[2] = 0.0;
    Offset.field0_0x0.d[0] =
         this->m_HouseCoords[HouseNum].field0_0x0.d[0] - _globals._global_house_offx;
    CreateRoof__6ERoofsR5EVec3b(pEVar9,&Offset,false);
    InsertInstance__7ERLevelP9EInstanceT1(this->m_pLevel,&(*ppEVar12)->field0_0x0,(EInstance *)0x0);
  }
  return;
}

bool ENeighborhoodMode::GuidIsOk(int guid) {
  if (guid != -0xaa98909) {
    if (guid < -0xaa98908) {
      if (guid != -0x5bda7f99) {
        if (guid < -0x5bda7f98) {
          if (guid != -0x79a597ee) {
            if (guid < -0x79a597ed) {
              if (guid != -0x7e194107) {
                return true;
              }
            }
            else if (guid != -0x769c283f) {
              return true;
            }
          }
        }
        else if (guid != -0x40e3a104) {
          if (guid < -0x40e3a103) {
            if (guid != -0x5127863b) {
              return true;
            }
          }
          else if ((guid != -0x1dadb92e) && (guid != -0x10ede68c)) {
            return true;
          }
        }
      }
    }
    else if (guid != 0x50907e06) {
      if (guid < 0x50907e07) {
        if (guid != 0x31437ea7) {
          if (guid < 0x31437ea8) {
            if (guid != 0x1cd89442) {
              return true;
            }
          }
          else if ((guid != 0x3eec206c) && (guid != 0x4a0c562f)) {
            return true;
          }
        }
      }
      else if (guid != 0x6acaf6ad) {
        if (guid < 0x6acaf6ae) {
          if (guid != 0x529d2b89) {
            return true;
          }
        }
        else if ((guid != 0x70f69082) && (guid != 0x729c4842)) {
          return true;
        }
      }
    }
  }
  return false;
}

void ENeighborhoodMode::UpdateMovein() {
	int FamilySelected;
	int Selection;
	Family *f;
	HouseInfo HInfo;
	NeighborhoodImpl *NH;
	NeighborhoodImpl *this;
	int HouseNum;
	
  short sVar1;
  Family__vtable *pFVar2;
  EUIVirtualCtrl__vtable *pEVar3;
  NghResFile__0_845 *pFile;
  int iVar4;
  int iVar5;
  int *piVar6;
  Family *f;
  NeighborhoodImpl *pNVar7;
  long lVar8;
  int houseNumber;
  HouseInfo HInfo;
  
  this->m_DrawButtonDescLevel = 1;
  iVar4 = Update__13EFamilySelectPb(this->m_pSelectFamilyMenu,(bool *)0x0);
  if (iVar4 != 0) {
    Reset__13EFamilySelect(this->m_pSelectFamilyMenu);
    *(undefined4 *)&this->m_bMoveIn = 0;
    iVar5 = GetHouseSelection__17ENeighborhoodMode(this);
    houseNumber = iVar5 + 1;
    if (-1 < iVar5) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      piVar6 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                                ((int)&_5Globs_pNeighborhood->__vtable +
                                 (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                 AddFamilyHistoryStat);
      f = (Family *)
          (**(code **)(*piVar6 + 300))((int)piVar6 + (int)*(short *)(*piVar6 + 0x128),iVar4);
                    /* inlined from ../MSrc/neighborhoodimpl.h */
      HInfo.mOccupants = -1;
      HInfo.mMoveInAllowed = 0;
                    /* end of inlined section */
                    /* inlined from ../MSrc/neighborhoodimpl.h */
      HInfo.mIsTutorial = 0;
      HInfo.mHasHouse = 0;
      HInfo.mPrice = 0;
      __13StringBuffer2PUsUi
                ((StringBuffer2 *)&HInfo.mOccupantInfo,HInfo.mOccupantInfo.mName.fChars,0x80);
                    /* end of inlined section */
      pNVar7 = (NeighborhoodImpl *)
               (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                         ((int)&_5Globs_pNeighborhood->__vtable +
                          (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
      pFile = _5Globs_pNghResFile;
                    /* end of inlined section */
      pNVar7->fHouseNum = houseNumber;
      GetHouseInfo__16NeighborhoodImplP10NghResFileiP9HouseInfo
                (pNVar7,(NghResFile__6_845 *)pFile,houseNumber,&HInfo);
      pFVar2 = f->__vtable;
      sVar1 = *(short *)&pFVar2[1].GetIndexedMember;
      iVar4 = (*(code *)pFVar2[1].CountMembers)
                        ((int)&f->__vtable + (int)*(short *)&pFVar2[1].MyDoCommand);
      (*(code *)pFVar2[1].GetMemberByGUID)((int)&f->__vtable + (int)sVar1,iVar4 - HInfo.mPrice);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      pNVar7 = (NeighborhoodImpl *)
               (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                         ((int)&_5Globs_pNeighborhood->__vtable +
                          (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
      MoveIn__16NeighborhoodImplP6Familyi(pNVar7,f,houseNumber);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      piVar6 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                                ((int)&_5Globs_pNeighborhood->__vtable +
                                 (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                 AddFamilyHistoryStat);
      (**(code **)(*piVar6 + 0x94))
                ((int)piVar6 + (int)*(short *)(*piVar6 + 0x90),_5Globs_pNghResFile,
                 _5Globs_iSaveFileVersion);
      return;
    }
  }
  pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar8 = (*(code *)pEVar3[1].GetBut)
                    ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar3[1].ClearBut + -4,0,
                     0x10);
  if ((lVar8 != 0) ||
     (pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable,
     lVar8 = (*(code *)pEVar3[1].GetBut)
                       ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar3[1].ClearBut + -4,1
                        ,0x10), lVar8 != 0)) {
    iVar4 = rand();
    if (iVar4 / 2 << 1 == iVar4 + -1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xd499c13a);
                    /* end of inlined section */
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xae64494b);
    }
                    /* end of inlined section */
    Reset__13EFamilySelect(this->m_pSelectFamilyMenu);
    *(undefined4 *)&this->m_bMoveIn = 0;
  }
  return;
}

bool ENeighborhoodMode::ThereAreFamiliesToMoveIn() {
	FamilyList &fl;
	FamilyImpl **i;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	
  int *piVar1;
  int iVar2;
  int iVar3;
  int **ppiVar4;
  long lVar5;
  int **ppiVar6;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                    ((int)&_5Globs_pNeighborhood->__vtable +
                     (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
                    /* inlined from ../MSrc/Vector.h */
  ppiVar6 = *(int ***)(iVar3 + 0x310);
                    /* end of inlined section */
  if (ppiVar6 != *(int ***)(iVar3 + 0x314)) {
    piVar1 = *ppiVar6;
    while( true ) {
      lVar5 = (**(code **)(*piVar1 + 0x7c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x78));
      if (lVar5 == 0) {
        iVar2 = **ppiVar6;
        lVar5 = (**(code **)(iVar2 + 0x74))((int)*ppiVar6 + (int)*(short *)(iVar2 + 0x70));
        if (lVar5 != 0) {
          return true;
        }
                    /* inlined from ../MSrc/Vector.h */
        ppiVar4 = *(int ***)(iVar3 + 0x314);
      }
      else {
        ppiVar4 = *(int ***)(iVar3 + 0x314);
      }
                    /* end of inlined section */
      ppiVar6 = ppiVar6 + 1;
      if (ppiVar6 == ppiVar4) break;
      piVar1 = *ppiVar6;
    }
  }
  return false;
}

void ENeighborhoodMode::StartCreateAFamily() {
  short *Title;
  
  Title = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"select_a_family_title");
  Init__13EFamilySelectPCUsibT3P16NeighborhoodImplT3
            (this->m_pSelectFamilyMenu,Title,0,true,false,(NeighborhoodImpl *)0x0,true);
  *(undefined4 *)&this->m_bQueryDelete = 0;
  this->m_CreateAFamilyMode = 1;
  return;
}

void ENeighborhoodMode::UpdateCreateAFamilyStage1() {
	bool IsDelete;
	int Selection;
	int Option;
	Neighbor *n[8];
	int i;
	unsigned int n;
	StringBufW255 StString;
	
  EUIVirtualCtrl__vtable *pEVar1;
  EGlobalManagerClient__vtable *pEVar2;
  Neighbor **ppNVar3;
  undefined4 uVar4;
  int iVar5;
  EFamilyConstructData *pEVar6;
  int *piVar7;
  FamilyImpl *pFVar8;
  short *psVar9;
  short *searchString;
  short *substring;
  long lVar10;
  Neighbor **ppNVar11;
  Neighbor **ppNVar12;
  undefined8 unaff_s0;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  Neighbor *n [8];
  StackString2_256_ StString;
  bool IsDelete;
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
  
  ppNVar11 = n;
  ppNVar12 = n;
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (*(int *)&this->m_bQueryDelete == 1) {
    this->m_DrawButtonDescLevel = 1;
    iVar5 = DialogUpdate__11EDialogMenu(&this->m_DialogMenu);
    ppNVar3 = n + 7;
    if (iVar5 == 1) {
      iVar13 = 7;
      do {
        *ppNVar3 = (Neighbor *)0x0;
        iVar13 = iVar13 + -1;
        ppNVar3 = ppNVar3 + -1;
      } while (-1 < iVar13);
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
      uVar14 = 0;
      if ((int)(this->m_pDeleteFamily->fMembers).finish -
          (int)(this->m_pDeleteFamily->fMembers).start >> 2 != 0) {
        do {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
          piVar7 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                                    ((int)&_5Globs_pNeighborhood->__vtable +
                                     (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                     AddFamilyHistoryStat);
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
          uVar15 = uVar14 + 1;
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
          uVar4 = (**(code **)(*piVar7 + 0xdc))
                            ((int)piVar7 + (int)*(short *)(*piVar7 + 0xd8),
                             (this->m_pDeleteFamily->fMembers).start[uVar14].fGUID);
          *ppNVar11 = (Neighbor *)uVar4;
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
          ppNVar11 = ppNVar11 + 1;
          uVar14 = uVar15;
        } while (uVar15 < (uint)((int)(this->m_pDeleteFamily->fMembers).finish -
                                 (int)(this->m_pDeleteFamily->fMembers).start >> 2));
      }
      iVar13 = 7;
      do {
        if (*ppNVar12 != (Neighbor *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
          piVar7 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                                    ((int)&_5Globs_pNeighborhood->__vtable +
                                     (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                     AddFamilyHistoryStat);
          (**(code **)(*piVar7 + 0x154))((int)piVar7 + (int)*(short *)(*piVar7 + 0x150),*ppNVar12);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
          piVar7 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                                    ((int)&_5Globs_pNeighborhood->__vtable +
                                     (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                     AddFamilyHistoryStat);
          (**(code **)(*piVar7 + 0x164))((int)piVar7 + (int)*(short *)(*piVar7 + 0x160),*ppNVar12);
        }
        iVar13 = iVar13 + -1;
        ppNVar12 = (Neighbor **)((int *)ppNVar12 + 1);
      } while (-1 < iVar13);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      piVar7 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                                ((int)&_5Globs_pNeighborhood->__vtable +
                                 (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                 AddFamilyHistoryStat);
      (**(code **)(*piVar7 + 0x144))
                ((int)piVar7 + (int)*(short *)(*piVar7 + 0x140),this->m_pDeleteFamily);
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
                    /* end of inlined section */
      StartCreateAFamily__17ENeighborhoodMode(this);
    }
    if ((iVar5 == 0) || (iVar5 == -2)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x48ae94f);
                    /* end of inlined section */
      StartCreateAFamily__17ENeighborhoodMode(this);
    }
  }
  else {
    this->m_DrawButtonDescLevel = 0;
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar10 = (*(code *)pEVar1[1].GetBut)
                       ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,0
                        ,0x10);
    if ((lVar10 == 0) &&
       (pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable,
       lVar10 = (*(code *)pEVar1[1].GetBut)
                          ((int)(_globals.m_pCtrlPad)->m_pressed +
                           *(short *)&pEVar1[1].ClearBut + -4,1,0x10), lVar10 == 0)) {
      *(undefined4 *)&this->m_bQueryDelete = 0;
      _IsDelete = 0;
      iVar5 = Update__13EFamilySelectPb(this->m_pSelectFamilyMenu,&IsDelete);
      if (iVar5 != 0) {
        if (_IsDelete == 0) {
          pEVar6 = (EFamilyConstructData *)__builtin_new(0x668);
          pEVar6 = __20EFamilyConstructData(pEVar6);
          this->m_pFamilyConstructData = pEVar6;
          PrepCreateAFamilyData__17ENeighborhoodModei(this,iVar5);
          pEVar2 = (_pGfx->field0_0x0).__vtable;
          (*(code *)pEVar2[3].ManagedShutdown)
                    ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar2[3].ManagedStartup);
          *(undefined4 *)_app.m_pGameStateMan = 1;
          StartFamilyEdit__12ECharedPanelP20EFamilyConstructData
                    (this->m_pCharedMode->m_pPanel,this->m_pFamilyConstructData);
          if (_globals.Cheats._0_4_ != 0) {
                    /* end of inlined section */
            SetGameMode__12cSoundPlayerQ23snd5eMode(_5Globs_pSound,kFamily);
          }
          this->m_CreateAFamilyMode = 2;
        }
        else {
          *(undefined4 *)&this->m_bQueryDelete = 1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
          piVar7 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                                    ((int)&_5Globs_pNeighborhood->__vtable +
                                     (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                     AddFamilyHistoryStat);
          pFVar8 = (FamilyImpl *)
                   (**(code **)(*piVar7 + 300))
                             ((int)piVar7 + (int)*(short *)(*piVar7 + 0x128),iVar5);
                    /* inlined from ../MSrc/stringbuffer2.h */
          this->m_pDeleteFamily = pFVar8;
          __13StringBuffer2PUsUi(&StString.field0_0x0,StString.fChars,0x100);
                    /* end of inlined section */
          psVar9 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"delete_family_dialog");
          searchString = c_str__C8BString2(&_sName);
          substring = c_str__C8BString2(&this->m_pDeleteFamily->fName);
          SubstituteString__FPCUsN20Rt12StackString21Ui256(psVar9,searchString,substring,&StString);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
          n[0] = (Neighbor *)0x3e4ccccd;
                    /* end of inlined section */
          n[1] = (Neighbor *)0x3e99999a;
          psVar9 = c_str__C13StringBuffer2(&StString.field0_0x0);
          SetupDialog__11EDialogMenuG5EVec2fiPPCUsPCUsb
                    (&this->m_DialogMenu,(EVec2 *)n,0.6,2,this->m_ppNoYesOptions,psVar9,true);
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
          PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
                    /* end of inlined section */
          Reset__13EFamilySelect(this->m_pSelectFamilyMenu);
        }
      }
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x48ae94f);
                    /* end of inlined section */
      Reset__13EFamilySelect(this->m_pSelectFamilyMenu);
      this->m_CreateAFamilyMode = 0;
    }
  }
  return;
}

void ENeighborhoodMode::UpdateCreateAFamilyStage2() {
	int RetVal;
	int Found;
	int i;
	
  bool bVar1;
  int iVar2;
  EFamilyConstructData *this_00;
  int iVar3;
  
  iVar2 = Update__11ECharedMode(this->m_pCharedMode);
  if (iVar2 == 0) {
    return;
  }
  if (0 < iVar2) {
    bVar1 = false;
    iVar2 = *(int *)this->m_pFamilyConstructData->CharacterInSlot;
    iVar3 = 0;
    while (iVar2 != 1) {
      if (7 < iVar3 + 1) goto LAB_00191684;
      iVar2 = *(int *)(this->m_pFamilyConstructData->CharacterInSlot + iVar3 * 4 + 4);
      iVar3 = iVar3 + 1;
    }
    bVar1 = true;
LAB_00191684:
    if (!bVar1) {
      this_00 = this->m_pFamilyConstructData;
      goto LAB_00191698;
    }
    StoreCreateAFamilyData__17ENeighborhoodMode(this);
  }
  this_00 = this->m_pFamilyConstructData;
LAB_00191698:
  if (this_00 != (EFamilyConstructData *)0x0) {
    ___20EFamilyConstructData(this_00,3);
  }
  this->m_pFamilyConstructData = (EFamilyConstructData *)0x0;
  this->m_CreateAFamilyMode = 1;
  *(undefined4 *)&this->m_bQueryDelete = 0;
  if (_globals.Cheats._0_4_ != 0) {
                    /* end of inlined section */
    SetGameMode__12cSoundPlayerQ23snd5eMode(_5Globs_pSound,kHood);
  }
  Reset__13EFamilySelect(this->m_pSelectFamilyMenu);
  this->m_CreateAFamilyMode = 0;
  return;
}

void ENeighborhoodMode::DrawCreateAFamilyStage1(ERC *prc) {
  if (*(int *)&this->m_bQueryDelete == 1) {
    DialogDraw__11EDialogMenuP3ERCb(&this->m_DialogMenu,prc,true);
  }
  else {
    Draw__13EFamilySelectP3ERC(this->m_pSelectFamilyMenu,prc);
  }
  return;
}

void ENeighborhoodMode::DrawCreateAFamilyStage2(ERC *prc) {
  Draw__11ECharedModeP3ERC(this->m_pCharedMode,prc);
  return;
}

void ENeighborhoodMode::PrepCreateAFamilyData(int FamilyNum) {
	FamilyImpl *f;
	int i;
	Neighbor *n;
	ObjSelector *ObjSel;
	BString2 S;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	Neighbor *this;
	ObjSelector *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  Neighborhood__vtable *pNVar4;
  int iVar5;
  code *pcVar6;
  CustomCharacter *pCVar7;
  ulong *puVar8;
  char *pcVar9;
  Neighborhood *pNVar10;
  StackString2_256_ *this_00;
  int *piVar11;
  short *psVar12;
  undefined2 *puVar13;
  BString2 *str;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  EFamilyConstructData *pEVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  BString2 S;
  
  this->m_FamilyNum = FamilyNum;
  memset(this->m_pFamilyConstructData,0,0x668);
  pEVar17 = this->m_pFamilyConstructData;
  this_00 = (StackString2_256_ *)__builtin_new(0x208);
                    /* inlined from ../MSrc/stringbuffer2.h */
  __13StringBuffer2PUsUi((StringBuffer2 *)this_00,this_00->fChars,0x100);
                    /* end of inlined section */
  pEVar17->FamilyName = this_00;
  if (0 < FamilyNum) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    piVar11 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                               ((int)&_5Globs_pNeighborhood->__vtable +
                                (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                AddFamilyHistoryStat);
    lVar14 = (**(code **)(*piVar11 + 300))
                       ((int)piVar11 + (int)*(short *)(*piVar11 + 0x128),FamilyNum);
    if (lVar14 != 0) {
      pEVar17 = this->m_pFamilyConstructData;
      iVar21 = (int)lVar14;
      psVar12 = c_str__C8BString2((BString2 *)(iVar21 + 4));
                    /* inlined from ../MSrc/stringbuffer2.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/stringbuffer2.h */
      __13StringBuffer2PUsUi((StringBuffer2 *)&S,(short *)((uint)&S | 8),0x100);
      append__13StringBuffer2PCUsi((StringBuffer2 *)&S,psVar12,-1);
      copy__13StringBuffer2RC13StringBuffer2(&pEVar17->FamilyName->field0_0x0,(StringBuffer2 *)&S);
                    /* end of inlined section */
      if (*(int *)(iVar21 + 0x28) - *(int *)(iVar21 + 0x24) >> 2 != 0) {
        pEVar17 = this->m_pFamilyConstructData;
        uVar22 = 0;
        while( true ) {
          pNVar10 = _5Globs_pNeighborhood;
          iVar20 = uVar22 * 4;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
          *(undefined4 *)(pEVar17->CharacterInSlot + iVar20) = 1;
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
          this->m_pFamilyConstructData->Guid[uVar22] = *(int *)(*(int *)(iVar21 + 0x24) + iVar20);
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
          this->m_OriginalGuids[uVar22] = *(int *)(*(int *)(iVar21 + 0x24) + iVar20);
          pNVar4 = pNVar10->__vtable;
          piVar11 = (int *)(*(code *)pNVar4[1].GetImpl)
                                     ((int)&pNVar10->__vtable +
                                      (int)*(short *)&pNVar4[1].AddFamilyHistoryStat);
          iVar5 = *piVar11;
          uVar19 = (ulong)iVar5;
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
          puVar13 = (undefined2 *)
                    (**(code **)(iVar5 + 0xdc))
                              ((int)piVar11 + (int)*(short *)(iVar5 + 0xd8),
                               *(undefined4 *)(*(int *)(iVar21 + 0x24) + iVar20));
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
          piVar11 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                                     ((int)&_5Globs_pNeighborhood->__vtable +
                                      (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                      AddFamilyHistoryStat);
          pcVar6 = *(code **)(*piVar11 + 0xe4);
          uVar18 = (ulong)(int)pcVar6;
          uVar15 = (*pcVar6)((int)piVar11 + (int)*(short *)(*piVar11 + 0xe0),*puVar13);
          pEVar17 = this->m_pFamilyConstructData;
                    /* inlined from ../MSrc/objselector.h */
          pCVar7 = ((ObjSelector *)uVar15)->fCustomCharacter;
                    /* end of inlined section */
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
          uVar2 = (uint)&pCVar7->field_0x7 & 7;
          uVar3 = (uint)pCVar7 & 7;
          uVar16 = (*(long *)(&pCVar7->field_0x7 + -uVar2) << (7 - uVar2) * 8 |
                   uVar15 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                   *(ulong *)((int)pCVar7 - uVar3) >> uVar3 * 8;
          uVar2 = (uint)&pCVar7->m_nFacialHairIndex & 7;
          uVar3 = (uint)&pCVar7->m_nBodyType & 7;
          uVar18 = (*(long *)(&pCVar7->m_nFacialHairIndex + -uVar2) << (7 - uVar2) * 8 |
                   uVar18 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                   *(ulong *)(&pCVar7->m_nBodyType + -uVar3) >> uVar3 * 8;
          uVar2 = (uint)&pCVar7->field_0x17 & 7;
          uVar3 = (uint)&pCVar7->m_nSkinColor & 7;
          uVar19 = (*(long *)(&pCVar7->field_0x17 + -uVar2) << (7 - uVar2) * 8 |
                   uVar19 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                   *(ulong *)(&pCVar7->m_nSkinColor + -uVar3) >> uVar3 * 8;
          puVar1 = &pEVar17->CustomData[uVar22].c.field_0x7;
          uVar2 = (uint)puVar1 & 7;
          puVar8 = (ulong *)(puVar1 + -uVar2);
          *puVar8 = *puVar8 & -1L << (uVar2 + 1) * 8 | uVar16 >> (7 - uVar2) * 8;
          pCVar7 = &pEVar17->CustomData[uVar22].c;
          uVar2 = (uint)pCVar7 & 7;
          puVar8 = (ulong *)((int)pCVar7 - uVar2);
          *puVar8 = uVar16 << uVar2 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
          pcVar9 = &pEVar17->CustomData[uVar22].c.m_nFacialHairIndex;
          uVar2 = (uint)pcVar9 & 7;
          pcVar9 = pcVar9 + -uVar2;
          *(ulong *)pcVar9 = *(ulong *)pcVar9 & -1L << (uVar2 + 1) * 8 | uVar18 >> (7 - uVar2) * 8;
          pcVar9 = &pEVar17->CustomData[uVar22].c.m_nBodyType;
          uVar2 = (uint)pcVar9 & 7;
          pcVar9 = pcVar9 + -uVar2;
          *(ulong *)pcVar9 =
               uVar18 << uVar2 * 8 | *(ulong *)pcVar9 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
          puVar1 = &pEVar17->CustomData[uVar22].c.field_0x17;
          uVar2 = (uint)puVar1 & 7;
          puVar8 = (ulong *)(puVar1 + -uVar2);
          *puVar8 = *puVar8 & -1L << (uVar2 + 1) * 8 | uVar19 >> (7 - uVar2) * 8;
          pcVar9 = &pEVar17->CustomData[uVar22].c.m_nSkinColor;
          uVar2 = (uint)pcVar9 & 7;
          pcVar9 = pcVar9 + -uVar2;
          *(ulong *)pcVar9 =
               uVar19 << uVar2 * 8 | *(ulong *)pcVar9 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
          this->m_pFamilyConstructData->CustomData[uVar22].m_nPersNice =
               (uchar)((int)(short)puVar13[0x34] / 100);
          this->m_pFamilyConstructData->CustomData[uVar22].m_nPersActive =
               (uchar)((int)(short)puVar13[0x35] / 100);
          this->m_pFamilyConstructData->CustomData[uVar22].m_nPersGenerous =
               (uchar)((int)(short)puVar13[0x36] / 100);
          this->m_pFamilyConstructData->CustomData[uVar22].m_nPersPlayful =
               (uchar)((int)(short)puVar13[0x37] / 100);
          this->m_pFamilyConstructData->CustomData[uVar22].m_nPersOutgoing =
               (uchar)((int)(short)puVar13[0x38] / 100);
          this->m_pFamilyConstructData->CustomData[uVar22].m_nPersNeat =
               (uchar)((int)(short)puVar13[0x39] / 100);
          this->m_pFamilyConstructData->CustomData[uVar22].m_ZodiacSign = *(uchar *)(puVar13 + 0x78)
          ;
          str = GetUserName__11ObjSelector((ObjSelector *)uVar15);
          __8BString2RC8BString2UiUi(&S,str,0,0xffffffff);
          pEVar17 = this->m_pFamilyConstructData;
          psVar12 = c_str__C8BString2(&S);
          wcscpy__FPUsPCUs(pEVar17->CustomData[uVar22].Name,psVar12);
          ___8BString2(&S,2);
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
          if ((uint)(*(int *)(iVar21 + 0x28) - *(int *)(iVar21 + 0x24) >> 2) <= uVar22 + 1) break;
          pEVar17 = this->m_pFamilyConstructData;
          uVar22 = uVar22 + 1;
        }
      }
    }
  }
  return;
}

void ENeighborhoodMode::StoreCreateAFamilyData() {
	FamilyImpl *f;
	int i;
	int j;
	Neighbor *n;
	CustomCharacter *c;
	ObjSelector *ObjSel;
	bool found;
	Neighbor *deletelist[8];
	int deletecount;
	SInt32 GUID;
	unsigned int n;
	BString2 S;
	Neighbor *this;
	ObjSelector *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	BString2 S;
	Neighbor *this;
	ObjSelector *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ETexture *pTexture;
  EFamilyConstructData *pEVar4;
  CustomCharacter *pCVar5;
  ulong *puVar6;
  char *pcVar7;
  ushort uVar8;
  int *piVar9;
  short *s;
  undefined4 uVar10;
  ObjSelector *pOVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  bool *pbVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  ulong in_t0;
  Neighbor **ppNVar21;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  Neighbor **ppNVar22;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  uint uVar23;
  int iVar24;
  int iVar25;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  Neighbor *deletelist [8];
  BString2 S;
  Neighbor *n;
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
  
  ppNVar22 = deletelist;
  ppNVar21 = deletelist;
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
  if (this->m_FamilyNum < 1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    piVar9 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                              ((int)&_5Globs_pNeighborhood->__vtable +
                               (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                               AddFamilyHistoryStat);
    lVar13 = (**(code **)(*piVar9 + 0x13c))((int)piVar9 + (int)*(short *)(*piVar9 + 0x138));
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    piVar9 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                              ((int)&_5Globs_pNeighborhood->__vtable +
                               (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                               AddFamilyHistoryStat);
    lVar13 = (**(code **)(*piVar9 + 300))
                       ((int)piVar9 + (int)*(short *)(*piVar9 + 0x128),this->m_FamilyNum);
  }
  if (lVar13 == 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this->m_pFamilyConstructData->FamilyName);
                    /* end of inlined section */
    this->m_pFamilyConstructData->FamilyName = (StackString2_256_ *)0x0;
  }
  else {
    iVar25 = (int)lVar13;
    iVar24 = 0;
    uVar23 = 0;
    s = c_str__C13StringBuffer2(&this->m_pFamilyConstructData->FamilyName->field0_0x0);
    assign__8BString2PCUs((BString2 *)(iVar25 + 4),s);
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this->m_pFamilyConstructData->FamilyName);
                    /* end of inlined section */
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
    this->m_pFamilyConstructData->FamilyName = (StackString2_256_ *)0x0;
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
    if (*(int *)(iVar25 + 0x28) - *(int *)(iVar25 + 0x24) >> 2 != 0) {
      iVar12 = *(int *)(iVar25 + 0x24);
      while( true ) {
        iVar20 = 0;
        iVar19 = 7;
        pbVar17 = this->m_pFamilyConstructData->CharacterInSlot;
        iVar12 = *(int *)(iVar12 + uVar23 * 4);
        piVar9 = this->m_pFamilyConstructData->Guid;
        do {
                    /* end of inlined section */
          if ((*(int *)pbVar17 == 1) && (*piVar9 == iVar12)) {
            iVar20 = *(int *)pbVar17;
          }
          piVar9 = piVar9 + 1;
          iVar19 = iVar19 + -1;
          pbVar17 = pbVar17 + 4;
        } while (-1 < iVar19);
        if (iVar20 == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
          iVar24 = iVar24 + 1;
          piVar9 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                                    ((int)&_5Globs_pNeighborhood->__vtable +
                                     (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                     AddFamilyHistoryStat);
          uVar10 = (**(code **)(*piVar9 + 0xdc))
                             ((int)piVar9 + (int)*(short *)(*piVar9 + 0xd8),iVar12);
          *ppNVar22 = (Neighbor *)uVar10;
          ppNVar22 = ppNVar22 + 1;
                    /* inlined from ../MSrc/Vector.h */
          iVar12 = *(int *)(iVar25 + 0x28);
        }
        else {
          iVar12 = *(int *)(iVar25 + 0x28);
        }
                    /* end of inlined section */
        uVar23 = uVar23 + 1;
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
        if ((uint)(iVar12 - *(int *)(iVar25 + 0x24) >> 2) <= uVar23) break;
        iVar12 = *(int *)(iVar25 + 0x24);
      }
    }
    if ((0 < iVar24) && (0 < iVar24)) {
      do {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        iVar24 = iVar24 + -1;
        piVar9 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                                  ((int)&_5Globs_pNeighborhood->__vtable +
                                   (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                   AddFamilyHistoryStat);
        (**(code **)(*piVar9 + 0x154))((int)piVar9 + (int)*(short *)(*piVar9 + 0x150),*ppNVar21);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        piVar9 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                                  ((int)&_5Globs_pNeighborhood->__vtable +
                                   (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                   AddFamilyHistoryStat);
        uVar10 = *ppNVar21;
        ppNVar21 = ppNVar21 + 1;
        (**(code **)(*piVar9 + 0x164))((int)piVar9 + (int)*(short *)(*piVar9 + 0x160),uVar10);
      } while (iVar24 != 0);
    }
    iVar25 = 0;
    iVar24 = 0;
    do {
      if (*(int *)(this->m_pFamilyConstructData->CharacterInSlot + iVar25 * 4) != 0) {
        if (this->m_pFamilyConstructData->Guid[iVar25] == 0) {
                    /* end of inlined section */
          n = (Neighbor *)0x0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
          (*(code *)_5Globs_pNeighborhood->__vtable[1].LoadPersistentData)
                    ((int)&_5Globs_pNeighborhood->__vtable +
                     (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].GetNextNeighborID,&n);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
          piVar9 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                                    ((int)&_5Globs_pNeighborhood->__vtable +
                                     (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                     AddFamilyHistoryStat);
          (**(code **)(*piVar9 + 0x14c))((int)piVar9 + (int)*(short *)(*piVar9 + 0x148),n,lVar13);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
          piVar9 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                                    ((int)&_5Globs_pNeighborhood->__vtable +
                                     (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                     AddFamilyHistoryStat);
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
          uVar14 = (**(code **)(*piVar9 + 0xe4))
                             ((int)piVar9 + (int)*(short *)(*piVar9 + 0xe0),n->fID);
          iVar12 = (int)this->m_pFamilyConstructData->CustomData[0].Name + iVar24 + -0x24;
          uVar16 = (ulong)iVar12;
          pTexture = *(ETexture **)(iVar12 + 100);
          uVar18 = (ulong)(int)pTexture;
          pOVar11 = (ObjSelector *)uVar14;
          SetThumbnail__11ObjSelectorP8ETexture(pOVar11,pTexture);
          pEVar4 = this->m_pFamilyConstructData;
                    /* inlined from ../MSrc/objselector.h */
          pCVar5 = pOVar11->fCustomCharacter;
          uVar23 = (int)pEVar4->CustomData[0].Name + iVar24 + -0x11;
                    /* end of inlined section */
          uVar2 = uVar23 & 7;
          uVar1 = (int)pEVar4->CustomData[0].Name + iVar24 + -0x18;
          uVar3 = uVar1 & 7;
          uVar16 = (*(long *)(uVar23 - uVar2) << (7 - uVar2) * 8 |
                   uVar16 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                   *(ulong *)(uVar1 - uVar3) >> uVar3 * 8;
          uVar23 = (int)pEVar4->CustomData[0].Name + iVar24 + -9;
          uVar2 = uVar23 & 7;
          uVar1 = (int)pEVar4->CustomData[0].Name + iVar24 + -0x10;
          uVar3 = uVar1 & 7;
          uVar14 = (*(long *)(uVar23 - uVar2) << (7 - uVar2) * 8 |
                   uVar14 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                   *(ulong *)(uVar1 - uVar3) >> uVar3 * 8;
          uVar23 = (int)pEVar4->CustomData[0].Name + iVar24 + -1;
          uVar2 = uVar23 & 7;
          uVar1 = (int)pEVar4->CustomData[0].Name + iVar24 + -8;
          uVar3 = uVar1 & 7;
          uVar18 = (*(long *)(uVar23 - uVar2) << (7 - uVar2) * 8 |
                   uVar18 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                   *(ulong *)(uVar1 - uVar3) >> uVar3 * 8;
          uVar23 = (uint)&pCVar5->field_0x7 & 7;
          puVar6 = (ulong *)(&pCVar5->field_0x7 + -uVar23);
          *puVar6 = *puVar6 & -1L << (uVar23 + 1) * 8 | uVar16 >> (7 - uVar23) * 8;
          uVar23 = (uint)pCVar5 & 7;
          *(ulong *)((int)pCVar5 - uVar23) =
               uVar16 << uVar23 * 8 |
               *(ulong *)((int)pCVar5 - uVar23) & 0xffffffffffffffffU >> (8 - uVar23) * 8;
          uVar23 = (uint)&pCVar5->m_nFacialHairIndex & 7;
          pcVar7 = &pCVar5->m_nFacialHairIndex + -uVar23;
          *(ulong *)pcVar7 = *(ulong *)pcVar7 & -1L << (uVar23 + 1) * 8 | uVar14 >> (7 - uVar23) * 8
          ;
          uVar23 = (uint)&pCVar5->m_nBodyType & 7;
          pcVar7 = &pCVar5->m_nBodyType + -uVar23;
          *(ulong *)pcVar7 =
               uVar14 << uVar23 * 8 | *(ulong *)pcVar7 & 0xffffffffffffffffU >> (8 - uVar23) * 8;
          uVar23 = (uint)&pCVar5->field_0x17 & 7;
          puVar6 = (ulong *)(&pCVar5->field_0x17 + -uVar23);
          *puVar6 = *puVar6 & -1L << (uVar23 + 1) * 8 | uVar18 >> (7 - uVar23) * 8;
          uVar23 = (uint)&pCVar5->m_nSkinColor & 7;
          pcVar7 = &pCVar5->m_nSkinColor + -uVar23;
          *(ulong *)pcVar7 =
               uVar18 << uVar23 * 8 | *(ulong *)pcVar7 & 0xffffffffffffffffU >> (8 - uVar23) * 8;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
          n->fData[2] = (ushort)*(byte *)((int)this->m_pFamilyConstructData->CustomData[0].Name +
                                         iVar24 + -0x24) * 100;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
          n->fData[3] = (ushort)*(byte *)((int)this->m_pFamilyConstructData->CustomData[0].Name +
                                         iVar24 + -0x23) * 100;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
          n->fData[4] = (ushort)*(byte *)((int)this->m_pFamilyConstructData->CustomData[0].Name +
                                         iVar24 + -0x22) * 100;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
          n->fData[5] = (ushort)*(byte *)((int)this->m_pFamilyConstructData->CustomData[0].Name +
                                         iVar24 + -0x21) * 100;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
          n->fData[6] = (ushort)*(byte *)((int)this->m_pFamilyConstructData->CustomData[0].Name +
                                         iVar24 + -0x20) * 100;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
          n->fData[7] = (ushort)*(byte *)((int)this->m_pFamilyConstructData->CustomData[0].Name +
                                         iVar24 + -0x1f) * 100;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
          n->fData[0x46] =
               (ushort)*(byte *)((int)this->m_pFamilyConstructData->CustomData[0].Name +
                                iVar24 + -0x1e);
          if (*(int *)((int)this->m_pFamilyConstructData->CustomData[0].Name + iVar24 + -0x14) == 1)
          {
            uVar8 = 0x1b;
                    /* end of inlined section */
          }
          else {
                    /* end of inlined section */
            uVar8 = 0xc;
          }
          n->fData[0x3a] = uVar8;
          __8BString2PCUs(&S,(short *)((int)this->m_pFamilyConstructData->CustomData[0].Name +
                                      iVar24));
          SetUserName__11ObjSelectorRC8BString2(pOVar11,&S);
          ___8BString2(&S,2);
        }
        else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
          piVar9 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                                    ((int)&_5Globs_pNeighborhood->__vtable +
                                     (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                     AddFamilyHistoryStat);
          lVar15 = (**(code **)(*piVar9 + 0xdc))
                             ((int)piVar9 + (int)*(short *)(*piVar9 + 0xd8),
                              this->m_pFamilyConstructData->Guid[iVar25]);
          n = (Neighbor *)lVar15;
          if (lVar15 == 0) goto LAB_001920cc;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
          piVar9 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                                    ((int)&_5Globs_pNeighborhood->__vtable +
                                     (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                     AddFamilyHistoryStat);
          iVar12 = *piVar9;
          uVar16 = (ulong)iVar12;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
          pOVar11 = (ObjSelector *)
                    (**(code **)(iVar12 + 0xe4))
                              ((int)piVar9 + (int)*(short *)(iVar12 + 0xe0),n->fID);
          SetThumbnail__11ObjSelectorP8ETexture
                    (pOVar11,*(ETexture **)
                              ((int)this->m_pFamilyConstructData->CustomData[0].Name + iVar24 + 0x40
                              ));
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/objselector.h */
          pCVar5 = pOVar11->fCustomCharacter;
                    /* end of inlined section */
          n->fData[2] = (ushort)*(byte *)((int)this->m_pFamilyConstructData->CustomData[0].Name +
                                         iVar24 + -0x24) * 100;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
          n->fData[3] = (ushort)*(byte *)((int)this->m_pFamilyConstructData->CustomData[0].Name +
                                         iVar24 + -0x23) * 100;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
          n->fData[4] = (ushort)*(byte *)((int)this->m_pFamilyConstructData->CustomData[0].Name +
                                         iVar24 + -0x22) * 100;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
          n->fData[5] = (ushort)*(byte *)((int)this->m_pFamilyConstructData->CustomData[0].Name +
                                         iVar24 + -0x21) * 100;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
          n->fData[6] = (ushort)*(byte *)((int)this->m_pFamilyConstructData->CustomData[0].Name +
                                         iVar24 + -0x20) * 100;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
          n->fData[7] = (ushort)*(byte *)((int)this->m_pFamilyConstructData->CustomData[0].Name +
                                         iVar24 + -0x1f) * 100;
          iVar12 = (int)this->m_pFamilyConstructData->CustomData[0].Name + iVar24 + -0x24;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
          uVar14 = (ulong)iVar12;
          n->fData[0x46] = (ushort)*(byte *)(iVar12 + 6);
          __8BString2PCUs(&S,(short *)((int)this->m_pFamilyConstructData->CustomData[0].Name +
                                      iVar24));
          SetUserName__11ObjSelectorRC8BString2(pOVar11,&S);
          pEVar4 = this->m_pFamilyConstructData;
          uVar23 = (int)pEVar4->CustomData[0].Name + iVar24 + -0x11;
          uVar2 = uVar23 & 7;
          uVar1 = (int)pEVar4->CustomData[0].Name + iVar24 + -0x18;
          uVar3 = uVar1 & 7;
          in_t0 = (*(long *)(uVar23 - uVar2) << (7 - uVar2) * 8 |
                  in_t0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                  *(ulong *)(uVar1 - uVar3) >> uVar3 * 8;
          uVar23 = (int)pEVar4->CustomData[0].Name + iVar24 + -9;
          uVar2 = uVar23 & 7;
          uVar1 = (int)pEVar4->CustomData[0].Name + iVar24 + -0x10;
          uVar3 = uVar1 & 7;
          uVar14 = (*(long *)(uVar23 - uVar2) << (7 - uVar2) * 8 |
                   uVar14 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                   *(ulong *)(uVar1 - uVar3) >> uVar3 * 8;
          uVar23 = (int)pEVar4->CustomData[0].Name + iVar24 + -1;
          uVar2 = uVar23 & 7;
          uVar1 = (int)pEVar4->CustomData[0].Name + iVar24 + -8;
          uVar3 = uVar1 & 7;
          uVar16 = (*(long *)(uVar23 - uVar2) << (7 - uVar2) * 8 |
                   uVar16 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                   *(ulong *)(uVar1 - uVar3) >> uVar3 * 8;
          uVar23 = (uint)&pCVar5->field_0x7 & 7;
          puVar6 = (ulong *)(&pCVar5->field_0x7 + -uVar23);
          *puVar6 = *puVar6 & -1L << (uVar23 + 1) * 8 | in_t0 >> (7 - uVar23) * 8;
          uVar23 = (uint)pCVar5 & 7;
          *(ulong *)((int)pCVar5 - uVar23) =
               in_t0 << uVar23 * 8 |
               *(ulong *)((int)pCVar5 - uVar23) & 0xffffffffffffffffU >> (8 - uVar23) * 8;
          uVar23 = (uint)&pCVar5->m_nFacialHairIndex & 7;
          pcVar7 = &pCVar5->m_nFacialHairIndex + -uVar23;
          *(ulong *)pcVar7 = *(ulong *)pcVar7 & -1L << (uVar23 + 1) * 8 | uVar14 >> (7 - uVar23) * 8
          ;
          uVar23 = (uint)&pCVar5->m_nBodyType & 7;
          pcVar7 = &pCVar5->m_nBodyType + -uVar23;
          *(ulong *)pcVar7 =
               uVar14 << uVar23 * 8 | *(ulong *)pcVar7 & 0xffffffffffffffffU >> (8 - uVar23) * 8;
          uVar23 = (uint)&pCVar5->field_0x17 & 7;
          puVar6 = (ulong *)(&pCVar5->field_0x17 + -uVar23);
          *puVar6 = *puVar6 & -1L << (uVar23 + 1) * 8 | uVar16 >> (7 - uVar23) * 8;
          uVar23 = (uint)&pCVar5->m_nSkinColor & 7;
          pcVar7 = &pCVar5->m_nSkinColor + -uVar23;
          *(ulong *)pcVar7 =
               uVar16 << uVar23 * 8 | *(ulong *)pcVar7 & 0xffffffffffffffffU >> (8 - uVar23) * 8;
          ___8BString2(&S,2);
        }
        iVar12 = GetLatestPersDataVersion__8Neighbor();
        n->fPersonDataVersion = iVar12;
      }
LAB_001920cc:
      iVar25 = iVar25 + 1;
      iVar24 = iVar24 + 0xc4;
    } while (iVar25 < 8);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    piVar9 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                              ((int)&_5Globs_pNeighborhood->__vtable +
                               (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                               AddFamilyHistoryStat);
    (**(code **)(*piVar9 + 0x94))
              ((int)piVar9 + (int)*(short *)(*piVar9 + 0x90),_5Globs_pNghResFile,
               _5Globs_iSaveFileVersion);
  }
  return;
}

void ENeighborhoodMode::UpdateLoadMode() {
  if (this->m_LoadScreenNumber == 0) {
    SetLoadNeighborhoodMode__12ESimsMemCard(_globals.m_pMemCard);
    this->m_LoadScreenNumber = this->m_LoadScreenNumber + 1;
  }
  else if (*(int *)_globals.m_pMemCard == 0) {
    this->m_NeighborhoodSubmode = 0;
  }
  else {
    StartHouseSelection__17ENeighborhoodMode(this);
  }
  return;
}

void ENeighborhoodMode::UpdateOptionsMode() {
  EUIVirtualCtrl__vtable *pEVar1;
  long lVar2;
  
  pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar2 = (*(code *)pEVar1[1].GetBut)
                    ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,0,
                     0x40);
  if (lVar2 == 0) {
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar2 = (*(code *)pEVar1[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,1,
                       0x40);
    if (lVar2 != 0) {
      this->m_NeighborhoodSubmode = 0;
    }
  }
  else {
    this->m_NeighborhoodSubmode = 0;
  }
  return;
}

void ENeighborhoodMode::DrawLoadMode(ERC *prc) {
  return;
}

void ENeighborhoodMode::DrawOptionsMode(ERC *prc) {
	EVec2 vPos;
	float y;
	ERC *prc;
	ERC *prc;
	
  ERFont *this_00;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  float aspect;
  EVec2 vPos;
  float local_d0;
  float local_cc;
  undefined4 local_c0;
  float local_bc;
  float local_b0;
  undefined4 local_ac;
  undefined4 local_a0;
  float local_9c;
  float local_90;
  undefined4 local_8c;
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
  
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  Select__9E3DWindowP3ERC(&this->m_TempWin,prc);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  aspect = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPos.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPos.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_c0 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_ac = 0;
                    /* end of inlined section */
  local_d0 = aspect;
  local_cc = aspect;
  local_bc = aspect;
  local_b0 = aspect;
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vPos,&local_d0,
             (EVec2 *)&local_c0,&local_b0,0x35f4d0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPos.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPos.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_a0 = 0;
  local_8c = 0;
                    /* end of inlined section */
  local_d0 = aspect;
  local_cc = aspect;
  local_9c = aspect;
  local_90 = aspect;
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vPos,&local_d0,
             &local_a0,&local_90,0x35f4b0);
  this_00 = _globals.m_pFont;
  SetSize__6ERFontffb(_globals.m_pFont,25.0,aspect,true);
  uVar3 = _WHITE.field0_0x0.d[3];
  uVar2 = _WHITE.field0_0x0.d[2];
  uVar1 = _WHITE.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  (this_00->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (this_00->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar1 >> 0x20);
  (this_00->m_vColor).field0_0x0.d[2] = uVar2;
  (this_00->m_vColor).field0_0x0.d[3] = uVar3;
  Select__6ERFontP3ERC(this_00,prc);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_bc = _13EUIObjectNode_SAFE_TOP;
  local_d0 = 0.5;
  local_cc = _13EUIObjectNode_SAFE_TOP;
  local_c0 = 0x3f000000;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this_00,prc,"OPTIONS SCREEN",false,(EVec2 *)&local_c0,E_FAX_CENTER,E_FAY_TOP,&vPos);
                    /* end of inlined section */
  SetSize__6ERFontffb(this_00,15.0,aspect,true);
  Select__6ERFontP3ERC(this_00,prc);
  uVar3 = _WHITE.field0_0x0.d[3];
  uVar2 = _WHITE.field0_0x0.d[2];
  uVar1 = _WHITE.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  (this_00->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (this_00->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar1 >> 0x20);
  (this_00->m_vColor).field0_0x0.d[2] = uVar2;
  (this_00->m_vColor).field0_0x0.d[3] = uVar3;
  local_d0 = 0.5;
  local_cc = 0.35;
  local_c0 = 0x3f000000;
  local_bc = 0.35;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this_00,prc,"Press X button to exit options screen",false,(EVec2 *)&local_c0,
             E_FAX_CENTER,E_FAY_TOP,&vPos);
  return;
}

void ENeighborhoodMode::HouseSelectGoToHoodSelect() {
	int i;
	
  ERoofs *pEVar1;
  EStorable__vtable *pEVar2;
  EHouseSelectMenu *pEVar3;
  EUIObjectNode__vtable *pEVar4;
  ERoofs **ppEVar5;
  int iVar6;
  
                    /* end of inlined section */
  iVar6 = 7;
  ppEVar5 = this->m_pRoofs;
  do {
    if ((EHouse__2_990 *)ppEVar5[-8] == (EHouse__2_990 *)0x0) {
      pEVar1 = *ppEVar5;
    }
    else {
      ___6EHouse((EHouse__2_990 *)ppEVar5[-8],3);
      ppEVar5[-8] = (ERoofs *)0x0;
      pEVar1 = *ppEVar5;
    }
    if (pEVar1 != (ERoofs *)0x0) {
      pEVar2 = (pEVar1->field0_0x0).field0_0x0.__vtable;
      (*(code *)pEVar2[1].GetTypeKey)
                ((int)((pEVar1->field0_0x0).m_otd.m_minPos + -7) +
                 (int)*(short *)&pEVar2[1].GetTypeName,3);
      *ppEVar5 = (ERoofs *)0x0;
    }
    *(undefined4 *)&this->m_bClearpCurHouseOnExit = 0;
    ppEVar5 = ppEVar5 + 1;
    iVar6 = iVar6 + -1;
    _globals._pCurHouse = (EHouse__26_3190 *)0x0;
  } while (-1 < iVar6);
  pEVar3 = this->m_pHouseSelectMenu;
  if (pEVar3 != (EHouseSelectMenu *)0x0) {
    pEVar4 = (pEVar3->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar4->Draw)
              ((int)(pEVar3->field0_0x0).field0_0x0.m_maxBackShdrSize +
               *(short *)&pEVar4->Update + -0x44,3);
    this->m_pHouseSelectMenu = (EHouseSelectMenu *)0x0;
  }
  if (this->m_pSelectFamilyMenu != (EFamilySelect *)0x0) {
    ___13EFamilySelect(this->m_pSelectFamilyMenu,3);
    this->m_pSelectFamilyMenu = (EFamilySelect *)0x0;
  }
  CleanupLevel__17ENeighborhoodMode(this);
  if (_globals.Cheats._0_4_ != 0) {
                    /* end of inlined section */
    SetGameMode__12cSoundPlayerQ23snd5eMode(_5Globs_pSound,kLoad);
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/maingamemenus.h */
                    /* end of inlined section */
  this->m_NeighborhoodSubmode = 0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/maingamemenus.h */
  (this->m_MainMenu).m_ReturnCode = -1;
                    /* end of inlined section */
  *(undefined4 *)&(this->m_MainMenu).m_bWaitForButtonUp = 1;
  DestroyOrphans__12EParticleMan(&_pclman);
  return;
}

void ENeighborhoodMode::UpdateExitScreen() {
	int Choice;
	
  int iVar1;
  
  iVar1 = DialogUpdate__11EDialogMenu(&this->m_DialogMenu);
  if (iVar1 != -1) {
    if (iVar1 == 1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
                    /* end of inlined section */
      *(undefined4 *)&this->m_bExitScreen = 0;
      HouseSelectGoToHoodSelect__17ENeighborhoodMode(this);
    }
    else if ((iVar1 == -2) || (iVar1 == 0)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x48ae94f);
                    /* end of inlined section */
      *(undefined4 *)&this->m_bExitScreen = 0;
    }
  }
  return;
}

void ENeighborhoodMode::UpdateSaveScreen() {
	int Choice;
	
  Neighborhood__vtable *pNVar1;
  Neighborhood *pNVar2;
  int iVar3;
  int *piVar4;
  
  if ((*(int *)&this->m_bWaitForSaveReturn == 1) &&
     (*(int *)&(_globals.m_pMemCard)->m_bSaveSuccessful == 1)) {
    *(undefined4 *)&this->m_bSaveScreen = 0;
  }
  else {
    iVar3 = DialogUpdate__11EDialogMenu(&this->m_DialogMenu);
    if (iVar3 != -1) {
      if (iVar3 == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
        PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
        pNVar2 = _5Globs_pNeighborhood;
                    /* end of inlined section */
        *(undefined4 *)&this->m_bWaitForSaveReturn = 1;
        pNVar1 = pNVar2->__vtable;
        piVar4 = (int *)(*(code *)pNVar1[1].GetImpl)
                                  ((int)&pNVar2->__vtable +
                                   (int)*(short *)&pNVar1[1].AddFamilyHistoryStat);
        (**(code **)(*piVar4 + 0x94))
                  ((int)piVar4 + (int)*(short *)(*piVar4 + 0x90),_5Globs_pNghResFile,
                   _5Globs_iSaveFileVersion);
        SetSaveNeighborhoodAndConfigMode__12ESimsMemCard(_globals.m_pMemCard);
      }
      else if ((iVar3 == -2) || (iVar3 == 1)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
        PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x48ae94f);
                    /* end of inlined section */
        *(undefined4 *)&this->m_bSaveScreen = 0;
      }
    }
  }
  return;
}

void ENeighborhoodMode::DrawExitScreen(ERC *prc) {
  DialogDraw__11EDialogMenuP3ERCb(&this->m_DialogMenu,prc,true);
  return;
}

void ENeighborhoodMode::DrawSaveScreen(ERC *prc) {
  DialogDraw__11EDialogMenuP3ERCb(&this->m_DialogMenu,prc,true);
  return;
}

EFamilyConstructData* EFamilyConstructData::EFamilyConstructData() {
  EFamilyConstructData *pEVar1;
  int iVar2;
  
  iVar2 = 7;
  pEVar1 = this;
  do {
                    /* inlined from c:/eor/src2/games/sims/ESRC/neighborhoodmode.h */
    iVar2 = iVar2 + -1;
    __15CustomCharacter(&pEVar1->CustomData[0].c);
                    /* end of inlined section */
    pEVar1 = (EFamilyConstructData *)(pEVar1->CustomData + 1);
  } while (iVar2 != -1);
  this->FamilyName = (StackString2_256_ *)0x0;
  return this;
}

void EFamilyConstructData::~EFamilyConstructData(int __in_chrg) {
	void *pAddress;
	
  if (this->FamilyName != (StackString2_256_ *)0x0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this->FamilyName);
                    /* end of inlined section */
    this->FamilyName = (StackString2_256_ *)0x0;
  }
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void ENeighborhoodMode::UpdateImport() {
	int Choice;
	
  NghResFile__0_845 *pNVar1;
  iResFile__0_3211__vtable *piVar2;
  int iVar3;
  
  if (this->m_ImportMode == -1) {
    pNVar1 = this->m_pImportResFile;
    *(undefined4 *)&this->m_bImportActive = 0;
    this->m_ImportMode = 0;
    if (pNVar1 != (NghResFile__0_845 *)0x0) {
      piVar2 = (pNVar1->field0_0x0).__vtable;
      (*(code *)piVar2->Create)
                ((int)pNVar1->m_ppHouseWriteInfo + *(short *)&piVar2->_dyncastimpl + -0x18,3);
    }
    this->m_DrawButtonDescLevel = 0;
    this->m_pImportResFile = (NghResFile__0_845 *)0x0;
  }
  else {
    if (this->m_ImportMode == 0) {
      if (*(int *)_globals.m_pMemCard == 0) {
        iVar3 = GetHouseSelection__17ENeighborhoodMode(this);
        SelectHouse__17ENeighborhoodModei(this,iVar3);
        this->m_ImportMode = -1;
      }
      else {
        this->m_ImportMode = 1;
        iVar3 = GetHouseSelection__17ENeighborhoodMode(this);
        this->m_ImportHouseNum = iVar3;
      }
      iVar3 = this->m_ImportMode;
    }
    else {
      iVar3 = this->m_ImportMode;
    }
    if (iVar3 == 1) {
      iVar3 = DialogUpdate__11EDialogMenu(&this->m_DialogMenu);
      if ((iVar3 == -2) || (iVar3 == 0)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
        PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x48ae94f);
                    /* end of inlined section */
        this->m_ImportMode = -1;
      }
      if (iVar3 == 1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
        PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
                    /* end of inlined section */
        DoActualImport__17ENeighborhoodModeb(this,true);
        this->m_ImportMode = -1;
        this->m_DrawButtonDescLevel = 1;
      }
      else {
        this->m_DrawButtonDescLevel = 1;
      }
    }
  }
  return;
}

void ENeighborhoodMode::DrawImport(ERC *prc) {
  if (this->m_ImportMode == 1) {
    DialogDraw__11EDialogMenuP3ERCb(&this->m_DialogMenu,prc,true);
  }
  return;
}

void ENeighborhoodMode::UpdateImportSim() {
	int Selection;
	Family *f;
	int FamilySelected;
	int FamilyMemberSelected;
	FamilyImpl *f;
	FamilyImpl **i;
	FamilyList &fl;
	Neighbor *n;
	ObjSelector *ObjSel;
	BString2 S;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	Neighbor *this;
	ObjSelector *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  NghResFile__0_845 *pNVar4;
  iResFile__0_3211__vtable *piVar5;
  Family__vtable *pFVar6;
  Neighborhood__vtable *pNVar7;
  CustomCharacter *pCVar8;
  EUIVirtualCtrl__vtable *pEVar9;
  ulong *puVar10;
  char *pcVar11;
  Neighborhood *pNVar12;
  NeighborhoodImpl *pNVar13;
  int iVar14;
  Family *f;
  int *piVar15;
  short *psVar16;
  EFamilyMemberMenuMgr *pEVar17;
  EFamilyConstructData *pEVar18;
  int iVar19;
  ObjSelector *this_00;
  BString2 *str;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong in_t0;
  ulong uVar23;
  FamilyImpl **ppFVar24;
  FamilyImpl *pFVar25;
  BString2 S;
  
  if (this->m_ImportSimMode == -1) {
    pNVar4 = this->m_pImportResFile;
    *(undefined4 *)&this->m_bImportSimActive = 0;
    this->m_ImportSimMode = 0;
    if (pNVar4 != (NghResFile__0_845 *)0x0) {
      piVar5 = (pNVar4->field0_0x0).__vtable;
      (*(code *)piVar5->Create)
                ((int)pNVar4->m_ppHouseWriteInfo + *(short *)&piVar5->_dyncastimpl + -0x18,3);
    }
    this->m_pImportResFile = (NghResFile__0_845 *)0x0;
    if (this->m_pFamilyMemberMenu != (EFamilyMemberMenuMgr *)0x0) {
      ___20EFamilyMemberMenuMgr(this->m_pFamilyMemberMenu,3);
      this->m_pFamilyMemberMenu = (EFamilyMemberMenuMgr *)0x0;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar13 = (NeighborhoodImpl *)
              (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                        ((int)&_5Globs_pNeighborhood->__vtable +
                         (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    Load__16NeighborhoodImplP10NghResFile(pNVar13,(NghResFile__6_845 *)_5Globs_pNghResFile);
    if (this->m_pImportNeighborhood != (NeighborhoodImpl *)0x0) {
      this->m_pImportNeighborhood = (NeighborhoodImpl *)0x0;
    }
    if (this->m_ImportMember != 1) {
      if (this->m_pFamilyConstructData != (EFamilyConstructData *)0x0) {
        ___20EFamilyConstructData(this->m_pFamilyConstructData,3);
        this->m_pFamilyConstructData = (EFamilyConstructData *)0x0;
      }
      this->m_DrawButtonDescLevel = 2;
      return;
    }
    if (*(int *)&this->m_bNeighborhoodIsChallengeMode == 0) {
      ImportMemberIntoFamily__17ENeighborhoodMode(this);
      iVar14 = *(int *)&this->m_bNeighborhoodIsChallengeMode;
    }
    else if (this->m_ChallengeModeStateNum == 7) {
      ReplaceFamilyMember__17ENeighborhoodModei(this,3);
      iVar14 = *(int *)&this->m_bNeighborhoodIsChallengeMode;
    }
    else {
      ReplaceFamilyMember__17ENeighborhoodModei(this,2);
      iVar14 = *(int *)&this->m_bNeighborhoodIsChallengeMode;
    }
    if (iVar14 == 0) {
      iVar14 = GetHouseSelection__17ENeighborhoodMode(this);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      f = (Family *)
          (*(code *)_5Globs_pNeighborhood->__vtable[1].SetNeighborhoodVar)
                    ((int)&_5Globs_pNeighborhood->__vtable +
                     (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].GetNeighborhoodVar,
                     iVar14 + 1);
      EvictFamily__17ENeighborhoodModeib(this,iVar14,false);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      pNVar13 = (NeighborhoodImpl *)
                (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
      MoveIn__16NeighborhoodImplP6Familyi(pNVar13,f,iVar14 + 1);
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    piVar15 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                               ((int)&_5Globs_pNeighborhood->__vtable +
                                (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                AddFamilyHistoryStat);
    (**(code **)(*piVar15 + 0x94))
              ((int)piVar15 + (int)*(short *)(*piVar15 + 0x90),_5Globs_pNghResFile,
               _5Globs_iSaveFileVersion);
    if (this->m_pFamilyConstructData == (EFamilyConstructData *)0x0) {
      return;
    }
    ___20EFamilyConstructData(this->m_pFamilyConstructData,3);
    this->m_pFamilyConstructData = (EFamilyConstructData *)0x0;
    return;
  }
  this->m_ImportMember = 0;
  if (this->m_ImportSimMode == 0) {
    this->m_DrawButtonDescLevel = 1;
    if (*(int *)_globals.m_pMemCard == 0) {
      iVar14 = GetHouseSelection__17ENeighborhoodMode(this);
      SelectHouse__17ENeighborhoodModei(this,iVar14);
      this->m_ImportSimMode = -1;
      goto LAB_00192c28;
    }
    this->m_ImportSimMode = 1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pNVar13 = (NeighborhoodImpl *)
              (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                        ((int)&_5Globs_pNeighborhood->__vtable +
                         (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    this->m_pImportNeighborhood = pNVar13;
    Load__16NeighborhoodImplP10NghResFile(pNVar13,(NghResFile__6_845 *)this->m_pImportResFile);
    psVar16 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"select_a_family");
    in_t0 = 1;
    Init__13EFamilySelectPCUsibT3P16NeighborhoodImplT3
              (this->m_pSelectFamilyMenu,psVar16,0,false,true,this->m_pImportNeighborhood,false);
    iVar14 = this->m_ImportSimMode;
  }
  else {
LAB_00192c28:
    iVar14 = this->m_ImportSimMode;
  }
  if (iVar14 == 1) {
    this->m_DrawButtonDescLevel = 1;
    iVar14 = Update__13EFamilySelectPb(this->m_pSelectFamilyMenu,(bool *)0x0);
    if (iVar14 != 0) {
      this->m_ImportFamily = iVar14;
      this->m_ImportSimMode = 2;
      Reset__13EFamilySelect(this->m_pSelectFamilyMenu);
      pEVar17 = (EFamilyMemberMenuMgr *)__builtin_new(0x158);
      pEVar17 = __20EFamilyMemberMenuMgr(pEVar17);
      this->m_pFamilyMemberMenu = pEVar17;
      if (*(int *)&this->m_bNeighborhoodIsChallengeMode == 0) {
        in_t0 = 1;
        Init__20EFamilyMemberMenuMgrP10NghResFileiP16NeighborhoodImplb
                  (pEVar17,(NghResFile__6_845 *)this->m_pImportResFile,this->m_ImportFamily,
                   this->m_pImportNeighborhood,true);
      }
      else {
        in_t0 = 0;
        Init__20EFamilyMemberMenuMgrP10NghResFileiP16NeighborhoodImplb
                  (pEVar17,(NghResFile__6_845 *)this->m_pImportResFile,this->m_ImportFamily,
                   this->m_pImportNeighborhood,false);
      }
    }
    pEVar9 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar20 = (*(code *)pEVar9[1].GetBut)
                       ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar9[1].ClearBut + -4,0
                        ,0x10);
    if ((lVar20 == 0) &&
       (pEVar9 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable,
       lVar20 = (*(code *)pEVar9[1].GetBut)
                          ((int)(_globals.m_pCtrlPad)->m_pressed +
                           *(short *)&pEVar9[1].ClearBut + -4,1,0x10), lVar20 == 0)) {
      iVar14 = this->m_ImportSimMode;
    }
    else {
      Reset__13EFamilySelect(this->m_pSelectFamilyMenu);
      this->m_ImportSimMode = -1;
      iVar14 = this->m_ImportSimMode;
    }
  }
  else {
    iVar14 = this->m_ImportSimMode;
  }
  if (iVar14 == 2) {
    this->m_DrawButtonDescLevel = 1;
    pEVar9 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar20 = (*(code *)pEVar9[1].GetBut)
                       ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar9[1].ClearBut + -4,0
                        ,0x40);
    if (lVar20 == 0) {
      pEVar9 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar20 = (*(code *)pEVar9[1].GetBut)
                         ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar9[1].ClearBut + -4
                          ,1,0x40);
      if (lVar20 == 0) {
        iVar14 = 3;
        goto LAB_00193108;
      }
      iVar14 = this->m_ImportSimMode;
    }
    else {
      iVar14 = this->m_ImportSimMode;
    }
  }
  else {
    iVar14 = this->m_ImportSimMode;
  }
  if (iVar14 != 3) {
    return;
  }
  this->m_DrawButtonDescLevel = 1;
  iVar14 = Update__20EFamilyMemberMenuMgr(this->m_pFamilyMemberMenu);
  if (0 < iVar14) {
    pFVar25 = (FamilyImpl *)0x0;
    pEVar18 = (EFamilyConstructData *)__builtin_new(0x668);
    pEVar18 = __20EFamilyConstructData(pEVar18);
    this->m_pFamilyConstructData = pEVar18;
    pNVar13 = this->m_pImportNeighborhood;
                    /* end of inlined section */
                    /* inlined from ../MSrc/Vector.h */
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
    for (ppFVar24 = (pNVar13->fFamilies).start; ppFVar24 != (pNVar13->fFamilies).finish;
        ppFVar24 = ppFVar24 + 1) {
      pFVar6 = ((*ppFVar24)->field0_0x0).__vtable;
      iVar19 = (*(code *)pFVar6->GetHasBaby)
                         ((int)&((*ppFVar24)->field0_0x0).__vtable +
                          (int)*(short *)&pFVar6->SetHasBaby);
      if (iVar19 == this->m_ImportFamily) {
        pFVar25 = *ppFVar24;
        pEVar18 = this->m_pFamilyConstructData;
        goto LAB_00192e20;
      }
    }
    pEVar18 = this->m_pFamilyConstructData;
LAB_00192e20:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
    pNVar12 = _5Globs_pNeighborhood;
                    /* end of inlined section */
    *(undefined4 *)(pEVar18->CharacterInSlot + 4) = 0;
    pNVar7 = pNVar12->__vtable;
    piVar15 = (int *)(*(code *)pNVar7[1].GetImpl)
                               ((int)&pNVar12->__vtable +
                                (int)*(short *)&pNVar7[1].AddFamilyHistoryStat);
    iVar19 = *piVar15;
    uVar22 = (ulong)iVar19;
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
    psVar16 = (short *)(**(code **)(iVar19 + 0xdc))
                                 ((int)piVar15 + (int)*(short *)(iVar19 + 0xd8),
                                  (pFVar25->fMembers).start[iVar14 + -1].fGUID);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    piVar15 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                               ((int)&_5Globs_pNeighborhood->__vtable +
                                (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                AddFamilyHistoryStat);
    uVar21 = (ulong)*psVar16;
    this_00 = (ObjSelector *)
              (**(code **)(*piVar15 + 0xe4))((int)piVar15 + (int)*(short *)(*piVar15 + 0xe0));
    pEVar18 = this->m_pFamilyConstructData;
                    /* inlined from ../MSrc/objselector.h */
    pCVar8 = this_00->fCustomCharacter;
                    /* end of inlined section */
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
    uVar2 = (uint)&pCVar8->field_0x7 & 7;
    uVar3 = (uint)pCVar8 & 7;
    uVar21 = (*(long *)(&pCVar8->field_0x7 + -uVar2) << (7 - uVar2) * 8 |
             uVar21 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)pCVar8 - uVar3) >> uVar3 * 8;
    uVar2 = (uint)&pCVar8->m_nFacialHairIndex & 7;
    uVar3 = (uint)&pCVar8->m_nBodyType & 7;
    uVar22 = (*(long *)(&pCVar8->m_nFacialHairIndex + -uVar2) << (7 - uVar2) * 8 |
             uVar22 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)(&pCVar8->m_nBodyType + -uVar3) >> uVar3 * 8;
    uVar2 = (uint)&pCVar8->field_0x17 & 7;
    uVar3 = (uint)&pCVar8->m_nSkinColor & 7;
    uVar23 = (*(long *)(&pCVar8->field_0x17 + -uVar2) << (7 - uVar2) * 8 |
             in_t0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)(&pCVar8->m_nSkinColor + -uVar3) >> uVar3 * 8;
    puVar1 = &pEVar18->CustomData[1].c.field_0x7;
    uVar2 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar2);
    *puVar10 = *puVar10 & -1L << (uVar2 + 1) * 8 | uVar21 >> (7 - uVar2) * 8;
    pCVar8 = &pEVar18->CustomData[1].c;
    uVar2 = (uint)pCVar8 & 7;
    puVar10 = (ulong *)((int)pCVar8 - uVar2);
    *puVar10 = uVar21 << uVar2 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    pcVar11 = &pEVar18->CustomData[1].c.m_nFacialHairIndex;
    uVar2 = (uint)pcVar11 & 7;
    pcVar11 = pcVar11 + -uVar2;
    *(ulong *)pcVar11 = *(ulong *)pcVar11 & -1L << (uVar2 + 1) * 8 | uVar22 >> (7 - uVar2) * 8;
    pcVar11 = &pEVar18->CustomData[1].c.m_nBodyType;
    uVar2 = (uint)pcVar11 & 7;
    pcVar11 = pcVar11 + -uVar2;
    *(ulong *)pcVar11 =
         uVar22 << uVar2 * 8 | *(ulong *)pcVar11 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    puVar1 = &pEVar18->CustomData[1].c.field_0x17;
    uVar2 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar2);
    *puVar10 = *puVar10 & -1L << (uVar2 + 1) * 8 | uVar23 >> (7 - uVar2) * 8;
    pcVar11 = &pEVar18->CustomData[1].c.m_nSkinColor;
    uVar2 = (uint)pcVar11 & 7;
    pcVar11 = pcVar11 + -uVar2;
    *(ulong *)pcVar11 =
         uVar23 << uVar2 * 8 | *(ulong *)pcVar11 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    this->m_pFamilyConstructData->CustomData[1].m_nPersNice = (uchar)((int)psVar16[0x34] / 100);
    this->m_pFamilyConstructData->CustomData[1].m_nPersActive = (uchar)((int)psVar16[0x35] / 100);
    this->m_pFamilyConstructData->CustomData[1].m_nPersGenerous = (uchar)((int)psVar16[0x36] / 100);
    this->m_pFamilyConstructData->CustomData[1].m_nPersPlayful = (uchar)((int)psVar16[0x37] / 100);
    this->m_pFamilyConstructData->CustomData[1].m_nPersOutgoing = (uchar)((int)psVar16[0x38] / 100);
    this->m_pFamilyConstructData->CustomData[1].m_nPersNeat = (uchar)((int)psVar16[0x39] / 100);
    this->m_pFamilyConstructData->CustomData[1].m_ZodiacSign = *(uchar *)(psVar16 + 0x78);
    this->m_pFamilyConstructData->CustomData[1].m_nCleaningSkill = (int)psVar16[0x3b];
    this->m_pFamilyConstructData->CustomData[1].m_nCookingSkill = (int)psVar16[0x3c];
    this->m_pFamilyConstructData->CustomData[1].m_nSocialSkill = (int)psVar16[0x3d];
    this->m_pFamilyConstructData->CustomData[1].m_nRepairSkill = (int)psVar16[0x3e];
    this->m_pFamilyConstructData->CustomData[1].m_nGardeningSkill = (int)psVar16[0x3f];
    this->m_pFamilyConstructData->CustomData[1].m_nMusicSkill = (int)psVar16[0x40];
    this->m_pFamilyConstructData->CustomData[1].m_nCreativeSkill = (int)psVar16[0x41];
    this->m_pFamilyConstructData->CustomData[1].m_nLiteracySkill = (int)psVar16[0x42];
    this->m_pFamilyConstructData->CustomData[1].m_nPhysicalSkill = (int)psVar16[0x43];
    this->m_pFamilyConstructData->CustomData[1].m_nLogicSkill = (int)psVar16[0x44];
    this->m_pFamilyConstructData->CustomData[1].m_JobData = (int)psVar16[0x4a];
    this->m_pFamilyConstructData->CustomData[1].m_JobType = (int)psVar16[0x6a];
    this->m_pFamilyConstructData->CustomData[1].m_JobStatus = (int)psVar16[0x6b];
    this->m_pFamilyConstructData->CustomData[1].m_JobPerformance = (int)psVar16[0x71];
    this->m_pFamilyConstructData->CustomData[1].m_AgeObsolete = (int)psVar16[0x6c];
    GetThumbnail__11ObjSelectorPP8ERShader
              (this_00,&this->m_pFamilyConstructData->CustomData[1].m_pThumbnailShaderPtr);
    str = GetUserName__11ObjSelector(this_00);
    __8BString2RC8BString2UiUi(&S,str,0,0xffffffff);
    pEVar18 = this->m_pFamilyConstructData;
    psVar16 = c_str__C8BString2(&S);
    wcscpy__FPUsPCUs(pEVar18->CustomData[1].Name,psVar16);
    this->m_ImportMember = 1;
    Reset__20EFamilyMemberMenuMgr(this->m_pFamilyMemberMenu);
    this->m_ImportSimMode = -1;
    ___8BString2(&S,2);
  }
  pEVar9 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar20 = (*(code *)pEVar9[1].GetBut)
                     ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar9[1].ClearBut + -4,0,
                      0x10);
  if (((lVar20 == 0) &&
      (pEVar9 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable,
      lVar20 = (*(code *)pEVar9[1].GetBut)
                         ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar9[1].ClearBut + -4
                          ,1,0x10), lVar20 == 0)) && (-1 < iVar14)) {
    return;
  }
  Reset__20EFamilyMemberMenuMgr(this->m_pFamilyMemberMenu);
  iVar14 = -1;
LAB_00193108:
  this->m_ImportSimMode = iVar14;
  return;
}

void ENeighborhoodMode::ImportMemberIntoFamily() {
	int Selection;
	Neighbor *n;
	ObjSelector *ObjSel;
	ETexture *TexPtr2;
	BString2 S;
	Neighbor *this;
	EShader *this;
	ObjSelector *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	
  undefined *puVar1;
  CustomCharacter *pCVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  ERShader *this_00;
  CustomCharacter *pCVar7;
  EFamilyConstructData *pEVar8;
  ulong *puVar9;
  char *pcVar10;
  int iVar11;
  int *piVar12;
  ObjSelector *this_01;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  BString2 S;
  Neighbor *n;
  ETexture *TexPtr2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  iVar11 = GetHouseSelection__17ENeighborhoodMode(this);
  if (-1 < iVar11) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    uVar13 = (*(code *)_5Globs_pNeighborhood->__vtable[1].SetNeighborhoodVar)
                       ((int)&_5Globs_pNeighborhood->__vtable +
                        (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].GetNeighborhoodVar,
                        iVar11 + 1);
    n = (Neighbor *)0x0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pNeighborhood->__vtable[1].LoadPersistentData)
              ((int)&_5Globs_pNeighborhood->__vtable +
               (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].GetNextNeighborID,&n);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    piVar12 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                               ((int)&_5Globs_pNeighborhood->__vtable +
                                (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                AddFamilyHistoryStat);
    (**(code **)(*piVar12 + 0x14c))((int)piVar12 + (int)*(short *)(*piVar12 + 0x148),n,uVar13);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    piVar12 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                               ((int)&_5Globs_pNeighborhood->__vtable +
                                (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                AddFamilyHistoryStat);
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
    this_01 = (ObjSelector *)
              (**(code **)(*piVar12 + 0xe4))((int)piVar12 + (int)*(short *)(*piVar12 + 0xe0),n->fID)
    ;
                    /* inlined from /eor/src2/engine/shader/e_shader.h */
                    /* end of inlined section */
    DuplicateThumbnail__15ThumbnailLoaderPP8ETextureP8ETexture
              (&TexPtr2,((this->m_pFamilyConstructData->CustomData[1].m_pThumbnailShaderPtr)->
                         m_pShader->m_sd).rp[0].pTexture);
    SetThumbnail__11ObjSelectorP8ETexture(this_01,TexPtr2);
    while( true ) {
      this_00 = this->m_pFamilyConstructData->CustomData[1].m_pThumbnailShaderPtr;
      if (this_00 == (ERShader *)0x0) break;
      DelRef__9EResource(&this_00->field0_0x0);
      this->m_pFamilyConstructData->CustomData[1].m_pThumbnailShaderPtr = (ERShader *)0x0;
    }
                    /* end of inlined section */
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/objselector.h */
    pCVar7 = this_01->fCustomCharacter;
                    /* end of inlined section */
    n->fData[2] = (ushort)this->m_pFamilyConstructData->CustomData[1].m_nPersNice * 100;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
    n->fData[3] = (ushort)this->m_pFamilyConstructData->CustomData[1].m_nPersActive * 100;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
    n->fData[4] = (ushort)this->m_pFamilyConstructData->CustomData[1].m_nPersGenerous * 100;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
    n->fData[5] = (ushort)this->m_pFamilyConstructData->CustomData[1].m_nPersPlayful * 100;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
    n->fData[6] = (ushort)this->m_pFamilyConstructData->CustomData[1].m_nPersOutgoing * 100;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
    n->fData[7] = (ushort)this->m_pFamilyConstructData->CustomData[1].m_nPersNeat * 100;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
    n->fData[0x46] = (ushort)this->m_pFamilyConstructData->CustomData[1].m_ZodiacSign;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
    n->fData[9] = *(ushort *)&this->m_pFamilyConstructData->CustomData[1].m_nCleaningSkill;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
    n->fData[10] = *(ushort *)&this->m_pFamilyConstructData->CustomData[1].m_nCookingSkill;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
    n->fData[0xb] = *(ushort *)&this->m_pFamilyConstructData->CustomData[1].m_nSocialSkill;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
    n->fData[0xc] = *(ushort *)&this->m_pFamilyConstructData->CustomData[1].m_nRepairSkill;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
    n->fData[0xd] = *(ushort *)&this->m_pFamilyConstructData->CustomData[1].m_nGardeningSkill;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
    n->fData[0xe] = *(ushort *)&this->m_pFamilyConstructData->CustomData[1].m_nMusicSkill;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
    n->fData[0xf] = *(ushort *)&this->m_pFamilyConstructData->CustomData[1].m_nCreativeSkill;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
    n->fData[0x10] = *(ushort *)&this->m_pFamilyConstructData->CustomData[1].m_nLiteracySkill;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
    n->fData[0x11] = *(ushort *)&this->m_pFamilyConstructData->CustomData[1].m_nPhysicalSkill;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
    n->fData[0x12] = *(ushort *)&this->m_pFamilyConstructData->CustomData[1].m_nLogicSkill;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
    n->fData[0x18] = *(ushort *)&this->m_pFamilyConstructData->CustomData[1].m_JobData;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
    n->fData[0x38] = *(ushort *)&this->m_pFamilyConstructData->CustomData[1].m_JobType;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
    n->fData[0x39] = *(ushort *)&this->m_pFamilyConstructData->CustomData[1].m_JobStatus;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
    n->fData[0x3f] = *(ushort *)&this->m_pFamilyConstructData->CustomData[1].m_JobPerformance;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
    uVar6 = *(ushort *)&this->m_pFamilyConstructData->CustomData[1].m_AgeObsolete;
    n->fData[0x3a] = uVar6;
    pEVar8 = this->m_pFamilyConstructData;
    puVar1 = &pEVar8->CustomData[1].c.field_0x7;
    uVar4 = (uint)puVar1 & 7;
    pCVar2 = &pEVar8->CustomData[1].c;
    uVar5 = (uint)pCVar2 & 7;
    uVar14 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
             (ulong)uVar6 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
             *(ulong *)((int)pCVar2 - uVar5) >> uVar5 * 8;
    pcVar10 = &pEVar8->CustomData[1].c.m_nFacialHairIndex;
    uVar4 = (uint)pcVar10 & 7;
    pcVar3 = &pEVar8->CustomData[1].c.m_nBodyType;
    uVar5 = (uint)pcVar3 & 7;
    uVar15 = (*(long *)(pcVar10 + -uVar4) << (7 - uVar4) * 8 |
             (long)(int)n & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
             *(ulong *)(pcVar3 + -uVar5) >> uVar5 * 8;
    puVar1 = &pEVar8->CustomData[1].c.field_0x17;
    uVar4 = (uint)puVar1 & 7;
    pcVar10 = &pEVar8->CustomData[1].c.m_nSkinColor;
    uVar5 = (uint)pcVar10 & 7;
    uVar16 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
             0xffffffffffffffffU >> (uVar4 + 1) * 8 & 100) & -1L << (8 - uVar5) * 8 |
             *(ulong *)(pcVar10 + -uVar5) >> uVar5 * 8;
    uVar4 = (uint)&pCVar7->field_0x7 & 7;
    puVar9 = (ulong *)(&pCVar7->field_0x7 + -uVar4);
    *puVar9 = *puVar9 & -1L << (uVar4 + 1) * 8 | uVar14 >> (7 - uVar4) * 8;
    uVar4 = (uint)pCVar7 & 7;
    *(ulong *)((int)pCVar7 - uVar4) =
         uVar14 << uVar4 * 8 |
         *(ulong *)((int)pCVar7 - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    uVar4 = (uint)&pCVar7->m_nFacialHairIndex & 7;
    pcVar10 = &pCVar7->m_nFacialHairIndex + -uVar4;
    *(ulong *)pcVar10 = *(ulong *)pcVar10 & -1L << (uVar4 + 1) * 8 | uVar15 >> (7 - uVar4) * 8;
    uVar4 = (uint)&pCVar7->m_nBodyType & 7;
    pcVar10 = &pCVar7->m_nBodyType + -uVar4;
    *(ulong *)pcVar10 =
         uVar15 << uVar4 * 8 | *(ulong *)pcVar10 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    uVar4 = (uint)&pCVar7->field_0x17 & 7;
    puVar9 = (ulong *)(&pCVar7->field_0x17 + -uVar4);
    *puVar9 = *puVar9 & -1L << (uVar4 + 1) * 8 | uVar16 >> (7 - uVar4) * 8;
    uVar4 = (uint)&pCVar7->m_nSkinColor & 7;
    pcVar10 = &pCVar7->m_nSkinColor + -uVar4;
    *(ulong *)pcVar10 =
         uVar16 << uVar4 * 8 | *(ulong *)pcVar10 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    iVar11 = GetLatestPersDataVersion__8Neighbor();
    n->fPersonDataVersion = iVar11;
    __8BString2PCUs(&S,this->m_pFamilyConstructData->CustomData[1].Name);
    SetUserName__11ObjSelectorRC8BString2(this_01,&S);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    piVar12 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                               ((int)&_5Globs_pNeighborhood->__vtable +
                                (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                AddFamilyHistoryStat);
    (**(code **)(*piVar12 + 0x94))
              ((int)piVar12 + (int)*(short *)(*piVar12 + 0x90),_5Globs_pNghResFile,
               _5Globs_iSaveFileVersion);
    ___8BString2(&S,2);
  }
  return;
}

void ENeighborhoodMode::ReplaceFamilyMember(int Identifier) {
	int Selection;
	FamilyImpl *f;
	int MemberNum;
	FamilyMember *fm;
	int i;
	Neighbor *n;
	ObjSelector *ObjSel;
	ETexture *TexPtr2;
	BString2 S;
	FamilyMember *this;
	Neighbor *this;
	unsigned int n;
	Neighbor *this;
	EShader *this;
	ObjSelector *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	
  undefined *puVar1;
  CustomCharacter *pCVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  ERShader *this_00;
  CustomCharacter *pCVar7;
  EFamilyConstructData *pEVar8;
  ulong *puVar9;
  char *pcVar10;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  int *piVar14;
  int iVar15;
  undefined2 *puVar16;
  ObjSelector *this_01;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  int iVar20;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  BString2 S;
  ETexture *TexPtr2;
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
  
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  iVar11 = GetHouseSelection__17ENeighborhoodMode(this);
  if (-1 < iVar11) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    piVar12 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].SetNeighborhoodVar)
                               ((int)&_5Globs_pNeighborhood->__vtable +
                                (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                GetNeighborhoodVar,iVar11 + 1);
    for (iVar11 = 0;
        iVar15 = (**(code **)(*piVar12 + 0x1c))((int)piVar12 + (int)*(short *)(*piVar12 + 0x18)),
        iVar20 = -1, iVar11 < iVar15; iVar11 = iVar11 + 1) {
      puVar13 = (undefined4 *)
                (**(code **)(*piVar12 + 0x24))
                          ((int)piVar12 + (int)*(short *)(*piVar12 + 0x20),iVar11);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      piVar14 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                                 ((int)&_5Globs_pNeighborhood->__vtable +
                                  (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                  AddFamilyHistoryStat);
      iVar15 = (**(code **)(*piVar14 + 0xdc))
                         ((int)piVar14 + (int)*(short *)(*piVar14 + 0xd8),*puVar13);
      iVar20 = iVar11;
      if ((long)*(short *)(iVar15 + 0x7e) == (long)Identifier) break;
    }
    if (iVar20 != -1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      piVar14 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                                 ((int)&_5Globs_pNeighborhood->__vtable +
                                  (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                  AddFamilyHistoryStat);
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
      puVar16 = (undefined2 *)
                (**(code **)(*piVar14 + 0xdc))
                          ((int)piVar14 + (int)*(short *)(*piVar14 + 0xd8),
                           *(undefined4 *)(piVar12[9] + iVar20 * 4));
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      piVar12 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                                 ((int)&_5Globs_pNeighborhood->__vtable +
                                  (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                  AddFamilyHistoryStat);
      this_01 = (ObjSelector *)
                (**(code **)(*piVar12 + 0xe4))
                          ((int)piVar12 + (int)*(short *)(*piVar12 + 0xe0),*puVar16);
                    /* inlined from /eor/src2/engine/shader/e_shader.h */
                    /* end of inlined section */
      DuplicateThumbnail__15ThumbnailLoaderPP8ETextureP8ETexture
                (&TexPtr2,((this->m_pFamilyConstructData->CustomData[1].m_pThumbnailShaderPtr)->
                           m_pShader->m_sd).rp[0].pTexture);
      SetThumbnail__11ObjSelectorP8ETexture(this_01,TexPtr2);
      while( true ) {
        this_00 = this->m_pFamilyConstructData->CustomData[1].m_pThumbnailShaderPtr;
        if (this_00 == (ERShader *)0x0) break;
        DelRef__9EResource(&this_00->field0_0x0);
        this->m_pFamilyConstructData->CustomData[1].m_pThumbnailShaderPtr = (ERShader *)0x0;
      }
                    /* end of inlined section */
                    /* inlined from ../MSrc/neighbor.h */
      pCVar7 = this_01->fCustomCharacter;
                    /* end of inlined section */
      puVar16[0x34] = (ushort)this->m_pFamilyConstructData->CustomData[1].m_nPersNice * 100;
      puVar16[0x35] = (ushort)this->m_pFamilyConstructData->CustomData[1].m_nPersActive * 100;
      puVar16[0x36] = (ushort)this->m_pFamilyConstructData->CustomData[1].m_nPersGenerous * 100;
      puVar16[0x37] = (ushort)this->m_pFamilyConstructData->CustomData[1].m_nPersPlayful * 100;
      puVar16[0x38] = (ushort)this->m_pFamilyConstructData->CustomData[1].m_nPersOutgoing * 100;
      puVar16[0x39] = (ushort)this->m_pFamilyConstructData->CustomData[1].m_nPersNeat * 100;
      puVar16[0x78] = (ushort)this->m_pFamilyConstructData->CustomData[1].m_ZodiacSign;
      puVar16[0x3b] = *(undefined2 *)&this->m_pFamilyConstructData->CustomData[1].m_nCleaningSkill;
      puVar16[0x3c] = *(undefined2 *)&this->m_pFamilyConstructData->CustomData[1].m_nCookingSkill;
      puVar16[0x3d] = *(undefined2 *)&this->m_pFamilyConstructData->CustomData[1].m_nSocialSkill;
      puVar16[0x3e] = *(undefined2 *)&this->m_pFamilyConstructData->CustomData[1].m_nRepairSkill;
      puVar16[0x3f] = *(undefined2 *)&this->m_pFamilyConstructData->CustomData[1].m_nGardeningSkill;
      puVar16[0x40] = *(undefined2 *)&this->m_pFamilyConstructData->CustomData[1].m_nMusicSkill;
      puVar16[0x41] = *(undefined2 *)&this->m_pFamilyConstructData->CustomData[1].m_nCreativeSkill;
      puVar16[0x42] = *(undefined2 *)&this->m_pFamilyConstructData->CustomData[1].m_nLiteracySkill;
      puVar16[0x43] = *(undefined2 *)&this->m_pFamilyConstructData->CustomData[1].m_nPhysicalSkill;
      uVar6 = *(ushort *)&this->m_pFamilyConstructData->CustomData[1].m_nLogicSkill;
      puVar16[0x44] = uVar6;
      pEVar8 = this->m_pFamilyConstructData;
      puVar1 = &pEVar8->CustomData[1].c.field_0x7;
      uVar4 = (uint)puVar1 & 7;
      pCVar2 = &pEVar8->CustomData[1].c;
      uVar5 = (uint)pCVar2 & 7;
      uVar17 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
               (ulong)uVar6 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
               *(ulong *)((int)pCVar2 - uVar5) >> uVar5 * 8;
      pcVar10 = &pEVar8->CustomData[1].c.m_nFacialHairIndex;
      uVar4 = (uint)pcVar10 & 7;
      pcVar3 = &pEVar8->CustomData[1].c.m_nBodyType;
      uVar5 = (uint)pcVar3 & 7;
      uVar18 = (*(long *)(pcVar10 + -uVar4) << (7 - uVar4) * 8 |
               (long)(int)(puVar16 + 0x32) & 0xffffffffffffffffU >> (uVar4 + 1) * 8) &
               -1L << (8 - uVar5) * 8 | *(ulong *)(pcVar3 + -uVar5) >> uVar5 * 8;
      puVar1 = &pEVar8->CustomData[1].c.field_0x17;
      uVar4 = (uint)puVar1 & 7;
      pcVar10 = &pEVar8->CustomData[1].c.m_nSkinColor;
      uVar5 = (uint)pcVar10 & 7;
      uVar19 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
               0xffffffffffffffffU >> (uVar4 + 1) * 8 & 100) & -1L << (8 - uVar5) * 8 |
               *(ulong *)(pcVar10 + -uVar5) >> uVar5 * 8;
      uVar4 = (uint)&pCVar7->field_0x7 & 7;
      puVar9 = (ulong *)(&pCVar7->field_0x7 + -uVar4);
      *puVar9 = *puVar9 & -1L << (uVar4 + 1) * 8 | uVar17 >> (7 - uVar4) * 8;
      uVar4 = (uint)pCVar7 & 7;
      *(ulong *)((int)pCVar7 - uVar4) =
           uVar17 << uVar4 * 8 |
           *(ulong *)((int)pCVar7 - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      uVar4 = (uint)&pCVar7->m_nFacialHairIndex & 7;
      pcVar10 = &pCVar7->m_nFacialHairIndex + -uVar4;
      *(ulong *)pcVar10 = *(ulong *)pcVar10 & -1L << (uVar4 + 1) * 8 | uVar18 >> (7 - uVar4) * 8;
      uVar4 = (uint)&pCVar7->m_nBodyType & 7;
      pcVar10 = &pCVar7->m_nBodyType + -uVar4;
      *(ulong *)pcVar10 =
           uVar18 << uVar4 * 8 | *(ulong *)pcVar10 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      uVar4 = (uint)&pCVar7->field_0x17 & 7;
      puVar9 = (ulong *)(&pCVar7->field_0x17 + -uVar4);
      *puVar9 = *puVar9 & -1L << (uVar4 + 1) * 8 | uVar19 >> (7 - uVar4) * 8;
      uVar4 = (uint)&pCVar7->m_nSkinColor & 7;
      pcVar10 = &pCVar7->m_nSkinColor + -uVar4;
      *(ulong *)pcVar10 =
           uVar19 << uVar4 * 8 | *(ulong *)pcVar10 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      iVar11 = GetLatestPersDataVersion__8Neighbor();
      *(int *)(puVar16 + 0x82) = iVar11;
      __8BString2PCUs(&S,this->m_pFamilyConstructData->CustomData[1].Name);
      SetUserName__11ObjSelectorRC8BString2(this_01,&S);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      piVar12 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                                 ((int)&_5Globs_pNeighborhood->__vtable +
                                  (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                  AddFamilyHistoryStat);
      (**(code **)(*piVar12 + 0x94))
                ((int)piVar12 + (int)*(short *)(*piVar12 + 0x90),_5Globs_pNghResFile,
                 _5Globs_iSaveFileVersion);
      ___8BString2(&S,2);
    }
  }
  return;
}

void ENeighborhoodMode::DrawImportSim(ERC *prc) {
  int iVar1;
  
  iVar1 = this->m_ImportSimMode;
  if (iVar1 == 1) {
    Draw__13EFamilySelectP3ERC(this->m_pSelectFamilyMenu,prc);
    iVar1 = this->m_ImportSimMode;
  }
  if (iVar1 == 3) {
    Draw__20EFamilyMemberMenuMgrP3ERC(this->m_pFamilyMemberMenu,prc);
  }
  return;
}

void ENeighborhoodMode::UpdateGetNeighborhoodName() {
	short unsigned int Buffer[32];
	
  ETextEntryDialog *pEVar1;
  EUIObjectNode__vtable *pEVar2;
  Neighborhood__vtable *pNVar3;
  Neighborhood *pNVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  short Buffer [32];
  
  bVar5 = UpdateKeyboard__16ETextEntryDialog(this->m_pTextEntryDialog);
  if (!bVar5) {
    GetBuffer__16ETextEntryDialogPUs(this->m_pTextEntryDialog,Buffer);
    pEVar1 = this->m_pTextEntryDialog;
    if (pEVar1 != (ETextEntryDialog *)0x0) {
      pEVar2 = (pEVar1->field0_0x0).__vtable;
      (*(code *)pEVar2->Draw)((int)pEVar1->m_szText + *(short *)&pEVar2->Update + -0x3e,3);
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
    pNVar4 = _5Globs_pNeighborhood;
                    /* end of inlined section */
    this->m_pTextEntryDialog = (ETextEntryDialog *)0x0;
    pNVar3 = pNVar4->__vtable;
    iVar6 = (*(code *)pNVar3[1].GetImpl)
                      ((int)&pNVar4->__vtable + (int)*(short *)&pNVar3[1].AddFamilyHistoryStat);
    erase__13StringBuffer2((StringBuffer2 *)(iVar6 + 0x110));
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    iVar6 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                      ((int)&_5Globs_pNeighborhood->__vtable +
                       (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    append__13StringBuffer2PCUsi((StringBuffer2 *)(iVar6 + 0x110),Buffer,-1);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    piVar7 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                              ((int)&_5Globs_pNeighborhood->__vtable +
                               (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                               AddFamilyHistoryStat);
    (**(code **)(*piVar7 + 0x94))
              ((int)piVar7 + (int)*(short *)(*piVar7 + 0x90),_5Globs_pNghResFile,
               _5Globs_iSaveFileVersion);
    *(undefined4 *)&this->m_bGetNeighborhoodName = 0;
    if (Buffer[0] == 0) {
      HouseSelectGoToHoodSelect__17ENeighborhoodMode(this);
    }
  }
  return;
}

void ENeighborhoodMode::DrawGetNeighborhoodName(ERC *prc) {
  EUIObjectNode__vtable *pEVar1;
  
  pEVar1 = (this->m_pTextEntryDialog->field0_0x0).__vtable;
  (*(code *)pEVar1->Message)
            ((int)this->m_pTextEntryDialog->m_szText + *(short *)&pEVar1->SetBoxDims + -0x3e,prc);
  return;
}

bool ENeighborhoodMode::ImpFamilySetupSource(int HouseSelection) {
  Neighborhood__vtable *pNVar1;
  NeighborhoodImpl *this_00;
  long lVar2;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  this_00 = (NeighborhoodImpl *)
            (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                      ((int)&_5Globs_pNeighborhood->__vtable +
                       (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
  this->m_pImportNeighborhood = this_00;
  Load__16NeighborhoodImplP10NghResFile(this_00,(NghResFile__6_845 *)this->m_pImportResFile);
  pNVar1 = (this->m_pImportNeighborhood->field0_0x0).__vtable;
  lVar2 = (*(code *)pNVar1[1].SetNeighborhoodVar)
                    ((this->m_pImportNeighborhood->fFilename).fChars +
                     *(short *)&pNVar1[1].GetNeighborhoodVar + -0xc,HouseSelection + 1);
  if (lVar2 == 0) {
    Load__16NeighborhoodImplP10NghResFile
              (this->m_pImportNeighborhood,(NghResFile__6_845 *)_5Globs_pNghResFile);
  }
  return lVar2 != 0;
}

void ENeighborhoodMode::ImpFamilyReadSourceFamily(int HouseSelection) {
	FamilyImpl *f;
	int i;
	Neighbor *n;
	ObjSelector *ObjSel;
	BString2 S;
	unsigned int n;
	Neighbor *this;
	Neighbor *this;
	ObjSelector *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *n;
	unsigned int n;
	Neighbor *this;
	int j;
	
  undefined *puVar1;
  uint uVar2;
  Neighborhood__vtable *pNVar3;
  code *pcVar4;
  CustomCharacter *pCVar5;
  ulong *puVar6;
  char *pcVar7;
  Neighborhood *pNVar8;
  EFamilyConstructData *pEVar9;
  int *piVar10;
  int *piVar11;
  short *psVar12;
  ObjSelector *this_00;
  BString2 *str;
  short *in;
  uint uVar13;
  undefined4 uVar14;
  StackString2_256_ *this_01;
  long lVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  int iVar20;
  uint uVar21;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  BString2 S;
  StringBuffer2 SStack_2c0;
  short asStack_2b8 [260];
  BString2 *local_b0;
  uint local_ac;
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
  
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  iVar20 = 0;
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  pEVar9 = (EFamilyConstructData *)__builtin_new(0x668);
  pEVar9 = __20EFamilyConstructData(pEVar9);
  this->m_pFamilyConstructData = pEVar9;
  pNVar3 = (this->m_pImportNeighborhood->field0_0x0).__vtable;
  piVar10 = (int *)(*(code *)pNVar3[1].SetNeighborhoodVar)
                             ((this->m_pImportNeighborhood->fFilename).fChars +
                              *(short *)&pNVar3[1].GetNeighborhoodVar + -0xc,HouseSelection + 1);
  do {
    iVar16 = iVar20 * 4;
    iVar20 = iVar20 + 1;
    *(undefined4 *)(this->m_pFamilyConstructData->CharacterInSlot + iVar16) = 0;
  } while (iVar20 < 8);
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
  local_b0 = (BString2 *)(piVar10 + 1);
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
  if (piVar10[10] - piVar10[9] >> 2 != 0) {
    pEVar9 = this->m_pFamilyConstructData;
    uVar21 = 0;
    while( true ) {
      pNVar8 = _5Globs_pNeighborhood;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      *(undefined4 *)(pEVar9->CharacterInSlot + uVar21 * 4) = 1;
      pNVar3 = pNVar8->__vtable;
      piVar11 = (int *)(*(code *)pNVar3[1].GetImpl)
                                 ((int)&pNVar8->__vtable +
                                  (int)*(short *)&pNVar3[1].AddFamilyHistoryStat);
      iVar20 = *piVar11;
      uVar19 = (ulong)iVar20;
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
      psVar12 = (short *)(**(code **)(iVar20 + 0xdc))
                                   ((int)piVar11 + (int)*(short *)(iVar20 + 0xd8),
                                    *(undefined4 *)(piVar10[9] + uVar21 * 4));
      pNVar8 = _5Globs_pNeighborhood;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
      this->m_pFamilyConstructData->Guid[uVar21] = (int)*psVar12;
      pNVar3 = pNVar8->__vtable;
      piVar11 = (int *)(*(code *)pNVar3[1].GetImpl)
                                 ((int)&pNVar8->__vtable +
                                  (int)*(short *)&pNVar3[1].AddFamilyHistoryStat);
      uVar17 = (ulong)*psVar12;
      pcVar4 = *(code **)(*piVar11 + 0xe4);
      uVar18 = (ulong)(int)pcVar4;
      this_00 = (ObjSelector *)(*pcVar4)((int)piVar11 + (int)*(short *)(*piVar11 + 0xe0));
      pEVar9 = this->m_pFamilyConstructData;
                    /* inlined from ../MSrc/objselector.h */
      pCVar5 = this_00->fCustomCharacter;
                    /* end of inlined section */
      uVar13 = (uint)&pCVar5->field_0x7 & 7;
      uVar2 = (uint)pCVar5 & 7;
      uVar17 = (*(long *)(&pCVar5->field_0x7 + -uVar13) << (7 - uVar13) * 8 |
               uVar17 & 0xffffffffffffffffU >> (uVar13 + 1) * 8) & -1L << (8 - uVar2) * 8 |
               *(ulong *)((int)pCVar5 - uVar2) >> uVar2 * 8;
      uVar13 = (uint)&pCVar5->m_nFacialHairIndex & 7;
      uVar2 = (uint)&pCVar5->m_nBodyType & 7;
      uVar18 = (*(long *)(&pCVar5->m_nFacialHairIndex + -uVar13) << (7 - uVar13) * 8 |
               uVar18 & 0xffffffffffffffffU >> (uVar13 + 1) * 8) & -1L << (8 - uVar2) * 8 |
               *(ulong *)(&pCVar5->m_nBodyType + -uVar2) >> uVar2 * 8;
      uVar13 = (uint)&pCVar5->field_0x17 & 7;
      uVar2 = (uint)&pCVar5->m_nSkinColor & 7;
      uVar19 = (*(long *)(&pCVar5->field_0x17 + -uVar13) << (7 - uVar13) * 8 |
               uVar19 & 0xffffffffffffffffU >> (uVar13 + 1) * 8) & -1L << (8 - uVar2) * 8 |
               *(ulong *)(&pCVar5->m_nSkinColor + -uVar2) >> uVar2 * 8;
      puVar1 = &pEVar9->CustomData[uVar21].c.field_0x7;
      uVar13 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar13);
      *puVar6 = *puVar6 & -1L << (uVar13 + 1) * 8 | uVar17 >> (7 - uVar13) * 8;
      pCVar5 = &pEVar9->CustomData[uVar21].c;
      uVar13 = (uint)pCVar5 & 7;
      puVar6 = (ulong *)((int)pCVar5 - uVar13);
      *puVar6 = uVar17 << uVar13 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar13) * 8;
      pcVar7 = &pEVar9->CustomData[uVar21].c.m_nFacialHairIndex;
      uVar13 = (uint)pcVar7 & 7;
      pcVar7 = pcVar7 + -uVar13;
      *(ulong *)pcVar7 = *(ulong *)pcVar7 & -1L << (uVar13 + 1) * 8 | uVar18 >> (7 - uVar13) * 8;
      pcVar7 = &pEVar9->CustomData[uVar21].c.m_nBodyType;
      uVar13 = (uint)pcVar7 & 7;
      pcVar7 = pcVar7 + -uVar13;
      *(ulong *)pcVar7 =
           uVar18 << uVar13 * 8 | *(ulong *)pcVar7 & 0xffffffffffffffffU >> (8 - uVar13) * 8;
      puVar1 = &pEVar9->CustomData[uVar21].c.field_0x17;
      uVar13 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar13);
      *puVar6 = *puVar6 & -1L << (uVar13 + 1) * 8 | uVar19 >> (7 - uVar13) * 8;
      pcVar7 = &pEVar9->CustomData[uVar21].c.m_nSkinColor;
      uVar13 = (uint)pcVar7 & 7;
      pcVar7 = pcVar7 + -uVar13;
      *(ulong *)pcVar7 =
           uVar19 << uVar13 * 8 | *(ulong *)pcVar7 & 0xffffffffffffffffU >> (8 - uVar13) * 8;
      this->m_pFamilyConstructData->CustomData[uVar21].m_nPersNice =
           (uchar)((int)psVar12[0x34] / 100);
      this->m_pFamilyConstructData->CustomData[uVar21].m_nPersActive =
           (uchar)((int)psVar12[0x35] / 100);
      this->m_pFamilyConstructData->CustomData[uVar21].m_nPersGenerous =
           (uchar)((int)psVar12[0x36] / 100);
      this->m_pFamilyConstructData->CustomData[uVar21].m_nPersPlayful =
           (uchar)((int)psVar12[0x37] / 100);
      this->m_pFamilyConstructData->CustomData[uVar21].m_nPersOutgoing =
           (uchar)((int)psVar12[0x38] / 100);
      this->m_pFamilyConstructData->CustomData[uVar21].m_nPersNeat =
           (uchar)((int)psVar12[0x39] / 100);
      this->m_pFamilyConstructData->CustomData[uVar21].m_ZodiacSign = *(uchar *)(psVar12 + 0x78);
      str = GetUserName__11ObjSelector(this_00);
      __8BString2RC8BString2UiUi(&S,str,0,0xffffffff);
      pEVar9 = this->m_pFamilyConstructData;
      in = c_str__C8BString2(&S);
      wcscpy__FPUsPCUs(pEVar9->CustomData[uVar21].Name,in);
      this->m_pFamilyConstructData->CustomData[uVar21].m_nCleaningSkill = (int)psVar12[0x3b];
      this->m_pFamilyConstructData->CustomData[uVar21].m_nCookingSkill = (int)psVar12[0x3c];
      this->m_pFamilyConstructData->CustomData[uVar21].m_nSocialSkill = (int)psVar12[0x3d];
      this->m_pFamilyConstructData->CustomData[uVar21].m_nRepairSkill = (int)psVar12[0x3e];
      this->m_pFamilyConstructData->CustomData[uVar21].m_nGardeningSkill = (int)psVar12[0x3f];
      this->m_pFamilyConstructData->CustomData[uVar21].m_nMusicSkill = (int)psVar12[0x40];
      this->m_pFamilyConstructData->CustomData[uVar21].m_nCreativeSkill = (int)psVar12[0x41];
      this->m_pFamilyConstructData->CustomData[uVar21].m_nLiteracySkill = (int)psVar12[0x42];
      this->m_pFamilyConstructData->CustomData[uVar21].m_nPhysicalSkill = (int)psVar12[0x43];
      this->m_pFamilyConstructData->CustomData[uVar21].m_nLogicSkill = (int)psVar12[0x44];
      this->m_pFamilyConstructData->CustomData[uVar21].m_JobData = (int)psVar12[0x4a];
      this->m_pFamilyConstructData->CustomData[uVar21].m_JobType = (int)psVar12[0x6a];
      this->m_pFamilyConstructData->CustomData[uVar21].m_JobStatus = (int)psVar12[0x6b];
      this->m_pFamilyConstructData->CustomData[uVar21].m_JobPerformance = (int)psVar12[0x71];
      this->m_pFamilyConstructData->CustomData[uVar21].m_AgeObsolete = (int)psVar12[0x6c];
      GetThumbnail__11ObjSelectorPP8ERShader
                (this_00,&this->m_pFamilyConstructData->CustomData[uVar21].m_pThumbnailShaderPtr);
      ___8BString2(&S,2);
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
      if ((uint)(piVar10[10] - piVar10[9] >> 2) <= uVar21 + 1) break;
      pEVar9 = this->m_pFamilyConstructData;
      uVar21 = uVar21 + 1;
    }
  }
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
  if (piVar10[10] - piVar10[9] >> 2 != 0) {
                    /* end of inlined section */
    uVar13 = 1;
    uVar21 = 0;
    do {
                    /* end of inlined section */
      local_ac = uVar13;
      piVar11 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                                 ((int)&_5Globs_pNeighborhood->__vtable +
                                  (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                  AddFamilyHistoryStat);
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
      lVar15 = (**(code **)(*piVar11 + 0xdc))
                         ((int)piVar11 + (int)*(short *)(*piVar11 + 0xd8),
                          *(undefined4 *)(piVar10[9] + uVar21 * 4));
      iVar20 = piVar10[10];
      if (lVar15 != 0) {
                    /* end of inlined section */
        uVar13 = 0;
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
        piVar11 = *(int **)((int)lVar15 + 0xc);
        if (iVar20 - piVar10[9] >> 2 != 0) {
          iVar20 = uVar21 * 0xc4;
          iVar16 = iVar20;
          do {
            lVar15 = (**(code **)(*piVar11 + 0x14))
                               ((int)piVar11 + (int)*(short *)(*piVar11 + 0x10),
                                this->m_pFamilyConstructData->Guid[uVar13]);
            if (lVar15 < 1) {
              *(undefined4 *)
               ((int)this->m_pFamilyConstructData->CustomData[0].m_Relationship + iVar16) = 0;
            }
            else {
              uVar14 = (**(code **)(*piVar11 + 0x2c))
                                 ((int)piVar11 + (int)*(short *)(*piVar11 + 0x28),
                                  this->m_pFamilyConstructData->Guid[uVar13],0);
              *(undefined4 *)
               ((int)this->m_pFamilyConstructData->CustomData[0].m_Relationship + iVar20) = uVar14;
            }
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
            uVar13 = uVar13 + 1;
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
            iVar20 = iVar20 + 4;
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
            iVar16 = iVar16 + 4;
          } while (uVar13 < (uint)(piVar10[10] - piVar10[9] >> 2));
        }
                    /* inlined from ../MSrc/Vector.h */
        iVar20 = piVar10[10];
      }
                    /* end of inlined section */
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
      uVar13 = local_ac + 1;
      uVar21 = local_ac;
    } while (local_ac < (uint)(iVar20 - piVar10[9] >> 2));
  }
  iVar20 = (**(code **)(*piVar10 + 0x9c))((int)piVar10 + (int)*(short *)(*piVar10 + 0x98));
  this->m_pFamilyConstructData->Funds = iVar20;
  pEVar9 = this->m_pFamilyConstructData;
  this_01 = (StackString2_256_ *)__builtin_new(0x208);
                    /* inlined from ../MSrc/stringbuffer2.h */
  __13StringBuffer2PUsUi((StringBuffer2 *)this_01,this_01->fChars,0x100);
                    /* end of inlined section */
  pEVar9->FamilyName = this_01;
  pEVar9 = this->m_pFamilyConstructData;
  psVar12 = c_str__C8BString2(local_b0);
                    /* inlined from ../MSrc/stringbuffer2.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/stringbuffer2.h */
  __13StringBuffer2PUsUi(&SStack_2c0,asStack_2b8,0x100);
  append__13StringBuffer2PCUsi(&SStack_2c0,psVar12,-1);
  copy__13StringBuffer2RC13StringBuffer2(&pEVar9->FamilyName->field0_0x0,&SStack_2c0);
  return;
}

void ENeighborhoodMode::ImpFamilySetupDestination() {
                    /* end of inlined section */
  Load__16NeighborhoodImplP10NghResFile
            (this->m_pImportNeighborhood,(NghResFile__6_845 *)_5Globs_pNghResFile);
  return;
}

void ENeighborhoodMode::ImpFamilyWriteDestFamily(int HouseSelection) {
	FamilyImpl *f;
	int Id[8];
	Neighbor *n;
	ObjSelector *ObjSel;
	int i;
	ETexture *TexPtr2;
	BString2 S;
	Neighbor *this;
	Neighbor *this;
	EShader *this;
	ObjSelector *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *n;
	unsigned int n;
	Neighbor *this;
	int j;
	
  undefined *puVar1;
  CustomCharacter *pCVar2;
  char *pcVar3;
  ushort uVar4;
  code *pcVar5;
  ERShader *this_00;
  CustomCharacter *pCVar6;
  NghResFile__0_845 *pNVar7;
  iResFile__0_3211__vtable *piVar8;
  ulong *puVar9;
  char *pcVar10;
  int *piVar11;
  EFamilyConstructData *pEVar12;
  ObjSelector *this_01;
  int iVar13;
  Family__vtable *pFVar14;
  short *s;
  NeighborhoodImpl *this_02;
  undefined8 uVar15;
  long lVar16;
  ENeighborhoodCustomChar *pEVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 unaff_s0;
  int *piVar21;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  uint uVar22;
  int iVar23;
  undefined8 unaff_s3;
  uint uVar24;
  undefined8 unaff_s4;
  Family *f;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  uint uVar25;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  int Id [8];
  BString2 S;
  Neighbor *n;
  ETexture *TexPtr2;
  int local_b8;
  int local_b4;
  Family *local_b0;
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
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
                    /* end of inlined section */
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_b8 = HouseSelection;
  piVar11 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                             ((int)&_5Globs_pNeighborhood->__vtable +
                              (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                              AddFamilyHistoryStat);
  uVar15 = (**(code **)(*piVar11 + 0x13c))((int)piVar11 + (int)*(short *)(*piVar11 + 0x138));
  pEVar12 = this->m_pFamilyConstructData;
  iVar23 = 0;
  while( true ) {
    f = (Family *)uVar15;
    local_b0 = f + 1;
    local_b4 = local_b8 + 1;
    if (*(int *)(pEVar12->CharacterInSlot + iVar23 * 4) == 1) {
                    /* end of inlined section */
      n = (Neighbor *)0x0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pNeighborhood->__vtable[1].LoadPersistentData)
                ((int)&_5Globs_pNeighborhood->__vtable +
                 (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].GetNextNeighborID,&n);
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      Id[iVar23] = (int)(short)n->fID;
      piVar11 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                                 ((int)&_5Globs_pNeighborhood->__vtable +
                                  (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                  AddFamilyHistoryStat);
      pcVar5 = *(code **)(*piVar11 + 0x14c);
      uVar19 = (ulong)(int)pcVar5;
      (*pcVar5)((int)piVar11 + (int)*(short *)(*piVar11 + 0x148),n,uVar15);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      piVar11 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                                 ((int)&_5Globs_pNeighborhood->__vtable +
                                  (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                  AddFamilyHistoryStat);
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
      this_01 = (ObjSelector *)
                (**(code **)(*piVar11 + 0xe4))
                          ((int)piVar11 + (int)*(short *)(*piVar11 + 0xe0),n->fID);
                    /* inlined from /eor/src2/engine/shader/e_shader.h */
                    /* end of inlined section */
      DuplicateThumbnail__15ThumbnailLoaderPP8ETextureP8ETexture
                (&TexPtr2,((this->m_pFamilyConstructData->CustomData[iVar23].m_pThumbnailShaderPtr)
                           ->m_pShader->m_sd).rp[0].pTexture);
      SetThumbnail__11ObjSelectorP8ETexture(this_01,TexPtr2);
      while( true ) {
        this_00 = this->m_pFamilyConstructData->CustomData[iVar23].m_pThumbnailShaderPtr;
        if (this_00 == (ERShader *)0x0) break;
        DelRef__9EResource(&this_00->field0_0x0);
        this->m_pFamilyConstructData->CustomData[iVar23].m_pThumbnailShaderPtr = (ERShader *)0x0;
      }
                    /* inlined from ../MSrc/objselector.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/objselector.h */
      pCVar6 = this_01->fCustomCharacter;
                    /* end of inlined section */
      n->fData[2] = (ushort)this->m_pFamilyConstructData->CustomData[iVar23].m_nPersNice * 100;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
      n->fData[3] = (ushort)this->m_pFamilyConstructData->CustomData[iVar23].m_nPersActive * 100;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
      n->fData[4] = (ushort)this->m_pFamilyConstructData->CustomData[iVar23].m_nPersGenerous * 100;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
      n->fData[5] = (ushort)this->m_pFamilyConstructData->CustomData[iVar23].m_nPersPlayful * 100;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
      n->fData[6] = (ushort)this->m_pFamilyConstructData->CustomData[iVar23].m_nPersOutgoing * 100;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
      n->fData[7] = (ushort)this->m_pFamilyConstructData->CustomData[iVar23].m_nPersNeat * 100;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
      n->fData[0x46] = (ushort)this->m_pFamilyConstructData->CustomData[iVar23].m_ZodiacSign;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
      n->fData[9] = *(ushort *)&this->m_pFamilyConstructData->CustomData[iVar23].m_nCleaningSkill;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
      n->fData[10] = *(ushort *)&this->m_pFamilyConstructData->CustomData[iVar23].m_nCookingSkill;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
      n->fData[0xb] = *(ushort *)&this->m_pFamilyConstructData->CustomData[iVar23].m_nSocialSkill;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
      n->fData[0xc] = *(ushort *)&this->m_pFamilyConstructData->CustomData[iVar23].m_nRepairSkill;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
      n->fData[0xd] = *(ushort *)&this->m_pFamilyConstructData->CustomData[iVar23].m_nGardeningSkill
      ;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
      n->fData[0xe] = *(ushort *)&this->m_pFamilyConstructData->CustomData[iVar23].m_nMusicSkill;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
      n->fData[0xf] = *(ushort *)&this->m_pFamilyConstructData->CustomData[iVar23].m_nCreativeSkill;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
      n->fData[0x10] = *(ushort *)&this->m_pFamilyConstructData->CustomData[iVar23].m_nLiteracySkill
      ;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
      n->fData[0x11] = *(ushort *)&this->m_pFamilyConstructData->CustomData[iVar23].m_nPhysicalSkill
      ;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
      n->fData[0x12] = *(ushort *)&this->m_pFamilyConstructData->CustomData[iVar23].m_nLogicSkill;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
      n->fData[0x18] = *(ushort *)&this->m_pFamilyConstructData->CustomData[iVar23].m_JobData;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
      n->fData[0x38] = *(ushort *)&this->m_pFamilyConstructData->CustomData[iVar23].m_JobType;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
      n->fData[0x39] = *(ushort *)&this->m_pFamilyConstructData->CustomData[iVar23].m_JobStatus;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
      n->fData[0x3f] = *(ushort *)&this->m_pFamilyConstructData->CustomData[iVar23].m_JobPerformance
      ;
      pEVar17 = this->m_pFamilyConstructData->CustomData + iVar23;
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
      uVar4 = *(ushort *)&pEVar17->m_AgeObsolete;
      n->fData[0x3a] = uVar4;
      pEVar12 = this->m_pFamilyConstructData;
      puVar1 = &pEVar12->CustomData[iVar23].c.field_0x7;
      uVar22 = (uint)puVar1 & 7;
      pCVar2 = &pEVar12->CustomData[iVar23].c;
      uVar25 = (uint)pCVar2 & 7;
      uVar20 = (*(long *)(puVar1 + -uVar22) << (7 - uVar22) * 8 |
               uVar19 & 0xffffffffffffffffU >> (uVar22 + 1) * 8) & -1L << (8 - uVar25) * 8 |
               *(ulong *)((int)pCVar2 - uVar25) >> uVar25 * 8;
      pcVar10 = &pEVar12->CustomData[iVar23].c.m_nFacialHairIndex;
      uVar22 = (uint)pcVar10 & 7;
      pcVar3 = &pEVar12->CustomData[iVar23].c.m_nBodyType;
      uVar25 = (uint)pcVar3 & 7;
      uVar19 = (*(long *)(pcVar10 + -uVar22) << (7 - uVar22) * 8 |
               (long)(int)pEVar17 & 0xffffffffffffffffU >> (uVar22 + 1) * 8) &
               -1L << (8 - uVar25) * 8 | *(ulong *)(pcVar3 + -uVar25) >> uVar25 * 8;
      puVar1 = &pEVar12->CustomData[iVar23].c.field_0x17;
      uVar22 = (uint)puVar1 & 7;
      pcVar10 = &pEVar12->CustomData[iVar23].c.m_nSkinColor;
      uVar25 = (uint)pcVar10 & 7;
      uVar18 = (*(long *)(puVar1 + -uVar22) << (7 - uVar22) * 8 |
               (ulong)uVar4 & 0xffffffffffffffffU >> (uVar22 + 1) * 8) & -1L << (8 - uVar25) * 8 |
               *(ulong *)(pcVar10 + -uVar25) >> uVar25 * 8;
      uVar22 = (uint)&pCVar6->field_0x7 & 7;
      puVar9 = (ulong *)(&pCVar6->field_0x7 + -uVar22);
      *puVar9 = *puVar9 & -1L << (uVar22 + 1) * 8 | uVar20 >> (7 - uVar22) * 8;
      uVar22 = (uint)pCVar6 & 7;
      *(ulong *)((int)pCVar6 - uVar22) =
           uVar20 << uVar22 * 8 |
           *(ulong *)((int)pCVar6 - uVar22) & 0xffffffffffffffffU >> (8 - uVar22) * 8;
      uVar22 = (uint)&pCVar6->m_nFacialHairIndex & 7;
      pcVar10 = &pCVar6->m_nFacialHairIndex + -uVar22;
      *(ulong *)pcVar10 = *(ulong *)pcVar10 & -1L << (uVar22 + 1) * 8 | uVar19 >> (7 - uVar22) * 8;
      uVar22 = (uint)&pCVar6->m_nBodyType & 7;
      pcVar10 = &pCVar6->m_nBodyType + -uVar22;
      *(ulong *)pcVar10 =
           uVar19 << uVar22 * 8 | *(ulong *)pcVar10 & 0xffffffffffffffffU >> (8 - uVar22) * 8;
      uVar22 = (uint)&pCVar6->field_0x17 & 7;
      puVar9 = (ulong *)(&pCVar6->field_0x17 + -uVar22);
      *puVar9 = *puVar9 & -1L << (uVar22 + 1) * 8 | uVar18 >> (7 - uVar22) * 8;
      uVar22 = (uint)&pCVar6->m_nSkinColor & 7;
      pcVar10 = &pCVar6->m_nSkinColor + -uVar22;
      *(ulong *)pcVar10 =
           uVar18 << uVar22 * 8 | *(ulong *)pcVar10 & 0xffffffffffffffffU >> (8 - uVar22) * 8;
      iVar13 = GetLatestPersDataVersion__8Neighbor();
      n->fPersonDataVersion = iVar13;
      __8BString2PCUs(&S,this->m_pFamilyConstructData->CustomData[iVar23].Name);
      SetUserName__11ObjSelectorRC8BString2(this_01,&S);
      ___8BString2(&S,2);
    }
    if (7 < iVar23 + 1) break;
    pEVar12 = this->m_pFamilyConstructData;
    iVar23 = iVar23 + 1;
  }
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
  uVar22 = 0;
  if ((int)f[10].__vtable - (int)f[9].__vtable >> 2 != 0) {
    do {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      uVar25 = uVar22 + 1;
      piVar11 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                                 ((int)&_5Globs_pNeighborhood->__vtable +
                                  (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                  AddFamilyHistoryStat);
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
      lVar16 = (**(code **)(*piVar11 + 0xdc))
                         ((int)piVar11 + (int)*(short *)(*piVar11 + 0xd8),
                          *(undefined4 *)(&(f[9].__vtable)->field_0x0 + uVar22 * 4));
      pFVar14 = f[10].__vtable;
      if (lVar16 != 0) {
                    /* end of inlined section */
        uVar24 = 0;
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
        piVar11 = *(int **)((int)lVar16 + 0xc);
        if ((int)pFVar14 - (int)f[9].__vtable >> 2 != 0) {
          iVar23 = uVar22 * 0xc4;
          piVar21 = Id;
          do {
            if (*(int *)((int)this->m_pFamilyConstructData->CustomData[0].m_Relationship + iVar23)
                == 0) {
              pFVar14 = f[10].__vtable;
            }
            else {
              lVar16 = (**(code **)(*piVar11 + 0x14))
                                 ((int)piVar11 + (int)*(short *)(*piVar11 + 0x10),*piVar21);
              if (lVar16 < 1) {
                (**(code **)(*piVar11 + 0x1c))
                          ((int)piVar11 + (int)*(short *)(*piVar11 + 0x18),*piVar21,1);
                iVar13 = *piVar11;
              }
              else {
                iVar13 = *piVar11;
              }
              (**(code **)(iVar13 + 0x34))
                        ((int)piVar11 + (int)*(short *)(iVar13 + 0x30),*piVar21,0,
                         *(undefined4 *)
                          ((int)this->m_pFamilyConstructData->CustomData[0].m_Relationship + iVar23)
                        );
                    /* inlined from ../MSrc/Vector.h */
              pFVar14 = f[10].__vtable;
            }
                    /* end of inlined section */
            uVar24 = uVar24 + 1;
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
            piVar21 = piVar21 + 1;
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
            iVar23 = iVar23 + 4;
          } while (uVar24 < (uint)((int)pFVar14 - (int)f[9].__vtable >> 2));
        }
                    /* inlined from ../MSrc/Vector.h */
        pFVar14 = f[10].__vtable;
      }
                    /* end of inlined section */
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
      uVar22 = uVar25;
    } while (uVar25 < (uint)((int)pFVar14 - (int)f[9].__vtable >> 2));
  }
  (*(code *)f->__vtable[1].GetMemberByGUID)
            ((int)&f->__vtable + (int)*(short *)&f->__vtable[1].GetIndexedMember,
             this->m_pFamilyConstructData->Funds);
  s = c_str__C13StringBuffer2(&this->m_pFamilyConstructData->FamilyName->field0_0x0);
  assign__8BString2PCUs((BString2 *)local_b0,s);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  piVar11 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                             ((int)&_5Globs_pNeighborhood->__vtable +
                              (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                              AddFamilyHistoryStat);
  (**(code **)(*piVar11 + 0x94))
            ((int)piVar11 + (int)*(short *)(*piVar11 + 0x90),_5Globs_pNghResFile,
             _5Globs_iSaveFileVersion);
  if (this->m_pFamilyConstructData == (EFamilyConstructData *)0x0) {
    pNVar7 = this->m_pImportResFile;
  }
  else {
    ___20EFamilyConstructData(this->m_pFamilyConstructData,3);
    pNVar7 = this->m_pImportResFile;
  }
  this->m_pFamilyConstructData = (EFamilyConstructData *)0x0;
  if (pNVar7 != (NghResFile__0_845 *)0x0) {
    piVar8 = (pNVar7->field0_0x0).__vtable;
    (*(code *)piVar8->Create)
              ((int)pNVar7->m_ppHouseWriteInfo + *(short *)&piVar8->_dyncastimpl + -0x18,3);
  }
  this->m_pImportResFile = (NghResFile__0_845 *)0x0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  this_02 = (NeighborhoodImpl *)
            (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                      ((int)&_5Globs_pNeighborhood->__vtable +
                       (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
  MoveIn__16NeighborhoodImplP6Familyi(this_02,f,local_b4);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  piVar11 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                             ((int)&_5Globs_pNeighborhood->__vtable +
                              (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                              AddFamilyHistoryStat);
  (**(code **)(*piVar11 + 0x94))
            ((int)piVar11 + (int)*(short *)(*piVar11 + 0x90),_5Globs_pNghResFile,
             _5Globs_iSaveFileVersion);
  return;
}

void ENeighborhoodMode::ImpFamilyCleanup() {
  return;
}

void ENeighborhoodMode::TransitionStoryModeToNextHouse() {
	int CurrentHouseNum;
	int RetVal;
	
  short sVar1;
  EGlobalManagerClient__vtable *pEVar2;
  int iVar3;
  EFamilyConstructData *pEVar4;
  StackString2_256_ *this_00;
  int iVar5;
  int iVar6;
  short *str;
  int *piVar7;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                    ((int)&_5Globs_pNeighborhood->__vtable +
                     (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
  sVar1 = *(short *)(iVar3 + 0x2e8);
  if (sVar1 == 0) {
    iVar3 = this->m_StoryModeTransitionStateNum;
    if (iVar3 == 0) {
      pEVar4 = (EFamilyConstructData *)__builtin_new(0x668);
      pEVar4 = __20EFamilyConstructData(pEVar4);
      this->m_pFamilyConstructData = pEVar4;
      memset(pEVar4,0,0x668);
      pEVar4 = this->m_pFamilyConstructData;
      this_00 = (StackString2_256_ *)__builtin_new(0x208);
                    /* inlined from ../MSrc/stringbuffer2.h */
      __13StringBuffer2PUsUi((StringBuffer2 *)this_00,this_00->fChars,0x100);
                    /* end of inlined section */
      pEVar4->FamilyName = this_00;
      pEVar2 = (_pGfx->field0_0x0).__vtable;
      (*(code *)pEVar2[3].ManagedShutdown)
                ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar2[3].ManagedStartup);
      *(undefined4 *)_app.m_pGameStateMan = 1;
      StartStoryEdit__12ECharedPanelP20EFamilyConstructData
                (this->m_pCharedMode->m_pPanel,this->m_pFamilyConstructData);
      this->m_StoryModeTransitionStateNum = 1;
    }
    else if (iVar3 == 1) {
      iVar5 = Update__11ECharedMode(this->m_pCharedMode);
      if (0 < iVar5) {
        StoryModePlaceSimInHouse__17ENeighborhoodModei(this,8);
        StoryModeRenameFamilyInHouse__17ENeighborhoodModei(this,8);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        iVar6 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        erase__13StringBuffer2((StringBuffer2 *)(iVar6 + 0x110));
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        iVar6 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        str = c_str__C13StringBuffer2(&this->m_pFamilyConstructData->FamilyName->field0_0x0);
        append__13StringBuffer2PCUsi((StringBuffer2 *)(iVar6 + 0x110),str,-1);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        piVar7 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                                  ((int)&_5Globs_pNeighborhood->__vtable +
                                   (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                   AddFamilyHistoryStat);
        (**(code **)(*piVar7 + 0x94))
                  ((int)piVar7 + (int)*(short *)(*piVar7 + 0x90),_5Globs_pNghResFile,
                   _5Globs_iSaveFileVersion);
                    /* inlined from /eor/src2/common/e_standard_heap.h */
        _memmanFree__FPv(this->m_pFamilyConstructData->FamilyName);
                    /* end of inlined section */
        this->m_pFamilyConstructData->FamilyName = (StackString2_256_ *)0x0;
        if (this->m_pFamilyConstructData != (EFamilyConstructData *)0x0) {
          ___20EFamilyConstructData(this->m_pFamilyConstructData,3);
        }
        this->m_pFamilyConstructData = (EFamilyConstructData *)0x0;
        _globals.m_GenTransitionLoadPercent = 0.0;
        _globals._380_4_ = iVar3;
        StoryModeStartHouse__17ENeighborhoodModei(this,8);
        _globals._372_4_ = iVar3;
      }
      if (iVar5 < 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
        _memmanFree__FPv(this->m_pFamilyConstructData->FamilyName);
                    /* end of inlined section */
        this->m_pFamilyConstructData->FamilyName = (StackString2_256_ *)0x0;
        if (this->m_pFamilyConstructData == (EFamilyConstructData *)0x0) {
          this->m_pFamilyConstructData = (EFamilyConstructData *)0x0;
        }
        else {
          ___20EFamilyConstructData(this->m_pFamilyConstructData,3);
          this->m_pFamilyConstructData = (EFamilyConstructData *)0x0;
        }
        HouseSelectGoToHoodSelect__17ENeighborhoodMode(this);
      }
    }
  }
  else {
    if (_globals._348_4_ == 1) {
      StoryModeTransferSim__17ENeighborhoodModeii
                (this,(int)sVar1,_globals.m_StoryModeMoveIntoHouseNum);
      StoryModeEvictAndEliminateFamily__17ENeighborhoodModei(this,(int)sVar1);
    }
    else {
      StoryModeTransferFamily__17ENeighborhoodModeii
                (this,(int)sVar1,_globals.m_StoryModeMoveIntoHouseNum);
    }
    StoryModeFillInFamily__17ENeighborhoodModeii
              (this,(int)sVar1,_globals.m_StoryModeFamilyToMoveInBehind);
    _globals._380_4_ = 1;
    _globals.m_GenTransitionLoadPercent = 0.6;
    StoryModeStartHouse__17ENeighborhoodModei(this,_globals.m_StoryModeMoveIntoHouseNum);
  }
  return;
}

void ENeighborhoodMode::StoryModeTransferSim(int OutOfHouseNum, int InToHouseNum) {
	int Funds;
	
  undefined4 uVar1;
  EFamilyConstructData *pEVar2;
  StackString2_256_ *this_00;
  int *piVar3;
  int iVar4;
  
  pEVar2 = (EFamilyConstructData *)__builtin_new(0x668);
  pEVar2 = __20EFamilyConstructData(pEVar2);
  this->m_pFamilyConstructData = pEVar2;
  memset(pEVar2,0,0x668);
  pEVar2 = this->m_pFamilyConstructData;
  this_00 = (StackString2_256_ *)__builtin_new(0x208);
                    /* inlined from ../MSrc/stringbuffer2.h */
  __13StringBuffer2PUsUi((StringBuffer2 *)this_00,this_00->fChars,0x100);
                    /* end of inlined section */
  pEVar2->FamilyName = this_00;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  piVar3 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                            ((int)&_5Globs_pNeighborhood->__vtable +
                             (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat
                            );
  iVar4 = (**(code **)(*piVar3 + 0x134))
                    ((int)piVar3 + (int)*(short *)(*piVar3 + 0x130),OutOfHouseNum);
  uVar1 = *(undefined4 *)(iVar4 + 0x14);
  StoryModeExtractSim__17ENeighborhoodModei(this,OutOfHouseNum);
  StoryModePlaceSimInHouse__17ENeighborhoodModei(this,InToHouseNum);
  StoryModeRenameFamilyInHouse__17ENeighborhoodModei(this,InToHouseNum);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  piVar3 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                            ((int)&_5Globs_pNeighborhood->__vtable +
                             (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat
                            );
  iVar4 = (**(code **)(*piVar3 + 0x134))
                    ((int)piVar3 + (int)*(short *)(*piVar3 + 0x130),InToHouseNum);
  *(undefined4 *)(iVar4 + 0x14) = uVar1;
                    /* inlined from /eor/src2/common/e_standard_heap.h */
  _memmanFree__FPv(this->m_pFamilyConstructData->FamilyName);
                    /* end of inlined section */
  this->m_pFamilyConstructData->FamilyName = (StackString2_256_ *)0x0;
  if (this->m_pFamilyConstructData == (EFamilyConstructData *)0x0) {
    this->m_pFamilyConstructData = (EFamilyConstructData *)0x0;
  }
  else {
    ___20EFamilyConstructData(this->m_pFamilyConstructData,3);
    this->m_pFamilyConstructData = (EFamilyConstructData *)0x0;
  }
  return;
}

void ENeighborhoodMode::StoryModeExtractSim(int HouseNum) {
	FamilyImpl *f;
	Neighbor *n;
	int MemberNum;
	FamilyMember *fm;
	int i;
	ObjSelector *ObjSel;
	BString2 S;
	FamilyMember *this;
	Neighbor *this;
	unsigned int n;
	Neighbor *this;
	ObjSelector *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  EFamilyConstructData *pEVar4;
  CustomCharacter *pCVar5;
  ulong *puVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  short *psVar12;
  ObjSelector *this_00;
  BString2 *str;
  ulong uVar13;
  ulong uVar14;
  ulong in_t0;
  ulong uVar15;
  undefined8 unaff_s0;
  int iVar16;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  int iVar17;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  BString2 S;
  StringBuffer2 SStack_270;
  short asStack_268 [260];
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
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
                    /* end of inlined section */
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  piVar8 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                            ((int)&_5Globs_pNeighborhood->__vtable +
                             (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat
                            );
  piVar8 = (int *)(**(code **)(*piVar8 + 0x134))
                            ((int)piVar8 + (int)*(short *)(*piVar8 + 0x130),HouseNum);
  *(undefined4 *)this->m_pFamilyConstructData->CharacterInSlot = 0;
  for (iVar16 = 0;
      iVar11 = (**(code **)(*piVar8 + 0x1c))((int)piVar8 + (int)*(short *)(*piVar8 + 0x18)),
      iVar17 = -1, iVar16 < iVar11; iVar16 = iVar16 + 1) {
    puVar9 = (undefined4 *)
             (**(code **)(*piVar8 + 0x24))((int)piVar8 + (int)*(short *)(*piVar8 + 0x20),iVar16);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    piVar10 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                               ((int)&_5Globs_pNeighborhood->__vtable +
                                (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                AddFamilyHistoryStat);
    iVar11 = (**(code **)(*piVar10 + 0xdc))((int)piVar10 + (int)*(short *)(*piVar10 + 0xd8),*puVar9)
    ;
    iVar17 = iVar16;
    if (*(short *)(iVar11 + 0x98) != 0) break;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  if (iVar17 == -1) {
    iVar17 = 0;
  }
  piVar10 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                             ((int)&_5Globs_pNeighborhood->__vtable +
                              (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                              AddFamilyHistoryStat);
  iVar16 = *piVar10;
  uVar14 = (ulong)iVar16;
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
  psVar12 = (short *)(**(code **)(iVar16 + 0xdc))
                               ((int)piVar10 + (int)*(short *)(iVar16 + 0xd8),
                                *(undefined4 *)(piVar8[9] + iVar17 * 4));
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  piVar10 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                             ((int)&_5Globs_pNeighborhood->__vtable +
                              (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                              AddFamilyHistoryStat);
  uVar13 = (ulong)*psVar12;
  this_00 = (ObjSelector *)
            (**(code **)(*piVar10 + 0xe4))((int)piVar10 + (int)*(short *)(*piVar10 + 0xe0));
  pEVar4 = this->m_pFamilyConstructData;
                    /* inlined from ../MSrc/objselector.h */
  pCVar5 = this_00->fCustomCharacter;
                    /* end of inlined section */
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
  uVar2 = (uint)&pCVar5->field_0x7 & 7;
  uVar3 = (uint)pCVar5 & 7;
  uVar13 = (*(long *)(&pCVar5->field_0x7 + -uVar2) << (7 - uVar2) * 8 |
           uVar13 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)pCVar5 - uVar3) >> uVar3 * 8;
  uVar2 = (uint)&pCVar5->m_nFacialHairIndex & 7;
  uVar3 = (uint)&pCVar5->m_nBodyType & 7;
  uVar14 = (*(long *)(&pCVar5->m_nFacialHairIndex + -uVar2) << (7 - uVar2) * 8 |
           uVar14 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)(&pCVar5->m_nBodyType + -uVar3) >> uVar3 * 8;
  uVar2 = (uint)&pCVar5->field_0x17 & 7;
  uVar3 = (uint)&pCVar5->m_nSkinColor & 7;
  uVar15 = (*(long *)(&pCVar5->field_0x17 + -uVar2) << (7 - uVar2) * 8 |
           in_t0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)(&pCVar5->m_nSkinColor + -uVar3) >> uVar3 * 8;
  puVar1 = &pEVar4->CustomData[0].c.field_0x7;
  uVar2 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar2);
  *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | uVar13 >> (7 - uVar2) * 8;
  pCVar5 = &pEVar4->CustomData[0].c;
  uVar2 = (uint)pCVar5 & 7;
  puVar6 = (ulong *)((int)pCVar5 - uVar2);
  *puVar6 = uVar13 << uVar2 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  pcVar7 = &pEVar4->CustomData[0].c.m_nFacialHairIndex;
  uVar2 = (uint)pcVar7 & 7;
  pcVar7 = pcVar7 + -uVar2;
  *(ulong *)pcVar7 = *(ulong *)pcVar7 & -1L << (uVar2 + 1) * 8 | uVar14 >> (7 - uVar2) * 8;
  pcVar7 = &pEVar4->CustomData[0].c.m_nBodyType;
  uVar2 = (uint)pcVar7 & 7;
  pcVar7 = pcVar7 + -uVar2;
  *(ulong *)pcVar7 = uVar14 << uVar2 * 8 | *(ulong *)pcVar7 & 0xffffffffffffffffU >> (8 - uVar2) * 8
  ;
  puVar1 = &pEVar4->CustomData[0].c.field_0x17;
  uVar2 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar2);
  *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | uVar15 >> (7 - uVar2) * 8;
  pcVar7 = &pEVar4->CustomData[0].c.m_nSkinColor;
  uVar2 = (uint)pcVar7 & 7;
  pcVar7 = pcVar7 + -uVar2;
  *(ulong *)pcVar7 = uVar15 << uVar2 * 8 | *(ulong *)pcVar7 & 0xffffffffffffffffU >> (8 - uVar2) * 8
  ;
  this->m_pFamilyConstructData->CustomData[0].m_nPersNice = (uchar)((int)psVar12[0x34] / 100);
  this->m_pFamilyConstructData->CustomData[0].m_nPersActive = (uchar)((int)psVar12[0x35] / 100);
  this->m_pFamilyConstructData->CustomData[0].m_nPersGenerous = (uchar)((int)psVar12[0x36] / 100);
  this->m_pFamilyConstructData->CustomData[0].m_nPersPlayful = (uchar)((int)psVar12[0x37] / 100);
  this->m_pFamilyConstructData->CustomData[0].m_nPersOutgoing = (uchar)((int)psVar12[0x38] / 100);
  this->m_pFamilyConstructData->CustomData[0].m_nPersNeat = (uchar)((int)psVar12[0x39] / 100);
  this->m_pFamilyConstructData->CustomData[0].m_ZodiacSign = *(uchar *)(psVar12 + 0x78);
  this->m_pFamilyConstructData->CustomData[0].m_nCleaningSkill = (int)psVar12[0x3b];
  this->m_pFamilyConstructData->CustomData[0].m_nCookingSkill = (int)psVar12[0x3c];
  this->m_pFamilyConstructData->CustomData[0].m_nSocialSkill = (int)psVar12[0x3d];
  this->m_pFamilyConstructData->CustomData[0].m_nRepairSkill = (int)psVar12[0x3e];
  this->m_pFamilyConstructData->CustomData[0].m_nGardeningSkill = (int)psVar12[0x3f];
  this->m_pFamilyConstructData->CustomData[0].m_nMusicSkill = (int)psVar12[0x40];
  this->m_pFamilyConstructData->CustomData[0].m_nCreativeSkill = (int)psVar12[0x41];
  this->m_pFamilyConstructData->CustomData[0].m_nLiteracySkill = (int)psVar12[0x42];
  this->m_pFamilyConstructData->CustomData[0].m_nPhysicalSkill = (int)psVar12[0x43];
  this->m_pFamilyConstructData->CustomData[0].m_nLogicSkill = (int)psVar12[0x44];
  this->m_pFamilyConstructData->CustomData[0].m_JobData = (int)psVar12[0x4a];
  this->m_pFamilyConstructData->CustomData[0].m_JobType = (int)psVar12[0x6a];
  this->m_pFamilyConstructData->CustomData[0].m_JobStatus = (int)psVar12[0x6b];
  this->m_pFamilyConstructData->CustomData[0].m_JobPerformance = (int)psVar12[0x71];
  this->m_pFamilyConstructData->CustomData[0].m_AgeObsolete = (int)psVar12[0x6c];
  GetThumbnail__11ObjSelectorPP8ERShader
            (this_00,&this->m_pFamilyConstructData->CustomData[0].m_pThumbnailShaderPtr);
  str = GetUserName__11ObjSelector(this_00);
  __8BString2RC8BString2UiUi(&S,str,0,0xffffffff);
  pEVar4 = this->m_pFamilyConstructData;
  psVar12 = c_str__C8BString2(&S);
  wcscpy__FPUsPCUs(pEVar4->CustomData[0].Name,psVar12);
  pEVar4 = this->m_pFamilyConstructData;
  psVar12 = c_str__C8BString2((BString2 *)(piVar8 + 1));
                    /* inlined from ../MSrc/stringbuffer2.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/stringbuffer2.h */
  __13StringBuffer2PUsUi(&SStack_270,asStack_268,0x100);
  append__13StringBuffer2PCUsi(&SStack_270,psVar12,-1);
  copy__13StringBuffer2RC13StringBuffer2(&pEVar4->FamilyName->field0_0x0,&SStack_270);
                    /* end of inlined section */
  ___8BString2(&S,2);
  return;
}

void ENeighborhoodMode::StoryModePlaceSimInHouse(int HouseNum) {
	FamilyImpl *f;
	Neighbor *n;
	int MemberNum;
	FamilyMember *fm;
	int i;
	ObjSelector *ObjSel;
	BString2 S;
	FamilyMember *this;
	Neighbor *this;
	unsigned int n;
	Neighbor *this;
	ETexture *TexPtr2;
	EShader *this;
	ObjSelector *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	
  undefined *puVar1;
  CustomCharacter *pCVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  ERShader *pEVar7;
  CustomCharacter *pCVar8;
  EFamilyConstructData *pEVar9;
  EFamilyConstructData *pEVar10;
  ulong *puVar11;
  char *pcVar12;
  int *piVar13;
  undefined4 *puVar14;
  int *piVar15;
  int iVar16;
  undefined2 *puVar17;
  ObjSelector *this_00;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  int iVar22;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  BString2 S;
  ETexture *TexPtr2;
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
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
                    /* end of inlined section */
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  piVar13 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].SetNeighborhoodVar)
                             ((int)&_5Globs_pNeighborhood->__vtable +
                              (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].GetNeighborhoodVar,
                              HouseNum);
  for (iVar18 = 0;
      iVar16 = (**(code **)(*piVar13 + 0x1c))((int)piVar13 + (int)*(short *)(*piVar13 + 0x18)),
      iVar22 = -1, iVar18 < iVar16; iVar18 = iVar18 + 1) {
    puVar14 = (undefined4 *)
              (**(code **)(*piVar13 + 0x24))((int)piVar13 + (int)*(short *)(*piVar13 + 0x20),iVar18)
    ;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    piVar15 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                               ((int)&_5Globs_pNeighborhood->__vtable +
                                (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                AddFamilyHistoryStat);
    iVar16 = (**(code **)(*piVar15 + 0xdc))
                       ((int)piVar15 + (int)*(short *)(*piVar15 + 0xd8),*puVar14);
    iVar22 = iVar18;
    if (*(short *)(iVar16 + 0x98) != 0) break;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  if (iVar22 == -1) {
    iVar22 = 0;
  }
  piVar15 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                             ((int)&_5Globs_pNeighborhood->__vtable +
                              (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                              AddFamilyHistoryStat);
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
  puVar17 = (undefined2 *)
            (**(code **)(*piVar15 + 0xdc))
                      ((int)piVar15 + (int)*(short *)(*piVar15 + 0xd8),
                       *(undefined4 *)(piVar13[9] + iVar22 * 4));
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  piVar13 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                             ((int)&_5Globs_pNeighborhood->__vtable +
                              (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                              AddFamilyHistoryStat);
  this_00 = (ObjSelector *)
            (**(code **)(*piVar13 + 0xe4))((int)piVar13 + (int)*(short *)(*piVar13 + 0xe0),*puVar17)
  ;
  pEVar7 = this->m_pFamilyConstructData->CustomData[0].m_pThumbnailShaderPtr;
  if (pEVar7 == (ERShader *)0x0) {
    SetThumbnail__11ObjSelectorP8ETexture
              (this_00,this->m_pFamilyConstructData->CustomData[0].m_pThumbnailTexturePtr);
  }
  else {
                    /* end of inlined section */
    DuplicateThumbnail__15ThumbnailLoaderPP8ETextureP8ETexture
              (&TexPtr2,(pEVar7->m_pShader->m_sd).rp[0].pTexture);
    SetThumbnail__11ObjSelectorP8ETexture(this_00,TexPtr2);
  }
  while( true ) {
    pEVar7 = this->m_pFamilyConstructData->CustomData[0].m_pThumbnailShaderPtr;
    if (pEVar7 == (ERShader *)0x0) break;
    DelRef__9EResource(&pEVar7->field0_0x0);
    this->m_pFamilyConstructData->CustomData[0].m_pThumbnailShaderPtr = (ERShader *)0x0;
  }
                    /* end of inlined section */
                    /* inlined from ../MSrc/objselector.h */
  pCVar8 = this_00->fCustomCharacter;
                    /* end of inlined section */
  puVar17[0x34] = (ushort)this->m_pFamilyConstructData->CustomData[0].m_nPersNice * 100;
  puVar17[0x35] = (ushort)this->m_pFamilyConstructData->CustomData[0].m_nPersActive * 100;
  puVar17[0x36] = (ushort)this->m_pFamilyConstructData->CustomData[0].m_nPersGenerous * 100;
  puVar17[0x37] = (ushort)this->m_pFamilyConstructData->CustomData[0].m_nPersPlayful * 100;
  puVar17[0x38] = (ushort)this->m_pFamilyConstructData->CustomData[0].m_nPersOutgoing * 100;
  puVar17[0x39] = (ushort)this->m_pFamilyConstructData->CustomData[0].m_nPersNeat * 100;
  puVar17[0x78] = (ushort)this->m_pFamilyConstructData->CustomData[0].m_ZodiacSign;
  puVar17[0x3b] = *(undefined2 *)&this->m_pFamilyConstructData->CustomData[0].m_nCleaningSkill;
  puVar17[0x3c] = *(undefined2 *)&this->m_pFamilyConstructData->CustomData[0].m_nCookingSkill;
  puVar17[0x3d] = *(undefined2 *)&this->m_pFamilyConstructData->CustomData[0].m_nSocialSkill;
  puVar17[0x3e] = *(undefined2 *)&this->m_pFamilyConstructData->CustomData[0].m_nRepairSkill;
  puVar17[0x3f] = *(undefined2 *)&this->m_pFamilyConstructData->CustomData[0].m_nGardeningSkill;
  puVar17[0x40] = *(undefined2 *)&this->m_pFamilyConstructData->CustomData[0].m_nMusicSkill;
  puVar17[0x41] = *(undefined2 *)&this->m_pFamilyConstructData->CustomData[0].m_nCreativeSkill;
  puVar17[0x42] = *(undefined2 *)&this->m_pFamilyConstructData->CustomData[0].m_nLiteracySkill;
  puVar17[0x43] = *(undefined2 *)&this->m_pFamilyConstructData->CustomData[0].m_nPhysicalSkill;
  puVar17[0x44] = *(undefined2 *)&this->m_pFamilyConstructData->CustomData[0].m_nLogicSkill;
  puVar17[0x4a] = *(undefined2 *)&this->m_pFamilyConstructData->CustomData[0].m_JobData;
  puVar17[0x6a] = *(undefined2 *)&this->m_pFamilyConstructData->CustomData[0].m_JobType;
  puVar17[0x6b] = *(undefined2 *)&this->m_pFamilyConstructData->CustomData[0].m_JobStatus;
  puVar17[0x71] = *(undefined2 *)&this->m_pFamilyConstructData->CustomData[0].m_JobPerformance;
  pEVar9 = this->m_pFamilyConstructData;
  uVar6 = *(ushort *)&pEVar9->CustomData[0].m_AgeObsolete;
  puVar17[0x4c] = 1;
  puVar17[0x6c] = uVar6;
  pEVar10 = this->m_pFamilyConstructData;
  puVar1 = &pEVar10->CustomData[0].c.field_0x7;
  uVar4 = (uint)puVar1 & 7;
  pCVar2 = &pEVar10->CustomData[0].c;
  uVar5 = (uint)pCVar2 & 7;
  uVar19 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
           (long)(int)pEVar9 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
           *(ulong *)((int)pCVar2 - uVar5) >> uVar5 * 8;
  pcVar12 = &pEVar10->CustomData[0].c.m_nFacialHairIndex;
  uVar4 = (uint)pcVar12 & 7;
  pcVar3 = &pEVar10->CustomData[0].c.m_nBodyType;
  uVar5 = (uint)pcVar3 & 7;
  uVar20 = (*(long *)(pcVar12 + -uVar4) << (7 - uVar4) * 8 |
           (ulong)uVar6 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
           *(ulong *)(pcVar3 + -uVar5) >> uVar5 * 8;
  puVar1 = &pEVar10->CustomData[0].c.field_0x17;
  uVar4 = (uint)puVar1 & 7;
  pcVar12 = &pEVar10->CustomData[0].c.m_nSkinColor;
  uVar5 = (uint)pcVar12 & 7;
  uVar21 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
           0xffffffffffffffffU >> (uVar4 + 1) * 8 & 1) & -1L << (8 - uVar5) * 8 |
           *(ulong *)(pcVar12 + -uVar5) >> uVar5 * 8;
  uVar4 = (uint)&pCVar8->field_0x7 & 7;
  puVar11 = (ulong *)(&pCVar8->field_0x7 + -uVar4);
  *puVar11 = *puVar11 & -1L << (uVar4 + 1) * 8 | uVar19 >> (7 - uVar4) * 8;
  uVar4 = (uint)pCVar8 & 7;
  *(ulong *)((int)pCVar8 - uVar4) =
       uVar19 << uVar4 * 8 |
       *(ulong *)((int)pCVar8 - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  uVar4 = (uint)&pCVar8->m_nFacialHairIndex & 7;
  pcVar12 = &pCVar8->m_nFacialHairIndex + -uVar4;
  *(ulong *)pcVar12 = *(ulong *)pcVar12 & -1L << (uVar4 + 1) * 8 | uVar20 >> (7 - uVar4) * 8;
  uVar4 = (uint)&pCVar8->m_nBodyType & 7;
  pcVar12 = &pCVar8->m_nBodyType + -uVar4;
  *(ulong *)pcVar12 =
       uVar20 << uVar4 * 8 | *(ulong *)pcVar12 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  uVar4 = (uint)&pCVar8->field_0x17 & 7;
  puVar11 = (ulong *)(&pCVar8->field_0x17 + -uVar4);
  *puVar11 = *puVar11 & -1L << (uVar4 + 1) * 8 | uVar21 >> (7 - uVar4) * 8;
  uVar4 = (uint)&pCVar8->m_nSkinColor & 7;
  pcVar12 = &pCVar8->m_nSkinColor + -uVar4;
  *(ulong *)pcVar12 =
       uVar21 << uVar4 * 8 | *(ulong *)pcVar12 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  iVar18 = GetLatestPersDataVersion__8Neighbor();
  *(int *)(puVar17 + 0x82) = iVar18;
  __8BString2PCUs(&S,this->m_pFamilyConstructData->CustomData[0].Name);
  SetUserName__11ObjSelectorRC8BString2(this_00,&S);
  ___8BString2(&S,2);
  return;
}

void ENeighborhoodMode::StoryModeRenameFamilyInHouse(int HouseNum) {
  int iVar1;
  short *s;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  iVar1 = (*(code *)_5Globs_pNeighborhood->__vtable[1].SetNeighborhoodVar)
                    ((int)&_5Globs_pNeighborhood->__vtable +
                     (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].GetNeighborhoodVar,HouseNum)
  ;
  s = c_str__C13StringBuffer2(&this->m_pFamilyConstructData->FamilyName->field0_0x0);
  assign__8BString2PCUs((BString2 *)(iVar1 + 4),s);
  return;
}

void ENeighborhoodMode::StoryModeEvictAndEliminateFamily(int HouseNum) {
	FamilyImpl *f;
	int index;
	Neighbor *n[8];
	int nc;
	int c;
	unsigned int n;
	
  Family *f;
  NeighborhoodImpl *this_00;
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  Neighbor **ppNVar6;
  Neighbor **ppNVar7;
  int iVar8;
  Neighbor *n [8];
  
  ppNVar7 = n;
  ppNVar6 = n;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  iVar8 = 0;
  f = (Family *)
      (*(code *)_5Globs_pNeighborhood->__vtable[1].SetNeighborhoodVar)
                ((int)&_5Globs_pNeighborhood->__vtable +
                 (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].GetNeighborhoodVar);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  this_00 = (NeighborhoodImpl *)
            (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                      ((int)&_5Globs_pNeighborhood->__vtable +
                       (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
  iVar1 = GetFamilyIndex__16NeighborhoodImplP6Family(this_00,f);
  EvictFamily__17ENeighborhoodModeib(this,HouseNum + -1,false);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  piVar2 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                            ((int)&_5Globs_pNeighborhood->__vtable +
                             (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat
                            );
  piVar2 = (int *)(**(code **)(*piVar2 + 0x124))
                            ((int)piVar2 + (int)*(short *)(*piVar2 + 0x120),iVar1);
  for (iVar1 = 0;
      iVar5 = (**(code **)(*piVar2 + 0x1c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x18)),
      iVar1 < iVar5; iVar1 = iVar1 + 1) {
    iVar8 = iVar8 + 1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    piVar3 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                              ((int)&_5Globs_pNeighborhood->__vtable +
                               (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                               AddFamilyHistoryStat);
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
    uVar4 = (**(code **)(*piVar3 + 0xdc))
                      ((int)piVar3 + (int)*(short *)(*piVar3 + 0xd8),
                       *(undefined4 *)(piVar2[9] + iVar1 * 4));
    *ppNVar7 = (Neighbor *)uVar4;
    ppNVar7 = ppNVar7 + 1;
  }
  if (0 < iVar8) {
    do {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      iVar8 = iVar8 + -1;
      (*(code *)_5Globs_pNeighborhood->__vtable[1].GetNeighborData)
                ((int)&_5Globs_pNeighborhood->__vtable +
                 (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].GetNeighborSelector,*ppNVar6);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      uVar4 = *ppNVar6;
      ppNVar6 = ppNVar6 + 1;
      (*(code *)_5Globs_pNeighborhood->__vtable[1].RelationshipsChanged)
                ((int)&_5Globs_pNeighborhood->__vtable +
                 (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].SavePersistentData,uVar4);
    } while (iVar8 != 0);
  }
  return;
}

void ENeighborhoodMode::StoryModeFillInFamily(int HouseNum, int FamilyNum) {
	FamilyImpl *f;
	
  NeighborhoodImpl *this_00;
  Family__vtable *pFVar1;
  long lVar2;
  Family *f;
  
  if (-1 < FamilyNum) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    lVar2 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetHouseNumberForLevel)
                      ((int)&_5Globs_pNeighborhood->__vtable +
                       (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].Save);
    f = (Family *)lVar2;
    if (lVar2 == 0) {
      pFVar1 = f->__vtable;
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      this_00 = (NeighborhoodImpl *)
                (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
      MoveIn__16NeighborhoodImplP6Familyi(this_00,f,HouseNum);
      pFVar1 = f->__vtable;
    }
    (*(code *)pFVar1[1].GetCreationOrder)
              ((int)&f->__vtable + (int)*(short *)&pFVar1[1].SetHouseNumber,1);
  }
  return;
}

void ENeighborhoodMode::StoryModeTransferFamily(int OutOfHouseNum, int InToHouseNum) {
	int Funds;
	
  Family__vtable *pFVar1;
  Family *f;
  NeighborhoodImpl *this_00;
  int iVar2;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  f = (Family *)
      (*(code *)_5Globs_pNeighborhood->__vtable[1].SetNeighborhoodVar)
                ((int)&_5Globs_pNeighborhood->__vtable +
                 (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].GetNeighborhoodVar);
  pFVar1 = f[5].__vtable;
  EvictFamily__17ENeighborhoodModeib(this,OutOfHouseNum + -1,true);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  this_00 = (NeighborhoodImpl *)
            (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                      ((int)&_5Globs_pNeighborhood->__vtable +
                       (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
  MoveIn__16NeighborhoodImplP6Familyi(this_00,f,InToHouseNum);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  iVar2 = (*(code *)_5Globs_pNeighborhood->__vtable[1].SetNeighborhoodVar)
                    ((int)&_5Globs_pNeighborhood->__vtable +
                     (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].GetNeighborhoodVar,
                     InToHouseNum);
  *(Family__vtable **)(iVar2 + 0x14) = pFVar1;
  return;
}

void ENeighborhoodMode::StoryModeStartHouse(int HouseNum) {
  int iVar1;
  int *piVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EGameStateId local_40 [4];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  iVar1 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                    ((int)&_5Globs_pNeighborhood->__vtable +
                     (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
  *(short *)(iVar1 + 0x2e8) = (short)HouseNum;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  piVar2 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                            ((int)&_5Globs_pNeighborhood->__vtable +
                             (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat
                            );
  (**(code **)(*piVar2 + 0x94))
            ((int)piVar2 + (int)*(short *)(*piVar2 + 0x90),_5Globs_pNghResFile,
             _5Globs_iSaveFileVersion);
  *(undefined4 *)&this->m_bClearpCurHouseOnExit = 0;
  _globals._pCurHouse = (EHouse__26_3190 *)0x0;
  SetCurrentHouse__10NghResFileUi(_5Globs_pNghResFile,HouseNum);
  SetCurHouse__7EGlobali(&_globals,HouseNum);
  if (_globals.Cheats._0_4_ != 0) {
                    /* end of inlined section */
    SetGameMode__12cSoundPlayerQ23snd5eMode(_5Globs_pSound,kLoad);
  }
  _globals._380_4_ = 1;
                    /* end of inlined section */
  local_40[0].m_id = 1;
  SetState__13EGameStateManG12EGameStateId(_app.m_pGameStateMan,local_40);
  return;
}

void ENeighborhoodMode::UpdateChallengeModeSetup() {
	int lotnum;
	
  EUIVirtualCtrl__vtable *pEVar1;
  EUiAudio *pEVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  uint uCurrentHouse;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  float fVar6;
  EGameStateId local_60 [4];
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
  
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  fVar6 = this->m_PulseAccumulator + _dt * 5.0;
  this->m_PulseAccumulator = fVar6;
  if (6.283185 < fVar6) {
    this->m_PulseAccumulator = 0.0;
  }
  pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar5 = (**(code **)(pEVar1 + 1))
                    ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,0,0x10);
  if (lVar5 == 0) {
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar5 = (**(code **)(pEVar1 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,1,0x10
                      );
    if (lVar5 != 0) {
      iVar3 = *(int *)&this->m_bImportSimActive;
      goto LAB_00195710;
    }
  }
  else {
    iVar3 = *(int *)&this->m_bImportSimActive;
LAB_00195710:
    if (iVar3 != 1) {
      if (this->m_ChallengeModeStateNum == 3) {
        *(undefined4 *)&this->m_bWaitForButtonUp = 1;
        this->m_ChallengeModeStateNum = 1;
        return;
      }
      if (this->m_ChallengeModeStateNum != 7) {
        if (*(int *)&this->m_bWaitForButtonUp != 0) {
          return;
        }
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
        PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x48ae94f);
                    /* end of inlined section */
        *(undefined4 *)&this->m_bExitScreen = 0;
        HouseSelectGoToHoodSelect__17ENeighborhoodMode(this);
        _globals._20_4_ = 0;
        while (this->m_pChallengeModeIntroShdr != (ERShader *)0x0) {
          DelRef__9EResource(&this->m_pChallengeModeIntroShdr->field0_0x0);
          this->m_pChallengeModeIntroShdr = (ERShader *)0x0;
        }
        return;
      }
      goto LAB_00195e44;
    }
  }
  pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar5 = (**(code **)(pEVar1 + 1))
                    ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,0,0x10);
  if ((lVar5 == 0) ||
     (pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable,
     lVar5 = (**(code **)(pEVar1 + 1))
                       ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,1,
                        0x10), lVar5 != 0)) {
    *(undefined4 *)&this->m_bWaitForButtonUp = 0;
    iVar3 = this->m_ChallengeModeStateNum;
  }
  else {
    iVar3 = this->m_ChallengeModeStateNum;
  }
  if (iVar3 == 0) {
    this->m_ChallCursorPos = 0;
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar5 = (**(code **)(pEVar1 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,0,0x40
                      );
    if (lVar5 == 0) {
      pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar5 = (**(code **)(pEVar1 + 1))
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,1,
                         0x40);
      if (lVar5 == 0) {
        this->m_ChallengeModeStateNum = 1;
        iVar3 = this->m_ChallengeModeStateNum;
      }
      else {
        iVar3 = this->m_ChallengeModeStateNum;
      }
    }
    else {
      iVar3 = this->m_ChallengeModeStateNum;
    }
  }
  else {
    iVar3 = this->m_ChallengeModeStateNum;
  }
  if (iVar3 == 1) {
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar5 = (**(code **)(pEVar1 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,0,
                       0x4000);
    if (lVar5 == 0) {
      pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar5 = (**(code **)(pEVar1 + 1))
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,1,
                         0x4000);
      if (lVar5 != 0) {
        iVar3 = this->m_ChallCursorPos;
        goto LAB_001958b4;
      }
    }
    else {
      iVar3 = this->m_ChallCursorPos;
LAB_001958b4:
      if (iVar3 == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
        PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x867a1f00);
                    /* end of inlined section */
        this->m_ChallCursorPos = 1;
      }
    }
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar5 = (**(code **)(pEVar1 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,0,
                       0x1000);
    if (lVar5 == 0) {
      pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar5 = (**(code **)(pEVar1 + 1))
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,1,
                         0x1000);
      if (lVar5 != 0) {
        iVar3 = this->m_ChallCursorPos;
        goto LAB_0019592c;
      }
    }
    else {
      iVar3 = this->m_ChallCursorPos;
LAB_0019592c:
      if (iVar3 == 1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
        PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x867a1f00);
                    /* end of inlined section */
        this->m_ChallCursorPos = 0;
      }
    }
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar5 = (**(code **)(pEVar1 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,0,0x40
                      );
    if (lVar5 == 0) {
      pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar5 = (**(code **)(pEVar1 + 1))
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,1,
                         0x40);
      if (lVar5 != 0) {
        iVar3 = *(int *)&this->m_bLastXDown;
        goto LAB_001959a8;
      }
      *(undefined4 *)&this->m_bLastXDown = 0;
    }
    else {
      iVar3 = *(int *)&this->m_bLastXDown;
LAB_001959a8:
      pEVar2 = _8EUiAudio__pUiAudioMan;
      if (iVar3 == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
                    /* end of inlined section */
        *(undefined4 *)&this->m_bLastXDown = 1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
        PlayUiSound__8EUiAudioUi(pEVar2,0xcf99db1e);
                    /* end of inlined section */
        this->m_ChallengeModeStateNum = 2;
      }
      else {
        *(undefined4 *)&this->m_bLastXDown = 0;
      }
    }
    iVar3 = this->m_ChallengeModeStateNum;
  }
  else {
    iVar3 = this->m_ChallengeModeStateNum;
  }
  if (iVar3 == 2) {
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar5 = (**(code **)(pEVar1 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,0,0x40
                      );
    if (lVar5 == 0) {
      pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar5 = (**(code **)(pEVar1 + 1))
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,1,
                         0x40);
      if (lVar5 != 0) {
        iVar3 = *(int *)&this->m_bLastXDown;
        goto LAB_00195a3c;
      }
      iVar3 = this->m_ChallCursorPos;
    }
    else {
      iVar3 = *(int *)&this->m_bLastXDown;
LAB_00195a3c:
      if (iVar3 != 0) {
        iVar3 = this->m_ChallengeModeStateNum;
        goto LAB_00195a64;
      }
      iVar3 = this->m_ChallCursorPos;
    }
    *(undefined4 *)&this->m_bLastXDown = 0;
    if (iVar3 != 0) {
      iVar3 = 3;
      goto LAB_00195d88;
    }
    this->m_ChallengeModeStateNum = 4;
    iVar3 = this->m_ChallengeModeStateNum;
  }
  else {
    iVar3 = this->m_ChallengeModeStateNum;
  }
LAB_00195a64:
  if (iVar3 == 3) {
    if (*(int *)&this->m_bImportSimActive == 1) {
      pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar5 = (**(code **)(pEVar1 + 1))
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,0,
                         0x40);
      if (lVar5 == 0) {
        pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
        lVar5 = (**(code **)(pEVar1 + 1))
                          ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,1,
                           0x40);
        if (lVar5 != 0) {
          iVar3 = *(int *)&this->m_bLastXDown;
          goto LAB_00195ad8;
        }
        *(undefined4 *)&this->m_bLastXDown = 0;
      }
      else {
        iVar3 = *(int *)&this->m_bLastXDown;
LAB_00195ad8:
        if (iVar3 != 0) {
          iVar3 = this->m_ChallengeModeStateNum;
          goto LAB_00195b10;
        }
        *(undefined4 *)&this->m_bLastXDown = 0;
      }
      UpdateImportSim__17ENeighborhoodMode(this);
      iVar3 = this->m_ChallengeModeStateNum;
    }
    else {
      if (this->m_ImportMember != 1) {
        *(undefined4 *)&this->m_bWaitForButtonUp = 1;
        this->m_ChallengeModeStateNum = 1;
        return;
      }
      this->m_ChallengeModeStateNum = 4;
      iVar3 = this->m_ChallengeModeStateNum;
    }
  }
  else {
    iVar3 = this->m_ChallengeModeStateNum;
  }
LAB_00195b10:
  if (iVar3 == 4) {
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar5 = (**(code **)(pEVar1 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,0,0x40
                      );
    if (lVar5 == 0) {
      pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar5 = (**(code **)(pEVar1 + 1))
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,1,
                         0x40);
      if (lVar5 == 0) {
        this->m_ChallCursorPos = 0;
        this->m_ChallengeModeStateNum = 5;
        iVar3 = this->m_ChallengeModeStateNum;
      }
      else {
        iVar3 = this->m_ChallengeModeStateNum;
      }
    }
    else {
      iVar3 = this->m_ChallengeModeStateNum;
    }
  }
  else {
    iVar3 = this->m_ChallengeModeStateNum;
  }
  if (iVar3 == 5) {
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar5 = (**(code **)(pEVar1 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,0,
                       0x4000);
    if (lVar5 == 0) {
      pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar5 = (**(code **)(pEVar1 + 1))
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,1,
                         0x4000);
      if (lVar5 != 0) {
        iVar3 = this->m_ChallCursorPos;
        goto LAB_00195be4;
      }
    }
    else {
      iVar3 = this->m_ChallCursorPos;
LAB_00195be4:
      if (iVar3 == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
        PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x867a1f00);
                    /* end of inlined section */
        this->m_ChallCursorPos = 1;
      }
    }
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar5 = (**(code **)(pEVar1 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,0,
                       0x1000);
    if (lVar5 == 0) {
      pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar5 = (**(code **)(pEVar1 + 1))
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,1,
                         0x1000);
      if (lVar5 != 0) {
        iVar3 = this->m_ChallCursorPos;
        goto LAB_00195c60;
      }
    }
    else {
      iVar3 = this->m_ChallCursorPos;
LAB_00195c60:
      if (iVar3 == 1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
        PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x867a1f00);
                    /* end of inlined section */
        this->m_ChallCursorPos = 0;
      }
    }
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar5 = (**(code **)(pEVar1 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,0,0x40
                      );
    if (lVar5 == 0) {
      pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar5 = (**(code **)(pEVar1 + 1))
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,1,
                         0x40);
      if (lVar5 != 0) {
        iVar3 = *(int *)&this->m_bLastXDown;
        goto LAB_00195cdc;
      }
      *(undefined4 *)&this->m_bLastXDown = 0;
    }
    else {
      iVar3 = *(int *)&this->m_bLastXDown;
LAB_00195cdc:
      pEVar2 = _8EUiAudio__pUiAudioMan;
      if (iVar3 == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
                    /* end of inlined section */
        *(undefined4 *)&this->m_bLastXDown = 1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
        PlayUiSound__8EUiAudioUi(pEVar2,0xcf99db1e);
                    /* end of inlined section */
        this->m_ChallengeModeStateNum = 6;
      }
      else {
        *(undefined4 *)&this->m_bLastXDown = 0;
      }
    }
    iVar3 = this->m_ChallengeModeStateNum;
  }
  else {
    iVar3 = this->m_ChallengeModeStateNum;
  }
  if (iVar3 == 6) {
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar5 = (**(code **)(pEVar1 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,0,0x40
                      );
    if (lVar5 == 0) {
      pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar5 = (**(code **)(pEVar1 + 1))
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,1,
                         0x40);
      if (lVar5 != 0) {
        iVar3 = *(int *)&this->m_bLastXDown;
        goto LAB_00195d70;
      }
      iVar3 = this->m_ChallCursorPos;
    }
    else {
      iVar3 = *(int *)&this->m_bLastXDown;
LAB_00195d70:
      if (iVar3 != 0) {
        iVar3 = this->m_ChallengeModeStateNum;
        goto LAB_00195dac;
      }
      iVar3 = this->m_ChallCursorPos;
    }
    *(undefined4 *)&this->m_bLastXDown = 0;
    if (iVar3 != 0) {
      iVar3 = 7;
LAB_00195d88:
      this->m_ChallengeModeStateNum = iVar3;
      ImportSimStart__17ENeighborhoodModeb(this,false);
      return;
    }
    this->m_ChallengeModeStateNum = 8;
    iVar3 = this->m_ChallengeModeStateNum;
  }
  else {
    iVar3 = this->m_ChallengeModeStateNum;
  }
LAB_00195dac:
  if (iVar3 == 7) {
    if (*(int *)&this->m_bImportSimActive == 1) {
      pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar5 = (**(code **)(pEVar1 + 1))
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,0,
                         0x40);
      if (lVar5 == 0) {
        pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
        lVar5 = (**(code **)(pEVar1 + 1))
                          ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,1,
                           0x40);
        if (lVar5 != 0) {
          iVar3 = *(int *)&this->m_bLastXDown;
          goto LAB_00195e20;
        }
        *(undefined4 *)&this->m_bLastXDown = 0;
      }
      else {
        iVar3 = *(int *)&this->m_bLastXDown;
LAB_00195e20:
        if (iVar3 != 0) {
          iVar3 = this->m_ChallengeModeStateNum;
          goto LAB_00195e60;
        }
        *(undefined4 *)&this->m_bLastXDown = 0;
      }
      UpdateImportSim__17ENeighborhoodMode(this);
      iVar3 = this->m_ChallengeModeStateNum;
    }
    else {
      if (this->m_ImportMember != 1) {
LAB_00195e44:
        *(undefined4 *)&this->m_bWaitForButtonUp = 1;
        this->m_ChallengeModeStateNum = 5;
        return;
      }
      *(undefined4 *)&this->m_bLastXDown = 1;
      this->m_ChallengeModeStateNum = 8;
      iVar3 = this->m_ChallengeModeStateNum;
    }
  }
  else {
    iVar3 = this->m_ChallengeModeStateNum;
  }
LAB_00195e60:
  if (iVar3 == 8) {
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar5 = (**(code **)(pEVar1 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,0,0x40
                      );
    if (lVar5 == 0) {
      *(undefined4 *)&this->m_bLastXDown = 0;
    }
    else {
      if (*(int *)&this->m_bLastXDown != 0) {
        iVar3 = this->m_ChallengeModeStateNum;
        goto LAB_00195eb8;
      }
      this->m_ChallengeModeStateNum = 9;
      *(undefined4 *)&this->m_bLastXDown = 1;
    }
    iVar3 = this->m_ChallengeModeStateNum;
  }
  else {
    iVar3 = this->m_ChallengeModeStateNum;
  }
LAB_00195eb8:
  if (iVar3 == 9) {
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar5 = (**(code **)(pEVar1 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,1,0x40
                      );
    if (lVar5 == 0) {
      *(undefined4 *)&this->m_bLastXDown = 0;
    }
    else {
      if (*(int *)&this->m_bLastXDown != 0) {
        iVar3 = this->m_ChallengeModeStateNum;
        goto LAB_00195f10;
      }
      this->m_ChallengeModeStateNum = 10;
      *(undefined4 *)&this->m_bLastXDown = 1;
    }
    iVar3 = this->m_ChallengeModeStateNum;
  }
  else {
    iVar3 = this->m_ChallengeModeStateNum;
  }
LAB_00195f10:
  if (iVar3 == 10) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    piVar4 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                              ((int)&_5Globs_pNeighborhood->__vtable +
                               (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                               AddFamilyHistoryStat);
    (**(code **)(*piVar4 + 0x94))
              ((int)piVar4 + (int)*(short *)(*piVar4 + 0x90),_5Globs_pNghResFile,
               _5Globs_iSaveFileVersion);
    *(undefined4 *)&this->m_bClearpCurHouseOnExit = 0;
    _globals._pCurHouse = (EHouse__26_3190 *)0x0;
    uCurrentHouse = this->m_CurrentTargetHouse + 1;
    SetCurrentHouse__10NghResFileUi(_5Globs_pNghResFile,uCurrentHouse);
    SetCurHouse__7EGlobali(&_globals,uCurrentHouse);
    if (_globals.Cheats._0_4_ == 0) {
      _globals.m_pStoryModeTransitionShader = this->m_pChallengeModeIntroShdr;
    }
    else {
                    /* end of inlined section */
      SetGameMode__12cSoundPlayerQ23snd5eMode(_5Globs_pSound,kLoad);
      _globals.m_pStoryModeTransitionShader = this->m_pChallengeModeIntroShdr;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
                    /* end of inlined section */
    local_60[0].m_id = 1;
    SetState__13EGameStateManG12EGameStateId(_app.m_pGameStateMan,local_60);
    _globals._384_4_ = 1;
    _globals.m_GenTransitionLoadPercent = 0.0;
  }
  return;
}

void ENeighborhoodMode::DrawChallengeModeSetup(ERC *prc) {
	ERQuickdata *pSimsUIData;
	ChallengeData *pChallengeData;
	EVec2 vScreen;
	float Size;
	float PulseFactor;
	float PulseFactorX;
	float PulseFactorY;
	float fWidth;
	float fHeight;
	EVec2 vGlowPos;
	EVec2 *this;
	EVec2 *this;
	EGraphics *this;
	EGraphics *this;
	ERQuickdata *this;
	EGraphics *this;
	ERFont &font;
	EVec2 vPos;
	ERFont *this;
	ELocString *this;
	ERFont *this;
	ERC *prc;
	EVec2 *this;
	ERFont *this;
	ELocString *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont &font;
	EVec2 vPos;
	ERFont *this;
	ELocString *this;
	ERFont *this;
	ERC *prc;
	EVec2 *this;
	ERFont *this;
	ELocString *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	StringBufW255 String;
	EVec2 vPos;
	ERC *prc;
	ERC *prc;
	StringBufW255 String;
	EVec2 vPos;
	ERC *prc;
	ERC *prc;
	
  int iVar1;
  undefined8 uVar2;
  ERFont *pEVar3;
  ERFont *pEVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *pvVar8;
  short *psVar9;
  float fVar10;
  int iVar11;
  ERShader *pEVar12;
  short *vPos_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  EVec4 *pEVar13;
  undefined8 unaff_s3;
  StackString2_256_ *outStr;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  EVec2 vScreen;
  EVec2 vGlowPos;
  StackString2_256_ String;
  EVec2 vPos;
  float local_190;
  EStorable__vtable *local_18c;
  float local_180;
  EStorable__vtable *local_17c;
  int local_170;
  int local_16c;
  ERQuickdata *pSimsUIData;
  ERFont *local_10c;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d0;
  undefined4 uStack_cc;
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
  
  local_80 = (undefined4)unaff_s8;
  uStack_7c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_b0 = (undefined4)unaff_s5;
  uStack_ac = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_retaddr;
  uStack_6c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_90 = (undefined4)unaff_s7;
  uStack_8c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_a0 = (undefined4)unaff_s6;
  uStack_9c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_c0 = (undefined4)unaff_s4;
  uStack_bc = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_d0 = (undefined4)unaff_s3;
  uStack_cc = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_e0 = (undefined4)unaff_s2;
  uStack_dc = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_f0 = (undefined4)unaff_s1;
  uStack_ec = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_100 = (undefined4)unaff_s0;
  uStack_fc = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (this->m_pChallengeModeIntroShdr == (ERShader *)0x0) {
    Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vScreen.field0_0x0.d[1] = 0.0;
    vScreen.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vGlowPos.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vGlowPos.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    String.field0_0x0.fMem = (short *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    String.field0_0x0.fCapacity = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    String.fChars._40_4_ = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    String.fChars._44_4_ = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    String.fChars._56_4_ = 0;
    String.fChars._60_4_ = 0;
    String.fChars._64_4_ = 0;
    String.fChars._68_4_ = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vScreen,&vGlowPos,
               &String,String.fChars + 0x14,String.fChars + 0x1c);
    local_10c = (ERFont *)(String.fChars + 4);
    pEVar12 = this->m_pBlankShdr;
  }
  else {
    Select__8ERShaderP3ERCi(this->m_pChallengeModeIntroShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vScreen.field0_0x0.d[1] = 0.0;
    vScreen.field0_0x0.d[0] = 0.0;
    local_10c = (ERFont *)(String.fChars + 4);
    vGlowPos.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vGlowPos.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    String.field0_0x0.fMem = (short *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    String.field0_0x0.fCapacity = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    String.fChars._8_4_ = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    String.fChars._12_4_ = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    String.fChars._24_4_ = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    String.fChars._36_4_ = 0x3f800000;
    String.fChars._28_4_ = 1.0;
    String.fChars._32_4_ = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vScreen,&vGlowPos,
               &String,local_10c,String.fChars + 0xc);
    pEVar12 = this->m_pBlankShdr;
  }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar21 = 0.178;
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(pEVar12,prc,0);
  fVar14 = _13EUIObjectNode_SAFE_BOTTOM;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar15 = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar16 = 0.5;
                    /* end of inlined section */
  fVar17 = 0.1;
  vScreen.field0_0x0.d[1] = _13EUIObjectNode_SAFE_BOTTOM - 46.0 / (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vGlowPos.field0_0x0.d[0] = 1.0;
  vGlowPos.field0_0x0.d[1] = 1.0;
  String.field0_0x0.fMem = (short *)0x0;
  String.field0_0x0.fCapacity = 0x3f800000;
  String.fChars._12_4_ = 0.0;
  String.fChars._8_4_ = 1.0;
                    /* end of inlined section */
  iVar19 = 0;
  fVar10 = fVar16;
  vScreen.field0_0x0.d[0] = fVar21;
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vScreen,
             (EVec4 *)&vGlowPos,&String,local_10c,0x35f4b0);
  Select__8ERShaderP3ERCi(this->m_pMenuBevelShdr,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vScreen.field0_0x0.d[1] = fVar14 - 50.0 / (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vGlowPos.field0_0x0.d[0] = (float)_pGfx->m_xscreen * 0.003210938;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  String.fChars._4_4_ = 0x3f800000;
  String.fChars._0_4_ = 0x3f800000;
  String.field0_0x0.fCapacity = 0x3f800000;
  String.field0_0x0.fMem = (short *)0x3f800000;
                    /* end of inlined section */
  vScreen.field0_0x0.d[0] = fVar21;
  vGlowPos.field0_0x0.d[1] = fVar10;
  (*(code *)prc->__vtable[1].ClipRect)
            (iVar19,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vScreen,
             (EVec4 *)&vGlowPos,&String);
  Select__8ERShaderP3ERCi(this->m_pDPadBackgroundShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vScreen.field0_0x0.d[0] = -0.22;
  vScreen.field0_0x0.d[1] = 0.747891;
  vGlowPos.field0_0x0.d[1] = 1.0;
  vGlowPos.field0_0x0.d[0] = 1.0;
  String.field0_0x0.fMem = (short *)0x3f800000;
  String.field0_0x0.fCapacity = 0x3f800000;
  String.fChars._0_4_ = 0x3f800000;
  String.fChars._4_4_ = 0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (iVar19,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vScreen,
             (EVec4 *)&vGlowPos,&String);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vScreen.field0_0x0.d[0] = -0.17;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vScreen.field0_0x0.d[1] = 0.04;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  vGlowPos.field0_0x0.d[1] = 1.0;
  vGlowPos.field0_0x0.d[0] = 1.0;
  String.fChars._4_4_ = 0x3f800000;
  String.fChars._0_4_ = 0x3f800000;
  String.field0_0x0.fCapacity = 0x3f800000;
  String.field0_0x0.fMem = (short *)0x3f800000;
  (local_10c->field0_0x0).m_resId = 0x3f800000;
  (local_10c->field0_0x0).m_pManager = (EResourceManager *)0x3f800000;
  (local_10c->field0_0x0).m_name.m_p = (char *)0x3f800000;
  String.fChars._8_4_ = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  String.fChars._84_4_ = 0x3f800000;
  String.fChars._80_4_ = 0x3f800000;
  String.fChars._76_4_ = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  String.fChars._72_4_ = 0x3f800000;
                    /* end of inlined section */
  DrawButtonPrompts__7DPadWinP3ERCRC5EVec2iP8ERShaderN34bRC5EVec4N39
            (prc,&vScreen,0,_7DPadWin_m_pUpShdr,_7DPadWin_m_pDownShdr,_7DPadWin_m_pBlankLeft,
             _7DPadWin_m_pBlankRight,false,(EVec4 *)&vGlowPos,(EVec4 *)&String,(EVec4 *)local_10c,
             (EVec4 *)(String.fChars + 0x24));
  Draw__10EPromptBarP3ERC(&this->m_PromptsBarDescLevel1,prc);
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
  pSimsUIData = (ERQuickdata *)
                AddRef__16EResourceManagerUiP5EFilei
                          (&_quickdataman.field0_0x0,0xa173a1ee,(EFile *)0x0,0);
  pvVar8 = getTable__11ERQuickdataPCc(pSimsUIData,"ChallengeData");
                    /* end of inlined section */
  iVar11 = *(int *)((int)pvVar8 + 4);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  vScreen.field0_0x0.d[0] = (float)_pGfx->m_xscreen;
  vScreen.field0_0x0.d[1] = (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar14 = sinf(this->m_PulseAccumulator);
  pEVar3 = _globals.m_pFont;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar14 = (fVar14 * fVar16 + fVar15) * 10.0;
  iVar1 = this->m_ChallengeModeStateNum;
  fVar21 = fVar14 / vScreen.field0_0x0.d[1];
  fVar14 = fVar14 / vScreen.field0_0x0.d[0];
  vGlowPos.field0_0x0.d[0] = fVar16;
  vGlowPos.field0_0x0.d[1] = fVar16;
  if (iVar1 != 1) {
    if (iVar1 != 3) {
      if (iVar1 == 5) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* end of inlined section */
        SetSize__6ERFontffb(_globals.m_pFont,35.0,fVar15,true);
        fVar18 = 25.0;
        Select__6ERFontP3ERC(pEVar3,prc);
        fVar10 = _13EUIObjectNode_SAFE_TOP;
        uVar7 = _BLACK.field0_0x0.d[3];
        uVar6 = _BLACK.field0_0x0.d[2];
        uVar5 = _BLACK.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        (pEVar3->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
        (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
        (pEVar3->m_vColor).field0_0x0.d[2] = uVar6;
        (pEVar3->m_vColor).field0_0x0.d[3] = uVar7;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
        String.fChars._8_4_ = fVar15 / vScreen.field0_0x0.d[0] + fVar16;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
        String.fChars._12_4_ = fVar10 + fVar15 / vScreen.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
        String.fChars._24_4_ = String.fChars._8_4_;
        String.fChars._28_4_ = String.fChars._12_4_;
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (pEVar3,prc,**(void ***)(this->m_CurrentTargetHouse * 100 + iVar11),true,
                   (EVec2 *)(String.fChars + 0xc),E_FAX_CENTER,E_FAY_TOP,(EVec2 *)&String);
        uVar7 = _WHITE.field0_0x0.d[3];
        uVar6 = _WHITE.field0_0x0.d[2];
        uVar5 = _WHITE.field0_0x0._0_8_;
        (pEVar3->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
        (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
        (pEVar3->m_vColor).field0_0x0.d[2] = uVar6;
        (pEVar3->m_vColor).field0_0x0.d[3] = uVar7;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
        String.fChars._28_4_ = fVar10;
        String.fChars._12_4_ = fVar10;
        String.fChars._8_4_ = fVar16;
        String.fChars._24_4_ = fVar16;
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (pEVar3,prc,**(void ***)(this->m_CurrentTargetHouse * 100 + iVar11),true,
                   (EVec2 *)(String.fChars + 0xc),E_FAX_CENTER,E_FAY_TOP,(EVec2 *)&String);
                    /* end of inlined section */
        SetSize__6ERFontffb(pEVar3,fVar18,0.9,true);
        Select__6ERFontP3ERC(pEVar3,prc);
        if (this->m_ChallCursorPos == 0) {
          SetSize__6ERFontffb(_globals.m_pFont,fVar18,fVar15,false);
          pEVar4 = _globals.m_pFont;
          psVar9 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"chall_use_default_sim");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
          DoGetStringSize__6ERFontPvbP7EWindow
                    (local_10c,pEVar4,SUB41(psVar9,0),(EWindow *)&pGifTag1);
          fVar10 = String.fChars._8_4_;
          pEVar4 = _globals.m_pFont;
          psVar9 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"chall_use_default_sim");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
          DoGetStringSize__6ERFontPvbP7EWindow
                    (local_10c,pEVar4,SUB41(psVar9,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
          vGlowPos.field0_0x0.d[1] = 0.55;
                    /* end of inlined section */
LAB_00196d60:
          fVar17 = String.fChars._12_4_ * 1.75 + fVar21;
          pEVar12 = this->m_pGlow;
          fVar14 = fVar10 * 1.18 + fVar14;
          vGlowPos.field0_0x0.d[0] = fVar16;
        }
        else {
          if (this->m_ChallCursorPos == 1) {
            SetSize__6ERFontffb(_globals.m_pFont,fVar18,fVar15,false);
            pEVar4 = _globals.m_pFont;
            psVar9 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"chall_import_sim");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
            DoGetStringSize__6ERFontPvbP7EWindow
                      (local_10c,pEVar4,SUB41(psVar9,0),(EWindow *)&pGifTag1);
            fVar10 = String.fChars._8_4_;
            pEVar4 = _globals.m_pFont;
                    /* end of inlined section */
            psVar9 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"chall_import_sim");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
            DoGetStringSize__6ERFontPvbP7EWindow
                      (local_10c,pEVar4,SUB41(psVar9,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
            vGlowPos.field0_0x0.d[1] = 0.65;
            goto LAB_00196d60;
          }
          pEVar12 = this->m_pGlow;
          fVar14 = fVar17;
        }
        fVar10 = 0.5;
        Select__8ERShaderP3ERCi(pEVar12,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
        String.fChars._8_4_ = vGlowPos.field0_0x0.d[0] - fVar14 * fVar10;
        String.fChars._12_4_ = vGlowPos.field0_0x0.d[1] - fVar17 * fVar10;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        String.fChars._40_4_ = 0.0;
                    /* end of inlined section */
        String.fChars._24_4_ = String.fChars._8_4_ + fVar14;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
        String.fChars._28_4_ = String.fChars._12_4_ + fVar17;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        String.fChars._44_4_ = 0x3f800000;
        String.fChars._124_4_ = 0;
        String.fChars._120_4_ = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        pEVar13 = &_WHITE;
                    /* end of inlined section */
        (*(code *)prc->__vtable[1].DisplayList)
                  (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,local_10c,
                   String.fChars + 0xc,String.fChars + 0x14,String.fChars + 0x3c,0x3632a0);
        SetSize__6ERFontffb(pEVar3,25.0,0.9,true);
        Select__6ERFontP3ERC(pEVar3,prc);
        uVar7 = _BLACK.field0_0x0.d[3];
        uVar6 = _BLACK.field0_0x0.d[2];
        uVar5 = _BLACK.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* end of inlined section */
        (pEVar3->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
        (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
        (pEVar3->m_vColor).field0_0x0.d[2] = uVar6;
        (pEVar3->m_vColor).field0_0x0.d[3] = uVar7;
        psVar9 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"chall_player2_pick");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
        String.fChars._8_4_ = 1.0 / vScreen.field0_0x0.d[0] + fVar10;
        String.fChars._12_4_ = 1.0 / vScreen.field0_0x0.d[1] + 0.4;
        String.fChars._24_4_ = String.fChars._8_4_;
        String.fChars._28_4_ = String.fChars._12_4_;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (pEVar3,prc,psVar9,true,(EVec2 *)(String.fChars + 0xc),E_FAX_CENTER,E_FAY_CENTER,
                   (EVec2 *)&String);
        uVar7 = _WHITE.field0_0x0.d[3];
        uVar6 = _WHITE.field0_0x0.d[2];
        uVar5 = _WHITE.field0_0x0._0_8_;
                    /* end of inlined section */
                    /* end of inlined section */
        (pEVar3->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
        (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
        (pEVar3->m_vColor).field0_0x0.d[2] = uVar6;
        (pEVar3->m_vColor).field0_0x0.d[3] = uVar7;
        psVar9 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"chall_player2_pick");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        (local_10c->field0_0x0).m_name.m_p = (char *)0x3ecccccd;
        String.fChars._28_4_ = String.fChars._12_4_;
        String.fChars._8_4_ = fVar10;
        String.fChars._24_4_ = fVar10;
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (pEVar3,prc,psVar9,true,(EVec2 *)(String.fChars + 0xc),E_FAX_CENTER,E_FAY_CENTER,
                   (EVec2 *)&String);
        uVar7 = _BLACK.field0_0x0.d[3];
        uVar6 = _BLACK.field0_0x0.d[2];
        uVar5 = _BLACK.field0_0x0._0_8_;
                    /* end of inlined section */
                    /* end of inlined section */
        (pEVar3->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
        (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
        (pEVar3->m_vColor).field0_0x0.d[2] = uVar6;
        (pEVar3->m_vColor).field0_0x0.d[3] = uVar7;
        psVar9 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"chall_use_default_sim");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
        String.fChars._8_4_ = 1.0 / vScreen.field0_0x0.d[0] + fVar10;
        String.fChars._12_4_ = 1.0 / vScreen.field0_0x0.d[1] + 0.55;
        String.fChars._24_4_ = String.fChars._8_4_;
        String.fChars._28_4_ = String.fChars._12_4_;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (pEVar3,prc,psVar9,true,(EVec2 *)(String.fChars + 0xc),E_FAX_CENTER,E_FAY_CENTER,
                   (EVec2 *)&String);
                    /* end of inlined section */
        if (this->m_ChallCursorPos == 0) {
          pEVar13 = &_CYAN;
        }
                    /* end of inlined section */
        uVar2 = *(undefined8 *)&pEVar13->field0_0x0;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        fVar14 = (pEVar13->field0_0x0).d[2];
        fVar10 = (pEVar13->field0_0x0).d[3];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* end of inlined section */
        (pEVar3->m_vColor).field0_0x0.d[0] = (float)uVar2;
        (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
        (pEVar3->m_vColor).field0_0x0.d[2] = fVar14;
        (pEVar3->m_vColor).field0_0x0.d[3] = fVar10;
        psVar9 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"chall_use_default_sim");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        String.fChars._8_4_ = 0.5;
        (local_10c->field0_0x0).m_name.m_p = (char *)0x3f0ccccd;
        String.fChars._24_4_ = 0.5;
        String.fChars._28_4_ = String.fChars._12_4_;
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (pEVar3,prc,psVar9,true,(EVec2 *)(String.fChars + 0xc),E_FAX_CENTER,E_FAY_CENTER,
                   (EVec2 *)&String);
        uVar7 = _BLACK.field0_0x0.d[3];
        uVar6 = _BLACK.field0_0x0.d[2];
        uVar5 = _BLACK.field0_0x0._0_8_;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* end of inlined section */
        (pEVar3->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
        (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
        (pEVar3->m_vColor).field0_0x0.d[2] = uVar6;
        (pEVar3->m_vColor).field0_0x0.d[3] = uVar7;
        psVar9 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"chall_import_sim");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
        String.fChars._8_4_ = 1.0 / vScreen.field0_0x0.d[0] + 0.5;
        String.fChars._12_4_ = 1.0 / vScreen.field0_0x0.d[1] + 0.65;
        String.fChars._24_4_ = String.fChars._8_4_;
        String.fChars._28_4_ = String.fChars._12_4_;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (pEVar3,prc,psVar9,true,(EVec2 *)(String.fChars + 0xc),E_FAX_CENTER,E_FAY_CENTER,
                   (EVec2 *)&String);
                    /* end of inlined section */
        if (this->m_ChallCursorPos == 1) {
          pEVar13 = &_CYAN;
        }
        else {
          pEVar13 = &_WHITE;
        }
                    /* end of inlined section */
        uVar2 = *(undefined8 *)&pEVar13->field0_0x0;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        fVar14 = (pEVar13->field0_0x0).d[2];
        fVar10 = (pEVar13->field0_0x0).d[3];
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        (pEVar3->m_vColor).field0_0x0.d[0] = (float)uVar2;
        (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
        (pEVar3->m_vColor).field0_0x0.d[2] = fVar14;
        (pEVar3->m_vColor).field0_0x0.d[3] = fVar10;
                    /* end of inlined section */
        psVar9 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"chall_import_sim");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        String.fChars._8_4_ = 0.5;
        (local_10c->field0_0x0).m_name.m_p = (char *)0x3f266666;
        String.fChars._24_4_ = 0.5;
        String.fChars._28_4_ = String.fChars._12_4_;
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (pEVar3,prc,psVar9,true,(EVec2 *)(String.fChars + 0xc),E_FAX_CENTER,E_FAY_CENTER,
                   (EVec2 *)&String);
                    /* end of inlined section */
        goto LAB_00197134;
      }
      if (iVar1 != 7) {
        if (iVar1 == 8) {
                    /* inlined from ../MSrc/stringbuffer2.h */
                    /* end of inlined section */
          fVar17 = 20.0;
                    /* inlined from ../MSrc/stringbuffer2.h */
          __13StringBuffer2PUsUi((StringBuffer2 *)(String.fChars + 0x44),String.fChars + 0x48,0x100)
          ;
                    /* end of inlined section */
          psVar9 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"chall_player1_ready");
          outStr = (StackString2_256_ *)(String.fChars + 0x44);
          ReplaceButtonPrompts__FPCUsRt12StackString21Ui256(psVar9,outStr);
          pEVar3 = _globals.m_pFont;
          SetSize__6ERFontffb(_globals.m_pFont,fVar17,fVar15,true);
          SetSize__6ERFontffb(_globals.m_pFont,25.0,fVar15,false);
          pEVar4 = _globals.m_pFont;
          psVar9 = c_str__C13StringBuffer2((StringBuffer2 *)outStr);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
          DoGetStringSize__6ERFontPvbP7EWindow
                    ((ERFont *)&String,pEVar4,SUB41(psVar9,0),(EWindow *)&pGifTag1);
          pEVar4 = _globals.m_pFont;
                    /* end of inlined section */
          fVar20 = (float)String.field0_0x0.fMem * 0.95 + fVar14;
          psVar9 = c_str__C13StringBuffer2((StringBuffer2 *)outStr);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
          DoGetStringSize__6ERFontPvbP7EWindow
                    ((ERFont *)&String,pEVar4,SUB41(psVar9,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
          vGlowPos.field0_0x0.d[1] = 0.35;
          fVar18 = (float)String.field0_0x0.fCapacity * 1.75 + fVar21;
          vGlowPos.field0_0x0.d[0] = fVar16;
          Select__8ERShaderP3ERCi(this->m_pGlow,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
          vPos_00 = String.fChars + 0xc;
                    /* end of inlined section */
          String.field0_0x0.fMem = (short *)(vGlowPos.field0_0x0.d[0] - fVar20 * fVar16);
          String.field0_0x0.fCapacity = (uint)(vGlowPos.field0_0x0.d[1] - fVar18 * fVar16);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          String.fChars._8_4_ = (float)String.field0_0x0.fMem + fVar20;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          String.fChars._12_4_ = (float)String.field0_0x0.fCapacity + fVar18;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          String.fChars._24_4_ = (float)iVar19;
          String.fChars._28_4_ = fVar15;
          String.fChars._40_4_ = fVar15;
          String.fChars._44_4_ = iVar19;
          (*(code *)prc->__vtable[1].DisplayList)
                    (iVar19,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&String,
                     local_10c,vPos_00,String.fChars + 0x14,0x3632a0);
          SetSize__6ERFontffb(pEVar3,fVar17,fVar15,true);
          Select__6ERFontP3ERC(pEVar3,prc);
          uVar7 = _BLACK.field0_0x0.d[3];
          uVar6 = _BLACK.field0_0x0.d[2];
          uVar5 = _BLACK.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
          (pEVar3->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
          (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
          (pEVar3->m_vColor).field0_0x0.d[2] = uVar6;
          (pEVar3->m_vColor).field0_0x0.d[3] = uVar7;
          psVar9 = c_str__C13StringBuffer2((StringBuffer2 *)outStr);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
          String.fChars._8_4_ = fVar15 / vScreen.field0_0x0.d[0] + fVar16;
          String.fChars._12_4_ = fVar15 / vScreen.field0_0x0.d[1] + 0.35;
          String.fChars._24_4_ = String.fChars._8_4_;
          String.fChars._28_4_ = String.fChars._12_4_;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
          DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                    (pEVar3,prc,psVar9,true,(EVec2 *)vPos_00,E_FAX_CENTER,E_FAY_CENTER,
                     (EVec2 *)&String);
          uVar7 = _WHITE.field0_0x0.d[3];
          uVar6 = _WHITE.field0_0x0.d[2];
          uVar5 = _WHITE.field0_0x0._0_8_;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
          (pEVar3->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
          (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
          (pEVar3->m_vColor).field0_0x0.d[2] = uVar6;
          (pEVar3->m_vColor).field0_0x0.d[3] = uVar7;
          psVar9 = c_str__C13StringBuffer2((StringBuffer2 *)outStr);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
          (local_10c->field0_0x0).m_name.m_p = (char *)0x3eb33333;
          String.fChars._28_4_ = String.fChars._12_4_;
          String.fChars._8_4_ = fVar16;
          String.fChars._24_4_ = fVar16;
          DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                    (pEVar3,prc,psVar9,true,(EVec2 *)vPos_00,E_FAX_CENTER,E_FAY_CENTER,
                     (EVec2 *)&String);
                    /* end of inlined section */
          iVar11 = this->m_ChallengeModeStateNum;
        }
        else {
          iVar11 = this->m_ChallengeModeStateNum;
        }
        if (iVar11 == 9) {
                    /* inlined from ../MSrc/stringbuffer2.h */
                    /* end of inlined section */
          fVar15 = 20.0;
                    /* inlined from ../MSrc/stringbuffer2.h */
          __13StringBuffer2PUsUi(&String.field0_0x0,String.fChars,0x100);
                    /* end of inlined section */
          psVar9 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"chall_player2_ready");
          ReplaceButtonPrompts__FPCUsRt12StackString21Ui256(psVar9,&String);
          pEVar3 = _globals.m_pFont;
          SetSize__6ERFontffb(_globals.m_pFont,fVar15,1.0,true);
          SetSize__6ERFontffb(_globals.m_pFont,25.0,1.0,false);
          pEVar4 = _globals.m_pFont;
          psVar9 = c_str__C13StringBuffer2(&String.field0_0x0);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
          DoGetStringSize__6ERFontPvbP7EWindow
                    ((ERFont *)&vPos,pEVar4,SUB41(psVar9,0),(EWindow *)&pGifTag1);
          pEVar4 = _globals.m_pFont;
                    /* end of inlined section */
          fVar14 = vPos.field0_0x0.d[0] * 0.95 + fVar14;
          psVar9 = c_str__C13StringBuffer2(&String.field0_0x0);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
          DoGetStringSize__6ERFontPvbP7EWindow
                    ((ERFont *)&vPos,pEVar4,SUB41(psVar9,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
          vGlowPos.field0_0x0.d[1] = 0.55;
          fVar21 = vPos.field0_0x0.d[1] * 1.75 + fVar21;
          vGlowPos.field0_0x0.d[0] = fVar10;
          Select__8ERShaderP3ERCi(this->m_pGlow,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          vPos.field0_0x0.d[0] = vGlowPos.field0_0x0.d[0] - fVar14 * fVar10;
          vPos.field0_0x0.d[1] = vGlowPos.field0_0x0.d[1] - fVar21 * fVar10;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          local_190 = vPos.field0_0x0.d[0] + fVar14;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          local_18c = (EStorable__vtable *)(vPos.field0_0x0.d[1] + fVar21);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
          local_17c = (EStorable__vtable *)0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
          local_170 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          local_180 = (float)iVar19;
          local_16c = iVar19;
          (*(code *)prc->__vtable[1].DisplayList)
                    (iVar19,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vPos,
                     &local_190,(EVec2 *)&local_180,&local_170,0x3632a0);
          SetSize__6ERFontffb(pEVar3,fVar15,1.0,true);
          Select__6ERFontP3ERC(pEVar3,prc);
          uVar7 = _BLACK.field0_0x0.d[3];
          uVar6 = _BLACK.field0_0x0.d[2];
          uVar5 = _BLACK.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
          (pEVar3->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
          (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
          (pEVar3->m_vColor).field0_0x0.d[2] = uVar6;
          (pEVar3->m_vColor).field0_0x0.d[3] = uVar7;
          psVar9 = c_str__C13StringBuffer2(&String.field0_0x0);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
          local_190 = 1.0 / vScreen.field0_0x0.d[0] + fVar10;
          local_18c = (EStorable__vtable *)(1.0 / vScreen.field0_0x0.d[1] + 0.55);
          local_180 = local_190;
          local_17c = local_18c;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
          DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                    (pEVar3,prc,psVar9,true,(EVec2 *)&local_180,E_FAX_CENTER,E_FAY_CENTER,&vPos);
          uVar7 = _WHITE.field0_0x0.d[3];
          uVar6 = _WHITE.field0_0x0.d[2];
          uVar5 = _WHITE.field0_0x0._0_8_;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
          (pEVar3->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
          (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
          (pEVar3->m_vColor).field0_0x0.d[2] = uVar6;
          (pEVar3->m_vColor).field0_0x0.d[3] = uVar7;
          psVar9 = c_str__C13StringBuffer2(&String.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
          local_18c = (EStorable__vtable *)0x3f0ccccd;
          local_17c = (EStorable__vtable *)0x3f0ccccd;
          local_190 = fVar10;
          local_180 = fVar10;
          DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                    (pEVar3,prc,psVar9,true,(EVec2 *)&local_180,E_FAX_CENTER,E_FAY_CENTER,&vPos);
        }
                    /* end of inlined section */
        DelRef__9EResource(&pSimsUIData->field0_0x0);
        return;
      }
    }
    DrawImportSim__17ENeighborhoodModeP3ERC(this,prc);
    goto LAB_00197134;
  }
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  fVar18 = 25.0;
  SetSize__6ERFontffb(_globals.m_pFont,35.0,fVar15,true);
  Select__6ERFontP3ERC(pEVar3,prc);
  fVar10 = _13EUIObjectNode_SAFE_TOP;
  uVar7 = _BLACK.field0_0x0.d[3];
  uVar6 = _BLACK.field0_0x0.d[2];
  uVar5 = _BLACK.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  (pEVar3->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
  (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
  (pEVar3->m_vColor).field0_0x0.d[2] = uVar6;
  (pEVar3->m_vColor).field0_0x0.d[3] = uVar7;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  String.fChars._8_4_ = fVar15 / vScreen.field0_0x0.d[0] + fVar16;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  String.fChars._12_4_ = fVar10 + fVar15 / vScreen.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
  String.fChars._24_4_ = String.fChars._8_4_;
  String.fChars._28_4_ = String.fChars._12_4_;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (pEVar3,prc,**(void ***)(this->m_CurrentTargetHouse * 100 + iVar11),true,
             (EVec2 *)(String.fChars + 0xc),E_FAX_CENTER,E_FAY_TOP,(EVec2 *)&String);
  uVar7 = _WHITE.field0_0x0.d[3];
  uVar6 = _WHITE.field0_0x0.d[2];
  uVar5 = _WHITE.field0_0x0._0_8_;
  (pEVar3->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
  (pEVar3->m_vColor).field0_0x0.d[2] = uVar6;
  (pEVar3->m_vColor).field0_0x0.d[3] = uVar7;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  String.fChars._28_4_ = fVar10;
  String.fChars._12_4_ = fVar10;
  String.fChars._8_4_ = fVar16;
  String.fChars._24_4_ = fVar16;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (pEVar3,prc,**(void ***)(this->m_CurrentTargetHouse * 100 + iVar11),true,
             (EVec2 *)(String.fChars + 0xc),E_FAX_CENTER,E_FAY_TOP,(EVec2 *)&String);
                    /* end of inlined section */
  SetSize__6ERFontffb(pEVar3,fVar18,0.9,true);
  Select__6ERFontP3ERC(pEVar3,prc);
  if (this->m_ChallCursorPos == 0) {
    SetSize__6ERFontffb(_globals.m_pFont,fVar18,fVar15,false);
    pEVar4 = _globals.m_pFont;
    psVar9 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"chall_use_default_sim");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow(local_10c,pEVar4,SUB41(psVar9,0),(EWindow *)&pGifTag1);
    fVar10 = String.fChars._8_4_;
    pEVar4 = _globals.m_pFont;
    psVar9 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"chall_use_default_sim");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow(local_10c,pEVar4,SUB41(psVar9,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
    vGlowPos.field0_0x0.d[1] = 0.55;
                    /* end of inlined section */
LAB_0019670c:
    fVar17 = String.fChars._12_4_ * 1.75 + fVar21;
    pEVar12 = this->m_pGlow;
    fVar14 = fVar10 * 1.18 + fVar14;
    vGlowPos.field0_0x0.d[0] = fVar16;
  }
  else {
    if (this->m_ChallCursorPos == 1) {
      SetSize__6ERFontffb(_globals.m_pFont,fVar18,fVar15,false);
      pEVar4 = _globals.m_pFont;
      psVar9 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"chall_import_sim");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      DoGetStringSize__6ERFontPvbP7EWindow(local_10c,pEVar4,SUB41(psVar9,0),(EWindow *)&pGifTag1);
      fVar10 = String.fChars._8_4_;
      pEVar4 = _globals.m_pFont;
                    /* end of inlined section */
      psVar9 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"chall_import_sim");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      DoGetStringSize__6ERFontPvbP7EWindow(local_10c,pEVar4,SUB41(psVar9,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
      vGlowPos.field0_0x0.d[1] = 0.65;
      goto LAB_0019670c;
    }
    pEVar12 = this->m_pGlow;
    fVar14 = fVar17;
  }
  fVar10 = 0.5;
  Select__8ERShaderP3ERCi(pEVar12,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  String.fChars._8_4_ = vGlowPos.field0_0x0.d[0] - fVar14 * fVar10;
  String.fChars._12_4_ = vGlowPos.field0_0x0.d[1] - fVar17 * fVar10;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  String.fChars._88_4_ = 0;
                    /* end of inlined section */
  String.fChars._24_4_ = String.fChars._8_4_ + fVar14;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  String.fChars._28_4_ = String.fChars._12_4_ + fVar17;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  String.fChars._92_4_ = 0x3f800000;
  String.fChars._108_4_ = 0;
  String.fChars._104_4_ = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  pEVar13 = &_WHITE;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,local_10c,
             String.fChars + 0xc,String.fChars + 0x2c,String.fChars + 0x34,0x3632a0);
  SetSize__6ERFontffb(pEVar3,25.0,0.9,true);
  Select__6ERFontP3ERC(pEVar3,prc);
  uVar7 = _BLACK.field0_0x0.d[3];
  uVar6 = _BLACK.field0_0x0.d[2];
  uVar5 = _BLACK.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* end of inlined section */
  (pEVar3->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
  (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
  (pEVar3->m_vColor).field0_0x0.d[2] = uVar6;
  (pEVar3->m_vColor).field0_0x0.d[3] = uVar7;
  psVar9 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"chall_player1_pick");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  String.fChars._8_4_ = 1.0 / vScreen.field0_0x0.d[0] + fVar10;
  String.fChars._12_4_ = 1.0 / vScreen.field0_0x0.d[1] + 0.4;
  String.fChars._24_4_ = String.fChars._8_4_;
  String.fChars._28_4_ = String.fChars._12_4_;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (pEVar3,prc,psVar9,true,(EVec2 *)(String.fChars + 0xc),E_FAX_CENTER,E_FAY_CENTER,
             (EVec2 *)&String);
  uVar7 = _WHITE.field0_0x0.d[3];
  uVar6 = _WHITE.field0_0x0.d[2];
  uVar5 = _WHITE.field0_0x0._0_8_;
                    /* end of inlined section */
                    /* end of inlined section */
  (pEVar3->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
  (pEVar3->m_vColor).field0_0x0.d[2] = uVar6;
  (pEVar3->m_vColor).field0_0x0.d[3] = uVar7;
  psVar9 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"chall_player1_pick");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  (local_10c->field0_0x0).m_name.m_p = (char *)0x3ecccccd;
  String.fChars._28_4_ = String.fChars._12_4_;
  String.fChars._8_4_ = fVar10;
  String.fChars._24_4_ = fVar10;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (pEVar3,prc,psVar9,true,(EVec2 *)(String.fChars + 0xc),E_FAX_CENTER,E_FAY_CENTER,
             (EVec2 *)&String);
  uVar7 = _BLACK.field0_0x0.d[3];
  uVar6 = _BLACK.field0_0x0.d[2];
  uVar5 = _BLACK.field0_0x0._0_8_;
                    /* end of inlined section */
                    /* end of inlined section */
  (pEVar3->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
  (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
  (pEVar3->m_vColor).field0_0x0.d[2] = uVar6;
  (pEVar3->m_vColor).field0_0x0.d[3] = uVar7;
  psVar9 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"chall_use_default_sim");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  String.fChars._8_4_ = 1.0 / vScreen.field0_0x0.d[0] + fVar10;
  String.fChars._12_4_ = 1.0 / vScreen.field0_0x0.d[1] + 0.55;
  String.fChars._24_4_ = String.fChars._8_4_;
  String.fChars._28_4_ = String.fChars._12_4_;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (pEVar3,prc,psVar9,true,(EVec2 *)(String.fChars + 0xc),E_FAX_CENTER,E_FAY_CENTER,
             (EVec2 *)&String);
                    /* end of inlined section */
  if (this->m_ChallCursorPos == 0) {
    pEVar13 = &_CYAN;
  }
                    /* end of inlined section */
  uVar2 = *(undefined8 *)&pEVar13->field0_0x0;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  fVar14 = (pEVar13->field0_0x0).d[2];
  fVar10 = (pEVar13->field0_0x0).d[3];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* end of inlined section */
  (pEVar3->m_vColor).field0_0x0.d[0] = (float)uVar2;
  (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
  (pEVar3->m_vColor).field0_0x0.d[2] = fVar14;
  (pEVar3->m_vColor).field0_0x0.d[3] = fVar10;
  psVar9 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"chall_use_default_sim");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  String.fChars._8_4_ = 0.5;
  (local_10c->field0_0x0).m_name.m_p = (char *)0x3f0ccccd;
  String.fChars._24_4_ = 0.5;
  String.fChars._28_4_ = String.fChars._12_4_;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (pEVar3,prc,psVar9,true,(EVec2 *)(String.fChars + 0xc),E_FAX_CENTER,E_FAY_CENTER,
             (EVec2 *)&String);
  uVar7 = _BLACK.field0_0x0.d[3];
  uVar6 = _BLACK.field0_0x0.d[2];
  uVar5 = _BLACK.field0_0x0._0_8_;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* end of inlined section */
  (pEVar3->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
  (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
  (pEVar3->m_vColor).field0_0x0.d[2] = uVar6;
  (pEVar3->m_vColor).field0_0x0.d[3] = uVar7;
  psVar9 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"chall_import_sim");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  String.fChars._8_4_ = 1.0 / vScreen.field0_0x0.d[0] + 0.5;
  String.fChars._12_4_ = 1.0 / vScreen.field0_0x0.d[1] + 0.65;
  String.fChars._24_4_ = String.fChars._8_4_;
  String.fChars._28_4_ = String.fChars._12_4_;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (pEVar3,prc,psVar9,true,(EVec2 *)(String.fChars + 0xc),E_FAX_CENTER,E_FAY_CENTER,
             (EVec2 *)&String);
                    /* end of inlined section */
  if (this->m_ChallCursorPos == 1) {
    pEVar13 = &_CYAN;
  }
  else {
    pEVar13 = &_WHITE;
  }
                    /* end of inlined section */
  uVar2 = *(undefined8 *)&pEVar13->field0_0x0;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  fVar14 = (pEVar13->field0_0x0).d[2];
  fVar10 = (pEVar13->field0_0x0).d[3];
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  (pEVar3->m_vColor).field0_0x0.d[0] = (float)uVar2;
  (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
  (pEVar3->m_vColor).field0_0x0.d[2] = fVar14;
  (pEVar3->m_vColor).field0_0x0.d[3] = fVar10;
                    /* end of inlined section */
  psVar9 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"chall_import_sim");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  String.fChars._8_4_ = 0.5;
  (local_10c->field0_0x0).m_name.m_p = (char *)0x3f266666;
  String.fChars._24_4_ = 0.5;
  String.fChars._28_4_ = String.fChars._12_4_;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (pEVar3,prc,psVar9,true,(EVec2 *)(String.fChars + 0xc),E_FAX_CENTER,E_FAY_CENTER,
             (EVec2 *)&String);
                    /* end of inlined section */
LAB_00197134:
  DelRef__9EResource(&pSimsUIData->field0_0x0);
  return;
}

void ENeighborhoodMode::CleanupLevel() {
  EIParticleEmit *pEVar1;
  EStorable__vtable *pEVar2;
  ERLevel *this_00;
  
  pEVar1 = this->m_pParticleEmitter[0];
  if (pEVar1 != (EIParticleEmit *)0x0) {
    pEVar2 = (pEVar1->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar2[1].GetTypeKey)
              ((int)((pEVar1->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar2[1].GetTypeName,3);
  }
  pEVar1 = this->m_pParticleEmitter[1];
  if (pEVar1 != (EIParticleEmit *)0x0) {
    pEVar2 = (pEVar1->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar2[1].GetTypeKey)
              ((int)((pEVar1->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar2[1].GetTypeName,3);
  }
  this->m_pParticleEmitter[0] = (EIParticleEmit *)0x0;
  this->m_pParticleEmitter[1] = (EIParticleEmit *)0x0;
  while (this->m_pParticleType != (ERParticleType *)0x0) {
    DelRef__9EResource(&this->m_pParticleType->field0_0x0);
    this->m_pParticleType = (ERParticleType *)0x0;
  }
  this_00 = this->m_pLevel;
  while (this_00 != (ERLevel *)0x0) {
    DelRef__9EResource(&this_00->field0_0x0);
    this->m_pLevel = (ERLevel *)0x0;
    this_00 = this->m_pLevel;
  }
  return;
}

void ENeighborhoodMode::SetChallengeModeBackground() {
	u32 ShaderId;
	u32 id;
	u32 id;
	
  ERShader *pEVar1;
  uint id;
  
  id = 0;
  switch(this->m_CurrentTargetHouse) {
  case 0:
    id = 0xc0031702;
    break;
  case 1:
    id = 0x27bb3a05;
    break;
  case 2:
    id = 0x5e6782a1;
    break;
  case 3:
    id = 0xc76ed31b;
    break;
  case 4:
    id = 0x2e0d762e;
    break;
  case 5:
    id = 0x590a46b8;
    break;
  case 6:
    id = 0xb069e38d;
    break;
  case 7:
    id = 0xb7042794;
  }
  if ((this->m_pChallengeModeIntroShdr == (ERShader *)0x0) && (id != 0)) {
                    /* inlined from /eor/src2/engine/dataset/e_datasetman.h */
    AddRef__16EResourceManagerUiP5EFilei(&_datasetman.field0_0x0,id,(EFile *)0x0,0);
    pEVar1 = (ERShader *)
             AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,id,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pChallengeModeIntroShdr = pEVar1;
    DelRef__16EResourceManagerUi(&_datasetman.field0_0x0,id);
  }
  return;
}

void ENeighborhoodMode::DisplayFamilyList() {
	FamilyList &fl;
	EString2 Str16;
	Neighbor *n;
	FamilyImpl **i;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	int j;
	unsigned int n;
	Neighbor *this;
	
  int iVar1;
  int iVar2;
  short *psVar3;
  int *piVar4;
  undefined2 *puVar5;
  ObjSelector *this_00;
  BString2 *this_01;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  EString2 Str16;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  iVar1 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                    ((int)&_5Globs_pNeighborhood->__vtable +
                     (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  iVar2 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                    ((int)&_5Globs_pNeighborhood->__vtable +
                     (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
  __as__t6vector2ZP10FamilyImplZt23__malloc_alloc_template1i0RCt6vector2ZP10FamilyImplZt23__malloc_alloc_template1i0
            ((vector_FamilyImpl_____malloc_alloc_template_0___ *)(iVar1 + 0x310),
             (vector_FamilyImpl_____malloc_alloc_template_0___ *)(iVar2 + 0x310));
                    /* inlined from /eor/src2/common/datastruc/e_string2.h */
  SetToNull__8EString2(&Str16);
  piVar6 = *(int **)(iVar1 + 0x310);
                    /* end of inlined section */
  if (piVar6 != *(int **)(iVar1 + 0x314)) {
    iVar2 = *piVar6;
    while( true ) {
      uVar7 = 0;
      piVar8 = piVar6 + 1;
      psVar3 = c_str__C8BString2((BString2 *)(iVar2 + 4));
      __as__8EString2PCUs(&Str16,psVar3);
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
      if (*(int *)(*piVar6 + 0x28) - *(int *)(*piVar6 + 0x24) >> 2 == 0) {
        piVar6 = *(int **)(iVar1 + 0x314);
      }
      else {
        do {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
          piVar4 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                                    ((int)&_5Globs_pNeighborhood->__vtable +
                                     (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                     AddFamilyHistoryStat);
                    /* inlined from ../MSrc/Vector.h */
          iVar2 = uVar7 * 4;
                    /* end of inlined section */
          uVar7 = uVar7 + 1;
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
          puVar5 = (undefined2 *)
                   (**(code **)(*piVar4 + 0xdc))
                             ((int)piVar4 + (int)*(short *)(*piVar4 + 0xd8),
                              *(undefined4 *)(*(int *)(*piVar6 + 0x24) + iVar2));
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
          piVar4 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                                    ((int)&_5Globs_pNeighborhood->__vtable +
                                     (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                     AddFamilyHistoryStat);
          this_00 = (ObjSelector *)
                    (**(code **)(*piVar4 + 0xe4))
                              ((int)piVar4 + (int)*(short *)(*piVar4 + 0xe0),*puVar5);
          this_01 = GetUserName__11ObjSelector(this_00);
          psVar3 = c_str__C8BString2(this_01);
          __as__8EString2PCUs(&Str16,psVar3);
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
        } while (uVar7 < (uint)(*(int *)(*piVar6 + 0x28) - *(int *)(*piVar6 + 0x24) >> 2));
                    /* inlined from ../MSrc/Vector.h */
        piVar6 = *(int **)(iVar1 + 0x314);
      }
                    /* end of inlined section */
      if (piVar8 == piVar6) break;
      iVar2 = *piVar8;
      piVar6 = piVar8;
    }
  }
  Deallocate__8EString2PUs(&Str16,Str16.m_p);
  return;
}

void ENeighborhoodMode::SetupDpadWin() {
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
  char *pcVar8;
  EString local_d0;
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
  
                    /* end of inlined section */
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
  this_02 = this->m_dpadIcons + 1;
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  this_01 = this->m_dpadIcons + 2;
  this_00 = this->m_dpadIcons;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pcVar8 = (char *)0x3d89374c;
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
  local_d0.m_p = &pGifTag1;
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
  InitActiveShader__7EUIIconi(this_01,-0x5297d65a);
  InitActiveShader__7EUIIconi(this_02,-0xc504a5b);
  InitActiveShader__7EUIIconi(this_03,-0x340fa10b);
  InitInActiveShader__7EUIIconi(this_00,0x32272593);
  InitInActiveShader__7EUIIconi(this_01,-0x5297d65a);
  InitInActiveShader__7EUIIconi(this_02,-0xc504a5b);
  InitInActiveShader__7EUIIconi(this_03,-0x340fa10b);
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
  MakeCopy__7EStringPCc(&local_d0,"m_dpadIcons[ PAD_UP    ]");
  Deallocate__7EStringPc(&local_d0,local_d0.m_p);
  MakeCopy__7EStringPCc(&local_d0,"m_dpadIcons[ PAD_LEFT  ]");
  Deallocate__7EStringPc(&local_d0,local_d0.m_p);
  MakeCopy__7EStringPCc(&local_d0,"m_dpadIcons[ PAD_RIGHT ]");
  Deallocate__7EStringPc(&local_d0,local_d0.m_p);
  MakeCopy__7EStringPCc(&local_d0,"m_dpadIcons[ PAD_DOWN  ]");
  Deallocate__7EStringPc(&local_d0,local_d0.m_p);
                    /* end of inlined section */
  pEVar5 = this->m_dpadIcons[0].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_c8 = 0x3f4b020c;
  local_cc = 0;
                    /* end of inlined section */
  local_d0.m_p = pcVar8;
  (*(code *)pEVar5->OnButtonRepeat)
            ((int)this_00->m_maxBackShdrSize[-0xc] + *(short *)&pEVar5->StateChanged + 4,&local_d0);
  pEVar5 = this->m_dpadIcons[2].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_d0.m_p = (char *)0x3d0b4398;
  local_c8 = 0x3f5851ec;
  local_cc = 0;
                    /* end of inlined section */
  (*(code *)pEVar5->OnButtonRepeat)
            ((int)this_01->m_maxBackShdrSize[-0xc] + *(short *)&pEVar5->StateChanged + 4,&local_d0);
  pEVar5 = this->m_dpadIcons[1].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_d0.m_p = (char *)0x3dbc6a80;
  local_c8 = 0x3f5851ec;
  local_cc = 0;
                    /* end of inlined section */
  (*(code *)pEVar5->OnButtonRepeat)
            ((int)this_02->m_maxBackShdrSize[-0xc] + *(short *)&pEVar5->StateChanged + 4,&local_d0);
  pEVar5 = this->m_dpadIcons[3].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_c8 = 0x3f620c4a;
  local_cc = 0;
                    /* end of inlined section */
  local_d0.m_p = pcVar8;
  (*(code *)pEVar5->OnButtonRepeat)
            ((int)this_03->m_maxBackShdrSize[-0xc] + *(short *)&pEVar5->StateChanged + 4,&local_d0);
  return;
}

void ENeighborhoodMode::DrawDpadWin(ERC *prc) {
  EUIObjectNode__vtable *pEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  Select__8ERShaderP3ERCi(this->m_pDPadBackgroundShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_60 = 0xbe6147ae;
  local_5c = 0x3f3f75c9;
  local_4c = 0x3f800000;
  local_50 = 0x3f800000;
  local_34 = 0x3f800000;
  local_38 = 0x3f800000;
  local_3c = 0x3f800000;
  local_40 = 0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_60,&local_50,
             &local_40);
  pEVar1 = this->m_dpadIcons[0].field0_0x0.__vtable;
  (*(code *)pEVar1->Message)
            ((int)this->m_dpadIcons[0].m_maxBackShdrSize[-0xc] + *(short *)&pEVar1->SetBoxDims + 4,
             prc);
  pEVar1 = this->m_dpadIcons[2].field0_0x0.__vtable;
  (*(code *)pEVar1->Message)
            ((int)this->m_dpadIcons[2].m_maxBackShdrSize[-0xc] + *(short *)&pEVar1->SetBoxDims + 4,
             prc);
  pEVar1 = this->m_dpadIcons[1].field0_0x0.__vtable;
  (*(code *)pEVar1->Message)
            ((int)this->m_dpadIcons[1].m_maxBackShdrSize[-0xc] + *(short *)&pEVar1->SetBoxDims + 4,
             prc);
  pEVar1 = this->m_dpadIcons[3].field0_0x0.__vtable;
  (*(code *)pEVar1->Message)
            ((int)this->m_dpadIcons[3].m_maxBackShdrSize[-0xc] + *(short *)&pEVar1->SetBoxDims + 4,
             prc);
  return;
}

bool ENeighborhoodMode::DeleteSelectorOnEvict(s32 guid) {
  if ((((guid != 0x24c95f99) && (guid != -0x3a0ba55d)) && (guid != 0x39e377cf)) &&
     (((guid != -0x13094b && (guid != -0x6f781f5e)) && (guid != 0x4740f763)))) {
    if (guid != -0x5b174fcc) {
      return guid == -0x74ae605a;
    }
    return true;
  }
  return true;
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

ErrType int ReconLoadObject<cSimulator>(cSimulator *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 *version) {
	SimpleReconObject<cSimulator> recon;
	ReconBuilder rb;
	cSimulator *obj;
	SInt32 type;
	
  int iVar1;
  SimpleReconObject_cSimulator_ recon;
  ReconBuilder__26_4392 rb;
  
  recon.field0_0x0.__vtable = (ReconObject__vtable *)_vt_t17SimpleReconObject1Z10cSimulator;
  recon.fObj = obj;
  recon.fType = type;
  iVar1 = Reconstitute__12ReconBuilderP11ReconObjectP8iResFilesPi
                    ((ReconBuilder__6_5003 *)&rb,&recon.field0_0x0,(iResFile__6_5027 *)file,id,
                     version);
  ___11ReconObject(&recon.field0_0x0,2);
  return iVar1;
}

ErrType int ReconSaveObject<cSimulator>(cSimulator *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 version) {
	SimpleReconObject<cSimulator> recon;
	ReconBuilder rb;
	cSimulator *obj;
	SInt32 type;
	
  int iVar1;
  SimpleReconObject_cSimulator_ recon;
  ReconBuilder__26_4392 rb;
  
  recon.field0_0x0.__vtable = (ReconObject__vtable *)_vt_t17SimpleReconObject1Z10cSimulator;
  recon.fObj = obj;
  recon.fType = type;
  iVar1 = Compact__12ReconBuilderP11ReconObjectiP8iResFiles
                    ((ReconBuilder__6_5003 *)&rb,&recon.field0_0x0,version,(iResFile__6_5027 *)file,
                     id);
  ___11ReconObject(&recon.field0_0x0,2);
  return iVar1;
}

void* __malloc_alloc_template<0>::oom_malloc(unsigned int n) {
  void *pvVar1;
  
  do {
    (*(code *)0x0)();
    pvVar1 = malloc(n);
  } while (pvVar1 == (void *)0x0);
  return pvVar1;
}

FamilyImpl** FamilyImpl ** uninitialized_copy<FamilyImpl **, FamilyImpl **>(FamilyImpl **first, FamilyImpl **last, FamilyImpl **result) {
	FamilyImpl **p;
	FamilyImpl *&value;
	void *pAddress;
	
  FamilyImpl *pFVar1;
  FamilyImpl **ppFVar2;
  
  ppFVar2 = result;
  if (first != last) {
    do {
      pFVar1 = *first;
      first = first + 1;
      result = ppFVar2 + 1;
      *ppFVar2 = pFVar1;
      ppFVar2 = result;
    } while (first != last);
  }
  return result;
}

vector<FamilyImpl *,__malloc_alloc_template<0> >& vector<FamilyImpl *, __malloc_alloc_template<0> >::operator=(vector<FamilyImpl *,__malloc_alloc_template<0> > &x) {
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	FamilyImpl **first;
	FamilyImpl **last;
	FamilyImpl **pointer;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	void *result;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	FamilyImpl **first;
	FamilyImpl **result;
	ptrdiff_t n;
	FamilyImpl **first;
	FamilyImpl **last;
	FamilyImpl **pointer;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	FamilyImpl **first;
	FamilyImpl **result;
	ptrdiff_t n;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	vector<FamilyImpl *,__malloc_alloc_template<0> > *this;
	
  FamilyImpl *pFVar1;
  FamilyImpl **ppFVar2;
  uint uVar3;
  int iVar4;
  FamilyImpl **pAddress;
  uint uVar5;
  
  if (x == this) {
    return this;
  }
  ppFVar2 = x->start;
  pAddress = this->start;
  uVar5 = (int)x->finish - (int)ppFVar2 >> 2;
  if ((uint)((int)this->end_of_storage - (int)pAddress >> 2) < uVar5) {
                    /* inlined from ../MSrc/algobase.h */
    if (pAddress != this->finish) {
      do {
        pAddress = pAddress + 1;
      } while (pAddress != this->finish);
                    /* end of inlined section */
      pAddress = this->start;
    }
    if (pAddress == (FamilyImpl **)0x0) {
LAB_0019814c:
                    /* end of inlined section */
      ppFVar2 = x->finish;
    }
    else {
                    /* inlined from ../MSrc/alloc.h */
      if ((int)this->end_of_storage - (int)pAddress >> 2 != 0) {
        free(pAddress);
        goto LAB_0019814c;
      }
      ppFVar2 = x->finish;
    }
    iVar4 = (int)ppFVar2 - (int)x->start >> 2;
                    /* inlined from ../MSrc/alloc.h */
    uVar5 = iVar4 << 2;
    if (iVar4 == 0) {
      ppFVar2 = (FamilyImpl **)0x0;
                    /* end of inlined section */
      this->start = (FamilyImpl **)0x0;
    }
    else {
      ppFVar2 = (FamilyImpl **)malloc(uVar5);
      if (ppFVar2 == (FamilyImpl **)0x0) {
        ppFVar2 = (FamilyImpl **)oom_malloc__t23__malloc_alloc_template1i0Ui(uVar5);
        this->start = ppFVar2;
      }
      else {
        this->start = ppFVar2;
      }
    }
    ppFVar2 = uninitialized_copy__H2ZPCP10FamilyImplZPP10FamilyImpl_X01X01X11_X11
                        (x->start,x->finish,ppFVar2);
    this->end_of_storage = ppFVar2;
  }
  else {
    uVar3 = (int)this->finish - (int)pAddress >> 2;
    if (uVar5 <= uVar3) {
                    /* inlined from ../MSrc/algobase.h */
      if ((int)uVar5 < 1) {
        ppFVar2 = this->finish;
      }
      else {
        do {
          pFVar1 = *ppFVar2;
          uVar5 = uVar5 - 1;
          ppFVar2 = ppFVar2 + 1;
          *pAddress = pFVar1;
          pAddress = pAddress + 1;
        } while (0 < (int)uVar5);
        ppFVar2 = this->finish;
      }
      if (pAddress == ppFVar2) {
        ppFVar2 = x->start;
      }
      else {
        do {
          pAddress = pAddress + 1;
        } while (pAddress != ppFVar2);
                    /* end of inlined section */
        ppFVar2 = x->start;
      }
      goto LAB_00198270;
    }
                    /* inlined from ../MSrc/algobase.h */
    if ((int)uVar3 < 1) {
      ppFVar2 = this->start;
    }
    else {
      do {
        pFVar1 = *ppFVar2;
        uVar3 = uVar3 - 1;
        ppFVar2 = ppFVar2 + 1;
        *pAddress = pFVar1;
        pAddress = pAddress + 1;
      } while (0 < (int)uVar3);
                    /* end of inlined section */
      ppFVar2 = this->start;
    }
    iVar4 = (int)this->finish - (int)ppFVar2 >> 2;
    uninitialized_copy__H2ZPCP10FamilyImplZPP10FamilyImpl_X01X01X11_X11
              (x->start + iVar4,x->finish,ppFVar2 + iVar4);
  }
  ppFVar2 = x->start;
LAB_00198270:
  this->finish = this->start + ((int)x->finish - (int)ppFVar2 >> 2);
  return this;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vTopLeft.field0_0x0.d[0] = 0.184375;
    vTopLeft.field0_0x0.d[1] = 0.1875;
    vTopLeftMessage.field0_0x0.d[0] = 0.2;
    vTopLeftMessage.field0_0x0.d[1] = 0.28;
    vWHDialog.field0_0x0.d[0] = 0.6390625;
    vWHDialog.field0_0x0.d[1] = 0.49375;
    vWHMessageBack.field0_0x0.d[0] = 0.5428125;
    vWHMessageBack.field0_0x0.d[1] = 0.26625;
    vWHMessageBox.field0_0x0.d[1] = 0.2958333;
    vWPromptBar.field0_0x0.d[0] = 0.603125;
    vWPromptBar.field0_0x0.d[1] = 0.05;
    vWHMessageBox.field0_0x0.d[0] = 0.603125;
    vWTitleBar.field0_0x0.d[0] = 0.603125;
    vWTitleBar.field0_0x0.d[1] = 0.05;
  }
                    /* end of inlined section */
  return;
}

void EGameState::~EGameState(int __in_chrg) {
	EGameStateId *this;
	void *pAddress;
	void *ptr;
	
  this->__vtable = (EGameState__vtable *)_vt_10EGameState;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
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

EHouseSelectMenuItem* EHouseSelectMenuItem::EHouseSelectMenuItem() {
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  EUITextIconDef local_70;
  EUIIconDef local_50;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_70.m_maxChars = 0x20;
  local_78 = 0;
  local_7c = 0;
  local_80 = 0;
  local_70.m_xAlign = E_FAX_LEFT;
  local_70.m_yAlign = E_FAY_TOP;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_70.m_pointsize = 12.0;
  local_70.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_70.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_70.m_retChar = -1;
  local_50.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_50.m_flags = 0;
  local_50.m_trigger = 0x40;
  local_50.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_50.m_colorIdx = 1;
                    /* end of inlined section */
  local_50.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __14EUIDynTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (&this->field0_0x0,&local_70,&local_50,-1,(EVec3 *)&local_80);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_20EHouseSelectMenuItem;
  return this;
}

void SimpleReconObject<cSimulator>::~SimpleReconObject(int __in_chrg) {
  ___11ReconObject(&this->field0_0x0,__in_chrg);
  return;
}

void SimpleReconObject<cSimulator>::DoStream(ReconBuffer *r, SInt32 version) {
  cSimulator__vtable *pcVar1;
  
  pcVar1 = this->fObj->__vtable;
  (*(code *)pcVar1->GetArchValue)
            ((int)&this->fObj->__vtable + (int)*(short *)&pcVar1->SetLotValue,r,version);
  return;
}

SInt32 SimpleReconObject<cSimulator>::GetType() {
  return this->fType;
}

void global constructors keyed to _curopt() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

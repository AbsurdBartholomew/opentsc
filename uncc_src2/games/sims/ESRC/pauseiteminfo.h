// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_PAUSEITEMINFO_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_PAUSEITEMINFO_H

struct ELights1 : ELights {
	EDirLight d[1];
};

struct EPauseItemInfo : EUIObjectNode {
protected:
	EVec2 m_vHeaderSize;
	EVec2 m_vHeaderPos;
	EVec2 m_vTextSize;
	EVec2 m_vTextPos;
	EVec2 m_vModelSize;
	EVec2 m_vModelPos;
	EVec2 m_vStatsSize;
	EVec2 m_vStatsPos;
	EVec2 m_vTextGapSize;
	EVec2 m_vArrowSize;
	EVec2 m_vCurTextPos;
	ObjSelector *m_pMasterSels[8];
	ObjSelector *m_pResSels[8];
	ObjSelector *m_pResSel2s[8];
	u32 m_nPrice;
	StringBufW255 m_sPrice;
	c16 *m_sName;
	c16 *m_sText;
	int m_nGuids[8];
	bool m_bMoreDown;
	u32 m_nLinesScrolled;
	u32 m_nSkippedLines;
	u32 m_nDialogMode;
	EUIObjectNode *m_pReceiver;
	ERFont *m_pFont;
	ERShader *m_pUpArrowShader;
	ERShader *m_pDownArrowShader;
	ERShader *m_pLeftArrowShader;
	ERShader *m_pRightArrowShader;
	ERShader *m_pBlankShdr;
	ERShader *m_pTextBoxBGBC;
	ERShader *m_pTextBoxBGMR;
	ERShader *m_pTextBoxBGBR;
	ERShader *m_pMenuBevelShdr;
	EWindow *m_pWin;
	ERShader *m_pWhiteLight;
	EDL *m_pGround;
	ELights1 m_lights;
	E3DWindow m_win;
	float m_fAngle;
	EVec3 m_vTarget;
	EVec3 m_vEye;
	ERModel *m_pModels[8];
	ERModel *m_pModel2s[8];
	EAnimController m_acs[8];
	EAnimController m_ac2s[8];
	bool m_bIsAnimated[8];
	bool m_bIsAnimated2[8];
	unsigned int m_nModelIds[8];
	unsigned int m_nModelId2s[8];
	bool m_bNeedDelRefModels[8];
	bool m_bNeedDelRefModel2s[8];
	u32 m_nNumModels;
	bool m_bModelPreloadDone;
	bool m_bDisplayGround[8];
	float m_fDPadUpTime;
	float m_fDPadDownTime;
	bool m_bTriggerUp;
	bool m_bTriggerDown;
	bool m_bUpToggle;
	bool m_bDownToggle;
	float m_fNextUpToggle;
	float m_fNextDownToggle;
	s16 m_nNeighborhoodMode;
	u8 m_nLockableModelIndex;
	u8 m_nHouseNum;
	u8 m_nNumLockables;
	u16 m_nDisplayFlags;
	u16 m_nCompletedFlags;
	bool m_bModelsLocked[8];
	unsigned char m_nModelGoalAssociations[8];
	EVec2 m_vBoxAnimatePos;
	EVec2 m_vBoxStartPos;
	EVec2 m_vBoxEndPos;
	u32 m_nDisplayMode;
	float m_fAnimationTime;
	EWindow *m_pClipWin;
	float m_fHighlightTimer;
	EUIIcon m_TriIcon;
	EUIPrompt m_PromptsBack[1];
	EPromptBar m_PromptBarBack;
	EVec2 m_vBottomPos;
	EVec2 m_vBottomPosStart;
	EVec2 m_vBottomPosEnd;
	EVec2 m_vBottomSize;
	
public:
	EPauseItemInfo& operator=();
	EPauseItemInfo(EUIObjectNode *pNode, u8 nMode);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	EPauseItemInfo();
	EPauseItemInfo();
	EPauseItemInfo();
	/* vtable[1] */ virtual EPauseItemInfo(EPauseItemInfo*, int, void);
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[2] */ virtual void Update();
	/* vtable[7] */ virtual void Message(EUIObjectNode *pChild, u32 messId);
	void Init();
	void Reset();
	void SetReceiver(EUIObjectNode *pNode);
	void SetPrice(u32 iPrice);
	void SetName(c16 *sName);
	void SetText(c16 *sText);
	void SetMasterSelector(ObjSelector *pSel);
	void SetResSelector(ObjSelector *pSel, ObjSelector *pSel2);
	void SetDialogMode(u32 mode);
	ObjSelector* GetMasterSelector();
	void SetupLockableModel();
	void DrawText(ERC *prc);
	void DrawStats(ERC *prc);
	void DrawModel(ERC *prc);
	void DrawGoalsMode(ERC *prc);
	void DrawBuyBuildMode(ERC *prc);
	void SetupCameraPosition();
	void SetupModel();
};

extern __vtbl_ptr_type EPauseItemInfo virtual table[15];
extern __vtbl_ptr_type EUIIconDef virtual table[3];

void EPauseItemInfo::~EPauseItemInfo(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void EUIIconDef::~EUIIconDef(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_PAUSEITEMINFO_H

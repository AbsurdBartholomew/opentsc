// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_CHAREDPANEL_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_CHAREDPANEL_H

struct ECharedPanel : EUIObjectNode {
protected:
	ERShader *m_pBlankShdr;
	ERShader *m_pMenuBevelShdr;
	ERShader *m_pDPadBackgroundShdr;
	ERShader *m_pMirrorShdr;
	EUIIcon m_dpadIcons[8];
	EUIIcon m_SelectXIcon;
	EUIIcon m_SelectTriIcon;
	EUIPrompt m_SelectPrompts[2];
	EPromptBar m_SelectPromptBar;
	EUIIcon m_AcceptXIcon;
	EUIIcon m_AcceptTriIcon;
	EUIPrompt m_AcceptPrompts[2];
	EPromptBar m_AcceptPromptBar;
	ERLevel *m_pRoom;
	ERLevel *m_pMirrorRoom;
	EPortalWindow m_win;
	EVec3 m_vEye;
	EVec3 m_vOldEye;
	EVec3 m_vNewEye;
	EVec3 m_vCameraTarget;
	EVec3 m_vOldCameraTarget;
	EVec3 m_vNewCameraTarget;
	ECharedTitleMenu m_TitleMenu;
	ECharedSideMenu m_SideMenu;
	EUIMenu *m_pSelectMenu;
	ECharedDiamondMenuItem *m_pDiamonds[8];
	ECharedSkin m_customSkin;
	ECharedSim *m_pCustomSim;
	ECharedSim *m_pFamilyMembers[8];
	EFamilyConstructData *m_pNewFamily;
	ENeighborhoodCustomChar m_oldCharacterData;
	int m_nCurrentMenu;
	int m_nCurSim;
	int m_nDoneState;
	bool m_bInStoryMode;
	bool m_bDrawCASObjects;
	bool m_bButtonReleased;
	bool m_bEnableTitleMenu;
	bool m_bDeleteSelectMenu;
	bool m_bUseAcceptPrompt;
	float m_fCameraPos;
	float m_fThiefTime;
	float m_fSimRotation;
	float m_fFOV;
	float m_fFamFOV;
	float m_fCharFOV;
	u8 m_nCameraStatus;
	u8 m_nNumFamilyMembers;
	s8 m_nAlteredSimIndex;
	u32 m_nNextCamPos;
	ERModel *m_pMirror;
	EVec3 m_vMirror;
	ERModel *m_pThief;
	ERModel *m_pThiefVase;
	EAnimController m_ACThief;
	EAnimController m_ACThiefVase;
	unsigned int m_nThiefAnimationID[4];
	u8 m_nCurrentThiefAnim;
	ERenderSurface *m_pRS;
	ETextEntryDialog *m_pKeyboard;
	bool m_bRebuildSims;
	
public:
	ECharedPanel& operator=();
	ECharedPanel();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	ECharedPanel();
	/* vtable[1] */ virtual ECharedPanel(ECharedPanel*, int, void);
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[7] */ virtual void Message(EUIObjectNode *pChild, u32 messId);
	int UpdatePanel();
	void Init();
	void StartStoryEdit(EFamilyConstructData *pNewFamily);
	void StartFamilyEdit(EFamilyConstructData *pNewFamily);
	void CleanUp();
	void UpdateCamera();
	void RepositionCamera(u8 nNewPosIndex);
protected:
	void SetupDpadWin();
};

extern __vtbl_ptr_type ECharedPanel virtual table[15];
extern __vtbl_ptr_type EUIIconDef virtual table[3];

void EUIIconDef::~EUIIconDef(int __in_chrg);
void ECharedPanel::~ECharedPanel(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_CHAREDPANEL_H

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_CHAREDTITLEMENU_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_CHAREDTITLEMENU_H

struct ECharedTitleMenu : EUIObjectNode {
protected:
	EUIObjectMover m_mover;
	float m_fCurPos;
	float m_fCAFTitleWidth;
	float m_fCASTitleWidth;
	float m_fCAFTitleXPos;
	float m_fCASTitleXPos;
	float m_fCAFMenuWidth;
	float m_fCASMenuWidth;
	u8 m_nDrawMode;
	u8 m_nNextDrawMode;
	u8 m_nIsMenuVisible;
	bool m_bEditDeleteActive;
	bool m_bIsPersonalityAvailable;
	ERShader *m_pBlankShdr;
	ERShader *m_pMenuBevelShdr;
	ERShader *m_pTitleIconShdr;
	EUIMenu m_SimMenu;
	EUIMenu m_FamilyMenu;
	ECharedTitlePrompt m_SimMenuPrompts[4];
	ECharedTitlePrompt m_FamilyMenuPrompts[4];
	EUIIcon m_CreateASimIcon;
	EUIIcon m_PersonalIcon;
	EUIIcon m_BodyIcon;
	EUIIcon m_HeadIcon;
	EUIIcon m_SimDoneIcon;
	EUIIcon m_CreateAFamilyIcon;
	EUIIcon m_NewIcon;
	EUIIcon m_EditIcon;
	EUIIcon m_DeleteIcon;
	EUIIcon m_FamilyDoneIcon;
	ERFont *m_pFont;
	
public:
	ECharedTitleMenu& operator=();
	ECharedTitleMenu();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	ECharedTitleMenu();
	/* vtable[1] */ virtual ECharedTitleMenu(ECharedTitleMenu*, int, void);
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[2] */ virtual void Update();
	void Init();
	void Activate(bool bResetCurOpt);
	void ActivateEditDelete(bool bResetCurOpt);
	void DeactivateEditDelete();
	void ActivateNew();
	void DeactivateNew();
	void ActivateCreateASimMenu();
	void SwitchToCreateASim();
	void SwitchToCreateAFamily(bool bMoveCamera);
	void EnablePersonalityMenu();
	void DisablePersonalityMenu();
protected:
	void DrawSliding(ERC *prc);
	void DrawNormal(ERC *prc);
};

extern __vtbl_ptr_type ECharedTitleMenu virtual table[15];
extern __vtbl_ptr_type EUIIconDef virtual table[3];

void ECharedTitleMenu::~ECharedTitleMenu(int __in_chrg);
void EUIIconDef::~EUIIconDef(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_CHAREDTITLEMENU_H

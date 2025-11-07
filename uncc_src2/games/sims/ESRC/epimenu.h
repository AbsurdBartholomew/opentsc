// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_EPIMENU_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_EPIMENU_H

struct EPiMenuItem : EUIDynTextIcon {
protected:
	float m_burpTime;
	static ERShader *m_pREndcapShdr;
	static ERShader *m_pLEndcapShdr;
	static ERShader *m_pBackShdr;
	static ERShader *m_pXIcon;
	u32 m_IObjectHandle;
	Interaction *m_pAction;
	EPiSubMenu *m_pNextMenu;
	int m_nMiddlePieces;
	float m_animTime;
	float m_curPosX;
	
public:
	EPiMenuItem& operator=();
	EPiMenuItem();
	EPiMenuItem();
	/* vtable[1] */ virtual EPiMenuItem(EPiMenuItem*, int, void);
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[2] */ virtual void Update();
	static void SetupBackgroundShaders(/* parameters unknown */);
	static void CleanupBackgroundShaders(/* parameters unknown */);
	int CalcBackgroundSize();
	void DrawBackGround(ERC *prc, float x, float y, float xs, float ys, EVec4 &vcolor);
	Interaction* GetAction();
protected:
	void DUMP_STRING();
	u8 GetPlayerId();
};

extern ERShader *EPiMenuItem::m_pREndcapShdr;
extern ERShader *EPiMenuItem::m_pLEndcapShdr;
extern ERShader *EPiMenuItem::m_pBackShdr;
extern ERShader *EPiMenuItem::m_pXIcon;
extern float _pimenu_yoff;
extern float _pimenu_height;
extern float _backhs;
extern float _backzoff;
extern float _pi_burp_dur;
extern float _pi_burp_scale;
extern float _pimenuAlphaTime;
extern float _pimenuAlphaFadeDur_;
extern float _pimenuAlpha;
extern float _pi_xpromptoff;
extern __vtbl_ptr_type EPiMenu virtual table[15];
extern __vtbl_ptr_type EPiSubMenu virtual table[25];
extern __vtbl_ptr_type EPiMenuItem virtual table[23];
extern __vtbl_ptr_type EUIIconDef virtual table[3];

void EPiMenuItem::~EPiMenuItem(int __in_chrg);
void EPiSubMenu::~EPiSubMenu(int __in_chrg);
void EPiMenu::~EPiMenu(int __in_chrg);
void EUIIconDef::~EUIIconDef(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_EPIMENU_H

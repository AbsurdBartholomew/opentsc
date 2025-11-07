// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_UNLOCKDIALOG_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_UNLOCKDIALOG_H

struct EUnlockDialog : EDialogWin {
protected:
	EVec2 m_vTextSize;
	EVec2 m_vTextPos;
	EVec2 m_vModelSize;
	EVec2 m_vModelPos;
	EVec2 m_vPromptSize;
	EVec2 m_vPromptPos;
	EVec3 m_WDH;
	EVec3 m_pos;
	u32 m_nGuid;
	ObjSelector *m_pMasterSel;
	ObjSelector *m_pResSel;
	ObjSelector *m_pResSel2;
	c16 *m_sName;
	u32 m_nDialogMode;
	EUIObjectNode *m_pReceiver;
	ERFont *m_pFont;
	EWindow *m_pWin;
	ERShader *m_pWhiteLight;
	ERShader *m_pStar;
	float m_fParticlePos[20][2];
	float m_fParticleSpeed[20][2];
	float m_fParticleLife[20][2];
	float m_fTicker0;
	float m_fTicker1;
	bool m_bDelaySet1Start;
	EVec4 m_vParticle0Color;
	EVec4 m_vParticle1Color;
	EVec4 m_vParticleColorStart;
	EVec4 m_vParticle0ColorEnd;
	EVec4 m_vParticle1ColorEnd;
	EUIIcon m_XIcon;
	EUIPrompt m_Prompts[1];
	EPromptBar m_PromptBar;
	EDL *m_pGround;
	ELights1 m_lights;
	EUfo m_ufo;
	E3DWindow m_win;
	float m_fAngle;
	ERModel *m_pModel;
	ERModel *m_pModel2;
	EAnimController m_ac;
	EAnimController m_ac2;
	bool m_bIsAnimated;
	bool m_bIsAnimated2;
	u32 m_nModelId;
	u32 m_nModelId2;
	bool m_bNeedDelRefModel;
	bool m_bNeedDelRefModel2;
	bool m_bModelPreloadDone;
	bool m_bDisplayGround;
	
public:
	EUnlockDialog& operator=();
	EUnlockDialog(s32 guid);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	EUnlockDialog();
	/* vtable[1] */ virtual EUnlockDialog(EUnlockDialog*, int, void);
	/* vtable[4] */ virtual void Draw(ERC *prc);
	/* vtable[3] */ virtual void Update();
	/* vtable[8] */ virtual void SetParams(StackElem *elem, DialogParam *dialogParam);
	/* vtable[2] */ virtual void SafeDelete();
	void Reset();
	void SetReceiver(EUIObjectNode *pNode);
	void SetGUID(s32 guid);
	void SetDialogMode(int mode);
protected:
	void DrawText();
	void DrawModel(ERC *prc);
	void SetupCameraPosition();
	void SetupModel();
	void InitParticles(int nSet);
};

extern __vtbl_ptr_type EUnlockDialog virtual table[11];
extern __vtbl_ptr_type EUIIconDef virtual table[3];

void EUnlockDialog::~EUnlockDialog(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void EUIIconDef::~EUIIconDef(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_UNLOCKDIALOG_H

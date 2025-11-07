// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_HIGHSCOREDIALOG_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_HIGHSCOREDIALOG_H

struct EHighScoreDialog : EUIObjectNode {
protected:
	EVec2 m_vTextSize;
	EVec2 m_vTextPos;
	EVec2 m_vPromptSize;
	EVec2 m_vPromptPos;
	u32 m_nDialogMode;
	EUIObjectNode *m_pReceiver;
	ETextEntryDialog *m_pTextEntryDialog;
	s32 m_nScoreIndex;
	s32 m_nChallengePlayerNum;
	s32 m_nChallengeScore;
	s32 m_nHouseNum;
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
	ERShader *m_pStar;
	ERShader *m_pBlankShader;
	ERFont *m_pFont;
	EWindow *m_pWin;
	EUIIcon m_XIcon;
	EUIPrompt m_Prompts[1];
	EPromptBar m_PromptBar;
	
public:
	EHighScoreDialog& operator=();
	EHighScoreDialog(s32 nNewScoreIndex, s32 nChallengePlayerNum, s32 nChallengeScore);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	EHighScoreDialog();
	EHighScoreDialog();
	/* vtable[1] */ virtual EHighScoreDialog(EHighScoreDialog*, int, void);
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[7] */ virtual void Message(EUIObjectNode *pChild, u32 messId);
	void Init();
	void Reset();
	void SetReceiver(EUIObjectNode *pNode);
	void SetDialogMode(int mode);
	bool DialogUpdate();
protected:
	void InitParticles(int nSet);
};

extern __vtbl_ptr_type EHighScoreDialog virtual table[15];
extern __vtbl_ptr_type EUIIconDef virtual table[3];

void EHighScoreDialog::~EHighScoreDialog(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void EUIIconDef::~EUIIconDef(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_HIGHSCOREDIALOG_H

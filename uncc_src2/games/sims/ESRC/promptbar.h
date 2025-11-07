// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_PROMPTBAR_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_PROMPTBAR_H

struct EPromptBar : EUIObjectNode {
protected:
	EUIPrompt *m_Prompts;
	u32 m_nNumPrompts;
	EVec2 m_vTextBoxPos;
	float m_fTextBoxWidth;
	float m_fMarginWidth;
	float m_fGapWidth;
	ERShader *m_pTextLineButtonBevelShdr;
	ERFont *m_pFont;
	
public:
	EPromptBar& operator=();
	EPromptBar();
	EPromptBar();
	/* vtable[1] */ virtual EPromptBar(EPromptBar*, int, void);
	/* vtable[14] */ virtual void Init();
	/* vtable[15] */ virtual void Reset();
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw(ERC *prc);
	void Setup(EUIPrompt *prompts, u32 nNumPrompts, EVec2 vTarget);
};

extern __vtbl_ptr_type EPromptBar virtual table[17];
extern __vtbl_ptr_type EUIIconDef virtual table[3];

void EPromptBar::~EPromptBar(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void EUIIconDef::~EUIIconDef(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_PROMPTBAR_H

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_CHAREDTITLEPROMPT_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_CHAREDTITLEPROMPT_H

struct ECharedTitlePrompt : EUIPrompt {
protected:
	u32 m_nMessage;
	float m_PulseAccumulator;
	ERShader *m_pGlowShader;
	
public:
	ECharedTitlePrompt& operator=();
	ECharedTitlePrompt(char *str, EUIIconDef &icondef, EUITextIconDef &textdef, int fontId, EVec3 vPos);
	ECharedTitlePrompt();
	/* vtable[1] */ virtual ECharedTitlePrompt(ECharedTitlePrompt*, int, void);
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[2] */ virtual void Update();
	void SetMessage(u32 nMessage);
};

extern __vtbl_ptr_type ECharedTitlePrompt virtual table[23];
extern __vtbl_ptr_type EUIIconDef virtual table[3];

void ECharedTitlePrompt::~ECharedTitlePrompt(int __in_chrg);
void EUIIconDef::~EUIIconDef(int __in_chrg);
void global constructors keyed to ECharedTitlePrompt::ECharedTitlePrompt();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_CHAREDTITLEPROMPT_H

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_UI_E_UIPROMPT_H
#define C__EOR_SRC2_ENGINE_UI_E_UIPROMPT_H

struct EUIPrompt : EUIStaticTextIcon {
protected:
	u32 m_lastPressed;
	float m_gap;
	EVec3 m_textPos;
	
public:
	EUIPrompt& operator=();
	EUIPrompt(char *str, EUIIconDef &icondef, EUITextIconDef &textdef, int fontId, EVec3 vPos);
	EUIPrompt();
	/* vtable[1] */ virtual EUIPrompt(EUIPrompt*, int, void);
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[12] */ virtual void AddChild(EUIObjectNode *pChild);
	/* vtable[5] */ virtual void SetBoxDims(EVec2 &dims);
	/* vtable[4] */ virtual void SetPos(EVec3 &Pos);
	/* vtable[6] */ virtual void SetBoxDims();
	/* vtable[8] */ virtual void StateChanged(u32 state, bool on);
	float GetGap();
	void SetGap(float gap);
	u32 GetLastPressed();
	void AddIcon(EUIIcon *pButt);
	void SetPositions();
};

extern __vtbl_ptr_type EUIPrompt virtual table[23];
extern __vtbl_ptr_type EUIIconDef virtual table[3];

void EUIPrompt::~EUIPrompt(int __in_chrg);
void EUIIconDef::~EUIIconDef(int __in_chrg);

#endif // C__EOR_SRC2_ENGINE_UI_E_UIPROMPT_H

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_UI_E_UISCROLLMENU_H
#define C__EOR_SRC2_ENGINE_UI_E_UISCROLLMENU_H

struct EUIScrollMenu : EUIMenu {
protected:
	ERShader *m_pMorePrompts[2];
	EUIObjectNode *m_pFirstVis;
	EUIObjectNode *m_pLastVis;
	float m_startOff;
	bool m_clampAtEnds;
	
public:
	EUIScrollMenu& operator=();
	EUIScrollMenu(int _layout, int background_id, float optGap, float _yoff, float _xoff, int backid, int forewardid, bool clampAtEnds);
	EUIScrollMenu();
	/* vtable[1] */ virtual EUIScrollMenu(EUIScrollMenu*, int, void);
	/* vtable[14] */ virtual void RemoveAllOpts();
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[2] */ virtual void Update();
	/* vtable[19] */ virtual void SetLayout(int layout, int justx, int justy);
	/* vtable[4] */ virtual void SetPos(EVec3 &Pos);
	/* vtable[17] */ virtual void SetPositions();
	/* vtable[8] */ virtual void StateChanged(u32 state, bool on);
	/* vtable[16] */ virtual void AddOpt(EUIObjectNode *pOpt, EVec3 pos);
	void InitMorePrompts(int backid, int forewardid);
	/* vtable[21] */ virtual void NextItem();
	/* vtable[22] */ virtual void PrevItem();
protected:
	void ListForward();
	void ListBackward();
	void SetupHorizLayout();
	void SetupVertLayout();
	void DrawPrompt(ERC *prc, int which);
};

extern __vtbl_ptr_type EUIScrollMenu virtual table[25];

void EUIScrollMenu::~EUIScrollMenu(int __in_chrg);

#endif // C__EOR_SRC2_ENGINE_UI_E_UISCROLLMENU_H

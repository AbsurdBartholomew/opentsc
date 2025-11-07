// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_UI_E_UIGRIDMENU_H
#define C__EOR_SRC2_ENGINE_UI_E_UIGRIDMENU_H

struct EUIGridMenu : EUIMenu {
protected:
	EUIObjectNode *m_pCurRow;
	EUIMenu *m_pCurCol;
	
public:
	EUIGridMenu& operator=();
	EUIGridMenu();
	EUIGridMenu();
	/* vtable[1] */ virtual EUIGridMenu(EUIGridMenu*, int, void);
	/* vtable[2] */ virtual void Update();
	/* vtable[12] */ virtual void AddChild(EUIObjectNode *pChild);
	/* vtable[24] */ virtual void SetStick(int stick);
	/* vtable[16] */ virtual void AddOpt(EUIObjectNode *pOpt, EVec3 pPos);
	/* vtable[25] */ virtual void AddCol(EUIMenu *pCol);
	/* vtable[18] */ virtual void SetCurOpt(EUIObjectNode *pOpt);
	/* vtable[26] */ virtual void SetCurCol(EUIMenu *pOpt, int dir);
	void SetOptGapXY(float x, float y);
	void SetColBackShader(int id);
	void SetColumnDims(EVec2 &_WH);
	void SetRowDims(EVec2 &_WH);
	EUIMenu* GetCurCol();
	EUIObjectNode* GetCurRow();
	/* vtable[21] */ virtual void NextItem();
	/* vtable[22] */ virtual void PrevItem();
	bool SetCurRow(EUIMenu *pCol, int idx, int dir);
protected:
	void GridForward();
	void GridBackward();
};

extern __vtbl_ptr_type EUIGridMenu virtual table[28];

void EUIGridMenu::~EUIGridMenu(int __in_chrg);

#endif // C__EOR_SRC2_ENGINE_UI_E_UIGRIDMENU_H

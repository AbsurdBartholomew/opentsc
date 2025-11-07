// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_E_DEBUGMENU_H
#define C__EOR_SRC2_ENGINE_E_DEBUGMENU_H

struct EDebugMenuItem {
	EDebugMenuItem *m_pLast;
	EDebugMenuItem *m_pNext;
	__vtbl_ptr_type *$vf5413;
	
	EDebugMenuItem& operator=();
	EDebugMenuItem();
	EDebugMenuItem();
	/* vtable[1] */ virtual void GetDescription(char *szBuffer);
	/* vtable[2] */ virtual void GetValue(char *szBuffer);
	/* vtable[3] */ virtual void ButtonPress(EDebugMenuButton button, float stickval);
	/* vtable[4] */ virtual void ButtonPress();
};

typedef TLinkedList<EDebugMenuItem,0,4> EDMItemList;

struct EDebugMenu {
protected:
	bool m_enable;
	float m_maxWidth;
	bool m_maxWidthNeedsComputing;
	EDMItemList m_itemList;
	int m_cSel;
	int m_count;
	
public:
	EDebugMenu& operator=();
	EDebugMenu();
	EDebugMenu();
	void Add(EDebugMenuItem &item);
	void Remove(EDebugMenuItem &item);
	void Enable();
	void Toggle();
	bool IsEnabled();
	void Update();
	void Draw();
protected:
	void ComputeMaxWidth(ERFont *pFont);
};

extern EDebugMenu _debugmenu;
extern __vtbl_ptr_type EDebugMenuItem virtual table[6];

void global constructors keyed to _debugmenu();

#endif // C__EOR_SRC2_ENGINE_E_DEBUGMENU_H

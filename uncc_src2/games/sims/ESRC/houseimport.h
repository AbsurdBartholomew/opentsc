// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_HOUSEIMPORT_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_HOUSEIMPORT_H

struct EHouseImportMenuItem : EUIDynTextIcon {
	int m_Index;
	EHouseImportMenuMgr *m_MenuPtr;
	int m_Cost;
	int m_HouseNum;
	
	EHouseImportMenuItem& operator=();
	EHouseImportMenuItem();
	EHouseImportMenuItem();
	/* vtable[1] */ virtual EHouseImportMenuItem(EHouseImportMenuItem*, int, void);
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[2] */ virtual void Update();
protected:
	void DrawBackgroud(ERC *prc, EVec2 &UL, EVec2 &LR);
};

typedef TNodeList<EHouseImportMenuItem *> EHouseImportMenuItemList;

struct EHouseImportMenu : EUIScrollMenu {
	EHouseImportMenuItemList m_itemList;
protected:
	ERShader *m_pMorePrompts[2];
	
public:
	EHouseImportMenu& operator=();
	EHouseImportMenu();
	EHouseImportMenu();
	/* vtable[1] */ virtual EHouseImportMenu(EHouseImportMenu*, int, void);
	void Init();
	void Reset();
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[2] */ virtual void Update();
	/* vtable[7] */ virtual void Message(EUIObjectNode *p, u32 MessId);
protected:
	void DrawBlinkingPrompt(ERC *prc, int which);
};

extern __vtbl_ptr_type EHouseImportMenu virtual table[25];
extern __vtbl_ptr_type EHouseImportMenuItem virtual table[23];
extern __vtbl_ptr_type EUIIconDef virtual table[3];

void EHouseImportMenuItem::~EHouseImportMenuItem(int __in_chrg);
void EHouseImportMenu::~EHouseImportMenu(int __in_chrg);
void EHouseImportMenuMgr::~EHouseImportMenuMgr(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void EUIIconDef::~EUIIconDef(int __in_chrg);
void global constructors keyed to EHouseImportMenuItem::EHouseImportMenuItem();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_HOUSEIMPORT_H

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_FAMILYMEMBERMENU_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_FAMILYMEMBERMENU_H

struct EFamilyMemberMenuItem : EUIDynTextIcon {
	int m_Index;
	BString2 m_Name;
	bool m_disableItem;
	EFamilyMemberMenuMgr *m_MenuPtr;
	int m_Cost;
	int m_HouseNum;
	ERShader *m_pFamilyMemberThumbnail;
	
	EFamilyMemberMenuItem& operator=();
	EFamilyMemberMenuItem();
	EFamilyMemberMenuItem();
	/* vtable[1] */ virtual EFamilyMemberMenuItem(EFamilyMemberMenuItem*, int, void);
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[2] */ virtual void Update();
protected:
	void DrawBackgroud(ERC *prc, EVec2 &UL, EVec2 &LR);
};

typedef TNodeList<EFamilyMemberMenuItem *> EFamilyMemberMenuItemList;

struct EFamilyMemberMenu : EUIScrollMenu {
	EFamilyMemberMenuItemList m_itemList;
protected:
	ERShader *m_pMorePrompts[2];
	
public:
	EFamilyMemberMenu& operator=();
	EFamilyMemberMenu();
	EFamilyMemberMenu();
	/* vtable[1] */ virtual EFamilyMemberMenu(EFamilyMemberMenu*, int, void);
	void Init();
	void Reset();
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[2] */ virtual void Update();
	/* vtable[7] */ virtual void Message(EUIObjectNode *p, u32 MessId);
protected:
	void DrawBlinkingPrompt(ERC *prc, int which);
};

extern __vtbl_ptr_type EFamilyMemberMenu virtual table[25];
extern __vtbl_ptr_type EFamilyMemberMenuItem virtual table[23];
extern __vtbl_ptr_type EUIIconDef virtual table[3];

void EFamilyMemberMenuItem::~EFamilyMemberMenuItem(int __in_chrg);
void EFamilyMemberMenu::~EFamilyMemberMenu(int __in_chrg);
void EFamilyMemberMenuMgr::~EFamilyMemberMenuMgr(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
FamilyImpl** FamilyImpl ** uninitialized_copy<FamilyImpl **, FamilyImpl **>(FamilyImpl **first, FamilyImpl **last, FamilyImpl **result);
vector<FamilyImpl *,__malloc_alloc_template<0> >& vector<FamilyImpl *, __malloc_alloc_template<0> >::operator=(vector<FamilyImpl *,__malloc_alloc_template<0> > &x);
void EUIIconDef::~EUIIconDef(int __in_chrg);
void global constructors keyed to EFamilyMemberMenuItem::EFamilyMemberMenuItem();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_FAMILYMEMBERMENU_H

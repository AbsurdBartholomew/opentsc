// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_FAMILYSELECT_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_FAMILYSELECT_H

struct EFamilySelectMenuItem : EUIDynTextIcon {
	int m_Index;
	EFamilySelect *m_MenuPtr;
	bool m_bNotSelectable;
	bool m_bNoFamilies;
protected:
	FamilyImpl *m_pFamily;
	ERShader *m_pFamilyMemberThumbnail[8];
	
public:
	EFamilySelectMenuItem& operator=();
	EFamilySelectMenuItem(FamilyImpl *Family, NeighborhoodImpl *NH);
	EFamilySelectMenuItem();
	/* vtable[1] */ virtual EFamilySelectMenuItem(EFamilySelectMenuItem*, int, void);
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[2] */ virtual void Update();
protected:
	void DrawBackgroud(ERC *prc, EVec2 &UL, EVec2 &LR);
};

typedef TNodeList<EFamilySelectMenuItem *> EFamilySelectMenuItemList;

struct EFamilySelectMenu : EUIScrollMenu {
	EFamilySelectMenuItemList m_itemList;
protected:
	ERShader *m_pMorePrompts[2];
	
public:
	EFamilySelectMenu& operator=();
	EFamilySelectMenu();
	EFamilySelectMenu();
	/* vtable[1] */ virtual EFamilySelectMenu(EFamilySelectMenu*, int, void);
	void Init();
	void Reset();
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[2] */ virtual void Update();
	/* vtable[7] */ virtual void Message(EUIObjectNode *p, u32 MessId);
protected:
	void DrawBlinkingPrompt(ERC *prc, int which);
};

extern __vtbl_ptr_type EFamilySelectMenu virtual table[25];
extern __vtbl_ptr_type EFamilySelectMenuItem virtual table[23];
extern __vtbl_ptr_type EUIIconDef virtual table[3];

void EFamilySelectMenuItem::~EFamilySelectMenuItem(int __in_chrg);
void EFamilySelectMenu::~EFamilySelectMenu(int __in_chrg);
void EFamilySelect::~EFamilySelect(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
FamilyImpl** FamilyImpl ** uninitialized_copy<FamilyImpl **, FamilyImpl **>(FamilyImpl **first, FamilyImpl **last, FamilyImpl **result);
vector<FamilyImpl *,__malloc_alloc_template<0> >& vector<FamilyImpl *, __malloc_alloc_template<0> >::operator=(vector<FamilyImpl *,__malloc_alloc_template<0> > &x);
void EUIIconDef::~EUIIconDef(int __in_chrg);
void global constructors keyed to EFamilySelectMenuItem::EFamilySelectMenuItem();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_FAMILYSELECT_H

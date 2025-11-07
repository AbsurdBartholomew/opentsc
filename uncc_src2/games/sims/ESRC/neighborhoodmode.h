// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_NEIGHBORHOODMODE_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_NEIGHBORHOODMODE_H

struct EFamilyConstructData {
	ENeighborhoodCustomChar CustomData[8];
	bool CharacterInSlot[8];
	int Guid[8];
	StringBufW255 *FamilyName;
	int Funds;
};

struct EHouseSelectMenuItem : EUIDynTextIcon {
	int m_Index;
protected:
	ERShader *m_pREndcapShdr;
	ERShader *m_pLEndcapShdr;
	ERShader *m_pBackShdr;
	ERShader *m_pXIcon;
	
public:
	EHouseSelectMenuItem& operator=();
	EHouseSelectMenuItem();
	EHouseSelectMenuItem();
	/* vtable[1] */ virtual EHouseSelectMenuItem(EHouseSelectMenuItem*, int, void);
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[2] */ virtual void Update();
protected:
	EHouseSelectMenuItem();
	void DrawBackGround(ERC *prc, float x, float y, float xs, float ys, EVec4 &vcolor);
};

typedef TNodeList<EHouseSelectMenuItem *> EHouseSelectMenuItemList;

struct EHouseSelectMenu : EUIScrollMenu {
	EHouseSelectMenuItemList m_itemList;
	ENeighborhoodMode *m_pNeighborhoodMode;
	bool m_Destruct;
	
	EHouseSelectMenu& operator=();
	EHouseSelectMenu();
	EHouseSelectMenu();
	/* vtable[1] */ virtual EHouseSelectMenu(EHouseSelectMenu*, int, void);
	void Init();
	void Reset();
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[2] */ virtual void Update();
	/* vtable[7] */ virtual void Message(EUIObjectNode *p, u32 MessId);
};

extern int _curopt;
extern __vtbl_ptr_type SimpleReconObject<cSimulator> virtual table[5];
extern __vtbl_ptr_type ENeighborhoodMode virtual table[7];
extern __vtbl_ptr_type EHouseSelectMenu virtual table[25];
extern __vtbl_ptr_type EHouseSelectMenuItem virtual table[23];
extern __vtbl_ptr_type EUIIconDef virtual table[3];
extern __vtbl_ptr_type EGameState virtual table[7];

void EHouseSelectMenuItem::~EHouseSelectMenuItem(int __in_chrg);
void EHouseSelectMenu::~EHouseSelectMenu(int __in_chrg);
void ENeighborhoodMode::~ENeighborhoodMode(int __in_chrg);
EFamilyConstructData* EFamilyConstructData::EFamilyConstructData();
void EFamilyConstructData::~EFamilyConstructData(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
ErrType int ReconLoadObject<cSimulator>(cSimulator *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 *version);
ErrType int ReconSaveObject<cSimulator>(cSimulator *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 version);
FamilyImpl** FamilyImpl ** uninitialized_copy<FamilyImpl **, FamilyImpl **>(FamilyImpl **first, FamilyImpl **last, FamilyImpl **result);
vector<FamilyImpl *,__malloc_alloc_template<0> >& vector<FamilyImpl *, __malloc_alloc_template<0> >::operator=(vector<FamilyImpl *,__malloc_alloc_template<0> > &x);
void EGameState::~EGameState(int __in_chrg);
void EUIIconDef::~EUIIconDef(int __in_chrg);
void SimpleReconObject<cSimulator>::~SimpleReconObject(int __in_chrg);
void global constructors keyed to _curopt();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_NEIGHBORHOODMODE_H

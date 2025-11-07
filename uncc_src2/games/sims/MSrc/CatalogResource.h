// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_CATALOGRESOURCE_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_CATALOGRESOURCE_H

struct CatalogData {
	SInt32 resID;
	ELocString name;
	ELocString description;
	ELocString shortName;
};

struct CatalogResource {
	__vtbl_ptr_type *$vf2949;
	
	CatalogResource& operator=();
	CatalogResource();
protected:
	CatalogResource();
	/* vtable[1] */ virtual CatalogResource(CatalogResource*, int, void);
public:
	/* vtable[2] */ virtual ErrType Load();
	/* vtable[3] */ virtual ELocString GetName();
	/* vtable[4] */ virtual ELocString GetDescription();
	/* vtable[5] */ virtual ELocString GetShortName();
	static CatalogResource* CreateInstance(/* parameters unknown */);
	static void DestroyInstance(/* parameters unknown */);
};

extern c16 *CatalogResourceImpl::pDefault;
extern __vtbl_ptr_type CatalogResourceImpl virtual table[7];
extern __vtbl_ptr_type CatalogResource virtual table[7];

CatalogData* CatalogData * FindRes<CatalogData>(CatalogData *begin, CatalogData *end, int resID);
void CatalogResourceImpl::~CatalogResourceImpl(int __in_chrg);
void CatalogResource::~CatalogResource(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_CATALOGRESOURCE_H

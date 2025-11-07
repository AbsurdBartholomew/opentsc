// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_PROPTABLE_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_PROPTABLE_H

struct VECTOR<PropRef *> {
private:
	PropRef **pData;
	
public:
	VECTOR<PropRef *>& operator=();
	VECTOR();
	VECTOR();
	int size();
	PropRef*& operator[]();
	PropRef*& operator[]();
	PropRef** begin();
	PropRef** end();
	PropRef** begin();
	PropRef** end();
};

struct PropRefTable : VECTOR<PropRef *> {
	SInt16 resID;
};

struct PropTable {
	__vtbl_ptr_type *$vf4137;
	
	PropTable& operator=();
	PropTable();
protected:
	PropTable();
	/* vtable[1] */ virtual PropTable(PropTable*, int, void);
public:
	/* vtable[2] */ virtual ErrType Load();
	/* vtable[3] */ virtual SInt16 GetID();
	/* vtable[4] */ virtual iResFile* GetFile();
	/* vtable[5] */ virtual PropNameID GetEntry();
	/* vtable[6] */ virtual char* GetEntryName();
	/* vtable[7] */ virtual SInt16 CountEntries();
	static PropTable* CreateInstance(/* parameters unknown */);
	static void DestroyInstance(/* parameters unknown */);
};

extern __vtbl_ptr_type PropTableImpl virtual table[9];
extern __vtbl_ptr_type PropTable virtual table[9];

char* castPropToString(PropNameID sName);
void PropTableImpl::~PropTableImpl(int __in_chrg);
PropRefTable* PropRefTable * FindRes<PropRefTable>(PropRefTable *begin, PropRefTable *end, int resID);
void PropTable::~PropTable(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_PROPTABLE_H

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_ANIMTABLE_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_ANIMTABLE_H

struct VECTOR<AnimRef *> {
private:
	AnimRef **pData;
	
public:
	VECTOR<AnimRef *>& operator=();
	VECTOR();
	VECTOR();
	int size();
	AnimRef*& operator[]();
	AnimRef*& operator[]();
	AnimRef** begin();
	AnimRef** end();
	AnimRef** begin();
	AnimRef** end();
};

struct AnimRefTable : VECTOR<AnimRef *> {
	SInt16 resID;
};

struct AnimTable {
	__vtbl_ptr_type *$vf881;
	
	AnimTable& operator=();
	AnimTable();
protected:
	AnimTable();
	/* vtable[1] */ virtual AnimTable(AnimTable*, int, void);
public:
	/* vtable[2] */ virtual ErrType Load();
	/* vtable[3] */ virtual SInt16 GetID();
	/* vtable[4] */ virtual iResFile* GetFile();
	/* vtable[5] */ virtual SkillNameID GetEntry();
	/* vtable[6] */ virtual char* GetEntryName();
	/* vtable[7] */ virtual SInt16 CountEntries();
	static AnimTable* CreateInstance(/* parameters unknown */);
	static void DestroyInstance(/* parameters unknown */);
};

extern __vtbl_ptr_type AnimTableImpl virtual table[9];
extern __vtbl_ptr_type AnimTable virtual table[9];

char* castSkillToString(SkillNameID sName);
void AnimTableImpl::~AnimTableImpl(int __in_chrg);
AnimRefTable* AnimRefTable * FindRes<AnimRefTable>(AnimRefTable *begin, AnimRefTable *end, int resID);
void AnimTable::~AnimTable(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_ANIMTABLE_H

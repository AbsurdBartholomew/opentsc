// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_STRSET_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_STRSET_H

struct StringSet {
	__vtbl_ptr_type *$vf3187;
	
private:
	StringSet& operator=();
	StringSet();
protected:
	StringSet();
	/* vtable[1] */ virtual StringSet(StringSet*, int, void);
public:
	/* vtable[2] */ virtual void Copy();
	/* vtable[3] */ virtual Int Count();
	/* vtable[4] */ virtual Int size();
	/* vtable[5] */ virtual char* GetString();
	/* vtable[6] */ virtual ELocString GetLocString();
	/* vtable[7] */ virtual char* GetNativeString();
	/* vtable[8] */ virtual void SetString();
	/* vtable[9] */ virtual void SetString();
	/* vtable[10] */ virtual void InsertString();
	/* vtable[11] */ virtual void RemoveString();
	/* vtable[12] */ virtual char* GetDescription();
	/* vtable[13] */ virtual void SetDescription();
	/* vtable[14] */ virtual void GetName();
	/* vtable[15] */ virtual void SetName();
	/* vtable[16] */ virtual void SetInfo();
	/* vtable[17] */ virtual void SetLocInfo();
	/* vtable[18] */ virtual ErrType LoadRes();
	/* vtable[19] */ virtual ErrType LoadLocRes();
	/* vtable[20] */ virtual ErrType Save();
	/* vtable[21] */ virtual ErrType LoadDef();
	/* vtable[22] */ virtual ErrType Save();
	/* vtable[23] */ virtual SInt16 GetID();
	/* vtable[24] */ virtual iResFile* GetFile();
	/* vtable[25] */ virtual void WriteAnsiToDB();
	/* vtable[26] */ virtual void WriteWideToDB();
	static void Swizzle(/* parameters unknown */);
	static StringSet* CreateInstance(/* parameters unknown */);
	static void DestroyInstance(/* parameters unknown */);
};

struct VECTOR<const char *> {
private:
	char **pData;
	
public:
	VECTOR<const char *>& operator=();
	VECTOR();
	VECTOR();
	int size();
	char*& operator[]();
	char*& operator[]();
	char** begin();
	char** end();
	char** begin();
	char** end();
};

struct AStringSet : VECTOR<const char *> {
	SInt32 resType;
	SInt16 resID;
};

struct VECTOR<ELocString> {
private:
	ELocString *pData;
	
public:
	VECTOR<ELocString>& operator=();
	VECTOR();
	VECTOR();
	int size();
	ELocString& operator[]();
	ELocString& operator[]();
	ELocString* begin();
	ELocString* end();
	ELocString* begin();
	ELocString* end();
};

struct WStringSet : VECTOR<ELocString> {
	SInt32 resType;
	SInt16 resID;
};

extern c16 *QuickStringSet::s_nullPointer;
extern __vtbl_ptr_type QuickStringSet virtual table[28];
extern __vtbl_ptr_type StringSet virtual table[28];

void QuickStringSet::~QuickStringSet(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
AStringSet* AStringSet * FindRes<AStringSet>(AStringSet *begin, AStringSet *end, int resID);
WStringSet* WStringSet * FindRes<WStringSet>(WStringSet *begin, WStringSet *end, int resID);
void StringSet::~StringSet(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_STRSET_H

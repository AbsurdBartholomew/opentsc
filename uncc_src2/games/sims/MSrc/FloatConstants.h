// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_FLOATCONSTANTS_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_FLOATCONSTANTS_H

struct FloatConstantItem {
	float fValue;
	char *fName;
};

struct VECTOR<FloatConstantItem> {
private:
	FloatConstantItem *pData;
	
public:
	VECTOR<FloatConstantItem>& operator=();
	VECTOR();
	VECTOR();
	int size();
	FloatConstantItem& operator[]();
	FloatConstantItem& operator[]();
	FloatConstantItem* begin();
	FloatConstantItem* end();
	FloatConstantItem* begin();
	FloatConstantItem* end();
};

struct FloatConstantsData : VECTOR<FloatConstantItem> {
	Int resID;
};

struct FloatConstants {
	__vtbl_ptr_type *$vf1607;
	
	FloatConstants& operator=();
	FloatConstants();
protected:
	FloatConstants();
	/* vtable[1] */ virtual FloatConstants(FloatConstants*, int, void);
public:
	/* vtable[2] */ virtual float Get();
	/* vtable[3] */ virtual bool Has();
	/* vtable[4] */ virtual void Load();
	static FloatConstants* CreateInstance(/* parameters unknown */);
	static void DestroyInstance(/* parameters unknown */);
};

extern __vtbl_ptr_type FloatConstantsImpl virtual table[6];
extern __vtbl_ptr_type FloatConstants virtual table[6];

void FloatConstants::~FloatConstants(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
FloatConstantsData* FloatConstantsData * FindRes<FloatConstantsData>(FloatConstantsData *begin, FloatConstantsData *end, int resID);
void FloatConstantsImpl::~FloatConstantsImpl(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_FLOATCONSTANTS_H

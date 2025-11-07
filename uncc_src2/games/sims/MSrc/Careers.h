// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_CAREERS_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_CAREERS_H

struct ELocString {
private:
	c16 **ptr;
	
public:
	ELocString& operator=();
	ELocString();
	ELocString();
	c16* operator unsigned short *();
	void SetPtr();
};

struct VECTOR<WStringSet> {
private:
	WStringSet *pData;
	
public:
	VECTOR<WStringSet>& operator=();
	VECTOR();
	VECTOR();
	int size();
	WStringSet& operator[]();
	WStringSet& operator[]();
	WStringSet* begin();
	WStringSet* end();
	WStringSet* begin();
	WStringSet* end();
};

struct Job {
	int fMinReqs[10];
	int fHourlyMotiveDeltas[7];
	Int fSalary;
	Int fStartHour;
	Int fEndHour;
	Int fCarID;
	ELocString fName;
	ELocString fFemaleName;
	ELocString fShortName;
	ELocString fShortFemaleName;
	char *fSuit;
	ELocString fDescription;
};

extern __vtbl_ptr_type CareersImpl virtual table[17];
extern __vtbl_ptr_type Careers virtual table[17];

void Careers::~Careers(int __in_chrg);
WStringSet* FindStringSet(VECTOR<WStringSet> &sets, SInt16 fResID, SInt32 fResType);
void CareersImpl::~CareersImpl(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_CAREERS_H

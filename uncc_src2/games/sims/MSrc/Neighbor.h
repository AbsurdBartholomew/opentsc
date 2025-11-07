// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_NEIGHBOR_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_NEIGHBOR_H

struct PersDataPair {
	Int fDataIndex;
	Int fVersionAdded;
};

struct Neighbor {
private:
	StdPrm fID;
	SInt32 fGUID;
	ObjSelector *fSelector;
	RelMatrix *fRelations;
	Int fCurrentHouse;
	Int fFriendCount;
	bool fFriendCountDirty;
	StackString<64> fOriginalFileName;
	short int fData[80];
public:
	Int fPersonDataVersion;
	
	Neighbor& operator=();
	Neighbor(StdPrm id, ObjSelector *sel);
	Neighbor();
	Neighbor(Neighbor*, int, void);
	Neighbor();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	SInt16 GetID();
	ObjSelector* GetSelector();
	RelMatrix& GetRelations();
	SInt32 GetGUID();
	StdPrm* GetPersonDataArray();
	bool IsCharacter();
	static int GetNumPersistentDataFields(/* parameters unknown */);
	static PersDataPair& GetPersistentDataFieldsByIndex(/* parameters unknown */);
	static Int GetLatestPersDataVersion(/* parameters unknown */);
	void DoStream(ReconBuffer *r, SInt32 version);
};

extern vector<PersDataPair,__malloc_alloc_template<0> > sPersistentFields;

void Neighbor::~Neighbor(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
PersDataPair* PersDataPair * uninitialized_copy<PersDataPair *, PersDataPair *>(PersDataPair *first, PersDataPair *last, PersDataPair *result);
PersDataPair* PersDataPair * copy_backward<PersDataPair *, PersDataPair *>(PersDataPair *first, PersDataPair *last, PersDataPair *result);
void vector<PersDataPair, __malloc_alloc_template<0> >::insert_aux(PersDataPair *position, PersDataPair &x);
void global constructors keyed to sPersistentFields();
void global destructors keyed to sPersistentFields();

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_NEIGHBOR_H

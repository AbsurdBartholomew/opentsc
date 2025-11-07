// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_NEIGHBORHOOD_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_NEIGHBORHOOD_H

typedef SInt32 OSErr;
typedef OSErr ErrType;

struct vector<Neighbor *,__malloc_alloc_template<0> > {
protected:
	Neighbor **start;
	Neighbor **finish;
	Neighbor **end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	Neighbor** begin();
	Neighbor** begin();
	Neighbor** end();
	Neighbor** end();
	reverse_iterator<Neighbor **,Neighbor *,Neighbor *&,int> rbegin();
	reverse_iterator<Neighbor *const *,Neighbor *,Neighbor *const &,int> rbegin();
	reverse_iterator<Neighbor **,Neighbor *,Neighbor *&,int> rend();
	reverse_iterator<Neighbor *const *,Neighbor *,Neighbor *const &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	Neighbor*& operator[]();
	Neighbor*& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<Neighbor *,__malloc_alloc_template<0> >*, int, void);
	vector<Neighbor *,__malloc_alloc_template<0> >& operator=();
	void reserve();
	Neighbor*& front();
	Neighbor*& front();
	Neighbor*& back();
	Neighbor*& back();
	void push_back();
	void swap();
	Neighbor** insert();
	Neighbor** insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct NeighborList : vector<Neighbor *,__malloc_alloc_template<0> > {
	NeighborList& operator=();
	NeighborList();
	NeighborList();
	NeighborList(NeighborList*, int, void);
	void DeleteAll();
};

typedef int FamilyID;

struct StackString2<128> : StringBuffer2 {
private:
	short unsigned int fChars[128];
};

struct FamilyInfo {
	StackString2<128> mName;
	int mNetWorth;
	int mFriendCount;
	int mLotNumber;
};

struct HouseInfo {
	int mMoveInAllowed;
	int mIsTutorial;
	int mHasHouse;
	int mPrice;
	FamilyID mOccupants;
	FamilyInfo mOccupantInfo;
	int mHouseNumber;
	Int mLotPosX;
	Int mLotPosY;
};

extern int gInhibitTutorial;
extern __vtbl_ptr_type SimpleReconObject<cSimulator> virtual table[5];
extern __vtbl_ptr_type SimpleReconObject<ReconStreamPtrVector<Neighbor> > virtual table[5];
extern __vtbl_ptr_type SimpleReconObject<NeighborhoodImpl> virtual table[5];
extern __vtbl_ptr_type NeighborhoodConstants virtual table[5];
extern __vtbl_ptr_type NeighborhoodImpl virtual table[57];
extern __vtbl_ptr_type Neighborhood virtual table[57];
extern float gArchValueMultiplier;
extern int gNewFamilyStartHour;
extern float gPerfectFriendCount;
extern float gHouseSizeWeight;
extern int gLayoutFillValue;
extern int gMoneyForNewFamily;
extern float gYardScoreMultiplier;
extern Int gScorePerDirtyObject;
extern Int gScorePerBrokenObject;

ConstantsClient* GetNeighborhoodConstantsClient();
void NeighborhoodImpl::~NeighborhoodImpl(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
ErrType int ReconLoadObject<NeighborhoodImpl>(NeighborhoodImpl *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 *version);
ErrType int ReconLoadObject<ReconStreamPtrVector<Neighbor> >(ReconStreamPtrVector<Neighbor> *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 *version);
ErrType int ReconLoadPtrVector<Neighbor>(vector<Neighbor *,__malloc_alloc_template<0> > &v, iResFile *file, SInt32 type, SInt16 id, SInt32 *version);
FamilyImpl** FamilyImpl ** copy_backward<FamilyImpl **, FamilyImpl **>(FamilyImpl **first, FamilyImpl **last, FamilyImpl **result);
FamilyImpl** FamilyImpl ** uninitialized_copy<FamilyImpl **, FamilyImpl **>(FamilyImpl **first, FamilyImpl **last, FamilyImpl **result);
void vector<FamilyImpl *, __malloc_alloc_template<0> >::insert_aux(FamilyImpl **position, FamilyImpl *&x);
int int __lg<int>(int n);
void void __push_heap<FamilyImpl **, int, FamilyImpl *, bool (*)>(FamilyImpl **first, int holeIndex, int topIndex, FamilyImpl *value, bool (*comp)(/* parameters unknown */));
void void __adjust_heap<FamilyImpl **, int, FamilyImpl *, bool (*)>(FamilyImpl **first, int holeIndex, int len, FamilyImpl *value, bool (*comp)(/* parameters unknown */));
void void __make_heap<FamilyImpl **, bool (*), FamilyImpl *, int>(FamilyImpl **first, FamilyImpl **last, bool (*comp)(/* parameters unknown */));
void void sort_heap<FamilyImpl **, bool (*)>(FamilyImpl **first, FamilyImpl **last, bool (*comp)(/* parameters unknown */));
void void __partial_sort<FamilyImpl **, FamilyImpl *, bool (*)>(FamilyImpl **first, FamilyImpl **middle, FamilyImpl **last, bool (*comp)(/* parameters unknown */));
FamilyImpl** FamilyImpl ** __unguarded_partition<FamilyImpl **, FamilyImpl *, bool (*)>(FamilyImpl **first, FamilyImpl **last, FamilyImpl *pivot, bool (*comp)(/* parameters unknown */));
void void __introsort_loop<FamilyImpl **, FamilyImpl *, int, bool (*)>(FamilyImpl **first, FamilyImpl **last, int depth_limit, bool (*comp)(/* parameters unknown */));
void void __unguarded_linear_insert<FamilyImpl **, FamilyImpl *, bool (*)>(FamilyImpl **last, FamilyImpl *value, bool (*comp)(/* parameters unknown */));
void void __insertion_sort<FamilyImpl **, bool (*)>(FamilyImpl **first, FamilyImpl **last, bool (*comp)(/* parameters unknown */));
void void __unguarded_insertion_sort_aux<FamilyImpl **, FamilyImpl *, bool (*)>(FamilyImpl **first, FamilyImpl **last, bool (*comp)(/* parameters unknown */));
void void __final_insertion_sort<FamilyImpl **, bool (*)>(FamilyImpl **first, FamilyImpl **last, bool (*comp)(/* parameters unknown */));
ErrType int ReconSaveObject<NeighborhoodImpl>(NeighborhoodImpl *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 version);
ErrType int ReconSaveObject<ReconStreamPtrVector<Neighbor> >(ReconStreamPtrVector<Neighbor> *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 version);
ErrType int ReconSavePtrVector<Neighbor>(vector<Neighbor *,__malloc_alloc_template<0> > &v, iResFile *file, SInt32 type, SInt16 id, SInt32 version);
Neighbor** Neighbor ** copy_backward<Neighbor **, Neighbor **>(Neighbor **first, Neighbor **last, Neighbor **result);
Neighbor** Neighbor ** uninitialized_copy<Neighbor **, Neighbor **>(Neighbor **first, Neighbor **last, Neighbor **result);
void vector<Neighbor *, __malloc_alloc_template<0> >::insert_aux(Neighbor **position, Neighbor *&x);
ErrType int ReconLoadObject<cSimulator>(cSimulator *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 *version);
cXPerson** cXPerson ** copy_backward<cXPerson **, cXPerson **>(cXPerson **first, cXPerson **last, cXPerson **result);
cXPerson** cXPerson ** uninitialized_copy<cXPerson **, cXPerson **>(cXPerson **first, cXPerson **last, cXPerson **result);
void vector<cXPerson *, __malloc_alloc_template<0> >::insert_aux(cXPerson **position, cXPerson *&x);
FamilyID* int * copy_backward<int *, int *>(FamilyID *first, FamilyID *last, FamilyID *result);
FamilyID* int * uninitialized_copy<int *, int *>(FamilyID *first, FamilyID *last, FamilyID *result);
void vector<int, __malloc_alloc_template<0> >::insert_aux(FamilyID *position, FamilyID &x);
void void __push_heap<int *, int, int, bool (*)>(FamilyID *first, int holeIndex, int topIndex, int value, bool (*comp)(/* parameters unknown */));
void void __adjust_heap<int *, int, int, bool (*)>(FamilyID *first, int holeIndex, int len, int value, bool (*comp)(/* parameters unknown */));
void void __make_heap<int *, bool (*), int, int>(FamilyID *first, FamilyID *last, bool (*comp)(/* parameters unknown */));
void void sort_heap<int *, bool (*)>(FamilyID *first, FamilyID *last, bool (*comp)(/* parameters unknown */));
void void __partial_sort<int *, int, bool (*)>(FamilyID *first, FamilyID *middle, FamilyID *last, bool (*comp)(/* parameters unknown */));
FamilyID* int * __unguarded_partition<int *, int, bool (*)>(FamilyID *first, FamilyID *last, int pivot, bool (*comp)(/* parameters unknown */));
void void __introsort_loop<int *, int, int, bool (*)>(FamilyID *first, FamilyID *last, int depth_limit, bool (*comp)(/* parameters unknown */));
void void __unguarded_linear_insert<int *, int, bool (*)>(FamilyID *last, int value, bool (*comp)(/* parameters unknown */));
void void __insertion_sort<int *, bool (*)>(FamilyID *first, FamilyID *last, bool (*comp)(/* parameters unknown */));
void void __unguarded_insertion_sort_aux<int *, int, bool (*)>(FamilyID *first, FamilyID *last, bool (*comp)(/* parameters unknown */));
void void __final_insertion_sort<int *, bool (*)>(FamilyID *first, FamilyID *last, bool (*comp)(/* parameters unknown */));
cXPerson** cXPerson ** find<cXPerson **, cXPerson *>(cXPerson **first, cXPerson **last, cXPerson *&value);
ErrType int ReconSaveObject<cSimulator>(cSimulator *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 version);
void void fill<Neighbor **, Neighbor *>(Neighbor **first, Neighbor **last, Neighbor *&value);
Neighbor** Neighbor ** uninitialized_fill_n<Neighbor **, unsigned int, Neighbor *>(Neighbor **first, unsigned int n, Neighbor *&x);
void vector<Neighbor *, __malloc_alloc_template<0> >::insert(Neighbor **position, unsigned int n, Neighbor *&x);
void void DoPtrVectorStream<Neighbor>(vector<Neighbor *,__malloc_alloc_template<0> > &cont, ReconBuffer *r, SInt32 version);
void Neighborhood::~Neighborhood(int __in_chrg);
void SimpleReconObject<NeighborhoodImpl>::~SimpleReconObject(int __in_chrg);
void SimpleReconObject<ReconStreamPtrVector<Neighbor> >::~SimpleReconObject(int __in_chrg);
void SimpleReconObject<cSimulator>::~SimpleReconObject(int __in_chrg);
void global constructors keyed to Neighborhood::CreateInstance();

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_NEIGHBORHOOD_H

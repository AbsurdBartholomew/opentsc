// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_FAMILY_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_FAMILY_H

struct FamilyMember {
private:
	SInt32 fGUID;
	
public:
	FamilyMember& operator=();
	FamilyMember();
	FamilyMember();
	FamilyMember();
	SInt32 GetGUID();
	void DoStream(ReconBuffer *rb, SInt32 version);
};

struct Family {
	__vtbl_ptr_type *$vf3955;
	
	Family& operator=();
	Family();
protected:
	Family();
	/* vtable[1] */ virtual Family(Family*, int, void);
public:
	/* vtable[2] */ virtual Boolean MyDoCommand();
	/* vtable[3] */ virtual Int CountMembers();
	/* vtable[4] */ virtual FamilyMember* GetIndexedMember();
	/* vtable[5] */ virtual FamilyMember* GetMemberByGUID();
	/* vtable[6] */ virtual bool TestMember();
	/* vtable[7] */ virtual bool TestMember();
	/* vtable[8] */ virtual bool LoadFamily();
	/* vtable[9] */ virtual bool SaveFamily();
	/* vtable[10] */ virtual void DoStream();
	/* vtable[11] */ virtual void GetName();
	/* vtable[12] */ virtual void SetName();
	/* vtable[13] */ virtual void GetExportName();
	/* vtable[14] */ virtual Int GetNumber();
	/* vtable[15] */ virtual Int GetHouseNumber();
	/* vtable[16] */ virtual void SetHouseNumber(Family*, int, void);
	/* vtable[17] */ virtual Int GetCreationOrder();
	/* vtable[18] */ virtual void SetCreationOrder(Family*, int, void);
	/* vtable[19] */ virtual Int GetFunds();
	/* vtable[20] */ virtual void SetFunds(Family*, int, void);
	/* vtable[21] */ virtual Int GetHouseValue();
	/* vtable[22] */ virtual void SetHouseValue(Family*, int, void);
	/* vtable[23] */ virtual Int GetNetWorth();
	/* vtable[24] */ virtual Int GetFriendCount();
	/* vtable[25] */ virtual void SetFriendCount(Family*, int, void);
	/* vtable[26] */ virtual void SetHasPhone();
	/* vtable[27] */ virtual bool GetHasPhone();
	/* vtable[28] */ virtual void SetHasBaby();
	/* vtable[29] */ virtual bool GetHasBaby();
	/* vtable[30] */ virtual void SetNewHouse();
	/* vtable[31] */ virtual bool GetNewHouse();
	/* vtable[32] */ virtual void SetHTMLExportDirty();
	/* vtable[33] */ virtual bool GetHTMLExportDirty();
	/* vtable[34] */ virtual void SetHasExportedHTMLBefore();
	/* vtable[35] */ virtual bool GetHasExportedHTMLBefore();
	static Family* CreateInstance(/* parameters unknown */);
	static void DestroyInstance(/* parameters unknown */);
};

struct vector<FamilyMember,__malloc_alloc_template<0> > {
protected:
	FamilyMember *start;
	FamilyMember *finish;
	FamilyMember *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	FamilyMember* begin();
	FamilyMember* begin();
	FamilyMember* end();
	FamilyMember* end();
	reverse_iterator<FamilyMember *,FamilyMember,FamilyMember &,int> rbegin();
	reverse_iterator<const FamilyMember *,FamilyMember,const FamilyMember &,int> rbegin();
	reverse_iterator<FamilyMember *,FamilyMember,FamilyMember &,int> rend();
	reverse_iterator<const FamilyMember *,FamilyMember,const FamilyMember &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	FamilyMember& operator[]();
	FamilyMember& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<FamilyMember,__malloc_alloc_template<0> >*, int, void);
	vector<FamilyMember,__malloc_alloc_template<0> >& operator=();
	void reserve();
	FamilyMember& front();
	FamilyMember& front();
	FamilyMember& back();
	FamilyMember& back();
	void push_back();
	void swap();
	FamilyMember* insert();
	FamilyMember* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct FamilyImpl : Family {
	BString2 fName;
	Int fNumber;
	Int fHouseNumber;
	Int fCreationOrder;
	Int fFunds;
	Int fHouseValue;
	Int fFriendCount;
	bool fFriendCountDirty;
	vector<FamilyMember,__malloc_alloc_template<0> > fMembers;
	Int fFlags;
	
	FamilyImpl& operator=();
	FamilyImpl(Int number);
	bool LoadByResID(iResFile *file, Int id, SInt32 *version);
	void AddMember(SInt32 guid);
	void RemoveMember(SInt32 guid);
	FamilyImpl();
	/* vtable[1] */ virtual FamilyImpl();
	/* vtable[2] */ virtual Boolean MyDoCommand(SInt16 command, SInt32 info);
	/* vtable[3] */ virtual Int CountMembers();
	/* vtable[4] */ virtual FamilyMember* GetIndexedMember(Int index);
	/* vtable[5] */ virtual FamilyMember* GetMemberByGUID(SInt32 guid);
	/* vtable[6] */ virtual bool TestMember(SInt32 guid);
	/* vtable[7] */ virtual bool TestMember();
	/* vtable[8] */ virtual bool LoadFamily(iResFile *file, Int number);
	/* vtable[9] */ virtual bool SaveFamily(iResFile *file, SInt32 houseVersion);
	/* vtable[10] */ virtual void DoStream(ReconBuffer *rb, SInt32 version);
	/* vtable[11] */ virtual void GetName(StringBuffer2 *name);
	/* vtable[12] */ virtual void SetName(StringBuffer2 *name);
	/* vtable[13] */ virtual void GetExportName(StringBuffer2 *name);
	/* vtable[14] */ virtual Int GetNumber();
	/* vtable[15] */ virtual Int GetHouseNumber();
	/* vtable[16] */ virtual void SetHouseNumber(Int number);
	/* vtable[17] */ virtual Int GetCreationOrder();
	/* vtable[18] */ virtual void SetCreationOrder(Int newOrder);
	/* vtable[19] */ virtual Int GetFunds();
	/* vtable[20] */ virtual void SetFunds(Int funds);
	/* vtable[21] */ virtual Int GetHouseValue();
	/* vtable[22] */ virtual void SetHouseValue(Int houseValue);
	/* vtable[23] */ virtual Int GetNetWorth();
	/* vtable[24] */ virtual Int GetFriendCount();
	/* vtable[25] */ virtual void SetFriendCount(Int friendCount);
	/* vtable[26] */ virtual void SetHasPhone(bool hasPhone);
	/* vtable[27] */ virtual bool GetHasPhone();
	/* vtable[28] */ virtual void SetHasBaby(bool hasBaby);
	/* vtable[29] */ virtual bool GetHasBaby();
	/* vtable[30] */ virtual void SetNewHouse(bool newHouse);
	/* vtable[31] */ virtual bool GetNewHouse();
	/* vtable[32] */ virtual void SetHTMLExportDirty(bool dirty);
	/* vtable[33] */ virtual bool GetHTMLExportDirty();
	/* vtable[34] */ virtual void SetHasExportedHTMLBefore(bool has);
	/* vtable[35] */ virtual bool GetHasExportedHTMLBefore();
};

extern __vtbl_ptr_type SimpleReconObject<FamilyImpl> virtual table[5];
extern __vtbl_ptr_type FamilyImpl virtual table[37];
extern __vtbl_ptr_type Family virtual table[37];

void Family::~Family(int __in_chrg);
void FamilyImpl::~FamilyImpl(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
FamilyMember* FamilyMember * uninitialized_copy<FamilyMember *, FamilyMember *>(FamilyMember *first, FamilyMember *last, FamilyMember *result);
FamilyMember* FamilyMember * copy_backward<FamilyMember *, FamilyMember *>(FamilyMember *first, FamilyMember *last, FamilyMember *result);
void void fill<FamilyMember *, FamilyMember>(FamilyMember *first, FamilyMember *last, FamilyMember &value);
FamilyMember* FamilyMember * uninitialized_fill_n<FamilyMember *, unsigned int, FamilyMember>(FamilyMember *first, unsigned int n, FamilyMember &x);
void vector<FamilyMember, __malloc_alloc_template<0> >::insert(FamilyMember *position, unsigned int n, FamilyMember &x);
void void DoContainerStream<vector<FamilyMember, __malloc_alloc_template<0> >, FamilyMember>(vector<FamilyMember,__malloc_alloc_template<0> > &cont, FamilyMember *dummy, ReconBuffer *r, SInt32 version);
ErrType int ReconLoadObject<FamilyImpl>(FamilyImpl *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 *version);
ErrType int ReconSaveObject<FamilyImpl>(FamilyImpl *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 version);
void vector<FamilyMember, __malloc_alloc_template<0> >::insert_aux(FamilyMember *position, FamilyMember &x);
void SimpleReconObject<FamilyImpl>::~SimpleReconObject(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_FAMILY_H

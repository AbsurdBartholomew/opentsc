// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_OBJECTFOLDER_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_OBJECTFOLDER_H

typedef int SInt32;
typedef HandleNode *MHandle;
typedef StackString<260> FileName;

struct TNodeList<unsigned int> : ENodeList {
	TNodeList(TNodeList<unsigned int>*, int, void);
	TNodeList();
	TNodeList();
	static u32 GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<unsigned int>& operator=();
	void MoveContents();
};

struct ChecksumList : TNodeList<unsigned int> {
};

struct vector<ObjSelector *,__malloc_alloc_template<0> > {
protected:
	ObjSelector **start;
	ObjSelector **finish;
	ObjSelector **end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	ObjSelector** begin();
	ObjSelector** begin();
	ObjSelector** end();
	ObjSelector** end();
	reverse_iterator<ObjSelector **,ObjSelector *,ObjSelector *&,int> rbegin();
	reverse_iterator<ObjSelector *const *,ObjSelector *,ObjSelector *const &,int> rbegin();
	reverse_iterator<ObjSelector **,ObjSelector *,ObjSelector *&,int> rend();
	reverse_iterator<ObjSelector *const *,ObjSelector *,ObjSelector *const &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	ObjSelector*& operator[]();
	ObjSelector*& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<ObjSelector *,__malloc_alloc_template<0> >*, int, void);
	vector<ObjSelector *,__malloc_alloc_template<0> >& operator=();
	void reserve();
	ObjSelector*& front();
	ObjSelector*& front();
	ObjSelector*& back();
	ObjSelector*& back();
	void push_back();
	void swap();
	ObjSelector** insert();
	ObjSelector** insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct GlobalConstantsClient : ConstantsClient {
private:
	SInt16 fID;
	
public:
	GlobalConstantsClient& operator=();
	GlobalConstantsClient(SInt16 id);
	GlobalConstantsClient();
	/* vtable[1] */ virtual iResFile* GetFile();
	/* vtable[2] */ virtual SInt16 GetID();
};

struct StdResFile : SeqResFile {
	StdResFile& operator=();
	StdResFile();
	/* vtable[1] */ virtual StdResFile(StdResFile*, int, void);
	StdResFile();
	/* vtable[2] */ virtual void* _dyncastimpl();
	/* vtable[5] */ virtual ErrType Open();
};

struct ObjResFile : StdResFile {
	ObjResFile& operator=();
	ObjResFile();
	ObjResFile();
	/* vtable[1] */ virtual ObjResFile(ObjResFile*, int, void);
	/* vtable[2] */ virtual void* _dyncastimpl();
	/* vtable[5] */ virtual ErrType Open();
};

extern SInt32 kObjectTypeTableResType;
extern SInt32 kObjectTypeTableResID;
extern __vtbl_ptr_type SimpleReconObject<ObjectFolderImpl> virtual table[5];
extern __vtbl_ptr_type SimpleReconObject<ObjectSaveTypeTable> virtual table[5];
extern __vtbl_ptr_type SimpleReconObject<ThumbnailLoader> virtual table[5];
extern __vtbl_ptr_type SimpleReconObject<UserDataSaveLoad> virtual table[5];
extern __vtbl_ptr_type ObjectFolderImpl::BehaviorFinder virtual table[3];
extern __vtbl_ptr_type ObjectFolderImpl::Commander virtual table[4];
extern __vtbl_ptr_type ObjectFolderImpl virtual table[56];
extern __vtbl_ptr_type GlobalConstantsClient virtual table[5];
extern __vtbl_ptr_type BehaviorFinder virtual table[3];
extern __vtbl_ptr_type ObjectFolder virtual table[55];

u32 StringToHash(char *_name);
void ObjectFolderImpl::~ObjectFolderImpl(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void rb_tree<ResFile *, pair<ResFile *, FileRec>, select1st<pair<ResFile *, FileRec> >, less<ResFile *>, __malloc_alloc_template<0> >::__erase(__rb_tree_node<pair<const ResFile *const,FileRec> > *x);
ObjectTypeAttrBlock** ObjectTypeAttrBlock ** copy_backward<ObjectTypeAttrBlock **, ObjectTypeAttrBlock **>(ObjectTypeAttrBlock **first, ObjectTypeAttrBlock **last, ObjectTypeAttrBlock **result);
ObjectTypeAttrBlock** ObjectTypeAttrBlock ** uninitialized_copy<ObjectTypeAttrBlock **, ObjectTypeAttrBlock **>(ObjectTypeAttrBlock **first, ObjectTypeAttrBlock **last, ObjectTypeAttrBlock **result);
void vector<ObjectTypeAttrBlock *, __malloc_alloc_template<0> >::insert_aux(ObjectTypeAttrBlock **position, ObjectTypeAttrBlock *&x);
void void ReconLoadObject<UserDataSaveLoad>(UserDataSaveLoad *obj, MHandle mem, SInt32 type, SInt32 *version);
void void ReconLoadObject<ThumbnailLoader>(ThumbnailLoader *obj, MHandle mem, SInt32 type, SInt32 *version);
ErrType int ReconSaveObject<UserDataSaveLoad>(UserDataSaveLoad *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 version);
ErrType int ReconSaveObject<ThumbnailLoader>(ThumbnailLoader *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 version);
ErrType int ReconLoadObject<ObjectSaveTypeTable>(ObjectSaveTypeTable *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 *version);
SInt32* int * copy_backward<int *, int *>(SInt32 *first, SInt32 *last, SInt32 *result);
SInt32* int * uninitialized_copy<int *, int *>(SInt32 *first, SInt32 *last, SInt32 *result);
void vector<int, __malloc_alloc_template<0> >::insert_aux(SInt32 *position, SInt32 &x);
ErrType int ReconSaveObject<ObjectSaveTypeTable>(ObjectSaveTypeTable *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 version);
ObjSelector** ObjSelector ** copy_backward<ObjSelector **, ObjSelector **>(ObjSelector **first, ObjSelector **last, ObjSelector **result);
ObjSelector** ObjSelector ** uninitialized_copy<ObjSelector **, ObjSelector **>(ObjSelector **first, ObjSelector **last, ObjSelector **result);
void vector<ObjSelector *, __malloc_alloc_template<0> >::insert_aux(ObjSelector **position, ObjSelector *&x);
ErrType int ReconSaveObject<ObjectFolderImpl>(ObjectFolderImpl *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 version);
ErrType int ReconLoadObject<ObjectFolderImpl>(ObjectFolderImpl *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 *version);
TreeTable* TreeTable * FindRes<TreeTable>(TreeTable *begin, TreeTable *end, int resID);
void ObjectFolder::~ObjectFolder(int __in_chrg);
void SimpleReconObject<UserDataSaveLoad>::~SimpleReconObject(int __in_chrg);
void SimpleReconObject<ThumbnailLoader>::~SimpleReconObject(int __in_chrg);
void SimpleReconObject<ObjectSaveTypeTable>::~SimpleReconObject(int __in_chrg);
void SimpleReconObject<ObjectFolderImpl>::~SimpleReconObject(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_OBJECTFOLDER_H

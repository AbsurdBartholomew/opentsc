// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_OBJECTMODULE_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_OBJECTMODULE_H

struct TreeSim {
private:
	cXObjectImpl *m_pObject;
	cXPersonImpl *m_pPerson;
	cXMTObjectImpl *m_pMTObject;
	cXCursorObjectImpl *m_pCursorObject;
	cXPortalImpl *m_pPortal;
protected:
	static bool sInMainSim;
	static int sMaxIterations;
	IBaseSimInstance *m_pEoRInstance;
	ESim *m_pEoRPerson;
public:
	__vtbl_ptr_type *$vf2674;
	
	TreeSim& operator=();
	TreeSim();
protected:
	TreeSim();
	/* vtable[1] */ virtual TreeSim(TreeSim*, int, void);
	void setObjectImpl(cXObjectImpl *obj);
	void setPersonImpl(cXPersonImpl *obj);
	void setMTObjectImpl(cXMTObjectImpl *obj);
	void setCursorObjectImpl(cXCursorObjectImpl *obj);
	void setPortalImpl(cXPortalImpl *obj);
public:
	void* _dyncastimpl(SCID id);
	/* vtable[2] */ virtual void Initialize();
	/* vtable[3] */ virtual bool Simulate();
	/* vtable[4] */ virtual void SetError();
	/* vtable[5] */ virtual SInt16 GetError();
	/* vtable[6] */ virtual void ClearError();
	/* vtable[7] */ virtual StackElem* GetHighLevelAction();
	/* vtable[8] */ virtual StackElem* GetCurElem();
	/* vtable[9] */ virtual StackElem* GetMainSimElem();
	/* vtable[10] */ virtual StackElem* GetNthElem();
	/* vtable[11] */ virtual SInt16 GetStackSize();
	/* vtable[12] */ virtual SInt16 GetCurrentPrimitive();
	/* vtable[13] */ virtual Int GetIterations();
	/* vtable[14] */ virtual bool GetLastTransition();
	/* vtable[15] */ virtual bool GetLastResult();
	/* vtable[16] */ virtual ISimInstance* GetISimInstance();
	IBaseSimInstance* GetBaseISimInstance();
	void SetISimInstance(IBaseSimInstance *p);
	ESim* GetESimPerson();
	void SetESimPerson(ESim *p);
	static int GetMaxIterations(/* parameters unknown */);
	static void SetMaxIterations(/* parameters unknown */);
	static bool IsExecutingInMainSim(/* parameters unknown */);
};

enum SimFlag {
	kSF_Enabled = 1,
	kSF_Independent = 2,
	kSF_HasError = 4,
	kSF_HasAutonomous = 8
};

// warning: multiple differing types with the same name (type name not equal)
struct vector<int,__malloc_alloc_template<0> > {
protected:
	FamilyID *start;
	FamilyID *finish;
	FamilyID *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	FamilyID* begin();
	FamilyID* begin();
	FamilyID* end();
	FamilyID* end();
	reverse_iterator<int *,int,int &,int> rbegin();
	reverse_iterator<const int *,int,const int &,int> rbegin();
	reverse_iterator<int *,int,int &,int> rend();
	reverse_iterator<const int *,int,const int &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	FamilyID& operator[]();
	FamilyID& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<int,__malloc_alloc_template<0> >*, int, void);
	vector<int,__malloc_alloc_template<0> >& operator=();
	void reserve();
	FamilyID& front();
	FamilyID& front();
	FamilyID& back();
	FamilyID& back();
	void push_back();
	void swap();
	FamilyID* insert();
	FamilyID* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct DialogParam {
	UInt8 cancelStr;
	union {
		UInt8 iconIndex;
		UInt8 iconNameStr;
	};
	UInt8 messageStr;
	UInt8 yesStr;
	UInt8 noStr;
	UInt8 type : 4;
	UInt8 playerIDType : 4;
	UInt8 titleStr;
	UInt8 flags;
	
	DialogParam& operator=();
	DialogParam();
	DialogParam();
	int GetResultTemp();
	void SetResultTemp();
	int GetIconType();
	void SetIconType();
	int GetBehavior();
	void SetBehavior();
	bool GetReturnImmediately();
	bool GetPauseSimulation();
	int GetPlayerType();
	void SetPlayerType();
};

struct vector<cXPersonImpl *,__malloc_alloc_template<0> > {
protected:
	cXPersonImpl **start;
	cXPersonImpl **finish;
	cXPersonImpl **end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	cXPersonImpl** begin();
	cXPersonImpl** begin();
	cXPersonImpl** end();
	cXPersonImpl** end();
	reverse_iterator<cXPersonImpl **,cXPersonImpl *,cXPersonImpl *&,int> rbegin();
	reverse_iterator<cXPersonImpl *const *,cXPersonImpl *,cXPersonImpl *const &,int> rbegin();
	reverse_iterator<cXPersonImpl **,cXPersonImpl *,cXPersonImpl *&,int> rend();
	reverse_iterator<cXPersonImpl *const *,cXPersonImpl *,cXPersonImpl *const &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	cXPersonImpl*& operator[]();
	cXPersonImpl*& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<cXPersonImpl *,__malloc_alloc_template<0> >*, int, void);
	vector<cXPersonImpl *,__malloc_alloc_template<0> >& operator=();
	void reserve();
	cXPersonImpl*& front();
	cXPersonImpl*& front();
	cXPersonImpl*& back();
	cXPersonImpl*& back();
	void push_back();
	void swap();
	cXPersonImpl** insert();
	cXPersonImpl** insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

extern int gAllowVisitorControl;
extern __vtbl_ptr_type SimpleReconObject<ObjectModuleImpl> virtual table[5];
extern __vtbl_ptr_type ObjectModuleImpl::Commander virtual table[4];
extern __vtbl_ptr_type ObjectModuleImpl virtual table[72];
extern __vtbl_ptr_type ObjectModule virtual table[72];

void ObjectModuleImpl::~ObjectModuleImpl(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
ErrType int ReconSaveObject<ObjectModuleImpl>(ObjectModuleImpl *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 version);
ErrType int ReconLoadObject<ObjectModuleImpl>(ObjectModuleImpl *obj, iResFile *file, SInt32 type, SInt16 id, SInt32 *version);
SInt16* short * copy_backward<short *, short *>(SInt16 *first, SInt16 *last, SInt16 *result);
SInt16* short * uninitialized_copy<short *, short *>(SInt16 *first, SInt16 *last, SInt16 *result);
void vector<short, __malloc_alloc_template<0> >::insert_aux(SInt16 *position, SInt16 &x);
cXObjectImpl** cXObjectImpl ** uninitialized_copy<cXObjectImpl **, cXObjectImpl **>(cXObjectImpl **first, cXObjectImpl **last, cXObjectImpl **result);
cXObjectImpl** cXObjectImpl ** copy_backward<cXObjectImpl **, cXObjectImpl **>(cXObjectImpl **first, cXObjectImpl **last, cXObjectImpl **result);
void void fill<cXObjectImpl **, cXObjectImpl *>(cXObjectImpl **first, cXObjectImpl **last, cXObjectImpl *&value);
cXObjectImpl** cXObjectImpl ** uninitialized_fill_n<cXObjectImpl **, unsigned int, cXObjectImpl *>(cXObjectImpl **first, unsigned int n, cXObjectImpl *&x);
void vector<cXObjectImpl *, __malloc_alloc_template<0> >::insert(cXObjectImpl **position, unsigned int n, cXObjectImpl *&x);
void vector<cXObjectImpl *, __malloc_alloc_template<0> >::insert_aux(cXObjectImpl **position, cXObjectImpl *&x);
int* int * copy_backward<int *, int *>(int *first, int *last, int *result);
int* int * uninitialized_copy<int *, int *>(int *first, int *last, int *result);
void vector<int, __malloc_alloc_template<0> >::insert_aux(int *position, int &x);
cXPersonImpl** cXPersonImpl ** copy_backward<cXPersonImpl **, cXPersonImpl **>(cXPersonImpl **first, cXPersonImpl **last, cXPersonImpl **result);
cXPersonImpl** cXPersonImpl ** uninitialized_copy<cXPersonImpl **, cXPersonImpl **>(cXPersonImpl **first, cXPersonImpl **last, cXPersonImpl **result);
void vector<cXPersonImpl *, __malloc_alloc_template<0> >::insert_aux(cXPersonImpl **position, cXPersonImpl *&x);
cXPortal** cXPortal ** copy_backward<cXPortal **, cXPortal **>(cXPortal **first, cXPortal **last, cXPortal **result);
cXPortal** cXPortal ** uninitialized_copy<cXPortal **, cXPortal **>(cXPortal **first, cXPortal **last, cXPortal **result);
void vector<cXPortal *, __malloc_alloc_template<0> >::insert_aux(cXPortal **position, cXPortal *&x);
void ObjectModule::~ObjectModule(int __in_chrg);
void SimpleReconObject<ObjectModuleImpl>::~SimpleReconObject(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_OBJECTMODULE_H

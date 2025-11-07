// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_TREESIM_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_TREESIM_H

typedef unsigned int UInt;

struct StackElem {
	SInt16 fTreeID;
	SInt16 fNodeNum;
	SInt16 fObjectID;
	UInt8 fNumLocalVars;
	UInt8 fNumParams;
	SInt32 fPrimState;
	Behavior *fBehavior;
	UInt32 _vars;
	
	StackElem& operator=();
	StackElem();
	StackElem();
	SInt16 GetTreeID();
	void SetTreeID(SInt16 treeID);
	int GetBreak();
	void SetBreak(int brk);
	StdPrm* GetParams();
	StdPrm* GetLocals();
	UInt GetSize();
	StackElem* NextFrame();
	void Setup(StackElem *other, StdPrm *params);
	void GetTreeName(StringBuffer &str);
	void ReconStream(ReconBuffer *r, SInt32 version, BehaviorFinder *bLoader);
};

enum NodeAction {
	kNA_Continue = 0,
	kNA_TickFinished = 1,
	kNA_StopSim = 2
};

struct vector<StackElem *,__malloc_alloc_template<0> > {
protected:
	StackElem **start;
	StackElem **finish;
	StackElem **end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	StackElem** begin();
	StackElem** begin();
	StackElem** end();
	StackElem** end();
	reverse_iterator<StackElem **,StackElem *,StackElem *&,int> rbegin();
	reverse_iterator<StackElem *const *,StackElem *,StackElem *const &,int> rbegin();
	reverse_iterator<StackElem **,StackElem *,StackElem *&,int> rend();
	reverse_iterator<StackElem *const *,StackElem *,StackElem *const &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	StackElem*& operator[]();
	StackElem*& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<StackElem *,__malloc_alloc_template<0> >*, int, void);
	vector<StackElem *,__malloc_alloc_template<0> >& operator=();
	void reserve();
	StackElem*& front();
	StackElem*& front();
	StackElem*& back();
	StackElem*& back();
	void push_back();
	void swap();
	StackElem** insert();
	StackElem** insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct TreeStack {
private:
	char *fStart;
	char *fFinish;
	vector<StackElem *,__malloc_alloc_template<0> > fFrames;
	TreeSimImpl &fTreeSim;
	
public:
	TreeStack& operator=();
	TreeStack(TreeSimImpl &treeSim);
private:
	StackElem* MakeNewFrame(UInt32 newFrameSize);
	StackElem* GetNewFrame();
	SInt32 GetMemUsed();
	SInt32 GetMemReserved();
	void AssignFrames(SInt32 numFrames);
public:
	TreeStack();
	TreeStack();
	void Initialize(Int maxStackSize);
	void Push(StackElem *newFrame, StdPrm *params);
	void Pop();
	void Reset();
	StackElem* GetNthFrame(Int n);
	Int GetStackSize();
	void ReconStream(ReconBuffer *r, SInt32 version, BehaviorFinder *bLoader);
};

struct BehaviorFinder {
	__vtbl_ptr_type *$vf1143;
	
	BehaviorFinder& operator=();
	BehaviorFinder();
	BehaviorFinder();
	/* vtable[1] */ virtual void ReconBehavior();
};

extern bool TreeSim::sInMainSim;
extern int TreeSim::sMaxIterations;
extern __vtbl_ptr_type TreeSimImpl virtual table[6];
extern __vtbl_ptr_type TreeSimImpl::TreeSim virtual table[18];
extern __vtbl_ptr_type TreeSim virtual table[18];

void TreeStack::~TreeStack(int __in_chrg);
void TreeSim::~TreeSim(int __in_chrg);
void TreeSimImpl::~TreeSimImpl(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
StackElem** StackElem ** uninitialized_copy<StackElem **, StackElem **>(StackElem **first, StackElem **last, StackElem **result);
StackElem** StackElem ** copy_backward<StackElem **, StackElem **>(StackElem **first, StackElem **last, StackElem **result);
void vector<StackElem *, __malloc_alloc_template<0> >::insert_aux(StackElem **position, StackElem *&x);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_TREESIM_H

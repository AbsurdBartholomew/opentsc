// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_BEHAVIOR_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_BEHAVIOR_H

typedef short int SInt16;
typedef short int BehaviorNodeParam[4];

struct BehaviorNode {
	SInt16 _treePrimID;
	UInt8 trueTrans;
	UInt8 falseTrans;
	BehaviorNodeParam param;
	
	BehaviorNode& operator=();
	BehaviorNode();
	BehaviorNode();
	SInt16 GetTreeID();
	SInt16 GetPrimCode();
	bool GetBreak();
};

struct VECTOR<BehaviorNode> {
private:
	BehaviorNode *pData;
	
public:
	VECTOR<BehaviorNode>& operator=();
	VECTOR();
	VECTOR();
	int size();
	BehaviorNode& operator[]();
	BehaviorNode& operator[]();
	BehaviorNode* begin();
	BehaviorNode* end();
	BehaviorNode* begin();
	BehaviorNode* end();
};

struct BehaviorTree {
	char *name;
	SInt16 resID;
	UInt8 type;
	UInt8 numParams;
	UInt8 numLocals;
	UInt16 treeVersion;
	VECTOR<BehaviorNode> nodes;
};

struct VECTOR<short int> {
private:
	StdPrm *pData;
	
public:
	VECTOR<short int>& operator=();
	VECTOR();
	VECTOR();
	int size();
	StdPrm& operator[]();
	StdPrm& operator[]();
	StdPrm* begin();
	StdPrm* end();
	StdPrm* begin();
	StdPrm* end();
};

struct BehaviorConstants {
	SInt32 resID;
	VECTOR<short int> values;
	
	BehaviorConstants& operator=();
	BehaviorConstants();
	BehaviorConstants();
	SInt32 CountValues();
};

struct Behavior {
protected:
	iResFile *fGlobFile;
	iResFile *fMiddleFile;
	ObjSelector *fOwner;
	Language *fLanguage;
	SwizzleProc fSwizzler;
public:
	__vtbl_ptr_type *$vf881;
	
	Behavior& operator=();
	Behavior(Language *lang, iResFile *globFile, ObjSelector *pOwner, iResFile *semiGlobFile);
	Behavior();
	/* vtable[1] */ virtual Behavior(Behavior*, int, void);
	BehaviorTree* GetTree(SInt16 treeID);
	BehaviorConstants* GetConstants(SInt16 id, bool useOverride);
	SInt32 GetCumulativeTreeVersion(SInt16 inTreeID);
	bool GetNode(SInt16 treeID, SInt16 nodeNum, BehaviorNode *nodeSpace);
	BehaviorNode* GetNodeRef(SInt16 treeID, SInt16 nodeNum);
	bool IsNodeReachable(SInt16 treeID, int nodeNum);
	SInt16 GetTreeIDByName(char *treeName);
	SInt16 GetTreeIDByNameFast(char *treeName);
	bool IsSingleExit(SInt16 treeID, SInt16 nodeNum);
	void GetNodeText(SInt16 treeID, SInt16 nodeNum, StringBuffer &str);
	void GetNodeText();
	void GetTreeName(SInt16 treeID, StringBuffer &name);
	void GetConstantsName(SInt16 id, StringBuffer &name);
	SInt16 CountPrimitives();
	Language* GetLanguage();
	iResFile* GetPrivFile();
	iResFile* GetGlobFile();
	iResFile* GetMiddleFile();
	iResFile* GetSemiGlobalFile();
	void SetSemiGlobalFile(iResFile *newFile);
	SInt16 CountNodes(SInt16 treeID);
	/* vtable[2] */ virtual iResFile* GetResFile(SInt16 treeID);
	iResFile* GetResFileByClass(SInt16 treeClass);
	static SInt16 GetBaseID(/* parameters unknown */);
	static SInt16 GetMaxID(/* parameters unknown */);
	static SInt16 GetTreeClass(/* parameters unknown */);
	static void GetClassName(/* parameters unknown */);
	static void StdTreeSwizzle(/* parameters unknown */);
	static void SwizzleConstants(/* parameters unknown */);
	static bool IsDefaultParam(/* parameters unknown */);
	static void SetDefaultParam(/* parameters unknown */);
	void Print();
	static void InitBreakpoints(/* parameters unknown */);
	static void SaveBreakpoints(/* parameters unknown */);
	void RefreshBreakpoints();
	void SetBreakpoint();
	static void SwizzleTreeParams(/* parameters unknown */);
};

struct Language {
	__vtbl_ptr_type *$vf1108;
	
	Language& operator=();
	Language();
	Language();
	/* vtable[1] */ virtual Language(Language*, int, void);
	/* vtable[2] */ virtual void GetTreeTypeName();
	/* vtable[3] */ virtual void GetNodeText();
	/* vtable[4] */ virtual void GetPrimName();
	/* vtable[5] */ virtual SInt16 CountPrimitives();
	/* vtable[6] */ virtual bool IsSingleExit(BehaviorNode *node);
	/* vtable[7] */ virtual SwizzleProc GetSwizzler();
};

struct vector<short int,__malloc_alloc_template<0> > {
protected:
	SInt16 *start;
	SInt16 *finish;
	SInt16 *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	SInt16* begin();
	SInt16* begin();
	SInt16* end();
	SInt16* end();
	reverse_iterator<short int *,short int,short int &,int> rbegin();
	reverse_iterator<const short int *,short int,const short int &,int> rbegin();
	reverse_iterator<short int *,short int,short int &,int> rend();
	reverse_iterator<const short int *,short int,const short int &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	SInt16& operator[]();
	SInt16& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<short int,__malloc_alloc_template<0> >*, int, void);
	vector<short int,__malloc_alloc_template<0> >& operator=();
	void reserve();
	SInt16& front();
	SInt16& front();
	SInt16& back();
	SInt16& back();
	void push_back();
	void swap();
	SInt16* insert();
	SInt16* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

extern __vtbl_ptr_type Behavior virtual table[4];
extern __vtbl_ptr_type Language virtual table[9];

void Language::~Language(int __in_chrg);
void Behavior::~Behavior(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
SInt16* short * copy_backward<short *, short *>(SInt16 *first, SInt16 *last, SInt16 *result);
SInt16* short * uninitialized_copy<short *, short *>(SInt16 *first, SInt16 *last, SInt16 *result);
void vector<short, __malloc_alloc_template<0> >::insert_aux(SInt16 *position, SInt16 &x);
SInt16* short * find<short *, short>(SInt16 *first, SInt16 *last, SInt16 &value);
BehaviorTree* BehaviorTree * FindRes<BehaviorTree>(BehaviorTree *begin, BehaviorTree *end, int resID);
BehaviorConstants* BehaviorConstants * FindRes<BehaviorConstants>(BehaviorConstants *begin, BehaviorConstants *end, int resID);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_BEHAVIOR_H

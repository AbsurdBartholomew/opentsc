// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_DATASTRUC_E_FLOATTREE_H
#define C__EOR_SRC2_COMMON_DATASTRUC_E_FLOATTREE_H

typedef u32 FTValue;
typedef FTIteratorPtrType *FTIterator;

enum FTNodeColor {
	FT_BLACK = 0,
	FT_RED = 1
};

struct EFloatTreeNode {
	EFloatTreeNode *pLeft;
	EFloatTreeNode *pRight;
	EFloatTreeNode *pParent;
	EFloatTreeNode *pLast;
	EFloatTreeNode *pNext;
	FTNodeColor color;
	FTValue value;
	float key;
	
	EFloatTreeNode& operator=();
	EFloatTreeNode();
	EFloatTreeNode();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
};

struct EFloatTreeSentinel {
	EFloatTreeNode *pLeft;
	EFloatTreeNode *pRight;
	EFloatTreeNode *pParent;
	EFloatTreeNode *pLast;
	EFloatTreeNode *pNext;
	FTNodeColor color;
	FTValue value;
	unsigned char key[4];
};

typedef TLinkedList<EFloatTreeNode,12,16> EFloatTreeNodeList;

struct EFloatTree {
protected:
	EFloatTreeNodeList m_list;
	EFloatTreeNode *m_pRoot;
	static EFloatTreeSentinel m_sentinel;
	
public:
	EFloatTree(EFloatTree &s);
	EFloatTree();
	EFloatTree(EFloatTree*, int, void);
	static bool IsValid(/* parameters unknown */);
	EFloatTree& operator=(EFloatTree &s);
	bool operator==(EFloatTree &s);
	FTValue operator[](float key);
	FTValue& operator[]();
	FTIterator Insert(float key, FTValue value, bool allowDuplicates);
	FTIterator Find(float key, FTValue *pOutValue);
	bool Remove(FTIterator i);
	void Remove();
	void RemoveAll();
	static FTIterator Last(/* parameters unknown */);
	static FTIterator Next(/* parameters unknown */);
	FTIterator Head();
	FTIterator Tail();
	bool IsEmpty();
	FTIterator SetValue(float key, FTValue value);
	static void SetValue(/* parameters unknown */);
	void SetValues(EFloatTree &s, bool allowDuplicates);
	static float GetKey(/* parameters unknown */);
	static FTValue GetValue(/* parameters unknown */);
	int GetSize();
	EFloatTreeNodeList* GetList();
protected:
	void Init();
	void RotateLeft(EFloatTreeNode *x);
	void RotateRight(EFloatTreeNode *x);
	void InsertFixup(EFloatTreeNode *x);
	void RemoveFixup(EFloatTreeNode *x);
	EFloatTreeNode* FindKeyOrParent(float key);
	EFloatTreeNode* FindParent(float key);
	FTIterator InsertAt(EFloatTreeNode *pParent, float key, FTValue value);
};

extern EFloatTreeSentinel EFloatTree::m_sentinel;


#endif // C__EOR_SRC2_COMMON_DATASTRUC_E_FLOATTREE_H

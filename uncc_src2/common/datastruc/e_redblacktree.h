// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_DATASTRUC_E_REDBLACKTREE_H
#define C__EOR_SRC2_COMMON_DATASTRUC_E_REDBLACKTREE_H

typedef u32 RBKey;
typedef u32 RBValue;
typedef RBIteratorPtrType *RBIterator;

enum RBNodeColor {
	RB_BLACK = 0,
	RB_RED = 1
};

struct ERedBlackTreeNode {
	ERedBlackTreeNode *pLeft;
	ERedBlackTreeNode *pRight;
	ERedBlackTreeNode *pParent;
	ERedBlackTreeNode *pLast;
	ERedBlackTreeNode *pNext;
	RBNodeColor color;
	RBKey key;
	RBValue value;
	
	ERedBlackTreeNode& operator=();
	ERedBlackTreeNode();
	ERedBlackTreeNode();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
};

typedef TLinkedList<ERedBlackTreeNode,12,16> ERedBlackTreeNodeList;

struct ERedBlackTree {
protected:
	ERedBlackTreeNodeList m_list;
	ERedBlackTreeNode *m_pRoot;
	static ERedBlackTreeNode m_sentinel;
	
public:
	ERedBlackTree(ERedBlackTree &s);
	ERedBlackTree();
	ERedBlackTree(ERedBlackTree*, int, void);
	static bool IsValid(/* parameters unknown */);
	ERedBlackTree& operator=(ERedBlackTree &s);
	bool operator==(ERedBlackTree &s);
	bool operator!=();
	RBValue operator[](RBKey key);
	RBValue& operator[]();
	RBIterator Insert(RBKey key, RBValue value, bool allowDuplicates);
	RBIterator Find(RBKey key, RBValue *pOutValue);
	RBIterator FindFirst(RBKey key, RBValue *pOutValue);
	RBIterator FindNext(RBIterator i, RBValue *pOutValue);
	bool Remove(RBIterator i);
	void Remove();
	void RemoveAll();
	void FreeAll();
	static RBIterator Last(/* parameters unknown */);
	static RBIterator Next(/* parameters unknown */);
	RBIterator Head();
	RBIterator Tail();
	bool IsEmpty();
	RBIterator SetValue(RBKey key, RBValue value);
	static void SetValue(/* parameters unknown */);
	void SetValues(ERedBlackTree &s, bool allowDuplicates);
	static RBKey GetKey(/* parameters unknown */);
	static RBValue GetValue(/* parameters unknown */);
	int GetSize();
	ERedBlackTreeNodeList* GetList();
protected:
	void Init();
	void RotateLeft(ERedBlackTreeNode *x);
	void RotateRight(ERedBlackTreeNode *x);
	void InsertFixup(ERedBlackTreeNode *x);
	void RemoveFixup(ERedBlackTreeNode *x);
	ERedBlackTreeNode* FindKeyOrParent(RBKey key);
	ERedBlackTreeNode* FindParent(RBKey key);
	RBIterator InsertAt(ERedBlackTreeNode *pParent, RBKey key, RBValue value);
};

extern ERedBlackTreeNode ERedBlackTree::m_sentinel;


#endif // C__EOR_SRC2_COMMON_DATASTRUC_E_REDBLACKTREE_H

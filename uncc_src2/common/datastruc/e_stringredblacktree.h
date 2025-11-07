// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_DATASTRUC_E_STRINGREDBLACKTREE_H
#define C__EOR_SRC2_COMMON_DATASTRUC_E_STRINGREDBLACKTREE_H

typedef u32 SRBValue;
typedef SRBIteratorPtrType *SRBIterator;

enum SRBNodeColor {
	SRB_BLACK = 0,
	SRB_RED = 1
};

struct EStringRedBlackTreeNode {
	EStringRedBlackTreeNode *pLeft;
	EStringRedBlackTreeNode *pRight;
	EStringRedBlackTreeNode *pParent;
	EStringRedBlackTreeNode *pLast;
	EStringRedBlackTreeNode *pNext;
	SRBNodeColor color;
	SRBValue value;
	EString key;
	
	EStringRedBlackTreeNode& operator=();
	EStringRedBlackTreeNode();
	EStringRedBlackTreeNode();
	EStringRedBlackTreeNode(EStringRedBlackTreeNode*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
};

struct EStringRedBlackTreeSentinel {
	EStringRedBlackTreeNode *pLeft;
	EStringRedBlackTreeNode *pRight;
	EStringRedBlackTreeNode *pParent;
	EStringRedBlackTreeNode *pLast;
	EStringRedBlackTreeNode *pNext;
	SRBNodeColor color;
	SRBValue value;
	unsigned char key[4];
};

typedef TLinkedList<EStringRedBlackTreeNode,12,16> EStringRedBlackTreeNodeList;

struct EStringRedBlackTree {
protected:
	EStringRedBlackTreeNodeList m_list;
	EStringRedBlackTreeNode *m_pRoot;
	static EStringRedBlackTreeSentinel m_sentinel;
	
public:
	EStringRedBlackTree(EStringRedBlackTree &s);
	EStringRedBlackTree();
	EStringRedBlackTree(EStringRedBlackTree*, int, void);
	static bool IsValid(/* parameters unknown */);
	EStringRedBlackTree& operator=(EStringRedBlackTree &s);
	bool operator==(EStringRedBlackTree &s);
	bool operator!=();
	SRBValue operator[](char *key);
	SRBValue& operator[]();
	SRBIterator Insert(char *key, SRBValue value, bool allowDuplicates);
	SRBIterator Find(char *key, SRBValue *pOutValue);
	SRBIterator FindFirst(char *key, SRBValue *pOutValue);
	SRBIterator FindNext(SRBIterator i, SRBValue *pOutValue);
	bool Remove(SRBIterator i);
	void Remove();
	void RemoveAll();
	void FreeAll();
	static SRBIterator Last(/* parameters unknown */);
	static SRBIterator Next(/* parameters unknown */);
	SRBIterator Head();
	SRBIterator Tail();
	bool IsEmpty();
	SRBIterator SetValue(char *key, SRBValue value);
	static void SetValue(/* parameters unknown */);
	void SetValues(EStringRedBlackTree &s, bool allowDuplicates);
	static EString& GetKey(/* parameters unknown */);
	static SRBValue GetValue(/* parameters unknown */);
	int GetSize();
	EStringRedBlackTreeNodeList* GetList();
protected:
	void Init();
	void RotateLeft(EStringRedBlackTreeNode *x);
	void RotateRight(EStringRedBlackTreeNode *x);
	void InsertFixup(EStringRedBlackTreeNode *x);
	void RemoveFixup(EStringRedBlackTreeNode *x);
	EStringRedBlackTreeNode* FindKeyOrParent(char *key);
	EStringRedBlackTreeNode* FindParent(char *key);
	SRBIterator InsertAt(EStringRedBlackTreeNode *pParent, char *key, SRBValue value);
};

extern EStringRedBlackTreeSentinel EStringRedBlackTree::m_sentinel;


#endif // C__EOR_SRC2_COMMON_DATASTRUC_E_STRINGREDBLACKTREE_H

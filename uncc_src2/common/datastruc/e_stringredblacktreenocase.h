// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_DATASTRUC_E_STRINGREDBLACKTREENOCASE_H
#define C__EOR_SRC2_COMMON_DATASTRUC_E_STRINGREDBLACKTREENOCASE_H

typedef u32 SRBNCValue;
typedef SRBNCIteratorPtrType *SRBNCIterator;

enum SRBNCNodeColor {
	SRBNC_BLACK = 0,
	SRBNC_RED = 1
};

struct EStringRedBlackTreeNoCaseNoCaseNode {
	EStringRedBlackTreeNoCaseNoCaseNode *pLeft;
	EStringRedBlackTreeNoCaseNoCaseNode *pRight;
	EStringRedBlackTreeNoCaseNoCaseNode *pParent;
	EStringRedBlackTreeNoCaseNoCaseNode *pLast;
	EStringRedBlackTreeNoCaseNoCaseNode *pNext;
	SRBNCNodeColor color;
	SRBNCValue value;
	EString key;
	
	EStringRedBlackTreeNoCaseNoCaseNode& operator=();
	EStringRedBlackTreeNoCaseNoCaseNode();
	EStringRedBlackTreeNoCaseNoCaseNode();
	EStringRedBlackTreeNoCaseNoCaseNode(EStringRedBlackTreeNoCaseNoCaseNode*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
};

struct EStringRedBlackTreeNoCaseNoCaseSentinel {
	EStringRedBlackTreeNoCaseNoCaseNode *pLeft;
	EStringRedBlackTreeNoCaseNoCaseNode *pRight;
	EStringRedBlackTreeNoCaseNoCaseNode *pParent;
	EStringRedBlackTreeNoCaseNoCaseNode *pLast;
	EStringRedBlackTreeNoCaseNoCaseNode *pNext;
	SRBNCNodeColor color;
	SRBNCValue value;
	unsigned char key[4];
};

typedef TLinkedList<EStringRedBlackTreeNoCaseNoCaseNode,12,16> EStringRedBlackTreeNoCaseNoCaseNodeList;

struct EStringRedBlackTreeNoCase {
protected:
	EStringRedBlackTreeNoCaseNoCaseNodeList m_list;
	EStringRedBlackTreeNoCaseNoCaseNode *m_pRoot;
	static EStringRedBlackTreeNoCaseNoCaseSentinel m_sentinel;
	
public:
	EStringRedBlackTreeNoCase(EStringRedBlackTreeNoCase &s);
	EStringRedBlackTreeNoCase();
	EStringRedBlackTreeNoCase(EStringRedBlackTreeNoCase*, int, void);
	static bool IsValid(/* parameters unknown */);
	EStringRedBlackTreeNoCase& operator=(EStringRedBlackTreeNoCase &s);
	bool operator==(EStringRedBlackTreeNoCase &s);
	bool operator!=();
	SRBNCValue operator[](char *key);
	SRBNCValue& operator[]();
	SRBNCIterator Insert(char *key, SRBNCValue value, bool allowDuplicates);
	SRBNCIterator Find(char *key, SRBNCValue *pOutValue);
	SRBNCIterator FindFirst(char *key, SRBNCValue *pOutValue);
	SRBNCIterator FindNext(SRBNCIterator i, SRBNCValue *pOutValue);
	bool Remove(SRBNCIterator i);
	void Remove();
	void RemoveAll();
	void FreeAll();
	static SRBNCIterator Last(/* parameters unknown */);
	static SRBNCIterator Next(/* parameters unknown */);
	SRBNCIterator Head();
	SRBNCIterator Tail();
	bool IsEmpty();
	SRBNCIterator SetValue(char *key, SRBNCValue value);
	static void SetValue(/* parameters unknown */);
	void SetValues(EStringRedBlackTreeNoCase &s, bool allowDuplicates);
	static EString& GetKey(/* parameters unknown */);
	static SRBNCValue GetValue(/* parameters unknown */);
	int GetSize();
	EStringRedBlackTreeNoCaseNoCaseNodeList* GetList();
protected:
	void Init();
	void RotateLeft(EStringRedBlackTreeNoCaseNoCaseNode *x);
	void RotateRight(EStringRedBlackTreeNoCaseNoCaseNode *x);
	void InsertFixup(EStringRedBlackTreeNoCaseNoCaseNode *x);
	void RemoveFixup(EStringRedBlackTreeNoCaseNoCaseNode *x);
	EStringRedBlackTreeNoCaseNoCaseNode* FindKeyOrParent(char *key);
	EStringRedBlackTreeNoCaseNoCaseNode* FindParent(char *key);
	SRBNCIterator InsertAt(EStringRedBlackTreeNoCaseNoCaseNode *pParent, char *key, SRBNCValue value);
};

extern EStringRedBlackTreeNoCaseNoCaseSentinel EStringRedBlackTreeNoCase::m_sentinel;


#endif // C__EOR_SRC2_COMMON_DATASTRUC_E_STRINGREDBLACKTREENOCASE_H

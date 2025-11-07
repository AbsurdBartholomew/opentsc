// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_DATASTRUC_E_STRINGTABLENOCASE_H
#define C__EOR_SRC2_COMMON_DATASTRUC_E_STRINGTABLENOCASE_H

typedef u32 STNCValue;
typedef STNCIteratorPtrType *STNCIterator;

struct EStringTableNoCaseNode {
	EStringTableNoCaseNode *pListLast;
	EStringTableNoCaseNode *pListNext;
	EStringTableNoCaseNode *pEntryNext;
	EString key;
	STNCValue value;
	
	EStringTableNoCaseNode& operator=();
	EStringTableNoCaseNode();
	EStringTableNoCaseNode();
	EStringTableNoCaseNode(EStringTableNoCaseNode*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
};

typedef TLinkedList<EStringTableNoCaseNode,0,4> EStringTableNoCaseNodeList;

struct EStringTableNoCase {
protected:
	EStringTableNoCaseNodeList m_list;
	EStringTableNoCaseNode **m_table;
	u32 m_tableSize;
	u32 m_tableMask;
	u32 m_nNodes;
	
public:
	EStringTableNoCase(EStringTableNoCase &s);
	EStringTableNoCase();
	EStringTableNoCase(EStringTableNoCase*, int, void);
	static bool IsValid(/* parameters unknown */);
	EStringTableNoCase& operator=(EStringTableNoCase &s);
	bool operator==(EStringTableNoCase &s);
	bool operator!=();
	STNCValue operator[](char *szKey);
	STNCValue& operator[]();
	STNCIterator Insert(char *szKey, STNCValue value);
	STNCIterator Find(u32 hash, char *szKey);
	bool Remove(u32 hash, STNCIterator i);
	void Remove();
	void RemoveAll();
	void FreeAll();
	static STNCIterator Last(/* parameters unknown */);
	static STNCIterator Next(/* parameters unknown */);
	STNCIterator Head();
	STNCIterator Tail();
	bool IsEmpty();
	STNCIterator SetValue(char *szKey, STNCValue value);
	static void SetValue(/* parameters unknown */);
	void SetValues(EStringTableNoCase &s);
	static char* GetKey(/* parameters unknown */);
	static STNCValue GetValue(/* parameters unknown */);
	int GetSize();
	EStringTableNoCaseNodeList* GetList();
protected:
	u32 Hash(char *szKey);
	void InitTable(int tableSize);
	void ClearTable();
	STNCIterator Find();
	STNCIterator InsertNew(u32 hash, char *szKey, STNCValue value);
	void Remove();
	void GrowTable();
};

void EStringTableNoCase::~EStringTableNoCase(int __in_chrg);

#endif // C__EOR_SRC2_COMMON_DATASTRUC_E_STRINGTABLENOCASE_H

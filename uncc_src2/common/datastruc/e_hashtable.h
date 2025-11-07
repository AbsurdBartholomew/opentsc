// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_DATASTRUC_E_HASHTABLE_H
#define C__EOR_SRC2_COMMON_DATASTRUC_E_HASHTABLE_H

typedef u32 HTKey;
typedef u32 HTValue;
typedef HTIteratorPtrType *HTIterator;

struct EHashTableNode {
	EHashTableNode *pListLast;
	EHashTableNode *pListNext;
	EHashTableNode *pEntryNext;
	HTKey key;
	HTValue value;
	
	EHashTableNode& operator=();
	EHashTableNode();
	EHashTableNode();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
};

typedef TLinkedList<EHashTableNode,0,4> EHashTableNodeList;

struct EHashTable {
protected:
	EHashTableNodeList m_list;
	EHashTableNode **m_table;
	u32 m_tableSize;
	
public:
	EHashTable(EHashTable &s);
	EHashTable();
	EHashTable(EHashTable*, int, void);
	void SetTableSize(int tableSize);
	void AutoSizeTable();
	int GetTableSize();
	static bool IsValid(/* parameters unknown */);
	EHashTable& operator=(EHashTable &s);
	bool operator==(EHashTable &s);
	HTValue operator[](HTKey key);
	HTValue& operator[]();
	HTIterator Insert(HTKey key, HTValue value);
	HTIterator Find(u32 hash, HTKey key);
	bool Remove(u32 hash, HTIterator i);
	void Remove();
	void RemoveAll();
	void FreeAll();
	static HTIterator Last(/* parameters unknown */);
	static HTIterator Next(/* parameters unknown */);
	HTIterator Head();
	HTIterator Tail();
	bool IsEmpty();
	HTIterator SetValue(HTKey key, HTValue value);
	static void SetValue(/* parameters unknown */);
	void SetValues(EHashTable &s);
	static HTKey GetKey(/* parameters unknown */);
	static HTValue GetValue(/* parameters unknown */);
	int GetSize();
	EHashTableNodeList* GetList();
protected:
	u32 Hash();
	void InitTable(int tableSize);
	void ClearTable();
	HTIterator Find();
	HTIterator InsertNew(u32 hash, HTKey key, HTValue value);
	void Remove();
};

void EHashTable::~EHashTable(int __in_chrg);

#endif // C__EOR_SRC2_COMMON_DATASTRUC_E_HASHTABLE_H

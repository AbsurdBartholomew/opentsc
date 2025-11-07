// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_DATASTRUC_E_NODELIST_H
#define C__EOR_SRC2_COMMON_DATASTRUC_E_NODELIST_H

typedef u32 NLData;
typedef TLinkedList<ENodeListNode,4,8> ENodeListList;

struct ENodeList {
protected:
	ENodeListList m_l;
	
public:
	ENodeList& operator=();
	ENodeList();
	ENodeList();
	ENodeList(ENodeList*, int, void);
	static NLIterator Last(/* parameters unknown */);
	static NLIterator Next(/* parameters unknown */);
	static bool IsValid(/* parameters unknown */);
	static NLData GetData(/* parameters unknown */);
	NLIterator Head();
	NLIterator Tail();
	bool IsEmpty();
	void Init();
	NLIterator Search(NLData data);
	void Remove(NLIterator i);
	void RemoveAll();
	void FreeAll();
	NLIterator AddHead(ENodeList &list);
	NLIterator AddTail(ENodeList &list);
	void AddHead();
	void AddTail();
	NLIterator InsertBefore(NLIterator target, NLData data);
	NLIterator InsertAfter(NLIterator target, NLData data);
	int GetSize();
	int GetCount();
	void MoveContents(ENodeList &source);
};

#endif // C__EOR_SRC2_COMMON_DATASTRUC_E_NODELIST_H

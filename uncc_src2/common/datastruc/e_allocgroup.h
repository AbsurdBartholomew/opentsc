// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_DATASTRUC_E_ALLOCGROUP_H
#define C__EOR_SRC2_COMMON_DATASTRUC_E_ALLOCGROUP_H

struct TNodeList<void *> : ENodeList {
	TNodeList(TNodeList<void *>*, int, void);
	TNodeList();
	TNodeList();
	static void* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<void *>& operator=();
	void MoveContents();
};

struct EAllocGroup {
protected:
	TNodeList<void *> m_allocList;
	int m_pos;
	
public:
	EAllocGroup& operator=();
	EAllocGroup();
	EAllocGroup();
	EAllocGroup(EAllocGroup*, int, void);
	void* Alloc(unsigned int size, int alignment);
	void DeallocateAll();
	void AllocExternal();
	bool IsEmpty();
	bool JustOneAllocation();
	void MoveContents(EAllocGroup &source);
	void RemoveAllocExternal(void *pData);
	void Validate();
};

#endif // C__EOR_SRC2_COMMON_DATASTRUC_E_ALLOCGROUP_H

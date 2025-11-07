// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_E_VRAMMAN_H
#define C__EOR_SRC2_ENGINE_E_VRAMMAN_H

struct TGrowPool<EVramEntry> : EGrowPool {
	TGrowPool<EVramEntry>& operator=();
	TGrowPool();
	TGrowPool(TGrowPool<EVramEntry>*, int, void);
	TGrowPool();
	EVramEntry* Alloc();
	void Free();
protected:
	void Free();
};

typedef TLinkedList<EVramEntry,24,28> EVRMOrderedList;
typedef TLinkedList<EVramEntry,32,36> EVRMMultiList;

struct EVramManager {
protected:
	EMutex m_mutex;
	EEvent m_unlockOrDeallocateEvent;
	u32 m_unlockOrDeallocateEventsWanted;
	EVRMOrderedList m_orderedList;
	EVRMMultiList m_unlockedList;
	EVRMMultiList m_freeList;
	EVRMMultiList m_lockedList;
	u32 m_largestFreeBlock;
	u32 m_protectBytes;
	int m_errorThreshold;
	int m_nFrame;
	
public:
	EVramManager& operator=();
	EVramManager();
	EVramManager();
	EVramManager(EVramManager*, int, void);
	void Init(u32 startAddress, u32 size);
	EVramEntry* AllocateAndLock(EVramAllocParams &param);
	void Deallocate(EVramEntry *pEntry, bool useMutex);
	void Lock(EVramEntry *pEntry, bool useMutex);
	void Unlock(EVramEntry *pEntry);
	void DiscardAll();
	void AcquireMutex();
	void ReleaseMutex();
	void ResetAvailableMemoryConstants();
	int GetLargestAvailableBlock();
protected:
	EVramEntry* DoAllocateAndLock(EVramAllocParams &param);
	void DiscardEntry(EVramEntry *pEntry);
	void MergeFreeNeighbor(EVramEntry *pEntry, EVramEntry *pNeighbor);
	int DoGetLargestAvailableBlock();
	void DoDiscardAll();
	void SendEventIfNeeded(EVramEntry *pEntry, bool exitMutex);
};

extern TGrowPool<EVramEntry> EVramEntry::pool;

void EVramManager::~EVramManager(int __in_chrg);
void global constructors keyed to EVramEntry::pool();
void global destructors keyed to EVramEntry::pool();

#endif // C__EOR_SRC2_ENGINE_E_VRAMMAN_H

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_MEMORY_E_MEMMAN_H
#define C__EOR_SRC2_ENGINE_MEMORY_E_MEMMAN_H

struct EMMSubAllocator {
	EHeap heap;
	int listPos;
	EMMSubAllocator *pLast;
	EMMSubAllocator *pNext;
};

typedef TLinkedList<EMMSubAllocator,28,32> EMMSAList;

struct EMemoryManager {
protected:
	static bool m_constructed;
	EHeap m_heap;
	EMutex m_heapMutex;
	EMutex m_segPoolMutex;
	u32 m_segmentBlockSize;
	u32 m_nSegments;
	u32 m_segmentPad;
	void *m_pFreeSegmentHead;
	void *m_pSegmentBlock;
	void *m_pTopOfHeap;
	TLinkedList<EMMSubAllocator,28,32> m_subAllocPowerLists[12];
	
public:
	EMemoryManager& operator=();
	EMemoryManager();
	EMemoryManager(EMemoryManager*, int, void);
	EMemoryManager();
	void Init(void *pAddress, int length, int nInitialSegments);
	void* Realloc(void *pAddress, u32 newSize, u32 alignment);
	u32 Free(void *p);
	void FreeMem(u32 *pTotal, u32 *pLargest);
	void Validate();
	void PrintFree();
	void PrintUsed(u32 since);
	void PrintUsedInOrder(u32 since);
	void FreeUnusedSegments(bool shrinkSegPool);
	static void SetBreakAlloc(/* parameters unknown */);
	static void SetValidateStartAlloc(/* parameters unknown */);
	static u32 GetAllocCount(/* parameters unknown */);
	void* Alloc(u32 size, u32 alignment, char *szFile, u32 line);
	void* AllocTop(u32 size, u32 alignment, char *szFile, u32 line);
	void* AllocAt(void *pAddress, u32 size, char *szFile, u32 line);
	void* Alloc();
	void* AllocTop();
	void* AllocAt();
protected:
	void AcquireHeapMutex();
	void ReleaseHeapMutex();
	void AcquireSegPoolMutex();
	void ReleaseSegPoolMutex();
	void AcquireBothMutexes();
	void ReleaseBothMutexes();
	bool AllocSegmentBlock(u32 nSegments);
	bool GrowSegmentBlock();
	void* AllocSegment();
	EMMSubAllocator* AllocSubAllocator();
	void FreeSubAllocator(EMMSubAllocator *psa);
	void FreeSegment(void *p);
	int GetFreeSegmentCount();
	static int CalcListPos(/* parameters unknown */);
	void UpdateListPos(EMMSubAllocator *psa);
	void* AllocFromSubAllocatorList(EMMSAList &list, u32 size, u32 alignment, char *szFile, u32 line);
	void* AllocFromSubAllocatorList();
};

extern EMemoryManager _memman;
extern bool EMemoryManager::m_constructed;

EMMSubAllocator* EMMSubAllocator::EMMSubAllocator();
void EMMSubAllocator::~EMMSubAllocator(int __in_chrg);
void* _memmanAlloc(u32 size, u32 alignment, char *szFile, u32 line);
void* _memmanAllocTop(u32 size, u32 alignment, char *szFile, u32 line);
void* _memmanAllocAt(void *pAddress, u32 size, char *szFile, u32 line);
void _memmanFree(void *pAddress);
void* _memmanAlloc(u32 size, u32 alignment);
void* _memmanAllocTop(u32 size, u32 alignment);
void* _memmanAllocAt(void *pAddress, u32 size);
void global constructors keyed to _memman();
void global destructors keyed to _memman();

#endif // C__EOR_SRC2_ENGINE_MEMORY_E_MEMMAN_H

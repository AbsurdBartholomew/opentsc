// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_DATASTRUC_E_HEAP_H
#define C__EOR_SRC2_COMMON_DATASTRUC_E_HEAP_H

typedef u32 EHeapInt;

struct EHeapBlock {
	EHeapBlock *pLast;
	EHeapInt free : 1;
	EHeapInt size : 31;
	
	EHeapBlock& operator=();
	EHeapBlock();
	EHeapBlock();
	EHeapBlock* Next();
};

struct EHeapFreeBlock : EHeapBlock {
	EHeapFreeBlock *pFreeLast;
	EHeapFreeBlock *pFreeNext;
};

struct EHeap {
protected:
	EHeapFreeBlock *m_pFreeHead;
	EHeapFreeBlock *m_pFreeTail;
	EHeapBlock *m_pHead;
	void *m_pEnd;
	EHeapInt m_smallestFailedAlloc;
	bool m_memset;
	
public:
	EHeap& operator=();
	EHeap();
	EHeap();
	EHeap();
	void Init(void *p, EHeapInt size);
	void* Alloc(EHeapInt size, EHeapInt align, char *szFile, u32 line);
	void* Alloc();
	void* AllocTop(EHeapInt size, EHeapInt align, char *szFile, u32 line);
	void* AllocTop();
	void* AllocAt(void *p, EHeapInt size, char *szFile, u32 line);
	void* AllocAt();
	void* Realloc(void *p, EHeapInt size, EHeapInt align, char *szFile, u32 line);
	void* Realloc();
	void* GrowDown(void *p, EHeapInt growBy);
	EHeapInt Free(void *p);
	EHeapInt GetBlockSize(void *p);
	bool IsEmpty();
	void FreeMem(EHeapInt *pTotal, EHeapInt *pLargest);
	void* GetTopAvailableAddress();
	void Validate();
	void PrintFree();
	void PrintUsed(u32 since);
	void PrintUsedInOrder(u32 since);
	bool SetMemset(bool enable);
	EHeapInt GetSmallestFailedAlloc();
	bool IsCompressed();
	bool IsSlideable(void *p);
	static void SetBreakAlloc(/* parameters unknown */);
	static void SetValidateStartAlloc(/* parameters unknown */);
	static u32 GetAllocCount(/* parameters unknown */);
protected:
	EHeapBlock* Next();
	void* DoAlloc(void *p, EHeapInt size, EHeapFreeBlock *pFreeBlock, char *szFile, u32 line);
	void ValidateBlock(EHeapBlock *pBlock);
};

extern u32 _heapBreakAlloc;
extern u32 _heapValidateStart;
extern u32 _heapAllocCounter;


#endif // C__EOR_SRC2_COMMON_DATASTRUC_E_HEAP_H

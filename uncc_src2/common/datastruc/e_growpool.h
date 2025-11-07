// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_DATASTRUC_E_GROWPOOL_H
#define C__EOR_SRC2_COMMON_DATASTRUC_E_GROWPOOL_H

struct EGrowPool {
protected:
	void *m_pFreeObjHead;
	void *m_pSegHead;
	int m_blockSize;
	
public:
	EGrowPool& operator=();
	EGrowPool(int blockSize);
	EGrowPool();
	EGrowPool();
	EGrowPool(EGrowPool*, int, void);
	void SetBlockSize(EGrowPool*, int, void);
	int GetBlockSize();
	void* Alloc();
	void Free();
	void Reset();
	void FreeUnusedSegments();
protected:
	void Init();
	void* AllocNewSeg();
};

void EGrowPool::~EGrowPool(int __in_chrg);

#endif // C__EOR_SRC2_COMMON_DATASTRUC_E_GROWPOOL_H

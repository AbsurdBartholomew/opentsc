// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_DATASTRUC_E_FIXEDPOOL_H
#define C__EOR_SRC2_COMMON_DATASTRUC_E_FIXEDPOOL_H

struct EFixedPool {
protected:
	void *m_pFreeObjHead;
	void *m_pData;
	
public:
	EFixedPool& operator=();
	EFixedPool();
	EFixedPool();
	EFixedPool(EFixedPool*, int, void);
	void Init(int blockSize, int blockCount, void *pUserBuffer);
	void Init();
	void* Alloc();
	void Free(void *p);
};

void EFixedPool::~EFixedPool(int __in_chrg);

#endif // C__EOR_SRC2_COMMON_DATASTRUC_E_FIXEDPOOL_H

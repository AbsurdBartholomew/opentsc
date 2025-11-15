/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once

struct EGrowPool {
protected:
	void *m_pFreeObjHead;
	void *m_pSegHead;
	int m_blockSize;
	
public:
	//EGrowPool& operator=();
	EGrowPool(int blockSize);
    virtual ~EGrowPool();

	//EGrowPool();
	EGrowPool();
	void SetBlockSize(int) { ; }
	int GetBlockSize() { return m_blockSize; }
	void* Alloc();
	void Free();
	void Reset();
	void FreeUnusedSegments();

    friend class EAllocBucket;
protected:
	void Init();
	void* AllocNewSeg();
};

template<typename T> struct TGrowPool : public EGrowPool {
	//TGrowPool<T>& operator=();
	TGrowPool() { ; }

	T* Alloc()
	{
		return (T*)Alloc();
	}

protected:

};
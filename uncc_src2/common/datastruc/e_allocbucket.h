// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_DATASTRUC_E_ALLOCBUCKET_H
#define C__EOR_SRC2_COMMON_DATASTRUC_E_ALLOCBUCKET_H

struct TGrowPool<EAllocBucketNode> : EGrowPool {
	TGrowPool<EAllocBucketNode>& operator=();
	TGrowPool();
	TGrowPool(TGrowPool<EAllocBucketNode>*, int, void);
	TGrowPool();
	EAllocBucketNode* Alloc();
	void Free();
protected:
	void Free();
};

struct EAllocBucket : EGlobalManagerClient {
protected:
	EAllocBucketNode *m_pHashTable[53];
	EMutex m_mutex;
	
public:
	EAllocBucket& operator=();
	EAllocBucket();
	EAllocBucket();
	/* vtable[1] */ virtual EAllocBucket(EAllocBucket*, int, void);
protected:
	/* vtable[3] */ virtual void ManagedShutdown();
public:
	void* Alloc(u32 size);
	void* Alloc();
	void Free(void *pAddress, u32 size);
	void Free();
	void FreeUnusedSegments();
};

extern TGrowPool<EAllocBucketNode> EAllocBucketNode::m_bucketNodePool;
extern EAllocBucket _allocBucket;
extern __vtbl_ptr_type EAllocBucket virtual table[5];
extern __vtbl_ptr_type EGlobalManagerClient virtual table[5];

void EAllocBucket::~EAllocBucket(int __in_chrg);
void* _allocBucketAlloc(u32 size, u32 hashKey);
void _allocBucketFree(void *pAddress, u32 size, u32 hashKey);
void EGlobalManagerClient::~EGlobalManagerClient(int __in_chrg);
void global constructors keyed to EAllocBucketNode::m_bucketNodePool();
void global destructors keyed to EAllocBucketNode::m_bucketNodePool();

#endif // C__EOR_SRC2_COMMON_DATASTRUC_E_ALLOCBUCKET_H

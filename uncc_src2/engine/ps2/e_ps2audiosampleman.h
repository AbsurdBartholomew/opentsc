// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PS2_E_PS2AUDIOSAMPLEMAN_H
#define C__EOR_SRC2_ENGINE_PS2_E_PS2AUDIOSAMPLEMAN_H

struct EAudioSampleManager : EResourceManager {
	EAudioSampleManager& operator=();
	EAudioSampleManager();
	EAudioSampleManager();
	/* vtable[1] */ virtual EAudioSampleManager(EAudioSampleManager*, int, void);
	/* vtable[3] */ virtual void Shutdown();
	/* vtable[6] */ virtual ERSampledata* AddRef();
	/* vtable[7] */ virtual ERSampledata* AddRefAsync();
	/* vtable[8] */ virtual ERSampledata* GetRefAsync();
};

struct EAutoMutex {
private:
	EMutex &m_mutex;
};

struct EPS2AudioSampleManager : EAudioSampleManager {
private:
	SPUBlock *m_pBlockList;
	SPUBlock *m_pFreeList;
	unsigned char m_bLoopedList[32];
	int m_loopedListWriter;
	int m_loopedListReader;
	
public:
	EPS2AudioSampleManager& operator=();
	EPS2AudioSampleManager();
	EPS2AudioSampleManager();
	/* vtable[1] */ virtual EPS2AudioSampleManager(EPS2AudioSampleManager*, int, void);
	/* vtable[6] */ virtual ERSampledata* AddRef(u32 id, bool bLoopedSample);
	/* vtable[7] */ virtual ERSampledata* AddRefAsync(u32 id, bool bLoopedSample);
	/* vtable[8] */ virtual ERSampledata* GetRefAsync(u32 id, bool bWait);
protected:
	/* vtable[4] */ virtual EResource* AllocateAndLoadResource(EFile *pFile, u32 uLength);
	/* vtable[2] */ virtual void Init(char *szDataType);
	/* vtable[3] */ virtual void Shutdown();
	void OnDelRef(ERSampledata *pSample);
private:
	void heapInit();
	u32 heapAlloc(u32 size);
	void heapFree(u32 uAddr);
	void heapResortSmaller(SPUBlock *node);
	void heapResortLarger(SPUBlock *node);
	SPUBlock* heapFindBlock(u32 uAddr);
	bool heapIsFreeBlock(SPUBlock *node);
	bool heapWalk(bool bPrint);
	void heapTest();
	int readStream(EFile *pFile, int size, u32 uLoadAddr, bool bLoopedSample);
};

extern EPS2AudioSampleManager _ps2audiosampleman;
extern TGrowPool2<SPUBlock,64> SPUBlock::m_pool;
extern __vtbl_ptr_type EPS2AudioSampleManager virtual table[10];
extern __vtbl_ptr_type EAudioSampleManager virtual table[10];
extern EAudioSampleManager *_pAudiosampleman;

void EAudioSampleManager::~EAudioSampleManager(int __in_chrg);
void EPS2AudioSampleManager::~EPS2AudioSampleManager(int __in_chrg);
TGrowPool2<SPUBlock,64>* TGrowPool2<SPUBlock, 64>::TGrowPool2();
void TGrowPool2<SPUBlock, 64>::Reset();
void TGrowPool2<SPUBlock, 64>::~TGrowPool2(int __in_chrg);
void __builtin_delete(void *pAddress);
EAutoMutex* EAutoMutex::EAutoMutex(EMutex &mutex);
void EAutoMutex::~EAutoMutex(int __in_chrg);
SPUBlock* TGrowPool2<SPUBlock, 64>::Alloc();
void TGrowPool2<SPUBlock, 64>::Dealloc(SPUBlock *_node);
void TGrowPool2<SPUBlock, 64>::addBlock();
void global constructors keyed to _ps2audiosampleman();
void global destructors keyed to _ps2audiosampleman();

#endif // C__EOR_SRC2_ENGINE_PS2_E_PS2AUDIOSAMPLEMAN_H

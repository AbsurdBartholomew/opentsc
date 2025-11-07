// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_E_SEMAPHORE_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_E_SEMAPHORE_H

struct ESemaphore : ESyncObject {
protected:
	int m_id;
	int m_maxCount;
	int m_waits;
	int m_count;
	
public:
	ESemaphore& operator=();
	ESemaphore(int maxCount, int initialCount);
	ESemaphore();
	ESemaphore();
	/* vtable[1] */ virtual ESemaphore(ESemaphore*, int, void);
	static void SetBreakId(/* parameters unknown */);
	bool Create(int maxCount, int initialCount);
	void Destroy();
	bool IsCreated();
	/* vtable[2] */ virtual bool Acquire(u32 nTimeout);
	/* vtable[3] */ virtual bool Release();
	bool iAcquire();
	void iRelease();
	static ESemaphore* GetObject(/* parameters unknown */);
	int GetCurrentCount();
	int GetMaxCount();
	ESemaphore& operator++();
	ESemaphore& operator++();
	ESemaphore& operator--();
	ESemaphore& operator--();
};

extern int _semaphoreBreakId;
extern __vtbl_ptr_type ESemaphore virtual table[6];

void ESemaphore::~ESemaphore(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_E_SEMAPHORE_H

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_SYNC_E_MUTEX_H
#define C__EOR_SRC2_COMMON_SYNC_E_MUTEX_H

struct EMutex : ESyncObject {
protected:
	ESemaphore m_sema;
	
public:
	EMutex& operator=();
	EMutex();
	EMutex();
	/* vtable[1] */ virtual EMutex(EMutex*, int, void);
	/* vtable[2] */ virtual bool Acquire(u32 nTimeout);
	/* vtable[3] */ virtual bool Release();
	bool iAcquire();
	void iRelease();
	EMutex& operator++();
	EMutex& operator++();
	EMutex& operator--();
	EMutex& operator--();
};

extern __vtbl_ptr_type EMutex virtual table[6];

void EMutex::~EMutex(int __in_chrg);

#endif // C__EOR_SRC2_COMMON_SYNC_E_MUTEX_H

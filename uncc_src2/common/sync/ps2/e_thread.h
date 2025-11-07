// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_SYNC_PS2_E_THREAD_H
#define C__EOR_SRC2_COMMON_SYNC_PS2_E_THREAD_H

struct EThread {
protected:
	int m_threadId;
	void *m_pStack;
	int m_stackSize;
	bool m_stackAutoAllocated;
	char *m_szName;
public:
	EThread *m_pLastThread;
	EThread *m_pNextThread;
	__vtbl_ptr_type *$vf897;
	
	EThread& operator=();
	EThread(int priority, int stackSize, void *pStack);
	EThread();
	EThread();
	/* vtable[1] */ virtual EThread(EThread*, int, void);
	bool Create(int priority, int stackSize, void *pStack);
	void Attach(int id);
	void AttachToCallingThread();
	void Destroy();
	void SetThreadName(char *szName);
	char* GetThreadName();
	void Start();
	void Stop();
	void SetPriority(int priority);
	int GetPriority();
	bool IsCallingThread();
	void* GetStack();
	int GetStackSize();
	static int GetCurrentThreadId(/* parameters unknown */);
	static EThread* GetThreadObject(/* parameters unknown */);
	static EThread* GetCallingThreadObject(/* parameters unknown */);
	static void PrintAllThreads(/* parameters unknown */);
	static EThread* GetThreadFromStackPtr(/* parameters unknown */);
	static bool IsStackPtr(/* parameters unknown */);
protected:
	/* vtable[2] */ virtual void Main();
	void DeallocateStack();
	static void ThreadEntryPoint(/* parameters unknown */);
};

extern __vtbl_ptr_type EThread virtual table[4];

void EThread::~EThread(int __in_chrg);
void global constructors keyed to EThread::EThread();

#endif // C__EOR_SRC2_COMMON_SYNC_PS2_E_THREAD_H

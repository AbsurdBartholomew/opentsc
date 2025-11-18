/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#pragma once

#include <SDL2/SDL_thread.h>
#include "common/types.h"
/*
struct ThreadParam {
	int status;
	void (*entry)();
	void *stack;
	int stackSize;
	void *gpReg;
	int initPriority;
	int currentPriority;
	u32 attr;
	u32 option;
	int waitType;
	int waitId;
	int wakeupCount;
};*/

class EThread
{
protected:
	int m_threadId;
	void *m_pStack;
	int m_stackSize;
	bool m_stackAutoAllocated;
	char *m_szName;

	SDL_Thread* m_thread;
public:
	EThread *m_pLastThread;
	EThread *m_pNextThread;

    EThread(int priority, int stackSize, void *pStack);
    EThread();
    virtual ~EThread();

    bool Create(int priority, int stackSize, void *pStack);
	void Attach(int id);
	void AttachToCallingThread();
	void Destroy();
	inline void SetThreadName(char *szName) { m_szName = m_szName; }
	char* GetThreadName() { return m_szName; }
	void Start();
	void Stop();
	void SetPriority(int priority);
	int GetPriority();
	bool IsCallingThread();
	void* GetStack();
	int GetStackSize();

    static int GetCurrentThreadId();
	static EThread* GetThreadObject(int id);
	static EThread* GetCallingThreadObject();
	static void PrintAllThreads();
	static EThread* GetThreadFromStackPtr(void *p);
	static bool IsStackPtr(void *p);
protected:
	virtual void Main();
	void DeallocateStack();
	static void ThreadEntryPoint(void *pThis);
private:
	
};

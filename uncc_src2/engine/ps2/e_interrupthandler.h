// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PS2_E_INTERRUPTHANDLER_H
#define C__EOR_SRC2_ENGINE_PS2_E_INTERRUPTHANDLER_H

struct EEvent {
protected:
	ESemaphore m_sema;
	
public:
	EEvent& operator=();
	EEvent();
	EEvent();
	EEvent(EEvent*, int, void);
	bool Wait();
	void Signal();
	void iSignal();
	void Clear();
};

struct EInterruptHandler {
protected:
	int m_id;
	int m_cause;
	
public:
	EInterruptHandler& operator=();
	EInterruptHandler(ESemaphore &semaphore, int cause);
	EInterruptHandler();
	EInterruptHandler();
	EInterruptHandler();
	EInterruptHandler();
	EInterruptHandler(EInterruptHandler*, int, void);
	void Create(ESemaphore &semaphore, int cause);
	void Create();
	void Create();
	void Destroy();
protected:
	void DoCreateInt(void *pObject, int cause, int (*pfnHandler)(/* parameters unknown */));
	void DoCreateDma(void *pObject, int cause, int (*pfnHandler)(/* parameters unknown */));
	static int EventHandler(/* parameters unknown */);
	static int MsgQueueHandlerInt(/* parameters unknown */);
	static int MsgQueueHandlerDma(/* parameters unknown */);
	static int SemaphoreHandler(/* parameters unknown */);
};

void EInterruptHandler::~EInterruptHandler(int __in_chrg);

#endif // C__EOR_SRC2_ENGINE_PS2_E_INTERRUPTHANDLER_H

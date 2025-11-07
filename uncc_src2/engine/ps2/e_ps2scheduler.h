// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PS2_E_PS2SCHEDULER_H
#define C__EOR_SRC2_ENGINE_PS2_E_PS2SCHEDULER_H

struct ESchedCommand {
	u32 command;
	u32 data;
	u32 data2;
	u32 flags;
	ESchedCommand *pLast;
	ESchedCommand *pNext;
};

typedef TLinkedList<ESchedCommand,16,20> ESchedCommandList;

struct EScheduler : EThread {
	EScheduler& operator=();
	EScheduler();
protected:
	EScheduler();
	/* vtable[1] */ virtual EScheduler(EScheduler*, int, void);
public:
	/* vtable[3] */ virtual bool Init();
	/* vtable[4] */ virtual void QueueSetupFrameBuffer(EScheduler*, int, void);
	/* vtable[5] */ virtual void QueueDisplayList();
	/* vtable[6] */ virtual void QueueSwapBuffer();
	/* vtable[7] */ virtual void QueueCompletionEvent();
	/* vtable[8] */ virtual void Flush();
	/* vtable[9] */ virtual void TextureLoadsComplete();
	/* vtable[10] */ virtual void RenderingComplete();
	/* vtable[11] */ virtual int GetLastRetraceCount();
};

struct TGrowPool<ESchedCommand> : EGrowPool {
	TGrowPool<ESchedCommand>& operator=();
	TGrowPool();
	TGrowPool(TGrowPool<ESchedCommand>*, int, void);
	TGrowPool();
	ESchedCommand* Alloc();
	void Free();
protected:
	void Free();
};

struct EPs2Scheduler : EScheduler {
protected:
	EMsgQueue m_commandQueue;
	ESchedCommandList m_pendingQueue;
	TGrowPool<ESchedCommand> m_commandPool;
	EMutex m_commandPoolMutex;
	EInterruptHandler m_vblankStartHandler;
	EInterruptHandler m_vblankEndHandler;
	int m_nTextureLoadsRunning;
	int m_nRendersRunning;
	int m_nRetraces;
	int m_nMinRetraces;
	int m_nLastRetraces;
	int m_currentFrameBuffer;
	ESchedCommand *m_pSwapPending;
	bool m_insideVBlank;
	
public:
	EPs2Scheduler& operator=();
	EPs2Scheduler();
	EPs2Scheduler();
	/* vtable[1] */ virtual EPs2Scheduler(EPs2Scheduler*, int, void);
	/* vtable[3] */ virtual bool Init();
	/* vtable[4] */ virtual void QueueSetupFrameBuffer(int nFrame);
	/* vtable[5] */ virtual void QueueDisplayList(EDL *pDL, bool deallocate);
	/* vtable[6] */ virtual void QueueSwapBuffer(int nFrame, int minRetraces);
	/* vtable[7] */ virtual void QueueCompletionEvent(EEvent &event);
	/* vtable[8] */ virtual void Flush();
	/* vtable[9] */ virtual void TextureLoadsComplete(ESchedCommand *pCmd);
	/* vtable[10] */ virtual void RenderingComplete(ESchedCommand *pCmd);
	/* vtable[11] */ virtual int GetLastRetraceCount();
protected:
	/* vtable[2] */ virtual void Main();
	void Command(ESchedCommand *pCmd);
	ESchedCommand* AllocSchedCommand();
	void FreeSchedCommand(ESchedCommand *p);
	void SendCommand(ESchedCommand *pCmd);
	void VBlankStartInterrupt();
	void VBlankEndInterrupt();
	void Update();
	void UpdateCommandQueue();
	void UpdateSwap();
	bool DoFlush(ESchedCommand *pCmd);
	bool DoCompletionEvent(ESchedCommand *pCmd);
	bool DoDisplayList(ESchedCommand *pCmd);
	bool DoSwapBuffer(ESchedCommand *pCmd);
	bool DoSetupFrameBuffer(ESchedCommand *pCmd);
	void ProcessingCompleteCommand(ESchedCommand *pCmd);
	bool OkayToSwap();
};

extern EPs2Scheduler _ps2sched;
extern EScheduler *_pSched;
extern __vtbl_ptr_type EPs2Scheduler virtual table[13];
extern __vtbl_ptr_type EScheduler virtual table[13];

void EPs2Scheduler::~EPs2Scheduler(int __in_chrg);
void EScheduler::~EScheduler(int __in_chrg);
void global constructors keyed to _ps2sched();
void global destructors keyed to _ps2sched();

#endif // C__EOR_SRC2_ENGINE_PS2_E_PS2SCHEDULER_H

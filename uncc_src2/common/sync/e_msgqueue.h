// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_COMMON_SYNC_E_MSGQUEUE_H
#define C__EOR_SRC2_COMMON_SYNC_E_MSGQUEUE_H

struct EMsgQueue {
protected:
	ESemaphore m_inSema;
	ESemaphore m_outSema;
	int m_cIn;
	int m_cOut;
	int m_size;
	u32 *m_pMsgs;
	bool m_autoAllocated;
	
public:
	EMsgQueue& operator=();
	EMsgQueue(int size, u32 *pBuffer);
	EMsgQueue();
	EMsgQueue();
	EMsgQueue(EMsgQueue*, int, void);
	bool Create(int size, u32 *pBuffer);
	void Destroy();
	int GetCount();
	bool IsEmpty();
	bool IsFull();
	void Empty();
	bool Send(u32 msg, bool block);
	bool SendFront(u32 msg, bool block);
	bool Receive(u32 *pMsgOut, bool block);
	bool iSend(u32 msg);
	bool iSendFront(u32 msg);
	bool iReceive(u32 *pMsgOut);
};

void EMsgQueue::~EMsgQueue(int __in_chrg);

#endif // C__EOR_SRC2_COMMON_SYNC_E_MSGQUEUE_H

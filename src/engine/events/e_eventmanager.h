/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once

#include "games/sims/ESRC/e_semaphore.h"

typedef u32 EHListenerHandle;
typedef void (*EHCallbackFn)(/* parameters unknown */);

struct EEventInfo
{
    u32 eventId;
    //EInstance *pSendingInstance;
    float delay;
    EEventInfo *pListNext;
    EEventInfo *pListPrev;

    EEventInfo();
};

struct EEvent
{
protected:
    ESemaphore m_sema;

public:
    EEvent();
    bool Wait();
    void Signal();
    void iSignal();
    void Clear();
};

class EEventManager
{
protected:
	//EEventHash *m_pListenerTable;
	EEventInfo *m_pQueueHead;
	int m_eventCount;
	//ERLevel *m_pLevel;


};
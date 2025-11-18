/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once

#include "common/sync/sdl/e_semaphore.h"

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

class EEvent
{
public:
    friend class EEngine;

    EEvent();
    bool Wait();
    void Signal();
    void iSignal();
    void Clear();
protected:
    ESemaphore m_sema;
};

class EEventManager
{
protected:
	//EEventHash *m_pListenerTable;
	EEventInfo *m_pQueueHead;
	int m_eventCount;
	//ERLevel *m_pLevel;


};
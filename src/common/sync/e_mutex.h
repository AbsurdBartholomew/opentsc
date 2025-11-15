/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once

#include "common/sync/sdl/e_semaphore.h"

class EMutex : public ESyncObject {
protected:
	ESemaphore m_sema;
	
public:
	EMutex();
    virtual ~EMutex();
	/* vtable[2] */ virtual bool Acquire(u32 nTimeout);
	/* vtable[3] */ virtual bool Release();
	bool iAcquire();
	void iRelease();
	EMutex& operator++();
	EMutex& operator--();
};
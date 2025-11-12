/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once

#include "common/types.h"
#include "common/sync/e_syncobject.h"

struct ESemaphore : ESyncObject {
protected:
	int m_id;
	int m_maxCount;
	int m_waits;
	int m_count;
	
public:
	ESemaphore(int maxCount, int initialCount);
	ESemaphore();
	static void SetBreakId(int id);
	bool Create(int maxCount, int initialCount);
	void Destroy();
	bool IsCreated();
	/* vtable[2] */ virtual bool Acquire(u32 nTimeout);
	/* vtable[3] */ virtual bool Release();
	bool iAcquire();
	void iRelease();
	static ESemaphore* GetObject(int id);
	int GetCurrentCount();
	int GetMaxCount();
	//ESemaphore& operator++();
	//ESemaphore& operator--();
};
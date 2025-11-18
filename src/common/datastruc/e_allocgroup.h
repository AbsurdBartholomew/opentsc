/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#pragma once

#include "common/datastruc/e_nodelist.h"

struct EAllocGroup {
protected:
	TNodeList<void *> m_allocList;
	int m_pos;
	
public:
	EAllocGroup();
    
	void* Alloc(unsigned int size, int alignment);
	void DeallocateAll();
	void AllocExternal();
	bool IsEmpty();
	bool JustOneAllocation();
	void MoveContents(EAllocGroup &source);
	void RemoveAllocExternal(void *pData);
	void Validate();
};
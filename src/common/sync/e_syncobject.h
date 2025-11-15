/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once

#include "common/types.h"

class ESyncObject 
{
public:
	ESyncObject();
    
	virtual bool Acquire();
	virtual bool Release(u32 nCount, u32 *pPrevCount);
	virtual bool Release() = 0;
};
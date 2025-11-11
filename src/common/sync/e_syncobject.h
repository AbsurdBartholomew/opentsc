/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once

#include "common/types.h"

struct ESyncObject {
	ESyncObject();
    
	virtual bool Acquire();
	virtual bool Release(u32 nCount, u32 *pPrevCount);
	virtual bool Release();
};
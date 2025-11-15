/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once

#include "common/types.h"

class EChecksum {
protected:
	static unsigned int m_table[256];
	
public:
	static u32 Compute(void *pData, int length);
	static u32 Compute(char *szData);
	static u32 ComputeNoCase(char *szData);
	static u32 ComputeSymbol(char *szData);
};
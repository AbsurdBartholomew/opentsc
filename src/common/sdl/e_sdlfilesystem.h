/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once

#include "common/file/e_filesystem.h"

struct ESdlFileSystem : EFileSystem {
private:
	char m_pszHostIPAddress[16];
	
public:
	/* vtable[6] */ virtual bool Init(DeviceType eDefaultType);
	void SetHostIPAddress(char *pszHostIPAddress);
	char* GetHostIPAddress();
};

extern ESdlFileSystem _eorFileSys;
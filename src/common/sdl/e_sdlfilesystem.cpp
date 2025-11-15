/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "e_sdlfilesystem.h"

#include <string.h>

ESdlFileSystem _eorFileSys;

bool ESdlFileSystem::Init(DeviceType eDefaultType)
{
    return true;
}

void ESdlFileSystem::SetHostIPAddress(char *pszHostIPAddress)
{
    strncpy(this->m_pszHostIPAddress,pszHostIPAddress,0xf);
}

char *ESdlFileSystem::GetHostIPAddress()
{
    return m_pszHostIPAddress;
}
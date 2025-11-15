/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include <SDL2/SDL.h>
#include <stdio.h>
#include "e_sdlfileio.h"

#include "engine/memory/e_memman.h"

ESdlFileIO::ESdlFileIO()
{
    m_theMutex = EMutex();

    m_nBufferPos = -1;
    m_uHandle = 0;
    m_nFileSize = -1;
    m_nBytesInBuffer = -1;
    m_nPos = 0;
    m_pBuffer = NULL;
}

ESdlFileIO::~ESdlFileIO()
{
    FreeIOBuffer();
}

// TODO:
EFile *ESdlFileIO::Creator(EFile *pFile, char *pszFileName, char *pszMode, DeviceType eDevice, AccessMode eAccess)
{
    bool bCreator;

    if (pFile)
    {
    }

    return pFile;
}

void ESdlFileIO::Destroy()
{
}

bool ESdlFileIO::Open(char *pszFileName, char *pszMode, DeviceType eDevice, AccessMode eAccess)
{
    //memcpy(pszFileName, m_pszName, strlen(pszFileName));
    SetName(pszFileName);

    m_pRwOps = SDL_RWFromFile(pszFileName, pszMode);
    if (m_pRwOps != NULL)
    {
        printf("Successfully loaded %s with mode %s\n", pszFileName, pszMode);
        m_nPos = 0;

        return true;
    }

    printf("Failed to read from %s: %s\n", pszFileName, SDL_GetError());
    return false;
}

unsigned int ESdlFileIO::Write(void *pBuffer, unsigned int nSize)
{
    return 0;
}

void ESdlFileIO::Close()
{
    SDL_RWclose(m_pRwOps);
    m_nPos = 0;
}

unsigned int ESdlFileIO::Read(void *pBuffer, unsigned int nSize)
{
    SDL_RWseek(m_pRwOps, m_nPos, RW_SEEK_SET);

    size_t res = SDL_RWread(m_pRwOps, pBuffer, 1, nSize);
    if (res == 0)
    {
        printf("Failed to read from %s: %s\n", m_pszName, SDL_GetError());
        return 0;
    }

    m_nPos += nSize;
}

unsigned int ESdlFileIO::Seek(int nOffset, SeekType eMode)
{
    int whence;
    Sint64 ret;

    switch (eMode)
    {
    case ST_SET:
        whence = RW_SEEK_SET;
        break;
    case ST_CURRENT:
        whence = RW_SEEK_CUR;
        break;
    case ST_END:
        whence = RW_SEEK_END;
        break;
    default:
        whence = RW_SEEK_SET;
    }

    ret = SDL_RWseek(m_pRwOps, nOffset, whence);
    m_nPos = SDL_RWtell(m_pRwOps);

    return ret;
}

unsigned int ESdlFileIO::Tell()
{
    return m_nPos;
}

bool ESdlFileIO::Flush()
{
    return false;
}

ErrorCode ESdlFileIO::GetLastError()
{
    return ER_NONE;
}

IOMode ESdlFileIO::GetIOMode()
{
    return m_eMode;
}

AccessMode ESdlFileIO::GetAccessMode()
{
    return m_eAccess;
}

DeviceType ESdlFileIO::GetDeviceType()
{
    return DT_DEFAULT;
}

char *ESdlFileIO::GetDrive()
{
    return m_pszDrive;
}

char *ESdlFileIO::GetPath()
{
    return m_pszDir;
}

char *ESdlFileIO::GetName()
{
    return m_pszName;
}

char *ESdlFileIO::GetExt()
{
    return m_pszExt;
}

void *ESdlFileIO::GetSystemHandle()
{
    return (void *)m_pRwOps;
}

void ESdlFileIO::SetName(char *pszFileName)
{
    size_t sVar1;
    char *ext;

    ext = this->m_pszExt;

    SplitPath(pszFileName, this->m_pszDrive, this->m_pszDir, this->m_pszName, ext);

    sVar1 = strlen(ext);
    if ((sVar1 != 0) && (this->m_pszExt[0] == '.'))
    {
        strcpy(ext, this->m_pszExt + 1);
    }
    return;
}

bool ESdlFileIO::AllocIOBuffer()
{
    if (m_pBuffer == (void *)0x0)
    {
        m_pBuffer = _memmanAlloc(0x1000, 0x100);
    }

    return m_pBuffer != (void *)0x0;
}

void ESdlFileIO::FreeIOBuffer()
{
    _memmanFree(m_pBuffer);
    m_pBuffer = NULL;
}

bool ESdlFileIO::FillBuffer()
{
    return true;
}

unsigned int ESdlFileIO::ReadFromBuffer(void *pBuffer, unsigned int nSize)
{
    return 0;
}

int ESdlFileIO::GetFD()
{
    m_uHandle;
}

void ESdlFileIO::SetFD(int nFD)
{
    m_uHandle = nFD;
}

void ESdlFileIO::SetMode(IOMode eMode)
{
    m_eMode = eMode;
}

void ESdlFileIO::SetDevice(DeviceType eDevice)
{
    m_eDevice = eDevice;
}

void ESdlFileIO::SetAccess(AccessMode eAccess)
{
    this->m_eAccess = eAccess;
}

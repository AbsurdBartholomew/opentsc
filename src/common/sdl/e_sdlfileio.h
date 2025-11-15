/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once

#include <SDL2/SDL.h>

#include "common/sync/e_mutex.h"
#include "common/file/e_file.h"

class ESdlFileIO : public EFile
{
private:
	EMutex m_theMutex;
	u32 m_uHandle;
	IOMode m_eMode;
	DeviceType m_eDevice;
	AccessMode m_eAccess;
	long int m_nFileSize;
	long int m_nBytesInBuffer;
	long int m_nPos;
	long int m_nBufferPos;
	void *m_pBuffer;
    SDL_RWops *m_pRwOps;

	char m_pszDrive[3];
	char m_pszDir[256];
	char m_pszName[256];
	char m_pszExt[256];
public:
    ESdlFileIO();
    virtual ~ESdlFileIO();
protected:
    static EFile* Creator(EFile *pFile, char *pszFileName, char *pszMode, DeviceType eDevice, AccessMode eAccess);
    bool Open(char *pszFileName, char *pszMode, DeviceType eDevice, AccessMode eAccess);
    void Close();
	void Destroy();
public:
    unsigned int Read(void *pBuffer, unsigned int nSize);
    unsigned int Write(void *pBuffer, unsigned int nSize);
    unsigned int Seek(int nOffset, SeekType eMode);
    unsigned int Tell();
    bool Flush();

    ErrorCode GetLastError();
    IOMode GetIOMode();
    AccessMode GetAccessMode();
    DeviceType GetDeviceType();
    char* GetDrive();
    char* GetPath();
    char* GetName();
    char* GetExt();
    void* GetSystemHandle();
private:
    void SetName(char *pszFileName);

	bool AllocIOBuffer();
	void FreeIOBuffer();
	bool FillBuffer();
	unsigned int ReadFromBuffer(void *pBuffer, unsigned int nSize);
    
	int GetFD();

	void SetFD(int nFD);
	void SetMode(IOMode eMode);
	void SetDevice(DeviceType eDevice);
	void SetAccess(AccessMode eAccess);
};
/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "e_filestream.h"

EStream::EStream()
{

}

bool EStream::IsStreamingStructure()
{
    return true;
}

int EStream::ReadString(char *szBuffer, int bufferSize)
{
    return 0;
}

int EStream::WriteString(char *szBuffer)
{
    return 0;
}

int EStream::ReadU16String(u16 *szBuffer, int bufferSize)
{
    return 0;
}

int EStream::WriteU16String(u16 *szBuffer)
{
    return 0;
}

int EStream::GetPos()
{
    return 0;
}

int EStream::Read()
{
    return 0;
}

int EStream::Write()
{
    return 0;
}

/******************************************************/

EFileStream::EFileStream()
{

}

bool EFileStream::Open(char *filename, FSReadWriteMode mode)
{
    return true;
}

void EFileStream::Close()
{

}

void EFileStream::Attach(EFile *pFile, FSReadWriteMode mode, int pos, bool bOwn)
{

}

void EFileStream::Detach()
{

}

int EFileStream::GetPos()
{
    return 0;
}

int EFileStream::Read(void *pData, int size)
{
    return 0;
}

int EFileStream::Write(void *pData, int size)
{
    return 0;
}
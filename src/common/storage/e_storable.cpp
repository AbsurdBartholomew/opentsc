/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "e_storable.h"

#include "common/storage/e_memorystream.h"
#include "common/storage/e_filestream.h"

ETypeInfo EStorable::m_typeInfo;

EStorable* EStorable::CreateCopy()
{
    void *pData;
    u8 *p;
    EStorable *pNewDataStructure;
	EMemoryWriteStream writeStream;
	EMemoryReadStream readStream;

    writeStream = EMemoryWriteStream();
    readStream = EMemoryReadStream(&pNewDataStructure);
    //readStream << this;

    p = (u8*)writeStream.AllocAndCopyToBuffer();

    readStream.m_pos = 0;
    readStream.m_pData = p;

    return pNewDataStructure;
}

EStorable::EStorable()
{

}

EStorable *EStorable::New()
{
    return new EStorable();
}

void EStorable::SafeDelete()
{

}

ETypeInfo *EStorable::GetTypeInfo()
{
    return &m_typeInfo;
}

char *EStorable::GetTypeName()
{
    return m_typeInfo.m_name;
}

u32 EStorable::GetTypeKey()
{
    return m_typeInfo.m_key;
}

u16 EStorable::GetTypeVersion()
{
    return m_typeInfo.m_version;
}

void EStorable::Read(EStream &s) {
  return;
}

void EStorable::Write(EStream &s) {
  return;
}
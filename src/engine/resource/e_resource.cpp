/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "common/storage/e_filestream.h"
#include "e_resource.h"
#include "ESRC/e_resourceman.h"

ETypeInfo EResource::m_typeInfo;

EResource::EResource()
{
    m_name.SetToNull();
    m_nRefs = 1;
    m_pManager = NULL;
}

void EResource::Init()
{
}

EResource *EResource::New()
{
    return new EResource();
}

void EResource::Read(EStream &s)
{
    if (m_typeInfo.m_readVersion == 0)
        s << m_name;
}

void EResource::Write(EStream &s)
{
    if (m_typeInfo.m_readVersion == 0)
        s >> m_name;
}

void EResource::DelRef()
{
    int iVar2;

    if (m_pManager == NULL)
    {
        iVar2 = m_nRefs + -1;
        m_nRefs = iVar2;
        if (iVar2 == 0)
        {
            GetTypeName();
        }
    }
    else
    {
        m_pManager->DelRef(this);
    }
}

void EResource::AddRef()
{
    if (m_pManager == NULL)
    {
        m_nRefs = this->m_nRefs + 1;
    }
    else
    {
        m_pManager->AddRef(this);
    }
}

void EResource::Reload(EFile *pFile)
{
    EFileStream s = EFileStream();

    // EStorable__vtable *pEVar1;
    // int pos = pFile->GetDrive();
    int pos = pFile->Tell();
    s.Attach(pFile, FS_READ, pos, false);

    // pos = (pFile->GetDrive)(&pFile->GetDeviceType);
    // Attach__11EFileStreamP5EFile15FSReadWriteModeib(&s, pFile, FS_READ, pos, false);
    // pEVar1 = (this->field0_0x0).__vtable;
    //(*(code *)pEVar1[2].GetTypeName)((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1[2].GetTypeInfo, &s);
    //___11EFileStream(&s, 2);
}

void EResource::SafeDelete()
{
    if (this != NULL)
    {
        //(*(code *)this->__vtable[1].GetTypeKey)((int)&this->__vtable + (int)*(short *)&this->__vtable[1].GetTypeName, 3);
    }
}

void EResource::Reload(EStream &s)
{
}

/******************************************************************************************/
/* Type Info Stuff */
FILL_OUT_TYPE_INFO(EResource)
/*
ETypeInfo *EResource::GetTypeInfo()
{
    return &m_typeInfo;
}

char *EResource::GetTypeName()
{
    return m_typeInfo.m_name;
}

u32 EResource::GetTypeKey()
{
    return m_typeInfo.m_key;
}

u16 EResource::GetTypeVersion()
{
    return m_typeInfo.m_version;
}

u16 EResource::GetReadVersion()
{
    return m_typeInfo.m_readVersion;
}

ETypeInfo *EResource::RegisterType(u16 version)
{
    return m_typeInfo.Register((FnNew)New, version, "EResource", &m_typeInfo);*/
}
/******************************************************************************************/
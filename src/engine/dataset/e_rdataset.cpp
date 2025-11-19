/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "e_rdataset.h"

ERDataset::ERDataset()
{

}

void ERDataset::Load(EFile *pFile, u32 uLength)
{

}
/******************************************************************************************/
/* Type Info Stuff */
ETypeInfo ERDataset::m_typeInfo;

void ERDataset::SafeDelete()
{
}

ERDataset *ERDataset::New()
{
    return new ERDataset();
}

ETypeInfo *ERDataset::GetTypeInfo()
{
    return &m_typeInfo;
}

char *ERDataset::GetTypeName()
{
    return m_typeInfo.m_name;
}

u32 ERDataset::GetTypeKey()
{
    return m_typeInfo.m_key;
}

u16 ERDataset::GetTypeVersion()
{
    return m_typeInfo.m_version;
}

u16 ERDataset::GetReadVersion()
{
    return m_typeInfo.m_readVersion;
}

ETypeInfo *ERDataset::RegisterType(u16 version)
{
    return m_typeInfo.Register((FnNew)New, version, "ERDataset",
                               &m_typeInfo);
}
/******************************************************************************************/
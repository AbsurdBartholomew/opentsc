/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/

#include "e_rrletexture.h"

#include "engine/memory/e_memman.h"

ETypeInfo ERRleTexture::m_typeInfo;

ERRleTexture::ERRleTexture()
{
    m_nImageBuf = NULL;
    m_nPalette = NULL;
}

ERRleTexture::~ERRleTexture()
{
    _memmanFree(m_nImageBuf);
    _memmanFree(m_nPalette);
}

ERRleTexture *ERRleTexture::New()
{
    return new ERRleTexture();
}

void ERRleTexture::Load(EStream &s)
{
}

void ERRleTexture::RestartDecompression()
{
    u8 uVar1;
    u32 *puVar2;

    m_nRunCount = '\0';
    m_bFrontHalf = 1;
    m_nImageBufIndex = 0;

    uVar1 = GetEightBitNum();
    m_nRunLength = uVar1;

    if ((uVar1 & 0xffU) >> 7 == 0)
    {
        m_nMode = '\0';

        if (m_bFourBitImage == 0)
        {
            uVar1 = GetEightBitNum();
            puVar2 = m_nPalette;
        }
        else
        {
            uVar1 = GetFourBitNum();
            puVar2 = m_nPalette;
        }
        m_nRunValue = puVar2[uVar1];
    }
    else
    {
        m_nMode = '\x01';
        m_nRunLength = -uVar1;
    }
}

u32 ERRleTexture::GetNextPixel()
{
    u32 uVar1;

    if (*(int *)&m_bFourBitImage == 0)
    {
        uVar1 = GetNextEightBitPixel();
    }
    else
    {
        uVar1 = GetNextFourBitPixel();
    }
    return uVar1;
}

u32 ERRleTexture::GetNextFourBitPixel()
{
    u32 nRetVal;

    u8 bVar1;
    u8 uVar2;
    u32 uVar3;
    u32 uVar4;

    if (m_nMode == '\x01')
    {
        uVar2 = GetFourBitNum();
        bVar1 = m_nRunCount + 1;
        uVar4 = m_nPalette[(char)uVar2];
        m_nRunCount = bVar1;
        if (bVar1 < m_nRunLength)
        {
            return uVar4;
        }
        m_nRunCount = '\0';
        uVar2 = GetEightBitNum();
        m_nRunLength = uVar2;
        uVar2 = GetFourBitNum();
        uVar3 = m_nPalette[(char)uVar2];
        m_nMode = '\0';
    }
    else
    {
        bVar1 = m_nRunCount + 1;
        uVar4 = m_nRunValue;
        m_nRunCount = bVar1;
        if (bVar1 < m_nRunLength)
        {
            return uVar4;
        }
        m_nRunCount = '\0';
        uVar2 = GetEightBitNum();
        m_nRunLength = uVar2;
        if (((int)(char)uVar2 & 0xffU) >> 7 != 0)
        {
            m_nMode = '\x01';
            m_nRunLength = -uVar2;
            return uVar4;
        }
        m_nMode = '\0';
        uVar2 = GetFourBitNum();
        uVar3 = m_nPalette[(char)uVar2];
    }
    m_nRunValue = uVar3;
    return uVar4;
}

u32 ERRleTexture::GetNextEightBitPixel()
{
    u32 nRetVal;

    u8 bVar1;
    u8 uVar2;
    u32 uVar3;

    if (m_nMode == '\x01')
    {
        uVar2 = GetEightBitNum();
        bVar1 = m_nRunCount + 1;
        uVar3 = m_nPalette[(char)uVar2];
        m_nRunCount = bVar1;
        if (bVar1 < m_nRunLength)
        {
            return uVar3;
        }
        m_nRunCount = '\0';
        uVar2 = GetEightBitNum();
        m_nRunLength = uVar2;
        if (((int)(char)uVar2 & 0xffU) >> 7 == 0)
        {
            m_nMode = '\0';
            goto LAB_00134e48;
        }
    }
    else
    {
        bVar1 = m_nRunCount + 1;
        uVar3 = m_nRunValue;
        m_nRunCount = bVar1;
        if (bVar1 < m_nRunLength)
        {
            return uVar3;
        }
        m_nRunCount = '\0';
        uVar2 = GetEightBitNum();
        m_nRunLength = uVar2;
        if (((int)(char)uVar2 & 0xffU) >> 7 == 0)
        {
            m_nMode = '\0';
        LAB_00134e48:
            uVar2 = GetEightBitNum();
            m_nRunValue = m_nPalette[(char)uVar2];
            return uVar3;
        }
    }
    m_nMode = '\x01';
    m_nRunLength = -uVar2;
    return uVar3;
}

u8 ERRleTexture::GetFourBitNum()
{
    u8 nRetVal;

    u8 bVar1;
    u32 uVar2;

    uVar2 = m_nImageBufIndex;
    if (*(int *)&m_bFrontHalf != 0)
    {
        bVar1 = m_nImageBuf[uVar2];
        m_bFrontHalf = 0;
        return bVar1 >> 4;
    }
    bVar1 = m_nImageBuf[uVar2];
    m_nImageBufIndex = uVar2 + 1;
    m_bFrontHalf = 1;
    return bVar1 & 0xf;
}

u8 ERRleTexture::GetEightBitNum()
{
    u8 nRetVal;

    u32 uVar1;
    u8 bVar2;

    uVar1 = m_nImageBufIndex;
    if (*(int *)&m_bFrontHalf == 0)
    {
        bVar2 = m_nImageBuf[uVar1];
        m_nImageBufIndex = uVar1 + 1;
        bVar2 = (u8)((bVar2 & 0xf) << 4) | m_nImageBuf[uVar1 + 1] >> 4;
    }
    else
    {
        bVar2 = m_nImageBuf[uVar1];
        m_nImageBufIndex = uVar1 + 1;
    }
    return bVar2;
}

void ERRleTexture::SafeDelete()
{
}

/******************************************************************************************/
/* Type Info Stuff */
ETypeInfo *ERRleTexture::GetTypeInfo()
{
    return &m_typeInfo;
}

char *ERRleTexture::GetTypeName()
{
    return m_typeInfo.m_name;
}

u32 ERRleTexture::GetTypeKey()
{
    return m_typeInfo.m_key;
}

u16 ERRleTexture::GetTypeVersion()
{
    return m_typeInfo.m_version;
}

u16 ERRleTexture::GetReadVersion()
{
    return m_typeInfo.m_readVersion;
}

ETypeInfo *ERRleTexture::RegisterType(u16 version)
{
    return m_typeInfo.Register((FnNew)New, version, "ERRleTexture", &m_typeInfo);
}

ERRleTexture *ERRleTexture::CreateCopy()
{
    CreateCopy();
}
/******************************************************************************************/

u32 *ERRleTexture::GetPalette()
{
    return m_nPalette;
}

u32 ERRleTexture::GetPaletteSize()
{
    u32 uVar1;

    uVar1 = 0x10;
    if (*(int *)&m_bFourBitImage == 0)
    {
        uVar1 = 0x100;
    }
    return uVar1;
}
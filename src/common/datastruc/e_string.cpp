/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "e_string.h"

#include <string.h>
#include <stdio.h>

#include "common/types.h"
#include "engine/memory/e_memman.h"

char _estringNull[1] =
    {
        /* [0] = */ 0};

// <error>\0
char _estringError[8] =
    {
        '<', 'e', 'r', 'r', 'o', 'r', '>', '\0'};

EString::EString()
{
    m_p = "\0";
}

EString::EString(char c)
{
    char szBuffer[2];

    szBuffer[1] = '\0';
    szBuffer[0] = c;
    MakeCopy(szBuffer);
}

EString::EString(char *szSource1, char *szSource2)
{
    int len1;
    int len2;
    int len;
    char *pData;

    char *pDest;
    size_t sVar1;
    size_t sVar2;
    int iVar3;
    u32 nBytes;

    sVar1 = strlen(szSource1);
    sVar2 = strlen(szSource2);
    nBytes = (u32)sVar1;
    iVar3 = nBytes + (int)sVar2;
    if (iVar3 == 0)
    {
        SetToNull();
    }
    else
    {
        pDest = (char *)_memmanAlloc(iVar3 + 1, 4);
        if (pDest == (char *)0x0)
        {
            SetToError();
        }
        else
        {
            memcpy(pDest, szSource1, nBytes);
            memcpy(pDest + nBytes, szSource2, (int)sVar2 + 1);
            this->m_p = pDest;
        }
    }
}

void EString::SetToNull()
{
    m_p = _estringNull;
}

void EString::SetToError()
{
    m_p = _estringError;
}

void EString::Deallocate(char *p)
{
    if ((p != _estringNull) && (p != _estringError))
    {
        _memmanFree(p);
    }
}

// TODO: One of those big functions from hell :> Totally requires rewriting
int EString::Tokenize(char sep, TArray<EString> &tokens)
{
    return 0;
}

void EString::MakeCopy(char *szSource)
{
    int len;
    int allocSize;
    char *pData;

    char *pDest;
    size_t sVar1;
    u32 size;

    if (szSource == NULL)
    {
        sVar1 = 0;
    }
    else
    {
        sVar1 = strlen(szSource);
    }
    size = (int)sVar1 + 1;
    if (sVar1 == 0)
    {
        SetToNull();
    }
    else
    {
        pDest = (char *)_memmanAlloc(size, 4);
        if (pDest == NULL)
        {
            SetToError();
        }
        else
        {
            memcpy(pDest, szSource, size);
            this->m_p = pDest;
        }
    }
}

int EString::GetLength()
{
    return strlen(m_p);
}

EString EString::Mid(int pos)
{
    EString str = EString();
    str = m_p;
    int in_a2_lo = 0; // ?

    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
    str.MakeCopy((char *)(*(int *)pos + in_a2_lo));
    /* end of inlined section */
    return str;
}

EString EString::Left(int count)
{
    EString str = EString();
    str = m_p;
    int pos;

    char *pcVar1;
    int in_a2_lo = 0; // ?

    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
    // pcVar1 = __opPc__C7EString((EString *)count);
    pcVar1 = "a";

    str.MakeCopy(pcVar1);
    str.m_p[in_a2_lo] = '\0';
    // pcVar1 = __opPc__C7EString(str);
    str.MakeCopy(pcVar1);
    str.Deallocate(str.m_p);
    /* end of inlined section */
    return str;
}

EString EString::Right(int count)
{
    EString str = EString();
    str = m_p;
    int iVar1;
    int in_a2_lo = 0; // ?

    iVar1 = GetLength();
    str.MakeCopy((char *)(*(int *)count + (iVar1 - in_a2_lo)));
    return str;
}
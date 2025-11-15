/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "common/util/e_checksum.h"
#include "common/storage/e_storable.h"

ETypeInfo *ETypeInfo::m_pTreeHead;
ETypeInfo *ETypeInfo::m_pListHead;
int ETypeInfo::m_count;

ETypeInfo::ETypeInfo()
{
    
}

ETypeInfo *ETypeInfo::Register(FnNew pfnNew, u16 version, char *name, ETypeInfo *pBaseClass)
{
    char *string;

    u32 uVar1;

    m_pfnNew = pfnNew;
    m_name = name;

    uVar1 = EChecksum::Compute(name);

    if (pBaseClass == this)
    {
        pBaseClass = NULL;
    }
    m_key = uVar1;
    m_version = version;
    m_count++;
    m_readVersion = -1;
    m_pBaseClass = pBaseClass;
    Insert();

    return this;
}

EStorable *ETypeInfo::New()
{
    return new EStorable();
}

void ETypeInfo::Insert()
{
    ETypeInfo *pLast;
    ETypeInfo *pType;

    ETypeInfo *pEVar1;
    u32 uVar2;
    ETypeInfo *pEVar3;

    pEVar1 = m_pTreeHead;
    pEVar3 = NULL;
    this->m_pListNext = m_pListHead;
    m_pListHead = this;
    if (pEVar1 == NULL)
    {
    LAB_0031888c:
        pEVar1 = this;
        if (pEVar3 != NULL)
        {
            if (this->m_key < pEVar3->m_key)
            {
                pEVar3->m_pTreeLeft = this;
                pEVar1 = m_pTreeHead;
            }
            else
            {
                pEVar3->m_pTreeRight = this;
                pEVar1 = m_pTreeHead;
            }
        }
        m_pTreeHead = pEVar1;
        this->m_pTreeLeft = NULL;
        this->m_pTreeRight = NULL;
    }
    else
    {
        uVar2 = pEVar1->m_key;
        pEVar3 = pEVar1;
        while (uVar2 != this->m_key)
        {
            if (this->m_key < uVar2)
            {
                pEVar1 = pEVar3->m_pTreeLeft;
            }
            else
            {
                pEVar1 = pEVar3->m_pTreeRight;
            }
            if (pEVar1 == NULL)
                goto LAB_0031888c;
            pEVar3 = pEVar1;
            uVar2 = pEVar1->m_key;
        }
    }
}

ETypeInfo *ETypeInfo::Find(u32 key)
{
    ETypeInfo *pType;

    ETypeInfo *pEVar1;

    pEVar1 = m_pTreeHead;
    while (true)
    {
        while (true)
        {
            if (pEVar1 == NULL)
            {
                return NULL;
            }
            if (pEVar1->m_key <= key)
                break;
            pEVar1 = pEVar1->m_pTreeLeft;
        }
        if (key <= pEVar1->m_key)
            break;
        pEVar1 = pEVar1->m_pTreeRight;
    }
    return pEVar1;
}

bool ETypeInfo::IsDerivedFrom(ETypeInfo *pType)
{
    ETypeInfo *pCompareType;

    do
    {
        if (pCompareType == pType)
        {
            return true;
        }
        /* inlined from c:/eor/src2/common/storage/e_typeinfo.h */
        pCompareType = m_pBaseClass;
        /* end of inlined section */
    } while (pCompareType != NULL);

    return false;
}

u32 ETypeInfo::CalcKey(char *string)
{
    return EChecksum::Compute(string);
}
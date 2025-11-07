// STATUS: NOT STARTED

#include "e_typeinfo.h"

ETypeInfo *ETypeInfo::m_pTreeHead = NULL;
ETypeInfo *ETypeInfo::m_pListHead = NULL;
int ETypeInfo::m_count = 0;

ETypeInfo* ETypeInfo::Register(FnNew pfnNew, u16 version, char *name, ETypeInfo *pBaseClass) {
	char *string;
	
  uint uVar1;
  
                    /* inlined from c:/eor/src2/common/storage/e_typeinfo.h */
                    /* end of inlined section */
  this->m_pfnNew = pfnNew;
                    /* inlined from c:/eor/src2/common/storage/e_typeinfo.h */
  this->m_name = name;
  uVar1 = Compute__9EChecksumPCc(name);
                    /* end of inlined section */
  if (pBaseClass == this) {
    pBaseClass = (ETypeInfo *)0x0;
  }
  this->m_key = uVar1;
  this->m_version = version;
  _9ETypeInfo_m_count = _9ETypeInfo_m_count + 1;
  this->m_readVersion = -1;
  this->m_pBaseClass = pBaseClass;
  Insert__9ETypeInfo(this);
  return this;
}

void ETypeInfo::Insert() {
	ETypeInfo *pLast;
	ETypeInfo *pType;
	
  ETypeInfo *pEVar1;
  uint uVar2;
  ETypeInfo *pEVar3;
  
  pEVar1 = _9ETypeInfo_m_pTreeHead;
  pEVar3 = (ETypeInfo *)0x0;
  this->m_pListNext = _9ETypeInfo_m_pListHead;
  _9ETypeInfo_m_pListHead = this;
  if (pEVar1 == (ETypeInfo *)0x0) {
LAB_0031888c:
    pEVar1 = this;
    if (pEVar3 != (ETypeInfo *)0x0) {
      if (this->m_key < pEVar3->m_key) {
        pEVar3->m_pTreeLeft = this;
        pEVar1 = _9ETypeInfo_m_pTreeHead;
      }
      else {
        pEVar3->m_pTreeRight = this;
        pEVar1 = _9ETypeInfo_m_pTreeHead;
      }
    }
    _9ETypeInfo_m_pTreeHead = pEVar1;
    this->m_pTreeLeft = (ETypeInfo *)0x0;
    this->m_pTreeRight = (ETypeInfo *)0x0;
  }
  else {
    uVar2 = pEVar1->m_key;
    pEVar3 = pEVar1;
    while (uVar2 != this->m_key) {
      if (this->m_key < uVar2) {
        pEVar1 = pEVar3->m_pTreeLeft;
      }
      else {
        pEVar1 = pEVar3->m_pTreeRight;
      }
      if (pEVar1 == (ETypeInfo *)0x0) goto LAB_0031888c;
      pEVar3 = pEVar1;
      uVar2 = pEVar1->m_key;
    }
  }
  return;
}

ETypeInfo* ETypeInfo::Find(u32 key) {
	ETypeInfo *pType;
	
  ETypeInfo *pEVar1;
  
  pEVar1 = _9ETypeInfo_m_pTreeHead;
  while( true ) {
    while( true ) {
      if (pEVar1 == (ETypeInfo *)0x0) {
        return (ETypeInfo *)0x0;
      }
      if (pEVar1->m_key <= key) break;
      pEVar1 = pEVar1->m_pTreeLeft;
    }
    if (key <= pEVar1->m_key) break;
    pEVar1 = pEVar1->m_pTreeRight;
  }
  return pEVar1;
}

bool ETypeInfo::IsDerivedFrom(ETypeInfo *pType) {
	ETypeInfo *pCompareType;
	
  do {
    if (this == pType) {
      return true;
    }
                    /* inlined from c:/eor/src2/common/storage/e_typeinfo.h */
    this = this->m_pBaseClass;
                    /* end of inlined section */
  } while (this != (ETypeInfo *)0x0);
  return false;
}

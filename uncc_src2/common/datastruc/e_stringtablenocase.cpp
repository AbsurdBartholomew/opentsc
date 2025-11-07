// STATUS: NOT STARTED

#include "e_stringtablenocase.h"

EStringTableNoCase* EStringTableNoCase::EStringTableNoCase() {
	TLinkedList<EStringTableNoCaseNode,0,4> *this;
	TLinkedList<EStringTableNoCaseNode,0,4> *this;
	TLinkedList<EStringTableNoCaseNode,0,4> *this;
	
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_list).m_pTail = (EStringTableNoCaseNode *)0x0;
                    /* end of inlined section */
  this->m_tableSize = 1;
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_list).m_pHead = (EStringTableNoCaseNode *)0x0;
                    /* end of inlined section */
  this->m_tableMask = 0;
  this->m_nNodes = 0;
  this->m_table = (EStringTableNoCaseNode **)0x0;
  return this;
}

EStringTableNoCase* EStringTableNoCase::EStringTableNoCase(EStringTableNoCase &s) {
	TLinkedList<EStringTableNoCaseNode,0,4> *this;
	TLinkedList<EStringTableNoCaseNode,0,4> *this;
	TLinkedList<EStringTableNoCaseNode,0,4> *this;
	
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_list).m_pTail = (EStringTableNoCaseNode *)0x0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_list).m_pHead = (EStringTableNoCaseNode *)0x0;
                    /* end of inlined section */
  this->m_nNodes = 0;
  this->m_table = (EStringTableNoCaseNode **)0x0;
  InitTable__18EStringTableNoCasei(this,s->m_tableSize);
  SetValues__18EStringTableNoCaseRC18EStringTableNoCase(this,s);
  return this;
}

void EStringTableNoCase::~EStringTableNoCase(int __in_chrg) {
	void *pAddress;
	
  RemoveAll__18EStringTableNoCase(this);
  _memmanFree__FPv(this->m_table);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

u32 EStringTableNoCase::Hash(char *szKey) {
	u32 value;
	char *pos;
	char c;
	
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  cVar2 = *szKey;
  cVar1 = *szKey;
  while (cVar1 != '\0') {
    iVar3 = (int)cVar2;
    if (iVar3 - 0x61U < 0x1a) {
      iVar3 = (iVar3 + -0x20) * 0x1000000 >> 0x18;
    }
    szKey = szKey + 1;
    uVar4 = uVar4 * 5 + iVar3;
    cVar2 = *szKey;
    cVar1 = *szKey;
  }
  return uVar4 & this->m_tableMask;
}

void EStringTableNoCase::InitTable(int tableSize) {
  EStringTableNoCaseNode **ppEVar1;
  
  _memmanFree__FPv(this->m_table);
  ppEVar1 = (EStringTableNoCaseNode **)_memmanAlloc__FUiUi(tableSize << 2,4);
  this->m_tableSize = tableSize;
  this->m_table = ppEVar1;
  this->m_tableMask = tableSize - 1;
  ClearTable__18EStringTableNoCase(this);
  return;
}

void EStringTableNoCase::ClearTable() {
  if (this->m_table != (EStringTableNoCaseNode **)0x0) {
    memset(this->m_table,0,(long)(int)(this->m_tableSize << 2));
  }
  return;
}

STNCValue EStringTableNoCase::operator[](char *szKey) {
	STNCValue value;
	
  undefined8 unaff_retaddr;
  uint value;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  Find__C18EStringTableNoCasePCcPUi(this,szKey,&value);
  return value;
}

STNCValue& EStringTableNoCase::operator[](char *szKey) {
	u32 hash;
	EStringTableNoCaseNode *pNode;
	
  uint hash;
  undefined1 *puVar1;
  
  hash = Hash__C18EStringTableNoCasePCc(this,szKey);
  puVar1 = Find__C18EStringTableNoCaseUiPCc(this,hash,szKey);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = InsertNew__18EStringTableNoCaseUiPCcUi(this,hash,szKey,0);
  }
  return (uint *)(puVar1 + 0x10);
}

STNCIterator EStringTableNoCase::SetValue(char *szKey, STNCValue value) {
	u32 hash;
	EStringTableNoCaseNode *pNode;
	
  uint hash;
  undefined1 *puVar1;
  
  hash = Hash__C18EStringTableNoCasePCc(this,szKey);
  puVar1 = Find__C18EStringTableNoCaseUiPCc(this,hash,szKey);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = InsertNew__18EStringTableNoCaseUiPCcUi(this,hash,szKey,value);
  }
  else {
    *(uint *)(puVar1 + 0x10) = value;
  }
  return puVar1;
}

STNCIterator EStringTableNoCase::Insert(char *szKey, STNCValue value) {
	u32 hash;
	
  uint hash;
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  hash = Hash__C18EStringTableNoCasePCc(this,szKey);
  puVar1 = Find__C18EStringTableNoCaseUiPCc(this,hash,szKey);
  puVar2 = (undefined1 *)0x0;
  if (puVar1 == (undefined1 *)0x0) {
    puVar2 = InsertNew__18EStringTableNoCaseUiPCcUi(this,hash,szKey,value);
  }
  return puVar2;
}

STNCIterator EStringTableNoCase::InsertNew(u32 hash, char *szKey, STNCValue value) {
	EString *this;
	TLinkedList<EStringTableNoCaseNode,0,4> *this;
	
  EStringTableNoCaseNode **ppEVar1;
  EStringTableNoCaseNode *pEVar2;
  EStringTableNoCaseNode *pEVar3;
  uint uVar4;
  
  if (this->m_table == (EStringTableNoCaseNode **)0x0) {
    InitTable__18EStringTableNoCasei(this,this->m_tableSize);
  }
                    /* inlined from c:/eor/src2/common/datastruc/e_stringtablenocase.h */
  pEVar3 = (EStringTableNoCaseNode *)_allocBucketAlloc__FUiUi(0x14,0x14);
  SetToNull__7EString(&pEVar3->key);
                    /* end of inlined section */
  if (pEVar3 == (EStringTableNoCaseNode *)0x0) {
    pEVar3 = (EStringTableNoCaseNode *)0x0;
  }
  else {
    __as__7EStringPCc(&pEVar3->key,szKey);
    pEVar3->value = value;
    ppEVar1 = this->m_table;
    pEVar3->pEntryNext = ppEVar1[hash];
    ppEVar1[hash] = pEVar3;
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
    pEVar3->pListLast = (this->m_list).m_pTail;
    pEVar2 = (this->m_list).m_pTail;
    if (pEVar2 == (EStringTableNoCaseNode *)0x0) {
      (this->m_list).m_pHead = pEVar3;
    }
    else {
      pEVar2->pListNext = pEVar3;
    }
    pEVar3->pListNext = (EStringTableNoCaseNode *)0x0;
    (this->m_list).m_pTail = pEVar3;
                    /* end of inlined section */
    uVar4 = this->m_nNodes + 1;
    this->m_nNodes = uVar4;
    if (this->m_tableSize < uVar4) {
      GrowTable__18EStringTableNoCase(this);
    }
  }
  return (undefined1 *)pEVar3;
}

bool EStringTableNoCase::Remove(char *szKey) {
	u32 hash;
	STNCIterator i;
	
  uint hash;
  undefined1 *i;
  
  hash = Hash__C18EStringTableNoCasePCc(this,szKey);
  i = Find__C18EStringTableNoCaseUiPCc(this,hash,szKey);
  if (i != (undefined1 *)0x0) {
    Remove__18EStringTableNoCaseUiP19STNCIteratorPtrType(this,hash,i);
  }
  return i != (undefined1 *)0x0;
}

void EStringTableNoCase::Remove(STNCIterator i) {
	STNCIterator i;
	
  uint hash;
  
  hash = Hash__C18EStringTableNoCasePCc(this,*(char **)(i + 0xc));
  Remove__18EStringTableNoCaseUiP19STNCIteratorPtrType(this,hash,i);
  return;
}

void EStringTableNoCase::Remove(u32 hash, STNCIterator i) {
	EStringTableNoCaseNode **ppNode;
	EStringTableNoCaseNode *pNode;
	TLinkedList<EStringTableNoCaseNode,0,4> *this;
	EStringTableNoCaseNode *pNode;
	void *pNode;
	EStringTableNoCaseNode *pNode;
	void *pNode;
	void *pNode;
	EStringTableNoCaseNode *pNode;
	void *pNode;
	EStringTableNoCaseNode *pNode;
	EStringTableNoCaseNode *pNode;
	EStringTableNoCaseNode *this;
	void *p;
	
  EStringTableNoCaseNode *pEVar1;
  uint uVar2;
  EStringTableNoCaseNode **ppEVar3;
  EStringTableNoCaseNode *pAddress;
  
  if (this->m_table == (EStringTableNoCaseNode **)0x0) {
    InitTable__18EStringTableNoCasei(this,this->m_tableSize);
  }
  ppEVar3 = this->m_table + hash;
  pAddress = *ppEVar3;
  pEVar1 = _GM_LIGHT;
  if (pAddress != (EStringTableNoCaseNode *)0x0) {
    if (pAddress == (EStringTableNoCaseNode *)i) {
      pEVar1 = pAddress->pEntryNext;
    }
    else {
      do {
        ppEVar3 = &pAddress->pEntryNext;
        pAddress = pAddress->pEntryNext;
        if (pAddress == (EStringTableNoCaseNode *)0x0) goto LAB_00318f00;
      } while (pAddress != (EStringTableNoCaseNode *)i);
      pEVar1 = pAddress->pEntryNext;
    }
  }
LAB_00318f00:
  *ppEVar3 = pEVar1;
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  if ((this->m_list).m_pHead == pAddress) {
    (this->m_list).m_pHead = pAddress->pListNext;
  }
  else {
    pAddress->pListLast->pListNext = pAddress->pListNext;
  }
  if ((this->m_list).m_pTail == pAddress) {
    (this->m_list).m_pTail = pAddress->pListLast;
  }
  else {
    pAddress->pListNext->pListLast = pAddress->pListLast;
  }
                    /* end of inlined section */
  if (pAddress == (EStringTableNoCaseNode *)0x0) {
    uVar2 = this->m_nNodes;
  }
  else {
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
    Deallocate__7EStringPc(&pAddress->key,(pAddress->key).m_p);
    _allocBucketFree__FPvUiUi(pAddress,0x14,0x14);
                    /* end of inlined section */
    uVar2 = this->m_nNodes;
  }
  this->m_nNodes = uVar2 - 1;
  return;
}

STNCIterator EStringTableNoCase::Find(char *szKey, STNCValue *pOutValue) {
	EStringTableNoCaseNode *pNode;
	
  EStringTableNoCaseNode *pEVar1;
  uint uVar2;
  int iVar3;
  
  if (this->m_table == (EStringTableNoCaseNode **)0x0) {
    InitTable__18EStringTableNoCasei(this,this->m_tableSize);
  }
  uVar2 = Hash__C18EStringTableNoCasePCc(this,szKey);
  pEVar1 = this->m_table[uVar2];
  while( true ) {
    if (pEVar1 == (EStringTableNoCaseNode *)0x0) {
      return (undefined1 *)0x0;
    }
    iVar3 = CompareNoCase__C7EStringPCc(&pEVar1->key,szKey);
    if (iVar3 == 0) break;
    pEVar1 = pEVar1->pEntryNext;
  }
  if (pOutValue == (uint *)0x0) {
    return (undefined1 *)pEVar1;
  }
  *pOutValue = pEVar1->value;
  return (undefined1 *)pEVar1;
}

STNCIterator EStringTableNoCase::Find(u32 hash, char *szKey) {
	EStringTableNoCaseNode *pNode;
	char *szOther;
	
  EStringTableNoCaseNode *pEVar1;
  int iVar2;
  
  if (this->m_table == (EStringTableNoCaseNode **)0x0) {
    InitTable__18EStringTableNoCasei(this,this->m_tableSize);
  }
  pEVar1 = this->m_table[hash];
  while( true ) {
    if (pEVar1 == (EStringTableNoCaseNode *)0x0) {
      return (undefined1 *)0x0;
    }
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
    iVar2 = Compare__C7EStringPCc(&pEVar1->key,szKey);
                    /* end of inlined section */
    if (iVar2 == 0) break;
    pEVar1 = pEVar1->pEntryNext;
  }
  return (undefined1 *)pEVar1;
}

void EStringTableNoCase::RemoveAll() {
	TLinkedList<EStringTableNoCaseNode,0,4> *this;
	EStringTableNoCaseNode *pNode;
	TLinkedList<EStringTableNoCaseNode,0,4> *this;
	EStringTableNoCaseNode *pNext;
	void *pNode;
	EStringTableNoCaseNode *this;
	void *p;
	TLinkedList<EStringTableNoCaseNode,0,4> *this;
	
  EStringTableNoCaseNode *pEVar1;
  EStringTableNoCaseNode *pAddress;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  pAddress = (this->m_list).m_pHead;
  if (pAddress == (EStringTableNoCaseNode *)0x0) {
    (this->m_list).m_pTail = (EStringTableNoCaseNode *)0x0;
  }
  else {
    do {
      pEVar1 = pAddress->pListNext;
      if (pAddress != (EStringTableNoCaseNode *)0x0) {
                    /* inlined from c:/eor/src2/common/datastruc/e_string.h */
        Deallocate__7EStringPc(&pAddress->key,(pAddress->key).m_p);
        _allocBucketFree__FPvUiUi(pAddress,0x14,0x14);
      }
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
      pAddress = pEVar1;
    } while (pEVar1 != (EStringTableNoCaseNode *)0x0);
    (this->m_list).m_pTail = (EStringTableNoCaseNode *)0x0;
  }
                    /* end of inlined section */
                    /* end of inlined section */
  (this->m_list).m_pHead = (EStringTableNoCaseNode *)0x0;
  ClearTable__18EStringTableNoCase(this);
  this->m_nNodes = 0;
  return;
}

void EStringTableNoCase::FreeAll() {
	STNCIterator i;
	EStringTableNoCase *this;
	TLinkedList<EStringTableNoCaseNode,0,4> *this;
	STNCIterator i;
	STNCIterator i;
	
  EStringTableNoCaseNode *pEVar1;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  for (pEVar1 = (this->m_list).m_pHead; pEVar1 != (EStringTableNoCaseNode *)0x0;
      pEVar1 = pEVar1->pListNext) {
                    /* end of inlined section */
    _memmanFree__FPv((void *)pEVar1->value);
                    /* inlined from c:/eor/src2/common/datastruc/e_stringtablenocase.h */
                    /* end of inlined section */
  }
  RemoveAll__18EStringTableNoCase(this);
  return;
}

int EStringTableNoCase::GetSize() {
	EStringTableNoCaseNode *p;
	int count;
	void *pNode;
	
  EStringTableNoCaseNode *pEVar1;
  int iVar2;
  
  iVar2 = 0;
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  for (pEVar1 = (this->m_list).m_pHead; pEVar1 != (EStringTableNoCaseNode *)0x0;
      pEVar1 = pEVar1->pListNext) {
    iVar2 = iVar2 + 1;
  }
                    /* end of inlined section */
  return iVar2;
}

EStringTableNoCase& EStringTableNoCase::operator=(EStringTableNoCase &s) {
  RemoveAll__18EStringTableNoCase(this);
  SetValues__18EStringTableNoCaseRC18EStringTableNoCase(this,s);
  return this;
}

void EStringTableNoCase::GrowTable() {
	EStringTableNoCaseNode *pNode;
	TLinkedList<EStringTableNoCaseNode,0,4> *this;
	void *pNode;
	
  EStringTableNoCaseNode **ppEVar1;
  uint uVar2;
  char *szKey;
  EStringTableNoCaseNode *pEVar3;
  
  InitTable__18EStringTableNoCasei(this,this->m_tableSize << 1);
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  pEVar3 = (this->m_list).m_pHead;
                    /* end of inlined section */
  if (pEVar3 != (EStringTableNoCaseNode *)0x0) {
                    /* end of inlined section */
    szKey = (pEVar3->key).m_p;
    while( true ) {
      uVar2 = Hash__C18EStringTableNoCasePCc(this,szKey);
      ppEVar1 = this->m_table;
      pEVar3->pEntryNext = ppEVar1[uVar2];
      ppEVar1[uVar2] = pEVar3;
      pEVar3 = pEVar3->pListNext;
      if (pEVar3 == (EStringTableNoCaseNode *)0x0) break;
      szKey = (pEVar3->key).m_p;
    }
  }
  return;
}

void EStringTableNoCase::SetValues(EStringTableNoCase &s) {
	STNCIterator i;
	STNCIterator i;
	STNCIterator i;
	STNCIterator i;
	
  char *szKey;
  EStringTableNoCaseNode *pEVar1;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (s->m_list).m_pHead;
                    /* end of inlined section */
  if (pEVar1 != (EStringTableNoCaseNode *)0x0) {
                    /* end of inlined section */
    szKey = (pEVar1->key).m_p;
    while( true ) {
      SetValue__18EStringTableNoCasePCcUi(this,szKey,pEVar1->value);
                    /* inlined from c:/eor/src2/common/datastruc/e_stringtablenocase.h */
      pEVar1 = pEVar1->pListNext;
                    /* end of inlined section */
      if (pEVar1 == (EStringTableNoCaseNode *)0x0) break;
      szKey = (pEVar1->key).m_p;
    }
  }
  return;
}

bool EStringTableNoCase::operator==(EStringTableNoCase &s) {
	STNCIterator si;
	EStringTableNoCase *this;
	TLinkedList<EStringTableNoCaseNode,0,4> *this;
	STNCIterator i;
	STNCValue tvalue;
	STNCIterator i;
	STNCIterator i;
	
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  char *szKey;
  EStringTableNoCaseNode *pEVar6;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  uint tvalue;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  iVar3 = GetSize__C18EStringTableNoCase(this);
  iVar4 = GetSize__C18EStringTableNoCase(s);
  bVar2 = false;
  if (iVar3 == iVar4) {
                    /* inlined from c:/eor/src2/common/datastruc/e_stringtablenocase.h */
    pEVar6 = (s->m_list).m_pHead;
                    /* end of inlined section */
    bVar2 = true;
    if (pEVar6 != (EStringTableNoCaseNode *)0x0) {
                    /* end of inlined section */
      szKey = (pEVar6->key).m_p;
      while( true ) {
                    /* inlined from c:/eor/src2/common/datastruc/e_stringtablenocase.h */
        uVar1 = pEVar6->value;
                    /* end of inlined section */
        puVar5 = Find__C18EStringTableNoCasePCcPUi(this,szKey,&tvalue);
        if ((puVar5 == (undefined1 *)0x0) || (tvalue != uVar1)) break;
        pEVar6 = pEVar6->pListNext;
                    /* end of inlined section */
        if (pEVar6 == (EStringTableNoCaseNode *)0x0) {
          return true;
        }
        szKey = (pEVar6->key).m_p;
      }
      bVar2 = false;
    }
  }
  return bVar2;
}

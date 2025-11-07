// STATUS: NOT STARTED

#include "e_hashtable.h"

EHashTable* EHashTable::EHashTable(int tableSize) {
	TLinkedList<EHashTableNode,0,4> *this;
	TLinkedList<EHashTableNode,0,4> *this;
	TLinkedList<EHashTableNode,0,4> *this;
	
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_list).m_pTail = (EHashTableNode *)0x0;
                    /* end of inlined section */
  (this->m_list).m_pHead = (EHashTableNode *)0x0;
  InitTable__10EHashTablei(this,tableSize);
  return this;
}

EHashTable* EHashTable::EHashTable(EHashTable &s) {
	TLinkedList<EHashTableNode,0,4> *this;
	TLinkedList<EHashTableNode,0,4> *this;
	TLinkedList<EHashTableNode,0,4> *this;
	
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_list).m_pTail = (EHashTableNode *)0x0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_list).m_pHead = (EHashTableNode *)0x0;
                    /* end of inlined section */
  InitTable__10EHashTablei(this,s->m_tableSize);
  SetValues__10EHashTableRC10EHashTable(this,s);
  return this;
}

void EHashTable::~EHashTable(int __in_chrg) {
	void *pAddress;
	
  RemoveAll__10EHashTable(this);
  _memmanFree__FPv(this->m_table);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EHashTable::InitTable(int tableSize) {
  EHashTableNode **ppEVar1;
  
  ppEVar1 = (EHashTableNode **)_memmanAlloc__FUiUi(tableSize << 2,4);
  this->m_tableSize = tableSize;
  this->m_table = ppEVar1;
  ClearTable__10EHashTable(this);
  return;
}

void EHashTable::ClearTable() {
  memset(this->m_table,0,(long)(int)(this->m_tableSize << 2));
  return;
}

HTValue EHashTable::operator[](HTKey key) {
	HTValue value;
	
  undefined8 unaff_retaddr;
  uint value;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  Find__C10EHashTableUiPUi(this,key,&value);
  return value;
}

HTValue& EHashTable::operator[](HTKey key) {
	EHashTableNode *pNode;
	EHashTable *this;
	HTKey key;
	
  uint hash;
  undefined1 *puVar1;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_hashtable.h */
  hash = (int)key % (int)this->m_tableSize;
  if (this->m_tableSize == 0) {
    trap(7);
  }
                    /* end of inlined section */
  puVar1 = Find__C10EHashTableUiUi(this,hash,key);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = InsertNew__10EHashTableUiUiUi(this,hash,key,0);
  }
  return (uint *)(puVar1 + 0x10);
}

HTIterator EHashTable::SetValue(HTKey key, HTValue value) {
	EHashTableNode *pNode;
	EHashTable *this;
	HTKey key;
	
  uint hash;
  undefined1 *puVar1;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_hashtable.h */
  hash = (int)key % (int)this->m_tableSize;
  if (this->m_tableSize == 0) {
    trap(7);
  }
                    /* end of inlined section */
  puVar1 = Find__C10EHashTableUiUi(this,hash,key);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = InsertNew__10EHashTableUiUiUi(this,hash,key,value);
  }
  else {
    *(uint *)(puVar1 + 0x10) = value;
  }
  return puVar1;
}

HTIterator EHashTable::Insert(HTKey key, HTValue value) {
	EHashTable *this;
	HTKey key;
	
  uint hash;
  undefined1 *puVar1;
  undefined1 *puVar2;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_hashtable.h */
  hash = (int)key % (int)this->m_tableSize;
  if (this->m_tableSize == 0) {
    trap(7);
  }
                    /* end of inlined section */
  puVar1 = Find__C10EHashTableUiUi(this,hash,key);
  puVar2 = (undefined1 *)0x0;
  if (puVar1 == (undefined1 *)0x0) {
    puVar2 = InsertNew__10EHashTableUiUiUi(this,hash,key,value);
  }
  return puVar2;
}

HTIterator EHashTable::InsertNew(u32 hash, HTKey key, HTValue value) {
	EHashTableNode *pNode;
	TLinkedList<EHashTableNode,0,4> *this;
	EHashTableNode *pNewNode;
	EHashTableNode *pNode;
	void *pNode;
	
  EHashTableNode **ppEVar1;
  EHashTableNode *pEVar2;
  EHashTableNode *pEVar3;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_hashtable.h */
  pEVar3 = (EHashTableNode *)_allocBucketAlloc__FUiUi(0x14,0x14);
                    /* end of inlined section */
  if (pEVar3 == (EHashTableNode *)0x0) {
    pEVar3 = (EHashTableNode *)0x0;
  }
  else {
    pEVar3->key = key;
    pEVar3->value = value;
    ppEVar1 = this->m_table;
    pEVar3->pEntryNext = ppEVar1[hash];
    ppEVar1[hash] = pEVar3;
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
    pEVar3->pListLast = (this->m_list).m_pTail;
    pEVar2 = (this->m_list).m_pTail;
    if (pEVar2 == (EHashTableNode *)0x0) {
      (this->m_list).m_pHead = pEVar3;
    }
    else {
      pEVar2->pListNext = pEVar3;
    }
    pEVar3->pListNext = (EHashTableNode *)0x0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
    (this->m_list).m_pTail = pEVar3;
  }
                    /* end of inlined section */
  return (undefined1 *)pEVar3;
}

bool EHashTable::Remove(HTKey key) {
	HTIterator i;
	EHashTable *this;
	HTKey key;
	
  uint hash;
  undefined1 *i;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_hashtable.h */
  hash = (int)key % (int)this->m_tableSize;
  if (this->m_tableSize == 0) {
    trap(7);
  }
                    /* end of inlined section */
  i = Find__C10EHashTableUiUi(this,hash,key);
  if (i != (undefined1 *)0x0) {
    Remove__10EHashTableUiP17HTIteratorPtrType(this,hash,i);
  }
  return i != (undefined1 *)0x0;
}

void EHashTable::Remove(HTIterator i) {
	HTIterator i;
	EHashTable *this;
	
                    /* inlined from c:/eor/src2/common/datastruc/e_hashtable.h */
  if (this->m_tableSize == 0) {
    trap(7);
  }
                    /* end of inlined section */
  Remove__10EHashTableUiP17HTIteratorPtrType(this,*(int *)(i + 0xc) % (int)this->m_tableSize,i);
  return;
}

void EHashTable::Remove(u32 hash, HTIterator i) {
	EHashTableNode **ppNode;
	EHashTableNode *pNode;
	TLinkedList<EHashTableNode,0,4> *this;
	EHashTableNode *pNode;
	void *pNode;
	EHashTableNode *pNode;
	void *pNode;
	void *pNode;
	EHashTableNode *pNode;
	void *pNode;
	EHashTableNode *pNode;
	EHashTableNode *pNode;
	void *p;
	
  EHashTableNode *pEVar1;
  EHashTableNode **ppEVar2;
  EHashTableNode *pAddress;
  
  ppEVar2 = this->m_table + hash;
  pAddress = *ppEVar2;
  pEVar1 = _GM_LIGHT;
  if (pAddress != (EHashTableNode *)0x0) {
    if (pAddress == (EHashTableNode *)i) {
      pEVar1 = pAddress->pEntryNext;
    }
    else {
      do {
        ppEVar2 = &pAddress->pEntryNext;
        pAddress = pAddress->pEntryNext;
        if (pAddress == (EHashTableNode *)0x0) goto LAB_00327840;
      } while (pAddress != (EHashTableNode *)i);
      pEVar1 = pAddress->pEntryNext;
    }
  }
LAB_00327840:
  *ppEVar2 = pEVar1;
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
  _allocBucketFree__FPvUiUi(pAddress,0x14,0x14);
  return;
}

HTIterator EHashTable::Find(HTKey key, HTValue *pOutValue) {
	EHashTableNode *pNode;
	EHashTable *this;
	HTKey key;
	
  EHashTableNode *pEVar1;
  uint uVar2;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_hashtable.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_hashtable.h */
  if (this->m_tableSize == 0) {
    trap(7);
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_hashtable.h */
                    /* end of inlined section */
  pEVar1 = this->m_table[(int)key % (int)this->m_tableSize];
  if (pEVar1 != (EHashTableNode *)0x0) {
    uVar2 = pEVar1->key;
    while( true ) {
      if (uVar2 == key) {
        if (pOutValue != (uint *)0x0) {
          *pOutValue = pEVar1->value;
        }
        return (undefined1 *)pEVar1;
      }
      pEVar1 = pEVar1->pEntryNext;
      if (pEVar1 == (EHashTableNode *)0x0) break;
      uVar2 = pEVar1->key;
    }
  }
  return (undefined1 *)0x0;
}

HTIterator EHashTable::Find(u32 hash, HTKey key) {
	EHashTableNode *pNode;
	
  EHashTableNode *pEVar1;
  uint uVar2;
  
  pEVar1 = this->m_table[hash];
  if (pEVar1 != (EHashTableNode *)0x0) {
    uVar2 = pEVar1->key;
    while( true ) {
      if (uVar2 == key) {
        return (undefined1 *)pEVar1;
      }
      pEVar1 = pEVar1->pEntryNext;
      if (pEVar1 == (EHashTableNode *)0x0) break;
      uVar2 = pEVar1->key;
    }
  }
  return (undefined1 *)0x0;
}

void EHashTable::RemoveAll() {
	TLinkedList<EHashTableNode,0,4> *this;
	EHashTableNode *pNode;
	TLinkedList<EHashTableNode,0,4> *this;
	EHashTableNode *pNext;
	void *pNode;
	void *p;
	TLinkedList<EHashTableNode,0,4> *this;
	
  EHashTableNode *pEVar1;
  EHashTableNode *pAddress;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  pAddress = (this->m_list).m_pHead;
  if (pAddress == (EHashTableNode *)0x0) {
    (this->m_list).m_pTail = (EHashTableNode *)0x0;
  }
  else {
    do {
      pEVar1 = pAddress->pListNext;
      _allocBucketFree__FPvUiUi(pAddress,0x14,0x14);
      pAddress = pEVar1;
    } while (pEVar1 != (EHashTableNode *)0x0);
    (this->m_list).m_pTail = (EHashTableNode *)0x0;
  }
                    /* end of inlined section */
                    /* end of inlined section */
  (this->m_list).m_pHead = (EHashTableNode *)0x0;
  ClearTable__10EHashTable(this);
  return;
}

void EHashTable::FreeAll() {
	HTIterator i;
	EHashTable *this;
	TLinkedList<EHashTableNode,0,4> *this;
	HTIterator i;
	HTIterator i;
	
  EHashTableNode *pEVar1;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  for (pEVar1 = (this->m_list).m_pHead; pEVar1 != (EHashTableNode *)0x0; pEVar1 = pEVar1->pListNext)
  {
                    /* end of inlined section */
    _memmanFree__FPv((void *)pEVar1->value);
                    /* inlined from c:/eor/src2/common/datastruc/e_hashtable.h */
                    /* end of inlined section */
  }
  RemoveAll__10EHashTable(this);
  return;
}

int EHashTable::GetSize() {
	EHashTableNode *p;
	int count;
	void *pNode;
	
  EHashTableNode *pEVar1;
  int iVar2;
  
  iVar2 = 0;
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  for (pEVar1 = (this->m_list).m_pHead; pEVar1 != (EHashTableNode *)0x0; pEVar1 = pEVar1->pListNext)
  {
    iVar2 = iVar2 + 1;
  }
                    /* end of inlined section */
  return iVar2;
}

EHashTable& EHashTable::operator=(EHashTable &s) {
  RemoveAll__10EHashTable(this);
  SetTableSize__10EHashTablei(this,s->m_tableSize);
  SetValues__10EHashTableRC10EHashTable(this,s);
  return this;
}

void EHashTable::AutoSizeTable() {
	int count;
	int tableSize;
	
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = GetSize__C10EHashTable(this);
  iVar3 = 1;
  bVar1 = true;
  if (1 < iVar2) {
    for (iVar3 = 2; iVar3 < iVar2; iVar3 = iVar3 << 1) {
    }
    bVar1 = iVar3 < 2;
  }
  iVar2 = iVar3 + -1;
  if (bVar1) {
    iVar2 = iVar3;
  }
  SetTableSize__10EHashTablei(this,iVar2);
  return;
}

void EHashTable::SetTableSize(int tableSize) {
	EHashTableNode *pNode;
	TLinkedList<EHashTableNode,0,4> *this;
	EHashTable *this;
	HTKey key;
	void *pNode;
	
  EHashTableNode **ppEVar1;
  uint uVar2;
  EHashTableNode *pEVar3;
  
  if (this->m_tableSize != tableSize) {
    _memmanFree__FPv(this->m_table);
    InitTable__10EHashTablei(this,tableSize);
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
    pEVar3 = (this->m_list).m_pHead;
                    /* end of inlined section */
    if (pEVar3 != (EHashTableNode *)0x0) {
                    /* inlined from c:/eor/src2/common/datastruc/e_hashtable.h */
      uVar2 = this->m_tableSize;
      while( true ) {
        if (uVar2 == 0) {
          trap(7);
        }
                    /* end of inlined section */
        ppEVar1 = this->m_table;
                    /* inlined from c:/eor/src2/common/datastruc/e_hashtable.h */
                    /* end of inlined section */
        pEVar3->pEntryNext = ppEVar1[(int)pEVar3->key % (int)uVar2];
        ppEVar1[(int)pEVar3->key % (int)uVar2] = pEVar3;
        pEVar3 = pEVar3->pListNext;
        if (pEVar3 == (EHashTableNode *)0x0) break;
        uVar2 = this->m_tableSize;
      }
    }
  }
  return;
}

void EHashTable::SetValues(EHashTable &s) {
	HTIterator i;
	HTIterator i;
	HTIterator i;
	HTIterator i;
	
  uint key;
  EHashTableNode *pEVar1;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (s->m_list).m_pHead;
                    /* end of inlined section */
  if (pEVar1 != (EHashTableNode *)0x0) {
                    /* end of inlined section */
    key = pEVar1->key;
    while( true ) {
      SetValue__10EHashTableUiUi(this,key,pEVar1->value);
                    /* inlined from c:/eor/src2/common/datastruc/e_hashtable.h */
      pEVar1 = pEVar1->pListNext;
                    /* end of inlined section */
      if (pEVar1 == (EHashTableNode *)0x0) break;
      key = pEVar1->key;
    }
  }
  return;
}

bool EHashTable::operator==(EHashTable &s) {
	HTIterator si;
	EHashTable *this;
	TLinkedList<EHashTableNode,0,4> *this;
	HTIterator i;
	HTValue tvalue;
	HTIterator i;
	HTIterator i;
	
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint key;
  EHashTableNode *pEVar6;
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
  iVar3 = GetSize__C10EHashTable(this);
  iVar4 = GetSize__C10EHashTable(s);
  bVar2 = false;
  if (iVar3 == iVar4) {
                    /* inlined from c:/eor/src2/common/datastruc/e_hashtable.h */
    pEVar6 = (s->m_list).m_pHead;
                    /* end of inlined section */
    bVar2 = true;
    if (pEVar6 != (EHashTableNode *)0x0) {
                    /* end of inlined section */
      key = pEVar6->key;
      while( true ) {
                    /* inlined from c:/eor/src2/common/datastruc/e_hashtable.h */
        uVar1 = pEVar6->value;
                    /* end of inlined section */
        puVar5 = Find__C10EHashTableUiPUi(this,key,&tvalue);
        if ((puVar5 == (undefined1 *)0x0) || (tvalue != uVar1)) break;
        pEVar6 = pEVar6->pListNext;
                    /* end of inlined section */
        if (pEVar6 == (EHashTableNode *)0x0) {
          return true;
        }
        key = pEVar6->key;
      }
      bVar2 = false;
    }
  }
  return bVar2;
}

// STATUS: NOT STARTED

#include "e_storage.h"

struct TNodeList<EStorable *> : ENodeList {
	TNodeList(TNodeList<EStorable *>*, int, void);
	TNodeList();
	TNodeList();
	static EStorable* GetData(/* parameters unknown */);
	NLIterator AddHead();
	NLIterator AddTail();
	void AddHead();
	void AddTail();
	NLIterator InsertBefore();
	NLIterator InsertAfter();
	void Remove();
	NLIterator Search();
	void Delete();
	void DeleteAll();
	void SafeDeleteAll();
	TNodeList<EStorable *>& operator=();
	void MoveContents();
};

struct TRedBlackTree<EStorable *,int> : ERedBlackTree {
	TRedBlackTree<EStorable *,int>& operator=();
	TRedBlackTree();
	TRedBlackTree();
	TRedBlackTree(TRedBlackTree<EStorable *,int>*, int, void);
	int operator[]();
	int& operator[]();
	RBIterator Insert();
	RBIterator Find();
	RBIterator FindFirst();
	RBIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	RBIterator SetValue();
	void SetValue();
	void SetValues();
	static EStorable* GetKey(/* parameters unknown */);
	static int GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

struct TRedBlackTree<ETypeInfo *,TNodeList<int> *> : ERedBlackTree {
	TRedBlackTree<ETypeInfo *,TNodeList<int> *>& operator=();
	TRedBlackTree();
	TRedBlackTree();
	TRedBlackTree(TRedBlackTree<ETypeInfo *,TNodeList<int> *>*, int, void);
	EIntList* operator[]();
	EIntList*& operator[]();
	RBIterator Insert();
	RBIterator Find();
	RBIterator FindFirst();
	RBIterator FindNext();
	bool Remove();
	void Remove();
	bool Delete();
	void Delete();
	RBIterator SetValue();
	void SetValue();
	void SetValues();
	static ETypeInfo* GetKey(/* parameters unknown */);
	static EIntList* GetValue(/* parameters unknown */);
	void DeleteAll();
	void SafeDeleteAll();
};

struct TArray<int> : private EArray {
	TArray();
	TArray();
	TArray();
	TArray();
	TArray(TArray<int>*, int, void);
	int& operator[]();
	int& operator[]();
	int& operator[]();
	int& operator[]();
	TArray<int>& operator=();
	int* operator int *();
	int* operator int *();
	void SetGrowBy(TArray<int>*, int, void);
	int GetSize();
	void SetSize();
	void FreeUnusedBufferSpace();
	int Search();
	bool IsEmpty();
	void Empty();
	void RemoveAll();
	void Insert();
	void Insert();
	void Add();
	void Add();
	void Add();
	void Remove();
	void Delete();
	void SafeDelete();
	void DeleteAll();
	void SafeDeleteAll();
	void FreeAll();
};

EStream& operator<<(EStream &s, EStorable &d) {
	ETypeInfo *pType;
	ETypeInfo *this;
	EStream &s;
	short unsigned int d;
	
  int iVar1;
  EStream__vtable *pEVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  undefined2 local_50 [8];
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
  iVar1 = (*(code *)d->__vtable->GetTypeVersion)
                    ((int)&d->__vtable + (int)*(short *)&d->__vtable->GetTypeKey);
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
  pEVar2 = s->__vtable;
  while( true ) {
                    /* end of inlined section */
    local_50[0] = *(undefined2 *)(iVar1 + 0xc);
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
    (*(code *)pEVar2[1].Write)(&s->m_streamingStructure + *(short *)&pEVar2[1].Read,local_50,2);
    iVar1 = *(int *)(iVar1 + 0x10);
                    /* end of inlined section */
    if (iVar1 == 0) break;
    pEVar2 = s->__vtable;
  }
  (*(code *)d->__vtable[1].Write)((int)&d->__vtable + (int)*(short *)&d->__vtable[1].Read,s);
  return s;
}

EStream& operator>>(EStream &s, EStorable &d) {
	ETypeInfo *pType;
	u16 typeVersion;
	EStream &s;
	ETypeInfo *this;
	
  int iVar1;
  EStream__vtable *pEVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  short typeVersion;
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
  iVar1 = (*(code *)d->__vtable->GetTypeVersion)
                    ((int)&d->__vtable + (int)*(short *)&d->__vtable->GetTypeKey);
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
  pEVar2 = s->__vtable;
  while( true ) {
    (*(code *)pEVar2[1].GetPos)
              (&s->m_streamingStructure + *(short *)&pEVar2[1].EStream,&typeVersion,2);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/storage/e_typeinfo.h */
    *(short *)(iVar1 + 0xe) = typeVersion;
    iVar1 = *(int *)(iVar1 + 0x10);
                    /* end of inlined section */
    if (iVar1 == 0) break;
    pEVar2 = s->__vtable;
  }
  (*(code *)d->__vtable[1].EStorable)
            ((int)&d->__vtable + (int)*(short *)&d->__vtable[1].GetTypeVersion,s);
  return s;
}

int EStream::WriteStructure(EStorable &Root) {
	int startPos;
	TNodeList<EStorable *> objectsToStore;
	TRedBlackTree<EStorable *,int> storedObjectsToIndices;
	int nStored;
	TRedBlackTree<ETypeInfo *,TNodeList<int> *> typesToListsOfIndices;
	EIntList pointerOffsets;
	EMemoryWriteStream tempStream;
	TArray<int> offsetsToObjects;
	TArray<int> sizesOfObjects;
	u32 *oldIndices;
	u32 *newIndices;
	int cStore;
	NLIterator poi;
	EStorable *data;
	EStorable *key;
	ETypeInfo *pType;
	EIntList *pIndices;
	bool newType;
	ETypeInfo *key;
	ETypeInfo *key;
	int data;
	ETypeInfo *key;
	ETypeInfo *key;
	EStream &s;
	int d;
	int pass;
	RBIterator rbi;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	int count;
	NLIterator nli;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	RBIterator i;
	RBIterator i;
	EStream &s;
	unsigned int d;
	short unsigned int d;
	int d;
	NLIterator i;
	u32 pointerValue1;
	int oldIndex;
	u32 newIndex;
	u32 pointerValue3;
	NLIterator i;
	NLIterator i;
	int i1;
	int i3;
	int oldIndex;
	int index;
	int index;
	EStream &s;
	unsigned char d;
	EStream &s;
	unsigned int d;
	void *pAddress;
	void *pAddress;
	int i;
	int index;
	int i;
	int index;
	
  ENodeList *this_00;
  uint uVar1;
  uint *puVar2;
  undefined1 *puVar3;
  TNodeList_int_ **ppTVar4;
  uchar *puVar5;
  int iVar6;
  ENodeListNode *pEVar7;
  int *piVar8;
  uchar *puVar9;
  EStream__vtable *pEVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  ERedBlackTreeNode *pEVar14;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  int iVar15;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  TNodeList_EStorable___ objectsToStore;
  TRedBlackTree_EStorable___int_ storedObjectsToIndices;
  TRedBlackTree_ETypeInfo___TNodeList_int____ typesToListsOfIndices;
  TNodeList_int_ pointerOffsets;
  EMemoryWriteStream tempStream;
  TArray_int_ offsetsToObjects;
  TArray_int_ sizesOfObjects;
  undefined2 local_e0;
  TNodeList_int_ *pIndices;
  int local_cc;
  undefined4 local_c8;
  int local_c4;
  uint pointerValue1;
  uint pointerValue3;
  uint d;
  int startPos;
  int nStored;
  void *pAddress;
  uint *local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* end of inlined section */
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  *(undefined4 *)this = 1;
  nStored = 0;
  startPos = (**(code **)(this->__vtable + 1))
                       (&this->m_streamingStructure + *(short *)&this->__vtable->Write);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  objectsToStore.field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  objectsToStore.field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  this->m_pObjectsToStore = &objectsToStore;
  __13ERedBlackTree((ERedBlackTree *)&storedObjectsToIndices);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  this->m_pStoredObjectsToIndices =
       (TRedBlackTree_EStorable___int_ *)(ERedBlackTree *)&storedObjectsToIndices;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  AddTail__9ENodeListUi(&objectsToStore.field0_0x0,(uint)Root);
  puVar2 = __vc__13ERedBlackTreeUi((ERedBlackTree *)&storedObjectsToIndices,(uint)Root);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  *puVar2 = 0xffffffff;
  __13ERedBlackTree((ERedBlackTree *)&typesToListsOfIndices);
                    /* end of inlined section */
  this->m_pPointerOffsets = &pointerOffsets;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pointerOffsets.field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
  pointerOffsets.field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  __18EMemoryWriteStream(&tempStream);
  tempStream.field0_0x0.m_pPointerOffsets = this->m_pPointerOffsets;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
  tempStream.field0_0x0.m_pObjectsToStore = this->m_pObjectsToStore;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
  tempStream.field0_0x0.m_pStoredObjectsToIndices = this->m_pStoredObjectsToIndices;
  tempStream.field0_0x0._0_4_ = 1;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  __6EArray((EArray *)&offsetsToObjects);
  offsetsToObjects.field0_0x0.m_elementSize = 4;
  __6EArray((EArray *)&sizesOfObjects);
                    /* end of inlined section */
  local_a8 = &d;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  sizesOfObjects.field0_0x0.m_elementSize = 4;
  do {
    do {
                    /* end of inlined section */
      if (objectsToStore.field0_0x0.m_l.m_pHead == (ENodeListNode *)0x0) {
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
        iVar15 = 0;
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
        local_cc = nStored;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
        uVar12 = nStored << 2;
        (*(code *)this->__vtable[1].Write)
                  (&this->m_streamingStructure + *(short *)&this->__vtable[1].Read,&local_cc,4);
        puVar2 = (uint *)_memmanAlloc__FUiUi(uVar12,4);
        pAddress = _memmanAlloc__FUiUi(uVar12,4);
                    /* end of inlined section */
        iVar6 = 1;
        iVar13 = 0;
                    /* end of inlined section */
        while (local_a4 = iVar6,
              typesToListsOfIndices.field0_0x0.m_list.m_pHead == (ERedBlackTreeNode *)0x0) {
LAB_0031c4f8:
          iVar6 = local_a4 + 1;
          iVar13 = local_a4;
          if (1 < local_a4) {
            uVar12 = 0;
            piVar8 = (int *)pAddress;
            if (0 < nStored) {
              do {
                puVar2[*piVar8] = uVar12;
                uVar12 = uVar12 + 1;
                piVar8 = piVar8 + 1;
              } while ((int)uVar12 < nStored);
            }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
            if (pointerOffsets.field0_0x0.m_l.m_pHead != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
              uVar12 = (pointerOffsets.field0_0x0.m_l.m_pHead)->data;
              pEVar7 = pointerOffsets.field0_0x0.m_l.m_pHead;
              while( true ) {
                iVar13 = 0;
                pointerValue1 = 0;
                do {
                  puVar5 = __vc__18EMemoryWriteStreami(&tempStream,uVar12 + iVar13);
                  puVar9 = (uchar *)((int)&pointerValue1 + iVar13);
                  iVar13 = iVar13 + 1;
                  *puVar9 = *puVar5;
                } while (iVar13 < 4);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                iVar13 = 0;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                puVar11 = __vc__13ERedBlackTreeUi
                                    ((ERedBlackTree *)&storedObjectsToIndices,pointerValue1);
                    /* end of inlined section */
                pointerValue3 = puVar2[*puVar11] + 1;
                do {
                  puVar5 = __vc__18EMemoryWriteStreami(&tempStream,uVar12 + iVar13);
                  puVar9 = (uchar *)((int)&pointerValue3 + iVar13);
                  iVar13 = iVar13 + 1;
                  *puVar5 = *puVar9;
                } while (iVar13 < 4);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                pEVar7 = pEVar7->pNext;
                    /* end of inlined section */
                if (pEVar7 == (ENodeListNode *)0x0) break;
                uVar12 = pEVar7->data;
              }
            }
            if (nStored < 1) {
              pEVar10 = this->__vtable;
            }
            else {
                    /* WARNING: Load size is inaccurate */
              iVar13 = *pAddress;
              iVar6 = nStored;
              piVar8 = (int *)pAddress;
              while( true ) {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
                piVar8 = piVar8 + 1;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
                iVar6 = iVar6 + -1;
                WriteToStream__18EMemoryWriteStreamR7EStreamii
                          (&tempStream,this,
                           *(int *)((int)offsetsToObjects.field0_0x0.m_p + iVar13 * 4),
                           *(int *)((int)sizesOfObjects.field0_0x0.m_p + iVar13 * 4));
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
                local_e0 = CONCAT11(local_e0._1_1_,0xb7);
                (*(code *)this->__vtable[1].Write)
                          (&this->m_streamingStructure + *(short *)&this->__vtable[1].Read,&local_e0
                           ,1);
                    /* end of inlined section */
                if (iVar6 == 0) break;
                iVar13 = *piVar8;
              }
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
              pEVar10 = this->__vtable;
            }
            d = *puVar2;
            (*(code *)pEVar10[1].Write)
                      (&this->m_streamingStructure + *(short *)&pEVar10[1].Read,local_a8,4);
                    /* end of inlined section */
            if (puVar2 != (uint *)0x0) {
                    /* inlined from e_standard_heap.h */
              _memmanFree__FPv(puVar2);
                    /* end of inlined section */
            }
            if (pAddress == (void *)0x0) {
              *(undefined4 *)this = 0;
            }
            else {
                    /* inlined from e_standard_heap.h */
              _memmanFree__FPv(pAddress);
                    /* end of inlined section */
              *(undefined4 *)this = 0;
            }
            tempStream.field0_0x0._0_4_ = 0;
            iVar13 = (**(code **)(this->__vtable + 1))
                               (&this->m_streamingStructure + *(short *)&this->__vtable->Write);
            iVar13 = iVar13 - startPos;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
            if (0 < sizesOfObjects.field0_0x0.m_size) {
              do {
                sizesOfObjects.field0_0x0.m_size = sizesOfObjects.field0_0x0.m_size + -1;
              } while (sizesOfObjects.field0_0x0.m_size != 0);
            }
            Deallocate__6EArray((EArray *)&sizesOfObjects);
            if (0 < offsetsToObjects.field0_0x0.m_size) {
              do {
                offsetsToObjects.field0_0x0.m_size = offsetsToObjects.field0_0x0.m_size + -1;
              } while (offsetsToObjects.field0_0x0.m_size != 0);
            }
            Deallocate__6EArray((EArray *)&offsetsToObjects);
                    /* end of inlined section */
            ___18EMemoryWriteStream(&tempStream,2);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
            RemoveAll__9ENodeList(&pointerOffsets.field0_0x0);
            RemoveAll__13ERedBlackTree((ERedBlackTree *)&typesToListsOfIndices);
            RemoveAll__13ERedBlackTree((ERedBlackTree *)&storedObjectsToIndices);
            RemoveAll__9ENodeList(&objectsToStore.field0_0x0);
                    /* end of inlined section */
            return iVar13;
          }
        }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
        this_00 = (ENodeList *)(typesToListsOfIndices.field0_0x0.m_list.m_pHead)->value;
        pEVar14 = typesToListsOfIndices.field0_0x0.m_list.m_pHead;
        do {
                    /* end of inlined section */
          if ((this_00->m_l).m_pHead == (ENodeListNode *)0x0) {
            if (iVar13 != 1) {
              pEVar7 = (this_00->m_l).m_pHead;
LAB_0031c428:
                    /* end of inlined section */
              iVar6 = 0;
              if (pEVar7 != (ENodeListNode *)0x0) {
                puVar11 = (uint *)(iVar15 * 4 + (int)pAddress);
                do {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
                  iVar15 = iVar15 + 1;
                  iVar6 = iVar6 + 1;
                  *puVar11 = pEVar7->data;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                  pEVar7 = pEVar7->pNext;
                    /* end of inlined section */
                  puVar11 = puVar11 + 1;
                } while (pEVar7 != (ENodeListNode *)0x0);
              }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
              uVar12 = pEVar14->key;
              local_c8 = *(undefined4 *)(uVar12 + 8);
              (*(code *)this->__vtable[1].Write)
                        (&this->m_streamingStructure + *(short *)&this->__vtable[1].Read,&local_c8,4
                        );
              local_e0 = *(undefined2 *)(uVar12 + 0xc);
              (*(code *)this->__vtable[1].Write)
                        (&this->m_streamingStructure + *(short *)&this->__vtable[1].Read,&local_e0,2
                        );
              local_c4 = iVar6;
              (*(code *)this->__vtable[1].Write)
                        (&this->m_streamingStructure + *(short *)&this->__vtable[1].Read,&local_c4,4
                        );
            }
                    /* end of inlined section */
            if (iVar13 == 0) {
              pEVar14 = pEVar14->pNext;
            }
            else if (this_00 == (ENodeList *)0x0) {
              pEVar14 = pEVar14->pNext;
            }
            else {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
              RemoveAll__9ENodeList(this_00);
              _memmanFree__FPv(this_00);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
              pEVar14 = pEVar14->pNext;
            }
          }
          else {
            if (iVar13 != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
              pEVar7 = (this_00->m_l).m_pHead;
              goto LAB_0031c428;
            }
            pEVar14 = pEVar14->pNext;
          }
                    /* end of inlined section */
          if (pEVar14 == (ERedBlackTreeNode *)0x0) goto LAB_0031c4f8;
          this_00 = (ENodeList *)pEVar14->value;
        } while( true );
      }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      piVar8 = (int *)(objectsToStore.field0_0x0.m_l.m_pHead)->data;
      Remove__9ENodeListP17NLIteratorPtrType
                (&objectsToStore.field0_0x0,(undefined1 *)objectsToStore.field0_0x0.m_l.m_pHead);
                    /* end of inlined section */
      uVar12 = (**(code **)(*piVar8 + 0x14))((int)piVar8 + (int)*(short *)(*piVar8 + 0x10));
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      puVar3 = Find__C13ERedBlackTreeUiPUi
                         ((ERedBlackTree *)&typesToListsOfIndices,uVar12,(uint *)&pIndices);
                    /* end of inlined section */
      if (puVar3 == (undefined1 *)0x0) {
        pIndices = (TNodeList_int_ *)__builtin_new(8);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
        (pIndices->field0_0x0).m_l.m_pTail = (ENodeListNode *)0x0;
        (pIndices->field0_0x0).m_l.m_pHead = (ENodeListNode *)0x0;
        ppTVar4 = (TNodeList_int_ **)
                  __vc__13ERedBlackTreeUi((ERedBlackTree *)&typesToListsOfIndices,uVar12);
                    /* end of inlined section */
        *ppTVar4 = pIndices;
      }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      AddTail__9ENodeListUi(&pIndices->field0_0x0,nStored);
      puVar2 = __vc__13ERedBlackTreeUi((ERedBlackTree *)&storedObjectsToIndices,(uint)piVar8);
      uVar1 = tempStream.m_pos;
                    /* end of inlined section */
      *puVar2 = nStored;
      nStored = nStored + 1;
                    /* inlined from c:/eor/src2/common/storage/e_memorystream.h */
                    /* end of inlined section */
      (**(code **)(*piVar8 + 0x44))((int)piVar8 + (int)*(short *)(*piVar8 + 0x40),&tempStream);
      iVar13 = offsetsToObjects.field0_0x0.m_size;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
      Insert__6EArrayii((EArray *)&offsetsToObjects,offsetsToObjects.field0_0x0.m_size,1);
      iVar6 = sizesOfObjects.field0_0x0.m_size;
      *(uint *)((int)offsetsToObjects.field0_0x0.m_p + iVar13 * 4) = uVar1;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
      iVar13 = tempStream.m_pos - uVar1;
      Insert__6EArrayii((EArray *)&sizesOfObjects,sizesOfObjects.field0_0x0.m_size,1);
                    /* end of inlined section */
      *(int *)((int)sizesOfObjects.field0_0x0.m_p + iVar6 * 4) = iVar13;
    } while ((puVar3 != (undefined1 *)0x0) ||
            (uVar12 = *(uint *)(uVar12 + 0x10), uVar12 == 0
                    /* inlined from c:/eor/src2/common/storage/e_typeinfo.h */
                    /* end of inlined section */));
    do {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      puVar3 = Find__C13ERedBlackTreeUiPUi
                         ((ERedBlackTree *)&typesToListsOfIndices,uVar12,(uint *)0x0);
                    /* end of inlined section */
      if (puVar3 != (undefined1 *)0x0) break;
      pIndices = (TNodeList_int_ *)__builtin_new(8);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      (pIndices->field0_0x0).m_l.m_pTail = (ENodeListNode *)0x0;
      (pIndices->field0_0x0).m_l.m_pHead = (ENodeListNode *)0x0;
      ppTVar4 = (TNodeList_int_ **)
                __vc__13ERedBlackTreeUi((ERedBlackTree *)&typesToListsOfIndices,uVar12);
                    /* end of inlined section */
      *ppTVar4 = pIndices;
                    /* inlined from c:/eor/src2/common/storage/e_typeinfo.h */
      uVar12 = *(uint *)(uVar12 + 0x10);
                    /* end of inlined section */
    } while (uVar12 != 0);
  } while( true );
}

EStorable* EStream::ReadStructure(u32 FirstWord, int *pnBytesRead) {
	int startPos;
	int pos;
	int root;
	EStorable *pRoot;
	u32 key;
	ETypeInfo *pType;
	u16 typeVersion;
	int nCount;
	EStream &s;
	EStream &s;
	ETypeInfo *this;
	EStream &s;
	ETypeInfo *this;
	int cObject;
	EStorable *pObj;
	u8 validate;
	EStream &s;
	EStream &s;
	
  EStorable__vtable *pEVar1;
  int iVar2;
  EStorable **ppEVar3;
  ETypeInfo *pEVar4;
  EStorable *pEVar5;
  int iVar6;
  EStream__vtable *pEVar7;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  short typeVersion;
  uchar validate;
  uint key;
  int nCount;
  int root;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  iVar6 = 0;
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  *(undefined4 *)this = 1;
  iVar2 = (**(code **)(this->__vtable + 1))
                    (&this->m_streamingStructure + *(short *)&this->__vtable->Write);
                    /* inlined from e_standard_heap.h */
  ppEVar3 = (EStorable **)_memmanAlloc__FUiUi(FirstWord << 2,4);
                    /* end of inlined section */
  this->m_pObjectsToLoad = ppEVar3;
  if (0 < (int)FirstWord) {
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
    pEVar7 = this->__vtable;
    while( true ) {
      (*(code *)pEVar7[1].GetPos)(&this->m_streamingStructure + *(short *)&pEVar7[1].EStream,&key,4)
      ;
                    /* end of inlined section */
      pEVar4 = Find__9ETypeInfoUi(key);
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
      (*(code *)this->__vtable[1].GetPos)
                (&this->m_streamingStructure + *(short *)&this->__vtable[1].EStream,&typeVersion,2);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
      pEVar4->m_readVersion = typeVersion;
      (*(code *)this->__vtable[1].GetPos)
                (&this->m_streamingStructure + *(short *)&this->__vtable[1].EStream,&nCount,4);
                    /* end of inlined section */
      while (nCount = nCount + -1, nCount != -1) {
                    /* inlined from c:/eor/src2/common/storage/e_typeinfo.h */
        pEVar5 = (EStorable *)(*(code *)pEVar4->m_pfnNew)();
                    /* end of inlined section */
        this->m_pObjectsToLoad[iVar6] = pEVar5;
        iVar6 = iVar6 + 1;
      }
      if ((int)FirstWord <= iVar6) break;
      pEVar7 = this->__vtable;
    }
  }
  if (0 < (int)FirstWord) {
    ppEVar3 = this->m_pObjectsToLoad;
    iVar6 = 0;
    while( true ) {
      pEVar1 = ppEVar3[iVar6]->__vtable;
      (*(code *)pEVar1[1].EStorable)
                ((int)&ppEVar3[iVar6]->__vtable + (int)*(short *)&pEVar1[1].GetTypeVersion,this);
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
      (*(code *)this->__vtable[1].GetPos)
                (&this->m_streamingStructure + *(short *)&this->__vtable[1].EStream,&validate,1);
                    /* end of inlined section */
      if ((int)FirstWord <= iVar6 + 1) break;
      ppEVar3 = this->m_pObjectsToLoad;
      iVar6 = iVar6 + 1;
    }
  }
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
  (*(code *)this->__vtable[1].GetPos)
            (&this->m_streamingStructure + *(short *)&this->__vtable[1].EStream,&root,4);
                    /* end of inlined section */
  ppEVar3 = this->m_pObjectsToLoad;
  pEVar5 = ppEVar3[root];
  if (ppEVar3 != (EStorable **)0x0) {
                    /* inlined from e_standard_heap.h */
    _memmanFree__FPv(ppEVar3);
  }
                    /* end of inlined section */
  *(undefined4 *)this = 0;
  if (pnBytesRead != (int *)0x0) {
    iVar6 = (**(code **)(this->__vtable + 1))
                      (&this->m_streamingStructure + *(short *)&this->__vtable->Write);
    *pnBytesRead = iVar6 - (iVar2 + -4);
  }
  return pEVar5;
}

int EStream::ReadString(char *szBuffer, int bufferSize) {
	char c;
	int pos;
	EStream &s;
	
  undefined8 unaff_s0;
  int iVar1;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  char c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  iVar1 = 0;
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  do {
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
    (*(code *)this->__vtable[1].GetPos)
              (&this->m_streamingStructure + *(short *)&this->__vtable[1].EStream,&c,1);
                    /* end of inlined section */
    if (iVar1 < bufferSize) {
      szBuffer[iVar1] = c;
    }
    iVar1 = iVar1 + 1;
  } while (c != '\0');
  if (bufferSize < iVar1) {
    if (0x50 < bufferSize) {
      bufferSize = 0x50;
    }
    szBuffer[bufferSize + -1] = '\0';
  }
  return iVar1;
}

int EStream::WriteString(char *szBuffer) {
	int pos;
	EStream &s;
	char d;
	EStream &s;
	char d;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  int iVar1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  char d;
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
  iVar1 = 0;
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (*szBuffer != '\0') {
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
    d = *szBuffer;
    while( true ) {
                    /* end of inlined section */
      szBuffer = szBuffer + 1;
      iVar1 = iVar1 + 1;
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
      (*(code *)this->__vtable[1].Write)
                (&this->m_streamingStructure + *(short *)&this->__vtable[1].Read,&d,1);
                    /* end of inlined section */
      if (*szBuffer == '\0') break;
      d = *szBuffer;
    }
  }
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
  d = '\0';
  (*(code *)this->__vtable[1].Write)
            (&this->m_streamingStructure + *(short *)&this->__vtable[1].Read,&d,1);
                    /* end of inlined section */
  return iVar1 + 1;
}

int EStream::ReadU16String(u16 *szBuffer, int bufferSize) {
	u16 c;
	int pos;
	EStream &s;
	
  short *psVar1;
  undefined8 unaff_s0;
  int iVar2;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  short c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  iVar2 = 0;
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  psVar1 = szBuffer;
  do {
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
    (*(code *)this->__vtable[1].GetPos)
              (&this->m_streamingStructure + *(short *)&this->__vtable[1].EStream,&c,2);
                    /* end of inlined section */
    if (iVar2 < bufferSize) {
      *psVar1 = c;
    }
    psVar1 = psVar1 + 1;
    iVar2 = iVar2 + 1;
  } while (c != 0);
  if (bufferSize < iVar2) {
    szBuffer[bufferSize + -1] = 0;
  }
  return iVar2;
}

int EStream::WriteU16String(u16 *szBuffer) {
	int pos;
	EStream &s;
	short unsigned int d;
	EStream &s;
	short unsigned int d;
	
  EStream__vtable *pEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  int iVar2;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  short d;
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
  iVar2 = 0;
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (*szBuffer != 0) {
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
    pEVar1 = this->__vtable;
    while( true ) {
      d = *szBuffer;
                    /* end of inlined section */
      szBuffer = szBuffer + 1;
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
      iVar2 = iVar2 + 1;
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
      (*(code *)pEVar1[1].Write)(&this->m_streamingStructure + *(short *)&pEVar1[1].Read,&d,2);
                    /* end of inlined section */
      if (*szBuffer == 0) break;
      pEVar1 = this->__vtable;
    }
  }
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
  d = 0;
  (*(code *)this->__vtable[1].Write)
            (&this->m_streamingStructure + *(short *)&this->__vtable[1].Read,&d,2);
                    /* end of inlined section */
  return iVar2 + 1;
}

EStream& operator<<(EStream &s, EStorable *pD) {
	EStream *this;
	EStream &s;
	unsigned int d;
	EStorable *key;
	EStorable *data;
	EStream &s;
	unsigned int d;
	
  uint data;
  undefined1 *puVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EStorable *local_40;
  uint d;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  if (pD == (EStorable *)0x0) {
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
    d = 0;
    (*(code *)s->__vtable[1].Write)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,(uint)&local_40 | 4,4);
                    /* end of inlined section */
  }
  else {
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
    if (*(int *)s == 0) {
      WriteStructure__7EStreamR9EStorable(s,pD);
    }
    else {
      data = (**(code **)(s->__vtable + 1))
                       (&s->m_streamingStructure + *(short *)&s->__vtable->Write);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      AddTail__9ENodeListUi(&s->m_pPointerOffsets->field0_0x0,data);
      local_40 = pD;
      (*(code *)s->__vtable[1].Write)
                (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&local_40,4);
      puVar1 = Insert__13ERedBlackTreeUiUib
                         ((ERedBlackTree *)s->m_pStoredObjectsToIndices,(uint)pD,0xffffffff,false);
                    /* end of inlined section */
      if (puVar1 != (undefined1 *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        AddTail__9ENodeListUi(&s->m_pObjectsToStore->field0_0x0,(uint)pD);
                    /* end of inlined section */
      }
    }
  }
  return s;
}

EStream& operator>>(EStream &s, EStorable *&pD) {
	u32 index;
	EStream &s;
	EStream *this;
	
  EStorable *pEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  uint index;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&index,4);
                    /* end of inlined section */
  if (index == 0) {
    *pD = (EStorable *)0x0;
  }
  else {
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
    if (*(int *)s == 0) {
      pEVar1 = ReadStructure__7EStreamUiPi(s,index,(int *)0x0);
      *pD = pEVar1;
    }
    else {
      *pD = s->m_pObjectsToLoad[index - 1];
    }
  }
  return s;
}

EStream& operator<<(EStream &s, EVec4 &v) {
	EVec4 *this;
	EStream &s;
	float d;
	EVec4 *this;
	float d;
	EVec4 *this;
	float d;
	EVec4 *this;
	float d;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  float local_40;
  float local_3c;
  float local_38;
  float d;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
  local_40 = (v->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&local_40,4);
  local_3c = (v->field0_0x0).d[1];
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,(uint)&local_40 | 4,4);
  local_38 = (v->field0_0x0).d[2];
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,(uint)&local_40 | 8,4);
  d = (v->field0_0x0).d[3];
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,(uint)&local_40 | 0xc,4);
                    /* end of inlined section */
  return s;
}

EStream& operator<<(EStream &s, EVec3 &v) {
	EVec3 *this;
	EStream &s;
	float d;
	EVec3 *this;
	float d;
	EVec3 *this;
	float d;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  float local_40;
  float local_3c;
  float d;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
  local_40 = (v->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&local_40,4);
  local_3c = (v->field0_0x0).d[1];
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,(uint)&local_40 | 4,4);
  d = (v->field0_0x0).d[2];
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,(uint)&local_40 | 8,4);
                    /* end of inlined section */
  return s;
}

EStream& operator<<(EStream &s, EVec2 &v) {
	EVec2 *this;
	EStream &s;
	float d;
	EVec2 *this;
	float d;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  float local_40;
  float d;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
  local_40 = (v->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&local_40,4);
  d = (v->field0_0x0).d[1];
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,(uint)&local_40 | 4,4);
                    /* end of inlined section */
  return s;
}

EStream& operator<<(EStream &s, EBound3 &b) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamRC5EVec3(s,&b->vMin);
  pEVar1 = __ls__FR7EStreamRC5EVec3(pEVar1,&b->vMax);
  return pEVar1;
}

EStream& operator<<(EStream &s, EBoundSphere &bs) {
	float d;
	
  EStream *pEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  float d;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  pEVar1 = __ls__FR7EStreamRC5EVec3(s,&bs->vCenter);
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
  d = bs->radius;
  (*(code *)pEVar1->__vtable[1].Write)
            (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].Read,&d,4);
                    /* end of inlined section */
  return pEVar1;
}

EStream& operator>>(EStream &s, EVec4 &v) {
	EVec4 *this;
	EStream &s;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].GetPos)(&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,v,4)
  ;
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,
             (undefined *)((int)&v->field0_0x0 + 4),4);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,
             (undefined *)((int)&v->field0_0x0 + 8),4);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,
             (undefined *)((int)&v->field0_0x0 + 0xc),4);
                    /* end of inlined section */
  return s;
}

EStream& operator>>(EStream &s, EVec3 &v) {
	EVec3 *this;
	EStream &s;
	EVec3 *this;
	EVec3 *this;
	
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].GetPos)(&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,v,4)
  ;
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,
             (undefined *)((int)&v->field0_0x0 + 4),4);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,
             (undefined *)((int)&v->field0_0x0 + 8),4);
                    /* end of inlined section */
  return s;
}

EStream& operator>>(EStream &s, EVec2 &v) {
	EVec2 *this;
	EStream &s;
	EVec2 *this;
	
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].GetPos)(&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,v,4)
  ;
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,
             (undefined *)((int)&v->field0_0x0 + 4),4);
                    /* end of inlined section */
  return s;
}

EStream& operator>>(EStream &s, EBound3 &b) {
  EStream *pEVar1;
  
  pEVar1 = __rs__FR7EStreamR5EVec3(s,&b->vMin);
  pEVar1 = __rs__FR7EStreamR5EVec3(pEVar1,&b->vMax);
  return pEVar1;
}

EStream& operator>>(EStream &s, EBoundSphere &b) {
  EStream *pEVar1;
  
  pEVar1 = __rs__FR7EStreamR5EVec3(s,&b->vCenter);
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
  (*(code *)pEVar1->__vtable[1].GetPos)
            (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].EStream,&b->radius,4);
                    /* end of inlined section */
  return pEVar1;
}

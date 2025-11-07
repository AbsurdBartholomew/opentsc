// STATUS: NOT STARTED

#include "e_tweak.h"

ETweak _tweak = {
	/* .m_autoTime = */ 0.f,
	/* .m_autoReadDelay = */ 0.f,
	/* .m_nEntries = */ 0,
	/* .m_entries = */ {
		/* base class 0 = */ {
			/* .m_l = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			}
		}
	},
	/* .m_filename = */ {
		/* .m_p = */ NULL
	},
	/* .m_cfg = */ {
		/* .m_modified = */ false,
		/* .m_file = */ {
			/* .m_p = */ NULL
		},
		/* .m_lines = */ {
			/* base class 0 = */ {
				/* .m_l = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				}
			}
		},
		/* .m_entries = */ {
			/* base class 0 = */ {
				/* .m_list = */ {
					/* .m_pHead = */ NULL,
					/* .m_pTail = */ NULL
				},
				/* .m_table = */ NULL,
				/* .m_tableSize = */ 0,
				/* .m_tableMask = */ 0,
				/* .m_nNodes = */ 0
			}
		}
	}
};

ETweak* ETweak::ETweak() {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_entries).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_entries).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  SetToNull__7EString(&this->m_filename);
  SetToNull__7EString(&(this->m_cfg).m_file);
  (this->m_cfg).m_lines.field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_cfg).m_lines.field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  __18EStringTableNoCase(&(this->m_cfg).m_entries.field0_0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/file/e_config.h */
  *(undefined4 *)&this->m_cfg = 0;
                    /* end of inlined section */
  this->m_nEntries = 0;
  this->m_autoReadDelay = 0.0;
  this->m_autoTime = 0.0;
  return this;
}

void ETweak::~ETweak(int __in_chrg) {
	TNodeList<ETweakEntry *> *this;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator next;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	void *pAddress;
	
  void *pAddress;
  ENodeListNode *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  pEVar1 = (this->m_entries).field0_0x0.m_l.m_pHead;
  if (pEVar1 != (ENodeListNode *)0x0) {
    pAddress = (void *)pEVar1->data;
    while( true ) {
      pEVar1 = pEVar1->pNext;
      if (pAddress != (void *)0x0) {
        Deallocate__7EStringPc((EString *)((int)pAddress + 4),*(char **)((int)pAddress + 4));
        _memmanFree__FPv(pAddress);
      }
      if (pEVar1 == (ENodeListNode *)0x0) break;
      pAddress = (void *)pEVar1->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_entries).field0_0x0);
  Close__7EConfigbT1PCc(&this->m_cfg,true,false,(char *)0x0);
  ___18EStringTableNoCase(&(this->m_cfg).m_entries.field0_0x0,2);
  RemoveAll__9ENodeList(&(this->m_cfg).m_lines.field0_0x0);
  Deallocate__7EStringPc(&(this->m_cfg).m_file,(this->m_cfg).m_file.m_p);
  Deallocate__7EStringPc(&this->m_filename,(this->m_filename).m_p);
  RemoveAll__9ENodeList(&(this->m_entries).field0_0x0);
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

bool ETweak::Update() {
	bool read;
	
  bool bVar1;
  float fVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
                    /* end of inlined section */
  if (*(this->m_filename).m_p == '\0') {
    bVar1 = false;
  }
  else {
    bVar1 = false;
    if ((this->m_autoReadDelay != 0.0) &&
       (fVar2 = this->m_autoTime + _dt, this->m_autoTime = fVar2, this->m_autoReadDelay < fVar2)) {
      this->m_autoTime = 0.0;
      bVar1 = true;
    }
    if (bVar1) {
      Read__6ETweak(this);
    }
  }
  return bVar1;
}

void ETweak::Read() {
	NLIterator i;
	EConfig *this;
	NLIterator i;
	NLIterator i;
	
  EString *pEVar1;
  bool bVar2;
  int iVar3;
  EString **ppEVar4;
  ENodeListNode *pEVar5;
  EConfig *this_00;
  char *pcVar6;
  
                    /* inlined from /eor/src2/common/file/e_config.h */
  this_00 = &this->m_cfg;
                    /* end of inlined section */
  (*(code *)_pResLoader->__vtable[1].OpenFiles)
            ((int)&_pResLoader->__vtable + (int)*(short *)&_pResLoader->__vtable[1].NewDataFiles);
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
                    /* end of inlined section */
  if (*(this->m_cfg).m_file.m_p == '\0') {
                    /* end of inlined section */
    bVar2 = Open__7EConfigPCc(this_00,(this->m_filename).m_p);
    if (!bVar2) {
      return;
    }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pEVar5 = (this->m_entries).field0_0x0.m_l.m_pHead;
  }
  else {
    pEVar5 = (this->m_entries).field0_0x0.m_l.m_pHead;
  }
                    /* end of inlined section */
  if (pEVar5 == (ENodeListNode *)0x0) {
LAB_002f0340:
    Close__7EConfigbT1PCc(this_00,false,false,(char *)0x0);
    return;
  }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  ppEVar4 = (EString **)pEVar5->data;
  do {
                    /* end of inlined section */
    pEVar1 = ppEVar4[2];
    if (pEVar1 == (EString *)&pGifTag1) {
                    /* end of inlined section */
      pcVar6 = (char *)GetInt__7EConfigPCci(this_00,(char *)ppEVar4[1],(int)(*ppEVar4)->m_p);
      (*ppEVar4)->m_p = pcVar6;
LAB_002f0334:
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar5 = pEVar5->pNext;
    }
    else {
      if (1 < (int)pEVar1) {
        if (pEVar1 == (EString *)&pModelMats) {
                    /* end of inlined section */
          pcVar6 = (char *)GetFloat__7EConfigPCcf(this_00,(char *)ppEVar4[1],(float)(*ppEVar4)->m_p)
          ;
          (*ppEVar4)->m_p = pcVar6;
        }
        else {
          if (pEVar1 != (EString *)&maxMatrices) {
            pEVar5 = pEVar5->pNext;
            goto LAB_002f0338;
          }
                    /* end of inlined section */
          pcVar6 = GetString__7EConfigPCcT1(this_00,(char *)ppEVar4[1],(char *)0x0);
          __as__7EStringPCc(*ppEVar4,pcVar6);
        }
        goto LAB_002f0334;
      }
      if (pEVar1 == (EString *)0x0) {
                    /* end of inlined section */
        iVar3 = GetInt__7EConfigPCci(this_00,(char *)ppEVar4[1],(uint)*(byte *)&(*ppEVar4)->m_p);
        *(char *)&(*ppEVar4)->m_p = (char)iVar3;
        goto LAB_002f0334;
      }
      pEVar5 = pEVar5->pNext;
    }
LAB_002f0338:
                    /* end of inlined section */
    if (pEVar5 == (ENodeListNode *)0x0) goto LAB_002f0340;
    ppEVar4 = (EString **)pEVar5->data;
  } while( true );
}

void ETweak::FileName(char *szFileName) {
	EConfig *this;
	TNodeList<ETweakEntry *> *this;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator next;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	
  void *pAddress;
  ENodeListNode *pEVar1;
  
                    /* inlined from /eor/src2/common/file/e_config.h */
                    /* end of inlined section */
  if (*(this->m_cfg).m_file.m_p != '\0') {
    Close__7EConfigbT1PCc(&this->m_cfg,false,false,(char *)0x0);
  }
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
                    /* end of inlined section */
  if (*(this->m_filename).m_p != '\0') {
    Empty__7EString(&this->m_filename);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pEVar1 = (this->m_entries).field0_0x0.m_l.m_pHead;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    this->m_nEntries = 0;
    if (pEVar1 != (ENodeListNode *)0x0) {
      pAddress = (void *)pEVar1->data;
      while( true ) {
        pEVar1 = pEVar1->pNext;
        if (pAddress != (void *)0x0) {
          Deallocate__7EStringPc((EString *)((int)pAddress + 4),*(char **)((int)pAddress + 4));
          _memmanFree__FPv(pAddress);
        }
        if (pEVar1 == (ENodeListNode *)0x0) break;
        pAddress = (void *)pEVar1->data;
      }
    }
    RemoveAll__9ENodeList(&(this->m_entries).field0_0x0);
  }
                    /* end of inlined section */
  __as__7EStringPCc(&this->m_filename,szFileName);
  return;
}

void ETweak::AddVal(void *pData, char *szName, int type) {
	EString *this;
	
  void **data;
  
  data = (void **)__builtin_new(0xc);
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
  SetToNull__7EString((EString *)(data + 1));
                    /* end of inlined section */
  *data = pData;
  data[2] = (void *)type;
  __as__7EStringPCc((EString *)(data + 1),szName);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  AddTail__9ENodeListUi(&(this->m_entries).field0_0x0,(uint)data);
                    /* end of inlined section */
  this->m_nEntries = this->m_nEntries + 1;
  return;
}

void ETweak::AddVal(EString *pData, char *szName, int type) {
	EString *this;
	
  EString **data;
  
  data = (EString **)__builtin_new(0xc);
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
  SetToNull__7EString((EString *)(data + 1));
                    /* end of inlined section */
  *data = pData;
  data[2] = (EString *)type;
  __as__7EStringPCc((EString *)(data + 1),szName);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  AddTail__9ENodeListUi(&(this->m_entries).field0_0x0,(uint)data);
                    /* end of inlined section */
  this->m_nEntries = this->m_nEntries + 1;
  return;
}

void ETweak::RemoveVal(void *pData) {
	NLIterator i;
	NLIterator next;
	ETweakEntry *pe;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	ETweakEntry *this;
	void *pAddress;
	
  void **pAddress;
  ENodeListNode *pEVar1;
  int iVar2;
  ENodeListNode *i;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  i = (this->m_entries).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (i != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pAddress = (void **)i->data;
                    /* end of inlined section */
    while (pEVar1 = i->pNext, *pAddress != pData) {
      if (pEVar1 == (ENodeListNode *)0x0) {
        return;
      }
      i = pEVar1;
      pAddress = (void **)pEVar1->data;
    }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    Remove__9ENodeListP17NLIteratorPtrType(&(this->m_entries).field0_0x0,(undefined1 *)i);
                    /* end of inlined section */
    if (pAddress == (void **)0x0) {
      iVar2 = this->m_nEntries;
    }
    else {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      Deallocate__7EStringPc((EString *)(pAddress + 1),(char *)pAddress[1]);
      _memmanFree__FPv(pAddress);
                    /* end of inlined section */
      iVar2 = this->m_nEntries;
    }
    this->m_nEntries = iVar2 + -1;
  }
  return;
}

void ETweak::RemoveAll() {
	TNodeList<ETweakEntry *> *this;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator next;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	
  void *pAddress;
  ENodeListNode *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  pEVar1 = (this->m_entries).field0_0x0.m_l.m_pHead;
  if (pEVar1 != (ENodeListNode *)0x0) {
    pAddress = (void *)pEVar1->data;
    while( true ) {
      pEVar1 = pEVar1->pNext;
      if (pAddress != (void *)0x0) {
        Deallocate__7EStringPc((EString *)((int)pAddress + 4),*(char **)((int)pAddress + 4));
        _memmanFree__FPv(pAddress);
      }
      if (pEVar1 == (ENodeListNode *)0x0) break;
      pAddress = (void *)pEVar1->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_entries).field0_0x0);
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
                    /* end of inlined section */
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___6ETweak(&_tweak,2);
    }
    else {
      __6ETweak(&_tweak);
    }
  }
  return;
}

void global constructors keyed to _tweak() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _tweak() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

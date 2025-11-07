// STATUS: NOT STARTED

#include "e_fontdata.h"

ETypeInfo *gpTypeInfo_EFontCharacter = NULL;
ETypeInfo *gpTypeInfo_EFontSize = NULL;
ETypeInfo *gpTypeInfo_EFontData = NULL;

__vtbl_ptr_type EFontData virtual table[10] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFontData::SafeDelete,
		/* .__delta2 = */ 27368
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFontData::GetTypeInfo,
		/* .__delta2 = */ 27424
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFontData::GetTypeName,
		/* .__delta2 = */ 27440
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFontData::GetTypeKey,
		/* .__delta2 = */ 27456
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFontData::GetTypeVersion,
		/* .__delta2 = */ 27472
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFontData::~EFontData,
		/* .__delta2 = */ 24328
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFontData::Read,
		/* .__delta2 = */ 24840
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFontData::Write,
		/* .__delta2 = */ 24552
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EFontSize virtual table[10] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFontSize::SafeDelete,
		/* .__delta2 = */ 27096
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFontSize::GetTypeInfo,
		/* .__delta2 = */ 27152
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFontSize::GetTypeName,
		/* .__delta2 = */ 27168
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFontSize::GetTypeKey,
		/* .__delta2 = */ 27184
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFontSize::GetTypeVersion,
		/* .__delta2 = */ 27200
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFontSize::~EFontSize,
		/* .__delta2 = */ 23416
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFontSize::Read,
		/* .__delta2 = */ 23888
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFontSize::Write,
		/* .__delta2 = */ 23616
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EFontCharacter virtual table[10] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFontCharacter::SafeDelete,
		/* .__delta2 = */ 26752
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFontCharacter::GetTypeInfo,
		/* .__delta2 = */ 26808
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFontCharacter::GetTypeName,
		/* .__delta2 = */ 26824
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFontCharacter::GetTypeKey,
		/* .__delta2 = */ 26840
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFontCharacter::GetTypeVersion,
		/* .__delta2 = */ 26856
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFontCharacter::~EFontCharacter,
		/* .__delta2 = */ 26656
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFontCharacter::Read,
		/* .__delta2 = */ 23080
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFontCharacter::Write,
		/* .__delta2 = */ 22928
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EStorable virtual table[10] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::SafeDelete,
		/* .__delta2 = */ 10264
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::GetTypeInfo,
		/* .__delta2 = */ 10320
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::GetTypeName,
		/* .__delta2 = */ 10336
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::GetTypeKey,
		/* .__delta2 = */ 10352
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::GetTypeVersion,
		/* .__delta2 = */ 10368
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::~EStorable,
		/* .__delta2 = */ 10384
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::Read,
		/* .__delta2 = */ 10432
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::Write,
		/* .__delta2 = */ 10440
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo EFontCharacter::m_typeInfo;
ETypeInfo EFontSize::m_typeInfo;
ETypeInfo EFontData::m_typeInfo;

EStream& operator<<(EStream &s, EFontCharacter *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,&pD->field0_0x0);
  return pEVar1;
}

EStream& operator>>(EStream &s, EFontCharacter *&pD) {
	EStorable *pStorable;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EStorable *pStorable;
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
  __rs__FR7EStreamRP9EStorable(s,&pStorable);
  *pD = (EFontCharacter *)pStorable;
  return s;
}

void EFontCharacter::Write(EStream &s) {
	EStorable *this;
	EStream &s;
	EStream &s;
	short int d;
	short int d;
	short int d;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  ushort local_60 [8];
  ushort local_50 [8];
  ushort d;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  local_60[0] = this->m_left;
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,local_60,2);
  local_50[0] = this->m_right;
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,local_50,2);
  d = this->m_line;
  (*(code *)s->__vtable[1].Write)(&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&d,2);
  return;
}

void EFontCharacter::Read(EStream &s) {
	EStorable *this;
	EStream &s;
	EStream &s;
	
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/font/e_fontdata.h */
                    /* end of inlined section */
  if (_14EFontCharacter_m_typeInfo.m_readVersion == 0) {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&this->m_left,2);
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&this->m_right,2);
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&this->m_line,2);
  }
                    /* end of inlined section */
  return;
}

EStream& operator<<(EStream &s, EFontSize *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,&pD->field0_0x0);
  return pEVar1;
}

EStream& operator>>(EStream &s, EFontSize *&pD) {
	EStorable *pStorable;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EStorable *pStorable;
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
  __rs__FR7EStreamRP9EStorable(s,&pStorable);
  *pD = (EFontSize *)pStorable;
  return s;
}

EFontSize* EFontSize::EFontSize() {
	EStorable *this;
	
                    /* inlined from /eor/src2/common/datastruc/e_hashtable.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EStorable__vtable *)_vt_9EFontSize;
                    /* inlined from /eor/src2/common/datastruc/e_hashtable.h */
  __10EHashTablei(&(this->m_characters).field0_0x0,0xed);
                    /* end of inlined section */
  this->m_superSample = 1;
  this->m_lineSize = 0;
  this->m_ysize = 0;
  this->m_xsize = 0;
  this->m_size = 0;
  this->m_shaderId = 0;
  this->m_pRShader = (ERShader *)0x0;
  return this;
}

void EFontSize::~EFontSize(int __in_chrg) {
	EStorable *this;
	int __in_chrg;
	void *pAddress;
	
  (this->field0_0x0).__vtable = (EStorable__vtable *)_vt_9EFontSize;
  Deallocate__9EFontSize(this);
  ___10EHashTable(&(this->m_characters).field0_0x0,2);
                    /* inlined from /eor/src2/common/storage/e_storable.h */
  (this->field0_0x0).__vtable = (EStorable__vtable *)_vt_9EStorable;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

void EFontSize::Deallocate() {
	THashTable<unsigned int,EFontCharacter *> *this;
	HTIterator i;
	EHashTable *this;
	TLinkedList<EHashTableNode,0,4> *this;
	HTIterator i;
	HTIterator i;
	void *pNode;
	HTIterator i;
	HTIterator i;
	
  int *piVar1;
  EHashTableNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_hashtable.h */
  pEVar2 = (this->m_characters).field0_0x0.m_list.m_pHead;
  if (pEVar2 != (EHashTableNode *)0x0) {
    piVar1 = (int *)pEVar2->value;
    while( true ) {
      pEVar2 = pEVar2->pListNext;
      (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8));
      if (pEVar2 == (EHashTableNode *)0x0) break;
      piVar1 = (int *)pEVar2->value;
    }
  }
  RemoveAll__10EHashTable(&(this->m_characters).field0_0x0);
  return;
}

void EFontSize::Write(EStream &s) {
	EStorable *this;
	EStream &s;
	EStream &s;
	int d;
	int d;
	int d;
	int d;
	int d;
	unsigned int d;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint d;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  local_50 = this->m_size;
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&local_50,4);
  local_4c = this->m_xsize;
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,(uint)&local_50 | 4,4);
  local_48 = this->m_ysize;
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,(uint)&local_50 | 8,4);
  local_44 = this->m_lineSize;
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,(uint)&local_50 | 0xc,4);
  local_40 = this->m_superSample;
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&local_40,4);
  d = this->m_shaderId;
  (*(code *)s->__vtable[1].Write)(&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&d,4);
                    /* end of inlined section */
  __ls__H2ZUiZP14EFontCharacter_R7EStreamRCt10THashTable2ZX01ZX11_R7EStream(s,&this->m_characters);
  return;
}

void EFontSize::Read(EStream &s) {
	EStorable *this;
	EStream &s;
	EStream &s;
	
  Deallocate__9EFontSize(this);
                    /* inlined from c:/eor/src2/engine/font/e_fontdata.h */
                    /* end of inlined section */
  if (_9EFontSize_m_typeInfo.m_readVersion == 0) {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&this->m_size,4);
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&this->m_xsize,4);
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&this->m_ysize,4);
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&this->m_lineSize,4);
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&this->m_superSample,4);
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&this->m_shaderId,4);
                    /* end of inlined section */
    __rs__H2ZUiZP14EFontCharacter_R7EStreamRt10THashTable2ZX01ZX11_R7EStream(s,&this->m_characters);
  }
  return;
}

EStream& operator<<(EStream &s, EFontData *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,&pD->field0_0x0);
  return pEVar1;
}

EStream& operator>>(EStream &s, EFontData *&pD) {
	EStorable *pStorable;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EStorable *pStorable;
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
  __rs__FR7EStreamRP9EStorable(s,&pStorable);
  *pD = (EFontData *)pStorable;
  return s;
}

EFontData* EFontData::EFontData() {
	EStorable *this;
	
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_sizeList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_sizeList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* inlined from /eor/src2/common/datastruc/e_hashtable.h */
  (this->field0_0x0).__vtable = (EStorable__vtable *)_vt_9EFontData;
  __10EHashTablei(&(this->m_kerningPairs).field0_0x0,0xed);
                    /* end of inlined section */
  this->m_baseline = 0;
  this->m_topline = 0;
  this->m_verticalSpacing = 0;
  this->m_defaultSpacing = 0;
  this->m_sourceImageSize = 0;
  this->m_spaceWidth = 0;
  return this;
}

void EFontData::~EFontData(int __in_chrg) {
	EStorable *this;
	int __in_chrg;
	void *pAddress;
	
  (this->field0_0x0).__vtable = (EStorable__vtable *)_vt_9EFontData;
  Deallocate__9EFontData(this);
  ___10EHashTable(&(this->m_kerningPairs).field0_0x0,2);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  RemoveAll__9ENodeList(&(this->m_sizeList).field0_0x0);
  (this->field0_0x0).__vtable = (EStorable__vtable *)_vt_9EStorable;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

void EFontData::Deallocate() {
	TNodeList<EFontSize *> *this;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	
  int *piVar1;
  ENodeListNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_sizeList).field0_0x0.m_l.m_pHead;
  if (pEVar2 != (ENodeListNode *)0x0) {
    piVar1 = (int *)pEVar2->data;
    while( true ) {
      pEVar2 = pEVar2->pNext;
      (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8));
      if (pEVar2 == (ENodeListNode *)0x0) break;
      piVar1 = (int *)pEVar2->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_sizeList).field0_0x0);
                    /* end of inlined section */
  RemoveAll__10EHashTable(&(this->m_kerningPairs).field0_0x0);
  return;
}

void EFontData::Write(EStream &s) {
	EStorable *this;
	int d;
	int d;
	int d;
	int d;
	int d;
	int d;
	
  EStream *s_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int d;
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
  s_00 = __ls__H1ZP9EFontSize_R7EStreamRCt9TNodeList1ZX01_R7EStream(s,&this->m_sizeList);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  local_50 = this->m_baseline;
  (*(code *)s_00->__vtable[1].Write)
            (&s_00->m_streamingStructure + *(short *)&s_00->__vtable[1].Read,&local_50,4);
  local_4c = this->m_topline;
  (*(code *)s_00->__vtable[1].Write)
            (&s_00->m_streamingStructure + *(short *)&s_00->__vtable[1].Read,(uint)&local_50 | 4,4);
  local_48 = this->m_sourceImageSize;
  (*(code *)s_00->__vtable[1].Write)
            (&s_00->m_streamingStructure + *(short *)&s_00->__vtable[1].Read,(uint)&local_50 | 8,4);
  local_44 = this->m_defaultSpacing;
  (*(code *)s_00->__vtable[1].Write)
            (&s_00->m_streamingStructure + *(short *)&s_00->__vtable[1].Read,(uint)&local_50 | 0xc,4
            );
  local_40 = this->m_verticalSpacing;
  (*(code *)s_00->__vtable[1].Write)
            (&s_00->m_streamingStructure + *(short *)&s_00->__vtable[1].Read,&local_40,4);
  d = this->m_spaceWidth;
  (*(code *)s_00->__vtable[1].Write)
            (&s_00->m_streamingStructure + *(short *)&s_00->__vtable[1].Read,&d,4);
                    /* end of inlined section */
  __ls__H2ZUiZi_R7EStreamRCt10THashTable2ZX01ZX11_R7EStream(s_00,&this->m_kerningPairs);
  return;
}

void EFontData::Read(EStream &s) {
	EStorable *this;
	EStream &s;
	
  EStream *s_00;
  
  Deallocate__9EFontData(this);
                    /* inlined from c:/eor/src2/engine/font/e_fontdata.h */
                    /* end of inlined section */
  if (_9EFontData_m_typeInfo.m_readVersion == 0) {
    s_00 = __rs__H1ZP9EFontSize_R7EStreamRt9TNodeList1ZX01_R7EStream(s,&this->m_sizeList);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    (*(code *)s_00->__vtable[1].GetPos)
              (&s_00->m_streamingStructure + *(short *)&s_00->__vtable[1].EStream,&this->m_baseline,
               4);
    (*(code *)s_00->__vtable[1].GetPos)
              (&s_00->m_streamingStructure + *(short *)&s_00->__vtable[1].EStream,&this->m_topline,4
              );
    (*(code *)s_00->__vtable[1].GetPos)
              (&s_00->m_streamingStructure + *(short *)&s_00->__vtable[1].EStream,
               &this->m_sourceImageSize,4);
    (*(code *)s_00->__vtable[1].GetPos)
              (&s_00->m_streamingStructure + *(short *)&s_00->__vtable[1].EStream,
               &this->m_defaultSpacing,4);
    (*(code *)s_00->__vtable[1].GetPos)
              (&s_00->m_streamingStructure + *(short *)&s_00->__vtable[1].EStream,
               &this->m_verticalSpacing,4);
    (*(code *)s_00->__vtable[1].GetPos)
              (&s_00->m_streamingStructure + *(short *)&s_00->__vtable[1].EStream,
               &this->m_spaceWidth,4);
                    /* end of inlined section */
    __rs__H2ZUiZi_R7EStreamRt10THashTable2ZX01ZX11_R7EStream(s_00,&this->m_kerningPairs);
  }
  return;
}

EStream& EStream & operator<<<unsigned int, EFontCharacter *>(EStream &s, THashTable<unsigned int,EFontCharacter *> &d) {
	s32 count;
	HTIterator i;
	EHashTable *this;
	EStream &s;
	int d;
	EStream &s;
	int d;
	EHashTable *this;
	TLinkedList<EHashTableNode,0,4> *this;
	HTIterator i;
	HTIterator i;
	HTIterator i;
	EStream &s;
	unsigned int d;
	HTIterator i;
	HTIterator i;
	
  EStream__vtable *pEVar1;
  EHashTableNode *pEVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  uint local_40;
  int local_3c;
  uint local_38 [2];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
  local_40 = (d->field0_0x0).m_tableSize;
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&local_40,4);
                    /* end of inlined section */
  local_3c = GetSize__C10EHashTable(&d->field0_0x0);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,(uint)&local_40 | 4,4);
  pEVar2 = (d->field0_0x0).m_list.m_pHead;
                    /* end of inlined section */
  if (pEVar2 != (EHashTableNode *)0x0) {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    pEVar1 = s->__vtable;
    while( true ) {
                    /* end of inlined section */
      local_38[0] = pEVar2->key;
                    /* inlined from /eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/storage/e_storage.h */
      (*(code *)pEVar1[1].Write)(&s->m_streamingStructure + *(short *)&pEVar1[1].Read,local_38,4);
                    /* end of inlined section */
      __ls__FR7EStreamP14EFontCharacter(s,(EFontCharacter *)pEVar2->value);
      pEVar2 = pEVar2->pListNext;
      if (pEVar2 == (EHashTableNode *)0x0) break;
      pEVar1 = s->__vtable;
    }
  }
  return s;
}

EStream& EStream & operator>><unsigned int, EFontCharacter *>(EStream &s, THashTable<unsigned int,EFontCharacter *> &d) {
	s32 tableSize;
	s32 count;
	EStream &s;
	EStream &s;
	u32 key;
	EFontCharacter *val;
	EStream &s;
	THashTable<unsigned int,EFontCharacter *> *this;
	u32 key;
	
  EFontCharacter **ppEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  int tableSize;
  int count;
  uint key;
  EFontCharacter *val;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  RemoveAll__10EHashTable(&d->field0_0x0);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&tableSize,4);
                    /* end of inlined section */
  SetTableSize__10EHashTablei(&d->field0_0x0,tableSize);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,(uint)&tableSize | 4,4);
                    /* end of inlined section */
  while (count = count + -1, count != -1) {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&key,4);
                    /* end of inlined section */
    __rs__FR7EStreamRP14EFontCharacter(s,&val);
    ppEVar1 = (EFontCharacter **)__vc__10EHashTableUi(&d->field0_0x0,key);
    *ppEVar1 = val;
  }
  return s;
}

EStream& EStream & operator<<<EFontSize *>(EStream &s, TNodeList<EFontSize *> &d) {
	NLIterator i;
	EStream &s;
	int d;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  EFontSize *pD;
  ENodeListNode *pEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  int local_40 [4];
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
  local_40[0] = GetSize__C9ENodeList(&d->field0_0x0);
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,local_40,4);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (d->field0_0x0).m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar1 != (ENodeListNode *)0x0) {
                    /* end of inlined section */
    pD = (EFontSize *)pEVar1->data;
    while( true ) {
      __ls__FR7EStreamP9EFontSize(s,pD);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar1 = pEVar1->pNext;
                    /* end of inlined section */
      if (pEVar1 == (ENodeListNode *)0x0) break;
      pD = (EFontSize *)pEVar1->data;
    }
  }
  return s;
}

EStream& EStream & operator<<<unsigned int, int>(EStream &s, THashTable<unsigned int,int> &d) {
	s32 count;
	HTIterator i;
	EHashTable *this;
	EStream &s;
	int d;
	EStream &s;
	int d;
	EHashTable *this;
	TLinkedList<EHashTableNode,0,4> *this;
	HTIterator i;
	HTIterator i;
	HTIterator i;
	EStream &s;
	unsigned int d;
	HTIterator i;
	HTIterator i;
	int d;
	
  EStream__vtable *pEVar1;
  EHashTableNode *pEVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  uint local_40;
  int local_3c;
  uint local_38;
  uint local_34;
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
                    /* inlined from /eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
  local_40 = (d->field0_0x0).m_tableSize;
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&local_40,4);
                    /* end of inlined section */
  local_3c = GetSize__C10EHashTable(&d->field0_0x0);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,(uint)&local_40 | 4,4);
  pEVar2 = (d->field0_0x0).m_list.m_pHead;
                    /* end of inlined section */
  if (pEVar2 != (EHashTableNode *)0x0) {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    pEVar1 = s->__vtable;
    while( true ) {
                    /* end of inlined section */
      local_38 = pEVar2->key;
                    /* inlined from /eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/storage/e_storage.h */
      (*(code *)pEVar1[1].Write)(&s->m_streamingStructure + *(short *)&pEVar1[1].Read,&local_38,4);
                    /* end of inlined section */
      local_34 = pEVar2->value;
                    /* inlined from /eor/src2/common/storage/e_storage.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/storage/e_storage.h */
      (*(code *)s->__vtable[1].Write)
                (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&local_34,4);
                    /* end of inlined section */
      pEVar2 = pEVar2->pListNext;
      if (pEVar2 == (EHashTableNode *)0x0) break;
      pEVar1 = s->__vtable;
    }
  }
  return s;
}

EStream& EStream & operator>><EFontSize *>(EStream &s, TNodeList<EFontSize *> &d) {
	s32 count;
	EStream &s;
	EFontSize *p;
	TNodeList<EFontSize *> *this;
	EFontSize *data;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  int count;
  EFontSize *p;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  RemoveAll__9ENodeList(&d->field0_0x0);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&count,4);
  while (count = count + -1, count != -1) {
    __rs__FR7EStreamRP9EFontSize(s,&p);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    AddTail__9ENodeListUi(&d->field0_0x0,(uint)p);
                    /* end of inlined section */
  }
  return s;
}

EStream& EStream & operator>><unsigned int, int>(EStream &s, THashTable<unsigned int,int> &d) {
	s32 tableSize;
	s32 count;
	EStream &s;
	EStream &s;
	u32 key;
	int val;
	EStream &s;
	THashTable<unsigned int,int> *this;
	u32 key;
	
  uint *puVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  int tableSize;
  int count;
  uint key;
  int val;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  RemoveAll__10EHashTable(&d->field0_0x0);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&tableSize,4);
                    /* end of inlined section */
  SetTableSize__10EHashTablei(&d->field0_0x0,tableSize);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,(uint)&tableSize | 4,4);
                    /* end of inlined section */
  while (count = count + -1, count != -1) {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&key,4);
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&val,4);
                    /* end of inlined section */
    puVar1 = __vc__10EHashTableUi(&d->field0_0x0,key);
    *puVar1 = val;
  }
  return s;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/font/e_fontdata.h */
    gpTypeInfo_EFontCharacter =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_14EFontCharacter_m_typeInfo,New__14EFontCharacter,0,"EFontCharacter",
                    &_9EStorable_m_typeInfo);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/font/e_fontdata.h */
    gpTypeInfo_EFontSize =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_9EFontSize_m_typeInfo,New__9EFontSize,0,"EFontSize",&_9EStorable_m_typeInfo);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/font/e_fontdata.h */
    gpTypeInfo_EFontData =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_9EFontData_m_typeInfo,New__9EFontData,0,"EFontData",&_9EStorable_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

void EStorable::SafeDelete() {
  if (this != (EStorable *)0x0) {
    (*(code *)this->__vtable[1].GetTypeKey)
              ((int)&this->__vtable + (int)*(short *)&this->__vtable[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* EStorable::GetTypeInfo() {
  return &_9EStorable_m_typeInfo;
}

char* EStorable::GetTypeName() {
  return _9EStorable_m_typeInfo.m_name;
}

u32 EStorable::GetTypeKey() {
  return _9EStorable_m_typeInfo.m_key;
}

u16 EStorable::GetTypeVersion() {
  return _9EStorable_m_typeInfo.m_version;
}

void EStorable::~EStorable(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (EStorable__vtable *)_vt_9EStorable;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void EStorable::Read(EStream &s) {
  return;
}

void EStorable::Write(EStream &s) {
  return;
}

void EFontCharacter::~EFontCharacter(int __in_chrg) {
	EStorable *this;
	void *pAddress;
	
  (this->field0_0x0).__vtable = (EStorable__vtable *)_vt_9EStorable;
  if ((__in_chrg & 1U) != 0) {
    __dl__14EFontCharacterPv(this);
  }
  return;
}

EFontCharacter* EFontCharacter::New() {
  EFontCharacter *pEVar1;
  
  pEVar1 = (EFontCharacter *)__nw__14EFontCharacterUi(0xc);
  (pEVar1->field0_0x0).__vtable = (EStorable__vtable *)_vt_14EFontCharacter;
  return pEVar1;
}

void EFontCharacter::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EFontCharacter *)0x0) {
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* EFontCharacter::GetTypeInfo() {
  return &_14EFontCharacter_m_typeInfo;
}

char* EFontCharacter::GetTypeName() {
  return _14EFontCharacter_m_typeInfo.m_name;
}

u32 EFontCharacter::GetTypeKey() {
  return _14EFontCharacter_m_typeInfo.m_key;
}

u16 EFontCharacter::GetTypeVersion() {
  return _14EFontCharacter_m_typeInfo.m_version;
}

u16 EFontCharacter::GetReadVersion() {
  return _14EFontCharacter_m_typeInfo.m_readVersion;
}

ETypeInfo* EFontCharacter::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_14EFontCharacter_m_typeInfo,New__14EFontCharacter,version,"EFontCharacter",
                      &_9EStorable_m_typeInfo);
  return pEVar1;
}

EFontCharacter* EFontCharacter::CreateCopy() {
  EFontCharacter *pEVar1;
  
  pEVar1 = (EFontCharacter *)CreateCopy__9EStorable(&this->field0_0x0);
  return pEVar1;
}

void* EFontCharacter::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _allocBucketAlloc__FUiUi(0xc,0xc);
  return pvVar1;
}

void* EFontCharacter::operator new(void *p) {
  void *in_a1_lo;
  
  return in_a1_lo;
}

void EFontCharacter::operator delete(void *p) {
  _allocBucketFree__FPvUiUi(p,0xc,0xc);
  return;
}

EFontSize* EFontSize::New() {
  EFontSize *pEVar1;
  
  pEVar1 = (EFontSize *)__builtin_new(0x30);
  pEVar1 = __9EFontSize(pEVar1);
  return pEVar1;
}

void EFontSize::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EFontSize *)0x0) {
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* EFontSize::GetTypeInfo() {
  return &_9EFontSize_m_typeInfo;
}

char* EFontSize::GetTypeName() {
  return _9EFontSize_m_typeInfo.m_name;
}

u32 EFontSize::GetTypeKey() {
  return _9EFontSize_m_typeInfo.m_key;
}

u16 EFontSize::GetTypeVersion() {
  return _9EFontSize_m_typeInfo.m_version;
}

u16 EFontSize::GetReadVersion() {
  return _9EFontSize_m_typeInfo.m_readVersion;
}

ETypeInfo* EFontSize::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_9EFontSize_m_typeInfo,New__9EFontSize,version,"EFontSize",
                      &_9EStorable_m_typeInfo);
  return pEVar1;
}

EFontSize* EFontSize::CreateCopy() {
  EFontSize *pEVar1;
  
  pEVar1 = (EFontSize *)CreateCopy__9EStorable(&this->field0_0x0);
  return pEVar1;
}

EFontData* EFontData::New() {
  EFontData *pEVar1;
  
  pEVar1 = (EFontData *)__builtin_new(0x34);
  pEVar1 = __9EFontData(pEVar1);
  return pEVar1;
}

void EFontData::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EFontData *)0x0) {
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* EFontData::GetTypeInfo() {
  return &_9EFontData_m_typeInfo;
}

char* EFontData::GetTypeName() {
  return _9EFontData_m_typeInfo.m_name;
}

u32 EFontData::GetTypeKey() {
  return _9EFontData_m_typeInfo.m_key;
}

u16 EFontData::GetTypeVersion() {
  return _9EFontData_m_typeInfo.m_version;
}

u16 EFontData::GetReadVersion() {
  return _9EFontData_m_typeInfo.m_readVersion;
}

ETypeInfo* EFontData::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_9EFontData_m_typeInfo,New__9EFontData,version,"EFontData",
                      &_9EStorable_m_typeInfo);
  return pEVar1;
}

EFontData* EFontData::CreateCopy() {
  EFontData *pEVar1;
  
  pEVar1 = (EFontData *)CreateCopy__9EStorable(&this->field0_0x0);
  return pEVar1;
}

void global constructors keyed to gpTypeInfo_EFontCharacter() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

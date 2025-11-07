// STATUS: NOT STARTED

#include "Neighbor.h"

struct vector<PersDataPair,__malloc_alloc_template<0> > {
protected:
	PersDataPair *start;
	PersDataPair *finish;
	PersDataPair *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	PersDataPair* begin();
	PersDataPair* begin();
	PersDataPair* end();
	PersDataPair* end();
	reverse_iterator<PersDataPair *,PersDataPair,PersDataPair &,int> rbegin();
	reverse_iterator<const PersDataPair *,PersDataPair,const PersDataPair &,int> rbegin();
	reverse_iterator<PersDataPair *,PersDataPair,PersDataPair &,int> rend();
	reverse_iterator<const PersDataPair *,PersDataPair,const PersDataPair &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	PersDataPair& operator[]();
	PersDataPair& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<PersDataPair,__malloc_alloc_template<0> >*, int, void);
	vector<PersDataPair,__malloc_alloc_template<0> >& operator=();
	void reserve();
	PersDataPair& front();
	PersDataPair& front();
	PersDataPair& back();
	PersDataPair& back();
	void push_back();
	void swap();
	PersDataPair* insert();
	PersDataPair* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct simple_alloc<PersDataPair,__malloc_alloc_template<0> > {
	simple_alloc<PersDataPair,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static PersDataPair* allocate(/* parameters unknown */);
	static PersDataPair* allocate(/* parameters unknown */);
	static PersDataPair* allocate(/* parameters unknown */);
	static PersDataPair* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

vector<PersDataPair,__malloc_alloc_template<0> > sPersistentFields = {
	/* .start = */ NULL,
	/* .finish = */ NULL,
	/* .end_of_storage = */ NULL
};

Neighbor* Neighbor::Neighbor() {
  RelMatrix *pRVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  __12StringBufferPcUi(&(this->fOriginalFileName).field0_0x0,(this->fOriginalFileName).fChars,0x40);
                    /* end of inlined section */
  *(undefined4 *)&this->fFriendCountDirty = 1;
  pRVar1 = CreateInstance__9RelMatrix();
  this->fRelations = pRVar1;
  return this;
}

void Neighbor::~Neighbor(int __in_chrg) {
	void *ptr;
	
  DestroyInstance__9RelMatrixP9RelMatrix(this->fRelations);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Neighbor.h */
    free(this);
                    /* end of inlined section */
  }
  return;
}

Neighbor* Neighbor::Neighbor(StdPrm id, ObjSelector *sel) {
	StackString<64> *this;
	
  int iVar1;
  RelMatrix *pRVar2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
  this->fID = id;
  this->fSelector = sel;
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  __12StringBufferPcUi(&(this->fOriginalFileName).field0_0x0,(this->fOriginalFileName).fChars,0x40);
                    /* end of inlined section */
  iVar1 = GetGUID__11ObjSelector(this->fSelector);
  this->fGUID = iVar1;
  pRVar2 = CreateInstance__9RelMatrix();
  this->fRelations = pRVar2;
  GetShortFilename__11ObjSelectorP12StringBuffer(sel,&(this->fOriginalFileName).field0_0x0);
  return this;
}

int Neighbor::GetNumPersistentDataFields() {
	vector<PersDataPair,__malloc_alloc_template<0> > &pf;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	void *result;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	PersDataPair *last;
	PersDataPair *first;
	PersDataPair *pointer;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  PersDataPair *pPVar4;
  PersDataPair *pPVar5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  PersDataPair *pPVar6;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  PersDataPair local_60 [2];
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
  
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  if ((int)sPersistentFields.finish - (int)sPersistentFields.start >> 3 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    pPVar4 = sPersistentFields.start;
    pPVar5 = sPersistentFields.finish;
    pPVar6 = sPersistentFields.end_of_storage;
    if ((uint)((int)sPersistentFields.end_of_storage - (int)sPersistentFields.start >> 3) < 0x20) {
      pPVar4 = (PersDataPair *)malloc(0x100);
      if (pPVar4 == (PersDataPair *)0x0) {
        pPVar4 = (PersDataPair *)oom_malloc__t23__malloc_alloc_template1i0Ui(0x100);
      }
      pPVar6 = pPVar4 + 0x20;
      uninitialized_copy__H2ZP12PersDataPairZP12PersDataPair_X01X01X11_X11
                (sPersistentFields.start,sPersistentFields.finish,pPVar4);
      for (pPVar5 = sPersistentFields.start; pPVar5 != sPersistentFields.finish; pPVar5 = pPVar5 + 1
          ) {
      }
      pPVar5 = pPVar4;
      if ((sPersistentFields.start != (PersDataPair *)0x0) &&
         ((int)sPersistentFields.end_of_storage - (int)sPersistentFields.start >> 3 != 0)) {
        free(sPersistentFields.start);
      }
    }
    sPersistentFields.end_of_storage = pPVar6;
    sPersistentFields.finish = pPVar5;
    sPersistentFields.start = pPVar4;
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 2;
    local_60[0].fVersionAdded = 1;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x100000002U >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x100000002 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 3;
    local_60[0].fVersionAdded = 1;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x100000003U >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x100000003 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 4;
    local_60[0].fVersionAdded = 1;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x100000004U >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x100000004 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 5;
    local_60[0].fVersionAdded = 1;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x100000005U >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x100000005 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 6;
    local_60[0].fVersionAdded = 1;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x100000006U >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x100000006 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 7;
    local_60[0].fVersionAdded = 1;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x100000007U >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x100000007 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 9;
    local_60[0].fVersionAdded = 1;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x100000009U >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x100000009 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 10;
    local_60[0].fVersionAdded = 1;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x10000000aU >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x10000000a << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 0xb;
    local_60[0].fVersionAdded = 1;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x10000000bU >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x10000000b << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 0xc;
    local_60[0].fVersionAdded = 1;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x10000000cU >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x10000000c << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 0xd;
    local_60[0].fVersionAdded = 1;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x10000000dU >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x10000000d << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 0xe;
    local_60[0].fVersionAdded = 1;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x10000000eU >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x10000000e << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 0xf;
    local_60[0].fVersionAdded = 1;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x10000000fU >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x10000000f << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 0x10;
    local_60[0].fVersionAdded = 1;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x100000010U >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x100000010 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 0x11;
    local_60[0].fVersionAdded = 1;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x100000011U >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x100000011 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 0x12;
    local_60[0].fVersionAdded = 1;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x100000012U >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x100000012 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 0x2e;
    local_60[0].fVersionAdded = 1;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x10000002eU >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x10000002e << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 0x2f;
    local_60[0].fVersionAdded = 1;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x10000002fU >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x10000002f << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 0x30;
    local_60[0].fVersionAdded = 1;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x100000030U >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x100000030 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 0x31;
    local_60[0].fVersionAdded = 1;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x100000031U >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x100000031 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 0x32;
    local_60[0].fVersionAdded = 1;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x100000032U >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x100000032 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 0x33;
    local_60[0].fVersionAdded = 1;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x100000033U >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x100000033 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 0x34;
    local_60[0].fVersionAdded = 1;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x100000034U >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x100000034 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 0x35;
    local_60[0].fVersionAdded = 1;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x100000035U >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x100000035 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 0x36;
    local_60[0].fVersionAdded = 1;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x100000036U >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x100000036 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 0x37;
    local_60[0].fVersionAdded = 1;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x100000037U >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x100000037 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 0x3a;
    local_60[0].fVersionAdded = 1;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x10000003aU >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x10000003a << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 0x3c;
    local_60[0].fVersionAdded = 1;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x10000003cU >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x10000003c << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 0x3d;
    local_60[0].fVersionAdded = 1;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x10000003dU >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x10000003d << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 0x38;
    local_60[0].fVersionAdded = 2;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x200000038U >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x200000038 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 0x39;
    local_60[0].fVersionAdded = 2;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x200000039U >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x200000039 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 0x3f;
    local_60[0].fVersionAdded = 2;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x20000003fU >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x20000003f << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 0x41;
    local_60[0].fVersionAdded = 3;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x300000041U >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x300000041 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 0x43;
    local_60[0].fVersionAdded = 4;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x400000043U >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x400000043 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 0x44;
    local_60[0].fVersionAdded = 4;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x400000044U >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x400000044 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 0x45;
    local_60[0].fVersionAdded = 5;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x500000045U >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x500000045 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
    pPVar4 = sPersistentFields.finish;
    local_60[0].fDataIndex = 0x4a;
    local_60[0].fVersionAdded = 6;
    if (sPersistentFields.finish == sPersistentFields.end_of_storage) {
      insert_aux__t6vector2Z12PersDataPairZt23__malloc_alloc_template1i0P12PersDataPairRC12PersDataPair
                (&sPersistentFields,sPersistentFields.finish,local_60);
    }
    else {
      puVar1 = (undefined *)((int)&(sPersistentFields.finish)->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x60000004aU >> (7 - uVar2) * 8;
      uVar2 = (uint)pPVar4 & 7;
      puVar3 = (ulong *)((int)pPVar4 - uVar2);
      *puVar3 = 0x60000004a << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      sPersistentFields.finish = sPersistentFields.finish + 1;
    }
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  return (int)sPersistentFields.finish - (int)sPersistentFields.start >> 3;
}

PersDataPair& Neighbor::GetPersistentDataFieldsByIndex(int iIndex) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  return sPersistentFields.start + iIndex;
}

Int Neighbor::GetLatestPersDataVersion() {
  return 6;
}

void Neighbor::DoStream(ReconBuffer *r, SInt32 version) {
	SInt32 nver;
	StdPrm unusedAge;
	ReconBuffer *this;
	
  ObjSelector *pOVar1;
  int iVar2;
  RelMatrix *pRVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  ushort unusedAge;
  int nver;
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
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  if (version < 0x1e) {
    nver = 0;
  }
  else {
    nver = 4;
    Recon32__11ReconBufferPii(r,(int *)((uint)&unusedAge | 4),1);
  }
  if (1 < nver) {
    ReconString__11ReconBufferR12StringBuffer(r,&(this->fOriginalFileName).field0_0x0);
    ReconInt__11ReconBufferPii(r,&this->fCurrentHouse,1);
  }
  if ((0 < nver) &&
     (ReconInt__11ReconBufferPii(r,&this->fPersonDataVersion,1), this->fPersonDataVersion != 0)) {
    if (nver < 3) {
      Recon16__11ReconBufferPsi(r,this->fData,0x40);
      unusedAge = 0;
      Recon16__11ReconBufferPsi(r,&unusedAge,1);
    }
    else {
      Recon16__11ReconBufferPsi(r,this->fData,0x50);
    }
  }
  Recon16__11ReconBufferPsi(r,&this->fID,1);
  Recon32__11ReconBufferPii(r,&this->fGUID,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
                    /* end of inlined section */
  if (r->fMode == kReading) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    pOVar1 = (ObjSelector *)
             (*(code *)_5Globs_pObjectFolder->__vtable->DeletingInstance)
                       ((int)&_5Globs_pObjectFolder->__vtable +
                        (int)*(short *)&_5Globs_pObjectFolder->__vtable->CreatingInstance,
                        this->fGUID);
    this->fSelector = pOVar1;
  }
  if (nver < 2) {
    if (this->fSelector != (ObjSelector *)0x0) {
      iVar2 = length__C12StringBuffer(&(this->fOriginalFileName).field0_0x0);
      if (iVar2 != 0) {
        pRVar3 = this->fRelations;
        goto LAB_00253b88;
      }
      GetShortFilename__11ObjSelectorP12StringBuffer
                (this->fSelector,&(this->fOriginalFileName).field0_0x0);
    }
    pRVar3 = this->fRelations;
  }
  else {
    pRVar3 = this->fRelations;
  }
LAB_00253b88:
  (*(code *)pRVar3->__vtable[1].GetValue)
            ((int)&pRVar3->__vtable + (int)*(short *)&pRVar3->__vtable[1].RemoveArray,r,version);
  return;
}

SInt32 Neighbor::GetGUID() {
  return this->fGUID;
}

bool Neighbor::IsCharacter() {
  bool bVar1;
  
  bVar1 = false;
  if (this->fSelector != (ObjSelector *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
                    /* end of inlined section */
    bVar1 = (int)(this->fSelector->fFlags & 0xcU) >> 2 == 1;
  }
  return bVar1;
}

bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2) {
  char cVar1;
  char cVar2;
  
  do {
    if ((first1 == last1) || (first2 == last2)) {
      return first1 == last1 && first2 != last2;
    }
    cVar1 = *first1;
    cVar2 = *first2;
    if (cVar1 < cVar2) {
      return true;
    }
    first1 = first1 + 1;
    first2 = first2 + 1;
  } while (cVar1 <= cVar2);
  return false;
}

void* __malloc_alloc_template<0>::oom_malloc(unsigned int n) {
  void *pvVar1;
  
  do {
    (*(code *)0x0)();
    pvVar1 = malloc(n);
  } while (pvVar1 == (void *)0x0);
  return pvVar1;
}

PersDataPair* PersDataPair * uninitialized_copy<PersDataPair *, PersDataPair *>(PersDataPair *first, PersDataPair *last, PersDataPair *result) {
	PersDataPair *p;
	PersDataPair &value;
	void *pAddress;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  PersDataPair *pPVar5;
  ulong in_a3;
  
  pPVar5 = result;
  if (first != last) {
    do {
      puVar1 = (undefined *)((int)&first->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)first & 7;
      in_a3 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_a3 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)first - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&pPVar5->fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | in_a3 >> (7 - uVar2) * 8;
      first = first + 1;
      result = pPVar5 + 1;
      uVar2 = (uint)pPVar5 & 7;
      *(ulong *)((int)pPVar5 - uVar2) =
           in_a3 << uVar2 * 8 |
           *(ulong *)((int)pPVar5 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      pPVar5 = result;
    } while (first != last);
  }
  return result;
}

PersDataPair* PersDataPair * copy_backward<PersDataPair *, PersDataPair *>(PersDataPair *first, PersDataPair *last, PersDataPair *result) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  PersDataPair *pPVar5;
  ulong in_v1;
  PersDataPair *pPVar6;
  
  pPVar5 = result;
  if (first != last) {
    do {
      result = pPVar5 + -1;
      pPVar6 = last + -1;
      puVar1 = (undefined *)((int)&last[-1].fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)pPVar6 & 7;
      in_v1 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)pPVar6 - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&pPVar5[-1].fVersionAdded + 3);
      uVar2 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | in_v1 >> (7 - uVar2) * 8;
      uVar2 = (uint)result & 7;
      *(ulong *)((int)result - uVar2) =
           in_v1 << uVar2 * 8 |
           *(ulong *)((int)result - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      last = pPVar6;
      pPVar5 = result;
    } while (first != pPVar6);
  }
  return result;
}

void vector<PersDataPair, __malloc_alloc_template<0> >::insert_aux(PersDataPair *position, PersDataPair &x) {
	PersDataPair x_copy;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	void *result;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	PersDataPair *p;
	PersDataPair &value;
	void *pAddress;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	PersDataPair *first;
	PersDataPair *pointer;
	vector<PersDataPair,__malloc_alloc_template<0> > *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  uint uVar5;
  PersDataPair *pPVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  PersDataPair *pPVar10;
  ulong in_a3;
  int iVar11;
  PersDataPair x_copy;
  
  uVar7 = (ulong)(int)position;
  pPVar6 = this->finish;
  if ((long)(int)pPVar6 == (long)(int)this->end_of_storage) {
    iVar11 = (int)pPVar6 - (int)this->start >> 3;
    iVar9 = 1;
    if (iVar11 != 0) {
      iVar9 = iVar11 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    uVar5 = iVar9 << 3;
    if (iVar9 == 0) {
      pPVar6 = (PersDataPair *)0x0;
      uVar5 = 0;
    }
    else {
      pPVar6 = (PersDataPair *)malloc(uVar5);
      if (pPVar6 == (PersDataPair *)0x0) {
        pPVar6 = (PersDataPair *)oom_malloc__t23__malloc_alloc_template1i0Ui(uVar5);
      }
    }
                    /* end of inlined section */
                    /* end of inlined section */
    uninitialized_copy__H2ZP12PersDataPairZP12PersDataPair_X01X01X11_X11
              (this->start,position,pPVar6);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    uVar8 = (int)pPVar6 + ((int)position - (int)this->start);
    puVar1 = (undefined *)((int)&x->fVersionAdded + 3);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)x & 7;
    uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
            uVar7 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)x - uVar3) >> uVar3 * 8;
    uVar2 = uVar8 + 7 & 7;
    puVar4 = (ulong *)((uVar8 + 7) - uVar2);
    *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
    uVar2 = uVar8 & 7;
    *(ulong *)(uVar8 - uVar2) =
         uVar7 << uVar2 * 8 | *(ulong *)(uVar8 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
                    /* end of inlined section */
    uninitialized_copy__H2ZP12PersDataPairZP12PersDataPair_X01X01X11_X11
              (position,this->finish,
               (PersDataPair *)((int)pPVar6 + (int)position + (8 - (int)this->start)));
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    pPVar10 = this->start;
    if (pPVar10 == this->finish) {
      pPVar10 = this->start;
    }
    else {
      do {
        pPVar10 = pPVar10 + 1;
      } while (pPVar10 != this->finish);
                    /* end of inlined section */
      pPVar10 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((pPVar10 != (PersDataPair *)0x0) && ((int)this->end_of_storage - (int)pPVar10 >> 3 != 0)) {
      free(pPVar10);
                    /* end of inlined section */
    }
    pPVar10 = pPVar6 + iVar11;
    this->start = pPVar6;
    this->end_of_storage = (PersDataPair *)((int)&pPVar6->fDataIndex + uVar5);
  }
  else {
    puVar1 = (undefined *)((int)&pPVar6[-1].fVersionAdded + 3);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    uVar5 = (uint)puVar1 & 7;
    uVar2 = (uint)(pPVar6 + -1) & 7;
    uVar7 = (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
            (long)(int)this->end_of_storage & 0xffffffffffffffffU >> (uVar5 + 1) * 8) &
            -1L << (8 - uVar2) * 8 | *(ulong *)((int)(pPVar6 + -1) - uVar2) >> uVar2 * 8;
    puVar1 = (undefined *)((int)&pPVar6->fVersionAdded + 3);
    uVar5 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 | uVar7 >> (7 - uVar5) * 8;
    uVar5 = (uint)pPVar6 & 7;
    *(ulong *)((int)pPVar6 - uVar5) =
         uVar7 << uVar5 * 8 |
         *(ulong *)((int)pPVar6 - uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar1 = (undefined *)((int)&x->fVersionAdded + 3);
                    /* end of inlined section */
    uVar5 = (uint)puVar1 & 7;
    uVar2 = (uint)x & 7;
    x_copy = (PersDataPair)
             ((*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
              in_a3 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar2) * 8 |
             *(ulong *)((int)x - uVar2) >> uVar2 * 8);
    puVar1 = (undefined *)((int)&x_copy.fVersionAdded + 3);
    uVar5 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 | (ulong)x_copy >> (7 - uVar5) * 8;
    copy_backward__H2ZP12PersDataPairZP12PersDataPair_X01X01X11_X11
              (position,this->finish + -1,this->finish);
    puVar1 = (undefined *)((int)&position->fVersionAdded + 3);
    uVar5 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar5);
    *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 | (ulong)x_copy >> (7 - uVar5) * 8;
    uVar5 = (uint)position & 7;
    *(ulong *)((int)position - uVar5) =
         (long)x_copy << uVar5 * 8 |
         *(ulong *)((int)position - uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    pPVar10 = this->finish;
  }
  this->finish = pPVar10 + 1;
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
	PersDataPair *last;
	PersDataPair *first;
	PersDataPair *pointer;
	
  PersDataPair *pPVar1;
  
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
      pPVar1 = sPersistentFields.start;
      if (sPersistentFields.start != sPersistentFields.finish) {
        do {
          pPVar1 = pPVar1 + 1;
        } while (pPVar1 != sPersistentFields.finish);
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
      if ((sPersistentFields.start != (PersDataPair *)0x0) &&
         ((int)sPersistentFields.end_of_storage - (int)sPersistentFields.start >> 3 != 0)) {
        free(sPersistentFields.start);
      }
    }
    else {
      sPersistentFields.start = (PersDataPair *)0x0;
      sPersistentFields.end_of_storage = (PersDataPair *)0x0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Neighbor.cpp */
      sPersistentFields.finish = (PersDataPair *)0x0;
    }
  }
  return;
}

void global constructors keyed to sPersistentFields() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to sPersistentFields() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

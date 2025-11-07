// STATUS: NOT STARTED

#include "RelMatrix.h"

struct RelInt {
	SInt32 n;
	
	RelInt& operator=();
	RelInt();
	RelInt();
	void DoStream(ReconBuffer *rb, SInt32 version);
};

struct vector<RelInt,__malloc_alloc_template<0> > {
protected:
	RelInt *start;
	RelInt *finish;
	RelInt *end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	RelInt* begin();
	RelInt* begin();
	RelInt* end();
	RelInt* end();
	reverse_iterator<RelInt *,RelInt,RelInt &,int> rbegin();
	reverse_iterator<const RelInt *,RelInt,const RelInt &,int> rbegin();
	reverse_iterator<RelInt *,RelInt,RelInt &,int> rend();
	reverse_iterator<const RelInt *,RelInt,const RelInt &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	RelInt& operator[]();
	RelInt& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<RelInt,__malloc_alloc_template<0> >*, int, void);
	vector<RelInt,__malloc_alloc_template<0> >& operator=();
	void reserve();
	RelInt& front();
	RelInt& front();
	RelInt& back();
	RelInt& back();
	void push_back();
	void swap();
	RelInt* insert();
	RelInt* insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct RelArray : vector<RelInt,__malloc_alloc_template<0> > {
private:
	RelKeyType key;
	
public:
	RelArray& operator=();
	RelArray();
	RelArray(RelArray*, int, void);
private:
	RelArray();
public:
	RelArray();
	void DoStream(ReconBuffer *rb, SInt32 version);
};

struct simple_alloc<RelInt,__malloc_alloc_template<0> > {
	simple_alloc<RelInt,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static RelInt* allocate(/* parameters unknown */);
	static RelInt* allocate(/* parameters unknown */);
	static RelInt* allocate(/* parameters unknown */);
	static RelInt* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct vector<RelArray *,__malloc_alloc_template<0> > {
protected:
	RelArray **start;
	RelArray **finish;
	RelArray **end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	RelArray** begin();
	RelArray** begin();
	RelArray** end();
	RelArray** end();
	reverse_iterator<RelArray **,RelArray *,RelArray *&,int> rbegin();
	reverse_iterator<RelArray *const *,RelArray *,RelArray *const &,int> rbegin();
	reverse_iterator<RelArray **,RelArray *,RelArray *&,int> rend();
	reverse_iterator<RelArray *const *,RelArray *,RelArray *const &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	RelArray*& operator[]();
	RelArray*& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<RelArray *,__malloc_alloc_template<0> >*, int, void);
	vector<RelArray *,__malloc_alloc_template<0> >& operator=();
	void reserve();
	RelArray*& front();
	RelArray*& front();
	RelArray*& back();
	RelArray*& back();
	void push_back();
	void swap();
	RelArray** insert();
	RelArray** insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct RelMatrixImpl : RelMatrix {
	vector<RelArray *,__malloc_alloc_template<0> > m_pArray;
	
	RelMatrixImpl& operator=();
	RelMatrixImpl();
	RelArray** FindArray(SInt32 key);
	void CreateNewArray(SInt32 key);
	void TearDown();
	RelMatrixImpl();
	/* vtable[1] */ virtual RelMatrixImpl();
	/* vtable[2] */ virtual Int GetArraySize(SInt32 key);
	/* vtable[3] */ virtual void SetArraySize(SInt32 key, Int numValues);
	/* vtable[4] */ virtual void RemoveArray(SInt32 key);
	/* vtable[5] */ virtual SInt32 GetValue(SInt32 key, Int index);
	/* vtable[6] */ virtual void SetValue(SInt32 key, Int index, SInt32 value);
	/* vtable[7] */ virtual void DoStream(ReconBuffer *rb, SInt32 version);
	/* vtable[8] */ virtual Int CountKeys();
	/* vtable[9] */ virtual RelKeyType GetNthKey(Int n);
};

struct simple_alloc<RelArray *,__malloc_alloc_template<0> > {
	simple_alloc<RelArray *,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static RelArray** allocate(/* parameters unknown */);
	static RelArray** allocate(/* parameters unknown */);
	static RelArray** allocate(/* parameters unknown */);
	static RelArray** allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

__vtbl_ptr_type RelMatrixImpl virtual table[11] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RelMatrixImpl::~RelMatrixImpl,
		/* .__delta2 = */ -12128
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RelMatrixImpl::GetArraySize,
		/* .__delta2 = */ -13632
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RelMatrixImpl::SetArraySize,
		/* .__delta2 = */ -13264
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RelMatrixImpl::RemoveArray,
		/* .__delta2 = */ -13552
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RelMatrixImpl::GetValue,
		/* .__delta2 = */ -12816
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RelMatrixImpl::SetValue,
		/* .__delta2 = */ -12760
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RelMatrixImpl::DoStream,
		/* .__delta2 = */ -12688
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RelMatrixImpl::CountKeys,
		/* .__delta2 = */ -11944
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RelMatrixImpl::GetNthKey,
		/* .__delta2 = */ -11920
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type RelMatrix virtual table[11] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &RelMatrix::~RelMatrix,
		/* .__delta2 = */ -8720
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

RelMatrix* RelMatrix::CreateInstance() {
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	
  RelMatrix *pRVar1;
  
  pRVar1 = (RelMatrix *)__builtin_new(0x10);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  pRVar1->__vtable = (RelMatrix__vtable *)_vt_13RelMatrixImpl;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pRVar1[1].__vtable = (RelMatrix__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pRVar1[3].__vtable = (RelMatrix__vtable *)0x0;
  pRVar1[2].__vtable = (RelMatrix__vtable *)0x0;
                    /* end of inlined section */
  return pRVar1;
}

void RelMatrix::DestroyInstance(RelMatrix *pInstance) {
  if (pInstance != (RelMatrix *)0x0) {
    (*(code *)pInstance->__vtable->SetArraySize)
              ((int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->GetArraySize,3);
  }
  return;
}

void RelInt::DoStream(ReconBuffer *rb, SInt32 version) {
  Recon32__11ReconBufferPii(rb,&this->n,1);
  return;
}

Int RelMatrixImpl::GetArraySize(SInt32 key) {
	RelArray **array;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	
  RelArray **ppRVar1;
  int iVar2;
  
  ppRVar1 = FindArray__13RelMatrixImpli(this,key);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  if (ppRVar1 == (this->m_pArray).finish) {
    iVar2 = 0;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    iVar2 = (int)((*ppRVar1)->field0_0x0).finish - (int)((*ppRVar1)->field0_0x0).start >> 2;
  }
  return iVar2;
}

void RelMatrixImpl::RemoveArray(SInt32 key) {
	RelArray **i;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	RelInt *first;
	RelInt *last;
	RelInt *pointer;
	RelArray **position;
	RelArray **result;
	RelArray **result;
	RelArray **result;
	RelArray **first;
	ptrdiff_t n;
	
  RelArray *pRVar1;
  RelInt *pAddress;
  RelArray **ppRVar2;
  RelInt *pRVar3;
  int iVar4;
  RelArray **ppRVar5;
  RelArray **ppRVar6;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  ppRVar5 = (this->m_pArray).start;
                    /* end of inlined section */
  if (ppRVar5 != (this->m_pArray).finish) {
    pRVar1 = *ppRVar5;
    while (pRVar1->key != key) {
                    /* end of inlined section */
      ppRVar5 = ppRVar5 + 1;
      if (ppRVar5 == (this->m_pArray).finish) {
        return;
      }
      pRVar1 = *ppRVar5;
    }
    ppRVar6 = ppRVar5 + 1;
    if (pRVar1 != (RelArray *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      pAddress = (pRVar1->field0_0x0).start;
      for (pRVar3 = pAddress; pRVar3 != (pRVar1->field0_0x0).finish; pRVar3 = pRVar3 + 1) {
      }
      if ((pAddress != (RelInt *)0x0) &&
         ((int)(pRVar1->field0_0x0).end_of_storage - (int)pAddress >> 2 != 0)) {
        free(pAddress);
      }
      _memmanFree__FPv(pRVar1);
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    ppRVar2 = (this->m_pArray).finish;
    if (ppRVar6 != ppRVar2) {
      for (iVar4 = (int)ppRVar2 - (int)ppRVar6 >> 2; 0 < iVar4; iVar4 = iVar4 + -1) {
        pRVar1 = *ppRVar6;
        ppRVar6 = ppRVar6 + 1;
        *ppRVar5 = pRVar1;
        ppRVar5 = ppRVar5 + 1;
      }
      ppRVar2 = (this->m_pArray).finish;
    }
                    /* end of inlined section */
    (this->m_pArray).finish = ppRVar2 + -1;
  }
  return;
}

void RelMatrixImpl::SetArraySize(SInt32 key, Int numValues) {
	RelArray **array;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	RelArray *r;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	RelInt fillVal;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	int extraCount;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	RelInt *last;
	RelInt *first;
	RelInt *pointer;
	
  RelArray *this_00;
  RelInt *pRVar1;
  RelArray **ppRVar2;
  RelInt *pRVar3;
  uint uVar4;
  RelInt fillVal;
  
                    /* end of inlined section */
  ppRVar2 = FindArray__13RelMatrixImpli(this,key);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  if (ppRVar2 == (this->m_pArray).finish) {
    CreateNewArray__13RelMatrixImpli(this,key);
    ppRVar2 = FindArray__13RelMatrixImpli(this,key);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    if (ppRVar2 == (this->m_pArray).finish) {
      return;
    }
    this_00 = *ppRVar2;
  }
  else {
    this_00 = *ppRVar2;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pRVar1 = (this_00->field0_0x0).finish;
  uVar4 = (int)pRVar1 - (int)(this_00->field0_0x0).start >> 2;
                    /* end of inlined section */
  if (uVar4 < (uint)numValues) {
    fillVal.n = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    pRVar1 = (this_00->field0_0x0).finish;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    insert__t6vector2Z6RelIntZt23__malloc_alloc_template1i0P6RelIntUiRC6RelInt
              (&this_00->field0_0x0,pRVar1,
               numValues - ((int)pRVar1 - (int)(this_00->field0_0x0).start >> 2),&fillVal);
  }
  else {
                    /* end of inlined section */
    if ((uint)numValues < uVar4) {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
      for (pRVar3 = pRVar1 + -(uVar4 - numValues); pRVar3 != pRVar1; pRVar3 = pRVar3 + 1) {
      }
      (this_00->field0_0x0).finish = pRVar1 + -(uVar4 - numValues);
    }
  }
  return;
}

void RelMatrixImpl::CreateNewArray(SInt32 key) {
	RelArray *newArray;
	RelKeyType inKey;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	
  RelArray **position;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  RelArray *newArray;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  newArray = (RelArray *)__builtin_new(0x10);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  newArray->key = key;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  (newArray->field0_0x0).start = (RelInt *)0x0;
  (newArray->field0_0x0).finish = (RelInt *)0x0;
  (newArray->field0_0x0).end_of_storage = (RelInt *)0x0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  position = (this->m_pArray).finish;
  if (position == (this->m_pArray).end_of_storage) {
    insert_aux__t6vector2ZP8RelArrayZt23__malloc_alloc_template1i0PP8RelArrayRCP8RelArray
              (&this->m_pArray,position,&newArray);
  }
  else {
    *position = newArray;
    (this->m_pArray).finish = (this->m_pArray).finish + 1;
  }
  return;
}

RelArray** RelMatrixImpl::FindArray(SInt32 key) {
	RelArray **i;
	
  RelArray **ppRVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  for (ppRVar1 = (this->m_pArray).start;
      (ppRVar1 != (this->m_pArray).finish && ((*ppRVar1)->key != key)); ppRVar1 = ppRVar1 + 1) {
  }
  return ppRVar1;
}

SInt32 RelMatrixImpl::GetValue(SInt32 key, Int index) {
	vector<RelInt,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	
  RelArray **ppRVar1;
  
  ppRVar1 = FindArray__13RelMatrixImpli(this,key);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  return ((*ppRVar1)->field0_0x0).start[index].n;
}

void RelMatrixImpl::SetValue(SInt32 key, Int index, SInt32 value) {
	vector<RelInt,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	
  RelArray **ppRVar1;
  
  ppRVar1 = FindArray__13RelMatrixImpli(this,key);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  ((*ppRVar1)->field0_0x0).start[index].n = value;
  return;
}

void RelMatrixImpl::DoStream(ReconBuffer *rb, SInt32 version) {
	SInt32 mver;
	Int size;
	int cnt;
	RelArray *newArray;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	RelArray *&x;
	RelArray *&value;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	
  RelArray **position;
  undefined8 unaff_s0;
  int iVar1;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  int mver;
  RelArray *newArray;
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
  
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  mver = -1;
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  Recon32__11ReconBufferPii(rb,&mver,1);
  if (mver < 0) {
    DoPtrVectorStream__H1Z8RelArray_Rt6vector2ZPX01Zt23__malloc_alloc_template1i0P11ReconBufferi_v
              (&this->m_pArray,rb,version);
  }
  else {
    TearDown__13RelMatrixImpl(this);
    if (0 < mver) {
      iVar1 = mver;
      do {
        newArray = (RelArray *)__builtin_new(0x10);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        (newArray->field0_0x0).start = (RelInt *)0x0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        (newArray->field0_0x0).finish = (RelInt *)0x0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        (newArray->field0_0x0).end_of_storage = (RelInt *)0x0;
                    /* end of inlined section */
        newArray->key = 0;
        DoStream__8RelArrayP11ReconBufferi(newArray,rb,version);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        position = (this->m_pArray).finish;
        if (position == (this->m_pArray).end_of_storage) {
          insert_aux__t6vector2ZP8RelArrayZt23__malloc_alloc_template1i0PP8RelArrayRCP8RelArray
                    (&this->m_pArray,position,&newArray);
        }
        else {
          *position = newArray;
          (this->m_pArray).finish = (this->m_pArray).finish + 1;
        }
                    /* end of inlined section */
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

void RelArray::DoStream(ReconBuffer *rb, SInt32 version) {
	vector<RelInt,__malloc_alloc_template<0> > *this;
	
  if (0 < version) {
    Recon32__11ReconBufferPii(rb,&this->key,1);
  }
                    /* end of inlined section */
  DoContainerStream__H2Z8RelArrayZ6RelInt_RX01PX11P11ReconBufferi_v
            (this,(this->field0_0x0).start,rb,version);
  return;
}

void RelMatrixImpl::TearDown() {
	RelArray *del;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	RelArray *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	RelInt *first;
	RelInt *last;
	RelInt *pointer;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	void *pAddress;
	
  RelArray *pAddress;
  RelInt *pAddress_00;
  RelArray **ppRVar1;
  RelInt *pRVar2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  if ((this->m_pArray).start != (this->m_pArray).finish) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    ppRVar1 = (this->m_pArray).finish;
                    /* end of inlined section */
    pAddress = ppRVar1[-1];
    while( true ) {
                    /* end of inlined section */
      (this->m_pArray).finish = ppRVar1 + -1;
      if (pAddress != (RelArray *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        pAddress_00 = (pAddress->field0_0x0).start;
        for (pRVar2 = pAddress_00; pRVar2 != (pAddress->field0_0x0).finish; pRVar2 = pRVar2 + 1) {
        }
        if ((pAddress_00 != (RelInt *)0x0) &&
           ((int)(pAddress->field0_0x0).end_of_storage - (int)pAddress_00 >> 2 != 0)) {
          free(pAddress_00);
        }
        _memmanFree__FPv(pAddress);
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      ppRVar1 = (this->m_pArray).finish;
                    /* end of inlined section */
      if ((this->m_pArray).start == ppRVar1) break;
      pAddress = ppRVar1[-1];
    }
  }
  return;
}

void RelMatrixImpl::~RelMatrixImpl(int __in_chrg) {
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	RelArray **last;
	RelArray **first;
	RelArray **pointer;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	void *pAddress;
	RelMatrix *this;
	int __in_chrg;
	void *pAddress;
	
  RelArray **ppRVar1;
  RelArray **ppRVar2;
  
  (this->field0_0x0).__vtable = (RelMatrix__vtable *)_vt_13RelMatrixImpl;
  TearDown__13RelMatrixImpl(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  ppRVar2 = (this->m_pArray).start;
  ppRVar1 = (this->m_pArray).finish;
  if (ppRVar2 == ppRVar1) {
    ppRVar2 = (this->m_pArray).start;
  }
  else {
    do {
      ppRVar2 = ppRVar2 + 1;
    } while (ppRVar2 != ppRVar1);
    ppRVar2 = (this->m_pArray).start;
  }
  if ((ppRVar2 != (RelArray **)0x0) &&
     ((int)(this->m_pArray).end_of_storage - (int)ppRVar2 >> 2 != 0)) {
    free(ppRVar2);
  }
  (this->field0_0x0).__vtable = (RelMatrix__vtable *)_vt_9RelMatrix;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

Int RelMatrixImpl::CountKeys() {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  return (int)(this->m_pArray).finish - (int)(this->m_pArray).start >> 2;
}

RelKeyType RelMatrixImpl::GetNthKey(Int n) {
	unsigned int n;
	
  RelArray **ppRVar1;
  
  if (-1 < n) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    ppRVar1 = (this->m_pArray).start;
                    /* end of inlined section */
    if ((uint)n < (uint)((int)(this->m_pArray).finish - (int)ppRVar1 >> 2)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      return ppRVar1[n]->key;
    }
  }
  return 0;
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

RelInt* RelInt * uninitialized_copy<RelInt *, RelInt *>(RelInt *first, RelInt *last, RelInt *result) {
	RelInt *p;
	RelInt &value;
	void *pAddress;
	
  int *piVar1;
  RelInt *pRVar2;
  
  pRVar2 = result;
  if (first != last) {
    do {
      piVar1 = &first->n;
      first = first + 1;
      result = pRVar2 + 1;
      pRVar2->n = *piVar1;
      pRVar2 = result;
    } while (first != last);
  }
  return result;
}

RelInt* RelInt * copy_backward<RelInt *, RelInt *>(RelInt *first, RelInt *last, RelInt *result) {
  if (first != last) {
    do {
      last = last + -1;
      result = result + -1;
      result->n = last->n;
    } while (first != last);
  }
  return result;
}

void void fill<RelInt *, RelInt>(RelInt *first, RelInt *last, RelInt &value) {
  int iVar1;
  
  if (first != last) {
    iVar1 = value->n;
    while( true ) {
      first->n = iVar1;
      first = first + 1;
      if (first == last) break;
      iVar1 = value->n;
    }
  }
  return;
}

RelInt* RelInt * uninitialized_fill_n<RelInt *, unsigned int, RelInt>(RelInt *first, unsigned int n, RelInt &x) {
	RelInt *p;
	RelInt &value;
	void *pAddress;
	
  RelInt *pRVar1;
  int iVar2;
  
  iVar2 = n - 1;
  pRVar1 = first;
  if (n != 0) {
    do {
      first = pRVar1 + 1;
      iVar2 = iVar2 + -1;
      pRVar1->n = x->n;
      pRVar1 = first;
    } while (iVar2 != -1);
  }
  return first;
}

void* __malloc_alloc_template<0>::oom_malloc(unsigned int n) {
  void *pvVar1;
  
  do {
    (*(code *)0x0)();
    pvVar1 = malloc(n);
  } while (pvVar1 == (void *)0x0);
  return pvVar1;
}

void vector<RelInt, __malloc_alloc_template<0> >::insert(RelInt *position, unsigned int n, RelInt &x) {
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	unsigned int old_size;
	unsigned int len;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	unsigned int &b;
	unsigned int n;
	void *result;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	RelInt *first;
	RelInt *pointer;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	
  uint size;
  RelInt *pRVar1;
  uint *puVar2;
  RelInt *pRVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  uint old_size;
  uint local_6c [3];
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
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_6c[0] = n;
  if (n != 0) {
    pRVar1 = this->finish;
    if ((uint)((int)this->end_of_storage - (int)pRVar1 >> 2) < n) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
      old_size = (int)pRVar1 - (int)this->start >> 2;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
      puVar2 = local_6c;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
      if (n <= old_size) {
        puVar2 = &old_size;
      }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
      size = (old_size + *puVar2) * 4;
      if (old_size + *puVar2 == 0) {
        pRVar1 = (RelInt *)0x0;
        size = 0;
      }
      else {
        pRVar1 = (RelInt *)malloc(size);
        if (pRVar1 == (RelInt *)0x0) {
          pRVar1 = (RelInt *)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
        }
      }
                    /* end of inlined section */
      uninitialized_copy__H2ZP6RelIntZP6RelInt_X01X01X11_X11(this->start,position,pRVar1);
      uninitialized_fill_n__H3ZP6RelIntZUiZ6RelInt_X01X11RCX21_X01
                ((RelInt *)((int)pRVar1 + ((int)position - (int)this->start)),local_6c[0],x);
      uninitialized_copy__H2ZP6RelIntZP6RelInt_X01X01X11_X11
                (position,this->finish,
                 pRVar1 + ((int)position - (int)this->start >> 2) + local_6c[0]);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
      pRVar3 = this->start;
      if (pRVar3 == this->finish) {
        pRVar3 = this->start;
      }
      else {
        do {
          pRVar3 = pRVar3 + 1;
        } while (pRVar3 != this->finish);
                    /* end of inlined section */
        pRVar3 = this->start;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
      if ((pRVar3 != (RelInt *)0x0) && ((int)this->end_of_storage - (int)pRVar3 >> 2 != 0)) {
        free(pRVar3);
                    /* end of inlined section */
      }
      this->start = pRVar1;
      this->end_of_storage = (RelInt *)((int)&pRVar1->n + size);
      this->finish = pRVar1 + old_size + local_6c[0];
    }
    else {
      if (n < (uint)((int)pRVar1 - (int)position >> 2)) {
        uninitialized_copy__H2ZP6RelIntZP6RelInt_X01X01X11_X11(pRVar1 + -n,pRVar1,pRVar1);
        copy_backward__H2ZP6RelIntZP6RelInt_X01X01X11_X11
                  (position,this->finish + -local_6c[0],this->finish);
        fill__H2ZP6RelIntZ6RelInt_X01X01RCX11_v(position,position + local_6c[0],x);
      }
      else {
        uninitialized_copy__H2ZP6RelIntZP6RelInt_X01X01X11_X11(position,pRVar1,position + n);
        fill__H2ZP6RelIntZ6RelInt_X01X01RCX11_v(position,this->finish,x);
        uninitialized_fill_n__H3ZP6RelIntZUiZ6RelInt_X01X11RCX21_X01
                  (this->finish,local_6c[0] - ((int)this->finish - (int)position >> 2),x);
      }
      this->finish = this->finish + local_6c[0];
    }
  }
  return;
}

RelArray** RelArray ** copy_backward<RelArray **, RelArray **>(RelArray **first, RelArray **last, RelArray **result) {
  if (first != last) {
    do {
      last = last + -1;
      result = result + -1;
      *result = *last;
    } while (first != last);
  }
  return result;
}

RelArray** RelArray ** uninitialized_copy<RelArray **, RelArray **>(RelArray **first, RelArray **last, RelArray **result) {
	RelArray **p;
	RelArray *&value;
	void *pAddress;
	
  RelArray *pRVar1;
  RelArray **ppRVar2;
  
  ppRVar2 = result;
  if (first != last) {
    do {
      pRVar1 = *first;
      first = first + 1;
      result = ppRVar2 + 1;
      *ppRVar2 = pRVar1;
      ppRVar2 = result;
    } while (first != last);
  }
  return result;
}

void vector<RelArray *, __malloc_alloc_template<0> >::insert_aux(RelArray **position, RelArray *&x) {
	RelArray *x_copy;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	void *result;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	RelArray **p;
	RelArray *&value;
	void *pAddress;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	RelArray **first;
	RelArray **pointer;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	
  RelArray *pRVar1;
  uint size;
  RelArray **ppRVar2;
  int iVar3;
  RelArray **ppRVar4;
  int iVar5;
  
  ppRVar2 = this->finish;
  if (ppRVar2 == this->end_of_storage) {
    iVar5 = (int)ppRVar2 - (int)this->start >> 2;
    iVar3 = 1;
    if (iVar5 != 0) {
      iVar3 = iVar5 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    size = iVar3 << 2;
    if (iVar3 == 0) {
      ppRVar2 = (RelArray **)0x0;
      size = 0;
    }
    else {
      ppRVar2 = (RelArray **)malloc(size);
      if (ppRVar2 == (RelArray **)0x0) {
        ppRVar2 = (RelArray **)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
      }
    }
                    /* end of inlined section */
                    /* end of inlined section */
    uninitialized_copy__H2ZPP8RelArrayZPP8RelArray_X01X01X11_X11(this->start,position,ppRVar2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *(RelArray **)((int)ppRVar2 + ((int)position - (int)this->start)) = *x;
                    /* end of inlined section */
    uninitialized_copy__H2ZPP8RelArrayZPP8RelArray_X01X01X11_X11
              (position,this->finish,
               (RelArray **)((int)ppRVar2 + (int)position + (4 - (int)this->start)));
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    ppRVar4 = this->start;
    if (ppRVar4 == this->finish) {
      ppRVar4 = this->start;
    }
    else {
      do {
        ppRVar4 = ppRVar4 + 1;
      } while (ppRVar4 != this->finish);
                    /* end of inlined section */
      ppRVar4 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((ppRVar4 != (RelArray **)0x0) && ((int)this->end_of_storage - (int)ppRVar4 >> 2 != 0)) {
      free(ppRVar4);
                    /* end of inlined section */
    }
    ppRVar4 = ppRVar2 + iVar5;
    this->start = ppRVar2;
    this->end_of_storage = (RelArray **)((int)ppRVar2 + size);
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *ppRVar2 = ppRVar2[-1];
                    /* end of inlined section */
    pRVar1 = *x;
    copy_backward__H2ZPP8RelArrayZPP8RelArray_X01X01X11_X11(position,this->finish + -1,this->finish)
    ;
    *position = pRVar1;
    ppRVar4 = this->finish;
  }
  this->finish = ppRVar4 + 1;
  return;
}

void void fill<RelArray **, RelArray *>(RelArray **first, RelArray **last, RelArray *&value) {
  RelArray *pRVar1;
  
  if (first != last) {
    pRVar1 = *value;
    while( true ) {
      *first = pRVar1;
      first = first + 1;
      if (first == last) break;
      pRVar1 = *value;
    }
  }
  return;
}

RelArray** RelArray ** uninitialized_fill_n<RelArray **, unsigned int, RelArray *>(RelArray **first, unsigned int n, RelArray *&x) {
	RelArray **p;
	RelArray *&value;
	void *pAddress;
	
  RelArray **ppRVar1;
  int iVar2;
  
  iVar2 = n - 1;
  ppRVar1 = first;
  if (n != 0) {
    do {
      first = ppRVar1 + 1;
      iVar2 = iVar2 + -1;
      *ppRVar1 = *x;
      ppRVar1 = first;
    } while (iVar2 != -1);
  }
  return first;
}

void vector<RelArray *, __malloc_alloc_template<0> >::insert(RelArray **position, unsigned int n, RelArray *&x) {
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	unsigned int old_size;
	unsigned int len;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	unsigned int &b;
	unsigned int n;
	void *result;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	RelArray **first;
	RelArray **pointer;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	
  uint size;
  RelArray **ppRVar1;
  uint *puVar2;
  RelArray **ppRVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  uint old_size;
  uint local_6c [3];
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
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_6c[0] = n;
  if (n != 0) {
    ppRVar1 = this->finish;
    if ((uint)((int)this->end_of_storage - (int)ppRVar1 >> 2) < n) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
      old_size = (int)ppRVar1 - (int)this->start >> 2;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
      puVar2 = local_6c;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
      if (n <= old_size) {
        puVar2 = &old_size;
      }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
      size = (old_size + *puVar2) * 4;
      if (old_size + *puVar2 == 0) {
        ppRVar1 = (RelArray **)0x0;
        size = 0;
      }
      else {
        ppRVar1 = (RelArray **)malloc(size);
        if (ppRVar1 == (RelArray **)0x0) {
          ppRVar1 = (RelArray **)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
        }
      }
                    /* end of inlined section */
      uninitialized_copy__H2ZPP8RelArrayZPP8RelArray_X01X01X11_X11(this->start,position,ppRVar1);
      uninitialized_fill_n__H3ZPP8RelArrayZUiZP8RelArray_X01X11RCX21_X01
                ((RelArray **)((int)ppRVar1 + ((int)position - (int)this->start)),local_6c[0],x);
      uninitialized_copy__H2ZPP8RelArrayZPP8RelArray_X01X01X11_X11
                (position,this->finish,
                 ppRVar1 + ((int)position - (int)this->start >> 2) + local_6c[0]);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
      ppRVar3 = this->start;
      if (ppRVar3 == this->finish) {
        ppRVar3 = this->start;
      }
      else {
        do {
          ppRVar3 = ppRVar3 + 1;
        } while (ppRVar3 != this->finish);
                    /* end of inlined section */
        ppRVar3 = this->start;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
      if ((ppRVar3 != (RelArray **)0x0) && ((int)this->end_of_storage - (int)ppRVar3 >> 2 != 0)) {
        free(ppRVar3);
                    /* end of inlined section */
      }
      this->start = ppRVar1;
      this->end_of_storage = (RelArray **)((int)ppRVar1 + size);
      this->finish = ppRVar1 + old_size + local_6c[0];
    }
    else {
      if (n < (uint)((int)ppRVar1 - (int)position >> 2)) {
        uninitialized_copy__H2ZPP8RelArrayZPP8RelArray_X01X01X11_X11(ppRVar1 + -n,ppRVar1,ppRVar1);
        copy_backward__H2ZPP8RelArrayZPP8RelArray_X01X01X11_X11
                  (position,this->finish + -local_6c[0],this->finish);
        fill__H2ZPP8RelArrayZP8RelArray_X01X01RCX11_v(position,position + local_6c[0],x);
      }
      else {
        uninitialized_copy__H2ZPP8RelArrayZPP8RelArray_X01X01X11_X11(position,ppRVar1,position + n);
        fill__H2ZPP8RelArrayZP8RelArray_X01X01RCX11_v(position,this->finish,x);
        uninitialized_fill_n__H3ZPP8RelArrayZUiZP8RelArray_X01X11RCX21_X01
                  (this->finish,local_6c[0] - ((int)this->finish - (int)position >> 2),x);
      }
      this->finish = this->finish + local_6c[0];
    }
  }
  return;
}

void void DoPtrVectorStream<RelArray>(vector<RelArray *,__malloc_alloc_template<0> > &cont, ReconBuffer *r, SInt32 version) {
	unsigned int size;
	RelArray **i;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	RelInt *first;
	RelInt *last;
	RelInt *pointer;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	RelArray **first;
	RelArray **last;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	RelArray **result;
	RelArray **first;
	RelArray **first;
	RelArray **result;
	RelArray **result;
	RelArray **first;
	ptrdiff_t n;
	RelArray **last;
	RelArray **first;
	RelArray **pointer;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	Int ptrSet;
	RelInt *first;
	RelInt *last;
	RelInt *pointer;
	
  RelInt *pRVar1;
  uint uVar2;
  RelInt *pRVar3;
  RelArray **ppRVar4;
  RelArray *pRVar5;
  RelArray **ppRVar6;
  int iVar7;
  RelArray **ppRVar8;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  uint size;
  undefined4 local_7c;
  int ptrSet;
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
  
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  size = (int)cont->finish - (int)cont->start >> 2;
                    /* end of inlined section */
  Recon32__11ReconBufferPii(r,(int *)&size,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  uVar2 = (int)cont->finish - (int)cont->start >> 2;
                    /* end of inlined section */
  if (uVar2 < size) {
                    /* end of inlined section */
    local_7c = 0;
    insert__t6vector2ZP8RelArrayZt23__malloc_alloc_template1i0PP8RelArrayUiRCP8RelArray
              (cont,cont->finish,size - uVar2,(RelArray **)((uint)&size | 4));
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  if (size < (uint)((int)cont->finish - (int)cont->start >> 2)) {
    do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      ppRVar4 = cont->finish;
                    /* end of inlined section */
      pRVar5 = ppRVar4[-1];
      ppRVar6 = ppRVar4;
      if (pRVar5 != (RelArray *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/RelMatrix.cpp */
        pRVar1 = (pRVar5->field0_0x0).start;
        for (pRVar3 = pRVar1; pRVar3 != (pRVar5->field0_0x0).finish; pRVar3 = pRVar3 + 1) {
        }
        if ((pRVar1 != (RelInt *)0x0) &&
           ((int)(pRVar5->field0_0x0).end_of_storage - (int)pRVar1 >> 2 != 0)) {
          free(pRVar1);
        }
        _memmanFree__FPv(pRVar5);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        ppRVar6 = cont->finish;
      }
      iVar7 = (int)ppRVar6 - (int)ppRVar4 >> 2;
      ppRVar6 = ppRVar4;
      ppRVar8 = ppRVar4 + -1;
      for (; 0 < iVar7; iVar7 = iVar7 + -1) {
        pRVar5 = *ppRVar6;
        ppRVar6 = ppRVar6 + 1;
        *ppRVar8 = pRVar5;
        ppRVar8 = ppRVar8 + 1;
      }
      for (; ppRVar8 != cont->finish; ppRVar8 = ppRVar8 + 1) {
      }
      ppRVar4 = (RelArray **)((int)cont->finish - ((int)ppRVar4 - (int)(ppRVar4 + -1)));
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      cont->finish = ppRVar4;
    } while (size < (uint)((int)ppRVar4 - (int)cont->start >> 2));
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    ppRVar4 = cont->start;
  }
  else {
    ppRVar4 = cont->start;
  }
                    /* end of inlined section */
  if (ppRVar4 == cont->finish) {
    return;
  }
  pRVar5 = *ppRVar4;
  do {
    ptrSet = (int)(pRVar5 != (RelArray *)0x0);
    ReconInt__11ReconBufferPii(r,&ptrSet,1);
    if (ptrSet == 0) {
      pRVar5 = *ppRVar4;
      if (pRVar5 != (RelArray *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/RelMatrix.cpp */
        pRVar1 = (pRVar5->field0_0x0).start;
        for (pRVar3 = pRVar1; pRVar3 != (pRVar5->field0_0x0).finish; pRVar3 = pRVar3 + 1) {
        }
        if ((pRVar1 != (RelInt *)0x0) &&
           ((int)(pRVar5->field0_0x0).end_of_storage - (int)pRVar1 >> 2 != 0)) {
          free(pRVar1);
        }
        _memmanFree__FPv(pRVar5);
                    /* end of inlined section */
        *ppRVar4 = (RelArray *)0x0;
      }
LAB_0028dc8c:
      if (ptrSet != 0) goto LAB_0028dc98;
      ppRVar6 = cont->finish;
    }
    else {
      if (*ppRVar4 == (RelArray *)0x0) {
        pRVar5 = (RelArray *)__builtin_new(0x10);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        (pRVar5->field0_0x0).start = (RelInt *)0x0;
        (pRVar5->field0_0x0).finish = (RelInt *)0x0;
        (pRVar5->field0_0x0).end_of_storage = (RelInt *)0x0;
        pRVar5->key = 0;
                    /* end of inlined section */
        *ppRVar4 = pRVar5;
        goto LAB_0028dc8c;
      }
LAB_0028dc98:
      DoStream__8RelArrayP11ReconBufferi(*ppRVar4,r,version);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      ppRVar6 = cont->finish;
    }
                    /* end of inlined section */
    ppRVar4 = ppRVar4 + 1;
    if (ppRVar4 == ppRVar6) {
      return;
    }
    pRVar5 = *ppRVar4;
  } while( true );
}

void void DoContainerStream<RelArray, RelInt>(RelArray &cont, RelInt *dummy, ReconBuffer *r, SInt32 version) {
	SInt32 size;
	RelInt *i;
	int sizeDiff;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	RelInt *last;
	RelInt *first;
	RelInt *pointer;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	vector<RelInt,__malloc_alloc_template<0> > *this;
	
  int iVar1;
  RelInt *pRVar2;
  int iVar3;
  RelInt *pRVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  int size;
  undefined4 local_5c;
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
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  size = (int)(cont->field0_0x0).finish - (int)(cont->field0_0x0).start >> 2;
                    /* end of inlined section */
  Recon32__11ReconBufferPii(r,&size,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pRVar4 = (cont->field0_0x0).finish;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  iVar3 = (int)pRVar4 - (int)(cont->field0_0x0).start >> 2;
                    /* end of inlined section */
  iVar1 = iVar3 - size;
  if (iVar1 < 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    local_5c = 0;
                    /* end of inlined section */
    insert__t6vector2Z6RelIntZt23__malloc_alloc_template1i0P6RelIntUiRC6RelInt
              (&cont->field0_0x0,pRVar4,size - iVar3,(RelInt *)((uint)&size | 4));
    pRVar4 = (cont->field0_0x0).start;
  }
  else {
    if (0 < iVar1) {
                    /* end of inlined section */
      pRVar2 = pRVar4 + -iVar1;
      iVar1 = (int)pRVar4 - (int)pRVar2;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
      for (; pRVar2 != pRVar4; pRVar2 = pRVar2 + 1) {
      }
      (cont->field0_0x0).finish = (RelInt *)((int)(cont->field0_0x0).finish - iVar1);
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    pRVar4 = (cont->field0_0x0).start;
  }
                    /* end of inlined section */
  if (pRVar4 != (cont->field0_0x0).finish) {
    do {
      pRVar2 = pRVar4 + 1;
      DoStream__6RelIntP11ReconBufferi(pRVar4,r,version);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      pRVar4 = pRVar2;
    } while (pRVar2 != (cont->field0_0x0).finish);
  }
  return;
}

void RelMatrix::~RelMatrix(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (RelMatrix__vtable *)_vt_9RelMatrix;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

RelMatrixImpl* RelMatrixImpl::RelMatrixImpl() {
	RelMatrix *this;
	vector<RelArray *,__malloc_alloc_template<0> > *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  (this->m_pArray).start = (RelArray **)0x0;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (RelMatrix__vtable *)_vt_13RelMatrixImpl;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  (this->m_pArray).end_of_storage = (RelArray **)0x0;
  (this->m_pArray).finish = (RelArray **)0x0;
  return this;
}

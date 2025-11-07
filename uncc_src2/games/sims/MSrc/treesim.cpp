// STATUS: NOT STARTED

#include "treesim.h"

struct simple_alloc<StackElem *,__malloc_alloc_template<0> > {
	simple_alloc<StackElem *,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static StackElem** allocate(/* parameters unknown */);
	static StackElem** allocate(/* parameters unknown */);
	static StackElem** allocate(/* parameters unknown */);
	static StackElem** allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

bool TreeSim::sInMainSim = true;
int TreeSim::sMaxIterations = 10000;

__vtbl_ptr_type TreeSimImpl virtual table[6] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
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
		/* .__pfn = */ &TreeSimImpl::StackJustPopped,
		/* .__delta2 = */ 21144
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::HandleBreakpoint,
		/* .__delta2 = */ 19312
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type TreeSimImpl::TreeSim virtual table[18] = {
	/* [0] = */ {
		/* .__delta = */ -52,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -52,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::~TreeSimImpl,
		/* .__delta2 = */ 16112
	},
	/* [2] = */ {
		/* .__delta = */ -52,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::Initialize,
		/* .__delta2 = */ 18040
	},
	/* [3] = */ {
		/* .__delta = */ -52,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::Simulate,
		/* .__delta2 = */ 20416
	},
	/* [4] = */ {
		/* .__delta = */ -52,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::SetError,
		/* .__delta2 = */ 16560
	},
	/* [5] = */ {
		/* .__delta = */ -52,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetError,
		/* .__delta2 = */ 16568
	},
	/* [6] = */ {
		/* .__delta = */ -52,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::ClearError,
		/* .__delta2 = */ 16576
	},
	/* [7] = */ {
		/* .__delta = */ -52,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetHighLevelAction,
		/* .__delta2 = */ 20552
	},
	/* [8] = */ {
		/* .__delta = */ -52,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetCurElem,
		/* .__delta2 = */ 20816
	},
	/* [9] = */ {
		/* .__delta = */ -52,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetMainSimElem,
		/* .__delta2 = */ 20872
	},
	/* [10] = */ {
		/* .__delta = */ -52,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetNthElem,
		/* .__delta2 = */ 21064
	},
	/* [11] = */ {
		/* .__delta = */ -52,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetStackSize,
		/* .__delta2 = */ 21104
	},
	/* [12] = */ {
		/* .__delta = */ -52,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetCurrentPrimitive,
		/* .__delta2 = */ 18200
	},
	/* [13] = */ {
		/* .__delta = */ -52,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetIterations,
		/* .__delta2 = */ 23888
	},
	/* [14] = */ {
		/* .__delta = */ -52,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetLastTransition,
		/* .__delta2 = */ 20384
	},
	/* [15] = */ {
		/* .__delta = */ -52,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetLastResult,
		/* .__delta2 = */ 23896
	},
	/* [16] = */ {
		/* .__delta = */ -52,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSimImpl::GetISimInstance,
		/* .__delta2 = */ 17528
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type TreeSim virtual table[18] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &TreeSim::~TreeSim,
		/* .__delta2 = */ 16064
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
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

TreeStack* TreeStack::TreeStack(TreeSimImpl &treeSim) {
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  (this->fFrames).start = (StackElem **)0x0;
  (this->fFrames).end_of_storage = (StackElem **)0x0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  (this->fFrames).finish = (StackElem **)0x0;
                    /* end of inlined section */
  this->fTreeSim = (TreeSimImpl__15_5747 *)treeSim;
  this->fStart = (char *)0x0;
  this->fFinish = (char *)0x0;
  return this;
}

void TreeStack::~TreeStack(int __in_chrg) {
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	StackElem **last;
	StackElem **first;
	StackElem **pointer;
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	void *pAddress;
	void *pAddress;
	
  StackElem **ppSVar1;
  
  if (this->fStart != (char *)0x0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this->fStart);
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  for (ppSVar1 = (this->fFrames).start; ppSVar1 != (this->fFrames).finish; ppSVar1 = ppSVar1 + 1) {
  }
  ppSVar1 = (this->fFrames).start;
  if ((ppSVar1 != (StackElem **)0x0) &&
     ((int)(this->fFrames).end_of_storage - (int)ppSVar1 >> 2 != 0)) {
    free(ppSVar1);
  }
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void TreeSim::~TreeSim(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (TreeSim__vtable *)_vt_7TreeSim;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void TreeSimImpl::~TreeSimImpl(int __in_chrg) {
	void *pAddress;
	
  TreeSim *pTVar1;
  __vtbl_ptr_type *p_Var2;
  __vtbl_ptr_type *p_Var3;
  __vtbl_ptr_type *p_Var4;
  __vtbl_ptr_type *p_Var5;
  __vtbl_ptr_type _Var6;
  __vtbl_ptr_type _Var7;
  __vtbl_ptr_type _Var8;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  undefined local_f0 [8];
  __vtbl_ptr_type local_e8;
  __vtbl_ptr_type local_e0;
  __vtbl_ptr_type local_d8;
  __vtbl_ptr_type local_d0;
  __vtbl_ptr_type local_c8;
  short local_c0;
  short local_b8;
  short local_b0;
  short local_a8;
  short local_a0;
  short local_98;
  short local_90;
  short local_88;
  short local_80;
  short local_78;
  short local_70;
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
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  this->__vtable = (TreeSimImpl__21_3338__vtable *)_vt_11TreeSimImpl;
  this->_vb899->__vtable = (TreeSim__vtable *)_vt_11TreeSimImpl_7TreeSim;
  p_Var2 = (__vtbl_ptr_type *)local_f0;
  p_Var3 = _vt_11TreeSimImpl_7TreeSim;
  if (__in_chrg == 0) {
    do {
      p_Var4 = p_Var3;
      p_Var5 = p_Var2;
      _Var6 = p_Var4[1];
      _Var7 = p_Var4[2];
      _Var8 = p_Var4[3];
      *p_Var5 = *p_Var4;
      p_Var5[1] = _Var6;
      p_Var5[2] = _Var7;
      p_Var5[3] = _Var8;
      p_Var2 = p_Var5 + 4;
      p_Var3 = p_Var4 + 4;
    } while (p_Var4 + 4 != _vt_11TreeSimImpl_7TreeSim + 0x10);
    pTVar1 = this->_vb899;
    _Var6 = p_Var4[5];
    p_Var5[4] = (__vtbl_ptr_type)
                CONCAT62(_vt_11TreeSimImpl_7TreeSim[16]._2_6_,_vt_11TreeSimImpl_7TreeSim[16].__delta
                        );
    p_Var5[5] = _Var6;
    pTVar1->__vtable = (TreeSim__vtable *)local_f0;
    local_70 = (short)this - ((short)this->_vb899 + -0x34);
    local_e8.__delta = _vt_11TreeSimImpl_7TreeSim[1].__delta + local_70;
    local_e0.__delta = _vt_11TreeSimImpl_7TreeSim[2].__delta + local_70;
    local_d8.__delta = _vt_11TreeSimImpl_7TreeSim[3].__delta + local_70;
    local_d0.__delta = _vt_11TreeSimImpl_7TreeSim[4].__delta + local_70;
    local_c8.__delta = _vt_11TreeSimImpl_7TreeSim[5].__delta + local_70;
    local_c0 = _vt_11TreeSimImpl_7TreeSim[6].__delta + local_70;
    local_b8 = _vt_11TreeSimImpl_7TreeSim[7].__delta + local_70;
    local_b0 = _vt_11TreeSimImpl_7TreeSim[8].__delta + local_70;
    local_a8 = _vt_11TreeSimImpl_7TreeSim[9].__delta + local_70;
    local_a0 = _vt_11TreeSimImpl_7TreeSim[10].__delta + local_70;
    local_98 = _vt_11TreeSimImpl_7TreeSim[11].__delta + local_70;
    local_90 = _vt_11TreeSimImpl_7TreeSim[12].__delta + local_70;
    local_80 = _vt_11TreeSimImpl_7TreeSim[14].__delta + local_70;
    local_88 = _vt_11TreeSimImpl_7TreeSim[13].__delta + local_70;
    local_78 = _vt_11TreeSimImpl_7TreeSim[15].__delta + local_70;
    local_70 = _vt_11TreeSimImpl_7TreeSim[16].__delta + local_70;
  }
  ___9TreeStack(&this->fStack,2);
  if ((__in_chrg & 2U) != 0) {
    ___7TreeSim(this->_vb899,0);
  }
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void TreeSimImpl::SetError(SInt16 err) {
  this->fError = err;
  return;
}

SInt16 TreeSimImpl::GetError() {
  return this->fError;
}

void TreeSimImpl::ClearError() {
  this->fError = 0;
  return;
}

void TreeStack::Initialize(Int maxStackSize) {
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	unsigned int n;
	void *result;
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	StackElem **last;
	StackElem **first;
	StackElem **pointer;
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	
  uint size;
  StackElem **ppSVar1;
  StackElem **ppSVar2;
  int iVar3;
  StackElem **ppSVar4;
  vector_StackElem_____malloc_alloc_template_0___ *pvVar5;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  pvVar5 = &this->fFrames;
  ppSVar1 = (this->fFrames).start;
  if ((uint)((int)(this->fFrames).end_of_storage - (int)ppSVar1 >> 2) < (uint)maxStackSize) {
    ppSVar4 = (this->fFrames).finish;
    iVar3 = (int)ppSVar4 - (int)ppSVar1;
    if (maxStackSize == 0) {
      ppSVar1 = (StackElem **)0x0;
      size = 0;
    }
    else {
      size = maxStackSize << 2;
      ppSVar1 = (StackElem **)malloc(size);
      if (ppSVar1 == (StackElem **)0x0) {
        ppSVar1 = (StackElem **)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
      }
      ppSVar4 = (this->fFrames).finish;
    }
    uninitialized_copy__H2ZPP9StackElemZPP9StackElem_X01X01X11_X11(pvVar5->start,ppSVar4,ppSVar1);
    ppSVar4 = (this->fFrames).finish;
    ppSVar2 = pvVar5->start;
    if (ppSVar2 == ppSVar4) {
      ppSVar4 = pvVar5->start;
    }
    else {
      do {
        ppSVar2 = ppSVar2 + 1;
      } while (ppSVar2 != ppSVar4);
      ppSVar4 = pvVar5->start;
    }
    if ((ppSVar4 != (StackElem **)0x0) &&
       ((int)(this->fFrames).end_of_storage - (int)ppSVar4 >> 2 != 0)) {
      free(ppSVar4);
    }
    (this->fFrames).end_of_storage = (StackElem **)((int)ppSVar1 + size);
    (this->fFrames).finish = ppSVar1 + (iVar3 >> 2);
    pvVar5->start = ppSVar1;
  }
  return;
}

StackElem* TreeStack::MakeNewFrame(UInt32 newFrameSize) {
	UInt32 currentMemSize;
	UInt32 newMemSize;
	char *newStart;
	
  StackElem **ppSVar1;
  uint nBytes;
  int iVar2;
  char *pDest;
  StackElem *pSVar3;
  StackElem **ppSVar4;
  uint uVar5;
  
  nBytes = GetMemReserved__9TreeStack(this);
  iVar2 = GetMemUsed__9TreeStack(this);
  if (nBytes - iVar2 < newFrameSize) {
    uVar5 = nBytes << 1;
    if ((nBytes << 1 == 0) && (uVar5 = 0x200, 0x200 < newFrameSize << 1)) {
      uVar5 = newFrameSize << 1;
    }
                    /* inlined from /eor/src2/common/e_standard_heap.h */
                    /* end of inlined section */
    uVar5 = uVar5 + 7 & 0xfffffff8;
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    pDest = (char *)_memmanAlloc__FUiUi(uVar5,4);
                    /* end of inlined section */
    memcpy(pDest,this->fStart,nBytes);
    if (this->fStart == (char *)0x0) {
      ppSVar4 = (this->fFrames).finish;
    }
    else {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
      _memmanFree__FPv(this->fStart);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      ppSVar4 = (this->fFrames).finish;
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    ppSVar1 = (this->fFrames).start;
                    /* end of inlined section */
    this->fStart = pDest;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    this->fFinish = pDest + uVar5;
    AssignFrames__9TreeStacki(this,(int)ppSVar4 - (int)ppSVar1 >> 2);
  }
  pSVar3 = GetNewFrame__9TreeStack(this);
  return pSVar3;
}

void StackElem::GetTreeName(StringBuffer &str) {
  ushort treeID;
  
  if (this->fBehavior == (Behavior *)0x0) {
    copy__12StringBufferPCc(str,"No behavior");
  }
  else {
    treeID = GetTreeID__C9StackElem(this);
    GetTreeName__8BehaviorsR12StringBuffer(this->fBehavior,treeID,str);
  }
  return;
}

void StackElem::ReconStream(ReconBuffer *r, SInt32 version, BehaviorFinder *bLoader) {
	SInt16 treeID;
	
  ushort *puVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  ushort treeID;
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
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  if (0x19 < version) {
    Recon16__11ReconBufferPsi(r,&this->fObjectID,1);
  }
  treeID = GetTreeID__C9StackElem(this);
  Recon16__11ReconBufferPsi(r,&treeID,1);
  SetTreeID__9StackElems(this,treeID);
  Recon16__11ReconBufferPsi(r,&this->fNodeNum,1);
  Recon8__11ReconBufferPSci(r,(char *)&this->fNumLocalVars,1);
  Recon8__11ReconBufferPSci(r,(char *)&this->fNumParams,1);
  puVar1 = GetParams__9StackElem(this);
  Recon16__11ReconBufferPsi(r,puVar1,(uint)this->fNumParams);
  puVar1 = GetLocals__9StackElem(this);
  Recon16__11ReconBufferPsi(r,puVar1,(uint)this->fNumLocalVars);
  Recon32__11ReconBufferPii(r,&this->fPrimState,1);
  (*(code *)bLoader->__vtable[1].ReconBehavior)
            ((int)&bLoader->__vtable + (int)*(short *)(bLoader->__vtable + 1),&this->fBehavior,r,
             version);
  return;
}

TreeSim* TreeSim::TreeSim() {
  this->m_pObject = (cXObjectImpl__184_901 *)0x0;
  this->__vtable = (TreeSim__vtable *)_vt_7TreeSim;
  this->m_pPerson = (cXPersonImpl__142_963 *)0x0;
  this->m_pMTObject = (cXMTObjectImpl__138_905 *)0x0;
  this->m_pCursorObject = (cXCursorObjectImpl__152_907 *)0x0;
  this->m_pPortal = (cXPortalImpl__184_909 *)0x0;
  this->m_pEoRInstance = (IBaseSimInstance *)0x0;
  this->m_pEoRPerson = (ESim *)0x0;
  return this;
}

ISimInstance* TreeSimImpl::GetISimInstance() {
  IBaseSimInstance *pIVar1;
  ISimInstance *pIVar2;
  
  pIVar1 = this->_vb899->m_pEoRInstance;
  if (pIVar1 == (IBaseSimInstance *)0x0) {
    pIVar2 = (ISimInstance *)0x0;
  }
  else {
    pIVar2 = (ISimInstance *)
             (*(code *)pIVar1->__vtable[1].GetSimInstance)
                       ((int)&pIVar1->__vtable + (int)*(short *)&pIVar1->__vtable[1].GetCursFlags);
  }
  return pIVar2;
}

TreeSimImpl* TreeSimImpl::TreeSimImpl(int __in_chrg) {
	__vtbl_ptr_type _vt$11TreeSimImpl$7TreeSim[18];
	
  TreeSim *pTVar1;
  short sVar2;
  __vtbl_ptr_type *p_Var3;
  __vtbl_ptr_type *p_Var4;
  __vtbl_ptr_type *p_Var5;
  __vtbl_ptr_type *p_Var6;
  __vtbl_ptr_type _Var7;
  __vtbl_ptr_type _Var8;
  __vtbl_ptr_type _Var9;
  __vtbl_ptr_type _vt_11TreeSimImpl_7TreeSim [18];
  
  if (__in_chrg != 0) {
    this->_vb899 = (TreeSim *)&this->field_0x34;
    __7TreeSim((TreeSim *)&this->field_0x34);
  }
  this->_vb899->__vtable = (TreeSim__vtable *)::_vt_11TreeSimImpl_7TreeSim;
  p_Var3 = _vt_11TreeSimImpl_7TreeSim;
  p_Var4 = ::_vt_11TreeSimImpl_7TreeSim;
  if (__in_chrg == 0) {
    do {
      p_Var6 = p_Var4;
      p_Var5 = p_Var3;
      _Var7 = p_Var6[1];
      _Var8 = p_Var6[2];
      _Var9 = p_Var6[3];
      *p_Var5 = *p_Var6;
      p_Var5[1] = _Var7;
      p_Var5[2] = _Var8;
      p_Var5[3] = _Var9;
      p_Var3 = p_Var5 + 4;
      p_Var4 = p_Var6 + 4;
    } while (p_Var6 + 4 != ::_vt_11TreeSimImpl_7TreeSim + 0x10);
    pTVar1 = this->_vb899;
    _Var7 = p_Var6[5];
    p_Var5[4] = (__vtbl_ptr_type)
                CONCAT62(::_vt_11TreeSimImpl_7TreeSim[16]._2_6_,
                         ::_vt_11TreeSimImpl_7TreeSim[16].__delta);
    p_Var5[5] = _Var7;
    pTVar1->__vtable = (TreeSim__vtable *)_vt_11TreeSimImpl_7TreeSim;
    sVar2 = (short)this - ((short)this->_vb899 + -0x34);
    _vt_11TreeSimImpl_7TreeSim[1].__delta = ::_vt_11TreeSimImpl_7TreeSim[1].__delta + sVar2;
    _vt_11TreeSimImpl_7TreeSim[2].__delta = ::_vt_11TreeSimImpl_7TreeSim[2].__delta + sVar2;
    _vt_11TreeSimImpl_7TreeSim[3].__delta = ::_vt_11TreeSimImpl_7TreeSim[3].__delta + sVar2;
    _vt_11TreeSimImpl_7TreeSim[4].__delta = ::_vt_11TreeSimImpl_7TreeSim[4].__delta + sVar2;
    _vt_11TreeSimImpl_7TreeSim[5].__delta = ::_vt_11TreeSimImpl_7TreeSim[5].__delta + sVar2;
    _vt_11TreeSimImpl_7TreeSim[6].__delta = ::_vt_11TreeSimImpl_7TreeSim[6].__delta + sVar2;
    _vt_11TreeSimImpl_7TreeSim[7].__delta = ::_vt_11TreeSimImpl_7TreeSim[7].__delta + sVar2;
    _vt_11TreeSimImpl_7TreeSim[8].__delta = ::_vt_11TreeSimImpl_7TreeSim[8].__delta + sVar2;
    _vt_11TreeSimImpl_7TreeSim[9].__delta = ::_vt_11TreeSimImpl_7TreeSim[9].__delta + sVar2;
    _vt_11TreeSimImpl_7TreeSim[10].__delta = ::_vt_11TreeSimImpl_7TreeSim[10].__delta + sVar2;
    _vt_11TreeSimImpl_7TreeSim[11].__delta = ::_vt_11TreeSimImpl_7TreeSim[11].__delta + sVar2;
    _vt_11TreeSimImpl_7TreeSim[12].__delta = ::_vt_11TreeSimImpl_7TreeSim[12].__delta + sVar2;
    _vt_11TreeSimImpl_7TreeSim[14].__delta = ::_vt_11TreeSimImpl_7TreeSim[14].__delta + sVar2;
    _vt_11TreeSimImpl_7TreeSim[13].__delta = ::_vt_11TreeSimImpl_7TreeSim[13].__delta + sVar2;
    _vt_11TreeSimImpl_7TreeSim[15].__delta = ::_vt_11TreeSimImpl_7TreeSim[15].__delta + sVar2;
    _vt_11TreeSimImpl_7TreeSim[16].__delta = ::_vt_11TreeSimImpl_7TreeSim[16].__delta + sVar2;
  }
  this->fIterations = 0;
  this->__vtable = (TreeSimImpl__21_3338__vtable *)_vt_11TreeSimImpl;
  __9TreeStackR11TreeSimImpl(&this->fStack,this);
  this->fLastTrans = 0xfd;
  *(undefined4 *)&this->fLastResult = 0;
  this->fAutoStackArea = (ushort *)0x0;
  this->fError = 0;
  return this;
}

void TreeSimImpl::Initialize(Int stackSize, StdPrm *autoStackArea) {
  Initialize__9TreeStacki(&this->fStack,stackSize);
  this->fAutoStackArea = autoStackArea;
  return;
}

void TreeSimImpl::GetCurrentNode(SInt16 *treeID, SInt16 *nodeNum) {
	StackElem *elem;
	
  TreeSim__vtable *pTVar1;
  ushort uVar2;
  StackElem *this_00;
  
  pTVar1 = this->_vb899->__vtable;
  this_00 = (StackElem *)
            (**(code **)(pTVar1 + 1))
                      ((int)&this->_vb899->m_pObject + (int)*(short *)&pTVar1->GetISimInstance);
  uVar2 = GetTreeID__C9StackElem(this_00);
  *treeID = uVar2;
  *nodeNum = this_00->fNodeNum;
  return;
}

SInt16 TreeSimImpl::GetCurrentPrimitive() {
	StackElem *elem;
	Behavior *b;
	BehaviorNode *bn;
	BehaviorNode *this;
	
  TreeSim__vtable *pTVar1;
  Behavior *this_00;
  ushort uVar2;
  StackElem *this_01;
  BehaviorNode *pBVar3;
  
  pTVar1 = this->_vb899->__vtable;
  this_01 = (StackElem *)
            (**(code **)(pTVar1 + 1))
                      ((int)&this->_vb899->m_pObject + (int)*(short *)&pTVar1->GetISimInstance);
  this_00 = this_01->fBehavior;
  uVar2 = GetTreeID__C9StackElem(this_01);
  pBVar3 = GetNodeRef__8Behaviorss(this_00,uVar2,this_01->fNodeNum);
  if (pBVar3 == (BehaviorNode *)0x0) {
    uVar2 = 0xffff;
  }
  else {
                    /* end of inlined section */
    uVar2 = pBVar3->_treePrimID & 0x7fff;
  }
  return uVar2;
}

void TreeSimImpl::Reset(Behavior *startBehavior, SInt16 startTreeID) {
	short int temStack[4];
	
  ushort temStack [4];
  
  Reset__9TreeStack(&this->fStack);
  memset(temStack,0,8);
  Gosub__11TreeSimImplP8BehaviorPCss(this,startBehavior,temStack,startTreeID);
  this->fError = 0;
  return;
}

bool TreeSimImpl::Gosub(Behavior *pTransfer, StdPrm *inStack, SInt16 treeID) {
	StackElem *lastElem;
	StackElem newElem;
	BehaviorTree *tree;
	BehaviorTree &tree;
	BehaviorTree &tree;
	
  BehaviorNode *pBVar1;
  short sVar2;
  int iVar3;
  StackElem *pSVar4;
  BehaviorTree *pBVar5;
  StackElem newElem;
  
  iVar3 = GetStackSize__9TreeStack(&this->fStack);
  pSVar4 = GetNthFrame__9TreeStacki(&this->fStack,iVar3 + -1);
  if (pTransfer == (Behavior *)0x0) {
    pTransfer = pSVar4->fBehavior;
    iVar3 = 0;
    if (pTransfer == (Behavior *)0x0) goto LAB_00204940;
  }
  pBVar5 = GetTree__8Behaviors(pTransfer,treeID);
  if (pBVar5 != (BehaviorTree *)0x0) {
    newElem.fPrimState = 0;
    newElem.fBehavior = pTransfer;
    SetTreeID__9StackElems(&newElem,treeID);
    if (pSVar4 == (StackElem *)0x0) {
      newElem.fObjectID = 0;
    }
    else {
      newElem.fObjectID = pSVar4->fObjectID;
    }
    if (inStack == (ushort *)0x0) {
      inStack = this->fAutoStackArea;
    }
    if (pBVar5->type == '\x04') {
      newElem.fNodeNum = *inStack;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      pBVar1 = (pBVar5->nodes).pData;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      iVar3 = 0;
      if (pBVar1 != (BehaviorNode *)0x0) {
        iVar3 = *(int *)(pBVar1[-1].param + 2);
      }
                    /* end of inlined section */
      if (iVar3 <= (short)newElem.fNodeNum) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
        pBVar1 = (pBVar5->nodes).pData;
        if (pBVar1 == (BehaviorNode *)0x0) {
          sVar2 = 0;
        }
        else {
          sVar2 = (short)*(undefined4 *)(pBVar1[-1].param + 2);
        }
                    /* end of inlined section */
        newElem.fNodeNum = sVar2 - 1;
      }
    }
    else {
      newElem.fNodeNum = 0;
    }
    iVar3 = 0;
    if ((short)newElem.fNodeNum < 0) goto LAB_00204940;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    pBVar1 = (pBVar5->nodes).pData;
    if (pBVar1 != (BehaviorNode *)0x0) {
      iVar3 = *(int *)(pBVar1[-1].param + 2);
    }
                    /* end of inlined section */
    if ((short)newElem.fNodeNum < iVar3) {
      newElem.fNumLocalVars = pBVar5->numLocals;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Behavior.h */
      newElem.fNumParams = pBVar5->numParams;
                    /* end of inlined section */
      Push__9TreeStackPC9StackElemPCs(&this->fStack,&newElem,inStack);
      iVar3 = 1;
      goto LAB_00204940;
    }
  }
  iVar3 = 0;
LAB_00204940:
  return SUB41(iVar3,0);
}

bool TreeSimImpl::RunCheckTree(Behavior *beh, SInt16 stackObjectID, SInt16 treeID, StdPrm *locals) {
	StackElem newElem;
	StackElem *elem;
	bool wasInMainSim;
	int iterations;
	
  TreeSim__vtable *pTVar1;
  TreeSim *pTVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined uVar5;
  ushort uVar6;
  int iVar7;
  NodeAction NVar8;
  StackElem *this_00;
  TreeStack *this_01;
  StackElem newElem;
  
  if (this->fError == 0) {
    newElem.fPrimState = 1;
    newElem.fNodeNum = 0;
    this_01 = &this->fStack;
    newElem.fBehavior = (Behavior *)0x0;
    SetTreeID__9StackElems(&newElem,0xffff);
    newElem.fObjectID = 0;
    newElem.fNumLocalVars = '\0';
    newElem.fNumParams = '\0';
    Push__9TreeStackPC9StackElemPCs(this_01,&newElem,(ushort *)0x0);
    bVar4 = Gosub__11TreeSimImplP8BehaviorPCss(this,beh,locals,treeID);
    if (bVar4) {
      pTVar1 = this->_vb899->__vtable;
      iVar7 = (**(code **)(pTVar1 + 1))
                        ((int)&this->_vb899->m_pObject + (int)*(short *)&pTVar1->GetISimInstance);
      uVar3 = __7TreeSim_sInMainSim;
      *(ushort *)(iVar7 + 4) = stackObjectID;
      __7TreeSim_sInMainSim = 0;
      iVar7 = this->fIterations;
      this->fIterations = 0;
      do {
        pTVar2 = this->_vb899;
        while( true ) {
          this_00 = (StackElem *)
                    (**(code **)(pTVar2->__vtable + 1))
                              ((int)&pTVar2->m_pObject +
                               (int)*(short *)&pTVar2->__vtable->GetISimInstance);
          uVar6 = GetTreeID__C9StackElem(this_00);
          if (uVar6 == 0xffff) {
            Pop__9TreeStack(this_01);
            (*(code *)this->__vtable->GetHighLevelAction)
                      ((int)&this->_vb899 + (int)*(short *)&this->__vtable->ClearError);
            pTVar1 = this->_vb899->__vtable;
            uVar5 = (*(code *)pTVar1[1].GetCurrentPrimitive)
                              ((int)&this->_vb899->m_pObject +
                               (int)*(short *)&pTVar1[1].GetStackSize);
            this->fIterations = iVar7;
            __7TreeSim_sInMainSim = uVar3;
            return (bool)uVar5;
          }
          NVar8 = DoNodeAction__11TreeSimImplP9StackElem(this,this_00);
          if (NVar8 != kNA_Continue) break;
          pTVar2 = this->_vb899;
        }
      } while (((int)NVar8 < 0) || (2 < (int)NVar8));
      this->fError = 0x44f;
      (*(code *)this->__vtable->GetError)
                ((int)&this->_vb899 + (int)*(short *)&this->__vtable->SetError,0x44f);
    }
    else {
      Pop__9TreeStack(this_01);
      (*(code *)this->__vtable->GetHighLevelAction)
                ((int)&this->_vb899 + (int)*(short *)&this->__vtable->ClearError);
    }
  }
  return false;
}

void TreeSimImpl::RunOneTickTree(Behavior *beh, SInt16 stackObjectID, SInt16 treeID, StdPrm *locals) {
  RunCheckTree__11TreeSimImplP8BehaviorssPs(this,beh,stackObjectID,treeID,locals);
  return;
}

NodeAction TreeSimImpl::HandleBreakpoint(StackElem *elem, BehaviorNode *node) {
  NodeAction NVar1;
  
  if (elem != (StackElem *)0x0) {
    SetBreak__9StackElemi(elem,0);
  }
  NVar1 = DoNodeAction__11TreeSimImplP9StackElem(this,elem);
  return NVar1;
}

NodeAction TreeSimImpl::DoNodeAction(StackElem *elem) {
	BehaviorNode *node;
	BehaviorNode *this;
	BehaviorNode *this;
	short int *param[4];
	BehaviorNode *this;
	BehaviorNode *this;
	Int transition;
	BehaviorNode *node;
	
  byte bVar1;
  TreeSim__vtable *pTVar2;
  bool bVar3;
  ushort uVar4;
  ushort treeID;
  int iVar5;
  BehaviorNode *pBVar6;
  NodeAction NVar7;
  BehaviorTree *pBVar8;
  StackElem *this_00;
  TreeSimImpl__21_3338__vtable *pTVar9;
  undefined8 uVar10;
  ushort *inStack;
  
  if (elem->fBehavior == (Behavior *)0x0) {
    iVar5 = GetStackSize__9TreeStack(&this->fStack);
    uVar10 = 0x3e9;
    if (1 < iVar5) {
      Pop__9TreeStack(&this->fStack);
      (*(code *)this->__vtable->GetHighLevelAction)
                ((int)&this->_vb899 + (int)*(short *)&this->__vtable->ClearError);
      return kNA_Continue;
    }
    pTVar9 = this->__vtable;
    this->fError = 0x3e9;
    goto LAB_00204f6c;
  }
  iVar5 = GetBreak__C9StackElem(elem);
  if (iVar5 != 0) {
    pTVar9 = this->__vtable;
    pBVar6 = (BehaviorNode *)0x0;
LAB_00204ca8:
    NVar7 = (*(code *)pTVar9->GetMainSimElem)
                      ((int)&this->_vb899 + (int)*(short *)&pTVar9->GetCurElem,elem,pBVar6);
    return NVar7;
  }
  uVar4 = elem->fNodeNum;
  if (uVar4 < 0xfb) {
    uVar4 = GetTreeID__C9StackElem(elem);
    pBVar6 = GetNodeRef__8Behaviorss(elem->fBehavior,uVar4,elem->fNodeNum);
    if (pBVar6 == (BehaviorNode *)0x0) {
      pTVar9 = this->__vtable;
      this->fError = 0x44e;
      uVar10 = 0x44e;
    }
    else {
                    /* inlined from /eor/projects/sims/Qdata/Bhavdata.h */
                    /* end of inlined section */
      if ((short)pBVar6->_treePrimID < 0) {
        pTVar9 = this->__vtable;
        goto LAB_00204ca8;
      }
      iVar5 = this->fIterations + 1;
      this->fIterations = iVar5;
      if (iVar5 < _7TreeSim_sMaxIterations) {
                    /* inlined from /eor/projects/sims/Qdata/Bhavdata.h */
                    /* end of inlined section */
        uVar4 = pBVar6->_treePrimID & 0x7fff;
        if (uVar4 < 0x100) {
          uVar10 = (*(code *)this->__vtable->Simulate)
                             ((int)&this->_vb899 + (int)*(short *)&this->__vtable->Initialize,elem,
                              pBVar6);
          NVar7 = kNA_StopSim;
          switch(uVar10) {
          case 0:
            if (pBVar6->falseTrans == 0xfd) goto LAB_00204f60;
            elem->fNodeNum = (ushort)pBVar6->falseTrans;
            bVar1 = pBVar6->falseTrans;
            *(undefined4 *)&this->fLastResult = 0;
            break;
          case 1:
            if (pBVar6->trueTrans == 0xfd) goto LAB_00204f60;
            elem->fNodeNum = (ushort)pBVar6->trueTrans;
            bVar1 = pBVar6->trueTrans;
            *(undefined4 *)&this->fLastResult = 1;
            break;
          case 2:
            return kNA_TickFinished;
          case 3:
            goto switchD_00204dc4_caseD_3;
          default:
            goto switchD_00204dc4_caseD_6;
          case 0xffffffffffffffff:
          case 4:
            goto switchD_00204dc4_caseD_ffffffff;
          }
          NVar7 = kNA_Continue;
          this->fLastTrans = (uint)bVar1;
          elem->fPrimState = 0;
switchD_00204dc4_caseD_6:
          return NVar7;
        }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Behavior.h */
        bVar3 = false;
        if (*(int *)pBVar6->param == -1) {
          bVar3 = *(int *)(pBVar6->param + 2) == -1;
        }
                    /* end of inlined section */
        inStack = (ushort *)0x0;
        if (!bVar3) {
          inStack = pBVar6->param;
        }
        bVar3 = Gosub__11TreeSimImplP8BehaviorPCss(this,(Behavior *)0x0,inStack,uVar4);
        if (bVar3) {
          return kNA_Continue;
        }
                    /* inlined from /eor/projects/sims/Qdata/Bhavdata.h */
                    /* end of inlined section */
        pBVar8 = GetTree__8Behaviors(elem->fBehavior,pBVar6->_treePrimID & 0x7fff);
        if (pBVar8 == (BehaviorTree *)0x0) {
          pTVar9 = this->__vtable;
          this->fError = 0x44e;
          uVar10 = 0x44e;
        }
        else {
          pTVar9 = this->__vtable;
          this->fError = 1000;
          uVar10 = 1000;
        }
      }
      else {
        pTVar9 = this->__vtable;
        this->fError = 0x44d;
        uVar10 = 0x44d;
      }
    }
  }
  else {
    if (((uVar4 == 0xfd) || ((short)uVar4 < 0xfd)) || (0xff < (short)uVar4)) goto LAB_00204f60;
    iVar5 = GetStackSize__9TreeStack(&this->fStack);
    if (iVar5 < 2) {
      pTVar9 = this->__vtable;
      this->fError = 0x3e9;
      uVar10 = 0x3e9;
    }
    else {
      Pop__9TreeStack(&this->fStack);
      (*(code *)this->__vtable->GetHighLevelAction)
                ((int)&this->_vb899 + (int)*(short *)&this->__vtable->ClearError);
      pTVar2 = this->_vb899->__vtable;
      this_00 = (StackElem *)
                (**(code **)(pTVar2 + 1))
                          ((int)&this->_vb899->m_pObject + (int)*(short *)&pTVar2->GetISimInstance);
      if (uVar4 == 0xfe) {
        *(undefined4 *)&this->fLastResult = 1;
      }
      else {
        *(undefined4 *)&this->fLastResult = 0;
      }
      if (this_00->fPrimState != 0) {
        return kNA_Continue;
      }
      treeID = GetTreeID__C9StackElem(this_00);
      pBVar6 = GetNodeRef__8Behaviorss(this_00->fBehavior,treeID,this_00->fNodeNum);
      if (pBVar6 == (BehaviorNode *)0x0) {
        pTVar9 = this->__vtable;
        this->fError = 0x44e;
        uVar10 = 0x44e;
      }
      else {
        if (uVar4 == 0xfe) {
          if (pBVar6->trueTrans != 0xfd) {
            this_00->fNodeNum = (ushort)pBVar6->trueTrans;
            bVar1 = pBVar6->trueTrans;
            goto LAB_00204f50;
          }
        }
        else if (pBVar6->falseTrans != 0xfd) {
          this_00->fNodeNum = (ushort)pBVar6->falseTrans;
          bVar1 = pBVar6->falseTrans;
LAB_00204f50:
          this->fLastTrans = (uint)bVar1;
switchD_00204dc4_caseD_3:
          return kNA_Continue;
        }
LAB_00204f60:
        pTVar9 = this->__vtable;
        this->fError = 0x44c;
        uVar10 = 0x44c;
      }
    }
  }
LAB_00204f6c:
  (*(code *)pTVar9->GetError)((int)&this->_vb899 + (int)*(short *)&pTVar9->SetError,uVar10);
switchD_00204dc4_caseD_ffffffff:
  return kNA_StopSim;
}

bool TreeSimImpl::GetLastTransition() {
  if (this->fLastTrans == 0xfe) {
    return true;
  }
  return false;
}

bool TreeSimImpl::Simulate(SInt32 ticks) {
  StackElem *elem;
  NodeAction NVar1;
  TreeSim *pTVar2;
  
  this->fIterations = 0;
  pTVar2 = this->_vb899;
  while( true ) {
    while( true ) {
      elem = (StackElem *)
             (**(code **)(pTVar2->__vtable + 1))
                       ((int)&pTVar2->m_pObject + (int)*(short *)&pTVar2->__vtable->GetISimInstance)
      ;
      NVar1 = DoNodeAction__11TreeSimImplP9StackElem(this,elem);
      if (NVar1 == kNA_TickFinished) {
        return true;
      }
      if (1 < (int)NVar1) break;
      pTVar2 = this->_vb899;
    }
    if (NVar1 == kNA_StopSim) break;
    pTVar2 = this->_vb899;
  }
  return false;
}

StackElem* TreeSimImpl::GetHighLevelAction() {
	SInt16 stackSize;
	Behavior *curBeh;
	
  TreeSim__vtable *pTVar1;
  TreeSim *pTVar2;
  int iVar3;
  int iVar4;
  StackElem *pSVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  pTVar1 = this->_vb899->__vtable;
  iVar3 = (*(code *)pTVar1[1].ClearError)
                    ((int)&this->_vb899->m_pObject + (int)*(short *)&pTVar1[1].GetError);
  pTVar1 = this->_vb899->__vtable;
  iVar7 = (iVar3 + -2) * 0x10000 >> 0x10;
  iVar3 = (**(code **)(pTVar1 + 1))
                    ((int)&this->_vb899->m_pObject + (int)*(short *)&pTVar1->GetISimInstance);
  iVar3 = *(int *)(iVar3 + 0xc);
  if (-1 < iVar7) {
    iVar4 = iVar7 * 0x10000;
    iVar8 = iVar4 + 0x10000;
    do {
      iVar4 = iVar4 + -0x10000;
      pTVar1 = this->_vb899->__vtable;
      iVar7 = (*(code *)pTVar1[1].SetError)
                        ((int)&this->_vb899->m_pObject + (int)*(short *)&pTVar1[1].Simulate,iVar7);
      iVar6 = iVar8 >> 0x10;
      if (*(int *)(iVar7 + 0xc) != iVar3) {
        pTVar2 = this->_vb899;
        goto LAB_00205114;
      }
      iVar8 = iVar8 + -0x10000;
      iVar7 = iVar4 >> 0x10;
    } while (-1 < iVar7);
  }
  pTVar2 = this->_vb899;
  iVar6 = 0;
LAB_00205114:
  pSVar5 = (StackElem *)
           (*(code *)pTVar2->__vtable[1].SetError)
                     ((int)&pTVar2->m_pObject + (int)*(short *)&pTVar2->__vtable[1].Simulate,iVar6);
  return pSVar5;
}

StackElem* TreeSimImpl::GetCurElem() {
  int iVar1;
  StackElem *pSVar2;
  
  iVar1 = GetStackSize__9TreeStack(&this->fStack);
  pSVar2 = GetNthFrame__9TreeStacki(&this->fStack,iVar1 + -1);
  return pSVar2;
}

StackElem* TreeSimImpl::GetMainSimElem() {
	int level;
	int i;
	
  TreeSim__vtable *pTVar1;
  ushort uVar2;
  int iVar3;
  StackElem *pSVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar3 = GetStackSize__9TreeStack(&this->fStack);
  iVar3 = iVar3 + -1;
  do {
    if (iVar3 < iVar5) {
LAB_002051f4:
      if (iVar3 == -1) {
        pSVar4 = (StackElem *)0x0;
      }
      else {
        pTVar1 = this->_vb899->__vtable;
        pSVar4 = (StackElem *)
                 (*(code *)pTVar1[1].SetError)
                           ((int)&this->_vb899->m_pObject + (int)*(short *)&pTVar1[1].Simulate,
                            (short)iVar3);
      }
      return pSVar4;
    }
    pTVar1 = this->_vb899->__vtable;
    pSVar4 = (StackElem *)
             (*(code *)pTVar1[1].SetError)
                       ((int)&this->_vb899->m_pObject + (int)*(short *)&pTVar1[1].Simulate,
                        (short)iVar5);
    uVar2 = GetTreeID__C9StackElem(pSVar4);
    if (uVar2 == 0xffff) {
      iVar3 = iVar5 + -1;
      goto LAB_002051f4;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

StackElem* TreeSimImpl::GetNthElem(SInt16 stackPos) {
  StackElem *pSVar1;
  
  pSVar1 = GetNthFrame__9TreeStacki(&this->fStack,(int)(short)stackPos);
  return pSVar1;
}

SInt16 TreeSimImpl::GetStackSize() {
  int iVar1;
  
  iVar1 = GetStackSize__9TreeStack(&this->fStack);
  return (ushort)iVar1;
}

void TreeSimImpl::StackJustPopped() {
  return;
}

void TreeStack::ReconStream(ReconBuffer *r, SInt32 version, BehaviorFinder *bLoader) {
	SInt16 stackSize;
	ReconBuffer *this;
	int cnt;
	StackElem frame;
	SInt16 numLocals;
	short int locals[4];
	SInt16 treeID;
	ReconBuffer *this;
	SInt32 stackSize;
	SInt32 memSize;
	ReconBuffer *this;
	ReconBuffer *this;
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	StackElem **last;
	StackElem **first;
	StackElem **pointer;
	int i;
	ReconBuffer *this;
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	StackElem *&x;
	StackElem *&value;
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	
  StackElem **ppSVar1;
  char *pcVar2;
  Mode__6_4959 MVar3;
  StackElem *pSVar4;
  StackElem **ppSVar5;
  int iVar6;
  undefined8 unaff_s0;
  long lVar7;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  ushort local_e0 [8];
  StackElem frame;
  ushort locals [4];
  ushort treeID;
  ushort numLocals;
  int stackSize;
  int memSize;
  StackElem *local_94;
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
  
  local_30 = (undefined4)unaff_s6;
  uStack_2c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_40 = (undefined4)unaff_s5;
  uStack_3c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s7;
  uStack_1c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (10 < version) {
    if (version < 0x19) {
                    /* end of inlined section */
      lVar7 = 0;
      Recon16__11ReconBufferPsi(r,local_e0,1);
      if (0 < (short)local_e0[0]) {
        do {
          Recon16__11ReconBufferPsi(r,&treeID,1);
          SetTreeID__9StackElems(&frame,treeID);
          Recon16__11ReconBufferPsi(r,&frame.fNodeNum,1);
          Recon16__11ReconBufferPsi(r,&frame.fObjectID,1);
          Recon32__11ReconBufferPii(r,&frame.fPrimState,1);
          Recon16__11ReconBufferPsi(r,&numLocals,1);
          Recon16__11ReconBufferPsi(r,locals,4);
          (*(code *)bLoader->__vtable[1].ReconBehavior)
                    ((int)&bLoader->__vtable + (int)*(short *)(bLoader->__vtable + 1),
                     &frame.fBehavior,r,version);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
                    /* end of inlined section */
          frame.fNumLocalVars = '\0';
          frame.fNumParams = '\x04';
          if (r->fMode == kReading) {
            Push__9TreeStackPC9StackElemPCs(this,&frame,locals);
          }
          lVar7 = (long)((int)lVar7 + 1);
        } while (lVar7 < (short)local_e0[0]);
      }
    }
    else {
      stackSize = GetStackSize__9TreeStack(this);
      Recon32__11ReconBufferPii(r,&stackSize,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
                    /* end of inlined section */
      if (r->fMode != kReading) {
        memSize = GetMemReserved__9TreeStack(this);
      }
      Recon32__11ReconBufferPii(r,&memSize,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
                    /* end of inlined section */
      if (r->fMode == kReading) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
        pcVar2 = (char *)_memmanAlloc__FUiUi(memSize,4);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
        this->fStart = pcVar2;
        this->fFinish = pcVar2 + memSize;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
        ppSVar1 = (this->fFrames).start;
        for (ppSVar5 = ppSVar1; ppSVar5 != (this->fFrames).finish; ppSVar5 = ppSVar5 + 1) {
        }
        (this->fFrames).finish = ppSVar1;
                    /* end of inlined section */
      }
      iVar6 = 0;
      if (0 < stackSize) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Recon.h */
        MVar3 = r->fMode;
        while( true ) {
          if (MVar3 == kReading) {
            local_94 = GetNewFrame__9TreeStack(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
            ppSVar1 = (this->fFrames).finish;
            if (ppSVar1 == (this->fFrames).end_of_storage) {
              insert_aux__t6vector2ZP9StackElemZt23__malloc_alloc_template1i0PP9StackElemRCP9StackElem
                        (&this->fFrames,ppSVar1,&local_94);
            }
            else {
              *ppSVar1 = local_94;
              (this->fFrames).finish = (this->fFrames).finish + 1;
            }
          }
          pSVar4 = GetNthFrame__9TreeStacki(this,iVar6);
          iVar6 = iVar6 + 1;
          ReconStream__9StackElemP11ReconBufferiP14BehaviorFinder(pSVar4,r,version,bLoader);
          if (stackSize <= iVar6) break;
          MVar3 = r->fMode;
        }
      }
      iVar6 = GetStackSize__9TreeStack(this);
      if (iVar6 != 0) {
        iVar6 = GetStackSize__9TreeStack(this);
        pSVar4 = GetNthFrame__9TreeStacki(this,iVar6 + -1);
        NextFrame__C9StackElem(pSVar4);
      }
    }
  }
  return;
}

StdPrm* StackElem::GetParams() {
  return (ushort *)&this->_vars;
}

StdPrm* StackElem::GetLocals() {
  return (ushort *)((int)&this->_vars + (uint)this->fNumParams * 2);
}

UInt StackElem::GetSize() {
	UInt numVars;
	
  return ((uint)this->fNumLocalVars + (uint)this->fNumParams + 3 & 0x3fc) * 2 + 0x10;
}

StackElem* StackElem::NextFrame() {
  uint uVar1;
  
  uVar1 = GetSize__C9StackElem(this);
  return (StackElem *)((int)&this->fTreeID + uVar1);
}

void StackElem::Setup(StackElem *other, StdPrm *params) {
	StdPrm *myParams;
	int i;
	
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  
  uVar1 = GetTreeID__C9StackElem(other);
  this->fTreeID = uVar1;
  this->fNodeNum = other->fNodeNum;
  this->fObjectID = other->fObjectID;
  this->fNumLocalVars = other->fNumLocalVars;
  this->fNumParams = other->fNumParams;
  this->fPrimState = other->fPrimState;
  this->fBehavior = other->fBehavior;
  if (params != (ushort *)0x0) {
    puVar2 = GetParams__9StackElem(this);
    iVar3 = this->fNumParams - 1;
    if (-1 < iVar3) {
      puVar4 = params + iVar3;
      puVar2 = puVar2 + iVar3;
      do {
        uVar1 = *puVar4;
        iVar3 = iVar3 + -1;
        puVar4 = puVar4 + -1;
        *puVar2 = uVar1;
        puVar2 = puVar2 + -1;
      } while (-1 < iVar3);
    }
  }
  return;
}

StackElem* TreeStack::GetNewFrame() {
	unsigned int n;
	
  StackElem **ppSVar1;
  int iVar2;
  StackElem *pSVar3;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  ppSVar1 = (this->fFrames).start;
  iVar2 = (int)(this->fFrames).finish - (int)ppSVar1 >> 2;
                    /* end of inlined section */
  if (iVar2 == 0) {
    pSVar3 = (StackElem *)this->fStart;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    pSVar3 = NextFrame__C9StackElem(ppSVar1[iVar2 + -1]);
  }
  return pSVar3;
}

SInt32 TreeStack::GetMemUsed() {
	unsigned int n;
	
  StackElem **ppSVar1;
  int iVar2;
  StackElem *pSVar3;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  ppSVar1 = (this->fFrames).start;
  iVar2 = (int)(this->fFrames).finish - (int)ppSVar1 >> 2;
                    /* end of inlined section */
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
    pSVar3 = NextFrame__C9StackElem(ppSVar1[iVar2 + -1]);
    iVar2 = (int)pSVar3 - (int)this->fStart;
  }
  return iVar2;
}

SInt32 TreeStack::GetMemReserved() {
  return (int)this->fFinish - (int)this->fStart;
}

void TreeStack::AssignFrames(SInt32 numFrames) {
	StackElem *top;
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	StackElem **last;
	StackElem **first;
	StackElem **pointer;
	int i;
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	
  StackElem **ppSVar1;
  StackElem **ppSVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  StackElem *top;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  ppSVar1 = (this->fFrames).start;
  for (ppSVar2 = ppSVar1; ppSVar2 != (this->fFrames).finish; ppSVar2 = ppSVar2 + 1) {
  }
  (this->fFrames).finish = ppSVar1;
                    /* end of inlined section */
  top = (StackElem *)this->fStart;
  if (0 < numFrames) {
    do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      ppSVar1 = (this->fFrames).finish;
      if (ppSVar1 == (this->fFrames).end_of_storage) {
        insert_aux__t6vector2ZP9StackElemZt23__malloc_alloc_template1i0PP9StackElemRCP9StackElem
                  (&this->fFrames,ppSVar1,&top);
      }
      else {
        *ppSVar1 = top;
        (this->fFrames).finish = (this->fFrames).finish + 1;
      }
                    /* end of inlined section */
      numFrames = numFrames + -1;
      top = NextFrame__C9StackElem(top);
    } while (numFrames != 0);
  }
  return;
}

void TreeStack::Push(StackElem *newFrame, StdPrm *params) {
	StackElem *destFrame;
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	
  StackElem **position;
  uint newFrameSize;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  StackElem *destFrame;
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
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  newFrameSize = GetSize__C9StackElem(newFrame);
  destFrame = MakeNewFrame__9TreeStackUi(this,newFrameSize);
  Setup__9StackElemPC9StackElemPCs(destFrame,newFrame,params);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  position = (this->fFrames).finish;
  if (position == (this->fFrames).end_of_storage) {
    insert_aux__t6vector2ZP9StackElemZt23__malloc_alloc_template1i0PP9StackElemRCP9StackElem
              (&this->fFrames,position,&destFrame);
  }
  else {
    *position = destFrame;
    (this->fFrames).finish = (this->fFrames).finish + 1;
  }
  return;
}

void TreeStack::Pop() {
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	
  TreeSimImpl__15_5747__vtable *pTVar1;
  
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  if ((int)(this->fFrames).finish - (int)(this->fFrames).start >> 2 == 0) {
    this->fTreeSim->fError = 0x3e9;
    pTVar1 = this->fTreeSim->__vtable;
    (*(code *)pTVar1->GetError)
              ((int)&this->fTreeSim->_vb3534 + (int)*(short *)&pTVar1->SetError,0x3e9);
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  (this->fFrames).finish = (this->fFrames).finish + -1;
  return;
}

void TreeStack::Reset() {
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	StackElem **last;
	StackElem **first;
	StackElem **pointer;
	
  StackElem **ppSVar1;
  StackElem **ppSVar2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  ppSVar1 = (this->fFrames).start;
  for (ppSVar2 = ppSVar1; ppSVar2 != (this->fFrames).finish; ppSVar2 = ppSVar2 + 1) {
  }
  (this->fFrames).finish = ppSVar1;
  return;
}

StackElem* TreeStack::GetNthFrame(Int n) {
	unsigned int n;
	
  StackElem **ppSVar1;
  
                    /* end of inlined section */
  if (-1 < n) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    ppSVar1 = (this->fFrames).start;
                    /* end of inlined section */
    if ((uint)n < (uint)((int)(this->fFrames).finish - (int)ppSVar1 >> 2)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      return ppSVar1[n];
    }
  }
  return (StackElem *)0x0;
}

Int TreeStack::GetStackSize() {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
  return (int)(this->fFrames).finish - (int)(this->fFrames).start >> 2;
}

SInt16 StackElem::GetTreeID() {
  if (this->fTreeID != 0xffff) {
    return this->fTreeID & 0x7fff;
  }
  return 0xffff;
}

void StackElem::SetTreeID(SInt16 treeID) {
  if (treeID != 0xffff) {
    this->fTreeID = treeID | this->fTreeID & 0x8000;
    return;
  }
  this->fTreeID = 0xffff;
  return;
}

int StackElem::GetBreak() {
  uint uVar1;
  
  uVar1 = 0;
  if ((long)(short)this->fTreeID != 0xffffffffffffffff) {
    uVar1 = (uint)(((long)(short)this->fTreeID & 0x8000U) != 0);
  }
  return uVar1;
}

void StackElem::SetBreak(int brk) {
  if (this->fTreeID != 0xffff) {
    if (brk != 0) {
      this->fTreeID = this->fTreeID | 0x8000;
      return;
    }
    this->fTreeID = this->fTreeID & 0x7fff;
  }
  return;
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

StackElem** StackElem ** uninitialized_copy<StackElem **, StackElem **>(StackElem **first, StackElem **last, StackElem **result) {
	StackElem **p;
	StackElem *&value;
	void *pAddress;
	
  StackElem *pSVar1;
  StackElem **ppSVar2;
  
  ppSVar2 = result;
  if (first != last) {
    do {
      pSVar1 = *first;
      first = first + 1;
      result = ppSVar2 + 1;
      *ppSVar2 = pSVar1;
      ppSVar2 = result;
    } while (first != last);
  }
  return result;
}

StackElem** StackElem ** copy_backward<StackElem **, StackElem **>(StackElem **first, StackElem **last, StackElem **result) {
  if (first != last) {
    do {
      last = last + -1;
      result = result + -1;
      *result = *last;
    } while (first != last);
  }
  return result;
}

void vector<StackElem *, __malloc_alloc_template<0> >::insert_aux(StackElem **position, StackElem *&x) {
	StackElem *x_copy;
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	void *result;
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	StackElem **p;
	StackElem *&value;
	void *pAddress;
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	StackElem **first;
	StackElem **pointer;
	vector<StackElem *,__malloc_alloc_template<0> > *this;
	
  StackElem *pSVar1;
  uint size;
  StackElem **ppSVar2;
  int iVar3;
  StackElem **ppSVar4;
  int iVar5;
  
  ppSVar2 = this->finish;
  if (ppSVar2 == this->end_of_storage) {
    iVar5 = (int)ppSVar2 - (int)this->start >> 2;
    iVar3 = 1;
    if (iVar5 != 0) {
      iVar3 = iVar5 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    size = iVar3 << 2;
    if (iVar3 == 0) {
      ppSVar2 = (StackElem **)0x0;
      size = 0;
    }
    else {
      ppSVar2 = (StackElem **)malloc(size);
      if (ppSVar2 == (StackElem **)0x0) {
        ppSVar2 = (StackElem **)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
      }
    }
                    /* end of inlined section */
                    /* end of inlined section */
    uninitialized_copy__H2ZPP9StackElemZPP9StackElem_X01X01X11_X11(this->start,position,ppSVar2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *(StackElem **)((int)ppSVar2 + ((int)position - (int)this->start)) = *x;
                    /* end of inlined section */
    uninitialized_copy__H2ZPP9StackElemZPP9StackElem_X01X01X11_X11
              (position,this->finish,
               (StackElem **)((int)ppSVar2 + (int)position + (4 - (int)this->start)));
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    ppSVar4 = this->start;
    if (ppSVar4 == this->finish) {
      ppSVar4 = this->start;
    }
    else {
      do {
        ppSVar4 = ppSVar4 + 1;
      } while (ppSVar4 != this->finish);
                    /* end of inlined section */
      ppSVar4 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((ppSVar4 != (StackElem **)0x0) && ((int)this->end_of_storage - (int)ppSVar4 >> 2 != 0)) {
      free(ppSVar4);
                    /* end of inlined section */
    }
    ppSVar4 = ppSVar2 + iVar5;
    this->start = ppSVar2;
    this->end_of_storage = (StackElem **)((int)ppSVar2 + size);
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *ppSVar2 = ppSVar2[-1];
                    /* end of inlined section */
    pSVar1 = *x;
    copy_backward__H2ZPP9StackElemZPP9StackElem_X01X01X11_X11
              (position,this->finish + -1,this->finish);
    *position = pSVar1;
    ppSVar4 = this->finish;
  }
  this->finish = ppSVar4 + 1;
  return;
}

void TreeSim::setObjectImpl(cXObjectImpl *obj) {
  this->m_pObject = obj;
  return;
}

void TreeSim::setPersonImpl(cXPersonImpl *obj) {
  this->m_pPerson = obj;
  return;
}

void TreeSim::setMTObjectImpl(cXMTObjectImpl *obj) {
  this->m_pMTObject = obj;
  return;
}

void TreeSim::setCursorObjectImpl(cXCursorObjectImpl *obj) {
  this->m_pCursorObject = obj;
  return;
}

void TreeSim::setPortalImpl(cXPortalImpl *obj) {
  this->m_pPortal = obj;
  return;
}

IBaseSimInstance* TreeSim::GetBaseISimInstance() {
  return this->m_pEoRInstance;
}

void TreeSim::SetISimInstance(IBaseSimInstance *p) {
  this->m_pEoRInstance = p;
  return;
}

ESim* TreeSim::GetESimPerson() {
  return this->m_pEoRPerson;
}

void TreeSim::SetESimPerson(ESim *p) {
  this->m_pEoRPerson = p;
  return;
}

int TreeSim::GetMaxIterations() {
  return _7TreeSim_sMaxIterations;
}

void TreeSim::SetMaxIterations(int maxIterations) {
  _7TreeSim_sMaxIterations = maxIterations;
  return;
}

bool TreeSim::IsExecutingInMainSim() {
  return SUB41(__7TreeSim_sInMainSim,0);
}

Int TreeSimImpl::GetIterations() {
  return this->fIterations;
}

bool TreeSimImpl::GetLastResult() {
  return SUB41(*(undefined4 *)&this->fLastResult,0);
}

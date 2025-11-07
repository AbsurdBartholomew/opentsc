// STATUS: NOT STARTED

#include "behavior.h"

struct vector<iResFile *,__malloc_alloc_template<0> > {
protected:
	iResFile **start;
	iResFile **finish;
	iResFile **end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	iResFile** begin();
	iResFile** begin();
	iResFile** end();
	iResFile** end();
	reverse_iterator<iResFile **,iResFile *,iResFile *&,int> rbegin();
	reverse_iterator<iResFile *const *,iResFile *,iResFile *const &,int> rbegin();
	reverse_iterator<iResFile **,iResFile *,iResFile *&,int> rend();
	reverse_iterator<iResFile *const *,iResFile *,iResFile *const &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	iResFile*& operator[]();
	iResFile*& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<iResFile *,__malloc_alloc_template<0> >*, int, void);
	vector<iResFile *,__malloc_alloc_template<0> >& operator=();
	void reserve();
	iResFile*& front();
	iResFile*& front();
	iResFile*& back();
	iResFile*& back();
	void push_back();
	void swap();
	iResFile** insert();
	iResFile** insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct BehPrintParams {
private:
	char fFilename[512];
public:
	int fUseObjectPostFix;
	int fPrivateOnly;
	int fPrintNodeText;
	int fPrintEachFileOnlyOnce;
	vector<iResFile *,__malloc_alloc_template<0> > fFilesPrinted;
	
	BehPrintParams& operator=();
	BehPrintParams();
	BehPrintParams(BehPrintParams*, int, void);
	BehPrintParams();
	void SetFilename(char *filename);
	char* GetFilename();
};

struct simple_alloc<iResFile *,__malloc_alloc_template<0> > {
	simple_alloc<iResFile *,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static iResFile** allocate(/* parameters unknown */);
	static iResFile** allocate(/* parameters unknown */);
	static iResFile** allocate(/* parameters unknown */);
	static iResFile** allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

__vtbl_ptr_type Behavior virtual table[4] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &Behavior::~Behavior,
		/* .__delta2 = */ 15744
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &Behavior::GetResFile,
		/* .__delta2 = */ 16448
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type Language virtual table[9] = {
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
		/* .__pfn = */ &Language::IsSingleExit,
		/* .__delta2 = */ 20888
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &Language::GetSwizzler,
		/* .__delta2 = */ 20896
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

void Language::~Language(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (Language__vtable *)_vt_8Language;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void Behavior::~Behavior(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (Behavior__vtable *)_vt_8Behavior;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void Behavior::SetSemiGlobalFile(iResFile *newFile) {
  this->fMiddleFile = newFile;
  return;
}

SInt16 Behavior::CountNodes(SInt16 treeID) {
	BehaviorTree *tree;
	
  BehaviorNode *pBVar1;
  ushort uVar2;
  BehaviorTree *pBVar3;
  
  pBVar3 = GetTree__8Behaviors(this,treeID);
  if (pBVar3 == (BehaviorTree *)0x0) {
    uVar2 = 0;
  }
  else {
    pBVar1 = (pBVar3->nodes).pData;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    if (pBVar1 == (BehaviorNode *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (ushort)*(undefined4 *)(pBVar1[-1].param + 2);
    }
  }
  return uVar2;
}

iResFile* Behavior::GetPrivFile() {
	ObjSelector *this;
	ObjSelector *this;
	
  iResFile__6_5027 *piVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
  piVar1 = (this->fOwner->field0_0x0).fFile;
  if (piVar1 == (iResFile__6_5027 *)0x0) {
    piVar1 = loadFile__11ObjSelector(this->fOwner);
                    /* end of inlined section */
  }
  return piVar1;
}

iResFile* Behavior::GetGlobFile() {
  return this->fGlobFile;
}

iResFile* Behavior::GetMiddleFile() {
  return this->fMiddleFile;
}

BehaviorNode* Behavior::GetNodeRef(SInt16 treeID, SInt16 nodeNum) {
	BehaviorTree *tree;
	unsigned int n;
	
  BehaviorTree *pBVar1;
  int iVar2;
  BehaviorNode *pBVar3;
  int iVar4;
  
  iVar4 = (int)(short)nodeNum;
  pBVar1 = GetTree__8Behaviors(this,treeID);
  if (pBVar1 == (BehaviorTree *)0x0) {
    pBVar3 = (BehaviorNode *)0x0;
  }
  else if (iVar4 < 0) {
    pBVar3 = (BehaviorNode *)0x0;
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    pBVar3 = (pBVar1->nodes).pData;
    iVar2 = 0;
    if (pBVar3 != (BehaviorNode *)0x0) {
      iVar2 = *(int *)(pBVar3[-1].param + 2);
    }
                    /* end of inlined section */
    if (iVar4 < iVar2) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      pBVar3 = pBVar3 + iVar4;
    }
    else {
      pBVar3 = (BehaviorNode *)0x0;
    }
  }
                    /* end of inlined section */
  return pBVar3;
}

bool Behavior::IsNodeReachable(SInt16 treeID, int nodeNum) {
	BehaviorTree *tree;
	int i;
	unsigned int n;
	unsigned int n;
	
  BehaviorTree *pBVar1;
  BehaviorNode *pBVar2;
  int iVar3;
  int iVar4;
  
  pBVar1 = GetTree__8Behaviors(this,treeID);
  if ((pBVar1 != (BehaviorTree *)0x0) && (-1 < nodeNum)) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    pBVar2 = (pBVar1->nodes).pData;
    iVar4 = 0;
    if (pBVar2 != (BehaviorNode *)0x0) {
      iVar4 = *(int *)(pBVar2[-1].param + 2);
    }
                    /* end of inlined section */
    if (nodeNum < iVar4) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      iVar4 = 0;
      if (pBVar2 != (BehaviorNode *)0x0) {
        iVar4 = *(int *)(pBVar2[-1].param + 2);
      }
                    /* end of inlined section */
      iVar3 = 0;
      if (0 < iVar4) {
        do {
          if (iVar3 != nodeNum) {
                    /* end of inlined section */
            if ((uint)pBVar2->trueTrans == nodeNum) {
              return true;
            }
                    /* end of inlined section */
            if ((uint)pBVar2->falseTrans == nodeNum) {
              return true;
            }
          }
          iVar3 = iVar3 + 1;
          pBVar2 = pBVar2 + 1;
        } while (iVar3 < iVar4);
      }
    }
  }
  return false;
}

void Behavior::GetNodeText(SInt16 treeID, BehaviorNode *node, StringBuffer &str) {
  return;
}

void Behavior::GetNodeText(SInt16 treeID, SInt16 nodeNum, StringBuffer &str) {
	BehaviorNode node;
	Behavior *this;
	SInt16 treeID;
	BehaviorNode *nodeRef;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  uint *puVar5;
  BehaviorNode *pBVar6;
  ulong uVar7;
  uint uVar8;
  BehaviorNode node;
  
  uVar7 = (ulong)(int)this;
  uVar8 = (uint)(short)treeID;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Behavior.h */
  pBVar6 = GetNodeRef__8Behaviorss(this,treeID,nodeNum);
  if (pBVar6 == (BehaviorNode *)0x0) {
    append__12StringBufferPCci(str,"non-existent node",-1);
  }
  else {
    puVar1 = (undefined *)((int)pBVar6->param + 3);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)pBVar6 & 7;
    node._0_8_ = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                 uVar7 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                 *(ulong *)((int)pBVar6 - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)pBVar6->param + 7);
    uVar2 = (uint)puVar1 & 3;
    uVar3 = (uint)(pBVar6->param + 2) & 3;
    node.param._4_4_ =
         (*(int *)(puVar1 + -uVar2) << (3 - uVar2) * 8 | uVar8 & 0xffffffffU >> (uVar2 + 1) * 8) &
         -1 << (4 - uVar3) * 8 | *(uint *)((int)(pBVar6->param + 2) - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)node.param + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar8);
    *puVar4 = *puVar4 & -1L << (uVar8 + 1) * 8 | node._0_8_ >> (7 - uVar8) * 8;
    puVar1 = (undefined *)((int)node.param + 7);
    uVar8 = (uint)puVar1 & 3;
    puVar5 = (uint *)(puVar1 + -uVar8);
    *puVar5 = *puVar5 & -1 << (uVar8 + 1) * 8 | node.param._4_4_ >> (3 - uVar8) * 8;
    GetNodeText__8BehaviorsP12BehaviorNodeR12StringBuffer(this,treeID,&node,str);
  }
  return;
}

SInt16 Behavior::CountPrimitives() {
  Language__vtable *pLVar1;
  ushort uVar2;
  
  pLVar1 = this->fLanguage->__vtable;
  uVar2 = (*(code *)pLVar1[1].GetNodeText)
                    ((int)&this->fLanguage->__vtable + (int)*(short *)&pLVar1[1].GetTreeTypeName);
  return uVar2;
}

iResFile* Behavior::GetResFile(SInt16 treeID) {
	ObjSelector *this;
	ObjSelector *this;
	
  iResFile__6_5027 *piVar1;
  int iVar2;
  
  iVar2 = (int)(short)treeID;
  if (iVar2 - 0x100U < 0x2229) {
    if (iVar2 < 0x1000) {
      return this->fGlobFile;
    }
    if (iVar2 < 0x2000) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
      piVar1 = (this->fOwner->field0_0x0).fFile;
      if (piVar1 != (iResFile__6_5027 *)0x0) {
        return piVar1;
      }
      piVar1 = loadFile__11ObjSelector(this->fOwner);
      return piVar1;
                    /* end of inlined section */
    }
    if (iVar2 < 0x2329) {
      return this->fMiddleFile;
    }
  }
  return (iResFile__6_5027 *)0x0;
}

SInt16 Behavior::GetBaseID(SInt16 treeclass) {
	SInt16 baseID;
	
  ushort uVar1;
  
  if (treeclass == 1) {
    uVar1 = 0x100;
  }
  else {
    uVar1 = 0;
    if (1 < (short)treeclass) {
      if (treeclass == 2) {
        uVar1 = 0x1000;
      }
      else {
        uVar1 = 0;
        if (treeclass == 3) {
          uVar1 = 0x2000;
        }
      }
    }
  }
  return uVar1;
}

SInt16 Behavior::GetMaxID(SInt16 treeclass) {
	SInt16 maxID;
	
  ushort uVar1;
  
  if (treeclass == 1) {
    uVar1 = 0xfff;
  }
  else {
    uVar1 = 0;
    if (1 < (short)treeclass) {
      if (treeclass == 2) {
        uVar1 = 0x1fff;
      }
      else {
        uVar1 = 0;
        if (treeclass == 3) {
          uVar1 = 9000;
        }
      }
    }
  }
  return uVar1;
}

SInt16 Behavior::GetTreeClass(SInt16 treeID) {
  uint uVar1;
  
  uVar1 = (uint)(short)treeID;
  if ((uVar1 & 0xffff) < 0x100) {
    return 0;
  }
  if (uVar1 - 0x100 < 0xf00) {
    return 1;
  }
  if (0x328 < uVar1 - 0x2000) {
    return (ushort)(uVar1 - 0x1000 < 0x1000) << 1;
  }
  return 3;
}

void Behavior::GetClassName(SInt16 cl, StringBuffer &name) {
	char *str;
	
  char *str;
  
  if (cl == 1) {
    str = "Global";
  }
  else if ((short)cl < 2) {
    if (cl == 0) {
      str = "Primitives";
    }
    else {
      str = "unknown";
    }
  }
  else if (cl == 2) {
    str = "Private";
  }
  else if (cl == 3) {
    str = "Semi-global";
  }
  else {
    str = "unknown";
  }
  copy__12StringBufferPCc(name,str);
  return;
}

bool Behavior::IsSingleExit(SInt16 treeID, SInt16 nodeNum) {
	BehaviorNode *node;
	BehaviorNode *this;
	BehaviorTree *tree;
	BehaviorNode *this;
	int nodeCnt;
	unsigned int n;
	unsigned int n;
	
  Language__vtable *pLVar1;
  undefined uVar2;
  ushort treeID_00;
  BehaviorNode *pBVar3;
  BehaviorTree *pBVar4;
  int iVar5;
  int iVar6;
  
  pBVar3 = GetNodeRef__8Behaviorss(this,treeID,nodeNum);
  uVar2 = 1;
  if (pBVar3 != (BehaviorNode *)0x0) {
                    /* inlined from /eor/projects/sims/Qdata/Bhavdata.h */
                    /* end of inlined section */
    treeID_00 = pBVar3->_treePrimID & 0x7fff;
    if (treeID_00 < 0x100) {
      pLVar1 = this->fLanguage->__vtable;
      uVar2 = (*(code *)pLVar1[1].CountPrimitives)
                        ((int)&this->fLanguage->__vtable + (int)*(short *)&pLVar1[1].GetPrimName);
    }
    else {
                    /* end of inlined section */
      pBVar4 = GetTree__8Behaviors(this,treeID_00);
      if (pBVar4 == (BehaviorTree *)0x0) {
        uVar2 = 1;
      }
      else {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
        pBVar3 = (pBVar4->nodes).pData;
        iVar6 = 0;
        if (pBVar3 != (BehaviorNode *)0x0) {
          iVar6 = *(int *)(pBVar3[-1].param + 2);
        }
                    /* end of inlined section */
        iVar5 = 0;
        if (0 < iVar6) {
          do {
                    /* end of inlined section */
            if (pBVar3->trueTrans == 0xff) {
              return false;
            }
                    /* end of inlined section */
            if (pBVar3->falseTrans == 0xff) {
              return false;
            }
            iVar5 = iVar5 + 1;
            pBVar3 = pBVar3 + 1;
          } while (iVar5 < iVar6);
        }
        uVar2 = 1;
      }
    }
  }
  return (bool)uVar2;
}

void BehPrintParams::SetFilename(char *filename) {
  size_t sVar1;
  
  sVar1 = strlen(filename);
  if (sVar1 < 0x201) {
    strcpy(this->fFilename,filename);
  }
  return;
}

static void __tcf_0() {
	SInt16 *last;
	SInt16 *first;
	SInt16 *pointer;
	
  void *pvVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  pvVar1 = open_1041;
  if (open_1041 != DAT_004d3e74) {
    do {
      pvVar1 = (void *)((int)pvVar1 + 2);
    } while (pvVar1 != DAT_004d3e74);
  }
  if ((open_1041 != (void *)0x0) && (DAT_004d3e78 - (int)open_1041 >> 1 != 0)) {
    free(open_1041);
  }
  return;
}

static void __tcf_1() {
	SInt16 *last;
	SInt16 *first;
	SInt16 *pointer;
	
  void *pvVar1;
  
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  pvVar1 = closed_1064;
  if (closed_1064 != DAT_004d3e84) {
    do {
      pvVar1 = (void *)((int)pvVar1 + 2);
    } while (pvVar1 != DAT_004d3e84);
  }
  if ((closed_1064 != (void *)0x0) && (DAT_004d3e88 - (int)closed_1064 >> 1 != 0)) {
    free(closed_1064);
  }
  return;
}

SInt32 Behavior::GetCumulativeTreeVersion(SInt16 inTreeID) {
	static vector<short int,__malloc_alloc_template<0> > open;
	static vector<short int,__malloc_alloc_template<0> > closed;
	BehaviorTree *tree;
	SInt32 version;
	SInt16 *i;
	SInt16 *first;
	SInt16 *last;
	SInt16 *pointer;
	SInt16 *first;
	SInt16 *last;
	SInt16 *pointer;
	SInt16 treeID;
	unsigned int n;
	int n;
	SInt16 &x;
	short int &value;
	
  ushort *puVar1;
  BehaviorNode *pBVar2;
  BehaviorTree *pBVar3;
  ushort uVar4;
  int iVar5;
  undefined8 unaff_s0;
  int iVar6;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  ushort local_b0;
  ushort treeID;
  ushort local_ac [6];
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
  
                    /* end of inlined section */
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_b0 = inTreeID;
  if (__tmp_0_1042 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    DAT_004d3e78 = (ushort *)0x0;
                    /* end of inlined section */
    __tmp_0_1042 = 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    open_1041 = (ushort *)0x0;
                    /* end of inlined section */
    DAT_004d3e74 = (ushort *)0x0;
    atexit(__tcf_0);
  }
  puVar1 = open_1041;
  if (__tmp_1_1065 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    DAT_004d3e88 = (ushort *)0x0;
                    /* end of inlined section */
    __tmp_1_1065 = 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    closed_1064 = (ushort *)0x0;
                    /* end of inlined section */
    DAT_004d3e84 = (ushort *)0x0;
    atexit(__tcf_1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    puVar1 = open_1041;
  }
  for (; puVar1 != DAT_004d3e74; puVar1 = puVar1 + 1) {
  }
  DAT_004d3e74 = open_1041;
  for (puVar1 = closed_1064; puVar1 != DAT_004d3e84; puVar1 = puVar1 + 1) {
  }
  DAT_004d3e84 = closed_1064;
  if (open_1041 == DAT_004d3e78) {
    insert_aux__t6vector2ZsZt23__malloc_alloc_template1i0PsRCs
              ((vector_short_int___malloc_alloc_template_0___ *)&open_1041,open_1041,&local_b0);
  }
  else {
    *open_1041 = local_b0;
    DAT_004d3e74 = DAT_004d3e74 + 1;
  }
                    /* end of inlined section */
  if ((int)DAT_004d3e74 - (int)open_1041 >> 1 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
    do {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
      treeID = open_1041[((int)DAT_004d3e74 - (int)open_1041 >> 1) + -1];
      DAT_004d3e74 = DAT_004d3e74 + -1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
      puVar1 = find__H2ZPsZs_X01X01RCX11_X01(closed_1064,DAT_004d3e84,&treeID);
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
      if (puVar1 == DAT_004d3e84) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
        if (puVar1 == DAT_004d3e88) {
          insert_aux__t6vector2ZsZt23__malloc_alloc_template1i0PsRCs
                    ((vector_short_int___malloc_alloc_template_0___ *)&closed_1064,puVar1,&treeID);
        }
        else {
          *puVar1 = treeID;
          DAT_004d3e84 = DAT_004d3e84 + 1;
        }
                    /* end of inlined section */
        pBVar3 = GetTree__8Behaviors(this,treeID);
        if (pBVar3 != (BehaviorTree *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
          pBVar2 = (pBVar3->nodes).pData;
          iVar6 = 0;
          if (pBVar2 != (BehaviorNode *)0x0) {
            iVar6 = *(int *)(pBVar2[-1].param + 2);
          }
                    /* end of inlined section */
          iVar5 = 0;
          if (0 < iVar6) {
            do {
              pBVar2 = GetNodeRef__8Behaviorss(this,treeID,(ushort)iVar5);
                    /* inlined from /eor/projects/sims/Qdata/Bhavdata.h */
              uVar4 = pBVar2->_treePrimID & 0x7fff;
                    /* end of inlined section */
              if (0xff < uVar4) {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                local_ac[0] = uVar4;
                if (DAT_004d3e74 == DAT_004d3e78) {
                  insert_aux__t6vector2ZsZt23__malloc_alloc_template1i0PsRCs
                            ((vector_short_int___malloc_alloc_template_0___ *)&open_1041,
                             DAT_004d3e74,local_ac);
                }
                else {
                  *DAT_004d3e74 = uVar4;
                  DAT_004d3e74 = DAT_004d3e74 + 1;
                }
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < iVar6);
          }
        }
      }
                    /* end of inlined section */
    } while ((int)DAT_004d3e74 - (int)open_1041 >> 1 != 0);
  }
  iVar6 = 0;
  pBVar3 = GetTree__8Behaviors(this,local_b0);
  if (pBVar3 != (BehaviorTree *)0x0) {
    iVar6 = (uint)(ushort)pBVar3->treeVersion << 0x10;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  }
                    /* end of inlined section */
  if (closed_1064 != DAT_004d3e84) {
    uVar4 = *closed_1064;
    puVar1 = closed_1064;
    while( true ) {
      pBVar3 = GetTree__8Behaviors(this,uVar4);
      if (pBVar3 != (BehaviorTree *)0x0) {
        iVar6 = iVar6 + (uint)(ushort)pBVar3->treeVersion;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
      }
                    /* end of inlined section */
      puVar1 = puVar1 + 1;
      if (puVar1 == DAT_004d3e84) break;
      uVar4 = *puVar1;
    }
  }
  return iVar6;
}

Behavior* Behavior::Behavior(Language *lang, iResFile *globFile, ObjSelector *pOwner, iResFile *semiGlobFile) {
  undefined1 *puVar1;
  
  this->fGlobFile = globFile;
  this->fOwner = pOwner;
  this->fMiddleFile = semiGlobFile;
  this->fLanguage = lang;
  this->__vtable = (Behavior__vtable *)_vt_8Behavior;
  puVar1 = (undefined1 *)
           (*(code *)lang->__vtable[1].GetSwizzler)
                     ((int)&lang->__vtable + (int)*(short *)&lang->__vtable[1].IsSingleExit);
  this->fSwizzler = puVar1;
  return this;
}

SInt16 Behavior::GetTreeIDByName(char *treeName) {
	int classes[3];
	int i;
	iResFile *file;
	ResFile *pResData;
	BehaviorTree *end;
	BehaviorTree *i;
	iResFile *this;
	VECTOR<BehaviorTree> *this;
	VECTOR<BehaviorTree> *this;
	
  short sVar1;
  Behavior__vtable *pBVar2;
  uint uVar3;
  ulong *puVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  char *__s1;
  char **ppcVar9;
  char **ppcVar10;
  int *piVar11;
  int iVar12;
  int classes [3];
  
  piVar11 = classes;
  iVar12 = 0;
  uVar3 = (int)classes + 7U & 7;
  puVar4 = (ulong *)(((int)classes + 7U) - uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | DAT_003bec40 >> (7 - uVar3) * 8;
  classes._0_8_ = DAT_003bec40;
  classes[2] = DAT_003bec48;
  do {
    pBVar2 = this->__vtable;
    sVar1 = *(short *)&pBVar2[1].Behavior;
    uVar5 = GetBaseID__8Behaviors(*(ushort *)piVar11);
    lVar8 = (*(code *)pBVar2[1].GetResFile)((int)&this->fGlobFile + (int)sVar1,uVar5);
    if (lVar8 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ResFile.h */
      iVar7 = *(int *)((int)lVar8 + 8);
      if (*(int *)(iVar7 + 0xc) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(iVar7 + 0xc) + -4);
      }
      ppcVar9 = *(char ***)(iVar7 + 0xc);
      ppcVar10 = (char **)(*(int *)(iVar7 + 0xc) + iVar6 * 0x10);
                    /* end of inlined section */
      if (ppcVar9 != ppcVar10) {
        __s1 = *ppcVar9;
        while( true ) {
          iVar7 = strcmp(__s1,treeName);
          if (iVar7 == 0) {
            return *(ushort *)(ppcVar9 + 1);
          }
          ppcVar9 = ppcVar9 + 4;
          if (ppcVar9 == ppcVar10) break;
          __s1 = *ppcVar9;
        }
      }
    }
    iVar12 = iVar12 + 1;
    piVar11 = (int *)((int)piVar11 + 4);
  } while (iVar12 < 3);
  return 0;
}

SInt16 Behavior::GetTreeIDByNameFast(char *treeName) {
	int classes[3];
	int i;
	iResFile *file;
	ResFile *pResData;
	BehaviorTree *end;
	BehaviorTree *i;
	iResFile *this;
	VECTOR<BehaviorTree> *this;
	VECTOR<BehaviorTree> *this;
	
  short sVar1;
  Behavior__vtable *pBVar2;
  int iVar3;
  uint uVar4;
  ulong *puVar5;
  ushort uVar6;
  int iVar7;
  char *pcVar8;
  long lVar9;
  char **ppcVar10;
  char **ppcVar11;
  int *piVar12;
  int iVar13;
  int classes [3];
  
  piVar12 = classes;
  iVar13 = 0;
  uVar4 = (int)classes + 7U & 7;
  puVar5 = (ulong *)(((int)classes + 7U) - uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | DAT_003bec40 >> (7 - uVar4) * 8;
  classes._0_8_ = DAT_003bec40;
  classes[2] = DAT_003bec48;
  do {
    pBVar2 = this->__vtable;
    sVar1 = *(short *)&pBVar2[1].Behavior;
    uVar6 = GetBaseID__8Behaviors(*(ushort *)piVar12);
    lVar9 = (*(code *)pBVar2[1].GetResFile)((int)&this->fGlobFile + (int)sVar1,uVar6);
    if (lVar9 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ResFile.h */
      iVar3 = *(int *)((int)lVar9 + 8);
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(*(int *)(iVar3 + 0xc) + -4);
      }
      ppcVar11 = *(char ***)(iVar3 + 0xc);
      ppcVar10 = (char **)(*(int *)(iVar3 + 0xc) + iVar7 * 0x10);
                    /* end of inlined section */
      if (ppcVar11 != ppcVar10) {
        pcVar8 = *ppcVar11;
        while( true ) {
          if (pcVar8 == treeName) {
            return *(ushort *)(ppcVar11 + 1);
          }
          ppcVar11 = ppcVar11 + 4;
          if (ppcVar11 == ppcVar10) break;
          pcVar8 = *ppcVar11;
        }
      }
    }
    iVar13 = iVar13 + 1;
    piVar12 = (int *)((int)piVar12 + 4);
  } while (iVar13 < 3);
  return 0;
}

BehaviorTree* Behavior::GetTree(SInt16 treeID) {
	iResFile *file;
	iResFile *this;
	VECTOR<BehaviorTree> *this;
	
  int iVar1;
  BehaviorTree *pBVar2;
  long lVar3;
  BehaviorNode *pBVar4;
  
  lVar3 = (*(code *)this->__vtable[1].GetResFile)
                    ((int)&this->fGlobFile + (int)*(short *)&this->__vtable[1].Behavior,
                     (int)(short)treeID);
  if (lVar3 == 0) {
    pBVar2 = (BehaviorTree *)0x0;
  }
  else {
    iVar1 = *(int *)((int)lVar3 + 8);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ResFile.h */
    pBVar2 = *(BehaviorTree **)(iVar1 + 0xc);
    pBVar4 = (BehaviorNode *)0x0;
    if (pBVar2 != (BehaviorTree *)0x0) {
      pBVar4 = pBVar2[-1].nodes.pData;
    }
                    /* end of inlined section */
    pBVar2 = FindRes__H1ZC12BehaviorTree_PX01T0i_PX01
                       (pBVar2,(BehaviorTree *)(*(int *)(iVar1 + 0xc) + (int)pBVar4 * 0x10),
                        (int)(short)treeID);
  }
  return pBVar2;
}

void Behavior::GetTreeName(SInt16 treeID, StringBuffer &name) {
	iResFile *pFile;
	BehaviorTree *pTree;
	iResFile *this;
	VECTOR<BehaviorTree> *this;
	
  Language__vtable *pLVar1;
  BehaviorTree *pBVar2;
  long lVar3;
  BehaviorNode *pBVar4;
  int iVar5;
  int resID;
  
  resID = (int)(short)treeID;
  if (resID < 0x100) {
    pLVar1 = this->fLanguage->__vtable;
    (*(code *)pLVar1[1].Language)
              ((int)&this->fLanguage->__vtable + (int)*(short *)(pLVar1 + 1),resID);
  }
  else if (resID == 0x7fff) {
    append__12StringBufferPCci(name,"***error***",-1);
  }
  else {
    lVar3 = (*(code *)this->__vtable[1].GetResFile)
                      ((int)&this->fGlobFile + (int)*(short *)&this->__vtable[1].Behavior,resID);
    erase__12StringBuffer(name);
    if (lVar3 != 0) {
      iVar5 = (int)lVar3;
      lVar3 = (**(code **)(*(int *)(iVar5 + 0xc) + 100))
                        (iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 0x60));
      if (lVar3 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ResFile.h */
        pBVar2 = *(BehaviorTree **)(*(int *)(iVar5 + 8) + 0xc);
        pBVar4 = (BehaviorNode *)0x0;
        if (pBVar2 != (BehaviorTree *)0x0) {
          pBVar4 = pBVar2[-1].nodes.pData;
        }
                    /* end of inlined section */
        pBVar2 = FindRes__H1ZC12BehaviorTree_PX01T0i_PX01
                           (pBVar2,(BehaviorTree *)
                                   (*(int *)(*(int *)(iVar5 + 8) + 0xc) + (int)pBVar4 * 0x10),resID)
        ;
        if (pBVar2 != (BehaviorTree *)0x0) {
          copy__12StringBufferPCc(name,pBVar2->name);
        }
      }
    }
  }
  return;
}

void Behavior::SwizzleTreeParams(ResFile &row) {
	BehaviorTree *i;
	BehaviorTree *end;
	VECTOR<BehaviorTree> *this;
	VECTOR<BehaviorTree> *this;
	BehaviorNode *j;
	BehaviorNode *last;
	VECTOR<BehaviorNode> *this;
	VECTOR<BehaviorNode> *this;
	
  ushort uVar1;
  BehaviorNode *pBVar2;
  ushort *puVar3;
  BehaviorTree *pBVar4;
  int iVar5;
  BehaviorNode *pBVar6;
  BehaviorTree *pBVar7;
  
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
  pBVar4 = (row->BHAV).pData;
  if (pBVar4 == (BehaviorTree *)0x0) {
    pBVar2 = (BehaviorNode *)0x0;
  }
  else {
    pBVar2 = pBVar4[-1].nodes.pData;
  }
  pBVar4 = (row->BHAV).pData;
  pBVar7 = (row->BHAV).pData + (int)pBVar2;
                    /* end of inlined section */
  if (pBVar7 <= pBVar4) {
    return;
  }
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
  pBVar2 = (pBVar4->nodes).pData;
  while( true ) {
    iVar5 = 0;
    if (pBVar2 != (BehaviorNode *)0x0) {
      iVar5 = *(int *)(pBVar2[-1].param + 2);
    }
    pBVar6 = (pBVar4->nodes).pData + iVar5;
                    /* end of inlined section */
    if (pBVar2 != pBVar6) break;
LAB_00274d24:
    if (pBVar7 <= pBVar4 + 1) {
      return;
    }
    pBVar2 = pBVar4[1].nodes.pData;
    pBVar4 = pBVar4 + 1;
  }
  uVar1 = pBVar2->_treePrimID;
  do {
    switch((int)((uVar1 - 2) * 0x10000) >> 0x10) {
    case 0:
    case 0x2a:
      puVar3 = pBVar2->param + 2;
      goto LAB_00274c94;
    case 0xb:
    case 0x16:
    case 0x18:
      Swizzle2__FPv(pBVar2->param);
      Swizzle2__FPv(pBVar2->param + 1);
      Swizzle2__FPv(pBVar2->param + 2);
      Swizzle2__FPv(pBVar2->param + 3);
      break;
    case 0x19:
      puVar3 = pBVar2->param + 1;
LAB_00274c94:
      Swizzle2__FPv(puVar3);
      Swizzle2__FPv(pBVar2->param + 3);
      break;
    case 0x28:
      Swizzle2__FPv(pBVar2->param);
      Swizzle2__FPv(pBVar2->param + 1);
      Swizzle2__FPv(pBVar2->param + 2);
      puVar3 = pBVar2->param + 3;
      goto LAB_00274ce0;
    case 0x31:
      Swizzle2__FPv(pBVar2->param);
      puVar3 = pBVar2->param + 1;
LAB_00274ce0:
      Swizzle2__FPv(puVar3);
      Swizzle4__FPv(pBVar2->param);
    }
    pBVar2 = pBVar2 + 1;
    if (pBVar2 == pBVar6) goto LAB_00274d24;
    uVar1 = pBVar2->_treePrimID;
  } while( true );
}

BehaviorConstants* Behavior::GetConstants(SInt16 id, bool useOverride) {
	iResFile *file;
	iResFile *this;
	VECTOR<BehaviorConstants> *this;
	
  int iVar1;
  BehaviorConstants *pBVar2;
  long lVar3;
  ushort *puVar4;
  
  lVar3 = (*(code *)this->__vtable[1].GetResFile)
                    ((int)&this->fGlobFile + (int)*(short *)&this->__vtable[1].Behavior,
                     (int)(short)id);
  if (lVar3 == 0) {
    pBVar2 = (BehaviorConstants *)0x0;
  }
  else {
    iVar1 = *(int *)((int)lVar3 + 8);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ResFile.h */
    pBVar2 = *(BehaviorConstants **)(iVar1 + 0x20);
    puVar4 = (ushort *)0x0;
    if (pBVar2 != (BehaviorConstants *)0x0) {
      puVar4 = pBVar2[-1].values.pData;
    }
                    /* end of inlined section */
    pBVar2 = FindRes__H1ZC17BehaviorConstants_PX01T0i_PX01
                       (pBVar2,(BehaviorConstants *)(*(int *)(iVar1 + 0x20) + (int)puVar4 * 8),
                        (int)(short)id);
  }
  return pBVar2;
}

void Behavior::GetConstantsName(SInt16 id, StringBuffer &name) {
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

SInt16* short * copy_backward<short *, short *>(SInt16 *first, SInt16 *last, SInt16 *result) {
  if (first != last) {
    do {
      last = last + -1;
      result = result + -1;
      *result = *last;
    } while (first != last);
  }
  return result;
}

void* __malloc_alloc_template<0>::oom_malloc(unsigned int n) {
  void *pvVar1;
  
  do {
    (*(code *)0x0)();
    pvVar1 = malloc(n);
  } while (pvVar1 == (void *)0x0);
  return pvVar1;
}

SInt16* short * uninitialized_copy<short *, short *>(SInt16 *first, SInt16 *last, SInt16 *result) {
	SInt16 *p;
	short int &value;
	void *pAddress;
	
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = result;
  if (first != last) {
    do {
      uVar1 = *first;
      first = first + 1;
      result = puVar2 + 1;
      *puVar2 = uVar1;
      puVar2 = result;
    } while (first != last);
  }
  return result;
}

void vector<short, __malloc_alloc_template<0> >::insert_aux(SInt16 *position, SInt16 &x) {
	vector<short int,__malloc_alloc_template<0> > *this;
	vector<short int,__malloc_alloc_template<0> > *this;
	vector<short int,__malloc_alloc_template<0> > *this;
	void *result;
	vector<short int,__malloc_alloc_template<0> > *this;
	vector<short int,__malloc_alloc_template<0> > *this;
	SInt16 *p;
	short int &value;
	void *pAddress;
	vector<short int,__malloc_alloc_template<0> > *this;
	vector<short int,__malloc_alloc_template<0> > *this;
	vector<short int,__malloc_alloc_template<0> > *this;
	vector<short int,__malloc_alloc_template<0> > *this;
	SInt16 *first;
	SInt16 *pointer;
	vector<short int,__malloc_alloc_template<0> > *this;
	
  ushort uVar1;
  int iVar2;
  uint size;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  int iVar3;
  
  puVar4 = this->finish;
  if (puVar4 == this->end_of_storage) {
    iVar2 = (int)puVar4 - (int)this->start >> 1;
    iVar6 = iVar2 << 1;
    iVar3 = iVar6;
    if (iVar2 == 0) {
      iVar6 = 0;
      iVar3 = 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    size = iVar3 << 1;
    if (iVar3 == 0) {
      puVar4 = (ushort *)0x0;
      size = 0;
    }
    else {
      puVar4 = (ushort *)malloc(size);
      if (puVar4 == (ushort *)0x0) {
        puVar4 = (ushort *)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
      }
    }
                    /* end of inlined section */
    uninitialized_copy__H2ZPsZPs_X01X01X11_X11(this->start,position,puVar4);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *(ushort *)((int)puVar4 + ((int)position - (int)this->start)) = *x;
                    /* end of inlined section */
    uninitialized_copy__H2ZPsZPs_X01X01X11_X11
              (position,this->finish,
               (ushort *)((int)puVar4 + (int)position + (2 - (int)this->start)));
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    puVar5 = this->start;
    if (puVar5 == this->finish) {
      puVar5 = this->start;
    }
    else {
      do {
        puVar5 = puVar5 + 1;
      } while (puVar5 != this->finish);
                    /* end of inlined section */
      puVar5 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((puVar5 != (ushort *)0x0) && ((int)this->end_of_storage - (int)puVar5 >> 1 != 0)) {
      free(puVar5);
                    /* end of inlined section */
    }
    puVar5 = (ushort *)((int)puVar4 + iVar6);
    this->start = puVar4;
    this->end_of_storage = (ushort *)((int)puVar4 + size);
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *puVar4 = puVar4[-1];
                    /* end of inlined section */
    uVar1 = *x;
    copy_backward__H2ZPsZPs_X01X01X11_X11(position,this->finish + -1,this->finish);
    *position = uVar1;
    puVar5 = this->finish;
  }
  this->finish = puVar5 + 1;
  return;
}

SInt16* short * find<short *, short>(SInt16 *first, SInt16 *last, SInt16 &value) {
  if ((first != last) && (*first != *value)) {
    for (first = first + 1; (first != last && (*first != *value)); first = first + 1) {
    }
  }
  return first;
}

BehaviorTree* BehaviorTree * FindRes<BehaviorTree>(BehaviorTree *begin, BehaviorTree *end, int resID) {
	int iCmp;
	BehaviorTree *middle;
	
  BehaviorTree *pBVar1;
  int iVar2;
  int iVar3;
  
  while( true ) {
    pBVar1 = end;
    iVar3 = (int)pBVar1 - (int)begin;
    iVar2 = iVar3 >> 4;
    if (iVar2 < 1) {
      return (BehaviorTree *)0x0;
    }
    if (iVar2 == 1) break;
    end = begin + (iVar2 - (iVar3 >> 0x1f) >> 1);
    if (resID == (short)end->resID) {
      return end;
    }
    if (0 < resID - (short)end->resID) {
      begin = end + 1;
      end = pBVar1;
    }
  }
  pBVar1 = (BehaviorTree *)0x0;
  if ((long)(short)begin->resID == (long)resID) {
    pBVar1 = begin;
  }
  return pBVar1;
}

BehaviorConstants* BehaviorConstants * FindRes<BehaviorConstants>(BehaviorConstants *begin, BehaviorConstants *end, int resID) {
	int iCmp;
	BehaviorConstants *middle;
	
  BehaviorConstants *pBVar1;
  int iVar2;
  int iVar3;
  
  while( true ) {
    pBVar1 = end;
    iVar3 = (int)pBVar1 - (int)begin;
    iVar2 = iVar3 >> 3;
    if (iVar2 < 1) {
      return (BehaviorConstants *)0x0;
    }
    if (iVar2 == 1) break;
    end = begin + (iVar2 - (iVar3 >> 0x1f) >> 1);
    if (resID == end->resID) {
      return end;
    }
    if (0 < resID - end->resID) {
      begin = end + 1;
      end = pBVar1;
    }
  }
  pBVar1 = (BehaviorConstants *)0x0;
  if (begin->resID == resID) {
    pBVar1 = begin;
  }
  return pBVar1;
}

bool Language::IsSingleExit(BehaviorNode *node) {
  return false;
}

SwizzleProc Language::GetSwizzler() {
  return (undefined1 *)0x0;
}

bool Behavior::GetNode(SInt16 treeID, SInt16 nodeNum, BehaviorNode *nodeSpace) {
	BehaviorNode *nodeRef;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  uint *puVar5;
  BehaviorNode *pBVar6;
  ulong in_v1;
  ulong uVar7;
  
  pBVar6 = GetNodeRef__8Behaviorss(this,treeID,nodeNum);
  if (pBVar6 != (BehaviorNode *)0x0) {
    puVar1 = (undefined *)((int)pBVar6->param + 3);
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)pBVar6 & 7;
    uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
            in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)pBVar6 - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)pBVar6->param + 7);
    uVar2 = (uint)puVar1 & 3;
    uVar3 = (uint)(pBVar6->param + 2) & 3;
    uVar2 = (*(int *)(puVar1 + -uVar2) << (3 - uVar2) * 8 |
            (uint)this & 0xffffffffU >> (uVar2 + 1) * 8) & -1 << (4 - uVar3) * 8 |
            *(uint *)((int)(pBVar6->param + 2) - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)nodeSpace->param + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar7 >> (7 - uVar3) * 8;
    uVar3 = (uint)nodeSpace & 7;
    *(ulong *)((int)nodeSpace - uVar3) =
         uVar7 << uVar3 * 8 |
         *(ulong *)((int)nodeSpace - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    puVar1 = (undefined *)((int)nodeSpace->param + 7);
    uVar3 = (uint)puVar1 & 3;
    puVar5 = (uint *)(puVar1 + -uVar3);
    *puVar5 = *puVar5 & -1 << (uVar3 + 1) * 8 | uVar2 >> (3 - uVar3) * 8;
    uVar3 = (uint)(nodeSpace->param + 2) & 3;
    puVar5 = (uint *)((int)(nodeSpace->param + 2) - uVar3);
    *puVar5 = *puVar5 & 0xffffffffU >> (4 - uVar3) * 8 | uVar2 << uVar3 * 8;
  }
  return pBVar6 != (BehaviorNode *)0x0;
}

Language* Behavior::GetLanguage() {
  return this->fLanguage;
}

iResFile* Behavior::GetSemiGlobalFile() {
  short sVar1;
  Behavior__vtable *pBVar2;
  ushort uVar3;
  iResFile__6_5027 *piVar4;
  
  pBVar2 = this->__vtable;
  sVar1 = *(short *)&pBVar2[1].Behavior;
  uVar3 = GetBaseID__8Behaviors(3);
  piVar4 = (iResFile__6_5027 *)
           (*(code *)pBVar2[1].GetResFile)((int)&this->fGlobFile + (int)sVar1,uVar3);
  return piVar4;
}

iResFile* Behavior::GetResFileByClass(SInt16 treeClass) {
  short sVar1;
  Behavior__vtable *pBVar2;
  ushort uVar3;
  iResFile__6_5027 *piVar4;
  
  pBVar2 = this->__vtable;
  sVar1 = *(short *)&pBVar2[1].Behavior;
  uVar3 = GetBaseID__8Behaviors(treeClass);
  piVar4 = (iResFile__6_5027 *)
           (*(code *)pBVar2[1].GetResFile)((int)&this->fGlobFile + (int)sVar1,uVar3);
  return piVar4;
}

bool Behavior::IsDefaultParam(short int *param[4]) {
  bool bVar1;
  
  bVar1 = false;
  if (*(int *)*param == -1) {
    bVar1 = *(int *)(*param + 2) == -1;
  }
  return bVar1;
}

void Behavior::SetDefaultParam(BehaviorNodeParam *param) {
  *(undefined4 *)(*param + 2) = 0xffffffff;
  *(undefined4 *)*param = 0xffffffff;
  return;
}

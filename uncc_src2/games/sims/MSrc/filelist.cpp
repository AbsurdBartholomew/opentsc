// STATUS: NOT STARTED

#include "filelist.h"

struct pair<__rb_tree_iterator<pair<const ResFile *const,FileRec> >,bool> {
	__rb_tree_iterator<pair<const ResFile *const,FileRec> > first;
	bool second;
};

struct unary_function<pair<const ResFile *const,FileRec>,const ResFile *const> {
};

struct select1st<pair<const ResFile *const,FileRec> > : unary_function<pair<const ResFile *const,FileRec>,const ResFile *const> {
	select1st<pair<const ResFile *const,FileRec> >& operator=();
	select1st();
	select1st();
	ResFile*& operator()();
};

iResFile* FileList::Find(ResFile *pResFile) {
	map<const ResFile *,FileRec,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	map<const ResFile *,FileRec,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	rb_tree<const ResFile *,pair<const ResFile *const,FileRec>,select1st<pair<const ResFile *const,FileRec> >,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const ResFile *const,FileRec> > *x;
	
  __rb_tree_iterator_pair_const_ResFile__const_FileRec___ _Var1;
  iResFile__6_5027 *piVar2;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  ResFile *local_30 [4];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/map.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30[0] = pResFile;
  _Var1 = find__t7rb_tree5ZPC7ResFileZt4pair2ZCPC7ResFileZ7FileRecZt9select1st1Zt4pair2ZCPC7ResFileZ7FileRecZt4less1ZPC7ResFileZt23__malloc_alloc_template1i0RCPC7ResFile
                    ((rb_tree_const_ResFile___pair_const_ResFile__const_FileRec__select1st_pair_const_ResFile__const_FileRec____less_const_ResFile______malloc_alloc_template_0___
                      *)this,local_30);
                    /* end of inlined section */
  if (_Var1.field0_0x0.node == (__rb_tree_node_base *)(this->fFiles).t.header) {
    piVar2 = (iResFile__6_5027 *)0x0;
  }
  else {
    piVar2 = *(iResFile__6_5027 **)((int)_Var1.field0_0x0.node + 0x18);
  }
  return piVar2;
}

u32 FileList::GetRefCount(ResFile *pResFile) {
	map<const ResFile *,FileRec,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	map<const ResFile *,FileRec,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	rb_tree<const ResFile *,pair<const ResFile *const,FileRec>,select1st<pair<const ResFile *const,FileRec> >,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const ResFile *const,FileRec> > *x;
	
  __rb_tree_iterator_pair_const_ResFile__const_FileRec___ _Var1;
  uint uVar2;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  ResFile *local_30 [4];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/map.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30[0] = pResFile;
  _Var1 = find__t7rb_tree5ZPC7ResFileZt4pair2ZCPC7ResFileZ7FileRecZt9select1st1Zt4pair2ZCPC7ResFileZ7FileRecZt4less1ZPC7ResFileZt23__malloc_alloc_template1i0RCPC7ResFile
                    ((rb_tree_const_ResFile___pair_const_ResFile__const_FileRec__select1st_pair_const_ResFile__const_FileRec____less_const_ResFile______malloc_alloc_template_0___
                      *)this,local_30);
                    /* end of inlined section */
  if (_Var1.field0_0x0.node == (__rb_tree_node_base *)(this->fFiles).t.header) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)((int)_Var1.field0_0x0.node + 0x14);
  }
  return uVar2;
}

void FileList::AddRef(iResFile *file) {
	ResFile *pResFile;
	FileRec newRec;
	iResFile *this;
	map<const ResFile *,FileRec,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	map<const ResFile *,FileRec,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	rb_tree<const ResFile *,pair<const ResFile *const,FileRec>,select1st<pair<const ResFile *const,FileRec> >,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const ResFile *const,FileRec> > *x;
	map<const ResFile *,FileRec,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	map<const ResFile *,FileRec,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	
  undefined *puVar1;
  FileRec *pFVar2;
  uint uVar3;
  ulong *puVar4;
  __rb_tree_iterator_pair_const_ResFile__const_FileRec___ _Var5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  FileRec newRec;
  rb_tree_const_ResFile___pair_const_ResFile__const_FileRec__select1st_pair_const_ResFile__const_FileRec____less_const_ResFile______malloc_alloc_template_0___
  local_70;
  ResFile *local_60;
  undefined auStack_5c [12];
  ulong auStack_50 [2];
  ResFile *pResFile;
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
                    /* inlined from c:/eor/src2/games/sims/MSrc/map.h */
  pResFile = file->fResData;
  _Var5 = find__t7rb_tree5ZPC7ResFileZt4pair2ZCPC7ResFileZ7FileRecZt9select1st1Zt4pair2ZCPC7ResFileZ7FileRecZt4less1ZPC7ResFileZt23__malloc_alloc_template1i0RCPC7ResFile
                    ((rb_tree_const_ResFile___pair_const_ResFile__const_FileRec__select1st_pair_const_ResFile__const_FileRec____less_const_ResFile______malloc_alloc_template_0___
                      *)this,&pResFile);
                    /* end of inlined section */
  if (_Var5.field0_0x0.node == (__rb_tree_node_base *)(this->fFiles).t.header) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/map.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/map.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/map.h */
    memset(auStack_50,0,8);
    local_60 = pResFile;
    puVar1 = auStack_5c + 7;
    uVar3 = (uint)puVar1 & 7;
    *(ulong *)(puVar1 + -uVar3) =
         *(ulong *)(puVar1 + -uVar3) & -1L << (uVar3 + 1) * 8 | auStack_50[0] >> (7 - uVar3) * 8;
    uVar3 = (uint)auStack_5c & 7;
    puVar4 = (ulong *)(auStack_5c + -uVar3);
    *puVar4 = auStack_50[0] << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    insert_unique__t7rb_tree5ZPC7ResFileZt4pair2ZCPC7ResFileZ7FileRecZt9select1st1Zt4pair2ZCPC7ResFileZ7FileRecZt4less1ZPC7ResFileZt23__malloc_alloc_template1i0RCt4pair2ZCPC7ResFileZ7FileRec
              (&local_70,(pair_const_ResFile__const_FileRec_ *)this);
                    /* end of inlined section */
    puVar1 = (undefined *)((int)&((local_70.header)->value_field).second.file + 3);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | CONCAT44(file,1) >> (7 - uVar3) * 8;
    pFVar2 = &((local_70.header)->value_field).second;
    uVar3 = (uint)pFVar2 & 7;
    puVar4 = (ulong *)((int)pFVar2 - uVar3);
    *puVar4 = CONCAT44(file,1) << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  }
  else {
                    /* end of inlined section */
    *(int *)((int)_Var5.field0_0x0.node + 0x14) = *(int *)((int)_Var5.field0_0x0.node + 0x14) + 1;
  }
  return;
}

bool FileList::ReleaseRef(iResFile *file) {
	ResFile *pResFile;
	map<const ResFile *,FileRec,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	map<const ResFile *,FileRec,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	rb_tree<const ResFile *,pair<const ResFile *const,FileRec>,select1st<pair<const ResFile *const,FileRec> >,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const ResFile *const,FileRec> > *x;
	map<const ResFile *,FileRec,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	rb_tree<const ResFile *,pair<const ResFile *const,FileRec>,select1st<pair<const ResFile *const,FileRec> >,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *&leftmost;
	__rb_tree_node_base *&rightmost;
	__rb_tree_node_base *x_parent;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	__rb_tree_color_type &a;
	__rb_tree_color_type tmp;
	__rb_tree_node_base *x;
	__rb_tree_node_base *x;
	__rb_tree_node_base *w;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	__rb_tree_node_base *w;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	rb_tree<const ResFile *,pair<const ResFile *const,FileRec>,select1st<pair<const ResFile *const,FileRec> >,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	
  __rb_tree_node_pair_const_ResFile__const_FileRec___ *p_Var1;
  __rb_tree_iterator_pair_const_ResFile__const_FileRec___ _Var2;
  int iVar3;
  __rb_tree_base_iterator _Var4;
  __rb_tree_node_base **pp_Var5;
  __rb_tree_node_base *p_Var6;
  __rb_tree_node_base *p_Var7;
  __rb_tree_base_iterator _Var8;
  __rb_tree_node_base **pp_Var9;
  __rb_tree_node_base *p_Var10;
  __rb_tree_node_base *p_Var11;
  __rb_tree_iterator_pair_const_ResFile__const_FileRec___ pAddress;
  __rb_tree_node_base **pp_Var12;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  ResFile *pResFile;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/ResFile.h */
  pResFile = file->fResData;
  _Var2 = find__t7rb_tree5ZPC7ResFileZt4pair2ZCPC7ResFileZ7FileRecZt9select1st1Zt4pair2ZCPC7ResFileZ7FileRecZt4less1ZPC7ResFileZt23__malloc_alloc_template1i0RCPC7ResFile
                    ((rb_tree_const_ResFile___pair_const_ResFile__const_FileRec__select1st_pair_const_ResFile__const_FileRec____less_const_ResFile______malloc_alloc_template_0___
                      *)this,&pResFile);
                    /* end of inlined section */
                    /* end of inlined section */
  if ((_Var2.field0_0x0.node == (__rb_tree_node_base *)(this->fFiles).t.header) ||
     (iVar3 = *(int *)((int)_Var2.field0_0x0.node + 0x14) + -1,
     *(int *)((int)_Var2.field0_0x0.node + 0x14) = iVar3, iVar3 != 0)) {
    return false;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/map.h */
  p_Var1 = (this->fFiles).t.header;
  p_Var11 = *(__rb_tree_node_base **)((int)_Var2.field0_0x0.node + 8);
  pp_Var9 = &(p_Var1->field0_0x0).right;
  pp_Var12 = &(p_Var1->field0_0x0).parent;
  pp_Var5 = &(p_Var1->field0_0x0).left;
  pAddress = _Var2;
  if (p_Var11 == (__rb_tree_node_base *)0x0) {
LAB_00261554:
    p_Var11 = *(__rb_tree_node_base **)((int)pAddress.field0_0x0.node + 0xc);
  }
  else {
    p_Var6 = *(__rb_tree_node_base **)((int)_Var2.field0_0x0.node + 0xc);
    if (p_Var6 != (__rb_tree_node_base *)0x0) {
      if (p_Var6->left != (__rb_tree_node_base *)0x0) {
        for (pAddress.field0_0x0.node = (__rb_tree_base_iterator)p_Var6->left;
            *(__rb_tree_node_base **)((int)pAddress.field0_0x0.node + 8) !=
            (__rb_tree_node_base *)0x0;
            pAddress.field0_0x0.node =
                 *(__rb_tree_base_iterator *)((int)pAddress.field0_0x0.node + 8)) {
        }
        goto LAB_00261554;
      }
      p_Var11 = p_Var6->right;
      pAddress.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)p_Var6;
    }
  }
  if (pAddress.field0_0x0.node == _Var2.field0_0x0.node) {
    _Var8.node = *(__rb_tree_node_base **)((int)pAddress.field0_0x0.node + 4);
    if (p_Var11 != (__rb_tree_node_base *)0x0) {
      p_Var11->parent = _Var8.node;
    }
    if ((__rb_tree_base_iterator)*pp_Var12 == pAddress.field0_0x0.node) {
      *pp_Var12 = p_Var11;
    }
    else {
      p_Var6 = *(__rb_tree_node_base **)((int)pAddress.field0_0x0.node + 4);
      if ((__rb_tree_base_iterator)p_Var6->left == pAddress.field0_0x0.node) {
        p_Var6->left = p_Var11;
      }
      else {
        p_Var6->right = p_Var11;
      }
    }
    if ((__rb_tree_base_iterator)*pp_Var5 == _Var2.field0_0x0.node) {
      if (*(int *)((int)_Var2.field0_0x0.node + 0xc) == 0) {
        *pp_Var5 = *(__rb_tree_node_base **)((int)_Var2.field0_0x0.node + 4);
      }
      else {
        p_Var6 = p_Var11;
        if (p_Var11->left != (__rb_tree_node_base *)0x0) {
          for (p_Var6 = p_Var11->left; p_Var6->left != (__rb_tree_node_base *)0x0;
              p_Var6 = p_Var6->left) {
          }
        }
        *pp_Var5 = p_Var6;
      }
      _Var4.node = *pp_Var9;
    }
    else {
      _Var4.node = *pp_Var9;
    }
    if ((__rb_tree_base_iterator)_Var4.node != _Var2.field0_0x0.node) {
      iVar3 = *(int *)pAddress.field0_0x0.node;
      goto LAB_002616bc;
    }
    if (*(int *)((int)_Var2.field0_0x0.node + 8) == 0) {
      *pp_Var9 = *(__rb_tree_node_base **)((int)_Var2.field0_0x0.node + 4);
    }
    else {
      p_Var6 = p_Var11;
      if (p_Var11->right != (__rb_tree_node_base *)0x0) {
        for (p_Var6 = p_Var11->right; p_Var6->right != (__rb_tree_node_base *)0x0;
            p_Var6 = p_Var6->right) {
        }
      }
      *pp_Var9 = p_Var6;
    }
  }
  else {
    *(__rb_tree_base_iterator *)(*(int *)((int)_Var2.field0_0x0.node + 8) + 4) =
         pAddress.field0_0x0.node;
    *(__rb_tree_node_base **)((int)pAddress.field0_0x0.node + 8) =
         *(__rb_tree_node_base **)((int)_Var2.field0_0x0.node + 8);
    _Var8 = pAddress.field0_0x0.node;
    if (pAddress.field0_0x0.node !=
        (__rb_tree_base_iterator)*(__rb_tree_node_base **)((int)_Var2.field0_0x0.node + 0xc)) {
      _Var8.node = *(__rb_tree_node_base **)((int)pAddress.field0_0x0.node + 4);
      if (p_Var11 != (__rb_tree_node_base *)0x0) {
        p_Var11->parent = _Var8.node;
      }
      (*(__rb_tree_node_base **)((int)pAddress.field0_0x0.node + 4))->left = p_Var11;
      *(__rb_tree_node_base **)((int)pAddress.field0_0x0.node + 0xc) =
           *(__rb_tree_node_base **)((int)_Var2.field0_0x0.node + 0xc);
      *(__rb_tree_base_iterator *)(*(int *)((int)_Var2.field0_0x0.node + 0xc) + 4) =
           pAddress.field0_0x0.node;
    }
    if ((__rb_tree_base_iterator)*pp_Var12 == _Var2.field0_0x0.node) {
      *pp_Var12 = (__rb_tree_node_base *)pAddress.field0_0x0.node;
    }
    else {
      iVar3 = *(int *)((int)_Var2.field0_0x0.node + 4);
      if ((__rb_tree_base_iterator)*(__rb_tree_node_base **)(iVar3 + 8) == _Var2.field0_0x0.node) {
        *(__rb_tree_base_iterator *)(iVar3 + 8) = pAddress.field0_0x0.node;
      }
      else {
        *(__rb_tree_base_iterator *)(iVar3 + 0xc) = pAddress.field0_0x0.node;
      }
    }
    iVar3 = *(int *)pAddress.field0_0x0.node;
    *(__rb_tree_node_base **)((int)pAddress.field0_0x0.node + 4) =
         *(__rb_tree_node_base **)((int)_Var2.field0_0x0.node + 4);
    *(int *)pAddress.field0_0x0.node = *(int *)_Var2.field0_0x0.node;
    *(int *)_Var2.field0_0x0.node = iVar3;
    pAddress = _Var2;
  }
  iVar3 = *(int *)pAddress.field0_0x0.node;
LAB_002616bc:
  if (iVar3 != 0) {
    p_Var6 = *pp_Var12;
    while (p_Var11 != p_Var6) {
      if (p_Var11 == (__rb_tree_node_base *)0x0) {
        p_Var6 = (_Var8.node)->left;
      }
      else {
        if (*(int *)p_Var11 != 1) break;
        p_Var6 = (_Var8.node)->left;
      }
      if (p_Var11 == p_Var6) {
        p_Var6 = (_Var8.node)->right;
        if (*(int *)p_Var6 == 0) {
          *(int *)p_Var6 = 1;
          *(int *)_Var8.node = 0;
          p_Var6 = (_Var8.node)->right;
          (_Var8.node)->right = p_Var6->left;
          if (p_Var6->left != (__rb_tree_node_base *)0x0) {
            p_Var6->left->parent = _Var8.node;
          }
          p_Var6->parent = (_Var8.node)->parent;
          if (_Var8.node == *pp_Var12) {
            *pp_Var12 = p_Var6;
          }
          else {
            p_Var10 = (_Var8.node)->parent;
            if (_Var8.node == p_Var10->left) {
              p_Var10->left = p_Var6;
            }
            else {
              p_Var10->right = p_Var6;
            }
          }
          p_Var6->left = _Var8.node;
          (_Var8.node)->parent = p_Var6;
          p_Var6 = (_Var8.node)->right;
          p_Var10 = p_Var6->left;
        }
        else {
          p_Var10 = p_Var6->left;
        }
        if ((p_Var10 != (__rb_tree_node_base *)0x0) &&
           (p_Var7 = p_Var6->right, *(int *)p_Var10 != 1)) {
LAB_00261774:
          if ((p_Var7 == (__rb_tree_node_base *)0x0) || (*(int *)p_Var7 == 1)) {
            if (p_Var10 != (__rb_tree_node_base *)0x0) {
              *(int *)p_Var10 = 1;
            }
            p_Var10 = p_Var6->left;
            *(int *)p_Var6 = 0;
            p_Var6->left = p_Var10->right;
            if (p_Var10->right != (__rb_tree_node_base *)0x0) {
              p_Var10->right->parent = p_Var6;
            }
            p_Var10->parent = p_Var6->parent;
            if (p_Var6 == *pp_Var12) {
              *pp_Var12 = p_Var10;
            }
            else {
              p_Var7 = p_Var6->parent;
              if (p_Var6 == p_Var7->right) {
                p_Var7->right = p_Var10;
              }
              else {
                p_Var7->left = p_Var10;
              }
            }
            p_Var10->right = p_Var6;
            p_Var6->parent = p_Var10;
            p_Var6 = (_Var8.node)->right;
            iVar3 = *(int *)_Var8.node;
          }
          else {
            iVar3 = *(int *)_Var8.node;
          }
          *(int *)p_Var6 = iVar3;
          *(int *)_Var8.node = 1;
          if (p_Var6->right != (__rb_tree_node_base *)0x0) {
            *(undefined4 *)p_Var6->right = 1;
          }
          p_Var6 = (_Var8.node)->right;
          (_Var8.node)->right = p_Var6->left;
          if (p_Var6->left != (__rb_tree_node_base *)0x0) {
            p_Var6->left->parent = _Var8.node;
          }
          p_Var6->parent = (_Var8.node)->parent;
          if (_Var8.node == *pp_Var12) {
            *pp_Var12 = p_Var6;
          }
          else {
            p_Var10 = (_Var8.node)->parent;
            if (_Var8.node == p_Var10->left) {
              p_Var10->left = p_Var6;
            }
            else {
              p_Var10->right = p_Var6;
            }
          }
          p_Var6->left = _Var8.node;
          (_Var8.node)->parent = p_Var6;
          break;
        }
        p_Var7 = p_Var6->right;
        if (p_Var7 == (__rb_tree_node_base *)0x0) goto LAB_002618ec;
        if (*(int *)p_Var7 != 1) goto LAB_00261774;
        *(int *)p_Var6 = 0;
      }
      else {
        if (*(int *)p_Var6 == 0) {
          *(int *)p_Var6 = 1;
          *(int *)_Var8.node = 0;
          p_Var6 = (_Var8.node)->left;
          (_Var8.node)->left = p_Var6->right;
          if (p_Var6->right != (__rb_tree_node_base *)0x0) {
            p_Var6->right->parent = _Var8.node;
          }
          p_Var6->parent = (_Var8.node)->parent;
          if (_Var8.node == *pp_Var12) {
            *pp_Var12 = p_Var6;
          }
          else {
            p_Var10 = (_Var8.node)->parent;
            if (_Var8.node == p_Var10->right) {
              p_Var10->right = p_Var6;
            }
            else {
              p_Var10->left = p_Var6;
            }
          }
          p_Var6->right = _Var8.node;
          (_Var8.node)->parent = p_Var6;
          p_Var6 = (_Var8.node)->left;
          p_Var10 = p_Var6->right;
        }
        else {
          p_Var10 = p_Var6->right;
        }
        if (((p_Var10 != (__rb_tree_node_base *)0x0) &&
            (p_Var7 = p_Var6->left, *(int *)p_Var10 != 1)) ||
           ((p_Var7 = p_Var6->left, p_Var7 != (__rb_tree_node_base *)0x0 && (*(int *)p_Var7 != 1))))
        {
          if ((p_Var7 == (__rb_tree_node_base *)0x0) || (*(int *)p_Var7 == 1)) {
            if (p_Var10 != (__rb_tree_node_base *)0x0) {
              *(int *)p_Var10 = 1;
            }
            p_Var10 = p_Var6->right;
            *(int *)p_Var6 = 0;
            p_Var6->right = p_Var10->left;
            if (p_Var10->left != (__rb_tree_node_base *)0x0) {
              p_Var10->left->parent = p_Var6;
            }
            p_Var10->parent = p_Var6->parent;
            if (p_Var6 == *pp_Var12) {
              *pp_Var12 = p_Var10;
            }
            else {
              p_Var7 = p_Var6->parent;
              if (p_Var6 == p_Var7->left) {
                p_Var7->left = p_Var10;
              }
              else {
                p_Var7->right = p_Var10;
              }
            }
            p_Var10->left = p_Var6;
            p_Var6->parent = p_Var10;
            p_Var6 = (_Var8.node)->left;
            iVar3 = *(int *)_Var8.node;
          }
          else {
            iVar3 = *(int *)_Var8.node;
          }
          *(int *)p_Var6 = iVar3;
          *(int *)_Var8.node = 1;
          if (p_Var6->left != (__rb_tree_node_base *)0x0) {
            *(undefined4 *)p_Var6->left = 1;
          }
          p_Var6 = (_Var8.node)->left;
          (_Var8.node)->left = p_Var6->right;
          if (p_Var6->right != (__rb_tree_node_base *)0x0) {
            p_Var6->right->parent = _Var8.node;
          }
          p_Var6->parent = (_Var8.node)->parent;
          if (_Var8.node == *pp_Var12) {
            *pp_Var12 = p_Var6;
          }
          else {
            p_Var10 = (_Var8.node)->parent;
            if (_Var8.node == p_Var10->right) {
              p_Var10->right = p_Var6;
            }
            else {
              p_Var10->left = p_Var6;
            }
          }
          p_Var6->right = _Var8.node;
          (_Var8.node)->parent = p_Var6;
          break;
        }
LAB_002618ec:
        *(int *)p_Var6 = 0;
      }
      _Var8.node = (_Var8.node)->parent;
      p_Var11 = _Var8.node;
      p_Var6 = *pp_Var12;
    }
    if (p_Var11 != (__rb_tree_node_base *)0x0) {
      *(int *)p_Var11 = 1;
    }
  }
  free((void *)pAddress.field0_0x0.node);
                    /* end of inlined section */
                    /* inlined from Tree.h */
                    /* end of inlined section */
  (this->fFiles).t.node_count = (this->fFiles).t.node_count - 1;
  return true;
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

__rb_tree_iterator<pair<const ResFile *const,FileRec> > rb_tree<ResFile *, pair<ResFile *, FileRec>, select1st<pair<ResFile *, FileRec> >, less<ResFile *>, __malloc_alloc_template<0> >::find(ResFile *&k) {
	__rb_tree_node<pair<const ResFile *const,FileRec> > *y;
	__rb_tree_node<pair<const ResFile *const,FileRec> > *x;
	rb_tree<const ResFile *,pair<const ResFile *const,FileRec>,select1st<pair<const ResFile *const,FileRec> >,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const ResFile *const,FileRec> > *x;
	__rb_tree_node<pair<const ResFile *const,FileRec> > *x;
	ResFile *&y;
	__rb_tree_node<pair<const ResFile *const,FileRec> > *x;
	__rb_tree_node<pair<const ResFile *const,FileRec> > *x;
	__rb_tree_node<pair<const ResFile *const,FileRec> > *x;
	rb_tree<const ResFile *,pair<const ResFile *const,FileRec>,select1st<pair<const ResFile *const,FileRec> >,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const ResFile *const,FileRec> > *x;
	ResFile *&x;
	rb_tree<const ResFile *,pair<const ResFile *const,FileRec>,select1st<pair<const ResFile *const,FileRec> >,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	
  __rb_tree_base_iterator _Var1;
  ResFile *pRVar2;
  __rb_tree_node_pair_const_ResFile__const_FileRec___ *p_Var3;
  __rb_tree_base_iterator _Var4;
  
  _Var4.node = (__rb_tree_node_base *)this->header;
  p_Var3 = *(__rb_tree_node_pair_const_ResFile__const_FileRec___ **)
            &((__rb_tree_node_pair_const_ResFile__const_FileRec___ *)_Var4.node)->field0_0x0;
  if (p_Var3 == (__rb_tree_node_pair_const_ResFile__const_FileRec___ *)0x0) {
    _Var1.node = (__rb_tree_node_base *)this->header;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
    pRVar2 = (p_Var3->value_field).first;
    while( true ) {
                    /* end of inlined section */
      if (pRVar2 < *k) {
        p_Var3 = *(__rb_tree_node_pair_const_ResFile__const_FileRec___ **)&p_Var3->field0_0x0;
      }
      else {
        _Var4.node = &p_Var3->field0_0x0;
        p_Var3 = *(__rb_tree_node_pair_const_ResFile__const_FileRec___ **)&p_Var3->field0_0x0;
      }
      if (p_Var3 == (__rb_tree_node_pair_const_ResFile__const_FileRec___ *)0x0) break;
      pRVar2 = (p_Var3->value_field).first;
    }
    _Var1.node = (__rb_tree_node_base *)this->header;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
                    /* end of inlined section */
  if ((_Var4.node != _Var1.node) && (*(ResFile **)(_Var4.node + 1) <= *k)) {
    return (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var4.node;
  }
  return (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var1.node;
}

void* __malloc_alloc_template<0>::oom_malloc(unsigned int n) {
  void *pvVar1;
  
  do {
    (*(code *)0x0)();
    pvVar1 = malloc(n);
  } while (pvVar1 == (void *)0x0);
  return pvVar1;
}

__rb_tree_iterator<pair<const ResFile *const,FileRec> > rb_tree<ResFile *, pair<ResFile *, FileRec>, select1st<pair<ResFile *, FileRec> >, less<ResFile *>, __malloc_alloc_template<0> >::__insert(__rb_tree_node_base *x_, __rb_tree_node_base *y_, pair<const ResFile *const,FileRec> &v) {
	rb_tree<const ResFile *,pair<const ResFile *const,FileRec>,select1st<pair<const ResFile *const,FileRec> >,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	void *result;
	pair<const ResFile *const,FileRec> &value;
	pair<const ResFile *const,FileRec> &x;
	rb_tree<const ResFile *,pair<const ResFile *const,FileRec>,select1st<pair<const ResFile *const,FileRec> >,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	rb_tree<const ResFile *,pair<const ResFile *const,FileRec>,select1st<pair<const ResFile *const,FileRec> >,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	rb_tree<const ResFile *,pair<const ResFile *const,FileRec>,select1st<pair<const ResFile *const,FileRec> >,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	rb_tree<const ResFile *,pair<const ResFile *const,FileRec>,select1st<pair<const ResFile *const,FileRec> >,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	rb_tree<const ResFile *,pair<const ResFile *const,FileRec>,select1st<pair<const ResFile *const,FileRec> >,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	rb_tree<const ResFile *,pair<const ResFile *const,FileRec>,select1st<pair<const ResFile *const,FileRec> >,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	__rb_tree_node_base *x;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *y;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  iResFile__6_5027 *piVar4;
  __rb_tree_node_pair_const_ResFile__const_FileRec___ *p_Var5;
  int *piVar6;
  __rb_tree_node_base *p_Var7;
  ulong *puVar8;
  void *pvVar9;
  ulong uVar11;
  int *piVar12;
  __rb_tree_node_base **pp_Var13;
  __rb_tree_node_base *p_Var14;
  __rb_tree_node_base *p_Var15;
  int iVar16;
  __rb_tree_iterator_pair_const_ResFile__const_FileRec___ _Var17;
  ulong uVar10;
  
                    /* inlined from alloc.h */
  pvVar9 = malloc(0x1c);
  uVar10 = (ulong)(int)pvVar9;
  if (uVar10 == 0) {
    pvVar9 = oom_malloc__t23__malloc_alloc_template1i0Ui(0x1c);
    uVar10 = (ulong)(int)pvVar9;
  }
  puVar1 = (undefined *)((int)&(v->second).usecount + 3);
                    /* inlined from algobase.h */
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)v & 7;
  uVar11 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
           uVar10 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)v - uVar3) >> uVar3 * 8;
  piVar4 = (v->second).file;
  _Var17.field0_0x0.node = SUB84(uVar10,0);
  uVar2 = (int)_Var17.field0_0x0.node + 0x17U & 7;
  puVar8 = (ulong *)(((int)_Var17.field0_0x0.node + 0x17U) - uVar2);
  *puVar8 = *puVar8 & -1L << (uVar2 + 1) * 8 | uVar11 >> (7 - uVar2) * 8;
  uVar2 = (int)_Var17.field0_0x0.node + 0x10U & 7;
  puVar8 = (ulong *)(((int)_Var17.field0_0x0.node + 0x10U) - uVar2);
  *puVar8 = uVar11 << uVar2 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  *(iResFile__6_5027 **)((int)_Var17.field0_0x0.node + 0x18) = piVar4;
                    /* end of inlined section */
  if ((__rb_tree_node_pair_const_ResFile__const_FileRec___ *)y_ == this->header) {
    y_->left = (__rb_tree_node_base *)_Var17.field0_0x0.node;
LAB_00261bd4:
    p_Var5 = this->header;
    if ((__rb_tree_node_pair_const_ResFile__const_FileRec___ *)y_ == p_Var5) {
      y_->parent = (__rb_tree_node_base *)_Var17.field0_0x0.node;
      (this->header->field0_0x0).right = (__rb_tree_node_base *)_Var17.field0_0x0.node;
    }
    else {
      if (y_ != *(__rb_tree_node_base **)&p_Var5->field0_0x0) {
        *(__rb_tree_node_base **)((int)_Var17.field0_0x0.node + 4) = y_;
        goto LAB_00261c14;
      }
      *(__rb_tree_base_iterator *)&p_Var5->field0_0x0 = _Var17.field0_0x0.node;
    }
  }
  else {
    if (x_ != (__rb_tree_node_base *)0x0) {
      y_->left = (__rb_tree_node_base *)_Var17.field0_0x0.node;
      goto LAB_00261bd4;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
                    /* end of inlined section */
    if (v->first < *(ResFile **)(y_ + 1)) {
      y_->left = (__rb_tree_node_base *)_Var17.field0_0x0.node;
      goto LAB_00261bd4;
    }
    y_->right = (__rb_tree_node_base *)_Var17.field0_0x0.node;
    if (y_ == (this->header->field0_0x0).right) {
      (this->header->field0_0x0).right = (__rb_tree_node_base *)_Var17.field0_0x0.node;
    }
  }
  *(__rb_tree_node_base **)((int)_Var17.field0_0x0.node + 4) = y_;
LAB_00261c14:
  *(undefined4 *)((int)_Var17.field0_0x0.node + 8) = 0;
  *(undefined4 *)((int)_Var17.field0_0x0.node + 0xc) = 0;
  p_Var5 = this->header;
  *(undefined4 *)_Var17.field0_0x0.node = 0;
  pp_Var13 = &(p_Var5->field0_0x0).parent;
  if (uVar10 == (long)(int)(p_Var5->field0_0x0).parent) {
LAB_00261e4c:
    p_Var14 = *pp_Var13;
  }
  else {
    if (*(int *)y_ == 0) {
      piVar12 = *(int **)((int)_Var17.field0_0x0.node + 4);
      do {
        piVar6 = *(int **)(piVar12[1] + 8);
        iVar16 = (int)uVar10;
        if (piVar12 == piVar6) {
          piVar12 = *(int **)(piVar12[1] + 0xc);
          if (piVar12 == (int *)0x0) {
            p_Var14 = *(__rb_tree_node_base **)(iVar16 + 4);
LAB_00261c7c:
            uVar11 = (ulong)(int)p_Var14;
            p_Var15 = p_Var14->right;
            if (uVar10 == (long)(int)p_Var15) {
              p_Var14->right = p_Var15->left;
              if (p_Var15->left != (__rb_tree_node_base *)0x0) {
                p_Var15->left->parent = p_Var14;
              }
              p_Var15->parent = p_Var14->parent;
              if (uVar11 == (long)(int)*pp_Var13) {
                *pp_Var13 = p_Var15;
              }
              else {
                p_Var7 = p_Var14->parent;
                if (uVar11 == (long)(int)p_Var7->left) {
                  p_Var7->left = p_Var15;
                }
                else {
                  p_Var7->right = p_Var15;
                }
              }
              p_Var15->left = p_Var14;
              p_Var14->parent = p_Var15;
              p_Var14 = p_Var14->parent;
            }
            else {
              p_Var14 = *(__rb_tree_node_base **)(iVar16 + 4);
              uVar11 = uVar10;
            }
            *(undefined4 *)p_Var14 = 1;
            **(undefined4 **)(*(int *)((int)uVar11 + 4) + 4) = 0;
            p_Var14 = *(__rb_tree_node_base **)(*(int *)((int)uVar11 + 4) + 4);
            p_Var15 = p_Var14->left;
            p_Var14->left = p_Var15->right;
            if (p_Var15->right != (__rb_tree_node_base *)0x0) {
              p_Var15->right->parent = p_Var14;
            }
            p_Var15->parent = p_Var14->parent;
            if (p_Var14 == *pp_Var13) {
              *pp_Var13 = p_Var15;
            }
            else {
              p_Var7 = p_Var14->parent;
              if (p_Var14 == p_Var7->right) {
                p_Var7->right = p_Var15;
              }
              else {
                p_Var7->left = p_Var15;
              }
            }
            p_Var15->right = p_Var14;
            goto LAB_00261e2c;
          }
          if (*piVar12 != 0) {
            p_Var14 = *(__rb_tree_node_base **)(iVar16 + 4);
            goto LAB_00261c7c;
          }
          *piVar6 = 1;
          *piVar12 = 1;
LAB_00261d58:
          **(undefined4 **)(*(int *)(iVar16 + 4) + 4) = 0;
          uVar11 = (ulong)*(int *)(*(int *)(iVar16 + 4) + 4);
        }
        else {
          if (piVar6 == (int *)0x0) {
            p_Var14 = *(__rb_tree_node_base **)(iVar16 + 4);
          }
          else {
            if (*piVar6 == 0) {
              *piVar12 = 1;
              *piVar6 = 1;
              goto LAB_00261d58;
            }
            p_Var14 = *(__rb_tree_node_base **)(iVar16 + 4);
          }
          uVar11 = (ulong)(int)p_Var14;
          p_Var15 = p_Var14->left;
          if (uVar10 == (long)(int)p_Var15) {
            p_Var14->left = p_Var15->right;
            if (p_Var15->right != (__rb_tree_node_base *)0x0) {
              p_Var15->right->parent = p_Var14;
            }
            p_Var15->parent = p_Var14->parent;
            if (uVar11 == (long)(int)*pp_Var13) {
              *pp_Var13 = p_Var15;
            }
            else {
              p_Var7 = p_Var14->parent;
              if (uVar11 == (long)(int)p_Var7->right) {
                p_Var7->right = p_Var15;
              }
              else {
                p_Var7->left = p_Var15;
              }
            }
            p_Var15->right = p_Var14;
            p_Var14->parent = p_Var15;
            p_Var14 = p_Var14->parent;
          }
          else {
            p_Var14 = *(__rb_tree_node_base **)(iVar16 + 4);
            uVar11 = uVar10;
          }
          *(undefined4 *)p_Var14 = 1;
          **(undefined4 **)(*(int *)((int)uVar11 + 4) + 4) = 0;
          p_Var14 = *(__rb_tree_node_base **)(*(int *)((int)uVar11 + 4) + 4);
          p_Var15 = p_Var14->right;
          p_Var14->right = p_Var15->left;
          if (p_Var15->left != (__rb_tree_node_base *)0x0) {
            p_Var15->left->parent = p_Var14;
          }
          p_Var15->parent = p_Var14->parent;
          if (p_Var14 == *pp_Var13) {
            *pp_Var13 = p_Var15;
          }
          else {
            p_Var7 = p_Var14->parent;
            if (p_Var14 == p_Var7->left) {
              p_Var7->left = p_Var15;
            }
            else {
              p_Var7->right = p_Var15;
            }
          }
          p_Var15->left = p_Var14;
LAB_00261e2c:
          p_Var14->parent = p_Var15;
        }
        if (uVar11 == (long)(int)*pp_Var13) {
          p_Var14 = *pp_Var13;
          goto LAB_00261e50;
        }
        if (**(int **)((int)uVar11 + 4) != 0) goto LAB_00261e4c;
        piVar12 = *(int **)((int)uVar11 + 4);
        uVar10 = uVar11;
      } while( true );
    }
    p_Var14 = *pp_Var13;
  }
LAB_00261e50:
  *(undefined4 *)p_Var14 = 1;
  this->node_count = this->node_count + 1;
  return (__rb_tree_iterator_pair_const_ResFile__const_FileRec___)_Var17.field0_0x0.node;
}

pair<__rb_tree_iterator<pair<const ResFile *const,FileRec> >,bool> rb_tree<ResFile *, pair<ResFile *, FileRec>, select1st<pair<ResFile *, FileRec> >, less<ResFile *>, __malloc_alloc_template<0> >::insert_unique(pair<const ResFile *const,FileRec> &v) {
	__rb_tree_node<pair<const ResFile *const,FileRec> > *y;
	__rb_tree_node<pair<const ResFile *const,FileRec> > *x;
	bool comp;
	__rb_tree_iterator<pair<const ResFile *const,FileRec> > j;
	rb_tree<const ResFile *,pair<const ResFile *const,FileRec>,select1st<pair<const ResFile *const,FileRec> >,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	pair<const ResFile *const,FileRec> &x;
	__rb_tree_node<pair<const ResFile *const,FileRec> > *x;
	__rb_tree_node<pair<const ResFile *const,FileRec> > *x;
	__rb_tree_node<pair<const ResFile *const,FileRec> > *x;
	__rb_tree_node<pair<const ResFile *const,FileRec> > *x;
	__rb_tree_iterator<pair<const ResFile *const,FileRec> > *this;
	__rb_tree_node<pair<const ResFile *const,FileRec> > *x;
	rb_tree<const ResFile *,pair<const ResFile *const,FileRec>,select1st<pair<const ResFile *const,FileRec> >,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	rb_tree<const ResFile *,pair<const ResFile *const,FileRec>,select1st<pair<const ResFile *const,FileRec> >,less<const ResFile *>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const ResFile *const,FileRec> > *x;
	pair<__rb_tree_iterator<pair<const ResFile *const,FileRec> >,bool> *this;
	__rb_tree_node_base *y;
	__rb_tree_node_base *y;
	__rb_tree_node_base *x;
	__rb_tree_node<pair<const ResFile *const,FileRec> > *x;
	pair<const ResFile *const,FileRec> &x;
	pair<__rb_tree_iterator<pair<const ResFile *const,FileRec> >,bool> *this;
	pair<__rb_tree_iterator<pair<const ResFile *const,FileRec> >,bool> *this;
	
  bool bVar1;
  __rb_tree_iterator_pair_const_ResFile__const_FileRec___ _Var2;
  __rb_tree_base_iterator _Var3;
  ResFile *x_;
  pair_const_ResFile__const_FileRec_ *in_a2_lo;
  __rb_tree_base_iterator y_;
  __rb_tree_iterator_pair_const_ResFile__const_FileRec___ j;
  
  y_.node = (__rb_tree_node_base *)v->first;
  x_ = (ResFile *)(((ResFile *)y_.node)->animTables).pData;
  bVar1 = true;
  if (x_ != (ResFile *)0x0) {
    do {
      y_.node = (__rb_tree_node_base *)x_;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
      bVar1 = in_a2_lo->first < (ResFile *)((VECTOR_AStringSet_ *)((int)y_.node + 0x10))->pData;
                    /* end of inlined section */
      if (bVar1) {
        x_ = (ResFile *)(((ResFile *)y_.node)->propTables).pData;
      }
      else {
        x_ = (ResFile *)(((ResFile *)y_.node)->BHAV).pData;
      }
    } while (x_ != (ResFile *)0x0);
  }
  j.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)y_.node;
  if (bVar1) {
    if ((ResFile *)y_.node == (ResFile *)(v->first->propTables).pData) goto LAB_00261fa0;
                    /* end of inlined section */
    if ((*(int *)y_.node == 0) &&
       (*(ResFile **)&((VECTOR_AnimRefTable_ *)&(y_.node)->parent)->pData->resID ==
        (ResFile *)y_.node)) {
      j.field0_0x0.node =
           (__rb_tree_base_iterator)((VECTOR_BehaviorTree_ *)&(y_.node)->right)->pData;
    }
    else {
      j.field0_0x0.node = (__rb_tree_base_iterator)((VECTOR_PropRefTable_ *)&(y_.node)->left)->pData
      ;
      if (j.field0_0x0.node == (__rb_tree_node_base *)0x0) {
        j.field0_0x0.node =
             (__rb_tree_base_iterator)((VECTOR_AnimRefTable_ *)&(y_.node)->parent)->pData;
        _Var3.node = (__rb_tree_node_base *)j.field0_0x0.node;
        if ((ResFile *)y_.node == *(ResFile **)((int)j.field0_0x0.node + 8)) {
          do {
            j.field0_0x0.node = (__rb_tree_base_iterator)(_Var3.node)->parent;
            bVar1 = _Var3.node == *(__rb_tree_node_base **)((int)j.field0_0x0.node + 8);
            _Var3.node = (__rb_tree_node_base *)j.field0_0x0.node;
          } while (bVar1);
        }
      }
      else if (*(__rb_tree_node_base **)((int)j.field0_0x0.node + 0xc) != (__rb_tree_node_base *)0x0
              ) {
        for (j.field0_0x0.node = *(__rb_tree_base_iterator *)((int)j.field0_0x0.node + 0xc);
            *(__rb_tree_node_base **)((int)j.field0_0x0.node + 0xc) != (__rb_tree_node_base *)0x0;
            j.field0_0x0.node = *(__rb_tree_base_iterator *)((int)j.field0_0x0.node + 0xc)) {
        }
      }
    }
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
                    /* end of inlined section */
  if (in_a2_lo->first <= *(ResFile **)((int)j.field0_0x0.node + 0x10)) {
    this->header = (__rb_tree_node_pair_const_ResFile__const_FileRec___ *)j.field0_0x0.node;
                    /* inlined from Pair.h */
    *(undefined4 *)&this->field_0x4 = 0;
    return (pair___rb_tree_iterator_pair_const_ResFile__const_FileRec____bool_)(long)(int)this;
  }
LAB_00261fa0:
  _Var2 = __insert__t7rb_tree5ZPC7ResFileZt4pair2ZCPC7ResFileZ7FileRecZt9select1st1Zt4pair2ZCPC7ResFileZ7FileRecZt4less1ZPC7ResFileZt23__malloc_alloc_template1i0P19__rb_tree_node_baseT1RCt4pair2ZCPC7ResFileZ7FileRec
                    ((rb_tree_const_ResFile___pair_const_ResFile__const_FileRec__select1st_pair_const_ResFile__const_FileRec____less_const_ResFile______malloc_alloc_template_0___
                      *)v,(__rb_tree_node_base *)x_,y_.node,in_a2_lo);
                    /* inlined from Pair.h */
  this->header = (__rb_tree_node_pair_const_ResFile__const_FileRec___ *)_Var2.field0_0x0.node;
                    /* end of inlined section */
  *(undefined4 *)&this->field_0x4 = 1;
                    /* end of inlined section */
  return (pair___rb_tree_iterator_pair_const_ResFile__const_FileRec____bool_)(long)(int)this;
}

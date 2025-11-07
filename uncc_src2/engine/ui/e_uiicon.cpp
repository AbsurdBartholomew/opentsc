// STATUS: NOT STARTED

#include "e_uiicon.h"

EVec4 EUIIcon::m_vColors[10] = {
	/* [0] = */ {
		/* . = */ {
			/* .d = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* . = */ {
				/* .x = */ 0.f,
				/* .y = */ 0.f,
				/* .z = */ 0.f,
				/* .w = */ 0.f
			}
		}
	},
	/* [1] = */ {
		/* . = */ {
			/* .d = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* . = */ {
				/* .x = */ 0.f,
				/* .y = */ 0.f,
				/* .z = */ 0.f,
				/* .w = */ 0.f
			}
		}
	},
	/* [2] = */ {
		/* . = */ {
			/* .d = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* . = */ {
				/* .x = */ 0.f,
				/* .y = */ 0.f,
				/* .z = */ 0.f,
				/* .w = */ 0.f
			}
		}
	},
	/* [3] = */ {
		/* . = */ {
			/* .d = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* . = */ {
				/* .x = */ 0.f,
				/* .y = */ 0.f,
				/* .z = */ 0.f,
				/* .w = */ 0.f
			}
		}
	},
	/* [4] = */ {
		/* . = */ {
			/* .d = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* . = */ {
				/* .x = */ 0.f,
				/* .y = */ 0.f,
				/* .z = */ 0.f,
				/* .w = */ 0.f
			}
		}
	},
	/* [5] = */ {
		/* . = */ {
			/* .d = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* . = */ {
				/* .x = */ 0.f,
				/* .y = */ 0.f,
				/* .z = */ 0.f,
				/* .w = */ 0.f
			}
		}
	},
	/* [6] = */ {
		/* . = */ {
			/* .d = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* . = */ {
				/* .x = */ 0.f,
				/* .y = */ 0.f,
				/* .z = */ 0.f,
				/* .w = */ 0.f
			}
		}
	},
	/* [7] = */ {
		/* . = */ {
			/* .d = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* . = */ {
				/* .x = */ 0.f,
				/* .y = */ 0.f,
				/* .z = */ 0.f,
				/* .w = */ 0.f
			}
		}
	},
	/* [8] = */ {
		/* . = */ {
			/* .d = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* . = */ {
				/* .x = */ 0.f,
				/* .y = */ 0.f,
				/* .z = */ 0.f,
				/* .w = */ 0.f
			}
		}
	},
	/* [9] = */ {
		/* . = */ {
			/* .d = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* . = */ {
				/* .x = */ 0.f,
				/* .y = */ 0.f,
				/* .z = */ 0.f,
				/* .w = */ 0.f
			}
		}
	}
};

__vtbl_ptr_type EUIIcon virtual table[16] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIIcon::~EUIIcon,
		/* .__delta2 = */ 12368
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIIcon::Update,
		/* .__delta2 = */ 13552
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIIcon::Draw,
		/* .__delta2 = */ 13472
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::SetPos,
		/* .__delta2 = */ 2768
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::SetBoxDims,
		/* .__delta2 = */ 3560
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::SetBoxDims,
		/* .__delta2 = */ 3592
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::Message,
		/* .__delta2 = */ 3616
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::StateChanged,
		/* .__delta2 = */ 3672
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::OnButtonRepeat,
		/* .__delta2 = */ 3680
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::OnStickRepeat,
		/* .__delta2 = */ 3688
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::GetPos,
		/* .__delta2 = */ 3912
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::AddChild,
		/* .__delta2 = */ 3024
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::RemoveChild,
		/* .__delta2 = */ 3072
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIIcon::ShaderRect,
		/* .__delta2 = */ 12848
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EUIIconDef virtual table[3] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIIconDef::~EUIIconDef,
		/* .__delta2 = */ -25888
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EUIIcon* EUIIcon::EUIIcon(EUIIconDef _def, int activeShdr, int inactiveShdr, int trigger) {
	EUIIconDef *this;
	EUIIconDef *this;
	void *pAddress;
	
  undefined *puVar1;
  int *piVar2;
  EUIVirtualCtrl **ppEVar3;
  uint uVar4;
  uint uVar5;
  EUIIconDef__vtable *pEVar6;
  ulong *puVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  __13EUIObjectNode(&this->field0_0x0);
                    /* inlined from c:/eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_7EUIIcon;
                    /* inlined from c:/eor/src2/engine/ui/e_uiicon.h */
  (this->m_def).__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  (this->m_def).m_flags = 0;
  (this->m_def).m_trigger = 0x40;
  (this->m_def).m_colorIdx = 1;
  (this->m_def).m_pCtrl = (EUIVirtualCtrl *)0x0;
  (this->m_def).m_selColorIdx = 0;
                    /* end of inlined section */
  pEVar6 = (this->m_def).__vtable;
  puVar1 = (undefined *)((int)&_def->m_trigger + 3);
  uVar4 = (uint)puVar1 & 7;
  uVar5 = (uint)_def & 7;
  uVar9 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
          0xffffffffffffffffU >> (uVar4 + 1) * 8 & 0x3a8908) & -1L << (8 - uVar5) * 8 |
          *(ulong *)((int)_def - uVar5) >> uVar5 * 8;
  puVar1 = (undefined *)((int)&_def->m_colorIdx + 3);
  uVar4 = (uint)puVar1 & 7;
  uVar5 = (uint)&_def->m_selColorIdx & 7;
  uVar10 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
           (long)(int)&this->m_def & 0xffffffffffffffffU >> (uVar4 + 1) * 8) &
           -1L << (8 - uVar5) * 8 | *(ulong *)((int)&_def->m_selColorIdx - uVar5) >> uVar5 * 8;
  puVar1 = (undefined *)((int)&_def->__vtable + 3);
  uVar4 = (uint)puVar1 & 7;
  uVar5 = (uint)&_def->m_pCtrl & 7;
  uVar11 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
           0xffffffffffffffffU >> (uVar4 + 1) * 8 & 0x40) & -1L << (8 - uVar5) * 8 |
           *(ulong *)((int)&_def->m_pCtrl - uVar5) >> uVar5 * 8;
  puVar1 = (undefined *)((int)&(this->m_def).m_trigger + 3);
  uVar4 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar4);
  *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | uVar9 >> (7 - uVar4) * 8;
  uVar4 = (uint)&this->m_def & 7;
  puVar7 = (ulong *)((int)&this->m_def - uVar4);
  *puVar7 = uVar9 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  puVar1 = (undefined *)((int)&(this->m_def).m_colorIdx + 3);
  uVar4 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar4);
  *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | uVar10 >> (7 - uVar4) * 8;
  piVar2 = &(this->m_def).m_selColorIdx;
  uVar4 = (uint)piVar2 & 7;
  puVar7 = (ulong *)((int)piVar2 - uVar4);
  *puVar7 = uVar10 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  puVar1 = (undefined *)((int)&(this->m_def).__vtable + 3);
  uVar4 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar4);
  *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | uVar11 >> (7 - uVar4) * 8;
  ppEVar3 = &(this->m_def).m_pCtrl;
  uVar4 = (uint)ppEVar3 & 7;
  puVar7 = (ulong *)((int)ppEVar3 - uVar4);
  *puVar7 = uVar11 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  (this->m_def).__vtable = pEVar6;
  this->m_ActivatedPad = (this->field0_0x0).m_activeCtrl;
  *(undefined4 *)&this->m_pressed = 0;
  this->m_pShaders[1] = (ERShader *)0x0;
  this->m_pShaders[0] = (ERShader *)0x0;
  if ((activeShdr == 0) ||
     (bVar8 = IsValid__16EResourceManagerUi(&_shaderman.field0_0x0,activeShdr), !bVar8)) {
    this->m_pShaders[0] = (ERShader *)0x0;
  }
  else {
    InitActiveShader__7EUIIconi(this,activeShdr);
  }
  if ((activeShdr == 0) ||
     (bVar8 = IsValid__16EResourceManagerUi(&_shaderman.field0_0x0,inactiveShdr), !bVar8)) {
    this->m_pShaders[1] = (ERShader *)0x0;
                    /* inlined from c:/eor/src2/engine/ui/e_uiicon.h */
  }
  else {
    InitInActiveShader__7EUIIconi(this,inactiveShdr);
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/ui/e_uiicon.h */
  _def->__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  return this;
}

void EUIIcon::~EUIIcon(int __in_chrg) {
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_7EUIIcon;
  if (this->m_pShaders[0] != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pShaders[0]->field0_0x0);
  }
  if (this->m_pShaders[1] != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pShaders[1]->field0_0x0);
                    /* inlined from c:/eor/src2/engine/ui/e_uiicon.h */
  }
                    /* end of inlined section */
  this->m_pShaders[0] = (ERShader *)0x0;
                    /* inlined from c:/eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  this->m_pShaders[1] = (ERShader *)0x0;
                    /* inlined from c:/eor/src2/engine/ui/e_uiicon.h */
  (this->m_def).__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
  ___13EUIObjectNode(&this->field0_0x0,__in_chrg);
  return;
}

void EUIIcon::InitActiveShader(int id) {
	NLIterator nli;
	u32 id;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	ETexture *this;
	ETexture *this;
	
  ERShader *pEVar1;
  uint uVar2;
  uint uVar3;
  ENodeListNode *pEVar4;
  
  if (this->m_pShaders[0] != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pShaders[0]->field0_0x0);
  }
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,id,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_maxBackShdrSize[0] = 0;
  this->m_pShaders[0] = pEVar1;
  this->m_maxBackShdrSize[1] = 0;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar4 = (pEVar1->m_rtextureList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar4 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    uVar3 = pEVar4->data;
    while( true ) {
                    /* inlined from /eor/src2/engine/texture/e_texture.h */
      uVar2 = (uint)*(ushort *)(*(int *)(uVar3 + 0x14) + 0x10);
                    /* end of inlined section */
      if (this->m_maxBackShdrSize[0] < uVar2) {
        this->m_maxBackShdrSize[0] = uVar2;
      }
                    /* inlined from /eor/src2/engine/texture/e_texture.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/texture/e_texture.h */
      uVar3 = (uint)*(ushort *)(*(int *)(uVar3 + 0x14) + 0x12);
                    /* end of inlined section */
      if (this->m_maxBackShdrSize[1] < uVar3) {
        this->m_maxBackShdrSize[1] = uVar3;
      }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar4 = pEVar4->pNext;
                    /* end of inlined section */
      if (pEVar4 == (ENodeListNode *)0x0) break;
      uVar3 = pEVar4->data;
    }
  }
  return;
}

void EUIIcon::InitInActiveShader(int id) {
	NLIterator nli;
	u32 id;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	ETexture *this;
	ETexture *this;
	
  ERShader *pEVar1;
  uint uVar2;
  uint uVar3;
  ENodeListNode *pEVar4;
  
  if (this->m_pShaders[1] != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pShaders[1]->field0_0x0);
  }
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,id,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_maxBackShdrSize[1][0] = 0;
  this->m_pShaders[1] = pEVar1;
  this->m_maxBackShdrSize[1][1] = 0;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar4 = (pEVar1->m_rtextureList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar4 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    uVar3 = pEVar4->data;
    while( true ) {
                    /* inlined from /eor/src2/engine/texture/e_texture.h */
      uVar2 = (uint)*(ushort *)(*(int *)(uVar3 + 0x14) + 0x10);
                    /* end of inlined section */
      if (this->m_maxBackShdrSize[1][0] < uVar2) {
        this->m_maxBackShdrSize[1][0] = uVar2;
      }
                    /* inlined from /eor/src2/engine/texture/e_texture.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/texture/e_texture.h */
      uVar3 = (uint)*(ushort *)(*(int *)(uVar3 + 0x14) + 0x12);
                    /* end of inlined section */
      if (this->m_maxBackShdrSize[1][1] < uVar3) {
        this->m_maxBackShdrSize[1][1] = uVar3;
      }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar4 = pEVar4->pNext;
                    /* end of inlined section */
      if (pEVar4 == (ENodeListNode *)0x0) break;
      uVar3 = pEVar4->data;
    }
  }
  return;
}

void EUIIcon::ShaderRect(ERC *prc, int i, EVec4 &color) {
	float x;
	float y;
	float absratiox;
	float absratioy;
	EGraphics *this;
	float x;
	float y;
	
  uint uVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  float fVar2;
  float fVar3;
  float local_80;
  float local_7c;
  undefined4 local_70;
  undefined4 local_6c;
  float local_60;
  float local_5c;
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
  
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  if (this->m_pShaders[i] != (ERShader *)0x0) {
    Select__8ERShaderP3ERCi(this->m_pShaders[i],prc,0);
    if (((this->m_def).m_flags & 1) == 0) {
                    /* end of inlined section */
                    /* inlined from e_graphics.h */
                    /* end of inlined section */
      uVar1 = this->m_maxBackShdrSize[i][0];
      if ((int)uVar1 < 0) {
        fVar2 = (float)(uVar1 & 1 | uVar1 >> 1);
        fVar2 = fVar2 + fVar2;
      }
      else {
        fVar2 = (float)uVar1;
      }
      uVar1 = this->m_maxBackShdrSize[i][1];
                    /* inlined from e_graphics.h */
                    /* end of inlined section */
      if ((int)uVar1 < 0) {
        fVar3 = (float)(uVar1 & 1 | uVar1 >> 1);
        fVar3 = fVar3 + fVar3;
      }
      else {
        fVar3 = (float)uVar1;
      }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_80 = (this->field0_0x0).m_pos.field0_0x0.d[0];
                    /* end of inlined section */
      local_60 = (this->field0_0x0).m_WDH.field0_0x0.d[0] / (fVar2 / (float)_pGfx->m_xscreen);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_7c = (this->field0_0x0).m_pos.field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_5c = (this->field0_0x0).m_WDH.field0_0x0.d[2] / (fVar3 / (float)_pGfx->m_yscreen);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].ClipRect)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_80,&local_60
                 ,color);
    }
    else {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_7c = (this->field0_0x0).m_pos.field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_80 = (this->field0_0x0).m_pos.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_6c = 0x3f800000;
      local_70 = 0x3f800000;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].ClipRect)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_80,&local_70
                 ,color);
    }
  }
  return;
}

void EUIIcon::DrawShader(ERC *prc) {
	int cidx;
	float cint;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	float scaler;
	EVec4 &vVec;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	
  uint uVar1;
  EUIObjectNode__vtable *pEVar2;
  int iVar3;
  undefined8 unaff_retaddr;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).m_flags >> 3 & 1U) == 0) {
    iVar3 = (this->m_def).m_colorIdx;
  }
  else {
    iVar3 = (this->m_def).m_selColorIdx;
  }
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
  uVar1 = (this->field0_0x0).m_flags;
                    /* end of inlined section */
  local_18 = 0.65;
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)uVar1 >> 2 & 1U) != 0) {
    local_18 = 1.0;
  }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  pEVar2 = (this->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_14 = local_18 * _7EUIIcon_m_vColors[iVar3].field0_0x0.d[3];
  local_20 = local_18 * _7EUIIcon_m_vColors[iVar3].field0_0x0.d[0];
  local_1c = local_18 * _7EUIIcon_m_vColors[iVar3].field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_18 = local_18 * _7EUIIcon_m_vColors[iVar3].field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  (*(code *)pEVar2[2].EUIObjectNode)
            ((int)this->m_maxBackShdrSize[-0xc] + *(short *)(pEVar2 + 2) + 4,prc,
             (int)uVar1 >> 3 & 1U ^ 1,&local_20);
  return;
}

void EUIIcon::Draw(ERC *prc) {
	EUIObjectNode *this;
	
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).m_flags >> 1 & 1U) != 0) {
    DrawShader__7EUIIconP3ERC(this,prc);
    DrawChildren__13EUIObjectNodeP3ERC(&this->field0_0x0,prc);
  }
  return;
}

void EUIIcon::Update() {
	EUIObjectNode *this;
	int i;
	
  EUIVirtualCtrl *pEVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  EUIObjectNode *pEVar5;
  int iVar6;
  
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((this->field0_0x0).m_flags & 4) == 0) {
    return;
  }
  Update__13EUIObjectNode(&this->field0_0x0);
  pEVar1 = (this->m_def).m_pCtrl;
  if (pEVar1 == (EUIVirtualCtrl *)0x0) {
    iVar6 = GetButton__7EUIIcon(this);
    if (iVar6 == 0) {
      return;
    }
    uVar2 = (this->m_def).m_flags;
    if ((uVar2 & 2) != 0) {
      pEVar5 = (this->field0_0x0).m_pParent;
      goto LAB_002a36e8;
    }
    if ((this->field0_0x0).m_activeCtrl != -1) {
      pcVar3 = (code *)_13EUIObjectNode_m_uiSfxSelect;
      if ((((uVar2 & 0xffffffc5) == 0) &&
          (pcVar3 = (code *)_13EUIObjectNode_m_uiSfxBack, (uVar2 & 8) == 0)) &&
         (pcVar3 = (code *)_13EUIObjectNode_m_uiSfxNext, (uVar2 & 0x20) == 0)) {
        if ((uVar2 & 0x10) == 0) {
          pEVar5 = (this->field0_0x0).m_pParent;
        }
        else {
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
          if (_13EUIObjectNode_m_uiSfxError == (undefined1 *)0x0) {
            pEVar5 = (this->field0_0x0).m_pParent;
          }
          else {
            (*(code *)_13EUIObjectNode_m_uiSfxError)();
                    /* end of inlined section */
            pEVar5 = (this->field0_0x0).m_pParent;
          }
        }
      }
      else if (pcVar3 == (code *)0x0) {
        pEVar5 = (this->field0_0x0).m_pParent;
      }
      else {
        (*pcVar3)();
                    /* end of inlined section */
        pEVar5 = (this->field0_0x0).m_pParent;
      }
      goto LAB_002a36e8;
    }
  }
  else {
    iVar6 = (this->field0_0x0).m_activeCtrl;
    if (iVar6 != -1) {
      lVar4 = (*(code *)pEVar1->__vtable[1].GetBut)
                        ((int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[1].ClearBut,iVar6
                         ,(this->m_def).m_trigger);
      if (lVar4 == 0) {
        return;
      }
      pEVar5 = (this->field0_0x0).m_pParent;
      if (pEVar5 != (EUIObjectNode *)0x0) {
        (*(code *)pEVar5->__vtable[1].EUIObjectNode)
                  ((int)&(pEVar5->m_ChildList).field0_0x0.m_l.m_pHead +
                   (int)*(short *)(pEVar5->__vtable + 1),this,1);
      }
      uVar2 = (this->m_def).m_flags;
      pcVar3 = (code *)_13EUIObjectNode_m_uiSfxSelect;
      if ((((uVar2 & 0xffffffc5) == 0) &&
          (pcVar3 = (code *)_13EUIObjectNode_m_uiSfxBack, (uVar2 & 8) == 0)) &&
         ((pcVar3 = (code *)_13EUIObjectNode_m_uiSfxNext, (uVar2 & 0x20) == 0 &&
          (pcVar3 = (code *)_13EUIObjectNode_m_uiSfxError, (uVar2 & 0x10) == 0)))) {
        return;
      }
      if (pcVar3 == (code *)0x0) {
        return;
      }
      (*pcVar3)();
      return;
                    /* end of inlined section */
    }
    iVar6 = 0;
    if (_nCtrlPads < 1) {
      return;
    }
    pEVar1 = (this->m_def).m_pCtrl;
    while( true ) {
      lVar4 = (*(code *)pEVar1->__vtable[1].GetBut)
                        ((int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[1].ClearBut,iVar6
                         ,(this->m_def).m_trigger);
      iVar6 = iVar6 + 1;
      if (lVar4 != 0) break;
      if (_nCtrlPads <= iVar6) {
        return;
      }
      pEVar1 = (this->m_def).m_pCtrl;
    }
  }
  pEVar5 = (this->field0_0x0).m_pParent;
LAB_002a36e8:
  if (pEVar5 != (EUIObjectNode *)0x0) {
    (*(code *)pEVar5->__vtable[1].EUIObjectNode)
              ((int)&(pEVar5->m_ChildList).field0_0x0.m_l.m_pHead +
               (int)*(short *)(pEVar5->__vtable + 1),this,1);
  }
  return;
}

int EUIIcon::GetButton() {
	int i;
	int retval;
	
  bool bVar1;
  int iVar2;
  EUIObjectNode *pEVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  EController **ppEVar7;
  
  iVar6 = (this->m_def).m_trigger;
  if (iVar6 == -1) {
    return 0;
  }
  iVar2 = (this->field0_0x0).m_activeCtrl;
  if (iVar2 == -1) {
    if (*(int *)&this->m_pressed != 0) {
      uVar4 = GetDownButtons__11EControlleri(_ctrlPads[this->m_ActivatedPad],iVar6);
      if (uVar4 == 0) {
        pEVar3 = (this->field0_0x0).m_pParent;
        if (pEVar3 != (EUIObjectNode *)0x0) {
          (*(code *)pEVar3->__vtable[1].EUIObjectNode)
                    ((int)&(pEVar3->m_ChildList).field0_0x0.m_l.m_pHead +
                     (int)*(short *)(pEVar3->__vtable + 1),this,2);
        }
        uVar4 = (this->m_def).m_flags;
        pcVar5 = (code *)_13EUIObjectNode_m_uiSfxSelect;
        if ((((uVar4 & 0xffffffc5) == 0) &&
            (pcVar5 = (code *)_13EUIObjectNode_m_uiSfxBack, (uVar4 & 8) == 0)) &&
           (pcVar5 = (code *)_13EUIObjectNode_m_uiSfxNext, (uVar4 & 0x20) == 0)) {
          if ((uVar4 & 0x10) == 0) {
            *(undefined4 *)&this->m_pressed = 0;
          }
          else {
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
            if (_13EUIObjectNode_m_uiSfxError == (undefined1 *)0x0) {
              *(undefined4 *)&this->m_pressed = 0;
            }
            else {
              (*(code *)_13EUIObjectNode_m_uiSfxError)();
                    /* end of inlined section */
              *(undefined4 *)&this->m_pressed = 0;
            }
          }
        }
        else if (pcVar5 == (code *)0x0) {
          *(undefined4 *)&this->m_pressed = 0;
        }
        else {
          (*pcVar5)();
                    /* end of inlined section */
          *(undefined4 *)&this->m_pressed = 0;
        }
        iVar6 = *(int *)&this->m_pressed;
      }
      else {
        iVar6 = *(int *)&this->m_pressed;
      }
      if (iVar6 != 0) {
        return 0;
      }
    }
    iVar6 = 0;
    bVar1 = 0 < _nCtrlPads;
    *(undefined4 *)&this->m_pressed = 0;
    if (bVar1) {
      ppEVar7 = _ctrlPads;
      do {
        uVar4 = GetDownButtons__11EControlleri(*ppEVar7,(this->m_def).m_trigger);
        if (uVar4 != 0) {
          this->m_ActivatedPad = iVar6;
          *(undefined4 *)&this->m_pressed = 1;
          return uVar4;
        }
        iVar6 = iVar6 + 1;
        ppEVar7 = ppEVar7 + 1;
      } while (iVar6 < _nCtrlPads);
    }
  }
  else {
    if (*(int *)&this->m_pressed == 0) {
      uVar4 = GetDownButtons__11EControlleri(_ctrlPads[iVar2],iVar6);
      if (uVar4 != 0) {
        iVar6 = (this->field0_0x0).m_activeCtrl;
        *(undefined4 *)&this->m_pressed = 1;
        this->m_ActivatedPad = iVar6;
        return 1;
      }
      if (*(int *)&this->m_pressed == 0) {
        return 0;
      }
    }
    uVar4 = GetDownButtons__11EControlleri
                      (_ctrlPads[(this->field0_0x0).m_activeCtrl],(this->m_def).m_trigger);
    if (uVar4 != 0) {
      return 0;
    }
    pEVar3 = (this->field0_0x0).m_pParent;
    if (pEVar3 != (EUIObjectNode *)0x0) {
      (*(code *)pEVar3->__vtable[1].EUIObjectNode)
                ((int)&(pEVar3->m_ChildList).field0_0x0.m_l.m_pHead +
                 (int)*(short *)(pEVar3->__vtable + 1),this,2);
    }
    uVar4 = (this->m_def).m_flags;
    pcVar5 = (code *)_13EUIObjectNode_m_uiSfxSelect;
    if ((((uVar4 & 0xffffffc5) == 0) &&
        (pcVar5 = (code *)_13EUIObjectNode_m_uiSfxBack, (uVar4 & 8) == 0)) &&
       (pcVar5 = (code *)_13EUIObjectNode_m_uiSfxNext, (uVar4 & 0x20) == 0)) {
      if ((uVar4 & 0x10) == 0) {
        *(undefined4 *)&this->m_pressed = 0;
      }
      else {
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
        if (_13EUIObjectNode_m_uiSfxError == (undefined1 *)0x0) {
          *(undefined4 *)&this->m_pressed = 0;
        }
        else {
          (*(code *)_13EUIObjectNode_m_uiSfxError)();
                    /* end of inlined section */
          *(undefined4 *)&this->m_pressed = 0;
        }
      }
    }
    else if (pcVar5 == (code *)0x0) {
      *(undefined4 *)&this->m_pressed = 0;
    }
    else {
      (*pcVar5)();
                    /* end of inlined section */
      *(undefined4 *)&this->m_pressed = 0;
    }
  }
  return 0;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  bool bVar1;
  int iVar2;
  
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* end of inlined section */
    iVar2 = 8;
    do {
      bVar1 = iVar2 != -1;
      iVar2 = iVar2 + -1;
    } while (bVar1);
  }
  return;
}

void EUIIconDef::~EUIIconDef(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void EUIIcon::InitShaders(int active, int inactive) {
  bool bVar1;
  
  bVar1 = IsValid__16EResourceManagerUi(&_shaderman.field0_0x0,active);
  if (bVar1) {
    InitActiveShader__7EUIIconi(this,active);
  }
  bVar1 = IsValid__16EResourceManagerUi(&_shaderman.field0_0x0,inactive);
  if (bVar1) {
    InitInActiveShader__7EUIIconi(this,inactive);
  }
  return;
}

void EUIIcon::SetDef(EUIIconDef &_def) {
  undefined *puVar1;
  int *piVar2;
  EUIVirtualCtrl **ppEVar3;
  uint uVar4;
  uint uVar5;
  EUIIconDef__vtable *pEVar6;
  ulong *puVar7;
  ulong in_v1;
  ulong uVar8;
  ulong in_a2;
  ulong uVar9;
  ulong in_a3;
  ulong uVar10;
  
  pEVar6 = (this->m_def).__vtable;
  puVar1 = (undefined *)((int)&_def->m_trigger + 3);
  uVar4 = (uint)puVar1 & 7;
  uVar5 = (uint)_def & 7;
  uVar8 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
          in_v1 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
          *(ulong *)((int)_def - uVar5) >> uVar5 * 8;
  puVar1 = (undefined *)((int)&_def->m_colorIdx + 3);
  uVar4 = (uint)puVar1 & 7;
  uVar5 = (uint)&_def->m_selColorIdx & 7;
  uVar9 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
          in_a2 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
          *(ulong *)((int)&_def->m_selColorIdx - uVar5) >> uVar5 * 8;
  puVar1 = (undefined *)((int)&_def->__vtable + 3);
  uVar4 = (uint)puVar1 & 7;
  uVar5 = (uint)&_def->m_pCtrl & 7;
  uVar10 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
           in_a3 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
           *(ulong *)((int)&_def->m_pCtrl - uVar5) >> uVar5 * 8;
  puVar1 = (undefined *)((int)&(this->m_def).m_trigger + 3);
  uVar4 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar4);
  *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | uVar8 >> (7 - uVar4) * 8;
  uVar4 = (uint)&this->m_def & 7;
  puVar7 = (ulong *)((int)&this->m_def - uVar4);
  *puVar7 = uVar8 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  puVar1 = (undefined *)((int)&(this->m_def).m_colorIdx + 3);
  uVar4 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar4);
  *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | uVar9 >> (7 - uVar4) * 8;
  piVar2 = &(this->m_def).m_selColorIdx;
  uVar4 = (uint)piVar2 & 7;
  puVar7 = (ulong *)((int)piVar2 - uVar4);
  *puVar7 = uVar9 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  puVar1 = (undefined *)((int)&(this->m_def).__vtable + 3);
  uVar4 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar4);
  *puVar7 = *puVar7 & -1L << (uVar4 + 1) * 8 | uVar10 >> (7 - uVar4) * 8;
  ppEVar3 = &(this->m_def).m_pCtrl;
  uVar4 = (uint)ppEVar3 & 7;
  puVar7 = (ulong *)((int)ppEVar3 - uVar4);
  *puVar7 = uVar10 << uVar4 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  (this->m_def).__vtable = pEVar6;
  return;
}

EUIIconDef& EUIIcon::GetDef() {
  return &this->m_def;
}

void EUIIcon::SetIconColor(int which, EVec4 &color) {
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (color->field0_0x0).d[1];
  fVar2 = (color->field0_0x0).d[2];
  fVar3 = (color->field0_0x0).d[3];
  _7EUIIcon_m_vColors[which].field0_0x0.d[0] = (color->field0_0x0).d[0];
  _7EUIIcon_m_vColors[which].field0_0x0.d[1] = fVar1;
  _7EUIIcon_m_vColors[which].field0_0x0.d[2] = fVar2;
  _7EUIIcon_m_vColors[which].field0_0x0.d[3] = fVar3;
  return;
}

EVec4& EUIIcon::GetIconColor(int which) {
  return _7EUIIcon_m_vColors + which;
}

void global constructors keyed to EUIIcon::m_vColors() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

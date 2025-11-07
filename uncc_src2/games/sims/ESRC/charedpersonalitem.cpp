// STATUS: NOT STARTED

#include "charedpersonalitem.h"

float _arrowpos = 0.245f;

__vtbl_ptr_type ECharedGender virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedGender::~ECharedGender,
		/* .__delta2 = */ -14808
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedGender::Update,
		/* .__delta2 = */ -17096
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedGender::Draw,
		/* .__delta2 = */ -16656
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ECharedAge virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedAge::~ECharedAge,
		/* .__delta2 = */ -14968
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedAge::Update,
		/* .__delta2 = */ -18832
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedAge::Draw,
		/* .__delta2 = */ -18392
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ECharedName virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedName::~ECharedName,
		/* .__delta2 = */ -15120
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedName::Update,
		/* .__delta2 = */ -19616
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedName::Draw,
		/* .__delta2 = */ -19512
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ECharedTextIcon virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedTextIcon::~ECharedTextIcon,
		/* .__delta2 = */ -15208
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::Update,
		/* .__delta2 = */ 2272
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedTextIcon::Draw,
		/* .__delta2 = */ -20896
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ECharedBirthSign virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedBirthSign::~ECharedBirthSign,
		/* .__delta2 = */ -22616
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedBirthSign::Update,
		/* .__delta2 = */ -21200
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedBirthSign::Draw,
		/* .__delta2 = */ -22024
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ECharedPersonalItem virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedPersonalItem::~ECharedPersonalItem,
		/* .__delta2 = */ -25208
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedPersonalItem::Update,
		/* .__delta2 = */ -23456
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedPersonalItem::Draw,
		/* .__delta2 = */ -24832
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ECharedPersonalItem* ECharedPersonalItem::ECharedPersonalItem() {
  __13EUIObjectNode(&this->field0_0x0);
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_19ECharedPersonalItem;
  Init__19ECharedPersonalItem(this);
  return this;
}

void ECharedPersonalItem::~ECharedPersonalItem(int __in_chrg) {
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_19ECharedPersonalItem;
  CleanUp__19ECharedPersonalItem(this);
  ___13EUIObjectNode(&this->field0_0x0,__in_chrg);
  return;
}

void ECharedPersonalItem::Init() {
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ERShader *pEVar4;
  ERFont *pEVar5;
  
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_nNumBlocksFilled = '\0';
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_fLeftOffset = 0.12;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_fTotalWidth = 0.267;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar4 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xa25eba9a,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pBlankShdr = pEVar4;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar4 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xe3e852f9,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pLeftArrowShdr = pEVar4;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar4 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x19e76f9a,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pRightArrowShdr = pEVar4;
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
  pEVar5 = (ERFont *)
           AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pFont = pEVar5;
  uVar3 = _WHITE.field0_0x0.d[3];
  uVar2 = _WHITE.field0_0x0.d[2];
  uVar1 = _WHITE.field0_0x0.d[1];
  (this->m_vLeftArrowColor).field0_0x0.d[0] = _WHITE.field0_0x0.d[0];
  (this->m_vLeftArrowColor).field0_0x0.d[1] = uVar1;
  (this->m_vLeftArrowColor).field0_0x0.d[2] = uVar2;
  (this->m_vLeftArrowColor).field0_0x0.d[3] = uVar3;
  uVar3 = _WHITE.field0_0x0.d[3];
  uVar2 = _WHITE.field0_0x0.d[2];
  uVar1 = _WHITE.field0_0x0.d[1];
  (this->m_vRightArrowColor).field0_0x0.d[0] = _WHITE.field0_0x0.d[0];
  (this->m_vRightArrowColor).field0_0x0.d[1] = uVar1;
  (this->m_vRightArrowColor).field0_0x0.d[2] = uVar2;
  (this->m_vRightArrowColor).field0_0x0.d[3] = uVar3;
  return;
}

void ECharedPersonalItem::CleanUp() {
  DelRef__9EResource(&this->m_pBlankShdr->field0_0x0);
  this->m_pBlankShdr = (ERShader *)0x0;
  DelRef__9EResource(&this->m_pLeftArrowShdr->field0_0x0);
  this->m_pLeftArrowShdr = (ERShader *)0x0;
  DelRef__9EResource(&this->m_pRightArrowShdr->field0_0x0);
  this->m_pRightArrowShdr = (ERShader *)0x0;
  DelRef__9EResource(&this->m_pFont->field0_0x0);
  this->m_pFont = (ERFont *)0x0;
  return;
}

void ECharedPersonalItem::Draw(ERC *prc) {
	int i;
	float fLeft;
	float fOffset;
	float fRectTop;
	float fRectBottom;
	EUIObjectNode *this;
	EUIObjectNode *this;
	float y;
	ERFont *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	float x;
	float y;
	float y;
	float x;
	float y;
	float y;
	
  ERFont *pEVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  int iVar5;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_140;
  float local_13c;
  float local_130;
  float local_12c;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b0;
  undefined4 uStack_ac;
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
  
  local_90 = (undefined4)unaff_s3;
  uStack_8c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_b0 = (undefined4)unaff_s1;
  uStack_ac = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_retaddr;
  uStack_5c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_70 = (undefined4)unaff_s5;
  uStack_6c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_80 = (undefined4)unaff_s4;
  uStack_7c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_a0 = (undefined4)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_c0 = (undefined4)unaff_s0;
  uStack_bc = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).m_flags >> 1 & 1U) != 0) {
    Select__8ERShaderP3ERCi(this->m_pBlankShdr,prc,0);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (((int)(this->field0_0x0).m_flags >> 3 & 1U) == 0) {
      Select__6ERFontP3ERC(this->m_pFont,prc);
      SetSize__6ERFontffb(this->m_pFont,14.0,1.0,true);
      uVar4 = _WHITE.field0_0x0.d[3];
      uVar3 = _WHITE.field0_0x0.d[2];
      uVar2 = _WHITE.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      pEVar1 = this->m_pFont;
      (pEVar1->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
      (pEVar1->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
      (pEVar1->m_vColor).field0_0x0.d[2] = uVar3;
      (pEVar1->m_vColor).field0_0x0.d[3] = uVar4;
    }
    else {
      local_130 = (this->field0_0x0).m_pos.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_13c = (this->field0_0x0).m_pos.field0_0x0.d[2];
                    /* end of inlined section */
      local_140 = local_130 + 0.143;
      local_130 = local_130 + 0.243;
      local_12c = local_13c + 0.027083;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_120 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_11c = 0x3f800000;
      local_110 = 0x3f800000;
      local_10c = 0;
      local_100 = 0;
      local_fc = 0;
      local_f8 = 0;
      local_f4 = 0x3f800000;
                    /* end of inlined section */
      uVar7 = 0;
      (*(code *)prc->__vtable[1].DisplayList)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_140,
                 &local_130,&local_120,&local_110,&local_100);
      Select__8ERShaderP3ERCi(this->m_pLeftArrowShdr,prc,0);
      local_13c = (this->field0_0x0).m_pos.field0_0x0.d[2] - 0.022;
      local_140 = (this->field0_0x0).m_pos.field0_0x0.d[0] + this->m_fLeftOffset + 0.004;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_130 = 1.0;
      local_12c = 1.0;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].ClipRect)
                (uVar7,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_140,
                 &local_130,&this->m_vLeftArrowColor);
      Select__8ERShaderP3ERCi(this->m_pRightArrowShdr,prc,0);
      local_13c = (this->field0_0x0).m_pos.field0_0x0.d[2] - 0.022;
      local_140 = (this->field0_0x0).m_pos.field0_0x0.d[0] + 0.125 + this->m_fLeftOffset;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_130 = 1.0;
      local_12c = 1.0;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].ClipRect)
                (uVar7,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_140,
                 &local_130,&this->m_vRightArrowColor);
      Select__6ERFontP3ERC(this->m_pFont,prc);
      SetSize__6ERFontffb(this->m_pFont,14.0,1.0,true);
      uVar4 = _CYAN.field0_0x0.d[3];
      uVar3 = _CYAN.field0_0x0.d[2];
      uVar2 = _CYAN.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      pEVar1 = this->m_pFont;
                    /* end of inlined section */
      (pEVar1->m_vColor).field0_0x0.d[0] = (float)_CYAN.field0_0x0._0_8_;
      (pEVar1->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
      (pEVar1->m_vColor).field0_0x0.d[2] = uVar3;
      (pEVar1->m_vColor).field0_0x0.d[3] = uVar4;
    }
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    local_140 = (this->field0_0x0).m_pos.field0_0x0.d[0] + this->m_fLeftOffset;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    local_13c = (this->field0_0x0).m_pos.field0_0x0.d[2] - 0.005;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    iVar5 = 0;
    local_130 = local_140;
    local_12c = local_13c;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,this->m_szDescription[0],true,(EVec2 *)&local_130,E_FAX_RIGHT,
               E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    local_13c = (this->field0_0x0).m_pos.field0_0x0.d[2] - 0.005;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    local_140 = (this->field0_0x0).m_pos.field0_0x0.d[0] + 0.147 + this->m_fLeftOffset;
    local_130 = local_140;
    local_12c = local_13c;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,this->m_szDescription[1],true,(EVec2 *)&local_130,E_FAX_LEFT,
               E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
    fVar6 = (this->field0_0x0).m_pos.field0_0x0.d[2];
    fVar11 = (this->field0_0x0).m_pos.field0_0x0.d[0] + 0.026125 + this->m_fLeftOffset;
    fVar9 = fVar6 + 0.025;
    fVar6 = fVar6 + 0.002083;
    Select__8ERShaderP3ERCi(this->m_pBlankShdr,prc,0);
    if (this->m_nNumBlocksFilled != '\0') {
      fVar10 = 0.0065625;
      uVar7 = 0x3f000000;
      uVar8 = 0x3f666666;
      do {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_120 = 0;
                    /* end of inlined section */
        local_140 = fVar11 + (float)iVar5 * 0.0096875;
        local_130 = local_140 + fVar10;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_11c = 0x3f800000;
        local_f0 = 0x3f800000;
        local_ec = 0;
        local_e0 = 0x3dcccccd;
        local_d4 = 0x3f800000;
                    /* end of inlined section */
        iVar5 = iVar5 + 1;
        local_13c = fVar6;
        local_12c = fVar9;
        local_dc = uVar7;
        local_d8 = uVar8;
        (*(code *)prc->__vtable[1].DisplayList)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_140,
                   (EVec2 *)&local_130,&local_120,&local_f0,&local_e0);
      } while (iVar5 < (int)(uint)this->m_nNumBlocksFilled);
    }
    if (iVar5 < 10) {
      fVar10 = 0.0065625;
      local_11c = 0x3f800000;
      do {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_120 = 0;
                    /* end of inlined section */
        local_140 = fVar11 + (float)iVar5 * 0.0096875;
        local_130 = local_140 + fVar10;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_10c = 0;
        local_d0 = 0x3f000000;
        local_cc = 0x3f000000;
        local_c8 = 0x3f000000;
                    /* end of inlined section */
        iVar5 = iVar5 + 1;
        local_13c = fVar6;
        local_12c = fVar9;
        local_110 = local_11c;
        local_c4 = local_11c;
        (*(code *)prc->__vtable[1].DisplayList)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_140,
                   (EVec2 *)&local_130,&local_120,&local_110,&local_d0);
      } while (iVar5 < 10);
    }
  }
  return;
}

void ECharedPersonalItem::Update() {
	EUIObjectNode *this;
	EUIObjectNode *this;
	
  uint uVar1;
  EUIObjectNode__vtable *pEVar2;
  EUIVirtualCtrl__vtable *pEVar3;
  undefined8 uVar4;
  EVec4 *pEVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  uVar1 = (this->field0_0x0).m_flags;
                    /* end of inlined section */
  if (((int)uVar1 >> 2 & 1U) != 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (((int)uVar1 >> 3 & 1U) != 0) {
      pEVar2 = (this->field0_0x0).__vtable;
      (*(code *)pEVar2[1].EUIObjectNode)
                ((int)this->m_szDescription + *(short *)(pEVar2 + 1) + -0x70,this,0x40);
      pEVar2 = (this->field0_0x0).__vtable;
      (*(code *)pEVar2[1].EUIObjectNode)
                ((int)this->m_szDescription + *(short *)(pEVar2 + 1) + -0x70,this,0x3f);
    }
    pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar6 = (*(code *)pEVar3[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar3[1].ClearBut + -4,
                       (this->field0_0x0).m_activeCtrl,0x2000);
    if (lVar6 == 0) {
      pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar6 = (*(code *)pEVar3[1].GetBut)
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar3[1].ClearBut + -4,
                         (this->field0_0x0).m_activeCtrl,0x8000);
      if (lVar6 != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
        PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
                    /* end of inlined section */
        pEVar2 = (this->field0_0x0).__vtable;
        (*(code *)pEVar2[1].EUIObjectNode)
                  ((int)this->m_szDescription + *(short *)(pEVar2 + 1) + -0x70,this,0x35);
      }
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
                    /* end of inlined section */
      pEVar2 = (this->field0_0x0).__vtable;
      (*(code *)pEVar2[1].EUIObjectNode)
                ((int)this->m_szDescription + *(short *)(pEVar2 + 1) + -0x70,this,0x34);
    }
    pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar6 = (**(code **)(pEVar3 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar3->GetBut + -4,
                       (this->field0_0x0).m_activeCtrl,0x2000);
    if (lVar6 == 0) {
      pEVar5 = &_WHITE;
    }
    else {
      pEVar5 = &_CYAN;
    }
    uVar4 = *(undefined8 *)&pEVar5->field0_0x0;
    fVar7 = (pEVar5->field0_0x0).d[2];
    fVar8 = (pEVar5->field0_0x0).d[3];
    (this->m_vRightArrowColor).field0_0x0.d[0] = (float)uVar4;
    (this->m_vRightArrowColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
    (this->m_vRightArrowColor).field0_0x0.d[2] = fVar7;
    (this->m_vRightArrowColor).field0_0x0.d[3] = fVar8;
    pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar6 = (**(code **)(pEVar3 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar3->GetBut + -4,
                       (this->field0_0x0).m_activeCtrl,0x8000);
    if (lVar6 == 0) {
      pEVar5 = &_WHITE;
    }
    else {
      pEVar5 = &_CYAN;
    }
    uVar4 = *(undefined8 *)&pEVar5->field0_0x0;
    fVar7 = (pEVar5->field0_0x0).d[2];
    fVar8 = (pEVar5->field0_0x0).d[3];
    (this->m_vLeftArrowColor).field0_0x0.d[0] = (float)uVar4;
    (this->m_vLeftArrowColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
    (this->m_vLeftArrowColor).field0_0x0.d[2] = fVar7;
    (this->m_vLeftArrowColor).field0_0x0.d[3] = fVar8;
    Update__13EUIObjectNode(&this->field0_0x0);
  }
  return;
}

void ECharedPersonalItem::SetStrings(c16 *szOne, c16 *szTwo) {
	EVec2 vLeftTextSize;
	EVec2 vRightTextSize;
	u16 *szString;
	u16 *szString;
	
  ERFont *this_00;
  EVec2 vLeftTextSize;
  EVec2 vRightTextSize;
  
  this_00 = this->m_pFont;
  this->m_szDescription[0] = szOne;
  this->m_szDescription[1] = szTwo;
  SetSize__6ERFontffb(this_00,14.0,1.0,true);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&vLeftTextSize,this->m_pFont,SUB41(szOne,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  this->m_fLeftOffset = vLeftTextSize.field0_0x0.d[0];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&vRightTextSize,this->m_pFont,SUB41(szTwo,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  this->m_fTotalWidth = vRightTextSize.field0_0x0.d[0] + this->m_fLeftOffset + 0.147;
  return;
}

void ECharedPersonalItem::NewLeftOffset(float fNewOffset) {
	EVec2 vRightTextSize;
	
  EVec2 vRightTextSize;
  
  this->m_fLeftOffset = fNewOffset;
  SetSize__6ERFontffb(this->m_pFont,14.0,1.0,true);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&vRightTextSize,this->m_pFont,SUB41(this->m_szDescription[1],0),
             (EWindow *)&pGifTag1);
                    /* end of inlined section */
  this->m_fTotalWidth = vRightTextSize.field0_0x0.d[0] + this->m_fLeftOffset + 0.147;
  return;
}

ECharedBirthSign* ECharedBirthSign::ECharedBirthSign() {
  __13EUIObjectNode(&this->field0_0x0);
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_16ECharedBirthSign;
  Init__16ECharedBirthSign(this);
  return this;
}

void ECharedBirthSign::~ECharedBirthSign(int __in_chrg) {
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_16ECharedBirthSign;
  Cleanup__16ECharedBirthSign(this);
  ___13EUIObjectNode(&this->field0_0x0,__in_chrg);
  return;
}

void ECharedBirthSign::Init() {
  short *psVar1;
  ERFont *pEVar2;
  ERShader *pEVar3;
  
  this->m_nCurrentSign = '\0';
  psVar1 = GetCreateASimString__7EGlobalPCc(&_globals,"no sign");
  this->m_szZodiacNames[0] = psVar1;
  psVar1 = GetCreateASimString__7EGlobalPCc(&_globals,"aries");
  this->m_szZodiacNames[1] = psVar1;
  psVar1 = GetCreateASimString__7EGlobalPCc(&_globals,"taurus");
  this->m_szZodiacNames[2] = psVar1;
  psVar1 = GetCreateASimString__7EGlobalPCc(&_globals,"gemini");
  this->m_szZodiacNames[3] = psVar1;
  psVar1 = GetCreateASimString__7EGlobalPCc(&_globals,"cancer");
  this->m_szZodiacNames[4] = psVar1;
  psVar1 = GetCreateASimString__7EGlobalPCc(&_globals,"leo");
  this->m_szZodiacNames[5] = psVar1;
  psVar1 = GetCreateASimString__7EGlobalPCc(&_globals,"virgo");
  this->m_szZodiacNames[6] = psVar1;
  psVar1 = GetCreateASimString__7EGlobalPCc(&_globals,"libra");
  this->m_szZodiacNames[7] = psVar1;
  psVar1 = GetCreateASimString__7EGlobalPCc(&_globals,"scorpio");
  this->m_szZodiacNames[8] = psVar1;
  psVar1 = GetCreateASimString__7EGlobalPCc(&_globals,"sagitarius");
  this->m_szZodiacNames[9] = psVar1;
  psVar1 = GetCreateASimString__7EGlobalPCc(&_globals,"capricorn");
  this->m_szZodiacNames[10] = psVar1;
  psVar1 = GetCreateASimString__7EGlobalPCc(&_globals,"aquarius");
  this->m_szZodiacNames[0xb] = psVar1;
  psVar1 = GetCreateASimString__7EGlobalPCc(&_globals,"pisces");
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
                    /* end of inlined section */
  this->m_szZodiacNames[0xc] = psVar1;
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
  pEVar2 = (ERFont *)
           AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pFont = pEVar2;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar3 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xa25eba9a,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pBlankShdr = pEVar3;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar3 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xe3e852f9,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pLeftArrowShdr = pEVar3;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar3 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x19e76f9a,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pRightArrowShdr = pEVar3;
  return;
}

void ECharedBirthSign::Cleanup() {
  DelRef__9EResource(&this->m_pFont->field0_0x0);
  this->m_pFont = (ERFont *)0x0;
  DelRef__9EResource(&this->m_pBlankShdr->field0_0x0);
  this->m_pBlankShdr = (ERShader *)0x0;
  DelRef__9EResource(&this->m_pLeftArrowShdr->field0_0x0);
  this->m_pLeftArrowShdr = (ERShader *)0x0;
  DelRef__9EResource(&this->m_pRightArrowShdr->field0_0x0);
  this->m_pRightArrowShdr = (ERShader *)0x0;
  return;
}

void ECharedBirthSign::Draw(ERC *prc) {
	EVec4 vColor;
	float fCenter;
	EUIObjectNode *this;
	EVec2 vStringSize;
	float fArrowOffset;
	ERFont *this;
	float x;
	float y;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	ERFont *this;
	float x;
	float y;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	
  ERFont *pEVar1;
  EUIVirtualCtrl__vtable *pEVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  ERShader *this_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  float fVar8;
  float fVar9;
  EVec4 vColor;
  EVec2 vStringSize;
  float local_d0;
  EStorable__vtable *local_cc;
  float local_c0;
  float local_bc;
  int local_b0;
  int local_ac;
  EHashTableNode **local_a0;
  uint local_9c;
  EFontSize *local_90;
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
  
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* end of inlined section */
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s5;
  uStack_3c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (EFontSize *)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
  fVar8 = 0.5;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  fVar9 = (this->field0_0x0).m_pos.field0_0x0.d[0] + (this->field0_0x0).m_WDH.field0_0x0.d[0] * 0.5;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  vColor.field0_0x0.d[1] = _WHITE.field0_0x0.d[1];
  vColor.field0_0x0.d[0] = _WHITE.field0_0x0.d[0];
  vColor.field0_0x0.d[2] = _WHITE.field0_0x0.d[2];
                    /* end of inlined section */
  vColor.field0_0x0.d[3] = _WHITE.field0_0x0.d[3];
  vStringSize.field0_0x0.d[0] = fVar9;
  local_d0 = fVar9;
  if (((int)(this->field0_0x0).m_flags >> 3 & 1U) == 0) {
    Select__6ERFontP3ERC(this->m_pFont,prc);
    SetSize__6ERFontffb(this->m_pFont,14.0,1.0,true);
    uVar5 = _WHITE.field0_0x0.d[3];
    uVar4 = _WHITE.field0_0x0.d[2];
    uVar3 = _WHITE.field0_0x0.d[1];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    pEVar1 = this->m_pFont;
    (pEVar1->m_vColor).field0_0x0.d[0] = _WHITE.field0_0x0.d[0];
    (pEVar1->m_vColor).field0_0x0.d[1] = uVar3;
    (pEVar1->m_vColor).field0_0x0.d[2] = uVar4;
    (pEVar1->m_vColor).field0_0x0.d[3] = uVar5;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vStringSize.field0_0x0.d[1] = (this->field0_0x0).m_pos.field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    local_cc = (EStorable__vtable *)vStringSize.field0_0x0.d[1];
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,this->m_szZodiacNames[this->m_nCurrentSign],true,(EVec2 *)&local_d0
               ,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
  }
  else {
    Select__6ERFontP3ERC(this->m_pFont,prc);
    SetSize__6ERFontffb(this->m_pFont,14.0,1.0,true);
    uVar5 = _CYAN.field0_0x0.d[3];
    uVar4 = _CYAN.field0_0x0.d[2];
    uVar7 = _CYAN.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    pEVar1 = this->m_pFont;
    (pEVar1->m_vColor).field0_0x0.d[0] = (float)_CYAN.field0_0x0._0_8_;
    (pEVar1->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar7 >> 0x20);
    (pEVar1->m_vColor).field0_0x0.d[2] = uVar4;
    (pEVar1->m_vColor).field0_0x0.d[3] = uVar5;
    vStringSize.field0_0x0.d[1] = (this->field0_0x0).m_pos.field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    local_cc = (EStorable__vtable *)vStringSize.field0_0x0.d[1];
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,this->m_szZodiacNames[this->m_nCurrentSign],true,(EVec2 *)&local_d0
               ,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)&vStringSize,this->m_pFont,
               SUB41(this->m_szZodiacNames[this->m_nCurrentSign],0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
    pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    fVar8 = vStringSize.field0_0x0.d[0] * fVar8 + 0.01;
    lVar6 = (**(code **)(pEVar2 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4,
                       (this->field0_0x0).m_activeCtrl,0x2000);
    if (lVar6 == 0) {
      this_00 = this->m_pRightArrowShdr;
    }
    else {
      vColor.field0_0x0.d[0] = (float)(int)_CYAN.field0_0x0._0_8_;
      vColor.field0_0x0.d[1] = (float)(int)((ulong)_CYAN.field0_0x0._0_8_ >> 0x20);
      vColor.field0_0x0.d[2] = _CYAN.field0_0x0.d[2];
      vColor.field0_0x0.d[3] = _CYAN.field0_0x0.d[3];
      this_00 = this->m_pRightArrowShdr;
    }
    Select__8ERShaderP3ERCi(this_00,prc,0);
    local_c0 = fVar9 + fVar8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_bc = (this->field0_0x0).m_pos.field0_0x0.d[2] - 0.022;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_b0 = 0x3f800000;
    local_ac = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_c0,&local_b0,
               &vColor);
    pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar6 = (**(code **)(pEVar2 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4,
                       (this->field0_0x0).m_activeCtrl,0x8000);
    uVar7 = _CYAN.field0_0x0._0_8_;
    vColor.field0_0x0.d[2] = _CYAN.field0_0x0.d[2];
    vColor.field0_0x0.d[3] = _CYAN.field0_0x0.d[3];
    if (lVar6 == 0) {
      uVar7 = CONCAT44(_WHITE.field0_0x0.d[1],_WHITE.field0_0x0.d[0]);
      vColor.field0_0x0.d[2] = _WHITE.field0_0x0.d[2];
      vColor.field0_0x0.d[3] = _WHITE.field0_0x0.d[3];
    }
    vColor.field0_0x0.d[0] = (float)(int)uVar7;
    vColor.field0_0x0.d[1] = (float)(int)((ulong)uVar7 >> 0x20);
    Select__8ERShaderP3ERCi(this->m_pLeftArrowShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_c0 = (fVar9 - fVar8) - 0.014;
    local_bc = (this->field0_0x0).m_pos.field0_0x0.d[2] - 0.022;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_a0 = (EHashTableNode **)0x3f800000;
    local_9c = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_c0,&local_a0,
               &vColor);
  }
  return;
}

void ECharedBirthSign::Update() {
	EUIObjectNode *this;
	
  EUIVirtualCtrl__vtable *pEVar1;
  EUIObjectNode__vtable *pEVar2;
  uint uVar3;
  long lVar4;
  
  pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar4 = (*(code *)pEVar1[1].GetBut)
                    ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                     (this->field0_0x0).m_activeCtrl,0x2000);
  if (lVar4 == 0) {
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar4 = (*(code *)pEVar1[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                       (this->field0_0x0).m_activeCtrl,0x8000);
    if (lVar4 == 0) {
      uVar3 = (this->field0_0x0).m_flags;
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
                    /* end of inlined section */
      pEVar2 = (this->field0_0x0).__vtable;
      (*(code *)pEVar2[1].EUIObjectNode)
                ((int)this->m_szZodiacNames + *(short *)(pEVar2 + 1) + -0x40,this,0x37);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
      uVar3 = (this->field0_0x0).m_flags;
    }
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
                    /* end of inlined section */
    pEVar2 = (this->field0_0x0).__vtable;
    (*(code *)pEVar2[1].EUIObjectNode)
              ((int)this->m_szZodiacNames + *(short *)(pEVar2 + 1) + -0x40,this,0x36);
    uVar3 = (this->field0_0x0).m_flags;
  }
                    /* end of inlined section */
  if (((int)uVar3 >> 3 & 1U) != 0) {
    pEVar2 = (this->field0_0x0).__vtable;
    (*(code *)pEVar2[1].EUIObjectNode)
              ((int)this->m_szZodiacNames + *(short *)(pEVar2 + 1) + -0x40,this,0x40);
    pEVar2 = (this->field0_0x0).__vtable;
    (*(code *)pEVar2[1].EUIObjectNode)
              ((int)this->m_szZodiacNames + *(short *)(pEVar2 + 1) + -0x40,this,0x3f);
  }
  return;
}

void ECharedTextIcon::Draw(ERC *prc) {
	EUIObjectNode *this;
	EVec2 vTextSize;
	EVec4 vColor;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	EVec2 *this;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	EVec2 *this;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	
  ERFont *pEVar1;
  EUIVirtualCtrl__vtable *pEVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  EVec2 vTextSize;
  EVec4 vColor;
  float local_d0;
  float local_cc;
  float local_c0;
  float local_bc;
  EHashTableNode **local_b0;
  uint local_ac;
  EFontSize *local_a0;
  undefined4 local_9c;
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
  
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s6;
  uStack_2c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_40 = (undefined4)unaff_s5;
  uStack_3c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).m_flags >> 3 & 1U) == 0) {
    Select__6ERFontP3ERC(this->m_pFont,prc);
    SetSize__6ERFontffb(this->m_pFont,14.0,1.0,true);
    uVar5 = _WHITE.field0_0x0.d[3];
    uVar4 = _WHITE.field0_0x0.d[2];
    uVar3 = _WHITE.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    pEVar1 = this->m_pFont;
    (pEVar1->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (pEVar1->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar3 >> 0x20);
    (pEVar1->m_vColor).field0_0x0.d[2] = uVar4;
    (pEVar1->m_vColor).field0_0x0.d[3] = uVar5;
                    /* end of inlined section */
    vTextSize.field0_0x0.d[0] = (this->field0_0x0).m_pos.field0_0x0.d[0] + this->m_fLeftOffset;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    vTextSize.field0_0x0.d[1] = (this->field0_0x0).m_pos.field0_0x0.d[2] + 0.002083;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    vColor.field0_0x0.d[0] = vTextSize.field0_0x0.d[0];
    vColor.field0_0x0.d[1] = vTextSize.field0_0x0.d[1];
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,this->m_szLabel,true,(EVec2 *)&vColor,E_FAX_RIGHT,E_FAY_TOP,
               (EVec2 *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    vTextSize.field0_0x0.d[1] = (this->field0_0x0).m_pos.field0_0x0.d[2] + 0.002083;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    vTextSize.field0_0x0.d[0] =
         (this->field0_0x0).m_pos.field0_0x0.d[0] + 0.026125 + this->m_fLeftOffset;
    vColor.field0_0x0.d[0] = vTextSize.field0_0x0.d[0];
    vColor.field0_0x0.d[1] = vTextSize.field0_0x0.d[1];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,this->m_szCurrentSelection,true,(EVec2 *)&vColor,E_FAX_LEFT,
               E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
  }
  else {
                    /* end of inlined section */
    Select__6ERFontP3ERC(this->m_pFont,prc);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    SetSize__6ERFontffb(this->m_pFont,14.0,1.0,true);
    uVar5 = _CYAN.field0_0x0.d[3];
    uVar4 = _CYAN.field0_0x0.d[2];
    uVar3 = _CYAN.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    pEVar1 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    (pEVar1->m_vColor).field0_0x0.d[0] = (float)_CYAN.field0_0x0._0_8_;
    (pEVar1->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar3 >> 0x20);
    (pEVar1->m_vColor).field0_0x0.d[2] = uVar4;
    (pEVar1->m_vColor).field0_0x0.d[3] = uVar5;
                    /* end of inlined section */
    vTextSize.field0_0x0.d[0] = (this->field0_0x0).m_pos.field0_0x0.d[0] + this->m_fLeftOffset;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    vTextSize.field0_0x0.d[1] = (this->field0_0x0).m_pos.field0_0x0.d[2] + 0.002083;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    vColor.field0_0x0.d[0] = vTextSize.field0_0x0.d[0];
    vColor.field0_0x0.d[1] = vTextSize.field0_0x0.d[1];
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,this->m_szLabel,true,(EVec2 *)&vColor,E_FAX_RIGHT,E_FAY_TOP,
               (EVec2 *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    vTextSize.field0_0x0.d[1] = (this->field0_0x0).m_pos.field0_0x0.d[2] + 0.002083;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    vTextSize.field0_0x0.d[0] =
         (this->field0_0x0).m_pos.field0_0x0.d[0] + 0.026125 + this->m_fLeftOffset;
    local_d0 = vTextSize.field0_0x0.d[0];
    local_cc = vTextSize.field0_0x0.d[1];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,this->m_szCurrentSelection,true,(EVec2 *)&local_d0,E_FAX_LEFT,
               E_FAY_TOP,(EVec2 *)0x0);
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)&vTextSize,this->m_pFont,SUB41(this->m_szCurrentSelection,0),
               (EWindow *)&pGifTag1);
                    /* end of inlined section */
    pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar6 = (*(code *)pEVar2[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2[1].ClearBut + -4,
                       (this->field0_0x0).m_activeCtrl,0x2000);
    if (lVar6 == 0) {
      vColor.field0_0x0.d[0] = (float)(int)_WHITE.field0_0x0._0_8_;
      vColor.field0_0x0.d[1] = (float)(int)((ulong)_WHITE.field0_0x0._0_8_ >> 0x20);
      vColor.field0_0x0.d[2] = _WHITE.field0_0x0.d[2];
      vColor.field0_0x0.d[3] = _WHITE.field0_0x0.d[3];
    }
    else {
      vColor.field0_0x0.d[0] = (float)(int)_CYAN.field0_0x0._0_8_;
      vColor.field0_0x0.d[1] = (float)(int)((ulong)_CYAN.field0_0x0._0_8_ >> 0x20);
      vColor.field0_0x0.d[2] = _CYAN.field0_0x0.d[2];
      vColor.field0_0x0.d[3] = _CYAN.field0_0x0.d[3];
    }
    Select__8ERShaderP3ERCi(this->m_pRightArrowShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_c0 = (this->field0_0x0).m_pos.field0_0x0.d[0] + vTextSize.field0_0x0.d[0] + 0.156125;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_bc = (this->field0_0x0).m_pos.field0_0x0.d[2] - 0.016;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_b0 = (EHashTableNode **)0x3f800000;
    local_ac = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_c0,&local_b0,
               &vColor);
    pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar6 = (*(code *)pEVar2[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2[1].ClearBut + -4,
                       (this->field0_0x0).m_activeCtrl,0x8000);
    if (lVar6 == 0) {
      vColor.field0_0x0.d[0] = (float)(int)_WHITE.field0_0x0._0_8_;
      vColor.field0_0x0.d[1] = (float)(int)((ulong)_WHITE.field0_0x0._0_8_ >> 0x20);
      vColor.field0_0x0.d[2] = _WHITE.field0_0x0.d[2];
      vColor.field0_0x0.d[3] = _WHITE.field0_0x0.d[3];
    }
    else {
      vColor.field0_0x0.d[0] = (float)(int)_CYAN.field0_0x0._0_8_;
      vColor.field0_0x0.d[1] = (float)(int)((ulong)_CYAN.field0_0x0._0_8_ >> 0x20);
      vColor.field0_0x0.d[2] = _CYAN.field0_0x0.d[2];
      vColor.field0_0x0.d[3] = _CYAN.field0_0x0.d[3];
    }
    Select__8ERShaderP3ERCi(this->m_pLeftArrowShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_c0 = (this->field0_0x0).m_pos.field0_0x0.d[0] + 0.124;
    local_bc = (this->field0_0x0).m_pos.field0_0x0.d[2] - 0.016;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_a0 = (EFontSize *)0x3f800000;
    local_9c = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_c0,&local_a0,
               &vColor);
  }
  return;
}

void ECharedTextIcon::Init() {
  ERFont *pEVar1;
  ERShader *pEVar2;
  
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
                    /* end of inlined section */
  this->m_nCurrentState = '\0';
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
                    /* end of inlined section */
  this->m_fLeftOffset = 0.12;
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
  pEVar1 = (ERFont *)
           AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pFont = pEVar1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar2 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xa25eba9a,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pBlankShdr = pEVar2;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar2 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xe3e852f9,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pLeftArrowShdr = pEVar2;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar2 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x19e76f9a,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pRightArrowShdr = pEVar2;
  return;
}

void ECharedTextIcon::Cleanup() {
  DelRef__9EResource(&this->m_pFont->field0_0x0);
  this->m_pFont = (ERFont *)0x0;
  DelRef__9EResource(&this->m_pBlankShdr->field0_0x0);
  this->m_pBlankShdr = (ERShader *)0x0;
  DelRef__9EResource(&this->m_pLeftArrowShdr->field0_0x0);
  this->m_pLeftArrowShdr = (ERShader *)0x0;
  DelRef__9EResource(&this->m_pRightArrowShdr->field0_0x0);
  this->m_pRightArrowShdr = (ERShader *)0x0;
  return;
}

void ECharedName::Update() {
	EUIObjectNode *this;
	
  EUIObjectNode__vtable *pEVar1;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).field0_0x0.m_flags >> 3 & 1U) != 0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].EUIObjectNode)
              ((int)&(this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead +
               (int)*(short *)(pEVar1 + 1),this,0x42);
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].EUIObjectNode)
              ((int)&(this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead +
               (int)*(short *)(pEVar1 + 1),this,0x3f);
  }
  return;
}

void ECharedName::Draw(ERC *prc) {
	EUIObjectNode *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	EUIObjectNode *this;
	ERFont *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	EVec2 *this;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  EVec4 *pEVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ERFont *pEVar8;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  float local_70;
  float local_6c;
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
  
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).field0_0x0.m_flags >> 3 & 1U) == 0) {
    Select__6ERFontP3ERC((this->field0_0x0).m_pFont,prc);
    SetSize__6ERFontffb((this->field0_0x0).m_pFont,14.0,1.0,true);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (((int)(this->field0_0x0).field0_0x0.m_flags >> 4 & 1U) == 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      pEVar8 = (this->field0_0x0).m_pFont;
      pEVar4 = &_GREAY;
    }
    else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      pEVar8 = (this->field0_0x0).m_pFont;
                    /* end of inlined section */
      pEVar4 = &_WHITE;
    }
    fVar5 = (pEVar4->field0_0x0).d[1];
    fVar6 = (pEVar4->field0_0x0).d[2];
    fVar7 = (pEVar4->field0_0x0).d[3];
    (pEVar8->m_vColor).field0_0x0.d[0] = (pEVar4->field0_0x0).d[0];
    (pEVar8->m_vColor).field0_0x0.d[1] = fVar5;
    (pEVar8->m_vColor).field0_0x0.d[2] = fVar6;
    (pEVar8->m_vColor).field0_0x0.d[3] = fVar7;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    local_70 = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0] +
               (this->field0_0x0).m_fLeftOffset;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    local_6c = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] + 0.002083;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              ((this->field0_0x0).m_pFont,prc,(this->field0_0x0).m_szLabel,true,(EVec2 *)&local_70,
               E_FAX_RIGHT,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    local_6c = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] + 0.002083;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    local_70 = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0] + 0.026125 +
               (this->field0_0x0).m_fLeftOffset;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              ((this->field0_0x0).m_pFont,prc,(this->field0_0x0).m_szCurrentSelection,true,
               (EVec2 *)&local_70,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
  }
  else {
    Select__6ERFontP3ERC((this->field0_0x0).m_pFont,prc);
    SetSize__6ERFontffb((this->field0_0x0).m_pFont,14.0,1.0,true);
    uVar3 = _CYAN.field0_0x0.d[3];
    uVar2 = _CYAN.field0_0x0.d[2];
    uVar1 = _CYAN.field0_0x0.d[1];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    pEVar8 = (this->field0_0x0).m_pFont;
    (pEVar8->m_vColor).field0_0x0.d[0] = _CYAN.field0_0x0.d[0];
    (pEVar8->m_vColor).field0_0x0.d[1] = uVar1;
    (pEVar8->m_vColor).field0_0x0.d[2] = uVar2;
    (pEVar8->m_vColor).field0_0x0.d[3] = uVar3;
                    /* end of inlined section */
    local_70 = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0] +
               (this->field0_0x0).m_fLeftOffset;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    local_6c = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] + 0.002083;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              ((this->field0_0x0).m_pFont,prc,(this->field0_0x0).m_szLabel,true,(EVec2 *)&local_70,
               E_FAX_RIGHT,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    local_5c = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] + 0.002083;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    local_60 = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0] + 0.026125 +
               (this->field0_0x0).m_fLeftOffset;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              ((this->field0_0x0).m_pFont,prc,(this->field0_0x0).m_szCurrentSelection,true,
               (EVec2 *)&local_60,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
  }
  return;
}

void ECharedName::Init() {
  short *psVar1;
  
  psVar1 = GetCreateASimString__7EGlobalPCc(&_globals,"name");
  (this->field0_0x0).m_szLabel = psVar1;
  psVar1 = GetCreateASimString__7EGlobalPCc(&_globals,"new sim");
  (this->field0_0x0).m_szCurrentSelection = psVar1;
  return;
}

void ECharedName::SetName(c16 *szNewName) {
  (this->field0_0x0).m_szCurrentSelection = szNewName;
  return;
}

void ECharedAge::Update() {
	EUIObjectNode *this;
	
  EUIVirtualCtrl__vtable *pEVar1;
  EUIObjectNode__vtable *pEVar2;
  short *psVar3;
  uint uVar4;
  long lVar5;
  
  pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar5 = (*(code *)pEVar1[1].GetBut)
                    ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                     (this->field0_0x0).field0_0x0.m_activeCtrl,0x2000);
  if (lVar5 == 0) {
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar5 = (*(code *)pEVar1[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                       (this->field0_0x0).field0_0x0.m_activeCtrl,0x8000);
    if (lVar5 == 0) {
      uVar4 = (this->field0_0x0).field0_0x0.m_flags;
      goto LAB_0010b7c8;
    }
    if (*(int *)&this->m_bAllowTextChange == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
      uVar4 = (this->field0_0x0).field0_0x0.m_flags;
      goto LAB_0010b7c8;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
                    /* end of inlined section */
    if ((this->field0_0x0).m_nCurrentState != '0') goto LAB_0010b780;
LAB_0010b75c:
    psVar3 = GetCreateASimString__7EGlobalPCc(&_globals,"child");
    (this->field0_0x0).m_szCurrentSelection = psVar3;
    (this->field0_0x0).m_nCurrentState = '1';
  }
  else {
    if (*(int *)&this->m_bAllowTextChange == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
                    /* end of inlined section */
      uVar4 = (this->field0_0x0).field0_0x0.m_flags;
      goto LAB_0010b7c8;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
                    /* end of inlined section */
    if ((this->field0_0x0).m_nCurrentState == '0') goto LAB_0010b75c;
LAB_0010b780:
    psVar3 = GetCreateASimString__7EGlobalPCc(&_globals,"adult");
    (this->field0_0x0).m_szCurrentSelection = psVar3;
    (this->field0_0x0).m_nCurrentState = '0';
  }
  pEVar2 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar2[1].EUIObjectNode)
            ((int)&(this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)(pEVar2 + 1),this,(this->field0_0x0).m_nCurrentState);
  uVar4 = (this->field0_0x0).field0_0x0.m_flags;
LAB_0010b7c8:
                    /* end of inlined section */
  if (((int)uVar4 >> 3 & 1U) != 0) {
    pEVar2 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar2[1].EUIObjectNode)
              ((int)&(this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead +
               (int)*(short *)(pEVar2 + 1),this,0x40);
    pEVar2 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar2[1].EUIObjectNode)
              ((int)&(this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead +
               (int)*(short *)(pEVar2 + 1),this,0x3f);
  }
  return;
}

void ECharedAge::Draw(ERC *prc) {
	EUIObjectNode *this;
	EVec2 vTextSize;
	EVec4 vColor;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	EVec2 *this;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	EUIObjectNode *this;
	ERFont *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	EVec2 *this;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	
  EUIVirtualCtrl__vtable *pEVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  EVec4 *pEVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  ERFont *pEVar10;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  EVec2 vTextSize;
  EVec4 vColor;
  float local_d0;
  float local_cc;
  float local_c0;
  float local_bc;
  EHashTableNode **local_b0;
  uint local_ac;
  EFontSize *local_a0;
  undefined4 local_9c;
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
  
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s6;
  uStack_2c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_40 = (undefined4)unaff_s5;
  uStack_3c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).field0_0x0.m_flags >> 3 & 1U) == 0) {
    Select__6ERFontP3ERC((this->field0_0x0).m_pFont,prc);
    SetSize__6ERFontffb((this->field0_0x0).m_pFont,14.0,1.0,true);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (((int)(this->field0_0x0).field0_0x0.m_flags >> 4 & 1U) == 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      pEVar10 = (this->field0_0x0).m_pFont;
      pEVar6 = &_GREAY;
    }
    else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      pEVar10 = (this->field0_0x0).m_pFont;
                    /* end of inlined section */
      pEVar6 = &_WHITE;
    }
    uVar2 = *(undefined8 *)&pEVar6->field0_0x0;
    fVar8 = (pEVar6->field0_0x0).d[2];
    fVar9 = (pEVar6->field0_0x0).d[3];
    (pEVar10->m_vColor).field0_0x0.d[0] = (float)uVar2;
    (pEVar10->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
    (pEVar10->m_vColor).field0_0x0.d[2] = fVar8;
    (pEVar10->m_vColor).field0_0x0.d[3] = fVar9;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    vTextSize.field0_0x0.d[0] =
         (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0] + (this->field0_0x0).m_fLeftOffset;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    vTextSize.field0_0x0.d[1] = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] + 0.002083;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    vColor.field0_0x0.d[0] = vTextSize.field0_0x0.d[0];
    vColor.field0_0x0.d[1] = vTextSize.field0_0x0.d[1];
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              ((this->field0_0x0).m_pFont,prc,(this->field0_0x0).m_szLabel,true,(EVec2 *)&vColor,
               E_FAX_RIGHT,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    vTextSize.field0_0x0.d[1] = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] + 0.002083;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    vTextSize.field0_0x0.d[0] =
         (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0] + 0.026125 +
         (this->field0_0x0).m_fLeftOffset;
    vColor.field0_0x0.d[0] = vTextSize.field0_0x0.d[0];
    vColor.field0_0x0.d[1] = vTextSize.field0_0x0.d[1];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              ((this->field0_0x0).m_pFont,prc,(this->field0_0x0).m_szCurrentSelection,true,
               (EVec2 *)&vColor,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
  }
  else {
                    /* end of inlined section */
    Select__6ERFontP3ERC((this->field0_0x0).m_pFont,prc);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    SetSize__6ERFontffb((this->field0_0x0).m_pFont,14.0,1.0,true);
    uVar5 = _CYAN.field0_0x0.d[3];
    uVar4 = _CYAN.field0_0x0.d[2];
    uVar3 = _CYAN.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    pEVar10 = (this->field0_0x0).m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    (pEVar10->m_vColor).field0_0x0.d[0] = (float)_CYAN.field0_0x0._0_8_;
    (pEVar10->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar3 >> 0x20);
    (pEVar10->m_vColor).field0_0x0.d[2] = uVar4;
    (pEVar10->m_vColor).field0_0x0.d[3] = uVar5;
                    /* end of inlined section */
    vTextSize.field0_0x0.d[0] =
         (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0] + (this->field0_0x0).m_fLeftOffset;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    vTextSize.field0_0x0.d[1] = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] + 0.002083;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    vColor.field0_0x0.d[0] = vTextSize.field0_0x0.d[0];
    vColor.field0_0x0.d[1] = vTextSize.field0_0x0.d[1];
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              ((this->field0_0x0).m_pFont,prc,(this->field0_0x0).m_szLabel,true,(EVec2 *)&vColor,
               E_FAX_RIGHT,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    vTextSize.field0_0x0.d[1] = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] + 0.002083;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    vTextSize.field0_0x0.d[0] =
         (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0] + 0.026125 +
         (this->field0_0x0).m_fLeftOffset;
    local_d0 = vTextSize.field0_0x0.d[0];
    local_cc = vTextSize.field0_0x0.d[1];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              ((this->field0_0x0).m_pFont,prc,(this->field0_0x0).m_szCurrentSelection,true,
               (EVec2 *)&local_d0,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)&vTextSize,(this->field0_0x0).m_pFont,
               SUB41((this->field0_0x0).m_szCurrentSelection,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar7 = (*(code *)pEVar1[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                       (this->field0_0x0).field0_0x0.m_activeCtrl,0x2000);
    if (lVar7 == 0) {
      vColor.field0_0x0.d[0] = (float)(int)_WHITE.field0_0x0._0_8_;
      vColor.field0_0x0.d[1] = (float)(int)((ulong)_WHITE.field0_0x0._0_8_ >> 0x20);
      vColor.field0_0x0.d[2] = _WHITE.field0_0x0.d[2];
      vColor.field0_0x0.d[3] = _WHITE.field0_0x0.d[3];
    }
    else {
      vColor.field0_0x0.d[0] = (float)(int)_CYAN.field0_0x0._0_8_;
      vColor.field0_0x0.d[1] = (float)(int)((ulong)_CYAN.field0_0x0._0_8_ >> 0x20);
      vColor.field0_0x0.d[2] = _CYAN.field0_0x0.d[2];
      vColor.field0_0x0.d[3] = _CYAN.field0_0x0.d[3];
    }
    Select__8ERShaderP3ERCi((this->field0_0x0).m_pRightArrowShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_bc = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] - 0.016;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_c0 = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0] + vTextSize.field0_0x0.d[0] +
               (this->field0_0x0).m_fLeftOffset + 0.030125;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_b0 = (EHashTableNode **)0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_ac = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_c0,&local_b0,
               &vColor);
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar7 = (*(code *)pEVar1[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                       (this->field0_0x0).field0_0x0.m_activeCtrl,0x8000);
    if (lVar7 == 0) {
      vColor.field0_0x0.d[0] = (float)(int)_WHITE.field0_0x0._0_8_;
      vColor.field0_0x0.d[1] = (float)(int)((ulong)_WHITE.field0_0x0._0_8_ >> 0x20);
      vColor.field0_0x0.d[2] = _WHITE.field0_0x0.d[2];
      vColor.field0_0x0.d[3] = _WHITE.field0_0x0.d[3];
    }
    else {
      vColor.field0_0x0.d[0] = (float)(int)_CYAN.field0_0x0._0_8_;
      vColor.field0_0x0.d[1] = (float)(int)((ulong)_CYAN.field0_0x0._0_8_ >> 0x20);
      vColor.field0_0x0.d[2] = _CYAN.field0_0x0.d[2];
      vColor.field0_0x0.d[3] = _CYAN.field0_0x0.d[3];
    }
    Select__8ERShaderP3ERCi((this->field0_0x0).m_pLeftArrowShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_c0 = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0] +
               (this->field0_0x0).m_fLeftOffset + 0.004;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_bc = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] - 0.016;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_a0 = (EFontSize *)0x3f800000;
    local_9c = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_c0,&local_a0,
               &vColor);
  }
  return;
}

void ECharedAge::Init() {
  short *psVar1;
  
  (this->field0_0x0).m_nCurrentState = '0';
  psVar1 = GetCreateASimString__7EGlobalPCc(&_globals,"age");
  (this->field0_0x0).m_szLabel = psVar1;
  psVar1 = GetCreateASimString__7EGlobalPCc(&_globals,"adult");
  (this->field0_0x0).m_szCurrentSelection = psVar1;
  *(undefined4 *)&this->m_bAllowTextChange = 1;
  return;
}

void ECharedAge::SetAge(bool bIsAdult) {
  short *psVar1;
  char *pRef;
  
  if ((*(int *)&this->m_bAllowTextChange == 0) || (bIsAdult)) {
    (this->field0_0x0).m_nCurrentState = '0';
    pRef = "adult";
  }
  else {
    (this->field0_0x0).m_nCurrentState = '1';
    pRef = "child";
  }
  psVar1 = GetCreateASimString__7EGlobalPCc(&_globals,pRef);
  (this->field0_0x0).m_szCurrentSelection = psVar1;
  return;
}

bool ECharedAge::IsAdult() {
  return (this->field0_0x0).m_nCurrentState == '0';
}

void ECharedGender::Update() {
	EUIObjectNode *this;
	
  EUIVirtualCtrl__vtable *pEVar1;
  EUIObjectNode__vtable *pEVar2;
  short *psVar3;
  uint uVar4;
  long lVar5;
  
  pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar5 = (*(code *)pEVar1[1].GetBut)
                    ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                     (this->field0_0x0).field0_0x0.m_activeCtrl,0x2000);
  if (lVar5 == 0) {
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar5 = (*(code *)pEVar1[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                       (this->field0_0x0).field0_0x0.m_activeCtrl,0x8000);
    if (lVar5 == 0) {
      uVar4 = (this->field0_0x0).field0_0x0.m_flags;
      goto LAB_0010be90;
    }
    if (*(int *)&this->m_bAllowTextChange == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
      uVar4 = (this->field0_0x0).field0_0x0.m_flags;
      goto LAB_0010be90;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
                    /* end of inlined section */
    if ((this->field0_0x0).m_nCurrentState != '2') goto LAB_0010be48;
LAB_0010be24:
    psVar3 = GetCreateASimString__7EGlobalPCc(&_globals,"female");
    (this->field0_0x0).m_szCurrentSelection = psVar3;
    (this->field0_0x0).m_nCurrentState = '3';
  }
  else {
    if (*(int *)&this->m_bAllowTextChange == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
                    /* end of inlined section */
      uVar4 = (this->field0_0x0).field0_0x0.m_flags;
      goto LAB_0010be90;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
                    /* end of inlined section */
    if ((this->field0_0x0).m_nCurrentState == '2') goto LAB_0010be24;
LAB_0010be48:
    psVar3 = GetCreateASimString__7EGlobalPCc(&_globals,"male");
    (this->field0_0x0).m_szCurrentSelection = psVar3;
    (this->field0_0x0).m_nCurrentState = '2';
  }
  pEVar2 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar2[1].EUIObjectNode)
            ((int)&(this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)(pEVar2 + 1),this,(this->field0_0x0).m_nCurrentState);
  uVar4 = (this->field0_0x0).field0_0x0.m_flags;
LAB_0010be90:
                    /* end of inlined section */
  if (((int)uVar4 >> 3 & 1U) != 0) {
    pEVar2 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar2[1].EUIObjectNode)
              ((int)&(this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead +
               (int)*(short *)(pEVar2 + 1),this,0x40);
    pEVar2 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar2[1].EUIObjectNode)
              ((int)&(this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead +
               (int)*(short *)(pEVar2 + 1),this,0x3f);
  }
  return;
}

void ECharedGender::Draw(ERC *prc) {
	EUIObjectNode *this;
	EVec2 vTextSize;
	EVec4 vColor;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	EVec2 *this;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	EUIObjectNode *this;
	ERFont *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	EVec2 *this;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	
  EUIVirtualCtrl__vtable *pEVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  EVec4 *pEVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  ERFont *pEVar10;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  EVec2 vTextSize;
  EVec4 vColor;
  float local_d0;
  float local_cc;
  float local_c0;
  float local_bc;
  EHashTableNode **local_b0;
  uint local_ac;
  EFontSize *local_a0;
  undefined4 local_9c;
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
  
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s6;
  uStack_2c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_40 = (undefined4)unaff_s5;
  uStack_3c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).field0_0x0.m_flags >> 3 & 1U) == 0) {
    Select__6ERFontP3ERC((this->field0_0x0).m_pFont,prc);
    SetSize__6ERFontffb((this->field0_0x0).m_pFont,14.0,1.0,true);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (((int)(this->field0_0x0).field0_0x0.m_flags >> 4 & 1U) == 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      pEVar10 = (this->field0_0x0).m_pFont;
      pEVar6 = &_GREAY;
    }
    else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      pEVar10 = (this->field0_0x0).m_pFont;
                    /* end of inlined section */
      pEVar6 = &_WHITE;
    }
    uVar2 = *(undefined8 *)&pEVar6->field0_0x0;
    fVar8 = (pEVar6->field0_0x0).d[2];
    fVar9 = (pEVar6->field0_0x0).d[3];
    (pEVar10->m_vColor).field0_0x0.d[0] = (float)uVar2;
    (pEVar10->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
    (pEVar10->m_vColor).field0_0x0.d[2] = fVar8;
    (pEVar10->m_vColor).field0_0x0.d[3] = fVar9;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    vTextSize.field0_0x0.d[0] =
         (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0] + (this->field0_0x0).m_fLeftOffset;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    vTextSize.field0_0x0.d[1] = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] + 0.002083;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    vColor.field0_0x0.d[0] = vTextSize.field0_0x0.d[0];
    vColor.field0_0x0.d[1] = vTextSize.field0_0x0.d[1];
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              ((this->field0_0x0).m_pFont,prc,(this->field0_0x0).m_szLabel,true,(EVec2 *)&vColor,
               E_FAX_RIGHT,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    vTextSize.field0_0x0.d[1] = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] + 0.002083;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    vTextSize.field0_0x0.d[0] =
         (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0] + 0.026125 +
         (this->field0_0x0).m_fLeftOffset;
    vColor.field0_0x0.d[0] = vTextSize.field0_0x0.d[0];
    vColor.field0_0x0.d[1] = vTextSize.field0_0x0.d[1];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              ((this->field0_0x0).m_pFont,prc,(this->field0_0x0).m_szCurrentSelection,true,
               (EVec2 *)&vColor,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
  }
  else {
                    /* end of inlined section */
    Select__6ERFontP3ERC((this->field0_0x0).m_pFont,prc);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    SetSize__6ERFontffb((this->field0_0x0).m_pFont,14.0,1.0,true);
    uVar5 = _CYAN.field0_0x0.d[3];
    uVar4 = _CYAN.field0_0x0.d[2];
    uVar3 = _CYAN.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    pEVar10 = (this->field0_0x0).m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    (pEVar10->m_vColor).field0_0x0.d[0] = (float)_CYAN.field0_0x0._0_8_;
    (pEVar10->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar3 >> 0x20);
    (pEVar10->m_vColor).field0_0x0.d[2] = uVar4;
    (pEVar10->m_vColor).field0_0x0.d[3] = uVar5;
                    /* end of inlined section */
    vTextSize.field0_0x0.d[0] =
         (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0] + (this->field0_0x0).m_fLeftOffset;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    vTextSize.field0_0x0.d[1] = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] + 0.002083;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    vColor.field0_0x0.d[0] = vTextSize.field0_0x0.d[0];
    vColor.field0_0x0.d[1] = vTextSize.field0_0x0.d[1];
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              ((this->field0_0x0).m_pFont,prc,(this->field0_0x0).m_szLabel,true,(EVec2 *)&vColor,
               E_FAX_RIGHT,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    vTextSize.field0_0x0.d[1] = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] + 0.002083;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    vTextSize.field0_0x0.d[0] =
         (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0] + 0.026125 +
         (this->field0_0x0).m_fLeftOffset;
    local_d0 = vTextSize.field0_0x0.d[0];
    local_cc = vTextSize.field0_0x0.d[1];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              ((this->field0_0x0).m_pFont,prc,(this->field0_0x0).m_szCurrentSelection,true,
               (EVec2 *)&local_d0,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)&vTextSize,(this->field0_0x0).m_pFont,
               SUB41((this->field0_0x0).m_szCurrentSelection,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar7 = (*(code *)pEVar1[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                       (this->field0_0x0).field0_0x0.m_activeCtrl,0x2000);
    if (lVar7 == 0) {
      vColor.field0_0x0.d[0] = (float)(int)_WHITE.field0_0x0._0_8_;
      vColor.field0_0x0.d[1] = (float)(int)((ulong)_WHITE.field0_0x0._0_8_ >> 0x20);
      vColor.field0_0x0.d[2] = _WHITE.field0_0x0.d[2];
      vColor.field0_0x0.d[3] = _WHITE.field0_0x0.d[3];
    }
    else {
      vColor.field0_0x0.d[0] = (float)(int)_CYAN.field0_0x0._0_8_;
      vColor.field0_0x0.d[1] = (float)(int)((ulong)_CYAN.field0_0x0._0_8_ >> 0x20);
      vColor.field0_0x0.d[2] = _CYAN.field0_0x0.d[2];
      vColor.field0_0x0.d[3] = _CYAN.field0_0x0.d[3];
    }
    Select__8ERShaderP3ERCi((this->field0_0x0).m_pRightArrowShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_bc = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] - 0.016;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_c0 = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0] + vTextSize.field0_0x0.d[0] +
               (this->field0_0x0).m_fLeftOffset + 0.030125;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_b0 = (EHashTableNode **)0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_ac = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_c0,&local_b0,
               &vColor);
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar7 = (*(code *)pEVar1[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                       (this->field0_0x0).field0_0x0.m_activeCtrl,0x8000);
    if (lVar7 == 0) {
      vColor.field0_0x0.d[0] = (float)(int)_WHITE.field0_0x0._0_8_;
      vColor.field0_0x0.d[1] = (float)(int)((ulong)_WHITE.field0_0x0._0_8_ >> 0x20);
      vColor.field0_0x0.d[2] = _WHITE.field0_0x0.d[2];
      vColor.field0_0x0.d[3] = _WHITE.field0_0x0.d[3];
    }
    else {
      vColor.field0_0x0.d[0] = (float)(int)_CYAN.field0_0x0._0_8_;
      vColor.field0_0x0.d[1] = (float)(int)((ulong)_CYAN.field0_0x0._0_8_ >> 0x20);
      vColor.field0_0x0.d[2] = _CYAN.field0_0x0.d[2];
      vColor.field0_0x0.d[3] = _CYAN.field0_0x0.d[3];
    }
    Select__8ERShaderP3ERCi((this->field0_0x0).m_pLeftArrowShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_c0 = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0] +
               (this->field0_0x0).m_fLeftOffset + 0.005;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_bc = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] - 0.016;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_a0 = (EFontSize *)0x3f800000;
    local_9c = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_c0,&local_a0,
               &vColor);
  }
  return;
}

void ECharedGender::Init() {
  short *psVar1;
  
  (this->field0_0x0).m_nCurrentState = '2';
  psVar1 = GetCreateASimString__7EGlobalPCc(&_globals,"gender");
  (this->field0_0x0).m_szLabel = psVar1;
  psVar1 = GetCreateASimString__7EGlobalPCc(&_globals,"male");
  (this->field0_0x0).m_szCurrentSelection = psVar1;
  *(undefined4 *)&this->m_bAllowTextChange = 1;
  return;
}

void ECharedGender::SetGender(bool bIsMale) {
  short *psVar1;
  char *pRef;
  
  if (bIsMale) {
    (this->field0_0x0).m_nCurrentState = '2';
    pRef = "male";
  }
  else {
    (this->field0_0x0).m_nCurrentState = '3';
    pRef = "female";
  }
  psVar1 = GetCreateASimString__7EGlobalPCc(&_globals,pRef);
  (this->field0_0x0).m_szCurrentSelection = psVar1;
  return;
}

bool ECharedGender::IsMale() {
  short *psVar1;
  
  psVar1 = GetCreateASimString__7EGlobalPCc(&_globals,"male");
  return (this->field0_0x0).m_szCurrentSelection == psVar1;
}

int ECharedPersonalItem::GetNumBlocksFilled() {
  return (int)this->m_nNumBlocksFilled;
}

void ECharedPersonalItem::SetNumBlocksFilled(int nNew) {
  this->m_nNumBlocksFilled = (uchar)nNew;
  return;
}

float ECharedPersonalItem::GetLeftOffset() {
  return this->m_fLeftOffset;
}

float ECharedPersonalItem::GetTotalWidth() {
  return this->m_fTotalWidth;
}

int ECharedBirthSign::GetCurrentSign() {
  return (int)this->m_nCurrentSign;
}

void ECharedBirthSign::SetSign(int nNewSign) {
  this->m_nCurrentSign = (uchar)nNewSign;
  return;
}

ECharedTextIcon* ECharedTextIcon::ECharedTextIcon() {
  __13EUIObjectNode(&this->field0_0x0);
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_15ECharedTextIcon;
  Init__15ECharedTextIcon(this);
  return this;
}

void ECharedTextIcon::~ECharedTextIcon(int __in_chrg) {
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_15ECharedTextIcon;
  Cleanup__15ECharedTextIcon(this);
  ___13EUIObjectNode(&this->field0_0x0,__in_chrg);
  return;
}

void ECharedTextIcon::NewLeftOffset(float fNewOffset) {
  this->m_fLeftOffset = fNewOffset;
  return;
}

float ECharedTextIcon::GetLeftOffset() {
  return this->m_fLeftOffset;
}

void ECharedName::~ECharedName(int __in_chrg) {
	ECharedTextIcon *this;
	int __in_chrg;
	
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.cpp */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_15ECharedTextIcon;
  Cleanup__15ECharedTextIcon(&this->field0_0x0);
  ___13EUIObjectNode((EUIObjectNode *)this,__in_chrg);
  return;
}

ECharedName* ECharedName::ECharedName() {
	ECharedTextIcon *this;
	
  __13EUIObjectNode((EUIObjectNode *)this);
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_15ECharedTextIcon;
  Init__15ECharedTextIcon(&this->field0_0x0);
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_11ECharedName;
  Init__11ECharedName(this);
  return this;
}

void ECharedAge::~ECharedAge(int __in_chrg) {
	ECharedTextIcon *this;
	int __in_chrg;
	
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.cpp */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_15ECharedTextIcon;
  Cleanup__15ECharedTextIcon(&this->field0_0x0);
  ___13EUIObjectNode((EUIObjectNode *)this,__in_chrg);
  return;
}

void ECharedAge::AllowTextChange(bool bAllow) {
  *(int *)&this->m_bAllowTextChange = (int)bAllow;
  return;
}

ECharedAge* ECharedAge::ECharedAge() {
	ECharedTextIcon *this;
	
  __13EUIObjectNode((EUIObjectNode *)this);
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_15ECharedTextIcon;
  Init__15ECharedTextIcon(&this->field0_0x0);
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_10ECharedAge;
  Init__10ECharedAge(this);
  return this;
}

void ECharedGender::~ECharedGender(int __in_chrg) {
	ECharedTextIcon *this;
	int __in_chrg;
	
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.cpp */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_15ECharedTextIcon;
  Cleanup__15ECharedTextIcon(&this->field0_0x0);
  ___13EUIObjectNode((EUIObjectNode *)this,__in_chrg);
  return;
}

void ECharedGender::AllowTextChange(bool bAllow) {
  *(int *)&this->m_bAllowTextChange = (int)bAllow;
  return;
}

ECharedGender* ECharedGender::ECharedGender() {
	ECharedTextIcon *this;
	
  __13EUIObjectNode((EUIObjectNode *)this);
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_15ECharedTextIcon;
  Init__15ECharedTextIcon(&this->field0_0x0);
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_13ECharedGender;
  Init__13ECharedGender(this);
  return this;
}

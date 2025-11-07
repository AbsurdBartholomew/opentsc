// STATUS: NOT STARTED

#include "charedmode.h"

ECharedMode* ECharedMode::ECharedMode() {
  this->m_pPanel = (ECharedPanel *)0x0;
  return this;
}

void ECharedMode::~ECharedMode(int __in_chrg) {
	void *pAddress;
	
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void ECharedMode::Init(int FromState) {
  *(undefined4 *)&this->m_BackgroundColorSet = 0;
  *(undefined4 *)this = 0;
  this->m_FromState = FromState;
  initContinue__11ECharedMode(this);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  *(undefined4 *)this = 1;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  _13EUIObjectNode_m_uiSfxBack = PlayGoBack__8EUiAudio;
  _13EUIObjectNode_m_uiSfxSelect = PlaySelect__8EUiAudio;
  _13EUIObjectNode_m_uiSfxNext = PlayMove__8EUiAudio;
  return;
}

void ECharedMode::initContinue() {
	void *result;
	
  ECharedPanel *pEVar1;
  
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpanel.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpanel.h */
  pEVar1 = (ECharedPanel *)_memmanAlloc__FUiUi(0x70b0,0x10);
  memset(pEVar1,0,0x70b0);
                    /* end of inlined section */
  pEVar1 = __12ECharedPanel(pEVar1);
  this->m_pPanel = pEVar1;
  Init__12ECharedPanel(pEVar1);
  return;
}

void ECharedMode::Reset(int ToState) {
  ECharedPanel *pEVar1;
  EUIObjectNode__vtable *pEVar2;
  
  pEVar1 = this->m_pPanel;
  if (pEVar1 != (ECharedPanel *)0x0) {
    pEVar2 = (pEVar1->field0_0x0).__vtable;
    (*(code *)pEVar2->Draw)((int)pEVar1->m_dpadIcons + *(short *)&pEVar2->Update + -0x4c,3);
  }
  this->m_pPanel = (ECharedPanel *)0x0;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  _13EUIObjectNode_m_uiSfxBack = (undefined1 *)0x0;
  _13EUIObjectNode_m_uiSfxSelect = (undefined1 *)0x0;
  _13EUIObjectNode_m_uiSfxNext = (undefined1 *)0x0;
  return;
}

int ECharedMode::Update() {
  int iVar1;
  
  iVar1 = UpdatePanel__12ECharedPanel(this->m_pPanel);
  return iVar1;
}

void ECharedMode::Draw(ERC *prc) {
  EGlobalManagerClient__vtable *pEVar1;
  EUIObjectNode__vtable *pEVar2;
  EGraphics *pEVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  pEVar3 = _pGfx;
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  if (*(int *)&this->m_BackgroundColorSet == 0) {
    *(undefined4 *)&this->m_BackgroundColorSet = 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    pEVar1 = (pEVar3->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_40 = 0x3eb33333;
    local_3c = 0x3ecccccd;
    local_38 = 0x3f4ccccd;
                    /* end of inlined section */
    (*(code *)pEVar1[4].EGlobalManagerClient)
              ((int)&(pEVar3->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 4),&local_40,1);
  }
  pEVar2 = (this->m_pPanel->field0_0x0).__vtable;
  (*(code *)pEVar2->Message)
            ((int)this->m_pPanel->m_dpadIcons + *(short *)&pEVar2->SetBoxDims + -0x4c,prc);
  return;
}

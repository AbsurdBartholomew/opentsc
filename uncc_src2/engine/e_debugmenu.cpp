// STATUS: NOT STARTED

#include "e_debugmenu.h"

EDebugMenu _debugmenu = {
	/* .m_enable = */ false,
	/* .m_maxWidth = */ 0.f,
	/* .m_maxWidthNeedsComputing = */ false,
	/* .m_itemList = */ {
		/* .m_pHead = */ NULL,
		/* .m_pTail = */ NULL
	},
	/* .m_cSel = */ 0,
	/* .m_count = */ 0
};

__vtbl_ptr_type EDebugMenuItem virtual table[6] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDebugMenuItem::GetDescription,
		/* .__delta2 = */ -28472
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDebugMenuItem::GetValue,
		/* .__delta2 = */ -8088
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDebugMenuItem::ButtonPress,
		/* .__delta2 = */ -28456
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDebugMenuItem::ButtonPress,
		/* .__delta2 = */ -8080
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

static EVec3 _labelColor;
static EVec3 _valueColor;

EDebugMenuItem* EDebugMenuItem::EDebugMenuItem() {
  this->m_pNext = (EDebugMenuItem *)0x0;
  this->__vtable = (EDebugMenuItem__vtable *)_vt_14EDebugMenuItem;
  this->m_pLast = (EDebugMenuItem *)0x0;
  return this;
}

EDebugMenu* EDebugMenu::EDebugMenu() {
  *(undefined4 *)&this->m_maxWidthNeedsComputing = 1;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_itemList).m_pTail = (EDebugMenuItem *)0x0;
  (this->m_itemList).m_pHead = (EDebugMenuItem *)0x0;
                    /* end of inlined section */
  *(undefined4 *)this = 1;
  this->m_count = 0;
  this->m_cSel = 0;
  return this;
}

void EDebugMenu::Add(EDebugMenuItem &item) {
	TLinkedList<EDebugMenuItem,0,4> *this;
	EDebugMenuItem *pNewNode;
	EDebugMenuItem *pNode;
	void *pNode;
	
  EDebugMenuItem *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  item->m_pLast = (this->m_itemList).m_pTail;
  pEVar1 = (this->m_itemList).m_pTail;
  if (pEVar1 == (EDebugMenuItem *)0x0) {
    (this->m_itemList).m_pHead = item;
  }
  else {
    pEVar1->m_pNext = item;
  }
  item->m_pNext = (EDebugMenuItem *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_itemList).m_pTail = item;
                    /* end of inlined section */
  *(undefined4 *)&this->m_maxWidthNeedsComputing = 1;
  this->m_count = this->m_count + 1;
  return;
}

void EDebugMenu::Remove(EDebugMenuItem &item) {
	TLinkedList<EDebugMenuItem,0,4> *this;
	EDebugMenuItem *pNode;
	void *pNode;
	EDebugMenuItem *pNode;
	void *pNode;
	void *pNode;
	EDebugMenuItem *pNode;
	void *pNode;
	EDebugMenuItem *pNode;
	EDebugMenuItem *pNode;
	
  int iVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  if ((this->m_itemList).m_pHead == item) {
    (this->m_itemList).m_pHead = item->m_pNext;
  }
  else {
    item->m_pLast->m_pNext = item->m_pNext;
  }
  if ((this->m_itemList).m_pTail == item) {
    (this->m_itemList).m_pTail = item->m_pLast;
  }
  else {
    item->m_pNext->m_pLast = item->m_pLast;
  }
                    /* end of inlined section */
  *(undefined4 *)&this->m_maxWidthNeedsComputing = 1;
  iVar1 = this->m_count + -1;
  this->m_count = iVar1;
  if ((iVar1 != 0) && (iVar1 <= this->m_cSel)) {
    this->m_cSel = this->m_cSel + -1;
  }
  return;
}

void EDebugMenu::ComputeMaxWidth(ERFont *pFont) {
	EDebugMenuItem *pi;
	char szBuffer[128];
	char szBuffer2[130];
	EVec2 vSize;
	ERFont *this;
	void *pNode;
	
  EDebugMenuItem__vtable *pEVar1;
  EDebugMenuItem *pEVar2;
  char szBuffer [128];
  char szBuffer2 [130];
  EVec2 vSize;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_itemList).m_pHead;
                    /* end of inlined section */
  this->m_maxWidth = 0.0;
  if (pEVar2 != (EDebugMenuItem *)0x0) {
    pEVar1 = pEVar2->__vtable;
    while( true ) {
      (*(code *)pEVar1->ButtonPress)
                ((int)&pEVar2->m_pLast + (int)*(short *)&pEVar1->GetValue,szBuffer);
      if (szBuffer[0] != '\0') {
        sprintf(szBuffer2,"%s: ");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        DoGetStringSize__6ERFontPvbP7EWindow((ERFont *)&vSize,pFont,false,(EWindow *)0x0);
                    /* end of inlined section */
        if (this->m_maxWidth < vSize.field0_0x0.d[0]) {
          this->m_maxWidth = vSize.field0_0x0.d[0];
        }
      }
                    /* end of inlined section */
      pEVar2 = pEVar2->m_pNext;
      if (pEVar2 == (EDebugMenuItem *)0x0) break;
      pEVar1 = pEVar2->__vtable;
    }
  }
  *(undefined4 *)&this->m_maxWidthNeedsComputing = 0;
  return;
}

void EDebugMenu::Draw() {
	ERFont *pFont;
	ERC *prc;
	EWindow win;
	float leftIndent;
	float topIndent;
	float yspace;
	int pos;
	EDebugMenuItem *pi;
	ERFont *this;
	EVec2 vPos;
	char szBuffer[128];
	float x;
	char szDescription[129];
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	void *pNode;
	
  EGlobalManagerClient__vtable *pEVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ERFont *this_00;
  EDebugMenuItem__vtable *pEVar4;
  int iVar5;
  undefined8 uVar6;
  ERC *prc;
  EDebugMenuItem *pEVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  EWindow win;
  EVec2 vPos;
  char szBuffer [128];
  float local_160;
  float local_15c;
  float local_158;
  undefined4 local_154;
  char szDescription [129];
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  if (((*(int *)this != 0) && ((this->m_itemList).m_pHead != (EDebugMenuItem *)0x0)) &&
     (this_00 = GetSystemFont__9EGraphics(_pGfx), this_00 != (ERFont *)0x0)) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    uVar6 = (*(code *)pEVar1[6].EGlobalManagerClient)
                      ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 6),0);
    __7EWindow(&win);
    prc = (ERC *)uVar6;
    Select__7EWindowP3ERC(&win,prc);
    Select__6ERFontP3ERC(this_00,prc);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    (this_00->m_vColor).field0_0x0.d[0] = 1.0;
    (this_00->m_vColor).field0_0x0.d[1] = 1.0;
    (this_00->m_vColor).field0_0x0.d[2] = 1.0;
    (this_00->m_vColor).field0_0x0.d[3] = 1.0;
                    /* end of inlined section */
    if (*(int *)&this->m_maxWidthNeedsComputing != 0) {
      ComputeMaxWidth__10EDebugMenuP6ERFont(this,this_00);
    }
    fVar9 = GetLineSpacing__6ERFontP7EWindow(this_00,(EWindow *)0x0);
    fVar12 = 0.05;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
    fVar9 = fVar9 * 1.1;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pEVar7 = (this->m_itemList).m_pHead;
                    /* end of inlined section */
    iVar8 = 0;
    do {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      fVar10 = (float)iVar8 * fVar9 + 0.07;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      fVar11 = fVar12;
      (*(code *)pEVar7->__vtable->ButtonPress)
                ((int)&pEVar7->m_pLast + (int)*(short *)&pEVar7->__vtable->GetValue,szBuffer);
      uVar3 = _labelColor.field0_0x0.d[2];
      uVar2 = _labelColor.field0_0x0.d[1];
      if (szBuffer[0] == '\0') {
        pEVar4 = pEVar7->__vtable;
        vPos.field0_0x0.d[0] = fVar12;
      }
      else {
        if (iVar8 == this->m_cSel) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          local_160 = _labelColor.field0_0x0.d[0];
          local_15c = _labelColor.field0_0x0.d[1];
          local_158 = _labelColor.field0_0x0.d[2];
          local_154 = 0x3f800000;
          (this_00->m_vColor).field0_0x0.d[0] = _labelColor.field0_0x0.d[0];
          (this_00->m_vColor).field0_0x0.d[1] = uVar2;
          (this_00->m_vColor).field0_0x0.d[2] = uVar3;
          (this_00->m_vColor).field0_0x0.d[3] = 1.0;
        }
                    /* end of inlined section */
        sprintf(szDescription,"%s:");
        local_160 = fVar12;
        local_15c = fVar10;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (this_00,prc,szDescription,false,(EVec2 *)&local_160,E_FAX_LEFT,E_FAY_TOP,
                   (EVec2 *)0x0);
                    /* end of inlined section */
        vPos.field0_0x0.d[0] = fVar12 + this->m_maxWidth;
        pEVar4 = pEVar7->__vtable;
      }
      fVar12 = fVar11;
      (**(code **)(pEVar4 + 1))
                ((int)&pEVar7->m_pLast + (int)*(short *)&pEVar4->ButtonPress,szBuffer);
      uVar3 = _valueColor.field0_0x0.d[2];
      uVar2 = _valueColor.field0_0x0.d[1];
      iVar5 = this->m_cSel;
      if (szBuffer[0] != '\0') {
        if (iVar8 == iVar5) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          local_158 = _valueColor.field0_0x0.d[2];
          local_154 = 0x3f800000;
          (this_00->m_vColor).field0_0x0.d[0] = _valueColor.field0_0x0.d[0];
          (this_00->m_vColor).field0_0x0.d[1] = uVar2;
          (this_00->m_vColor).field0_0x0.d[2] = uVar3;
          (this_00->m_vColor).field0_0x0.d[3] = 1.0;
        }
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        local_160 = vPos.field0_0x0.d[0];
        local_15c = fVar10;
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (this_00,prc,szBuffer,false,(EVec2 *)&local_160,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0)
        ;
                    /* end of inlined section */
        iVar5 = this->m_cSel;
      }
      if (iVar8 == iVar5) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_154 = 0x3f800000;
        local_158 = 1.0;
        local_15c = 1.0;
        local_160 = 1.0;
        (this_00->m_vColor).field0_0x0.d[0] = 1.0;
        (this_00->m_vColor).field0_0x0.d[1] = 1.0;
        (this_00->m_vColor).field0_0x0.d[2] = 1.0;
        (this_00->m_vColor).field0_0x0.d[3] = 1.0;
                    /* end of inlined section */
        pEVar7 = pEVar7->m_pNext;
      }
      else {
        pEVar7 = pEVar7->m_pNext;
      }
      iVar8 = iVar8 + 1;
    } while (pEVar7 != (EDebugMenuItem *)0x0);
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[6].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[6].ManagedStartup,uVar6);
    ___7EWindow(&win,2);
  }
  return;
}

void EDebugMenu::Update() {
	float stick;
	bool stickLeft;
	bool left;
	EDebugMenuItem *pi;
	int i;
	void *pNode;
	
  EDebugMenuItem__vtable *pEVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  EDebugMenuItem *pEVar6;
  float fVar7;
  float fVar8;
  
  if (this->m_count == 0) {
    return;
  }
  if (*(int *)this == 0) {
    return;
  }
  uVar3 = GetPressed__11EControlleri(_ctrlPads[0],0x1000);
  if (uVar3 == 0) {
    uVar3 = GetPressed__11EControlleri(_ctrlPads[0],0x4000);
    if ((uVar3 != 0) && (iVar4 = this->m_cSel + 1, this->m_cSel = iVar4, iVar4 == this->m_count)) {
      this->m_cSel = 0;
    }
  }
  else {
    iVar4 = this->m_cSel + -1;
    this->m_cSel = iVar4;
    if (iVar4 < 0) {
      this->m_cSel = this->m_count + -1;
    }
  }
  fVar8 = 0.0;
  fVar7 = GetStick__11EControllerii(_ctrlPads[0],0,0);
  bVar2 = fVar8 <= fVar7;
  fVar7 = fVar7 * fVar7;
  uVar3 = GetPressed__11EControlleri(_ctrlPads[0],0x8000);
  uVar5 = GetPressed__11EControlleri(_ctrlPads[0],0x2000);
  if (uVar3 == 0) {
    if (uVar5 != 0) {
      iVar4 = this->m_cSel;
      goto LAB_002d8fac;
    }
    if (fVar7 == fVar8) {
      return;
    }
  }
                    /* end of inlined section */
  iVar4 = this->m_cSel;
LAB_002d8fac:
                    /* end of inlined section */
  pEVar6 = (this->m_itemList).m_pHead;
  if (0 < iVar4) {
    do {
                    /* end of inlined section */
      iVar4 = iVar4 + -1;
      pEVar6 = pEVar6->m_pNext;
    } while (iVar4 != 0);
  }
  pEVar1 = pEVar6->__vtable;
  if (fVar7 == 0.0) {
    (*(code *)pEVar1[1].GetValue)
              ((int)&pEVar6->m_pLast + (int)*(short *)&pEVar1[1].GetDescription,uVar3 == 0);
  }
  else {
    (*(code *)pEVar1[1].ButtonPress)
              (fVar7,(int)&pEVar6->m_pLast + (int)*(short *)&pEVar1[1].ButtonPress,bVar2);
  }
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
    __10EDebugMenu(&_debugmenu);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    _labelColor.field0_0x0.d[0] = 0.7;
    _labelColor.field0_0x0.d[2] = 0.4;
    _valueColor.field0_0x0.d[2] = 0.5;
    _valueColor.field0_0x0.d[0] = 1.0;
    _valueColor.field0_0x0.d[1] = 1.0;
    _labelColor.field0_0x0.d[1] = 1.0;
  }
                    /* end of inlined section */
  return;
}

void EDebugMenuItem::GetDescription(char *szBuffer) {
  *szBuffer = '\0';
  return;
}

void EDebugMenuItem::GetValue(char *szBuffer) {
  *szBuffer = '\0';
  return;
}

void EDebugMenuItem::ButtonPress(EDebugMenuButton button) {
  return;
}

void EDebugMenuItem::ButtonPress(EDebugMenuButton button, float stickval) {
  return;
}

void global constructors keyed to _debugmenu() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

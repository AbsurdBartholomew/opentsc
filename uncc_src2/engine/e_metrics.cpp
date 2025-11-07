// STATUS: NOT STARTED

#include "e_metrics.h"

EMetrics _metrics = {
	/* .m_enable = */ false,
	/* .m_maxWidth = */ 0.f,
	/* .m_maxWidthNeedsComputing = */ false,
	/* .m_metricList = */ {
		/* .m_pHead = */ NULL,
		/* .m_pTail = */ NULL
	}
};

EMetrics* EMetrics::EMetrics() {
  *(undefined4 *)&this->m_maxWidthNeedsComputing = 1;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_metricList).m_pTail = (EMetricValue *)0x0;
  (this->m_metricList).m_pHead = (EMetricValue *)0x0;
                    /* end of inlined section */
  *(undefined4 *)this = 1;
  return this;
}

EMetricValue* EMetrics::AddByType(void *pValue, char *szDescription, EMetricType type) {
	EMetricValue *pmv;
	TLinkedList<EMetricValue,12,16> *this;
	EMetricValue *pNewNode;
	EMetricValue *pNode;
	void *pNode;
	
  EMetricValue *pEVar1;
  EMetricValue *pEVar2;
  
  pEVar2 = (EMetricValue *)__builtin_new(0x14);
  if (pEVar2 == (EMetricValue *)0x0) {
    pEVar2 = (EMetricValue *)0x0;
  }
  else {
    pEVar2->pValue = pValue;
    pEVar2->szDescription = szDescription;
    pEVar2->type = type;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pEVar2->pLast = (this->m_metricList).m_pTail;
    pEVar1 = (this->m_metricList).m_pTail;
    if (pEVar1 == (EMetricValue *)0x0) {
      (this->m_metricList).m_pHead = pEVar2;
    }
    else {
      pEVar1->pNext = pEVar2;
    }
    pEVar2->pNext = (EMetricValue *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    (this->m_metricList).m_pTail = pEVar2;
                    /* end of inlined section */
    *(undefined4 *)&this->m_maxWidthNeedsComputing = 1;
  }
  return pEVar2;
}

void EMetrics::Remove(EMetricValue *pMetric) {
	TLinkedList<EMetricValue,12,16> *this;
	EMetricValue *pNode;
	EMetricValue *pNode;
	TLinkedList<EMetricValue,12,16> *this;
	void *pNode;
	EMetricValue *pNode;
	void *pNode;
	void *pNode;
	EMetricValue *pNode;
	void *pNode;
	EMetricValue *pNode;
	EMetricValue *pNode;
	void *pAddress;
	
  if (pMetric != (EMetricValue *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    if ((this->m_metricList).m_pHead == pMetric) {
      (this->m_metricList).m_pHead = pMetric->pNext;
    }
    else {
      pMetric->pLast->pNext = pMetric->pNext;
    }
    if ((this->m_metricList).m_pTail == pMetric) {
      (this->m_metricList).m_pTail = pMetric->pLast;
    }
    else {
      pMetric->pNext->pLast = pMetric->pLast;
    }
    _memmanFree__FPv(pMetric);
                    /* end of inlined section */
    *(undefined4 *)&this->m_maxWidthNeedsComputing = 1;
  }
  return;
}

void EMetrics::ComputeMaxWidth(ERFont *pFont) {
	EMetricValue *pmv;
	char szBuffer[80];
	EVec2 vSize;
	ERFont *this;
	void *pNode;
	
  char *pcVar1;
  EMetricValue *pEVar2;
  char szBuffer [80];
  EVec2 vSize;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_metricList).m_pHead;
                    /* end of inlined section */
  this->m_maxWidth = 0.0;
  if (pEVar2 != (EMetricValue *)0x0) {
    pcVar1 = pEVar2->szDescription;
    while( true ) {
      if (pcVar1 != (char *)0x0) {
        sprintf(szBuffer,"%s: ");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        DoGetStringSize__6ERFontPvbP7EWindow
                  ((ERFont *)&vSize,pFont,SUB41(szBuffer,0),(EWindow *)0x0);
                    /* end of inlined section */
        if (this->m_maxWidth < vSize.field0_0x0.d[0]) {
          this->m_maxWidth = vSize.field0_0x0.d[0];
        }
      }
                    /* end of inlined section */
      pEVar2 = pEVar2->pNext;
      if (pEVar2 == (EMetricValue *)0x0) break;
      pcVar1 = pEVar2->szDescription;
    }
  }
  *(undefined4 *)&this->m_maxWidthNeedsComputing = 0;
  return;
}

void EMetrics::Draw() {
	ERFont *pFont;
	ERC *prc;
	EWindow win;
	float leftIndent;
	float bottomIndent;
	float yspace;
	int pos;
	EMetricValue *pmv;
	TLinkedList<EMetricValue,12,16> *this;
	ERFont *this;
	char szValue[20];
	EVec2 vPos;
	float x;
	char szDescription[80];
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	EMetricValue *pNode;
	
  EGlobalManagerClient__vtable *pEVar1;
  EMetricType EVar2;
  ERFont *this_00;
  undefined8 uVar3;
  ERC *prc;
  EMetricValue *pEVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  int iVar5;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar6;
  float fVar7;
  float fVar8;
  EWindow win;
  EVec2 vPos;
  char szValue [20];
  char szDescription [80];
  undefined4 local_d0;
  float local_cc;
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
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_90 = (undefined4)unaff_s3;
  uStack_8c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s8;
  uStack_3c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_50 = (undefined4)unaff_s7;
  uStack_4c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_60 = (undefined4)unaff_s6;
  uStack_5c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s5;
  uStack_6c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_80 = (undefined4)unaff_s4;
  uStack_7c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_a0 = (undefined4)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_b0 = (undefined4)unaff_s1;
  uStack_ac = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_c0 = (undefined4)unaff_s0;
  uStack_bc = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  if (((*(int *)this != 0) && ((this->m_metricList).m_pHead != (EMetricValue *)0x0)) &&
     (this_00 = GetSystemFont__9EGraphics(_pGfx), this_00 != (ERFont *)0x0)) {
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    uVar3 = (*(code *)pEVar1[6].EGlobalManagerClient)
                      ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 6),0);
    __7EWindow(&win);
    prc = (ERC *)uVar3;
    Select__7EWindowP3ERC(&win,prc);
    Select__6ERFontP3ERC(this_00,prc);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    (this_00->m_vColor).field0_0x0.d[0] = 1.0;
    (this_00->m_vColor).field0_0x0.d[1] = 1.0;
    (this_00->m_vColor).field0_0x0.d[2] = 1.0;
    (this_00->m_vColor).field0_0x0.d[3] = 1.0;
                    /* end of inlined section */
    if (*(int *)&this->m_maxWidthNeedsComputing != 0) {
      ComputeMaxWidth__8EMetricsP6ERFont(this,this_00);
    }
    fVar6 = GetLineSpacing__6ERFontP7EWindow(this_00,(EWindow *)0x0);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pEVar4 = (this->m_metricList).m_pTail;
                    /* end of inlined section */
    fVar8 = 0.07;
    iVar5 = 0;
    do {
      EVar2 = pEVar4->type;
      if (EVar2 == E_METRIC_INT) {
        sprintf(szValue,"%d");
      }
      else if ((int)EVar2 < 2) {
        if (EVar2 == E_METRIC_FLOAT) {
          sprintf(szValue,"%f");
        }
      }
      else if (EVar2 == E_METRIC_PTR) {
        sprintf(szValue,"0x%08x");
      }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      vPos.field0_0x0.d[0] = 0.05;
                    /* end of inlined section */
      fVar7 = (1.0 - fVar8) - (float)iVar5 * fVar6 * 1.1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      if (pEVar4->szDescription != (char *)0x0) {
        sprintf((char *)(EVec2 *)szDescription,"%s:");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_d0 = 0x3d4ccccd;
        local_cc = fVar7;
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (this_00,prc,(EVec2 *)szDescription,false,(EVec2 *)&local_d0,E_FAX_LEFT,
                   E_FAY_BOTTOM,(EVec2 *)0x0);
                    /* end of inlined section */
        vPos.field0_0x0.d[0] = this->m_maxWidth + 0.05;
      }
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      szDescription._0_4_ = vPos.field0_0x0.d[0];
      szDescription._4_4_ = fVar7;
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this_00,prc,szValue,false,(EVec2 *)szDescription,E_FAX_LEFT,E_FAY_BOTTOM,
                 (EVec2 *)0x0);
                    /* end of inlined section */
      pEVar4 = pEVar4->pLast;
      iVar5 = iVar5 + 1;
    } while (pEVar4 != (EMetricValue *)0x0);
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[6].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[6].ManagedStartup,uVar3);
    ___7EWindow(&win,2);
  }
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
    __8EMetrics(&_metrics);
  }
  return;
}

void global constructors keyed to _metrics() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

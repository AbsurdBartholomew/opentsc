// STATUS: NOT STARTED

#include "e_uimonitorautorep.h"

__vtbl_ptr_type EUiMonitorAutoRepeat virtual table[3] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUiMonitorAutoRepeat::~EUiMonitorAutoRepeat,
		/* .__delta2 = */ 6592
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EUiMonitorAutoRepeat* EUiMonitorAutoRepeat::EUiMonitorAutoRepeat(EUIObjectNode &rUInode, float delay, float period) {
	int i;
	int j;
	int k;
	
  int iVar1;
  bool (*pabVar2) [2];
  int *piVar3;
  float (*pafVar4) [2];
  int iVar5;
  int iVar6;
  
  this->m_rUInode = rUInode;
  this->m_delay = delay;
  this->m_period = period;
  this->m_maxUpdatesPerFrame = -1;
  this->__vtable = (EUiMonitorAutoRepeat__vtable *)_vt_20EUiMonitorAutoRepeat;
  memset(this->m_totalDt,0,0x40);
  memset(this->m_bAutoRepeating,0,0x40);
  iVar1 = 0;
  iVar5 = 0;
  while( true ) {
    iVar6 = iVar5 + 1;
    *(undefined4 *)((int)this->m_stickOwner + iVar1) = 0xffffffff;
    iVar1 = 1;
    pabVar2 = this->m_bStickAutoRepeating[iVar5 * 4];
    pafVar4 = this->m_stickDt[iVar5];
    do {
      *(undefined4 *)pabVar2 = 0;
      iVar1 = iVar1 + -1;
      (*pafVar4)[0] = 0.0;
      pabVar2 = pabVar2[2];
      pafVar4 = (float (*) [2])(*pafVar4 + 1);
    } while (-1 < iVar1);
    if (1 < iVar6) break;
    iVar1 = iVar6 * 4;
    iVar5 = iVar6;
  }
  piVar3 = this->m_buttonOwner + 0xf;
  iVar5 = 0xf;
  do {
    *piVar3 = -1;
    iVar5 = iVar5 + -1;
    piVar3 = piVar3 + -1;
  } while (-1 < iVar5);
  this->m_lastEvenOdd[1] = -1;
  this->m_lastEvenOdd[0] = -1;
  return this;
}

void EUiMonitorAutoRepeat::UpdateButtons(int ctrlIndex) {
	int iCtrlStart;
	int iCtrlEnd;
	int j;
	EControllerContext *pPadContext;
	int i;
	int buttonId;
	EControllerContext *this;
	int index;
	int updates;
	
  EUIObjectNode__vtable *pEVar1;
  bool bVar2;
  EControllerContext *this_00;
  uint uVar3;
  int iVar4;
  bool *pbVar5;
  float *pfVar6;
  int ctrlIndex_00;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int mask;
  float fVar10;
  float fVar11;
  int iCtrlEnd;
  EControllerContext *pPadContext;
  
  if (this->m_lastEvenOdd[0] == -1) {
    this->m_lastEvenOdd[0] = _evenodd;
  }
  else {
    if (this->m_lastEvenOdd[0] == _evenodd) {
      return;
    }
    this->m_lastEvenOdd[0] = _evenodd;
  }
  ctrlIndex_00 = ctrlIndex;
  iCtrlEnd = ctrlIndex;
  if (ctrlIndex == -1) {
    ctrlIndex_00 = 0;
    iCtrlEnd = 7;
  }
  do {
    if (iCtrlEnd < ctrlIndex_00) {
      return;
    }
    this_00 = LockControllerFocus__18EControllerManagerib(_pCtrlMan,ctrlIndex_00,true);
    uVar9 = 0;
    do {
      piVar7 = this->m_buttonOwner + uVar9;
      if ((*piVar7 == -1) || (*piVar7 == ctrlIndex_00)) {
                    /* inlined from e_ctrlcontext.h */
                    /* end of inlined section */
                    /* inlined from e_ctrlcontext.h */
        mask = 1 << (uVar9 & 0x1f);
                    /* end of inlined section */
        uVar3 = GetButtonsUp__18EControllerContexti(this_00,mask);
        if (uVar3 == 0) {
          *piVar7 = ctrlIndex_00;
          pfVar6 = this->m_totalDt + uVar9;
          pbVar5 = this->m_bAutoRepeating + uVar9 * 4;
          fVar10 = *pfVar6 + _dt;
          *pfVar6 = fVar10;
          iVar4 = *(int *)pbVar5;
          if (iVar4 == 0) {
            if (this->m_delay < fVar10) {
              *(int *)pbVar5 = 1;
              *pfVar6 = 0.0;
              iVar4 = *(int *)pbVar5;
            }
            if (iVar4 == 0) goto LAB_002a1500;
          }
          if (this->m_period < this->m_totalDt[uVar9]) {
            iVar4 = this->m_maxUpdatesPerFrame;
            iVar8 = 1;
            if (0 < iVar4) goto LAB_002a140c;
            while (iVar4 == -1) {
LAB_002a140c:
              do {
                pfVar6 = this->m_totalDt + uVar9;
                *pfVar6 = *pfVar6 - this->m_period;
                pEVar1 = this->m_rUInode->__vtable;
                (*(code *)pEVar1[1].SetBoxDims)
                          ((int)&(this->m_rUInode->m_ChildList).field0_0x0.m_l.m_pHead +
                           (int)*(short *)&pEVar1[1].SetPos,mask);
                if (*pfVar6 <= this->m_period) goto LAB_002a1474;
                iVar4 = this->m_maxUpdatesPerFrame;
                bVar2 = iVar8 < iVar4;
                iVar8 = iVar8 + 1;
              } while (bVar2);
            }
          }
LAB_002a1474:
          fVar10 = this->m_period;
          if (fVar10 < this->m_totalDt[uVar9]) {
            pfVar6 = this->m_totalDt + uVar9;
            fVar11 = *pfVar6;
            while( true ) {
              fVar11 = fVar11 - fVar10;
              *pfVar6 = fVar11;
              fVar10 = this->m_period;
              if (fVar11 <= fVar10) break;
              fVar11 = *pfVar6;
            }
          }
        }
        else if ((ctrlIndex != -1) || (*piVar7 == ctrlIndex_00)) {
          this->m_totalDt[uVar9] = 0.0;
          *(undefined4 *)(this->m_bAutoRepeating + uVar9 * 4) = 0;
          *piVar7 = -1;
        }
      }
LAB_002a1500:
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < 0x10);
    ReleaseControllerFocus__18EControllerManagerib(_pCtrlMan,ctrlIndex_00,true);
    ctrlIndex_00 = ctrlIndex_00 + 1;
  } while( true );
}

void EUiMonitorAutoRepeat::UpdateSticks(int ctrlIndex) {
	int iCtrlStart;
	int iCtrlEnd;
	int k;
	EControllerContext *pPadContext;
	int i;
	int j;
	float stickValue;
	float lastStick;
	int updates;
	
  EUIObjectNode__vtable *pEVar1;
  bool bVar2;
  EControllerContext *this_00;
  int iVar3;
  double dVar4;
  float *pfVar5;
  bool (*pabVar6) [2];
  int ctrlIndex_00;
  int iVar7;
  int axisIndex;
  int iVar8;
  int stickIndex;
  float fVar9;
  float fVar10;
  int iCtrlEnd;
  EControllerContext *pPadContext;
  
  if (this->m_lastEvenOdd[1] == -1) {
    this->m_lastEvenOdd[1] = _evenodd;
  }
  else {
    if (this->m_lastEvenOdd[1] == _evenodd) {
      return;
    }
    this->m_lastEvenOdd[1] = _evenodd;
  }
  ctrlIndex_00 = ctrlIndex;
  iCtrlEnd = ctrlIndex;
  if (ctrlIndex == -1) {
    ctrlIndex_00 = 0;
    iCtrlEnd = 7;
  }
  do {
    if (iCtrlEnd < ctrlIndex_00) {
      return;
    }
    this_00 = LockControllerFocus__18EControllerManagerib(_pCtrlMan,ctrlIndex_00,true);
    stickIndex = 0;
    do {
      iVar7 = stickIndex + 1;
      axisIndex = 0;
      do {
        fVar9 = GetStick__18EControllerContextii(this_00,stickIndex,axisIndex);
        fVar10 = GetLastStick__18EControllerContextii(this_00,stickIndex,axisIndex);
        dVar4 = (double)fabs((long)(double)fVar9);
        iVar3 = dpcmp((long)(1.0 - dVar4),0x3fb99999a0000000);
        if (iVar3 < 0) {
          dVar4 = (double)fabs((long)(double)fVar10);
          iVar3 = dpcmp((long)(1.0 - dVar4),0x3fb99999a0000000);
          if (-1 < iVar3) goto LAB_002a18f4;
          iVar3 = this->m_stickOwner[stickIndex];
          if ((iVar3 == -1) || (iVar3 == ctrlIndex_00)) {
            this->m_stickOwner[stickIndex] = ctrlIndex_00;
            if (axisIndex == 1) {
              fVar9 = -fVar9;
            }
            pabVar6 = this->m_bStickAutoRepeating[stickIndex * 4 + axisIndex * 2];
            pfVar5 = this->m_stickDt[stickIndex] + axisIndex;
            fVar10 = *pfVar5 + _dt;
            *pfVar5 = fVar10;
            iVar3 = *(int *)pabVar6;
            if (iVar3 == 0) {
              if (this->m_delay < fVar10) {
                *(int *)pabVar6 = 1;
                *pfVar5 = 0.0;
                iVar3 = *(int *)pabVar6;
              }
              if (iVar3 == 0) goto LAB_002a1944;
            }
            fVar10 = this->m_period;
            if (fVar10 < this->m_stickDt[stickIndex][axisIndex]) {
              iVar3 = this->m_maxUpdatesPerFrame;
              iVar8 = 1;
              if (0 < iVar3) goto LAB_002a17e4;
              while (iVar3 == -1) {
LAB_002a17e4:
                do {
                  pfVar5 = this->m_stickDt[stickIndex] + axisIndex;
                  *pfVar5 = *pfVar5 - this->m_period;
                  if (0.0 < fVar9) {
                    pEVar1 = this->m_rUInode->__vtable;
                    (*(code *)pEVar1[1].Message)
                              ((int)&(this->m_rUInode->m_ChildList).field0_0x0.m_l.m_pHead +
                               (int)*(short *)&pEVar1[1].SetBoxDims,stickIndex,axisIndex,1);
                  }
                  else {
                    pEVar1 = this->m_rUInode->__vtable;
                    (*(code *)pEVar1[1].Message)
                              ((int)&(this->m_rUInode->m_ChildList).field0_0x0.m_l.m_pHead +
                               (int)*(short *)&pEVar1[1].SetBoxDims,stickIndex,axisIndex,
                               0xffffffffffffffff);
                  }
                  fVar10 = this->m_period;
                  if (this->m_stickDt[stickIndex][axisIndex] <= fVar10) goto LAB_002a1898;
                  iVar3 = this->m_maxUpdatesPerFrame;
                  bVar2 = iVar8 < iVar3;
                  iVar8 = iVar8 + 1;
                } while (bVar2);
              }
            }
LAB_002a1898:
            if (fVar10 < this->m_stickDt[stickIndex][axisIndex]) {
              do {
                pfVar5 = this->m_stickDt[stickIndex] + axisIndex;
                fVar9 = *pfVar5 - fVar10;
                *pfVar5 = fVar9;
                fVar10 = this->m_period;
              } while (fVar10 < fVar9);
            }
          }
        }
        else {
LAB_002a18f4:
          if ((ctrlIndex != -1) || (this->m_stickOwner[stickIndex] == ctrlIndex_00)) {
            this->m_stickDt[stickIndex][axisIndex] = 0.0;
            *(undefined4 *)this->m_bStickAutoRepeating[stickIndex * 4 + axisIndex * 2] = 0;
            this->m_stickOwner[stickIndex] = -1;
          }
        }
LAB_002a1944:
        axisIndex = axisIndex + 1;
      } while (axisIndex < 2);
      stickIndex = iVar7;
    } while (iVar7 < 2);
    ReleaseControllerFocus__18EControllerManagerib(_pCtrlMan,ctrlIndex_00,true);
    ctrlIndex_00 = ctrlIndex_00 + 1;
  } while( true );
}

void EUiMonitorAutoRepeat::~EUiMonitorAutoRepeat(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (EUiMonitorAutoRepeat__vtable *)_vt_20EUiMonitorAutoRepeat;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

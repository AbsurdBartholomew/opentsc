// STATUS: NOT STARTED

#include "e_ps2ctrl.h"

__vtbl_ptr_type EPs2Controller virtual table[9] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Controller::~EPs2Controller,
		/* .__delta2 = */ -25832
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Controller::RefreshContext,
		/* .__delta2 = */ -27008
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Controller::InitHardware,
		/* .__delta2 = */ -27112
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Controller::ReadStatusData,
		/* .__delta2 = */ -26960
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Controller::ReadGameData,
		/* .__delta2 = */ -26736
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Controller::ProcessGameData,
		/* .__delta2 = */ -26664
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Controller::ShutDownHardware,
		/* .__delta2 = */ -26336
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

bool EPs2Controller::InitHardware(void *pInitInfo) {
  int iVar1;
  uint16 *puVar2;
  long lVar3;
  
  puVar2 = (uint16 *)_memmanAlloc__FUiUi(0x100,0x40);
  this->m_pDmaBuffer = puVar2;
                    /* WARNING: Load size is inaccurate */
  lVar3 = scePadPortOpen(*pInitInfo,*(undefined4 *)((int)pInitInfo + 4),puVar2);
                    /* WARNING: Load size is inaccurate */
  this->m_port = *pInitInfo;
  iVar1 = *(int *)((int)pInitInfo + 4);
  *(undefined4 *)&this->m_bHasUpdated = 0;
  this->m_slot = iVar1;
  return lVar3 == 1;
}

void EPs2Controller::RefreshContext() {
  RefreshContext__11EController(&this->field0_0x0);
  *(undefined4 *)&this->m_bHasUpdated = 1;
  return;
}

void EPs2Controller::ReadStatusData() {
	int padState;
	
  uint uVar1;
  long lVar2;
  
  (this->field0_0x0).m_status = 1;
  lVar2 = scePadGetState(this->m_port,this->m_slot);
  if (lVar2 == 0) {
    uVar1 = (this->field0_0x0).m_status & 0xfffffffe;
  }
  else {
    if ((lVar2 != 6) && (lVar2 != 2)) {
      uVar1 = (this->field0_0x0).m_status;
      goto LAB_002b9748;
    }
    lVar2 = scePadInfoMode(this->m_port,this->m_slot,1,0xffffffffffffffff);
    if (lVar2 != 7) {
      scePadSetMainMode(this->m_port,this->m_slot,1,3);
      uVar1 = (this->field0_0x0).m_status;
      goto LAB_002b9748;
    }
    uVar1 = (this->field0_0x0).m_status | 2;
  }
  (this->field0_0x0).m_status = uVar1;
  uVar1 = (this->field0_0x0).m_status;
LAB_002b9748:
  if (((uVar1 & 2) != 0) && (lVar2 = scePadInfoMode(this->m_port,this->m_slot,1,0), lVar2 == 7)) {
    (this->field0_0x0).m_status = (this->field0_0x0).m_status | 4;
  }
  return;
}

void EPs2Controller::ReadGameData(void *pData) {
  long lVar1;
  
  lVar1 = scePadRead(this->m_port,this->m_slot,pData);
  if (lVar1 == 0) {
    *(undefined4 *)&this->m_bProcessData = 0;
  }
  else {
    *(undefined4 *)&this->m_bProcessData = 1;
  }
  return;
}

void EPs2Controller::ProcessGameData(void *pData) {
	u8 *pReadBuffer;
	
  EControllerData *this_00;
  float fVar1;
  
  if (*(int *)&this->m_bHasUpdated != 0) {
    Reset__15EControllerDatab
              (&(this->field0_0x0).m_controllerData,
               (bool)((byte)((this->field0_0x0).m_status >> 1) & 1));
    *(undefined4 *)&this->m_bHasUpdated = 0;
  }
  this_00 = &(this->field0_0x0).m_controllerData;
  if (*(int *)&this->m_bProcessData == 0) {
    ClearAllData__11EController(&this->field0_0x0);
  }
  else {
    UpdateButtons__15EControllerDatai
              (this_00,CONCAT11(*(undefined *)((int)pData + 2),*(undefined *)((int)pData + 3)) ^
                       0xffff);
    fVar1 = RemapStick__14EPs2Controllerii
                      (this,(uint)*(byte *)((int)pData + 6),this->m_stickCenter[0]);
    UpdateStick__15EControllerDataiif(this_00,0,0,fVar1);
    fVar1 = RemapStick__14EPs2Controllerii
                      (this,(uint)*(byte *)((int)pData + 7),this->m_stickCenter[1]);
    UpdateStick__15EControllerDataiif(this_00,0,1,-fVar1);
    UpdateCenter__14EPs2Controlleriii
              (this,0,(uint)*(byte *)((int)pData + 6),(uint)*(byte *)((int)pData + 7));
    fVar1 = RemapStick__14EPs2Controllerii
                      (this,(uint)*(byte *)((int)pData + 4),this->m_stickCenter[1][0]);
    UpdateStick__15EControllerDataiif(this_00,1,0,fVar1);
    fVar1 = RemapStick__14EPs2Controllerii
                      (this,(uint)*(byte *)((int)pData + 5),this->m_stickCenter[1][1]);
    UpdateStick__15EControllerDataiif(this_00,1,1,-fVar1);
    UpdateCenter__14EPs2Controlleriii
              (this,1,(uint)*(byte *)((int)pData + 4),(uint)*(byte *)((int)pData + 5));
  }
  return;
}

void EPs2Controller::ShutDownHardware() {
  scePadPortClose(this->m_port,this->m_slot);
  _memmanFree__FPv(this->m_pDmaBuffer);
  return;
}

void EPs2Controller::UpdateCenter(int stickIndex, int rawPosX, int rawPosY) {
	int dx;
	int dy;
	
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  iVar5 = rawPosX + -0x7f;
  iVar6 = rawPosY + -0x7f;
  piVar7 = this->m_lastStickRaw[stickIndex] + 1;
  iVar3 = iVar5 - this->m_lastStickRaw[stickIndex][0];
  iVar4 = iVar6 - *piVar7;
  if ((iVar5 * iVar5 + iVar6 * iVar6 < 0x400) && (iVar3 * iVar3 + iVar4 * iVar4 < 0x41)) {
    piVar2 = this->m_cUnmoved + stickIndex;
    iVar1 = *piVar2;
    *piVar2 = iVar1 + 1;
    if (8 < iVar1 + 1) {
      *piVar2 = 0;
      this->m_stickCenter[stickIndex][0] = this->m_lastStickRaw[stickIndex][0] + iVar3 / 2;
      this->m_stickCenter[stickIndex][1] = *piVar7 + iVar4 / 2;
    }
  }
  else {
    this->m_cUnmoved[stickIndex] = 0;
  }
  this->m_lastStickRaw[stickIndex][0] = iVar5;
  this->m_lastStickRaw[stickIndex][1] = iVar6;
  return;
}

float EPs2Controller::RemapStick(int val, int stickCenter) {
	int edge;
	int delta;
	
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = val + -0x7f;
  if (iVar3 < stickCenter) {
    iVar4 = stickCenter + -0x20;
    iVar2 = stickCenter + 0x5f;
    if (iVar3 < -0x7f) {
      iVar3 = -0x7f;
      goto LAB_002b9a88;
    }
    bVar1 = iVar4 < iVar3;
  }
  else {
    iVar4 = stickCenter + 0x20;
    iVar2 = 0x7f - iVar4;
    if (0x7f < iVar3) {
      iVar3 = 0x7f;
      goto LAB_002b9a88;
    }
    bVar1 = iVar3 < iVar4;
  }
  if (bVar1) {
    iVar3 = iVar4;
  }
LAB_002b9a88:
  return (float)(iVar3 - iVar4) / (float)iVar2;
}

EPs2Controller* EPs2Controller::EPs2Controller() {
  __11EController(&this->field0_0x0);
  this->m_port = -1;
  (this->field0_0x0).__vtable = (EController__vtable *)_vt_14EPs2Controller;
  this->m_slot = -1;
  this->m_stickCenter[1][1] = 0;
  this->m_stickCenter[1][0] = 0;
  this->m_stickCenter[1] = 0;
  this->m_stickCenter[0] = 0;
  this->m_lastStickRaw[1][1] = 0;
  this->m_lastStickRaw[1][0] = 0;
  this->m_lastStickRaw[1] = 0;
  this->m_lastStickRaw[0] = 0;
  this->m_cUnmoved[1] = 0;
  this->m_cUnmoved[0] = 0;
  return this;
}

void EPs2Controller::~EPs2Controller(int __in_chrg) {
	EController *this;
	int __in_chrg;
	EControllerContext *this;
	EControllerData *this;
	void *pAddress;
	void *pAddress;
	void *pAddress;
	
  bool bVar1;
  EControllerContext *pEVar2;
  EControllerContext *pEVar3;
  
                    /* inlined from e_ctrl.h */
  pEVar3 = (this->field0_0x0).m_contextStack;
  (this->field0_0x0).__vtable = (EController__vtable *)_vt_11EController;
  if ((this != (EPs2Controller *)0xfffffea8) &&
     (pEVar3 != (EControllerContext *)(this->field0_0x0).m_bAxesSwapped)) {
    pEVar2 = (this->field0_0x0).m_contextStack + 0x1f;
    do {
      bVar1 = pEVar3 != pEVar2;
      pEVar2 = pEVar2 + -1;
    } while (bVar1);
  }
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

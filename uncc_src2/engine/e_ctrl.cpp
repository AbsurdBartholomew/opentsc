// STATUS: NOT STARTED

#include "e_ctrl.h"

__vtbl_ptr_type EController virtual table[4] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EController::~EController,
		/* .__delta2 = */ -21336
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EController::RefreshContext,
		/* .__delta2 = */ -22912
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EController* EController::EController() {
	int i;
	int j;
	
  bool *pbVar1;
  int *piVar2;
  uint uVar3;
  int (*paiVar4) [2];
  _EBtnToCmdAssoc *p_Var5;
  uint *puVar6;
  EControllerData *this_00;
  int iVar7;
  
                    /* inlined from c:/eor/src2/engine/e_ctrldata.h */
                    /* end of inlined section */
  this->m_id = _nCtrlPads;
  this_00 = (EControllerData *)this->m_contextStack;
  this->__vtable = (EController__vtable *)_vt_11EController;
  _nCtrlPads = _nCtrlPads + 1;
  iVar7 = 0x1f;
  this->m_status = 0;
                    /* inlined from c:/eor/src2/engine/e_ctrldata.h */
  Clear__15EControllerDatab(&this->m_controllerData,true);
                    /* end of inlined section */
  this->m_stackTop = 0;
  do {
                    /* inlined from c:/eor/src2/engine/e_ctrlcontext.h */
    Clear__15EControllerDatab(this_00,true);
                    /* end of inlined section */
    iVar7 = iVar7 + -1;
    this_00 = (EControllerData *)&this_00[1].lastButtons;
  } while (iVar7 != -1);
  p_Var5 = this->m_buttonToCommand;
  puVar6 = &this->m_buttonToCommand[0].commandIndex;
  paiVar4 = this->m_axisDirection;
  piVar2 = this->m_axisDirection + 1;
  pbVar1 = this->m_bAxesSwapped;
  iVar7 = 1;
  do {
    *(undefined4 *)pbVar1 = 0;
    iVar7 = iVar7 + -1;
    *piVar2 = 1;
    pbVar1 = pbVar1 + 4;
    (*paiVar4)[0] = 1;
    piVar2 = piVar2 + 2;
    paiVar4 = paiVar4[1];
  } while (-1 < iVar7);
  uVar3 = 0;
  do {
    p_Var5->buttonIndex = uVar3;
    *puVar6 = uVar3;
    p_Var5 = p_Var5 + 1;
    uVar3 = uVar3 + 1;
    puVar6 = puVar6 + 2;
  } while ((int)uVar3 < 0x10);
  this->m_pTopContext = this->m_contextStack + this->m_stackTop;
  return this;
}

void EController::RefreshContext() {
  EControllerContext *this_00;
  
  if (this->m_id == 0) {
    _lastCtrlUpdate = _retracecount;
    this_00 = this->m_pTopContext;
  }
  else {
    this_00 = this->m_pTopContext;
  }
  SetControllerData__18EControllerContextRC15EControllerData(this_00,&this->m_controllerData);
  return;
}

void EController::ClearAllData() {
  Clear__15EControllerDatab(&this->m_controllerData,(bool)((byte)(this->m_status >> 1) & 1));
  return;
}

void EController::OverrideData(EControllerData &newData) {
  __as__15EControllerDataRC15EControllerData(&this->m_controllerData,newData);
  return;
}

void EController::OverrideStatus(int newStatus) {
  this->m_status = newStatus;
  return;
}

EControllerContext* EController::LockFocus(bool bCopyContext) {
	EControllerContext *pContext;
	int i;
	
  EControllerData *dataIn;
  int iVar1;
  int iVar2;
  EControllerContext *this_00;
  EControllerContext *this_01;
  
  this_01 = (EControllerContext *)0x0;
  iVar1 = this->m_stackTop;
  iVar2 = iVar1 + 1;
  this->m_stackTop = iVar2;
  if (iVar2 < 0x20) {
    this_01 = this->m_contextStack + iVar1 + 1;
    if (bCopyContext) {
      dataIn = GetControllerData__18EControllerContext(this->m_pTopContext);
      SetControllerData__18EControllerContextRC15EControllerData(this_01,dataIn);
      iVar1 = this->m_stackTop;
    }
    else {
      Clear__18EControllerContextb(this_01,false);
      iVar1 = this->m_stackTop;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      this_00 = this->m_contextStack;
      do {
        Clear__18EControllerContextb(this_00,false);
        iVar2 = iVar2 + 1;
        this_00 = this_00 + 1;
      } while (iVar2 < this->m_stackTop);
    }
  }
  this->m_pTopContext = this_01;
  return this_01;
}

void EController::ReleaseFocus(bool bCopyContext) {
	EControllerContext *pContext;
	
  int iVar1;
  EControllerData *dataIn;
  int iVar2;
  EControllerContext *this_00;
  
  iVar1 = this->m_stackTop;
  iVar2 = iVar1 + -1;
  this->m_stackTop = iVar2;
  if (-1 < iVar2) {
    this_00 = (EControllerContext *)((int)&this->m_controllerData + iVar1 * 0x14c + 4);
    if (bCopyContext) {
      dataIn = GetControllerData__18EControllerContext(this->m_pTopContext);
      SetControllerData__18EControllerContextRC15EControllerData(this_00,dataIn);
      this->m_pTopContext = this_00;
    }
    else {
      Clear__18EControllerContextb(this_00,false);
      this->m_pTopContext = this_00;
    }
  }
  return;
}

void EController::SwapAxes(int stickIndex) {
  *(uint *)(this->m_bAxesSwapped + stickIndex * 4) =
       *(uint *)(this->m_bAxesSwapped + stickIndex * 4) ^ 1;
  return;
}

void EController::InvertAxis(int stickIndex, int axisIndex) {
  int *piVar1;
  
  piVar1 = this->m_axisDirection[stickIndex] + axisIndex;
  *piVar1 = -*piVar1;
  return;
}

void EController::MapCommandToButton(u32 button, u32 command) {
  this->m_buttonToCommand[button].commandIndex = command;
  this->m_buttonToCommand[command].buttonIndex = button;
  return;
}

float EController::GetStick(int stickIndex, int axisIndex) {
  bool bVar1;
  float fVar2;
  
  if ((*(int *)(this->m_bAxesSwapped + stickIndex * 4) != 0) &&
     (bVar1 = axisIndex == 0, axisIndex = 0, bVar1)) {
    axisIndex = 1;
  }
  fVar2 = GetStick__18EControllerContextii(this->m_pTopContext,stickIndex,axisIndex);
  return (float)this->m_axisDirection[stickIndex][axisIndex] * fVar2;
}

float EController::GetLastStick(int stickIndex, int axisIndex) {
  bool bVar1;
  float fVar2;
  
  if ((*(int *)(this->m_bAxesSwapped + stickIndex * 4) != 0) &&
     (bVar1 = axisIndex == 0, axisIndex = 0, bVar1)) {
    axisIndex = 1;
  }
  fVar2 = GetLastStick__18EControllerContextii(this->m_pTopContext,stickIndex,axisIndex);
  return (float)this->m_axisDirection[stickIndex][axisIndex] * fVar2;
}

u32 EController::GetButtonsDown(int mask) {
  uint uVar1;
  
  uVar1 = GetButtonsDown__18EControllerContexti(this->m_pTopContext,mask);
  return uVar1;
}

u32 EController::GetLastButtonsDown(int mask) {
  uint uVar1;
  
  uVar1 = GetLastButtonsDown__18EControllerContexti(this->m_pTopContext,mask);
  return uVar1;
}

u32 EController::GetButtonsUp(int mask) {
  uint uVar1;
  
  uVar1 = GetButtonsUp__18EControllerContexti(this->m_pTopContext,mask);
  return uVar1;
}

u32 EController::GetLastButtonsUp(int mask) {
  uint uVar1;
  
  uVar1 = GetLastButtonsUp__18EControllerContexti(this->m_pTopContext,mask);
  return uVar1;
}

u32 EController::GetButtonsPressed(int mask) {
  uint uVar1;
  
  uVar1 = GetButtonsPressed__18EControllerContexti(this->m_pTopContext,mask);
  return uVar1;
}

u32 EController::GetButtonsReleased(int mask) {
  uint uVar1;
  
  uVar1 = GetButtonsReleased__18EControllerContexti(this->m_pTopContext,mask);
  return uVar1;
}

int EController::GetPressedCount(int buttonId) {
  int iVar1;
  
  iVar1 = GetPressedCount__18EControllerContexti(this->m_pTopContext,buttonId);
  return iVar1;
}

int EController::GetReleasedCount(int buttonId) {
  int iVar1;
  
  iVar1 = GetReleasedCount__18EControllerContexti(this->m_pTopContext,buttonId);
  return iVar1;
}

bool EController::WasPressedFirst(int buttonId) {
  bool bVar1;
  
  bVar1 = WasPressedFirst__18EControllerContexti(this->m_pTopContext,buttonId);
  return bVar1;
}

u32 EController::GetCommandsDown(int mask) {
  uint uVar1;
  
  uVar1 = GetCommandsDown__18EControllerContexti(this->m_pTopContext,mask);
  return uVar1;
}

u32 EController::GetCommandsUp(int mask) {
  uint uVar1;
  
  uVar1 = GetCommandsUp__18EControllerContexti(this->m_pTopContext,mask);
  return uVar1;
}

u32 EController::GetLastCommandsDown(int mask) {
  uint uVar1;
  
  uVar1 = GetLastCommandsDown__18EControllerContexti(this->m_pTopContext,mask);
  return uVar1;
}

u32 EController::GetLastCommandsUp(int mask) {
  uint uVar1;
  
  uVar1 = GetLastCommandsUp__18EControllerContexti(this->m_pTopContext,mask);
  return uVar1;
}

u32 EController::GetCommandsPressed(int mask) {
  uint uVar1;
  
  uVar1 = GetCommandsPressed__18EControllerContexti(this->m_pTopContext,mask);
  return uVar1;
}

u32 EController::GetCommandsReleased(int mask) {
  uint uVar1;
  
  uVar1 = GetCommandsReleased__18EControllerContexti(this->m_pTopContext,mask);
  return uVar1;
}

u32 EController::GetBut(int mask) {
  uint uVar1;
  
  uVar1 = GetDownButtons__11EControlleri(this,mask);
  return uVar1;
}

u32 EController::GetTrigger(int mask) {
  uint uVar1;
  uint uVar2;
  
  uVar1 = GetLastButtonsDown__11EControlleri(this,mask);
  uVar2 = GetDownButtons__11EControlleri(this,mask);
  return ~uVar1 & uVar2;
}

float EController::GetStick(char axis, int which) {
  float fVar1;
  
  fVar1 = GetStick__11EControllerii(this,(uint)(which == 1),(uint)(axis == 'y'));
  return fVar1;
}

u32 EController::GetPressed(int mask) {
  uint uVar1;
  
  uVar1 = GetButtonsPressed__11EControlleri(this,mask);
  return uVar1;
}

u32 EController::GetReleased(int mask) {
  uint uVar1;
  
  uVar1 = GetButtonsReleased__11EControlleri(this,mask);
  return uVar1;
}

u32 EController::GetDownButtons(int mask) {
  uint uVar1;
  
  uVar1 = GetButtonsDown__11EControlleri(this,mask);
  return uVar1;
}

void EController::~EController(int __in_chrg) {
	EControllerContext *this;
	EControllerData *this;
	void *pAddress;
	void *pAddress;
	void *pAddress;
	
  bool bVar1;
  EControllerContext *pEVar2;
  
  this->__vtable = (EController__vtable *)_vt_11EController;
  if ((this != (EController *)0xfffffea8) &&
     (this->m_contextStack != (EControllerContext *)this->m_bAxesSwapped)) {
    pEVar2 = this->m_contextStack + 0x1f;
    do {
      bVar1 = this->m_contextStack != pEVar2;
      pEVar2 = pEVar2 + -1;
    } while (bVar1);
  }
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

bool EController::IsStable() {
  return (bool)((byte)(this->m_status >> 1) & 1);
}

bool EController::IsConnected() {
  return (bool)((byte)this->m_status & 1);
}

bool EController::IsConnectedAndSupported() {
	bool bSupported;
	bool bStable;
	
  bool bVar1;
  
  bVar1 = false;
  if ((this->m_status >> 2 & 1U) != 0) {
    bVar1 = (bool)((byte)this->m_status & 1);
  }
  return bVar1;
}

int EController::GetStatus() {
  return this->m_status;
}

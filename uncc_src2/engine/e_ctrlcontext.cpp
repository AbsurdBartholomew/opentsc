// STATUS: NOT STARTED

#include "e_ctrlcontext.h"

void EControllerContext::SetControllerData(EControllerData &dataIn) {
  __as__15EControllerDataRC15EControllerData(&this->m_controllerData,dataIn);
  return;
}

EControllerData& EControllerContext::GetControllerData() {
  return &this->m_controllerData;
}

float EControllerContext::GetStick(int stickIndex, int axisIndex) {
  return (this->m_controllerData).stick[stickIndex][axisIndex];
}

float EControllerContext::GetLastStick(int stickIndex, int axisIndex) {
  return (this->m_controllerData).lastStick[stickIndex][axisIndex];
}

u32 EControllerContext::GetButtonsDown(int mask) {
  return (this->m_controllerData).wasDown & mask;
}

u32 EControllerContext::GetLastButtonsDown(int mask) {
  return (this->m_controllerData).lastWasDown & mask;
}

u32 EControllerContext::GetButtonsUp(int mask) {
  return (this->m_controllerData).wasUp & mask;
}

u32 EControllerContext::GetLastButtonsUp(int mask) {
  return (this->m_controllerData).lastWasUp & mask;
}

u32 EControllerContext::GetButtonsPressed(int mask) {
  return (this->m_controllerData).pressed & mask;
}

u32 EControllerContext::GetButtonsReleased(int mask) {
  return (this->m_controllerData).released & mask;
}

u32 EControllerContext::GetCommandsDown(int mask) {
  uint uVar1;
  
  uVar1 = BuildButtonMask__18EControllerContextUi(this,mask);
  uVar1 = GetButtonsDown__18EControllerContexti(this,uVar1);
  uVar1 = BuildCommandMask__18EControllerContextUi(this,uVar1);
  return uVar1;
}

u32 EControllerContext::GetCommandsUp(int mask) {
  uint uVar1;
  
  uVar1 = BuildButtonMask__18EControllerContextUi(this,mask);
  uVar1 = GetButtonsUp__18EControllerContexti(this,uVar1);
  uVar1 = BuildCommandMask__18EControllerContextUi(this,uVar1);
  return uVar1;
}

u32 EControllerContext::GetLastCommandsDown(int mask) {
  uint uVar1;
  
  uVar1 = BuildButtonMask__18EControllerContextUi(this,mask);
  uVar1 = GetLastButtonsDown__18EControllerContexti(this,uVar1);
  uVar1 = BuildCommandMask__18EControllerContextUi(this,uVar1);
  return uVar1;
}

u32 EControllerContext::GetLastCommandsUp(int mask) {
  uint uVar1;
  
  uVar1 = BuildButtonMask__18EControllerContextUi(this,mask);
  uVar1 = GetLastButtonsUp__18EControllerContexti(this,uVar1);
  uVar1 = BuildCommandMask__18EControllerContextUi(this,uVar1);
  return uVar1;
}

u32 EControllerContext::GetCommandsPressed(int mask) {
  uint uVar1;
  
  uVar1 = BuildButtonMask__18EControllerContextUi(this,mask);
  uVar1 = GetButtonsPressed__18EControllerContexti(this,uVar1);
  uVar1 = BuildCommandMask__18EControllerContextUi(this,uVar1);
  return uVar1;
}

u32 EControllerContext::GetCommandsReleased(int mask) {
  uint uVar1;
  
  uVar1 = BuildButtonMask__18EControllerContextUi(this,mask);
  uVar1 = GetButtonsReleased__18EControllerContexti(this,uVar1);
  uVar1 = BuildCommandMask__18EControllerContextUi(this,uVar1);
  return uVar1;
}

void EControllerContext::Clear(bool bConnected) {
  Clear__15EControllerDatab(&this->m_controllerData,bConnected);
  return;
}

int EControllerContext::GetPressedCount(int buttonId) {
	EControllerContext *this;
	u32 bitVal;
	int index;
	
  int iVar1;
  
                    /* inlined from c:/eor/src2/engine/e_ctrlcontext.h */
  iVar1 = 0;
  if ((uint)buttonId >> 1 != 0) {
    for (iVar1 = 1; (uint)buttonId >> (iVar1 + 1U & 0x1f) != 0; iVar1 = iVar1 + 1) {
    }
  }
                    /* end of inlined section */
  return (this->m_controllerData).nPressed[iVar1];
}

int EControllerContext::GetReleasedCount(int buttonId) {
	EControllerContext *this;
	u32 bitVal;
	int index;
	
  int iVar1;
  
                    /* inlined from c:/eor/src2/engine/e_ctrlcontext.h */
  iVar1 = 0;
  if ((uint)buttonId >> 1 != 0) {
    for (iVar1 = 1; (uint)buttonId >> (iVar1 + 1U & 0x1f) != 0; iVar1 = iVar1 + 1) {
    }
  }
                    /* end of inlined section */
  return (this->m_controllerData).nReleased[iVar1];
}

bool EControllerContext::WasPressedFirst(int buttonId) {
	EControllerContext *this;
	u32 bitVal;
	int index;
	
  int iVar1;
  
                    /* inlined from c:/eor/src2/engine/e_ctrlcontext.h */
  iVar1 = 0;
  if ((uint)buttonId >> 1 != 0) {
    for (iVar1 = 1; (uint)buttonId >> (iVar1 + 1U & 0x1f) != 0; iVar1 = iVar1 + 1) {
    }
  }
                    /* end of inlined section */
  return SUB41(*(undefined4 *)((this->m_controllerData).bPressedFirst + iVar1 * 4),0);
}

u32 EControllerContext::BuildButtonMask(u32 commandMask) {
	u32 buttonMask;
	int i;
	
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = 0;
  uVar1 = 1;
  do {
    if ((commandMask & uVar1) != 0) {
      uVar3 = uVar3 | 1 << (this->m_buttonToCommand[uVar2].buttonIndex & 0x1f);
    }
    uVar2 = uVar2 + 1;
    uVar1 = 1 << (uVar2 & 0x1f);
  } while ((int)uVar2 < 0x20);
  return uVar3;
}

u32 EControllerContext::BuildCommandMask(u32 buttonMask) {
	u32 commandMask;
	int i;
	
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = 0;
  uVar1 = 1;
  do {
    if ((buttonMask & uVar1) != 0) {
      uVar3 = uVar3 | 1 << (this->m_buttonToCommand[uVar2].commandIndex & 0x1f);
    }
    uVar2 = uVar2 + 1;
    uVar1 = 1 << (uVar2 & 0x1f);
  } while ((int)uVar2 < 0x20);
  return uVar3;
}

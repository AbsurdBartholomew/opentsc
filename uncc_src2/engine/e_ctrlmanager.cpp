// STATUS: NOT STARTED

#include "e_ctrlmanager.h"

int _nCtrlPads = 0;
int _lastCtrlUpdate = 0;

__vtbl_ptr_type EControllerManager virtual table[6] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EControllerManager::~EControllerManager,
		/* .__delta2 = */ -25360
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EControllerManager::Update,
		/* .__delta2 = */ -27816
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EControllerManager::Init,
		/* .__delta2 = */ -27864
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EControllerManager::Shutdown,
		/* .__delta2 = */ -27728
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EController *_ctrlPads[8] = {
	/* [0] = */ NULL,
	/* [1] = */ NULL,
	/* [2] = */ NULL,
	/* [3] = */ NULL,
	/* [4] = */ NULL,
	/* [5] = */ NULL,
	/* [6] = */ NULL,
	/* [7] = */ NULL
};

EControllerManager* EControllerManager::EControllerManager() {
  this->__vtable = (EControllerManager__vtable *)_vt_18EControllerManager;
  return this;
}

bool EControllerManager::Init() {
	int i;
	
  uint uVar1;
  
  uVar1 = 0;
  do {
    this->m_controllerToPlayer[0].playerIndex = uVar1;
    this->m_controllerToPlayer[0].controllerIndex = uVar1;
    uVar1 = uVar1 + 1;
    this = (EControllerManager *)(this->m_controllerToPlayer + 1);
  } while ((int)uVar1 < 8);
  return true;
}

void EControllerManager::Update() {
	int i;
	
  EController *pEVar1;
  EController **ppEVar2;
  int iVar3;
  
  iVar3 = 7;
  ppEVar2 = _ctrlPads;
  pEVar1 = _ctrlPads[0];
  while( true ) {
    iVar3 = iVar3 + -1;
    ppEVar2 = ppEVar2 + 1;
    (*(code *)pEVar1->__vtable[1].RefreshContext)
              ((int)(pEVar1->m_controllerData).nPressed +
               *(short *)&pEVar1->__vtable[1].EController + -0x30);
    if (iVar3 < 0) break;
    pEVar1 = *ppEVar2;
  }
  return;
}

void EControllerManager::Shutdown() {
  return;
}

EController* EControllerManager::GetController(u32 controllerIndex) {
	EController *pController;
	
  EController *pEVar1;
  
  pEVar1 = (EController *)0x0;
  if ((int)controllerIndex < 8) {
    pEVar1 = _ctrlPads[controllerIndex];
  }
  return pEVar1;
}

EController* EControllerManager::GetPlayerController(u32 playerIndex) {
	EController *pController;
	
  EController *pEVar1;
  
  pEVar1 = (EController *)0x0;
  if (playerIndex < 8) {
    pEVar1 = GetController__18EControllerManagerUi
                       (this,this->m_controllerToPlayer[playerIndex].controllerIndex);
  }
  return pEVar1;
}

void EControllerManager::MapPlayerToController(u32 playerIndex, u32 controllerIndex) {
  this->m_controllerToPlayer[playerIndex].controllerIndex = controllerIndex;
  this->m_controllerToPlayer[controllerIndex].playerIndex = playerIndex;
  return;
}

void EControllerManager::SwapAxes(int ctrlIndex, int stickIndex) {
  SwapAxes__11EControlleri(_ctrlPads[ctrlIndex],stickIndex);
  return;
}

void EControllerManager::InvertAxis(int ctrlIndex, int stickIndex, int axisIndex) {
  InvertAxis__11EControllerii(_ctrlPads[ctrlIndex],stickIndex,axisIndex);
  return;
}

EControllerContext* EControllerManager::LockControllerFocus(int ctrlIndex, bool bCopyContext) {
  EControllerContext *pEVar1;
  
  pEVar1 = LockFocus__11EControllerb(_ctrlPads[ctrlIndex],bCopyContext);
  return pEVar1;
}

void EControllerManager::ReleaseControllerFocus(int ctrlIndex, bool bCopyContext) {
  ReleaseFocus__11EControllerb(_ctrlPads[ctrlIndex],bCopyContext);
  return;
}

EControllerContext* EControllerManager::LockPlayerFocus(int playerIndex) {
	int ctrlIndex;
	
  EControllerContext *pEVar1;
  
  pEVar1 = LockFocus__11EControllerb
                     (_ctrlPads[this->m_controllerToPlayer[playerIndex].controllerIndex],true);
  return pEVar1;
}

void EControllerManager::ReleasePlayerFocus(int playerIndex) {
	int ctrlIndex;
	
  ReleaseFocus__11EControllerb
            (_ctrlPads[this->m_controllerToPlayer[playerIndex].controllerIndex],true);
  return;
}

int EControllerManager::FindActiveController() {
	int ctrlIndex;
	int i;
	int i;
	
  uint uVar1;
  int ctrlIndex;
  int ctrlIndex_00;
  float fVar2;
  
  ctrlIndex = 0;
  while ((ctrlIndex_00 = 0, ctrlIndex < 8 &&
         (uVar1 = GetControllerButtons__18EControllerManageriUi10ECtrlState
                            (this,ctrlIndex,0xffffffff,E_CTRL_STATE_DOWN), ctrlIndex_00 = ctrlIndex,
         uVar1 == 0))) {
    ctrlIndex = ctrlIndex + 1;
  }
  if (ctrlIndex_00 == -1) {
    ctrlIndex_00 = 0;
    while (((fVar2 = GetControllerStick__18EControllerManageriii(this,ctrlIndex_00,0,0),
            fVar2 == 0.0 &&
            (fVar2 = GetControllerStick__18EControllerManageriii(this,ctrlIndex_00,0,1),
            fVar2 == 0.0)) &&
           (fVar2 = GetControllerStick__18EControllerManageriii(this,ctrlIndex_00,1,0), fVar2 == 0.0
           ))) {
      fVar2 = GetControllerStick__18EControllerManageriii(this,ctrlIndex_00,1,1);
      if (fVar2 != 0.0) {
        return ctrlIndex_00;
      }
      ctrlIndex_00 = ctrlIndex_00 + 1;
      if (7 < ctrlIndex_00) {
        return -1;
      }
    }
  }
  return ctrlIndex_00;
}

float EControllerManager::GetControllerStick(int ctrlIndex, int stickIndex, int axisIndex) {
  float fVar1;
  
  fVar1 = GetStick__11EControllerii(_ctrlPads[ctrlIndex],stickIndex,axisIndex);
  return fVar1;
}

float EControllerManager::GetPlayerStick(int playerIndex, int stickIndex, int axisIndex) {
	int ctrlIndex;
	
  float fVar1;
  
  fVar1 = GetStick__11EControllerii
                    (_ctrlPads[this->m_controllerToPlayer[playerIndex].controllerIndex],stickIndex,
                     axisIndex);
  return fVar1;
}

u32 EControllerManager::GetControllerButtons(int ctrlIndex, u32 buttonMask, ECtrlState buttonState) {
	u32 buttons;
	
  uint uVar1;
  
  if (buttonState == E_CTRL_STATE_RELEASED) {
    uVar1 = GetButtonsReleased__11EControlleri(_ctrlPads[ctrlIndex],buttonMask);
  }
  else if ((int)buttonState < 2) {
    if (buttonState == E_CTRL_STATE_PRESSED) {
      uVar1 = GetButtonsPressed__11EControlleri(_ctrlPads[ctrlIndex],buttonMask);
    }
    else {
      uVar1 = 0;
    }
  }
  else if (buttonState == E_CTRL_STATE_DOWN) {
    uVar1 = GetButtonsDown__11EControlleri(_ctrlPads[ctrlIndex],buttonMask);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

u32 EControllerManager::GetPlayerButtons(int playerIndex, u32 buttonMask, ECtrlState buttonState) {
  uint uVar1;
  
  uVar1 = GetControllerButtons__18EControllerManageriUi10ECtrlState
                    (this,this->m_controllerToPlayer[playerIndex].controllerIndex,buttonMask,
                     buttonState);
  return uVar1;
}

u32 EControllerManager::GetControllerCommands(int ctrlIndex, u32 commandMask, ECtrlState buttonState) {
	u32 buttons;
	
  uint uVar1;
  
  if (buttonState == E_CTRL_STATE_RELEASED) {
    uVar1 = GetCommandsReleased__11EControlleri(_ctrlPads[ctrlIndex],commandMask);
  }
  else if ((int)buttonState < 2) {
    if (buttonState == E_CTRL_STATE_PRESSED) {
      uVar1 = GetCommandsPressed__11EControlleri(_ctrlPads[ctrlIndex],commandMask);
    }
    else {
      uVar1 = 0;
    }
  }
  else if (buttonState == E_CTRL_STATE_DOWN) {
    uVar1 = GetCommandsDown__11EControlleri(_ctrlPads[ctrlIndex],commandMask);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

u32 EControllerManager::GetPlayerCommands(int playerIndex, u32 commandMask, ECtrlState buttonState) {
  uint uVar1;
  
  uVar1 = GetControllerCommands__18EControllerManageriUi10ECtrlState
                    (this,this->m_controllerToPlayer[playerIndex].controllerIndex,commandMask,
                     buttonState);
  return uVar1;
}

u32 EControllerManager::GetControllersUsingButton(u32 button, ECtrlState buttonState) {
	u32 controllerMask;
	int i;
	
  uint uVar1;
  uint ctrlIndex;
  uint uVar2;
  
  uVar2 = 0;
  ctrlIndex = 0;
  do {
    uVar1 = GetControllerButtons__18EControllerManageriUi10ECtrlState
                      (this,ctrlIndex,button,buttonState);
    if (uVar1 != 0) {
      uVar2 = uVar2 | 1 << (ctrlIndex & 0x1f);
    }
    ctrlIndex = ctrlIndex + 1;
  } while ((int)ctrlIndex < 8);
  return uVar2;
}

u32 EControllerManager::GetControllersUsingStick(int stickIndex) {
	u32 controllerMask;
	int i;
	
  uint uVar1;
  EController **ppEVar2;
  uint uVar3;
  float fVar4;
  
  uVar3 = 0;
  ppEVar2 = _ctrlPads;
  uVar1 = 0;
  do {
    fVar4 = GetStick__11EControllerii(*ppEVar2,stickIndex,0);
    if ((fVar4 != 0.0) || (fVar4 = GetStick__11EControllerii(*ppEVar2,stickIndex,1), fVar4 != 0.0))
    {
      uVar3 = uVar3 | 1 << (uVar1 & 0x1f);
    }
    uVar1 = uVar1 + 1;
    ppEVar2 = ppEVar2 + 1;
  } while ((int)uVar1 < 8);
  return uVar3;
}

u32 EControllerManager::GetPlayersUsingButton(u32 button, ECtrlState buttonState) {
	u32 playerMask;
	int i;
	
  uint uVar1;
  EControllerManager *pEVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  pEVar2 = this;
  do {
    uVar1 = GetPlayerButtons__18EControllerManageriUi10ECtrlState
                      (this,pEVar2->m_controllerToPlayer[0].playerIndex,button,buttonState);
    if (uVar1 != 0) {
      uVar4 = uVar4 | 1 << (uVar3 & 0x1f);
    }
    uVar3 = uVar3 + 1;
    pEVar2 = (EControllerManager *)(pEVar2->m_controllerToPlayer + 1);
  } while ((int)uVar3 < 8);
  return uVar4;
}

u32 EControllerManager::GetPlayersUsingStick(int stickIndex) {
	u32 controllerMask;
	int i;
	int ctrlIndex;
	
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  float fVar5;
  
  uVar4 = 0;
  puVar3 = &this->m_controllerToPlayer[0].controllerIndex;
  uVar2 = 0;
  do {
    uVar1 = *puVar3;
    fVar5 = GetStick__11EControllerii(_ctrlPads[uVar1],stickIndex,0);
    if ((fVar5 != 0.0) ||
       (fVar5 = GetStick__11EControllerii(_ctrlPads[uVar1],stickIndex,1), fVar5 != 0.0)) {
      uVar4 = uVar4 | 1 << (uVar2 & 0x1f);
    }
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 2;
  } while ((int)uVar2 < 8);
  return uVar4;
}

u32 EControllerManager::GetControllersIssuingCommand(u32 command, ECtrlState buttonState) {
	u32 controllerMask;
	int i;
	
  uint uVar1;
  uint ctrlIndex;
  uint uVar2;
  
  uVar2 = 0;
  ctrlIndex = 0;
  do {
    uVar1 = GetControllerCommands__18EControllerManageriUi10ECtrlState
                      (this,ctrlIndex,command,buttonState);
    if (uVar1 != 0) {
      uVar2 = uVar2 | 1 << (ctrlIndex & 0x1f);
    }
    ctrlIndex = ctrlIndex + 1;
  } while ((int)ctrlIndex < 8);
  return uVar2;
}

u32 EControllerManager::GetPlayersIssuingCommand(u32 command, ECtrlState buttonState) {
	u32 playerMask;
	int i;
	
  uint uVar1;
  EControllerManager *pEVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  pEVar2 = this;
  do {
    uVar1 = GetPlayerCommands__18EControllerManageriUi10ECtrlState
                      (this,pEVar2->m_controllerToPlayer[0].playerIndex,command,buttonState);
    if (uVar1 != 0) {
      uVar4 = uVar4 | 1 << (uVar3 & 0x1f);
    }
    uVar3 = uVar3 + 1;
    pEVar2 = (EControllerManager *)(pEVar2->m_controllerToPlayer + 1);
  } while ((int)uVar3 < 8);
  return uVar4;
}

void EControllerManager::~EControllerManager(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (EControllerManager__vtable *)_vt_18EControllerManager;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

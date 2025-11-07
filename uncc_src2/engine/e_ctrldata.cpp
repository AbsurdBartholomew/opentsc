// STATUS: NOT STARTED

#include "e_ctrldata.h"

void EControllerData::Clear(bool bConnected) {
	int i;
	
  float (*pafVar1) [2];
  bool *pbVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool *pbVar6;
  
  pafVar1 = this->stick;
  this->lastWasDown = 0;
  iVar3 = 1;
  this->lastPressed = 0;
  this->lastReleased = 0;
  do {
    pafVar1[2][1] = 0.0;
    iVar3 = iVar3 + -1;
    pafVar1[2][0] = 0.0;
    (*pafVar1)[1] = 0.0;
    (*pafVar1)[0] = 0.0;
    pafVar1 = pafVar1[1];
  } while (-1 < iVar3);
  if (bConnected) {
    this->lastWasUp = 0;
    this->wasUp = 0;
  }
  else {
    this->wasUp = 0xffffffff;
    this->lastWasUp = 0xffffffff;
  }
  this->buttons = 0;
  pbVar6 = this->bGotEvent;
  this->lastButtons = 0;
  piVar5 = this->nReleased;
  this->wasDown = 0;
  piVar4 = this->nPressed;
  this->pressed = 0;
  pbVar2 = this->bPressedFirst;
  this->released = 0;
  iVar3 = 0xf;
  do {
    *(undefined4 *)pbVar6 = 0;
    iVar3 = iVar3 + -1;
    *(undefined4 *)pbVar2 = 0;
    pbVar6 = pbVar6 + 4;
    *piVar4 = 0;
    pbVar2 = pbVar2 + 4;
    *piVar5 = 0;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (-1 < iVar3);
  return;
}

void EControllerData::Reset(bool bConnected) {
	int i;
	
  int *piVar1;
  int *piVar2;
  bool *pbVar3;
  bool *pbVar4;
  int iVar5;
  
  this->lastWasDown = this->wasDown;
  this->lastWasUp = this->wasUp;
  this->lastPressed = this->pressed;
  this->lastReleased = this->released;
  this->pressed = 0;
  this->released = 0;
  this->wasDown = 0;
  if (bConnected) {
    this->wasUp = 0;
  }
  else {
    this->wasUp = 0xffffffff;
  }
  pbVar4 = this->bGotEvent;
  piVar2 = this->nReleased;
  piVar1 = this->nPressed;
  pbVar3 = this->bPressedFirst;
  iVar5 = 0xf;
  do {
    *(undefined4 *)pbVar4 = 0;
    iVar5 = iVar5 + -1;
    *(undefined4 *)pbVar3 = 0;
    pbVar4 = pbVar4 + 4;
    *piVar1 = 0;
    pbVar3 = pbVar3 + 4;
    *piVar2 = 0;
    piVar1 = piVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (-1 < iVar5);
  return;
}

void EControllerData::operator=(EControllerData &dataIn) {
	int i;
	int i1;
	
  undefined4 uVar1;
  int iVar2;
  bool *pbVar3;
  bool *pbVar4;
  float *pfVar5;
  int *piVar6;
  float *pfVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  bool *pbVar12;
  bool *pbVar13;
  float fVar14;
  
  pfVar7 = this->lastStick + 1;
  pfVar5 = dataIn->lastStick + 1;
  iVar9 = 1;
  this->buttons = dataIn->buttons;
  this->lastButtons = dataIn->lastButtons;
  this->wasDown = dataIn->wasDown;
  this->lastWasDown = dataIn->lastWasDown;
  this->wasUp = dataIn->wasUp;
  this->lastWasUp = dataIn->lastWasUp;
  this->pressed = dataIn->pressed;
  this->released = dataIn->released;
  this->lastPressed = dataIn->lastPressed;
  this->lastReleased = dataIn->lastReleased;
  do {
    iVar9 = iVar9 + -1;
    pfVar7[-5] = pfVar5[-5];
    pfVar7[-4] = pfVar5[-4];
    (*(float (*) [2])(pfVar7 + -1))[0] = (*(float (*) [2])(pfVar5 + -1))[0];
    fVar14 = *pfVar5;
    pfVar5 = pfVar5 + 2;
    *pfVar7 = fVar14;
    pfVar7 = pfVar7 + 2;
  } while (-1 < iVar9);
  pbVar13 = this->bGotEvent;
  pbVar12 = dataIn->bGotEvent;
  piVar11 = this->nReleased;
  piVar10 = dataIn->nReleased;
  piVar8 = this->nPressed;
  piVar6 = dataIn->nPressed;
  pbVar3 = dataIn->bPressedFirst;
  pbVar4 = this->bPressedFirst;
  iVar9 = 0xf;
  do {
    uVar1 = *(undefined4 *)pbVar12;
    iVar9 = iVar9 + -1;
    pbVar12 = pbVar12 + 4;
    *(undefined4 *)pbVar13 = uVar1;
    pbVar13 = pbVar13 + 4;
    uVar1 = *(undefined4 *)pbVar3;
    pbVar3 = pbVar3 + 4;
    *(undefined4 *)pbVar4 = uVar1;
    pbVar4 = pbVar4 + 4;
    iVar2 = *piVar6;
    piVar6 = piVar6 + 1;
    *piVar8 = iVar2;
    piVar8 = piVar8 + 1;
    iVar2 = *piVar10;
    piVar10 = piVar10 + 1;
    *piVar11 = iVar2;
    piVar11 = piVar11 + 1;
  } while (-1 < iVar9);
  return;
}

void EControllerData::UpdateButtons(int buttonsIn) {
	u32 newReleased;
	u32 newPressed;
	int i;
	u32 mask;
	
  int iVar1;
  bool *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = 0;
  uVar5 = this->buttons;
  this->buttons = buttonsIn;
  this->lastButtons = uVar5;
  uVar6 = buttonsIn & ~uVar5;
  uVar5 = uVar5 & ~buttonsIn;
  pbVar2 = this->bGotEvent;
  do {
    uVar3 = 1 << (uVar4 & 0x1f);
    if (*(int *)pbVar2 == 0) {
      if ((uVar6 & uVar3) == 0) {
        if ((uVar5 & uVar3) != 0) goto LAB_002d9fc8;
        goto LAB_002d9fd8;
      }
      if ((uVar5 & uVar3) == 0) {
        *(int *)(pbVar2 + -0x40) = 1;
LAB_002d9fd4:
        *(int *)pbVar2 = 1;
        goto LAB_002d9fd8;
      }
LAB_002d9fc8:
      if ((uVar6 & uVar3) == 0) {
        *(int *)(pbVar2 + -0x40) = 0;
        goto LAB_002d9fd4;
      }
      iVar1 = *(int *)(pbVar2 + -0xc0);
LAB_002d9fe8:
      *(int *)(pbVar2 + -0xc0) = iVar1 + 1;
    }
    else {
LAB_002d9fd8:
      if ((uVar6 & uVar3) != 0) {
        iVar1 = *(int *)(pbVar2 + -0xc0);
        goto LAB_002d9fe8;
      }
    }
    uVar4 = uVar4 + 1;
    if ((uVar5 & uVar3) != 0) {
      *(int *)(pbVar2 + -0x80) = *(int *)(pbVar2 + -0x80) + 1;
    }
    pbVar2 = pbVar2 + 4;
    if (0xf < (int)uVar4) {
      this->wasDown = this->wasDown | this->buttons;
      this->wasUp = this->wasUp | ~this->buttons;
      this->pressed = this->pressed | uVar6;
      this->released = this->released | uVar5;
      return;
    }
  } while( true );
}

void EControllerData::AddPressedEvent(u32 button) {
	int buttonIndex;
	
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (button >> 1 != 0) {
    for (iVar2 = 1; button >> (iVar2 + 1U & 0x1f) != 0; iVar2 = iVar2 + 1) {
    }
  }
  if (*(int *)(this->bGotEvent + iVar2 * 4) == 0) {
    *(int *)(this->bGotEvent + iVar2 * 4) = 1;
    *(undefined4 *)(this->bPressedFirst + iVar2 * 4) = 1;
    uVar1 = this->wasDown;
  }
  else {
    uVar1 = this->wasDown;
  }
  this->wasDown = uVar1 | button;
  this->wasUp = this->wasUp | button;
  this->pressed = this->pressed | button;
  this->nPressed[iVar2] = this->nPressed[iVar2] + 1;
  return;
}

void EControllerData::AddReleasedEvent(u32 button) {
	int buttonIndex;
	
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (button >> 1 != 0) {
    for (iVar2 = 1; button >> (iVar2 + 1U & 0x1f) != 0; iVar2 = iVar2 + 1) {
    }
  }
  if (*(int *)(this->bGotEvent + iVar2 * 4) == 0) {
    *(int *)(this->bGotEvent + iVar2 * 4) = 1;
    *(undefined4 *)(this->bPressedFirst + iVar2 * 4) = 0;
    uVar1 = this->wasDown;
  }
  else {
    uVar1 = this->wasDown;
  }
  this->wasDown = uVar1 | button;
  this->wasUp = this->wasUp | button;
  this->released = this->released | button;
  this->nReleased[iVar2] = this->nReleased[iVar2] + 1;
  return;
}

void EControllerData::UpdateStick(int sticknum, int axis, float value) {
  float *pfVar1;
  
  pfVar1 = this->stick[sticknum] + axis;
  this->lastStick[sticknum][axis] = *pfVar1;
  *pfVar1 = value;
  return;
}

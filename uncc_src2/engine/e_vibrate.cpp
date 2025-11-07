// STATUS: NOT STARTED

#include "e_vibrate.h"

EVibrate _forceFeedback = {
	/* .m_Initialized = */ false,
	/* .m_Pause = */ false,
	/* .m_VControls = */ {
		/* [0] = */ {
			/* .Actuators = */ {
				/* [0] = */ {
					/* .Duration = */ 0.f,
					/* .Intensity = */ 0.f,
					/* .Actuator = */ 0,
					/* .Function = */ 0,
					/* .SubFunction = */ 0,
					/* .DataLength = */ 0
				},
				/* [1] = */ {
					/* .Duration = */ 0.f,
					/* .Intensity = */ 0.f,
					/* .Actuator = */ 0,
					/* .Function = */ 0,
					/* .SubFunction = */ 0,
					/* .DataLength = */ 0
				}
			},
			/* .VibrationOn = */ false,
			/* .Port = */ 0,
			/* .Slot = */ 0,
			/* .NumActuators = */ 0,
			/* .Direct = */ {
				/* [0] = */ 0,
				/* [1] = */ 0,
				/* [2] = */ 0,
				/* [3] = */ 0,
				/* [4] = */ 0,
				/* [5] = */ 0
			},
			/* .LastDirect = */ {
				/* [0] = */ 0,
				/* [1] = */ 0,
				/* [2] = */ 0,
				/* [3] = */ 0,
				/* [4] = */ 0,
				/* [5] = */ 0
			}
		},
		/* [1] = */ {
			/* .Actuators = */ {
				/* [0] = */ {
					/* .Duration = */ 0.f,
					/* .Intensity = */ 0.f,
					/* .Actuator = */ 0,
					/* .Function = */ 0,
					/* .SubFunction = */ 0,
					/* .DataLength = */ 0
				},
				/* [1] = */ {
					/* .Duration = */ 0.f,
					/* .Intensity = */ 0.f,
					/* .Actuator = */ 0,
					/* .Function = */ 0,
					/* .SubFunction = */ 0,
					/* .DataLength = */ 0
				}
			},
			/* .VibrationOn = */ false,
			/* .Port = */ 0,
			/* .Slot = */ 0,
			/* .NumActuators = */ 0,
			/* .Direct = */ {
				/* [0] = */ 0,
				/* [1] = */ 0,
				/* [2] = */ 0,
				/* [3] = */ 0,
				/* [4] = */ 0,
				/* [5] = */ 0
			},
			/* .LastDirect = */ {
				/* [0] = */ 0,
				/* [1] = */ 0,
				/* [2] = */ 0,
				/* [3] = */ 0,
				/* [4] = */ 0,
				/* [5] = */ 0
			}
		}
	},
	/* .m_SysAlign = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0,
		/* [5] = */ 0
	}
};

EVibrate* EVibrate::EVibrate() {
  *(undefined4 *)this = 0;
  *(undefined4 *)&this->m_Pause = 0;
  memset(this->m_SysAlign,0xff,6);
  this->m_SysAlign[1] = '\x01';
  this->m_SysAlign[0] = '\0';
  *(undefined4 *)&this->m_VControls[0].VibrationOn = 0;
  *(undefined4 *)&this->m_VControls[1].VibrationOn = 0;
  this->m_VControls[0].NumActuators = '\0';
  this->m_VControls[1].NumActuators = '\0';
  return this;
}

void EVibrate::~EVibrate(int __in_chrg) {
	void *pAddress;
	
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void EVibrate::Enable() {
	EVibrate *this;
	u8 i;
	
  uint uVar1;
  uint uVar2;
  
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
  if (*(int *)this == 0) {
    *(undefined4 *)&this->m_Pause = 0;
    *(undefined4 *)this = 1;
    uVar1 = 0;
    do {
      memset(this->m_VControls[uVar1].Direct,0,6);
      memset(this->m_VControls[uVar1].LastDirect,0,6);
      this->m_VControls[uVar1].Actuators[0].Actuator = 0;
      this->m_VControls[uVar1].Actuators[0].Duration = -3.1415;
      this->m_VControls[uVar1].Actuators[0].Intensity = 0.0;
      this->m_VControls[uVar1].Actuators[1].Actuator = 1;
      this->m_VControls[uVar1].Actuators[1].Duration = -3.1415;
      this->m_VControls[uVar1].Actuators[1].Intensity = 0.0;
      *(undefined4 *)&this->m_VControls[uVar1].VibrationOn = 0;
      this->m_VControls[uVar1].Port = (uchar)uVar1;
      uVar2 = uVar1 + 1 & 0xff;
      this->m_VControls[uVar1].Slot = '\0';
      uVar1 = uVar2;
    } while (uVar2 < 2);
  }
  return;
}

void EVibrate::Disable() {
  *(undefined4 *)this = 0;
  return;
}

bool EVibrate::TurnOn(u8 Port) {
	VibrateControl *pV;
	EVibrate *this;
	u8 Port;
	EVibrate *this;
	s32 ac;
	bool canUseActuator;
	
  uchar uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  int *piVar6;
  
  uVar5 = (int)(char)Port & 0xff;
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
  if ((uVar5 < 2) && (*(int *)this != 0)) {
    lVar4 = scePadGetState(this->m_VControls[uVar5].Port,this->m_VControls[uVar5].Slot);
    if (lVar4 == 6) {
      uVar1 = scePadInfoAct(this->m_VControls[uVar5].Port,this->m_VControls[uVar5].Slot,
                            0xffffffffffffffff,0);
      this->m_VControls[uVar5].NumActuators = uVar1;
      if (uVar1 == '\0') {
        uVar1 = this->m_VControls[uVar5].NumActuators;
      }
      else {
        piVar6 = &this->m_VControls[uVar5].Actuators[0].DataLength;
        uVar1 = this->m_VControls[uVar5].Port;
        iVar3 = 0;
        while( true ) {
          iVar2 = scePadInfoAct(uVar1,this->m_VControls[uVar5].Slot,iVar3,1);
          piVar6[-2] = iVar2;
          iVar2 = scePadInfoAct(this->m_VControls[uVar5].Port,this->m_VControls[uVar5].Slot,iVar3,2)
          ;
          piVar6[-1] = iVar2;
          iVar2 = iVar3 + 1;
          iVar3 = scePadInfoAct(this->m_VControls[uVar5].Port,this->m_VControls[uVar5].Slot,iVar3,3)
          ;
          *piVar6 = iVar3;
          piVar6 = piVar6 + 6;
          if (((int)(uint)this->m_VControls[uVar5].NumActuators <= iVar2) || (1 < iVar2)) break;
          uVar1 = this->m_VControls[uVar5].Port;
          iVar3 = iVar2;
        }
        uVar1 = this->m_VControls[uVar5].NumActuators;
      }
      iVar3 = 0;
      if ((((uVar1 == '\x02') && (this->m_VControls[uVar5].Actuators[0].Function == 1)) &&
          (this->m_VControls[uVar5].Actuators[0].DataLength == 0)) &&
         (((this->m_VControls[uVar5].Actuators[0].SubFunction == 2 &&
           (this->m_VControls[uVar5].Actuators[1].Function == 1)) &&
          ((iVar2 = this->m_VControls[uVar5].Actuators[1].DataLength, iVar2 == 1 &&
           (iVar3 = iVar2, this->m_VControls[uVar5].Actuators[1].SubFunction != 1)))))) {
        iVar3 = 0;
      }
      if (iVar3 == 0) {
        *(undefined4 *)&this->m_VControls[uVar5].VibrationOn = 0;
      }
      else {
        lVar4 = scePadSetActAlign(this->m_VControls[uVar5].Port,this->m_VControls[uVar5].Slot,
                                  this->m_SysAlign);
        *(undefined4 *)&this->m_VControls[uVar5].VibrationOn = 0;
        if (lVar4 == 1) goto LAB_0029d15c;
      }
    }
    else {
      *(undefined4 *)&this->m_VControls[uVar5].VibrationOn = 0;
    }
  }
  iVar3 = 0;
LAB_0029d15c:
  return SUB41(iVar3,0);
}

bool EVibrate::IsControllerReady(u8 Port) {
	EVibrate *this;
	u8 Port;
	EVibrate *this;
	
  bool bVar1;
  long lVar2;
  uint uVar3;
  
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
  uVar3 = (int)(char)Port & 0xff;
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
  if ((uVar3 < 2) && (*(int *)this != 0)) {
    lVar2 = scePadGetReqState(uVar3,0);
    if (lVar2 == 0) {
      bVar1 = true;
      *(undefined4 *)&this->m_VControls[uVar3].VibrationOn = 1;
    }
    else {
      bVar1 = false;
      *(undefined4 *)&this->m_VControls[uVar3].VibrationOn = 0;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

void EVibrate::StopAllVibration() {
	EVibrate *this;
	
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
  if (*(int *)this != 0) {
    StopVibration__8EVibrateUc(this,'\0');
    StopVibration__8EVibrateUc(this,'\x01');
  }
  return;
}

void EVibrate::Pause() {
	EVibrate *this;
	EVibrate *this;
	EController *this;
	EVibrate *this;
	EController *this;
	
  bool bVar1;
  int iVar2;
  uchar *puVar3;
  
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
  if ((*(int *)this != 0) && (*(int *)&this->m_Pause == 0)) {
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
    bVar1 = IsPortInvalid__8EVibrateUc(this,'\0');
    iVar2 = 0;
    if (!bVar1) {
      iVar2 = *(int *)&this->m_VControls[0].VibrationOn;
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/e_ctrl.h */
                    /* end of inlined section */
    if ((iVar2 != 0) &&
       (puVar3 = this->m_VControls[0].Direct, (_ctrlPads[0]->m_status >> 1 & 1U) != 0)) {
      memcpy(this->m_VControls[0].LastDirect,puVar3,6);
      this->m_VControls[0].Direct[0] = '\0';
      this->m_VControls[0].Direct[1] = '\0';
      scePadSetActDirect(this->m_VControls[0].Port,this->m_VControls[0].Slot,puVar3);
    }
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
    bVar1 = IsPortInvalid__8EVibrateUc(this,'\x01');
    iVar2 = 0;
    if (!bVar1) {
      iVar2 = *(int *)&this->m_VControls[1].VibrationOn;
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/e_ctrl.h */
                    /* end of inlined section */
    if ((iVar2 != 0) &&
       (puVar3 = this->m_VControls[1].Direct, (_ctrlPads[1]->m_status >> 1 & 1U) != 0)) {
      memcpy(this->m_VControls[1].LastDirect,puVar3,6);
      this->m_VControls[1].Direct[0] = '\0';
      this->m_VControls[1].Direct[1] = '\0';
      scePadSetActDirect(this->m_VControls[1].Port,this->m_VControls[1].Slot,puVar3);
    }
    *(undefined4 *)&this->m_Pause = 1;
  }
  return;
}

void EVibrate::Resume() {
	EVibrate *this;
	EVibrate *this;
	EController *this;
	EVibrate *this;
	EController *this;
	
  bool bVar1;
  int iVar2;
  uchar *puVar3;
  
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
  if ((*(int *)this != 0) && (*(int *)&this->m_Pause != 0)) {
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
    bVar1 = IsPortInvalid__8EVibrateUc(this,'\0');
    iVar2 = 0;
    if (!bVar1) {
      iVar2 = *(int *)&this->m_VControls[0].VibrationOn;
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/e_ctrl.h */
                    /* end of inlined section */
    if ((iVar2 != 0) &&
       (puVar3 = this->m_VControls[0].LastDirect, (_ctrlPads[0]->m_status >> 1 & 1U) != 0)) {
      scePadSetActDirect(this->m_VControls[0].Port,this->m_VControls[0].Slot,puVar3);
      memcpy(this->m_VControls[0].Direct,puVar3,6);
    }
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
    bVar1 = IsPortInvalid__8EVibrateUc(this,'\x01');
    iVar2 = 0;
    if (!bVar1) {
      iVar2 = *(int *)&this->m_VControls[1].VibrationOn;
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/e_ctrl.h */
                    /* end of inlined section */
    if ((iVar2 != 0) &&
       (puVar3 = this->m_VControls[1].LastDirect, (_ctrlPads[1]->m_status >> 1 & 1U) != 0)) {
      scePadSetActDirect(this->m_VControls[1].Port,this->m_VControls[1].Slot,puVar3);
      memcpy(this->m_VControls[1].Direct,puVar3,6);
    }
    *(undefined4 *)&this->m_Pause = 0;
  }
  return;
}

bool EVibrate::VibrateMotorOne(u8 Port, f32 Intensity) {
	s32 ret;
	f32 clamped;
	EVibrate *this;
	EVibrate *this;
	u8 Port;
	EVibrate *this;
	u8 Port;
	EController *this;
	
  bool bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uchar *pSource;
  float fVar5;
  
  uVar4 = (int)(char)Port & 0xff;
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
  if (*(int *)this != 0) {
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
    if (1 < uVar4) {
      return false;
    }
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
    bVar1 = IsPortInvalid__8EVibrateUc(this,(uchar)uVar4);
    iVar2 = 0;
    if (!bVar1) {
      iVar2 = *(int *)&this->m_VControls[uVar4].VibrationOn;
    }
                    /* end of inlined section */
    if (iVar2 == 0) {
      return false;
    }
    fVar5 = 0.0;
    if (0.0 <= Intensity) {
      fVar5 = (float)((int)Intensity * (uint)(Intensity < 1.0) |
                     (uint)(Intensity >= 1.0) * 0x3f800000);
    }
    if ((this->m_VControls[uVar4].Direct[0] != '\0') && (0.0 < fVar5)) {
      return true;
    }
    this->m_VControls[uVar4].Actuators[0].Intensity = fVar5;
    this->m_VControls[uVar4].Actuators[0].Duration = -3.1415;
    this->m_VControls[uVar4].Direct[0] = 0.0 < fVar5;
                    /* inlined from c:/eor/src2/engine/e_ctrl.h */
                    /* end of inlined section */
    if ((_ctrlPads[uVar4]->m_status >> 1 & 1U) != 0) {
      pSource = this->m_VControls[uVar4].Direct;
      lVar3 = scePadSetActDirect(this->m_VControls[uVar4].Port,this->m_VControls[uVar4].Slot,pSource
                                );
      memcpy(this->m_VControls[uVar4].LastDirect,pSource,6);
      return lVar3 == 1;
    }
  }
  return false;
}

bool EVibrate::VibrateMotorOne(u8 Port, f32 Intensity, f32 Duration) {
	s32 ret;
	f32 clamped;
	EVibrate *this;
	EVibrate *this;
	u8 Port;
	EVibrate *this;
	u8 Port;
	EController *this;
	
  bool bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uchar *pSource;
  float fVar5;
  float fVar6;
  
  uVar4 = (int)(char)Port & 0xff;
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
  if (*(int *)this != 0) {
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
    if (1 < uVar4) {
      return false;
    }
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
    bVar1 = IsPortInvalid__8EVibrateUc(this,(uchar)uVar4);
    iVar2 = 0;
    if (!bVar1) {
      iVar2 = *(int *)&this->m_VControls[uVar4].VibrationOn;
    }
                    /* end of inlined section */
    if (iVar2 == 0) {
      return false;
    }
    fVar6 = 0.0;
    if (0.0 <= Intensity) {
      fVar6 = (float)((int)Intensity * (uint)(Intensity < 1.0) |
                     (uint)(Intensity >= 1.0) * 0x3f800000);
    }
    if ((this->m_VControls[uVar4].Direct[0] != '\0') && (fVar5 = 0.0, 0.0 < fVar6)) {
      if (0.0 <= Duration) {
        fVar5 = (float)((int)Duration * (uint)(Duration < 10.0) |
                       (uint)(Duration >= 10.0) * 0x41200000);
      }
      this->m_VControls[uVar4].Actuators[0].Duration = fVar5;
      return true;
    }
    fVar5 = 0.0;
    this->m_VControls[uVar4].Actuators[0].Intensity = fVar6;
    if (0.0 <= Duration) {
      fVar5 = (float)((int)Duration * (uint)(Duration < 10.0) |
                     (uint)(Duration >= 10.0) * 0x41200000);
    }
    this->m_VControls[uVar4].Actuators[0].Duration = fVar5;
    this->m_VControls[uVar4].Direct[0] = 0.0 < fVar6;
                    /* inlined from c:/eor/src2/engine/e_ctrl.h */
                    /* end of inlined section */
    if ((_ctrlPads[uVar4]->m_status >> 1 & 1U) != 0) {
      pSource = this->m_VControls[uVar4].Direct;
      lVar3 = scePadSetActDirect(this->m_VControls[uVar4].Port,this->m_VControls[uVar4].Slot,pSource
                                );
      memcpy(this->m_VControls[uVar4].LastDirect,pSource,6);
      return lVar3 == 1;
    }
  }
  return false;
}

bool EVibrate::VibrateMotorTwo(u8 Port, f32 Intensity) {
	f32 clamped;
	s32 ret;
	EVibrate *this;
	EVibrate *this;
	u8 Port;
	EVibrate *this;
	u8 Port;
	EController *this;
	
  bool bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uchar *pSource;
  uchar uVar5;
  float fVar6;
  
  uVar4 = (int)(char)Port & 0xff;
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
  if (*(int *)this != 0) {
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
    if (1 < uVar4) {
      return false;
    }
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
    bVar1 = IsPortInvalid__8EVibrateUc(this,(uchar)uVar4);
    iVar2 = 0;
    if (!bVar1) {
      iVar2 = *(int *)&this->m_VControls[uVar4].VibrationOn;
    }
                    /* end of inlined section */
    if (iVar2 == 0) {
      return false;
    }
    fVar6 = 0.0;
    if (0.0 <= Intensity) {
      fVar6 = (float)((int)Intensity * (uint)(Intensity < 1.0) |
                     (uint)(Intensity >= 1.0) * 0x3f800000);
    }
    if (this->m_VControls[uVar4].Actuators[1].Intensity == fVar6) {
      return true;
    }
    if (0.0 < fVar6) {
      uVar5 = (uchar)(int)(fVar6 * 220.0 + 35.0);
    }
    else {
      uVar5 = (uchar)(int)(fVar6 * 220.0);
    }
    this->m_VControls[uVar4].Direct[1] = uVar5;
    this->m_VControls[uVar4].Actuators[1].Duration = -3.1415;
                    /* inlined from c:/eor/src2/engine/e_ctrl.h */
                    /* end of inlined section */
    if ((_ctrlPads[uVar4]->m_status >> 1 & 1U) != 0) {
      pSource = this->m_VControls[uVar4].Direct;
      lVar3 = scePadSetActDirect(this->m_VControls[uVar4].Port,this->m_VControls[uVar4].Slot,pSource
                                );
      memcpy(this->m_VControls[uVar4].LastDirect,pSource,6);
      return lVar3 == 1;
    }
  }
  return false;
}

bool EVibrate::VibrateMotorTwo(u8 Port, f32 Intensity, f32 Duration) {
	s32 ret;
	f32 clamped;
	EVibrate *this;
	EVibrate *this;
	u8 Port;
	EVibrate *this;
	u8 Port;
	EController *this;
	
  bool bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uchar *pSource;
  uchar uVar5;
  float fVar6;
  float fVar7;
  
  uVar4 = (int)(char)Port & 0xff;
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
  if (*(int *)this != 0) {
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
    if (1 < uVar4) {
      return false;
    }
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
    bVar1 = IsPortInvalid__8EVibrateUc(this,(uchar)uVar4);
    iVar2 = 0;
    if (!bVar1) {
      iVar2 = *(int *)&this->m_VControls[uVar4].VibrationOn;
    }
                    /* end of inlined section */
    if (iVar2 == 0) {
      return false;
    }
    fVar7 = 0.0;
    if (0.0 <= Intensity) {
      fVar7 = (float)((int)Intensity * (uint)(Intensity < 1.0) |
                     (uint)(Intensity >= 1.0) * 0x3f800000);
    }
    if (this->m_VControls[uVar4].Actuators[1].Intensity == fVar7) {
      fVar7 = 0.0;
      if (0.0 <= Duration) {
        fVar7 = (float)((int)Duration * (uint)(Duration < 10.0) |
                       (uint)(Duration >= 10.0) * 0x41200000);
      }
      this->m_VControls[uVar4].Actuators[1].Duration = fVar7;
      return true;
    }
    if (0.0 < fVar7) {
      uVar5 = (uchar)(int)(fVar7 * 220.0 + 35.0);
    }
    else {
      uVar5 = (uchar)(int)(fVar7 * 220.0);
    }
    fVar6 = 0.0;
    this->m_VControls[uVar4].Actuators[1].Intensity = fVar7;
    if (0.0 <= Duration) {
      fVar6 = (float)((int)Duration * (uint)(Duration < 10.0) |
                     (uint)(Duration >= 10.0) * 0x41200000);
    }
    this->m_VControls[uVar4].Actuators[1].Duration = fVar6;
    this->m_VControls[uVar4].Direct[1] = uVar5;
                    /* inlined from c:/eor/src2/engine/e_ctrl.h */
                    /* end of inlined section */
    if ((_ctrlPads[uVar4]->m_status >> 1 & 1U) != 0) {
      pSource = this->m_VControls[uVar4].Direct;
      lVar3 = scePadSetActDirect(this->m_VControls[uVar4].Port,this->m_VControls[uVar4].Slot,pSource
                                );
      memcpy(this->m_VControls[uVar4].LastDirect,pSource,6);
      return lVar3 == 1;
    }
  }
  return false;
}

bool EVibrate::VibrateAll(u8 Port, f32 I1, f32 I2) {
	unsigned char newDirect[6];
	f32 clamped;
	s32 ret;
	EVibrate *this;
	EVibrate *this;
	u8 Port;
	EVibrate *this;
	u8 Port;
	EController *this;
	
  bool bVar1;
  int iVar2;
  long lVar3;
  uchar *__s1;
  uint uVar4;
  float fVar5;
  uchar newDirect [6];
  
  uVar4 = (int)(char)Port & 0xff;
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
  if (*(int *)this != 0) {
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
    if (1 < uVar4) {
      return false;
    }
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
    bVar1 = IsPortInvalid__8EVibrateUc(this,(uchar)uVar4);
    iVar2 = 0;
    if (!bVar1) {
      iVar2 = *(int *)&this->m_VControls[uVar4].VibrationOn;
    }
                    /* end of inlined section */
    if (iVar2 != 0) {
      memset(newDirect,0,6);
      fVar5 = 0.0;
      if (0.0 <= I1) {
        fVar5 = (float)((int)I1 * (uint)(I1 < 1.0) | (uint)(I1 >= 1.0) * 0x3f800000);
      }
      newDirect[0] = 0.0 < fVar5;
      this->m_VControls[uVar4].Actuators[0].Intensity = fVar5;
      if (0.0 <= I2) {
        fVar5 = (float)((int)I2 * (uint)(I2 < 1.0) | (uint)(I2 >= 1.0) * 0x3f800000);
      }
      else {
        fVar5 = 0.0;
      }
      if (0.0 < fVar5) {
        newDirect[1] = (uchar)(int)(fVar5 * 220.0 + 35.0);
      }
      else {
        newDirect[1] = (uchar)(int)(fVar5 * 220.0);
      }
      this->m_VControls[uVar4].Actuators[1].Intensity = fVar5;
      __s1 = this->m_VControls[uVar4].Direct;
      iVar2 = memcmp(__s1,newDirect,6);
      if (iVar2 == 0) {
        return true;
      }
      memcpy(__s1,newDirect,6);
      this->m_VControls[uVar4].Actuators[1].Duration = -3.1415;
      this->m_VControls[uVar4].Actuators[0].Duration = -3.1415;
                    /* inlined from c:/eor/src2/engine/e_ctrl.h */
                    /* end of inlined section */
      if ((_ctrlPads[uVar4]->m_status >> 1 & 1U) != 0) {
        lVar3 = scePadSetActDirect(this->m_VControls[uVar4].Port,this->m_VControls[uVar4].Slot,__s1)
        ;
        memcpy(this->m_VControls[uVar4].LastDirect,__s1,6);
        return lVar3 == 1;
      }
    }
  }
  return false;
}

bool EVibrate::VibrateAll(u8 Port, f32 I1, f32 I2, f32 D1, f32 D2) {
	unsigned char newDirect[6];
	f32 clamped;
	s32 ret;
	EVibrate *this;
	EVibrate *this;
	u8 Port;
	EVibrate *this;
	u8 Port;
	EController *this;
	
  bool bVar1;
  int iVar2;
  long lVar3;
  uchar *__s1;
  uint uVar4;
  float fVar5;
  float fVar6;
  uchar newDirect [6];
  
  uVar4 = (int)(char)Port & 0xff;
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
  if (*(int *)this != 0) {
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
    if (1 < uVar4) {
      return false;
    }
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
    bVar1 = IsPortInvalid__8EVibrateUc(this,(uchar)uVar4);
    iVar2 = 0;
    if (!bVar1) {
      iVar2 = *(int *)&this->m_VControls[uVar4].VibrationOn;
    }
                    /* end of inlined section */
    if (iVar2 != 0) {
      memset(newDirect,0,6);
      fVar6 = 0.0;
      if (0.0 <= I1) {
        fVar6 = (float)((int)I1 * (uint)(I1 < 1.0) | (uint)(I1 >= 1.0) * 0x3f800000);
      }
      fVar5 = 0.0;
      newDirect[0] = 0.0 < fVar6;
      this->m_VControls[uVar4].Actuators[0].Intensity = fVar6;
      if (0.0 <= D1) {
        fVar5 = (float)((int)D1 * (uint)(D1 < 10.0) | (uint)(D1 >= 10.0) * 0x41200000);
      }
      fVar6 = 0.0;
      this->m_VControls[uVar4].Actuators[0].Duration = fVar5;
      if (0.0 <= I2) {
        fVar6 = (float)((int)I2 * (uint)(I2 < 1.0) | (uint)(I2 >= 1.0) * 0x3f800000);
      }
      if (0.0 < fVar6) {
        newDirect[1] = (uchar)(int)(fVar6 * 220.0 + 35.0);
      }
      else {
        newDirect[1] = (uchar)(int)(fVar6 * 220.0);
      }
      fVar5 = 0.0;
      this->m_VControls[uVar4].Actuators[1].Intensity = fVar6;
      if (0.0 <= D2) {
        fVar5 = (float)((int)D2 * (uint)(D2 < 10.0) | (uint)(D2 >= 10.0) * 0x41200000);
      }
      this->m_VControls[uVar4].Actuators[1].Duration = fVar5;
      __s1 = this->m_VControls[uVar4].Direct;
      iVar2 = memcmp(__s1,newDirect,6);
      if (iVar2 == 0) {
        return true;
      }
      memcpy(__s1,newDirect,6);
                    /* inlined from c:/eor/src2/engine/e_ctrl.h */
                    /* end of inlined section */
      if ((_ctrlPads[uVar4]->m_status >> 1 & 1U) != 0) {
        lVar3 = scePadSetActDirect(this->m_VControls[uVar4].Port,this->m_VControls[uVar4].Slot,__s1)
        ;
        memcpy(this->m_VControls[uVar4].LastDirect,__s1,6);
        return lVar3 == 1;
      }
    }
  }
  return false;
}

bool EVibrate::StopMotorOne(u8 Port) {
	s32 ret;
	EVibrate *this;
	EVibrate *this;
	u8 Port;
	EVibrate *this;
	u8 Port;
	EController *this;
	
  bool bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uchar *pSource;
  
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
  uVar4 = (int)(char)Port & 0xff;
  if (*(int *)this != 0) {
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
    if (1 < uVar4) {
      return false;
    }
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
    bVar1 = IsPortInvalid__8EVibrateUc(this,(uchar)uVar4);
    iVar2 = 0;
    if (!bVar1) {
      iVar2 = *(int *)&this->m_VControls[uVar4].VibrationOn;
    }
                    /* end of inlined section */
    if (iVar2 != 0) {
      if (this->m_VControls[uVar4].Direct[0] == '\0') {
        this->m_VControls[uVar4].Actuators[0].Duration = -3.1415;
        return true;
      }
      this->m_VControls[uVar4].Direct[0] = '\0';
      this->m_VControls[uVar4].Actuators[0].Duration = -3.1415;
      this->m_VControls[uVar4].Actuators[0].Intensity = 0.0;
                    /* inlined from c:/eor/src2/engine/e_ctrl.h */
                    /* end of inlined section */
      if ((_ctrlPads[uVar4]->m_status >> 1 & 1U) != 0) {
        pSource = this->m_VControls[uVar4].Direct;
        lVar3 = scePadSetActDirect(uVar4,0,pSource);
        memcpy(this->m_VControls[uVar4].LastDirect,pSource,6);
        return lVar3 == 1;
      }
    }
  }
  return false;
}

bool EVibrate::StopMotorOne(u8 Port, f32 Duration) {
	f32 cDuration;
	EVibrate *this;
	EVibrate *this;
	u8 Port;
	EVibrate *this;
	u8 Port;
	
  bool bVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  
  uVar3 = (int)(char)Port & 0xff;
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
  if (*(int *)this != 0) {
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
    if (1 < uVar3) {
      return false;
    }
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
    bVar1 = IsPortInvalid__8EVibrateUc(this,(uchar)uVar3);
    iVar2 = 0;
    if (!bVar1) {
      iVar2 = *(int *)&this->m_VControls[uVar3].VibrationOn;
    }
                    /* end of inlined section */
    if (iVar2 != 0) {
      fVar4 = 0.0;
      if (0.0 <= Duration) {
        fVar4 = (float)((int)Duration * (uint)(Duration < 10.0) |
                       (uint)(Duration >= 10.0) * 0x41200000);
      }
      this->m_VControls[uVar3].Actuators[0].Duration = fVar4;
      return true;
    }
  }
  return false;
}

bool EVibrate::StopMotorTwo(u8 Port) {
	s32 ret;
	EVibrate *this;
	EVibrate *this;
	u8 Port;
	EVibrate *this;
	u8 Port;
	EController *this;
	
  bool bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uchar *pSource;
  
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
  uVar4 = (int)(char)Port & 0xff;
  if (*(int *)this != 0) {
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
    if (1 < uVar4) {
      return false;
    }
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
    bVar1 = IsPortInvalid__8EVibrateUc(this,(uchar)uVar4);
    iVar2 = 0;
    if (!bVar1) {
      iVar2 = *(int *)&this->m_VControls[uVar4].VibrationOn;
    }
                    /* end of inlined section */
    if (iVar2 != 0) {
      if (this->m_VControls[uVar4].Direct[1] == '\0') {
        this->m_VControls[uVar4].Actuators[1].Duration = -3.1415;
        return true;
      }
      this->m_VControls[uVar4].Direct[1] = '\0';
      this->m_VControls[uVar4].Actuators[1].Duration = -3.1415;
      this->m_VControls[uVar4].Actuators[1].Intensity = 0.0;
                    /* inlined from c:/eor/src2/engine/e_ctrl.h */
                    /* end of inlined section */
      if ((_ctrlPads[uVar4]->m_status >> 1 & 1U) != 0) {
        pSource = this->m_VControls[uVar4].Direct;
        lVar3 = scePadSetActDirect(uVar4,0,pSource);
        memcpy(this->m_VControls[uVar4].LastDirect,pSource,6);
        return lVar3 == 1;
      }
    }
  }
  return false;
}

bool EVibrate::StopMotorTwo(u8 Port, f32 Duration) {
	f32 cDuration;
	EVibrate *this;
	EVibrate *this;
	u8 Port;
	EVibrate *this;
	u8 Port;
	EController *this;
	
  bool bVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  
  uVar3 = (int)(char)Port & 0xff;
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
  if (*(int *)this != 0) {
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
    if (1 < uVar3) {
      return false;
    }
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
    bVar1 = IsPortInvalid__8EVibrateUc(this,(uchar)uVar3);
    iVar2 = 0;
    if (!bVar1) {
      iVar2 = *(int *)&this->m_VControls[uVar3].VibrationOn;
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/e_ctrl.h */
                    /* end of inlined section */
    if ((iVar2 != 0) && ((_ctrlPads[uVar3]->m_status >> 1 & 1U) != 0)) {
      fVar4 = 0.0;
      if (0.0 <= Duration) {
        fVar4 = (float)((int)Duration * (uint)(Duration < 10.0) |
                       (uint)(Duration >= 10.0) * 0x41200000);
      }
      this->m_VControls[uVar3].Actuators[1].Duration = fVar4;
      return true;
    }
  }
  return false;
}

bool EVibrate::StopVibration(u8 Port) {
	unsigned char stopped[6];
	s32 ret;
	EVibrate *this;
	EVibrate *this;
	u8 Port;
	EVibrate *this;
	u8 Port;
	EController *this;
	
  bool bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uchar *__s1;
  uchar stopped [6];
  
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
  uVar4 = (int)(char)Port & 0xff;
  if (*(int *)this != 0) {
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
    if (1 < uVar4) {
      return false;
    }
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
    bVar1 = IsPortInvalid__8EVibrateUc(this,(uchar)uVar4);
    iVar2 = 0;
    if (!bVar1) {
      iVar2 = *(int *)&this->m_VControls[uVar4].VibrationOn;
    }
                    /* end of inlined section */
    if (iVar2 != 0) {
      memset(stopped,0,6);
      __s1 = this->m_VControls[uVar4].Direct;
      iVar2 = memcmp(__s1,stopped,6);
      if (iVar2 == 0) {
        return true;
      }
      this->m_VControls[uVar4].Direct[0] = '\0';
      this->m_VControls[uVar4].Actuators[0].Duration = -3.1415;
      this->m_VControls[uVar4].Actuators[0].Intensity = 0.0;
      this->m_VControls[uVar4].Direct[1] = '\0';
      this->m_VControls[uVar4].Actuators[1].Duration = -3.1415;
      this->m_VControls[uVar4].Actuators[1].Intensity = 0.0;
                    /* inlined from c:/eor/src2/engine/e_ctrl.h */
                    /* end of inlined section */
      if ((_ctrlPads[uVar4]->m_status >> 1 & 1U) != 0) {
        lVar3 = scePadSetActDirect(this->m_VControls[uVar4].Port,this->m_VControls[uVar4].Slot,__s1)
        ;
        memcpy(this->m_VControls[uVar4].LastDirect,__s1,6);
        return lVar3 == 1;
      }
    }
  }
  return false;
}

bool EVibrate::UpdateVibration() {
	u8 stop_field;
	EVibrate *this;
	u8 port;
	EVibrate *this;
	u8 Port;
	
  bool bVar1;
  int iVar2;
  ActState *pAVar3;
  uchar Port;
  uint uVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  
                    /* inlined from c:/eor/src2/engine/e_vibrate.h */
                    /* end of inlined section */
  if (*(int *)this == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    if (*(int *)&this->m_Pause == 0) {
      fVar7 = -3.1415;
      uVar4 = 0;
      do {
        Port = (uchar)uVar4;
        bVar1 = IsPortInvalid__8EVibrateUc(this,Port);
        iVar2 = 0;
        if (!bVar1) {
          iVar2 = *(int *)&this->m_VControls[uVar4].VibrationOn;
        }
                    /* end of inlined section */
        if (iVar2 != 0) {
          fVar6 = this->m_VControls[uVar4].Actuators[0].Duration;
          if (fVar6 != fVar7) {
            this->m_VControls[uVar4].Actuators[0].Duration = fVar6 - _dt;
          }
          bVar5 = fVar6 != fVar7 && fVar6 <= 0.0;
          pAVar3 = this->m_VControls[uVar4].Actuators + 1;
          fVar6 = pAVar3->Duration;
          if (fVar6 != fVar7) {
            if (fVar6 <= 0.0) {
              bVar5 = bVar5 | 2;
            }
            pAVar3->Duration = fVar6 - _dt;
          }
          if (bVar5 == 3) {
            StopVibration__8EVibrateUc(this,Port);
          }
          else if ((bVar5 & 1) == 0) {
            if ((bVar5 & 2) != 0) {
              StopMotorTwo__8EVibrateUc(this,Port);
            }
          }
          else {
            StopMotorOne__8EVibrateUc(this,Port);
          }
        }
        uVar4 = uVar4 + 1 & 0xff;
      } while (uVar4 < 2);
      bVar1 = true;
    }
  }
  return bVar1;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___8EVibrate(&_forceFeedback,2);
    }
    else {
      __8EVibrate(&_forceFeedback);
    }
  }
  return;
}

bool EVibrate::IsPortInvalid(u8 Port) {
  return 1 < Port;
}

void global constructors keyed to _forceFeedback() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _forceFeedback() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

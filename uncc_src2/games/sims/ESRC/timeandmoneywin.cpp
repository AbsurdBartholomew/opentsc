// STATUS: NOT STARTED

#include "timeandmoneywin.h"

// warning: multiple differing types with the same name (name not equal)
struct SimInfoWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb881;
	float m_infoWinAlpha;
	float m_infoWinAlphaTime;
	s32 m_curwindow;
protected:
	s32 m_pressed;
	bool m_bButtdown;
	bool m_bDrawInfo;
	float m_introAnimDur;
	float m_infointroAnimDur;
	float m_infoDelayDur;
	float m_introTime;
	float m_hoverTime;
	float m_infoInTime;
	float m_simnametimeout;
	int m_curOpt;
	ERelationsWin m_rltnsMenu;
	static ESlideTextBox m_nameBoxs[2];
	static ESlideTextBox m_playerNameBoxs[2];
	static bool m_bInit;
	static void (*m_DrawTable[4])(/* parameters unknown */);
	static void (*m_UpdateTable[4])(/* parameters unknown */);
	static ERFont *m_pFont;
public:
	static ERShader *m_textarrowl;
	static ERShader *m_textarrowr;
	static ERShader *m_pDpadInverse;
	static ERShader *m_pMenubevel_T_L;
	static ERShader *m_pTextBoxBGBL;
	static ERShader *m_pTextBoxBGBR;
	static ERShader *m_pTextBoxBGTL;
	static ERShader *m_pTextBoxBGTR;
	static ERShader *m_pTextBoxBGML;
	static ERShader *m_pTextBoxBGMR;
	static ERShader *m_pTextBoxBGTC;
	static ERShader *m_pTextBoxBGBC;
	static ERShader *m_pTextBoxHBL;
	static ERShader *m_pTextBoxHBR;
	static ERShader *m_pTextBoxHTL;
	static ERShader *m_pTextBoxHTR;
	static ERShader *m_pTextBoxHML;
	static ERShader *m_pTextBoxHMR;
	static ERShader *m_pTextBoxHTC;
	static ERShader *m_pTextBoxHBC;
	static ERShader *m_pTextLineBGL;
	static ERShader *m_pTextLineBGR;
	static ERShader *m_pTextLineBGC;
	static ERShader *m_pTextPopOutC;
	static ERShader *m_pTextPopOutCH;
	static ERShader *m_pTextPopOutL;
	static ERShader *m_pTextPopOutLH;
	static ERShader *m_pTextPopOutR;
	static ERShader *m_pTextPopOutRH;
	static UiStringLookUpTableEntry __MoodStrings[8];
	static UiStringLookUpTableEntry __PersStrings[8];
	static UiStringLookUpTableEntry __JobStrings[8];
	static UiStringLookUpTableEntry __RelaStrings[8];
	static UiStringLookUpTableEntry *__InfoTextLookup[4];
	
	SimInfoWin& operator=();
	SimInfoWin();
	SimInfoWin();
	/* vtable[1] */ virtual SimInfoWin(SimInfoWin*, int, void);
	/* vtable[3] */ virtual void Draw();
	/* vtable[2] */ virtual void Update();
	/* vtable[2] */ virtual void SetState();
	/* vtable[3] */ virtual void SetEvent();
	void DrawInfo();
	void SetWindow();
	s32 GetWindow();
	void GetBut();
	void ResetState();
	void ChangedSelectedSim();
	static void Init(/* parameters unknown */);
	static void CleanUp(/* parameters unknown */);
	static void DrawTextBox(/* parameters unknown */);
	static void DrawBigHighlightBox(/* parameters unknown */);
protected:
	int GetDirection();
	void DrawBackGround();
	void StartIntro();
	void StartTextSlide();
	void UpdateIntroAnim();
	void UpdateInfoIntroAnim();
	void StartInfoIntro();
	void ResetAllclocks();
	void JobDrawInfo();
};

ESlideTextBox _topLBack = {
	/* .m_bVis = */ false,
	/* .m_clock = */ 0.f,
	/* .m_vStart = */ {
		/* . = */ {
			/* .d = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f
			},
			/* . = */ {
				/* .x = */ 0.f,
				/* .y = */ 0.f
			}
		}
	},
	/* .m_vStop = */ {
		/* . = */ {
			/* .d = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f
			},
			/* . = */ {
				/* .x = */ 0.f,
				/* .y = */ 0.f
			}
		}
	},
	/* .m_vCur = */ {
		/* . = */ {
			/* .d = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f
			},
			/* . = */ {
				/* .x = */ 0.f,
				/* .y = */ 0.f
			}
		}
	}
};

ESlideTextBox _botRBack = {
	/* .m_bVis = */ false,
	/* .m_clock = */ 0.f,
	/* .m_vStart = */ {
		/* . = */ {
			/* .d = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f
			},
			/* . = */ {
				/* .x = */ 0.f,
				/* .y = */ 0.f
			}
		}
	},
	/* .m_vStop = */ {
		/* . = */ {
			/* .d = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f
			},
			/* . = */ {
				/* .x = */ 0.f,
				/* .y = */ 0.f
			}
		}
	},
	/* .m_vCur = */ {
		/* . = */ {
			/* .d = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f
			},
			/* . = */ {
				/* .x = */ 0.f,
				/* .y = */ 0.f
			}
		}
	}
};

EVec2 _vspeed_l1off = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f
		}
	}
};

EVec2 _vspeed_r1off = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f
		}
	}
};

EVec2 _vPlayOff = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f
		}
	}
};

EVec2 _vPlay2xOff = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f
		}
	}
};

EVec2 _vPlay3xOff = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f
		}
	}
};

EVec2 _vTimeOff = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f
		}
	}
};

EVec2 _timewinpos = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f
		}
	}
};

EVec2 _time_row_2 = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f
		}
	}
};

float _time_font_size = 15.f;

EVec2 _vPauseStateOff = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f
		}
	}
};

EVec2 _vTimeStateOff = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f
		}
	}
};

EVec2 _vPauseStateOff2 = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f
		}
	}
};

EVec2 _vTimeStateOff2 = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f
		}
	}
};

__vtbl_ptr_type TimeWindowAndPauseBar virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &TimeWindowAndPauseBar::~TimeWindowAndPauseBar,
		/* .__delta2 = */ 5960
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &TimeWindowAndPauseBar::SetState,
		/* .__delta2 = */ 6144
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &TimeWindowAndPauseBar::SetEvent,
		/* .__delta2 = */ 11408
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type Panelstateman virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &Panelstateman::~Panelstateman,
		/* .__delta2 = */ 12000
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

TimeWindowAndPauseBar* TimeWindowAndPauseBar::TimeWindowAndPauseBar() {
	Panelstateman *this;
	
  ERShader *pEVar1;
  ERFont *pEVar2;
  short *psVar3;
  
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  (this->field0_0x0).m_state = LIVE_DEFAULT_STATE;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (Panelstateman__vtable *)_vt_21TimeWindowAndPauseBar;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x74c06451,(EFile *)0x0,0);
  this->m_pBackGround = pEVar1;
  pEVar2 = (ERFont *)
           AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pFont = pEVar2;
  psVar3 = GetUiString__7EGlobalPCc(&_globals,"am");
  this->m_pszAm = psVar3;
  psVar3 = GetUiString__7EGlobalPCc(&_globals,"pm");
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_pszPm = psVar3;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xe7ba3ddd,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pPause_Speed_Indicators[0] = pEVar1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x20ce505d,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pPause_Speed_Indicators[1] = pEVar1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x681c330e,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pPause_Speed_Indicators[2] = pEVar1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xda3fb0a7,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pPause_Speed_Indicators[3] = pEVar1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xad388031,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pPause_Speed_Indicators[4] = pEVar1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xdedd8c86,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_fSecondsSinceStopWatchStart = 0.0;
  this->m_pPause_Speed_Indicators[5] = pEVar1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_bAllAwakeAndVisible = 1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  this->m_butDownLastFrame = 0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  this->m_fTotalStopWatchTime = 0.0;
  *(undefined4 *)&this->m_bWasTwoPlayer = 0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  _topLBack.m_vStart.field0_0x0.d[0] = this->m_fSecondsSinceStopWatchStart;
  _topLBack.m_vStop.field0_0x0.d[0] = 0.25;
  _topLBack.m_vStop.field0_0x0.d[1] = 0.238;
  _botRBack.m_vStart.field0_0x0.d[0] = 1.0;
  _botRBack.m_vStop.field0_0x0.d[0] = 0.75;
  _botRBack.m_vStop.field0_0x0.d[1] = 0.665;
  _topLBack.m_vStart.field0_0x0.d[1] = 0.238;
  _botRBack.m_vStart.field0_0x0.d[1] = 0.665;
                    /* end of inlined section */
  _topLBack.m_vCur.field0_0x0 =
       (EVec2__null___1__1)
       (EVec2__null___1__1)CONCAT44(0x3e73b646,this->m_fSecondsSinceStopWatchStart);
  _botRBack.m_vCur.field0_0x0 = (EVec2__null___1__1)(null___1__1)0x3f2a3d713f800000;
  return this;
}

void TimeWindowAndPauseBar::~TimeWindowAndPauseBar(int __in_chrg) {
	Panelstateman *this;
	int __in_chrg;
	void *pAddress;
	
  (this->field0_0x0).__vtable = (Panelstateman__vtable *)_vt_21TimeWindowAndPauseBar;
  DelRef__9EResource(&this->m_pBackGround->field0_0x0);
  DelRef__9EResource(&this->m_pFont->field0_0x0);
  DelRef__9EResource(&this->m_pPause_Speed_Indicators[0]->field0_0x0);
  DelRef__9EResource(&this->m_pPause_Speed_Indicators[1]->field0_0x0);
  DelRef__9EResource(&this->m_pPause_Speed_Indicators[2]->field0_0x0);
  DelRef__9EResource(&this->m_pPause_Speed_Indicators[3]->field0_0x0);
  DelRef__9EResource(&this->m_pPause_Speed_Indicators[4]->field0_0x0);
  DelRef__9EResource(&this->m_pPause_Speed_Indicators[5]->field0_0x0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
                    /* end of inlined section */
  this->m_pBackGround = (ERShader *)0x0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
  (this->field0_0x0).__vtable = (Panelstateman__vtable *)_vt_13Panelstateman;
                    /* end of inlined section */
  this->m_pFont = (ERFont *)0x0;
  this->m_pPause_Speed_Indicators[0] = (ERShader *)0x0;
  this->m_pPause_Speed_Indicators[1] = (ERShader *)0x0;
  this->m_pPause_Speed_Indicators[2] = (ERShader *)0x0;
  this->m_pPause_Speed_Indicators[3] = (ERShader *)0x0;
  this->m_pPause_Speed_Indicators[4] = (ERShader *)0x0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
  this->m_pPause_Speed_Indicators[5] = (ERShader *)0x0;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

void TimeWindowAndPauseBar::SetState(Panelstate newstate) {
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_c;
  
  if (newstate < NSTATES) {
                    /* WARNING: Could not recover jumptable at 0x001e1824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_003b55e0)[newstate])((&PTR_LAB_003b55e0)[newstate],newstate,this);
    return;
  }
  if (_iVideoMode == 0) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    uVar2 = 0x3f75c28f;
                    /* end of inlined section */
    _vTimeOff.field0_0x0 = (EVec2__null___1__1)0x3de147ae3f75c28f;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    uVar1 = 0x3dcccccd;
                    /* end of inlined section */
    local_c = 0x3d4ccccd;
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    uVar2 = 0x3f770a3d;
                    /* end of inlined section */
    _vTimeOff.field0_0x0 = (EVec2__null___1__1)0x3dced9173f770a3d;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_c = 0x3d27ef9e;
    uVar1 = 0x3db645a2;
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  _time_row_2.field0_0x0 = (EVec2__null___1__1)(EVec2__null___1__1)CONCAT44(uVar1,uVar2);
  _vspeed_l1off.field0_0x0 =
       (EVec2__null___1__1)
       (EVec2__null___1__1)((EVec2__null___1__1)CONCAT44(local_c,0x3f466666)).field1;
  return;
}

void TimeWindowAndPauseBar::Update() {
	bool twoplayerdisplay;
	bool bWasPaused;
	SInt16 speedOverride;
	bool awakeandvis;
	bool awakeandvisChanged;
	bool L1Down;
	bool R1Down;
	Panelstate state;
	
  Panelstate PVar1;
  int iVar2;
  EUIVirtualCtrl__vtable *pEVar3;
  cSimulator *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  cSimulator__vtable *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  uint uVar16;
  
  uVar16 = 0;
  bVar6 = IsTwoPlayer__7EGlobal(&_globals);
  if (bVar6) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
                    /* end of inlined section */
    uVar16 = (this->field0_0x0).m_state + ~LIVE_SIM_EDIT < 2 ^ 1;
    uVar9 = *(uint *)&this->m_bWasTwoPlayer;
  }
  else {
    uVar9 = *(uint *)&this->m_bWasTwoPlayer;
  }
  if (uVar9 != uVar16) {
    if (uVar16 == 0) {
      bVar6 = IsTwoPlayer__7EGlobal(&_globals);
      if (!bVar6) {
        _topLBack._0_4_ = 0;
        _botRBack._0_4_ = 0;
      }
    }
    else {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      _topLBack.m_vStop.field0_0x0.d[0] = 0.25;
      _topLBack.m_vStop.field0_0x0.d[1] = 0.238;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      _botRBack.m_vStart.field0_0x0.d[0] = 1.0;
      _botRBack.m_vStop.field0_0x0.d[0] = 0.75;
      _botRBack.m_vStop.field0_0x0.d[1] = 0.665;
      _topLBack.m_vStart.field0_0x0.d[0] = 0.0;
      _topLBack.m_vStart.field0_0x0.d[1] = 0.238;
      _botRBack.m_vStart.field0_0x0.d[1] = 0.665;
                    /* end of inlined section */
      _topLBack.m_vCur.field0_0x0 = (EVec2__null___1__1)0x3e73b64600000000;
      _botRBack.m_vCur.field0_0x0 = (EVec2__null___1__1)0x3f2a3d713f800000;
      _botRBack._0_4_ = 1;
      _topLBack._0_4_ = 1;
    }
  }
  Update__13ESlideTextBox(&_topLBack);
  Update__13ESlideTextBox(&_botRBack);
  PVar1 = (this->field0_0x0).m_state;
  if (PVar1 == LIVE_DIALOG_STATE) {
    return;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
                    /* end of inlined section */
  if (PVar1 + ~LIVE_SIM_EDIT < 2) {
    return;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  lVar12 = (*(code *)_5Globs_pSimulator->__vtable->GetDaysRunning)
                     ((int)&_5Globs_pSimulator->__vtable +
                      (int)*(short *)&_5Globs_pSimulator->__vtable->GetExpensesHistory);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  lVar13 = (*(code *)_5Globs_pSimulator->__vtable->Resume)
                     ((int)&_5Globs_pSimulator->__vtable +
                      (int)*(short *)&_5Globs_pSimulator->__vtable->Pause,0x26);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  iVar10 = (*(code *)_5Globs_pObjectModule->__vtable->UpdateWallAdjacencies)
                     ((int)&_5Globs_pObjectModule->__vtable +
                      (int)*(short *)&_5Globs_pObjectModule->__vtable->BroadcastMessage);
  iVar2 = *(int *)&this->m_bAllAwakeAndVisible;
  *(int *)&this->m_bAllAwakeAndVisible = iVar10;
  bVar6 = iVar2 != iVar10;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  if ((iVar10 == 0) &&
     (lVar14 = (*(code *)_5Globs_pSimulator->__vtable->DoStream)
                         ((int)&_5Globs_pSimulator->__vtable +
                          (int)*(short *)&_5Globs_pSimulator->__vtable->DoCommand), lVar14 == 0)) {
    if (_globals.m_pPiP == (EPictureInPicture *)0x0) {
      bVar6 = true;
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pictureinpicture.h */
                    /* end of inlined section */
      if (*(int *)_globals.m_pPiP == 0) {
        bVar6 = true;
      }
    }
  }
  bVar5 = false;
  bVar7 = false;
  if (lVar13 < 0) {
    pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar13 = (**(code **)(pEVar3 + 1))
                       ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar3->GetBut + -4,0,4);
    if (lVar13 == 0) {
      bVar7 = IsTwoPlayer__7EGlobal(&_globals);
      if ((bVar7) &&
         (pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable,
         lVar13 = (**(code **)(pEVar3 + 1))
                            ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar3->GetBut + -4,
                             1,4), lVar13 != 0)) {
        bVar5 = true;
      }
    }
    else {
      bVar5 = true;
    }
    bVar7 = false;
    pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar13 = (**(code **)(pEVar3 + 1))
                       ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar3->GetBut + -4,0,8);
    if (lVar13 == 0) {
      bVar8 = IsTwoPlayer__7EGlobal(&_globals);
      if ((bVar8) &&
         (pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable,
         lVar13 = (**(code **)(pEVar3 + 1))
                            ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar3->GetBut + -4,
                             1,8), lVar13 != 0)) {
        bVar7 = true;
      }
    }
    else {
      bVar7 = true;
    }
  }
  else if (lVar13 == 1) {
    bVar5 = false;
  }
  else if (lVar13 < 2) {
    if (lVar13 == 0) {
      bVar5 = true;
    }
  }
  else if (lVar13 == 2) {
    bVar5 = false;
    bVar7 = true;
  }
  if (!bVar5) {
    if ((!bVar7) && (bVar6)) {
      uVar15 = 0;
      if (iVar10 == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        uVar15 = 0xfffffffffffffffd;
        pcVar11 = _5Globs_pSimulator->__vtable;
      }
      else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        pcVar11 = _5Globs_pSimulator->__vtable;
      }
      (*(code *)pcVar11->SetMode)
                ((int)&_5Globs_pSimulator->__vtable + (int)*(short *)&pcVar11->GetMode,uVar15);
      return;
    }
    if (bVar7) goto LAB_001e1d40;
    if (this->m_butDownLastFrame == 0) goto LAB_001e1d38;
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x334079df);
                    /* end of inlined section */
    this->m_butDownLastFrame = 0;
    if (iVar10 == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pSimulator->__vtable->SetMode)
                ((int)&_5Globs_pSimulator->__vtable +
                 (int)*(short *)&_5Globs_pSimulator->__vtable->GetMode,0xfffffffffffffffd);
                    /* end of inlined section */
      goto LAB_001e1d98;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    uVar15 = 0;
    pcVar4 = _5Globs_pSimulator;
LAB_001e1d84:
    (*(code *)pcVar4->__vtable->SetMode)
              ((int)&pcVar4->__vtable + (int)*(short *)&pcVar4->__vtable->GetMode,uVar15);
LAB_001e1d98:
    if (lVar12 == 0) {
      return;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pSimulator->__vtable->GetPreviousExpenses)
              ((int)&_5Globs_pSimulator->__vtable +
               (int)*(short *)&_5Globs_pSimulator->__vtable->GetTodaysExpenses);
    ResumeSounds__12cSoundPlayer(_5Globs_pSound);
    return;
  }
LAB_001e1d38:
  if (bVar7) {
LAB_001e1d40:
    if (bVar5) goto LAB_001e1ddc;
    if ((this->m_butDownLastFrame == 4) || (this->m_butDownLastFrame == 0)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xb8fc878b);
      pcVar4 = _5Globs_pSimulator;
                    /* end of inlined section */
      this->m_butDownLastFrame = 1;
      uVar15 = 0xfffffffffffffffe;
      goto LAB_001e1d84;
    }
  }
  if (!bVar5) {
    return;
  }
LAB_001e1ddc:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  if (((!bVar7) && ((uint)this->m_butDownLastFrame < 2)) &&
     (lVar12 = (*(code *)_5Globs_pSimulator->__vtable->GetDaysRunning)
                         ((int)&_5Globs_pSimulator->__vtable +
                          (int)*(short *)&_5Globs_pSimulator->__vtable->GetExpensesHistory),
     lVar12 == 0)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x9f52811);
    pcVar4 = _5Globs_pSimulator;
                    /* end of inlined section */
    this->m_butDownLastFrame = 4;
    pcVar11 = pcVar4->__vtable;
    (*(code *)pcVar11->Spend)((int)&pcVar4->__vtable + (int)*(short *)&pcVar11->GetFunds);
    PauseSounds__12cSoundPlayer(_5Globs_pSound);
  }
  return;
}

void TimeWindowAndPauseBar::HandlePipEvent() {
  if (*(int *)&this->m_bAllAwakeAndVisible == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pSimulator->__vtable->SetMode)
              ((int)&_5Globs_pSimulator->__vtable +
               (int)*(short *)&_5Globs_pSimulator->__vtable->GetMode,0);
  }
  return;
}

void TimeWindowAndPauseBar::Pause() {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pSimulator->__vtable->Spend)
            ((int)&_5Globs_pSimulator->__vtable +
             (int)*(short *)&_5Globs_pSimulator->__vtable->GetFunds);
  PauseSounds__12cSoundPlayer(_5Globs_pSound);
  return;
}

void TimeWindowAndPauseBar::UnPause() {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pSimulator->__vtable->GetPreviousExpenses)
            ((int)&_5Globs_pSimulator->__vtable +
             (int)*(short *)&_5Globs_pSimulator->__vtable->GetTodaysExpenses);
  ResumeSounds__12cSoundPlayer(_5Globs_pSound);
  return;
}

void TimeWindowAndPauseBar::Draw(ERC *prc) {
	EVec2 *pvPauseStateOff;
	EVec2 *pvTimeStateOff;
	EVec2 vpos;
	EVec2 _vPauseOff;
	EVec2 vPauseStateOff2;
	EVec4 vpauseColor;
	static float pauseBlinkTime = 0.f;
	EVec2 vSpeedIndOff;
	ERFont *this;
	EVec2 *this;
	EVec2 *this;
	Panelstate state;
	StringBufW255 monStr;
	int dollars;
	ERFont *this;
	ERC *prc;
	StringBufW255 buffer;
	int dollars;
	Panelstate state;
	SInt16 hours;
	SInt16 mins;
	bool isAM;
	StringBufW255 timeStr;
	u16 *pszAm;
	ERFont *this;
	ERC *prc;
	StringBufW255 buffer;
	SInt16 hours;
	SInt16 mins;
	bool isAM;
	u16 *pszAm;
	StringBufW255 monStr;
	EVec2 *this;
	ERFont *this;
	ERC *prc;
	EVec2 *this;
	SimSpeed curSpeed;
	EVec2 *this;
	EVec2 *this;
	Panelstate state;
	int min;
	int sec;
	StackString2<8> strbuf;
	short unsigned int _tmpbff[2];
	EVec4 vRedBlink;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	
  ERFont *pEVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  ushort *puVar9;
  short *psVar10;
  Panelstate PVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  float fVar16;
  ERShader *this_00;
  long lVar17;
  EVec4 *pEVar18;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  EVec2 *pEVar19;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  EVec2 *pEVar20;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar21;
  EVec2 vpos;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined local_300 [16];
  EVec2 vPauseStateOff2;
  short asStack_2e8 [4];
  EVec4 vpauseColor;
  EVec2 vSpeedIndOff;
  StringBuffer2 local_2c0;
  short asStack_2b8 [4];
  float local_2b0;
  float local_2ac;
  short _tmpbff [2];
  EVec4 vRedBlink;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  undefined4 local_270;
  undefined4 local_26c;
  float local_f0;
  float local_ec;
  float local_e0;
  float local_dc;
  float local_d0;
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
  
  local_60 = (undefined4)unaff_s6;
  uStack_5c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s5;
  uStack_6c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s8;
  uStack_3c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_50 = (undefined4)unaff_s7;
  uStack_4c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_80 = (undefined4)unaff_s4;
  uStack_7c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s3;
  uStack_8c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_a0 = (undefined4)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_b0 = (undefined4)unaff_s1;
  uStack_ac = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_c0 = (undefined4)unaff_s0;
  uStack_bc = (undefined4)((ulong)unaff_s0 >> 0x20);
  bVar8 = IsTwoPlayer__7EGlobal(&_globals);
  if (bVar8) {
    pEVar20 = &_vPauseStateOff2;
    pEVar19 = &_vTimeStateOff2;
  }
  else {
    pEVar20 = &_vPauseStateOff;
    Select__8ERShaderP3ERCi(this->m_pBackGround,prc,0);
    pEVar19 = &_vTimeStateOff;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vpos.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vpos.field0_0x0.d[0] = 1.0;
    local_304 = 0x3f800000;
    local_308 = 0x3f800000;
    local_30c = 0x3f800000;
    local_310 = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,0x3d00a8,&vpos,
               &local_310);
  }
                    /* end of inlined section */
  SetSize__6ERFontffb(this->m_pFont,_time_font_size,1.0,true);
  uVar7 = _CYAN.field0_0x0.d[3];
  uVar6 = _CYAN.field0_0x0.d[2];
  uVar5 = _CYAN.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  pEVar1 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  (pEVar1->m_vColor).field0_0x0.d[0] = (float)_CYAN.field0_0x0._0_8_;
  (pEVar1->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
  (pEVar1->m_vColor).field0_0x0.d[2] = uVar6;
  (pEVar1->m_vColor).field0_0x0.d[3] = uVar7;
                    /* end of inlined section */
  Select__6ERFontP3ERC(this->m_pFont,prc);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vpos.field0_0x0.d[1] = (pEVar20->field0_0x0).d[1] + _vspeed_l1off.field0_0x0.d[1];
  vpos.field0_0x0.d[0] = (pEVar20->field0_0x0).d[0] + _vTimeOff.field0_0x0.d[0];
  local_300._4_4_ = (pEVar20->field0_0x0).d[1] + _vTimeOff.field0_0x0.d[1];
  local_300._0_4_ = (short *)vpos.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  bVar8 = IsTwoPlayer__7EGlobal(&_globals);
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
                    /* end of inlined section */
  if ((bVar8) && (1 < (this->field0_0x0).m_state + ~LIVE_SIM_EDIT)) {
                    /* inlined from ../MSrc/StringBuffer2.h */
    __13StringBuffer2PUsUi
              ((StringBuffer2 *)(StackString2_256_ *)local_300,(short *)(local_300 + 8),0x100);
                    /* end of inlined section */
    erase__13StringBuffer2((StringBuffer2 *)(StackString2_256_ *)local_300);
    bVar8 = IsChallangeMode__7EGlobal(&_globals);
    if (bVar8) {
      puVar9 = GetChallengeModeData__Fi(0);
      appendNum__13StringBuffer2ii
                ((StringBuffer2 *)(StackString2_256_ *)local_300,(int)(short)*puVar9,0);
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      lVar15 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                         ((int)&_5Globs_pSimulator->__vtable +
                          (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue);
      if (lVar15 < 0) {
        iVar12 = 0;
      }
      else {
        lVar17 = 99999;
        if (lVar15 < 100000) {
          lVar17 = lVar15;
        }
        iVar12 = (int)lVar17;
      }
      GetMoneyString__FiRt12StackString21Ui256(iVar12,(StackString2_256_ *)local_300);
    }
    psVar10 = c_str__C13StringBuffer2((StringBuffer2 *)(StackString2_256_ *)local_300);
    Draw__13ESlideTextBoxP3ERCPCUsiRC5EVec4(&_topLBack,prc,psVar10,1,&_CYAN);
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
    PVar11 = (this->field0_0x0).m_state;
  }
  else {
                    /* inlined from ../MSrc/StringBuffer2.h */
    __13StringBuffer2PUsUi((StringBuffer2 *)&vPauseStateOff2,asStack_2e8,0x100);
                    /* end of inlined section */
    lVar15 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                       ((int)&_5Globs_pSimulator->__vtable +
                        (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue);
    if (lVar15 < 0) {
      iVar12 = 0;
    }
    else {
      lVar17 = 99999;
      if (lVar15 < 100000) {
        lVar17 = lVar15;
      }
      iVar12 = (int)lVar17;
    }
    GetMoneyString__FiRt12StackString21Ui256(iVar12,(StackString2_256_ *)&vPauseStateOff2);
    psVar10 = c_str__C13StringBuffer2((StringBuffer2 *)(StackString2_256_ *)&vPauseStateOff2);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_e0 = vpos.field0_0x0.d[0];
    local_dc = vpos.field0_0x0.d[1];
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,psVar10,true,(EVec2 *)&local_e0,E_FAX_RIGHT,E_FAY_TOP,(EVec2 *)0x0)
    ;
                    /* end of inlined section */
    PVar11 = (this->field0_0x0).m_state;
  }
                    /* end of inlined section */
  if (PVar11 + ~LIVE_SIM_EDIT < 2) {
    bVar8 = IsBuildHouseMode__7EGlobal(&_globals);
    if (!bVar8) {
                    /* inlined from ../MSrc/StringBuffer2.h */
      __13StringBuffer2PUsUi((StringBuffer2 *)local_300,(short *)(local_300 + 8),0x100);
                    /* end of inlined section */
      iVar12 = (*(code *)_5Globs_pSimulator->__vtable[1].GetTicks)
                         ((int)&_5Globs_pSimulator->__vtable +
                          (int)*(short *)&_5Globs_pSimulator->__vtable[1].SetCurrentHour);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      iVar13 = (*(code *)_5Globs_pSimulator->__vtable[1].GetDaysRunning)
                         ((int)&_5Globs_pSimulator->__vtable +
                          (int)*(short *)&_5Globs_pSimulator->__vtable[1].GetExpensesHistory);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      iVar14 = (*(code *)_5Globs_pSimulator->__vtable[1].GetLotValue)
                         ((int)&_5Globs_pSimulator->__vtable +
                          (int)*(short *)&_5Globs_pSimulator->__vtable[1].GetTutorialOn);
      GetMoneyString__FiRt12StackString21Ui256
                (iVar12 + iVar13 + iVar14,(StackString2_256_ *)local_300);
      psVar10 = c_str__C13StringBuffer2((StringBuffer2 *)(StackString2_256_ *)local_300);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_f0 = (pEVar19->field0_0x0).d[0] + _time_row_2.field0_0x0.d[0];
      local_ec = (pEVar19->field0_0x0).d[1] + _time_row_2.field0_0x0.d[1];
      local_d0 = local_f0;
      local_cc = local_ec;
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar10,true,(EVec2 *)&local_d0,E_FAX_RIGHT,E_FAY_TOP,
                 (EVec2 *)0x0);
    }
  }
  else {
    bVar8 = IsTwoPlayer__7EGlobal(&_globals);
    if (bVar8) {
                    /* inlined from ../MSrc/StringBuffer2.h */
      __13StringBuffer2PUsUi((StringBuffer2 *)local_300,(short *)(local_300 + 8),0x100);
                    /* end of inlined section */
      erase__13StringBuffer2((StringBuffer2 *)(StackString2_256_ *)local_300);
      bVar8 = IsChallangeMode__7EGlobal(&_globals);
      if (bVar8) {
        puVar9 = GetChallengeModeData__Fi(1);
        appendNum__13StringBuffer2i
                  ((StringBuffer2 *)(StackString2_256_ *)local_300,(int)(short)*puVar9);
      }
      else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        lVar15 = (*(code *)_5Globs_pSimulator->__vtable->Resume)
                           ((int)&_5Globs_pSimulator->__vtable +
                            (int)*(short *)&_5Globs_pSimulator->__vtable->Pause,0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        iVar12 = (*(code *)_5Globs_pSimulator->__vtable->Resume)
                           ((int)&_5Globs_pSimulator->__vtable +
                            (int)*(short *)&_5Globs_pSimulator->__vtable->Pause,5);
        if (lVar15 < 0xc) {
          psVar10 = this->m_pszAm;
        }
        else {
          psVar10 = this->m_pszPm;
        }
        GetTimeString__FiiPCUsRt12StackString21Ui256
                  ((int)lVar15,iVar12,psVar10,(StackString2_256_ *)local_300);
      }
      psVar10 = c_str__C13StringBuffer2((StringBuffer2 *)(StackString2_256_ *)local_300);
      Draw__13ESlideTextBoxP3ERCPCUsiRC5EVec4(&_botRBack,prc,psVar10,0,&_CYAN);
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      lVar15 = (*(code *)_5Globs_pSimulator->__vtable->Resume)
                         ((int)&_5Globs_pSimulator->__vtable +
                          (int)*(short *)&_5Globs_pSimulator->__vtable->Pause,0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      iVar12 = (*(code *)_5Globs_pSimulator->__vtable->Resume)
                         ((int)&_5Globs_pSimulator->__vtable +
                          (int)*(short *)&_5Globs_pSimulator->__vtable->Pause,5);
                    /* inlined from ../MSrc/StringBuffer2.h */
      __13StringBuffer2PUsUi((StringBuffer2 *)local_300,(short *)(local_300 + 8),0x100);
                    /* end of inlined section */
      if (lVar15 < 0xc) {
        psVar10 = this->m_pszAm;
      }
      else {
        psVar10 = this->m_pszPm;
      }
      GetTimeString__FiiPCUsRt12StackString21Ui256
                ((int)lVar15,iVar12,psVar10,(StackString2_256_ *)local_300);
      psVar10 = c_str__C13StringBuffer2((StringBuffer2 *)(StackString2_256_ *)local_300);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_f0 = _time_row_2.field0_0x0.d[0];
      local_ec = _time_row_2.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar10,true,(EVec2 *)&local_f0,E_FAX_RIGHT,E_FAY_TOP,
                 (EVec2 *)0x0);
                    /* end of inlined section */
    }
  }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_300._4_4_ = 0.0625;
  local_300._0_4_ = (short *)0x3f51eb85;
  vPauseStateOff2.field0_0x0.d[0] = 0.12;
                    /* end of inlined section */
  vPauseStateOff2.field0_0x0.d[1] = 0.6425;
  bVar8 = IsTwoPlayer__7EGlobal(&_globals);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  if (bVar8) {
    pEVar20 = &vPauseStateOff2;
  }
  pauseBlinkTime_2487 = pauseBlinkTime_2487 + _dt;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  vpauseColor.field0_0x0.d[0] = _WHITE.field0_0x0.d[0];
  vpauseColor.field0_0x0.d[1] = _WHITE.field0_0x0.d[1];
  vpauseColor.field0_0x0.d[2] = _WHITE.field0_0x0.d[2];
  vpauseColor.field0_0x0.d[3] = _WHITE.field0_0x0.d[3];
                    /* end of inlined section */
  fVar21 = pauseBlinkTime_2487 * 2.857143;
  if (0.0 <= pauseBlinkTime_2487) {
    if (0.35 < pauseBlinkTime_2487) {
      pauseBlinkTime_2487 = 0.0;
    }
  }
  else {
    pauseBlinkTime_2487 = 0.35;
  }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  lVar15 = (*(code *)_5Globs_pSimulator->__vtable->GetDaysRunning)
                     ((int)&_5Globs_pSimulator->__vtable +
                      (int)*(short *)&_5Globs_pSimulator->__vtable->GetExpensesHistory);
  if (lVar15 == 0) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    vpauseColor.field0_0x0.d[0] = 0.0;
    vpauseColor.field0_0x0.d[2] = 0.0;
    vpauseColor.field0_0x0.d[3] = 1.0;
                    /* end of inlined section */
    vpauseColor.field0_0x0.d[1] = fVar21;
    lVar15 = (*(code *)_5Globs_pSimulator->__vtable->DoStream)
                       ((int)&_5Globs_pSimulator->__vtable +
                        (int)*(short *)&_5Globs_pSimulator->__vtable->DoCommand);
    if (lVar15 == -3) {
      Select__8ERShaderP3ERCi(this->m_pPause_Speed_Indicators[4],prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_2b0 = (pEVar20->field0_0x0).d[0] + (float)local_300._0_4_;
      local_2ac = (pEVar20->field0_0x0).d[1] + local_300._4_4_;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_2c0.fMem = (short *)(local_2b0 + -0.03);
      local_2c0.fCapacity = (uint)(local_2ac + -0.01);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      _tmpbff = (short  [2])0x3f800000;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].ClipRect)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_2c0,_tmpbff,
                 &vpauseColor);
      goto LAB_001e2750;
    }
    if (lVar15 != -2) goto LAB_001e2750;
    this_00 = this->m_pPause_Speed_Indicators[3];
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    vpauseColor.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    vpauseColor.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    this_00 = this->m_pPause_Speed_Indicators[1];
                    /* end of inlined section */
    vpauseColor.field0_0x0.d[3] = 1.0;
    vpauseColor.field0_0x0.d[0] = fVar21;
  }
  Select__8ERShaderP3ERCi(this_00,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_2b0 = (pEVar20->field0_0x0).d[0] + (float)local_300._0_4_;
  local_2ac = (pEVar20->field0_0x0).d[1] + local_300._4_4_;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_2c0.fMem = (short *)(local_2b0 + -0.03);
  local_2c0.fCapacity = (uint)(local_2ac + -0.01);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  _tmpbff = (short  [2])0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_2c0,_tmpbff,
             &vpauseColor);
LAB_001e2750:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  lVar15 = (*(code *)_5Globs_pSimulator->__vtable->Resume)
                     ((int)&_5Globs_pSimulator->__vtable +
                      (int)*(short *)&_5Globs_pSimulator->__vtable->Pause,0x25);
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
                    /* end of inlined section */
  if ((-1 < lVar15) && (1 < (this->field0_0x0).m_state + ~LIVE_SIM_EDIT)) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vRedBlink.field0_0x0.d[3] = 1.0;
                    /* end of inlined section */
    Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_2c0.fMem = (short *)0x3ecccccd;
    pEVar18 = &vRedBlink;
    local_2c0.fCapacity = 0x3ee66666;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_2b0 = 0.6;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_274 = _DK_GREAY.field0_0x0.d[3] * 0.35;
    local_27c = _DK_GREAY.field0_0x0.d[1] * 0.35;
    local_2ac = 0.55;
    local_278 = _DK_GREAY.field0_0x0.d[2] * 0.35;
    local_280 = _DK_GREAY.field0_0x0.d[0] * 0.35;
    _tmpbff = (short  [2])0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vRedBlink.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
    vRedBlink.field0_0x0.d[0] = vRedBlink.field0_0x0.d[3];
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_2c0,
               &local_2b0,_tmpbff,pEVar18,(EVec2 *)&local_280);
                    /* inlined from ../MSrc/StringBuffer2.h */
                    /* inlined from ../MSrc/StringBuffer2.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/StringBuffer2.h */
    __13StringBuffer2PUsUi(&local_2c0,asStack_2b8,8);
                    /* end of inlined section */
    appendNum__13StringBuffer2ii(&local_2c0,(int)(short)((int)lVar15 / 0x3c),2);
    uVar2 = (int)_tmpbff + 3U & 3;
    puVar3 = (uint *)(((int)_tmpbff + 3U) - uVar2);
    *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | (uint)DAT_003b5608 >> (3 - uVar2) * 8;
    _tmpbff = DAT_003b5608;
    append__13StringBuffer2PCUsi(&local_2c0,_tmpbff,-1);
    appendNum__13StringBuffer2ii(&local_2c0,(int)lVar15 % 0x3c,2);
    SetSize__6ERFontffb(this->m_pFont,18.0,vRedBlink.field0_0x0.d[3],true);
    Select__6ERFontP3ERC(this->m_pFont,prc);
    uVar7 = _BLACK.field0_0x0.d[3];
    uVar6 = _BLACK.field0_0x0.d[2];
    uVar5 = _BLACK.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    pEVar1 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    (pEVar1->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
    (pEVar1->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
    (pEVar1->m_vColor).field0_0x0.d[2] = uVar6;
    (pEVar1->m_vColor).field0_0x0.d[3] = uVar7;
    psVar10 = c_str__C13StringBuffer2(&local_2c0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vRedBlink.field0_0x0.d[0] = 0.5;
    vRedBlink.field0_0x0.d[1] = 0.5;
    local_280 = 0.5;
    local_27c = 0.5;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,psVar10,true,(EVec2 *)&local_280,E_FAX_CENTER,E_FAY_CENTER,
               (EVec2 *)0x0);
                    /* end of inlined section */
    psVar10 = c_str__C13StringBuffer2(&local_2c0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vRedBlink.field0_0x0.d[0] = -0.5;
    vRedBlink.field0_0x0.d[1] = -0.5;
    local_27c = -0.5;
    local_280 = -0.5;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,psVar10,true,(EVec2 *)&local_280,E_FAX_CENTER,E_FAY_CENTER,
               (EVec2 *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    vRedBlink.field0_0x0.d[2] = 0.0;
    vRedBlink.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    vRedBlink.field0_0x0.d[0] = vRedBlink.field0_0x0.d[3] - fVar21;
                    /* end of inlined section */
    if (10 < lVar15) {
      pEVar18 = &_CYAN;
    }
    uVar4 = *(undefined8 *)&pEVar18->field0_0x0;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    fVar21 = (pEVar18->field0_0x0).d[2];
    fVar16 = (pEVar18->field0_0x0).d[3];
    pEVar1 = this->m_pFont;
                    /* end of inlined section */
    (pEVar1->m_vColor).field0_0x0.d[0] = (float)uVar4;
    (pEVar1->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
    (pEVar1->m_vColor).field0_0x0.d[2] = fVar21;
    (pEVar1->m_vColor).field0_0x0.d[3] = fVar16;
    psVar10 = c_str__C13StringBuffer2(&local_2c0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_27c = 0.5;
    local_270 = 0x3f000000;
    local_280 = 0.5;
    local_26c = 0x3f000000;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,psVar10,true,(EVec2 *)&local_270,E_FAX_CENTER,E_FAY_CENTER,
               (EVec2 *)0x0);
                    /* end of inlined section */
  }
  return;
}

bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2) {
  char cVar1;
  char cVar2;
  
  do {
    if ((first1 == last1) || (first2 == last2)) {
      return first1 == last1 && first2 != last2;
    }
    cVar1 = *first1;
    cVar2 = *first2;
    if (cVar1 < cVar2) {
      return true;
    }
    first1 = first1 + 1;
    first2 = first2 + 1;
  } while (cVar1 <= cVar2);
  return false;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/siminfowin.h */
    Init__13ESlideTextBox(&_topLBack);
    Init__13ESlideTextBox(&_botRBack);
    _vspeed_l1off.field0_0x0.d[0] = 0.775;
    _vspeed_r1off.field0_0x0.d[0] = 0.932;
    _vspeed_r1off.field0_0x0.d[1] = 0.05;
    _vPlayOff.field0_0x0.d[0] = 0.842;
    _vPlay2xOff.field0_0x0.d[0] = 0.855;
    _vPlay3xOff.field0_0x0.d[0] = 0.885;
    _vPlay3xOff.field0_0x0.d[1] = 0.0625;
    _vTimeOff.field0_0x0.d[1] = 0.11;
    _timewinpos.field0_0x0.d[0] = 0.75;
    _time_row_2.field0_0x0.d[0] = 0.96;
    _time_row_2.field0_0x0.d[1] = 0.1;
    _vPauseStateOff2.field0_0x0.d[0] = -0.74;
    _vPauseStateOff2.field0_0x0.d[1] = 0.205;
    _vTimeStateOff2.field0_0x0.d[1] = 0.57;
    _vspeed_l1off.field0_0x0.d[1] = 0.05;
    _vPlayOff.field0_0x0.d[1] = 0.0625;
    _vPlay2xOff.field0_0x0.d[1] = 0.0625;
    _vTimeOff.field0_0x0.d[0] = 0.96;
    _timewinpos.field0_0x0.d[1] = 0.0;
    _vPauseStateOff.field0_0x0.d[1] = 0.0;
    _vPauseStateOff.field0_0x0.d[0] = 0.0;
    _vTimeStateOff.field0_0x0.d[1] = 0.0;
    _vTimeStateOff.field0_0x0.d[0] = 0.0;
    _vTimeStateOff2.field0_0x0.d[0] = 0.0;
  }
  return;
}

void Panelstateman::~Panelstateman(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (Panelstateman__vtable *)_vt_13Panelstateman;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void TimeWindowAndPauseBar::SetEvent(PanelEvent event, u32 data) {
  return;
}

void ESlideTextBox::Init() {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  *(undefined4 *)this = 0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  (this->m_vCur).field0_0x0.d[0] = -1.0;
                    /* end of inlined section */
  this->m_clock = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  (this->m_vStart).field0_0x0.d[1] = -1.0;
  (this->m_vStart).field0_0x0.d[0] = -1.0;
  (this->m_vStop).field0_0x0.d[1] = -1.0;
  (this->m_vStop).field0_0x0.d[0] = -1.0;
  (this->m_vCur).field0_0x0.d[1] = -1.0;
  return;
}

void global constructors keyed to _topLBack() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _topLBack() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

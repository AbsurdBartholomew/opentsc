// STATUS: NOT STARTED

#include "freshnessutil.h"

struct ERQTable<snd::cFreshArray> {
	char *pName;
	cFreshArray *pData;
	char **ppRowNames;
	u32 uNumRows;
	u32 uRowSize;
};

double afFreqMult[13] = {
	/* [0] = */ 1,
	/* [1] = */ 1.0594631433486938,
	/* [2] = */ 1.1224620342254639,
	/* [3] = */ 1.1892070770263672,
	/* [4] = */ 1.2599210739135742,
	/* [5] = */ 1.3348398208618164,
	/* [6] = */ 1.4142135381698608,
	/* [7] = */ 1.4983071088790894,
	/* [8] = */ 1.5874010324478149,
	/* [9] = */ 1.6817928552627563,
	/* [10] = */ 1.7817974090576172,
	/* [11] = */ 1.8877485990524292,
	/* [12] = */ 2
};

double fMultFactor = 100;
Sint32 lSlamQuadrant = 0;

cFreshScore* cFreshScore::cFreshScore() {
  this->m_lVol = 0x400;
  this->m_lMaxCellsPlaying = 4;
  this->m_lSelectionAreaMaxXDistance = 2;
  this->m_lTempo = 0x78;
  this->m_lBeatsPerBar = 8;
  this->m_lInputQuantizeY = 1;
  this->m_lPriority = 0;
  this->m_lMinCellsPlaying = 0;
  this->m_lMinCellsXDiff = 0;
  this->m_lMinCellsYDiff = 0;
  this->m_lSelectionAreaMaxYDistance = 2;
  this->m_lInputQuantizeX = 1;
  this->m_lInitialXPos = 0;
  this->m_lInitialYPos = 0;
  this->m_pFreshData = (ERQuickdata *)0x0;
  this->m_pFreshArray = (cFreshArray *)0x0;
  return this;
}

void cFreshScore::~cFreshScore(int __in_chrg) {
	void *pAddress;
	
  if (this->m_pFreshData != (ERQuickdata *)0x0) {
    DelRef__9EResource(&this->m_pFreshData->field0_0x0);
    this->m_pFreshData = (ERQuickdata *)0x0;
  }
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

bool cFreshScore::LoadScore() {
  ERQuickdata *this_00;
  void *pvVar1;
  
  this->m_lTempo = 0x3e;
  this->m_lSelectionAreaMaxXDistance = 1;
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
                    /* end of inlined section */
  this->m_lPriority = 0;
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
                    /* end of inlined section */
  this->m_lMinCellsXDiff = 0;
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
                    /* end of inlined section */
  this->m_lMinCellsYDiff = 0;
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
                    /* end of inlined section */
  this->m_lVol = 0x33e;
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
                    /* end of inlined section */
  this->m_lSelectionAreaMaxYDistance = 6;
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
                    /* end of inlined section */
  this->m_lInputQuantizeY = 2;
  this->m_lMinCellsPlaying = 2;
  this->m_lMaxCellsPlaying = 2;
  this->m_lBeatsPerBar = 2;
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
  this->m_lInputQuantizeX = 2;
  this_00 = (ERQuickdata *)
            AddRef__16EResourceManagerUiP5EFilei(&_quickdataman.field0_0x0,0xc33db41,(EFile *)0x0,0)
  ;
  this->m_pFreshData = this_00;
  pvVar1 = getTable__11ERQuickdataPCc(this_00,"snd::cFreshArray");
                    /* end of inlined section */
  this->m_pFreshArray = *(cFreshArray **)((int)pvVar1 + 4);
  return true;
}

cFreshCell* cFreshScore::GetCell(int y, int x) {
  return this->m_pFreshArray->a[y] + x;
}

cFreshCellPlayer* cFreshCellPlayer::cFreshCellPlayer(cFreshPlayer *pFreshPlayer) {
  this->m_pFreshPlayer = pFreshPlayer;
  this->m_pSnd = (cIGZSnd *)0x0;
  this->m_eState = kNotPlaying;
  this->m_pCell = (cFreshCell *)0x0;
  *(undefined4 *)&this->m_bHasFastTimerRef = 0;
  *(undefined4 *)&this->m_bKillMe = 0;
  *(undefined4 *)&this->m_bIsDead = 0;
  return this;
}

void cFreshCellPlayer::Update(bool bTooMuchError, Sint32 lBeatNum) {
	Sint32 lInitVol;
	Sint32 lPitchShift;
	double fNewPitch;
	unsigned int lim;
	unsigned int lim;
	
  short sVar1;
  cIGZSnd__vtable *pcVar2;
  cIGZSnd *pcVar3;
  int iVar4;
  double arg_a;
  long lVar5;
  cFreshCell *pcVar6;
  int iVar7;
  
  switch(this->m_eState) {
  case kWaitingForReadAhead:
    pcVar3 = (cIGZSnd *)
             (*(code *)g_pSndSys->__vtable[1].Initialize)
                       ((int)&g_pSndSys->__vtable +
                        (int)*(short *)&g_pSndSys->__vtable[1].cIGZSndSys,this->m_pCell->sampleID,
                        this->m_pCell->m_bSampleLooped != '\0',0);
    this->m_pSnd = pcVar3;
    lVar5 = (**(code **)(pcVar3->__vtable + 1))
                      ((int)&pcVar3->__vtable + (int)*(short *)&pcVar3->__vtable->SetPosition);
    if (lVar5 != 0) {
      this->m_eState = kWaitingForStart;
      return;
    }
LAB_00296154:
    Kill__16cFreshCellPlayer(this);
    break;
  case kWaitingForStart:
    if (((lBeatNum == this->m_pFreshPlayer->m_pScore->m_lBeatsPerBar) &&
        (this->m_pCell->m_bUseFastTimer != '\0')) && (*(int *)&this->m_bHasFastTimerRef == 0)) {
      *(undefined4 *)&this->m_bHasFastTimerRef = 1;
    }
    if (lBeatNum != 1) {
      return;
    }
    pcVar6 = this->m_pCell;
    if ((pcVar6->m_bUseFastTimer != '\0') && (bTooMuchError)) {
      return;
    }
    this->m_eState = kPlaying;
    iVar4 = pcVar6->m_lRandPitchShiftLow;
    if (iVar4 == 0) {
      if (pcVar6->m_lRandPitchShiftHigh != 0) {
        iVar7 = pcVar6->m_lRandPitchShiftHigh;
        goto LAB_00295f1c;
      }
      pcVar6 = this->m_pCell;
    }
    else {
      iVar7 = pcVar6->m_lRandPitchShiftHigh;
LAB_00295f1c:
      if (iVar7 < iVar4) {
        pcVar6 = this->m_pCell;
      }
      else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/SRand.h */
        iVar7 = (iVar7 - iVar4) + 1;
        iVar4 = GetNextRandomNumber__Fv();
        if (iVar7 == 0) {
          trap(7);
        }
                    /* end of inlined section */
        pcVar2 = this->m_pSnd->__vtable;
                    /* inlined from c:/eor/src2/games/sims/MSrc/SRand.h */
                    /* end of inlined section */
        iVar4 = this->m_pCell->m_lRandPitchShiftLow + iVar4 % iVar7;
        lVar5 = (*(code *)pcVar2[1].GetPan)
                          ((int)&this->m_pSnd->__vtable + (int)*(short *)&pcVar2[1].FadeVolume);
        if (iVar4 < 0) {
          arg_a = (double)lVar5 / (double)afFreqMult[-iVar4];
        }
        else {
          arg_a = (double)lVar5 * (double)afFreqMult[iVar4];
        }
        pcVar3 = this->m_pSnd;
        pcVar2 = pcVar3->__vtable;
        sVar1 = *(short *)&pcVar2[1].SetPan;
        iVar4 = dptoli((long)arg_a);
        (*(code *)pcVar2[1].GetFrequency)((int)&pcVar3->__vtable + (int)sVar1,iVar4);
        pcVar6 = this->m_pCell;
      }
    }
    iVar4 = this->m_pFreshPlayer->m_lVol * pcVar6->m_lVol;
    iVar7 = iVar4 + 0x3ff;
    if (-1 < iVar4) {
      iVar7 = iVar4;
    }
    iVar7 = iVar7 >> 10;
    if (pcVar6->m_bVolIsRandom == '\0') {
LAB_00296048:
      pcVar6 = this->m_pCell;
    }
    else {
      if (3 < iVar7) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/SRand.h */
        iVar4 = GetNextRandomNumber__Fv();
        if (iVar7 / 3 == 0) {
          trap(7);
        }
                    /* end of inlined section */
        iVar7 = iVar7 - iVar4 % (iVar7 / 3);
        goto LAB_00296048;
      }
      pcVar6 = this->m_pCell;
    }
    if (pcVar6->m_lFadeInTime == 0) {
      SetVol__16cFreshCellPlayeri(this,pcVar6->m_lVol);
      pcVar3 = this->m_pSnd;
    }
    else {
      pcVar2 = this->m_pSnd->__vtable;
      (*(code *)pcVar2[1].Stop)
                ((int)&this->m_pSnd->__vtable + (int)*(short *)&pcVar2[1].IsPlaying,0);
      pcVar3 = this->m_pSnd;
    }
    (*(code *)pcVar3->__vtable->Load)
              ((int)&pcVar3->__vtable + (int)*(short *)&pcVar3->__vtable->Unpause);
    UpdatePan__16cFreshCellPlayer(this);
    if (this->m_pCell->m_lFadeInTime == 0) goto LAB_002961b0;
    pcVar2 = this->m_pSnd->__vtable;
    (*(code *)pcVar2[1].Unpause)
              ((int)&this->m_pSnd->__vtable + (int)*(short *)&pcVar2[1].Pause,iVar7,0,2000);
    iVar4 = *(int *)&this->m_bHasFastTimerRef;
    goto LAB_002961b4;
  case kDelayingStart:
    this->m_eState = kWaitingForStart;
    break;
  case kPlaying:
    if (this->m_pCell->m_bSampleLooped == '\0') {
      pcVar2 = this->m_pSnd->__vtable;
      lVar5 = (*(code *)pcVar2->GetVolume)
                        ((int)&this->m_pSnd->__vtable + (int)*(short *)&pcVar2->Unload);
      if (lVar5 != 0) {
        return;
      }
      Stop__16cFreshCellPlayer(this);
      this->m_eState = kNotPlaying;
      return;
    }
    iVar4 = this->m_lLoopTimer + -1;
    this->m_lLoopTimer = iVar4;
    if (*(int *)&this->m_bKillMe == 0) {
      iVar4 = this->m_lLoopTimer;
    }
    else {
      if (iVar4 == 0) {
        return;
      }
      if ((this->m_pCell->m_bUseFastTimer == '\0') || (!bTooMuchError)) goto LAB_00296154;
      iVar4 = this->m_lLoopTimer;
    }
    if (iVar4 == 1) {
      if (this->m_pCell->m_bUseFastTimer == '\0') {
        return;
      }
      if (*(int *)&this->m_bHasFastTimerRef != 0) {
        return;
      }
      *(undefined4 *)&this->m_bHasFastTimerRef = 1;
      return;
    }
    if (iVar4 != 0) {
      return;
    }
    this->m_lLoopTimer = this->m_pCell->m_lLoopLength;
    if (bTooMuchError) {
      return;
    }
LAB_002961b0:
    iVar4 = *(int *)&this->m_bHasFastTimerRef;
LAB_002961b4:
    if (iVar4 != 0) {
      *(undefined4 *)&this->m_bHasFastTimerRef = 0;
    }
    break;
  case kFading:
    pcVar2 = this->m_pSnd->__vtable;
    lVar5 = (*(code *)pcVar2->GetVolume)
                      ((int)&this->m_pSnd->__vtable + (int)*(short *)&pcVar2->Unload);
    if (lVar5 == 0) {
      Kill__16cFreshCellPlayer(this);
      this->m_eState = kNotPlaying;
    }
  }
  return;
}

bool cFreshCellPlayer::Start(cFreshCell *pCell) {
	cFreshCellPlayer *this;
	cFreshCellPlayer *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/FreshnessUtil.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/FreshnessUtil.h */
                    /* end of inlined section */
  if ((*(int *)&this->m_bIsDead == 0) && (this->m_eState == kNotPlaying)) {
    this->m_pCell = pCell;
    *(undefined4 *)&this->m_bKillMe = 0;
    if (pCell->m_bSampleLooped != '\0') {
      this->m_lLoopTimer = pCell->m_lLoopLength;
    }
    this->m_eState = kWaitingForReadAhead;
    return true;
  }
  return false;
}

bool cFreshCellPlayer::Stop() {
  short sVar1;
  cIGZSnd *pcVar2;
  cIGZSnd__vtable *pcVar3;
  undefined8 uVar4;
  
  if (*(int *)&this->m_bHasFastTimerRef != 0) {
    *(undefined4 *)&this->m_bHasFastTimerRef = 0;
  }
  switch(this->m_eState) {
  case kWaitingForReadAhead:
  case kWaitingForStart:
    Kill__16cFreshCellPlayer(this);
    break;
  case kPlaying:
    if (this->m_pCell->m_lFadeOutTime == 0) {
      Kill__16cFreshCellPlayer(this);
    }
    else {
      pcVar2 = this->m_pSnd;
      this->m_eState = kFading;
      pcVar3 = pcVar2->__vtable;
      sVar1 = *(short *)&pcVar3[1].Pause;
      uVar4 = (*(code *)pcVar3[1].Play)((int)&pcVar2->__vtable + (int)*(short *)&pcVar3[1].Release);
      (*(code *)pcVar3[1].Unpause)
                ((int)&pcVar2->__vtable + (int)sVar1,uVar4,0,this->m_pCell->m_lFadeOutTime);
    }
  }
  return true;
}

bool cFreshCellPlayer::Kill() {
  cIGZSnd *pcVar1;
  cIGZSnd__vtable *pcVar2;
  bool bVar3;
  
  if (this->m_pCell == (cFreshCell *)0x0) {
    bVar3 = false;
  }
  else {
    if (*(int *)&this->m_bHasFastTimerRef != 0) {
      *(undefined4 *)&this->m_bHasFastTimerRef = 0;
    }
    pcVar1 = this->m_pSnd;
    if (pcVar1 == (cIGZSnd *)0x0) {
      this->m_eState = kNotPlaying;
    }
    else {
      (*(code *)pcVar1->__vtable[1].AddRef)
                ((int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable[1].Init);
      pcVar2 = this->m_pSnd->__vtable;
      (*(code *)pcVar2->Pause)((int)&this->m_pSnd->__vtable + (int)*(short *)&pcVar2->Stop);
      this->m_pSnd = (cIGZSnd *)0x0;
      this->m_eState = kNotPlaying;
    }
    bVar3 = true;
    this->m_pCell = (cFreshCell *)0x0;
    *(undefined4 *)&this->m_bKillMe = 0;
  }
  return bVar3;
}

bool cFreshCellPlayer::SetVol(Sint32 lVol) {
	Sint32 lScaledVol;
	
  cIGZSnd *pcVar1;
  int iVar2;
  undefined uVar3;
  int iVar4;
  
  pcVar1 = this->m_pSnd;
  if (pcVar1 == (cIGZSnd *)0x0) {
    uVar3 = 1;
  }
  else {
    iVar2 = this->m_pCell->m_lVol * this->m_pFreshPlayer->m_lVol;
    iVar4 = iVar2 + 0x3ff;
    if (-1 < iVar2) {
      iVar4 = iVar2;
    }
    iVar2 = (iVar4 >> 10) * this->m_pFreshPlayer->m_pScore->m_lVol;
    iVar4 = iVar2 + 0x3ff;
    if (-1 < iVar2) {
      iVar4 = iVar2;
    }
    uVar3 = (*(code *)pcVar1->__vtable[1].Stop)
                      ((int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable[1].IsPlaying,
                       iVar4 >> 10);
  }
  return (bool)uVar3;
}

void cFreshCellPlayer::UpdatePan() {
  cFreshCell *pcVar1;
  
  pcVar1 = this->m_pCell;
  if (pcVar1 != (cFreshCell *)0x0) {
    if (pcVar1->m_bPanIsRandom != '\0') {
      if (pcVar1->m_lPanX == 0x200) {
        if (pcVar1->m_lPanZ == 0x200) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/SRand.h */
          GetNextRandomNumber__Fv();
          return;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/SRand.h */
                    /* end of inlined section */
        }
        pcVar1 = this->m_pCell;
      }
      else {
        pcVar1 = this->m_pCell;
      }
      if (pcVar1->m_bPanIsRandom != '\0') {
        if (pcVar1->m_lPanX == 0x200) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/SRand.h */
          GetNextRandomNumber__Fv();
                    /* end of inlined section */
          pcVar1 = this->m_pCell;
        }
        else {
          pcVar1 = this->m_pCell;
        }
        if ((pcVar1->m_bPanIsRandom != '\0') && (pcVar1->m_lPanZ == 0x200)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/SRand.h */
          GetNextRandomNumber__Fv();
        }
      }
    }
  }
  return;
}

bool cFreshCellPlayer::NeedFastTimerNextBeat(Sint32 lNextBeatNum) {
  Status__169_1165 SVar1;
  
  SVar1 = this->m_eState;
  if ((int)SVar1 < 0) {
    return false;
  }
  if (2 < (int)SVar1) {
    if (SVar1 == kPlaying) {
      return this->m_lLoopTimer == this->m_pCell->m_lLoopLength + -1;
    }
    return false;
  }
  return lNextBeatNum == 1;
}

// STATUS: NOT STARTED

#include "CTGMicroTimerPS2.h"

static EClock _clock;
static bool _bInitialized;

Sint64 CTGMicroTimer::GetElapsedTime() {
	Sint64 tempNow;
	
  long lVar1;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  long tempNow;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  if (this->mIsRunning == 0) {
    lVar1 = this->mStart;
    tempNow = this->mStop;
  }
  else {
    QueryPerformanceCounter__FPl(&tempNow);
    lVar1 = this->mStart;
  }
  lVar1 = __divdi3((tempNow - lVar1) * 1000000,this->mFrequency);
  return lVar1;
}

int QueryPerformanceFrequency(_LARGE_INTEGER *freq) {
  *freq = 0x3f0d;
  return 1;
}

void QueryPerformanceCounter(_LARGE_INTEGER *tempNow) {
  long lVar1;
  float fVar2;
  
  if (__bInitialized == 0) {
    *tempNow = 0;
  }
  else {
    fVar2 = GetSec__6EClock(&_clock);
    lVar1 = __fixsfdi(fVar2 * 16141.87);
    *tempNow = lVar1;
  }
  return;
}

void InitPerformanceCounter() {
  if (__bInitialized == 0) {
    Start__6EClock(&_clock);
    __bInitialized = 1;
  }
  return;
}

Uint32 GetTimeDate() {
	Uint32 result;
	sceCdCLOCK clock;
	
  sceCdCLOCK__154_965 clock;
  
  sceCdReadClock(&clock);
  return (uint)clock.year << 0x1a | (clock.month & 0xf) << 0x16 | (clock.day & 0x1f) << 0x11 |
         (uint)clock.hour * 0xe10 + (uint)clock.minute * 0x3c + (uint)clock.second & 0x1ffff;
}

int timeGetTime() {
  int iVar1;
  float fVar2;
  
  if (__bInitialized == 0) {
    Start__6EClock(&_clock);
    iVar1 = 0;
    __bInitialized = 1;
  }
  else {
    fVar2 = GetSec__6EClock(&_clock);
    iVar1 = (int)(fVar2 * 1000.0);
  }
  return iVar1;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___6EClock(&_clock,2);
    }
    else {
      __6EClock(&_clock);
    }
  }
  return;
}

void global constructors keyed to CTGMicroTimer::GetElapsedTime() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to CTGMicroTimer::GetElapsedTime() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

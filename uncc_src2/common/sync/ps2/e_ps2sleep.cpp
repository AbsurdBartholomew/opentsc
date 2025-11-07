// STATUS: NOT STARTED

#include "e_ps2sleep.h"

void ESleep::_tCallback(int iAlarmID, u_short time, void *arg) {
  iRelease__10ESemaphore((ESemaphore *)arg);
  return;
}

ESleep* ESleep::ESleep() {
  __10ESemaphore(&this->m_semaphore);
  Create__10ESemaphoreii(&this->m_semaphore,1,0);
  return this;
}

void ESleep::~ESleep(int __in_chrg) {
	void *pAddress;
	
  ___10ESemaphore(&this->m_semaphore,2);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void ESleep::Sleep(u32 uMilliseconds) {
  SetAlarm((uMilliseconds & 0xfff) << 4,0x32dd40,this);
  Acquire__10ESemaphoreUi(&this->m_semaphore,0xffffffff);
  return;
}

// STATUS: NOT STARTED

#include "e_clock.h"

EClock* EClock::EClock() {
  this->m_pData = (void *)0x0;
  return this;
}

void EClock::~EClock(int __in_chrg) {
	void *pAddress;
	
  (*(code *)_pClockMan->__vtable[1].Start)
            ((int)&_pClockMan->__vtable + (int)*(short *)&_pClockMan->__vtable[1].Update,
             this->m_pData);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

float EClock::GetSec() {
  float fVar1;
  
  fVar1 = (float)(*(code *)_pClockMan->__vtable[1].FreeInstanceData)
                           ((int)&_pClockMan->__vtable +
                            (int)*(short *)&_pClockMan->__vtable[1].GetInstanceData,this->m_pData);
  return fVar1;
}

double EClock::GetSecDouble() {
  long lVar1;
  
  lVar1 = (*(code *)_pClockMan->__vtable[1].GetSecDouble)
                    ((int)&_pClockMan->__vtable + (int)*(short *)&_pClockMan->__vtable[1].GetSec,
                     this->m_pData);
  return lVar1;
}

void EClock::Start() {
  void *pvVar1;
  
  if (this->m_pData == (void *)0x0) {
    pvVar1 = (void *)(*(code *)_pClockMan->__vtable[1].Init)
                               ((int)&_pClockMan->__vtable +
                                (int)*(short *)&_pClockMan->__vtable[1].EClockMan);
    this->m_pData = pvVar1;
  }
  (**(code **)(_pClockMan->__vtable + 1))
            ((int)&_pClockMan->__vtable + (int)*(short *)&_pClockMan->__vtable->GetSecDouble,
             this->m_pData);
  return;
}

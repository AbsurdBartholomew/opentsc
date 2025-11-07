// STATUS: NOT STARTED

#include "e_ringbuffer.h"

void ERingBuffer::FillByCopy(u8 *source, unsigned int length) {
	EAutoMutex fAuto;
	u8 *dest;
	int spill;
	EMutex &mutex;
	int nonSpill;
	
  ESyncObject__vtable *pEVar1;
  uint uVar2;
  uchar *pDest;
  EMutex *pEVar3;
  uchar *nBytes;
  EAutoMutex fAuto;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar3 = &this->m_mutex;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (this->m_mutex).field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(pEVar3->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  uVar2 = this->m_Size;
  if (uVar2 == 0) {
    trap(7);
  }
  pDest = this->m_pBuffer + (int)(this->m_FilledIndex + this->m_FilledCount) % (int)uVar2;
  nBytes = pDest + (length - (int)(this->m_pBuffer + uVar2));
  if ((int)nBytes < 1) {
    memcpy(pDest,source,length);
    uVar2 = this->m_FilledCount;
  }
  else {
    memcpy(pDest,source,length - (int)nBytes);
    memcpy(this->m_pBuffer,source + (length - (int)nBytes),(uint)nBytes);
    uVar2 = this->m_FilledCount;
  }
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
  this->m_FilledCount = uVar2 + length;
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (pEVar3->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(pEVar3->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
  return;
}

void ERingBuffer::FillByUncachedCopy(u8 *source, unsigned int length) {
	EAutoMutex fAuto;
	u8 *dest;
	int spill;
	EMutex &mutex;
	int nonSpill;
	
  ESyncObject__vtable *pEVar1;
  uint uVar2;
  uchar *puVar3;
  EMutex *pEVar4;
  uchar *nBytes;
  EAutoMutex fAuto;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar4 = &this->m_mutex;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (this->m_mutex).field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(pEVar4->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  uVar2 = this->m_Size;
  if (uVar2 == 0) {
    trap(7);
  }
  puVar3 = this->m_pBuffer + (int)(this->m_FilledIndex + this->m_FilledCount) % (int)uVar2;
  nBytes = puVar3 + (length - (int)(this->m_pBuffer + uVar2));
  if ((int)nBytes < 1) {
    memcpy((void *)((uint)puVar3 & 0xfffffff | 0x20000000),source,length);
    uVar2 = this->m_FilledCount;
  }
  else {
    memcpy((void *)((uint)puVar3 & 0xfffffff | 0x20000000),source,length - (int)nBytes);
    memcpy((void *)((uint)this->m_pBuffer & 0xfffffff | 0x20000000),source + (length - (int)nBytes),
           (uint)nBytes);
    uVar2 = this->m_FilledCount;
  }
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
  this->m_FilledCount = uVar2 + length;
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (pEVar4->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(pEVar4->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
  return;
}

void ERingBuffer::EmptyCopy(u8 *dest, unsigned int length) {
	EAutoMutex fAuto;
	EMutex &mutex;
	
  ESyncObject__vtable *pEVar1;
  EMutex *pEVar2;
  EAutoMutex fAuto;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (this->m_mutex).field0_0x0.__vtable;
  pEVar2 = &this->m_mutex;
  (**(code **)(pEVar1 + 1))
            ((int)&(pEVar2->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  memcpy(dest,this->m_pBuffer + this->m_FilledIndex,length);
  if (this->m_Size == 0) {
    trap(7);
  }
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
  this->m_FilledCount = this->m_FilledCount - length;
  this->m_FilledIndex = (int)(this->m_FilledIndex + length) % (int)this->m_Size;
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (pEVar2->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(pEVar2->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
  return;
}

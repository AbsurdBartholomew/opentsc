// STATUS: NOT STARTED

#include "e_array.h"

EArray* EArray::EArray() {
  this->m_p = (void *)0x0;
  this->m_growBy = 0x100;
  this->m_allocSize = 0;
  this->m_size = 0;
  this->m_elementSize = 0;
  return this;
}

void EArray::Deallocate() {
  _memmanFree__FPv(this->m_p);
  this->m_size = 0;
  this->m_p = (void *)0x0;
  this->m_allocSize = 0;
  return;
}

void EArray::SetSize(int size, int allocSize) {
	void *pNew;
	u32 bufferSize;
	
  void *pDest;
  uint alignment;
  int iVar1;
  int iVar2;
  
  iVar2 = size;
  if (allocSize != 0) {
    iVar2 = allocSize;
  }
  if (iVar2 == 0) {
    Deallocate__6EArray(this);
  }
  else if (this->m_allocSize == iVar2) {
    this->m_size = size;
  }
  else {
    alignment = 4;
    if (0xf < this->m_elementSize) {
      alignment = 0x10;
    }
    pDest = _memmanAlloc__FUiUi(iVar2 * this->m_elementSize,alignment);
    if (pDest != (void *)0x0) {
      if (this->m_p == (void *)0x0) {
        this->m_allocSize = iVar2;
      }
      else {
        iVar1 = this->m_size;
        if (size <= this->m_size) {
          iVar1 = size;
        }
        memcpy(pDest,this->m_p,iVar1 * this->m_elementSize);
        _memmanFree__FPv(this->m_p);
        this->m_allocSize = iVar2;
      }
      this->m_p = pDest;
      this->m_size = size;
    }
  }
  return;
}

void EArray::Insert(int pos, int count) {
	int oldSize;
	int newSize;
	void *pSrc;
	void *pDest;
	int length;
	int growSize;
	
  int iVar1;
  size_t __n;
  int iVar2;
  int allocSize;
  
  iVar1 = this->m_size;
  iVar2 = iVar1 + count;
  if (this->m_allocSize < iVar2) {
    allocSize = iVar1 + this->m_growBy;
    if (allocSize < iVar2) {
      allocSize = iVar2;
    }
    SetSize__6EArrayii(this,iVar2,allocSize);
    iVar2 = this->m_elementSize;
  }
  else {
    this->m_size = iVar2;
    iVar2 = this->m_elementSize;
  }
  __n = (size_t)((iVar1 - pos) * iVar2);
  if (__n != 0) {
    memmove((void *)((pos + count) * iVar2 + (int)this->m_p),(void *)((int)this->m_p + pos * iVar2),
            __n);
  }
  return;
}

void EArray::Remove(int pos, int count) {
	void *pSrc;
	void *pDest;
	int length;
	
  int iVar1;
  size_t __n;
  
  iVar1 = this->m_elementSize;
  __n = (size_t)((this->m_size - (pos + count)) * iVar1);
  if (__n != 0) {
    memmove((void *)(pos * iVar1 + (int)this->m_p),(void *)((int)this->m_p + (pos + count) * iVar1),
            __n);
  }
  this->m_size = this->m_size - count;
  return;
}

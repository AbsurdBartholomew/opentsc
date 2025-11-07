// STATUS: NOT STARTED

#include "BitArray.h"

BitArray64* BitArray64::BitArray64() {
  this->mBits = 0;
  return this;
}

BitArray64* BitArray64::BitArray64(BitArray64 &in) {
  this->mBits = in->mBits;
  return this;
}

void BitArray64::~BitArray64(int __in_chrg) {
	void *pAddress;
	
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

BitArray64& BitArray64::operator=(BitArray64 &in) {
  this->mBits = in->mBits;
  return this;
}

BitArray64* BitArray64::BitArray64(Sint64 &in) {
  this->mBits = *in;
  return this;
}

void BitArray64::Clear() {
  this->mBits = 0;
  return;
}

bool BitArray64::IsSet(int i) {
  return (bool)((byte)(this->mBits >> (long)i) & 1);
}

bool BitArray64::operator[](int i) {
  return (bool)((byte)(this->mBits >> (long)i) & 1);
}

void BitArray64::Set(int i) {
  this->mBits = this->mBits | 1L << (long)i;
  return;
}

void BitArray64::Clear(int i) {
  this->mBits = this->mBits & ~(1L << (long)i);
  return;
}

BitArray64& BitArray64::operator|=(BitArray64 &in) {
  this->mBits = this->mBits | in->mBits;
  return this;
}

BitArray64& BitArray64::operator&=(BitArray64 &in) {
  this->mBits = this->mBits & in->mBits;
  return this;
}

BitArray64& BitArray64::operator^=(BitArray64 &in) {
  this->mBits = this->mBits ^ in->mBits;
  return this;
}

BitArray64& BitArray64::operator<<=(int i) {
  this->mBits = this->mBits << (long)i;
  return this;
}

BitArray64& BitArray64::operator>>=(int i) {
  this->mBits = this->mBits >> (long)i;
  return this;
}

int BitArray64::CountBits() {
	int count;
	int i;
	
  bool bVar1;
  int i;
  int iVar2;
  
  iVar2 = 0;
  i = 0;
  do {
    bVar1 = IsSet__C10BitArray64i(this,i);
    i = i + 1;
    iVar2 = iVar2 + bVar1;
  } while (i < 0x40);
  return iVar2;
}

BitMatrix64* BitMatrix64::BitMatrix64() {
  BitArray64 *this_00;
  int iVar1;
  
  iVar1 = 0x3f;
  this_00 = this->mMatrix;
  do {
    iVar1 = iVar1 + -1;
    __10BitArray64(this_00);
    this_00 = this_00 + 1;
  } while (iVar1 != -1);
  return this;
}

BitMatrix64* BitMatrix64::BitMatrix64(BitMatrix64 &in) {
  BitArray64 *this_00;
  int iVar1;
  
  iVar1 = 0x3f;
  this_00 = this->mMatrix;
  do {
    iVar1 = iVar1 + -1;
    __10BitArray64(this_00);
    this_00 = this_00 + 1;
  } while (iVar1 != -1);
  memcpy(this,in,0x200);
  return this;
}

void BitMatrix64::~BitMatrix64(int __in_chrg) {
	void *pAddress;
	
  bool bVar1;
  BitArray64 *this_00;
  
  if ((this != (BitMatrix64 *)0x0) && (this != this + 1)) {
    this_00 = this->mMatrix + 0x3f;
    do {
      ___10BitArray64(this_00,0);
      bVar1 = this != (BitMatrix64 *)this_00;
      this_00 = this_00 + -1;
    } while (bVar1);
  }
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

BitMatrix64& BitMatrix64::operator=(BitMatrix64 &in) {
  if (this != in) {
    memcpy(this,in,0x200);
  }
  return this;
}

BitArray64& BitMatrix64::operator[](int i) {
  return this->mMatrix + i;
}

BitArray64& BitMatrix64::operator[](int i) {
  return this->mMatrix + i;
}

bool BitMatrix64::IsSet(CTilePt &in) {
  bool bVar1;
  int iVar2;
  int i;
  
  iVar2 = GetY__C7CTilePt(in);
  i = GetX__C7CTilePt(in);
  bVar1 = IsSet__C10BitArray64i(this->mMatrix + iVar2,i);
  return bVar1;
}

void BitMatrix64::Set(CTilePt &in) {
  int iVar1;
  int i;
  
  iVar1 = GetY__C7CTilePt(in);
  i = GetX__C7CTilePt(in);
  Set__10BitArray64i(this->mMatrix + iVar1,i);
  return;
}

void BitMatrix64::Clear(CTilePt &in) {
  int iVar1;
  int i;
  
  iVar1 = GetY__C7CTilePt(in);
  i = GetX__C7CTilePt(in);
  Clear__10BitArray64i(this->mMatrix + iVar1,i);
  return;
}

void BitMatrix64::Clear() {
  memset(this,0,0x200);
  return;
}

BitMatrix64& BitMatrix64::operator&=(BitMatrix64 &in) {
	int i;
	
  BitArray64 *this_00;
  int iVar1;
  
  iVar1 = 0x3f;
  this_00 = this->mMatrix;
  do {
    __aad__10BitArray64RC10BitArray64(this_00,in->mMatrix);
    in = (BitMatrix64 *)((int)in + 8);
    iVar1 = iVar1 + -1;
    this_00 = this_00 + 1;
  } while (-1 < iVar1);
  return this;
}

BitMatrix64& BitMatrix64::operator|=(BitMatrix64 &in) {
	int i;
	
  BitArray64 *this_00;
  int iVar1;
  
  iVar1 = 0x3f;
  this_00 = this->mMatrix;
  do {
    __aor__10BitArray64RC10BitArray64(this_00,in->mMatrix);
    in = (BitMatrix64 *)((int)in + 8);
    iVar1 = iVar1 + -1;
    this_00 = this_00 + 1;
  } while (-1 < iVar1);
  return this;
}

BitMatrix64& BitMatrix64::operator^=(BitMatrix64 &in) {
	int i;
	
  BitArray64 *this_00;
  int iVar1;
  
  iVar1 = 0x3f;
  this_00 = this->mMatrix;
  do {
    __aer__10BitArray64RC10BitArray64(this_00,in->mMatrix);
    in = (BitMatrix64 *)((int)in + 8);
    iVar1 = iVar1 + -1;
    this_00 = this_00 + 1;
  } while (-1 < iVar1);
  return this;
}

BitMatrix64& BitMatrix64::operator<<=(int j) {
	int i;
	
  BitArray64 *this_00;
  int iVar1;
  
  iVar1 = 0x3f;
  this_00 = this->mMatrix;
  do {
    __als__10BitArray64i(this_00,j);
    iVar1 = iVar1 + -1;
    this_00 = this_00 + 1;
  } while (-1 < iVar1);
  return this;
}

BitMatrix64& BitMatrix64::operator>>=(int j) {
	int i;
	
  BitArray64 *this_00;
  int iVar1;
  
  iVar1 = 0x3f;
  this_00 = this->mMatrix;
  do {
    __ars__10BitArray64i(this_00,j);
    iVar1 = iVar1 + -1;
    this_00 = this_00 + 1;
  } while (-1 < iVar1);
  return this;
}

int BitMatrix64::CountBits() {
	int count;
	int i;
	
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0x3f;
  do {
    iVar2 = iVar2 + -1;
    iVar1 = CountBits__C10BitArray64(this->mMatrix);
    this = (BitMatrix64 *)((int)this + 8);
    iVar3 = iVar3 + iVar1;
  } while (-1 < iVar2);
  return iVar3;
}

// STATUS: NOT STARTED

#include "e_bitarray.h"

void EBitArrayProxy::operator=(bool value) {
                    /* end of inlined section */
  Set__9EBitArrayib(this->m_pArray,this->m_index,value);
  return;
}

void EBitArrayProxy::operator|=(bool value) {
  bool bVar1;
  
  bVar1 = Get__C9EBitArrayi(this->m_pArray,this->m_index);
  Set__9EBitArrayib(this->m_pArray,this->m_index,bVar1 || value);
  return;
}

void EBitArrayProxy::operator&=(bool value) {
  bool bVar1;
  bool value_00;
  
  bVar1 = Get__C9EBitArrayi(this->m_pArray,this->m_index);
  value_00 = false;
  if (bVar1) {
    value_00 = value;
  }
  Set__9EBitArrayib(this->m_pArray,this->m_index,value_00);
  return;
}

void EBitArrayProxy::operator^=(bool value) {
  bool value_00;
  
  value_00 = Get__C9EBitArrayi(this->m_pArray,this->m_index);
  if (value) {
    value_00 = !value_00;
  }
  Set__9EBitArrayib(this->m_pArray,this->m_index,value_00);
  return;
}

bool EBitArrayProxy::operator bool() {
  bool bVar1;
  
  bVar1 = Get__C9EBitArrayi(this->m_pArray,this->m_index);
  return bVar1;
}

EBitArray* EBitArray::EBitArray() {
  this->m_p = (uint *)0x0;
  this->m_allocSize = 0;
  this->m_size = 0;
  SetGrowBy__9EBitArrayi(this,0x1000);
  return this;
}

EBitArray* EBitArray::EBitArray(int size) {
  this->m_p = (uint *)0x0;
  this->m_allocSize = 0;
  this->m_size = 0;
  SetGrowBy__9EBitArrayi(this,0x1000);
  SetSize__9EBitArrayii(this,size,0);
  return this;
}

EBitArray* EBitArray::EBitArray(int size, int growBy) {
  this->m_p = (uint *)0x0;
  this->m_allocSize = 0;
  this->m_size = 0;
  SetGrowBy__9EBitArrayi(this,growBy);
  SetSize__9EBitArrayii(this,size,0);
  return this;
}

EBitArray* EBitArray::EBitArray(EBitArray &array) {
  this->m_p = (uint *)0x0;
  this->m_allocSize = 0;
  this->m_size = 0;
  SetGrowBy__9EBitArrayi(this,0x1000);
  __as__9EBitArrayRC9EBitArray(this,array);
  return this;
}

void EBitArray::Deallocate() {
  _memmanFree__FPv(this->m_p);
  this->m_size = 0;
  this->m_p = (uint *)0x0;
  this->m_allocSize = 0;
  return;
}

bool EBitArray::Get(int index) {
  return (this->m_p[(uint)index >> 5] & 1 << (index & 0x1fU)) != 0;
}

void EBitArray::Set(int index, bool value) {
	EBitArrayElement bit;
	EBitArrayElement &e;
	
  uint uVar1;
  uint *puVar2;
  
  puVar2 = this->m_p + ((uint)index >> 5);
  uVar1 = 1 << (index & 0x1fU);
  if (value) {
    *puVar2 = *puVar2 | uVar1;
    return;
  }
  *puVar2 = *puVar2 & ~uVar1;
  return;
}

void EBitArray::SetAll(bool value) {
	int n;
	EBitArrayElement *pe;
	
  int iVar1;
  uint *puVar2;
  
  iVar1 = GetElementCount__C9EBitArray(this);
  puVar2 = this->m_p;
  if (value) {
    while (iVar1 = iVar1 + -1, iVar1 != -1) {
      *puVar2 = 0xffffffff;
      puVar2 = puVar2 + 1;
    }
  }
  else {
    while (iVar1 = iVar1 + -1, iVar1 != -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  return;
}

void EBitArray::InvertAll() {
	int n;
	EBitArrayElement *pe;
	
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  iVar1 = GetElementCount__C9EBitArray(this);
  puVar3 = this->m_p;
  iVar2 = iVar1 + -1;
  if (iVar1 != 0) {
    do {
      iVar2 = iVar2 + -1;
      *puVar3 = ~*puVar3;
      puVar3 = puVar3 + 1;
    } while (iVar2 != -1);
  }
  return;
}

void EBitArray::SetGrowBy(int growBy) {
  this->m_growBy = growBy + 0x1fU & 0xffffffe0;
  return;
}

void EBitArray::SetSize(int size, int allocSize) {
	int i;
	EBitArray *this;
	int index;
	int heapAllocSize;
	EBitArrayElement *pNew;
	int oldHeapAllocSize;
	int copySize;
	
  uint *__s;
  uint nBytes;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = size;
  if (allocSize != 0) {
    iVar1 = allocSize;
  }
  uVar3 = iVar1 + 0x1fU & 0xffffffe0;
  if (uVar3 == 0) {
    Deallocate__9EBitArray(this);
  }
  else {
    if (this->m_allocSize == uVar3) {
      if ((this->m_size < size) && (iVar1 = size, size < this->m_size)) {
        do {
          iVar2 = iVar1 + 1;
          Set__9EBitArrayib(this,iVar1,false);
                    /* end of inlined section */
          iVar1 = iVar2;
        } while (iVar2 < this->m_size);
        this->m_size = size;
        return;
      }
    }
    else {
      uVar4 = uVar3 + 7;
      if (-1 < (int)uVar3) {
        uVar4 = uVar3;
      }
      uVar4 = (int)uVar4 >> 3;
      __s = (uint *)_memmanAlloc__FUiUi(uVar4,4);
      if (__s == (uint *)0x0) {
        return;
      }
      if (this->m_p == (uint *)0x0) {
        memset(__s,0,(long)(int)uVar4);
        this->m_allocSize = uVar3;
      }
      else {
        nBytes = (this->m_size + 0x1fU & 0xffffffe0) >> 3;
        if ((long)(int)uVar4 <= (long)(int)nBytes) {
          nBytes = uVar4;
        }
        memcpy(__s,this->m_p,nBytes);
        _memmanFree__FPv(this->m_p);
        memset((void *)((int)__s + nBytes),0,(long)(int)(uVar4 - nBytes));
        this->m_allocSize = uVar3;
      }
      this->m_p = __s;
    }
    this->m_size = size;
  }
  return;
}

void EBitArray::Insert(bool value, int pos) {
  InsertElements__9EBitArrayii(this,pos,1);
  Set__9EBitArrayib(this,pos,value);
  return;
}

void EBitArray::Set(EBitArray &array, int sourcePos, int destPos, int count) {
	int i;
	
  bool value;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = sourcePos;
  if (0 < count) {
    do {
      value = Get__C9EBitArrayi(array,iVar1);
      iVar1 = destPos + iVar2;
      iVar2 = iVar2 + 1;
      Set__9EBitArrayib(this,iVar1,value);
      iVar1 = sourcePos + iVar2;
    } while (iVar2 < count);
  }
  return;
}

void EBitArray::Insert(EBitArray &array, int sourcePos, int destPos, int count) {
  InsertElements__9EBitArrayii(this,destPos,count);
  Set__9EBitArrayRC9EBitArrayiii(this,array,sourcePos,destPos,count);
  return;
}

void EBitArray::InsertElements(int pos, int count) {
	int oldSize;
	int newSize;
	int n;
	int growSize;
	int i;
	
  int iVar1;
  bool value;
  int iVar2;
  int iVar3;
  int size;
  
  iVar1 = this->m_size;
  size = iVar1 + count;
  if (this->m_allocSize < size) {
    iVar2 = iVar1 + this->m_growBy;
    if (iVar2 < size) {
      iVar2 = size;
    }
    SetSize__9EBitArrayii(this,size,iVar2);
  }
  else {
    this->m_size = size;
  }
  iVar3 = 0;
  iVar2 = iVar1;
  if (0 < iVar1 - pos) {
    do {
      value = Get__C9EBitArrayi(this,iVar2);
      iVar2 = size - iVar3;
      iVar3 = iVar3 + 1;
      Set__9EBitArrayib(this,iVar2,value);
      iVar2 = iVar1 - iVar3;
    } while (iVar3 < iVar1 - pos);
  }
  return;
}

void EBitArray::Remove(int pos, int count) {
	int end;
	int n;
	int i;
	
  bool value;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = pos + count;
  iVar1 = this->m_size;
  iVar3 = 0;
  iVar2 = iVar4;
  if (0 < iVar1 - iVar4) {
    do {
      value = Get__C9EBitArrayi(this,iVar2);
      iVar2 = pos + iVar3;
      iVar3 = iVar3 + 1;
      Set__9EBitArrayib(this,iVar2,value);
      iVar2 = iVar4 + iVar3;
    } while (iVar3 < iVar1 - iVar4);
    iVar1 = this->m_size;
  }
  this->m_size = iVar1 - count;
  return;
}

EBitArray& EBitArray::operator=(EBitArray &array) {
	EBitArray *this;
	
  SetSize__9EBitArrayii(this,array->m_size,0);
  memcpy(this->m_p,array->m_p,(this->m_size + 0x1fU & 0xffffffe0) >> 3);
  return this;
}

int EBitArray::GetElementCount() {
  return this->m_size + 0x1fU >> 5;
}

void EBitArray::operator|=(EBitArray &array) {
	int n;
	EBitArrayElement *peDest;
	EBitArrayElement *peSrc;
	
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  
  iVar2 = GetElementCount__C9EBitArray(this);
  puVar4 = this->m_p;
  iVar3 = iVar2 + -1;
  puVar5 = array->m_p;
  if (iVar2 != 0) {
    do {
      iVar3 = iVar3 + -1;
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar4 = *puVar4 | uVar1;
      puVar4 = puVar4 + 1;
    } while (iVar3 != -1);
  }
  return;
}

void EBitArray::operator&=(EBitArray &array) {
	int n;
	EBitArrayElement *peDest;
	EBitArrayElement *peSrc;
	
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  
  iVar2 = GetElementCount__C9EBitArray(this);
  puVar4 = this->m_p;
  iVar3 = iVar2 + -1;
  puVar5 = array->m_p;
  if (iVar2 != 0) {
    do {
      iVar3 = iVar3 + -1;
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar4 = *puVar4 & uVar1;
      puVar4 = puVar4 + 1;
    } while (iVar3 != -1);
  }
  return;
}

void EBitArray::operator^=(EBitArray &array) {
	int n;
	EBitArrayElement *peDest;
	EBitArrayElement *peSrc;
	
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  
  iVar2 = GetElementCount__C9EBitArray(this);
  puVar4 = this->m_p;
  iVar3 = iVar2 + -1;
  puVar5 = array->m_p;
  if (iVar2 != 0) {
    do {
      iVar3 = iVar3 + -1;
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar4 = *puVar4 ^ uVar1;
      puVar4 = puVar4 + 1;
    } while (iVar3 != -1);
  }
  return;
}

bool EBitArray::operator==(EBitArray &array) {
	int n;
	EBitArrayElement *peDest;
	EBitArrayElement *peSrc;
	EBitArray *this;
	EBitArray *this;
	
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  
                    /* inlined from c:/eor/src2/common/datastruc/e_bitarray.h */
                    /* end of inlined section */
  if (this->m_size == array->m_size) {
    iVar2 = GetElementCount__C9EBitArray(this);
    puVar4 = this->m_p;
    iVar6 = iVar2 + -1;
    puVar5 = array->m_p;
    if (iVar2 == 0) {
      return true;
    }
    uVar3 = *puVar4;
    while( true ) {
      uVar1 = *puVar5;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
      if (uVar3 != uVar1) break;
      iVar6 = iVar6 + -1;
      if (iVar6 == -1) {
        return true;
      }
      uVar3 = *puVar4;
    }
  }
  return false;
}

bool EBitArray::Intersection(EBitArray &array) {
	int n;
	EBitArrayElement *peDest;
	EBitArrayElement *peSrc;
	
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  
  iVar4 = GetElementCount__C9EBitArray(this);
  puVar6 = this->m_p;
  iVar5 = iVar4 + -1;
  puVar7 = array->m_p;
  if (iVar4 == 0) {
LAB_0032c490:
    bVar3 = false;
  }
  else {
    uVar1 = *puVar6;
    while( true ) {
      uVar2 = *puVar7;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
      if ((uVar1 & uVar2) != 0) break;
      iVar5 = iVar5 + -1;
      if (iVar5 == -1) goto LAB_0032c490;
      uVar1 = *puVar6;
    }
    bVar3 = true;
  }
  return bVar3;
}

void EBitArray::Interleave(int pos, int width, int count) {
	int size;
	EBitArray temp;
	int bit;
	int rec;
	
  bool value;
  int iVar1;
  int index;
  int index_00;
  int iVar2;
  int iVar3;
  EBitArray temp;
  
  __9EBitArrayi(&temp,width * count);
  iVar1 = 0;
  if (0 < width) {
    do {
      iVar2 = 0;
      iVar3 = iVar1 + 1;
      if (0 < count) {
        index_00 = pos + iVar1;
        do {
          value = Get__C9EBitArrayi(this,index_00);
          index_00 = index_00 + width;
          index = iVar1 * count + iVar2;
          iVar2 = iVar2 + 1;
          Set__9EBitArrayib(&temp,index,value);
        } while (iVar2 < count);
      }
      iVar1 = iVar3;
    } while (iVar3 < width);
  }
  Set__9EBitArrayRC9EBitArrayiii(this,&temp,0,pos,width * count);
                    /* inlined from c:/eor/src2/common/datastruc/e_bitarray.h */
  Deallocate__9EBitArray(&temp);
  return;
}

void EBitArray::Deinterleave(int pos, int width, int count) {
	int size;
	EBitArray temp;
	int rec;
	int bit;
	
  bool value;
  int iVar1;
  int index;
  int index_00;
  int iVar2;
  int iVar3;
  EBitArray temp;
  
  __9EBitArrayi(&temp,width * count);
  iVar1 = 0;
  if (0 < count) {
    do {
      iVar2 = 0;
      iVar3 = iVar1 + 1;
      if (0 < width) {
        index_00 = pos + iVar1;
        do {
          value = Get__C9EBitArrayi(this,index_00);
          index_00 = index_00 + count;
          index = iVar1 * width + iVar2;
          iVar2 = iVar2 + 1;
          Set__9EBitArrayib(&temp,index,value);
        } while (iVar2 < width);
      }
      iVar1 = iVar3;
    } while (iVar3 < count);
  }
  Set__9EBitArrayRC9EBitArrayiii(this,&temp,0,pos,width * count);
                    /* inlined from c:/eor/src2/common/datastruc/e_bitarray.h */
  Deallocate__9EBitArray(&temp);
  return;
}

void EBitArray::Print() {
  return;
}

void EBitArray::Add(u32 value, int count) {
	int i;
	EBitArray *this;
	EBitArray *this;
	
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (0 < count) {
    uVar1 = 1;
    do {
                    /* inlined from c:/eor/src2/common/datastruc/e_bitarray.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/datastruc/e_bitarray.h */
      uVar2 = uVar2 + 1;
      Insert__9EBitArraybi(this,(value & uVar1) != 0,this->m_size);
                    /* end of inlined section */
      uVar1 = 1 << (uVar2 & 0x1f);
    } while ((int)uVar2 < count);
  }
  return;
}

void EBitArray::Add(f32 value) {
  Add__9EBitArrayUii(this,(uint)value,0x20);
  return;
}

u32 EBitArray::Get(int pos, int count) {
	u32 lowshift;
	u32 pospcount;
	u32 lastElement;
	u32 firstElement;
	u32 ret;
	
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (count == 0) {
    return 0;
  }
  uVar2 = pos >> 5;
  uVar1 = (pos + count) - 1U >> 5;
  uVar3 = pos & 0x1f;
  if (uVar2 == uVar1) {
    uVar1 = (1 << (count & 0x1fU)) - 1;
    if (uVar1 == 0) {
      return this->m_p[uVar2];
    }
    return this->m_p[uVar2] >> uVar3 & uVar1;
  }
  return (this->m_p[uVar1] & (1 << (pos + count & 0x1fU)) - 1U) << (-uVar3 & 0x1f) |
         this->m_p[uVar2] >> uVar3;
}

f32 EBitArray::GetFloat(int pos) {
  float fVar1;
  
  fVar1 = (float)Get__C9EBitArrayii(this,pos,0x20);
  return fVar1;
}

s32 EBitArray::GetSigned(int pos, int count) {
	int cm1;
	
  bool bVar1;
  uint uVar2;
  uint count_00;
  
  if (count == 0) {
    uVar2 = 0;
  }
  else {
    count_00 = count - 1;
    bVar1 = Get__C9EBitArrayi(this,pos + count_00);
    if (bVar1) {
      uVar2 = Get__C9EBitArrayii(this,pos,count_00);
      uVar2 = -1 << (count_00 & 0x1f) | uVar2;
    }
    else {
      uVar2 = Get__C9EBitArrayii(this,pos,count_00);
    }
  }
  return uVar2;
}

int EBitArray::ToleranceToSignedBits(float tol) {
	int nBits;
	float maxBitVal;
	float bitInc;
	
  int iVar1;
  
  iVar1 = 2;
  if (tol < 1.0) {
    iVar1 = 3;
    while ((iVar1 < 0x20 && (tol < 1.0 / (float)((1 << (iVar1 - 1U & 0x1f)) + -1)))) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}

int EBitArray::ToleranceToUnsignedBits(float tol) {
	int nBits;
	float maxBitVal;
	float bitInc;
	
  uint uVar1;
  
  uVar1 = 2;
  if (tol < 0.3333333) {
    uVar1 = 3;
    while (((int)uVar1 < 0x20 && (tol < 1.0 / (float)((1 << (uVar1 & 0x1f)) + -1)))) {
      uVar1 = uVar1 + 1;
    }
  }
  return uVar1;
}

int EBitArray::MaxNumberToUnsignedBits(int val) {
	int nBits;
	int maxBitVal;
	
  uint uVar1;
  
  uVar1 = 1;
  if (1 < val) {
    for (uVar1 = 2; ((int)uVar1 < 0x20 && ((1 << (uVar1 & 0x1f)) + -1 < val)); uVar1 = uVar1 + 1) {
    }
  }
  return uVar1;
}

s32 EBitArray::FloatToSignedBits(float val, int nBits) {
	float maxVal;
	
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)((1 << (nBits - 1U & 0x1f)) + -1);
  fVar3 = val * fVar1;
  if (fVar3 < 0.0) {
    fVar3 = fVar3 - 0.5;
  }
  else {
    fVar3 = fVar3 + 0.5;
  }
  fVar2 = -fVar1;
  if (fVar2 <= fVar3) {
    fVar2 = (float)((int)fVar3 * (uint)(fVar3 < fVar1) | (int)fVar1 * (uint)(fVar3 >= fVar1));
  }
  return (int)fVar2;
}

u32 EBitArray::FloatToUnsignedBits(float val, int nBits) {
	float maxVal;
	
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)((1 << (nBits & 0x1fU)) + -1);
  fVar3 = val * fVar2 + 0.5;
  fVar1 = 0.0;
  if (0.0 <= fVar3) {
    fVar1 = (float)((int)fVar3 * (uint)(fVar3 < fVar2) | (int)fVar2 * (uint)(fVar3 >= fVar2));
  }
  return (int)fVar1;
}

float EBitArray::SignedBitsToFloatScaler(int nBits) {
  return 1.0 / (float)((1 << (nBits - 1U & 0x1f)) + -1);
}

float EBitArray::UnsignedBitsToFloatScaler(int nBits) {
  return 1.0 / (float)((1 << (nBits & 0x1fU)) + -1);
}

EStream& operator<<(EStream &s, EBitArray &d) {
	int n;
	EBitArray *this;
	EStream &s;
	int d;
	int i;
	EStream &s;
	unsigned int d;
	
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  int local_60;
  uint local_5c [3];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* end of inlined section */
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  iVar3 = 0;
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  local_60 = d->m_size;
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&local_60,4);
                    /* end of inlined section */
  iVar1 = GetElementCount__C9EBitArray(d);
  if (0 < iVar1) {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    puVar2 = d->m_p;
    while( true ) {
      local_5c[0] = puVar2[iVar3];
                    /* end of inlined section */
      iVar3 = iVar3 + 1;
                    /* inlined from /eor/src2/common/storage/e_storage.h */
      (*(code *)s->__vtable[1].Write)
                (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,local_5c,4);
                    /* end of inlined section */
      if (iVar1 <= iVar3) break;
      puVar2 = d->m_p;
    }
  }
  return s;
}

EStream& operator>>(EStream &s, EBitArray &d) {
	s32 size;
	EStream &s;
	
  int iVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  int size;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&size,4);
                    /* end of inlined section */
  SetSize__9EBitArrayii(d,size,0);
  iVar1 = GetElementCount__C9EBitArray(d);
  (*(code *)s->__vtable[1].GetPos)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,d->m_p,iVar1 << 2);
  return s;
}

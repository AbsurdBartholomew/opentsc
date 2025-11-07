// STATUS: NOT STARTED

#include "LightEntry.h"

LightEntry* LightEntry::LightEntry() {
  this->mDeltas[0] = '\x7f';
  this->mDeltas[3] = '\x7f';
  this->mDeltas[2] = '\x7f';
  this->mDeltas[1] = '\x7f';
  return this;
}

LightEntry* LightEntry::LightEntry(int x, int y) {
  this->mDeltas[0] = (char)x;
  this->mDeltas[1] = (char)y;
  this->mDeltas[2] = '\x7f';
  this->mDeltas[3] = '\x7f';
  return this;
}

LightEntry* LightEntry::LightEntry(LightEntry &in) {
  this->mDeltas[0] = in->mDeltas[0];
  this->mDeltas[1] = in->mDeltas[1];
  this->mDeltas[2] = in->mDeltas[2];
  this->mDeltas[3] = in->mDeltas[3];
  return this;
}

void LightEntry::~LightEntry(int __in_chrg) {
	void *pAddress;
	
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

LightEntry& LightEntry::operator=(LightEntry &in) {
  if (this != in) {
    this->mDeltas[0] = in->mDeltas[0];
    this->mDeltas[1] = in->mDeltas[1];
    this->mDeltas[2] = in->mDeltas[2];
    this->mDeltas[3] = in->mDeltas[3];
  }
  return this;
}

bool LightEntry::IsEmpty() {
  return this->mDeltas[0] == '\x7f';
}

bool LightEntry::Has(int inIndex) {
  return this->mDeltas[inIndex * 2] != '\x7f';
}

int LightEntry::Count() {
	int count;
	
  bool bVar1;
  bool bVar2;
  uint uVar3;
  
  bVar1 = Has__C10LightEntryi(this,0);
  bVar2 = Has__C10LightEntryi(this,1);
  uVar3 = bVar1 + 1;
  if (!bVar2) {
    uVar3 = (uint)bVar1;
  }
  return uVar3;
}

CTilePt LightEntry::Get(int inIndex) {
  int in_a2_lo;
  
  __7CTilePtiii((CTilePt *)this,(int)*(char *)(inIndex + in_a2_lo * 2),
                (int)*(char *)(inIndex + in_a2_lo * 2 + 1),0);
  return SUB43(this,0);
}

void LightEntry::Get(int inIndex, int *outX, int *outY) {
  *outX = (int)this->mDeltas[inIndex * 2];
  *outY = (int)this->mDeltas[inIndex * 2 + 1];
  return;
}

void LightEntry::Set(int inIndex, int x, int y) {
  this->mDeltas[inIndex * 2] = (char)x;
  this->mDeltas[inIndex * 2 + 1] = (char)y;
  return;
}

void LightEntry::Clear() {
  this->mDeltas[0] = '\x7f';
  this->mDeltas[3] = '\x7f';
  this->mDeltas[2] = '\x7f';
  this->mDeltas[1] = '\x7f';
  return;
}

void LightEntry::Absorb(int x, int y) {
	int count;
	int r;
	
  int iVar1;
  
  iVar1 = Count__C10LightEntry(this);
  if (iVar1 == 0) {
LAB_002950a0:
    this->mDeltas[1] = (char)y;
    this->mDeltas[0] = (char)x;
  }
  else {
    if (iVar1 != 1) {
      iVar1 = x * x + y * y;
      if (iVar1 < (int)this->mDeltas[0] * (int)this->mDeltas[0] +
                  (int)this->mDeltas[1] * (int)this->mDeltas[1]) goto LAB_002950a0;
      if ((int)this->mDeltas[2] * (int)this->mDeltas[2] +
          (int)this->mDeltas[3] * (int)this->mDeltas[3] <= iVar1) {
        return;
      }
    }
    this->mDeltas[3] = (char)y;
    this->mDeltas[2] = (char)x;
  }
  return;
}

void LightEntry::Unabsorb(int x, int y) {
	int count;
	
  char cVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)y;
  lVar4 = (long)x;
  iVar3 = Count__C10LightEntry(this);
  if (iVar3 == 1) {
    if ((this->mDeltas[0] == lVar4) && (this->mDeltas[1] == lVar5)) {
      Clear__10LightEntry(this);
    }
  }
  else if (iVar3 == 2) {
    if (this->mDeltas[0] == lVar4) {
      if (this->mDeltas[1] == lVar5) {
        cVar1 = this->mDeltas[2];
        cVar2 = this->mDeltas[3];
        this->mDeltas[2] = '\x7f';
        this->mDeltas[0] = cVar1;
        this->mDeltas[1] = cVar2;
        this->mDeltas[3] = '\x7f';
        return;
      }
      cVar1 = this->mDeltas[2];
    }
    else {
      cVar1 = this->mDeltas[2];
    }
    if ((cVar1 == lVar4) && (this->mDeltas[3] == lVar5)) {
      this->mDeltas[2] = '\x7f';
      this->mDeltas[3] = '\x7f';
    }
  }
  return;
}

LightEntry& LightEntry::Rotate(int inRotation) {
	int count;
	signed char temps[4];
	
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  char temps [4];
  
  iVar4 = Count__C10LightEntry(this);
  if (inRotation == 0) {
    return this;
  }
  bVar3 = 1 < iVar4;
  if (iVar4 == 0) {
    return this;
  }
  cVar1 = this->mDeltas[0];
  cVar2 = this->mDeltas[1];
  if (bVar3) {
    temps[2] = this->mDeltas[2];
    temps[3] = this->mDeltas[3];
  }
  if (inRotation == 2) {
    this->mDeltas[0] = -cVar1;
    this->mDeltas[1] = -cVar2;
    if (!bVar3) {
      return this;
    }
    cVar1 = temps[2];
    temps[2] = -temps[3];
  }
  else {
    if (2 < inRotation) {
      if (inRotation != 3) {
        return this;
      }
      this->mDeltas[0] = cVar2;
      this->mDeltas[1] = -cVar1;
      if (!bVar3) {
        return this;
      }
      this->mDeltas[2] = temps[3];
      this->mDeltas[3] = -temps[2];
      return this;
    }
    if (inRotation != 1) {
      return this;
    }
    this->mDeltas[0] = -cVar2;
    this->mDeltas[1] = cVar1;
    cVar1 = temps[3];
    if (!bVar3) {
      return this;
    }
  }
  this->mDeltas[2] = -cVar1;
  this->mDeltas[3] = temps[2];
  return this;
}

int LightEntry::FindSources(CTilePt *out1, CTilePt *out2, CTilePt &inThisTile) {
	int count;
	
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = Count__C10LightEntry(this);
  if (0 < iVar3) {
    iVar4 = GetX__C7CTilePt(inThisTile);
    cVar1 = this->mDeltas[0];
    iVar5 = GetY__C7CTilePt(inThisTile);
    cVar2 = this->mDeltas[1];
    iVar6 = GetLevel__C7CTilePt(inThisTile);
    Set__7CTilePtiii(out1,iVar4 - cVar1,iVar5 - cVar2,iVar6);
    if (iVar3 == 2) {
      iVar4 = GetX__C7CTilePt(inThisTile);
      cVar1 = this->mDeltas[2];
      iVar5 = GetY__C7CTilePt(inThisTile);
      cVar2 = this->mDeltas[3];
      iVar6 = GetLevel__C7CTilePt(inThisTile);
      Set__7CTilePtiii(out2,iVar4 - cVar1,iVar5 - cVar2,iVar6);
    }
  }
  return iVar3;
}

void LightEntry::Remove(int index) {
	int count;
	
  char cVar1;
  int iVar2;
  
  iVar2 = Count__C10LightEntry(this);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      this->mDeltas[1] = '\x7f';
      this->mDeltas[0] = '\x7f';
    }
    else if (iVar2 == 2) {
      if (index == 0) {
        cVar1 = this->mDeltas[3];
        this->mDeltas[3] = '\x7f';
        this->mDeltas[0] = this->mDeltas[2];
        this->mDeltas[1] = cVar1;
        this->mDeltas[2] = '\x7f';
      }
      else {
        this->mDeltas[3] = '\x7f';
        this->mDeltas[2] = '\x7f';
      }
    }
  }
  return;
}

// STATUS: NOT STARTED

#include "ctilept.h"

CTilePt CTilePt::sDirections[8] = {
	/* [0] = */ {
		/* .mX = */ 0,
		/* .mY = */ 0,
		/* .mLevel = */ 0
	},
	/* [1] = */ {
		/* .mX = */ 0,
		/* .mY = */ 0,
		/* .mLevel = */ 0
	},
	/* [2] = */ {
		/* .mX = */ 0,
		/* .mY = */ 0,
		/* .mLevel = */ 0
	},
	/* [3] = */ {
		/* .mX = */ 0,
		/* .mY = */ 0,
		/* .mLevel = */ 0
	},
	/* [4] = */ {
		/* .mX = */ 0,
		/* .mY = */ 0,
		/* .mLevel = */ 0
	},
	/* [5] = */ {
		/* .mX = */ 0,
		/* .mY = */ 0,
		/* .mLevel = */ 0
	},
	/* [6] = */ {
		/* .mX = */ 0,
		/* .mY = */ 0,
		/* .mLevel = */ 0
	},
	/* [7] = */ {
		/* .mX = */ 0,
		/* .mY = */ 0,
		/* .mLevel = */ 0
	}
};

CTilePt* CTilePt::CTilePt(EVec3 &v) {
  float fVar1;
  
  this->mX = (char)(int)(v->field0_0x0).d[0];
  fVar1 = (v->field0_0x0).d[1];
  this->mLevel = '\x01';
  this->mY = (char)(int)fVar1;
  return this;
}

EVec3 CTilePt::GetEVec3() {
	EVec3 *this;
	
  char cVar1;
  char cVar2;
  
  cVar1 = this->mX;
  cVar2 = this->mY;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (__return_storage_ptr__->field0_0x0).d[2] = (float)(int)this->mLevel;
  (__return_storage_ptr__->field0_0x0).d[0] = (float)(int)cVar1;
  (__return_storage_ptr__->field0_0x0).d[1] = (float)(int)cVar2;
  return __return_storage_ptr__;
}

EVec3 CTilePt::GetEVec3M() {
	EVec3 *this;
	
  char cVar1;
  char cVar2;
  
  cVar1 = this->mY;
  cVar2 = this->mX;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (__return_storage_ptr__->field0_0x0).d[2] = (float)(int)this->mLevel;
  (__return_storage_ptr__->field0_0x0).d[0] = (float)(int)cVar1;
  (__return_storage_ptr__->field0_0x0).d[1] = (float)(int)cVar2;
  return __return_storage_ptr__;
}

float CTilePt::GetXf() {
  return (float)(int)this->mX;
}

float CTilePt::GetYf() {
  return (float)(int)this->mY;
}

CTilePt* CTilePt::CTilePt() {
  this->mLevel = '\0';
  return this;
}

CTilePt* CTilePt::CTilePt(CTilePt &in) {
  this->mX = in->mX;
  this->mY = in->mY;
  this->mLevel = in->mLevel;
  return this;
}

CTilePt* CTilePt::CTilePt(FTilePt &in, int inLevel) {
	FInt *this;
	
  int iVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
  this->mX = (char)((in->x).whole >> 4);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
  iVar1 = (in->y).whole;
                    /* end of inlined section */
  this->mLevel = (char)inLevel;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
  this->mY = (char)(iVar1 >> 4);
  return this;
}

CTilePt* CTilePt::CTilePt(TilePt &in, int inLevel) {
  char cVar1;
  
  this->mX = *(char *)&in->x;
  cVar1 = *(char *)&in->y;
  this->mLevel = (char)inLevel;
  this->mY = cVar1;
  return this;
}

CTilePt* CTilePt::CTilePt(int x, int y, int inLevel) {
  this->mX = (char)x;
  this->mY = (char)y;
  this->mLevel = (char)inLevel;
  return this;
}

CTilePt* CTilePt::CTilePt(TilePtDir inDir, int inLevel) {
  __as__7CTilePtRC7CTilePt(this,_7CTilePt_sDirections + inDir);
  this->mLevel = (char)inLevel;
  return this;
}

void CTilePt::~CTilePt(int __in_chrg) {
	void *pAddress;
	
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

CTilePt& CTilePt::operator=(CTilePt &in) {
  this->mX = in->mX;
  this->mY = in->mY;
  this->mLevel = in->mLevel;
  return this;
}

bool CTilePt::operator==(CTilePt &in) {
  bool bVar1;
  
  bVar1 = false;
  if ((in->mX == this->mX) && (in->mY == this->mY)) {
    bVar1 = in->mLevel == this->mLevel;
  }
  return bVar1;
}

bool CTilePt::operator!=(CTilePt &in) {
  if (in->mX == this->mX) {
    if (in->mY != this->mY) {
      return true;
    }
    if (in->mLevel == this->mLevel) {
      return false;
    }
  }
  return true;
}

bool CTilePt::operator<(CTilePt &in) {
  if (in->mX <= this->mX) {
    if (this->mX != in->mX) {
      return false;
    }
    if (this->mY < in->mY) {
      return true;
    }
    if (this->mY != in->mY) {
      return false;
    }
    if (in->mLevel <= this->mLevel) {
      return false;
    }
  }
  return true;
}

CTilePt& CTilePt::operator+=(CTilePt &in) {
  this->mX = this->mX + in->mX;
  this->mY = this->mY + in->mY;
  return this;
}

CTilePt& CTilePt::operator-=(CTilePt &in) {
  this->mX = this->mX - in->mX;
  this->mY = this->mY - in->mY;
  return this;
}

CTilePt& CTilePt::operator*=(int inFactor) {
  this->mX = this->mX * (char)inFactor;
  this->mY = this->mY * (char)inFactor;
  return this;
}

CTilePt CTilePt::operator*(int inFactor) {
  int in_a2_lo;
  
  __7CTilePtiii(this,in_a2_lo * *(char *)inFactor,in_a2_lo * *(char *)(inFactor + 1),
                (int)*(char *)(inFactor + 2));
  return SUB43(this,0);
}

CTilePt CTilePt::operator+(CTilePt &in) {
  char *in_a2_lo;
  
  __7CTilePtiii(this,(int)in->mX + (int)*in_a2_lo,(int)in->mY + (int)in_a2_lo[1],(int)in->mLevel);
  return SUB43(this,0);
}

CTilePt CTilePt::operator-(CTilePt &in) {
  char *in_a2_lo;
  
  __7CTilePtiii(this,(int)in->mX - (int)*in_a2_lo,(int)in->mY - (int)in_a2_lo[1],(int)in->mLevel);
  return SUB43(this,0);
}

CTilePt operator*(int a, CTilePt &b) {
  char *in_a2_lo;
  
  __7CTilePtiii((CTilePt *)a,(int)b * (int)*in_a2_lo,(int)b * (int)in_a2_lo[1],(int)in_a2_lo[2]);
  return SUB43(a,0);
}

int CTilePt::GetRow() {
  return (int)this->mX + (int)this->mY;
}

int CTilePt::GetColumn() {
  return (int)this->mX - (int)this->mY;
}

bool CTilePt::IsoCompare(CTilePt &in) {
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = GetRow__C7CTilePt(this);
  iVar3 = GetRow__C7CTilePt(in);
  if (iVar2 == iVar3) {
    iVar2 = GetColumn__C7CTilePt(this);
    iVar3 = GetColumn__C7CTilePt(in);
    bVar1 = iVar2 < iVar3;
  }
  else {
    iVar2 = GetRow__C7CTilePt(this);
    iVar3 = GetRow__C7CTilePt(in);
    bVar1 = iVar2 < iVar3;
  }
  return bVar1;
}

bool CTilePt::IsNorthOf(CTilePt &in) {
  int iVar1;
  int iVar2;
  
  iVar1 = GetRow__C7CTilePt(this);
  iVar2 = GetRow__C7CTilePt(in);
  return iVar1 < iVar2;
}

bool CTilePt::IsSouthOf(CTilePt &in) {
  int iVar1;
  int iVar2;
  
  iVar1 = GetRow__C7CTilePt(this);
  iVar2 = GetRow__C7CTilePt(in);
  return iVar2 < iVar1;
}

bool CTilePt::IsWestOf(CTilePt &in) {
  int iVar1;
  int iVar2;
  
  iVar1 = GetColumn__C7CTilePt(this);
  iVar2 = GetColumn__C7CTilePt(in);
  return iVar1 < iVar2;
}

bool CTilePt::IsEastOf(CTilePt &in) {
  int iVar1;
  int iVar2;
  
  iVar1 = GetColumn__C7CTilePt(this);
  iVar2 = GetColumn__C7CTilePt(in);
  return iVar2 < iVar1;
}

bool CTilePt::SameRowParity(CTilePt &in) {
  int iVar1;
  int iVar2;
  
  iVar1 = GetRow__C7CTilePt(this);
  iVar2 = GetRow__C7CTilePt(in);
  return (bool)((byte)iVar1 & 1 ^ (byte)iVar2 & 1 ^ 1);
}

bool CTilePt::SameColumnParity(CTilePt &in) {
  int iVar1;
  int iVar2;
  
  iVar1 = GetColumn__C7CTilePt(this);
  iVar2 = GetColumn__C7CTilePt(in);
  return (bool)((byte)iVar1 & 1 ^ (byte)iVar2 & 1 ^ 1);
}

TilePt CTilePt::ToTilePt() {
	TilePt *this;
	
  char cVar1;
  char *in_a1_lo;
  
  cVar1 = *in_a1_lo;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
  *(int *)&this[1].mY = (int)in_a1_lo[1];
  *(int *)this = (int)cVar1;
  return (TilePt)(long)(int)this;
}

FTilePt CTilePt::ToFTilePt() {
	FTilePt aPt;
	
  uint uVar1;
  char *pcVar2;
  ulong uVar3;
  char *in_a1_lo;
  FTilePt aPt;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Tiles.h */
                    /* end of inlined section */
  uVar3 = CONCAT44((int)*in_a1_lo << 4,(int)in_a1_lo[1] << 4) | 0x800000008;
  uVar1 = (uint)&this[2].mY & 7;
  pcVar2 = &this[2].mY + -uVar1;
  *(ulong *)pcVar2 = *(ulong *)pcVar2 & -1L << (uVar1 + 1) * 8 | uVar3 >> (7 - uVar1) * 8;
  uVar1 = (uint)this & 7;
  *(ulong *)((int)this - uVar1) =
       uVar3 << uVar1 * 8 | *(ulong *)((int)this - uVar1) & 0xffffffffffffffffU >> (8 - uVar1) * 8;
  return (FTilePt)(long)(int)this;
}

int CTilePt::GetX() {
  return (int)this->mX;
}

int CTilePt::GetY() {
  return (int)this->mY;
}

void CTilePt::Get(int *outX, int *outY) {
  *outX = (int)this->mX;
  *outY = (int)this->mY;
  return;
}

void CTilePt::Get(int *outX, int *outY, int *outLevel) {
  *outX = (int)this->mX;
  *outY = (int)this->mY;
  *outLevel = (int)this->mLevel;
  return;
}

int CTilePt::SetX(int x) {
  this->mX = (char)x;
  return (int)(char)x;
}

int CTilePt::SetY(int y) {
  this->mY = (char)y;
  return (int)(char)y;
}

void CTilePt::Set(int x, int y) {
  this->mY = (char)y;
  this->mX = (char)x;
  return;
}

void CTilePt::Set(int x, int y, int level) {
  this->mLevel = (char)level;
  this->mX = (char)x;
  this->mY = (char)y;
  return;
}

int CTilePt::GetLevel() {
  return (int)this->mLevel;
}

void CTilePt::SetLevel(int inLevel) {
  this->mLevel = (char)inLevel;
  return;
}

void CTilePt::SetLevel(CTilePt &in) {
  this->mLevel = in->mLevel;
  return;
}

CTGDump& operator<<(CTGDump &This, CTilePt &in) {
  return This;
}

TilePtDir CTilePt::GetDirection(CTilePt &p1, CTilePt &p2) {
	int deltY;
	
  bool bVar1;
  TilePtDir TVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)p1->mY;
  iVar4 = (int)p2->mY;
  if (p2->mX == p1->mX) {
    if (iVar4 != iVar3) {
      return kSW;
    }
  }
  else if (iVar4 != iVar3) {
    bVar1 = IsSouthOf__C7CTilePtRC7CTilePt(p1,p2);
    if (bVar1) {
      return kN;
    }
    bVar1 = IsNorthOf__C7CTilePtRC7CTilePt(p1,p2);
    if (bVar1) {
      return kS;
    }
    bVar1 = IsEastOf__C7CTilePtRC7CTilePt(p1,p2);
    if (bVar1) {
      return kW;
    }
    bVar1 = IsWestOf__C7CTilePtRC7CTilePt(p1,p2);
    if (bVar1) {
      return kE;
    }
    return kNone;
  }
  TVar2 = kSE;
  if (iVar4 - iVar3 < 0) {
    TVar2 = kNW;
  }
  return TVar2;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  basic_string_ref2 *this;
  
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      this = &_8BString2_defaultReference;
      do {
        this = (basic_string_ref2 *)((int)&this[-1].count + 1);
        ___7CTilePt((CTilePt *)this,0);
      } while (this != (basic_string_ref2 *)_7CTilePt_sDirections);
    }
    else {
      __7CTilePtiii(_7CTilePt_sDirections,0,-1,0);
      __7CTilePtiii(_7CTilePt_sDirections + 1,0,1,0);
      __7CTilePtiii(_7CTilePt_sDirections + 2,-1,0,0);
      __7CTilePtiii(_7CTilePt_sDirections + 3,1,0,0);
      __7CTilePtiii(_7CTilePt_sDirections + 4,-1,-1,0);
      __7CTilePtiii(_7CTilePt_sDirections + 5,1,1,0);
      __7CTilePtiii(_7CTilePt_sDirections + 6,1,-1,0);
      __7CTilePtiii(_7CTilePt_sDirections + 7,-1,1,0);
    }
  }
  return;
}

void global constructors keyed to CTilePt::CTilePt() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to CTilePt::CTilePt() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

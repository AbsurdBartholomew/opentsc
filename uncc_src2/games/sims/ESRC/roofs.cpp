// STATUS: NOT STARTED

#include "roofs.h"

struct TArray<void *> : private EArray {
	TArray();
	TArray();
	TArray();
	TArray();
	TArray(TArray<void *>*, int, void);
	void*& operator[]();
	void*& operator[]();
	void*& operator[]();
	void*& operator[]();
	TArray<void *>& operator=();
	void** operator void **();
	void** operator void **();
	void SetGrowBy(TArray<void *>*, int, void);
	int GetSize();
	void SetSize();
	void FreeUnusedBufferSpace();
	int Search();
	bool IsEmpty();
	void Empty();
	void RemoveAll();
	void Insert();
	void Insert();
	void Add();
	void Add();
	void Add();
	void Remove();
	void Delete();
	void SafeDelete();
	void DeleteAll();
	void SafeDeleteAll();
	void FreeAll();
};

struct TSegArray<ERoofVert> {
protected:
	TArray<void *> m_segments;
	int m_size;
	
public:
	TSegArray<ERoofVert>& operator=();
	TSegArray();
	TSegArray();
	TSegArray();
	TSegArray(TSegArray<ERoofVert>*, int, void);
	ERoofVert& operator[]();
	void SetSize(TSegArray<ERoofVert>*, int, void);
};

ETypeInfo *gpTypeInfo_ERoofs = NULL;

__vtbl_ptr_type ERoofs virtual table[25] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERoofs::SafeDelete,
		/* .__delta2 = */ 2792
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERoofs::GetTypeInfo,
		/* .__delta2 = */ 2848
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERoofs::GetTypeName,
		/* .__delta2 = */ 2864
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERoofs::GetTypeKey,
		/* .__delta2 = */ 2880
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERoofs::GetTypeVersion,
		/* .__delta2 = */ 2896
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERoofs::~ERoofs,
		/* .__delta2 = */ -6472
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::Read,
		/* .__delta2 = */ -8544
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::Write,
		/* .__delta2 = */ -8776
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::Init,
		/* .__delta2 = */ -5208
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::Update,
		/* .__delta2 = */ -5200
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERoofs::VisibilityTest,
		/* .__delta2 = */ 3024
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERoofs::Draw,
		/* .__delta2 = */ -6248
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::DrawWireFrame,
		/* .__delta2 = */ -5176
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::SetOrient,
		/* .__delta2 = */ -5168
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetUpdatePriority,
		/* .__delta2 = */ -5160
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CollidePointWithInstance,
		/* .__delta2 = */ -5152
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CollideSphereWithInstance,
		/* .__delta2 = */ -5144
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CollideTest,
		/* .__delta2 = */ -5136
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CalcLights3,
		/* .__delta2 = */ -7600
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetBoundSphere,
		/* .__delta2 = */ -8224
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetTriggerList,
		/* .__delta2 = */ -5104
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::ReadInstanceData,
		/* .__delta2 = */ -5096
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::SetLevel,
		/* .__delta2 = */ -5088
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo ERoofs::m_typeInfo;

EStream& operator<<(EStream &s, ERoofs *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, ERoofs *&pD) {
	EStorable *pStorable;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EStorable *pStorable;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  __rs__FR7EStreamRP9EStorable(s,&pStorable);
  *pD = (ERoofs *)pStorable;
  return s;
}

EHeightArray2D* ERoofSetup::EHeightArray2D::EHeightArray2D() {
  memset(this,0,0x10000);
  return this;
}

ERoofSetup* ERoofSetup::ERoofSetup() {
	EVertArray *this;
	
  __Q210ERoofSetup14EHeightArray2D(&this->m_heightArray);
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
  (this->m_vertArray).m_iCount = 0;
  (this->m_vertArray).m_pArray = (TSegArray_ERoofVert_ *)0x0;
  (this->m_vertArray).m_pScratchArray = (ERoofVert *)0x0;
                    /* end of inlined section */
  this->m_iMinX = 0;
  this->m_iVertCount = 0;
  this->m_iGridSize = 0;
  this->m_iMaxY = 0;
  this->m_iMinY = 0;
  this->m_iMaxX = 0;
  return this;
}

void ERoofSetup::~ERoofSetup(int __in_chrg) {
	void *pAddress;
	
  ___Q210ERoofSetup10EVertArray(&this->m_vertArray,2);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void ERoofSetup::AddWall(int x, int y, TileWallsSegment Seg) {
	int Offsetx;
	int Offsety;
	EHeightArray2D *this;
	int index;
	int &row[128];
	int index;
	EHeightArray2D *this;
	int index;
	int &row[128];
	int index;
	EHeightArray2D *this;
	int index;
	int &row[128];
	int index;
	EHeightArray2D *this;
	int index;
	int &row[128];
	int index;
	EHeightArray2D *this;
	int index;
	int index;
	EHeightArray2D *this;
	int index;
	int index;
	EHeightArray2D *this;
	int index;
	int &row[128];
	int index;
	EHeightArray2D *this;
	int index;
	int &row[128];
	EHeightArray2D *this;
	int index;
	int &row[128];
	EHeightArray2D *this;
	int index;
	int &row[128];
	int index;
	EHeightArray2D *this;
	int index;
	EHeightArray2D *this;
	int index;
	EHeightArray2D *this;
	int index;
	int &row[128];
	int index;
	EHeightArray2D *this;
	int index;
	int &row[128];
	int index;
	EHeightArray2D *this;
	int index;
	int &row[128];
	int index;
	EHeightArray2D *this;
	int index;
	int &row[128];
	int index;
	EHeightArray2D *this;
	int index;
	int &row[128];
	int index;
	EHeightArray2D *this;
	int index;
	int &row[128];
	int index;
	
  int iVar1;
  
  switch(Seg) {
  case kTopLeft:
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
    (this->m_heightArray).m_array[y * 2][x * 2] = 1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
    (this->m_heightArray).m_array[y * 2][x * 2 + 1] = 1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
    (this->m_heightArray).m_array[y * 2][x * 2 + 2] = 1;
    return;
  case kTopRight:
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
    iVar1 = x << 3;
    break;
  default:
    return;
  case kBottomRight:
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
    (this->m_heightArray).m_array[y * 2 + 2][x * 2] = 1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
    (this->m_heightArray).m_array[y * 2 + 2][x * 2 + 1] = 1;
    (this->m_heightArray).m_array[y * 2 + 2][x * 2 + 2] = 1;
    return;
  case kBottomLeft:
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
    iVar1 = (x * 2 + 2) * 4;
    break;
  case kHorizDiag:
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
    (this->m_heightArray).m_array[y * 2 + 2][x * 2] = 1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
    (this->m_heightArray).m_array[y * 2 + 1][x * 2 + 1] = 1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
    (this->m_heightArray).m_array[y * 2][x * 2 + 2] = 1;
    return;
  case kVertDiag:
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
    (this->m_heightArray).m_array[y * 2][x * 2] = 1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
    (this->m_heightArray).m_array[y * 2 + 1][x * 2 + 1] = 1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
    (this->m_heightArray).m_array[y * 2 + 2][x * 2 + 2] = 1;
    return;
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
  *(undefined4 *)((int)(this->m_heightArray).m_array[y * 2] + iVar1) = 1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
  *(undefined4 *)((int)(this->m_heightArray).m_array[y * 2 + 1] + iVar1) = 1;
  *(undefined4 *)((int)(this->m_heightArray).m_array[y * 2 + 2] + iVar1) = 1;
  return;
}

void ERoofSetup::AddTri(int x, int y, int Dir) {
	ERoofVert V[3];
	EVec3 V1;
	EVec3 V2;
	EVec3 N;
	EHeightArray2D *this;
	int index;
	int &row[128];
	int index;
	EHeightArray2D *this;
	int &row[128];
	int index;
	EHeightArray2D *this;
	int index;
	EHeightArray2D *this;
	int &row[128];
	int index;
	EHeightArray2D *this;
	int index;
	int &row[128];
	int index;
	EHeightArray2D *this;
	int index;
	EHeightArray2D *this;
	int index;
	int &row[128];
	int index;
	EHeightArray2D *this;
	int index;
	EHeightArray2D *this;
	int &row[128];
	int index;
	EHeightArray2D *this;
	int index;
	int &row[128];
	EHeightArray2D *this;
	int index;
	int index;
	EHeightArray2D *this;
	int &row[128];
	int index;
	
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  int iVar6;
  ERoofVert *pEVar7;
  EVertArray *this_00;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  ERoofVert V [3];
  EVec3 V1;
  EVec3 V2;
  EVec3 N;
  
                    /* end of inlined section */
  iVar6 = 1;
  do {
    bVar2 = iVar6 != -1;
    iVar6 = iVar6 + -1;
  } while (bVar2);
  if (Dir == 2) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
    V[0].VertPos.field0_0x0._8_4_ = (float)*(int *)((int)this + y * 4 + (x + -1) * 0x200);
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
    V[1].VertPos.field0_0x0._8_4_ = (float)(this->m_heightArray).m_array[x][y];
    V[2].VertPos.field0_0x0._8_4_ = (float)(this->m_heightArray).m_array[x][y + 1];
    V[0].VertPos.field0_0x0._4_4_ = (float)y;
    V[1].VertPos.field0_0x0._0_4_ = (float)x;
    V[0].VertPos.field0_0x0._0_4_ = (float)(x + -1);
    V[2].VertPos.field0_0x0._4_4_ = (float)(y + 1);
    V[1].VertPos.field0_0x0._4_4_ = V[0].VertPos.field0_0x0._4_4_;
    V[2].VertPos.field0_0x0._0_4_ = V[1].VertPos.field0_0x0._0_4_;
  }
  else {
    if (Dir < 3) {
      if (Dir != 1) {
        return;
      }
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
      iVar10 = (this->m_heightArray).m_array[x + 1][y];
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
      iVar6 = (this->m_heightArray).m_array[x][y];
      iVar11 = (this->m_heightArray).m_array[x][y + 1];
      V[2].VertPos.field0_0x0._0_4_ = (float)x;
      V[1].VertPos.field0_0x0._4_4_ = (float)y;
      V[1].VertPos.field0_0x0._0_4_ = (float)(x + 1);
      V[2].VertPos.field0_0x0._4_4_ = (float)(y + 1);
    }
    else {
      if (Dir != 3) {
        if (Dir != 4) {
          return;
        }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
        V[0].VertPos.field0_0x0._8_4_ = (float)*(int *)((int)this + (y + -1) * 4 + x * 0x200);
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
        V[1].VertPos.field0_0x0._8_4_ = (float)(this->m_heightArray).m_array[x][y];
        V[2].VertPos.field0_0x0._8_4_ = (float)*(int *)((int)this + y * 4 + (x + -1) * 0x200);
        V[0].VertPos.field0_0x0._0_4_ = (float)x;
        V[1].VertPos.field0_0x0._4_4_ = (float)y;
        V[0].VertPos.field0_0x0._4_4_ = (float)(y + -1);
        V[2].VertPos.field0_0x0._0_4_ = (float)(x + -1);
        V[1].VertPos.field0_0x0._0_4_ = V[0].VertPos.field0_0x0._0_4_;
        V[2].VertPos.field0_0x0._4_4_ = V[1].VertPos.field0_0x0._4_4_;
        goto LAB_001be2f8;
      }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
      iVar10 = *(int *)((int)this + (y + -1) * 4 + x * 0x200);
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
      iVar6 = (this->m_heightArray).m_array[x][y];
      iVar11 = (this->m_heightArray).m_array[x + 1][y];
      V[1].VertPos.field0_0x0._0_4_ = (float)x;
      V[2].VertPos.field0_0x0._4_4_ = (float)y;
      V[1].VertPos.field0_0x0._4_4_ = (float)(y + -1);
      V[2].VertPos.field0_0x0._0_4_ = (float)(x + 1);
    }
    V[2].VertPos.field0_0x0._8_4_ = (float)iVar11;
    V[1].VertPos.field0_0x0._8_4_ = (float)iVar10;
    V[0].VertPos.field0_0x0._8_4_ = (float)iVar6;
    V[0].VertPos.field0_0x0._4_4_ = (float)y;
    V[0].VertPos.field0_0x0._0_4_ = (float)x;
  }
LAB_001be2f8:
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar8 = V[1].VertPos.field0_0x0._0_4_ - V[0].VertPos.field0_0x0._0_4_;
  fVar12 = V[1].VertPos.field0_0x0._4_4_ - V[0].VertPos.field0_0x0._4_4_;
  V1.field0_0x0.d[2] = V[1].VertPos.field0_0x0._8_4_ - V[0].VertPos.field0_0x0._8_4_;
                    /* end of inlined section */
  V1.field0_0x0._0_8_ = CONCAT44(fVar12,fVar8);
  puVar1 = (undefined *)((int)&V1.field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)V1.field0_0x0._0_8_ >> (7 - uVar3) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar9 = V[2].VertPos.field0_0x0._0_4_ - V[0].VertPos.field0_0x0._0_4_;
  fVar13 = V[2].VertPos.field0_0x0._4_4_ - V[0].VertPos.field0_0x0._4_4_;
  V2.field0_0x0.d[2] = V[2].VertPos.field0_0x0._8_4_ - V[0].VertPos.field0_0x0._8_4_;
                    /* end of inlined section */
  V2.field0_0x0._0_8_ = CONCAT44(fVar13,fVar9);
  puVar1 = (undefined *)((int)&V2.field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)V2.field0_0x0._0_8_ >> (7 - uVar3) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  N.field0_0x0.d[0] = fVar12 * V2.field0_0x0.d[2] - V1.field0_0x0.d[2] * fVar13;
  N.field0_0x0.d[1] = V1.field0_0x0.d[2] * fVar9 - fVar8 * V2.field0_0x0.d[2];
  N.field0_0x0.d[2] = fVar8 * fVar13 - fVar12 * fVar9;
  fVar8 = sqrtf(N.field0_0x0.d[0] * N.field0_0x0.d[0] + N.field0_0x0.d[1] * N.field0_0x0.d[1] +
                N.field0_0x0.d[2] * N.field0_0x0.d[2]);
  if (fVar8 != 0.0) {
    fVar8 = 1.0 / fVar8;
    N.field0_0x0.d[2] = N.field0_0x0.d[2] * fVar8;
    N.field0_0x0.d[0] = N.field0_0x0.d[0] * fVar8;
    N.field0_0x0.d[1] = N.field0_0x0.d[1] * fVar8;
  }
                    /* end of inlined section */
  V[0].VertNormal.field0_0x0.d[2] = N.field0_0x0.d[2];
  uVar5 = CONCAT44(N.field0_0x0.d[1],N.field0_0x0.d[0]);
  puVar1 = (undefined *)((int)&V[0].VertNormal.field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar5 >> (7 - uVar3) * 8;
  uVar3 = (uint)&V[0].VertNormal & 7;
  puVar4 = (ulong *)((int)&V[0].VertNormal - uVar3);
  *puVar4 = uVar5 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  V[1].VertNormal.field0_0x0.d[2] = N.field0_0x0.d[2];
  uVar5 = CONCAT44(N.field0_0x0.d[1],N.field0_0x0.d[0]);
  puVar1 = (undefined *)((int)&V[1].VertNormal.field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar5 >> (7 - uVar3) * 8;
  uVar3 = (uint)&V[1].VertNormal & 7;
  puVar4 = (ulong *)((int)&V[1].VertNormal - uVar3);
  *puVar4 = uVar5 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar1 = (undefined *)((int)&V[2].VertNormal.field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
            CONCAT44(N.field0_0x0.d[1],N.field0_0x0.d[0]) >> (7 - uVar3) * 8;
  uVar3 = (uint)&V[2].VertNormal & 7;
  puVar4 = (ulong *)((int)&V[2].VertNormal - uVar3);
  *puVar4 = CONCAT44(N.field0_0x0.d[1],N.field0_0x0.d[0]) << uVar3 * 8 |
            *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  V[2].VertNormal.field0_0x0._8_4_ = N.field0_0x0.d[2];
  this_00 = &this->m_vertArray;
  V[0].VertPos.field0_0x0._8_4_ = V[0].VertPos.field0_0x0._8_4_ * 0.5;
  iVar6 = this->m_iVertCount;
  V[1].VertPos.field0_0x0._8_4_ = V[1].VertPos.field0_0x0._8_4_ * 0.5;
  V[2].VertPos.field0_0x0._8_4_ = V[2].VertPos.field0_0x0._8_4_ * 0.5;
  this->m_iVertCount = iVar6 + 1;
  pEVar7 = __vc__Q210ERoofSetup10EVertArrayi(this_00,iVar6);
  puVar1 = (undefined *)((int)&(pEVar7->VertPos).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
            CONCAT44(V[0].VertPos.field0_0x0._4_4_,V[0].VertPos.field0_0x0._0_4_) >> (7 - uVar3) * 8
  ;
  uVar3 = (uint)pEVar7 & 7;
  *(ulong *)((int)pEVar7 - uVar3) =
       CONCAT44(V[0].VertPos.field0_0x0._4_4_,V[0].VertPos.field0_0x0._0_4_) << uVar3 * 8 |
       *(ulong *)((int)pEVar7 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(pEVar7->VertUV).field0_0x0 + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
            CONCAT44(V[0].VertUV.field0_0x0._0_4_,V[0].VertPos.field0_0x0._8_4_) >> (7 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(pEVar7->VertPos).field0_0x0 + 8);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = CONCAT44(V[0].VertUV.field0_0x0._0_4_,V[0].VertPos.field0_0x0._8_4_) << uVar3 * 8 |
            *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(pEVar7->VertNormal).field0_0x0 + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)V[0]._16_8_ >> (7 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(pEVar7->VertUV).field0_0x0 + 4);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = (long)V[0]._16_8_ << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(pEVar7->VertNormal).field0_0x0 + 0xb);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
            CONCAT44(V[0].VertNormal.field0_0x0.d[2],V[0].VertNormal.field0_0x0._4_4_) >>
            (7 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(pEVar7->VertNormal).field0_0x0 + 4);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = CONCAT44(V[0].VertNormal.field0_0x0.d[2],V[0].VertNormal.field0_0x0._4_4_) << uVar3 * 8
            | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  iVar6 = this->m_iVertCount;
  this->m_iVertCount = iVar6 + 1;
  pEVar7 = __vc__Q210ERoofSetup10EVertArrayi(this_00,iVar6);
  puVar1 = (undefined *)((int)&(pEVar7->VertPos).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
            CONCAT44(V[1].VertPos.field0_0x0._4_4_,V[1].VertPos.field0_0x0._0_4_) >> (7 - uVar3) * 8
  ;
  uVar3 = (uint)pEVar7 & 7;
  *(ulong *)((int)pEVar7 - uVar3) =
       CONCAT44(V[1].VertPos.field0_0x0._4_4_,V[1].VertPos.field0_0x0._0_4_) << uVar3 * 8 |
       *(ulong *)((int)pEVar7 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(pEVar7->VertUV).field0_0x0 + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
            CONCAT44(V[1].VertUV.field0_0x0._0_4_,V[1].VertPos.field0_0x0._8_4_) >> (7 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(pEVar7->VertPos).field0_0x0 + 8);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = CONCAT44(V[1].VertUV.field0_0x0._0_4_,V[1].VertPos.field0_0x0._8_4_) << uVar3 * 8 |
            *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(pEVar7->VertNormal).field0_0x0 + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)V[1]._16_8_ >> (7 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(pEVar7->VertUV).field0_0x0 + 4);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = (long)V[1]._16_8_ << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(pEVar7->VertNormal).field0_0x0 + 0xb);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
            CONCAT44(V[1].VertNormal.field0_0x0.d[2],V[1].VertNormal.field0_0x0._4_4_) >>
            (7 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(pEVar7->VertNormal).field0_0x0 + 4);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = CONCAT44(V[1].VertNormal.field0_0x0.d[2],V[1].VertNormal.field0_0x0._4_4_) << uVar3 * 8
            | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  iVar6 = this->m_iVertCount;
  this->m_iVertCount = iVar6 + 1;
  pEVar7 = __vc__Q210ERoofSetup10EVertArrayi(this_00,iVar6);
  puVar1 = (undefined *)((int)&(pEVar7->VertPos).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
            CONCAT44(V[2].VertPos.field0_0x0._4_4_,V[2].VertPos.field0_0x0._0_4_) >> (7 - uVar3) * 8
  ;
  uVar3 = (uint)pEVar7 & 7;
  *(ulong *)((int)pEVar7 - uVar3) =
       CONCAT44(V[2].VertPos.field0_0x0._4_4_,V[2].VertPos.field0_0x0._0_4_) << uVar3 * 8 |
       *(ulong *)((int)pEVar7 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(pEVar7->VertUV).field0_0x0 + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
            CONCAT44(V[2].VertUV.field0_0x0._0_4_,V[2].VertPos.field0_0x0._8_4_) >> (7 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(pEVar7->VertPos).field0_0x0 + 8);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = CONCAT44(V[2].VertUV.field0_0x0._0_4_,V[2].VertPos.field0_0x0._8_4_) << uVar3 * 8 |
            *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(pEVar7->VertNormal).field0_0x0 + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)V[2]._16_8_ >> (7 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(pEVar7->VertUV).field0_0x0 + 4);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = (long)V[2]._16_8_ << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(pEVar7->VertNormal).field0_0x0 + 0xb);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
            CONCAT44(V[2].VertNormal.field0_0x0._8_4_,V[2].VertNormal.field0_0x0._4_4_) >>
            (7 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(pEVar7->VertNormal).field0_0x0 + 4);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = CONCAT44(V[2].VertNormal.field0_0x0._8_4_,V[2].VertNormal.field0_0x0._4_4_) << uVar3 * 8
            | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  return;
}

ERoofs* ERoofs::ERoofs() {
	NLIterator i;
	NLIterator i;
	
  undefined *puVar1;
  EVec3 *pEVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  ulong *puVar6;
  ulong in_a3;
  ulong uVar7;
  
  __9EInstance(&this->field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_6ERoofs;
  puVar1 = (undefined *)((int)&(this->m_bound).vMax.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_bound3.h */
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | 0UL >> (7 - uVar5) * 8;
  pEVar2 = &(this->m_bound).vMax;
  uVar5 = (uint)pEVar2 & 7;
  puVar6 = (ulong *)((int)pEVar2 - uVar5);
  *puVar6 = 0L << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  (this->m_bound).vMax.field0_0x0.d[2] = 0.0;
  puVar1 = (undefined *)((int)&(this->m_bound).vMax.field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  pEVar2 = &(this->m_bound).vMax;
  uVar3 = (uint)pEVar2 & 7;
  uVar7 = (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
          in_a3 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)pEVar2 - uVar3) >> uVar3 * 8;
  fVar4 = (this->m_bound).vMax.field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_bound).vMin.field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar7 >> (7 - uVar5) * 8;
  uVar5 = (uint)&this->m_bound & 7;
  puVar6 = (ulong *)((int)&this->m_bound - uVar5);
  *puVar6 = uVar7 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  (this->m_bound).vMin.field0_0x0.d[2] = fVar4;
                    /* end of inlined section */
  this->m_pdl = (EDL *)0x0;
  uVar5 = (this->field0_0x0).m_instanceFlags;
  this->m_pRoofShader = (ERShader *)0x0;
  (this->field0_0x0).m_instanceFlags = uVar5 & 0xfffffdff;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  if (**(int **)(_app.m_pGameStateMan)->m_nliCurGame == 1) {
    SetOverlapCauseFlags__9EInstanceUi(&this->field0_0x0,0);
    SetOverlapReceiveFlags__9EInstanceUi(&this->field0_0x0,0);
  }
  else {
    SetOverlapReceiveFlags__9EInstanceUi(&this->field0_0x0,0x118);
  }
  return this;
}

void ERoofs::~ERoofs(int __in_chrg) {
  EGlobalManagerClient__vtable *pEVar1;
  EDL *pEVar2;
  
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_6ERoofs;
  while (this->m_pRoofShader != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pRoofShader->field0_0x0);
    this->m_pRoofShader = (ERShader *)0x0;
  }
  pEVar2 = this->m_pdl;
  while (pEVar2 != (EDL *)0x0) {
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[3].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[7].EGlobalManagerClient)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 7),this->m_pdl);
    this->m_pdl = (EDL *)0x0;
    pEVar2 = this->m_pdl;
  }
  ___9EInstance(&this->field0_0x0,__in_chrg);
  return;
}

void ERoofs::SetVisible(bool vis) {
  uint uVar1;
  
  if (vis) {
    uVar1 = (this->field0_0x0).m_instanceFlags | 1;
  }
  else {
    uVar1 = (this->field0_0x0).m_instanceFlags & 0xfffffffe;
  }
  (this->field0_0x0).m_instanceFlags = uVar1;
  return;
}

void ERoofs::Draw(ERC *prc, u32 renderFlags) {
  if ((renderFlags & 2) == 0) {
    if ((renderFlags & 1) == 0) {
      (*(code *)prc->__vtable->EndCommand)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->BeginCommand,1);
    }
    else {
      (*(code *)prc->__vtable->NewEntry)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->Terminate);
    }
  }
  if ((renderFlags & 8) == 0) {
    if ((renderFlags & 4) != 0) {
      Select__8ERShaderP3ERCi(this->m_pRoofShader,prc,0);
    }
  }
  else {
    SelectForShadowMask__8ERShaderP3ERC(this->m_pRoofShader,prc);
  }
  DrawRoof__6ERoofsP3ERCb(this,prc,false);
  return;
}

void ERoofs::CreateRoof(EVec3 &Offset, bool UseLargeTexture) {
	ERoofSetup *pSetup;
	
  ERoofSetup *pEVar1;
  ERShader *pEVar2;
  uint id;
  
  pEVar1 = (ERoofSetup *)__builtin_new(0x10028);
  pEVar1 = __10ERoofSetup(pEVar1);
  this->m_pdl = (EDL *)0x0;
  if (UseLargeTexture) {
    id = 0x1de3c4e6;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  }
  else {
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    id = 0x31cd074b;
  }
  pEVar2 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,id,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pRoofShader = pEVar2;
  SetupRoofEdges__6ERoofsR10ERoofSetup(this,pEVar1);
  SetupFillInRoof__6ERoofsR10ERoofSetup(this,pEVar1);
  SetupAddLedges__6ERoofsR10ERoofSetup(this,pEVar1);
  SetupTriangles__6ERoofsR10ERoofSetup(this,pEVar1);
  SetupUVCoords__6ERoofsR10ERoofSetup(this,pEVar1);
  SetupConvertTrisToVertexStrip__6ERoofsR10ERoofSetupR5EVec3b(this,pEVar1,Offset,UseLargeTexture);
  if (pEVar1 != (ERoofSetup *)0x0) {
    ___10ERoofSetup(pEVar1,3);
  }
  return;
}

void ERoofs::DrawRoof(ERC *prc, bool useShaders) {
  ERC__vtable *pEVar1;
  
  if (this->m_pdl != (EDL *)0x0) {
    if (useShaders) {
      Select__8ERShaderP3ERCi(this->m_pRoofShader,prc,0);
      pEVar1 = prc->__vtable;
    }
    else {
      pEVar1 = prc->__vtable;
    }
    (*(code *)pEVar1->DisableRasterModes)
              ((int)&prc->m_pdl + (int)*(short *)&pEVar1->EnableRasterModes,this->m_pdl);
  }
  return;
}

void ERoofs::SetupRoofEdges(ERoofSetup &S) {
	int i;
	int j;
	CTilePt pt;
	CTilePt pt2;
	CTilePt pt3;
	TileWalls wall;
	EHeightArray2D *this;
	EHeightArray2D *this;
	EHeightArray2D *this;
	int index;
	EHeightArray2D *this;
	
  bool bVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  int *piVar5;
  undefined8 unaff_s0;
  int iVar6;
  int iVar7;
  undefined8 unaff_s1;
  undefined4 *puVar8;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  CTilePt pt;
  CTilePt pt2;
  CTilePt pt3;
  TileWalls wall;
  TileWalls TStack_f0;
  int local_b0;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
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
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
                    /* end of inlined section */
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  iVar2 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                    ((int)&_5Globs_pFixedWorld->__vtable +
                     (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
  piVar4 = &S->m_iGridSize;
  *piVar4 = iVar2;
  __7CTilePtiii(&pt,0,0,1);
  __7CTilePtiii(&pt2,0,0,1);
  __7CTilePtiii(&pt3,0,0,1);
  __9TileWalls(&wall);
  S->m_iMaxY = 0;
  S->m_iMinY = 0;
  S->m_iMaxX = 0;
  S->m_iMinX = 0;
  if (0 < *piVar4) {
    iVar2 = *piVar4;
    iVar7 = 0;
    while( true ) {
      local_b0 = iVar7 + 1;
      iVar6 = 0;
      if (0 < iVar2) {
        puVar8 = (undefined4 *)((int)(S->m_heightArray).m_array + (iVar7 << 3 | 4U));
        piVar5 = (S->m_heightArray).m_array + iVar7 * 2;
        do {
          SetX__7CTilePti(&pt,iVar6);
          SetY__7CTilePti(&pt,iVar7);
          uVar3 = (*(code *)_5Globs_pFixedWorld->__vtable[1].GetFloorLayer)
                            ((int)&_5Globs_pFixedWorld->__vtable +
                             (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].OutOfGrid,&pt);
          if ((uVar3 & 4) == 0) {
            if (S->m_iMinX == 0) {
              S->m_iMinX = iVar6;
            }
            if (S->m_iMinY == 0) {
              S->m_iMinY = iVar7;
            }
            if (iVar6 < S->m_iMinX) {
              S->m_iMinX = iVar6;
            }
            if (iVar7 < S->m_iMinY) {
              S->m_iMinY = iVar7;
            }
            if (S->m_iMaxX < iVar6) {
              S->m_iMaxX = iVar6;
            }
            if (S->m_iMaxY < iVar7) {
              S->m_iMaxY = iVar7;
            }
          }
          else {
                    /* end of inlined section */
            *piVar5 = -1;
            piVar5[0x80] = 0xffffffff;
            *puVar8 = 0xffffffff;
            puVar8[0x80] = 0xffffffff;
          }
          iVar6 = iVar6 + 1;
          puVar8 = puVar8 + 0x100;
          piVar5 = piVar5 + 0x100;
        } while (iVar6 < S->m_iGridSize);
      }
      if (*piVar4 <= local_b0) break;
      iVar2 = *piVar4;
      iVar7 = local_b0;
    }
  }
  if (S->m_iMinX < 1) {
    S->m_iMinX = 1;
    iVar2 = S->m_iMinY;
  }
  else {
    iVar2 = S->m_iMinY;
  }
  if (iVar2 < 1) {
    S->m_iMinY = 1;
    iVar2 = S->m_iMaxX;
  }
  else {
    iVar2 = S->m_iMaxX;
  }
  iVar7 = S->m_iGridSize;
  S->m_iMaxX = iVar2 + 2;
  S->m_iMaxY = S->m_iMaxY + 2;
  if (iVar7 <= iVar2 + 2) {
    S->m_iMaxX = iVar7 + -1;
  }
  iVar2 = S->m_iGridSize;
  if (S->m_iMaxY < iVar2) {
    iVar2 = S->m_iMinY;
  }
  else {
    S->m_iMaxY = iVar2 + -1;
    iVar2 = S->m_iMinY;
  }
  if (iVar2 < S->m_iMaxY) {
    iVar7 = S->m_iMinX;
    while( true ) {
      local_b0 = iVar2 + 1;
      if (iVar7 < S->m_iMaxX) {
        do {
          SetX__7CTilePti(&pt,iVar7);
          SetY__7CTilePti(&pt,iVar2);
          uVar3 = (*(code *)_5Globs_pFixedWorld->__vtable[1].GetFloorLayer)
                            ((int)&_5Globs_pFixedWorld->__vtable +
                             (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].OutOfGrid,&pt);
          if ((uVar3 & 4) == 0) {
            (*(code *)_5Globs_pFixedWorld->__vtable->ComputeArchValue)
                      (&TStack_f0,
                       (int)&_5Globs_pFixedWorld->__vtable +
                       (int)*(short *)&_5Globs_pFixedWorld->__vtable->ComputeRooms,&pt);
            __as__9TileWallsRC9TileWalls(&wall,&TStack_f0);
            ___9TileWalls(&TStack_f0,2);
            bVar1 = HasWallNotFence__C9TileWalls16TileWallsSegment(&wall,kTopLeft);
            if (bVar1) {
              __as__7CTilePtRC7CTilePt(&pt2,&pt);
              iVar6 = GetX__C7CTilePt(&pt2);
              SetX__7CTilePti(&pt2,iVar6 + -1);
              uVar3 = (*(code *)_5Globs_pFixedWorld->__vtable[1].GetFloorLayer)
                                ((int)&_5Globs_pFixedWorld->__vtable +
                                 (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].OutOfGrid,&pt2);
              if ((uVar3 & 4) != 0) {
                AddWall__10ERoofSetupii16TileWallsSegment(S,iVar2,iVar7,kTopLeft);
              }
            }
            bVar1 = HasWallNotFence__C9TileWalls16TileWallsSegment(&wall,kTopRight);
            if (bVar1) {
              __as__7CTilePtRC7CTilePt(&pt2,&pt);
              iVar6 = GetY__C7CTilePt(&pt2);
              SetY__7CTilePti(&pt2,iVar6 + -1);
              uVar3 = (*(code *)_5Globs_pFixedWorld->__vtable[1].GetFloorLayer)
                                ((int)&_5Globs_pFixedWorld->__vtable +
                                 (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].OutOfGrid,&pt2);
              if ((uVar3 & 4) != 0) {
                AddWall__10ERoofSetupii16TileWallsSegment(S,iVar2,iVar7,kTopRight);
              }
            }
            bVar1 = HasWallNotFence__C9TileWalls16TileWallsSegment(&wall,kBottomRight);
            if (bVar1) {
              __as__7CTilePtRC7CTilePt(&pt2,&pt);
              iVar6 = GetX__C7CTilePt(&pt2);
              SetX__7CTilePti(&pt2,iVar6 + 1);
              uVar3 = (*(code *)_5Globs_pFixedWorld->__vtable[1].GetFloorLayer)
                                ((int)&_5Globs_pFixedWorld->__vtable +
                                 (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].OutOfGrid,&pt2);
              if ((uVar3 & 4) != 0) {
                AddWall__10ERoofSetupii16TileWallsSegment(S,iVar2,iVar7,kBottomRight);
              }
            }
            bVar1 = HasWallNotFence__C9TileWalls16TileWallsSegment(&wall,kBottomLeft);
            if (bVar1) {
              __as__7CTilePtRC7CTilePt(&pt2,&pt);
              iVar6 = GetY__C7CTilePt(&pt2);
              SetY__7CTilePti(&pt2,iVar6 + 1);
              uVar3 = (*(code *)_5Globs_pFixedWorld->__vtable[1].GetFloorLayer)
                                ((int)&_5Globs_pFixedWorld->__vtable +
                                 (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].OutOfGrid,&pt2);
              if ((uVar3 & 4) != 0) {
                AddWall__10ERoofSetupii16TileWallsSegment(S,iVar2,iVar7,kBottomLeft);
              }
            }
            bVar1 = HasWallNotFence__C9TileWalls16TileWallsSegment(&wall,kHorizDiag);
            if ((bVar1) && (bVar1 = HasWall__C9TileWalls16TileWallsSegment(&wall,kHorizDiag), bVar1)
               ) {
              __as__7CTilePtRC7CTilePt(&pt2,&pt);
              iVar6 = GetX__C7CTilePt(&pt2);
              SetX__7CTilePti(&pt2,iVar6 + -1);
              iVar6 = GetY__C7CTilePt(&pt2);
              SetY__7CTilePti(&pt2,iVar6 + -1);
              __as__7CTilePtRC7CTilePt(&pt3,&pt);
              iVar6 = GetX__C7CTilePt(&pt3);
              SetX__7CTilePti(&pt3,iVar6 + 1);
              iVar6 = GetY__C7CTilePt(&pt3);
              SetY__7CTilePti(&pt3,iVar6 + 1);
              uVar3 = (*(code *)_5Globs_pFixedWorld->__vtable[1].GetFloorLayer)
                                ((int)&_5Globs_pFixedWorld->__vtable +
                                 (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].OutOfGrid,&pt2);
              if (((uVar3 & 4) != 0) ||
                 (uVar3 = (*(code *)_5Globs_pFixedWorld->__vtable[1].GetFloorLayer)
                                    ((int)&_5Globs_pFixedWorld->__vtable +
                                     (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].OutOfGrid,&pt3
                                    ), (uVar3 & 4) != 0)) {
                AddWall__10ERoofSetupii16TileWallsSegment(S,iVar2,iVar7,kHorizDiag);
              }
            }
            bVar1 = HasWallNotFence__C9TileWalls16TileWallsSegment(&wall,kVertDiag);
            if ((bVar1) && (bVar1 = HasWall__C9TileWalls16TileWallsSegment(&wall,kVertDiag), bVar1))
            {
              __as__7CTilePtRC7CTilePt(&pt2,&pt);
              iVar6 = GetX__C7CTilePt(&pt2);
              SetX__7CTilePti(&pt2,iVar6 + -1);
              iVar6 = GetY__C7CTilePt(&pt2);
              SetY__7CTilePti(&pt2,iVar6 + 1);
              __as__7CTilePtRC7CTilePt(&pt3,&pt);
              iVar6 = GetX__C7CTilePt(&pt3);
              SetX__7CTilePti(&pt3,iVar6 + 1);
              iVar6 = GetY__C7CTilePt(&pt3);
              SetY__7CTilePti(&pt3,iVar6 + -1);
              uVar3 = (*(code *)_5Globs_pFixedWorld->__vtable[1].GetFloorLayer)
                                ((int)&_5Globs_pFixedWorld->__vtable +
                                 (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].OutOfGrid,&pt2);
              if (((uVar3 & 4) != 0) ||
                 (uVar3 = (*(code *)_5Globs_pFixedWorld->__vtable[1].GetFloorLayer)
                                    ((int)&_5Globs_pFixedWorld->__vtable +
                                     (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].OutOfGrid,&pt3
                                    ), (uVar3 & 4) != 0)) {
                AddWall__10ERoofSetupii16TileWallsSegment(S,iVar2,iVar7,kVertDiag);
              }
            }
            iVar6 = S->m_iMaxX;
          }
          else {
            iVar6 = S->m_iMaxX;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar6);
        iVar2 = S->m_iMaxY;
      }
      else {
        iVar2 = S->m_iMaxY;
      }
      if (iVar2 <= local_b0) break;
      iVar7 = S->m_iMinX;
      iVar2 = local_b0;
    }
  }
  ___9TileWalls(&wall,2);
  ___7CTilePt(&pt3,2);
  ___7CTilePt(&pt2,2);
  ___7CTilePt(&pt,2);
  return;
}

void ERoofs::SetupFillInRoof(ERoofSetup &S) {
	int Level;
	bool GotoNextLevel;
	int i;
	int j;
	EHeightArray2D *this;
	int index;
	int &row[128];
	int index;
	EHeightArray2D *this;
	int index;
	int index;
	EHeightArray2D *this;
	int index;
	EHeightArray2D *this;
	int index;
	int index;
	EHeightArray2D *this;
	int index;
	EHeightArray2D *this;
	int index;
	int &row[128];
	int index;
	EHeightArray2D *this;
	int index;
	EHeightArray2D *this;
	int &row[128];
	int index;
	EHeightArray2D *this;
	int index;
	EHeightArray2D *this;
	int index;
	int &row[128];
	int index;
	EHeightArray2D *this;
	int index;
	int &row[128];
	int index;
	EHeightArray2D *this;
	int index;
	int &row[128];
	int index;
	EHeightArray2D *this;
	int index;
	int index;
	EHeightArray2D *this;
	int index;
	EHeightArray2D *this;
	int &row[128];
	int index;
	EHeightArray2D *this;
	int index;
	int &row[128];
	int index;
	
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 2;
  do {
    bVar2 = false;
    if (S->m_iMinX < S->m_iMaxX * 2 + -1) {
      iVar3 = S->m_iMaxY;
      iVar5 = S->m_iMinX;
      while( true ) {
        iVar4 = S->m_iMinY;
        if (iVar4 < iVar3 * 2 + -1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
          do {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
            if ((S->m_heightArray).m_array[iVar5][iVar4] == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
              iVar3 = *(int *)((int)S + (iVar4 + -1) * 4 + iVar5 * 0x200);
              bVar1 = false;
                    /* end of inlined section */
              if ((iVar3 < 1) || (iVar3 == iVar6)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
                iVar3 = (S->m_heightArray).m_array[iVar5][iVar4 + 1];
                    /* end of inlined section */
                if ((iVar3 < 1) || (iVar3 == iVar6)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
                  iVar3 = *(int *)((int)S + iVar4 * 4 + (iVar5 + -1) * 0x200);
                    /* end of inlined section */
                  if ((iVar3 < 1) || (iVar3 == iVar6)) {
                    /* end of inlined section */
                    iVar3 = (S->m_heightArray).m_array[iVar5 + 1][iVar4];
                    /* end of inlined section */
                    if ((0 < iVar3) && (iVar3 != iVar6)) {
                      bVar1 = true;
                    }
                  }
                  else {
                    bVar1 = true;
                  }
                }
                else {
                  bVar1 = true;
                }
              }
              else {
                bVar1 = true;
              }
              if (bVar1) {
                    /* end of inlined section */
                bVar2 = true;
                (S->m_heightArray).m_array[iVar5][iVar4] = iVar6;
              }
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < S->m_iMaxY * 2 + -1);
        }
        if (S->m_iMaxX * 2 + -1 <= iVar5 + 1) break;
        iVar3 = S->m_iMaxY;
        iVar5 = iVar5 + 1;
      }
    }
    iVar6 = iVar6 + 1;
  } while (bVar2);
  if (S->m_iMinX < S->m_iMaxX * 2 + -1) {
    iVar6 = S->m_iMaxY;
    iVar3 = S->m_iMinX;
    while( true ) {
      if (S->m_iMinY < iVar6 * 2 + -1) {
        iVar6 = S->m_iMinY;
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
        do {
          iVar5 = iVar6 + 1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
          if (1 < (S->m_heightArray).m_array[iVar3][iVar6]) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
            bVar2 = false;
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
                    /* end of inlined section */
            if ((((*(int *)((int)S + iVar6 * 4 + (iVar3 + -1) * 0x200) == -1) ||
                 (*(int *)((int)S + (iVar6 + -1) * 4 + iVar3 * 0x200) == -1)) ||
                ((S->m_heightArray).m_array[iVar3][iVar6 + 1] == -1)) ||
               ((S->m_heightArray).m_array[iVar3 + 1][iVar6] == -1)) {
              bVar2 = true;
            }
            if (bVar2) {
                    /* end of inlined section */
              (S->m_heightArray).m_array[iVar3][iVar6] = -1;
            }
          }
          iVar6 = iVar5;
        } while (iVar5 < S->m_iMaxY * 2 + -1);
      }
      if (S->m_iMaxX * 2 + -1 <= iVar3 + 1) break;
      iVar6 = S->m_iMaxY;
      iVar3 = iVar3 + 1;
    }
  }
  return;
}

void ERoofs::SetupAddLedges(ERoofSetup &S) {
	int i;
	int j;
	EHeightArray2D *this;
	int index;
	int index;
	EHeightArray2D *this;
	int index;
	int index;
	EHeightArray2D *this;
	int index;
	int &row[128];
	int index;
	EHeightArray2D *this;
	int index;
	int &row[128];
	int index;
	EHeightArray2D *this;
	int index;
	EHeightArray2D *this;
	int index;
	int index;
	EHeightArray2D *this;
	int index;
	EHeightArray2D *this;
	int index;
	EHeightArray2D *this;
	int index;
	EHeightArray2D *this;
	int &row[128];
	int index;
	EHeightArray2D *this;
	int index;
	
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (S->m_iMinX < S->m_iMaxX << 1) {
    iVar1 = S->m_iMaxY;
    iVar3 = S->m_iMinX;
    while( true ) {
      iVar4 = S->m_iMinY;
      if (iVar4 < iVar1 << 1) {
        piVar2 = (S->m_heightArray).m_array[iVar3] + iVar4;
        do {
                    /* end of inlined section */
          if (*piVar2 != 0) {
                    /* end of inlined section */
            *piVar2 = *piVar2 + 1;
          }
          iVar4 = iVar4 + 1;
          piVar2 = piVar2 + 1;
        } while (iVar4 < S->m_iMaxY << 1);
      }
      if (S->m_iMaxX << 1 <= iVar3 + 1) break;
      iVar1 = S->m_iMaxY;
      iVar3 = iVar3 + 1;
    }
  }
  if (S->m_iMinX < S->m_iMaxX * 2 + -1) {
    iVar1 = S->m_iMaxY;
    iVar3 = S->m_iMinX;
    while( true ) {
      if (S->m_iMinY < iVar1 * 2 + -1) {
        iVar1 = S->m_iMinY;
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
        do {
                    /* end of inlined section */
          iVar4 = iVar1 + 1;
          if ((S->m_heightArray).m_array[iVar3][iVar1] == 2) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
            piVar2 = (int *)((int)S + iVar1 * 4 + (iVar3 + -1) * 0x200);
                    /* end of inlined section */
            if (*piVar2 == 0) {
              *piVar2 = 1;
            }
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
            piVar2 = (int *)((int)S + (iVar1 + -1) * 4 + iVar3 * 0x200);
                    /* end of inlined section */
            if (*piVar2 == 0) {
              *piVar2 = 1;
            }
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
            piVar2 = (S->m_heightArray).m_array[iVar3] + iVar1 + 1;
                    /* end of inlined section */
            if (*piVar2 == 0) {
              *piVar2 = 1;
            }
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
            piVar2 = (S->m_heightArray).m_array[iVar3 + 1] + iVar1;
                    /* end of inlined section */
            if (*piVar2 == 0) {
              *piVar2 = 1;
            }
          }
                    /* end of inlined section */
          iVar1 = iVar4;
        } while (iVar4 < S->m_iMaxY * 2 + -1);
      }
      if (S->m_iMaxX * 2 + -1 <= iVar3 + 1) break;
      iVar1 = S->m_iMaxY;
      iVar3 = iVar3 + 1;
    }
  }
  return;
}

void ERoofs::SetupTriangles(ERoofSetup &S) {
	int i;
	int j;
	int UpperLeft;
	int UpperRight;
	int LowerLeft;
	int LowerRight;
	int count;
	EHeightArray2D *this;
	int index;
	int index;
	EHeightArray2D *this;
	int index;
	int &row[128];
	int index;
	EHeightArray2D *this;
	int index;
	int index;
	EHeightArray2D *this;
	int &row[128];
	int index;
	EHeightArray2D *this;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int y;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar4 = S->m_iMaxX * 2 + -1;
  iVar7 = 0;
  if (S->m_iMinX < iVar4) {
    iVar8 = S->m_iMinY;
    iVar9 = S->m_iMinX;
    while( true ) {
      if (iVar8 < S->m_iMaxY * 2 + -1) {
        piVar5 = (S->m_heightArray).m_array[iVar9] + iVar8;
        iVar8 = (S->m_iMaxY * 2 + -1) - iVar8;
        do {
                    /* end of inlined section */
          iVar1 = *piVar5;
          iVar8 = iVar8 + -1;
          piVar5 = piVar5 + 1;
          iVar7 = (uint)(0 < iVar1) + iVar7;
        } while (iVar8 != 0);
      }
      if (iVar4 <= iVar9 + 1) break;
      iVar8 = S->m_iMinY;
      iVar9 = iVar9 + 1;
    }
  }
  init__Q210ERoofSetup10EVertArrayi(&S->m_vertArray,iVar7 * 6);
  if (S->m_iMaxX * 2 + -1 <= S->m_iMinX) {
    return;
  }
  iVar4 = S->m_iMaxY;
  iVar7 = S->m_iMinX;
  do {
    iVar8 = S->m_iMinY;
    iVar9 = iVar7 + 1;
    if (iVar8 < iVar4 * 2 + -1) {
      do {
        y = iVar8 + 1;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
        iVar4 = (S->m_heightArray).m_array[iVar7][iVar8];
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
        iVar1 = (S->m_heightArray).m_array[iVar7][iVar8 + 1];
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
                    /* end of inlined section */
        iVar2 = (S->m_heightArray).m_array[iVar7 + 1][iVar8];
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
        bVar6 = iVar4 < 1;
                    /* end of inlined section */
        if (iVar1 < 1) {
          bVar6 = (iVar4 < 1) + 1;
        }
        iVar3 = (S->m_heightArray).m_array[iVar7 + 1][iVar8 + 1];
        if (iVar2 < 1) {
          bVar6 = bVar6 + 1;
        }
        if (iVar3 < 1) {
          bVar6 = bVar6 + 1;
        }
        if (bVar6 < 2) {
          if (bVar6 == 1) {
            if (0 < iVar4) {
              if (iVar1 < 1) {
LAB_001bf7d8:
                AddTri__10ERoofSetupiii(S,iVar9,iVar8,2);
                iVar4 = S->m_iMaxY;
              }
              else if (iVar2 < 1) {
                AddTri__10ERoofSetupiii(S,iVar7,y,3);
                iVar4 = S->m_iMaxY;
              }
              else if (iVar3 < 1) {
                AddTri__10ERoofSetupiii(S,iVar7,iVar8,1);
                iVar4 = S->m_iMaxY;
              }
              else {
                iVar4 = S->m_iMaxY;
              }
              goto LAB_001bf86c;
            }
          }
          else {
            if ((iVar4 == iVar3) && (iVar2 == iVar1)) {
joined_r0x001bf7bc:
              if (iVar1 < iVar3) {
LAB_001bf7c8:
                AddTri__10ERoofSetupiii(S,iVar7,y,3);
                goto LAB_001bf7d8;
              }
            }
            else if (iVar1 == iVar2) {
              if (((iVar4 != iVar1) || (iVar1 <= iVar3)) && ((iVar3 != iVar1 || (iVar3 <= iVar4))))
              goto LAB_001bf7c8;
            }
            else {
              if (iVar4 != iVar3) {
                if ((((iVar4 != iVar1) && (iVar4 != iVar2)) && (iVar3 != iVar2)) && (iVar1 != iVar3)
                   ) {
                  iVar4 = S->m_iMaxY;
                  goto LAB_001bf86c;
                }
                AddTri__10ERoofSetupiii(S,iVar7,iVar8,1);
                AddTri__10ERoofSetupiii(S,iVar9,y,4);
                goto LAB_001bf868;
              }
              if ((iVar1 == iVar3) && (iVar2 < iVar1)) goto LAB_001bf7c8;
              if (iVar2 == iVar3) goto joined_r0x001bf7bc;
            }
            AddTri__10ERoofSetupiii(S,iVar7,iVar8,1);
          }
          AddTri__10ERoofSetupiii(S,iVar9,y,4);
          iVar4 = S->m_iMaxY;
        }
        else {
LAB_001bf868:
          iVar4 = S->m_iMaxY;
        }
LAB_001bf86c:
        iVar8 = y;
      } while (y < iVar4 * 2 + -1);
    }
    if (S->m_iMaxX * 2 + -1 <= iVar9) {
      return;
    }
    iVar4 = S->m_iMaxY;
    iVar7 = iVar9;
  } while( true );
}

void ERoofs::SetupUVCoords(ERoofSetup &S) {
	int i;
	float d;
	float Delta;
	int CornerIndex;
	int NonCorner1;
	int NonCorner2;
	EVec2 V1;
	EVec2 V2;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ERoofVert *pEVar4;
  ERoofVert *pEVar5;
  int index;
  EVertArray *pEVar6;
  int index_00;
  int iVar7;
  int index_01;
  int iVar8;
  int index_02;
  EVertArray *this_00;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  EVec2 V1;
  EVec2 V2;
  
  index_02 = 0;
  if (0 < S->m_iVertCount) {
    fVar11 = 0.001;
    this_00 = &S->m_vertArray;
    fVar12 = -1.0;
    do {
      __vc__Q210ERoofSetup10EVertArrayi(this_00,index_02);
      index = index_02 + 1;
      __vc__Q210ERoofSetup10EVertArrayi(this_00,index);
      index_01 = index_02 + 2;
      __vc__Q210ERoofSetup10EVertArrayi(this_00,index_01);
      pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(this_00,index);
      pEVar5 = __vc__Q210ERoofSetup10EVertArrayi(this_00,index_02);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      V1.field0_0x0 =
           (EVec2__null___1__1)
           CONCAT44((pEVar4->VertPos).field0_0x0.d[1] - (pEVar5->VertPos).field0_0x0.d[1],
                    (pEVar4->VertPos).field0_0x0.d[0] - (pEVar5->VertPos).field0_0x0.d[0]);
      puVar1 = (undefined *)((int)&V1.field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)V1.field0_0x0 >> (7 - uVar2) * 8;
      pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(this_00,index_01);
      pEVar5 = __vc__Q210ERoofSetup10EVertArrayi(this_00,index_02);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar10 = (pEVar4->VertPos).field0_0x0.d[0] - (pEVar5->VertPos).field0_0x0.d[0];
      fVar9 = (pEVar4->VertPos).field0_0x0.d[1] - (pEVar5->VertPos).field0_0x0.d[1];
                    /* end of inlined section */
      V2.field0_0x0 = (EVec2__null___1__1)CONCAT44(fVar9,fVar10);
      puVar1 = (undefined *)((int)&V2.field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)V2.field0_0x0 >> (7 - uVar2) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      fVar9 = V1.field0_0x0.d[0] * fVar10 + V1.field0_0x0.d[1] * fVar9;
                    /* end of inlined section */
      iVar8 = index_01;
      if ((fVar9 < -0.001) || (iVar7 = index, index_00 = index_02, fVar11 < fVar9)) {
        pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(this_00,index_02);
        pEVar5 = __vc__Q210ERoofSetup10EVertArrayi(this_00,index);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        V1.field0_0x0 =
             (EVec2__null___1__1)
             CONCAT44((pEVar4->VertPos).field0_0x0.d[1] - (pEVar5->VertPos).field0_0x0.d[1],
                      (pEVar4->VertPos).field0_0x0.d[0] - (pEVar5->VertPos).field0_0x0.d[0]);
        puVar1 = (undefined *)((int)&V1.field0_0x0 + 7);
        uVar2 = (uint)puVar1 & 7;
        puVar3 = (ulong *)(puVar1 + -uVar2);
        *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)V1.field0_0x0 >> (7 - uVar2) * 8;
        pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(this_00,index_01);
        pEVar5 = __vc__Q210ERoofSetup10EVertArrayi(this_00,index);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar10 = (pEVar4->VertPos).field0_0x0.d[0] - (pEVar5->VertPos).field0_0x0.d[0];
        fVar9 = (pEVar4->VertPos).field0_0x0.d[1] - (pEVar5->VertPos).field0_0x0.d[1];
                    /* end of inlined section */
        V2.field0_0x0 = (EVec2__null___1__1)CONCAT44(fVar9,fVar10);
        puVar1 = (undefined *)((int)&V2.field0_0x0 + 7);
        uVar2 = (uint)puVar1 & 7;
        puVar3 = (ulong *)(puVar1 + -uVar2);
        *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)V2.field0_0x0 >> (7 - uVar2) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        fVar9 = V1.field0_0x0.d[0] * fVar10 + V1.field0_0x0.d[1] * fVar9;
                    /* end of inlined section */
        iVar7 = index_02;
        if ((fVar9 < -0.001) || (index_00 = index, fVar11 < fVar9)) {
          iVar8 = index;
          index_00 = index_01;
        }
      }
      pEVar6 = &S->m_vertArray;
      pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,index_00);
      pEVar5 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar7);
      fVar9 = (pEVar4->VertPos).field0_0x0.d[2] - (pEVar5->VertPos).field0_0x0.d[2];
      if ((fVar9 <= -0.001) || (fVar11 <= fVar9)) {
        pEVar6 = &S->m_vertArray;
        pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,index_00);
        pEVar5 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar8);
        fVar9 = (pEVar4->VertPos).field0_0x0.d[2] - (pEVar5->VertPos).field0_0x0.d[2];
        if ((fVar9 <= -0.001) || (fVar11 <= fVar9)) {
          pEVar6 = &S->m_vertArray;
          pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar7);
          pEVar5 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar8);
          fVar9 = (pEVar4->VertPos).field0_0x0.d[2] - (pEVar5->VertPos).field0_0x0.d[2];
          if ((fVar9 <= -0.001) || (fVar11 <= fVar9)) {
            pEVar6 = &S->m_vertArray;
            pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar7);
            pEVar5 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar8);
            if ((pEVar5->VertPos).field0_0x0.d[2] < (pEVar4->VertPos).field0_0x0.d[2]) {
              pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,index_00);
              (pEVar4->VertUV).field0_0x0.d[0] = 1.0;
              pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,index_00);
              (pEVar4->VertUV).field0_0x0.d[1] = 0.0;
              pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar7);
              (pEVar4->VertUV).field0_0x0.d[0] = 0.0;
              pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar7);
              (pEVar4->VertUV).field0_0x0.d[1] = fVar12;
              goto LAB_001bff70;
            }
            pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,index_00);
            (pEVar4->VertUV).field0_0x0.d[0] = 1.0;
            pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,index_00);
            (pEVar4->VertUV).field0_0x0.d[1] = 0.0;
            pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar7);
            (pEVar4->VertUV).field0_0x0.d[0] = 0.0;
            pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar7);
            (pEVar4->VertUV).field0_0x0.d[1] = 1.0;
            pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar8);
            (pEVar4->VertUV).field0_0x0.d[0] = 0.0;
            pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar8);
            (pEVar4->VertUV).field0_0x0.d[1] = fVar12;
            goto LAB_001bfff0;
          }
          pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar7);
          pEVar5 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,index_00);
          if ((pEVar5->VertPos).field0_0x0.d[2] < (pEVar4->VertPos).field0_0x0.d[2]) {
            pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,index_00);
            (pEVar4->VertUV).field0_0x0.d[0] = 0.0;
            pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,index_00);
            (pEVar4->VertUV).field0_0x0.d[1] = 1.0;
            pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar7);
            (pEVar4->VertUV).field0_0x0.d[0] = fVar12;
            pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar7);
            (pEVar4->VertUV).field0_0x0.d[1] = 0.0;
            pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar8);
            (pEVar4->VertUV).field0_0x0.d[0] = 1.0;
            goto LAB_001bfe94;
          }
          pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,index_00);
          (pEVar4->VertUV).field0_0x0.d[0] = 0.0;
          pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,index_00);
          (pEVar4->VertUV).field0_0x0.d[1] = 0.0;
          pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar7);
          (pEVar4->VertUV).field0_0x0.d[0] = fVar12;
          pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar7);
          (pEVar4->VertUV).field0_0x0.d[1] = 1.0;
          pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar8);
          (pEVar4->VertUV).field0_0x0.d[0] = 1.0;
        }
        else {
          pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar7);
          pEVar5 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,index_00);
          if ((pEVar5->VertPos).field0_0x0.d[2] <= (pEVar4->VertPos).field0_0x0.d[2]) {
            pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,index_00);
            (pEVar4->VertUV).field0_0x0.d[0] = 0.0;
            pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,index_00);
            (pEVar4->VertUV).field0_0x0.d[1] = 1.0;
            pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar8);
            (pEVar4->VertUV).field0_0x0.d[0] = 1.0;
            pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar8);
            (pEVar4->VertUV).field0_0x0.d[1] = 1.0;
            pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar7);
            (pEVar4->VertUV).field0_0x0.d[0] = 0.0;
            iVar8 = iVar7;
            goto LAB_001bfe94;
          }
          pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,index_00);
          (pEVar4->VertUV).field0_0x0.d[0] = 0.0;
          pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,index_00);
          (pEVar4->VertUV).field0_0x0.d[1] = 0.0;
          pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar8);
          (pEVar4->VertUV).field0_0x0.d[0] = 1.0;
          pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar8);
          (pEVar4->VertUV).field0_0x0.d[1] = 0.0;
          pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar7);
          (pEVar4->VertUV).field0_0x0.d[0] = 0.0;
          iVar8 = iVar7;
        }
LAB_001bff84:
        pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(&S->m_vertArray,iVar8);
        (pEVar4->VertUV).field0_0x0.d[1] = 1.0;
      }
      else {
        pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar8);
        pEVar5 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,index_00);
        if ((pEVar4->VertPos).field0_0x0.d[2] < (pEVar5->VertPos).field0_0x0.d[2]) {
          pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,index_00);
          (pEVar4->VertUV).field0_0x0.d[0] = 0.0;
          pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,index_00);
          (pEVar4->VertUV).field0_0x0.d[1] = 0.0;
          pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar7);
          (pEVar4->VertUV).field0_0x0.d[0] = 1.0;
          pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar7);
          (pEVar4->VertUV).field0_0x0.d[1] = 0.0;
LAB_001bff70:
          pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(&S->m_vertArray,iVar8);
          (pEVar4->VertUV).field0_0x0.d[0] = 0.0;
          goto LAB_001bff84;
        }
        pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,index_00);
        (pEVar4->VertUV).field0_0x0.d[0] = 0.0;
        pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,index_00);
        (pEVar4->VertUV).field0_0x0.d[1] = 1.0;
        pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar7);
        (pEVar4->VertUV).field0_0x0.d[0] = 1.0;
        pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar7);
        (pEVar4->VertUV).field0_0x0.d[1] = 1.0;
        pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(pEVar6,iVar8);
        (pEVar4->VertUV).field0_0x0.d[0] = 0.0;
LAB_001bfe94:
        pEVar4 = __vc__Q210ERoofSetup10EVertArrayi(&S->m_vertArray,iVar8);
        (pEVar4->VertUV).field0_0x0.d[1] = 0.0;
      }
LAB_001bfff0:
      index_02 = index_02 + 3;
    } while (index_02 < S->m_iVertCount);
  }
  return;
}

void ERoofs::SetupConvertTrisToVertexStrip(ERoofSetup &S, EVec3 &Offset, bool UseLargeTexture) {
	ERC *prc;
	float invScaler;
	signed char NormalS8[3];
	int i;
	int j;
	int l;
	int cycler;
	int NumBuckets;
	int CurBucket;
	int RemainingVerts;
	ERC *this;
	float x;
	float y;
	float y;
	float x;
	ERC *this;
	ERC *this;
	ERC *this;
	int d;
	int value;
	ERC *this;
	ERC *this;
	ERC *this;
	int d;
	int value;
	
  int iVar1;
  EGlobalManagerClient__vtable *pEVar2;
  EMat4 *this_00;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  ERoofVert *pEVar6;
  EDL *pEVar7;
  undefined8 uVar8;
  int iVar9;
  char *pcVar10;
  undefined2 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  EVertArray *pEVar16;
  int iVar17;
  EAllocGroup **ppEVar18;
  float fVar19;
  float fVar20;
  char NormalS8 [3];
  int NumBuckets;
  int CurBucket;
  int RemainingVerts;
  
  if (S->m_iVertCount == 0) {
    this->m_pdl = (EDL *)0x0;
  }
  else {
    iVar15 = 0;
    fVar20 = 256.0;
    pEVar2 = (_pGfx->field0_0x0).__vtable;
    CurBucket = 0;
    uVar8 = (*(code *)pEVar2[6].EGlobalManagerClient)
                      ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar2 + 6),1,_pGfx,
                       UseLargeTexture);
    ppEVar18 = (EAllocGroup **)uVar8;
                    /* inlined from /eor/src2/engine/e_dl.h */
    this_00 = (EMat4 *)Alloc__11EAllocGroupUii(*ppEVar18,0x40,0x10);
                    /* end of inlined section */
    Id__5EMat4(this_00);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
    (this_00->field0_0x0).d[0] = 0.0;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
    (this_00->field0_0x0).d[1][0] = 1.0;
    (this_00->field0_0x0).d[1] = 1.0;
    (this_00->field0_0x0).d[1][1] = 0.0;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    _NormalS8 = (Offset->field0_0x0).d[0];
    PostTranslate__5EMat4RC5EVec3(this_00,(EVec3 *)NormalS8);
    _NormalS8 = 0.5;
    PreScale__5EMat4RC5EVec3(this_00,(EVec3 *)NormalS8);
                    /* end of inlined section */
    PreScale__5EMat4f(this_00,0.00390625);
    (*(code *)ppEVar18[0xb][0x11].m_allocList.field0_0x0.m_l.m_pHead)
              ((int)ppEVar18 + (int)*(short *)&ppEVar18[0xb][0x10].m_pos,this_00);
    iVar1 = S->m_iVertCount / 0x1fe;
    if (0 < iVar1) {
      do {
        pvVar3 = Alloc__11EAllocGroupUii(*ppEVar18,0xff0,0x10);
                    /* end of inlined section */
        iVar14 = 0;
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
        iVar9 = CurBucket + 1;
                    /* inlined from /eor/src2/engine/e_dl.h */
        pvVar4 = Alloc__11EAllocGroupUii(*ppEVar18,0x7f8,0x10);
        pvVar5 = Alloc__11EAllocGroupUii(*ppEVar18,0x7f8,0x10);
                    /* end of inlined section */
        pEVar16 = &S->m_vertArray;
        do {
          iVar17 = iVar14 * 4;
          iVar13 = CurBucket * 0x1fe + iVar14;
          pEVar6 = __vc__Q210ERoofSetup10EVertArrayi(pEVar16,iVar13);
          ToS8s__C5EVec3PSc(&pEVar6->VertNormal,NormalS8);
          pcVar10 = (char *)((int)pvVar5 + iVar17);
          *pcVar10 = NormalS8[0];
          pcVar10[1] = NormalS8[1];
          pcVar10[3] = '\0';
          pcVar10[2] = NormalS8[2];
          pEVar6 = __vc__Q210ERoofSetup10EVertArrayi(pEVar16,iVar13);
          puVar11 = (undefined2 *)(iVar14 * 8 + (int)pvVar3);
          *puVar11 = (short)(int)((pEVar6->VertPos).field0_0x0.d[0] * fVar20);
          pEVar6 = __vc__Q210ERoofSetup10EVertArrayi(pEVar16,iVar13);
          puVar11[1] = (short)(int)((pEVar6->VertPos).field0_0x0.d[1] * fVar20);
          pEVar6 = __vc__Q210ERoofSetup10EVertArrayi(pEVar16,iVar13);
          fVar19 = (pEVar6->VertPos).field0_0x0.d[2];
          puVar11[3] = 0;
          puVar11[2] = (short)(int)(fVar19 * fVar20);
          if (iVar15 < 2) {
            puVar11[3] = 0x8000;
          }
          iVar14 = iVar14 + 1;
          iVar15 = iVar15 + 1;
          puVar11 = (undefined2 *)(iVar17 + (int)pvVar4);
          iVar17 = 0;
          do {
            pEVar6 = __vc__Q210ERoofSetup10EVertArrayi(&S->m_vertArray,iVar13);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
            iVar12 = iVar17 + 1;
            *puVar11 = (short)(int)((pEVar6->VertUV).field0_0x0.d[iVar17] * 4096.0);
            puVar11 = puVar11 + 1;
            iVar17 = iVar12;
          } while (iVar12 < 2);
          if (iVar15 == 3) {
            iVar15 = 0;
          }
        } while (iVar14 < 0x1fe);
        (*(code *)ppEVar18[0xb][3].m_allocList.field0_0x0.m_l.m_pHead)
                  ((int)ppEVar18 + (int)*(short *)&ppEVar18[0xb][2].m_pos,0x1fe,pvVar3,pvVar4,0,
                   pvVar5,0);
        CurBucket = iVar9;
      } while (iVar9 < iVar1);
    }
    iVar9 = S->m_iVertCount + iVar1 * -0x1fe;
    if (iVar9 == 0) {
      pEVar2 = (_pGfx->field0_0x0).__vtable;
      pEVar7 = (EDL *)(*(code *)pEVar2[6].ManagedShutdown)
                                ((int)&(_pGfx->field0_0x0).__vtable +
                                 (int)*(short *)&pEVar2[6].ManagedStartup,uVar8);
      this->m_pdl = pEVar7;
    }
    else {
                    /* inlined from /eor/src2/engine/e_rc.h */
                    /* end of inlined section */
      iVar14 = 0;
                    /* inlined from /eor/src2/engine/e_rc.h */
      pvVar3 = Alloc__11EAllocGroupUii(*ppEVar18,iVar9 * 8,0x10);
      pvVar4 = Alloc__11EAllocGroupUii(*ppEVar18,iVar9 * 4,0x10);
      pvVar5 = Alloc__11EAllocGroupUii(*ppEVar18,iVar9 * 4,0x10);
                    /* end of inlined section */
                    /* end of inlined section */
      if (0 < iVar9) {
        pEVar16 = &S->m_vertArray;
        do {
          iVar17 = iVar14 * 4;
          iVar13 = iVar1 * 0x1fe + iVar14;
          pEVar6 = __vc__Q210ERoofSetup10EVertArrayi(pEVar16,iVar13);
          ToS8s__C5EVec3PSc(&pEVar6->VertNormal,NormalS8);
          pcVar10 = (char *)((int)pvVar5 + iVar17);
          *pcVar10 = NormalS8[0];
          pcVar10[1] = NormalS8[1];
          pcVar10[3] = '\0';
          pcVar10[2] = NormalS8[2];
          pEVar6 = __vc__Q210ERoofSetup10EVertArrayi(pEVar16,iVar13);
          puVar11 = (undefined2 *)(iVar14 * 8 + (int)pvVar3);
          *puVar11 = (short)(int)((pEVar6->VertPos).field0_0x0.d[0] * fVar20);
          pEVar6 = __vc__Q210ERoofSetup10EVertArrayi(pEVar16,iVar13);
          puVar11[1] = (short)(int)((pEVar6->VertPos).field0_0x0.d[1] * fVar20);
          pEVar6 = __vc__Q210ERoofSetup10EVertArrayi(pEVar16,iVar13);
          fVar19 = (pEVar6->VertPos).field0_0x0.d[2];
          puVar11[3] = 0;
          puVar11[2] = (short)(int)(fVar19 * fVar20);
          if (iVar15 < 2) {
            puVar11[3] = 0x8000;
          }
          iVar14 = iVar14 + 1;
          iVar15 = iVar15 + 1;
          puVar11 = (undefined2 *)(iVar17 + (int)pvVar4);
          iVar17 = 0;
          do {
            pEVar6 = __vc__Q210ERoofSetup10EVertArrayi(&S->m_vertArray,iVar13);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
            iVar12 = iVar17 + 1;
            *puVar11 = (short)(int)((pEVar6->VertUV).field0_0x0.d[iVar17] * 4096.0);
            puVar11 = puVar11 + 1;
            iVar17 = iVar12;
          } while (iVar12 < 2);
          if (iVar15 == 3) {
            iVar15 = 0;
          }
        } while (iVar14 < iVar9);
      }
      (*(code *)ppEVar18[0xb][3].m_allocList.field0_0x0.m_l.m_pHead)
                ((int)ppEVar18 + (int)*(short *)&ppEVar18[0xb][2].m_pos,iVar9,pvVar3,pvVar4,0,pvVar5
                 ,0);
      pEVar2 = (_pGfx->field0_0x0).__vtable;
      pEVar7 = (EDL *)(*(code *)pEVar2[6].ManagedShutdown)
                                ((int)&(_pGfx->field0_0x0).__vtable +
                                 (int)*(short *)&pEVar2[6].ManagedStartup,uVar8);
      this->m_pdl = pEVar7;
    }
  }
  return;
}

void ERoofs::DrawBound(ERC *prc) {
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  (*(code *)prc->__vtable->Init)((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->LoadMPG,0,0);
  (*(code *)prc->__vtable->NewEntry)((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->Terminate,1);
  (*(code *)prc->__vtable->ZTest)((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->RecalcMatrices);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_40 = _RED.field0_0x0.d[0];
  local_3c = _RED.field0_0x0.d[1];
  local_38 = _RED.field0_0x0.d[2];
                    /* end of inlined section */
  local_34 = _RED.field0_0x0.d[3];
  WireBox__10EPrimitiveP3ERCRC7EBound3G5EVec4(prc,&this->m_bound,(EVec4 *)&local_40);
  return;
}

void ERoofSetup::EVertArray::~EVertArray(int __in_chrg) {
	int i;
	int index;
	int i;
	int index;
	int i;
	int index;
	int j;
	int index;
	int i;
	int index;
	void *pAddress;
	
  TSegArray_ERoofVert_ *this_00;
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)&this->m_bIsNeighborhood == 0) {
    this_00 = this->m_pArray;
    if (this_00 != (TSegArray_ERoofVert_ *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_segarray.h */
      iVar5 = (this_00->m_segments).field0_0x0.m_size;
      iVar4 = 0;
      if (0 < iVar5) {
        pvVar1 = (this_00->m_segments).field0_0x0.m_p;
        while( true ) {
          iVar3 = iVar4 * 4;
          iVar4 = iVar4 + 1;
          _memmanFree__FPv(*(void **)((int)pvVar1 + iVar3));
          if (iVar5 <= iVar4) break;
          pvVar1 = (this_00->m_segments).field0_0x0.m_p;
        }
      }
      iVar4 = (this_00->m_segments).field0_0x0.m_size;
      iVar3 = iVar4;
      if (0 < iVar4) {
        do {
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      SetSize__6EArrayii((EArray *)this_00,0,0);
      iVar3 = -iVar4;
      if (iVar4 < 0) {
        do {
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      this_00->m_size = 0;
      for (; iVar5 < 0; iVar5 = iVar5 + 1) {
        pvVar1 = (this_00->m_segments).field0_0x0.m_p;
        pvVar2 = _memmanAlloc__FUiUi(0x1000,0x10);
        *(void **)((int)pvVar1 + iVar5 * 4) = pvVar2;
      }
      iVar5 = (this_00->m_segments).field0_0x0.m_size;
      if (0 < iVar5) {
        do {
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      Deallocate__6EArray((EArray *)this_00);
      _memmanFree__FPv(this_00);
    }
                    /* end of inlined section */
    this->m_pArray = (TSegArray_ERoofVert_ *)0x0;
  }
  else {
    FreeScratchMemory__5GlobsPCv(this);
    EndSaveGame__7EGlobal(&_globals);
    this->m_pArray = (TSegArray_ERoofVert_ *)0x0;
  }
  this->m_pScratchArray = (ERoofVert *)0x0;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void ERoofSetup::EVertArray::init(int iSize) {
	NLIterator i;
	NLIterator i;
	int size;
	int size;
	int newSegSize;
	int i;
	int index;
	int size;
	int i;
	int index;
	int i;
	int index;
	int j;
	int index;
	
  bool bVar1;
  ERoofVert *pEVar2;
  TSegArray_ERoofVert_ *this_00;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint size;
  
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
  bVar1 = **(int **)(_app.m_pGameStateMan)->m_nliCurGame == 2;
  *(uint *)&this->m_bIsNeighborhood = (uint)bVar1;
  if (bVar1) {
    BeginSaveGame__7EGlobal(&_globals);
    pEVar2 = (ERoofVert *)
             AllocateScratchMemory__5GlobsPCvPCci
                       (this,"c:/eor/src2/games/sims/ESRC/roofs.cpp",0x45d);
    this->m_iCount = iSize;
    this->m_pScratchArray = pEVar2;
  }
  else {
    this->m_iCount = iSize;
    if (iSize != 0) {
      this_00 = (TSegArray_ERoofVert_ *)__builtin_new(0x18);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
      __6EArray((EArray *)this_00);
      iVar8 = (this_00->m_segments).field0_0x0.m_size;
      size = iSize + 0x7fU >> 7;
      (this_00->m_segments).field0_0x0.m_elementSize = 4;
      this_00->m_size = 0;
      if ((int)size < iVar8) {
        pvVar3 = (this_00->m_segments).field0_0x0.m_p;
        uVar7 = size;
        while( true ) {
          iVar6 = uVar7 * 4;
          uVar7 = uVar7 + 1;
          _memmanFree__FPv(*(void **)((int)pvVar3 + iVar6));
          if (iVar8 <= (int)uVar7) break;
          pvVar3 = (this_00->m_segments).field0_0x0.m_p;
        }
      }
      iVar6 = (this_00->m_segments).field0_0x0.m_size;
      iVar4 = iVar6 - size;
      if ((int)size < iVar6) {
        do {
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      SetSize__6EArrayii((EArray *)this_00,size,0);
      iVar4 = size - iVar6;
      if (iVar6 < (int)size) {
        do {
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      this_00->m_size = iSize;
      if (iVar8 < (int)size) {
        pvVar3 = (this_00->m_segments).field0_0x0.m_p;
        while( true ) {
          iVar6 = iVar8 * 4;
          iVar8 = iVar8 + 1;
          pvVar5 = _memmanAlloc__FUiUi(0x1000,0x10);
          *(void **)((int)pvVar3 + iVar6) = pvVar5;
          if ((int)size <= iVar8) break;
          pvVar3 = (this_00->m_segments).field0_0x0.m_p;
        }
      }
                    /* end of inlined section */
      this->m_pArray = this_00;
    }
  }
  return;
}

ERoofVert& ERoofSetup::EVertArray::operator[](int index) {
	TSegArray<ERoofVert> *this;
	int index;
	TArray<void *> *this;
	
  if (*(int *)&this->m_bIsNeighborhood == 0) {
                    /* inlined from /eor/src2/common/datastruc/e_segarray.h */
                    /* end of inlined section */
    return (ERoofVert *)
           (*(int *)((int)(this->m_pArray->m_segments).field0_0x0.m_p + ((uint)index >> 7) * 4) +
           (index & 0x7fU) * 0x20);
  }
  return this->m_pScratchArray + index;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/roofs.h */
    gpTypeInfo_ERoofs =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_6ERoofs_m_typeInfo,New__6ERoofs,0,"ERoofs",&_9EInstance_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

ERoofs* ERoofs::New() {
  ERoofs *pEVar1;
  
  pEVar1 = (ERoofs *)__builtin_new(0xa4);
  pEVar1 = __6ERoofs(pEVar1);
  return pEVar1;
}

void ERoofs::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (ERoofs *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).m_otd.m_minPos + -7) + (int)*(short *)&pEVar1[1].GetTypeName
               ,3);
  }
  return;
}

ETypeInfo* ERoofs::GetTypeInfo() {
  return &_6ERoofs_m_typeInfo;
}

char* ERoofs::GetTypeName() {
  return _6ERoofs_m_typeInfo.m_name;
}

u32 ERoofs::GetTypeKey() {
  return _6ERoofs_m_typeInfo.m_key;
}

u16 ERoofs::GetTypeVersion() {
  return _6ERoofs_m_typeInfo.m_version;
}

u16 ERoofs::GetReadVersion() {
  return _6ERoofs_m_typeInfo.m_readVersion;
}

ETypeInfo* ERoofs::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_6ERoofs_m_typeInfo,New__6ERoofs,version,"ERoofs",&_9EInstance_m_typeInfo);
  return pEVar1;
}

ERoofs* ERoofs::CreateCopy() {
  ERoofs *pEVar1;
  
  pEVar1 = (ERoofs *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

u32 ERoofs::VisibilityTest(EPortalWindow &win, u32 parentVis) {
  return 0x15;
}

void global constructors keyed to gpTypeInfo_ERoofs() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

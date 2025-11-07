// STATUS: NOT STARTED

#include "world.h"

typedef cArray<unsigned char> SmallArray;
typedef cArray<PackedAlt> AltArray;

struct c2DArray<short unsigned int> : _c2DArray {
	c2DArray<short unsigned int>& operator=();
	c2DArray();
	c2DArray(c2DArray<short unsigned int>*, int, void);
	c2DArray();
	static c2DArray<short unsigned int>* GetArray(/* parameters unknown */);
	void Clear();
	void Clear();
	void SetValue();
	UInt16* GetPointer();
	UInt16& GetValue();
	UInt16** GetArrayBase();
	UInt16& GetWrappedValue();
};

struct cArray<short unsigned int> : c2DArray<short unsigned int> {
	cArray<short unsigned int>& operator=();
	cArray();
	cArray(cArray<short unsigned int>*, int, void);
	cArray();
	cArray();
	Int GetSize();
	cConstArrayRow<short unsigned int> operator[]();
	cArrayRow<short unsigned int> operator[]();
	UInt16& operator()();
	UInt16& operator()();
	cArray<short unsigned int>* Clone();
	void DoOffset();
	void AndAll();
};

struct c2DArray<VertexConfig> : _c2DArray {
	c2DArray<VertexConfig>& operator=();
	c2DArray();
	c2DArray(c2DArray<VertexConfig>*, int, void);
	c2DArray();
	static c2DArray<VertexConfig>* GetArray(/* parameters unknown */);
	void Clear();
	void Clear();
	void SetValue();
	VertexConfig* GetPointer();
	VertexConfig& GetValue();
	VertexConfig** GetArrayBase();
	VertexConfig& GetWrappedValue();
};

struct cArray<VertexConfig> : c2DArray<VertexConfig> {
	cArray<VertexConfig>& operator=();
	cArray();
	cArray(cArray<VertexConfig>*, int, void);
	cArray();
	cArray();
	Int GetSize();
	cConstArrayRow<VertexConfig> operator[]();
	cArrayRow<VertexConfig> operator[]();
	VertexConfig& operator()();
	VertexConfig& operator()();
	cArray<VertexConfig>* Clone();
	void DoOffset();
	void AndAll();
};

struct cArrayRow<unsigned char> {
private:
	UInt8 *mRowPtr;
	
public:
	cArrayRow();
	cArrayRow();
	cArrayRow();
	cArrayRow<unsigned char>& operator=();
	cArrayRow(cArrayRow<unsigned char>*, int, void);
	UInt8& operator[]();
};

struct cArrayRow<short unsigned int> {
private:
	UInt16 *mRowPtr;
	
public:
	cArrayRow();
	cArrayRow();
	cArrayRow();
	cArrayRow<short unsigned int>& operator=();
	cArrayRow(cArrayRow<short unsigned int>*, int, void);
	UInt16& operator[]();
};

struct cArrayRow<TileWallStorage> {
private:
	TileWallStorage *mRowPtr;
	
public:
	cArrayRow();
	cArrayRow();
	cArrayRow();
	cArrayRow<TileWallStorage>& operator=();
	cArrayRow(cArrayRow<TileWallStorage>*, int, void);
	TileWallStorage& operator[]();
};

struct cArrayRow<VertexConfig> {
private:
	VertexConfig *mRowPtr;
	
public:
	cArrayRow();
	cArrayRow();
	cArrayRow();
	cArrayRow<VertexConfig>& operator=();
	cArrayRow(cArrayRow<VertexConfig>*, int, void);
	VertexConfig& operator[]();
};

int num_adjacent_offsets = 4;
int num_support_offsets = 24;

__vtbl_ptr_type cFixedWorldImpl::Commander virtual table[4] = {
	/* [0] = */ {
		/* .__delta = */ -4,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -4,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::~cFixedWorldImpl,
		/* .__delta2 = */ 15792
	},
	/* [2] = */ {
		/* .__delta = */ -4,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::DoCommand,
		/* .__delta2 = */ 29472
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type cFixedWorldImpl virtual table[38] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::~cFixedWorldImpl,
		/* .__delta2 = */ 15792
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::Save,
		/* .__delta2 = */ 17144
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::Load,
		/* .__delta2 = */ 17280
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::DoCommand,
		/* .__delta2 = */ 29472
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::SetSize,
		/* .__delta2 = */ 15920
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::GetSize,
		/* .__delta2 = */ -29736
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::GetMaxSize,
		/* .__delta2 = */ -29728
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::OutOfBounds,
		/* .__delta2 = */ -30080
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::OutOfGrid,
		/* .__delta2 = */ -30008
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::OutOfBounds,
		/* .__delta2 = */ -29944
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::OutOfGrid,
		/* .__delta2 = */ -29840
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::GetFloorLayer,
		/* .__delta2 = */ 17456
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::GetFloor,
		/* .__delta2 = */ -29720
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::SetFloor,
		/* .__delta2 = */ -29608
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::GetWalls,
		/* .__delta2 = */ 17464
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::GetWall,
		/* .__delta2 = */ 17472
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::SetWall,
		/* .__delta2 = */ 18256
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::HasWalls,
		/* .__delta2 = */ -28832
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::HasWalls,
		/* .__delta2 = */ -28696
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::GetWallStorage,
		/* .__delta2 = */ -28576
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::SetWallStorage,
		/* .__delta2 = */ -28464
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::GetRoom,
		/* .__delta2 = */ -29424
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::SetRoom,
		/* .__delta2 = */ -29312
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::GetFlags,
		/* .__delta2 = */ -29184
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::SetFlags,
		/* .__delta2 = */ -29072
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::IsOutside,
		/* .__delta2 = */ -28952
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::GetVertexConfig,
		/* .__delta2 = */ -28328
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::SetVertexConfig,
		/* .__delta2 = */ -28200
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::AnalyzeWallVertex,
		/* .__delta2 = */ 20096
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::GetLightEntry,
		/* .__delta2 = */ -28072
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::SetLightEntry,
		/* .__delta2 = */ -28024
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::ComputeRooms,
		/* .__delta2 = */ 21224
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::ComputeArchValue,
		/* .__delta2 = */ 28488
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::GetWallManager,
		/* .__delta2 = */ -26832
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::GetLightLayer,
		/* .__delta2 = */ -26824
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorldImpl::MayEditTile,
		/* .__delta2 = */ -27976
	},
	/* [37] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type cFixedWorld virtual table[38] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cFixedWorld::~cFixedWorld,
		/* .__delta2 = */ -26880
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [37] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

static int adjacent_xoffsets[4] = {
	/* [0] = */ 0,
	/* [1] = */ -1,
	/* [2] = */ 1,
	/* [3] = */ 0
};

static int adjacent_yoffsets[4] = {
	/* [0] = */ -1,
	/* [1] = */ 0,
	/* [2] = */ 0,
	/* [3] = */ 1
};

static int support_xoffsets[24] = {
	/* [0] = */ -2,
	/* [1] = */ -1,
	/* [2] = */ 0,
	/* [3] = */ 1,
	/* [4] = */ 2,
	/* [5] = */ -2,
	/* [6] = */ -1,
	/* [7] = */ 0,
	/* [8] = */ 1,
	/* [9] = */ 2,
	/* [10] = */ -2,
	/* [11] = */ -1,
	/* [12] = */ 1,
	/* [13] = */ 2,
	/* [14] = */ -2,
	/* [15] = */ -1,
	/* [16] = */ 0,
	/* [17] = */ 1,
	/* [18] = */ 2,
	/* [19] = */ -2,
	/* [20] = */ -1,
	/* [21] = */ 0,
	/* [22] = */ 1,
	/* [23] = */ 2
};

static int support_yoffsets[24] = {
	/* [0] = */ -2,
	/* [1] = */ -2,
	/* [2] = */ -2,
	/* [3] = */ -2,
	/* [4] = */ -2,
	/* [5] = */ -1,
	/* [6] = */ -1,
	/* [7] = */ -1,
	/* [8] = */ -1,
	/* [9] = */ -1,
	/* [10] = */ 0,
	/* [11] = */ 0,
	/* [12] = */ 0,
	/* [13] = */ 0,
	/* [14] = */ 1,
	/* [15] = */ 1,
	/* [16] = */ 1,
	/* [17] = */ 1,
	/* [18] = */ 1,
	/* [19] = */ 2,
	/* [20] = */ 2,
	/* [21] = */ 2,
	/* [22] = */ 2,
	/* [23] = */ 2
};

static int support_columnflags[24] = {
	/* [0] = */ 0,
	/* [1] = */ 0,
	/* [2] = */ 0,
	/* [3] = */ 0,
	/* [4] = */ 0,
	/* [5] = */ 0,
	/* [6] = */ 1,
	/* [7] = */ 1,
	/* [8] = */ 1,
	/* [9] = */ 0,
	/* [10] = */ 0,
	/* [11] = */ 1,
	/* [12] = */ 1,
	/* [13] = */ 0,
	/* [14] = */ 0,
	/* [15] = */ 1,
	/* [16] = */ 1,
	/* [17] = */ 1,
	/* [18] = */ 0,
	/* [19] = */ 0,
	/* [20] = */ 0,
	/* [21] = */ 0,
	/* [22] = */ 0,
	/* [23] = */ 0
};

int GetWallPrice(WallStyle style) {
	WallStyle in;
	int i;
	FenceData *pData;
	unsigned int n;
	
  uint uVar1;
  bool bVar2;
  FenceData **ppFVar3;
  int iVar4;
  FenceData *pFVar5;
  float fVar6;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/wallStyles.h */
  if ((((style == kFenceStyle1) || (style == kFenceStyle2)) || (style == kFenceStyle3)) ||
     (bVar2 = false, style == kFenceStyle4)) {
    bVar2 = true;
  }
                    /* end of inlined section */
  if (!bVar2) {
    return 0x38;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
  ppFVar3 = (_5Globs_pEORGlobals->_pFenceSet->field0_0x0).pData;
  pFVar5 = (FenceData *)0x0;
  if (ppFVar3 != (FenceData **)0x0) {
    pFVar5 = ppFVar3[-1];
  }
                    /* end of inlined section */
  iVar4 = 0;
  if (0 < (int)pFVar5) {
    ppFVar3 = (_5Globs_pEORGlobals->_pFenceSet->field0_0x0).pData;
    do {
                    /* end of inlined section */
      if (style == (*ppFVar3)->type) {
        uVar1 = (*ppFVar3)->cost;
        if ((int)uVar1 < 0) {
          fVar6 = (float)(uVar1 & 1 | uVar1 >> 1);
          fVar6 = fVar6 + fVar6;
        }
        else {
          fVar6 = (float)uVar1;
        }
        return (int)(fVar6 * 0.8);
      }
      iVar4 = iVar4 + 1;
      ppFVar3 = ppFVar3 + 1;
    } while (iVar4 < (int)pFVar5);
    return 0;
  }
  return 0;
}

cFixedWorldImpl* cFixedWorldImpl::cFixedWorldImpl(Int size) {
	cFixedWorld *this;
	
  WallManager *pWVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/World.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (cFixedWorld__vtable *)_vt_11cFixedWorld;
  __9Commander((Commander *)&this->field_0x4);
  this->fSize = 0;
  this->mFloorLayer = (CFloorArray *)0x0;
  this->mRoomLayer = (cArray_short_unsigned_int_ *)0x0;
  this->mFlagLayer = (cArray_unsigned_char_ *)0x0;
  this->mWallLayer = (CWallArray *)0x0;
  this->mVertexConfigs = (cArray_VertexConfig_ *)0x0;
  this->mLightLayer = (LightLayer *)0x0;
  *(__vtbl_ptr_type **)&this->field_0x10 = _vt_15cFixedWorldImpl_9Commander;
  (this->field0_0x0).__vtable = (cFixedWorld__vtable *)_vt_15cFixedWorldImpl;
  pWVar1 = CreateInstance__11WallManager();
  this->mWallManager = pWVar1;
  SetSize__15cFixedWorldImplib(this,size,false);
  GenerateLookups__12VertexConfig();
  GenerateRotationLookups__9TileWalls();
  return this;
}

void cFixedWorldImpl::~cFixedWorldImpl(int __in_chrg) {
	cFixedWorld *this;
	int __in_chrg;
	void *pAddress;
	
  WallManager *pInstance;
  
  pInstance = this->mWallManager;
  *(__vtbl_ptr_type **)&this->field_0x10 = _vt_15cFixedWorldImpl_9Commander;
  (this->field0_0x0).__vtable = (cFixedWorld__vtable *)_vt_15cFixedWorldImpl;
  DestroyInstance__11WallManagerP11WallManager(pInstance);
  DeleteArrays__15cFixedWorldImpl(this);
  ___9Commander((Commander *)&this->field_0x4,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/World.h */
  (this->field0_0x0).__vtable = (cFixedWorld__vtable *)_vt_11cFixedWorld;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

bool cFixedWorldImpl::SetSize(Int newSize, bool Override) {
	int x;
	int index;
	UInt8 *inRow;
	int index;
	UInt16 *inRow;
	int index;
	TileWallStorage *inRow;
	int index;
	VertexConfig *inRow;
	int index;
	int y;
	int index;
	UInt8 *inRow;
	int index;
	int index;
	UInt16 *inRow;
	int index;
	TileWallStorage *inRow;
	int index;
	VertexConfig *inRow;
	
  short sVar1;
  cFixedWorld__vtable *pcVar2;
  LightLayer__vtable *pLVar3;
  char **ppcVar4;
  int iVar5;
  _c2DArray *p_Var6;
  LightLayer *pLVar7;
  LightEntry *pLVar8;
  CFloorArray *pCVar9;
  VertexConfig *this_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  int iVar10;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  BString local_c0 [4];
  VertexConfig aVStack_b0 [16];
  VertexConfig aVStack_a0 [16];
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
  
  local_30 = (undefined4)unaff_s6;
  uStack_2c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s7;
  uStack_1c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s5;
  uStack_3c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
  iVar5 = this->fSize;
  if (iVar5 != newSize) {
    this->fSize = newSize;
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
    if (((Override) || (this->mFloorLayer == (CFloorArray *)0x0)) ||
       (newSize != (this->mFloorLayer->field0_0x0).field0_0x0.field0_0x0.fxSize)) {
      DeleteArrays__15cFixedWorldImpl(this);
      pcVar2 = (this->field0_0x0).__vtable;
      iVar5 = (*(code *)pcVar2->GetWalls)
                        ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pcVar2->SetFloor);
      p_Var6 = (_c2DArray *)__builtin_new(0x18);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
      __7BStringPCc(local_c0,"");
      __9_c2DArrayiiiRC7BString(p_Var6,1,iVar5,iVar5,local_c0);
      ___7BString(local_c0,2);
                    /* end of inlined section */
      this->mFloorLayer = (CFloorArray *)p_Var6;
      p_Var6 = (_c2DArray *)__builtin_new(0x18);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
      __7BStringPCc(local_c0,"");
      __9_c2DArrayiiiRC7BString(p_Var6,2,iVar5,iVar5,local_c0);
      ___7BString(local_c0,2);
                    /* end of inlined section */
      this->mRoomLayer = (cArray_short_unsigned_int_ *)p_Var6;
      p_Var6 = (_c2DArray *)__builtin_new(0x18);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
      __7BStringPCc(local_c0,"");
      __9_c2DArrayiiiRC7BString(p_Var6,1,iVar5,iVar5,local_c0);
      ___7BString(local_c0,2);
                    /* end of inlined section */
      this->mFlagLayer = (cArray_unsigned_char_ *)p_Var6;
      p_Var6 = (_c2DArray *)__builtin_new(0x18);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
      __7BStringPCc(local_c0,"");
      __9_c2DArrayiiiRC7BString(p_Var6,8,iVar5,iVar5,local_c0);
      ___7BString(local_c0,2);
                    /* end of inlined section */
      this->mWallLayer = (CWallArray *)p_Var6;
      p_Var6 = (_c2DArray *)__builtin_new(0x18);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
      __7BStringPCc(local_c0,"");
      __9_c2DArrayiiiRC7BString(p_Var6,1,iVar5,iVar5,local_c0);
      ___7BString(local_c0,2);
                    /* end of inlined section */
      this->mVertexConfigs = (cArray_VertexConfig_ *)p_Var6;
      pLVar7 = CreateInstance__10LightLayer();
      this->mLightLayer = pLVar7;
    }
    else {
      if (iVar5 <= newSize) {
        this->fSize = newSize;
        return true;
      }
      if (0 < newSize) {
        iVar10 = newSize + -1;
        pCVar9 = this->mFloorLayer;
        iVar5 = 0;
        while( true ) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
          *(undefined *)((int)(pCVar9->field0_0x0).field0_0x0.field0_0x0.fData[iVar10] + iVar5) = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
          *(undefined2 *)((int)(this->mRoomLayer->field0_0x0).field0_0x0.fData[iVar10] + iVar5 * 2)
               = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
          local_c0[0].reference =
               (basic_string_ref *)
               (this->mWallLayer->field0_0x0).field0_0x0.field0_0x0.fData[iVar10];
          memset(&(local_c0[0].reference)->ptr + iVar5 * 2,0,8);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
          local_c0[0].reference =
               (basic_string_ref *)(this->mVertexConfigs->field0_0x0).field0_0x0.fData[iVar10];
          ppcVar4 = &(local_c0[0].reference)->ptr;
                    /* end of inlined section */
          __12VertexConfigi(aVStack_b0,0);
          __as__12VertexConfigRC12VertexConfig((VertexConfig *)((int)ppcVar4 + iVar5),aVStack_b0);
          ___12VertexConfig(aVStack_b0,2);
          pLVar7 = this->mLightLayer;
          pLVar3 = pLVar7->__vtable;
          sVar1 = *(short *)&pLVar3->RemoveLight;
          __7CTilePtiii((CTilePt *)local_c0,iVar5,iVar10,1);
          pLVar8 = (LightEntry *)
                   (*(code *)pLVar3->DoOffset)((int)&pLVar7->__vtable + (int)sVar1,local_c0);
          Clear__10LightEntry(pLVar8);
          ___7CTilePt((CTilePt *)local_c0,2);
          if (newSize <= iVar5 + 1) break;
          pCVar9 = this->mFloorLayer;
          iVar5 = iVar5 + 1;
        }
      }
      if (0 < newSize) {
        iVar10 = newSize + -1;
        pCVar9 = this->mFloorLayer;
        iVar5 = 0;
        while( true ) {
                    /* end of inlined section */
          *(undefined *)((int)(pCVar9->field0_0x0).field0_0x0.field0_0x0.fData[iVar5] + iVar10) = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
          *(undefined2 *)((int)(this->mRoomLayer->field0_0x0).field0_0x0.fData[iVar5] + iVar10 * 2)
               = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
          local_c0[0].reference =
               (basic_string_ref *)(this->mWallLayer->field0_0x0).field0_0x0.field0_0x0.fData[iVar5]
          ;
          memset((void *)((int)local_c0[0].reference + iVar10 * 8),0,8);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
          local_c0[0].reference =
               (basic_string_ref *)(this->mVertexConfigs->field0_0x0).field0_0x0.fData[iVar5];
          this_00 = (VertexConfig *)((int)local_c0[0].reference + iVar10);
                    /* end of inlined section */
          __12VertexConfigi(aVStack_a0,0);
          __as__12VertexConfigRC12VertexConfig(this_00,aVStack_a0);
          ___12VertexConfig(aVStack_a0,2);
          pLVar7 = this->mLightLayer;
          pLVar3 = pLVar7->__vtable;
          sVar1 = *(short *)&pLVar3->RemoveLight;
          __7CTilePtiii((CTilePt *)local_c0,iVar10,iVar5,1);
          pLVar8 = (LightEntry *)
                   (*(code *)pLVar3->DoOffset)((int)&pLVar7->__vtable + (int)sVar1,local_c0);
          Clear__10LightEntry(pLVar8);
          ___7CTilePt((CTilePt *)local_c0,2);
          if (newSize <= iVar5 + 1) break;
          pCVar9 = this->mFloorLayer;
          iVar5 = iVar5 + 1;
        }
      }
    }
    this->fSize = newSize;
  }
  return true;
}

void cFixedWorldImpl::DeleteArrays() {
  _c2DArray *this_00;
  
  if ((_c2DArray *)this->mFloorLayer == (_c2DArray *)0x0) {
    this_00 = (_c2DArray *)this->mWallLayer;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/WorldImpl.h */
    ___9_c2DArray((_c2DArray *)this->mFloorLayer,3);
                    /* end of inlined section */
    this_00 = (_c2DArray *)this->mWallLayer;
  }
  this->mFloorLayer = (CFloorArray *)0x0;
  if (this_00 != (_c2DArray *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/WorldImpl.h */
    ___9_c2DArray(this_00,3);
  }
                    /* end of inlined section */
  this->mWallLayer = (CWallArray *)0x0;
  if ((_c2DArray *)this->mRoomLayer != (_c2DArray *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
    ___9_c2DArray((_c2DArray *)this->mRoomLayer,3);
  }
                    /* end of inlined section */
  this->mRoomLayer = (cArray_short_unsigned_int_ *)0x0;
  if ((_c2DArray *)this->mFlagLayer != (_c2DArray *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/WorldImpl.h */
    ___9_c2DArray((_c2DArray *)this->mFlagLayer,3);
  }
                    /* end of inlined section */
  this->mFlagLayer = (cArray_unsigned_char_ *)0x0;
  if ((_c2DArray *)this->mVertexConfigs != (_c2DArray *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
    ___9_c2DArray((_c2DArray *)this->mVertexConfigs,3);
  }
                    /* end of inlined section */
  this->mVertexConfigs = (cArray_VertexConfig_ *)0x0;
  DestroyInstance__10LightLayerP10LightLayer(this->mLightLayer);
  this->mLightLayer = (LightLayer *)0x0;
  return;
}

ErrType cFixedWorldImpl::Save(iResFile *file, SInt32 inVersion) {
	ErrType err;
	
  int iVar1;
  
  iVar1 = WriteToDisk__9_c2DArrayP8iResFileisb
                    ((_c2DArray *)this->mFloorLayer,file,0x41727279,0xb,true);
  if (iVar1 == 0) {
    WriteToDisk__9_c2DArrayP8iResFileisb((_c2DArray *)this->mWallLayer,file,0x41727279,0xc,true);
    iVar1 = WriteToDisk__9_c2DArrayP8iResFileisb
                      ((_c2DArray *)this->mFlagLayer,file,0x41727279,8,true);
  }
  return iVar1;
}

ErrType cFixedWorldImpl::Load(iResFile *file, SInt32 inVersion) {
	ErrType err;
	
  LightLayer__vtable *pLVar1;
  int iVar2;
  
  iVar2 = ReadFromDisk__9_c2DArrayP8iResFileisPFPvi_v
                    ((_c2DArray *)this->mFloorLayer,file,0x41727279,0xb,(undefined1 *)0x0);
  if (((iVar2 == 0) &&
      (iVar2 = ReadFromDisk__9_c2DArrayP8iResFileisPFPvi_v
                         ((_c2DArray *)this->mWallLayer,file,0x41727279,0xc,(undefined1 *)0x0),
      iVar2 == 0)) &&
     (iVar2 = ReadFromDisk__9_c2DArrayP8iResFileisPFPvi_v
                        ((_c2DArray *)this->mFlagLayer,file,0x41727279,8,(undefined1 *)0x0),
     iVar2 == 0)) {
    pLVar1 = this->mLightLayer->__vtable;
    (*(code *)pLVar1[1].Get)
              ((int)&this->mLightLayer->__vtable + (int)*(short *)&pLVar1[1].operator_);
    iVar2 = 0;
  }
  return iVar2;
}

CFloorArray& cFixedWorldImpl::GetFloorLayer() {
  return this->mFloorLayer;
}

CWallArray& cFixedWorldImpl::GetWalls() {
  return this->mWallLayer;
}

TileWalls cFixedWorldImpl::GetWall(CTilePt &inPt) {
	int x;
	int y;
	TileWalls someWalls;
	_c2DArray *this;
	int index;
	TileWallStorage *inRow;
	int index;
	int index;
	TileWallStorage *inRow;
	int index;
	int index;
	TileWallStorage *inRow;
	int index;
	int index;
	TileWallStorage *inRow;
	int index;
	int index;
	TileWallStorage *inRow;
	int index;
	int index;
	TileWallStorage *inRow;
	int index;
	int index;
	TileWallStorage *inRow;
	int index;
	TileWallStorage *inRow;
	int index;
	TileWallStorage *inRow;
	int index;
	TileWallStorage *inRow;
	int index;
	TileWallStorage *inRow;
	int index;
	
  CWallArray *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool inAboveLeftHasDiag;
  bool inAboveRightHasDiag;
  bool inBelowLeftHasDiag;
  bool inBelowRightHasDiag;
  TileWalls someWalls;
  
  iVar2 = GetX__C7CTilePt(inPt);
  iVar3 = GetY__C7CTilePt(inPt);
  GetLevel__C7CTilePt(inPt);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
  if ((((iVar2 < 0) ||
       (pCVar1 = this->mWallLayer, (pCVar1->field0_0x0).field0_0x0.field0_0x0.fxSize < iVar2)) ||
      (iVar3 < 0)) || ((pCVar1->field0_0x0).field0_0x0.field0_0x0.fySize < iVar3)) {
    __9TileWalls(__return_storage_ptr__);
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
    iVar4 = iVar3 * 8;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
    if (iVar2 < 1) {
      inAboveLeftHasDiag = false;
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
      inAboveLeftHasDiag =
           (*(byte *)((int)(pCVar1->field0_0x0).field0_0x0.field0_0x0.fData[iVar2 + -1] + iVar4) &
           0x30) != 0;
    }
    if (iVar3 < 1) {
      inAboveRightHasDiag = false;
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
      inAboveRightHasDiag =
           (*(byte *)((int)(this->mWallLayer->field0_0x0).field0_0x0.field0_0x0.fData[iVar2] +
                     (iVar3 + -1) * 8) & 0x30) != 0;
    }
    if (iVar3 < this->fSize + -1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
      inBelowLeftHasDiag =
           (*(byte *)((int)(this->mWallLayer->field0_0x0).field0_0x0.field0_0x0.fData[iVar2] +
                     (iVar3 + 1) * 8) & 0x30) != 0;
    }
    else {
      inBelowLeftHasDiag = false;
    }
    if (iVar2 < this->fSize + -1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
      inBelowRightHasDiag =
           (*(byte *)((int)(this->mWallLayer->field0_0x0).field0_0x0.field0_0x0.fData[iVar2 + 1] +
                     iVar4) & 0x30) != 0;
    }
    else {
      inBelowRightHasDiag = false;
    }
    __9TileWallsRC15TileWallStoragebN32
              (&someWalls,
               (TileWallStorage *)
               ((int)(pCVar1->field0_0x0).field0_0x0.field0_0x0.fData[iVar2] + iVar4),
               inAboveLeftHasDiag,inAboveRightHasDiag,inBelowLeftHasDiag,inBelowRightHasDiag);
    if (iVar3 < this->fSize + -1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
      iVar3 = (iVar3 + 1) * 8;
                    /* end of inlined section */
      if ((*(byte *)((int)(this->mWallLayer->field0_0x0).field0_0x0.field0_0x0.fData[iVar2] + iVar3)
          & 2) != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
        SetStyle__9TileWalls9WallStyle16TileWallsSegment
                  (&someWalls,
                   (uint)*(byte *)((int)(this->mWallLayer->field0_0x0).field0_0x0.field0_0x0.fData
                                        [iVar2] + iVar3 + 3),kBottomLeft);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
        SetPlacement__9TileWallsQ29TileWalls14SheerPlacement16TileWallsSegment
                  (&someWalls,
                   *(byte *)((int)(this->mWallLayer->field0_0x0).field0_0x0.field0_0x0.fData[iVar2]
                            + iVar3 + 1) >> 2 & 3,kBottomLeft);
      }
    }
                    /* end of inlined section */
    iVar3 = iVar2 + 1;
    if (iVar2 < this->fSize + -1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
      if ((*(byte *)((int)(this->mWallLayer->field0_0x0).field0_0x0.field0_0x0.fData[iVar3] + iVar4)
          & 1) != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
        SetStyle__9TileWalls9WallStyle16TileWallsSegment
                  (&someWalls,
                   (uint)*(byte *)((int)(this->mWallLayer->field0_0x0).field0_0x0.field0_0x0.fData
                                        [iVar3] + iVar4 + 2),kBottomRight);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
        SetPlacement__9TileWallsQ29TileWalls14SheerPlacement16TileWallsSegment
                  (&someWalls,
                   *(byte *)((int)(this->mWallLayer->field0_0x0).field0_0x0.field0_0x0.fData[iVar3]
                            + iVar4 + 1) & 3,kBottomRight);
      }
    }
                    /* end of inlined section */
    __9TileWallsRC9TileWalls(__return_storage_ptr__,&someWalls);
    ___9TileWalls(&someWalls,2);
  }
  return __return_storage_ptr__;
}

void cFixedWorldImpl::SetWall(CTilePt &inLocation, TileWalls inWalls) {
	int x;
	int y;
	int level;
	CTilePt where;
	int index;
	TileWallStorage *inRow;
	int index;
	int index;
	TileWallStorage *inRow;
	int index;
	int index;
	TileWallStorage *inRow;
	int index;
	int index;
	TileWallStorage *inRow;
	int index;
	int index;
	TileWallStorage *inRow;
	int index;
	TileWallStorage *inRow;
	int index;
	TileWallStorage *inRow;
	int index;
	int index;
	TileWallStorage *inRow;
	int index;
	TileWallStorage *inRow;
	
  short sVar1;
  cFixedWorld__vtable *pcVar2;
  bool bVar3;
  byte bVar4;
  int x;
  int y;
  WallStyle WVar5;
  WallPattern WVar6;
  FloorPattern FVar7;
  SheerPlacement SVar8;
  byte *pbVar9;
  undefined8 unaff_s0;
  byte *pbVar10;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  CTilePt where;
  CTilePt aCStack_d0 [5];
  CTilePt aCStack_c0 [5];
  int level;
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
  
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  ConvertToWorldCoords__9TileWalls(inWalls);
  level = GetLevel__C7CTilePt(inLocation);
  x = GetX__C7CTilePt(inLocation);
  y = GetY__C7CTilePt(inLocation);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
  _where = (this->mWallLayer->field0_0x0).field0_0x0.field0_0x0.fData[x];
  pbVar10 = (byte *)((int)_where + y * 8);
                    /* end of inlined section */
  bVar3 = HasWall__C9TileWalls16TileWallsSegment(inWalls,kHorizDiag);
  if (bVar3) {
    *pbVar10 = 0x10;
    WVar5 = GetStyle__C9TileWalls16TileWallsSegment(inWalls,kHorizDiag);
    pbVar10[3] = (byte)WVar5;
    WVar6 = GetPattern__C9TileWalls16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                      (inWalls,kHorizDiag,kTop);
    pbVar10[6] = (byte)WVar6;
    WVar6 = GetPattern__C9TileWalls16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                      (inWalls,kHorizDiag,kBottom);
    pbVar10[7] = (byte)WVar6;
    FVar7 = GetFloorValue__C9TileWallsQ29TileWalls20DiagonalSideSelector(inWalls,kTop);
    pbVar10[2] = (byte)FVar7;
    FVar7 = GetFloorValue__C9TileWallsQ29TileWalls20DiagonalSideSelector(inWalls,kBottom);
    pbVar10[4] = (byte)FVar7;
  }
  else {
    *pbVar10 = *pbVar10 & 0xef;
  }
  bVar3 = HasWall__C9TileWalls16TileWallsSegment(inWalls,kVertDiag);
  if (bVar3) {
    *pbVar10 = 0x20;
    WVar5 = GetStyle__C9TileWalls16TileWallsSegment(inWalls,kVertDiag);
    pbVar10[3] = (byte)WVar5;
    WVar6 = GetPattern__C9TileWalls16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                      (inWalls,kVertDiag,kLeft);
    pbVar10[6] = (byte)WVar6;
    WVar6 = GetPattern__C9TileWalls16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                      (inWalls,kVertDiag,kRight);
    pbVar10[7] = (byte)WVar6;
    FVar7 = GetFloorValue__C9TileWallsQ29TileWalls20DiagonalSideSelector(inWalls,kLeft);
    pbVar10[2] = (byte)FVar7;
    FVar7 = GetFloorValue__C9TileWallsQ29TileWalls20DiagonalSideSelector(inWalls,kRight);
    pbVar10[4] = (byte)FVar7;
  }
  else {
    *pbVar10 = *pbVar10 & 0xdf;
  }
  bVar3 = HasWall__C9TileWalls16TileWallsSegment(inWalls,kTopLeft);
  if (bVar3) {
    *pbVar10 = *pbVar10 | 1;
    WVar5 = GetStyle__C9TileWalls16TileWallsSegment(inWalls,kTopLeft);
    pbVar10[2] = (byte)WVar5;
    WVar6 = GetPattern__C9TileWalls16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                      (inWalls,kTopLeft,kNotSpecified);
    pbVar10[4] = (byte)WVar6;
    SVar8 = GetPlacement__C9TileWalls16TileWallsSegment(inWalls,kTopLeft);
    pbVar10[1] = pbVar10[1] | (byte)SVar8;
    if (0 < x) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
      _where = (this->mWallLayer->field0_0x0).field0_0x0.field0_0x0.fData[x + -1];
      pbVar9 = (byte *)((int)_where + y * 8);
                    /* end of inlined section */
      bVar4 = *pbVar9 | 4;
LAB_002849a8:
      *pbVar9 = bVar4;
    }
  }
  else if (((*pbVar10 & 1) != 0) && (*pbVar10 = *pbVar10 & 0xfe, 0 < x)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
    _where = (this->mWallLayer->field0_0x0).field0_0x0.field0_0x0.fData[x + -1];
    pbVar9 = (byte *)((int)_where + y * 8);
                    /* end of inlined section */
    pbVar9[7] = 0;
    bVar4 = *pbVar9 & 0xfb;
    goto LAB_002849a8;
  }
  bVar3 = HasWall__C9TileWalls16TileWallsSegment(inWalls,kTopRight);
  if (bVar3) {
    *pbVar10 = *pbVar10 | 2;
    WVar5 = GetStyle__C9TileWalls16TileWallsSegment(inWalls,kTopRight);
    pbVar10[3] = (byte)WVar5;
    WVar6 = GetPattern__C9TileWalls16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                      (inWalls,kTopRight,kNotSpecified);
    pbVar10[5] = (byte)WVar6;
    SVar8 = GetPlacement__C9TileWalls16TileWallsSegment(inWalls,kTopRight);
    pbVar10[1] = pbVar10[1] | (byte)(SVar8 << 2);
    if (y < 1) goto LAB_00284a88;
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
    _where = (this->mWallLayer->field0_0x0).field0_0x0.field0_0x0.fData[x];
    pbVar9 = (byte *)((int)_where + (y + -1) * 8);
                    /* end of inlined section */
    bVar4 = *pbVar9 | 8;
  }
  else {
    if (((*pbVar10 & 2) == 0) || (*pbVar10 = *pbVar10 & 0xfd, y < 1)) goto LAB_00284a88;
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
    _where = (this->mWallLayer->field0_0x0).field0_0x0.field0_0x0.fData[x];
    pbVar9 = (byte *)((int)_where + (y + -1) * 8);
                    /* end of inlined section */
    pbVar9[6] = 0;
    bVar4 = *pbVar9 & 0xf7;
  }
  *pbVar9 = bVar4;
LAB_00284a88:
  bVar3 = HasWall__C9TileWalls16TileWallsSegment(inWalls,kBottomRight);
  if (bVar3) {
    *pbVar10 = *pbVar10 | 4;
    WVar6 = GetPattern__C9TileWalls16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                      (inWalls,kBottomRight,kNotSpecified);
    pbVar10[7] = (byte)WVar6;
    if (x < this->fSize + -1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
      _where = (this->mWallLayer->field0_0x0).field0_0x0.field0_0x0.fData[x + 1];
      pbVar9 = (byte *)((int)_where + y * 8);
                    /* end of inlined section */
      *pbVar9 = *pbVar9 | 1;
      WVar5 = GetStyle__C9TileWalls16TileWallsSegment(inWalls,kBottomRight);
      pbVar9[2] = (byte)WVar5;
      SVar8 = GetPlacement__C9TileWalls16TileWallsSegment(inWalls,kBottomRight);
      pbVar9[1] = pbVar9[1] | (byte)SVar8;
    }
  }
  else if ((*pbVar10 & 4) != 0) {
    *pbVar10 = *pbVar10 & 0xfb;
    if (x < this->fSize + -1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
      _where = (this->mWallLayer->field0_0x0).field0_0x0.field0_0x0.fData[x + 1];
      pbVar9 = (byte *)((int)_where + y * 8);
                    /* end of inlined section */
      pbVar9[4] = 0;
      *pbVar9 = *pbVar9 & 0xfe;
    }
  }
  bVar3 = HasWall__C9TileWalls16TileWallsSegment(inWalls,kBottomLeft);
  if (bVar3) {
    *pbVar10 = *pbVar10 | 8;
    WVar6 = GetPattern__C9TileWalls16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                      (inWalls,kBottomLeft,kNotSpecified);
    pbVar10[6] = (byte)WVar6;
    if (y < this->fSize + -1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
      _where = (this->mWallLayer->field0_0x0).field0_0x0.field0_0x0.fData[x];
      pbVar10 = (byte *)((int)_where + (y + 1) * 8);
                    /* end of inlined section */
      *pbVar10 = *pbVar10 | 2;
      WVar5 = GetStyle__C9TileWalls16TileWallsSegment(inWalls,kBottomLeft);
      pbVar10[3] = (byte)WVar5;
      SVar8 = GetPlacement__C9TileWalls16TileWallsSegment(inWalls,kBottomLeft);
      pbVar10[1] = pbVar10[1] | (byte)(SVar8 << 2);
    }
  }
  else if ((*pbVar10 & 8) != 0) {
    *pbVar10 = *pbVar10 & 0xf7;
    if (y < this->fSize + -1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
      _where = (this->mWallLayer->field0_0x0).field0_0x0.field0_0x0.fData[x];
      pbVar10 = (byte *)((int)_where + (y + 1) * 8);
                    /* end of inlined section */
      pbVar10[5] = 0;
      *pbVar10 = *pbVar10 & 0xfd;
    }
  }
  __7CTilePtiii(&where,x,y,level);
  pcVar2 = (this->field0_0x0).__vtable;
  sVar1 = *(short *)&pcVar2[1].HasWalls;
  (*(code *)pcVar2[1].GetRoom)
            (aCStack_d0,(int)&(this->field0_0x0).__vtable + (int)*(short *)&pcVar2[1].SetWallStorage
             ,&where);
  (*(code *)pcVar2[1].GetWallStorage)
            ((int)&(this->field0_0x0).__vtable + (int)sVar1,&where,aCStack_d0);
  ___12VertexConfig((VertexConfig *)aCStack_d0,2);
  __7CTilePtiii(aCStack_c0,x + 1,y,level);
  __as__7CTilePtRC7CTilePt(&where,aCStack_c0);
  ___7CTilePt(aCStack_c0,2);
  pcVar2 = (this->field0_0x0).__vtable;
  sVar1 = *(short *)&pcVar2[1].HasWalls;
  (*(code *)pcVar2[1].GetRoom)
            (aCStack_d0,(int)&(this->field0_0x0).__vtable + (int)*(short *)&pcVar2[1].SetWallStorage
             ,&where);
  (*(code *)pcVar2[1].GetWallStorage)
            ((int)&(this->field0_0x0).__vtable + (int)sVar1,&where,aCStack_d0);
  ___12VertexConfig((VertexConfig *)aCStack_d0,2);
  __7CTilePtiii(aCStack_d0,x,y + 1,level);
  __as__7CTilePtRC7CTilePt(&where,aCStack_d0);
  ___7CTilePt(aCStack_d0,2);
  pcVar2 = (this->field0_0x0).__vtable;
  sVar1 = *(short *)&pcVar2[1].HasWalls;
  (*(code *)pcVar2[1].GetRoom)
            (aCStack_d0,(int)&(this->field0_0x0).__vtable + (int)*(short *)&pcVar2[1].SetWallStorage
             ,&where);
  (*(code *)pcVar2[1].GetWallStorage)
            ((int)&(this->field0_0x0).__vtable + (int)sVar1,&where,aCStack_d0);
  ___12VertexConfig((VertexConfig *)aCStack_d0,2);
  __7CTilePtiii(aCStack_d0,x + 1,y + 1,level);
  __as__7CTilePtRC7CTilePt(&where,aCStack_d0);
  ___7CTilePt(aCStack_d0,2);
  pcVar2 = (this->field0_0x0).__vtable;
  sVar1 = *(short *)&pcVar2[1].HasWalls;
  (*(code *)pcVar2[1].GetRoom)
            (aCStack_d0,(int)&(this->field0_0x0).__vtable + (int)*(short *)&pcVar2[1].SetWallStorage
             ,&where);
  (*(code *)pcVar2[1].GetWallStorage)
            ((int)&(this->field0_0x0).__vtable + (int)sVar1,&where,aCStack_d0);
  ___12VertexConfig((VertexConfig *)aCStack_d0,2);
  ___7CTilePt(&where,2);
  ___9TileWalls(inWalls,2);
  return;
}

VertexConfig cFixedWorldImpl::AnalyzeWallVertex(CTilePt &inPt) {
	int level;
	int x;
	int y;
	CTilePt pts[4];
	unsigned char segs[4];
	VertexConfig config;
	int i;
	cArray<TileWallStorage> *this;
	
  uchar uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  CTilePt *in_a2_lo;
  CTilePt *pCVar6;
  undefined8 unaff_s0;
  int iVar7;
  undefined8 unaff_s1;
  CTilePt *this_00;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  uchar *puVar8;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  CTilePt pts [4];
  CTilePt CStack_104;
  VertexConfig config;
  uchar segs [4];
  int x;
  int y;
  Wall local_d8;
  Wall local_d4;
  Wall local_d0;
  Wall local_cc;
  Wall local_c8;
  Wall local_c4;
  Wall local_c0;
  Wall local_bc;
  cFixedWorldImpl *local_b8;
  CTilePt *local_b4;
  CTilePt *local_b0;
  CTilePt *local_ac;
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
  
  pCVar6 = pts;
  this_00 = pts;
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  iVar7 = 3;
  local_b8 = this;
  iVar2 = GetLevel__C7CTilePt(in_a2_lo);
  Get__C7CTilePtPiT1(in_a2_lo,&x,&y);
  local_b4 = pts + 2;
  local_b0 = pts + 3;
  puVar8 = segs;
  local_ac = &CStack_104;
  do {
    iVar7 = iVar7 + -1;
    __7CTilePt(pCVar6);
    pCVar6 = pCVar6 + 1;
  } while (iVar7 != -1);
  iVar7 = 3;
  __7CTilePtiii((CTilePt *)&config,x + -1,y + -1,iVar2);
  __as__7CTilePtRC7CTilePt(pts,(CTilePt *)&config);
  ___7CTilePt((CTilePt *)&config,2);
  __7CTilePtiii((CTilePt *)&config,x,y + -1,iVar2);
  __as__7CTilePtRC7CTilePt(pts + 1,(CTilePt *)&config);
  ___7CTilePt((CTilePt *)&config,2);
  __7CTilePtiii((CTilePt *)&config,x + -1,y,iVar2);
  __as__7CTilePtRC7CTilePt(local_b4,(CTilePt *)&config);
  ___7CTilePt((CTilePt *)&config,2);
  __as__7CTilePtRC7CTilePt(local_b0,in_a2_lo);
  do {
    lVar5 = (**(code **)(*(int *)inPt + 0x44))(&inPt->mX + *(short *)(*(int *)inPt + 0x40),this_00);
    if (lVar5 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
      iVar2 = *(int *)(inPt + 0xc);
      iVar3 = GetX__C7CTilePt(this_00);
      iVar4 = GetY__C7CTilePt(this_00);
                    /* end of inlined section */
      *puVar8 = *(uchar *)(*(int *)(iVar3 * 4 + *(int *)(iVar2 + 0xc)) + iVar4 * 8);
    }
    else {
      *puVar8 = '\0';
    }
    puVar8 = puVar8 + 1;
    iVar7 = iVar7 + -1;
    this_00 = this_00 + 1;
  } while (-1 < iVar7);
  __12VertexConfig((VertexConfig *)(CTilePt *)&config);
  if ((segs[0] & 8) != 0) {
    local_d8 = kNW;
    Add__12VertexConfigRCQ212VertexConfig4Wall((VertexConfig *)(CTilePt *)&config,&local_d8);
  }
  if ((segs[0] & 0x20) != 0) {
    local_d4 = kN;
    Add__12VertexConfigRCQ212VertexConfig4Wall((VertexConfig *)(CTilePt *)&config,&local_d4);
  }
  if ((segs[1] & 1) != 0) {
    local_d0 = kNE;
    Add__12VertexConfigRCQ212VertexConfig4Wall((VertexConfig *)(CTilePt *)&config,&local_d0);
  }
  if ((segs[1] & 0x10) != 0) {
    local_cc = kE;
    Add__12VertexConfigRCQ212VertexConfig4Wall((VertexConfig *)(CTilePt *)&config,&local_cc);
  }
  if ((segs[2] & 4) != 0) {
    local_c8 = kSW;
    Add__12VertexConfigRCQ212VertexConfig4Wall((VertexConfig *)(CTilePt *)&config,&local_c8);
  }
  if ((segs[2] & 0x10) != 0) {
    local_c4 = kW;
    Add__12VertexConfigRCQ212VertexConfig4Wall((VertexConfig *)(CTilePt *)&config,&local_c4);
  }
  if ((segs[3] & 2) != 0) {
    local_c0 = kSE;
    Add__12VertexConfigRCQ212VertexConfig4Wall((VertexConfig *)(CTilePt *)&config,&local_c0);
  }
  if ((segs[3] & 0x20) != 0) {
    local_bc = kS;
    Add__12VertexConfigRCQ212VertexConfig4Wall((VertexConfig *)(CTilePt *)&config,&local_bc);
  }
  __12VertexConfigRC12VertexConfig((VertexConfig *)local_b8,(VertexConfig *)(CTilePt *)&config);
  pCVar6 = local_ac;
  ___12VertexConfig((VertexConfig *)(CTilePt *)&config,2);
  uVar1 = (uchar)local_b8;
  if (pts != pCVar6) {
    do {
      pCVar6 = pCVar6 + -1;
      ___7CTilePt(pCVar6,0);
    } while (pts != pCVar6);
                    /* end of inlined section */
    uVar1 = (uchar)local_b8;
  }
  return (VertexConfig)uVar1;
}

static void __tcf_0() {
	CTilePt *last;
	CTilePt *first;
	CTilePt *pointer;
	
  CTilePt *pCVar1;
  CTilePt *this;
  
  pCVar1 = DAT_004d3e94;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  this = sStack_1026;
  if (sStack_1026 != DAT_004d3e94) {
    do {
      ___7CTilePt(this,2);
      this = this + 1;
    } while (this != pCVar1);
  }
  if ((sStack_1026 != (CTilePt *)0x0) && ((DAT_004d3e98 - (int)sStack_1026) * -0x55555555 != 0)) {
    free(sStack_1026);
  }
  return;
}

static void __tcf_1() {
	CTilePt *last;
	CTilePt *first;
	CTilePt *pointer;
	
  CTilePt *pCVar1;
  CTilePt *this;
  
  pCVar1 = DAT_004d3ea4;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
  this = sRoomList_1052;
  if (sRoomList_1052 != DAT_004d3ea4) {
    do {
      ___7CTilePt(this,2);
      this = this + 1;
    } while (this != pCVar1);
  }
  if ((sRoomList_1052 != (CTilePt *)0x0) &&
     ((DAT_004d3ea8 - (int)sRoomList_1052) * -0x55555555 != 0)) {
    free(sRoomList_1052);
  }
  return;
}

void cFixedWorldImpl::ComputeRooms(int inLevel) {
	Int worldSize;
	Int x;
	Int y;
	static vector<CTilePt,__malloc_alloc_template<0> > sStack;
	static vector<CTilePt,__malloc_alloc_template<0> > sRoomList;
	RoomManager *roomManager;
	UInt16 curRoomID;
	int level;
	int start;
	int stop;
	UInt16 nextRoomID;
	cArray<short unsigned int> &roomLayer;
	cArray<unsigned char> &floorLayer;
	cArray<unsigned char> &flagLayer;
	WallArray &wallLayer;
	int below;
	cArray<unsigned char> &belowFlagLayer;
	CTilePt *first;
	CTilePt *last;
	CTilePt *pointer;
	c2DArray<short unsigned int> *this;
	UInt16 fillElem;
	UInt16 *spot;
	Int cnt;
	cArray<unsigned char> *this;
	cArray<unsigned char> *this;
	_c2DArray *this;
	int y;
	int x;
	cArray<unsigned char> *this;
	CTilePt pt;
	cArray<short unsigned int> *this;
	int index;
	UInt16 *inRow;
	int index;
	cArray<short unsigned int> *this;
	int index;
	UInt16 *inRow;
	int index;
	bool isFloored;
	cArray<short unsigned int> *this;
	int index;
	UInt16 *inRow;
	int index;
	short unsigned int r1;
	short unsigned int r2;
	Sides s1;
	Sides s2;
	cArray<unsigned char> *this;
	CTilePt *first;
	CTilePt *last;
	CTilePt *pointer;
	CTilePt curTile;
	bool searchable_dirs[4];
	short unsigned int curTileRoom;
	bool inBounds;
	TileWallsSegment blockers[4];
	cArray<TileWallStorage> *this;
	cArray<short unsigned int> *this;
	cArray<short unsigned int> *this;
	cArray<short unsigned int> *this;
	cArray<short unsigned int> *this;
	cArray<short unsigned int> *this;
	cArray<short unsigned int> *this;
	cArray<short unsigned int> *this;
	cArray<short unsigned int> *this;
	cArray<short unsigned int> *this;
	cArray<short unsigned int> *this;
	cArray<short unsigned int> *this;
	cArray<short unsigned int> *this;
	cArray<short unsigned int> *this;
	short unsigned int r1;
	short unsigned int r2;
	Sides s1;
	Sides s2;
	cArray<short unsigned int> *this;
	cArray<short unsigned int> *this;
	int dir;
	CTilePt neighbor;
	short unsigned int neighborSeed;
	short unsigned int r1;
	short unsigned int r2;
	Sides s1;
	Sides s2;
	cArray<short unsigned int> *this;
	cArray<unsigned char> *this;
	cArray<TileWallStorage> *this;
	RoomImpl *curRoom;
	CTilePt curTile;
	int tx;
	int ty;
	int flags;
	TileWalls walls;
	cArray<unsigned char> *this;
	UInt8 *inRow;
	int index;
	int hdiag;
	int pt0x;
	int pt1x;
	int pt2x;
	cArray<unsigned char> *this;
	int index;
	UInt8 *inRow;
	cArray<unsigned char> *this;
	int index;
	UInt8 *inRow;
	cArray<unsigned char> *this;
	int index;
	UInt8 *inRow;
	cArray<unsigned char> *this;
	UInt8 *inRow;
	cArray<unsigned char> *this;
	int index;
	UInt8 *inRow;
	int index;
	cArray<TileWallStorage> *this;
	int index;
	TileWallStorage *inRow;
	int index;
	cArray<unsigned char> *this;
	int index;
	UInt8 *inRow;
	int index;
	cArray<TileWallStorage> *this;
	int index;
	TileWallStorage *inRow;
	int index;
	cArray<unsigned char> *this;
	UInt8 *inRow;
	cArray<TileWallStorage> *this;
	TileWallStorage *inRow;
	int index;
	cArray<unsigned char> *this;
	UInt8 *inRow;
	cArray<TileWallStorage> *this;
	TileWallStorage *inRow;
	int index;
	cArray<unsigned char> *this;
	UInt8 *inRow;
	int index;
	CTilePt pt;
	int flags;
	int adjacent;
	int i;
	cArray<unsigned char> *this;
	int index;
	UInt8 *inRow;
	int index;
	cArray<unsigned char> *this;
	cArray<unsigned char> *this;
	int index;
	UInt8 *inRow;
	int index;
	int xx;
	int yy;
	CTilePt tilept;
	int tile;
	cArray<unsigned char> *this;
	int xx;
	int yy;
	cArray<unsigned char> *this;
	cArray<unsigned char> *this;
	int index;
	UInt8 *inRow;
	int index;
	
  undefined *puVar1;
  short sVar2;
  ushort uVar3;
  cFixedWorld__vtable *pcVar4;
  cArray_short_unsigned_int_ *pcVar5;
  RoomManager__vtable *pRVar6;
  void *pvVar7;
  cArray_unsigned_char_ *pcVar8;
  WallManager__vtable *pWVar9;
  ulong *puVar10;
  bool bVar11;
  cFixedWorld *pcVar12;
  RoomManager__vtable **ppRVar13;
  CTilePt *pCVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  code *pcVar18;
  long lVar19;
  byte *pbVar20;
  Sides SVar21;
  undefined2 *puVar22;
  void **ppvVar23;
  undefined2 uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  undefined4 uVar28;
  CTilePt *pCVar29;
  undefined8 unaff_s0;
  int iVar30;
  undefined8 unaff_s1;
  int iVar31;
  undefined8 unaff_s2;
  TilePtDir inDir;
  undefined8 unaff_s3;
  byte bVar32;
  int iVar33;
  int *piVar34;
  undefined8 unaff_s4;
  int *piVar35;
  undefined8 unaff_s5;
  byte bVar36;
  int *piVar37;
  undefined8 unaff_s6;
  byte bVar38;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  short fillElem;
  undefined2 uStack_24e;
  CTilePt aCStack_240 [5];
  VertexConfig aVStack_230 [16];
  void *local_220;
  void *local_210;
  CTilePt neighbor;
  undefined auStack_1f0 [2];
  short local_1ee [7];
  CTilePt tilept;
  bool searchable_dirs [4];
  undefined local_1cc [4];
  undefined local_1c8 [8];
  undefined auStack_1c0 [2];
  ushort local_1be [7];
  TileWallsSegment blockers [4];
  CTilePt aCStack_1a0 [5];
  short r1;
  short r2;
  TileWalls walls;
  CTilePt aCStack_140 [5];
  byte local_130;
  undefined auStack_12c [4];
  undefined auStack_128 [4];
  undefined auStack_124 [4];
  undefined4 local_120;
  Sides s1;
  Sides s2;
  int tx;
  int ty;
  cFixedWorldImpl *local_10c;
  int local_108;
  int worldSize;
  int x;
  RoomManager *roomManager;
  int level;
  int stop;
  short nextRoomID;
  cArray_unsigned_char_ *floorLayer;
  cArray_unsigned_char_ *flagLayer;
  cArray_TileWallStorage_ *wallLayer;
  bool isFloored;
  bool inBounds;
  int flags;
  int pt2x;
  int local_d0;
  uint local_cc;
  int below;
  int local_c4;
  int local_c0;
  int local_bc;
  bool *local_b8;
  int local_b4;
  int local_b0;
  uint local_ac;
  CTilePt *local_a8;
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
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  pcVar4 = (this->field0_0x0).__vtable;
  local_10c = this;
  local_108 = inLevel;
  worldSize = (*(code *)pcVar4->GetFloor)
                        ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pcVar4->GetFloorLayer);
  if (__tmp_0_1027 == 0) {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    sStack_1026 = (CTilePt *)0x0;
    DAT_004d3e98 = (CTilePt *)0x0;
                    /* end of inlined section */
    __tmp_0_1027 = 1;
                    /* end of inlined section */
    DAT_004d3e94 = (CTilePt *)0x0;
    atexit(__tcf_0);
  }
  if (__tmp_1_1053 == 0) {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
    sRoomList_1052 = (CTilePt *)0x0;
    DAT_004d3ea8 = (CTilePt *)0x0;
                    /* end of inlined section */
    __tmp_1_1053 = 1;
                    /* end of inlined section */
    DAT_004d3ea4 = (CTilePt *)0x0;
    atexit(__tcf_1);
  }
  roomManager = GetRoomManager__11RoomManager();
  level = local_108;
  if (local_108 == 0) {
    stop = 1;
    (*(code *)roomManager->__vtable[1].PrintStats)
              ((int)&roomManager->__vtable +
               (int)*(short *)&roomManager->__vtable[1].AllRoomsScoreChanged,0);
    level = 1;
  }
  else {
    stop = local_108;
    (*(code *)roomManager->__vtable[1].PrintStats)
              ((int)&roomManager->__vtable +
               (int)*(short *)&roomManager->__vtable[1].AllRoomsScoreChanged,local_108);
  }
  if (level <= stop) {
    do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      pCVar14 = DAT_004d3e94;
                    /* end of inlined section */
      _nextRoomID = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      local_a8 = (CTilePt *)blockers;
      local_b4 = level + -1;
      local_c4 = worldSize + -1;
      local_ac = level ^ 1;
      local_b0 = level + 1;
      iVar31 = (int)DAT_004d3e94 - (int)sStack_1026;
      for (pCVar29 = sStack_1026; pCVar29 != pCVar14; pCVar29 = pCVar29 + 1) {
        ___7CTilePt(pCVar29,2);
      }
      _fillElem = (void *)CONCAT22((short)((uint)_fillElem >> 0x10),0xffff);
      DAT_004d3e94 = (CTilePt *)((int)DAT_004d3e94 - iVar31);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
      floorLayer = (cArray_unsigned_char_ *)local_10c->mFloorLayer;
      pcVar5 = local_10c->mRoomLayer;
      flagLayer = local_10c->mFlagLayer;
      wallLayer = (cArray_TileWallStorage_ *)local_10c->mWallLayer;
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
      iVar31 = (pcVar5->field0_0x0).field0_0x0.fxSize * (pcVar5->field0_0x0).field0_0x0.fySize;
      puVar22 = (undefined2 *)*(pcVar5->field0_0x0).field0_0x0.fData;
      while (iVar31 = iVar31 + -1, -1 < iVar31) {
        *puVar22 = 0xffff;
        puVar22 = puVar22 + 1;
      }
                    /* end of inlined section */
                    /* end of inlined section */
      local_130 = 0x28;
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
      iVar31 = (flagLayer->field0_0x0).field0_0x0.fxSize;
      iVar25 = 0;
      if (0 < iVar31) {
        do {
          iVar30 = 0;
          iVar33 = iVar25 + 1;
          if (0 < iVar31) {
            do {
              __7CTilePtiii(aCStack_240,iVar30,iVar25,0);
              iVar30 = iVar30 + 1;
              iVar16 = GetX__C7CTilePt(aCStack_240);
              iVar17 = GetY__C7CTilePt(aCStack_240);
              pbVar20 = (byte *)((int)(flagLayer->field0_0x0).field0_0x0.fData[iVar16] + iVar17);
              *pbVar20 = *pbVar20 & local_130;
              ___7CTilePt(aCStack_240,2);
            } while (iVar30 < iVar31);
          }
          iVar25 = iVar33;
        } while (iVar33 < iVar31);
      }
                    /* end of inlined section */
      x = 0;
      if (0 < worldSize) {
        do {
          iVar31 = 0;
          local_c0 = x + 1;
          if (0 < worldSize) {
            do {
              __7CTilePtiii((CTilePt *)&fillElem,x,iVar31,level);
              pcVar4 = (local_10c->field0_0x0).__vtable;
              sVar2 = *(short *)&pcVar4[1].HasWalls;
              pcVar12 = &local_10c->field0_0x0;
              (*(code *)pcVar4[1].GetRoom)
                        (aVStack_230,
                         (int)&(local_10c->field0_0x0).__vtable +
                         (int)*(short *)&pcVar4[1].SetWallStorage,&fillElem);
              (*(code *)pcVar4[1].GetWallStorage)
                        ((int)&pcVar12->__vtable + (int)sVar2,&fillElem,aVStack_230);
              ___12VertexConfig(aVStack_230,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
              iVar25 = iVar31 * 2;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
              local_220 = (pcVar5->field0_0x0).field0_0x0.fData[x];
                    /* end of inlined section */
              bVar15 = false;
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
              if ((0xfffc < *(ushort *)((int)local_220 + iVar25)) ||
                 (local_210 = (pcVar5->field0_0x0).field0_0x0.fData[x],
                 *(short *)((int)local_210 + iVar25) == -5)) {
                bVar15 = true;
                    /* end of inlined section */
              }
              local_bc = iVar31 + 1;
              if (bVar15) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                _neighbor = (pcVar5->field0_0x0).field0_0x0.fData[x];
                    /* end of inlined section */
                if (*(short *)((int)_neighbor + iVar25) != -5) {
LAB_00285728:
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                  iVar25 = GetX__C7CTilePt((CTilePt *)&fillElem);
                  iVar30 = GetY__C7CTilePt((CTilePt *)&fillElem);
                  pCVar14 = DAT_004d3ea4;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                  uVar26 = _nextRoomID | local_b4 << 10;
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                  _nextRoomID = _nextRoomID + 1 & 0xffff;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                  uVar26 = uVar26 & 0xffff;
                  _isFloored = (uint)(*(char *)((int)(floorLayer->field0_0x0).field0_0x0.fData
                                                     [iVar25] + iVar30) != '\0');
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                  local_bc = iVar31 + 1;
                  iVar31 = (int)DAT_004d3ea4 - (int)sRoomList_1052;
                  for (pCVar29 = sRoomList_1052; pCVar29 != pCVar14; pCVar29 = pCVar29 + 1) {
                    ___7CTilePt(pCVar29,2);
                  }
                  DAT_004d3ea4 = (CTilePt *)((int)DAT_004d3ea4 - iVar31);
                  if (DAT_004d3e94 == DAT_004d3e98) {
                    insert_aux__t6vector2Z7CTilePtZt23__malloc_alloc_template1i0P7CTilePtRC7CTilePt
                              ((vector_CTilePt___malloc_alloc_template_0___ *)&sStack_1026,
                               DAT_004d3e94,(CTilePt *)&fillElem);
                  }
                  else {
                    __7CTilePtRC7CTilePt(DAT_004d3e94,(CTilePt *)&fillElem);
                    DAT_004d3e94 = DAT_004d3e94 + 1;
                  }
                    /* end of inlined section */
                  while (((int)DAT_004d3e94 - (int)sStack_1026) * -0x55555555 != 0) {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    __7CTilePtRC7CTilePt(&tilept,DAT_004d3e94 + -1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    DAT_004d3e94 = DAT_004d3e94 + -1;
                    ___7CTilePt(DAT_004d3e94,2);
                    iVar31 = GetX__C7CTilePt(&tilept);
                    iVar25 = GetY__C7CTilePt(&tilept);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    pvVar7 = (wallLayer->field0_0x0).field0_0x0.fData[iVar31];
                    puVar1 = local_1cc + 3;
                    /* end of inlined section */
                    uVar27 = (uint)puVar1 & 7;
                    *(ulong *)(puVar1 + -uVar27) =
                         *(ulong *)(puVar1 + -uVar27) & -1L << (uVar27 + 1) * 8 |
                         DAT_003c08b8 >> (7 - uVar27) * 8;
                    _searchable_dirs = DAT_003c08b8;
                    puVar1 = local_1c8 + 7;
                    uVar27 = (uint)puVar1 & 7;
                    *(ulong *)(puVar1 + -uVar27) =
                         *(ulong *)(puVar1 + -uVar27) & -1L << (uVar27 + 1) * 8 |
                         DAT_003c08c0 >> (7 - uVar27) * 8;
                    local_1c8 = (undefined  [8])DAT_003c08c0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    pbVar20 = (byte *)((int)pvVar7 + iVar25 * 8);
                    iVar31 = GetX__C7CTilePt(&tilept);
                    iVar25 = GetY__C7CTilePt(&tilept);
                    /* end of inlined section */
                    uVar27 = (uint)*(ushort *)
                                    ((int)(pcVar5->field0_0x0).field0_0x0.fData[iVar31] + iVar25 * 2
                                    );
                    if (uVar27 == uVar26) {
LAB_00285b4c:
                      ___7CTilePt(&tilept,2);
                    }
                    else {
                      if (uVar27 == 0xfffc) {
LAB_00285c28:
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                        iVar31 = GetX__C7CTilePt(&tilept);
                        iVar25 = GetY__C7CTilePt(&tilept);
                    /* end of inlined section */
                        *(short *)((int)(pcVar5->field0_0x0).field0_0x0.fData[iVar31] + iVar25 * 2)
                             = (short)uVar26;
                      }
                      else {
                    /* end of inlined section */
                        if (uVar27 == 0xffff) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/tilewallstorage.h */
                    /* end of inlined section */
                          if ((*pbVar20 & 0x10) == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/tilewallstorage.h */
                    /* end of inlined section */
                            if ((*pbVar20 & 0x20) != 0) {
                    /* end of inlined section */
                              local_1c8 = (undefined  [8])((ulong)local_1c8._4_4_ << 0x20);
                              _searchable_dirs = _searchable_dirs & 0xffffffff;
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                              iVar31 = GetX__C7CTilePt(&tilept);
                              iVar25 = GetY__C7CTilePt(&tilept);
                              ppvVar23 = (pcVar5->field0_0x0).field0_0x0.fData;
                    /* end of inlined section */
                              uVar24 = 0xfffd;
                              goto LAB_00285960;
                            }
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                            iVar31 = GetX__C7CTilePt(&tilept);
                            iVar25 = GetY__C7CTilePt(&tilept);
                    /* end of inlined section */
                            *(undefined2 *)
                             ((int)(pcVar5->field0_0x0).field0_0x0.fData[iVar31] + iVar25 * 2) =
                                 0xfffc;
                          }
                          else {
                    /* end of inlined section */
                            local_1c8 = (undefined  [8])((ulong)local_1c8 & 0xffffffff);
                            _searchable_dirs = _searchable_dirs & 0xffffffff;
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                            iVar31 = GetX__C7CTilePt(&tilept);
                            iVar25 = GetY__C7CTilePt(&tilept);
                            ppvVar23 = (pcVar5->field0_0x0).field0_0x0.fData;
                            uVar24 = 0xfffe;
                    /* end of inlined section */
LAB_00285960:
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                            *(undefined2 *)((int)ppvVar23[iVar31] + iVar25 * 2) = uVar24;
                          }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                          if (DAT_004d3e94 == DAT_004d3e98) {
                            insert_aux__t6vector2Z7CTilePtZt23__malloc_alloc_template1i0P7CTilePtRC7CTilePt
                                      ((vector_CTilePt___malloc_alloc_template_0___ *)&sStack_1026,
                                       DAT_004d3e94,&tilept);
                          }
                          else {
                            __7CTilePtRC7CTilePt(DAT_004d3e94,&tilept);
                            DAT_004d3e94 = DAT_004d3e94 + 1;
                          }
                          if (DAT_004d3ea4 == DAT_004d3ea8) {
                            insert_aux__t6vector2Z7CTilePtZt23__malloc_alloc_template1i0P7CTilePtRC7CTilePt
                                      ((vector_CTilePt___malloc_alloc_template_0___ *)
                                       &sRoomList_1052,DAT_004d3ea4,&tilept);
                    /* end of inlined section */
                          }
                          else {
                            __7CTilePtRC7CTilePt(DAT_004d3ea4,&tilept);
                            DAT_004d3ea4 = DAT_004d3ea4 + 1;
                          }
                        }
                        else if (uVar27 == 0xfffe) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/tilewallstorage.h */
                    /* end of inlined section */
                          if ((*pbVar20 & 0x10) != 0) {
                            local_1c8 = (undefined  [8])((ulong)local_1c8 & 0xffffffff);
                            uVar28 = 4;
LAB_00285a50:
                            _searchable_dirs = _searchable_dirs & 0xffffffff;
                            pcVar18 = (code *)roomManager->__vtable[1].RoomLightingChanged;
                            iVar31 = (int)&roomManager->__vtable +
                                     (int)*(short *)&roomManager->__vtable[1].GetRoomCount;
                            goto LAB_00285a64;
                          }
                    /* inlined from c:/eor/src2/games/sims/MSrc/tilewallstorage.h */
                    /* end of inlined section */
                          if ((*pbVar20 & 0x20) != 0) {
                            _searchable_dirs = (ulong)(uint)local_1cc << 0x20;
                            local_1c8 = (undefined  [8])((ulong)local_1c8 & 0xffffffff);
                            uVar28 = 1;
                            pcVar18 = (code *)roomManager->__vtable[1].RoomLightingChanged;
                            iVar31 = (int)&roomManager->__vtable +
                                     (int)*(short *)&roomManager->__vtable[1].GetRoomCount;
                    /* end of inlined section */
                            goto LAB_00285a64;
                          }
                        }
                        else {
                          if (uVar27 == 0xfffd) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/tilewallstorage.h */
                    /* end of inlined section */
                            if ((*pbVar20 & 0x10) == 0) {
                              local_1c8 = (undefined  [8])((ulong)local_1c8._4_4_ << 0x20);
                              uVar28 = 3;
                    /* end of inlined section */
                              goto LAB_00285a50;
                            }
                            local_1c8 = (undefined  [8])((ulong)local_1c8._4_4_ << 0x20);
                            _searchable_dirs = (ulong)(uint)local_1cc << 0x20;
                            uVar28 = 2;
                            pcVar18 = (code *)roomManager->__vtable[1].RoomLightingChanged;
                            iVar31 = (int)&roomManager->__vtable +
                                     (int)*(short *)&roomManager->__vtable[1].GetRoomCount;
                    /* end of inlined section */
LAB_00285a64:
                            lVar19 = (*pcVar18)(iVar31,&tilept,uVar26,uVar28);
                          }
                          else {
                            if (uVar27 != 0xfffb) goto LAB_00285c94;
                            (*(code *)roomManager->__vtable[1].ComputeCutaway)
                                      ((int)&roomManager->__vtable +
                                       (int)*(short *)&roomManager->__vtable[1].ComputeRooms,&tilept
                                       ,auStack_1c0,local_1be,auStack_124,&local_120);
                            if (local_1be[0] == uVar26) goto LAB_00285b4c;
                            if (local_1be[0] == 0xffff) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                              if (DAT_004d3ea4 == DAT_004d3ea8) {
                                insert_aux__t6vector2Z7CTilePtZt23__malloc_alloc_template1i0P7CTilePtRC7CTilePt
                                          ((vector_CTilePt___malloc_alloc_template_0___ *)
                                           &sRoomList_1052,DAT_004d3ea4,&tilept);
                              }
                              else {
                                __7CTilePtRC7CTilePt(DAT_004d3ea4,&tilept);
                                DAT_004d3ea4 = DAT_004d3ea4 + 1;
                              }
                            }
                            switch(local_120) {
                            case 1:
                              _searchable_dirs = (ulong)(uint)local_1cc << 0x20;
                              local_1c8 = (undefined  [8])((ulong)local_1c8 & 0xffffffff);
                              break;
                            case 2:
                              local_1c8 = (undefined  [8])((ulong)local_1c8._4_4_ << 0x20);
                              _searchable_dirs = (ulong)(uint)local_1cc << 0x20;
                              break;
                            case 3:
                              local_1c8 = (undefined  [8])((ulong)local_1c8._4_4_ << 0x20);
                              _searchable_dirs = _searchable_dirs & 0xffffffff;
                              break;
                            case 4:
                              _searchable_dirs = _searchable_dirs & 0xffffffff;
                              local_1c8 = (undefined  [8])((ulong)local_1c8 & 0xffffffff);
                            }
                            lVar19 = (*(code *)roomManager->__vtable[1].RoomLightingChanged)
                                               ((int)&roomManager->__vtable +
                                                (int)*(short *)&roomManager->__vtable[1].
                                                                GetRoomCount,&tilept,uVar26,
                                                local_120);
                          }
                          if (lVar19 == 0) goto LAB_00285c28;
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                          iVar31 = GetX__C7CTilePt(&tilept);
                          iVar25 = GetY__C7CTilePt(&tilept);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                          *(undefined2 *)
                           ((int)(pcVar5->field0_0x0).field0_0x0.fData[iVar31] + iVar25 * 2) =
                               0xfffb;
                        }
                      }
LAB_00285c94:
                      inDir = kNE;
                      pcVar4 = (local_10c->field0_0x0).__vtable;
                      uVar27 = (*(code *)pcVar4->SetWall)
                                         ((int)&(local_10c->field0_0x0).__vtable +
                                          (int)*(short *)&pcVar4->GetWall,&tilept);
                      _inBounds = uVar27 ^ 1;
                      local_b8 = searchable_dirs;
                      uVar27 = (int)blockers + 7U & 7;
                      puVar10 = (ulong *)(((int)blockers + 7U) - uVar27);
                      *puVar10 = *puVar10 & -1L << (uVar27 + 1) * 8 |
                                 DAT_003c08c8 >> (7 - uVar27) * 8;
                      blockers._0_8_ = DAT_003c08c8;
                      uVar27 = (int)blockers + 0xfU & 7;
                      puVar10 = (ulong *)(((int)blockers + 0xfU) - uVar27);
                      *puVar10 = *puVar10 & -1L << (uVar27 + 1) * 8 |
                                 DAT_003c08d0 >> (7 - uVar27) * 8;
                      blockers._8_8_ = DAT_003c08d0;
                      iVar31 = 0;
                      do {
                        if (*(int *)(local_b8 + iVar31) != 0) {
                          __7CTilePt9TilePtDiri(aCStack_1a0,inDir,0);
                          __pl__C7CTilePtRC7CTilePt(&neighbor,&tilept);
                          ___7CTilePt(aCStack_1a0,2);
                          if ((_inBounds != 0) ||
                             (pcVar4 = (local_10c->field0_0x0).__vtable,
                             lVar19 = (*(code *)pcVar4->HasWalls)
                                                ((int)&(local_10c->field0_0x0).__vtable +
                                                 (int)*(short *)&pcVar4->HasWalls,&neighbor),
                             lVar19 == 0)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                            iVar25 = GetX__C7CTilePt(&neighbor);
                            iVar30 = GetY__C7CTilePt(&neighbor);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                            uVar3 = *(ushort *)
                                     ((int)(pcVar5->field0_0x0).field0_0x0.fData[iVar25] +
                                     iVar30 * 2);
                            if (0xfffa < uVar3) {
                              s1 = kNone;
                              r2 = -1;
                              r1 = -1;
                              s2 = kNone;
                              if (uVar3 == 0xfffb) {
                                (*(code *)roomManager->__vtable[1].ComputeCutaway)
                                          ((int)&roomManager->__vtable +
                                           (int)*(short *)&roomManager->__vtable[1].ComputeRooms,
                                           &neighbor,&r1,&r2,&s1,&s2);
                              }
                              if (level != 1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                                iVar25 = GetX__C7CTilePt(&neighbor);
                                iVar30 = GetY__C7CTilePt(&neighbor);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                                if ((*(char *)((int)(floorLayer->field0_0x0).field0_0x0.fData
                                                    [iVar25] + iVar30) != '\0') != _isFloored)
                                goto LAB_00285fd8;
                              }
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                              iVar25 = GetX__C7CTilePt(&neighbor);
                              iVar30 = GetY__C7CTilePt(&neighbor);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                              bVar36 = *(byte *)((int)(wallLayer->field0_0x0).field0_0x0.fData
                                                      [iVar25] + iVar30 * 8);
                              if (((uint)bVar36 & *(uint *)(&local_a8->mX + iVar31)) == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/tilewallstorage.h */
                    /* end of inlined section */
                                if ((bVar36 & 0x30) != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/tilewallstorage.h */
                    /* end of inlined section */
                                  if ((bVar36 & 0x10) == 0) {
                                    if ((int)inDir < 3) {
                                      if ((int)inDir < 1) {
                                        if (inDir == kNE) goto LAB_00285f58;
                                      }
                                      else if ((uVar3 != 0xffff) && (uVar3 != 0xfffe)) {
                                        if (uVar3 != 0xfffb) goto LAB_00285fd8;
                                        SVar21 = kRight;
                                        goto LAB_00285fac;
                                      }
                                    }
                                    else if (inDir == kSE) {
LAB_00285f58:
                                      if ((uVar3 != 0xffff) && (uVar3 != 0xfffd)) {
                                        if (uVar3 == 0xfffb) {
                                          SVar21 = kLeft;
                                          goto LAB_00285fac;
                                        }
                                        goto LAB_00285fd8;
                                      }
                                    }
                                  }
                                  else if (inDir == kSW) {
LAB_00285f04:
                                    if ((uVar3 != 0xffff) && (uVar3 != 0xfffd)) {
                                      if (uVar3 != 0xfffb) goto LAB_00285fd8;
                                      SVar21 = kAbove;
LAB_00285fac:
                                      if (((s1 != SVar21) || (r1 != -1)) &&
                                         ((s2 != SVar21 || (r2 != -1)))) goto LAB_00285fd8;
                                    }
                                  }
                                  else if ((int)inDir < 2) {
                                    if (inDir == kNE) {
LAB_00285edc:
                                      if ((uVar3 != 0xffff) && (uVar3 != 0xfffe)) {
                                        if (uVar3 != 0xfffb) goto LAB_00285fd8;
                                        SVar21 = kBelow;
                                        goto LAB_00285fac;
                                      }
                                    }
                                  }
                                  else {
                                    if (inDir == kNW) goto LAB_00285edc;
                                    if (inDir == kSE) goto LAB_00285f04;
                                  }
                                }
                                if (DAT_004d3e94 == DAT_004d3e98) {
                                  insert_aux__t6vector2Z7CTilePtZt23__malloc_alloc_template1i0P7CTilePtRC7CTilePt
                                            ((vector_CTilePt___malloc_alloc_template_0___ *)
                                             &sStack_1026,DAT_004d3e94,&neighbor);
                                }
                                else {
                                  __7CTilePtRC7CTilePt(DAT_004d3e94,&neighbor);
                                  DAT_004d3e94 = DAT_004d3e94 + 1;
                                }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                                pcVar4 = (local_10c->field0_0x0).__vtable;
                                (*(code *)pcVar4[1].OutOfBounds)
                                          ((int)&(local_10c->field0_0x0).__vtable +
                                           (int)*(short *)&pcVar4[1].OutOfGrid,&neighbor);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                                if (DAT_004d3ea4 == DAT_004d3ea8) {
                                  insert_aux__t6vector2Z7CTilePtZt23__malloc_alloc_template1i0P7CTilePtRC7CTilePt
                                            ((vector_CTilePt___malloc_alloc_template_0___ *)
                                             &sRoomList_1052,DAT_004d3ea4,&neighbor);
                                }
                                else {
                                  __7CTilePtRC7CTilePt(DAT_004d3ea4,&neighbor);
                                  DAT_004d3ea4 = DAT_004d3ea4 + 1;
                                }
                    /* end of inlined section */
                                ___7CTilePt(&neighbor,2);
                                goto LAB_00286098;
                              }
                            }
                          }
LAB_00285fd8:
                          ___7CTilePt(&neighbor,2);
                        }
LAB_00286098:
                        inDir = inDir + kSW;
                        iVar31 = inDir * 4;
                      } while ((int)inDir < 4);
                      ___7CTilePt(&tilept,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    }
                  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                  if (((int)DAT_004d3ea4 - (int)sRoomList_1052) * -0x55555555 == 0) {
                    _nextRoomID = _nextRoomID - 1 & 0xffff;
                  }
                  else {
                    lVar19 = (*(code *)roomManager->__vtable->OffsetWorld)
                                       ((int)&roomManager->__vtable +
                                        (int)*(short *)&roomManager->__vtable->UpdateRooms,uVar26);
                    if (lVar19 == 0) {
                      __ls__7CTGDumpPCc(&ctgDump,"Room manager return a NULL room...\n");
                      goto LAB_0028613c;
                    }
                    AbsorbNewRoomList__8RoomImplRCt6vector2Z7CTilePtZt23__malloc_alloc_template1i0
                              ((RoomImpl *)lVar19,
                               (vector_CTilePt___malloc_alloc_template_0___ *)&sRoomList_1052);
                  }
                  goto LAB_00286170;
                }
                pRVar6 = roomManager->__vtable;
                sVar2 = *(short *)&pRVar6[1].ComputeRooms;
                ppRVar13 = &roomManager->__vtable;
                __7CTilePtiii(&tilept,x,iVar31,level);
                (*(code *)pRVar6[1].ComputeCutaway)
                          ((int)ppRVar13 + (int)sVar2,&tilept,auStack_1f0,local_1ee,auStack_12c,
                           auStack_128);
                ___7CTilePt(&tilept,2);
                if (local_1ee[0] == -1) goto LAB_00285728;
LAB_0028613c:
                ___7CTilePt((CTilePt *)&fillElem,2);
              }
              else {
LAB_00286170:
                ___7CTilePt((CTilePt *)&fillElem,2);
              }
              iVar31 = local_bc;
            } while (local_bc < worldSize);
          }
          x = local_c0;
        } while (local_c0 < worldSize);
      }
      __7CTilePtiii(local_a8,0,0,level);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      if (DAT_004d3e94 == DAT_004d3e98) {
        insert_aux__t6vector2Z7CTilePtZt23__malloc_alloc_template1i0P7CTilePtRC7CTilePt
                  ((vector_CTilePt___malloc_alloc_template_0___ *)&sStack_1026,DAT_004d3e94,local_a8
                  );
      }
      else {
        __7CTilePtRC7CTilePt(DAT_004d3e94,local_a8);
        DAT_004d3e94 = DAT_004d3e94 + 1;
      }
                    /* end of inlined section */
      ___7CTilePt(local_a8,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
      iVar31 = (int)DAT_004d3e94 - (int)sStack_1026;
                    /* end of inlined section */
      while (iVar31 * -0x55555555 != 0) {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
        __7CTilePtRC7CTilePt((CTilePt *)blockers,DAT_004d3e94 + -1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        DAT_004d3e94 = DAT_004d3e94 + -1;
        ___7CTilePt(DAT_004d3e94,2);
                    /* end of inlined section */
        Get__C7CTilePtPiT1((CTilePt *)blockers,&tx,&ty);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
        _tilept = (flagLayer->field0_0x0).field0_0x0.fData[tx];
                    /* end of inlined section */
        flags = (int)*(byte *)((int)_tilept + ty);
        if ((*(byte *)((int)_tilept + ty) & 2) == 0) {
          pcVar4 = (local_10c->field0_0x0).__vtable;
          flags = flags | 6;
          (*(code *)pcVar4->ComputeArchValue)
                    (&walls,(int)&(local_10c->field0_0x0).__vtable +
                            (int)*(short *)&pcVar4->ComputeRooms,local_a8);
          bVar15 = HasDiagonalNotFence__C9TileWalls(&walls);
          if (bVar15) {
            bVar15 = HasWall__C9TileWalls16TileWallsSegment(&walls,kHorizDiag);
            iVar25 = ty;
            iVar31 = tx;
            if (bVar15) {
              uVar26 = ty + 1;
            }
            else {
              uVar26 = ty - 1;
            }
            local_d0 = ty + 1;
            pt2x = tx + -1;
            if (bVar15) {
              flags = flags | 0x40;
              local_d0 = ty + -1;
            }
            else {
              flags = flags | 0x80;
            }
            if ((int)(uVar26 | local_10c->fSize - (uVar26 + 1)) < 0) {
              bVar36 = 2;
            }
            else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
              _tilept = (flagLayer->field0_0x0).field0_0x0.fData[tx];
                    /* end of inlined section */
              bVar36 = *(byte *)((int)_tilept + uVar26) & 2;
            }
                    /* end of inlined section */
            if ((tx | local_10c->fSize - (tx + 1)) < 0) {
              bVar32 = 2;
            }
            else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
              _tilept = (flagLayer->field0_0x0).field0_0x0.fData[tx + 1];
                    /* end of inlined section */
              bVar32 = *(byte *)((int)_tilept + ty) & 2;
            }
                    /* end of inlined section */
            if ((tx | local_10c->fSize - (tx + 1)) < 0) {
              local_cc = 2;
            }
            else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
              _tilept = (flagLayer->field0_0x0).field0_0x0.fData[pt2x];
                    /* end of inlined section */
              local_cc = *(byte *)((int)_tilept + ty) & 2;
            }
                    /* end of inlined section */
            if ((int)(uVar26 | local_10c->fSize - (uVar26 + 1)) < 0) {
              bVar38 = 2;
            }
            else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
              _tilept = (flagLayer->field0_0x0).field0_0x0.fData[tx];
                    /* end of inlined section */
              bVar38 = *(byte *)((int)_tilept + local_d0) & 2;
            }
                    /* end of inlined section */
            if (bVar36 == 0) {
LAB_002864fc:
              if (bVar32 != 0) goto LAB_00286504;
            }
            else {
              if (bVar32 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                __7CTilePtiii(&tilept,tx + 1,ty,level);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                if (DAT_004d3e94 == DAT_004d3e98) {
                  insert_aux__t6vector2Z7CTilePtZt23__malloc_alloc_template1i0P7CTilePtRC7CTilePt
                            ((vector_CTilePt___malloc_alloc_template_0___ *)&sStack_1026,
                             DAT_004d3e94,&tilept);
                }
                else {
                  __7CTilePtRC7CTilePt(DAT_004d3e94,&tilept);
                  DAT_004d3e94 = DAT_004d3e94 + 1;
                }
                    /* end of inlined section */
                ___7CTilePt(&tilept,2);
                goto LAB_002864fc;
              }
LAB_00286504:
              if (bVar36 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                __7CTilePtiii(&tilept,iVar31,uVar26,level);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                if (DAT_004d3e94 == DAT_004d3e98) {
                  insert_aux__t6vector2Z7CTilePtZt23__malloc_alloc_template1i0P7CTilePtRC7CTilePt
                            ((vector_CTilePt___malloc_alloc_template_0___ *)&sStack_1026,
                             DAT_004d3e94,&tilept);
                }
                else {
                  __7CTilePtRC7CTilePt(DAT_004d3e94,&tilept);
                  DAT_004d3e94 = DAT_004d3e94 + 1;
                }
                    /* end of inlined section */
                ___7CTilePt(&tilept,2);
              }
            }
            if (local_cc == 0) {
LAB_002865e0:
              if (bVar38 == 0) goto LAB_00286b14;
            }
            else if (bVar38 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
              __7CTilePtiii(&tilept,iVar31,local_d0,level);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
              if (DAT_004d3e94 == DAT_004d3e98) {
                insert_aux__t6vector2Z7CTilePtZt23__malloc_alloc_template1i0P7CTilePtRC7CTilePt
                          ((vector_CTilePt___malloc_alloc_template_0___ *)&sStack_1026,DAT_004d3e94,
                           &tilept);
              }
              else {
                __7CTilePtRC7CTilePt(DAT_004d3e94,&tilept);
                DAT_004d3e94 = DAT_004d3e94 + 1;
              }
                    /* end of inlined section */
              ___7CTilePt(&tilept,2);
              goto LAB_002865e0;
            }
            if (local_cc == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                    /* end of inlined section */
              __7CTilePtiii(&tilept,pt2x,iVar25,level);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
              if (DAT_004d3e94 == DAT_004d3e98) {
                insert_aux__t6vector2Z7CTilePtZt23__malloc_alloc_template1i0P7CTilePtRC7CTilePt
                          ((vector_CTilePt___malloc_alloc_template_0___ *)&sStack_1026,DAT_004d3e94,
                           &tilept);
              }
              else {
                __7CTilePtRC7CTilePt(DAT_004d3e94,&tilept);
                DAT_004d3e94 = DAT_004d3e94 + 1;
              }
                    /* end of inlined section */
              ___7CTilePt(&tilept,2);
            }
          }
          else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
            if (((0 < tx) &&
                (_tilept = (flagLayer->field0_0x0).field0_0x0.fData[tx + -1],
                (*(byte *)((int)_tilept + ty) & 2) == 0)) &&
               (bVar15 = HasWallNotFence__C9TileWalls16TileWallsSegment(&walls,kTopLeft), !bVar15))
            {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
              _fillElem = (wallLayer->field0_0x0).field0_0x0.fData[tx + -1];
              pbVar20 = (byte *)((int)_fillElem + ty * 8);
              if ((*pbVar20 & 0x30) == 0) {
LAB_00286714:
                bVar11 = false;
              }
              else {
                bVar36 = pbVar20[3];
                if (((bVar36 == 2) || (bVar36 == 0xc)) ||
                   ((bVar36 == 0xd || (bVar15 = false, bVar36 == 0xe)))) {
                  bVar15 = true;
                }
                bVar11 = true;
                if (bVar15) goto LAB_00286714;
              }
                    /* end of inlined section */
              if (!bVar11) {
                __7CTilePtiii(aCStack_140,tx + -1,ty,level);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                if (DAT_004d3e94 == DAT_004d3e98) {
                  insert_aux__t6vector2Z7CTilePtZt23__malloc_alloc_template1i0P7CTilePtRC7CTilePt
                            ((vector_CTilePt___malloc_alloc_template_0___ *)&sStack_1026,
                             DAT_004d3e94,aCStack_140);
                }
                else {
                  __7CTilePtRC7CTilePt(DAT_004d3e94,aCStack_140);
                  DAT_004d3e94 = DAT_004d3e94 + 1;
                }
                    /* end of inlined section */
                ___7CTilePt(aCStack_140,2);
              }
            }
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
            if (((tx < local_c4) &&
                (_tilept = (flagLayer->field0_0x0).field0_0x0.fData[tx + 1],
                (*(byte *)((int)_tilept + ty) & 2) == 0)) &&
               (bVar15 = HasWallNotFence__C9TileWalls16TileWallsSegment(&walls,kBottomRight),
               !bVar15)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
              _fillElem = (wallLayer->field0_0x0).field0_0x0.fData[tx + 1];
              pbVar20 = (byte *)((int)_fillElem + ty * 8);
              if ((*pbVar20 & 0x30) == 0) {
LAB_00286848:
                bVar11 = false;
              }
              else {
                bVar36 = pbVar20[3];
                if ((((bVar36 == 2) || (bVar36 == 0xc)) || (bVar36 == 0xd)) ||
                   (bVar15 = false, bVar36 == 0xe)) {
                  bVar15 = true;
                }
                bVar11 = true;
                if (bVar15) goto LAB_00286848;
              }
                    /* end of inlined section */
              if (!bVar11) {
                __7CTilePtiii(aCStack_140,tx + 1,ty,level);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                if (DAT_004d3e94 == DAT_004d3e98) {
                  insert_aux__t6vector2Z7CTilePtZt23__malloc_alloc_template1i0P7CTilePtRC7CTilePt
                            ((vector_CTilePt___malloc_alloc_template_0___ *)&sStack_1026,
                             DAT_004d3e94,aCStack_140);
                }
                else {
                  __7CTilePtRC7CTilePt(DAT_004d3e94,aCStack_140);
                  DAT_004d3e94 = DAT_004d3e94 + 1;
                }
                    /* end of inlined section */
                ___7CTilePt(aCStack_140,2);
              }
            }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
            if (((0 < ty) &&
                (_tilept = (flagLayer->field0_0x0).field0_0x0.fData[tx],
                (*(byte *)((int)_tilept + ty + -1) & 2) == 0)) &&
               (bVar15 = HasWallNotFence__C9TileWalls16TileWallsSegment(&walls,kTopRight), !bVar15))
            {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
              _fillElem = (wallLayer->field0_0x0).field0_0x0.fData[tx];
              pbVar20 = (byte *)((int)_fillElem + (ty + -1) * 8);
              if ((*pbVar20 & 0x30) == 0) {
LAB_00286970:
                bVar11 = false;
              }
              else {
                bVar36 = pbVar20[3];
                if (((bVar36 == 2) || (bVar36 == 0xc)) ||
                   ((bVar36 == 0xd || (bVar15 = false, bVar36 == 0xe)))) {
                  bVar15 = true;
                }
                bVar11 = true;
                if (bVar15) goto LAB_00286970;
              }
                    /* end of inlined section */
              if (!bVar11) {
                __7CTilePtiii(aCStack_140,tx,ty + -1,level);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                if (DAT_004d3e94 == DAT_004d3e98) {
                  insert_aux__t6vector2Z7CTilePtZt23__malloc_alloc_template1i0P7CTilePtRC7CTilePt
                            ((vector_CTilePt___malloc_alloc_template_0___ *)&sStack_1026,
                             DAT_004d3e94,aCStack_140);
                }
                else {
                  __7CTilePtRC7CTilePt(DAT_004d3e94,aCStack_140);
                  DAT_004d3e94 = DAT_004d3e94 + 1;
                }
                    /* end of inlined section */
                ___7CTilePt(aCStack_140,2);
              }
            }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
            if (((ty < local_c4) &&
                (_tilept = (flagLayer->field0_0x0).field0_0x0.fData[tx],
                (*(byte *)((int)_tilept + ty + 1) & 2) == 0)) &&
               (bVar15 = HasWallNotFence__C9TileWalls16TileWallsSegment(&walls,kBottomLeft), !bVar15
               )) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
              _fillElem = (wallLayer->field0_0x0).field0_0x0.fData[tx];
              pbVar20 = (byte *)((int)_fillElem + (ty + 1) * 8);
              if ((*pbVar20 & 0x30) == 0) {
LAB_00286aa0:
                bVar11 = false;
              }
              else {
                bVar36 = pbVar20[3];
                if (((bVar36 == 2) || (bVar36 == 0xc)) ||
                   ((bVar36 == 0xd || (bVar15 = false, bVar36 == 0xe)))) {
                  bVar15 = true;
                }
                bVar11 = true;
                if (bVar15) goto LAB_00286aa0;
              }
                    /* end of inlined section */
              if (!bVar11) {
                __7CTilePtiii(aCStack_140,tx,ty + 1,level);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
                if (DAT_004d3e94 == DAT_004d3e98) {
                  insert_aux__t6vector2Z7CTilePtZt23__malloc_alloc_template1i0P7CTilePtRC7CTilePt
                            ((vector_CTilePt___malloc_alloc_template_0___ *)&sStack_1026,
                             DAT_004d3e94,aCStack_140);
                }
                else {
                  __7CTilePtRC7CTilePt(DAT_004d3e94,aCStack_140);
                  DAT_004d3e94 = DAT_004d3e94 + 1;
                }
                    /* end of inlined section */
                ___7CTilePt(aCStack_140,2);
              }
            }
          }
LAB_00286b14:
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
          _tilept = (flagLayer->field0_0x0).field0_0x0.fData[tx];
                    /* end of inlined section */
          *(char *)((int)_tilept + ty) = (char)flags;
          ___9TileWalls(&walls,2);
          ___7CTilePt(local_a8,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Vector.h */
        }
        else {
          ___7CTilePt(local_a8,2);
        }
        iVar31 = (int)DAT_004d3e94 - (int)sStack_1026;
                    /* end of inlined section */
      }
      below = 1;
      if (local_ac != 0) {
        below = local_b4;
      }
      x = 1;
      pcVar8 = local_10c->mFlagLayer;
      if (1 < local_c4) {
        do {
          iVar31 = x;
          iVar25 = 1;
          local_c0 = x + 1;
          if (1 < local_c4) {
            do {
              __7CTilePtiii(local_a8,x,iVar25,below);
              if (level == 1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                ppvVar23 = (flagLayer->field0_0x0).field0_0x0.fData;
                    /* end of inlined section */
LAB_00286c68:
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                local_bc = iVar25 + 1;
                _tilept = ppvVar23[iVar31];
                    /* end of inlined section */
                *(byte *)((int)_tilept + iVar25) = *(byte *)((int)_tilept + iVar25) | 1;
                ___7CTilePt(local_a8,2);
              }
              else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                iVar30 = GetX__C7CTilePt(local_a8);
                iVar33 = GetY__C7CTilePt(local_a8);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                if ((*(byte *)((int)(pcVar8->field0_0x0).field0_0x0.fData[iVar30] + iVar33) & 0xc)
                    != 4) {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                  ppvVar23 = (flagLayer->field0_0x0).field0_0x0.fData;
                    /* end of inlined section */
                  goto LAB_00286c68;
                }
                local_bc = iVar25 + 1;
                bVar15 = false;
                iVar30 = 0;
                if (0 < num_adjacent_offsets) {
                  piVar35 = adjacent_yoffsets;
                  piVar34 = adjacent_xoffsets;
                  do {
                    uVar26 = x + *piVar34;
                    if (-1 < (int)(uVar26 | local_10c->fSize - (uVar26 + 1))) {
                      uVar27 = iVar25 + *piVar35;
                      if (-1 < (int)(uVar27 | local_10c->fSize - (uVar27 + 1))) {
                        __7CTilePtiii(&tilept,uVar26,uVar27,level);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                        iVar33 = GetX__C7CTilePt(&tilept);
                        iVar16 = GetY__C7CTilePt(&tilept);
                    /* end of inlined section */
                        if (*(char *)((int)(floorLayer->field0_0x0).field0_0x0.fData[iVar33] +
                                     iVar16) != '\0') {
                          bVar15 = true;
                          ___7CTilePt(&tilept,2);
                          break;
                        }
                        ___7CTilePt(&tilept,2);
                      }
                    }
                    iVar30 = iVar30 + 1;
                    piVar35 = piVar35 + 1;
                    piVar34 = piVar34 + 1;
                  } while (iVar30 < num_adjacent_offsets);
                }
                pCVar29 = local_a8;
                if (bVar15) {
                  iVar30 = 0;
                  if (0 < num_support_offsets) {
                    piVar37 = support_yoffsets;
                    piVar35 = support_columnflags;
                    piVar34 = support_xoffsets;
                    do {
                      uVar26 = x + *piVar34;
                      if ((-1 < (int)(uVar26 | local_10c->fSize - (uVar26 + 1))) &&
                         (uVar27 = iVar25 + *piVar37,
                         -1 < (int)(uVar27 | local_10c->fSize - (uVar27 + 1)))) {
                        SetX__7CTilePti(pCVar29,uVar26);
                        SetY__7CTilePti(pCVar29,uVar27);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                        iVar33 = GetX__C7CTilePt(pCVar29);
                        iVar16 = GetY__C7CTilePt(pCVar29);
                    /* end of inlined section */
                        bVar36 = *(byte *)((int)(pcVar8->field0_0x0).field0_0x0.fData[iVar33] +
                                          iVar16);
                        if (((bVar36 & 4) == 0) || (((bVar36 & 8) != 0 && (*piVar35 != 0)))) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                          _tilept = (flagLayer->field0_0x0).field0_0x0.fData[iVar31];
                    /* end of inlined section */
                          *(byte *)((int)_tilept + iVar25) = *(byte *)((int)_tilept + iVar25) | 1;
                          break;
                        }
                      }
                      iVar30 = iVar30 + 1;
                      piVar35 = piVar35 + 1;
                      piVar37 = piVar37 + 1;
                      piVar34 = piVar34 + 1;
                    } while (iVar30 < num_support_offsets);
                  }
                  ___7CTilePt(local_a8,2);
                }
                else {
                  ___7CTilePt(local_a8,2);
                }
              }
              iVar25 = local_bc;
            } while (local_bc < local_c4);
          }
          x = local_c0;
        } while (local_c0 < local_c4);
      }
      level = local_b0;
    } while (local_b0 <= stop);
  }
  pWVar9 = local_10c->mWallManager->__vtable;
  (*(code *)pWVar9->AsynchronousRebuild)
            ((int)&local_10c->mWallManager->__vtable + (int)*(short *)&pWVar9->CheckWallConsistency,
             local_108);
  GlobalDispatch__Fsi(0xef,local_108);
  return;
}

int cFixedWorldImpl::ComputeArchValue(bool *hasHouse) {
	int total;
	int wallTotal;
	int size;
	CTilePt pt;
	bool done;
	TileWalls tw;
	TileWallsSegment seg;
	FloorPattern floor;
	WallStyle style;
	WallStyle in;
	
  FloorSet *pFVar1;
  WallSet *pWVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  TileWallsSegment inSeg;
  WallStyle style;
  WallPattern WVar6;
  FloorPattern FVar7;
  int iVar8;
  ulong uVar9;
  cFixedWorld__vtable *pcVar10;
  DiagonalSideSelector inSelector;
  undefined4 uVar11;
  int iVar12;
  CTilePt pt;
  TileWalls tw;
  int wallTotal;
  int size;
  bool done;
  
  iVar12 = 0;
  *(undefined4 *)hasHouse = 0;
  wallTotal = 0;
  bVar3 = false;
  pcVar10 = (this->field0_0x0).__vtable;
  iVar5 = (*(code *)pcVar10->GetFloor)
                    ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pcVar10->GetFloorLayer);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/../esrc/global.h */
  pFVar1 = _5Globs_pEORGlobals->_pFloorSet;
  pWVar2 = _5Globs_pEORGlobals->_pWallSet;
                    /* end of inlined section */
  __7CTilePtiii(&pt,0,0,1);
  pcVar10 = (this->field0_0x0).__vtable;
  do {
    uVar9 = (*(code *)pcVar10[1].GetFloorLayer)
                      ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pcVar10[1].OutOfGrid,&pt)
    ;
    if ((uVar9 & 0x20) == 0) {
      pcVar10 = (this->field0_0x0).__vtable;
      uVar11 = 0;
      (*(code *)pcVar10->ComputeArchValue)
                (&tw,(int)&(this->field0_0x0).__vtable + (int)*(short *)&pcVar10->ComputeRooms,&pt);
      if ((*(int *)hasHouse != 0) || (bVar4 = HasWall__C9TileWalls(&tw), bVar4)) {
        uVar11 = 1;
      }
      *(undefined4 *)hasHouse = uVar11;
      inSeg = First__C9TileWalls(&tw);
      if (inSeg == kNoWalls) {
        pcVar10 = (this->field0_0x0).__vtable;
      }
      else {
        do {
          style = GetStyle__C9TileWalls16TileWallsSegment(&tw,inSeg);
          iVar8 = GetWallPrice__F9WallStyle(style);
                    /* inlined from c:/eor/src2/games/sims/MSrc/wallStyles.h */
                    /* end of inlined section */
          wallTotal = wallTotal + iVar8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/wallStyles.h */
          if ((style == kNormalStyle) ||
             (((bVar4 = true, style != kCutawayTransitionLeft && (style != kCutawayTransitionRight))
              && (bVar4 = false, style == kCutawayTransitionThickLeft)))) {
            bVar4 = true;
          }
                    /* end of inlined section */
          if (bVar4) {
            WVar6 = GetPattern__C9TileWalls16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                              (&tw,inSeg,kNotSpecified);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
            iVar12 = iVar12 + (pWVar2->field0_0x0).pData[WVar6]->cost;
          }
          inSeg = Next__C9TileWalls16TileWallsSegment(&tw,inSeg);
        } while (inSeg != kNoWalls);
        pcVar10 = (this->field0_0x0).__vtable;
      }
      FVar7 = (*(code *)pcVar10->GetVertexConfig)
                        ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pcVar10->IsOutside,&pt)
      ;
      if (FVar7 != kNoFloor) {
                    /* end of inlined section */
        if (FVar7 == kDummyFloor) {
          bVar4 = HasWall__C9TileWalls16TileWallsSegment(&tw,kHorizDiag);
          if (bVar4) {
            FVar7 = GetFloorValue__C9TileWallsQ29TileWalls20DiagonalSideSelector(&tw,kTop);
            if (FVar7 != kNoFloor) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
              iVar12 = iVar12 + ((pFVar1->field0_0x0).pData[FVar7]->cost >> 1);
            }
            inSelector = kBottom;
                    /* end of inlined section */
          }
          else {
            bVar4 = HasWall__C9TileWalls16TileWallsSegment(&tw,kVertDiag);
            if (!bVar4) goto LAB_002871f0;
            FVar7 = GetFloorValue__C9TileWallsQ29TileWalls20DiagonalSideSelector(&tw,kLeft);
            if (FVar7 != kNoFloor) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
              iVar12 = iVar12 + ((pFVar1->field0_0x0).pData[FVar7]->cost >> 1);
            }
            inSelector = kRight;
          }
          FVar7 = GetFloorValue__C9TileWallsQ29TileWalls20DiagonalSideSelector(&tw,inSelector);
          if (FVar7 != kNoFloor) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
            iVar12 = iVar12 + ((pFVar1->field0_0x0).pData[FVar7]->cost >> 1);
          }
        }
        else {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
          iVar12 = iVar12 + (pFVar1->field0_0x0).pData[FVar7]->cost;
        }
      }
LAB_002871f0:
      uVar11 = 0;
      if ((*(int *)hasHouse != 0) || (FVar7 != kNoFloor)) {
        uVar11 = 1;
      }
      *(undefined4 *)hasHouse = uVar11;
      ___9TileWalls(&tw,2);
    }
    iVar8 = GetX__C7CTilePt(&pt);
    SetX__7CTilePti(&pt,iVar8 + 1);
    iVar8 = GetX__C7CTilePt(&pt);
    if (iVar5 <= iVar8) {
      SetX__7CTilePti(&pt,0);
      iVar8 = GetY__C7CTilePt(&pt);
      SetY__7CTilePti(&pt,iVar8 + 1);
      iVar8 = GetY__C7CTilePt(&pt);
      if (iVar5 <= iVar8) {
        SetY__7CTilePti(&pt,0);
        iVar8 = GetLevel__C7CTilePt(&pt);
        if (iVar8 == 1) {
          bVar3 = true;
        }
        else {
          iVar8 = GetLevel__C7CTilePt(&pt);
          SetLevel__7CTilePti(&pt,iVar8 + 1);
        }
      }
    }
    if (bVar3) {
      ___7CTilePt(&pt,2);
      return iVar12 + wallTotal / 2;
    }
    pcVar10 = (this->field0_0x0).__vtable;
  } while( true );
}

Boolean cFixedWorldImpl::DoCommand(SInt16 com, SInt32 info) {
  cFixedWorld__vtable *pcVar1;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  CTilePt aCStack_40 [5];
  undefined4 local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = info;
  if (com != 0xbe) {
    if ((short)com < 0xbf) {
      if ((com != 0xbc) && ((short)com < 0xbd)) {
        if (com == 0x90) {
          pcVar1 = (this->field0_0x0).__vtable;
          (*(code *)pcVar1[1].SetVertexConfig)
                    ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pcVar1[1].GetVertexConfig,
                     info);
          return 1;
        }
        return 0;
      }
      GlobalDispatch__Fsi(0x85,0);
    }
    else {
      if (com == 0xc0) {
        return 1;
      }
      if (0xbf < (short)com) {
        if (com == 0x105) {
          local_30._0_2_ = (short)info;
          local_30._2_2_ = (short)((uint)info >> 0x10);
          __7CTilePtiii(aCStack_40,(int)(short)local_30,(int)local_30._2_2_,0);
          OffsetWorld__15cFixedWorldImplRC7CTilePt(this,aCStack_40);
          ___7CTilePt(aCStack_40,2);
          return 1;
        }
        return 0;
      }
    }
  }
  GlobalDispatch__Fsi(0x83,0);
  return 1;
}

void cFixedWorldImpl::OffsetWorld(CTilePt &inOffset) {
	int level;
	int size;
	cArray<unsigned char> *this;
	CTilePt &delta;
	cArray<unsigned char> *this;
	cArray<unsigned char> *this;
	_c2DArray *this;
	int y;
	int x;
	cArray<unsigned char> *this;
	cArray<unsigned char> *this;
	_c2DArray *this;
	int y;
	int x;
	int new_y;
	int new_x;
	cArray<unsigned char> *this;
	cArray<unsigned char> *this;
	int new_y;
	int new_x;
	cArray<unsigned char> *this;
	cArray<short unsigned int> *this;
	CTilePt &delta;
	cArray<short unsigned int> *this;
	cArray<short unsigned int> *this;
	_c2DArray *this;
	int y;
	int x;
	cArray<short unsigned int> *this;
	cArray<short unsigned int> *this;
	_c2DArray *this;
	int y;
	int x;
	int new_y;
	int new_x;
	cArray<short unsigned int> *this;
	cArray<short unsigned int> *this;
	int new_y;
	int new_x;
	cArray<short unsigned int> *this;
	cArray<unsigned char> *this;
	CTilePt &delta;
	cArray<unsigned char> *this;
	cArray<unsigned char> *this;
	_c2DArray *this;
	int y;
	int x;
	cArray<unsigned char> *this;
	cArray<unsigned char> *this;
	_c2DArray *this;
	int y;
	int x;
	int new_y;
	int new_x;
	cArray<unsigned char> *this;
	cArray<unsigned char> *this;
	int new_y;
	int new_x;
	cArray<unsigned char> *this;
	cArray<TileWallStorage> *this;
	CTilePt &delta;
	TileWallStorage &init;
	cArray<TileWallStorage> *this;
	cArray<TileWallStorage> *this;
	_c2DArray *this;
	int y;
	int x;
	cArray<TileWallStorage> *this;
	cArray<TileWallStorage> *this;
	_c2DArray *this;
	int y;
	int x;
	int new_y;
	int new_x;
	cArray<TileWallStorage> *this;
	cArray<TileWallStorage> *this;
	int new_y;
	int new_x;
	cArray<TileWallStorage> *this;
	cArray<VertexConfig> *this;
	CTilePt &delta;
	VertexConfig &init;
	cArray<VertexConfig> *this;
	cArray<VertexConfig> *this;
	_c2DArray *this;
	int y;
	int x;
	cArray<VertexConfig> *this;
	cArray<VertexConfig> *this;
	_c2DArray *this;
	int y;
	int x;
	int new_y;
	int new_x;
	cArray<VertexConfig> *this;
	cArray<VertexConfig> *this;
	int new_y;
	int new_x;
	cArray<VertexConfig> *this;
	int y;
	int x;
	int new_x;
	int new_y;
	int test_x;
	int test_y;
	cArray<TileWallStorage> *this;
	cArray<TileWallStorage> *this;
	cArray<TileWallStorage> *this;
	cArray<TileWallStorage> *this;
	
  byte bVar1;
  uint uVar2;
  uint uVar3;
  CFloorArray *pCVar4;
  cArray_short_unsigned_int_ *pcVar5;
  cArray_unsigned_char_ *pcVar6;
  CWallArray *pCVar7;
  cArray_VertexConfig_ *pcVar8;
  LightLayer__vtable *pLVar9;
  cFixedWorld__vtable *pcVar10;
  ulong *puVar11;
  int iVar12;
  _c2DArray *p_Var13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  void *pvVar19;
  ulong uVar20;
  byte *pbVar21;
  undefined8 unaff_s0;
  void *pvVar22;
  undefined8 unaff_s1;
  int iVar23;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  int iVar24;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  BString aBStack_110 [4];
  BString aBStack_100 [4];
  BString aBStack_f0 [4];
  CTilePt aCStack_e0 [5];
  undefined local_d0 [2];
  undefined2 local_ce;
  undefined local_cc [4];
  cFixedWorldImpl *local_c8;
  BString *local_c4;
  VertexConfig *init;
  undefined *local_bc;
  undefined2 *local_b8;
  undefined *local_b4;
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
  
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_c8 = this;
  iVar12 = GetX__C7CTilePt(inOffset);
  if ((iVar12 != 0) || (iVar12 = GetY__C7CTilePt(inOffset), iVar12 != 0)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    local_b0 = 0;
    (*(code *)_5Globs_pObjectModule->__vtable[1].SetSelectedPerson)
              ((int)&_5Globs_pObjectModule->__vtable +
               (int)*(short *)&_5Globs_pObjectModule->__vtable[1].GetSelectedPerson,inOffset);
    local_bc = local_d0;
    local_b8 = &local_ce;
    local_b4 = local_cc;
    do {
      local_d0[0] = 0;
      local_b0 = local_b0 + 1;
      pCVar4 = local_c8->mFloorLayer;
      iVar12 = (pCVar4->field0_0x0).field0_0x0.field0_0x0.fxSize;
      p_Var13 = (_c2DArray *)__builtin_new(0x18);
      __7BStringPCc(aBStack_110,"");
      __9_c2DArrayiiiRC7BString(p_Var13,1,iVar12,iVar12,aBStack_110);
      ___7BString(aBStack_110,2);
      if (p_Var13 != (_c2DArray *)0x0) {
        iVar15 = 0;
        if (0 < iVar12) {
          do {
            iVar14 = 0;
            iVar24 = iVar15 + 1;
            if (0 < iVar12) {
              do {
                __7CTilePtiii((CTilePt *)aBStack_110,iVar14,iVar15,0);
                iVar16 = GetX__C7CTilePt((CTilePt *)aBStack_110);
                iVar17 = GetY__C7CTilePt((CTilePt *)aBStack_110);
                pvVar19 = p_Var13->fData[iVar16];
                iVar23 = iVar14 + 1;
                __7CTilePtiii((CTilePt *)aBStack_100,iVar14,iVar15,0);
                iVar14 = GetX__C7CTilePt((CTilePt *)aBStack_100);
                iVar16 = GetY__C7CTilePt((CTilePt *)aBStack_100);
                *(undefined *)((int)pvVar19 + iVar17) =
                     *(undefined *)
                      ((int)(pCVar4->field0_0x0).field0_0x0.field0_0x0.fData[iVar14] + iVar16);
                ___7CTilePt((CTilePt *)aBStack_100,2);
                ___7CTilePt((CTilePt *)aBStack_110,2);
                iVar14 = iVar23;
              } while (iVar23 < iVar12);
            }
            iVar15 = iVar24;
          } while (iVar24 < iVar12);
        }
        iVar12 = (pCVar4->field0_0x0).field0_0x0.field0_0x0.fxSize;
        if (p_Var13 != (_c2DArray *)0x0) {
          iVar15 = 0;
          if (0 < iVar12) {
            do {
              iVar14 = 0;
              iVar24 = iVar15 + 1;
              if (0 < iVar12) {
                do {
                  iVar16 = GetX__C7CTilePt(inOffset);
                  iVar16 = iVar14 + iVar16;
                  iVar17 = GetY__C7CTilePt(inOffset);
                  iVar17 = iVar15 + iVar17;
                  if ((((-1 < iVar16) && (iVar16 < iVar12)) && (-1 < iVar17)) && (iVar17 < iVar12))
                  {
                    if (((iVar16 == 0) || (iVar16 == iVar12 + -1)) ||
                       ((iVar17 == 0 || (iVar17 == iVar12 + -1)))) {
                      __7CTilePtiii((CTilePt *)aBStack_110,iVar16,iVar17,0);
                      iVar16 = GetX__C7CTilePt((CTilePt *)aBStack_110);
                      iVar17 = GetY__C7CTilePt((CTilePt *)aBStack_110);
                      *(undefined *)
                       ((int)(pCVar4->field0_0x0).field0_0x0.field0_0x0.fData[iVar16] + iVar17) =
                           *local_bc;
                      ___7CTilePt((CTilePt *)aBStack_110,2);
                    }
                    else {
                      __7CTilePtiii((CTilePt *)aBStack_110,iVar16,iVar17,0);
                      iVar16 = GetX__C7CTilePt((CTilePt *)aBStack_110);
                      iVar17 = GetY__C7CTilePt((CTilePt *)aBStack_110);
                      pvVar19 = (pCVar4->field0_0x0).field0_0x0.field0_0x0.fData[iVar16];
                      __7CTilePtiii((CTilePt *)aBStack_100,iVar14,iVar15,0);
                      iVar16 = GetX__C7CTilePt((CTilePt *)aBStack_100);
                      iVar23 = GetY__C7CTilePt((CTilePt *)aBStack_100);
                      *(undefined *)((int)pvVar19 + iVar17) =
                           *(undefined *)((int)p_Var13->fData[iVar16] + iVar23);
                      ___7CTilePt((CTilePt *)aBStack_100,2);
                      ___7CTilePt((CTilePt *)aBStack_110,2);
                    }
                  }
                  iVar14 = iVar14 + 1;
                } while (iVar14 < iVar12);
              }
              iVar15 = iVar24;
            } while (iVar24 < iVar12);
          }
          iVar15 = 0;
          if (0 < iVar12) {
            do {
              iVar14 = 0;
              iVar24 = iVar15 + 1;
              if (0 < iVar12) {
                do {
                  iVar16 = GetX__C7CTilePt(inOffset);
                  iVar17 = GetY__C7CTilePt(inOffset);
                  if (((iVar14 - iVar16 < 0) || (iVar12 <= iVar14 - iVar16)) ||
                     ((iVar15 - iVar17 < 0 || (iVar12 <= iVar15 - iVar17)))) {
                    __7CTilePtiii((CTilePt *)aBStack_110,iVar14,iVar15,0);
                    iVar16 = GetX__C7CTilePt((CTilePt *)aBStack_110);
                    iVar17 = GetY__C7CTilePt((CTilePt *)aBStack_110);
                    *(undefined *)
                     ((int)(pCVar4->field0_0x0).field0_0x0.field0_0x0.fData[iVar16] + iVar17) =
                         *local_bc;
                    ___7CTilePt((CTilePt *)aBStack_110,2);
                  }
                  iVar14 = iVar14 + 1;
                } while (iVar14 < iVar12);
              }
              iVar15 = iVar24;
            } while (iVar24 < iVar12);
          }
          if (p_Var13 != (_c2DArray *)0x0) {
            ___9_c2DArray(p_Var13,3);
          }
        }
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
      pcVar5 = local_c8->mRoomLayer;
                    /* end of inlined section */
      local_ce = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
      iVar12 = (pcVar5->field0_0x0).field0_0x0.fxSize;
      p_Var13 = (_c2DArray *)__builtin_new(0x18);
      __7BStringPCc(aBStack_110,"");
      __9_c2DArrayiiiRC7BString(p_Var13,2,iVar12,iVar12,aBStack_110);
      ___7BString(aBStack_110,2);
      if (p_Var13 != (_c2DArray *)0x0) {
        iVar15 = 0;
        if (0 < iVar12) {
          do {
            iVar14 = 0;
            iVar24 = iVar15 + 1;
            if (0 < iVar12) {
              do {
                __7CTilePtiii((CTilePt *)aBStack_110,iVar14,iVar15,0);
                iVar16 = GetX__C7CTilePt((CTilePt *)aBStack_110);
                iVar17 = GetY__C7CTilePt((CTilePt *)aBStack_110);
                pvVar19 = p_Var13->fData[iVar16];
                iVar23 = iVar14 + 1;
                __7CTilePtiii((CTilePt *)aBStack_100,iVar14,iVar15,0);
                iVar14 = GetX__C7CTilePt((CTilePt *)aBStack_100);
                iVar16 = GetY__C7CTilePt((CTilePt *)aBStack_100);
                *(undefined2 *)((int)pvVar19 + iVar17 * 2) =
                     *(undefined2 *)
                      ((int)(pcVar5->field0_0x0).field0_0x0.fData[iVar14] + iVar16 * 2);
                ___7CTilePt((CTilePt *)aBStack_100,2);
                ___7CTilePt((CTilePt *)aBStack_110,2);
                iVar14 = iVar23;
              } while (iVar23 < iVar12);
            }
            iVar15 = iVar24;
          } while (iVar24 < iVar12);
        }
        iVar12 = (pcVar5->field0_0x0).field0_0x0.fxSize;
        if (p_Var13 != (_c2DArray *)0x0) {
          iVar15 = 0;
          if (0 < iVar12) {
            do {
              iVar14 = 0;
              iVar24 = iVar15 + 1;
              if (0 < iVar12) {
                do {
                  iVar16 = GetX__C7CTilePt(inOffset);
                  iVar16 = iVar14 + iVar16;
                  iVar17 = GetY__C7CTilePt(inOffset);
                  iVar17 = iVar15 + iVar17;
                  if ((((-1 < iVar16) && (iVar16 < iVar12)) && (-1 < iVar17)) && (iVar17 < iVar12))
                  {
                    if (((iVar16 == 0) || (iVar16 == iVar12 + -1)) ||
                       ((iVar17 == 0 || (iVar17 == iVar12 + -1)))) {
                      __7CTilePtiii((CTilePt *)aBStack_110,iVar16,iVar17,0);
                      iVar16 = GetX__C7CTilePt((CTilePt *)aBStack_110);
                      iVar17 = GetY__C7CTilePt((CTilePt *)aBStack_110);
                      *(undefined2 *)
                       ((int)(pcVar5->field0_0x0).field0_0x0.fData[iVar16] + iVar17 * 2) = *local_b8
                      ;
                      ___7CTilePt((CTilePt *)aBStack_110,2);
                    }
                    else {
                      __7CTilePtiii((CTilePt *)aBStack_110,iVar16,iVar17,0);
                      iVar16 = GetX__C7CTilePt((CTilePt *)aBStack_110);
                      iVar17 = GetY__C7CTilePt((CTilePt *)aBStack_110);
                      pvVar19 = (pcVar5->field0_0x0).field0_0x0.fData[iVar16];
                      __7CTilePtiii((CTilePt *)aBStack_100,iVar14,iVar15,0);
                      iVar16 = GetX__C7CTilePt((CTilePt *)aBStack_100);
                      iVar23 = GetY__C7CTilePt((CTilePt *)aBStack_100);
                      *(undefined2 *)((int)pvVar19 + iVar17 * 2) =
                           *(undefined2 *)((int)p_Var13->fData[iVar16] + iVar23 * 2);
                      ___7CTilePt((CTilePt *)aBStack_100,2);
                      ___7CTilePt((CTilePt *)aBStack_110,2);
                    }
                  }
                  iVar14 = iVar14 + 1;
                } while (iVar14 < iVar12);
              }
              iVar15 = iVar24;
            } while (iVar24 < iVar12);
          }
          iVar15 = 0;
          if (0 < iVar12) {
            do {
              iVar14 = 0;
              iVar24 = iVar15 + 1;
              if (0 < iVar12) {
                do {
                  iVar16 = GetX__C7CTilePt(inOffset);
                  iVar17 = GetY__C7CTilePt(inOffset);
                  if (((iVar14 - iVar16 < 0) || (iVar12 <= iVar14 - iVar16)) ||
                     ((iVar15 - iVar17 < 0 || (iVar12 <= iVar15 - iVar17)))) {
                    __7CTilePtiii((CTilePt *)aBStack_110,iVar14,iVar15,0);
                    iVar16 = GetX__C7CTilePt((CTilePt *)aBStack_110);
                    iVar17 = GetY__C7CTilePt((CTilePt *)aBStack_110);
                    *(undefined2 *)((int)(pcVar5->field0_0x0).field0_0x0.fData[iVar16] + iVar17 * 2)
                         = *local_b8;
                    ___7CTilePt((CTilePt *)aBStack_110,2);
                  }
                  iVar14 = iVar14 + 1;
                } while (iVar14 < iVar12);
              }
              iVar15 = iVar24;
            } while (iVar24 < iVar12);
          }
          if (p_Var13 != (_c2DArray *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
            ___9_c2DArray(p_Var13,3);
          }
        }
      }
                    /* end of inlined section */
      local_cc[0] = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
      pcVar6 = local_c8->mFlagLayer;
      iVar12 = (pcVar6->field0_0x0).field0_0x0.fxSize;
      p_Var13 = (_c2DArray *)__builtin_new(0x18);
      __7BStringPCc(aBStack_110,"");
      __9_c2DArrayiiiRC7BString(p_Var13,1,iVar12,iVar12,aBStack_110);
      ___7BString(aBStack_110,2);
      if (p_Var13 != (_c2DArray *)0x0) {
        iVar15 = 0;
        if (0 < iVar12) {
          do {
            iVar14 = 0;
            iVar24 = iVar15 + 1;
            if (0 < iVar12) {
              do {
                __7CTilePtiii((CTilePt *)aBStack_110,iVar14,iVar15,0);
                iVar16 = GetX__C7CTilePt((CTilePt *)aBStack_110);
                iVar17 = GetY__C7CTilePt((CTilePt *)aBStack_110);
                pvVar19 = p_Var13->fData[iVar16];
                iVar23 = iVar14 + 1;
                __7CTilePtiii((CTilePt *)aBStack_100,iVar14,iVar15,0);
                iVar14 = GetX__C7CTilePt((CTilePt *)aBStack_100);
                iVar16 = GetY__C7CTilePt((CTilePt *)aBStack_100);
                *(undefined *)((int)pvVar19 + iVar17) =
                     *(undefined *)((int)(pcVar6->field0_0x0).field0_0x0.fData[iVar14] + iVar16);
                ___7CTilePt((CTilePt *)aBStack_100,2);
                ___7CTilePt((CTilePt *)aBStack_110,2);
                iVar14 = iVar23;
              } while (iVar23 < iVar12);
            }
            iVar15 = iVar24;
          } while (iVar24 < iVar12);
        }
        iVar12 = (pcVar6->field0_0x0).field0_0x0.fxSize;
        if (p_Var13 != (_c2DArray *)0x0) {
          iVar15 = 0;
          if (0 < iVar12) {
            do {
              iVar14 = 0;
              iVar24 = iVar15 + 1;
              if (0 < iVar12) {
                do {
                  iVar16 = GetX__C7CTilePt(inOffset);
                  iVar16 = iVar14 + iVar16;
                  iVar17 = GetY__C7CTilePt(inOffset);
                  iVar17 = iVar15 + iVar17;
                  if ((((-1 < iVar16) && (iVar16 < iVar12)) && (-1 < iVar17)) && (iVar17 < iVar12))
                  {
                    if (((iVar16 == 0) || (iVar16 == iVar12 + -1)) ||
                       ((iVar17 == 0 || (iVar17 == iVar12 + -1)))) {
                      __7CTilePtiii((CTilePt *)aBStack_110,iVar16,iVar17,0);
                      iVar16 = GetX__C7CTilePt((CTilePt *)aBStack_110);
                      iVar17 = GetY__C7CTilePt((CTilePt *)aBStack_110);
                      *(undefined *)((int)(pcVar6->field0_0x0).field0_0x0.fData[iVar16] + iVar17) =
                           *local_b4;
                      ___7CTilePt((CTilePt *)aBStack_110,2);
                    }
                    else {
                      __7CTilePtiii((CTilePt *)aBStack_110,iVar16,iVar17,0);
                      iVar16 = GetX__C7CTilePt((CTilePt *)aBStack_110);
                      iVar17 = GetY__C7CTilePt((CTilePt *)aBStack_110);
                      pvVar19 = (pcVar6->field0_0x0).field0_0x0.fData[iVar16];
                      __7CTilePtiii((CTilePt *)aBStack_100,iVar14,iVar15,0);
                      iVar16 = GetX__C7CTilePt((CTilePt *)aBStack_100);
                      iVar23 = GetY__C7CTilePt((CTilePt *)aBStack_100);
                      *(undefined *)((int)pvVar19 + iVar17) =
                           *(undefined *)((int)p_Var13->fData[iVar16] + iVar23);
                      ___7CTilePt((CTilePt *)aBStack_100,2);
                      ___7CTilePt((CTilePt *)aBStack_110,2);
                    }
                  }
                  iVar14 = iVar14 + 1;
                } while (iVar14 < iVar12);
              }
              iVar15 = iVar24;
            } while (iVar24 < iVar12);
          }
          iVar15 = 0;
          if (0 < iVar12) {
            do {
              iVar14 = 0;
              iVar24 = iVar15 + 1;
              if (0 < iVar12) {
                do {
                  iVar16 = GetX__C7CTilePt(inOffset);
                  iVar17 = GetY__C7CTilePt(inOffset);
                  if (((iVar14 - iVar16 < 0) || (iVar12 <= iVar14 - iVar16)) ||
                     ((iVar15 - iVar17 < 0 || (iVar12 <= iVar15 - iVar17)))) {
                    __7CTilePtiii((CTilePt *)aBStack_110,iVar14,iVar15,0);
                    iVar16 = GetX__C7CTilePt((CTilePt *)aBStack_110);
                    iVar17 = GetY__C7CTilePt((CTilePt *)aBStack_110);
                    *(undefined *)((int)(pcVar6->field0_0x0).field0_0x0.fData[iVar16] + iVar17) =
                         *local_b4;
                    ___7CTilePt((CTilePt *)aBStack_110,2);
                  }
                  iVar14 = iVar14 + 1;
                } while (iVar14 < iVar12);
              }
              iVar15 = iVar24;
            } while (iVar24 < iVar12);
          }
          if (p_Var13 != (_c2DArray *)0x0) {
            ___9_c2DArray(p_Var13,3);
          }
        }
      }
                    /* end of inlined section */
      memset(aBStack_110,0,8);
                    /* inlined from c:/eor/src2/games/sims/MSrc/tilewallstorage.h */
      memset(aBStack_110,0,8);
      pCVar7 = local_c8->mWallLayer;
      iVar12 = (pCVar7->field0_0x0).field0_0x0.field0_0x0.fxSize;
      local_c4 = aBStack_110;
      p_Var13 = (_c2DArray *)__builtin_new(0x18);
      uVar20 = 0x3c0000;
      __7BStringPCc(aBStack_f0,"");
      __9_c2DArrayiiiRC7BString(p_Var13,8,iVar12,iVar12,aBStack_f0);
      ___7BString(aBStack_f0,2);
      if (p_Var13 != (_c2DArray *)0x0) {
        iVar15 = 0;
        if (0 < iVar12) {
          do {
            iVar14 = 0;
            iVar24 = iVar15 + 1;
            if (0 < iVar12) {
              do {
                __7CTilePtiii((CTilePt *)aBStack_f0,iVar14,iVar15,0);
                iVar16 = GetX__C7CTilePt((CTilePt *)aBStack_f0);
                iVar17 = GetY__C7CTilePt((CTilePt *)aBStack_f0);
                pvVar22 = (void *)((int)p_Var13->fData[iVar16] + iVar17 * 8);
                iVar17 = iVar14 + 1;
                __7CTilePtiii(aCStack_e0,iVar14,iVar15,0);
                iVar14 = GetX__C7CTilePt(aCStack_e0);
                iVar16 = GetY__C7CTilePt(aCStack_e0);
                pvVar19 = (void *)((int)(pCVar7->field0_0x0).field0_0x0.field0_0x0.fData[iVar14] +
                                  iVar16 * 8);
                uVar2 = (int)pvVar19 + 7U & 7;
                uVar3 = (uint)pvVar19 & 7;
                uVar18 = (*(long *)(((int)pvVar19 + 7U) - uVar2) << (7 - uVar2) * 8 |
                         (long)(iVar16 * 8) & 0xffffffffffffffffU >> (uVar2 + 1) * 8) &
                         -1L << (8 - uVar3) * 8 | *(ulong *)((int)pvVar19 - uVar3) >> uVar3 * 8;
                uVar2 = (int)pvVar22 + 7U & 7;
                puVar11 = (ulong *)(((int)pvVar22 + 7U) - uVar2);
                *puVar11 = *puVar11 & -1L << (uVar2 + 1) * 8 | uVar18 >> (7 - uVar2) * 8;
                uVar2 = (uint)pvVar22 & 7;
                *(ulong *)((int)pvVar22 - uVar2) =
                     uVar18 << uVar2 * 8 |
                     *(ulong *)((int)pvVar22 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
                ___7CTilePt(aCStack_e0,2);
                ___7CTilePt((CTilePt *)aBStack_f0,2);
                iVar14 = iVar17;
              } while (iVar17 < iVar12);
            }
            iVar15 = iVar24;
          } while (iVar24 < iVar12);
        }
        iVar12 = (pCVar7->field0_0x0).field0_0x0.field0_0x0.fxSize;
        if (p_Var13 != (_c2DArray *)0x0) {
          iVar15 = 0;
          if (0 < iVar12) {
            do {
              iVar14 = 0;
              iVar24 = iVar15 + 1;
              if (0 < iVar12) {
                do {
                  iVar16 = GetX__C7CTilePt(inOffset);
                  iVar16 = iVar14 + iVar16;
                  iVar17 = GetY__C7CTilePt(inOffset);
                  iVar17 = iVar15 + iVar17;
                  if ((((-1 < iVar16) && (iVar16 < iVar12)) && (-1 < iVar17)) && (iVar17 < iVar12))
                  {
                    if (((iVar16 == 0) || (iVar16 == iVar12 + -1)) ||
                       ((iVar17 == 0 || (iVar17 == iVar12 + -1)))) {
                      __7CTilePtiii((CTilePt *)aBStack_f0,iVar16,iVar17,0);
                      iVar16 = GetX__C7CTilePt((CTilePt *)aBStack_f0);
                      iVar17 = GetY__C7CTilePt((CTilePt *)aBStack_f0);
                      uVar20 = (ulong)(int)local_c4;
                      pvVar19 = (void *)((int)(pCVar7->field0_0x0).field0_0x0.field0_0x0.fData
                                              [iVar16] + iVar17 * 8);
                      uVar2 = (uint)(undefined *)((int)local_c4 + 7) & 7;
                      uVar3 = (uint)local_c4 & 7;
                      uVar18 = (*(long *)((undefined *)((int)local_c4 + 7) + -uVar2) <<
                                (7 - uVar2) * 8 |
                               (long)(iVar17 * 8) & 0xffffffffffffffffU >> (uVar2 + 1) * 8) &
                               -1L << (8 - uVar3) * 8 |
                               *(ulong *)((int)local_c4 + -uVar3) >> uVar3 * 8;
                      uVar2 = (int)pvVar19 + 7U & 7;
                      puVar11 = (ulong *)(((int)pvVar19 + 7U) - uVar2);
                      *puVar11 = *puVar11 & -1L << (uVar2 + 1) * 8 | uVar18 >> (7 - uVar2) * 8;
                      uVar2 = (uint)pvVar19 & 7;
                      *(ulong *)((int)pvVar19 - uVar2) =
                           uVar18 << uVar2 * 8 |
                           *(ulong *)((int)pvVar19 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8
                      ;
                      ___7CTilePt((CTilePt *)aBStack_f0,2);
                    }
                    else {
                      __7CTilePtiii((CTilePt *)aBStack_f0,iVar16,iVar17,0);
                      iVar16 = GetX__C7CTilePt((CTilePt *)aBStack_f0);
                      iVar17 = GetY__C7CTilePt((CTilePt *)aBStack_f0);
                      pvVar22 = (void *)((int)(pCVar7->field0_0x0).field0_0x0.field0_0x0.fData
                                              [iVar16] + iVar17 * 8);
                      __7CTilePtiii(aCStack_e0,iVar14,iVar15,0);
                      iVar16 = GetX__C7CTilePt(aCStack_e0);
                      iVar17 = GetY__C7CTilePt(aCStack_e0);
                      pvVar19 = (void *)((int)p_Var13->fData[iVar16] + iVar17 * 8);
                      uVar2 = (int)pvVar19 + 7U & 7;
                      uVar3 = (uint)pvVar19 & 7;
                      uVar20 = (*(long *)(((int)pvVar19 + 7U) - uVar2) << (7 - uVar2) * 8 |
                               uVar20 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) &
                               -1L << (8 - uVar3) * 8 |
                               *(ulong *)((int)pvVar19 - uVar3) >> uVar3 * 8;
                      uVar2 = (int)pvVar22 + 7U & 7;
                      puVar11 = (ulong *)(((int)pvVar22 + 7U) - uVar2);
                      *puVar11 = *puVar11 & -1L << (uVar2 + 1) * 8 | uVar20 >> (7 - uVar2) * 8;
                      uVar2 = (uint)pvVar22 & 7;
                      *(ulong *)((int)pvVar22 - uVar2) =
                           uVar20 << uVar2 * 8 |
                           *(ulong *)((int)pvVar22 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8
                      ;
                      ___7CTilePt(aCStack_e0,2);
                      ___7CTilePt((CTilePt *)aBStack_f0,2);
                    }
                  }
                  iVar14 = iVar14 + 1;
                } while (iVar14 < iVar12);
              }
              iVar15 = iVar24;
            } while (iVar24 < iVar12);
          }
          iVar15 = 0;
          if (0 < iVar12) {
            do {
              iVar14 = 0;
              iVar24 = iVar15 + 1;
              if (0 < iVar12) {
                do {
                  iVar16 = GetX__C7CTilePt(inOffset);
                  iVar17 = GetY__C7CTilePt(inOffset);
                  if (((iVar14 - iVar16 < 0) || (iVar12 <= iVar14 - iVar16)) ||
                     ((iVar15 - iVar17 < 0 || (iVar12 <= iVar15 - iVar17)))) {
                    __7CTilePtiii((CTilePt *)aBStack_f0,iVar14,iVar15,0);
                    iVar16 = GetX__C7CTilePt((CTilePt *)aBStack_f0);
                    iVar17 = GetY__C7CTilePt((CTilePt *)aBStack_f0);
                    pvVar19 = (void *)((int)(pCVar7->field0_0x0).field0_0x0.field0_0x0.fData[iVar16]
                                      + iVar17 * 8);
                    uVar2 = (uint)(undefined *)((int)local_c4 + 7) & 7;
                    uVar3 = (uint)local_c4 & 7;
                    uVar20 = (*(long *)((undefined *)((int)local_c4 + 7) + -uVar2) <<
                              (7 - uVar2) * 8 | uVar20 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) &
                             -1L << (8 - uVar3) * 8 |
                             *(ulong *)((int)local_c4 + -uVar3) >> uVar3 * 8;
                    uVar2 = (int)pvVar19 + 7U & 7;
                    puVar11 = (ulong *)(((int)pvVar19 + 7U) - uVar2);
                    *puVar11 = *puVar11 & -1L << (uVar2 + 1) * 8 | uVar20 >> (7 - uVar2) * 8;
                    uVar2 = (uint)pvVar19 & 7;
                    *(ulong *)((int)pvVar19 - uVar2) =
                         uVar20 << uVar2 * 8 |
                         *(ulong *)((int)pvVar19 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
                    ___7CTilePt((CTilePt *)aBStack_f0,2);
                  }
                  iVar14 = iVar14 + 1;
                } while (iVar14 < iVar12);
              }
              iVar15 = iVar24;
            } while (iVar24 < iVar12);
          }
          if (p_Var13 != (_c2DArray *)0x0) {
            ___9_c2DArray(p_Var13,3);
          }
        }
      }
                    /* end of inlined section */
      __12VertexConfigi((VertexConfig *)aBStack_110,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
      pcVar8 = local_c8->mVertexConfigs;
      iVar12 = (pcVar8->field0_0x0).field0_0x0.fxSize;
      init = (VertexConfig *)aBStack_110;
      p_Var13 = (_c2DArray *)__builtin_new(0x18);
      __7BStringPCc(aBStack_100,"");
      __9_c2DArrayiiiRC7BString(p_Var13,1,iVar12,iVar12,aBStack_100);
      ___7BString(aBStack_100,2);
      if (p_Var13 != (_c2DArray *)0x0) {
        iVar15 = 0;
        if (0 < iVar12) {
          do {
            iVar14 = 0;
            iVar24 = iVar15 + 1;
            if (0 < iVar12) {
              do {
                __7CTilePtiii((CTilePt *)aBStack_100,iVar14,iVar15,0);
                iVar16 = GetX__C7CTilePt((CTilePt *)aBStack_100);
                iVar17 = GetY__C7CTilePt((CTilePt *)aBStack_100);
                pvVar19 = p_Var13->fData[iVar16];
                iVar23 = iVar14 + 1;
                __7CTilePtiii((CTilePt *)aBStack_f0,iVar14,iVar15,0);
                iVar14 = GetX__C7CTilePt((CTilePt *)aBStack_f0);
                iVar16 = GetY__C7CTilePt((CTilePt *)aBStack_f0);
                __as__12VertexConfigRC12VertexConfig
                          ((VertexConfig *)((int)pvVar19 + iVar17),
                           (VertexConfig *)
                           ((int)(pcVar8->field0_0x0).field0_0x0.fData[iVar14] + iVar16));
                ___7CTilePt((CTilePt *)aBStack_f0,2);
                ___7CTilePt((CTilePt *)aBStack_100,2);
                iVar14 = iVar23;
              } while (iVar23 < iVar12);
            }
            iVar15 = iVar24;
          } while (iVar24 < iVar12);
        }
        iVar12 = (pcVar8->field0_0x0).field0_0x0.fxSize;
        if (p_Var13 != (_c2DArray *)0x0) {
          iVar15 = 0;
          if (0 < iVar12) {
            do {
              iVar14 = 0;
              iVar24 = iVar15 + 1;
              if (0 < iVar12) {
                do {
                  iVar16 = GetX__C7CTilePt(inOffset);
                  iVar16 = iVar14 + iVar16;
                  iVar17 = GetY__C7CTilePt(inOffset);
                  iVar17 = iVar15 + iVar17;
                  if ((((-1 < iVar16) && (iVar16 < iVar12)) && (-1 < iVar17)) && (iVar17 < iVar12))
                  {
                    if (((iVar16 == 0) || (iVar16 == iVar12 + -1)) ||
                       ((iVar17 == 0 || (iVar17 == iVar12 + -1)))) {
                      __7CTilePtiii((CTilePt *)aBStack_100,iVar16,iVar17,0);
                      iVar16 = GetX__C7CTilePt((CTilePt *)aBStack_100);
                      iVar17 = GetY__C7CTilePt((CTilePt *)aBStack_100);
                      __as__12VertexConfigRC12VertexConfig
                                ((VertexConfig *)
                                 ((int)(pcVar8->field0_0x0).field0_0x0.fData[iVar16] + iVar17),init)
                      ;
                      ___7CTilePt((CTilePt *)aBStack_100,2);
                    }
                    else {
                      __7CTilePtiii((CTilePt *)aBStack_100,iVar16,iVar17,0);
                      iVar16 = GetX__C7CTilePt((CTilePt *)aBStack_100);
                      iVar17 = GetY__C7CTilePt((CTilePt *)aBStack_100);
                      pvVar19 = (pcVar8->field0_0x0).field0_0x0.fData[iVar16];
                      __7CTilePtiii((CTilePt *)aBStack_f0,iVar14,iVar15,0);
                      iVar16 = GetX__C7CTilePt((CTilePt *)aBStack_f0);
                      iVar23 = GetY__C7CTilePt((CTilePt *)aBStack_f0);
                      __as__12VertexConfigRC12VertexConfig
                                ((VertexConfig *)((int)pvVar19 + iVar17),
                                 (VertexConfig *)((int)p_Var13->fData[iVar16] + iVar23));
                      ___7CTilePt((CTilePt *)aBStack_f0,2);
                      ___7CTilePt((CTilePt *)aBStack_100,2);
                    }
                  }
                  iVar14 = iVar14 + 1;
                } while (iVar14 < iVar12);
              }
              iVar15 = iVar24;
            } while (iVar24 < iVar12);
          }
          iVar15 = 0;
          if (0 < iVar12) {
            do {
              iVar14 = 0;
              iVar24 = iVar15 + 1;
              if (0 < iVar12) {
                do {
                  iVar16 = GetX__C7CTilePt(inOffset);
                  iVar17 = GetY__C7CTilePt(inOffset);
                  if (((iVar14 - iVar16 < 0) || (iVar12 <= iVar14 - iVar16)) ||
                     ((iVar15 - iVar17 < 0 || (iVar12 <= iVar15 - iVar17)))) {
                    __7CTilePtiii((CTilePt *)aBStack_100,iVar14,iVar15,0);
                    iVar16 = GetX__C7CTilePt((CTilePt *)aBStack_100);
                    iVar17 = GetY__C7CTilePt((CTilePt *)aBStack_100);
                    __as__12VertexConfigRC12VertexConfig
                              ((VertexConfig *)
                               ((int)(pcVar8->field0_0x0).field0_0x0.fData[iVar16] + iVar17),init);
                    ___7CTilePt((CTilePt *)aBStack_100,2);
                  }
                  iVar14 = iVar14 + 1;
                } while (iVar14 < iVar12);
              }
              iVar15 = iVar24;
            } while (iVar24 < iVar12);
          }
          if (p_Var13 != (_c2DArray *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
            ___9_c2DArray(p_Var13,3);
          }
        }
      }
      ___12VertexConfig((VertexConfig *)aBStack_110,2);
      pLVar9 = local_c8->mLightLayer->__vtable;
      (*(code *)pLVar9[1].DoOffset)
                ((int)&local_c8->mLightLayer->__vtable + (int)*(short *)&pLVar9[1].RemoveLight,
                 inOffset);
      pcVar10 = (local_c8->field0_0x0).__vtable;
      iVar15 = (*(code *)pcVar10->GetFloor)
                         ((int)&(local_c8->field0_0x0).__vtable +
                          (int)*(short *)&pcVar10->GetFloorLayer);
      iVar12 = 0;
      if (0 < iVar15) {
        do {
          iVar14 = 0;
          iVar24 = iVar12 + 1;
          if (0 < iVar15) {
            do {
              iVar16 = GetX__C7CTilePt(inOffset);
              iVar17 = GetY__C7CTilePt(inOffset);
              if ((((iVar14 - iVar16 < 0) || (iVar15 <= iVar14 - iVar16)) || (iVar12 - iVar17 < 0))
                 || (iVar15 <= iVar12 - iVar17)) {
                if (iVar24 < iVar15) {
                  __7CTilePtiii((CTilePt *)aBStack_110,iVar14,iVar24,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                  pCVar7 = local_c8->mWallLayer;
                  iVar16 = GetX__C7CTilePt((CTilePt *)aBStack_110);
                  iVar17 = GetY__C7CTilePt((CTilePt *)aBStack_110);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                  pbVar21 = (byte *)((int)(pCVar7->field0_0x0).field0_0x0.field0_0x0.fData[iVar16] +
                                    iVar17 * 8);
                  ___7CTilePt((CTilePt *)aBStack_110,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/tilewallstorage.h */
                  bVar1 = *pbVar21;
                    /* end of inlined section */
                  if ((bVar1 & 2) != 0) {
                    *pbVar21 = bVar1 & 0xfd;
                  }
                }
                if (iVar14 + 1 < iVar15) {
                  __7CTilePtiii((CTilePt *)aBStack_110,iVar14 + 1,iVar12,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                  pCVar7 = local_c8->mWallLayer;
                  iVar16 = GetX__C7CTilePt((CTilePt *)aBStack_110);
                  iVar17 = GetY__C7CTilePt((CTilePt *)aBStack_110);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                  pbVar21 = (byte *)((int)(pCVar7->field0_0x0).field0_0x0.field0_0x0.fData[iVar16] +
                                    iVar17 * 8);
                  ___7CTilePt((CTilePt *)aBStack_110,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/tilewallstorage.h */
                  bVar1 = *pbVar21;
                    /* end of inlined section */
                  if ((bVar1 & 1) != 0) {
                    *pbVar21 = bVar1 & 0xfe;
                  }
                }
                if (-1 < iVar12 + -1) {
                  __7CTilePtiii((CTilePt *)aBStack_110,iVar14,iVar12 + -1,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                  pCVar7 = local_c8->mWallLayer;
                  iVar16 = GetX__C7CTilePt((CTilePt *)aBStack_110);
                  iVar17 = GetY__C7CTilePt((CTilePt *)aBStack_110);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                  pbVar21 = (byte *)((int)(pCVar7->field0_0x0).field0_0x0.field0_0x0.fData[iVar16] +
                                    iVar17 * 8);
                  ___7CTilePt((CTilePt *)aBStack_110,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/tilewallstorage.h */
                  bVar1 = *pbVar21;
                    /* end of inlined section */
                  if ((bVar1 & 4) != 0) {
                    *pbVar21 = bVar1 & 0xfb;
                  }
                }
                if (-1 < iVar14 + -1) {
                  __7CTilePtiii((CTilePt *)aBStack_110,iVar14 + -1,iVar12,0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                  pCVar7 = local_c8->mWallLayer;
                  iVar16 = GetX__C7CTilePt((CTilePt *)aBStack_110);
                  iVar17 = GetY__C7CTilePt((CTilePt *)aBStack_110);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                  pbVar21 = (byte *)((int)(pCVar7->field0_0x0).field0_0x0.field0_0x0.fData[iVar16] +
                                    iVar17 * 8);
                  ___7CTilePt((CTilePt *)aBStack_110,2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/tilewallstorage.h */
                  bVar1 = *pbVar21;
                    /* end of inlined section */
                  if ((bVar1 & 8) != 0) {
                    *pbVar21 = bVar1 & 0xf7;
                  }
                }
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 < iVar15);
          }
          iVar12 = iVar24;
        } while (iVar24 < iVar15);
      }
    } while (local_b0 < 1);
  }
  return;
}

void SetLotBorders(int tl, int tr, int bl, int br) {
	cFixedWorld *world;
	RECT freeArea;
	POINT pt;
	CTilePt cpt;
	
  cFixedWorld *pcVar1;
  int iVar2;
  undefined8 uVar3;
  tagRECT freeArea;
  tagPOINT pt;
  CTilePt cpt;
  
  pcVar1 = _5Globs_pFixedWorld;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
            ((int)&_5Globs_pFixedWorld->__vtable +
             (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
  (*(code *)pcVar1->__vtable->GetFloor)
            ((int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->GetFloorLayer);
  for (pt.x = 0;
      iVar2 = (*(code *)pcVar1->__vtable->GetFloor)
                        ((int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->GetFloorLayer),
      pt.x < iVar2; pt.x = pt.x + 1) {
    pt.y = 0;
    while( true ) {
      iVar2 = (*(code *)pcVar1->__vtable->GetFloor)
                        ((int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->GetFloorLayer);
      if (iVar2 <= pt.y) break;
      __7CTilePtiii(&cpt,pt.x,pt.y,1);
      uVar3 = (*(code *)pcVar1->__vtable[1].GetFloorLayer)
                        ((int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable[1].OutOfGrid,&cpt
                        );
      (*(code *)pcVar1->__vtable[1].SetFloor)
                ((int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable[1].GetFloor,&cpt,uVar3);
      ___7CTilePt(&cpt,2);
      pt.y = pt.y + 1;
    }
  }
  return;
}

bool cFixedWorldImpl::OutOfBounds(CTilePt &aPt) {
	int size;
	
  long lVar1;
  
  lVar1 = (long)(this->fSize + -1);
  if ((((0 < (long)aPt->mX) && (aPt->mX < lVar1)) && (0 < (long)aPt->mY)) && (aPt->mY < lVar1)) {
    return false;
  }
  return true;
}

bool cFixedWorldImpl::OutOfGrid(CTilePt &aPt) {
  if ((((-1 < (long)aPt->mX) && ((long)aPt->mX < (long)this->fSize)) && (-1 < (long)aPt->mY)) &&
     ((long)aPt->mY < (long)this->fSize)) {
    return false;
  }
  return true;
}

bool cFixedWorldImpl::OutOfBounds(FTilePt &aPt) {
  short sVar1;
  cFixedWorld__vtable *pcVar2;
  undefined uVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  CTilePt aCStack_40 [5];
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
  pcVar2 = (this->field0_0x0).__vtable;
  sVar1 = *(short *)&pcVar2->GetWall;
  __7CTilePtRC7FTilePti(aCStack_40,aPt,1);
  uVar3 = (*(code *)pcVar2->SetWall)((int)&(this->field0_0x0).__vtable + (int)sVar1,aCStack_40);
  ___7CTilePt(aCStack_40,2);
  return (bool)uVar3;
}

bool cFixedWorldImpl::OutOfGrid(FTilePt &aPt) {
  short sVar1;
  cFixedWorld__vtable *pcVar2;
  undefined uVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  CTilePt aCStack_40 [5];
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
  pcVar2 = (this->field0_0x0).__vtable;
  sVar1 = *(short *)&pcVar2->HasWalls;
  __7CTilePtRC7FTilePti(aCStack_40,aPt,1);
  uVar3 = (*(code *)pcVar2->HasWalls)((int)&(this->field0_0x0).__vtable + (int)sVar1,aCStack_40);
  ___7CTilePt(aCStack_40,2);
  return (bool)uVar3;
}

Int cFixedWorldImpl::GetSize() {
  return this->fSize;
}

Int cFixedWorldImpl::GetMaxSize() {
  return 0x40;
}

FloorPattern cFixedWorldImpl::GetFloor(CTilePt &in) {
	cArray<unsigned char> *this;
	CTilePt &in;
	
  CFloorArray *pCVar1;
  int iVar2;
  int iVar3;
  
  GetLevel__C7CTilePt(in);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
  pCVar1 = this->mFloorLayer;
  iVar2 = GetX__C7CTilePt(in);
  iVar3 = GetY__C7CTilePt(in);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
  return (FloorPattern)
         *(byte *)((int)(pCVar1->field0_0x0).field0_0x0.field0_0x0.fData[iVar2] + iVar3);
}

void cFixedWorldImpl::SetFloor(CTilePt &in, FloorPattern newFloor) {
	FloorPattern pat;
	cArray<unsigned char> *this;
	CTilePt &in;
	cArray<unsigned char> *this;
	CTilePt &in;
	
  CFloorArray *pCVar1;
  int iVar2;
  int iVar3;
  
  GetLevel__C7CTilePt(in);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
  pCVar1 = this->mFloorLayer;
  iVar2 = GetX__C7CTilePt(in);
  iVar3 = GetY__C7CTilePt(in);
                    /* end of inlined section */
  if (*(byte *)((int)(pCVar1->field0_0x0).field0_0x0.field0_0x0.fData[iVar2] + iVar3) != newFloor) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
    pCVar1 = this->mFloorLayer;
    iVar2 = GetX__C7CTilePt(in);
    iVar3 = GetY__C7CTilePt(in);
                    /* end of inlined section */
    *(char *)((int)(pCVar1->field0_0x0).field0_0x0.field0_0x0.fData[iVar2] + iVar3) = (char)newFloor
    ;
  }
  return;
}

UInt16 cFixedWorldImpl::GetRoom(CTilePt &in) {
	cArray<short unsigned int> *this;
	CTilePt &in;
	
  cArray_short_unsigned_int_ *pcVar1;
  int iVar2;
  int iVar3;
  
  GetLevel__C7CTilePt(in);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
  pcVar1 = this->mRoomLayer;
  iVar2 = GetX__C7CTilePt(in);
  iVar3 = GetY__C7CTilePt(in);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
  return *(short *)((int)(pcVar1->field0_0x0).field0_0x0.fData[iVar2] + iVar3 * 2);
}

void cFixedWorldImpl::SetRoom(CTilePt &in, UInt16 inRoom) {
	cArray<short unsigned int> *this;
	CTilePt &in;
	
  cArray_short_unsigned_int_ *pcVar1;
  int iVar2;
  int iVar3;
  
  GetLevel__C7CTilePt(in);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
  pcVar1 = this->mRoomLayer;
  iVar2 = GetX__C7CTilePt(in);
  iVar3 = GetY__C7CTilePt(in);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
  *(short *)((int)(pcVar1->field0_0x0).field0_0x0.fData[iVar2] + iVar3 * 2) = inRoom;
  return;
}

UInt8 cFixedWorldImpl::GetFlags(CTilePt &in) {
	cArray<unsigned char> *this;
	CTilePt &in;
	
  cArray_unsigned_char_ *pcVar1;
  int iVar2;
  int iVar3;
  
  GetLevel__C7CTilePt(in);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
  pcVar1 = this->mFlagLayer;
  iVar2 = GetX__C7CTilePt(in);
  iVar3 = GetY__C7CTilePt(in);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
  return *(uchar *)((int)(pcVar1->field0_0x0).field0_0x0.fData[iVar2] + iVar3);
}

void cFixedWorldImpl::SetFlags(CTilePt &in, UInt8 inFlags) {
	cArray<unsigned char> *this;
	CTilePt &in;
	
  cArray_unsigned_char_ *pcVar1;
  int iVar2;
  int iVar3;
  
  GetLevel__C7CTilePt(in);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
  pcVar1 = this->mFlagLayer;
  iVar2 = GetX__C7CTilePt(in);
  iVar3 = GetY__C7CTilePt(in);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
  *(uchar *)((int)(pcVar1->field0_0x0).field0_0x0.fData[iVar2] + iVar3) = inFlags;
  return;
}

bool cFixedWorldImpl::IsOutside(CTilePt &in) {
	cArray<unsigned char> *this;
	CTilePt &in;
	
  cArray_unsigned_char_ *pcVar1;
  int iVar2;
  int iVar3;
  
  GetLevel__C7CTilePt(in);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
  pcVar1 = this->mFlagLayer;
  iVar2 = GetX__C7CTilePt(in);
  iVar3 = GetY__C7CTilePt(in);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
  return (bool)(*(byte *)((int)(pcVar1->field0_0x0).field0_0x0.fData[iVar2] + iVar3) >> 2 & 1);
}

bool cFixedWorldImpl::HasWalls(CTilePt &where, TileWallsSegment inSeg) {
	cArray<TileWallStorage> *this;
	CTilePt &in;
	
  CWallArray *pCVar1;
  int iVar2;
  int iVar3;
  
  GetLevel__C7CTilePt(where);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
  pCVar1 = this->mWallLayer;
  iVar2 = GetX__C7CTilePt(where);
  iVar3 = GetY__C7CTilePt(where);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
  return (*(byte *)((int)(pCVar1->field0_0x0).field0_0x0.field0_0x0.fData[iVar2] + iVar3 * 8) &
         inSeg) == inSeg;
}

bool cFixedWorldImpl::HasWalls(CTilePt &where) {
	cArray<TileWallStorage> *this;
	CTilePt &in;
	
  CWallArray *pCVar1;
  int iVar2;
  int iVar3;
  
  GetLevel__C7CTilePt(where);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
  pCVar1 = this->mWallLayer;
  iVar2 = GetX__C7CTilePt(where);
  iVar3 = GetY__C7CTilePt(where);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
  return *(char *)((int)(pCVar1->field0_0x0).field0_0x0.field0_0x0.fData[iVar2] + iVar3 * 8) != '\0'
  ;
}

TileWallStorage& cFixedWorldImpl::GetWallStorage(CTilePt &where) {
	cArray<TileWallStorage> *this;
	CTilePt &in;
	
  CWallArray *pCVar1;
  int iVar2;
  int iVar3;
  
  GetLevel__C7CTilePt(where);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
  pCVar1 = this->mWallLayer;
  iVar2 = GetX__C7CTilePt(where);
  iVar3 = GetY__C7CTilePt(where);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
  return (TileWallStorage *)
         ((int)(pCVar1->field0_0x0).field0_0x0.field0_0x0.fData[iVar2] + iVar3 * 8);
}

void cFixedWorldImpl::SetWallStorage(CTilePt &where, TileWallStorage &in) {
	cArray<TileWallStorage> *this;
	CTilePt &in;
	
  uint uVar1;
  uint uVar2;
  CWallArray *pCVar3;
  ulong *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  void *pvVar8;
  
  GetLevel__C7CTilePt(where);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
  pCVar3 = this->mWallLayer;
  iVar5 = GetX__C7CTilePt(where);
  iVar6 = GetY__C7CTilePt(where);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
  pvVar8 = (void *)((int)(pCVar3->field0_0x0).field0_0x0.field0_0x0.fData[iVar5] + iVar6 * 8);
                    /* end of inlined section */
  uVar1 = (uint)&in->field7_0x7 & 7;
  uVar2 = (uint)in & 7;
  uVar7 = (*(long *)(&in->field7_0x7 + -uVar1) << (7 - uVar1) * 8 |
          (long)(iVar6 * 8) & 0xffffffffffffffffU >> (uVar1 + 1) * 8) & -1L << (8 - uVar2) * 8 |
          *(ulong *)((int)in - uVar2) >> uVar2 * 8;
  uVar1 = (int)pvVar8 + 7U & 7;
  puVar4 = (ulong *)(((int)pvVar8 + 7U) - uVar1);
  *puVar4 = *puVar4 & -1L << (uVar1 + 1) * 8 | uVar7 >> (7 - uVar1) * 8;
  uVar1 = (uint)pvVar8 & 7;
  *(ulong *)((int)pvVar8 - uVar1) =
       uVar7 << uVar1 * 8 | *(ulong *)((int)pvVar8 - uVar1) & 0xffffffffffffffffU >> (8 - uVar1) * 8
  ;
  return;
}

VertexConfig cFixedWorldImpl::GetVertexConfig(CTilePt &where) {
	cArray<VertexConfig> *this;
	CTilePt &in;
	
  int iVar1;
  int iVar2;
  int iVar3;
  CTilePt *in_a2_lo;
  
  GetLevel__C7CTilePt(in_a2_lo);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
  iVar1 = *(int *)&where[0xd].mY;
  iVar2 = GetX__C7CTilePt(in_a2_lo);
  iVar3 = GetY__C7CTilePt(in_a2_lo);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
  __12VertexConfigRC12VertexConfig
            ((VertexConfig *)this,
             (VertexConfig *)(*(int *)(iVar2 * 4 + *(int *)(iVar1 + 0xc)) + iVar3));
  return (VertexConfig)(uchar)this;
}

void cFixedWorldImpl::SetVertexConfig(CTilePt &inPt, VertexConfig &inCfg) {
	cArray<VertexConfig> *this;
	CTilePt &in;
	
  cArray_VertexConfig_ *pcVar1;
  int iVar2;
  int iVar3;
  
  GetLevel__C7CTilePt(inPt);
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
  pcVar1 = this->mVertexConfigs;
  iVar2 = GetX__C7CTilePt(inPt);
  iVar3 = GetY__C7CTilePt(inPt);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
                    /* end of inlined section */
  __as__12VertexConfigRC12VertexConfig
            ((VertexConfig *)((int)(pcVar1->field0_0x0).field0_0x0.fData[iVar2] + iVar3),inCfg);
  return;
}

LightEntry& cFixedWorldImpl::GetLightEntry(CTilePt &inWhere) {
  LightLayer__vtable *pLVar1;
  LightEntry *pLVar2;
  
  pLVar1 = this->mLightLayer->__vtable;
  pLVar2 = (LightEntry *)
           (*(code *)pLVar1->DoOffset)
                     ((int)&this->mLightLayer->__vtable + (int)*(short *)&pLVar1->RemoveLight,
                      inWhere);
  return pLVar2;
}

void cFixedWorldImpl::SetLightEntry(CTilePt &inWhere, LightEntry &inEntry) {
  LightLayer__vtable *pLVar1;
  
  pLVar1 = this->mLightLayer->__vtable;
  (*(code *)pLVar1[1].LightLayer)
            ((int)&this->mLightLayer->__vtable + (int)*(short *)(pLVar1 + 1),inWhere,inEntry);
  return;
}

int cFixedWorldImpl::MayEditTile(CTilePt &inWhere) {
	cArray<unsigned char> *this;
	CTilePt &in;
	
  cArray_unsigned_char_ *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  if (*(int *)&(_5Globs_pEORGlobals->Cheats).gAllowMovingAllObjects == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/newarray2d.h */
    pcVar1 = this->mFlagLayer;
    iVar2 = GetX__C7CTilePt(inWhere);
    iVar3 = GetY__C7CTilePt(inWhere);
                    /* end of inlined section */
    uVar4 = (*(byte *)((int)(pcVar1->field0_0x0).field0_0x0.fData[iVar2] + iVar3) >> 5 ^ 1) & 1;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

void CreateTheWorld() {
  cFixedWorldImpl *this;
  
  this = (cFixedWorldImpl *)__builtin_new(0x34);
  _5Globs_pFixedWorld = (cFixedWorld *)__15cFixedWorldImpli(this,0x40);
  return;
}

void DestroyTheWorld() {
	cFixedWorldImpl *world;
	
  if (_5Globs_pFixedWorld != (cFixedWorld *)0x0) {
    (*(code *)_5Globs_pFixedWorld->__vtable->Load)
              ((int)&_5Globs_pFixedWorld->__vtable +
               (int)*(short *)&_5Globs_pFixedWorld->__vtable->Save,3);
  }
  _5Globs_pFixedWorld = (cFixedWorld *)0x0;
  return;
}

bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2) {
  char cVar1;
  char cVar2;
  
  do {
    if ((first1 == last1) || (first2 == last2)) {
      return first1 == last1 && first2 != last2;
    }
    cVar1 = *first1;
    cVar2 = *first2;
    if (cVar1 < cVar2) {
      return true;
    }
    first1 = first1 + 1;
    first2 = first2 + 1;
  } while (cVar1 <= cVar2);
  return false;
}

CTilePt* CTilePt * copy_backward<CTilePt *, CTilePt *>(CTilePt *first, CTilePt *last, CTilePt *result) {
  bool bVar1;
  CTilePt *in;
  
  if (first != last) {
    in = last + -1;
    do {
      result = result + -1;
      __as__7CTilePtRC7CTilePt(result,in);
      bVar1 = first != in;
      in = in + -1;
    } while (bVar1);
  }
  return result;
}

void* __malloc_alloc_template<0>::oom_malloc(unsigned int n) {
  void *pvVar1;
  
  do {
    (*(code *)0x0)();
    pvVar1 = malloc(n);
  } while (pvVar1 == (void *)0x0);
  return pvVar1;
}

CTilePt* CTilePt * uninitialized_copy<CTilePt *, CTilePt *>(CTilePt *first, CTilePt *last, CTilePt *result) {
	CTilePt *p;
	CTilePt &value;
	void *pAddress;
	
  CTilePt *pCVar1;
  CTilePt *this;
  
  this = result;
  if (first != last) {
    do {
      pCVar1 = first + 1;
      result = this + 1;
      __7CTilePtRC7CTilePt(this,first);
      first = pCVar1;
      this = result;
    } while (pCVar1 != last);
  }
  return result;
}

void vector<CTilePt, __malloc_alloc_template<0> >::insert_aux(CTilePt *position, CTilePt &x) {
	CTilePt x_copy;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	void *result;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	CTilePt &value;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	CTilePt *first;
	CTilePt *pointer;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	
  int iVar1;
  int iVar2;
  CTilePt *pCVar3;
  CTilePt *pCVar4;
  CTilePt *this_00;
  int iVar5;
  int iVar6;
  CTilePt x_copy;
  
  pCVar3 = this->finish;
  if (pCVar3 == this->end_of_storage) {
    pCVar4 = this->start;
    iVar1 = ((int)pCVar3 - (int)pCVar4) * -0x55555555;
    iVar6 = ((int)pCVar3 - (int)pCVar4) * 0x55555556;
    iVar5 = iVar6;
    if (iVar1 == 0) {
      iVar6 = 0;
      iVar5 = 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    iVar2 = iVar5 * 2;
    if (iVar5 == 0) {
      pCVar3 = (CTilePt *)0x0;
      iVar2 = 0;
    }
    else {
      pCVar3 = (CTilePt *)malloc(iVar5 * 3);
      if (pCVar3 == (CTilePt *)0x0) {
        pCVar3 = (CTilePt *)oom_malloc__t23__malloc_alloc_template1i0Ui(iVar5 * 3);
      }
      pCVar4 = this->start;
    }
                    /* end of inlined section */
    uninitialized_copy__H2ZP7CTilePtZP7CTilePt_X01X01X11_X11(pCVar4,position,pCVar3);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    __7CTilePtRC7CTilePt((CTilePt *)((int)pCVar3 + ((int)position - (int)this->start)),x);
                    /* end of inlined section */
    uninitialized_copy__H2ZP7CTilePtZP7CTilePt_X01X01X11_X11
              (position,this->finish,
               (CTilePt *)((int)pCVar3 + (int)position + (3 - (int)this->start)));
    pCVar4 = this->finish;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    this_00 = this->start;
    if (this_00 == pCVar4) {
      pCVar4 = this->start;
    }
    else {
      do {
        ___7CTilePt(this_00,2);
        this_00 = this_00 + 1;
      } while (this_00 != pCVar4);
                    /* end of inlined section */
      pCVar4 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((pCVar4 != (CTilePt *)0x0) && (((int)this->end_of_storage - (int)pCVar4) * -0x55555555 != 0)
       ) {
      free(pCVar4);
                    /* end of inlined section */
    }
    this->start = pCVar3;
    this->end_of_storage = (CTilePt *)(&pCVar3->mX + iVar2 + iVar5);
    this->finish = (CTilePt *)((int)pCVar3 + iVar6 + iVar1 + 3);
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    __7CTilePtRC7CTilePt(pCVar3,pCVar3 + -1);
                    /* end of inlined section */
    __7CTilePtRC7CTilePt(&x_copy,x);
    copy_backward__H2ZP7CTilePtZP7CTilePt_X01X01X11_X11(position,this->finish + -1,this->finish);
    __as__7CTilePtRC7CTilePt(position,&x_copy);
    this->finish = this->finish + 1;
    ___7CTilePt(&x_copy,2);
  }
  return;
}

void cFixedWorld::~cFixedWorld(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (cFixedWorld__vtable *)_vt_11cFixedWorld;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

WallManager* cFixedWorldImpl::GetWallManager() {
  return this->mWallManager;
}

LightLayer* cFixedWorldImpl::GetLightLayer(int inLevel) {
  return this->mLightLayer;
}

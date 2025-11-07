// STATUS: NOT STARTED

#include "e_ps2rc.h"

struct TFixedPool<EPs2RC,4> : EFixedPool {
protected:
	unsigned int m_buffer[104];
	
public:
	TFixedPool<EPs2RC,4>& operator=();
	TFixedPool();
	TFixedPool(TFixedPool<EPs2RC,4>*, int, void);
	TFixedPool();
	EPs2RC* Alloc();
	void Free();
protected:
	void Free();
};

TFixedPool<EPs2RC,4> _ps2rendercontext_pool = {
	/* base class 0 = */ {
		/* .m_pFreeObjHead = */ NULL,
		/* .m_pData = */ NULL
	},
	/* .m_buffer = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0,
		/* [5] = */ 0,
		/* [6] = */ 0,
		/* [7] = */ 0,
		/* [8] = */ 0,
		/* [9] = */ 0,
		/* [10] = */ 0,
		/* [11] = */ 0,
		/* [12] = */ 0,
		/* [13] = */ 0,
		/* [14] = */ 0,
		/* [15] = */ 0,
		/* [16] = */ 0,
		/* [17] = */ 0,
		/* [18] = */ 0,
		/* [19] = */ 0,
		/* [20] = */ 0,
		/* [21] = */ 0,
		/* [22] = */ 0,
		/* [23] = */ 0,
		/* [24] = */ 0,
		/* [25] = */ 0,
		/* [26] = */ 0,
		/* [27] = */ 0,
		/* [28] = */ 0,
		/* [29] = */ 0,
		/* [30] = */ 0,
		/* [31] = */ 0,
		/* [32] = */ 0,
		/* [33] = */ 0,
		/* [34] = */ 0,
		/* [35] = */ 0,
		/* [36] = */ 0,
		/* [37] = */ 0,
		/* [38] = */ 0,
		/* [39] = */ 0,
		/* [40] = */ 0,
		/* [41] = */ 0,
		/* [42] = */ 0,
		/* [43] = */ 0,
		/* [44] = */ 0,
		/* [45] = */ 0,
		/* [46] = */ 0,
		/* [47] = */ 0,
		/* [48] = */ 0,
		/* [49] = */ 0,
		/* [50] = */ 0,
		/* [51] = */ 0,
		/* [52] = */ 0,
		/* [53] = */ 0,
		/* [54] = */ 0,
		/* [55] = */ 0,
		/* [56] = */ 0,
		/* [57] = */ 0,
		/* [58] = */ 0,
		/* [59] = */ 0,
		/* [60] = */ 0,
		/* [61] = */ 0,
		/* [62] = */ 0,
		/* [63] = */ 0,
		/* [64] = */ 0,
		/* [65] = */ 0,
		/* [66] = */ 0,
		/* [67] = */ 0,
		/* [68] = */ 0,
		/* [69] = */ 0,
		/* [70] = */ 0,
		/* [71] = */ 0,
		/* [72] = */ 0,
		/* [73] = */ 0,
		/* [74] = */ 0,
		/* [75] = */ 0,
		/* [76] = */ 0,
		/* [77] = */ 0,
		/* [78] = */ 0,
		/* [79] = */ 0,
		/* [80] = */ 0,
		/* [81] = */ 0,
		/* [82] = */ 0,
		/* [83] = */ 0,
		/* [84] = */ 0,
		/* [85] = */ 0,
		/* [86] = */ 0,
		/* [87] = */ 0,
		/* [88] = */ 0,
		/* [89] = */ 0,
		/* [90] = */ 0,
		/* [91] = */ 0,
		/* [92] = */ 0,
		/* [93] = */ 0,
		/* [94] = */ 0,
		/* [95] = */ 0,
		/* [96] = */ 0,
		/* [97] = */ 0,
		/* [98] = */ 0,
		/* [99] = */ 0,
		/* [100] = */ 0,
		/* [101] = */ 0,
		/* [102] = */ 0,
		/* [103] = */ 0
	}
};

int _cpuline = 0;

__vtbl_ptr_type EPs2RC virtual table[74] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::~EPs2RC,
		/* .__delta2 = */ 31072
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::TriStrip,
		/* .__delta2 = */ 32616
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::TriStrip,
		/* .__delta2 = */ -32080
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::TriStrip,
		/* .__delta2 = */ -30368
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::TriIndexed,
		/* .__delta2 = */ -17920
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::Vertex,
		/* .__delta2 = */ -18168
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::TriFan,
		/* .__delta2 = */ -27384
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::TriList,
		/* .__delta2 = */ -27216
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::QuadList,
		/* .__delta2 = */ -27048
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::LineList,
		/* .__delta2 = */ -32200
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::LineStrip,
		/* .__delta2 = */ -26712
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::PointList,
		/* .__delta2 = */ -26544
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::PointList,
		/* .__delta2 = */ -13904
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::SpriteList,
		/* .__delta2 = */ -26144
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::ParticleList,
		/* .__delta2 = */ -15912
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::ParticleListRot,
		/* .__delta2 = */ -15824
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::SpriteList,
		/* .__delta2 = */ -25976
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::DisplayList,
		/* .__delta2 = */ -20856
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::Goto,
		/* .__delta2 = */ -25112
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::Viewport,
		/* .__delta2 = */ -14456
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::ClipRatio,
		/* .__delta2 = */ -14208
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::ClipRect,
		/* .__delta2 = */ -24360
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::Scissor,
		/* .__delta2 = */ -28656
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::ModelMatrices,
		/* .__delta2 = */ -27464
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::ModelMatrix,
		/* .__delta2 = */ -17144
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::ModelMatrixId,
		/* .__delta2 = */ -23720
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::ViewMatrix,
		/* .__delta2 = */ -14952
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::ProjectionMatrix,
		/* .__delta2 = */ -14704
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::WindowMatrix,
		/* .__delta2 = */ -15200
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::EnvironmentMap,
		/* .__delta2 = */ -20240
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::TextureMatrix,
		/* .__delta2 = */ -16792
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::Texture,
		/* .__delta2 = */ -20288
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::EnableGeometryModes,
		/* .__delta2 = */ -24104
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::DisableGeometryModes,
		/* .__delta2 = */ -23872
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::SetGeometryModes,
		/* .__delta2 = */ -23624
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::EnableRasterModes,
		/* .__delta2 = */ -23392
	},
	/* [37] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::DisableRasterModes,
		/* .__delta2 = */ -23136
	},
	/* [38] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::SetRasterModes,
		/* .__delta2 = */ -22880
	},
	/* [39] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::SaveState,
		/* .__delta2 = */ -22272
	},
	/* [40] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::RestoreState,
		/* .__delta2 = */ -22160
	},
	/* [41] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::Lights,
		/* .__delta2 = */ -18456
	},
	/* [42] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::PointLight,
		/* .__delta2 = */ -21904
	},
	/* [43] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::Material,
		/* .__delta2 = */ -18688
	},
	/* [44] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::Callback,
		/* .__delta2 = */ -21176
	},
	/* [45] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::Rect,
		/* .__delta2 = */ -22472
	},
	/* [46] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::RectList,
		/* .__delta2 = */ -17904
	},
	/* [47] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::DirectRect,
		/* .__delta2 = */ -21712
	},
	/* [48] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::SendHardwareDisplayList,
		/* .__delta2 = */ -26720
	},
	/* [49] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::Memcpy,
		/* .__delta2 = */ -19768
	},
	/* [50] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::MipMapSetup,
		/* .__delta2 = */ -26008
	},
	/* [51] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::SetMipMap,
		/* .__delta2 = */ -25656
	},
	/* [52] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::RecalcMatrices,
		/* .__delta2 = */ -19600
	},
	/* [53] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::ZTest,
		/* .__delta2 = */ -16920
	},
	/* [54] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::AlphaTest,
		/* .__delta2 = */ -17112
	},
	/* [55] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::RenderSurface,
		/* .__delta2 = */ -18440
	},
	/* [56] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::Debug,
		/* .__delta2 = */ -26088
	},
	/* [57] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::SaveImageData,
		/* .__delta2 = */ -18296
	},
	/* [58] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::SetCombineMode,
		/* .__delta2 = */ -18584
	},
	/* [59] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::SetBlendMode,
		/* .__delta2 = */ -18808
	},
	/* [60] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::SleepUntil,
		/* .__delta2 = */ -18072
	},
	/* [61] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::Noop,
		/* .__delta2 = */ -17768
	},
	/* [62] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::ZClear,
		/* .__delta2 = */ -17656
	},
	/* [63] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::MovieFrame,
		/* .__delta2 = */ -17272
	},
	/* [64] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::LoadMPG,
		/* .__delta2 = */ -24536
	},
	/* [65] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::Init,
		/* .__delta2 = */ 31208
	},
	/* [66] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::Terminate,
		/* .__delta2 = */ -22624
	},
	/* [67] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::NewEntry,
		/* .__delta2 = */ -28208
	},
	/* [68] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::BeginCommand,
		/* .__delta2 = */ 31472
	},
	/* [69] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERC::EndCommand,
		/* .__delta2 = */ -28432
	},
	/* [70] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::GeometrySetup,
		/* .__delta2 = */ -26208
	},
	/* [71] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::FlushQueuedMatrices,
		/* .__delta2 = */ -27000
	},
	/* [72] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2RC::QueueMatrices,
		/* .__delta2 = */ -27312
	},
	/* [73] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

static float cPi = 3.14159274f;
static double cdPi = 3.1415927410125732;
static float cGravity = 32.2f;
static u32 cScratchPadBase = 0;
static u32 cScratchPadSize = 16384;
static EPs2GeometryEngineData *_pGE = 0x1100c000;
static u32 _offsVerts = 80;
static u32 _offsParams = 16;

long long unsigned int _zeroBuf[16] = {
	/* [0] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
	/* [1] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
	/* [2] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
	/* [3] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
	/* [4] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
	/* [5] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
	/* [6] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
	/* [7] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
	/* [8] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
	/* [9] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
	/* [10] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
	/* [11] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
	/* [12] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
	/* [13] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
	/* [14] = */ VECTOR(0.f, 0.f, 0.f, 0.f),
	/* [15] = */ VECTOR(0.f, 0.f, 0.f, 0.f)
};

void EPs2RC::~EPs2RC(int __in_chrg) {
  (this->field0_0x0).__vtable = (ERC__vtable *)_vt_6EPs2RC;
  ___4EVif(&this->m_vif,2);
  ___3ERC(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
    __dl__6EPs2RCPv(this);
  }
  return;
}

void EPs2RC::Init(RCMode mode) {
  Init__3ERC6RCMode(&this->field0_0x0,mode);
  *(undefined4 *)&this->m_inDmaChain = 0;
  this->m_pDmaBuf = (uint *)0x0;
  this->m_pLastBranch = (uint *)0x0;
  (this->field0_0x0).m_lastCommand = -1;
  this->m_nChains = 0;
  this->m_nChainBreaks = 0;
  this->m_endMutex = 0;
  this->m_dmaBranchCount = 0;
  this->m_curMPG = -1;
  this->m_curInputBuffer = 0;
  return;
}

void* EPs2RC::operator new() {
  EPs2RC *pEVar1;
  
  pEVar1 = Alloc__t10TFixedPool2Z6EPs2RCi4(&_ps2rendercontext_pool);
  return pEVar1;
}

void EPs2RC::operator delete(void *p) {
  Free__t10TFixedPool2Z6EPs2RCi4P6EPs2RC(&_ps2rendercontext_pool,(EPs2RC *)p);
  return;
}

void EPs2RC::BeginCommand(int command, int prim) {
  BeginCommand__3ERCii(&this->field0_0x0,command,prim);
  this->m_nChainBreaks = this->m_nChainBreaks + 1;
  EndDma__6EPs2RCb(this,false);
  return;
}

u32* EPs2RC::BeginDma(bool branch) {
  uint *puVar1;
  
  if (*(int *)&this->m_inDmaChain == 0) {
    *(undefined4 *)&this->m_inDmaChain = 1;
    if (this->m_pDmaBuf == (uint *)0x0) {
      puVar1 = (uint *)_memmanAlloc__FUiUi(0x1000,0x10);
      this->m_pDmaBuf = puVar1;
    }
    Begin__4EVifPvi(&this->m_vif,this->m_pDmaBuf,0x1000);
    if (branch) {
      this->m_dmaBranchCount = this->m_dmaBranchCount + 1;
    }
    else {
      this->m_dmaBranchCount = 0;
      this->m_nChains = this->m_nChains + 1;
      this->m_pLastBranch = (uint *)0x0;
    }
    puVar1 = this->m_pDmaBuf;
  }
  else {
    puVar1 = (uint *)0x0;
  }
  return puVar1;
}

u32* EPs2RC::EndDma(bool branch) {
	u32 *rVal;
	void *pDmaStart;
	int nDmaBytes;
	u32 *pSmallBuf;
	EDLEntryCommandU16andU32 *p;
	
  ERC__vtable *pEVar1;
  uint *puVar2;
  uint size;
  undefined *puVar3;
  uint *rVal;
  void *pDmaStart;
  int nDmaBytes;
  uint *pSmallBuf;
  
  if (*(int *)&this->m_inDmaChain == 0) {
    puVar2 = (uint *)0x0;
  }
  else {
    this->m_endMutex = this->m_endMutex + 1;
    if (!branch) {
      BeginCommand__3ERCii(&this->field0_0x0,0,0);
      ExecuteFunction__4EVifUi(&this->m_vif,pvu1SendInterrupt >> 3 | 0x15000000);
    }
    puVar2 = AddDmaTag__4EVifUiPvi(&this->m_vif,6,(void *)0x0,0);
    End__4EVif(&this->m_vif);
    *(undefined4 *)&this->m_inDmaChain = 0;
    size = (int)(this->m_vif).m_pEnd - (int)(this->m_vif).m_pStart;
    if ((int)size < 0x801) {
      if ((this->field0_0x0).m_mode == RC_IMMEDIATE) {
        pSmallBuf = (uint *)AllocFlushable__3ERCUii(&this->field0_0x0,size,0x10);
      }
      else {
        pSmallBuf = (uint *)_memmanAlloc__FUiUi(size,0x10);
        AllocFlushableExternal__3ERCPvi(&this->field0_0x0,pSmallBuf,size);
      }
      pDmaStart = pSmallBuf;
      memcpy(pSmallBuf,this->m_pDmaBuf,size);
      if (this->m_pLastBranch != (uint *)0x0) {
        *this->m_pLastBranch = (uint)pSmallBuf;
        this->m_pLastBranch = (uint *)0x0;
      }
    }
    else {
      pDmaStart = this->m_pDmaBuf;
      AllocFlushableExternal__3ERCPvi(&this->field0_0x0,this->m_pDmaBuf,0x1000);
      this->m_pDmaBuf = (uint *)0x0;
    }
    SyncDCache(pDmaStart,(int)pDmaStart + (size - 1));
    if (this->m_dmaBranchCount == 0) {
      pEVar1 = (this->field0_0x0).__vtable;
      puVar3 = (undefined *)
               (*(code *)pEVar1[1].ZClear)
                         ((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Noop,1);
      *puVar3 = 0x20;
      *(void **)(puVar3 + 4) = pDmaStart;
      *(short *)(puVar3 + 2) = (short)((int)size >> 4);
    }
    this->m_endMutex = this->m_endMutex + -1;
  }
  return puVar2;
}

bool EPs2RC::VerifyDmaChainSize(int nNewBytes) {
	u32 nUsedBytes;
	u32 *pOldTag;
	u32 *pNewTag;
	
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint nUsedBytes;
  uint *pOldTag;
  uint *pNewTag;
  
  bVar1 = (uint)((int)(this->m_vif).m_pEnd + (nNewBytes - (int)(this->m_vif).m_pStart)) < 0xfc1;
  if (!bVar1) {
    puVar2 = EndDma__6EPs2RCb(this,true);
    puVar3 = BeginDma__6EPs2RCb(this,true);
    *puVar2 = 0x20000000;
    puVar2[1] = (uint)puVar3;
    this->m_pLastBranch = puVar2 + 1;
  }
  return bVar1;
}

void EPs2RC::TriStrip(EGEVert *verts, int nVerts) {
	int maxLoad;
	int maxAdvance;
	EGEVert *pVerts;
	int v;
	int thisLoad;
	int thisAdvance;
	unsigned int params[4];
	EPs2GEInputBuffer *pInputBuffer;
	u32 nBytes;
	
  ERC__vtable *pEVar1;
  int iVar2;
  int local_7c;
  int v;
  int maxLoad;
  int maxAdvance;
  EGEVert *pVerts;
  int thisLoad;
  int thisAdvance;
  uint params [4];
  EPs2GEInputBuffer *pInputBuffer;
  uint nBytes;
  
  for (v = 0; v < nVerts; v = v + 1) {
    verts[v].vModel.field0_0x0.d[3] = (float)((uint)verts[v].vModel.field0_0x0.d[3] & 0xffff7fff);
  }
  VerifyMPG__6EPs2RCi(this,1);
  BeginCommand__3ERCii(&this->field0_0x0,2,1);
  BeginDma__6EPs2RCb(this,false);
  ((this->field0_0x0).m_pdl)->m_nVerts = ((this->field0_0x0).m_pdl)->m_nVerts + nVerts;
  local_7c = nVerts;
  pVerts = verts;
  do {
    if (local_7c < 0x2b) {
      thisLoad = local_7c;
      thisAdvance = local_7c;
    }
    else {
      thisLoad = 0x2a;
      thisAdvance = 0x28;
    }
    ((this->field0_0x0).m_pdl)->m_stripSum = ((this->field0_0x0).m_pdl)->m_stripSum + thisLoad;
    ((this->field0_0x0).m_pdl)->m_nStrips = ((this->field0_0x0).m_pdl)->m_nStrips + 1;
    params[0] = thisLoad;
    params[1] = 0x11111111;
    params[2] = 0x22222222;
    params[3] = 0x33333333;
    VerifyDmaChainSize__6EPs2RCi(this,0x48);
    iVar2 = this->m_curInputBuffer * 0xd80;
    AddDataRef__6EPs2RCPvT1i(this,(void *)(iVar2 + 0x1100ceb0),pVerts,thisLoad * 0x50);
    AddDataImmediate__6EPs2RCPvT1i(this,(void *)(iVar2 + 0x1100ce70),params,0x10);
    CallVU1__6EPs2RCUib(this,pvu1TriStrip >> 3,true);
    VerifyDmaChainSize__6EPs2RCi(this,0);
    local_7c = local_7c - thisAdvance;
    pVerts = pVerts + thisAdvance;
  } while (local_7c != 0);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

void EPs2RC::LineList(EGEVert *verts, int nVerts) {
  if (_cpuline == 0) {
    LineList__3ERCPC7EGEVerti(&this->field0_0x0,verts,nVerts);
  }
  else {
    LineList__3ERCPC7EGEVerti(&this->field0_0x0,verts,nVerts);
  }
  return;
}

void EPs2RC::TriStrip(int nVerts, float *xyzs, float *texcoords, u8 *colors, s8 *normals, u8 *weights) {
	int maxLoad;
	int maxAdvance;
	EVif *pVif;
	int nLoaded;
	int thisLoad;
	int thisAdvance;
	EPs2GEInputBuffer *pInputBuffer;
	u32 pDst;
	unsigned int params[4];
	int bytesPerPacket;
	int nPackets;
	int nBytes;
	u128 *pSrc;
	
  ERC__vtable *pEVar1;
  EVif *this_00;
  int local_a0;
  int maxLoad;
  int maxAdvance;
  EVif *pVif;
  int nLoaded;
  int thisLoad;
  int thisAdvance;
  EPs2GEInputBuffer *pInputBuffer;
  uint pDst;
  uint params [4];
  int bytesPerPacket;
  int nPackets;
  int nBytes;
  uint16 *pSrc;
  
  VerifyMPG__6EPs2RCi(this,1);
  BeginCommand__3ERCii(&this->field0_0x0,2,1);
  BeginDma__6EPs2RCb(this,false);
  ((this->field0_0x0).m_pdl)->m_nVerts = ((this->field0_0x0).m_pdl)->m_nVerts + nVerts;
  this_00 = &this->m_vif;
  nLoaded = 0;
  local_a0 = nVerts;
  do {
    if (local_a0 < 0x27) {
      thisLoad = local_a0;
      thisAdvance = local_a0;
    }
    else {
      thisLoad = 0x26;
      thisAdvance = 0x24;
    }
    ((this->field0_0x0).m_pdl)->m_stripSum = ((this->field0_0x0).m_pdl)->m_stripSum + thisLoad;
    ((this->field0_0x0).m_pdl)->m_nStrips = ((this->field0_0x0).m_pdl)->m_nStrips + 1;
    VerifyDmaChainSize__6EPs2RCi(this,0x70);
    params[0] = thisLoad;
    AddDataImmediate__6EPs2RCPvT1i
              (this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ce70),params,0x10);
    AddDmaTag__4EVifUiPvi(this_00,3,xyzs + nLoaded * 4,thisLoad * 0x10 >> 4);
    AddVifTag__4EVifUi(this_00,0x1000105);
    AddVifTag__4EVifUi(this_00,thisLoad << 0x10 | 0x6c008005);
    if (normals != (char *)0x0) {
      nPackets = thisLoad;
      for (nBytes = thisLoad * 4; (nBytes & 0xfU) != 0; nBytes = nBytes + 4) {
        nPackets = nPackets + 1;
      }
      AddDmaTag__4EVifUiPvi(this_00,3,normals + nLoaded * 4,nBytes >> 4);
      AddVifTag__4EVifUi(this_00,0);
      AddVifTag__4EVifUi(this_00,nPackets << 0x10 | 0x6e008006);
    }
    if (texcoords != (float *)0x0) {
      nPackets = thisLoad;
      for (nBytes = thisLoad * 8; (nBytes & 0xfU) != 0; nBytes = nBytes + 8) {
        nPackets = nPackets + 1;
      }
      AddDmaTag__4EVifUiPvi(this_00,3,texcoords + nLoaded * 2,nBytes >> 4);
      AddVifTag__4EVifUi(this_00,0);
      AddVifTag__4EVifUi(this_00,nPackets << 0x10 | 0x64008007);
    }
    if (colors != (uchar *)0x0) {
      nPackets = thisLoad;
      for (nBytes = thisLoad * 4; (nBytes & 0xfU) != 0; nBytes = nBytes + 4) {
        nPackets = nPackets + 1;
      }
      AddDmaTag__4EVifUiPvi(this_00,3,colors + nLoaded * 4,nBytes >> 4);
      AddVifTag__4EVifUi(this_00,0);
      AddVifTag__4EVifUi(this_00,nPackets << 0x10 | 0x6e00c008);
    }
    if (weights != (uchar *)0x0) {
      nPackets = thisLoad;
      for (nBytes = thisLoad * 4; (nBytes & 0xfU) != 0; nBytes = nBytes + 4) {
        nPackets = nPackets + 1;
      }
      AddDmaTag__4EVifUiPvi(this_00,3,weights + nLoaded * 4,nBytes >> 4);
      AddVifTag__4EVifUi(this_00,0);
      AddVifTag__4EVifUi(this_00,nPackets << 0x10 | 0x6e00c009);
    }
    AddDmaTag__4EVifUiPvi(this_00,1,(void *)0x0,0);
    AddVifTag__4EVifUi(this_00,0x1000404);
    ExecuteFunction__4EVifUi(this_00,pvu1TriStrip >> 3);
    VerifyDmaChainSize__6EPs2RCi(this,0);
    local_a0 = local_a0 - thisAdvance;
    nLoaded = nLoaded + thisAdvance;
  } while (local_a0 != 0);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

void EPs2RC::TriStrip(int nVerts, s16 *xyzs, s16 *texcoords, u8 *colors, s8 *normals, u8 *weights) {
	int maxLoad;
	int maxAdvance;
	EVif *pVif;
	int nLoaded;
	int thisLoad;
	int thisAdvance;
	EPs2GEInputBuffer *pInputBuffer;
	u32 pDst;
	unsigned int params[4];
	int bytesPerPacket;
	int nPackets;
	int nBytes;
	u128 *pSrc;
	
  ERC__vtable *pEVar1;
  EVif *this_00;
  int local_a0;
  int maxLoad;
  int maxAdvance;
  EVif *pVif;
  int nLoaded;
  int thisLoad;
  int thisAdvance;
  EPs2GEInputBuffer *pInputBuffer;
  uint pDst;
  uint params [4];
  int bytesPerPacket;
  int nPackets;
  int nBytes;
  uint16 *pSrc;
  
  VerifyMPG__6EPs2RCi(this,1);
  BeginCommand__3ERCii(&this->field0_0x0,2,1);
  BeginDma__6EPs2RCb(this,false);
  ((this->field0_0x0).m_pdl)->m_nVerts = ((this->field0_0x0).m_pdl)->m_nVerts + nVerts;
  this_00 = &this->m_vif;
  nLoaded = 0;
  local_a0 = nVerts;
  do {
    if (local_a0 < 0x27) {
      thisLoad = local_a0;
      thisAdvance = local_a0;
    }
    else {
      thisLoad = 0x26;
      thisAdvance = 0x24;
    }
    ((this->field0_0x0).m_pdl)->m_stripSum = ((this->field0_0x0).m_pdl)->m_stripSum + thisLoad;
    ((this->field0_0x0).m_pdl)->m_nStrips = ((this->field0_0x0).m_pdl)->m_nStrips + 1;
    VerifyDmaChainSize__6EPs2RCi(this,0x70);
    params[0] = thisLoad;
    AddDataImmediate__6EPs2RCPvT1i
              (this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ce70),params,0x10);
    nPackets = thisLoad;
    for (nBytes = thisLoad * 8; (nBytes & 0xfU) != 0; nBytes = nBytes + 8) {
      nPackets = nPackets + 1;
    }
    AddDmaTag__4EVifUiPvi(this_00,3,xyzs + nLoaded * 4,nBytes >> 4);
    AddVifTag__4EVifUi(this_00,0x1000105);
    AddVifTag__4EVifUi(this_00,nPackets << 0x10 | 0x6d008005);
    if (normals != (char *)0x0) {
      nPackets = thisLoad;
      for (nBytes = thisLoad * 4; (nBytes & 0xfU) != 0; nBytes = nBytes + 4) {
        nPackets = nPackets + 1;
      }
      AddDmaTag__4EVifUiPvi(this_00,3,normals + nLoaded * 4,nBytes >> 4);
      AddVifTag__4EVifUi(this_00,0);
      AddVifTag__4EVifUi(this_00,nPackets << 0x10 | 0x6e008006);
    }
    if (texcoords != (ushort *)0x0) {
      nPackets = thisLoad;
      for (nBytes = thisLoad * 4; (nBytes & 0xfU) != 0; nBytes = nBytes + 4) {
        nPackets = nPackets + 1;
      }
      AddDmaTag__4EVifUiPvi(this_00,3,texcoords + nLoaded * 2,nBytes >> 4);
      AddVifTag__4EVifUi(this_00,0);
      AddVifTag__4EVifUi(this_00,nPackets << 0x10 | 0x65008007);
    }
    if (colors != (uchar *)0x0) {
      nPackets = thisLoad;
      for (nBytes = thisLoad * 4; (nBytes & 0xfU) != 0; nBytes = nBytes + 4) {
        nPackets = nPackets + 1;
      }
      AddDmaTag__4EVifUiPvi(this_00,3,colors + nLoaded * 4,nBytes >> 4);
      AddVifTag__4EVifUi(this_00,0);
      AddVifTag__4EVifUi(this_00,nPackets << 0x10 | 0x6e00c008);
    }
    if (weights != (uchar *)0x0) {
      nPackets = thisLoad;
      for (nBytes = thisLoad * 4; (nBytes & 0xfU) != 0; nBytes = nBytes + 4) {
        nPackets = nPackets + 1;
      }
      AddDmaTag__4EVifUiPvi(this_00,3,weights + nLoaded * 4,nBytes >> 4);
      AddVifTag__4EVifUi(this_00,0);
      AddVifTag__4EVifUi(this_00,nPackets << 0x10 | 0x6e00c009);
    }
    AddDmaTag__4EVifUiPvi(this_00,1,(void *)0x0,0);
    AddVifTag__4EVifUi(this_00,0x1000404);
    ExecuteFunction__4EVifUi(this_00,pvu1TriStripInt >> 3);
    VerifyDmaChainSize__6EPs2RCi(this,0);
    local_a0 = local_a0 - thisAdvance;
    nLoaded = nLoaded + thisAdvance;
  } while (local_a0 != 0);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

void EPs2RC::Scissor(EFloatRect *pScis) {
	long long unsigned int dl[3];
	u64 *pDL;
	sceGifTag *pGifTag;
	int nqw;
	
  ERC__vtable *pEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  uint16 dl [3];
  ulong *pDL;
  sceGifTag__278_1694 *pGifTag;
  int nqw;
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
  local_30 = (undefined4)unaff_s5;
  uStack_2c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  BeginCommand__3ERCii(&this->field0_0x0,0,0);
  BeginDma__6EPs2RCb(this,false);
  pGifTag = (sceGifTag__278_1694 *)dl;
  dl[1]._0_8_ = (long)(int)(pScis->left + 0.5) | (long)(int)(pScis->right + 0.5) << 0x10 |
                (long)(int)(pScis->top + 0.5) << 0x20 | (long)(int)(pScis->bottom + 0.5) << 0x30;
  dl[1]._8_8_ = 0x40;
  dl[2]._8_8_ = 0x41;
  pDL = (ulong *)&pDL;
  nqw = ((int)pDL - (int)pGifTag >> 3) - ((int)pDL - (int)pGifTag >> 0x1f) >> 1;
  dl[0]._0_8_ = (long)(int)(nqw & 0x7fff) | 0x1000000000008000;
  dl[0]._8_8_ = 0xe;
  dl[2]._0_8_ = (ulong)dl[1];
  VerifyDmaChainSize__6EPs2RCi(this,0x40);
  AddDataImmediate__6EPs2RCPvT1i(this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ceb0),dl,0x30)
  ;
  CallVU1__6EPs2RCUib(this,pvu1DisplayList >> 3,true);
  VerifyDmaChainSize__6EPs2RCi(this,0);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

void EPs2RC::SetGSRegister(int regAddr, u64 value) {
	long unsigned int dl[4];
	sceGifTag *pGifTag;
	
  ERC__vtable *pEVar1;
  ulong dl [4];
  sceGifTag__278_1694 *pGifTag;
  
  BeginCommand__3ERCii(&this->field0_0x0,0,0);
  BeginDma__6EPs2RCb(this,false);
  dl[0] = 0x1000000000008002;
  dl[1] = 0xe;
  dl[3] = (ulong)regAddr;
  dl[2] = value;
  VerifyDmaChainSize__6EPs2RCi(this,0x30);
  AddDataImmediate__6EPs2RCPvT1i(this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ceb0),dl,0x20)
  ;
  CallVU1__6EPs2RCUib(this,pvu1DisplayList >> 3,true);
  VerifyDmaChainSize__6EPs2RCi(this,0);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

void EPs2RC::ModelMatrices(EMat4 *mModels, int pos, int count) {
  ERC__vtable *pEVar1;
  
  BeginCommand__3ERCii(&this->field0_0x0,1,0);
  ModelMatrices__3ERCPC5EMat4ii(&this->field0_0x0,mModels,pos,count);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

void EPs2RC::QueueMatrices(EMat4 *mModels, int pos, int count) {
	u32 nBytes;
	EPs2GEInputBuffer *pInputBuffer;
	u32 pDst;
	
  uint nBytes;
  EPs2GEInputBuffer *pInputBuffer;
  uint pDst;
  
  BeginDma__6EPs2RCb(this,false);
  VerifyDmaChainSize__6EPs2RCi(this,0x20);
  if (((mModels == &_mId) && (pos == 0)) && (count == 1)) {
    CallVU1__6EPs2RCUib(this,pvu1ModelMatrixId >> 3,true);
    CallVU1__6EPs2RCUib(this,pvu1SwapBuffers >> 3,true);
  }
  else {
    AddDataRef__6EPs2RCPvT1i
              (this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ceb0 +
                            (this->field0_0x0).m_dstBufferOffset),mModels,count << 6);
  }
  return;
}

void EPs2RC::FlushQueuedMatrices() {
	int pos;
	int count;
	unsigned int params[4];
	float invScale;
	EPs2GEInputBuffer *pInputBuffer;
	
  int iVar1;
  int pos;
  int count;
  uint params [4];
  float invScale;
  EPs2GEInputBuffer *pInputBuffer;
  
  BeginDma__6EPs2RCb(this,false);
  VerifyDmaChainSize__6EPs2RCi(this,0x20);
  iVar1 = (this->field0_0x0).m_firstMatrixPos;
  params[0] = ((this->field0_0x0).m_lastMatrixPos - (this->field0_0x0).m_firstMatrixPos) + 1;
  FlushQueuedMatrices__3ERC(&this->field0_0x0);
  params[1] = iVar1 * 0x80 + 0x20U >> 4;
  params[2] = 0x3c010204;
  AddDataImmediate__6EPs2RCPvT1i
            (this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ce70),params,0x10);
  CallVU1__6EPs2RCUib(this,pvu1UploadMatrices >> 3,true);
  return;
}

void EPs2RC::SendHardwareDisplayList(void *pDList, u16 size) {
	u32 nBytes;
	
  ERC__vtable *pEVar1;
  uint nBytes;
  
  BeginCommand__3ERCii(&this->field0_0x0,0,0);
  BeginDma__6EPs2RCb(this,false);
  AddDataRef__6EPs2RCPvT1i
            (this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ceb0),pDList,
             ((ushort)size - 1) * 0x10);
  CallVU1__6EPs2RCUib(this,pvu1DisplayList >> 3,true);
  VerifyDmaChainSize__6EPs2RCi(this,0);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

void EPs2RC::ShaderDL(void *pDList, u16 size) {
	u32 nBytes;
	
  ERC__vtable *pEVar1;
  uint nBytes;
  
  BeginCommand__3ERCii(&this->field0_0x0,0,0);
  BeginDma__6EPs2RCb(this,false);
  AddDataRef__6EPs2RCPvT1i
            (this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ceb0),pDList,
             ((ushort)size - 1) * 0x10);
  CallVU1__6EPs2RCUib(this,pvu1ShaderDL >> 3,true);
  VerifyDmaChainSize__6EPs2RCi(this,0);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

void EPs2RC::GeometrySetup() {
  BeginDma__6EPs2RCb(this,false);
  VerifyMPG__6EPs2RCi(this,1);
  CallVU1__6EPs2RCUib(this,pvu1GeometrySetup >> 3,true);
  return;
}

void EPs2RC::Debug(u32 val1, u32 val2) {
  Debug__3ERCUiUi(&this->field0_0x0,val1,val2);
  return;
}

void EPs2RC::MipMapSetup(EGEVert *verts, bool useSize, bool useAngle) {
	EPs2GEInputBuffer *pInputBuffer;
	float params[4];
	
  ERC__vtable *pEVar1;
  int iVar2;
  EPs2GEInputBuffer *pInputBuffer;
  float params [4];
  
  params[2] = (float)(int)useSize;
  params[3] = (float)(int)useAngle;
  BeginCommand__3ERCii(&this->field0_0x0,0,0);
  BeginDma__6EPs2RCb(this,false);
  VerifyDmaChainSize__6EPs2RCi(this,0x30);
  iVar2 = this->m_curInputBuffer * 0xd80;
  AddDataRef__6EPs2RCPvT1i(this,(void *)(iVar2 + 0x1100ceb0),verts,0xf0);
  params[0] = 0.5;
  params[1] = 256.0;
  AddDataImmediate__6EPs2RCPvT1i(this,(void *)(iVar2 + 0x1100ce70),params,0x10);
  CallVU1__6EPs2RCUib(this,pvu1MipMapSetup >> 3,true);
  VerifyDmaChainSize__6EPs2RCi(this,0);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

void EPs2RC::SetMipMap(float scaleMult, float angularMult) {
	EPs2GEInputBuffer *pInputBuffer;
	float params[4];
	
  ERC__vtable *pEVar1;
  EPs2GEInputBuffer *pInputBuffer;
  float params [4];
  
  BeginCommand__3ERCii(&this->field0_0x0,0,0);
  BeginDma__6EPs2RCb(this,false);
  VerifyDmaChainSize__6EPs2RCi(this,0x10);
  params[1] = scaleMult;
  params[2] = angularMult;
  AddDataImmediate__6EPs2RCPvT1i
            (this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ce70),params,0x10);
  CallVU1__6EPs2RCUib(this,pvu1SetMipMap >> 3,true);
  VerifyDmaChainSize__6EPs2RCi(this,0);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

void EPs2RC::CallVU1(u32 pFunction, bool swapInputBuffers) {
	EVif *pVif;
	
  EVif *pVif;
  
  ExecuteFunction__4EVifUi(&this->m_vif,pFunction);
  return;
}

void EPs2RC::AddDataRef(void *pDst, void *pSrc, int nBytes) {
	u32 pNewDst;
	int buf;
	EVif *pVif;
	int vuDst;
	
  uint pNewDst;
  int buf;
  EVif *pVif;
  int vuDst;
  
  buf = -1;
  if ((void *)((int)&DAT_1100ce5c + 3U) < pDst) {
    buf = 0;
  }
  if ((void *)0x1100dbdf < pDst) {
    buf = 1;
  }
  UnpackReference__4EVifPvT1i
            (&this->m_vif,(void *)((int)pDst + buf * -0xd80 + -0x1100ce60 >> 4),pSrc,nBytes);
  return;
}

void EPs2RC::AddDataImmediate(void *pDst, void *pSrc, int nBytes) {
	u32 pNewDst;
	int buf;
	EVif *pVif;
	int vuDst;
	
  uint pNewDst;
  int buf;
  EVif *pVif;
  int vuDst;
  
  buf = -1;
  if ((void *)((int)&DAT_1100ce5c + 3U) < pDst) {
    buf = 0;
  }
  if ((void *)0x1100dbdf < pDst) {
    buf = 1;
  }
  UnpackImmediate__4EVifPvT1i
            (&this->m_vif,(void *)((int)pDst + buf * -0xd80 + -0x1100ce60 >> 4),pSrc,nBytes);
  return;
}

void EPs2RC::VerifyMPG(int primtype) {
	int mpg;
	
  int mpg_00;
  int mpg;
  
  mpg_00 = GetNeededMPG__4EVU1i(&_vu1,primtype);
  DoVerifyMPG__6EPs2RCi(this,mpg_00);
  return;
}

void EPs2RC::DoVerifyMPG(int mpg) {
  if (mpg != -1) {
    if (((this->field0_0x0).m_pdl)->m_firstMPG == -1) {
      ((this->field0_0x0).m_pdl)->m_firstMPG = mpg;
      this->m_curMPG = mpg;
    }
    else if (mpg != this->m_curMPG) {
      DoLoadMPG__6EPs2RCi(this,mpg);
    }
  }
  return;
}

void EPs2RC::LoadMPG(int primtype) {
	int mpg;
	
  int mpg_00;
  int mpg;
  
  mpg_00 = GetNeededMPG__4EVU1i(&_vu1,primtype);
  DoLoadMPG__6EPs2RCi(this,mpg_00);
  return;
}

void EPs2RC::DoLoadMPG(int mpg) {
	EVif *pVif;
	
  ERC__vtable *pEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  int local_50;
  EVif *pVif;
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
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (mpg != -1) {
    local_50 = mpg;
    BeginCommand__3ERCii(&this->field0_0x0,0,0);
    BeginDma__6EPs2RCb(this,false);
    pVif = &this->m_vif;
    VerifyDmaChainSize__6EPs2RCi(this,0x40);
    LoadMPGRef__4EVU1P4EVifi(&_vu1,pVif,local_50);
    AddDataImmediate__6EPs2RCPvT1i
              (this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ce70),&local_50,0x10);
    CallVU1__6EPs2RCUib(this,pvu1SetMPG >> 3,true);
    VerifyDmaChainSize__6EPs2RCi(this,0);
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
    this->m_curMPG = local_50;
    ((this->field0_0x0).m_pdl)->m_nMPGLoads = ((this->field0_0x0).m_pdl)->m_nMPGLoads + 1;
  }
  return;
}

void EPs2RC::EnableGeometryModes(u32 modeFlags) {
  ERC__vtable *pEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  uint local_50 [4];
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
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_50[0] = modeFlags;
  BeginCommand__3ERCii(&this->field0_0x0,0,0);
  BeginDma__6EPs2RCb(this,false);
  VerifyDmaChainSize__6EPs2RCi(this,0x18);
  AddDataImmediate__6EPs2RCPvT1i
            (this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ce70),local_50,0x10);
  CallVU1__6EPs2RCUib(this,pvu1EnableGeometryModes >> 3,true);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

void EPs2RC::DisableGeometryModes(u32 modeFlags) {
	unsigned int params[4];
	
  ERC__vtable *pEVar1;
  uint params [4];
  
  BeginCommand__3ERCii(&this->field0_0x0,0,0);
  BeginDma__6EPs2RCb(this,false);
  params[0] = ~modeFlags;
  VerifyDmaChainSize__6EPs2RCi(this,0x18);
  AddDataImmediate__6EPs2RCPvT1i
            (this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ce70),params,0x10);
  CallVU1__6EPs2RCUib(this,pvu1DisableGeometryModes >> 3,true);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

void EPs2RC::SetGeometryModes(u32 modeFlags) {
  ERC__vtable *pEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  uint local_50 [4];
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
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_50[0] = modeFlags;
  BeginCommand__3ERCii(&this->field0_0x0,0,0);
  BeginDma__6EPs2RCb(this,false);
  VerifyDmaChainSize__6EPs2RCi(this,0x18);
  AddDataImmediate__6EPs2RCPvT1i
            (this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ce70),local_50,0x10);
  CallVU1__6EPs2RCUib(this,pvu1SetGeometryModes >> 3,true);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

void EPs2RC::EnableRasterModes(u32 modeFlags, int renderPass) {
	unsigned int params[4];
	
  ERC__vtable *pEVar1;
  uint params [4];
  
  BeginCommand__3ERCii(&this->field0_0x0,0,0);
  BeginDma__6EPs2RCb(this,false);
  params[0] = renderPass;
  params[1] = modeFlags;
  VerifyDmaChainSize__6EPs2RCi(this,0x18);
  AddDataImmediate__6EPs2RCPvT1i
            (this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ce70),params,0x10);
  CallVU1__6EPs2RCUib(this,pvu1EnableRasterModes >> 3,true);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

void EPs2RC::DisableRasterModes(u32 modeFlags, int renderPass) {
	unsigned int params[4];
	
  ERC__vtable *pEVar1;
  uint params [4];
  
  BeginCommand__3ERCii(&this->field0_0x0,0,0);
  BeginDma__6EPs2RCb(this,false);
  params[1] = ~modeFlags;
  params[0] = renderPass;
  VerifyDmaChainSize__6EPs2RCi(this,0x18);
  AddDataImmediate__6EPs2RCPvT1i
            (this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ce70),params,0x10);
  CallVU1__6EPs2RCUib(this,pvu1DisableRasterModes >> 3,true);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

void EPs2RC::SetRasterModes(u32 modeFlags, int renderPass) {
	unsigned int params[4];
	
  ERC__vtable *pEVar1;
  uint params [4];
  
  BeginCommand__3ERCii(&this->field0_0x0,0,0);
  BeginDma__6EPs2RCb(this,false);
  params[0] = renderPass;
  params[1] = modeFlags;
  VerifyDmaChainSize__6EPs2RCi(this,0x18);
  AddDataImmediate__6EPs2RCPvT1i
            (this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ce70),params,0x10);
  CallVU1__6EPs2RCUib(this,pvu1SetRasterModes >> 3,true);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

void EPs2RC::Terminate() {
  Terminate__3ERC(&this->field0_0x0);
  if ((this->m_nChains == 1) && (this->m_nChainBreaks == 1)) {
    ((this->field0_0x0).m_pdl)->m_type = 1;
  }
  ((this->field0_0x0).m_pdl)->m_lastMPG = this->m_curMPG;
  if (this->m_pDmaBuf != (uint *)0x0) {
    _memmanFree__FPv(this->m_pDmaBuf);
    this->m_pDmaBuf = (uint *)0x0;
  }
  return;
}

void EPs2RC::Rect(EVec2 &vUpperLeft, EVec2 &vLowerRight, EVec2 &vUpperLeftTC, EVec2 &vLowerRightTC, EVec4 &vColor, float depth) {
	EVec4 vUseColor;
	unsigned int params[16];
	float *pf;
	u32 *pi;
	u32 z;
	EPs2GEInputBuffer *pInputBuffer;
	u32 c;
	
  ERC__vtable *pEVar1;
  int iVar2;
  float *pfVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar4;
  EVec4 vUseColor;
  uint params [16];
  float *pf;
  uint *pi;
  uint c;
  uint z;
  EPs2GEInputBuffer *pInputBuffer;
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
  __ml__FfRC5EVec4(&vUseColor,128.0,vColor);
  Clamp__5EVec4ff(&vUseColor,0.0,255.0);
  VerifyMPG__6EPs2RCi(this,10);
  BeginCommand__3ERCii(&this->field0_0x0,0,0);
  pf = (float *)params;
  SaveState__C5EVec2RPf(vUpperLeft,&pf);
  SaveState__C5EVec2RPf(vLowerRight,&pf);
  SaveState__C5EVec2RPf(vUpperLeftTC,&pf);
  SaveState__C5EVec2RPf(vLowerRightTC,&pf);
  pi = (uint *)pf;
  for (c = 0; c < 4; c = c + 1) {
    pfVar3 = __vc__5EVec4i(&vUseColor,c);
    *pi = (int)*pfVar3;
    pi = pi + 1;
  }
  fVar4 = GetNearZVal__12EPs2Graphics(&_ps2gfx);
  z = (uint)((1.0 - depth) * fVar4);
  *pi = 0;
  pi[1] = 0;
  pi[2] = z;
  pi[3] = 0x10;
  pi = pi + 4;
  BeginDma__6EPs2RCb(this,false);
  VerifyDmaChainSize__6EPs2RCi(this,0x50);
  iVar2 = this->m_curInputBuffer * 0xd80;
  pInputBuffer = (EPs2GEInputBuffer *)(iVar2 + 0x1100ce60);
  AddDataImmediate__6EPs2RCPvT1i(this,(void *)(iVar2 + 0x1100ceb0),params,0x40);
  CallVU1__6EPs2RCUib(this,pvu1Rect >> 3,true);
  VerifyDmaChainSize__6EPs2RCi(this,0);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

void EPs2RC::DirectRect(EVec2 &vPos, EVec2 &vScale, EVec4 &vColor, float depth) {
	EVec4 vUseColor;
	unsigned int params[12];
	float *pf;
	u32 *pi;
	u32 z;
	EPs2GEInputBuffer *pInputBuffer;
	u32 c;
	
  ERC__vtable *pEVar1;
  float *pfVar2;
  float fVar3;
  EVec4 vUseColor;
  uint params [12];
  float *pf;
  uint *pi;
  uint c;
  uint z;
  EPs2GEInputBuffer *pInputBuffer;
  
  __ml__FfRC5EVec4(&vUseColor,128.0,vColor);
  Clamp__5EVec4ff(&vUseColor,0.0,255.0);
  VerifyMPG__6EPs2RCi(this,0xb);
  BeginCommand__3ERCii(&this->field0_0x0,0,0);
  params[0] = (uint)__vc__C5EVec2i(vPos,0);
  params[1] = (uint)__vc__C5EVec2i(vPos,1);
  params[2] = (uint)__vc__C5EVec2i(vScale,0);
  params[3] = (uint)__vc__C5EVec2i(vScale,1);
  pi = params + 4;
  for (c = 0; c < 4; c = c + 1) {
    pfVar2 = __vc__5EVec4i(&vUseColor,c);
    *pi = (int)*pfVar2;
    pi = pi + 1;
  }
  fVar3 = GetNearZVal__12EPs2Graphics(&_ps2gfx);
  *pi = 0;
  pi[1] = 0;
  pi[2] = (int)((1.0 - depth) * fVar3);
  pi[3] = 0x10;
  BeginDma__6EPs2RCb(this,false);
  VerifyDmaChainSize__6EPs2RCi(this,0x40);
  AddDataImmediate__6EPs2RCPvT1i
            (this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ceb0),params,0x30);
  CallVU1__6EPs2RCUib(this,pvu1DirectRect >> 3,true);
  VerifyDmaChainSize__6EPs2RCi(this,0);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

void EPs2RC::DisplayList(EDL *pDL) {
	EDLEntry *pStart;
	EVif *pVif;
	u32 *pChildDMAChain;
	
  void *pData;
  EDL *pEVar1;
  ERC__vtable *pEVar2;
  EDLEntry *pEVar3;
  EVif *this_00;
  int iVar4;
  EDLEntry *pStart;
  EVif *pVif;
  uint *pChildDMAChain;
  
  if (pDL != (EDL *)0x0) {
    DoVerifyMPG__6EPs2RCi(this,pDL->m_firstMPG);
    if ((pDL->m_type == 1) && (pDL->m_branchDepth < 2)) {
      BeginCommand__3ERCii(&this->field0_0x0,0,0);
      ((this->field0_0x0).m_pdl)->m_nVerts = ((this->field0_0x0).m_pdl)->m_nVerts + pDL->m_nVerts;
      ((this->field0_0x0).m_pdl)->m_nMPGLoads =
           ((this->field0_0x0).m_pdl)->m_nMPGLoads + pDL->m_nMPGLoads;
      pEVar3 = GetStart__3EDL(pDL);
      BeginDma__6EPs2RCb(this,false);
      this_00 = &this->m_vif;
      pData = *(void **)((int)&pEVar3->align_data + 4);
      VerifyDmaChainSize__6EPs2RCi(this,0x10);
      AddDmaTag__4EVifUiPvi(this_00,5,pData,0);
      AddVifTag__4EVifUi(this_00,pvu1DisableInterrupts >> 3 | 0x15000000);
      AddVifTag__4EVifUi(this_00,0);
      VerifyDmaChainSize__6EPs2RCi(this,0);
      AddDisplayListReference__3ERCP3EDL(&this->field0_0x0,pDL);
      pEVar1 = (this->field0_0x0).m_pdl;
      iVar4 = pDL->m_branchDepth + 1;
      if (iVar4 < pEVar1->m_branchDepth) {
        iVar4 = pEVar1->m_branchDepth;
      }
      ((this->field0_0x0).m_pdl)->m_branchDepth = iVar4;
      pEVar2 = (this->field0_0x0).__vtable;
      (*(code *)pEVar2[1].Terminate)
                ((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar2[1].Init);
      if (pDL->m_lastMPG != -1) {
        this->m_curMPG = pDL->m_lastMPG;
      }
    }
    else {
      DisplayList__3ERCP3EDL(&this->field0_0x0,pDL);
      if (pDL->m_lastMPG != -1) {
        this->m_curMPG = pDL->m_lastMPG;
      }
    }
  }
  return;
}

void EPs2RC::Texture(ETexture *pTexture, int renderPass) {
	EPs2Texture *pPs2Texture;
	
  ERC__vtable *pEVar1;
  EPs2Texture *pPs2Texture;
  
  TextureDone__6EPs2RCi(this,renderPass);
  if (pTexture == (ETexture *)0x0) {
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[1].TriStrip)
              ((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].ERC,0x10,renderPass);
    SetCurTexture__6EPs2RCP8ETexturei(this,(ETexture *)0x0,renderPass);
  }
  else {
    pEVar1 = (this->field0_0x0).__vtable;
    (**(code **)(pEVar1 + 1))
              ((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1->QueueMatrices,0x10,
               renderPass);
    TextureWait__6EPs2RCP8ETextureP16EPs2TexturePatchi
              (this,pTexture,(EPs2TexturePatch *)&pTexture[1].m_textureDef.mipMapShift,renderPass);
    FlushDmaFifo__6EPs2RC(this);
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[1].ModelMatrices)
              ((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Scissor,
               (&pTexture[2].m_textureDef.pfnAllocAlign)[renderPass],
               pTexture[2].m_textureDef.mipMapLevels);
  }
  return;
}

void EPs2RC::TextureWait(ETexture *pTexture, EPs2TexturePatch *pPatch, int renderPass) {
	EPs2GEInputBuffer *pInputBuffer;
	float xSize;
	float ySize;
	unsigned int params[4];
	
  ERC__vtable *pEVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  EPs2GEInputBuffer *pInputBuffer;
  float xSize;
  float ySize;
  uint params [4];
  
  BeginCommand__3ERCii(&this->field0_0x0,0,0);
  BeginDma__6EPs2RCb(this,false);
  AddTail__t9TNodeList1ZP8ETextureP8ETexture(&((this->field0_0x0).m_pdl)->m_textureRefs,pTexture);
  AddTail__t9TNodeList1Zii(&((this->field0_0x0).m_pdl)->m_texturePasses,renderPass);
  VerifyDmaChainSize__6EPs2RCi(this,0x30);
  iVar2 = this->m_curInputBuffer * 0xd80;
  AddDataRef__6EPs2RCPvT1i(this,(void *)(iVar2 + 0x1100ce70),pPatch,0x10);
  uVar3 = GetXSize__8ETexture(pTexture);
  if ((int)uVar3 < 0) {
    fVar4 = (float)(uVar3 & 1 | uVar3 >> 1);
    params[2] = (uint)(fVar4 + fVar4);
  }
  else {
    params[2] = (uint)(float)uVar3;
  }
  uVar3 = GetYSize__8ETexture(pTexture);
  if ((int)uVar3 < 0) {
    fVar4 = (float)(uVar3 & 1 | uVar3 >> 1);
    params[3] = (uint)(fVar4 + fVar4);
  }
  else {
    params[3] = (uint)(float)uVar3;
  }
  if (pTexture != (ETexture *)0x0) {
    pTexture = (ETexture *)((uint)pTexture | 1);
  }
  params[0] = renderPass;
  params[1] = (uint)pTexture;
  AddDataImmediate__6EPs2RCPvT1i(this,(void *)(iVar2 + 0x1100ceb0),params,0x10);
  CallVU1__6EPs2RCUib(this,pvu1TextureWait >> 3,true);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

void EPs2RC::SetCurTexture(ETexture *pTexture, int renderPass) {
	float xSize;
	float ySize;
	unsigned int params[4];
	
  ERC__vtable *pEVar1;
  uint uVar2;
  float fVar3;
  float xSize;
  float ySize;
  uint params [4];
  
  BeginCommand__3ERCii(&this->field0_0x0,0,0);
  BeginDma__6EPs2RCb(this,false);
  VerifyDmaChainSize__6EPs2RCi(this,0x20);
  if (pTexture == (ETexture *)0x0) {
    ySize = 256.0;
  }
  else {
    GetXSize__8ETexture(pTexture);
    uVar2 = GetYSize__8ETexture(pTexture);
    if ((int)uVar2 < 0) {
      fVar3 = (float)(uVar2 & 1 | uVar2 >> 1);
      ySize = fVar3 + fVar3;
    }
    else {
      ySize = (float)uVar2;
    }
  }
  if (pTexture != (ETexture *)0x0) {
    pTexture = (ETexture *)((uint)pTexture | 1);
  }
  params[2] = (uint)ySize;
  params[0] = renderPass;
  params[1] = (uint)pTexture;
  AddDataImmediate__6EPs2RCPvT1i
            (this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ceb0),params,0x10);
  CallVU1__6EPs2RCUib(this,pvu1TextureSetup >> 3,true);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

void EPs2RC::TextureDone(int renderPass) {
	unsigned int params[4];
	
  ERC__vtable *pEVar1;
  uint params [4];
  
  BeginCommand__3ERCii(&this->field0_0x0,0,0);
  BeginDma__6EPs2RCb(this,false);
  VerifyDmaChainSize__6EPs2RCi(this,0x20);
  params[0] = renderPass;
  AddDataImmediate__6EPs2RCPvT1i
            (this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ce70),params,0x10);
  CallVU1__6EPs2RCUib(this,pvu1TextureDone >> 3,true);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

void EPs2RC::Material(EMaterial *pMaterial) {
  ERC__vtable *pEVar1;
  
  BeginCommand__3ERCii(&this->field0_0x0,0,0);
  BeginDma__6EPs2RCb(this,false);
  VerifyDmaChainSize__6EPs2RCi(this,0x20);
  AddDataRef__6EPs2RCPvT1i
            (this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ceb0),pMaterial,0x20);
  CallVU1__6EPs2RCUib(this,pvu1Material >> 3,true);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

void EPs2RC::Lights(ELights *pLights, int nDirectionalLights) {
	int nBytes;
	unsigned int params[4];
	
  ERC__vtable *pEVar1;
  int nBytes;
  uint params [4];
  
  if (pLights == (ELights *)0x0) {
    Lights__3ERCP7ELightsi(&this->field0_0x0,(ELights *)0x0,nDirectionalLights);
  }
  else {
    BeginCommand__3ERCii(&this->field0_0x0,0,0);
    BeginDma__6EPs2RCb(this,false);
    VerifyDmaChainSize__6EPs2RCi(this,0x30);
    AddDataRef__6EPs2RCPvT1i
              (this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ceb0),pLights,
               nDirectionalLights * 0x20 + 0x10);
    params[0] = nDirectionalLights;
    AddDataImmediate__6EPs2RCPvT1i
              (this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ce70),params,0x10);
    CallVU1__6EPs2RCUib(this,pvu1Lights >> 3,true);
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  }
  return;
}

void EPs2RC::SleepUntil(int wakup) {
  undefined8 unaff_s0;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  int local_40 [4];
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
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_40[0] = wakup;
  BeginDma__6EPs2RCb(this,false);
  VerifyDmaChainSize__6EPs2RCi(this,0x18);
  AddDataImmediate__6EPs2RCPvT1i
            (this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ce70),local_40,0x10);
  CallVU1__6EPs2RCUib(this,pvu1SleepUntil >> 3,true);
  return;
}

void EPs2RC::RectList(int nRects, float *args, EVec4 &vColor, float depth) {
	EVec4 vUseColor;
	u32 z;
	int bytesPerRect;
	int maxLoad;
	float *pCurArg;
	int nRemaining;
	unsigned int params[8];
	int thisLoad;
	EPs2GEInputBuffer *pInputBuffer;
	
  ERC__vtable *pEVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  EVec4 vUseColor;
  uint z;
  int bytesPerRect;
  int maxLoad;
  float *pCurArg;
  int nRemaining;
  uint params [8];
  int thisLoad;
  EPs2GEInputBuffer *pInputBuffer;
  
  if (nRects != 0) {
    __ml__FfRC5EVec4(&vUseColor,128.0,vColor);
    Clamp__5EVec4ff(&vUseColor,0.0,255.0);
    VerifyMPG__6EPs2RCi(this,10);
    BeginCommand__3ERCii(&this->field0_0x0,0,0);
    BeginDma__6EPs2RCb(this,false);
    fVar5 = GetNearZVal__12EPs2Graphics(&_ps2gfx);
    params[2] = (uint)((1.0 - depth) * fVar5);
    params[3] = 0x10;
    pfVar3 = __vc__5EVec4i(&vUseColor,0);
    params[4] = fptoui(*pfVar3);
    pfVar3 = __vc__5EVec4i(&vUseColor,1);
    params[5] = fptoui(*pfVar3);
    pfVar3 = __vc__5EVec4i(&vUseColor,2);
    params[6] = fptoui(*pfVar3);
    pfVar3 = __vc__5EVec4i(&vUseColor,3);
    params[7] = fptoui(*pfVar3);
    pCurArg = args;
    nRemaining = nRects;
    do {
      uVar4 = nRemaining;
      if (0x14 < nRemaining) {
        uVar4 = 0x14;
      }
      nRemaining = nRemaining - uVar4;
      VerifyDmaChainSize__6EPs2RCi(this,0x60);
      iVar2 = this->m_curInputBuffer * 0xd80;
      params[0] = uVar4;
      AddDataRef__6EPs2RCPvT1i(this,(void *)(iVar2 + 0x1100ceb0),pCurArg,uVar4 << 5);
      AddDataImmediate__6EPs2RCPvT1i(this,(void *)(iVar2 + 0x1100ce70),params,0x20);
      CallVU1__6EPs2RCUib(this,pvu1RectList >> 3,true);
      VerifyDmaChainSize__6EPs2RCi(this,0);
      pCurArg = pCurArg + uVar4 * 8;
    } while (nRemaining != 0);
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  }
  return;
}

void EPs2RC::AlphaTest(bool enable, int method, float threshold, int renderPass) {
  float fVar1;
  
  fVar1 = threshold * 64.0;
  if (0.0 <= fVar1) {
    fVar1 = (float)((int)fVar1 * (uint)(fVar1 < 255.0) | (uint)(fVar1 >= 255.0) * 0x437f0000);
  }
  else {
    fVar1 = 0.0;
  }
  AlphaTest__3ERCbifi(&this->field0_0x0,enable,method,fVar1,renderPass);
  return;
}

void EPs2RC::ZTest(bool enable, int method, int write, int renderPass) {
  int local_3c;
  int local_38;
  
  local_3c = method;
  local_38 = write;
  if (!enable) {
    local_3c = 1;
    local_38 = 1;
  }
  ZTest__3ERCbiii(&this->field0_0x0,true,local_3c,local_38,renderPass);
  return;
}

void EPs2RC::TextureMatrix(EMat4 *pmTexture, ETCTransformSource source, bool useLookAt, bool perspectiveDivide, int renderPass) {
	unsigned int params[4];
	
  ERC__vtable *pEVar1;
  undefined4 uVar2;
  uint params [4];
  
  if (pmTexture == (EMat4 *)0x0) {
    pEVar1 = (this->field0_0x0).__vtable;
    if (renderPass == 0) {
      uVar2 = 0x80;
    }
    else {
      uVar2 = 0x100;
    }
    (*(code *)pEVar1->EndCommand)
              ((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1->BeginCommand,uVar2);
  }
  else {
    BeginCommand__3ERCii(&this->field0_0x0,0,0);
    BeginDma__6EPs2RCb(this,false);
    VerifyDmaChainSize__6EPs2RCi(this,0x30);
    if (renderPass == 0) {
      params[1] = 0x80;
    }
    else {
      params[1] = 0x100;
    }
    if (useLookAt) {
      params[1] = params[1] | 0x200;
    }
    if (perspectiveDivide) {
      params[1] = params[1] | 0x400;
    }
    params[0] = source;
    AddDataRef__6EPs2RCPvT1i
              (this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ceb0),pmTexture,0x40);
    AddDataImmediate__6EPs2RCPvT1i
              (this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ce70),params,0x10);
    CallVU1__6EPs2RCUib(this,pvu1TextureMatrix >> 3,true);
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  }
  return;
}

void EPs2RC::FlushDmaFifo() {
  ERC__vtable *pEVar1;
  
  BeginCommand__3ERCii(&this->field0_0x0,0,0);
  BeginDma__6EPs2RCb(this,false);
  VerifyDmaChainSize__6EPs2RCi(this,0x30);
  AddDataRef__6EPs2RCPvT1i
            (this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ceb0),_zeroBuf,0x100);
  AddDmaTag__4EVifUiPvi(&this->m_vif,1,(void *)0x0,0);
  AddVifTag__4EVifUi(&this->m_vif,0x10000000);
  AddVifTag__4EVifUi(&this->m_vif,0);
  AddDataRef__6EPs2RCPvT1i
            (this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ceb0),_zeroBuf,0x100);
  AddDmaTag__4EVifUiPvi(&this->m_vif,1,(void *)0x0,0);
  AddVifTag__4EVifUi(&this->m_vif,0);
  AddVifTag__4EVifUi(&this->m_vif,0);
  VerifyDmaChainSize__6EPs2RCi(this,0);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

void EPs2RC::ParticleList(int nParticles, EGEPackedParticle *pPcls) {
  DoParticleList__6EPs2RCiPC17EGEPackedParticleb(this,nParticles,pPcls,false);
  return;
}

void EPs2RC::ParticleListRot(int nParticles, EGEPackedParticle *pPcls) {
  DoParticleList__6EPs2RCiPC17EGEPackedParticleb(this,nParticles,pPcls,true);
  return;
}

void EPs2RC::DoParticleList(int nParticles, EGEPackedParticle *pPcls, bool useRot) {
	int maxLoad;
	EVif *pVif;
	int nLoaded;
	u32 pVUFunction;
	int thisLoad;
	EPs2GEInputBuffer *pInputBuffer;
	int nBytes;
	u32 *pSrc;
	unsigned int params[4];
	
  ERC__vtable *pEVar1;
  int iVar2;
  uint uVar3;
  uint local_80;
  int maxLoad;
  EVif *pVif;
  int nLoaded;
  uint pVUFunction;
  int thisLoad;
  EPs2GEInputBuffer *pInputBuffer;
  int nBytes;
  uint *pSrc;
  uint params [4];
  
  BeginDma__6EPs2RCb(this,false);
  VerifyMPG__6EPs2RCi(this,0xc);
  ((this->field0_0x0).m_pdl)->m_nVerts = ((this->field0_0x0).m_pdl)->m_nVerts + nParticles * 2;
  nLoaded = 0;
  local_80 = nParticles;
  if (useRot) {
    pVUFunction = pvu1ParticleListRot >> 3;
    maxLoad = 10;
  }
  else {
    pVUFunction = pvu1ParticleList >> 3;
    maxLoad = 0x15;
  }
  do {
    uVar3 = maxLoad;
    if ((int)local_80 < maxLoad) {
      uVar3 = local_80;
    }
    VerifyDmaChainSize__6EPs2RCi(this,0x48);
    iVar2 = this->m_curInputBuffer * 0xd80;
    AddDataRef__6EPs2RCPvT1i(this,(void *)(iVar2 + 0x1100ceb0),pPcls + nLoaded,uVar3 * 0x30);
    params[0] = uVar3;
    AddDataImmediate__6EPs2RCPvT1i(this,(void *)(iVar2 + 0x1100ce70),params,0x10);
    ExecuteFunction__4EVifUi(&this->m_vif,pVUFunction);
    VerifyDmaChainSize__6EPs2RCi(this,0);
    local_80 = local_80 - uVar3;
    nLoaded = nLoaded + uVar3;
  } while (local_80 != 0);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

void EPs2RC::WindowMatrix(EMat4 *pmWindow) {
  ERC__vtable *pEVar1;
  
  BeginCommand__3ERCii(&this->field0_0x0,0,0);
  BeginDma__6EPs2RCb(this,false);
  VerifyDmaChainSize__6EPs2RCi(this,0x20);
  AddDataRef__6EPs2RCPvT1i(this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ceb0),pmWindow,0x40)
  ;
  CallVU1__6EPs2RCUib(this,pvu1WindowMatrix >> 3,true);
  VerifyDmaChainSize__6EPs2RCi(this,0);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

void EPs2RC::ViewMatrix(EMat4 *pmView) {
  ERC__vtable *pEVar1;
  
  BeginCommand__3ERCii(&this->field0_0x0,0,0);
  BeginDma__6EPs2RCb(this,false);
  VerifyDmaChainSize__6EPs2RCi(this,0x20);
  AddDataRef__6EPs2RCPvT1i(this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ceb0),pmView,0x40);
  CallVU1__6EPs2RCUib(this,pvu1ViewMatrix >> 3,true);
  VerifyDmaChainSize__6EPs2RCi(this,0);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

void EPs2RC::ProjectionMatrix(EMat4 *pmProjection) {
  ERC__vtable *pEVar1;
  
  BeginCommand__3ERCii(&this->field0_0x0,0,0);
  BeginDma__6EPs2RCb(this,false);
  VerifyDmaChainSize__6EPs2RCi(this,0x20);
  AddDataRef__6EPs2RCPvT1i
            (this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ceb0),pmProjection,0x40);
  CallVU1__6EPs2RCUib(this,pvu1ProjectionMatrix >> 3,true);
  VerifyDmaChainSize__6EPs2RCi(this,0);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

void EPs2RC::Viewport(EViewport *pVP) {
  ERC__vtable *pEVar1;
  
  BeginCommand__3ERCii(&this->field0_0x0,0,0);
  BeginDma__6EPs2RCb(this,false);
  VerifyDmaChainSize__6EPs2RCi(this,0x40);
  AddDataRef__6EPs2RCPvT1i(this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ceb0),pVP,0x20);
  CallVU1__6EPs2RCUib(this,pvu1Viewport >> 3,true);
  VerifyDmaChainSize__6EPs2RCi(this,0);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

void EPs2RC::ClipRatio(float clipRatio) {
	float params[8];
	
  ERC__vtable *pEVar1;
  float params [8];
  
  params[4] = 1.0 / clipRatio;
  params[7] = -clipRatio;
  params[0] = clipRatio;
  params[1] = clipRatio;
  params[3] = clipRatio;
  params[5] = params[4];
  BeginCommand__3ERCii(&this->field0_0x0,0,0);
  BeginDma__6EPs2RCb(this,false);
  VerifyDmaChainSize__6EPs2RCi(this,0x30);
  AddDataImmediate__6EPs2RCPvT1i
            (this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ce70),params,0x20);
  CallVU1__6EPs2RCUib(this,pvu1ClipRatio >> 3,true);
  VerifyDmaChainSize__6EPs2RCi(this,0);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

void EPs2RC::PointList(int nVerts, float *xyzs, float *texcoords, u8 *colors, s8 *normals, u8 *weights) {
	int maxLoad;
	EVif *pVif;
	int nLoaded;
	int thisLoad;
	EPs2GEInputBuffer *pInputBuffer;
	u32 pDst;
	unsigned int params[4];
	int bytesPerPacket;
	int nPackets;
	int nBytes;
	u128 *pSrc;
	
  ERC__vtable *pEVar1;
  EVif *this_00;
  uint uVar2;
  uint local_90;
  int maxLoad;
  EVif *pVif;
  int nLoaded;
  int thisLoad;
  EPs2GEInputBuffer *pInputBuffer;
  uint pDst;
  uint params [4];
  int bytesPerPacket;
  int nPackets;
  int nBytes;
  uint16 *pSrc;
  
  VerifyMPG__6EPs2RCi(this,7);
  BeginCommand__3ERCii(&this->field0_0x0,0,0);
  BeginDma__6EPs2RCb(this,false);
  ((this->field0_0x0).m_pdl)->m_nVerts = ((this->field0_0x0).m_pdl)->m_nVerts + nVerts;
  this_00 = &this->m_vif;
  nLoaded = 0;
  local_90 = nVerts;
  do {
    uVar2 = local_90;
    if (0x28 < (int)local_90) {
      uVar2 = 0x28;
    }
    VerifyDmaChainSize__6EPs2RCi(this,0x70);
    params[0] = uVar2;
    AddDataImmediate__6EPs2RCPvT1i
              (this,(void *)(this->m_curInputBuffer * 0xd80 + 0x1100ce70),params,0x10);
    AddDmaTag__4EVifUiPvi(this_00,3,xyzs + nLoaded * 4,(int)(uVar2 * 0x10) >> 4);
    AddVifTag__4EVifUi(this_00,0x1000105);
    AddVifTag__4EVifUi(this_00,uVar2 << 0x10 | 0x6c008005);
    if (normals != (char *)0x0) {
      nPackets = uVar2;
      for (nBytes = uVar2 * 4; (nBytes & 0xfU) != 0; nBytes = nBytes + 4) {
        nPackets = nPackets + 1;
      }
      AddDmaTag__4EVifUiPvi(this_00,3,normals + nLoaded * 4,nBytes >> 4);
      AddVifTag__4EVifUi(this_00,0);
      AddVifTag__4EVifUi(this_00,nPackets << 0x10 | 0x6e008006);
    }
    if (texcoords != (float *)0x0) {
      nPackets = uVar2;
      for (nBytes = uVar2 * 8; (nBytes & 0xfU) != 0; nBytes = nBytes + 8) {
        nPackets = nPackets + 1;
      }
      AddDmaTag__4EVifUiPvi(this_00,3,texcoords + nLoaded * 2,nBytes >> 4);
      AddVifTag__4EVifUi(this_00,0);
      AddVifTag__4EVifUi(this_00,nPackets << 0x10 | 0x64008007);
    }
    if (colors != (uchar *)0x0) {
      nPackets = uVar2;
      for (nBytes = uVar2 * 4; (nBytes & 0xfU) != 0; nBytes = nBytes + 4) {
        nPackets = nPackets + 1;
      }
      AddDmaTag__4EVifUiPvi(this_00,3,colors + nLoaded * 4,nBytes >> 4);
      AddVifTag__4EVifUi(this_00,0);
      AddVifTag__4EVifUi(this_00,nPackets << 0x10 | 0x6e00c008);
    }
    if (weights != (uchar *)0x0) {
      nPackets = uVar2;
      for (nBytes = uVar2 * 4; (nBytes & 0xfU) != 0; nBytes = nBytes + 4) {
        nPackets = nPackets + 1;
      }
      AddDmaTag__4EVifUiPvi(this_00,3,weights + nLoaded * 4,nBytes >> 4);
      AddVifTag__4EVifUi(this_00,0);
      AddVifTag__4EVifUi(this_00,nPackets << 0x10 | 0x6e00c009);
    }
    AddDmaTag__4EVifUiPvi(this_00,1,(void *)0x0,0);
    AddVifTag__4EVifUi(this_00,0x1000404);
    ExecuteFunction__4EVifUi(this_00,pvu1PointList >> 3);
    VerifyDmaChainSize__6EPs2RCi(this,0);
    local_90 = local_90 - uVar2;
    nLoaded = nLoaded + uVar2;
  } while (local_90 != 0);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Terminate)((int)&(this->field0_0x0).m_pdl + (int)*(short *)&pEVar1[1].Init);
  return;
}

TFixedPool<EPs2RC,4>* TFixedPool<EPs2RC, 4>::TFixedPool() {
  __10EFixedPool(&this->field0_0x0);
  Init__10EFixedPooliiPv(&this->field0_0x0,0x68,4,this->m_buffer);
  return this;
}

void TFixedPool<EPs2RC, 4>::~TFixedPool(int __in_chrg) {
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2rc.cpp */
  ___10EFixedPool(&this->field0_0x0,__in_chrg);
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___t10TFixedPool2Z6EPs2RCi4(&_ps2rendercontext_pool,2);
    }
    else {
      __t10TFixedPool2Z6EPs2RCi4(&_ps2rendercontext_pool);
    }
  }
  return;
}

EDLEntry* EDL::GetStart() {
  return this->m_pStart;
}

float EVec2::operator[](int value) {
  return (this->field0_0x0).d[value];
}

void EVec2::SaveState(float *&pData) {
  float *pfVar1;
  
  pfVar1 = *pData;
  *pfVar1 = (this->field0_0x0).d[0];
  *pData = pfVar1 + 1;
  pfVar1 = *pData;
  *pfVar1 = (this->field0_0x0).d[1];
  *pData = pfVar1 + 1;
  return;
}

float& EVec4::operator[](int value) {
  return (this->field0_0x0).d + value;
}

void EVec4::Clamp(float low, float high) {
	int i;
	
  float fVar1;
  int i;
  
  for (i = 0; i < 4; i = i + 1) {
    fVar1 = low;
    if (low <= (this->field0_0x0).d[i]) {
      fVar1 = (this->field0_0x0).d[i];
      fVar1 = (float)((int)high * (uint)(high < fVar1) | (int)fVar1 * (uint)(high >= fVar1));
    }
    (this->field0_0x0).d[i] = fVar1;
  }
  return;
}

EVec4 operator*(float scaler, EVec4 &vVec) {
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = __vc__C5EVec4i(vVec,0);
  fVar1 = scaler * fVar1;
  fVar2 = __vc__C5EVec4i(vVec,1);
  fVar3 = __vc__C5EVec4i(vVec,2);
  fVar3 = scaler * fVar3;
  fVar4 = __vc__C5EVec4i(vVec,3);
  __5EVec4ffff(__return_storage_ptr__,fVar1,scaler * fVar2,fVar3,scaler * fVar4);
  return __return_storage_ptr__;
}

EPs2RC* EPs2RC::EPs2RC() {
  __3ERC(&this->field0_0x0);
  (this->field0_0x0).__vtable = (ERC__vtable *)_vt_6EPs2RC;
  __4EVif(&this->m_vif);
  return this;
}

EPs2RC* TFixedPool<EPs2RC, 4>::Alloc() {
  EPs2RC *pEVar1;
  
  pEVar1 = (EPs2RC *)Alloc__10EFixedPool(&this->field0_0x0);
  return pEVar1;
}

void TFixedPool<EPs2RC, 4>::Free(EPs2RC *p) {
  Free__10EFixedPoolPv(&this->field0_0x0,p);
  return;
}

NLIterator TNodeList<ETexture *>::AddTail(ETexture *data) {
  undefined1 *puVar1;
  
  puVar1 = AddTail__9ENodeListUi(&this->field0_0x0,(uint)data);
  return puVar1;
}

NLIterator TNodeList<int>::AddTail(int data) {
  undefined1 *puVar1;
  
  puVar1 = AddTail__9ENodeListUi(&this->field0_0x0,data);
  return puVar1;
}

EVec4* EVec4::EVec4(float x, float y, float z, float w) {
  (this->field0_0x0).d[0] = x;
  (this->field0_0x0).d[1] = y;
  (this->field0_0x0).d[2] = z;
  (this->field0_0x0).d[3] = w;
  return this;
}

float EVec4::operator[](int value) {
  return (this->field0_0x0).d[value];
}

void* EFixedPool::Alloc() {
	void *p;
	
  void **ppvVar1;
  void *p;
  
  ppvVar1 = (void **)this->m_pFreeObjHead;
  if (ppvVar1 != (void **)0x0) {
    this->m_pFreeObjHead = *ppvVar1;
  }
  return ppvVar1;
}

void EFixedPool::Free(void *p) {
  if (p != (void *)0x0) {
    *(void **)p = this->m_pFreeObjHead;
    this->m_pFreeObjHead = p;
  }
  return;
}

void global constructors keyed to _ps2rendercontext_pool() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _ps2rendercontext_pool() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

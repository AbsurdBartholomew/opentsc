// STATUS: NOT STARTED

#include "e_graphics.h"

struct EDebugMessage {
	EDebugMessage *m_pLast;
	EDebugMessage *m_pNext;
};

typedef TLinkedList<EDebugMessage,0,4> EDebugMessageList;

struct EDebugPrint {
	EDebugPrint& operator=();
	EDebugPrint();
	EDebugPrint();
	EDebugPrint(EDebugPrint*, int, void);
	void Update();
	void Draw();
	void Add();
	void AddCopy();
};

__vtbl_ptr_type EGraphics virtual table[48] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::~EGraphics,
		/* .__delta2 = */ 15840
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::ManagedStartup,
		/* .__delta2 = */ 22488
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::ManagedShutdown,
		/* .__delta2 = */ 15968
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::Init,
		/* .__delta2 = */ 16016
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::BeginFrame,
		/* .__delta2 = */ 16320
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::EndFrame,
		/* .__delta2 = */ 16408
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::Flush,
		/* .__delta2 = */ 16616
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::SetBackgroundColor,
		/* .__delta2 = */ 16792
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::SetVideoMode,
		/* .__delta2 = */ 16688
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::GetOutputRect,
		/* .__delta2 = */ 16712
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::GetScissorRect,
		/* .__delta2 = */ 16752
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::Open,
		/* .__delta2 = */ 17016
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::Close,
		/* .__delta2 = */ 17208
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::Destroy,
		/* .__delta2 = */ 17608
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::CreateTexture,
		/* .__delta2 = */ 17816
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::Destroy,
		/* .__delta2 = */ 18040
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::CreateRenderSurface,
		/* .__delta2 = */ 18704
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::Destroy,
		/* .__delta2 = */ 18928
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::CreateMovie,
		/* .__delta2 = */ 19096
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::Destroy,
		/* .__delta2 = */ 19224
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::GetLargestAvailableTextureMemoryBlock,
		/* .__delta2 = */ 22328
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::CreateShader,
		/* .__delta2 = */ 18312
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::Destroy,
		/* .__delta2 = */ 18536
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::GetFarZVal,
		/* .__delta2 = */ 22336
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::GetNearZVal,
		/* .__delta2 = */ 22352
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::GetScreenAspect,
		/* .__delta2 = */ 22384
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::GetMaxTextureXSize,
		/* .__delta2 = */ 22456
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::GetMaxTextureYSize,
		/* .__delta2 = */ 22464
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
		/* .__pfn = */ &EGraphics::DiscardAllVram,
		/* .__delta2 = */ 22480
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::DoSwapBuffer,
		/* .__delta2 = */ 16600
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::DoSetupFrameBuffer,
		/* .__delta2 = */ 16608
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::SelectFrameBuffer,
		/* .__delta2 = */ 22496
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::AllocDL,
		/* .__delta2 = */ 16824
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::FreeDL,
		/* .__delta2 = */ 16864
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::AllocRC,
		/* .__delta2 = */ 16920
	},
	/* [37] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::FreeRC,
		/* .__delta2 = */ 16960
	},
	/* [38] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [39] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [40] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [41] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [42] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [43] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [44] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [45] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [46] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGraphics::SetUpNormalMapMatrix,
		/* .__delta2 = */ 19576
	},
	/* [47] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EGlobalManagerClient virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobalManagerClient::~EGlobalManagerClient,
		/* .__delta2 = */ 22192
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobalManagerClient::ManagedStartup,
		/* .__delta2 = */ 22312
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobalManagerClient::ManagedShutdown,
		/* .__delta2 = */ 22320
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EGraphics* EGraphics::EGraphics() {
	EGlobalManagerClient *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  
                    /* inlined from /eor/src2/common/util/e_globalmanagerclient.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/util/e_globalmanagerclient.h */
  (this->field0_0x0).__vtable = (EGlobalManagerClient__vtable *)_vt_20EGlobalManagerClient;
  Register__14EGlobalManagerP20EGlobalManagerClienti(&this->field0_0x0,4);
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EGlobalManagerClient__vtable *)_vt_9EGraphics;
  __6EMutex(&this->m_allocMutex);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_frameBufferClear = 1;
  *(undefined4 *)&this->m_insideBeginEnd = 0;
  *(undefined4 *)&this->m_initialized = 0;
  puVar1 = (undefined *)((int)&(this->m_backgroundColor).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0UL >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_backgroundColor & 7;
  puVar3 = (ulong *)((int)&this->m_backgroundColor - uVar2);
  *puVar3 = 0L << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_backgroundColor).field0_0x0.d[2] = 0.0;
  this->m_zBufferFormat = -1;
  this->m_yscreen = -1;
  this->m_xscreen = -1;
  this->m_yoffset = 0;
  this->m_xoffset = 0;
  this->m_nShaders = 0;
  this->m_nTextures = 0;
  this->m_nRenderContexts = 0;
  this->m_nRenderSurfaces = 0;
  this->m_frameBufferFormat = -1;
  this->m_coordSys = E_COORDSYS_XRIGHT_YFORWARD_ZUP;
  this->m_pFont = (ERFont *)0x0;
  this->m_pRCImmediate = (ERC *)0x0;
  *(undefined4 *)&this->m_displayTiming = 0;
  return this;
}

void EGraphics::~EGraphics(int __in_chrg) {
	EGlobalManagerClient *this;
	EGlobalManagerClient *this;
	int __in_chrg;
	void *pAddress;
	
  bool bVar1;
  
                    /* inlined from /eor/src2/common/util/e_globalmanagerclient.h */
  bVar1 = __14EGlobalManager_m_shutdownComplete == 0;
  (this->field0_0x0).__vtable = (EGlobalManagerClient__vtable *)_vt_9EGraphics;
  if (bVar1) {
    Shutdown__14EGlobalManager();
  }
                    /* end of inlined section */
  ___6EMutex(&this->m_allocMutex,2);
                    /* inlined from /eor/src2/common/util/e_globalmanagerclient.h */
  (this->field0_0x0).__vtable = (EGlobalManagerClient__vtable *)_vt_20EGlobalManagerClient;
  Shutdown__20EGlobalManagerClient(&this->field0_0x0);
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

void EGraphics::ManagedShutdown() {
  EGlobalManagerClient__vtable *pEVar1;
  
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[7].EGlobalManagerClient)
            ((int)&(this->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 7),
             this->m_pDeselectTextureDL);
  return;
}

bool EGraphics::Init() {
	ERC *prc;
	int r;
	
  EGlobalManagerClient__vtable *pEVar1;
  EThread__vtable *pEVar2;
  bool bVar3;
  int iVar4;
  EDL *pEVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 unaff_s0;
  int iVar9;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  *(undefined4 *)&this->m_initialized = 1;
  pEVar1 = (this->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_48 = 0x3f800000;
  local_50 = 0;
  local_4c = 0;
                    /* end of inlined section */
  (*(code *)pEVar1[4].EGlobalManagerClient)
            ((int)&(this->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 4),&local_50,1);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[0x17].EGlobalManagerClient)
            ((int)&(this->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 0x17));
  pEVar2 = (_pSched->field0_0x0).__vtable;
  lVar6 = (*(code *)pEVar2[2].EThread)
                    ((int)&(_pSched->field0_0x0).m_threadId + (int)*(short *)(pEVar2 + 2));
  if (lVar6 == 0) {
    bVar3 = false;
  }
  else {
    pEVar1 = (this->field0_0x0).__vtable;
    uVar7 = (*(code *)pEVar1[6].EGlobalManagerClient)
                      ((int)&(this->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 6),1);
    iVar8 = (int)uVar7;
    iVar4 = *(int *)(iVar8 + 0x2c);
    iVar9 = 0;
    while( true ) {
      (**(code **)(iVar4 + 0x104))(iVar8 + *(short *)(iVar4 + 0x100),0,iVar9);
      if (1 < iVar9 + 1) break;
      iVar4 = *(int *)(iVar8 + 0x2c);
      iVar9 = iVar9 + 1;
    }
    pEVar1 = (this->field0_0x0).__vtable;
    pEVar5 = (EDL *)(*(code *)pEVar1[6].ManagedShutdown)
                              ((int)&(this->field0_0x0).__vtable +
                               (int)*(short *)&pEVar1[6].ManagedStartup,uVar7);
    this->m_pDeselectTextureDL = pEVar5;
    bVar3 = true;
  }
  return bVar3;
}

void EGraphics::DeselectTextures() {
  Execute__9EGraphicsP3EDLb(this,this->m_pDeselectTextureDL,false);
  return;
}

void EGraphics::BeginFrame() {
  EThread__vtable *pEVar1;
  
  pEVar1 = (_pSched->field0_0x0).__vtable;
  (**(code **)(pEVar1 + 3))
            ((int)&(_pSched->field0_0x0).m_threadId + (int)*(short *)&pEVar1[2].Main,_evenodd);
  _7EWindow_m_pCurrentWindow = (EWindow *)0x0;
  *(undefined4 *)&this->m_insideBeginEnd = 1;
  return;
}

void EGraphics::EndFrame() {
  short sVar1;
  EThread__vtable *pEVar2;
  EThread *pEVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)&this->m_displayTiming != 0) {
    DrawTiming__9EGraphics(this);
  }
  Update__10EDebugMenu(&_debugmenu);
  Draw__10EDebugMenu(&_debugmenu);
  Draw__8EMetrics(&_metrics);
  DeselectTextures__9EGraphics(this);
  *(undefined4 *)&this->m_insideBeginEnd = 0;
  FrameComplete__7EEngine(_pEngine);
  iVar4 = _evenodd;
  pEVar2 = (_pSched->field0_0x0).__vtable;
  sVar1 = *(short *)(pEVar2 + 4);
  pEVar3 = &_pSched->field0_0x0;
  iVar5 = GetMinRatraces__7EEngine(_pEngine);
  (*(code *)pEVar2[4].EThread)((int)&pEVar3->m_threadId + (int)sVar1,iVar4,iVar5);
  return;
}

void EGraphics::DoSwapBuffer(int nFrame) {
  return;
}

void EGraphics::DoSetupFrameBuffer(int nFrame) {
  return;
}

void EGraphics::Flush() {
  EThread__vtable *pEVar1;
  
  if (this->m_pRCImmediate != (ERC *)0x0) {
    Send__3ERC(this->m_pRCImmediate);
  }
  pEVar1 = (_pSched->field0_0x0).__vtable;
  (*(code *)pEVar1[5].Main)
            ((int)&(_pSched->field0_0x0).m_threadId + (int)*(short *)&pEVar1[5].EThread);
  return;
}

void EGraphics::SetVideoMode(int xsize, int ysize, int frameBufferFormat, int zBufferFormat) {
  this->m_zBufferFormat = zBufferFormat;
  this->m_xscreen = xsize;
  this->m_yscreen = ysize;
  this->m_frameBufferFormat = frameBufferFormat;
  return;
}

void EGraphics::GetOutputRect(EFloatRect &rcOut) {
  rcOut->left = 0.0;
  rcOut->top = 0.0;
  rcOut->right = (float)this->m_xscreen;
  rcOut->bottom = (float)this->m_yscreen;
  return;
}

void EGraphics::GetScissorRect(EFloatRect *prScissor, EFloatRect &rClipOut, EFloatRect &rOut) {
	TRect<float> *this;
	TRect<float> &r;
	
                    /* inlined from /eor/src2/common/math/e_rect.h */
  prScissor->left = rClipOut->left;
  prScissor->top = rClipOut->top;
  prScissor->right = rClipOut->right;
  prScissor->bottom = rClipOut->bottom;
  return;
}

void EGraphics::SetBackgroundColor(EVec3 &color, bool clear) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  ulong in_v0;
  ulong uVar6;
  
  puVar1 = (undefined *)((int)&color->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)color & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)color - uVar3) >> uVar3 * 8;
  fVar4 = (color->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(this->m_backgroundColor).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_backgroundColor & 7;
  puVar5 = (ulong *)((int)&this->m_backgroundColor - uVar2);
  *puVar5 = uVar6 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_backgroundColor).field0_0x0.d[2] = fVar4;
  *(int *)&this->m_frameBufferClear = (int)clear;
  return;
}

EDL* EGraphics::AllocDL() {
  EDL *pEVar1;
  
                    /* inlined from c:/eor/src2/engine/e_dl.h */
  pEVar1 = (EDL *)_allocBucketAlloc__FUiUi(0x58,0x23);
                    /* end of inlined section */
  pEVar1 = __3EDL(pEVar1);
  return pEVar1;
}

void EGraphics::FreeDL(EDL *pDL) {
  if (pDL != (EDL *)0x0) {
    (*(code *)pDL->__vtable[1].EDL)
              ((int)&(pDL->m_allocGroup).m_allocList.field0_0x0.m_l.m_pHead +
               (int)*(short *)(pDL->__vtable + 1),3);
  }
  return;
}

ERC* EGraphics::AllocRC() {
  ERC *pEVar1;
  
  pEVar1 = (ERC *)__builtin_new(0x30);
  pEVar1 = __3ERC(pEVar1);
  return pEVar1;
}

void EGraphics::FreeRC(ERC *pRC) {
  if (pRC != (ERC *)0x0) {
    (*(code *)pRC->__vtable->TriStrip)((int)&pRC->m_pdl + (int)*(short *)&pRC->__vtable->TriStrip,3)
    ;
  }
  return;
}

ERC* EGraphics::Open(RCMode mode) {
	ERC *pRC;
	EMutex *this;
	EMutex *this;
	
  EGlobalManagerClient__vtable *pEVar1;
  long lVar2;
  ESyncObject__vtable *pEVar3;
  ERC *pEVar4;
  
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar3 = (this->m_allocMutex).field0_0x0.__vtable;
  (**(code **)(pEVar3 + 1))
            ((int)&(this->m_allocMutex).field0_0x0.__vtable + (int)*(short *)&pEVar3->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  pEVar1 = (this->field0_0x0).__vtable;
  lVar2 = (*(code *)pEVar1[0x12].EGlobalManagerClient)
                    ((int)&(this->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 0x12));
  pEVar4 = (ERC *)lVar2;
  if (lVar2 == 0) {
    pEVar3 = (this->m_allocMutex).field0_0x0.__vtable;
  }
  else {
    this->m_nRenderContexts = this->m_nRenderContexts + 1;
    if (mode == RC_IMMEDIATE) {
      this->m_pRCImmediate = pEVar4;
    }
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
    pEVar3 = (this->m_allocMutex).field0_0x0.__vtable;
  }
  (*(code *)pEVar3[1].Acquire)
            ((int)&(this->m_allocMutex).field0_0x0.__vtable + (int)*(short *)&pEVar3[1].ESyncObject)
  ;
                    /* end of inlined section */
  if (lVar2 != 0) {
    (*(code *)pEVar4->__vtable[1].SetCombineMode)
              ((int)&pEVar4->m_pdl + (int)*(short *)&pEVar4->__vtable[1].SaveImageData,mode);
  }
  return pEVar4;
}

EDL* EGraphics::Close(ERC *pRC) {
	EDL *pDL;
	RCMode mode;
	ERC *this;
	EMutex *this;
	
  ESyncObject__vtable *pEVar1;
  EGlobalManagerClient__vtable *pEVar2;
  RCMode RVar3;
  EDL *pDL;
  
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
                    /* end of inlined section */
  (*(code *)pRC->__vtable[1].SleepUntil)
            ((int)&pRC->m_pdl + (int)*(short *)&pRC->__vtable[1].SetBlendMode);
                    /* inlined from c:/eor/src2/engine/e_rc.h */
  Validate__3EDL(pRC->m_pdl);
  pEVar1 = (this->m_allocMutex).field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(this->m_allocMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  pEVar2 = (this->field0_0x0).__vtable;
  this->m_nRenderContexts = this->m_nRenderContexts + -1;
  RVar3 = pRC->m_mode;
  pDL = pRC->m_pdl;
  (*(code *)pEVar2[0x12].ManagedShutdown)
            ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar2[0x12].ManagedStartup,pRC);
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar1 = (this->m_allocMutex).field0_0x0.__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(this->m_allocMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].ESyncObject)
  ;
                    /* end of inlined section */
  if (RVar3 == RC_IMMEDIATE) {
    Execute__9EGraphicsP3EDLb(this,pDL,true);
    this->m_pRCImmediate = (ERC *)0x0;
    pDL = (EDL *)0x0;
  }
  return pDL;
}

void EGraphics::Execute(EDL *pDL, bool deallocate) {
  EThread__vtable *pEVar1;
  
  pEVar1 = (_pSched->field0_0x0).__vtable;
  (*(code *)pEVar1[3].Main)
            ((int)&(_pSched->field0_0x0).m_threadId + (int)*(short *)&pEVar1[3].EThread,pDL,
             deallocate);
  return;
}

EDL* EGraphics::AllocDisplayList() {
	EDL *pDL;
	EMutex *this;
	
  ESyncObject__vtable *pEVar1;
  EGlobalManagerClient__vtable *pEVar2;
  EDL *pEVar3;
  
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar1 = (this->m_allocMutex).field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(this->m_allocMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  pEVar2 = (this->field0_0x0).__vtable;
  pEVar3 = (EDL *)(*(code *)pEVar2[0x11].EGlobalManagerClient)
                            ((int)&(this->field0_0x0).__vtable + (int)*(short *)(pEVar2 + 0x11));
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar1 = (this->m_allocMutex).field0_0x0.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  (*(code *)pEVar1[1].Acquire)
            ((int)&(this->m_allocMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].ESyncObject)
  ;
                    /* end of inlined section */
  return pEVar3;
}

void EGraphics::Destroy(EDL *pDL) {
  EGlobalManagerClient__vtable *pEVar1;
  
  if (pDL != (EDL *)0x0) {
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[3].ManagedShutdown)
              ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
    DeallocateDL__9EGraphicsP3EDL(this,pDL);
  }
  return;
}

void EGraphics::DeallocateDL(EDL *pDL) {
	EMutex *this;
	
  ESyncObject__vtable *pEVar1;
  EGlobalManagerClient__vtable *pEVar2;
  
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar1 = (this->m_allocMutex).field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(this->m_allocMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  pEVar2 = (this->field0_0x0).__vtable;
  (*(code *)pEVar2[0x11].ManagedShutdown)
            ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar2[0x11].ManagedStartup,pDL);
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar1 = (this->m_allocMutex).field0_0x0.__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(this->m_allocMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].ESyncObject)
  ;
  return;
}

ETexture* EGraphics::CreateTexture(ETextureDef &tsd) {
	ETexture *pTexture;
	EMutex *this;
	
  EGlobalManagerClient__vtable *pEVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ESyncObject__vtable *pEVar5;
  
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar5 = (this->m_allocMutex).field0_0x0.__vtable;
  (**(code **)(pEVar5 + 1))
            ((int)&(this->m_allocMutex).field0_0x0.__vtable + (int)*(short *)&pEVar5->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  pEVar1 = (this->field0_0x0).__vtable;
  lVar3 = (*(code *)pEVar1[0x13].EGlobalManagerClient)
                    ((int)&(this->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 0x13));
  if (lVar3 == 0) {
    pEVar5 = (this->m_allocMutex).field0_0x0.__vtable;
  }
  else {
    this->m_nTextures = this->m_nTextures + 1;
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
    pEVar5 = (this->m_allocMutex).field0_0x0.__vtable;
  }
  (*(code *)pEVar5[1].Acquire)
            ((int)&(this->m_allocMutex).field0_0x0.__vtable + (int)*(short *)&pEVar5[1].ESyncObject)
  ;
                    /* end of inlined section */
  if (lVar3 != 0) {
    iVar2 = *(int *)((int)lVar3 + 0x20);
    lVar4 = (**(code **)(iVar2 + 0x4c))((int)lVar3 + (int)*(short *)(iVar2 + 0x48),tsd);
    if (lVar4 != 0) goto LAB_002d4658;
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[8].EGlobalManagerClient)
              ((int)&(this->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 8),lVar3);
  }
  lVar3 = 0;
LAB_002d4658:
  return (ETexture *)lVar3;
}

void EGraphics::Destroy(ETexture *pTexture) {
	int p;
	
  EGlobalManagerClient__vtable *pEVar1;
  EThread__vtable *pEVar2;
  ESyncObject__vtable *pEVar3;
  ETexture *pEVar4;
  int iVar5;
  
  if ((pTexture != (ETexture *)0x0) && (iVar5 = 0, _pRend != (ERenderer *)0x0)) {
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[3].ManagedShutdown)
              ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
    do {
      if (1 < iVar5) goto LAB_002d4714;
      pEVar2 = (_pRend->field0_0x0).__vtable;
      pEVar4 = (ETexture *)
               (*(code *)pEVar2[2].EThread)
                         ((int)&(_pRend->field0_0x0).m_threadId + (int)*(short *)(pEVar2 + 2),iVar5)
      ;
      iVar5 = iVar5 + 1;
    } while (pEVar4 != pTexture);
    DeselectTextures__9EGraphics(this);
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[3].ManagedShutdown)
              ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
LAB_002d4714:
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
    pEVar3 = (this->m_allocMutex).field0_0x0.__vtable;
    (**(code **)(pEVar3 + 1))
              ((int)&(this->m_allocMutex).field0_0x0.__vtable + (int)*(short *)&pEVar3->Release,
               0xffffffffffffffff);
                    /* end of inlined section */
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[0x13].ManagedShutdown)
              ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1[0x13].ManagedStartup,
               pTexture);
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
    pEVar3 = (this->m_allocMutex).field0_0x0.__vtable;
                    /* end of inlined section */
    this->m_nTextures = this->m_nTextures + -1;
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
    (*(code *)pEVar3[1].Acquire)
              ((int)&(this->m_allocMutex).field0_0x0.__vtable +
               (int)*(short *)&pEVar3[1].ESyncObject);
  }
                    /* end of inlined section */
  return;
}

EShader* EGraphics::CreateShader(EShaderDef &sd) {
	EShader *pShader;
	EMutex *this;
	
  EGlobalManagerClient__vtable *pEVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ESyncObject__vtable *pEVar5;
  
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar5 = (this->m_allocMutex).field0_0x0.__vtable;
  (**(code **)(pEVar5 + 1))
            ((int)&(this->m_allocMutex).field0_0x0.__vtable + (int)*(short *)&pEVar5->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  pEVar1 = (this->field0_0x0).__vtable;
  lVar3 = (*(code *)pEVar1[0x14].EGlobalManagerClient)
                    ((int)&(this->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 0x14));
  if (lVar3 == 0) {
    pEVar5 = (this->m_allocMutex).field0_0x0.__vtable;
  }
  else {
    this->m_nShaders = this->m_nShaders + 1;
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
    pEVar5 = (this->m_allocMutex).field0_0x0.__vtable;
  }
  (*(code *)pEVar5[1].Acquire)
            ((int)&(this->m_allocMutex).field0_0x0.__vtable + (int)*(short *)&pEVar5[1].ESyncObject)
  ;
                    /* end of inlined section */
  if (lVar3 != 0) {
    iVar2 = *(int *)((int)lVar3 + 0x8c);
    lVar4 = (**(code **)(iVar2 + 0x24))((int)lVar3 + (int)*(short *)(iVar2 + 0x20),sd);
    if (lVar4 != 0) goto LAB_002d4848;
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[0xb].ManagedShutdown)
              ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1[0xb].ManagedStartup,lVar3)
    ;
  }
  lVar3 = 0;
LAB_002d4848:
  return (EShader *)lVar3;
}

void EGraphics::Destroy(EShader *pShader) {
	EMutex *this;
	
  EGlobalManagerClient__vtable *pEVar1;
  ESyncObject__vtable *pEVar2;
  
  if (pShader != (EShader *)0x0) {
    pEVar1 = (this->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
                    /* end of inlined section */
    (*(code *)pEVar1[3].ManagedShutdown)
              ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
    pEVar2 = (this->m_allocMutex).field0_0x0.__vtable;
    (**(code **)(pEVar2 + 1))
              ((int)&(this->m_allocMutex).field0_0x0.__vtable + (int)*(short *)&pEVar2->Release,
               0xffffffffffffffff);
                    /* end of inlined section */
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[0x14].ManagedShutdown)
              ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1[0x14].ManagedStartup,
               pShader);
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
    pEVar2 = (this->m_allocMutex).field0_0x0.__vtable;
                    /* end of inlined section */
    this->m_nShaders = this->m_nShaders + -1;
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
    (*(code *)pEVar2[1].Acquire)
              ((int)&(this->m_allocMutex).field0_0x0.__vtable +
               (int)*(short *)&pEVar2[1].ESyncObject);
  }
                    /* end of inlined section */
  return;
}

ERenderSurface* EGraphics::CreateRenderSurface(ERenderSurfaceDef &rsd) {
	ERenderSurface *pSurf;
	EMutex *this;
	
  EGlobalManagerClient__vtable *pEVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ESyncObject__vtable *pEVar5;
  
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar5 = (this->m_allocMutex).field0_0x0.__vtable;
  (**(code **)(pEVar5 + 1))
            ((int)&(this->m_allocMutex).field0_0x0.__vtable + (int)*(short *)&pEVar5->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  pEVar1 = (this->field0_0x0).__vtable;
  lVar3 = (*(code *)pEVar1[0x15].EGlobalManagerClient)
                    ((int)&(this->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 0x15));
  if (lVar3 == 0) {
    pEVar5 = (this->m_allocMutex).field0_0x0.__vtable;
  }
  else {
    this->m_nRenderSurfaces = this->m_nRenderSurfaces + 1;
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
    pEVar5 = (this->m_allocMutex).field0_0x0.__vtable;
  }
  (*(code *)pEVar5[1].Acquire)
            ((int)&(this->m_allocMutex).field0_0x0.__vtable + (int)*(short *)&pEVar5[1].ESyncObject)
  ;
                    /* end of inlined section */
  if (lVar3 != 0) {
    iVar2 = *(int *)((int)lVar3 + 0x10);
    lVar4 = (**(code **)(iVar2 + 0x14))((int)lVar3 + (int)*(short *)(iVar2 + 0x10),rsd);
    if (lVar4 != 0) goto LAB_002d49d0;
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[9].EGlobalManagerClient)
              ((int)&(this->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 9),lVar3);
  }
  lVar3 = 0;
LAB_002d49d0:
  return (ERenderSurface *)lVar3;
}

void EGraphics::Destroy(ERenderSurface *pSurf) {
	EMutex *this;
	
  EGlobalManagerClient__vtable *pEVar1;
  ESyncObject__vtable *pEVar2;
  
  if (pSurf != (ERenderSurface *)0x0) {
    pEVar1 = (this->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
                    /* end of inlined section */
    (*(code *)pEVar1[3].ManagedShutdown)
              ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
    pEVar2 = (this->m_allocMutex).field0_0x0.__vtable;
    (**(code **)(pEVar2 + 1))
              ((int)&(this->m_allocMutex).field0_0x0.__vtable + (int)*(short *)&pEVar2->Release,
               0xffffffffffffffff);
                    /* end of inlined section */
    pEVar1 = (this->field0_0x0).__vtable;
    this->m_nRenderSurfaces = this->m_nRenderSurfaces + -1;
    (*(code *)pEVar1[0x15].ManagedShutdown)
              ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1[0x15].ManagedStartup,pSurf
              );
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
    pEVar2 = (this->m_allocMutex).field0_0x0.__vtable;
    (*(code *)pEVar2[1].Acquire)
              ((int)&(this->m_allocMutex).field0_0x0.__vtable +
               (int)*(short *)&pEVar2[1].ESyncObject);
  }
                    /* end of inlined section */
  return;
}

EMovie* EGraphics::CreateMovie() {
	EMovie *pMovie;
	EMutex *this;
	
  ESyncObject__vtable *pEVar1;
  EGlobalManagerClient__vtable *pEVar2;
  EMovie *pEVar3;
  
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar1 = (this->m_allocMutex).field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(this->m_allocMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  pEVar2 = (this->field0_0x0).__vtable;
  pEVar3 = (EMovie *)
           (*(code *)pEVar2[0x16].EGlobalManagerClient)
                     ((int)&(this->field0_0x0).__vtable + (int)*(short *)(pEVar2 + 0x16));
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar1 = (this->m_allocMutex).field0_0x0.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  (*(code *)pEVar1[1].Acquire)
            ((int)&(this->m_allocMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].ESyncObject)
  ;
                    /* end of inlined section */
  return pEVar3;
}

void EGraphics::Destroy(EMovie *pMovie) {
	EMutex *this;
	
  ESyncObject__vtable *pEVar1;
  EGlobalManagerClient__vtable *pEVar2;
  
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar1 = (this->m_allocMutex).field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(this->m_allocMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  pEVar2 = (this->field0_0x0).__vtable;
  (*(code *)pEVar2[0x16].ManagedShutdown)
            ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar2[0x16].ManagedStartup,pMovie)
  ;
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar1 = (this->m_allocMutex).field0_0x0.__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(this->m_allocMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].ESyncObject)
  ;
  return;
}

void EGraphics::ComputeViewport(EViewport &vp, EFloatRect &rect) {
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	
  EGlobalManagerClient__vtable *pEVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
                    /* end of inlined section */
  pEVar1 = (this->field0_0x0).__vtable;
  fVar2 = (float)(*(code *)pEVar1[0xc].EGlobalManagerClient)
                           ((int)&(this->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 0xc));
  pEVar1 = (this->field0_0x0).__vtable;
  fVar3 = (float)(*(code *)pEVar1[0xc].ManagedShutdown)
                           ((int)&(this->field0_0x0).__vtable +
                            (int)*(short *)&pEVar1[0xc].ManagedStartup);
  fVar4 = (rect->bottom - rect->top) * 0.5;
  fVar5 = (fVar2 - fVar3) * 0.5;
  fVar2 = (rect->right - rect->left) * 0.5;
  (vp->vScale).field0_0x0.d[0] = fVar2;
  (vp->vScale).field0_0x0.d[1] = -fVar4;
  (vp->vOffset).field0_0x0.d[0] = fVar2 + rect->left;
  fVar2 = rect->top;
  (vp->vScale).field0_0x0.d[2] = fVar5;
  (vp->vOffset).field0_0x0.d[2] = fVar3 + fVar5;
  (vp->vScale).field0_0x0.d[3] = 1.0;
  (vp->vOffset).field0_0x0.d[3] = 0.0;
  (vp->vOffset).field0_0x0.d[1] = fVar4 + fVar2;
  return;
}

void EGraphics::SetUpNormalMapMatrix() {
	EMat4 *this;
	
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = 0x3f000000;
  local_3c = 0x3f000000;
  local_38 = 0;
  Scale__5EMat4RC5EVec3(&this->m_mNormalMap,(EVec3 *)&local_40);
  local_3c = 0x3f000000;
  local_40 = 0x3f000000;
  local_38 = 0x3f800000;
  PostTranslate__5EMat4RC5EVec3(&this->m_mNormalMap,(EVec3 *)&local_40);
  return;
}

void EGraphics::LoadSystemFont() {
	char *szName;
	char *szName;
	
  bool bVar1;
  ERFont *pEVar2;
  
                    /* end of inlined section */
  if ((this->m_pFont == (ERFont *)0x0) &&
     (bVar1 = IsValid__16EResourceManagerPCc(&_fontman.field0_0x0,"systemfont"), bVar1)) {
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
    pEVar2 = (ERFont *)
             AddRef__16EResourceManagerPCcP5EFilei(&_fontman.field0_0x0,"systemfont",(EFile *)0x0,0)
    ;
                    /* end of inlined section */
    this->m_pFont = pEVar2;
  }
  return;
}

void EGraphics::DrawTiming() {
	ERC *prc;
	bool fovknown;
	int fov;
	EWindow win;
	int nFields;
	char szBuffer[32];
	int pos;
	float leftIndent;
	float topIndent;
	EVec2 vSize;
	float numspace;
	float yspace;
	EVec3 vEye;
	float fovYDegrees;
	float aspect;
	float nearPlane;
	float farPlane;
	float x;
	ERFont *this;
	ERC *prc;
	EVec2 *this;
	ERFont *this;
	ERC *prc;
	float x;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	float x;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	float x;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	float x;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	float x;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	float x;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	float x;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	float x;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	float x;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	float x;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	float x;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	
  bool bVar1;
  EGlobalManagerClient__vtable *pEVar2;
  undefined8 uVar3;
  ERC *prc;
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
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  EVec3 vEye;
  EWindow win;
  char szBuffer [32];
  float local_100;
  float local_fc;
  float local_f0;
  float local_ec;
  float fovYDegrees;
  float aspect;
  float nearPlane;
  float farPlane;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b0;
  undefined4 uStack_ac;
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
  
  local_c0 = (undefined4)unaff_s1;
  uStack_bc = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s8;
  uStack_4c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_60 = (undefined4)unaff_s7;
  uStack_5c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_70 = (undefined4)unaff_s6;
  uStack_6c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_80 = (undefined4)unaff_s5;
  uStack_7c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_90 = (undefined4)unaff_s4;
  uStack_8c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_a0 = (undefined4)unaff_s3;
  uStack_9c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_b0 = (undefined4)unaff_s2;
  uStack_ac = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_d0 = (undefined4)unaff_s0;
  uStack_cc = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (this->m_pFont != (ERFont *)0x0) {
    pEVar2 = (this->field0_0x0).__vtable;
    uVar3 = (*(code *)pEVar2[6].EGlobalManagerClient)
                      ((int)&(this->field0_0x0).__vtable + (int)*(short *)(pEVar2 + 6),0);
                    /* inlined from /eor/src2/engine/window/e_window.h */
                    /* end of inlined section */
    bVar1 = _7EWindow_m_pCurrentPortalWindow != (EPortalWindow *)0x0;
    if (bVar1) {
                    /* end of inlined section */
      GetViewParams__C13EPortalWindowR5EVec3RfN32
                (_7EWindow_m_pCurrentPortalWindow,&vEye,&fovYDegrees,&aspect,&nearPlane,&farPlane);
    }
    fVar5 = 60.0;
    __7EWindow(&win);
    prc = (ERC *)uVar3;
    Select__7EWindowP3ERC(&win,prc);
    Select__6ERFontP3ERC(this->m_pFont,prc);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    fVar8 = (this->m_vLTInd).field0_0x0.d[0];
    fVar9 = (this->m_vLTInd).field0_0x0.d[1];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    iVar4 = (int)(_dt * fVar5 + 0.99);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    if (iVar4 < 1) {
      iVar4 = 1;
    }
    DoGetStringSize__6ERFontPvbP7EWindow((ERFont *)&vEye,this->m_pFont,true,(EWindow *)0x0);
                    /* end of inlined section */
    fVar5 = GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
    _fps = 0x3c / iVar4;
    if (iVar4 == 0) {
      trap(7);
    }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    fVar5 = fVar5 * 1.1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    fVar7 = fVar8 + vEye.field0_0x0.d[0];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    fVar6 = fVar9 + fVar5;
    local_100 = fVar8;
    local_fc = fVar9;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,&DAT_003c6c90,false,(EVec2 *)&local_100,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
                    /* end of inlined section */
    sprintf(szBuffer,"%d");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    local_f0 = fVar7;
    local_ec = fVar9;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,szBuffer,false,(EVec2 *)&local_f0,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0
              );
    local_100 = fVar8;
    local_fc = fVar6;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,&DAT_003c6ca0,false,(EVec2 *)&local_100,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
                    /* end of inlined section */
    sprintf(szBuffer,"%.2f");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    local_100 = fVar7;
    local_fc = fVar6;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,szBuffer,false,(EVec2 *)&local_100,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    fVar6 = fVar9 + fVar5 + fVar5;
    local_100 = fVar8;
    local_fc = fVar6;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,&DAT_003c6cb0,false,(EVec2 *)&local_100,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
                    /* end of inlined section */
    sprintf(szBuffer,"%.2f");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    local_100 = fVar7;
    local_fc = fVar6;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,szBuffer,false,(EVec2 *)&local_100,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    fVar6 = fVar9 + fVar5 * 3.0;
    local_100 = fVar8;
    local_fc = fVar6;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,&DAT_003c6cb8,false,(EVec2 *)&local_100,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
                    /* end of inlined section */
    sprintf(szBuffer,"%.2f");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    local_100 = fVar7;
    local_fc = fVar6;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,szBuffer,false,(EVec2 *)&local_100,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    fVar6 = fVar9 + fVar5 * 4.0;
    local_100 = fVar8;
    local_fc = fVar6;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,"VRAM:",false,(EVec2 *)&local_100,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0
              );
                    /* end of inlined section */
    sprintf(szBuffer,"%d");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    local_100 = fVar7;
    local_fc = fVar6;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,szBuffer,false,(EVec2 *)&local_100,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    fVar6 = fVar9 + fVar5 * 5.0;
    local_100 = fVar8;
    local_fc = fVar6;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,"TFLT:",false,(EVec2 *)&local_100,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0
              );
                    /* end of inlined section */
    sprintf(szBuffer,"%d");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    local_100 = fVar7;
    local_fc = fVar6;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,szBuffer,false,(EVec2 *)&local_100,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    fVar6 = fVar9 + fVar5 * 6.0;
    local_100 = fVar8;
    local_fc = fVar6;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,"VU I:",false,(EVec2 *)&local_100,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0
              );
                    /* end of inlined section */
    sprintf(szBuffer,"%d");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    local_100 = fVar7;
    local_fc = fVar6;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,szBuffer,false,(EVec2 *)&local_100,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    fVar6 = fVar9 + fVar5 * 7.0;
    local_100 = fVar8;
    local_fc = fVar6;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,"GS I:",false,(EVec2 *)&local_100,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0
              );
                    /* end of inlined section */
    sprintf(szBuffer,"%d");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    local_100 = fVar7;
    local_fc = fVar6;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,szBuffer,false,(EVec2 *)&local_100,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    fVar6 = fVar9 + fVar5 * 8.0;
    local_100 = fVar8;
    local_fc = fVar6;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,&DAT_003c6ce0,false,(EVec2 *)&local_100,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
                    /* end of inlined section */
    sprintf(szBuffer,"%d");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    local_100 = fVar7;
    local_fc = fVar6;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,szBuffer,false,(EVec2 *)&local_100,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    fVar6 = fVar9 + fVar5 * 9.0;
    local_100 = fVar8;
    local_fc = fVar6;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,&DAT_003c6ce8,false,(EVec2 *)&local_100,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
                    /* end of inlined section */
    sprintf(szBuffer,"%d");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    local_100 = fVar7;
    local_fc = fVar6;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,szBuffer,false,(EVec2 *)&local_100,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    fVar6 = fVar9 + fVar5 * 10.0;
    local_100 = fVar8;
    local_fc = fVar6;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,&DAT_003c6cf0,false,(EVec2 *)&local_100,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
                    /* end of inlined section */
    sprintf(szBuffer,"%d");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    local_100 = fVar7;
    local_fc = fVar6;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,szBuffer,false,(EVec2 *)&local_100,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
                    /* end of inlined section */
    if (bVar1) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
      fVar9 = fVar9 + fVar5 * 11.0;
      local_100 = fVar8;
      local_fc = fVar9;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,&DAT_003c6cf8,false,(EVec2 *)&local_100,E_FAX_LEFT,E_FAY_TOP,
                 (EVec2 *)0x0);
                    /* end of inlined section */
      sprintf(szBuffer,"%d");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      local_100 = fVar7;
      local_fc = fVar9;
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,szBuffer,false,(EVec2 *)&local_100,E_FAX_LEFT,E_FAY_TOP,
                 (EVec2 *)0x0);
    }
                    /* end of inlined section */
    pEVar2 = (this->field0_0x0).__vtable;
    (*(code *)pEVar2[6].ManagedShutdown)
              ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar2[6].ManagedStartup,uVar3);
    ___7EWindow(&win,2);
  }
  return;
}

ERFont* EGraphics::GetSystemFont() {
  LoadSystemFont__9EGraphics(this);
  return this->m_pFont;
}

void EGraphics::DisplayTiming(bool enable, EVec2 &vLTind) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong in_v0;
  ulong uVar5;
  
  puVar1 = (undefined *)((int)&vLTind->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)vLTind & 7;
  uVar5 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)vLTind - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&(this->m_vLTInd).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar5 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vLTInd & 7;
  puVar4 = (ulong *)((int)&this->m_vLTInd - uVar2);
  *puVar4 = uVar5 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  if (enable) {
    LoadSystemFont__9EGraphics(this);
    *(int *)&this->m_displayTiming = (int)enable;
  }
  else {
    *(int *)&this->m_displayTiming = (int)enable;
  }
  return;
}

void EGlobalManagerClient::~EGlobalManagerClient(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (EGlobalManagerClient__vtable *)_vt_20EGlobalManagerClient;
  Shutdown__20EGlobalManagerClient(this);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EGlobalManagerClient::Shutdown() {
  if (__14EGlobalManager_m_shutdownComplete == 0) {
    Shutdown__14EGlobalManager();
  }
  return;
}

bool EGlobalManagerClient::ManagedStartup() {
  return true;
}

void EGlobalManagerClient::ManagedShutdown() {
  return;
}

int EGraphics::GetLargestAvailableTextureMemoryBlock() {
  return -1;
}

float EGraphics::GetFarZVal() {
  return 0.0;
}

float EGraphics::GetNearZVal() {
  return 1.0;
}

ECoordinateSystem EGraphics::GetCoordinateSystem() {
  return this->m_coordSys;
}

void EGraphics::SetCoordinateSystem(ECoordinateSystem coordSys) {
  this->m_coordSys = coordSys;
  return;
}

float EGraphics::GetScreenAspect() {
  return 1.333333;
}

int EGraphics::GetScreenXSize() {
  return this->m_xscreen;
}

int EGraphics::GetScreenYSize() {
  return this->m_yscreen;
}

void EGraphics::SetScreenXOffset(int xoffset) {
  this->m_xoffset = xoffset;
  return;
}

void EGraphics::SetScreenYOffset(int yoffset) {
  this->m_yoffset = yoffset;
  return;
}

int EGraphics::GetScreenXOffset() {
  return this->m_xoffset;
}

int EGraphics::GetScreenYOffset() {
  return this->m_yoffset;
}

int EGraphics::GetMaxTextureXSize() {
  return 0x400;
}

int EGraphics::GetMaxTextureYSize() {
  return 0x400;
}

EMat4* EGraphics::GetNormalMapMatrix() {
  return &this->m_mNormalMap;
}

void EGraphics::DiscardAllVram() {
  return;
}

bool EGraphics::ManagedStartup() {
  return true;
}

void EGraphics::SelectFrameBuffer(int which) {
  return;
}

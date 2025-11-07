// STATUS: NOT STARTED

#include "e_vif.h"

EEvent EVif::m_ev = {
	/* .m_sema = */ {
		/* base class 0 = */ {
			/* .$vf1686 = */ NULL
		},
		/* .m_id = */ 0,
		/* .m_maxCount = */ 0,
		/* .m_waits = */ 0,
		/* .m_count = */ 0
	}
};

EInterruptHandler EVif::m_ih = {
	/* .m_id = */ 0,
	/* .m_cause = */ 0
};

bool EVif::m_init = false;
int EVif::m_vu1ResumePCs[4];

EVif* EVif::EVif() {
	int i;
	
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  bVar1 = __4EVif_m_init == 0;
  *(undefined4 *)&this->m_begin = 0;
  if (bVar1) {
    __4EVif_m_init = 1;
    Create__17EInterruptHandlerR6EEventi(&_4EVif_m_ih,&_4EVif_m_ev,0x20000007);
    iVar3 = 3;
    piVar2 = _4EVif_m_vu1ResumePCs + 3;
    do {
      *piVar2 = -1;
      iVar3 = iVar3 + -1;
      piVar2 = piVar2 + -1;
    } while (-1 < iVar3);
  }
  return this;
}

void EVif::~EVif(int __in_chrg) {
	void *pAddress;
	
  *(undefined4 *)&this->m_begin = 0;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void EVif::PatchDmaTag() {
	int leftOver;
	int nqw;
	
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  if (this->m_pLastDmaTag != (uint *)0x0) {
    iVar3 = (-((int)this->m_pEnd - (int)this->m_pLastDmaTag >> 2 & 3U) & 3) - 1;
    if (iVar3 == -1) {
      puVar4 = this->m_pLastDmaTag;
    }
    else {
      do {
        puVar4 = this->m_pEnd;
        iVar3 = iVar3 + -1;
        *puVar4 = 0;
        this->m_pEnd = puVar4 + 1;
      } while (iVar3 != -1);
      puVar4 = this->m_pLastDmaTag;
    }
    iVar2 = (int)this->m_pEnd - (int)puVar4 >> 2;
    iVar3 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar3 = iVar2;
    }
    uVar1 = (iVar3 >> 2) - 1;
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    *puVar4 = *puVar4 | uVar1;
  }
  return;
}

u32* EVif::AddVifTag(u32 vifTag) {
	u32 *rVal;
	
  uint *puVar1;
  
  puVar1 = this->m_pEnd;
  *puVar1 = vifTag;
  this->m_pEnd = puVar1 + 1;
  return puVar1;
}

u32* EVif::AddDmaTag(u32 command, void *pData, int nqw) {
	u32 *rVal;
	
  uint *puVar1;
  uint *puVar2;
  
  PatchDmaTag__4EVif(this);
  puVar1 = this->m_pEnd;
  if (nqw == 0) {
    this->m_pLastDmaTag = puVar1;
  }
  else {
    this->m_pLastDmaTag = (uint *)0x0;
  }
  puVar2 = this->m_pEnd;
  *puVar2 = command << 0x1c | nqw;
  this->m_pEnd = puVar2 + 1;
  puVar2[1] = (uint)pData;
  this->m_pEnd = puVar2 + 2;
  return puVar1;
}

u32* EVif::AddData(void *pData, int nBytes) {
	u32 *rVal;
	
  uint *pDest;
  
  pDest = this->m_pEnd;
  memcpy(pDest,pData,nBytes);
  this->m_pEnd = (uint *)((int)this->m_pEnd + (nBytes & 0xfffffffcU));
  return pDest;
}

void EVif::Begin(void *pBuf, int maxNumBytes) {
  this->m_pStart = (uint *)pBuf;
  *(undefined4 *)&this->m_begin = 1;
  this->m_maxNumBytes = maxNumBytes;
  this->m_pLastDmaTag = (uint *)0x0;
  this->m_pEnd = (uint *)pBuf;
  return;
}

void EVif::End() {
  *(undefined4 *)&this->m_begin = 0;
  PatchDmaTag__4EVif(this);
  return;
}

void EVif::FlushCache() {
  SyncDCache(this->m_pStart,this->m_pEnd + 4);
  return;
}

void EVif::Send() {
	u32 cause;
	u_int uiSTAT;
	
  int iVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  undefined4 in_vc13;
  
  REG_DMAC_1_VIF1_QWC = 0;
  uVar3 = _cfc2(in_vc13);
  REG_DMAC_1_VIF1_TADR = (uint)this->m_pStart & 0xfffffff;
  REG_DMAC_STAT = 2;
  if ((uVar3 & 0x400) != 0) {
    scePrintf(0x3c82c0);
  }
  REG_DMAC_1_VIF1_CHCR = 0x145;
  do {
                    /* inlined from /eor/src2/common/sync/e_event.h */
    Acquire__10ESemaphoreUi(&_4EVif_m_ev.m_sema,0xffffffff);
    iVar1 = DAT_1100c688;
                    /* end of inlined section */
    UnlockDoneTextures__12EPs2Renderer(&_ps2rend);
    if (iVar1 == 1) {
      _ps2rend.m_nTextureFaults = _ps2rend.m_nTextureFaults + 1;
      WaitForNewTexture__12EPs2RendererP8ETexture(&_ps2rend,(ETexture *)(DAT_1100ff20 & 0xfffffffe))
      ;
    }
    piVar4 = _4EVif_m_vu1ResumePCs + iVar1;
    if (*piVar4 == -1) {
      iVar2 = sceDevVu1GetTpc();
      *piVar4 = iVar2;
    }
    sceDevVu1Exec(*(undefined2 *)piVar4);
    _ps2rend.m_nVUInterrupts = _ps2rend.m_nVUInterrupts + 1;
  } while (iVar1 != 0);
  return;
}

void EVif::Dump() {
	u32 *pCur;
	
  uint *puVar1;
  
  for (puVar1 = this->m_pStart; puVar1 < this->m_pEnd; puVar1 = puVar1 + 1) {
  }
  return;
}

void EVif::VerifyDmaTag(u32 command) {
	u32 curCommand;
	
  if ((this->m_pLastDmaTag == (uint *)0x0) || ((*this->m_pLastDmaTag >> 0x1c & 7) != command)) {
    AddDmaTag__4EVifUiPvi(this,command,(void *)0x0,0);
  }
  return;
}

void EVif::UnpackImmediate(void *pDst, void *pSrc, int nBytes) {
  VerifyDmaTag__4EVifUi(this,1);
  AddVifTag__4EVifUi(this,(uint)pDst | (nBytes >> 4) << 0x10 | 0x8000U | 0x6c000000);
  AddData__4EVifPvi(this,pSrc,nBytes);
  return;
}

void EVif::UnpackReference(void *pDst, void *pSrc, int nBytes) {
	int nqw;
	
  AddDmaTag__4EVifUiPvi(this,3,pSrc,nBytes >> 4);
  AddVifTag__4EVifUi(this,0);
  AddVifTag__4EVifUi(this,(uint)pDst | (nBytes >> 4) << 0x10 | 0x8000U | 0x6c000000);
  return;
}

void EVif::ExecuteFunction(u32 pFn) {
	u32 vifCmd;
	
  VerifyDmaTag__4EVifUi(this,1);
  AddVifTag__4EVifUi(this,pFn | 0x14000000);
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___17EInterruptHandler(&_4EVif_m_ih,2);
                    /* inlined from /eor/src2/common/sync/e_event.h */
      Destroy__10ESemaphore(&_4EVif_m_ev.m_sema);
      ___10ESemaphore(&_4EVif_m_ev.m_sema,2);
    }
    else {
                    /* inlined from /eor/src2/common/sync/e_event.h */
      __10ESemaphore(&_4EVif_m_ev.m_sema);
      Create__10ESemaphoreii(&_4EVif_m_ev.m_sema,1,0);
                    /* end of inlined section */
      __17EInterruptHandler(&_4EVif_m_ih);
    }
  }
  return;
}

void global constructors keyed to EVif::m_ev() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to EVif::m_ev() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

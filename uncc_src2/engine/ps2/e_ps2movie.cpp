// STATUS: NOT STARTED

#include "e_ps2movie.h"

typedef struct {
	u_int *pCurrent;
	u_long128 *pBase;
	u_long128 *pDmaTag;
	u_int pad03;
} sceDmaPacket;

EPs2Movie *_pMoviePlayer = NULL;

__vtbl_ptr_type EPs2Movie virtual table[10] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Movie::Load,
		/* .__delta2 = */ 18168
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EMovie::Start,
		/* .__delta2 = */ -28224
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Movie::Stop,
		/* .__delta2 = */ 17920
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EMovie::Reset,
		/* .__delta2 = */ -28200
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Movie::IsFinished,
		/* .__delta2 = */ 20192
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Movie::Update,
		/* .__delta2 = */ 18864
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Movie::~EPs2Movie,
		/* .__delta2 = */ 17768
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Movie::Draw,
		/* .__delta2 = */ 19832
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

static int sendToIOP(int dst, u8 *src, int size) {
	sceSifDmaData transData;
	int did;
	
  undefined8 uVar1;
  long lVar2;
  sceSifDmaData__305_1408 transData;
  
  if (size < 1) {
    size = 0;
  }
  else {
    transData.mode = 0;
    transData.data = (uint)src;
    transData.addr = dst;
    transData.size = size;
    FlushCache(0);
    uVar1 = sceSifSetDma(&transData,1);
    do {
      lVar2 = sceSifDmaStat(uVar1);
    } while (-1 < lVar2);
  }
  return size;
}

void EPs2Movie::~EPs2Movie(int __in_chrg) {
	EMovie *this;
	void *pAddress;
	void *ptr;
	
  (this->field0_0x0).__vtable = (EMovie__vtable *)_vt_9EPs2Movie;
  _pMoviePlayer = (EPs2Movie *)0x0;
  Stop__9EPs2Movie(this);
                    /* inlined from /eor/src2/common/datastruc/e_ringbuffer.h */
  _memmanFree__FPv((this->m_AudioRingBuffer).m_pBuffer);
  ___6EMutex(&(this->m_AudioRingBuffer).m_mutex,2);
  _memmanFree__FPv((this->m_DemuxRingBuffer).m_pBuffer);
  ___6EMutex(&(this->m_DemuxRingBuffer).m_mutex,2);
  _memmanFree__FPv((this->m_MuxRingBuffer).m_pBuffer);
  ___6EMutex(&(this->m_MuxRingBuffer).m_mutex,2);
                    /* end of inlined section */
                    /* inlined from e_movie.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EMovie__vtable *)_vt_6EMovie;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2movie.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void EPs2Movie::Stop() {
	FnFree Free;
	EFSState desc;
	
  EThread__vtable *pEVar1;
  EFile__vtable *pEVar2;
  code *pcVar3;
  EFSState desc;
  
  ClearIOPHalf__9EPs2Audio(&_ps2Audio);
  if (this->m_pFile != (EFile *)0x0) {
    sceMpegReset(&this->m_mpeg);
    sceMpegDelete(&this->m_mpeg);
    pEVar1 = (_pApp->field0_0x0).__vtable;
    pcVar3 = (code *)(*(code *)pEVar1[8].EThread)
                               ((int)&(_pApp->field0_0x0).m_threadId + (int)*(short *)(pEVar1 + 8));
    (*pcVar3)(this->m_pMpegBuffer);
    (*pcVar3)(this->m_pVideoOutBuffer);
    (*pcVar3)(this->m_pDList[0]);
    (*pcVar3)(this->m_pDList[1]);
    desc._8_8_ = CONCAT71(desc._9_7_,4);
    desc.size = 0x1c;
    desc._8_8_ = desc._8_8_ & 0xffffffff803fffff | 0x400000;
    pEVar2 = this->m_pFile->__vtable;
    desc.id = (*(code *)pEVar2[1].GetExt)
                        ((int)&this->m_pFile->__vtable + (int)*(short *)&pEVar2[1].GetName);
    SetStreamState__16EPs2IOPInterfaceRC8EFSState(&_ps2IOPInterface,&desc);
    this->m_pFile = (EFile *)0x0;
    waitForIOPReadComplete__9EPs2Movie(this);
  }
  return;
}

bool EPs2Movie::Load(EFile *pFile, u32 uStart, u32 length) {
	static bool sMpegIpuNeedInit = true;
	FnAllocAlign AllocAligned;
	EFSState desc;
	ERingBuffer *this;
	ERingBuffer *this;
	ERingBuffer *this;
	
  EThread__vtable *pEVar1;
  code *pcVar2;
  uchar *puVar3;
  uint16 *puVar4;
  int iVar5;
  uint size;
  sceMpeg__223_3212 *psVar6;
  EFSState desc;
  
  if (sMpegIpuNeedInit_1716 != 0) {
    sceIpuInit();
    sceMpegInit();
    sMpegIpuNeedInit_1716 = 0;
  }
                    /* inlined from /eor/src2/common/datastruc/e_ringbuffer.h */
                    /* end of inlined section */
  pEVar1 = (_pApp->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/datastruc/e_ringbuffer.h */
                    /* end of inlined section */
  psVar6 = &this->m_mpeg;
  pcVar2 = (code *)(*(code *)pEVar1[7].Main)
                             ((int)&(_pApp->field0_0x0).m_threadId +
                              (int)*(short *)&pEVar1[7].EThread);
  this->m_MovieLength = length;
  this->m_MovieDataRead = 0;
  this->m_Retrace = 0;
  this->m_AudioDataRead = 0;
  this->m_pCurrentDList = (uint16 *)0x0;
  waitForIOPReadComplete__9EPs2Movie(this);
  desc._8_8_ = CONCAT71(desc._9_7_,0xc);
  desc.size = 0x1c;
  desc._8_8_ = desc._8_8_ & 0x803fffff | 0x20000000 | (ulong)uStart << 0x20;
  desc.id = (*(code *)pFile->__vtable[1].GetExt)
                      ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable[1].GetName);
  SetStreamState__16EPs2IOPInterfaceRC8EFSState(&_ps2IOPInterface,&desc);
  this->m_pFile = pFile;
  puVar3 = (uchar *)(*pcVar2)(0x13c768,0x10);
  this->m_pMpegBuffer = puVar3;
  puVar3 = (uchar *)(*pcVar2)(0x118000,0x40);
  this->m_pVideoOutBuffer = puVar3;
  puVar4 = (uint16 *)(*pcVar2)(0x21100,0x10);
  this->m_pDList[0] = puVar4;
  puVar4 = (uint16 *)(*pcVar2)(0x21100,0x10);
  this->m_DemuxLastDMASize = 0;
                    /* inlined from /eor/src2/common/datastruc/e_ringbuffer.h */
                    /* end of inlined section */
  this->m_pDList[1] = puVar4;
                    /* inlined from /eor/src2/common/datastruc/e_ringbuffer.h */
  puVar3 = (uchar *)_memmanAlloc__FUiUi(0x30000,0x40);
  (this->m_DemuxRingBuffer).m_pBuffer = puVar3;
  (this->m_DemuxRingBuffer).m_Size = 0x30000;
  puVar3 = (uchar *)_memmanAlloc__FUiUi(0x10000,0x40);
  (this->m_MuxRingBuffer).m_pBuffer = puVar3;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_ringbuffer.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_ringbuffer.h */
  (this->m_MuxRingBuffer).m_Size = 0x10000;
                    /* end of inlined section */
  GetIOPBuffer__9EPs2AudioRPvRUi(&_ps2Audio,&this->m_IopBuffer,&this->m_IopBufferSize);
  iVar5 = GetWritableHalf__9EPs2Audio(&_ps2Audio);
                    /* inlined from /eor/src2/common/datastruc/e_ringbuffer.h */
                    /* end of inlined section */
  this->m_AudioDataCount = 0;
                    /* inlined from /eor/src2/common/datastruc/e_ringbuffer.h */
  size = this->m_IopBufferSize << 3;
                    /* end of inlined section */
  this->m_AudioSkipBytes = 0;
                    /* inlined from /eor/src2/common/datastruc/e_ringbuffer.h */
  this->m_IopBufferHalf = iVar5;
  puVar3 = (uchar *)_memmanAlloc__FUiUi(size,0x40);
  (this->m_AudioRingBuffer).m_pBuffer = puVar3;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_ringbuffer.h */
  (this->m_AudioRingBuffer).m_Size = size;
                    /* end of inlined section */
  sceMpegCreate(psVar6,this->m_pMpegBuffer,0x13c768);
  sceMpegAddStrCallback(psVar6,0,0,0x304f08,this);
  sceMpegAddStrCallback(psVar6,2,0,0x305140,this);
  sceMpegAddCallback(psVar6,1,0x3052f0,this);
  sceMpegAddCallback(psVar6,4,0x3055a0,this);
  sceMpegAddCallback(psVar6,0,0x304f00,this);
  this->m_CSCDuration = 0;
  waitForIOPReadComplete__9EPs2Movie(this);
  FillBuffer__9EPs2Movieb(this,true);
  waitForIOPReadComplete__9EPs2Movie(this);
  _pMoviePlayer = this;
  return true;
}

void EPs2Movie::Update() {
  Update__6EMovie(&this->field0_0x0);
  return;
}

void EPs2Movie::GenerateDisplayList() {
	int screenW;
	int screenH;
	int bufWidth;
	int mbx;
	int mby;
	int mbxMax;
	int mbyMax;
	EGraphics *this;
	int i;
	u8 *image;
	int bufPtr;
	sceGifPacket gifPacket;
	int i;
	int j;
	
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  uchar *puVar11;
  int iVar12;
  int iVar13;
  sceGifPacket__305_1306 gifPacket;
  int mbyMax;
  int local_cc;
  int local_c8;
  
                    /* inlined from e_graphics.h */
                    /* end of inlined section */
  iVar13 = (this->m_mpeg).width;
                    /* inlined from e_graphics.h */
  iVar3 = _pGfx->m_xscreen;
  iVar7 = _pGfx->m_yscreen;
                    /* end of inlined section */
  iVar2 = (this->m_mpeg).height;
  iVar4 = iVar2 + 0xf;
  if (-1 < iVar2) {
    iVar4 = iVar2;
  }
  iVar2 = iVar7 + 0xf;
  if (-1 < iVar7) {
    iVar2 = iVar7;
  }
  local_cc = (this->field0_0x0).m_MovieX;
  iVar5 = iVar3 + 0x7e;
  if (-1 < iVar3 + 0x3f) {
    iVar5 = iVar3 + 0x3f;
  }
  iVar6 = iVar13 + 0xf;
  if (-1 < iVar13) {
    iVar6 = iVar13;
  }
  iVar9 = iVar3 + 0xf;
  if (-1 < iVar3) {
    iVar9 = iVar3;
  }
  if (local_cc == -1) {
    local_cc = (iVar3 - iVar13) / 2;
  }
  local_c8 = (this->field0_0x0).m_MovieY;
  if (local_c8 == -1) {
    local_c8 = (iVar7 - (this->m_mpeg).height) / 2;
  }
  iVar3 = iVar3 * iVar7;
  iVar13 = iVar6 >> 4;
  if (iVar9 >> 4 < iVar6 >> 4) {
    iVar13 = iVar9 >> 4;
  }
  iVar7 = 0;
  iVar6 = iVar3 + 0x3f;
  if (-1 < iVar3) {
    iVar6 = iVar3;
  }
  do {
    puVar11 = this->m_pVideoOutBuffer;
    lVar8 = (long)(iVar6 >> 6);
    if (iVar7 == 0) {
      lVar8 = 0;
    }
    iVar9 = iVar7 + 1;
    sceGifPkInit(&gifPacket,this->m_pDList[iVar7]);
    sceGifPkReset(&gifPacket);
    sceGifPkCnt(&gifPacket,0,0,0);
    sceGifPkAddGsData(&gifPacket,0x1000000000000003);
    sceGifPkAddGsData(&gifPacket,0xe);
    sceGifPkAddGsData(&gifPacket,0);
    sceGifPkAddGsData(&gifPacket,0x3f);
    sceGifPkAddGsAD(&gifPacket,0x50,lVar8 << 0x20 | (long)(iVar5 >> 6) << 0x30);
    sceGifPkAddGsAD(&gifPacket,0x52,0x1000000010);
    iVar3 = 0;
    if (0 < iVar13) {
      do {
        iVar7 = 0;
        iVar12 = iVar3 + 1;
        if (0 < iVar4 >> 4) {
          iVar10 = local_c8;
          do {
            bVar1 = iVar7 < iVar2 >> 4;
            iVar7 = iVar7 + 1;
            if (bVar1) {
              sceGifPkCnt(&gifPacket,0,0,0);
              sceGifPkAddGsData(&gifPacket,0x1000000000000002);
              sceGifPkAddGsData(&gifPacket,0xe);
              sceGifPkAddGsAD(&gifPacket,0x51,
                              (long)(local_cc + iVar3 * 0x10) << 0x20 | (long)iVar10 << 0x30);
              sceGifPkAddGsAD(&gifPacket,0x53,0);
              sceGifPkCnt(&gifPacket,0,0,0);
              sceGifPkAddGsData(&gifPacket,0x800000000000040);
              sceGifPkRef(&gifPacket,(uint)puVar11 & 0xfffffff,0x40,0,0,0);
            }
            puVar11 = puVar11 + 0x400;
            iVar10 = iVar10 + 0x10;
          } while (iVar7 < iVar4 >> 4);
        }
        iVar3 = iVar12;
      } while (iVar12 < iVar13);
    }
    sceGifPkEnd(&gifPacket,0,0,0);
    sceGifPkAddGsData(&gifPacket,0x1000000000008002);
    sceGifPkAddGsData(&gifPacket,0xe);
    sceGifPkAddGsData(&gifPacket,0);
    sceGifPkAddGsData(&gifPacket,0x3f);
    sceGifPkAddGsData(&gifPacket,0);
    sceGifPkAddGsData(&gifPacket,0x60);
    sceGifPkTerminate(&gifPacket);
    FlushCache(0);
    iVar7 = iVar9;
  } while (iVar9 < 2);
  return;
}

void EPs2Movie::Draw() {
	u32 waitTime;
	
  EMovie__vtable *pEVar1;
  int iVar2;
  uint16 *pDList;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  pEVar1 = (this->field0_0x0).__vtable;
  lVar4 = (*(code *)pEVar1[1].Stop)((int)this->m_pDList + *(short *)&pEVar1[1].Start + -0x58);
  if (lVar4 == 0) {
    if (1 < _retracecount - this->m_Retrace) {
      REG_RCNT0_MODE = 0x83;
      REG_RCNT0_COUNT = 0;
      lVar4 = sceMpegGetPicture(&this->m_mpeg,this->m_pVideoOutBuffer,0x460);
      if (lVar4 < 0) {
        printf("error in sceMpegGetPicture\n");
      }
      iVar2 = (this->m_mpeg).frameCount;
      this->m_Retrace = _retracecount;
      if (iVar2 == 0) {
        GenerateDisplayList__9EPs2Movie(this);
      }
    }
    uVar5 = 500;
    pDList = this->m_pDList[_ps2FrameBuffer];
    this->m_pCurrentDList = pDList;
    SendGSDisplayList__12EPs2GraphicsPvii(&_ps2gfx,pDList,0,1);
    if (_iVideoMode == 1) {
      uVar5 = 600;
    }
    this->m_CSCDuration =
         (int)((float)(this->m_mpeg).width * (float)(this->m_mpeg).height * 0.000151);
    uVar3 = REG_RCNT0_COUNT;
    while (uVar3 < uVar5) {
      FillBuffer__9EPs2Movieb(this,false);
      uVar3 = REG_RCNT0_COUNT;
    }
  }
  return;
}

bool EPs2Movie::IsFinished() {
  long lVar1;
  
  lVar1 = sceMpegIsEnd(&this->m_mpeg);
  return lVar1 != 0;
}

int EPs2Movie::ErrorCallback(sceMpeg *mp, sceMpegCbData *cbData, void *anyData) {
  return 1;
}

int EPs2Movie::VideoCallback(sceMpeg *mp, sceMpegCbDataStr *cbstr, void *data) {
	ERingBuffer *this;
	EAutoMutex fAuto;
	EMutex &mutex;
	
  int iVar1;
  int iVar2;
  uint length;
  bool bVar3;
  int *piVar4;
  EAutoMutex fAuto;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  piVar4 = (int *)((int)data + 0xa8);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  (**(code **)(*(int *)((int)data + 0xa8) + 0x14))
            ((int)piVar4 + (int)*(short *)(*(int *)((int)data + 0xa8) + 0x10),0xffffffffffffffff);
  iVar1 = *(int *)((int)data + 0x9c);
  iVar2 = *(int *)((int)data + 0xa0);
  (**(code **)(*piVar4 + 0x1c))((int)piVar4 + (int)*(short *)(*piVar4 + 0x18));
                    /* end of inlined section */
  length = cbstr->len;
  bVar3 = length <= (uint)(iVar1 - iVar2);
  if (bVar3) {
    FillByUncachedCopy__11ERingBufferPUcUi((ERingBuffer *)((int)data + 0x98),cbstr->data,length);
  }
  return (uint)bVar3;
}

void EPs2Movie::tBlockXFer() {
	int newWritableHalf;
	ERingBuffer *this;
	EAutoMutex fAuto;
	EMutex &mutex;
	int dst;
	EAutoMutex fAuto;
	EAutoMutex fAuto;
	
  ESyncObject__vtable *pEVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  uchar *puVar5;
  int iVar6;
  uint uVar7;
  EMutex *pEVar8;
  EAutoMutex fAuto;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar8 = &(this->m_AudioRingBuffer).m_mutex;
                    /* end of inlined section */
  iVar6 = GetWritableHalf__9EPs2Audio(&_ps2Audio);
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (this->m_AudioRingBuffer).m_mutex.field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(pEVar8->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
  uVar2 = (this->m_AudioRingBuffer).m_FilledCount;
  pEVar1 = (pEVar8->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(pEVar8->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
                    /* end of inlined section */
  uVar7 = this->m_IopBufferSize;
  if (uVar2 < uVar7 >> 1) {
    ClearIOPHalf__9EPs2Audio(&_ps2Audio);
  }
  else {
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
    pEVar1 = (this->m_AudioRingBuffer).m_mutex.field0_0x0.__vtable;
                    /* end of inlined section */
    pvVar3 = this->m_IopBuffer;
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
    (**(code **)(pEVar1 + 1))
              ((int)&(pEVar8->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
               0xffffffffffffffff);
    iVar4 = (this->m_AudioRingBuffer).m_FilledIndex;
    pEVar1 = (pEVar8->field0_0x0).__vtable;
    puVar5 = (this->m_AudioRingBuffer).m_pBuffer;
    (*(code *)pEVar1[1].Acquire)
              ((int)&(pEVar8->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
                    /* end of inlined section */
    sendToIOP__FiPUci((int)pvVar3 + (iVar6 * uVar7 >> 1),puVar5 + iVar4,this->m_IopBufferSize >> 1);
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
    pEVar1 = (this->m_AudioRingBuffer).m_mutex.field0_0x0.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
    uVar7 = this->m_IopBufferSize >> 1;
    (**(code **)(pEVar1 + 1))
              ((int)&(pEVar8->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
               0xffffffffffffffff);
    uVar2 = (this->m_AudioRingBuffer).m_Size;
    if (uVar2 == 0) {
      trap(7);
    }
    (this->m_AudioRingBuffer).m_FilledCount = (this->m_AudioRingBuffer).m_FilledCount - uVar7;
    (this->m_AudioRingBuffer).m_FilledIndex =
         (int)((this->m_AudioRingBuffer).m_FilledIndex + uVar7) % (int)uVar2;
    pEVar1 = (pEVar8->field0_0x0).__vtable;
    (*(code *)pEVar1[1].Acquire)
              ((int)&(pEVar8->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
                    /* end of inlined section */
  }
  return;
}

int EPs2Movie::AudioCallback(sceMpeg *mp, sceMpegCbDataStr *cbstr, void *thisData) {
	EPs2Movie *pMovie;
	u8 *data;
	u32 length;
	int count;
	u32 count;
	ERingBuffer *this;
	EAutoMutex fAuto;
	EMutex &mutex;
	EAutoMutex fAuto;
	
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint nBytes;
  int *piVar5;
  uchar *pSource;
  uchar *puVar6;
  EAutoMutex fAuto;
  
  puVar6 = cbstr->data;
  uVar3 = cbstr->len - 4;
  cbstr->len = uVar3;
  cbstr->data = puVar6 + 4;
  uVar4 = *(uint *)((int)thisData + 0x11c);
  uVar3 = uVar3 - *(int *)((int)thisData + 0x118);
  pSource = puVar6 + 4 + *(int *)((int)thisData + 0x118);
  puVar6 = pSource;
  if (uVar4 < 0x28) {
    nBytes = 0x28 - uVar4;
    if (uVar3 < 0x28 - uVar4) {
      nBytes = uVar3;
    }
    puVar6 = pSource + nBytes;
    memcpy((void *)((int)thisData + uVar4 * 0x28 + 0xc4),pSource,nBytes);
    uVar3 = uVar3 - nBytes;
    *(uint *)((int)thisData + 0x118) = *(int *)((int)thisData + 0x118) + nBytes;
    *(uint *)((int)thisData + 0x11c) = *(int *)((int)thisData + 0x11c) + nBytes;
  }
  if (uVar3 != 0) {
    piVar5 = (int *)((int)thisData + 0xfc);
    do {
                    /* inlined from /eor/src2/common/datastruc/e_ringbuffer.h */
      (**(code **)(*(int *)((int)thisData + 0xfc) + 0x14))
                ((int)piVar5 + (int)*(short *)(*(int *)((int)thisData + 0xfc) + 0x10),
                 0xffffffffffffffff);
      iVar1 = *(int *)((int)thisData + 0xf0);
      iVar2 = *(int *)((int)thisData + 0xf4);
      (**(code **)(*piVar5 + 0x1c))((int)piVar5 + (int)*(short *)(*piVar5 + 0x18));
                    /* end of inlined section */
      uVar4 = uVar3;
      if ((uint)(iVar1 - iVar2) <= uVar3) {
                    /* inlined from /eor/src2/common/datastruc/e_ringbuffer.h */
        (**(code **)(*(int *)((int)thisData + 0xfc) + 0x14))
                  ((int)piVar5 + (int)*(short *)(*(int *)((int)thisData + 0xfc) + 0x10),
                   0xffffffffffffffff);
        uVar4 = *(int *)((int)thisData + 0xf0) - *(int *)((int)thisData + 0xf4);
        (**(code **)(*piVar5 + 0x1c))((int)piVar5 + (int)*(short *)(*piVar5 + 0x18));
      }
                    /* end of inlined section */
      if (uVar4 == 0) {
        return 0;
      }
      FillByCopy__11ERingBufferPUcUi((ERingBuffer *)((int)thisData + 0xec),puVar6,uVar4);
      uVar3 = uVar3 - uVar4;
      *(uint *)((int)thisData + 0x11c) = *(int *)((int)thisData + 0x11c) + uVar4;
      *(uint *)((int)thisData + 0x118) = *(int *)((int)thisData + 0x118) + uVar4;
      puVar6 = puVar6 + uVar4;
    } while (uVar3 != 0);
  }
  *(undefined4 *)((int)thisData + 0x118) = 0;
  return 1;
}

int EPs2Movie::NoDataCallback(sceMpeg *mp, sceMpegCbData *cbstr, void *data) {
	EPs2Movie *pMovie;
	u32 dmaSize;
	int overlap;
	ERingBuffer *this;
	int length;
	EAutoMutex fAuto;
	EMutex &mutex;
	ERingBuffer *this;
	EAutoMutex fAuto;
	EMutex &mutex;
	EAutoMutex fAuto;
	EAutoMutex fAuto;
	EAutoMutex fAuto;
	EAutoMutex fAuto;
	
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  EAutoMutex fAuto;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  piVar2 = (int *)((int)data + 0xa8);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_ringbuffer.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  iVar3 = *(int *)((int)data + 0xc0);
  (**(code **)(*(int *)((int)data + 0xa8) + 0x14))
            ((int)piVar2 + (int)*(short *)(*(int *)((int)data + 0xa8) + 0x10),0xffffffffffffffff);
  if (*(int *)((int)data + 0x9c) == 0) {
    trap(7);
  }
  *(int *)((int)data + 0xa0) = *(int *)((int)data + 0xa0) - iVar3;
  *(int *)((int)data + 0xa4) = (*(int *)((int)data + 0xa4) + iVar3) % *(int *)((int)data + 0x9c);
  (**(code **)(*piVar2 + 0x1c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x18));
                    /* end of inlined section */
  *(undefined4 *)((int)data + 0xc0) = 0;
  while( true ) {
    (**(code **)(*(int *)((int)data + 0xa8) + 0x14))
              ((int)piVar2 + (int)*(short *)(*(int *)((int)data + 0xa8) + 0x10),0xffffffffffffffff);
    uVar4 = *(uint *)((int)data + 0xa0);
    (**(code **)(*piVar2 + 0x1c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x18));
                    /* end of inlined section */
    if (0xfff < uVar4) break;
    FillBuffer__9EPs2Movieb((EPs2Movie *)data,true);
    if (*(uint *)((int)data + 0x130) <= *(uint *)((int)data + 0x134)) {
                    /* inlined from /eor/src2/common/datastruc/e_ringbuffer.h */
      (**(code **)(*(int *)((int)data + 0xa8) + 0x14))
                ((int)piVar2 + (int)*(short *)(*(int *)((int)data + 0xa8) + 0x10),0xffffffffffffffff
                );
      *(int *)((int)data + 0xa0) = *(int *)((int)data + 0xa0) + 0xf;
      (**(code **)(*piVar2 + 0x1c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x18));
    }
  }
                    /* inlined from /eor/src2/common/datastruc/e_ringbuffer.h */
  (**(code **)(*(int *)((int)data + 0xa8) + 0x14))
            ((int)piVar2 + (int)*(short *)(*(int *)((int)data + 0xa8) + 0x10),0xffffffffffffffff);
  uVar4 = *(uint *)((int)data + 0xa0);
  (**(code **)(*piVar2 + 0x1c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x18));
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
  uVar4 = uVar4 & 0xfffffff0;
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
  if (0x1000 < uVar4) {
    uVar4 = 0x1000;
  }
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  (**(code **)(*(int *)((int)data + 0xa8) + 0x14))
            ((int)piVar2 + (int)*(short *)(*(int *)((int)data + 0xa8) + 0x10),0xffffffffffffffff);
  iVar3 = *(int *)((int)data + 0xa4);
  iVar1 = *(int *)((int)data + 0x98);
  (**(code **)(*piVar2 + 0x1c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x18));
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_ringbuffer.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
  iVar3 = (iVar1 + iVar3 + uVar4) - (*(int *)((int)data + 0x98) + *(int *)((int)data + 0x9c));
  if (0 < iVar3) {
    uVar4 = uVar4 - iVar3;
  }
  REG_DMAC_4_IPU_TO_QWC = uVar4 >> 4;
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  (**(code **)(*(int *)((int)data + 0xa8) + 0x14))
            ((int)piVar2 + (int)*(short *)(*(int *)((int)data + 0xa8) + 0x10),0xffffffffffffffff);
  iVar3 = *(int *)((int)data + 0xa4);
  iVar1 = *(int *)((int)data + 0x98);
  (**(code **)(*piVar2 + 0x1c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x18));
                    /* end of inlined section */
  REG_DMAC_4_IPU_TO_MADR = iVar1 + iVar3;
  REG_DMAC_4_IPU_TO_CHCR = 0x101;
  *(uint *)((int)data + 0xc0) = uVar4;
  return 1;
}

int EPs2Movie::BackgroundCallback(sceMpeg *mp, sceMpegCbData *cbData, void *data) {
	EPs2Movie *pMovie;
	u32 dueTime;
	
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = REG_RCNT0_COUNT;
  iVar1 = *(int *)((int)data + 0x138);
  uVar3 = REG_RCNT0_COUNT;
  while (uVar3 < (uint)(iVar2 + iVar1)) {
    FillBuffer__9EPs2Movieb((EPs2Movie *)data,false);
    uVar3 = REG_RCNT0_COUNT;
  }
  return 1;
}

int EPs2Movie::FillBuffer(bool blocking) {
	int filled;
	ERingBuffer *this;
	EAutoMutex fAuto;
	EMutex &mutex;
	ERingBuffer *this;
	EAutoMutex fAuto;
	EMutex &mutex;
	EPs2Movie *this;
	unsigned int length;
	EAutoMutex fAuto;
	
  ESyncObject__vtable *pEVar1;
  uchar *puVar2;
  EFile__vtable *pEVar3;
  uint nFD;
  uint uVar4;
  uint uVar5;
  int iVar6;
  EMutex *pEVar7;
  EAutoMutex fAuto;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar7 = &(this->m_MuxRingBuffer).m_mutex;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (this->m_MuxRingBuffer).m_mutex.field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(pEVar7->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  uVar4 = (this->m_MuxRingBuffer).m_FilledCount;
  do {
    pEVar1 = (pEVar7->field0_0x0).__vtable;
    (*(code *)pEVar1[1].Acquire)
              ((int)&(pEVar7->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
                    /* end of inlined section */
    if (uVar4 != 0) {
      iVar6 = Demux__9EPs2Movieb(this,true);
      return iVar6;
    }
                    /* inlined from /eor/src2/common/datastruc/e_ringbuffer.h */
    pEVar1 = (this->m_MuxRingBuffer).m_mutex.field0_0x0.__vtable;
    (**(code **)(pEVar1 + 1))
              ((int)&(pEVar7->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
               0xffffffffffffffff);
    uVar4 = (this->m_MuxRingBuffer).m_FilledCount;
    iVar6 = (this->m_MuxRingBuffer).m_FilledIndex;
    uVar5 = (this->m_MuxRingBuffer).m_Size;
    if (uVar5 == 0) {
      trap(7);
    }
    puVar2 = (this->m_MuxRingBuffer).m_pBuffer;
    pEVar1 = (pEVar7->field0_0x0).__vtable;
    (*(code *)pEVar1[1].Acquire)
              ((int)&(pEVar7->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
                    /* end of inlined section */
    pEVar3 = this->m_pFile->__vtable;
    nFD = (*(code *)pEVar3[1].GetExt)
                    ((int)&this->m_pFile->__vtable + (int)*(short *)&pEVar3[1].GetName);
    uVar4 = ReadStream__16EPs2IOPInterfaceUiiPvl
                      (&_ps2IOPInterface,nFD,0x10000,puVar2 + (int)(iVar6 + uVar4) % (int)uVar5,-1);
    if (uVar4 == 0) {
      if (!blocking) {
        return 0;
      }
      uVar5 = this->m_MovieDataRead;
    }
    else {
      uVar5 = this->m_MovieDataRead;
    }
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
    pEVar1 = (this->m_MuxRingBuffer).m_mutex.field0_0x0.__vtable;
                    /* end of inlined section */
    this->m_MovieDataRead = uVar5 + uVar4;
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
    (**(code **)(pEVar1 + 1))
              ((int)&(pEVar7->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
               0xffffffffffffffff);
    (this->m_MuxRingBuffer).m_FilledCount = (this->m_MuxRingBuffer).m_FilledCount + uVar4;
  } while( true );
}

int EPs2Movie::Demux(bool blocking) {
	int bytesProcessed;
	ERingBuffer *this;
	EAutoMutex fAuto;
	EMutex &mutex;
	EAutoMutex fAuto;
	int length;
	EAutoMutex fAuto;
	
  ESyncObject__vtable *pEVar1;
  uchar *puVar2;
  uint uVar3;
  int iVar4;
  EMutex *pEVar5;
  EAutoMutex fAuto;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar5 = &(this->m_MuxRingBuffer).m_mutex;
  pEVar1 = (this->m_MuxRingBuffer).m_mutex.field0_0x0.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  (**(code **)(pEVar1 + 1))
            ((int)&(pEVar5->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
  iVar4 = (this->m_MuxRingBuffer).m_FilledIndex;
  pEVar1 = (pEVar5->field0_0x0).__vtable;
  puVar2 = (this->m_MuxRingBuffer).m_pBuffer;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(pEVar5->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
  pEVar1 = (this->m_MuxRingBuffer).m_mutex.field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(pEVar5->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
  uVar3 = (this->m_MuxRingBuffer).m_FilledCount;
  pEVar1 = (pEVar5->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(pEVar5->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
                    /* end of inlined section */
  iVar4 = sceMpegDemuxPss(&this->m_mpeg,puVar2 + iVar4,uVar3);
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (this->m_MuxRingBuffer).m_mutex.field0_0x0.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  (**(code **)(pEVar1 + 1))
            ((int)&(pEVar5->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
  uVar3 = (this->m_MuxRingBuffer).m_Size;
  if (uVar3 == 0) {
    trap(7);
  }
  (this->m_MuxRingBuffer).m_FilledCount = (this->m_MuxRingBuffer).m_FilledCount - iVar4;
  (this->m_MuxRingBuffer).m_FilledIndex =
       ((this->m_MuxRingBuffer).m_FilledIndex + iVar4) % (int)uVar3;
  pEVar1 = (pEVar5->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(pEVar5->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
                    /* end of inlined section */
  return iVar4;
}

void EPs2Movie::waitForIOPReadComplete() {
	ESleep sleeper;
	EFSIOQuery desc;
	
  ESleep sleeper;
  EFSIOQuery desc;
  
  __6ESleep(&sleeper);
  desc.size = 0x10;
  desc.mask = 1;
  desc.state._0_1_ = 0;
  desc.flags = 0;
  QueryIOPState__16EPs2IOPInterfaceR10EFSIOQuery(&_ps2IOPInterface,&desc);
  while (((byte)desc.state & 1) == 0) {
    Sleep__6ESleepUi(&sleeper,3);
    desc.size = 0x10;
    desc.mask = 1;
    desc.state._0_1_ = 0;
    desc.flags = 0;
    QueryIOPState__16EPs2IOPInterfaceR10EFSIOQuery(&_ps2IOPInterface,&desc);
  }
  ___6ESleep(&sleeper,2);
  return;
}

void* EPs2Movie::operator new(unsigned int size) {
	void *ptr;
	
  void *__s;
  
  __s = _memmanAlloc__FUiUi(size,0x10);
  memset(__s,0,(long)(int)size);
  return __s;
}

void EPs2Movie::operator delete(void *ptr) {
  _memmanFree__FPv(ptr);
  return;
}

int EPs2Movie::strFileRead(void *buff, int size) {
  EFile__vtable *pEVar1;
  uint nFD;
  int iVar2;
  
  pEVar1 = this->m_pFile->__vtable;
  nFD = (*(code *)pEVar1[1].GetExt)
                  ((int)&this->m_pFile->__vtable + (int)*(short *)&pEVar1[1].GetName);
  iVar2 = ReadStream__16EPs2IOPInterfaceUiiPvl(&_ps2IOPInterface,nFD,size,buff,-1);
  return iVar2;
}

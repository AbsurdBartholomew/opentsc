// STATUS: NOT STARTED

#include "e_ps2audio.h"

struct TGrowPool2<EAudioEventHandler,8> : private __TGrowPool2Impl {
private:
	SUBBLOCK *m_pBlockList;
	SUBNODE *m_pFreeNodeList;
	
public:
	TGrowPool2<EAudioEventHandler,8>& operator=();
	TGrowPool2();
	TGrowPool2();
	TGrowPool2(TGrowPool2<EAudioEventHandler,8>*, int, void);
	EAudioEventHandler* Alloc();
	void Dealloc();
	void Reset();
private:
	void addBlock();
};

struct TGrowPool2<DelayedRefHolder,8> : private __TGrowPool2Impl {
private:
	SUBBLOCK *m_pBlockList;
	SUBNODE *m_pFreeNodeList;
	
public:
	TGrowPool2<DelayedRefHolder,8>& operator=();
	TGrowPool2();
	TGrowPool2();
	TGrowPool2(TGrowPool2<DelayedRefHolder,8>*, int, void);
	DelayedRefHolder* Alloc();
	void Dealloc();
	void Reset();
private:
	void addBlock();
};

EPs2Audio _ps2Audio;
EAudio *_pAudio = NULL;

__vtbl_ptr_type EPs2Audio::EThread virtual table[4] = {
	/* [0] = */ {
		/* .__delta = */ -4,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -4,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Audio::~EPs2Audio,
		/* .__delta2 = */ -25192
	},
	/* [2] = */ {
		/* .__delta = */ -4,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Audio::Main,
		/* .__delta2 = */ -22544
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EPs2Audio virtual table[24] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Audio::~EPs2Audio,
		/* .__delta2 = */ -25192
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Audio::InitAudio,
		/* .__delta2 = */ -24800
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Audio::Shutdown,
		/* .__delta2 = */ -25000
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Audio::Update,
		/* .__delta2 = */ -24400
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Audio::Flush,
		/* .__delta2 = */ -20584
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Audio::AddEvent,
		/* .__delta2 = */ -20464
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Audio::RemoveEvent,
		/* .__delta2 = */ -20184
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Audio::PlayMusic,
		/* .__delta2 = */ -22024
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Audio::StopMusic,
		/* .__delta2 = */ -22224
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Audio::PauseMusic,
		/* .__delta2 = */ -21600
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Audio::ResumeMusic,
		/* .__delta2 = */ -21576
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Audio::SetMusicVolume,
		/* .__delta2 = */ -21368
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Audio::GetMusicVolume,
		/* .__delta2 = */ -21280
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Audio::SetMusicPan,
		/* .__delta2 = */ -21200
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Audio::GetMusicPan,
		/* .__delta2 = */ -21136
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Audio::IsPlayingMusic,
		/* .__delta2 = */ -21128
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Audio::AllocVoice,
		/* .__delta2 = */ -18352
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Audio::FreeVoice,
		/* .__delta2 = */ -18056
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Audio::BindVoice,
		/* .__delta2 = */ -17656
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Audio::UnbindVoice,
		/* .__delta2 = */ -18000
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Audio::GetVoiceState,
		/* .__delta2 = */ -17264
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Audio::SetVoiceState,
		/* .__delta2 = */ -17096
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EAudio virtual table[24] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EAudio::~EAudio,
		/* .__delta2 = */ -25568
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

static TGrowPool2<EAudioEventHandler,8> _eventAllocator;
static TGrowPool2<DelayedRefHolder,8> _delayedRefAllocator;

EPMDesc* EPMDesc::EPMDesc(u32 streamID, bool looping) {
  this->uAudioStreamID = streamID;
  this->sLoopEndOffset = -1;
  *(int *)&this->bLooping = (int)looping;
  this->sLoopStartOffset = 0;
  *(undefined4 *)&this->bPaused = 0;
  return this;
}

EPMDesc* EPMDesc::EPMDesc(char *name, bool looping) {
  uint uVar1;
  
  uVar1 = CalcId__16EResourceManagerPCc(name);
  this->uAudioStreamID = uVar1;
  *(int *)&this->bLooping = (int)looping;
  this->sLoopEndOffset = -1;
  this->sLoopStartOffset = 0;
  *(undefined4 *)&this->bPaused = 0;
  return this;
}

void EVoice::reset() {
  *(undefined4 *)&this->bIsSilent = 0;
  this->volumeL = 1.0;
  *(undefined4 *)this = 0;
  this->pitch = 1.0;
  this->volumeR = 1.0;
  *(undefined4 *)&this->bIsPlaying = 0;
  return;
}

void EAudio::~EAudio(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (EAudio__0_3277__vtable *)_vt_6EAudio;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

EPs2Audio* EPs2Audio::EPs2Audio() {
	EAudio *this;
	TFixedPool<EAudioCmd,128> *this;
	
  ulong uVar1;
  EVoice__168_911 *this_00;
  int iVar2;
  
                    /* inlined from e_audio.h */
                    /* end of inlined section */
  iVar2 = 0x2f;
                    /* inlined from e_audio.h */
  (this->field0_0x0).__vtable = (EAudio__0_3277__vtable *)_vt_6EAudio;
                    /* end of inlined section */
  __7EThread((EThread *)&this->field_0x4);
  (this->field0_0x0).__vtable = (EAudio__0_3277__vtable *)_vt_9EPs2Audio;
  *(__vtbl_ptr_type **)&this->field_0x20 = _vt_9EPs2Audio_7EThread;
  __6EMutex(&this->m_sceMutex);
  __6EMutex(&this->m_flushMutex);
  __6EMutex(&this->m_dataMutex);
  __6EMutex(&this->m_sendCmdMutex);
  __6EMutex(&this->m_musicMutex);
  __6EClock(&this->m_clock);
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2audio.h */
  this->m_voice[0].pSampleRes = (ERSampledata *)0x0;
  this_00 = this->m_voice;
  while( true ) {
    this_00->pQueuedCmd = (EAudioCmd *)0x0;
                    /* end of inlined section */
    iVar2 = iVar2 + -1;
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2audio.h */
    reset__6EVoice(this_00);
                    /* end of inlined section */
    if (iVar2 == -1) break;
    this_00[1].pSampleRes = (ERSampledata *)0x0;
    this_00 = this_00 + 1;
  }
                    /* inlined from /eor/src2/common/datastruc/e_fixedpool.h */
  __10EFixedPool(&(this->m_cmdAllocPool).field0_0x0);
  Init__10EFixedPooliiPv
            (&(this->m_cmdAllocPool).field0_0x0,0x20,0x80,(this->m_cmdAllocPool).m_buffer);
                    /* end of inlined section */
  __9EMsgQueue(&this->m_commandQueue);
  uVar1 = *(ulong *)&(this->m_pcm).field_0x18;
  this->m_iLastVoiceAlloc = 0x2f;
  *(ulong *)&(this->m_pcm).field_0x18 = uVar1 & 0xfffffffffffffffe;
  this->m_iCallbackThreadID = 0;
  this->m_pIOPBuffer = (uchar *)0x0;
  *(undefined4 *)&this->m_bInitialized = 0;
  *(undefined4 *)&this->m_bMusicPreloadWait = 0;
  (this->m_pcm).m_pFile = (EFile *)0x0;
  this->m_uMixFlags1 = 0;
  this->m_uMixFlags0 = 0;
  this->m_uKeyOnFlags1 = 0;
  this->m_uKeyOnFlags0 = 0;
  this->m_iCommandQueue = 0;
  this->m_pEventHandlerList = (EAudioEventHandler *)0x0;
  this->m_pDelayedRefHolderList = (DelayedRefHolder *)0x0;
  this->m_fMusicPan = 0.0;
  *(undefined4 *)&this->m_bMovieMode = 0;
  _pAudio = &this->field0_0x0;
  return this;
}

void EPs2Audio::~EPs2Audio(int __in_chrg) {
  *(__vtbl_ptr_type **)&this->field_0x20 = _vt_9EPs2Audio_7EThread;
  (this->field0_0x0).__vtable = (EAudio__0_3277__vtable *)_vt_9EPs2Audio;
  ___9EMsgQueue(&this->m_commandQueue,2);
  ___10EFixedPool(&(this->m_cmdAllocPool).field0_0x0,2);
  ___6EClock(&this->m_clock,2);
  ___6EMutex(&this->m_musicMutex,2);
  ___6EMutex(&this->m_sendCmdMutex,2);
  ___6EMutex(&this->m_dataMutex,2);
  ___6EMutex(&this->m_flushMutex,2);
  ___6EMutex(&this->m_sceMutex,2);
  ___7EThread((EThread *)&this->field_0x4,0);
  ___6EAudio(&this->field0_0x0,__in_chrg);
  return;
}

void EPs2Audio::Shutdown() {
  EAudio__0_3277__vtable *pEVar1;
  
  if (*(int *)&this->m_bInitialized != 0) {
    Acquire__6EMutexUi(&this->m_sceMutex,0xffffffff);
    sceSdRemote(1,0x8010,0x981,0);
    sceSdRemote(1,0x8010,0xa81,0);
    sceSdRemote(1,0x80e0,0,2,0,0);
    Release__6EMutex(&this->m_sceMutex);
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1->ResumeMusic)
              ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1->PauseMusic,1);
    if (_iSoundThread == 0) {
      *(undefined4 *)&this->m_bInitialized = 0;
    }
    else {
      DeleteThread();
      *(undefined4 *)&this->m_bInitialized = 0;
    }
  }
  return;
}

void EPs2Audio::InitAudio() {
	EThread *this;
	
  bool bVar1;
  long lVar2;
  
  *(undefined4 *)&this->m_bInitialized = 1;
  Create__9EMsgQueueiPUi(&this->m_commandQueue,0x100,(uint *)0x0);
                    /* inlined from /eor/src2/common/sync/e_thread.h */
                    /* end of inlined section */
  Start__6EClock(&this->m_clock);
                    /* inlined from /eor/src2/common/sync/e_thread.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_thread.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_thread.h */
  *(char **)&this->field_0x14 = "Audio";
                    /* end of inlined section */
  bVar1 = Create__7EThreadiiPv((EThread *)&this->field_0x4,0x60,0x2000,(void *)0x0);
  if (bVar1) {
    Start__7EThread((EThread *)&this->field_0x4);
    lVar2 = sceSifAllocIopHeap(0xb800);
    this->m_pIOPBuffer = (uchar *)lVar2;
    if (lVar2 != 0) {
      sceSdRemote(1,0x8070,10,0x800);
      sceSdRemote(1,0x8160,0,0x2ba200,this);
      this->m_uMixFlags0 = 0xc00;
      sceSdRemote(1,0x8010,0x800,0xc00);
      this->m_uMixFlags1 = 0xc0c;
      sceSdRemote(1,0x8010,0x801,0xc0c);
      this->m_uMusicVolume = 0x3fff;
      sceSdRemote(1,0x8010,0xf80,0x3fff);
      sceSdRemote(1,0x8010,0x1080,this->m_uMusicVolume);
      sceSdRemote(1,0x8010,0x980,0x3fff);
      sceSdRemote(1,0x8010,0xa80,0x3fff);
      sceSdRemote(1,0x8010,0x981,0x3fff);
      sceSdRemote(1,0x8010,0xa81,0x3fff);
      sceSdRemote(1,0x80e0,0,0x10,this->m_pIOPBuffer,0xb800);
    }
  }
  return;
}

void EPs2Audio::Update() {
	DelayedRefHolder *pNode;
	DelayedRefHolder *pPrev;
	DelayedRefHolder *pDelList;
	DelayedRefHolder *this;
	DelayedRefHolder *this;
	
  int iVar1;
  EAudio__0_3277__vtable *pEVar2;
  DelayedRefHolder *pDVar3;
  EMutex *this_00;
  ERSampledata *this_01;
  DelayedRefHolder *pDVar4;
  DelayedRefHolder *pDVar5;
  
  if (this->m_pDelayedRefHolderList == (DelayedRefHolder *)0x0) {
    pEVar2 = (this->field0_0x0).__vtable;
  }
  else {
    this_00 = &this->m_dataMutex;
    Acquire__6EMutexUi(this_00,0xffffffff);
    pDVar5 = (DelayedRefHolder *)0x0;
    pDVar4 = this->m_pDelayedRefHolderList;
    pDVar3 = (DelayedRefHolder *)0x0;
    if (pDVar4 != (DelayedRefHolder *)0x0) {
      iVar1 = pDVar4->iCounter;
      while( true ) {
        if (iVar1 < 1) {
          if (pDVar3 == (DelayedRefHolder *)0x0) {
            this->m_pDelayedRefHolderList = pDVar4->pNext;
          }
          else {
            pDVar3->pNext = pDVar4->pNext;
          }
          pDVar4->pNext = pDVar5;
          pDVar5 = pDVar4;
          if (pDVar3 == (DelayedRefHolder *)0x0) {
            pDVar4 = this->m_pDelayedRefHolderList;
          }
          else {
            pDVar4 = pDVar3->pNext;
          }
        }
        else {
          pDVar3 = pDVar4;
          pDVar4 = pDVar4->pNext;
        }
        if (pDVar4 == (DelayedRefHolder *)0x0) break;
        iVar1 = pDVar4->iCounter;
      }
    }
    Release__6EMutex(this_00);
    if (pDVar5 != (DelayedRefHolder *)0x0) {
      this_01 = pDVar5->pSample;
      pDVar4 = pDVar5;
      while( true ) {
        if (this_01 == (ERSampledata *)0x0) {
          pDVar4 = pDVar4->pNext;
        }
        else {
          DelRef__9EResource(&this_01->field0_0x0);
          pDVar4->pSample = (ERSampledata *)0x0;
          pDVar4 = pDVar4->pNext;
        }
        if (pDVar4 == (DelayedRefHolder *)0x0) break;
        this_01 = pDVar4->pSample;
      }
    }
    Acquire__6EMutexUi(this_00,0xffffffff);
    while (pDVar4 = pDVar5, pDVar4 != (DelayedRefHolder *)0x0) {
      pDVar5 = pDVar4->pNext;
      if (pDVar4 != (DelayedRefHolder *)0x0) {
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2audio.h */
        reset__16DelayedRefHolder(pDVar4);
        __dl__16DelayedRefHolderPv(pDVar4);
      }
    }
    Release__6EMutex(this_00);
    pEVar2 = (this->field0_0x0).__vtable;
  }
  (*(code *)pEVar2->ResumeMusic)
            ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar2->PauseMusic,0);
  return;
}

int EPs2Audio::tTransferCallback(int channel, void *common) {
	EAutoMutex fmutex;
	EMutex &mutex;
	
  bool bVar1;
  int *piVar2;
  EAutoMutex fmutex;
  
  if (channel == 0) {
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
    piVar2 = (int *)((int)common + 0x84);
    (**(code **)(*(int *)((int)common + 0x84) + 0x14))
              ((int)piVar2 + (int)*(short *)(*(int *)((int)common + 0x84) + 0x10),0xffffffffffffffff
              );
                    /* end of inlined section */
    if ((*(int *)((int)common + 0x6f4) == 0) || (_pMoviePlayer == (EPs2Movie *)0x0)) {
      tBlockXFer__9EPs2Audio((EPs2Audio__192_2824 *)common);
    }
    else {
      tBlockXFer__9EPs2Movie(_pMoviePlayer);
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
    }
    (**(code **)(*piVar2 + 0x1c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x18));
                    /* end of inlined section */
    postEvent__9EPs2Audio8EA_EVENT((EPs2Audio__192_2824 *)common,EAE_TIMER);
    bVar1 = setCommandQueueBit__9EPs2Audioi((EPs2Audio__192_2824 *)common,2);
    if (bVar1) {
      sendCommand__9EPs2AudioUiP9EAudioCmd((EPs2Audio__192_2824 *)common,2,(EAudioCmd *)0x0);
    }
  }
  return 0;
}

void EPs2Audio::tBlockXFer() {
	EFSRead rdesc;
	bool bSecondHalf;
	bool bPlaying;
	u32 uSystemHandle;
	EFSClearMem desc;
	EFSIOQuery desc;
	int tBytes;
	EFSClearMem desc;
	
  EFile *pEVar1;
  EFile__vtable *pEVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  uint uVar7;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  EFSRead rdesc;
  EFSClearMem desc;
  undefined local_50 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  Acquire__6EMutexUi(&this->m_sceMutex,0xffffffff);
  iVar3 = sceSdRemote(1,0x8100,0);
  Release__6EMutex(&this->m_sceMutex);
  uVar6 = *(uint *)&(this->m_pcm).field_0x18 & 1;
  uVar7 = iVar3 >> 0x18 & 1U ^ 1;
  if (uVar6 == 0) {
    rdesc.field0_0x0.id = 0;
  }
  else {
    pEVar1 = (this->m_pcm).m_pFile;
    pEVar2 = pEVar1->__vtable;
    rdesc.field0_0x0.id =
         (*(code *)pEVar2[1].GetExt)((int)&pEVar1->__vtable + (int)*(short *)&pEVar2[1].GetName);
  }
  if (*(int *)&this->m_bMusicPreloadWait != 0) {
    desc.numBytes = 0x5c00;
    desc.size = 0xc;
    desc.addr = this->m_pIOPBuffer;
    if (uVar7 != 0) {
      desc.addr = this->m_pIOPBuffer + 0x5c00;
    }
    ClearIOPMemory__16EPs2IOPInterfaceRC11EFSClearMem(&_ps2IOPInterface,&desc);
    local_50._0_4_ = 0x10;
    local_50._4_4_ = 1;
    local_50._8_4_ = 0;
    QueryIOPState__16EPs2IOPInterfaceR10EFSIOQuery(&_ps2IOPInterface,(EFSIOQuery *)local_50);
    if ((local_50[12] & 1) == 0) {
      return;
    }
    *(undefined4 *)&this->m_bMusicPreloadWait = 0;
    return;
  }
  if (uVar6 == 0) {
    desc.numBytes = 0x5c00;
    desc.size = 0xc;
    desc.addr = this->m_pIOPBuffer;
    if (uVar7 != 0) {
      desc.addr = this->m_pIOPBuffer + 0x5c00;
    }
    ClearIOPMemory__16EPs2IOPInterfaceRC11EFSClearMem(&_ps2IOPInterface,&desc);
    return;
  }
  rdesc.field0_0x0._8_8_ = CONCAT71(rdesc.field0_0x0._9_7_,2);
  rdesc.addr = this->m_pIOPBuffer;
  if (uVar7 != 0) {
    rdesc.addr = this->m_pIOPBuffer + 0x5c00;
  }
  rdesc.field0_0x0._8_8_ = rdesc.field0_0x0._8_8_ & 0xffffffffffc0ffff | 0x10000;
  rdesc.field0_0x0.size = 0x28;
  rdesc.flags = 0x11;
  rdesc.numBytes = 0x5c00;
  iVar3 = ReadStream__16EPs2IOPInterfaceRC7EFSRead(&_ps2IOPInterface,&rdesc);
  if (iVar3 < 0) {
    uVar6 = this->m_uMixFlags0;
  }
  else {
    if (this->m_musicMode == kMusic48khtz) {
      iVar4 = iVar3 + 3;
      if (-1 < iVar3) {
        iVar4 = iVar3;
      }
      iVar4 = iVar4 >> 2;
    }
    else {
      iVar4 = iVar3 + 0xf;
      if (-1 < iVar3) {
        iVar4 = iVar3;
      }
      iVar4 = iVar4 >> 4;
    }
    uVar6 = (this->m_pcm).m_uCurrentOffset + iVar4;
    (this->m_pcm).m_uCurrentOffset = uVar6;
    if (*(int *)&(this->m_pcm).m_bLooping == 0) {
      if (iVar3 == 0) {
        uVar5 = *(ulong *)&(this->m_pcm).field_0x18;
      }
      else {
        if (uVar6 <= (this->m_pcm).m_uEndOffset) {
          uVar6 = this->m_uMixFlags0;
          goto LAB_002ba4ac;
        }
        uVar5 = *(ulong *)&(this->m_pcm).field_0x18;
      }
      *(ulong *)&(this->m_pcm).field_0x18 = uVar5 & 0xfffffffffffffffe;
      postEvent__9EPs2Audio8EA_EVENT(this,EAE_STREAM_END);
    }
    uVar6 = this->m_uMixFlags0;
  }
LAB_002ba4ac:
  if ((uVar6 & 0xc0) != 0xc0) {
    this->m_uMixFlags0 = uVar6 | 0xc0;
    Acquire__6EMutexUi(&this->m_sceMutex,0xffffffff);
    sceSdRemote(1,0x8010,0x800,this->m_uMixFlags0);
    Release__6EMutex(&this->m_sceMutex);
  }
  return;
}

void EPs2Audio::tSetMusicVolume() {
	s32 lVol;
	s32 rVol;
	
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  fVar3 = this->m_fMusicPan;
  uVar2 = this->m_uMusicVolume;
  if (fVar3 < 0.0) {
    uVar1 = uVar2 + (int)((float)uVar2 * fVar3);
  }
  else {
    uVar1 = uVar2;
    if (0.0 < fVar3) {
      uVar2 = uVar2 - (int)((float)uVar2 * fVar3);
    }
  }
  Acquire__6EMutexUi(&this->m_sceMutex,0xffffffff);
  sceSdRemote(1,0x8010,0xf80,uVar2);
  sceSdRemote(1,0x8010,0x1080,uVar1);
  Release__6EMutex(&this->m_sceMutex);
  return;
}

void EPs2Audio::tUpdateKeyState() {
	bool bKeyOffOccurred;
	int i;
	u32 value;
	int i;
	u32 value;
	
  uint uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  bool *pbVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  
  fVar8 = GetSec__6EClock(&this->m_clock);
  if (0.0001 < fVar8) {
    uVar1 = this->m_uKeyOnFlags0;
    bVar3 = false;
    if (uVar1 != 0) {
      uVar7 = 0;
      pbVar5 = &this->m_voice[0].bIsPlaying;
      do {
        uVar6 = 1 << (uVar7 & 0x1f);
        if ((uVar1 & uVar6) != 0) {
          Acquire__6EMutexUi(&this->m_sceMutex,0xffffffff);
          lVar4 = sceSdRemote(1,0x8020,uVar7 << 1 | 0x500);
          Release__6EMutex(&this->m_sceMutex);
          if (lVar4 == 0) {
            uVar2 = this->m_uKeyOnFlags0;
          }
          else {
            if (*(int *)(pbVar5 + 4) == 0) goto LAB_002ba700;
            uVar2 = this->m_uKeyOnFlags0;
          }
          bVar3 = true;
          this->m_uKeyOnFlags0 = uVar2 & ~uVar6;
          *(undefined4 *)pbVar5 = 0;
        }
LAB_002ba700:
        uVar7 = uVar7 + 1;
        pbVar5 = pbVar5 + 0x20;
      } while ((int)uVar7 < 0x18);
    }
    uVar1 = this->m_uKeyOnFlags1;
    uVar7 = 0;
    if (uVar1 != 0) {
      pbVar5 = &this->m_voice[0x18].bIsSilent;
      do {
        uVar6 = 1 << (uVar7 & 0x1f);
        if ((uVar1 & uVar6) != 0) {
          Acquire__6EMutexUi(&this->m_sceMutex,0xffffffff);
          lVar4 = sceSdRemote(1,0x8020,uVar7 << 1 | 0x501);
          Release__6EMutex(&this->m_sceMutex);
          if ((lVar4 == 0) || (*(int *)pbVar5 != 0)) {
            bVar3 = true;
            this->m_uKeyOnFlags1 = this->m_uKeyOnFlags1 & ~uVar6;
            *(undefined4 *)&this->m_voice[uVar7 + 0x18].bIsPlaying = 0;
          }
        }
        uVar7 = uVar7 + 1;
        pbVar5 = pbVar5 + 0x20;
      } while ((int)uVar7 < 0x18);
    }
    if (bVar3) {
      postEvent__9EPs2Audio8EA_EVENT(this,EAE_SAMPLE_END);
    }
  }
  return;
}

void EPs2Audio::Main() {
	u32 msg;
	EAutoMutex fmutex;
	EAudioCmd *pCmd;
	EMutex &mutex;
	EAutoMutex mutex;
	EMutex &mutex;
	void *ptr;
	EAudioCmd *p;
	void *p;
	
  ESyncObject__vtable *pEVar1;
  void *pvVar2;
  uint uVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  EMutex *pEVar4;
  undefined8 unaff_s2;
  EMutex *pEVar5;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  EAutoMutex fmutex;
  EAutoMutex mutex;
  uint msg;
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
  
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  pEVar5 = &this->m_flushMutex;
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  pEVar4 = &this->m_dataMutex;
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  do {
    do {
      while( true ) {
        Receive__9EMsgQueuePUib(&this->m_commandQueue,&msg,true);
        if (msg != 1) break;
        clearCommandQueueBit__9EPs2Audioi(this,1);
        tSetMusicVolume__9EPs2Audio(this);
      }
    } while (msg == 0);
    if (msg == 2) {
      clearCommandQueueBit__9EPs2Audioi(this,2);
      tUpdateDelayState__9EPs2Audio(this);
      tUpdateKeyState__9EPs2Audio(this);
    }
    else {
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
      pEVar1 = (this->m_flushMutex).field0_0x0.__vtable;
      (**(code **)(pEVar1 + 1))
                ((int)&(pEVar5->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
                 0xffffffffffffffff);
      uVar3 = msg;
                    /* end of inlined section */
      pvVar2 = (void *)msg;
      tUpdateVoice__9EPs2AudioP9EAudioCmd(this,(EAudioCmd *)msg);
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
      pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
      (**(code **)(pEVar1 + 1))
                ((int)&(pEVar4->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
                 0xffffffffffffffff);
      if (uVar3 != 0) {
        *(void **)uVar3 = _ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead;
        _ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead = pvVar2;
      }
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
      pEVar1 = (pEVar4->field0_0x0).__vtable;
      (*(code *)pEVar1[1].Acquire)
                ((int)&(pEVar4->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
      pEVar1 = (pEVar5->field0_0x0).__vtable;
      (*(code *)pEVar1[1].Acquire)
                ((int)&(pEVar5->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
                    /* end of inlined section */
    }
  } while( true );
}

void EPs2Audio::StopMusic() {
	EAutoMutex fmutex;
	EMutex &mutex;
	EFSState desc;
	
  ESyncObject__vtable *pEVar1;
  EFile *pEVar2;
  EMutex *pEVar3;
  EAutoMutex fmutex;
  EFSState desc;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar3 = &this->m_musicMutex;
  pEVar1 = (this->m_musicMutex).field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(pEVar3->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
  *(ulong *)&(this->m_pcm).field_0x18 = *(ulong *)&(this->m_pcm).field_0x18 & 0xfffffffffffffffe;
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (pEVar3->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(pEVar3->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
                    /* end of inlined section */
  pEVar2 = (this->m_pcm).m_pFile;
  if (pEVar2 != (EFile *)0x0) {
    desc._8_8_ = CONCAT71(desc._9_7_,4);
    desc.size = 0x1c;
    desc._8_8_ = desc._8_8_ & 0xffffffff803fffff | 0x400000;
    desc.id = (*(code *)pEVar2->__vtable[1].GetExt)
                        ((int)&pEVar2->__vtable + (int)*(short *)&pEVar2->__vtable[1].GetName);
    SetStreamState__16EPs2IOPInterfaceRC8EFSState(&_ps2IOPInterface,&desc);
  }
  return;
}

void EPs2Audio::PlayMusic(EPMDesc &desc) {
	ERAudioStream *pStream;
	EFile *pFile;
	EFSState desc;
	
  EStorable__vtable *pEVar1;
  char *pcVar2;
  EFile *pEVar3;
  EFile__vtable *pEVar4;
  EResource *this_00;
  EResourceManager *pEVar5;
  ulong uVar6;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  undefined local_80 [9];
  undefined7 uStack_77;
  uint local_6c;
  uint local_68;
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
  
                    /* inlined from /eor/src2/engine/audiostream/e_audiostreamman.h */
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
                    /* end of inlined section */
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/audiostream/e_audiostreamman.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/audiostream/e_audiostreamman.h */
  this_00 = AddRef__16EResourceManagerUiP5EFilei
                      (&_audiostreamman.field0_0x0,desc->uAudioStreamID,(EFile *)0x0,0);
                    /* end of inlined section */
  pEVar1 = this_00[1].field0_0x0.__vtable;
  Acquire__6EMutexUi(&this->m_musicMutex,0xffffffff);
  uVar6 = *(ulong *)&(this->m_pcm).field_0x18;
  *(undefined4 *)&this->m_bMusicPreloadWait = 0;
  *(ulong *)&(this->m_pcm).field_0x18 = uVar6 & 0xfffffffffffffffe;
  Release__6EMutex(&this->m_musicMutex);
  (this->m_pcm).m_pFile = (EFile *)pEVar1;
  *(undefined4 *)&(this->m_pcm).m_bLooping = *(undefined4 *)&desc->bLooping;
  pcVar2 = this_00[1].m_name.m_p;
  (this->m_pcm).m_uCurrentOffset = (uint)pcVar2;
  (this->m_pcm).m_uEndOffset = (uint)this_00[1].m_pManager;
  (this->m_pcm).m_uLoopStartOffset = (uint)(pcVar2 + desc->sLoopStartOffset);
  pEVar5 = (EResourceManager *)(pcVar2 + desc->sLoopEndOffset);
  if (desc->sLoopEndOffset < 0) {
    pEVar5 = this_00[1].m_pManager;
  }
  (this->m_pcm).m_uLoopEndOffset = (uint)pEVar5;
  stack0xffffff88 = CONCAT71(uStack_77,0xee);
  local_6c = (this->m_pcm).m_uLoopStartOffset;
  local_68 = (this->m_pcm).m_uLoopEndOffset;
  local_80._0_4_ = 0x1c;
  stack0xffffff88 =
       stack0xffffff88 & 0xffff | 0x23010000 |
       ((ulong)*(uint *)&(this->m_pcm).m_bLooping & 1) << 0x1f |
       (ulong)(this->m_pcm).m_uCurrentOffset << 0x20;
  pEVar3 = (this->m_pcm).m_pFile;
  pEVar4 = pEVar3->__vtable;
  local_80._4_4_ =
       (*(code *)pEVar4[1].GetExt)((int)&pEVar3->__vtable + (int)*(short *)&pEVar4[1].GetName);
  SetStreamState__16EPs2IOPInterfaceRC8EFSState(&_ps2IOPInterface,(EFSState *)local_80);
  uVar6 = *(ulong *)&(this->m_pcm).field_0x18;
  *(undefined4 *)&this->m_bMusicPreloadWait = 1;
  *(ulong *)&(this->m_pcm).field_0x18 =
       uVar6 & 0xfffffffffffffffe | ((long)*(int *)&desc->bPaused ^ 1U) & 1;
  DelRef__9EResource(this_00);
  return;
}

void EPs2Audio::PauseMusic() {
  *(ulong *)&(this->m_pcm).field_0x18 = *(ulong *)&(this->m_pcm).field_0x18 & 0xfffffffffffffffe;
  return;
}

void EPs2Audio::ResumeMusic() {
	EFSState desc;
	
  EFile *pEVar1;
  ulong uVar2;
  EFSState desc;
  
  pEVar1 = (this->m_pcm).m_pFile;
  if ((pEVar1 != (EFile *)0x0) && ((*(ulong *)&(this->m_pcm).field_0x18 & 1) == 0)) {
    desc._8_8_ = CONCAT71(desc._9_7_,4);
    desc.size = 0x1c;
    desc._8_8_ = desc._8_8_ & 0xffffffff803fffff | 0x23000000;
    desc.id = (*(code *)pEVar1->__vtable[1].GetExt)
                        ((int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[1].GetName);
    SetStreamState__16EPs2IOPInterfaceRC8EFSState(&_ps2IOPInterface,&desc);
    Acquire__6EMutexUi(&this->m_musicMutex,0xffffffff);
    uVar2 = *(ulong *)&(this->m_pcm).field_0x18;
    *(undefined4 *)&this->m_bMusicPreloadWait = 1;
    *(ulong *)&(this->m_pcm).field_0x18 = uVar2 | 1;
    Release__6EMutex(&this->m_musicMutex);
  }
  return;
}

void EPs2Audio::SetMusicVolume(float volume) {
  bool bVar1;
  
  this->m_uMusicVolume = (int)(volume * 16383.0);
  bVar1 = setCommandQueueBit__9EPs2Audioi(this,1);
  if (bVar1) {
    sendCommand__9EPs2AudioUiP9EAudioCmd(this,1,(EAudioCmd *)0x0);
  }
  return;
}

float EPs2Audio::GetMusicVolume() {
  uint uVar1;
  float fVar2;
  
  uVar1 = this->m_uMusicVolume;
  if ((int)uVar1 < 0) {
    fVar2 = (float)(uVar1 & 1 | uVar1 >> 1);
    fVar2 = fVar2 + fVar2;
  }
  else {
    fVar2 = (float)uVar1;
  }
  return fVar2 * 6.103888e-05;
}

void EPs2Audio::SetMusicPan(float pan) {
  bool bVar1;
  
  this->m_fMusicPan = pan;
  bVar1 = setCommandQueueBit__9EPs2Audioi(this,1);
  if (bVar1) {
    sendCommand__9EPs2AudioUiP9EAudioCmd(this,1,(EAudioCmd *)0x0);
  }
  return;
}

float EPs2Audio::GetMusicPan() {
  return this->m_fMusicPan;
}

bool EPs2Audio::IsPlayingMusic() {
  return (bool)((byte)*(undefined4 *)&(this->m_pcm).field_0x18 & 1);
}

int EPs2Audio::getCommandCount() {
	EAutoMutex mutex;
	EMutex &mutex;
	
  ESyncObject__vtable *pEVar1;
  int iVar2;
  EMutex *pEVar3;
  EAutoMutex mutex;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar3 = &this->m_dataMutex;
  pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(pEVar3->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  iVar2 = GetCount__9EMsgQueue(&this->m_commandQueue);
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (pEVar3->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(pEVar3->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
                    /* end of inlined section */
  return iVar2;
}

void EPs2Audio::sendCommand(u32 uCommand, EAudioCmd *pCmd) {
	EAutoMutex mutex;
	EMutex &mutex;
	
  ESyncObject__vtable *pEVar1;
  EMutex *pEVar2;
  EAutoMutex mutex;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (this->m_sendCmdMutex).field0_0x0.__vtable;
  pEVar2 = &this->m_sendCmdMutex;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  (**(code **)(pEVar1 + 1))
            ((int)&(pEVar2->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  if (pCmd != (EAudioCmd *)0x0) {
    uCommand = (uint)pCmd;
  }
  Send__9EMsgQueueUib(&this->m_commandQueue,uCommand,true);
  Send__9EMsgQueueUib(&this->m_commandQueue,0,true);
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (pEVar2->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(pEVar2->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
  return;
}

bool EPs2Audio::setCommandQueueBit(int iCommand) {
	EAutoMutex fMutex;
	bool result;
	EMutex &mutex;
	
  ESyncObject__vtable *pEVar1;
  uint uVar2;
  EMutex *pEVar3;
  EAutoMutex fMutex;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar3 = &this->m_dataMutex;
  pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(pEVar3->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  uVar2 = this->m_iCommandQueue;
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
  this->m_iCommandQueue = uVar2 | iCommand;
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (pEVar3->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(pEVar3->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
                    /* end of inlined section */
  return (uVar2 & iCommand) == 0;
}

void EPs2Audio::clearCommandQueueBit(int iCommand) {
	EAutoMutex fMutex;
	EMutex &mutex;
	
  ESyncObject__vtable *pEVar1;
  EMutex *pEVar2;
  EAutoMutex fMutex;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
  pEVar2 = &this->m_dataMutex;
  (**(code **)(pEVar1 + 1))
            ((int)&(pEVar2->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
  this->m_iCommandQueue = this->m_iCommandQueue & ~iCommand;
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (pEVar2->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(pEVar2->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
  return;
}

void EPs2Audio::Flush(bool bWait) {
	EAutoMutex fmutex2;
	EMutex &mutex;
	
  ESyncObject__vtable *pEVar1;
  int iVar2;
  EMutex *pEVar3;
  EAutoMutex fmutex2;
  
                    /* end of inlined section */
  if (bWait) {
    pEVar3 = &this->m_flushMutex;
                    /* end of inlined section */
    while (iVar2 = getCommandCount__9EPs2Audio(this), iVar2 != 0) {
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
      pEVar1 = (this->m_flushMutex).field0_0x0.__vtable;
      (**(code **)(pEVar1 + 1))
                ((int)&(pEVar3->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
                 0xffffffffffffffff);
      pEVar1 = (pEVar3->field0_0x0).__vtable;
      (*(code *)pEVar1[1].Acquire)
                ((int)&(pEVar3->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
    }
  }
  return;
}

void EPs2Audio::AddEvent(EA_EVENT type, EMsgQueue &queue, u32 queueMsg) {
	EAutoMutex fMutex;
	EMutex &mutex;
	SUBNODE *result;
	int i;
	SUBNODE *pSubNode;
	SUBBLOCK *node;
	EMsgQueue &q;
	
  ESyncObject__vtable *pEVar1;
  EAudioEventHandler *pEVar2;
  SUBBLOCK *pSVar3;
  SUBBLOCK *pSVar4;
  int iVar5;
  EAudioEventHandler *pEVar6;
  SUBBLOCK *pSVar7;
  EMutex *pEVar8;
  EAutoMutex fMutex;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar8 = &this->m_dataMutex;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(pEVar8->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
  pEVar6 = (EAudioEventHandler *)_eventAllocator.m_pFreeNodeList;
  if (_eventAllocator.m_pFreeNodeList == (SUBNODE *)0x0) {
    pSVar3 = (SUBBLOCK *)_memmanAlloc__FUiUi(0x84,4);
    iVar5 = 6;
    pSVar3->pNext = _eventAllocator.m_pBlockList;
    pSVar4 = pSVar3 + 1;
    _eventAllocator.m_pBlockList = pSVar3;
    do {
      pSVar7 = pSVar4 + 4;
      iVar5 = iVar5 + -1;
      pSVar4->pNext = pSVar7;
      pSVar4 = pSVar7;
    } while (-1 < iVar5);
    pSVar7->pNext = (SUBBLOCK *)_eventAllocator.m_pFreeNodeList;
    pEVar6 = (EAudioEventHandler *)(pSVar3 + 1);
  }
  _eventAllocator.m_pFreeNodeList = (SUBNODE *)pEVar6->pNext;
  pEVar6->queue = queue;
                    /* end of inlined section */
  pEVar2 = this->m_pEventHandlerList;
  pEVar6->queueMsg = queueMsg;
  pEVar6->type = type;
  pEVar6->pNext = pEVar2;
  this->m_pEventHandlerList = pEVar6;
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (pEVar8->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(pEVar8->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
  return;
}

void EPs2Audio::RemoveEvent(EA_EVENT type, EMsgQueue &queue, u32 queueMsg) {
	EAutoMutex fMutex;
	EAudioEventHandler *node;
	EAudioEventHandler *pPrev;
	EMutex &mutex;
	void *ptr;
	EAudioEventHandler *_node;
	
  ESyncObject__vtable *pEVar1;
  EAudioEventHandler *pEVar2;
  EAudioEventHandler *pEVar3;
  EMutex *pEVar4;
  EAutoMutex fMutex;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar4 = &this->m_dataMutex;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  (**(code **)(pEVar1 + 1))
            ((int)&(pEVar4->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  pEVar3 = (EAudioEventHandler *)0x0;
  pEVar2 = this->m_pEventHandlerList;
  do {
    if (pEVar2 == (EAudioEventHandler *)0x0) {
LAB_002bb1e8:
      pEVar1 = (pEVar4->field0_0x0).__vtable;
      (*(code *)pEVar1[1].Acquire)
                ((int)&(pEVar4->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
      return;
    }
    if (((pEVar2->type == type) && (pEVar2->queue == queue)) && (pEVar2->queueMsg == queueMsg)) {
      if (pEVar3 == (EAudioEventHandler *)0x0) {
        this->m_pEventHandlerList = pEVar2->pNext;
      }
      else {
        pEVar3->pNext = pEVar2->pNext;
      }
      if (pEVar2 != (EAudioEventHandler *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_growpool2.h */
        pEVar2->pNext = (EAudioEventHandler *)_eventAllocator.m_pFreeNodeList;
        _eventAllocator.m_pFreeNodeList = (SUBNODE *)pEVar2;
      }
      goto LAB_002bb1e8;
    }
    pEVar3 = pEVar2;
    pEVar2 = pEVar2->pNext;
  } while( true );
}

void EPs2Audio::postEvent(EA_EVENT event) {
	EAutoMutex fmutex;
	EAudioEventHandler *node;
	EMutex &mutex;
	
  ESyncObject__vtable *pEVar1;
  EA_EVENT EVar2;
  EMutex *pEVar3;
  EAudioEventHandler *pEVar4;
  EAutoMutex fmutex;
  
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar3 = &this->m_dataMutex;
  pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(pEVar3->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  pEVar4 = this->m_pEventHandlerList;
  if (pEVar4 != (EAudioEventHandler *)0x0) {
    EVar2 = pEVar4->type;
    while( true ) {
      if (EVar2 == event) {
        Send__9EMsgQueueUib(pEVar4->queue,pEVar4->queueMsg,false);
        pEVar4 = pEVar4->pNext;
      }
      else {
        pEVar4 = pEVar4->pNext;
      }
      if (pEVar4 == (EAudioEventHandler *)0x0) break;
      EVar2 = pEVar4->type;
    }
  }
  pEVar1 = (pEVar3->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(pEVar3->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
  return;
}

void EPs2Audio::tUpdateDelayState() {
	EAutoMutex fmutex;
	DelayedRefHolder *pNode;
	EMutex &mutex;
	
  ESyncObject__vtable *pEVar1;
  int iVar2;
  DelayedRefHolder *pDVar3;
  EMutex *pEVar4;
  EAutoMutex fmutex;
  
                    /* end of inlined section */
  pEVar4 = &this->m_dataMutex;
  if (this->m_pDelayedRefHolderList != (DelayedRefHolder *)0x0) {
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
    pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
    (**(code **)(pEVar1 + 1))
              ((int)&(pEVar4->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
               0xffffffffffffffff);
                    /* end of inlined section */
    pDVar3 = this->m_pDelayedRefHolderList;
    if (pDVar3 != (DelayedRefHolder *)0x0) {
      iVar2 = pDVar3->iCounter;
      while( true ) {
        if (0 < iVar2) {
          pDVar3->iCounter = iVar2 + -1;
        }
        pDVar3 = pDVar3->pNext;
        if (pDVar3 == (DelayedRefHolder *)0x0) break;
        iVar2 = pDVar3->iCounter;
      }
    }
    pEVar1 = (pEVar4->field0_0x0).__vtable;
    (*(code *)pEVar1[1].Acquire)
              ((int)&(pEVar4->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
  }
                    /* end of inlined section */
  return;
}

void EPs2Audio::tUpdateVoice(EAudioCmd *pCmd) {
	int iVoice;
	ERSampledata *pSampleRes;
	ESampleHeader header;
	u32 v;
	u32 vL;
	u32 vR;
	u32 pitch;
	EVoice voice;
	ERSampledata *this;
	int iCore;
	u32 uMask;
	u32 &uKeyOnFlags;
	SUBNODE *result;
	int i;
	SUBNODE *pSubNode;
	SUBBLOCK *node;
	
  undefined *puVar1;
  float *pfVar2;
  bool *pbVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  VAGheader *pVVar8;
  ulong *puVar9;
  SUBNODE **ppSVar10;
  SUBNODE *pSVar11;
  EAudioCmd **ppEVar12;
  SUBBLOCK *pSVar13;
  SUBBLOCK *pSVar14;
  ulong uVar15;
  EMutex *this_00;
  SUBBLOCK *pSVar16;
  ulong uVar17;
  ulong uVar18;
  ulong in_a2;
  ulong in_a3;
  ulong in_t0;
  EMutex *this_01;
  uint uVar19;
  uint *puVar20;
  ERSampledata *pEVar21;
  int iVar22;
  int iVar23;
  VAGheader header;
  EVoice__168_911 voice;
  uint pitch;
  ERSampledata **local_a8;
  
  uVar18 = 0xffffffffffffffff;
  iVar22 = 0;
  uVar17 = (ulong)(int)&this->m_dataMutex;
  uVar19 = 0;
  iVar23 = 0;
  uVar7 = pCmd->m_iVoice;
  Acquire__6EMutexUi(&this->m_dataMutex,0xffffffff);
  pEVar21 = pCmd->m_pSampleRes;
  pitch = 0;
  if (((pCmd->m_voiceDesc).mask & 8) != 0) {
    *(undefined4 *)&this->m_voice[uVar7].bIsPlaying = *(undefined4 *)&(pCmd->m_voiceDesc).bPlaying;
  }
  if (((pCmd->m_voiceDesc).mask & 1) != 0) {
    this->m_voice[uVar7].volumeL = (pCmd->m_voiceDesc).volumeL;
  }
  if (((pCmd->m_voiceDesc).mask & 2) != 0) {
    this->m_voice[uVar7].volumeR = (pCmd->m_voiceDesc).volumeR;
  }
  if (((pCmd->m_voiceDesc).mask & 4) != 0) {
    this->m_voice[uVar7].pitch = (pCmd->m_voiceDesc).pitch;
  }
  ppEVar12 = &this->m_voice[uVar7].pQueuedCmd;
  uVar15 = (ulong)(int)*ppEVar12;
  if (uVar15 == (long)(int)pCmd) {
    *ppEVar12 = (EAudioCmd *)0x0;
  }
  puVar1 = (undefined *)((int)&this->m_voice[uVar7].pSampleRes + 3);
  uVar5 = (uint)puVar1 & 7;
  uVar6 = (uint)(this->m_voice + uVar7) & 7;
  voice._0_8_ = (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
                uVar15 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
                *(ulong *)((int)(this->m_voice + uVar7) - uVar6) >> uVar6 * 8;
  puVar1 = (undefined *)((int)&this->m_voice[uVar7].volumeR + 3);
  uVar5 = (uint)puVar1 & 7;
  pfVar2 = &this->m_voice[uVar7].volumeL;
  uVar6 = (uint)pfVar2 & 7;
  voice._8_8_ = (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
                uVar17 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
                *(ulong *)((int)pfVar2 - uVar6) >> uVar6 * 8;
  puVar1 = &this->m_voice[uVar7].field_0x17;
  uVar5 = (uint)puVar1 & 7;
  pfVar2 = &this->m_voice[uVar7].pitch;
  uVar6 = (uint)pfVar2 & 7;
  voice._16_8_ = (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
                 uVar18 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
                 *(ulong *)((int)pfVar2 - uVar6) >> uVar6 * 8;
  puVar1 = (undefined *)((int)&this->m_voice[uVar7].pQueuedCmd + 3);
  uVar5 = (uint)puVar1 & 7;
  pbVar3 = &this->m_voice[uVar7].bIsSilent;
  uVar6 = (uint)pbVar3 & 7;
  voice._24_8_ = (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
                 in_a2 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
                 *(ulong *)(pbVar3 + -uVar6) >> uVar6 * 8;
  puVar1 = (undefined *)((int)&voice.pSampleRes + 3);
  uVar5 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar5);
  *puVar9 = *puVar9 & -1L << (uVar5 + 1) * 8 | voice._0_8_ >> (7 - uVar5) * 8;
  puVar1 = (undefined *)((int)&voice.volumeR + 3);
  uVar5 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar5);
  *puVar9 = *puVar9 & -1L << (uVar5 + 1) * 8 | voice._8_8_ >> (7 - uVar5) * 8;
  uVar5 = (uint)&voice.field_0x17 & 7;
  puVar9 = (ulong *)(&voice.field_0x17 + -uVar5);
  *puVar9 = *puVar9 & -1L << (uVar5 + 1) * 8 | voice._16_8_ >> (7 - uVar5) * 8;
  puVar1 = (undefined *)((int)&voice.pQueuedCmd + 3);
  uVar5 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar5);
  *puVar9 = *puVar9 & -1L << (uVar5 + 1) * 8 | voice._24_8_ >> (7 - uVar5) * 8;
  local_a8 = &this->m_voice[0].pSampleRes;
  if (pEVar21 == (ERSampledata *)0x0) {
    pEVar21 = local_a8[uVar7 * 8];
  }
  else {
    local_a8[uVar7 * 8] = pEVar21;
  }
  if (pEVar21 != (ERSampledata *)0x0) {
                    /* inlined from /eor/src2/engine/audiosample/e_raudiosample.h */
    pVVar8 = pEVar21->m_pHeader;
                    /* end of inlined section */
    puVar1 = (undefined *)((int)&pVVar8->ver + 3);
    uVar19 = (uint)puVar1 & 7;
    uVar5 = (uint)pVVar8 & 7;
    header._0_8_ = (*(long *)(puVar1 + -uVar19) << (7 - uVar19) * 8 |
                   in_a3 & 0xffffffffffffffffU >> (uVar19 + 1) * 8) & -1L << (8 - uVar5) * 8 |
                   *(ulong *)((int)pVVar8 - uVar5) >> uVar5 * 8;
    puVar1 = (undefined *)((int)&pVVar8->size + 3);
    uVar19 = (uint)puVar1 & 7;
    uVar5 = (uint)&pVVar8->ssa & 7;
    header._8_8_ = (*(long *)(puVar1 + -uVar19) << (7 - uVar19) * 8 |
                   in_t0 & 0xffffffffffffffffU >> (uVar19 + 1) * 8) & -1L << (8 - uVar5) * 8 |
                   *(ulong *)((int)&pVVar8->ssa - uVar5) >> uVar5 * 8;
    puVar1 = (undefined *)((int)&pVVar8->volR + 1);
    uVar19 = (uint)puVar1 & 7;
    uVar5 = (uint)&pVVar8->fs & 7;
    header._16_8_ =
         (*(long *)(puVar1 + -uVar19) << (7 - uVar19) * 8 |
         (long)(int)local_a8 & 0xffffffffffffffffU >> (uVar19 + 1) * 8) & -1L << (8 - uVar5) * 8 |
         *(ulong *)((int)&pVVar8->fs - uVar5) >> uVar5 * 8;
    puVar1 = (undefined *)((int)&pVVar8->reserved + 1);
    uVar19 = (uint)puVar1 & 7;
    uVar5 = (uint)&pVVar8->pitch & 7;
    header._24_8_ =
         (*(long *)(puVar1 + -uVar19) << (7 - uVar19) * 8 |
         voice._24_8_ & 0xffffffffffffffffU >> (uVar19 + 1) * 8) & -1L << (8 - uVar5) * 8 |
         *(ulong *)((int)&pVVar8->pitch - uVar5) >> uVar5 * 8;
    puVar1 = (undefined *)((int)&header.ver + 3);
    uVar19 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar19);
    *puVar9 = *puVar9 & -1L << (uVar19 + 1) * 8 | header._0_8_ >> (7 - uVar19) * 8;
    puVar1 = (undefined *)((int)&header.size + 3);
    uVar19 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar19);
    *puVar9 = *puVar9 & -1L << (uVar19 + 1) * 8 | header._8_8_ >> (7 - uVar19) * 8;
    puVar1 = (undefined *)((int)&header.volR + 1);
    uVar19 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar19);
    *puVar9 = *puVar9 & -1L << (uVar19 + 1) * 8 | header._16_8_ >> (7 - uVar19) * 8;
    puVar1 = (undefined *)((int)&header.reserved + 1);
    uVar19 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar19);
    *puVar9 = *puVar9 & -1L << (uVar19 + 1) * 8 | header._24_8_ >> (7 - uVar19) * 8;
    uVar19 = (uint)(pVVar8->name + 7) & 7;
    uVar5 = (uint)pVVar8->name & 7;
    header.name._0_8_ =
         (*(long *)(pVVar8->name + 7 + -uVar19) << (7 - uVar19) * 8 |
         header._0_8_ & 0xffffffffffffffffU >> (uVar19 + 1) * 8) & -1L << (8 - uVar5) * 8 |
         *(ulong *)(pVVar8->name + -uVar5) >> uVar5 * 8;
    uVar19 = (uint)(pVVar8->name + 0xf) & 7;
    uVar5 = (uint)(pVVar8->name + 8) & 7;
    header.name._8_8_ =
         (*(long *)(pVVar8->name + 0xf + -uVar19) << (7 - uVar19) * 8 |
         header._8_8_ & 0xffffffffffffffffU >> (uVar19 + 1) * 8) & -1L << (8 - uVar5) * 8 |
         *(ulong *)(pVVar8->name + 8 + -uVar5) >> uVar5 * 8;
    uVar19 = (uint)(pVVar8->filler + 7) & 7;
    uVar5 = (uint)pVVar8->filler & 7;
    header.filler._0_8_ =
         (*(long *)(pVVar8->filler + 7 + -uVar19) << (7 - uVar19) * 8 |
         header._16_8_ & 0xffffffffffffffffU >> (uVar19 + 1) * 8) & -1L << (8 - uVar5) * 8 |
         *(ulong *)(pVVar8->filler + -uVar5) >> uVar5 * 8;
    uVar19 = (uint)(pVVar8->filler + 0xf) & 7;
    uVar5 = (uint)(pVVar8->filler + 8) & 7;
    header.filler._8_8_ =
         (*(long *)(pVVar8->filler + 0xf + -uVar19) << (7 - uVar19) * 8 |
         header._24_8_ & 0xffffffffffffffffU >> (uVar19 + 1) * 8) & -1L << (8 - uVar5) * 8 |
         *(ulong *)(pVVar8->filler + 8 + -uVar5) >> uVar5 * 8;
    pcVar4 = header.name + 7;
    uVar19 = (uint)pcVar4 & 7;
    *(ulong *)(pcVar4 + -uVar19) =
         *(ulong *)(pcVar4 + -uVar19) & -1L << (uVar19 + 1) * 8 |
         header.name._0_8_ >> (7 - uVar19) * 8;
    pcVar4 = header.name + 0xf;
    uVar19 = (uint)pcVar4 & 7;
    *(ulong *)(pcVar4 + -uVar19) =
         *(ulong *)(pcVar4 + -uVar19) & -1L << (uVar19 + 1) * 8 |
         header.name._8_8_ >> (7 - uVar19) * 8;
    pcVar4 = header.filler + 7;
    uVar19 = (uint)pcVar4 & 7;
    *(ulong *)(pcVar4 + -uVar19) =
         *(ulong *)(pcVar4 + -uVar19) & -1L << (uVar19 + 1) * 8 |
         header.filler._0_8_ >> (7 - uVar19) * 8;
    pcVar4 = header.filler + 0xf;
    uVar19 = (uint)pcVar4 & 7;
    *(ulong *)(pcVar4 + -uVar19) =
         *(ulong *)(pcVar4 + -uVar19) & -1L << (uVar19 + 1) * 8 |
         header.filler._8_8_ >> (7 - uVar19) * 8;
    *(uint *)&this->m_voice[uVar7].bIsSilent = (uint)(header.ssa == 0x5000);
    if ((int)uVar7 < 0x18) {
      uVar19 = uVar7 << 1;
    }
    else {
      uVar19 = (uVar7 - 0x18) * 2 | 1;
    }
    header.volL = (short)(header._16_8_ >> 0x20);
    header.volR = (short)(header._16_8_ >> 0x30);
    iVar22 = (int)(voice.volumeL * (float)(uint)(ushort)header.volL);
    iVar23 = (int)(voice.volumeR * (float)(uint)(ushort)header.volR);
    pitch = (uint)(voice.pitch * (float)(uint)(ushort)header.pitch);
  }
  this_00 = &this->m_dataMutex;
  Release__6EMutex(this_00);
  if (pEVar21 == (ERSampledata *)0x0) {
    uVar19 = (pCmd->m_voiceDesc).mask;
  }
  else {
    this_01 = &this->m_sceMutex;
    Acquire__6EMutexUi(this_01,0xffffffff);
    sceSdRemote(1,0x8010,uVar19,iVar22);
    sceSdRemote(1,0x8010,uVar19 | 0x100,iVar23);
    sceSdRemote(1,0x8010,uVar19 | 0x200,pitch);
    Release__6EMutex(this_01);
    if (pCmd->m_pSampleRes == (ERSampledata *)0x0) {
      uVar19 = (pCmd->m_voiceDesc).mask;
    }
    else {
      Acquire__6EMutexUi(this_01,0xffffffff);
      sceSdRemote(1,0x8050,uVar19 | 0x2040,header.ssa);
      sceSdRemote(1,0x8010,uVar19 | 0x300,header.ADSR1);
      sceSdRemote(1,0x8010,uVar19 | 0x400,header.ADSR2);
      Release__6EMutex(this_01);
      uVar19 = (pCmd->m_voiceDesc).mask;
    }
  }
  if ((uVar19 & 8) != 0) {
    uVar17 = (ulong)((int)uVar7 < 0x18) ^ 1;
    uVar19 = uVar7 - 0x18;
    if (uVar17 == 0) {
      uVar19 = uVar7;
    }
    uVar19 = 1 << (uVar19 & 0x1f);
    puVar20 = &this->m_uKeyOnFlags0;
    if (uVar17 != 0) {
      puVar20 = &this->m_uKeyOnFlags1;
    }
    if (*(int *)&(pCmd->m_voiceDesc).bPlaying != 0) {
      if (pEVar21 == (ERSampledata *)0x0) {
        iVar22 = *(int *)&pCmd->m_bUnBind;
      }
      else {
        Acquire__6EMutexUi(&this->m_sceMutex,0xffffffff);
        sceSdRemote(1,0x8030,uVar17 | 0x1500,uVar19);
        Release__6EMutex(&this->m_sceMutex);
        *puVar20 = *puVar20 | uVar19;
        Start__6EClock(&this->m_clock);
        iVar22 = *(int *)&pCmd->m_bUnBind;
      }
      goto LAB_002bb750;
    }
    Acquire__6EMutexUi(&this->m_sceMutex,0xffffffff);
    sceSdRemote(1,0x8030,uVar17 | 0x1600,uVar19);
    Release__6EMutex(&this->m_sceMutex);
    *puVar20 = *puVar20 & ~uVar19;
  }
  iVar22 = *(int *)&pCmd->m_bUnBind;
LAB_002bb750:
  if (iVar22 != 0) {
    Acquire__6EMutexUi(this_00,0xffffffff);
    if (pEVar21 != (ERSampledata *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_growpool2.h */
      if (_delayedRefAllocator.m_pFreeNodeList == (SUBNODE *)0x0) {
        pSVar13 = (SUBBLOCK *)_memmanAlloc__FUiUi(100,4);
        iVar22 = 6;
        pSVar13->pNext = _delayedRefAllocator.m_pBlockList;
        pSVar14 = pSVar13 + 1;
        _delayedRefAllocator.m_pBlockList = pSVar13;
        do {
          pSVar16 = pSVar14 + 3;
          iVar22 = iVar22 + -1;
          pSVar14->pNext = pSVar16;
          pSVar14 = pSVar16;
        } while (-1 < iVar22);
        pSVar16->pNext = (SUBBLOCK *)_delayedRefAllocator.m_pFreeNodeList;
                    /* end of inlined section */
        _delayedRefAllocator.m_pFreeNodeList = (SUBNODE *)(pSVar13 + 1);
      }
      pSVar11 = _delayedRefAllocator.m_pFreeNodeList;
                    /* inlined from /eor/src2/common/datastruc/e_growpool2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_growpool2.h */
      ppSVar10 = &(_delayedRefAllocator.m_pFreeNodeList)->pNext;
      _delayedRefAllocator.m_pFreeNodeList = (_delayedRefAllocator.m_pFreeNodeList)->pNext;
      *ppSVar10 = (SUBNODE *)0x0;
      pSVar11[1].pNext = (SUBNODE *)0x0;
      pSVar11[2].pNext = (SUBNODE *)0x0;
                    /* end of inlined section */
      pSVar11->pNext = (SUBNODE *)this->m_pDelayedRefHolderList;
      this->m_pDelayedRefHolderList = (DelayedRefHolder *)pSVar11;
      pSVar11[1].pNext = (SUBNODE *)pEVar21;
      pSVar11[2].pNext = (SUBNODE *)&vtxWEIGHTS;
      local_a8[uVar7 * 8] = (ERSampledata *)0x0;
    }
    Release__6EMutex(this_00);
  }
  return;
}

EVOICE EPs2Audio::AllocVoice() {
	int i;
	int count;
	EVOICE result;
	EAutoMutex mutex;
	EMutex &mutex;
	
  ESyncObject__vtable *pEVar1;
  int iVar2;
  int iVar3;
  EVoice__168_911 *pEVar4;
  EMutex *pEVar5;
  EVoice__168_911 *pEVar6;
  int iVar7;
  EAutoMutex mutex;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
  iVar7 = 0;
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar5 = &this->m_dataMutex;
                    /* end of inlined section */
  pEVar6 = (EVoice__168_911 *)0x0;
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(pEVar5->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  iVar3 = this->m_iLastVoiceAlloc + 1;
  if (iVar3 < 0x30) {
    pEVar4 = this->m_voice + this->m_iLastVoiceAlloc + 1;
    do {
      if (*(int *)pEVar4 == 0) goto LAB_002bb90c;
      iVar3 = iVar3 + 1;
      pEVar4 = pEVar4 + 1;
      iVar7 = iVar7 + 1;
    } while (iVar3 < 0x30);
  }
  iVar3 = 0;
  if (iVar7 < 0x30) {
    pEVar4 = this->m_voice;
    iVar2 = *(int *)pEVar4;
    while (iVar2 != 0) {
      iVar3 = iVar3 + 1;
      pEVar4 = pEVar4 + 1;
      iVar7 = iVar7 + 1;
      if ((0x2f < iVar3) || (0x2f < iVar7)) goto LAB_002bb940;
      iVar2 = *(int *)pEVar4;
    }
LAB_002bb90c:
    pEVar4->volumeL = 1.0;
    *(int *)pEVar4 = 1;
    pEVar4->pitch = 1.0;
    pEVar4->volumeR = 1.0;
    this->m_iLastVoiceAlloc = iVar3;
    pEVar6 = pEVar4;
  }
LAB_002bb940:
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (pEVar5->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(pEVar5->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
                    /* end of inlined section */
  return pEVar6;
}

void EPs2Audio::FreeVoice(EVOICE voice) {
  EAudio__0_3277__vtable *pEVar1;
  
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].FreeVoice)
            ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].AllocVoice);
  *(undefined4 *)voice = 0;
  return;
}

void EPs2Audio::UnbindVoice(EVOICE _voice) {
	EVOICE voice;
	int index;
	EAudioCmd *pCmd;
	void *p;
	void *p;
	
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  EAudio__0_3277__vtable *pEVar4;
  EAudioCmd *pCmd;
  EMutex *this_00;
  EVoice__168_911 *voice;
  
  this_00 = &this->m_dataMutex;
  Acquire__6EMutexUi(this_00,0xffffffff);
  pCmd = (EAudioCmd *)_ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead;
                    /* inlined from /eor/src2/common/datastruc/e_fixedpool.h */
  if (_ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2audio.h */
    puVar1 = (undefined4 *)((int)_ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead + 4);
    _ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead =
         *_ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead;
    *puVar1 = 0;
    pCmd->m_iVoice = 0xffffffff;
    *(undefined4 *)((int)pCmd + 0x18) = 0;
    *(undefined4 *)((int)pCmd + 0x1c) = 0;
  }
                    /* end of inlined section */
  Release__6EMutex(this_00);
  if (pCmd == (EAudioCmd *)0x0) {
    pEVar4 = (this->field0_0x0).__vtable;
    while( true ) {
      (*(code *)pEVar4->ResumeMusic)
                ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar4->PauseMusic,1);
      Acquire__6EMutexUi(this_00,0xffffffff);
      pCmd = (EAudioCmd *)_ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead;
                    /* inlined from /eor/src2/common/datastruc/e_fixedpool.h */
      if (_ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
        pvVar3 = *_ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead;
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2audio.h */
        *(undefined4 *)_ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead = 0xffffffff;
        _ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead = pvVar3;
        *(undefined4 *)((int)pCmd + 4) = 0;
        *(undefined4 *)((int)pCmd + 0x18) = 0;
        *(undefined4 *)((int)pCmd + 0x1c) = 0;
      }
                    /* end of inlined section */
      Release__6EMutex(this_00);
      if (pCmd != (EAudioCmd *)0x0) break;
      pEVar4 = (this->field0_0x0).__vtable;
    }
                    /* inlined from e_audio.h */
    uVar2 = *(uint *)((int)pCmd + 4);
  }
  else {
    uVar2 = *(uint *)((int)pCmd + 4);
  }
                    /* end of inlined section */
                    /* inlined from e_audio.h */
                    /* end of inlined section */
  pCmd->m_iVoice = (int)_voice + (-0xd0 - (int)this) >> 5;
  *(undefined4 *)&pCmd->m_bUnBind = 1;
                    /* inlined from e_audio.h */
  (pCmd->m_voiceDesc).mask = uVar2 | 8;
                    /* end of inlined section */
  pCmd->m_pSampleRes = (ERSampledata *)0x0;
                    /* inlined from e_audio.h */
  *(undefined4 *)&(pCmd->m_voiceDesc).bPlaying = 0;
                    /* end of inlined section */
  _voice->pQueuedCmd = (EAudioCmd *)0x0;
  sendCommand__9EPs2AudioUiP9EAudioCmd(this,0,pCmd);
  return;
}

void EPs2Audio::BindVoice(EVOICE voice, u32 sampleResID) {
	int index;
	ERSampledata *sample;
	EAudioCmd *pCmd;
	void *p;
	void *p;
	
  undefined4 *puVar1;
  EResourceManager__vtable *pEVar2;
  void *pvVar3;
  ERSampledata *pEVar4;
  EAudio__0_3277__vtable *pEVar5;
  EMutex *this_00;
  EAudioCmd *pCmd;
  int iVar6;
  
  iVar6 = (int)voice + (-0xd0 - (int)this) >> 5;
  if (sampleResID == 0) {
    pEVar4 = (ERSampledata *)0x0;
  }
  else {
    pEVar2 = (_pAudiosampleman->field0_0x0).__vtable;
    pEVar4 = (ERSampledata *)
             (*(code *)pEVar2[2].EResourceManager)
                       ((int)&(_pAudiosampleman->field0_0x0).m_dataMutex.field0_0x0.__vtable +
                        (int)*(short *)(pEVar2 + 2),sampleResID,0);
  }
  pEVar5 = (this->field0_0x0).__vtable;
  this_00 = &this->m_dataMutex;
                    /* inlined from /eor/src2/common/datastruc/e_fixedpool.h */
                    /* end of inlined section */
  (*(code *)pEVar5[1].FreeVoice)
            ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar5[1].AllocVoice,voice);
  Acquire__6EMutexUi(this_00,0xffffffff);
  pCmd = (EAudioCmd *)_ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead;
                    /* inlined from /eor/src2/common/datastruc/e_fixedpool.h */
  if (_ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2audio.h */
    puVar1 = (undefined4 *)((int)_ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead + 4);
    _ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead =
         *_ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead;
    *puVar1 = 0;
    pCmd->m_iVoice = 0xffffffff;
    *(undefined4 *)((int)pCmd + 0x18) = 0;
    *(undefined4 *)((int)pCmd + 0x1c) = 0;
  }
                    /* end of inlined section */
  Release__6EMutex(this_00);
  if (pCmd == (EAudioCmd *)0x0) {
    pEVar5 = (this->field0_0x0).__vtable;
    while( true ) {
      (*(code *)pEVar5->ResumeMusic)
                ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar5->PauseMusic,1);
      Acquire__6EMutexUi(this_00,0xffffffff);
      pCmd = (EAudioCmd *)_ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead;
                    /* inlined from /eor/src2/common/datastruc/e_fixedpool.h */
      if (_ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
        pvVar3 = *_ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead;
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2audio.h */
        *(undefined4 *)_ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead = 0xffffffff;
        _ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead = pvVar3;
        *(undefined4 *)((int)pCmd + 4) = 0;
        *(undefined4 *)((int)pCmd + 0x18) = 0;
        *(undefined4 *)((int)pCmd + 0x1c) = 0;
      }
                    /* end of inlined section */
      Release__6EMutex(this_00);
      if (pCmd != (EAudioCmd *)0x0) break;
      pEVar5 = (this->field0_0x0).__vtable;
    }
    pCmd->m_iVoice = iVar6;
  }
  else {
    pCmd->m_iVoice = iVar6;
  }
  pCmd->m_pSampleRes = pEVar4;
  sendCommand__9EPs2AudioUiP9EAudioCmd(this,0,pCmd);
  return;
}

void EPs2Audio::GetVoiceState(EVOICE voice, EVoiceDesc &desc) {
  int iVar1;
  EAudioCmd *pEVar2;
  uint uVar3;
  
  desc->mask = 0xf;
  iVar1 = *(int *)&voice->bIsPlaying;
  *(int *)&desc->bPlaying = iVar1;
  if (iVar1 == 0) {
    Acquire__6EMutexUi(&this->m_dataMutex,0xffffffff);
    pEVar2 = voice->pQueuedCmd;
    uVar3 = 0;
    if ((pEVar2 != (EAudioCmd *)0x0) && (((pEVar2->m_voiceDesc).mask & 8) != 0)) {
      uVar3 = (uint)(*(int *)&(pEVar2->m_voiceDesc).bPlaying != 0);
    }
    *(uint *)&desc->bPlaying = uVar3;
    Release__6EMutex(&this->m_dataMutex);
  }
  desc->pitch = voice->pitch;
  desc->volumeL = voice->volumeL;
  desc->volumeR = voice->volumeR;
  return;
}

void EPs2Audio::SetVoiceState(EVOICE voice, EVoiceDesc &desc) {
	int index;
	EAudioCmd *pCmd;
	EAutoMutex mutex;
	EMutex &mutex;
	void *p;
	void *p;
	
  undefined4 *puVar1;
  undefined *puVar2;
  float *pfVar3;
  uint uVar4;
  ESyncObject__vtable *pEVar5;
  undefined4 uVar6;
  ulong *puVar7;
  void *pvVar8;
  bool bVar9;
  uint uVar10;
  EAudio__0_3277__vtable *pEVar11;
  ulong uVar12;
  ulong uVar13;
  EMutex *pEVar14;
  EAudioCmd *pEVar15;
  int iVar16;
  EAutoMutex mutex;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar14 = &this->m_dataMutex;
                    /* end of inlined section */
  iVar16 = (int)voice + (-0xd0 - (int)this) >> 5;
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar5 = (this->m_dataMutex).field0_0x0.__vtable;
  (**(code **)(pEVar5 + 1))
            ((int)&(pEVar14->field0_0x0).__vtable + (int)*(short *)&pEVar5->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  pEVar15 = voice->pQueuedCmd;
  if (pEVar15 != (EAudioCmd *)0x0) {
    if ((desc->mask & 1) == 0) {
      uVar10 = desc->mask;
    }
    else {
      (pEVar15->m_voiceDesc).mask = (pEVar15->m_voiceDesc).mask | 1;
      (pEVar15->m_voiceDesc).volumeL = desc->volumeL;
      uVar10 = desc->mask;
    }
    if ((uVar10 & 2) == 0) {
      uVar10 = desc->mask;
    }
    else {
      (pEVar15->m_voiceDesc).mask = (pEVar15->m_voiceDesc).mask | 2;
      (pEVar15->m_voiceDesc).volumeR = desc->volumeR;
      uVar10 = desc->mask;
    }
    if ((uVar10 & 4) == 0) {
      uVar10 = desc->mask;
    }
    else {
      (pEVar15->m_voiceDesc).mask = (pEVar15->m_voiceDesc).mask | 4;
      (pEVar15->m_voiceDesc).pitch = desc->pitch;
      uVar10 = desc->mask;
    }
    if ((uVar10 & 8) != 0) {
      (pEVar15->m_voiceDesc).mask = (pEVar15->m_voiceDesc).mask | 8;
      *(undefined4 *)&(pEVar15->m_voiceDesc).bPlaying = *(undefined4 *)&desc->bPlaying;
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
    }
  }
  pEVar5 = (pEVar14->field0_0x0).__vtable;
  (*(code *)pEVar5[1].Acquire)
            ((int)&(pEVar14->field0_0x0).__vtable + (int)*(short *)&pEVar5[1].ESyncObject);
                    /* end of inlined section */
  if (pEVar15 == (EAudioCmd *)0x0) {
    pEVar14 = &this->m_dataMutex;
                    /* inlined from /eor/src2/common/datastruc/e_fixedpool.h */
                    /* end of inlined section */
    Acquire__6EMutexUi(pEVar14,0xffffffff);
    pEVar15 = (EAudioCmd *)_ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead;
                    /* inlined from /eor/src2/common/datastruc/e_fixedpool.h */
    uVar13 = 0x390000;
    if (_ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2audio.h */
      puVar1 = (undefined4 *)((int)_ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead + 4);
      _ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead =
           *_ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead;
      *puVar1 = 0;
      pEVar15->m_iVoice = 0xffffffff;
      *(undefined4 *)((int)pEVar15 + 0x18) = 0;
      *(undefined4 *)((int)pEVar15 + 0x1c) = 0;
    }
                    /* end of inlined section */
    bVar9 = Release__6EMutex(pEVar14);
    if (pEVar15 == (EAudioCmd *)0x0) {
      pEVar11 = (this->field0_0x0).__vtable;
      while( true ) {
        uVar13 = (ulong)(int)pEVar11->ResumeMusic;
        (*(code *)pEVar11->ResumeMusic)
                  ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar11->PauseMusic,1);
        Acquire__6EMutexUi(pEVar14,0xffffffff);
        pEVar15 = (EAudioCmd *)_ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead;
                    /* inlined from /eor/src2/common/datastruc/e_fixedpool.h */
        if (_ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
          pvVar8 = *_ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead;
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2audio.h */
          *(undefined4 *)_ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead = 0xffffffff;
          _ps2Audio.m_cmdAllocPool.field0_0x0.m_pFreeObjHead = pvVar8;
          *(undefined4 *)((int)pEVar15 + 4) = 0;
          *(undefined4 *)((int)pEVar15 + 0x18) = 0;
          *(undefined4 *)((int)pEVar15 + 0x1c) = 0;
        }
                    /* end of inlined section */
        bVar9 = Release__6EMutex(pEVar14);
        if (pEVar15 != (EAudioCmd *)0x0) break;
        pEVar11 = (this->field0_0x0).__vtable;
      }
      pEVar15->m_iVoice = iVar16;
    }
    else {
      pEVar15->m_iVoice = iVar16;
    }
    puVar2 = (undefined *)((int)&desc->volumeL + 3);
    uVar10 = (uint)puVar2 & 7;
    uVar4 = (uint)desc & 7;
    uVar12 = (*(long *)(puVar2 + -uVar10) << (7 - uVar10) * 8 |
             (long)bVar9 & 0xffffffffffffffffU >> (uVar10 + 1) * 8) & -1L << (8 - uVar4) * 8 |
             *(ulong *)((int)desc - uVar4) >> uVar4 * 8;
    puVar2 = (undefined *)((int)&desc->pitch + 3);
    uVar10 = (uint)puVar2 & 7;
    uVar4 = (uint)&desc->volumeR & 7;
    uVar13 = (*(long *)(puVar2 + -uVar10) << (7 - uVar10) * 8 |
             uVar13 & 0xffffffffffffffffU >> (uVar10 + 1) * 8) & -1L << (8 - uVar4) * 8 |
             *(ulong *)((int)&desc->volumeR - uVar4) >> uVar4 * 8;
    uVar6 = *(undefined4 *)&desc->bPlaying;
    puVar2 = (undefined *)((int)&(pEVar15->m_voiceDesc).volumeL + 3);
    uVar10 = (uint)puVar2 & 7;
    puVar7 = (ulong *)(puVar2 + -uVar10);
    *puVar7 = *puVar7 & -1L << (uVar10 + 1) * 8 | uVar12 >> (7 - uVar10) * 8;
    uVar10 = (uint)&pEVar15->m_voiceDesc & 7;
    puVar7 = (ulong *)((int)&pEVar15->m_voiceDesc - uVar10);
    *puVar7 = uVar12 << uVar10 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
    puVar2 = (undefined *)((int)&(pEVar15->m_voiceDesc).pitch + 3);
    uVar10 = (uint)puVar2 & 7;
    puVar7 = (ulong *)(puVar2 + -uVar10);
    *puVar7 = *puVar7 & -1L << (uVar10 + 1) * 8 | uVar13 >> (7 - uVar10) * 8;
    pfVar3 = &(pEVar15->m_voiceDesc).volumeR;
    uVar10 = (uint)pfVar3 & 7;
    puVar7 = (ulong *)((int)pfVar3 - uVar10);
    *puVar7 = uVar13 << uVar10 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
    *(undefined4 *)&(pEVar15->m_voiceDesc).bPlaying = uVar6;
    pEVar15->m_pSampleRes = (ERSampledata *)0x0;
    voice->pQueuedCmd = pEVar15;
    sendCommand__9EPs2AudioUiP9EAudioCmd(this,0,pEVar15);
  }
  return;
}

void EPs2Audio::GetIOPBuffer(void *&pAddress, u32 &uBufferSize) {
  *pAddress = this->m_pIOPBuffer;
  *uBufferSize = 0xb800;
  return;
}

int EPs2Audio::GetWritableHalf() {
	int bSecondHalf;
	
  int iVar1;
  
  Acquire__6EMutexUi(&this->m_sceMutex,0xffffffff);
  iVar1 = sceSdRemote(1,0x8100,0);
  Release__6EMutex(&this->m_sceMutex);
  return iVar1 >> 0x18 & 1U ^ 1;
}

void EPs2Audio::ClearIOPHalf() {
	EFSClearMem desc;
	
  int iVar1;
  EFSClearMem desc;
  
  desc.size = 0xc;
  iVar1 = GetWritableHalf__9EPs2Audio(this);
  if (iVar1 == 0) {
    desc.addr = this->m_pIOPBuffer;
  }
  else {
    desc.addr = this->m_pIOPBuffer + 0x5c00;
  }
  desc.numBytes = 0x5c00;
  ClearIOPMemory__16EPs2IOPInterfaceRC11EFSClearMem(&_ps2IOPInterface,&desc);
  return;
}

void EPs2Audio::EnterMovieMode() {
  EAudio__0_3277__vtable *pEVar1;
  
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1->BindVoice)
            ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1->FreeVoice);
  if ((this->m_uMixFlags0 & 0xc0) != 0xc0) {
    this->m_uMixFlags0 = this->m_uMixFlags0 | 0xc0;
    Acquire__6EMutexUi(&this->m_sceMutex,0xffffffff);
    sceSdRemote(1,0x8010,0x800,this->m_uMixFlags0);
    Release__6EMutex(&this->m_sceMutex);
  }
  *(undefined4 *)&this->m_bMovieMode = 1;
  return;
}

void EPs2Audio::ExitMovieMode() {
	EAutoMutex fmutex;
	EMutex &mutex;
	
  ESyncObject__vtable *pEVar1;
  EMutex *pEVar2;
  EAutoMutex fmutex;
  
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (this->m_musicMutex).field0_0x0.__vtable;
  pEVar2 = &this->m_musicMutex;
  (**(code **)(pEVar1 + 1))
            ((int)&(pEVar2->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,
             0xffffffffffffffff);
                    /* end of inlined section */
  *(undefined4 *)&this->m_bMovieMode = 0;
                    /* inlined from /eor/src2/common/sync/e_automutex.h */
  pEVar1 = (pEVar2->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(pEVar2->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
  return;
}

void EPs2Audio::SetMusicMode(MusicMode mode) {
	EFSIOQuery desc;
	
  EFSIOQuery desc;
  
                    /* end of inlined section */
  if (mode != this->m_musicMode) {
    this->m_musicMode = mode;
    desc.state._1_1_ = mode == kMusic24khtz;
    desc.size = 0x10;
    desc.mask = 3;
    desc.flags = 0;
    QueryIOPState__16EPs2IOPInterfaceR10EFSIOQuery(&_ps2IOPInterface,&desc);
  }
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
	SUBBLOCK *node;
	SUBBLOCK *node;
	
  SUBBLOCK *pSVar1;
  SUBBLOCK *pSVar2;
  
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___9EPs2Audio(&_ps2Audio,2);
                    /* inlined from /eor/src2/common/datastruc/e_growpool2.h */
      if (_delayedRefAllocator.m_pBlockList != (SUBBLOCK *)0x0) {
        pSVar2 = (_delayedRefAllocator.m_pBlockList)->pNext;
        while (pSVar1 = _delayedRefAllocator.m_pBlockList,
              _delayedRefAllocator.m_pBlockList = pSVar2, _memmanFree__FPv(pSVar1),
              _delayedRefAllocator.m_pBlockList != (SUBBLOCK *)0x0) {
          pSVar2 = (_delayedRefAllocator.m_pBlockList)->pNext;
        }
      }
      _delayedRefAllocator.m_pFreeNodeList = (SUBNODE *)0x0;
      if (_eventAllocator.m_pBlockList == (SUBBLOCK *)0x0) {
        _eventAllocator.m_pFreeNodeList = (SUBNODE *)0x0;
      }
      else {
        pSVar2 = (_eventAllocator.m_pBlockList)->pNext;
        while (pSVar1 = _eventAllocator.m_pBlockList, _eventAllocator.m_pBlockList = pSVar2,
              _memmanFree__FPv(pSVar1), _eventAllocator.m_pBlockList != (SUBBLOCK *)0x0) {
          pSVar2 = (_eventAllocator.m_pBlockList)->pNext;
        }
        _eventAllocator.m_pFreeNodeList = (SUBNODE *)0x0;
      }
    }
    else {
                    /* inlined from /eor/src2/common/datastruc/e_growpool2.h */
      _eventAllocator.m_pFreeNodeList = (SUBNODE *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_growpool2.h */
      _delayedRefAllocator.m_pFreeNodeList = (SUBNODE *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_growpool2.h */
      _eventAllocator.m_pBlockList = (SUBBLOCK *)0x0;
                    /* end of inlined section */
      _delayedRefAllocator.m_pBlockList = (SUBBLOCK *)0x0;
      __9EPs2Audio(&_ps2Audio);
    }
  }
  return;
}

EAudio* EAudio::EAudio() {
  this->__vtable = (EAudio__0_3277__vtable *)_vt_6EAudio;
  return this;
}

bool EPs2Audio::IsWaitingOnPreload() {
  return SUB41(*(undefined4 *)&this->m_bMusicPreloadWait,0);
}

void DelayedRefHolder::operator delete(void *ptr) {
	DelayedRefHolder *_node;
	
  if (ptr != (void *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_growpool2.h */
    *(SUBNODE **)ptr = _delayedRefAllocator.m_pFreeNodeList;
    _delayedRefAllocator.m_pFreeNodeList = (SUBNODE *)ptr;
  }
                    /* end of inlined section */
  return;
}

void DelayedRefHolder::reset() {
  if (this->pSample != (ERSampledata *)0x0) {
    DelRef__9EResource(&this->pSample->field0_0x0);
    this->pSample = (ERSampledata *)0x0;
  }
  return;
}

void global constructors keyed to _ps2Audio() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _ps2Audio() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

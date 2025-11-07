// STATUS: NOT STARTED

#include "e_ps2textureloader.h"

EPs2TextureLoader _ps2texload = {
	/* base class 0 = */ {
		/* .m_threadId = */ 0,
		/* .m_pStack = */ NULL,
		/* .m_stackSize = */ 0,
		/* .m_stackAutoAllocated = */ false,
		/* .m_szName = */ NULL,
		/* .m_pLastThread = */ NULL,
		/* .m_pNextThread = */ NULL,
		/* .$vf897 = */ NULL
	},
	/* .m_commandQueue = */ {
		/* .m_inSema = */ {
			/* base class 0 = */ {
				/* .$vf1686 = */ NULL
			},
			/* .m_id = */ 0,
			/* .m_maxCount = */ 0,
			/* .m_waits = */ 0,
			/* .m_count = */ 0
		},
		/* .m_outSema = */ {
			/* base class 0 = */ {
				/* .$vf1686 = */ NULL
			},
			/* .m_id = */ 0,
			/* .m_maxCount = */ 0,
			/* .m_waits = */ 0,
			/* .m_count = */ 0
		},
		/* .m_cIn = */ 0,
		/* .m_cOut = */ 0,
		/* .m_size = */ 0,
		/* .m_pMsgs = */ NULL,
		/* .m_autoAllocated = */ false
	},
	/* .m_texloadClock = */ {
		/* .m_pData = */ NULL
	},
	/* .m_totalTime = */ 0.f
};

float _texloadtime = 0.0166666675f;

__vtbl_ptr_type EPs2TextureLoader virtual table[4] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2TextureLoader::~EPs2TextureLoader,
		/* .__delta2 = */ -13104
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2TextureLoader::Main,
		/* .__delta2 = */ -13624
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EPs2TextureLoader* EPs2TextureLoader::EPs2TextureLoader() {
  __7EThread(&this->field0_0x0);
  (this->field0_0x0).__vtable = (EThread__vtable *)_vt_17EPs2TextureLoader;
  __9EMsgQueue(&this->m_commandQueue);
  __6EClock(&this->m_texloadClock);
  this->m_totalTime = 0.0;
  return this;
}

bool EPs2TextureLoader::Init() {
	EThread *this;
	
  bool bVar1;
  bool bVar2;
  
  bVar1 = Create__9EMsgQueueiPUi(&this->m_commandQueue,0x400,(uint *)0x0);
  if (bVar1) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_thread.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_thread.h */
    (this->field0_0x0).m_szName = "Texture Loader";
                    /* end of inlined section */
    bVar2 = Create__7EThreadiiPv(&this->field0_0x0,0x5e,0x4000,(void *)0x0);
    bVar1 = false;
    if (bVar2) {
      Start__7EThread(&this->field0_0x0);
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

void EPs2TextureLoader::Main() {
	u32 msg;
	
  uint pCmd;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  uint msg;
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
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  do {
    while (Receive__9EMsgQueuePUib(&this->m_commandQueue,&msg,true), pCmd = msg, msg != 0) {
      LoadTextures__17EPs2TextureLoaderP3EDL(this,*(EDL **)(msg + 4));
      TextureLoadsComplete__13EPs2SchedulerP13ESchedCommand(&_ps2sched,(ESchedCommand *)pCmd);
    }
    _texloadtime = this->m_totalTime;
    this->m_totalTime = 0.0;
  } while( true );
}

void EPs2TextureLoader::StartLoadTimer() {
  Start__6EClock(&this->m_texloadClock);
  return;
}

void EPs2TextureLoader::StopLoadTimer() {
  float fVar1;
  
  fVar1 = GetSec__6EClock(&this->m_texloadClock);
  this->m_totalTime = this->m_totalTime + fVar1;
  return;
}

void EPs2TextureLoader::Queue(ESchedCommand *pCmd) {
  Send__9EMsgQueueUib(&this->m_commandQueue,(uint)pCmd,true);
  return;
}

void EPs2TextureLoader::LoadTextures(EDL *pDL) {
	NLIterator textureRefIterator;
	NLIterator texturePassIterator;
	NLIterator dlRefIterator;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  ENodeListNode *pEVar1;
  ETexture *pTexture;
  uint renderPass;
  ENodeListNode *pEVar2;
  ENodeListNode *pEVar3;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (pDL->m_textureRefs).field0_0x0.m_l.m_pHead;
  pEVar3 = (pDL->m_dlRefs).field0_0x0.m_l.m_pHead;
  pEVar1 = (pDL->m_texturePasses).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  while (pEVar2 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pTexture = (ETexture *)pEVar2->data;
                    /* end of inlined section */
    renderPass = pEVar1->data;
    if (pTexture == (ETexture *)0x0) {
                    /* end of inlined section */
      LoadTextures__17EPs2TextureLoaderP3EDL(this,(EDL *)pEVar3->data);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar3 = (ENodeListNode *)(&pEVar3->data)[2];
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar2 = (ENodeListNode *)(&pEVar2->data)[2];
    }
    else {
      (*(code *)pTexture->__vtable->UpdateBegin)
                ((int)&(pTexture->m_textureDef).pfnAllocAlign +
                 (int)*(short *)&pTexture->__vtable->Invalidate);
      TextureLoaded__12EPs2RendererP8ETexturei(&_ps2rend,pTexture,renderPass);
      pEVar2 = (ENodeListNode *)(&pEVar2->data)[2];
    }
                    /* end of inlined section */
    pEVar1 = pEVar1->pNext;
  }
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___6EClock(&_ps2texload.m_texloadClock,2);
      ___9EMsgQueue(&_ps2texload.m_commandQueue,2);
      ___7EThread(&_ps2texload.field0_0x0,2);
    }
    else {
      __17EPs2TextureLoader(&_ps2texload);
    }
  }
  return;
}

void EPs2TextureLoader::~EPs2TextureLoader(int __in_chrg) {
  ___6EClock(&this->m_texloadClock,2);
  ___9EMsgQueue(&this->m_commandQueue,2);
  ___7EThread(&this->field0_0x0,__in_chrg);
  return;
}

void EPs2TextureLoader::FrameComplete() {
  Queue__17EPs2TextureLoaderP13ESchedCommand(this,(ESchedCommand *)0x0);
  return;
}

void global constructors keyed to _ps2texload() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _ps2texload() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

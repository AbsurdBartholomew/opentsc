// STATUS: NOT STARTED

#include "freshness.h"

struct TFixedPool<cFreshCellPlayer,364> : EFixedPool {
protected:
	unsigned int m_buffer[2912];
	
public:
	TFixedPool<cFreshCellPlayer,364>& operator=();
	TFixedPool();
	TFixedPool(TFixedPool<cFreshCellPlayer,364>*, int, void);
	TFixedPool();
	cFreshCellPlayer* Alloc();
	void Free();
protected:
	void Free();
};

struct simple_alloc<__list_node<cFreshPlayer *>,__malloc_alloc_template<0> > {
	simple_alloc<__list_node<cFreshPlayer *>,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static __list_node<cFreshPlayer *>* allocate(/* parameters unknown */);
	static __list_node<cFreshPlayer *>* allocate(/* parameters unknown */);
	static __list_node<cFreshPlayer *>* allocate(/* parameters unknown */);
	static __list_node<cFreshPlayer *>* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct __list_node<cFreshPlayer *> {
	void *next;
	void *prev;
	cFreshPlayer *data;
};

struct __list_iterator<cFreshPlayer *> {
	__list_node<cFreshPlayer *> *node;
	
	__list_iterator<cFreshPlayer *>& operator=();
	__list_iterator();
	__list_iterator();
	__list_iterator();
	bool operator==();
	bool operator!=();
	cFreshPlayer*& operator*();
	__list_iterator<cFreshPlayer *>& operator++();
	__list_iterator<cFreshPlayer *> operator++();
	__list_iterator<cFreshPlayer *>& operator--();
	__list_iterator<cFreshPlayer *> operator--();
};

cFreshCellPlayer *g_pReadAheadCell = NULL;

static int alCellProbMultiplier[21] = {
	/* [0] = */ 0,
	/* [1] = */ 600,
	/* [2] = */ 1500,
	/* [3] = */ 3000,
	/* [4] = */ 7500,
	/* [5] = */ 12000,
	/* [6] = */ 15000,
	/* [7] = */ 18000,
	/* [8] = */ 21000,
	/* [9] = */ 25500,
	/* [10] = */ 32767,
	/* [11] = */ 36000,
	/* [12] = */ 45000,
	/* [13] = */ 58000,
	/* [14] = */ 67500,
	/* [15] = */ 90000,
	/* [16] = */ 120000,
	/* [17] = */ 210000,
	/* [18] = */ 300000,
	/* [19] = */ 40000000,
	/* [20] = */ 40000000
};

static TFixedPool<cFreshCellPlayer,364> *cFreshCellPlayerAllocator;
static int cFreshCellPlayerAllocatorUsage;

void* cFreshCellPlayer::operator new(unsigned int size) {
	TFixedPool<cFreshCellPlayer,364> *this;
	EFixedPool *this;
	void *p;
	
  void **ppvVar1;
  TFixedPool_cFreshCellPlayer_364_ *this;
  
  cFreshCellPlayerAllocatorUsage = cFreshCellPlayerAllocatorUsage + 1;
  if (cFreshCellPlayerAllocatorUsage == 1) {
    this = (TFixedPool_cFreshCellPlayer_364_ *)__builtin_new(0x2d90);
                    /* inlined from /eor/src2/common/datastruc/e_fixedpool.h */
    __10EFixedPool((EFixedPool *)this);
    Init__10EFixedPooliiPv((EFixedPool *)this,0x20,0x16c,this->m_buffer);
                    /* end of inlined section */
    cFreshCellPlayerAllocator = this;
  }
                    /* inlined from /eor/src2/common/datastruc/e_fixedpool.h */
  ppvVar1 = (void **)(cFreshCellPlayerAllocator->field0_0x0).m_pFreeObjHead;
  if (ppvVar1 != (void **)0x0) {
    (cFreshCellPlayerAllocator->field0_0x0).m_pFreeObjHead = *ppvVar1;
  }
                    /* end of inlined section */
  return ppvVar1;
}

void cFreshCellPlayer::operator delete(void *ptr) {
	TFixedPool<cFreshCellPlayer,364> *this;
	cFreshCellPlayer *p;
	void *p;
	EFixedPool *this;
	
  TFixedPool_cFreshCellPlayer_364_ *pTVar1;
  
  pTVar1 = cFreshCellPlayerAllocator;
                    /* inlined from /eor/src2/common/datastruc/e_fixedpool.h */
  if (ptr != (void *)0x0) {
    *(void **)ptr = (cFreshCellPlayerAllocator->field0_0x0).m_pFreeObjHead;
    (pTVar1->field0_0x0).m_pFreeObjHead = ptr;
  }
                    /* end of inlined section */
  cFreshCellPlayerAllocatorUsage = cFreshCellPlayerAllocatorUsage + -1;
  if (cFreshCellPlayerAllocatorUsage == 0) {
    if (cFreshCellPlayerAllocator != (TFixedPool_cFreshCellPlayer_364_ *)0x0) {
      ___10EFixedPool(&cFreshCellPlayerAllocator->field0_0x0,3);
    }
    cFreshCellPlayerAllocator = (TFixedPool_cFreshCellPlayer_364_ *)0x0;
  }
  return;
}

bool cFreshPlayer_Global_Lock_ReadAhead(cFreshCellPlayer *pCell) {
  if (g_pReadAheadCell == (cFreshCellPlayer *)0x0) {
    g_pReadAheadCell = pCell;
    return true;
  }
  return false;
}

bool cFreshPlayer_Global_Unlock_ReadAhead(cFreshCellPlayer *pCell) {
  g_pReadAheadCell = (cFreshCellPlayer *)0x0;
  return true;
}

cFreshCellPlayer* cFreshPlayer_Global_Get_ReadAheadCell() {
  return g_pReadAheadCell;
}

cFreshTimer* cFreshTimer::cFreshTimer() {
	void *result;
	
  __list_node_cFreshPlayer___ *p_Var1;
  
  this->m_lPauseRefs = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
                    /* end of inlined section */
  this->m_lStartRefs = 0;
  this->m_lTimeTotal = 0;
  this->m_lTimeFast = 0;
  this->m_lTimeSetFast = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
  (this->m_FreshPlayerList).length = 0;
  p_Var1 = (__list_node_cFreshPlayer___ *)malloc(0xc);
  if (p_Var1 == (__list_node_cFreshPlayer___ *)0x0) {
    p_Var1 = (__list_node_cFreshPlayer___ *)oom_malloc__t23__malloc_alloc_template1i0Ui(0xc);
    (this->m_FreshPlayerList).node = p_Var1;
  }
  else {
    (this->m_FreshPlayerList).node = p_Var1;
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
  p_Var1->next = p_Var1;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
  p_Var1 = (this->m_FreshPlayerList).node;
  p_Var1->prev = p_Var1;
                    /* end of inlined section */
  *(undefined4 *)&this->m_bUpdateEnabled = 0;
  return this;
}

void cFreshTimer::~cFreshTimer(int __in_chrg) {
	void *pAddress;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
  clear__t4list2ZP12cFreshPlayerZt23__malloc_alloc_template1i0(&this->m_FreshPlayerList);
  free((this->m_FreshPlayerList).node);
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void cFreshTimer::Shutdown() {
  __list_iterator_cFreshPlayer___ last;
  
  this->m_lStartRefs = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
  last.node = (this->m_FreshPlayerList).node;
                    /* end of inlined section */
  erase__t4list2ZP12cFreshPlayerZt23__malloc_alloc_template1i0Gt15__list_iterator1ZP12cFreshPlayerT1
            (&this->m_FreshPlayerList,(__list_node_cFreshPlayer___ *)(last.node)->next,last);
  return;
}

void cFreshTimer::Start(cFreshPlayer *pFreshPlayer) {
	list<cFreshPlayer *,__malloc_alloc_template<0> > *this;
	list<cFreshPlayer *,__malloc_alloc_template<0> > *this;
	__list_node<cFreshPlayer *> *x;
	list<cFreshPlayer *,__malloc_alloc_template<0> > *this;
	list<cFreshPlayer *,__malloc_alloc_template<0> > *this;
	void *result;
	
  __list_node_cFreshPlayer___ *p_Var1;
  __list_node_cFreshPlayer___ **pp_Var2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
  p_Var1 = (this->m_FreshPlayerList).node;
  pp_Var2 = (__list_node_cFreshPlayer___ **)malloc(0xc);
  if (pp_Var2 == (__list_node_cFreshPlayer___ **)0x0) {
    pp_Var2 = (__list_node_cFreshPlayer___ **)oom_malloc__t23__malloc_alloc_template1i0Ui(0xc);
    pp_Var2[2] = (__list_node_cFreshPlayer___ *)pFreshPlayer;
  }
  else {
    pp_Var2[2] = (__list_node_cFreshPlayer___ *)pFreshPlayer;
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
  *pp_Var2 = p_Var1;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
  pp_Var2[1] = (__list_node_cFreshPlayer___ *)p_Var1->prev;
  *(__list_node_cFreshPlayer___ ***)p_Var1->prev = pp_Var2;
  p_Var1->prev = pp_Var2;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
  (this->m_FreshPlayerList).length = (this->m_FreshPlayerList).length + 1;
                    /* end of inlined section */
  *(undefined4 *)&this->m_bUpdateEnabled = 1;
  this->m_lStartRefs = this->m_lStartRefs + 1;
  return;
}

void cFreshTimer::Stop(cFreshPlayer *pFreshPlayer) {
	list<cFreshPlayer *,__malloc_alloc_template<0> > *this;
	
  __list_iterator_cFreshPlayer___ _Var1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  cFreshPlayer *local_40 [4];
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
  *(undefined4 *)&this->m_bUpdateEnabled = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
  _Var1.node = (this->m_FreshPlayerList).node;
                    /* end of inlined section */
  local_40[0] = pFreshPlayer;
  _Var1 = find__H2Zt15__list_iterator1ZP12cFreshPlayerZP12cFreshPlayer_X01X01RCX11_X01
                    ((__list_node_cFreshPlayer___ *)(_Var1.node)->next,_Var1,local_40);
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
  *(void **)(_Var1.node)->prev = (_Var1.node)->next;
  *(void **)((int)(_Var1.node)->next + 4) = (_Var1.node)->prev;
  free(_Var1.node);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
  (this->m_FreshPlayerList).length = (this->m_FreshPlayerList).length - 1;
                    /* end of inlined section */
  this->m_lStartRefs = this->m_lStartRefs + -1;
  return;
}

void cFreshTimer::Pause() {
  int iVar1;
  
  iVar1 = this->m_lPauseRefs + 1;
  this->m_lPauseRefs = iVar1;
  if (iVar1 == 1) {
    *(undefined4 *)&this->m_bUpdateEnabled = 0;
  }
  return;
}

void cFreshTimer::Unpause() {
  int iVar1;
  
  iVar1 = this->m_lPauseRefs + -1;
  this->m_lPauseRefs = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)&this->m_bUpdateEnabled = 1;
  }
  return;
}

void cFreshTimer::Update() {
	__list_iterator<cFreshPlayer *> it;
	
  __list_node_cFreshPlayer___ *p_Var1;
  __list_node_cFreshPlayer___ *p_Var2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
                    /* end of inlined section */
  if ((*(int *)&this->m_bUpdateEnabled != 0) &&
     (p_Var1 = (this->m_FreshPlayerList).node, p_Var2 = (__list_node_cFreshPlayer___ *)p_Var1->next,
     p_Var2 != p_Var1)) {
    do {
                    /* end of inlined section */
      Update__12cFreshPlayer(p_Var2->data);
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
      p_Var2 = (__list_node_cFreshPlayer___ *)p_Var2->next;
                    /* end of inlined section */
    } while (p_Var2 != (this->m_FreshPlayerList).node);
  }
  return;
}

cFreshPlayer* cFreshPlayer::cFreshPlayer() {
  this->m_lVol = 0x400;
  this->m_lNumCellsInSelectionArea = 0xf;
  this->m_lMaxCellsPlaying = 4;
  this->m_lSelectionAreaMaxYDistance = 3;
  this->m_lVolumeAsyncFadeStepValue = 100;
  *(undefined4 *)this = 0;
  this->m_lRefCount = 0;
  this->m_pFreshTimer = (cFreshTimer *)0x0;
  this->m_lEffectsLevel = 0;
  this->m_pScore = (cFreshScore *)0x0;
  *(undefined4 *)&this->m_bIsPlaying = 0;
  *(undefined4 *)&this->m_bIsManual = 0;
  this->m_lTempo = 0;
  this->m_lMsecLastSelectionAreaChange = 0;
  this->m_lBeatNum = 0;
  this->m_lStartBeatNum = 0;
  this->m_lMSecSinceLastBeat = 0;
  this->m_lMinCellsPlaying = 0;
  this->m_lLastCellKilledRow = 0;
  this->m_lLastCellKilledCol = 0;
  this->m_lLastCellStartedRow = 0;
  this->m_lLastCellStartedCol = 0;
  this->m_lStressLevel = 0;
  this->lTimeBase = 0;
  *(undefined4 *)&this->m_bIsPaused = 0;
  *(undefined4 *)&this->m_bIsFading = 0;
  this->m_lVolumeAsyncFadeEndingVolume = 0;
  this->m_lNextBeatNum = 1;
  this->m_lYPos = 1;
  this->m_lXPos = 1;
  this->m_lZoom = 1;
  this->m_lSelectionAreaMaxXDistance = 3;
  this->m_lPlayPercent = 100;
  memset(this->m_apCell,0,0x5b0);
  return this;
}

void cFreshPlayer::~cFreshPlayer(int __in_chrg) {
	void *pAddress;
	
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

bool cFreshPlayer::QueryInterface(Sint32 riid, void **ppvObject) {
  if (riid == -0x1dc0fb86) {
    *ppvObject = this;
    AddRef__12cFreshPlayer(this);
  }
  return riid == -0x1dc0fb86;
}

void cFreshPlayer::SetPause(bool bPause) {
	int i;
	int j;
	
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  *(int *)&this->m_bIsPaused = (int)bPause;
  if (bPause) {
    iVar5 = 0;
    iVar2 = 0;
    do {
      iVar5 = iVar5 + 1;
      iVar4 = 0xd;
      piVar3 = (int *)((int)this->m_apCell + iVar2);
      do {
        piVar1 = *(int **)(*piVar3 + 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x3c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x38));
        }
        iVar4 = iVar4 + -1;
        piVar3 = piVar3 + 1;
      } while (-1 < iVar4);
      iVar2 = iVar5 * 0x38;
    } while (iVar5 < 0x1a);
  }
  return;
}

Uint32 cFreshPlayer::AddRef() {
  uint uVar1;
  
  uVar1 = this->m_lRefCount + 1;
  this->m_lRefCount = uVar1;
  return uVar1;
}

Uint32 cFreshPlayer::Release() {
  uint uVar1;
  
  uVar1 = this->m_lRefCount - 1;
  if (this->m_lRefCount == 1) {
    uVar1 = 0;
    if (this != (cFreshPlayer *)0x0) {
      ___12cFreshPlayer(this,3);
      uVar1 = 0;
    }
  }
  else {
    this->m_lRefCount = uVar1;
  }
  return uVar1;
}

bool cFreshPlayer::Init(cFreshTimer *pFreshTimer) {
  bool bVar1;
  cFreshScore *pcVar2;
  
  pcVar2 = (cFreshScore *)__builtin_new(0x40);
  pcVar2 = __11cFreshScore(pcVar2);
  this->m_pScore = pcVar2;
  LoadScore__11cFreshScore(pcVar2);
  bVar1 = init__12cFreshPlayerP11cFreshScoreP11cFreshTimer(this,this->m_pScore,pFreshTimer);
  return bVar1;
}

bool cFreshPlayer::init(cFreshScore *pScore, cFreshTimer *pFreshTimer) {
	Sint32 lRow;
	Sint32 lColumn;
	int i;
	int j;
	
  cFreshScore *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  cFreshCellPlayer *pcVar5;
  cFreshCellPlayer **ppcVar6;
  int iVar7;
  int iVar8;
  
  this->m_lLastCellStartedCol = -1;
  this->m_pScore = pScore;
  this->m_lLastCellKilledRow = -1;
  this->m_lLastCellKilledCol = -1;
  this->m_lLastCellStartedRow = -1;
  this->m_pFreshTimer = pFreshTimer;
  this->m_lVol = pScore->m_lVol;
  uVar3 = timeGetTime__Fv();
  this->lTimeBase = uVar3;
  this->m_lYPos = 1;
  this->m_lXPos = 1;
  pcVar1 = this->m_pScore;
  this->m_lMinCellsPlaying = pcVar1->m_lMinCellsPlaying;
  this->m_lMaxCellsPlaying = pcVar1->m_lMaxCellsPlaying;
  this->m_lSelectionAreaMaxXDistance = pcVar1->m_lSelectionAreaMaxXDistance;
  this->m_lSelectionAreaMaxYDistance = pcVar1->m_lSelectionAreaMaxYDistance;
  if (*(int *)this == 0) {
    iVar8 = 0;
    iVar4 = 0;
    do {
      iVar8 = iVar8 + 1;
      iVar7 = 0xd;
      ppcVar6 = (cFreshCellPlayer **)((int)this->m_apCell + iVar4);
      do {
        iVar7 = iVar7 + -1;
        pcVar5 = (cFreshCellPlayer *)__nw__16cFreshCellPlayerUi(0x20);
        pcVar5 = __16cFreshCellPlayerP12cFreshPlayer(pcVar5,this);
        *ppcVar6 = pcVar5;
        ppcVar6 = ppcVar6 + 1;
      } while (-1 < iVar7);
      iVar4 = iVar8 * 0x38;
    } while (iVar8 < 0x1a);
  }
  this->m_lNumCellsInSelectionArea = 0;
  iVar4 = 0;
  do {
    iVar8 = 0;
    iVar7 = iVar4 + 1;
    do {
      bVar2 = CellIsInSelectionArea__12cFreshPlayerii(this,iVar4,iVar8);
      iVar8 = iVar8 + 1;
      if (bVar2) {
        this->m_lNumCellsInSelectionArea = this->m_lNumCellsInSelectionArea + 1;
      }
    } while (iVar8 < 0xe);
    iVar4 = iVar7;
  } while (iVar7 < 0x1a);
  *(undefined4 *)this = 1;
  return true;
}

bool cFreshPlayer::Shutdown() {
	Sint32 lRow;
	Sint32 lColumn;
	Sint32 i;
	Sint32 j;
	
  int iVar1;
  cFreshCellPlayer **ppcVar2;
  void **ppvVar3;
  int iVar4;
  int iVar5;
  
  StopFade__12cFreshPlayer(this);
  iVar5 = 0;
  iVar1 = 0;
  do {
    iVar5 = iVar5 + 1;
    iVar4 = 0xd;
    ppcVar2 = (cFreshCellPlayer **)((int)this->m_apCell + iVar1);
    do {
      iVar4 = iVar4 + -1;
      if (*ppcVar2 != (cFreshCellPlayer *)0x0) {
        Kill__16cFreshCellPlayer(*ppcVar2);
      }
      ppcVar2 = ppcVar2 + 1;
    } while (-1 < iVar4);
    iVar1 = iVar5 * 0x38;
  } while (iVar5 < 0x1a);
  if (*(int *)this == 0) {
    *(undefined4 *)this = 0;
  }
  else {
    Stop__12cFreshPlayer(this);
    if (this->m_pScore != (cFreshScore *)0x0) {
      ___11cFreshScore(this->m_pScore,3);
      this->m_pScore = (cFreshScore *)0x0;
    }
    iVar5 = 0;
    iVar1 = 0;
    do {
      iVar5 = iVar5 + 1;
      iVar4 = 0xd;
      ppvVar3 = (void **)((int)this->m_apCell + iVar1);
      do {
        iVar4 = iVar4 + -1;
        if (*ppvVar3 != (void *)0x0) {
          __dl__16cFreshCellPlayerPv(*ppvVar3);
          *ppvVar3 = (void *)0x0;
        }
        ppvVar3 = ppvVar3 + 1;
      } while (-1 < iVar4);
      iVar1 = iVar5 * 0x38;
    } while (iVar5 < 0x1a);
    *(undefined4 *)this = 0;
  }
  *(undefined4 *)&this->m_bIsPlaying = 0;
  return true;
}

bool cFreshPlayer::Play(Sint32 lVol) {
  bool bVar1;
  
  SetVolume__12cFreshPlayeri(this,lVol);
  bVar1 = Play__12cFreshPlayer(this);
  return bVar1;
}

bool cFreshPlayer::Play() {
  cFreshScore *pcVar1;
  int iVar2;
  
  if (*(int *)this != 0) {
    if (*(int *)&this->m_bIsFading == 0) {
      iVar2 = *(int *)&this->m_bIsPlaying;
    }
    else {
      StopFade__12cFreshPlayer(this);
      iVar2 = *(int *)&this->m_bIsPlaying;
    }
    if (iVar2 == 0) {
      *(undefined4 *)&this->m_bIsManual = 0;
      pcVar1 = this->m_pScore;
      this->m_lTempo = pcVar1->m_lTempo;
      this->m_lStartBeatNum = pcVar1->m_lBeatsPerBar;
      if (pcVar1->m_lBeatsPerBar < 3) {
        iVar2 = this->m_lStartBeatNum;
      }
      else {
        this->m_lStartBeatNum = pcVar1->m_lBeatsPerBar + -1;
        iVar2 = this->m_lStartBeatNum;
      }
      this->m_lNextBeatNum = iVar2;
      this->m_lBeatNum = iVar2;
      UpdatePlayerInfo__12cFreshPlayer(this);
      SetXPos__12cFreshPlayeri(this,this->m_pScore->m_lInitialXPos);
      SetYPos__12cFreshPlayeri(this,this->m_pScore->m_lInitialYPos);
      Start__11cFreshTimerP12cFreshPlayer(this->m_pFreshTimer,this);
      *(undefined4 *)&this->m_bIsPlaying = 1;
    }
  }
  return true;
}

bool cFreshPlayer::Stop() {
  bool bVar1;
  
  bVar1 = StopNoLock__12cFreshPlayer(this);
  return bVar1;
}

bool cFreshPlayer::StopNoLock() {
	Sint32 lRow;
	Sint32 lColumn;
	cFreshCellPlayer *this;
	
  int iVar1;
  cFreshCellPlayer **ppcVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int *)this != 0) && (*(int *)&this->m_bIsPlaying != 0)) {
    StopFade__12cFreshPlayer(this);
    Stop__11cFreshTimerP12cFreshPlayer(this->m_pFreshTimer,this);
    iVar4 = 0;
    iVar1 = 0;
    do {
      iVar4 = iVar4 + 1;
      iVar3 = 0xd;
      ppcVar2 = (cFreshCellPlayer **)((int)this->m_apCell + iVar1);
      do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/FreshnessUtil.h */
                    /* end of inlined section */
        iVar3 = iVar3 + -1;
        if ((*ppcVar2)->m_eState != kNotPlaying) {
          Stop__16cFreshCellPlayer(*ppcVar2);
        }
        ppcVar2 = ppcVar2 + 1;
      } while (-1 < iVar3);
      iVar1 = iVar4 * 0x38;
    } while (iVar4 < 0x1a);
    *(undefined4 *)&this->m_bIsPlaying = 0;
  }
  return true;
}

void cFreshPlayer::StopFade() {
  if (*(int *)&this->m_bIsFading != 0) {
    *(undefined4 *)&this->m_bIsFading = 0;
  }
  return;
}

void cFreshPlayer::Update() {
	static Uint32 lLastUpdateTime = 0;
	Sint32 lRow;
	Sint32 lColumn;
	Uint32 lBeatTime;
	Sint32 lMinCellsPlaying;
	Sint32 lMaxCellsPlaying;
	Sint32 lKillGroup;
	Sint32 lNumKills;
	Uint32 lTime;
	bool bTooMuchError;
	Sint32 lKillCellProb;
	bool bShouldSubtractCell;
	bool bShouldAddCell;
	Sint32 lNumCellsBusy;
	cFreshCellPlayer *pPlayer;
	cFreshCellPlayer *pPlayer;
	
  int iVar1;
  cFreshCellPlayer *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  cFreshCell *pcVar8;
  int iVar9;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  uint uVar10;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  int lRow;
  int lColumn;
  int lMaxCellsPlaying;
  int lKillCellProb;
  uint local_b0;
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
  
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  iVar9 = 0;
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  iVar4 = GetMinCellsPlaying__12cFreshPlayer(this);
  lMaxCellsPlaying = GetMaxCellsPlaying__12cFreshPlayer(this);
  ProcessVolumeFadeTimerCallback__12cFreshPlayer(this);
  if (*(int *)this == 0) {
    return;
  }
  if (*(int *)&this->m_bIsPlaying == 0) {
    return;
  }
  if (*(int *)&this->m_bIsPaused != 0) {
    return;
  }
  iVar5 = timeGetTime__Fv();
  uVar10 = iVar5 - this->lTimeBase;
  lLastUpdateTime_351 = uVar10;
  uVar6 = BeatTime__12cFreshPlayeri(this,this->m_lNextBeatNum);
  if (uVar10 < uVar6) {
    return;
  }
  if (86400000 < uVar10) {
    iVar9 = this->m_pScore->m_lBeatsPerBar;
    this->m_lNextBeatNum = iVar9;
    this->m_lStartBeatNum = iVar9;
    this->m_lBeatNum = iVar9;
    uVar6 = timeGetTime__Fv();
    this->lTimeBase = uVar6;
    return;
  }
  iVar5 = this->m_pScore->m_lBeatsPerBar;
  iVar1 = this->m_lStressLevel;
  lKillCellProb = 0;
  if ((((this->m_lBeatNum == iVar5 + -1) || (this->m_lBeatNum == iVar5 + -6)) &&
      (iVar5 = NumCellsPlaying__12cFreshPlayer(this),
      this->m_pScore->m_lPriority != 0 && (*(int *)&this->m_bIsManual == 0 && iVar4 <= iVar5))) &&
     (bVar3 = GetCellToSubtract__12cFreshPlayerRiT1(this,&lRow,(int *)((uint)&lRow | 4)), bVar3)) {
    *(undefined4 *)&this->m_apCell[lRow][lColumn]->m_bKillMe = 1;
    pcVar8 = this->m_apCell[lRow][lColumn]->m_pCell;
    iVar9 = pcVar8->m_lGroupId;
    if (iVar9 != 0) {
      lKillCellProb = pcVar8->m_lProbability;
    }
  }
  bVar3 = false;
  iVar7 = NumCellsBusy__12cFreshPlayer(this);
  iVar5 = NumCellsDying__12cFreshPlayer(this);
  iVar7 = iVar7 - iVar5;
  iVar5 = this->m_pScore->m_lBeatsPerBar;
  if (((this->m_lBeatNum == iVar5 + -1) || (this->m_lBeatNum == iVar5 + -6)) &&
     (bVar3 = *(int *)&this->m_bIsManual == 0 &&
              (iVar7 < lMaxCellsPlaying && this->m_lPlayPercent != 0),
     *(int *)&this->m_bIsFading != 0)) {
    bVar3 = false;
  }
  if (!bVar3) goto LAB_002823d4;
  bVar3 = GetCellToAdd__12cFreshPlayerRiT1i(this,&lRow,&lColumn,iVar9);
  local_b0 = (uint)(iVar7 < lMaxCellsPlaying);
  if (bVar3) {
LAB_00282304:
    pcVar2 = this->m_apCell[lRow][lColumn];
    pcVar8 = GetCell__C11cFreshScoreii(this->m_pScore,lRow,lColumn);
    Start__16cFreshCellPlayerPCQ23snd10cFreshCell(pcVar2,pcVar8);
    this->m_lLastCellStartedRow = lRow;
    this->m_lLastCellStartedCol = lColumn;
  }
  else {
    if ((iVar9 != 0) && (lKillCellProb == 0x13)) {
      bVar3 = GetCellToAdd__12cFreshPlayerRiT1i(this,&lRow,&lColumn,iVar9);
    }
    if (bVar3 != false) goto LAB_00282304;
    if ((iVar9 != 0) && (lKillCellProb == 0x13)) {
      bVar3 = GetCellToAdd__12cFreshPlayerRiT1i(this,&lRow,&lColumn,iVar9);
    }
    if (bVar3 != false) goto LAB_00282304;
    if (iVar7 < iVar4) {
      bVar3 = GetCellToAdd__12cFreshPlayerRiT1i(this,&lRow,&lColumn,iVar9);
    }
    if (bVar3 != false) goto LAB_00282304;
  }
  if (local_b0 != 0) {
    bVar3 = GetCellToAdd__12cFreshPlayerRiT1i(this,&lRow,&lColumn,0);
    if (!bVar3) {
      if (iVar7 < iVar4) {
        bVar3 = GetCellToAdd__12cFreshPlayerRiT1i(this,&lRow,&lColumn,0);
      }
      if (bVar3 == false) goto LAB_002823d4;
    }
    pcVar2 = this->m_apCell[lRow][lColumn];
    pcVar8 = GetCell__C11cFreshScoreii(this->m_pScore,lRow,lColumn);
    Start__16cFreshCellPlayerPCQ23snd10cFreshCell(pcVar2,pcVar8);
    this->m_lLastCellStartedRow = lRow;
    this->m_lLastCellStartedCol = lColumn;
  }
LAB_002823d4:
  lRow = 0;
  do {
    lColumn = 0;
    do {
      Update__16cFreshCellPlayerbi
                (this->m_apCell[lRow][lColumn],iVar1 != 0 || 7 < uVar10 - uVar6,this->m_lBeatNum);
      lColumn = lColumn + 1;
    } while (lColumn < 0xe);
    lRow = lRow + 1;
  } while (lRow < 0x1a);
  iVar9 = this->m_lBeatNum + 1;
  this->m_lBeatNum = iVar9;
  if (this->m_pScore->m_lBeatsPerBar < iVar9) {
    this->m_lBeatNum = 1;
  }
  iVar9 = this->m_lNextBeatNum + 1;
  this->m_lNextBeatNum = iVar9;
  BeatTime__12cFreshPlayeri(this,iVar9);
  return;
}

Sint32 cFreshPlayer::ProbOfCellStarting(Sint32 lRow, Sint32 lColumn, Sint32 lFavorGroup) {
	cFreshCellPlayer *pCellPlayer;
	cFreshCell *pCell;
	Sint32 lRandCrit;
	cFreshCellPlayer *this;
	cFreshCellPlayer *this;
	Sint32 lRowNum;
	Sint32 lColumnNum;
	
  cFreshCellPlayer *pcVar1;
  int iVar2;
  bool bVar3;
  cFreshCell *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  pcVar1 = this->m_apCell[lRow][lColumn];
  pcVar4 = GetCell__C11cFreshScoreii(this->m_pScore,lRow,lColumn);
  if (pcVar4 == (cFreshCell *)0x0) {
    return 0;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/FreshnessUtil.h */
                    /* end of inlined section */
  if (*(int *)&pcVar1->m_bIsDead != 0) {
    return 0;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/FreshnessUtil.h */
                    /* end of inlined section */
  if (pcVar1->m_eState != kNotPlaying) {
    return 0;
  }
  bVar3 = CellIsInSelectionArea__12cFreshPlayerii(this,lRow,lColumn);
  if (bVar3) {
    if (lRow == this->m_lLastCellKilledRow) {
      if (lColumn == this->m_lLastCellKilledCol) {
        return 0;
      }
      iVar5 = pcVar4->m_lGroupId;
    }
    else {
      iVar5 = pcVar4->m_lGroupId;
    }
    if (iVar5 == 0) {
      iVar6 = pcVar4->m_lProbability;
    }
    else {
      iVar9 = 0;
      iVar6 = 0;
      do {
        iVar8 = 0;
        piVar7 = (int *)((int)this->m_apCell + iVar6);
        do {
          iVar2 = *piVar7;
                    /* inlined from c:/eor/src2/games/sims/MSrc/FreshnessUtil.h */
                    /* end of inlined section */
          if ((((*(int *)(iVar2 + 0xc) != 0) && (iVar5 == *(int *)(*(int *)(iVar2 + 0xc) + 0x40)))
              && (*(int *)(iVar2 + 8) != 0)) && (*(int *)(iVar2 + 0x18) == 0)) {
            return 0;
          }
          iVar8 = iVar8 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar8 < 0xe);
        iVar9 = iVar9 + 1;
        iVar6 = iVar6 + 0x38;
      } while (iVar9 < 0x1a);
      iVar6 = pcVar4->m_lProbability;
    }
    if (iVar6 != 0) {
      if (iVar6 != 0x14) {
        if (this->m_lNumCellsInSelectionArea == 0) {
          this->m_lNumCellsInSelectionArea = 10;
        }
        if (lFavorGroup == 0) {
          iVar5 = pcVar4->m_lProbability;
        }
        else {
          if (pcVar4->m_lGroupId == lFavorGroup) {
            return 2;
          }
          iVar5 = pcVar4->m_lProbability;
        }
                    /* end of inlined section */
        iVar5 = GetRandCrit__12cFreshPlayerii(this,iVar5,this->m_lNumCellsInSelectionArea);
                    /* inlined from c:/eor/src2/games/sims/MSrc/SRand.h */
        iVar6 = GetNextRandomNumber__Fv();
                    /* end of inlined section */
        return (uint)(iVar6 % 0x10000 < iVar5);
      }
      if (lFavorGroup == 0) {
        return 100;
      }
      if (iVar5 == lFavorGroup) {
        return 0x65;
      }
      return 100;
    }
  }
  return 0;
}

Sint32 cFreshPlayer::GetRandCrit(Sint32 lCellProb, Sint32 lNumCellsInSelectionArea) {
  if (lNumCellsInSelectionArea == 0) {
    trap(7);
  }
  return alCellProbMultiplier[lCellProb] / lNumCellsInSelectionArea;
}

bool cFreshPlayer::CellIsInSelectionArea(Sint32 lRow, Sint32 lColumn) {
  bool bVar1;
  int iVar2;
  
  iVar2 = abs(lRow - this->m_lYPos);
  if (this->m_lSelectionAreaMaxYDistance < iVar2) {
    bVar1 = false;
  }
  else {
    iVar2 = abs(lColumn - this->m_lXPos);
    bVar1 = iVar2 <= this->m_lSelectionAreaMaxXDistance;
  }
  return bVar1;
}

bool cFreshPlayer::GetCellToAdd(Sint32 &lRowNum, Sint32 &lColumnNum, Sint32 lFavorGroup) {
	Sint32 lRow;
	Sint32 lColumn;
	Sint32 lMaxProb;
	int iStartRow;
	int iStartCol;
	int iEndRow;
	int iEndCol;
	int iMiddleRow;
	int iMiddleCol;
	Sint32 lCellProb;
	Sint32 lCellProb;
	Sint32 lCellProb;
	Sint32 lCellProb;
	
  int lRow;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iStartRow;
  int iStartCol;
  int iEndRow;
  int iEndCol;
  
  iVar9 = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/SRand.h */
  iVar1 = GetNextRandomNumber__Fv();
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/SRand.h */
                    /* end of inlined section */
  iVar2 = GetFirstSelectableRow__12cFreshPlayer(this);
  iVar3 = GetFirstSelectableColumn__12cFreshPlayer(this);
  iVar4 = GetLastSelectableRow__12cFreshPlayer(this);
  iVar5 = GetLastSelectableColumn__12cFreshPlayer(this);
  iVar6 = this->m_lSelectionAreaMaxYDistance * 2 + 1;
  if (iVar6 == 0) {
    trap(7);
  }
  iVar6 = (int)(iVar1 % 0x10000 >> 8 & 0xffU) % iVar6 +
          (this->m_lYPos - this->m_lSelectionAreaMaxYDistance);
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  if (0x19 < iVar6) {
    iVar6 = 0x19;
  }
  iVar1 = (int)(iVar1 % 0x10000 & 0xffU) % (this->m_lSelectionAreaMaxXDistance * 2 + 1) +
          (this->m_lXPos - this->m_lSelectionAreaMaxXDistance);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  iVar8 = iVar6;
  if (0xd < iVar1) {
    iVar1 = 0xd;
  }
  while (lRow = iVar8, lRow <= iVar4) {
    for (iVar8 = iVar1; iVar7 = iVar3, iVar8 <= iVar5; iVar8 = iVar8 + 1) {
      iVar7 = ProbOfCellStarting__12cFreshPlayeriii(this,lRow,iVar8,lFavorGroup);
      if (iVar9 < iVar7) {
        *lRowNum = lRow;
        *lColumnNum = iVar8;
        iVar9 = iVar7;
      }
    }
    for (; iVar8 = lRow + 1, iVar7 < iVar1; iVar7 = iVar7 + 1) {
      iVar8 = ProbOfCellStarting__12cFreshPlayeriii(this,lRow,iVar7,lFavorGroup);
      if (iVar9 < iVar8) {
        *lRowNum = lRow;
        *lColumnNum = iVar7;
        iVar9 = iVar8;
      }
    }
  }
  while (iVar4 = iVar2, iVar4 < iVar6) {
    for (iVar2 = iVar1; iVar8 = iVar3, iVar2 <= iVar5; iVar2 = iVar2 + 1) {
      iVar8 = ProbOfCellStarting__12cFreshPlayeriii(this,iVar4,iVar2,lFavorGroup);
      if (iVar9 < iVar8) {
        *lRowNum = iVar4;
        *lColumnNum = iVar2;
        iVar9 = iVar8;
      }
    }
    for (; iVar2 = iVar4 + 1, iVar8 < iVar1; iVar8 = iVar8 + 1) {
      iVar2 = ProbOfCellStarting__12cFreshPlayeriii(this,iVar4,iVar8,lFavorGroup);
      if (iVar9 < iVar2) {
        *lRowNum = iVar4;
        *lColumnNum = iVar8;
        iVar9 = iVar2;
      }
    }
  }
  return iVar9 != 0;
}

bool cFreshPlayer::ToggleCell(Sint32 lRow, Sint32 lColumn) {
	cFreshCellPlayer *this;
	
  cFreshCellPlayer *this_00;
  cFreshCell *pCell;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/FreshnessUtil.h */
  this_00 = this->m_apCell[lRow][lColumn];
                    /* end of inlined section */
  if (this_00->m_eState == kNotPlaying) {
    pCell = GetCell__C11cFreshScoreii(this->m_pScore,lRow,lColumn);
    Start__16cFreshCellPlayerPCQ23snd10cFreshCell(this_00,pCell);
  }
  else {
    SubtractCell__12cFreshPlayerii(this,lRow,lColumn);
  }
  return true;
}

bool cFreshPlayer::GetCellToSubtract(Sint32 &lRowNum, Sint32 &lColumnNum) {
	Sint16 lRand1;
	Sint16 lRand2;
	int iStartRow;
	int iStartCol;
	int iEndRow;
	int iEndCol;
	Sint32 lRows;
	Sint32 lCols;
	Sint32 lNumCells;
	Sint32 *alRowNum;
	Sint32 *alColNum;
	Sint32 lNumActualCells;
	cFreshCellPlayer *this;
	cFreshCellPlayer *this;
	cFreshCellPlayer *this;
	cFreshCellPlayer *this;
	cFreshCellPlayer *this;
	unsigned int lim;
	
  uint uVar1;
  cFreshCellPlayer *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *alRowNum;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/SRand.h */
  iVar4 = GetNextRandomNumber__Fv();
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/SRand.h */
                    /* inlined from c:/eor/src2/games/sims/MSrc/SRand.h */
                    /* end of inlined section */
  uVar9 = (iVar4 % 0x10000 & 0xffU) % 0xe;
  uVar1 = (iVar4 % 0x10000 >> 8 & 0xffU) % 0x1a;
  bVar3 = uVar1 < 0x1a;
  *lRowNum = uVar1;
  while (bVar3) {
    *lColumnNum = uVar9;
    if (uVar9 < 0xe) {
      do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/FreshnessUtil.h */
                    /* end of inlined section */
        if (this->m_apCell[*lRowNum][*lColumnNum]->m_eState == kPlaying) {
          bVar3 = CellIsInSelectionArea__12cFreshPlayerii(this,*lRowNum,*lColumnNum);
          iVar4 = *lColumnNum;
          if (!bVar3) {
            if (*(int *)&this->m_apCell[*lRowNum][iVar4]->m_bKillMe == 0) {
              return true;
            }
            iVar4 = *lColumnNum;
          }
        }
        else {
          iVar4 = *lColumnNum;
        }
        *lColumnNum = iVar4 + 1;
      } while (iVar4 + 1 < 0xe);
    }
    *lColumnNum = 0;
    if (uVar9 != 0) {
      do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/FreshnessUtil.h */
                    /* end of inlined section */
        if (this->m_apCell[*lRowNum][*lColumnNum]->m_eState == kPlaying) {
          bVar3 = CellIsInSelectionArea__12cFreshPlayerii(this,*lRowNum,*lColumnNum);
          iVar4 = *lColumnNum;
          if (!bVar3) {
            if (*(int *)&this->m_apCell[*lRowNum][iVar4]->m_bKillMe == 0) {
              return true;
            }
            iVar4 = *lColumnNum;
          }
        }
        else {
          iVar4 = *lColumnNum;
        }
        *lColumnNum = iVar4 + 1;
      } while (iVar4 + 1 < (int)uVar9);
    }
    bVar3 = *lRowNum + 1 < 0x1a;
    *lRowNum = *lRowNum + 1;
  }
  *lRowNum = 0;
  if (uVar1 != 0) {
    do {
      *lColumnNum = uVar9;
      if (uVar9 < 0xe) {
        do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/FreshnessUtil.h */
                    /* end of inlined section */
          if (this->m_apCell[*lRowNum][*lColumnNum]->m_eState == kPlaying) {
            bVar3 = CellIsInSelectionArea__12cFreshPlayerii(this,*lRowNum,*lColumnNum);
            iVar4 = *lColumnNum;
            if (!bVar3) {
              if (*(int *)&this->m_apCell[*lRowNum][iVar4]->m_bKillMe == 0) {
                return true;
              }
              iVar4 = *lColumnNum;
            }
          }
          else {
            iVar4 = *lColumnNum;
          }
          *lColumnNum = iVar4 + 1;
        } while (iVar4 + 1 < 0xe);
      }
      *lColumnNum = 0;
      if (uVar9 != 0) {
        do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/FreshnessUtil.h */
                    /* end of inlined section */
          if (this->m_apCell[*lRowNum][*lColumnNum]->m_eState == kPlaying) {
            bVar3 = CellIsInSelectionArea__12cFreshPlayerii(this,*lRowNum,*lColumnNum);
            iVar4 = *lColumnNum;
            if (!bVar3) {
              if (*(int *)&this->m_apCell[*lRowNum][iVar4]->m_bKillMe == 0) {
                return true;
              }
              iVar4 = *lColumnNum;
            }
          }
          else {
            iVar4 = *lColumnNum;
          }
          *lColumnNum = iVar4 + 1;
        } while (iVar4 + 1 < (int)uVar9);
      }
      iVar4 = *lRowNum;
      *lRowNum = iVar4 + 1;
    } while (iVar4 + 1 < (int)uVar1);
  }
  iVar4 = this->m_lSelectionAreaMaxYDistance;
  iVar10 = this->m_lXPos - this->m_lSelectionAreaMaxXDistance;
  iVar11 = this->m_lXPos + this->m_lSelectionAreaMaxXDistance;
  iVar13 = this->m_lYPos - iVar4;
  iVar12 = this->m_lYPos + iVar4;
  if (0x19 < iVar12) {
    iVar12 = 0x19;
  }
  if (iVar13 < 0) {
    iVar13 = 0;
  }
  if (0xd < iVar11) {
    iVar11 = 0xd;
  }
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  if (iVar4 * 2 == -1) {
    trap(7);
  }
                    /* inlined from /eor/src2/common/e_standard_heap.h */
                    /* end of inlined section */
  iVar4 = 0;
                    /* inlined from /eor/src2/common/e_standard_heap.h */
  uVar9 = ((iVar12 - iVar13) + 1) * ((iVar11 - iVar10) + 1) * 4;
  pvVar5 = _memmanAlloc__FUiUi(uVar9,4);
  pvVar6 = _memmanAlloc__FUiUi(uVar9,4);
                    /* end of inlined section */
  *lRowNum = iVar13;
  if (iVar13 <= iVar12) {
    do {
      *lColumnNum = iVar10;
      if (iVar10 <= iVar11) {
        piVar8 = (int *)(iVar4 * 4 + (int)pvVar5);
        piVar7 = (int *)(iVar4 * 4 + (int)pvVar6);
        do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/FreshnessUtil.h */
          pcVar2 = this->m_apCell[*lRowNum][*lColumnNum];
                    /* end of inlined section */
          if (pcVar2->m_eState == kPlaying) {
            if (pcVar2->m_pCell->m_lProbability == 0x14) {
              iVar13 = *lColumnNum;
            }
            else if (*(int *)&pcVar2->m_bKillMe == 0) {
              *piVar8 = *lRowNum;
              iVar4 = iVar4 + 1;
              piVar8 = piVar8 + 1;
              *piVar7 = *lColumnNum;
              piVar7 = piVar7 + 1;
              iVar13 = *lColumnNum;
            }
            else {
              iVar13 = *lColumnNum;
            }
          }
          else {
            iVar13 = *lColumnNum;
          }
          *lColumnNum = iVar13 + 1;
        } while (iVar13 + 1 <= iVar11);
      }
      iVar13 = *lRowNum;
      *lRowNum = iVar13 + 1;
    } while (iVar13 + 1 <= iVar12);
  }
  bVar3 = false;
  if (iVar4 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/SRand.h */
    iVar10 = GetNextRandomNumber__Fv();
    if (iVar4 == 0) {
      trap(7);
    }
                    /* end of inlined section */
    bVar3 = true;
                    /* inlined from c:/eor/src2/games/sims/MSrc/SRand.h */
                    /* end of inlined section */
    iVar4 = (iVar10 % iVar4) * 4;
    *lRowNum = *(int *)(iVar4 + (int)pvVar5);
    *lColumnNum = *(int *)(iVar4 + (int)pvVar6);
  }
  return bVar3;
}

void cFreshPlayer::SubtractCell(Sint32 lRow, Sint32 lColumn) {
	cFreshCellPlayer *pCell;
	cFreshCellPlayer *this;
	cFreshCellPlayer *this;
	cFreshCellPlayer *this;
	
  cFreshCellPlayer *this_00;
  
  this->m_lLastCellKilledRow = lRow;
  this->m_lLastCellKilledCol = lColumn;
  this_00 = this->m_apCell[lRow][lColumn];
                    /* inlined from c:/eor/src2/games/sims/MSrc/FreshnessUtil.h */
                    /* end of inlined section */
  if (this_00->m_eState != kNotPlaying) {
                    /* end of inlined section */
    Stop__16cFreshCellPlayer(this_00);
  }
  return;
}

bool cFreshPlayer::SetVolume(Sint32 lVol) {
  bool bVar1;
  
  bVar1 = SetVolumeNoLock__12cFreshPlayeri(this,lVol);
  return bVar1;
}

bool cFreshPlayer::SetVolumeNoLock(Sint32 lVol) {
	Sint32 lRow;
	Sint32 lColumn;
	cFreshCellPlayer *pCellPlayer;
	cFreshCellPlayer *this;
	
  int iVar1;
  cFreshCellPlayer **ppcVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)this != 0) {
    this->m_lVol = lVol;
    iVar4 = 0;
    iVar1 = 0;
    do {
      iVar4 = iVar4 + 1;
      iVar3 = 0xd;
      ppcVar2 = (cFreshCellPlayer **)((int)this->m_apCell + iVar1);
      do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/FreshnessUtil.h */
                    /* end of inlined section */
        if ((*ppcVar2)->m_eState == kPlaying) {
          SetVol__16cFreshCellPlayeri(*ppcVar2,this->m_lVol);
        }
        iVar3 = iVar3 + -1;
        ppcVar2 = ppcVar2 + 1;
      } while (-1 < iVar3);
      iVar1 = iVar4 * 0x38;
    } while (iVar4 < 0x1a);
  }
  return true;
}

bool cFreshPlayer::FadeVolume(Sint32 lMilliseconds, Sint32 lEndingVolume, bool bKill) {
  int iVar1;
  
  if (((*(int *)this != 0) && (*(int *)&this->m_bIsPlaying != 0)) &&
     (*(int *)&this->m_bIsFading == 0)) {
    iVar1 = this->m_lVol;
    if (iVar1 != 0) {
      if (iVar1 <= lEndingVolume) {
        return true;
      }
      *(int *)&this->m_bKillAtEndOfFade = (int)bKill;
      *(undefined4 *)&this->m_bIsFading = 1;
      this->m_lVolumeAsyncFadeEndingVolume = lEndingVolume;
      this->m_lVolumeAsyncFadeStepValue = (lEndingVolume - iVar1) / 0x14;
      return true;
    }
  }
  return true;
}

bool cFreshPlayer::SetTempo(Sint32 lTempo) {
	cFreshPlayer *this;
	
  uint uVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/Freshness.h */
                    /* end of inlined section */
  if ((*(int *)&this->m_bIsPlaying != 0) && (this->m_lTempo != lTempo)) {
    this->m_lTempo = lTempo;
    uVar1 = timeGetTime__Fv();
    this->lTimeBase = uVar1;
    this->m_lNextBeatNum = this->m_lBeatNum + this->m_lStartBeatNum;
  }
  return true;
}

Sint32 cFreshPlayer::BeatTime(Sint32 lBeatNum) {
  int iVar1;
  
  iVar1 = this->m_lTempo;
  if (iVar1 != 0) {
    if (iVar1 == 0) {
      trap(7);
    }
    return ((lBeatNum - this->m_lStartBeatNum) * 60000) / iVar1;
  }
  return -1;
}

void cFreshPlayer::ProcessVolumeFadeTimerCallback() {
	static int count = 0;
	Sint32 lNewVolume;
	
  int lVol;
  
  count_391 = count_391 + 1;
  if (((count_391 & 7) == 0) && (*(int *)&this->m_bIsFading != 0)) {
    lVol = this->m_lVol + this->m_lVolumeAsyncFadeStepValue;
    if (lVol < 0) {
      lVol = 0;
    }
    SetVolumeNoLock__12cFreshPlayeri(this,lVol);
    if ((lVol <= this->m_lVolumeAsyncFadeEndingVolume) && (*(int *)&this->m_bKillAtEndOfFade != 0))
    {
      StopNoLock__12cFreshPlayer(this);
    }
  }
  return;
}

bool cFreshPlayer::SetXPos(Sint32 lAura) {
	Sint32 lColumnNum;
	Sint32 lSelWidth;
	
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)this != 0) {
    iVar1 = this->m_lSelectionAreaMaxXDistance;
    iVar3 = (lAura * 0xe) / 1000;
    if (this->m_pScore->m_lPriority != 0) {
      iVar2 = iVar1 * 2 + 1;
      if (iVar2 == 0) {
        trap(7);
      }
      iVar3 = (iVar3 / iVar2) * iVar2 + iVar1;
    }
    if (-iVar1 + 0xe <= iVar3) {
      iVar3 = -iVar1 + 0xd;
    }
    if (iVar3 < iVar1) {
      iVar3 = iVar1;
    }
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    if (0xd < iVar3) {
      iVar3 = 0xd;
    }
    this->m_lXPos = iVar3;
    UpdatePlayerInfo__12cFreshPlayer(this);
  }
  return true;
}

bool cFreshPlayer::SetYPos(Sint32 lIntensity) {
	Sint32 lRowNum;
	Sint32 lSelHeight;
	
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)this != 0) {
    iVar1 = this->m_lSelectionAreaMaxYDistance;
    iVar3 = (lIntensity * 0x1a) / 1000;
    if (this->m_pScore->m_lPriority != 0) {
      iVar2 = iVar1 * 2 + 1;
      if (iVar2 == 0) {
        trap(7);
      }
      iVar3 = (iVar3 / iVar2) * iVar2 + iVar1;
    }
    if (-iVar1 + 0x1a <= iVar3) {
      iVar3 = -iVar1 + 0x19;
    }
    if (iVar3 < iVar1) {
      iVar3 = iVar1;
    }
    if (0x19 < iVar3) {
      iVar3 = 0x19;
    }
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    this->m_lYPos = iVar3;
    UpdatePlayerInfo__12cFreshPlayer(this);
  }
  return true;
}

void cFreshPlayer::UpdatePlayerInfo() {
	bool abGroupIdSpokenFor[32];
	int i;
	int j;
	
  int iVar1;
  int x;
  cFreshCell *pcVar2;
  int iVar3;
  int y;
  bool abGroupIdSpokenFor [32];
  
  memset(abGroupIdSpokenFor,0,0x80);
  this->m_lNumCellsInSelectionArea = 0;
  this->m_lMinCellsUpperLimit = 0;
  iVar1 = GetFirstSelectableRow__12cFreshPlayer(this);
  do {
    y = iVar1;
    iVar1 = GetLastSelectableRow__12cFreshPlayer(this);
    if (iVar1 < y) {
      return;
    }
    x = GetFirstSelectableColumn__12cFreshPlayer(this);
    for (; iVar3 = GetLastSelectableColumn__12cFreshPlayer(this), iVar1 = y + 1, x <= iVar3;
        x = x + 1) {
      pcVar2 = GetCell__C11cFreshScoreii(this->m_pScore,y,x);
      if (pcVar2 != (cFreshCell *)0x0) {
        pcVar2 = GetCell__C11cFreshScoreii(this->m_pScore,y,x);
        if (pcVar2->m_lGroupId == 0) {
          iVar1 = this->m_lMinCellsUpperLimit;
LAB_00283404:
          this->m_lMinCellsUpperLimit = iVar1 + 1;
        }
        else {
          pcVar2 = GetCell__C11cFreshScoreii(this->m_pScore,y,x);
          if (*(int *)(abGroupIdSpokenFor + pcVar2->m_lGroupId * 4) == 0) {
            pcVar2 = GetCell__C11cFreshScoreii(this->m_pScore,y,x);
            iVar1 = this->m_lMinCellsUpperLimit;
            *(undefined4 *)(abGroupIdSpokenFor + pcVar2->m_lGroupId * 4) = 1;
            goto LAB_00283404;
          }
        }
        this->m_lNumCellsInSelectionArea = this->m_lNumCellsInSelectionArea + 1;
      }
    }
  } while( true );
}

bool cFreshPlayer::SetZoom(Sint32 lZoom) {
  if (*(int *)this != 0) {
    this->m_lZoom = lZoom;
    return true;
  }
  return true;
}

bool cFreshPlayer::SetPlayPercent(Sint32 lPlayPercent) {
  if (*(int *)this != 0) {
    this->m_lPlayPercent = lPlayPercent;
    return true;
  }
  return true;
}

bool cFreshPlayer::SetManual(bool bIsManual) {
  if (*(int *)this != 0) {
    *(int *)&this->m_bIsManual = (int)bIsManual;
    return true;
  }
  return true;
}

Sint32 cFreshPlayer::NumCellsBusy() {
	Sint32 lNumCellsBusy;
	Sint32 lRow;
	Sint32 lColumn;
	cFreshCellPlayer *this;
	
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  iVar1 = 0;
  do {
    iVar5 = iVar5 + 1;
    iVar3 = 0xd;
    piVar2 = (int *)((int)this->m_apCell + iVar1);
    do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/FreshnessUtil.h */
      iVar1 = *piVar2;
                    /* end of inlined section */
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/FreshnessUtil.h */
                    /* end of inlined section */
      if (*(int *)(iVar1 + 8) != 0) {
        iVar4 = iVar4 + 1;
      }
    } while (-1 < iVar3);
    iVar1 = iVar5 * 0x38;
  } while (iVar5 < 0x1a);
  return iVar4;
}

Sint32 cFreshPlayer::NumCellsDying() {
	Sint32 lNumCellsDying;
	Sint32 lRow;
	Sint32 lColumn;
	
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  iVar1 = 0;
  do {
    iVar5 = iVar5 + 1;
    iVar3 = 0xd;
    piVar2 = (int *)((int)this->m_apCell + iVar1);
    do {
      iVar1 = *piVar2;
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
      if (*(int *)(iVar1 + 0x18) != 0) {
        iVar4 = iVar4 + 1;
      }
    } while (-1 < iVar3);
    iVar1 = iVar5 * 0x38;
  } while (iVar5 < 0x1a);
  return iVar4;
}

Sint32 cFreshPlayer::NumCellsPlaying() {
	Sint32 lNumCellsPlaying;
	Sint32 lRow;
	Sint32 lColumn;
	cFreshCellPlayer *this;
	
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  iVar1 = 0;
  do {
    iVar5 = iVar5 + 1;
    iVar3 = 0xd;
    piVar2 = (int *)((int)this->m_apCell + iVar1);
    do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/FreshnessUtil.h */
      iVar1 = *piVar2;
                    /* end of inlined section */
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/FreshnessUtil.h */
                    /* end of inlined section */
      if (*(int *)(iVar1 + 8) == 4) {
        iVar4 = iVar4 + 1;
      }
    } while (-1 < iVar3);
    iVar1 = iVar5 * 0x38;
  } while (iVar5 < 0x1a);
  return iVar4;
}

bool cFreshPlayer::ShowUsage() {
	Sint32 lColumn;
	
  bool bVar1;
  int iVar2;
  
  if (*(int *)this == 0) {
    return true;
  }
  if (*(int *)&this->m_bIsPlaying == 0) {
    return false;
  }
  iVar2 = 0xc;
  do {
    bVar1 = -1 < iVar2;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  return true;
}

bool cFreshPlayer::SetSelectionAreaMaxDistances(Sint32 lHeight, Sint32 lWidth) {
  this->m_lSelectionAreaMaxXDistance = lWidth;
  this->m_lSelectionAreaMaxYDistance = lHeight;
  return true;
}

bool cFreshPlayer::GetSelectionAreaMaxDistances(Sint32 &lHeight, Sint32 &lWidth) {
  *lHeight = this->m_lSelectionAreaMaxYDistance;
  *lWidth = this->m_lSelectionAreaMaxXDistance;
  return true;
}

Sint32 cFreshPlayer::GetMinCellsPlaying() {
	Sint32 lMinCellsPlaying;
	Sint32 lDivisor;
	
  cFreshScore *pcVar1;
  int iVar2;
  
  pcVar1 = this->m_pScore;
  iVar2 = (pcVar1->m_lMinCellsPlaying * this->m_lPlayPercent) / 100 +
          (pcVar1->m_lMinCellsXDiff * (this->m_lXPos + 1)) / 0xd +
          (pcVar1->m_lMinCellsYDiff * (this->m_lYPos + 1)) / 0x19;
  if (this->m_lMinCellsUpperLimit < iVar2) {
    iVar2 = this->m_lMinCellsUpperLimit;
  }
  return iVar2;
}

Sint32 cFreshPlayer::GetMaxCellsPlaying() {
  return (this->m_pScore->m_lMaxCellsPlaying * this->m_lPlayPercent) / 100;
}

Sint32 cFreshPlayer::GetFirstSelectableRow() {
	Sint32 lStartRow;
	
  int iVar1;
  
  iVar1 = this->m_lYPos - this->m_lSelectionAreaMaxYDistance;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return iVar1;
}

Sint32 cFreshPlayer::GetLastSelectableRow() {
	Sint32 lEndRow;
	
  int iVar1;
  
  iVar1 = this->m_lYPos + this->m_lSelectionAreaMaxYDistance;
  if (0x19 < iVar1) {
    iVar1 = 0x19;
  }
  return iVar1;
}

Sint32 cFreshPlayer::GetFirstSelectableColumn() {
	Sint32 lStartCol;
	
  int iVar1;
  
  iVar1 = this->m_lXPos - this->m_lSelectionAreaMaxXDistance;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return iVar1;
}

Sint32 cFreshPlayer::GetLastSelectableColumn() {
	Sint32 lEndCol;
	
  int iVar1;
  
  iVar1 = this->m_lXPos + this->m_lSelectionAreaMaxXDistance;
  if (0xd < iVar1) {
    iVar1 = 0xd;
  }
  return iVar1;
}

bool cFreshPlayer::ThereIsACellInSelectionAreaWaitingToDie() {
	Sint32 lRowStart;
	Sint32 lRowEnd;
	Sint32 lColumnStart;
	Sint32 lColumnEnd;
	int lRowNum;
	int lColumnNum;
	cFreshCellPlayer *this;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  cFreshCellPlayer *(*papcVar5) [14];
  cFreshCellPlayer **ppcVar6;
  int iVar7;
  
  iVar1 = GetFirstSelectableRow__12cFreshPlayer(this);
  iVar2 = GetLastSelectableRow__12cFreshPlayer(this);
  iVar3 = GetFirstSelectableColumn__12cFreshPlayer(this);
  iVar4 = GetLastSelectableColumn__12cFreshPlayer(this);
  if (iVar1 <= iVar2) {
    papcVar5 = this->m_apCell[iVar1];
    do {
      if (iVar3 <= iVar4) {
        ppcVar6 = *papcVar5 + iVar3;
        iVar7 = iVar3;
        do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/FreshnessUtil.h */
                    /* end of inlined section */
          if (((*ppcVar6)->m_eState == kPlaying) && (*(int *)&(*ppcVar6)->m_bKillMe == 0)) {
            return true;
          }
          iVar7 = iVar7 + 1;
          ppcVar6 = ppcVar6 + 1;
        } while (iVar7 <= iVar4);
      }
      iVar1 = iVar1 + 1;
      papcVar5 = papcVar5[1];
    } while (iVar1 <= iVar2);
  }
  return false;
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

void* __malloc_alloc_template<0>::oom_malloc(unsigned int n) {
  void *pvVar1;
  
  do {
    (*(code *)0x0)();
    pvVar1 = malloc(n);
  } while (pvVar1 == (void *)0x0);
  return pvVar1;
}

void list<cFreshPlayer *, __malloc_alloc_template<0> >::clear() {
	__list_node<cFreshPlayer *> *cur;
	__list_node<cFreshPlayer *> *tmp;
	list<cFreshPlayer *,__malloc_alloc_template<0> > *this;
	__list_node<cFreshPlayer *> *p;
	__list_node<cFreshPlayer *> *p;
	void *p;
	
  __list_node_cFreshPlayer___ *p_Var1;
  __list_node_cFreshPlayer___ *pAddress;
  
  p_Var1 = this->node;
  pAddress = (__list_node_cFreshPlayer___ *)p_Var1->next;
  if (pAddress != p_Var1) {
    do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
      p_Var1 = (__list_node_cFreshPlayer___ *)pAddress->next;
      free(pAddress);
                    /* end of inlined section */
      pAddress = p_Var1;
    } while (p_Var1 != this->node);
    p_Var1 = this->node;
  }
  p_Var1->next = p_Var1;
  this->node->prev = this->node;
  this->length = 0;
  return;
}

void list<cFreshPlayer *, __malloc_alloc_template<0> >::erase(__list_iterator<cFreshPlayer *> first, __list_iterator<cFreshPlayer *> last) {
	list<cFreshPlayer *,__malloc_alloc_template<0> > *this;
	list<cFreshPlayer *,__malloc_alloc_template<0> > *this;
	
  __list_node_cFreshPlayer___ *p_Var1;
  
  if (first.node != last.node) {
    do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
                    /* end of inlined section */
      p_Var1 = (__list_node_cFreshPlayer___ *)(first.node)->next;
      *(void **)(first.node)->prev = (first.node)->next;
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
      *(void **)((int)(first.node)->next + 4) = (first.node)->prev;
      free(first.node);
                    /* end of inlined section */
      this->length = this->length - 1;
      first.node = p_Var1;
    } while (p_Var1 != last.node);
  }
  return;
}

__list_iterator<cFreshPlayer *> __list_iterator<cFreshPlayer *> find<__list_iterator<cFreshPlayer *>, cFreshPlayer *>(__list_iterator<cFreshPlayer *> first, __list_iterator<cFreshPlayer *> last, cFreshPlayer *&value) {
  if ((first.node != last.node) && ((first.node)->data != *value)) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
    for (first.node = (__list_node_cFreshPlayer___ *)(first.node)->next;
        (first.node != last.node && ((first.node)->data != *value));
        first.node = (__list_node_cFreshPlayer___ *)(first.node)->next) {
    }
  }
  return (__list_iterator_cFreshPlayer___)first.node;
}

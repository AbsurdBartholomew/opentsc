// STATUS: NOT STARTED

#include "boxx.h"

// warning: multiple differing types with the same name (type name not equal)
struct cSoundObject {
protected:
	Sint32 m_lSoundObjectFlag;
	Sint32 m_lSoundObjectId;
	Sint32 m_lClassId;
	Sint32 m_lArgsType;
	Sint32 m_lRefCount;
	int m_lResId;
	cSndobAttrRegisterSet m_SndobRegisterSet;
	bool m_bIsPaused;
	bool m_bRestartNoteAfterPause;
public:
	__vtbl_ptr_type *$vf1582;
	
	cSoundObject& operator=();
	cSoundObject(Sint32 lClassId);
	/* vtable[1] */ virtual void* _dyncastimpl(SCID id);
	cSoundObject();
	/* vtable[2] */ virtual cSoundObject(cSoundObject*, int, void);
	/* vtable[3] */ virtual Sint32 ClassId();
	/* vtable[4] */ virtual void SetSoundObjectId(Sint32 lSndObId);
	Sint32 SoundObjectId();
	/* vtable[5] */ virtual bool SetInstanceId(Sint32 lInstanceId);
	/* vtable[6] */ virtual Sint32 InstanceId();
	/* vtable[7] */ virtual Sint32 ArgsType();
	/* vtable[8] */ virtual int ResourceId();
	/* vtable[9] */ virtual void HandleTimerCallback();
	/* vtable[10] */ virtual bool Update(Sint32 lArg1, Sint32 lArg2, Sint32 lArg3, Sint32 lArg4);
	/* vtable[11] */ virtual bool IsPlaying();
	/* vtable[12] */ virtual bool IsPaused();
	/* vtable[13] */ virtual cSndobAttrRegisterSet* SndobRegisterSet();
	/* vtable[14] */ virtual bool SetRegister(Sint32 lRegisterId, Sint32 lValue, bool bDeferred);
	/* vtable[15] */ virtual Sint32 RegisterVal(Sint32 lRegisterId);
	/* vtable[16] */ virtual bool WantsViewChangeNotifications();
	/* vtable[17] */ virtual bool Play(Sint32 lArg1, Sint32 lArg2, Sint32 lArg3);
	/* vtable[18] */ virtual bool PlayPause(Sint32 lArg1, Sint32 lArg2, Sint32 lArg3);
	/* vtable[19] */ virtual Sint32 AddRef();
	/* vtable[20] */ virtual Sint32 Release();
	/* vtable[21] */ virtual bool Shutdown();
	/* vtable[22] */ virtual bool Init();
	/* vtable[23] */ virtual bool SetVolume();
	/* vtable[24] */ virtual bool SetPitch();
	/* vtable[25] */ virtual bool SetPan();
	/* vtable[26] */ virtual bool Pause();
	/* vtable[27] */ virtual bool Unpause();
	/* vtable[28] */ virtual bool Stop();
	/* vtable[29] */ virtual bool Kill();
	/* vtable[30] */ virtual bool SetFxType();
	/* vtable[31] */ virtual bool SetFxLevel();
	/* vtable[32] */ virtual bool Load();
	/* vtable[33] */ virtual bool Unload();
	/* vtable[34] */ virtual bool Cache();
	/* vtable[35] */ virtual bool Uncache();
	Sint32 GetRefCount();
};

struct __rb_tree_const_iterator<pair<const int,int> > : __rb_tree_base_iterator {
	__rb_tree_const_iterator<pair<const int,int> >& operator=();
	__rb_tree_const_iterator();
	__rb_tree_const_iterator();
	__rb_tree_const_iterator();
	__rb_tree_const_iterator();
	pair<const int,int>& operator*();
	__rb_tree_const_iterator<pair<const int,int> >& operator++();
	__rb_tree_const_iterator<pair<const int,int> > operator++();
	__rb_tree_const_iterator<pair<const int,int> >& operator--();
	__rb_tree_const_iterator<pair<const int,int> > operator--();
};

struct pair<__rb_tree_const_iterator<pair<const int,int> >,__rb_tree_const_iterator<pair<const int,int> > > {
	__rb_tree_const_iterator<pair<const int,int> > first;
	__rb_tree_const_iterator<pair<const int,int> > second;
};

bool g_bBoxXIsInitted = false;
Sint32 g_lTestPianoSfxId = 0;
Sint32 g_lTestPianoSkill = 0;
Sint32 g_lTestPianoInstanceId = 0;
bool g_bPrintEvents = false;
bool g_bPrintVox = false;
bool g_bDebugEventsOn = false;
bool g_bDebugSamplesOn = false;
bool g_bDebugTracksOn = false;

__vtbl_ptr_type cBoxX virtual table[4] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cBoxX::~cBoxX,
		/* .__delta2 = */ 29296
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cBoxX::Update,
		/* .__delta2 = */ 30512
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

static int kalVolumeCurveValueSFX[11] = {
	/* [0] = */ 1,
	/* [1] = */ 300,
	/* [2] = */ 390,
	/* [3] = */ 490,
	/* [4] = */ 590,
	/* [5] = */ 690,
	/* [6] = */ 790,
	/* [7] = */ 840,
	/* [8] = */ 895,
	/* [9] = */ 960,
	/* [10] = */ 1024
};

static int kalVolumeCurveValueMusic[11] = {
	/* [0] = */ 0,
	/* [1] = */ 100,
	/* [2] = */ 150,
	/* [3] = */ 225,
	/* [4] = */ 300,
	/* [5] = */ 375,
	/* [6] = */ 450,
	/* [7] = */ 550,
	/* [8] = */ 650,
	/* [9] = */ 800,
	/* [10] = */ 1024
};

cHitMan* cGameModeManager::HitMan() {
  return g_pHitMan;
}

bool BoxxGlobalGetSourceParamValue(Sint32 lSourceId, Sint32 lParamNum, Sint32 *plValue) {
  cAudioInfo *this;
  int iVar1;
  
  if (lParamNum < 0x15) {
    this = GetAudioInfo__Fv();
    iVar1 = GetObjectData__10cAudioInfoiQ210cAudioInfo7DataIdx(this,lSourceId,lParamNum);
    *plValue = iVar1;
  }
  return lParamNum < 0x15;
}

cBoxX* cBoxX::cBoxX() {
	multimap<const int,int,less<const int>,__malloc_alloc_template<0> > *this;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	void *result;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	
  __rb_tree_node_pair_const_int_int___ *p_Var1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/multimap.h */
                    /* end of inlined section */
  this->__vtable = (cBoxX__vtable *)_vt_5cBoxX;
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_bMusicEnabled = 1;
  *(undefined4 *)&this->m_bAppInFocus = 1;
  *(undefined4 *)&this->m_bPaused = 0;
  *(undefined4 *)&this->m_bSoundEnabled = 1;
  *(undefined4 *)&this->m_bStereoInUse = 0;
  *(undefined4 *)&this->m_bTVInUse = 0;
  this->m_iMusicVolPercent = 0;
  this->m_iTeleVolPercent = 0;
  this->m_pSystemTimer = (cHitTimer *)0x0;
  this->m_lTimeOfLastKillAll = 0;
  this->m_lTimeLastUpdate = 0;
  this->m_pEventTable = (undefined1 *)0x0;
  this->m_pHitPatchTable = (ERQTable_snd__HitPatch_ *)0x0;
  this->m_pPatchTable = (ERQTable_snd__Patch_ *)0x0;
  this->m_pTrackTable = (ERQTable_snd__Track_ *)0x0;
  this->m_pGlobalHitlistTable = (ERQTable_snd__GlobalHitlist_ *)0x0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/tree.h */
  (this->m_InstanceIdFromSndobId).t.node_count = 0;
  (this->m_InstanceIdFromSndobId).t.field_0x4 = 0;
  p_Var1 = (__rb_tree_node_pair_const_int_int___ *)malloc(0x18);
  if (p_Var1 == (__rb_tree_node_pair_const_int_int___ *)0x0) {
    p_Var1 = (__rb_tree_node_pair_const_int_int___ *)
             oom_malloc__t23__malloc_alloc_template1i0Ui(0x18);
    (this->m_InstanceIdFromSndobId).t.header = p_Var1;
  }
  else {
    (this->m_InstanceIdFromSndobId).t.header = p_Var1;
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/tree.h */
  *(undefined4 *)&p_Var1->field0_0x0 = 0;
  (((this->m_InstanceIdFromSndobId).t.header)->field0_0x0).parent = (__rb_tree_node_base *)0x0;
  p_Var1 = (this->m_InstanceIdFromSndobId).t.header;
  (p_Var1->field0_0x0).left = &p_Var1->field0_0x0;
  p_Var1 = (this->m_InstanceIdFromSndobId).t.header;
                    /* end of inlined section */
  (p_Var1->field0_0x0).right = &p_Var1->field0_0x0;
  __16cGameModeManager(&this->m_GameModeManager);
  this->m_lRawVoxVolume = 10;
  this->m_lRawSfxVolume = 10;
  this->m_lRawMusicVolume = 10;
  this->m_pFreshTimer = (cFreshTimer *)0x0;
  this->m_pOutdoorFreshScore = (cFreshScore *)0x0;
  this->m_pOutdoorFreshPlayer = (cFreshPlayer *)0x0;
  this->m_pObjectData = (ERQuickdata *)0x0;
  return this;
}

void cBoxX::~cBoxX(int __in_chrg) {
	multimap<const int,int,less<const int>,__malloc_alloc_template<0> > *this;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	void *pAddress;
	void *pAddress;
	void *pAddress;
	
  __rb_tree_node_pair_const_int_int___ *p_Var1;
  
  this->__vtable = (cBoxX__vtable *)_vt_5cBoxX;
  _g_bBoxXIsInitted = 0;
  if (this->m_pObjectData != (ERQuickdata *)0x0) {
    DelRef__9EResource(&this->m_pObjectData->field0_0x0);
    this->m_pObjectData = (ERQuickdata *)0x0;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/tree.h */
  if ((this->m_InstanceIdFromSndobId).t.node_count != 0) {
    __erase__t7rb_tree5ZCiZt4pair2ZCiZiZt9select1st1Zt4pair2ZCiZiZt4less1ZCiZt23__malloc_alloc_template1i0Pt14__rb_tree_node1Zt4pair2ZCiZi
              (&(this->m_InstanceIdFromSndobId).t,
               (__rb_tree_node_pair_const_int_int___ *)
               (((this->m_InstanceIdFromSndobId).t.header)->field0_0x0).parent);
    p_Var1 = (this->m_InstanceIdFromSndobId).t.header;
    (p_Var1->field0_0x0).left = &p_Var1->field0_0x0;
    (((this->m_InstanceIdFromSndobId).t.header)->field0_0x0).parent = (__rb_tree_node_base *)0x0;
    p_Var1 = (this->m_InstanceIdFromSndobId).t.header;
    (p_Var1->field0_0x0).right = &p_Var1->field0_0x0;
    (this->m_InstanceIdFromSndobId).t.node_count = 0;
  }
  free((this->m_InstanceIdFromSndobId).t.header);
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

cHitMan* cBoxX::HitMan() {
  return g_pHitMan;
}

cSoundCacheHandle cBoxX::SoundObject(int lSndObId) {
	int lSndObId;
	Sint32 id;
	
  HitMan__5cBoxX(this);
  return (cSoundCacheHandle)lSndObId;
}

bool cBoxX::Init() {
	ERQTable<snd::VoxHitlist> *pTable;
	
  ERQuickdata *this_00;
  ERQTable_snd__VoxHitlist_ *pVoxHitlist;
  cHitMan *pcVar1;
  cFreshTimer *pcVar2;
  cFreshPlayer *pcVar3;
  cHitTimer *this_01;
  
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
  this_00 = (ERQuickdata *)
            AddRef__16EResourceManagerUiP5EFilei(&_quickdataman.field0_0x0,0xc33db41,(EFile *)0x0,0)
  ;
  this->m_pObjectData = this_00;
  pVoxHitlist = (ERQTable_snd__VoxHitlist_ *)getTable__11ERQuickdataPCc(this_00,"snd::VoxHitlist");
                    /* end of inlined section */
  pcVar1 = (cHitMan *)__builtin_new(0x1084);
  g_pHitMan = __7cHitManPCt8ERQTable1ZQ23snd10VoxHitlist(pcVar1,pVoxHitlist);
  Init__7cHitMan(g_pHitMan);
  LoadEventMappings__5cBoxX(this);
  LoadPatches__5cBoxX(this);
  LoadTracks__5cBoxX(this);
  LoadHitLists__5cBoxX(this);
  pcVar1 = HitMan__5cBoxX(this);
  RegisterSourceDataRequestHandler__7cHitManPFiiPi_b(pcVar1,BoxxGlobalGetSourceParamValue__FiiPi);
  pcVar2 = (cFreshTimer *)__builtin_new(0x20);
  pcVar2 = __11cFreshTimer(pcVar2);
  this->m_pFreshTimer = pcVar2;
  pcVar3 = (cFreshPlayer *)__builtin_new(0x63c);
  pcVar3 = __12cFreshPlayer(pcVar3);
  this->m_pOutdoorFreshPlayer = pcVar3;
  Init__12cFreshPlayerP11cFreshTimer(pcVar3,this->m_pFreshTimer);
  this_01 = (cHitTimer *)__builtin_new(8);
  this->m_pSystemTimer = this_01;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Patch.h */
  *(undefined4 *)this_01 = 1;
  this_01->m_lElapsed = 0;
  Update__9cHitTimer(this_01);
                    /* end of inlined section */
  *(undefined4 *)&this->m_bMusicEnabled = 1;
  *(undefined4 *)&this->m_bSoundEnabled = 1;
  this->m_lTimeOfLastKillAll = 0;
  _g_bBoxXIsInitted = 1;
  return true;
}

void cBoxX::LoadEventMappings() {
	ERQTable<snd::EventMapping> **ppTable;
	ERQTable<snd::EventMapping> *pTable;
	
  undefined1 *puVar1;
  
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  puVar1 = (undefined1 *)getTable__11ERQuickdataPCc(this->m_pObjectData,"snd::EventMapping");
  if (puVar1 == (undefined1 *)0x0) {
    if (this != (cBoxX *)0xffffffd0) {
      this->m_pEventTable = (undefined1 *)0x0;
    }
  }
  else if (this != (cBoxX *)0xffffffd0) {
    this->m_pEventTable = puVar1;
  }
  return;
}

void cBoxX::LoadPatches() {
	ERQTable<snd::HitPatch> **ppTable;
	ERQTable<snd::HitPatch> *pTable;
	ERQTable<snd::Patch> **ppTable;
	ERQTable<snd::Patch> *pTable;
	
  ERQTable_snd__HitPatch_ *pEVar1;
  ERQTable_snd__Patch_ *pEVar2;
  
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  pEVar1 = (ERQTable_snd__HitPatch_ *)
           getTable__11ERQuickdataPCc(this->m_pObjectData,"snd::HitPatch");
  if (pEVar1 == (ERQTable_snd__HitPatch_ *)0x0) {
    if (this != (cBoxX *)0xffffffcc) {
      this->m_pHitPatchTable = (ERQTable_snd__HitPatch_ *)0x0;
    }
  }
  else if (this != (cBoxX *)0xffffffcc) {
    this->m_pHitPatchTable = pEVar1;
  }
  pEVar2 = (ERQTable_snd__Patch_ *)getTable__11ERQuickdataPCc(this->m_pObjectData,"snd::Patch");
  if (pEVar2 == (ERQTable_snd__Patch_ *)0x0) {
    if (this != (cBoxX *)0xffffffc8) {
      this->m_pPatchTable = (ERQTable_snd__Patch_ *)0x0;
    }
  }
  else if (this != (cBoxX *)0xffffffc8) {
    this->m_pPatchTable = pEVar2;
  }
  return;
}

void cBoxX::LoadTracks() {
	ERQTable<snd::Track> **ppTable;
	ERQTable<snd::Track> *pTable;
	
  ERQTable_snd__Track_ *pEVar1;
  
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  pEVar1 = (ERQTable_snd__Track_ *)getTable__11ERQuickdataPCc(this->m_pObjectData,"snd::Track");
  if (pEVar1 == (ERQTable_snd__Track_ *)0x0) {
    if (this != (cBoxX *)0xffffffc4) {
      this->m_pTrackTable = (ERQTable_snd__Track_ *)0x0;
    }
  }
  else if (this != (cBoxX *)0xffffffc4) {
    this->m_pTrackTable = pEVar1;
  }
  return;
}

void cBoxX::LoadHitLists() {
	ERQTable<snd::GlobalHitlist> **ppTable;
	ERQTable<snd::GlobalHitlist> *pTable;
	
  ERQTable_snd__GlobalHitlist_ *pEVar1;
  
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  pEVar1 = (ERQTable_snd__GlobalHitlist_ *)
           getTable__11ERQuickdataPCc(this->m_pObjectData,"snd::GlobalHitlist");
  if (pEVar1 == (ERQTable_snd__GlobalHitlist_ *)0x0) {
    if (this != (cBoxX *)0xffffffc0) {
      this->m_pGlobalHitlistTable = (ERQTable_snd__GlobalHitlist_ *)0x0;
    }
  }
  else if (this != (cBoxX *)0xffffffc0) {
    this->m_pGlobalHitlistTable = pEVar1;
  }
  return;
}

bool cBoxX::Shutdown() {
  cHitMan *pcVar1;
  cHitTimer *pcVar2;
  cFreshPlayer *pcVar3;
  cFreshTimer *this_00;
  
  if (this->m_pFreshTimer == (cFreshTimer *)0x0) {
    pcVar3 = this->m_pOutdoorFreshPlayer;
  }
  else {
    Pause__11cFreshTimer(this->m_pFreshTimer);
    pcVar3 = this->m_pOutdoorFreshPlayer;
  }
  if (pcVar3 == (cFreshPlayer *)0x0) {
    this_00 = this->m_pFreshTimer;
  }
  else {
    Stop__12cFreshPlayer(pcVar3);
    Shutdown__12cFreshPlayer(this->m_pOutdoorFreshPlayer);
    this_00 = this->m_pFreshTimer;
  }
  if (this_00 == (cFreshTimer *)0x0) {
    pcVar3 = this->m_pOutdoorFreshPlayer;
  }
  else {
    Shutdown__11cFreshTimer(this_00);
    if (this->m_pFreshTimer == (cFreshTimer *)0x0) {
      this->m_pFreshTimer = (cFreshTimer *)0x0;
    }
    else {
      ___11cFreshTimer(this->m_pFreshTimer,3);
      this->m_pFreshTimer = (cFreshTimer *)0x0;
    }
    pcVar3 = this->m_pOutdoorFreshPlayer;
  }
  if (pcVar3 != (cFreshPlayer *)0x0) {
    ___12cFreshPlayer(pcVar3,3);
    this->m_pOutdoorFreshPlayer = (cFreshPlayer *)0x0;
  }
  pcVar1 = HitMan__5cBoxX(this);
  if (pcVar1 == (cHitMan *)0x0) {
    pcVar2 = this->m_pSystemTimer;
  }
  else {
    pcVar1 = HitMan__5cBoxX(this);
    Shutdown__7cHitMan(pcVar1);
    if (g_pHitMan != (cHitMan *)0x0) {
      ___7cHitMan(g_pHitMan,3);
    }
    g_pHitMan = (cHitMan *)0x0;
    pcVar2 = this->m_pSystemTimer;
  }
  if (pcVar2 != (cHitTimer *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Patch.h */
    *(undefined4 *)pcVar2 = 0;
    Stop__9cHitTimer(this->m_pSystemTimer);
    _memmanFree__FPv(this->m_pSystemTimer);
                    /* end of inlined section */
    this->m_pSystemTimer = (cHitTimer *)0x0;
  }
  _g_bBoxXIsInitted = 0;
  return true;
}

void cBoxX::Update(Uint32 lArg) {
	cHitTimer *this;
	
  cHitTimer *pcVar1;
  cHitMan *this_00;
  int iVar2;
  
  if (_g_bBoxXIsInitted != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Patch.h */
    pcVar1 = this->m_pSystemTimer;
    if (*(int *)pcVar1 != 0) {
      pcVar1->m_lElapsed = pcVar1->m_lElapsed + 1;
    }
                    /* end of inlined section */
    Update__16cGameModeManager(&this->m_GameModeManager);
    this_00 = HitMan__5cBoxX(this);
    TimerCallback__7cHitMan(this_00);
    if (this->m_pOutdoorFreshPlayer == (cFreshPlayer *)0x0) {
      iVar2 = *(int *)&this->m_bStereoInUse;
    }
    else {
      Update__12cFreshPlayer(this->m_pOutdoorFreshPlayer);
      iVar2 = *(int *)&this->m_bStereoInUse;
    }
    if (iVar2 == 0) {
      iVar2 = this->m_iMusicVolPercent + -9;
      this->m_iMusicVolPercent = iVar2;
      if (iVar2 < 0) {
        this->m_iMusicVolPercent = 0;
      }
    }
    else {
      iVar2 = this->m_iMusicVolPercent + 0xd;
      this->m_iMusicVolPercent = iVar2;
      if (0x2000 < iVar2) {
        this->m_iMusicVolPercent = 0x2000;
      }
    }
    if (*(int *)&this->m_bTVInUse == 0) {
      iVar2 = this->m_iTeleVolPercent + -9;
      this->m_iTeleVolPercent = iVar2;
      if (iVar2 < 0) {
        this->m_iTeleVolPercent = 0;
      }
    }
    else {
      iVar2 = this->m_iTeleVolPercent + 0xd;
      this->m_iTeleVolPercent = iVar2;
      if (0x2000 < iVar2) {
        this->m_iTeleVolPercent = 0x2000;
      }
    }
  }
  return;
}

Sint32 cBoxX::AvailableHitListId() {
	cHitMan *pHitMan;
	int i;
	
  cHitMan *this_00;
  GlobalHitlist *pGVar1;
  int lGlobalHitListId;
  
  lGlobalHitListId = 1;
  this_00 = HitMan__5cBoxX(this);
  do {
    pGVar1 = GlobalHitList__7cHitMani(this_00,lGlobalHitListId);
    if (pGVar1 == (GlobalHitlist *)0x0) {
      return lGlobalHitListId;
    }
    lGlobalHitListId = lGlobalHitListId + 1;
  } while (lGlobalHitListId < 0x800);
  return 0;
}

bool cBoxX::GetInstanceVolPan(Sint32 lInstId, Sint32 &lVol, Sint32 &lPan, cSoundObject *pSndob) {
	cAudioWorldCoord acWorld;
	EVec3 vWorld;
	EVec2 vScreen;
	GameSPL lSplFactor;
	float pan;
	float ypan;
	Sint32 dist;
	float ypan;
	Sint32 dist;
	Sint32 lOldVol;
	
  bool bVar1;
  cAudioInfo *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  cAudioWorldCoord acWorld;
  EVec3 vWorld;
  EVec2 vScreen;
  
  *lVol = 0;
  *lPan = 0;
  if (lInstId < 1) {
    *lVol = 0x400;
    *lPan = 0x200;
    return false;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  if (_5Globs_pEORGlobals->_pPanel == (EPanel *)0x0) {
    return false;
  }
  this_00 = GetAudioInfo__Fv();
  bVar1 = GetObjectPosition__10cAudioInfoiR16cAudioWorldCoord(this_00,lInstId,&acWorld);
  if (((!bVar1) || (acWorld.mX == 0)) || (lVar5 = 0, acWorld.mY == 0)) {
    return false;
  }
  vWorld.field0_0x0.d[0] = (float)acWorld.mX;
  *lVol = 0x400;
  vWorld.field0_0x0.d[1] = (float)acWorld.mY;
  *lPan = 0x200;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vWorld.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
  if (pSndob != (cSoundObject__107_1582 *)0x0) {
    lVar5 = (*(code *)pSndob->__vtable->SetFxLevel)
                      ((int)&pSndob->m_lSoundObjectFlag +
                       (int)*(short *)&pSndob->__vtable->SetFxType,0x39);
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pEORGlobals->__vtable->DestroyInstance)
            ((int)_5Globs_pEORGlobals->_pSelectedSims +
             *(short *)&_5Globs_pEORGlobals->__vtable->GetCursorPosAsFtile + -0x24,&vWorld,&vScreen)
  ;
  fVar6 = vScreen.field0_0x0.d[0] - 0.3;
  if (fVar6 < 0.0) {
    if (fVar6 <= -1.0) {
      *lPan = 0;
      iVar2 = 0x100;
    }
    else {
      *lPan = *lPan + (int)(fVar6 * 512.0);
      iVar2 = *lVol + (int)(fVar6 * 768.0);
    }
LAB_001f7aa4:
    *lVol = iVar2;
                    /* end of inlined section */
  }
  else {
                    /* end of inlined section */
    fVar6 = vScreen.field0_0x0.d[0] - 0.7;
    if (0.0 < fVar6) {
      iVar2 = 0x100;
      if (1.0 <= fVar6) {
        *lPan = 0x400;
      }
      else {
        *lPan = *lPan + (int)(fVar6 * 512.0);
        iVar2 = *lVol - (int)(fVar6 * 768.0);
      }
      goto LAB_001f7aa4;
    }
  }
  if (vScreen.field0_0x0.d[1] < 0.25) {
                    /* end of inlined section */
    if (vScreen.field0_0x0.d[1] <= -0.25) {
      iVar2 = 0x100;
      *lPan = 0x200;
    }
    else {
                    /* end of inlined section */
      fVar6 = (vScreen.field0_0x0.d[1] - 0.25) + (vScreen.field0_0x0.d[1] - 0.25);
      *lPan = *lPan + (int)((float)(*lPan + -0x200) * fVar6);
      iVar2 = *lVol + (int)((float)(*lVol + -0x100) * fVar6);
    }
LAB_001f7bdc:
    *lVol = iVar2;
  }
  else {
                    /* end of inlined section */
    if (1.0 < vScreen.field0_0x0.d[1]) {
                    /* end of inlined section */
      if (4.0 <= vScreen.field0_0x0.d[1]) {
        iVar2 = 0x100;
        *lPan = 0x200;
      }
      else {
                    /* end of inlined section */
        *lPan = *lPan - (int)((float)(*lPan + -0x200) * vScreen.field0_0x0.d[1] * 0.25);
        iVar2 = *lVol - (int)((float)(*lVol + -0x100) * vScreen.field0_0x0.d[1] * 0.25);
      }
      goto LAB_001f7bdc;
    }
  }
  if (lVar5 == 3) {
    iVar2 = *lVol;
    iVar4 = iVar2 * this->m_iMusicVolPercent;
    iVar3 = iVar4 + 0x1fff;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    iVar3 = iVar3 >> 0xd;
    *lVol = iVar3;
    if (iVar3 < 0x180) {
      iVar4 = 0x180;
      if (iVar2 < 0x181) {
        iVar4 = iVar2;
      }
    }
    else {
      if (iVar3 < 0x301) goto LAB_001f7c40;
      iVar4 = 0x300;
    }
    *lVol = iVar4;
  }
LAB_001f7c40:
  if (lVar5 == 1) {
    iVar2 = *lVol * this->m_iTeleVolPercent;
    iVar4 = iVar2 + 0x1fff;
    if (-1 < iVar2) {
      iVar4 = iVar2;
    }
    iVar4 = iVar4 >> 0xd;
    *lVol = iVar4;
    if (iVar4 < 100) {
      iVar2 = 100;
    }
    else {
      if (iVar4 < 0x2ab) {
        return true;
      }
      iVar2 = 0x2aa;
    }
    *lVol = iVar2;
  }
  return true;
}

bool cBoxX::MappedEvent(EventMapping *pEventMapping, Sint32 lSourceId, Sint32 lArg3, Sint32 lArg4) {
	Sint32 lArg2;
	
  bool bVar1;
  int iVar2;
  int lArg3_00;
  int lArg4_00;
  
  if (pEventMapping->alArg[0] == 0) {
    bVar1 = true;
  }
  else {
    iVar2 = pEventMapping->alArg[2];
    if (pEventMapping->alArg[2] == 0) {
      iVar2 = lSourceId;
    }
    lArg3_00 = pEventMapping->alArg[3];
    if (pEventMapping->alArg[3] == 0) {
      lArg3_00 = lArg3;
    }
    lArg4_00 = pEventMapping->alArg[4];
    if (pEventMapping->alArg[4] == 0) {
      lArg4_00 = lArg4;
    }
    iVar2 = Event__5cBoxXiiiii(this,pEventMapping->alArg[0],pEventMapping->alArg[1],iVar2,lArg3_00,
                               lArg4_00);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}

Sint32 cBoxX::Event(Sint32 lEventNum, Sint32 lArg1, Sint32 lArg2, Sint32 lArg3, Sint32 lArg4) {
	cSoundObject *pSndOb;
	cAudioInfo *pInfo;
	cHitMan *this;
	static Sint32 lSimSpeed = -1;
	Sint32 lNewSimSpeed;
	Sint32 lValue;
	Sint32 lInstanceId;
	Sint32 lCreativity;
	Sint32 lSndobId;
	cSoundObject *pSndob;
	Sint32 lVol;
	Sint32 lPan;
	cFreshPlayer *this;
	cFreshPlayer *this;
	__rb_tree_node<pair<const int,int> > *x;
	__rb_tree_iterator<pair<const int,int> > it;
	__rb_tree_iterator<pair<const int,int> > *this;
	__rb_tree_node_base *y;
	Sint32 lRegVal;
	Sint32 lFadeSpeed;
	Sint32 bKillAfterFade;
	cHitTimer *this;
	cGameModeManager *this;
	Sint32 lVolume;
	cHitControlGroup *pControlGroup;
	Sint32 lVolume;
	cHitControlGroup *pControlGroup;
	Sint32 lVolume;
	cHitControlGroup *pControlGroup;
	cSoundObject *pSndob;
	Sint32 lVol;
	Sint32 lPan;
	Sint32 lOutdoorPercentage;
	static int alColumnByHour[24] = {
		/* [0] = */ 12,
		/* [1] = */ 12,
		/* [2] = */ 12,
		/* [3] = */ 12,
		/* [4] = */ 12,
		/* [5] = */ 1,
		/* [6] = */ 2,
		/* [7] = */ 3,
		/* [8] = */ 4,
		/* [9] = */ 4,
		/* [10] = */ 5,
		/* [11] = */ 6,
		/* [12] = */ 6,
		/* [13] = */ 7,
		/* [14] = */ 8,
		/* [15] = */ 9,
		/* [16] = */ 10,
		/* [17] = */ 11,
		/* [18] = */ 11,
		/* [19] = */ 11,
		/* [20] = */ 12,
		/* [21] = */ 12,
		/* [22] = */ 12,
		/* [23] = */ 12
	};
	Sint32 lColumn;
	
  short sVar1;
  __rb_tree_base_iterator _Var2;
  __rb_tree_node_base *p_Var3;
  __rb_tree_iterator_pair_const_int_int___ last;
  cSoundObject__107_1582__vtable *pcVar4;
  bool bVar5;
  cBoxX__vtable *pcVar6;
  cAudioInfo *pcVar7;
  undefined *puVar8;
  cHitMan *pcVar9;
  cSoundObject__167_1004 *pcVar10;
  cSoundObject__167_1004 *pcVar11;
  __rb_tree_base_iterator _Var12;
  code *pcVar13;
  CTGDump *pCVar14;
  cHitControlGroup *pcVar15;
  int iVar16;
  long lVar17;
  cSoundObject__167_1004__vtable *pcVar18;
  cFreshPlayer *pcVar19;
  int iVar20;
  uint lValue;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  cSoundCacheHandle local_110;
  int local_10c;
  int local_108;
  cSoundCacheHandle local_104;
  cSoundCacheHandle local_100;
  int lSndobId;
  cSoundCacheHandle local_f8;
  int local_f4;
  int local_f0;
  cSoundCacheHandle local_ec;
  cSoundCacheHandle local_e8;
  cSoundCacheHandle local_e4;
  __rb_tree_iterator_pair_const_int_int___ it;
  cSoundCacheHandle local_dc;
  cSoundCacheHandle local_d8;
  cSoundCacheHandle local_d4;
  cSoundCacheHandle local_d0;
  cSoundCacheHandle local_cc;
  cSoundCacheHandle local_c8;
  cSoundCacheHandle local_c4;
  cSoundCacheHandle local_c0;
  cSoundCacheHandle local_bc;
  cSoundCacheHandle local_b8;
  cSoundCacheHandle local_b4;
  cSoundCacheHandle local_b0;
  cSoundCacheHandle local_ac;
  cSoundCacheHandle local_a8;
  cSoundCacheHandle local_a4;
  cSoundCacheHandle local_a0;
  cSoundCacheHandle local_9c;
  cSoundCacheHandle local_98;
  cSoundCacheHandle local_94;
  cSoundCacheHandle local_90;
  cSoundCacheHandle local_8c;
  cSoundCacheHandle local_88;
  cSoundCacheHandle local_84;
  cSoundCacheHandle local_80;
  int lVol;
  int lPan;
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
  
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if ((*(int *)&this->m_bSoundEnabled == 0) && (lEventNum != 0x22)) {
    return 1;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/function.h */
                    /* end of inlined section */
  if (_pApp->m_appState != E_APPSTATE_NORMAL) {
    return 1;
  }
  if (_g_bBoxXIsInitted == 0) {
    return 1;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Patch.h */
                    /* end of inlined section */
  local_10c = lArg3;
  local_108 = lArg4;
  CleanupIdleTracks__11cSoundCache(g_pHitMan->m_pSoundCache);
  if (this->m_pOutdoorFreshPlayer == (cFreshPlayer *)0x0) {
    pcVar6 = this->__vtable;
  }
  else {
    Update__12cFreshPlayer(this->m_pOutdoorFreshPlayer);
    pcVar6 = this->__vtable;
  }
  (*(code *)pcVar6[1].Update)((int)&this->m_lKludgeTimerAge + (int)*(short *)&pcVar6[1].cBoxX,0);
  pcVar7 = GetAudioInfo__Fv();
                    /* inlined from c:/eor/src2/games/sims/MSrc/boxx.h */
                    /* end of inlined section */
  if ((this->m_GameModeManager).m_lMode != 5) {
    puVar8 = (undefined *)CurrentSimSpeed__10cAudioInfo(pcVar7);
    if (puVar8 != lSimSpeed_1518) {
      if ((int)puVar8 < 0x3c1) {
        lValue = (int)puVar8 < 0x321 ^ 1;
      }
      else {
        lValue = 2;
      }
      lSimSpeed_1518 = puVar8;
      pcVar9 = HitMan__5cBoxX(this);
      SetRegister__7cHitManii(pcVar9,100,lValue);
    }
  }
  if (lEventNum == 0x17) {
    if (lArg1 == 0) {
      return 0;
    }
    KillSource__5cBoxXi(this,lArg1);
    return 0;
  }
  switch(lEventNum) {
  case 1:
    if (*(int *)&this->m_bAppInFocus == 0) {
      return 0;
    }
    if (*(int *)&this->m_bPaused != 0) {
      return 0;
    }
    lSndobId = lArg1;
    local_100 = SoundObject__5cBoxXi(this,lArg1);
    pcVar10 = GetObject__17cSoundCacheHandle(&local_100);
    if (pcVar10 == (cSoundObject__167_1004 *)0x0) {
      return 0;
    }
    lVar17 = (*(code *)pcVar10->__vtable->SetVolume)
                       ((int)&pcVar10->m_lSoundObjectFlag + (int)*(short *)&pcVar10->__vtable->Init)
    ;
    if (lVar17 == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/multimap.h */
      erase__t7rb_tree5ZCiZt4pair2ZCiZiZt9select1st1Zt4pair2ZCiZiZt4less1ZCiZt23__malloc_alloc_template1i0RCi
                (&(this->m_InstanceIdFromSndobId).t,&lSndobId);
                    /* end of inlined section */
    }
    bVar5 = CheckPriority__5cBoxXi(this,lSndobId);
    if (!bVar5) {
      return 0;
    }
    local_f8 = SoundObject__5cBoxXi(this,lArg1);
    pcVar11 = GetObject__17cSoundCacheHandle(&local_f8);
    lVar17 = (*(code *)pcVar11->__vtable->RegisterVal)
                       ((int)&pcVar11->m_lSoundObjectFlag +
                        (int)*(short *)&pcVar11->__vtable->SetRegister);
    if (lVar17 == 2) {
      if (lArg2 == 0) {
        pcVar18 = pcVar10->__vtable;
        goto LAB_001f80a0;
      }
      AddToInstanceMap__5cBoxXii(this,lSndobId,lArg2);
      GetSndobVolPan__5cBoxXiRiT2(this,lSndobId,&local_f4,&local_f0);
      (*(code *)pcVar11->__vtable[1]._dyncastimpl)
                ((int)&pcVar11->m_lSoundObjectFlag + (int)*(short *)(pcVar11->__vtable + 1),lArg2,
                 local_10c,local_108);
      (*(code *)pcVar11->__vtable[1].IsPlaying)
                ((int)&pcVar11->m_lSoundObjectFlag + (int)*(short *)&pcVar11->__vtable[1].Update,
                 local_f4);
      (*(code *)pcVar11->__vtable[1].RegisterVal)
                ((int)&pcVar11->m_lSoundObjectFlag +
                 (int)*(short *)&pcVar11->__vtable[1].SetRegister,local_f0);
      (*(code *)pcVar11->__vtable[1].AddRef)
                ((int)&pcVar11->m_lSoundObjectFlag + (int)*(short *)&pcVar11->__vtable[1].PlayPause)
      ;
    }
    else {
      pcVar18 = pcVar10->__vtable;
LAB_001f80a0:
      (*(code *)pcVar18[1]._dyncastimpl)
                ((int)&pcVar10->m_lSoundObjectFlag + (int)*(short *)(pcVar18 + 1),lArg2,local_10c,
                 local_108);
      (*(code *)pcVar10->__vtable[1].AddRef)
                ((int)&pcVar10->m_lSoundObjectFlag + (int)*(short *)&pcVar10->__vtable[1].PlayPause)
      ;
    }
    if (2 < lSndobId - 0x777U) {
      return 0;
    }
    if (lArg2 < 1) {
      return 0;
    }
    pcVar7 = GetAudioInfo__Fv();
    iVar16 = GetObjectData__10cAudioInfoiQ210cAudioInfo7DataIdx(pcVar7,lArg2,kAI_RoomSize);
    if (iVar16 < 0x10) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Freshness.h */
                    /* end of inlined section */
      this->m_pOutdoorFreshPlayer->m_lEffectsLevel = 0x14;
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Freshness.h */
                    /* end of inlined section */
      this->m_pOutdoorFreshPlayer->m_lEffectsLevel = 0;
    }
    break;
  case 2:
    local_ec = SoundObject__5cBoxXi(this,lArg1);
    pcVar10 = GetObject__17cSoundCacheHandle(&local_ec);
    if (pcVar10 == (cSoundObject__167_1004 *)0x0) {
      return 0;
    }
    iVar16 = (int)*(short *)&pcVar10->__vtable[1].Release;
    pcVar13 = (code *)pcVar10->__vtable[1].Shutdown;
    goto LAB_001f87bc;
  case 3:
    local_e8 = SoundObject__5cBoxXi(this,lArg1);
    pcVar10 = GetObject__17cSoundCacheHandle(&local_e8);
    if (pcVar10 == (cSoundObject__167_1004 *)0x0) {
      return 0;
    }
    iVar16 = (int)*(short *)&pcVar10->__vtable[1].Init;
    pcVar13 = (code *)pcVar10->__vtable[1].SetVolume;
    goto LAB_001f87bc;
  case 4:
    local_e4 = SoundObject__5cBoxXi(this,lArg1);
    pcVar10 = GetObject__17cSoundCacheHandle(&local_e4);
    if (pcVar10 != (cSoundObject__167_1004 *)0x0) {
      (*(code *)pcVar10->__vtable->Shutdown)
                ((int)&pcVar10->m_lSoundObjectFlag + (int)*(short *)&pcVar10->__vtable->Release,
                 lArg2,local_10c,local_108,0);
      return 0;
    }
    break;
  case 5:
    local_dc = SoundObject__5cBoxXi(this,lArg1);
    pcVar10 = GetObject__17cSoundCacheHandle(&local_dc);
    iVar16 = (int)*(short *)&pcVar10->__vtable[1].Update;
    pcVar13 = (code *)pcVar10->__vtable[1].IsPlaying;
    goto LAB_001f83bc;
  case 6:
    local_d8 = SoundObject__5cBoxXi(this,lArg1);
    pcVar10 = GetObject__17cSoundCacheHandle(&local_d8);
    iVar16 = (int)*(short *)&pcVar10->__vtable[1].IsPaused;
    pcVar13 = (code *)pcVar10->__vtable[1].SndobRegisterSet;
    goto LAB_001f83bc;
  case 7:
    local_d4 = SoundObject__5cBoxXi(this,lArg1);
    pcVar10 = GetObject__17cSoundCacheHandle(&local_d4);
    iVar16 = (int)*(short *)&pcVar10->__vtable[1].SetRegister;
    pcVar13 = (code *)pcVar10->__vtable[1].RegisterVal;
    goto LAB_001f83bc;
  case 8:
    local_d0 = SoundObject__5cBoxXi(this,lArg1);
    GetObject__17cSoundCacheHandle(&local_d0);
    break;
  case 9:
    local_cc = SoundObject__5cBoxXi(this,lArg1);
    pcVar10 = GetObject__17cSoundCacheHandle(&local_cc);
    iVar16 = (int)*(short *)&pcVar10->__vtable[1].SetPitch;
    pcVar13 = (code *)pcVar10->__vtable[1].SetPan;
    goto LAB_001f83bc;
  case 10:
    local_c8 = SoundObject__5cBoxXi(this,lArg1);
    pcVar10 = GetObject__17cSoundCacheHandle(&local_c8);
    iVar16 = (int)*(short *)&pcVar10->__vtable[1].Pause;
    pcVar13 = (code *)pcVar10->__vtable[1].Unpause;
LAB_001f83bc:
    (*pcVar13)((int)&pcVar10->m_lSoundObjectFlag + iVar16,lArg2);
    break;
  case 0xb:
    local_c4 = SoundObject__5cBoxXi(this,lArg1);
    pcVar10 = GetObject__17cSoundCacheHandle(&local_c4);
    iVar16 = (int)*(short *)&pcVar10->__vtable[1].WantsViewChangeNotifications;
    pcVar13 = (code *)pcVar10->__vtable[1].Play;
    goto LAB_001f87bc;
  case 0xc:
    local_c0 = SoundObject__5cBoxXi(this,lArg1);
    pcVar10 = GetObject__17cSoundCacheHandle(&local_c0);
    iVar16 = (int)*(short *)&pcVar10->__vtable[1].PlayPause;
    pcVar13 = (code *)pcVar10->__vtable[1].AddRef;
    goto LAB_001f87bc;
  case 0xd:
    local_bc = SoundObject__5cBoxXi(this,lArg1);
    pcVar10 = GetObject__17cSoundCacheHandle(&local_bc);
    iVar16 = (int)*(short *)&pcVar10->__vtable[1].Stop;
    pcVar13 = (code *)pcVar10->__vtable[1].Kill;
    goto LAB_001f87bc;
  case 0xe:
    local_b8 = SoundObject__5cBoxXi(this,lArg1);
    pcVar10 = GetObject__17cSoundCacheHandle(&local_b8);
    iVar16 = (int)*(short *)&pcVar10->__vtable[1].SetFxType;
    pcVar13 = (code *)pcVar10->__vtable[1].SetFxLevel;
    goto LAB_001f87bc;
  case 0xf:
    local_b4 = SoundObject__5cBoxXi(this,lArg1);
    pcVar10 = GetObject__17cSoundCacheHandle(&local_b4);
    iVar16 = (int)*(short *)&pcVar10->__vtable[1].Load;
    pcVar13 = (code *)pcVar10->__vtable[1].Unload;
    goto LAB_001f87bc;
  case 0x10:
    local_b0 = SoundObject__5cBoxXi(this,lArg1);
    pcVar10 = GetObject__17cSoundCacheHandle(&local_b0);
    iVar16 = (int)*(short *)&pcVar10->__vtable[1].Cache;
    pcVar13 = (code *)pcVar10->__vtable[1].Uncache;
    goto LAB_001f87bc;
  case 0x11:
    local_ac = SoundObject__5cBoxXi(this,lArg1);
    pcVar10 = GetObject__17cSoundCacheHandle(&local_ac);
    sVar1 = *(short *)&pcVar10->__vtable->Stop;
    pcVar13 = (code *)pcVar10->__vtable->Kill;
    iVar16 = local_10c;
    goto LAB_001f8508;
  case 0x12:
    local_a8 = SoundObject__5cBoxXi(this,lArg1);
    pcVar10 = GetObject__17cSoundCacheHandle(&local_a8);
    iVar16 = local_10c;
    if (pcVar10 == (cSoundObject__167_1004 *)0x0) {
      return 0;
    }
    iVar20 = 100;
    if (lArg2 != 0) {
      iVar20 = lArg2;
    }
    (*(code *)pcVar10->__vtable->Kill)
              ((int)&pcVar10->m_lSoundObjectFlag + (int)*(short *)&pcVar10->__vtable->Stop,0x28,0,0)
    ;
    (*(code *)pcVar10->__vtable->Kill)
              ((int)&pcVar10->m_lSoundObjectFlag + (int)*(short *)&pcVar10->__vtable->Stop,0x29,0x13
               ,0);
    (*(code *)pcVar10->__vtable->Kill)
              ((int)&pcVar10->m_lSoundObjectFlag + (int)*(short *)&pcVar10->__vtable->Stop,0x2a,
               iVar20,0);
    pcVar18 = pcVar10->__vtable;
    pcVar10[2].m_SndobRegisterSet.m_lDuckpri = (uint)(iVar16 != 0);
    (*(code *)pcVar18->Kill)
              ((int)&pcVar10->m_lSoundObjectFlag + (int)*(short *)&pcVar18->Stop,0x2d,1,0);
  case 0x13:
    local_a4 = SoundObject__5cBoxXi(this,0x104);
    pcVar10 = GetObject__17cSoundCacheHandle(&local_a4);
    if (pcVar10 == (cSoundObject__167_1004 *)0x0) {
      return 0;
    }
    (*(code *)pcVar10->__vtable[2].SetInstanceId)
              ((int)&pcVar10->m_lSoundObjectFlag +
               (int)*(short *)&pcVar10->__vtable[2].SetSoundObjectId);
    local_a0 = SoundObject__5cBoxXi(this,0x10d);
    pcVar10 = GetObject__17cSoundCacheHandle(&local_a0);
    if (pcVar10 == (cSoundObject__167_1004 *)0x0) {
      return 0;
    }
    (*(code *)pcVar10->__vtable[2].SetInstanceId)
              ((int)&pcVar10->m_lSoundObjectFlag +
               (int)*(short *)&pcVar10->__vtable[2].SetSoundObjectId);
    local_9c = SoundObject__5cBoxXi(this,0x10e);
    pcVar10 = GetObject__17cSoundCacheHandle(&local_9c);
    if (pcVar10 == (cSoundObject__167_1004 *)0x0) {
      return 0;
    }
    (*(code *)pcVar10->__vtable[2].SetInstanceId)
              ((int)&pcVar10->m_lSoundObjectFlag +
               (int)*(short *)&pcVar10->__vtable[2].SetSoundObjectId);
    local_98 = SoundObject__5cBoxXi(this,0x118);
    pcVar10 = GetObject__17cSoundCacheHandle(&local_98);
    if (pcVar10 == (cSoundObject__167_1004 *)0x0) {
      return 0;
    }
    (*(code *)pcVar10->__vtable[2].SetInstanceId)
              ((int)&pcVar10->m_lSoundObjectFlag +
               (int)*(short *)&pcVar10->__vtable[2].SetSoundObjectId);
    local_94 = SoundObject__5cBoxXi(this,0x1a19);
    pcVar10 = GetObject__17cSoundCacheHandle(&local_94);
    if (pcVar10 == (cSoundObject__167_1004 *)0x0) {
      return 0;
    }
    (*(code *)pcVar10->__vtable[2].SetInstanceId)
              ((int)&pcVar10->m_lSoundObjectFlag +
               (int)*(short *)&pcVar10->__vtable[2].SetSoundObjectId);
    local_90 = SoundObject__5cBoxXi(this,0x1a1a);
    pcVar10 = GetObject__17cSoundCacheHandle(&local_90);
    if (pcVar10 == (cSoundObject__167_1004 *)0x0) {
      return 0;
    }
    (*(code *)pcVar10->__vtable[2].SetInstanceId)
              ((int)&pcVar10->m_lSoundObjectFlag +
               (int)*(short *)&pcVar10->__vtable[2].SetSoundObjectId);
    local_8c = SoundObject__5cBoxXi(this,0x1a1b);
    pcVar10 = GetObject__17cSoundCacheHandle(&local_8c);
    if (pcVar10 == (cSoundObject__167_1004 *)0x0) {
      return 0;
    }
    (*(code *)pcVar10->__vtable[2].SetInstanceId)
              ((int)&pcVar10->m_lSoundObjectFlag +
               (int)*(short *)&pcVar10->__vtable[2].SetSoundObjectId);
    local_88 = SoundObject__5cBoxXi(this,0x1a1c);
    pcVar10 = GetObject__17cSoundCacheHandle(&local_88);
    if (pcVar10 == (cSoundObject__167_1004 *)0x0) {
      return 0;
    }
    (*(code *)pcVar10->__vtable[2].SetInstanceId)
              ((int)&pcVar10->m_lSoundObjectFlag +
               (int)*(short *)&pcVar10->__vtable[2].SetSoundObjectId);
    local_84 = SoundObject__5cBoxXi(this,0x1a1d);
    pcVar10 = GetObject__17cSoundCacheHandle(&local_84);
    if (pcVar10 == (cSoundObject__167_1004 *)0x0) {
      return 0;
    }
    iVar16 = (int)*(short *)&pcVar10->__vtable[2].SetSoundObjectId;
    pcVar13 = (code *)pcVar10->__vtable[2].SetInstanceId;
LAB_001f87bc:
    (*pcVar13)((int)&pcVar10->m_lSoundObjectFlag + iVar16);
    break;
  case 0x14:
    pCVar14 = __ls__7CTGDumpPCc(&ctgDump,"\n");
    pCVar14 = __ls__7CTGDumpPCc(pCVar14,"cBoxX::kKillAll");
    __ls__7CTGDumpPCc(pCVar14,"\n");
    KillAll__7cHitMan(g_pHitMan);
                    /* inlined from c:/eor/src2/games/sims/MSrc/tree.h */
    last.field0_0x0.node = (__rb_tree_base_iterator)(this->m_InstanceIdFromSndobId).t.header;
    erase__t7rb_tree5ZCiZt4pair2ZCiZiZt9select1st1Zt4pair2ZCiZiZt4less1ZCiZt23__malloc_alloc_template1i0Gt18__rb_tree_iterator1Zt4pair2ZCiZiT1
              (&(this->m_InstanceIdFromSndobId).t,
               (__rb_tree_iterator_pair_const_int_int___)
               ((__rb_tree_base_iterator *)((int)last.field0_0x0.node + 8))->node,last);
                    /* end of inlined section */
    Stop__12cFreshPlayer(this->m_pOutdoorFreshPlayer);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Patch.h */
                    /* end of inlined section */
    this->m_lTimeOfLastKillAll = this->m_pSystemTimer->m_lElapsed;
    break;
  case 0x15:
    *(undefined4 *)&this->m_bPaused = 1;
    Pause__5cBoxX(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/boxx.h */
                    /* end of inlined section */
    if ((this->m_GameModeManager).m_lMode != 0) {
      return 0;
    }
    pcVar19 = this->m_pOutdoorFreshPlayer;
    goto LAB_001f88ec;
  case 0x16:
    *(undefined4 *)&this->m_bPaused = 0;
    if (*(int *)&this->m_bAppInFocus == 0) {
      return 0;
    }
    Unpause__5cBoxX(this);
    pcVar19 = this->m_pOutdoorFreshPlayer;
    goto LAB_001f8994;
  case 0x19:
    *(uint *)&this->m_bAppInFocus = (uint)(lArg1 != 0);
    if (lArg1 != 0) {
      if (*(int *)&this->m_bPaused == 0) {
        Unpause__5cBoxX(this);
        SetPause__12cFreshPlayerb(this->m_pOutdoorFreshPlayer,false);
                    /* inlined from c:/eor/src2/games/sims/MSrc/boxx.h */
        iVar16 = (this->m_GameModeManager).m_lMode;
      }
      else {
        iVar16 = (this->m_GameModeManager).m_lMode;
      }
                    /* end of inlined section */
      if (iVar16 == 3) {
        Unpause__5cBoxX(this);
      }
      Unpause__16cGameModeManager(&this->m_GameModeManager);
      return 0;
    }
    Pause__7cHitMan(g_pHitMan);
                    /* inlined from c:/eor/src2/games/sims/MSrc/boxx.h */
                    /* end of inlined section */
    if ((this->m_GameModeManager).m_lMode != 0) {
      return 0;
    }
    pcVar19 = this->m_pOutdoorFreshPlayer;
LAB_001f88ec:
    SetPause__12cFreshPlayerb(pcVar19,true);
    break;
  case 0x1e:
    KillSource__5cBoxXi(this,lArg2);
    local_80 = SoundObject__5cBoxXi(this,lArg1);
    pcVar10 = GetObject__17cSoundCacheHandle(&local_80);
    AddToInstanceMap__5cBoxXii(this,lArg1,lArg2);
    GetSndobVolPan__5cBoxXiRiT2(this,lArg1,&lVol,&lPan);
    (*(code *)pcVar10->__vtable[1]._dyncastimpl)
              ((int)&pcVar10->m_lSoundObjectFlag + (int)*(short *)(pcVar10->__vtable + 1),lArg2,
               local_10c,local_108);
    (*(code *)pcVar10->__vtable[1].IsPlaying)
              ((int)&pcVar10->m_lSoundObjectFlag + (int)*(short *)&pcVar10->__vtable[1].Update,lVol)
    ;
    (*(code *)pcVar10->__vtable[1].RegisterVal)
              ((int)&pcVar10->m_lSoundObjectFlag + (int)*(short *)&pcVar10->__vtable[1].SetRegister,
               lPan);
    if ((*(int *)&this->m_bPaused == 0) && (*(int *)&this->m_bAppInFocus != 0)) {
      (*(code *)pcVar10->__vtable[1].AddRef)
                ((int)&pcVar10->m_lSoundObjectFlag + (int)*(short *)&pcVar10->__vtable[1].PlayPause)
      ;
    }
    break;
  case 0x20:
                    /* inlined from c:/eor/src2/games/sims/MSrc/multimap.h */
    _Var2.node = (__rb_tree_node_base *)(this->m_InstanceIdFromSndobId).t.header;
    it.field0_0x0.node = (__rb_tree_base_iterator)(_Var2.node)->left;
                    /* end of inlined section */
    if (it.field0_0x0.node != (__rb_tree_base_iterator)_Var2.node) {
      do {
                    /* end of inlined section */
        if (*(int *)((int)it.field0_0x0.node + 0x14) == lArg1) {
                    /* end of inlined section */
          UpdateSndobVolPan__5cBoxXi(this,*(int *)((int)it.field0_0x0.node + 0x10));
                    /* inlined from c:/eor/src2/games/sims/MSrc/tree.h */
          _Var12.node = *(__rb_tree_node_base **)((int)it.field0_0x0.node + 0xc);
        }
        else {
          _Var12.node = *(__rb_tree_node_base **)((int)it.field0_0x0.node + 0xc);
        }
        if (_Var12.node == (__rb_tree_node_base *)0x0) {
          _Var12.node = *(__rb_tree_node_base **)((int)it.field0_0x0.node + 4);
          if (it.field0_0x0.node == (__rb_tree_base_iterator)(_Var12.node)->right) {
            do {
              it.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var12.node;
              _Var12.node = *(__rb_tree_node_base **)((int)it.field0_0x0.node + 4);
            } while (it.field0_0x0.node == (__rb_tree_base_iterator)(_Var12.node)->right);
          }
          if (*(__rb_tree_node_base **)((int)it.field0_0x0.node + 0xc) != _Var12.node) {
            it.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var12.node;
          }
        }
        else {
          p_Var3 = (_Var12.node)->left;
          while (it.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var12.node,
                p_Var3 != (__rb_tree_node_base *)0x0) {
            _Var12.node = (_Var12.node)->left;
            p_Var3 = (_Var12.node)->left;
          }
        }
                    /* end of inlined section */
      } while (it.field0_0x0.node != (__rb_tree_base_iterator)_Var2.node);
      return 0;
    }
    break;
  case 0x21:
    UpdateAllSndobVolPan__5cBoxX(this);
    UpdateNiteLoop__5cBoxX(this);
    iVar16 = OutdoorTileRatio__10cAudioInfo(pcVar7);
    pcVar9 = HitMan__5cBoxX(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Patch.h */
                    /* end of inlined section */
    if ((pcVar9->m_lPauseRefs != 0) || (iVar16 < 0x1e)) {
      iVar16 = 0;
    }
    SetYPos__12cFreshPlayeri(this->m_pOutdoorFreshPlayer,iVar16 * 10);
    iVar16 = GetObjectData__10cAudioInfoiQ210cAudioInfo7DataIdx(pcVar7,0,kAI_Hour);
    SetXPos__12cFreshPlayeri
              (this->m_pOutdoorFreshPlayer,(*(int *)(alColumnByHour_1549 + iVar16 * 4) * 1000) / 0xe
              );
    break;
  case 0x22:
    *(uint *)&this->m_bSoundEnabled = (uint)(lArg1 != 0);
    if (lArg1 == 0) {
      KillAll__7cHitMan(g_pHitMan);
      return 0;
    }
    break;
  case 0x23:
    *(uint *)&this->m_bMusicEnabled = (uint)(lArg1 != 0);
    break;
  case 0x24:
    SetMode__16cGameModeManageri(&this->m_GameModeManager,lArg1);
    UpdateNiteLoop__5cBoxX(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/boxx.h */
    iVar16 = (this->m_GameModeManager).m_lMode;
                    /* end of inlined section */
    if (iVar16 == 0) {
      Play__12cFreshPlayer(this->m_pOutdoorFreshPlayer);
      SetPause__12cFreshPlayerb
                (this->m_pOutdoorFreshPlayer,SUB41(*(undefined4 *)&this->m_bPaused,0));
      return 0;
    }
                    /* end of inlined section */
    if (iVar16 != 3) {
      Stop__12cFreshPlayer(this->m_pOutdoorFreshPlayer);
      return 0;
    }
    SetYPos__12cFreshPlayeri(this->m_pOutdoorFreshPlayer,1000);
    SetXPos__12cFreshPlayeri(this->m_pOutdoorFreshPlayer,500);
    Play__12cFreshPlayer(this->m_pOutdoorFreshPlayer);
    pcVar19 = this->m_pOutdoorFreshPlayer;
LAB_001f8994:
    SetPause__12cFreshPlayerb(pcVar19,false);
    break;
  case 0x25:
    this->m_lRawSfxVolume = lArg1;
    iVar16 = kalVolumeCurveValueSFX[lArg1];
    pcVar9 = HitMan__5cBoxX(this);
    pcVar15 = ControlGroup__7cHitMani(pcVar9,1);
    pcVar4 = (pcVar15->field0_0x0).__vtable;
    (*(code *)pcVar4[1].IsPlaying)
              ((int)&(pcVar15->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar4[1].Update,
               iVar16);
    SetVolume__12cFreshPlayeri(this->m_pOutdoorFreshPlayer,iVar16);
    break;
  case 0x26:
    this->m_lRawMusicVolume = lArg1;
    iVar16 = kalVolumeCurveValueMusic[lArg1];
    pcVar9 = HitMan__5cBoxX(this);
    iVar20 = 2;
    goto LAB_001f8a60;
  case 0x27:
    this->m_lRawVoxVolume = lArg1;
    iVar16 = kalVolumeCurveValueSFX[lArg1];
    pcVar9 = HitMan__5cBoxX(this);
    iVar20 = 3;
LAB_001f8a60:
    pcVar15 = ControlGroup__7cHitMani(pcVar9,iVar20);
    pcVar4 = (pcVar15->field0_0x0).__vtable;
    (*(code *)pcVar4[1].IsPlaying)
              ((int)&(pcVar15->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar4[1].Update,
               iVar16);
    break;
  case 0x28:
    *(int *)lArg1 = this->m_lRawSfxVolume;
    break;
  case 0x29:
    *(int *)lArg1 = this->m_lRawMusicVolume;
    break;
  case 0x2a:
    *(int *)lArg1 = this->m_lRawVoxVolume;
    break;
  case 0x2b:
    local_110 = SoundObject__5cBoxXi(this,0x772);
    pcVar10 = GetObject__17cSoundCacheHandle(&local_110);
    if (pcVar10 == (cSoundObject__167_1004 *)0x0) {
      return 0;
    }
    GetInstanceVolPan__5cBoxXiRiT2P12cSoundObject
              (this,lArg2,(int *)((uint)&local_110 | 4),(int *)((uint)&local_110 | 8),
               (cSoundObject__107_1582 *)pcVar10);
    (*(code *)pcVar10->__vtable->Uncache)
              ((int)&pcVar10->m_lSoundObjectFlag + (int)*(short *)&pcVar10->__vtable->Cache,lArg2,
               local_10c,local_108);
    lVar17 = (*(code *)pcVar10->__vtable->SndobRegisterSet)
                       ((int)&pcVar10->m_lSoundObjectFlag +
                        (int)*(short *)&pcVar10->__vtable->IsPaused);
    if (0 < lVar17) {
      AddUniquelyToInstanceMap__5cBoxXii(this,0x772,(int)lVar17);
    }
    pcVar7 = GetAudioInfo__Fv();
    lArg2 = GetObjectData__10cAudioInfoiQ210cAudioInfo7DataIdx(pcVar7,lArg2,kAI_CreativitySkill);
    local_104 = SoundObject__5cBoxXi(this,0x773);
    pcVar10 = GetObject__17cSoundCacheHandle((cSoundCacheHandle *)((uint)&local_110 | 0xc));
    if (pcVar10 == (cSoundObject__167_1004 *)0x0) {
      return 0;
    }
    sVar1 = *(short *)&pcVar10->__vtable->Cache;
    pcVar13 = (code *)pcVar10->__vtable->Uncache;
    iVar16 = 0;
LAB_001f8508:
    (*pcVar13)((int)&pcVar10->m_lSoundObjectFlag + (int)sVar1,lArg2,iVar16,0);
    break;
  case 0x2c:
    _g_bDebugEventsOn = 1;
    break;
  case 0x2d:
    _g_bDebugEventsOn = 0;
    break;
  case 0x2e:
    _g_bDebugSamplesOn = 1;
    break;
  case 0x2f:
    _g_bDebugSamplesOn = 0;
    break;
  case 0x30:
    _g_bDebugTracksOn = 1;
    break;
  case 0x31:
    _g_bDebugTracksOn = 0;
    break;
  case 0x68:
    Shutdown__5cBoxX(this);
    Init__5cBoxX(this);
  }
  return 0;
}

__rb_tree_iterator<pair<const int,int> > cBoxX::FindSndobInstancePair(Sint32 lSndobId, Sint32 lInstanceId) {
	multimap<const int,int,less<const int>,__malloc_alloc_template<0> > *this;
	__rb_tree_iterator<pair<const int,int> > it;
	int lInst;
	__rb_tree_iterator<pair<const int,int> > *this;
	__rb_tree_node_base *y;
	
  __rb_tree_node_base *p_Var1;
  __rb_tree_node_base *p_Var2;
  __rb_tree_iterator_pair_const_int_int___ _Var3;
  __rb_tree_base_iterator _Var4;
  int local_60;
  __rb_tree_iterator_pair_const_int_int___ it;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/multimap.h */
  local_60 = lSndobId;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/multimap.h */
  it = lower_bound__t7rb_tree5ZCiZt4pair2ZCiZiZt9select1st1Zt4pair2ZCiZiZt4less1ZCiZt23__malloc_alloc_template1i0RCi
                 (&(this->m_InstanceIdFromSndobId).t,&local_60);
  _Var3 = upper_bound__t7rb_tree5ZCiZt4pair2ZCiZiZt9select1st1Zt4pair2ZCiZiZt4less1ZCiZt23__malloc_alloc_template1i0RCi
                    (&(this->m_InstanceIdFromSndobId).t,&local_60);
  while( true ) {
                    /* end of inlined section */
    if (it.field0_0x0.node == _Var3.field0_0x0.node) {
                    /* end of inlined section */
      return (__rb_tree_base_iterator)
             (__rb_tree_node_base *)(this->m_InstanceIdFromSndobId).t.header;
    }
                    /* end of inlined section */
    if (((__rb_tree_node_base *)((int)it.field0_0x0.node + 0x10))->parent ==
        (__rb_tree_node_base *)lInstanceId) break;
                    /* inlined from c:/eor/src2/games/sims/MSrc/tree.h */
    p_Var1 = *(__rb_tree_node_base **)((int)it.field0_0x0.node + 0xc);
    if (p_Var1 == (__rb_tree_node_base *)0x0) {
      _Var4.node = *(__rb_tree_node_base **)((int)it.field0_0x0.node + 4);
      if (it.field0_0x0.node == (__rb_tree_base_iterator)(_Var4.node)->right) {
        do {
          it.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var4.node;
          _Var4.node = *(__rb_tree_node_base **)((int)it.field0_0x0.node + 4);
        } while (it.field0_0x0.node == (__rb_tree_base_iterator)(_Var4.node)->right);
      }
      if (*(__rb_tree_node_base **)((int)it.field0_0x0.node + 0xc) != _Var4.node) {
        it.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var4.node;
      }
    }
    else {
      p_Var2 = p_Var1->left;
      while (it.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)p_Var1,
            p_Var2 != (__rb_tree_node_base *)0x0) {
        p_Var1 = p_Var1->left;
        p_Var2 = p_Var1->left;
      }
    }
  }
  return (__rb_tree_base_iterator)it.field0_0x0.node;
}

bool cBoxX::IsInInstanceMap(Sint32 lSndobId, Sint32 lInstanceId) {
	__rb_tree_node<pair<const int,int> > *x;
	
  __rb_tree_iterator_pair_const_int_int___ _Var1;
  
  _Var1 = FindSndobInstancePair__5cBoxXii(this,lSndobId,lInstanceId);
                    /* inlined from c:/eor/src2/games/sims/MSrc/tree.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/tree.h */
                    /* end of inlined section */
  return _Var1.field0_0x0.node != (__rb_tree_node_base *)(this->m_InstanceIdFromSndobId).t.header;
}

void cBoxX::AddToInstanceMap(Sint32 lSndobId, Sint32 lInstanceId) {
	pair<const int,int> p;
	
  bool bVar1;
  pair_const_int_int_ p;
  
  bVar1 = IsInInstanceMap__5cBoxXii(this,lSndobId,lInstanceId);
  if (!bVar1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Pair.h */
    p.first = lSndobId;
    p.second = lInstanceId;
    insert_equal__t7rb_tree5ZCiZt4pair2ZCiZiZt9select1st1Zt4pair2ZCiZiZt4less1ZCiZt23__malloc_alloc_template1i0RCt4pair2ZCiZi
              (&(this->m_InstanceIdFromSndobId).t,&p);
                    /* end of inlined section */
  }
  return;
}

void cBoxX::AddUniquelyToInstanceMap(Sint32 lSndobId, Sint32 lInstanceId) {
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  int local_40 [4];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/multimap.h */
  local_40[0] = lSndobId;
  erase__t7rb_tree5ZCiZt4pair2ZCiZiZt9select1st1Zt4pair2ZCiZiZt4less1ZCiZt23__malloc_alloc_template1i0RCi
            (&(this->m_InstanceIdFromSndobId).t,local_40);
                    /* end of inlined section */
  AddToInstanceMap__5cBoxXii(this,local_40[0],lInstanceId);
  return;
}

void cBoxX::RemoveFromInstanceMap(Sint32 lSndobId, Sint32 lInstanceId) {
	__rb_tree_iterator<pair<const int,int> > it;
	multimap<const int,int,less<const int>,__malloc_alloc_template<0> > *this;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const int,int> > *x;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *&leftmost;
	__rb_tree_node_base *&rightmost;
	__rb_tree_node_base *x_parent;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	__rb_tree_color_type &a;
	__rb_tree_color_type tmp;
	__rb_tree_node_base *x;
	__rb_tree_node_base *x;
	__rb_tree_node_base *w;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	__rb_tree_node_base *w;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	
  __rb_tree_iterator_pair_const_int_int___ _Var1;
  __rb_tree_base_iterator _Var2;
  int iVar3;
  __rb_tree_node_base **pp_Var4;
  __rb_tree_node_base *p_Var5;
  __rb_tree_node_base *p_Var6;
  __rb_tree_base_iterator _Var7;
  __rb_tree_node_base **pp_Var8;
  __rb_tree_node_base *p_Var9;
  __rb_tree_node_base *p_Var10;
  __rb_tree_iterator_pair_const_int_int___ pAddress;
  __rb_tree_node_base **pp_Var11;
  
  _Var1 = FindSndobInstancePair__5cBoxXii(this,lSndobId,lInstanceId);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/tree.h */
  _Var7.node = (__rb_tree_node_base *)(this->m_InstanceIdFromSndobId).t.header;
                    /* end of inlined section */
  if (_Var1.field0_0x0.node == (__rb_tree_base_iterator)_Var7.node) {
    return;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/multimap.h */
  pp_Var8 = &(_Var7.node)->right;
  p_Var10 = *(__rb_tree_node_base **)((int)_Var1.field0_0x0.node + 8);
  pp_Var11 = &(_Var7.node)->parent;
  pp_Var4 = &(_Var7.node)->left;
  pAddress = _Var1;
  if (p_Var10 == (__rb_tree_node_base *)0x0) {
LAB_001f8f14:
    p_Var10 = *(__rb_tree_node_base **)((int)pAddress.field0_0x0.node + 0xc);
  }
  else {
    p_Var5 = *(__rb_tree_node_base **)((int)_Var1.field0_0x0.node + 0xc);
    if (p_Var5 != (__rb_tree_node_base *)0x0) {
      if (p_Var5->left != (__rb_tree_node_base *)0x0) {
        for (pAddress.field0_0x0.node = (__rb_tree_base_iterator)p_Var5->left;
            *(__rb_tree_node_base **)((int)pAddress.field0_0x0.node + 8) !=
            (__rb_tree_node_base *)0x0;
            pAddress.field0_0x0.node =
                 *(__rb_tree_base_iterator *)((int)pAddress.field0_0x0.node + 8)) {
        }
        goto LAB_001f8f14;
      }
      p_Var10 = p_Var5->right;
      pAddress.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)p_Var5;
    }
  }
  if (pAddress.field0_0x0.node == _Var1.field0_0x0.node) {
    _Var7.node = *(__rb_tree_node_base **)((int)pAddress.field0_0x0.node + 4);
    if (p_Var10 != (__rb_tree_node_base *)0x0) {
      p_Var10->parent = _Var7.node;
    }
    if ((__rb_tree_base_iterator)*pp_Var11 == pAddress.field0_0x0.node) {
      *pp_Var11 = p_Var10;
    }
    else {
      p_Var5 = *(__rb_tree_node_base **)((int)pAddress.field0_0x0.node + 4);
      if ((__rb_tree_base_iterator)p_Var5->left == pAddress.field0_0x0.node) {
        p_Var5->left = p_Var10;
      }
      else {
        p_Var5->right = p_Var10;
      }
    }
    if ((__rb_tree_base_iterator)*pp_Var4 == _Var1.field0_0x0.node) {
      if (*(int *)((int)_Var1.field0_0x0.node + 0xc) == 0) {
        *pp_Var4 = *(__rb_tree_node_base **)((int)_Var1.field0_0x0.node + 4);
      }
      else {
        p_Var5 = p_Var10;
        if (p_Var10->left != (__rb_tree_node_base *)0x0) {
          for (p_Var5 = p_Var10->left; p_Var5->left != (__rb_tree_node_base *)0x0;
              p_Var5 = p_Var5->left) {
          }
        }
        *pp_Var4 = p_Var5;
      }
      _Var2.node = *pp_Var8;
    }
    else {
      _Var2.node = *pp_Var8;
    }
    if ((__rb_tree_base_iterator)_Var2.node != _Var1.field0_0x0.node) {
      iVar3 = *(int *)pAddress.field0_0x0.node;
      goto LAB_001f907c;
    }
    if (*(int *)((int)_Var1.field0_0x0.node + 8) == 0) {
      *pp_Var8 = *(__rb_tree_node_base **)((int)_Var1.field0_0x0.node + 4);
    }
    else {
      p_Var5 = p_Var10;
      if (p_Var10->right != (__rb_tree_node_base *)0x0) {
        for (p_Var5 = p_Var10->right; p_Var5->right != (__rb_tree_node_base *)0x0;
            p_Var5 = p_Var5->right) {
        }
      }
      *pp_Var8 = p_Var5;
    }
  }
  else {
    *(__rb_tree_base_iterator *)(*(int *)((int)_Var1.field0_0x0.node + 8) + 4) =
         pAddress.field0_0x0.node;
    *(__rb_tree_node_base **)((int)pAddress.field0_0x0.node + 8) =
         *(__rb_tree_node_base **)((int)_Var1.field0_0x0.node + 8);
    _Var7 = pAddress.field0_0x0.node;
    if (pAddress.field0_0x0.node !=
        (__rb_tree_base_iterator)*(__rb_tree_node_base **)((int)_Var1.field0_0x0.node + 0xc)) {
      _Var7.node = *(__rb_tree_node_base **)((int)pAddress.field0_0x0.node + 4);
      if (p_Var10 != (__rb_tree_node_base *)0x0) {
        p_Var10->parent = _Var7.node;
      }
      (*(__rb_tree_node_base **)((int)pAddress.field0_0x0.node + 4))->left = p_Var10;
      *(__rb_tree_node_base **)((int)pAddress.field0_0x0.node + 0xc) =
           *(__rb_tree_node_base **)((int)_Var1.field0_0x0.node + 0xc);
      *(__rb_tree_base_iterator *)(*(int *)((int)_Var1.field0_0x0.node + 0xc) + 4) =
           pAddress.field0_0x0.node;
    }
    if ((__rb_tree_base_iterator)*pp_Var11 == _Var1.field0_0x0.node) {
      *pp_Var11 = (__rb_tree_node_base *)pAddress.field0_0x0.node;
    }
    else {
      iVar3 = *(int *)((int)_Var1.field0_0x0.node + 4);
      if ((__rb_tree_base_iterator)*(__rb_tree_node_base **)(iVar3 + 8) == _Var1.field0_0x0.node) {
        *(__rb_tree_base_iterator *)(iVar3 + 8) = pAddress.field0_0x0.node;
      }
      else {
        *(__rb_tree_base_iterator *)(iVar3 + 0xc) = pAddress.field0_0x0.node;
      }
    }
    iVar3 = *(int *)pAddress.field0_0x0.node;
    *(__rb_tree_node_base **)((int)pAddress.field0_0x0.node + 4) =
         *(__rb_tree_node_base **)((int)_Var1.field0_0x0.node + 4);
    *(int *)pAddress.field0_0x0.node = *(int *)_Var1.field0_0x0.node;
    *(int *)_Var1.field0_0x0.node = iVar3;
    pAddress = _Var1;
  }
  iVar3 = *(int *)pAddress.field0_0x0.node;
LAB_001f907c:
  if (iVar3 != 0) {
    p_Var5 = *pp_Var11;
    while (p_Var10 != p_Var5) {
      if (p_Var10 == (__rb_tree_node_base *)0x0) {
        p_Var5 = (_Var7.node)->left;
      }
      else {
        if (*(int *)p_Var10 != 1) break;
        p_Var5 = (_Var7.node)->left;
      }
      if (p_Var10 == p_Var5) {
        p_Var5 = (_Var7.node)->right;
        if (*(int *)p_Var5 == 0) {
          *(int *)p_Var5 = 1;
          *(int *)_Var7.node = 0;
          p_Var5 = (_Var7.node)->right;
          (_Var7.node)->right = p_Var5->left;
          if (p_Var5->left != (__rb_tree_node_base *)0x0) {
            p_Var5->left->parent = _Var7.node;
          }
          p_Var5->parent = (_Var7.node)->parent;
          if (_Var7.node == *pp_Var11) {
            *pp_Var11 = p_Var5;
          }
          else {
            p_Var9 = (_Var7.node)->parent;
            if (_Var7.node == p_Var9->left) {
              p_Var9->left = p_Var5;
            }
            else {
              p_Var9->right = p_Var5;
            }
          }
          p_Var5->left = _Var7.node;
          (_Var7.node)->parent = p_Var5;
          p_Var5 = (_Var7.node)->right;
          p_Var9 = p_Var5->left;
        }
        else {
          p_Var9 = p_Var5->left;
        }
        if ((p_Var9 != (__rb_tree_node_base *)0x0) && (p_Var6 = p_Var5->right, *(int *)p_Var9 != 1))
        {
LAB_001f9134:
          if ((p_Var6 == (__rb_tree_node_base *)0x0) || (*(int *)p_Var6 == 1)) {
            if (p_Var9 != (__rb_tree_node_base *)0x0) {
              *(int *)p_Var9 = 1;
            }
            p_Var9 = p_Var5->left;
            *(int *)p_Var5 = 0;
            p_Var5->left = p_Var9->right;
            if (p_Var9->right != (__rb_tree_node_base *)0x0) {
              p_Var9->right->parent = p_Var5;
            }
            p_Var9->parent = p_Var5->parent;
            if (p_Var5 == *pp_Var11) {
              *pp_Var11 = p_Var9;
            }
            else {
              p_Var6 = p_Var5->parent;
              if (p_Var5 == p_Var6->right) {
                p_Var6->right = p_Var9;
              }
              else {
                p_Var6->left = p_Var9;
              }
            }
            p_Var9->right = p_Var5;
            p_Var5->parent = p_Var9;
            p_Var5 = (_Var7.node)->right;
            iVar3 = *(int *)_Var7.node;
          }
          else {
            iVar3 = *(int *)_Var7.node;
          }
          *(int *)p_Var5 = iVar3;
          *(int *)_Var7.node = 1;
          if (p_Var5->right != (__rb_tree_node_base *)0x0) {
            *(undefined4 *)p_Var5->right = 1;
          }
          p_Var5 = (_Var7.node)->right;
          (_Var7.node)->right = p_Var5->left;
          if (p_Var5->left != (__rb_tree_node_base *)0x0) {
            p_Var5->left->parent = _Var7.node;
          }
          p_Var5->parent = (_Var7.node)->parent;
          if (_Var7.node == *pp_Var11) {
            *pp_Var11 = p_Var5;
          }
          else {
            p_Var9 = (_Var7.node)->parent;
            if (_Var7.node == p_Var9->left) {
              p_Var9->left = p_Var5;
            }
            else {
              p_Var9->right = p_Var5;
            }
          }
          p_Var5->left = _Var7.node;
          (_Var7.node)->parent = p_Var5;
          break;
        }
        p_Var6 = p_Var5->right;
        if (p_Var6 == (__rb_tree_node_base *)0x0) goto LAB_001f92ac;
        if (*(int *)p_Var6 != 1) goto LAB_001f9134;
        *(int *)p_Var5 = 0;
      }
      else {
        if (*(int *)p_Var5 == 0) {
          *(int *)p_Var5 = 1;
          *(int *)_Var7.node = 0;
          p_Var5 = (_Var7.node)->left;
          (_Var7.node)->left = p_Var5->right;
          if (p_Var5->right != (__rb_tree_node_base *)0x0) {
            p_Var5->right->parent = _Var7.node;
          }
          p_Var5->parent = (_Var7.node)->parent;
          if (_Var7.node == *pp_Var11) {
            *pp_Var11 = p_Var5;
          }
          else {
            p_Var9 = (_Var7.node)->parent;
            if (_Var7.node == p_Var9->right) {
              p_Var9->right = p_Var5;
            }
            else {
              p_Var9->left = p_Var5;
            }
          }
          p_Var5->right = _Var7.node;
          (_Var7.node)->parent = p_Var5;
          p_Var5 = (_Var7.node)->left;
          p_Var9 = p_Var5->right;
        }
        else {
          p_Var9 = p_Var5->right;
        }
        if (((p_Var9 != (__rb_tree_node_base *)0x0) && (p_Var6 = p_Var5->left, *(int *)p_Var9 != 1))
           || ((p_Var6 = p_Var5->left, p_Var6 != (__rb_tree_node_base *)0x0 && (*(int *)p_Var6 != 1)
               ))) {
          if ((p_Var6 == (__rb_tree_node_base *)0x0) || (*(int *)p_Var6 == 1)) {
            if (p_Var9 != (__rb_tree_node_base *)0x0) {
              *(int *)p_Var9 = 1;
            }
            p_Var9 = p_Var5->right;
            *(int *)p_Var5 = 0;
            p_Var5->right = p_Var9->left;
            if (p_Var9->left != (__rb_tree_node_base *)0x0) {
              p_Var9->left->parent = p_Var5;
            }
            p_Var9->parent = p_Var5->parent;
            if (p_Var5 == *pp_Var11) {
              *pp_Var11 = p_Var9;
            }
            else {
              p_Var6 = p_Var5->parent;
              if (p_Var5 == p_Var6->left) {
                p_Var6->left = p_Var9;
              }
              else {
                p_Var6->right = p_Var9;
              }
            }
            p_Var9->left = p_Var5;
            p_Var5->parent = p_Var9;
            p_Var5 = (_Var7.node)->left;
            iVar3 = *(int *)_Var7.node;
          }
          else {
            iVar3 = *(int *)_Var7.node;
          }
          *(int *)p_Var5 = iVar3;
          *(int *)_Var7.node = 1;
          if (p_Var5->left != (__rb_tree_node_base *)0x0) {
            *(undefined4 *)p_Var5->left = 1;
          }
          p_Var5 = (_Var7.node)->left;
          (_Var7.node)->left = p_Var5->right;
          if (p_Var5->right != (__rb_tree_node_base *)0x0) {
            p_Var5->right->parent = _Var7.node;
          }
          p_Var5->parent = (_Var7.node)->parent;
          if (_Var7.node == *pp_Var11) {
            *pp_Var11 = p_Var5;
          }
          else {
            p_Var9 = (_Var7.node)->parent;
            if (_Var7.node == p_Var9->right) {
              p_Var9->right = p_Var5;
            }
            else {
              p_Var9->left = p_Var5;
            }
          }
          p_Var5->right = _Var7.node;
          (_Var7.node)->parent = p_Var5;
          break;
        }
LAB_001f92ac:
        *(int *)p_Var5 = 0;
      }
      _Var7.node = (_Var7.node)->parent;
      p_Var10 = _Var7.node;
      p_Var5 = *pp_Var11;
    }
    if (p_Var10 != (__rb_tree_node_base *)0x0) {
      *(int *)p_Var10 = 1;
    }
  }
  free((void *)pAddress.field0_0x0.node);
  (this->m_InstanceIdFromSndobId).t.node_count = (this->m_InstanceIdFromSndobId).t.node_count - 1;
                    /* end of inlined section */
  return;
}

Sint32 cBoxX::SndobNumInstances(Sint32 lSndobId) {
  uint uVar1;
  undefined8 unaff_retaddr;
  int local_20 [4];
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/multimap.h */
                    /* end of inlined section */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20[0] = lSndobId;
                    /* inlined from c:/eor/src2/games/sims/MSrc/multimap.h */
  uVar1 = count__Ct7rb_tree5ZCiZt4pair2ZCiZiZt9select1st1Zt4pair2ZCiZiZt4less1ZCiZt23__malloc_alloc_template1i0RCi
                    (&(this->m_InstanceIdFromSndobId).t,local_20);
                    /* end of inlined section */
  return uVar1;
}

__rb_tree_iterator<pair<const int,int> > cBoxX::begin_instance(Sint32 lSndobId) {
  __rb_tree_iterator_pair_const_int_int___ _Var1;
  undefined8 unaff_retaddr;
  int local_20 [4];
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/multimap.h */
                    /* end of inlined section */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20[0] = lSndobId;
                    /* inlined from c:/eor/src2/games/sims/MSrc/multimap.h */
  _Var1 = lower_bound__t7rb_tree5ZCiZt4pair2ZCiZiZt9select1st1Zt4pair2ZCiZiZt4less1ZCiZt23__malloc_alloc_template1i0RCi
                    (&(this->m_InstanceIdFromSndobId).t,local_20);
                    /* end of inlined section */
  return (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var1;
}

__rb_tree_iterator<pair<const int,int> > cBoxX::end_instance(Sint32 lSndobId) {
  __rb_tree_iterator_pair_const_int_int___ _Var1;
  undefined8 unaff_retaddr;
  int local_20 [4];
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/multimap.h */
                    /* end of inlined section */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20[0] = lSndobId;
                    /* inlined from c:/eor/src2/games/sims/MSrc/multimap.h */
  _Var1 = upper_bound__t7rb_tree5ZCiZt4pair2ZCiZiZt9select1st1Zt4pair2ZCiZiZt4less1ZCiZt23__malloc_alloc_template1i0RCi
                    (&(this->m_InstanceIdFromSndobId).t,local_20);
                    /* end of inlined section */
  return (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var1;
}

void cBoxX::UpdateAllSndobVolPan() {
	__rb_tree_iterator<pair<const int,int> > itBegin;
	__rb_tree_iterator<pair<const int,int> > itBeginThisSndob;
	__rb_tree_iterator<pair<const int,int> > itEndThisSndob;
	__rb_tree_iterator<pair<const int,int> > *this;
	__rb_tree_base_iterator *this;
	__rb_tree_node_base *y;
	__rb_tree_iterator<pair<const int,int> > *this;
	__rb_tree_node_base *y;
	
  __rb_tree_base_iterator _Var1;
  __rb_tree_iterator_pair_const_int_int___ itBegin;
  __rb_tree_node_base *p_Var2;
  int iVar3;
  __rb_tree_base_iterator _Var4;
  __rb_tree_iterator_pair_const_int_int___ itEndThisSndob;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/tree.h */
  _Var1.node = (__rb_tree_node_base *)(this->m_InstanceIdFromSndobId).t.header;
                    /* end of inlined section */
  itBegin.field0_0x0.node = (__rb_tree_base_iterator)(_Var1.node)->left;
                    /* inlined from c:/eor/src2/games/sims/MSrc/multimap.h */
                    /* end of inlined section */
  if (itBegin.field0_0x0.node != (__rb_tree_base_iterator)_Var1.node) {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/tree.h */
    itEndThisSndob.field0_0x0.node =
         *(__rb_tree_base_iterator *)((int)itBegin.field0_0x0.node + 0xc);
    if (itEndThisSndob.field0_0x0.node == (__rb_tree_node_base *)0x0) {
      _Var4.node = *(__rb_tree_node_base **)((int)itBegin.field0_0x0.node + 4);
      itEndThisSndob.field0_0x0.node = itBegin.field0_0x0.node;
      if (itBegin.field0_0x0.node == (__rb_tree_base_iterator)(_Var4.node)->right) {
        do {
          itEndThisSndob.field0_0x0.node =
               (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var4.node;
          _Var4.node = *(__rb_tree_node_base **)((int)itEndThisSndob.field0_0x0.node + 4);
        } while (itEndThisSndob.field0_0x0.node == (__rb_tree_base_iterator)(_Var4.node)->right);
      }
      if (*(__rb_tree_node_base **)((int)itEndThisSndob.field0_0x0.node + 0xc) != _Var4.node) {
        itEndThisSndob.field0_0x0.node =
             (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var4.node;
      }
    }
    else {
      p_Var2 = *(__rb_tree_node_base **)((int)itEndThisSndob.field0_0x0.node + 8);
      while (p_Var2 != (__rb_tree_node_base *)0x0) {
        itEndThisSndob.field0_0x0.node =
             *(__rb_tree_base_iterator *)((int)itEndThisSndob.field0_0x0.node + 8);
        p_Var2 = *(__rb_tree_node_base **)((int)itEndThisSndob.field0_0x0.node + 8);
      }
    }
                    /* end of inlined section */
    while (itBegin.field0_0x0.node != (__rb_tree_base_iterator)_Var1.node) {
      iVar3 = *(int *)((int)itBegin.field0_0x0.node + 0x10);
      while ((*(int *)((int)itEndThisSndob.field0_0x0.node + 0x10) == iVar3 &&
             (itEndThisSndob.field0_0x0.node != (__rb_tree_base_iterator)_Var1.node))) {
        _Var4.node = *(__rb_tree_node_base **)((int)itEndThisSndob.field0_0x0.node + 0xc);
                    /* inlined from c:/eor/src2/games/sims/MSrc/tree.h */
        if (_Var4.node == (__rb_tree_node_base *)0x0) {
          _Var4.node = *(__rb_tree_node_base **)((int)itEndThisSndob.field0_0x0.node + 4);
          if (itEndThisSndob.field0_0x0.node == (__rb_tree_base_iterator)(_Var4.node)->right) {
            do {
              itEndThisSndob.field0_0x0.node =
                   (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var4.node;
              _Var4.node = *(__rb_tree_node_base **)((int)itEndThisSndob.field0_0x0.node + 4);
            } while (itEndThisSndob.field0_0x0.node == (__rb_tree_base_iterator)(_Var4.node)->right)
            ;
          }
          if (*(__rb_tree_node_base **)((int)itEndThisSndob.field0_0x0.node + 0xc) != _Var4.node) {
            itEndThisSndob.field0_0x0.node =
                 (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var4.node;
          }
        }
        else {
          p_Var2 = (_Var4.node)->left;
          while (itEndThisSndob.field0_0x0.node =
                      (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var4.node,
                p_Var2 != (__rb_tree_node_base *)0x0) {
            _Var4.node = (_Var4.node)->left;
            p_Var2 = (_Var4.node)->left;
          }
        }
                    /* end of inlined section */
        iVar3 = *(int *)((int)itBegin.field0_0x0.node + 0x10);
      }
      UpdateSndobVolPan__5cBoxXGt18__rb_tree_iterator1Zt4pair2ZCiZiT1(this,itBegin,itEndThisSndob);
      itBegin.field0_0x0.node = itEndThisSndob.field0_0x0.node;
    }
  }
  return;
}

void cBoxX::KillSource(Sint32 lSourceId) {
	__rb_tree_iterator<pair<const int,int> > it;
	__rb_tree_node<pair<const int,int> > *x;
	__rb_tree_iterator<pair<const int,int> > *this;
	Sint32 lSndobId;
	__rb_tree_node_base *y;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *&leftmost;
	__rb_tree_node_base *&rightmost;
	__rb_tree_node_base *x_parent;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	__rb_tree_color_type &a;
	__rb_tree_color_type tmp;
	__rb_tree_node_base *x;
	__rb_tree_node_base *x;
	__rb_tree_node_base *w;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	__rb_tree_node_base *w;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	__rb_tree_node_base *y;
	
  __rb_tree_node_pair_const_int_int___ *p_Var1;
  int lSndobId;
  __rb_tree_node_base *p_Var2;
  __rb_tree_iterator_pair_const_int_int___ _Var3;
  __rb_tree_node_pair_const_int_int___ *p_Var4;
  int iVar5;
  undefined4 uVar6;
  __rb_tree_node_base **pp_Var7;
  __rb_tree_node_base *p_Var8;
  __rb_tree_node_base *p_Var9;
  __rb_tree_node_pair_const_int_int___ *p_Var10;
  __rb_tree_node_pair_const_int_int___ *p_Var11;
  __rb_tree_base_iterator _Var12;
  __rb_tree_node_base **pp_Var13;
  __rb_tree_node_base **pp_Var14;
  __rb_tree_iterator_pair_const_int_int___ it;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/tree.h */
  p_Var1 = (this->m_InstanceIdFromSndobId).t.header;
  _Var3.field0_0x0.node =
       (__rb_tree_base_iterator)
       (__rb_tree_base_iterator)*(__rb_tree_node_pair_const_int_int___ **)&p_Var1->field0_0x0;
  do {
    while( true ) {
                    /* end of inlined section */
      if (_Var3.field0_0x0.node == (__rb_tree_base_iterator)p_Var1) {
        return;
      }
      if (((__rb_tree_node_base *)((int)_Var3.field0_0x0.node + 0x10))->parent ==
          (__rb_tree_node_base *)lSourceId) break;
                    /* inlined from c:/eor/src2/games/sims/MSrc/tree.h */
      p_Var11 = *(__rb_tree_node_pair_const_int_int___ **)((int)_Var3.field0_0x0.node + 0xc);
      if (p_Var11 == (__rb_tree_node_pair_const_int_int___ *)0x0) {
        _Var12.node = *(__rb_tree_node_base **)((int)_Var3.field0_0x0.node + 4);
        it.field0_0x0.node = _Var3.field0_0x0.node;
        if (_Var3.field0_0x0.node ==
            (__rb_tree_base_iterator)
            *(__rb_tree_node_pair_const_int_int___ **)
             &((__rb_tree_node_pair_const_int_int___ *)_Var12.node)->field0_0x0) {
          do {
            it.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var12.node;
            _Var12.node = *(__rb_tree_node_base **)((int)it.field0_0x0.node + 4);
          } while (it.field0_0x0.node ==
                   (__rb_tree_base_iterator)
                   *(__rb_tree_node_pair_const_int_int___ **)
                    &((__rb_tree_node_pair_const_int_int___ *)_Var12.node)->field0_0x0);
        }
        _Var3.field0_0x0.node = it.field0_0x0.node;
        if (*(__rb_tree_node_pair_const_int_int___ **)((int)it.field0_0x0.node + 0xc) !=
            (__rb_tree_node_pair_const_int_int___ *)_Var12.node) {
          _Var3.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var12.node;
        }
      }
      else {
        p_Var8 = *(__rb_tree_node_base **)&p_Var11->field0_0x0;
        while (_Var3.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)p_Var11,
              p_Var8 != (__rb_tree_node_base *)0x0) {
          p_Var11 = *(__rb_tree_node_pair_const_int_int___ **)&p_Var11->field0_0x0;
          p_Var8 = *(__rb_tree_node_base **)&p_Var11->field0_0x0;
        }
      }
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/tree.h */
    it.field0_0x0.node = *(__rb_tree_base_iterator *)((int)_Var3.field0_0x0.node + 0xc);
    lSndobId = *(int *)((int)_Var3.field0_0x0.node + 0x10);
    if (it.field0_0x0.node == (__rb_tree_node_base *)0x0) {
      _Var12.node = *(__rb_tree_node_base **)((int)_Var3.field0_0x0.node + 4);
      it.field0_0x0.node = _Var3.field0_0x0.node;
      if (_Var3.field0_0x0.node == (__rb_tree_node_base *)(_Var12.node)->right) {
        do {
          it.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var12.node;
          _Var12.node = *(__rb_tree_node_base **)((int)it.field0_0x0.node + 4);
        } while (it.field0_0x0.node == (__rb_tree_base_iterator)(_Var12.node)->right);
      }
      if (*(__rb_tree_node_base **)((int)it.field0_0x0.node + 0xc) != _Var12.node) {
        it.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var12.node;
      }
LAB_001f9704:
      p_Var11 = (this->m_InstanceIdFromSndobId).t.header;
    }
    else {
      if (*(__rb_tree_node_base **)((int)it.field0_0x0.node + 8) == (__rb_tree_node_base *)0x0)
      goto LAB_001f9704;
      do {
        it.field0_0x0.node = *(__rb_tree_base_iterator *)((int)it.field0_0x0.node + 8);
      } while (*(__rb_tree_node_base **)((int)it.field0_0x0.node + 8) != (__rb_tree_node_base *)0x0)
      ;
      p_Var11 = (this->m_InstanceIdFromSndobId).t.header;
    }
    pp_Var14 = &(p_Var11->field0_0x0).right;
    pp_Var13 = &(p_Var11->field0_0x0).parent;
    pp_Var7 = &(p_Var11->field0_0x0).left;
    p_Var11 = *(__rb_tree_node_pair_const_int_int___ **)((int)_Var3.field0_0x0.node + 8);
    _Var12 = _Var3.field0_0x0.node;
    if (p_Var11 == (__rb_tree_node_pair_const_int_int___ *)0x0) {
      p_Var11 = *(__rb_tree_node_pair_const_int_int___ **)((int)_Var3.field0_0x0.node + 0xc);
    }
    else {
      p_Var10 = *(__rb_tree_node_pair_const_int_int___ **)((int)_Var3.field0_0x0.node + 0xc);
      if (p_Var10 != (__rb_tree_node_pair_const_int_int___ *)0x0) {
        if (*(__rb_tree_node_base **)&p_Var10->field0_0x0 == (__rb_tree_node_base *)0x0) {
          p_Var11 = *(__rb_tree_node_pair_const_int_int___ **)&p_Var10->field0_0x0;
          _Var12.node = &p_Var10->field0_0x0;
        }
        else {
          for (_Var12.node = *(__rb_tree_node_base **)&p_Var10->field0_0x0;
              *(__rb_tree_node_base **)
               &((__rb_tree_node_pair_const_int_int___ *)_Var12.node)->field0_0x0 !=
              (__rb_tree_node_base *)0x0;
              _Var12.node = *(__rb_tree_node_base **)
                             &((__rb_tree_node_pair_const_int_int___ *)_Var12.node)->field0_0x0) {
          }
          p_Var11 = *(__rb_tree_node_pair_const_int_int___ **)
                     &((__rb_tree_node_pair_const_int_int___ *)_Var12.node)->field0_0x0;
        }
      }
    }
    if ((__rb_tree_base_iterator)_Var12.node == _Var3.field0_0x0.node) {
      p_Var10 = *(__rb_tree_node_pair_const_int_int___ **)
                 &((__rb_tree_node_pair_const_int_int___ *)_Var12.node)->field0_0x0;
      if (p_Var11 != (__rb_tree_node_pair_const_int_int___ *)0x0) {
        *(__rb_tree_node_pair_const_int_int___ **)&p_Var11->field0_0x0 = p_Var10;
      }
      if ((__rb_tree_node_pair_const_int_int___ *)*pp_Var13 ==
          (__rb_tree_node_pair_const_int_int___ *)_Var12.node) {
        *pp_Var13 = &p_Var11->field0_0x0;
      }
      else {
        p_Var8 = *(__rb_tree_node_base **)
                  &((__rb_tree_node_pair_const_int_int___ *)_Var12.node)->field0_0x0;
        if ((__rb_tree_node_pair_const_int_int___ *)p_Var8->left ==
            (__rb_tree_node_pair_const_int_int___ *)_Var12.node) {
          p_Var8->left = &p_Var11->field0_0x0;
        }
        else {
          p_Var8->right = &p_Var11->field0_0x0;
        }
      }
      if ((__rb_tree_node_base *)*pp_Var7 == _Var3.field0_0x0.node) {
        if (*(__rb_tree_node_base **)((int)_Var3.field0_0x0.node + 0xc) ==
            (__rb_tree_node_base *)0x0) {
          *pp_Var7 = *(__rb_tree_node_base **)((int)_Var3.field0_0x0.node + 4);
        }
        else {
          p_Var4 = p_Var11;
          if (*(__rb_tree_node_base **)&p_Var11->field0_0x0 != (__rb_tree_node_base *)0x0) {
            for (p_Var4 = *(__rb_tree_node_pair_const_int_int___ **)&p_Var11->field0_0x0;
                *(__rb_tree_node_base **)&p_Var4->field0_0x0 != (__rb_tree_node_base *)0x0;
                p_Var4 = *(__rb_tree_node_pair_const_int_int___ **)&p_Var4->field0_0x0) {
            }
          }
          *pp_Var7 = &p_Var4->field0_0x0;
        }
        p_Var4 = (__rb_tree_node_pair_const_int_int___ *)*pp_Var14;
      }
      else {
        p_Var4 = (__rb_tree_node_pair_const_int_int___ *)*pp_Var14;
      }
      if ((__rb_tree_base_iterator)p_Var4 == _Var3.field0_0x0.node) {
        if (*(__rb_tree_node_base **)((int)_Var3.field0_0x0.node + 8) == (__rb_tree_node_base *)0x0)
        {
          *pp_Var14 = *(__rb_tree_node_base **)((int)_Var3.field0_0x0.node + 4);
        }
        else {
          p_Var4 = p_Var11;
          if (*(__rb_tree_node_base **)&p_Var11->field0_0x0 != (__rb_tree_node_base *)0x0) {
            for (p_Var4 = *(__rb_tree_node_pair_const_int_int___ **)&p_Var11->field0_0x0;
                *(__rb_tree_node_base **)&p_Var4->field0_0x0 != (__rb_tree_node_base *)0x0;
                p_Var4 = *(__rb_tree_node_pair_const_int_int___ **)&p_Var4->field0_0x0) {
            }
          }
          *pp_Var14 = &p_Var4->field0_0x0;
        }
        goto LAB_001f98c8;
      }
      iVar5 = *(int *)&(_Var12.node)->color;
    }
    else {
      (*(__rb_tree_node_base **)((int)_Var3.field0_0x0.node + 8))->parent = _Var12.node;
      *(__rb_tree_node_base **)&((__rb_tree_node_pair_const_int_int___ *)_Var12.node)->field0_0x0 =
           *(__rb_tree_node_base **)((int)_Var3.field0_0x0.node + 8);
      p_Var10 = (__rb_tree_node_pair_const_int_int___ *)_Var12.node;
      if ((__rb_tree_node_pair_const_int_int___ *)_Var12.node !=
          *(__rb_tree_node_pair_const_int_int___ **)((int)_Var3.field0_0x0.node + 0xc)) {
        p_Var10 = *(__rb_tree_node_pair_const_int_int___ **)
                   &((__rb_tree_node_pair_const_int_int___ *)_Var12.node)->field0_0x0;
        if (p_Var11 != (__rb_tree_node_pair_const_int_int___ *)0x0) {
          *(__rb_tree_node_pair_const_int_int___ **)&p_Var11->field0_0x0 = p_Var10;
        }
        (*(__rb_tree_node_base **)&((__rb_tree_node_pair_const_int_int___ *)_Var12.node)->field0_0x0
        )->left = &p_Var11->field0_0x0;
        *(__rb_tree_node_base **)&((__rb_tree_node_pair_const_int_int___ *)_Var12.node)->field0_0x0
             = *(__rb_tree_node_base **)((int)_Var3.field0_0x0.node + 0xc);
        (*(__rb_tree_node_base **)((int)_Var3.field0_0x0.node + 0xc))->parent = _Var12.node;
      }
      if ((__rb_tree_node_base *)*pp_Var13 == _Var3.field0_0x0.node) {
        *pp_Var13 = _Var12.node;
      }
      else {
        p_Var8 = *(__rb_tree_node_base **)((int)_Var3.field0_0x0.node + 4);
        if ((__rb_tree_node_base *)p_Var8->left == _Var3.field0_0x0.node) {
          p_Var8->left = _Var12.node;
        }
        else {
          p_Var8->right = _Var12.node;
        }
      }
      uVar6 = *(undefined4 *)&(_Var12.node)->color;
      *(__rb_tree_node_base **)&((__rb_tree_node_pair_const_int_int___ *)_Var12.node)->field0_0x0 =
           *(__rb_tree_node_base **)((int)_Var3.field0_0x0.node + 4);
      *(undefined4 *)&(_Var12.node)->color = *(undefined4 *)_Var3.field0_0x0.node;
      *(undefined4 *)_Var3.field0_0x0.node = uVar6;
      _Var12 = _Var3.field0_0x0.node;
LAB_001f98c8:
      iVar5 = *(int *)&(_Var12.node)->color;
    }
    if (iVar5 != 0) {
      p_Var4 = (__rb_tree_node_pair_const_int_int___ *)*pp_Var13;
      while (p_Var11 != p_Var4) {
        if (p_Var11 == (__rb_tree_node_pair_const_int_int___ *)0x0) {
          p_Var4 = *(__rb_tree_node_pair_const_int_int___ **)&p_Var10->field0_0x0;
        }
        else {
          if (*(int *)&p_Var11->field0_0x0 != 1) break;
          p_Var4 = *(__rb_tree_node_pair_const_int_int___ **)&p_Var10->field0_0x0;
        }
        if (p_Var11 == p_Var4) {
          p_Var8 = *(__rb_tree_node_base **)&p_Var10->field0_0x0;
          if (*(int *)&p_Var8->color == 0) {
            *(undefined4 *)&p_Var8->color = 1;
            *(undefined4 *)&p_Var10->field0_0x0 = 0;
            p_Var8 = *(__rb_tree_node_base **)&p_Var10->field0_0x0;
            *(__rb_tree_node_base **)&p_Var10->field0_0x0 = p_Var8->left;
            if (p_Var8->left != (__rb_tree_node_base *)0x0) {
              p_Var8->left->parent = &p_Var10->field0_0x0;
            }
            p_Var8->parent = *(__rb_tree_node_base **)&p_Var10->field0_0x0;
            if (p_Var10 == (__rb_tree_node_pair_const_int_int___ *)*pp_Var13) {
              *pp_Var13 = p_Var8;
            }
            else {
              p_Var9 = *(__rb_tree_node_base **)&p_Var10->field0_0x0;
              if (p_Var10 == (__rb_tree_node_pair_const_int_int___ *)p_Var9->left) {
                p_Var9->left = p_Var8;
              }
              else {
                p_Var9->right = p_Var8;
              }
            }
            p_Var8->left = &p_Var10->field0_0x0;
            *(__rb_tree_node_base **)&p_Var10->field0_0x0 = p_Var8;
            p_Var8 = *(__rb_tree_node_base **)&p_Var10->field0_0x0;
            p_Var9 = p_Var8->left;
          }
          else {
            p_Var9 = p_Var8->left;
          }
          p_Var2 = p_Var8->right;
          if ((p_Var9 != (__rb_tree_node_base *)0x0) && (*(int *)p_Var9 != 1)) {
LAB_001f997c:
            if ((p_Var2 == (__rb_tree_node_base *)0x0) || (*(int *)p_Var2 == 1)) {
              if (p_Var9 != (__rb_tree_node_base *)0x0) {
                *(int *)p_Var9 = 1;
              }
              p_Var9 = p_Var8->left;
              *(undefined4 *)&p_Var8->color = 0;
              p_Var8->left = p_Var9->right;
              if (p_Var9->right != (__rb_tree_node_base *)0x0) {
                p_Var9->right->parent = p_Var8;
              }
              p_Var9->parent = p_Var8->parent;
              if (p_Var8 == *pp_Var13) {
                *pp_Var13 = p_Var9;
              }
              else {
                p_Var2 = p_Var8->parent;
                if (p_Var8 == p_Var2->right) {
                  p_Var2->right = p_Var9;
                }
                else {
                  p_Var2->left = p_Var9;
                }
              }
              p_Var9->right = p_Var8;
              p_Var8->parent = p_Var9;
              p_Var8 = *(__rb_tree_node_base **)&p_Var10->field0_0x0;
              uVar6 = *(undefined4 *)&p_Var10->field0_0x0;
            }
            else {
              uVar6 = *(undefined4 *)&p_Var10->field0_0x0;
            }
            *(undefined4 *)&p_Var8->color = uVar6;
            *(undefined4 *)&p_Var10->field0_0x0 = 1;
            if (p_Var8->right != (__rb_tree_node_base *)0x0) {
              *(undefined4 *)p_Var8->right = 1;
            }
            p_Var8 = *(__rb_tree_node_base **)&p_Var10->field0_0x0;
            *(__rb_tree_node_base **)&p_Var10->field0_0x0 = p_Var8->left;
            if (p_Var8->left != (__rb_tree_node_base *)0x0) {
              p_Var8->left->parent = &p_Var10->field0_0x0;
            }
            p_Var8->parent = *(__rb_tree_node_base **)&p_Var10->field0_0x0;
            if (p_Var10 == (__rb_tree_node_pair_const_int_int___ *)*pp_Var13) {
              *pp_Var13 = p_Var8;
            }
            else {
              p_Var9 = *(__rb_tree_node_base **)&p_Var10->field0_0x0;
              if (p_Var10 == (__rb_tree_node_pair_const_int_int___ *)p_Var9->left) {
                p_Var9->left = p_Var8;
              }
              else {
                p_Var9->right = p_Var8;
              }
            }
            p_Var8->left = &p_Var10->field0_0x0;
            *(__rb_tree_node_base **)&p_Var10->field0_0x0 = p_Var8;
            break;
          }
          if (p_Var2 == (__rb_tree_node_base *)0x0) {
            *(undefined4 *)&p_Var8->color = 0;
          }
          else {
            if (*(int *)p_Var2 != 1) goto LAB_001f997c;
            *(undefined4 *)&p_Var8->color = 0;
          }
        }
        else {
          if (*(int *)&p_Var4->field0_0x0 == 0) {
            *(undefined4 *)&p_Var4->field0_0x0 = 1;
            *(undefined4 *)&p_Var10->field0_0x0 = 0;
            p_Var8 = *(__rb_tree_node_base **)&p_Var10->field0_0x0;
            *(__rb_tree_node_base **)&p_Var10->field0_0x0 = p_Var8->right;
            if (p_Var8->right != (__rb_tree_node_base *)0x0) {
              p_Var8->right->parent = &p_Var10->field0_0x0;
            }
            p_Var8->parent = *(__rb_tree_node_base **)&p_Var10->field0_0x0;
            if (p_Var10 == (__rb_tree_node_pair_const_int_int___ *)*pp_Var13) {
              *pp_Var13 = p_Var8;
            }
            else {
              p_Var9 = *(__rb_tree_node_base **)&p_Var10->field0_0x0;
              if (p_Var10 == (__rb_tree_node_pair_const_int_int___ *)p_Var9->right) {
                p_Var9->right = p_Var8;
              }
              else {
                p_Var9->left = p_Var8;
              }
            }
            p_Var8->right = &p_Var10->field0_0x0;
            *(__rb_tree_node_base **)&p_Var10->field0_0x0 = p_Var8;
            p_Var4 = *(__rb_tree_node_pair_const_int_int___ **)&p_Var10->field0_0x0;
            p_Var8 = *(__rb_tree_node_base **)&p_Var4->field0_0x0;
          }
          else {
            p_Var8 = *(__rb_tree_node_base **)&p_Var4->field0_0x0;
          }
          p_Var9 = *(__rb_tree_node_base **)&p_Var4->field0_0x0;
          if ((p_Var8 != (__rb_tree_node_base *)0x0) && (*(int *)p_Var8 != 1)) {
LAB_001f9af8:
            if ((p_Var9 == (__rb_tree_node_base *)0x0) || (*(int *)p_Var9 == 1)) {
              if (p_Var8 != (__rb_tree_node_base *)0x0) {
                *(int *)p_Var8 = 1;
              }
              p_Var8 = *(__rb_tree_node_base **)&p_Var4->field0_0x0;
              *(undefined4 *)&p_Var4->field0_0x0 = 0;
              *(__rb_tree_node_base **)&p_Var4->field0_0x0 = p_Var8->left;
              if (p_Var8->left != (__rb_tree_node_base *)0x0) {
                p_Var8->left->parent = &p_Var4->field0_0x0;
              }
              p_Var8->parent = *(__rb_tree_node_base **)&p_Var4->field0_0x0;
              if (p_Var4 == (__rb_tree_node_pair_const_int_int___ *)*pp_Var13) {
                *pp_Var13 = p_Var8;
              }
              else {
                p_Var9 = *(__rb_tree_node_base **)&p_Var4->field0_0x0;
                if (p_Var4 == (__rb_tree_node_pair_const_int_int___ *)p_Var9->left) {
                  p_Var9->left = p_Var8;
                }
                else {
                  p_Var9->right = p_Var8;
                }
              }
              p_Var8->left = &p_Var4->field0_0x0;
              *(__rb_tree_node_base **)&p_Var4->field0_0x0 = p_Var8;
              p_Var4 = *(__rb_tree_node_pair_const_int_int___ **)&p_Var10->field0_0x0;
              uVar6 = *(undefined4 *)&p_Var10->field0_0x0;
            }
            else {
              uVar6 = *(undefined4 *)&p_Var10->field0_0x0;
            }
            *(undefined4 *)&p_Var4->field0_0x0 = uVar6;
            *(undefined4 *)&p_Var10->field0_0x0 = 1;
            if (*(__rb_tree_node_base **)&p_Var4->field0_0x0 != (__rb_tree_node_base *)0x0) {
              *(undefined4 *)*(__rb_tree_node_base **)&p_Var4->field0_0x0 = 1;
            }
            p_Var8 = *(__rb_tree_node_base **)&p_Var10->field0_0x0;
            *(__rb_tree_node_base **)&p_Var10->field0_0x0 = p_Var8->right;
            if (p_Var8->right != (__rb_tree_node_base *)0x0) {
              p_Var8->right->parent = &p_Var10->field0_0x0;
            }
            p_Var8->parent = *(__rb_tree_node_base **)&p_Var10->field0_0x0;
            if (p_Var10 == (__rb_tree_node_pair_const_int_int___ *)*pp_Var13) {
              *pp_Var13 = p_Var8;
            }
            else {
              p_Var9 = *(__rb_tree_node_base **)&p_Var10->field0_0x0;
              if (p_Var10 == (__rb_tree_node_pair_const_int_int___ *)p_Var9->right) {
                p_Var9->right = p_Var8;
              }
              else {
                p_Var9->left = p_Var8;
              }
            }
            p_Var8->right = &p_Var10->field0_0x0;
            *(__rb_tree_node_base **)&p_Var10->field0_0x0 = p_Var8;
            break;
          }
          if (p_Var9 == (__rb_tree_node_base *)0x0) {
            *(undefined4 *)&p_Var4->field0_0x0 = 0;
          }
          else {
            if (*(int *)p_Var9 != 1) goto LAB_001f9af8;
            *(undefined4 *)&p_Var4->field0_0x0 = 0;
          }
        }
        p_Var10 = *(__rb_tree_node_pair_const_int_int___ **)&p_Var10->field0_0x0;
        p_Var11 = p_Var10;
        p_Var4 = (__rb_tree_node_pair_const_int_int___ *)*pp_Var13;
      }
      if (p_Var11 != (__rb_tree_node_pair_const_int_int___ *)0x0) {
        *(undefined4 *)&p_Var11->field0_0x0 = 1;
      }
    }
    free(_Var12.node);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/tree.h */
                    /* end of inlined section */
    (this->m_InstanceIdFromSndobId).t.node_count = (this->m_InstanceIdFromSndobId).t.node_count - 1;
    UpdateSndobVolPan__5cBoxXi(this,lSndobId);
    _Var3.field0_0x0.node = it.field0_0x0.node;
  } while( true );
}

void cBoxX::UpdateSndobVolPan(Sint32 lSndobId) {
	multimap<const int,int,less<const int>,__malloc_alloc_template<0> > *this;
	cSoundObject *pSndob;
	
  __rb_tree_iterator_pair_const_int_int___ itBegin;
  __rb_tree_iterator_pair_const_int_int___ itEnd;
  cSoundObject__167_1004 *pcVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  int local_50;
  cSoundCacheHandle local_4c;
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
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/multimap.h */
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = lSndobId;
  itBegin = lower_bound__t7rb_tree5ZCiZt4pair2ZCiZiZt9select1st1Zt4pair2ZCiZiZt4less1ZCiZt23__malloc_alloc_template1i0RCi
                      (&(this->m_InstanceIdFromSndobId).t,&local_50);
  itEnd = upper_bound__t7rb_tree5ZCiZt4pair2ZCiZiZt9select1st1Zt4pair2ZCiZiZt4less1ZCiZt23__malloc_alloc_template1i0RCi
                    (&(this->m_InstanceIdFromSndobId).t,&local_50);
                    /* end of inlined section */
  if (itBegin.field0_0x0.node == itEnd.field0_0x0.node) {
    local_4c = SoundObject__5cBoxXi(this,local_50);
    pcVar1 = GetObject__17cSoundCacheHandle((cSoundCacheHandle *)((uint)&local_50 | 4));
    (*(code *)pcVar1->__vtable[1].Shutdown)
              ((int)&pcVar1->m_lSoundObjectFlag + (int)*(short *)&pcVar1->__vtable[1].Release);
  }
  else {
    UpdateSndobVolPan__5cBoxXGt18__rb_tree_iterator1Zt4pair2ZCiZiT1(this,itBegin,itEnd);
  }
  return;
}

void cBoxX::UpdateSndobVolPan(__rb_tree_iterator<pair<const int,int> > itBegin, __rb_tree_iterator<pair<const int,int> > itEnd) {
	Sint32 lSndobId;
	Sint32 lVol;
	Sint32 lPan;
	cSoundObject *pSndob;
	
  int lSndobId;
  cSoundObject__167_1004 *pcVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  int lVol;
  int lPan;
  cSoundCacheHandle local_38;
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
  lSndobId = *(int *)((int)itBegin.field0_0x0.node + 0x10);
  GetSndobVolPan__5cBoxXiRiT2(this,lSndobId,&lVol,(int *)((uint)&lVol | 4));
  local_38 = SoundObject__5cBoxXi(this,lSndobId);
  pcVar1 = GetObject__17cSoundCacheHandle((cSoundCacheHandle *)((uint)&lVol | 8));
  (*(code *)pcVar1->__vtable[1].IsPlaying)
            ((int)&pcVar1->m_lSoundObjectFlag + (int)*(short *)&pcVar1->__vtable[1].Update,lVol);
  (*(code *)pcVar1->__vtable[1].RegisterVal)
            ((int)&pcVar1->m_lSoundObjectFlag + (int)*(short *)&pcVar1->__vtable[1].SetRegister,lPan
            );
  return;
}

bool cBoxX::GetSndobVolPan(Sint32 lSndobId, Sint32 &lVol, Sint32 &lPan) {
	cSoundObject *pSndob;
	Sint32 lMaxVol;
	Sint32 lTotalPanByVolume;
	Sint32 lTotalVolume;
	Sint32 lWeightedAveragePan;
	multimap<const int,int,less<const int>,__malloc_alloc_template<0> > *this;
	__rb_tree_iterator<pair<const int,int> > it;
	Sint32 lVol;
	__rb_tree_iterator<pair<const int,int> > *this;
	__rb_tree_node_base *y;
	
  __rb_tree_node_base *p_Var1;
  bool bVar2;
  __rb_tree_iterator_pair_const_int_int___ _Var3;
  cSoundObject__167_1004 *pSndob;
  int iVar4;
  __rb_tree_base_iterator _Var5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  int iVar6;
  undefined8 unaff_s2;
  int iVar7;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  int iVar8;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  int local_b0;
  cSoundCacheHandle local_ac;
  __rb_tree_iterator_pair_const_int_int___ it;
  int local_a4;
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
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/multimap.h */
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* end of inlined section */
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/multimap.h */
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_b0 = lSndobId;
  it = lower_bound__t7rb_tree5ZCiZt4pair2ZCiZiZt9select1st1Zt4pair2ZCiZiZt4less1ZCiZt23__malloc_alloc_template1i0RCi
                 (&(this->m_InstanceIdFromSndobId).t,&local_b0);
  _Var3 = upper_bound__t7rb_tree5ZCiZt4pair2ZCiZiZt9select1st1Zt4pair2ZCiZiZt4less1ZCiZt23__malloc_alloc_template1i0RCi
                    (&(this->m_InstanceIdFromSndobId).t,&local_b0);
                    /* end of inlined section */
  if (it.field0_0x0.node == _Var3.field0_0x0.node) {
    *lVol = 0;
    *lPan = 0x200;
    bVar2 = false;
  }
  else {
    local_ac = SoundObject__5cBoxXi(this,local_b0);
    pSndob = GetObject__17cSoundCacheHandle((cSoundCacheHandle *)((uint)&local_b0 | 4));
    if (pSndob == (cSoundObject__167_1004 *)0x0) {
      bVar2 = false;
    }
    else {
      iVar7 = 0;
      *lPan = 0;
      iVar8 = 0;
      iVar6 = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/tree.h */
      do {
        GetInstanceVolPan__5cBoxXiRiT2P12cSoundObject
                  (this,*(int *)((int)it.field0_0x0.node + 0x14),&local_a4,lPan,
                   (cSoundObject__107_1582 *)pSndob);
                    /* inlined from c:/eor/src2/games/sims/MSrc/tree.h */
                    /* end of inlined section */
        if (iVar7 < local_a4) {
          iVar7 = local_a4;
        }
                    /* inlined from c:/eor/src2/games/sims/MSrc/tree.h */
        _Var5.node = *(__rb_tree_node_base **)((int)it.field0_0x0.node + 0xc);
                    /* end of inlined section */
        iVar6 = iVar6 + local_a4;
                    /* inlined from c:/eor/src2/games/sims/MSrc/tree.h */
        iVar8 = (*lPan + -0x200) * local_a4 + iVar8;
        if (_Var5.node == (__rb_tree_node_base *)0x0) {
          _Var5.node = *(__rb_tree_node_base **)((int)it.field0_0x0.node + 4);
          if (it.field0_0x0.node == (__rb_tree_base_iterator)(_Var5.node)->right) {
            do {
              it.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var5.node;
              _Var5.node = *(__rb_tree_node_base **)((int)it.field0_0x0.node + 4);
            } while (it.field0_0x0.node == (__rb_tree_base_iterator)(_Var5.node)->right);
          }
          if (*(__rb_tree_node_base **)((int)it.field0_0x0.node + 0xc) != _Var5.node) {
            it.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var5.node;
          }
        }
        else {
          p_Var1 = (_Var5.node)->left;
          while (it.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var5.node,
                p_Var1 != (__rb_tree_node_base *)0x0) {
            _Var5.node = (_Var5.node)->left;
            p_Var1 = (_Var5.node)->left;
          }
        }
                    /* end of inlined section */
      } while (it.field0_0x0.node != _Var3.field0_0x0.node);
      iVar4 = 0;
      if ((iVar6 != 0) && (iVar4 = iVar8 / iVar6, iVar6 == 0)) {
        trap(7);
      }
      *lVol = iVar7;
      *lPan = iVar4 + 0x200;
      bVar2 = true;
    }
  }
  return bVar2;
}

void cBoxX::Pause() {
  cHitMan *this_00;
  
  *(undefined4 *)&this->m_bPaused = 1;
  this_00 = HitMan__5cBoxX(this);
  DuckMapRemoveAll__7cHitMan(this_00);
  Pause__16cGameModeManager(&this->m_GameModeManager);
  Pause__7cHitMan(g_pHitMan);
  return;
}

void cBoxX::Unpause() {
  cHitMan *this_00;
  
  this_00 = g_pHitMan;
  *(undefined4 *)&this->m_bPaused = 0;
  Unpause__7cHitMan(this_00);
  Unpause__16cGameModeManager(&this->m_GameModeManager);
  return;
}

void cBoxX::UpdateNiteLoop() {
	bool bLiveMode;
	cSoundObject *pSndOb;
	Sint32 lHour;
	
  bool bVar1;
  cSoundObject__167_1004 *pcVar2;
  cAudioInfo *this_00;
  int iVar3;
  int iVar4;
  cSoundObject__167_1004__vtable *pcVar5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  cSoundCacheHandle local_50 [4];
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
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/boxx.h */
                    /* end of inlined section */
  bVar1 = (this->m_GameModeManager).m_lMode != 0;
  HitMan__5cBoxX(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Patch.h */
                    /* end of inlined section */
  local_50[0].m_id = 0xba9;
  pcVar2 = GetObject__17cSoundCacheHandle(local_50);
  if (pcVar2 == (cSoundObject__167_1004 *)0x0) {
    return;
  }
  this_00 = GetAudioInfo__Fv();
  iVar3 = GetObjectData__10cAudioInfoiQ210cAudioInfo7DataIdx(this_00,0,kAI_Hour);
  iVar4 = *(int *)&this->m_bPaused;
  if (iVar4 == 0) {
    if (*(int *)&this->m_bAppInFocus != 0) {
      if (bVar1) {
        iVar4 = *(int *)&this->m_bPaused;
      }
      else if (iVar3 - 6U < 0xd) {
        iVar4 = *(int *)&this->m_bPaused;
      }
      else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/boxx.h */
                    /* end of inlined section */
        if ((this->m_GameModeManager).m_lMode == 0) {
          (*(code *)pcVar2->__vtable->Uncache)
                    ((int)&pcVar2->m_lSoundObjectFlag + (int)*(short *)&pcVar2->__vtable->Cache,0,0,
                     0);
          return;
        }
        iVar4 = *(int *)&this->m_bPaused;
      }
    }
    if (((iVar4 == 0) && (*(int *)&this->m_bAppInFocus == 0)) && (!bVar1)) {
      pcVar5 = pcVar2->__vtable;
      goto LAB_001fa17c;
    }
  }
  pcVar5 = pcVar2->__vtable;
                    /* inlined from c:/eor/src2/games/sims/MSrc/boxx.h */
                    /* end of inlined section */
  if ((0xc < iVar3 - 6U) && ((this->m_GameModeManager).m_lMode == 0)) {
    (*(code *)pcVar5[1].Play)
              ((int)&pcVar2->m_lSoundObjectFlag +
               (int)*(short *)&pcVar5[1].WantsViewChangeNotifications);
    return;
  }
LAB_001fa17c:
  (*(code *)pcVar5[1].SetVolume)((int)&pcVar2->m_lSoundObjectFlag + (int)*(short *)&pcVar5[1].Init);
  return;
}

bool cBoxX::CheckPriority(Sint32 lSndobId) {
	__list_iterator<cSoundCacheHandle> it;
	cTrackPlayer *pMinVolTrackPlayer;
	cTrackPlayer *pTrackPlayer;
	cSoundCacheHandle pTrack;
	
  __list_node_cSoundCacheHandle_ *p_Var1;
  __list_node_cSoundCacheHandle_ *p_Var2;
  cSoundObject__107_1582__vtable *pcVar3;
  bool bVar4;
  cHitMan *pcVar5;
  cTrack *pcVar6;
  cTrack *pcVar7;
  long lVar8;
  cTrack *pcVar9;
  cSoundCacheHandle pTrack;
  
  pcVar5 = HitMan__5cBoxX(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
                    /* end of inlined section */
  if (0x10 < (int)(pcVar5->m_TrackUpdateList).length) {
    pcVar9 = (cTrack *)0x0;
    pcVar5 = HitMan__5cBoxX(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
    p_Var1 = (pcVar5->m_TrackUpdateList).node;
                    /* end of inlined section */
    p_Var2 = (__list_node_cSoundCacheHandle_ *)p_Var1->next;
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
                    /* end of inlined section */
    while (p_Var2 != p_Var1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
                    /* end of inlined section */
      bVar4 = IsInMemory__C17cSoundCacheHandle(&p_Var2->data);
      if (bVar4) {
                    /* end of inlined section */
        pcVar6 = GetTrackObject__17cSoundCacheHandle(&p_Var2->data);
        pcVar3 = (pcVar6->field0_0x0).field0_0x0.__vtable;
        pTrack.m_id = (*(code *)pcVar3[2].IsPlaying)
                                ((int)&(pcVar6->field0_0x0).field0_0x0.m_lSoundObjectFlag +
                                 (int)*(short *)&pcVar3[2].Update);
        pcVar7 = GetTrackObject__17cSoundCacheHandle(&pTrack);
        pcVar3 = (pcVar7->field0_0x0).field0_0x0.__vtable;
        lVar8 = (*(code *)pcVar3[2].Shutdown)
                          ((int)&(pcVar7->field0_0x0).field0_0x0.m_lSoundObjectFlag +
                           (int)*(short *)&pcVar3[2].Release);
        if (lVar8 == 3) {
          pcVar3 = (pcVar6->field0_0x0).field0_0x0.__vtable;
          lVar8 = (*(code *)pcVar3->SetFxLevel)
                            ((int)&(pcVar6->field0_0x0).field0_0x0.m_lSoundObjectFlag +
                             (int)*(short *)&pcVar3->SetFxType,0x7c);
          if (lVar8 < 0x400) {
            pcVar9 = pcVar6;
          }
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
          p_Var2 = (__list_node_cSoundCacheHandle_ *)p_Var2->next;
        }
        else {
          p_Var2 = (__list_node_cSoundCacheHandle_ *)p_Var2->next;
        }
      }
      else {
        p_Var2 = (__list_node_cSoundCacheHandle_ *)p_Var2->next;
      }
    }
    if (pcVar9 != (cTrack *)0x0) {
      pcVar3 = (pcVar9->field0_0x0).field0_0x0.__vtable;
      (*(code *)pcVar3[1].Shutdown)
                ((int)&(pcVar9->field0_0x0).field0_0x0.m_lSoundObjectFlag +
                 (int)*(short *)&pcVar3[1].Release);
    }
  }
  return true;
}

cGameModeManager* cGameModeManager::cGameModeManager() {
  *(undefined4 *)&this->m_bPaused = 0;
  this->m_lMode = 4;
  return this;
}

void cGameModeManager::Shutdown() {
  Kill__16cGameModeManager(this);
  return;
}

void cGameModeManager::FadeAndKill() {
  return;
}

void cGameModeManager::Kill() {
	cSoundObject *pSndOb;
	
  cSoundObject__167_1004 *pcVar1;
  undefined8 unaff_retaddr;
  cSoundCacheHandle local_20 [4];
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  HitMan__16cGameModeManager(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Patch.h */
                    /* end of inlined section */
  local_20[0].m_id = 0x203;
  pcVar1 = GetObject__17cSoundCacheHandle(local_20);
  (*(code *)pcVar1->__vtable[1].SetVolume)
            ((int)&pcVar1->m_lSoundObjectFlag + (int)*(short *)&pcVar1->__vtable[1].Init);
  return;
}

void cGameModeManager::Pause() {
  return;
}

void cGameModeManager::Unpause() {
	cSoundObject *pSndOb;
	
  cSoundObject__167_1004 *pcVar1;
  undefined8 unaff_retaddr;
  cSoundCacheHandle local_20 [4];
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  *(undefined4 *)&this->m_bPaused = 0;
  HitMan__16cGameModeManager(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Patch.h */
                    /* end of inlined section */
  local_20[0].m_id = 0x203;
  pcVar1 = GetObject__17cSoundCacheHandle(local_20);
  (*(code *)pcVar1->__vtable[1].AddRef)
            ((int)&pcVar1->m_lSoundObjectFlag + (int)*(short *)&pcVar1->__vtable[1].PlayPause);
  return;
}

void cGameModeManager::SetMode(Sint32 lMode) {
	cSoundObject *pSndOb;
	cSoundObject *pSndOb;
	cSoundObject *pSndOb;
	cSoundObject *pSndOb;
	cSoundObject *pSndOb;
	cSoundObject *pSndOb;
	cSoundObject *pSndOb;
	cSoundObject *pSndOb;
	cSoundObject *pSndOb;
	cSoundObject *pSndOb;
	cSoundObject *pSndOb;
	
  cSoundObject__167_1004 *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  cSoundObject__167_1004__vtable *pcVar5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  cSoundCacheHandle local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  cSoundCacheHandle local_80;
  cSoundCacheHandle local_7c;
  cSoundCacheHandle local_78;
  cSoundCacheHandle local_74;
  cSoundCacheHandle local_70;
  cSoundCacheHandle local_6c;
  cSoundCacheHandle local_68;
  cSoundCacheHandle local_64;
  cSoundCacheHandle local_60;
  cSoundCacheHandle local_5c;
  cSoundCacheHandle local_58;
  cSoundCacheHandle local_54;
  cSoundCacheHandle local_50 [4];
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
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  iVar3 = this->m_lMode;
  if (lMode == iVar3) {
    return;
  }
  this->m_lMode = lMode;
  if (lMode == 3) {
    HitMan__16cGameModeManager(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Patch.h */
                    /* end of inlined section */
    local_90.m_id = 0x14cb;
    pcVar1 = GetObject__17cSoundCacheHandle(&local_90);
    (*(code *)pcVar1->__vtable[1].SetVolume)
              ((int)&pcVar1->m_lSoundObjectFlag + (int)*(short *)&pcVar1->__vtable[1].Init);
  }
  else {
    HitMan__16cGameModeManager(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Patch.h */
                    /* end of inlined section */
    local_8c = 0xb8d;
    pcVar1 = GetObject__17cSoundCacheHandle((cSoundCacheHandle *)((uint)&local_90 | 4));
    (*(code *)pcVar1->__vtable[1].SetVolume)
              ((int)&pcVar1->m_lSoundObjectFlag + (int)*(short *)&pcVar1->__vtable[1].Init);
  }
  switch(lMode) {
  case 0:
  case 9:
    HitMan__16cGameModeManager(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Patch.h */
                    /* end of inlined section */
    local_88 = 0x203;
    pcVar1 = GetObject__17cSoundCacheHandle((cSoundCacheHandle *)((uint)&local_90 | 8));
    (*(code *)pcVar1->__vtable[1].SetVolume)
              ((int)&pcVar1->m_lSoundObjectFlag + (int)*(short *)&pcVar1->__vtable[1].Init);
    HitMan__16cGameModeManager(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Patch.h */
                    /* end of inlined section */
    local_84 = 0x205;
    pcVar1 = GetObject__17cSoundCacheHandle((cSoundCacheHandle *)((uint)&local_90 | 0xc));
    iVar3 = (int)*(short *)&pcVar1->__vtable[1].Init;
    pcVar2 = (code *)pcVar1->__vtable[1].SetVolume;
    break;
  case 1:
    HitMan__16cGameModeManager(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Patch.h */
                    /* end of inlined section */
    local_80.m_id = 0x204;
    pcVar1 = GetObject__17cSoundCacheHandle(&local_80);
    pcVar5 = pcVar1->__vtable;
    uVar4 = 0xdd;
    goto LAB_001fa6f4;
  case 2:
    HitMan__16cGameModeManager(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Patch.h */
                    /* end of inlined section */
    local_7c.m_id = 0x204;
    pcVar1 = GetObject__17cSoundCacheHandle(&local_7c);
    pcVar5 = pcVar1->__vtable;
    uVar4 = 0xde;
    goto LAB_001fa6f4;
  case 3:
    if ((iVar3 != 8) && (iVar3 != 5)) {
      HitMan__16cGameModeManager(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Patch.h */
                    /* end of inlined section */
      local_58.m_id = 0x205;
      pcVar1 = GetObject__17cSoundCacheHandle(&local_58);
      (*(code *)pcVar1->__vtable->Uncache)
                ((int)&pcVar1->m_lSoundObjectFlag + (int)*(short *)&pcVar1->__vtable->Cache,0xdf,0,0
                );
    }
    HitMan__16cGameModeManager(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Patch.h */
                    /* end of inlined section */
    local_54.m_id = 0xb8d;
    pcVar1 = GetObject__17cSoundCacheHandle(&local_54);
    pcVar5 = pcVar1->__vtable;
    uVar4 = 0;
LAB_001fa6f4:
    (*(code *)pcVar5->Uncache)
              ((int)&pcVar1->m_lSoundObjectFlag + (int)*(short *)&pcVar5->Cache,uVar4,0,0);
    return;
  case 4:
    HitMan__16cGameModeManager(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Patch.h */
                    /* end of inlined section */
    local_6c.m_id = 0xb8d;
    pcVar1 = GetObject__17cSoundCacheHandle(&local_6c);
    (*(code *)pcVar1->__vtable[1].Shutdown)
              ((int)&pcVar1->m_lSoundObjectFlag + (int)*(short *)&pcVar1->__vtable[1].Release);
    HitMan__16cGameModeManager(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Patch.h */
                    /* end of inlined section */
    local_68.m_id = 0x205;
    pcVar1 = GetObject__17cSoundCacheHandle(&local_68);
    (*(code *)pcVar1->__vtable[1].SetVolume)
              ((int)&pcVar1->m_lSoundObjectFlag + (int)*(short *)&pcVar1->__vtable[1].Init);
    HitMan__16cGameModeManager(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Patch.h */
                    /* end of inlined section */
    local_64.m_id = 0x203;
    pcVar1 = GetObject__17cSoundCacheHandle(&local_64);
    iVar3 = (int)*(short *)&pcVar1->__vtable[1].Init;
    pcVar2 = (code *)pcVar1->__vtable[1].SetVolume;
    break;
  case 5:
    if (iVar3 == 8) {
      return;
    }
    if (iVar3 == 3) {
      return;
    }
    HitMan__16cGameModeManager(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Patch.h */
                    /* end of inlined section */
    local_50[0].m_id = 0x205;
    pcVar1 = GetObject__17cSoundCacheHandle(local_50);
    (*(code *)pcVar1->__vtable->Uncache)
              ((int)&pcVar1->m_lSoundObjectFlag + (int)*(short *)&pcVar1->__vtable->Cache,0xdf,0,0);
    return;
  case 6:
    HitMan__16cGameModeManager(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Patch.h */
                    /* end of inlined section */
    local_78.m_id = 0x205;
    pcVar1 = GetObject__17cSoundCacheHandle(&local_78);
    (*(code *)pcVar1->__vtable[1].SetVolume)
              ((int)&pcVar1->m_lSoundObjectFlag + (int)*(short *)&pcVar1->__vtable[1].Init);
    HitMan__16cGameModeManager(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Patch.h */
                    /* end of inlined section */
    local_74.m_id = 0x203;
    pcVar1 = GetObject__17cSoundCacheHandle(&local_74);
    (*(code *)pcVar1->__vtable[1].SetVolume)
              ((int)&pcVar1->m_lSoundObjectFlag + (int)*(short *)&pcVar1->__vtable[1].Init);
    HitMan__16cGameModeManager(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Patch.h */
                    /* end of inlined section */
    local_70.m_id = 0x1a19;
    pcVar1 = GetObject__17cSoundCacheHandle(&local_70);
    (*(code *)pcVar1->__vtable->Uncache)
              ((int)&pcVar1->m_lSoundObjectFlag + (int)*(short *)&pcVar1->__vtable->Cache,0x632,0,0)
    ;
    return;
  default:
    goto LAB_001fa764;
  case 8:
    HitMan__16cGameModeManager(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Patch.h */
                    /* end of inlined section */
    local_60.m_id = 0xb8d;
    pcVar1 = GetObject__17cSoundCacheHandle(&local_60);
    (*(code *)pcVar1->__vtable[1].Shutdown)
              ((int)&pcVar1->m_lSoundObjectFlag + (int)*(short *)&pcVar1->__vtable[1].Release);
    HitMan__16cGameModeManager(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Patch.h */
                    /* end of inlined section */
    local_5c.m_id = 0x60f;
    pcVar1 = GetObject__17cSoundCacheHandle(&local_5c);
    iVar3 = (int)*(short *)&pcVar1->__vtable[1].Release;
    pcVar2 = (code *)pcVar1->__vtable[1].Shutdown;
  }
  (*pcVar2)((int)&pcVar1->m_lSoundObjectFlag + iVar3);
LAB_001fa764:
  return;
}

void cGameModeManager::Update() {
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

__rb_tree_const_iterator<int> rb_tree<int, int, identity<int>, less<int>, __malloc_alloc_template<0> >::find(Sint32 &k) {
	__rb_tree_node<int> *y;
	__rb_tree_node<int> *x;
	rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<int> *x;
	__rb_tree_node<int> *x;
	Sint32 &y;
	__rb_tree_node<int> *x;
	__rb_tree_node<int> *x;
	__rb_tree_node<int> *x;
	rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<int> *x;
	Sint32 &x;
	rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> > *this;
	
  __rb_tree_base_iterator _Var1;
  int iVar2;
  __rb_tree_node_int_ *p_Var3;
  __rb_tree_base_iterator _Var4;
  
  _Var4.node = (__rb_tree_node_base *)this->header;
  p_Var3 = *(__rb_tree_node_int_ **)&((__rb_tree_node_int_ *)_Var4.node)->field0_0x0;
  if (p_Var3 == (__rb_tree_node_int_ *)0x0) {
    _Var1.node = (__rb_tree_node_base *)this->header;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/function.h */
    iVar2 = p_Var3->value_field;
    while( true ) {
                    /* end of inlined section */
      if (iVar2 < *k) {
        p_Var3 = *(__rb_tree_node_int_ **)&p_Var3->field0_0x0;
      }
      else {
        _Var4.node = &p_Var3->field0_0x0;
        p_Var3 = *(__rb_tree_node_int_ **)&p_Var3->field0_0x0;
      }
      if (p_Var3 == (__rb_tree_node_int_ *)0x0) break;
      iVar2 = p_Var3->value_field;
    }
    _Var1.node = (__rb_tree_node_base *)this->header;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/function.h */
                    /* end of inlined section */
  if ((_Var4.node != _Var1.node) && (*(int *)(_Var4.node + 1) <= *k)) {
    return (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var4.node;
  }
  return (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var1.node;
}

void* __malloc_alloc_template<0>::oom_malloc(unsigned int n) {
  void *pvVar1;
  
  do {
    (*(code *)0x0)();
    pvVar1 = malloc(n);
  } while (pvVar1 == (void *)0x0);
  return pvVar1;
}

void rb_tree<int, pair<int, int>, select1st<pair<int, int> >, less<int>, __malloc_alloc_template<0> >::__erase(__rb_tree_node<pair<const int,int> > *x) {
	__rb_tree_node<pair<const int,int> > *y;
	__rb_tree_node<pair<const int,int> > *x;
	__rb_tree_node<pair<const int,int> > *x;
	__rb_tree_node<pair<const int,int> > *x;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const int,int> > *p;
	__rb_tree_node<pair<const int,int> > *p;
	void *p;
	
  __rb_tree_node_pair_const_int_int___ *p_Var1;
  __rb_tree_node_pair_const_int_int___ *x_00;
  
  if (x != (__rb_tree_node_pair_const_int_int___ *)0x0) {
    x_00 = (__rb_tree_node_pair_const_int_int___ *)(x->field0_0x0).right;
    while( true ) {
      __erase__t7rb_tree5ZCiZt4pair2ZCiZiZt9select1st1Zt4pair2ZCiZiZt4less1ZCiZt23__malloc_alloc_template1i0Pt14__rb_tree_node1Zt4pair2ZCiZi
                (this,x_00);
      p_Var1 = (__rb_tree_node_pair_const_int_int___ *)(x->field0_0x0).left;
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
      free(x);
                    /* end of inlined section */
      if (p_Var1 == (__rb_tree_node_pair_const_int_int___ *)0x0) break;
      x_00 = (__rb_tree_node_pair_const_int_int___ *)(p_Var1->field0_0x0).right;
      x = p_Var1;
    }
  }
  return;
}

__rb_tree_iterator<pair<const int,int> > rb_tree<int, pair<int, int>, select1st<pair<int, int> >, less<int>, __malloc_alloc_template<0> >::lower_bound(int &k) {
	__rb_tree_node<pair<const int,int> > *y;
	__rb_tree_node<pair<const int,int> > *x;
	__rb_tree_node<pair<const int,int> > *x;
	__rb_tree_node<pair<const int,int> > *x;
	int &y;
	__rb_tree_node<pair<const int,int> > *x;
	__rb_tree_node<pair<const int,int> > *x;
	__rb_tree_node<pair<const int,int> > *x;
	
  int iVar1;
  __rb_tree_node_pair_const_int_int___ *p_Var2;
  __rb_tree_base_iterator _Var3;
  
  _Var3.node = (__rb_tree_node_base *)this->header;
  p_Var2 = *(__rb_tree_node_pair_const_int_int___ **)
            &((__rb_tree_node_pair_const_int_int___ *)_Var3.node)->field0_0x0;
  if (p_Var2 != (__rb_tree_node_pair_const_int_int___ *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/function.h */
    iVar1 = (p_Var2->value_field).first;
    while( true ) {
                    /* end of inlined section */
      if (iVar1 < *k) {
        p_Var2 = *(__rb_tree_node_pair_const_int_int___ **)&p_Var2->field0_0x0;
      }
      else {
        _Var3.node = &p_Var2->field0_0x0;
        p_Var2 = *(__rb_tree_node_pair_const_int_int___ **)&p_Var2->field0_0x0;
      }
      if (p_Var2 == (__rb_tree_node_pair_const_int_int___ *)0x0) break;
      iVar1 = (p_Var2->value_field).first;
    }
  }
  return (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var3.node;
}

__rb_tree_iterator<pair<const int,int> > rb_tree<int, pair<int, int>, select1st<pair<int, int> >, less<int>, __malloc_alloc_template<0> >::upper_bound(int &k) {
	__rb_tree_node<pair<const int,int> > *y;
	__rb_tree_node<pair<const int,int> > *x;
	__rb_tree_node<pair<const int,int> > *x;
	__rb_tree_node<pair<const int,int> > *x;
	int &x;
	__rb_tree_node<pair<const int,int> > *x;
	__rb_tree_node<pair<const int,int> > *x;
	__rb_tree_node<pair<const int,int> > *x;
	
  int iVar1;
  __rb_tree_node_pair_const_int_int___ *p_Var2;
  __rb_tree_base_iterator _Var3;
  
  _Var3.node = (__rb_tree_node_base *)this->header;
  p_Var2 = *(__rb_tree_node_pair_const_int_int___ **)
            &((__rb_tree_node_pair_const_int_int___ *)_Var3.node)->field0_0x0;
  if (p_Var2 != (__rb_tree_node_pair_const_int_int___ *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/function.h */
    iVar1 = (p_Var2->value_field).first;
    while( true ) {
                    /* end of inlined section */
      if (*k < iVar1) {
        _Var3.node = &p_Var2->field0_0x0;
        p_Var2 = *(__rb_tree_node_pair_const_int_int___ **)&p_Var2->field0_0x0;
      }
      else {
        p_Var2 = *(__rb_tree_node_pair_const_int_int___ **)&p_Var2->field0_0x0;
      }
      if (p_Var2 == (__rb_tree_node_pair_const_int_int___ *)0x0) break;
      iVar1 = (p_Var2->value_field).first;
    }
  }
  return (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var3.node;
}

void rb_tree<int, pair<int, int>, select1st<pair<int, int> >, less<int>, __malloc_alloc_template<0> >::erase(__rb_tree_iterator<pair<const int,int> > first, __rb_tree_iterator<pair<const int,int> > last) {
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const int,int> > *x;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	__rb_tree_iterator<pair<const int,int> > *this;
	__rb_tree_base_iterator *this;
	__rb_tree_node_base *y;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	__rb_tree_node_base *&rightmost;
	__rb_tree_node_base *&leftmost;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *y;
	__rb_tree_node_base *x;
	__rb_tree_node_base *x_parent;
	__rb_tree_color_type &a;
	__rb_tree_color_type tmp;
	__rb_tree_node_base *x;
	__rb_tree_node_base *x;
	__rb_tree_node_base *w;
	__rb_tree_node_base *x;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *y;
	__rb_tree_node_base *x;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *y;
	__rb_tree_node_base *x;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *y;
	__rb_tree_node_base *w;
	__rb_tree_node_base *x;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *y;
	__rb_tree_node_base *x;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *y;
	__rb_tree_node_base *x;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *y;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	
  __rb_tree_base_iterator _Var1;
  __rb_tree_node_base *p_Var2;
  __rb_tree_node_pair_const_int_int___ *p_Var3;
  __rb_tree_node_base *p_Var4;
  int iVar5;
  __rb_tree_node_base **pp_Var6;
  __rb_tree_node_base *p_Var7;
  __rb_tree_node_base *p_Var8;
  __rb_tree_node_base *p_Var9;
  __rb_tree_base_iterator pAddress;
  __rb_tree_node_base **pp_Var10;
  __rb_tree_node_base **pp_Var11;
  __rb_tree_iterator_pair_const_int_int___ local_60;
  
  _Var1.node = (__rb_tree_node_base *)this->header;
  if (first.field0_0x0.node == (__rb_tree_base_iterator)(_Var1.node)->left &&
      last.field0_0x0.node == (__rb_tree_base_iterator)_Var1.node) {
    if (this->node_count != 0) {
      __erase__t7rb_tree5ZCiZt4pair2ZCiZiZt9select1st1Zt4pair2ZCiZiZt4less1ZCiZt23__malloc_alloc_template1i0Pt14__rb_tree_node1Zt4pair2ZCiZi
                (this,(__rb_tree_node_pair_const_int_int___ *)(_Var1.node)->parent);
      (this->header->field0_0x0).left = &this->header->field0_0x0;
      (this->header->field0_0x0).parent = (__rb_tree_node_base *)0x0;
      (this->header->field0_0x0).right = &this->header->field0_0x0;
      this->node_count = 0;
    }
  }
  else {
    local_60.field0_0x0.node = first.field0_0x0.node;
    if (first.field0_0x0.node != last.field0_0x0.node) {
      do {
        _Var1 = local_60.field0_0x0.node;
        p_Var9 = *(__rb_tree_node_base **)((int)local_60.field0_0x0.node + 0xc);
        if (p_Var9 == (__rb_tree_node_base *)0x0) {
          p_Var9 = *(__rb_tree_node_base **)((int)local_60.field0_0x0.node + 4);
          if (local_60.field0_0x0.node == (__rb_tree_base_iterator)p_Var9->right) {
            do {
              local_60.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)p_Var9;
              p_Var9 = *(__rb_tree_node_base **)((int)local_60.field0_0x0.node + 4);
            } while (local_60.field0_0x0.node == (__rb_tree_base_iterator)p_Var9->right);
          }
          if (*(__rb_tree_node_base **)((int)local_60.field0_0x0.node + 0xc) != p_Var9) {
            local_60.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)p_Var9;
          }
          p_Var3 = this->header;
        }
        else if (p_Var9->left == (__rb_tree_node_base *)0x0) {
          p_Var3 = this->header;
          local_60.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)p_Var9;
        }
        else {
          do {
            p_Var9 = p_Var9->left;
          } while (p_Var9->left != (__rb_tree_node_base *)0x0);
          p_Var3 = this->header;
          local_60.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)p_Var9;
        }
        p_Var9 = (_Var1.node)->left;
        pp_Var11 = &(p_Var3->field0_0x0).right;
        pp_Var10 = &(p_Var3->field0_0x0).parent;
        pp_Var6 = &(p_Var3->field0_0x0).left;
        pAddress.node = _Var1.node;
        if (p_Var9 == (__rb_tree_node_base *)0x0) {
LAB_001faadc:
          p_Var9 = (pAddress.node)->right;
        }
        else {
          p_Var8 = (_Var1.node)->right;
          if (p_Var8 != (__rb_tree_node_base *)0x0) {
            if (p_Var8->left != (__rb_tree_node_base *)0x0) {
              for (pAddress.node = p_Var8->left; (pAddress.node)->left != (__rb_tree_node_base *)0x0
                  ; pAddress.node = (pAddress.node)->left) {
              }
              goto LAB_001faadc;
            }
            p_Var9 = p_Var8->right;
            pAddress.node = p_Var8;
          }
        }
        if (pAddress.node == _Var1.node) {
          p_Var8 = (pAddress.node)->parent;
          if (p_Var9 != (__rb_tree_node_base *)0x0) {
            p_Var9->parent = p_Var8;
          }
          if (*pp_Var10 == pAddress.node) {
            *pp_Var10 = p_Var9;
          }
          else {
            p_Var4 = (pAddress.node)->parent;
            if (p_Var4->left == pAddress.node) {
              p_Var4->left = p_Var9;
            }
            else {
              p_Var4->right = p_Var9;
            }
          }
          if (*pp_Var6 == _Var1.node) {
            if ((_Var1.node)->right == (__rb_tree_node_base *)0x0) {
              *pp_Var6 = (_Var1.node)->parent;
            }
            else {
              p_Var4 = p_Var9;
              if (p_Var9->left != (__rb_tree_node_base *)0x0) {
                for (p_Var4 = p_Var9->left; p_Var4->left != (__rb_tree_node_base *)0x0;
                    p_Var4 = p_Var4->left) {
                }
              }
              *pp_Var6 = p_Var4;
            }
            p_Var4 = *pp_Var11;
          }
          else {
            p_Var4 = *pp_Var11;
          }
          if (p_Var4 == _Var1.node) {
            if ((_Var1.node)->left == (__rb_tree_node_base *)0x0) {
              *pp_Var11 = (_Var1.node)->parent;
            }
            else {
              p_Var4 = p_Var9;
              if (p_Var9->right != (__rb_tree_node_base *)0x0) {
                for (p_Var4 = p_Var9->right; p_Var4->right != (__rb_tree_node_base *)0x0;
                    p_Var4 = p_Var4->right) {
                }
              }
              *pp_Var11 = p_Var4;
            }
            goto LAB_001fac40;
          }
          iVar5 = *(int *)pAddress.node;
        }
        else {
          (_Var1.node)->left->parent = pAddress.node;
          (pAddress.node)->left = (_Var1.node)->left;
          p_Var8 = pAddress.node;
          if (pAddress.node != (_Var1.node)->right) {
            p_Var8 = (pAddress.node)->parent;
            if (p_Var9 != (__rb_tree_node_base *)0x0) {
              p_Var9->parent = p_Var8;
            }
            (pAddress.node)->parent->left = p_Var9;
            (pAddress.node)->right = (_Var1.node)->right;
            (_Var1.node)->right->parent = pAddress.node;
          }
          if (*pp_Var10 == _Var1.node) {
            *pp_Var10 = pAddress.node;
          }
          else {
            p_Var4 = (_Var1.node)->parent;
            if (p_Var4->left == _Var1.node) {
              p_Var4->left = pAddress.node;
            }
            else {
              p_Var4->right = pAddress.node;
            }
          }
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
          iVar5 = *(int *)pAddress.node;
                    /* end of inlined section */
          (pAddress.node)->parent = (_Var1.node)->parent;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
          *(int *)pAddress.node = *(int *)_Var1.node;
          *(int *)_Var1.node = iVar5;
          pAddress.node = _Var1.node;
                    /* end of inlined section */
LAB_001fac40:
          iVar5 = *(int *)pAddress.node;
        }
        if (iVar5 != 0) {
          p_Var4 = *pp_Var10;
          while (p_Var9 != p_Var4) {
            if (p_Var9 == (__rb_tree_node_base *)0x0) {
              p_Var4 = p_Var8->left;
            }
            else {
              if (*(int *)p_Var9 != 1) break;
              p_Var4 = p_Var8->left;
            }
            if (p_Var9 == p_Var4) {
              p_Var4 = p_Var8->right;
              if (*(int *)p_Var4 == 0) {
                *(int *)p_Var4 = 1;
                *(int *)p_Var8 = 0;
                p_Var4 = p_Var8->right;
                p_Var8->right = p_Var4->left;
                if (p_Var4->left != (__rb_tree_node_base *)0x0) {
                  p_Var4->left->parent = p_Var8;
                }
                p_Var4->parent = p_Var8->parent;
                if (p_Var8 == *pp_Var10) {
                  *pp_Var10 = p_Var4;
                }
                else {
                  p_Var7 = p_Var8->parent;
                  if (p_Var8 == p_Var7->left) {
                    p_Var7->left = p_Var4;
                  }
                  else {
                    p_Var7->right = p_Var4;
                  }
                }
                p_Var4->left = p_Var8;
                p_Var8->parent = p_Var4;
                p_Var4 = p_Var8->right;
                p_Var7 = p_Var4->left;
              }
              else {
                p_Var7 = p_Var4->left;
              }
              p_Var2 = p_Var4->right;
              if ((p_Var7 != (__rb_tree_node_base *)0x0) && (*(int *)p_Var7 != 1)) {
LAB_001facf4:
                if ((p_Var2 == (__rb_tree_node_base *)0x0) || (*(int *)p_Var2 == 1)) {
                  if (p_Var7 != (__rb_tree_node_base *)0x0) {
                    *(int *)p_Var7 = 1;
                  }
                  p_Var7 = p_Var4->left;
                  *(int *)p_Var4 = 0;
                  p_Var4->left = p_Var7->right;
                  if (p_Var7->right != (__rb_tree_node_base *)0x0) {
                    p_Var7->right->parent = p_Var4;
                  }
                  p_Var7->parent = p_Var4->parent;
                  if (p_Var4 == *pp_Var10) {
                    *pp_Var10 = p_Var7;
                  }
                  else {
                    p_Var2 = p_Var4->parent;
                    if (p_Var4 == p_Var2->right) {
                      p_Var2->right = p_Var7;
                    }
                    else {
                      p_Var2->left = p_Var7;
                    }
                  }
                  p_Var7->right = p_Var4;
                  p_Var4->parent = p_Var7;
                  p_Var4 = p_Var8->right;
                  iVar5 = *(int *)p_Var8;
                }
                else {
                  iVar5 = *(int *)p_Var8;
                }
                *(int *)p_Var4 = iVar5;
                *(int *)p_Var8 = 1;
                if (p_Var4->right != (__rb_tree_node_base *)0x0) {
                  *(undefined4 *)p_Var4->right = 1;
                }
                p_Var4 = p_Var8->right;
                p_Var8->right = p_Var4->left;
                if (p_Var4->left != (__rb_tree_node_base *)0x0) {
                  p_Var4->left->parent = p_Var8;
                }
                p_Var4->parent = p_Var8->parent;
                if (p_Var8 == *pp_Var10) {
                  *pp_Var10 = p_Var4;
                }
                else {
                  p_Var7 = p_Var8->parent;
                  if (p_Var8 == p_Var7->left) {
                    p_Var7->left = p_Var4;
                  }
                  else {
                    p_Var7->right = p_Var4;
                  }
                }
                p_Var4->left = p_Var8;
                p_Var8->parent = p_Var4;
                break;
              }
              if (p_Var2 == (__rb_tree_node_base *)0x0) {
                *(int *)p_Var4 = 0;
              }
              else {
                if (*(int *)p_Var2 != 1) goto LAB_001facf4;
                *(int *)p_Var4 = 0;
              }
            }
            else {
              if (*(int *)p_Var4 == 0) {
                *(int *)p_Var4 = 1;
                *(int *)p_Var8 = 0;
                p_Var4 = p_Var8->left;
                p_Var8->left = p_Var4->right;
                if (p_Var4->right != (__rb_tree_node_base *)0x0) {
                  p_Var4->right->parent = p_Var8;
                }
                p_Var4->parent = p_Var8->parent;
                if (p_Var8 == *pp_Var10) {
                  *pp_Var10 = p_Var4;
                }
                else {
                  p_Var7 = p_Var8->parent;
                  if (p_Var8 == p_Var7->right) {
                    p_Var7->right = p_Var4;
                  }
                  else {
                    p_Var7->left = p_Var4;
                  }
                }
                p_Var4->right = p_Var8;
                p_Var8->parent = p_Var4;
                p_Var4 = p_Var8->left;
                p_Var7 = p_Var4->right;
              }
              else {
                p_Var7 = p_Var4->right;
              }
              p_Var2 = p_Var4->left;
              if ((p_Var7 != (__rb_tree_node_base *)0x0) && (*(int *)p_Var7 != 1)) {
LAB_001fae70:
                if ((p_Var2 == (__rb_tree_node_base *)0x0) || (*(int *)p_Var2 == 1)) {
                  if (p_Var7 != (__rb_tree_node_base *)0x0) {
                    *(int *)p_Var7 = 1;
                  }
                  p_Var7 = p_Var4->right;
                  *(int *)p_Var4 = 0;
                  p_Var4->right = p_Var7->left;
                  if (p_Var7->left != (__rb_tree_node_base *)0x0) {
                    p_Var7->left->parent = p_Var4;
                  }
                  p_Var7->parent = p_Var4->parent;
                  if (p_Var4 == *pp_Var10) {
                    *pp_Var10 = p_Var7;
                  }
                  else {
                    p_Var2 = p_Var4->parent;
                    if (p_Var4 == p_Var2->left) {
                      p_Var2->left = p_Var7;
                    }
                    else {
                      p_Var2->right = p_Var7;
                    }
                  }
                  p_Var7->left = p_Var4;
                  p_Var4->parent = p_Var7;
                  p_Var4 = p_Var8->left;
                  iVar5 = *(int *)p_Var8;
                }
                else {
                  iVar5 = *(int *)p_Var8;
                }
                *(int *)p_Var4 = iVar5;
                *(int *)p_Var8 = 1;
                if (p_Var4->left != (__rb_tree_node_base *)0x0) {
                  *(undefined4 *)p_Var4->left = 1;
                }
                p_Var4 = p_Var8->left;
                p_Var8->left = p_Var4->right;
                if (p_Var4->right != (__rb_tree_node_base *)0x0) {
                  p_Var4->right->parent = p_Var8;
                }
                p_Var4->parent = p_Var8->parent;
                if (p_Var8 == *pp_Var10) {
                  *pp_Var10 = p_Var4;
                }
                else {
                  p_Var7 = p_Var8->parent;
                  if (p_Var8 == p_Var7->right) {
                    p_Var7->right = p_Var4;
                  }
                  else {
                    p_Var7->left = p_Var4;
                  }
                }
                p_Var4->right = p_Var8;
                p_Var8->parent = p_Var4;
                break;
              }
              if (p_Var2 == (__rb_tree_node_base *)0x0) {
                *(int *)p_Var4 = 0;
              }
              else {
                if (*(int *)p_Var2 != 1) goto LAB_001fae70;
                *(int *)p_Var4 = 0;
              }
            }
            p_Var8 = p_Var8->parent;
            p_Var9 = p_Var8;
            p_Var4 = *pp_Var10;
          }
          if (p_Var9 != (__rb_tree_node_base *)0x0) {
            *(int *)p_Var9 = 1;
          }
        }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
        free(pAddress.node);
                    /* end of inlined section */
        this->node_count = this->node_count - 1;
      } while (local_60.field0_0x0.node != last.field0_0x0.node);
    }
  }
  return;
}

unsigned int rb_tree<int, pair<int, int>, select1st<pair<int, int> >, less<int>, __malloc_alloc_template<0> >::erase(int &x) {
	pair<__rb_tree_iterator<pair<const int,int> >,__rb_tree_iterator<pair<const int,int> > > p;
	unsigned int n;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	int &k;
	unsigned int &n;
	unsigned int &n;
	__rb_tree_iterator<pair<const int,int> > first;
	__rb_tree_iterator<pair<const int,int> > *this;
	__rb_tree_base_iterator *this;
	__rb_tree_node_base *y;
	
  __rb_tree_node_base *p_Var1;
  __rb_tree_iterator_pair_const_int_int___ first_00;
  __rb_tree_iterator_pair_const_int_int___ last;
  __rb_tree_base_iterator _Var2;
  pair___rb_tree_iterator_pair_const_int_int______rb_tree_iterator_pair_const_int_int_____ p;
  uint n;
  __rb_tree_iterator_pair_const_int_int___ first;
  
  first_00 = lower_bound__t7rb_tree5ZCiZt4pair2ZCiZiZt9select1st1Zt4pair2ZCiZiZt4less1ZCiZt23__malloc_alloc_template1i0RCi
                       (this,x);
  last = upper_bound__t7rb_tree5ZCiZt4pair2ZCiZiZt9select1st1Zt4pair2ZCiZiZt4less1ZCiZt23__malloc_alloc_template1i0RCi
                   (this,x);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
  n = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
  if (first_00.field0_0x0.node != last.field0_0x0.node) {
                    /* end of inlined section */
    _Var2.node = *(__rb_tree_node_base **)((int)first_00.field0_0x0.node + 0xc);
    first = first_00;
    while( true ) {
      if (_Var2.node == (__rb_tree_node_base *)0x0) {
        _Var2.node = *(__rb_tree_node_base **)((int)first.field0_0x0.node + 4);
        if (first.field0_0x0.node == (__rb_tree_base_iterator)(_Var2.node)->right) {
          do {
            first.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var2.node;
            _Var2.node = *(__rb_tree_node_base **)((int)first.field0_0x0.node + 4);
          } while (first.field0_0x0.node == (__rb_tree_base_iterator)(_Var2.node)->right);
        }
        if (*(__rb_tree_node_base **)((int)first.field0_0x0.node + 0xc) != _Var2.node) {
          first.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var2.node;
        }
      }
      else {
        p_Var1 = (_Var2.node)->left;
        while (first.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var2.node,
              p_Var1 != (__rb_tree_node_base *)0x0) {
          _Var2.node = (_Var2.node)->left;
          p_Var1 = (_Var2.node)->left;
        }
      }
      n = n + 1;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
      if (first.field0_0x0.node == last.field0_0x0.node) break;
      _Var2.node = *(__rb_tree_node_base **)((int)first.field0_0x0.node + 0xc);
    }
  }
                    /* end of inlined section */
  erase__t7rb_tree5ZCiZt4pair2ZCiZiZt9select1st1Zt4pair2ZCiZiZt4less1ZCiZt23__malloc_alloc_template1i0Gt18__rb_tree_iterator1Zt4pair2ZCiZiT1
            (this,first_00,last);
  return n;
}

__rb_tree_iterator<pair<const int,int> > rb_tree<int, pair<int, int>, select1st<pair<int, int> >, less<int>, __malloc_alloc_template<0> >::__insert(__rb_tree_node_base *x_, __rb_tree_node_base *y_, pair<const int,int> &v) {
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	void *result;
	pair<const int,int> &value;
	pair<const int,int> &x;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	__rb_tree_node_base *x;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *y;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *&root;
	__rb_tree_node_base *x;
	__rb_tree_node_base *y;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  __rb_tree_node_pair_const_int_int___ *p_Var4;
  int *piVar5;
  __rb_tree_node_base *p_Var6;
  ulong *puVar7;
  void *pvVar8;
  ulong uVar10;
  int *piVar11;
  __rb_tree_node_base **pp_Var12;
  __rb_tree_node_base *p_Var13;
  __rb_tree_node_base *p_Var14;
  int iVar15;
  __rb_tree_iterator_pair_const_int_int___ _Var16;
  ulong uVar9;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
  pvVar8 = malloc(0x18);
  uVar9 = (ulong)(int)pvVar8;
  if (uVar9 == 0) {
    pvVar8 = oom_malloc__t23__malloc_alloc_template1i0Ui(0x18);
    uVar9 = (ulong)(int)pvVar8;
  }
  puVar1 = (undefined *)((int)&v->second + 3);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)v & 7;
  uVar10 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
           uVar9 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)v - uVar3) >> uVar3 * 8;
  _Var16.field0_0x0.node = SUB84(uVar9,0);
  uVar2 = (int)_Var16.field0_0x0.node + 0x17U & 7;
  puVar7 = (ulong *)(((int)_Var16.field0_0x0.node + 0x17U) - uVar2);
  *puVar7 = *puVar7 & -1L << (uVar2 + 1) * 8 | uVar10 >> (7 - uVar2) * 8;
  uVar2 = (int)_Var16.field0_0x0.node + 0x10U & 7;
  puVar7 = (ulong *)(((int)_Var16.field0_0x0.node + 0x10U) - uVar2);
  *puVar7 = uVar10 << uVar2 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
                    /* end of inlined section */
  if ((__rb_tree_node_pair_const_int_int___ *)y_ == this->header) {
    y_->left = (__rb_tree_node_base *)_Var16.field0_0x0.node;
LAB_001fb154:
    p_Var4 = this->header;
    if ((__rb_tree_node_pair_const_int_int___ *)y_ == p_Var4) {
      y_->parent = (__rb_tree_node_base *)_Var16.field0_0x0.node;
      (this->header->field0_0x0).right = (__rb_tree_node_base *)_Var16.field0_0x0.node;
    }
    else {
      if (y_ != *(__rb_tree_node_base **)&p_Var4->field0_0x0) {
        *(__rb_tree_node_base **)((int)_Var16.field0_0x0.node + 4) = y_;
        goto LAB_001fb194;
      }
      *(__rb_tree_base_iterator *)&p_Var4->field0_0x0 = _Var16.field0_0x0.node;
    }
  }
  else {
    if (x_ != (__rb_tree_node_base *)0x0) {
      y_->left = (__rb_tree_node_base *)_Var16.field0_0x0.node;
      goto LAB_001fb154;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/function.h */
                    /* end of inlined section */
    if (v->first < *(int *)(y_ + 1)) {
      y_->left = (__rb_tree_node_base *)_Var16.field0_0x0.node;
      goto LAB_001fb154;
    }
    y_->right = (__rb_tree_node_base *)_Var16.field0_0x0.node;
    if (y_ == (this->header->field0_0x0).right) {
      (this->header->field0_0x0).right = (__rb_tree_node_base *)_Var16.field0_0x0.node;
    }
  }
  *(__rb_tree_node_base **)((int)_Var16.field0_0x0.node + 4) = y_;
LAB_001fb194:
  *(undefined4 *)((int)_Var16.field0_0x0.node + 8) = 0;
  *(undefined4 *)((int)_Var16.field0_0x0.node + 0xc) = 0;
  p_Var4 = this->header;
  *(undefined4 *)_Var16.field0_0x0.node = 0;
  pp_Var12 = &(p_Var4->field0_0x0).parent;
  if (uVar9 == (long)(int)(p_Var4->field0_0x0).parent) {
LAB_001fb3cc:
    p_Var13 = *pp_Var12;
  }
  else {
    if (*(int *)y_ == 0) {
      piVar11 = *(int **)((int)_Var16.field0_0x0.node + 4);
      do {
        piVar5 = *(int **)(piVar11[1] + 8);
        iVar15 = (int)uVar9;
        if (piVar11 == piVar5) {
          piVar11 = *(int **)(piVar11[1] + 0xc);
          if (piVar11 == (int *)0x0) {
            p_Var13 = *(__rb_tree_node_base **)(iVar15 + 4);
LAB_001fb1fc:
            uVar10 = (ulong)(int)p_Var13;
            p_Var14 = p_Var13->right;
            if (uVar9 == (long)(int)p_Var14) {
              p_Var13->right = p_Var14->left;
              if (p_Var14->left != (__rb_tree_node_base *)0x0) {
                p_Var14->left->parent = p_Var13;
              }
              p_Var14->parent = p_Var13->parent;
              if (uVar10 == (long)(int)*pp_Var12) {
                *pp_Var12 = p_Var14;
              }
              else {
                p_Var6 = p_Var13->parent;
                if (uVar10 == (long)(int)p_Var6->left) {
                  p_Var6->left = p_Var14;
                }
                else {
                  p_Var6->right = p_Var14;
                }
              }
              p_Var14->left = p_Var13;
              p_Var13->parent = p_Var14;
              p_Var13 = p_Var13->parent;
            }
            else {
              p_Var13 = *(__rb_tree_node_base **)(iVar15 + 4);
              uVar10 = uVar9;
            }
            *(undefined4 *)p_Var13 = 1;
            **(undefined4 **)(*(int *)((int)uVar10 + 4) + 4) = 0;
            p_Var13 = *(__rb_tree_node_base **)(*(int *)((int)uVar10 + 4) + 4);
            p_Var14 = p_Var13->left;
            p_Var13->left = p_Var14->right;
            if (p_Var14->right != (__rb_tree_node_base *)0x0) {
              p_Var14->right->parent = p_Var13;
            }
            p_Var14->parent = p_Var13->parent;
            if (p_Var13 == *pp_Var12) {
              *pp_Var12 = p_Var14;
            }
            else {
              p_Var6 = p_Var13->parent;
              if (p_Var13 == p_Var6->right) {
                p_Var6->right = p_Var14;
              }
              else {
                p_Var6->left = p_Var14;
              }
            }
            p_Var14->right = p_Var13;
            goto LAB_001fb3ac;
          }
          if (*piVar11 != 0) {
            p_Var13 = *(__rb_tree_node_base **)(iVar15 + 4);
            goto LAB_001fb1fc;
          }
          *piVar5 = 1;
          *piVar11 = 1;
LAB_001fb2d8:
          **(undefined4 **)(*(int *)(iVar15 + 4) + 4) = 0;
          uVar10 = (ulong)*(int *)(*(int *)(iVar15 + 4) + 4);
        }
        else {
          if (piVar5 == (int *)0x0) {
            p_Var13 = *(__rb_tree_node_base **)(iVar15 + 4);
          }
          else {
            if (*piVar5 == 0) {
              *piVar11 = 1;
              *piVar5 = 1;
              goto LAB_001fb2d8;
            }
            p_Var13 = *(__rb_tree_node_base **)(iVar15 + 4);
          }
          uVar10 = (ulong)(int)p_Var13;
          p_Var14 = p_Var13->left;
          if (uVar9 == (long)(int)p_Var14) {
            p_Var13->left = p_Var14->right;
            if (p_Var14->right != (__rb_tree_node_base *)0x0) {
              p_Var14->right->parent = p_Var13;
            }
            p_Var14->parent = p_Var13->parent;
            if (uVar10 == (long)(int)*pp_Var12) {
              *pp_Var12 = p_Var14;
            }
            else {
              p_Var6 = p_Var13->parent;
              if (uVar10 == (long)(int)p_Var6->right) {
                p_Var6->right = p_Var14;
              }
              else {
                p_Var6->left = p_Var14;
              }
            }
            p_Var14->right = p_Var13;
            p_Var13->parent = p_Var14;
            p_Var13 = p_Var13->parent;
          }
          else {
            p_Var13 = *(__rb_tree_node_base **)(iVar15 + 4);
            uVar10 = uVar9;
          }
          *(undefined4 *)p_Var13 = 1;
          **(undefined4 **)(*(int *)((int)uVar10 + 4) + 4) = 0;
          p_Var13 = *(__rb_tree_node_base **)(*(int *)((int)uVar10 + 4) + 4);
          p_Var14 = p_Var13->right;
          p_Var13->right = p_Var14->left;
          if (p_Var14->left != (__rb_tree_node_base *)0x0) {
            p_Var14->left->parent = p_Var13;
          }
          p_Var14->parent = p_Var13->parent;
          if (p_Var13 == *pp_Var12) {
            *pp_Var12 = p_Var14;
          }
          else {
            p_Var6 = p_Var13->parent;
            if (p_Var13 == p_Var6->left) {
              p_Var6->left = p_Var14;
            }
            else {
              p_Var6->right = p_Var14;
            }
          }
          p_Var14->left = p_Var13;
LAB_001fb3ac:
          p_Var13->parent = p_Var14;
        }
        if (uVar10 == (long)(int)*pp_Var12) {
          p_Var13 = *pp_Var12;
          goto LAB_001fb3d0;
        }
        if (**(int **)((int)uVar10 + 4) != 0) goto LAB_001fb3cc;
        piVar11 = *(int **)((int)uVar10 + 4);
        uVar9 = uVar10;
      } while( true );
    }
    p_Var13 = *pp_Var12;
  }
LAB_001fb3d0:
  *(undefined4 *)p_Var13 = 1;
  this->node_count = this->node_count + 1;
  return (__rb_tree_iterator_pair_const_int_int___)_Var16.field0_0x0.node;
}

__rb_tree_iterator<pair<const int,int> > rb_tree<int, pair<int, int>, select1st<pair<int, int> >, less<int>, __malloc_alloc_template<0> >::insert_equal(pair<const int,int> &v) {
	__rb_tree_node<pair<const int,int> > *y;
	__rb_tree_node<pair<const int,int> > *x;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	pair<const int,int> &x;
	__rb_tree_node<pair<const int,int> > *x;
	__rb_tree_node<pair<const int,int> > *x;
	__rb_tree_node<pair<const int,int> > *x;
	__rb_tree_node<pair<const int,int> > *x;
	
  __rb_tree_iterator_pair_const_int_int___ _Var1;
  __rb_tree_node_pair_const_int_int___ *x_;
  __rb_tree_node_pair_const_int_int___ *y_;
  
  y_ = this->header;
  x_ = *(__rb_tree_node_pair_const_int_int___ **)&y_->field0_0x0;
  if (x_ != (__rb_tree_node_pair_const_int_int___ *)0x0) {
    do {
      y_ = x_;
                    /* end of inlined section */
      if (v->first < (y_->value_field).first) {
        x_ = *(__rb_tree_node_pair_const_int_int___ **)&y_->field0_0x0;
      }
      else {
        x_ = *(__rb_tree_node_pair_const_int_int___ **)&y_->field0_0x0;
      }
    } while (x_ != (__rb_tree_node_pair_const_int_int___ *)0x0);
  }
  _Var1 = __insert__t7rb_tree5ZCiZt4pair2ZCiZiZt9select1st1Zt4pair2ZCiZiZt4less1ZCiZt23__malloc_alloc_template1i0P19__rb_tree_node_baseT1RCt4pair2ZCiZi
                    (this,&x_->field0_0x0,&y_->field0_0x0,v);
  return (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var1;
}

__rb_tree_const_iterator<pair<const int,int> > rb_tree<int, pair<int, int>, select1st<pair<int, int> >, less<int>, __malloc_alloc_template<0> >::lower_bound(int &k) {
	__rb_tree_node<pair<const int,int> > *y;
	__rb_tree_node<pair<const int,int> > *x;
	__rb_tree_node<pair<const int,int> > *x;
	__rb_tree_node<pair<const int,int> > *x;
	int &y;
	__rb_tree_node<pair<const int,int> > *x;
	__rb_tree_node<pair<const int,int> > *x;
	__rb_tree_node<pair<const int,int> > *x;
	
  int iVar1;
  __rb_tree_node_pair_const_int_int___ *p_Var2;
  __rb_tree_base_iterator _Var3;
  
  _Var3.node = (__rb_tree_node_base *)this->header;
  p_Var2 = *(__rb_tree_node_pair_const_int_int___ **)
            &((__rb_tree_node_pair_const_int_int___ *)_Var3.node)->field0_0x0;
  if (p_Var2 != (__rb_tree_node_pair_const_int_int___ *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/function.h */
    iVar1 = (p_Var2->value_field).first;
    while( true ) {
                    /* end of inlined section */
      if (iVar1 < *k) {
        p_Var2 = *(__rb_tree_node_pair_const_int_int___ **)&p_Var2->field0_0x0;
      }
      else {
        _Var3.node = &p_Var2->field0_0x0;
        p_Var2 = *(__rb_tree_node_pair_const_int_int___ **)&p_Var2->field0_0x0;
      }
      if (p_Var2 == (__rb_tree_node_pair_const_int_int___ *)0x0) break;
      iVar1 = (p_Var2->value_field).first;
    }
  }
  return (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var3.node;
}

__rb_tree_const_iterator<pair<const int,int> > rb_tree<int, pair<int, int>, select1st<pair<int, int> >, less<int>, __malloc_alloc_template<0> >::upper_bound(int &k) {
	__rb_tree_node<pair<const int,int> > *y;
	__rb_tree_node<pair<const int,int> > *x;
	__rb_tree_node<pair<const int,int> > *x;
	__rb_tree_node<pair<const int,int> > *x;
	int &x;
	__rb_tree_node<pair<const int,int> > *x;
	__rb_tree_node<pair<const int,int> > *x;
	__rb_tree_node<pair<const int,int> > *x;
	
  int iVar1;
  __rb_tree_node_pair_const_int_int___ *p_Var2;
  __rb_tree_base_iterator _Var3;
  
  _Var3.node = (__rb_tree_node_base *)this->header;
  p_Var2 = *(__rb_tree_node_pair_const_int_int___ **)
            &((__rb_tree_node_pair_const_int_int___ *)_Var3.node)->field0_0x0;
  if (p_Var2 != (__rb_tree_node_pair_const_int_int___ *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/function.h */
    iVar1 = (p_Var2->value_field).first;
    while( true ) {
                    /* end of inlined section */
      if (*k < iVar1) {
        _Var3.node = &p_Var2->field0_0x0;
        p_Var2 = *(__rb_tree_node_pair_const_int_int___ **)&p_Var2->field0_0x0;
      }
      else {
        p_Var2 = *(__rb_tree_node_pair_const_int_int___ **)&p_Var2->field0_0x0;
      }
      if (p_Var2 == (__rb_tree_node_pair_const_int_int___ *)0x0) break;
      iVar1 = (p_Var2->value_field).first;
    }
  }
  return (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var3.node;
}

unsigned int rb_tree<int, pair<int, int>, select1st<pair<int, int> >, less<int>, __malloc_alloc_template<0> >::count(int &k) {
	pair<__rb_tree_const_iterator<pair<const int,int> >,__rb_tree_const_iterator<pair<const int,int> > > p;
	unsigned int n;
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > *this;
	int &k;
	unsigned int &n;
	unsigned int &n;
	__rb_tree_const_iterator<pair<const int,int> > first;
	__rb_tree_const_iterator<pair<const int,int> > *this;
	__rb_tree_base_iterator *this;
	__rb_tree_node_base *y;
	
  __rb_tree_node_base *p_Var1;
  __rb_tree_const_iterator_pair_const_int_int___ _Var2;
  __rb_tree_base_iterator _Var3;
  pair___rb_tree_const_iterator_pair_const_int_int______rb_tree_const_iterator_pair_const_int_int_____
  p;
  uint n;
  __rb_tree_const_iterator_pair_const_int_int___ first;
  
  first = lower_bound__Ct7rb_tree5ZCiZt4pair2ZCiZiZt9select1st1Zt4pair2ZCiZiZt4less1ZCiZt23__malloc_alloc_template1i0RCi
                    (this,k);
  _Var2 = upper_bound__Ct7rb_tree5ZCiZt4pair2ZCiZiZt9select1st1Zt4pair2ZCiZiZt4less1ZCiZt23__malloc_alloc_template1i0RCi
                    (this,k);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
  n = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
  if (first.field0_0x0.node != _Var2.field0_0x0.node) {
                    /* end of inlined section */
    _Var3.node = *(__rb_tree_node_base **)((int)first.field0_0x0.node + 0xc);
    while( true ) {
      if (_Var3.node == (__rb_tree_node_base *)0x0) {
        _Var3.node = *(__rb_tree_node_base **)((int)first.field0_0x0.node + 4);
        if (first.field0_0x0.node == (__rb_tree_base_iterator)(_Var3.node)->right) {
          do {
            first.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var3.node;
            _Var3.node = *(__rb_tree_node_base **)((int)first.field0_0x0.node + 4);
          } while (first.field0_0x0.node == (__rb_tree_base_iterator)(_Var3.node)->right);
        }
        if (*(__rb_tree_node_base **)((int)first.field0_0x0.node + 0xc) != _Var3.node) {
          first.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var3.node;
        }
      }
      else {
        p_Var1 = (_Var3.node)->left;
        while (first.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var3.node,
              p_Var1 != (__rb_tree_node_base *)0x0) {
          _Var3.node = (_Var3.node)->left;
          p_Var1 = (_Var3.node)->left;
        }
      }
      n = n + 1;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
      if (first.field0_0x0.node == _Var2.field0_0x0.node) break;
      _Var3.node = *(__rb_tree_node_base **)((int)first.field0_0x0.node + 0xc);
    }
  }
                    /* end of inlined section */
  return n;
}

bool cHitTimer::Stop() {
  *(undefined4 *)this = 0;
  return true;
}

bool cHitTimer::Update() {
  if (*(int *)this != 0) {
    this->m_lElapsed = this->m_lElapsed + 1;
  }
  return true;
}

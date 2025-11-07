// STATUS: NOT STARTED

#include "patch.h"

// warning: multiple differing types with the same name (type name not equal)
struct cSoundObject {
protected:
	Sint32 m_lSoundObjectFlag;
	Sint32 m_lSoundObjectId;
	Sint32 m_lClassId;
	Sint32 m_lArgsType;
	Sint32 m_lRefCount;
	SGUID m_lResId;
	cSndobAttrRegisterSet m_SndobRegisterSet;
	bool m_bIsPaused;
	bool m_bRestartNoteAfterPause;
public:
	__vtbl_ptr_type *$vf1004;
	
	cSoundObject& operator=();
	cSoundObject();
	/* vtable[1] */ virtual void* _dyncastimpl();
	cSoundObject();
	/* vtable[2] */ virtual cSoundObject(cSoundObject*, int, void);
	/* vtable[3] */ virtual Sint32 ClassId();
	/* vtable[4] */ virtual void SetSoundObjectId(cSoundObject*, int, void);
	Sint32 SoundObjectId();
	/* vtable[5] */ virtual bool SetInstanceId();
	/* vtable[6] */ virtual Sint32 InstanceId();
	/* vtable[7] */ virtual Sint32 ArgsType();
	/* vtable[8] */ virtual SGUID ResourceId();
	/* vtable[9] */ virtual void HandleTimerCallback();
	/* vtable[10] */ virtual bool Update();
	/* vtable[11] */ virtual bool IsPlaying();
	/* vtable[12] */ virtual bool IsPaused();
	/* vtable[13] */ virtual cSndobAttrRegisterSet* SndobRegisterSet();
	/* vtable[14] */ virtual bool SetRegister();
	/* vtable[15] */ virtual Sint32 RegisterVal();
	/* vtable[16] */ virtual bool WantsViewChangeNotifications();
	/* vtable[17] */ virtual bool Play();
	/* vtable[18] */ virtual bool PlayPause();
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

struct __rb_tree_iterator<pair<const int,cHitControlGroup *> > : __rb_tree_base_iterator {
	__rb_tree_iterator<pair<const int,cHitControlGroup *> >& operator=();
	__rb_tree_iterator();
	__rb_tree_iterator();
	__rb_tree_iterator();
	pair<const int,cHitControlGroup *>& operator*();
	__rb_tree_iterator<pair<const int,cHitControlGroup *> >& operator++();
	__rb_tree_iterator<pair<const int,cHitControlGroup *> > operator++();
	__rb_tree_iterator<pair<const int,cHitControlGroup *> >& operator--();
	__rb_tree_iterator<pair<const int,cHitControlGroup *> > operator--();
};

struct pair<const int,cHitControlGroup *> {
	Sint32 first;
	cHitControlGroup *second;
};

struct __rb_tree_node<pair<const int,cHitControlGroup *> > : __rb_tree_node_base {
	pair<const int,cHitControlGroup *> value_field;
};

struct pair<__rb_tree_iterator<pair<const int,cHitControlGroup *> >,bool> {
	__rb_tree_iterator<pair<const int,cHitControlGroup *> > first;
	bool second;
};

struct simple_alloc<__rb_tree_node<int>,__malloc_alloc_template<0> > {
	simple_alloc<__rb_tree_node<int>,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static __rb_tree_node<int>* allocate(/* parameters unknown */);
	static __rb_tree_node<int>* allocate(/* parameters unknown */);
	static __rb_tree_node<int>* allocate(/* parameters unknown */);
	static __rb_tree_node<int>* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct pair<__rb_tree_const_iterator<int>,bool> {
	__rb_tree_const_iterator<int> first;
	bool second;
};

struct pair<__rb_tree_iterator<int>,bool> {
	__rb_tree_iterator<int> first;
	bool second;
};

struct simple_alloc<__list_node<cSoundCacheHandle>,__malloc_alloc_template<0> > {
	simple_alloc<__list_node<cSoundCacheHandle>,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static __list_node<cSoundCacheHandle>* allocate(/* parameters unknown */);
	static __list_node<cSoundCacheHandle>* allocate(/* parameters unknown */);
	static __list_node<cSoundCacheHandle>* allocate(/* parameters unknown */);
	static __list_node<cSoundCacheHandle>* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct simple_alloc<__rb_tree_node<pair<const int,cHitControlGroup *> >,__malloc_alloc_template<0> > {
	simple_alloc<__rb_tree_node<pair<const int,cHitControlGroup *> >,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static __rb_tree_node<pair<const int,cHitControlGroup *> >* allocate(/* parameters unknown */);
	static __rb_tree_node<pair<const int,cHitControlGroup *> >* allocate(/* parameters unknown */);
	static __rb_tree_node<pair<const int,cHitControlGroup *> >* allocate(/* parameters unknown */);
	static __rb_tree_node<pair<const int,cHitControlGroup *> >* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct simple_alloc<__list_node<unsigned int>,__malloc_alloc_template<0> > {
	simple_alloc<__list_node<unsigned int>,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static __list_node<unsigned int>* allocate(/* parameters unknown */);
	static __list_node<unsigned int>* allocate(/* parameters unknown */);
	static __list_node<unsigned int>* allocate(/* parameters unknown */);
	static __list_node<unsigned int>* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct __list_node<unsigned int> {
	void *next;
	void *prev;
	Uint32 data;
};

struct simple_alloc<__rb_tree_node<pair<const cSoundCacheHandle,int> >,__malloc_alloc_template<0> > {
	simple_alloc<__rb_tree_node<pair<const cSoundCacheHandle,int> >,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static __rb_tree_node<pair<const cSoundCacheHandle,int> >* allocate(/* parameters unknown */);
	static __rb_tree_node<pair<const cSoundCacheHandle,int> >* allocate(/* parameters unknown */);
	static __rb_tree_node<pair<const cSoundCacheHandle,int> >* allocate(/* parameters unknown */);
	static __rb_tree_node<pair<const cSoundCacheHandle,int> >* allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct pair<const cSoundCacheHandle,int> {
	cSoundCacheHandle first;
	Sint32 second;
};

struct __rb_tree_node<pair<const cSoundCacheHandle,int> > : __rb_tree_node_base {
	pair<const cSoundCacheHandle,int> value_field;
};

struct __rb_tree_iterator<pair<const cSoundCacheHandle,int> > : __rb_tree_base_iterator {
	__rb_tree_iterator<pair<const cSoundCacheHandle,int> >& operator=();
	__rb_tree_iterator();
	__rb_tree_iterator();
	__rb_tree_iterator();
	pair<const cSoundCacheHandle,int>& operator*();
	__rb_tree_iterator<pair<const cSoundCacheHandle,int> >& operator++();
	__rb_tree_iterator<pair<const cSoundCacheHandle,int> > operator++();
	__rb_tree_iterator<pair<const cSoundCacheHandle,int> >& operator--();
	__rb_tree_iterator<pair<const cSoundCacheHandle,int> > operator--();
};

struct pair<__rb_tree_iterator<pair<const cSoundCacheHandle,int> >,bool> {
	__rb_tree_iterator<pair<const cSoundCacheHandle,int> > first;
	bool second;
};

struct ERQTable<snd::VoxHitlist> {
	char *pName;
	VoxHitlist *pData;
	char **ppRowNames;
	u32 uNumRows;
	u32 uRowSize;
};

struct ERQTable<snd::GlobalHitlist> {
	char *pName;
	GlobalHitlist *pData;
	char **ppRowNames;
	u32 uNumRows;
	u32 uRowSize;
};

struct ERQTable<snd::Track> {
	char *pName;
	Track *pData;
	char **ppRowNames;
	u32 uNumRows;
	u32 uRowSize;
};

struct ERQTable<snd::Patch> {
	char *pName;
	Patch *pData;
	char **ppRowNames;
	u32 uNumRows;
	u32 uRowSize;
};

struct ERQTable<snd::HitPatch> {
	char *pName;
	HitPatch *pData;
	char **ppRowNames;
	u32 uNumRows;
	u32 uRowSize;
};

struct unary_function<pair<const int,cHitControlGroup *>,const int> {
};

struct select1st<pair<const int,cHitControlGroup *> > : unary_function<pair<const int,cHitControlGroup *>,const int> {
	select1st<pair<const int,cHitControlGroup *> >& operator=();
	select1st();
	select1st();
	Sint32& operator()();
};

struct unary_function<pair<const cSoundCacheHandle,int>,const cSoundCacheHandle> {
};

struct select1st<pair<const cSoundCacheHandle,int> > : unary_function<pair<const cSoundCacheHandle,int>,const cSoundCacheHandle> {
	select1st<pair<const cSoundCacheHandle,int> >& operator=();
	select1st();
	select1st();
	cSoundCacheHandle& operator()();
};

struct pair<__rb_tree_iterator<pair<const cSoundCacheHandle,int> >,__rb_tree_iterator<pair<const cSoundCacheHandle,int> > > {
	__rb_tree_iterator<pair<const cSoundCacheHandle,int> > first;
	__rb_tree_iterator<pair<const cSoundCacheHandle,int> > second;
};

cGlobalAttrRegisterSet GlobalAttrRegisterSet = {
	/* base class 0 = */ {
		/* .m_bIsInitted = */ false,
		/* .m_lNumRegs = */ 0,
		/* .m_lMinId = */ 0,
		/* .m_alVarReg = */ NULL,
		/* .m_pChildSet = */ NULL,
		/* .m_pDefaultSet = */ NULL,
		/* .m_bMustDeleteArray = */ false
	},
	/* .m_alPad = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0,
		/* [5] = */ 0,
		/* [6] = */ 0,
		/* [7] = */ 0,
		/* [8] = */ 0,
		/* [9] = */ 0
	},
	/* .m_lDuckPri = */ 0,
	/* .m_lVol = */ 0,
	/* .m_lFxType = */ 0,
	/* .m_lFxLevel = */ 0,
	/* .m_lPause = */ 0,
	/* .m_lIllegalRegLast = */ 0,
	/* .m_alAssociatedTrack = */ NULL
};

cRegisterSet GlobalVarRegisterSet = {
	/* .m_bIsInitted = */ false,
	/* .m_lNumRegs = */ 0,
	/* .m_lMinId = */ 0,
	/* .m_alVarReg = */ NULL,
	/* .m_pChildSet = */ NULL,
	/* .m_pDefaultSet = */ NULL,
	/* .m_bMustDeleteArray = */ false
};

cGlobalAttrRegisterSet GlobalAttrDefaultsRegisterSet = {
	/* base class 0 = */ {
		/* .m_bIsInitted = */ false,
		/* .m_lNumRegs = */ 0,
		/* .m_lMinId = */ 0,
		/* .m_alVarReg = */ NULL,
		/* .m_pChildSet = */ NULL,
		/* .m_pDefaultSet = */ NULL,
		/* .m_bMustDeleteArray = */ false
	},
	/* .m_alPad = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0,
		/* [4] = */ 0,
		/* [5] = */ 0,
		/* [6] = */ 0,
		/* [7] = */ 0,
		/* [8] = */ 0,
		/* [9] = */ 0
	},
	/* .m_lDuckPri = */ 0,
	/* .m_lVol = */ 0,
	/* .m_lFxType = */ 0,
	/* .m_lFxLevel = */ 0,
	/* .m_lPause = */ 0,
	/* .m_lIllegalRegLast = */ 0,
	/* .m_alAssociatedTrack = */ NULL
};

cSndobAttrRegisterSet SndobAttrDefaultsRegisterSet = {
	/* base class 0 = */ {
		/* .m_bIsInitted = */ false,
		/* .m_lNumRegs = */ 0,
		/* .m_lMinId = */ 0,
		/* .m_alVarReg = */ NULL,
		/* .m_pChildSet = */ NULL,
		/* .m_pDefaultSet = */ NULL,
		/* .m_bMustDeleteArray = */ false
	},
	/* .m_lPriority = */ 0,
	/* .m_lVolume = */ 0,
	/* .m_lInternalVolume = */ 0,
	/* .m_lPan = */ 0,
	/* .m_lPitch = */ 0,
	/* .m_lPaused = */ 0,
	/* .m_lFxtype = */ 0,
	/* .m_lFxlevel = */ 0,
	/* .m_lDuckpri = */ 0,
	/* .m_lIs3d = */ 0,
	/* .m_lIsHeadRelative = */ 0,
	/* .m_lMinDistance = */ 0,
	/* .m_lMaxDistance = */ 0,
	/* .m_lX = */ 0,
	/* .m_lY = */ 0,
	/* .m_lZ = */ 0,
	/* .m_lFilterType = */ 0,
	/* .m_lFilterCutoff = */ 0,
	/* .m_lFilterLevel = */ 0,
	/* .m_lAttack = */ 0,
	/* .m_lDecay = */ 0,
	/* .m_lIsStreamed = */ 0,
	/* .m_lStreamingBufferSizeMultiplier = */ 0,
	/* .m_lFadeDest = */ 0,
	/* .m_lFadeVar = */ 0,
	/* .m_lFadeSpeed = */ 0,
	/* .m_lPreload = */ 0,
	/* .m_lIsLooped = */ 0,
	/* .m_lFadeOn = */ 0,
	/* .m_lIsPlaying = */ 0,
	/* .m_lSource = */ 0,
	/* .m_lIllegalRegLast = */ 0
};

cTrackAttrRegisterSet TrackAttrDefaultsRegisterSet = {
	/* base class 0 = */ {
		/* .m_bIsInitted = */ false,
		/* .m_lNumRegs = */ 0,
		/* .m_lMinId = */ 0,
		/* .m_alVarReg = */ NULL,
		/* .m_pChildSet = */ NULL,
		/* .m_pDefaultSet = */ NULL,
		/* .m_bMustDeleteArray = */ false
	},
	/* .m_lPatchId = */ 0,
	/* .m_lWhatToDoWithUpdate = */ 0,
	/* .m_lTempo = */ 0,
	/* .m_lTarget = */ 0,
	/* .m_lMuteGroup = */ 0,
	/* .m_lInterrupt = */ 0,
	/* .m_lIsPositioned = */ 0,
	/* .m_lSpl = */ 0,
	/* .m_lFadesWhenOffScreen = */ 0,
	/* .m_lAllowMultipleInstances = */ 0,
	/* .m_lAssociatedTrack0 = */ 0,
	/* .m_lAssociatedTrack1 = */ 0,
	/* .m_lAssociatedTrack2 = */ 0,
	/* .m_lAssociatedTrack3 = */ 0,
	/* .m_lPad = */ {
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
		/* [19] = */ 0
	},
	/* .m_lIllegalRegLast = */ 0,
	/* .m_alAssociatedTrack = */ NULL
};

__vtbl_ptr_type cTrack virtual table[48] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::_dyncastimpl,
		/* .__delta2 = */ -6504
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrack::~cTrack,
		/* .__delta2 = */ -4624
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::ClassId,
		/* .__delta2 = */ -6304
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::SetSoundObjectId,
		/* .__delta2 = */ -6296
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::SetInstanceId,
		/* .__delta2 = */ -6280
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::InstanceId,
		/* .__delta2 = */ -6264
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::ArgsType,
		/* .__delta2 = */ -6256
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::ResourceId,
		/* .__delta2 = */ -6248
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::HandleTimerCallback,
		/* .__delta2 = */ 27816
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::Update,
		/* .__delta2 = */ -6232
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::IsPlaying,
		/* .__delta2 = */ -5240
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::IsPaused,
		/* .__delta2 = */ -5232
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::SndobRegisterSet,
		/* .__delta2 = */ -6208
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::SetRegister,
		/* .__delta2 = */ 30408
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::RegisterVal,
		/* .__delta2 = */ 30240
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrack::WantsViewChangeNotifications,
		/* .__delta2 = */ -4408
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::Play,
		/* .__delta2 = */ 29408
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::PlayPause,
		/* .__delta2 = */ 28344
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::AddRef,
		/* .__delta2 = */ 26608
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::Release,
		/* .__delta2 = */ 26688
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrack::Shutdown,
		/* .__delta2 = */ 27232
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrack::Init,
		/* .__delta2 = */ 27184
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::SetVolume,
		/* .__delta2 = */ -5216
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::SetPitch,
		/* .__delta2 = */ -5160
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::SetPan,
		/* .__delta2 = */ -5104
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::Pause,
		/* .__delta2 = */ 29488
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::Unpause,
		/* .__delta2 = */ 29608
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::Stop,
		/* .__delta2 = */ 29736
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::Kill,
		/* .__delta2 = */ 29928
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::SetFxType,
		/* .__delta2 = */ -5048
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::SetFxLevel,
		/* .__delta2 = */ -4992
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::Load,
		/* .__delta2 = */ -25016
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::Unload,
		/* .__delta2 = */ -25008
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::Cache,
		/* .__delta2 = */ -25000
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::Uncache,
		/* .__delta2 = */ -24992
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::SetLocalRegister,
		/* .__delta2 = */ 30584
	},
	/* [37] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::LocalRegisterVal,
		/* .__delta2 = */ 30376
	},
	/* [38] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::CancelNote,
		/* .__delta2 = */ 29824
	},
	/* [39] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::Update,
		/* .__delta2 = */ -5248
	},
	/* [40] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::IsValid,
		/* .__delta2 = */ 27792
	},
	/* [41] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::Track,
		/* .__delta2 = */ -4936
	},
	/* [42] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::Step,
		/* .__delta2 = */ 30104
	},
	/* [43] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrack::HitListID,
		/* .__delta2 = */ -4392
	},
	/* [44] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrack::GetHitListForGender,
		/* .__delta2 = */ -26616
	},
	/* [45] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrack::TrackDefRegisterVal,
		/* .__delta2 = */ -4440
	},
	/* [46] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrack::ControlGroupId,
		/* .__delta2 = */ -4400
	},
	/* [47] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type cTrackPlayer virtual table[46] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::_dyncastimpl,
		/* .__delta2 = */ -6504
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::~cTrackPlayer,
		/* .__delta2 = */ -5376
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::ClassId,
		/* .__delta2 = */ -6304
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::SetSoundObjectId,
		/* .__delta2 = */ -6296
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::SetInstanceId,
		/* .__delta2 = */ -6280
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::InstanceId,
		/* .__delta2 = */ -6264
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::ArgsType,
		/* .__delta2 = */ -6256
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::ResourceId,
		/* .__delta2 = */ -6248
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::HandleTimerCallback,
		/* .__delta2 = */ 27816
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::Update,
		/* .__delta2 = */ -6232
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::IsPlaying,
		/* .__delta2 = */ -5240
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::IsPaused,
		/* .__delta2 = */ -5232
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::SndobRegisterSet,
		/* .__delta2 = */ -6208
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::SetRegister,
		/* .__delta2 = */ 30408
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::RegisterVal,
		/* .__delta2 = */ 30240
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::WantsViewChangeNotifications,
		/* .__delta2 = */ -6136
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::Play,
		/* .__delta2 = */ 29408
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::PlayPause,
		/* .__delta2 = */ 28344
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::AddRef,
		/* .__delta2 = */ 26608
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::Release,
		/* .__delta2 = */ 26688
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::Shutdown,
		/* .__delta2 = */ 27664
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::Init,
		/* .__delta2 = */ 27488
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::SetVolume,
		/* .__delta2 = */ -5216
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::SetPitch,
		/* .__delta2 = */ -5160
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::SetPan,
		/* .__delta2 = */ -5104
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::Pause,
		/* .__delta2 = */ 29488
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::Unpause,
		/* .__delta2 = */ 29608
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::Stop,
		/* .__delta2 = */ 29736
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::Kill,
		/* .__delta2 = */ 29928
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::SetFxType,
		/* .__delta2 = */ -5048
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::SetFxLevel,
		/* .__delta2 = */ -4992
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::Load,
		/* .__delta2 = */ -25016
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::Unload,
		/* .__delta2 = */ -25008
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::Cache,
		/* .__delta2 = */ -25000
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::Uncache,
		/* .__delta2 = */ -24992
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::SetLocalRegister,
		/* .__delta2 = */ 30584
	},
	/* [37] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::LocalRegisterVal,
		/* .__delta2 = */ 30376
	},
	/* [38] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::CancelNote,
		/* .__delta2 = */ 29824
	},
	/* [39] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::Update,
		/* .__delta2 = */ -5248
	},
	/* [40] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::IsValid,
		/* .__delta2 = */ 27792
	},
	/* [41] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::Track,
		/* .__delta2 = */ -4936
	},
	/* [42] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cTrackPlayer::Step,
		/* .__delta2 = */ 30104
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type cSampleChannel virtual table[41] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::_dyncastimpl,
		/* .__delta2 = */ -6504
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSampleChannel::~cSampleChannel,
		/* .__delta2 = */ -23432
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::ClassId,
		/* .__delta2 = */ -6304
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::SetSoundObjectId,
		/* .__delta2 = */ -6296
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::SetInstanceId,
		/* .__delta2 = */ -6280
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::InstanceId,
		/* .__delta2 = */ -6264
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::ArgsType,
		/* .__delta2 = */ -6256
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::ResourceId,
		/* .__delta2 = */ -6248
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::HandleTimerCallback,
		/* .__delta2 = */ -6240
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::Update,
		/* .__delta2 = */ -6232
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSampleChannel::IsPlaying,
		/* .__delta2 = */ -22696
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSampleChannel::IsPaused,
		/* .__delta2 = */ -5384
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::SndobRegisterSet,
		/* .__delta2 = */ -6208
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::SetRegister,
		/* .__delta2 = */ -6200
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSampleChannel::RegisterVal,
		/* .__delta2 = */ -5392
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::WantsViewChangeNotifications,
		/* .__delta2 = */ -6136
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSampleChannel::Play,
		/* .__delta2 = */ -5576
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::PlayPause,
		/* .__delta2 = */ -6120
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::AddRef,
		/* .__delta2 = */ 26608
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::Release,
		/* .__delta2 = */ 26688
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSampleChannel::Shutdown,
		/* .__delta2 = */ -23280
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSampleChannel::Init,
		/* .__delta2 = */ -5584
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSampleChannel::SetVolume,
		/* .__delta2 = */ -23328
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSampleChannel::SetPitch,
		/* .__delta2 = */ -23048
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSampleChannel::SetPan,
		/* .__delta2 = */ -23040
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSampleChannel::Pause,
		/* .__delta2 = */ -22640
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSampleChannel::Unpause,
		/* .__delta2 = */ -22544
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSampleChannel::Stop,
		/* .__delta2 = */ -5528
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSampleChannel::Kill,
		/* .__delta2 = */ -5480
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSampleChannel::SetFxType,
		/* .__delta2 = */ -5440
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSampleChannel::SetFxLevel,
		/* .__delta2 = */ -5432
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSampleChannel::Load,
		/* .__delta2 = */ -5424
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSampleChannel::Unload,
		/* .__delta2 = */ -5416
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSampleChannel::Cache,
		/* .__delta2 = */ -5408
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSampleChannel::Uncache,
		/* .__delta2 = */ -5400
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSampleChannel::NoteOn,
		/* .__delta2 = */ -22856
	},
	/* [37] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSampleChannel::NoteOff,
		/* .__delta2 = */ -22768
	},
	/* [38] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSampleChannel::SetPatch,
		/* .__delta2 = */ -23232
	},
	/* [39] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSampleChannel::Snd,
		/* .__delta2 = */ -22904
	},
	/* [40] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type cSamplePatch virtual table[41] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSamplePatch::_dyncastimpl,
		/* .__delta2 = */ -5712
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSamplePatch::~cSamplePatch,
		/* .__delta2 = */ -24752
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::ClassId,
		/* .__delta2 = */ -6304
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::SetSoundObjectId,
		/* .__delta2 = */ -6296
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::SetInstanceId,
		/* .__delta2 = */ -6280
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::InstanceId,
		/* .__delta2 = */ -6264
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::ArgsType,
		/* .__delta2 = */ -6256
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::ResourceId,
		/* .__delta2 = */ -6248
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::HandleTimerCallback,
		/* .__delta2 = */ -6240
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::Update,
		/* .__delta2 = */ -6232
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSamplePatch::IsPlaying,
		/* .__delta2 = */ -24336
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::IsPaused,
		/* .__delta2 = */ -6216
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::SndobRegisterSet,
		/* .__delta2 = */ -6208
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::SetRegister,
		/* .__delta2 = */ -6200
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::RegisterVal,
		/* .__delta2 = */ -6168
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::WantsViewChangeNotifications,
		/* .__delta2 = */ -6136
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSamplePatch::Play,
		/* .__delta2 = */ -5680
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::PlayPause,
		/* .__delta2 = */ -6120
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::AddRef,
		/* .__delta2 = */ 26608
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::Release,
		/* .__delta2 = */ 26688
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSamplePatch::Shutdown,
		/* .__delta2 = */ -23896
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSamplePatch::Init,
		/* .__delta2 = */ -24408
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSamplePatch::SetVolume,
		/* .__delta2 = */ -24648
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSamplePatch::SetPitch,
		/* .__delta2 = */ -24600
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSamplePatch::SetPan,
		/* .__delta2 = */ -24552
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSamplePatch::Pause,
		/* .__delta2 = */ -5656
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSamplePatch::Unpause,
		/* .__delta2 = */ -5648
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSamplePatch::Stop,
		/* .__delta2 = */ -5672
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSamplePatch::Kill,
		/* .__delta2 = */ -5664
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSamplePatch::SetFxType,
		/* .__delta2 = */ -24504
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSamplePatch::SetFxLevel,
		/* .__delta2 = */ -24456
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSamplePatch::Load,
		/* .__delta2 = */ -23832
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSamplePatch::Unload,
		/* .__delta2 = */ -23760
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSamplePatch::Cache,
		/* .__delta2 = */ -23696
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSamplePatch::Uncache,
		/* .__delta2 = */ -23672
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSamplePatch::CreateSnd,
		/* .__delta2 = */ -24280
	},
	/* [37] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSamplePatch::FreeSnd,
		/* .__delta2 = */ -24008
	},
	/* [38] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSamplePatch::CreateChannel,
		/* .__delta2 = */ -23648
	},
	/* [39] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSamplePatch::TempGetSnd,
		/* .__delta2 = */ -5640
	},
	/* [40] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type cHitControlGroup virtual table[37] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::_dyncastimpl,
		/* .__delta2 = */ -6504
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cHitControlGroup::~cHitControlGroup,
		/* .__delta2 = */ -6104
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::ClassId,
		/* .__delta2 = */ -6304
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::SetSoundObjectId,
		/* .__delta2 = */ -6296
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::SetInstanceId,
		/* .__delta2 = */ -6280
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::InstanceId,
		/* .__delta2 = */ -6264
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::ArgsType,
		/* .__delta2 = */ -6256
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::ResourceId,
		/* .__delta2 = */ -6248
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::HandleTimerCallback,
		/* .__delta2 = */ -6240
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::Update,
		/* .__delta2 = */ -6232
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cHitControlGroup::IsPlaying,
		/* .__delta2 = */ -5816
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cHitControlGroup::IsPaused,
		/* .__delta2 = */ -5808
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::SndobRegisterSet,
		/* .__delta2 = */ -6208
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cHitControlGroup::SetRegister,
		/* .__delta2 = */ 23264
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cHitControlGroup::RegisterVal,
		/* .__delta2 = */ -5800
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::WantsViewChangeNotifications,
		/* .__delta2 = */ -6136
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cHitControlGroup::Play,
		/* .__delta2 = */ -5920
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::PlayPause,
		/* .__delta2 = */ -6120
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::AddRef,
		/* .__delta2 = */ 26608
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::Release,
		/* .__delta2 = */ 26688
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cHitControlGroup::Shutdown,
		/* .__delta2 = */ -5928
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cHitControlGroup::Init,
		/* .__delta2 = */ -5936
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cHitControlGroup::SetVolume,
		/* .__delta2 = */ 23272
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cHitControlGroup::SetPitch,
		/* .__delta2 = */ -5896
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cHitControlGroup::SetPan,
		/* .__delta2 = */ -5888
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cHitControlGroup::Pause,
		/* .__delta2 = */ -5864
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cHitControlGroup::Unpause,
		/* .__delta2 = */ -5856
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cHitControlGroup::Stop,
		/* .__delta2 = */ -5912
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cHitControlGroup::Kill,
		/* .__delta2 = */ -5904
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cHitControlGroup::SetFxType,
		/* .__delta2 = */ -5880
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cHitControlGroup::SetFxLevel,
		/* .__delta2 = */ -5872
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cHitControlGroup::Load,
		/* .__delta2 = */ -5848
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cHitControlGroup::Unload,
		/* .__delta2 = */ -5840
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cHitControlGroup::Cache,
		/* .__delta2 = */ -5832
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cHitControlGroup::Uncache,
		/* .__delta2 = */ -5824
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type cSoundObject virtual table[37] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::_dyncastimpl,
		/* .__delta2 = */ -6504
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::~cSoundObject,
		/* .__delta2 = */ -6392
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::ClassId,
		/* .__delta2 = */ -6304
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::SetSoundObjectId,
		/* .__delta2 = */ -6296
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::SetInstanceId,
		/* .__delta2 = */ -6280
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::InstanceId,
		/* .__delta2 = */ -6264
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::ArgsType,
		/* .__delta2 = */ -6256
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::ResourceId,
		/* .__delta2 = */ -6248
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::HandleTimerCallback,
		/* .__delta2 = */ -6240
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::Update,
		/* .__delta2 = */ -6232
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::IsPlaying,
		/* .__delta2 = */ -6224
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::IsPaused,
		/* .__delta2 = */ -6216
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::SndobRegisterSet,
		/* .__delta2 = */ -6208
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::SetRegister,
		/* .__delta2 = */ -6200
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::RegisterVal,
		/* .__delta2 = */ -6168
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::WantsViewChangeNotifications,
		/* .__delta2 = */ -6136
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::Play,
		/* .__delta2 = */ -6128
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::PlayPause,
		/* .__delta2 = */ -6120
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::AddRef,
		/* .__delta2 = */ 26608
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cSoundObject::Release,
		/* .__delta2 = */ 26688
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

cHitMan *g_pHitMan = NULL;

TrackDataReader* TrackDataReader::TrackDataReader() {
  this->m_pData = (TrackData *)0x0;
  this->m_iIndex = 0;
  return this;
}

TrackDataReader* TrackDataReader::TrackDataReader(TrackData &data) {
  this->m_pData = data;
  this->m_iIndex = 0;
  return this;
}

TrackDataReader* TrackDataReader::TrackDataReader(TrackDataReader &data) {
  this->m_pData = data->m_pData;
  this->m_iIndex = data->m_iIndex;
  return this;
}

TrackDataReader& TrackDataReader::operator=(TrackData &data) {
  this->m_pData = data;
  this->m_iIndex = 0;
  return this;
}

TrackDataReader& TrackDataReader::operator=(TrackDataReader &data) {
  this->m_pData = data->m_pData;
  this->m_iIndex = data->m_iIndex;
  return this;
}

TrackDataReader& TrackDataReader::operator--() {
  this->m_iIndex = this->m_iIndex + -1;
  return this;
}

TrackDataReader& TrackDataReader::operator+=(s32 incVal) {
  this->m_iIndex = this->m_iIndex + incVal;
  return this;
}

RegUnion& TrackDataReader::ReadCommand() {
	unsigned int n;
	
  RegUnion *pRVar1;
  int iVar2;
  RegUnion RVar3;
  
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
  pRVar1 = (this->m_pData->trackData).pData;
  if (pRVar1 == (RegUnion *)0x0) {
    RVar3 = (RegUnion)0x0;
  }
  else {
    RVar3 = pRVar1[-1];
  }
                    /* end of inlined section */
  iVar2 = this->m_iIndex;
  if ((int)RVar3 <= iVar2) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    pRVar1 = (this->m_pData->trackData).pData;
    if (pRVar1 == (RegUnion *)0x0) {
      RVar3 = (RegUnion)0x0;
    }
    else {
      RVar3 = pRVar1[-1];
    }
                    /* end of inlined section */
    return (this->m_pData->trackData).pData + (int)RVar3 + -1;
  }
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
  this->m_iIndex = iVar2 + 1;
                    /* end of inlined section */
  return (this->m_pData->trackData).pData + iVar2;
}

bool TrackDataReader::IsValid() {
  return this->m_pData != (TrackData *)0x0;
}

void TrackDataReader::JumpToEnd() {
  RegUnion *pRVar1;
  RegUnion RVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
  pRVar1 = (this->m_pData->trackData).pData;
  if (pRVar1 == (RegUnion *)0x0) {
    RVar2 = (RegUnion)0x0;
  }
  else {
    RVar2 = pRVar1[-1];
  }
                    /* end of inlined section */
  this->m_iIndex = (int)RVar2 + -1;
  return;
}

void HandleTrackPlayerFlowControlError(cTrackPlayer *pTrackPlayer, char *szMsg2) {
	cSoundObject *this;
	
  int inInt;
  cSoundObject__107_1582__vtable *pcVar1;
  CTGDump *pCVar2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  inInt = (pTrackPlayer->field0_0x0).m_lSoundObjectId;
                    /* end of inlined section */
  pCVar2 = __ls__7CTGDumpPCc(&ctgDump,"Track Error: Track ");
  pCVar2 = __ls__7CTGDumpi(pCVar2,inInt);
  __ls__7CTGDumpPCc(pCVar2,"\n");
  pCVar2 = __ls__7CTGDumpPCc(&ctgDump,szMsg2);
  __ls__7CTGDumpPCc(pCVar2,"\n");
  pcVar1 = (pTrackPlayer->field0_0x0).__vtable;
  (*(code *)pcVar1[1].SetVolume)
            ((int)&(pTrackPlayer->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar1[1].Init);
  return;
}

void cHitMan::SetTrackFlowErrorHandler(void (*pfnTrackFlowErrorHandler)(/* parameters unknown */)) {
  this->m_pfnTrackFlowErrorHandler = pfnTrackFlowErrorHandler;
  return;
}

void cHitMan::HandleTrackFlowError(cTrackPlayer *pTrackPlayer, char *szMsg2) {
  (*(code *)this->m_pfnTrackFlowErrorHandler)(pTrackPlayer,szMsg2);
  return;
}

bool cHitMan::RegisterSourceDataRequestHandler(bool (*pfnHandler)(/* parameters unknown */)) {
  this->m_pfnHandleSourceDataFieldRequest = pfnHandler;
  return true;
}

bool cHitMan::GetSourceDataField(Sint32 lSourceId, Sint32 lRegisterId, Sint32 *plValue) {
  undefined uVar1;
  
  uVar1 = (*(code *)this->m_pfnHandleSourceDataFieldRequest)(lSourceId,lRegisterId,plValue);
  return (bool)uVar1;
}

cHitControlGroup* cHitMan::ControlGroup(Sint32 lControlGroupId) {
	cHitControlGroup *pControlGroup;
	map<int,cHitControlGroup *,less<int>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const int,cHitControlGroup *> > *x;
	
  __rb_tree_iterator_pair_const_int_cHitControlGroup_____ _Var1;
  cHitControlGroup *pcVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  rb_tree_int_pair_const_int_cHitControlGroup____select1st_pair_const_int_cHitControlGroup______less_int____malloc_alloc_template_0___
  local_60;
  int local_50;
  undefined4 local_4c;
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
                    /* inlined from c:/eor/src2/games/sims/MSrc/map.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40[0] = lControlGroupId;
  _Var1 = find__t7rb_tree5ZiZt4pair2ZCiZP16cHitControlGroupZt9select1st1Zt4pair2ZCiZP16cHitControlGroupZt4less1ZiZt23__malloc_alloc_template1i0RCi
                    (&(this->m_ControlGroupMap).t,local_40);
                    /* end of inlined section */
  if (_Var1.field0_0x0.node == (__rb_tree_node_base *)(this->m_ControlGroupMap).t.header) {
    pcVar2 = (cHitControlGroup *)__builtin_new(0xd4);
    pcVar2 = __16cHitControlGroupi(pcVar2,local_40[0]);
                    /* inlined from Pair.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/map.h */
    local_4c = 0;
    local_50 = local_40[0];
    insert_unique__t7rb_tree5ZiZt4pair2ZCiZP16cHitControlGroupZt9select1st1Zt4pair2ZCiZP16cHitControlGroupZt4less1ZiZt23__malloc_alloc_template1i0RCt4pair2ZCiZP16cHitControlGroup
              (&local_60,(pair_const_int_cHitControlGroup___ *)&this->m_ControlGroupMap);
                    /* end of inlined section */
    ((local_60.header)->value_field).second = pcVar2;
  }
  else {
                    /* end of inlined section */
    pcVar2 = *(cHitControlGroup **)((int)_Var1.field0_0x0.node + 0x14);
  }
  return pcVar2;
}

cHitControlGroup* cHitControlGroup::cHitControlGroup(Sint32 lControlGroupId) {
	cSoundObject *this;
	set<int,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> > *this;
	void *result;
	rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> > *this;
	
  __rb_tree_node_int_ *p_Var1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  *(undefined4 *)&(this->field0_0x0).m_SndobRegisterSet.field0_0x0 = 0;
  (this->field0_0x0).m_lRefCount = 0;
  (this->field0_0x0).m_lArgsType = 0;
  *(undefined4 *)&(this->field0_0x0).m_bIsPaused = 0;
  (this->field0_0x0).m_lSoundObjectFlag = -0x54523502;
  (this->field0_0x0).__vtable = (cSoundObject__107_1582__vtable *)_vt_12cSoundObject;
  (this->field0_0x0).m_lClassId = -0x1b613809;
  Init__21cSndobAttrRegisterSetii(&(this->field0_0x0).m_SndobRegisterSet,0x1f,0x11);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/set.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (cSoundObject__107_1582__vtable *)_vt_16cHitControlGroup;
                    /* inlined from Tree.h */
  (this->m_TrackIdSet).t.node_count = 0;
  (this->m_TrackIdSet).t.field_0x4 = 0;
  p_Var1 = (__rb_tree_node_int_ *)malloc(0x14);
  if (p_Var1 == (__rb_tree_node_int_ *)0x0) {
    p_Var1 = (__rb_tree_node_int_ *)oom_malloc__t23__malloc_alloc_template1i0Ui(0x14);
    (this->m_TrackIdSet).t.header = p_Var1;
  }
  else {
    (this->m_TrackIdSet).t.header = p_Var1;
  }
                    /* end of inlined section */
                    /* inlined from Tree.h */
  *(undefined4 *)&p_Var1->field0_0x0 = 0;
                    /* end of inlined section */
                    /* inlined from Tree.h */
  (((this->m_TrackIdSet).t.header)->field0_0x0).parent = (__rb_tree_node_base *)0x0;
  p_Var1 = (this->m_TrackIdSet).t.header;
  (p_Var1->field0_0x0).left = &p_Var1->field0_0x0;
  p_Var1 = (this->m_TrackIdSet).t.header;
  (p_Var1->field0_0x0).right = &p_Var1->field0_0x0;
                    /* end of inlined section */
  this->m_lControlGroupId = lControlGroupId;
  this->m_lVolume = 0x400;
  return this;
}

void cHitControlGroup::AddTrack(Sint32 lSndobId) {
	set<int,less<int>,__malloc_alloc_template<0> > *this;
	pair<__rb_tree_iterator<int>,bool> p;
	
  pair___rb_tree_iterator_int__bool_ p;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/set.h */
  insert_unique__t7rb_tree5ZiZiZt8identity1ZiZt4less1ZiZt23__malloc_alloc_template1i0RCi
            ((rb_tree_int_int_identity_int__less_int____malloc_alloc_template_0___ *)&p,
             (int *)&this->m_TrackIdSet);
  return;
}

bool cHitControlGroup::SetRegister(Sint32 lRegisterId, Sint32 lValue, bool bDeferred) {
                    /* end of inlined section */
  return true;
}

bool cHitControlGroup::SetVolume(Sint32 lVolume) {
	__list_iterator<cSoundCacheHandle> itTrackPlayer;
	cHitControlGroup *this;
	cSoundCacheHandle trackPlayer;
	cHitControlGroup *this;
	Sint32 lSndobId;
	__rb_tree_node<int> *x;
	
  __list_node_cSoundCacheHandle_ *p_Var1;
  cHitMan *pcVar2;
  bool bVar3;
  __rb_tree_const_iterator_int_ _Var4;
  cTrack *this_00;
  __list_node_cSoundCacheHandle_ *p_Var5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  cSoundCacheHandle trackPlayer;
  int lSndobId;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  pcVar2 = g_pHitMan;
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* end of inlined section */
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  this->m_lVolume = lVolume;
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
  p_Var1 = (pcVar2->m_TrackUpdateList).node;
                    /* end of inlined section */
  p_Var5 = (__list_node_cSoundCacheHandle_ *)p_Var1->next;
  if (p_Var5 == p_Var1) {
    return true;
  }
                    /* end of inlined section */
  trackPlayer.m_id = (p_Var5->data).m_id;
  do {
    bVar3 = IsInMemory__C17cSoundCacheHandle(&trackPlayer);
    if (bVar3) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
      lSndobId = trackPlayer.m_id;
      _Var4 = find__Ct7rb_tree5ZiZiZt8identity1ZiZt4less1ZiZt23__malloc_alloc_template1i0RCi
                        (&(this->m_TrackIdSet).t,&lSndobId);
                    /* end of inlined section */
      if (_Var4.field0_0x0.node != (__rb_tree_node_base *)(this->m_TrackIdSet).t.header) {
        this_00 = GetTrackObject__17cSoundCacheHandle(&trackPlayer);
        UpdateVolPan__12cTrackPlayer(&this_00->field0_0x0);
        goto LAB_00275b60;
      }
      p_Var5 = (__list_node_cSoundCacheHandle_ *)p_Var5->next;
    }
    else {
LAB_00275b60:
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
      p_Var5 = (__list_node_cSoundCacheHandle_ *)p_Var5->next;
    }
                    /* end of inlined section */
    if (p_Var5 == p_Var1) {
      return true;
    }
    trackPlayer.m_id = (p_Var5->data).m_id;
  } while( true );
}

cHitMan* cHitMan::cHitMan(VoxHitlistTable *pVoxHitlist) {
	void *result;
	map<int,cHitControlGroup *,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	void *result;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	void *result;
	map<const cSoundCacheHandle,int,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	void *result;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	
  __list_node_cSoundCacheHandle_ *p_Var1;
  __rb_tree_node_pair_const_int_cHitControlGroup_____ *p_Var2;
  __list_node_unsigned_int_ *p_Var3;
  __rb_tree_node_pair_const_cSoundCacheHandle_int___ *p_Var4;
  cSoundCache *pcVar5;
  
  this->m_pSndSys = (cIGZSndSys *)0x0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
                    /* end of inlined section */
  this->m_lPauseRefs = 0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
  (this->m_TrackUpdateList).length = 0;
  p_Var1 = (__list_node_cSoundCacheHandle_ *)malloc(0xc);
  if (p_Var1 == (__list_node_cSoundCacheHandle_ *)0x0) {
    p_Var1 = (__list_node_cSoundCacheHandle_ *)oom_malloc__t23__malloc_alloc_template1i0Ui(0xc);
    (this->m_TrackUpdateList).node = p_Var1;
  }
  else {
    (this->m_TrackUpdateList).node = p_Var1;
  }
  p_Var1->next = p_Var1;
  p_Var1 = (this->m_TrackUpdateList).node;
  p_Var1->prev = p_Var1;
                    /* end of inlined section */
  this->m_pCallbackTimer = (undefined1 *)0x0;
  *(undefined4 *)&this->m_bCallbackEnabled = 0;
                    /* inlined from Tree.h */
  (this->m_ControlGroupMap).t.node_count = 0;
  (this->m_ControlGroupMap).t.field_0x4 = 0;
  p_Var2 = (__rb_tree_node_pair_const_int_cHitControlGroup_____ *)malloc(0x18);
  if (p_Var2 == (__rb_tree_node_pair_const_int_cHitControlGroup_____ *)0x0) {
    p_Var2 = (__rb_tree_node_pair_const_int_cHitControlGroup_____ *)
             oom_malloc__t23__malloc_alloc_template1i0Ui(0x18);
    (this->m_ControlGroupMap).t.header = p_Var2;
  }
  else {
    (this->m_ControlGroupMap).t.header = p_Var2;
  }
  *(undefined4 *)&p_Var2->field0_0x0 = 0;
  (((this->m_ControlGroupMap).t.header)->field0_0x0).parent = (__rb_tree_node_base *)0x0;
  p_Var2 = (this->m_ControlGroupMap).t.header;
  (p_Var2->field0_0x0).left = &p_Var2->field0_0x0;
  p_Var2 = (this->m_ControlGroupMap).t.header;
  (p_Var2->field0_0x0).right = &p_Var2->field0_0x0;
                    /* end of inlined section */
  this->m_pfnHandleSourceDataFieldRequest = (undefined1 *)0x0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
  (this->m_GZSndDeleteList).length = 0;
  p_Var3 = (__list_node_unsigned_int_ *)malloc(0xc);
  if (p_Var3 == (__list_node_unsigned_int_ *)0x0) {
    p_Var3 = (__list_node_unsigned_int_ *)oom_malloc__t23__malloc_alloc_template1i0Ui(0xc);
    (this->m_GZSndDeleteList).node = p_Var3;
  }
  else {
    (this->m_GZSndDeleteList).node = p_Var3;
  }
  p_Var3->next = p_Var3;
  p_Var3 = (this->m_GZSndDeleteList).node;
  p_Var3->prev = p_Var3;
                    /* end of inlined section */
  this->m_lUpdateNum = 0;
                    /* inlined from Tree.h */
  (this->m_DuckMap).t.node_count = 0;
  (this->m_DuckMap).t.field_0x4 = 0;
  p_Var4 = (__rb_tree_node_pair_const_cSoundCacheHandle_int___ *)malloc(0x18);
  if (p_Var4 == (__rb_tree_node_pair_const_cSoundCacheHandle_int___ *)0x0) {
    p_Var4 = (__rb_tree_node_pair_const_cSoundCacheHandle_int___ *)
             oom_malloc__t23__malloc_alloc_template1i0Ui(0x18);
    (this->m_DuckMap).t.header = p_Var4;
  }
  else {
    (this->m_DuckMap).t.header = p_Var4;
  }
                    /* end of inlined section */
                    /* inlined from Tree.h */
  *(undefined4 *)&p_Var4->field0_0x0 = 0;
                    /* end of inlined section */
                    /* inlined from Tree.h */
  (((this->m_DuckMap).t.header)->field0_0x0).parent = (__rb_tree_node_base *)0x0;
  p_Var4 = (this->m_DuckMap).t.header;
  (p_Var4->field0_0x0).left = &p_Var4->field0_0x0;
  p_Var4 = (this->m_DuckMap).t.header;
  (p_Var4->field0_0x0).right = &p_Var4->field0_0x0;
                    /* end of inlined section */
  this->m_pVoxHitlistTable = pVoxHitlist;
  pcVar5 = (cSoundCache *)__builtin_new(0x10630);
  pcVar5 = __11cSoundCache(pcVar5);
  this->m_pSoundCache = pcVar5;
  return this;
}

bool cHitMan::Init() {
	int i;
	cHitTimer *this;
	
  int i;
  int iVar1;
  
  this->m_lUpdateNum = 0;
  SetTrackFlowErrorHandler__7cHitManPFP12cTrackPlayerPc_v
            (this,HandleTrackPlayerFlowControlError__FP12cTrackPlayerPc);
  i = -10;
  do {
    iVar1 = i + 1;
    SetSequenceGroupTrackId__7cHitManii(this,i,0);
    i = iVar1;
  } while (iVar1 < 0x401);
  this->m_pSndSys = g_pSndSys;
  g_pHitMan = this;
  Init__22cGlobalAttrRegisterSetii(&GlobalAttrRegisterSet,0xf,0x71);
  Init__12cRegisterSetii(&GlobalVarRegisterSet,0x18,0x5a);
  Init__21cSndobAttrRegisterSetii(&SndobAttrDefaultsRegisterSet,0x1f,0x11);
  Init__21cTrackAttrRegisterSetii(&TrackAttrDefaultsRegisterSet,0xd,0x32);
  Init__22cGlobalAttrRegisterSetii(&GlobalAttrDefaultsRegisterSet,0xf,0x71);
  SndobAttrDefaultsRegisterSet.m_lPan = 0x200;
  SndobAttrDefaultsRegisterSet.m_lMaxDistance = 10000;
  SndobAttrDefaultsRegisterSet.m_lPriority = 0x20;
  SndobAttrDefaultsRegisterSet.m_lPitch = 0xe10;
  SndobAttrDefaultsRegisterSet.m_lMinDistance = 100;
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  GlobalVarRegisterSet.m_pDefaultSet = (cRegisterSet *)0x0;
                    /* end of inlined section */
  SndobAttrDefaultsRegisterSet.m_lVolume = 0x400;
  SndobAttrDefaultsRegisterSet.m_lInternalVolume = 0x400;
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  SndobAttrDefaultsRegisterSet.field0_0x0.m_pChildSet =
       (cRegisterSet *)&TrackAttrDefaultsRegisterSet;
  SndobAttrDefaultsRegisterSet.field0_0x0.m_pDefaultSet = (cRegisterSet *)0x0;
  TrackAttrDefaultsRegisterSet.field0_0x0.m_pChildSet =
       (cRegisterSet *)&GlobalAttrDefaultsRegisterSet;
  TrackAttrDefaultsRegisterSet.field0_0x0.m_pDefaultSet = (cRegisterSet *)0x0;
  GlobalAttrDefaultsRegisterSet.field0_0x0.m_pChildSet = (cRegisterSet *)0x0;
  GlobalAttrDefaultsRegisterSet.field0_0x0.m_pDefaultSet = (cRegisterSet *)0x0;
  GlobalAttrRegisterSet.field0_0x0.m_pChildSet = &GlobalVarRegisterSet;
  GlobalAttrRegisterSet.field0_0x0.m_pDefaultSet = (cRegisterSet *)&GlobalAttrDefaultsRegisterSet;
  GlobalVarRegisterSet.m_pChildSet = (cRegisterSet *)0x0;
                    /* end of inlined section */
  SndobAttrDefaultsRegisterSet.m_lStreamingBufferSizeMultiplier = 1;
  SndobAttrDefaultsRegisterSet.m_lPaused = 0;
  SndobAttrDefaultsRegisterSet.m_lFxtype = 0;
  SndobAttrDefaultsRegisterSet.m_lFxlevel = 0;
  SndobAttrDefaultsRegisterSet.m_lDuckpri = 0;
  SndobAttrDefaultsRegisterSet.m_lIs3d = 0;
  SndobAttrDefaultsRegisterSet.m_lIsHeadRelative = 0;
  SndobAttrDefaultsRegisterSet.m_lX = 0;
  SndobAttrDefaultsRegisterSet.m_lY = 0;
  SndobAttrDefaultsRegisterSet.m_lZ = 0;
  SndobAttrDefaultsRegisterSet.m_lFilterType = 0;
  SndobAttrDefaultsRegisterSet.m_lFilterCutoff = 0;
  SndobAttrDefaultsRegisterSet.m_lFilterLevel = 0;
  SndobAttrDefaultsRegisterSet.m_lAttack = 0;
  SndobAttrDefaultsRegisterSet.m_lDecay = 0;
  SndobAttrDefaultsRegisterSet.m_lIsStreamed = 0;
  SndobAttrDefaultsRegisterSet.m_lFadeDest = 0;
  TrackAttrDefaultsRegisterSet.m_lIllegalRegLast = -0x80000000;
  SndobAttrDefaultsRegisterSet.m_lIllegalRegLast = 0;
  TrackAttrDefaultsRegisterSet.m_lTempo = 0x78;
  TrackAttrDefaultsRegisterSet.m_lSpl = 0x14;
  GlobalAttrDefaultsRegisterSet.m_lVol = 0x400;
  SndobAttrDefaultsRegisterSet.m_lFadeVar = 0;
  SndobAttrDefaultsRegisterSet.m_lFadeSpeed = 0;
  SndobAttrDefaultsRegisterSet.m_lPreload = 0;
  SndobAttrDefaultsRegisterSet.m_lIsLooped = 0;
  SndobAttrDefaultsRegisterSet.m_lFadeOn = 0;
  SndobAttrDefaultsRegisterSet.m_lIsPlaying = 0;
  SndobAttrDefaultsRegisterSet.m_lSource = 0;
  TrackAttrDefaultsRegisterSet.m_lPatchId = 0;
  TrackAttrDefaultsRegisterSet.m_lWhatToDoWithUpdate = 0;
  TrackAttrDefaultsRegisterSet.m_lTarget = 0;
  TrackAttrDefaultsRegisterSet.m_lMuteGroup = 0;
  TrackAttrDefaultsRegisterSet.m_lInterrupt = 0;
  TrackAttrDefaultsRegisterSet.m_lIsPositioned = 0;
  TrackAttrDefaultsRegisterSet.m_lFadesWhenOffScreen = 0;
  TrackAttrDefaultsRegisterSet.m_lAllowMultipleInstances = 0;
  TrackAttrDefaultsRegisterSet.m_lAssociatedTrack0 = 0;
  TrackAttrDefaultsRegisterSet.m_lAssociatedTrack1 = 0;
  TrackAttrDefaultsRegisterSet.m_lAssociatedTrack2 = 0;
  TrackAttrDefaultsRegisterSet.m_lAssociatedTrack3 = 0;
  GlobalAttrDefaultsRegisterSet.m_lDuckPri = 0;
  GlobalAttrDefaultsRegisterSet.m_lFxType = 0;
  GlobalAttrDefaultsRegisterSet.m_lFxLevel = 0;
  GlobalAttrDefaultsRegisterSet.m_lPause = 0;
  Copy__12cRegisterSetP12cRegisterSet
            (&GlobalAttrRegisterSet.field0_0x0,&GlobalAttrDefaultsRegisterSet.field0_0x0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  (this->m_Timer).m_lElapsed = 0;
  *(undefined4 *)&this->m_Timer = 1;
  Update__9cHitTimer(&this->m_Timer);
                    /* end of inlined section */
  *(undefined4 *)&this->m_bCallbackEnabled = 1;
  return true;
}

void cHitMan::~cHitMan(int __in_chrg) {
	map<const cSoundCacheHandle,int,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	void *pAddress;
	void *pAddress;
	map<int,cHitControlGroup *,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	void *pAddress;
	void *pAddress;
	void *pAddress;
	
  __rb_tree_node_pair_const_int_cHitControlGroup_____ *p_Var1;
  __rb_tree_node_pair_const_cSoundCacheHandle_int___ *p_Var2;
  
  if (this->m_pSoundCache != (cSoundCache *)0x0) {
    ___11cSoundCache(this->m_pSoundCache,3);
  }
  this->m_pSoundCache = (cSoundCache *)0x0;
                    /* inlined from Tree.h */
  if ((this->m_DuckMap).t.node_count == 0) {
    p_Var2 = (this->m_DuckMap).t.header;
  }
  else {
    __erase__t7rb_tree5ZC17cSoundCacheHandleZt4pair2ZC17cSoundCacheHandleZiZt9select1st1Zt4pair2ZC17cSoundCacheHandleZiZt4less1ZC17cSoundCacheHandleZt23__malloc_alloc_template1i0Pt14__rb_tree_node1Zt4pair2ZC17cSoundCacheHandleZi
              (&(this->m_DuckMap).t,
               (__rb_tree_node_pair_const_cSoundCacheHandle_int___ *)
               (((this->m_DuckMap).t.header)->field0_0x0).parent);
    p_Var2 = (this->m_DuckMap).t.header;
    (p_Var2->field0_0x0).left = &p_Var2->field0_0x0;
    (((this->m_DuckMap).t.header)->field0_0x0).parent = (__rb_tree_node_base *)0x0;
    p_Var2 = (this->m_DuckMap).t.header;
    (p_Var2->field0_0x0).right = &p_Var2->field0_0x0;
    (this->m_DuckMap).t.node_count = 0;
    p_Var2 = (this->m_DuckMap).t.header;
  }
  free(p_Var2);
  clear__t4list2ZUiZt23__malloc_alloc_template1i0(&this->m_GZSndDeleteList);
  free((this->m_GZSndDeleteList).node);
  if ((this->m_ControlGroupMap).t.node_count != 0) {
    __erase__t7rb_tree5ZiZt4pair2ZCiZP16cHitControlGroupZt9select1st1Zt4pair2ZCiZP16cHitControlGroupZt4less1ZiZt23__malloc_alloc_template1i0Pt14__rb_tree_node1Zt4pair2ZCiZP16cHitControlGroup
              (&(this->m_ControlGroupMap).t,
               (__rb_tree_node_pair_const_int_cHitControlGroup_____ *)
               (((this->m_ControlGroupMap).t.header)->field0_0x0).parent);
    p_Var1 = (this->m_ControlGroupMap).t.header;
    (p_Var1->field0_0x0).left = &p_Var1->field0_0x0;
    (((this->m_ControlGroupMap).t.header)->field0_0x0).parent = (__rb_tree_node_base *)0x0;
    p_Var1 = (this->m_ControlGroupMap).t.header;
    (p_Var1->field0_0x0).right = &p_Var1->field0_0x0;
    (this->m_ControlGroupMap).t.node_count = 0;
  }
  free((this->m_ControlGroupMap).t.header);
  clear__t4list2Z17cSoundCacheHandleZt23__malloc_alloc_template1i0(&this->m_TrackUpdateList);
  free((this->m_TrackUpdateList).node);
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

bool cHitMan::Shutdown() {
	cHitMan *this;
	__rb_tree_iterator<pair<const int,cHitControlGroup *> > it;
	cHitControlGroup *pControlGroup;
	__rb_tree_iterator<pair<const int,cHitControlGroup *> > *this;
	__rb_tree_node_base *y;
	
  __rb_tree_iterator_pair_const_int_cHitControlGroup_____ last;
  __rb_tree_iterator_pair_const_int_cHitControlGroup_____ first;
  __rb_tree_node_base *p_Var1;
  __rb_tree_base_iterator _Var2;
  __rb_tree_iterator_pair_const_int_cHitControlGroup_____ it;
  
  StopCallbackTimer__7cHitMan(this);
  KillAll__7cHitMan(this);
  Shutdown__22cGlobalAttrRegisterSet(&GlobalAttrRegisterSet);
  Shutdown__12cRegisterSet(&GlobalVarRegisterSet);
  Shutdown__21cSndobAttrRegisterSet(&SndobAttrDefaultsRegisterSet);
  Shutdown__21cTrackAttrRegisterSet(&TrackAttrDefaultsRegisterSet);
  Shutdown__22cGlobalAttrRegisterSet(&GlobalAttrDefaultsRegisterSet);
  Shutdown__11cSoundCache(this->m_pSoundCache);
                    /* inlined from Tree.h */
  last.field0_0x0.node = (__rb_tree_base_iterator)(this->m_ControlGroupMap).t.header;
  first.field0_0x0.node =
       (__rb_tree_base_iterator)((__rb_tree_base_iterator *)((int)last.field0_0x0.node + 8))->node;
  it.field0_0x0.node = first.field0_0x0.node;
                    /* end of inlined section */
  while (it.field0_0x0.node != last.field0_0x0.node) {
                    /* end of inlined section */
    p_Var1 = ((__rb_tree_node_base *)((int)it.field0_0x0.node + 0x10))->parent;
    if (p_Var1 != (__rb_tree_node_base *)0x0) {
      (*(code *)p_Var1[0xb].right[1].parent)(&p_Var1->color + *(short *)(p_Var1[0xb].right + 1),3);
    }
                    /* inlined from Tree.h */
    _Var2.node = *(__rb_tree_node_base **)((int)it.field0_0x0.node + 0xc);
    if (_Var2.node == (__rb_tree_node_base *)0x0) {
      _Var2.node = *(__rb_tree_node_base **)((int)it.field0_0x0.node + 4);
      if (it.field0_0x0.node == (__rb_tree_base_iterator)(_Var2.node)->right) {
        do {
          it.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var2.node;
          _Var2.node = *(__rb_tree_node_base **)((int)it.field0_0x0.node + 4);
        } while (it.field0_0x0.node == (__rb_tree_base_iterator)(_Var2.node)->right);
      }
      if (*(__rb_tree_node_base **)((int)it.field0_0x0.node + 0xc) != _Var2.node) {
        it.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var2.node;
      }
    }
    else {
      p_Var1 = (_Var2.node)->left;
      while (it.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var2.node,
            p_Var1 != (__rb_tree_node_base *)0x0) {
        _Var2.node = (_Var2.node)->left;
        p_Var1 = (_Var2.node)->left;
      }
    }
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/map.h */
  erase__t7rb_tree5ZiZt4pair2ZCiZP16cHitControlGroupZt9select1st1Zt4pair2ZCiZP16cHitControlGroupZt4less1ZiZt23__malloc_alloc_template1i0Gt18__rb_tree_iterator1Zt4pair2ZCiZP16cHitControlGroupT1
            (&(this->m_ControlGroupMap).t,first,last);
  Stop__9cHitTimer(&this->m_Timer);
                    /* end of inlined section */
  return true;
}

void cHitMan::KillAll() {
  KillAll__11cSoundCache(this->m_pSoundCache);
  return;
}

void cHitMan::UpdateActiveTrackVolumes() {
	cSoundCacheHandle handles[64];
	int i;
	int j;
	__list_iterator<cSoundCacheHandle> it;
	
  __list_node_cSoundCacheHandle_ *p_Var1;
  cSoundCacheHandle *pcVar2;
  int iVar3;
  cTrack *this_00;
  int iVar4;
  __list_node_cSoundCacheHandle_ *p_Var5;
  cSoundCacheHandle *pcVar6;
  cSoundCacheHandle *this_01;
  int iVar7;
  cSoundCacheHandle handles [64];
  
  pcVar2 = handles;
  pcVar6 = handles;
  this_01 = handles;
  iVar4 = 0x3f;
  do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
    *pcVar2 = 0;
                    /* end of inlined section */
    iVar4 = iVar4 + -1;
    pcVar2 = pcVar2 + 1;
  } while (iVar4 != -1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
  p_Var1 = (this->m_TrackUpdateList).node;
                    /* end of inlined section */
  iVar4 = 0;
  p_Var5 = (__list_node_cSoundCacheHandle_ *)p_Var1->next;
  iVar7 = 0;
  if (p_Var5 != p_Var1) {
                    /* end of inlined section */
    iVar3 = (p_Var5->data).m_id;
    while( true ) {
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + 1;
      *pcVar6 = (cSoundCacheHandle)iVar3;
      pcVar6 = (cSoundCacheHandle *)(&pcVar6->m_id + 1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
      p_Var5 = (__list_node_cSoundCacheHandle_ *)p_Var5->next;
                    /* end of inlined section */
      if ((0x3f < iVar7) || (p_Var5 == (this->m_TrackUpdateList).node)) break;
      iVar3 = (p_Var5->data).m_id;
    }
  }
  if (0 < iVar4) {
    do {
      iVar4 = iVar4 + -1;
      this_00 = GetTrackObject__17cSoundCacheHandle(this_01);
      this_01 = this_01 + 1;
      UpdateVolPan__12cTrackPlayer(&this_00->field0_0x0);
    } while (iVar4 != 0);
  }
  return;
}

void cHitMan::SetSequenceGroupTrackId(Sint32 i, Sint32 id) {
  this->m_alSequenceGroupTrackId[i + 10] = id;
  return;
}

Sint32 cHitMan::SequenceGroupTrackId(Sint32 i) {
  return this->m_alSequenceGroupTrackId[i + 10];
}

void cHitMan::KillInstance(Sint32 lInstanceId) {
  return;
}

bool cHitMan::Pause() {
	cHitMan *this;
	
  this->m_lPauseRefs = 1;
  Pause__11cSoundCache(this->m_pSoundCache);
  DuckMapRemoveAll__7cHitMan(this);
  return true;
}

bool cHitMan::Unpause() {
	cHitTimer *this;
	cHitMan *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  if (*(int *)&this->m_Timer != 0) {
    (this->m_Timer).m_lElapsed = (this->m_Timer).m_lElapsed + 1;
  }
                    /* end of inlined section */
  this->m_lPauseRefs = 0;
  Unpause__11cSoundCache(this->m_pSoundCache);
  return true;
}

bool cHitMan::SetRegister(Sint32 lRegisterNum, Sint32 lValue) {
  bool bVar1;
  
  bVar1 = SetRegister__12cRegisterSetii(&GlobalAttrRegisterSet.field0_0x0,lRegisterNum,lValue);
  return bVar1;
}

Sint32 cHitMan::SoundObjectId(cSoundObject *pObject) {
  return pObject->m_lSoundObjectId;
}

bool cHitMan::StartCallbackTimer() {
  return false;
}

bool cHitMan::StopCallbackTimer() {
  return false;
}

void cHitMan::TimerCallback() {
	cHitTimer *this;
	__list_node<cSoundCacheHandle> *x;
	cSoundObject *pObject;
	
  bool bVar1;
  cSoundObject__167_1004 *pcVar2;
  __list_node_cSoundCacheHandle_ *p_Var3;
  __list_node_cSoundCacheHandle_ *p_Var4;
  
  if (*(int *)&this->m_bCallbackEnabled != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
    this->m_lUpdateNum = this->m_lUpdateNum + 1;
    if (*(int *)&this->m_Timer != 0) {
      (this->m_Timer).m_lElapsed = (this->m_Timer).m_lElapsed + 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
    p_Var4 = (this->m_TrackUpdateList).node;
    p_Var3 = (__list_node_cSoundCacheHandle_ *)p_Var4->next;
                    /* end of inlined section */
    (this->m_itUpdate).node = p_Var3;
    if (p_Var3 != p_Var4) {
      p_Var4 = (this->m_itUpdate).node;
      while( true ) {
        bVar1 = IsInMemory__C17cSoundCacheHandle(&p_Var4->data);
        if (bVar1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
                    /* end of inlined section */
          pcVar2 = GetObject__17cSoundCacheHandle(&((this->m_itUpdate).node)->data);
          (*(code *)pcVar2->__vtable->AddRef)
                    ((int)&pcVar2->m_lSoundObjectFlag + (int)*(short *)&pcVar2->__vtable->PlayPause)
          ;
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
          p_Var3 = (this->m_itUpdate).node;
        }
        else {
          p_Var3 = (this->m_itUpdate).node;
        }
                    /* end of inlined section */
        if (p_Var3 == p_Var4) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
          (this->m_itUpdate).node = (__list_node_cSoundCacheHandle_ *)p_Var3->next;
                    /* end of inlined section */
          p_Var4 = (this->m_TrackUpdateList).node;
        }
        else {
          p_Var4 = (this->m_TrackUpdateList).node;
        }
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
                    /* end of inlined section */
        if ((this->m_itUpdate).node == p_Var4) break;
        p_Var4 = (this->m_itUpdate).node;
      }
    }
  }
  return;
}

bool cHitMan::AddToUpdateList(cTrackPlayer *pTrackPlayer) {
	cSoundObject *this;
	list<cSoundCacheHandle,__malloc_alloc_template<0> > *this;
	list<cSoundCacheHandle,__malloc_alloc_template<0> > *this;
	__list_node<cSoundCacheHandle> *x;
	list<cSoundCacheHandle,__malloc_alloc_template<0> > *this;
	list<cSoundCacheHandle,__malloc_alloc_template<0> > *this;
	void *result;
	
  __list_node_cSoundCacheHandle_ *p_Var1;
  __list_node_cSoundCacheHandle_ *p_Var2;
  __list_node_cSoundCacheHandle_ **pp_Var3;
  
                    /* end of inlined section */
  RemoveFromUpdateList__7cHitManP12cTrackPlayer(this,pTrackPlayer);
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  p_Var1 = (__list_node_cSoundCacheHandle_ *)(pTrackPlayer->field0_0x0).m_lSoundObjectId;
  p_Var2 = (this->m_TrackUpdateList).node;
  pp_Var3 = (__list_node_cSoundCacheHandle_ **)malloc(0xc);
  if (pp_Var3 == (__list_node_cSoundCacheHandle_ **)0x0) {
    pp_Var3 = (__list_node_cSoundCacheHandle_ **)oom_malloc__t23__malloc_alloc_template1i0Ui(0xc);
    pp_Var3[2] = p_Var1;
  }
  else {
    pp_Var3[2] = p_Var1;
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
  *pp_Var3 = p_Var2;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
  pp_Var3[1] = (__list_node_cSoundCacheHandle_ *)p_Var2->prev;
  *(__list_node_cSoundCacheHandle_ ***)p_Var2->prev = pp_Var3;
  p_Var2->prev = pp_Var3;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
  (this->m_TrackUpdateList).length = (this->m_TrackUpdateList).length + 1;
                    /* end of inlined section */
  return true;
}

bool cHitMan::RemoveFromUpdateList(cTrackPlayer *pTrackPlayer) {
	Sint32 id;
	__list_iterator<cSoundCacheHandle> it;
	list<cSoundCacheHandle,__malloc_alloc_template<0> > *this;
	__list_node<cSoundCacheHandle> *x;
	
  bool bVar1;
  int iVar2;
  __list_node_cSoundCacheHandle_ *p_Var3;
  void *pvVar4;
  __list_node_cSoundCacheHandle_ *pAddress;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
  p_Var3 = (this->m_TrackUpdateList).node;
                    /* end of inlined section */
  pAddress = (__list_node_cSoundCacheHandle_ *)p_Var3->next;
  if (pAddress != p_Var3) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
    iVar2 = (pAddress->data).m_id;
                    /* end of inlined section */
    while (iVar2 != (pTrackPlayer->field0_0x0).m_lSoundObjectId) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
      pAddress = (__list_node_cSoundCacheHandle_ *)pAddress->next;
                    /* end of inlined section */
      if (pAddress == p_Var3) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
        p_Var3 = (this->m_TrackUpdateList).node;
        goto LAB_00276510;
      }
      iVar2 = (pAddress->data).m_id;
    }
    p_Var3 = (this->m_TrackUpdateList).node;
  }
LAB_00276510:
                    /* end of inlined section */
  if (pAddress == p_Var3) {
    bVar1 = false;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
    p_Var3 = (this->m_itUpdate).node;
                    /* end of inlined section */
    if (pAddress == p_Var3) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
      (this->m_itUpdate).node = (__list_node_cSoundCacheHandle_ *)p_Var3->next;
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
      pvVar4 = pAddress->next;
    }
    else {
      pvVar4 = pAddress->next;
    }
    *(void **)pAddress->prev = pvVar4;
    *(void **)((int)pAddress->next + 4) = pAddress->prev;
    free(pAddress);
                    /* end of inlined section */
    bVar1 = true;
                    /* inlined from c:/eor/src2/games/sims/MSrc/list.h */
    (this->m_TrackUpdateList).length = (this->m_TrackUpdateList).length - 1;
  }
                    /* end of inlined section */
  return bVar1;
}

void cHitMan::DuckMapSetSndobPri(cSoundObject *pSndob, Sint32 lPri) {
	cSoundObject *this;
	cSoundObject *this;
	
  int lValue;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  rb_tree_const_cSoundCacheHandle_pair_const_cSoundCacheHandle_int__select1st_pair_const_cSoundCacheHandle_int____less_const_cSoundCacheHandle____malloc_alloc_template_0___
  local_60;
  int local_50;
  undefined4 local_4c;
  cSoundCacheHandle local_40 [4];
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
  if (lPri == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
    local_40[0].m_id = pSndob->m_lSoundObjectId;
    erase__t7rb_tree5ZC17cSoundCacheHandleZt4pair2ZC17cSoundCacheHandleZiZt9select1st1Zt4pair2ZC17cSoundCacheHandleZiZt4less1ZC17cSoundCacheHandleZt23__malloc_alloc_template1i0RC17cSoundCacheHandle
              (&(this->m_DuckMap).t,local_40);
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
    local_50 = pSndob->m_lSoundObjectId;
    local_4c = 0;
    insert_unique__t7rb_tree5ZC17cSoundCacheHandleZt4pair2ZC17cSoundCacheHandleZiZt9select1st1Zt4pair2ZC17cSoundCacheHandleZiZt4less1ZC17cSoundCacheHandleZt23__malloc_alloc_template1i0RCt4pair2ZC17cSoundCacheHandleZi
              (&local_60,(pair_const_cSoundCacheHandle_int_ *)&this->m_DuckMap);
                    /* end of inlined section */
    ((local_60.header)->value_field).second = lPri;
  }
                    /* end of inlined section */
  lValue = DuckMapMaxPri__7cHitMan(this);
  SetRegister__12cRegisterSetii(&GlobalAttrRegisterSet.field0_0x0,0x7b,lValue);
  UpdateActiveTrackVolumes__7cHitMan(this);
  return;
}

Sint32 cHitMan::DuckMapSndobPri(cSoundObject *pSndob) {
	cSoundObject *this;
	map<const cSoundCacheHandle,int,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	cSoundObject *this;
	
  __rb_tree_iterator_pair_const_cSoundCacheHandle_int___ _Var1;
  int iVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  rb_tree_const_cSoundCacheHandle_pair_const_cSoundCacheHandle_int__select1st_pair_const_cSoundCacheHandle_int____less_const_cSoundCacheHandle____malloc_alloc_template_0___
  local_70;
  int local_60;
  undefined4 local_5c;
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
                    /* inlined from c:/eor/src2/games/sims/MSrc/map.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/map.h */
  local_50[0].m_id = pSndob->m_lSoundObjectId;
  _Var1 = find__t7rb_tree5ZC17cSoundCacheHandleZt4pair2ZC17cSoundCacheHandleZiZt9select1st1Zt4pair2ZC17cSoundCacheHandleZiZt4less1ZC17cSoundCacheHandleZt23__malloc_alloc_template1i0RC17cSoundCacheHandle
                    (&(this->m_DuckMap).t,local_50);
                    /* end of inlined section */
  if (_Var1.field0_0x0.node == (__rb_tree_node_base *)(this->m_DuckMap).t.header) {
    iVar2 = 0;
  }
  else {
    local_60 = pSndob->m_lSoundObjectId;
                    /* inlined from c:/eor/src2/games/sims/MSrc/map.h */
    local_5c = 0;
    insert_unique__t7rb_tree5ZC17cSoundCacheHandleZt4pair2ZC17cSoundCacheHandleZiZt9select1st1Zt4pair2ZC17cSoundCacheHandleZiZt4less1ZC17cSoundCacheHandleZt23__malloc_alloc_template1i0RCt4pair2ZC17cSoundCacheHandleZi
              (&local_70,(pair_const_cSoundCacheHandle_int_ *)&this->m_DuckMap);
                    /* end of inlined section */
    iVar2 = ((local_70.header)->value_field).second;
  }
  return iVar2;
}

Sint32 cHitMan::DuckMapMaxPri() {
	Sint32 lMaxPri;
	__rb_tree_iterator<pair<const cSoundCacheHandle,int> > it;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	Sint32 lPri;
	__rb_tree_iterator<pair<const cSoundCacheHandle,int> > *this;
	__rb_tree_node_base *y;
	
  __rb_tree_node_pair_const_cSoundCacheHandle_int___ *p_Var1;
  __rb_tree_node_pair_const_cSoundCacheHandle_int___ *p_Var2;
  __rb_tree_node_base *p_Var3;
  __rb_tree_base_iterator _Var4;
  __rb_tree_node_base *p_Var5;
  __rb_tree_iterator_pair_const_cSoundCacheHandle_int___ it;
  
                    /* inlined from Tree.h */
  p_Var1 = (this->m_DuckMap).t.header;
                    /* end of inlined section */
  p_Var5 = (__rb_tree_node_base *)0x0;
                    /* inlined from Tree.h */
  it.field0_0x0.node =
       (__rb_tree_base_iterator)
       (__rb_tree_base_iterator)
       *(__rb_tree_node_pair_const_cSoundCacheHandle_int___ **)&p_Var1->field0_0x0;
                    /* end of inlined section */
  while (it.field0_0x0.node != (__rb_tree_base_iterator)p_Var1) {
                    /* inlined from Tree.h */
    p_Var2 = *(__rb_tree_node_pair_const_cSoundCacheHandle_int___ **)((int)it.field0_0x0.node + 0xc)
    ;
                    /* end of inlined section */
                    /* inlined from Tree.h */
    if ((int)p_Var5 < (int)((__rb_tree_node_base *)((int)it.field0_0x0.node + 0x10))->parent) {
      p_Var5 = ((__rb_tree_node_base *)((int)it.field0_0x0.node + 0x10))->parent;
    }
    if (p_Var2 == (__rb_tree_node_pair_const_cSoundCacheHandle_int___ *)0x0) {
      _Var4.node = *(__rb_tree_node_base **)((int)it.field0_0x0.node + 4);
      if (it.field0_0x0.node ==
          (__rb_tree_base_iterator)
          *(__rb_tree_node_pair_const_cSoundCacheHandle_int___ **)
           &((__rb_tree_node_pair_const_cSoundCacheHandle_int___ *)_Var4.node)->field0_0x0) {
        do {
          it.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var4.node;
          _Var4.node = *(__rb_tree_node_base **)((int)it.field0_0x0.node + 4);
        } while (it.field0_0x0.node ==
                 (__rb_tree_base_iterator)
                 *(__rb_tree_node_pair_const_cSoundCacheHandle_int___ **)
                  &((__rb_tree_node_pair_const_cSoundCacheHandle_int___ *)_Var4.node)->field0_0x0);
      }
      if (*(__rb_tree_node_pair_const_cSoundCacheHandle_int___ **)((int)it.field0_0x0.node + 0xc) !=
          (__rb_tree_node_pair_const_cSoundCacheHandle_int___ *)_Var4.node) {
        it.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var4.node;
      }
    }
    else {
      p_Var3 = *(__rb_tree_node_base **)&p_Var2->field0_0x0;
      while (it.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)p_Var2,
            p_Var3 != (__rb_tree_node_base *)0x0) {
        p_Var2 = *(__rb_tree_node_pair_const_cSoundCacheHandle_int___ **)&p_Var2->field0_0x0;
        p_Var3 = *(__rb_tree_node_base **)&p_Var2->field0_0x0;
      }
    }
  }
  return (int)p_Var5;
}

void cHitMan::DuckMapRemoveAll() {
  __rb_tree_iterator_pair_const_cSoundCacheHandle_int___ last;
  
                    /* inlined from Tree.h */
  last.field0_0x0.node = (__rb_tree_base_iterator)(this->m_DuckMap).t.header;
  erase__t7rb_tree5ZC17cSoundCacheHandleZt4pair2ZC17cSoundCacheHandleZiZt9select1st1Zt4pair2ZC17cSoundCacheHandleZiZt4less1ZC17cSoundCacheHandleZt23__malloc_alloc_template1i0Gt18__rb_tree_iterator1Zt4pair2ZC17cSoundCacheHandleZiT1
            (&(this->m_DuckMap).t,
             (__rb_tree_iterator_pair_const_cSoundCacheHandle_int___)
             ((__rb_tree_base_iterator *)((int)last.field0_0x0.node + 8))->node,last);
                    /* end of inlined section */
  SetRegister__12cRegisterSetii(&GlobalAttrRegisterSet.field0_0x0,0x7b,0);
  UpdateActiveTrackVolumes__7cHitMan(this);
  return;
}

VoxHitlist* cHitMan::GetVoxHitlist(Sint32 id) {
	int iNumRows;
	int i;
	VoxHitlist *result;
	VoxHitlist *pRow;
	
  ushort uVar1;
  uint uVar2;
  VoxHitlist *pVVar3;
  VoxHitlist *pVVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar2 = this->m_pVoxHitlistTable->uNumRows;
  pVVar3 = this->m_pVoxHitlistTable->pData;
  pVVar4 = (VoxHitlist *)0x0;
  if (0 < (int)uVar2) {
    uVar1 = pVVar3->id;
    while ((iVar5 = iVar5 + 1, pVVar4 = pVVar3, (uint)uVar1 != id &&
           (pVVar3 = pVVar3 + 1, pVVar4 = (VoxHitlist *)0x0, iVar5 < (int)uVar2))) {
      uVar1 = pVVar3->id;
    }
  }
  return pVVar4;
}

Sint32 cSoundObject::AddRef() {
  int iVar1;
  
  iVar1 = this->m_lRefCount;
  if (iVar1 == 0) {
    (*(code *)this->__vtable[1].HandleTimerCallback)
              ((int)&this->m_lSoundObjectFlag + (int)*(short *)&this->__vtable[1].ResourceId);
    iVar1 = this->m_lRefCount;
  }
  this->m_lRefCount = iVar1 + 1;
  return iVar1 + 1;
}

Sint32 cSoundObject::Release() {
  int iVar1;
  
  iVar1 = this->m_lRefCount + -1;
  if (this->m_lRefCount == 1) {
    (*(code *)this->__vtable[1].ArgsType)
              ((int)&this->m_lSoundObjectFlag + (int)*(short *)&this->__vtable[1].InstanceId);
    if (this != (cSoundObject__167_1004 *)0x0) {
      (*(code *)this->__vtable->SetInstanceId)
                ((int)&this->m_lSoundObjectFlag + (int)*(short *)&this->__vtable->SetSoundObjectId,3
                );
    }
    iVar1 = 0;
  }
  else {
    this->m_lRefCount = iVar1;
  }
  return iVar1;
}

cTrack* cTrack::cTrack(Sint32 lSndobId, Sint32 lVolume, Sint32 lArgsType, Sint32 lDuckPri, Sint32 lControlGroupId, Sint32 lSpl, TrackData *pTrackData, Sint32 lPatchId, Sint32 lHitlistId) {
	cTrackAttrRegisterSet *this;
	cRegisterSet *this;
	cSndobAttrRegisterSet *this;
	cRegisterSet *this;
	Sint32 id;
	cTrackPlayer *this;
	
  cHitControlGroup *this_00;
  cSndobAttrRegisterSet *this_01;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  this_01 = &this->m_TrackDefSndobRegisterSet;
                    /* end of inlined section */
  __12cTrackPlayer(&this->field0_0x0);
  this->m_pTrackData = pTrackData;
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  *(undefined4 *)&(this->m_TrackDefRegisterSet).field0_0x0 = 0;
  *(undefined4 *)&(this->m_TrackDefSndobRegisterSet).field0_0x0 = 0;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.__vtable = (cSoundObject__107_1582__vtable *)_vt_6cTrack;
  Init__21cSndobAttrRegisterSetii(this_01,0x1f,0x11);
  Init__21cTrackAttrRegisterSetii(&this->m_TrackDefRegisterSet,0xd,0x32);
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  (this->m_TrackDefSndobRegisterSet).field0_0x0.m_pChildSet =
       &(this->m_TrackDefRegisterSet).field0_0x0;
  (this->m_TrackDefSndobRegisterSet).field0_0x0.m_pDefaultSet =
       &SndobAttrDefaultsRegisterSet.field0_0x0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  (this->m_TrackDefRegisterSet).field0_0x0.m_pDefaultSet = &TrackAttrDefaultsRegisterSet.field0_0x0;
  (this->m_TrackDefRegisterSet).field0_0x0.m_pChildSet = (cRegisterSet *)0x0;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.m_lClassId = -0x5c326931;
  (this->field0_0x0).field0_0x0.m_lArgsType = lArgsType;
  (this->m_TrackDefRegisterSet).m_lPatchId = lPatchId;
  (this->field0_0x0).field0_0x0.m_lSoundObjectId = lSndobId;
  this->m_lHitListId = lHitlistId;
  (this->m_TrackDefRegisterSet).m_lSpl = lSpl;
  this->m_lControlGroupId = lControlGroupId;
  (this->field0_0x0).m_pTrack.m_id = lSndobId;
  if (lSpl == 3) {
    this->m_lControlGroupId = 1;
  }
  if (lSndobId - 0x772U < 2) {
    this->m_lControlGroupId = 1;
  }
  if (lControlGroupId != 0) {
                    /* end of inlined section */
    this_00 = ControlGroup__7cHitMani(g_pHitMan,lControlGroupId);
    AddTrack__16cHitControlGroupi(this_00,(this->field0_0x0).field0_0x0.m_lSoundObjectId);
  }
  SetRegister__12cRegisterSetii(&this_01->field0_0x0,0x19,lDuckPri);
  SetRegister__12cRegisterSetii(&this_01->field0_0x0,0x12,lVolume);
  return this;
}

bool cTrack::Init() {
	cSoundObject *this;
	
  Init__12cTrackPlayer(&this->field0_0x0);
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
  (this->field0_0x0).m_pTrack.m_id = (this->field0_0x0).field0_0x0.m_lSoundObjectId;
  return true;
}

bool cTrack::Shutdown() {
  Shutdown__12cTrackPlayer(&this->field0_0x0);
  Shutdown__21cSndobAttrRegisterSet(&this->m_TrackDefSndobRegisterSet);
  Shutdown__21cTrackAttrRegisterSet(&this->m_TrackDefRegisterSet);
  return true;
}

cTrackPlayer* cTrackPlayer::cTrackPlayer() {
	cSoundObject *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  *(undefined4 *)&(this->field0_0x0).m_SndobRegisterSet.field0_0x0 = 0;
  (this->field0_0x0).m_lRefCount = 0;
  (this->field0_0x0).m_lArgsType = 0;
  *(undefined4 *)&(this->field0_0x0).m_bIsPaused = 0;
  (this->field0_0x0).m_lClassId = -0x7c32693d;
  (this->field0_0x0).m_lSoundObjectFlag = -0x54523502;
  (this->field0_0x0).__vtable = (cSoundObject__107_1582__vtable *)_vt_12cSoundObject;
  Init__21cSndobAttrRegisterSetii(&(this->field0_0x0).m_SndobRegisterSet,0x1f,0x11);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  (this->m_pPatch).m_id = 0;
                    /* end of inlined section */
  this->m_pPosition = (char *)0x0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  (this->m_pTrack).m_id = 0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  (this->m_pTarget).m_id = 0;
  *(undefined4 *)&(this->m_AttrRegisterSet).field0_0x0 = 0;
  *(undefined4 *)&this->m_VarRegisterSet = 0;
                    /* end of inlined section */
  this->m_lTimeNoteKill = 0;
  this->m_lTimeNextCommand = 0;
  (this->field0_0x0).__vtable = (cSoundObject__107_1582__vtable *)_vt_12cTrackPlayer;
  __15TrackDataReader(&this->m_tdrPlayPos);
  __15TrackDataReader(&this->m_tdrLoopPos);
  __15TrackDataReader(&this->m_tdrCurrentInstructionPos);
  this->m_lLastChooseValue = -1;
  this->m_pHitList = (GlobalHitlist *)0x0;
  *(undefined4 *)&this->m_bIsPlaying = 0;
  this->m_lPauseRefs = 0;
  *(undefined4 *)&this->m_bKillAfterFade = 0;
  this->m_pChannel = (cSampleChannel *)0x0;
  return this;
}

bool cTrackPlayer::Init() {
  Init__21cSndobAttrRegisterSetii(&(this->field0_0x0).m_SndobRegisterSet,0x1f,0x11);
  Init__21cTrackAttrRegisterSetii(&this->m_AttrRegisterSet,0xd,0x32);
  Init__12cRegisterSetii(&this->m_VarRegisterSet,0x10,1);
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  (this->field0_0x0).m_SndobRegisterSet.field0_0x0.m_pChildSet =
       &(this->m_AttrRegisterSet).field0_0x0;
  (this->field0_0x0).m_SndobRegisterSet.field0_0x0.m_pDefaultSet =
       &SndobAttrDefaultsRegisterSet.field0_0x0;
  (this->m_AttrRegisterSet).field0_0x0.m_pDefaultSet = &TrackAttrDefaultsRegisterSet.field0_0x0;
  (this->m_AttrRegisterSet).field0_0x0.m_pChildSet = &this->m_VarRegisterSet;
  (this->m_VarRegisterSet).m_pChildSet = &GlobalAttrRegisterSet.field0_0x0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  (this->m_VarRegisterSet).m_pDefaultSet = (cRegisterSet *)0x0;
                    /* end of inlined section */
  (this->m_pTrack).m_id = 0;
  return true;
}

bool cTrackPlayer::Shutdown() {
  cSampleChannel *pcVar1;
  cSoundObject__107_1582__vtable *pcVar2;
  
  Shutdown__21cSndobAttrRegisterSet(&(this->field0_0x0).m_SndobRegisterSet);
  Shutdown__21cTrackAttrRegisterSet(&this->m_AttrRegisterSet);
  Shutdown__12cRegisterSet(&this->m_VarRegisterSet);
  pcVar1 = this->m_pChannel;
  if (pcVar1 != (cSampleChannel *)0x0) {
    pcVar2 = (pcVar1->field0_0x0).__vtable;
    (*(code *)pcVar2[1].ArgsType)
              ((int)&(pcVar1->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar2[1].InstanceId)
    ;
    pcVar1 = this->m_pChannel;
    if (pcVar1 != (cSampleChannel *)0x0) {
      pcVar2 = (pcVar1->field0_0x0).__vtable;
      (*(code *)pcVar2->SetInstanceId)
                ((int)&(pcVar1->field0_0x0).m_lSoundObjectFlag +
                 (int)*(short *)&pcVar2->SetSoundObjectId,3);
    }
    this->m_pChannel = (cSampleChannel *)0x0;
  }
  return true;
}

bool cTrackPlayer::IsValid() {
  return true;
}

bool cTrackPlayer::SetTrack(int lTrackId) {
  (this->m_pTrack).m_id = lTrackId;
  return true;
}

void cTrackPlayer::HandleTimerCallback() {
	Sint32 lNumCommands;
	Sint32 lFadeVar;
	Sint32 lCurrentValue;
	Sint32 lDestValue;
	Sint32 lFadeSpeed;
	bool bDone;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  cSoundObject__107_1582__vtable *pcVar6;
  int iVar7;
  int iVar8;
  
  if (*(int *)&this->m_bIsPlaying == 0) {
    return;
  }
  if (this->m_lPauseRefs != 0) {
    return;
  }
  if ((this->field0_0x0).m_SndobRegisterSet.m_lFadeOn == 0) {
    iVar8 = *(int *)&this->m_bKillAfterFade;
  }
  else {
    pcVar6 = (this->field0_0x0).__vtable;
    iVar8 = (this->field0_0x0).m_SndobRegisterSet.m_lFadeVar;
    iVar3 = (*(code *)pcVar6->SetFxLevel)
                      ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                       (int)*(short *)&pcVar6->SetFxType,iVar8);
    iVar5 = (this->field0_0x0).m_SndobRegisterSet.m_lFadeSpeed;
    iVar7 = (this->field0_0x0).m_SndobRegisterSet.m_lFadeDest;
    if (iVar5 == 0) {
      (this->field0_0x0).m_SndobRegisterSet.m_lFadeOn = 0;
    }
    if (iVar3 < iVar7) {
      if (0 < iVar5) {
        iVar3 = iVar3 + iVar5;
      }
      else {
LAB_00276d48:
        iVar5 = -iVar5;
        iVar3 = iVar3 + iVar5;
      }
    }
    else {
      if (0 < iVar5) goto LAB_00276d48;
      iVar3 = iVar3 + iVar5;
    }
    bVar2 = false;
    if ((iVar5 < 1) || (iVar3 <= iVar7)) {
      if ((iVar5 < 0) && (iVar3 < iVar7)) {
        bVar2 = true;
      }
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (this->field0_0x0).m_SndobRegisterSet.m_lFadeOn = 0;
      pcVar6 = (this->field0_0x0).__vtable;
    }
    else {
      pcVar6 = (this->field0_0x0).__vtable;
      iVar7 = iVar3;
    }
    (*(code *)pcVar6->Kill)
              ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar6->Stop,iVar8,
               iVar7,0);
    iVar8 = *(int *)&this->m_bKillAfterFade;
  }
  if ((iVar8 != 0) && ((this->field0_0x0).m_SndobRegisterSet.m_lFadeOn == 0)) {
    pcVar6 = (this->field0_0x0).__vtable;
    (*(code *)pcVar6[1].SetVolume)
              ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar6[1].Init);
    *(undefined4 *)&this->m_bKillAfterFade = 0;
    return;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  uVar1 = (g_pHitMan->m_Timer).m_lElapsed;
                    /* end of inlined section */
  if ((int)uVar1 < 0) {
                    /* end of inlined section */
    HandleTrackFlowError__7cHitManP12cTrackPlayerPc
              (g_pHitMan,this,"Timer wrapped around while at breakpoint");
    uVar4 = this->m_lTimeNextCommand;
  }
  else {
    uVar4 = this->m_lTimeNextCommand;
  }
  iVar8 = 0;
  if (uVar4 != 0) {
    if (uVar1 < uVar4) {
      uVar4 = this->m_lTimeNoteKill;
      goto LAB_00276e74;
    }
    do {
      if ((int)uVar4 < 0) {
                    /* end of inlined section */
        HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                  (g_pHitMan,this,"Instruction time wrapped around while at breakpoint");
      }
      DoCommand__12cTrackPlayer(this);
      bVar2 = 100 < iVar8;
      iVar8 = iVar8 + 1;
      if (bVar2) {
                    /* end of inlined section */
        HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                  (g_pHitMan,this,"Too many instructions executed without wait (infinite loop?)");
      }
      uVar4 = this->m_lTimeNextCommand;
    } while ((uVar4 != 0) && (uVar4 <= uVar1));
  }
  uVar4 = this->m_lTimeNoteKill;
LAB_00276e74:
  if ((uVar4 != 0) && (uVar4 <= uVar1)) {
    NoteOff__12cTrackPlayeri(this,0);
    this->m_lTimeNoteKill = 0;
  }
  return;
}

bool cTrackPlayer::PlayPause(Sint32 lArg1, Sint32 lArg2, Sint32 lArg3) {
	cHitControlGroup *pGroup;
	cTrackPlayer *this;
	cHitControlGroup *this;
	cSoundObject *this;
	int i;
	Sint32 lRegisterId;
	Sint32 lValue;
	Sint32 lRegisterId;
	Sint32 lValue;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	
  cSoundObject__107_1582__vtable *pcVar1;
  bool bVar2;
  cHitMan *this_00;
  undefined uVar3;
  cTrack *pcVar4;
  cHitControlGroup *pcVar5;
  int iVar6;
  long lVar7;
  cSndobAttrRegisterSet *this_01;
  int lRegisterId;
  cSoundCacheHandle *this_02;
  
  pcVar4 = GetTrackObject__17cSoundCacheHandle(&this->m_pTrack);
  pcVar1 = (pcVar4->field0_0x0).field0_0x0.__vtable;
  lVar7 = (*(code *)pcVar1[2].Shutdown)
                    ((int)&(pcVar4->field0_0x0).field0_0x0.m_lSoundObjectFlag +
                     (int)*(short *)&pcVar1[2].Release);
  this_00 = g_pHitMan;
  if (lVar7 == 0) {
    iVar6 = (this->field0_0x0).m_lSoundObjectId;
  }
  else {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
    pcVar4 = GetTrackObject__17cSoundCacheHandle(&this->m_pTrack);
    pcVar1 = (pcVar4->field0_0x0).field0_0x0.__vtable;
    iVar6 = (*(code *)pcVar1[2].Shutdown)
                      ((int)&(pcVar4->field0_0x0).field0_0x0.m_lSoundObjectFlag +
                       (int)*(short *)&pcVar1[2].Release);
    pcVar5 = ControlGroup__7cHitMani(this_00,iVar6);
    if (pcVar5 == (cHitControlGroup *)0x0) {
      iVar6 = (this->field0_0x0).m_lSoundObjectId;
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
      if (pcVar5->m_lVolume == 0) {
        return true;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
      iVar6 = (this->field0_0x0).m_lSoundObjectId;
    }
  }
                    /* end of inlined section */
  pcVar1 = (this->field0_0x0).__vtable;
  (this->field0_0x0).m_SndobRegisterSet.m_lFadeOn = 0;
  (this->m_pTarget).m_id = iVar6;
  *(undefined4 *)&this->m_bKillAfterFade = 0;
  (*(code *)pcVar1->Kill)
            ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar1->Stop,1,lArg1,0);
  pcVar1 = (this->field0_0x0).__vtable;
  (*(code *)pcVar1->Kill)
            ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar1->Stop,2,lArg2,0);
  pcVar1 = (this->field0_0x0).__vtable;
  (*(code *)pcVar1->Kill)
            ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar1->Stop,3,lArg3,0);
  if (*(int *)&this->m_bIsPlaying == 0) {
    iVar6 = *(int *)&this->m_bIsPlaying;
  }
  else {
    pcVar1 = (this->field0_0x0).__vtable;
    lVar7 = (*(code *)pcVar1->SetPan)
                      ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                       (int)*(short *)&pcVar1->SetPitch);
    if (lVar7 != 0) {
      pcVar1 = (this->field0_0x0).__vtable;
      this->m_lPauseRefs = 1;
      uVar3 = (*(code *)pcVar1[1].AddRef)
                        ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                         (int)*(short *)&pcVar1[1].PlayPause);
      return (bool)uVar3;
    }
    iVar6 = *(int *)&this->m_bIsPlaying;
  }
  this->m_lPauseRefs = 0;
  if ((iVar6 == 0) ||
     (pcVar1 = (this->field0_0x0).__vtable,
     lVar7 = (*(code *)pcVar1->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar1->SetFxType,0x37), lVar7 != 0)) {
    Copy__12cRegisterSetP12cRegisterSet
              (&(this->m_AttrRegisterSet).field0_0x0,&TrackAttrDefaultsRegisterSet.field0_0x0);
    this_01 = &(this->field0_0x0).m_SndobRegisterSet;
    Copy__12cRegisterSetP12cRegisterSet
              (&this_01->field0_0x0,&SndobAttrDefaultsRegisterSet.field0_0x0);
    lRegisterId = 0;
    this_02 = &this->m_pTrack;
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
    iVar6 = (this->m_AttrRegisterSet).field0_0x0.m_lMinId;
    while( true ) {
      bVar2 = false;
      if ((iVar6 <= lRegisterId) &&
         (bVar2 = true, iVar6 + (this->m_AttrRegisterSet).field0_0x0.m_lNumRegs <= lRegisterId)) {
        bVar2 = false;
      }
                    /* end of inlined section */
      if (bVar2) {
        pcVar4 = GetTrackObject__17cSoundCacheHandle(this_02);
        pcVar1 = (pcVar4->field0_0x0).field0_0x0.__vtable;
        lVar7 = (*(code *)pcVar1[2].AddRef)
                          ((int)&(pcVar4->field0_0x0).field0_0x0.m_lSoundObjectFlag +
                           (int)*(short *)&pcVar1[2].PlayPause,lRegisterId);
        if (lVar7 != -0x80000000) {
          SetRegister__12cRegisterSetii
                    (&(this->m_AttrRegisterSet).field0_0x0,lRegisterId,(int)lVar7);
        }
      }
      else {
        iVar6 = (this->field0_0x0).m_SndobRegisterSet.field0_0x0.m_lMinId;
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
        bVar2 = false;
        if ((iVar6 <= lRegisterId) &&
           (bVar2 = true,
           iVar6 + (this->field0_0x0).m_SndobRegisterSet.field0_0x0.m_lNumRegs <= lRegisterId)) {
          bVar2 = false;
        }
                    /* end of inlined section */
        if (bVar2) {
          pcVar4 = GetTrackObject__17cSoundCacheHandle(this_02);
          pcVar1 = (pcVar4->field0_0x0).field0_0x0.__vtable;
          lVar7 = (*(code *)pcVar1[2].AddRef)
                            ((int)&(pcVar4->field0_0x0).field0_0x0.m_lSoundObjectFlag +
                             (int)*(short *)&pcVar1[2].PlayPause,lRegisterId);
          if (lVar7 != -0x80000000) {
            SetRegister__12cRegisterSetii(&this_01->field0_0x0,lRegisterId,(int)lVar7);
          }
        }
      }
      lRegisterId = lRegisterId + 1;
      if (0x7e < lRegisterId) break;
      iVar6 = (this->m_AttrRegisterSet).field0_0x0.m_lMinId;
    }
    pcVar1 = (this->field0_0x0).__vtable;
    lVar7 = (*(code *)pcVar1->RegisterVal)
                      ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                       (int)*(short *)&pcVar1->SetRegister);
    if (lVar7 == 1) {
      SetRegister__12cRegisterSetii(&this_01->field0_0x0,0x13,lArg1);
      SetRegister__12cRegisterSetii(&this_01->field0_0x0,0x14,lArg2);
    }
    else if ((1 < lVar7) && (lVar7 == 2)) {
      SetRegister__12cRegisterSetii(&this_01->field0_0x0,0x13,lArg2);
      SetRegister__12cRegisterSetii(&this_01->field0_0x0,0x14,lArg3);
      pcVar1 = (this->field0_0x0).__vtable;
      (*(code *)pcVar1->IsPlaying)
                ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar1->Update,lArg1)
      ;
    }
    pcVar4 = GetTrackObject__17cSoundCacheHandle(this_02);
    pcVar1 = (pcVar4->field0_0x0).field0_0x0.__vtable;
    iVar6 = (*(code *)pcVar1->SetFxLevel)
                      ((int)&(pcVar4->field0_0x0).field0_0x0.m_lSoundObjectFlag +
                       (int)*(short *)&pcVar1->SetFxType,0x32);
    SetPatch__12cTrackPlayeri(this,iVar6);
    UpdateVolPan__12cTrackPlayer(this);
    UpdatePitch__12cTrackPlayer(this);
    pcVar4 = GetTrackObject__17cSoundCacheHandle(this_02);
    __as__15TrackDataReaderRCQ23snd9TrackData(&this->m_tdrPlayPos,pcVar4->m_pTrackData);
    __as__15TrackDataReaderRC15TrackDataReader(&this->m_tdrLoopPos,&this->m_tdrPlayPos);
    this->m_pHitList = (GlobalHitlist *)0x0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
    pcVar1 = (this->field0_0x0).__vtable;
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
    this->m_lTimeNextCommand = (g_pHitMan->m_Timer).m_lElapsed;
    (*(code *)pcVar1[2]._dyncastimpl)
              ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)(pcVar1 + 2),0x2e,1,0);
    pcVar1 = (this->field0_0x0).__vtable;
    *(undefined4 *)&this->m_bIsPlaying = 1;
    (*(code *)pcVar1[1].Play)
              ((int)&(this->field0_0x0).m_lSoundObjectFlag +
               (int)*(short *)&pcVar1[1].WantsViewChangeNotifications);
  }
  return true;
}

bool cTrackPlayer::Play(Sint32 lArg1, Sint32 lArg2, Sint32 lArg3) {
  cSoundObject__107_1582__vtable *pcVar1;
  
  pcVar1 = (this->field0_0x0).__vtable;
  (*(code *)pcVar1[1]._dyncastimpl)
            ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)(pcVar1 + 1),lArg1,lArg2,
             lArg3);
  pcVar1 = (this->field0_0x0).__vtable;
  (*(code *)pcVar1[1].AddRef)
            ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar1[1].PlayPause);
  return true;
}

bool cTrackPlayer::Pause() {
	cTrackPlayer *this;
	
  cSoundObject__107_1582__vtable *pcVar1;
  cSampleChannel *pcVar2;
  long lVar3;
  
  this->m_lPauseRefs = 1;
  pcVar1 = (this->field0_0x0).__vtable;
  lVar3 = (*(code *)pcVar1->SetVolume)
                    ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar1->Init);
  if (lVar3 != 0) {
    pcVar2 = this->m_pChannel;
    if (pcVar2 != (cSampleChannel *)0x0) {
      pcVar1 = (pcVar2->field0_0x0).__vtable;
      (*(code *)pcVar1[1].Play)
                ((int)&(pcVar2->field0_0x0).m_lSoundObjectFlag +
                 (int)*(short *)&pcVar1[1].WantsViewChangeNotifications);
    }
                    /* end of inlined section */
    RemoveFromUpdateList__7cHitManP12cTrackPlayer(g_pHitMan,this);
  }
  return true;
}

bool cTrackPlayer::Unpause() {
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	
  cSoundObject__107_1582__vtable *pcVar1;
  cSampleChannel *pcVar2;
  cHitMan *this_00;
  long lVar3;
  
  this->m_lPauseRefs = 0;
  pcVar1 = (this->field0_0x0).__vtable;
  lVar3 = (*(code *)pcVar1->SetVolume)
                    ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar1->Init);
  if (lVar3 != 0) {
    pcVar2 = this->m_pChannel;
    if (pcVar2 != (cSampleChannel *)0x0) {
      pcVar1 = (pcVar2->field0_0x0).__vtable;
      (*(code *)pcVar1[1].AddRef)
                ((int)&(pcVar2->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar1[1].PlayPause
                );
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
    this_00 = g_pHitMan;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
    this->m_lTimeNextCommand = (g_pHitMan->m_Timer).m_lElapsed;
    AddToUpdateList__7cHitManP12cTrackPlayer(this_00,this);
  }
  return true;
}

bool cTrackPlayer::Stop() {
  cSoundObject__107_1582__vtable *pcVar1;
  long lVar2;
  
  pcVar1 = (this->field0_0x0).__vtable;
  lVar2 = (*(code *)pcVar1->SetVolume)
                    ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar1->Init);
  if (lVar2 != 0) {
    pcVar1 = (this->field0_0x0).__vtable;
    (*(code *)pcVar1[1].SetVolume)
              ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar1[1].Init);
  }
  return true;
}

bool cTrackPlayer::CancelNote() {
  cSampleChannel *pcVar1;
  cSoundObject__107_1582__vtable *pcVar2;
  long lVar3;
  
  pcVar1 = this->m_pChannel;
  if ((pcVar1 != (cSampleChannel *)0x0) &&
     (pcVar2 = (pcVar1->field0_0x0).__vtable,
     lVar3 = (*(code *)pcVar2->SetVolume)
                       ((int)&(pcVar1->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar2->Init
                       ), lVar3 != 0)) {
    pcVar2 = (this->m_pChannel->field0_0x0).__vtable;
    (*(code *)pcVar2[1].SetVolume)
              ((int)&(this->m_pChannel->field0_0x0).m_lSoundObjectFlag +
               (int)*(short *)&pcVar2[1].Init);
  }
  return true;
}

bool cTrackPlayer::Kill() {
	cTrackPlayer *this;
	cTrackPlayer *this;
	
  cSoundObject__107_1582__vtable *pcVar1;
  cHitMan *this_00;
  cTrack *pcVar2;
  
  *(undefined4 *)&this->m_bIsPlaying = 0;
  NoteOff__12cTrackPlayeri(this,0);
  SetPatch__12cTrackPlayeri(this,0);
  pcVar1 = (this->field0_0x0).__vtable;
  (this->field0_0x0).m_SndobRegisterSet.m_lFadeOn = 0;
  *(undefined4 *)&this->m_bKillAfterFade = 0;
  (*(code *)pcVar1[2]._dyncastimpl)
            ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)(pcVar1 + 2),0x2e,0,0);
  (this->m_pTarget).m_id = 0;
  pcVar2 = GetTrackObject__17cSoundCacheHandle(&this->m_pTrack);
  __as__15TrackDataReaderRCQ23snd9TrackData(&this->m_tdrPlayPos,pcVar2->m_pTrackData);
  this_00 = g_pHitMan;
  this->m_lTimeNextCommand = 0;
  RemoveFromUpdateList__7cHitManP12cTrackPlayer(this_00,this);
  DuckMapSetSndobPri__7cHitManP12cSoundObjecti(g_pHitMan,(cSoundObject__167_1004 *)this,0);
  return true;
}

bool cTrackPlayer::Step() {
	bool bOk;
	
  undefined uVar1;
  long lVar2;
  cSoundObject__107_1582__vtable *pcVar3;
  
  pcVar3 = (this->field0_0x0).__vtable;
  if (*(int *)&this->m_bIsPlaying == 0) {
    (*(code *)pcVar3->Uncache)
              ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar3->Cache,0,0,0);
    pcVar3 = (this->field0_0x0).__vtable;
  }
  lVar2 = (*(code *)pcVar3->SetPan)
                    ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar3->SetPitch)
  ;
  if (lVar2 == 0) {
    pcVar3 = (this->field0_0x0).__vtable;
    uVar1 = (*(code *)pcVar3[1].Play)
                      ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                       (int)*(short *)&pcVar3[1].WantsViewChangeNotifications);
  }
  else {
    uVar1 = DoCommand__12cTrackPlayer(this);
  }
  return (bool)uVar1;
}

Sint32 cTrackPlayer::RegisterVal(Sint32 lRegisterId) {
	cSoundCacheHandle *this;
	cSoundObject *this;
	
  cSoundObject__107_1582__vtable *pcVar1;
  int iVar2;
  cTrack *pcVar3;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  iVar2 = (this->m_pTarget).m_id;
                    /* end of inlined section */
                    /* end of inlined section */
  if (((iVar2 == (this->field0_0x0).m_lSoundObjectId) || (iVar2 == 0)) || (lRegisterId == 0x35)) {
    pcVar1 = (this->field0_0x0).__vtable;
    iVar2 = (*(code *)pcVar1[2].ClassId)
                      ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                       (int)*(short *)&pcVar1[2].cSoundObject,lRegisterId);
  }
  else {
    pcVar3 = GetTrackObject__17cSoundCacheHandle(&this->m_pTarget);
    pcVar1 = (pcVar3->field0_0x0).field0_0x0.__vtable;
    iVar2 = (*(code *)pcVar1->SetFxLevel)
                      ((int)&(pcVar3->field0_0x0).field0_0x0.m_lSoundObjectFlag +
                       (int)*(short *)&pcVar1->SetFxType,lRegisterId);
  }
  return iVar2;
}

Sint32 cTrackPlayer::LocalRegisterVal(Sint32 lRegisterId) {
  int iVar1;
  
  iVar1 = RegisterVal__12cRegisterSeti
                    (&(this->field0_0x0).m_SndobRegisterSet.field0_0x0,lRegisterId);
  return iVar1;
}

bool cTrackPlayer::SetRegister(Sint32 lRegisterId, Sint32 lValue, bool bDeferred) {
	cSoundCacheHandle *this;
	cSoundObject *this;
	
  int iVar1;
  cSoundObject__107_1582__vtable *pcVar2;
  undefined uVar3;
  cTrack *pcVar4;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  iVar1 = (this->m_pTarget).m_id;
                    /* end of inlined section */
                    /* end of inlined section */
  if (((iVar1 == (this->field0_0x0).m_lSoundObjectId) || (iVar1 == 0)) || (lRegisterId == 0x35)) {
    pcVar2 = (this->field0_0x0).__vtable;
    uVar3 = (*(code *)pcVar2[2]._dyncastimpl)
                      ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)(pcVar2 + 2),
                       lRegisterId,lValue,bDeferred);
  }
  else {
    pcVar4 = GetTrackObject__17cSoundCacheHandle(&this->m_pTarget);
    pcVar2 = (pcVar4->field0_0x0).field0_0x0.__vtable;
    uVar3 = (*(code *)pcVar2->Kill)
                      ((int)&(pcVar4->field0_0x0).field0_0x0.m_lSoundObjectFlag +
                       (int)*(short *)&pcVar2->Stop,lRegisterId,lValue,bDeferred);
  }
  return (bool)uVar3;
}

bool cTrackPlayer::SetLocalRegister(Sint32 lRegisterId, Sint32 lValue, bool bDeferred) {
	bool bOk;
	cTrackPlayer *this;
	SGUID lSndObId;
	Sint32 id;
	cSoundObject *this;
	cTrackPlayer *this;
	
  cSoundObject__107_1582__vtable *pcVar1;
  bool bVar2;
  long lVar3;
  
  SetCompareFlags__12cTrackPlayerii(this,lValue,0);
  bVar2 = SetRegister__12cRegisterSetii
                    (&(this->field0_0x0).m_SndobRegisterSet.field0_0x0,lRegisterId,lValue);
  if (bDeferred) {
    return bVar2;
  }
  switch(lRegisterId) {
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x1b:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x38:
  case 0x39:
    UpdateVolPan__12cTrackPlayer(this);
    return true;
  case 0x2d:
    pcVar1 = (this->field0_0x0).__vtable;
    lVar3 = (*(code *)pcVar1->SetVolume)
                      ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar1->Init);
    if (lVar3 != 0) {
      return true;
    }
    (this->field0_0x0).m_SndobRegisterSet.m_lFadeOn = 0;
    break;
  case 0x32:
    bVar2 = SetPatch__12cTrackPlayeri(this,(this->m_AttrRegisterSet).m_lPatchId);
    if (!bVar2) {
      return false;
    }
    UpdateVolPan__12cTrackPlayer(this);
  case 0x15:
    UpdatePitch__12cTrackPlayer(this);
    return true;
  case 0x35:
    if (lValue == 0) {
                    /* end of inlined section */
      (this->m_pTarget).m_id = (this->field0_0x0).m_lSoundObjectId;
    }
    else {
                    /* end of inlined section */
      (this->m_pTarget).m_id = lValue;
    }
    break;
  case 0x7b:
                    /* end of inlined section */
    DuckMapSetSndobPri__7cHitManP12cSoundObjecti(g_pHitMan,(cSoundObject__167_1004 *)this,lValue);
  }
  return true;
}

bool cTrackPlayer::DoCommand() {
	RegUnion cmd;
	cTrackPlayer *this;
	Sint32 lNoteReg;
	Sint32 lNoteNum;
	Sint32 lDurationReg;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lNoteNum;
	Sint32 lNoteNum;
	Sint32 lRegNum;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lRegNum;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lDestRegNum;
	Sint32 lSrcRegNum;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lDestRegNum;
	Sint32 lSrcRegNum;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lDestRegNum;
	Sint32 lSrcRegNum;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lDestRegNum;
	Sint32 lSrcRegNum;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lDestRegNum;
	cTrackPlayer *this;
	Sint32 lDestRegNum;
	cTrackPlayer *this;
	Sint32 lJumpAddr;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lSrcRegNum;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lSrcRegNum;
	Sint32 lDestRegNum;
	Sint32 lSrcVal;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lSrcRegNum;
	Sint32 lDestRegNum;
	Sint32 lSrcVal;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lSrcRegNum;
	Sint32 lDestRegNum;
	Sint32 lSrcVal;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lSrcRegNum;
	Sint32 lDestRegNum;
	Sint32 lSrcVal;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lSrcRegNum;
	Sint32 lDestRegNum;
	Sint32 lSrcVal;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lSrcRegNum;
	Sint32 lDestRegNum;
	Sint32 lSrcVal;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lDestReg;
	cTrackPlayer *this;
	Sint32 lDestReg;
	Sint32 lSrcReg;
	Sint32 lDestValue;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lJumpAddr;
	Sint32 lJumpAddr;
	Sint32 lJumpAddr;
	Sint32 lJumpAddr;
	Sint32 lJumpAddr;
	Sint32 lJumpAddr;
	Sint32 lDestReg;
	Sint32 lSrcReg;
	Sint32 lValue;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lDestReg;
	Sint32 lSrcReg;
	Sint32 lValue;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lDestReg;
	Sint32 lSrcReg;
	Sint32 lValue;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lDestReg;
	Sint32 lSrcReg;
	Sint32 lValue;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lDestReg;
	Sint32 lSrcReg;
	Sint32 lValue;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lDestReg;
	Sint32 lSrcReg;
	Sint32 lValue;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lDestReg;
	Sint32 lSrcReg;
	Sint32 lValue;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lDestReg;
	Sint32 lSrcReg;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lDestReg;
	Sint32 lSrcReg;
	Sint32 lValue;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lDestReg;
	Sint32 lSrcReg;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lDestReg;
	Sint32 lSrcReg;
	Sint32 lValue;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lDestReg;
	cTrackPlayer *this;
	Sint32 lDestReg;
	Sint32 lMinReg;
	Sint32 lMaxReg;
	Sint32 lMinVal;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lMin;
	unsigned int lim;
	Sint32 lDestReg;
	Sint32 lValue;
	cTrackPlayer *this;
	Sint32 lDestReg;
	Sint32 lLimit;
	Sint32 lValue;
	cTrackPlayer *this;
	Sint32 lDestReg;
	Sint32 lLimit;
	Sint32 lValue;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lDestReg;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lDestReg;
	Sint32 lSrcReg;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lRegId1;
	Sint32 lRegId2;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lSrcReg;
	Sint32 lHitListId;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lSrcReg;
	Sint32 lGroupId;
	Sint32 lGroupTrackId;
	Sint32 lThisTrackId;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cSoundObject *pGroupSndob;
	cTrackPlayer *this;
	SGUID lSndObId;
	Sint32 id;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lSrcReg;
	Sint32 lGroupId;
	Sint32 lGroupTrackId;
	Sint32 lThisTrackId;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lSrcReg;
	Sint32 lDestReg;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lDestReg;
	cTrackPlayer *this;
	int size;
	Sint32 lValue;
	cTrackPlayer *this;
	unsigned int lim;
	int i;
	unsigned int lim;
	unsigned int n;
	Sint32 lSrcReg;
	cTrackPlayer *this;
	Sint32 lSrcReg;
	Sint32 lValue;
	cSoundObject *pSndOb;
	cTrackPlayer *this;
	cTrackPlayer *this;
	SGUID lSndObId;
	Sint32 id;
	Sint32 lSrcReg;
	Sint32 lValue;
	cSoundObject *pSndOb;
	cTrackPlayer *this;
	cTrackPlayer *this;
	SGUID lSndObId;
	Sint32 id;
	Sint32 lDestReg;
	Sint32 lSourceIdReg;
	Sint32 lParmReg;
	Sint32 lSourceId;
	Sint32 lParmVal;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lDstReg;
	cTrackPlayer *this;
	cTrackPlayer *this;
	Sint32 lDstReg;
	Sint32 lVal;
	cTrackPlayer *this;
	cTrackPlayer *this;
	cTrackPlayer *this;
	
  short sVar1;
  RegUnion RVar2;
  cSampleChannel *pcVar3;
  cSoundObject__167_1004__vtable *pcVar4;
  short *psVar5;
  bool bVar6;
  RegUnion *pRVar7;
  GlobalHitlist *pGVar8;
  cSoundObject__167_1004 *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  code *pcVar14;
  long lVar15;
  undefined8 uVar16;
  cSoundObject__107_1582__vtable *pcVar18;
  uint uVar19;
  undefined8 unaff_s0;
  uint uVar20;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  cRegisterSet *this_00;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  cSoundCacheHandle local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int lParmVal;
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
  long lVar17;
  
  local_20 = (undefined4)unaff_s6;
  uStack_1c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
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
  __as__15TrackDataReaderRC15TrackDataReader(&this->m_tdrCurrentInstructionPos,&this->m_tdrPlayPos);
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  pRVar7 = ReadCommand__15TrackDataReader(&this->m_tdrPlayPos);
                    /* end of inlined section */
  RVar2 = *pRVar7;
  switch((uint)RVar2 & 0xff) {
  case 1:
    pcVar18 = (this->field0_0x0).__vtable;
    iVar11 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType,(uint)RVar2 >> 8 & 0xff);
    pcVar18 = (this->field0_0x0).__vtable;
    iVar12 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType,(uint)RVar2 >> 0x10 & 0xff);
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
    this->m_lTimeNoteKill = (g_pHitMan->m_Timer).m_lElapsed + iVar12;
    NoteOn__12cTrackPlayeri(this,iVar11);
    break;
  case 2:
    NoteOn__12cTrackPlayeri(this,((int)RVar2 << 8) >> 0x10);
    break;
  case 3:
    NoteOff__12cTrackPlayeri(this,((int)RVar2 << 8) >> 0x10);
    break;
  case 4:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc(g_pHitMan,this,"TRACK ERROR: kTrackCmdLoadb");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
                    /* end of inlined section */
    uVar13 = (uint)RVar2 >> 0x10;
    goto LAB_00279784;
  case 5:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc(g_pHitMan,this,"TRACK ERROR: kTrackCmdLoadl");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
                    /* end of inlined section */
    uVar13 = (uint)RVar2 >> 0x10;
    goto LAB_00279784;
  case 6:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdSet Dest");
      return true;
    }
    uVar13 = (uint)RVar2 >> 0x10 & 0xff;
    if ((uVar13 == 0) || (0x7f < uVar13)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdSet Src");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    uVar13 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType);
    pcVar18 = (this->field0_0x0).__vtable;
                    /* end of inlined section */
    goto LAB_00279784;
  case 7:
  case 8:
  case 0xf:
  case 0x1d:
  case 0x1e:
    break;
  case 9:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc(g_pHitMan,this,"TRACK ERROR: kTrackCmdWait");
    }
    else {
      pcVar18 = (this->field0_0x0).__vtable;
      iVar11 = (*(code *)pcVar18->SetFxLevel)
                         ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                          (int)*(short *)&pcVar18->SetFxType);
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
      this->m_lTimeNextCommand = (g_pHitMan->m_Timer).m_lElapsed + iVar11;
    }
    break;
  default:
                    /* end of inlined section */
    HandleTrackFlowError__7cHitManP12cTrackPlayerPc(g_pHitMan,this,"Illegal Instruction");
    break;
  case 0xb:
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
    pcVar3 = this->m_pChannel;
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
    this->m_lTimeNextCommand = (g_pHitMan->m_Timer).m_lElapsed + 2;
    if ((pcVar3 != (cSampleChannel *)0x0) &&
       (pcVar18 = (pcVar3->field0_0x0).__vtable,
       lVar17 = (*(code *)pcVar18->SetVolume)
                          ((int)&(pcVar3->field0_0x0).m_lSoundObjectFlag +
                           (int)*(short *)&pcVar18->Init), lVar17 != 0)) {
      __mm__15TrackDataReader(&this->m_tdrPlayPos);
    }
    break;
  case 0xc:
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
    pcVar18 = (this->field0_0x0).__vtable;
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
    this->m_lTimeNextCommand = (g_pHitMan->m_Timer).m_lElapsed + 2;
    sVar1 = *(short *)&pcVar18[1].Release;
    pcVar14 = (code *)pcVar18[1].Shutdown;
    goto LAB_002790ac;
  case 0xd:
    __apl__15TrackDataReaderi(&this->m_tdrPlayPos,((int)RVar2 << 8) >> 0x10);
    break;
  case 0xe:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc(g_pHitMan,this,"TRACK ERROR: kTrackCmdTest");
    }
    else {
      pcVar18 = (this->field0_0x0).__vtable;
      iVar11 = (*(code *)pcVar18->SetFxLevel)
                         ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                          (int)*(short *)&pcVar18->SetFxType);
      SetCompareFlags__12cTrackPlayerii(this,iVar11,0);
    }
    break;
  case 0x10:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdAdd lDestReg");
      return true;
    }
    uVar13 = (uint)RVar2 >> 0x10 & 0xff;
    if ((uVar13 == 0) || (0x7f < uVar13)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdAdd lSrcReg");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    iVar11 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType,uVar19);
    pcVar18 = (this->field0_0x0).__vtable;
    iVar12 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType,uVar13);
    pcVar18 = (this->field0_0x0).__vtable;
    lParmVal = iVar11 + iVar12;
    goto LAB_002796c4;
  case 0x11:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdSub lDestReg");
      return true;
    }
    uVar13 = (uint)RVar2 >> 0x10 & 0xff;
    if ((uVar13 == 0) || (0x7f < uVar13)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdSub lSrcReg");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    iVar11 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType,uVar19);
    pcVar18 = (this->field0_0x0).__vtable;
    iVar12 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType,uVar13);
    pcVar18 = (this->field0_0x0).__vtable;
    lParmVal = iVar11 - iVar12;
    goto LAB_002796c4;
  case 0x12:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdDiv lDestReg");
    }
    else {
      uVar13 = (uint)RVar2 >> 0x10 & 0xff;
      if ((uVar13 == 0) || (0x7f < uVar13)) {
                    /* end of inlined section */
        HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                  (g_pHitMan,this,"TRACK ERROR: kTrackCmdDiv lSrcReg");
      }
      else {
        pcVar18 = (this->field0_0x0).__vtable;
        iVar11 = (*(code *)pcVar18->SetFxLevel)
                           ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                            (int)*(short *)&pcVar18->SetFxType,uVar19);
        pcVar18 = (this->field0_0x0).__vtable;
        lVar17 = (*(code *)pcVar18->SetFxLevel)
                           ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                            (int)*(short *)&pcVar18->SetFxType,uVar13);
        if (lVar17 == 0) {
          trap(7);
        }
        pcVar18 = (this->field0_0x0).__vtable;
        (*(code *)pcVar18->Kill)
                  ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar18->Stop,
                   uVar19,iVar11 / (int)lVar17,0);
      }
    }
    break;
  case 0x13:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdMul lDestReg");
      return true;
    }
    uVar13 = (uint)RVar2 >> 0x10 & 0xff;
    if ((uVar13 == 0) || (0x7f < uVar13)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdMul lSrcReg");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    iVar11 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType,uVar19);
    pcVar18 = (this->field0_0x0).__vtable;
    iVar12 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType,uVar13);
    pcVar18 = (this->field0_0x0).__vtable;
    lParmVal = iVar11 * iVar12;
    iVar11 = (int)*(short *)&pcVar18->Stop;
    pcVar14 = (code *)pcVar18->Kill;
    goto LAB_002796d0;
  case 0x14:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdCmp Dest");
    }
    else {
      uVar19 = (uint)RVar2 >> 0x10 & 0xff;
      if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
        HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                  (g_pHitMan,this,"TRACK ERROR: kTrackCmdCmp Src");
      }
      else {
        pcVar18 = (this->field0_0x0).__vtable;
        iVar11 = (*(code *)pcVar18->SetFxLevel)
                           ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                            (int)*(short *)&pcVar18->SetFxType);
        pcVar18 = (this->field0_0x0).__vtable;
        iVar12 = (*(code *)pcVar18->SetFxLevel)
                           ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                            (int)*(short *)&pcVar18->SetFxType,uVar19);
        SetCompareFlags__12cTrackPlayerii(this,iVar11,iVar12);
      }
    }
    break;
  case 0x15:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdLess lDestReg");
      return true;
    }
    uVar13 = (uint)RVar2 >> 0x10 & 0xff;
    if ((uVar13 == 0) || (0x7f < uVar13)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdLess lSrcReg");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    lVar17 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType,uVar19);
    pcVar18 = (this->field0_0x0).__vtable;
    lVar15 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType,uVar13);
    pcVar18 = (this->field0_0x0).__vtable;
    lParmVal = (int)(lVar17 < lVar15);
    goto LAB_002796c4;
  case 0x16:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdGreater lDestReg");
      return true;
    }
    uVar13 = (uint)RVar2 >> 0x10 & 0xff;
    if ((uVar13 == 0) || (0x7f < uVar13)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdGreater lSrcReg");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    lVar17 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType,uVar19);
    pcVar18 = (this->field0_0x0).__vtable;
    lVar15 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType,uVar13);
    pcVar18 = (this->field0_0x0).__vtable;
    lParmVal = (int)(lVar15 < lVar17);
    goto LAB_002796c4;
  case 0x17:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdNot lDestReg");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    lVar17 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType,uVar19);
    pcVar18 = (this->field0_0x0).__vtable;
    lParmVal = (int)(lVar17 == 0);
    goto LAB_002796c4;
  case 0x18:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 != 0) && (uVar19 < 0x80)) {
                    /* end of inlined section */
      uVar13 = (uint)RVar2 >> 0x10 & 0xff;
      if ((uVar13 != 0) && (uVar20 = (uint)RVar2 >> 0x18, uVar13 < 0x80)) {
        if ((uVar20 != 0) && (uVar20 < 0x80)) {
          pcVar18 = (this->field0_0x0).__vtable;
          iVar11 = (*(code *)pcVar18->SetFxLevel)
                             ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                              (int)*(short *)&pcVar18->SetFxType);
          pcVar18 = (this->field0_0x0).__vtable;
          iVar12 = (*(code *)pcVar18->SetFxLevel)
                             ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                              (int)*(short *)&pcVar18->SetFxType,uVar20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/Srand.h */
          iVar10 = GetNextRandomNumber__Fv();
          if (iVar12 - iVar11 == 0) {
            trap(7);
          }
                    /* end of inlined section */
          pcVar18 = (this->field0_0x0).__vtable;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Srand.h */
                    /* end of inlined section */
          (*(code *)pcVar18->Kill)
                    ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar18->Stop,
                     uVar19,iVar10 % (iVar12 - iVar11) + iVar11,0);
          return true;
        }
                    /* end of inlined section */
        HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                  (g_pHitMan,this,"TRACK ERROR: kTrackCmdRand lMaxReg");
        return true;
      }
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdRand lMinReg");
      return true;
    }
    goto LAB_00278cc4;
  case 0x19:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 != 0) && (uVar19 < 0x80)) {
      pcVar18 = (this->field0_0x0).__vtable;
      iVar12 = (*(code *)pcVar18->SetFxLevel)
                         ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                          (int)*(short *)&pcVar18->SetFxType,uVar19);
      pcVar18 = (this->field0_0x0).__vtable;
      iVar11 = -iVar12;
      if (-1 < iVar12) {
        iVar11 = iVar12;
      }
      (*(code *)pcVar18->Kill)
                ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar18->Stop,uVar19,
                 iVar11,0);
      return true;
    }
LAB_00278cc4:
                    /* end of inlined section */
    HandleTrackFlowError__7cHitManP12cTrackPlayerPc
              (g_pHitMan,this,"TRACK ERROR: kTrackCmdRand lDestReg");
    break;
  case 0x1b:
    goto switchD_00277900_caseD_1b;
  case 0x1c:
                    /* end of inlined section */
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdAssert lDestReg");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    (*(code *)pcVar18->SetFxLevel)
              ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar18->SetFxType);
                    /* end of inlined section */
    pcVar18 = (this->field0_0x0).__vtable;
    goto LAB_002790a4;
  case 0x1f:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdGetVar lMaxReg");
      return true;
    }
    uVar13 = (uint)RVar2 >> 0x10 & 0xff;
    if ((uVar13 == 0) || (0x7f < uVar13)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdGetVar lSrcReg");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    uVar16 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType);
    pcVar18 = (this->field0_0x0).__vtable;
    lParmVal = (*(code *)pcVar18->SetFxLevel)
                         ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                          (int)*(short *)&pcVar18->SetFxType,uVar16);
    pcVar18 = (this->field0_0x0).__vtable;
    goto LAB_002796c4;
  case 0x20:
    __as__15TrackDataReaderRC15TrackDataReader(&this->m_tdrPlayPos,&this->m_tdrLoopPos);
    break;
  case 0x21:
    __as__15TrackDataReaderRC15TrackDataReader(&this->m_tdrLoopPos,&this->m_tdrPlayPos);
    break;
  case 0x22:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdCallback lRegId1");
      return true;
    }
    uVar19 = (uint)RVar2 >> 0x10 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdCallback lRegId2");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    (*(code *)pcVar18->SetFxLevel)
              ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar18->SetFxType);
    pcVar18 = (this->field0_0x0).__vtable;
    goto LAB_00279444;
  case 0x27:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdSmartChoose Dest");
      return true;
    }
    if (this->m_pHitList == (GlobalHitlist *)0x0) {
      return true;
    }
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    psVar5 = (this->m_pHitList->values).pData;
    if (psVar5 == (short *)0x0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(psVar5 + -2);
    }
                    /* end of inlined section */
    if (iVar11 == 0) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"Attempt to choose from empty track list");
      return true;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Srand.h */
    iVar12 = GetNextRandomNumber__Fv();
    iVar12 = iVar12 % iVar11;
    if (iVar11 == 0) {
      trap(7);
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Srand.h */
                    /* end of inlined section */
    if (iVar11 < 2) {
      pGVar8 = this->m_pHitList;
    }
    else {
      iVar10 = 0;
      if (iVar12 == this->m_lLastChooseValue) {
        do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Srand.h */
          iVar10 = iVar10 + 1;
          iVar12 = GetNextRandomNumber__Fv();
          iVar12 = iVar12 % iVar11;
          if (iVar11 == 0) {
            trap(7);
          }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/Srand.h */
                    /* end of inlined section */
        } while ((iVar12 == this->m_lLastChooseValue) && (iVar10 < 4));
      }
      this->m_lLastChooseValue = iVar12;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      pGVar8 = this->m_pHitList;
    }
                    /* end of inlined section */
    pcVar18 = (this->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    iVar11 = (int)*(short *)&pcVar18->Stop;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    pcVar14 = (code *)pcVar18->Kill;
    lParmVal = (int)(ushort)(pGVar8->values).pData[iVar12];
    goto LAB_002796d0;
  case 0x28:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdAnd lDestReg");
      return true;
    }
    uVar13 = (uint)RVar2 >> 0x10 & 0xff;
    if ((uVar13 == 0) || (0x7f < uVar13)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdAnd lSrcReg");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    uVar20 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType,uVar19);
    pcVar18 = (this->field0_0x0).__vtable;
    uVar13 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType,uVar13);
    pcVar18 = (this->field0_0x0).__vtable;
    lParmVal = uVar20 & uVar13;
    goto LAB_002796c4;
  case 0x29:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdNand lDestReg");
      return true;
    }
    uVar13 = (uint)RVar2 >> 0x10 & 0xff;
    if ((uVar13 == 0) || (0x7f < uVar13)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdNand lSrcReg");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    lParmVal = 0;
    lVar17 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType,uVar19);
    if ((lVar17 == 0) ||
       (pcVar18 = (this->field0_0x0).__vtable,
       lVar17 = (*(code *)pcVar18->SetFxLevel)
                          ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                           (int)*(short *)&pcVar18->SetFxType,uVar13), lVar17 == 0)) {
      lParmVal = 1;
      pcVar18 = (this->field0_0x0).__vtable;
    }
    else {
      pcVar18 = (this->field0_0x0).__vtable;
    }
    goto LAB_002796c4;
  case 0x2a:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdOr lDestReg");
      return true;
    }
    uVar13 = (uint)RVar2 >> 0x10 & 0xff;
    if ((uVar13 == 0) || (0x7f < uVar13)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdOr lSrcReg");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    uVar20 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType,uVar19);
    pcVar18 = (this->field0_0x0).__vtable;
    uVar13 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType,uVar13);
    pcVar18 = (this->field0_0x0).__vtable;
    lParmVal = uVar20 | uVar13;
    goto LAB_002796c4;
  case 0x2b:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdNor lDestReg");
      return true;
    }
    uVar13 = (uint)RVar2 >> 0x10 & 0xff;
    if ((uVar13 == 0) || (0x7f < uVar13)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdNor lSrcReg");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    lVar17 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType,uVar19);
    lParmVal = 0;
    if (lVar17 == 0) {
      pcVar18 = (this->field0_0x0).__vtable;
      lVar17 = (*(code *)pcVar18->SetFxLevel)
                         ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                          (int)*(short *)&pcVar18->SetFxType,uVar13,0);
      lParmVal = (int)(lVar17 == 0);
    }
    pcVar18 = (this->field0_0x0).__vtable;
    goto LAB_002796c4;
  case 0x2c:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdXor lDestReg");
      return true;
    }
    uVar13 = (uint)RVar2 >> 0x10 & 0xff;
    if ((uVar13 == 0) || (0x7f < uVar13)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdXor lSrcReg");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    uVar20 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType,uVar19);
    pcVar18 = (this->field0_0x0).__vtable;
    uVar13 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType,uVar13);
    pcVar18 = (this->field0_0x0).__vtable;
    lParmVal = uVar20 ^ uVar13;
    goto LAB_002796c4;
  case 0x2d:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdMin lDestReg");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    lParmVal = (*(code *)pcVar18->SetFxLevel)
                         ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                          (int)*(short *)&pcVar18->SetFxType,uVar19);
    pcVar18 = (this->field0_0x0).__vtable;
    iVar11 = (int)*(short *)&pcVar18->Stop;
    if ((int)((uint)RVar2 >> 0x10) <= lParmVal) {
      lParmVal = (uint)RVar2 >> 0x10;
    }
    pcVar14 = (code *)pcVar18->Kill;
    goto LAB_002796d0;
  case 0x2e:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdMax lDestReg");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    lParmVal = (*(code *)pcVar18->SetFxLevel)
                         ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                          (int)*(short *)&pcVar18->SetFxType,uVar19);
    pcVar18 = (this->field0_0x0).__vtable;
    iVar11 = (int)*(short *)&pcVar18->Stop;
    if (lParmVal <= (int)((uint)RVar2 >> 0x10)) {
      lParmVal = (uint)RVar2 >> 0x10;
    }
    pcVar14 = (code *)pcVar18->Kill;
    goto LAB_002796d0;
  case 0x2f:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdInc Dest");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    iVar11 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType,uVar19);
    pcVar18 = (this->field0_0x0).__vtable;
    lParmVal = iVar11 + 1;
    goto LAB_002796c4;
  case 0x30:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdDec Dest");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    iVar11 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType,uVar19);
    pcVar18 = (this->field0_0x0).__vtable;
    lParmVal = iVar11 - 1;
    goto LAB_002796c4;
  case 0x31:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdPrintReg lSrcReg");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
LAB_00279444:
    (*(code *)pcVar18->SetFxLevel)
              ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar18->SetFxType,
               uVar19);
    break;
  case 0x32:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdPlayTrack Src");
    }
    else {
      pcVar18 = (this->field0_0x0).__vtable;
      this_00 = &this->m_VarRegisterSet;
      local_8c = (*(code *)pcVar18->SetFxLevel)
                           ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                            (int)*(short *)&pcVar18->SetFxType);
      pcVar9 = GetObject__17cSoundCacheHandle((cSoundCacheHandle *)((uint)&local_90 | 4));
      pcVar4 = pcVar9->__vtable;
      sVar1 = *(short *)&pcVar4->Cache;
      iVar11 = RegisterVal__12cRegisterSeti(this_00,1);
      iVar12 = RegisterVal__12cRegisterSeti(this_00,2);
      iVar10 = RegisterVal__12cRegisterSeti(this_00,3);
      (*(code *)pcVar4->Uncache)((int)&pcVar9->m_lSoundObjectFlag + (int)sVar1,iVar11,iVar12,iVar10)
      ;
      pcVar4 = pcVar9->__vtable;
      pcVar18 = (this->field0_0x0).__vtable;
      sVar1 = *(short *)&pcVar4->Stop;
      uVar16 = (*(code *)pcVar18->SetFxLevel)
                         ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                          (int)*(short *)&pcVar18->SetFxType,0x2f);
      (*(code *)pcVar4->Kill)((int)&pcVar9->m_lSoundObjectFlag + (int)sVar1,0x2f,uVar16,0);
    }
    break;
  case 0x33:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 != 0) && (uVar19 < 0x80)) {
                    /* end of inlined section */
      pcVar18 = (this->field0_0x0).__vtable;
      local_88 = (*(code *)pcVar18->SetFxLevel)
                           ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                            (int)*(short *)&pcVar18->SetFxType);
      pcVar9 = GetObject__17cSoundCacheHandle((cSoundCacheHandle *)((uint)&local_90 | 8));
      if (pcVar9 == (cSoundObject__167_1004 *)0x0) {
        return true;
      }
      (*(code *)pcVar9->__vtable[1].SetVolume)
                ((int)&pcVar9->m_lSoundObjectFlag + (int)*(short *)&pcVar9->__vtable[1].Init);
      return true;
    }
LAB_00279604:
    HandleTrackFlowError__7cHitManP12cTrackPlayerPc
              (g_pHitMan,this,"TRACK ERROR: kTrackCmdKillTrack Src");
    break;
  case 0x3e:
    iVar11 = *(int *)&this->m_bCompareFlagEqual;
    iVar12 = ((int)RVar2 << 8) >> 0x10;
    goto joined_r0x00278364;
  case 0x3f:
    iVar12 = ((int)RVar2 << 8) >> 0x10;
    if (*(int *)&this->m_bCompareFlagEqual != 0) {
      return true;
    }
    goto LAB_002783a8;
  case 0x40:
    iVar11 = *(int *)&this->m_bCompareFlagGreater;
    goto LAB_00278358;
  case 0x41:
    iVar11 = *(int *)&this->m_bCompareFlagLess;
LAB_00278358:
    iVar12 = ((int)RVar2 << 8) >> 0x10;
    if (iVar11 != 0) {
      iVar11 = *(int *)&this->m_bCompareFlagEqual;
joined_r0x00278364:
      if (iVar11 == 0) {
LAB_002783a8:
        __apl__15TrackDataReaderi(&this->m_tdrPlayPos,iVar12);
      }
    }
    break;
  case 0x42:
    iVar11 = *(int *)&this->m_bCompareFlagGreater;
    goto LAB_00278394;
  case 0x43:
    iVar11 = *(int *)&this->m_bCompareFlagLess;
LAB_00278394:
    iVar12 = ((int)RVar2 << 8) >> 0x10;
    if (iVar11 == 0) {
      iVar11 = *(int *)&this->m_bCompareFlagEqual;
      goto joined_r0x00278364;
    }
    goto LAB_002783a8;
  case 0x44:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdSmartSetList lSrcReg");
    }
    else {
      pcVar18 = (this->field0_0x0).__vtable;
      lVar17 = (*(code *)pcVar18->SetFxLevel)
                         ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                          (int)*(short *)&pcVar18->SetFxType);
      if (lVar17 == 0) {
        this->m_pHitList = (GlobalHitlist *)0x0;
      }
      else {
                    /* end of inlined section */
        pGVar8 = GlobalHitList__7cHitMani(g_pHitMan,(int)lVar17);
        this->m_pHitList = pGVar8;
      }
      if (this->m_pHitList == (GlobalHitlist *)0x0) {
                    /* end of inlined section */
        HandleTrackFlowError__7cHitManP12cTrackPlayerPc(g_pHitMan,this,"Undefined Hit List");
      }
    }
    break;
  case 0x45:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdSeqGroupKill Src");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    lVar17 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType);
    if (lVar17 < 0x401) {
                    /* end of inlined section */
      iVar12 = SequenceGroupTrackId__7cHitMani(g_pHitMan,(int)lVar17);
                    /* end of inlined section */
      iVar11 = (this->m_pTrack).m_id;
      if ((iVar12 != 0) && (iVar12 != iVar11)) {
        local_90.m_id = iVar12;
                    /* end of inlined section */
        pcVar9 = GetObject__17cSoundCacheHandle(&local_90);
        lVar15 = (*(code *)pcVar9->__vtable->SetFxLevel)
                           ((int)&pcVar9->m_lSoundObjectFlag +
                            (int)*(short *)&pcVar9->__vtable->SetFxType,0x13);
        pcVar4 = pcVar9->__vtable;
        if (lVar15 == 0) {
          (*(code *)pcVar4[1].SetVolume)
                    ((int)&pcVar9->m_lSoundObjectFlag + (int)*(short *)&pcVar4[1].Init);
        }
        else {
          lVar15 = (*(code *)pcVar4->SetFxLevel)
                             ((int)&pcVar9->m_lSoundObjectFlag + (int)*(short *)&pcVar4->SetFxType,
                              0x2d);
          if ((lVar15 == 0) ||
             (lVar15 = (*(code *)pcVar9->__vtable->SetFxLevel)
                                 ((int)&pcVar9->m_lSoundObjectFlag +
                                  (int)*(short *)&pcVar9->__vtable->SetFxType,0x29), lVar15 != 0x13)
             ) {
            (*(code *)pcVar9->__vtable->Kill)
                      ((int)&pcVar9->m_lSoundObjectFlag + (int)*(short *)&pcVar9->__vtable->Stop,
                       0x2a,200,0);
            (*(code *)pcVar9->__vtable->Kill)
                      ((int)&pcVar9->m_lSoundObjectFlag + (int)*(short *)&pcVar9->__vtable->Stop,
                       0x29,0x13,0);
            (*(code *)pcVar9->__vtable->Kill)
                      ((int)&pcVar9->m_lSoundObjectFlag + (int)*(short *)&pcVar9->__vtable->Stop,
                       0x2d,1,0);
                    /* end of inlined section */
          }
          __as__15TrackDataReaderRC15TrackDataReader
                    (&this->m_tdrPlayPos,&this->m_tdrCurrentInstructionPos);
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
          this->m_lTimeNextCommand = (g_pHitMan->m_Timer).m_lElapsed + 2;
        }
      }
                    /* end of inlined section */
      SetSequenceGroupTrackId__7cHitManii(g_pHitMan,(int)lVar17,iVar11);
      return true;
    }
    goto switchD_00277900_caseD_1b;
  case 0x46:
  case 0x47:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdSeqGroupReturn lSrcReg");
    }
    else {
      pcVar18 = (this->field0_0x0).__vtable;
      iVar12 = (*(code *)pcVar18->SetFxLevel)
                         ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                          (int)*(short *)&pcVar18->SetFxType);
      iVar10 = SequenceGroupTrackId__7cHitMani(g_pHitMan,iVar12);
                    /* end of inlined section */
      iVar11 = (this->m_pTrack).m_id;
      if ((iVar10 != 0) && (iVar10 != iVar11)) {
        pcVar18 = (this->field0_0x0).__vtable;
        (*(code *)pcVar18[1].SetVolume)
                  ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar18[1].Init);
      }
                    /* end of inlined section */
      SetSequenceGroupTrackId__7cHitManii(g_pHitMan,iVar12,iVar11);
    }
    break;
  case 0x48:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdKillTrack Dest");
      return true;
    }
    uVar13 = (uint)RVar2 >> 0x10 & 0xff;
    if ((uVar13 == 0) || (uVar20 = (uint)RVar2 >> 0x18, 0x7f < uVar13)) goto LAB_00279604;
    if ((uVar20 == 0) || (0x7f < uVar20)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdKillTrack Parm");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    iVar11 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType);
    pcVar18 = (this->field0_0x0).__vtable;
    iVar12 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType,uVar20);
    bVar6 = GetSourceDataField__7cHitManiiPi(g_pHitMan,iVar11,iVar12,(int *)((uint)&local_90 | 0xc))
    ;
    if (!bVar6) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"Illegal source parameter request");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    goto LAB_002796c4;
  case 0x49:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdSeqGroupTrackId lSrcReg");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    uVar19 = (uint)RVar2 >> 0x10 & 0xff;
    iVar11 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType);
    lParmVal = SequenceGroupTrackId__7cHitMani(g_pHitMan,iVar11);
    pcVar18 = (this->field0_0x0).__vtable;
LAB_002796c4:
    iVar11 = (int)*(short *)&pcVar18->Stop;
    pcVar14 = (code *)pcVar18->Kill;
LAB_002796d0:
    (*pcVar14)((int)&(this->field0_0x0).m_lSoundObjectFlag + iVar11,uVar19,lParmVal,0);
    break;
  case 0x4a:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdSetLocalLocal Dest");
      return true;
    }
    uVar13 = (uint)RVar2 >> 0x10 & 0xff;
    if ((uVar13 == 0) || (0x7f < uVar13)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdSetLocalLocal Src");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    uVar13 = (*(code *)pcVar18[2].ClassId)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18[2].cSoundObject);
    pcVar18 = (this->field0_0x0).__vtable;
    iVar11 = (int)*(short *)(pcVar18 + 2);
                    /* end of inlined section */
    pcVar14 = (code *)pcVar18[2]._dyncastimpl;
    goto LAB_00279790;
  case 0x4b:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdSetLocalTarget Dest");
      return true;
    }
    uVar13 = (uint)RVar2 >> 0x10 & 0xff;
    if ((uVar13 == 0) || (0x7f < uVar13)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdSetLocalTarget Src");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    uVar13 = (*(code *)pcVar18[2].ClassId)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18[2].cSoundObject);
    pcVar18 = (this->field0_0x0).__vtable;
                    /* end of inlined section */
    goto LAB_00279784;
  case 0x4c:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdSetTargetLocal Dest");
      return true;
    }
    uVar13 = (uint)RVar2 >> 0x10 & 0xff;
    if ((uVar13 == 0) || (0x7f < uVar13)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdSetTargetLocal Src");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    uVar13 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType);
    pcVar18 = (this->field0_0x0).__vtable;
    iVar11 = (int)*(short *)(pcVar18 + 2);
                    /* end of inlined section */
    pcVar14 = (code *)pcVar18[2]._dyncastimpl;
    goto LAB_00279790;
  case 0x4d:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdWaitEq Src");
      return true;
    }
    uVar19 = (uint)RVar2 >> 0x10 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdWaitEq Dest");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    lVar17 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType);
    pcVar18 = (this->field0_0x0).__vtable;
    lVar15 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType,uVar19);
    if (lVar17 == lVar15) {
      return true;
    }
    goto LAB_002781f8;
  case 0x4e:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdWaitNe Dest");
      return true;
    }
    uVar19 = (uint)RVar2 >> 0x10 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdWaitNe Src");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    lVar17 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType);
    pcVar18 = (this->field0_0x0).__vtable;
    lVar15 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType,uVar19);
    if (lVar17 != lVar15) {
      return true;
    }
    goto LAB_002781f8;
  case 0x4f:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdWaitGt Dest");
      return true;
    }
    uVar19 = (uint)RVar2 >> 0x10 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdWaitGt lDestRegNum");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    lVar17 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType);
    pcVar18 = (this->field0_0x0).__vtable;
    lVar15 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType,uVar19);
    if (lVar15 < lVar17) {
      return true;
    }
    goto LAB_002781f8;
  case 0x50:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdWaitLt Dest");
      return true;
    }
    uVar19 = (uint)RVar2 >> 0x10 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdWaitLt lDestRegNum");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    lVar17 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType);
    pcVar18 = (this->field0_0x0).__vtable;
    lVar15 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType,uVar19);
    if (lVar17 < lVar15) {
      return true;
    }
    goto LAB_002781f8;
  case 0x51:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdWaitGe Dest");
      return true;
    }
    uVar19 = (uint)RVar2 >> 0x10 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdWaitGe lDestRegNum");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    lVar17 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType);
    pcVar18 = (this->field0_0x0).__vtable;
    lVar15 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType,uVar19);
    if (lVar15 <= lVar17) {
      return true;
    }
    goto LAB_002781f8;
  case 0x52:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdWaitLe Dest");
      return true;
    }
    uVar19 = (uint)RVar2 >> 0x10 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdWaitLe lDestRegNum");
      return true;
    }
    pcVar18 = (this->field0_0x0).__vtable;
    lVar17 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType);
    pcVar18 = (this->field0_0x0).__vtable;
    lVar15 = (*(code *)pcVar18->SetFxLevel)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18->SetFxType,uVar19);
    if (lVar17 <= lVar15) {
      return true;
    }
LAB_002781f8:
    __mm__15TrackDataReader(&this->m_tdrPlayPos);
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
    this->m_lTimeNextCommand = (g_pHitMan->m_Timer).m_lElapsed + 2;
    break;
  case 0x53:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) {
LAB_00279738:
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,this,"TRACK ERROR: kTrackCmdLoadHitlist Dst");
      return true;
    }
                    /* end of inlined section */
    pcVar18 = (this->field0_0x0).__vtable;
    uVar13 = (*(code *)pcVar18[2].RegisterVal)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18[2].SetRegister);
    pcVar18 = (this->field0_0x0).__vtable;
                    /* end of inlined section */
    goto LAB_00279784;
  case 0x54:
    uVar19 = (uint)RVar2 >> 8 & 0xff;
    if ((uVar19 == 0) || (0x7f < uVar19)) goto LAB_00279738;
    pcVar18 = (this->field0_0x0).__vtable;
    uVar13 = (*(code *)pcVar18[2].Play)
                       ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar18[2].WantsViewChangeNotifications);
    if (uVar13 == 0) {
      JumpToEnd__15TrackDataReader(&this->m_tdrPlayPos);
      pcVar18 = (this->field0_0x0).__vtable;
    }
    else {
      pcVar18 = (this->field0_0x0).__vtable;
    }
LAB_00279784:
    iVar11 = (int)*(short *)&pcVar18->Stop;
    pcVar14 = (code *)pcVar18->Kill;
LAB_00279790:
    lVar17 = (*pcVar14)((int)&(this->field0_0x0).m_lSoundObjectFlag + iVar11,uVar19,uVar13,0);
    if (lVar17 == 0) {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc(g_pHitMan,this,"Could not set register");
    }
  }
  return true;
switchD_00277900_caseD_1b:
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  pcVar18 = (this->field0_0x0).__vtable;
LAB_002790a4:
  sVar1 = *(short *)&pcVar18[1].Release;
  pcVar14 = (code *)pcVar18[1].Shutdown;
LAB_002790ac:
  (*pcVar14)((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)sVar1);
  return true;
                    /* end of inlined section */
}

Sint32 cTrack::GetHitListForGender() {
	Sint32 result;
	VoxHitlist *pVoxHitlist;
	cTrackPlayer *this;
	Sint32 lParmVal;
	cTrackPlayer *this;
	cTrackPlayer *this;
	
  cSoundObject__107_1582__vtable *pcVar1;
  cHitMan *this_00;
  bool bVar2;
  int iVar3;
  VoxHitlist *pVVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  uint uVar5;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  int lParmVal;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  this_00 = g_pHitMan;
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  uVar5 = 0;
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
  pcVar1 = (this->field0_0x0).field0_0x0.__vtable;
  iVar3 = (*(code *)pcVar1[2].RegisterVal)
                    ((int)&(this->field0_0x0).field0_0x0.m_lSoundObjectFlag +
                     (int)*(short *)&pcVar1[2].SetRegister);
  pVVar4 = GetVoxHitlist__C7cHitMani(this_00,iVar3);
  if (pVVar4 != (VoxHitlist *)0x0) {
    pcVar1 = (this->field0_0x0).field0_0x0.__vtable;
    iVar3 = (*(code *)pcVar1->SetFxLevel)
                      ((int)&(this->field0_0x0).field0_0x0.m_lSoundObjectFlag +
                       (int)*(short *)&pcVar1->SetFxType,1);
    bVar2 = GetSourceDataField__7cHitManiiPi(g_pHitMan,iVar3,0,&lParmVal);
    if (bVar2) {
      if (lParmVal == 1) {
        uVar5 = (uint)(ushort)pVVar4->femaleHitlist;
      }
      else if (lParmVal < 2) {
        uVar5 = 0;
        if (lParmVal == 0) {
          uVar5 = (uint)(ushort)pVVar4->maleHitlist;
        }
      }
      else {
        uVar5 = 0;
        if (lParmVal == 2) {
          uVar5 = (uint)(ushort)pVVar4->childHitlist;
        }
      }
    }
    else {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc
                (g_pHitMan,&this->field0_0x0,"Illegal source parameter request");
      uVar5 = 0;
    }
  }
  return uVar5;
}

void cTrackPlayer::SetCompareFlags(Sint32 lDestValue, Sint32 lSrcValue) {
  *(uint *)&this->m_bCompareFlagLess = (uint)(lDestValue < lSrcValue);
  *(uint *)&this->m_bCompareFlagEqual = (uint)(lDestValue == lSrcValue);
  *(uint *)&this->m_bCompareFlagGreater = (uint)(lSrcValue < lDestValue);
  return;
}

bool cTrackPlayer::NoteOn(Sint32 lNoteNum) {
	cSampleChannel *pChannel;
	bool bOk;
	cTrackPlayer *this;
	Sint32 lNoteNum;
	cTrackPlayer *this;
	cSoundCacheHandle *this;
	cTrackPlayer *this;
	
  cSampleChannel *pcVar1;
  cSoundObject__107_1582__vtable *pcVar2;
  undefined uVar3;
  cSamplePatch *pcVar4;
  long lVar5;
  char *szMsg2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  pcVar1 = this->m_pChannel;
                    /* end of inlined section */
  if (pcVar1 == (cSampleChannel *)0x0) {
                    /* end of inlined section */
    szMsg2 = "Attempt to play note with no channel";
  }
  else {
                    /* end of inlined section */
    if ((this->m_pPatch).m_id != 0) {
      pcVar2 = (pcVar1->field0_0x0).__vtable;
      uVar3 = (*(code *)pcVar2[2]._dyncastimpl)
                        ((int)&(pcVar1->field0_0x0).m_lSoundObjectFlag + (int)*(short *)(pcVar2 + 2)
                         ,lNoteNum);
      pcVar4 = GetPatchObject__17cSoundCacheHandle(&this->m_pPatch);
      pcVar2 = (pcVar4->field0_0x0).__vtable;
      lVar5 = (*(code *)pcVar2->SetFxLevel)
                        ((int)&(pcVar4->field0_0x0).m_lSoundObjectFlag +
                         (int)*(short *)&pcVar2->SetFxType,0x26);
      if (lVar5 == 0) {
        return (bool)uVar3;
      }
      UpdateVolPan__12cTrackPlayer(this);
      UpdatePitch__12cTrackPlayer(this);
      return (bool)uVar3;
    }
                    /* end of inlined section */
    szMsg2 = "Attempt to play note with no patch";
  }
  HandleTrackFlowError__7cHitManP12cTrackPlayerPc(g_pHitMan,this,szMsg2);
  return false;
}

bool cTrackPlayer::SetPatch(Sint32 lPatchId) {
	cSoundCacheHandle *this;
	cTrackPlayer *this;
	cSoundCacheHandle *this;
	cTrackPlayer *this;
	
  cSoundObject__107_1582__vtable *pcVar1;
  cSamplePatch *pcVar2;
  cSampleChannel *pcVar3;
  long lVar4;
  undefined8 uVar5;
  cSoundCacheHandle *this_00;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
  if ((this->m_pPatch).m_id != 0) {
    NoteOff__12cTrackPlayeri(this,0);
    pcVar2 = GetPatchObject__17cSoundCacheHandle(&this->m_pPatch);
    pcVar1 = (pcVar2->field0_0x0).__vtable;
    (*(code *)pcVar1[1].SetInstanceId)
              ((int)&(pcVar2->field0_0x0).m_lSoundObjectFlag +
               (int)*(short *)&pcVar1[1].SetSoundObjectId);
    (this->m_pPatch).m_id = 0;
  }
  pcVar3 = this->m_pChannel;
  if (pcVar3 != (cSampleChannel *)0x0) {
    pcVar1 = (pcVar3->field0_0x0).__vtable;
    (*(code *)pcVar1[1].ArgsType)
              ((int)&(pcVar3->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar1[1].InstanceId)
    ;
    pcVar3 = this->m_pChannel;
    if (pcVar3 != (cSampleChannel *)0x0) {
      pcVar1 = (pcVar3->field0_0x0).__vtable;
      (*(code *)pcVar1->SetInstanceId)
                ((int)&(pcVar3->field0_0x0).m_lSoundObjectFlag +
                 (int)*(short *)&pcVar1->SetSoundObjectId,3);
    }
    this->m_pChannel = (cSampleChannel *)0x0;
  }
  (this->m_AttrRegisterSet).m_lPatchId = lPatchId;
  if (lPatchId != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
    this_00 = &this->m_pPatch;
                    /* end of inlined section */
    (this->m_pPatch).m_id = lPatchId;
    GetPatchObject__17cSoundCacheHandle(this_00);
    pcVar2 = GetPatchObject__17cSoundCacheHandle(this_00);
    pcVar1 = (pcVar2->field0_0x0).__vtable;
    lVar4 = (*(code *)pcVar1->ArgsType)
                      ((int)&(pcVar2->field0_0x0).m_lSoundObjectFlag +
                       (int)*(short *)&pcVar1->InstanceId);
    if (lVar4 == -0x5c326949) {
      pcVar2 = GetPatchObject__17cSoundCacheHandle(this_00);
      pcVar1 = (pcVar2->field0_0x0).__vtable;
      (*(code *)pcVar1[1].ClassId)
                ((int)&(pcVar2->field0_0x0).m_lSoundObjectFlag +
                 (int)*(short *)&pcVar1[1].cSoundObject);
      pcVar2 = GetPatchObject__17cSoundCacheHandle(this_00);
      pcVar1 = (pcVar2->field0_0x0).__vtable;
      pcVar3 = (cSampleChannel *)
               (*(code *)pcVar1[2].SetInstanceId)
                         ((int)&(pcVar2->field0_0x0).m_lSoundObjectFlag +
                          (int)*(short *)&pcVar1[2].SetSoundObjectId);
      this->m_pChannel = pcVar3;
      UpdateVolPan__12cTrackPlayer(this);
      UpdatePitch__12cTrackPlayer(this);
      pcVar2 = GetPatchObject__17cSoundCacheHandle(this_00);
      pcVar1 = (pcVar2->field0_0x0).__vtable;
      uVar5 = (*(code *)pcVar1->SetFxLevel)
                        ((int)&(pcVar2->field0_0x0).m_lSoundObjectFlag +
                         (int)*(short *)&pcVar1->SetFxType,0x1a);
      pcVar1 = (this->field0_0x0).__vtable;
      (*(code *)pcVar1->Kill)
                ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar1->Stop,0x1a,
                 uVar5,0);
    }
    else {
                    /* end of inlined section */
      HandleTrackFlowError__7cHitManP12cTrackPlayerPc(g_pHitMan,this,"Bad Patch ID");
    }
  }
  return true;
}

bool cTrackPlayer::NoteOff(Sint32 lNoteNum) {
	cSampleChannel *pChannel;
	Sint32 lNoteNum;
	
  cSampleChannel *pcVar1;
  cSoundObject__107_1582__vtable *pcVar2;
  undefined uVar3;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  pcVar1 = this->m_pChannel;
                    /* end of inlined section */
  if (pcVar1 == (cSampleChannel *)0x0) {
    uVar3 = 1;
  }
  else {
    pcVar2 = (pcVar1->field0_0x0).__vtable;
    uVar3 = (*(code *)pcVar2[2].ClassId)
                      ((int)&(pcVar1->field0_0x0).m_lSoundObjectFlag +
                       (int)*(short *)&pcVar2[2].cSoundObject,lNoteNum);
  }
  return (bool)uVar3;
}

bool cTrackPlayer::UpdatePitch() {
	Sint32 lPitch;
	
  bool bVar1;
  int iVar2;
  cSoundObject__107_1582__vtable *pcVar3;
  cSamplePatch *pcVar4;
  int iVar5;
  
  bVar1 = this->m_pChannel != (cSampleChannel *)0x0;
  if (bVar1) {
    iVar2 = (this->field0_0x0).m_SndobRegisterSet.m_lPitch;
    pcVar4 = GetPatchObject__17cSoundCacheHandle(&this->m_pPatch);
    pcVar3 = (pcVar4->field0_0x0).__vtable;
    iVar5 = (*(code *)pcVar3->SetFxLevel)
                      ((int)&(pcVar4->field0_0x0).m_lSoundObjectFlag +
                       (int)*(short *)&pcVar3->SetFxType,0x15);
    pcVar3 = (this->m_pChannel->field0_0x0).__vtable;
    (*(code *)pcVar3[1].SndobRegisterSet)
              ((int)&(this->m_pChannel->field0_0x0).m_lSoundObjectFlag +
               (int)*(short *)&pcVar3[1].IsPaused,iVar2 + iVar5 + -0xe10);
  }
  return bVar1;
}

bool cTrackPlayer::UpdateVolPan() {
	cSampleChannel *pChannel;
	Sint32 lVolume;
	Sint32 lControlGroupId;
	Sint32 lGlobalDuckPri;
	cTrackPlayer *this;
	cTrackPlayer *this;
	
  cSampleChannel *pcVar1;
  undefined uVar2;
  int iVar3;
  cTrack *pcVar4;
  cHitControlGroup *pcVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  cSoundObject__107_1582__vtable *pcVar9;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  pcVar1 = this->m_pChannel;
                    /* end of inlined section */
  if (pcVar1 == (cSampleChannel *)0x0) {
    uVar2 = 0;
  }
  else {
    pcVar9 = (this->field0_0x0).__vtable;
    iVar3 = (*(code *)pcVar9->SetFxLevel)
                      ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                       (int)*(short *)&pcVar9->SetFxType,0x13);
    pcVar9 = (this->field0_0x0).__vtable;
    (*(code *)pcVar9->SetFxLevel)
              ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar9->SetFxType,0x14)
    ;
    pcVar9 = (this->field0_0x0).__vtable;
    (*(code *)pcVar9->SetFxLevel)
              ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar9->SetFxType,0x1a)
    ;
    pcVar9 = (this->field0_0x0).__vtable;
    (*(code *)pcVar9->SetFxLevel)
              ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar9->SetFxType,0x1b)
    ;
    pcVar9 = (this->field0_0x0).__vtable;
    (*(code *)pcVar9->SetFxLevel)
              ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar9->SetFxType,0x1c)
    ;
    pcVar9 = (this->field0_0x0).__vtable;
    (*(code *)pcVar9->SetFxLevel)
              ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar9->SetFxType,0x1d)
    ;
    pcVar9 = (this->field0_0x0).__vtable;
    (*(code *)pcVar9->SetFxLevel)
              ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar9->SetFxType,0x38)
    ;
    pcVar9 = (this->field0_0x0).__vtable;
    (*(code *)pcVar9->SetFxLevel)
              ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar9->SetFxType,0x39)
    ;
    pcVar9 = (pcVar1->field0_0x0).__vtable;
    (*(code *)pcVar9[1].RegisterVal)
              ((int)&(pcVar1->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar9[1].SetRegister
               ,(this->field0_0x0).m_SndobRegisterSet.m_lPan);
    pcVar4 = GetTrackObject__17cSoundCacheHandle(&this->m_pTrack);
    pcVar9 = (pcVar4->field0_0x0).field0_0x0.__vtable;
    lVar7 = (*(code *)pcVar9[2].Shutdown)
                      ((int)&(pcVar4->field0_0x0).field0_0x0.m_lSoundObjectFlag +
                       (int)*(short *)&pcVar9[2].Release);
    if (lVar7 == 0) {
      pcVar9 = (this->field0_0x0).__vtable;
    }
    else {
                    /* end of inlined section */
      pcVar5 = ControlGroup__7cHitMani(g_pHitMan,(int)lVar7);
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
      if (pcVar5->m_lVolume == 0x400) {
        pcVar9 = (this->field0_0x0).__vtable;
      }
      else {
        iVar3 = iVar3 * pcVar5->m_lVolume;
        iVar6 = iVar3 + 0x3ff;
        if (-1 < iVar3) {
          iVar6 = iVar3;
        }
        iVar3 = iVar6 >> 10;
        pcVar9 = (this->field0_0x0).__vtable;
      }
    }
    lVar7 = (*(code *)pcVar9->SetFxLevel)
                      ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                       (int)*(short *)&pcVar9->SetFxType,0x7b);
    if (lVar7 != 0) {
      pcVar9 = (this->field0_0x0).__vtable;
      lVar8 = (*(code *)pcVar9->SetFxLevel)
                        ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                         (int)*(short *)&pcVar9->SetFxType,0x19);
      if (lVar8 < lVar7) {
        iVar3 = iVar3 / 2;
      }
    }
    pcVar9 = (pcVar1->field0_0x0).__vtable;
    uVar2 = (*(code *)pcVar9[1].IsPlaying)
                      ((int)&(pcVar1->field0_0x0).m_lSoundObjectFlag +
                       (int)*(short *)&pcVar9[1].Update,iVar3);
  }
  return (bool)uVar2;
}

bool cTrackPlayer::Load() {
  return true;
}

bool cTrackPlayer::Unload() {
  return true;
}

bool cTrackPlayer::Cache() {
  return true;
}

bool cTrackPlayer::Uncache() {
  return true;
}

cSamplePatch* cSamplePatch::cSamplePatch(Sint32 lSndobId, u32 sampleID, u32 musicID, bool bLoop) {
	cSoundObject *this;
	cSndobAttrRegisterSet *this;
	cRegisterSet *this;
	cSoundObject *this;
	
  bool bVar1;
  cSndobAttrRegisterSet *this_00;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  this_00 = &(this->field0_0x0).m_SndobRegisterSet;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  *(undefined4 *)&(this->field0_0x0).m_SndobRegisterSet.field0_0x0 = 0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  (this->field0_0x0).m_lRefCount = 0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  (this->field0_0x0).m_lArgsType = 0;
  *(undefined4 *)&(this->field0_0x0).m_bIsPaused = 0;
  (this->field0_0x0).m_lClassId = -0x5c326949;
  (this->field0_0x0).m_lSoundObjectFlag = -0x54523502;
  (this->field0_0x0).__vtable = (cSoundObject__107_1582__vtable *)_vt_12cSoundObject;
  Init__21cSndobAttrRegisterSetii(this_00,0x1f,0x11);
                    /* end of inlined section */
  bVar1 = musicID != 0;
  if (sampleID != 0) {
    musicID = sampleID;
  }
  (this->field0_0x0).m_lSoundObjectId = lSndobId;
  (this->field10_0xd8).m_sampleID = musicID;
  this->m_lResourceId = 0;
  this->m_pDefaultChannel = (cSampleChannel *)0x0;
  this->m_lLoadRefCount = 0;
  this->m_lCacheRefCount = 0;
  this->m_pSnd = (cIGZSnd *)0x0;
  *(uint *)&this->m_bIsMusic = (uint)bVar1;
  (this->field0_0x0).__vtable = (cSoundObject__107_1582__vtable *)_vt_12cSamplePatch;
  SetRegister__12cRegisterSetii(&this_00->field0_0x0,0x2c,(int)bLoop);
  return this;
}

void cSamplePatch::~cSamplePatch(int __in_chrg) {
	cSoundObject *this;
	void *pAddress;
	
  (this->field0_0x0).__vtable = (cSoundObject__107_1582__vtable *)_vt_12cSamplePatch;
  Shutdown__12cSamplePatch(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  (this->field0_0x0).__vtable = (cSoundObject__107_1582__vtable *)_vt_12cSoundObject;
  ___12cRegisterSet(&(this->field0_0x0).m_SndobRegisterSet.field0_0x0,2);
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
    __dl__12cSamplePatchPv(this);
  }
  return;
}

bool cSamplePatch::SetVolume(Sint32 lVolume) {
  cSoundObject__107_1582__vtable *pcVar1;
  undefined uVar2;
  
  pcVar1 = (this->m_pDefaultChannel->field0_0x0).__vtable;
  uVar2 = (*(code *)pcVar1[1].IsPlaying)
                    ((int)&(this->m_pDefaultChannel->field0_0x0).m_lSoundObjectFlag +
                     (int)*(short *)&pcVar1[1].Update,lVolume);
  return (bool)uVar2;
}

bool cSamplePatch::SetPitch(Sint32 lPitch) {
  cSoundObject__107_1582__vtable *pcVar1;
  undefined uVar2;
  
  pcVar1 = (this->m_pDefaultChannel->field0_0x0).__vtable;
  uVar2 = (*(code *)pcVar1[1].SndobRegisterSet)
                    ((int)&(this->m_pDefaultChannel->field0_0x0).m_lSoundObjectFlag +
                     (int)*(short *)&pcVar1[1].IsPaused,lPitch);
  return (bool)uVar2;
}

bool cSamplePatch::SetPan(Sint32 lPanPos) {
  cSoundObject__107_1582__vtable *pcVar1;
  undefined uVar2;
  
  pcVar1 = (this->m_pDefaultChannel->field0_0x0).__vtable;
  uVar2 = (*(code *)pcVar1[1].RegisterVal)
                    ((int)&(this->m_pDefaultChannel->field0_0x0).m_lSoundObjectFlag +
                     (int)*(short *)&pcVar1[1].SetRegister,lPanPos);
  return (bool)uVar2;
}

bool cSamplePatch::SetFxType(Sint32 lFxType) {
  cSoundObject__107_1582__vtable *pcVar1;
  undefined uVar2;
  
  pcVar1 = (this->m_pDefaultChannel->field0_0x0).__vtable;
  uVar2 = (*(code *)pcVar1[1].SetPan)
                    ((int)&(this->m_pDefaultChannel->field0_0x0).m_lSoundObjectFlag +
                     (int)*(short *)&pcVar1[1].SetPitch,lFxType);
  return (bool)uVar2;
}

bool cSamplePatch::SetFxLevel(Sint32 lFxLevel) {
  cSoundObject__107_1582__vtable *pcVar1;
  undefined uVar2;
  
  pcVar1 = (this->m_pDefaultChannel->field0_0x0).__vtable;
  uVar2 = (*(code *)pcVar1[1].Unpause)
                    ((int)&(this->m_pDefaultChannel->field0_0x0).m_lSoundObjectFlag +
                     (int)*(short *)&pcVar1[1].Pause,lFxLevel);
  return (bool)uVar2;
}

bool cSamplePatch::Init() {
  Init__21cSndobAttrRegisterSetii(&(this->field0_0x0).m_SndobRegisterSet,0x1f,0x11);
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  (this->field0_0x0).m_SndobRegisterSet.field0_0x0.m_pChildSet = (cRegisterSet *)0x0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  (this->field0_0x0).m_SndobRegisterSet.field0_0x0.m_pDefaultSet =
       &SndobAttrDefaultsRegisterSet.field0_0x0;
                    /* end of inlined section */
  return true;
}

bool cSamplePatch::IsPlaying() {
  cIGZSnd *pcVar1;
  undefined uVar2;
  
  pcVar1 = this->m_pSnd;
  if (pcVar1 == (cIGZSnd *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)pcVar1->__vtable->GetVolume)
                      ((int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->Unload);
  }
  return (bool)uVar2;
}

bool cSamplePatch::CreateSnd() {
	bool bOk;
	bool bLooping;
	cSamplePatch *this;
	cSamplePatch *this;
	
  cSoundObject__107_1582__vtable *pcVar1;
  cIGZSndSys__vtable *pcVar2;
  undefined uVar3;
  cHitMan *pcVar4;
  cIGZSnd *pcVar5;
  long lVar6;
  
  pcVar1 = (this->field0_0x0).__vtable;
  (*(code *)pcVar1[1].HandleTimerCallback)
            ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar1[1].ResourceId);
  pcVar1 = (this->field0_0x0).__vtable;
  lVar6 = (*(code *)pcVar1->SetFxLevel)
                    ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar1->SetFxType
                     ,0x2c);
  if (*(int *)&this->m_bIsMusic == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
    pcVar4 = HitMan__12cSamplePatch(this);
                    /* end of inlined section */
    pcVar2 = pcVar4->m_pSndSys->__vtable;
    pcVar5 = (cIGZSnd *)
             (*(code *)pcVar2[1].Initialize)
                       ((int)&pcVar4->m_pSndSys->__vtable + (int)*(short *)&pcVar2[1].cIGZSndSys,
                        (this->field10_0xd8).m_sampleID,lVar6 != 0,1);
    this->m_pSnd = pcVar5;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
    pcVar4 = HitMan__12cSamplePatch(this);
                    /* end of inlined section */
    pcVar2 = pcVar4->m_pSndSys->__vtable;
    pcVar5 = (cIGZSnd *)
             (*(code *)pcVar2[1].CreateSoundEffect)
                       ((int)&pcVar4->m_pSndSys->__vtable + (int)*(short *)&pcVar2[1].Update,
                        (this->field10_0xd8).m_sampleID,lVar6 != 0);
    this->m_pSnd = pcVar5;
  }
  pcVar1 = (this->field0_0x0).__vtable;
  lVar6 = (*(code *)pcVar1->SetFxLevel)
                    ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar1->SetFxType
                     ,0x2b);
  uVar3 = 0;
  if (lVar6 != 0) {
    pcVar1 = (this->field0_0x0).__vtable;
    uVar3 = (*(code *)pcVar1[1].Kill)
                      ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar1[1].Stop)
    ;
  }
  return (bool)uVar3;
}

bool cSamplePatch::FreeSnd() {
  cSoundObject__107_1582__vtable *pcVar1;
  cIGZSnd *pcVar2;
  
  if (this->m_lLoadRefCount != 0) {
    pcVar1 = (this->field0_0x0).__vtable;
    this->m_lLoadRefCount = 1;
    (*(code *)pcVar1[1].SetFxLevel)
              ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar1[1].SetFxType);
  }
  pcVar2 = this->m_pSnd;
  if (pcVar2 != (cIGZSnd *)0x0) {
    (*(code *)pcVar2->__vtable->Pause)
              ((int)&pcVar2->__vtable + (int)*(short *)&pcVar2->__vtable->Stop);
    this->m_pSnd = (cIGZSnd *)0x0;
  }
  return true;
}

bool cSamplePatch::Shutdown() {
  cSoundObject__107_1582__vtable *pcVar1;
  
  pcVar1 = (this->field0_0x0).__vtable;
  (*(code *)pcVar1[2].ClassId)
            ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar1[2].cSoundObject);
  Shutdown__21cSndobAttrRegisterSet(&(this->field0_0x0).m_SndobRegisterSet);
  return false;
}

bool cSamplePatch::Load() {
  cIGZSnd__vtable *pcVar1;
  int iVar2;
  
  iVar2 = this->m_lLoadRefCount + 1;
  this->m_lLoadRefCount = iVar2;
  if (iVar2 == 1) {
    pcVar1 = this->m_pSnd->__vtable;
    (**(code **)(pcVar1 + 1))((int)&this->m_pSnd->__vtable + (int)*(short *)&pcVar1->SetPosition);
  }
  return true;
}

bool cSamplePatch::Unload() {
  cIGZSnd__vtable *pcVar1;
  int iVar2;
  
  iVar2 = this->m_lLoadRefCount + -1;
  this->m_lLoadRefCount = iVar2;
  if (iVar2 == 0) {
    pcVar1 = this->m_pSnd->__vtable;
    (*(code *)pcVar1[1].AddRef)((int)&this->m_pSnd->__vtable + (int)*(short *)&pcVar1[1].Init);
  }
  return true;
}

bool cSamplePatch::Cache() {
  this->m_lCacheRefCount = this->m_lCacheRefCount + 1;
  return true;
}

bool cSamplePatch::Uncache() {
  this->m_lCacheRefCount = this->m_lCacheRefCount + -1;
  return true;
}

cSampleChannel* cSamplePatch::CreateChannel() {
  cSampleChannel *pcVar1;
  
  pcVar1 = (cSampleChannel *)__builtin_new(200);
  pcVar1 = __14cSampleChannelP12cSamplePatch(pcVar1,this);
  return pcVar1;
}

cSampleChannel* cSampleChannel::cSampleChannel(cSamplePatch *pPatch) {
	cSoundObject *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  *(undefined4 *)&(this->field0_0x0).m_SndobRegisterSet.field0_0x0 = 0;
  (this->field0_0x0).m_lRefCount = 0;
  (this->field0_0x0).m_lArgsType = 0;
  *(undefined4 *)&(this->field0_0x0).m_bIsPaused = 0;
  (this->field0_0x0).m_lClassId = -0x5c3269d9;
  (this->field0_0x0).m_lSoundObjectFlag = -0x54523502;
  (this->field0_0x0).__vtable = (cSoundObject__107_1582__vtable *)_vt_12cSoundObject;
  Init__21cSndobAttrRegisterSetii(&(this->field0_0x0).m_SndobRegisterSet,0x1f,0x11);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  (this->m_pPatch).m_id = 0;
                    /* end of inlined section */
  this->m_pSnd = (cIGZSnd *)0x0;
  (this->field0_0x0).__vtable = (cSoundObject__107_1582__vtable *)_vt_14cSampleChannel;
  (this->field0_0x0).m_lClassId = -0x5c326949;
  SetPatch__14cSampleChannelP12cSamplePatch(this,pPatch);
  return this;
}

void cSampleChannel::~cSampleChannel(int __in_chrg) {
	cSoundObject *this;
	int __in_chrg;
	void *pAddress;
	
  (this->field0_0x0).__vtable = (cSoundObject__107_1582__vtable *)_vt_14cSampleChannel;
  Shutdown__14cSampleChannel(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  (this->field0_0x0).__vtable = (cSoundObject__107_1582__vtable *)_vt_12cSoundObject;
  ___12cRegisterSet(&(this->field0_0x0).m_SndobRegisterSet.field0_0x0,2);
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

bool cSampleChannel::SetVolume(Sint32 lVolume) {
  cIGZSnd__vtable *pcVar1;
  undefined uVar2;
  
  pcVar1 = this->m_pSnd->__vtable;
  uVar2 = (*(code *)pcVar1[1].Stop)
                    ((int)&this->m_pSnd->__vtable + (int)*(short *)&pcVar1[1].IsPlaying,lVolume);
  return (bool)uVar2;
}

bool cSampleChannel::Shutdown() {
  cSoundObject__107_1582__vtable *pcVar1;
  
  pcVar1 = (this->field0_0x0).__vtable;
  (*(code *)pcVar1[1].SetVolume)
            ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar1[1].Init);
  return true;
}

bool cSampleChannel::SetPatch(cSamplePatch *pPatch) {
	cSoundObject *this;
	
  cSoundObject__107_1582__vtable *pcVar1;
  cIGZSnd__vtable *pcVar2;
  cIGZSnd *pcVar3;
  long lVar4;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
  pcVar3 = this->m_pSnd;
  (this->m_pPatch).m_id = (pPatch->field0_0x0).m_lSoundObjectId;
  if (pcVar3 != (cIGZSnd *)0x0) {
    (*(code *)pcVar3->__vtable->Pause)
              ((int)&pcVar3->__vtable + (int)*(short *)&pcVar3->__vtable->Stop);
    this->m_pSnd = (cIGZSnd *)0x0;
  }
  pcVar1 = (pPatch->field0_0x0).__vtable;
  lVar4 = (*(code *)pcVar1[2].ArgsType)
                    ((int)&(pPatch->field0_0x0).m_lSoundObjectFlag +
                     (int)*(short *)&pcVar1[2].InstanceId);
  this->m_pSnd = (cIGZSnd *)lVar4;
  if (lVar4 == 0) {
    pcVar1 = (pPatch->field0_0x0).__vtable;
    (*(code *)pcVar1[2]._dyncastimpl)
              ((int)&(pPatch->field0_0x0).m_lSoundObjectFlag + (int)*(short *)(pcVar1 + 2));
    pcVar1 = (pPatch->field0_0x0).__vtable;
    pcVar3 = (cIGZSnd *)
             (*(code *)pcVar1[2].ArgsType)
                       ((int)&(pPatch->field0_0x0).m_lSoundObjectFlag +
                        (int)*(short *)&pcVar1[2].InstanceId);
    this->m_pSnd = pcVar3;
  }
  pcVar2 = this->m_pSnd->__vtable;
  (*(code *)pcVar2->IsPlaying)((int)&this->m_pSnd->__vtable + (int)*(short *)&pcVar2->Play);
  return true;
}

bool cSampleChannel::SetPitch(Sint32 lPitch) {
  return true;
}

bool cSampleChannel::SetPan(Sint32 lPanPos) {
  short sVar1;
  cSoundObject__107_1582__vtable *pcVar2;
  cIGZSnd__vtable *pcVar3;
  undefined uVar4;
  cSamplePatch *pcVar5;
  
  if (this->m_pSnd == (cIGZSnd *)0x0) {
    pcVar2 = (this->field0_0x0).__vtable;
    sVar1 = *(short *)&pcVar2[2].SetSoundObjectId;
    pcVar5 = GetPatchObject__17cSoundCacheHandle(&this->m_pPatch);
    (*(code *)pcVar2[2].SetInstanceId)
              ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)sVar1,pcVar5);
  }
  pcVar3 = this->m_pSnd->__vtable;
  uVar4 = (*(code *)pcVar3[1].SetVolume)
                    ((int)&this->m_pSnd->__vtable + (int)*(short *)&pcVar3[1].GetVolume,lPanPos);
  return (bool)uVar4;
}

cIGZSnd* cSampleChannel::Snd(Sint32 lNoteNum) {
  cSoundObject__107_1582__vtable *pcVar1;
  cSamplePatch *pcVar2;
  cIGZSnd *pcVar3;
  
  pcVar2 = GetPatchObject__17cSoundCacheHandle(&this->m_pPatch);
  pcVar1 = (pcVar2->field0_0x0).__vtable;
  pcVar3 = (cIGZSnd *)
           (*(code *)pcVar1[2].ArgsType)
                     ((int)&(pcVar2->field0_0x0).m_lSoundObjectFlag +
                      (int)*(short *)&pcVar1[2].InstanceId);
  return pcVar3;
}

bool cSampleChannel::NoteOn(Sint32 lNoteNum) {
  cIGZSnd__vtable *pcVar1;
  undefined uVar2;
  
  pcVar1 = this->m_pSnd->__vtable;
  (*(code *)pcVar1[1].SetPosition)
            ((int)&this->m_pSnd->__vtable + (int)*(short *)&pcVar1[1].SetFrequency,0);
  pcVar1 = this->m_pSnd->__vtable;
  uVar2 = (*(code *)pcVar1->Load)((int)&this->m_pSnd->__vtable + (int)*(short *)&pcVar1->Unpause);
  return (bool)uVar2;
}

bool cSampleChannel::NoteOff(Sint32 lNoteNum) {
  cIGZSnd *pcVar1;
  
  pcVar1 = this->m_pSnd;
  if (pcVar1 != (cIGZSnd *)0x0) {
    (*(code *)pcVar1->__vtable->Pause)
              ((int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->Stop);
    this->m_pSnd = (cIGZSnd *)0x0;
  }
  return true;
}

bool cSampleChannel::IsPlaying() {
  cIGZSnd *pcVar1;
  undefined uVar2;
  
  pcVar1 = this->m_pSnd;
  if (pcVar1 == (cIGZSnd *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)pcVar1->__vtable->GetVolume)
                      ((int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->Unload);
  }
  return (bool)uVar2;
}

bool cSampleChannel::Pause() {
	cSoundCacheHandle *this;
	cIGZSnd *pSnd;
	
  cSoundObject__107_1582__vtable *pcVar1;
  int iVar2;
  cSamplePatch *pcVar3;
  long lVar4;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
  if ((this->m_pPatch).m_id != 0) {
    pcVar3 = GetPatchObject__17cSoundCacheHandle(&this->m_pPatch);
    pcVar1 = (pcVar3->field0_0x0).__vtable;
    lVar4 = (*(code *)pcVar1[2].ArgsType)
                      ((int)&(pcVar3->field0_0x0).m_lSoundObjectFlag +
                       (int)*(short *)&pcVar1[2].InstanceId);
    if (lVar4 != 0) {
      iVar2 = *(int *)lVar4;
      (**(code **)(iVar2 + 0x3c))((int)(int *)lVar4 + (int)*(short *)(iVar2 + 0x38));
    }
  }
  return true;
}

bool cSampleChannel::Unpause() {
	cSoundCacheHandle *this;
	cIGZSnd *pSnd;
	
  cSoundObject__107_1582__vtable *pcVar1;
  int iVar2;
  cSamplePatch *pcVar3;
  long lVar4;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
  if ((this->m_pPatch).m_id != 0) {
    pcVar3 = GetPatchObject__17cSoundCacheHandle(&this->m_pPatch);
    pcVar1 = (pcVar3->field0_0x0).__vtable;
    lVar4 = (*(code *)pcVar1[2].ArgsType)
                      ((int)&(pcVar3->field0_0x0).m_lSoundObjectFlag +
                       (int)*(short *)&pcVar1[2].InstanceId);
    if (lVar4 != 0) {
      iVar2 = *(int *)lVar4;
      (**(code **)(iVar2 + 0x44))((int)(int *)lVar4 + (int)*(short *)(iVar2 + 0x40));
    }
  }
  return true;
}

void cRegisterSet::~cRegisterSet(int __in_chrg) {
	void *pAddress;
	
  if (((*(int *)this != 0) && (*(int *)&this->m_bMustDeleteArray != 0)) &&
     (this->m_alVarReg != (int *)0x0)) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this->m_alVarReg);
  }
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

bool cRegisterSet::Init(Sint32 lNumRegs, Sint32 lMinId) {
	int i;
	
  int *piVar1;
  int iVar2;
  
  if (*(int *)this == 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
                    /* end of inlined section */
    this->m_lNumRegs = lNumRegs;
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    this->m_lMinId = lMinId;
    piVar1 = (int *)_memmanAlloc__FUiUi(lNumRegs << 2,4);
                    /* end of inlined section */
    this->m_alVarReg = piVar1;
    *(undefined4 *)&this->m_bMustDeleteArray = 1;
    if (0 < this->m_lNumRegs) {
      piVar1 = this->m_alVarReg;
      iVar2 = 0;
      while( true ) {
        piVar1[iVar2] = 0;
        if (this->m_lNumRegs <= iVar2 + 1) break;
        piVar1 = this->m_alVarReg;
        iVar2 = iVar2 + 1;
      }
    }
  }
  *(undefined4 *)this = 1;
  return true;
}

bool cRegisterSet::Shutdown() {
  if (*(int *)&this->m_bMustDeleteArray == 0) {
    *(undefined4 *)this = 0;
  }
  else if (this->m_alVarReg == (int *)0x0) {
    *(undefined4 *)this = 0;
  }
  else {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this->m_alVarReg);
                    /* end of inlined section */
    *(undefined4 *)this = 0;
  }
  this->m_alVarReg = (int *)0x0;
  return true;
}

Sint32 cRegisterSet::RegisterVal(Sint32 lRegisterId) {
	Sint32 lValue;
	Sint32 lIndex;
	
  int iVar1;
  cRegisterSet *this_00;
  
  do {
    iVar1 = this->m_lMinId;
    if (lRegisterId < iVar1) {
      this_00 = this->m_pChildSet;
LAB_0027a9dc:
      iVar1 = RegisterVal__12cRegisterSeti(this_00,lRegisterId);
    }
    else {
      if (iVar1 + this->m_lNumRegs + -1 < lRegisterId) {
        this_00 = this->m_pChildSet;
        goto LAB_0027a9dc;
      }
      iVar1 = this->m_alVarReg[lRegisterId - iVar1];
    }
    if (iVar1 != -0x80000000) {
      return iVar1;
    }
    this = this->m_pDefaultSet;
  } while( true );
}

bool cRegisterSet::SetRegister(Sint32 lRegisterId, Sint32 lValue) {
	Sint32 lIndex;
	
  int iVar1;
  
  while( true ) {
    for (; iVar1 = this->m_lMinId, lRegisterId < iVar1; this = this->m_pChildSet) {
    }
    if (lRegisterId <= iVar1 + this->m_lNumRegs + -1) break;
    this = this->m_pChildSet;
  }
  this->m_alVarReg[lRegisterId - iVar1] = lValue;
  return true;
}

void cRegisterSet::Copy(cRegisterSet *pSource) {
	int i;
	
  int *piVar1;
  int iVar2;
  
  if (0 < this->m_lNumRegs) {
    piVar1 = pSource->m_alVarReg;
    iVar2 = 0;
    while( true ) {
      this->m_alVarReg[iVar2] = piVar1[iVar2];
      if (this->m_lNumRegs <= iVar2 + 1) break;
      piVar1 = pSource->m_alVarReg;
      iVar2 = iVar2 + 1;
    }
  }
  return;
}

bool cSndobAttrRegisterSet::Init(Sint32 lNumRegs, Sint32 lMinId) {
	int i;
	
  int *piVar1;
  int iVar2;
  
  if (*(int *)&this->field0_0x0 == 0) {
    (this->field0_0x0).m_lMinId = lMinId;
    (this->field0_0x0).m_alVarReg = &this->m_lPriority;
    (this->field0_0x0).m_lNumRegs = lNumRegs;
    *(undefined4 *)&(this->field0_0x0).m_bMustDeleteArray = 0;
    if (0 < lNumRegs) {
      piVar1 = (this->field0_0x0).m_alVarReg;
      iVar2 = 0;
      while( true ) {
        piVar1[iVar2] = -0x80000000;
        if ((this->field0_0x0).m_lNumRegs <= iVar2 + 1) break;
        piVar1 = (this->field0_0x0).m_alVarReg;
        iVar2 = iVar2 + 1;
      }
    }
  }
  *(undefined4 *)&this->field0_0x0 = 1;
  return true;
}

bool cSndobAttrRegisterSet::Shutdown() {
  if (*(int *)&this->field0_0x0 != 0) {
    *(undefined4 *)&this->field0_0x0 = 0;
    return true;
  }
  return true;
}

bool cTrackAttrRegisterSet::Init(Sint32 lNumRegs, Sint32 lMinId) {
	int i;
	
  int *piVar1;
  int iVar2;
  
  if (*(int *)&this->field0_0x0 == 0) {
    (this->field0_0x0).m_lMinId = lMinId;
    (this->field0_0x0).m_alVarReg = &this->m_lPatchId;
    this->m_alAssociatedTrack = &this->m_lAssociatedTrack0;
    (this->field0_0x0).m_lNumRegs = lNumRegs;
    *(undefined4 *)&(this->field0_0x0).m_bMustDeleteArray = 0;
    if (0 < lNumRegs) {
      piVar1 = (this->field0_0x0).m_alVarReg;
      iVar2 = 0;
      while( true ) {
        piVar1[iVar2] = -0x80000000;
        if ((this->field0_0x0).m_lNumRegs <= iVar2 + 1) break;
        piVar1 = (this->field0_0x0).m_alVarReg;
        iVar2 = iVar2 + 1;
      }
    }
  }
  *(undefined4 *)&this->field0_0x0 = 1;
  return true;
}

bool cTrackAttrRegisterSet::Shutdown() {
  *(undefined4 *)&this->field0_0x0 = 0;
  return true;
}

bool cGlobalAttrRegisterSet::Init(Sint32 lNumRegs, Sint32 lMinId) {
	int i;
	
  int *piVar1;
  int iVar2;
  
  if (*(int *)&this->field0_0x0 == 0) {
    (this->field0_0x0).m_lMinId = lMinId;
    (this->field0_0x0).m_alVarReg = this->m_alPad;
    (this->field0_0x0).m_lNumRegs = lNumRegs;
    *(undefined4 *)&(this->field0_0x0).m_bMustDeleteArray = 0;
    if (0 < lNumRegs) {
      piVar1 = (this->field0_0x0).m_alVarReg;
      iVar2 = 0;
      while( true ) {
        piVar1[iVar2] = -0x80000000;
        if ((this->field0_0x0).m_lNumRegs <= iVar2 + 1) break;
        piVar1 = (this->field0_0x0).m_alVarReg;
        iVar2 = iVar2 + 1;
      }
    }
  }
  *(undefined4 *)&this->field0_0x0 = 1;
  return true;
}

bool cGlobalAttrRegisterSet::Shutdown() {
  *(undefined4 *)&this->field0_0x0 = 0;
  return true;
}

cHitList* cHitMan::GlobalHitList(Sint32 lGlobalHitListId) {
  GlobalHitlist *pGVar1;
  
  pGVar1 = g_pBoxX->m_pGlobalHitlistTable->pData;
  pGVar1 = FindAudioRes__H1ZCQ23snd13GlobalHitlist_PX01T0Us_PX01
                     (pGVar1,pGVar1 + g_pBoxX->m_pGlobalHitlistTable->uNumRows,
                      (short)lGlobalHitListId);
  return pGVar1;
}

cSoundObject* cSoundCacheHandle::GetObject() {
	cHitMan *this;
	
  cSoundObject__167_1004 *pcVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
  pcVar1 = GetSoundObject__11cSoundCachei(g_pHitMan->m_pSoundCache,this->m_id);
  return pcVar1;
}

cTrack* cSoundCacheHandle::GetTrackObject() {
	cHitMan *this;
	
  cTrack *pcVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
  pcVar1 = GetTrackObject__11cSoundCachei(g_pHitMan->m_pSoundCache,this->m_id);
  return pcVar1;
}

cSamplePatch* cSoundCacheHandle::GetPatchObject() {
	cHitMan *this;
	
  cSamplePatch *pcVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
  pcVar1 = GetPatchObject__11cSoundCachei(g_pHitMan->m_pSoundCache,this->m_id);
  return pcVar1;
}

bool cSoundCacheHandle::operator<(cSoundCacheHandle &other) {
  return this->m_id < other->m_id;
}

bool cSoundCacheHandle::IsInMemory() {
	cHitMan *this;
	
  bool bVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
  bVar1 = IsInMemory__C11cSoundCachei(g_pHitMan->m_pSoundCache,this->m_id);
  return bVar1;
}

cSoundCache* cSoundCache::cSoundCache() {
	TFixedPool<cTrack,64> *this;
	TFixedPool<cSamplePatch,64> *this;
	
                    /* inlined from /eor/src2/common/datastruc/e_fixedpool.h */
  __10EFixedPool(&(this->m_trackPool).field0_0x0);
  Init__10EFixedPooliiPv(&(this->m_trackPool).field0_0x0,0x330,0x40,(this->m_trackPool).m_buffer);
  __10EFixedPool(&(this->m_samplePool).field0_0x0);
  Init__10EFixedPooliiPv(&(this->m_samplePool).field0_0x0,0xe0,0x40,(this->m_samplePool).m_buffer);
                    /* end of inlined section */
  memset(this,0,0x100);
  memset(this->m_vPatches,0,0x100);
  this->m_iSampleHead = 0;
  this->m_iTrackHead = 0;
  return this;
}

void cSoundCache::~cSoundCache(int __in_chrg) {
	void *pAddress;
	
  Shutdown__11cSoundCache(this);
  ___10EFixedPool(&(this->m_samplePool).field0_0x0,2);
  ___10EFixedPool(&(this->m_trackPool).field0_0x0,2);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void cSoundCache::onTrackDelete(cTrack *pTrack) {
	int i;
	cTrack *p;
	void *p;
	
  cTrack *pcVar1;
  cTrack **ppcVar2;
  int iVar3;
  
                    /* inlined from /eor/src2/common/datastruc/e_fixedpool.h */
  if (pTrack == (cTrack *)0x0) {
    pcVar1 = this->m_vTracks[0];
  }
  else {
    (pTrack->field0_0x0).field0_0x0.m_lSoundObjectFlag =
         (int)(this->m_trackPool).field0_0x0.m_pFreeObjHead;
    (this->m_trackPool).field0_0x0.m_pFreeObjHead = pTrack;
                    /* end of inlined section */
    pcVar1 = this->m_vTracks[0];
  }
  if (pcVar1 != pTrack) {
    iVar3 = 1;
    do {
      if (0x3f < iVar3) {
        return;
      }
      ppcVar2 = this->m_vTracks + iVar3;
      iVar3 = iVar3 + 1;
    } while (*ppcVar2 != pTrack);
    *ppcVar2 = (cTrack *)0x0;
    return;
  }
  this->m_vTracks[0] = (cTrack *)0x0;
  return;
}

void cSoundCache::onPatchDelete(cSamplePatch *pPatch) {
	int i;
	TFixedPool<cSamplePatch,64> *this;
	cSamplePatch *p;
	void *p;
	EFixedPool *this;
	
  cSamplePatch **ppcVar1;
  int iVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_fixedpool.h */
  if (pPatch != (cSamplePatch *)0x0) {
    (pPatch->field0_0x0).m_lSoundObjectFlag = (int)(this->m_samplePool).field0_0x0.m_pFreeObjHead;
    (this->m_samplePool).field0_0x0.m_pFreeObjHead = pPatch;
  }
                    /* end of inlined section */
  if (this->m_vPatches[0] != pPatch) {
    iVar2 = 1;
    do {
      if (0x3f < iVar2) {
        return;
      }
      ppcVar1 = this->m_vPatches + iVar2;
      iVar2 = iVar2 + 1;
    } while (*ppcVar1 != pPatch);
    *ppcVar1 = (cSamplePatch *)0x0;
    return;
  }
  this->m_vPatches[0] = (cSamplePatch *)0x0;
  return;
}

void cSoundCache::Shutdown() {
	int i;
	
  cTrack *pcVar1;
  cSamplePatch *pcVar2;
  cSoundObject__107_1582__vtable *pcVar3;
  cSoundCache *pcVar4;
  cSamplePatch **ppcVar5;
  int iVar6;
  
  iVar6 = 0x3f;
  pcVar4 = this;
  do {
    pcVar1 = pcVar4->m_vTracks[0];
    if (pcVar1 != (cTrack *)0x0) {
      pcVar3 = (pcVar1->field0_0x0).field0_0x0.__vtable;
      (*(code *)pcVar3[1].ArgsType)
                ((int)&(pcVar1->field0_0x0).field0_0x0.m_lSoundObjectFlag +
                 (int)*(short *)&pcVar3[1].InstanceId);
      pcVar1 = pcVar4->m_vTracks[0];
      if (pcVar1 != (cTrack *)0x0) {
        pcVar3 = (pcVar1->field0_0x0).field0_0x0.__vtable;
        (*(code *)pcVar3->SetInstanceId)
                  ((int)&(pcVar1->field0_0x0).field0_0x0.m_lSoundObjectFlag +
                   (int)*(short *)&pcVar3->SetSoundObjectId,3);
      }
      pcVar4->m_vTracks[0] = (cTrack *)0x0;
    }
    iVar6 = iVar6 + -1;
    pcVar4 = (cSoundCache *)(pcVar4->m_vTracks + 1);
  } while (-1 < iVar6);
  ppcVar5 = this->m_vPatches;
  iVar6 = 0x3f;
  do {
    pcVar2 = *ppcVar5;
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
    if ((pcVar2 != (cSamplePatch *)0x0) && ((pcVar2->field0_0x0).m_lRefCount == 0)) {
      pcVar3 = (pcVar2->field0_0x0).__vtable;
      (*(code *)pcVar3[1].ArgsType)
                ((int)&(pcVar2->field0_0x0).m_lSoundObjectFlag +
                 (int)*(short *)&pcVar3[1].InstanceId);
      pcVar2 = *ppcVar5;
      if (pcVar2 != (cSamplePatch *)0x0) {
        pcVar3 = (pcVar2->field0_0x0).__vtable;
        (*(code *)pcVar3->SetInstanceId)
                  ((int)&(pcVar2->field0_0x0).m_lSoundObjectFlag +
                   (int)*(short *)&pcVar3->SetSoundObjectId,3);
      }
      *ppcVar5 = (cSamplePatch *)0x0;
    }
    iVar6 = iVar6 + -1;
    ppcVar5 = ppcVar5 + 1;
  } while (-1 < iVar6);
  return;
}

void cSoundCache::CleanupIdleTracks() {
	int i;
	int iNumActiveTracks;
	cSoundObject *this;
	int j;
	
  cSoundObject__107_1582__vtable *pcVar1;
  cSamplePatch *pcVar2;
  long lVar3;
  cTrack *pcVar4;
  int iVar5;
  cSoundCache *pcVar6;
  cTrack **ppcVar7;
  cSamplePatch **ppcVar8;
  undefined8 unaff_s0;
  int iVar9;
  undefined8 unaff_s1;
  int iVar10;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  int local_80;
  int local_7c [3];
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
  
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  iVar10 = 0;
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  iVar9 = 0x3f;
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  pcVar6 = this;
  do {
    pcVar4 = pcVar6->m_vTracks[0];
    if (pcVar4 == (cTrack *)0x0) {
      pcVar4 = pcVar6->m_vTracks[0];
LAB_0027b08c:
      if (pcVar4 != (cTrack *)0x0) {
        iVar10 = iVar10 + 1;
      }
    }
    else {
      pcVar1 = (pcVar4->field0_0x0).field0_0x0.__vtable;
      lVar3 = (*(code *)pcVar1->SetVolume)
                        ((int)&(pcVar4->field0_0x0).field0_0x0.m_lSoundObjectFlag +
                         (int)*(short *)&pcVar1->Init);
      pcVar4 = pcVar6->m_vTracks[0];
      if (lVar3 != 0) goto LAB_0027b08c;
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
      local_80 = (pcVar4->field0_0x0).field0_0x0.m_lSoundObjectId;
      erase__t7rb_tree5ZCiZt4pair2ZCiZiZt9select1st1Zt4pair2ZCiZiZt4less1ZCiZt23__malloc_alloc_template1i0RCi
                (&(g_pBoxX->m_InstanceIdFromSndobId).t,&local_80);
                    /* end of inlined section */
      pcVar1 = (pcVar6->m_vTracks[0]->field0_0x0).field0_0x0.__vtable;
      (*(code *)pcVar1[1].SetVolume)
                ((int)&(pcVar6->m_vTracks[0]->field0_0x0).field0_0x0.m_lSoundObjectFlag +
                 (int)*(short *)&pcVar1[1].Init);
      pcVar1 = (pcVar6->m_vTracks[0]->field0_0x0).field0_0x0.__vtable;
      (*(code *)pcVar1[1].ArgsType)
                ((int)&(pcVar6->m_vTracks[0]->field0_0x0).field0_0x0.m_lSoundObjectFlag +
                 (int)*(short *)&pcVar1[1].InstanceId);
      pcVar4 = pcVar6->m_vTracks[0];
      if (pcVar4 != (cTrack *)0x0) {
        pcVar1 = (pcVar4->field0_0x0).field0_0x0.__vtable;
        (*(code *)pcVar1->SetInstanceId)
                  ((int)&(pcVar4->field0_0x0).field0_0x0.m_lSoundObjectFlag +
                   (int)*(short *)&pcVar1->SetSoundObjectId,3);
      }
      pcVar6->m_vTracks[0] = (cTrack *)0x0;
    }
    iVar9 = iVar9 + -1;
    pcVar6 = (cSoundCache *)(pcVar6->m_vTracks + 1);
    if (iVar9 < 0) {
      ppcVar8 = this->m_vPatches;
      if (0x20 < iVar10) {
        iVar9 = this->m_iTrackHead;
        do {
          ppcVar7 = this->m_vTracks + iVar9;
          if (*ppcVar7 != (cTrack *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
            local_7c[0] = ((*ppcVar7)->field0_0x0).field0_0x0.m_lSoundObjectId;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/multimap.h */
            erase__t7rb_tree5ZCiZt4pair2ZCiZiZt9select1st1Zt4pair2ZCiZiZt4less1ZCiZt23__malloc_alloc_template1i0RCi
                      (&(g_pBoxX->m_InstanceIdFromSndobId).t,local_7c);
                    /* end of inlined section */
            pcVar1 = ((*ppcVar7)->field0_0x0).field0_0x0.__vtable;
            (*(code *)pcVar1[1].SetVolume)
                      ((int)&((*ppcVar7)->field0_0x0).field0_0x0.m_lSoundObjectFlag +
                       (int)*(short *)&pcVar1[1].Init);
            pcVar1 = ((*ppcVar7)->field0_0x0).field0_0x0.__vtable;
            (*(code *)pcVar1[1].ArgsType)
                      ((int)&((*ppcVar7)->field0_0x0).field0_0x0.m_lSoundObjectFlag +
                       (int)*(short *)&pcVar1[1].InstanceId);
            pcVar4 = *ppcVar7;
            if (pcVar4 != (cTrack *)0x0) {
              pcVar1 = (pcVar4->field0_0x0).field0_0x0.__vtable;
              (*(code *)pcVar1->SetInstanceId)
                        ((int)&(pcVar4->field0_0x0).field0_0x0.m_lSoundObjectFlag +
                         (int)*(short *)&pcVar1->SetSoundObjectId,3);
            }
            *ppcVar7 = (cTrack *)0x0;
            iVar10 = iVar10 + -1;
          }
          iVar5 = iVar9 + 1;
          iVar9 = iVar9 + 0x40;
          if (-1 < iVar5) {
            iVar9 = iVar5;
          }
          iVar9 = iVar5 + (iVar9 >> 6) * -0x40;
        } while (0x20 < iVar10);
      }
      iVar10 = 0x3f;
      do {
        pcVar2 = *ppcVar8;
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
        if (((pcVar2 != (cSamplePatch *)0x0) && ((pcVar2->field0_0x0).m_lRefCount == 0)) &&
           (pcVar1 = (pcVar2->field0_0x0).__vtable,
           lVar3 = (*(code *)pcVar1->SetVolume)
                             ((int)&(pcVar2->field0_0x0).m_lSoundObjectFlag +
                              (int)*(short *)&pcVar1->Init), lVar3 == 0)) {
          pcVar1 = ((*ppcVar8)->field0_0x0).__vtable;
          (*(code *)pcVar1[1].SetVolume)
                    ((int)&((*ppcVar8)->field0_0x0).m_lSoundObjectFlag +
                     (int)*(short *)&pcVar1[1].Init);
          pcVar1 = ((*ppcVar8)->field0_0x0).__vtable;
          (*(code *)pcVar1[1].ArgsType)
                    ((int)&((*ppcVar8)->field0_0x0).m_lSoundObjectFlag +
                     (int)*(short *)&pcVar1[1].InstanceId);
          pcVar2 = *ppcVar8;
          if (pcVar2 != (cSamplePatch *)0x0) {
            pcVar1 = (pcVar2->field0_0x0).__vtable;
            (*(code *)pcVar1->SetInstanceId)
                      ((int)&(pcVar2->field0_0x0).m_lSoundObjectFlag +
                       (int)*(short *)&pcVar1->SetSoundObjectId,3);
          }
          *ppcVar8 = (cSamplePatch *)0x0;
        }
        iVar10 = iVar10 + -1;
        ppcVar8 = ppcVar8 + 1;
      } while (-1 < iVar10);
      return;
    }
  } while( true );
}

void cSoundCache::KillAll() {
	int i;
	
  cTrack *pcVar1;
  cSamplePatch *pcVar2;
  cSoundObject__107_1582__vtable *pcVar3;
  cSoundCache *pcVar4;
  cSamplePatch **ppcVar5;
  int iVar6;
  
  iVar6 = 0x3f;
  pcVar4 = this;
  do {
    pcVar1 = pcVar4->m_vTracks[0];
    if (pcVar1 != (cTrack *)0x0) {
      pcVar3 = (pcVar1->field0_0x0).field0_0x0.__vtable;
      (*(code *)pcVar3[1].SetVolume)
                ((int)&(pcVar1->field0_0x0).field0_0x0.m_lSoundObjectFlag +
                 (int)*(short *)&pcVar3[1].Init);
    }
    iVar6 = iVar6 + -1;
    pcVar4 = (cSoundCache *)(pcVar4->m_vTracks + 1);
  } while (-1 < iVar6);
  ppcVar5 = this->m_vPatches;
  iVar6 = 0x3f;
  do {
    pcVar2 = *ppcVar5;
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
    if ((pcVar2 != (cSamplePatch *)0x0) && ((pcVar2->field0_0x0).m_lRefCount == 0)) {
      pcVar3 = (pcVar2->field0_0x0).__vtable;
      (*(code *)pcVar3[1].SetVolume)
                ((int)&(pcVar2->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar3[1].Init);
    }
    iVar6 = iVar6 + -1;
    ppcVar5 = ppcVar5 + 1;
  } while (-1 < iVar6);
  return;
}

void cSoundCache::Pause() {
	int i;
	
  cTrack *pcVar1;
  cSoundObject__107_1582__vtable *pcVar2;
  int iVar3;
  
  iVar3 = 0x3f;
  pcVar1 = this->m_vTracks[0];
  while( true ) {
    iVar3 = iVar3 + -1;
    this = (cSoundCache *)(this->m_vTracks + 1);
    if (pcVar1 != (cTrack *)0x0) {
      pcVar2 = (pcVar1->field0_0x0).field0_0x0.__vtable;
      (*(code *)pcVar2[1].Play)
                ((int)&(pcVar1->field0_0x0).field0_0x0.m_lSoundObjectFlag +
                 (int)*(short *)&pcVar2[1].WantsViewChangeNotifications);
    }
    if (iVar3 < 0) break;
    pcVar1 = this->m_vTracks[0];
  }
  return;
}

void cSoundCache::Unpause() {
	int i;
	
  cTrack *pcVar1;
  cSoundObject__107_1582__vtable *pcVar2;
  int iVar3;
  
  iVar3 = 0x3f;
  pcVar1 = this->m_vTracks[0];
  while( true ) {
    iVar3 = iVar3 + -1;
    this = (cSoundCache *)(this->m_vTracks + 1);
    if (pcVar1 != (cTrack *)0x0) {
      pcVar2 = (pcVar1->field0_0x0).field0_0x0.__vtable;
      (*(code *)pcVar2[1].AddRef)
                ((int)&(pcVar1->field0_0x0).field0_0x0.m_lSoundObjectFlag +
                 (int)*(short *)&pcVar2[1].PlayPause);
    }
    if (iVar3 < 0) break;
    pcVar1 = this->m_vTracks[0];
  }
  return;
}

cTrack* cSoundCache::createTrack(u32 id) {
	Track *pRow;
	cTrack *pTrack;
	cHitMan *this;
	void *p;
	
  ushort uVar1;
  uint uVar2;
  cSoundObject__107_1582__vtable *pcVar3;
  Track *pTVar4;
  cTrack *pcVar5;
  
  pTVar4 = g_pBoxX->m_pTrackTable->pData;
  pTVar4 = FindAudioRes__H1ZCQ23snd5Track_PX01T0Us_PX01
                     (pTVar4,pTVar4 + g_pBoxX->m_pTrackTable->uNumRows,(short)id);
  pcVar5 = (cTrack *)0x0;
  if (pTVar4 != (Track *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
    pcVar5 = (cTrack *)(g_pHitMan->m_pSoundCache->m_trackPool).field0_0x0.m_pFreeObjHead;
    if (pcVar5 == (cTrack *)0x0) {
      uVar1 = pTVar4->lPatchId;
    }
    else {
      (g_pHitMan->m_pSoundCache->m_trackPool).field0_0x0.m_pFreeObjHead =
           (void *)(pcVar5->field0_0x0).field0_0x0.m_lSoundObjectFlag;
                    /* end of inlined section */
      uVar1 = pTVar4->lPatchId;
    }
    uVar2 = *(uint *)&pTVar4->field_0x4;
    pcVar5 = __6cTrackiiiiiiPQ23snd9TrackDataii
                       (pcVar5,(uint)(ushort)pTVar4->id,(uint)(ushort)pTVar4->lVolume,uVar2 & 7,
                        uVar2 >> 3 & 0xff,uVar2 >> 0xb & 7,uVar2 >> 0xe & 7,pTVar4->pTrackData,
                        (uint)uVar1,(uint)(ushort)pTVar4->lHitListId);
    pcVar3 = (pcVar5->field0_0x0).field0_0x0.__vtable;
    (*(code *)pcVar3[1].HandleTimerCallback)
              ((int)&(pcVar5->field0_0x0).field0_0x0.m_lSoundObjectFlag +
               (int)*(short *)&pcVar3[1].ResourceId);
  }
  return pcVar5;
}

cSamplePatch* cSoundCache::createPatch(u32 id) {
	Patch *pRow;
	cSamplePatch *pPatch;
	cHitMan *this;
	TFixedPool<cSamplePatch,64> *this;
	EFixedPool *this;
	void *p;
	HitPatch *pRow;
	cHitMan *this;
	TFixedPool<cSamplePatch,64> *this;
	EFixedPool *this;
	void *p;
	
  short sVar1;
  cSoundObject__107_1582__vtable *pcVar2;
  Patch *pPVar3;
  cSamplePatch *pcVar4;
  HitPatch *pHVar5;
  TFixedPool_cSamplePatch_64_ *pTVar6;
  uint musicID;
  
  pPVar3 = g_pBoxX->m_pPatchTable->pData;
  pPVar3 = FindAudioRes__H1ZCQ23snd5Patch_PX01T0Us_PX01
                     (pPVar3,pPVar3 + g_pBoxX->m_pPatchTable->uNumRows,(short)id);
  if (pPVar3 == (Patch *)0x0) {
    pHVar5 = g_pBoxX->m_pHitPatchTable->pData;
    pHVar5 = FindAudioRes__H1ZCQ23snd8HitPatch_PX01T0Us_PX01
                       (pHVar5,pHVar5 + g_pBoxX->m_pHitPatchTable->uNumRows,(short)id);
    pcVar4 = (cSamplePatch *)0x0;
    if (pHVar5 != (HitPatch *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
      pTVar6 = &g_pHitMan->m_pSoundCache->m_samplePool;
      pcVar4 = (cSamplePatch *)(pTVar6->field0_0x0).m_pFreeObjHead;
      if (pcVar4 == (cSamplePatch *)0x0) {
        musicID = pHVar5->musicID;
      }
      else {
        (pTVar6->field0_0x0).m_pFreeObjHead = (void *)(pcVar4->field0_0x0).m_lSoundObjectFlag;
                    /* end of inlined section */
        musicID = pHVar5->musicID;
      }
      pcVar4 = __12cSamplePatchiUiUib(pcVar4,id,pHVar5->sampleID,musicID,false);
      pcVar2 = (pcVar4->field0_0x0).__vtable;
      (*(code *)pcVar2[1].HandleTimerCallback)
                ((int)&(pcVar4->field0_0x0).m_lSoundObjectFlag +
                 (int)*(short *)&pcVar2[1].ResourceId);
    }
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
    pTVar6 = &g_pHitMan->m_pSoundCache->m_samplePool;
    pcVar4 = (cSamplePatch *)(pTVar6->field0_0x0).m_pFreeObjHead;
    if (pcVar4 == (cSamplePatch *)0x0) {
      sVar1 = pPVar3->bLoop;
    }
    else {
      (pTVar6->field0_0x0).m_pFreeObjHead = (void *)(pcVar4->field0_0x0).m_lSoundObjectFlag;
                    /* end of inlined section */
      sVar1 = pPVar3->bLoop;
    }
    pcVar4 = __12cSamplePatchiUiUib(pcVar4,id,pPVar3->sampleID,0,sVar1 != 0);
    pcVar2 = (pcVar4->field0_0x0).__vtable;
    (*(code *)pcVar2[1].HandleTimerCallback)
              ((int)&(pcVar4->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar2[1].ResourceId)
    ;
  }
  return pcVar4;
}

cTrack* cSoundCache::GetTrackObject(Sint32 id) {
	cTrack *pResult;
	int i;
	
  cTrack *pcVar1;
  int iVar2;
  int iVar3;
  cSoundCache *pcVar4;
  int iVar5;
  
  iVar5 = 0;
  pcVar4 = this;
  do {
    iVar5 = iVar5 + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
    if ((pcVar4->m_vTracks[0] != (cTrack *)0x0) &&
       ((pcVar4->m_vTracks[0]->field0_0x0).field0_0x0.m_lSoundObjectId == id)) {
      iVar3 = this->m_iTrackHead + 1;
      iVar5 = this->m_iTrackHead + 0x40;
      if (-1 < iVar3) {
        iVar5 = iVar3;
      }
      this->m_iTrackHead = iVar3 + (iVar5 >> 6) * -0x40;
      return pcVar4->m_vTracks[0];
    }
    pcVar4 = (cSoundCache *)(pcVar4->m_vTracks + 1);
  } while (iVar5 < 0x40);
  iVar5 = 0;
  do {
    iVar3 = this->m_iTrackHead;
    iVar2 = iVar3 + 1;
    if (this->m_vTracks[iVar3] == (cTrack *)0x0) {
      pcVar1 = createTrack__11cSoundCacheUi(this,id);
      this->m_vTracks[this->m_iTrackHead] = pcVar1;
      if (pcVar1 != (cTrack *)0x0) {
        iVar5 = this->m_iTrackHead;
        iVar2 = iVar5 + 1;
        iVar3 = iVar5 + 0x40;
        if (-1 < iVar2) {
          iVar3 = iVar2;
        }
        pcVar1 = this->m_vTracks[iVar5];
        this->m_iTrackHead = iVar2 + (iVar3 >> 6) * -0x40;
        return pcVar1;
      }
      break;
    }
    iVar5 = iVar5 + 1;
    iVar3 = iVar3 + 0x40;
    if (-1 < iVar2) {
      iVar3 = iVar2;
    }
    this->m_iTrackHead = iVar2 + (iVar3 >> 6) * -0x40;
  } while (iVar5 < 0x40);
  printTrackList__11cSoundCache(this);
  return (cTrack *)0x0;
}

cSamplePatch* cSoundCache::GetPatchObject(Sint32 id) {
	cSamplePatch *pResult;
	int i;
	
  cSamplePatch *pcVar1;
  int iVar2;
  int iVar3;
  cSamplePatch **ppcVar4;
  int iVar5;
  cSamplePatch **ppcVar6;
  
  iVar5 = 0;
  ppcVar6 = this->m_vPatches;
  ppcVar4 = ppcVar6;
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
  while ((*ppcVar4 == (cSamplePatch *)0x0 || (((*ppcVar4)->field0_0x0).m_lSoundObjectId != id))) {
    iVar5 = iVar5 + 1;
    ppcVar4 = ppcVar4 + 1;
    if (0x3f < iVar5) {
      iVar5 = 0;
      do {
        iVar3 = this->m_iSampleHead;
        iVar2 = iVar3 + 1;
        if (ppcVar6[iVar3] == (cSamplePatch *)0x0) {
          pcVar1 = createPatch__11cSoundCacheUi(this,id);
          ppcVar6[this->m_iSampleHead] = pcVar1;
          if (pcVar1 == (cSamplePatch *)0x0) {
            return (cSamplePatch *)0x0;
          }
          iVar5 = this->m_iSampleHead;
          iVar2 = iVar5 + 1;
          iVar3 = iVar5 + 0x40;
          if (-1 < iVar2) {
            iVar3 = iVar2;
          }
          pcVar1 = ppcVar6[iVar5];
          this->m_iSampleHead = iVar2 + (iVar3 >> 6) * -0x40;
          return pcVar1;
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + 0x40;
        if (-1 < iVar2) {
          iVar3 = iVar2;
        }
        this->m_iSampleHead = iVar2 + (iVar3 >> 6) * -0x40;
      } while (iVar5 < 0x40);
      return (cSamplePatch *)0x0;
    }
  }
  iVar3 = this->m_iSampleHead + 1;
  iVar5 = this->m_iSampleHead + 0x40;
  if (-1 < iVar3) {
    iVar5 = iVar3;
  }
  this->m_iSampleHead = iVar3 + (iVar5 >> 6) * -0x40;
  return *ppcVar4;
}

bool cSoundCache::IsInMemory(Sint32 id) {
	bool result;
	int i;
	
  cSoundCache *pcVar1;
  cSamplePatch **ppcVar2;
  int iVar3;
  
  iVar3 = 0;
  pcVar1 = this;
  while( true ) {
    iVar3 = iVar3 + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
    if ((pcVar1->m_vTracks[0] != (cTrack *)0x0) &&
       ((pcVar1->m_vTracks[0]->field0_0x0).field0_0x0.m_lSoundObjectId == id)) break;
    pcVar1 = (cSoundCache *)(pcVar1->m_vTracks + 1);
    if (0x3f < iVar3) {
      ppcVar2 = this->m_vPatches;
      iVar3 = 0;
      while( true ) {
        iVar3 = iVar3 + 1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
        if ((*ppcVar2 != (cSamplePatch *)0x0) && (((*ppcVar2)->field0_0x0).m_lSoundObjectId == id))
        break;
        ppcVar2 = ppcVar2 + 1;
        if (0x3f < iVar3) {
          return false;
        }
      }
      return true;
    }
  }
  return true;
}

void cSoundCache::printTrackList() {
	int i;
	
  bool bVar1;
  int iVar2;
  
  iVar2 = 0x3e;
  do {
    bVar1 = -1 < iVar2;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  return;
}

cSoundObject* cSoundCache::GetSoundObject(Sint32 id) {
	cSoundObject *pResult;
	int i;
	
  cTrack *pcVar1;
  cSamplePatch *pcVar2;
  int iVar3;
  int iVar4;
  cSoundCache *pcVar5;
  cSamplePatch **ppcVar6;
  int iVar7;
  cSamplePatch **ppcVar8;
  
  iVar7 = 0;
  pcVar5 = this;
  do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
    if ((pcVar5->m_vTracks[0] != (cTrack *)0x0) && (*(int *)&pcVar5->m_vTracks[0]->field0_0x0 == id)
       ) {
      iVar4 = this->m_iTrackHead + 1;
      iVar7 = this->m_iTrackHead + 0x40;
      if (-1 < iVar4) {
        iVar7 = iVar4;
      }
      this->m_iTrackHead = iVar4 + (iVar7 >> 6) * -0x40;
      return (cSoundObject__167_1004 *)pcVar5->m_vTracks[0];
    }
    iVar7 = iVar7 + 1;
    pcVar5 = (cSoundCache *)(pcVar5->m_vTracks + 1);
  } while (iVar7 < 0x40);
  ppcVar8 = this->m_vPatches;
  iVar7 = 0;
  ppcVar6 = ppcVar8;
  do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
    if ((*ppcVar6 != (cSamplePatch *)0x0) &&
       ((&((*ppcVar6)->field0_0x0).m_lSoundObjectFlag)[1] == id)) {
      iVar4 = this->m_iSampleHead + 1;
      iVar7 = this->m_iSampleHead + 0x40;
      if (-1 < iVar4) {
        iVar7 = iVar4;
      }
      this->m_iSampleHead = iVar4 + (iVar7 >> 6) * -0x40;
      return (cSoundObject__167_1004 *)*ppcVar6;
    }
    iVar7 = iVar7 + 1;
    ppcVar6 = ppcVar6 + 1;
  } while (iVar7 < 0x40);
  iVar7 = 0;
  do {
    iVar4 = this->m_iTrackHead;
    iVar3 = iVar4 + 1;
    if (this->m_vTracks[iVar4] == (cTrack *)0x0) {
      pcVar1 = createTrack__11cSoundCacheUi(this,id);
      this->m_vTracks[this->m_iTrackHead] = pcVar1;
      if (pcVar1 != (cTrack *)0x0) {
        iVar7 = this->m_iTrackHead;
        iVar3 = iVar7 + 1;
        iVar4 = iVar7 + 0x40;
        if (-1 < iVar3) {
          iVar4 = iVar3;
        }
        pcVar1 = this->m_vTracks[iVar7];
        this->m_iTrackHead = iVar3 + (iVar4 >> 6) * -0x40;
        return (cSoundObject__167_1004 *)pcVar1;
      }
      goto LAB_0027ba64;
    }
    iVar7 = iVar7 + 1;
    iVar4 = iVar4 + 0x40;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    this->m_iTrackHead = iVar3 + (iVar4 >> 6) * -0x40;
  } while (iVar7 < 0x40);
  printTrackList__11cSoundCache(this);
LAB_0027ba64:
  iVar7 = 0;
  do {
    iVar4 = this->m_iSampleHead;
    iVar3 = iVar4 + 1;
    if (ppcVar8[iVar4] == (cSamplePatch *)0x0) {
      pcVar2 = createPatch__11cSoundCacheUi(this,id);
      ppcVar8[this->m_iSampleHead] = pcVar2;
      if (pcVar2 == (cSamplePatch *)0x0) {
        return (cSoundObject__167_1004 *)0x0;
      }
      iVar7 = this->m_iSampleHead;
      iVar3 = iVar7 + 1;
      iVar4 = iVar7 + 0x40;
      if (-1 < iVar3) {
        iVar4 = iVar3;
      }
      pcVar2 = ppcVar8[iVar7];
      this->m_iSampleHead = iVar3 + (iVar4 >> 6) * -0x40;
      return (cSoundObject__167_1004 *)pcVar2;
    }
    iVar7 = iVar7 + 1;
    iVar4 = iVar4 + 0x40;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    this->m_iSampleHead = iVar3 + (iVar4 >> 6) * -0x40;
  } while (iVar7 < 0x40);
  return (cSoundObject__167_1004 *)0x0;
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
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
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
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
                    /* end of inlined section */
  if ((_Var4.node != _Var1.node) && (*(int *)(_Var4.node + 1) <= *k)) {
    return (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var4.node;
  }
  return (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var1.node;
}

__rb_tree_iterator<pair<const int,cHitControlGroup *> > rb_tree<int, pair<int, cHitControlGroup *>, select1st<pair<int, cHitControlGroup *> >, less<int>, __malloc_alloc_template<0> >::find(Sint32 &k) {
	__rb_tree_node<pair<const int,cHitControlGroup *> > *y;
	__rb_tree_node<pair<const int,cHitControlGroup *> > *x;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const int,cHitControlGroup *> > *x;
	__rb_tree_node<pair<const int,cHitControlGroup *> > *x;
	Sint32 &y;
	__rb_tree_node<pair<const int,cHitControlGroup *> > *x;
	__rb_tree_node<pair<const int,cHitControlGroup *> > *x;
	__rb_tree_node<pair<const int,cHitControlGroup *> > *x;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const int,cHitControlGroup *> > *x;
	Sint32 &x;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	
  __rb_tree_base_iterator _Var1;
  int iVar2;
  __rb_tree_node_pair_const_int_cHitControlGroup_____ *p_Var3;
  __rb_tree_base_iterator _Var4;
  
  _Var4.node = (__rb_tree_node_base *)this->header;
  p_Var3 = *(__rb_tree_node_pair_const_int_cHitControlGroup_____ **)
            &((__rb_tree_node_pair_const_int_cHitControlGroup_____ *)_Var4.node)->field0_0x0;
  if (p_Var3 == (__rb_tree_node_pair_const_int_cHitControlGroup_____ *)0x0) {
    _Var1.node = (__rb_tree_node_base *)this->header;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
    iVar2 = (p_Var3->value_field).first;
    while( true ) {
                    /* end of inlined section */
      if (iVar2 < *k) {
        p_Var3 = *(__rb_tree_node_pair_const_int_cHitControlGroup_____ **)&p_Var3->field0_0x0;
      }
      else {
        _Var4.node = &p_Var3->field0_0x0;
        p_Var3 = *(__rb_tree_node_pair_const_int_cHitControlGroup_____ **)&p_Var3->field0_0x0;
      }
      if (p_Var3 == (__rb_tree_node_pair_const_int_cHitControlGroup_____ *)0x0) break;
      iVar2 = (p_Var3->value_field).first;
    }
    _Var1.node = (__rb_tree_node_base *)this->header;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
                    /* end of inlined section */
  if ((_Var4.node != _Var1.node) && (*(int *)(_Var4.node + 1) <= *k)) {
    return (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var4.node;
  }
  return (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var1.node;
}

__rb_tree_iterator<pair<const int,cHitControlGroup *> > rb_tree<int, pair<int, cHitControlGroup *>, select1st<pair<int, cHitControlGroup *> >, less<int>, __malloc_alloc_template<0> >::__insert(__rb_tree_node_base *x_, __rb_tree_node_base *y_, pair<const int,cHitControlGroup *> &v) {
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	void *result;
	pair<const int,cHitControlGroup *> &value;
	pair<const int,cHitControlGroup *> &x;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
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
  __rb_tree_node_pair_const_int_cHitControlGroup_____ *p_Var4;
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
  __rb_tree_iterator_pair_const_int_cHitControlGroup_____ _Var16;
  ulong uVar9;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
  pvVar8 = malloc(0x18);
  uVar9 = (ulong)(int)pvVar8;
  if (uVar9 == 0) {
    pvVar8 = oom_malloc__t23__malloc_alloc_template1i0Ui(0x18);
    uVar9 = (ulong)(int)pvVar8;
  }
  puVar1 = (undefined *)((int)&v->second + 3);
                    /* inlined from algobase.h */
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
  if ((__rb_tree_node_pair_const_int_cHitControlGroup_____ *)y_ == this->header) {
    y_->left = (__rb_tree_node_base *)_Var16.field0_0x0.node;
LAB_0027bcec:
    p_Var4 = this->header;
    if ((__rb_tree_node_pair_const_int_cHitControlGroup_____ *)y_ == p_Var4) {
      y_->parent = (__rb_tree_node_base *)_Var16.field0_0x0.node;
      (this->header->field0_0x0).right = (__rb_tree_node_base *)_Var16.field0_0x0.node;
    }
    else {
      if (y_ != *(__rb_tree_node_base **)&p_Var4->field0_0x0) {
        *(__rb_tree_node_base **)((int)_Var16.field0_0x0.node + 4) = y_;
        goto LAB_0027bd2c;
      }
      *(__rb_tree_base_iterator *)&p_Var4->field0_0x0 = _Var16.field0_0x0.node;
    }
  }
  else {
    if (x_ != (__rb_tree_node_base *)0x0) {
      y_->left = (__rb_tree_node_base *)_Var16.field0_0x0.node;
      goto LAB_0027bcec;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
                    /* end of inlined section */
    if (v->first < *(int *)(y_ + 1)) {
      y_->left = (__rb_tree_node_base *)_Var16.field0_0x0.node;
      goto LAB_0027bcec;
    }
    y_->right = (__rb_tree_node_base *)_Var16.field0_0x0.node;
    if (y_ == (this->header->field0_0x0).right) {
      (this->header->field0_0x0).right = (__rb_tree_node_base *)_Var16.field0_0x0.node;
    }
  }
  *(__rb_tree_node_base **)((int)_Var16.field0_0x0.node + 4) = y_;
LAB_0027bd2c:
  *(undefined4 *)((int)_Var16.field0_0x0.node + 8) = 0;
  *(undefined4 *)((int)_Var16.field0_0x0.node + 0xc) = 0;
  p_Var4 = this->header;
  *(undefined4 *)_Var16.field0_0x0.node = 0;
  pp_Var12 = &(p_Var4->field0_0x0).parent;
  if (uVar9 == (long)(int)(p_Var4->field0_0x0).parent) {
LAB_0027bf64:
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
LAB_0027bd94:
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
            goto LAB_0027bf44;
          }
          if (*piVar11 != 0) {
            p_Var13 = *(__rb_tree_node_base **)(iVar15 + 4);
            goto LAB_0027bd94;
          }
          *piVar5 = 1;
          *piVar11 = 1;
LAB_0027be70:
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
              goto LAB_0027be70;
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
LAB_0027bf44:
          p_Var13->parent = p_Var14;
        }
        if (uVar10 == (long)(int)*pp_Var12) {
          p_Var13 = *pp_Var12;
          goto LAB_0027bf68;
        }
        if (**(int **)((int)uVar10 + 4) != 0) goto LAB_0027bf64;
        piVar11 = *(int **)((int)uVar10 + 4);
        uVar9 = uVar10;
      } while( true );
    }
    p_Var13 = *pp_Var12;
  }
LAB_0027bf68:
  *(undefined4 *)p_Var13 = 1;
  this->node_count = this->node_count + 1;
  return (__rb_tree_iterator_pair_const_int_cHitControlGroup_____)_Var16.field0_0x0.node;
}

pair<__rb_tree_iterator<pair<const int,cHitControlGroup *> >,bool> rb_tree<int, pair<int, cHitControlGroup *>, select1st<pair<int, cHitControlGroup *> >, less<int>, __malloc_alloc_template<0> >::insert_unique(pair<const int,cHitControlGroup *> &v) {
	__rb_tree_node<pair<const int,cHitControlGroup *> > *y;
	__rb_tree_node<pair<const int,cHitControlGroup *> > *x;
	bool comp;
	__rb_tree_iterator<pair<const int,cHitControlGroup *> > j;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	pair<const int,cHitControlGroup *> &x;
	__rb_tree_node<pair<const int,cHitControlGroup *> > *x;
	__rb_tree_node<pair<const int,cHitControlGroup *> > *x;
	__rb_tree_node<pair<const int,cHitControlGroup *> > *x;
	__rb_tree_node<pair<const int,cHitControlGroup *> > *x;
	__rb_tree_iterator<pair<const int,cHitControlGroup *> > *this;
	__rb_tree_node<pair<const int,cHitControlGroup *> > *x;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const int,cHitControlGroup *> > *x;
	pair<__rb_tree_iterator<pair<const int,cHitControlGroup *> >,bool> *this;
	__rb_tree_node_base *y;
	__rb_tree_node_base *y;
	__rb_tree_node_base *x;
	__rb_tree_node<pair<const int,cHitControlGroup *> > *x;
	pair<const int,cHitControlGroup *> &x;
	pair<__rb_tree_iterator<pair<const int,cHitControlGroup *> >,bool> *this;
	pair<__rb_tree_iterator<pair<const int,cHitControlGroup *> >,bool> *this;
	
  bool bVar1;
  __rb_tree_iterator_pair_const_int_cHitControlGroup_____ _Var2;
  __rb_tree_base_iterator _Var3;
  __rb_tree_node_base *x_;
  pair_const_int_cHitControlGroup___ *in_a2_lo;
  __rb_tree_base_iterator y_;
  __rb_tree_iterator_pair_const_int_cHitControlGroup_____ j;
  
  y_.node = (__rb_tree_node_base *)v->first;
  x_ = (y_.node)->parent;
  bVar1 = true;
  if (x_ != (__rb_tree_node_base *)0x0) {
    do {
      y_.node = x_;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
      bVar1 = in_a2_lo->first < *(int *)(y_.node + 1);
                    /* end of inlined section */
      if (bVar1) {
        x_ = (y_.node)->left;
      }
      else {
        x_ = (y_.node)->right;
      }
    } while (x_ != (__rb_tree_node_base *)0x0);
  }
  j.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)y_.node;
  if (bVar1) {
    if (y_.node == *(__rb_tree_node_base **)(v->first + 8)) goto LAB_0027c0b8;
                    /* end of inlined section */
    if ((*(int *)y_.node == 0) && ((y_.node)->parent->parent == y_.node)) {
      j.field0_0x0.node = (__rb_tree_base_iterator)(y_.node)->right;
    }
    else {
      j.field0_0x0.node = (__rb_tree_base_iterator)(y_.node)->left;
      if (j.field0_0x0.node == (__rb_tree_node_base *)0x0) {
        j.field0_0x0.node = (__rb_tree_base_iterator)(y_.node)->parent;
        _Var3.node = (__rb_tree_node_base *)j.field0_0x0.node;
        if (y_.node == *(__rb_tree_node_base **)((int)j.field0_0x0.node + 8)) {
          do {
            j.field0_0x0.node = (__rb_tree_base_iterator)(_Var3.node)->parent;
            bVar1 = _Var3.node == *(__rb_tree_node_base **)((int)j.field0_0x0.node + 8);
            _Var3.node = (__rb_tree_node_base *)j.field0_0x0.node;
          } while (bVar1);
        }
      }
      else if (*(__rb_tree_node_base **)((int)j.field0_0x0.node + 0xc) != (__rb_tree_node_base *)0x0
              ) {
        for (j.field0_0x0.node = *(__rb_tree_base_iterator *)((int)j.field0_0x0.node + 0xc);
            *(__rb_tree_node_base **)((int)j.field0_0x0.node + 0xc) != (__rb_tree_node_base *)0x0;
            j.field0_0x0.node = *(__rb_tree_base_iterator *)((int)j.field0_0x0.node + 0xc)) {
        }
      }
    }
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
                    /* end of inlined section */
  if (in_a2_lo->first <= *(int *)((int)j.field0_0x0.node + 0x10)) {
    this->header = (__rb_tree_node_pair_const_int_cHitControlGroup_____ *)j.field0_0x0.node;
                    /* inlined from Pair.h */
    *(undefined4 *)&this->field_0x4 = 0;
    return (pair___rb_tree_iterator_pair_const_int_cHitControlGroup______bool_)(long)(int)this;
  }
LAB_0027c0b8:
  _Var2 = __insert__t7rb_tree5ZiZt4pair2ZCiZP16cHitControlGroupZt9select1st1Zt4pair2ZCiZP16cHitControlGroupZt4less1ZiZt23__malloc_alloc_template1i0P19__rb_tree_node_baseT1RCt4pair2ZCiZP16cHitControlGroup
                    ((rb_tree_int_pair_const_int_cHitControlGroup____select1st_pair_const_int_cHitControlGroup______less_int____malloc_alloc_template_0___
                      *)v,x_,y_.node,in_a2_lo);
                    /* inlined from Pair.h */
  this->header = (__rb_tree_node_pair_const_int_cHitControlGroup_____ *)_Var2.field0_0x0.node;
                    /* end of inlined section */
  *(undefined4 *)&this->field_0x4 = 1;
                    /* end of inlined section */
  return (pair___rb_tree_iterator_pair_const_int_cHitControlGroup______bool_)(long)(int)this;
}

void* __malloc_alloc_template<0>::oom_malloc(unsigned int n) {
  void *pvVar1;
  
  do {
    (*(code *)0x0)();
    pvVar1 = malloc(n);
  } while (pvVar1 == (void *)0x0);
  return pvVar1;
}

void rb_tree<int, int, identity<int>, less<int>, __malloc_alloc_template<0> >::__erase(__rb_tree_node<int> *x) {
	__rb_tree_node<int> *y;
	__rb_tree_node<int> *x;
	__rb_tree_node<int> *x;
	__rb_tree_node<int> *x;
	rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<int> *p;
	__rb_tree_node<int> *p;
	void *p;
	
  __rb_tree_node_int_ *p_Var1;
  __rb_tree_node_int_ *x_00;
  
  if (x != (__rb_tree_node_int_ *)0x0) {
    x_00 = (__rb_tree_node_int_ *)(x->field0_0x0).right;
    while( true ) {
      __erase__t7rb_tree5ZiZiZt8identity1ZiZt4less1ZiZt23__malloc_alloc_template1i0Pt14__rb_tree_node1Zi
                (this,x_00);
      p_Var1 = (__rb_tree_node_int_ *)(x->field0_0x0).left;
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
      free(x);
                    /* end of inlined section */
      if (p_Var1 == (__rb_tree_node_int_ *)0x0) break;
      x_00 = (__rb_tree_node_int_ *)(p_Var1->field0_0x0).right;
      x = p_Var1;
    }
  }
  return;
}

__rb_tree_iterator<int> rb_tree<int, int, identity<int>, less<int>, __malloc_alloc_template<0> >::__insert(__rb_tree_node_base *x_, __rb_tree_node_base *y_, Sint32 &v) {
	rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> > *this;
	void *result;
	int &value;
	Sint32 &x;
	rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> > *this;
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
	
  __rb_tree_node_int_ *p_Var1;
  __rb_tree_node_base *p_Var2;
  __rb_tree_base_iterator _Var3;
  int iVar4;
  __rb_tree_node_base *p_Var5;
  __rb_tree_node_base **pp_Var6;
  __rb_tree_node_base *p_Var7;
  __rb_tree_base_iterator _Var8;
  __rb_tree_node_base *p_Var9;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
  _Var3.node = (__rb_tree_node_base *)malloc(0x14);
  if (_Var3.node == (__rb_tree_node_base *)0x0) {
    _Var3.node = (__rb_tree_node_base *)oom_malloc__t23__malloc_alloc_template1i0Ui(0x14);
                    /* inlined from algobase.h */
    iVar4 = *v;
  }
  else {
    iVar4 = *v;
  }
  *(int *)(_Var3.node + 1) = iVar4;
                    /* end of inlined section */
  if ((__rb_tree_node_int_ *)y_ == this->header) {
    y_->left = _Var3.node;
LAB_0027c1fc:
    p_Var1 = this->header;
    if ((__rb_tree_node_int_ *)y_ == p_Var1) {
      y_->parent = _Var3.node;
      (this->header->field0_0x0).right = _Var3.node;
    }
    else {
      if (y_ != *(__rb_tree_node_base **)&p_Var1->field0_0x0) {
        (_Var3.node)->parent = y_;
        goto LAB_0027c23c;
      }
      *(__rb_tree_node_base **)&p_Var1->field0_0x0 = _Var3.node;
    }
  }
  else {
    if (x_ != (__rb_tree_node_base *)0x0) {
      y_->left = _Var3.node;
      goto LAB_0027c1fc;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
                    /* end of inlined section */
    if (*v < *(int *)(y_ + 1)) {
      y_->left = _Var3.node;
      goto LAB_0027c1fc;
    }
    y_->right = _Var3.node;
    if (y_ == (this->header->field0_0x0).right) {
      (this->header->field0_0x0).right = _Var3.node;
    }
  }
  (_Var3.node)->parent = y_;
LAB_0027c23c:
  (_Var3.node)->left = (__rb_tree_node_base *)0x0;
  (_Var3.node)->right = (__rb_tree_node_base *)0x0;
  p_Var1 = this->header;
  *(undefined4 *)_Var3.node = 0;
  pp_Var6 = &(p_Var1->field0_0x0).parent;
  if (_Var3.node == (p_Var1->field0_0x0).parent) {
LAB_0027c474:
    p_Var9 = *pp_Var6;
  }
  else {
    if (*(int *)y_ == 0) {
      p_Var9 = (_Var3.node)->parent;
      _Var8.node = _Var3.node;
      do {
        p_Var5 = p_Var9->parent->left;
        if (p_Var9 == p_Var5) {
          p_Var9 = p_Var9->parent->right;
          if (p_Var9 == (__rb_tree_node_base *)0x0) {
            p_Var9 = (_Var8.node)->parent;
LAB_0027c2a4:
            p_Var5 = p_Var9->right;
            if (_Var8.node == p_Var5) {
              p_Var9->right = p_Var5->left;
              if (p_Var5->left != (__rb_tree_node_base *)0x0) {
                p_Var5->left->parent = p_Var9;
              }
              p_Var5->parent = p_Var9->parent;
              if (p_Var9 == *pp_Var6) {
                *pp_Var6 = p_Var5;
              }
              else {
                p_Var7 = p_Var9->parent;
                if (p_Var9 == p_Var7->left) {
                  p_Var7->left = p_Var5;
                }
                else {
                  p_Var7->right = p_Var5;
                }
              }
              p_Var5->left = p_Var9;
              p_Var9->parent = p_Var5;
              p_Var5 = p_Var9->parent;
            }
            else {
              p_Var5 = (_Var8.node)->parent;
              p_Var9 = _Var8.node;
            }
            *(undefined4 *)p_Var5 = 1;
            *(undefined4 *)p_Var9->parent->parent = 0;
            p_Var5 = p_Var9->parent->parent;
            p_Var7 = p_Var5->left;
            p_Var5->left = p_Var7->right;
            if (p_Var7->right != (__rb_tree_node_base *)0x0) {
              p_Var7->right->parent = p_Var5;
            }
            p_Var7->parent = p_Var5->parent;
            if (p_Var5 == *pp_Var6) {
              *pp_Var6 = p_Var7;
            }
            else {
              p_Var2 = p_Var5->parent;
              if (p_Var5 == p_Var2->right) {
                p_Var2->right = p_Var7;
              }
              else {
                p_Var2->left = p_Var7;
              }
            }
            p_Var7->right = p_Var5;
            goto LAB_0027c454;
          }
          if (*(int *)p_Var9 != 0) {
            p_Var9 = (_Var8.node)->parent;
            goto LAB_0027c2a4;
          }
          *(int *)p_Var5 = 1;
          *(int *)p_Var9 = 1;
LAB_0027c380:
          *(undefined4 *)(_Var8.node)->parent->parent = 0;
          _Var8.node = (_Var8.node)->parent->parent;
        }
        else {
          if (p_Var5 == (__rb_tree_node_base *)0x0) {
            p_Var9 = (_Var8.node)->parent;
          }
          else {
            if (*(int *)p_Var5 == 0) {
              *(int *)p_Var9 = 1;
              *(int *)p_Var5 = 1;
              goto LAB_0027c380;
            }
            p_Var9 = (_Var8.node)->parent;
          }
          p_Var5 = p_Var9->left;
          if (_Var8.node == p_Var5) {
            p_Var9->left = p_Var5->right;
            if (p_Var5->right != (__rb_tree_node_base *)0x0) {
              p_Var5->right->parent = p_Var9;
            }
            p_Var5->parent = p_Var9->parent;
            if (p_Var9 == *pp_Var6) {
              *pp_Var6 = p_Var5;
            }
            else {
              p_Var7 = p_Var9->parent;
              if (p_Var9 == p_Var7->right) {
                p_Var7->right = p_Var5;
              }
              else {
                p_Var7->left = p_Var5;
              }
            }
            p_Var5->right = p_Var9;
            p_Var9->parent = p_Var5;
            p_Var5 = p_Var9->parent;
          }
          else {
            p_Var5 = (_Var8.node)->parent;
            p_Var9 = _Var8.node;
          }
          *(undefined4 *)p_Var5 = 1;
          *(undefined4 *)p_Var9->parent->parent = 0;
          p_Var5 = p_Var9->parent->parent;
          p_Var7 = p_Var5->right;
          p_Var5->right = p_Var7->left;
          if (p_Var7->left != (__rb_tree_node_base *)0x0) {
            p_Var7->left->parent = p_Var5;
          }
          p_Var7->parent = p_Var5->parent;
          if (p_Var5 == *pp_Var6) {
            *pp_Var6 = p_Var7;
          }
          else {
            p_Var2 = p_Var5->parent;
            if (p_Var5 == p_Var2->left) {
              p_Var2->left = p_Var7;
            }
            else {
              p_Var2->right = p_Var7;
            }
          }
          p_Var7->left = p_Var5;
LAB_0027c454:
          p_Var5->parent = p_Var7;
          _Var8.node = p_Var9;
        }
        if (_Var8.node == *pp_Var6) {
          p_Var9 = *pp_Var6;
          goto LAB_0027c478;
        }
        if (*(int *)(_Var8.node)->parent != 0) goto LAB_0027c474;
        p_Var9 = (_Var8.node)->parent;
      } while( true );
    }
    p_Var9 = *pp_Var6;
  }
LAB_0027c478:
  *(undefined4 *)p_Var9 = 1;
  this->node_count = this->node_count + 1;
  return (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var3.node;
}

pair<__rb_tree_iterator<int>,bool> rb_tree<int, int, identity<int>, less<int>, __malloc_alloc_template<0> >::insert_unique(Sint32 &v) {
	__rb_tree_node<int> *y;
	__rb_tree_node<int> *x;
	bool comp;
	__rb_tree_iterator<int> j;
	rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> > *this;
	Sint32 &x;
	__rb_tree_node<int> *x;
	__rb_tree_node<int> *x;
	__rb_tree_node<int> *x;
	__rb_tree_node<int> *x;
	__rb_tree_iterator<int> *this;
	__rb_tree_node<int> *x;
	rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<int> *x;
	pair<__rb_tree_iterator<int>,bool> *this;
	__rb_tree_node_base *y;
	__rb_tree_node_base *y;
	__rb_tree_node_base *x;
	__rb_tree_node<int> *x;
	Sint32 &x;
	pair<__rb_tree_iterator<int>,bool> *this;
	pair<__rb_tree_iterator<int>,bool> *this;
	
  bool bVar1;
  __rb_tree_iterator_int_ _Var2;
  __rb_tree_base_iterator _Var3;
  __rb_tree_node_base *x_;
  int *in_a2_lo;
  __rb_tree_base_iterator y_;
  __rb_tree_iterator_int_ j;
  
  y_.node = (__rb_tree_node_base *)*v;
  x_ = (y_.node)->parent;
  bVar1 = true;
  if (x_ != (__rb_tree_node_base *)0x0) {
    do {
      y_.node = x_;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
      bVar1 = *in_a2_lo < *(int *)(y_.node + 1);
                    /* end of inlined section */
      if (bVar1) {
        x_ = (y_.node)->left;
      }
      else {
        x_ = (y_.node)->right;
      }
    } while (x_ != (__rb_tree_node_base *)0x0);
  }
  j.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)y_.node;
  if (bVar1) {
    if (y_.node == *(__rb_tree_node_base **)(*v + 8)) goto LAB_0027c5c8;
                    /* end of inlined section */
    if ((*(int *)y_.node == 0) && ((y_.node)->parent->parent == y_.node)) {
      j.field0_0x0.node = (__rb_tree_base_iterator)(y_.node)->right;
    }
    else {
      j.field0_0x0.node = (__rb_tree_base_iterator)(y_.node)->left;
      if (j.field0_0x0.node == (__rb_tree_node_base *)0x0) {
        j.field0_0x0.node = (__rb_tree_base_iterator)(y_.node)->parent;
        _Var3.node = (__rb_tree_node_base *)j.field0_0x0.node;
        if (y_.node == *(__rb_tree_node_base **)((int)j.field0_0x0.node + 8)) {
          do {
            j.field0_0x0.node = (__rb_tree_base_iterator)(_Var3.node)->parent;
            bVar1 = _Var3.node == *(__rb_tree_node_base **)((int)j.field0_0x0.node + 8);
            _Var3.node = (__rb_tree_node_base *)j.field0_0x0.node;
          } while (bVar1);
        }
      }
      else if (*(__rb_tree_node_base **)((int)j.field0_0x0.node + 0xc) != (__rb_tree_node_base *)0x0
              ) {
        for (j.field0_0x0.node = *(__rb_tree_base_iterator *)((int)j.field0_0x0.node + 0xc);
            *(__rb_tree_node_base **)((int)j.field0_0x0.node + 0xc) != (__rb_tree_node_base *)0x0;
            j.field0_0x0.node = *(__rb_tree_base_iterator *)((int)j.field0_0x0.node + 0xc)) {
        }
      }
    }
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
                    /* end of inlined section */
  if (*in_a2_lo <= *(int *)((int)j.field0_0x0.node + 0x10)) {
    this->header = (__rb_tree_node_int_ *)j.field0_0x0.node;
                    /* inlined from Pair.h */
    *(undefined4 *)&this->field_0x4 = 0;
    return (pair___rb_tree_iterator_int__bool_)(long)(int)this;
  }
LAB_0027c5c8:
  _Var2 = __insert__t7rb_tree5ZiZiZt8identity1ZiZt4less1ZiZt23__malloc_alloc_template1i0P19__rb_tree_node_baseT1RCi
                    ((rb_tree_int_int_identity_int__less_int____malloc_alloc_template_0___ *)v,x_,
                     y_.node,in_a2_lo);
                    /* inlined from Pair.h */
  this->header = (__rb_tree_node_int_ *)_Var2.field0_0x0.node;
                    /* end of inlined section */
  *(undefined4 *)&this->field_0x4 = 1;
                    /* end of inlined section */
  return (pair___rb_tree_iterator_int__bool_)(long)(int)this;
}

void list<cSoundCacheHandle, __malloc_alloc_template<0> >::clear() {
	__list_node<cSoundCacheHandle> *cur;
	__list_node<cSoundCacheHandle> *tmp;
	list<cSoundCacheHandle,__malloc_alloc_template<0> > *this;
	__list_node<cSoundCacheHandle> *p;
	__list_node<cSoundCacheHandle> *p;
	void *p;
	
  __list_node_cSoundCacheHandle_ *p_Var1;
  __list_node_cSoundCacheHandle_ *pAddress;
  
  p_Var1 = this->node;
  pAddress = (__list_node_cSoundCacheHandle_ *)p_Var1->next;
  if (pAddress != p_Var1) {
    do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
      p_Var1 = (__list_node_cSoundCacheHandle_ *)pAddress->next;
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

void rb_tree<int, pair<int, cHitControlGroup *>, select1st<pair<int, cHitControlGroup *> >, less<int>, __malloc_alloc_template<0> >::__erase(__rb_tree_node<pair<const int,cHitControlGroup *> > *x) {
	__rb_tree_node<pair<const int,cHitControlGroup *> > *y;
	__rb_tree_node<pair<const int,cHitControlGroup *> > *x;
	__rb_tree_node<pair<const int,cHitControlGroup *> > *x;
	__rb_tree_node<pair<const int,cHitControlGroup *> > *x;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const int,cHitControlGroup *> > *p;
	__rb_tree_node<pair<const int,cHitControlGroup *> > *p;
	void *p;
	
  __rb_tree_node_pair_const_int_cHitControlGroup_____ *p_Var1;
  __rb_tree_node_pair_const_int_cHitControlGroup_____ *x_00;
  
  if (x != (__rb_tree_node_pair_const_int_cHitControlGroup_____ *)0x0) {
    x_00 = (__rb_tree_node_pair_const_int_cHitControlGroup_____ *)(x->field0_0x0).right;
    while( true ) {
      __erase__t7rb_tree5ZiZt4pair2ZCiZP16cHitControlGroupZt9select1st1Zt4pair2ZCiZP16cHitControlGroupZt4less1ZiZt23__malloc_alloc_template1i0Pt14__rb_tree_node1Zt4pair2ZCiZP16cHitControlGroup
                (this,x_00);
      p_Var1 = (__rb_tree_node_pair_const_int_cHitControlGroup_____ *)(x->field0_0x0).left;
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
      free(x);
                    /* end of inlined section */
      if (p_Var1 == (__rb_tree_node_pair_const_int_cHitControlGroup_____ *)0x0) break;
      x_00 = (__rb_tree_node_pair_const_int_cHitControlGroup_____ *)(p_Var1->field0_0x0).right;
      x = p_Var1;
    }
  }
  return;
}

void list<unsigned int, __malloc_alloc_template<0> >::clear() {
	__list_node<unsigned int> *cur;
	__list_node<unsigned int> *tmp;
	list<unsigned int,__malloc_alloc_template<0> > *this;
	__list_node<unsigned int> *p;
	__list_node<unsigned int> *p;
	void *p;
	
  __list_node_unsigned_int_ *p_Var1;
  __list_node_unsigned_int_ *pAddress;
  
  p_Var1 = this->node;
  pAddress = (__list_node_unsigned_int_ *)p_Var1->next;
  if (pAddress != p_Var1) {
    do {
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
      p_Var1 = (__list_node_unsigned_int_ *)pAddress->next;
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

void rb_tree<cSoundCacheHandle, pair<cSoundCacheHandle, int>, select1st<pair<cSoundCacheHandle, int> >, less<cSoundCacheHandle>, __malloc_alloc_template<0> >::__erase(__rb_tree_node<pair<const cSoundCacheHandle,int> > *x) {
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *y;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *p;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *p;
	void *p;
	
  __rb_tree_node_pair_const_cSoundCacheHandle_int___ *p_Var1;
  __rb_tree_node_pair_const_cSoundCacheHandle_int___ *x_00;
  
  if (x != (__rb_tree_node_pair_const_cSoundCacheHandle_int___ *)0x0) {
    x_00 = (__rb_tree_node_pair_const_cSoundCacheHandle_int___ *)(x->field0_0x0).right;
    while( true ) {
      __erase__t7rb_tree5ZC17cSoundCacheHandleZt4pair2ZC17cSoundCacheHandleZiZt9select1st1Zt4pair2ZC17cSoundCacheHandleZiZt4less1ZC17cSoundCacheHandleZt23__malloc_alloc_template1i0Pt14__rb_tree_node1Zt4pair2ZC17cSoundCacheHandleZi
                (this,x_00);
      p_Var1 = (__rb_tree_node_pair_const_cSoundCacheHandle_int___ *)(x->field0_0x0).left;
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
      free(x);
                    /* end of inlined section */
      if (p_Var1 == (__rb_tree_node_pair_const_cSoundCacheHandle_int___ *)0x0) break;
      x_00 = (__rb_tree_node_pair_const_cSoundCacheHandle_int___ *)(p_Var1->field0_0x0).right;
      x = p_Var1;
    }
  }
  return;
}

void rb_tree<int, pair<int, cHitControlGroup *>, select1st<pair<int, cHitControlGroup *> >, less<int>, __malloc_alloc_template<0> >::erase(__rb_tree_iterator<pair<const int,cHitControlGroup *> > first, __rb_tree_iterator<pair<const int,cHitControlGroup *> > last) {
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const int,cHitControlGroup *> > *x;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	__rb_tree_iterator<pair<const int,cHitControlGroup *> > *this;
	__rb_tree_base_iterator *this;
	__rb_tree_node_base *y;
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
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
	rb_tree<int,pair<const int,cHitControlGroup *>,select1st<pair<const int,cHitControlGroup *> >,less<int>,__malloc_alloc_template<0> > *this;
	
  __rb_tree_base_iterator _Var1;
  __rb_tree_node_base *p_Var2;
  __rb_tree_node_pair_const_int_cHitControlGroup_____ *p_Var3;
  __rb_tree_node_base *p_Var4;
  int iVar5;
  __rb_tree_node_base **pp_Var6;
  __rb_tree_node_base *p_Var7;
  __rb_tree_node_base *p_Var8;
  __rb_tree_node_base *p_Var9;
  __rb_tree_base_iterator pAddress;
  __rb_tree_node_base **pp_Var10;
  __rb_tree_node_base **pp_Var11;
  __rb_tree_iterator_pair_const_int_cHitControlGroup_____ local_60;
  
  _Var1.node = (__rb_tree_node_base *)this->header;
  if (first.field0_0x0.node == (__rb_tree_base_iterator)(_Var1.node)->left &&
      last.field0_0x0.node == (__rb_tree_base_iterator)_Var1.node) {
    if (this->node_count != 0) {
      __erase__t7rb_tree5ZiZt4pair2ZCiZP16cHitControlGroupZt9select1st1Zt4pair2ZCiZP16cHitControlGroupZt4less1ZiZt23__malloc_alloc_template1i0Pt14__rb_tree_node1Zt4pair2ZCiZP16cHitControlGroup
                (this,(__rb_tree_node_pair_const_int_cHitControlGroup_____ *)(_Var1.node)->parent);
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
LAB_0027c90c:
          p_Var9 = (pAddress.node)->right;
        }
        else {
          p_Var8 = (_Var1.node)->right;
          if (p_Var8 != (__rb_tree_node_base *)0x0) {
            if (p_Var8->left != (__rb_tree_node_base *)0x0) {
              for (pAddress.node = p_Var8->left; (pAddress.node)->left != (__rb_tree_node_base *)0x0
                  ; pAddress.node = (pAddress.node)->left) {
              }
              goto LAB_0027c90c;
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
            goto LAB_0027ca70;
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
                    /* inlined from algobase.h */
          iVar5 = *(int *)pAddress.node;
                    /* end of inlined section */
          (pAddress.node)->parent = (_Var1.node)->parent;
                    /* inlined from algobase.h */
          *(int *)pAddress.node = *(int *)_Var1.node;
          *(int *)_Var1.node = iVar5;
          pAddress.node = _Var1.node;
                    /* end of inlined section */
LAB_0027ca70:
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
LAB_0027cb24:
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
                if (*(int *)p_Var2 != 1) goto LAB_0027cb24;
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
LAB_0027cca0:
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
                if (*(int *)p_Var2 != 1) goto LAB_0027cca0;
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

__rb_tree_iterator<pair<const cSoundCacheHandle,int> > rb_tree<cSoundCacheHandle, pair<cSoundCacheHandle, int>, select1st<pair<cSoundCacheHandle, int> >, less<cSoundCacheHandle>, __malloc_alloc_template<0> >::__insert(__rb_tree_node_base *x_, __rb_tree_node_base *y_, pair<const cSoundCacheHandle,int> &v) {
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	void *result;
	pair<const cSoundCacheHandle,int> &value;
	pair<const cSoundCacheHandle,int> &x;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
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
  __rb_tree_node_pair_const_cSoundCacheHandle_int___ *p_Var4;
  int *piVar5;
  __rb_tree_node_base *p_Var6;
  ulong *puVar7;
  bool bVar8;
  void *pvVar9;
  ulong uVar11;
  int *piVar12;
  __rb_tree_node_base **pp_Var13;
  __rb_tree_node_base *p_Var14;
  __rb_tree_node_base *p_Var15;
  int iVar16;
  __rb_tree_iterator_pair_const_cSoundCacheHandle_int___ _Var17;
  ulong uVar10;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
  pvVar9 = malloc(0x18);
  uVar10 = (ulong)(int)pvVar9;
  if (uVar10 == 0) {
    pvVar9 = oom_malloc__t23__malloc_alloc_template1i0Ui(0x18);
    uVar10 = (ulong)(int)pvVar9;
  }
  puVar1 = (undefined *)((int)&v->second + 3);
                    /* inlined from algobase.h */
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)v & 7;
  uVar11 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
           uVar10 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)v - uVar3) >> uVar3 * 8;
  _Var17.field0_0x0.node = SUB84(uVar10,0);
  uVar2 = (int)_Var17.field0_0x0.node + 0x17U & 7;
  puVar7 = (ulong *)(((int)_Var17.field0_0x0.node + 0x17U) - uVar2);
  *puVar7 = *puVar7 & -1L << (uVar2 + 1) * 8 | uVar11 >> (7 - uVar2) * 8;
  uVar2 = (int)_Var17.field0_0x0.node + 0x10U & 7;
  puVar7 = (ulong *)(((int)_Var17.field0_0x0.node + 0x10U) - uVar2);
  *puVar7 = uVar11 << uVar2 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
                    /* end of inlined section */
  if ((__rb_tree_node_pair_const_cSoundCacheHandle_int___ *)y_ == this->header) {
    y_->left = (__rb_tree_node_base *)_Var17.field0_0x0.node;
LAB_0027ce68:
    p_Var4 = this->header;
    if ((__rb_tree_node_pair_const_cSoundCacheHandle_int___ *)y_ == p_Var4) {
      y_->parent = (__rb_tree_node_base *)_Var17.field0_0x0.node;
      (this->header->field0_0x0).right = (__rb_tree_node_base *)_Var17.field0_0x0.node;
    }
    else {
      if (y_ != *(__rb_tree_node_base **)&p_Var4->field0_0x0) {
        *(__rb_tree_node_base **)((int)_Var17.field0_0x0.node + 4) = y_;
        goto LAB_0027cea8;
      }
      *(__rb_tree_base_iterator *)&p_Var4->field0_0x0 = _Var17.field0_0x0.node;
    }
  }
  else {
    if (x_ != (__rb_tree_node_base *)0x0) {
      y_->left = (__rb_tree_node_base *)_Var17.field0_0x0.node;
      goto LAB_0027ce68;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
    bVar8 = __lt__C17cSoundCacheHandleRC17cSoundCacheHandle(&v->first,(cSoundCacheHandle *)(y_ + 1))
    ;
                    /* end of inlined section */
    if (bVar8) {
      y_->left = (__rb_tree_node_base *)_Var17.field0_0x0.node;
      goto LAB_0027ce68;
    }
    y_->right = (__rb_tree_node_base *)_Var17.field0_0x0.node;
    if (y_ == (this->header->field0_0x0).right) {
      (this->header->field0_0x0).right = (__rb_tree_node_base *)_Var17.field0_0x0.node;
    }
  }
  *(__rb_tree_node_base **)((int)_Var17.field0_0x0.node + 4) = y_;
LAB_0027cea8:
  *(undefined4 *)((int)_Var17.field0_0x0.node + 8) = 0;
  *(undefined4 *)((int)_Var17.field0_0x0.node + 0xc) = 0;
  p_Var4 = this->header;
  *(undefined4 *)_Var17.field0_0x0.node = 0;
  pp_Var13 = &(p_Var4->field0_0x0).parent;
  if (uVar10 == (long)(int)(p_Var4->field0_0x0).parent) {
LAB_0027d0e4:
    p_Var14 = *pp_Var13;
  }
  else {
    if (*(int *)y_ == 0) {
      piVar12 = *(int **)((int)_Var17.field0_0x0.node + 4);
      do {
        piVar5 = *(int **)(piVar12[1] + 8);
        iVar16 = (int)uVar10;
        if (piVar12 == piVar5) {
          piVar12 = *(int **)(piVar12[1] + 0xc);
          if (piVar12 == (int *)0x0) {
            p_Var14 = *(__rb_tree_node_base **)(iVar16 + 4);
LAB_0027cf14:
            uVar11 = (ulong)(int)p_Var14;
            p_Var15 = p_Var14->right;
            if (uVar10 == (long)(int)p_Var15) {
              p_Var14->right = p_Var15->left;
              if (p_Var15->left != (__rb_tree_node_base *)0x0) {
                p_Var15->left->parent = p_Var14;
              }
              p_Var15->parent = p_Var14->parent;
              if (uVar11 == (long)(int)*pp_Var13) {
                *pp_Var13 = p_Var15;
              }
              else {
                p_Var6 = p_Var14->parent;
                if (uVar11 == (long)(int)p_Var6->left) {
                  p_Var6->left = p_Var15;
                }
                else {
                  p_Var6->right = p_Var15;
                }
              }
              p_Var15->left = p_Var14;
              p_Var14->parent = p_Var15;
              p_Var14 = p_Var14->parent;
            }
            else {
              p_Var14 = *(__rb_tree_node_base **)(iVar16 + 4);
              uVar11 = uVar10;
            }
            *(undefined4 *)p_Var14 = 1;
            **(undefined4 **)(*(int *)((int)uVar11 + 4) + 4) = 0;
            p_Var14 = *(__rb_tree_node_base **)(*(int *)((int)uVar11 + 4) + 4);
            p_Var15 = p_Var14->left;
            p_Var14->left = p_Var15->right;
            if (p_Var15->right != (__rb_tree_node_base *)0x0) {
              p_Var15->right->parent = p_Var14;
            }
            p_Var15->parent = p_Var14->parent;
            if (p_Var14 == *pp_Var13) {
              *pp_Var13 = p_Var15;
            }
            else {
              p_Var6 = p_Var14->parent;
              if (p_Var14 == p_Var6->right) {
                p_Var6->right = p_Var15;
              }
              else {
                p_Var6->left = p_Var15;
              }
            }
            p_Var15->right = p_Var14;
            goto LAB_0027d0c4;
          }
          if (*piVar12 != 0) {
            p_Var14 = *(__rb_tree_node_base **)(iVar16 + 4);
            goto LAB_0027cf14;
          }
          *piVar5 = 1;
          *piVar12 = 1;
LAB_0027cff0:
          **(undefined4 **)(*(int *)(iVar16 + 4) + 4) = 0;
          uVar11 = (ulong)*(int *)(*(int *)(iVar16 + 4) + 4);
        }
        else {
          if (piVar5 == (int *)0x0) {
            p_Var14 = *(__rb_tree_node_base **)(iVar16 + 4);
          }
          else {
            if (*piVar5 == 0) {
              *piVar12 = 1;
              *piVar5 = 1;
              goto LAB_0027cff0;
            }
            p_Var14 = *(__rb_tree_node_base **)(iVar16 + 4);
          }
          uVar11 = (ulong)(int)p_Var14;
          p_Var15 = p_Var14->left;
          if (uVar10 == (long)(int)p_Var15) {
            p_Var14->left = p_Var15->right;
            if (p_Var15->right != (__rb_tree_node_base *)0x0) {
              p_Var15->right->parent = p_Var14;
            }
            p_Var15->parent = p_Var14->parent;
            if (uVar11 == (long)(int)*pp_Var13) {
              *pp_Var13 = p_Var15;
            }
            else {
              p_Var6 = p_Var14->parent;
              if (uVar11 == (long)(int)p_Var6->right) {
                p_Var6->right = p_Var15;
              }
              else {
                p_Var6->left = p_Var15;
              }
            }
            p_Var15->right = p_Var14;
            p_Var14->parent = p_Var15;
            p_Var14 = p_Var14->parent;
          }
          else {
            p_Var14 = *(__rb_tree_node_base **)(iVar16 + 4);
            uVar11 = uVar10;
          }
          *(undefined4 *)p_Var14 = 1;
          **(undefined4 **)(*(int *)((int)uVar11 + 4) + 4) = 0;
          p_Var14 = *(__rb_tree_node_base **)(*(int *)((int)uVar11 + 4) + 4);
          p_Var15 = p_Var14->right;
          p_Var14->right = p_Var15->left;
          if (p_Var15->left != (__rb_tree_node_base *)0x0) {
            p_Var15->left->parent = p_Var14;
          }
          p_Var15->parent = p_Var14->parent;
          if (p_Var14 == *pp_Var13) {
            *pp_Var13 = p_Var15;
          }
          else {
            p_Var6 = p_Var14->parent;
            if (p_Var14 == p_Var6->left) {
              p_Var6->left = p_Var15;
            }
            else {
              p_Var6->right = p_Var15;
            }
          }
          p_Var15->left = p_Var14;
LAB_0027d0c4:
          p_Var14->parent = p_Var15;
        }
        if (uVar11 == (long)(int)*pp_Var13) {
          p_Var14 = *pp_Var13;
          goto LAB_0027d0e8;
        }
        if (**(int **)((int)uVar11 + 4) != 0) goto LAB_0027d0e4;
        piVar12 = *(int **)((int)uVar11 + 4);
        uVar10 = uVar11;
      } while( true );
    }
    p_Var14 = *pp_Var13;
  }
LAB_0027d0e8:
  *(undefined4 *)p_Var14 = 1;
  this->node_count = this->node_count + 1;
  return (__rb_tree_iterator_pair_const_cSoundCacheHandle_int___)_Var17.field0_0x0.node;
}

pair<__rb_tree_iterator<pair<const cSoundCacheHandle,int> >,bool> rb_tree<cSoundCacheHandle, pair<cSoundCacheHandle, int>, select1st<pair<cSoundCacheHandle, int> >, less<cSoundCacheHandle>, __malloc_alloc_template<0> >::insert_unique(pair<const cSoundCacheHandle,int> &v) {
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *y;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	bool comp;
	__rb_tree_iterator<pair<const cSoundCacheHandle,int> > j;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	pair<const cSoundCacheHandle,int> &x;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	__rb_tree_iterator<pair<const cSoundCacheHandle,int> > *this;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	pair<__rb_tree_iterator<pair<const cSoundCacheHandle,int> >,bool> *this;
	__rb_tree_node_base *y;
	__rb_tree_node_base *y;
	__rb_tree_node_base *x;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	pair<const cSoundCacheHandle,int> &x;
	pair<__rb_tree_iterator<pair<const cSoundCacheHandle,int> >,bool> *this;
	pair<__rb_tree_iterator<pair<const cSoundCacheHandle,int> >,bool> *this;
	
  __rb_tree_base_iterator _Var1;
  __rb_tree_node_base *p_Var2;
  bool bVar3;
  __rb_tree_iterator_pair_const_cSoundCacheHandle_int___ _Var4;
  __rb_tree_base_iterator _Var5;
  pair_const_cSoundCacheHandle_int_ *in_a2_lo;
  __rb_tree_iterator_pair_const_cSoundCacheHandle_int___ j;
  
  bVar3 = true;
  _Var1.node = (__rb_tree_node_base *)(v->first).m_id;
  p_Var2 = (_Var1.node)->parent;
  while (p_Var2 != (__rb_tree_node_base *)0x0) {
    bVar3 = __lt__C17cSoundCacheHandleRC17cSoundCacheHandle
                      (&in_a2_lo->first,(cSoundCacheHandle *)(p_Var2 + 1));
    _Var1.node = p_Var2;
                    /* end of inlined section */
    if (bVar3) {
      p_Var2 = p_Var2->left;
    }
    else {
      p_Var2 = p_Var2->right;
    }
  }
  j.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var1.node;
  if (bVar3 != false) {
    if (_Var1.node == *(__rb_tree_node_base **)((v->first).m_id + 8)) goto LAB_0027d24c;
                    /* end of inlined section */
    if ((*(int *)_Var1.node == 0) && ((_Var1.node)->parent->parent == _Var1.node)) {
      j.field0_0x0.node = (__rb_tree_base_iterator)(_Var1.node)->right;
    }
    else {
      j.field0_0x0.node = (__rb_tree_base_iterator)(_Var1.node)->left;
      if (j.field0_0x0.node == (__rb_tree_node_base *)0x0) {
        j.field0_0x0.node = (__rb_tree_base_iterator)(_Var1.node)->parent;
        _Var5.node = (__rb_tree_node_base *)j.field0_0x0.node;
        if (_Var1.node == *(__rb_tree_node_base **)((int)j.field0_0x0.node + 8)) {
          do {
            j.field0_0x0.node = (__rb_tree_base_iterator)(_Var5.node)->parent;
            bVar3 = _Var5.node == *(__rb_tree_node_base **)((int)j.field0_0x0.node + 8);
            _Var5.node = (__rb_tree_node_base *)j.field0_0x0.node;
          } while (bVar3);
        }
      }
      else if (*(__rb_tree_node_base **)((int)j.field0_0x0.node + 0xc) != (__rb_tree_node_base *)0x0
              ) {
        for (j.field0_0x0.node = *(__rb_tree_base_iterator *)((int)j.field0_0x0.node + 0xc);
            *(__rb_tree_node_base **)((int)j.field0_0x0.node + 0xc) != (__rb_tree_node_base *)0x0;
            j.field0_0x0.node = *(__rb_tree_base_iterator *)((int)j.field0_0x0.node + 0xc)) {
        }
      }
    }
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
  bVar3 = __lt__C17cSoundCacheHandleRC17cSoundCacheHandle
                    ((cSoundCacheHandle *)((int)j.field0_0x0.node + 0x10),&in_a2_lo->first);
                    /* end of inlined section */
  if (!bVar3) {
                    /* inlined from Pair.h */
    *(undefined4 *)&this->field_0x4 = 0;
    this->header = (__rb_tree_node_pair_const_cSoundCacheHandle_int___ *)j.field0_0x0.node;
    return (pair___rb_tree_iterator_pair_const_cSoundCacheHandle_int____bool_)(long)(int)this;
  }
LAB_0027d24c:
  _Var4 = __insert__t7rb_tree5ZC17cSoundCacheHandleZt4pair2ZC17cSoundCacheHandleZiZt9select1st1Zt4pair2ZC17cSoundCacheHandleZiZt4less1ZC17cSoundCacheHandleZt23__malloc_alloc_template1i0P19__rb_tree_node_baseT1RCt4pair2ZC17cSoundCacheHandleZi
                    ((rb_tree_const_cSoundCacheHandle_pair_const_cSoundCacheHandle_int__select1st_pair_const_cSoundCacheHandle_int____less_const_cSoundCacheHandle____malloc_alloc_template_0___
                      *)v,(__rb_tree_node_base *)0x0,_Var1.node,in_a2_lo);
                    /* inlined from Pair.h */
  this->header = (__rb_tree_node_pair_const_cSoundCacheHandle_int___ *)_Var4.field0_0x0.node;
                    /* end of inlined section */
  *(undefined4 *)&this->field_0x4 = 1;
                    /* end of inlined section */
  return (pair___rb_tree_iterator_pair_const_cSoundCacheHandle_int____bool_)(long)(int)this;
}

__rb_tree_iterator<pair<const cSoundCacheHandle,int> > rb_tree<cSoundCacheHandle, pair<cSoundCacheHandle, int>, select1st<pair<cSoundCacheHandle, int> >, less<cSoundCacheHandle>, __malloc_alloc_template<0> >::lower_bound(cSoundCacheHandle &k) {
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *y;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	cSoundCacheHandle &y;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	
  __rb_tree_base_iterator _Var1;
  __rb_tree_node_base *p_Var2;
  bool bVar3;
  
  _Var1.node = &this->header->field0_0x0;
  p_Var2 = *(__rb_tree_node_base **)&this->header->field0_0x0;
  while (p_Var2 != (__rb_tree_node_base *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
    bVar3 = __lt__C17cSoundCacheHandleRC17cSoundCacheHandle((cSoundCacheHandle *)(p_Var2 + 1),k);
                    /* end of inlined section */
    if (bVar3) {
      p_Var2 = p_Var2->right;
    }
    else {
      _Var1.node = p_Var2;
      p_Var2 = p_Var2->left;
    }
  }
  return (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var1.node;
}

__rb_tree_iterator<pair<const cSoundCacheHandle,int> > rb_tree<cSoundCacheHandle, pair<cSoundCacheHandle, int>, select1st<pair<cSoundCacheHandle, int> >, less<cSoundCacheHandle>, __malloc_alloc_template<0> >::upper_bound(cSoundCacheHandle &k) {
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *y;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	cSoundCacheHandle &x;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	
  __rb_tree_base_iterator _Var1;
  __rb_tree_node_base *p_Var2;
  bool bVar3;
  
  _Var1.node = &this->header->field0_0x0;
  p_Var2 = *(__rb_tree_node_base **)&this->header->field0_0x0;
  while (p_Var2 != (__rb_tree_node_base *)0x0) {
    bVar3 = __lt__C17cSoundCacheHandleRC17cSoundCacheHandle(k,(cSoundCacheHandle *)(p_Var2 + 1));
                    /* end of inlined section */
    if (bVar3) {
      _Var1.node = p_Var2;
      p_Var2 = p_Var2->left;
    }
    else {
      p_Var2 = p_Var2->right;
    }
  }
  return (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var1.node;
}

void rb_tree<cSoundCacheHandle, pair<cSoundCacheHandle, int>, select1st<pair<cSoundCacheHandle, int> >, less<cSoundCacheHandle>, __malloc_alloc_template<0> >::erase(__rb_tree_iterator<pair<const cSoundCacheHandle,int> > first, __rb_tree_iterator<pair<const cSoundCacheHandle,int> > last) {
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	__rb_tree_iterator<pair<const cSoundCacheHandle,int> > *this;
	__rb_tree_base_iterator *this;
	__rb_tree_node_base *y;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
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
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	
  __rb_tree_base_iterator _Var1;
  __rb_tree_node_base *p_Var2;
  __rb_tree_node_pair_const_cSoundCacheHandle_int___ *p_Var3;
  __rb_tree_node_base *p_Var4;
  int iVar5;
  __rb_tree_node_base **pp_Var6;
  __rb_tree_node_base *p_Var7;
  __rb_tree_node_base *p_Var8;
  __rb_tree_node_base *p_Var9;
  __rb_tree_base_iterator pAddress;
  __rb_tree_node_base **pp_Var10;
  __rb_tree_node_base **pp_Var11;
  __rb_tree_iterator_pair_const_cSoundCacheHandle_int___ local_60;
  
  _Var1.node = (__rb_tree_node_base *)this->header;
  if (first.field0_0x0.node == (__rb_tree_base_iterator)(_Var1.node)->left &&
      last.field0_0x0.node == (__rb_tree_base_iterator)_Var1.node) {
    if (this->node_count != 0) {
      __erase__t7rb_tree5ZC17cSoundCacheHandleZt4pair2ZC17cSoundCacheHandleZiZt9select1st1Zt4pair2ZC17cSoundCacheHandleZiZt4less1ZC17cSoundCacheHandleZt23__malloc_alloc_template1i0Pt14__rb_tree_node1Zt4pair2ZC17cSoundCacheHandleZi
                (this,(__rb_tree_node_pair_const_cSoundCacheHandle_int___ *)(_Var1.node)->parent);
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
LAB_0027d4e4:
          p_Var9 = (pAddress.node)->right;
        }
        else {
          p_Var8 = (_Var1.node)->right;
          if (p_Var8 != (__rb_tree_node_base *)0x0) {
            if (p_Var8->left != (__rb_tree_node_base *)0x0) {
              for (pAddress.node = p_Var8->left; (pAddress.node)->left != (__rb_tree_node_base *)0x0
                  ; pAddress.node = (pAddress.node)->left) {
              }
              goto LAB_0027d4e4;
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
            goto LAB_0027d648;
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
                    /* inlined from algobase.h */
          iVar5 = *(int *)pAddress.node;
                    /* end of inlined section */
          (pAddress.node)->parent = (_Var1.node)->parent;
                    /* inlined from algobase.h */
          *(int *)pAddress.node = *(int *)_Var1.node;
          *(int *)_Var1.node = iVar5;
          pAddress.node = _Var1.node;
                    /* end of inlined section */
LAB_0027d648:
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
LAB_0027d6fc:
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
                if (*(int *)p_Var2 != 1) goto LAB_0027d6fc;
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
LAB_0027d878:
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
                if (*(int *)p_Var2 != 1) goto LAB_0027d878;
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

unsigned int rb_tree<cSoundCacheHandle, pair<cSoundCacheHandle, int>, select1st<pair<cSoundCacheHandle, int> >, less<cSoundCacheHandle>, __malloc_alloc_template<0> >::erase(cSoundCacheHandle &x) {
	pair<__rb_tree_iterator<pair<const cSoundCacheHandle,int> >,__rb_tree_iterator<pair<const cSoundCacheHandle,int> > > p;
	unsigned int n;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	cSoundCacheHandle &k;
	unsigned int &n;
	unsigned int &n;
	__rb_tree_iterator<pair<const cSoundCacheHandle,int> > first;
	__rb_tree_iterator<pair<const cSoundCacheHandle,int> > *this;
	__rb_tree_base_iterator *this;
	__rb_tree_node_base *y;
	
  __rb_tree_node_base *p_Var1;
  __rb_tree_iterator_pair_const_cSoundCacheHandle_int___ first_00;
  __rb_tree_iterator_pair_const_cSoundCacheHandle_int___ last;
  __rb_tree_base_iterator _Var2;
  pair___rb_tree_iterator_pair_const_cSoundCacheHandle_int______rb_tree_iterator_pair_const_cSoundCacheHandle_int_____
  p;
  uint n;
  __rb_tree_iterator_pair_const_cSoundCacheHandle_int___ first;
  
  first_00 = lower_bound__t7rb_tree5ZC17cSoundCacheHandleZt4pair2ZC17cSoundCacheHandleZiZt9select1st1Zt4pair2ZC17cSoundCacheHandleZiZt4less1ZC17cSoundCacheHandleZt23__malloc_alloc_template1i0RC17cSoundCacheHandle
                       (this,x);
  last = upper_bound__t7rb_tree5ZC17cSoundCacheHandleZt4pair2ZC17cSoundCacheHandleZiZt9select1st1Zt4pair2ZC17cSoundCacheHandleZiZt4less1ZC17cSoundCacheHandleZt23__malloc_alloc_template1i0RC17cSoundCacheHandle
                   (this,x);
                    /* inlined from algobase.h */
                    /* end of inlined section */
  n = 0;
                    /* inlined from algobase.h */
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
                    /* inlined from algobase.h */
      if (first.field0_0x0.node == last.field0_0x0.node) break;
      _Var2.node = *(__rb_tree_node_base **)((int)first.field0_0x0.node + 0xc);
    }
  }
                    /* end of inlined section */
  erase__t7rb_tree5ZC17cSoundCacheHandleZt4pair2ZC17cSoundCacheHandleZiZt9select1st1Zt4pair2ZC17cSoundCacheHandleZiZt4less1ZC17cSoundCacheHandleZt23__malloc_alloc_template1i0Gt18__rb_tree_iterator1Zt4pair2ZC17cSoundCacheHandleZiT1
            (this,first_00,last);
  return n;
}

__rb_tree_iterator<pair<const cSoundCacheHandle,int> > rb_tree<cSoundCacheHandle, pair<cSoundCacheHandle, int>, select1st<pair<cSoundCacheHandle, int> >, less<cSoundCacheHandle>, __malloc_alloc_template<0> >::find(cSoundCacheHandle &k) {
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *y;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	cSoundCacheHandle &y;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	__rb_tree_node<pair<const cSoundCacheHandle,int> > *x;
	cSoundCacheHandle &x;
	rb_tree<const cSoundCacheHandle,pair<const cSoundCacheHandle,int>,select1st<pair<const cSoundCacheHandle,int> >,less<const cSoundCacheHandle>,__malloc_alloc_template<0> > *this;
	
  __rb_tree_node_pair_const_cSoundCacheHandle_int___ *p_Var1;
  __rb_tree_node_pair_const_cSoundCacheHandle_int___ *p_Var2;
  bool bVar3;
  __rb_tree_base_iterator _Var4;
  
  p_Var1 = this->header;
  p_Var2 = *(__rb_tree_node_pair_const_cSoundCacheHandle_int___ **)&this->header->field0_0x0;
  while (p_Var2 != (__rb_tree_node_pair_const_cSoundCacheHandle_int___ *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
    bVar3 = __lt__C17cSoundCacheHandleRC17cSoundCacheHandle(&(p_Var2->value_field).first,k);
                    /* end of inlined section */
    if (bVar3) {
      p_Var2 = *(__rb_tree_node_pair_const_cSoundCacheHandle_int___ **)&p_Var2->field0_0x0;
    }
    else {
      p_Var1 = p_Var2;
      p_Var2 = *(__rb_tree_node_pair_const_cSoundCacheHandle_int___ **)&p_Var2->field0_0x0;
    }
  }
  _Var4.node = &this->header->field0_0x0;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
                    /* end of inlined section */
  if ((p_Var1 != this->header) &&
     (bVar3 = __lt__C17cSoundCacheHandleRC17cSoundCacheHandle(k,&(p_Var1->value_field).first),
     _Var4.node = &p_Var1->field0_0x0, bVar3)) {
    _Var4.node = (__rb_tree_node_base *)this->header;
  }
  return (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var4.node;
}

GlobalHitlist* snd::GlobalHitlist * FindAudioRes<snd::GlobalHitlist>(GlobalHitlist *begin, GlobalHitlist *end, u16 id) {
	int iCmp;
	GlobalHitlist *middle;
	
  GlobalHitlist *end_00;
  int iVar1;
  uint uVar2;
  
  uVar2 = (int)id & 0xffff;
  iVar1 = (int)end - (int)begin >> 3;
  end_00 = (GlobalHitlist *)0x0;
  if (0 < iVar1) {
    if (iVar1 == 1) {
      end_00 = (GlobalHitlist *)0x0;
      if ((ushort)begin->id == uVar2) {
        end_00 = begin;
      }
    }
    else {
      end_00 = begin + (iVar1 - ((int)end - (int)begin >> 0x1f) >> 1);
      if (uVar2 != (ushort)end_00->id) {
        if (0 < (int)(uVar2 - (ushort)end_00->id)) {
          begin = end_00 + 1;
          end_00 = end;
        }
        end_00 = FindAudioRes__H1ZCQ23snd13GlobalHitlist_PX01T0Us_PX01(begin,end_00,(short)uVar2);
      }
    }
  }
  return end_00;
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
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
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
                    /* inlined from c:/eor/src2/games/sims/MSrc/Function.h */
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
LAB_0027de3c:
          p_Var9 = (pAddress.node)->right;
        }
        else {
          p_Var8 = (_Var1.node)->right;
          if (p_Var8 != (__rb_tree_node_base *)0x0) {
            if (p_Var8->left != (__rb_tree_node_base *)0x0) {
              for (pAddress.node = p_Var8->left; (pAddress.node)->left != (__rb_tree_node_base *)0x0
                  ; pAddress.node = (pAddress.node)->left) {
              }
              goto LAB_0027de3c;
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
            goto LAB_0027dfa0;
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
                    /* inlined from algobase.h */
          iVar5 = *(int *)pAddress.node;
                    /* end of inlined section */
          (pAddress.node)->parent = (_Var1.node)->parent;
                    /* inlined from algobase.h */
          *(int *)pAddress.node = *(int *)_Var1.node;
          *(int *)_Var1.node = iVar5;
          pAddress.node = _Var1.node;
                    /* end of inlined section */
LAB_0027dfa0:
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
LAB_0027e054:
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
                if (*(int *)p_Var2 != 1) goto LAB_0027e054;
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
LAB_0027e1d0:
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
                if (*(int *)p_Var2 != 1) goto LAB_0027e1d0;
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
                    /* inlined from algobase.h */
                    /* end of inlined section */
  n = 0;
                    /* inlined from algobase.h */
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
                    /* inlined from algobase.h */
      if (first.field0_0x0.node == last.field0_0x0.node) break;
      _Var2.node = *(__rb_tree_node_base **)((int)first.field0_0x0.node + 0xc);
    }
  }
                    /* end of inlined section */
  erase__t7rb_tree5ZCiZt4pair2ZCiZiZt9select1st1Zt4pair2ZCiZiZt4less1ZCiZt23__malloc_alloc_template1i0Gt18__rb_tree_iterator1Zt4pair2ZCiZiT1
            (this,first_00,last);
  return n;
}

Track* snd::Track * FindAudioRes<snd::Track>(Track *begin, Track *end, u16 id) {
	int iCmp;
	Track *middle;
	
  Track *end_00;
  int iVar1;
  uint uVar2;
  
  uVar2 = (int)id & 0xffff;
  iVar1 = (int)end - (int)begin >> 4;
  end_00 = (Track *)0x0;
  if (0 < iVar1) {
    if (iVar1 == 1) {
      end_00 = (Track *)0x0;
      if ((ushort)begin->id == uVar2) {
        end_00 = begin;
      }
    }
    else {
      end_00 = begin + (iVar1 - ((int)end - (int)begin >> 0x1f) >> 1);
      if (uVar2 != (ushort)end_00->id) {
        if (0 < (int)(uVar2 - (ushort)end_00->id)) {
          begin = end_00 + 1;
          end_00 = end;
        }
        end_00 = FindAudioRes__H1ZCQ23snd5Track_PX01T0Us_PX01(begin,end_00,(short)uVar2);
      }
    }
  }
  return end_00;
}

Patch* snd::Patch * FindAudioRes<snd::Patch>(Patch *begin, Patch *end, u16 id) {
	int iCmp;
	Patch *middle;
	
  Patch *end_00;
  int iVar1;
  uint uVar2;
  
  uVar2 = (int)id & 0xffff;
  iVar1 = (int)end - (int)begin >> 3;
  end_00 = (Patch *)0x0;
  if (0 < iVar1) {
    if (iVar1 == 1) {
      end_00 = (Patch *)0x0;
      if ((ushort)begin->id == uVar2) {
        end_00 = begin;
      }
    }
    else {
      end_00 = begin + (iVar1 - ((int)end - (int)begin >> 0x1f) >> 1);
      if (uVar2 != (ushort)end_00->id) {
        if (0 < (int)(uVar2 - (ushort)end_00->id)) {
          begin = end_00 + 1;
          end_00 = end;
        }
        end_00 = FindAudioRes__H1ZCQ23snd5Patch_PX01T0Us_PX01(begin,end_00,(short)uVar2);
      }
    }
  }
  return end_00;
}

HitPatch* snd::HitPatch * FindAudioRes<snd::HitPatch>(HitPatch *begin, HitPatch *end, u16 id) {
	int iCmp;
	HitPatch *middle;
	
  int iVar1;
  HitPatch *pHVar2;
  HitPatch *begin_00;
  uint uVar3;
  int iVar4;
  
  iVar1 = ((int)end - (int)begin) * -0x55555555;
  uVar3 = (int)id & 0xffff;
  iVar4 = iVar1 >> 2;
  pHVar2 = (HitPatch *)0x0;
  if (0 < iVar4) {
    if (iVar4 == 1) {
      pHVar2 = (HitPatch *)0x0;
      if ((ushort)begin->id == uVar3) {
        pHVar2 = begin;
      }
    }
    else {
      pHVar2 = begin + (iVar4 - (iVar1 >> 0x1f) >> 1);
      if (uVar3 != (ushort)pHVar2->id) {
        begin_00 = pHVar2 + 1;
        if ((int)(uVar3 - (ushort)pHVar2->id) < 1) {
          begin_00 = begin;
          end = pHVar2;
        }
        pHVar2 = FindAudioRes__H1ZCQ23snd8HitPatch_PX01T0Us_PX01(begin_00,end,(short)uVar3);
      }
    }
  }
  return pHVar2;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
      ___12cRegisterSet(&TrackAttrDefaultsRegisterSet.field0_0x0,2);
      ___12cRegisterSet(&SndobAttrDefaultsRegisterSet.field0_0x0,2);
                    /* end of inlined section */
      ___12cRegisterSet(&GlobalAttrDefaultsRegisterSet.field0_0x0,2);
      ___12cRegisterSet(&GlobalVarRegisterSet,2);
      ___12cRegisterSet(&GlobalAttrRegisterSet.field0_0x0,2);
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
      GlobalAttrRegisterSet.field0_0x0._0_4_ = 0;
      GlobalVarRegisterSet._0_4_ = 0;
      GlobalAttrDefaultsRegisterSet.field0_0x0._0_4_ = 0;
      SndobAttrDefaultsRegisterSet.field0_0x0._0_4_ = 0;
                    /* end of inlined section */
      TrackAttrDefaultsRegisterSet.field0_0x0._0_4_ = 0;
    }
  }
  return;
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

void* cSoundObject::_dyncastimpl(SCID id) {
  cSoundObject__167_1004 *pcVar1;
  
  pcVar1 = (cSoundObject__167_1004 *)0x0;
  if (id == cSoundObjectID) {
    pcVar1 = this;
  }
  return pcVar1;
}

cSoundObject* cSoundObject::cSoundObject(Sint32 lClassId) {
  this->m_lClassId = lClassId;
  *(undefined4 *)&(this->m_SndobRegisterSet).field0_0x0 = 0;
  this->m_lRefCount = 0;
  this->m_lArgsType = 0;
  *(undefined4 *)&this->m_bIsPaused = 0;
  this->m_lSoundObjectFlag = -0x54523502;
  this->__vtable = (cSoundObject__167_1004__vtable *)_vt_12cSoundObject;
  Init__21cSndobAttrRegisterSetii(&this->m_SndobRegisterSet,0x1f,0x11);
  return this;
}

void cSoundObject::~cSoundObject(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (cSoundObject__167_1004__vtable *)_vt_12cSoundObject;
  ___12cRegisterSet(&(this->m_SndobRegisterSet).field0_0x0,2);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

Sint32 cSoundObject::ClassId() {
  return this->m_lClassId;
}

void cSoundObject::SetSoundObjectId(Sint32 lSndObId) {
  this->m_lSoundObjectId = lSndObId;
  return;
}

Sint32 cSoundObject::SoundObjectId() {
  return this->m_lSoundObjectId;
}

bool cSoundObject::SetInstanceId(Sint32 lInstanceId) {
  (this->m_SndobRegisterSet).m_lSource = lInstanceId;
  return true;
}

Sint32 cSoundObject::InstanceId() {
  return (this->m_SndobRegisterSet).m_lSource;
}

Sint32 cSoundObject::ArgsType() {
  return this->m_lArgsType;
}

SGUID cSoundObject::ResourceId() {
  return this->m_lResId;
}

void cSoundObject::HandleTimerCallback() {
  return;
}

bool cSoundObject::Update(Sint32 lArg1, Sint32 lArg2, Sint32 lArg3, Sint32 lArg4) {
  return true;
}

bool cSoundObject::IsPlaying() {
  return false;
}

bool cSoundObject::IsPaused() {
  return false;
}

cSndobAttrRegisterSet* cSoundObject::SndobRegisterSet() {
  return &this->m_SndobRegisterSet;
}

bool cSoundObject::SetRegister(Sint32 lRegisterId, Sint32 lValue, bool bDeferred) {
  bool bVar1;
  
  bVar1 = SetRegister__12cRegisterSetii(&(this->m_SndobRegisterSet).field0_0x0,lRegisterId,lValue);
  return bVar1;
}

Sint32 cSoundObject::RegisterVal(Sint32 lRegisterId) {
  int iVar1;
  
  iVar1 = RegisterVal__12cRegisterSeti(&(this->m_SndobRegisterSet).field0_0x0,lRegisterId);
  return iVar1;
}

bool cSoundObject::WantsViewChangeNotifications() {
  return false;
}

bool cSoundObject::Play(Sint32 lArg1, Sint32 lArg2, Sint32 lArg3) {
  return false;
}

bool cSoundObject::PlayPause(Sint32 lArg1, Sint32 lArg2, Sint32 lArg3) {
  return false;
}

Sint32 cSoundObject::GetRefCount() {
  return this->m_lRefCount;
}

void cHitControlGroup::~cHitControlGroup(int __in_chrg) {
	set<int,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> > *this;
	rb_tree<int,int,identity<int>,less<int>,__malloc_alloc_template<0> > *this;
	void *pAddress;
	void *pAddress;
	cSoundObject *this;
	int __in_chrg;
	void *pAddress;
	
  __rb_tree_node_int_ *p_Var1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.cpp */
  if ((this->m_TrackIdSet).t.node_count != 0) {
    __erase__t7rb_tree5ZiZiZt8identity1ZiZt4less1ZiZt23__malloc_alloc_template1i0Pt14__rb_tree_node1Zi
              (&(this->m_TrackIdSet).t,
               (__rb_tree_node_int_ *)(((this->m_TrackIdSet).t.header)->field0_0x0).parent);
    p_Var1 = (this->m_TrackIdSet).t.header;
    (p_Var1->field0_0x0).left = &p_Var1->field0_0x0;
    (((this->m_TrackIdSet).t.header)->field0_0x0).parent = (__rb_tree_node_base *)0x0;
    p_Var1 = (this->m_TrackIdSet).t.header;
    (p_Var1->field0_0x0).right = &p_Var1->field0_0x0;
    (this->m_TrackIdSet).t.node_count = 0;
  }
  free((this->m_TrackIdSet).t.header);
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (cSoundObject__107_1582__vtable *)_vt_12cSoundObject;
  ___12cRegisterSet(&(this->field0_0x0).m_SndobRegisterSet.field0_0x0,2);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

Sint32 cHitControlGroup::Volume() {
  return this->m_lVolume;
}

bool cHitControlGroup::Init() {
  return true;
}

bool cHitControlGroup::Shutdown() {
  return true;
}

bool cHitControlGroup::Play(Sint32 lArg1, Sint32 lArg2, Sint32 lArg3) {
  return true;
}

bool cHitControlGroup::Stop() {
  return true;
}

bool cHitControlGroup::Kill() {
  return true;
}

bool cHitControlGroup::SetPitch(Sint32 lPitch) {
  return true;
}

bool cHitControlGroup::SetPan(Sint32 lPanPos) {
  return true;
}

bool cHitControlGroup::SetFxType(Sint32 lFxType) {
  return true;
}

bool cHitControlGroup::SetFxLevel(Sint32 lFxLevel) {
  return true;
}

bool cHitControlGroup::Pause() {
  return true;
}

bool cHitControlGroup::Unpause() {
  return true;
}

bool cHitControlGroup::Load() {
  return true;
}

bool cHitControlGroup::Unload() {
  return true;
}

bool cHitControlGroup::Cache() {
  return true;
}

bool cHitControlGroup::Uncache() {
  return true;
}

bool cHitControlGroup::IsPlaying() {
  return true;
}

bool cHitControlGroup::IsPaused() {
  return true;
}

Sint32 cHitControlGroup::RegisterVal(Sint32 lRegisterId) {
  return 1;
}

cHitMan* cHitControlGroup::HitMan() {
  return g_pHitMan;
}

bool cHitControlGroup::HasTrack(Sint32 lSndobId) {
	__rb_tree_node<int> *x;
	
  __rb_tree_const_iterator_int_ _Var1;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  int local_30 [4];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/set.h */
  local_30[0] = lSndobId;
  _Var1 = find__Ct7rb_tree5ZiZiZt8identity1ZiZt4less1ZiZt23__malloc_alloc_template1i0RCi
                    (&(this->m_TrackIdSet).t,local_30);
                    /* end of inlined section */
                    /* inlined from Tree.h */
                    /* end of inlined section */
  return _Var1.field0_0x0.node != (__rb_tree_node_base *)(this->m_TrackIdSet).t.header;
}

void* cSamplePatch::_dyncastimpl(SCID id) {
	cSoundObject *this;
	SCID id;
	
  cSamplePatch *pcVar1;
  
  if (id == cSamplePatchID) {
    return this;
  }
  pcVar1 = (cSamplePatch *)0x0;
  if (id == cSoundObjectID) {
    pcVar1 = this;
  }
  return pcVar1;
}

bool cSamplePatch::Play(Sint32 lArg1, Sint32 lArg2, Sint32 lArg3) {
  return false;
}

bool cSamplePatch::Stop() {
  return true;
}

bool cSamplePatch::Kill() {
  return true;
}

bool cSamplePatch::Pause() {
  return true;
}

bool cSamplePatch::Unpause() {
  return true;
}

cIGZSnd* cSamplePatch::TempGetSnd() {
  return this->m_pSnd;
}

cIGZSndSys* cSamplePatch::GZSndSys() {
  cHitMan *pcVar1;
  
  pcVar1 = HitMan__12cSamplePatch(this);
  return pcVar1->m_pSndSys;
}

cHitMan* cSamplePatch::HitMan() {
  return g_pHitMan;
}

bool cSampleChannel::Init() {
  return true;
}

bool cSampleChannel::Play(Sint32 lArg1, Sint32 lArg2, Sint32 lArg3) {
  short sVar1;
  cSoundObject__107_1582__vtable *pcVar2;
  undefined uVar3;
  
  pcVar2 = (this->field0_0x0).__vtable;
  sVar1 = *(short *)(pcVar2 + 2);
  uVar3 = (*(code *)pcVar2[2]._dyncastimpl)
                    ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)sVar1,0,sVar1,lArg3);
  return (bool)uVar3;
}

bool cSampleChannel::Stop() {
  cSoundObject__107_1582__vtable *pcVar1;
  undefined uVar2;
  
  pcVar1 = (this->field0_0x0).__vtable;
  uVar2 = (*(code *)pcVar1[2].ClassId)
                    ((int)&(this->field0_0x0).m_lSoundObjectFlag +
                     (int)*(short *)&pcVar1[2].cSoundObject,0);
  return (bool)uVar2;
}

bool cSampleChannel::Kill() {
  cSoundObject__107_1582__vtable *pcVar1;
  undefined uVar2;
  
  pcVar1 = (this->field0_0x0).__vtable;
  uVar2 = (*(code *)pcVar1[1].Shutdown)
                    ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar1[1].Release
                    );
  return (bool)uVar2;
}

bool cSampleChannel::SetFxType(Sint32 lFxType) {
  return true;
}

bool cSampleChannel::SetFxLevel(Sint32 lFxLevel) {
  return true;
}

bool cSampleChannel::Load() {
  return true;
}

bool cSampleChannel::Unload() {
  return true;
}

bool cSampleChannel::Cache() {
  return true;
}

bool cSampleChannel::Uncache() {
  return true;
}

Sint32 cSampleChannel::RegisterVal(Sint32 lRegisterId) {
  return 0;
}

bool cSampleChannel::IsPaused() {
  return SUB41(*(undefined4 *)&(this->field0_0x0).m_bIsPaused,0);
}

void cTrackPlayer::~cTrackPlayer(int __in_chrg) {
	cSoundObject *this;
	int __in_chrg;
	void *pAddress;
	
  (this->field0_0x0).__vtable = (cSoundObject__107_1582__vtable *)_vt_12cTrackPlayer;
  ___12cRegisterSet(&this->m_VarRegisterSet,2);
  ___12cRegisterSet(&(this->m_AttrRegisterSet).field0_0x0,2);
  (this->field0_0x0).__vtable = (cSoundObject__107_1582__vtable *)_vt_12cSoundObject;
  ___12cRegisterSet(&(this->field0_0x0).m_SndobRegisterSet.field0_0x0,2);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

bool cTrackPlayer::Update() {
  return true;
}

bool cTrackPlayer::IsPlaying() {
  return SUB41(*(undefined4 *)&this->m_bIsPlaying,0);
}

bool cTrackPlayer::IsPaused() {
  return this->m_lPauseRefs != 0;
}

bool cTrackPlayer::SetVolume(Sint32 lVolume) {
  cSoundObject__107_1582__vtable *pcVar1;
  undefined uVar2;
  
  pcVar1 = (this->field0_0x0).__vtable;
  uVar2 = (*(code *)pcVar1->Kill)
                    ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar1->Stop,0x13
                     ,lVolume,0);
  return (bool)uVar2;
}

bool cTrackPlayer::SetPitch(Sint32 lPitch) {
  cSoundObject__107_1582__vtable *pcVar1;
  undefined uVar2;
  
  pcVar1 = (this->field0_0x0).__vtable;
  uVar2 = (*(code *)pcVar1->Kill)
                    ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar1->Stop,0x15
                     ,lPitch,0);
  return (bool)uVar2;
}

bool cTrackPlayer::SetPan(Sint32 lPanPos) {
  cSoundObject__107_1582__vtable *pcVar1;
  undefined uVar2;
  
  pcVar1 = (this->field0_0x0).__vtable;
  uVar2 = (*(code *)pcVar1->Kill)
                    ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar1->Stop,0x14
                     ,lPanPos,0);
  return (bool)uVar2;
}

bool cTrackPlayer::SetFxType(Sint32 lFxType) {
  cSoundObject__107_1582__vtable *pcVar1;
  undefined uVar2;
  
  pcVar1 = (this->field0_0x0).__vtable;
  uVar2 = (*(code *)pcVar1->Kill)
                    ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar1->Stop,0x17
                     ,lFxType,0);
  return (bool)uVar2;
}

bool cTrackPlayer::SetFxLevel(Sint32 lFxLevel) {
  cSoundObject__107_1582__vtable *pcVar1;
  undefined uVar2;
  
  pcVar1 = (this->field0_0x0).__vtable;
  uVar2 = (*(code *)pcVar1->Kill)
                    ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar1->Stop,0x18
                     ,lFxLevel,0);
  return (bool)uVar2;
}

cSoundCacheHandle cTrackPlayer::Track() {
  return (cSoundCacheHandle)(this->m_pTrack).m_id;
}

cHitMan* cTrackPlayer::HitMan() {
  return g_pHitMan;
}

cIGZSndSys* cTrackPlayer::SndSys() {
	cHitMan *this;
	
  return g_pHitMan->m_pSndSys;
}

cHitTimer* cTrackPlayer::Timer() {
  return &g_pHitMan->m_Timer;
}

HitTimeVal cTrackPlayer::Time() {
  return (g_pHitMan->m_Timer).m_lElapsed;
}

void cTrackPlayer::Error() {
  cSoundObject__107_1582__vtable *pcVar1;
  
  pcVar1 = (this->field0_0x0).__vtable;
  (*(code *)pcVar1[1].Shutdown)
            ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar1[1].Release);
  return;
}

void cTrackPlayer::Assert(Sint32 lValue) {
  cSoundObject__107_1582__vtable *pcVar1;
  
  pcVar1 = (this->field0_0x0).__vtable;
  (*(code *)pcVar1[1].Shutdown)
            ((int)&(this->field0_0x0).m_lSoundObjectFlag + (int)*(short *)&pcVar1[1].Release);
  return;
}

cSampleChannel* cTrackPlayer::Channel(Sint32 lNoteNum) {
  return this->m_pChannel;
}

TrackDataReader cTrackPlayer::PlayPos() {
  int in_a1_lo;
  
  __15TrackDataReaderRC15TrackDataReader
            ((TrackDataReader *)this,(TrackDataReader *)(in_a1_lo + 0x1a0));
  return (TrackDataReader)(long)(int)this;
}

RegUnion& cTrackPlayer::ReadCommand() {
  RegUnion *pRVar1;
  
  pRVar1 = ReadCommand__15TrackDataReader(&this->m_tdrPlayPos);
  return pRVar1;
}

Sint32 cTrackPlayer::CheckedRegId(Sint32 lRegId) {
	cTrackPlayer *this;
	
  if (0x7f < lRegId) {
    HandleTrackFlowError__7cHitManP12cTrackPlayerPc(g_pHitMan,this,"Illegal Register Id");
    lRegId = 1;
  }
  return lRegId;
}

void cTrack::~cTrack(int __in_chrg) {
	cTrackPlayer *this;
	cSoundObject *this;
	void *pAddress;
	
  (this->field0_0x0).field0_0x0.__vtable = (cSoundObject__107_1582__vtable *)_vt_6cTrack;
  ___12cRegisterSet(&(this->m_TrackDefSndobRegisterSet).field0_0x0,2);
  ___12cRegisterSet(&(this->m_TrackDefRegisterSet).field0_0x0,2);
  (this->field0_0x0).field0_0x0.__vtable = (cSoundObject__107_1582__vtable *)_vt_12cTrackPlayer;
  ___12cRegisterSet(&(this->field0_0x0).m_VarRegisterSet,2);
  ___12cRegisterSet(&(this->field0_0x0).m_AttrRegisterSet.field0_0x0,2);
  (this->field0_0x0).field0_0x0.__vtable = (cSoundObject__107_1582__vtable *)_vt_12cSoundObject;
  ___12cRegisterSet(&(this->field0_0x0).field0_0x0.m_SndobRegisterSet.field0_0x0,2);
  if ((__in_chrg & 1U) != 0) {
    __dl__6cTrackPv(this);
  }
  return;
}

TrackData& cTrack::StartPos() {
  return this->m_pTrackData;
}

cTrackAttrRegisterSet* cTrack::TrackDefRegisterSet() {
  return &this->m_TrackDefRegisterSet;
}

cSndobAttrRegisterSet* cTrack::TrackDefSndobRegisterSet() {
  return &this->m_TrackDefSndobRegisterSet;
}

Sint32 cTrack::TrackDefRegisterVal(Sint32 lRegisterId) {
  int iVar1;
  
  iVar1 = RegisterVal__12cRegisterSeti(&(this->m_TrackDefSndobRegisterSet).field0_0x0,lRegisterId);
  return iVar1;
}

bool cTrack::WantsViewChangeNotifications() {
  return true;
}

Sint32 cTrack::ControlGroupId() {
  return this->m_lControlGroupId;
}

Sint32 cTrack::HitListID() {
  return this->m_lHitListId;
}

void* cSamplePatch::operator new(unsigned int size) {
	cHitMan *this;
	TFixedPool<cSamplePatch,64> *this;
	EFixedPool *this;
	void *p;
	
  void **ppvVar1;
  TFixedPool_cSamplePatch_64_ *pTVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_fixedpool.h */
  pTVar2 = &g_pHitMan->m_pSoundCache->m_samplePool;
  ppvVar1 = (void **)(pTVar2->field0_0x0).m_pFreeObjHead;
  if (ppvVar1 != (void **)0x0) {
    (pTVar2->field0_0x0).m_pFreeObjHead = *ppvVar1;
  }
                    /* end of inlined section */
  return ppvVar1;
}

void cSamplePatch::operator delete(void *ptr) {
	cHitMan *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
  onPatchDelete__11cSoundCacheP12cSamplePatch(g_pHitMan->m_pSoundCache,(cSamplePatch *)ptr);
  return;
}

void* cTrack::operator new(unsigned int size) {
	cHitMan *this;
	void *p;
	
  void **ppvVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
  ppvVar1 = (void **)(g_pHitMan->m_pSoundCache->m_trackPool).field0_0x0.m_pFreeObjHead;
  if (ppvVar1 != (void **)0x0) {
    (g_pHitMan->m_pSoundCache->m_trackPool).field0_0x0.m_pFreeObjHead = *ppvVar1;
  }
                    /* end of inlined section */
  return ppvVar1;
}

void cTrack::operator delete(void *ptr) {
	cHitMan *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/patch.h */
                    /* end of inlined section */
  onTrackDelete__11cSoundCacheP6cTrack(g_pHitMan->m_pSoundCache,(cTrack *)ptr);
  return;
}

void global constructors keyed to GlobalAttrRegisterSet() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to GlobalAttrRegisterSet() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}

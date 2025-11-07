// STATUS: NOT STARTED

#include "gzsndsys.h"

typedef HashList<cSoundCacheItem,unsigned int,256> CacheList;

struct HashList<cSoundCacheItem,unsigned int,256> {
	cSoundCacheItem *table[256];
	
	HashList<cSoundCacheItem,unsigned int,256>& operator=();
	HashList();
	HashList();
	HashList(HashList<cSoundCacheItem,unsigned int,256>*, int, void);
private:
	void resetHash(HashList<cSoundCacheItem,unsigned int,256>*, int, void);
	int getSize();
public:
	void clear();
	int size();
	void addNode();
	void addNode();
	void removeNode();
	void deleteItem();
	cSoundCacheItem* findItem();
	cSoundCacheItem* findItem();
	HashIterator<cSoundCacheItem,unsigned int,256> find();
	HashIterator<cSoundCacheItem,unsigned int,256> find();
	HashIterator<cSoundCacheItem,unsigned int,256> begin();
	HashIterator<cSoundCacheItem,unsigned int,256> end();
};

struct cSoundCacheItem {
private:
	u32 m_uResID;
	bool m_bLooping;
	u32 m_uRefCount;
	u32 m_uLastTimeUsed;
	bool m_bWaitingOnLoad;
	bool m_bSampleLoaded;
	u32 m_uRetryTicks;
	static int _iNumWaitingOnLoad;
	cSoundCacheItem *pNextHash;
	
public:
	cSoundCacheItem& operator=();
	cSoundCacheItem(u32 resID, bool bLooping);
	cSoundCacheItem();
	cSoundCacheItem(cSoundCacheItem*, int, void);
	void destroy();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	u32 hash();
	bool compare();
	bool CanUnload();
	bool IsLoaded();
	u32 AddRef();
	u32 DelRef();
	void ResetUsageTimer();
	u32 GetLastTimeUsed();
	bool HasBeenWaitingForAWhile();
	bool IsLooping();
	void Update();
};

struct cGZSnd : cIGZSnd {
	u32 m_uRefCount;
	bool m_bLooping;
	bool m_bWaitingOnLoad;
	bool m_bPlayRequested;
	bool m_bPauseRequested;
	u32 m_uResID;
	cSoundCacheItem *m_pCacheItem;
	EVOICE m_voice;
	Sint32 m_volume;
	Sint32 m_pan;
	Sint32 m_iFadeTicks;
	Sint32 m_iVolumeLastSet;
	cGZSnd *m_pNext;
	
	cGZSnd& operator=();
	cGZSnd();
	cGZSnd();
	/* vtable[19] */ virtual cGZSnd(cGZSnd*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	/* vtable[1] */ virtual bool Init();
	/* vtable[2] */ virtual u32 AddRef();
	/* vtable[3] */ virtual u32 Release();
	/* vtable[4] */ virtual bool Play();
	/* vtable[5] */ virtual bool IsPlaying();
	/* vtable[6] */ virtual bool Stop();
	/* vtable[7] */ virtual bool Pause();
	/* vtable[8] */ virtual bool Unpause();
	/* vtable[9] */ virtual bool Load();
	/* vtable[10] */ virtual bool Unload();
	/* vtable[11] */ virtual Sint32 GetVolume();
	/* vtable[12] */ virtual bool SetVolume(Sint32 lNewVolume);
	/* vtable[13] */ virtual bool FadeVolume(Sint32 lStartingVolume, Sint32 lEndingVolume, Uint32 lMilliseconds);
	/* vtable[14] */ virtual Sint32 GetPan();
	/* vtable[15] */ virtual bool SetPan(Sint32 lNewPan);
	/* vtable[16] */ virtual Sint32 GetFrequency();
	/* vtable[17] */ virtual bool SetFrequency(Sint32 lNewFrequency);
	/* vtable[18] */ virtual bool SetPosition(Uint32 lNewPosition);
	void reset();
	void getLRVolume(s32 volume, float &lVol, float &rVol);
	bool setVolume(Sint32 lNewVolume);
};

struct cGZMusic : cIGZSnd {
	u32 m_uRefCount;
	bool m_bLooping;
	bool m_bPlaying;
	u32 m_uResID;
	Sint32 m_volume;
	Sint32 m_pan;
	Sint32 m_iFadeTicks;
	cGZMusic *m_pNext;
	
	cGZMusic& operator=();
	cGZMusic();
	cGZMusic();
	/* vtable[19] */ virtual cGZMusic(cGZMusic*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	/* vtable[1] */ virtual bool Init();
	/* vtable[2] */ virtual u32 AddRef();
	/* vtable[3] */ virtual u32 Release();
	/* vtable[4] */ virtual bool Play();
	/* vtable[5] */ virtual bool IsPlaying();
	/* vtable[6] */ virtual bool Stop();
	/* vtable[7] */ virtual bool Pause();
	/* vtable[8] */ virtual bool Unpause();
	/* vtable[9] */ virtual bool Load();
	/* vtable[10] */ virtual bool Unload();
	/* vtable[11] */ virtual Sint32 GetVolume();
	/* vtable[12] */ virtual bool SetVolume(Sint32 lNewVolume);
	/* vtable[13] */ virtual bool FadeVolume(Sint32 lStartingVolume, Sint32 lEndingVolume, Uint32 lMilliseconds);
	/* vtable[14] */ virtual Sint32 GetPan();
	/* vtable[15] */ virtual bool SetPan(Sint32 lNewPan);
	/* vtable[16] */ virtual Sint32 GetFrequency();
	/* vtable[17] */ virtual bool SetFrequency(Sint32 lNewFrequency);
	/* vtable[18] */ virtual bool SetPosition(Uint32 lNewPosition);
	void reset();
	float getLRVolume();
	float getPanSetting();
	bool setVolume(Sint32 lNewVolume);
};

struct cGZSndSys : cIGZSndSys {
	CacheList m_cacheList;
	cGZSnd *m_pSndList;
	cGZMusic *m_pMusicList;
	cGZMusic *m_pCurrentMusic;
	Sint32 m_iFadeTicks;
	bool m_bStopLoadLoopRequested;
	bool m_bMusicPaused;
	
	cGZSndSys& operator=();
	cGZSndSys();
	cGZSndSys();
	/* vtable[1] */ virtual cGZSndSys(cGZSndSys*, int, void);
	/* vtable[2] */ virtual bool Initialize();
	/* vtable[3] */ virtual void Update();
	/* vtable[4] */ virtual cIGZSnd* CreateSoundEffect(u32 sampleID, bool bLooping, bool bCache);
	/* vtable[5] */ virtual cIGZSnd* CreateAudioStream(u32 audioStreamID, bool bLooping);
	/* vtable[6] */ virtual void StopLoadLoop();
	void addToList(cGZMusic *pMusic);
	void removeFromList(cGZMusic *pMusic);
	void addToList();
	void removeFromList();
	void preloadMusic();
	void unloadMusic();
	void killDeadSounds();
};

struct vector<cGZSnd *,__malloc_alloc_template<0> > {
protected:
	cGZSnd **start;
	cGZSnd **finish;
	cGZSnd **end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	cGZSnd** begin();
	cGZSnd** begin();
	cGZSnd** end();
	cGZSnd** end();
	reverse_iterator<cGZSnd **,cGZSnd *,cGZSnd *&,int> rbegin();
	reverse_iterator<cGZSnd *const *,cGZSnd *,cGZSnd *const &,int> rbegin();
	reverse_iterator<cGZSnd **,cGZSnd *,cGZSnd *&,int> rend();
	reverse_iterator<cGZSnd *const *,cGZSnd *,cGZSnd *const &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	cGZSnd*& operator[]();
	cGZSnd*& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<cGZSnd *,__malloc_alloc_template<0> >*, int, void);
	vector<cGZSnd *,__malloc_alloc_template<0> >& operator=();
	void reserve();
	cGZSnd*& front();
	cGZSnd*& front();
	cGZSnd*& back();
	cGZSnd*& back();
	void push_back();
	void swap();
	cGZSnd** insert();
	cGZSnd** insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct simple_alloc<cGZSnd *,__malloc_alloc_template<0> > {
	simple_alloc<cGZSnd *,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static cGZSnd** allocate(/* parameters unknown */);
	static cGZSnd** allocate(/* parameters unknown */);
	static cGZSnd** allocate(/* parameters unknown */);
	static cGZSnd** allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct HashIterator<cSoundCacheItem,unsigned int,256> {
	HashList<cSoundCacheItem,unsigned int,256> *pList;
	int i;
	cSoundCacheItem *node;
	
	HashIterator<cSoundCacheItem,unsigned int,256>& operator=();
	HashIterator();
	HashIterator();
	cSoundCacheItem** operator++();
	bool operator==();
	bool operator!=();
	cSoundCacheItem** operator cSoundCacheItem **();
};

struct vector<cSoundCacheItem *,__malloc_alloc_template<0> > {
protected:
	cSoundCacheItem **start;
	cSoundCacheItem **finish;
	cSoundCacheItem **end_of_storage;
	
	void insert_aux();
	void deallocate();
public:
	cSoundCacheItem** begin();
	cSoundCacheItem** begin();
	cSoundCacheItem** end();
	cSoundCacheItem** end();
	reverse_iterator<cSoundCacheItem **,cSoundCacheItem *,cSoundCacheItem *&,int> rbegin();
	reverse_iterator<cSoundCacheItem *const *,cSoundCacheItem *,cSoundCacheItem *const &,int> rbegin();
	reverse_iterator<cSoundCacheItem **,cSoundCacheItem *,cSoundCacheItem *&,int> rend();
	reverse_iterator<cSoundCacheItem *const *,cSoundCacheItem *,cSoundCacheItem *const &,int> rend();
	unsigned int size();
	unsigned int max_size();
	unsigned int capacity();
	bool empty();
	cSoundCacheItem*& operator[]();
	cSoundCacheItem*& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector();
	vector(vector<cSoundCacheItem *,__malloc_alloc_template<0> >*, int, void);
	vector<cSoundCacheItem *,__malloc_alloc_template<0> >& operator=();
	void reserve();
	cSoundCacheItem*& front();
	cSoundCacheItem*& front();
	cSoundCacheItem*& back();
	cSoundCacheItem*& back();
	void push_back();
	void swap();
	cSoundCacheItem** insert();
	cSoundCacheItem** insert();
	void insert();
	void insert();
	void pop_back();
	void erase();
	void erase();
	void resize();
	void resize();
	void clear();
};

struct simple_alloc<cSoundCacheItem *,__malloc_alloc_template<0> > {
	simple_alloc<cSoundCacheItem *,__malloc_alloc_template<0> >& operator=();
	simple_alloc();
	simple_alloc();
	static cSoundCacheItem** allocate(/* parameters unknown */);
	static cSoundCacheItem** allocate(/* parameters unknown */);
	static cSoundCacheItem** allocate(/* parameters unknown */);
	static cSoundCacheItem** allocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
	static void deallocate(/* parameters unknown */);
};

struct MusicNode {
	EAudioStreamSymbol musicID;
	bool bIsMonoChannel;
};

static MusicNode _musicID[22] = {
	/* [0] = */ {
		/* .musicID = */ BEAUMONT_AUDIOSTREAM,
		/* .bIsMonoChannel = */ true
	},
	/* [1] = */ {
		/* .musicID = */ BUILD1_AUDIOSTREAM,
		/* .bIsMonoChannel = */ false
	},
	/* [2] = */ {
		/* .musicID = */ BUILD2_AUDIOSTREAM,
		/* .bIsMonoChannel = */ false
	},
	/* [3] = */ {
		/* .musicID = */ BUILD3_AUDIOSTREAM,
		/* .bIsMonoChannel = */ false
	},
	/* [4] = */ {
		/* .musicID = */ BUY1_AUDIOSTREAM,
		/* .bIsMonoChannel = */ false
	},
	/* [5] = */ {
		/* .musicID = */ BUY2_AUDIOSTREAM,
		/* .bIsMonoChannel = */ false
	},
	/* [6] = */ {
		/* .musicID = */ BUY3_AUDIOSTREAM,
		/* .bIsMonoChannel = */ false
	},
	/* [7] = */ {
		/* .musicID = */ DEVILSDREAM_AUDIOSTREAM,
		/* .bIsMonoChannel = */ true
	},
	/* [8] = */ {
		/* .musicID = */ LOADLOOP_AUDIOSTREAM,
		/* .bIsMonoChannel = */ false
	},
	/* [9] = */ {
		/* .musicID = */ NHOOD1_AUDIOSTREAM,
		/* .bIsMonoChannel = */ false
	},
	/* [10] = */ {
		/* .musicID = */ NHOOD2_AUDIOSTREAM,
		/* .bIsMonoChannel = */ false
	},
	/* [11] = */ {
		/* .musicID = */ NHOOD3_AUDIOSTREAM,
		/* .bIsMonoChannel = */ false
	},
	/* [12] = */ {
		/* .musicID = */ ROCK1_AUDIOSTREAM,
		/* .bIsMonoChannel = */ true
	},
	/* [13] = */ {
		/* .musicID = */ ROCK2_AUDIOSTREAM,
		/* .bIsMonoChannel = */ true
	},
	/* [14] = */ {
		/* .musicID = */ ROCK3_AUDIOSTREAM,
		/* .bIsMonoChannel = */ true
	},
	/* [15] = */ {
		/* .musicID = */ SALLYGOODIN_AUDIOSTREAM,
		/* .bIsMonoChannel = */ true
	},
	/* [16] = */ {
		/* .musicID = */ SHP_COUNTRY1_AUDIOSTREAM,
		/* .bIsMonoChannel = */ true
	},
	/* [17] = */ {
		/* .musicID = */ SHP_COUNTRY2_AUDIOSTREAM,
		/* .bIsMonoChannel = */ true
	},
	/* [18] = */ {
		/* .musicID = */ SHP_COUNTRY5_AUDIOSTREAM,
		/* .bIsMonoChannel = */ true
	},
	/* [19] = */ {
		/* .musicID = */ SHP_RAP1_AUDIOSTREAM,
		/* .bIsMonoChannel = */ true
	},
	/* [20] = */ {
		/* .musicID = */ SHP_RAP2_AUDIOSTREAM,
		/* .bIsMonoChannel = */ true
	},
	/* [21] = */ {
		/* .musicID = */ SHP_RAP3_AUDIOSTREAM,
		/* .bIsMonoChannel = */ true
	}
};

__vtbl_ptr_type cGZSndSys virtual table[8] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZSndSys::~cGZSndSys,
		/* .__delta2 = */ -3552
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZSndSys::Initialize,
		/* .__delta2 = */ -3312
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZSndSys::Update,
		/* .__delta2 = */ -2568
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZSndSys::CreateSoundEffect,
		/* .__delta2 = */ -3280
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZSndSys::CreateAudioStream,
		/* .__delta2 = */ -3176
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZSndSys::StopLoadLoop,
		/* .__delta2 = */ 5448
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type cGZMusic virtual table[21] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZMusic::Init,
		/* .__delta2 = */ 2528
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZMusic::AddRef,
		/* .__delta2 = */ 2536
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZMusic::Release,
		/* .__delta2 = */ 2552
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZMusic::Play,
		/* .__delta2 = */ 2664
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZMusic::IsPlaying,
		/* .__delta2 = */ 2952
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZMusic::Stop,
		/* .__delta2 = */ 2960
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZMusic::Pause,
		/* .__delta2 = */ 3032
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZMusic::Unpause,
		/* .__delta2 = */ 3120
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZMusic::Load,
		/* .__delta2 = */ 3208
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZMusic::Unload,
		/* .__delta2 = */ 3216
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZMusic::GetVolume,
		/* .__delta2 = */ 3224
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZMusic::SetVolume,
		/* .__delta2 = */ 3232
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZMusic::FadeVolume,
		/* .__delta2 = */ 3504
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZMusic::GetPan,
		/* .__delta2 = */ 3680
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZMusic::SetPan,
		/* .__delta2 = */ 3688
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZMusic::GetFrequency,
		/* .__delta2 = */ 3912
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZMusic::SetFrequency,
		/* .__delta2 = */ 3920
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZMusic::SetPosition,
		/* .__delta2 = */ 3928
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZMusic::~cGZMusic,
		/* .__delta2 = */ 2432
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type cGZSnd virtual table[21] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZSnd::Init,
		/* .__delta2 = */ 224
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZSnd::AddRef,
		/* .__delta2 = */ 400
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZSnd::Release,
		/* .__delta2 = */ 232
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZSnd::Play,
		/* .__delta2 = */ 416
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZSnd::IsPlaying,
		/* .__delta2 = */ 968
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZSnd::Stop,
		/* .__delta2 = */ 1088
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZSnd::Pause,
		/* .__delta2 = */ 1184
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZSnd::Unpause,
		/* .__delta2 = */ 1280
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZSnd::Load,
		/* .__delta2 = */ 1384
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZSnd::Unload,
		/* .__delta2 = */ 1392
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZSnd::GetVolume,
		/* .__delta2 = */ 1400
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZSnd::SetVolume,
		/* .__delta2 = */ 1408
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZSnd::FadeVolume,
		/* .__delta2 = */ 1648
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZSnd::GetPan,
		/* .__delta2 = */ 1784
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZSnd::SetPan,
		/* .__delta2 = */ 1792
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZSnd::GetFrequency,
		/* .__delta2 = */ 1984
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZSnd::SetFrequency,
		/* .__delta2 = */ 1992
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZSnd::SetPosition,
		/* .__delta2 = */ 2000
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cGZSnd::~cGZSnd,
		/* .__delta2 = */ 128
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type cIGZSndSys virtual table[8] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &cIGZSndSys::~cIGZSndSys,
		/* .__delta2 = */ -3696
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

static cGZSndSys *_gzSndSys;
int cSoundCacheItem::_iNumWaitingOnLoad;

cIGZSndSys* cIGZSndSys::CreateInstance() {
  cGZSndSys *this;
  
  this = (cGZSndSys *)__builtin_new(0x41c);
  _gzSndSys = __9cGZSndSys(this);
  return &_gzSndSys->field0_0x0;
}

cSoundCacheItem* cSoundCacheItem::cSoundCacheItem(u32 resID, bool bLooping) {
  this->m_uResID = resID;
  *(int *)&this->m_bLooping = (int)bLooping;
  return this;
}

void cSoundCacheItem::ResetUsageTimer() {
  uint uVar1;
  
  uVar1 = timeGetTime__Fv();
  this->m_uLastTimeUsed = uVar1;
  return;
}

void cSoundCacheItem::Update() {
	ERSampledata *pSample;
	ERSampledata *this;
	
  EResourceManager__vtable *pEVar1;
  EAudioSampleManager *pEVar2;
  uint uVar3;
  long lVar4;
  
  pEVar2 = _pAudiosampleman;
  if (*(int *)&this->m_bSampleLoaded != 0) {
    return;
  }
  if (*(int *)&this->m_bWaitingOnLoad == 0) {
    uVar3 = this->m_uRetryTicks - 1;
    if (this->m_uRetryTicks == 0) {
      if (_15cSoundCacheItem__iNumWaitingOnLoad < 4) {
        _15cSoundCacheItem__iNumWaitingOnLoad = _15cSoundCacheItem__iNumWaitingOnLoad + 1;
        *(undefined4 *)&this->m_bWaitingOnLoad = 1;
        pEVar1 = (pEVar2->field0_0x0).__vtable;
        (*(code *)pEVar1[2].Shutdown)
                  ((int)&(pEVar2->field0_0x0).m_dataMutex.field0_0x0.__vtable +
                   (int)*(short *)&pEVar1[2].Init,this->m_uResID,*(undefined4 *)&this->m_bLooping);
        return;
      }
      uVar3 = 0x12f;
    }
  }
  else {
    pEVar1 = (_pAudiosampleman->field0_0x0).__vtable;
    lVar4 = (*(code *)pEVar1[2].AllocateAndLoadResource)
                      ((int)&(_pAudiosampleman->field0_0x0).m_dataMutex.field0_0x0.__vtable +
                       (int)*(short *)&pEVar1[2].AllocateAndLoadResource,this->m_uResID,0);
    if (lVar4 == 0) {
      return;
    }
    *(undefined4 *)&this->m_bWaitingOnLoad = 0;
                    /* inlined from /eor/src2/engine/audiosample/e_raudiosample.h */
                    /* end of inlined section */
    _15cSoundCacheItem__iNumWaitingOnLoad = _15cSoundCacheItem__iNumWaitingOnLoad + -1;
    if ((((EResource *)lVar4)[1].field0_0x0.__vtable)->GetTypeInfo != (undefined *)0x5000) {
      *(undefined4 *)&this->m_bSampleLoaded = 1;
      return;
    }
    DelRef__9EResource((EResource *)lVar4);
    uVar3 = 0x12f;
  }
  this->m_uRetryTicks = uVar3;
  return;
}

void cSoundCacheItem::~cSoundCacheItem(int __in_chrg) {
	void *ptr;
	
  if (*(int *)&this->m_bSampleLoaded != 0) {
    DelRef__16EResourceManagerUi(&_pAudiosampleman->field0_0x0,this->m_uResID);
  }
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/gzsndsys.h */
    free(this);
                    /* end of inlined section */
  }
  return;
}

void cIGZSndSys::~cIGZSndSys(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (cIGZSndSys__vtable *)_vt_10cIGZSndSys;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

cGZSndSys* cGZSndSys::cGZSndSys() {
	cIGZSndSys *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashList.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (cIGZSndSys__vtable *)_vt_9cGZSndSys;
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashList.h */
  memset(&this->m_cacheList,0,0x400);
                    /* end of inlined section */
  this->m_iFadeTicks = 0x3c;
  this->m_pSndList = (cGZSnd *)0x0;
  this->m_pMusicList = (cGZMusic *)0x0;
  this->m_pCurrentMusic = (cGZMusic *)0x0;
  *(undefined4 *)&this->m_bStopLoadLoopRequested = 0;
  *(undefined4 *)&this->m_bMusicPaused = 0;
  return this;
}

void cGZSndSys::~cGZSndSys(int __in_chrg) {
	HashList<cSoundCacheItem,unsigned int,256> *this;
	HashList<cSoundCacheItem,unsigned int,256> *this;
	int i;
	HashList<cSoundCacheItem,unsigned int,256> *this;
	int index;
	cSoundCacheItem *tmp;
	cSoundCacheItem *node;
	cSoundCacheItem *this;
	void *pAddress;
	
  cSoundCacheItem *pcVar1;
  int iVar2;
  cSoundCacheItem **ppcVar3;
  cSoundCacheItem *this_00;
  int iVar4;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashList.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (cIGZSndSys__vtable *)_vt_9cGZSndSys;
  killDeadSounds__9cGZSndSys(this);
  _gzSndSys = (cGZSndSys *)0x0;
  this->m_pSndList = (cGZSnd *)0x0;
  this->m_pMusicList = (cGZMusic *)0x0;
  unloadMusic__9cGZSndSys(this);
  (*(code *)_pResLoader->__vtable->CloseAllArchiveFiles)
            ((int)&_pResLoader->__vtable + (int)*(short *)&_pResLoader->__vtable->OpenFiles);
  Update__9cGZSndSys(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashList.h */
  iVar4 = 0;
  iVar2 = 0;
  do {
    ppcVar3 = (cSoundCacheItem **)((int)(this->m_cacheList).table + iVar2);
    this_00 = *ppcVar3;
    iVar4 = iVar4 + 1;
    if (this_00 != (cSoundCacheItem *)0x0) {
      *ppcVar3 = (cSoundCacheItem *)0x0;
      do {
        pcVar1 = this_00->pNextHash;
        if (this_00 != (cSoundCacheItem *)0x0) {
          ___15cSoundCacheItem(this_00,3);
        }
        this_00 = pcVar1;
      } while (pcVar1 != (cSoundCacheItem *)0x0);
    }
    iVar2 = iVar4 * 4;
  } while (iVar4 < 0x100);
                    /* end of inlined section */
  ___10cIGZSndSys(&this->field0_0x0,__in_chrg);
  return;
}

bool cGZSndSys::Initialize() {
  preloadMusic__9cGZSndSys(this);
  return true;
}

cIGZSnd* cGZSndSys::CreateSoundEffect(u32 sampleID, bool bLooping, bool bCache) {
	cGZSnd *result;
	
  cGZSnd *pcVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/gzsndsys.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/gzsndsys.h */
  pcVar1 = (cGZSnd *)malloc(0x38);
  memset(pcVar1,0,0x38);
                    /* end of inlined section */
  pcVar1 = __6cGZSnd(pcVar1);
  pcVar1->m_uResID = sampleID;
  *(int *)&pcVar1->m_bLooping = (int)bLooping;
  return &pcVar1->field0_0x0;
}

cIGZSnd* cGZSndSys::CreateAudioStream(u32 audioStreamID, bool bLooping) {
	cGZMusic *result;
	
  cGZMusic *pcVar1;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/gzsndsys.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/gzsndsys.h */
  pcVar1 = (cGZMusic *)malloc(0x24);
  memset(pcVar1,0,0x24);
                    /* end of inlined section */
  pcVar1 = __8cGZMusic(pcVar1);
  pcVar1->m_uResID = audioStreamID;
  *(int *)&pcVar1->m_bLooping = (int)bLooping;
  return &pcVar1->field0_0x0;
}

void cGZSndSys::addToList(cGZSnd *pSound) {
  pSound->m_pNext = this->m_pSndList;
  this->m_pSndList = pSound;
  return;
}

void cGZSndSys::removeFromList(cGZSnd *pSound) {
	cGZSnd *pNode;
	cGZSnd *pPrev;
	
  cGZSnd *pcVar1;
  cGZSnd *pcVar2;
  cGZSnd *pcVar3;
  
  pcVar3 = this->m_pSndList;
  pcVar2 = (cGZSnd *)0x0;
  while (pcVar1 = pcVar3, pcVar1 != pSound) {
    pcVar2 = pcVar1;
    pcVar3 = pcVar1->m_pNext;
  }
  if (pcVar2 != (cGZSnd *)0x0) {
    pcVar2->m_pNext = pSound->m_pNext;
    return;
  }
  this->m_pSndList = pSound->m_pNext;
  return;
}

void cGZSndSys::addToList(cGZMusic *pMusic) {
  pMusic->m_pNext = this->m_pMusicList;
  this->m_pMusicList = pMusic;
  return;
}

void cGZSndSys::removeFromList(cGZMusic *pMusic) {
	cGZMusic *pNode;
	cGZMusic *pPrev;
	
  cGZMusic *pcVar1;
  cGZMusic *pcVar2;
  cGZMusic *pcVar3;
  
  pcVar3 = this->m_pMusicList;
  pcVar2 = (cGZMusic *)0x0;
  while (pcVar1 = pcVar3, pcVar1 != pMusic) {
    pcVar2 = pcVar1;
    pcVar3 = pcVar1->m_pNext;
  }
  if (pcVar2 == (cGZMusic *)0x0) {
    this->m_pMusicList = pMusic->m_pNext;
  }
  else {
    pcVar2->m_pNext = pMusic->m_pNext;
  }
  if (this->m_pCurrentMusic == pMusic) {
    this->m_pCurrentMusic = (cGZMusic *)0x0;
  }
  return;
}

void cGZSndSys::killDeadSounds() {
	cGZSnd *pNode;
	vector<cGZSnd *,__malloc_alloc_template<0> > deadList;
	cGZSnd *&x;
	cGZSnd *&value;
	cGZSnd **i;
	cGZSnd *pItem;
	vector<cGZSnd *,__malloc_alloc_template<0> > *this;
	cGZSnd **last;
	cGZSnd **first;
	cGZSnd **pointer;
	vector<cGZSnd *,__malloc_alloc_template<0> > *this;
	void *pAddress;
	
  cGZSnd *pcVar1;
  cIGZSnd__vtable *pcVar2;
  cGZSnd **ppcVar3;
  cGZSnd **ppcVar4;
  cGZSnd **ppcVar5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  vector_cGZSnd_____malloc_alloc_template_0___ deadList;
  cGZSnd *pNode;
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
  pNode = this->m_pSndList;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  deadList.start = (cGZSnd **)0x0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  deadList.finish = (cGZSnd **)0x0;
  deadList.end_of_storage = (cGZSnd **)0x0;
                    /* end of inlined section */
  for (; ppcVar4 = deadList.finish, pNode != (cGZSnd *)0x0; pNode = pNode->m_pNext) {
    if (pNode->m_uRefCount == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
      if (deadList.finish == deadList.end_of_storage) {
        insert_aux__t6vector2ZP6cGZSndZt23__malloc_alloc_template1i0PP6cGZSndRCP6cGZSnd
                  (&deadList,deadList.finish,&pNode);
      }
      else {
        *deadList.finish = pNode;
        deadList.finish = deadList.finish + 1;
      }
    }
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  ppcVar3 = deadList.start;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  if (((int)deadList.finish - (int)deadList.start >> 2 != 0) && (deadList.start != deadList.finish))
  {
    pcVar1 = *deadList.start;
    ppcVar5 = deadList.start;
    while( true ) {
      if (pcVar1 != (cGZSnd *)0x0) {
        pcVar2 = (pcVar1->field0_0x0).__vtable;
        (*(code *)pcVar2[2].Init)
                  ((int)&(pcVar1->field0_0x0).__vtable + (int)*(short *)(pcVar2 + 2),3);
      }
      ppcVar5 = ppcVar5 + 1;
      ppcVar3 = deadList.start;
      if (ppcVar5 == ppcVar4) break;
      pcVar1 = *ppcVar5;
    }
  }
  for (; ppcVar3 != deadList.finish; ppcVar3 = ppcVar3 + 1) {
  }
  if ((deadList.start != (cGZSnd **)0x0) &&
     ((int)deadList.end_of_storage - (int)deadList.start >> 2 != 0)) {
    free(deadList.start);
  }
  return;
}

void cGZSndSys::Update() {
	bool bLoadCompleted;
	HashIterator<cSoundCacheItem,unsigned int,256> i;
	HashIterator<cSoundCacheItem,unsigned int,256> end;
	vector<cSoundCacheItem *,__malloc_alloc_template<0> > deadList;
	u32 time;
	HashList<cSoundCacheItem,unsigned int,256> *this;
	HashIterator<cSoundCacheItem,unsigned int,256> result;
	HashIterator<cSoundCacheItem,unsigned int,256> result;
	cSoundCacheItem *pItem;
	cSoundCacheItem *this;
	u32 diff;
	cSoundCacheItem *this;
	cSoundCacheItem *&x;
	cSoundCacheItem *&value;
	cSoundCacheItem *this;
	cSoundCacheItem *this;
	HashIterator<cSoundCacheItem,unsigned int,256> *this;
	cSoundCacheItem **i;
	cSoundCacheItem *pItem;
	HashList<cSoundCacheItem,unsigned int,256> *this;
	cSoundCacheItem *node;
	cSoundCacheItem *prev;
	cSoundCacheItem *this;
	cSoundCacheItem *this;
	cSoundCacheItem **last;
	cSoundCacheItem **first;
	cSoundCacheItem **pointer;
	cGZSnd *pNode;
	cSoundCacheItem *this;
	cGZSnd *pNode;
	vector<cGZSnd *,__malloc_alloc_template<0> > deadList;
	cGZSnd *&x;
	cGZSnd *&value;
	s32 incVol;
	EVoiceDesc desc;
	float lVol;
	float rVol;
	float v;
	float v;
	cGZSnd **i;
	cGZSnd *pItem;
	vector<cGZSnd *,__malloc_alloc_template<0> > *this;
	cGZSnd **last;
	cGZSnd **first;
	cGZSnd **pointer;
	vector<cGZSnd *,__malloc_alloc_template<0> > *this;
	void *pAddress;
	float volume;
	cGZMusic *pNode;
	float volume;
	float nodeVolume;
	cGZMusic *pNode;
	
  undefined *puVar1;
  cSoundCacheItem *pcVar2;
  cIGZSnd__vtable *pcVar3;
  uint uVar4;
  ulong *puVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  long lVar10;
  cSoundCacheItem *pcVar11;
  cSoundCacheItem *pcVar12;
  cSoundCacheItem **ppcVar13;
  int iVar14;
  cSoundCacheItem **ppcVar15;
  cGZSnd *pcVar16;
  cGZMusic *pcVar17;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  float fVar18;
  float fVar19;
  float fVar20;
  HashIterator_cSoundCacheItem_unsigned_int_256_ i;
  EVoiceDesc desc;
  cSoundCacheItem **local_bc;
  cSoundCacheItem **local_b8;
  undefined auStack_b0 [8];
  cSoundCacheItem *local_a8;
  HashIterator_cSoundCacheItem_unsigned_int_256_ result;
  cSoundCacheItem *pItem;
  cGZSnd *pNode;
  float lVol;
  float rVol;
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
  
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashList.h */
  local_60 = (int)unaff_s2;
  uStack_5c = (int)((ulong)unaff_s2 >> 0x20);
                    /* end of inlined section */
  local_80 = (int)unaff_s0;
  uStack_7c = (int)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashList.h */
  result.pList = &this->m_cacheList;
  local_40 = (int)unaff_s4;
  uStack_3c = (int)((ulong)unaff_s4 >> 0x20);
  local_70 = (int)unaff_s1;
  uStack_6c = (int)((ulong)unaff_s1 >> 0x20);
                    /* end of inlined section */
  bVar6 = false;
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashList.h */
  desc._16_4_ = result.pList;
  local_30 = (int)unaff_retaddr;
  uStack_2c = (int)((ulong)unaff_retaddr >> 0x20);
  local_50 = (int)unaff_s3;
  uStack_4c = (int)((ulong)unaff_s3 >> 0x20);
  i._0_8_ = ZEXT48(i.pList);
  i.node = (cSoundCacheItem *)0x0;
  desc._0_8_ = CONCAT44(0x100,result.pList);
  puVar1 = (undefined *)((int)&desc.volumeL + 3);
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | desc._0_8_ >> (7 - uVar4) * 8;
  desc.volumeR = 0.0;
  desc._16_4_ = (HashList_cSoundCacheItem_unsigned_int_256_ *)0x0;
  local_bc = (cSoundCacheItem **)0x0;
                    /* end of inlined section */
  local_b8 = (cSoundCacheItem **)0x0;
  iVar9 = timeGetTime__Fv();
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashList.h */
  pcVar12 = (this->m_cacheList).table[0];
  result.node = (cSoundCacheItem *)0x0;
  result.i = 0;
  while (iVar14 = result.i, pcVar12 == (cSoundCacheItem *)0x0) {
    result.i = result.i + 1;
    if (0xff < result.i) goto LAB_0027f6b4;
    pcVar12 = (result.pList)->table[iVar14 + 1];
  }
  result.node = pcVar12;
LAB_0027f6b4:
  i.node = result.node;
  i._0_8_ = CONCAT44(result.i,result.pList);
  puVar1 = auStack_b0 + 7;
  uVar4 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar4) =
       *(ulong *)(puVar1 + -uVar4) & -1L << (uVar4 + 1) * 8 | i._0_8_ >> (7 - uVar4) * 8;
  auStack_b0 = (undefined  [8])i._0_8_;
  local_a8 = i.node;
  puVar1 = (undefined *)((int)&i.i + 3);
                    /* end of inlined section */
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | i._0_8_ >> (7 - uVar4) * 8;
  pcVar12 = i.node;
  do {
    i.node = pcVar12;
    do {
      bVar8 = 0;
      if ((float)i.i == desc.volumeL) {
        bVar7 = true;
        if (i.node == (cSoundCacheItem *)desc.volumeR) {
          bVar8 = 1;
          if (i.pList != (HashList_cSoundCacheItem_unsigned_int_256_ *)desc.mask) {
            bVar8 = 0;
          }
          goto LAB_0027f828;
        }
      }
      else {
LAB_0027f828:
        bVar7 = (bool)(bVar8 ^ 1);
      }
                    /* end of inlined section */
      if (!bVar7) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
        ppcVar15 = (desc._16_4_)->table;
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
        if (((int)local_bc - (int)desc._16_4_ >> 2 == 0) ||
           (desc._16_4_ == (HashList_cSoundCacheItem_unsigned_int_256_ *)local_bc))
        goto joined_r0x0027f8ec;
        pcVar12 = (desc._16_4_)->table[0];
        ppcVar13 = (desc._16_4_)->table;
        goto LAB_0027f860;
      }
                    /* end of inlined section */
      bVar7 = false;
      pItem = i.node;
      if (((*(int *)&(i.node)->m_bWaitingOnLoad == 0) || (_gzSndSys == (cGZSndSys *)0x0)) &&
         (bVar7 = true, (i.node)->m_uRefCount != 0)) {
        bVar7 = false;
      }
      if (bVar7) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/gzsndsys.h */
                    /* end of inlined section */
        if (15000 < iVar9 - (i.node)->m_uLastTimeUsed) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
          if (local_bc == local_b8) {
            insert_aux__t6vector2ZP15cSoundCacheItemZt23__malloc_alloc_template1i0PP15cSoundCacheItemRCP15cSoundCacheItem
                      ((vector_cSoundCacheItem_____malloc_alloc_template_0___ *)&desc.bPlaying,
                       local_bc,&pItem);
                    /* end of inlined section */
          }
          else {
            *local_bc = i.node;
            local_bc = local_bc + 1;
          }
        }
      }
      else if ((*(int *)&(i.node)->m_bSampleLoaded == 0) &&
              (Update__15cSoundCacheItem(i.node), *(int *)&pItem->m_bSampleLoaded != 0)) {
        bVar6 = true;
      }
      if (i.node == (cSoundCacheItem *)0x0) break;
      i.node = (i.node)->pNextHash;
      if (i.node == (cSoundCacheItem *)0x0) {
        i._0_8_ = i._0_8_ & 0xffffffff | (ulong)(i.i + 1) << 0x20;
      }
    } while (i.node != (cSoundCacheItem *)0x0);
    while (pcVar12 = i.node, i.i < 0x100) {
      pcVar12 = (i.pList)->table[i.i];
      if ((i.pList)->table[i.i] != (cSoundCacheItem *)0x0) break;
      i.i = i.i + 1;
      i._0_8_ = i._0_8_ & 0xffffffff | (ulong)(uint)i.i << 0x20;
    }
  } while( true );
LAB_0027f860:
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashList.h */
  ppcVar15 = (this->m_cacheList).table + *(byte *)&pcVar12->m_uResID;
  pcVar11 = *ppcVar15;
  ppcVar13 = ppcVar13 + 1;
  if (pcVar12 == pcVar11) {
    *ppcVar15 = pcVar12->pNextHash;
  }
  else if (pcVar11 != (cSoundCacheItem *)0x0) {
    for (pcVar2 = pcVar11->pNextHash; pcVar2 != (cSoundCacheItem *)0x0; pcVar2 = pcVar2->pNextHash)
    {
      if (pcVar2 == pcVar12) {
        if (pcVar2 != (cSoundCacheItem *)0x0) {
          pcVar11->pNextHash = pcVar12->pNextHash;
        }
        break;
      }
      pcVar11 = pcVar2;
    }
  }
  if (pcVar12 != (cSoundCacheItem *)0x0) {
    ___15cSoundCacheItem(pcVar12,3);
                    /* end of inlined section */
  }
  ppcVar15 = (desc._16_4_)->table;
  if (ppcVar13 == local_bc) goto joined_r0x0027f8ec;
  pcVar12 = *ppcVar13;
  goto LAB_0027f860;
code_r0x0027fde8:
  pcVar17 = this->m_pCurrentMusic;
  goto LAB_0027fdec;
joined_r0x0027f8ec:
  for (; ppcVar15 != local_bc; ppcVar15 = ppcVar15 + 1) {
  }
  if ((desc._16_4_ != (HashList_cSoundCacheItem_unsigned_int_256_ *)0x0) &&
     ((int)local_b8 - (int)desc._16_4_ >> 2 != 0)) {
    free(desc._16_4_);
  }
                    /* end of inlined section */
  if (bVar6) {
    pcVar16 = this->m_pSndList;
    if (pcVar16 == (cGZSnd *)0x0) {
      pNode = this->m_pSndList;
    }
    else {
      iVar9 = *(int *)&pcVar16->m_bWaitingOnLoad;
      while( true ) {
        if (iVar9 == 0) {
          pcVar16 = pcVar16->m_pNext;
        }
        else if (*(int *)&pcVar16->m_pCacheItem->m_bSampleLoaded == 0) {
          pcVar16 = pcVar16->m_pNext;
        }
        else if (*(int *)&pcVar16->m_bPlayRequested == 0) {
          pcVar16 = pcVar16->m_pNext;
        }
        else {
          pcVar3 = (pcVar16->field0_0x0).__vtable;
          (*(code *)pcVar3->Load)
                    ((int)&(pcVar16->field0_0x0).__vtable + (int)*(short *)&pcVar3->Unpause);
          pcVar16 = pcVar16->m_pNext;
        }
        if (pcVar16 == (cGZSnd *)0x0) break;
        iVar9 = *(int *)&pcVar16->m_bWaitingOnLoad;
      }
      pNode = this->m_pSndList;
    }
  }
  else {
    pNode = this->m_pSndList;
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
  i._0_8_ = 0;
  i.node = (cSoundCacheItem *)0x0;
                    /* end of inlined section */
  for (; pNode != (cGZSnd *)0x0; pNode = pNode->m_pNext) {
    if ((pNode->m_voice != (EVoice__168_911 *)0x0) &&
       (iVar9 = pNode->m_iFadeTicks + -1, pNode->m_iFadeTicks != 0)) {
      pNode->m_iFadeTicks = iVar9;
      if (iVar9 < 1) {
        pNode->m_iFadeTicks = 0;
        setVolume__6cGZSndi(pNode,pNode->m_volume);
        if (pNode->m_uRefCount == 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
          if ((cSoundCacheItem *)i.i == i.node) {
            insert_aux__t6vector2ZP6cGZSndZt23__malloc_alloc_template1i0PP6cGZSndRCP6cGZSnd
                      ((vector_cGZSnd_____malloc_alloc_template_0___ *)&i,(cGZSnd **)i.i,&pNode);
                    /* end of inlined section */
          }
          else {
            *(cGZSnd **)i.i = pNode;
            i._0_8_ = i._0_8_ & 0xffffffff | (ulong)(i.i + 4) << 0x20;
          }
        }
      }
      else {
        iVar14 = pNode->m_volume - pNode->m_iVolumeLastSet;
        if (iVar14 == 0) {
          pNode->m_iFadeTicks = 0;
          setVolume__6cGZSndi(pNode,pNode->m_volume);
        }
        else {
          if (iVar14 < 0) {
            iVar9 = (iVar14 + 1) - iVar9;
          }
          else {
            iVar9 = iVar14 + -1 + iVar9;
          }
          if (pNode->m_iFadeTicks == 0) {
            trap(7);
          }
          pNode->m_iVolumeLastSet = pNode->m_iVolumeLastSet + iVar9 / pNode->m_iFadeTicks;
          if (pNode->m_voice != (EVoice__168_911 *)0x0) {
                    /* inlined from /eor/src2/engine/e_audio.h */
            desc._0_8_ = desc._0_8_ & 0xffffffff00000000;
                    /* end of inlined section */
            getLRVolume__6cGZSndiRfT2(pNode,pNode->m_iVolumeLastSet,&lVol,&rVol);
                    /* inlined from /eor/src2/engine/e_audio.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_audio.h */
            desc._0_8_ = desc._0_8_ & 0xffffffff | (ulong)(uint)lVol << 0x20 | 3;
            desc.volumeR = rVol;
                    /* end of inlined section */
            (*(code *)_pAudio->__vtable[1].SetVoiceState)
                      ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable[1].GetVoiceState,
                       pNode->m_voice,&desc);
          }
        }
      }
    }
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
  if (i.i - (int)i.pList >> 2 == 0) {
LAB_0027fb5c:
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
                    /* end of inlined section */
    if (i.pList != (HashList_cSoundCacheItem_unsigned_int_256_ *)i.i) {
      pcVar12 = (i.pList)->table[0];
      while( true ) {
        if (pcVar12 != (cSoundCacheItem *)0x0) {
          (**(code **)(pcVar12->m_uResID + 0x9c))
                    ((int)&pcVar12->m_uResID + (int)*(short *)(pcVar12->m_uResID + 0x98),3);
        }
        i.pList = (HashList_cSoundCacheItem_unsigned_int_256_ *)((int)i.pList + 4);
        if (i.pList == (HashList_cSoundCacheItem_unsigned_int_256_ *)i.i) break;
        pcVar12 = *(cSoundCacheItem **)i.pList;
      }
                    /* inlined from c:/eor/src2/games/sims/MSrc/vector.h */
      goto LAB_0027fb5c;
    }
  }
  for (; i.pList != (HashList_cSoundCacheItem_unsigned_int_256_ *)i.i;
      i.pList = (HashList_cSoundCacheItem_unsigned_int_256_ *)((int)i.pList + 4)) {
  }
  if (i.pList == (HashList_cSoundCacheItem_unsigned_int_256_ *)0x0) {
    iVar9 = this->m_iFadeTicks;
  }
  else if ((int)i.node - (int)i.pList >> 2 == 0) {
    iVar9 = this->m_iFadeTicks;
  }
  else {
    free(i.pList);
                    /* end of inlined section */
    iVar9 = this->m_iFadeTicks;
  }
  if ((iVar9 != 0) &&
     ((*(int *)&this->m_bStopLoadLoopRequested != 0 || (this->m_pMusicList != (cGZMusic *)0x0)))) {
    this->m_iFadeTicks = iVar9 + -1;
    if (0 < iVar9 + -1) {
      fVar19 = (float)(*(code *)_pAudio->__vtable[1].Update)
                                ((int)&_pAudio->__vtable +
                                 (int)*(short *)&_pAudio->__vtable[1].Shutdown);
      fVar19 = fVar19 - 0.033;
      if (fVar19 < 0.0) {
        fVar19 = 0.0;
      }
      (*(code *)_pAudio->__vtable[1].InitAudio)
                (fVar19,(int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable[1].EAudio);
      return;
    }
    (*(code *)_pAudio->__vtable[1].InitAudio)
              (0,(int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable[1].EAudio);
    (*(code *)_pAudio->__vtable[1].AddEvent)
              (0,(int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable[1].Flush);
    (*(code *)_pAudio->__vtable->BindVoice)
              ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable->FreeVoice);
    pcVar17 = this->m_pCurrentMusic;
    this->m_iFadeTicks = 0;
    if (pcVar17 == (cGZMusic *)0x0) {
      return;
    }
    pcVar3 = (pcVar17->field0_0x0).__vtable;
    (*(code *)pcVar3[1].Unpause)
              ((int)&(pcVar17->field0_0x0).__vtable + (int)*(short *)&pcVar3[1].Pause,0,
               pcVar17->m_volume,2000);
    pcVar3 = (this->m_pCurrentMusic->field0_0x0).__vtable;
    (*(code *)pcVar3->Load)
              ((int)&(this->m_pCurrentMusic->field0_0x0).__vtable + (int)*(short *)&pcVar3->Unpause)
    ;
    return;
  }
                    /* end of inlined section */
  if (_ps2Audio._1748_4_ != 0) {
    return;
  }
  pcVar17 = this->m_pMusicList;
  if (pcVar17 != (cGZMusic *)0x0) {
    fVar19 = 0.033;
    iVar9 = pcVar17->m_iFadeTicks;
    do {
      if (iVar9 == 0) {
LAB_0027fddc:
        pcVar17 = pcVar17->m_pNext;
      }
      else {
        pcVar17->m_iFadeTicks = iVar9 + -1;
        if (iVar9 + -1 < 1) {
          pcVar17->m_iFadeTicks = 0;
          setVolume__8cGZMusici(pcVar17,pcVar17->m_volume);
          pcVar17 = pcVar17->m_pNext;
        }
        else {
          if (pcVar17 == this->m_pCurrentMusic) {
            fVar20 = (float)(*(code *)_pAudio->__vtable[1].Update)
                                      ((int)&_pAudio->__vtable +
                                       (int)*(short *)&_pAudio->__vtable[1].Shutdown);
            fVar18 = (float)pcVar17->m_volume * 0.0009765625;
            if (fVar18 < fVar20) {
              fVar20 = fVar20 - fVar19;
              bVar6 = fVar20 < fVar18;
            }
            else {
              fVar20 = fVar20 + 0.0165;
              bVar6 = fVar18 < fVar20;
            }
            if (bVar6) {
              fVar20 = fVar18;
            }
            (*(code *)_pAudio->__vtable[1].InitAudio)
                      (fVar20,(int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable[1].EAudio)
            ;
            goto LAB_0027fddc;
          }
          pcVar17 = pcVar17->m_pNext;
        }
      }
      if (pcVar17 == (cGZMusic *)0x0) goto code_r0x0027fde8;
      iVar9 = pcVar17->m_iFadeTicks;
    } while( true );
  }
  pcVar17 = this->m_pCurrentMusic;
LAB_0027fdec:
  if (pcVar17 == (cGZMusic *)0x0) {
    pcVar17 = this->m_pMusicList;
  }
  else {
    if (*(int *)&this->m_bMusicPaused == 0) {
      lVar10 = (*(code *)_pAudio->__vtable[1].PauseMusic)
                         ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable[1].StopMusic);
      if (lVar10 == 0) {
        *(undefined4 *)&this->m_pCurrentMusic->m_bPlaying = 0;
        this->m_pCurrentMusic = (cGZMusic *)0x0;
        pcVar17 = this->m_pCurrentMusic;
      }
      else {
        pcVar17 = this->m_pCurrentMusic;
      }
    }
    else {
      pcVar17 = this->m_pCurrentMusic;
    }
    if (pcVar17 == (cGZMusic *)0x0) {
      pcVar17 = this->m_pMusicList;
    }
    else {
      if (*(int *)&this->m_bMusicPaused == 0) {
        if (pcVar17->m_volume == 0) {
          if (pcVar17->m_iFadeTicks == 0) {
            *(undefined4 *)&pcVar17->m_bPlaying = 0;
            this->m_pCurrentMusic = (cGZMusic *)0x0;
            (*(code *)_pAudio->__vtable->BindVoice)
                      ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable->FreeVoice);
            pcVar17 = this->m_pCurrentMusic;
          }
          else {
            pcVar17 = this->m_pCurrentMusic;
          }
        }
        else {
          pcVar17 = this->m_pCurrentMusic;
        }
      }
      else {
        pcVar17 = this->m_pCurrentMusic;
      }
      if (pcVar17 != (cGZMusic *)0x0) {
        return;
      }
      pcVar17 = this->m_pMusicList;
    }
  }
  while( true ) {
    if (pcVar17 == (cGZMusic *)0x0) {
      return;
    }
    if (*(int *)&pcVar17->m_bPlaying != 0) break;
    pcVar17 = pcVar17->m_pNext;
  }
  pcVar17->m_iFadeTicks = 0x3c;
  pcVar3 = (pcVar17->field0_0x0).__vtable;
  (*(code *)pcVar3->Load)((int)&(pcVar17->field0_0x0).__vtable + (int)*(short *)&pcVar3->Unpause);
  return;
}

void cGZSndSys::preloadMusic() {
	int i;
	
  int iVar1;
  MusicNode *pMVar2;
  
  pMVar2 = _musicID;
  iVar1 = 0x15;
  do {
                    /* inlined from /eor/src2/engine/audiostream/e_audiostreamman.h */
    AddRef__16EResourceManagerUiP5EFilei(&_audiostreamman.field0_0x0,pMVar2->musicID,(EFile *)0x0,0)
    ;
                    /* end of inlined section */
    iVar1 = iVar1 + -1;
    pMVar2 = pMVar2 + 1;
  } while (-1 < iVar1);
  return;
}

void cGZSndSys::unloadMusic() {
	int i;
	
  EAudioStreamSymbol id;
  int iVar1;
  MusicNode *pMVar2;
  
  pMVar2 = _musicID;
  iVar1 = 0x15;
  id = _musicID[0].musicID;
  while( true ) {
    pMVar2 = pMVar2 + 1;
    iVar1 = iVar1 + -1;
    DelRef__16EResourceManagerUi(&_audiostreamman.field0_0x0,id);
    if (iVar1 < 0) break;
    id = pMVar2->musicID;
  }
  return;
}

static bool isMonoChannel(u32 id) {
	int i;
	bool result;
	
  int iVar1;
  int iVar2;
  undefined uVar3;
  
  if (id == _musicID[0].musicID) {
    uVar3 = (undefined)_musicID[0]._4_4_;
  }
  else {
    iVar1 = 1;
    do {
      iVar2 = iVar1;
      if (0x15 < iVar2) {
        return false;
      }
      iVar1 = iVar2 + 1;
    } while (id != _musicID[iVar2].musicID);
    uVar3 = (undefined)*(undefined4 *)&_musicID[iVar2].bIsMonoChannel;
  }
  return (bool)uVar3;
}

cGZSnd* cGZSnd::cGZSnd() {
	cIGZSnd *this;
	
  cGZSndSys *this_00;
  
  this_00 = _gzSndSys;
  (this->field0_0x0).__vtable = (cIGZSnd__vtable *)_vt_6cGZSnd;
  this->m_uRefCount = 1;
  this->m_pan = 0x200;
  this->m_iVolumeLastSet = 0x400;
  this->m_volume = 0x400;
  addToList__9cGZSndSysP6cGZSnd(this_00,this);
  return this;
}

void cGZSnd::~cGZSnd(int __in_chrg) {
	void *ptr;
	
  (this->field0_0x0).__vtable = (cIGZSnd__vtable *)_vt_6cGZSnd;
  reset__6cGZSnd(this);
  removeFromList__9cGZSndSysP6cGZSnd(_gzSndSys,this);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/gzsndsys.h */
    free(this);
                    /* end of inlined section */
  }
  return;
}

bool cGZSnd::Init() {
  return true;
}

u32 cGZSnd::Release() {
	EVoiceDesc desc;
	
  cIGZSnd__vtable *pcVar1;
  uint uVar2;
  EVoiceDesc desc;
  
  uVar2 = this->m_uRefCount;
  if (uVar2 == 1) {
    if (this->m_voice != (EVoice__168_911 *)0x0) {
                    /* inlined from /eor/src2/engine/e_audio.h */
      desc.mask = 0;
                    /* end of inlined section */
      (*(code *)_pAudio->__vtable[1].UnbindVoice)
                ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable[1].BindVoice,
                 this->m_voice,&desc);
      if (desc._16_4_ != 0) {
        uVar2 = this->m_uRefCount;
        this->m_iFadeTicks = 7;
        this->m_volume = 0;
        goto LAB_00280178;
      }
    }
    if (this != (cGZSnd *)0x0) {
      pcVar1 = (this->field0_0x0).__vtable;
      (*(code *)pcVar1[2].Init)((int)&(this->field0_0x0).__vtable + (int)*(short *)(pcVar1 + 2),3);
    }
    uVar2 = 0;
  }
  else {
LAB_00280178:
    uVar2 = uVar2 - 1;
    this->m_uRefCount = uVar2;
  }
  return uVar2;
}

u32 cGZSnd::AddRef() {
  uint uVar1;
  
  uVar1 = this->m_uRefCount + 1;
  this->m_uRefCount = uVar1;
  return uVar1;
}

bool cGZSnd::Play() {
	HashList<cSoundCacheItem,unsigned int,256> *this;
	u32 &cmp;
	unsigned int key;
	cSoundCacheItem *prev;
	cSoundCacheItem *node;
	u32 id;
	cSoundCacheItem *this;
	HashList<cSoundCacheItem,unsigned int,256> *this;
	cSoundCacheItem *this;
	EVoiceDesc desc;
	float lVol;
	float rVol;
	float v;
	float v;
	
  cGZSndSys *pcVar1;
  cSoundCacheItem *pcVar2;
  uint uVar3;
  long lVar4;
  cSoundCacheItem **ppcVar5;
  cSoundCacheItem *pcVar6;
  int volume;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EVoiceDesc desc;
  float lVol;
  float rVol;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (this->m_pCacheItem == (cSoundCacheItem *)0x0) {
    uVar3 = this->m_uResID;
    if (uVar3 != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashList.h */
      ppcVar5 = (_gzSndSys->m_cacheList).table + (uVar3 & 0xff);
      pcVar2 = *ppcVar5;
      if ((pcVar2 != (cSoundCacheItem *)0x0) && (uVar3 != pcVar2->m_uResID)) {
        do {
          pcVar6 = pcVar2;
          pcVar2 = pcVar6->pNextHash;
          if (pcVar2 == (cSoundCacheItem *)0x0) goto LAB_00280238;
        } while (this->m_uResID != pcVar2->m_uResID);
        if (pcVar6 != (cSoundCacheItem *)0x0) {
          pcVar6->pNextHash = pcVar2->pNextHash;
          pcVar2->pNextHash = *ppcVar5;
          *ppcVar5 = pcVar2;
        }
      }
LAB_00280238:
                    /* end of inlined section */
      this->m_pCacheItem = pcVar2;
      if (pcVar2 == (cSoundCacheItem *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/gzsndsys.h */
        pcVar2 = (cSoundCacheItem *)malloc(0x20);
        memset(pcVar2,0,0x20);
                    /* end of inlined section */
        pcVar2 = __15cSoundCacheItemUib
                           (pcVar2,this->m_uResID,SUB41(*(undefined4 *)&this->m_bLooping,0));
        pcVar1 = _gzSndSys;
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashList.h */
                    /* end of inlined section */
        this->m_pCacheItem = pcVar2;
                    /* inlined from c:/eor/src2/games/sims/MSrc/THashList.h */
        ppcVar5 = (pcVar1->m_cacheList).table + *(byte *)&this->m_uResID;
        pcVar2->pNextHash = *ppcVar5;
        *ppcVar5 = pcVar2;
      }
    }
                    /* end of inlined section */
    pcVar2 = this->m_pCacheItem;
                    /* inlined from c:/eor/src2/games/sims/MSrc/gzsndsys.h */
                    /* end of inlined section */
    if ((pcVar2 == (cSoundCacheItem *)0x0) ||
       (pcVar2->m_uRefCount = pcVar2->m_uRefCount + 1, this->m_pCacheItem == (cSoundCacheItem *)0x0)
       ) goto LAB_002803ac;
    pcVar2 = this->m_pCacheItem;
  }
  else {
    pcVar2 = this->m_pCacheItem;
  }
  uVar3 = *(uint *)&pcVar2->m_bSampleLoaded ^ 1;
  *(uint *)&this->m_bWaitingOnLoad = uVar3;
  if (uVar3 == 0) {
    ResetUsageTimer__15cSoundCacheItem(pcVar2);
    if (this->m_voice == (EVoice__168_911 *)0x0) {
      lVar4 = (*(code *)_pAudio->__vtable[1].SetMusicVolume)
                        ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable[1].ResumeMusic)
      ;
      this->m_voice = (EVoice__168_911 *)lVar4;
      if (lVar4 != 0) {
        (*(code *)_pAudio->__vtable[1].IsPlayingMusic)
                  ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable[1].GetMusicPan,lVar4,
                   this->m_uResID);
      }
      if (this->m_voice == (EVoice__168_911 *)0x0) goto LAB_002803ac;
                    /* end of inlined section */
      volume = this->m_iVolumeLastSet;
    }
    else {
      volume = this->m_iVolumeLastSet;
    }
                    /* inlined from /eor/src2/engine/e_audio.h */
    desc.mask = 0;
                    /* end of inlined section */
    getLRVolume__6cGZSndiRfT2(this,volume,&lVol,&rVol);
                    /* inlined from /eor/src2/engine/e_audio.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_audio.h */
    desc._16_4_ = 1;
    desc.volumeL = lVol;
    desc.volumeR = rVol;
                    /* end of inlined section */
    uVar3 = desc.mask | 0xb;
    if (*(int *)&this->m_bPauseRequested != 0) {
                    /* inlined from /eor/src2/engine/e_audio.h */
      desc.pitch = 0.0;
      uVar3 = desc.mask | 0xf;
    }
                    /* end of inlined section */
    desc.mask = uVar3;
    (*(code *)_pAudio->__vtable[1].SetVoiceState)
              ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable[1].GetVoiceState,
               this->m_voice,&desc);
  }
LAB_002803ac:
  *(undefined4 *)&this->m_bPlayRequested = 1;
  return true;
}

bool cGZSnd::IsPlaying() {
	bool result;
	EVoiceDesc desc;
	cSoundCacheItem *this;
	
  int iVar1;
  EVoiceDesc desc;
  
  iVar1 = *(int *)&this->m_bPlayRequested;
  if (this->m_voice == (EVoice__168_911 *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/gzsndsys.h */
                    /* end of inlined section */
    if (((iVar1 != 0) && (*(int *)&this->m_pCacheItem->m_bLooping == 0)) &&
       (this->m_pCacheItem->m_uRetryTicks - 1 < 0x110)) {
      iVar1 = 0;
    }
  }
  else {
                    /* inlined from /eor/src2/engine/e_audio.h */
    desc.mask = 0;
                    /* end of inlined section */
    (*(code *)_pAudio->__vtable[1].UnbindVoice)
              ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable[1].BindVoice,
               this->m_voice,&desc);
    iVar1 = desc._16_4_;
  }
  return SUB41(iVar1,0);
}

bool cGZSnd::Stop() {
	EVoiceDesc desc;
	
  EVoiceDesc desc;
  
  if (this->m_voice != (EVoice__168_911 *)0x0) {
                    /* inlined from /eor/src2/engine/e_audio.h */
    desc._16_4_ = 0;
    desc.mask = 8;
                    /* end of inlined section */
    (*(code *)_pAudio->__vtable[1].SetVoiceState)
              ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable[1].GetVoiceState,
               this->m_voice,&desc);
  }
  *(undefined4 *)&this->m_bPlayRequested = 0;
  return true;
}

bool cGZSnd::Pause() {
	EVoiceDesc desc;
	
  EVoiceDesc desc;
  
  if (this->m_voice != (EVoice__168_911 *)0x0) {
                    /* inlined from /eor/src2/engine/e_audio.h */
    desc.pitch = 0.0;
    desc.mask = 4;
                    /* end of inlined section */
    (*(code *)_pAudio->__vtable[1].SetVoiceState)
              ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable[1].GetVoiceState,
               this->m_voice,&desc);
  }
  *(undefined4 *)&this->m_bPauseRequested = 1;
  return true;
}

bool cGZSnd::Unpause() {
	EVoiceDesc desc;
	
  EVoiceDesc desc;
  
  if (this->m_voice != (EVoice__168_911 *)0x0) {
                    /* inlined from /eor/src2/engine/e_audio.h */
    desc.mask = 4;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_audio.h */
    desc.pitch = 1.0;
                    /* end of inlined section */
    (*(code *)_pAudio->__vtable[1].SetVoiceState)
              ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable[1].GetVoiceState,
               this->m_voice,&desc);
  }
  *(undefined4 *)&this->m_bPauseRequested = 0;
  return true;
}

bool cGZSnd::Load() {
  return true;
}

bool cGZSnd::Unload() {
  return true;
}

Sint32 cGZSnd::GetVolume() {
  return this->m_volume;
}

bool cGZSnd::SetVolume(Sint32 lNewVolume) {
  bool bVar1;
  
  if ((lNewVolume != this->m_volume) && (this->m_voice != (EVoice__168_911 *)0x0)) {
    this->m_iFadeTicks = 7;
  }
  bVar1 = setVolume__6cGZSndi(this,lNewVolume);
  return bVar1;
}

bool cGZSnd::setVolume(Sint32 lNewVolume) {
	EVoiceDesc desc;
	float lVol;
	float rVol;
	float v;
	float v;
	
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  EVoiceDesc desc;
  float lVol;
  float rVol;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  if (lNewVolume < 0) {
    this->m_volume = 0;
  }
  else if (lNewVolume < 0x401) {
    this->m_volume = lNewVolume;
  }
  else {
    this->m_volume = 0x400;
  }
  if (this->m_iFadeTicks == 0) {
    if (this->m_voice != (EVoice__168_911 *)0x0) {
                    /* end of inlined section */
                    /* end of inlined section */
      desc.mask = 0;
      getLRVolume__6cGZSndiRfT2(this,this->m_volume,&lVol,&rVol);
                    /* inlined from /eor/src2/engine/e_audio.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_audio.h */
      desc.mask = desc.mask | 3;
      desc.volumeL = lVol;
      desc.volumeR = rVol;
                    /* end of inlined section */
      (*(code *)_pAudio->__vtable[1].SetVoiceState)
                ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable[1].GetVoiceState,
                 this->m_voice,&desc);
    }
    this->m_iVolumeLastSet = this->m_volume;
  }
  return true;
}

bool cGZSnd::FadeVolume(Sint32 lStartingVolume, Sint32 lEndingVolume, Uint32 lMilliseconds) {
  uint uVar1;
  float fVar2;
  
  uVar1 = 0xfa;
  if (0xf9 < lMilliseconds) {
    uVar1 = lMilliseconds;
  }
  if ((int)uVar1 < 0) {
    fVar2 = (float)(uVar1 & 1 | uVar1 >> 1);
    fVar2 = fVar2 + fVar2;
  }
  else {
    fVar2 = (float)uVar1;
  }
  this->m_iFadeTicks = (int)(fVar2 * 0.03030303);
  setVolume__6cGZSndi(this,lEndingVolume);
  return true;
}

Sint32 cGZSnd::GetPan() {
  return this->m_pan;
}

bool cGZSnd::SetPan(Sint32 lNewPan) {
	EVoiceDesc desc;
	float lVol;
	float rVol;
	float v;
	float v;
	
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  EVoiceDesc desc;
  float lVol;
  float rVol;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  if (lNewPan != this->m_pan) {
    if (lNewPan < 0) {
      this->m_pan = 0;
    }
    else if (lNewPan < 0x401) {
      this->m_pan = lNewPan;
    }
    else {
      this->m_pan = 0x400;
    }
    if ((this->m_voice != (EVoice__168_911 *)0x0) && (this->m_iFadeTicks == 0)) {
                    /* end of inlined section */
                    /* end of inlined section */
      desc.mask = 0;
      getLRVolume__6cGZSndiRfT2(this,this->m_volume,&lVol,&rVol);
                    /* inlined from /eor/src2/engine/e_audio.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_audio.h */
      desc.mask = desc.mask | 3;
      desc.volumeL = lVol;
      desc.volumeR = rVol;
                    /* end of inlined section */
      (*(code *)_pAudio->__vtable[1].SetVoiceState)
                ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable[1].GetVoiceState,
                 this->m_voice,&desc);
    }
  }
  return true;
}

Sint32 cGZSnd::GetFrequency() {
  return 0x5622;
}

bool cGZSnd::SetFrequency(Sint32 lNewFrequency) {
  return true;
}

bool cGZSnd::SetPosition(Uint32 lNewPosition) {
  return true;
}

void cGZSnd::reset() {
  cSoundCacheItem *pcVar1;
  
  if (this->m_voice == (EVoice__168_911 *)0x0) {
    pcVar1 = this->m_pCacheItem;
  }
  else {
    (*(code *)_pAudio->__vtable[1].SetMusicPan)
              ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable[1].GetMusicVolume);
    this->m_voice = (EVoice__168_911 *)0x0;
    pcVar1 = this->m_pCacheItem;
  }
  if (pcVar1 != (cSoundCacheItem *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/gzsndsys.h */
    pcVar1->m_uRefCount = pcVar1->m_uRefCount - 1;
                    /* end of inlined section */
    this->m_pCacheItem = (cSoundCacheItem *)0x0;
  }
  return;
}

void cGZSnd::getLRVolume(s32 volume, float &lVol, float &rVol) {
	Sint32 diff;
	float inc;
	float vol;
	
  int iVar1;
  float fVar2;
  
  iVar1 = this->m_pan + -0x200;
  *rVol = 1.0;
  *lVol = 1.0;
  fVar2 = (float)iVar1 * 0.001953125;
  if (iVar1 < 1) {
    *rVol = *rVol + fVar2;
    fVar2 = *lVol - fVar2 * 0.5;
    *lVol = fVar2;
    if (1.0 < fVar2) {
      *lVol = 1.0;
    }
  }
  else {
    *lVol = 1.0 - fVar2;
    fVar2 = *rVol + fVar2 * 0.5;
    *rVol = fVar2;
    if (1.0 < fVar2) {
      *rVol = 1.0;
    }
  }
  *lVol = *lVol * (float)volume * 0.0009765625;
  *rVol = *rVol * (float)volume * 0.0009765625;
  return;
}

cGZMusic* cGZMusic::cGZMusic() {
	cIGZSnd *this;
	
  cGZSndSys *this_00;
  
  this_00 = _gzSndSys;
  *(undefined4 *)&this->m_bPlaying = 0;
  (this->field0_0x0).__vtable = (cIGZSnd__vtable *)_vt_8cGZMusic;
  this->m_uRefCount = 1;
  this->m_volume = 0x400;
  this->m_pan = 0x200;
  this->m_iFadeTicks = 0x3c;
  addToList__9cGZSndSysP8cGZMusic(this_00,this);
  return this;
}

void cGZMusic::~cGZMusic(int __in_chrg) {
	void *ptr;
	
  (this->field0_0x0).__vtable = (cIGZSnd__vtable *)_vt_8cGZMusic;
  reset__8cGZMusic(this);
  removeFromList__9cGZSndSysP8cGZMusic(_gzSndSys,this);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/gzsndsys.h */
    free(this);
                    /* end of inlined section */
  }
  return;
}

bool cGZMusic::Init() {
  return true;
}

u32 cGZMusic::AddRef() {
  uint uVar1;
  
  uVar1 = this->m_uRefCount + 1;
  this->m_uRefCount = uVar1;
  return uVar1;
}

u32 cGZMusic::Release() {
  cIGZSnd__vtable *pcVar1;
  uint uVar2;
  
  uVar2 = this->m_uRefCount - 1;
  if (this->m_uRefCount == 1) {
    pcVar1 = (this->field0_0x0).__vtable;
    (*(code *)pcVar1->FadeVolume)
              ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pcVar1->SetVolume);
    if (this != (cGZMusic *)0x0) {
      pcVar1 = (this->field0_0x0).__vtable;
      (*(code *)pcVar1[2].Init)((int)&(this->field0_0x0).__vtable + (int)*(short *)(pcVar1 + 2),3);
    }
    uVar2 = 0;
  }
  else {
    this->m_uRefCount = uVar2;
  }
  return uVar2;
}

bool cGZMusic::Play() {
	EPMDesc desc;
	
  cGZMusic *pcVar1;
  cIGZSnd__vtable *pcVar2;
  cGZSndSys *pcVar3;
  bool bVar4;
  EPMDesc desc;
  
  pcVar3 = _gzSndSys;
  *(undefined4 *)&this->m_bPlaying = 1;
  if (*(int *)&pcVar3->m_bMusicPaused != 0) {
    pcVar1 = pcVar3->m_pCurrentMusic;
    pcVar2 = (pcVar1->field0_0x0).__vtable;
    (*(code *)pcVar2->FadeVolume)
              ((int)&(pcVar1->field0_0x0).__vtable + (int)*(short *)&pcVar2->SetVolume);
  }
  if ((_gzSndSys->m_pCurrentMusic == (cGZMusic *)0x0) && (_gzSndSys->m_iFadeTicks == 0)) {
    _gzSndSys->m_pCurrentMusic = this;
    __7EPMDescUib(&desc,this->m_uResID,SUB41(*(undefined4 *)&this->m_bLooping,0));
    (*(code *)_pAudio->__vtable->BindVoice)
              ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable->FreeVoice);
    bVar4 = isMonoChannel__FUi(this->m_uResID);
    SetMusicMode__9EPs2Audio9MusicMode(&_ps2Audio,(uint)bVar4);
    (*(code *)_pAudio->__vtable[1].InitAudio)
              (0,(int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable[1].EAudio);
    (*(code *)_pAudio->__vtable->AllocVoice)
              ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable->IsPlayingMusic,&desc);
    this->m_iFadeTicks = 0x3c;
  }
  return true;
}

bool cGZMusic::IsPlaying() {
  return SUB41(*(undefined4 *)&this->m_bPlaying,0);
}

bool cGZMusic::Stop() {
  cGZSndSys *pcVar1;
  
  pcVar1 = _gzSndSys;
  if (_gzSndSys->m_pCurrentMusic == this) {
    if (*(int *)&this->m_bPlaying != 0) {
      _gzSndSys->m_iFadeTicks = 0x1e;
      *(undefined4 *)&pcVar1->m_bStopLoadLoopRequested = 1;
      pcVar1->m_pCurrentMusic = (cGZMusic *)0x0;
    }
    *(undefined4 *)&_gzSndSys->m_bMusicPaused = 0;
    *(undefined4 *)&this->m_bPlaying = 0;
  }
  else {
    *(undefined4 *)&this->m_bPlaying = 0;
  }
  return true;
}

bool cGZMusic::Pause() {
  if (_gzSndSys->m_pCurrentMusic == this) {
    (*(code *)_pAudio->__vtable->GetVoiceState)
              ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable->UnbindVoice);
    *(undefined4 *)&_gzSndSys->m_bMusicPaused = 1;
  }
  return true;
}

bool cGZMusic::Unpause() {
  if (_gzSndSys->m_pCurrentMusic == this) {
    (**(code **)(_pAudio->__vtable + 1))
              ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable->SetVoiceState);
    *(undefined4 *)&_gzSndSys->m_bMusicPaused = 0;
  }
  return true;
}

bool cGZMusic::Load() {
  return true;
}

bool cGZMusic::Unload() {
  return true;
}

Sint32 cGZMusic::GetVolume() {
  return this->m_volume;
}

bool cGZMusic::SetVolume(Sint32 lNewVolume) {
  bool bVar1;
  
  if (lNewVolume != this->m_volume) {
    this->m_iFadeTicks = 0x3c;
  }
  bVar1 = setVolume__8cGZMusici(this,lNewVolume);
  return bVar1;
}

bool cGZMusic::setVolume(Sint32 lNewVolume) {
  short sVar1;
  EAudio__0_3277__vtable *pEVar2;
  EAudio__0_3277__vtable **ppEVar3;
  float fVar4;
  
  if (lNewVolume < 0) {
    this->m_volume = 0;
  }
  else if (lNewVolume < 0x401) {
    this->m_volume = lNewVolume;
  }
  else {
    this->m_volume = 0x400;
  }
  if (((_gzSndSys->m_pCurrentMusic == this) && (_gzSndSys->m_iFadeTicks == 0)) &&
     (this->m_iFadeTicks == 0)) {
    pEVar2 = _pAudio->__vtable;
    sVar1 = *(short *)&pEVar2[1].EAudio;
    ppEVar3 = &_pAudio->__vtable;
    fVar4 = getLRVolume__8cGZMusic(this);
    (*(code *)pEVar2[1].InitAudio)(fVar4,(int)ppEVar3 + (int)sVar1);
    pEVar2 = _pAudio->__vtable;
    sVar1 = *(short *)&pEVar2[1].Flush;
    ppEVar3 = &_pAudio->__vtable;
    fVar4 = getPanSetting__8cGZMusic(this);
    (*(code *)pEVar2[1].AddEvent)(fVar4,(int)ppEVar3 + (int)sVar1);
  }
  return true;
}

bool cGZMusic::FadeVolume(Sint32 lStartingVolume, Sint32 lEndingVolume, Uint32 lMilliseconds) {
  float fVar1;
  
  this->m_iFadeTicks = 0;
  setVolume__8cGZMusici(this,lStartingVolume);
  if (lEndingVolume < 0) {
    this->m_volume = 0;
  }
  else if (lEndingVolume < 0x401) {
    this->m_volume = lEndingVolume;
  }
  else {
    this->m_volume = 0x400;
  }
  if ((int)lMilliseconds < 0) {
    fVar1 = (float)(lMilliseconds & 1 | lMilliseconds >> 1);
    fVar1 = fVar1 + fVar1;
  }
  else {
    fVar1 = (float)lMilliseconds;
  }
  this->m_iFadeTicks = (int)(fVar1 * 0.03030303);
  return true;
}

Sint32 cGZMusic::GetPan() {
  return 0x200;
}

bool cGZMusic::SetPan(Sint32 lNewPan) {
  short sVar1;
  EAudio__0_3277__vtable *pEVar2;
  EAudio__0_3277__vtable **ppEVar3;
  float fVar4;
  
  if (lNewPan < 0) {
    lNewPan = 0;
  }
  else if (0x400 < lNewPan) {
    lNewPan = 0x400;
  }
  this->m_pan = lNewPan;
  if (((_gzSndSys->m_pCurrentMusic == this) && (_gzSndSys->m_iFadeTicks == 0)) &&
     (this->m_iFadeTicks == 0)) {
    pEVar2 = _pAudio->__vtable;
    sVar1 = *(short *)&pEVar2[1].EAudio;
    ppEVar3 = &_pAudio->__vtable;
    fVar4 = getLRVolume__8cGZMusic(this);
    (*(code *)pEVar2[1].InitAudio)(fVar4,(int)ppEVar3 + (int)sVar1);
    pEVar2 = _pAudio->__vtable;
    sVar1 = *(short *)&pEVar2[1].Flush;
    ppEVar3 = &_pAudio->__vtable;
    fVar4 = getPanSetting__8cGZMusic(this);
    (*(code *)pEVar2[1].AddEvent)(fVar4,(int)ppEVar3 + (int)sVar1);
  }
  return true;
}

Sint32 cGZMusic::GetFrequency() {
  return 0x5622;
}

bool cGZMusic::SetFrequency(Sint32 lNewFrequency) {
  return true;
}

bool cGZMusic::SetPosition(Uint32 lNewPosition) {
  return true;
}

void cGZMusic::reset() {
  cGZSndSys *pcVar1;
  
  pcVar1 = _gzSndSys;
  if (_gzSndSys->m_pCurrentMusic == this) {
    *(undefined4 *)&_gzSndSys->m_pCurrentMusic->m_bPlaying = 0;
    *(undefined4 *)&pcVar1->m_bMusicPaused = 0;
    pcVar1->m_pCurrentMusic = (cGZMusic *)0x0;
    (*(code *)_pAudio->__vtable->BindVoice)
              ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable->FreeVoice);
  }
  return;
}

float cGZMusic::getLRVolume() {
  return (float)this->m_volume * 0.0009765625;
}

float cGZMusic::getPanSetting() {
  return (float)(this->m_pan + -0x200) * 0.0009765625;
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

cGZSnd** cGZSnd ** copy_backward<cGZSnd **, cGZSnd **>(cGZSnd **first, cGZSnd **last, cGZSnd **result) {
  if (first != last) {
    do {
      last = last + -1;
      result = result + -1;
      *result = *last;
    } while (first != last);
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

cGZSnd** cGZSnd ** uninitialized_copy<cGZSnd **, cGZSnd **>(cGZSnd **first, cGZSnd **last, cGZSnd **result) {
	cGZSnd **p;
	cGZSnd *&value;
	void *pAddress;
	
  cGZSnd *pcVar1;
  cGZSnd **ppcVar2;
  
  ppcVar2 = result;
  if (first != last) {
    do {
      pcVar1 = *first;
      first = first + 1;
      result = ppcVar2 + 1;
      *ppcVar2 = pcVar1;
      ppcVar2 = result;
    } while (first != last);
  }
  return result;
}

void vector<cGZSnd *, __malloc_alloc_template<0> >::insert_aux(cGZSnd **position, cGZSnd *&x) {
	cGZSnd *x_copy;
	vector<cGZSnd *,__malloc_alloc_template<0> > *this;
	vector<cGZSnd *,__malloc_alloc_template<0> > *this;
	vector<cGZSnd *,__malloc_alloc_template<0> > *this;
	void *result;
	vector<cGZSnd *,__malloc_alloc_template<0> > *this;
	vector<cGZSnd *,__malloc_alloc_template<0> > *this;
	cGZSnd **p;
	cGZSnd *&value;
	void *pAddress;
	vector<cGZSnd *,__malloc_alloc_template<0> > *this;
	vector<cGZSnd *,__malloc_alloc_template<0> > *this;
	vector<cGZSnd *,__malloc_alloc_template<0> > *this;
	vector<cGZSnd *,__malloc_alloc_template<0> > *this;
	cGZSnd **first;
	cGZSnd **pointer;
	vector<cGZSnd *,__malloc_alloc_template<0> > *this;
	
  cGZSnd *pcVar1;
  uint size;
  cGZSnd **ppcVar2;
  int iVar3;
  cGZSnd **ppcVar4;
  int iVar5;
  
  ppcVar2 = this->finish;
  if (ppcVar2 == this->end_of_storage) {
    iVar5 = (int)ppcVar2 - (int)this->start >> 2;
    iVar3 = 1;
    if (iVar5 != 0) {
      iVar3 = iVar5 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    size = iVar3 << 2;
    if (iVar3 == 0) {
      ppcVar2 = (cGZSnd **)0x0;
      size = 0;
    }
    else {
      ppcVar2 = (cGZSnd **)malloc(size);
      if (ppcVar2 == (cGZSnd **)0x0) {
        ppcVar2 = (cGZSnd **)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
      }
    }
                    /* end of inlined section */
                    /* end of inlined section */
    uninitialized_copy__H2ZPP6cGZSndZPP6cGZSnd_X01X01X11_X11(this->start,position,ppcVar2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *(cGZSnd **)((int)ppcVar2 + ((int)position - (int)this->start)) = *x;
                    /* end of inlined section */
    uninitialized_copy__H2ZPP6cGZSndZPP6cGZSnd_X01X01X11_X11
              (position,this->finish,
               (cGZSnd **)((int)ppcVar2 + (int)position + (4 - (int)this->start)));
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    ppcVar4 = this->start;
    if (ppcVar4 == this->finish) {
      ppcVar4 = this->start;
    }
    else {
      do {
        ppcVar4 = ppcVar4 + 1;
      } while (ppcVar4 != this->finish);
                    /* end of inlined section */
      ppcVar4 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((ppcVar4 != (cGZSnd **)0x0) && ((int)this->end_of_storage - (int)ppcVar4 >> 2 != 0)) {
      free(ppcVar4);
                    /* end of inlined section */
    }
    ppcVar4 = ppcVar2 + iVar5;
    this->start = ppcVar2;
    this->end_of_storage = (cGZSnd **)((int)ppcVar2 + size);
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *ppcVar2 = ppcVar2[-1];
                    /* end of inlined section */
    pcVar1 = *x;
    copy_backward__H2ZPP6cGZSndZPP6cGZSnd_X01X01X11_X11(position,this->finish + -1,this->finish);
    *position = pcVar1;
    ppcVar4 = this->finish;
  }
  this->finish = ppcVar4 + 1;
  return;
}

cSoundCacheItem** cSoundCacheItem ** copy_backward<cSoundCacheItem **, cSoundCacheItem **>(cSoundCacheItem **first, cSoundCacheItem **last, cSoundCacheItem **result) {
  if (first != last) {
    do {
      last = last + -1;
      result = result + -1;
      *result = *last;
    } while (first != last);
  }
  return result;
}

cSoundCacheItem** cSoundCacheItem ** uninitialized_copy<cSoundCacheItem **, cSoundCacheItem **>(cSoundCacheItem **first, cSoundCacheItem **last, cSoundCacheItem **result) {
	cSoundCacheItem **p;
	cSoundCacheItem *&value;
	void *pAddress;
	
  cSoundCacheItem *pcVar1;
  cSoundCacheItem **ppcVar2;
  
  ppcVar2 = result;
  if (first != last) {
    do {
      pcVar1 = *first;
      first = first + 1;
      result = ppcVar2 + 1;
      *ppcVar2 = pcVar1;
      ppcVar2 = result;
    } while (first != last);
  }
  return result;
}

void vector<cSoundCacheItem *, __malloc_alloc_template<0> >::insert_aux(cSoundCacheItem **position, cSoundCacheItem *&x) {
	cSoundCacheItem *x_copy;
	vector<cSoundCacheItem *,__malloc_alloc_template<0> > *this;
	vector<cSoundCacheItem *,__malloc_alloc_template<0> > *this;
	vector<cSoundCacheItem *,__malloc_alloc_template<0> > *this;
	void *result;
	vector<cSoundCacheItem *,__malloc_alloc_template<0> > *this;
	vector<cSoundCacheItem *,__malloc_alloc_template<0> > *this;
	cSoundCacheItem **p;
	cSoundCacheItem *&value;
	void *pAddress;
	vector<cSoundCacheItem *,__malloc_alloc_template<0> > *this;
	vector<cSoundCacheItem *,__malloc_alloc_template<0> > *this;
	vector<cSoundCacheItem *,__malloc_alloc_template<0> > *this;
	vector<cSoundCacheItem *,__malloc_alloc_template<0> > *this;
	cSoundCacheItem **first;
	cSoundCacheItem **pointer;
	vector<cSoundCacheItem *,__malloc_alloc_template<0> > *this;
	
  cSoundCacheItem *pcVar1;
  uint size;
  cSoundCacheItem **ppcVar2;
  int iVar3;
  cSoundCacheItem **ppcVar4;
  int iVar5;
  
  ppcVar2 = this->finish;
  if (ppcVar2 == this->end_of_storage) {
    iVar5 = (int)ppcVar2 - (int)this->start >> 2;
    iVar3 = 1;
    if (iVar5 != 0) {
      iVar3 = iVar5 << 1;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    size = iVar3 << 2;
    if (iVar3 == 0) {
      ppcVar2 = (cSoundCacheItem **)0x0;
      size = 0;
    }
    else {
      ppcVar2 = (cSoundCacheItem **)malloc(size);
      if (ppcVar2 == (cSoundCacheItem **)0x0) {
        ppcVar2 = (cSoundCacheItem **)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
      }
    }
                    /* end of inlined section */
                    /* end of inlined section */
    uninitialized_copy__H2ZPP15cSoundCacheItemZPP15cSoundCacheItem_X01X01X11_X11
              (this->start,position,ppcVar2);
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *(cSoundCacheItem **)((int)ppcVar2 + ((int)position - (int)this->start)) = *x;
                    /* end of inlined section */
    uninitialized_copy__H2ZPP15cSoundCacheItemZPP15cSoundCacheItem_X01X01X11_X11
              (position,this->finish,
               (cSoundCacheItem **)((int)ppcVar2 + (int)position + (4 - (int)this->start)));
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    ppcVar4 = this->start;
    if (ppcVar4 == this->finish) {
      ppcVar4 = this->start;
    }
    else {
      do {
        ppcVar4 = ppcVar4 + 1;
      } while (ppcVar4 != this->finish);
                    /* end of inlined section */
      ppcVar4 = this->start;
    }
                    /* inlined from c:/eor/src2/games/sims/MSrc/alloc.h */
    if ((ppcVar4 != (cSoundCacheItem **)0x0) && ((int)this->end_of_storage - (int)ppcVar4 >> 2 != 0)
       ) {
      free(ppcVar4);
                    /* end of inlined section */
    }
    ppcVar4 = ppcVar2 + iVar5;
    this->start = ppcVar2;
    this->end_of_storage = (cSoundCacheItem **)((int)ppcVar2 + size);
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/algobase.h */
    *ppcVar2 = ppcVar2[-1];
                    /* end of inlined section */
    pcVar1 = *x;
    copy_backward__H2ZPP15cSoundCacheItemZPP15cSoundCacheItem_X01X01X11_X11
              (position,this->finish + -1,this->finish);
    *position = pcVar1;
    ppcVar4 = this->finish;
  }
  this->finish = ppcVar4 + 1;
  return;
}

void* cGZSnd::operator new(unsigned int size) {
  void *__s;
  
  __s = malloc(size);
  memset(__s,0,(long)(int)size);
  return __s;
}

void cGZSnd::operator delete(void *ptr) {
  free(ptr);
  return;
}

void* cGZMusic::operator new(unsigned int size) {
  void *__s;
  
  __s = malloc(size);
  memset(__s,0,(long)(int)size);
  return __s;
}

void cGZMusic::operator delete(void *ptr) {
  free(ptr);
  return;
}

void cGZSndSys::StopLoadLoop() {
  *(undefined4 *)&this->m_bStopLoadLoopRequested = 1;
  return;
}

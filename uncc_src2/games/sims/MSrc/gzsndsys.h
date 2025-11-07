// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_GZSNDSYS_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_GZSNDSYS_H

typedef unsigned int Uint32;

enum EAudioStreamSymbol {
	UNDEFINED_AUDIOSTREAM = 0,
	BEAUMONT_AUDIOSTREAM = 1008362542,
	BUILD1_AUDIOSTREAM = 1509335895,
	BUILD2_AUDIOSTREAM = -1056967955,
	BUILD3_AUDIOSTREAM = -1208434053,
	BUY1_AUDIOSTREAM = 1082738134,
	BUY2_AUDIOSTREAM = -645917588,
	BUY3_AUDIOSTREAM = -1366874886,
	DEVILSDREAM_AUDIOSTREAM = 277325545,
	LOADLOOP_AUDIOSTREAM = 1990853981,
	NHOOD1_AUDIOSTREAM = -1855336038,
	NHOOD2_AUDIOSTREAM = 140541984,
	NHOOD3_AUDIOSTREAM = 2137501878,
	ROCK1_AUDIOSTREAM = 1997113008,
	ROCK2_AUDIOSTREAM = -301934838,
	ROCK3_AUDIOSTREAM = -1727535204,
	SALLYGOODIN_AUDIOSTREAM = -943723166,
	SHP_COUNTRY1_AUDIOSTREAM = -144341720,
	SHP_COUNTRY2_AUDIOSTREAM = 1852626066,
	SHP_COUNTRY5_AUDIOSTREAM = -267894479,
	SHP_RAP1_AUDIOSTREAM = -2070201073,
	SHP_RAP2_AUDIOSTREAM = 496135349,
	SHP_RAP3_AUDIOSTREAM = 1788173347
};

struct cIGZSnd {
	__vtbl_ptr_type *$vf901;
	
	cIGZSnd& operator=();
	cIGZSnd();
	cIGZSnd();
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
	/* vtable[12] */ virtual bool SetVolume();
	/* vtable[13] */ virtual bool FadeVolume();
	/* vtable[14] */ virtual Sint32 GetPan();
	/* vtable[15] */ virtual bool SetPan();
	/* vtable[16] */ virtual Sint32 GetFrequency();
	/* vtable[17] */ virtual bool SetFrequency();
	/* vtable[18] */ virtual bool SetPosition();
};

struct cIGZSndSys {
	__vtbl_ptr_type *$vf881;
	
	cIGZSndSys& operator=();
	cIGZSndSys();
	cIGZSndSys();
	/* vtable[1] */ virtual cIGZSndSys(cIGZSndSys*, int, void);
	/* vtable[2] */ virtual bool Initialize();
	/* vtable[3] */ virtual void Update();
	/* vtable[4] */ virtual cIGZSnd* CreateSoundEffect();
	/* vtable[5] */ virtual cIGZSnd* CreateAudioStream();
	/* vtable[6] */ virtual void StopLoadLoop();
	static cIGZSndSys* CreateInstance(/* parameters unknown */);
};

extern __vtbl_ptr_type cGZSndSys virtual table[8];
extern __vtbl_ptr_type cGZMusic virtual table[21];
extern __vtbl_ptr_type cGZSnd virtual table[21];
extern __vtbl_ptr_type cIGZSndSys virtual table[8];
extern int cSoundCacheItem::_iNumWaitingOnLoad;

void cSoundCacheItem::~cSoundCacheItem(int __in_chrg);
void cIGZSndSys::~cIGZSndSys(int __in_chrg);
void cGZSndSys::~cGZSndSys(int __in_chrg);
void cGZSnd::~cGZSnd(int __in_chrg);
void cGZMusic::~cGZMusic(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
cGZSnd** cGZSnd ** copy_backward<cGZSnd **, cGZSnd **>(cGZSnd **first, cGZSnd **last, cGZSnd **result);
cGZSnd** cGZSnd ** uninitialized_copy<cGZSnd **, cGZSnd **>(cGZSnd **first, cGZSnd **last, cGZSnd **result);
void vector<cGZSnd *, __malloc_alloc_template<0> >::insert_aux(cGZSnd **position, cGZSnd *&x);
cSoundCacheItem** cSoundCacheItem ** copy_backward<cSoundCacheItem **, cSoundCacheItem **>(cSoundCacheItem **first, cSoundCacheItem **last, cSoundCacheItem **result);
cSoundCacheItem** cSoundCacheItem ** uninitialized_copy<cSoundCacheItem **, cSoundCacheItem **>(cSoundCacheItem **first, cSoundCacheItem **last, cSoundCacheItem **result);
void vector<cSoundCacheItem *, __malloc_alloc_template<0> >::insert_aux(cSoundCacheItem **position, cSoundCacheItem *&x);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_GZSNDSYS_H

// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_MSRC_BOXX_H
#define C__EOR_SRC2_GAMES_SIMS_MSRC_BOXX_H

typedef ERQTable<snd::EventMapping> EventTable;
typedef ERQTable<snd::HitPatch> HitPatchTable;
typedef ERQTable<snd::Patch> PatchTable;
typedef ERQTable<snd::Track> TrackTable;
typedef ERQTable<snd::GlobalHitlist> GlobalHitlistTable;

struct cGameModeManager {
protected:
	Sint32 m_lMode;
	bool m_bPaused;
	
public:
	cGameModeManager& operator=();
	cGameModeManager();
	cGameModeManager();
	void Init();
	void Shutdown();
	void FadeAndKill();
	void Kill();
	void Update();
	void SetMode(Sint32 lMode);
	Sint32 Mode();
	void Pause();
	void Unpause();
protected:
	cHitMan* HitMan();
};

struct multimap<const int,int,less<const int>,__malloc_alloc_template<0> > {
private:
	rb_tree<const int,pair<const int,int>,select1st<pair<const int,int> >,less<const int>,__malloc_alloc_template<0> > t;
	
public:
	multimap(multimap<const int,int,less<const int>,__malloc_alloc_template<0> >*, int, void);
	multimap();
	multimap();
	multimap();
	multimap();
	multimap();
	multimap();
	multimap();
	multimap<const int,int,less<const int>,__malloc_alloc_template<0> >& operator=();
	less<const int> key_comp();
	value_compare value_comp();
	__rb_tree_iterator<pair<const int,int> > begin();
	__rb_tree_const_iterator<pair<const int,int> > begin();
	__rb_tree_iterator<pair<const int,int> > end();
	__rb_tree_const_iterator<pair<const int,int> > end();
	reverse_bidirectional_iterator<__rb_tree_iterator<pair<const int,int> >,pair<const int,int>,pair<const int,int> &,int> rbegin();
	reverse_bidirectional_iterator<__rb_tree_iterator<pair<const int,int> >,pair<const int,int>,pair<const int,int> &,int> rend();
	reverse_bidirectional_iterator<__rb_tree_const_iterator<pair<const int,int> >,pair<const int,int>,const pair<const int,int> &,int> rbegin();
	reverse_bidirectional_iterator<__rb_tree_const_iterator<pair<const int,int> >,pair<const int,int>,const pair<const int,int> &,int> rend();
	bool empty();
	unsigned int size();
	unsigned int max_size();
	void swap();
	__rb_tree_iterator<pair<const int,int> > insert();
	__rb_tree_iterator<pair<const int,int> > insert();
	void insert();
	void insert();
	void erase();
	unsigned int erase();
	void erase();
	void clear();
	__rb_tree_iterator<pair<const int,int> > find();
	__rb_tree_const_iterator<pair<const int,int> > find();
	unsigned int count();
	__rb_tree_iterator<pair<const int,int> > lower_bound();
	__rb_tree_const_iterator<pair<const int,int> > lower_bound();
	__rb_tree_iterator<pair<const int,int> > upper_bound();
	__rb_tree_const_iterator<pair<const int,int> > upper_bound();
	pair<__rb_tree_iterator<pair<const int,int> >,__rb_tree_iterator<pair<const int,int> > > equal_range();
	pair<__rb_tree_const_iterator<pair<const int,int> >,__rb_tree_const_iterator<pair<const int,int> > > equal_range();
};

struct cBoxX {
	Uint32 m_lKludgeTimerAge;
	bool m_bAppInFocus;
	bool m_bPaused;
	bool m_bSoundEnabled;
	bool m_bMusicEnabled;
	bool m_bStereoInUse;
	bool m_bTVInUse;
	Sint32 m_iMusicVolPercent;
	Sint32 m_iTeleVolPercent;
	cHitTimer *m_pSystemTimer;
	Sint32 m_lTimeOfLastKillAll;
	Sint32 m_lTimeLastUpdate;
	EventTable *m_pEventTable;
	HitPatchTable *m_pHitPatchTable;
	PatchTable *m_pPatchTable;
	TrackTable *m_pTrackTable;
	GlobalHitlistTable *m_pGlobalHitlistTable;
	Sint32 m_lSimSpeed;
	multimap<const int,int,less<const int>,__malloc_alloc_template<0> > m_InstanceIdFromSndobId;
	cGameModeManager m_GameModeManager;
	Sint32 m_lRawSfxVolume;
	Sint32 m_lRawMusicVolume;
	Sint32 m_lRawVoxVolume;
	cFreshTimer *m_pFreshTimer;
	cFreshScore *m_pOutdoorFreshScore;
	cFreshPlayer *m_pOutdoorFreshPlayer;
	ERQuickdata *m_pObjectData;
	__vtbl_ptr_type *$vf883;
	
	cBoxX& operator=();
	cBoxX();
	cBoxX();
	/* vtable[1] */ virtual cBoxX(cBoxX*, int, void);
	bool Init();
	bool Shutdown();
	Sint32 Event(Sint32 lEventNum, Sint32 lArg1, Sint32 lArg2, Sint32 lArg3, Sint32 lArg4);
	bool CheckPriority(Sint32 lSndobId);
	/* vtable[2] */ virtual void Update(Uint32 lArg);
	cHitMan* HitMan();
	bool MappedEvent(EventMapping *pEventMapping, Sint32 lSourceId, Sint32 lArg3, Sint32 lArg4);
	Sint32 AvailableHitListId();
protected:
	void LoadEventMappings();
	void LoadPatches();
	void LoadTracks();
	void LoadHitLists();
	bool GetInstanceVolPan(Sint32 lInstId, Sint32 &lVol, Sint32 &lPan, cSoundObject *pSndob);
	cSoundCacheHandle SoundObject(int lSndObId);
	void UpdateSndobVolPan(__rb_tree_iterator<pair<const int,int> > itBegin, __rb_tree_iterator<pair<const int,int> > itEnd);
	void UpdateAllSndobVolPan();
	void UpdateSndobVolPan();
	void KillSource(Sint32 lSourceId);
	bool GetSndobVolPan(Sint32 lSndobId, Sint32 &lVol, Sint32 &lPan);
	__rb_tree_iterator<pair<const int,int> > FindSndobInstancePair(Sint32 lSndobId, Sint32 lInstanceId);
	bool IsInInstanceMap(Sint32 lSndobId, Sint32 lInstanceId);
	void AddToInstanceMap(Sint32 lSndobId, Sint32 lInstanceId);
	void AddUniquelyToInstanceMap(Sint32 lSndobId, Sint32 lInstanceId);
	void RemoveFromInstanceMap(Sint32 lSndobId, Sint32 lInstanceId);
	Sint32 SndobNumInstances(Sint32 lSndobId);
	__rb_tree_iterator<pair<const int,int> > begin_instance(Sint32 lSndobId);
	__rb_tree_iterator<pair<const int,int> > end_instance(Sint32 lSndobId);
	void Pause();
	void Unpause();
	void UpdateNiteLoop();
};

struct EventMapping {
	int alArg[6];
};

extern bool g_bBoxXIsInitted;
extern Sint32 g_lTestPianoSfxId;
extern Sint32 g_lTestPianoSkill;
extern Sint32 g_lTestPianoInstanceId;
extern bool g_bPrintEvents;
extern bool g_bPrintVox;
extern bool g_bDebugEventsOn;
extern bool g_bDebugSamplesOn;
extern bool g_bDebugTracksOn;
extern __vtbl_ptr_type cBoxX virtual table[4];

bool BoxxGlobalGetSourceParamValue(Sint32 lSourceId, Sint32 lParamNum, Sint32 *plValue);
void cBoxX::~cBoxX(int __in_chrg);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
__rb_tree_const_iterator<int> rb_tree<int, int, identity<int>, less<int>, __malloc_alloc_template<0> >::find(Sint32 &k);
void rb_tree<int, pair<int, int>, select1st<pair<int, int> >, less<int>, __malloc_alloc_template<0> >::__erase(__rb_tree_node<pair<const int,int> > *x);
__rb_tree_iterator<pair<const int,int> > rb_tree<int, pair<int, int>, select1st<pair<int, int> >, less<int>, __malloc_alloc_template<0> >::lower_bound(int &k);
__rb_tree_iterator<pair<const int,int> > rb_tree<int, pair<int, int>, select1st<pair<int, int> >, less<int>, __malloc_alloc_template<0> >::upper_bound(int &k);
void rb_tree<int, pair<int, int>, select1st<pair<int, int> >, less<int>, __malloc_alloc_template<0> >::erase(__rb_tree_iterator<pair<const int,int> > first, __rb_tree_iterator<pair<const int,int> > last);
unsigned int rb_tree<int, pair<int, int>, select1st<pair<int, int> >, less<int>, __malloc_alloc_template<0> >::erase(int &x);
__rb_tree_iterator<pair<const int,int> > rb_tree<int, pair<int, int>, select1st<pair<int, int> >, less<int>, __malloc_alloc_template<0> >::__insert(__rb_tree_node_base *x_, __rb_tree_node_base *y_, pair<const int,int> &v);
__rb_tree_iterator<pair<const int,int> > rb_tree<int, pair<int, int>, select1st<pair<int, int> >, less<int>, __malloc_alloc_template<0> >::insert_equal(pair<const int,int> &v);
__rb_tree_const_iterator<pair<const int,int> > rb_tree<int, pair<int, int>, select1st<pair<int, int> >, less<int>, __malloc_alloc_template<0> >::lower_bound(int &k);
__rb_tree_const_iterator<pair<const int,int> > rb_tree<int, pair<int, int>, select1st<pair<int, int> >, less<int>, __malloc_alloc_template<0> >::upper_bound(int &k);
unsigned int rb_tree<int, pair<int, int>, select1st<pair<int, int> >, less<int>, __malloc_alloc_template<0> >::count(int &k);

#endif // C__EOR_SRC2_GAMES_SIMS_MSRC_BOXX_H
